/* Seaman (USA) region 0x8c1b0000-0x8c1c0000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * not_code_1b8a34  0x8c1b8a34
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b91a2
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b8a34(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b8ec2  0x8c1b8ec2
 * data decoded as code (no valid instruction stream)
 * called by: not_code_wrap
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b8ec2(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b8f5c  0x8c1b8f5c
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b91a2
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b8f5c(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9044  0x8c1b9044
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b91d8
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9044(void) {
    u32 in_r0;
    int unaff_r13;

    *(u32 *)(unaff_r13 + 0x30) = in_r0;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b90e4  0x8c1b90e4
 * data decoded as code (no valid instruction stream)
 * called by: halt_baddata_wrap_1b939a
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b90e4(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b91a2  0x8c1b91a2
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b95f2
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b91a2(void) {
    not_code_1b8f5c();
    not_code_1b8a34();
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b91d8  0x8c1b91d8
 * data decoded as code (no valid instruction stream)
 * decompiler: Control flow encountered bad instruction data
 * decompiler: This function may have set the stack pointer
 */
u32 not_code_1b91d8(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    not_code_1b9994(a0, a1, r6, r7, uRamffffffd2);
    TrapAlways(0xcb);
    not_code_1b9044();
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * halt_baddata_wrap_1b939a  0x8c1b939a
 * called by: mac_wOp_wrap_1b992a
 * decompiler: Control flow encountered bad instruction data
 */
u32 halt_baddata_wrap_1b939a(u32 unused_a0, int a1) {
    int in_r2;

    if (in_r2 <= *(int *)(a1 + 0x2c)) {
        /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
    }
    not_code_1b90e4();
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b93be  0x8c1b93be
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9b02
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b93be(int *a0) {
    int *unaff_r9;
    char in_S;
    u32 in_MACH;
    u32 in_MACL;

    if (in_S != '\0') {
        mac_lOp(CONCAT44(in_MACH, in_MACL), (s64)*unaff_r9 * (s64)*a0);
    }
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_wrap  0x8c1b93e2
 * only calls not_code_1b8ec2
 * called by: not_code_1b9b02
 */
u32 not_code_wrap(void) {
    u32 uVar1;

    uVar1 = not_code_1b8ec2();
    return uVar1;
}

/*
 * not_code_1b940a  0x8c1b940a
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b95f2
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b940a(void) {
    u16 in_r0;
    int in_GBR;

    *(u16 *)(in_GBR + 0x1aa) = in_r0;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9422  0x8c1b9422
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9794, not_code_1b979e
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9422(void) {
    u16 in_r0;
    int in_GBR;

    *(u16 *)(in_GBR + 0x172) = in_r0;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * game_sub_1b9428  0x8c1b9428
 * area name: game code; nothing names its area yet
 * called by: not_code_1b9664
 */
u32 game_sub_1b9428(void) {
    u32 r4;
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    int in_r1;
    int in_GBR;

    uVar1 = not_code_1ba396(r4, r5, r6, r7, *(u32 *)(&stack0x00000000 + -in_r1));
    *(short *)(in_GBR + 0x196) = (short)uVar1;
    uVar1 = not_code_1ba1a4();
    return uVar1;
}

/*
 * not_code_1b9444  0x8c1b9444
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9702, not_code_1b970a
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9444(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain1) {
    u32 uVar1;
    int in_r2;
    u32 in_R7_BANK;
    int in_GBR;
    char in_M;
    char in_Q;
    u32 *puVar2;

    *(u16 *)(in_GBR + 0x1a2) = *(u16 *)(in_GBR + 0x194);
    *(u32 *)(ain1 + -0xc) = in_R7_BANK;
    uVar1 = (int)(char)(ain1 + -8) << 1 | (u32)(0 < ain1 + -8);
    if (in_Q == '\0' && in_M == '\0') {
        puVar2 = (u32 *)(uVar1 - in_r2);
    } else if (in_Q == '\0' && in_M == '\x01') {
        puVar2 = (u32 *)(uVar1 + in_r2);
    } else if (in_Q == '\x01' && in_M == '\0') {
        puVar2 = (u32 *)(uVar1 + in_r2);
    } else {
        puVar2 = (u32 *)(uVar1 - in_r2);
    }
    not_code_1b9b9e(a0);
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b946e  0x8c1b946e
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9794, not_code_1b979e
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b946e(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 in_stack_00000000;

    not_code_1b979e(a0, a1, r6, r7, in_stack_00000000);
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b94ce  0x8c1b94ce
 * data decoded as code (no valid instruction stream)
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b94ce(void) {
    short *in_r1;
    char in_S;
    u32 in_MACH;
    u32 in_MACL;

    if (in_S != '\0') {
        mac_wOp(CONCAT44(in_MACH, in_MACL), (int)*in_r1 * (int)*in_r1);
    }
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9552  0x8c1b9552
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9702
 * decompiler: Control flow encountered unimplemented instructions
 */
u32 not_code_1b9552(u32 unused_a0, u32 unused_a1, u32 unused_a2, int a3) {
    u16 in_r0;
    u32 in_r2;
    int in_GBR;

    *(u32 *)(a3 + 0x14) = in_r2;
    *(u16 *)(in_GBR + 0x1a8) = in_r0;
    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
}

/*
 * not_code_1b9556  0x8c1b9556
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9702, not_code_1b970a
 * decompiler: Control flow encountered unimplemented instructions
 */
u32 not_code_1b9556(void) {
    u16 in_r0;
    int in_GBR;

    *(u16 *)(in_GBR + 0x1a8) = in_r0;
    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
}

/*
 * not_code_1b95f2  0x8c1b95f2
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9994, not_code_1b9996
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b95f2(void) {
    u32 uVar1;
    short *extraout_r1;
    int in_GBR;
    char extraout_S;
    u32 extraout_MACH;
    u32 extraout_MACL;

    not_code_1b91a2();
    uVar1 = not_code_1b940a();
    *(short *)(in_GBR + 0x1cc) = (short)uVar1;
    if (extraout_S != '\0') {
        mac_wOp(CONCAT44(extraout_MACH, extraout_MACL), (int)*extraout_r1 * (int)*extraout_r1);
    }
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b960a  0x8c1b960a
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9794, not_code_1b979e
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b960a(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9664  0x8c1b9664
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9794, not_code_1b979e
 * decompiler: Control flow encountered unimplemented instructions
 */
u32 not_code_1b9664(void) {
    game_sub_1b9428();
    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
}

/*
 * halt_unimplemented_wrap_1b9668  0x8c1b9668
 * called by: not_code_1b9aa8
 * decompiler: Control flow encountered unimplemented instructions
 */
u32 halt_unimplemented_wrap_1b9668(void) {
    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
}

/*
 * not_code_1b9702  0x8c1b9702
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9994, not_code_1b9996
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9702(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int unaff_r13;
    int in_GBR;

    uVar1 = not_code_1b9552(a0, unused_a1, unused_a2, a3);
    *(char *)(in_GBR + 0xd1) = (char)uVar1;
    uVar2 = *(u32 *)(unaff_r13 + 0x38);
    *(short *)(in_GBR + 0x192) = (short)uVar1;
    uVar1 =
        not_code_1b9444(a0, unused_a1, unused_a2, a3, uVar2 & 0xffff0000 | (uVar2 & 0xff) << 8 | (uVar2 & 0xff00) >> 8);
    not_code_1b9556();
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b970a  0x8c1b970a
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9a72
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b970a(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    int in_r3;
    int in_GBR;

    *(char *)(in_GBR + 0xd1) = (char)(u16)ain0;
    *(u16 *)(in_GBR + 0x192) = (u16)ain0;
    not_code_1b9444(a0, unused_a1, unused_a2, unused_a3, *(u32 *)(&stack0x00000000 + in_r3));
    not_code_1b9556(a0, unused_a1, unused_a2, unused_a3, *(u32 *)(&stack0x00000000 + in_r3));
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9750  0x8c1b9750
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9902
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9750(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9756  0x8c1b9756
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9a72
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9756(void) {
    u32 in_r0;
    int in_GBR;

    *(u32 *)(in_GBR + 0x54) = in_r0;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9794  0x8c1b9794
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9902
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9794(int a0, u8 *a1) {
    u16 uVar1;
    u32 in_r0;
    u32 uVar2;
    int iVar3;
    u32 extraout_r2;
    u32 in_r2;
    u8 extraout_r3;
    u8 in_r3;
    int ar7_00;
    int iVar4;
    char *unaff_r9;
    int unaff_r12;
    u32 in_R1_BANK;
    int in_GBR;
    bool bVar5;

    while (true) {
        if ((int)unaff_r9 < 0) {
            uVar2 = in_r0 >> (~(u32)unaff_r9 & 0x1f) + 1;
        } else {
            uVar2 = in_r0 << ((u32)unaff_r9 & 0x1f);
        }
        *(short *)(in_GBR + 0x72) = (short)uVar2;
        ar7_00 = (int)*unaff_r9;
        unaff_r9 = unaff_r9 + 1;
        iVar4 = (char)a0 + a0;
        *(u32 *)(unaff_r12 + 4) = uVar2;
        *a1 = in_r3;
        *(char *)(in_GBR + 0xeb) = (char)uVar2;
        iVar3 = not_code_1b9422();
        *(u32 *)(iVar3 + -4) = in_R1_BANK;
        *(short *)(in_GBR + 0x108) = (short)(u32 *)(iVar3 + -4);
        *(u32 *)(a1 + 0x38) = iVar4 + (u32)((in_r2 & 0x80000000) != 0);
        uVar2 = not_code_1b960a();
        bVar5 = (uVar2 & 0x80000000) != 0;
        uVar1 = (u16)(uVar2 << 1) | (u16)bVar5;
        if (bVar5)
            break;
        in_r0 = not_code_1b946e(a0, a1);
        in_r2 = extraout_r2;
        in_r3 = extraout_r3;
    }
    *(u16 *)(in_GBR + 0x11a) = uVar1;
    iVar4 = (int)g_8c1b988a;
    *(u16 *)(in_GBR + 0xc) = uVar1;
    not_code_1b9664();
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b979e  0x8c1b979e
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b946e
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b979e(int a0, u8 *a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    u32 extraout_r2;
    u32 in_r2;
    u8 extraout_r3;
    u8 in_r3;
    int ar7_00;
    int iVar4;
    char *unaff_r9;
    int unaff_r12;
    u32 in_R1_BANK;
    int in_GBR;
    bool bVar5;

    while (true) {
        ar7_00 = (int)*unaff_r9;
        unaff_r9 = unaff_r9 + 1;
        uVar3 = (u32)((in_r2 & 0x80000000) != 0);
        iVar4 = uVar3 + a0;
        *(u32 *)(unaff_r12 + 4) = ain0;
        *a1 = in_r3;
        *(char *)(in_GBR + 0xeb) = (char)ain0;
        iVar2 = not_code_1b9422(a0, a1, unused_a2, ar7_00, *(u32 *)((int)register0x0000003c + uVar3 + a0));
        *(u32 *)(iVar2 + -4) = in_R1_BANK;
        *(short *)(in_GBR + 0x108) = (short)(u32 *)(iVar2 + -4);
        *(u8 **)(a1 + 0x38) = (u8 *)((int)register0x0000003c + iVar4);
        uVar3 = not_code_1b960a();
        bVar5 = (uVar3 & 0x80000000) != 0;
        uVar1 = (u16)(uVar3 << 1) | (u16)bVar5;
        if (bVar5)
            break;
        uVar3 = not_code_1b946e(a0, a1);
        if ((int)unaff_r9 < 0) {
            ain0 = uVar3 >> (~(u32)unaff_r9 & 0x1f) + 1;
        } else {
            ain0 = uVar3 << ((u32)unaff_r9 & 0x1f);
        }
        register0x0000003c = (BADSPACEBASE *)(int)(char)a0;
        *(short *)(in_GBR + 0x72) = (short)ain0;
        in_r2 = extraout_r2;
        in_r3 = extraout_r3;
    }
    *(u16 *)(in_GBR + 0x11a) = uVar1;
    iVar4 = (int)g_8c1b988a;
    *(u16 *)(in_GBR + 0xc) = uVar1;
    not_code_1b9664();
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9802  0x8c1b9802
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9994, not_code_1b9996
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9802(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b982c  0x8c1b982c
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9994, not_code_1b9996
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b982c(u32 unused_a0, int a1) {
    u8 unaff_r9;

    *(u8 *)(a1 + -1) = unaff_r9;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9834  0x8c1b9834
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9994, not_code_1b9996
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9834(void) {
    int in_r3;

    *(BADSPACEBASE **)(in_r3 + 0xc) = register0x0000003c;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9902  0x8c1b9902
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9a72
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9902(u32 a0, u32 a1, u32 *a2, u32 unused_a3, u32 ain0) {
    u32 unaff_r11;
    int in_GBR;

    *(u16 *)(in_GBR + 0x150) = (u16)ain0;
    *a2 = unaff_r11;
    not_code_1b9794(a0, a1);
    not_code_1b9750();
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * mac_wOp_wrap_1b992a  0x8c1b992a
 * called by: not_code_1b9a72
 * decompiler: Control flow encountered bad instruction data
 */
u32 mac_wOp_wrap_1b992a(u32 unused_a0, u32 a1) {
    u32 uVar1;
    u32 extraout_r1;
    int iVar2;
    int unaff_r10;
    int in_GBR;
    char extraout_S;
    u32 extraout_MACH;
    u32 extraout_MACL;

    iVar2 = (int)not_code_1b9996;
    uVar1 = halt_baddata_wrap_1b939a(unused_a0, a1);
    *(int *)(unaff_r10 + 0x38) = iVar2;
    *(short *)(in_GBR + 0x1ce) = (short)uVar1;
    iVar2 = (int)*(short *)(extraout_r1 >> 1 | (u32)((extraout_r1 & 1) != 0) << 0x1f);
    if (extraout_S != '\0') {
        mac_wOp(CONCAT44(extraout_MACH, extraout_MACL), iVar2 * iVar2);
    }
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9966  0x8c1b9966
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9b02
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9966(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9994  0x8c1b9994
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b91d8, not_code_1b9994
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9994(u32 a0, int a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    int ar7_00;
    int in_GBR;

    ar7_00 = (int)g_8c1b9a52;
    *(u16 *)(in_GBR + 0xc) = (u16)ain0;
    not_code_1b9702(a0, a1, unused_a2, ar7_00);
    uVar1 = not_code_1b982c(a0, a1);
    *(char *)(in_GBR + 0xeb) = (char)uVar1;
    *(char *)(in_GBR + 0x93) = (char)uVar1;
    *(short *)(in_GBR + 0x108) = (short)uVar1;
    *(BADSPACEBASE **)(a1 + 0x38) = register0x0000003c;
    uVar1 = not_code_1b9802();
    *(char *)(in_GBR + 0x98) = (char)uVar1;
    uVar1 = not_code_1ba442();
    *(short *)(in_GBR + 0x116) = (short)uVar1;
    *(char *)(in_GBR + 0xf) = (char)uVar1;
    not_code_1b9834();
    uVar1 = not_code_1b95f2();
    uVar1 = not_code_1b9994(a0, a1, unused_a2, ar7_00, uVar1);
    *(short *)(in_GBR + 0x12a) = (short)uVar1;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9996  0x8c1b9996
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9996
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9996(u32 a0, int a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    int a7;
    int in_GBR;
    u32 in_stack_00000000;

    a7 = (int)g_8c1b9a52;
    *(u16 *)(in_GBR + 0xc) = (u16)ain0;
    not_code_1b9702(a0, a1, unused_a2, a7);
    uVar1 = not_code_1b982c(a0, a1);
    *(char *)(in_GBR + 0xeb) = (char)uVar1;
    *(char *)(in_GBR + 0x93) = (char)uVar1;
    *(short *)(in_GBR + 0x108) = (short)uVar1;
    *(BADSPACEBASE **)(a1 + 0x38) = register0x0000003c;
    uVar1 = not_code_1b9802();
    *(char *)(in_GBR + 0x98) = (char)uVar1;
    uVar1 = not_code_1ba442();
    *(short *)(in_GBR + 0x116) = (short)uVar1;
    *(char *)(in_GBR + 0xf) = (char)uVar1;
    not_code_1b9834();
    not_code_1b95f2();
    uVar1 = not_code_1b9996(a0, a1, unused_a2, a7, in_stack_00000000);
    *(short *)(in_GBR + 0x12a) = (short)uVar1;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9a34  0x8c1b9a34
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9c3a
 * decompiler: Control flow encountered unimplemented instructions
 */
u32 not_code_1b9a34(void) {
    u8 in_r0;
    int in_GBR;

    *(u8 *)(in_GBR + 0x95) = in_r0;
    *(u8 *)(in_GBR + 0xf1) = in_r0;
    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
}

/*
 * not_code_1b9a54  0x8c1b9a54
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9aa8
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9a54(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9a72  0x8c1b9a72
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9c52
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9a72(u32 a0, u8 *a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    int extraout_r1;
    int extraout_r2;
    u8 extraout_r3;
    char cVar2;
    int a7;
    char *unaff_r9;
    int unaff_r12;
    int in_GBR;
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 extraout_M;
    u8 extraout_Q;
    u8 in_IMASK;
    u8 extraout_S;
    u8 extraout_T;
    u8 extraout_T_00;
    u32 in_stack_00000000;

    not_code_1b9902(a0, a1, a2, r7, in_stack_00000000);
    uVar1 = not_code_1b9756(a0, a1, a2, r7, *(u32 *)((int)&stack0x00000000 + (u32)extraout_T + extraout_r1));
    *(char *)(in_GBR + 0x9d) = (char)uVar1;
    cVar2 = (char)a0;
    *(short *)(in_GBR + 0x72) = (short)uVar1;
    a7 = (int)*unaff_r9;
    *(u32 *)(unaff_r12 + 4) = uVar1;
    mac_wOp_wrap_1b992a(a0, a1);
    *a1 = extraout_r3;
    uVar1 = not_code_1b970a(a0, a1, a2, a7, *(u32 *)(int)cVar2);
    *(char *)(in_GBR + 0xb3) = (char)uVar1;
    *(u16 *)(in_GBR + 0x9a) = (u16)uVar1 ^ 0x9f;
    *(u32 *)(extraout_r2 + -4) = (u32)extraout_T_00 | (u32)extraout_S << 1 | (u32)in_IMASK << 4 | (u32)extraout_Q << 8 |
                                 (u32)extraout_M << 9 | (u32)in_FD << 0xf | (u32)in_BL << 0x1c | (u32)in_RB << 0x1d |
                                 (u32)in_MD << 0x1e;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9aa8  0x8c1b9aa8
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9c52, not_code_1b9c70
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9aa8(u32 unused_a0, int a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    short *extraout_r1;
    u32 in_r2;
    u16 unaff_r9;
    int unaff_r10;
    int in_GBR;
    char extraout_S;
    u32 extraout_MACH;
    u32 extraout_MACL;

    *(u32 *)(unaff_r10 + -4) = in_r2;
    halt_unimplemented_wrap_1b9668();
    *(u16 *)(a1 + -2) = unaff_r9;
    uVar1 = not_code_1b9a54(unused_a0, (u16 *)(a1 + -2), r6, r7);
    *(short *)(in_GBR + 0x13a) = (short)uVar1;
    if (extraout_S != '\0') {
        mac_wOp(CONCAT44(extraout_MACH, extraout_MACL), (int)*extraout_r1 * (int)*extraout_r1);
    }
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9b02  0x8c1b9b02
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9e00
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9b02(u8 *a0) {
    u16 in_r0;
    u32 uVar1;
    u8 unaff_r12;
    int in_GBR;
    char in_T;

    if (in_T != '\0') {
        uVar1 = not_code_1b9966();
        *(char *)(in_GBR + 0x90) = (char)uVar1;
        uVar1 = not_code_1b93be(a0);
        *(short *)(in_GBR + 0x146) = (short)uVar1;
        uVar1 = not_code_wrap();
        return uVar1;
    }
    *(u16 *)(in_GBR + 10) = in_r0;
    *(u16 *)(in_GBR + 0x1a4) = in_r0;
    *a0 = unaff_r12;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9b9e  0x8c1b9b9e
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9444, not_code_1b9c3a
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9b9e(u8 *a0) {
    u16 in_r0;
    u8 unaff_r12;
    int in_GBR;

    *(u16 *)(in_GBR + 10) = in_r0;
    *(u16 *)(in_GBR + 0x1a4) = in_r0;
    *a0 = unaff_r12;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9c3a  0x8c1b9c3a
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9c52
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9c3a(u32 a0, u32 unused_a1, u32 a2, u32 unused_a3, u32 s0) {
    u32 uVar1;
    int extraout_r3;
    int in_GBR;

    not_code_1ba52c();
    *(u32 *)(extraout_r3 + 0x18) = a2;
    not_code_1b9a34();
    uVar1 = not_code_1b9b9e(a0, unused_a1, a2, (int)&s0 << 0x10 | (u32)&s0 >> 0x10, s0);
    *(short *)(in_GBR + 0x18e) = (short)uVar1;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9c52  0x8c1b9c52
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9c52, not_code_1b9c70
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9c52(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 uVar2;
    short *extraout_r1;
    u32 extraout_r2;
    int extraout_r2_00;
    int iVar3;
    int *unaff_r9;
    char *unaff_r12;
    int in_GBR;
    char extraout_S;
    char extraout_S_00;
    bool bVar4;
    u32 extraout_MACH;
    u32 extraout_MACH_00;
    u32 extraout_MACL;
    u32 extraout_MACL_00;

    iVar3 = (int)*unaff_r12;
    not_code_1b9a72(a0, a1, a2);
    uVar2 = g_8c1b9cd8;
    uVar1 = not_code_1b9c3a(a0, g_8c1b9cd8, a2, iVar3);
    *(short *)(in_GBR + 0x1ce) = (short)uVar1;
    bVar4 = (extraout_r2 & 1) != 0;
    if (extraout_S != '\0') {
        mac_lOp(CONCAT44(extraout_MACH, extraout_MACL),
                (s64)*unaff_r9 * (s64) * (int *)(extraout_r2 >> 1 | (u32)bVar4 << 0x1f));
    }
    uVar1 = not_code_1bab30(a0, uVar2, a2, iVar3, *(u32 *)(&stack0x00000000 + (-(u32)bVar4 - a0)));
    *(short *)(unaff_r12 + 0xf) = (short)uVar1;
    iVar3 = (int)unaff_r12[1];
    not_code_1b9aa8(a0, uVar2);
    uVar2 = not_code_1b9c52(a0, uVar2, a2);
    *(short *)(in_GBR + 0x1cc) = (short)uVar2;
    if (extraout_S_00 != '\0') {
        mac_wOp(CONCAT44(extraout_MACH_00, extraout_MACL_00), (int)*extraout_r1 * (int)*extraout_r1);
    }
    *(short *)(extraout_r2_00 + 0x1a) = (short)uVar2;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9c70  0x8c1b9c70
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9e00
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9c70(u32 a0, u32 a1, u32 a2) {
    u16 in_r0;
    u32 uVar1;
    short *extraout_r1;
    int extraout_r2;
    int a7;
    char *unaff_r12;
    int in_GBR;
    char extraout_S;
    u32 extraout_MACH;
    u32 extraout_MACL;

    *(u16 *)(unaff_r12 + 0xe) = in_r0;
    a7 = (int)*unaff_r12;
    not_code_1b9aa8(a0, a1);
    uVar1 = not_code_1b9c52(a0, a1, a2);
    *(short *)(in_GBR + 0x1cc) = (short)uVar1;
    if (extraout_S != '\0') {
        mac_wOp(CONCAT44(extraout_MACH, extraout_MACL), (int)*extraout_r1 * (int)*extraout_r1);
    }
    *(short *)(extraout_r2 + 0x1a) = (short)uVar1;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1b9e00  0x8c1b9e00
 * data decoded as code (no valid instruction stream)
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1b9e00(u32 a0, u32 a1, u32 a2) {

    not_code_1b9c70(a0, a1, a2);
    not_code_1b9b02(a0);
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1ba1a4  0x8c1ba1a4
 * data decoded as code (no valid instruction stream)
 * called by: game_sub_1b9428
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1ba1a4(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1ba396  0x8c1ba396
 * data decoded as code (no valid instruction stream)
 * called by: game_sub_1b9428
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1ba396(void) {
    u16 in_r0;
    int in_GBR;

    *(u16 *)(in_GBR + 0x166) = in_r0;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1ba442  0x8c1ba442
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9994, not_code_1b9996
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1ba442(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1ba44a  0x8c1ba44a
 * data decoded as code (no valid instruction stream)
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1ba44a(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1ba52c  0x8c1ba52c
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9c3a
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1ba52c(void) {
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/*
 * not_code_1bab30  0x8c1bab30
 * data decoded as code (no valid instruction stream)
 * called by: not_code_1b9c52
 * decompiler: Control flow encountered bad instruction data
 */
u32 not_code_1bab30(void) {
    u16 in_r0;
    int in_GBR;

    *(u16 *)(in_GBR + 0x1ba) = in_r0;
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}
