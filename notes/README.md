# Seaman (USA) – Dreamcast decompilation notes

## Pipeline so far
- `Seaman (USA).zip` is zstd-compressed (RVZSTD); extracted with `7zz x`. Result: GDI + 3 BIN tracks.
- `scripts/gdi_extract.py` pulls the ISO9660 filesystem out of Track 3 (LBA 45000, 2352-byte sectors).
- `disc/1ST_READ.BIN` (2,525,088 bytes) is **not scrambled**; SH-4 little-endian, load addr `0x8C010000`.
- `scripts/wrap_elf.py` wraps it as an SH ELF (`elf/1ST_READ.elf`). REA's native/Ghidra provider rejects
  SH ELF ("unsupported ELF architecture"), so analysis runs through REA's Rizin tool / local rizin.

## Layout
| Range | Contents |
|---|---|
| 0x8C010000 | entry stub: sets CCR (0xFF00001C), jumps to 0x8C1EF400 |
| 0x8C010000–0x8C130000 | code |
| 0x8C130000–0x8C1D0000 | data (filename tables, strings, tm1_*.njm etc.) |
| 0x8C1D0000–0x8C270000 | code (includes crt0 at 0x8C1EF400) |
| 0x8C1EF400 | crt0: zero BSS, ctors, **main = 0x8C0F7B20**, dtors; "SEGA" tag nearby |

Disc assets: ADXPACK.AFS (925 MB audio), GRAPHICS/*.NJ/.NJM/.NJS/.PVM/.PVR (Ninja models/motions,
PVR textures), TMCPACK.DAT/IDX, SEAMANSOUND.MLT, MANATEE.DRV, ASR16V2_*.LNG (speech recognition).

## Files
- `notes/strings.txt` – all strings (rizin izz)
- `notes/functions.txt` – raw function list (noisy, ~50k entries; prologue-seeded + aac)
- `notes/functions_code.txt` – functions restricted to code ranges (~16k, still contains false positives)
- `notes/seed_funcs.rz` – prologue-scan seed script

## Next
1. Name Katana/Ninja/KOS library functions (Ninja `njXxx`, Kamui `kmXxx`, Shinobi `gdFsXxx`, AICA) via signatures and strings.
2. Trace from main (0x8C0F7B20) to the game state machine.
3. Decompile with a SH-4 capable decompiler (Ghidra SuperH4 or rizin+rz-ghidra) – REA's own decompile tools need a supported arch.

## Ghidra (done)
- Ghidra 12.1.2 (/Applications/ghidra_12.1.2_PUBLIC), language `SuperH4:LE:32:default`, BinaryLoader base 0x8C010000.
- Project: `ghidra_proj/Seaman`. Scripts: `ghidra_scripts/SeedFuncs.java` (prologue seeds + names), `ghidra_scripts/ExportC.java`.
- Output: `src/decompiled_all.c` — 7,843 functions decompiled (1 failed, 20 s timeout each).
- Logs: `notes/ghidra_import.log`, `notes/ghidra_export.log`.

## main (0x8C0F7B20)
```
init = 0x8C0F7B70();
while (poll(0x8C286EBC /* arg */) >= 0)   // poll = 0x8C0C08AC
    frame();                              // 0x8C258E66
0x8C0F7DF8(); 0x8C1F7E48();               // shutdown / teardown
```
Next: name these, then trace init and frame into the game state machine; identify Ninja/Kamui/Shinobi calls.

## Pipeline v2 (current)
Run order against `ghidra_proj/Seaman` (all via `analyzeHeadless -process 1ST_READ.BIN -noanalysis -postScript ...`):
1. `FixEntries.java` – move function entries to the start of their register-push run (the old prologue seeds
   started at `sts.l pr` and truncated functions after the first `mov.l rN,@-r15`).
2. `ResolveIndirectCalls.java` – for each `jsr @rN`, trace back to the literal-pool load and add call refs (call graph).
3. `ApplyNames.java notes/names.tsv` – manual names.
4. `LabelAndSplit.java src/modules` – label by referenced string, decompile, split by 64 KB region,
   write `src/modules/function_index.tsv` (addr, size, name, callers, callees).
5. `python3 tools/postprocess.py <root>` – replace literal-pool pointers (`PTR_FUN_*`, `PTR_DAT_*`, `DAT_*` in code)
   with the values stored in the binary → `src/clean/mod_*.c` (direct calls, real constants). **Read these, not src/modules.**
Status: ~5,885 functions; ~20.5k indirect calls rewritten to direct calls.

## Findings
- Game is C++ (vtable ptr at +0xC in the 16-byte vector class). Debug strings give class/method names:
  CAnimal, CAnimBody, CItemGLoader, CWaterSnowList, CDCGD (disc reads), per-species *Egg / *Line classes, CHAPTER_nn.
- `main` → game_init (436 B; allocs 0x2B000 / 0x1DB000 / 0x1000 / 0xABE00 buffers, Kamui/GD init), game_poll_exit, game_frame.
- Named so far: Vec3_* (5), rand (LCG 0x41C64E6D), global_list_push (ctor/dtor registration), malloc_thunk,
  float_to_color_u8, CAnimBody_AdvanceFrame_wrapper (+ 322 string-derived `s_*` names).

## Not done
- Most functions are still `FUN_8c…`; no Kamui/Ninja/GD/AICA SDK naming; no structs/types recovered;
  decompiled C does not compile or link; no data tables (animations, dialogue) extracted.
- Realistic next steps: name SDK layer by signature, recover class layouts from vtables + the s_C* names,
  type the global object pointers (0x8C42xxxx–0x8C47xxxx BSS), then rebuild module by module.

## Naming passes added after v2 (all re-runnable: tools/*.py -> notes/names_*.tsv -> ApplyNames.java)
- `tools/name_wrappers.py` – one-call wrappers named after their callee (68).
- `tools/hw_classify.py` – functions touching TA FIFO / PVR / AICA / G2 DMA / TMU / BIOS syscall addresses (128 named; sh4_ccn matches dropped as noise).
- `tools/find_vtables.py` – vtables live in the code image (e.g. Vec3 at 0x8C129A7C, layout `[0,0,fn,...]`); 60 found, ~190 methods named `<Class>_m<slot>_<addr>`.
Vtable notes: `notes/vtables.tsv`. Many classes still `Class_<addr>` until a constructor/string ties them to a name.

- `tools/propagate_hw.py` – propagates gfx/snd/dma/sys/timer categories up the call graph as `uses_<cat>_<addr>` (760). These are category labels, not real names.

## Caveats (important)
- `s_<string>_<addr>` names come from the FIRST string a function references, so they are hints, not truths.
  Example: `s_Tmcpack_idx_0c0448` (0x8C0C0444) is really a large scene-setup routine (loads GRAPHICS/COMMON sets and
  creature models: Tm1/Cpe/Sp/Mr3/gm1 *_Home.nj*), not the TMCPACK parser.
- `uses_<cat>_*` labels are call-graph categories only.
- `TMCPACK.IDX` = 40-byte name records (11,466), index-aligned with `ADXPACK.AFS` entries (11,465); see `notes/asset_manifest_afs.tsv`.
  `TMCPACK.DAT` (884,074 bytes) format is still unknown; the real parser has not been located.

## Address caveat
- `notes/strings.txt`, `notes/functions*.txt` and anything from the rizin/ELF wrapper are skewed: rizin reported string vaddrs
  0x100 higher than the true load address (e.g. TMCPACK.DAT is really at 0x8C12FC6C, rizin said 0x8C12FD6C).
  Ghidra (raw BinaryLoader at 0x8C010000), `src/` and `function_index.tsv` use correct addresses.
- No literal-pool pointer targets the TMCPACK.DAT/IDX strings directly (they sit in filename tables, e.g. next to ADXPACK.AFS /
  MANATEE.DRV near 0x8C12FC50); the loader likely indexes that table. Parser still not located.

## TMCPACK loader (found)
- `pack_open` (0x8C021520): loads the pack's index file into `this+0x9EC0C` and data file into `this+0x9EC10` (file_load_to_buffer 0x8C0211B8); sets `this->ok`.
- `pack_find_entry_by_name` (0x8C021BAC): linear scan of the index, **0x28-byte records**, max 0x8000 entries; first-char check then string compare. Confirms TMCPACK.IDX = 40-byte name records.
- Name strings live at 0x8C12FC50: SeamanSound.mlt, ADXPACK.AFS, TMCPACK.DAT (+0x1C), TMCPACK.IDX (+0x28), MANATEE.DRV; code addresses them as base+offset, which is why there were no direct pointers.
- Still unknown: how TMCPACK.DAT is read per entry (DAT is 884,074 bytes; offsets come from AFS TOC, not the IDX, which has only names).
- Pack object layout (partial, from pack_open/pack_acquire_entry_handle): `+0x00 ok`, `+0x04..` handle-slot allocator,
  `+0x9EC0C idx buffer (40-byte records)`, `+0x9EC10 dat buffer`, `+0x9EC14 name scratch`, `+0x9EC98 handle table (slot, entryIndex) x8 bytes`.
  Names: pack_acquire_entry_handle 0x8C021B10 (13 callers), pack_find_by_name_buffered 0x8C022068 (6 callers), handle_slot_alloc/free.

## TMCPACK format (verified against the files)
- `TMCPACK.IDX`: 11,466 records x 40 bytes = `char name[32]; u32 offset; u32 size` (little-endian). 11,414 records are non-empty.
- `TMCPACK.DAT` (884,074 B): the blobs are contiguous (offset[i+1] = offset[i] + size[i]); the last ends exactly at EOF; none out of range.
- Records are keyed by the same `.ADX` names as ADXPACK.AFS (index-aligned). Blobs are small arrays of u16; the loader
  (`pack_close_and_flush`, 0x8C0215D4) passes `dat + (offset & ~1)` and `size >> 1` (u16 count) to FUN_8c022894. Looks like per-clip
  voice/mouth data, but its meaning is inferred, not confirmed.
- Pack object has 3 handle slots (`pack_release_entry_handle` 0x8C021CE8, ctor 0x8C02147C). Manifest: `notes/asset_manifest_tmcpack.tsv`.

## CORRECTION (supersedes the hardware-classification and propagation sections above)
- The `ta_fifo_*` names were WRONG. Those functions (e.g. 0x8C0101E4, 0x8C01031C with 84 callers) are runs of 32 `div1`
  blocks = SH-4 software integer division helpers (libgcc-style). They only matched because their constants fall inside the
  broad "TA FIFO" address range used by `tools/hw_classify.py`. The 8 at 0x8C0101E4-0x8C0106DC are now `libgcc_divide_helper_*`.
- Because ~640 `uses_gfx_*` labels were propagated from them, ALL `uses_*`, `ta_fifo_*`, `vram_*`, `vram64_*` names were reverted to FUN_*.
  `tools/propagate_hw.py` and the `ta_fifo`/`vram` ranges in `tools/hw_classify.py` must not be reused as-is.
- Narrow exact-address matches (pvr/aica/g2dma/syscall/tmu/dmac) were kept but are still unverified.
- No graphics-layer functions have actually been identified yet. Current named count: ~714 of ~5,890 (many of those are string-derived hints).

- `src/headers/CAnimBody.h`: partial CAnimBody layout with per-field confidence ([H]/[M]/[L]); first hand-verified class.
- `src/headers/Vec3.h`: verified Vec3 layout (xyz + vptr at +0xC); all 5 methods read in full.

## game_frame (0x8C258E66) - read in full, behaviour [M] (meaning of the individual callees not yet confirmed)
1. Reads a timestamp via a timer function and stores it in a global.
2. If a global enable flag is set, it spins while a second flag is set and the elapsed count is below a limit
   (a frame limiter / wait-for-vsync style loop). If the limit was not reached it calls a fallback routine (0x8C258E50).
3. Sets the flag, calls a routine (0x8C258FA0), zeroes three counters, increments a global frame counter.
4. Calls two more routines (0x8C258FB4, 0x8C258FB8), stores a fresh timestamp, and copies five values out of a struct
   pointed to by a global into five globals (looks like per-frame timing/input snapshot).
main loop = `game_init(); while (game_poll_exit(arg) >= 0) game_frame(); shutdown_a(); shutdown_b();`
- `src/headers/CItemGLoader.h`: item-load request list/loader notes (3 methods read in full; field names guessed [M]).

## MANATEE.DRV = AICA (sound chip) ARM driver [verified from file + loader]
- File: `SDRV` header (0x20 bytes), then ARM code starting with the exception vector table (`..00 00 ea` branch-always words), SEGA 1999 copyright string.
- `aica_driver_load_manatee` (0x8C022398) loads it with file_load_to_buffer, passes the bytes to `aica_driver_upload` (0x8C022404), then frees the buffer.
- The ARM program can be disassembled separately (rizin -a arm); it is NOT part of 1ST_READ.BIN's SH-4 code.
- Speech recognition: `ASR16V2_AEV200_FLOAT_4B.LNG` is loaded by `s_asr16v2_aev200_float_4b_lng_01cd32` (0x8C01CD30); not yet examined.

## Speech recognition loader (asr_load_language_model, 0x8C01CD30) [M]
- Guard: if a global state counter (0x8C2791B8) is < 3, reset five state globals (0x8C279258..0x8C279268) and clear speech_obj+0x5B34.
- Loads `ASR16V2_AEV200_FLOAT_4B.LNG` (name at 0x8C12FB7C, directory/extension string at +0x1C) into speech_obj+0x5B34
  via file_load_into_object_buffer (0x8C0212B8, last arg 10 looks like a priority/retry count). Returns 1 on success.
- On success: asr_init_from_model (0x8C01CE00, 1 arg) initializes the recognizer, then 0x8C01D624 is called with two more
  strings from the same table (+0x1D, +0x26). Meaning of those calls not yet read.
- If the state counter is already >= 3 it returns 1 without reloading (treats it as already loaded).

## asr_init_from_model (0x8C01CE00) [M - names inferred from call order, library internals not read]
Staged init, any failing step returns 0:
1. engine   = asr_lib_create_engine(config_str @0x8C12FB40, 0, &g_engine @0x8C279258)
2. model    = asr_lib_load_model(g_engine, speech_obj+0x5B34 (LNG data), 1, &g_model @0x8C279260);  state(0x8C2791B8)=3
3. recog    = asr_lib_create_recognizer(g_engine, name_str @0x8C12FB64, 0, &g_recog @0x8C27925C)
4. asr_lib_bind_recognizer_model(g_recog, g_model); then FUN_8c01cee0(speech_obj) for remaining setup;  state=4, return 1.
State values seen: 3 = model loaded, 4 = ready (treated >=3 as "already loaded" by the loader). `asr_register_strings`
(0x8C01D624) wraps FUN_8c01d4c4 and returns 2 on success (0 on failure) - purpose of the two strings unknown.
Library routines live at 0x8C10B8xx-0x8C10BFxx (candidate third-party ASR library; not yet analysed).

## request_flag_* handlers (0x8C01EB50 ..) [structure verified by template match; purpose of each flag unknown]
Template: `if (obj->state(+0xA510)==1) return 2; return request_set_flag(obj, FLAG, 0) ? 1 : 0;`
~20+ near-identical 60-byte wrappers, one per distinct bit flag (e.g. 0x8, 0x400, 0x10000), named `request_flag_<hex>_<addr6>`.
Higher caller counts (0x400: 11 callers, 0x10000: 8) mark the most-used requests. `request_set_flag` = 0x8C01F3B0.
Names list: notes/names_request_flags.tsv.

### CORRECTION to the request_flag section [verified by reading request_flag_test and its helper]
- `request_set_flag` was misnamed: 0x8C01F3B0 is `request_flag_test(obj, flag, group)`; group 0..3 selects one of four 32-bit flag words at
  obj+0xA528 / +0xA52C / +0xA530 / +0xA534. Helper 0x8C01F458 (`request_flag_test_word`) validates `flag` is one of
  {0x2,0x4,0x8,0x10,0x20,0x40,0x80,0x200,0x400,0x10000,0x20000} (else -1) and returns (word & flag) != 0.
- So the 60-byte wrappers are `is_request_flag_set_<hex>_*`: return 2 while obj->state(+0xA510)==1, else 1 if the flag is raised, 0 if not.
  Who raises the flags (and what each flag means) is still unknown.

## input_device_select_and_reset (0x8C01E5E0) [M - device meaning inferred]
Object (same one that holds the request flags) layout seen so far:
`+0xA510 state` (0 = idle/uninit -> returns 0; 1 = scanning; 5 = no device found), `+0xA524 selected port id`,
`+0xA528/+0xA52C/+0xA530/+0xA534` request-flag words (group 0..3), `+0xA538..+0xA540` three more state words, `+0xA544/+0xA546` two u16.
Behaviour when state==1: clear the seven words, then scan a 4-entry port-id table at 0x8C12FBC8 (mode 0: first entry only; else index 3 down to 0),
using FUN_8c1f62cc (port->info) and FUN_8c1f6338 (port->status?); pick the first port with status==0 and capability bit0 set.
Found -> store port id at +0xA524, return 1. None -> state=5. Looks like finding the microphone/peripheral on the Maple ports; unconfirmed.

## input_poll_device_state (0x8C01E954) - supersedes the "request flag" interpretation [flow verified; button meaning inferred]
Per-frame poll of the selected input port (obj+0xA524) using the port info record (FUN_8c1f62cc):
- Device present (capability bit0 set): copy record words +0x08/+0x0C/+0x10/+0x14 into obj+0xA528/+0xA52C/+0xA530/+0xA534, shorts +0x1C/+0x1E into +0xA538/+0xA53C,
  shorts +0x1A/+0x18 into +0xA544/+0xA546; +0xA540 = OR of all words ("anything active"); +0xA51C = 90 (timeout, frames); if +0xA518 (debounce, 10 frames) > 0 decrement.
- Device absent: +0xA518 = 10; if +0xA51C <= 0 -> state(+0xA510)=1 and rescan, else decrement it and state=2.
- State codes seen: 1 = ready/scan, 2 = waiting/debounce, 5 = no device. Return value = new state (or 2 in the debounce case).
So the four "request flag" words are raw device status words and `input_mask_test(obj, mask, group)` tests a bit in one of them. The 11 accepted masks
{0x2,0x4,0x8,0x10,0x20,0x40,0x80,0x200,0x400,0x10000,0x20000} mostly match Dreamcast controller button bits -> the 8 wrappers `input_is_mask_set_<hex>` are probably
"is this button down" checks (unconfirmed). Names are in notes/names_input.tsv.

## input_peripheral_state_machine (0x8C01E7CC) via input_update_state_gate (0x8C01E790) [flow verified; peripheral identities inferred]
Gate: if obj+0xA520 (mode) == 0 then {state=0 unless state==1} else run the state machine.
State (obj+0xA510) transitions, with A = FUN_8c01a3b4(obj, port) ready, B = FUN_8c01cb54(obj+0x384C, port) ready (B works on a sub-object at +0x384C):
- state 2 or 5 (recheck): mask = A | (B<<1): 0 -> state 5, 1 -> 4, 2 -> 3, 3 -> 0.
- state 3: if FUN_8c01D0CC(obj+0x384C)==0 -> 5; if A ready -> 0.        (waiting for A)
- state 4: if FUN_8c01A5CC(obj)==0 -> 5; if B ready -> 0.               (waiting for B)
- state 0/default: if FUN_8c01A5CC==0 -> 3; if FUN_8c01D0CC==0 -> 4.
Meaning: state 0 = both ready, 3 = A missing, 4 = B missing, 5 = neither; the object manages two peripherals on the selected port
(likely the controller and the microphone, with B being the speech/recognizer sub-object) - unconfirmed.

## Primitives named by reading them in full (notes/names_primitives.tsv)
memmove 0x8C013EF4 (77 callers, overlap-aware, aligned/halfword/byte paths), memset 0x8C013FF8 (98), vec_delete_array 0x8C0100DC (86; walks elements last-to-first calling a dtor),
Vec3_add 0x8C023A34, Vec3_sub 0x8C023AE0, Vec3_scale 0x8C023B8C [M: scalar passed by pointer], Vec3_set_zero 0x8C023D34, Vec3_set_xyz 0x8C023D68,
CAnimBody_GetCurFrame 0x8C026DA8 (returns float at +0x20, matching the CAnimBody layout).
- Primitives batch 2 (notes/names_primitives2.tsv): strcpy 0x8C0101D4 (49 callers), pure_virtual_stub 0x8C0101BC [M], vec3_clear 0x8C014E20, vec3_copy_* (2 duplicate 12-byte copies),
  Vec3_length_sq 0x8C022E78 [M], Vec3_normalize 0x8C022EC0 [M, partial read]. Note: FUN_8c01437c (used with strcpy on a path buffer) is probably strcat - not yet read.

## Class inventory (src/headers/class_index.md) - reality check
Only 15 classes / 25 methods carry a real `C<Class>_<Method>` string; the other ~300 `s_*` names are generic strings (filenames, error text, UI labels).
So string-derived class recovery will not scale. Better routes: (1) the 60 vtables in notes/vtables.tsv (each constructor stores a vtable pointer),
(2) constructors that write a vtable pointer at offset 0xC/0x0 and the vtable's destructor slot, (3) callers of object-pool/new wrappers.
- `src/headers/Class_12c3c4.md`: first derived class recovered from a vtable (base 0x8C129C70, embedded member at +0x81C, per-frame update in slot 2).

- `src/headers/vtable_classes.md`: all 60 vtables auto-summarised (slots, method sizes, string hints, base class where the dtor chains to another vtable). 36 have a detected base. Structure verified; class names unknown.
- `src/headers/Class_129c70.md`: shared base class (two Vec3 members at +0x28/+0x70); also notes that tiny leaf stubs are missing from the function list.

## Vtable stub functions created
- 397 vtable-slot targets were missing from the function list (tiny leaf stubs); 395 created via `ghidra_scripts/CreateStubs.java notes/vtable_stub_entries.txt`
  (list in notes/vtable_stub_entries.txt). Function count is now ~6,280 (was ~5,890). Other small leaf stubs reachable only via literal pools may still be missing.

## Trivial-shape names (notes/names_trivial.tsv) [exact body match, meaning unambiguous]
421 functions named by body shape: 180 `noop_*` (empty body), 109 `ret_const_<value>_*` (returns a constant), 132 `get_field_<hexoffset>_*` (returns one field of param_1).
These inflate the "named" count (now ~1,180 of ~6,280) without adding understanding; real naming progress is the ~760 earlier names plus the checked classes/formats.

- report_error_message (0x8C102828): logs via log_message (0x8C0143B0) and calls game_shutdown_a/b only when its 2nd arg is 0 (observed callers pass a string there, so they only log). Confirms game_shutdown_a/b = exit path.
- Primitives batch 3 (notes/names_primitives3.tsv): list_node_next 0x8C0D3F48, deref_u32 0x8C015B4C, rand_range 0x8C032A64 [scales rand by 32768.0], Vec3_length 0x8C022F54 [M], debug_printf 0x8C26A14E [M: formats into 0x8C4BEA48 then calls a hook], vsprintf_like 0x8C0146D0 [M].

## Port to compilable C (port/) - what it is and is NOT
Run: `python3 tools/postprocess.py <root> && python3 tools/port_build.py <root> && tools/port_check.sh <root> && python3 tools/port_report.py <root>`.
- `port/prelude.h`: Ghidra type names (undefined4, ulonglong, code, ...) and CONCAT/SUB macros. `port/decls.h`: one generic declaration per function (`ulonglong f();`) and `extern` for every global/address-suffixed identifier.
- `port/fn/<addr>.c`: ONE translation unit per function (its own name is #define'd to `<name>_def` so it never clashes with the shared declaration). `tools/port_build.py` also rewrites Ghidra idioms C rejects
  (`*0x8c...` raw-address derefs/stores, `x._4_4_` sub-field access, `(&FUN)[i]` tables, switch-table `::` names, leading-underscore locals, float<->pointer casts, `stack0x...` / `register0x...` pseudo-vars).
- Result: 6,248 of 6,270 functions pass `clang -fsyntax-only` (99.6%) with pointer/int conversion warnings disabled. Remaining 22 are listed in `port/failing.txt`
  (mostly self-recursive calls whose Ghidra signature has fewer params than the call sites, a few raw-hex derefs, one `PTR_s_*` global).
- It does NOT mean the port is correct or runnable. These are type-checked decompiler outputs: FPSCR.SZ/PR paired-move branches are still present as dead `in_FPSCR_*` conditionals,
  every call goes through unspecified-argument prototypes, data globals are `undefined1` placeholders, hardware/SDK calls are unresolved, and nothing has been linked or run on hardware/emulator.

### Port status update (supersedes the 6,248 / 22 figures above)
- All 6,270 per-function units now pass `clang -fsyntax-only` (100%); `port/failing.txt` is empty. Sanity-checked: a deliberately broken control file is rejected,
  every unit contains its `<name>_def` definition, none is empty.
- The last 22 were fixed by: renaming only the definition (not self-calls), `ac`/`f0` hardware address prefixes, `0x0 = ...` stores, arrays for globals that are indexed,
  `PTR_s_*>...` label sanitising, `_UNK_` pointer calls, `unique0x...` temporaries, array-type casts, and replacing `_<function name>` constant overlaps with `0`.
- Several of those fixes are compile-only (e.g. `_<function name>` -> 0 changes the value of a constant read from a code address). Do not read 100% as behavioural correctness.

## Link-level port (port/libseaman_port.dylib)
Run after the syntax pipeline: `tools/port_objects.sh <root>` (compile every unit to `port/obj/*.o`, host arm64), then in `port/`:
`ld -r -o game_all.o -filelist obj_list.txt`, `nm -u game_all.o > undef_all.txt`, `python3 tools/make_data_syms.py <root>`,
`clang -c data_syms.c intrinsics.c`, `clang -dynamiclib -o libseaman_port.dylib game_all.o data_syms.o intrinsics.o -lm`.
- Each unit exports its real name via `.set _<name>, _<name>_def`, so calls between functions resolve. 6,270 objects, 14,363 exported symbols (e.g. `_main`, `_game_init`, `_game_frame`).
- Data labels (DAT_/FUN_-as-data/UNK_/LAB_, ~1,810) are defined as offsets into an embedded copy of 1ST_READ.BIN (`.incbin`, `_g_image`), or into `_g_ram` (zero-filled, up to 0x8D000000) / `_g_hw` (16 MB placeholder for hardware windows).
- `port/intrinsics.c`: host stand-ins (trap/halt, cache ops no-ops, SQRT, mac ops). `sin`/`cos` come from libm.
- Verified: link exit 0 with no unresolved symbols; `ctypes.CDLL` loads it (nothing called).
- LIMITS: this is a LINK-level artifact only. The embedded image still contains SH-4 addresses and big-endian-free little-endian words that are not host pointers; every vtable, string table and global
  pointer inside it is wrong for the host. Calling any function would misbehave or crash. There is no Dreamcast hardware layer (PVR/AICA/GD-ROM/Maple), no SDK, no endianness/pointer-size handling (host is 64-bit), and `main` has not been run.

## Executable milestone (first ported function run)
- x86_64 build under Rosetta (`-Wl,-pagezero_size,0x1000`, `arch -x86_64`) maps `1ST_READ.BIN` at 0x8C010000 identity-mapped; `tools/port_abs.py` rewrites `NAME_8cXXXXXX` globals to absolute addresses for harness units in `port/harness/abs/`.
- `rand` (0x8C014200) runs and matches an independently computed LCG (seed*0x41C64E6D+0x3039, >>16 & 0x7FFF): OK. Only this one function is behaviourally checked so far.
- Two decompile-fidelity bugs found by actually running it, both fixed:
  1. `mov.w @(disp,pc)` pool constants were read as 4 bytes (`0x7fff3039` instead of `0x3039`). `postprocess.py` now derives pool width (word/long) by scanning code for 9nXX/DnXX opcodes and sign-extends words. This changed constants across the whole tree (re-run postprocess + port_build).
  2. `port_build.fix()` turned `*(uint*)(&X) = v` into a double dereference; the rule is now anchored to line start.
- Not done: indirect-call/vtable translation, hardware stubs, running `game_init`, behavioural checks of the other ~6,269 functions.

## Executable harness (port/game_x86) - how far `game_init` gets
Build/run: `sh tools/port_run.sh <root> [timeout] [lines]` (regen xlat table, relink, run). Binary: x86_64 under Rosetta, pagezero 0x1000.
- `tools/port_exec.py` builds `port/exec/*.c` from `port/fn`: guest globals become absolute addresses; every `(*(code *)X)(...)` and `(**(code **)X)(...)` call goes through `xlat()` (guest address -> host function; 0xA.../0x8... mirrors folded); every `(T *)` cast zero-extends via `(unsigned)` (SH-4 ints used as pointers were sign-extending to 0xffffffff........); `in_*`/`unaff_*` pseudo-register locals zero-initialised (`in_VBR`/`in_GBR` -> 0x8cf80000).
- `port/exec/main.c`: RAM mapped at 0x8c000000 and 0xac000000 (shared), zeroed regions for PVR/AICA regs, cache arrays (0xf0000000), store queues, VRAM, TA FIFO; 1ST_READ.BIN loaded at 0x8c010000; game runs on a low-address stack; SIGSEGV/SIGALRM handler prints a backtrace with function names; a thread cycles PVR SPG_STATUS (0xa05f810c) and sets the vblank flag; PVR ID/revision regs preset.
- `tools/add_missing.sh` / `tools/port_loop.sh` + `ghidra_scripts/AddFunctions.java`: when `xlat` reports an unmapped call target, create the function in Ghidra, decompile it, append to `src/modules/mod_extra.c` + index, rebuild. Three missing entry points found this way so far (8c1fa0f0, 8c1fb590 and the first gap function): computed `0xa0000000 | addr` calls are not in the static call graph.
- Bugs this found: `(**(code **)` vtable-style calls were not translated at all (2,332 sites); 2-byte pool constants were widened; store rule double-dereferenced.
- Progress: game_init -> FUN_8c102bd0 -> exception/VBR setup -> context setup -> PVR/KAMUI init -> PVR vsync waits pass -> reaches FUN_8c25d028 -> FUN_8c20a87c, which copies to VRAM with a garbage pointer (0x31effd6c): upstream state still differs from real hardware (a value that should come from hardware/Kamui setup is wrong).
- Known fidelity gaps: float args (`in_frN/drN/xdN`) are not passed between ported functions; 64-bit-pair returns; SH-4 stack-switching code; hardware beyond the registers listed above.

## Calling convention fix (r4-r7) and where the run stops now
- Ghidra inferred "no args" for functions that only forward argument registers, so r4 was lost across calls (e.g. FUN_8c25d028 -> FUN_8c20a87c). `ghidra_scripts/SetSigs.java` now gives every function custom storage (r4..r7 in, r0 out); `OverrideIndirect.java` puts a 4-arg prototype on every `jsr/bsrf/bsr` site and drops the old call-override refs. Whole tree re-decompiled (`src/modules`; earlier output kept in `src/modules_v1..v4`).
- Stack pseudo-variables (`stack0x...`) now index a per-function 2 KB frame buffer instead of host globals; hardware `DAT_` addresses are absolute.
- 8c0e99e4 (34 KB) never decompiled; 8c012090 and 8c024010 use old-signature output from `src/modules_v1`.
- Compile check: 6,272/6,272. Run stops in `pvr_20a844` (PVR register write) called from FUN_8c2034c0 with a garbage register offset: about 260 indirect call sites (e.g. `(*(code *)puVar5)()` where r4/r5 were set just before the `jsr`) still decompile with no arguments despite the 4-arg override. Cause not found; needs either a Ghidra-side fix or per-site patches.
- `port/exec/stubs.c` is hand-maintained (3 raw-address calls, a few pseudo-register symbols).

## Harness progress (later in the same session)
Run it: `cd port && arch -x86_64 ./game_x86 ../disc/1ST_READ.BIN 8` (second arg = watchdog seconds). The first run after relinking can take over a minute (Rosetta translating 10 MB of code); runs that time out with no output are that, not a hang. Capture output to a file, not a pipe.
- `tools/port_exec.py` now: one frame model for Ghidra stack pseudo-variables (`xStack_N`, `local_N`, `local_resN`, `in_stack_N`, `stack0x...` all index a per-function 4 KB buffer, entry sp at +0x800); function names used as values become guest addresses; calls through `pcVarN` code pointers are translated; trailing call arguments the decompiler dropped are padded with the last register values (`vr4..vr7`, set at every function entry); thunks forward r4-r7; `tools/patches.py` holds per-site hand patches (two so far, both checked against the disassembly).
- `port/exec/main.c`: BIOS syscall vectors (0x8c0000b0/b4/b8/bc/e0) point at a stub that returns 0; SIGSEGV handler repairs sign-extended 32-bit "pointers" (zero-extends the register and retries) and dumps registers, code bytes and a ring buffer of the last 24 entered functions; guest stack 0x8c600000-0x8cf00000.
- `port_build.fix()`: calls to constant addresses `(*0x8c...)()` are now `(*(code *)ADDR)()` (they were rendered as a call through a pointer stored at ADDR, which jumped into the code bytes).
- Found: `FUN_8c1f38c0`'s `jsr @r3` has `mov.l r2,@-r15` in its delay slot, so the object goes on the *stack* and r4-r7 pass through; Ghidra showed it as the first register argument. Decompiled call arguments near delay slots that push to the stack cannot be trusted.
- Where it stops: game_init -> FUN_8c102bd0 -> KAMUI/PVR init passes (PVR vsync, ID registers) -> thunk_FUN_8c1f38c0 -> FUN_8c1f38c0 -> FUN_8c1f1d8c (the game's own kernel/thread-table init). Fault there: an 8-byte slot in the frame buffer holds 0xa_8c4594c0 where a 32-bit pointer is expected (a 4-byte and an 8-byte view of the same stack slot overlap). Not yet traced.
- Still true: only `rand` has been checked against real behaviour; no real audio/video/input; ~5,100 functions unnamed; Ghidra still drops arguments at ~260 call sites (partly mitigated by the `vr` padding).

## Harness progress (stack model, allocator, ADX stage)
- Contiguous guest stack with global `vsp`; each unit captures `fr0_ = vsp`, zeroes `[fr0_-K, fr0_)`, and sets `vsp` before each call.
  K also covers offsets relative to a frame-pointer-like local (`(int)pVarN + -0xNN`); calls then use `pVarN - N` as the outgoing sp (`CUR_ANCHOR`).
- Stack-passed params (`s0,s4,...`) are no longer C params: callee reads `*(T*)(vsp+N)` at entry; callers with >4 args store extras
  at `sp - roundup(4n)` via a statement expression, then call with r4-r7 only.
- `(*(code*)xlat(..))\n (args)` (whitespace before the arg list) is now wrapped like other calls.
- Pointer-typed stack slots are 4 bytes (`*(unsigned*)(fr0_-N)`); 10 functions opt out via `notes/noptr.txt`.
- Pointer globals `_DAT_x` are `*(undefined4 **)` (narrowed to 4 bytes); the game allocator now works.
- Current state: game_init gets through kernel/PVR/malloc and scene setup, then faults in the ADX/GD-ROM open path
  (`FUN_8c0115c4` via `vsprintf_like`): the printf va_list gap and the missing GD-ROM hardware are the next blockers.

## Divide helpers, register inputs, data cells (later)
- libgcc divide helpers (8c0101e4/284/31c/3d0 take r4,r5; 8c010468/51c/614/6dc take r1=dividend, r0=divisor) are native C (`NATIVE` in tools/patches.py); identified with `tools/sh_mini.py`, a tiny SH-4 interpreter. `ghidra_scripts/FixDivHelpers.java` gave the r1/r0 helpers an (n, d) signature and re-decompiled their 108 callers (`tools/merge_redo.py` folds redo files into src/modules).
- `ghidra_scripts/FixRegInputs.java` (686 functions that read r0/r1 live-in, list in notes/regin.tsv) adds `ain0/ain1` parameters; the generator passes them through `vin0/vin1`. Ghidra's r0/r1 values at call sites are often wrong (e.g. FUN_8c25a174 → strcpy-like FUN_8c010998 gets `ain0 = ar6`), so these string helpers still misbehave. Backups: ghidra_proj_pre_regin, src/modules_v10, src/modules_v11.
- postprocess.py only folds `DAT_*` into constants when the address is a real pc-relative pool entry inside the code range (data after the last function was being folded to initial values).
- Typed 4-byte data cells use notes/global_types.tsv (+ pointer evidence in port_exec.py); `&DAT_x` is a constant address.
- Open: ~10 units still fail to compile (function-pointer tables `code *` subscripts, `(*uVar)()` calls); their symbols get abort stubs. Next fault: FUN_8c010998/8c0108fc (strcpy with r0/r1 args) via FUN_8c25a174.

## File loading wall
- Patched the strcpy-like FUN_8c010998 call sites in FUN_8c25a174 from the asm; stubbed that sprintf-like formatter and the ADX error logger (varargs not reconstructed).
- String literal labels (`s_*_8c…`) are now addresses, not first-byte values (this had passed 'U' to strcpy as a pointer).
- game_init now reaches the loader (`s_GRAPHICS_0ffcb6` → FUN_8c02100c → FUN_8c01f810 pump) for GRAPHICS/UsrPointer.pvm; the load fails because the GD-ROM layer has no backend, the game calls report_error_message → game_shutdown_a, and the free-list walk then spins (SIGALRM).
- `port/exec/bios.c` logs the BIOS vector calls (only ~18 happen, with args that look unreliable: r6 is not the function code), so the GD access is probably through the memory-mapped GD registers (0xA05F7000..) or a lower layer. Next: find the GDFS/CDCGD request functions, then either emulate the registers or implement open/read at that API against `disc/`.

## GD-ROM backend, loader, and the main loop running
- GD-ROM is a host backend in `port/exec/bios.c` (GD syscalls r6=0, r7=function). The game's GDFS layer (`DAT_8c2739e0` state, API table via `DATA_8c2739f0`) and ADX server (`FUN_8c264010`) are pumped from `FUN_8c01f810`; directory entries are 0x2c bytes (hash at +0x19, name at +0x1a, `;1` stripped).
- A read-only `code2` block in Ghidra made it constant-fold mutable globals. Fixed with a writable `data2` block at 0x8c26c000+ (`ghidra_scripts/RedoRegion.java`, 504 functions re-decompiled, sizes in `notes/global_sizes_redo.tsv`).
- Guest addresses cast to a signed `int` then to a pointer sign-extended (infinite loops on `ptr <= end`); `port_exec.py` now rewrites `(int)0x8cXXXXXX` to `(unsigned)`.
- Hardware waits that only an interrupt or the PVR/DMAC would satisfy are patched out in `tools/patches.py`: cache maintenance routines (stubs), the TA DMA queue (`FUN_8c203320`, `sh4_dmac_202f40` call in `FUN_8c20a8e0`), the "render done" waits in `FUN_8c20b260`.
- 8c0101bc is the GCC pointer-to-member call helper (Ghidra named it `pure_virtual_stub`, dropped r0): `host_pmf_call` in `hostlib.c`; only `game_poll_exit` is patched so far (50 other units mention `pure_virtual_stub` and still lose r0).
- `xlat` treats an unmapped target whose first word is `rts` as a no-op (empty guest functions Ghidra did not create).
- `port/exec/main.c` now runs the guest main loop: `game_init(); while (game_poll_exit() >= 0) game_frame();`.
- State: game_init completes (all GRAPHICS/COMMON files load) and the loop runs 50,000+ frames in 15 s; no audio/video/input exists, vsync/render waits are skipped, so frame pacing is not modelled. The game logs `no_device` (Maple controller not emulated).
- Still open: units that do not compile (8c20bdc0, 8c264408 and others get abort stubs), printf varargs, 214 divide-helper callers with unverified operands, remaining `pure_virtual_stub` call sites, float registers across calls, TMU constant, BSS not cleared, debug patches/logging to remove.
- Host loop fix: each guest call leaves `vsp` at its callee's frame, so the host main loop resets `vsp` before every `game_poll_exit`/`game_frame`; without it the guest stack crept down each frame and at frame ~50158 a prologue's frame-zeroing wiped globals (the 0x8c4aabdc pointer) and `game_frame` crashed. With it the loop runs millions of frames until the SIGALRM watchdog (that exit, sig 14 / rc=2, is the watchdog, not a crash).

## Ghidra clean-up passes and the boot flow (this session)
- **Function bodies**: `ghidra_scripts/RepairBodies.java` absorbs prologue-split "functions" (an entry reached only by falling through from the function before, no call refs; e.g. 8c265ac8 + 8c265ace) and widens truncated bodies. Without it `getFunctionContaining` returns null for later call sites/switches.
- **Jump tables**: `ghidra_scripts/SwitchTables.java` finds `mova`/`mov.l @(r0,rN)`/`jmp` switches (bound = `cmp/gt|hi` upper minus `cmp/ge|hs` lower), types the table as pointers, adds computed-jump refs, and writes a real `JumpTable.writeOverride`, then re-decompiles; 218 tables in ~170 functions (was 120 "Could not recover jumptable"). Some recovered switches still drop shared targets (see the 8c01e7cc patch).
- **libgcc helpers**: `ghidra_scripts/FixHelperCalls.java` gives 8c010794/8c0107a0 (block copy: r0 = bytes, r1 = dst, r2 = src; host `host_movstr`) and the divide helpers (r1/r0) their register storage and, crucially, *deletes the call-site override symbols* — a signature override silently drops custom storage, which is why helper operands were wrong at ~250 call sites.
- Run order: SwitchTables, RepairBodies as needed, FixHelperCalls, SwitchTables again; then `tools/merge_redo.py` for `notes/helper_redo.txt` and `notes/switch_redo.txt` and `tools/prune_shadow.py` for each (side module files shadow merged bodies otherwise).
- Generator fixes in `tools/port_exec.py`: `(int)0x8cXXXXXX` -> `(unsigned)`; `-1 < undefined4 global` made signed; pointer globals are 4-byte cells (`*(undefined4 **)` read/write 8 host bytes and glued neighbours); `NAN` defined.
- Boot flow reached: `FUN_8c1f5c9e` lib ctor walk, `game_init`, then the WARNING state machine (`s_WARNING_0c09d0`, states 0..28): loads BeforeStartMessage.pvm, runs the input/peripheral checks (controller, VM user icon, speech/microphone model), shows the NOSPACE message and, once the confirm button is injected, leaves the main loop (poll returns -1). Host stand-ins: controller marked connected, `host_ret1` for the VM/mic probes (8c01a3b4, 8c01cb54), a pulsed confirm press in the pad record, vsp reset per call, SQ/TA cursor store restored in 8c235248/8c2351fc.
- Next: emulate the VMU (Maple storage) so the NOSPACE branch is not taken, then real input, PVR output and audio.

### Boot flow past the WARNING scene (this session)
- WARNING state machine now completes (13 -> 15 -> 17 -> 4) and the app switches to scene 1 (title/intro, `FUN_8c0bad68` + `FUN_8c0bb1e4`). Needed host stand-ins: VMU writes succeed (`host_ret1` on 8c01b0a8/8c01ae98/8c01b47c/8c01b5f8/8c01b7b0), VMU stat by exact file name (`host_vmu_stat` for 8c01bba0, `host_vmu_stat_vm` for 8c01bc2c: only SM2000US.USR and SM2000US._VM exist), RTC read (`host_rtc_read` for 8c1f8544, seconds since 1950), sound stream commands report success (8c267e54, 8c267b30, 8c26a860 stubbed).
- Pad stand-in in `port/exec/main.c`: Yes/No dialogs get 'No' (right, mask 0x40) then confirm (mask 8) per WARNING state; confirm keeps pulsing every 400 frames afterwards. Mode 4 at `ar4+0x2dd78` means quit (the host loop ends); it was reached by answering 'Yes' to dialogs.
- Pointer-to-member wrappers patched: 8c0c1d40 (mode records at ar4+0x2dda0), 8c0baa84 (records at ar4+12). 42 more `pure_virtual_stub` sites remain; decode with `tools/dis.py <addr> <n>`.
- Generator: `&LAB_8cXXXXXX` becomes the guest address (42 label entries were created as functions via AddFunctions); nested pointer loads are narrowed inside operands; `xlat` follows `mov.l/jmp/nop` thunks; float piece helpers (`CONCAT44D`, `F32HI`, `F32LO`, `D2U`, bit-aware `CONCAT44`) and all `CONCATab` macros exist in `port/prelude.h`.
- Ghidra: 39 prologue-split pairs and 35 absorbed splits were redone (`notes/repair_redo.txt`); float functions redone (`notes/float_redo.txt`, 73 reverted units listed in float_redo_ok.txt filtering). `tools/dis.py` is a small SH-4 word dumper.
- State: scene 1 runs ~50k frames/s with no faults and no disc reads; the title menu (`FUN_8c0bcedc`, state at ar4+0x44, +0x14c stays 0) does not advance on the injected pad. Next: find what input/mic/timer event moves it.

## Wii target (PowerPC, big-endian) - compile-level milestone
- Guest memory stays little-endian. `tools/wii_xform.py <root>/port <root>/port/wii/exec 8c` rewrites every pointer to a 2/4/8-byte scalar as `le<T>*` (`port/wii/lep.h`, byte-swapping proxy) and pointer cells (`T**`) as `le<T*>*`; output is C++ in `port/wii/exec/*.cpp` inside `extern "C"`. `port/wii/prelude.h` and `port/wii/decls.h` are the C++ versions (decls take 8 default `unsigned` args; guest `main` is `guest_main`).
- Run: `python3 tools/wii_xform.py port port/wii/exec 8c && tools/wii_check.sh <root> && python3 tools/wii_fixup.py port/wii` (fixup casts C-accepted pointer conversions that C++ rejects, editing the generated .cpp). Compile flags: `powerpc-eabi-g++ -std=gnu++17 -fpermissive -w -fno-exceptions -fno-rtti -fno-strict-aliasing`. devkitPPC gcc 16 defaults to C23, so plain C needs `-std=gnu17`.
- Result: all 6,336 units compile (`port/wii/failing.txt` empty). The last 22 needed: a `le<P*>` pointer-cell specialisation (implicit guest-address integer, explicit int casts, +/-), `case N:` labels before `}` get a `;` (C23 allows it, C++ does not), 16 default call args, and fixup casts for pointer comparisons and returns.
- Caution: `ar4[0x4b]`-style indexing in 8c057280/8c0611cc/8c0679cc is on a Ghidra `undefined1 **` that is really a byte array; it scaled by 8 on the x86 host and now by 4, so those units need a type fix before they are right.
- Not done: the Wii runtime. Needs a guest address map (BAT identity map of 0x8C000000 onto MEM2, or biased accessors), hardware windows, a Wii host layer replacing exec/main.c, bios.c and hostlib.c (SD/USB GD-ROM backend, GX video, input; microphone later), a link, and a run in Dolphin. Generated tree is ~37 MB; check `df` first (the SSD was full).

## Wii host layer and differential tracing (status)

- Build: `tools/wii_build.sh <root> [xform]` (transform, compile 6,336 units, repair, link) then `tools/wii_dolphin.sh <root> [seconds]` (headless Dolphin, own user dir, stops by PID). Guest memory is little-endian at 0x8C000000 (DBAT2/3 -> MEM2); other hardware windows go through a DSI handler (`host/wii_dsi.cpp`) that emulates loads/stores against a sparse page store. Addresses below 0x400000 (BIOS ROM) are treated as hardware, so stray stores there are ignored as on the Dreamcast.
- Differential tracing: `tools/trace_x86_build.sh` builds a traced x86 harness (`port/trace_x86`). Both sides hash every guest function entry (`CK` lines) and can dump 64 KB RAM blocks (`MB n hash`, `TRACE_BLOCK=n` for words) at the first entry of `trace_watch`. Block hashes differing only in timer-like words are benign. Spin-loop lengths (PVR SPG poll) differ, so call counts are not comparable across hosts.
- Bugs found this way: `BITS32` on `le<float>` converted numerically (fixed with `le<T>` overloads); `SUBxy` on doubles converted numerically (out-of-range saturates differently on PowerPC, now raw bits); 64-bit-return units called through `xlat` as `code` returned the high word (thunks in `host/xthunks.inc`, generated by `tools/wii_decls.py`); TA DMA enqueue retry loops in 8c20b260/8c20b160 are single-shot on Wii.
- Debug hooks `dbg_arr`, `dbg_it`, `dbg_tab` are still inserted in 8c211120 and 8c211a20 in both trees; remove once the title scene matches.
- Verified: after the thunk fix the Wii warn state machine matches x86 exactly (4 -> 6 -> 13 -> 15 -> 17 -> 4 at frames 211-215) and the run loop completes 60000 frames; Dolphin's first start after a relink sometimes produces no log (rerun once).
- PVR capture (`host/wii_pvr.cpp`): `sh4_dmac_202f40` (the DMAC channel 2 queue) is replaced by `host_dmac`, which carries a request out at once: dst 0x10000000 goes to the TA buffer (`host_ta_dma`), dst 0x11000000+off is copied linearly into texture memory at 0xa4000000+off. SH-4 store-queue lines (0xe0000000, QACR = 0x10) are forwarded from the DSI handler (`sq_store`) into the same TA buffer. The `20a8e0` texture upload calls `host_vram_dma`. `pvr_end_frame` logs each distinct TA frame size once. About 4 MB of textures are uploaded during boot.
- Finding: every TA frame is empty (poly header + end-of-list only) because the scene never gets to registering textures: `FUN_8c25b434` (texture bind) returns early for null descriptors and the texture-set loader `8c015250` -> `8c2377e4` -> `8c2378a6` is never called. The title scene (`FUN_8c0bcedc`, state +0x44 = 19) is held by the message system: `FUN_8c0fa2b8` returns 1 while the speech state machine (`s_SPEECH_0faa98`, state 3 at msg+0x1054) waits on the speech-recognition poll `FUN_8c02126c`, which needs microphone/speech input. x86 shows the same stall.
- Next: stand-in or HLE for the speech poll (then the scene should load models/textures and draw), then the TA stream -> GX renderer (poly/sprite/vertex params, PVR texture formats incl. twiddled/VQ), AICA audio, real pad input, microphone.

### Wii: store queues, speech stand-in, why nothing draws yet
- The decompiled code carries no `pref`, so SQ flushes are inferred in `wii_dsi.cpp` (`sq_store`/`sq_flush`): a 32-byte line is flushed when it fills, when the next store goes to another line or backwards, and at frame end (`sq_end_frame`). The destination is `(ea & 0x03ffffe0) | ((QACR & 0x1c) << 24)`: area 0x10000000 -> TA buffer, 0x0c000000 -> guest RAM (these copies were silently lost before), 0x04000000 -> texture memory. Unwritten words keep the queue's previous contents, as on hardware.
- Speech stand-in (Wii only, `wii_xform.py`, unit 8c0faa94): the two `FUN_8c02126c` resource lookups in the speech state machine report "nothing to load". The message system then cycles idle -> request -> idle instead of staying pending; the title menu (`FUN_8c0bcedc`) still never leaves its loop (+0x14c stays 0), so it waits for a menu choice.
- The per-frame draw calls run but emit nothing: the display lists in RAM (tables at 0x8c4a9f2c/0x8c4a9f7c, one 0x280-byte list) hold only zeros. The texture-set loader `8c015250` (reached through method tables at 0x8c0e03a8 etc., never through a direct call) is never invoked, so texture slots stay null and `FUN_8c25b434` (patched to return 0 for a null slot) skips the draws. Finding which caller should invoke it is the next step on the x86 side (`tools/dis.py`, TRACE_WATCH on `FUN_8c25b3ec`'s callers).
- Draw path findings (Wii, same on x86): the vertex emitters write real TA parameters through the store queues (user clip 0x20000000, polygon headers 0x80000000/0x828c000a, vertex data), but the SQ destination comes from a cursor struct (`0x8c4aa21c` -> `0x8c4aa254`, whose first word is the target address) that is 0, so QACR is 0 and the lines are not TA writes. The cursor starts from the TA region/list base table at `0x8c4aa22c` (0x14 bytes per region, written by `FUN_8c211c98` from the five list sizes) and the per-list buffer table `0x8c4a9f2c`; both stay zero. `FUN_8c211120` (`s_HARDWARE_211130`) computes the five list sizes; its float->int step is Ghidra's `ftrc` model (`SUB84` of a double built from `CONCAT44D(0x4f000000, f)`), now patched on Wii to `(uint)(long long)f`, giving sizes 0x50/0/0x4b360/0/0 (14 units use that idiom: 8c0bb1e4, 8c0cc784, 8c0cd3c8, 8c0d8890, 8c119a1e, 8c2170f4, 8c21ee94, 8c220658, 8c220c88, 8c22ed60, 8c259a70, 8c25c4d2, 8c25c9d8). The VertexBuffer config (`s_HARDWARE_205e00`: BufferBase 0xacc00000, size 0x400000) puts the vertex buffer at the top of RAM.
- Next: trace why `FUN_8c211c98` gets zero list sizes (its args come from `FUN_8c211120`'s array via 8c211ba4/8c211876), then the SQ cursor should become a RAM/TA address and `sq_flush` will deliver the stream.

### Decompile bugs fixed while chasing the TA stream (Wii run, 2026-11-01)
- `FUN_8c211120` (`s_HARDWARE_211130`) calls 211730 / 211876 / 211c98 with stack arguments (fifth list size, 0, region count) that the decompile drops; `wii_xform.py` now stores them at the callee's stack slots. Result: the TA region/list base table at 0x8c4aa22c is filled (0x10000000 TA FIFO, vertex buffer 0xacccc040/60) and the SQ cursor struct points at real addresses.
- `FUN_8c207300` (the 32-byte `fmov.d` copy used for TA parameters) copied one word per iteration but stepped the destination by two; fixed in `port/exec/8c207300.c` and listed in `tools/patches.py` (x86 benefits on regeneration).
- `FUN_8c211120` float->int (`ftrc`) fixed in the Wii transform only; 13 other units use the same `CONCAT44D(0x4f000000, f)` idiom and need review.
- Result: the TA stream is now well-formed (user clip type 1, sprite headers 0xa0820000, vertex 0xf0000000 with float coordinates). A steady frame holds 3 tiny sprites around (-1.5..-0.5, z 0.1) plus end-of-list markers; no scene geometry yet. The title scene sits in state 1 (`FUN_8c0bcedc`), 14c stays 0.
- Next: renderer for what is there (sprite/poly/vertex -> GX with the PVR texture formats), and find what the title scene waits for in state 1 (save-slot/clock bookkeeping loop at 8c0bcedc case 1, then virtual calls that load the scene's texture sets via the WaterTank vtable slot 36 at 0x8c12b9c8 -> 0x8c0e0320).

### Title stall diagnosis (2026-11-01, continued after session limit)
- Title scene (`FUN_8c0bcedc`) alternates state 1 <-> 0x13 every 3 frames: with `0x8c43670c == 1` (save-ID byte sum) state 1 submits the script request `INTRO_FIRST` via `FUN_8c0bf170` -> `FUN_8c0f8320` (request struct at 0x8c436280, command string +0x20, status word +0x70 = 0x8c4362f0), and state 0x13 loops back to 1 until the status word equals 0xe.
- The status word is written by the script opcode handler `FUN_8c0fc94c` (case 0x56 copies a script operand into request+0x70; 0x11 = "nothing heard"). That handler is never entered on x86 either (TRACE_WATCH over 12 s: 0 entries for 8c0fc94c, 8c0f9774, 8c0fbf28; 8c0fa944 once), so the stall is upstream of the Wii layer: the script runner never starts the INTRO_FIRST script.
- Next: find the caller chain of 8c0f9774 / 8c0fbf28 (script runner step) from the message system (`8c0f8368` sets msg+0x89130/0x89134, msg+0x1050 = request) and see what gates it (script file load from the disc, or the speech stand-in in unit 8c0faa94).

### Title -> aquarium scene (Wii run, 2026-11-01, second session)
- Run Dolphin with a private user dir and a private copy of the DOL (`$SCRATCHPAD/run.sh <seconds>`); another session sharing `seaman-dolphin-user` deletes `Logs/` under you. Dolphin writes its log only after it is killed, so read it after the script returns.
- ADX file server: the guest registers `FUN_8c264010` as a V-blank (event 0x900) handler and runs `FUN_8c264010` + `FUN_8c1f231a` in a loop inside blocking waits (`FUN_8c01f810`), but nothing runs it while a non-blocking load (`FUN_8c02126c` poll) is pending, so those never completed (same on x86). The host now calls both four times per frame (`wii_main.cpp`). `NARRATION.SCL/.SDP` then load.
- `FUN_8c0fae26` and `FUN_8c0faa94` keep the real `FUN_8c02126c` result (logged as `02126c ...`); the old "nothing to load" stand-in is gone.
- Narration stand-in (`wii_xform.py`, unit 8c0fb20c): the SDP record `INTRO_FIRST` is type 2 with an empty second operand, which re-selects itself forever (the voice sample would end it). On Wii it counts as played: request status (+0x70, 0x8c4362f0) = 0xe and the speech machine returns to idle. The title scene then goes 19 -> 20 -> 18 and the aquarium scene starts loading `suisou*.nj`.
- GCC pointer-to-member helper `8c0101bc` (Ghidra `pure_virtual_stub`, drops r0): `tools/pmf_sites.py` recovers r0 for 53 of the 57 call sites by a straight-line symbolic walk (4 unresolved: 8c0504e0, 8c071122, 8c0de2fa, 8c0de454) and writes `tools/pmf_sites.json`; `wii_xform.py` (`pmf_fix`) rewrites each call to `host_pmf_call(rec, this, a, b, c)`. The x86 tree still has the old patches only.
- Dropped stack arguments (fifth argument of the name search `8c02051c`/`8c020600`/`8c020588` is the second name field): added pushes in `wii_xform.py` for units 8c02077c, 8c0208ec, 8c01fec4, 8c01fab4 (8c01f8a4/8c01f9c4/8c02049c already had them).
- Current stop: `FUN_8c239150` (texture id lookup in a PVM table, 12-byte entries) is called from the texture-set loader `8c239212` with a key of 0xf178f178 (looks like texture pixel data), so it runs off the table (fault at 0x400000). Suspect: something overwrites the loader's stack frame at `fr0_ - 0x140` (loop counter) with texture data, e.g. a store-queue flush to area 0x0c (guest RAM) with a wrong QACR, or a stack-argument/vsp mismatch in a callee.
- Debug hooks in the Wii tree (remove when done): `wii_main.cpp` speech/title state logs and ADX server calls; `wii_xform.py` logs in 8c0202c0, 8c01f8a4, 8c0fae26/0faa98 (02126c), 8c239150.

### FPU functions run in the SH-4 interpreter (Wii, 2026-11-01, third session)
- Why: Ghidra loses float arguments (fr4..fr11), float results (fr0/fr1), XMTRX and the FPSCR modes between functions (the C units read `in_frN`/`in_drN`/`in_xdN` as 0; thousands of uses), and turns hand-written FPU/store-queue code into wrong C (e.g. `FUN_8c257e10` stored through a null `in_r2` and the compiler emitted a trap). The run stopped at frame 690 there.
- `tools/fpu_funcs.py <root> notes/fpu_funcs.txt` lists every function that executes an FPU instruction (recursive descent from the entry; fallthrough continues past spurious table entries such as 8c216ed2; computed jumps fall back to a linear scan confirmed by float types in the decompile; functions that tail-branch into an FPU function are included). 1973 functions.
- `tools/wii_xform.py` replaces each of those units (and units with Ghidra's `((undefined1 *)(unsigned)K)[ADDR]` byte-read idiom, 27 more; e.g. `8c23666c` read the TA list base as a byte, so QACR was 0 and every vertex line was dropped) by a stub `return sh4_interp(addr, ar4..ar7)`; `port/wii/host/interp_tab.inc` lists them for the interpreter. 1999 units.
- `port/wii/host/wii_sh4.cpp`: one global FPU register file (`sh4_fpu`: fr/xf banks, fpul, fpscr) shared by all interpreted code, so floats pass between functions as on the hardware; integer-only C units never touch it. A `jsr`/`jmp`/`bsr` to the start of an integer-only function calls its host version with r4..r7, r0/r1 (vin0/vin1) and vsp = r15; calls into interpreted functions and the register-argument helpers (8c0101bc pointer-to-member call, r1/r0 divides, `__movstr` 8c010794/8c0107a0) stay in the interpreter. A `bra` is always interpreted in place (its target can be a label the tables list as a function: treating it as a call unbalanced the stack by 16 bytes).
- Interpreter fixes: `bt/s`/`bf/s` not taken ran the delay slot twice (this flipped SZ twice in the Ninja strip code and read every vertex block 8 bytes off); added div0u, GBR loads/stores and logic ops, ldc/stc gbr/sr, addv/subv, mac.l/mac.w, fsca, fcnvsd/fcnvds and PR=1 double arithmetic, lds fpscr bank switching, 0x0000 as nop (it sits in the delay slot of the pointer-to-member helper's `jmp`). The old P2 remap sent 0xa05f.. register accesses into Wii RAM; only U0 RAM addresses are remapped now.
- Store queues from interpreted code: `sq_direct` buffers the words and `pref` (`sq_pref`) sends the line, as on the hardware (the C-side fill heuristic broke on routines that fill a line backwards with `@-r7`).
- DSI: texture memory mirrors 0xa6/0xa7 map to 0xa4/0xa5. Fault reports print the guest pc of the interpreted instruction (`sh4_pc`).
- Result: the aquarium scene runs past frame 1100 in Dolphin (about 12 fps under Dolphin's JIT, no faults in 120 s); the TA receives polygon headers and 40-170 vertices per frame plus ~3300 store-queue lines into the RAM vertex pool. All 57 pointer-to-member sites are now handled (the two the slicer missed are inside interpreted functions).
- Debug aids still in: `rts with SZ=1`, `fpscr` change and QACR-write logs (capped), per-100-frame TA/DMA/SQ stats in `wii_pvr.cpp`, the alarm/ring dumps in `wii_main.cpp`.
- Next: GX renderer for the TA stream (nothing is drawn yet: there is no GX code; `wii_pvr.cpp` only collects the stream), then AICA audio, pad input, microphone; performance of the interpreter (hot units could get a hand-checked C version).

### The aquarium draws (Wii, 2026-11-01, fourth session)
- Why only ~40 one-pixel specks reached the TA: the scene's models go to the translucent list, which Kamui keeps in the RAM vertex buffer (0xacccc040, list limit 0x12cd80) and DMAs to the TA at scene end. From frame 691 the list-2 cursor became 0xac000000, its length went negative (max table 0x8c4aa0e0 = 0xff33dea0), and the end-of-scene routine `8c20b7a0` treated that as an overflow: every list replaced by an empty one (length 0x20) and error 2 reported through `FUN_8c2062c8`.
- Cause: `8c25754c` (Ninja strip draw) carries the SQ write pointer in r2 from the header writer (8c236c38/8c236b3c returns it in r0, saved to r2) through the vertex writer 8c257610 (which advances r2) into `8c2370dc(r2)`, which commits it as the list cursor. The decompile passes an uninitialised local (0). Fix: `INTERP_UNITS` in `tools/wii_xform.py` runs 8c25754c in the interpreter (stub + interp_tab entry). The other C callers of 8c2370dc get their value from a return (8c234b10/bc0/c94) or only pass the address (8c218..., 8c21a4f6).
- Store queues (`wii_dsi.cpp`): two real 32-byte buffers selected by address bit 5, shared by the C store path and the interpreter (the page store keyed by full address could return stale words for aliased SQ addresses); a pending C-side line is flushed before a QACR write, so it goes out under the QACR it was written with.
- Renderer (`wii_gx.cpp`): offset colour as a second vertex colour (CLR1 -> COLOR1A1) added by a second TEV stage, for textured polygons with the offset bit (packed, float and intensity vertices; face offset colour from words 12-15 of a 64-byte intensity header; sprite header word 5).
- Input (`host/wii_pad.cpp`, linked with -lwiiuse -lbte): GameCube pad 1 and Wii Remote 1 (+ Nunchuk) fill the Shinobi PDS_PERIPHERAL of Maple port A (0x8c4727c4: on +8, off +0xc, press +0x10, release +0x14, r/l +0x18/+0x1a, x1/y1 +0x1c/+0x1e, x2/y2 +0x20/+0x22; analog -128..127, y down). Mapping: A/B/X/Y/Start, Z or Nunchuk C -> C, d-pad, sticks, triggers (Nunchuk Z -> R). HOME or Z+Start leaves to the loader. The scripted dialog presses and the 100 s (was 40 s) / 60000-frame test cap apply only until a real controller is used. Not tried on hardware yet; the IR pointer is not used (the hand cursor follows the stick).
- Result (Dolphin, Metal, frame dumps): the aquarium renders (water surface, sand, particles, back wall, the hand cursor, the End/Continue menu that the scripted Start opens). The translucent list is ~87 KB/frame (about 270 polygons, 2200 vertices). The scene is very dark: the stream itself carries face colours of 0.03-0.06 and vertex intensities ~0.17 for the tank models, so either the opening is meant to be dark or the Ninja light setup is wrong. Next: compare with Flycast (`/Applications/Flycast.app`, `seaman_extract/Seaman (USA).gdi`), then fog/modifier volumes, AICA audio, microphone, interpreter speed (~12.7 fps under Dolphin).
- Flycast comparison (same session): Flycast 2.6 on this macOS exits at start in the SH-4 dynarec setup (`Verify Failed: &mem_b[0] == sq_buffer + sizeof(Sh4Context) + 0x0C000000`, dyna/driver.cpp:347); `-config config:Dynarec.Enabled=0` gets past that (emu.cfg in ~/Library/Application Support/Flycast is not read for it). It still needs a visible window and keyboard focus on the desktop, so no automated capture was made. Pinning the RTC to noon does not change the scene's brightness, so the dark tank is not a clock/day-night effect.

### Flycast reference and renderer fixes (Wii, 2026-11-01, fourth session continued)
- Reference: Flycast 2.6 with `-config config:Dynarec.Enabled=0 -config input:device1.2=2` (mic in slot 2) runs the GDI. Driven from the shell with `seaman-cont/fc/hkey PID KEYCODE` (activates Flycast and posts a HID-level key only if it is frontmost; osascript and per-PID events do not reach SDL) and captured with `seaman-cont/fc/shot.sh` (window-ID capture of Flycast's own window, never the screen). Keys: Return = Start, x = A, arrows = d-pad. Boot: answer **Yes** to "create a new habitat?" (No leaves to the BIOS on the real game), Start at "Press Start Button" twice -> the dark tank with the hand cursor (`fc/s34.png`).
- The opening tank is dark on the real game too (mean RGB about 4.8 vs the port's ~3): the earlier "too dark" worry was not a lighting bug.
- Fixed while comparing: (1) the opaque list's end-of-list marker was a pending C-side SQ line that reached the stream after the translucent DMA, so the renderer took the whole translucent list for opaque (black box around the hand, solid teal planes); `host_dmac` now flushes the pending SQ line first. (2) PVR fog in `wii_gx.cpp`: look-up table fog (index from 1/w * FOG_DENSITY, table words start/end bytes, FOG_COL_RAM) and per-vertex fog from the offset alpha, as a factor in COLOR1 alpha blended by the last TEV stage; this scene uses density 0xb30b, colour 0x0a0a0a and a table that fogs everything beyond 1/w*density ~1.2 completely. (3) Translucent auto-sort (ISP_FEED_CFG bit 0 clear): strips and sprites are queued and drawn far to near by mean 1/w without depth writes. (4) Texture memory through the 32-bit path (0xa5/0xa7 and SQ area 0x05) is mapped to the 64-bit view the renderer reads (banks interleave every 32 bits).
- Still different from Flycast: the tank's back wall and lid are bound to TCW 0x000c0000 (texture heap base 0x600000 with zero format/size bits: an empty texture slot), whose texels have alpha 0, so they vanish (Flycast: opaque, fogged to 0x0a0a0a on the back wall, black on the unfogged lid); side walls come out at 4 instead of 10 for the same reason. The texture for those models is not loaded in the port: next step is finding which texture set / PVM entry they reference and why the slot stays empty. The glass edge lines at the top of the tank are also missing (same models). A background-plane colour was tried and dropped: the plane's parameters read as zero, and Flycast shows black above the tank.

### The tank walls: texture-set loader in the interpreter (same session)
- The tank's back wall, lid and glass edges were bound to TCW 0x000c0000. Texture list 0x8c2b57e8 (incubater, inc_message_US, hamon0003..hamon0010r) is fine for entries 0-8; entry 9 (`hamon0010r`, descriptor 0x8c43b7e8) was registered correctly (TCW 0x500baa00), then overwritten when `8c239212` (texture-set loader) called `8c25a838` with a misaligned surface descriptor 0x8c43b7da: `8c25afc0` -> `8c2137c0` created a 256x256 surface (type 0x301) at descriptor+4, i.e. 14 bytes into the wrong place, over entry 9.
- Fix: `8c239212` added to `INTERP_UNITS` in `tools/wii_xform.py` (runs as SH-4 code). The descriptor keeps its value, the walls, lid and frame lines draw, and the title -> aquarium switch now happens at frame 231 instead of ~690 (the loader no longer wanders).
- Found with a watch in `TRACE_ENTER` (trace.h) on the descriptor word: it reports the C function and call ring at the first function entry after the word changes. Changing trace.h needs `find port/wii/exec -name '*.cpp' -exec touch {} +` before `tools/wii_build.sh` (wii_cc.sh only checks the .cpp, decls.h and prelude.h dates).
- Against Flycast (`seaman-cont/fc/s34.png` vs a port frame): back wall, lid, floor, water, frame lines and the hand cursor match; the cursor hides itself after a few seconds in both. Remaining small difference: the side-wall glass near the camera is 4/255 in the port, 10/255 (full fog colour) in Flycast; fog is computed per vertex here and per pixel on the PVR.

### ADX audio plays (Wii, 2026-11-02, fifth session)
- Output path: ADXT -> mwRna -> mwSnd port. The mwSnd slots Play/Stop/GetPlayPos/SetOutVol/GetOutVol/SetOutPan/GetOutPan/Trns/GetTrnsStat/Destroy (vtable 0x8c278600) are host functions in `host/wii_audio.cpp`, reached through `host_audio_override` from `xlat_try` and `xlat_exact`. Each port keeps its ring on the host; the AI DMA callback mixes every playing port (linear resampling) to 48 kHz stereo in 1024-frame buffers.
- Test SD image: `seaman_sd.img` leaves out ADXPACK.AFS (925 MB), so every ADX read returned zeros. `tools/wii_sdimage.py` built `seaman_sd_full.img` with it; both test Dolphin configs point there now.
- CRI middleware in the interpreter: the ADX/ADXF/ADXSTM/ADXT, mwRna and SJ code (`INTERP_RANGES` in `tools/wii_xform.py`: 8c25eca0-8c2650ec, 8c268a24-8c26a246, 8c26b1ca-8c26c000) loses registers all over its decompile. Examples: the AFS partition loader stored the header's sector count through a stack slot instead of the pointer in it, so every clip was read 0x100 sectors (the archive header) early. The ADX header parse wrote samples-per-block through a dropped sixth stack argument. An SJ chunk mismatch then sent the ring buffer to its error callback, which is `bra .`. The sd library and mwSnd stay native: their AICA command paths are STUBS and the port slots are host functions.
- Trap units: `tools/wii_traps.py` lists every compiled unit where g++ emitted `trap` (a proven null dereference: an `extraout_rN` result or `unaff_rN` input the decompile lost) into `port/wii/trap_units.txt`. `wii_xform.py` sends those units to the interpreter (minus NATIVE/HOST/STUBS), and `wii_build.sh xform` reruns itself once when new ones turn up. 167 units so far, 2515 interpreted in all.
- `xlat((unsigned long)(xlat(0x...)))` (two units, 8c264784/8c264788): a call target translated twice became a host pointer, and `xlat` spun on "unmapped call target". It's fixed generically in `xform()`.
- ADX server pacing (`wii_main.cpp`): on the Dreamcast `FUN_8c264010` is the V-blank handler, and each run decodes about one V-blank of audio. It now runs once per 1/60 s of real time since the last frame (at least 4, at most 30), instead of a fixed 4 per frame.
- Play position (`snd_getpos`): the game has a stall watchdog (`8c022a1c`). While a stream plays it polls `ADXT_GetTime` (mwRna: written - pending, from the port's play position), and after 5 polls without progress it stops the handle and starts it again. It polls 3-4 times per frame, and the position used to move only once per 21 ms DMA buffer, so the 120 s title track (AFS file 72) restarted every ~9 frames. GetPlayPos now interpolates from the start of the playing buffer by real time (`gettime`), like the AICA's live address.
- Result (headless Dolphin, `DumpAudio`): title music + ambience (files 72/73, 22050 Hz) play continuously until the aquarium loads; the aquarium bubble loop (file 4, 44100 Hz) plays continuously; the scripted Start press opens the menu, which plays its voice clip (file 11454) and pauses the bubbles until it closes. A Dolphin audio dump of this is the reference capture.
- Not done: Manatee sound effects/MIDI (SEAMANSOUND.MLT on the ARM7 driver; the sd command paths are stubbed), and speech/narration (the `8c0fb20c` stand-in still marks narration as played). Real-hardware audio is untested. One 95 s test run logged an ISI in `KThrQueueBlock` after "main loop exited", probably the run script's kill landing during exit; a repeat run and two 15 s runs exited cleanly.
- Test cap is now 100 s (`MAX_SECONDS`), so headless runs reach the aquarium audio; the run helpers kill only their own Dolphin PID.

### Manatee sound effects play (Wii, 2026-11-02, sixth session)
- `host/wii_aica.cpp` emulates the AICA: 2 MB sound RAM (0xa0800000 on the SH-4, 0 on the ARM), the register block (0xa0700000 / 0x800000), 64 channels (PCM16, PCM8, Yamaha ADPCM, loops, linear interpolation, AR/D1R/D2R/RR envelope with KRS, TL, DISDL/DIPAN, MVOL), timers A-C, the SCIPD/MCIPD interrupt bits and the ARM FIQ. An ARM7 interpreter runs MANATEE.DRV once the game clears ARMRST. `aica_render` runs the ARM and the channels one 44.1 kHz sample at a time on the sound thread, and `wii_audio.cpp` resamples that to 48 kHz and adds it to the ADX mix. The DSI handler routes SH-4 accesses to sound RAM and the registers there. Not modelled: LFO, the filter EG, the DSP (reverb) and MIDI input.
- The SH-4 side of the driver, as it works here: the sd library (8c2650ec-8c268a24, now in `INTERP_RANGES`; its native decompile drops SR/IMASK and `extraout` flags, which broke its callbacks) queues host commands. `sdSysServer` (`8c2688e0`) flushes them (`8c26518c` -> `8c266b08`): a G2 DMA of 16-byte slots to sound RAM 0x13200. The DMA-end interrupt runs the syG2 end handler (`8c1f8cbc`), whose callbacks (`8c26592c`, then `8c266b70`) clear the sd busy state (+0x160) and set the flag byte at 0x13400. On each timer tick (FIQ sets 0x22c) the driver's main loop runs its host command handler at 0x4948, which reads the 32 slots.
- What the port adds:
  - G2 DMA (`g2dma_store` in `wii_dsi.cpp`): when the start bit of a channel at 0xa05f7800 is set with the channel enabled, the copy happens at once (either direction). The handler clears the start bit and raises the channel's ISTNRM bit.
  - The main loop calls `8c1f8cbc` on the sd library's channel handle (sd+0x1ac, register base at [[0x8c273a28]]) while sd+0x190 shows a transfer in flight and the channel is idle, as the interrupt would.
  - `sdSysServer` runs once per 1/60 s of real time, beside the ADX server. The game only calls it from a few places, so queued commands otherwise sat until the next one.
- The "ARM released" message used to be logged from inside the DSI handler (ARMRST store). `host_log` does an SD `fsync`, which hung the whole Wii with interrupts off. Nothing in a DSI path may log; `aica_render` reports the release instead.
- ARM idle: the driver polls the command queue (0xb000 ring, write pointer 0x13000, read pointer 0x13004), its FIQ flags and the host command flag. When the first backward branch of a slice comes round again with no ARM store in between, the ARM sleeps until an FIQ, an SH-4 store to sound RAM or the registers, or 64 samples. That cut the ARM from 1.46M to about 120K instructions/s, and the 100 s test run went from ~900 to ~1830 frames.
- Verification: build with `HOST_DEFS="-DAICA_SE_TEST=0x8c2b59d0u" tools/wii_link.sh $R`. From frame 360, every 60 frames it opens a port on the game's SE manager (0x8c2b59d0, as `8c0d0178` does through `8c02190c`) and plays requests 0.. through `8c021994`. Each request goes through a G2 DMA and a host command run, and keys on channel 48 (ADPCM, octave -1). The dump shows the effects (peaks 8.8k-19k against a 1.2k-2.1k baseline; smooth, unclipped signal). A Dolphin audio dump of this is the reference capture.
- In the scripted 100 s run the game itself requests no Manatee sound (the idle aquarium only plays ADX), so the normal build plays nothing through the driver yet. SE/music requests from gameplay (glass taps, feeding, etc.) take the same path. Untested: MIDI sequences (none seen yet), long-running behaviour, and real hardware.

### Readable decompile and test scripts (2026-11-02, sixth session, later)
- `tools/readable.py <root>` writes `decomp/` from `src/clean`: one body per address (module files win over mod_redo*/mod_extra) in one file per 64 KB region. It infers parameter counts (body reads, pass-through to used callee slots, literals passed by callers, all four for functions that jump through a pointer with no visible arguments), trims call sites, maps types, writes `g_8cXXXXXX` globals (`decomp/include/globals.h`), resolves FPSCR.SZ/PR tests only where the body never assigns them, writes string constants out of the program image, turns negative constants that are really 0x8cXXXXXX addresses back, names functions from a single `"Class::Method()"` string they pass, and formats with clang-format. Curated names and arities: `tools/readable_names.tsv`. Result: 6347 functions, ~3360 with trimmed parameters, ~1000 named, FPSCR references down from ~6500 to 128. rea could not help: it does not open SH-4.
- Test-only input script (`HOST_DEFS="-DPAD_SE_SCRIPT=<frame> -DMAX_SECONDS=<s>"`): from that frame on, the scripted pad sweeps the hand cursor with the stick and presses A/B/X/Y in the aquarium. At +200 frames it switches on the tank device at 0x8c29ab74 (+0x14; `tank_device_sound_update` 8c0d0178 plays its start/loop/stop sounds 9/10/11 from it), and switches it off at +800. Neither the input nor the forced device produced a Manatee request in a 140 s run: the device update runs, but nothing was keyed on. Not resolved; the next lead is what moves its state (+0x28) and whether the owner (Class_12b930 m1/m3, 8c0de1dc/8c0de4b0) calls it in this tank mode. `-DTRACE_WATCH=<function name>` logs a checkpoint at each call of one generated function.

### More function names (2026-11-02, seventh session)
- `tools/readable.py` now names functions by shape (field getters/setters, global accessors, constant returns, no-ops,
  one-call wrappers, vtable constructors/destructors) and from CRI/Middleware error strings.
- Hand names in `tools/readable_names.tsv` for the most-called helpers: libc (strcmp, memcmp, strcat, sprintf, the printf
  core), Vec3 math, the matrix stack, and the Ninja texture calls (njSetTexture 8c25b3ec selects the list at 0x8c277b04,
  njSetTextureNum 8c25b434 loads one texture's TA parameters through 8c20fe00).
- `decomp/`: 1,657 of 6,347 functions named (was 1,026), every name unique. About 700 of those are shape names. Also named: strtol/atoi, spline and lerp math, interrupt nesting (8c260ca0/8c260cc8), the RTC date conversion (8c1f826c, epoch 1950).
- Also named: the speech player at 0x8c35468c (speech_start 8c0f8368 plays a named line such as "HIGYOLINE0"; speech_request,
  speech_restart, speech_stop), the serial debug output (scif_putc 8c1fac58, used by the crash dump), Ninja's outer product,
  sin/cos and polygon-state copies.
- Ghidra had given a few one-call stubs the name of the function they jump to; readable.py now gives those stubs their own
  names (`<target>_wrap` where the target is named).
- Fixed in readable.py: the declaration patterns matched `return x;`, so the shape rules missed setters that end in
  `return iVar1;`, and the unused-local cleanup deleted `return *a0;`-style lines from 63 functions. Both now skip `return`.
- Also named: operator_new (8c014028, retries the allocator 8c1fb4b8 through the new-handler), scif_put_hex32, the talk-line
  queue (talk_queue_mode1/2, talk_start_line), edge_detect_update, and more copies of strcmp/Vec3 helpers (the first one
  listed keeps the plain name, copies get their address appended).
