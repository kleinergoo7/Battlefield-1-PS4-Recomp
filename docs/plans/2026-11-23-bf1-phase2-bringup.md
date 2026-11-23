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

## Current blocker

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
