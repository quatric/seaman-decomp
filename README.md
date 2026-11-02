# seaman-decomp

A decompilation of **Seaman** (Sega Dreamcast, 1999/2000) and a work-in-progress port of it to the Nintendo Wii.

The SH-4 program (`1ST_READ.BIN`) was decompiled with Ghidra. The output was cleaned up and turned into C++ that builds for the Wii
with devkitPPC. Code that the decompile can't express faithfully runs in a built-in SH-4 interpreter, and the Dreamcast hardware
(PowerVR2 display lists, AICA sound chip with its ARM7, G2 DMA, GD-ROM, Maple input) is emulated or replaced by host code.

**No game data is included.** You need your own copy of the game. Put its files (`1ST_READ.BIN`, `ADXPACK.AFS`,
`MANATEE.DRV`, `SEAMANSOUND.MLT`, `TMCPACK.DAT`, ...) in `disc/`.

## Status

- Boots past the warning screen and the title into the aquarium. 3D rendering goes through GX.
- ADX audio (music, ambience, voice) plays through host mwSnd ports.
- Manatee sound effects play: MANATEE.DRV runs on an emulated ARM7/AICA, and host commands arrive by emulated G2 DMA.
- Not done: speech recognition / microphone, narration, MIDI music verification, the AICA DSP, testing on real hardware.

`notes/README.md` is the detailed working log: what each subsystem does, what was wrong and how it was fixed.

## Layout

| Path | Contents |
| --- | --- |
| `src/` | Ghidra decompilation: `decompiled_all.c`, per-module files, recovered headers |
| `port/wii/` | Wii port: `exec/` generated units, `host/` the host layer (SH-4 interpreter, DSI hardware handler, GX renderer, audio, AICA/ARM7, pad) |
| `port/exec`, `port/fn` | earlier x86 harness build of the same units (used for differential tracing) |
| `tools/` | generators and build scripts (`wii_xform.py`, `wii_build.sh`, `wii_link.sh`, `wii_sdimage.py`, ...) |
| `ghidra_scripts/` | Ghidra scripts used for the export and clean-up passes |
| `notes/` | working log, name tables, asset manifests, analysis output |

## Building (Wii)

Requirements: devkitPro with devkitPPC and libogc, Python 3, and the game files in `disc/`.

```sh
sh tools/wii_build.sh "$PWD" xform   # regenerate port/wii/exec from the decompile, compile, link
sh tools/wii_link.sh "$PWD"          # rebuild only the host layer and relink -> port/wii/seaman.dol
```

The DOL embeds `disc/1ST_READ.BIN` at build time and reads the other files from an SD card or image
(`tools/wii_sdimage.py` builds one for Dolphin).

## Legal

Seaman is © Sega / Vivarium. This repository contains no game binaries or assets; it is a research and preservation project.
