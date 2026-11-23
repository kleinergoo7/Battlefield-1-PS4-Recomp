# BF1 native port — phase 1: executable and import inventory

## Prepared from the user-supplied dump

Commands:
```
python3 scripts/prepare.py '/mnt/shared/ps4-roms/Battlefield™ 1' --out out/bf1
python3 scripts/link_modules.py '/mnt/shared/ps4-roms/Battlefield™ 1' --out out/bf1
```

Results:
- `out/bf1/eboot.elf` — 74,461,802 bytes (converted ELF)
- `out/bf1/boot.bin` — 94,070,768 bytes (relocated flat image)
- `out/bf1/boot-linked.bin` — 96,744,568 bytes (G3PROBE5, eboot + libc + Fios2)
- entry `0x8790`, image 82.37 MB, 785 imported symbols, 362,431 relocations
- 62 required modules, 6 bundled PRXs
- linked natively: `libc.prx@0x4e90000`, `libSceFios2.prx@0x4f80000`
- 206 native bindings, 646 imports left for the host runtime, 5531 fs loads patched

## Unresolved import inventory

Named with shadPS4's public aerolib NID table:
- 646 unresolved imports across 55 libraries
- 630 resolve to names; 16 are still unknown (mostly JavaScriptCore/Twinkle privates)
- 401 already referenced somewhere in this port's `src/` or `gpu/shim/`
- **229 not found in the current source** — these are the bring-up worklist

Largest remaining gaps (not found in current source):

| Library | Missing |
|---|---|
| libSceGnmDriver | 48 |
| libJavaScriptCore | 35 |
| libkernel | 30 |
| libSceSystemGesture | 12 |
| libSceNpParty | 10 |
| libScePosix | 10 |
| libSceAudio3d | 8 |
| libSceNpWebApi | 7 |
| dialog libraries | ~11 |

Generated inventories (outside the repo):
- `/tmp/opencode/bf1/bf1-nids.tsv` — shadPS4 log-derived NID names
- `/tmp/opencode/bf1/bf1-unresolved.tsv` — unresolved `nid#lib` pairs
- `/tmp/opencode/bf1/bf1-unresolved-named.tsv` — named unresolved imports

## Interpretation

- `libSceGnmDriver` gaps are likely satisfied by the vendored GPU shim rather than `src/runtime_*.c`;
  verify against `gpu/shadps4` bindings before writing HLE stubs.
- `libJavaScriptCore` / `Extension.Twinkle.Codec` privates are bundled game modules; prefer linking
  them or stubbing minimally. Most are irrelevant to offline single-player.
- NP/dialog/web/voice/network libraries can be offline stubs returning safe "signed out"/"offline"
  values — no real PSN or PS4 servers in phase 1.
- The 16 unknown NIDs are the only ones that may eventually need targeted disassembly (Ghidra/rizin),
  but only if they are on the critical boot path.

## Next steps

1. Map the 229 missing names to runtime export slots / GPU shim bindings.
2. Add offline-safe stubs for NP, dialogs, web browser, and other service libraries.
3. Implement or reuse GNM bindings required up to first frame.
4. Build a BF1 probe/launcher target using the existing Rust launcher configuration.
5. Milestone: first `probe` run reaches the game's entry point without unresolved-import abort.
