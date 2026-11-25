# Battlefield 1 PS4 Recomp — Native PC Port (BF1 PlayStation 4 Recompilation for Windows & Linux)

**Battlefield 1 (BF1) for PlayStation 4 (PS4, CUSA02429), recompiled into a native PC port for Windows 10/11 and Linux.**
This project is a **fork of [SpartanPort](https://github.com/FelipePrado0/SpartanPort)** (the God of War III Remastered
PS4-to-PC native port), adapted to bring **Battlefield 1 (Frostbite engine)** to PC the same way: the original
x86-64 game code runs directly on your PC CPU with a custom runtime. Graphics go through SpartanPort's Vulkan video
core, which is derived from **shadPS4** — so this project uses shadPS4 GPU technology *via* SpartanPort, not as a
shadPS4 fork. Goal: offline single-player campaign gameplay on PC without emulation overhead.

> **No game files are included.** You must supply a dump of **your own PS4 copy of Battlefield 1 (CUSA02429, v1.00)**.
> This project is not affiliated with or endorsed by Electronic Arts, DICE, or Sony Interactive Entertainment.
> Battlefield is a trademark of Electronic Arts.

## Project status (experimental)

- Base: [SpartanPort](https://github.com/FelipePrado0/SpartanPort) fast native runtime + shadPS4 GPU core, adapted for BF1.
- Target: **offline single-player campaign** — boot → title → main menu → first-person gameplay. No PSN, no servers, no multiplayer.
- Established via shadPS4 testing: BF1 boots to title, main menu, and first-person campaign gameplay at 1920x1080.
- Active work: module loading/inventory (`src/runtime_bf1_stubs.c`, `import_names_bf1.inc`), CUSA02429 patches (`patches/CUSA02429.xml`),
  Frostbite GPU fixes, offline stubs for NP/PSN/network libraries. See [`docs/plans/`](docs/plans/) for phase plans.

## How it works (and where shadPS4 fits in)

This repo was forked from SpartanPort, so it inherits SpartanPort's architecture:

1. The PS4 executable (x86-64) is statically recompiled: game code executes natively on PC, PlayStation system calls are
   reimplemented by the runtime (`src/runtime*.c` — this fork adds BF1-specific stubs, import tables and CUSA02429 patches).
2. GPU commands are translated by SpartanPort's Vulkan video core (`gpu/shadps4`), which SpartanPort derived from the
   shadPS4 emulator project — no full-console emulation, only the GPU backend is reused.
3. The `bf1-shadps4-gpu` branch experimentally swaps that derived core for the **upstream shadPS4 renderer directly**
   (v0.21.1 WIP) to test whether SpartanPort's GPU-core divergence causes BF1's blown-out lighting.

## Requirements

- A dump from **your own PlayStation 4 copy of Battlefield 1 (CUSA02429, v1.00)**.
- Windows 10/11 or 64-bit Linux with a Vulkan 1.3-capable GPU and driver.
- Build tools: CMake, C++20 compiler, plus SDL3, FFmpeg, fmt, Boost, robin-map, xxhash, glslang, VulkanMemoryAllocator, Zydis
  (see `docs/plans/2026-11-22-bf1-phase0.md` for the tested Fedora package list).
- A PC that can run Vulkan games — integrated graphics will struggle; a discrete GPU is recommended.

## Build & run

```sh
bash build.sh
```

See [`docs/plans/`](docs/plans/) (phase 0/1/2 docs) and `CLAUDE.md` for the bring-up workflow and test milestones
(boot → title → menu → checkpoint → first gameplay frame → stable 10-minute offline session).

## Branches

| Branch | Purpose |
|---|---|
| `bf1-phase0` (default) | BF1 bring-up: runtime stubs, module inventory, CUSA02429 patches, phase plans |
| `bf1-shadps4-gpu` | Experimental upstream shadPS4 GPU core swap (lighting/post-process investigation) |
| `main` | Upstream God of War III Remastered SpartanPort base (reference only, not BF1) |

## FAQ

**Is this an emulator?**
No. Emulators like shadPS4 simulate the whole PS4. This is a **recompilation / native port**: BF1's own code runs
directly on your CPU, and only the platform layer (OS calls, GPU backend) is reimplemented — like a source port
without the source.

**Which BF1 version is supported?**
PS4 **CUSA02429, v1.00** — the version the patches and import tables were built against.

**Does multiplayer work?**
No, and it is out of scope. This project targets offline single-player campaign only.

**Is this legal?**
The code here contains no game files and no decompiled game code. You must provide your own legally obtained dump.
Check your local laws regarding circumventing copy protection before dumping your disc.

## About / search keywords

Battlefield 1 PS4 on PC, BF1 PS4 emulator alternative, play Battlefield 1 PlayStation 4 version on computer,
CUSA02429 PC port, Frostbite engine PS4 recompilation, static recompilation PS4 to PC, shadPS4-based PC port,
Battlefield 1 native Linux port, BF1 Vulkan PC, Battlefield 1 Windows 10 11 port, PS4 game recompiled for PC.

## License

See [LICENSE](LICENSE). Third-party components (shadPS4-derived GPU core, FidelityFX, etc.) retain their own licenses.
