# Hand patches for call sites where the decompiler dropped the argument registers. (function address, regex, replacement)
# Each entry was checked against the disassembly; the reason is noted beside it.
PATCHES = [
    # jump table (states 1..5) = {else-block, case 2, case 3, case 4, case 2}: the recovered switch drops the shared targets, so state 1 must take the else-block and state 5 must share state 2's case
    ('8c01e7cc', r'\(iVar2 < 6\) && \(0 < iVar2\)', '(iVar2 < 6) && (1 < iVar2)'),
    ('8c01e7cc', r'case 2:', 'case 5:\n    case 2:'),
    ('8c2351fc', r'(uVar1 = (?:FUN_8c236510|FUN_8c2365e2)\([^;]*\);)', r'\1 *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)uVar1;'),
    # the list-start helpers return the new store-queue write pointer in r0 and the caller stores it into the cursor cell 0x8c4aa3e4 (`mov.l r0,@r2`); the decompile dropped the store
    ('8c235248', r'(uVar1 = (?:FUN_8c23666c|FUN_8c236718)\([^;]*\);)', r'\1 *(unsigned *)0x8c4aa3e4 = (unsigned)(unsigned long)uVar1;'),
    # sector counts: ushort table at ar6+0x14; the store addresses are in r2, which the decompile leaves as unset pointers: entry 0 at ar6+0x14 (puStack_38), later entries at iStack_24 + 2 * (counter - 1)
    ('8c261b96', r'\*extraout_r2 = \(short\)uVar4;', '*(short *)puStack_38 = (short)uVar4;'),
    ('8c261b96', r'\*extraout_r2_00 = \(short\)uVar4;', '*(short *)(iStack_24 + (iStack_40 - 1) * 2) = (short)uVar4;'),
    # the remainder divides by the same global as the quotient just before it (r2 is the pool address of that global; the decompile leaves it as an unset register)
    ('8c25d0a0', r'libgcc_divide_helper_0106dc\(n,\*extraout_r2\)', 'libgcc_divide_helper_0106dc(n,(*(unsigned *)0x8c4aa00c))'),
    ('8c25d0a0', r'libgcc_divide_helper_01051c\(n,\*extraout_r3\)', 'libgcc_divide_helper_01051c(n,(*(unsigned *)0x8c4aa008))'),
    ('8c03c94c', r'\(byte\)(\w+)\[(0x[0-9a-f]+)\]', r'((unsigned char *)\1)[\2]'),
    ('8c046684', r'&\(&\(\*\(undefined1 \*\)(?:\(unsigned\))*(0x8c[0-9a-f]+)\)\)', r'((undefined1 *)\1)'),
    ('8c0526a0', r'switch\(pcVar3\)', 'switch((unsigned long)pcVar3)'),
    # the ADX error logger is stubbed; its call carries a format string with a comma that the call rewriter splits
    ('8c264408', r'FUN_8c25ece6\(in_stack_ffffffe8,uStack_14,uVar3,ar7_00,\s*"E8101202[^;]*;', ''),
    # `code *` bases indexed as byte arrays (the decompiler typed a struct pointer as a function pointer)
    ('8c03c94c', r'(\w+)\[(0x[0-9a-f]+)\] = \(code\)\(', r'((unsigned char *)\1)[\2] = (unsigned char)('),
    ('8c03f4a4', r'(\w+)\[(0x[0-9a-f]+)\] = \(code\)\(', r'((unsigned char *)\1)[\2] = (unsigned char)('),
    ('8c046684', r'&\(&\(\*\(undefined1 \*\)\(unsigned\)(0x8c[0-9a-f]+)\)\)', r'((undefined1 *)\1)'),
    # the switch index is an int word that the decompiler typed as float
    ('8c07a68c', r'float fVar3;', 'float fVar3; int iSw;'),
    ('8c07a68c', r'fVar3 = \*\(float \*\)\(ar4 \+ 0xd\);', 'iSw = *(int *)(ar4 + 0xd);'),
    ('8c07a68c', r'\(5 < \(int\)fVar3\) \|\| \(\(int\)fVar3 < 0\)', '(5 < iSw) || (iSw < 0)'),
    ('8c07a68c', r'switch\(fVar3\)', 'switch(iSw)'),
    ('8c07a68c', r'case 0\.0:', 'case 0:'),
    ('8c07a68c', r'case 1\.4013e-45:', 'case 1:'),
    ('8c07a68c', r'case 2\.8026e-45:', 'case 2:'),
    ('8c07a68c', r'case 4\.2039e-45:', 'case 3:'),
    ('8c07a68c', r'case 5\.60519e-45:', 'case 4:'),
    ('8c07a68c', r'case 7\.00649e-45:', 'case 5:'),
    # the two waits for "render done" (flag cleared by the PVR render/vblank interrupt, which the host never raises): treat the render as finished
    ('8c20b260', r'if \(\(\*\(undefined4 \*\)(?:\(unsigned\))*0x8c4a9f20\) == 0\) goto (LAB_\w+);', r'*(unsigned *)0x8c4a9f20 = 0; goto \1;'),
    # pointer-to-member call helper 8c0101bc (Ghidra's pure_virtual_stub): r0 = &state table record, 12 bytes per entry at +0x2dd88 indexed by the word at +0x2dd84
    ('8c0c08ac', r'pure_virtual_stub\(ar4,ar4 \+ 0x2d59c,ar6,ar7\);', '{ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)(ar4 + 0x2dd88 + 12 * *(int *)(unsigned)(ar4 + 0x2dd84)),(unsigned long)(unsigned)ar4,(unsigned long)(unsigned)(ar4 + 0x2d59c),ar6,ar7); }'),
    # mode dispatch: pointer-to-member record at ar4 + 0x2dda0 + 12 * mode (mode lives at ar4 + 0x2dd78), called with this = ar4
    ('8c0c1d40', r'pure_virtual_stub\(ar4,ar5,ar6,ar7\);', '{ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)(ar4 + 0x2dda0 + 12 * *(int *)(unsigned)(ar4 + 0x2dd78)),(unsigned long)(unsigned)ar4,(unsigned long)(unsigned)ar5,ar6,ar7); }'),
    # pointer-to-member record at ar4 + 12 + 12 * *(ar4 + 8), this = ar4
    ('8c0baa84', r'uVar1 = pure_virtual_stub\(ar4,ar5,ar6,ar7\);', '{ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); uVar1 = (undefined4)host_pmf_call((unsigned long)(unsigned)(ar4 + 12 + 12 * *(int *)(unsigned)(ar4 + 8)),(unsigned long)(unsigned)ar4,(unsigned long)(unsigned)ar5,ar6,ar7); }'),
    # binds a texture slot: a slot with no texture loaded (the host has no PVR texture memory manager) has a null descriptor, which the hardware path never sees
    ('8c25b434', r'(  ar5_00 = [^\n]*\n)', r'\1  if (!ar5_00) return 0;\n'),
    # 8-byte-aligned copy (fmov.d pairs): Ghidra copied one word per iteration but stepped the destination by two
    ('8c207300', r'    uVar3 = \*ar5;\n    ar5 = ar5 \+ 1;\n    uVar2 = uVar2 - 1;\n    \*ar4 = uVar3;\n    ar4 = ar4 \+ 2;', '    uVar3 = *ar5;\n    ar4[0] = uVar3;\n    ar4[1] = ar5[1];\n    ar5 = ar5 + 2;\n    uVar2 = uVar2 - 1;\n    ar4 = ar4 + 2;'),
    # fifth argument (stack) of the list search is the node's second name field, *(ar4 + 4) + 0x30
    ('8c01f9c4', r'FUN_8c020600\(ar4,\*\*\(undefined4 \*\*\)\(ar4 \+ 4\),ar4 \+ 0x20,ar7\);', 'FUN_8c020600(ar4,**(undefined4 **)(ar4 + 4),ar4 + 0x20,ar7,*(int *)(ar4 + 4) + 0x30);'),
    # queues the copy to the TA FIFO on the SH-4 DMAC (completion needs the DMA interrupt); the host has no PVR, so the copy is accepted at once and reports queue slot 0
    ('8c20a8e0', r'iVar1 = sh4_dmac_202f40\([^;]*\);', 'iVar1 = 0; in_stack_ffffffdc = (undefined4 *)0x8c47e988;'),
    # waits for the PVR texture-load queue entry to retire, which only the hardware interrupt does; the host has no PVR so nothing is ever pending
    ('8c203320', r'iVar1 = FUN_8c203298\(ar4,ar5,ar6,ar7\);', 'iVar1 = 1;'),
    # block count of the bulk read: r1 = bytes remaining (`ar6_00`), r0 = block size (the word at 0x8c277c8c); Ghidra passed the file handle
    ('8c259c48', r'libgcc_divide_helper_01051c\(ar4_00,ar6_00\)', 'libgcc_divide_helper_01051c(ar6_00,(*(unsigned *)0x8c277c8c))'),
    ('8c259c48', r'(  if \(\(ar5 != 0\))', r'  { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x9c48, (unsigned)ar4, ar5, (unsigned)ar6); }\n\1'),
    ('8c203400', r'(iVar3 = [^\n]*0x8c275408\)?;)', r'\1 { extern void dbg_dump(unsigned long,int); dbg_dump(0x8c2753e8, 16); dbg_dump(0x8c47eba8, 12); }'),
    # jsr @r3 with `mov.l r2,@-r15` in the delay slot: the descriptor table goes on the stack (s0), r4-r7 pass through untouched
    ('8c1f38c0', r'FUN_8c1f1d8c\((.*)\);', r'FUN_8c1f1d8c(ar4,ar5,ar6,ar7,\1);'),
    ('8c25a174', r'return 1;', '{ extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)ar4, "built", 0, 0); return 1; }'),
    ('8c25a174', r'(uVar1 = log_message\(ar5,ar5,ar6,ar7\);)', r'{ extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)ar4, (const char *)(unsigned)ar5, ar6, ar7); } \1'),
    ('8c102828', r'(log_message\(ar4,ar5,ar6,ar7\);)', r'{ extern void dbg_ring(int); dbg_ring(60); } \1'),
    ('8c020ef0', r'(iVar1 = FUN_8c020e80\(ar4,ar5,ar6,ar7\);)', r'\1 { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static int en; if (en++ < 40) dbg_log(0xef0, iVar1, ar5, ar6); }'),
    ('8c020ef0', r'(iVar1 = FUN_8c01f810\(ar4,ar5_00,ar6_00,ar7_00\);)', r'\1 { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static int pn; if (pn++ < 40) dbg_log(0xef1, iVar1, 0, 0); }'),
    ('8c01f594', r'(iVar1 = FUN_8c1f3a34\(ar4,ar5,ar6,ar7\);)', r'\1 { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0xf594, iVar1, 0, 0); }'),
    ('8c02000c', r'(puVar1 = \(undefined4 \*\)malloc_thunk\(0xd8,ar5,ar6,ar7\);)', r'\1 { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x200c, (unsigned)puVar1, ar5, 0); }'),
    ('8c1f210a', r'(iVar4 = piVar5\[1\];)', r'\1 { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x210a, iVar3, iVar4, (unsigned)ar4); }'),
    ('8c020148', r'(iVar3 = ar4 \+ iVar1 \* 0x16034 \+ 0x38;)', r'\1 { extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)acStack_3c, (const char *)(unsigned)iVar3, iVar1, 0); }'),
    # the end bound is a pointer (int *) plus 0x10 elements: the literal lost its element scaling (the table is 0x40 bytes)
    ('8c26a1ca', r'0x8c4beb48 \+ 0x10 <= piVar1', '0x8c4beb48 + 0x40 <= (unsigned)piVar1'),
    ('8c0221c8', r'(\*\(undefined4 \*\)\(0x2d154 \+ ar4 \+ iVar4 \* 0x208e0\) = uVar2;)', r'\1 { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x263841, uVar2, iVar4, *(unsigned *)(ar4 + 0x74)); { extern void dbg_dump(unsigned long,int); dbg_dump(0x8c4beb48, 16); dbg_dump(0x8c4beb88, 42); } }'),
    ('8c0221c8', r'(uVar2 = FUN_8c263840\(2,ar4 \+ 0x8c,0x2d0c4,uVar1\);)', r'\1 { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x263840, uVar2, ar4, 0); }'),
    # memset wrappers that keep r4 as the destination (r5 = 0, r6 = size); Ghidra dropped the destination
    ('8c264f6a', r'\(\*\(code \*\)puVar1\)\(0,0x34\)', '(*(code *)puVar1)(ar4,0,0x34)'),
    ('8c202116', r'memset\(0,0x10\)', 'memset(ar4,0,0x10)'),
    ('8c1f62f0', r'memset\(0x8c4727c4\);', 'memset(0x8c4727c4,0,0x4e0);'),
    # tail jump: r4 passes through, r5 = the low byte of r6 (stored and reloaded as a signed byte); Ghidra dropped r4
    ('8c267914', r'FUN_8c267924\(\(int\)\(char\)ar6\)', 'FUN_8c267924(ar4,(int)(char)ar6)'),
    # the other file-load callers pass the same two stack arguments (s0 = address of a second output word, s4 = 1)
    ('8c022494', r'undefined4 auStack_10 \[2\];', 'undefined4 auStack_10 [2];\n  undefined4 auStack_14;'),
    ('8c022494', r'file_load_to_buffer\(0x8c3eb334,ar5,ar6,ar7_00\)', 'file_load_to_buffer(0x8c3eb334,ar5,ar6,ar7_00,&auStack_14,1)'),
    ('8c01b0a8', r',auStack_c\);', ',auStack_c,&uStack_10,1);'),
    ('8c021520', r'undefined4 uVar2;', 'undefined4 uVar2;\n  undefined4 uStack_c;'),
    ('8c021520', r'\(int\)ar4 \+ 0x9ec10\)', '(int)ar4 + 0x9ec10,&uStack_c,1)'),
    ('8c021520', r'\(int\)ar4 \+ 0x9ec0c\)', '(int)ar4 + 0x9ec0c,&uStack_c,1)'),
    # file load: stack arguments s0 = &size output (the word below the data-pointer output), s4 = 1; Ghidra listed only r4-r7
    ('8c022398', r'undefined4 auStack_8 \[2\];', 'undefined4 auStack_8 [2];\n  undefined4 auStack_c;'),
    ('8c022398', r'(\(&\(\*\(undefined1 \*\)0x8c12fc98\)\),)ar7_00\);', r'\1ar7_00,&auStack_c,1);'),
    # the loader forwards its own two stack arguments to the cache lookup
    ('8c0211b8', r'int iVar1;', 'int iVar1;\n  undefined4 in_stack_00000000;\n  undefined4 in_stack_00000004;'),
    ('8c0211b8', r'FUN_8c021170\(ar4,ar5,ar6,ar7\)', 'FUN_8c021170(ar4,ar5,ar6,ar7,in_stack_00000000,in_stack_00000004)'),
    # list lookup: the fifth argument (pushed before the call) is the second key at descriptor + 0x30
    ('8c01f8a4', r'FUN_8c020600\(ar4,ar5_00,ar6,ar7\);', 'FUN_8c020600(ar4,ar5_00,ar6,ar7,ar4[1] + 0x30);'),
    ('8c2635a4', r'(iVar1 = FUN_8c1f364c\(\*\(undefined4 \*\)\(ar4 \+ 8\),ar5,ar6,ar7\);)', r'\1 { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static int tn; if (tn++ < 12) dbg_log(0x364c, iVar1, *(unsigned *)(ar4 + 8), *(unsigned char *)(ar4 + 2)); }'),
    ('8c2635a4', r'(iVar6 = FUN_8c1f332c\(\*\(undefined4 \*\)\(ar4 \+ 8\),iVar6,\*\(undefined4 \*\)\(ar4 \+ 0x24\),iVar1\);)', r'\1 { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x332c, iVar6, *(unsigned *)(ar4 + 0x24), *(unsigned *)(ar4 + 0x30)); }'),
    # ring-buffer rewind: r4 = (cursor + size - len) % size, r5 = (data pointer - base) % size; both must agree. Ghidra passed unrelated locals
    ('8c26b7f4', r'iVar2 = libgcc_divide_helper_010614\(iVar2,uVar4\);\s*iVar3 = libgcc_divide_helper_010614\(iVar2,uVar4\);(\s*if \(iVar2 == iVar3\) \{\s*\*\(int \*\)\(ar4 \+ 0x14\))', 'iVar2 = libgcc_divide_helper_010614(*(int *)(ar4 + 0x14) + (int)uVar4 - ar6[1],uVar4);\n    iVar3 = libgcc_divide_helper_010614((int)*ar6 - *(int *)(ar4 + 0x1c),uVar4);\\1'),
    ('8c26b7f4', r'iVar2 = libgcc_divide_helper_010614\(iVar2,uVar4\);\s*iVar3 = libgcc_divide_helper_010614\(iVar2,uVar4\);(\s*if \(iVar2 == iVar3\) \{\s*\*\(int \*\)\(ar4 \+ 0x18\))', 'iVar2 = libgcc_divide_helper_010614(*(int *)(ar4 + 0x18) + (int)uVar4 - ar6[1],uVar4);\n    iVar3 = libgcc_divide_helper_010614((int)*ar6 - *(int *)(ar4 + 0x1c),uVar4);\\1'),
    # ring-buffer cursor advance: r1 = cursor + length just stored in the descriptor, r0 = ring size (+0x20), modulo; Ghidra passed unrelated locals
    ('8c26b64e', r'libgcc_divide_helper_010614\(iVar3,iVar4\);\s*\*\(undefined4 \*\)\(ar4 \+ 0x14\)', 'libgcc_divide_helper_010614(*(int *)(ar4 + 0x14) + ar7[1],*(int *)(ar4 + 0x20));\n    *(undefined4 *)(ar4 + 0x14)'),
    ('8c26b64e', r'libgcc_divide_helper_010614\(iVar3,iVar4\);\s*\*\(undefined4 \*\)\(ar4 \+ 0x18\)', 'libgcc_divide_helper_010614(*(int *)(ar4 + 0x18) + ar7[1],*(int *)(ar4 + 0x20));\n    *(undefined4 *)(ar4 + 0x18)'),
    # `code` is a function type here, so byte-array and compare uses on `code *` need a plain byte pointer
    ('8c063838', r'(?<!\*)\(code \*\)', '(unsigned char *)'),
    ('8c063838', r'\(code\)', '(unsigned char)'),
    ('8c063838', r'\bcode \*(?=\w)', 'unsigned char *'),
    ('8c107590', r'(?<!\*)\(code \*\)', '(unsigned char *)'),
    ('8c107590', r'\(code\)', '(unsigned char)'),
    ('8c107590', r'\bcode \*(?=\w)', 'unsigned char *'),
    # switch on a pointer-typed local
    ('8c0f9774', r'switch\(pcVar2\)', 'switch((unsigned long)pcVar2)'),
    # the file-load pump waits on the ADX streams, whose server runs from the vblank interrupt on hardware (no interrupts here): run it once per poll
    ('8c01f810', r'iVar1 = FUN_8c01f794\(ar4,ar5,ar6,ar7\);', '{ extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static unsigned lastg = 0x12345; unsigned g = *(unsigned *)0x8c2739e0; if (g != lastg) { dbg_log(0x39e0, g, lastg, 0); lastg = g; } } FUN_8c264010(0,0,0,0); FUN_8c1f231a(0,0,0,0); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static int dn; if (++dn % 20000 == 1) { unsigned h = *(unsigned *)(unsigned long)(unsigned)ar4; unsigned st = h ? *(unsigned *)(h + 4) : 0; dbg_log(h, h ? *(unsigned char *)(h + 1) : 99, st, st ? *(unsigned char *)(st + 1) : 99); if (dn == 1) { extern void dbg_dump(unsigned long,int); unsigned t = *(unsigned *)0x8c2739f0; dbg_dump(0x8c2739f0, 1); if (t) dbg_dump(t, 30); } if (st) { extern void dbg_dump(unsigned long,int); dbg_dump(st, 20); dbg_dump(*(unsigned *)(st + 4), 12); } } } iVar1 = FUN_8c01f794(ar4,ar5,ar6,ar7);'),
    # sector counts: ushort table at ar6+0x14; entry 0 = *DAT_8c4b5268 / 0x800 (r1 = that word, r0 = 0x800, store address = sp[0x0c]); Ghidra dropped both
    # later entries: (*(word *)r5 + 0x7ff) / 0x800 stored at the ushort table (iStack_24) + 2 * previous counter
    # wrapper tail-jumps to memset: r4 passes through, r5 = 0, r6 = 100; Ghidra dropped the destination
    ('8c2632e2', r'memset\(0,100\)', 'memset(ar4,0,100)'),
    # elapsed-time call: r4 = start stamp, r5 = the stamp just read (`ar5 = (*puVar1)()`); Ghidra dropped r5
    ('8c1f2f98', r'puVar2\)\(uVar4\)', 'puVar2)(uVar4,ar5)'),
    # strcpy-like FUN_8c010998 takes dest in r0 and src in r1; Ghidra lost both. Read from the asm at 8c25a186..8c25a1d4:
    # call 1: r0 = sp+4, r1 = log_message result - 4; calls 2 and 3: r0 = r14 (ar4), r1 = 0x8c4aa5a8
    ('8c25a174', r'FUN_8c010998\(uVar1,ar5_00,ar6,ar7,ain0,in_stack_ffffffe8\)', 'FUN_8c010998(uVar1,ar5_00,ar6,ar7,(unsigned)&stack0xffffffe8,ar5_00 + uVar1 - 4)'),
    ('8c25a174', r'FUN_8c010998\(ar4_00,ain0,ar6,ar7,uVar1,in_stack_ffffffe8\)', 'FUN_8c010998(ar4_00,ain0,ar6,ar7,ar4,0x8c4aa5a8)'),
    ('8c25a174', r'FUN_8c010998\(ar4_00,ar5_00,ar6,ar7,uVar1,in_stack_ffffffe8\)', 'FUN_8c010998(ar4_00,ar5_00,ar6,ar7,ar4,0x8c4aa5a8)'),
    # maple device record lookup: no controller hardware, so give +0x30 a zeroed status block (the game clears its BSS after startup)
    ('8c1f62cc', r'return ar4 \* 0x34 \+ 0x8c4727c4;', '{ unsigned *rec_ = (unsigned *)(unsigned long)(ar4 * 0x34 + 0x8c4727c4); if (rec_[12] == 0) rec_[12] = 0x8cfa0000; return ar4 * 0x34 + 0x8c4727c4; }'),
    # `mov r14,r0; add #0x30,r0; mov.l r0,@-r15` before the jsr: 5th argument (ar5+0x30 bytes) on the stack, dropped as a dead store
    ('8c02049c', r'FUN_8c020600\(ar4,\*ar5,ar4 \+ 8,piVar3\)', 'FUN_8c020600(ar4,*ar5,ar4 + 8,piVar3,ar5 + 0xc)'),
]

# Functions replaced by a no-op that returns 0. Only for things with no effect on game state.
STUBS = {
    # program entry: the host starts the game itself, and the decompile mangles the banner strings
    '8c1ef400': 'crt0 entry',
    # ADX error logger: formats through vsprintf with a va_list the decompile cannot supply; only produces text
    '8c25ece6': 'ADX error log',
    # VMU LCD bitmap (Maple): no LCD here
    '8c01c8c8': 'VMU LCD write',
    '8c1f9e32': 'cache maintenance (no caches on the host)',
    '8c1f9bde': 'cache maintenance (no caches on the host)',
    '8c1f9980': 'cache maintenance (no caches on the host)',
    '8c1fa0c4': 'cache maintenance (no caches on the host)',
    '8c2616a8': 'cache maintenance (no caches on the host)',
    '8c26a860': 'sound driver stream volume (no AICA driver on the host)',
    '8c267b30': 'sound driver stream pan command (as 8c267e54)',
    '8c267e54': 'sound driver stream command: queues a command for the AICA program, which the host does not run; reports success',
    '8c261786': 'cache maintenance (no caches on the host)',
}

# libgcc divide helpers, rewritten natively: (signed?, operator). Quotient/remainder of ar4 by ar5, divide by zero sets errno 0x44e (0x8c2787a8) and returns 0.
# 8c0101e4..8c0103d0 take (r4,r5); 8c010468..8c0106dc take (r1,r0) and are given the signature (n, d) by ghidra_scripts/FixDivHelpers.java
NATIVE = {
    '8c0101e4': (True, '/'), '8c010284': (False, '/'), '8c01031c': (True, '%'), '8c0103d0': (False, '%'),
    '8c010468': (True, '/'), '8c01051c': (False, '/'), '8c010614': (True, '%'), '8c0106dc': (False, '%'),
}

# guest GD-ROM BIOS wrappers (mov #0,r6; mov func,r7; jmp @vector) -> host functions in port/exec/bios.c taking the guest r4/r5
HOST = {
    '8c1f8544': 'host_rtc_read',
    # memory card: the game's request queue and wait loops run as written; the card is reported ready in drive A1 and each
    # queued op is carried out at once on files in sd:/seaman/vmu (host/wii_vmu.cpp). The Shinobi drive-present check answers yes.
    '8c01a3b4': 'host_vmu_ready', '8c01a760': 'host_memcard_run', '8c1fbfcc': 'host_ret1',
    '8c1fc258': 'host_vmu_game_name', '8c1fc16a': 'host_vmu_free_blocks', '8c1fc682': 'host_ret0', '8c1fc5c4': 'host_ret0', '8c1fc5de': 'host_ret0',   # make room / busy / drive status: done
    '8c01d0cc': 'host_ret1', '8c01cb54': 'host_ret1',
    '8c010794': 'host_movstr', '8c0107a0': 'host_movstr',
    '8c013ff8': 'host_memset',
    '8c0109e8': 'host_strcmp',
    # sprintf(r4 = buffer; format and arguments on the stack): calls the formatter in string mode (1), with the va_list at sp+4
    '8c014334': 'host_sprintf',
    '8c26a14e': 'mw_debug_printf',
    '8c1f10d8': 'gd_req_cmd', '8c1f10ec': 'gd_check_cmd', '8c1f1100': 'gd_exec_server', '8c1f1114': 'gd_init',
    '8c1f1128': 'gd_drive_status', '8c1f1150': 'gd_dma_req', '8c1f1164': 'gd_dma_check',
}
