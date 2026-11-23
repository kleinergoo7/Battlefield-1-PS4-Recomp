# BF1 native port — phase 2: runtime bring-up

## Progress

The prepared BF1 image now reaches and enters the game's original x86-64 entry point:

```
Entering original x86-64 code at guest offset 0x8790
```

Before that, the following were added:

- `src/import_names_bf1.inc` — 244 BF1 NID→symbol mappings, so existing name-based
  runtime export tables resolve BF1 imports.
- `src/runtime.c` — stubs for `sceLibcHeapGetTraceInfo`, `sceRandomGetRandomNumber`,
  `pthread_mutexattr_setpshared`, all 16 unknown game-private NIDs, and a placeholder
  `sceKernelLoadStartModule`.
- `src/runtime_eventflag.c` — real event-flag create/set/wait/delete with pthread
  mutex/cond.
- `src/runtime_kernel.c` — `sceKernelGetModuleList`, `GetModuleInfo`,
  `GetModuleInfoForUnwind`, `sceKernelLoadStartModule`.
- `src/runtime_thread.c` — pthread attr get/set variants used during libc startup.
- `src/runtime_services.c` — offline coredump stubs.
- `scripts/link_modules.py` — allow root-level PRX modules (BF1's `Engine.BuildInfo...`
  lives in the game root, not `sce_module/`).

`Engine.BuildInfo_gen4b_retail.prx` is now linked as module 2 at `0x5110000`.

## Updated progress (later iterations)

After the singleton fix, the game progressed much further through initialization:

- trophies loaded (32), multiple system modules loaded, audio port opened,
  several guest threads created, direct memory allocated (2 MiB).
- All remaining named imports were given a fallback stub table
  (`src/runtime_bf1_stubs.c`, 626 entries) placed **after** the GPU resolver so
  GNM/VideoOut still bind to shadPS4.

Current failure is a guest fault at offset `0xa9e4`, inside a recursive
copy-like function, with `rsp == rbp` at the thread stack top. Likely a blanket
stub returned 0 where a pointer/size was expected, feeding a bad value into the
copy routine.

## Later diagnosis (logging stubs)

Making every fallback stub log its name showed the last calls before the fault:
`sceKernelAvailableDirectMemorySize` (now implemented from `POOL_SIZE - live_bytes`),
then NP-party/webapi stubs, then a deliberate game assertion
`movl $0xbeef, 0x0` at guest offset `0x70473`, immediately after a call whose PLT
index 8 resolves to `sceKernelDeleteEventFlag`. Event-flag create logs show handles
1..7 are created by our host implementation, but no delete log appears — the delete
call is still bound to libc.prx's native implementation, which does not know our
handles, so it fails and the game asserts.

`HOST_OVERRIDES` in `scripts/link_modules.py` was extended to cover event-flag NIDs,
but the delete call still does not reach the host resolver. Next step: inspect how
that specific call site is bound (link.json/GOT) rather than guessing.

## Original blocker (resolved)

After game entry, BF1's lazy singleton initializer:

1. calls `sceKernelLoadStartModule("Engine.BuildInfo_Gen4b_retail.prx")`,
2. calls `sceKernelDlsym(handle, symbol, &ptr)`,
3. stores `ptr` in a global at image offset `0x499c4b0`,
4. later dereferences it through a vtable at `0x767cf`.

The `dlsym` call is a direct call into linked libc.prx (not an eboot import), so it
cannot be overridden via `runtime_resolve()`. It returns null because the fake module
handle is not in libc.prx's internal module table. The result is:

```
Guest fault (signal 11) at guest offset 0x767cf, address (nil)
```

Disassembly of the lazy init (`boot.bin` file offset `0xb9e710`) confirms:
`call LoadStartModule` → `call Dlsym` → `mov %rax,(global)`.

## Next options

1. Populate libc.prx's internal module table from the runtime when
   `sceKernelLoadStartModule` is called (proper dynamic module loading).
2. Patch the lazy-init function to skip module load/dlsym and point the global at a
   dummy singleton object written into unused guest memory by `patches.bin`.
3. Fully link/initialize `EAWebKit.prx` and related PRXs with real module registration.

Option 1 is the correct long-term fix; option 2 is the fastest path to a first frame.

## ABI fixes and stable loading (2026-11-23, later)

- `sceKernelAvailableDirectMemorySize` was exported with the wrong signature
  (no args, returns size). Corrected to the real 5-argument form:
  `searchStart, searchEnd, alignment, u64* physOut, u64* sizeOut`, scanning the
  allocated direct-memory blocks for the largest aligned free run. BF1 now prints
  correct values (`Mem free: 3909.78 MB`, `Largest address: 47aa0000`).
- `sceLibcHeapGetTraceInfo` now fills the correct 32-byte struct with non-null
  mspace/mstate tables.
- Added patch `Skip offline assertion` (ret at guest 0x470473) and
  `Skip diagnostic heap dump` (ret at function entry 0x46f180). The second patch
  removed the remaining null-call crash.
- NP handle-creation stubs now return positive ids instead of 0.
- Result: the native RECOMP no longer crashes; it opens a 1920x1016 window and
  renders BF1's loading spinner. It remains stuck on a spinner with worker
  threads in futex waits (possibly an unsignaled semaphore or asset-load wait).

## Loader stall fixes (2026-11-23, later)

- `sleep_ns(0)` now calls `sched_yield()` instead of `nanosleep({0,0})`; the guest
  had made 543 million zero-duration sleeps in 300 s without yielding, starving
  job workers.
- Added `sceKernelClearEventFlag` and a timed `sceKernelWaitEventFlag`
  implementation; both were previously zero-returning/infinite stubs.
- Added correct 3-argument `sceKernelGetdents` alias (BF1 uses this instead of
  `sceKernelGetdirentries`) so asset directory enumeration works.
- Added case-insensitive guest path resolution (separate commit).
- Result: RECOMP still shows only the loading spinner; longer run in progress.

## Direct-memory grow remap (2026-11-23, later)

- Addressed the guest OOB write at 0x92afd1: `MAP_FIXED|MAP_NO_OVERWRITE`
  grow-remaps of an existing direct mapping were refused, leaving a stale short
  mapping. `src/runtime_memory.c place()` now allows same-base direct remaps.
- Added failure logging in `direct_map()`.
- Verified: `mapped direct memory 0x383ccc0000, size=4259840 (over a mapping)`
  replaced the previous failed map; no map errors, no crash in a 150 s run.
- Current 300 s run continues to grow its log (55k+ lines), allocating direct
  memory and compiling/reading pipeline shaders while still showing the spinner.
