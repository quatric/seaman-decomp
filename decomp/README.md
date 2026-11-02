# Readable decompile

The Ghidra decompile of Seaman's `1ST_READ.BIN`, cleaned up by [`tools/readable.py`](../tools/readable.py) so it can be read.
One file per 64 KB region of the program, functions in address order, each with a header giving its address, who calls it
and the strings it uses. [`functions.tsv`](functions.tsv) lists every function with its address, file and parameter count.

This is a reading aid and does not compile as-is: Ghidra's helpers (`CONCAT44`, `SUB84`, `uStack_8._0_4_`) are left in. The Wii
port is built from its own pipeline (`tools/wii_xform.py` -> `port/wii/exec/`), not from these files.

## Conventions

- **Names.** Named functions come from the game's own strings (error messages pass `"Class::Method()"`, which names the
  function that passes it), from the tables in `notes/` and from [`tools/readable_names.tsv`](../tools/readable_names.tsv)
  (worked out while porting: sound, DMA, ADX, Ninja texture and matrix calls, vector math). CRI and Middleware library
  functions are named from their error strings (`E…:X return error in Y` names the callee X). `Class_12xxxx_mN` is method N
  of the vtable at 0x8c12xxxx; a function that stores a vtable into `*a0` is that class's `_ctor` (or `_dtor` when it is slot
  0 and frees). Small functions are named by shape: `get_field_<off>`/`set_field_<off>` (one member read or written),
  `set_fields_<off>_<off>` (two or three members), `get_field_<off>_of_field_<off>` (a member of a member), `field_ptr_<off>`,
  `get_g_<addr>`/`set_g_<addr>` (one global), `ret_const_<value>`, `noop`, and `<callee>_wrap` for a
  function that only calls a named one. These describe what the code does, not what it is for.
- **Area names.** Everything else is `<area>_sub_<address>`: the class all its named callers belong to, else the area its nearest named neighbours share (functions of one source file are linked together), else the SDK library
  whose code range it is in (`libc`, `shinobi`, `kamui`, `gfxlib`, `ninja`, `cri`, `sd`, `asr` for the voice recogniser), else
  the area most of its named callers are in, else `game`. The header comment of each says which rule placed it. An area name
  says where a function belongs, not what it does.
- **Parameters.** SH-4 passes the first four arguments in r4-r7, so they are `a0`..`a3`; further ones come from the stack
  (`s0`, `s4`, ...). Ghidra did not know how many each function takes. The real count is inferred: a parameter is kept if the
  body reads it, passes it on to a parameter that is used, or some caller passes a constant in that slot. Call sites are cut to
  match. A parameter that is kept but never read is called `unused_aN`.
- **Types.** `u8`/`u16`/`u32`/`u64` (and signed `s..`) are sized integers whose meaning is not known yet
  ([`include/seaman.h`](include/seaman.h)).
- **Globals.** Fixed addresses are `g_8cXXXXXX`, declared in [`include/globals.h`](include/globals.h) with Ghidra's type where it
  had one. String constants are written out from the program image.
- **Floating point.** Ghidra splits float code on the FPU mode at entry (`in_FPSCR_SZ`/`in_FPSCR_PR`). The game runs with single
  precision and 32-bit moves at function boundaries, so those branches are resolved. Functions that change the mode themselves
  keep their tests.
- **Leftovers.** `unaff_rN` is a register the function reads without it being a parameter (usually a value the caller left
  there). `in_PR` is the return address. `extraout_*` is a register a callee is assumed to have left. Assignments like
  `a2 = 9;` before a call are register set-up Ghidra could not attribute.

## Files

| File | Functions | Precise names | Contents (from names and strings; tentative) |
| --- | --- | --- | --- |
| [`mod_8c010000.c`](mod_8c010000.c) | 516 | 181 | runtime and C library, texture/file helpers, input, speech-recognition glue |
| [`mod_8c020000.c`](mod_8c020000.c) | 543 | 263 | file and pack loading, sound-effect wrappers, MANATEE driver load, CAnimal |
| [`mod_8c030000.c`](mod_8c030000.c) | 252 | 137 | animation (CAnimBody), events |
| [`mod_8c040000.c`](mod_8c040000.c) | 18 | 3 |  |
| [`mod_8c050000.c`](mod_8c050000.c) | 70 | 30 | creature behaviour (status, reactions) |
| [`mod_8c060000.c`](mod_8c060000.c) | 174 | 102 | creature behaviour (gratification, reactions, requests) |
| [`mod_8c070000.c`](mod_8c070000.c) | 42 | 6 |  |
| [`mod_8c080000.c`](mod_8c080000.c) | 116 | 56 | creature lines: Higyo, Squid |
| [`mod_8c090000.c`](mod_8c090000.c) | 138 | 46 | creature lines: Moth, Mushroomer |
| [`mod_8c0a0000.c`](mod_8c0a0000.c) | 155 | 57 | creature lines: Mushroomer, Spider |
| [`mod_8c0b0000.c`](mod_8c0b0000.c) | 124 | 35 | save data, ambience, epilogue |
| [`mod_8c0c0000.c`](mod_8c0c0000.c) | 234 | 95 | messages, pack index, warning screen |
| [`mod_8c0d0000.c`](mod_8c0d0000.c) | 376 | 121 | environment: tank devices, textures |
| [`mod_8c0e0000.c`](mod_8c0e0000.c) | 251 | 105 | environment: soil tank, outside |
| [`mod_8c0f0000.c`](mod_8c0f0000.c) | 264 | 92 | items and food |
| [`mod_8c100000.c`](mod_8c100000.c) | 273 | 51 | creature behaviour (Higyo line) |
| [`mod_8c110000.c`](mod_8c110000.c) | 253 | 15 |  |
| [`mod_8c120000.c`](mod_8c120000.c) | 111 | 0 |  |
| [`mod_8c1b0000.c`](mod_8c1b0000.c) | 52 | 3 | data tables |
| [`mod_8c1e0000.c`](mod_8c1e0000.c) | 36 | 7 | PowerVR helpers |
| [`mod_8c1f0000.c`](mod_8c1f0000.c) | 634 | 74 | Katana system library (syG2 DMA, semaphores, GD-ROM, Maple) |
| [`mod_8c200000.c`](mod_8c200000.c) | 367 | 60 | Katana / Ninja libraries (hardware, display) |
| [`mod_8c210000.c`](mod_8c210000.c) | 192 | 14 | Ninja graphics library |
| [`mod_8c220000.c`](mod_8c220000.c) | 87 | 14 | Ninja graphics library (float-heavy) |
| [`mod_8c230000.c`](mod_8c230000.c) | 193 | 10 | Ninja graphics library |
| [`mod_8c240000.c`](mod_8c240000.c) | 48 | 5 | Ninja library, math |
| [`mod_8c250000.c`](mod_8c250000.c) | 297 | 53 | main loop (game_frame), Ninja |
| [`mod_8c260000.c`](mod_8c260000.c) | 531 | 139 | CRI middleware: ADX, ADXF, SJ, mwRna, Manatee sd library, mwSnd |
