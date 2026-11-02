/* Seaman (USA) region 0x8c1f0000-0x8c200000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * FUN_8c1f002a  0x8c1f002a
 * called by: FUN_8c1f6142
 */
u32 FUN_8c1f002a(u32 *a0, u32 a1) {
    u8 *pbVar1;

    pbVar1 = (u8 *)FUN_8c1efffa(a1, 1);
    if (pbVar1 == NULL) {
        return 0xffffffff;
    }
    *a0 = (u32)pbVar1[1] << 0x10 | (u32)pbVar1[2] << 8 | (u32)*pbVar1 << 0x18 | (u32)pbVar1[3];
    return 0;
}

/*
 * FUN_8c1f0074  0x8c1f0074
 * called by: FUN_8c1fd008
 */
u32 FUN_8c1f0074(short *a0, u32 a1) {
    u8 *pbVar1;

    pbVar1 = (u8 *)FUN_8c1efffa(a1, 2);
    if (pbVar1 != NULL) {
        *a0 = *pbVar1 + 1;
        a0[1] = (pbVar1[1] + 1) * 0x20;
        a0[2] = (u16)(pbVar1[2] >> 4);
        a0[3] = pbVar1[2] & 0xf;
        a0[4] = (u16)(pbVar1[3] >> 7);
        return 0;
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f00f8  0x8c1f00f8
 */
u32 FUN_8c1f00f8(u32 *a0, u32 a1) {
    u8 *pbVar1;

    pbVar1 = (u8 *)FUN_8c1efffa(a1, 0x10);
    if (pbVar1 == NULL) {
        return 0xffffffff;
    }
    *a0 = (u32)pbVar1[1] << 0x10 | (u32)pbVar1[2] << 8 | (u32)*pbVar1 << 0x18 | (u32)pbVar1[3];
    return 0;
}

/*
 * FUN_8c1f0142  0x8c1f0142
 * called by: FUN_8c1f3d28
 */
u32 FUN_8c1f0142(short *a0, u32 a1) {
    u8 *pbVar1;

    pbVar1 = (u8 *)FUN_8c1efffa(a1, 4);
    if (pbVar1 == NULL) {
        return 0xffffffff;
    }
    *a0 = *pbVar1 + 1;
    a0[1] = (pbVar1[1] + 1) * 0x20;
    a0[2] = (u16)(pbVar1[2] >> 4);
    *(u8 *)(a0 + 3) = pbVar1[3] >> 6;
    *(u8 *)((int)a0 + 7) = pbVar1[3] >> 5 & 1;
    return 0;
}

/*
 * FUN_8c1f01ae  0x8c1f01ae
 * called by: FUN_8c1f6494
 */
u32 FUN_8c1f01ae(u8 *a0, u32 a1) {
    u8 *puVar1;

    puVar1 = (u8 *)FUN_8c1efffa(a1, 8);
    if (puVar1 == NULL) {
        return 0xffffffff;
    }
    *a0 = *puVar1;
    a0[1] = puVar1[1];
    a0[2] = puVar1[2];
    a0[3] = puVar1[3];
    return 0;
}

/*
 * FUN_8c1f01e8  0x8c1f01e8
 */
u32 FUN_8c1f01e8(u32 *a0, u32 a1) {
    u8 *pbVar1;

    pbVar1 = (u8 *)FUN_8c1efffa(a1, 0x20);
    if (pbVar1 == NULL) {
        return 0xffffffff;
    }
    *a0 = (u32)pbVar1[1] << 0x10 | (u32)pbVar1[2] << 8 | (u32)*pbVar1 << 0x18 | (u32)pbVar1[3];
    return 0;
}

/*
 * FUN_8c1f0232  0x8c1f0232
 */
u32 FUN_8c1f0232(u32 *a0, u32 a1) {
    u8 *pbVar1;

    pbVar1 = (u8 *)FUN_8c1efffa(a1, (int)0x100);
    if (pbVar1 == NULL) {
        return 0xffffffff;
    }
    *a0 = (u32)*pbVar1;
    a0[1] = (u32)pbVar1[1];
    return 0;
}

/*
 * FUN_8c1f026a  0x8c1f026a
 * called by: FUN_8c1f6386, FUN_8c1f63a6
 */
u32 FUN_8c1f026a(int a0, u32 a1) {
    if (a0 == 1) {
        FUN_8c1f468a(a1);
    } else if (a0 == 2) {
        FUN_8c1f4656(a1);
    } else if (a0 == 4) {
        FUN_8c1f46de(a1);
    } else if (a0 == 3) {
        FUN_8c1f469e(a1);
    } else if (a0 == 6) {
        FUN_8c1f46ca(a1);
    } else if (a0 == 5) {
        FUN_8c1f4672(a1);
    } else if (a0 == 0) {
        FUN_8c1f46f2(a1);
    } else if (a0 == 7) {
        FUN_8c1f4716(a1);
    } else if (a0 == 8) {
        FUN_8c1f472a(a1);
    } else {
        if (a0 != 9) {
            return 0xffffffff;
        }
        FUN_8c1f4764(a1);
    }
    return 0;
}

/*
 * FUN_8c1f026e  0x8c1f026e
 */
u32 FUN_8c1f026e(u32 unused_a0, u32 a1, u32 a2) {
    int in_r0;

    if (in_r0 == 1) {
        FUN_8c1f468a(a1);
    } else if (in_r0 == 2) {
        FUN_8c1f4656(a1);
    } else if (in_r0 == 4) {
        FUN_8c1f46de(a1);
    } else if (in_r0 == 3) {
        FUN_8c1f469e(a1);
    } else if (in_r0 == 6) {
        FUN_8c1f46ca(a1);
    } else if (in_r0 == 5) {
        FUN_8c1f4672(a1, a1, a2);
    } else if (in_r0 == 0) {
        FUN_8c1f46f2(a1);
    } else if (in_r0 == 7) {
        FUN_8c1f4716(a1);
    } else if (in_r0 == 8) {
        FUN_8c1f472a(a1);
    } else {
        if (in_r0 != 9) {
            return 0xffffffff;
        }
        FUN_8c1f4764(a1);
    }
    return 0;
}

/*
 * FUN_8c1f0312  0x8c1f0312
 * called by: FUN_8c1f6142, FUN_8c1f636a, FUN_8c1f63e4
 */
u32 FUN_8c1f0312(int a0) {
    u32 uVar1;

    if (a0 == 1) {
        uVar1 = FUN_8c1f4694();
        return uVar1;
    }
    if (a0 == 2) {
        uVar1 = FUN_8c1f4662();
        return uVar1;
    }
    if (a0 == 4) {
        uVar1 = FUN_8c1f46e8();
        return uVar1;
    }
    if (a0 == 3) {
        uVar1 = FUN_8c1f46a8();
        return uVar1;
    }
    if (a0 == 6) {
        uVar1 = FUN_8c1f46d4();
        return uVar1;
    }
    if (a0 == 5) {
        uVar1 = FUN_8c1f4680();
        return uVar1;
    }
    if (a0 == 0) {
        uVar1 = FUN_8c1f4702();
        return uVar1;
    }
    if (a0 != 7) {
        if (a0 == 8) {
            uVar1 = FUN_8c1f4734();
            return uVar1;
        }
        if (a0 != 9) {
            return 0xffffffff;
        }
        uVar1 = FUN_8c1f476e();
        return uVar1;
    }
    uVar1 = FUN_8c1f4720();
    return uVar1;
}

/*
 * FUN_8c1f0392  0x8c1f0392
 * called by: FUN_8c1f63f2
 */
u32 FUN_8c1f0392(void) {
    return g_8c470e74;
}

/*
 * FUN_8c1f0398  0x8c1f0398
 * called by: FUN_8c1f6454
 */
u32 FUN_8c1f0398(int a0) {
    u32 in_r0;

    g_8c470e70 = a0 + 1;
    return in_r0;
}

/*
 * set_handler_slot32  0x8c1f03a6
 * stores a1 in slot a0 (< 32) of the table at 0x8c470920
 * called by: FUN_8c1f63a6, FUN_8c1fbd2c, FUN_8c1fbdb8, FUN_8c1fbe12, FUN_8c1fbe1a
 */
int set_handler_slot32(u32 a0, u32 a1) {
    int iVar1;
    int in_r0;

    iVar1 = 0x8c470920;
    if (a0 < 0x20) {
        *(u32 *)(0x8c470920 + a0 * 4) = a1;
        in_r0 = iVar1;
    }
    return in_r0;
}

/*
 * FUN_8c1f0420  0x8c1f0420
 * called by: FUN_8c1f0444, FUN_8c1f04a0, FUN_8c1f04fc, FUN_8c1f057a, FUN_8c1f05d6, FUN_8c1f0650, FUN_8c1f06ac,
 * FUN_8c1f070c (+4 more)
 */
u32 FUN_8c1f0420(int a0, u32 a1, u32 a2) {
    int iVar1;

    iVar1 = (a0 * 2 + *(int *)(g_8c4727b4 + 0xfc0)) * 0xc;
    *(u32 *)(&g_8c470c28 + iVar1) = a1;
    *(u32 *)(&g_8c470c24 + iVar1) = a2;
    *(int *)(&g_8c470c20 + iVar1) = a0;
    return 0;
}

/*
 * FUN_8c1f0444  0x8c1f0444
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f0444(u32 a0, u32 a1, int a2, u32 a3) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;
    u32 a5;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a5 = a1;
    a4 = a0;
    a6 = FUN_8c1f55e4(a0);
    if (0 < a6) {
        a2 = a6;
        FUN_8c1f0420(a4, a1, a6);
        a0 = a4;
        a5 = a1;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a5, a2, a3);
    }
    return a6;
}

/*
 * FUN_8c1f04a0  0x8c1f04a0
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f04a0(u32 a0, u32 a1, int a2, u32 a3) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;
    u32 a5;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a5 = a1;
    a4 = a0;
    a6 = FUN_8c1f56b0(a0);
    if (0 < a6) {
        a2 = a6;
        FUN_8c1f0420(a4, a1, a6);
        a0 = a4;
        a5 = a1;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a5, a2, a3);
    }
    return a6;
}

/*
 * FUN_8c1f04fc  0x8c1f04fc
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f04fc(u32 a0, u32 a1, int a2, u32 a3) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;
    u32 a5;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a5 = a1;
    a4 = a0;
    a6 = FUN_8c1f566c(a0);
    if (0 < a6) {
        a2 = a6;
        FUN_8c1f0420(a4, a1, a6);
        a0 = a4;
        a5 = a1;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a5, a2, a3);
    }
    return a6;
}

/*
 * FUN_8c1f057a  0x8c1f057a
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f057a(u32 a0, u32 a1, int a2, u32 a3) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;
    u32 a5;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a5 = a1;
    a4 = a0;
    a6 = FUN_8c1f5628(a0);
    if (0 < a6) {
        a2 = a6;
        FUN_8c1f0420(a4, a1, a6);
        a0 = a4;
        a5 = a1;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a5, a2, a3);
    }
    return a6;
}

/*
 * FUN_8c1f05d6  0x8c1f05d6
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f05d6(u32 a0, int a1, int a2, u32 a3) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;
    int a6_00;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a6_00 = a2;
    a4 = a0;
    a6 = FUN_8c1f5582(a0, a1);
    if (0 < a6) {
        a6_00 = a6;
        FUN_8c1f0420(a4, a2, a6);
        a0 = a4;
        a1 = a2;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a1, a6_00, a3);
    }
    return a6;
}

/*
 * FUN_8c1f0650  0x8c1f0650
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f0650(u32 a0, u32 a1, int a2, u32 a3) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;
    u32 a7;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a7 = a3;
    a4 = a0;
    a6 = FUN_8c1f56f4(a0, a1, a2);
    if (0 < a6) {
        a2 = a6;
        FUN_8c1f0420(a4, a3, a6);
        a0 = a4;
        a1 = a3;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a1, a2, a7);
    }
    return a6;
}

/*
 * FUN_8c1f06ac  0x8c1f06ac
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * called by: FUN_8c1f667e
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f06ac(u32 a0, u32 a1, int a2, u32 a3, u32 s0, u32 s4) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a4 = a0;
    a6 = FUN_8c1f574c(a0, a1, a2, a3, s0);
    if (0 < a6) {
        a2 = a6;
        FUN_8c1f0420(a4, s4, a6);
        a0 = a4;
        a1 = s4;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return a6;
}

/*
 * FUN_8c1f070c  0x8c1f070c
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * called by: FUN_8c1f6516
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f070c(u32 a0, u32 a1, int a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a4 = a0;
    a6 = FUN_8c1f57b4(a0, a1, a2, a3, s0);
    if (0 < a6) {
        a2 = a6;
        FUN_8c1f0420(a4, s12, a6);
        a0 = a4;
        a1 = s12;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return a6;
}

/*
 * FUN_8c1f0790  0x8c1f0790
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f0790(u32 a0, u32 a1, int a2, u32 a3, u32 s0, u32 s4) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a4 = a0;
    a6 = FUN_8c1f5816(a0, a1, a2, a3, s0);
    if (0 < a6) {
        a2 = a6;
        FUN_8c1f0420(a4, s4, a6);
        a0 = a4;
        a1 = s4;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return a6;
}

/*
 * FUN_8c1f07f0  0x8c1f07f0
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f07f0(u32 a0, int a1, int a2, u32 a3) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;
    int a6_00;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a6_00 = a2;
    a4 = a0;
    a6 = FUN_8c1f58c0(a0, a1);
    if (0 < a6) {
        a6_00 = a6;
        FUN_8c1f0420(a4, a2, a6);
        a0 = a4;
        a1 = a2;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a1, a6_00, a3);
    }
    return a6;
}

/*
 * FUN_8c1f086c  0x8c1f086c
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f086c(u32 a0, int a1, int a2, u32 a3) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;
    int a6_00;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a6_00 = a2;
    a4 = a0;
    a6 = FUN_8c1f5910(a0, a1);
    if (0 < a6) {
        a6_00 = a6;
        FUN_8c1f0420(a4, a2, a6);
        a0 = a4;
        a1 = a2;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a1, a6_00, a3);
    }
    return a6;
}

/*
 * FUN_8c1f08c8  0x8c1f08c8
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f08c8(u32 a0, u32 a1, int a2, u32 a3, u32 s0) {
    u8 bVar1;
    int *piVar2;
    int a6;
    u32 a4;

    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", a0);
        return 0xfffffffe;
    }
    a4 = a0;
    a6 = FUN_8c1f5970(a0, a1, a2, a3);
    if (0 < a6) {
        a2 = a6;
        FUN_8c1f0420(a4, s0, a6);
        a0 = a4;
        a1 = s0;
    }
    piVar2 = 0x8c4727b4;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    if (*(int *)((int)0x10e8 + *piVar2) != 0) {
        pvr_1efaf4(a0, a1, a2, a3);
    }
    return a6;
}

/*
 * FUN_8c1f094c  0x8c1f094c
 */
u32 FUN_8c1f094c(char *a0, char *a1, int a2) {
    char cVar1;
    char cVar2;
    bool bVar3;

    do {
        bVar3 = a2 < 1;
        a2 = a2 + -1;
        if (bVar3) {
            return 1;
        }
        cVar1 = *a1;
        a1 = a1 + 1;
        cVar2 = *a0;
        a0 = a0 + 1;
    } while (cVar2 == cVar1);
    return 0;
}

/*
 * FUN_8c1f0958  0x8c1f0958
 * called by: FUN_8c1f0a72, FUN_8c1f0c14
 */
u32 FUN_8c1f0958(u32 *a0, u32 *a1, int a2) {
    u32 in_r0;
    u32 uVar1;
    int iVar2;
    bool bVar3;

    if (a2 < 0) {
        a2 = a2 + 3;
    }
    iVar2 = a2 >> 2;
    while (bVar3 = 0 < iVar2, iVar2 = iVar2 + -1, bVar3) {
        uVar1 = *a0;
        a0 = a0 + 1;
        *a1 = uVar1;
        a1 = a1 + 1;
    }
    return in_r0;
}

/*
 * FUN_8c1f097e  0x8c1f097e
 */
u32 FUN_8c1f097e(u8 *a0, u8 *a1, int a2) {
    u8 uVar1;
    u32 in_r0;
    bool bVar2;

    while (bVar2 = 0 < a2, a2 = a2 + -1, bVar2) {
        uVar1 = *a0;
        a0 = a0 + 1;
        *a1 = uVar1;
        a1 = a1 + 1;
    }
    return in_r0;
}

/*
 * FUN_8c1f0988  0x8c1f0988
 * called by: FUN_8c1f0d94, FUN_8c1f0e98, FUN_8c1f0e9c
 */
u32 FUN_8c1f0988(u8 *a0, int a1) {
    u32 in_r0;

    for (; 0 < a1; a1 = a1 + -1) {
        *a0 = 0xff;
        a0 = a0 + 1;
    }
    return in_r0;
}

/*
 * FUN_8c1f099c  0x8c1f099c
 * called by: FUN_8c1f0a72
 */
int FUN_8c1f099c(char *a0, int a1) {
    int iVar1;
    char cVar2;
    int iVar3;
    int iVar4;

    iVar3 = 0;
    iVar4 = a1 << 6;
    do {
        if (iVar4 < 1) {
            return iVar3;
        }
        cVar2 = *a0;
        a0 = a0 + 1;
        iVar1 = 8;
        do {
            if (((int)cVar2 & 0x80U) != 0) {
                return iVar3;
            }
            iVar1 = iVar1 + -1;
            cVar2 = cVar2 << 1;
            iVar3 = iVar3 + 1;
        } while (0 < iVar1);
        iVar4 = iVar4 + -1;
    } while (true);
}

/*
 * FUN_8c1f09d4  0x8c1f09d4
 * called by: FUN_8c1f0b58, FUN_8c1f0c14
 */
u32 FUN_8c1f09d4(int a0, u8 *a1, u32 a2) {
    int iVar1;
    int iVar2;

    for (iVar2 = a2 << 6; 0 < iVar2; iVar2 = iVar2 + -1) {
        if (a0 < 8) {
            if (a0 < 1) {
                *a1 = 0xff;
            } else {
                iVar1 = 8;
                do {
                    a2 = a2 << 1;
                    if (a0 < 1) {
                        a2 = a2 | 1;
                    } else {
                        a0 = a0 + -1;
                    }
                    iVar1 = iVar1 + -1;
                } while (iVar1 != 0);
                *a1 = (char)a2;
            }
        } else {
            *a1 = 0;
            a0 = a0 + -8;
        }
        a1 = a1 + 1;
    }
    return 0;
}

/*
 * FUN_8c1f0a22  0x8c1f0a22
 * called by: FUN_8c1f0b58
 */
u32 FUN_8c1f0a22(u32 unused_a0, u8 *a1) {
    u8 bVar1;
    u16 uVar2;
    short sVar3;
    u32 uVar4;
    int iVar5;
    u8 *pbVar6;

    uVar2 = 0xff;
    iVar5 = 0x3c;
    pbVar6 = a1 + 2;
    do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if (bVar1 != 0xff)
            goto LAB_8c1f0a54;
        iVar5 = iVar5 + -1;
    } while (0 < iVar5);
    sVar3 = crc16_ccitt(0x3e, a1);
    if (*(short *)(a1 + 0x3e) == sVar3) {
        for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *a1 = (char)uVar2;
            a1 = a1 + 1;
        }
        uVar4 = 1;
    } else {
    LAB_8c1f0a54:
        uVar4 = 0;
    }
    return uVar4;
}

/*
 * FUN_8c1f0a2a  0x8c1f0a2a
 */
u32 FUN_8c1f0a2a(int a0, int a1) {
    u8 bVar1;
    u16 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    u8 *pbVar6;
    u8 *unaff_r13;

    uVar2 = 0xff;
    pbVar6 = (u8 *)(a1 + 2);
    do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if (bVar1 != 0xff)
            goto LAB_8c1f0a54;
        a0 = a0 + -1;
    } while (0 < a0);
    uVar3 = crc16_ccitt(0x3e, unaff_r13);
    if ((u32) * (u16 *)(unaff_r13 + 0x3e) == (uVar3 & 0xffff)) {
        for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *unaff_r13 = (char)uVar2;
            unaff_r13 = unaff_r13 + 1;
        }
        uVar4 = 1;
    } else {
    LAB_8c1f0a54:
        uVar4 = 0;
    }
    return uVar4;
}

/*
 * FUN_8c1f0a72  0x8c1f0a72
 * called by: FUN_8c1f0d94, FUN_8c1f0e98, FUN_8c1f0e9c
 */
u32 FUN_8c1f0a72(int a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 ar6_00;
    int ar5_00;
    int iVar4;
    int ar4_00;
    u16 *a5;

    ar5_00 = *(int *)(a0 + 0xc);
    ar4_00 = *(int *)(a0 + 4);
    iVar1 = syscall_1f98c4(ar4_00, ar5_00, 0x40);
    if (iVar1 != -1) {
        iVar4 = (*(int *)(a0 + 0x14) + 1) * 0x40;
        iVar1 = iVar4 + ar5_00;
        iVar3 = *(int *)(a0 + 0x18) << 6;
        iVar4 = syscall_1f98c4(ar4_00 + iVar4, iVar1, iVar3);
        if (iVar4 != -1) {
            iVar4 = FUN_8c1f099c(iVar1, *(u32 *)(a0 + 0x18));
            *(int *)(a0 + 0x10) = iVar4;
            if (*(short *)(a0 + 2) != 0) {
                return 0xfffffffa;
            }
            a5 = (u16 *)(a0 + 0x34);
            while (true) {
                if (iVar4 < 1) {
                    return 0;
                }
                ar4_00 = ar4_00 + 0x40;
                ar6_00 = 0x40;
                iVar3 = syscall_1f98c4(ar4_00, a5, 0x40);
                if (iVar3 == -1)
                    break;
                if (*a5 == 0xffff) {
                    return 0;
                }
                uVar2 = crc16_ccitt(0x3e, a5);
                if (((u32) * (u16 *)(a0 + 0x72) == (uVar2 & 0xffff)) && ((int)(u32)*a5 < *(int *)(a0 + 0x14))) {
                    FUN_8c1f0958(a5, (*a5 + 1) * 0x40 + ar5_00, 0x40);
                }
                iVar4 = iVar4 + -1;
            }
            return 0xffffffff;
        }
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f0b58  0x8c1f0b58
 * called by: FUN_8c1f0d34, FUN_8c1f0d38, FUN_8c1f103e
 */
u32 FUN_8c1f0b58(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    int a4;
    int a4_00;
    u16 *ar5_00;

    puVar1 = (&syscall_1f98d8);
    iVar5 = *(int *)(a0 + 4);
    if (*(short *)(a0 + 2) == 0) {
        ar5_00 = *(u16 **)(a0 + 0xc);
        uVar4 = 0x40;
        iVar2 = syscall_1f98d8(iVar5, ar5_00, 0x40);
        if (iVar2 == 0x40) {
            a4_00 = iVar5 + 0x40;
            a4 = 0;
            for (iVar2 = *(int *)(a0 + 0x14); ar5_00 = ar5_00 + 0x20, 0 < iVar2; iVar2 = iVar2 + -1) {
                if ((*ar5_00 != 0xffff) && (iVar3 = FUN_8c1f0a22(a0, ar5_00), iVar3 == 0)) {
                    uVar4 = 0x40;
                    iVar3 = (*(code *)puVar1)(a4_00, ar5_00, 0x40, a3);
                    if (iVar3 != 0x40)
                        goto LAB_8c1f0bf4;
                    a4 = a4 + 1;
                    a4_00 = a4_00 + 0x40;
                }
            }
            iVar2 = *(int *)(a0 + 0x14);
            FUN_8c1f09d4(a4, ar5_00, *(u32 *)(a0 + 0x18));
            iVar5 = (*(code *)puVar1)((iVar2 + 1) * 0x40 + iVar5, ar5_00, *(int *)(a0 + 0x18) << 6, a3);
            if (iVar5 == *(int *)(a0 + 0x18) << 6) {
                *(int *)(a0 + 0x10) = a4;
                return 0;
            }
        }
    LAB_8c1f0bf4:
        uVar4 = 0xfffffffe;
    } else {
        uVar4 = 0xfffffffa;
    }
    return uVar4;
}

/*
 * FUN_8c1f0c14  0x8c1f0c14
 * called by: FUN_8c1f0d34, FUN_8c1f0d38
 */
u32 FUN_8c1f0c14(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u16 *ar5_00;

    if (*(short *)(a0 + 2) == 0) {
        ar5_00 = (u16 *)(a0 + 0x34);
        *ar5_00 = (short)*(u32 *)(a0 + 0x28);
        uVar2 = 0x3c;
        func_0x8c1f0974(*(u32 *)(a0 + 0x30), a0 + 0x36, 0x3c, a3);
        uVar2 = crc16_ccitt(0x3e, ar5_00);
        *(short *)(a0 + 0x72) = (short)uVar2;
        iVar1 = (*(int *)(a0 + 0x28) + 1) * 0x40;
        FUN_8c1f0958(ar5_00, *(int *)(a0 + 0xc) + iVar1, 0x40);
        if (*(int *)(a0 + 0x10) < *(int *)(a0 + 0x14)) {
            iVar1 = (*(int *)(a0 + 0x14) + 1) * 0x40;
            FUN_8c1f09d4(*(int *)(a0 + 0x10) + 1, *(int *)(a0 + 0xc) + iVar1, *(u32 *)(a0 + 0x18));
            iVar1 = syscall_1f98d8(*(int *)(a0 + 4) + iVar1, *(int *)(a0 + 0xc) + iVar1, *(int *)(a0 + 0x18) << 6);
            if (iVar1 == *(int *)(a0 + 0x18) << 6) {
                iVar1 = *(int *)(a0 + 0x10);
                *(int *)(a0 + 0x10) = *(int *)(a0 + 0x10) + 1;
                iVar1 = syscall_1f98d8(*(int *)(a0 + 4) + (iVar1 + 1) * 0x40, ar5_00, 0x40);
                if (iVar1 == 0x40) {
                    return 0;
                }
            }
            uVar2 = 0xfffffffe;
        } else {
            uVar2 = 0xfffffff6;
        }
    } else {
        uVar2 = 0xfffffffa;
    }
    return uVar2;
}

/*
 * FUN_8c1f0cdc  0x8c1f0cdc
 * called by: FUN_8c1f0fa0, FUN_8c1f0fa4
 */
u32 FUN_8c1f0cdc(int a0) {
    u16 uVar1;
    u32 uVar2;
    u16 *puVar3;

    if (*(short *)(a0 + 2) == 0) {
        puVar3 = (u16 *)((*(int *)(a0 + 0x28) + 1) * 0x40 + *(int *)(a0 + 0xc));
        func_0x8c1f0974(puVar3 + 1, *(u32 *)(a0 + 0x30), 0x3c);
        if ((*puVar3 == 0xffff) || (uVar1 = crc16_ccitt(0x3e, puVar3), puVar3[0x1f] == uVar1)) {
            uVar2 = 0;
        } else {
            uVar2 = 0xfffffffc;
        }
    } else {
        uVar2 = 0xfffffffa;
    }
    return uVar2;
}

/*
 * FUN_8c1f0ce2  0x8c1f0ce2
 */
u32 FUN_8c1f0ce2(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int unaff_r13;
    u16 *ar5_00;

    if (*(short *)(unaff_r13 + 2) == 0) {
        uVar2 = 0x3c;
        ar5_00 = (u16 *)((*(int *)(unaff_r13 + 0x28) + 1) * 0x40 + *(int *)(unaff_r13 + 0xc));
        func_0x8c1f0974(ar5_00 + 1, *(u32 *)(unaff_r13 + 0x30), 0x3c, a3);
        if ((*ar5_00 == 0xffff) || (uVar1 = crc16_ccitt(0x3e, ar5_00), (u32)ar5_00[0x1f] == (uVar1 & 0xffff))) {
            uVar2 = 0;
        } else {
            uVar2 = 0xfffffffc;
        }
    } else {
        uVar2 = 0xfffffffa;
    }
    return uVar2;
}

/*
 * FUN_8c1f0d34  0x8c1f0d34
 * called by: FUN_8c1f0fa0, FUN_8c1f0fa4
 */
u32 FUN_8c1f0d34(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = *(int *)(a0 + 0x24);
    if (iVar1 == 0) {
        iVar1 = FUN_8c1f0c14(a0, unused_a1, unused_a2, a3);
        if (iVar1 != -10) {
            return iVar1;
        }
        uVar2 = 1;
    } else {
        if (iVar1 != 1) {
            if (iVar1 != 2) {
                return 0xfffffffe;
            }
            uVar2 = FUN_8c1f0b58(a0, unused_a1, unused_a2, a3);
            return uVar2;
        }
        iVar1 = syscall_1f98ec(*(u32 *)(a0 + 4));
        if (iVar1 == -1) {
            return 0xfffffffd;
        }
        uVar2 = 2;
    }
    *(u32 *)(a0 + 0x24) = uVar2;
    return 1;
}

/*
 * FUN_8c1f0d38  0x8c1f0d38
 */
u32 FUN_8c1f0d38(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int unaff_r14;

    iVar1 = *(int *)(unaff_r14 + 0x24);
    if (iVar1 == 0) {
        iVar1 = FUN_8c1f0c14(unaff_r14, unused_a1, unused_a2, a3);
        if (iVar1 != -10) {
            return iVar1;
        }
        uVar2 = 1;
    } else {
        if (iVar1 != 1) {
            if (iVar1 != 2) {
                return 0xfffffffe;
            }
            uVar2 = FUN_8c1f0b58(unaff_r14, unused_a1, unused_a2, a3);
            return uVar2;
        }
        iVar1 = syscall_1f98ec(*(u32 *)(unaff_r14 + 4), unused_a1, unused_a2, a3);
        if (iVar1 == -1) {
            return 0xfffffffd;
        }
        uVar2 = 2;
    }
    *(u32 *)(unaff_r14 + 0x24) = uVar2;
    return 1;
}

/*
 * FUN_8c1f0d94  0x8c1f0d94
 * name hint from a string it uses: KATANA FLASH
 * called by: FUN_8c1f6b14, FUN_8c1f97b4
 * strings: "KATANA_FLASH____"
 */
u32 FUN_8c1f0d94(int a0, u32 a1, u32 unused_a2, u32 a3) {
    short *psVar1;
    u32 uVar2;
    int iVar3;
    u32 ar5_00;
    u32 uStack_14;
    u32 uStack_10;

    if ((a0 < 1) || (4 < a0)) {
        uVar2 = 0xfffffff9;
    } else {
        g_8c2739d8 = (short *)&g_8c470ee0;
        syscall_1f98b0(a0, &uStack_14);
        *g_8c2739d8 = (short)a0;
        *(u32 *)(g_8c2739d8 + 2) = uStack_14;
        *(u32 *)(g_8c2739d8 + 4) = uStack_10;
        *(int *)(g_8c2739d8 + 0xc) = *(int *)(g_8c2739d8 + 4) + 0x7fff >> 0xf;
        *(int *)(g_8c2739d8 + 10) = ((*(int *)(g_8c2739d8 + 4) >> 6) - *(int *)(g_8c2739d8 + 0xc)) + -1;
        *(u32 *)(g_8c2739d8 + 6) = a1;
        psVar1 = g_8c2739d8;
        psVar1[0xe] = 0;
        psVar1[0xf] = 0;
        psVar1 = g_8c2739d8;
        psVar1[0x10] = 0;
        psVar1[0x11] = 0;
        psVar1 = g_8c2739d8;
        psVar1[0x16] = 0;
        psVar1[0x17] = 0;
        iVar3 = syscall_1f98c4(*(u32 *)(g_8c2739d8 + 2), g_8c2739d8 + 0x1a, 0x40);
        psVar1 = g_8c2739d8;
        if (iVar3 == -1) {
            uVar2 = 0xffffffff;
        } else {
            uVar2 = 0xc;
            iVar3 = func_0x8c1f093c(g_8c2739d8 + 0x1a, "KATANA_FLASH____", 0xc, a3);
            if ((iVar3 != 0) && ((int)*g_8c2739d8 == (int)(char)psVar1[0x22])) {
                g_8c2739d8[1] = (short)*(char *)((int)psVar1 + 0x45);
                if ((g_8c2739d8[1] == 0) || (g_8c2739d8[1] == 1)) {
                    ar5_00 = *(u32 *)(g_8c2739d8 + 4);
                    FUN_8c1f0988(*(u32 *)(g_8c2739d8 + 6), ar5_00);
                    iVar3 = FUN_8c1f0a72(g_8c2739d8);
                    if (iVar3 != 0) {
                        return iVar3;
                    }
                    return 0;
                }
            }
            uVar2 = 0xfffffff8;
        }
    }
    return uVar2;
}

/*
 * FUN_8c1f0e98  0x8c1f0e98
 * called by: FUN_8c1f6b14, FUN_8c1f97b4
 * strings: "KATANA_FLASH____"
 */
int FUN_8c1f0e98(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 *puVar1;
    int iVar2;
    u32 ar5_00;
    u8 *ar5_01;
    u32 uVar3;

    uVar3 = 1;
    if (g_8c2739d8 == NULL) {
        iVar2 = -0xb;
    } else if ((a0 == 0) || (a0 == 1)) {
        iVar2 = syscall_1f98ec(*(u32 *)(g_8c2739d8 + 4), r5, r6, r7);
        puVar1 = g_8c2739d8;
        if (iVar2 == 0) {
            ar5_01 = g_8c2739d8 + 0x34;
            func_0x8c1f0974("KATANA_FLASH____", ar5_01, 0x10, uVar3);
            uVar3 = 0x12;
            *(short *)(g_8c2739d8 + 2) = (short)a0;
            puVar1[0x45] = (char)a0;
            puVar1[0x44] = *g_8c2739d8;
            iVar2 = syscall_1f98d8(*(u32 *)(g_8c2739d8 + 4), ar5_01, 0x12);
            if (iVar2 == 0x12) {
                ar5_00 = *(u32 *)(g_8c2739d8 + 8);
                FUN_8c1f0988(*(u32 *)(g_8c2739d8 + 0xc), ar5_00);
                iVar2 = FUN_8c1f0a72(g_8c2739d8);
                if (iVar2 == 0) {
                    iVar2 = 0;
                }
            } else {
                iVar2 = -2;
            }
        } else {
            iVar2 = -3;
        }
    } else {
        iVar2 = -6;
    }
    return iVar2;
}

/*
 * FUN_8c1f0e9c  0x8c1f0e9c
 * name hint from a string it uses: KATANA FLASH
 * strings: "KATANA_FLASH____"
 */
int FUN_8c1f0e9c(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    int *unaff_r14;

    if (*unaff_r14 == 0) {
        iVar1 = -0xb;
    } else if ((a0 == 0) || (a0 == 1)) {
        iVar1 = syscall_1f98ec(*(u32 *)(*unaff_r14 + 4), unused_a1, unused_a2, a3);
        if (iVar1 == 0) {
            iVar1 = *unaff_r14;
            func_0x8c1f0974("KATANA_FLASH____", iVar1 + 0x34, 0x10, a3);
            ar6_00 = 0x12;
            *(short *)(*unaff_r14 + 2) = (short)a0;
            *(char *)(iVar1 + 0x45) = (char)a0;
            *(u8 *)(iVar1 + 0x44) = *(u8 *)*unaff_r14;
            iVar1 = syscall_1f98d8(*(u32 *)(*unaff_r14 + 4), iVar1 + 0x34, 0x12);
            if (iVar1 == 0x12) {
                ar5_00 = *(u32 *)(*unaff_r14 + 8);
                FUN_8c1f0988(*(u32 *)(*unaff_r14 + 0xc), ar5_00);
                iVar1 = FUN_8c1f0a72(*unaff_r14);
                if (iVar1 == 0) {
                    iVar1 = 0;
                }
            } else {
                iVar1 = -2;
            }
        } else {
            iVar1 = -3;
        }
    } else {
        iVar1 = -6;
    }
    return iVar1;
}

/*
 * FUN_8c1f0f24  0x8c1f0f24
 * called by: FUN_8c1f881c, FUN_8c1f97b4
 */
u32 FUN_8c1f0f24(int a0, u32 a1) {
    if (g_8c2739d8 == 0) {
        return 0xfffffff5;
    }
    if (*(int *)(g_8c2739d8 + 0x1c) != 0) {
        return 0xfffffff7;
    }
    if ((-1 < a0) && (a0 < *(int *)(g_8c2739d8 + 0x14))) {
        *(u32 *)(g_8c2739d8 + 0x1c) = 1;
        *(u32 *)(g_8c2739d8 + 0x20) = 2;
        *(int *)(g_8c2739d8 + 0x28) = a0;
        *(u32 *)(g_8c2739d8 + 0x30) = a1;
        return 0;
    }
    return 0xfffffffb;
}

/*
 * FUN_8c1f0f60  0x8c1f0f60
 * called by: FUN_8c1f884c, FUN_8c1f97b4
 */
u32 FUN_8c1f0f60(int a0, u32 a1, u32 unused_a2, u32 a3) {
    if (g_8c2739d8 == 0) {
        return 0xfffffff5;
    }
    if (*(int *)(g_8c2739d8 + 0x1c) != 0) {
        return 0xfffffff7;
    }
    if ((-1 < a0) && (a0 < *(int *)(g_8c2739d8 + 0x14))) {
        *(u32 *)(g_8c2739d8 + 0x1c) = 2;
        *(u32 *)(g_8c2739d8 + 0x20) = 2;
        *(int *)(g_8c2739d8 + 0x28) = a0;
        *(u32 *)(g_8c2739d8 + 0x30) = a1;
        *(u32 *)(g_8c2739d8 + 0x24) = 0;
        return 0;
    }
    return 0xfffffffb;
}

/*
 * FUN_8c1f0fa0  0x8c1f0fa0
 */
u32 FUN_8c1f0fa0(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    if (g_8c2739d8 == 0) {
        return 0;
    }
    iVar1 = *(int *)(g_8c2739d8 + 0x1c);
    if (iVar1 == 0)
        goto LAB_8c1f1016;
    if (iVar1 == 1) {
        iVar1 = FUN_8c1f0cdc(g_8c2739d8);
        *(u32 *)(g_8c2739d8 + 0x1c) = 0;
        if (iVar1 == 0) {
            *(u32 *)(g_8c2739d8 + 0x20) = 1;
        } else {
            *(u32 *)(g_8c2739d8 + 0x20) = 3;
        }
    } else {
        if (iVar1 != 2) {
            *(u32 *)(g_8c2739d8 + 0x1c) = 0;
            *(u32 *)(g_8c2739d8 + 0x20) = 0;
            goto LAB_8c1f1016;
        }
        iVar1 = FUN_8c1f0d34(g_8c2739d8, unused_a1, unused_a2, a3);
        if (iVar1 == 1)
            goto LAB_8c1f1016;
        *(u32 *)(g_8c2739d8 + 0x1c) = 0;
        if (iVar1 == 0) {
            *(u32 *)(g_8c2739d8 + 0x20) = 1;
        } else {
            *(u32 *)(g_8c2739d8 + 0x20) = 3;
        }
    }
    *(int *)(g_8c2739d8 + 0x2c) = iVar1;
LAB_8c1f1016:
    return *(u32 *)(g_8c2739d8 + 0x20);
}

/*
 * FUN_8c1f0fa4  0x8c1f0fa4
 */
u32 FUN_8c1f0fa4(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *unaff_r14;

    iVar2 = *unaff_r14;
    if (iVar2 == 0) {
        return 0;
    }
    iVar1 = *(int *)(iVar2 + 0x1c);
    if (iVar1 == 0)
        goto LAB_8c1f1016;
    if (iVar1 == 1) {
        iVar2 = FUN_8c1f0cdc(iVar2);
        *(u32 *)(*unaff_r14 + 0x1c) = 0;
        if (iVar2 == 0) {
            *(u32 *)(*unaff_r14 + 0x20) = 1;
        } else {
            *(u32 *)(*unaff_r14 + 0x20) = 3;
        }
    } else {
        if (iVar1 != 2) {
            *(u32 *)(iVar2 + 0x1c) = 0;
            *(u32 *)(*unaff_r14 + 0x20) = 0;
            goto LAB_8c1f1016;
        }
        iVar2 = FUN_8c1f0d34(iVar2, unused_a1, unused_a2, a3);
        if (iVar2 == 1)
            goto LAB_8c1f1016;
        *(u32 *)(*unaff_r14 + 0x1c) = 0;
        if (iVar2 == 0) {
            *(u32 *)(*unaff_r14 + 0x20) = 1;
        } else {
            *(u32 *)(*unaff_r14 + 0x20) = 3;
        }
    }
    *(int *)(*unaff_r14 + 0x2c) = iVar2;
LAB_8c1f1016:
    return *(u32 *)(*unaff_r14 + 0x20);
}

/*
 * FUN_8c1f103e  0x8c1f103e
 */
u32 FUN_8c1f103e(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3, int *ain1) {
    int iVar1;
    u32 uVar2;

    if (*ain1 == 0) {
        return 0xfffffff5;
    }
    iVar1 = syscall_1f98ec(*(u32 *)(*ain1 + 4), unused_a1, unused_a2, a3);
    if (iVar1 == -1) {
        uVar2 = 0xfffffffd;
    } else {
        uVar2 = FUN_8c1f0b58(g_8c2739d8, unused_a1, unused_a2, a3);
    }
    return uVar2;
}

/*
 * FUN_8c1f1080  0x8c1f1080
 * called by: FUN_8c1f6b14, FUN_8c1f6f06
 */
u32 FUN_8c1f1080(void) {
    if (g_8c2739d8 == 0) {
        return 0xfffffff5;
    }
    return *(int *)(g_8c2739d8 + 0x14) - *(int *)(g_8c2739d8 + 0x10);
}

/*
 * crc16_ccitt  0x8c1f109c
 * CRC-16/CCITT of a0 bytes at a1 (init 0xffff, table 0x8c26c050, result inverted); checks the 64-byte system flash-ROM
 * blocks (CRC of bytes 0..0x3d stored at +0x3e) called by: FUN_8c1f0a22, FUN_8c1f0a2a, FUN_8c1f0a72, FUN_8c1f0c14,
 * FUN_8c1f0cdc, FUN_8c1f0ce2, FUN_8c1f6fc8
 */
u32 crc16_ccitt(int a0, u8 *a1) {
    u8 bVar1;
    u32 uVar2;

    uVar2 = 0xffff;
    while (a0 = a0 + -1, -1 < a0) {
        bVar1 = *a1;
        a1 = a1 + 1;
        uVar2 = (uVar2 & 0xffff) << 8 ^ (int)*(short *)(&g_8c26c050 + ((int)(uVar2 & 0xffff) >> 8 ^ (u32)bVar1) * 2);
    }
    return ~(uVar2 & 0xffff) & 0xffff;
}

/*
 * syscall_1f10d8  0x8c1f10d8
 * called by: FUN_8c1f11ea, FUN_8c1f126a, FUN_8c1f139e, FUN_8c1f141a, FUN_8c1f143c, FUN_8c1f146e, FUN_8c1f148c,
 * FUN_8c1f14a8 (+4 more)
 */
u32 syscall_1f10d8(u32 a0, u32 a1) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f10e0. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000bc)(0, 0x0);
    return uVar1;
}

/*
 * syscall_1f10ec  0x8c1f10ec
 * called by: FUN_8c1f12de
 */
u32 syscall_1f10ec(u32 unused_a0, u32 a1) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f10f4. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000bc)(0, 0x1);
    return uVar1;
}

/*
 * syscall_1f1100  0x8c1f1100
 * called by: syscall_wrap_1f14ca
 */
u32 syscall_1f1100(void) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f1108. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000bc)(0, 0x2);
    return uVar1;
}

/*
 * syscall_1f1114  0x8c1f1114
 * called by: syscall_wrap
 */
u32 syscall_1f1114(void) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f111c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000bc)(0, 0x3);
    return uVar1;
}

/*
 * syscall_1f1128  0x8c1f1128
 * called by: FUN_8c1f13f0
 */
u32 syscall_1f1128(void) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f1130. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000bc)(0, 0x4);
    return uVar1;
}

/*
 * syscall_1f1150  0x8c1f1150
 * called by: FUN_8c1f1286
 */
u32 syscall_1f1150(u32 unused_a0, u32 a1) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f1158. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000bc)(0, 0x6);
    return uVar1;
}

/*
 * syscall_1f1164  0x8c1f1164
 * called by: syscall_wrap_1f140c
 */
u32 syscall_1f1164(void) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f116c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000bc)(0, 0x7);
    return uVar1;
}

/*
 * syscall_wrap  0x8c1f11dc
 * only calls syscall_1f1114
 */
u32 syscall_wrap(void) {
    syscall_1f1114();
    return 1;
}

/*
 * FUN_8c1f11ea  0x8c1f11ea
 */
int FUN_8c1f11ea(u32 a0, int a1, u32 a2, int a3) {
    int iVar1;
    u32 ar4_00;
    u32 ar6_00;
    u32 uStack_1c;
    u32 uStack_10;

    uStack_10 = 0;
    ar6_00 = a2 & 0x1fffffff;
    if (a3 == 1) {
        ar4_00 = 0x11;
    } else {
        if (a3 != 0) {
            return 0xffffffee;
        }
        ar4_00 = 0x10;
        ar6_00 = ar6_00 | 0xa0000000;
    }
    uStack_1c = a0;
    iVar1 = syscall_1f10d8(ar4_00, &uStack_1c);
    if ((iVar1 != 0) && (((int)a2 >> 0x1c & 0xeU) != 10)) {
        if ((a2 & 0x1f) == 0) {
            FUN_8c1f9980(a2, a1 << 0xb);
        } else {
            FUN_8c1f9bde(a2, a1 << 0xb);
        }
    }
    return iVar1;
}

/*
 * FUN_8c1f126a  0x8c1f126a
 */
u32 FUN_8c1f126a(u32 a0, u32 a1) {
    u32 uVar1;
    u32 uStack_10;

    uStack_10 = a0;
    uVar1 = syscall_1f10d8(0x1c, &uStack_10);
    return uVar1;
}

/*
 * FUN_8c1f1286  0x8c1f1286
 */
int FUN_8c1f1286(u32 unused_a0, u32 a1, int a2) {
    int iVar1;
    iVar1 = syscall_1f1150(unused_a0, &stack0xffffffe8);
    if (((iVar1 == 0) && (a2 != 0)) && (((int)a1 >> 0x1c & 0xfU) != 10)) {
        if ((a1 & 0x1f) == 0) {
            FUN_8c1f9980(a1, a2);
        } else {
            FUN_8c1f9bde(a1, a2);
        }
    }
    return iVar1;
}

/*
 * FUN_8c1f12de  0x8c1f12de
 */
u32 FUN_8c1f12de(u32 unused_a0, u32 *a1) {
    int iVar1;
    u32 uVar2;
    int iStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    iVar1 = syscall_1f10ec(unused_a0, &iStack_18);
    if (iVar1 == 0) {
        return 0;
    }
    if (iVar1 == 1) {
        *a1 = uStack_10;
        a1[2] = uStack_c;
        return 4;
    }
    if (iVar1 == 2) {
        *a1 = uStack_10;
        return 1;
    }
    if (iVar1 == 3) {
        return 0x41;
    }
    if (iVar1 == 4) {
        return 0x43;
    }
    if (iVar1 != -1) {
        return iVar1;
    }
    a1[1] = uStack_14;
    if (iStack_18 == 0) {
        *a1 = 0xffffffe5;
        return 5;
    }
    if (iStack_18 == 1) {
        uVar2 = 0xffffffe4;
    LAB_8c1f1386:
        *a1 = uVar2;
    } else {
        if (iStack_18 == 2) {
            uVar2 = 0xffffffe3;
        } else {
            if (iStack_18 == 3) {
                uVar2 = 0xffffffe2;
                goto LAB_8c1f1386;
            }
            if (iStack_18 == 4) {
                uVar2 = 0xffffffe1;
            } else {
                if (iStack_18 == 5) {
                    uVar2 = 0xffffffe0;
                    goto LAB_8c1f1386;
                }
                if (iStack_18 == 6) {
                    uVar2 = 0xffffffdf;
                } else {
                    if (iStack_18 == 7) {
                        uVar2 = 0xffffffde;
                        goto LAB_8c1f1386;
                    }
                    if (iStack_18 == 0xb) {
                        uVar2 = 0xffffffdd;
                    } else {
                        if (iStack_18 == 0x10) {
                            uVar2 = 0xffffffdc;
                            goto LAB_8c1f1386;
                        }
                        uVar2 = 0xffffffe6;
                    }
                }
            }
        }
        *a1 = uVar2;
    }
    return 5;
}

/*
 * FUN_8c1f139e  0x8c1f139e
 */
u32 FUN_8c1f139e(u32 a0) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = 0;
    uStack_10 = a0;
    uVar1 = syscall_1f10d8(0x1b, &uStack_10);
    return uVar1;
}

/*
 * syscall_wrap_1f13bc  0x8c1f13bc
 * only calls syscall_1f10d8
 */
u32 syscall_wrap_1f13bc(void) {
    u32 uVar1;

    uVar1 = syscall_1f10d8(0x18, 0);
    return uVar1;
}

/*
 * FUN_8c1f13f0  0x8c1f13f0
 */
u32 FUN_8c1f13f0(void) {
    int iVar1;

    iVar1 = syscall_1f1128();
    if (iVar1 == 1) {
        return 0;
    }
    return 1;
}

/*
 * syscall_wrap_1f140c  0x8c1f140c
 * only calls syscall_1f1164
 */
u32 syscall_wrap_1f140c(void) {
    u32 uVar1;

    uVar1 = syscall_1f1164();
    return uVar1;
}

/*
 * FUN_8c1f141a  0x8c1f141a
 */
u32 FUN_8c1f141a(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 uStack_18;
    u32 uStack_c;

    uStack_c = 0;
    uStack_18 = a0;
    uVar1 = syscall_1f10d8(0x14, &uStack_18);
    return uVar1;
}

/*
 * FUN_8c1f143c  0x8c1f143c
 */
u32 FUN_8c1f143c(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 uStack_18;
    u32 uStack_c;

    uStack_c = 0;
    uStack_18 = a0;
    uVar1 = syscall_1f10d8(0x15, &uStack_18);
    return uVar1;
}

/*
 * syscall_wrap_1f145e  0x8c1f145e
 * only calls syscall_1f10d8
 */
u32 syscall_wrap_1f145e(void) {
    u32 uVar1;

    uVar1 = syscall_1f10d8(0x16, 0);
    return uVar1;
}

/*
 * FUN_8c1f146e  0x8c1f146e
 */
u32 FUN_8c1f146e(u32 a0) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = 0;
    uStack_10 = a0;
    uVar1 = syscall_1f10d8(0x17, &uStack_10);
    return uVar1;
}

/*
 * FUN_8c1f148c  0x8c1f148c
 */
u32 FUN_8c1f148c(u32 a0, u32 a1) {
    u32 uVar1;
    u32 uStack_10;

    uStack_10 = a0;
    uVar1 = syscall_1f10d8(0x13, &uStack_10);
    return uVar1;
}

/*
 * FUN_8c1f14a8  0x8c1f14a8
 */
u32 FUN_8c1f14a8(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 uStack_18;
    u32 uStack_c;

    uStack_c = 0;
    uStack_18 = a0;
    uVar1 = syscall_1f10d8(0x22, &uStack_18);
    return uVar1;
}

/*
 * syscall_wrap_1f14ca  0x8c1f14ca
 * only calls syscall_1f1100
 */
u32 syscall_wrap_1f14ca(void) {
    syscall_1f1100();
    return 1;
}

/*
 * FUN_8c1f14de  0x8c1f14de
 */
u32 FUN_8c1f14de(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_18;

    uStack_18 = a0;
    uVar1 = syscall_1f10d8(0x24, &uStack_18);
    return uVar1;
}

/*
 * FUN_8c1f14fe  0x8c1f14fe
 */
u32 FUN_8c1f14fe(u32 a0) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = 0;
    uStack_10 = a0;
    uVar1 = syscall_1f10d8(0x28, &uStack_10);
    return uVar1;
}

/*
 * FUN_8c1f151c  0x8c1f151c
 * called by: FUN_8c1f1d8c
 */
u8 **FUN_8c1f151c(void) {
    return &PTR_FUN_8c26c250;
}

/*
 * FUN_8c1f153c  0x8c1f153c
 * called by: FUN_8c1f1576
 */
u32 FUN_8c1f153c(u32 a0, u8 *a1, int a2) {
    u8 bVar1;
    bool bVar2;

    while (bVar2 = 0 < a2, a2 = a2 + -1, bVar2) {
        bVar1 = *a1;
        a1 = a1 + 1;
        a0 = (a0 & 0xff) << 8 ^ (int)*(short *)(&g_8c26c2a0 + ((int)(a0 & 0xffff) >> 8 ^ (u32)bVar1) * 2);
    }
    return a0;
}

/*
 * FUN_8c1f1576  0x8c1f1576
 * called by: FUN_8c1f15f4
 */
u32 FUN_8c1f1576(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c1f153c(0, a0, 10);
    if ((u32)(u16)a1 != (~uVar1 & 0xffff)) {
        return 0xffffffff;
    }
    return 0;
}

/*
 * bcd_to_int_s8  0x8c1f15a4
 * two packed BCD digits (signed char) to an integer
 * called by: FUN_8c1f15be, FUN_8c1f15f4
 */
int bcd_to_int_s8(u32 a0) {
    return (((int)0xf0 & (int)(char)a0) >> 4) * 10 + ((int)(char)a0 & 0xfU);
}

/*
 * FUN_8c1f15be  0x8c1f15be
 * called by: FUN_8c1f15f4
 */
int FUN_8c1f15be(char *a0) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = bcd_to_int_s8((int)*a0);
    iVar2 = bcd_to_int_s8((int)a0[1]);
    iVar3 = bcd_to_int_s8((int)a0[2]);
    return (iVar1 * 0x3c + iVar2) * 0x4b + iVar3;
}

/*
 * FUN_8c1f15f4  0x8c1f15f4
 * called by: FUN_8c1f1766
 */
u32 FUN_8c1f15f4(char *a0, u32 *a1) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u8 bVar4;
    int iVar5;
    int iVar6;
    u32 uVar7;
    u32 a7;
    u8 *pbVar8;
    u8 *pbVar9;
    u8 abStack_38[28];

    if (*a0 == '\0') {
        if ((int)a0[3] + a0[2] * 0x100 == 100) {
            a7 = 0;
            uVar1 = 0x40;
            pbVar8 = (u8 *)(a0 + 4);
            for (iVar6 = 0; iVar6 < 0xc; iVar6 = iVar6 + 1) {
                iVar5 = 7;
                abStack_38[iVar6] = 0;
                abStack_38[iVar6 + 0xc] = 0;
                do {
                    pbVar9 = abStack_38 + iVar6 + 0xc;
                    if (iVar5 == 7) {
                        *pbVar9 = *pbVar9 | (*pbVar8 & 0x40) << 1;
                    } else {
                        uVar7 = -(6 - iVar5);
                        if ((int)uVar7 < 0) {
                            bVar4 = (u8)((int)((int)(char)*pbVar8 & 0x40U) >> (~uVar7 & 0x1f) + 1);
                        } else {
                            bVar4 = (u8)(((int)(char)*pbVar8 & 0x40U) << (uVar7 & 0x1f));
                        }
                        *pbVar9 = *pbVar9 | bVar4;
                    }
                    pbVar8 = pbVar8 + 1;
                    iVar5 = iVar5 + -1;
                } while (-1 < iVar5);
                if ((abStack_38[0xc] & 0xf) != 1) {
                    return 0xfffffffb;
                }
            }
            uVar7 = (u32)CONCAT11(abStack_38[0x16], abStack_38[0x17]);
            iVar6 = FUN_8c1f1576(abStack_38 + 0xc, uVar7, 0x40, 0);
            if (iVar6 == 0) {
                uVar2 = bcd_to_int_s8((int)(char)abStack_38[0xd]);
                *a1 = uVar2;
                uVar2 = bcd_to_int_s8((int)(char)abStack_38[0xf]);
                a1[1] = uVar2;
                uVar2 = bcd_to_int_s8((int)(char)abStack_38[0x10]);
                a1[2] = uVar2;
                uVar2 = bcd_to_int_s8((int)(char)abStack_38[0x11]);
                a1[3] = uVar2;
                uVar3 = FUN_8c1f15be(abStack_38 + 0x13);
                a1[4] = uVar3 | (int)(char)abStack_38[0xc] << 0x18;
                uVar1 = bcd_to_int_s8((int)(char)abStack_38[0xe]);
                a1[5] = uVar1;
                uVar1 = 0;
            } else {
                uVar1 = 0xfffffffd;
            }
        } else {
            uVar1 = 0xfffffffe;
        }
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

/*
 * read_u32_le  0x8c1f1714
 * little-endian 32-bit value at a0 (any alignment)
 * called by: FUN_8c1f1a7c, FUN_8c1f1d8c, FUN_8c1f1eaa, FUN_8c1f2d3e, FUN_8c1f2e3e
 */
u32 read_u32_le(u8 *a0) {
    return (u32)a0[1] << 8 | (u32)a0[2] << 0x10 | (u32)a0[3] << 0x18 | (u32)*a0;
}

/*
 * FUN_8c1f173a  0x8c1f173a
 * called by: FUN_8c1f1a7c, FUN_8c1f1d8c, FUN_8c1f1eaa
 */
u32 FUN_8c1f173a(char *a0) {
    char cVar1;
    int iVar2;
    char *pcVar3;

    pcVar3 = &g_8c26c528;
    iVar2 = 0;
    do {
        a0 = a0 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        if (cVar1 != *a0) {
            return 0;
        }
        iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    return 1;
}

/*
 * FUN_8c1f175c  0x8c1f175c
 * called by: FUN_8c1f222c, FUN_8c1f2236, FUN_8c1f22a8, FUN_8c1f22b2
 */
u32 FUN_8c1f175c(u32 a0, u32 a1) {
    *(u32 *)(g_8c2739e0 + 0x30) = a0;
    return 1;
}

/*
 * FUN_8c1f1766  0x8c1f1766
 * called by: FUN_8c1f1a44, FUN_8c1f231a, FUN_8c1f231e
 */
int FUN_8c1f1766(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    short sVar1;
    int iVar2;
    int iVar3;
    u32 a4;
    u32 *a5;
    u16 uVar4;
    int iVar5;
    int iStack_44;
    u32 uStack_40;
    u32 uStack_3c;
    u32 uStack_38;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    *(u32 *)(g_8c2739e0 + 0x20) = 1;
    iVar5 = *(int *)(g_8c2739e0 + 0x1c);
    if (iVar5 == 0) {
        a4 = 0;
    } else {
        a4 = *(u32 *)(iVar5 + 0x3c);
    }
    a5 = &uStack_28;
    iVar2 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x10))(a4, a5, a2, a3);
    if (iVar5 == 0)
        goto LAB_8c1f19d4;
    uVar4 = (u16)iVar2;
    if ((iVar2 == 0) || (iVar2 == 1)) {
        sVar1 = *(short *)(iVar5 + 0x48);
        *(u32 *)(g_8c2739e0 + 0x1c) = 0;
        *(u16 *)(iVar5 + 0x50) = uVar4;
        *(u32 *)(iVar5 + 0x3c) = 0;
        *(u16 *)(iVar5 + 0x48) = 0;
        if (iVar2 != 1)
            goto LAB_8c1f19d4;
        if (sVar1 == 1) {
            *(u32 *)(iVar5 + 0x18) = uStack_28;
            *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c);
            *(u16 *)(iVar5 + 0x4a) = 2;
            if (*(int *)(iVar5 + 0x24) != 0) {
                (**(code **)(iVar5 + 0x24))(*(u32 *)(iVar5 + 0x28), a5, a2, a3);
            }
            goto LAB_8c1f19d4;
        }
        if (sVar1 != 3) {
            if (sVar1 != 4) {
                if (sVar1 == 7) {
                    iVar3 = FUN_8c1f15f4(g_8c2739e0 + 0x40, &uStack_40);
                    if (iVar3 == 0) {
                        **(u32 **)(iVar5 + 8) = uStack_40;
                        *(u32 *)(*(int *)(iVar5 + 8) + 4) = uStack_3c;
                        *(u32 *)(*(int *)(iVar5 + 8) + 8) = uStack_38;
                        *(u32 *)(*(int *)(iVar5 + 8) + 0xc) = uStack_34;
                        *(u32 *)(*(int *)(iVar5 + 8) + 0x10) = uStack_30 & 0xffffff;
                        goto LAB_8c1f19d4;
                    }
                    *(u16 *)(iVar5 + 0x50) = 5;
                    *(u16 *)(iVar5 + 0x52) = 0xffed;
                    *(u32 *)(iVar5 + 0x44) = 0;
                } else {
                    if (sVar1 != 8)
                        goto LAB_8c1f19d4;
                    a3 = 0x8c470f9c;
                    a2 = *(u32 *)(iVar5 + 4);
                    iVar3 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x48))(0x8c470f94, 0x8c470f98, a2, 0x8c470f9c);
                    if (iVar3 != 0) {
                        *(int *)(iVar5 + 0x3c) = iVar3;
                        *(u16 *)(iVar5 + 0x50) = 4;
                        *(u16 *)(iVar5 + 0x48) = 6;
                        *(int *)(g_8c2739e0 + 0x1c) = iVar5;
                        goto LAB_8c1f19d4;
                    }
                    *(u16 *)(iVar5 + 0x50) = 5;
                    *(u16 *)(iVar5 + 0x52) = 0xffe4;
                    *(u32 *)(iVar5 + 0x44) = 0;
                    **(u32 **)(iVar5 + 4) = 0;
                }
                goto LAB_8c1f1988;
            }
            *(u32 *)(iVar5 + 0x18) = *(u32 *)(iVar5 + 0x20);
            *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c);
        }
        *(u16 *)(iVar5 + 0x4a) = 2;
    } else {
        if (iVar2 == 0x41) {
            iVar3 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x24))(*(u32 *)(iVar5 + 0x3c), &iStack_44, a2, a3);
            if (iVar3 == 0) {
                if (iStack_44 < 1) {
                    *(u16 *)(iVar5 + 0x4a) = 2;
                } else {
                    *(u16 *)(iVar5 + 0x4a) = 0;
                }
                *(u32 *)(iVar5 + 0x18) = *(u32 *)(iVar5 + 0x20);
            } else if (iVar3 == 1) {
                *(int *)(iVar5 + 0x18) = iStack_44;
            }
            goto LAB_8c1f19d4;
        }
        if (iVar2 == 4) {
            *(u32 *)(iVar5 + 0x40) = uStack_20;
            if (*(short *)(iVar5 + 0x48) == 1) {
                *(u32 *)(iVar5 + 0x18) = uStack_28;
            }
            goto LAB_8c1f19d4;
        }
        if (iVar2 == 0x43)
            goto LAB_8c1f19d4;
        if ((iVar2 != 5) && (iVar2 != 0x40)) {
            *(u16 *)(iVar5 + 0x50) = uVar4 & 0xff;
            *(u32 *)(iVar5 + 0x3c) = 0;
            *(u32 *)(g_8c2739e0 + 0x1c) = 0;
            goto LAB_8c1f19d4;
        }
        *(u16 *)(iVar5 + 0x50) = uVar4;
        *(short *)(iVar5 + 0x52) = (short)uStack_28;
        *(u32 *)(iVar5 + 0x44) = uStack_24;
        *(u32 *)(iVar5 + 0x3c) = 0;
        *(u32 *)(g_8c2739e0 + 0x1c) = 0;
        if (*(short *)(iVar5 + 0x52) == -0x1d) {
            if (*(int *)(iVar5 + 0x44) == 0x3a) {
                iVar3 = FUN_8c1f23e0(a4, a5, a2, a3);
                if ((iVar3 == 6) || (iVar3 == 0)) {
                    *(u16 *)(iVar5 + 0x52) = 0xffe9;
                }
            } else if (*(int *)(iVar5 + 0x44) == 0x104) {
                *(u16 *)(iVar5 + 0x52) = 0xffdb;
            }
        }
    LAB_8c1f1988:
        if ((*(short *)(iVar5 + 0x52) == -0x17) || (*(short *)(iVar5 + 0x52) == -0x21)) {
            *(u32 *)(g_8c2739e0 + 0x34) = 1;
        }
        if (*(int *)(g_8c2739e0 + 0x24) != 0) {
            (**(code **)(g_8c2739e0 + 0x24))(*(u32 *)(g_8c2739e0 + 0x28), (int)*(short *)(iVar5 + 0x52), a2, a3);
        }
        if (*(int *)(iVar5 + 0x34) != 0) {
            (**(code **)(iVar5 + 0x34))(*(u32 *)(iVar5 + 0x38), (int)*(short *)(iVar5 + 0x52), a2, a3);
        }
    }
LAB_8c1f19d4:
    *(u32 *)(g_8c2739e0 + 0x20) = 0;
    return iVar2;
}

/*
 * FUN_8c1f19ec  0x8c1f19ec
 * called by: FUN_8c1f1a7c, FUN_8c1f1d8c, FUN_8c1f1eaa, FUN_8c1f2bfe, FUN_8c1f2d3e, FUN_8c1f2e3e
 */
u32 FUN_8c1f19ec(u32 a0, int a1, u32 a2) {
    int ar4_00;
    u32 uVar1;
    int ar7_00;

    ar7_00 = a1 << 0xb;
    ar4_00 = FUN_8c1f302a(*(u32 *)(g_8c2739e0 + 0x14), 0, a0, ar7_00);
    if (ar4_00 == 0) {
        return 0xfffffff3;
    }
    uVar1 = FUN_8c1f31c6(ar4_00, a1, a2, ar7_00);
    return uVar1;
}

/*
 * FUN_8c1f1a2a  0x8c1f1a2a
 */
u32 FUN_8c1f1a2a(int a0) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;

    iVar3 = *(int *)(a0 + 0x1c);
    uVar2 = 0;
    uVar1 = 0;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x2c) != 0)) {
        uVar2 = *(u32 *)(iVar3 + 0x30);
        uVar1 = *(u32 *)(iVar3 + 0x2c);
    }
    /* WARNING: Could not recover jumptable at 0x8c1f1144. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*g_8c0000bc)(uVar1, uVar2, 0, 5);
    return uVar1;
}

/*
 * FUN_8c1f1a44  0x8c1f1a44
 */
u32 FUN_8c1f1a44(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (*(int *)(a0 + 0x20) == 1) {
        return 1;
    }
    uVar1 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x40))();
    if (*(int *)(g_8c2739e0 + 0x1c) != 0) {
        uVar1 = FUN_8c1f1766(a0, a1, a2, a3);
        return uVar1;
    }
    return uVar1;
}

/*
 * FUN_8c1f1a52  0x8c1f1a52
 * called by: FUN_8c1f1a7c, FUN_8c1f1d8c, FUN_8c1f1eaa, FUN_8c1f1ffa, FUN_8c1f2008
 */
u32 FUN_8c1f1a52(int *a0) {
    u32 in_r0;

    if ((a0 != NULL) && (1 < *a0)) {
        a0[0xf] = a0[4];
    }
    return in_r0;
}

/*
 * FUN_8c1f1a7c  0x8c1f1a7c
 */
u32 FUN_8c1f1a7c(void) {
    char cVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    u32 *puVar5;
    u32 uVar6;
    u32 uVar7;
    char *a5;
    u32 uVar8;
    char *a6;
    u32 a7;
    char *ain0;
    u32 uStack_2c;
    int iStack_28;
    int iStack_24;

    ain0 = &g_8c470f66;
    if (g_8c2739e4 == 0) {
        g_8c2739e4 = FUN_8c1fa244(0x900, &LAB_8c1f1a44, 0x50, g_8c2739e0);
    }
    if (g_8c2739e8 == 0) {
        g_8c2739e8 = FUN_8c1fa244(0xa40, &LAB_8c1f1a2a, 0x10, g_8c2739e0);
    }
    a7 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = *(u32 *)(g_8c2739e0 + 0x14);
    piVar2 = (int *)FUN_8c1f302a(uVar6, 0, 0, 0);
    if ((piVar2 != NULL) &&
        (iVar3 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x1c))(uVar6, uVar7, uVar8, a7), iVar3 != 0)) {
        piVar2[0xf] = iVar3;
        *(u16 *)(piVar2 + 0x14) = 4;
        *(int **)(*piVar2 + 0x1c) = piVar2;
        iVar3 = FUN_8c1f2f98(piVar2, uVar7, uVar8, a7);
        iVar4 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x20))(&iStack_28, uVar7, uVar8, a7);
        if (iVar4 != 0) {
            if (iVar3 != 0) {
                if (iVar3 != -0x1d) {
                    return iVar3;
                }
                if (iStack_28 == 6) {
                    return 0xffffffe9;
                }
                return 0xffffffe3;
            }
            if (iStack_24 != 0x80) {
                return 0xfffffffb;
            }
            uVar6 = 0;
            uVar7 = 0;
            uVar8 = 0;
            piVar2 = (int *)FUN_8c1f302a(*(u32 *)(g_8c2739e0 + 0x14), 0, 0, 0);
            if (piVar2 != NULL) {
                *(u32 *)(g_8c2739e0 + 0x2c) = 0;
                iVar3 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x4c))(0x8c470f58, uVar7, uVar8, uVar6);
                if (iVar3 != 0) {
                    piVar2[0xf] = iVar3;
                    *(u16 *)(piVar2 + 0x14) = 4;
                    *(int **)(*piVar2 + 0x1c) = piVar2;
                    iVar3 = FUN_8c1f2f98(piVar2, uVar7, uVar8, uVar6);
                    if (iVar3 == 0) {
                        *(u32 *)(g_8c2739e0 + 0x2c) = *(u32 *)(g_8c2739e0 + 0x2c) | (g_8c470f64 + -0x30) * 0x10000;
                        *(u32 *)(g_8c2739e0 + 0x2c) = *(u32 *)(g_8c2739e0 + 0x2c) | (*ain0 + -0x30) * 0x100;
                        *(u32 *)(g_8c2739e0 + 0x2c) = *(u32 *)(g_8c2739e0 + 0x2c) | (int)g_8c470f67 - 0x30U;
                    }
                }
                a5 = (char *)0x1;
                a6 = (char *)(g_8c2739e0 + 0x40);
                iVar3 = FUN_8c1f19ec(g_8c26c520, 1, a6);
                if (iVar3 == 0) {
                    iVar3 = FUN_8c1f173a(g_8c2739e0 + 0x40);
                    if (iVar3 == 0) {
                        return 0xfffffffb;
                    }
                    puVar5 = (u32 *)(g_8c2739e0 + 4);
                    uVar7 = read_u32_le(g_8c2739e0 + 0xcc);
                    *puVar5 = uVar7;
                    *(int *)(g_8c2739e0 + 4) = *(int *)(g_8c2739e0 + 4) + 0x96;
                    puVar5 = (u32 *)(g_8c2739e0 + 8);
                    uVar7 = read_u32_le(g_8c2739e0 + 0xc4);
                    *puVar5 = uVar7;
                    g_8c470f90 = (short *)&g_8c470f78;
                    g_8c470f78 = (short)g_8c0080fc;
                    uVar7 = uVar6;
                    if (g_8c470f78 == 1) {
                        a5 = &g_8c0080f0;
                        iVar3 = 0;
                        g_8c470f7a = (short)g_8c0080fd;
                        g_8c470f7c = 0;
                        a6 = &g_8c470f80;
                        do {
                            uVar7 = uVar6;
                            if (*a5 == ' ')
                                break;
                            cVar1 = *a5;
                            a5 = a5 + 1;
                            uVar6 = 0xc;
                            uVar7 = 0xc;
                            iVar3 = iVar3 + 1;
                            *a6 = cVar1;
                            a6 = a6 + 1;
                        } while (iVar3 < 0xc);
                        *a6 = '\0';
                    }
                    iVar3 = read_u32_le(g_8c2739e0 + 0xde);
                    uVar6 = read_u32_le(g_8c2739e0 + 0xe6);
                    *(u32 *)(*(int *)(g_8c2739e0 + 0x10) + 8) = 0;
                    uVar7 = *(u32 *)(g_8c2739e0 + 0x10);
                    iVar3 = FUN_8c1f2bfe(g_8c2739e0 + 0x40, iVar3 + 0x96, uVar7, uVar6);
                    if (iVar3 == -0xc) {
                        return 0xfffffff4;
                    }
                    if (iVar3 == 0) {
                        if (**(int **)(g_8c2739e0 + 0x10) == 0) {
                            return 0xfffffffb;
                        }
                        if (*g_8c470f90 != 1) {
                        LAB_8c1f1d54:
                            *(u16 *)(g_8c2739e0 + 0x38) = 1;
                            return 0;
                        }
                        iVar3 = FUN_8c1f2172(g_8c470f90 + 4, &uStack_2c, uVar7, uVar6);
                        if (iVar3 == 0) {
                            uVar7 = 1;
                            *(u32 *)(g_8c470f90 + 2) = uStack_2c;
                            uVar6 = *(u32 *)(g_8c2739e0 + 0x10);
                            iVar3 = FUN_8c1f2bfe(g_8c2739e0 + 0x40, uStack_2c, uVar6, 1);
                            if (iVar3 == -0xc) {
                                return 0xfffffff4;
                            }
                            if (iVar3 == 0) {
                                if (**(int **)(g_8c2739e0 + 0x10) == 0) {
                                    return 0xfffffffb;
                                }
                                FUN_8c1f1a52(*(u32 *)(g_8c2739e0 + 0x10));
                                goto LAB_8c1f1d54;
                            }
                        }
                    }
                }
                return 0xfffffffc;
            }
        }
    }
    return 0xfffffffe;
}

/*
 * thunk_FUN_8c1f38c0  0x8c1f1d86
 * called by: FUN_8c102bd0
 */
u32 thunk_FUN_8c1f38c0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (g_8c1f38c0)();
    return uVar1;
}

/*
 * FUN_8c1f1d8c  0x8c1f1d8c
 * called by: FUN_8c1f38c0
 */
u32 FUN_8c1f1d8c(int a0, int *a1, u32 a2, u32 a3, int s0) {
    char cVar1;
    u32 uVar2;
    int *piVar3;
    int iVar4;
    u32 *puVar5;
    int iVar6;
    int *piVar7;
    u32 uVar8;
    char *ar5_00;
    u32 uVar9;
    u32 uVar10;
    u8 in_IMASK;
    u8 bVar11;
    u8 extraout_S;
    u8 extraout_S_00;
    u8 extraout_T;
    u8 extraout_T_00;
    u32 uStack_2c;
    int *piStack_28;
    int iStack_24;
    u32 uStack_20;

    if ((g_8c2739e0 != NULL) && ((short)g_8c2739e0[0xe] == 1)) {
        return 0;
    }
    if (((u32)a1 & 0x1f) != 0) {
        return 0xfffffff2;
    }
    piVar3 = g_8c2739e0;
    uVar8 = a2;
    uVar9 = a3;
    piStack_28 = a1;
    iStack_24 = a0;
    puVar5 = (u32 *)FUN_8c1f151c();
    (*(code *)*puVar5)(piVar3, a1, uVar8, uVar9);
    uStack_20 = (((u32)extraout_T | (u32)extraout_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
    bVar11 = (u8)((((u32)extraout_T | (u32)extraout_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4);
    g_8c2739e0 = piStack_28;
    *(u16 *)(piStack_28 + 0xe) = 0;
    g_8c2739e0[8] = 0;
    *g_8c2739e0 = iStack_24;
    piVar3 = g_8c2739e0 + 4;
    iVar6 = set_fields_0_4_8_1f3078(a3, a2);
    *piVar3 = iVar6;
    g_8c2739e0[3] = (int)puVar5;
    g_8c2739e0[7] = 0;
    *(u16 *)((int)g_8c2739e0 + 0x3a) = 0;
    g_8c2739e0[9] = 0;
    g_8c2739e0[0xd] = 0;
    g_8c2739e0[0xf] = s0;
    piVar3 = g_8c2739e0 + 0x420;
    for (iVar6 = 0; iVar6 < *g_8c2739e0 + 1; iVar6 = iVar6 + 1) {
        *(u16 *)(piVar3 + 0x13) = 0;
        *piVar3 = (int)g_8c2739e0;
        piVar3 = piVar3 + 0x15;
    }
    g_8c2739e0[5] = (int)(g_8c2739e0 + 0x420);
    g_8c2739e0[6] = (int)(g_8c2739e0 + 0x435);
    FUN_8c1f21bc(g_8c2739e0[5], 0, 0, 0);
    uVar2 = (((u32)extraout_T_00 | (u32)extraout_S_00 << 1 | (u32)bVar11 << 4) & 0xf0) >> 4;
    if (g_8c2739e4 == 0) {
        g_8c2739e4 = FUN_8c1fa244(0x900, &LAB_8c1f1a44, 0x50, g_8c2739e0);
    }
    if (g_8c2739e8 == 0) {
        g_8c2739e8 = FUN_8c1fa244(0xa40, &LAB_8c1f1a2a, 0x10, g_8c2739e0);
    }
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = 0;
    piVar3 = (int *)FUN_8c1f302a(g_8c2739e0[5], 0, 0, 0);
    if ((piVar3 != NULL) && (iVar6 = (**(code **)(g_8c2739e0[3] + 0x1c))(uVar2), iVar6 != 0)) {
        piVar3[0xf] = iVar6;
        *(u16 *)(piVar3 + 0x14) = 4;
        *(int **)(*piVar3 + 0x1c) = piVar3;
        iVar6 = FUN_8c1f2f98(piVar3, uVar8, uVar9, uVar10);
        iVar4 = (**(code **)(g_8c2739e0[3] + 0x20))(&piStack_28);
        if (iVar4 != 0) {
            if (iVar6 != 0) {
                if (iVar6 != -0x1d) {
                    return iVar6;
                }
                if (piStack_28 == (int *)0x6) {
                    return 0xffffffe9;
                }
                return 0xffffffe3;
            }
            if (iStack_24 != 0x80) {
                return 0xfffffffb;
            }
            uVar8 = 0;
            uVar9 = 0;
            uVar10 = 0;
            piVar3 = (int *)FUN_8c1f302a(g_8c2739e0[5], 0, 0, 0);
            if (piVar3 != NULL) {
                g_8c2739e0[0xb] = 0;
                iVar6 = (**(code **)(g_8c2739e0[3] + 0x4c))(0x8c470f58);
                if (iVar6 != 0) {
                    piVar3[0xf] = iVar6;
                    *(u16 *)(piVar3 + 0x14) = 4;
                    *(int **)(*piVar3 + 0x1c) = piVar3;
                    iVar6 = FUN_8c1f2f98(piVar3, uVar9, uVar10, uVar8);
                    if (iVar6 == 0) {
                        g_8c2739e0[0xb] = g_8c2739e0[0xb] | (g_8c470f64 + -0x30) * 0x10000;
                        g_8c2739e0[0xb] = g_8c2739e0[0xb] | (g_8c470f66 + -0x30) * 0x100;
                        g_8c2739e0[0xb] = g_8c2739e0[0xb] | (int)g_8c470f67 - 0x30U;
                    }
                }
                ar5_00 = (char *)0x1;
                piVar3 = g_8c2739e0 + 0x10;
                iVar6 = FUN_8c1f19ec(g_8c26c520, 1, piVar3);
                if (iVar6 == 0) {
                    iVar6 = FUN_8c1f173a(g_8c2739e0 + 0x10);
                    if (iVar6 == 0) {
                        return 0xfffffffb;
                    }
                    piVar7 = g_8c2739e0 + 1;
                    iVar6 = read_u32_le(g_8c2739e0 + 0x33);
                    *piVar7 = iVar6;
                    g_8c2739e0[1] = g_8c2739e0[1] + 0x96;
                    piVar7 = g_8c2739e0 + 2;
                    iVar6 = read_u32_le(g_8c2739e0 + 0x31);
                    *piVar7 = iVar6;
                    g_8c470f90 = (short *)&g_8c470f78;
                    g_8c470f78 = (short)g_8c0080fc;
                    uVar9 = uVar8;
                    if (g_8c470f78 == 1) {
                        ar5_00 = &g_8c0080f0;
                        iVar6 = 0;
                        g_8c470f7a = (short)g_8c0080fd;
                        g_8c470f7c = 0;
                        piVar3 = (int *)&g_8c470f80;
                        do {
                            uVar9 = uVar8;
                            if (*ar5_00 == ' ')
                                break;
                            cVar1 = *ar5_00;
                            ar5_00 = ar5_00 + 1;
                            uVar8 = 0xc;
                            uVar9 = 0xc;
                            iVar6 = iVar6 + 1;
                            *(char *)piVar3 = cVar1;
                            piVar3 = (int *)((int)piVar3 + 1);
                        } while (iVar6 < 0xc);
                        *(char *)piVar3 = '\0';
                    }
                    iVar6 = read_u32_le((int)g_8c2739e0 + 0xde);
                    uVar8 = read_u32_le((int)g_8c2739e0 + 0xe6);
                    *(u32 *)(g_8c2739e0[4] + 8) = 0;
                    iVar4 = g_8c2739e0[4];
                    iVar6 = FUN_8c1f2bfe(g_8c2739e0 + 0x10, iVar6 + 0x96, iVar4, uVar8);
                    if (iVar6 == -0xc) {
                        return 0xfffffff4;
                    }
                    if (iVar6 == 0) {
                        if (*(int *)g_8c2739e0[4] == 0) {
                            return 0xfffffffb;
                        }
                        if (*g_8c470f90 != 1) {
                        LAB_8c1f1d54:
                            *(u16 *)(g_8c2739e0 + 0xe) = 1;
                            return 0;
                        }
                        iVar6 = FUN_8c1f2172(g_8c470f90 + 4, &uStack_2c, iVar4, uVar8);
                        if (iVar6 == 0) {
                            uVar8 = 1;
                            *(u32 *)(g_8c470f90 + 2) = uStack_2c;
                            iVar4 = g_8c2739e0[4];
                            iVar6 = FUN_8c1f2bfe(g_8c2739e0 + 0x10, uStack_2c, iVar4, 1);
                            if (iVar6 == -0xc) {
                                return 0xfffffff4;
                            }
                            if (iVar6 == 0) {
                                if (*(int *)g_8c2739e0[4] == 0) {
                                    return 0xfffffffb;
                                }
                                FUN_8c1f1a52(g_8c2739e0[4]);
                                goto LAB_8c1f1d54;
                            }
                        }
                    }
                }
                return 0xfffffffc;
            }
        }
    }
    return 0xfffffffe;
}

/*
 * FUN_8c1f1eaa  0x8c1f1eaa
 */
u32 FUN_8c1f1eaa(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    char cVar1;
    u32 uVar2;
    int *piVar3;
    int iVar4;
    u32 uVar5;
    char *ar5_00;
    u32 uVar6;
    u32 uVar7;
    int iVar8;
    int *piVar9;
    u8 in_IMASK;
    u8 bVar10;
    u8 in_S;
    u8 extraout_S;
    u8 extraout_S_00;
    u8 extraout_T;
    u32 uStack_2c;
    int iStack_28;
    int iStack_24;

    if (g_8c2739e0 == NULL) {
        return 0xffffffff;
    }
    piVar9 = g_8c2739e0 + 0x420;
    piVar3 = g_8c2739e0;
    for (iVar8 = 0; iVar8 < *g_8c2739e0 + 1; iVar8 = iVar8 + 1) {
        piVar3 = piVar9;
        gdfs_close_like(piVar9, a1, a2, a3);
        piVar9 = piVar9 + 0x15;
        in_S = extraout_S;
    }
    bVar10 = (u8)((((u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4);
    (**(code **)g_8c2739e0[3])(piVar3, a1, a2, a3);
    *(u16 *)(g_8c2739e0 + 0xe) = 0;
    g_8c2739e0[8] = 0;
    g_8c2739e0[7] = 0;
    *(u16 *)((int)g_8c2739e0 + 0x3a) = 0;
    g_8c2739e0[0xd] = 0;
    piVar3 = g_8c2739e0 + 0x420;
    for (iVar8 = 0; iVar8 < *g_8c2739e0 + 1; iVar8 = iVar8 + 1) {
        *(u16 *)(piVar3 + 0x13) = 0;
        *piVar3 = (int)g_8c2739e0;
        piVar3 = piVar3 + 0x15;
    }
    g_8c2739e0[5] = (int)(g_8c2739e0 + 0x420);
    g_8c2739e0[6] = (int)(g_8c2739e0 + 0x435);
    FUN_8c1f21bc(g_8c2739e0[5], 0, 0, 0);
    uVar2 = (((u32)extraout_T | (u32)extraout_S_00 << 1 | (u32)bVar10 << 4) & 0xf0) >> 4;
    if (g_8c2739e4 == 0) {
        g_8c2739e4 = FUN_8c1fa244(0x900, &LAB_8c1f1a44, 0x50, g_8c2739e0);
    }
    if (g_8c2739e8 == 0) {
        g_8c2739e8 = FUN_8c1fa244(0xa40, &LAB_8c1f1a2a, 0x10, g_8c2739e0);
    }
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    piVar3 = (int *)FUN_8c1f302a(g_8c2739e0[5], 0, 0, 0);
    if ((piVar3 != NULL) && (iVar8 = (**(code **)(g_8c2739e0[3] + 0x1c))(uVar2), iVar8 != 0)) {
        piVar3[0xf] = iVar8;
        *(u16 *)(piVar3 + 0x14) = 4;
        *(int **)(*piVar3 + 0x1c) = piVar3;
        iVar8 = FUN_8c1f2f98(piVar3, uVar5, uVar6, uVar7);
        iVar4 = (**(code **)(g_8c2739e0[3] + 0x20))(&iStack_28);
        if (iVar4 != 0) {
            if (iVar8 != 0) {
                if (iVar8 != -0x1d) {
                    return iVar8;
                }
                if (iStack_28 == 6) {
                    return 0xffffffe9;
                }
                return 0xffffffe3;
            }
            if (iStack_24 != 0x80) {
                return 0xfffffffb;
            }
            uVar5 = 0;
            uVar6 = 0;
            uVar7 = 0;
            piVar3 = (int *)FUN_8c1f302a(g_8c2739e0[5], 0, 0, 0);
            if (piVar3 != NULL) {
                g_8c2739e0[0xb] = 0;
                iVar8 = (**(code **)(g_8c2739e0[3] + 0x4c))(0x8c470f58);
                if (iVar8 != 0) {
                    piVar3[0xf] = iVar8;
                    *(u16 *)(piVar3 + 0x14) = 4;
                    *(int **)(*piVar3 + 0x1c) = piVar3;
                    iVar8 = FUN_8c1f2f98(piVar3, uVar6, uVar7, uVar5);
                    if (iVar8 == 0) {
                        g_8c2739e0[0xb] = g_8c2739e0[0xb] | (g_8c470f64 + -0x30) * 0x10000;
                        g_8c2739e0[0xb] = g_8c2739e0[0xb] | (g_8c470f66 + -0x30) * 0x100;
                        g_8c2739e0[0xb] = g_8c2739e0[0xb] | (int)g_8c470f67 - 0x30U;
                    }
                }
                ar5_00 = (char *)0x1;
                piVar3 = g_8c2739e0 + 0x10;
                iVar8 = FUN_8c1f19ec(g_8c26c520, 1, piVar3);
                if (iVar8 == 0) {
                    iVar8 = FUN_8c1f173a(g_8c2739e0 + 0x10);
                    if (iVar8 == 0) {
                        return 0xfffffffb;
                    }
                    piVar9 = g_8c2739e0 + 1;
                    iVar8 = read_u32_le(g_8c2739e0 + 0x33);
                    *piVar9 = iVar8;
                    g_8c2739e0[1] = g_8c2739e0[1] + 0x96;
                    piVar9 = g_8c2739e0 + 2;
                    iVar8 = read_u32_le(g_8c2739e0 + 0x31);
                    *piVar9 = iVar8;
                    g_8c470f90 = (short *)&g_8c470f78;
                    g_8c470f78 = (short)g_8c0080fc;
                    uVar6 = uVar5;
                    if (g_8c470f78 == 1) {
                        ar5_00 = &g_8c0080f0;
                        iVar8 = 0;
                        g_8c470f7a = (short)g_8c0080fd;
                        g_8c470f7c = 0;
                        piVar3 = (int *)&g_8c470f80;
                        do {
                            uVar6 = uVar5;
                            if (*ar5_00 == ' ')
                                break;
                            cVar1 = *ar5_00;
                            ar5_00 = ar5_00 + 1;
                            uVar5 = 0xc;
                            uVar6 = 0xc;
                            iVar8 = iVar8 + 1;
                            *(char *)piVar3 = cVar1;
                            piVar3 = (int *)((int)piVar3 + 1);
                        } while (iVar8 < 0xc);
                        *(char *)piVar3 = '\0';
                    }
                    iVar8 = read_u32_le((int)g_8c2739e0 + 0xde);
                    uVar5 = read_u32_le((int)g_8c2739e0 + 0xe6);
                    *(u32 *)(g_8c2739e0[4] + 8) = 0;
                    iVar4 = g_8c2739e0[4];
                    iVar8 = FUN_8c1f2bfe(g_8c2739e0 + 0x10, iVar8 + 0x96, iVar4, uVar5);
                    if (iVar8 == -0xc) {
                        return 0xfffffff4;
                    }
                    if (iVar8 == 0) {
                        if (*(int *)g_8c2739e0[4] == 0) {
                            return 0xfffffffb;
                        }
                        if (*g_8c470f90 != 1) {
                        LAB_8c1f1d54:
                            *(u16 *)(g_8c2739e0 + 0xe) = 1;
                            return 0;
                        }
                        iVar8 = FUN_8c1f2172(g_8c470f90 + 4, &uStack_2c, iVar4, uVar5);
                        if (iVar8 == 0) {
                            uVar5 = 1;
                            *(u32 *)(g_8c470f90 + 2) = uStack_2c;
                            iVar4 = g_8c2739e0[4];
                            iVar8 = FUN_8c1f2bfe(g_8c2739e0 + 0x10, uStack_2c, iVar4, 1);
                            if (iVar8 == -0xc) {
                                return 0xfffffff4;
                            }
                            if (iVar8 == 0) {
                                if (*(int *)g_8c2739e0[4] == 0) {
                                    return 0xfffffffb;
                                }
                                FUN_8c1f1a52(g_8c2739e0[4]);
                                goto LAB_8c1f1d54;
                            }
                        }
                    }
                }
                return 0xfffffffc;
            }
        }
    }
    return 0xfffffffe;
}

/*
 * FUN_8c1f1f98  0x8c1f1f98
 */
u32 FUN_8c1f1f98(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 ain0) {
    int *ar4_00;
    int iVar1;

    if (g_8c2739e4 != 0) {
        ain0 = FUN_8c1fa54c(g_8c2739e4);
    }
    if (g_8c2739e8 != 0) {
        ain0 = FUN_8c1fa54c(g_8c2739e8);
    }
    g_8c2739e4 = 0;
    g_8c2739e8 = 0;
    ar4_00 = g_8c2739e0 + 0x420;
    for (iVar1 = 0; iVar1 < *g_8c2739e0 + 1; iVar1 = iVar1 + 1) {
        ain0 = gdfs_close_like(ar4_00, a1, a2, a3);
        ar4_00 = ar4_00 + 0x15;
    }
    g_8c2739e0 = NULL;
    return ain0;
}

/*
 * FUN_8c1f1fa0  0x8c1f1fa0
 */
u32 FUN_8c1f1fa0(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 ain0, int *ain1) {
    int *a4;
    int iVar1;

    if (*ain1 != 0) {
        ain0 = FUN_8c1fa54c(*ain1);
    }
    if (g_8c2739e8 != 0) {
        ain0 = FUN_8c1fa54c(g_8c2739e8);
    }
    g_8c2739e4 = 0;
    g_8c2739e8 = 0;
    a4 = g_8c2739e0 + 0x420;
    for (iVar1 = 0; iVar1 < *g_8c2739e0 + 1; iVar1 = iVar1 + 1) {
        ain0 = gdfs_close_like(a4, a1, a2, a3);
        a4 = a4 + 0x15;
    }
    g_8c2739e0 = NULL;
    return ain0;
}

/*
 * FUN_8c1f1ffa  0x8c1f1ffa
 */
int FUN_8c1f1ffa(char *a0, int a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    int ar7_00;

    if (a1 == 0) {
        a1 = *(int *)(g_8c2739e0 + 0x10);
    }
    if ((*a0 == '/') || (*a0 == '\\')) {
        if (*g_8c470f90 == 1) {
            iVar1 =
                FUN_8c1f2e3e(g_8c2739e0 + 0x80, *(u32 *)(g_8c2739e0 + 4), *(u32 *)(g_8c2739e0 + 8), a0, g_8c470f90 + 4);
        } else {
            iVar1 = FUN_8c1f2d3e(g_8c2739e0 + 0x80, *(u32 *)(g_8c2739e0 + 4), *(u32 *)(g_8c2739e0 + 8), a0);
        }
        if (iVar1 == 0) {
            return 0xfffffff8;
        }
        ar7_00 = 0x800;
    } else {
        iVar1 = FUN_8c1f2cce(a0, *(u32 *)(g_8c2739e0 + 0x10), 0, a3);
        if (iVar1 == 0) {
            return 0xfffffff8;
        }
        piVar3 = (int *)(*(int *)(g_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
        if ((*(u8 *)(piVar3 + 2) & 2) == 0) {
            return 0xfffffff5;
        }
        iVar1 = *piVar3;
        ar7_00 = piVar3[1];
    }
    iVar1 = iVar1 + 0x96;
    iVar2 = FUN_8c1f2bfe(g_8c2739e0 + 0x40, iVar1, a1, ar7_00);
    if (((*g_8c470f90 == 1) && (*(int *)(g_8c470f90 + 2) == iVar1)) &&
        ((iVar1 = 1, iVar2 == 0 || (iVar1 = iVar2, iVar2 == -0xc)))) {
        FUN_8c1f1a52(a1);
    }
    return iVar2;
}

/*
 * FUN_8c1f2008  0x8c1f2008
 */
int FUN_8c1f2008(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    int ar7_00;
    char *unaff_r12;
    u32 unaff_r13;
    char in_T;

    if (in_T != '\0') {
        unaff_r13 = *(u32 *)(g_8c2739e0 + 0x10);
    }
    if ((*unaff_r12 == '/') || (*unaff_r12 == '\\')) {
        if (*g_8c470f90 == 1) {
            iVar1 = FUN_8c1f2e3e(g_8c2739e0 + 0x80, *(u32 *)(g_8c2739e0 + 4), *(u32 *)(g_8c2739e0 + 8), unaff_r12,
                                 g_8c470f90 + 4);
        } else {
            iVar1 = FUN_8c1f2d3e(g_8c2739e0 + 0x80, *(u32 *)(g_8c2739e0 + 4), *(u32 *)(g_8c2739e0 + 8), unaff_r12);
        }
        if (iVar1 == 0) {
            return 0xfffffff8;
        }
        ar7_00 = 0x800;
    } else {
        iVar1 = FUN_8c1f2cce(unaff_r12, *(u32 *)(g_8c2739e0 + 0x10), 0, a3);
        if (iVar1 == 0) {
            return 0xfffffff8;
        }
        piVar3 = (int *)(*(int *)(g_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
        if ((*(u8 *)(piVar3 + 2) & 2) == 0) {
            return 0xfffffff5;
        }
        iVar1 = *piVar3;
        ar7_00 = piVar3[1];
    }
    iVar1 = iVar1 + 0x96;
    iVar2 = FUN_8c1f2bfe(g_8c2739e0 + 0x40, iVar1, unaff_r13, ar7_00);
    if (((*g_8c470f90 == 1) && (*(int *)(g_8c470f90 + 2) == iVar1)) && ((iVar2 == 0 || (iVar2 == -0xc)))) {
        FUN_8c1f1a52(unaff_r13);
    }
    return iVar2;
}

/*
 * FUN_8c1f210a  0x8c1f210a
 */
u32 FUN_8c1f210a(int *a0) {
    u32 in_r0;
    u32 uVar1;
    int *ar4_00;
    int *ar5_00;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int iVar6;

    iVar3 = *a0;
    piVar5 = *(int **)(g_8c2739e0 + 0x10);
    iVar4 = piVar5[1];
    iVar2 = iVar4;
    if (iVar3 < iVar4) {
        iVar2 = iVar3;
    }
    iVar6 = 0;
    piVar5[2] = a0[2];
    ar4_00 = a0 + 4;
    ar5_00 = piVar5 + 4;
    if (0 < iVar2) {
        do {
            in_r0 = bcopy(ar4_00, ar5_00, 0x2c);
            iVar6 = iVar6 + 1;
            ar4_00 = ar4_00 + 0xb;
            ar5_00 = ar5_00 + 0xb;
        } while (iVar6 < iVar2);
    }
    *piVar5 = iVar6;
    if (iVar4 < iVar3) {
        uVar1 = 0xfffffff4;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c1f210e  0x8c1f210e
 */
u32 FUN_8c1f210e(int *a0) {
    u32 uVar1;
    int *in_r3;
    int *ar4_00;
    int *ar5_00;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int iVar6;

    iVar3 = *a0;
    piVar5 = *(int **)(*in_r3 + 0x10);
    iVar4 = piVar5[1];
    iVar2 = iVar4;
    if (iVar3 < iVar4) {
        iVar2 = iVar3;
    }
    iVar6 = 0;
    piVar5[2] = a0[2];
    ar4_00 = a0 + 4;
    ar5_00 = piVar5 + 4;
    if (0 < iVar2) {
        do {
            bcopy(ar4_00, ar5_00, 0x2c);
            iVar6 = iVar6 + 1;
            ar4_00 = ar4_00 + 0xb;
            ar5_00 = ar5_00 + 0xb;
        } while (iVar6 < iVar2);
    }
    *piVar5 = iVar6;
    if (iVar4 < iVar3) {
        uVar1 = 0xfffffff4;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * FUN_8c1f2172  0x8c1f2172
 * called by: FUN_8c1f1a7c, FUN_8c1f1d8c, FUN_8c1f1eaa
 */
u32 FUN_8c1f2172(u32 a0, int *a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int *piVar2;

    iVar1 = FUN_8c1f2cce(a0, *(u32 *)(g_8c2739e0 + 0x10), 0, a3);
    if (iVar1 == 0) {
        return 0xfffffff8;
    }
    piVar2 = (int *)(*(int *)(g_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
    *a1 = *piVar2 + 0x96;
    a1[1] = piVar2[1];
    *(char *)(a1 + 2) = (char)piVar2[2];
    return 0;
}

/*
 * FUN_8c1f217a  0x8c1f217a
 */
u32 FUN_8c1f217a(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int *in_r3;
    int *piVar2;
    int *unaff_r14;

    iVar1 = FUN_8c1f2cce(a0, *(u32 *)(*in_r3 + 0x10), a2, a3);
    if (iVar1 == 0) {
        return 0xfffffff8;
    }
    piVar2 = (int *)(*(int *)(g_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
    *unaff_r14 = *piVar2 + 0x96;
    unaff_r14[1] = piVar2[1];
    *(char *)(unaff_r14 + 2) = (char)piVar2[2];
    return 0;
}

/*
 * FUN_8c1f21bc  0x8c1f21bc
 * called by: FUN_8c1f1d8c, FUN_8c1f1eaa, FUN_8c1f222c, FUN_8c1f2236, FUN_8c1f22a8, FUN_8c1f22b2
 */
u32 FUN_8c1f21bc(int a0, u32 a1, u32 a2, int a3) {
    if (*(short *)(a0 + 0x4c) == 0) {
        *(u32 *)(a0 + 4) = a1;
        *(u32 *)(a0 + 8) = a2;
        *(int *)(a0 + 0xc) = a3;
        *(int *)(a0 + 0x10) = a3 + 0x7ff >> 0xb;
        *(u32 *)(a0 + 0x14) = 0;
        *(u32 *)(a0 + 0x18) = 0;
        *(u32 *)(a0 + 0x1c) = 0;
        *(u32 *)(a0 + 0x20) = 0;
        *(u32 *)(a0 + 0x24) = 0;
        *(u32 *)(a0 + 0x2c) = 0;
        *(u32 *)(a0 + 0x34) = 0;
        *(u32 *)(a0 + 0x3c) = 0;
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(a0 + 0x44) = 0;
        *(u16 *)(a0 + 0x48) = 0;
        *(u16 *)(a0 + 0x4a) = 0;
        *(u16 *)(a0 + 0x4c) = 1;
        *(u16 *)(a0 + 0x4e) = g_8c26c524;
        *(u16 *)(a0 + 0x50) = 0;
        *(u16 *)(a0 + 0x52) = 0;
        return a0;
    }
    return 0;
}

/*
 * FUN_8c1f222c  0x8c1f222c
 */
u32 FUN_8c1f222c(u32 a0, int a1, u32 unused_a2, u32 a3) {
    int ar5_00;
    int iVar1;
    u32 ar6_00;
    int *piVar2;
    int ar4_00;
    int iVar3;

    ar6_00 = 0;
    if (a1 == 0) {
        a1 = g_8c2739e0[4];
    }
    ar5_00 = FUN_8c1f2cce(a0, a1, 0, a3);
    if (ar5_00 == 0) {
        FUN_8c1f175c(0xfffffff8, 0);
    } else {
        iVar3 = (ar5_00 + -1) * 0x2c;
        ar4_00 = g_8c2739e0[6];
        for (iVar1 = 0; iVar1 < *g_8c2739e0; iVar1 = iVar1 + 1) {
            if (*(short *)(ar4_00 + 0x4c) == 0) {
                piVar2 = (int *)(a1 + 0x10 + iVar3);
                iVar3 = piVar2[1];
                iVar1 = *piVar2 + 0x96;
                FUN_8c1f21bc(ar4_00, ar5_00, iVar1, iVar3);
                FUN_8c1f175c(0, ar5_00);
                return ar4_00;
            }
            ar4_00 = ar4_00 + 0x54;
        }
        FUN_8c1f175c(0xfffffff7, ar5_00);
    }
    return 0;
}

/*
 * FUN_8c1f2236  0x8c1f2236
 */
u32 FUN_8c1f2236(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int a5;
    int iVar1;
    u32 a6;
    int unaff_r13;
    int *piVar2;
    int a4;
    char in_T;
    int iVar3;

    a6 = 0;
    if (in_T != '\0') {
        unaff_r13 = g_8c2739e0[4];
    }
    a5 = FUN_8c1f2cce(a0, unaff_r13, 0, a3);
    if (a5 == 0) {
        FUN_8c1f175c(0xfffffff8, 0);
    } else {
        iVar3 = (a5 + -1) * 0x2c;
        a4 = g_8c2739e0[6];
        for (iVar1 = 0; iVar1 < *g_8c2739e0; iVar1 = iVar1 + 1) {
            if (*(short *)(a4 + 0x4c) == 0) {
                piVar2 = (int *)(unaff_r13 + 0x10 + iVar3);
                iVar3 = piVar2[1];
                iVar1 = *piVar2 + 0x96;
                FUN_8c1f21bc(a4, a5, iVar1, iVar3);
                FUN_8c1f175c(0, a5);
                return a4;
            }
            a4 = a4 + 0x54;
        }
        FUN_8c1f175c(0xfffffff7, a5);
    }
    return 0;
}

/*
 * FUN_8c1f22a8  0x8c1f22a8
 */
u32 FUN_8c1f22a8(int a0, int a1) {
    int iVar1;
    u32 ar5_00;
    int ar7_00;
    int ar4_00;

    if (a0 < 0xb05e) {
        FUN_8c1f175c(0xffffffe0, a1);
    } else {
        ar4_00 = g_8c2739e0[6];
        ar7_00 = a1 << 0xb;
        for (iVar1 = 0; iVar1 < *g_8c2739e0; iVar1 = iVar1 + 1) {
            if (*(short *)(ar4_00 + 0x4c) == 0) {
                ar5_00 = 0;
                FUN_8c1f21bc(ar4_00, 0, a0, ar7_00);
                FUN_8c1f175c(0, ar5_00);
                return ar4_00;
            }
            ar4_00 = ar4_00 + 0x54;
        }
        FUN_8c1f175c(0xfffffff7, a1);
    }
    return 0;
}

/*
 * FUN_8c1f22b2  0x8c1f22b2
 */
u32 FUN_8c1f22b2(u32 unused_a0, int a1) {
    int in_r3;
    int iVar1;
    u32 a5;
    int a7;
    int unaff_r13;
    int a4;

    if (unaff_r13 < in_r3) {
        FUN_8c1f175c(0xffffffe0, a1);
    } else {
        a4 = g_8c2739e0[6];
        a7 = a1 << 0xb;
        for (iVar1 = 0; iVar1 < *g_8c2739e0; iVar1 = iVar1 + 1) {
            if (*(short *)(a4 + 0x4c) == 0) {
                a5 = 0;
                FUN_8c1f21bc(a4, 0, unaff_r13, a7);
                FUN_8c1f175c(0, a5);
                return a4;
            }
            a4 = a4 + 0x54;
        }
        FUN_8c1f175c(0xfffffff7, a1);
    }
    return 0;
}

/*
 * FUN_8c1f231a  0x8c1f231a
 */
u32 FUN_8c1f231a(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x40))();
    if (*(int *)(g_8c2739e0 + 0x1c) != 0) {
        uVar1 = FUN_8c1f1766(a0, a1, a2, a3);
        return uVar1;
    }
    return uVar1;
}

/*
 * FUN_8c1f231e  0x8c1f231e
 */
u32 FUN_8c1f231e(u32 a0, u32 a1, u32 a2, u32 a3, int ain0) {
    u32 uVar1;
    int *in_r2;

    uVar1 = (**(code **)(ain0 + *(int *)(*in_r2 + 0xc)))(a0, a1, a2, a3);
    if (*(int *)(g_8c2739e0 + 0x1c) != 0) {
        uVar1 = FUN_8c1f1766(a0, a1, a2, a3);
        return uVar1;
    }
    return uVar1;
}

/*
 * FUN_8c1f2356  0x8c1f2356
 */
u32 FUN_8c1f2356(u32 a0, u32 a1) {
    int *ar4_00;
    int iVar1;
    u32 uVar2;
    u32 a7;

    a7 = 0;
    uVar2 = 0;
    ar4_00 = (int *)FUN_8c1f302a(*(u32 *)(g_8c2739e0 + 0x14), 0, 0, 0);
    if (ar4_00 != NULL) {
        iVar1 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x38))(a0, a1, uVar2, a7);
        if (iVar1 == 0) {
            uVar2 = 0xfffffff3;
        } else {
            ar4_00[0xf] = iVar1;
            *(u16 *)(ar4_00 + 0x14) = 4;
            *(int **)(*ar4_00 + 0x1c) = ar4_00;
            uVar2 = FUN_8c1f2f98(ar4_00, a1, uVar2, a7);
        }
        return uVar2;
    }
    return 0xfffffff3;
}

/*
 * FUN_8c1f23e0  0x8c1f23e0
 * called by: FUN_8c1f1766, FUN_8c1f2a0a
 */
u32 FUN_8c1f23e0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 auStack_c[3];

    iVar1 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x20))(auStack_c, a1, a2, a3);
    if (iVar1 == 0) {
        return 0xffffffff;
    }
    return auStack_c[0];
}

/*
 * FUN_8c1f2418  0x8c1f2418
 * called by: FUN_8c1f2a0a
 */
u32 FUN_8c1f2418(u32 a0) {
    int *piVar1;
    int iVar2;
    u32 a4;
    u32 a5;
    int a6;
    u32 a7;

    a7 = 0;
    piVar1 = (int *)FUN_8c1f302a(*(u32 *)(g_8c2739e0 + 0x14), 0, 0, 0);
    if (piVar1 != NULL) {
        a5 = 0xe;
        a6 = g_8c2739e0 + 0x40;
        a4 = 1;
        iVar2 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x3c))(1, 0xe, a6, a7);
        if (iVar2 != 0) {
            piVar1[0xf] = iVar2;
            *(u16 *)(piVar1 + 0x14) = 4;
            *(u16 *)(piVar1 + 0x12) = 10;
            *(int **)(*piVar1 + 0x1c) = piVar1;
            (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x40))(a4, a5, a6, a7);
            return 0;
        }
    }
    return 0xfffffff3;
}

/*
 * FUN_8c1f24e8  0x8c1f24e8
 */
u32 FUN_8c1f24e8(int a0, int a1, u32 a2) {
    int *piVar1;
    int iVar2;
    int a4;
    int a5;
    u32 a6;
    u32 a7;

    if (*g_8c470f90 == 1) {
        a1 = a1 + g_8c470f90[1] + -4;
        a0 = a0 + g_8c470f90[1] + -4;
    }
    if (2 < a0) {
        a7 = 0;
        piVar1 = (int *)FUN_8c1f302a(*(u32 *)(g_8c2739e0 + 0x14), 0, 0, 0);
        if (piVar1 != NULL) {
            a4 = a0;
            a5 = a1;
            a6 = a2;
            iVar2 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x28))(a0, a1, a2, a7);
            if (iVar2 != 0) {
                piVar1[0xf] = iVar2;
                *(u16 *)(piVar1 + 0x14) = 4;
                if (*(int *)(g_8c2739e0 + 0x2c) < 0x10001) {
                    *(u16 *)(piVar1 + 0x12) = 6;
                } else {
                    a4 = 1;
                    *(u16 *)(g_8c2739e0 + 0x3a) = 1;
                    g_8c470fa0 = 1;
                    g_8c470fa4 = a0;
                    g_8c470fa8 = a1;
                    g_8c470fac = a2;
                    piVar1[1] = (int)&g_8c470fb0;
                    *(u16 *)(piVar1 + 0x12) = 8;
                }
                *(int **)(*piVar1 + 0x1c) = piVar1;
                (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x40))(a4, a5, a6, a7);
            }
            if (iVar2 != 0) {
                return 0;
            }
        }
    }
    return 0xfffffff3;
}

/*
 * FUN_8c1f25f4  0x8c1f25f4
 */
u32 FUN_8c1f25f4(int a0, u32 a1, u32 a2) {
    int *piVar1;
    int iVar2;
    int a4;
    u32 a5;
    u32 a6;
    u32 a7;

    if (0xb05d < a0) {
        a7 = 0;
        piVar1 = (int *)FUN_8c1f302a(*(u32 *)(g_8c2739e0 + 0x14), 0, 0, 0);
        if (piVar1 != NULL) {
            a4 = a0;
            a5 = a1;
            a6 = a2;
            iVar2 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x2c))(a0, a1, a2, a7);
            if (iVar2 != 0) {
                piVar1[0xf] = iVar2;
                *(u16 *)(piVar1 + 0x14) = 4;
                if (*(int *)(g_8c2739e0 + 0x2c) < 0x10001) {
                    *(u16 *)(piVar1 + 0x12) = 6;
                } else {
                    *(u16 *)(g_8c2739e0 + 0x3a) = 1;
                    g_8c470fa0 = 2;
                    g_8c470fa4 = a0;
                    g_8c470fa8 = a1;
                    g_8c470fac = a2;
                    piVar1[1] = (int)&g_8c470fb0;
                    *(u16 *)(piVar1 + 0x12) = 8;
                }
                *(int **)(*piVar1 + 0x1c) = piVar1;
                (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x40))(a4, a5, a6, a7);
            }
            if (iVar2 != 0) {
                return 0;
            }
        }
    }
    return 0xfffffff3;
}

/*
 * FUN_8c1f26ec  0x8c1f26ec
 */
u32 FUN_8c1f26ec(void) {
    int *piVar1;
    int iVar2;
    u32 ar4_00;
    u32 a5;
    u32 a6;
    u32 a7;

    a7 = 0;
    a6 = 0;
    a5 = 0;
    ar4_00 = *(u32 *)(g_8c2739e0 + 0x14);
    piVar1 = (int *)FUN_8c1f302a(ar4_00, 0, 0, 0);
    if (piVar1 != NULL) {
        iVar2 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x30))(ar4_00, a5, a6, a7);
        if (iVar2 != 0) {
            piVar1[0xf] = iVar2;
            *(u16 *)(piVar1 + 0x14) = 4;
            if ((*(short *)(g_8c2739e0 + 0x3a) == 0) || (*(int *)(g_8c2739e0 + 0x2c) < 0x10001)) {
                *(u16 *)(piVar1 + 0x12) = 6;
            } else {
                piVar1[1] = (int)&g_8c470fb4;
                *(u16 *)(piVar1 + 0x12) = 8;
            }
            *(int **)(*piVar1 + 0x1c) = piVar1;
            (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x40))(ar4_00, a5, a6, a7);
        }
        if (iVar2 != 0) {
            return 0;
        }
    }
    return 0xfffffff3;
}

/*
 * FUN_8c1f2796  0x8c1f2796
 */
u32 FUN_8c1f2796(void) {
    int *piVar1;
    int iVar2;
    u32 ar4_00;
    u32 a5;
    u32 a6;
    u32 a7;

    a7 = 0;
    a6 = 0;
    a5 = 0;
    ar4_00 = *(u32 *)(g_8c2739e0 + 0x14);
    piVar1 = (int *)FUN_8c1f302a(ar4_00, 0, 0, 0);
    if (piVar1 != NULL) {
        iVar2 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x30))(ar4_00, a5, a6, a7);
        if (iVar2 != 0) {
            piVar1[0xf] = iVar2;
            *(u16 *)(piVar1 + 0x14) = 4;
            if ((*(short *)(g_8c2739e0 + 0x3a) == 0) || (*(int *)(g_8c2739e0 + 0x2c) < 0x10001)) {
                *(u16 *)(piVar1 + 0x12) = 6;
            } else {
                piVar1[1] = (int)&g_8c470fb4;
                *(u16 *)(piVar1 + 0x12) = 8;
            }
            *(int **)(*piVar1 + 0x1c) = piVar1;
            (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x40))(ar4_00, a5, a6, a7);
        }
        if (iVar2 != 0) {
            return 0;
        }
    }
    return 0xfffffff3;
}

/*
 * FUN_8c1f2852  0x8c1f2852
 */
u32 FUN_8c1f2852(u32 a0) {
    int *piVar1;
    int iVar2;
    u32 a5;
    u32 a6;
    u32 a7;
    code *pcVar3;

    a7 = 0;
    a6 = 0;
    a5 = 0;
    piVar1 = (int *)FUN_8c1f302a(*(u32 *)(g_8c2739e0 + 0x14), 0, 0, 0);
    if (piVar1 == NULL) {
        return 0xfffffff3;
    }
    if ((*(short *)(g_8c2739e0 + 0x3a) != 0) && (g_8c470fb0 != g_8c470fb4)) {
        *(u16 *)(g_8c2739e0 + 0x3a) = 0;
    }
    if ((*(short *)(g_8c2739e0 + 0x3a) == 0) || (*(int *)(g_8c2739e0 + 0x2c) < 0x10001)) {
        iVar2 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x34))(a0, a5, a6, a7);
        if (iVar2 == 0)
            goto LAB_8c1f2948;
        piVar1[0xf] = iVar2;
        *(u16 *)(piVar1 + 0x14) = 4;
        *(u16 *)(piVar1 + 0x12) = 6;
    } else {
        if (g_8c470fa0 == 1) {
            pcVar3 = *(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x28);
        } else {
            pcVar3 = *(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x2c);
        }
        a0 = g_8c470fa4;
        a5 = g_8c470fa8;
        a6 = g_8c470fac;
        iVar2 = (*pcVar3)(g_8c470fa4, g_8c470fa8, g_8c470fac, a7);
        if (iVar2 == 0)
            goto LAB_8c1f2948;
        piVar1[0xf] = iVar2;
        *(u16 *)(piVar1 + 0x14) = 4;
        piVar1[1] = (int)&g_8c470fb0;
        *(u16 *)(piVar1 + 0x12) = 8;
    }
    *(int **)(*piVar1 + 0x1c) = piVar1;
    (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x40))(a0, a5, a6, a7);
LAB_8c1f2948:
    if (iVar2 == 0) {
        return 0xfffffff3;
    }
    return 0;
}

/*
 * FUN_8c1f2972  0x8c1f2972
 */
u32 FUN_8c1f2972(int a0) {
    int *piVar1;
    int iVar2;
    u32 a4;
    u32 a5;
    int a6;
    u32 a7;

    a7 = 0;
    piVar1 = (int *)FUN_8c1f302a(*(u32 *)(g_8c2739e0 + 0x14), 0, 0, 0);
    if (piVar1 != NULL) {
        a5 = 100;
        a6 = g_8c2739e0 + 0x40;
        a4 = 0;
        iVar2 = (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x3c))(0, 100, a6, a7);
        if (iVar2 != 0) {
            piVar1[0xf] = iVar2;
            *(u16 *)(piVar1 + 0x14) = 4;
            *(u16 *)(piVar1 + 0x12) = 7;
            piVar1[2] = a0;
            *(int **)(*piVar1 + 0x1c) = piVar1;
            (**(code **)(*(int *)(g_8c2739e0 + 0xc) + 0x40))(a4, a5, a6, a7);
            return 0;
        }
    }
    return 0xfffffff3;
}

/*
 * FUN_8c1f2a0a  0x8c1f2a0a
 */
u32 FUN_8c1f2a0a(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int *in_r3;

    if (*(int *)(*in_r3 + 0x34) != 1) {
        iVar1 = FUN_8c1f23e0(unused_a0, a1, a2, a3);
        if (iVar1 != 6) {
            if (iVar1 == 0) {
                FUN_8c1f2418(0);
            }
            return 0;
        }
        *(u32 *)(g_8c2739e0 + 0x34) = 1;
    }
    return 1;
}

/*
 * toupper  0x8c1f2a48
 * called by: FUN_8c1f2a74, FUN_8c1f2a80, FUN_8c1f2ae2, FUN_8c1f2ae6, FUN_8c1f2b42
 */
int toupper(int a0) {
    if (('`' < (char)a0) && ((char)a0 < '{')) {
        a0 = a0 + -0x20;
    }
    return a0;
}

/*
 * bcopy  0x8c1f2a5c
 * copies a2 bytes from a0 to a1
 * called by: FUN_8c1f210a, FUN_8c1f210e, FUN_8c1f2b68, FUN_8c1f2b70, FUN_8c1f2d3e, FUN_8c1f2e3e
 */
u32 bcopy(u8 *a0, u8 *a1, int a2) {
    u8 uVar1;
    u32 in_r0;

    for (; 0 < a2; a2 = a2 + -1) {
        uVar1 = *a0;
        a0 = a0 + 1;
        *a1 = uVar1;
        a1 = a1 + 1;
    }
    return in_r0;
}

/*
 * FUN_8c1f2a74  0x8c1f2a74
 * called by: FUN_8c1f2d3e, FUN_8c1f2e3e
 */
u32 FUN_8c1f2a74(char *a0, char *a1, int a2) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    while (true) {
        if (a2 < 1) {
            return 1;
        }
        if (*a0 == '\0')
            break;
        cVar1 = *a0;
        a0 = a0 + 1;
        uVar2 = toupper((int)cVar1);
        cVar1 = *a1;
        a1 = a1 + 1;
        uVar3 = toupper((int)cVar1);
        if ((char)uVar2 != (char)uVar3) {
            return 0;
        }
        a2 = a2 + -1;
    }
    if (*a1 == '\0') {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c1f2a80  0x8c1f2a80
 */
u32 FUN_8c1f2a80(u32 unused_a0, char *a1) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    char *pcVar4;
    char *unaff_r13;
    int unaff_r14;
    char in_T;

    pcVar4 = a1;
    if (in_T != '\0') {
        do {
            if (*unaff_r13 == '\0') {
                if (*pcVar4 == '\0') {
                    return 1;
                }
                return 0;
            }
            cVar1 = *unaff_r13;
            unaff_r13 = unaff_r13 + 1;
            uVar2 = toupper((int)cVar1);
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            uVar3 = toupper((int)cVar1);
            if ((char)uVar2 != (char)uVar3) {
                return 0;
            }
            unaff_r14 = unaff_r14 + -1;
        } while (0 < unaff_r14);
    }
    return 1;
}

/*
 * FUN_8c1f2acc  0x8c1f2acc
 */
u32 FUN_8c1f2acc(char *a0, char *a1) {
    char cVar1;
    char cVar2;

    do {
        if (*a0 == '\0') {
            if (*a1 != '\0') {
                return 0;
            }
            return 1;
        }
        cVar1 = *a1;
        a1 = a1 + 1;
        cVar2 = *a0;
        a0 = a0 + 1;
    } while (cVar2 == cVar1);
    return 0;
}

/*
 * FUN_8c1f2ae2  0x8c1f2ae2
 * called by: FUN_8c1f2cce
 */
u32 FUN_8c1f2ae2(char *a0, char *a1) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    char *pcVar4;

    pcVar4 = a1;
    do {
        if (*a0 == '\0') {
            if (*pcVar4 != '\0') {
                return 0;
            }
            return 1;
        }
        cVar1 = *a0;
        a0 = a0 + 1;
        uVar2 = toupper((int)cVar1);
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        uVar3 = toupper((int)cVar1);
    } while ((char)uVar2 == (char)uVar3);
    return 0;
}

/*
 * FUN_8c1f2ae6  0x8c1f2ae6
 */
u32 FUN_8c1f2ae6(u32 unused_a0, char *a1) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    char *pcVar4;
    char *unaff_r14;

    pcVar4 = a1;
    do {
        if (*unaff_r14 == '\0') {
            if (*pcVar4 != '\0') {
                return 0;
            }
            return 1;
        }
        cVar1 = *unaff_r14;
        unaff_r14 = unaff_r14 + 1;
        uVar2 = toupper((int)cVar1);
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        uVar3 = toupper((int)cVar1);
    } while ((char)uVar2 == (char)uVar3);
    return 0;
}

/*
 * FUN_8c1f2b1c  0x8c1f2b1c
 * called by: FUN_8c1f2d3e, FUN_8c1f2e3e
 */
int FUN_8c1f2b1c(char *a0, char *a1) {
    char *pcVar1;
    int iVar2;

    iVar2 = 0;
    do {
        pcVar1 = a1;
        if (*a0 == '\0') {
            return iVar2;
        }
        for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
            if (*a0 == *pcVar1) {
                return iVar2;
            }
        }
        iVar2 = iVar2 + 1;
        a0 = a0 + 1;
    } while (true);
}

/*
 * FUN_8c1f2b42  0x8c1f2b42
 * called by: FUN_8c1f2b68, FUN_8c1f2b70, FUN_8c1f2cce
 */
u32 FUN_8c1f2b42(char *a0) {
    u32 uVar1;
    u32 uVar2;

    uVar2 = (u32)0xda;
    for (; *a0 != '\0'; a0 = a0 + 1) {
        uVar1 = toupper((int)*a0);
        uVar2 = uVar2 + (uVar1 & 0xff);
    }
    return uVar2 >> 2 & 0xff;
}

/*
 * FUN_8c1f2b68  0x8c1f2b68
 * called by: FUN_8c1f2bfe
 */
u32 FUN_8c1f2b68(u8 *a0, int a1) {
    u32 uVar1;
    u32 uVar2;
    int ar5_00;

    if (*a0 < 0x22) {
        uVar1 = 0;
    } else {
        bcopy(a0 + 2, a1, 4);
        bcopy(a0 + 10, a1 + 4, 4);
        *(u8 *)(a1 + 8) = a0[0x19];
        uVar1 = (u32)a0[0x20];
        if ((*(u8 *)(a1 + 8) & 2) == 0) {
            uVar1 = uVar1 - 2;
        }
        ar5_00 = a1 + 10;
        bcopy(a0 + 0x21, ar5_00, uVar1);
        *(u8 *)(uVar1 + a1 + 10) = 0;
        if ((*(u8 *)(a1 + 8) & 2) != 0) {
            ar5_00 = 0x2e;
            if (*(char *)(a1 + 10) == '\0') {
                *(u8 *)(a1 + 10) = 0x2e;
            } else if (*(char *)(a1 + 10) == '\x01') {
                *(u8 *)(a1 + 10) = 0x2e;
                *(u8 *)(a1 + 0xb) = 0x2e;
                *(u8 *)(a1 + 0xc) = 0;
            }
        }
        uVar2 = FUN_8c1f2b42(a1 + 10);
        *(char *)(a1 + 9) = (char)uVar2;
        uVar1 = (u32)*a0;
    }
    return uVar1;
}

/*
 * FUN_8c1f2b70  0x8c1f2b70
 */
u32 FUN_8c1f2b70(u32 unused_a0, int a1) {
    u32 uVar1;
    u32 uVar2;
    int in_r2;
    int ar5_00;
    u8 *unaff_r13;

    if ((int)(u32)*unaff_r13 < in_r2) {
        uVar1 = 0;
    } else {
        bcopy(unaff_r13 + 2, a1, 4);
        bcopy(unaff_r13 + 10, a1 + 4, 4);
        *(u8 *)(a1 + 8) = unaff_r13[0x19];
        uVar1 = (u32)unaff_r13[0x20];
        if ((*(u8 *)(a1 + 8) & 2) == 0) {
            uVar1 = uVar1 - 2;
        }
        ar5_00 = a1 + 10;
        bcopy(unaff_r13 + 0x21, ar5_00, uVar1);
        *(u8 *)(uVar1 + a1 + 10) = 0;
        if ((*(u8 *)(a1 + 8) & 2) != 0) {
            ar5_00 = 0x2e;
            if (*(char *)(a1 + 10) == '\0') {
                *(u8 *)(a1 + 10) = 0x2e;
            } else if (*(char *)(a1 + 10) == '\x01') {
                *(u8 *)(a1 + 10) = 0x2e;
                *(u8 *)(a1 + 0xb) = 0x2e;
                *(u8 *)(a1 + 0xc) = 0;
            }
        }
        uVar2 = FUN_8c1f2b42(a1 + 10);
        *(char *)(a1 + 9) = (char)uVar2;
        uVar1 = (u32)*unaff_r13;
    }
    return uVar1;
}

/*
 * FUN_8c1f2bfe  0x8c1f2bfe
 * called by: FUN_8c1f1a7c, FUN_8c1f1d8c, FUN_8c1f1eaa, FUN_8c1f1ffa, FUN_8c1f2008
 */
u32 FUN_8c1f2bfe(char *a0, int a1, int *a2, int a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *a5;
    char *unaff_r13;
    int iVar5;
    int iStack_2c;

    a5 = a2 + 4;
    if (a2[2] != a1) {
        iVar5 = 0;
        iVar2 = (int)0x800;
        a2[2] = a1;
        iVar3 = a2[1];
        iStack_2c = a1;
        for (iVar4 = a3; 0 < iVar4; iVar4 = iVar4 - iVar2) {
            iVar1 = FUN_8c1f19ec(iStack_2c, 1, a0);
            if (iVar1 != 0) {
                a2[2] = 0;
                return iVar1;
            }
            unaff_r13 = a0;
            if (iVar3 <= iVar5)
                break;
            while (iVar1 = FUN_8c1f2b68(unaff_r13, a5), iVar1 != 0) {
                if ((iVar5 == 0) && (a5[1] != iVar4)) {
                    iVar4 = a5[1];
                }
                unaff_r13 = unaff_r13 + iVar1;
                a5 = a5 + 0xb;
                iVar5 = iVar5 + 1;
                if ((a0 + iVar2 <= unaff_r13) || (iVar3 <= iVar5))
                    break;
            }
            if (iVar3 <= iVar5)
                break;
            iStack_2c = iStack_2c + 1;
        }
        *a2 = iVar5;
        if (((iVar5 == iVar3) && (iVar4 != 0)) &&
            ((iVar4 != iVar2 || ((unaff_r13 < a0 + iVar2 && (*unaff_r13 != '\0')))))) {
            a2[2] = 0;
            return 0xfffffff4;
        }
    }
    return 0;
}

/*
 * FUN_8c1f2cce  0x8c1f2cce
 * called by: FUN_8c1f1ffa, FUN_8c1f2008, FUN_8c1f2172, FUN_8c1f217a, FUN_8c1f222c, FUN_8c1f2236
 */
u32 FUN_8c1f2cce(u32 a0, int *a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int a6;
    int iVar3;
    int iVar4;
    int *piVar5;

    piVar5 = a1 + 4;
    iVar3 = *a1;
    a6 = a2;
    uVar1 = FUN_8c1f2b42(a0);
    iVar4 = 0;
    if (0 < iVar3) {
        do {
            if ((u32) * (u8 *)((int)piVar5 + 9) == (uVar1 & 0xff)) {
                if (a2 == 1) {
                    iVar2 = func_0x8c1f2ac0(a0, (int)piVar5 + 10, a6, a3);
                } else {
                    iVar2 = FUN_8c1f2ae2(a0, (int)piVar5 + 10);
                }
                if (iVar2 == 1) {
                    return iVar4 + 1;
                }
            }
            iVar4 = iVar4 + 1;
            piVar5 = piVar5 + 0xb;
        } while (iVar4 < iVar3);
    }
    return 0;
}

/*
 * FUN_8c1f2d3e  0x8c1f2d3e
 * called by: FUN_8c1f1ffa, FUN_8c1f2008
 */
u32 FUN_8c1f2d3e(int a0, int a1, int a2, int a3) {
    u32 uVar1;
    u16 *ar5_00;
    int iVar2;
    u32 a6;
    u32 a6_00;
    u32 uVar3;
    u16 *a5;
    u8 *ar5_01;
    u8 *ar4_00;
    u8 *ain0;
    u16 auStack_34[2];
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    u32 uStack_24;

    ar4_00 = (u8 *)(a0 + 0x800);
    a6_00 = 0;
    a5 = (u16 *)(a3 + 1);
    uStack_24 = 1;
    uVar3 = 1;
    iStack_2c = 0;
    ain0 = ar4_00;
    iStack_30 = a1;
    iStack_28 = a2;
    do {
        if ((ain0 <= ar4_00) || (ar5_01 = ar4_00, ain0 <= ar4_00 + (u32)*ar4_00 + (*ar4_00 & 1) + 8)) {
            iVar2 = (a0 - (int)ar4_00) + 0x800;
            ar5_01 = (u8 *)(a0 - iVar2);
            bcopy(ar4_00, ar5_01, iVar2);
            iVar2 = FUN_8c1f19ec(iStack_30, 1, a0);
            if (iVar2 != 0) {
                return 0;
            }
            iStack_30 = iStack_30 + 1;
        }
        ar5_00 = auStack_34;
        a6 = 2;
        bcopy(ar5_01 + 6, ar5_00, 2);
        if ((auStack_34[0] == uStack_24) &&
            ((uVar3 == 1 || ((*ar5_01 == a6_00 &&
                              (ar5_00 = a5, a6 = a6_00, iVar2 = FUN_8c1f2a74(ar5_01 + 8, a5, a6_00), iVar2 != 0)))))) {
            a5 = (u16 *)((int)a5 + a6_00);
            uStack_24 = uVar3;
            if ((char)*a5 == '\0') {
                uVar1 = read_u32_le(ar5_01 + 2);
                return uVar1;
            }
            if (uVar3 != 1) {
                a5 = (u16 *)((int)a5 + 1);
            }
            a6_00 = FUN_8c1f2b1c(a5, &g_8c26c560);
        }
        uVar3 = uVar3 + 1;
        iVar2 = (*ar5_01 & 1) + (u32)*ar5_01 + 8;
        iStack_2c = iStack_2c + iVar2;
        ar4_00 = ar5_01 + iVar2;
    } while (iStack_2c < iStack_28);
    return 0;
}

/*
 * FUN_8c1f2e3e  0x8c1f2e3e
 * called by: FUN_8c1f1ffa, FUN_8c1f2008
 */
u32 FUN_8c1f2e3e(int a0, int a1, int a2, int a3, char *s0) {
    char cVar1;
    bool bVar2;
    u32 uVar3;
    u32 uVar4;
    char *pcVar5;
    char *a5;
    int iVar6;
    u32 a6;
    u32 uVar7;
    u8 *ar5_00;
    u8 *pbVar8;
    u8 *ar4_00;
    u32 uStack_44;
    u16 auStack_3c[2];
    int iStack_38;
    int iStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    int iStack_28;
    u32 uStack_24;

    bVar2 = true;
    uStack_44 = 0;
    pcVar5 = s0;
    while (cVar1 = *pcVar5, pcVar5 = pcVar5 + 1, cVar1 != '\0') {
        uStack_44 = uStack_44 + 1;
    }
    pcVar5 = (char *)(a3 + 1);
    uVar7 = 1;
    uStack_24 = 1;
    iStack_34 = 0;
    pbVar8 = (u8 *)(a0 + 0x800);
    uStack_30 = 0;
    ar4_00 = pbVar8;
    iStack_38 = a1;
    iStack_28 = a2;
    do {
        if ((pbVar8 <= ar4_00) || (ar5_00 = ar4_00, pbVar8 <= ar4_00 + (u32)*ar4_00 + (*ar4_00 & 1) + 8)) {
            iVar6 = (a0 - (int)ar4_00) + 0x800;
            ar5_00 = (u8 *)(a0 - iVar6);
            bcopy(ar4_00, ar5_00, iVar6);
            iVar6 = FUN_8c1f19ec(iStack_38, 1, a0);
            if (iVar6 != 0) {
                return 0;
            }
            iStack_38 = iStack_38 + 1;
        }
        bcopy(ar5_00 + 6, auStack_3c, 2);
        uVar3 = uStack_24;
        if ((auStack_3c[0] == uStack_24) && (uVar3 = uVar7, uVar7 != 1)) {
            if (bVar2) {
                uStack_2c = uStack_44;
                a5 = s0;
            } else {
                uStack_2c = uStack_30;
                a5 = pcVar5;
            }
            uVar3 = uStack_24;
            if ((*ar5_00 == uStack_2c) &&
                (a6 = uStack_2c, iVar6 = FUN_8c1f2a74(ar5_00 + 8, a5, uStack_2c), uVar3 = uStack_24, iVar6 != 0)) {
                if (!bVar2) {
                    pcVar5 = pcVar5 + uStack_30;
                }
                if (*pcVar5 == '\0') {
                    uVar4 = read_u32_le(ar5_00 + 2);
                    return uVar4;
                }
                if (bVar2) {
                    bVar2 = false;
                } else if (uVar7 != 1) {
                    pcVar5 = pcVar5 + 1;
                }
                uStack_30 = FUN_8c1f2b1c(pcVar5, &g_8c26c560);
                uVar3 = uVar7;
            }
        }
        uStack_24 = uVar3;
        uVar7 = uVar7 + 1;
        iVar6 = (*ar5_00 & 1) + (u32)*ar5_00 + 8;
        iStack_34 = iStack_34 + iVar6;
        ar4_00 = ar5_00 + iVar6;
        if (iStack_28 <= iStack_34) {
            return 0;
        }
    } while (true);
}

/*
 * FUN_8c1f2f98  0x8c1f2f98
 * called by: FUN_8c1f1a7c, FUN_8c1f1d8c, FUN_8c1f1eaa, FUN_8c1f2356, FUN_8c1f31c6, FUN_8c1f31da, FUN_8c1f35ba,
 * FUN_8c1f367a (+1 more)
 */
u32 FUN_8c1f2f98(int *a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    u32 uVar6;
    int iVar7;
    code *pcVar8;

    puVar1 = (&sh4_tmu_1f88e6);
    pcVar8 = FUN_8c1f302a;
    iVar7 = a0[6];
    uVar4 = sh4_tmu_1f88e6(FUN_8c1f302a);
    uVar3 = 0xee6b28;
    puVar2 = (&int_diff);
    do {
        (**(code **)(*(int *)(*a0 + 0x3c) + 0x48))();
        iVar5 = gdfs_get_stat_like(a0);
        if (iVar5 == 0) {
            return 0xffffffe0;
        }
        if (iVar5 == 1) {
            return 0;
        }
        if (((iVar5 != 2) && (iVar5 != 3)) && (iVar5 != 4)) {
            if ((iVar5 != 5) && (iVar5 != 0x40)) {
                return 0xffffffe7;
            }
            return (int)*(short *)((int)a0 + 0x52);
        }
        if (iVar7 != a0[6]) {
            uVar4 = (*(code *)puVar1)(iVar5, pcVar8);
            iVar7 = a0[6];
        }
        a1 = (*(code *)puVar1)();
        uVar6 = (*(code *)puVar2)(uVar4);
    } while (uVar6 <= uVar3);
    return 0xffffffeb;
}

/*
 * FUN_8c1f2f9c  0x8c1f2f9c
 */
u32 FUN_8c1f2f9c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 uVar3;
    u32 a4;
    int a4_00;
    int iVar4;
    int *unaff_r14;

    puVar1 = (&sh4_tmu_1f88e6);
    iVar4 = unaff_r14[6];
    a4 = sh4_tmu_1f88e6(a0);
    uVar3 = 0xee6b28;
    puVar2 = (&int_diff);
    do {
        (**(code **)(*(int *)(*unaff_r14 + 0x3c) + 0x48))(a0, a1, a2, a3);
        a4_00 = gdfs_get_stat_like(unaff_r14);
        if (a4_00 == 0) {
            return 0xffffffe0;
        }
        if (a4_00 == 1) {
            return 0;
        }
        if (((a4_00 != 2) && (a4_00 != 3)) && (a4_00 != 4)) {
            if ((a4_00 != 5) && (a4_00 != 0x40)) {
                return 0xffffffe7;
            }
            return (int)*(short *)((int)unaff_r14 + 0x52);
        }
        if (iVar4 != unaff_r14[6]) {
            a4 = (*(code *)puVar1)(a4_00, a1, a2, a3);
            iVar4 = unaff_r14[6];
        }
        a1 = (*(code *)puVar1)(a4_00, a1, a2, a3);
        a0 = (*(code *)puVar2)(a4, a1, a2, a3);
    } while (a0 <= uVar3);
    return 0xffffffeb;
}

/*
 * FUN_8c1f302a  0x8c1f302a
 * called by: FUN_8c1f19ec, FUN_8c1f1a7c, FUN_8c1f1d8c, FUN_8c1f1eaa, FUN_8c1f2356, FUN_8c1f2418, FUN_8c1f24e8,
 * FUN_8c1f25f4 (+4 more)
 */
u32 FUN_8c1f302a(int *a0, int a1, int a2, int a3) {
    int iVar1;

    if ((a0 != NULL) && (*(int **)(*a0 + 0x1c) != a0)) {
        a0[1] = a1;
        iVar1 = (int)0x7ff;
        a0[2] = a2;
        a0[3] = a3;
        a0[4] = a3 + iVar1 >> 0xb;
        a0[5] = 0;
        a0[6] = 0;
        a0[7] = 0;
        a0[8] = 0;
        a0[0xf] = 0;
        a0[0x11] = 0;
        *(u16 *)(a0 + 0x12) = 0;
        *(u16 *)((int)a0 + 0x4a) = 0;
        *(u16 *)(a0 + 0x13) = 1;
        *(u16 *)(a0 + 0x14) = 0;
        *(u16 *)((int)a0 + 0x52) = 0;
        return a0;
    }
    return 0;
}

/*
 * set_fields_0_4_8_1f3078  0x8c1f3078
 * stores +0x0, +0x4, +0x8
 * called by: FUN_8c01f6dc, FUN_8c1f1d8c
 */
u32 *set_fields_0_4_8_1f3078(u32 *a0, u32 a1) {
    *a0 = 0;
    a0[1] = a1;
    a0[2] = 0;
    return a0;
}

/*
 * gdfs_close_like  0x8c1f309c
 * closes a file handle: aborts a transfer in progress (status 2..4) and clears +0x4c (probably gdFsClose)
 * called by: ADXSTM_OpenFname, FUN_8c1f1eaa, FUN_8c1f1f98, FUN_8c1f1fa0, FUN_8c212440, FUN_8c263446, FUN_8c26344a
 */
u32 gdfs_close_like(int a0, u32 a1, u32 a2, u32 a3) {
    short sVar1;
    u32 in_r0;

    if ((a0 != 0) && (in_r0 = 0x4c, *(short *)(a0 + 0x4c) != 0)) {
        sVar1 = *(short *)(a0 + 0x50);
        if ((sVar1 == 2) || ((sVar1 == 3 || (sVar1 == 4)))) {
            FUN_8c1f367a(a0, a1, a2, a3);
        }
        in_r0 = 0x4c;
        *(u16 *)(a0 + 0x4c) = 0;
    }
    return in_r0;
}

/*
 * FUN_8c1f30a0  0x8c1f30a0
 */
u32 FUN_8c1f30a0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    short sVar1;
    u32 in_r0;
    int unaff_r14;

    if ((unaff_r14 != 0) && (in_r0 = 0x4c, *(short *)(unaff_r14 + 0x4c) != 0)) {
        sVar1 = *(short *)(unaff_r14 + 0x50);
        if ((sVar1 == 2) || ((sVar1 == 3 || (sVar1 == 4)))) {
            FUN_8c1f367a(unaff_r14, a1, a2, a3);
        }
        in_r0 = 0x4c;
        *(u16 *)(unaff_r14 + 0x4c) = 0;
    }
    return in_r0;
}

/*
 * FUN_8c1f30d4  0x8c1f30d4
 * called by: ADXSTM_OpenFname, FUN_8c259be8
 */
u32 FUN_8c1f30d4(int a0, u32 *a1) {
    if ((a0 != 0) && (*(short *)(a0 + 0x4c) != 0)) {
        *a1 = *(u32 *)(a0 + 0xc);
        return 1;
    }
    return 0;
}

/*
 * FUN_8c1f30ee  0x8c1f30ee
 * called by: FUN_8c212440
 */
u32 FUN_8c1f30ee(int a0, u32 *a1) {
    if ((a0 != 0) && (*(short *)(a0 + 0x4c) != 0)) {
        *a1 = *(u32 *)(a0 + 0x10);
        return 1;
    }
    return 0;
}

/*
 * FUN_8c1f3122  0x8c1f3122
 * called by: FUN_8c259c48, FUN_8c259e80, FUN_8c263534
 */
u32 FUN_8c1f3122(int a0, int a1, int a2) {
    if ((a0 == 0) || (*(short *)(a0 + 0x4c) == 0)) {
        return 0xfffffff6;
    }
    if (a2 != 0) {
        if (a2 == 1) {
            a1 = *(int *)(a0 + 0x14) + a1;
        } else {
            if (a2 != 2) {
                return 0xfffffff0;
            }
            a1 = a1 + *(int *)(a0 + 0x10);
        }
    }
    if ((-1 < a1) && (a1 <= *(int *)(a0 + 0x10))) {
        *(int *)(a0 + 0x14) = a1;
        return 0;
    }
    return 0xffffffef;
}

/*
 * FUN_8c1f316e  0x8c1f316e
 * called by: FUN_8c2634dc, FUN_8c2634e0
 */
u32 FUN_8c1f316e(int a0) {
    if ((a0 != 0) && (*(short *)(a0 + 0x4c) != 0)) {
        return *(u32 *)(a0 + 0x14);
    }
    return 0;
}

/*
 * FUN_8c1f31c6  0x8c1f31c6
 * called by: FUN_8c1f19ec, FUN_8c212440, FUN_8c259c48, FUN_8c259e80
 */
int FUN_8c1f31c6(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int ar5_00;
    int iVar3;
    u32 ar6_00;
    int iVar4;
    int iVar5;

    iVar1 = 0xc350;
    iVar2 = 0;
    iVar4 = (int)0x4e20;
    ar5_00 = a1;
    ar6_00 = a2;
    for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        if ((a2 & 0x1f) == 0) {
            ar5_00 = a1;
            ar6_00 = a2;
            iVar2 = FUN_8c1f332c(a0, a1, a2);
        } else {
            ar5_00 = a1;
            ar6_00 = a2;
            iVar2 = FUN_8c1f3254(a0, a1, a2);
        }
        if (((iVar2 != 0) || (a1 == 0)) || (iVar3 = iVar1, *(int *)(a0 + 0x10) <= *(int *)(a0 + 0x14)))
            break;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        }
        ar5_00 = 0;
    }
    if (iVar5 == iVar4) {
        iVar2 = -0x15;
    } else if (-1 < iVar2) {
        iVar2 = FUN_8c1f2f98(a0, ar5_00, ar6_00, a3);
    }
    return iVar2;
}

/*
 * FUN_8c1f31da  0x8c1f31da
 */
int FUN_8c1f31da(u32 unused_a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 unaff_r11;
    int unaff_r12;
    int iVar5;
    int unaff_r14;
    char in_T;

    iVar1 = 0xc350;
    iVar2 = 0;
    iVar4 = (int)0x4e20;
    for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        a1 = unaff_r12;
        a2 = unaff_r11;
        if (in_T == '\0') {
            iVar2 = FUN_8c1f3254(unaff_r14, unaff_r12, unaff_r11);
        } else {
            iVar2 = FUN_8c1f332c(unaff_r14, unaff_r12, unaff_r11);
        }
        if (((iVar2 != 0) || (unaff_r12 == 0)) ||
            (iVar3 = iVar1, *(int *)(unaff_r14 + 0x10) <= *(int *)(unaff_r14 + 0x14)))
            break;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        }
        a1 = 0;
    }
    if (iVar5 == iVar4) {
        iVar2 = -0x15;
    } else if (-1 < iVar2) {
        iVar2 = FUN_8c1f2f98(unaff_r14, a1, a2, a3);
    }
    return iVar2;
}

/*
 * FUN_8c1f3254  0x8c1f3254
 * called by: FUN_8c1f31c6, FUN_8c1f31da
 */
u32 FUN_8c1f3254(int *a0, int a1, u32 a2) {
    int iVar1;
    int iVar2;
    u32 a7;
    int a4;

    if ((a0 == NULL) || ((short)a0[0x13] == 0)) {
        return 0xfffffff6;
    }
    if (*(int *)(*a0 + 0x1c) == 0) {
        a4 = a0[5] + a0[2];
        iVar2 = a0[2] + a0[4];
        if (a4 < iVar2) {
            if (iVar2 < a1 + a4) {
                a1 = iVar2 - a4;
            }
            if (a1 != 0) {
                a7 = 0;
                iVar2 = a1;
                iVar1 = (**(code **)(*(int *)(*a0 + 0xc) + 4))(a4, a1, a2, 0);
                if (iVar1 == 0) {
                    *(u16 *)(a0 + 0x14) = 1;
                    return 0;
                }
                a0[0xf] = iVar1;
                a0[7] = a1;
                *(u16 *)(a0 + 0x14) = 2;
                *(u16 *)((int)a0 + 0x4a) = 1;
                *(u16 *)(a0 + 0x12) = 1;
                a0[6] = 0;
                *(int **)(*a0 + 0x1c) = a0;
                (**(code **)(*(int *)(*a0 + 0xc) + 0x40))(a4, iVar2, a2, a7);
                return a1;
            }
        }
        a0[6] = 0;
        *(u16 *)(a0 + 0x14) = 1;
    }
    return 0;
}

/*
 * FUN_8c1f332c  0x8c1f332c
 * called by: FUN_8c1f31c6, FUN_8c1f31da, FUN_8c2635a4
 */
u32 FUN_8c1f332c(int *a0, int a1, u32 a2) {
    int iVar1;
    int iVar2;
    int a7;
    int a4;

    if ((a0 == NULL) || ((short)a0[0x13] == 0)) {
        return 0xfffffff6;
    }
    if (*(int *)(*a0 + 0x1c) == 0) {
        if ((a2 & 0x1f) != 0) {
            return 0xfffffff2;
        }
        a4 = a0[5] + a0[2];
        iVar2 = a0[2] + a0[4];
        if (a4 < iVar2) {
            if (iVar2 < a1 + a4) {
                a1 = iVar2 - a4;
            }
            if (a1 == 0) {
                a0[6] = 0;
                *(u16 *)(a0 + 0x14) = 1;
                return 0;
            }
            a7 = (int)*(short *)((int)a0 + 0x4e);
            iVar2 = a1;
            iVar1 = (**(code **)(*(int *)(*a0 + 0xc) + 4))(a4, a1, a2, a7);
            if (iVar1 != 0) {
                a0[0xf] = iVar1;
                a0[7] = a1;
                *(u16 *)(a0 + 0x14) = 2;
                *(u16 *)((int)a0 + 0x4a) = 1;
                *(u16 *)(a0 + 0x12) = 1;
                a0[6] = 0;
                *(int **)(*a0 + 0x1c) = a0;
                (**(code **)(*(int *)(*a0 + 0xc) + 0x40))(a4, iVar2, a2, a7);
                return a1;
            }
            *(u16 *)(a0 + 0x14) = 1;
        } else {
            a0[6] = 0;
            *(u16 *)(a0 + 0x14) = 1;
        }
    }
    return 0;
}

/*
 * FUN_8c1f3416  0x8c1f3416
 */
u32 FUN_8c1f3416(int *a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int a4;
    int iVar2;

    if ((a0 == NULL) || ((short)a0[0x13] == 0)) {
        return 0xfffffff6;
    }
    if (*(int *)(*a0 + 0x1c) == 0) {
        a4 = a0[5] + a0[2];
        iVar2 = a0[2] + a0[4];
        if (a4 < iVar2) {
            if (iVar2 < a1 + a4) {
                a1 = iVar2 - a4;
            }
            if (a1 == 0) {
                a0[6] = 0;
                *(u16 *)(a0 + 0x14) = 1;
                return 0;
            }
            iVar2 = a1;
            iVar1 = (**(code **)(*(int *)(*a0 + 0xc) + 8))(a4, a1, a2, a3);
            if (iVar1 != 0) {
                *(int **)(*a0 + 0x1c) = a0;
                a0[0xf] = iVar1;
                a0[7] = a1;
                *(u16 *)(a0 + 0x14) = 2;
                *(u16 *)((int)a0 + 0x4a) = 1;
                *(u16 *)(a0 + 0x12) = 4;
                a0[8] = 0;
                a0[6] = 0;
                (**(code **)(*(int *)(*a0 + 0xc) + 0x40))(a4, iVar2, a2, a3);
                return a1;
            }
            *(u16 *)(a0 + 0x14) = 1;
        } else {
            a0[6] = 0;
            *(u16 *)(a0 + 0x14) = 1;
        }
    }
    return 0;
}

/*
 * FUN_8c1f34f4  0x8c1f34f4
 */
u32 FUN_8c1f34f4(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 a6;

    if ((a0 == NULL) || ((short)a0[0x13] == 0)) {
        uVar1 = 0xfffffff6;
    } else if ((a2 & 0x1f) == 0) {
        if ((a1 & 0x1f) == 0) {
            if ((short)a0[0x12] == 4) {
                a6 = a1;
                iVar2 = (**(code **)(*(int *)(*a0 + 0xc) + 0xc))(a0[0xf], a2, a1, a3);
                if (iVar2 == 0) {
                    *(u16 *)((int)a0 + 0x4a) = 1;
                    a0[8] = a1;
                    a0[6] = 0;
                    (**(code **)(*(int *)(*a0 + 0xc) + 0x40))(0, a2, a6, a3);
                    uVar1 = 0;
                } else if (iVar2 == -1) {
                    uVar1 = 0xffffffe8;
                } else {
                    uVar1 = 0xfffffff3;
                }
            } else {
                uVar1 = 0xffffffec;
            }
        } else {
            uVar1 = 0xfffffff1;
        }
    } else {
        uVar1 = 0xfffffff2;
    }
    return uVar1;
}

/*
 * FUN_8c1f35ba  0x8c1f35ba
 */
u32 FUN_8c1f35ba(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int a4;

    if ((a0 == NULL) || ((short)a0[0x13] == 0)) {
        uVar1 = 0xfffffff6;
    } else {
        if (*(int *)(*a0 + 0x1c) == 0) {
            a4 = a0[2] + a0[5];
            iVar2 = (**(code **)(*(int *)(*a0 + 0xc) + 0x18))(a4, a1, a2, a3);
            if (iVar2 != 0) {
                a0[0xf] = iVar2;
                *(u16 *)(a0 + 0x14) = 3;
                *(u16 *)(a0 + 0x12) = 2;
                *(int **)(*a0 + 0x1c) = a0;
                (**(code **)(*(int *)(*a0 + 0xc) + 0x40))(a4, a1, a2, a3);
                uVar1 = FUN_8c1f2f98(a0, a1, a2, a3);
                return uVar1;
            }
        }
        uVar1 = 0xfffffff3;
    }
    return uVar1;
}

/*
 * gdfs_get_stat_like  0x8c1f364c
 * status (+0x50) of an open file handle, -10 when it is not open (probably gdFsGetStat)
 * called by: FUN_8c1f2f98, FUN_8c1f2f9c, FUN_8c259c48, FUN_8c259e80, FUN_8c2635a4, FUN_8c2637ae
 */
u32 gdfs_get_stat_like(int a0) {
    if ((a0 != 0) && (*(short *)(a0 + 0x4c) != 0)) {
        return (int)*(short *)(a0 + 0x50);
    }
    return 0xfffffff6;
}

/*
 * FUN_8c1f367a  0x8c1f367a
 * called by: FUN_8c1f30a0, FUN_8c263498, gdfs_close_like
 */
u32 FUN_8c1f367a(int *a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;

    puVar1 = (&sh4_tmu_1f88e6);
    uVar7 = 0;
    if ((a0 == NULL) || ((short)a0[0x13] == 0)) {
        uVar7 = 0xfffffff6;
    } else if (((short)a0[0x14] == 2) || ((short)a0[0x14] == 4)) {
        if (*(int **)(*a0 + 0x1c) == a0) {
            uVar3 = sh4_tmu_1f88e6(0);
            while (puVar2 = (&int_diff), a0[0x10] != 1) {
                if (((short)a0[0x14] != 2) && ((short)a0[0x14] != 4))
                    goto LAB_8c1f36d4;
                uVar4 = (*(code *)puVar1)(uVar7);
                uVar6 = (*(code *)puVar2)(uVar3, uVar4);
                if (0xee6b28 < uVar6) {
                    return 0xffffffeb;
                }
                (**(code **)(*(int *)(*a0 + 0x3c) + 0x48))();
            }
            uVar3 = (*(code *)puVar1)(uVar7);
            uVar6 = (u32)0x61b;
            do {
                uVar4 = (*(code *)puVar1)(uVar7);
                uVar5 = (*(code *)puVar2)(uVar3, uVar4);
            } while (uVar5 < uVar6);
            uVar7 = 0xfffffff3;
            if (((short)a0[0x14] == 2) || ((short)a0[0x14] == 4)) {
                if (*(int **)(*a0 + 0x1c) == a0) {
                    (**(code **)(*(int *)(*a0 + 0xc) + 0x14))(a0[0xf]);
                    *(u16 *)(a0 + 0x12) = 3;
                    uVar7 = FUN_8c1f2f98(a0, uVar7, a2, a3);
                } else {
                    uVar7 = 0xfffffff3;
                }
            } else {
                *(u16 *)(a0 + 0x14) = 0;
                uVar7 = 0;
            }
        } else {
            uVar7 = 0xfffffff3;
        }
    } else {
    LAB_8c1f36d4:
        *(u16 *)(a0 + 0x14) = 0;
        uVar7 = 0;
    }
    return uVar7;
}

/*
 * FUN_8c1f3682  0x8c1f3682
 */
u32 FUN_8c1f3682(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 uVar3;
    u32 ar4_00;
    int a4;
    u32 a5;
    u32 uVar4;
    int *unaff_r14;
    char in_T;

    puVar1 = (&sh4_tmu_1f88e6);
    if ((in_T == '\x01') || ((short)unaff_r14[0x13] == 0)) {
        uVar3 = 0xfffffff6;
    } else {
        ar4_00 = (u32)(short)unaff_r14[0x14];
        if ((ar4_00 == 2) || (ar4_00 == 4)) {
            if (*(int **)(*unaff_r14 + 0x1c) == unaff_r14) {
                uVar3 = sh4_tmu_1f88e6(ar4_00);
                while (puVar2 = (&int_diff), unaff_r14[0x10] != 1) {
                    a4 = (int)(short)unaff_r14[0x14];
                    if ((a4 != 2) && (a4 != 4))
                        goto LAB_8c1f36d4;
                    a5 = (*(code *)puVar1)(a4, a1, a2, a3);
                    ar4_00 = (*(code *)puVar2)(uVar3, a5, a2, a3);
                    if (0xee6b28 < ar4_00) {
                        return 0xffffffeb;
                    }
                    a1 = 0xee6b28;
                    (**(code **)(*(int *)(*unaff_r14 + 0x3c) + 0x48))(ar4_00, 0xee6b28, a2, a3);
                }
                uVar3 = (*(code *)puVar1)(ar4_00, a1, a2, a3);
                uVar4 = (u32)0x61b;
                do {
                    a1 = (*(code *)puVar1)(ar4_00, a1, a2, a3);
                    ar4_00 = (*(code *)puVar2)(uVar3, a1, a2, a3);
                } while (ar4_00 < uVar4);
                uVar3 = 0xfffffff3;
                if (((short)unaff_r14[0x14] == 2) || ((short)unaff_r14[0x14] == 4)) {
                    if (*(int **)(*unaff_r14 + 0x1c) == unaff_r14) {
                        (**(code **)(*(int *)(*unaff_r14 + 0xc) + 0x14))(unaff_r14[0xf], 0xfffffff3, a2, a3);
                        *(u16 *)(unaff_r14 + 0x12) = 3;
                        uVar3 = FUN_8c1f2f98(unaff_r14, uVar3, a2, a3);
                    } else {
                        uVar3 = 0xfffffff3;
                    }
                } else {
                    *(u16 *)(unaff_r14 + 0x14) = 0;
                    uVar3 = 0;
                }
            } else {
                uVar3 = 0xfffffff3;
            }
        } else {
        LAB_8c1f36d4:
            *(u16 *)(unaff_r14 + 0x14) = 0;
            uVar3 = 0;
        }
    }
    return uVar3;
}

/*
 * gdfs_get_err_like  0x8c1f37a8
 * +0x52 of an open file handle, 0 when it is not open
 * called by: FUN_8c259c48, FUN_8c259e80
 */
u32 gdfs_get_err_like(int a0) {
    if ((a0 != 0) && (*(short *)(a0 + 0x4c) != 0)) {
        return (int)*(short *)(a0 + 0x52);
    }
    return 0;
}

/*
 * FUN_8c1f38c0  0x8c1f38c0
 */
u32 FUN_8c1f38c0(void) {
    u32 uVar1;

    g_8c2739f0 = &g_8c26c4a4;
    uVar1 = FUN_8c1f1d8c(&g_8c26c4a4);
    return uVar1;
}

/*
 * FUN_8c1f38ca  0x8c1f38ca
 */
u32 FUN_8c1f38ca(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int in_r2;
    u32 in_r3;
    u32 *unaff_r14;

    *unaff_r14 = in_r3;
    uVar1 = (**(code **)(in_r2 + 0xc))(a0, a1, a2, a3, in_r2);
    return uVar1;
}

/*
 * FUN_8c1f38f2  0x8c1f38f2
 * called by: FUN_8c102d40
 */
u32 FUN_8c1f38f2(u32 a0, u32 a1, u32 a2, u32 a3, u32 ain0) {
    if (g_8c2739f0 != 0) {
        ain0 = (**(code **)(g_8c2739f0 + 0x14))();
        g_8c2739f0 = 0;
    }
    return ain0;
}

/*
 * FUN_8c1f38f4  0x8c1f38f4
 */
u32 FUN_8c1f38f4(u32 a0, u32 a1, u32 a2, u32 a3, u32 ain0) {
    int *in_r3;

    if (*in_r3 != 0) {
        ain0 = (**(code **)(*in_r3 + 0x14))(a0, a1, a2, a3);
        g_8c2739f0 = 0;
    }
    return ain0;
}

/*
 * FUN_8c1f3926  0x8c1f3926
 * called by: FUN_8c01f6dc
 */
u32 FUN_8c1f3926(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2739f0 != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1f3932. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(g_8c2739f0 + 0x20))();
        return uVar1;
    }
    return 0;
}

/*
 * FUN_8c1f3952  0x8c1f3952
 * called by: FUN_8c020148
 */
u32 FUN_8c1f3952(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2739f0 != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1f395e. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(g_8c2739f0 + 0x28))();
        return uVar1;
    }
    return 0;
}

/*
 * FUN_8c1f3968  0x8c1f3968
 * called by: FUN_8c2637ca, FUN_8c2637e8, FUN_8c263816
 */
u32 FUN_8c1f3968(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2739f0 != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1f3974. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(g_8c2739f0 + 0x2c))();
        return uVar1;
    }
    return 0;
}

/*
 * FUN_8c1f397e  0x8c1f397e
 * called by: ADXSTM_OpenFname, ADXSTM_OpenFnameRange, FUN_8c212440, FUN_8c259be8
 */
u32 FUN_8c1f397e(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2739f0 != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1f398a. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(g_8c2739f0 + 0x3c))();
        return uVar1;
    }
    return 0;
}

/*
 * FUN_8c1f39ac  0x8c1f39ac
 * called by: ADXSTM_OpenRange
 */
u32 FUN_8c1f39ac(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2739f0 != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1f39ba. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(g_8c2739f0 + 0x44))();
        return uVar1;
    }
    return 0;
}

/*
 * FUN_8c1f39f0  0x8c1f39f0
 * called by: FUN_8c261ae2
 */
u32 FUN_8c1f39f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 ain0) {
    u32 uVar1;

    if (g_8c2739f0 != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1f39fe. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(g_8c2739f0 + 0x48))();
        return uVar1;
    }
    return ain0;
}

/*
 * FUN_8c1f3a34  0x8c1f3a34
 * called by: FUN_8c01f594
 */
u32 FUN_8c1f3a34(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2739f0 != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1f3a42. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(g_8c2739f0 + 0x54))();
        return uVar1;
    }
    return 0;
}

/*
 * FUN_8c1f3a4c  0x8c1f3a4c
 * called by: FUN_8c01f83c
 */
u32 FUN_8c1f3a4c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c2739f0 != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1f3a5a. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(g_8c2739f0 + 0x58))();
        return uVar1;
    }
    return 0;
}

/*
 * syscall_1f3b1c  0x8c1f3b1c
 * called by: FUN_8c1f804e, FUN_8c1f8094
 */
u32 syscall_1f3b1c(u32 a0) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f3b22. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000b0)(0x0);
    return uVar1;
}

/*
 * syscall_1f3b44  0x8c1f3b44
 * called by: FUN_8c1f804e, FUN_8c1f8094, FUN_8c1f97b4
 */
u32 syscall_1f3b44(u32 a0) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f3b4a. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000b0)(0x3);
    return uVar1;
}

/*
 * FUN_8c1f3b5c  0x8c1f3b5c
 * called by: FUN_8c01a3e4
 */
u32 FUN_8c1f3b5c(int a0) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = FUN_8c1efd26((u32)(u8)(&g_8c26c69c)[a0]);
    iVar2 = FUN_8c1efd26(a0);
    if ((((a0 == 2) || (a0 == 8)) || (a0 == 0xe)) || (a0 == 0x14)) {
        iVar3 = 1;
    } else {
        iVar3 = 0;
    }
    return (u32)(u8)(&g_8c26c674)[(u32) * (u8 *)(iVar1 + 0x12 + iVar3) * 4 + (u32) * (u8 *)(iVar2 + 0x12)];
}

/*
 * FUN_8c1f3c78  0x8c1f3c78
 */
u32 FUN_8c1f3c78(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = FUN_8c1f3d28(a0);
    if (iVar1 == 0) {
        uVar2 = 0xfffffffe;
    } else {
        FUN_8c1f3d9c((u32)(u8)(&g_8c26c684)[a0] * 0xc0 + 0x8c470fb8, a1, a2);
        iVar1 = FUN_8c1efeac(a0, 4, 0, 0);
        if (iVar1 < 0) {
            uVar2 = 0xffffffff;
        } else {
            uVar2 = 0;
        }
    }
    return uVar2;
}

/*
 * FUN_8c1f3cde  0x8c1f3cde
 */
u32 FUN_8c1f3cde(u32 a0) {
    int iVar1;

    iVar1 = FUN_8c1f3d28(a0);
    if (iVar1 == 0) {
        return 0xfffffffe;
    }
    iVar1 = FUN_8c1efeac(a0, 4, 0, 0);
    if (iVar1 < 0) {
        return 0xffffffff;
    }
    return 0;
}

/*
 * FUN_8c1f3d28  0x8c1f3d28
 * called by: FUN_8c01c8c8, FUN_8c1f3c78, FUN_8c1f3cde
 */
u32 FUN_8c1f3d28(u32 a0) {
    int *ar5_00;
    int iVar1;
    short sStack_10;
    u16 uStack_e;
    short sStack_c;
    char cStack_a;
    char cStack_9;

    ar5_00 = (int *)FUN_8c1efd26(a0);
    iVar1 = FUN_8c1f0142(&sStack_10, ar5_00);
    if ((((-1 < iVar1) && (*ar5_00 == 0xe)) && (sStack_10 == 1)) &&
        ((((u32)uStack_e == (int)0xc0 && (sStack_c == 1)) && ((cStack_a == '\0' && (cStack_9 == '\0')))))) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c1f3d9c  0x8c1f3d9c
 * called by: FUN_8c1f3c78
 * decompiler: Switch with 1 destination removed at 0x8c1f3db0
 * decompiler: Switch with 1 destination removed at 0x8c1f3db6
 * decompiler: Switch with 1 destination removed at 0x8c1f3dbc
 * decompiler: Switch with 1 destination removed at 0x8c1f3dc2
 */
u32 FUN_8c1f3d9c(u8 *a0, char *a1, int a2) {
    char cVar1;
    u8 bVar2;
    u32 uVar3;
    int iVar4;
    u8 *puVar5;
    u8 *puVar6;
    u8 *pbVar7;
    u8 *pbVar8;
    u8 bVar9;
    u32 uVar10;
    int iVar11;
    int iVar12;

    if (a2 == 1) {
        iVar4 = 0x20;
        pbVar8 = a0 + 5;
        do {
            iVar12 = 6;
            do {
                pbVar7 = pbVar8;
                bVar9 = 0;
                bVar2 = 1;
                iVar11 = 8;
                do {
                    cVar1 = *a1;
                    a1 = a1 + 1;
                    if (((int)cVar1 & 8U) != 0) {
                        bVar9 = bVar9 | bVar2;
                    }
                    bVar2 = bVar2 << 1;
                    iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                *pbVar7 = bVar9;
                iVar12 = iVar12 + -1;
                pbVar8 = pbVar7 + -1;
            } while (iVar12 != 0);
            iVar4 = iVar4 + -1;
            pbVar8 = pbVar7 + 0xb;
        } while (iVar4 != 0);
        return (int)cVar1;
    }
    if (a2 == 2) {
        iVar4 = 0x20;
        puVar5 = a0 + 0xba;
        do {
            iVar12 = 6;
            do {
                puVar6 = puVar5;
                uVar10 = 0;
                uVar3 = (u32)0x80;
                iVar11 = 8;
                do {
                    cVar1 = *a1;
                    a1 = a1 + 1;
                    if (((int)cVar1 & 8U) != 0) {
                        uVar10 = uVar10 | uVar3;
                    }
                    uVar3 = uVar3 >> 1;
                    iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                *puVar6 = (char)uVar10;
                iVar12 = iVar12 + -1;
                puVar5 = puVar6 + 1;
            } while (iVar12 != 0);
            iVar4 = iVar4 + -1;
            puVar5 = puVar6 + -0xb;
        } while (iVar4 != 0);
        return (int)cVar1;
    }
    if (a2 == 3) {
        iVar4 = 0x20;
        pbVar8 = a0 + 0xc0;
        do {
            iVar12 = 6;
            do {
                bVar9 = 0;
                bVar2 = 1;
                iVar11 = 8;
                do {
                    cVar1 = *a1;
                    a1 = a1 + 1;
                    if (((int)cVar1 & 8U) != 0) {
                        bVar9 = bVar9 | bVar2;
                    }
                    iVar11 = iVar11 + -1;
                    bVar2 = bVar2 << 1;
                } while (iVar11 != 0);
                pbVar8 = pbVar8 + -1;
                *pbVar8 = bVar9;
                iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return (int)cVar1;
    }
    iVar4 = (int)0xc0;
    do {
        uVar10 = 0;
        uVar3 = (u32)0x80;
        iVar12 = 8;
        do {
            cVar1 = *a1;
            a1 = a1 + 1;
            if (((int)cVar1 & 8U) != 0) {
                uVar10 = uVar10 | uVar3;
            }
            uVar3 = uVar3 >> 1;
            iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        *a0 = (char)uVar10;
        iVar4 = iVar4 + -1;
        a0 = a0 + 1;
    } while (iVar4 != 0);
    return (int)cVar1;
}

/*
 * FUN_8c1f3dd8  0x8c1f3dd8
 * called by: FUN_8c1ef78c
 * decompiler: Heritage AFTER dead removal. Example location: r0x8c47267c : 0x8c1f3dfc
 */
u32 FUN_8c1f3dd8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *ar4_00;
    u32 *ar5_00;
    u32 ar6_00;
    u32 *puVar2;
    int *piVar3;

    g_8c4727b4 = 0x8c4716b8;
    ar6_00 = 0x1f;
    uVar1 = a0;
    if ((g_8c47267c & 0x1f) != 0) {
        uVar1 = g_8c47267c + 0x20 & 0xffffffe0;
    }
    g_8c47267c = uVar1;
    uVar1 = a2;
    if ((g_8c472680 & 0x1f) != 0) {
        uVar1 = g_8c472680 + 0x20 & 0xffffffe0;
    }
    g_8c472680 = uVar1;
    g_8c47267c = g_8c47267c | 0xa0000000;
    g_8c472680 = g_8c472680 | 0xa0000000;
    g2dma_1f4794(0xa0000000, 0xffffffe0, 0x1f);
    ar4_00 = &g_8c26c728;
    ar5_00 = &g_8c26c728;
    puVar2 = &g_8c26c728;
    piVar3 = &g_8c26c728;
    do {
        if (*(char *)(g_8c4727b4 + 0xf90 + *piVar3) != '\0') {
            ar4_00 = (u32 *)*puVar2;
            FUN_8c1f55e4(ar4_00);
        }
        piVar3 = piVar3 + 1;
        puVar2 = puVar2 + 1;
    } while (piVar3 < (int *)0x8c26c738);
    FUN_8c1f59c8();
    *(u32 *)(g_8c4727b4 + 0xfc0) = 1;
    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x8c) = 0x6155404f;
    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x10) = 0;
    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x80) = *(u32 *)(g_8c4727b4 + 0x10c0) | *(u32 *)(g_8c4727b4 + 0x10d0);
    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x14) = 1;
    return 0;
}

/*
 * FUN_8c1f3de2  0x8c1f3de2
 */
u32 FUN_8c1f3de2(u32 a0, u32 unused_a1, u32 a2, u32 unused_a3, int ain0) {
    int in_r2;
    int in_r3;
    int iVar1;
    u32 *a4;
    u32 *a5;
    u32 a6;
    u32 *puVar2;
    int *piVar3;
    int *unaff_r14;

    *unaff_r14 = in_r3;
    *(u32 *)(ain0 + in_r2) = a0;
    *(u32 *)(ain0 + 4 + *unaff_r14) = a2;
    a6 = 0x1f;
    if ((*(u32 *)(ain0 + *unaff_r14) & 0x1f) != 0) {
        *(int *)(*unaff_r14 + 0xfc4) = *(int *)(*unaff_r14 + 0xfc4) + 0x20;
        *(u32 *)(*unaff_r14 + 0xfc4) = *(u32 *)(*unaff_r14 + 0xfc4) & 0xffffffe0;
    }
    iVar1 = *unaff_r14;
    if ((*(u32 *)(iVar1 + 0xfc8) & 0x1f) != 0) {
        *(int *)(iVar1 + 0xfc8) = *(int *)(iVar1 + 0xfc8) + 0x20;
        *(u32 *)(*unaff_r14 + 0xfc8) = *(u32 *)(*unaff_r14 + 0xfc8) & 0xffffffe0;
    }
    *(u32 *)(*unaff_r14 + 0xfc4) = *(u32 *)(*unaff_r14 + 0xfc4) | 0xa0000000;
    *(u32 *)(*unaff_r14 + 0xfc8) = *(u32 *)(*unaff_r14 + 0xfc8) | 0xa0000000;
    g2dma_1f4794(0xa0000000, 0xffffffe0, 0x1f);
    a4 = &g_8c26c728;
    a5 = &g_8c26c728;
    puVar2 = &g_8c26c728;
    piVar3 = &g_8c26c728;
    do {
        if (*(char *)(*unaff_r14 + 0xf90 + *piVar3) != '\0') {
            a4 = (u32 *)*puVar2;
            FUN_8c1f55e4(a4);
        }
        piVar3 = piVar3 + 1;
        puVar2 = puVar2 + 1;
    } while (piVar3 < (int *)0x8c26c738);
    FUN_8c1f59c8();
    *(u32 *)(*unaff_r14 + 0xfc0) = 1;
    *(u32 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x8c) = 0x6155404f;
    *(u32 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x10) = 0;
    iVar1 = *unaff_r14;
    *(u32 *)(*(int *)(iVar1 + 0x10f4) + 0x80) = *(u32 *)(iVar1 + 0x10c0) | *(u32 *)(iVar1 + 0x10d0);
    *(u32 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = 1;
    return 0;
}

/*
 * FUN_8c1f3ef4  0x8c1f3ef4
 * called by: FUN_8c1ef7e6
 * decompiler: Heritage AFTER dead removal. Example location: r0x8c47267c : 0x8c1f3f24
 */
u32 FUN_8c1f3ef4(int *a0, u32 *a1, u32 a2, int a3) {
    u32 *puVar1;
    int iVar2;
    int iVar3;
    u8 *puVar4;
    u32 uVar5;
    u32 *a4;
    u32 *a5;
    u32 a6;
    u32 a7;
    u32 *puVar6;
    int *piVar7;
    u32 *puStack_28;
    int *piStack_24;

    g_8c4727b4 = 0x8c4716b8;
    uVar5 = a2;
    if ((g_8c47267c & 0x1f) != 0) {
        uVar5 = g_8c47267c + 0x20 & 0xffffffe0;
    }
    g_8c47267c = uVar5;
    puVar1 = a1;
    if (((u32)g_8c472680 & 0x1f) != 0) {
        puVar1 = (u32 *)((int)g_8c472680 + 0x20U & 0xffffffe0);
    }
    g_8c472680 = puVar1;
    g_8c47267c = g_8c47267c | 0xa0000000;
    g_8c472680 = (u32 *)((u32)g_8c472680 | 0xa0000000);
    g2dma_1f4794(0x8c4716b8, a1, a2);
    uVar5 = 0;
    do {
        *(u32 *)(g_8c4727b4 + 0xfe8 + uVar5) = 0;
        iVar3 = g_8c4727b4 + uVar5;
        uVar5 = uVar5 + 4;
        *(u32 *)(iVar3 + 0x1048) = 0;
    } while (uVar5 < 0x60);
    iVar3 = 0;
    puStack_28 = a1;
    piStack_24 = a0;
    if (0 < a3) {
        do {
            uVar5 = *puStack_28;
            if ((uVar5 & 0x1f) != 0) {
                uVar5 = uVar5 + 0x20 & 0xffffffe0;
            }
            iVar3 = iVar3 + 1;
            iVar2 = *piStack_24;
            *(u32 *)(g_8c4727b4 + 0xfe8 + iVar2 * 4) = uVar5 | 0xa0000000;
            *(u32 *)(iVar2 * 4 + g_8c4727b4 + 0x1048) = (uVar5 | 0xa0000000) + 0x400;
            puStack_28 = puStack_28 + 1;
            piStack_24 = piStack_24 + 1;
        } while (iVar3 < a3);
    }
    iVar3 = 0;
    *(u32 *)(g_8c4727b4 + 0x10a8) = *(u32 *)(g_8c4727b4 + 0xfc4);
    *(int *)(g_8c4727b4 + 0x10ac) = a3 * 0x400 + *(int *)(g_8c4727b4 + 0xfc4);
    *(u32 *)(g_8c4727b4 + 0xfcc) = *(u32 *)(g_8c4727b4 + 0x10a8);
    do {
        puVar4 = (u8 *)(g_8c4727b4 + 0xf90 + iVar3);
        iVar3 = iVar3 + 1;
        *puVar4 = 0;
    } while (iVar3 < 0x18);
    a7 = 0x65;
    iVar3 = 0;
    a6 = 0x72;
    if (0 < a3) {
        do {
            iVar2 = *a0;
            a0 = a0 + 1;
            if ((((iVar2 == 0) || (iVar2 == 6)) || (iVar2 == 0xc)) || (iVar2 == 0x12)) {
                *(u8 *)(iVar2 + g_8c4727b4 + 0xf90) = 0x72;
            } else {
                *(u8 *)(iVar2 + g_8c4727b4 + 0xf90) = 0x65;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < a3);
    }
    a4 = &g_8c26c728;
    a5 = &g_8c26c728;
    puVar6 = &g_8c26c728;
    piVar7 = &g_8c26c728;
    do {
        if (*(char *)(g_8c4727b4 + 0xf90 + *piVar7) != '\0') {
            a4 = (u32 *)*puVar6;
            FUN_8c1f55e4(a4);
        }
        piVar7 = piVar7 + 1;
        puVar6 = puVar6 + 1;
    } while (piVar7 < (int *)0x8c26c738);
    FUN_8c1f59c8();
    *(u32 *)(g_8c4727b4 + 0xfc0) = 1;
    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x8c) = 0x6155404f;
    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x10) = 0;
    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x80) = *(u32 *)(g_8c4727b4 + 0x10c0) | *(u32 *)(g_8c4727b4 + 0x10d0);
    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x14) = 1;
    return 0;
}

/*
 * FUN_8c1f4102  0x8c1f4102
 * called by: FUN_8c1f4202, FUN_8c1f420e
 */
u32 FUN_8c1f4102(void) {
    char cVar1;
    u8 *puVar2;
    int *piVar3;
    u32 uVar4;
    u32 *puVar5;
    int iVar6;
    int iVar7;

    piVar3 = 0x8c4727b4;
    iVar7 = g_8c4727b4;
    iVar6 = iVar7 + 0x28;
    puVar5 = (u32 *)(0x44c + iVar7);
    if (0 < *(int *)(0x10e4 + iVar7)) {
        FUN_8c1f4a00(*(u32 *)(0x10e4 + iVar7), 1);
    }
    puVar2 = (&FUN_8c1f55e4);
    for (iVar7 = 0; iVar7 < 0x18; iVar7 = iVar7 + 1) {
        if ((*(char *)((int)0xf90 + *piVar3 + iVar7) != '\0') && (*(char *)(iVar6 + 6) == '\0')) {
            cVar1 = *(char *)(iVar6 + 4);
            if (cVar1 == '\x01') {
                (*(code *)puVar2)(iVar7);
            } else if (cVar1 == '\x02') {
                FUN_8c1f56b0(iVar7);
            } else if (cVar1 == '\x03') {
                FUN_8c1f566c(iVar7);
            } else if (cVar1 == '\x04') {
                FUN_8c1f5628(iVar7);
            } else if (cVar1 == '\t') {
                uVar4 = *puVar5;
                if ((uVar4 & 1) != 0) {
                    uVar4 = 1;
                }
                FUN_8c1f5582(iVar7, uVar4);
            }
        }
        puVar5 = puVar5 + 0x1e;
        iVar6 = iVar6 + 0x2c;
    }
    FUN_8c1f59c8();
    return 0;
}

/*
 * FUN_8c1f4110  0x8c1f4110
 */
u32 FUN_8c1f4110(int a0, u32 a1, u32 a2, u32 a3) {
    char cVar1;
    u8 *puVar2;
    int in_r0;
    int *unaff_r10;
    u32 *puVar3;
    int iVar4;
    int iVar5;

    iVar5 = *unaff_r10;
    iVar4 = iVar5 + 0x28;
    puVar3 = (u32 *)(0x44c + iVar5);
    if (0 < *(int *)(in_r0 + iVar5)) {
        a0 = *(int *)(in_r0 + iVar5);
        FUN_8c1f4a00(a0, a1);
    }
    puVar2 = (&FUN_8c1f55e4);
    for (iVar5 = 0; iVar5 < 0x18; iVar5 = iVar5 + 1) {
        if ((*(char *)((int)0xf90 + *unaff_r10 + iVar5) != '\0') && (*(char *)(iVar4 + 6) == '\0')) {
            cVar1 = *(char *)(iVar4 + 4);
            if (cVar1 == '\x01') {
                a0 = iVar5;
                (*(code *)puVar2)(iVar5, a1, a2, a3);
            } else if (cVar1 == '\x02') {
                a0 = iVar5;
                FUN_8c1f56b0(iVar5);
            } else if (cVar1 == '\x03') {
                a0 = iVar5;
                FUN_8c1f566c(iVar5);
            } else if (cVar1 == '\x04') {
                a0 = iVar5;
                FUN_8c1f5628(iVar5);
            } else if (cVar1 == '\t') {
                a1 = *puVar3;
                if ((a1 & 1) != 0) {
                    a1 = 1;
                }
                a0 = iVar5;
                FUN_8c1f5582(iVar5, a1);
            }
        }
        puVar3 = puVar3 + 0x1e;
        iVar4 = iVar4 + 0x2c;
    }
    FUN_8c1f59c8();
    return 0;
}

/*
 * FUN_8c1f4202  0x8c1f4202
 * called by: pvr_1ef84c
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f4202(void) {
    u32 r4;
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    int iVar3;
    int extraout_r2;
    char *pcVar4;
    int iVar5;
    u32 in_PR;

    if (*(int *)(g_8c4727b4 + 0xfc0) == 1) {
        if ((*(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x18) & 1) == 0) {
            bVar1 = *(&DATA_8c1f5a2c);
            *(&DATA_8c1f5a2c) = bVar1 | 0x80;
            if (bVar1 == 0) {
                if (*(int *)(g_8c4727b4 + 0xfb0) != *(int *)(g_8c4727b4 + 0xfac)) {
                    *(u32 *)(g_8c4727b4 + 0xfb0) = *(u32 *)(g_8c4727b4 + 0xfac);
                    if (*(int *)(g_8c4727b4 + 0xfac) == 0) {
                        *(u32 *)(g_8c4727b4 + 0x10c0) = 0xc3500000;
                    } else {
                        iVar3 = libgcc_divide_helper_010468(300000, 0x14);
                        *(int *)(extraout_r2 + 0x10c0) = iVar3 << 0x10;
                    }
                    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x14) = 0;
                    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x80) =
                        *(u32 *)(g_8c4727b4 + 0x10c0) | *(u32 *)(g_8c4727b4 + 0x10d0);
                    *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x14) = 1;
                }
                FUN_8c1f4102();
                *(u32 *)(g_8c4727b4 + 0x10b0) = *(u32 *)(*(int *)(g_8c4727b4 + 0x10b8) * 4 + g_8c4727b4 + 0x10a8);
                iVar3 = *(int *)(g_8c4727b4 + 0x10f4);
                uVar2 = FUN_8c1f59f2(*(u32 *)(*(int *)(g_8c4727b4 + 0x10b8) * 4 + g_8c4727b4 + 0x10a8));
                *(u32 *)(iVar3 + 4) = uVar2;
                *(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x18) = 1;
                *(u32 *)(g_8c4727b4 + 0xfd8) = 0;
                *(u32 *)(g_8c4727b4 + 0x10b8) = *(u32 *)(g_8c4727b4 + 0x10b8) ^ 1;
                *(u32 *)(g_8c4727b4 + 0xfcc) = *(u32 *)(*(int *)(g_8c4727b4 + 0x10b8) * 4 + g_8c4727b4 + 0x10a8);
                *(u32 *)(g_8c4727b4 + 0x10b4) = *(u32 *)(g_8c4727b4 + 0x10b4) ^ 1;
                *(u32 *)(g_8c4727b4 + 0xfdc) = 0;
                iVar3 = g_8c4727b4 + 0x28;
                iVar5 = 0;
                while (iVar5 < 0x18) {
                    pcVar4 = (char *)(g_8c4727b4 + 0xf90 + iVar5);
                    iVar5 = iVar5 + 1;
                    if (*pcVar4 != '\0') {
                        *(u8 *)(iVar3 + 7) = *(u8 *)(iVar3 + 6);
                        *(u8 *)(iVar3 + 6) = 0;
                        *(u32 *)(iVar3 + 0x1c) = *(u32 *)(iVar3 + 0x18);
                        *(u32 *)(iVar3 + 0x18) = 0;
                    }
                    iVar3 = iVar3 + 0x2c;
                }
                *(u32 *)(g_8c4727b4 + 0xfc0) = 0;
                uVar2 = 0;
                *(&DATA_8c1f5a2c) = 0;
            } else {
                debug_log_printf(r4, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
                uVar2 = 0xfffffffe;
            }
        } else {
            uVar2 = 0xffffffff;
        }
    } else {
        uVar2 = 0xfffffffd;
    }
    return uVar2;
}

/*
 * FUN_8c1f420e  0x8c1f420e
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 */
u32 FUN_8c1f420e(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain1) {
    u8 bVar1;
    u32 uVar2;
    int iVar3;
    int extraout_r2;
    char *pcVar4;
    int iVar5;
    u32 unaff_r12;
    int *unaff_r14;

    if (*(int *)(*unaff_r14 + ain1) == 1) {
        if ((*(u32 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x18) & unaff_r12) == 0) {
            bVar1 = *(&DATA_8c1f5a2c);
            *(&DATA_8c1f5a2c) = bVar1 | 0x80;
            if (bVar1 == 0) {
                if (*(int *)(*unaff_r14 + 0xfb0) != *(int *)(*unaff_r14 + 0xfac)) {
                    *(u32 *)(*unaff_r14 + 0xfb0) = *(u32 *)(*unaff_r14 + 0xfac);
                    if (*(int *)(*unaff_r14 + 0xfac) == 0) {
                        *(u32 *)(*unaff_r14 + 0x10c0) = 0xc3500000;
                    } else {
                        iVar3 = libgcc_divide_helper_010468(300000, 0x14);
                        *(int *)(extraout_r2 + 0x10c0) = iVar3 << 0x10;
                    }
                    *(u32 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = 0;
                    iVar3 = *unaff_r14;
                    *(u32 *)(*(int *)(iVar3 + 0x10f4) + 0x80) = *(u32 *)(iVar3 + 0x10c0) | *(u32 *)(iVar3 + 0x10d0);
                    *(u32 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = unaff_r12;
                }
                FUN_8c1f4102();
                iVar3 = *unaff_r14;
                *(u32 *)(iVar3 + 0x10b0) = *(u32 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
                iVar3 = *unaff_r14;
                iVar5 = *(int *)(iVar3 + 0x10f4);
                uVar2 = FUN_8c1f59f2(*(u32 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8));
                *(u32 *)(iVar5 + 4) = uVar2;
                *(u32 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x18) = unaff_r12;
                *(u32 *)(*unaff_r14 + 0xfd8) = 0;
                *(u32 *)(*unaff_r14 + 0x10b8) = *(u32 *)(*unaff_r14 + 0x10b8) ^ unaff_r12;
                iVar3 = *unaff_r14;
                *(u32 *)(iVar3 + 0xfcc) = *(u32 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
                *(u32 *)(*unaff_r14 + 0x10b4) = *(u32 *)(*unaff_r14 + 0x10b4) ^ unaff_r12;
                *(u32 *)(*unaff_r14 + 0xfdc) = 0;
                iVar3 = *unaff_r14 + 0x28;
                iVar5 = 0;
                while (iVar5 < 0x18) {
                    pcVar4 = (char *)(*unaff_r14 + 0xf90 + iVar5);
                    iVar5 = iVar5 + 1;
                    if (*pcVar4 != '\0') {
                        *(u8 *)(iVar3 + 7) = *(u8 *)(iVar3 + 6);
                        *(u8 *)(iVar3 + 6) = 0;
                        *(u32 *)(iVar3 + 0x1c) = *(u32 *)(iVar3 + 0x18);
                        *(u32 *)(iVar3 + 0x18) = 0;
                    }
                    iVar3 = iVar3 + 0x2c;
                }
                *(u32 *)(*unaff_r14 + 0xfc0) = 0;
                uVar2 = 0;
                *(&DATA_8c1f5a2c) = 0;
            } else {
                debug_log_printf(unused_a0, unused_a1, unused_a2, unused_a3);
                uVar2 = 0xfffffffe;
            }
        } else {
            uVar2 = 0xffffffff;
        }
    } else {
        uVar2 = 0xfffffffd;
    }
    return uVar2;
}

/*
 * FUN_8c1f43d2  0x8c1f43d2
 * called by: pvr_1efaf4
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f43d2(void) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    int ar4_00;
    u32 in_PR;

    ar4_00 = g_8c4727b4;
    if (*(int *)(g_8c4727b4 + 0xfc0) != 0) {
        return 0xfffffffd;
    }
    if ((*(u32 *)(*(int *)(g_8c4727b4 + 0x10f4) + 0x18) & 1) != 0) {
        return 0xffffffff;
    }
    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(ar4_00, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    return 0;
}

/*
 * FUN_8c1f43d6  0x8c1f43d6
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 */
u32 FUN_8c1f43d6(void) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    int in_r0;
    int *in_r3;
    int a4;

    a4 = *in_r3;
    if (*(int *)(in_r0 + a4) != 0) {
        return 0xfffffffd;
    }
    if ((*(u32 *)(*(int *)(0x10f4 + a4) + 0x18) & 1) != 0) {
        return 0xffffffff;
    }
    bVar1 = **(u8 **)(&DATA_8c1f5a28);
    **(u8 **)(&DATA_8c1f5a28) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a4, r5, r6, r7);
        return 0xfffffffe;
    }
    return 0;
}

/*
 * FUN_8c1f4414  0x8c1f4414
 * called by: pvr_1efaf4
 */
u32 FUN_8c1f4414(void) {
    *(u32 *)((int)0xfc0 + g_8c4727b4) = 1;
    **(u8 **)(&DATA_8c1f5a28) = 0;
    return 0;
}

/*
 * FUN_8c1f442a  0x8c1f442a
 * called by: pvr_1efaf4
 */
u32 FUN_8c1f442a(void) {
    int iVar1;
    int iVar2;
    int ar4_00;
    int ar4_01;

    for (ar4_01 = 0; ar4_01 < 4; ar4_01 = ar4_01 + 1) {
        if (*(char *)((&g_8c26c728)[ar4_01] + g_8c4727b4 + 0xf90) != '\0') {
            FUN_8c1f4f82(ar4_01);
            iVar1 = 0;
            iVar2 = ar4_01 * 6;
            ar4_00 = iVar2;
            do {
                if (*(char *)(g_8c4727b4 + 0xf90 + iVar2) != '\0') {
                    FUN_8c1f5048(ar4_00, ar4_01);
                }
                iVar1 = iVar1 + 1;
                ar4_00 = ar4_00 + 1;
                iVar2 = iVar2 + 1;
            } while (iVar1 < 6);
        }
    }
    return 0;
}

/*
 * FUN_8c1f443c  0x8c1f443c
 */
u32 FUN_8c1f443c(void) {
    int unaff_r8;
    int unaff_r9;
    int iVar1;
    int iVar2;
    int ar4_00;
    int ar4_01;

    for (ar4_01 = unaff_r8; ar4_01 < 4; ar4_01 = ar4_01 + 1) {
        if (*(char *)((&g_8c26c728)[ar4_01] + g_8c4727b4 + 0xf90) != '\0') {
            FUN_8c1f4f82(ar4_01);
            iVar2 = ar4_01 * 6;
            iVar1 = unaff_r8;
            ar4_00 = iVar2;
            do {
                if (*(char *)(g_8c4727b4 + 0xf90 + iVar2) != '\0') {
                    FUN_8c1f5048(ar4_00, ar4_01);
                }
                iVar1 = iVar1 + 1;
                ar4_00 = ar4_00 + 1;
                iVar2 = iVar2 + 1;
            } while (iVar1 < unaff_r9);
        }
    }
    return 0;
}

/*
 * FUN_8c1f44cc  0x8c1f44cc
 * called by: FUN_8c1efcae
 */
u32 FUN_8c1f44cc(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    int *piVar3;
    u32 uVar4;
    int iVar5;
    u32 a4;
    int iVar6;

    puVar1 = (&sh4_tmu_1f88e6);
    uVar4 = sh4_tmu_1f88e6(a0);
    piVar3 = 0x8c4727b4;
    puVar2 = (&int_diff);
    iVar5 = 0x186a0;
    do {
        if ((*(u32 *)(*(int *)((int)0x10f4 + *piVar3) + 0x18) & 1) == 0)
            break;
        a1 = (*(code *)puVar1)(a0, a1, a2, a3);
        a0 = uVar4;
        iVar6 = (*(code *)puVar2)(uVar4, a1, a2, a3);
    } while (iVar6 <= iVar5);
    iVar5 = (int)0x10f4;
    uVar4 = 0;
    *(u32 *)(*(int *)(iVar5 + *piVar3) + 0x18) = 0;
    *(u32 *)(*(int *)(iVar5 + *piVar3) + 0x14) = 0;
    *(u32 *)(*(int *)(iVar5 + *piVar3) + 0x10) = 0;
    *(u32 *)((int)0x8c + *(int *)(iVar5 + *piVar3)) = 0x6155404f;
    *(u32 *)((int)0x80 + *(int *)((int)0x10f4 + *piVar3)) = 0xc3500000;
    *(u32 *)(*(int *)((int)0x10f4 + *piVar3) + 4) = 0xcff0000;
    a4 = (*(code *)puVar1)(0, a1, a2, a3);
    iVar5 = (int)0x4268;
    do {
        if ((*(u32 *)(*(int *)((int)0x10f4 + *piVar3) + 0x18) & 1) == 0) {
            return 0;
        }
        a1 = (*(code *)puVar1)(uVar4, a1, a2, a3);
        uVar4 = a4;
        iVar6 = (*(code *)puVar2)(a4, a1, a2, a3);
    } while (iVar6 <= iVar5);
    return 0;
}

/*
 * debug_log_printf  0x8c1f4570
 * formats into a buffer and hands it to the log hook when logging is enabled
 * called by: FUN_8c1f0444, FUN_8c1f04a0, FUN_8c1f04fc, FUN_8c1f057a, FUN_8c1f05d6, FUN_8c1f0650, FUN_8c1f06ac,
 * FUN_8c1f070c (+35 more)
 */
u32 debug_log_printf(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, u32 s4) {
    u32 uVar1;

    uVar1 = 0x10c8;
    if ((*(int *)(g_8c4727b4 + 0x10c8) != 0) && (uVar1 = vsprintf_like(0x8c4715b8, s0, &s4), g_8c2739f8 != NULL)) {
        uVar1 = (*g_8c2739f8)(0x8c4715b8);
    }
    return uVar1;
}

/*
 * FUN_8c1f4574  0x8c1f4574
 */
int FUN_8c1f4574(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3, int ain0, u32 s0, u32 s4) {
    int *in_r2;
    u32 *ar6_00;

    if (*(int *)(ain0 + *in_r2) != 0) {
        ar6_00 = &s4;
        ain0 = vsprintf_like(0x8c4715b8, s0, ar6_00);
        if (g_8c2739f8 != NULL) {
            ain0 = (*g_8c2739f8)(0x8c4715b8, s0, ar6_00, a3);
        }
    }
    return ain0;
}

/*
 * FUN_8c1f45b8  0x8c1f45b8
 * called by: FUN_8c1f461c, FUN_8c1f4636, FUN_8c1f4646
 */
int FUN_8c1f45b8(int a0) {
    return g_8c4727b4 + 0x28 + a0 * 0x2c;
}

/*
 * FUN_8c1f45c8  0x8c1f45c8
 * called by: FUN_8c1efd26
 */
int FUN_8c1f45c8(int a0) {
    return g_8c4727b4 + (int)0x44c + a0 * 0x78;
}

/*
 * FUN_8c1f45da  0x8c1f45da
 * called by: FUN_8c1efd34
 */
int FUN_8c1f45da(int a0) {
    return g_8c4727b4 + 4 + a0 * 8;
}

/*
 * FUN_8c1f461c  0x8c1f461c
 * called by: thunk_FUN_8c1f461c
 */
u32 FUN_8c1f461c(u32 a0, int a1) {
    int iVar1;

    iVar1 = FUN_8c1f45b8(a0);
    return (u32)(*(int *)(iVar1 + 0x20) == a1);
}

/*
 * FUN_8c1f4636  0x8c1f4636
 * called by: thunk_FUN_8c1f4636
 */
u32 FUN_8c1f4636(u32 a0) {
    int iVar1;

    iVar1 = FUN_8c1f45b8(a0);
    return (u32) * (u8 *)(iVar1 + 0xc);
}

/*
 * FUN_8c1f4646  0x8c1f4646
 * called by: thunk_FUN_8c1f4646
 */
u32 FUN_8c1f4646(u32 a0) {
    int iVar1;

    iVar1 = FUN_8c1f45b8(a0);
    *(u8 *)(iVar1 + 0xd) = 1;
    return 1;
}

/*
 * FUN_8c1f4656  0x8c1f4656
 * called by: FUN_8c1f026a, FUN_8c1f026e
 */
int FUN_8c1f4656(int a0) {
    int iVar1;

    iVar1 = (int)0x10c0;
    *(int *)(iVar1 + g_8c4727b4) = a0 << 0x10;
    return iVar1;
}

/*
 * FUN_8c1f4662  0x8c1f4662
 * called by: FUN_8c1f0312
 */
u32 FUN_8c1f4662(void) {
    return *(u32 *)(g_8c4727b4 + (int)0x10c0) >> 0x10;
}

/*
 * FUN_8c1f4672  0x8c1f4672
 * called by: FUN_8c1f026a, FUN_8c1f026e, g2dma_1f4794
 */
int FUN_8c1f4672(u32 a0, u32 unused_a1, u32 a2) {
    int iVar1;

    iVar1 = (int)0x10c4;
    *(u32 *)(iVar1 + g_8c4727b4) = a0 & 1;
    return iVar1;
}

/*
 * FUN_8c1f4680  0x8c1f4680
 * called by: FUN_8c1f0312
 */
u32 FUN_8c1f4680(void) {
    return *(u32 *)(g_8c4727b4 + (int)0x10c4);
}

/*
 * FUN_8c1f468a  0x8c1f468a
 * called by: FUN_8c1f026a, FUN_8c1f026e
 */
int FUN_8c1f468a(u32 a0) {
    int iVar1;

    iVar1 = (int)0x10cc;
    *(u32 *)(iVar1 + g_8c4727b4) = a0;
    return iVar1;
}

/*
 * FUN_8c1f4694  0x8c1f4694
 * called by: FUN_8c1f0312
 */
u32 FUN_8c1f4694(void) {
    return *(u32 *)(g_8c4727b4 + (int)0x10cc);
}

/*
 * FUN_8c1f469e  0x8c1f469e
 * called by: FUN_8c1f026a, FUN_8c1f026e
 */
int FUN_8c1f469e(u32 a0) {
    int iVar1;

    iVar1 = (int)0x10d0;
    *(u32 *)(iVar1 + g_8c4727b4) = a0;
    return iVar1;
}

/*
 * FUN_8c1f46a8  0x8c1f46a8
 * called by: FUN_8c1f0312
 */
u32 FUN_8c1f46a8(void) {
    return *(u32 *)(g_8c4727b4 + (int)0x10d0);
}

/*
 * FUN_8c1f46ca  0x8c1f46ca
 * called by: FUN_8c1f026a, FUN_8c1f026e
 */
int FUN_8c1f46ca(u32 a0) {
    int iVar1;

    iVar1 = (int)0x10c8;
    *(u32 *)(iVar1 + g_8c4727b4) = a0;
    return iVar1;
}

/*
 * FUN_8c1f46d4  0x8c1f46d4
 * called by: FUN_8c1f0312
 */
u32 FUN_8c1f46d4(void) {
    return *(u32 *)(g_8c4727b4 + (int)0x10c8);
}

/*
 * FUN_8c1f46de  0x8c1f46de
 * called by: FUN_8c1f026a, FUN_8c1f026e
 */
int FUN_8c1f46de(u32 a0) {
    int iVar1;

    iVar1 = (int)0x10d8;
    *(u32 *)(iVar1 + g_8c4727b4) = a0;
    return iVar1;
}

/*
 * FUN_8c1f46e8  0x8c1f46e8
 * called by: FUN_8c1f0312
 */
u32 FUN_8c1f46e8(void) {
    return *(u32 *)(g_8c4727b4 + (int)0x10d8);
}

/*
 * FUN_8c1f46f2  0x8c1f46f2
 * called by: FUN_8c1f026a, FUN_8c1f026e
 */
int FUN_8c1f46f2(u32 a0) {
    int *piVar1;
    int iVar2;

    piVar1 = 0x8c4727b4;
    iVar2 = (int)0x10e0;
    *(u32 *)(iVar2 + g_8c4727b4) = a0;
    iVar2 = iVar2 + 4;
    *(u32 *)(iVar2 + *piVar1) = a0;
    return iVar2;
}

/*
 * FUN_8c1f4702  0x8c1f4702
 * called by: FUN_8c1f0312
 */
u32 FUN_8c1f4702(void) {
    return *(u32 *)(g_8c4727b4 + (int)0x10e4);
}

/*
 * FUN_8c1f4716  0x8c1f4716
 * called by: FUN_8c1f026a, FUN_8c1f026e
 */
int FUN_8c1f4716(u32 a0) {
    int iVar1;

    iVar1 = (int)0x10dc;
    *(u32 *)(iVar1 + g_8c4727b4) = a0;
    return iVar1;
}

/*
 * FUN_8c1f4720  0x8c1f4720
 * called by: FUN_8c1f0312
 */
u32 FUN_8c1f4720(void) {
    return *(u32 *)(g_8c4727b4 + (int)0x10dc);
}

/*
 * FUN_8c1f472a  0x8c1f472a
 * called by: FUN_8c1f026a, FUN_8c1f026e
 */
int FUN_8c1f472a(u32 a0) {
    int iVar1;

    iVar1 = (int)0xfac;
    *(u32 *)(iVar1 + g_8c4727b4) = a0;
    return iVar1;
}

/*
 * FUN_8c1f4734  0x8c1f4734
 * called by: FUN_8c1f0312, pvr_1efaf4
 */
u32 FUN_8c1f4734(void) {
    return *(u32 *)(g_8c4727b4 + (int)0xfb0);
}

/*
 * FUN_8c1f4764  0x8c1f4764
 * called by: FUN_8c1f026a, FUN_8c1f026e
 */
int FUN_8c1f4764(u32 a0) {
    int iVar1;

    iVar1 = (int)0xfbc;
    *(u32 *)(iVar1 + g_8c4727b4) = a0;
    return iVar1;
}

/*
 * FUN_8c1f476e  0x8c1f476e
 * called by: FUN_8c1f0312
 */
u32 FUN_8c1f476e(void) {
    return *(u32 *)(g_8c4727b4 + (int)0xfbc);
}

/*
 * FUN_8c1f4780  0x8c1f4780
 * called by: FUN_8c1f51ec, FUN_8c1f51f8, FUN_8c1f5290
 */
u32 FUN_8c1f4780(u32 *a0, int a1) {
    u32 uVar1;

    do {
        uVar1 = *a0;
        a1 = a1 + -1;
        *a0 = ((uVar1 & 0xff) << 8 | (uVar1 & 0xff00) >> 8) << 0x10 | ((uVar1 & 0xff0000) >> 0x10) << 8 | uVar1 >> 0x18;
        a0 = a0 + 1;
    } while (a1 != 0);
    return 0;
}

/*
 * g2dma_1f4794  0x8c1f4794
 * called by: FUN_8c1f3dd8, FUN_8c1f3de2, FUN_8c1f3ef4
 */
u32 g2dma_1f4794(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u8 *pbVar3;
    u32 uVar4;
    u8 *ar4_00;
    int iVar5;
    u32 uVar6;
    int iVar7;
    u8 bVar8;
    u32 uVar9;
    int iVar10;

    iVar5 = 0x6000;
    iVar7 = 0;
    g_8c4727b4[0x42d] = 0;
    g_8c4727b4[0x42e] = 0;
    uVar9 = 0;
    do {
        *(int *)((int)g_8c4727b4 + uVar9 + 0xfe8) = g_8c4727b4[0x3f2] + iVar7;
        uVar2 = uVar9 + 4;
        *(int *)((int)g_8c4727b4 + uVar9 + 0x1048) = g_8c4727b4[0x3f2] + iVar5;
        iVar5 = iVar5 + 0x400;
        iVar7 = iVar7 + 0x400;
        uVar9 = uVar2;
    } while (uVar2 < 0x60);
    g_8c4727b4[0x42a] = g_8c4727b4[0x3f1];
    g_8c4727b4[0x42b] = g_8c4727b4[0x3f1] + 0x3000;
    g_8c4727b4[0x3f3] = g_8c4727b4[0x42a];
    FUN_8c1f59dc(g_8c4727b4 + 1, 0, 8);
    uVar4 = 0;
    uVar6 = 0x108;
    FUN_8c1f59dc(g_8c4727b4 + 10, 0, 0x108);
    uVar9 = 0;
    do {
        FUN_8c1f5506((int)g_8c4727b4 + uVar9 + 0x44c);
        uVar9 = uVar9 + 0x78;
    } while (uVar9 < 0xb40);
    iVar5 = 0;
    do {
        iVar1 = iVar5 + 0xf90;
        iVar5 = iVar5 + 1;
        *(u8 *)((int)g_8c4727b4 + iVar1) = 0;
    } while (iVar5 < 0x18);
    ar4_00 = &stack0xffffffdc;
    FUN_8c010960(ar4_00, 0x18);
    iVar5 = 0;
    if ((_DAT_a05f689c & 0xff) < 2) {
        bVar8 = 7;
    } else {
        bVar8 = 0xf;
    }
    pbVar3 = ar4_00 + 4;
    uVar4 = 5;
    iVar7 = 0;
    do {
        if ((*ar4_00 & bVar8) != 0) {
            iVar10 = 0;
            *(u8 *)((int)g_8c4727b4 + iVar7 + 0xf90) = 0x52;
            iVar1 = iVar5;
            do {
                iVar10 = iVar10 + 1;
                *(u8 *)((int)g_8c4727b4 + iVar1 + 0xf91) = 0x45;
                iVar1 = iVar1 + 1;
            } while (iVar10 < 5);
        }
        ar4_00 = ar4_00 + 1;
        iVar5 = iVar5 + 6;
        iVar7 = iVar7 + 6;
    } while (ar4_00 < pbVar3);
    g_8c4727b4[0x430] = 0xc3500000;
    g_8c4727b4[0x3f7] = 0;
    g_8c4727b4[0x3f6] = 0;
    g_8c4727b4[0x3f8] = 1;
    g_8c4727b4[0x432] = 0;
    g_8c4727b4[0x43b] = 0;
    g_8c4727b4[0x43a] = 0;
    g_8c4727b4[0x433] = 5;
    g_8c4727b4[0x434] = 0;
    g_8c4727b4[0x436] = 10;
    g_8c4727b4[0x437] = 5;
    g_8c4727b4[0x438] = 0;
    g_8c4727b4[0x439] = 0;
    g_8c4727b4[0x3eb] = 0;
    g_8c4727b4[0x3ec] = 0;
    g_8c4727b4[0x3ef] = 0;
    *g_8c4727b4 = 0x54524f50;
    g_8c4727b4[9] = 0x20564544;
    g_8c4727b4[0x112] = 0x4f464e49;
    g_8c4727b4[0x3e3] = 0x4c424e45;
    g_8c4727b4[0x3ea] = 0x54415453;
    g_8c4727b4[0x3f9] = 0x52444152;
    g_8c4727b4[0x42f] = 0x54554f54;
    g_8c4727b4[0x435] = 0x43515244;
    g_8c4727b4[0x43c] = 0x434e5546;
    g_8c4727b4[0x43e] = 0x20444e45;
    uVar6 = 0;
    FUN_8c1f4672(0, ar4_00, 5);
    uVar4 = FUN_8c1f59fc();
    return uVar4;
}

/*
 * FUN_8c1f4a00  0x8c1f4a00
 * called by: FUN_8c1f4102, FUN_8c1f4110, FUN_8c1f4a44, FUN_8c1f4cb8
 */
u32 FUN_8c1f4a00(int a0, u32 a1) {
    int *piVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int iVar5;

    piVar1 = 0x8c4727b4;
    iVar2 = (int)0xfcc;
    iVar4 = g_8c4727b4;
    iVar5 = (int)0x700;
    *(int *)(iVar2 + iVar4) = *(int *)(iVar2 + iVar4) + *(int *)(iVar2 + 0xc + iVar4) * 4;
    piVar3 = *(int **)(iVar2 + *piVar1);
    iVar2 = 0;
    if (0 < a0) {
        do {
            iVar2 = iVar2 + 1;
            *piVar3 = iVar5;
            piVar3 = piVar3 + 1;
        } while (iVar2 < a0);
    }
    iVar2 = (int)0xfd8;
    *(int *)(iVar2 + *piVar1) = a0;
    iVar2 = iVar2 + 4;
    *(int *)(iVar2 + *piVar1) = *(int *)(iVar2 + *piVar1) + a0 * 4;
    return 0;
}

/*
 * FUN_8c1f4a44  0x8c1f4a44
 * called by: FUN_8c1f5582, FUN_8c1f55e4, FUN_8c1f5628, FUN_8c1f566c, FUN_8c1f56b0, FUN_8c1f56f4, FUN_8c1f574c,
 * FUN_8c1f57b4 (+5 more)
 */
u32 FUN_8c1f4a44(int a0, u32 a1, u32 *a2, int a3, u32 *s0, int s4) {
    u8 bVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u32 a5;
    u32 uVar7;
    u32 *puVar8;
    int iVar9;

    iVar9 = a0 * 0x2c;
    iVar5 = g_8c4727b4 + 0x28 + iVar9;
    if (*(char *)(iVar5 + 6) == '\0') {
        *(u8 *)(iVar5 + 6) = (u8)a1;
        uVar7 = a3 + s4;
        bVar1 = (&g_8c26c710)[a0];
        uVar6 = (int)(char)bVar1 & 0xc0;
        a5 = (int)uVar6 >> 6;
        uVar3 = a5;
        iVar5 = a3;
        if (((0 < *(int *)(g_8c4727b4 + 0x10cc)) && (0 < *(int *)(g_8c4727b4 + 0xfd8))) &&
            (a5 == ((int)(short)((u32) * *(u32 **)(g_8c4727b4 + 0xfcc) >> 0x10) & 3U))) {
            FUN_8c1f4a00(*(u32 *)(g_8c4727b4 + 0x10cc), a5);
        }
        *(int *)(g_8c4727b4 + 0xfcc) = *(int *)(g_8c4727b4 + 0xfcc) + *(int *)(g_8c4727b4 + 0xfd8) * 4;
        puVar8 = *(u32 **)(g_8c4727b4 + 0xfcc);
        *puVar8 = a5 << 0x10 | uVar7 & 0xff;
        uVar3 = FUN_8c1f59f2(*(u32 *)(g_8c4727b4 + 0xfe8 + *(int *)(g_8c4727b4 + 0x10b4) * 0x60 + a0 * 4));
        puVar8[1] = uVar3;
        if (*(int *)(g_8c4727b4 + 0x10c4) == 1) {
            puVar8[2] = (u32)(u8)a1 << 0x18 | (u32)bVar1 << 0x10 | uVar6 << 8 | uVar7 & 0xff;
            puVar8 = puVar8 + 3;
            iVar5 = 0;
            if (0 < a3) {
                do {
                    uVar3 = *a2;
                    a2 = a2 + 1;
                    iVar5 = iVar5 + 1;
                    *puVar8 = uVar3;
                    puVar8 = puVar8 + 1;
                } while (iVar5 < a3);
            }
        } else {
            puVar8[2] = uVar6 << 0x10 | (u32)bVar1 << 8 | uVar7 * 0x1000000 | (u32)(u8)a1;
            puVar8 = puVar8 + 3;
            iVar5 = 0;
            if (0 < a3) {
                do {
                    uVar3 = *a2;
                    a2 = a2 + 1;
                    iVar5 = iVar5 + 1;
                    *puVar8 = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (int)uVar3 >> 8 & 0xff00U | uVar3 >> 0x18;
                    puVar8 = puVar8 + 1;
                } while (iVar5 < a3);
            }
        }
        if (*(int *)(g_8c4727b4 + 0x10c4) == 1) {
            iVar5 = 0;
            if (0 < s4) {
                do {
                    iVar5 = iVar5 + 1;
                    *puVar8 = (u32) * (u8 *)((int)s0 + 1) << 0x10 | (u32) * (u8 *)((int)s0 + 2) << 8 |
                              (int)(char)*s0 << 0x18 | (u32) * (u8 *)((int)s0 + 3);
                    puVar8 = puVar8 + 1;
                    s0 = s0 + 1;
                } while (iVar5 < s4);
            }
        } else {
            iVar5 = 0;
            if (0 < s4) {
                do {
                    uVar3 = *s0;
                    s0 = s0 + 1;
                    iVar5 = iVar5 + 1;
                    *puVar8 = uVar3;
                    puVar8 = puVar8 + 1;
                } while (iVar5 < s4);
            }
        }
        *(u32 *)(g_8c4727b4 + 0xfd8) = uVar7 + 3;
        *(u32 *)(g_8c4727b4 + 0xfdc) = *(int *)(g_8c4727b4 + 0xfdc) + (uVar7 + 3) * 4;
        iVar5 = g_8c4727b4;
        iVar4 = *(int *)(g_8c4727b4 + 0xfe0);
        *(int *)(g_8c4727b4 + 0xfe0) = iVar4 + 1;
        *(int *)(iVar5 + iVar9 + 0x40) = iVar4;
        *(u32 *)(g_8c4727b4 + 0xfe0) = *(u32 *)(g_8c4727b4 + 0xfe0) & 0x7fffffff;
        if (*(int *)(g_8c4727b4 + 0xfe0) == 0) {
            *(u32 *)(g_8c4727b4 + 0xfe0) = 1;
        }
        uVar2 = *(u32 *)(g_8c4727b4 + iVar9 + 0x40);
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1f4cb8  0x8c1f4cb8
 * called by: ta_fifo_1ef558
 */
u32 FUN_8c1f4cb8(int a0, u32 a1, u32 *a2, int a3, u32 *s0, int s4) {
    u8 bVar1;
    u32 uVar2;
    u32 uVar3;
    u32 a5;
    u32 uVar4;
    int iVar5;
    u32 *puVar6;

    a5 = 3;
    uVar4 = a3 + s4;
    bVar1 = (&g_8c26c710)[a0];
    uVar2 = (int)(char)bVar1 & 0xc0;
    iVar5 = a3;
    if (((0 < *(int *)(g_8c4727b4 + 0x10cc)) && (0 < *(int *)(g_8c4727b4 + 0xfd8))) &&
        ((int)uVar2 >> 6 == ((int)(short)((u32) * *(u32 **)(g_8c4727b4 + 0xfcc) >> 0x10) & 3U))) {
        FUN_8c1f4a00(*(u32 *)(g_8c4727b4 + 0x10cc), 3);
    }
    *(int *)(g_8c4727b4 + 0xfcc) = *(int *)(g_8c4727b4 + 0xfcc) + *(int *)(g_8c4727b4 + 0xfd8) * 4;
    puVar6 = *(u32 **)(g_8c4727b4 + 0xfcc);
    *puVar6 = ((int)uVar2 >> 6) << 0x10 | uVar4 & 0xff;
    uVar3 = FUN_8c1f59f2(*(u32 *)(g_8c4727b4 + 0xfe8 + *(int *)(g_8c4727b4 + 0x10b4) * 0x60 + a0 * 4));
    puVar6[1] = uVar3;
    if (*(int *)(g_8c4727b4 + 0x10c4) == 1) {
        puVar6[2] = (u32)(u8)a1 << 0x18 | (u32)bVar1 << 0x10 | uVar2 << 8 | uVar4 & 0xff;
        puVar6 = puVar6 + 3;
        iVar5 = 0;
        if (0 < a3) {
            do {
                uVar2 = *a2;
                a2 = a2 + 1;
                iVar5 = iVar5 + 1;
                *puVar6 = uVar2;
                puVar6 = puVar6 + 1;
            } while (iVar5 < a3);
        }
    } else {
        puVar6[2] = uVar2 << 0x10 | (u32)bVar1 << 8 | uVar4 * 0x1000000 | (u32)(u8)a1;
        puVar6 = puVar6 + 3;
        iVar5 = 0;
        if (0 < a3) {
            do {
                uVar2 = *a2;
                a2 = a2 + 1;
                iVar5 = iVar5 + 1;
                *puVar6 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | (int)uVar2 >> 8 & 0xff00U | uVar2 >> 0x18;
                puVar6 = puVar6 + 1;
            } while (iVar5 < a3);
        }
    }
    if (*(int *)(g_8c4727b4 + 0x10c4) == 1) {
        iVar5 = 0;
        if (0 < s4) {
            do {
                iVar5 = iVar5 + 1;
                *puVar6 = (u32) * (u8 *)((int)s0 + 1) << 0x10 | (u32) * (u8 *)((int)s0 + 2) << 8 |
                          (int)(char)*s0 << 0x18 | (u32) * (u8 *)((int)s0 + 3);
                puVar6 = puVar6 + 1;
                s0 = s0 + 1;
            } while (iVar5 < s4);
        }
    } else {
        iVar5 = 0;
        if (0 < s4) {
            do {
                uVar2 = *s0;
                s0 = s0 + 1;
                iVar5 = iVar5 + 1;
                *puVar6 = uVar2;
                puVar6 = puVar6 + 1;
            } while (iVar5 < s4);
        }
    }
    *(u32 *)(g_8c4727b4 + 0xfd8) = uVar4 + 3;
    *(u32 *)(g_8c4727b4 + 0xfdc) = *(int *)(g_8c4727b4 + 0xfdc) + (uVar4 + 3) * 4;
    return 0;
}

/*
 * FUN_8c1f4ec6  0x8c1f4ec6
 * called by: thunk_FUN_8c1f4ec6
 */
u32 FUN_8c1f4ec6(int a0) {
    int *piVar1;
    int iVar2;
    int iVar3;

    piVar1 = 0x8c4727b4;
    iVar2 = (int)0xfcc;
    iVar3 = g_8c4727b4;
    *(int *)(iVar2 + iVar3) = *(int *)(iVar2 + iVar3) + *(int *)(iVar2 + 0xc + iVar3) * 4;
    **(u32 **)(iVar2 + *piVar1) = a0 << 0x10 | (int)0x300;
    *(u32 *)(iVar2 + 0xc + *piVar1) = 1;
    *(int *)(iVar2 + 0x10 + *piVar1) = *(int *)(iVar2 + 0x10 + *piVar1) + 4;
    return 0;
}

/*
 * FUN_8c1f4f82  0x8c1f4f82
 * called by: FUN_8c1f442a, FUN_8c1f443c
 */
u32 FUN_8c1f4f82(int a0) {
    int iVar1;
    u8 *pbVar2;
    u32 uVar3;
    u8 *pbVar4;
    u8 bVar5;
    u8 bStack_3;
    u8 abStack_2[2];

    pbVar4 = (u8 *)(g_8c4727b4 + 4 + a0 * 8);
    iVar1 = **(int **)(g_8c4727b4 + 0xfe8 + (1 - *(int *)(g_8c4727b4 + 0x10b4)) * 0x60 + (&g_8c26c728)[a0] * 4);
    if ((iVar1 == -1) || (iVar1 == -0x100)) {
        *(int *)(pbVar4 + 4) = *(int *)(pbVar4 + 4) + 1;
        if (*(u32 *)(pbVar4 + 4) <= *(u32 *)(g_8c4727b4 + 0x10dc)) {
            return 0;
        }
        bVar5 = 0;
        uVar3 = 0xffffffff;
    } else {
        if (*(int *)(g_8c4727b4 + 0x10c4) == 1) {
            pbVar2 = &bStack_3;
        } else {
            pbVar2 = abStack_2;
        }
        bVar5 = *pbVar2;
        uVar3 = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
    }
    pbVar4[1] = *pbVar4;
    *pbVar4 = bVar5;
    pbVar4[2] = (pbVar4[1] ^ *pbVar4) & *pbVar4;
    pbVar4[3] = (pbVar4[1] ^ *pbVar4) & ~*pbVar4;
    return uVar3;
}

/*
 * FUN_8c1f5048  0x8c1f5048
 * called by: FUN_8c1f442a, FUN_8c1f443c
 */
u32 FUN_8c1f5048(int a0, int a1) {
    int iVar1;
    int a5;
    u32 uVar2;
    u8 *a6;

    iVar1 = g_8c4727b4 + 4;
    a6 = (u8 *)(g_8c4727b4 + 0x28 + a0 * 0x2c);
    a5 = g_8c4727b4 + 0x44c + a0 * 0x78;
    uVar2 = *(u32 *)(g_8c4727b4 + 0xfe8 + (1 - *(int *)(g_8c4727b4 + 0x10b4)) * 0x60 + a0 * 4);
    a6[1] = *a6;
    a6[5] = a6[4];
    if (*(int *)(a6 + 0x1c) != 0) {
        *(u32 *)(a6 + 0x20) = *(u32 *)(a6 + 0x1c);
        *(u32 *)(a6 + 0x1c) = 0;
    }
    if (((int)(char)(&g_8c26c710)[a0] & 0x1fU) == 0) {
        uVar2 = FUN_8c1f51ec(a1, a5, a6, uVar2);
    } else {
        uVar2 = FUN_8c1f5290((int)(char)(&g_8c26c710)[a0] & 0x1fU, a1 * 8 + iVar1, a5, a6);
    }
    if (a6[7] != '\0') {
        *(u32 *)(a6 + 0x10) = *(u32 *)(a0 * 4 + (1 - *(int *)(g_8c4727b4 + 0x10b4)) * 0x60 + g_8c4727b4 + 0xfe8);
    }
    if (a6[0xd] != '\0') {
        a6[0xc] = 0;
        a6[0xd] = 0;
    }
    a6[0xc] = a6[0xc] | a6[2];
    a6[0xc] = a6[0xc] | a6[3];
    return uVar2;
}

/*
 * FUN_8c1f5146  0x8c1f5146
 * called by: FUN_8c1f51ec, FUN_8c1f51f8
 */
u32 FUN_8c1f5146(u8 *a0) {
    if (a0[7] == '\x01') {
        if (a0[8] == '\x05') {
            *a0 = 1;
        } else {
            *a0 = 0;
        }
    } else if (((u8)a0[8] == 0xff) || ((u8)a0[8] == 0)) {
        *a0 = 0;
    } else {
        *a0 = 1;
    }
    return 0;
}

/*
 * FUN_8c1f518e  0x8c1f518e
 * called by: FUN_8c1f51ec, FUN_8c1f51f8, FUN_8c1f5290
 */
u32 FUN_8c1f518e(int a0, u32 *a1) {
    u32 uVar1;
    u8 uStack_4;
    u8 uStack_3;
    u8 uStack_2;
    u8 uStack_1;

    uVar1 = *a1;
    uStack_4 = (u8)uVar1;
    uStack_3 = (u8)((u32)uVar1 >> 8);
    uStack_2 = (u8)((u32)uVar1 >> 0x10);
    uStack_1 = (u8)((u32)uVar1 >> 0x18);
    if (*(int *)(g_8c4727b4 + (int)0x10c4) == 1) {
        *(u8 *)(a0 + 0xb) = uStack_4;
        *(u8 *)(a0 + 10) = uStack_3;
        *(u8 *)(a0 + 9) = uStack_2;
        *(u8 *)(a0 + 8) = uStack_1;
    } else {
        *(u8 *)(a0 + 8) = uStack_4;
        *(u8 *)(a0 + 9) = uStack_3;
        *(u8 *)(a0 + 10) = uStack_2;
        *(u8 *)(a0 + 0xb) = uStack_1;
    }
    if (*(u8 *)(a0 + 8) == 0xff) {
        *(u32 *)(a0 + 0x14) = 0xffffffff;
    } else if ((short)(u16) * (u8 *)(a0 + 8) < 0xe0) {
        *(u32 *)(a0 + 0x14) = 0;
    } else {
        *(u32 *)(a0 + 0x14) = a1[1];
    }
    return 0;
}

/*
 * FUN_8c1f51ec  0x8c1f51ec
 * called by: FUN_8c1f5048
 */
u32 FUN_8c1f51ec(u32 unused_a0, int a1, u32 *a2, u32 *a3) {
    int *piVar1;
    u8 bVar2;
    int iVar3;
    u32 *ar5_00;
    u32 uVar4;

    uVar4 = 0;
    FUN_8c1f518e(a2, a3);
    ar5_00 = a3;
    FUN_8c1f5146(a2);
    iVar3 = (int)0x10c4;
    *(u8 *)((int)a2 + 2) = (*(u8 *)((int)a2 + 1) ^ (u8)*a2) & (u8)*a2;
    piVar1 = 0x8c4727b4;
    *(u8 *)((int)a2 + 3) = (*(u8 *)((int)a2 + 1) ^ (u8)*a2) & ~(u8)*a2;
    if (((*(int *)(*piVar1 + iVar3) == 1) && ((u8)a2[2] != 0xff)) && ((u8)a2[2] != 0)) {
        ar5_00 = (u32 *)((*a3 & 0xff) + 1);
        FUN_8c1f4780(a3, uVar4);
    }
    if ((u8)*a2 == 0) {
        bVar2 = 1;
    } else {
        bVar2 = 9;
    }
    *(u8 *)(a2 + 1) = bVar2;
    if (*(u8 *)((int)a2 + 2) != 0) {
        *(u8 *)(a1 + 0x10) = 1;
        ar5_00 = a2;
        FUN_8c1f53c2(a1, a2, a3);
    }
    if (*(u8 *)((int)a2 + 3) != 0) {
        FUN_8c1f5506(a1);
    }
    return 0;
}

/*
 * FUN_8c1f51f8  0x8c1f51f8
 */
u32 FUN_8c1f51f8(u32 unused_a0, u32 unused_a1, u32 *a2, u32 a3) {
    int *piVar1;
    u8 bVar2;
    int iVar3;
    u32 *ar5_00;
    int unaff_r12;
    u32 *unaff_r13;
    u32 *unaff_r14;

    FUN_8c1f518e(a2, a3);
    ar5_00 = unaff_r13;
    FUN_8c1f5146(unaff_r14);
    iVar3 = (int)0x10c4;
    *(u8 *)((int)unaff_r14 + 2) = (*(u8 *)((int)unaff_r14 + 1) ^ (u8)*unaff_r14) & (u8)*unaff_r14;
    piVar1 = 0x8c4727b4;
    *(u8 *)((int)unaff_r14 + 3) = (*(u8 *)((int)unaff_r14 + 1) ^ (u8)*unaff_r14) & ~(u8)*unaff_r14;
    if (((*(int *)(*piVar1 + iVar3) == 1) && ((u8)unaff_r14[2] != 0xff)) && ((u8)unaff_r14[2] != 0)) {
        ar5_00 = (u32 *)((*unaff_r13 & 0xff) + 1);
        FUN_8c1f4780(unaff_r13, ar5_00);
    }
    if ((u8)*unaff_r14 == 0) {
        bVar2 = 1;
    } else {
        bVar2 = 9;
    }
    *(u8 *)(unaff_r14 + 1) = bVar2;
    if (*(u8 *)((int)unaff_r14 + 2) != 0) {
        *(u8 *)(unaff_r12 + 0x10) = 1;
        ar5_00 = unaff_r14;
        FUN_8c1f53c2(unaff_r12, unaff_r14, unaff_r13);
        a2 = unaff_r13;
    }
    if (*(u8 *)((int)unaff_r14 + 3) != 0) {
        FUN_8c1f5506(unaff_r12);
    }
    return 0;
}

/*
 * FUN_8c1f5290  0x8c1f5290
 * called by: FUN_8c1f5048
 */
u32 FUN_8c1f5290(u32 a0, u8 *a1, int a2, char *a3, u32 *s0) {
    int *piVar1;
    char cVar2;
    int iVar3;
    char *ar5_00;
    u32 *ar6_00;
    FUN_8c1f518e(a3, s0);
    a3[2] = '\0';
    a3[3] = '\0';
    ar5_00 = (char *)(u32)(u8)a0;
    if ((a1[2] & (u8)a0) != 0) {
        a3[4] = '\x01';
        *a3 = '\0';
        *(int *)(a3 + 0x24) = *(int *)(a3 + 0x24) + 1;
    }
    if ((a1[3] & (u8)a0) != 0) {
        a3[4] = '\x04';
        *a3 = '\0';
        a3[3] = '\x01';
        a3[0x24] = '\0';
        a3[0x25] = '\0';
        a3[0x26] = '\0';
        a3[0x27] = '\0';
    }
    piVar1 = 0x8c4727b4;
    ar6_00 = (u32 *)(int)0xff;
    cVar2 = (char)0xff;
    if ((*a1 & (u8)a0) == 0) {
        a3[4] = cVar2;
        *a3 = '\0';
        goto LAB_8c1f535e;
    }
    if (a3[7] == '\0') {
        cVar2 = *a3;
    joined_r0x8c1f5348:
        if (cVar2 == '\0')
            goto LAB_8c1f535e;
    } else {
        if (a3[7] != '\x01') {
            if (a3[7] == '\x04') {
                a3[3] = '\x01';
                goto LAB_8c1f533a;
            }
            cVar2 = a3[7];
            goto joined_r0x8c1f5348;
        }
        if (a3[8] != '\x05') {
            iVar3 = (int)0x10d8;
            *(int *)(a3 + 0x24) = *(int *)(a3 + 0x24) + 1;
            if (*(u32 *)(a3 + 0x24) <= *(u32 *)(iVar3 + *piVar1)) {
                a3[4] = '\x01';
                goto LAB_8c1f535e;
            }
        LAB_8c1f533a:
            *a3 = '\0';
            a3[4] = cVar2;
            a3[0x24] = '\0';
            a3[0x25] = '\0';
            a3[0x26] = '\0';
            a3[0x27] = '\0';
            goto LAB_8c1f535e;
        }
        a3[2] = '\x01';
        *a3 = '\x01';
    }
    a3[4] = '\0';
LAB_8c1f535e:
    if ((((*a3 != '\0') && (a3[7] != '\0')) && (*(int *)(g_8c4727b4 + (int)0x10c4) == 1)) &&
        ((*s0 != 0xffffffff && (*s0 != (int)(int)0xffffff00)))) {
        ar5_00 = (char *)((*s0 & 0xff) + 1);
        FUN_8c1f4780(s0, ar5_00);
    }
    if (a3[2] != '\0') {
        *(u8 *)(a2 + 0x10) = 0;
        ar5_00 = a3;
        FUN_8c1f53c2(a2, a3, s0);
        ar6_00 = s0;
    }
    if (a3[3] != '\0') {
        *(u8 *)(a2 + 0x10) = 0;
        FUN_8c1f5506(a2);
    }
    return 0;
}

/*
 * FUN_8c1f53c2  0x8c1f53c2
 * called by: FUN_8c1f51ec, FUN_8c1f51f8, FUN_8c1f5290
 */
u32 FUN_8c1f53c2(u32 *a0, u32 unused_a1, int a2) {
    u8 uVar1;
    u8 bVar2;
    u8 *puVar3;
    u8 *pbVar4;
    u32 *puVar5;

    puVar3 = (u8 *)(a2 + 8);
    *a0 = (u32) * (u8 *)(a2 + 5) << 0x10 | (u32) * (u8 *)(a2 + 6) << 8 | (u32) * (u8 *)(a2 + 4) << 0x18 |
          (u32) * (u8 *)(a2 + 7);
    for (puVar5 = a0 + 1; puVar5 < a0 + 2; puVar5 = (u32 *)((int)puVar5 + 1)) {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *(u8 *)puVar5 = uVar1;
    }
    for (puVar5 = a0 + 2; puVar5 < a0 + 3; puVar5 = (u32 *)((int)puVar5 + 1)) {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *(u8 *)puVar5 = uVar1;
    }
    for (puVar5 = a0 + 3; puVar5 < a0 + 4; puVar5 = (u32 *)((int)puVar5 + 1)) {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *(u8 *)puVar5 = uVar1;
    }
    pbVar4 = puVar3 + 1;
    *(u8 *)((int)a0 + 0x11) = *puVar3;
    if ((char)a0[4] == '\0') {
        *(u8 *)((int)a0 + 0x12) = (&g_8c273a00)[*pbVar4 & 0xf];
        *(u8 *)((int)a0 + 0x13) = 0;
    } else {
        *(u8 *)((int)a0 + 0x12) = *pbVar4 & 3;
        *(u8 *)((int)a0 + 0x13) = *pbVar4 >> 2 & 3;
    }
    if (*(int *)(g_8c4727b4 + 0x10c4) == 1) {
        for (puVar5 = a0 + 5; puVar5 < (u32 *)((int)a0 + 0x33); puVar5 = (u32 *)((int)puVar5 + 1)) {
            bVar2 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            *(u8 *)puVar5 = bVar2;
        }
    } else {
        for (puVar5 = a0 + 5; pbVar4 = pbVar4 + 1, puVar5 < (u32 *)((int)a0 + 0x32);
             puVar5 = (u32 *)((int)puVar5 + 1)) {
            *(u8 *)puVar5 = *pbVar4;
        }
        *(u8 *)((int)a0 + 0x32) = 0;
    }
    *(u8 *)((int)a0 + 0x33) = 0;
    for (puVar5 = a0 + 0xd; puVar5 < a0 + 0x1c; puVar5 = (u32 *)((int)puVar5 + 1)) {
        bVar2 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        *(u8 *)puVar5 = bVar2;
    }
    *(u8 *)(a0 + 0x1c) = 0;
    *(u16 *)(a0 + 0x1d) = *(u16 *)pbVar4;
    *(u16 *)((int)a0 + 0x76) = *(u16 *)(pbVar4 + 2);
    return 0;
}

/*
 * FUN_8c1f5506  0x8c1f5506
 * called by: FUN_8c1f51ec, FUN_8c1f51f8, FUN_8c1f5290, g2dma_1f4794
 */
u32 FUN_8c1f5506(int a0) {
    u8 *puVar1;

    FUN_8c1f59dc(a0, 0, 0x1e);
    *(u8 *)(a0 + 0x14) = 0x28;
    *(u8 *)(a0 + 0x15) = 0x6e;
    *(u8 *)(a0 + 0x16) = 0x6f;
    *(u8 *)(a0 + 0x17) = 0x6e;
    *(u8 *)(a0 + 0x18) = 0x65;
    puVar1 = (u8 *)(a0 + 0x1a);
    *(u8 *)(a0 + 0x19) = 0x29;
    do {
        *puVar1 = 0x20;
        puVar1 = puVar1 + 1;
    } while (puVar1 < (u8 *)(a0 + 0x33));
    *(u8 *)(a0 + 0x33) = 0;
    return 0;
}

/*
 * FUN_8c1f550a  0x8c1f550a
 */
u32 FUN_8c1f550a(int a0, u32 unused_a1, u32 a2) {
    u8 *puVar1;

    FUN_8c1f59dc(a0, 0, a2);
    *(u8 *)(a0 + 0x14) = 0x28;
    *(u8 *)(a0 + 0x15) = 0x6e;
    *(u8 *)(a0 + 0x16) = 0x6f;
    *(u8 *)(a0 + 0x17) = 0x6e;
    *(u8 *)(a0 + 0x18) = 0x65;
    puVar1 = (u8 *)(a0 + 0x1a);
    *(u8 *)(a0 + 0x19) = 0x29;
    do {
        *puVar1 = 0x20;
        puVar1 = puVar1 + 1;
    } while (puVar1 < (u8 *)(a0 + 0x33));
    *(u8 *)(a0 + 0x33) = 0;
    return 0;
}

/*
 * FUN_8c1f5556  0x8c1f5556
 * called by: FUN_8c1efe14
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5556(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5582(a0, a1);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5558  0x8c1f5558
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5558(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5582(a0, a1);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5582  0x8c1f5582
 * called by: FUN_8c1f05d6, FUN_8c1f4102, FUN_8c1f4110, FUN_8c1f5556, FUN_8c1f5558
 */
u32 FUN_8c1f5582(u32 a0, u32 a1) {
    u32 uVar1;
    u32 auStack_8[2];

    auStack_8[0] = a1;
    uVar1 = FUN_8c1f4a44(a0, 9, auStack_8, 1);
    return uVar1;
}

/*
 * FUN_8c1f55b8  0x8c1f55b8
 * called by: FUN_8c1efd7c
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f55b8(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f55e4(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f55ba  0x8c1f55ba
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f55ba(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f55e4(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f55e4  0x8c1f55e4
 * called by: FUN_8c1f0444, FUN_8c1f3dd8, FUN_8c1f3de2, FUN_8c1f3ef4, FUN_8c1f55b8, FUN_8c1f55ba
 */
u32 FUN_8c1f55e4(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c1f4a44(a0, 1, 0, 0);
    return uVar1;
}

/*
 * FUN_8c1f55fc  0x8c1f55fc
 * called by: FUN_8c1efdee
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f55fc(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5628(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f55fe  0x8c1f55fe
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f55fe(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5628(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5628  0x8c1f5628
 * called by: FUN_8c1f057a, FUN_8c1f4102, FUN_8c1f4110, FUN_8c1f55fc, FUN_8c1f55fe
 */
u32 FUN_8c1f5628(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c1f4a44(a0, 4, 0, 0);
    return uVar1;
}

/*
 * FUN_8c1f5640  0x8c1f5640
 * called by: FUN_8c1efdc8
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5640(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f566c(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5642  0x8c1f5642
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5642(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f566c(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f566c  0x8c1f566c
 * called by: FUN_8c1f04fc, FUN_8c1f4102, FUN_8c1f4110, FUN_8c1f5640, FUN_8c1f5642
 */
u32 FUN_8c1f566c(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c1f4a44(a0, 3, 0, 0);
    return uVar1;
}

/*
 * FUN_8c1f5684  0x8c1f5684
 * called by: FUN_8c1efda2
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5684(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f56b0(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5686  0x8c1f5686
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5686(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f56b0(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f56b0  0x8c1f56b0
 * called by: FUN_8c1f04a0, FUN_8c1f4102, FUN_8c1f4110, FUN_8c1f5684, FUN_8c1f5686
 */
u32 FUN_8c1f56b0(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c1f4a44(a0, 2, 0, 0);
    return uVar1;
}

/*
 * FUN_8c1f56c8  0x8c1f56c8
 * called by: FUN_8c1efe3a
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f56c8(u32 a0, u32 a1, u32 a2) {
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f56f4(a0, a1, a2);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f56ca  0x8c1f56ca
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f56ca(u32 a0, u32 a1, u32 a2) {
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f56f4(a0, a1, a2);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f56f4  0x8c1f56f4
 * called by: FUN_8c1f0650, FUN_8c1f56c8, FUN_8c1f56ca
 */
u32 FUN_8c1f56f4(u32 a0, u32 a1, int a2) {
    u32 uVar1;
    u32 uStack_10;
    int iStack_c;

    iStack_c = a2 << 0x18;
    uStack_10 = a1;
    uVar1 = FUN_8c1f4a44(a0, 10, &uStack_10, 2);
    return uVar1;
}

/*
 * FUN_8c1f571a  0x8c1f571a
 * called by: FUN_8c1efe80
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f571a(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;
    u32 in_stack_00000000;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f574c(a0, a1, a2, a3, in_stack_00000000);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f571c  0x8c1f571c
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f571c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f574c(a0, a1, a2, a3);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f574c  0x8c1f574c
 * called by: FUN_8c1f06ac, FUN_8c1f571a, FUN_8c1f571c
 */
u32 FUN_8c1f574c(u32 a0, u32 a1, int a2, int a3, u32 s0) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = a2 << 0x18 | a3 << 0x10 | s0;
    uStack_10 = a1;
    uVar1 = FUN_8c1f4a44(a0, 0xb, &uStack_10, 2);
    return uVar1;
}

/*
 * FUN_8c1f577a  0x8c1f577a
 * called by: FUN_8c1efeac
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f577a(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;
    u32 in_stack_00000000;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f57b4(a0, a1, a2, a3, in_stack_00000000);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f577c  0x8c1f577c
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f577c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f57b4(a0, a1, a2, a3);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f57b4  0x8c1f57b4
 * called by: FUN_8c1f070c, FUN_8c1f577a, FUN_8c1f577c
 */
u32 FUN_8c1f57b4(u32 a0, u32 a1, int a2, int a3, u32 s0) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = a2 << 0x18 | a3 << 0x10 | s0;
    uStack_10 = a1;
    uVar1 = FUN_8c1f4a44(a0, 0xc, &uStack_10, 2);
    return uVar1;
}

/*
 * FUN_8c1f57e4  0x8c1f57e4
 * called by: FUN_8c1efee0
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f57e4(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;
    u32 in_stack_00000000;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5816(a0, a1, a2, a3, in_stack_00000000);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f57e6  0x8c1f57e6
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f57e6(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5816(a0, a1, a2, a3);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5816  0x8c1f5816
 * called by: FUN_8c1f0790, FUN_8c1f57e4, FUN_8c1f57e6
 */
u32 FUN_8c1f5816(u32 a0, u32 a1, int a2, int a3, u32 s0) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = a2 << 0x18 | a3 << 0x10 | s0;
    uStack_10 = a1;
    uVar1 = FUN_8c1f4a44(a0, 0xd, &uStack_10, 2);
    return uVar1;
}

/*
 * FUN_8c1f5850  0x8c1f5850
 * called by: FUN_8c1eff9c
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5850(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f587c(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5852  0x8c1f5852
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5852(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f587c(a0);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f587c  0x8c1f587c
 * called by: FUN_8c1f5850, FUN_8c1f5852
 */
u32 FUN_8c1f587c(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c1f4a44(a0, (int)0xfc, 0, 0);
    return uVar1;
}

/*
 * FUN_8c1f5894  0x8c1f5894
 * called by: FUN_8c1eff0c
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5894(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f58c0(a0, a1);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5896  0x8c1f5896
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5896(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f58c0(a0, a1);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f58c0  0x8c1f58c0
 * called by: FUN_8c1f07f0, FUN_8c1f5894, FUN_8c1f5896
 */
u32 FUN_8c1f58c0(u32 a0, u32 a1) {
    u32 uVar1;
    u32 uStack_c;

    uStack_c = 0x20;
    uVar1 = FUN_8c1f4a44(a0, 0x10, &uStack_c, 1);
    return uVar1;
}

/*
 * FUN_8c1f58e4  0x8c1f58e4
 * called by: FUN_8c1eff32
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f58e4(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5910(a0, a1);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f58e6  0x8c1f58e6
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f58e6(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5910(a0, a1);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5910  0x8c1f5910
 * called by: FUN_8c1f086c, FUN_8c1f58e4, FUN_8c1f58e6
 */
u32 FUN_8c1f5910(u32 a0, u32 a1) {
    u32 uVar1;
    u32 uStack_c;

    uStack_c = 0x10;
    uVar1 = FUN_8c1f4a44(a0, 0xf, &uStack_c, 1);
    return uVar1;
}

/*
 * FUN_8c1f5934  0x8c1f5934
 * called by: FUN_8c1eff58
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5934(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;
    u32 uVar2;
    u32 in_PR;

    bVar1 = *(&DATA_8c1f5a2c);
    *(&DATA_8c1f5a2c) = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5970(a0, a1, a2, a3);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5936  0x8c1f5936
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f5936(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(a0, a1, a2, a3, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f5970(a0, a1, a2, a3);
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f5970  0x8c1f5970
 * called by: FUN_8c1f08c8, FUN_8c1f5934, FUN_8c1f5936
 */
u32 FUN_8c1f5970(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_10;

    uStack_10 = a1;
    uVar1 = FUN_8c1f4a44(a0, 0xe, &uStack_10, 1);
    return uVar1;
}

/*
 * thunk_FUN_8c1f4ec6  0x8c1f5994
 * called by: FUN_8c1effc2
 */
u32 thunk_FUN_8c1f4ec6(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c1f4ec6(a0);
    return uVar1;
}

/*
 * FUN_8c1f599e  0x8c1f599e
 * name hint from a string it uses: FATAL ERROR Cannot get semap
 * strings: "***FATAL ERROR:Cannot get semaphore!\n"
 */
u32 FUN_8c1f599e(void) {
    u32 r4;
    u32 r5;
    u32 r6;
    u32 r7;
    u8 bVar1;
    u32 uVar2;
    u32 *in_r3;
    u32 in_PR;

    bVar1 = *(u8 *)*in_r3;
    *(u8 *)*in_r3 = bVar1 | 0x80;
    if (bVar1 != 0) {
        debug_log_printf(r4, r5, r6, r7, "***FATAL ERROR:Cannot get semaphore!\n", in_PR);
        return 0xfffffffe;
    }
    uVar2 = FUN_8c1f59c8();
    *(&DATA_8c1f5a2c) = 0;
    return uVar2;
}

/*
 * FUN_8c1f59c8  0x8c1f59c8
 * called by: FUN_8c1f3dd8, FUN_8c1f3de2, FUN_8c1f3ef4, FUN_8c1f4102, FUN_8c1f4110, FUN_8c1f599e
 */
u32 FUN_8c1f59c8(void) {
    **(u32 **)((int)0xfcc + g_8c4727b4) = **(u32 **)((int)0xfcc + g_8c4727b4) | 0x80000000;
    return 0;
}

/*
 * FUN_8c1f59dc  0x8c1f59dc
 * called by: FUN_8c1f5506, FUN_8c1f550a, g2dma_1f4794
 */
int FUN_8c1f59dc(u32 *a0, u32 a1, int a2) {
    int iVar1;

    iVar1 = 0;
    if (0 < a2) {
        do {
            iVar1 = iVar1 + 1;
            *a0 = a1;
            a0 = a0 + 1;
        } while (iVar1 < a2);
    }
    return a2;
}

/*
 * FUN_8c1f59f2  0x8c1f59f2
 * called by: FUN_8c1f4202, FUN_8c1f420e, FUN_8c1f4a44, FUN_8c1f4cb8
 */
u32 FUN_8c1f59f2(u32 a0) {
    return 0xfffffff & a0;
}

/*
 * FUN_8c1f59fc  0x8c1f59fc
 * called by: g2dma_1f4794
 */
int FUN_8c1f59fc(void) {
    int iVar1;

    iVar1 = (int)0x10f4;
    *(u32 *)(iVar1 + g_8c4727b4) = 0xa05f6c00;
    return iVar1;
}

/*
 * FUN_8c1f5a30  0x8c1f5a30
 * called by: FUN_8c1f5b28, FUN_8c1f5b7c, FUN_8c1f5bb4, FUN_8c1f5c04
 */
u32 FUN_8c1f5a30(u32 *a0) {
    u32 uVar1;
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    uVar1 = (u32)(int)0xffffff0f;
    *a0 = (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4 | (u32)in_Q << 8 | (u32)in_M << 9 | (u32)in_FD << 0xf |
            (u32)in_BL << 0x1c | (u32)in_RB << 0x1d | (u32)in_MD << 0x1e) &
               uVar1 |
           0xf0;
}

/*
 * FUN_8c1f5a48  0x8c1f5a48
 * called by: FUN_8c1f5b28, FUN_8c1f5b7c, FUN_8c1f5bb4, FUN_8c1f5c04
 */
u32 FUN_8c1f5a48(u32 *a0) {
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    return (*a0 & 0xf) << 4 | ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4 | (u32)in_Q << 8 | (u32)in_M << 9 |
                               (u32)in_FD << 0xf | (u32)in_BL << 0x1c | (u32)in_RB << 0x1d | (u32)in_MD << 0x1e) &
                                  (int)(int)0xffffff0f;
}

/*
 * FUN_8c1f5a5e  0x8c1f5a5e
 * called by: FUN_8c1f5a86, FUN_8c1f5ac6, FUN_8c1f5b28, FUN_8c1f5b7c, FUN_8c1f5bb4, FUN_8c1f5c04
 */
int FUN_8c1f5a5e(u32 *a0) {
    int iVar1;

    if (g_8c00fff0 == 0) {
        FUN_8c1f5b1a(0x8c00fc00, 0x78);
    }
    iVar1 = g_8c00fff0;
    *a0 = g_8c00fff4;
    return iVar1;
}

/*
 * FUN_8c1f5a86  0x8c1f5a86
 * called by: FUN_8c1f5c04
 */
u32 FUN_8c1f5a86(int a0) {
    int *piVar1;
    int iVar2;
    u8 auStack_8[8];

    piVar1 = (int *)FUN_8c1f5a5e(auStack_8);
    iVar2 = 0;
    while (true) {
        if (*piVar1 <= iVar2) {
            return 0xfffffffd;
        }
        if (a0 == piVar1[iVar2 * 2 + 2])
            break;
        iVar2 = iVar2 + 1;
    }
    return iVar2;
}

/*
 * FUN_8c1f5ac6  0x8c1f5ac6
 * called by: FUN_8c1f5b28, FUN_8c1f5b7c, FUN_8c1f5bb4
 */
u32 FUN_8c1f5ac6(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    u8 auStack_18[8];

    piVar2 = (int *)FUN_8c1f5a5e(auStack_18);
    puVar1 = (&memcmp);
    iVar4 = 0;
    while (true) {
        if (*piVar2 <= iVar4) {
            return 0xfffffffe;
        }
        iVar3 = (*(code *)puVar1)(a0, piVar2[iVar4 * 2 + 2] + 0x10, 0x10, a3);
        if (iVar3 == 0)
            break;
        iVar4 = iVar4 + 1;
    }
    return iVar4;
}

/*
 * FUN_8c1f5b1a  0x8c1f5b1a
 * called by: FUN_8c1f5a5e
 */
u32 FUN_8c1f5b1a(u32 a0, u32 a1) {
    u32 *puVar1;
    u32 in_r0;

    puVar1 = 0x8c00fff4;
    g_8c00fff0 = a0;
    *puVar1 = a1;
    return in_r0;
}

/*
 * FUN_8c1f5b28  0x8c1f5b28
 */
u32 FUN_8c1f5b28(u32 a0, u32 *a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 auStack_18[4];
    u8 auStack_14[4];
    u32 uStack_10;
    int iStack_c;

    uStack_10 = a0;
    FUN_8c1f5a30(auStack_18);
    iStack_c = FUN_8c1f5a5e(auStack_14);
    iVar1 = FUN_8c1f5ac6(uStack_10, a1, unused_a2, a3);
    if (iVar1 < 0) {
        uVar2 = 0;
    } else {
        a1 = (u32 *)(iStack_c + 8 + iVar1 * 8);
        uVar2 = *a1;
        a1[1] = a1[1] + 1;
    }
    FUN_8c1f5a48(auStack_18);
    return uVar2;
}

/*
 * FUN_8c1f5b7c  0x8c1f5b7c
 */
u32 FUN_8c1f5b7c(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 auStack_14[4];
    u8 auStack_10[4];
    u32 uStack_c;
    int iStack_8;

    uStack_c = a0;
    FUN_8c1f5a30(auStack_14);
    iStack_8 = FUN_8c1f5a5e(auStack_10);
    iVar1 = FUN_8c1f5ac6(uStack_c, unused_a1, unused_a2, a3);
    if (-1 < iVar1) {
        iVar1 = iVar1 * 8 + iStack_8 + 8;
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    }
    uVar2 = FUN_8c1f5a48(auStack_14);
    return uVar2;
}

/*
 * FUN_8c1f5bb4  0x8c1f5bb4
 * called by: FUN_8c1f5c9e, FUN_8c1f5cac
 */
u32 FUN_8c1f5bb4(int a0, int *a1, u32 unused_a2, u32 a3) {
    int *piVar1;
    int iVar2;
    u8 auStack_14[4];
    int iStack_10;
    u8 auStack_c[8];

    iStack_10 = a0;
    FUN_8c1f5a30(auStack_14);
    piVar1 = (int *)FUN_8c1f5a5e(auStack_c);
    iVar2 = FUN_8c1f5ac6(iStack_10 + 0x10, a1, unused_a2, a3);
    if (iVar2 < 0) {
        iVar2 = *piVar1;
        piVar1[iVar2 * 2 + 2] = iStack_10;
        a1 = piVar1 + iVar2 * 2 + 2;
        a1[1] = 0;
        *piVar1 = *piVar1 + 1;
    }
    FUN_8c1f5a48(auStack_14);
    return 0;
}

/*
 * FUN_8c1f5c04  0x8c1f5c04
 * called by: FUN_8c1f5cf6, FUN_8c1f5d04
 */
u32 FUN_8c1f5c04(u32 a0, u32 unused_a1, int *a2, int *a3) {
    int iVar1;
    int *piVar2;
    int a5;
    u32 uVar3;
    u8 auStack_14[4];
    u8 auStack_10[4];
    u32 uStack_c;

    uStack_c = a0;
    FUN_8c1f5a30(auStack_14);
    piVar2 = (int *)FUN_8c1f5a5e(auStack_10);
    a5 = FUN_8c1f5a86(uStack_c);
    if (a5 < 0) {
        uVar3 = 0xfffffffe;
    } else {
        *piVar2 = *piVar2 + -1;
        for (; a5 < *piVar2; a5 = a5 + 1) {
            a3 = piVar2 + 2;
            piVar2[a5 * 2 + 2] = piVar2[(a5 + 1) * 2 + 2];
            a3[a5 * 2 + 1] = a3[(a5 + 1) * 2 + 1];
        }
        iVar1 = a5 * 2;
        a2 = piVar2 + a5 * 2 + 2;
        a5 = 0;
        piVar2[iVar1 + 2] = 0;
        a2[1] = 0;
        uVar3 = 0;
    }
    FUN_8c1f5a48(auStack_14);
    return uVar3;
}

/*
 * FUN_8c1f5c9e  0x8c1f5c9e
 * called by: FUN_8c1ef430
 * strings: "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 19"; "Lib Handle StartLib Handle End  \nov
 * Ver.1.00Build:Apr 23 19"; "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 19"
 */
u32 FUN_8c1f5c9e(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    char *ar5_00;
    int ar4_00;

    iVar1 = memcmp(a0 + 0x30, "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n", 0x10);
    if (iVar1 == 0) {
        iVar1 = 1;
        while (true) {
            ar5_00 = "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n" + 0x10;
            ar4_00 = iVar1 * 0x20 + a0 + 0x20;
            uVar2 = 0x10;
            iVar3 = memcmp(ar4_00 + 0x10,
                           "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n" + 0x10, 0x10);
            if (iVar3 == 0)
                break;
            FUN_8c1f5bb4(ar4_00, ar5_00, uVar2, a3);
            iVar1 = iVar1 + 1;
        }
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1f5cac  0x8c1f5cac
 * name hint from a string it uses: Lib Handle StartLib Handle E
 * strings: "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 19"; "Lib Handle StartLib Handle End  \nov
 * Ver.1.00Build:Apr 23 19"; "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 19"
 */
u32 FUN_8c1f5cac(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    char *a5;
    int unaff_r10;
    int a4;

    iVar1 = memcmp(a0 + 0x30, "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n", a2);
    if (iVar1 == 0) {
        iVar1 = 1;
        while (true) {
            a5 = "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n" + 0x10;
            a4 = iVar1 * 0x20 + unaff_r10 + 0x20;
            uVar2 = 0x10;
            iVar3 = memcmp(a4 + 0x10,
                           "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n" + 0x10, 0x10);
            if (iVar3 == 0)
                break;
            FUN_8c1f5bb4(a4, a5, uVar2, a3);
            iVar1 = iVar1 + 1;
        }
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1f5cf6  0x8c1f5cf6
 * called by: FUN_8c1ef438
 * strings: "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 19"; "Lib Handle StartLib Handle End  \nov
 * Ver.1.00Build:Apr 23 19"; "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 19"
 */
u32 FUN_8c1f5cf6(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    char *ar5_00;
    int ar4_00;

    iVar1 = memcmp(a0 + 0x30, "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n", 0x10);
    if (iVar1 == 0) {
        iVar1 = 1;
        while (true) {
            ar5_00 = "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n" + 0x10;
            ar4_00 = iVar1 * 0x20 + a0 + 0x20;
            uVar2 = 0x10;
            iVar3 = memcmp(ar4_00 + 0x10,
                           "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n" + 0x10, 0x10);
            if (iVar3 == 0)
                break;
            FUN_8c1f5c04(ar4_00, ar5_00, uVar2, a3);
            iVar1 = iVar1 + 1;
        }
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1f5d04  0x8c1f5d04
 * name hint from a string it uses: Lib Handle StartLib Handle E
 * strings: "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 19"; "Lib Handle StartLib Handle End  \nov
 * Ver.1.00Build:Apr 23 19"; "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 19"
 */
u32 FUN_8c1f5d04(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    char *a5;
    int unaff_r10;
    int a4;

    iVar1 = memcmp(a0 + 0x30, "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n", a2);
    if (iVar1 == 0) {
        iVar1 = 1;
        while (true) {
            a5 = "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n" + 0x10;
            a4 = iVar1 * 0x20 + unaff_r10 + 0x20;
            uVar2 = 0x10;
            iVar3 = memcmp(a4 + 0x10,
                           "Lib Handle StartLib Handle End  \nov Ver.1.00Build:Apr 23 1999 22:13:01\n" + 0x10, 0x10);
            if (iVar3 == 0)
                break;
            FUN_8c1f5c04(a4, a5, uVar2, a3);
            iVar1 = iVar1 + 1;
        }
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1f5d6c  0x8c1f5d6c
 * called by: FUN_8c01c6f4, FUN_8c01c774
 */
u32 FUN_8c1f5d6c(u32 a0, u8 *a1) {
    int iVar1;
    u8 uStack_10;
    u8 uStack_f;
    u8 uStack_e;
    u8 uStack_d;
    u32 uStack_c;

    uStack_c = a0;
    iVar1 = FUN_8c1f6494(a0);
    if (iVar1 == 0) {
        return 0xfffffffe;
    }
    uStack_10 = *a1;
    uStack_f = a1[1];
    uStack_e = a1[2];
    uStack_d = a1[3];
    iVar1 = FUN_8c1eff58(uStack_c, 8, &uStack_10, 1);
    if (iVar1 < 0) {
        return 0xffffffff;
    }
    return 0;
}

/*
 * FUN_8c1f5dd0  0x8c1f5dd0
 * called by: FUN_8c102bd0
 */
u8 *FUN_8c1f5dd0(u32 a0, int a1, int a2, u32 a3) {
    u16 uVar1;
    u32 *puVar2;
    u32 *puVar3;
    u32 *puVar4;
    int ar4_00;
    u8 *puVar5;
    int iVar6;
    u32 uVar7;
    u8 *puVar8;
    int ar5_00;
    int ar6_00;
    int a4;
    int ar4_01;

    ar4_00 = 0x8c4727c4;
    puVar3 = 0x8c4727b8;
    puVar2 = 0x8c4727bc;
    ar5_00 = 0;
    g_8c472d04 = a0;
    puVar4 = 0x8c4727c0;
    *puVar2 = 0;
    puVar5 = (&memset);
    ar6_00 = (int)0x4e0;
    *puVar3 = 1;
    *puVar4 = 0;
    (*(code *)puVar5)(ar4_00, 0, ar6_00, a3);
    if ((a2 != 0) && (a1 != 0)) {
        g_8c4727bc = 1;
        FUN_8c1ef78c(a1, a2);
        ar5_00 = a2;
    }
    iVar6 = 0x8c472ca4;
    ar4_01 = 0;
    do {
        a4 = ar4_01 * 0x34 + ar4_00;
        uVar7 = FUN_8c1efd26(ar4_01);
        *(u32 *)(a4 + 0x30) = uVar7;
        FUN_8c1f5f4e(a4);
        *(u32 *)(ar4_01 * 4 + iVar6) = 0;
        *(u8 *)(0x8c472d0a + ar4_01) = 0;
        *(u8 *)(0x8c472d22 + ar4_01) = 0;
        puVar8 = 0x8c472d09;
        uVar1 = 0xa0;
        ar4_01 = ar4_01 + 1;
    } while (ar4_01 < 0x18);
    g_8c472d08 = (char)0xc0;
    *puVar8 = (char)uVar1;
    return puVar8;
}

/*
 * FUN_8c1f5ea8  0x8c1f5ea8
 */
u8 *FUN_8c1f5ea8(u32 a0, u32 a1, int a2, int a3, int s0) {
    u16 uVar1;
    u32 *puVar2;
    u32 *puVar3;
    int ar4_00;
    u8 *puVar4;
    int iVar5;
    u32 uVar6;
    u8 *puVar7;
    int ar5_00;
    int ar6_00;
    int a4;
    int ar4_01;

    ar4_00 = 0x8c4727c4;
    puVar3 = 0x8c4727b8;
    puVar2 = 0x8c4727bc;
    ar5_00 = 0;
    ar6_00 = (int)0x4e0;
    g_8c472d04 = a0;
    *puVar2 = 0;
    puVar4 = (&memset);
    puVar2 = 0x8c4727c0;
    *puVar3 = 1;
    *puVar2 = 0;
    (*(code *)puVar4)(ar4_00, 0, ar6_00, a3);
    if ((a3 != 0) && (a2 != 0)) {
        g_8c4727bc = 1;
        FUN_8c1ef7e6(a1, a2, a3, s0);
        ar5_00 = a2;
        ar6_00 = a3;
    }
    iVar5 = 0x8c472d0a;
    ar4_01 = 0;
    do {
        a4 = ar4_01 * 0x34 + ar4_00;
        uVar6 = FUN_8c1efd26(ar4_01);
        *(u32 *)(a4 + 0x30) = uVar6;
        FUN_8c1f5f4e(a4);
        *(u32 *)(0x8c472ca4 + ar4_01 * 4) = 0;
        *(u8 *)(ar4_01 + iVar5) = 0;
        *(u8 *)(0x8c472d22 + ar4_01) = 0;
        puVar7 = 0x8c472d09;
        uVar1 = 0xa0;
        ar4_01 = ar4_01 + 1;
    } while (ar4_01 < 0x18);
    g_8c472d08 = (char)0xc0;
    *puVar7 = (char)uVar1;
    return puVar7;
}

/*
 * FUN_8c1f5f4e  0x8c1f5f4e
 * name hint from a string it uses: no device
 * called by: FUN_8c1f5dd0, FUN_8c1f5ea8, FUN_8c1f61c6, FUN_8c1f620e, FUN_8c1f62f0, FUN_8c1f62f6
 * strings: "(no device)"
 */
u32 FUN_8c1f5f4e(u32 *a0) {
    *a0 = 0;
    a0[1] = 0;
    if (g_8c472d04 == 0) {
        a0[2] = 0;
        a0[3] = 0xffffffff;
        a0[4] = 0;
        a0[5] = 0;
    } else {
        a0[2] = 0xffffffff;
        a0[3] = 0;
        a0[4] = 0xffffffff;
        a0[5] = 0xffffffff;
    }
    *(u16 *)(a0 + 6) = 0;
    *(u16 *)((int)a0 + 0x1a) = 0;
    *(u16 *)((int)a0 + 0x22) = 0;
    *(u16 *)(a0 + 8) = 0;
    *(u16 *)((int)a0 + 0x1e) = 0;
    *(u16 *)(a0 + 7) = 0;
    a0[10] = 0;
    a0[9] = "(no device)";
    return 0;
}

/*
 * FUN_8c1f5f8c  0x8c1f5f8c
 * called by: FUN_8c1f61c6, FUN_8c1f620e
 */
u32 FUN_8c1f5f8c(int a0, int a1, int a2) {
    u32 uVar1;
    u16 uVar2;
    short sVar3;
    char cVar4;
    int iVar5;
    u32 uVar6;
    u8 *pbVar7;
    u8 *pbVar8;
    char *pcVar9;

    iVar5 = *(int *)(a1 + 8);
    pbVar8 = (u8 *)(iVar5 + 0xb);
    uVar6 = *(u16 *)(iVar5 + 8) | 0xffff0000;
    pcVar9 = (char *)(0x8c472d0a + a2);
    if (*pbVar8 < g_8c472d08) {
        if (g_8c472d09 < *pbVar8) {
            if (*pcVar9 != '\0') {
                uVar6 = uVar6 & 0xfffdffff;
            }
        } else {
            uVar6 = uVar6 | 0x20000;
            *pcVar9 = '\0';
        }
    } else {
        uVar6 = uVar6 & 0xfffdffff;
        *pcVar9 = '\x01';
    }
    pbVar7 = (u8 *)(iVar5 + 10);
    if (*pbVar7 < g_8c472d08) {
        if (g_8c472d09 < *pbVar7) {
            if (*(char *)(0x8c472d22 + a2) != '\0') {
                uVar6 = uVar6 & 0xfffeffff;
            }
            goto LAB_8c1f605e;
        }
        cVar4 = '\0';
        uVar6 = uVar6 | 0x10000;
    } else {
        uVar6 = uVar6 & 0xfffeffff;
        cVar4 = '\x01';
    }
    *(char *)(0x8c472d22 + a2) = cVar4;
LAB_8c1f605e:
    uVar1 = 0x10000;
    if (g_8c472d04 == 0) {
        uVar6 = uVar6 ^ 0xffffffff;
    }
    *(u32 *)(a0 + 8) = uVar6;
    if ((*(u32 *)(a0 + 4) & uVar1) == 0) {
        uVar2 = 0;
    } else {
        uVar2 = (u16)*pbVar7;
    }
    *(u16 *)(a0 + 0x18) = uVar2;
    if ((*(u32 *)(a0 + 4) & 0x20000) == 0) {
        uVar2 = 0;
    } else {
        uVar2 = (u16)*pbVar8;
    }
    *(u16 *)(a0 + 0x1a) = uVar2;
    if ((*(u32 *)(a0 + 4) & 0x40000) == 0) {
        sVar3 = 0;
    } else {
        sVar3 = *(u8 *)(iVar5 + 0xc) - 0x80;
    }
    *(short *)(a0 + 0x1c) = sVar3;
    uVar6 = 0x100000;
    if ((*(u32 *)(a0 + 4) & 0x80000) == 0) {
        sVar3 = 0;
    } else {
        sVar3 = *(u8 *)(iVar5 + 0xd) - 0x80;
    }
    *(short *)(a0 + 0x1e) = sVar3;
    uVar1 = 0x200000;
    if ((*(u32 *)(a0 + 4) & uVar6) == 0) {
        sVar3 = 0;
    } else {
        sVar3 = *(u8 *)(iVar5 + 0xe) - 0x80;
    }
    *(short *)(a0 + 0x20) = sVar3;
    if ((*(u32 *)(a0 + 4) & uVar1) == 0) {
        sVar3 = 0;
    } else {
        sVar3 = *(u8 *)(iVar5 + 0xf) - 0x80;
    }
    *(short *)(a0 + 0x22) = sVar3;
    return 0x22;
}

/*
 * FUN_8c1f6120  0x8c1f6120
 * called by: FUN_8c1f6142
 */
u32 FUN_8c1f6120(u32 a0) {
    u32 uVar1;

    uVar1 = a0 >> 10 & 0x3fff00;
    if ((0x20000 & a0) != 0) {
        uVar1 = uVar1 | (int)0xf0;
    }
    if ((a0 & 0x10000) != 0) {
        uVar1 = uVar1 | 0xf;
    }
    return uVar1;
}

/*
 * FUN_8c1f6142  0x8c1f6142
 * called by: FUN_8c1f61c6, FUN_8c1f620e
 */
int FUN_8c1f6142(u32 *a0, u32 *a1) {
    int iVar1;
    u32 auStack_10[2];
    if (((*a1 & 1) == 0) || (iVar1 = FUN_8c1f002a(auStack_10, a1), -1 < iVar1)) {
        iVar1 = FUN_8c1f0312(5);
        if (iVar1 == 1) {
            iVar1 = FUN_8c1f6120(auStack_10[0]);
            a0[1] = iVar1;
        } else {
            a0[1] = auStack_10[0];
        }
        *a0 = a0[1];
        a0[9] = a1 + 5;
    } else {
        a0[1] = 0;
        *a0 = 0;
    }
    return iVar1;
}

/*
 * FUN_8c1f6192  0x8c1f6192
 * called by: FUN_8c1f61c6, FUN_8c1f620e
 */
u32 FUN_8c1f6192(u32 unused_a0, u32 unused_a1, int a2) {
    u16 uVar1;

    uVar1 = (u16) * (u8 *)(a2 + 4);
    if (uVar1 == 0xfc) {
        return 0xff0000fc;
    }
    if ((((uVar1 != 0xff) && (uVar1 != 8)) && (uVar1 != 5)) && ((uVar1 != 6 && (uVar1 != 0)))) {
        return 0xff000000;
    }
    return 0;
}

/*
 * FUN_8c1f61c6  0x8c1f61c6
 * called by: FUN_8c258e70, game_frame
 */
u32 FUN_8c1f61c6(u32 unused_a0, u32 *a1, int unused_a2, u32 unused_a3, u32 ain0) {
    int ar6_00;
    u32 *ar5_00;
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int ar4_00;
    int ar4_01;
    int iVar4;

    if (g_8c26c7c0 == 0) {
        return ain0;
    }
    ar4_00 = 0;
    do {
        ar6_00 = FUN_8c1efd14(ar4_00, a1);
        ar5_00 = (u32 *)FUN_8c1efd26(ar4_00);
        iVar4 = ar4_00 * 0x34;
        ar4_01 = iVar4 + 0x8c4727c4;
        *(u32 **)(iVar4 + 0x8c4727f4) = ar5_00;
        *(u32 *)(iVar4 + 0x8c4727f0) = *(u32 *)(iVar4 + 0x8c4727cc);
        a1 = ar5_00;
        unused_a2 = ar6_00;
        uVar1 = FUN_8c1f6192(ar4_01, ar5_00, ar6_00);
        *(u32 *)(&g_8c472ca4 + ar4_00 * 4) = uVar1;
        iVar2 = libgcc_divide_helper_010614(ar4_00, 6);
        if (iVar2 == 0) {
            if ((((*ar5_00 & 0x21) == 0) || (*(char *)(ar6_00 + 2) != '\0')) || (*(char *)(ar6_00 + 4) != '\b')) {
                iVar2 = FUN_8c1f5f4e(ar4_01);
            } else {
                FUN_8c1f6142(ar4_01, ar5_00);
                unused_a2 = ar4_00;
                iVar2 = FUN_8c1f5f8c(ar4_01, ar6_00, ar4_00);
            }
            *(u32 *)(iVar4 + 0x8c4727d0) = ~*(u32 *)(iVar4 + 0x8c4727cc);
            if (g_8c472d04 == 0) {
                uVar3 = *(u32 *)(iVar4 + 0x8c4727f0) ^ *(u32 *)(iVar4 + 0x8c4727cc);
                a1 = (u32 *)(*(u32 *)(iVar4 + 0x8c4727cc) & uVar3);
                *(u32 **)(iVar4 + 0x8c4727d4) = a1;
                uVar3 = uVar3 & *(u32 *)(iVar4 + 0x8c4727d0);
            } else {
                uVar3 = *(u32 *)(iVar4 + 0x8c4727f0) ^ *(u32 *)(iVar4 + 0x8c4727cc) ^ 0xffffffff;
                a1 = (u32 *)(*(u32 *)(iVar4 + 0x8c4727cc) | uVar3);
                *(u32 **)(iVar4 + 0x8c4727d4) = a1;
                uVar3 = uVar3 | *(u32 *)(iVar4 + 0x8c4727d0);
            }
            *(u32 *)(iVar4 + 0x8c4727d8) = uVar3;
        } else {
            *(u32 **)(iVar4 + 0x8c4727e8) = ar5_00 + 5;
        }
        ar4_00 = ar4_00 + 1;
    } while (ar4_00 < 0x18);
    return iVar2;
}

/*
 * FUN_8c1f620e  0x8c1f620e
 */
int FUN_8c1f620e(u32 unused_a0, u32 *a1) {
    int a6;
    u32 *a5;
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 unaff_r8;
    u32 unaff_r9;
    int unaff_r10;
    int unaff_r13;
    int a4;
    int iVar4;

    do {
        a6 = FUN_8c1efd14(unaff_r13, a1);
        a5 = (u32 *)FUN_8c1efd26(unaff_r13);
        iVar4 = unaff_r13 * 0x34;
        a4 = iVar4 + 0x8c4727c4;
        *(u32 **)(iVar4 + 0x8c4727f4) = a5;
        *(u32 *)(iVar4 + 0x8c4727f0) = *(u32 *)(iVar4 + 0x8c4727cc);
        a1 = a5;
        uVar1 = FUN_8c1f6192(a4, a5, a6);
        *(u32 *)(&g_8c472ca4 + unaff_r13 * 4) = uVar1;
        iVar2 = libgcc_divide_helper_010614(unaff_r13, unaff_r9);
        if (iVar2 == 0) {
            if ((((*a5 & 0x21) == 0) || (*(char *)(a6 + 2) != '\0')) || (*(char *)(a6 + 4) != '\b')) {
                iVar2 = FUN_8c1f5f4e(a4);
            } else {
                FUN_8c1f6142(a4, a5);
                iVar2 = FUN_8c1f5f8c(a4, a6, unaff_r13);
            }
            *(u32 *)(iVar4 + 0x8c4727d0) = ~*(u32 *)(iVar4 + 0x8c4727cc);
            if (g_8c472d04 == 0) {
                uVar3 = *(u32 *)(iVar4 + 0x8c4727f0) ^ *(u32 *)(iVar4 + 0x8c4727cc);
                a1 = (u32 *)(*(u32 *)(iVar4 + 0x8c4727cc) & uVar3);
                *(u32 **)(iVar4 + 0x8c4727d4) = a1;
                uVar3 = uVar3 & *(u32 *)(iVar4 + 0x8c4727d0);
            } else {
                uVar3 = *(u32 *)(iVar4 + 0x8c4727f0) ^ *(u32 *)(iVar4 + 0x8c4727cc) ^ unaff_r8;
                a1 = (u32 *)(*(u32 *)(iVar4 + 0x8c4727cc) | uVar3);
                *(u32 **)(iVar4 + 0x8c4727d4) = a1;
                uVar3 = uVar3 | *(u32 *)(iVar4 + 0x8c4727d0);
            }
            *(u32 *)(iVar4 + 0x8c4727d8) = uVar3;
        } else {
            *(u32 **)(iVar4 + 0x8c4727e8) = a5 + 5;
        }
        unaff_r13 = unaff_r13 + 1;
    } while (unaff_r13 < unaff_r10);
    return iVar2;
}

/*
 * FUN_8c1f62cc  0x8c1f62cc
 * called by: FUN_8c1f7558, input_device_select_and_reset, input_poll_device_state
 */
int FUN_8c1f62cc(int a0) {
    return a0 * 0x34 + 0x8c4727c4;
}

/*
 * FUN_8c1f62f0  0x8c1f62f0
 * called by: FUN_8c102d40
 */
u32 FUN_8c1f62f0(void) {
    u32 uVar1;
    u32 ar5_00;
    int ar6_00;
    u32 uVar2;
    u32 *puVar3;
    u32 ar4_00;

    if (g_8c4727bc != 0) {
        FUN_8c1efcae(0x8c4594c0);
    }
    ar6_00 = (int)0x4e0;
    ar5_00 = 0;
    memset(0x8c4727c4);
    uVar2 = (int)0x4e0 + 0x8c4727c4;
    puVar3 = 0x8c472ca4;
    ar4_00 = 0x8c4727c4;
    do {
        uVar1 = FUN_8c1f5f4e(ar4_00);
        ar4_00 = ar4_00 + 0x34;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    } while (ar4_00 < uVar2);
    return uVar1;
}

/*
 * FUN_8c1f62f6  0x8c1f62f6
 */
u32 FUN_8c1f62f6(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int *in_r1;
    u32 a5;
    int ar6_00;
    u32 uVar2;
    u32 *puVar3;
    u32 a4;

    if (*in_r1 != 0) {
        FUN_8c1efcae(a0, a1, a2, a3);
    }
    ar6_00 = (int)0x4e0;
    a5 = 0;
    memset(0x8c4727c4, 0, ar6_00);
    uVar2 = (int)0x4e0 + 0x8c4727c4;
    puVar3 = 0x8c472ca4;
    a4 = 0x8c4727c4;
    do {
        uVar1 = FUN_8c1f5f4e(a4);
        a4 = a4 + 0x34;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    } while (a4 < uVar2);
    return uVar1;
}

/*
 * FUN_8c1f6338  0x8c1f6338
 * called by: input_device_select_and_reset
 */
u32 FUN_8c1f6338(int a0) {
    return *(u32 *)(a0 * 4 + 0x8c472ca4);
}

/*
 * FUN_8c1f6342  0x8c1f6342
 * called by: FUN_8c01cbc8, FUN_8c1f7558
 */
u32 FUN_8c1f6342(void) {
    u32 uVar1;

    uVar1 = FUN_8c1efd26();
    return uVar1;
}

/*
 * FUN_8c1f636a  0x8c1f636a
 */
u32 FUN_8c1f636a(void) {
    u32 uVar1;

    uVar1 = FUN_8c1f0312(0);
    return uVar1;
}

/*
 * FUN_8c1f6386  0x8c1f6386
 */
u32 FUN_8c1f6386(void) {
    u32 in_r0;
    int unaff_r14;

    if (unaff_r14 != 0) {
        FUN_8c1f026a(8, unaff_r14);
        in_r0 = FUN_8c1f026a(9, 0xffffffff);
        g_8c4727c0 = unaff_r14;
    }
    return in_r0;
}

/*
 * FUN_8c1f63a6  0x8c1f63a6
 */
u32 FUN_8c1f63a6(void) {
    u32 uVar1;

    FUN_8c1f026a(8, 0);
    FUN_8c1f026a(9, 0);
    uVar1 = set_handler_slot32(10, 0);
    g_8c4727c0 = 0;
    return uVar1;
}

/*
 * FUN_8c1f63e4  0x8c1f63e4
 */
u32 FUN_8c1f63e4(void) {
    u32 uVar1;

    uVar1 = FUN_8c1f0312(9);
    return uVar1;
}

/*
 * FUN_8c1f63f2  0x8c1f63f2
 */
int FUN_8c1f63f2(void) {
    int iVar1;

    iVar1 = FUN_8c1f0392();
    if (0 < iVar1) {
        iVar1 = *(int *)(&g_8c26c7d0 + iVar1 * 4);
    }
    return iVar1;
}

/*
 * FUN_8c1f6454  0x8c1f6454
 */
u32 FUN_8c1f6454(void) {
    int in_r0;
    u32 uVar1;

    if (in_r0 == 0) {
        uVar1 = 0;
    } else if (in_r0 == 6) {
        uVar1 = 1;
    } else if (in_r0 == 0xc) {
        uVar1 = 2;
    } else {
        if (in_r0 != 0x12) {
            return in_r0;
        }
        uVar1 = 3;
    }
    uVar1 = FUN_8c1f0398(uVar1);
    return uVar1;
}

/*
 * FUN_8c1f6494  0x8c1f6494
 * called by: FUN_8c1f5d6c, FUN_8c1f6516, FUN_8c1f667e
 */
u32 FUN_8c1f6494(u32 a0) {
    u32 ar5_00;
    int iVar1;
    u8 auStack_8[8];

    ar5_00 = FUN_8c1efd26(a0);
    iVar1 = FUN_8c1f01ae(auStack_8, ar5_00);
    return (u32)(-1 < iVar1);
}

/*
 * FUN_8c1f64b6  0x8c1f64b6
 */
u8 *FUN_8c1f64b6(int a0, u32 unused_a1, int a2, u32 *a3) {
    int iVar1;
    u32 uVar2;

    if ((*a3 & 4) == 0) {
        uVar2 = 0xfffffffe;
    } else if (*(char *)(a2 + 4) == '\a') {
        uVar2 = 0;
    } else if (*(char *)(a2 + 4) == -4) {
        uVar2 = 0xfffffffd;
    } else {
        uVar2 = 0xfffffffe;
    }
    iVar1 = (u32)(u8)(&g_8c26c80c)[a0] * 0xc;
    if (*(int *)(iVar1 + 0x8c472d48) == 0) {
        return &g_8c26c80c;
    }
    /* WARNING: Could not emulate address calculation at 0x8c1f6508 */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar1 + 0x8c472d48))(uVar2, *(u32 *)(iVar1 + 0x8c472d44));
    return (u8 *)uVar2;
}

/*
 * FUN_8c1f6516  0x8c1f6516
 */
u32 FUN_8c1f6516(int a0, u16 *a1, code *a2, u32 a3) {
    int iVar1;
    code *a6;
    u32 a7;
    u8 uStack_18;
    u8 uStack_17;
    u8 uStack_16;
    u8 uStack_15;
    u8 uStack_14;
    u8 uStack_13;
    u8 uStack_12;
    u8 uStack_11;

    iVar1 = (u32)(u8)(&g_8c26c80c)[a0] * 0xc;
    *(u16 **)(iVar1 + 0x8c472d40) = a1;
    *(u32 *)(iVar1 + 0x8c472d44) = a3;
    *(code **)(iVar1 + 0x8c472d48) = a2;
    a6 = a2;
    a7 = a3;
    iVar1 = FUN_8c1f6494(a0);
    if (iVar1 == 0) {
        iVar1 = -2;
    } else {
        uStack_18 = *(u8 *)a1;
        uStack_17 = (u8)((u16)*a1 >> 8);
        uStack_16 = *(u8 *)(a1 + 1);
        uStack_15 = *(u8 *)((int)a1 + 3);
        uStack_14 = *(u8 *)(a1 + 2);
        uStack_13 = *(u8 *)((int)a1 + 5);
        uStack_12 = *(u8 *)(a1 + 3);
        uStack_11 = (&g_8c26c824)[*(u8 *)((int)a1 + 7) & 7];
        a6 = NULL;
        a7 = 0;
        iVar1 = FUN_8c1f070c(a0, 8, 0, 0, 0, &uStack_18, 2, &LAB_8c1f64b6);
        if (iVar1 < 0) {
            iVar1 = -1;
        } else {
            iVar1 = 0;
        }
    }
    if ((iVar1 < 0) && (a2 != NULL)) {
        (*a2)(iVar1, a3, a6, a7);
    }
    return 0;
}

/*
 * FUN_8c1f65e8  0x8c1f65e8
 */
u32 FUN_8c1f65e8(int a0, u32 unused_a1, int a2, u32 *a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int *piVar5;

    uVar2 = *a3;
    iVar1 = (u32)(u8)(&g_8c26c80c)[a0] * 0xc;
    piVar5 = (int *)(iVar1 + 0x8c472d40);
    if (((uVar2 & 4) == 0) || (uVar2 = (u32) * (u8 *)(a2 + 4), uVar2 != 8)) {
        uVar3 = 0xfffffffe;
    } else {
        iVar4 = *(int *)(a2 + 8);
        *(u16 *)*piVar5 = (u16) * (u8 *)(iVar4 + 9) * 0x100 + (u16) * (u8 *)(iVar4 + 8);
        *(u8 *)(*piVar5 + 2) = *(u8 *)(iVar4 + 10);
        *(u8 *)(*piVar5 + 3) = *(u8 *)(iVar4 + 0xb);
        *(u8 *)(*piVar5 + 4) = *(u8 *)(iVar4 + 0xc);
        *(u8 *)(*piVar5 + 5) = *(u8 *)(iVar4 + 0xd);
        *(u8 *)(*piVar5 + 6) = *(u8 *)(iVar4 + 0xe);
        if ((*(char *)(*piVar5 + 2) == '\x02') && (0x1d < *(u8 *)(*piVar5 + 3))) {
            *(u8 *)(*piVar5 + 3) = 0x1d;
        }
        uVar3 = 0;
        uVar2 = (u32)(char)(&g_8c26c82c)[*(u8 *)(iVar4 + 0xf) & 7];
        *(u8 *)(*piVar5 + 7) = (&g_8c26c82c)[*(u8 *)(iVar4 + 0xf) & 7];
    }
    if (*(int *)(iVar1 + 0x8c472d48) != 0) {
        /* WARNING: Could not emulate address calculation at 0x8c1f6674 */
        /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(iVar1 + 0x8c472d48))(uVar3, *(u32 *)(iVar1 + 0x8c472d44));
        return uVar3;
    }
    return uVar2;
}

/*
 * FUN_8c1f667e  0x8c1f667e
 */
u32 FUN_8c1f667e(int a0, u32 a1, code *a2, u32 a3) {
    int iVar1;
    code *a6;
    u32 a7;

    iVar1 = (u32)(u8)(&g_8c26c80c)[a0] * 0xc;
    *(u32 *)(iVar1 + 0x8c472d40) = a1;
    *(u32 *)(iVar1 + 0x8c472d44) = a3;
    *(code **)(iVar1 + 0x8c472d48) = a2;
    a6 = a2;
    a7 = a3;
    iVar1 = FUN_8c1f6494(a0);
    if (iVar1 == 0) {
        iVar1 = -2;
    } else {
        a6 = NULL;
        a7 = 0;
        iVar1 = FUN_8c1f06ac(a0, 8, 0, 0, 0, &LAB_8c1f65e8);
        if (iVar1 < 0) {
            iVar1 = -1;
        } else {
            iVar1 = 0;
        }
    }
    if ((iVar1 < 0) && (a2 != NULL)) {
        (*a2)(iVar1, a3, a6, a7);
    }
    return 0;
}

/*
 * FUN_8c1f670c  0x8c1f670c
 * called by: FUN_8c1fcf90
 */
u32 *FUN_8c1f670c(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 *puVar1;
    u32 *puVar2;

    memset(0x8c472da0, 0, (int)0x1af8);
    puVar2 = 0x8c4748a0;
    puVar1 = 0x8c47489c;
    g_8c474898 = 0;
    *puVar1 = 0;
    *puVar2 = 0;
    return puVar2;
}

/*
 * FUN_8c1f672c  0x8c1f672c
 * called by: FUN_8c1fcf90
 */
int *FUN_8c1f672c(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 ain0;
    int iVar1;
    u32 ar5_00;
    u32 ar6_00;
    int *piVar2;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;
    u32 in_PR;

    ain0 = (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
    piVar2 = (int *)&g_8c472da0;
    iVar1 = 0;
    do {
        if (*piVar2 == 0)
            break;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x35f;
    } while (iVar1 < 2);
    if (iVar1 == 2) {
        piVar2 = NULL;
    } else {
        piVar2[0x82] = a0;
        piVar2[0x83] = 0;
        piVar2[0x81] = 0;
        memset(piVar2 + 0x84, 0, 0xb68);
        ar6_00 = 0x100;
        ar5_00 = 0;
        memset(piVar2 + 0x41, 0, 0x100);
        FUN_8c01422c(piVar2 + 0x41, ar5_00, ar6_00, a3, ain0, in_PR);
        *piVar2 = 1;
        g_8c4748a0 = g_8c4748a0 + 1;
    }
    return piVar2;
}

/*
 * FUN_8c1f67c2  0x8c1f67c2
 * called by: FUN_8c1fcfa6
 */
int FUN_8c1f67c2(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    int ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    int *piVar2;
    u8 auStack_b0[156];

    ar7_00 = a3;
    memset(auStack_b0, 0, 0x98);
    if (*(int *)(a0 + 0x20c) == *(int *)(a0 + 0x208)) {
        iVar1 = -1;
    } else {
        iVar1 = 0;
        for (piVar2 = (int *)(a0 + 0x210); piVar2[3] != 0; piVar2 = piVar2 + 0x49) {
            iVar1 = iVar1 + 1;
        }
        ar6_00 = 0x100;
        piVar2[2] = 0;
        piVar2[3] = 1;
        ar5_00 = a0 + 0x104;
        piVar2[5] = *(int *)(a0 + 0x204);
        *piVar2 = a2;
        piVar2[1] = a3 >> 2;
        piVar2[0x46] = 0;
        piVar2[4] = 0;
        piVar2[0x47] = 0;
        memmove(piVar2 + 6, ar5_00, 0x100);
        FUN_8c01422c(auStack_b0, ar5_00, ar6_00, ar7_00, a2, a1);
        memmove(piVar2 + 6, auStack_b0, 0x100);
        piVar2[6] = ((a3 >> 2) - 1) * 4 + a2;
        piVar2[8] = a1;
    }
    return iVar1;
}

/*
 * FUN_8c1f689e  0x8c1f689e
 * called by: FUN_8c1f68ec, FUN_8c1f68f6, FUN_8c1f6a34
 */
int FUN_8c1f689e(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    *(int *)(0x20c + a0) = *(int *)(0x20c + a0) + -1;
    iVar1 = (int)0x118;
    *(u32 *)(a1 + 0xc) = 0;
    if (*(int *)(iVar1 + a1) != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1f68b8. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(iVar1 + a1))();
        return uVar2;
    }
    return iVar1;
}

/*
 * FUN_8c1f68ca  0x8c1f68ca
 */
u32 FUN_8c1f68ca(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 in_r0;
    int unaff_r12;
    int unaff_r13;
    int *a4;

    a4 = 0x8c472da0;
    do {
        if (*a4 != 0) {
            in_r0 = FUN_8c1f68ec(a4, unused_a1, a2, a3);
        }
        unaff_r13 = unaff_r13 + 1;
        a4 = (int *)((int)a4 + (int)0xd7c);
    } while (unaff_r13 < unaff_r12);
    return in_r0;
}

/*
 * FUN_8c1f68ec  0x8c1f68ec
 * called by: FUN_8c1f68ca
 */
u32 FUN_8c1f68ec(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int ar5_00;

    ar5_00 = 0x210 + a0;
    for (iVar2 = 0; iVar2 < *(int *)(0x208 + a0); iVar2 = iVar2 + 1) {
        if (*(int *)(ar5_00 + 0xc) != 0) {
            FUN_8c1f689e(a0, ar5_00, a2, a3);
        }
        ar5_00 = ar5_00 + 0x124;
    }
    uVar1 = memset(a0, 0, (int)0xd7c);
    return uVar1;
}

/*
 * FUN_8c1f68f6  0x8c1f68f6
 */
u32 FUN_8c1f68f6(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int unaff_r12;
    int unaff_r13;
    int a5;

    a5 = 0x210 + unaff_r13;
    for (; unaff_r12 < *(int *)(0x208 + unaff_r13); unaff_r12 = unaff_r12 + 1) {
        if (*(int *)(a5 + 0xc) != 0) {
            FUN_8c1f689e(unaff_r13, a5, a2, a3);
        }
        a5 = a5 + 0x124;
    }
    uVar1 = memset(0, (int)0xd7c);
    return uVar1;
}

/*
 * FUN_8c1f692a  0x8c1f692a
 */
u32 FUN_8c1f692a(void) {
    u32 uVar1;

    *(u32 *)(*(int *)(g_8c474898 + 0xd78) + 0xc) = 3;
    uVar1 = FUN_8c1f69f2(0);
    return uVar1;
}

/*
 * FUN_8c1f6964  0x8c1f6964
 * called by: FUN_8c1f6992
 */
u32 FUN_8c1f6964(int a0, int a1) {
    int iVar1;

    iVar1 = a1 * 0x124 + a0 + 0x210;
    if (*(int *)(iVar1 + 0xc) == 1) {
        FUN_8c1f69d6(a0, a1);
        *(u32 *)(iVar1 + 0xc) = 2;
        return 0;
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f696e  0x8c1f696e
 */
u32 FUN_8c1f696e(u32 a0, u32 a1) {
    int in_r3;
    int in_MACL;

    if (*(int *)(in_MACL + in_r3 + 0xc) == 1) {
        FUN_8c1f69d6(a0, a1);
        *(u32 *)(in_MACL + in_r3 + 0xc) = 2;
        return 0;
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f6992  0x8c1f6992
 */
int FUN_8c1f6992(int a0, int a1) {
    int a5;
    int iVar1;

    iVar1 = 0x210 + a0;
    for (a5 = 0; a5 < *(int *)(0x208 + a0); a5 = a5 + 1) {
        if ((*(int *)(iVar1 + 0xc) != 0) && (*(int *)(iVar1 + 0x10) <= a1)) {
            FUN_8c1f6964(a0, a5);
        }
        iVar1 = iVar1 + 0x124;
    }
    return (int)0x208;
}

/*
 * FUN_8c1f69d6  0x8c1f69d6
 * called by: FUN_8c1f6964, FUN_8c1f696e
 */
int FUN_8c1f69d6(int a0, int a1) {
    int in_r0;
    int iVar1;

    iVar1 = a1 * 0x124 + 0x210 + a0;
    if (*(int *)(iVar1 + 0xc) != 0) {
        in_r0 = (int)0x204;
        *(u32 *)(iVar1 + 0x14) = *(u32 *)(in_r0 + a0);
    }
    return in_r0;
}

/*
 * FUN_8c1f69f2  0x8c1f69f2
 * called by: FUN_8c1f692a
 */
int FUN_8c1f69f2(int a0) {
    int *piVar1;
    u8 *puVar2;
    int iVar3;
    int iVar4;

    puVar2 = (&FUN_8c01422c);
    piVar1 = 0x8c474898;
    iVar4 = 0x7fffffff;
    if (-1 < a0) {
        iVar4 = *(int *)((int)0x204 + g_8c474898) + a0;
    }
    iVar3 = (int)0xd78;
    *(int *)(*(int *)((int)0xd78 + g_8c474898) + 0x14) = iVar4;
    iVar4 = (*(code *)puVar2)(*(int *)(iVar3 + *piVar1) + 0x18);
    if (iVar4 == 0) {
        iVar4 = FUN_8c013e4c(*piVar1 + 4, 1);
    }
    return iVar4;
}

/*
 * FUN_8c1f69fa  0x8c1f69fa
 */
int FUN_8c1f69fa(int a0, u32 a1, u32 a2, u32 a3, int ain0) {
    int iVar1;
    int *unaff_r14;
    char in_T;
    u32 in_PR;
    u32 in_stack_00000000;

    if (in_T == '\0') {
        iVar1 = 0x7fffffff;
    } else {
        iVar1 = *(int *)(*unaff_r14 + 0x204) + a0;
    }
    *(int *)(*(int *)(ain0 + *unaff_r14) + 0x14) = iVar1;
    iVar1 = FUN_8c01422c(*(int *)(*unaff_r14 + 0xd78) + 0x18, a1, a2, a3, in_PR, in_stack_00000000);
    if (iVar1 == 0) {
        iVar1 = FUN_8c013e4c(*unaff_r14 + 4, 1);
    }
    return iVar1;
}

/*
 * FUN_8c1f6a30  0x8c1f6a30
 * called by: thunk_FUN_8c1f6a30
 */
int FUN_8c1f6a30(void) {
    int *piVar1;
    u8 *puVar2;
    int iVar3;

    puVar2 = (&FUN_8c01422c);
    piVar1 = 0x8c474898;
    iVar3 = (int)0xd78;
    *(int *)(*(int *)((int)0xd78 + g_8c474898) + 0x14) = *(int *)((int)0x204 + g_8c474898) + 1;
    iVar3 = (*(code *)puVar2)(*(int *)(iVar3 + *piVar1) + 0x18);
    if (iVar3 == 0) {
        iVar3 = FUN_8c013e4c(*piVar1 + 4, 1);
    }
    return iVar3;
}

/*
 * FUN_8c1f6a34  0x8c1f6a34
 * called by: FUN_8c1fcfbe
 */
u32 FUN_8c1f6a34(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int a5;
    u32 in_PR;
    u8 in_FPSCR_RM;
    u8 in_FPSCR_FLAG;
    u8 in_FPSCR_ENABLE;
    u8 in_FPSCR_CAUSE;
    u8 in_FPSCR_DN;
    u8 in_FPSCR_FR;

    g_8c47489c = g_8c474898;
    a5 = a0 + 0x210;
    g_8c474898 = a0;
    FUN_8c01422c(a0 + 4, a1, a2, a3,
                 (u32)in_FPSCR_RM | (u32)in_FPSCR_FLAG << 2 | (u32)in_FPSCR_ENABLE << 7 | (u32)in_FPSCR_CAUSE << 0xc |
                     (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_FR << 0x15,
                 in_PR);
    for (iVar2 = 0; iVar2 < *(int *)(a0 + 0x208); iVar2 = iVar2 + 1) {
        *(int *)(a0 + 0xd78) = a5;
        iVar1 = *(int *)(a5 + 0xc);
        if (iVar1 != 0) {
            if (iVar1 == 3) {
                FUN_8c1f689e(a0, a5, a2, a3);
            } else if (iVar1 == 1) {
                if (*(u32 *)(a5 + 0x14) <= *(u32 *)(a0 + 0x204)) {
                    FUN_8c013e4c(a5 + 0x18, 1);
                }
            } else if (iVar1 == 2) {
                *(u32 *)(a5 + 0xc) = 3;
                *(code **)(a5 + 0x20) = FUN_8c1f692a;
            }
        }
        a5 = a5 + 0x124;
    }
    *(int *)(a0 + 0x204) = *(int *)(a0 + 0x204) + 1;
    g_8c474898 = g_8c47489c;
    return 0x204;
}

/*
 * FUN_8c1f6b14  0x8c1f6b14
 * called by: FUN_8c1f70c0, FUN_8c1f716c, FUN_8c1f7170
 */
u32 FUN_8c1f6b14(u32 a0, u32 a1, int a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    int iVar9;
    int iVar10;
    u32 a5;

    iVar4 = a2;
    uVar7 = a3;
    iVar3 = FUN_8c1f0d94(4, a0, a2, a3);
    puVar2 = (&FUN_8c1f881c);
    puVar1 = (&memmove);
    if (iVar3 == 0) {
        iVar3 = (int)0x3fc;
        iVar9 = 0;
        do {
            iVar4 = (*(code *)puVar2)(iVar9, a1, iVar4, uVar7);
            if (iVar4 != 0)
                goto LAB_8c1f6b84;
            iVar4 = 0x3c;
            (*(code *)puVar1)(iVar9 * 0x3c + a2, a1, 0x3c, uVar7);
            iVar9 = iVar9 + 1;
        } while (iVar9 < iVar3);
        iVar9 = FUN_8c1f0d94(3, a0, iVar4, uVar7);
        if (iVar9 == 0) {
            iVar9 = (int)0x1a8;
            iVar10 = 0;
            do {
                iVar4 = (*(code *)puVar2)(iVar10, a1, iVar4, uVar7);
                if (iVar4 != 0) {
                LAB_8c1f6b84:
                    g_8c4748a8 = 7;
                    return 0xffffffff;
                }
                iVar4 = 0x3c;
                (*(code *)puVar1)(iVar10 * 0x3c + a3, a1, 0x3c, uVar7);
                iVar10 = iVar10 + 1;
            } while (iVar10 < iVar9);
            iVar4 = FUN_8c1f0d94(4, a0, iVar4, uVar7);
            if (iVar4 == 0) {
                iVar5 = (int)0x254;
                iVar4 = iVar9;
                uVar7 = a3;
                uVar8 = a1;
                iVar10 = FUN_8c1f6d3e(iVar5, iVar9, a3, a1);
                iVar5 = FUN_8c1f1080();
                if ((iVar10 + 3 <= iVar5) || (iVar4 = FUN_8c1f0e98(0), iVar4 == 0)) {
                    FUN_8c1f6ce2(2, a1, uVar7, uVar8);
                    puVar1 = (&FUN_8c1f884c);
                    iVar10 = (int)0x6360;
                    iVar4 = (int)0x254;
                    for (a5 = a3; a5 < a3 + iVar10; a5 = a5 + 0x3c) {
                        iVar5 = (*(code *)puVar1)(iVar4, a5, uVar7, uVar8);
                        if (iVar5 == -1)
                            goto LAB_8c1f6cc2;
                        iVar4 = iVar4 + 1;
                    }
                    FUN_8c1f6ce2(1, a1, uVar7, uVar8);
                    uVar6 = a0;
                    iVar4 = FUN_8c1f0d94(3, a0, uVar7, uVar8);
                    if ((iVar4 == 0) && (iVar4 = FUN_8c1f0e98(0), iVar4 == 0)) {
                        iVar4 = 0;
                        do {
                            iVar10 = (*(code *)puVar1)(iVar4, iVar4 * 0x3c + a3, uVar7, uVar8);
                            if (iVar10 == -1)
                                goto LAB_8c1f6cc2;
                            iVar4 = iVar4 + 1;
                        } while (iVar4 < iVar9);
                        iVar4 = FUN_8c1f0d94(4, a0, uVar7, uVar8);
                        if (iVar4 == 0) {
                            FUN_8c1f6ce2(3, a1, uVar7, uVar8);
                            uVar6 = 0;
                            iVar4 = iVar3;
                            iVar9 = a2;
                            uVar8 = a1;
                            iVar10 = FUN_8c1f6d3e(0, iVar3, a2, a1);
                            iVar5 = FUN_8c1f1080();
                            if (iVar5 < iVar10 + 2) {
                                iVar4 = FUN_8c1f0e98(0);
                                if (iVar4 != 0)
                                    goto LAB_8c1f6cc2;
                                FUN_8c1f6ce2(3, a1, iVar9, uVar8);
                            }
                            iVar4 = 0;
                            do {
                                iVar10 = (*(code *)puVar1)(iVar4, iVar4 * 0x3c + a2, iVar9, uVar8);
                                if (iVar10 == -1)
                                    goto LAB_8c1f6cc2;
                                iVar4 = iVar4 + 1;
                            } while (iVar4 < iVar3);
                            FUN_8c1f6ce2(0, a1, iVar9, uVar8);
                            iVar4 = FUN_8c1f0d94(3, a0, iVar9, uVar8);
                            if (iVar4 == 0) {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
LAB_8c1f6cc2:
    g_8c4748a8 = 8;
    return 0xffffffff;
}

/*
 * FUN_8c1f6ce2  0x8c1f6ce2
 * name hint from a string it uses: SEGA FH01 OK
 * called by: FUN_8c1f6b14
 * strings: "SEGA_FH01_OK"; "SEGA_FH01_EXIST"; "SEGA_FH01_PROCESS1"; "SEGA_FH01_PROCESS2"
 */
u32 FUN_8c1f6ce2(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    char *ar4_00;
    u32 ar5_00;
    u32 ar6_00;

    ar5_00 = 0xff;
    ar6_00 = 0x3c;
    memset(a1, 0xff, 0x3c);
    if (a0 == 0) {
        ar4_00 = "SEGA_FH01_OK";
    } else if (a0 == 1) {
        ar4_00 = "SEGA_FH01_EXIST";
    } else if (a0 == 2) {
        ar4_00 = "SEGA_FH01_PROCESS1";
    } else {
        if (a0 != 3) {
            return 0xffffffff;
        }
        ar4_00 = "SEGA_FH01_PROCESS2";
    }
    FUN_8c010998();
    iVar1 = FUN_8c1f884c(0x3fc, a1, ar6_00, a3);
    if (iVar1 == -1) {
        return 0xffffffff;
    }
    return iVar1;
}

/*
 * FUN_8c1f6d3e  0x8c1f6d3e
 * called by: FUN_8c1f6b14
 */
int FUN_8c1f6d3e(int a0, int a1, int a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;

    puVar1 = (&FUN_8c1f881c);
    uVar5 = 1;
    iVar3 = 0;
    iVar4 = 0;
    if (0 < a1) {
        do {
            iVar2 = (*(code *)puVar1)(a0, a3, uVar5);
            if (iVar2 != 0) {
                return 0xffffffff;
            }
            iVar2 = memcmp(a3, a2, 0x3c);
            iVar4 = iVar4 + 1;
            if (iVar2 != 0) {
                iVar3 = iVar3 + 1;
            }
            a2 = a2 + 0x3c;
            a0 = a0 + 1;
        } while (iVar4 < a1);
    }
    return iVar3;
}

/*
 * FUN_8c1f6d56  0x8c1f6d56
 */
int FUN_8c1f6d56(int a0, int a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    int unaff_r9;
    u32 unaff_r10;
    int iVar3;
    int unaff_r13;

    puVar1 = (&FUN_8c1f881c);
    iVar3 = a1;
    if (0 < unaff_r9) {
        do {
            iVar2 = (*(code *)puVar1)(a0, unaff_r10, a2, a3);
            if (iVar2 != 0) {
                return 0xffffffff;
            }
            a2 = 0x3c;
            iVar2 = memcmp(unaff_r10, unaff_r13, 0x3c);
            iVar3 = iVar3 + 1;
            if (iVar2 != 0) {
                a1 = a1 + 1;
            }
            unaff_r13 = unaff_r13 + 0x3c;
            a0 = a0 + 1;
        } while (iVar3 < unaff_r9);
    }
    return a1;
}

/*
 * FUN_8c1f6dcc  0x8c1f6dcc
 * called by: FUN_8c1f6e0c, FUN_8c1f6e5e, FUN_8c1f6f20, FUN_8c1f6f2a, FUN_8c1f716c, FUN_8c1f7170, FUN_8c1f7b64,
 * FUN_8c1f7c40 (+1 more)
 */
u32 FUN_8c1f6dcc(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u8 *puVar2;
    int iVar3;

    puVar2 = (&FUN_8c1f0d94);
    puVar1 = 0x8c4748ac;
    if (4 < a0) {
        g_8c4748a8 = 2;
        return 0;
    }
    if (g_8c4749b8 != a0) {
        if (a0 < 0) {
            a0 = -a0;
        }
        g_8c4749b8 = a0;
        iVar3 = (*(code *)puVar2)(a0, *puVar1, a2, a3);
        if (iVar3 != 0) {
            g_8c4748a8 = iVar3;
            return 0;
        }
    }
    return 1;
}

/*
 * FUN_8c1f6e0c  0x8c1f6e0c
 * called by: FUN_8c1f6fc8, FUN_8c1f74b0, FUN_8c1f7558, FUN_8c1f7b64, FUN_8c1f7c40, FUN_8c1f875c
 */
u32 FUN_8c1f6e0c(u32 a0, int a1, u32 a2, u32 a3) {
    u32 *puVar1;
    int iVar2;
    u32 ar5_00;

    puVar1 = 0x8c4748b0;
    ar5_00 = g_8c4748b0;
    iVar2 = FUN_8c1f881c(a0, ar5_00, a2, a3);
    if (iVar2 != 0) {
        FUN_8c1f6dcc(0xfffffffd, ar5_00, a2, a3);
        iVar2 = FUN_8c1f881c(a0, *puVar1, a2, a3);
        if (iVar2 != 0) {
            g_8c4748a8 = 7;
        }
        return 0;
    }
    if (a1 != 0) {
        memmove(a1, *puVar1, 0x3c);
    }
    return 1;
}

/*
 * FUN_8c1f6e5e  0x8c1f6e5e
 * called by: FUN_8c1f71b6, FUN_8c1f7264, FUN_8c1f736c, FUN_8c1f7558, FUN_8c1f7a50
 */
u32 FUN_8c1f6e5e(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 *puVar1;
    int *piVar2;
    int iVar3;
    u32 ar5_00;
    u32 ar6_00;
    u32 uVar4;

    puVar1 = 0x8c4748b0;
    uVar4 = 1;
    memset(g_8c4748b0, (int)0xff, 0x3c);
    ar6_00 = 0xf;
    FUN_8c23c7f4(*puVar1, a1, 0xf);
    piVar2 = 0x8c4748c0;
    ar5_00 = *puVar1;
    iVar3 = FUN_8c1f884c(a0, ar5_00, ar6_00, a3);
    if (iVar3 == 0) {
        *piVar2 = *piVar2 + -1;
    } else if (iVar3 != 3) {
        FUN_8c1f6dcc(0xfffffffd, ar5_00, ar6_00, a3);
        iVar3 = FUN_8c1f884c(a0, *puVar1, ar6_00, a3);
        if (iVar3 == 0) {
            *piVar2 = *piVar2 + -1;
        } else if (iVar3 != 3) {
            uVar4 = 0;
            g_8c4748a8 = 8;
        }
    }
    return uVar4;
}

/*
 * FUN_8c1f6f06  0x8c1f6f06
 * called by: FUN_8c1f736c, FUN_8c1f7558
 */
int FUN_8c1f6f06(u32 a0, u32 a1) {
    int iVar1;

    iVar1 = FUN_8c1f1080();
    if (iVar1 < 0) {
        g_8c4748a8 = 5;
    }
    return iVar1;
}

/*
 * FUN_8c1f6f20  0x8c1f6f20
 * called by: FUN_8c0b95a0, FUN_8c0b96e4
 */
int FUN_8c1f6f20(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar4_00;

    g_8c4749b8 = 0xffffffff;
    uVar2 = 3;
    g_8c4748ac = a0;
    g_8c4748b0 = a1;
    g_8c4748b4 = a2;
    g_8c4748b8 = a3;
    FUN_8c1f6dcc(3, a1, a2, a3);
    FUN_8c1f875c(uVar2, a1, a2, a3);
    uVar2 = 1;
    if (g_8c273a10 == '\x02') {
        iVar1 = 1;
        g_8c273a10 = '\x01';
    } else {
        ar4_00 = 0x8c4749bc;
        g_8c273a10 = '\x01';
        FUN_8c1f7d04(0x8c4749bc, 1, a2, a3);
        g_8c4748bc = 0x8c4749c4;
        iVar1 = FUN_8c1f7558(ar4_00, uVar2, a2, a3);
        if (iVar1 == 0) {
            g_8c273a10 = '\0';
        }
    }
    return iVar1;
}

/*
 * FUN_8c1f6f2a  0x8c1f6f2a
 */
int FUN_8c1f6f2a(u32 a0, u32 a1, u32 a2, u32 a3, u32 *ain0, u32 *ain1) {
    int iVar1;
    u32 *in_r2;
    u32 *in_r3;
    u32 uVar2;
    u32 ar4_00;

    *in_r3 = a0;
    *in_r2 = a1;
    *ain1 = a2;
    g_8c4748b8 = a3;
    *ain0 = 0xffffffff;
    uVar2 = 3;
    FUN_8c1f6dcc(3, a1, a2, a3);
    FUN_8c1f875c(uVar2, a1, a2, a3);
    uVar2 = 1;
    if (g_8c273a10 == '\x02') {
        iVar1 = 1;
        g_8c273a10 = 1;
    } else {
        ar4_00 = 0x8c4749bc;
        g_8c273a10 = 1;
        FUN_8c1f7d04(0x8c4749bc, 1, a2, a3);
        g_8c4748bc = 0x8c4749c4;
        iVar1 = FUN_8c1f7558(ar4_00, uVar2, a2, a3);
        if (iVar1 == 0) {
            g_8c273a10 = 0;
        }
    }
    return iVar1;
}

/*
 * FUN_8c1f6fc8  0x8c1f6fc8
 * called by: FUN_8c1f74b0, FUN_8c1f7558, FUN_8c1f7a50, FUN_8c1f7b64
 */
u32 FUN_8c1f6fc8(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u8 auStack_98[2];
    u8 auStack_96[58];
    u8 auStack_5c[52];
    u16 uStack_28;

    if (g_8c273a10 == '\0') {
        g_8c4748a8 = 5;
    } else {
        iVar3 = 0;
        do {
            iVar1 = FUN_8c1f6e0c(iVar3 * 4 + 0x18, 0, a2, a3);
            if (iVar1 == 1) {
                a2 = 10;
                iVar1 = memcmp(g_8c4748b0 + 2, a0, 10);
                if (iVar1 == 0) {
                    a2 = 0x3c;
                    memmove(auStack_98, g_8c4748b0, 0x3c);
                    iVar1 = FUN_8c1f6e0c(iVar3 * 4 + 0x19, 0, a2, a3);
                    if (iVar1 == 1) {
                        a2 = 0x3c;
                        memmove(auStack_5c, g_8c4748b0, 0x3c);
                        uVar2 = crc16_ccitt(0x6e, auStack_96);
                        if ((u32)uStack_28 == (uVar2 & 0xffff)) {
                            return iVar3;
                        }
                    }
                }
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < 100);
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f70c0  0x8c1f70c0
 */
u32 FUN_8c1f70c0(void) {
    u32 *puVar1;
    int iVar2;
    char *in_r2;
    u32 uVar3;
    u32 uVar4;

    puVar1 = 0x8c4748a8;
    if (*in_r2 == '\0') {
        g_8c4748a8 = 5;
    LAB_8c1f7102:
        uVar4 = 0;
    } else {
        if ((g_8c4748b4 == 0) || (g_8c4748b8 == 0)) {
            uVar4 = 0;
            uVar3 = 0xb;
        } else {
            iVar2 = FUN_8c1f6b14(g_8c4748ac, g_8c4748b0, g_8c4748b4, g_8c4748b8);
            if (iVar2 != 0)
                goto LAB_8c1f7102;
            uVar3 = 0xd;
            uVar4 = 1;
        }
        *puVar1 = uVar3;
    }
    return uVar4;
}

/*
 * FUN_8c1f710c  0x8c1f710c
 * called by: FUN_8c0b95a0, FUN_8c0b96e4
 */
u32 FUN_8c1f710c(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    g_8c273a10 = 0;
    return ain0;
}

/*
 * FUN_8c1f7134  0x8c1f7134
 * called by: FUN_8c1f71b6, FUN_8c1f736c
 */
u32 FUN_8c1f7134(u16 *a0, u32 a1) {
    u16 uVar1;
    u32 in_r0;

    uVar1 = *a0;
    if ((u16)a1 != 0) {
        if ((u32)uVar1 < (u32)uVar1 + (u32)(u16)a1) {
            *a0 = (u16)a1 + uVar1;
        } else {
            *a0 = (u16)0xfffe;
        }
    }
    return in_r0;
}

/*
 * FUN_8c1f7158  0x8c1f7158
 * called by: FUN_8c1f7264
 */
u32 FUN_8c1f7158(u16 *a0) {
    u32 in_r0;

    if (*a0 < 0xfffe) {
        *a0 = *a0 + 1;
    }
    return in_r0;
}

/*
 * FUN_8c1f716c  0x8c1f716c
 * called by: FUN_8c1f74b0, FUN_8c1f7a50
 */
u32 FUN_8c1f716c(void) {
    u32 uVar1;

    uVar1 = 1;
    if (g_8c4748c0 < 2) {
        if ((g_8c4748b4 == 0) || (g_8c4748b8 == 0)) {
            uVar1 = 0;
            g_8c4748a8 = 0xb;
        } else {
            FUN_8c1f6b14(g_8c4748ac, g_8c4748b0, g_8c4748b8);
            FUN_8c1f6dcc(0xfffffffd);
        }
    }
    return uVar1;
}

/*
 * FUN_8c1f7170  0x8c1f7170
 */
u32 FUN_8c1f7170(void) {
    int *in_r1;
    int in_r3;
    u32 ar5_00;
    int ar6_00;
    int ar7_00;
    u32 uVar1;

    uVar1 = 1;
    if (*in_r1 < in_r3) {
        ar6_00 = g_8c4748b4;
        if ((ar6_00 == 0) || (g_8c4748b8 == 0)) {
            uVar1 = 0;
            g_8c4748a8 = 0xb;
        } else {
            ar7_00 = g_8c4748b8;
            ar5_00 = g_8c4748b0;
            FUN_8c1f6b14(g_8c4748ac, ar5_00, ar6_00, ar7_00);
            FUN_8c1f6dcc(0xfffffffd, ar5_00, ar6_00, ar7_00);
        }
    }
    return uVar1;
}

/*
 * FUN_8c1f71b6  0x8c1f71b6
 */
u32 FUN_8c1f71b6(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int in_stack_ffffffe8;

    uVar1 = 1;
    FUN_8c1f8176(0x8c4749f2, a1, a2, a3);
    date_to_rtc_seconds(0x8c4749f2, &stack0xffffffe8, a2);
    if (g_8c474986 == -1) {
        g_8c474986 = (short)in_stack_ffffffe8 - (short)g_8c474a00;
    } else {
        FUN_8c1f7134(&g_8c474986, in_stack_ffffffe8 - g_8c474a00);
    }
    if (1 < g_8c4748c0) {
        uVar1 = FUN_8c1f6e5e(a0 + 3, &g_8c474978, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c1f7264  0x8c1f7264
 */
u32 FUN_8c1f7264(int a0, u32 a1, u32 a2, u32 a3) {
    u8 *ar5_00;
    u32 uVar1;

    uVar1 = 1;
    if (g_8c47497c == -1) {
        g_8c47497c = g_8c4749fc;
    }
    g_8c474980 = g_8c4749fc;
    FUN_8c1f8176(0x8c4749f2, a1, a2, a3);
    ar5_00 = &g_8c474a00;
    date_to_rtc_seconds(0x8c4749f2, &g_8c474a00, a2);
    if (g_8c474984 == -1) {
        g_8c474984 = 1;
    } else {
        FUN_8c1f7158(&g_8c474984);
    }
    if (1 < g_8c4748c0) {
        uVar1 = FUN_8c1f6e5e(a0 + 3, &g_8c474978, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c1f72d8  0x8c1f72d8
 */
u32 FUN_8c1f72d8(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    int iVar4;
    u32 ar6_00;
    int iVar5;
    int iStack_20;

    puVar2 = 0x8c4748b0;
    ar6_00 = 0x3c;
    memset(g_8c4748b0, (int)0xff, 0x3c);
    puVar3 = 0x8c4748a8;
    puVar1 = (&FUN_8c1f6e5e);
    iVar5 = 0;
    iStack_20 = a0;
    do {
        iVar4 = (*(code *)puVar1)(iStack_20, *puVar2, ar6_00, a3);
        if (iVar4 == 0) {
            *puVar3 = 8;
            return 0;
        }
        iVar5 = iVar5 + 1;
        iStack_20 = iStack_20 + 1;
    } while (iVar5 < 4);
    return 1;
}

/*
 * FUN_8c1f736c  0x8c1f736c
 */
u32 FUN_8c1f736c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    int iVar1;
    int ar4_00;
    u8 *ar5_01;
    u32 ar6_00;
    u32 ar5_02;
    u32 uVar2;

    iVar1 = g_8c4749d8;
    g_8c4749dc = g_8c4749e0;
    g_8c474a04 = g_8c474a04 + 1;
    FUN_8c1f8176(0x8c4749f2, a1, a2, a3);
    date_to_rtc_seconds(0x8c4749f2, &g_8c4749d8, a2);
    ar5_00 = libgcc_divide_helper_01051c(g_8c4749d8 - iVar1, 0x3c);
    uVar2 = (u32)g_8c4749ec;
    ar5_02 = 0x3c - g_8c4749ed;
    if (ar5_02 < ar5_00) {
        FUN_8c1f7134(uVar2 * 2 + 0x8c474942, ar5_02);
        uVar2 = uVar2 + 1;
        ar5_00 = ar5_00 - ar5_02;
        if (0x17 < uVar2) {
            uVar2 = 0;
        }
        while (0x3c < ar5_00) {
            FUN_8c1f7134(uVar2 * 2 + 0x8c474942, 0x3c);
            uVar2 = uVar2 + 1;
            ar5_00 = ar5_00 - 0x3c;
            if (0x17 < (int)uVar2) {
                uVar2 = 0;
            }
        }
    }
    FUN_8c1f7134(uVar2 * 2 + 0x8c474942, ar5_00);
    iVar1 = a0 + 2;
    g_8c4749b2 = g_8c474a04;
    ar6_00 = 10;
    memmove(0x8c4749e8, 0x8c4749f2, 10);
    ar4_00 = iVar1 + 1;
    iVar1 = FUN_8c1f6e5e(iVar1, 0x8c47493c, ar6_00, a3);
    if (iVar1 == 1) {
        ar5_01 = &g_8c474978;
        iVar1 = FUN_8c1f6e5e(ar4_00, &g_8c474978, ar6_00, a3);
        if (iVar1 == 1) {
            g_8c4748c0 = FUN_8c1f6f06(ar4_00, ar5_01);
            return 1;
        }
    }
    return 0;
}

/*
 * FUN_8c1f74b0  0x8c1f74b0
 * called by: FUN_8c1f79d8, FUN_8c1f79da, FUN_8c1f7aae, FUN_8c1f7ad6, FUN_8c1f7b06
 */
u32 FUN_8c1f74b0(code *a0, int a1, u32 a2, u32 a3) {
    u32 *puVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;

    uVar4 = g_8c4748bc;
    iVar3 = a1;
    iVar2 = FUN_8c1f6fc8(uVar4, a1, a2, a3);
    puVar1 = 0x8c4748a8;
    if (iVar2 < 0) {
        g_8c4748a8 = 9;
    } else if ((a1 <= g_8c4748c0) || (iVar3 = FUN_8c1f716c(), iVar3 != 0)) {
        iVar3 = iVar2 * 4 + 0x18;
        FUN_8c1f6e0c(iVar3, 0x8c4748c4, a2, a3);
        if ((0x8c474a28 [3] == '\0') || (g_8c474a28 == '\0')) {
            *puVar1 = 3;
        } else {
            if (g_8c4748c5 != '\0') {
                /* WARNING: Could not recover jumptable at 0x8c1f750a. Too many branches */
                /* WARNING: Treating indirect jump as call */
                uVar4 = (*a0)(iVar3);
                return uVar4;
            }
            *puVar1 = 4;
        }
    }
    return 0;
}

/*
 * FUN_8c1f752a  0x8c1f752a
 * called by: FUN_8c1f7558
 */
u32 FUN_8c1f752a(u8 *a0, int a1) {
    u8 bVar1;
    u32 uVar2;

    uVar2 = 0;
    if (0 < a1) {
        do {
            bVar1 = *a0;
            a0 = a0 + 1;
            a1 = a1 + -1;
            uVar2 = uVar2 << 8 | (u32)bVar1;
        } while (a1 != 0);
    }
    return uVar2;
}

/*
 * FUN_8c1f7540  0x8c1f7540
 * called by: FUN_8c1f7558
 */
u32 FUN_8c1f7540(u32 a0, int a1, int a2) {
    u32 in_r0;
    u8 *puVar1;

    if (0 < a1) {
        puVar1 = (u8 *)(a2 + a1 + -1);
        do {
            *puVar1 = (char)a0;
            a1 = a1 + -1;
            puVar1 = puVar1 + -1;
            a0 = a0 >> 8;
        } while (a1 != 0);
    }
    return in_r0;
}

/*
 * FUN_8c1f7558  0x8c1f7558
 * called by: FUN_8c1f6f20, FUN_8c1f6f2a
 */
u32 FUN_8c1f7558(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    bool bVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;
    int *piVar5;
    u32 uVar6;
    u32 uVar7;
    int iVar8;
    int *piVar9;
    int *piVar10;
    u32 uVar11;
    int iVar12;
    u32 uVar13;
    u8 *pbVar14;
    u8 *pbVar15;
    int *piStack_160;
    int aiStack_140[8];
    int aiStack_120[4];
    int aiStack_110[24];
    int aiStack_b0[6];
    int aiStack_98[24];
    int aiStack_38[7];

    FUN_8c1f8176(0x8c4749e8, a1, a2, a3);
    date_to_rtc_seconds(0x8c4749e8, &g_8c4749d8, a2);
    uVar11 = 0x8c4748c4;
    g_8c474a06 = 0;
    iVar4 = FUN_8c1f7b64(g_8c4748bc, 0x8c4748c4, a2, a3);
    if (iVar4 == 0) {
        uVar11 = 0;
    } else {
        iVar4 = FUN_8c1f6fc8(g_8c4748bc, uVar11, a2, a3);
        if (g_8c474972 == -1) {
            g_8c474972 = 0;
        }
        if (g_8c474978 == -1) {
            g_8c474978 = 0;
        }
        if (g_8c47497a == -1) {
            g_8c47497a = '\0';
        }
        if (g_8c47497b == -1) {
            g_8c47497b = '\0';
        }
        if (g_8c474940 == -1) {
            g_8c474940 = -2;
        }
        g_8c4748c0 = FUN_8c1f6f06(0xffff, 0xff);
        if (2 < g_8c4748c0) {
            bVar1 = false;
            FUN_8c1f6e0c(0x14, aiStack_98, a2, a3);
            FUN_8c1f6e0c(0x15, aiStack_98 + 0xf, a2, a3);
            FUN_8c1f6e0c(0x16, aiStack_110, a2, a3);
            piVar9 = aiStack_110 + 0xf;
            FUN_8c1f6e0c(0x17, piVar9, a2, a3);
            piVar10 = aiStack_120;
            pbVar14 = &g_8c26c8c3;
            pbVar15 = &g_8c26c8c7;
            do {
                piVar5 = (int *)FUN_8c1f62cc((u32)*pbVar14);
                if (piVar5 == NULL) {
                    g_8c4748a8 = 0xc;
                    return 0;
                }
                pbVar14 = pbVar14 + 1;
                *piVar10 = *piVar5;
                piVar10 = piVar10 + 1;
            } while (pbVar14 < pbVar15);
            piVar10 = aiStack_38;
            for (iVar12 = 0; iVar12 < 4; iVar12 = iVar12 + 1) {
                piVar5 = aiStack_120 + iVar12;
                if (*piVar5 != 0) {
                    iVar8 = 0;
                    do {
                        if (aiStack_98[iVar8] == *piVar5)
                            break;
                        iVar8 = iVar8 + 1;
                    } while (iVar8 < 0x18);
                    piVar2 = aiStack_98;
                    piVar3 = aiStack_98;
                    if (iVar8 == 0x18) {
                        for (; piVar9 = piVar3, piVar2 < piVar10; piVar2 = piVar2 + 1) {
                            if (*piVar2 == -1) {
                                *piVar9 = *piVar5;
                                bVar1 = true;
                                break;
                            }
                            piVar3 = piVar9 + 1;
                        }
                    }
                }
            }
            if (bVar1) {
                FUN_8c1f6e5e(0x14, aiStack_98, iVar12, piVar10);
                piVar9 = aiStack_98 + 0xf;
                FUN_8c1f6e5e(0x15, piVar9, iVar12, piVar10);
            }
            piStack_160 = aiStack_140;
            pbVar14 = &g_8c26c8c7;
            pbVar15 = &g_8c26c8cf;
            do {
                piVar5 = (int *)FUN_8c1f6342();
                if (piVar5 == NULL) {
                    g_8c4748a8 = 0xc;
                    return 0;
                }
                pbVar14 = pbVar14 + 1;
                *piStack_160 = *piVar5;
                piStack_160 = piStack_160 + 1;
            } while (pbVar14 < pbVar15);
            piVar9 = aiStack_b0;
            bVar1 = false;
            for (iVar12 = 0; iVar12 < 8; iVar12 = iVar12 + 1) {
                piVar10 = aiStack_140 + iVar12;
                if (*piVar10 != 0) {
                    iVar8 = 0;
                    do {
                        if (aiStack_110[iVar8] == *piVar10)
                            break;
                        iVar8 = iVar8 + 1;
                    } while (iVar8 < 0x18);
                    piVar5 = aiStack_110;
                    piVar2 = aiStack_110;
                    if (iVar8 == 0x18) {
                        for (; piVar5 < piVar9; piVar5 = piVar5 + 1) {
                            if (*piVar5 == -1) {
                                *piVar2 = *piVar10;
                                bVar1 = true;
                                break;
                            }
                            piVar2 = piVar2 + 1;
                        }
                    }
                }
            }
            if (bVar1) {
                FUN_8c1f6e5e(0x16, aiStack_110, iVar12, piVar9);
                FUN_8c1f6e5e(0x17, aiStack_110 + 0xf, iVar12, piVar9);
            }
            piStack_160 = NULL;
            uVar13 = 0;
            uVar6 = FUN_8c1f752a(0x8c474936, 3);
            uVar7 = FUN_8c1f752a(0x8c474939, 3);
            for (iVar12 = 0; iVar12 < 0x18; iVar12 = iVar12 + 1) {
                piVar10 = aiStack_120;
                for (piVar9 = aiStack_120; piVar9 < aiStack_110; piVar9 = piVar9 + 1) {
                    if ((*piVar9 != 0) && (aiStack_98[iVar12] == *piVar10)) {
                        piStack_160 = (int *)((u32)piStack_160 | 1);
                    }
                    piVar10 = piVar10 + 1;
                }
                piStack_160 = (int *)((int)piStack_160 << 1);
                piVar9 = aiStack_110 + iVar12;
                piVar5 = aiStack_140;
                for (piVar10 = aiStack_140; piVar10 < aiStack_120; piVar10 = piVar10 + 1) {
                    if ((*piVar10 != 0) && (*piVar9 == *piVar5)) {
                        uVar13 = uVar13 | 1;
                    }
                    piVar5 = piVar5 + 1;
                }
                uVar13 = uVar13 << 1;
            }
            uVar7 = ~((int)uVar13 >> 1 | ~uVar7);
            FUN_8c1f7540(~((int)piStack_160 >> 1 | ~uVar6), 3, 0x8c474936);
            uVar11 = 0x8c474939;
            FUN_8c1f7540(uVar7, 3, 0x8c474939);
            FUN_8c1f6e5e(iVar4 * 4 + 0x19, 0x8c474900, uVar11, piVar9);
        }
        uVar11 = 1;
        g_8c4749e4 = 0;
        g_8c4749e0 = 0;
        g_8c474a04 = 0;
    }
    return uVar11;
}

/*
 * FUN_8c1f7902  0x8c1f7902
 */
int FUN_8c1f7902(u32 a0, u32 a1, u32 a2, int a3) {
    u8 uVar1;
    int iVar2;
    int iVar3;

    uVar1 = (u8)a2;
    if (g_8c273a10 == '\0') {
        g_8c4748a8 = 5;
        return 0;
    }
    iVar3 = a3;
    if ((char)a0 == '\0') {
        iVar2 = 0xb4;
    } else {
        if ((char)a0 != '\x01')
            goto LAB_8c1f7970;
        iVar2 = 0xae;
    }
    *(short *)(iVar2 + 0x8c4748c4) = *(short *)(iVar2 + 0x8c4748c4) + 1;
    FUN_8c1f8176(0x8c4749f2, 0, a2, a3);
    date_to_rtc_seconds(0x8c4749f2, 0x8c474a08, a2);
LAB_8c1f7970:
    if ((char)a0 != '\x01') {
        g_8c47497a = (u8)a1;
        g_8c47497b = uVar1;
    }
    if (a3 != 0) {
        a2 = 0x20;
        memmove(0x8c474988, a3, 0x20);
    }
    g_8c4748a8 = 10;
    g_8c4749dc = g_8c4749dc + -1;
    iVar2 = g_8c4748c0;
    if (((g_8c4749dc == 0) && (g_8c4749e0 != 0)) &&
        (iVar2 = FUN_8c1f79d8(&g_8c4749dc, g_8c4748c0, a2, iVar3), iVar2 == 1)) {
        iVar2 = g_8c4748c0;
    }
    return iVar2;
}

/*
 * FUN_8c1f79d8  0x8c1f79d8
 * called by: FUN_8c1f7902
 */
u32 FUN_8c1f79d8(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    if (g_8c273a10 == '\0') {
        g_8c4748a8 = 5;
    } else {
        uVar1 = FUN_8c1f74b0(FUN_8c1f736c, 2, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c1f79da  0x8c1f79da
 */
u32 FUN_8c1f79da(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    char *in_r2;
    u32 uVar1;

    uVar1 = 0;
    if (*in_r2 == '\0') {
        g_8c4748a8 = 5;
    } else {
        uVar1 = FUN_8c1f74b0((&FUN_8c1f736c), 2, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c1f7a50  0x8c1f7a50
 */
u32 FUN_8c1f7a50(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int ar4_00;
    u32 uVar1;

    uVar1 = 0;
    if (g_8c273a10 == '\0') {
        g_8c4748a8 = 5;
    } else {
        ar4_00 = FUN_8c1f6fc8(g_8c4748bc, unused_a1, a2, a3);
        if (ar4_00 < 0) {
            g_8c4748a8 = 9;
        } else {
            g_8c4748c5 = (u8)a0;
            if (g_8c4748c0 < 1) {
                FUN_8c1f716c();
            }
            FUN_8c1f6e5e(ar4_00, 0x8c4748c4, a2, a3);
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * FUN_8c1f7aae  0x8c1f7aae
 */
u32 FUN_8c1f7aae(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    char *in_r2;
    u32 uVar1;

    uVar1 = 0;
    if (*in_r2 == '\0') {
        g_8c4748a8 = 5;
    } else {
        uVar1 = FUN_8c1f74b0((&FUN_8c1f72d8), 4, a2, a3);
        g_8c474a06 = 1;
    }
    return uVar1;
}

/*
 * FUN_8c1f7ad6  0x8c1f7ad6
 */
int FUN_8c1f7ad6(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    char *in_r2;
    int iVar1;

    iVar1 = 0;
    if (*in_r2 == '\0') {
        g_8c4748a8 = 5;
    } else {
        g_8c4749fc = a0;
        iVar1 = FUN_8c1f74b0((&FUN_8c1f7264), 1, a2, a3);
        if (iVar1 == 1) {
            g_8c474a06 = 1;
        }
    }
    return iVar1;
}

/*
 * FUN_8c1f7b06  0x8c1f7b06
 */
u32 FUN_8c1f7b06(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    char *in_r2;
    u32 uVar1;

    uVar1 = 0;
    if (*in_r2 == '\0') {
        g_8c4748a8 = 5;
    } else if (g_8c474a06 == 1) {
        uVar1 = FUN_8c1f74b0((&FUN_8c1f71b6), 1, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c1f7b64  0x8c1f7b64
 * called by: FUN_8c0b95a0, FUN_8c0b96e4, FUN_8c1f7558
 */
u32 FUN_8c1f7b64(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;

    if (g_8c273a10 == '\0') {
        g_8c4748a8 = 5;
        return 0;
    }
    if (a0 == 0) {
        a0 = g_8c4748bc;
    }
    iVar1 = a1;
    FUN_8c1f6dcc(3, a1, a2, a3);
    iVar1 = FUN_8c1f6fc8(a0, iVar1, a2, a3);
    if (iVar1 < 0) {
        g_8c4748a8 = 9;
    LAB_8c1f7bfa:
        uVar3 = 0;
    } else {
        if (a0 == 0) {
            memmove(a1, 0x8c4748c4, 0xf0);
        } else {
            if (g_8c474a2b == '\0') {
                g_8c4748a8 = 3;
                goto LAB_8c1f7bfa;
            }
            if (a1 != 0) {
                iVar4 = 0;
                iVar1 = iVar1 * 4 + 0x18;
                do {
                    iVar2 = FUN_8c1f6e0c(iVar1, a1, a2, a3);
                    if (iVar2 != 1) {
                        g_8c4748a8 = 7;
                        return 0;
                    }
                    iVar4 = iVar4 + 1;
                    a1 = a1 + 0x3c;
                    iVar1 = iVar1 + 1;
                } while (iVar4 < 4);
            }
        }
        uVar3 = 1;
    }
    return uVar3;
}

/*
 * FUN_8c1f7c40  0x8c1f7c40
 * called by: FUN_8c0b96e4
 */
u32 FUN_8c1f7c40(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *puVar2;
    int iVar3;

    uVar1 = 0;
    if (g_8c273a10 == '\0') {
        g_8c4748a8 = 5;
    } else {
        uVar1 = 3;
        FUN_8c1f6dcc(3, unused_a1, a2, a3);
        FUN_8c1f875c(uVar1, unused_a1, a2, a3);
        uVar1 = 0x44c;
        memset(a0, 0xff, 0x44c);
        if (g_8c474a2b == '\0') {
            iVar3 = 100;
            puVar2 = (u8 *)(a0 + 10);
            do {
                iVar3 = iVar3 + -1;
                *puVar2 = 0;
                puVar2 = puVar2 + 0xb;
            } while (iVar3 != 0);
            g_8c4748a8 = 3;
            uVar1 = 0;
        } else {
            iVar3 = 0x18;
            do {
                FUN_8c1f6e0c(iVar3, 0, uVar1, a3);
                uVar1 = 10;
                memcpy_bytes(a0, g_8c4748b0 + 2, 10);
                iVar3 = iVar3 + 4;
                *(u8 *)(a0 + 10) = 0;
                a0 = a0 + 0xb;
            } while (iVar3 < 0x1a8);
            uVar1 = 1;
        }
    }
    return uVar1;
}

/*
 * FUN_8c1f7c50  0x8c1f7c50
 */
u32 FUN_8c1f7c50(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int *piVar2;
    u8 *puVar3;
    char *in_r2;
    u32 ar4_00;
    u8 *puVar4;
    int iVar5;
    int iVar6;
    int ar4_01;
    int unaff_r13;
    u32 unaff_r14;

    if (*in_r2 == '\0') {
        g_8c4748a8 = 5;
    } else {
        ar4_00 = 3;
        FUN_8c1f6dcc(3, unused_a1, a2, a3);
        FUN_8c1f875c(ar4_00, unused_a1, a2, a3);
        iVar5 = (int)0x44c;
        memset(unaff_r13, (int)0xff, iVar5);
        puVar3 = (&FUN_8c1f6e0c);
        piVar2 = 0x8c4748b0;
        puVar1 = (&memcpy_bytes);
        if (g_8c474a2b == '\0') {
            iVar5 = 100;
            puVar4 = (u8 *)(unaff_r13 + 10);
            do {
                iVar5 = iVar5 + -1;
                *puVar4 = (char)unaff_r14;
                puVar4 = puVar4 + 0xb;
            } while (iVar5 != 0);
            g_8c4748a8 = 3;
        } else {
            ar4_01 = 0x18;
            iVar6 = (int)0x1a8;
            do {
                (*(code *)puVar3)(ar4_01, 0, iVar5, a3);
                iVar5 = 10;
                (*(code *)puVar1)(unaff_r13, *piVar2 + 2, 10, a3);
                ar4_01 = ar4_01 + 4;
                *(char *)(unaff_r13 + 10) = (char)unaff_r14;
                unaff_r13 = unaff_r13 + 0xb;
            } while (ar4_01 < iVar6);
            unaff_r14 = 1;
        }
    }
    return unaff_r14;
}

/*
 * FUN_8c1f7d04  0x8c1f7d04
 * called by: FUN_8c1f6f20, FUN_8c1f6f2a
 */
u32 FUN_8c1f7d04(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c1f7d30(0x8c008000, a0, unused_a2, a3);
    return uVar1;
}

/*
 * FUN_8c1f7d1a  0x8c1f7d1a
 */
u32 FUN_8c1f7d1a(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = FUN_8c1f7d30(0x8c008100, a0, unused_a2, a3);
    return uVar1;
}

/*
 * FUN_8c1f7d30  0x8c1f7d30
 * called by: FUN_8c1f7d04, FUN_8c1f7d1a
 */
u32 FUN_8c1f7d30(int a0, u32 *a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    u32 uStack_18;
    u32 uStack_14;
    int iStack_10;
    int iStack_c;

    if (a1 == NULL) {
        return 0;
    }
    iStack_c = a0 + 0x40;
    iStack_10 = a0 + 0x2b;
    iStack_10 = FUN_8c1f7d80(iStack_10, &uStack_18, &uStack_14);
    a1[1] = uStack_18;
    puVar1 = (&memmove);
    *a1 = uStack_14;
    (*(code *)puVar1)(a1 + 2, iStack_c, 10, a3);
    *(u8 *)((int)a1 + 0x12) = 0;
    return iStack_10;
}

/*
 * FUN_8c1f7d80  0x8c1f7d80
 * called by: FUN_8c1f7d30
 */
u32 FUN_8c1f7d80(int a0, int *a1, int *a2) {
    char *pcVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    int iStack_24;

    iVar2 = 0;
    iVar4 = 0;
    uVar3 = 1;
    iVar5 = 0;
    do {
        if (*(char *)(iVar2 + a0) == '/')
            break;
        if (((&DATA_8c125470)[*(u8 *)(iVar2 + a0)] & 4) == 0) {
            uVar3 = 0;
        }
        pcVar1 = (char *)(iVar2 + a0);
        iVar2 = iVar2 + 1;
        iVar5 = (int)*pcVar1 + iVar5 * 10 + -0x30;
    } while (iVar2 < 2);
    iStack_24 = 0;
    do {
        iVar2 = iVar2 + 1;
        if (*(char *)(iVar2 + a0) == ' ')
            break;
        if (((&DATA_8c125470)[*(u8 *)(iVar2 + a0)] & 4) == 0) {
            uVar3 = 0;
        }
        iVar4 = (int)(char)*(u8 *)(iVar2 + a0) + iVar4 * 10 + -0x30;
        iStack_24 = iStack_24 + 1;
    } while (iStack_24 < 2);
    *a1 = iVar4;
    *a2 = iVar5;
    return uVar3;
}

/*
 * game_shutdown_b  0x8c1f7e48
 * called by: FUN_8c0b6c10, FUN_8c102bd0, main, report_error_message
 */
u32 game_shutdown_b(void) {
    u32 uVar1;

    if (g_8c0080fc != '\x01') {
        /* WARNING: Could not recover jumptable at 0x8c1f7e74. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)*0x8c0000e0)(1);
        return uVar1;
    }
    if (g_8c0080fe == '\x01') {
        uVar1 = (g_8c008300)();
        return uVar1;
    }
    g_8c000064 = 0x8c008000;
    /* WARNING: Could not recover jumptable at 0x8c1f7e6c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000e0)(3);
    return uVar1;
}

/*
 * FUN_8c1f7e78  0x8c1f7e78
 */
u32 FUN_8c1f7e78(void) {
    u32 uVar1;

    FUN_8c1fa0c4();
    /* WARNING: Could not recover jumptable at 0x8c1f7e86. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000e0)(2);
    return uVar1;
}

/*
 * FUN_8c1f7ea8  0x8c1f7ea8
 * called by: FUN_8c258604, game_init, pvr_25825a
 */
u32 FUN_8c1f7ea8(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c1f7eba();
    return uVar1 >> 8 & 3;
}

/*
 * FUN_8c1f7eba  0x8c1f7eba
 * called by: FUN_8c1f7ea8
 */
u32 FUN_8c1f7eba(void) {
    return (u32) * 0xff800030 & (int)0x300;
}

/*
 * FUN_8c1f7ecc  0x8c1f7ecc
 * called by: game_init
 */
u32 FUN_8c1f7ecc(int a0) {
    if (a0 == 0) {
        return 0xffffffff;
    }
    g_8c273a18 = a0;
    return 0;
}

/*
 * FUN_8c1f7eea  0x8c1f7eea
 */
u32 FUN_8c1f7eea(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int *in_r2;

    if ((*in_r2 != 0) && ((a0 == 0 || (a0 == 1)))) {
        g_8c00007e = (u8)a0;
        iVar1 = FUN_8c1f97b4(2, g_8c273a18, a2, a3);
        if (iVar1 != -1) {
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f7f1e  0x8c1f7f1e
 * called by: FUN_8c0221c8
 */
u32 FUN_8c1f7f1e(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    if (((a0 != NULL) && (*a0 = 0, g_8c273a18 != 0)) && (iVar1 = FUN_8c1f97b4(0, g_8c273a18, a2, a3), iVar1 != -1)) {
        if (g_8c00007e == '\0') {
            *a0 = 0;
        } else {
            if (g_8c00007e != '\x01') {
                return 0xffffffff;
            }
            *a0 = 1;
        }
        return 0;
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f7f22  0x8c1f7f22
 */
u32 FUN_8c1f7f22(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *unaff_r14;

    if (((unaff_r14 != NULL) && (*unaff_r14 = 0, g_8c273a18 != 0)) &&
        (iVar1 = FUN_8c1f97b4(0, g_8c273a18, a2, a3), iVar1 != -1)) {
        if (g_8c00007e == '\0') {
            *unaff_r14 = 0;
        } else {
            if (g_8c00007e != '\x01') {
                return 0xffffffff;
            }
            *unaff_r14 = 1;
        }
        return 0;
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f7f70  0x8c1f7f70
 */
u32 FUN_8c1f7f70(void) {
    int iVar1;
    int *unaff_r14;

    if (unaff_r14 != NULL) {
        *unaff_r14 = 0x30;
        iVar1 = FUN_8c1f8094();
        if (iVar1 != 0) {
            *unaff_r14 = (int)*(char *)(iVar1 + 10);
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f7f96  0x8c1f7f96
 * called by: FUN_8c1f7f9c
 */
int FUN_8c1f7f96(int a0) {
    return a0 + -0x30;
}

/*
 * FUN_8c1f7f9c  0x8c1f7f9c
 */
u32 FUN_8c1f7f9c(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int aiStack_c[2];

    if (a0 != NULL) {
        *a0 = 0;
        if ((g_8c273a18 != 0) && (iVar1 = FUN_8c1f97b4(0, g_8c273a18, a2, a3), iVar1 != -1)) {
            iVar1 = (int)g_8c00007d;
            if (g_8c00007d == -1) {
                FUN_8c1f7ffa(aiStack_c);
                if (aiStack_c[0] == -1) {
                    *a0 = 1;
                } else {
                    iVar1 = FUN_8c1f7f96(aiStack_c[0]);
                    *a0 = iVar1;
                }
            } else {
                *a0 = (int)g_8c00007d;
            }
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f7ffa  0x8c1f7ffa
 * called by: FUN_8c1f7f9c
 */
u32 FUN_8c1f7ffa(int *a0) {
    int iVar1;

    if (a0 != NULL) {
        *a0 = 0;
        iVar1 = FUN_8c1f8094();
        if (iVar1 != 0) {
            *a0 = (int)*(char *)(iVar1 + 0xb);
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f7ffe  0x8c1f7ffe
 */
u32 FUN_8c1f7ffe(void) {
    int iVar1;
    int *unaff_r14;

    if (unaff_r14 != NULL) {
        *unaff_r14 = 0;
        iVar1 = FUN_8c1f8094();
        if (iVar1 != 0) {
            *unaff_r14 = (int)*(char *)(iVar1 + 0xb);
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f8028  0x8c1f8028
 */
u32 FUN_8c1f8028(void) {
    int iVar1;
    int *unaff_r14;

    if (unaff_r14 != NULL) {
        *unaff_r14 = 0x30;
        iVar1 = FUN_8c1f8094();
        if (iVar1 != 0) {
            *unaff_r14 = (int)*(char *)(iVar1 + 0xc);
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f804e  0x8c1f804e
 */
u32 FUN_8c1f804e(int a0) {
    int iVar1;
    u32 uVar2;
    int ar5_00;

    if (a0 == 0) {
        return 0;
    }
    uVar2 = 0;
    syscall_1f3b1c(0);
    iVar1 = syscall_1f3b44(uVar2);
    uVar2 = 6;
    ar5_00 = iVar1 + 2;
    memmove(a0, ar5_00, 6);
    iVar1 = FUN_8c1f80d0(iVar1);
    if (iVar1 == 0) {
        uVar2 = 2;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * FUN_8c1f8094  0x8c1f8094
 * called by: FUN_8c1f7f70, FUN_8c1f7ffa, FUN_8c1f7ffe, FUN_8c1f8028
 */
u32 FUN_8c1f8094(void) {
    int iVar1;
    u32 uVar2;

    iVar1 = syscall_1f3b1c(0);
    if (iVar1 != 0) {
        return 0;
    }
    uVar2 = syscall_1f3b44();
    return uVar2;
}

/*
 * FUN_8c1f80d0  0x8c1f80d0
 * called by: FUN_8c1f804e
 */
u32 FUN_8c1f80d0(u8 *a0) {
    int iVar1;
    int iVar2;
    u8 bVar3;

    iVar2 = 0;
    bVar3 = 0;
    do {
        iVar1 = iVar2 + 2;
        iVar2 = iVar2 + 1;
        bVar3 = bVar3 + a0[iVar1];
    } while (iVar2 < 6);
    if ((bVar3 == a0[1]) && ((u8)~bVar3 == *a0)) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c1f8114  0x8c1f8114
 * called by: FUN_8c102bd0
 */
u32 FUN_8c1f8114(u32 a0) {
    u32 uVar1;

    uVar1 = FUN_8c1f84d8(a0);
    g_8c474a10 = uVar1;
    g_8c474a14 = 0;
    FUN_8c1f814c(a0);
    uVar1 = FUN_8c1fa244((int)0x900, (&FUN_8c1f814c), 0x5c, 0);
    g_8c474a18 = uVar1;
    return 0;
}

/*
 * FUN_8c1f813e  0x8c1f813e
 * called by: FUN_8c102d40
 */
u32 FUN_8c1f813e(void) {
    u32 uVar1;

    g_8c474a10 = 0;
    uVar1 = FUN_8c1fa54c(g_8c474a18);
    return uVar1;
}

/*
 * FUN_8c1f814c  0x8c1f814c
 * called by: FUN_8c1f8114
 */
u32 FUN_8c1f814c(u32 a0) {
    u32 uVar1;

    if ((g_8c474a14 & 1) == 0) {
        a0 = g_8c474a10;
        uVar1 = FUN_8c1f8462(a0);
        g_8c474a10 = uVar1;
    }
    uVar1 = g_8c474a14;
    if ((uVar1 & 2) != 0) {
        uVar1 = FUN_8c1f84d8(a0);
        g_8c474a10 = uVar1;
    }
    return uVar1;
}

/*
 * FUN_8c1f8176  0x8c1f8176
 * called by: FUN_8c01acd0, FUN_8c01bebc, FUN_8c01bfd0, FUN_8c0b96e4, FUN_8c0b9d14, FUN_8c0ba6bc, FUN_8c0bf804,
 * FUN_8c0f9774 (+9 more)
 */
u32 FUN_8c1f8176(short *a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 *puVar1;
    u32 uVar2;
    int a6;
    int a5;

    if ((g_8c474a14 & 1) == 1) {
        uVar2 = FUN_8c1f84d8(a0);
        FUN_8c1f8300(uVar2, a0);
        g_8c474a10 = uVar2;
    } else {
        FUN_8c1f8300(g_8c474a10, a0);
    }
    a6 = (int)*(char *)((int)a0 + 3);
    a5 = (int)(char)a0[1];
    uVar2 = FUN_8c1f8614((int)*a0, a5, a6, a3);
    *(char *)((int)a0 + 7) = (char)uVar2;
    uVar2 = FUN_8c1f8650(a0, a5, a6);
    puVar1 = 0x8c474a14;
    *(char *)(a0 + 4) = (char)uVar2;
    return *puVar1;
}

/*
 * FUN_8c1f81dc  0x8c1f81dc
 */
int FUN_8c1f81dc(u32 a0, u32 unused_a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 auStack_8[2];
    date_to_rtc_seconds(a0, auStack_8, a2);
    iVar1 = aica_reg_1f85a0();
    if (((iVar1 == 0) && (iVar1 = aica_reg_1f85c8(auStack_8[0] & 0xffff), iVar1 == 0)) &&
        (iVar1 = aica_reg_1f85ee(auStack_8[0] >> 0x10), iVar1 == 0)) {
        uVar2 = FUN_8c1f84d8(0);
        if ((uVar2 == auStack_8[0]) || (uVar2 == auStack_8[0] + 1)) {
            g_8c474a10 = uVar2;
            iVar1 = 0;
        } else {
            iVar1 = -1;
        }
    }
    return iVar1;
}

/*
 * FUN_8c1f823a  0x8c1f823a
 * called by: FUN_8c0fc94c, FUN_8c0fcd2c
 */
u32 FUN_8c1f823a(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;
    u32 uStack_8;

    uStack_8 = a1;
    date_to_rtc_seconds(a0, &uStack_c, a2);
    date_to_rtc_seconds(uStack_8, &uStack_10, a2);
    if (uStack_c == uStack_10) {
        uVar1 = 0;
    } else if (uStack_10 < uStack_c) {
        uVar1 = 1;
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

/*
 * date_to_rtc_seconds  0x8c1f826c
 * seconds since 1950-01-01 (the Dreamcast RTC epoch) for a {year, month, day, hour, minute, second} struct
 * called by: FUN_8c01acd0, FUN_8c0b77a0, FUN_8c0b7804, FUN_8c0b96e4, FUN_8c0bcedc, FUN_8c0cc784, FUN_8c0cd3c8,
 * FUN_8c0f9774 (+12 more)
 */
u32 date_to_rtc_seconds(u16 *a0, int *a1, u32 a2) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    int aiStack_34[13];

    switch_jump(0x30, aiStack_34, &g_8c26c964);
    uVar3 = *a0 - 0x79c;
    iVar2 = (uVar3 >> 2) + (*a0 - 0x79e) * 0x16d;
    if (((uVar3 & 3) == 0) && ((u8)a0[1] < 3)) {
        iVar2 = iVar2 + -1;
    }
    uVar1 = a0[3];
    *a1 = (((iVar2 + aiStack_34[(u8)a0[1] - 1] + (*(u8 *)((int)a0 + 3) - 1)) * 0x18 + (u32)(u8)a0[2]) * 0x3c +
           (u32) * (u8 *)((int)a0 + 5)) *
              0x3c +
          (u32)(u8)uVar1;
    return (u32)(u8)uVar1;
}

/*
 * FUN_8c1f8300  0x8c1f8300
 * called by: FUN_8c0b95a0, FUN_8c0fcd2c, FUN_8c1f8176
 */
u32 FUN_8c1f8300(u32 a0, u16 *a1) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    int a5;
    u32 d;
    int extraout_r2;
    u32 uVar5;
    u8 *puVar6;
    u32 uVar7;
    u8 auStack_38[52];

    puVar6 = auStack_38;
    switch_jump(0x30, auStack_38, &g_8c26c994);
    uVar7 = 0x3c;
    uVar1 = libgcc_divide_helper_0106dc(a0, 0x3c);
    *(char *)(a1 + 3) = (char)uVar1;
    uVar1 = libgcc_divide_helper_01051c(a0, uVar7);
    uVar2 = libgcc_divide_helper_0106dc(uVar1, uVar7);
    *(char *)((int)a1 + 5) = (char)uVar2;
    uVar1 = libgcc_divide_helper_01051c(uVar1, uVar7);
    uVar7 = 0x18;
    uVar2 = libgcc_divide_helper_0106dc(uVar1, 0x18);
    *(char *)(a1 + 2) = (char)uVar2;
    uVar1 = libgcc_divide_helper_01051c(uVar1, uVar7);
    iVar3 = libgcc_divide_helper_01051c(uVar1, 0x16d);
    uVar4 = libgcc_divide_helper_0106dc(uVar1, d);
    uVar5 = iVar3 + 1U >> 2;
    if (uVar4 < uVar5) {
        *a1 = (short)iVar3 + 0x79d;
        uVar4 = uVar4 + (extraout_r2 - uVar5);
        if ((*a1 & 3) == 0) {
            uVar4 = uVar4 + 1;
        }
    } else {
        uVar4 = uVar4 - uVar5;
        *a1 = (short)iVar3 + 0x79e;
    }
    uVar5 = 1;
    uVar1 = 0xc;
    if ((*a1 & 3) == 0) {
        if (*(u32 *)(puVar6 + 4) <= uVar4) {
            uVar5 = 2;
            do {
                if (uVar4 < *(int *)(puVar6 + uVar5 * 4) + 1U)
                    break;
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0xc);
        }
    } else {
        uVar5 = 1;
        do {
            if (uVar4 < *(u32 *)(puVar6 + uVar5 * 4))
                break;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0xc);
    }
    *(char *)(a1 + 1) = (char)uVar5;
    *(char *)((int)a1 + 3) = ((char)uVar4 - (char)*(u32 *)(puVar6 + (uVar5 - 1) * 4)) + '\x01';
    if (((*a1 & 3) == 0) && (2 < (u8)a1[1])) {
        *(char *)((int)a1 + 3) = *(char *)((int)a1 + 3) + -1;
    }
    iVar3 = (int)*(char *)((int)a1 + 3);
    a5 = (int)(char)a1[1];
    uVar2 = FUN_8c1f8614((int)(short)*a1, a5, iVar3, 0xc);
    *(char *)((int)a1 + 7) = (char)uVar2;
    uVar1 = FUN_8c1f8650(a1, a5, iVar3);
    *(char *)(a1 + 4) = (char)uVar1;
    return uVar1;
}

/*
 * FUN_8c1f8462  0x8c1f8462
 * called by: FUN_8c1f814c
 */
int FUN_8c1f8462(int a0) {
    bool bVar1;
    int iVar2;
    int *piVar3;
    int *piVar4;
    int *a4;
    int aiStack_24[3];

    piVar3 = aiStack_24;
    piVar4 = piVar3;
    for (a4 = piVar3; a4 < aiStack_24 + 2; a4 = a4 + 1) {
        iVar2 = aica_reg_1f8544(a4);
        if (iVar2 != 0) {
            *piVar4 = a0;
        }
        piVar4 = piVar4 + 1;
    }
    bVar1 = false;
    piVar4 = aiStack_24 + 1;
    do {
        if (aiStack_24 + 1 <= piVar3) {
        LAB_8c1f84bc:
            if (!bVar1) {
                a0 = aiStack_24[0];
            }
            return a0;
        }
        if (*piVar3 != *piVar4) {
            bVar1 = true;
            goto LAB_8c1f84bc;
        }
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
    } while (true);
}

/*
 * FUN_8c1f84d8  0x8c1f84d8
 * called by: FUN_8c1f8114, FUN_8c1f814c, FUN_8c1f8176, FUN_8c1f81dc
 */
int FUN_8c1f84d8(u32 a0) {
    bool bVar1;
    int iVar2;
    int iVar3;
    int iStack_20;
    int aiStack_1c[2];

    bVar1 = false;
    do {
        iVar2 = aica_reg_1f8544(aiStack_1c);
        if (iVar2 == 0) {
            bVar1 = true;
        }
    } while (!bVar1);
    if (bVar1) {
        bVar1 = false;
        do {
            iVar2 = 0;
            do {
                iVar3 = aica_reg_1f8544(&iStack_20);
                if ((iVar3 != 0) || (aiStack_1c[0] != iStack_20))
                    break;
                iVar2 = iVar2 + 1;
                aiStack_1c[0] = iStack_20;
            } while (iVar2 < 3);
            if (iVar2 == 3) {
                bVar1 = true;
            }
        } while (!bVar1);
    } else {
        iStack_20 = -1;
    }
    return iStack_20;
}

/*
 * aica_reg_1f8544  0x8c1f8544
 * called by: FUN_8c1f8462, FUN_8c1f84d8
 */
u32 aica_reg_1f8544(u32 *a0) {
    int iVar1;
    int *ar5_00;
    u32 a6;
    u32 a7;
    int iStack_10;
    u32 uStack_c;

    ar5_00 = &iStack_10;
    a6 = 4;
    a7 = 2;
    iVar1 = FUN_8c1f92c0(0xa0710000, ar5_00, 4, 2, 1, 1);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    *a0 = iStack_10 << 0x10 & 0xffff0000 | uStack_c & 0xffff;
    FUN_8c1f86e4(iStack_10);
    FUN_8c1f86e4(uStack_c);
    return 0;
}

/*
 * aica_reg_1f85a0  0x8c1f85a0
 * called by: FUN_8c1f81dc
 */
u32 aica_reg_1f85a0(void) {
    u16 auStack_c[4];

    auStack_c[0] = 1;
    syG2CpuCopy(auStack_c, 0xa0710008, 4, 1, 0, 0);
    return 0;
}

/*
 * aica_reg_1f85c8  0x8c1f85c8
 * called by: FUN_8c1f81dc
 */
u32 aica_reg_1f85c8(u32 a0) {
    u32 auStack_c[2];

    auStack_c[0] = a0;
    syG2CpuCopy(auStack_c, 0xa0710004, 4, 1, 0, 0);
    return 0;
}

/*
 * aica_reg_1f85ee  0x8c1f85ee
 * called by: FUN_8c1f81dc
 */
u32 aica_reg_1f85ee(u32 a0) {
    u32 auStack_c[2];

    auStack_c[0] = a0;
    syG2CpuCopy(auStack_c, 0xa0710000, 4, 1, 0, 0);
    return 0;
}

/*
 * FUN_8c1f8614  0x8c1f8614
 * called by: FUN_8c1f8176, FUN_8c1f8300
 */
u32 FUN_8c1f8614(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    if ((a1 & 0xff) < 3) {
        a1 = a1 + 0xc;
        a0 = a0 - 1;
    }
    iVar1 = libgcc_divide_helper_010468((a1 & 0xff) * 0xd + 8, 5);
    uVar2 = libgcc_divide_helper_010614(((int)(a0 & 0xffff) >> 2) + iVar1 + (a0 & 0xffff) + (a2 & 0xff) + -0xf, 7);
    return uVar2;
}

/*
 * FUN_8c1f8650  0x8c1f8650
 * called by: FUN_8c1f8176, FUN_8c1f8300
 */
u32 FUN_8c1f8650(u32 a0, u32 unused_a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 auStack_8[2];

    date_to_rtc_seconds(a0, auStack_8, a2);
    iVar3 = 0x26ee7f;
    if (auStack_8[0] < 0x5cb417d1) {
        iVar1 = libgcc_divide_helper_0106dc(0x5cb417d1 - auStack_8[0], 0x26ee7f);
        iVar3 = iVar3 - iVar1;
    } else {
        iVar3 = libgcc_divide_helper_0106dc(auStack_8[0] + 0xa34be82f, 0x26ee7f);
    }
    uVar2 = libgcc_divide_helper_01051c(iVar3, 0x15180);
    return uVar2;
}

/*
 * FUN_8c1f86e4  0x8c1f86e4
 * called by: aica_reg_1f8544
 */
u32 FUN_8c1f86e4(u32 a0) {
    int *piVar1;
    u32 uVar2;

    piVar1 = 0x8c474a20;
    uVar2 = g_8c474a14;
    if ((uVar2 & 8) != 0) {
        if ((u32 *)*0x8c474a20 < (u32 *)*0x8c474a24) {
            *(u32 *)*0x8c474a20 = a0;
            *piVar1 = *piVar1 + 4;
        }
    }
    return uVar2;
}

/*
 * FUN_8c1f8710  0x8c1f8710
 * called by: FUN_8c1f875c, FUN_8c1f87ae
 */
u32 FUN_8c1f8710(u8 *a0) {
    u8 bVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *pbVar4;

    uVar2 = 0;
    pbVar4 = a0 + 8;
    do {
        bVar1 = *a0;
        a0 = a0 + 1;
        uVar3 = uVar2;
        if ((&g_8c26c9f0)[bVar1 & 0xf] == (&g_8c26c9f0)[(int)(u32)bVar1 >> 4]) {
            uVar3 = uVar2 | 1;
        }
        uVar2 = uVar3 << 1;
    } while (a0 < pbVar4);
    return uVar3 & 0x7fffffff;
}

/*
 * FUN_8c1f875c  0x8c1f875c
 * called by: FUN_8c1f6f20, FUN_8c1f6f2a, FUN_8c1f7c40, FUN_8c1f7c50
 */
u32 FUN_8c1f875c(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 a5;

    a5 = 0;
    FUN_8c1f6e0c(0, 0, a2, a3);
    uVar1 = FUN_8c1f8710(g_8c4748b0);
    if ((((uVar1 & 0xff) != (int)0xff) && ((u32) * (u8 *)*0x8c4748b0 == (int)0xff)) &&
        ((uVar1 & 0xff) != (u32) * (u8 *)(g_8c4748b0 + 0x3b))) {
        g_8c4748a8 = 1;
        return 0;
    }
    memmove(0x8c474a28, g_8c4748b0, 0x3c);
    return 1;
}

/*
 * FUN_8c1f87ae  0x8c1f87ae
 */
u32 FUN_8c1f87ae(void) {
    int iVar1;
    u8 *puVar2;
    u32 uVar3;

    iVar1 = 0x8c474a28;
    uVar3 = FUN_8c1f8710(0x8c474a28);
    puVar2 = (&FUN_8c1f6e5e);
    *(char *)(iVar1 + 0x3b) = (char)uVar3;
    uVar3 = (*(code *)puVar2)(0, iVar1);
    return uVar3;
}

/*
 * FUN_8c1f881c  0x8c1f881c
 * called by: FUN_8c1f6e0c, FUN_8c1f884c
 */
u32 FUN_8c1f881c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;

    iVar2 = FUN_8c1f0f24(a0, a1);
    puVar1 = (&FUN_8c1f0fa0);
    if (iVar2 == 0) {
        do {
            iVar2 = (*(code *)puVar1)(a0, a1, a2, a3);
            a0 = (u32)(iVar2 == 2);
        } while (iVar2 == 2);
        return 0;
    }
    return 0xffffffff;
}

/*
 * FUN_8c1f884c  0x8c1f884c
 * called by: FUN_8c1f6ce2, FUN_8c1f6e5e
 */
u32 FUN_8c1f884c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 ar6_00;
    u8 auStack_48[68];

    iVar2 = FUN_8c1f881c(a0, auStack_48, a2, a3);
    if (iVar2 == 0) {
        ar6_00 = 0x3c;
        iVar2 = memcmp(auStack_48, a1, 0x3c);
        if (iVar2 == 0) {
            return 3;
        }
        iVar2 = FUN_8c1f0f60(a0, a1, ar6_00, a3);
        puVar1 = (&FUN_8c1f0fa0);
        if (iVar2 == 0) {
            do {
                iVar2 = (*(code *)puVar1)(a0, a1, ar6_00, a3);
                a0 = (u32)(iVar2 == 2);
            } while (iVar2 == 2);
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * sh4_tmu_1f88c0  0x8c1f88c0
 * called by: FUN_8c1fa6b8
 */
u32 sh4_tmu_1f88c0(void) {
    u8 *puVar1;
    u8 *pbVar2;
    u32 uVar3;

    puVar1 = 0xffd80000;
    *0xffd80000 = 0;
    pbVar2 = 0xffd80004;
    *0xffd80004 = *0xffd80004 & 0xfe;
    *0xffd80010 = 2;
    *0xffd80008 = 0xffffffff;
    *(u32 *)(puVar1 + 0xc) = 0xffffffff;
    uVar3 = (int)(char)*pbVar2 | 1;
    *pbVar2 = (u8)uVar3;
    return uVar3;
}

/*
 * sh4_tmu_1f88e6  0x8c1f88e6
 * called by: FUN_8c1017f4, FUN_8c1019f8, FUN_8c101e1c, FUN_8c1f2f98, FUN_8c1f2f9c, FUN_8c1f367a, FUN_8c1f3682,
 * FUN_8c1f44cc (+10 more)
 */
int sh4_tmu_1f88e6(u32 a0) {
    return -1 - *0xffd8000c;
}

/*
 * int_diff  0x8c1f88f0
 * returns a1 - a0
 * called by: FUN_8c101de0, FUN_8c258e70, FUN_8c263498, FUN_8c264c92, FUN_8c264e84, FUN_8c264e88, adx_server, game_frame
 */
int int_diff(int a0, int a1) {
    return a1 - a0;
}

/*
 * FUN_8c1f88f6  0x8c1f88f6
 * called by: FUN_8c101de0, FUN_8c264c92, FUN_8c264e84, FUN_8c264e88
 */
int FUN_8c1f88f6(u32 a0) {
    int iVar1;
    int extraout_r3;
    u32 d;

    d = 100;
    iVar1 = libgcc_divide_helper_0106dc(a0, 100);
    libgcc_divide_helper_01051c(iVar1 << 7, d);
    iVar1 = libgcc_divide_helper_01051c(a0, d);
    return iVar1 * 0x80 + extraout_r3;
}

/*
 * FUN_8c1f892a  0x8c1f892a
 * called by: FUN_8c258e70, game_frame
 */
int FUN_8c1f892a(u32 a0) {
    return ((a0 & 0x7f) * 100 >> 7) + (a0 >> 7) * 100;
}

/*
 * sh4_tmu_1f8a64  0x8c1f8a64
 * called by: sh4_tmu_wrap
 */
u32 sh4_tmu_1f8a64(void) {
    char cVar1;

    *0xffd80000 = 0;
    cVar1 = *0xffd80004;
    *0xffd80004 = (char)((int)cVar1 | 4U);
    return (int)cVar1 | 4U;
}

/*
 * sh4_tmu_1f8b34  0x8c1f8b34
 * called by: FUN_8c0b7ad0
 */
u32 sh4_tmu_1f8b34(u32 a0) {
    char cVar1;
    char cVar2;
    char *pcVar3;

    pcVar3 = 0xffd80004;
    if (((((u16)a0 != 0) && ((u16)a0 != 1)) && ((u16)a0 != 2)) && (((u16)a0 != 3 && ((u16)a0 != 4)))) {
        a0._0_2_ = 2;
    }
    cVar1 = *0xffd80004;
    cVar2 = *0xffd80004;
    *0xffd80004 = (char)((int)cVar2 & 0xfbU);
    *0xffd80028 = *0xffd80028 & 0xfff8 | (u16)a0;
    *pcVar3 = cVar1;
    return (int)cVar2 & 0xfbU;
}

/*
 * sh4_tmu_1f8b6e  0x8c1f8b6e
 * called by: FUN_8c0b9244
 */
u32 sh4_tmu_1f8b6e(int a0) {
    char cVar1;
    char cVar2;
    char *pcVar3;

    pcVar3 = 0xffd80004;
    cVar1 = *0xffd80004;
    cVar2 = *0xffd80004;
    *0xffd80004 = (char)((int)cVar2 & 0xfbU);
    *0xffd80020 = 0xffffffff;
    *0xffd80024 = -a0;
    *pcVar3 = cVar1;
    return (int)cVar2 & 0xfbU;
}

/*
 * sh4_tmu_1f8b88  0x8c1f8b88
 * called by: FUN_8c0b9244
 */
int sh4_tmu_1f8b88(void) {
    return -1 - *0xffd80024;
}

/*
 * FUN_8c1f8b92  0x8c1f8b92
 * called by: FUN_8c0b9244
 */
int FUN_8c1f8b92(u32 a0, u32 a1) {
    int iVar1;
    int extraout_r3;
    int iVar2;
    u32 d;

    if ((short)a1 == 0) {
        iVar2 = 8;
    } else if ((short)a1 == 1) {
        iVar2 = 0x20;
    } else if ((short)a1 == 3) {
        iVar2 = 0x200;
    } else if ((short)a1 == 4) {
        iVar2 = 0x800;
    } else {
        iVar2 = 0x80;
    }
    d = 100;
    iVar1 = libgcc_divide_helper_0106dc(a0, 100);
    libgcc_divide_helper_01051c(iVar1 * iVar2, d);
    iVar1 = libgcc_divide_helper_01051c(a0, d);
    return iVar1 * iVar2 + extraout_r3;
}

/*
 * FUN_8c1f8be8  0x8c1f8be8
 */
int FUN_8c1f8be8(u32 a0, u32 a1) {
    int iVar1;
    int extraout_r3;
    u32 d;
    int iVar2;

    if ((short)a1 == 0) {
        d = 8;
    } else if ((short)a1 == 1) {
        d = 0x20;
    } else if ((short)a1 == 3) {
        d = 0x200;
    } else if ((short)a1 == 4) {
        d = 0x800;
    } else {
        d = 0x80;
    }
    iVar2 = 100;
    iVar1 = libgcc_divide_helper_0106dc(a0, d);
    libgcc_divide_helper_01051c(iVar1 * iVar2, d);
    iVar1 = libgcc_divide_helper_01051c(a0, d);
    return iVar1 * iVar2 + extraout_r3;
}

/*
 * g2dma_1f8c6c  0x8c1f8c6c
 * called by: FUN_8c1f8c80
 */
u32 g2dma_1f8c6c(u32 *a0) {
    *a0 = (u32)((*0xa05f688c & 1) == 0);
    return 0;
}

/*
 * FUN_8c1f8c80  0x8c1f8c80
 */
u32 FUN_8c1f8c80(void) {
    int aiStack_10[2];

    do {
        g2dma_1f8c6c(aiStack_10);
    } while (aiStack_10[0] != 1);
    *(int *)(g_8c273a28 + 0x110) = *(int *)(g_8c273a28 + 0x110) + 1;
    return 0;
}

/*
 * syG2DmaEndHandler  0x8c1f8cbc
 * G2 DMA end interrupt: clears the channel and runs its callback
 */
u32 syG2DmaEndHandler(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u8 in_MD;
    u8 bVar4;
    u8 in_RB;
    u8 bVar5;
    u8 in_BL;
    u8 bVar6;
    u8 in_FD;
    u8 bVar7;
    u8 in_M;
    u8 extraout_M;
    u8 bVar8;
    u8 in_Q;
    u8 extraout_Q;
    u8 bVar9;
    u8 in_IMASK;
    u8 bVar10;
    u8 in_S;
    u8 extraout_S;
    u8 bVar11;
    u8 in_T;
    u8 bVar12;
    u8 extraout_T;

    uVar3 = (u32)in_T | (u32)in_S << 1;
    uVar1 = uVar3 | (u32)in_IMASK << 4 | (u32)in_Q << 8;
    uVar2 = uVar1 | (u32)in_M << 9;
    bVar6 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar4 = bVar6 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar11 = (u8)((uVar3 & 2) >> 1);
    bVar10 = 0;
    bVar9 = (u8)(uVar1 >> 8) & 1;
    bVar8 = (u8)((uVar2 & 0x200) >> 9);
    bVar7 = (u8)(((uVar2 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar6 = (bVar6 & 0x10) >> 4;
    bVar5 = (bVar4 & 0x20) >> 5;
    bVar4 = ((bVar4 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    *(u32 *)(*g_8c273a28 + *a0 * 0x20 + 0x14) = 0;
    a0[0xb] = 0;
    a0[0xc] = 1;
    g_8c273a28[*a0 + 0x3b] = g_8c273a28[*a0 + 0x3b] + 1;
    uVar3 = *a0 + 0xf;
    if ((int)uVar3 < 0) {
        _DAT_a05f6900 = 1 >> (~uVar3 & 0x1f) + 1;
    } else {
        _DAT_a05f6900 = 1 << (uVar3 & 0x1f);
    }
    bVar12 = a0[7] == 0;
    if (!(bool)bVar12) {
        (*(code *)a0[7])(a0[8], _DAT_a05f6900, &g_8c273a28, a3);
        bVar8 = extraout_M;
        bVar9 = extraout_Q;
        bVar11 = extraout_S;
        bVar12 = extraout_T;
    }
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0 |
           ((u32)bVar12 | (u32)bVar11 << 1 | (u32)bVar10 << 4) & 0xffffff0f | (u32)bVar9 << 8 | (u32)bVar8 << 9 |
           (u32)bVar7 << 0xf | (u32)bVar6 << 0x1c | (u32)bVar5 << 0x1d | (u32)bVar4 << 0x1e;
}

/*
 * syG2DmaGetStatus  0x8c1f8d48
 * called by: FUN_8c1f9194
 */
u32 syG2DmaGetStatus(int *a0, u32 *a1) {
    *a1 = (u32)((*(u32 *)(*a0 * 0x20 + *g_8c273a28 + 0x18) & 1) != 0);
    return 0;
}

/*
 * FUN_8c1f8d98  0x8c1f8d98
 * called by: FUN_8c2650ec
 */
u32 FUN_8c1f8d98(u32 *a0, int a1) {
    int *piVar1;
    u32 uVar2;

    uVar2 = 0;
    piVar1 = (int *)(a1 * 0x34 + g_8c273a28 + 4);
    if (piVar1[10] == 1) {
        uVar2 = 0x90101;
    } else {
        *(int *)(*piVar1 * 0x34 + g_8c273a28 + 4) = *piVar1;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0x2c) = 0;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0x30) = 0;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0x34) = 0;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 8) = 0;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0xc) = 0;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0x10) = 0;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0x14) = 0;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0x18) = 0;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0x1c) = 3;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0x20) = 0;
        *(u32 *)(*piVar1 * 0x34 + g_8c273a28 + 0x24) = 0;
        piVar1[10] = 1;
        *a0 = piVar1;
    }
    return uVar2;
}

/*
 * FUN_8c1f8eb0  0x8c1f8eb0
 * called by: FUN_8c1f9408
 */
u32 FUN_8c1f8eb0(int *a0) {
    g_8c273a28[*a0 * 0xd + 1] = *a0;
    g_8c273a28[*a0 * 0xd + 0xb] = 0;
    g_8c273a28[*a0 * 0xd + 0xc] = 0;
    g_8c273a28[*a0 * 0xd + 0xd] = 0;
    g_8c273a28[*a0 * 0xd + 2] = 0;
    g_8c273a28[*a0 * 0xd + 3] = 0;
    g_8c273a28[*a0 * 0xd + 4] = 0;
    g_8c273a28[*a0 * 0xd + 5] = 0;
    g_8c273a28[*a0 * 0xd + 6] = 0;
    g_8c273a28[*a0 * 0xd + 7] = 3;
    g_8c273a28[*a0 * 0xd + 8] = 0;
    g_8c273a28[*a0 * 0xd + 9] = 0;
    *(u32 *)(*a0 * 0x20 + *g_8c273a28 + 0x14) = 0;
    return 0;
}

/*
 * FUN_8c1f8fa8  0x8c1f8fa8
 * called by: FUN_8c1f8fc8, FUN_8c1f8fcc
 */
u32 FUN_8c1f8fa8(int *a0) {
    *(u32 *)(*a0 * 0x20 + *g_8c273a28 + 0x1c) = 0;
    return 0;
}

/*
 * FUN_8c1f8fc8  0x8c1f8fc8
 * called by: FUN_8c1f92c0, syG2CpuCopy
 */
u32 FUN_8c1f8fc8(void) {
    u32 uVar1;

    uVar1 = 0;
    do {
        FUN_8c1f8fa8(g_8c273a28 + 4 + uVar1);
        uVar1 = uVar1 + 0x34;
    } while (uVar1 < 0xd0);
    g_8c474bac = 0;
    return 0;
}

/*
 * FUN_8c1f8fcc  0x8c1f8fcc
 */
u32 FUN_8c1f8fcc(void) {
    u32 unaff_r14;

    do {
        FUN_8c1f8fa8(g_8c273a28 + 4 + unaff_r14);
        unaff_r14 = unaff_r14 + 0x34;
    } while (unaff_r14 < 0xd0);
    g_8c474bac = 0;
    return 0;
}

/*
 * FUN_8c1f900c  0x8c1f900c
 * called by: aica_ram_2657ec
 */
u32 FUN_8c1f900c(int a0, u32 a1, u32 a2, u32 a3, u32 s0, int s4, int s8, u32 s12, u32 s16) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;

    uVar2 = 0x80000000;
    uVar1 = 0x1ffffe0;
    uVar3 = a2 & 0x1fffffe0;
    *(u32 *)(a0 + 4) = a1 & 0x1fffffe0;
    *(u32 *)(a0 + 8) = uVar3;
    *(u32 *)(a0 + 0xc) = a3 & uVar1 | uVar2;
    *(u32 *)(a0 + 0x10) = s0 & 1;
    if (s4 == 1) {
        *(u32 *)(a0 + 0x14) = *(u32 *)(a0 + 0x14) | 1;
    } else {
        *(u32 *)(a0 + 0x14) = *(u32 *)(a0 + 0x14) & 0xfffffffd;
    }
    if (s8 == 1) {
        *(u32 *)(a0 + 0x14) = *(u32 *)(a0 + 0x14) | 4;
    } else {
        *(u32 *)(a0 + 0x14) = *(u32 *)(a0 + 0x14) & 0xfffffffe;
    }
    *(u32 *)(a0 + 0x14) = *(u32 *)(a0 + 0x14) & 7;
    *(u32 *)(a0 + 0x1c) = s12;
    *(u32 *)(a0 + 0x20) = s16;
    *(u32 *)(a0 + 0x30) = 0;
    return 0;
}

/*
 * FUN_8c1f90a4  0x8c1f90a4
 * called by: FUN_8c1f9408
 */
u32 FUN_8c1f90a4(u32 a0, u32 a1) {
    _DAT_a05f78bc = ((a0 & 0x7f00000) >> 0x14) << 8 | (a1 & 0x7f00000) >> 0x14 | 0x46590000;
    g_8c273a20 = _DAT_a05f78bc;
    return 0;
}

/*
 * FUN_8c1f9108  0x8c1f9108
 * called by: FUN_8c1f9150, FUN_8c1f9154
 */
u32 FUN_8c1f9108(int *a0) {
    *(u32 *)(*a0 * 0x20 + *g_8c273a28 + 0x1c) = 1;
    return 0;
}

/*
 * FUN_8c1f9150  0x8c1f9150
 * called by: FUN_8c1f92c0, syG2CpuCopy
 */
u32 FUN_8c1f9150(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = 0;
    do {
        FUN_8c1f9108(g_8c273a28 + 4 + uVar1);
        uVar1 = uVar1 + 0x34;
    } while (uVar1 < 0xd0);
    g_8c474bac = 1;
    return 0;
}

/*
 * FUN_8c1f9154  0x8c1f9154
 */
u32 FUN_8c1f9154(void) {
    u32 unaff_r14;

    do {
        FUN_8c1f9108(g_8c273a28 + 4 + unaff_r14);
        unaff_r14 = unaff_r14 + 0x34;
    } while (unaff_r14 < 0xd0);
    g_8c474bac = 1;
    return 0;
}

/*
 * FUN_8c1f9194  0x8c1f9194
 * called by: aica_ram_2657ec
 */
u32 FUN_8c1f9194(int *a0, int a1) {
    u32 uVar1;
    u32 uVar2;
    int *piVar3;
    int in_stack_ffffffe4;

    uVar2 = 0;
    piVar3 = (int *)(*g_8c273a28 + *a0 * 0x20);
    syG2DmaGetStatus(a0, &stack0xffffffe4);
    if (in_stack_ffffffe4 == 1) {
        uVar2 = 0x90180;
    } else {
        FUN_8c1f9e32(a0[2] & 0x1fffffffU | 0xa0000000, a0[3] & 0x7fffffe0);
        piVar3[5] = 0;
        *piVar3 = a0[1];
        piVar3[1] = a0[2];
        piVar3[2] = a0[3];
        piVar3[3] = a0[4];
        if (a1 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = 2;
        }
        piVar3[4] = uVar1 | a0[5];
        piVar3[5] = 1;
        a0[0xb] = 1;
        g_8c273a28[*a0 + 0x37] = g_8c273a28[*a0 + 0x37] + 1;
        piVar3[6] = 1;
    }
    return uVar2;
}

/*
 * g2dma_1f9270  0x8c1f9270
 * called by: syG2FifoWait
 */
u32 g2dma_1f9270(u32 *a0) {
    *a0 = (u32)((*0xa05f688c & 0x10) == 0);
    return 0;
}

/*
 * syG2FifoWait  0x8c1f9284
 * called by: FUN_8c1f92c0, syG2CpuCopy
 */
u32 syG2FifoWait(void) {
    int aiStack_10[2];

    do {
        g2dma_1f9270(aiStack_10);
    } while (aiStack_10[0] != 1);
    *(int *)(g_8c273a28 + 0x10c) = *(int *)(g_8c273a28 + 0x10c) + 1;
    return 0;
}

/*
 * FUN_8c1f92c0  0x8c1f92c0
 * called by: aica_ram_2668fc, aica_ram_268618, aica_ram_2686d4, aica_reg_1f8544, aica_reg_258210, aica_reg_265278,
 * aica_reg_2652f4
 */
u32 FUN_8c1f92c0(u32 *a0, u32 *a1, u32 *a2, int a3, int s0, int s4) {
    u8 uVar1;
    u16 uVar2;
    u32 uVar3;
    u32 *ar4_00;
    u32 *ar5_00;
    u32 *ar6_00;
    int ar7_00;
    int iVar4;
    int unaff_r13;

    iVar4 = 0;
    ar5_00 = (u32 *)0x1;
    ar4_00 = (u32 *)0xffffffff;
    if (s0 == 0) {
        iVar4 = 0;
    } else if (s0 == 1) {
        iVar4 = 1;
    } else if (s0 == 2) {
        iVar4 = -1;
    }
    if (s4 == 0) {
        unaff_r13 = 0;
    } else if (s4 == 1) {
        unaff_r13 = 1;
    } else if (s4 == 2) {
        unaff_r13 = -1;
    }
    ar6_00 = a2;
    ar7_00 = a3;
    FUN_8c1f9150(0xffffffff, 1);
    syG2FifoWait();
    if (a2 == (u32 *)0x1) {
        ar4_00 = NULL;
        ar5_00 = a0;
        ar6_00 = a1;
        if (0 < a3) {
            do {
                uVar1 = *(u8 *)ar5_00;
                ar4_00 = (u32 *)((int)ar4_00 + 1);
                ar5_00 = (u32 *)((int)ar5_00 + iVar4);
                *(u8 *)ar6_00 = uVar1;
                ar6_00 = (u32 *)((int)ar6_00 + unaff_r13);
            } while ((int)ar4_00 < a3);
        }
    } else if (a2 == (u32 *)0x2) {
        ar7_00 = iVar4 * 2;
        ar5_00 = NULL;
        ar4_00 = a1;
        ar6_00 = a0;
        if (0 < a3) {
            do {
                uVar2 = *(u16 *)ar6_00;
                ar5_00 = (u32 *)((int)ar5_00 + 1);
                ar6_00 = (u32 *)((int)ar6_00 + ar7_00);
                *(u16 *)ar4_00 = uVar2;
                ar4_00 = (u32 *)((int)ar4_00 + unaff_r13 * 2);
            } while ((int)ar5_00 < a3);
        }
    } else if (a2 == (u32 *)0x4) {
        ar7_00 = iVar4 * 4;
        ar6_00 = NULL;
        ar4_00 = a1;
        ar5_00 = a0;
        if (0 < a3) {
            do {
                uVar3 = *a0;
                ar6_00 = (u32 *)((int)ar6_00 + 1);
                a0 = a0 + iVar4;
                *a1 = uVar3;
                a1 = a1 + unaff_r13;
                ar4_00 = a1;
                ar5_00 = a0;
            } while ((int)ar6_00 < a3);
        }
    }
    FUN_8c1f8fc8();
    return 0;
}

/*
 * FUN_8c1f9408  0x8c1f9408
 * name hint from a string it uses: nsyG2 Ver 1 01 12 Build Dec
 * called by: FUN_8c1fa6e2
 */
u32 FUN_8c1f9408(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 uVar2;
    u32 a6;
    int iVar3;
    int iVar4;

    log_message(PTR_s_syG2_Ver_1_01_12_Build_Dec_06_19_8c273a30, a1, a2);
    a6 = 0x114;
    uVar2 = 0xff;
    g_8c273a28 = (u32 *)&g_8c474a80;
    memset(&g_8c474a80, 0xff, 0x114);
    *g_8c273a28 = 0xa05f7800;
    g_8c273a28[0x35] = 1;
    g_8c273a28[0x36] = 0;
    iVar3 = 0;
    do {
        g_8c273a28[iVar3 * 0xd + 1] = iVar3;
        g_8c273a28[iVar3 * 0xd + 0xb] = 0;
        g_8c273a28[iVar3 * 0xd + 0xc] = 0;
        g_8c273a28[iVar3 * 0xd + 0xd] = 0;
        g_8c273a28[iVar3 * 0xd + 2] = 0;
        g_8c273a28[iVar3 * 0xd + 3] = 0;
        g_8c273a28[iVar3 * 0xd + 4] = 0;
        g_8c273a28[iVar3 * 0xd + 5] = 0;
        g_8c273a28[iVar3 * 0xd + 6] = 0;
        g_8c273a28[iVar3 * 0xd + 7] = 3;
        g_8c273a28[iVar3 * 0xd + 8] = 0;
        g_8c273a28[iVar3 * 0xd + 9] = 0;
        FUN_8c1f8eb0(g_8c273a28 + iVar3 * 0xd + 1);
        iVar4 = iVar3 + 1;
        g_8c273a28[iVar3 + 0x37] = 0;
        g_8c273a28[iVar3 + 0x3f] = 0;
        g_8c273a28[iVar3 + 0x3b] = 0;
        iVar3 = iVar4;
    } while (iVar4 < 4);
    g_8c273a28[0x43] = 0;
    g_8c273a28[0x44] = 0;
    FUN_8c1f90a4(0xc000000, 0xcffffff);
    g_8c273a28[0x35] = 1;
    puVar1 = g_8c273a28 + 10;
    uVar2 = FUN_8c1fa244(0xa60, syG2DmaEndHandler, 0x10, g_8c273a28 + 1);
    *puVar1 = uVar2;
    puVar1 = g_8c273a28 + 0x17;
    uVar2 = FUN_8c1fa244(0xa80, syG2DmaEndHandler, 0x10, g_8c273a28 + 0xe);
    *puVar1 = uVar2;
    puVar1 = g_8c273a28 + 0x24;
    uVar2 = FUN_8c1fa244(0xaa0, syG2DmaEndHandler, 0x10, g_8c273a28 + 0x1b);
    *puVar1 = uVar2;
    puVar1 = g_8c273a28 + 0x31;
    uVar2 = FUN_8c1fa244(0xac0, syG2DmaEndHandler, 0x10, g_8c273a28 + 0x28);
    *puVar1 = uVar2;
    g_8c474bac = 0;
    return 0;
}

/*
 * syG2CpuCopy  0x8c1f9610
 * CPU copy over G2 with FIFO waits
 * called by: aica_ram_2684b8, aica_ram_268748, aica_ram_268788, aica_reg_1f85a0, aica_reg_1f85c8, aica_reg_1f85ee,
 * aica_reg_258210, aica_reg_265278 (+2 more)
 */
u32 syG2CpuCopy(u32 *a0, u32 *a1, int a2, int a3, int s0, int s4) {
    u8 *puVar1;
    u8 *puVar2;
    u32 ar4_00;
    u32 ar5_00;
    int ar6_00;
    int ar7_00;
    u32 uVar3;
    int unaff_r9;
    int unaff_r10;
    u32 *puStack_30;
    u32 *puStack_2c;

    ar5_00 = 1;
    ar4_00 = 0xffffffff;
    if (s0 == 0) {
        unaff_r10 = 0;
    } else if (s0 == 1) {
        unaff_r10 = 1;
    } else if (s0 == 2) {
        unaff_r10 = -1;
    }
    if (s4 == 0) {
        unaff_r9 = 0;
    } else if (s4 == 1) {
        unaff_r9 = 1;
    } else if (s4 == 2) {
        unaff_r9 = -1;
    }
    ar6_00 = a2;
    ar7_00 = a3;
    FUN_8c1f9150(0xffffffff, 1);
    puVar1 = (&syG2FifoWait);
    syG2FifoWait();
    puVar2 = (&FUN_8c1f8c80);
    puStack_30 = a0;
    puStack_2c = a1;
    if (a2 == 1) {
        uVar3 = 0;
        if (0 < a3) {
            do {
                if ((uVar3 & 7) == 0) {
                    (*(code *)puVar1)(ar4_00, ar5_00, ar6_00, ar7_00);
                    (*(code *)puVar2)(ar4_00, ar5_00, ar6_00, ar7_00);
                }
                uVar3 = uVar3 + 1;
                *(u8 *)puStack_2c = *(u8 *)puStack_30;
                puStack_30 = (u32 *)((int)puStack_30 + unaff_r10);
                puStack_2c = (u32 *)((int)puStack_2c + unaff_r9);
            } while ((int)uVar3 < a3);
        }
    } else if (a2 == 2) {
        uVar3 = 0;
        if (0 < a3) {
            do {
                if ((uVar3 & 7) == 0) {
                    (*(code *)puVar1)(ar4_00, ar5_00, ar6_00, ar7_00);
                    (*(code *)puVar2)(ar4_00, ar5_00, ar6_00, ar7_00);
                }
                uVar3 = uVar3 + 1;
                *(u16 *)puStack_2c = *(u16 *)puStack_30;
                puStack_30 = (u32 *)((int)puStack_30 + unaff_r10 * 2);
                puStack_2c = (u32 *)((int)puStack_2c + unaff_r9 * 2);
            } while ((int)uVar3 < a3);
        }
    } else if ((a2 == 4) && (uVar3 = 0, 0 < a3)) {
        do {
            if ((uVar3 & 7) == 0) {
                (*(code *)puVar1)(ar4_00, ar5_00, ar6_00, ar7_00);
                (*(code *)puVar2)(ar4_00, ar5_00, ar6_00, ar7_00);
            }
            uVar3 = uVar3 + 1;
            *puStack_2c = *puStack_30;
            puStack_30 = puStack_30 + unaff_r10;
            puStack_2c = puStack_2c + unaff_r9;
        } while ((int)uVar3 < a3);
    }
    FUN_8c1f8fc8();
    return 0;
}

/*
 * FUN_8c1f97b4  0x8c1f97b4
 * called by: FUN_8c1f7eea, FUN_8c1f7f1e, FUN_8c1f7f22, FUN_8c1f7f9c
 */
u32 FUN_8c1f97b4(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 uVar1;
    u8 *puVar2;
    int iVar3;
    int iVar4;
    int a4;
    u8 *puVar5;
    u8 *puVar6;
    u8 *a5;
    u8 *puVar7;
    u32 a7;
    u8 auStack_50[7];
    u8 auStack_49[57];

    puVar5 = auStack_50;
    puVar7 = auStack_50;
    a5 = auStack_50;
    iVar3 = FUN_8c1f0d94(2, a1, a2, a3);
    if (iVar3 == -8) {
        iVar3 = FUN_8c1f0e98(0);
    }
    if ((iVar3 == 0) && (iVar3 = FUN_8c1f0f24(5, auStack_50), puVar2 = (&FUN_8c1f0fa0), iVar3 == 0)) {
        iVar3 = 0;
        do {
            iVar3 = (*(code *)puVar2)(iVar3, puVar5, a2, a3);
        } while (iVar3 == 2);
        if (iVar3 == 1) {
            iVar3 = syscall_1f3b44(1);
            puVar5 = (u8 *)(iVar3 + 0x10);
            if (a0 == 0) {
                for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                    uVar1 = *puVar7;
                    puVar7 = puVar7 + 1;
                    *puVar5 = uVar1;
                    puVar5 = puVar5 + 1;
                }
                return 0;
            }
            puVar7 = auStack_49;
            puVar5 = (u8 *)(iVar3 + 0x17);
            a7 = 1;
            for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
                if (((a0 & 1) != 0) && (*puVar7 = *puVar5, iVar3 == 4)) {
                    puVar6 = puVar5 + -2;
                    puVar7[-1] = puVar5[-1];
                    puVar5 = puVar5 + -3;
                    puVar7[-2] = *puVar6;
                    puVar7 = puVar7 + -3;
                    *puVar7 = *puVar5;
                }
                puVar5 = puVar5 + -1;
                a0 = (int)a0 >> 1;
                puVar7 = puVar7 + -1;
            }
            iVar4 = FUN_8c1f0f60(5, auStack_50, iVar3, 1);
            a4 = 0;
            if (iVar4 == 0) {
                do {
                    a4 = (*(code *)puVar2)(a4, a5, iVar3, a7);
                } while (a4 == 2);
                if (a4 == 1) {
                    return 0;
                }
            }
        }
    }
    return 0xffffffff;
}

/*
 * syscall_1f98b0  0x8c1f98b0
 * called by: FUN_8c1f0d94
 */
u32 syscall_1f98b0(u32 unused_a0, u32 a1) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f98b6. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000b8)(0x0);
    return uVar1;
}

/*
 * syscall_1f98c4  0x8c1f98c4
 * called by: FUN_8c1f0a72, FUN_8c1f0d94
 */
u32 syscall_1f98c4(u32 unused_a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f98ca. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000b8)(0x1);
    return uVar1;
}

/*
 * syscall_1f98d8  0x8c1f98d8
 * called by: FUN_8c1f0b58, FUN_8c1f0c14, FUN_8c1f0e98, FUN_8c1f0e9c
 */
u32 syscall_1f98d8(u32 unused_a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f98de. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000b8)(0x2);
    return uVar1;
}

/*
 * syscall_1f98ec  0x8c1f98ec
 * called by: FUN_8c1f0d34, FUN_8c1f0d38, FUN_8c1f0e98, FUN_8c1f0e9c, FUN_8c1f103e
 */
u32 syscall_1f98ec(void) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1f98f2. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c0000b8)(0x3);
    return uVar1;
}

/*
 * FUN_8c1f9914  0x8c1f9914
 */
u32 FUN_8c1f9914(u32 a0) {
    u32 *puVar1;
    u32 uVar2;
    u32 uVar3;
    u8 in_MD;
    u8 bVar4;
    u8 in_RB;
    u8 bVar5;
    u8 in_BL;
    u8 bVar6;
    u8 in_FD;
    u8 bVar7;
    u8 in_M;
    u8 extraout_M;
    u8 in_Q;
    u8 extraout_Q;
    u8 in_IMASK;
    u8 bVar8;
    u8 in_S;
    u8 extraout_S;
    u8 in_T;
    u8 extraout_T;

    bVar6 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar4 = bVar6 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar8 = (u8)((((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4);
    bVar7 = (u8)((((u32)in_Q << 8 | (u32)in_M << 9 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar6 = (bVar6 & 0x10) >> 4;
    bVar5 = (bVar4 & 0x20) >> 5;
    bVar4 = ((bVar4 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    FUN_8c1fa0c4();
    puVar1 = 0xff00001c;
    uVar2 = (u32)0x800;
    *0xff00001c = a0;
    uVar3 = (u32)(int)0xffffff0f;
    *puVar1 = *puVar1 & (int)(int)0xfffff7ff | uVar2;
    *puVar1 = *puVar1 & 0xfffffff7 | 8;
    return (int)(short)((((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4) << 4 |
           ((u32)extraout_T | (u32)extraout_S << 1 | (u32)bVar8 << 4 | (u32)extraout_Q << 8 | (u32)extraout_M << 9 |
            (u32)bVar7 << 0xf | (u32)bVar6 << 0x1c | (u32)bVar5 << 0x1d | (u32)bVar4 << 0x1e) &
               uVar3;
}

/*
 * FUN_8c1f9980  0x8c1f9980
 * called by: FUN_8c1f11ea, FUN_8c1f1286
 * decompiler: Switch with 1 destination removed at 0x8c1f9992
 * decompiler: Switch with 1 destination removed at 0x8c1f99a2
 * decompiler: Switch with 1 destination removed at 0x8c1f99e2
 */
u32 FUN_8c1f9980(u32 a0, u32 a1) {
    u32 in_r0;
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u8 in_IMASK;
    u8 in_S;

    if (a1 != 0) {
        uVar3 = 0x9fffffe0 & a0;
        if (0x30000 <= a1) {
            /* WARNING: Could not recover jumptable at 0x8c1f9a0a. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar1 = (*(code *)(0xa0000000 | 0x8c1f9a14))((short)((((u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4));
            return uVar1;
        }
        uVar2 = (a0 & 0x1f) + a1 + 0x1f >> 5;
        do {
            CacheBlockInvalidate(uVar3);
            uVar2 = uVar2 - 1;
            uVar3 = uVar3 + 0x20;
        } while (uVar2 != 0);
    }
    return in_r0;
}

/*
 * FUN_8c1f9a14  0x8c1f9a14
 */
u32 FUN_8c1f9a14(void) {
    u32 uVar1;
    u32 uVar2;
    int unaff_r12;
    u32 uVar3;
    int unaff_r13;
    u32 uVar4;
    u32 unaff_r14;
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 bVar5;
    u16 in_stack_00000000;

    uVar3 = (unaff_r12 + unaff_r13) - 1U & 0x1fffffe0;
    uVar4 = _DAT_ff00001c >> 5 & 1;
    for (uVar1 = 0; uVar1 < 0x2000; uVar1 = uVar1 + 0x20) {
        uVar2 = *(u32 *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
        if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
            CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
        }
        if ((uVar4 != 0) && (uVar1 == 0xfe0))
            break;
    }
    if ((_DAT_ff00001c >> 7 & 1) == 0) {
        for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
            uVar2 = *(u32 *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
            if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
                CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
            }
            if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0))
                break;
        }
    } else {
        for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
            uVar2 = *(u32 *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1 | uVar1 & 0x1fff | uVar3;
            if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
                CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
            }
            if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0))
                break;
        }
    }
    return (in_stack_00000000 & 0xf) << 4 | ((u32)bVar5 | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xffffff0f |
           (u32)in_Q << 8 | (u32)in_M << 9 | (u32)in_FD << 0xf | (u32)in_BL << 0x1c | (u32)in_RB << 0x1d |
           (u32)in_MD << 0x1e;
}

/*
 * FUN_8c1f9bde  0x8c1f9bde
 * called by: FUN_8c1f11ea, FUN_8c1f1286
 * decompiler: Switch with 1 destination removed at 0x8c1f9bf0
 * decompiler: Switch with 1 destination removed at 0x8c1f9c00
 * decompiler: Switch with 1 destination removed at 0x8c1f9c36
 */
u32 FUN_8c1f9bde(u32 a0, u32 a1) {
    u32 in_r0;
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u8 in_IMASK;
    u8 in_S;

    if (a1 != 0) {
        uVar3 = 0x9fffffe0 & a0;
        if (0x10000 <= a1) {
            /* WARNING: Could not recover jumptable at 0x8c1f9c5e. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar1 = (*(code *)(0xa0000000 | 0x8c1f9c68))((short)((((u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4));
            return uVar1;
        }
        uVar2 = (a0 & 0x1f) + a1 + 0x1f >> 5;
        do {
            CacheBlockPurge(uVar3);
            uVar2 = uVar2 - 1;
            uVar3 = uVar3 + 0x20;
        } while (uVar2 != 0);
    }
    return in_r0;
}

/*
 * FUN_8c1f9e32  0x8c1f9e32
 * called by: FUN_8c1f9194, FUN_8c25a770, FUN_8c25a838, FUN_8c25a8c0
 * decompiler: Switch with 1 destination removed at 0x8c1f9e44
 * decompiler: Switch with 1 destination removed at 0x8c1f9e54
 * decompiler: Switch with 1 destination removed at 0x8c1f9e8a
 */
u32 FUN_8c1f9e32(u32 a0, u32 a1) {
    u32 in_r0;
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u8 in_IMASK;
    u8 in_S;

    if (a1 != 0) {
        uVar3 = 0x9fffffe0 & a0;
        if (0x10000 <= a1) {
            /* WARNING: Could not recover jumptable at 0x8c1f9eb2. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar1 =
                (*(code *)(0xa0000000 | 0x8c1f9ebc))((short)((((u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4), 0);
            return uVar1;
        }
        uVar2 = (a0 & 0x1f) + a1 + 0x1f >> 5;
        do {
            CacheBlockWriteBack(uVar3);
            uVar2 = uVar2 - 1;
            uVar3 = uVar3 + 0x20;
        } while (uVar2 != 0);
    }
    return in_r0;
}

/*
 * FUN_8c1fa0c4  0x8c1fa0c4
 * called by: FUN_8c1f7e78, FUN_8c1f9914
 */
u32 FUN_8c1fa0c4(void) {
    u32 uVar1;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    /* WARNING: Could not recover jumptable at 0x8c1fa0e6. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 =
        (*(code *)(0xa0000000 | 0x8c1fa0f0))((short)((((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4));
    return uVar1;
}

/*
 * FUN_8c1fa0f0  0x8c1fa0f0
 */
u32 FUN_8c1fa0f0(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    bool bVar5;

    uVar1 = 0xf4000000;
    if ((*0xff00001c >> 5 & 1) == 1) {
        uVar4 = (u32)0x1000;
        uVar3 = 0;
        do {
            uVar2 = uVar3 + 0x20;
            *(u32 *)(uVar3 | uVar1) = 0;
            uVar3 = uVar2;
        } while (uVar2 < uVar4);
        uVar4 = (u32)0x3000;
        uVar3 = (int)0x2000;
        do {
            bVar5 = uVar4 <= uVar3 + 0x20;
            *(u32 *)(uVar3 | uVar1) = 0;
            uVar3 = uVar3 + 0x20;
        } while (!bVar5);
    } else {
        uVar4 = (u32)0x4000;
        uVar3 = 0;
        do {
            bVar5 = uVar4 <= uVar3 + 0x20;
            *(u32 *)(uVar3 | uVar1) = 0;
            uVar3 = uVar3 + 0x20;
        } while (!bVar5);
    }
    return ((u16)s0 & 0xf) << 4 | ((u32)bVar5 | (u32)in_S << 1 | (u32)in_IMASK << 4 | (u32)in_Q << 8 | (u32)in_M << 9 |
                                   (u32)in_FD << 0xf | (u32)in_BL << 0x1c | (u32)in_RB << 0x1d | (u32)in_MD << 0x1e) &
                                      (int)(int)0xffffff0f;
}

/*
 * ta_fifo_1fa1f4  0x8c1fa1f4
 * called by: FUN_8c1fa6e2
 */
u32 ta_fifo_1fa1f4(void) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 *puVar7;
    u32 uVar8;
    u32 *puVar9;
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;
    bool bVar10;

    uVar1 = (u32)in_T | (u32)in_S << 1;
    uVar2 = uVar1 | (u32)in_IMASK << 4;
    uVar3 = uVar2 | (u32)in_Q << 8;
    uVar4 = uVar3 | (u32)in_M << 9;
    uVar5 = (u32)in_BL << 0x1c | (u32)in_RB << 0x1d;
    uVar8 = (int)0x1000 + 0x8c474bc8;
    uVar6 = 0x8c474bc8;
    do {
        *(u32 *)(uVar6 + 0xc) = 0;
        uVar6 = uVar6 + 0x10;
    } while (uVar6 < uVar8);
    puVar9 = (u32 *)((int)0x300 + (int)0x8c475bc8);
    puVar7 = 0x8c475bc8;
    do {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
        bVar10 = puVar9 <= puVar7;
    } while (!bVar10);
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0 |
           ((u32)bVar10 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
            (uVar4 | (u32)in_FD << 0xf) & 0x8000 | (u32)in_BL << 0x1c & 0x10000000 | uVar5 & 0x20000000 |
            (u32)((((u8)(uVar5 >> 0x18) | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) << 0x1e) &
               (int)(int)0xffffff0f;
}

/*
 * FUN_8c1fa244  0x8c1fa244
 * called by: FUN_8c1f1a7c, FUN_8c1f1d8c, FUN_8c1f1eaa, FUN_8c1f8114, FUN_8c1f9408, FUN_8c201994, FUN_8c258fd8,
 * FUN_8c262810 (+1 more)
 */
u32 FUN_8c1fa244(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    u32 *puVar7;
    int iVar8;
    u32 ar6_00;
    u32 uVar9;
    u32 uVar10;
    int in_VBR;

    iVar2 = 0x8c475bc8;
    iVar1 = 0x8c474bc8;
    iVar3 = (int)(short)a0;
    iVar4 = iVar3 >> 4;
    uVar9 = a2 | 0x80000000;
    iVar5 = *(int *)(iVar4 * 4 + 0x8c475bc8);
    iVar8 = iVar5;
    while ((iVar6 = iVar5, iVar6 != 0 && (*(u32 *)(iVar6 + 0xc) < uVar9))) {
        iVar8 = iVar6;
        iVar5 = *(int *)(iVar6 + 4);
    }
    ar6_00 = (u32)0x100;
    uVar10 = 1;
    do {
        if ((*(u32 *)(uVar10 * 0x10 + 0x8c474bc8 + 0xc) & 0x80000000) == 0)
            break;
        uVar10 = uVar10 + 1;
    } while (uVar10 < ar6_00);
    if (uVar10 < ar6_00) {
        if ((iVar6 == 0) && (iVar8 == 0)) {
            if (iVar3 < 0x900) {
                *(u8 **)((int)0x200 + in_VBR + ((int)0xfffffe00 + iVar3 >> 3)) = (&FUN_8c1fa3f2);
            } else if (iVar3 == 0x900) {
                FUN_8c20759a((&DATA_8c1fa416), 0, ar6_00, 0x80000000);
            } else if (iVar3 == 0x920) {
                FUN_8c2075bc((&DATA_8c1fa460), 0, ar6_00, 0x80000000);
            } else {
                *(u8 **)(0x22c + in_VBR) = (&DATA_8c1fa486);
            }
            puVar7 = (u32 *)(uVar10 * 0x10 + iVar1);
            *(u32 **)(iVar4 * 4 + iVar2) = puVar7;
            puVar7[1] = 0;
            *puVar7 = a1;
            puVar7[2] = a3;
            puVar7[3] = uVar9;
            uVar9 = (u32)(u8)((u8)(short)a0 >> 5);
            if (iVar3 >> 8 == 10) {
                *0xa05f6920 = *0xa05f6920 | 1 << uVar9 + 0xc;
            } else if (iVar3 >> 8 == 0xb) {
                *0xa05f6924 = *0xa05f6924 | 1 << uVar9;
            }
        } else {
            puVar7 = (u32 *)(uVar10 * 0x10 + 0x8c474bc8);
            if (iVar6 == *(int *)(iVar4 * 4 + 0x8c475bc8)) {
                puVar7[1] = iVar6;
                *(u32 **)(iVar4 * 4 + iVar2) = puVar7;
            } else {
                *(u32 **)(iVar8 + 4) = puVar7;
                puVar7[1] = iVar6;
            }
            *puVar7 = a1;
            puVar7[2] = a3;
            puVar7[3] = uVar9;
        }
    } else {
        uVar10 = 0;
    }
    return uVar10;
}

/*
 * FUN_8c1fa3f2  0x8c1fa3f2
 * called by: FUN_8c1fa496
 */
u8 *FUN_8c1fa3f2(u32 a0) {
    u8 *puVar1;
    u32 *puVar2;

    puVar1 = &g_8c475bc8;
    for (puVar2 = *(u32 **)(&g_8c475bc8 + ((int)(short)a0 >> 4) * 4); puVar2 != NULL; puVar2 = (u32 *)puVar2[1]) {
        puVar1 = (u8 *)(*(code *)*puVar2)(puVar2[2]);
    }
    return puVar1;
}

/*
 * FUN_8c1fa3fa  0x8c1fa3fa
 */
int FUN_8c1fa3fa(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 in_r3;
    int unaff_r14;
    int iVar1;
    u32 *puVar2;

    if ((int)in_r3 < 0) {
        iVar1 = unaff_r14 >> (~in_r3 & 0x1f) + 1;
    } else {
        iVar1 = unaff_r14 << (in_r3 & 0x1f);
    }
    for (puVar2 = *(u32 **)(in_r0 + iVar1 * 4); puVar2 != NULL; puVar2 = (u32 *)puVar2[1]) {
        in_r0 = (*(code *)*puVar2)(puVar2[2], a1, a2, a3);
    }
    return in_r0;
}

/*
 * FUN_8c1fa41a  0x8c1fa41a
 */
u32 FUN_8c1fa41a(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;
    u32 in_r3;
    u32 *puVar2;

    uVar1 = in_r0 & in_r3 | 0x60;
    for (puVar2 = (u32 *)*0x8c475e08; puVar2 != NULL; puVar2 = (u32 *)puVar2[1]) {
        uVar1 = (*(code *)*puVar2)(puVar2[2], a1, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c1fa464  0x8c1fa464
 */
u32 FUN_8c1fa464(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;
    u32 in_r3;
    u32 *puVar2;

    uVar1 = in_r0 & in_r3 | 0x60;
    for (puVar2 = (u32 *)*0x8c475e10; puVar2 != NULL; puVar2 = (u32 *)puVar2[1]) {
        uVar1 = (*(code *)*puVar2)(puVar2[2], a1, a2, a3);
    }
    return uVar1;
}

/*
 * FUN_8c1fa496  0x8c1fa496
 */
u32 *FUN_8c1fa496(void) {
    u32 *in_r0;
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    char in_T;

    if ((in_T != '\x01') && (in_r0 == (u32 *)0x36)) {
        uVar6 = (*0xa05f6900 & *0xa05f6920) >> 0xc;
        if (uVar6 == 0) {
            uVar7 = *0xa05f6904;
            uVar6 = *0xa05f6924;
            iVar4 = (int)0xb00;
            uVar3 = 0;
            while (true) {
                if ((int)uVar3 < 0) {
                    in_r0 = (u32 *)(1 >> (~uVar3 & 0x1f) + 1);
                } else {
                    in_r0 = (u32 *)(1 << (uVar3 & 0x1f));
                }
                if (in_r0 == (u32 *)0x10)
                    break;
                if ((int)uVar3 < 0) {
                    uVar2 = 1 >> (~uVar3 & 0x1f) + 1;
                } else {
                    uVar2 = 1 << (uVar3 & 0x1f);
                }
                if ((uVar2 & uVar7 & uVar6) != 0) {
                    FUN_8c1fa3f2(uVar3 * 0x20 + iVar4);
                }
                uVar3 = uVar3 + 1;
            }
        } else {
            iVar5 = (int)0x80;
            iVar4 = (int)0xa00;
            uVar7 = 0;
            in_r0 = 0xa05f6900;
            while (true) {
                if ((int)uVar7 < 0) {
                    iVar1 = 1 >> (~uVar7 & 0x1f) + 1;
                } else {
                    iVar1 = 1 << (uVar7 & 0x1f);
                }
                if (iVar1 == iVar5)
                    break;
                if ((int)uVar7 < 0) {
                    uVar3 = 1 >> (~uVar7 & 0x1f) + 1;
                } else {
                    uVar3 = 1 << (uVar7 & 0x1f);
                }
                if ((uVar3 & uVar6) != 0) {
                    in_r0 = (u32 *)FUN_8c1fa3f2(uVar7 * 0x20 + iVar4);
                }
                uVar7 = uVar7 + 1;
            }
        }
    }
    return in_r0;
}

/*
 * FUN_8c1fa54c  0x8c1fa54c
 * called by: FUN_8c1efcae, FUN_8c1f1f98, FUN_8c1f1fa0, FUN_8c1f813e, FUN_8c2019e0, FUN_8c2580c6, FUN_8c258fd8,
 * FUN_8c2628fa
 */
u32 FUN_8c1fa54c(int a0) {
    u32 *puVar1;
    u32 *puVar2;
    short sVar3;
    u32 uVar4;
    int *ar6_00;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    int iVar8;
    u32 uVar9;
    int in_VBR;
    u8 in_MD;
    u8 bVar10;
    u8 in_RB;
    u8 bVar11;
    u8 in_BL;
    u8 bVar12;
    u8 in_FD;
    u8 bVar13;
    u8 in_M;
    u8 extraout_M;
    u8 extraout_M_00;
    u8 bVar14;
    u8 in_Q;
    u8 extraout_Q;
    u8 extraout_Q_00;
    u8 bVar15;
    u8 in_IMASK;
    u8 bVar16;
    u8 in_S;
    u8 extraout_S;
    u8 extraout_S_00;
    u8 bVar17;
    u8 in_T;
    bool bVar18;

    puVar2 = 0xa05f6920;
    puVar1 = 0xa05f6924;
    uVar4 = (u32)in_T | (u32)in_S << 1;
    uVar6 = uVar4 | (u32)in_IMASK << 4;
    uVar9 = uVar6 | (u32)in_Q << 8;
    uVar7 = uVar9 | (u32)in_M << 9;
    bVar12 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar10 = bVar12 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar17 = (u8)((uVar4 & 2) >> 1);
    bVar16 = (u8)((uVar6 & 0xf0) >> 4);
    bVar15 = (u8)(uVar9 >> 8) & 1;
    bVar14 = (u8)((uVar7 & 0x200) >> 9);
    bVar13 = (u8)(((uVar7 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar12 = (bVar12 & 0x10) >> 4;
    bVar11 = (bVar10 & 0x20) >> 5;
    bVar10 = ((bVar10 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    iVar5 = a0 * 0x10;
    uVar4 = 1;
    do {
        iVar8 = uVar4 * 0x10 + 0x8c474bc8;
        if ((*(int *)(iVar8 + 4) == iVar5 + 0x8c474bc8) && ((*(u32 *)(iVar8 + 0xc) & 0x80000000) != 0))
            break;
        uVar4 = uVar4 + 1;
    } while (uVar4 < (u32)(int)0x100);
    if (uVar4 == (int)0x100) {
        iVar5 = iVar5 + 0x8c474bc8;
        uVar4 = (u32)0x90;
        uVar9 = 1;
        uVar6 = (u32)0xc0;
        iVar8 = (int)0x200;
        do {
            if (*(int *)(uVar9 * 4 + 0x8c475bc8) == iVar5) {
                ar6_00 = (int *)(uVar9 * 4 + 0x8c475bc8);
                *ar6_00 = *(int *)(iVar5 + 4);
                *(u32 *)(iVar5 + 0xc) = 0;
                if (*ar6_00 == 0) {
                    if (uVar9 == uVar4) {
                        FUN_8c20759a(0, 0, ar6_00, uVar4);
                        bVar14 = extraout_M;
                        bVar15 = extraout_Q;
                        bVar17 = extraout_S;
                    } else if (uVar9 == (int)0x92) {
                        FUN_8c2075bc(0, 0, ar6_00, uVar4);
                        bVar14 = extraout_M_00;
                        bVar15 = extraout_Q_00;
                        bVar17 = extraout_S_00;
                    } else {
                        uVar7 = uVar9 * 0x10;
                        sVar3 = (short)uVar7 >> 8;
                        uVar4 = (uVar7 & 0xff) >> 5;
                        if (sVar3 == 10) {
                            *puVar2 = *puVar2 & ~(1 << uVar4 + 0xc);
                        } else if (sVar3 == 0xb) {
                            *puVar1 = *puVar1 & ~(1 << uVar4);
                        }
                        *(u8 **)(in_VBR + (uVar7 + (int)(int)0xfffffe00 >> 3) + iVar8) = (&DATA_8c1faa94);
                    }
                }
                break;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
        bVar18 = uVar9 == uVar6;
    } else {
        iVar5 = iVar5 + 0x8c474bc8;
        *(u32 *)(uVar4 * 0x10 + 0x8c474bc8 + 4) = *(u32 *)(iVar5 + 4);
        *(u32 *)(iVar5 + 0xc) = 0;
        bVar18 = false;
    }
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0 |
           ((u32)bVar18 | (u32)bVar17 << 1 | (u32)bVar16 << 4 | (u32)bVar15 << 8 | (u32)bVar14 << 9 |
            (u32)bVar13 << 0xf | (u32)bVar12 << 0x1c | (u32)bVar11 << 0x1d | (u32)bVar10 << 0x1e) &
               (int)(int)0xffffff0f;
}

/*
 * FUN_8c1fa6b8  0x8c1fa6b8
 * called by: FUN_8c102bd0
 */
u32 FUN_8c1fa6b8(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    u32 in_PR;

    FUN_8c1fa758(unused_a0, unused_a1, a2, a3, in_PR);
    ar5_00 = 0;
    uVar1 = 0;
    FUN_8c1fae2c(0, 0);
    FUN_8c1fb924(uVar1, ar5_00, a2, a3);
    uVar1 = 0x105;
    (*(code *)0xac1f9914)(0x105, ar5_00, a2, a3);
    uVar1 = sh4_tmu_1f88c0();
    return uVar1;
}

/*
 * FUN_8c1fa6e2  0x8c1fa6e2
 * called by: FUN_8c102bd0
 */
u32 FUN_8c1fa6e2(void) {
    u32 uVar1;

    ta_fifo_1fa1f4();
    uVar1 = FUN_8c1f9408(0);
    return uVar1;
}

/*
 * FUN_8c1fa6f2  0x8c1fa6f2
 * called by: FUN_8c102d40
 */
u32 FUN_8c1fa6f2(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 in_MD;
    u8 bVar1;
    u8 in_RB;
    u8 bVar2;
    u8 in_BL;
    u8 bVar3;
    u8 in_FD;
    u8 bVar4;
    u8 in_M;
    u8 extraout_M;
    u8 in_Q;
    u8 extraout_Q;
    u8 in_IMASK;
    u8 bVar5;
    u8 in_S;
    u8 extraout_S;
    u8 in_T;
    u8 extraout_T;

    bVar3 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar1 = bVar3 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar5 = (u8)((((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4);
    bVar4 = (u8)((((u32)in_Q << 8 | (u32)in_M << 9 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar3 = (bVar3 & 0x10) >> 4;
    bVar2 = (bVar1 & 0x20) >> 5;
    bVar1 = ((bVar1 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    FUN_8c1fb9d2(a0, a1, a2, a3);
    FUN_8c1fa72e(a0, a1, a2, a3);
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0 |
           ((u32)extraout_T | (u32)extraout_S << 1 | (u32)bVar5 << 4 | (u32)extraout_Q << 8 | (u32)extraout_M << 9 |
            (u32)bVar4 << 0xf | (u32)bVar3 << 0x1c | (u32)bVar2 << 0x1d | (u32)bVar1 << 0x1e) &
               (int)(int)0xffffff0f;
}

/*
 * FUN_8c1fa72e  0x8c1fa72e
 * called by: FUN_8c1fa6f2
 */
u32 FUN_8c1fa72e(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1fa73a. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((u32)(&FUN_8c1fa73e) | 0xa0000000))();
    return uVar1;
}

/*
 * FUN_8c1fa73e  0x8c1fa73e
 */
u32 FUN_8c1fa73e(void) {
    int *piVar1;
    int iVar2;
    u32 in_r0;
    u32 *puVar3;

    piVar1 = 0xff00001c;
    *0xff00001c = 0;
    iVar2 = 0xf4004000;
    puVar3 = 0xf4000000;
    do {
        *puVar3 = 0;
        puVar3 = puVar3 + 8;
    } while ((int)puVar3 < iVar2);
    *piVar1 = (int)0x800;
    *piVar1 = 0;
    return in_r0;
}

/*
 * FUN_8c1fa758  0x8c1fa758
 * called by: FUN_8c1fa6b8
 */
u32 FUN_8c1fa758(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    int *piVar1;

    _DAT_ffd00000 = 0;
    _DAT_ffd00004 = 0;
    _DAT_ffd00008 = 0;
    _DAT_ffd0000c = 0;
    for (piVar1 = &g_8c26cb34; *piVar1 != 0; piVar1 = piVar1 + 2) {
        *(int *)*piVar1 = piVar1[1];
    }
    return ain0;
}

/*
 * FUN_8c1fa7d0  0x8c1fa7d0
 * name hint from a string it uses: r n ADDRESS CHECKER TRAP r n
 * strings: "FR0-7:    "; "FR8-15:   "; "FR0-7(B): "; "FR8-15(B):" ...
 */
u32 FUN_8c1fa7d0(u32 a0, u32 *a1) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    char *a4;
    u32 uVar5;
    u32 uVar6;
    u32 in_stack_ffffffd4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_ffffffd4 >> 0x10), (short)a0);
    uVar1 = a0 & 0xffff;
    if ((((uVar1 != 0x300) && (uVar1 != 0x340)) && (uVar1 != 0x380)) && (uVar1 != 0x3c0)) {
        return uVar1;
    }
    g_8c475ec8 = a1;
    iVar2 = FUN_8c1fab8c();
    scif_puts(s_____ADDRESS_CHECKER_TRAP_____8c26cf24);
    FUN_8c1faa08("FR0-7:    ", 10, 8);
    FUN_8c1faa08("FR8-15:   ", 0x12, 8);
    FUN_8c1faa08("FR0-7(B): ", 0x1a, 8);
    uVar6 = 8;
    uVar5 = 0x22;
    FUN_8c1faa08("FR8-15(B):", 0x22, 8);
    scif_puts("FPUL: ");
    scif_put_hex32(g_8c475ec8[0x2a]);
    scif_puts(" FPSCR: ");
    scif_put_hex32(g_8c475ec8[0x2b]);
    FUN_8c1faa08(s_R0_7__8c26cf8c, 0x2d, 8);
    uVar5 = g_8c475ec8[0x3c];
    g_8c475ec8[0x3c] = g_8c475ec8[1];
    FUN_8c1faa08("R8-15:    ", 0x35, 8);
    uVar6 = 8;
    g_8c475ec8[0x3c] = uVar5;
    uVar5 = 2;
    FUN_8c1faa08(s_R0_7_B___8c26cfa8, 2, 8);
    scif_puts("MACL: ");
    scif_put_hex32(g_8c475ec8[0x3c]);
    scif_puts(" MACH: ");
    scif_put_hex32(g_8c475ec8[0x3d]);
    scif_puts(s_VBR__8c26cfc8);
    scif_put_hex32(g_8c475ec8[0x3e]);
    scif_puts(" GBR: ");
    scif_put_hex32(g_8c475ec8[0x3f]);
    scif_puts(" DBR: ");
    scif_put_hex32(*g_8c475ec8);
    scif_puts(s_PR__8c26cfe0);
    scif_put_hex32(g_8c475ec8[0x40]);
    scif_puts(" PC: ");
    scif_put_hex32(g_8c475ec8[0x41]);
    scif_puts(" SR: ");
    scif_put_hex32(g_8c475ec8[0x42]);
    uVar1 = 0;
    do {
        if ((int)uVar1 < 0) {
            uVar3 = ~(~uVar1 + 1 & 3) + 1;
        } else {
            uVar3 = uVar1 & 3;
        }
        if (uVar3 == 0) {
            scif_puts(&g_8c26cff8);
        }
        scif_put_hex32((&g_8c26ce10)[uVar1]);
        scif_puts(&g_8c26cffc);
        scif_put_hex32(*(u32 *)(&g_8c26ce10)[uVar1]);
        scif_puts(&g_8c26d000);
        uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x45);
    scif_puts(&g_8c26cff8);
    if (iVar2 == 0) {
        a4 = s_Please__cancel_the_interrupt_fro_8c26d004;
    } else {
        a4 = "Please, cancel the interrupt from ADRESS CHECKER.";
    }
    scif_puts(a4);
    do {
        uVar4 = FUN_8c1fad0a(a4, uVar5);
    } while ((char)uVar4 != '\r');
    _DAT_ff000024 = ain0 & 0xffff;
    uVar5 = FUN_8c1fad44();
    return uVar5;
}

/*
 * FUN_8c1faa08  0x8c1faa08
 * called by: FUN_8c1fa7d0
 */
u32 FUN_8c1faa08(u32 a0, int a1, int a2) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    iVar3 = a1;
    scif_puts(a0);
    iVar2 = iVar3 + a2;
    iVar4 = iVar3 << 2;
    for (; iVar3 < iVar2; iVar3 = iVar3 + 1) {
        scif_put_hex32(*(u32 *)(g_8c475ec8 + iVar4));
        scif_puts(&g_8c26d000);
        iVar4 = iVar4 + 4;
    }
    uVar1 = scif_puts(&g_8c26cff8);
    return uVar1;
}

/*
 * FUN_8c1fab8c  0x8c1fab8c
 * called by: FUN_8c1fa7d0
 */
int FUN_8c1fab8c(void) {
    int *piVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;
    u16 *puVar5;
    u8 *puVar6;
    int iStack_c;
    int iStack_8;
    int iStack_4;

    *0xffc00004 = *0xffc00004 & 0xfe;
    piVar2 = 0x8c475ed0;
    piVar1 = 0x8c475ed8;
    for (iStack_c = 0; iStack_c < 0x50000; iStack_c = iStack_c + 1) {
    }
    if ((*(u8 *)(g_8c475ed0 + 0x1c) & 4) == 0) {
        g_8c475ed8 = 1;
    } else {
        g_8c475ed8 = 0;
    }
    puVar6 = 0xffe00008;
    puVar5 = 0xffe80008;
    piVar4 = 0x8c475ed4;
    iVar3 = 0x80000;
    if (*piVar1 == 0) {
        g_8c475ed4 = 0xffe80000;
        *puVar5 = 0;
        *(u16 *)(*piVar4 + 0x18) = 6;
        *(u16 *)(*piVar4 + 8) = 0;
        *(u16 *)*piVar4 = 0;
        *(u8 *)(*piVar4 + 4) = 0x28;
        for (iStack_4 = 0; iStack_4 < iVar3; iStack_4 = iStack_4 + 1) {
        }
        *(u16 *)(*piVar4 + 0x18) = 0x308;
        *(u16 *)(*piVar4 + 8) = 0x30;
    } else {
        *piVar2 = 0xffe00000;
        *puVar6 = 0;
        *(u8 *)(*piVar2 + 8) = 0;
        *(u8 *)*piVar2 = 0;
        *(u8 *)(*piVar2 + 4) = 0x28;
        for (iStack_8 = 0; iStack_8 < iVar3; iStack_8 = iStack_8 + 1) {
        }
        *(u8 *)(*piVar2 + 8) = 0x30;
    }
    return *piVar1;
}

/*
 * scif_putc  0x8c1fac58
 * writes one byte to the SH-4 serial port (SCIF, or SCI when 0x8c475ed8 is 1), waiting for room
 * called by: scif_put_hex32, scif_puts
 */
u32 scif_putc(u32 a0) {
    int *piVar1;
    int *piVar2;
    u32 uVar3;
    u8 *pbVar4;

    piVar2 = 0x8c475ed0;
    piVar1 = 0x8c475ed4;
    uVar3 = g_8c475ed8;
    if (uVar3 == 0) {
        do {
        } while ((*(u16 *)(g_8c475ed4 + 0x10) & 0x20) != 0x20);
        *(u8 *)(g_8c475ed4 + 0xc) = (u8)a0;
        *(u16 *)(*piVar1 + 0x10) = *(u16 *)(*piVar1 + 0x10) & (u16)0xffdf;
        *(u16 *)(*piVar1 + 0x10) = *(u16 *)(*piVar1 + 0x10) & (u16)0xffbf;
        do {
        } while ((*(u16 *)(*piVar1 + 0x10) & 0x40) != 0x40);
        uVar3 = 0x40;
    } else if (uVar3 == 1) {
        do {
        } while ((*(u8 *)(g_8c475ed0 + 0x10) & 0x80) != 0x80);
        *(u8 *)(g_8c475ed0 + 0xc) = (u8)a0;
        pbVar4 = (u8 *)(*piVar2 + 0x10);
        *pbVar4 = *pbVar4 & 0x7f;
        do {
            uVar3 = *(u8 *)(*piVar2 + 0x10) & 4;
        } while (uVar3 != 4);
    }
    return uVar3;
}

/*
 * FUN_8c1fad0a  0x8c1fad0a
 * called by: FUN_8c1fa7d0
 */
int FUN_8c1fad0a(u32 unused_a0, int a1) {
    if (g_8c475ed8 == 0) {
        do {
        } while ((char)*(u16 *)(g_8c475ed4 + 0x1c) == '\0');
        a1 = (int)*(char *)(g_8c475ed4 + 0x14);
    } else if ((g_8c475ed8 == 1) && ((*(u8 *)(g_8c475ed0 + 0x1c) & 4) == 4)) {
        a1 = 0xd;
    }
    return a1;
}

/*
 * FUN_8c1fad44  0x8c1fad44
 * called by: FUN_8c1fa7d0
 */
u32 FUN_8c1fad44(void) {
    char cVar1;
    int *piVar2;

    piVar2 = 0x8c475ed4;
    if (g_8c475ed8 == 0) {
        *(u16 *)(g_8c475ed4 + 8) = 0;
        *(u16 *)(*piVar2 + 0x18) = 6;
        *(u16 *)*piVar2 = 0;
        *(char *)(*piVar2 + 4) = (char)0xff;
        *(u16 *)(*piVar2 + 8) = 0;
        *(u16 *)(*piVar2 + 0x10) = 0;
        *(u16 *)(*piVar2 + 0x18) = 0;
        *(u16 *)(*piVar2 + 0x20) = 0;
        *(u16 *)(*piVar2 + 0x24) = 0;
    }
    cVar1 = *0xffc00004;
    *0xffc00004 = (char)((int)cVar1 | 1U);
    return (int)cVar1 | 1U;
}

/*
 * scif_puts  0x8c1fad9a
 * scif_putc for each byte of a string
 * called by: FUN_8c1fa7d0, FUN_8c1faa08
 */
u32 scif_puts(char *a0) {
    u32 in_r0;

    for (; *a0 != '\0'; a0 = a0 + 1) {
        in_r0 = scif_putc((int)*a0);
    }
    return in_r0;
}

/*
 * scif_put_hex32  0x8c1fadd0
 * prints a0 as eight hex digits on the serial port
 * called by: FUN_8c1fa7d0, FUN_8c1faa08
 */
u32 scif_put_hex32(u32 a0) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int a4;

    iVar3 = 0x1c;
    do {
        uVar2 = -iVar3;
        if ((int)uVar2 < 0) {
            uVar2 = a0 >> (~uVar2 & 0x1f) + 1;
        } else {
            uVar2 = a0 << (uVar2 & 0x1f);
        }
        uVar2 = uVar2 & 0xf;
        if (uVar2 < 10) {
            a4 = uVar2 + 0x30;
        } else {
            a4 = uVar2 + 0x37;
        }
        uVar1 = scif_putc(a4);
        iVar3 = iVar3 + -4;
    } while (-1 < iVar3);
    return uVar1;
}

/*
 * FUN_8c1fae2c  0x8c1fae2c
 * called by: FUN_8c1fa6b8
 */
u32 FUN_8c1fae2c(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u8 *puVar6;
    u8 *puVar7;
    u8 *puVar8;
    u8 *puVar9;
    u8 *puVar10;
    int iVar11;
    u32 *puVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    u32 *puVar16;
    u32 *in_VBR;
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    puVar6 = (&DATA_8c1fb094);
    uVar1 = (u32)in_T | (u32)in_S << 1;
    uVar2 = uVar1 | (u32)in_IMASK << 4;
    uVar3 = uVar2 | (u32)in_Q << 8;
    uVar4 = uVar3 | (u32)in_M << 9;
    uVar5 = (u32)in_BL << 0x1c | (u32)in_RB << 0x1d;
    *0xff00001c = *0xff00001c | (int)0x800;
    puVar10 = (&FUN_8c1fb0c8);
    puVar9 = (&DATA_8c1fb3d0);
    puVar8 = (&DATA_8c1fb3d8);
    puVar7 = (&DATA_8c1fb230);
    puVar12 = in_VBR;
    if (a0 == 0x80000000) {
        *(u8 **)(&DATA_8c1fb038) = (&DATA_8c1fb230);
        *(u8 **)puVar6 = puVar7;
        *(u32 *)puVar8 = 0;
        *(u32 *)puVar9 = a1;
        puVar16 = (u32 *)(&DATA_8c1fb098);
    } else {
        *(u8 **)(&DATA_8c1fb038) = (&FUN_8c1fb0c8);
        *(u8 **)puVar6 = puVar10;
        *(u32 *)puVar8 = 0;
        *(u32 *)puVar9 = 0;
        puVar16 = (u32 *)(&DATA_8c1fb098);
    }
    for (; puVar16 <= (&FUN_8c1fb0c8); puVar16 = puVar16 + 1) {
        *puVar12 = *puVar16;
        puVar12 = puVar12 + 1;
    }
    iVar13 = ((u32)((int)puVar12 - (int)in_VBR) >> 5) + 1;
    puVar12 = in_VBR;
    do {
        CacheBlockPurge(puVar12);
        iVar13 = iVar13 + -1;
        puVar12 = puVar12 + 8;
    } while (iVar13 != 0);
    puVar16 = (u32 *)((int)in_VBR + (int)0x100);
    for (puVar12 = (u32 *)(&DATA_8c1fb004); puVar12 <= (&DATA_8c1fb03c); puVar12 = puVar12 + 1) {
        *puVar16 = *puVar12;
        puVar16 = puVar16 + 1;
    }
    iVar13 = (int)in_VBR + (int)0x400;
    iVar14 = ((u32)((int)puVar16 + ((int)(int)0xffffff00 - (int)in_VBR)) >> 5) + 1;
    do {
        CacheBlockPurge(iVar13);
        iVar14 = iVar14 + -1;
        iVar13 = iVar13 + 0x20;
    } while (iVar14 != 0);
    puVar16 = (u32 *)((int)in_VBR + (int)0x400);
    for (puVar12 = (u32 *)(&DATA_8c1fb004); puVar12 <= (&DATA_8c1fb03c); puVar12 = puVar12 + 1) {
        *puVar16 = *puVar12;
        puVar16 = puVar16 + 1;
    }
    iVar13 = (int)in_VBR + (int)0x1000;
    iVar14 = ((u32)((int)puVar16 + ((int)(int)0xfffffc00 - (int)in_VBR)) >> 5) + 1;
    do {
        CacheBlockPurge(iVar13);
        iVar14 = iVar14 + -1;
        iVar13 = iVar13 + 0x20;
    } while (iVar14 != 0);
    puVar16 = (u32 *)((int)in_VBR + (int)0x600);
    for (puVar12 = (u32 *)(&DATA_8c1fb03c); puVar6 = (&DATA_8c1faa94), puVar12 <= (&DATA_8c1fb098);
         puVar12 = puVar12 + 1) {
        *puVar16 = *puVar12;
        puVar16 = puVar16 + 1;
    }
    iVar13 = (int)in_VBR + (int)0x1800;
    iVar14 = ((u32)((int)puVar16 + ((int)(int)0xfffffa00 - (int)in_VBR)) >> 5) + 1;
    do {
        CacheBlockPurge(iVar13);
        iVar14 = iVar14 + -1;
        iVar13 = iVar13 + 0x20;
    } while (iVar14 != 0);
    iVar14 = (int)0x200;
    iVar13 = (int)(int)0xfffffe40;
    iVar15 = (int)0x620;
    do {
        iVar11 = iVar13 >> 3;
        iVar13 = iVar13 + 0x20;
        *(u8 **)((int)in_VBR + iVar14 + iVar11) = puVar6;
    } while (iVar15 > iVar13);
    return ((u32)(iVar15 <= iVar13) | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
            (uVar4 | (u32)in_FD << 0xf) & 0x8000 | (u32)in_BL << 0x1c & 0x10000000 | uVar5 & 0x20000000 |
            (u32)((((u8)(uVar5 >> 0x18) | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) << 0x1e) &
           0xefffffff;
}

/*
 * FUN_8c1fb048  0x8c1fb048
 */
u32 FUN_8c1fb048(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;
    u32 extraout_r1;

    (*0xac004000)(0x200, 0x2, a2, a3);
    0x0 = in_r0;
    *(u32 *)(&DATA_8c1fb3d4) = _DAT_ff000028;
    uVar1 = FUN_8c1fb0c8(a0, a1, extraout_r1);
    return uVar1;
}

/*
 * FUN_8c1fb09c  0x8c1fb09c
 */
u32 FUN_8c1fb09c(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 in_r0;

    (*0xac004000)(0x200, 0x3, a2, a3);
    return in_r0;
}

/*
 * FUN_8c1fb0c8  0x8c1fb0c8
 * called by: FUN_8c1fb048
 */
u32 FUN_8c1fb0c8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;
    u64 in_dr4;
    u64 in_dr6;
    u64 in_dr8;
    u64 in_dr10;
    code *UNRECOVERED_JUMPTABLE;

    if (*(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200) != NULL) {
        (**(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200))();
    }
    if (*(int *)(&DATA_8c1fb3d4) < 0x2 << 8) {
        return in_r0;
    }
    /* WARNING: Could not recover jumptable at 0x8c1fb214. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4, in_dr6, in_dr8, in_dr10, a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c1fb0ce  0x8c1fb0ce
 */
u32 FUN_8c1fb0ce(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;
    u64 in_dr4;
    u64 in_dr6;
    u64 in_dr8;
    u64 in_dr10;
    code *UNRECOVERED_JUMPTABLE;

    if (*(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200) != NULL) {
        (**(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200))(
            *(int *)(&DATA_8c1fb3d4), a1, a2, a3);
    }
    if (*(int *)(&DATA_8c1fb3d4) < 0x2 << 8) {
        return in_r0;
    }
    /* WARNING: Could not recover jumptable at 0x8c1fb214. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4, in_dr6, in_dr8, in_dr10, a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c1fb25a  0x8c1fb25a
 */
u32 FUN_8c1fb25a(u32 a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8) {
    u32 in_r0;
    u32 uVar1;
    u32 in_r1;
    u32 *puVar2;
    u64 in_dr4;
    u64 in_dr6;
    u64 in_dr8;
    u64 in_dr10;
    code *UNRECOVERED_JUMPTABLE;

    if (*(code **)(UNRECOVERED_JUMPTABLE + (g_8c1fb3d4 + -0x200 >> 3) + 0x200) != NULL) {
        (**(code **)(UNRECOVERED_JUMPTABLE + (g_8c1fb3d4 + -0x200 >> 3) + 0x200))(g_8c1fb3d4, a1, a2, a3);
    }
    g_8c1fb3d8 = g_8c1fb3d8 + -1;
    puVar2 = &s8;
    if (g_8c1fb3d8 == 0) {
        puVar2 = NULL;
    }
    *(u32 *)((int)puVar2 + -4) = in_r0;
    *(u32 *)((int)puVar2 + -8) = in_r1;
    if (*(int *)(&DATA_8c1fb3d4) < 0x2 << 8) {
        return *(u32 *)((int)puVar2 + -4);
    }
    /* WARNING: Could not recover jumptable at 0x8c1fb3ae. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4, in_dr6, in_dr8, in_dr10, a0, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c1fb3e0  0x8c1fb3e0
 * called by: FUN_8c102bd0
 */
u32 FUN_8c1fb3e0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 *puVar2;
    int iVar3;
    int *piVar4;
    u32 uVar5;
    u32 uVar6;

    puVar2 = 0x8c475f0c;
    puVar1 = 0x8c475f10;
    uVar6 = 0xffffffe0;
    uVar5 = a0 + 0x1fU & 0xffffffe0;
    g_8c475f08 = uVar5;
    *puVar1 = uVar5;
    piVar4 = 0x8c475f04;
    iVar3 = 0x8c475ee4;
    *puVar2 = a1 & 0xffffffe0;
    *piVar4 = iVar3;
    *(int *)iVar3 = iVar3;
    *(u32 *)(iVar3 + 4) = 0;
    FUN_8c1fb426(0, 0xffffffe0);
    uVar5 = g_8c475f08;
    *(u32 *)(uVar5 + 4) = a1 >> 5;
    uVar6 = FUN_8c1fb586(uVar5 + 0x20, uVar6, a2, a3);
    return uVar6;
}

/*
 * FUN_8c1fb3f4  0x8c1fb3f4
 */
u32 FUN_8c1fb3f4(u32 a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    u32 *in_r1;
    u32 *in_r2;
    u32 *in_r3;
    int iVar3;
    u32 unaff_r14;

    *in_r3 = a0;
    *in_r2 = a0;
    piVar1 = 0x8c475f04;
    iVar3 = 0x8c475ee4;
    *in_r1 = unaff_r14;
    *piVar1 = iVar3;
    *(int *)iVar3 = iVar3;
    *(u32 *)(iVar3 + 4) = 0;
    FUN_8c1fb426(0, a1);
    iVar3 = g_8c475f08;
    *(u32 *)(iVar3 + 4) = unaff_r14 >> 5;
    uVar2 = FUN_8c1fb586(iVar3 + 0x20, a1, a2, a3);
    return uVar2;
}

/*
 * FUN_8c1fb426  0x8c1fb426
 * called by: FUN_8c1fb3e0, FUN_8c1fb3f4
 */
u32 FUN_8c1fb426(u8 **a0, u32 a1) {
    u32 uVar1;

    uVar1 = g_8c475ee0;
    g_8c475ee0 = a0;
    if (a0 == NULL) {
        g_8c475ee0 = &PTR_FUN_8c26d0c8;
    }
    return uVar1;
}

/*
 * noop_1fb43a  0x8c1fb43a
 * called by: FUN_8c102d40
 */
u32 noop_1fb43a(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * malloc_thunk  0x8c1fb4ae
 * called by: FUN_8c015f18, FUN_8c01af14, FUN_8c01b2a4, FUN_8c01b4f0, FUN_8c01b70c, FUN_8c01b87c, FUN_8c01ddfc,
 * FUN_8c01e0a4 (+11 more)
 */
u32 malloc_thunk(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1fb4b4. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)*0x8c475ee0)();
    return uVar1;
}

/*
 * malloc_sys  0x8c1fb4b8
 * the allocator operator_new calls
 * called by: C3DRenderPly_SetMem, FUN_8c1fb77a
 */
u32 malloc_sys(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1fb4be. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)*0x8c475ee0)();
    return uVar1;
}

/*
 * FUN_8c1fb4c2  0x8c1fb4c2
 */
u32 *FUN_8c1fb4c2(int a0) {
    u32 *puVar1;
    int iVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 *puVar5;

    uVar4 = (a0 + 0x1fU >> 5) + 1;
    puVar1 = (u32 *)*g_8c475f04;
    puVar5 = g_8c475f04;
    while (true) {
        puVar3 = puVar1;
        if (uVar4 <= (u32)puVar3[1]) {
            if (puVar3[1] == uVar4) {
                *puVar5 = *puVar3;
            } else {
                iVar2 = puVar3[1] - uVar4;
                puVar3[1] = iVar2;
                puVar3 = puVar3 + iVar2 * 8;
                puVar3[1] = uVar4;
            }
            g_8c475f04 = puVar5;
            return puVar3 + 8;
        }
        if (puVar3 == g_8c475f04)
            break;
        puVar1 = (u32 *)*puVar3;
        puVar5 = puVar3;
    }
    return (u32 *)0;
}

/*
 * FUN_8c1fb57c  0x8c1fb57c
 * called by: FUN_8c015f18, FUN_8c01af14, FUN_8c01d7cc, FUN_8c01ddfc, FUN_8c01e0a4, FUN_8c01e14c, FUN_8c01e168,
 * FUN_8c01fd08 (+9 more)
 */
u32 FUN_8c1fb57c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1fb582. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(g_8c475ee0 + 4))();
    return uVar1;
}

/*
 * FUN_8c1fb586  0x8c1fb586
 * called by: C3DRenderPly_SetMem, FUN_8c1fb3e0, FUN_8c1fb3f4, FUN_8c1fb664, free_if_nonnull
 */
u32 FUN_8c1fb586(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c1fb58c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(g_8c475ee0 + 4))();
    return uVar1;
}

/*
 * FUN_8c1fb590  0x8c1fb590
 */
u32 FUN_8c1fb590(int a0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    int *piVar6;
    int *piVar7;
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;
    bool bVar8;

    uVar1 = (u32)in_T | (u32)in_S << 1;
    uVar2 = uVar1 | (u32)in_IMASK << 4;
    uVar3 = uVar2 | (u32)in_Q << 8;
    uVar4 = uVar3 | (u32)in_M << 9;
    uVar5 = (u32)in_BL << 0x1c | (u32)in_RB << 0x1d;
    bVar8 = a0 == 0;
    if (!bVar8) {
        piVar7 = (int *)(a0 + -0x20);
        for (piVar6 = (int *)*0x8c475f04;
             ((piVar7 <= piVar6 || ((int *)*piVar6 <= piVar7)) &&
              ((piVar6 < (int *)*piVar6 || ((piVar7 <= piVar6 && ((int *)*piVar6 <= piVar7))))));
             piVar6 = (int *)*piVar6) {
        }
        if (piVar7 + *(int *)(a0 + -0x1c) * 8 == (int *)*piVar6) {
            *(int *)(a0 + -0x1c) = *(int *)(a0 + -0x1c) + *(int *)(*piVar6 + 4);
            *piVar7 = *(int *)*piVar6;
        } else {
            *piVar7 = *piVar6;
        }
        bVar8 = piVar6 + piVar6[1] * 8 == piVar7;
        if (bVar8) {
            piVar6[1] = piVar6[1] + *(int *)(a0 + -0x1c);
            *piVar6 = *piVar7;
        } else {
            *piVar6 = (int)piVar7;
        }
        g_8c475f04 = piVar6;
    }
    return ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0 |
           ((u32)bVar8 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
            (uVar4 | (u32)in_FD << 0xf) & 0x8000 | (u32)in_BL << 0x1c & 0x10000000 | uVar5 & 0x20000000 |
            (u32)((((u8)(uVar5 >> 0x18) | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) << 0x1e) &
               (int)(int)0xffffff0f;
}

/*
 * FUN_8c1fb664  0x8c1fb664
 */
u32 *FUN_8c1fb664(int a0, int a1, u32 a2, u32 a3) {
    u32 *puVar1;
    int iVar2;
    u32 *puVar3;
    u32 *puVar4;
    u32 *puVar5;
    u32 *puVar6;
    u32 uVar7;
    u32 uVar8;
    u32 *unaff_r14;
    u32 *puVar9;

    uVar8 = (a1 + 0x1fU >> 5) + 1;
    uVar7 = uVar8;
    if (*(u32 *)(a0 + -0x1c) < uVar8) {
        uVar7 = *(u32 *)(a0 + -0x1c);
    }
    FUN_8c1fb586(unaff_r14, a1, a2, a3);
    puVar9 = (u32 *)*g_8c475f04;
    puVar4 = g_8c475f04;
    while (true) {
        puVar3 = puVar9;
        if (uVar8 <= (u32)puVar3[1]) {
            if (puVar3[1] == uVar8) {
                *puVar4 = *puVar3;
            } else {
                iVar2 = puVar3[1] - uVar8;
                puVar3[1] = iVar2;
                puVar3 = puVar3 + iVar2 * 8;
            }
            puVar9 = puVar3 + 8;
            if (unaff_r14 != puVar9) {
                if (unaff_r14 < puVar9) {
                    puVar1 = puVar3 + uVar7 * 8 + 8;
                    while (puVar9 < puVar1) {
                        puVar5 = puVar1 + -8;
                        switch_jump(0x20, puVar1, unaff_r14);
                        puVar1 = puVar5;
                        unaff_r14 = unaff_r14 + -8;
                    }
                } else if (puVar9 < unaff_r14) {
                    puVar5 = puVar3 + uVar7 * 8 + 8;
                    puVar1 = puVar9;
                    while (puVar1 < puVar5) {
                        puVar6 = puVar1 + 8;
                        switch_jump(0x20, puVar1, unaff_r14);
                        puVar1 = puVar6;
                        unaff_r14 = unaff_r14 + 8;
                    }
                }
            }
            puVar3[1] = uVar8;
            g_8c475f04 = puVar4;
            return puVar9;
        }
        if (puVar3 == g_8c475f04)
            break;
        puVar9 = (u32 *)*puVar3;
        puVar4 = puVar3;
    }
    return (u32 *)0;
}

/*
 * FUN_8c1fb77a  0x8c1fb77a
 */
int FUN_8c1fb77a(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;
    u8 *puVar4;
    u32 a4;

    a4 = a1 * a0;
    iVar1 = malloc_sys(a4, a1, a2, a3);
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        uVar3 = 0;
        if (a4 != 0) {
            do {
                puVar2 = (u32 *)(iVar1 + uVar3);
                uVar3 = uVar3 + 4;
                *puVar2 = 0;
            } while (uVar3 < a4);
        }
        uVar3 = uVar3 - 4;
        puVar4 = (u8 *)(iVar1 + uVar3);
        for (; uVar3 < (a4 & 3); uVar3 = uVar3 + 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
        }
    }
    return iVar1;
}

/*
 * FUN_8c1fb81c  0x8c1fb81c
 */
u32 FUN_8c1fb81c(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *puVar4;
    char cVar5;
    u32 uVar6;

    uVar1 = (u32)0x100;
    uVar6 = *0xff000010 >> 0x12 & 0x3f;
    while ((uVar6 < 0x40 && ((*(u32 *)(uVar6 * 0x100 + 0xf6000000) & uVar1) == uVar1))) {
        uVar6 = uVar6 + 1;
    }
    if (uVar6 == 0x40) {
        uVar6 = (u32)0xff;
    } else {
        cVar5 = (char)a2;
        uVar1 = a1 & (int)(int)0xfffffc00 | uVar1;
        if (cVar5 == '\x01') {
            a2 = 0;
            uVar3 = 0x1ffffc00;
        } else if (cVar5 == '\x02') {
            a2 = 0x10;
            uVar3 = 0x1ffff000;
        } else if (cVar5 == '\x03') {
            a2 = (u32)0x80;
            uVar3 = 0x1fff0000;
        } else {
            uVar3 = uVar1;
            if (cVar5 == '\x04') {
                a2 = (u32)0x90;
                uVar3 = 0x1ff00000;
            }
        }
        uVar2 = (u32)0x13e;
        puVar4 = (u32 *)(uVar6 * 0x100 + 0xf7000000);
        *(u32 *)(0xf6000000 + uVar6 * 0x100) = uVar1;
        *puVar4 = a0 & uVar3 | a2 | uVar2;
    }
    return uVar6;
}

/*
 * FUN_8c1fb8ae  0x8c1fb8ae
 */
u32 FUN_8c1fb8ae(u32 a0) {
    u32 in_r0;
    int iVar1;
    u32 *puVar2;

    if (a0 < 0x40) {
        iVar1 = a0 * 0x100;
        puVar2 = (u32 *)(iVar1 + 0xf7000000);
        *(u32 *)(0xf6000000 + iVar1) = *(u32 *)(iVar1 + 0xf6000000) & (int)(int)0xfffffeff;
        *puVar2 = 0;
    }
    return in_r0;
}

/*
 * FUN_8c1fb924  0x8c1fb924
 * called by: FUN_8c1fa6b8
 */
u32 FUN_8c1fb924(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u8 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 *puVar6;
    u32 uVar7;
    u32 uVar8;
    u32 *puVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;

    iVar13 = 0xe0000000;
    iVar11 = 0xc000000;
    iVar3 = 0x100000;
    puVar2 = (&FUN_8c1fb81c);
    uVar1 = 0xd000000;
    uVar7 = *0xff000010 & 1;
    if (uVar7 == 1) {
        iVar12 = 0;
        iVar10 = 0;
        while (iVar5 = 0xe1000000, iVar4 = 0x10000000, uVar7 = 0x10800000, (u32)(iVar11 + iVar12) < uVar1) {
            puVar9 = (u32 *)(0x8c475f18 + iVar10 * 4);
            uVar8 = (*(code *)puVar2)(iVar11 + iVar12, iVar13 + iVar12, 4, a3);
            iVar10 = iVar10 + 1;
            iVar12 = iVar12 + iVar3;
            *puVar9 = uVar8;
        }
        iVar13 = 0;
        iVar11 = 0;
        while (puVar6 = 0x8c475f78, (u32)(iVar4 + iVar13) < uVar7) {
            puVar9 = (u32 *)(0x8c475f58 + iVar11 * 4);
            uVar8 = (*(code *)puVar2)(iVar4 + iVar13, iVar5 + iVar13, 4, a3);
            iVar11 = iVar11 + 1;
            iVar13 = iVar13 + iVar3;
            *puVar9 = uVar8;
        }
        uVar7 = (*(code *)puVar2)(uVar7, 0xe1800000, 4, a3);
        *puVar6 = uVar7;
    }
    return uVar7;
}

/*
 * FUN_8c1fb9d2  0x8c1fb9d2
 * called by: FUN_8c1fa6f2
 */
u32 FUN_8c1fb9d2(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 *puVar4;

    puVar1 = (&FUN_8c1fb8ae);
    puVar3 = 0x8c475f18 + 0x10;
    for (puVar4 = 0x8c475f18; puVar4 < puVar3; puVar4 = puVar4 + 1) {
        (*(code *)puVar1)(*puVar4, a1, a2, a3);
    }
    puVar3 = 0x8c475f58 + 8;
    for (puVar4 = 0x8c475f58; puVar4 < puVar3; puVar4 = puVar4 + 1) {
        (*(code *)puVar1)(*puVar4, a1, a2, a3);
    }
    uVar2 = (*(code *)puVar1)(g_8c475f78, a1, a2, a3);
    return uVar2;
}

/*
 * FUN_8c1fba90  0x8c1fba90
 * called by: FUN_8c1fd626
 */
u32 FUN_8c1fba90(u32 a0) {
    g_8c475f80 = a0;
    return a0;
}

/*
 * FUN_8c1fba98  0x8c1fba98
 * called by: FUN_8c1fdab0, FUN_8c1fdbaa, FUN_8c1fde30
 */
u32 FUN_8c1fba98(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    bool bVar4;
    int iVar5;

    iVar5 = a0 * 0x148;
    iVar3 = g_8c475f80;
    do {
        iVar1 = FUN_8c1fd008(a0, a1, a2, a3);
        if (iVar1 == 0)
            break;
        if ((g_8c26d178 != 0) && (iVar1 == -0xd0))
            goto LAB_8c1fbb2c;
        bVar4 = iVar3 != 0;
        *(int *)(iVar5 + 0x8c478414) = *(int *)(iVar5 + 0x8c478414) + 1;
        iVar3 = iVar3 + -1;
    } while ((bVar4) || (g_8c475f80 == -1));
    iVar3 = *(int *)(iVar5 + 0x8c478410);
    *(int *)(iVar5 + 0x8c478410) = iVar3 + 1;
    FUN_8c1fcdc2(a0, *(u32 *)(a0 * 0x80 + 0x8c475fc8), iVar3, *(u32 *)(iVar5 + 0x8c478414));
    if (iVar1 == 0) {
        uVar2 = 0;
    } else if (iVar1 == -0xff) {
    LAB_8c1fbb2c:
        uVar2 = 0xffffff01;
    } else {
        uVar2 = 0xffff0000;
    }
    return uVar2;
}

/*
 * FUN_8c1fbb6c  0x8c1fbb6c
 * called by: FUN_8c1fee6c, FUN_8c200038, FUN_8c2001b8, FUN_8c2001d0, FUN_8c200d94
 */
u32 FUN_8c1fbb6c(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    bool bVar4;
    int iVar5;

    iVar5 = a0 * 0x148;
    iVar3 = g_8c475f80;
    do {
        iVar1 = FUN_8c1fd1e2(a0, a1, a2);
        if (iVar1 == 0)
            break;
        if ((g_8c26d178 != 0) && (iVar1 == -0xd0))
            goto LAB_8c1fbc04;
        bVar4 = iVar3 != 0;
        *(int *)(iVar5 + 0x8c478414) = *(int *)(iVar5 + 0x8c478414) + 1;
        iVar3 = iVar3 + -1;
    } while ((bVar4) || (g_8c475f80 == -1));
    iVar3 = *(int *)(iVar5 + 0x8c478410);
    *(int *)(iVar5 + 0x8c478410) = iVar3 + 1;
    FUN_8c1fcdc2(a0, *(u32 *)(a0 * 0x80 + 0x8c475fc8), iVar3, *(u32 *)(iVar5 + 0x8c478414));
    if (iVar1 == 0) {
        uVar2 = 0;
    } else if (iVar1 == -0xff) {
    LAB_8c1fbc04:
        uVar2 = 0xffffff01;
    } else {
        uVar2 = 0xffff0000;
    }
    return uVar2;
}

/*
 * FUN_8c1fbc44  0x8c1fbc44
 * called by: FUN_8c1fde30, FUN_8c1febd6, FUN_8c1febe6, FUN_8c1fecf2, FUN_8c200038, FUN_8c200346, FUN_8c200e1e,
 * FUN_8c2014e6
 */
u32 FUN_8c1fbc44(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    bool bVar4;
    int iVar5;

    iVar5 = a0 * 0x148;
    iVar3 = g_8c475f80;
    do {
        iVar1 = FUN_8c1fd312(a0, a1, a2, a3);
        if (iVar1 == 0)
            break;
        if ((g_8c26d178 != 0) && (iVar1 == -0xd0))
            goto LAB_8c1fbce2;
        bVar4 = iVar3 != 0;
        *(int *)(iVar5 + 0x8c478414) = *(int *)(iVar5 + 0x8c478414) + 1;
        iVar3 = iVar3 + -1;
    } while ((bVar4) || (g_8c475f80 == -1));
    iVar3 = *(int *)(iVar5 + 0x8c478410);
    *(int *)(iVar5 + 0x8c478410) = iVar3 + 1;
    FUN_8c1fcdc2(a0, *(u32 *)(a0 * 0x80 + 0x8c475fc8), iVar3, *(u32 *)(iVar5 + 0x8c478414));
    if (iVar1 == 0) {
        uVar2 = 0;
    } else if (iVar1 == -0xff) {
    LAB_8c1fbce2:
        uVar2 = 0xffffff01;
    } else if (iVar1 == -0xc0) {
        uVar2 = 0xffffff40;
    } else {
        uVar2 = 0xffff0000;
    }
    return uVar2;
}

/*
 * FUN_8c1fbd2c  0x8c1fbd2c
 * called by: FUN_8c01a3e4
 */
int FUN_8c1fbd2c(u32 a0, u32 a1, u32 a2, code *a3) {
    int iVar1;
    u32 a4;
    code *a5;
    code *ain0;

    g_8c475f88 = 0;
    g_8c475f8c = 0;
    g_8c475f90 = 0;
    g_8c475f94 = 0;
    g_8c475f98 = a2;
    g_8c475f9c = a1;
    ain0 = a3;
    FUN_8c1fc9b0(a1);
    iVar1 = FUN_8c1fd626(a0, a1, a2, a3);
    a5 = FUN_8c1fbe84;
    a4 = g_8c26d1e0;
    set_handler_slot32(g_8c26d1e0, FUN_8c1fbe84);
    if ((iVar1 == 0) && (ain0 != NULL)) {
        (*ain0)(a4, a5, a2, a3);
    }
    g_8c273a44 = 1;
    return iVar1;
}

/*
 * FUN_8c1fbdb8  0x8c1fbdb8
 */
u32 FUN_8c1fbdb8(void) {
    u32 ain0;
    u8 in_MD;
    u8 bVar1;
    u8 in_RB;
    u8 bVar2;
    u8 in_BL;
    u8 bVar3;
    u8 in_FD;
    u8 bVar4;
    u8 in_M;
    u8 extraout_M;
    u8 in_Q;
    u8 extraout_Q;
    u8 in_IMASK;
    u8 bVar5;
    u8 in_S;
    u8 extraout_S;
    u8 in_T;
    u8 extraout_T;

    ain0 = (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
    bVar3 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar1 = bVar3 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar5 = 0;
    bVar4 = (u8)((((u32)in_Q << 8 | (u32)in_M << 9 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar3 = (bVar3 & 0x10) >> 4;
    bVar2 = (bVar1 & 0x20) >> 5;
    bVar1 = ((bVar1 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    set_handler_slot32(0x14, 0);
    return (ain0 & 0xf) << 4 | ((u32)extraout_T | (u32)extraout_S << 1 | (u32)bVar5 << 4) & 0xffffff0f |
           (u32)extraout_Q << 8 | (u32)extraout_M << 9 | (u32)bVar4 << 0xf | (u32)bVar3 << 0x1c | (u32)bVar2 << 0x1d |
           (u32)bVar1 << 0x1e;
}

/*
 * FUN_8c1fbdfc  0x8c1fbdfc
 */
u32 FUN_8c1fbdfc(u32 unused_a0, u32 a1, u32 a2, u32 a3, code *ain1) {
    u32 in_r2;
    u32 *in_r3;
    u32 uVar1;
    u32 in_PR;

    *in_r3 = in_r2;
    uVar1 = 0x14;
    (*ain1)(0x14, a1, a2, a3, in_PR);
    memset_wrap(uVar1, a1, a2, a3);
    uVar1 = FUN_8c1fda04(uVar1, a1, a2, a3);
    return uVar1;
}

/*
 * FUN_8c1fbe12  0x8c1fbe12
 * called by: FUN_8c01ab2c
 */
u32 FUN_8c1fbe12(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar5_00;
    int ar4_00;

    ar4_00 = 0;
    do {
        iVar2 = slot80_get_active(ar4_00);
        if (iVar2 != 0) {
            return 0xffffffff;
        }
        ar4_00 = ar4_00 + 1;
    } while (ar4_00 < 8);
    ar5_00 = 0;
    g_8c273a44 = 0;
    uVar1 = g_8c26d1e0;
    set_handler_slot32(g_8c26d1e0, 0);
    memset_wrap(uVar1, ar5_00, unused_a2, a3);
    uVar1 = FUN_8c1fda04(uVar1, ar5_00, unused_a2, a3);
    return uVar1;
}

/*
 * FUN_8c1fbe1a  0x8c1fbe1a
 */
u32 FUN_8c1fbe1a(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar5_00;
    int unaff_r13;
    int unaff_r14;

    do {
        iVar2 = slot80_get_active(unaff_r14);
        if (iVar2 != 0) {
            return 0xffffffff;
        }
        unaff_r14 = unaff_r14 + 1;
    } while (unaff_r14 < unaff_r13);
    ar5_00 = 0;
    g_8c273a44 = 0;
    uVar1 = g_8c26d1e0;
    set_handler_slot32(g_8c26d1e0, 0);
    memset_wrap(uVar1, ar5_00, unused_a2, a3);
    uVar1 = FUN_8c1fda04(uVar1, ar5_00, unused_a2, a3);
    return uVar1;
}

/*
 * FUN_8c1fbe84  0x8c1fbe84
 */
u32 FUN_8c1fbe84(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 ain0) {
    int iVar1;
    code *pcVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    int iVar6;

    if (g_8c273a44 != 0) {
        if (g_8c475f98 == 0) {
            pcVar2 = FUN_8c1fc00e;
        } else {
            pcVar2 = FUN_8c1fbfd2;
        }
        thunk_FUN_8c1fcfbe();
        g_8c475f88 = g_8c475f8c;
        g_8c475f8c = FUN_8c1fda44();
        uVar3 = 0;
        iVar6 = 0;
        uVar4 = 1;
        g_8c475f8c = g_8c475f8c & g_8c475f9c;
        do {
            iVar1 = FUN_8c1fc5c4(iVar6);
            uVar5 = uVar4;
            if (iVar1 != 0) {
                uVar5 = 0;
            }
            iVar6 = iVar6 + 1;
            uVar4 = uVar4 << 1;
            uVar3 = uVar3 | uVar5;
        } while (iVar6 < 8);
        uVar5 = 1;
        iVar6 = 0;
        uVar4 = (g_8c475f88 ^ g_8c475f8c) & g_8c475f8c;
        ain0 = g_8c475f8c;
        do {
            if ((uVar4 & uVar5) != 0) {
                if ((uVar5 & uVar3) == 0) {
                    g_8c475f90 = g_8c475f90 | uVar5;
                } else {
                    ain0 = (*pcVar2)(iVar6, a1, a2, a3);
                    g_8c475f90 = g_8c475f90 & ~uVar5;
                }
            }
            if (((uVar5 & uVar3) != 0) && ((g_8c475f90 & uVar5) != 0)) {
                ain0 = (*pcVar2)(iVar6, a1, a2, a3);
                g_8c475f90 = g_8c475f90 & ~uVar5;
            }
            iVar6 = iVar6 + 1;
            uVar5 = uVar5 << 1;
        } while (iVar6 < 8);
        uVar5 = 1;
        iVar6 = 0;
        uVar4 = (g_8c475f8c ^ g_8c475f88) & g_8c475f88;
        do {
            if ((uVar4 & uVar5) != 0) {
                if ((uVar5 & uVar3) == 0) {
                    g_8c475f94 = g_8c475f94 | uVar5;
                } else {
                    ain0 = FUN_8c1fcd9c(iVar6, 2, 0);
                    g_8c475f94 = g_8c475f94 & ~uVar5;
                }
            }
            if (((uVar5 & uVar3) != 0) && ((g_8c475f94 & uVar5) != 0)) {
                ain0 = FUN_8c1fcd9c(iVar6, 2, 0);
                g_8c475f94 = g_8c475f94 & ~uVar5;
            }
            iVar6 = iVar6 + 1;
            uVar5 = uVar5 << 1;
        } while (iVar6 < 8);
    }
    return ain0;
}

/*
 * thunk_FUN_8c1fce34  0x8c1fbfb4
 * called by: FUN_8c01c998
 */
u32 thunk_FUN_8c1fce34(void) {
    u32 uVar1;

    uVar1 = (g_8c1fce34)();
    return uVar1;
}

/*
 * thunk_FUN_8c1fce50  0x8c1fbfba
 * called by: FUN_8c01c998
 */
u32 thunk_FUN_8c1fce50(void) {
    u32 uVar1;

    uVar1 = FUN_8c1fce50();
    return uVar1;
}

/*
 * thunk_FUN_8c1fda7e  0x8c1fbfcc
 * called by: FUN_8c01a3e4, FUN_8c01a5cc
 */
u32 thunk_FUN_8c1fda7e(void) {
    u32 uVar1;

    uVar1 = (g_8c1fda7e)();
    return uVar1;
}

/*
 * FUN_8c1fbfd2  0x8c1fbfd2
 * called by: FUN_8c1fc93c
 */
u32 FUN_8c1fbfd2(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 1);
        slot80_set_params(a0, a0, 0, 0, 0, 0, 0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc00e  0x8c1fc00e
 */
u32 FUN_8c1fc00e(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 0x12);
        slot80_set_params(a0, a0, 0, 0, 0, 0, 0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc04e  0x8c1fc04e
 */
u32 FUN_8c1fc04e(u32 a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1fdd1a(a0);
    return uVar2;
}

/*
 * thunk_FUN_8c1ffcc2  0x8c1fc076
 * called by: FUN_8c01a3e4, FUN_8c1fdd44, FUN_8c1fe236, FUN_8c1fe350, FUN_8c1fe466, FUN_8c1fe534, FUN_8c1fe646,
 * FUN_8c1fe7aa (+21 more)
 */
u32 thunk_FUN_8c1ffcc2(void) {
    u32 uVar1;

    uVar1 = (g_8c1ffcc2)();
    return uVar1;
}

/*
 * FUN_8c1fc07c  0x8c1fc07c
 */
u32 FUN_8c1fc07c(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 in_stack_00000000;

    uVar2 = a2;
    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    slot80_set_8(a0, 3);
    uVar2 = a1;
    slot80_set_params(a0, a0, a1, a2, a3, in_stack_00000000, 0);
    FUN_8c1fcecc(a0, uVar2);
    memmove_wrap_1fcf6e(a0);
    return 0;
}

/*
 * FUN_8c1fc13c  0x8c1fc13c
 */
u32 FUN_8c1fc13c(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1fe236(a0, a1);
    return uVar2;
}

/*
 * FUN_8c1fc16a  0x8c1fc16a
 * called by: FUN_8c01b144, FUN_8c01c3c4
 */
u32 FUN_8c1fc16a(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1fe350(a0, a1);
    return uVar2;
}

/*
 * FUN_8c1fc198  0x8c1fc198
 */
u32 FUN_8c1fc198(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1ff018(a0, a1);
    return uVar2;
}

/*
 * FUN_8c1fc1c6  0x8c1fc1c6
 */
u32 FUN_8c1fc1c6(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1ff110(a0, a1);
    return uVar2;
}

/*
 * FUN_8c1fc1f4  0x8c1fc1f4
 */
u32 FUN_8c1fc1f4(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1ff1f8(a0, a1, a2);
    return uVar2;
}

/*
 * FUN_8c1fc226  0x8c1fc226
 */
u32 FUN_8c1fc226(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1ff336(a0, a1, a2);
    return uVar2;
}

/*
 * FUN_8c1fc258  0x8c1fc258
 * called by: FUN_8c01b144, FUN_8c01c560
 */
u32 FUN_8c1fc258(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1ffc0a(a0, a1);
    return uVar2;
}

/*
 * FUN_8c1fc286  0x8c1fc286
 */
u32 FUN_8c1fc286(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1fe534(a0, a1, a2);
    return uVar2;
}

/*
 * FUN_8c1fc2b8  0x8c1fc2b8
 */
u32 FUN_8c1fc2b8(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1fe7aa(a0, a1, a2, a3);
    return uVar2;
}

/*
 * FUN_8c1fc2ee  0x8c1fc2ee
 */
u32 FUN_8c1fc2ee(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1fe646(a0, a1, a2, a3);
    return uVar2;
}

/*
 * FUN_8c1fc324  0x8c1fc324
 */
u32 FUN_8c1fc324(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(*(u32 *)(a0 + 0x28));
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1fe8f2(a0, (int)(short)a1, (int)(char)a2);
    return uVar2;
}

/*
 * FUN_8c1fc360  0x8c1fc360
 */
u32 FUN_8c1fc360(int a0) {
    int iVar1;
    u32 uVar2;

    uVar2 = *(u32 *)(a0 + 0x28);
    iVar1 = slot80_get_active(uVar2);
    if (iVar1 == 0) {
        slot80_set_8(uVar2, 4);
        slot80_set_params(uVar2, a0, 1, 0, 0, 0, 0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc3a6  0x8c1fc3a6
 */
u32 FUN_8c1fc3a6(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 ar4_00;

    ar4_00 = *(u32 *)(a0 + 0x28);
    uVar2 = a2;
    iVar1 = slot80_get_active(ar4_00);
    if (iVar1 == 0) {
        slot80_set_8(ar4_00, 5);
        slot80_set_params(ar4_00, a0, a1, a2, 0, 0, 0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc428  0x8c1fc428
 */
u32 FUN_8c1fc428(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 ar4_00;

    ar4_00 = *(u32 *)(a0 + 0x28);
    uVar2 = a2;
    iVar1 = slot80_get_active(ar4_00);
    if (iVar1 == 0) {
        slot80_set_8(ar4_00, 6);
        slot80_set_params(ar4_00, a0, a1, a2, 0, 0, 0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc472  0x8c1fc472
 * called by: FUN_8c01c450
 */
u32 FUN_8c1fc472(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;
    u32 ar7_00;

    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        uVar2 = slot80_set_8(a0, 7);
        ar7_00 = 0;
        slot80_set_params(a0, a0, a1, 0, uVar2, 0, 0);
        FUN_8c1fcef8(a0, a1, a1);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc476  0x8c1fc476
 */
u32 FUN_8c1fc476(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;
    u32 unaff_r14;

    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(unaff_r14, 7);
        uVar2 = 0;
        slot80_set_params(unaff_r14, unaff_r14, a1, 0, 0, 0, 0);
        FUN_8c1fcef8(unaff_r14, a1, a1);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc4be  0x8c1fc4be
 */
u32 FUN_8c1fc4be(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    uVar2 = a2;
    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 0x11);
        slot80_set_params(a0, a0, a1, a2, 0, 0, 0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc504  0x8c1fc504
 */
u32 FUN_8c1fc504(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 in_stack_ffffffe8;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_ffffffe8 >> 0x10), (short)a2);
    uVar3 = a3;
    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 10);
        uVar3 = ain0 & 0xffff;
        slot80_set_params(a0, a0, a1, uVar3, a3 & 0xff, 0, 0);
        FUN_8c1fcef8(a0, a1, a1);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc564  0x8c1fc564
 * called by: FUN_8c01c4d8
 */
u32 FUN_8c1fc564(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1fef5a(a0, a1);
    return uVar2;
}

/*
 * FUN_8c1fc592  0x8c1fc592
 */
u32 FUN_8c1fc592(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1fdd44(a0, a1, a2);
    return uVar2;
}

/*
 * FUN_8c1fc5c4  0x8c1fc5c4
 * called by: FUN_8c01a900, FUN_8c01b144, FUN_8c1fbe84
 */
u32 FUN_8c1fc5c4(u32 a0) {
    int iVar1;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    return 0;
}

/*
 * FUN_8c1fc5de  0x8c1fc5de
 * called by: FUN_8c01a900, FUN_8c01b144
 */
u32 FUN_8c1fc5de(int a0) {
    int iVar1;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    return *(u32 *)(a0 * 4 + 0x8c475fa0);
}

/*
 * FUN_8c1fc604  0x8c1fc604
 */
u32 FUN_8c1fc604(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    uVar2 = a2;
    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 8);
        uVar2 = a2;
        slot80_set_params(a0, a0, a1, a2, 0, 0, 0);
        FUN_8c1fcef8(a0, a1, a2);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc654  0x8c1fc654
 * called by: FUN_8c01c320
 */
u32 FUN_8c1fc654(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
    uVar2 = FUN_8c1ffb70(a0, a1);
    return uVar2;
}

/*
 * FUN_8c1fc682  0x8c1fc682
 * called by: FUN_8c01b144
 */
u32 FUN_8c1fc682(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 9);
        slot80_set_params(a0, a0, a1, 0, 0, 0, 0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc6e8  0x8c1fc6e8
 */
u32 FUN_8c1fc6e8(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ain0;

    uVar2 = a3;
    ain0 = a2;
    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 0xb);
        slot80_set_params(a0, a0, a1, ain0, a3, 0, 0);
        FUN_8c1fcef8(a0, a1, a1);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc740  0x8c1fc740
 */
u32 FUN_8c1fc740(u32 a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    int iVar1;
    u32 uVar2;
    u32 ain0;
    u32 in_stack_00000004;

    uVar2 = a3;
    ain0 = a2;
    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 0xc);
        slot80_set_params(a0, a0, a1, ain0, a3, s0, in_stack_00000004);
        FUN_8c1fcef8(a0, a1, a1);
        memmove_wrap_1fcf6e(a0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc79e  0x8c1fc79e
 */
u32 FUN_8c1fc79e(u32 a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    int iVar1;
    u32 uVar2;
    u32 ain0;
    u32 in_stack_00000004;

    uVar2 = a3;
    ain0 = a2;
    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 0xd);
        slot80_set_params(a0, a0, a1, ain0, a3, s0, in_stack_00000004);
        FUN_8c1fcef8(a0, a1, a1);
        memmove_wrap_1fcf6e(a0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc7fc  0x8c1fc7fc
 */
u32 FUN_8c1fc7fc(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 in_stack_00000000;
    u32 ain0;

    uVar2 = a2;
    ain0 = a3;
    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 0xe);
        slot80_set_params(a0, a0, a1, a2, ain0, in_stack_00000000, 0);
        FUN_8c1fcef8(a0, a1, a1);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc852  0x8c1fc852
 */
u32 FUN_8c1fc852(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 in_stack_00000000;
    u32 ain0;

    uVar2 = a2;
    ain0 = a3;
    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 0x14);
        slot80_set_params(a0, a0, a1, a2, ain0, in_stack_00000000, 0);
        FUN_8c1fcef8(a0, a1, a1);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc8a8  0x8c1fc8a8
 */
u32 FUN_8c1fc8a8(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 0xf);
        slot80_set_params(a0, a0, a1, 0, 0, 0, 0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc8ec  0x8c1fc8ec
 */
u32 FUN_8c1fc8ec(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = slot80_get_active(a0);
    if (iVar1 == 0) {
        slot80_set_8(a0, 0x10);
        slot80_set_params(a0, a0, a1, 0, 0, 0, 0);
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/*
 * FUN_8c1fc93c  0x8c1fc93c
 */
u32 FUN_8c1fc93c(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    iVar1 = FUN_8c1fd8fc(a0, a1, a2);
    if (iVar1 == 0) {
        uVar2 = FUN_8c1fbfd2(a0);
        return uVar2;
    }
    return iVar1;
}

/*
 * FUN_8c1fc980  0x8c1fc980
 * called by: FUN_8c1fd1e2
 */
u32 FUN_8c1fc980(u32 *a0, u32 *a1, u32 a2) {
    u32 in_r0;
    u32 uVar1;
    u32 uVar2;

    uVar2 = a2 >> 2;
    do {
        uVar1 = *a1;
        a1 = a1 + 1;
        uVar2 = uVar2 - 1;
        *a0 = uVar1;
        a0 = a0 + 1;
    } while (uVar2 != 0);
    return in_r0;
}

/*
 * FUN_8c1fc9b0  0x8c1fc9b0
 * called by: FUN_8c1fbd2c
 */
u32 FUN_8c1fc9b0(u32 a0) {
    u32 *puVar1;
    u8 *puVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;

    puVar1 = 0x8c475fa0;
    iVar5 = (int)0x400;
    g_8c475fa0 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar2 = (&memset);
    memset(0x8c475fc0, 0, iVar5);
    (*(code *)puVar2)(0x8c4763c0, 0x30, iVar5);
    (*(code *)puVar2)(0x8c4767c0, 0x31, iVar5);
    (*(code *)puVar2)(0x8c476bc0, 0x32, iVar5);
    (*(code *)puVar2)(0x8c476fc0, 0x33, iVar5);
    (*(code *)puVar2)(0x8c4773c0, 0x34, iVar5);
    (*(code *)puVar2)(0x8c4777c0, 0x35, iVar5);
    (*(code *)puVar2)(0x8c477bc0, 0x36, iVar5);
    (*(code *)puVar2)(0x8c477fc0, 0x37, iVar5);
    iVar3 = FUN_8c1fcf90();
    puVar2 = (&FUN_8c1fcfa6);
    if (iVar3 == 0) {
        uVar4 = 0xffffffff;
    } else {
        if ((a0 & 1) != 0) {
            FUN_8c1fcfa6((&DATA_8c1fcaf4), 0x8c4763c0, iVar5);
        }
        if ((a0 & 2) != 0) {
            (*(code *)puVar2)((&DATA_8c1fcaf8), 0x8c4767c0, iVar5);
        }
        if ((a0 & 4) != 0) {
            (*(code *)puVar2)((&DATA_8c1fcafc), 0x8c476bc0, iVar5);
        }
        if ((a0 & 8) != 0) {
            (*(code *)puVar2)((&DATA_8c1fcb00), 0x8c476fc0, iVar5);
        }
        if ((a0 & 0x10) != 0) {
            (*(code *)puVar2)((&DATA_8c1fcb04), 0x8c4773c0, iVar5);
        }
        if ((a0 & 0x20) != 0) {
            (*(code *)puVar2)((&DATA_8c1fcb08), 0x8c4777c0, iVar5);
        }
        if ((a0 & 0x40) != 0) {
            (*(code *)puVar2)((&DATA_8c1fcb0c), 0x8c477bc0, iVar5);
        }
        if ((a0 & (int)0x80) != 0) {
            (*(code *)puVar2)((&DATA_8c1fcb64), 0x8c477fc0, iVar5);
        }
        uVar4 = 0;
    }
    return uVar4;
}

/*
 * FUN_8c1fc9c0  0x8c1fc9c0
 */
u32 FUN_8c1fc9c0(u32 *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 ar5_00;
    u32 ar6_00;
    u32 unaff_r11;
    u32 unaff_r12;
    u32 unaff_r14;

    *a0 = unaff_r11;
    a0[1] = unaff_r11;
    a0[2] = unaff_r11;
    a0[3] = unaff_r11;
    a0[4] = unaff_r11;
    a0[5] = unaff_r11;
    a0[6] = unaff_r11;
    a0[7] = unaff_r11;
    puVar1 = (&memset);
    memset(0x8c475fc0, unaff_r11, unaff_r14);
    (*(code *)puVar1)(0x8c4763c0, 0x30, unaff_r14, a3);
    (*(code *)puVar1)(0x8c4767c0, 0x31, unaff_r14, a3);
    (*(code *)puVar1)(0x8c476bc0, 0x32, unaff_r14, a3);
    (*(code *)puVar1)(0x8c476fc0, 0x33, unaff_r14, a3);
    (*(code *)puVar1)(0x8c4773c0, 0x34, unaff_r14, a3);
    (*(code *)puVar1)(0x8c4777c0, 0x35, unaff_r14, a3);
    (*(code *)puVar1)(0x8c477bc0, 0x36, unaff_r14, a3);
    ar5_00 = 0x37;
    uVar3 = 0x8c477fc0;
    ar6_00 = unaff_r14;
    (*(code *)puVar1)(0x8c477fc0, 0x37, unaff_r14, a3);
    iVar2 = FUN_8c1fcf90(uVar3, ar5_00, ar6_00, a3);
    puVar1 = (&FUN_8c1fcfa6);
    if (iVar2 == 0) {
        uVar3 = 0xffffffff;
    } else {
        if ((unaff_r12 & 1) != 0) {
            FUN_8c1fcfa6((&DATA_8c1fcaf4), 0x8c4763c0, unaff_r14);
        }
        if ((unaff_r12 & 2) != 0) {
            (*(code *)puVar1)((&DATA_8c1fcaf8), 0x8c4767c0, unaff_r14, a3);
        }
        if ((unaff_r12 & 4) != 0) {
            (*(code *)puVar1)((&DATA_8c1fcafc), 0x8c476bc0, unaff_r14, a3);
        }
        if ((unaff_r12 & 8) != 0) {
            (*(code *)puVar1)((&DATA_8c1fcb00), 0x8c476fc0, unaff_r14, a3);
        }
        if ((unaff_r12 & 0x10) != 0) {
            (*(code *)puVar1)((&DATA_8c1fcb04), 0x8c4773c0, unaff_r14, a3);
        }
        if ((unaff_r12 & 0x20) != 0) {
            (*(code *)puVar1)((&DATA_8c1fcb08), 0x8c4777c0, unaff_r14, a3);
        }
        if ((unaff_r12 & 0x40) != 0) {
            (*(code *)puVar1)((&DATA_8c1fcb0c), 0x8c477bc0, unaff_r14, a3);
        }
        if ((unaff_r12 & (int)0x80) != 0) {
            (*(code *)puVar1)((&DATA_8c1fcb64), 0x8c477fc0, unaff_r14, a3);
        }
        uVar3 = 0;
    }
    return uVar3;
}

/*
 * memset_wrap  0x8c1fcadc
 * only calls memset
 * called by: FUN_8c1fbdfc, FUN_8c1fbe12, FUN_8c1fbe1a
 */
u32 memset_wrap(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    memset(0x8c475fc0, 0, (int)0x400);
    return 0;
}

/*
 * thunk_FUN_8c1fcfbe  0x8c1fcaee
 * called by: FUN_8c1fbe84
 */
u32 thunk_FUN_8c1fcfbe(void) {
    u32 uVar1;

    uVar1 = (g_8c1fcfbe)();
    return uVar1;
}

/*
 * FUN_8c1fcd9c  0x8c1fcd9c
 * called by: FUN_8c1fbe84
 */
u32 FUN_8c1fcd9c(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    int iVar2;

    iVar2 = a0 * 0x80 + 0x8c475fc0;
    if (*(int *)(iVar2 + 0x74) != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1fcdba. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(iVar2 + 0x74))(*(u32 *)(iVar2 + 0x7c));
        return uVar1;
    }
    return 0x74;
}

/*
 * FUN_8c1fcdc2  0x8c1fcdc2
 * called by: FUN_8c1fba98, FUN_8c1fbb6c, FUN_8c1fbc44, FUN_8c1fdab0, FUN_8c1fdbaa, FUN_8c1fdc80
 */
u32 FUN_8c1fcdc2(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    iVar2 = a0 * 0x80 + 0x8c475fc0;
    if (*(int *)(iVar2 + 0x78) != 0) {
        /* WARNING: Could not recover jumptable at 0x8c1fcddc. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(iVar2 + 0x78))();
        return uVar1;
    }
    return 0x78;
}

/*
 * FUN_8c1fce34  0x8c1fce34
 */
u32 FUN_8c1fce34(u32 a0) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;

    iVar2 = (int)0x80;
    uVar3 = 0x8c475fc0 + (int)0x400;
    uVar1 = 0x8c475fc0;
    do {
        *(u32 *)(uVar1 + 0x74) = a0;
        uVar1 = uVar1 + iVar2;
    } while (uVar1 < uVar3);
    return 0x74;
}

/*
 * FUN_8c1fce50  0x8c1fce50
 * called by: thunk_FUN_8c1fce50
 */
u32 FUN_8c1fce50(u32 a0) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;

    iVar2 = (int)0x80;
    uVar3 = 0x8c475fc0 + (int)0x400;
    uVar1 = 0x8c475fc0;
    do {
        *(u32 *)(uVar1 + 0x78) = a0;
        uVar1 = uVar1 + iVar2;
    } while (uVar1 < uVar3);
    return 0x78;
}

/*
 * slot80_get_active  0x8c1fce88
 * +4 of entry a0 in the 0x80-byte table at 0x8c475fc0
 * called by: FUN_8c1fbe12, FUN_8c1fbe1a, FUN_8c1fbfd2, FUN_8c1fc00e, FUN_8c1fc04e, FUN_8c1fc07c, FUN_8c1fc13c,
 * FUN_8c1fc16a (+30 more)
 */
u32 slot80_get_active(int a0) {
    return *(u32 *)(a0 * 0x80 + 0x8c475fc0 + 4);
}

/*
 * slot80_set_8  0x8c1fce98
 * +8 of entry a0 in the 0x80-byte table at 0x8c475fc0 = a1
 * called by: FUN_8c1fbfd2, FUN_8c1fc00e, FUN_8c1fc07c, FUN_8c1fc360, FUN_8c1fc3a6, FUN_8c1fc428, FUN_8c1fc472,
 * FUN_8c1fc476 (+11 more)
 */
u32 slot80_set_8(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 * 0x80 + 0x8c475fc0 + 8) = a1;
    return in_r0;
}

/*
 * slot80_set_params  0x8c1fcea8
 * stores six parameters in entry a0 of the table at 0x8c475fc0 and marks it active
 * called by: FUN_8c1fbfd2, FUN_8c1fc00e, FUN_8c1fc07c, FUN_8c1fc360, FUN_8c1fc3a6, FUN_8c1fc428, FUN_8c1fc472,
 * FUN_8c1fc476 (+11 more)
 */
u32 slot80_set_params(int a0, u32 a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8) {
    u32 in_r0;
    int iVar1;

    iVar1 = a0 * 0x80 + 0x8c475fc0;
    *(u32 *)(iVar1 + 0x14) = a1;
    *(u32 *)(iVar1 + 0x18) = a2;
    *(u32 *)(iVar1 + 0x1c) = a3;
    *(u32 *)(iVar1 + 0x20) = s0;
    *(u32 *)(iVar1 + 0x24) = s4;
    *(u32 *)(iVar1 + 0x28) = s8;
    *(u32 *)(iVar1 + 4) = 1;
    return in_r0;
}

/*
 * FUN_8c1fcecc  0x8c1fcecc
 * called by: FUN_8c1fc07c
 */
u32 FUN_8c1fcecc(int a0, u8 *a1) {
    u8 uVar1;
    u32 in_r0;
    u8 *puVar2;
    int iVar3;

    iVar3 = a0 * 0x80 + 0x8c475fc0;
    puVar2 = (u8 *)(iVar3 + 0x4c);
    do {
        uVar1 = *a1;
        a1 = a1 + 1;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
    } while (puVar2 < (u8 *)(iVar3 + 0x6c));
    return in_r0;
}

/*
 * FUN_8c1fcef8  0x8c1fcef8
 * called by: FUN_8c1fc472, FUN_8c1fc476, FUN_8c1fc504, FUN_8c1fc604, FUN_8c1fc6e8, FUN_8c1fc740, FUN_8c1fc79e,
 * FUN_8c1fc7fc (+1 more)
 */
u32 FUN_8c1fcef8(int a0, char *a1, char *a2) {
    char cVar1;
    u8 *puVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    char *pcVar6;

    iVar5 = a0 * 0x80 + 0x8c475fc0;
    puVar2 = (u8 *)(iVar5 + 0x2c);
    do {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    } while (puVar2 < (u8 *)(iVar5 + 0x39));
    puVar2 = (u8 *)(iVar5 + 0x3c);
    do {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    } while (puVar2 < (u8 *)(iVar5 + 0x49));
    pcVar4 = a1 + 0xc;
    pcVar6 = (char *)(iVar5 + 0x2c);
    for (pcVar3 = a1; (pcVar3 < pcVar4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
        cVar1 = *a1;
        a1 = a1 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
    }
    pcVar4 = a2 + 0xc;
    pcVar6 = (char *)(iVar5 + 0x3c);
    for (pcVar3 = a2; (pcVar3 < pcVar4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
        cVar1 = *a2;
        a2 = a2 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
    }
    return a1;
}

/*
 * memmove_wrap_1fcf6e  0x8c1fcf6e
 * only calls memmove
 * called by: FUN_8c1fc07c, FUN_8c1fc740, FUN_8c1fc79e
 */
u32 memmove_wrap_1fcf6e(int a0) {
    u32 uVar1;

    uVar1 = memmove(a0 * 0x80 + 0x8c475fc0 + 0x6c, 8);
    return uVar1;
}

/*
 * FUN_8c1fcf90  0x8c1fcf90
 * called by: FUN_8c1fc9b0, FUN_8c1fc9c0
 */
u32 FUN_8c1fcf90(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    FUN_8c1f670c(unused_a0, unused_a1, unused_a2, a3);
    uVar1 = FUN_8c1f672c(8, unused_a1, unused_a2, a3);
    g_8c4783c0 = uVar1;
    return uVar1;
}

/*
 * FUN_8c1fcfa6  0x8c1fcfa6
 * called by: FUN_8c1fc9b0, FUN_8c1fc9c0
 */
u32 FUN_8c1fcfa6(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = FUN_8c1f67c2(g_8c4783c0, a0, a1, a2);
    return uVar1;
}

/*
 * FUN_8c1fcfbe  0x8c1fcfbe
 */
u32 FUN_8c1fcfbe(void) {
    u32 uVar1;

    uVar1 = FUN_8c1f6a34(g_8c4783c0);
    return uVar1;
}

/*
 * thunk_FUN_8c1f6a30  0x8c1fcfce
 * called by: FUN_8c1fd008, FUN_8c1fd1e2, FUN_8c1fd312
 */
u32 thunk_FUN_8c1f6a30(void) {
    u32 uVar1;

    uVar1 = FUN_8c1f6a30();
    return uVar1;
}

/*
 * FUN_8c1fcffc  0x8c1fcffc
 * called by: FUN_8c1fd626
 */
u32 FUN_8c1fcffc(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    g_8c273a48 = 0;
    return ain0;
}

/*
 * noop_1fd004  0x8c1fd004
 * called by: FUN_8c1fda04
 */
u32 noop_1fd004(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * FUN_8c1fd008  0x8c1fd008
 * called by: FUN_8c1fba98
 */
u32 FUN_8c1fd008(int a0, u32 *a1, u32 a2, u32 a3) {
    char *pcVar1;
    u32 *puVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    u32 *ar5_00;
    u32 uVar6;
    int a4;
    u32 uVar7;
    u32 uStack_2c;
    u16 uStack_28;
    u16 uStack_26;

    uVar7 = *(u32 *)(&g_8c26d1e8 + a0 * 4);
    ar5_00 = a1;
    pcVar1 = (char *)FUN_8c1efd14(uVar7, a1);
    puVar2 = (u32 *)FUN_8c1efd26(uVar7);
    if ((*pcVar1 == '\0') || ((*puVar2 & 2) == 0)) {
    override_prt_8c1fd1c8_7a4d7f16:
        thunk_FUN_8c1f6a30();
    } else {
        thunk_FUN_8c1f4646();
        do {
            while (true) {
                FUN_8c1efd14(uVar7, ar5_00);
                ar5_00 = (u32 *)0x2;
                a2 = 0;
                uVar6 = uVar7;
                puVar2 = (u32 *)FUN_8c1efe3a(uVar7, 2, 0, a3);
                if (-1 < (int)puVar2)
                    break;
                thunk_FUN_8c1f6a30();
            }
            while (uVar6 = uVar7, ar5_00 = puVar2, iVar3 = thunk_FUN_8c1f461c(), iVar3 == 0) {
                thunk_FUN_8c1f6a30();
            }
            iVar3 = FUN_8c1efd14(uVar7, ar5_00);
            uVar6 = uVar7;
            iVar4 = thunk_FUN_8c1f4636();
            if (iVar4 != 0) {
                thunk_FUN_8c1f6a30();
                return 0xffffff30;
            }
            iVar4 = *(int *)(iVar3 + 8);
            a4 = iVar4 + 8;
            if (*(char *)(iVar3 + 4) == '\b') {
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 0, a2, a3);
                *a1 = uVar5 & 0xffff;
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 2, a2, a3);
                a1[1] = uVar5 & 0xffff;
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 4, a2, a3);
                a1[2] = uVar5 & 0xffff;
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 6, a2, a3);
                a1[3] = uVar5 & 0xffff;
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 8, a2, a3);
                a1[4] = uVar5 & 0xffff;
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 10, a2, a3);
                a1[5] = uVar5 & 0xffff;
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 0xc, a2, a3);
                a1[6] = uVar5 & 0xffff;
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 0x10, a2, a3);
                a1[7] = uVar5 & 0xffff;
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 0x12, a2, a3);
                uVar6 = 0x14;
                a1[8] = uVar5 & 0xffff;
                uVar5 = (**(code **)(g_8c4783dc + 0xc))(a4, 0x14, a2, a3);
                a1[0xd] = uVar5 & 0xffff;
                a1[0xe] = 0x80;
                a1[9] = (u32) * (u8 *)(iVar4 + 0x16);
                a1[10] = (u32) * (u8 *)(iVar4 + 0x17);
                a1[0xb] = 0x1ff;
                ar5_00 = (u32 *)FUN_8c1efd26(uVar7);
                puVar2 = &uStack_2c;
                iVar3 = FUN_8c1f0074(puVar2, ar5_00);
                if (-1 < iVar3) {
                    uVar7 = 0x200;
                    a1[0xf] = (u32)uStack_26;
                    a1[0x10] = (u32)uStack_28;
                    uVar5 = libgcc_divide_helper_010468(0x200, (u32)uStack_26);
                    a1[0x11] = uVar5;
                    uVar5 = libgcc_divide_helper_010468(uVar7, (u32)uStack_28);
                    a1[0x12] = uVar5;
                    return 0;
                }
                goto override_prt_8c1fd1c8_7a4d7f16;
            }
        } while (*(char *)(iVar3 + 4) == -4);
    }
    return 0xffffff01;
}

/*
 * FUN_8c1fd1e2  0x8c1fd1e2
 * called by: FUN_8c1fbb6c, FUN_8c1fdbaa
 */
u32 FUN_8c1fd1e2(int a0, int a1, int a2) {
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    int ar4_00;
    u32 ar4_01;
    int iVar6;
    int iVar7;

    iVar6 = a0 * 0x148;
    iVar7 = a0;
    ar4_00 = a2;
    iVar2 = FUN_8c1fd550(a0, a1);
    if (iVar2 == 0) {
        thunk_FUN_8c1f6a30();
        return 0xffffff01;
    }
    ar4_01 = *(u32 *)(&g_8c26d1e8 + a0 * 4);
    FUN_8c1efd14(ar4_01, a1);
    iVar7 = 0;
    iVar2 = 0;
    do {
        if (*(int *)(*(int *)(&g_8c4783fc + iVar6) + 0x3c) <= iVar7) {
            return 0;
        }
        while (true) {
            while (true) {
                iVar3 = thunk_FUN_8c1f4636();
                if (iVar3 != 0) {
                    return 0xffffff30;
                }
                a2 = 0;
                a1 = 2;
                uVar5 = ar4_01;
                iVar3 = FUN_8c1efe80(ar4_01, 2, 0, iVar2);
                if (-1 < iVar3)
                    break;
                thunk_FUN_8c1f6a30();
            }
            while (uVar5 = ar4_01, a1 = iVar3, iVar4 = thunk_FUN_8c1f461c(), iVar4 == 0) {
                thunk_FUN_8c1f6a30();
            }
            iVar3 = FUN_8c1efd14(ar4_01, a1);
            iVar4 = thunk_FUN_8c1f4636();
            if (iVar4 != 0) {
                return 0xffffff30;
            }
            cVar1 = *(char *)(iVar3 + 4);
            if (cVar1 == '\b')
                break;
            if (cVar1 != -4) {
                if (cVar1 != -5) {
                    return 0xffffff01;
                }
                return 0xffff0000;
            }
        }
        a2 = *(int *)(*(int *)(&g_8c4783fc + iVar6) + 0x44);
        a1 = *(int *)(iVar3 + 8) + 0xc;
        FUN_8c1fc980(ar4_00, a1, a2);
        iVar2 = iVar2 + 1;
        ar4_00 = ar4_00 + *(int *)(*(int *)(&g_8c4783fc + iVar6) + 0x44);
        iVar7 = iVar7 + 1;
    } while (true);
}

/*
 * FUN_8c1fd312  0x8c1fd312
 * called by: FUN_8c1fbc44
 */
u32 FUN_8c1fd312(int a0, int a1, char *a2, u32 *a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int ar5_00;
    u32 *ar7_00;
    u32 ar4_00;
    char acStack_34[4];
    u32 uStack_30;
    u8 *puStack_2c;
    int iStack_28;
    int iStack_24;

    puStack_2c = &g_8c4783e0 + a0 * 0x148;
    iVar2 = a0;
    ar5_00 = a1;
    iVar1 = FUN_8c1fd550(a0, a1);
    if (iVar1 == 0) {
        thunk_FUN_8c1f6a30();
    } else {
        ar4_00 = *(u32 *)(&g_8c26d1e8 + a0 * 4);
        FUN_8c1efd14(ar4_00, ar5_00);
        uVar3 = *(u32 *)(*(int *)(puStack_2c + 0x1c) + 0x48);
        ar7_00 = NULL;
        for (iStack_24 = 0; iStack_24 < *(int *)(*(int *)(puStack_2c + 0x1c) + 0x40); iStack_24 = iStack_24 + 1) {
            while (true) {
                while (true) {
                    iVar2 = thunk_FUN_8c1f4636();
                    if (iVar2 != 0) {
                        return 0xffffff30;
                    }
                    libgcc_divide_helper_010468(uVar3, 4);
                    ar5_00 = 2;
                    a2 = NULL;
                    uVar4 = ar4_00;
                    a3 = ar7_00;
                    iVar2 = FUN_8c1efeac(ar4_00, 2, 0, ar7_00);
                    if (-1 < iVar2)
                        break;
                    thunk_FUN_8c1f6a30();
                }
                while (uVar4 = ar4_00, ar5_00 = iVar2, iVar1 = thunk_FUN_8c1f461c(), iVar1 == 0) {
                    thunk_FUN_8c1f6a30();
                }
                iStack_28 = FUN_8c1efd14(ar4_00, ar5_00);
                iVar2 = thunk_FUN_8c1f4636();
                if (iVar2 != 0) {
                    return 0xffffff30;
                }
                if (*(char *)(iStack_28 + 4) == '\a')
                    break;
                if (*(char *)(iStack_28 + 4) != -4) {
                    return 0xffffff01;
                }
            }
            ar7_00 = (u32 *)((int)ar7_00 + 1);
        }
        do {
            while (true) {
                iVar2 = thunk_FUN_8c1f4636();
                if (iVar2 != 0) {
                    return 0xffffff30;
                }
                a2 = NULL;
                ar5_00 = 2;
                uVar3 = ar4_00;
                a3 = ar7_00;
                iVar2 = FUN_8c1efee0(ar4_00, 2, 0, ar7_00);
                if (-1 < iVar2)
                    break;
                thunk_FUN_8c1f6a30();
            }
            while (uVar3 = ar4_00, ar5_00 = iVar2, iVar1 = thunk_FUN_8c1f461c(), iVar1 == 0) {
                thunk_FUN_8c1f6a30();
            }
            iVar2 = FUN_8c1efd14(ar4_00, ar5_00);
            iVar1 = thunk_FUN_8c1f4636();
            if (iVar1 != 0) {
                return 0xffffff30;
            }
            if (g_8c273a48 == NULL) {
            LAB_8c1fd4ac:
                acStack_34[0] = *(char *)(iVar2 + 4);
                uStack_30 = *(u32 *)(iVar2 + 0xc);
            } else {
                a2 = acStack_34;
                a3 = &uStack_30;
                ar5_00 = a1;
                iVar1 = (*g_8c273a48)(a0, a1, a2, a3);
                if (iVar1 == 0)
                    goto LAB_8c1fd4ac;
            }
            if (acStack_34[0] == '\a') {
                return 0;
            }
        } while (acStack_34[0] == -4);
        if (acStack_34[0] == -5) {
            return 0xffffff40;
        }
    }
    return 0xffffff01;
}

/*
 * FUN_8c1fd4f0  0x8c1fd4f0
 * called by: FUN_8c20103c, FUN_8c201240
 */
u32 FUN_8c1fd4f0(char *a0, char *a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = 0;
    uVar2 = 0;
    do {
        iVar1 = iVar1 + 1;
        if (*a0 != *a1) {
            uVar2 = 0xffffffff;
        }
        a0 = a0 + 1;
        a1 = a1 + 1;
    } while (iVar1 < 0x200);
    return uVar2;
}

/*
 * FUN_8c1fd510  0x8c1fd510
 * called by: FUN_8c1fdd44, FUN_8c1fe236, FUN_8c1fe350, FUN_8c1fe466, FUN_8c1fe534, FUN_8c1fe646, FUN_8c1fe7aa,
 * FUN_8c1fe8f2 (+22 more)
 */
u32 FUN_8c1fd510(int a0, u32 a1) {
    char *pcVar1;
    u32 *puVar2;
    u32 ar4_00;

    ar4_00 = *(u32 *)(&g_8c26d1e8 + a0 * 4);
    pcVar1 = (char *)FUN_8c1efd14(ar4_00, a1);
    puVar2 = (u32 *)FUN_8c1efd26(ar4_00);
    if ((*pcVar1 != '\0') && ((*puVar2 & 2) != 0)) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c1fd550  0x8c1fd550
 * called by: FUN_8c1fd1e2, FUN_8c1fd312, FUN_8c1fda7e, FUN_8c1fdd44, FUN_8c1fde30, FUN_8c1fe236, FUN_8c1fe350,
 * FUN_8c1fe466 (+26 more)
 */
u32 FUN_8c1fd550(int a0, u32 a1) {
    char *pcVar1;
    u32 *puVar2;
    int iVar3;
    u32 ar4_00;

    ar4_00 = *(u32 *)(&g_8c26d1e8 + a0 * 4);
    pcVar1 = (char *)FUN_8c1efd14(ar4_00, a1);
    puVar2 = (u32 *)FUN_8c1efd26(ar4_00);
    if (((*pcVar1 != '\0') && (iVar3 = thunk_FUN_8c1f4636(), iVar3 == 0)) && ((*puVar2 & 2) != 0)) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c1fd5c0  0x8c1fd5c0
 */
u32 FUN_8c1fd5c0(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12) {
    u32 uVar1;
    u32 *ar6_00;

    if ((a1 & (u32)&s8) == 0) {
        ar6_00 = &s8;
    } else {
        ar6_00 = &s12;
    }
    uVar1 = vsprintf_like(0x8c47e2ec, s4, ar6_00);
    if (g_8c273a50 != NULL) {
        uVar1 = (*g_8c273a50)(0x8c47e2ec, s4, ar6_00, a3);
    }
    return uVar1;
}

/*
 * FUN_8c1fd5f8  0x8c1fd5f8
 * called by: FUN_8c1fd626
 */
u8 *FUN_8c1fd5f8(u32 a0) {
    int *piVar1;
    u8 *puVar2;
    u8 *puVar3;

    piVar1 = 0x8c4783dc;
    *(u32 *)*0x8c4783dc = a0 & 1;
    puVar2 = (&DATA_8c1fc9aa);
    puVar3 = (&DATA_8c1fc99a);
    if ((a0 & 1) == 1) {
        *(u8 **)(*piVar1 + 0xc) = (&DATA_8c1fc990);
        *(u8 **)(*piVar1 + 0x10) = (&DATA_8c1fc9a2);
        puVar3 = (u8 *)0x1;
    } else {
        *(u8 **)(*piVar1 + 0xc) = (&DATA_8c1fc99a);
        *(u8 **)(*piVar1 + 0x10) = puVar2;
    }
    return puVar3;
}

/*
 * FUN_8c1fd626  0x8c1fd626
 * called by: FUN_8c1fbd2c
 */
u32 FUN_8c1fd626(u32 a0, u32 a1, int a2, u32 a3) {
    u32 *puVar1;
    u8 *ar4_00;
    u32 uVar2;
    int iVar3;
    u32 a6;
    u32 uVar4;

    g_8c4783dc = 0x8c4783c8;
    puVar1 = (u32 *)&g_8c478e20;
    do {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
    } while (puVar1 < (u32 *)0x8c478e40);
    memset(0x8c4783c8, 0, 0x14);
    a6 = 0xa40;
    uVar2 = 0;
    memset(&g_8c4783e0, 0, 0xa40);
    FUN_8c1fd5f8(0);
    iVar3 = 0;
    uVar4 = 1;
    g_8c47d2e8 = 0;
    do {
        iVar3 = iVar3 + 1;
        if ((a1 & uVar4) != 0) {
            g_8c47d2e8 = g_8c47d2e8 + 1;
        }
        uVar4 = uVar4 << 1;
    } while (iVar3 < 8);
    if (a2 == 0) {
        FUN_8c1fd720(a0, a1, 0);
        *(u32 *)(g_8c4783dc + 8) = 1;
    } else {
        FUN_8c1fd75c(a0, a1, a2);
        *(u32 *)(g_8c4783dc + 8) = 0;
    }
    g_8c47d2e0 = 8;
    g_8c47d2e4 = 0;
    FUN_8c1fba90(10);
    ar4_00 = &g_8c47d0a0;
    iVar3 = g_8c47d2e0 * 0x48;
    uVar2 = 0;
    memset(&g_8c47d0a0, 0, iVar3);
    FUN_8c1fcffc(ar4_00, uVar2, iVar3, a3, a0);
    return 0;
}

/*
 * FUN_8c1fd720  0x8c1fd720
 * called by: FUN_8c1fd626
 */
int FUN_8c1fd720(int a0, u32 unused_a1, u32 a2) {
    u32 uVar1;
    int iVar2;

    iVar2 = g_8c4783dc;
    if (a0 == 0xf) {
        *(u32 *)(iVar2 + 4) = 0;
    } else {
        if (a0 == 0x21) {
            uVar1 = 1;
        } else {
            if (a0 == 0x41) {
                *(u32 *)(iVar2 + 4) = 2;
                return 0;
            }
            if (a0 != 0x7a) {
                return (int)(int)0xffffff00;
            }
            uVar1 = 3;
        }
        *(u32 *)(iVar2 + 4) = uVar1;
    }
    return 0;
}

/*
 * FUN_8c1fd75c  0x8c1fd75c
 * called by: FUN_8c1fd626
 */
u32 FUN_8c1fd75c(int a0, u32 a1, int a2) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u16 *puVar4;
    u32 uStack_34;
    u16 uStack_24;
    puVar4 = (u16 *)&g_8c4783e0;
    if (a0 == 0xf) {
        *(u32 *)(g_8c4783dc + 4) = 0;
        uVar1 = g_8c273a64;
        iVar2 = g_8c273a54;
    } else {
        if (a0 != 0x21) {
            if (a0 == 0x41) {
                *(u32 *)(g_8c4783dc + 4) = 2;
                uVar1 = g_8c273a6c;
                iVar2 = g_8c273a5c;
            } else {
                if (a0 != 0x7a) {
                    return 0xffffff00;
                }
                *(u32 *)(g_8c4783dc + 4) = 3;
                uVar1 = g_8c273a70;
                iVar2 = g_8c273a60;
            }
            uStack_24 = (u16)uVar1;
            goto LAB_8c1fd7e8;
        }
        *(u32 *)(g_8c4783dc + 4) = 1;
        uVar1 = g_8c273a68;
        iVar2 = g_8c273a58;
    }
    uStack_24 = (u16)uVar1;
LAB_8c1fd7e8:
    uStack_34 = 1;
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        if ((a1 & uStack_34) != 0) {
            *(u8 *)(puVar4 + 1) = 1;
            *puVar4 = (short)iVar3;
            *(int *)(puVar4 + 0xe) = iVar3 * 0x4c + 0x8c47ce40;
            *(u8 *)(puVar4 + 5) = 0;
            *(u8 *)((int)puVar4 + 0xb) = 0;
            *(u8 *)(puVar4 + 6) = 0;
            *(int *)(puVar4 + 0x16) = a2;
            *(int *)(puVar4 + 0x10) = a2 + 0x20;
            *(int *)(puVar4 + 0x12) = a2 + 0x220;
            *(int *)(puVar4 + 0x14) = (iVar2 + 1) * 0x200 + a2 + 0x20;
            *(u8 *)(puVar4 + 4) = 0;
            *(u8 *)((int)puVar4 + 9) = 0;
            puVar4[7] = 1;
            puVar4[8] = (short)iVar2;
            puVar4[9] = uStack_24;
            puVar4[10] = 0x20;
            memset(puVar4 + 0x1c, 0, 0x10);
            memset(puVar4 + 0x24, 0, 0x100);
            memset(*(u32 *)(puVar4 + 0x16), 0x47, 0x20);
            memset(*(u32 *)(puVar4 + 0x10), 0x53, 0x20);
            memset(*(u32 *)(puVar4 + 0x12), 0x46, 0x20);
            memset(*(u32 *)(puVar4 + 0x14), 0x44, 0x20);
            a2 = a2 + a0 * 0x200 + 0x20;
        }
        uStack_34 = uStack_34 << 1;
        puVar4 = puVar4 + 0xa4;
    }
    return 0;
}

/*
 * FUN_8c1fd8b2  0x8c1fd8b2
 */
u32 FUN_8c1fd8b2(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int ar4_00;

    ar4_00 = a0 * 0x148 + 0x8c4783e0;
    memset(ar4_00, 0, (int)0x148);
    *(int *)(ar4_00 + 0x1c) = a0 * 0x4c + 0x8c47ce40;
    return 0;
}

/*
 * FUN_8c1fd8fc  0x8c1fd8fc
 * called by: FUN_8c1fc93c
 */
u32 FUN_8c1fd8fc(int a0, int a1, int a2) {
    int iVar1;
    int ar7_00;
    int iVar2;
    int iVar3;

    if ((*(int *)(g_8c4783dc + 8) != 0) && (a1 != 0)) {
        iVar3 = a0 * 0x148;
        iVar1 = *(int *)(iVar3 + 0x8c4783e4);
        ar7_00 = g_8c273a54;
        iVar2 = g_8c273a64;
        if (((iVar1 == 0) || (((ar7_00 = g_8c273a58, iVar2 = g_8c273a68,
                                iVar1 == 1 || (ar7_00 = g_8c273a5c, iVar2 = g_8c273a6c, iVar1 == 2)) ||
                               (ar7_00 = g_8c273a60, iVar2 = g_8c273a70, iVar1 == 3)))) &&
            ((ar7_00 + iVar2 + 1) * 0x200 + 0x20 <= a2)) {
            (&g_8c4783e2)[iVar3] = 1;
            *(short *)(&g_8c4783e0 + iVar3) = (short)a0;
            *(int *)(&g_8c4783fc + iVar3) = a0 * 0x4c + 0x8c47ce40;
            (&g_8c4783ea)[iVar3] = 0;
            (&g_8c4783eb)[iVar3] = 0;
            (&g_8c4783ec)[iVar3] = 0;
            *(int *)(&g_8c47840c + iVar3) = a1;
            *(int *)(&g_8c478400 + iVar3) = a1 + 0x20;
            *(int *)(&g_8c478404 + iVar3) = a1 + 0x220;
            *(int *)(&g_8c478408 + iVar3) = (ar7_00 + 1) * 0x200 + a1 + 0x20;
            *(u16 *)(&g_8c4783ee + iVar3) = 1;
            *(short *)(&g_8c4783f0 + iVar3) = (short)ar7_00;
            *(short *)(&g_8c4783f2 + iVar3) = (short)iVar2;
            *(u16 *)(&g_8c4783f4 + iVar3) = 0x20;
            memset(iVar3 + 0x8c478418, 0, 0x10);
            memset(iVar3 + 0x8c478428, 0, 0x100);
            memset(*(u32 *)(&g_8c47840c + iVar3), 0x47, 0x20);
            memset(*(u32 *)(&g_8c478400 + iVar3), 0x53, 0x20);
            memset(*(u32 *)(&g_8c478404 + iVar3), 0x46, 0x20);
            memset(*(u32 *)(&g_8c478408 + iVar3), 0x44, 0x20);
            *(u32 *)(*(int *)(&g_8c4783fc + iVar3) + 0x30) = *(u32 *)(*(int *)(&g_8c4783fc + iVar3) + 0x1c);
            (&g_8c4783e8)[iVar3] = 1;
            (&g_8c4783e9)[iVar3] = 1;
            return 0;
        }
    }
    return 0xffffff00;
}

/*
 * FUN_8c1fda04  0x8c1fda04
 * called by: FUN_8c1fbdfc, FUN_8c1fbe12, FUN_8c1fbe1a
 */
u32 FUN_8c1fda04(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *ar4_00;
    u32 ar5_00;
    u32 ar6_00;

    ar4_00 = &g_8c4783e0;
    ar6_00 = 0xa40;
    ar5_00 = 0;
    memset(&g_8c4783e0, 0, 0xa40);
    noop_1fd004();
    return 0;
}

/*
 * FUN_8c1fda44  0x8c1fda44
 * called by: FUN_8c1fbe84
 */
u32 FUN_8c1fda44(void) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;

    puVar1 = (&FUN_8c1fd510);
    iVar5 = 0;
    uVar4 = 1;
    uVar3 = 0;
    do {
        iVar2 = (*(code *)puVar1)(iVar5);
        iVar5 = iVar5 + 1;
        if (iVar2 != 0) {
            uVar3 = uVar3 | uVar4;
        }
        uVar4 = uVar4 << 1;
    } while (iVar5 < 8);
    return uVar3;
}

/*
 * FUN_8c1fda58  0x8c1fda58
 */
u32 FUN_8c1fda58(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    int unaff_r11;
    u32 unaff_r12;
    u32 unaff_r13;
    int unaff_r14;

    puVar1 = (&FUN_8c1fd510);
    do {
        iVar2 = (*(code *)puVar1)(unaff_r14, a1, a2, a3);
        unaff_r14 = unaff_r14 + 1;
        if (iVar2 != 0) {
            unaff_r12 = unaff_r12 | unaff_r13;
        }
        unaff_r13 = unaff_r13 << 1;
    } while (unaff_r14 < unaff_r11);
    return unaff_r12;
}

/*
 * FUN_8c1fda7e  0x8c1fda7e
 */
u32 FUN_8c1fda7e(int a0, u32 a1) {
    int iVar1;
    int iVar2;

    iVar2 = a0 * 0x148 + 0x8c4783e0;
    iVar1 = FUN_8c1fd550(a0, a1);
    if ((iVar1 != 0) && (*(char *)(iVar2 + 8) != '\0')) {
        return 1;
    }
    return 0;
}

/*
 * FUN_8c1fdab0  0x8c1fdab0
 */
u32 FUN_8c1fdab0(int a0) {
    u32 uVar1;
    int iVar2;
    int ar6_00;
    u32 ar7_00;
    int iVar3;

    iVar3 = a0 * 0x148;
    if (*(int *)(g_8c4783dc + 8) == 1) {
        uVar1 = FUN_8c1fdc80(a0);
        return uVar1;
    }
    if ((&g_8c4783e2)[iVar3] != '\0') {
        *(u32 *)(iVar3 + 0x8c478410) = 1;
        *(u32 *)(iVar3 + 0x8c478414) = *(u32 *)(&g_8c273a78 + *(int *)(iVar3 + 0x8c4783e4) * 0x50);
        ar6_00 = *(int *)(iVar3 + 0x8c478410);
        ar7_00 = *(u32 *)(iVar3 + 0x8c478414);
        *(int *)(iVar3 + 0x8c478410) = ar6_00 + 1;
        FUN_8c1fcdc2(a0, *(u32 *)(a0 * 0x80 + 0x8c475fc8), ar6_00, ar7_00);
        uVar1 = *(u32 *)(&g_8c4783fc + iVar3);
        iVar2 = FUN_8c1fba98(a0, uVar1, ar6_00, ar7_00);
        if (-1 < iVar2) {
            iVar2 = FUN_8c200cf4(&g_8c4783e0 + iVar3);
            if (iVar2 < 0) {
                return 0xffffff83;
            }
            *(u32 *)(*(int *)(&g_8c4783fc + iVar3) + 0x30) = *(u32 *)(*(int *)(&g_8c4783fc + iVar3) + 0x1c);
            (&g_8c4783e9)[iVar3] = 1;
            (&g_8c4783e8)[iVar3] = 1;
            (&g_8c4783ea)[iVar3] = 0;
            (&g_8c4783eb)[iVar3] = 0;
            (&g_8c4783ec)[iVar3] = 0;
            uVar1 = FUN_8c200a00(a0, uVar1);
            return uVar1;
        }
        (&g_8c4783e9)[iVar3] = 0;
        (&g_8c4783e8)[iVar3] = 0;
    }
    return 0xffffff01;
}

/*
 * FUN_8c1fdbaa  0x8c1fdbaa
 */
u32 FUN_8c1fdbaa(int a0) {
    int iVar1;
    u32 uVar2;
    int ar6_00;
    u32 ar7_00;
    int iVar3;

    iVar3 = a0 * 0x148;
    *(int *)(&g_8c4783fc + iVar3) = a0 * 0x4c + 0x8c47ce40;
    *(u32 *)(iVar3 + 0x8c478410) = 1;
    *(u32 *)(iVar3 + 0x8c478414) = *(u32 *)(&g_8c273abc + *(int *)(iVar3 + 0x8c4783e4) * 0x50);
    ar7_00 = *(u32 *)(iVar3 + 0x8c478414);
    ar6_00 = *(int *)(iVar3 + 0x8c478410);
    *(int *)(iVar3 + 0x8c478410) = ar6_00 + 1;
    FUN_8c1fcdc2(a0, *(u32 *)(a0 * 0x80 + 0x8c475fc8), ar6_00, ar7_00);
    uVar2 = *(u32 *)(&g_8c4783fc + iVar3);
    iVar1 = FUN_8c1fba98(a0, uVar2, ar6_00, ar7_00);
    if (iVar1 < 0) {
        (&g_8c4783e9)[iVar3] = 0;
        (&g_8c4783e8)[iVar3] = 0;
    LAB_8c1fdc3a:
        uVar2 = 0xffffff01;
    } else {
        iVar1 = FUN_8c200cf4(&g_8c4783e0 + iVar3);
        if (-1 < iVar1) {
            *(u32 *)(*(int *)(&g_8c4783fc + iVar3) + 0x30) = *(u32 *)(*(int *)(&g_8c4783fc + iVar3) + 0x1c);
            iVar1 = FUN_8c1fd1e2(a0, 0, 0x8c47e4ec);
            if (iVar1 < 0)
                goto LAB_8c1fdc3a;
            (&g_8c4783e9)[iVar3] = 1;
            (&g_8c4783ea)[iVar3] = 0;
            (&g_8c4783eb)[iVar3] = 0;
            (&g_8c4783ec)[iVar3] = 0;
            iVar1 = *(int *)(iVar3 + 0x8c4783e4);
            if (iVar1 == 0) {
                return 0xf;
            }
            if (iVar1 == 1) {
                return 0x21;
            }
            if (iVar1 == 2) {
                return 0x41;
            }
            if (iVar1 == 3) {
                return 0x7a;
            }
        }
        uVar2 = 0xffffff83;
    }
    return uVar2;
}

/*
 * FUN_8c1fdc80  0x8c1fdc80
 * called by: FUN_8c1fdab0
 */
u32 FUN_8c1fdc80(int a0) {
    u32 uVar1;
    int ar6_00;
    u32 ar7_00;
    int iVar2;

    iVar2 = a0 * 0x148;
    if ((&g_8c4783e2)[iVar2] == '\0') {
        return 0xffffff01;
    }
    *(u32 *)(iVar2 + 0x8c478410) = 1;
    *(u32 *)(iVar2 + 0x8c478414) = *(u32 *)(&g_8c273a78 + *(int *)(iVar2 + 0x8c4783e4) * 0x50);
    ar6_00 = *(int *)(iVar2 + 0x8c478410);
    ar7_00 = *(u32 *)(iVar2 + 0x8c478414);
    *(int *)(iVar2 + 0x8c478410) = ar6_00 + 1;
    uVar1 = *(u32 *)(a0 * 0x80 + 0x8c475fc8);
    FUN_8c1fcdc2(a0, uVar1, ar6_00, ar7_00);
    uVar1 = FUN_8c200a00(a0, uVar1);
    return uVar1;
}

/*
 * FUN_8c1fdd1a  0x8c1fdd1a
 * called by: FUN_8c1fc04e, FUN_8c1fdd44, FUN_8c1fe236, FUN_8c1fe350, FUN_8c1fe466, FUN_8c1fe534, FUN_8c1fe646,
 * FUN_8c1fe7aa (+23 more)
 */
int FUN_8c1fdd1a(int a0) {
    int iVar1;

    iVar1 = a0 * 0x148 + 0x8c4783e0;
    if (*(char *)(iVar1 + 2) == '\0') {
        return (int)(int)0xffffff01;
    }
    *(u8 *)(iVar1 + 9) = 0;
    *(u8 *)(iVar1 + 8) = 0;
    *(u8 *)(iVar1 + 10) = 0;
    *(u8 *)(iVar1 + 0xb) = 0;
    *(u8 *)(iVar1 + 0xc) = 0;
    *(u32 *)(iVar1 + 4) = 0;
    return 0;
}

/*
 * FUN_8c1fdd44  0x8c1fdd44
 * called by: FUN_8c1fc592
 */
int FUN_8c1fdd44(int a0, u32 a1, int *a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 ar5_00;
    u8 *ar6_01;
    u8 auStack_38[4];
    int iStack_34;
    u16 uStack_30;
    u8 uStack_2e;
    u8 auStack_18[8];
    int iStack_10;

    iVar3 = (int)0x148;
    iVar4 = a0 * iVar3 + 0x8c4783e0;
    if (*(char *)(iVar4 + 2) != '\0') {
        ar5_00 = a1;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, ar5_00);
            if ((iVar2 != 0) && (*(char *)(a0 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
                iVar3 = thunk_FUN_8c1ffcc2();
                if (iVar3 < 0) {
                    return (int)(int)0xffffff03;
                }
                ar6_01 = auStack_38;
                iVar3 = FUN_8c200566(a0, a1, ar6_01);
                if (iVar3 < 0) {
                    return (int)(int)0xffffff05;
                }
                iVar3 = (int)0xcc;
                *a2 = iStack_10 * (*(int *)(*(int *)(iVar4 + 0x1c) + 0x2c) + 1);
                *(short *)(a2 + 1) = (short)iStack_10;
                *(char *)((int)a2 + 6) = (char)iStack_34;
                *(u8 *)((int)a2 + 7) = uStack_2e;
                *(u16 *)(a2 + 2) = uStack_30;
                puVar1 = (&FUN_8c200c82);
                *(bool *)((int)a2 + 6) = iStack_34 == iVar3;
                (*(code *)puVar1)((int)a2 + 10, auStack_18, ar6_01, a3);
                return 0;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fde30  0x8c1fde30
 */
u32 FUN_8c1fde30(int a0, u8 *a1, u32 a2, u32 a3, int s0) {
    u8 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u8 *puVar5;
    u8 *ar5_00;
    u32 uVar6;
    u32 uVar7;
    u8 *a7;
    int iVar8;
    int iVar9;
    u8 auStack_28[12];

    iVar9 = a0 * 0x148;
    if ((&g_8c4783e2)[iVar9] != '\0') {
        ar5_00 = &g_8c273a74;
        uVar7 = a2;
        uVar3 = a3;
        if (s0 == 0) {
            *(u32 *)(iVar9 + 0x8c478410) = 1;
            uVar6 = libgcc_divide_helper_010468(*(u32 *)(&g_8c273a80 + *(int *)(iVar9 + 0x8c4783e4) * 0x50), 10);
            *(u32 *)(iVar9 + 0x8c478414) = uVar6;
        } else {
            *(u32 *)(iVar9 + 0x8c478410) = 1;
            iVar4 = *(int *)(iVar9 + 0x8c4783e4) * 0x50;
            ar5_00 = &g_8c273a74 + iVar4;
            *(u32 *)(iVar9 + 0x8c478414) = *(u32 *)(&g_8c273a80 + iVar4);
        }
        iVar4 = FUN_8c1fd550(a0, ar5_00);
        if ((iVar4 != 0) && ((&g_8c4783e8)[iVar9] != '\0')) {
            iVar8 = a0 * 0x200 + 0x8c47d2ec;
            memset(*(u32 *)(&g_8c478400 + iVar9), 0, 0x200);
            uVar7 = *(u32 *)(&g_8c478400 + iVar9);
            iVar4 = FUN_8c1fbc44(a0, *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 8), uVar7, uVar3);
            if (iVar4 < 0) {
                if (iVar4 == -0xc0) {
                    return 0xffffff81;
                }
            } else {
                uVar6 = *(u32 *)(&g_8c4783fc + iVar9);
                iVar4 = FUN_8c1fba98(a0, uVar6, uVar7, uVar3);
                if (-1 < iVar4) {
                    iVar4 = FUN_8c200cf4(&g_8c4783e0 + iVar9);
                    if (iVar4 < 0) {
                        return 0xffffff83;
                    }
                    *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 0x30) = *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 0x1c);
                    memset(*(u32 *)(&g_8c478400 + iVar9), 0, 0x200);
                    memset(*(int *)(&g_8c478400 + iVar9) + 0x10, 0x20, 0x20);
                    for (iVar4 = 0; iVar4 < 0x20; iVar4 = iVar4 + 1) {
                        uVar1 = *a1;
                        a1 = a1 + 1;
                        *(u8 *)(*(int *)(&g_8c478400 + iVar9) + iVar4 + 0x10) = uVar1;
                    }
                    FUN_8c200bfc(auStack_28, a3, 0x20);
                    puVar5 = (u8 *)(*(int *)(&g_8c478400 + iVar9) + 0x30);
                    a7 = auStack_28;
                    for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
                        uVar1 = *a7;
                        a7 = a7 + 1;
                        *puVar5 = uVar1;
                        puVar5 = puVar5 + 1;
                    }
                    iVar4 = *(int *)(&g_8c4783fc + iVar9);
                    uVar7 = *(u32 *)(iVar4 + 0xc);
                    uVar3 = *(u32 *)(iVar4 + 0x14);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x42, *(u32 *)(iVar4 + 4), a7);
                    *(char *)(*(int *)(&g_8c478400 + iVar9) + 0x4e) = (char)a2;
                    *(u8 *)(*(int *)(&g_8c478400 + iVar9) + 0x4f) = 0;
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x40,
                                                     **(u32 **)(&g_8c4783fc + iVar9), a7);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x4a, uVar3, a7);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x46, uVar7, a7);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x4c,
                                                     *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 0x18), a7);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x48,
                                                     *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 0x10), a7);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x50,
                                                     *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 0x1c), a7);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x52,
                                                     *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 0x20), a7);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x54,
                                                     *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 0x34), a7);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x56,
                                                     *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 0x38), a7);
                    (**(code **)(g_8c4783dc + 0x10))(*(u32 *)(&g_8c478400 + iVar9), 0x44,
                                                     **(u32 **)(&g_8c4783fc + iVar9), a7);
                    memset(iVar8, 0, 0x200);
                    iVar4 = 0;
                    while (true) {
                        if (**(int **)(&g_8c4783fc + iVar9) <= iVar4) {
                            uVar7 = 0;
                            iVar4 = *(int *)(*(int *)(&g_8c4783fc + iVar9) + 0x18) << 9;
                            memset(*(u32 *)(&g_8c478408 + iVar9), 0, iVar4);
                            FUN_8c200226(a0, uVar7, iVar4, a7);
                            FUN_8c20099e(a0, *(u32 *)(*(int *)(&g_8c4783fc + iVar9) + 8), 0xfffa);
                            for (iVar4 = 0; iVar4 < *(int *)(*(int *)(&g_8c4783fc + iVar9) + 0x10); iVar4 = iVar4 + 1) {
                                FUN_8c20099e(a0, *(int *)(*(int *)(&g_8c4783fc + iVar9) + 0xc) + iVar4, 0xfffa);
                            }
                            uVar7 = 0xfffa;
                            iVar4 = *(int *)(*(int *)(&g_8c4783fc + iVar9) + 8);
                            FUN_8c20099e(a0, iVar4, 0xfffa);
                            for (iVar8 = 0; iVar8 < *(int *)(*(int *)(&g_8c4783fc + iVar9) + 0x10); iVar8 = iVar8 + 1) {
                                uVar7 = 0xfffa;
                                iVar4 = *(int *)(*(int *)(&g_8c4783fc + iVar9) + 0xc) + iVar8;
                                FUN_8c20099e(a0, iVar4, 0xfffa);
                            }
                            FUN_8c2007f0(a0, iVar4, uVar7);
                            uVar7 = 0x55;
                            uVar3 = 0x10;
                            memset(*(u32 *)(&g_8c478400 + iVar9), 0x55, 0x10);
                            FUN_8c20065a(a0);
                            uVar7 = 0;
                            uVar3 = 0x10;
                            memset(*(u32 *)(&g_8c478400 + iVar9), 0, 0x10);
                            (&g_8c4783eb)[iVar9] = 0;
                            (&g_8c4783ec)[iVar9] = 0;
                            (&g_8c4783ea)[iVar9] = 0;
                            uVar7 = FUN_8c200a00(a0, uVar7);
                            return uVar7;
                        }
                        if (s0 == 0) {
                            iVar2 = 0;
                        } else {
                            iVar2 = FUN_8c1fbc44(a0, iVar4, iVar8, a7);
                        }
                        if (iVar2 == -0xff)
                            break;
                        if (iVar2 == -0xc0) {
                            uVar7 = 0xffff;
                        } else {
                            uVar7 = 0xfffc;
                        }
                        FUN_8c20099e(a0, iVar4, uVar7);
                        iVar4 = iVar4 + 1;
                    }
                }
            }
        }
    }
    return 0xffffff01;
}

/*
 * FUN_8c1fe15a  0x8c1fe15a
 * called by: FUN_8c200226, FUN_8c200346
 */
int FUN_8c1fe15a(int a0, u32 a1) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar3 = a0 * 0x148 + 0x8c4783e0;
    iVar1 = *(int *)(iVar3 + 0x1c);
    iVar2 = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 0x10);
    iVar1 = FUN_8c1fe1e4(a0, (int)(short)a1, iVar2 - *(int *)(iVar1 + 0x18), iVar2 + -1);
    if ((iVar1 < 1) &&
        (iVar2 = *(int *)(iVar3 + 0x1c), iVar1 = *(int *)(iVar2 + 0x1c),
         iVar1 = FUN_8c1fe1e4(a0, (int)(short)a1, iVar1, iVar1 + *(int *)(iVar2 + 0x20) + -1), iVar1 < 1)) {
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * FUN_8c1fe1e4  0x8c1fe1e4
 * called by: FUN_8c1fe15a, FUN_8c20075a, FUN_8c200772
 */
u32 FUN_8c1fe1e4(int a0, u32 a1, int a2, int a3) {
    int *piVar1;
    u32 uVar2;
    int a6;
    int a7;
    int iVar3;

    piVar1 = 0x8c4783dc;
    iVar3 = a0 * 0x148 + 0x8c4783e0;
    a6 = a2;
    a7 = a3;
    while (true) {
        if (a3 < a2) {
            return 0xffffffff;
        }
        uVar2 = (**(code **)(*piVar1 + 0xc))(*(u32 *)(iVar3 + 0x24), a3 << 1, a6, a7);
        if ((uVar2 & 0xffff) == (u32)(u16)a1)
            break;
        a3 = a3 + -1;
    }
    return a3;
}

/*
 * FUN_8c1fe236  0x8c1fe236
 * called by: FUN_8c1fc13c
 */
int FUN_8c1fe236(int a0, int a1) {
    u8 uVar1;
    int iVar2;
    u32 uVar3;
    u8 *puVar4;
    int ar5_00;
    u8 *puVar5;
    u8 *ar6_00;
    int iVar6;
    int iVar7;
    u8 auStack_1c[8];
    u8 auStack_14[4];

    iVar6 = (int)0x148;
    iVar7 = a0 * iVar6 + 0x8c4783e0;
    if (*(char *)(iVar7 + 2) != '\0') {
        ar5_00 = a1;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, ar5_00);
            if ((iVar2 != 0) && (*(char *)(a0 * iVar6 + 0x8c4783e0 + 8) != '\0')) {
                iVar6 = thunk_FUN_8c1ffcc2();
                if (iVar6 < 0) {
                    return (int)(int)0xffffff03;
                }
                for (iVar6 = 0; iVar6 < 0x20; iVar6 = iVar6 + 1) {
                    *(u8 *)(a1 + iVar6) = *(u8 *)(*(int *)(iVar7 + 0x20) + iVar6 + 0x10);
                }
                puVar5 = (u8 *)(*(int *)(iVar7 + 0x20) + 0x30);
                ar6_00 = auStack_14;
                for (puVar4 = auStack_1c; puVar4 < ar6_00; puVar4 = puVar4 + 1) {
                    uVar1 = *puVar5;
                    puVar5 = puVar5 + 1;
                    *puVar4 = uVar1;
                }
                FUN_8c200c82(a1 + 0x30, auStack_1c);
                *(short *)(a1 + 0x20) = (short)**(u32 **)(iVar7 + 0x1c) + 1;
                *(short *)(a1 + 0x22) = (short)*(u32 *)(*(int *)(iVar7 + 0x1c) + 0x30);
                uVar3 = FUN_8c1fe350(a0, 0);
                *(short *)(a1 + 0x26) = (short)uVar3;
                *(u16 *)(a1 + 0x24) = *(u16 *)(a1 + 0x26);
                *(short *)(a1 + 0x28) = (short)*(u32 *)(*(int *)(iVar7 + 0x1c) + 0x38);
                uVar3 = FUN_8c1fe350(a0, 1);
                *(short *)(a1 + 0x2a) = (short)uVar3;
                *(short *)(a1 + 0x2c) = (short)*(u32 *)(*(int *)(iVar7 + 0x1c) + 0x2c) + 1;
                *(u16 *)(a1 + 0x2e) = (u16) * (u8 *)(*(int *)(iVar7 + 0x20) + 0x4e);
                return 0;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fe350  0x8c1fe350
 * called by: FUN_8c1fc16a, FUN_8c1fe236, FUN_8c200f2c, FUN_8c20112c
 */
u32 FUN_8c1fe350(int a0, int a1) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;

    iVar5 = a0 * 0x148;
    if ((&g_8c4783e2)[iVar5] != '\0') {
        iVar2 = a1;
        iVar1 = FUN_8c1fd510(a0, a1);
        if (iVar1 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar1 = FUN_8c1fd550(a0, iVar2);
            if ((iVar1 != 0) && ((&g_8c4783e8)[iVar5] != '\0')) {
                iVar2 = thunk_FUN_8c1ffcc2();
                if (iVar2 < 0) {
                    return 0xffffff03;
                }
                iVar2 = 0;
                if (a1 == 1) {
                    iVar2 = 0;
                    while (true) {
                        if (*(int *)(*(int *)(&g_8c4783fc + iVar5) + 0x38) <= iVar2) {
                            return iVar2;
                        }
                        uVar3 = FUN_8c2009d0(a0, iVar2);
                        if ((uVar3 & 0xffff) != 0xfffc)
                            break;
                        iVar2 = iVar2 + 1;
                    }
                    return iVar2;
                }
                if (g_8c26d208 != 0) {
                    for (iVar1 = 0; iVar1 < *(int *)(*(int *)(&g_8c4783fc + iVar5) + 0x30); iVar1 = iVar1 + 1) {
                        uVar3 = FUN_8c2009d0(a0, iVar1);
                        if (((uVar3 & 0xffff) == 0xfffc) && (iVar4 = FUN_8c20093a(a0, iVar1), -1 < iVar4)) {
                            iVar2 = iVar2 + 1;
                        }
                    }
                    return iVar2;
                }
                iVar1 = 0;
                while (iVar1 < *(int *)(*(int *)(&g_8c4783fc + iVar5) + 0x30)) {
                    uVar3 = FUN_8c2009d0(a0, iVar1);
                    iVar1 = iVar1 + 1;
                    if ((uVar3 & 0xffff) == 0xfffc) {
                        iVar2 = iVar2 + 1;
                    }
                }
                return iVar2;
            }
        }
    }
    return 0xffffff01;
}

/*
 * FUN_8c1fe466  0x8c1fe466
 */
int FUN_8c1fe466(int a0, u32 a1) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar5 = (int)0x148;
    iVar6 = a0 * iVar5 + 0x8c4783e0;
    if (*(char *)(iVar6 + 2) != '\0') {
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, a1);
            if ((iVar2 != 0) && (*(char *)(a0 * iVar5 + 0x8c4783e0 + 8) != '\0')) {
                iVar5 = thunk_FUN_8c1ffcc2();
                uVar1 = 0xfffc;
                if (iVar5 < 0) {
                    return (int)(int)0xffffff03;
                }
                iVar5 = 0;
                iVar2 = 0;
                while (iVar4 = *(int *)(iVar6 + 0x1c), iVar4 = *(int *)(iVar4 + 0x10) * (*(int *)(iVar4 + 0x2c) + 1),
                       iVar2 < (int)(iVar4 + (u32)(iVar4 < 0)) >> 1) {
                    uVar3 = FUN_8c2009d0(a0, iVar2);
                    iVar2 = iVar2 + 1;
                    if ((uVar3 & 0xffff) == uVar1) {
                        iVar5 = iVar5 + 1;
                    }
                }
                return iVar5;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fe534  0x8c1fe534
 * called by: FUN_8c1fc286, FUN_8c200e8a, FUN_8c20103c, FUN_8c201240, FUN_8c2013c2
 */
int FUN_8c1fe534(int a0, u32 a1, int *a2) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u8 *ar6_01;
    u8 auStack_40[8];
    u16 uStack_38;
    u8 uStack_36;
    u32 uStack_34;
    u32 uStack_18;

    iVar1 = 0x8c4783e2;
    *a2 = 0;
    if (*(char *)(iVar1 + a0 * 0x148) != '\0') {
        uVar3 = a1;
        iVar1 = FUN_8c1fd510(a0, a1);
        if (iVar1 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar1 = FUN_8c1fd550(a0, uVar3);
            if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + a0 * 0x148) != '\0')) {
                iVar1 = thunk_FUN_8c1ffcc2();
                if (iVar1 < 0) {
                    return (int)(int)0xffffff03;
                }
                iVar1 = ret_const_0_200aec();
                if (-1 < iVar1) {
                    uVar3 = a1;
                    iVar1 = FUN_8c200b10(a0, a1);
                    if (iVar1 < 0) {
                        return (int)(int)0xffffff41;
                    }
                    iVar1 = FUN_8c200ab6();
                    if (iVar1 != 0) {
                        ar6_01 = auStack_40;
                        iVar2 = FUN_8c200566(a0, a1, ar6_01);
                        g_8c47d2e4 = iVar2;
                        if (iVar2 < 0) {
                            FUN_8c200ae4();
                            return (int)(int)0xffffff05;
                        }
                        *(u32 *)(iVar1 + 4) = 0;
                        *(u32 *)(iVar1 + 0x34) = uStack_18;
                        *(u32 *)(iVar1 + 0x38) = uStack_34;
                        *(u32 *)(iVar1 + 0x40) = uStack_34;
                        *(int *)(iVar1 + 0x28) = a0;
                        *(u16 *)(iVar1 + 2) = uStack_38;
                        *(u8 *)(iVar1 + 1) = uStack_36;
                        *a2 = iVar1;
                        return 0;
                    }
                }
                return (int)(int)0xffffff07;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fe646  0x8c1fe646
 * called by: FUN_8c1fc2ee, FUN_8c20112c, FUN_8c201240
 */
int FUN_8c1fe646(int a0, char *a1, u32 a2, int *a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    char *pcVar6;
    u32 uVar7;
    u8 *ar6_00;
    int *ar7_00;
    u8 auStack_44[48];

    iVar4 = (int)0x148;
    iVar5 = a0 * iVar4 + 0x8c4783e0;
    *a3 = 0;
    if (*(char *)(iVar5 + 2) != '\0') {
        pcVar6 = a1;
        uVar7 = a2;
        ar7_00 = a3;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, pcVar6);
            if ((iVar2 != 0) && (*(char *)(a0 * iVar4 + 0x8c4783e0 + 8) != '\0')) {
                iVar4 = thunk_FUN_8c1ffcc2();
                if (iVar4 < 0) {
                    return (int)(int)0xffffff03;
                }
                if ((*(int *)(*(int *)(iVar5 + 0x1c) + 0x38) != 0) && (iVar4 = ret_const_0_200aec(), -1 < iVar4)) {
                    ar6_00 = auStack_44;
                    iVar4 = FUN_8c200566(a0, a1, ar6_00);
                    if (-1 < iVar4) {
                        return (int)(int)0xffffff06;
                    }
                    iVar4 = FUN_8c2005d6(a0, auStack_44);
                    if (-1 < iVar4) {
                        return (int)(int)0xffffff09;
                    }
                    uVar7 = 0;
                    uVar3 = FUN_8c2009d0(a0, 0);
                    if (((uVar3 & 0xffff) == 0xfffc) && (iVar4 = FUN_8c200614(a0), -1 < iVar4)) {
                        iVar5 = iVar4;
                        FUN_8c200a84(a0, iVar4);
                        iVar5 = FUN_8c200ab6();
                        uVar7 = 0xffff;
                        if (iVar5 == 0) {
                            return (int)(int)0xffffff07;
                        }
                        *(u32 *)(iVar5 + 8) = 1;
                        *(u32 *)(iVar5 + 4) = 2;
                        *(int *)(iVar5 + 0x2c) = iVar4;
                        *(u32 *)(iVar5 + 0x38) = uVar7;
                        *(u32 *)(iVar5 + 0x30) = 0;
                        *(int *)(iVar5 + 0x28) = a0;
                        *(u16 *)(iVar5 + 2) = 1;
                        *(u8 *)(iVar5 + 1) = 0;
                        pcVar6 = (char *)(iVar5 + 0x10);
                        for (; puVar1 = (&FUN_8c200bfc), *a1 != '\0'; a1 = a1 + 1) {
                            *pcVar6 = *a1;
                            pcVar6 = pcVar6 + 1;
                        }
                        *pcVar6 = '\0';
                        (*(code *)puVar1)(iVar5 + 0x20, a2, ar6_00, ar7_00);
                        *a3 = iVar5;
                        return 0;
                    }
                }
                return (int)(int)0xffffff08;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fe7aa  0x8c1fe7aa
 * called by: FUN_8c1fc2b8, FUN_8c200f2c, FUN_8c20103c
 */
int FUN_8c1fe7aa(int a0, char *a1, u32 a2, int *a3) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    char *pcVar4;
    u32 uVar5;
    u8 *ar6_00;
    int *ar7_00;
    u8 auStack_44[48];

    iVar2 = 0x8c4783e2;
    *a3 = 0;
    if (*(char *)(iVar2 + a0 * 0x148) != '\0') {
        pcVar4 = a1;
        uVar5 = a2;
        ar7_00 = a3;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, pcVar4);
            if ((iVar2 != 0) && (*(char *)(0x8c4783e8 + a0 * 0x148) != '\0')) {
                iVar2 = thunk_FUN_8c1ffcc2();
                if (iVar2 < 0) {
                    return (int)(int)0xffffff03;
                }
                iVar2 = ret_const_0_200aec();
                if (-1 < iVar2) {
                    ar6_00 = auStack_44;
                    pcVar4 = a1;
                    iVar2 = FUN_8c200566(a0, a1, ar6_00);
                    if ((-1 < iVar2) && (pcVar4 = a1, iVar2 = FUN_8c1ff478(a0, a1, ar6_00, ar7_00), iVar2 < 0)) {
                        return iVar2;
                    }
                    iVar2 = FUN_8c200614(a0);
                    if (-1 < iVar2) {
                        iVar3 = iVar2;
                        FUN_8c200a84(a0, iVar2);
                        iVar3 = FUN_8c200ab6();
                        uVar5 = 0xffff;
                        if (iVar3 == 0) {
                            return (int)(int)0xffffff07;
                        }
                        *(u32 *)(iVar3 + 8) = 0;
                        *(u32 *)(iVar3 + 4) = 1;
                        *(int *)(iVar3 + 0x2c) = iVar2;
                        *(u32 *)(iVar3 + 0x38) = uVar5;
                        *(u32 *)(iVar3 + 0x30) = 0;
                        *(int *)(iVar3 + 0x28) = a0;
                        *(u16 *)(iVar3 + 2) = 0;
                        *(u8 *)(iVar3 + 1) = 0;
                        pcVar4 = (char *)(iVar3 + 0x10);
                        for (; puVar1 = (&FUN_8c200bfc), *a1 != '\0'; a1 = a1 + 1) {
                            *pcVar4 = *a1;
                            pcVar4 = pcVar4 + 1;
                        }
                        *pcVar4 = '\0';
                        (*(code *)puVar1)(iVar3 + 0x20, a2, ar6_00, ar7_00);
                        *a3 = iVar3;
                        return 0;
                    }
                }
                return (int)(int)0xffffff08;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fe8f2  0x8c1fe8f2
 * called by: FUN_8c1fc324
 */
int FUN_8c1fe8f2(int a0, u32 a1, u32 a2) {
    u32 r7;
    u16 uVar1;
    int iVar2;
    u8 uVar3;

    uVar1 = (u16)a1;
    uVar3 = (u8)a2;
    if (a0 == 0) {
        return (int)(int)0xffffff00;
    }
    if (*(char *)(0x8c4783e2 + *(int *)(a0 + 0x28) * (int)0x148) != '\0') {
        iVar2 = FUN_8c1fd510(*(u32 *)(a0 + 0x28), a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(*(u32 *)(a0 + 0x28));
        } else {
            iVar2 = FUN_8c1fd550(*(u32 *)(a0 + 0x28), a1);
            if ((iVar2 != 0) && (*(char *)(0x8c4783e8 + *(int *)(a0 + 0x28) * (int)0x148) != '\0')) {
                iVar2 = thunk_FUN_8c1ffcc2(*(u32 *)(a0 + 0x28), a1, a2, r7);
                if (iVar2 < 0) {
                    return (int)(int)0xffffff03;
                }
                *(u16 *)(a0 + 2) = uVar1;
                *(u8 *)(a0 + 1) = uVar3;
                return 0;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fe9ae  0x8c1fe9ae
 * called by: FUN_8c200e8a, FUN_8c200f2c, FUN_8c20103c, FUN_8c20112c, FUN_8c201240, FUN_8c2013c2
 */
int FUN_8c1fe9ae(int a0, int a1, u8 *a2, u32 a3) {
    int iVar1;
    u8 *a4;
    u8 uVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *puVar5;
    int iVar6;
    int iVar7;

    if (a0 == 0) {
        return 0xffffff00;
    }
    iVar6 = 0;
    iVar7 = a1;
    if ((((&g_8c4783e2)[*(int *)(a0 + 0x28) * 0x148] != '\0') &&
         (iVar1 = FUN_8c1fd550(*(u32 *)(a0 + 0x28), a1), iVar1 != 0)) &&
        ((&g_8c4783e8)[*(int *)(a0 + 0x28) * 0x148] != '\0')) {
        iVar1 = FUN_8c1fd510(*(u32 *)(a0 + 0x28), iVar7);
        if (iVar1 == 0) {
            FUN_8c1fdd1a(*(u32 *)(a0 + 0x28));
        } else {
            iVar1 = thunk_FUN_8c1ffcc2(*(u32 *)(a0 + 0x28), iVar7, a2, a3);
            if (-1 < iVar1) {
                iVar1 = *(int *)(a0 + 0x28);
                if (*(int *)(a0 + 4) != 0) {
                    if (a1 != 0) {
                        iVar7 = iVar1 * 0x148;
                        *(u32 *)(iVar7 + 0x8c478410) = 1;
                        *(u32 *)(iVar7 + 0x8c478414) = *(u32 *)(&g_8c273a84 + *(int *)(iVar7 + 0x8c4783e4) * 0x50);
                    }
                    a4 = (u8 *)FUN_8c200a84(iVar1, *(u32 *)(a0 + 0x2c));
                    if (*(int *)(a0 + 8) == 1) {
                        uVar2 = 0xcc;
                    } else {
                        uVar2 = 0x33;
                    }
                    *a4 = uVar2;
                    a4[1] = *(u8 *)(a0 + 1);
                    (**(code **)(g_8c4783dc + 0x10))(a4, 2, *(u32 *)(a0 + 0x38), a3);
                    (**(code **)(g_8c4783dc + 0x10))(a4, 0x18, *(u32 *)(a0 + 0x30), a3);
                    (**(code **)(g_8c4783dc + 0x10))(a4, 0x1a, (int)*(short *)(a0 + 2), a3);
                    puVar4 = (u8 *)(a0 + 0x10);
                    puVar5 = a4 + 0x10;
                    for (puVar3 = a4 + 4; puVar3 < puVar5; puVar3 = puVar3 + 1) {
                        uVar2 = *puVar4;
                        puVar4 = puVar4 + 1;
                        *puVar3 = uVar2;
                    }
                    puVar3 = (u8 *)(a0 + 0x20);
                    a2 = a4 + 0x18;
                    for (; puVar5 < a2; puVar5 = puVar5 + 1) {
                        uVar2 = *puVar3;
                        puVar3 = puVar3 + 1;
                        *puVar5 = uVar2;
                    }
                    iVar7 = *(int *)(a0 + 0x2c);
                    FUN_8c200a9c(iVar1, iVar7);
                    iVar6 = FUN_8c200346(iVar1, iVar7, a2, a3);
                    if (iVar6 < 0)
                        goto LAB_8c1feafe;
                    FUN_8c2007f0(iVar1, iVar7, a2);
                }
                iVar6 = 0;
            }
        }
    }
LAB_8c1feafe:
    FUN_8c200ae4();
    return iVar6;
}

/*
 * FUN_8c1feb16  0x8c1feb16
 */
int FUN_8c1feb16(int a0, int a1, int a2) {
    int iVar1;
    int iVar2;
    int iVar3;
    code *pcVar4;

    if (a0 == 0) {
        iVar1 = (int)(int)0xffffff00;
    } else if (*(char *)(*(int *)(a0 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
        iVar1 = (int)(int)0xffffff01;
    } else {
        pcVar4 = (code *)(&FUN_8c1febd6);
        if ((*(int *)(a0 + 4) == 1) || (pcVar4 = (code *)(&FUN_8c1fecf2), *(int *)(a0 + 4) == 2)) {
            iVar3 = (int)0x200;
            iVar1 = 0x8c4783e0 + *(int *)(a0 + 0x28) * (int)0x148;
            *(u32 *)(iVar1 + 0x30) = 1;
            *(int *)(iVar1 + 0x34) = a2;
            iVar1 = 0;
            if (0 < a2) {
                do {
                    iVar2 = (*pcVar4)(a0, a1);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    iVar1 = iVar1 + 1;
                    a1 = a1 + iVar3;
                } while (iVar1 < a2);
            }
            iVar1 = 0;
        } else {
            iVar1 = (int)(int)0xffffff0b;
        }
    }
    return iVar1;
}

/*
 * FUN_8c1feb1e  0x8c1feb1e
 */
int FUN_8c1feb1e(u32 unused_a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    code *pcVar4;
    int unaff_r14;
    char in_T;
    int a6;

    if (in_T == '\0') {
        if (*(char *)(*(int *)(unaff_r14 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
            iVar1 = (int)(int)0xffffff01;
        } else {
            pcVar4 = (code *)(&FUN_8c1febd6);
            if ((*(int *)(unaff_r14 + 4) == 1) || (pcVar4 = (code *)(&FUN_8c1fecf2), *(int *)(unaff_r14 + 4) == 2)) {
                iVar3 = (int)0x200;
                a6 = *(int *)(unaff_r14 + 0x28) * (int)0x148;
                iVar1 = 0x8c4783e0 + a6;
                *(u32 *)(iVar1 + 0x30) = 1;
                *(int *)(iVar1 + 0x34) = a2;
                iVar1 = 0;
                if (0 < a2) {
                    do {
                        iVar2 = (*pcVar4)(unaff_r14, a1, a6, a3);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        iVar1 = iVar1 + 1;
                        a1 = a1 + iVar3;
                    } while (iVar1 < a2);
                }
                iVar1 = 0;
            } else {
                iVar1 = (int)(int)0xffffff0b;
            }
        }
    } else {
        iVar1 = (int)(int)0xffffff00;
    }
    return iVar1;
}

/*
 * FUN_8c1febd6  0x8c1febd6
 * called by: FUN_8c200f2c, FUN_8c20103c
 */
int FUN_8c1febd6(int a0, u32 a1) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;

    uVar5 = a1;
    iVar3 = FUN_8c1fd510(*(u32 *)(a0 + 0x28), 0);
    if (iVar3 == 0) {
        FUN_8c1fdd1a(*(u32 *)(a0 + 0x28));
    } else {
        iVar3 = FUN_8c1fd550(*(u32 *)(a0 + 0x28));
        if ((iVar3 != 0) && (*(char *)(0x8c4783e8 + *(int *)(a0 + 0x28) * (int)0x148) != '\0')) {
            iVar3 = thunk_FUN_8c1ffcc2(*(u32 *)(a0 + 0x28));
            if (iVar3 < 0) {
                return (int)(int)0xffffff03;
            }
            uVar5 = *(u32 *)(a0 + 0x28);
            iVar3 = FUN_8c2008f4(uVar5);
            puVar1 = (&FUN_8c1fbc44);
            if (-1 < iVar3) {
                iVar4 = FUN_8c1fbc44(uVar5, iVar3, a1);
                iVar2 = 0xffff;
                if (iVar4 < 0) {
                    if (iVar4 == (int)0xffffff01) {
                        return iVar4;
                    }
                    do {
                        FUN_8c20099e(uVar5, iVar3, iVar2);
                        iVar3 = FUN_8c200890(uVar5, 0xfffc);
                        if (iVar3 < 0)
                            goto LAB_8c1fec70;
                        iVar4 = (*(code *)puVar1)(uVar5, iVar3, a1);
                    } while (iVar4 != 0);
                }
                FUN_8c20099e(uVar5, iVar3, 0xfffa);
                if (*(int *)(a0 + 0x38) == iVar2) {
                    *(int *)(a0 + 0x38) = (int)(short)iVar3;
                } else {
                    FUN_8c20099e(uVar5, *(u32 *)(a0 + 0x3c), iVar3);
                }
                *(int *)(a0 + 0x3c) = (int)(short)iVar3;
                *(int *)(a0 + 0x30) = *(int *)(a0 + 0x30) + 1;
                return 0;
            }
        LAB_8c1fec70:
            return (int)(int)0xffffff04;
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1febe6  0x8c1febe6
 */
int FUN_8c1febe6(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int ar6_00;
    int iVar2;
    int iVar3;
    u32 unaff_r9;
    u32 ar4_00;
    int unaff_r13;

    iVar2 = FUN_8c1fd510(*(u32 *)(unaff_r13 + 0x28), a1);
    if (iVar2 == 0) {
        FUN_8c1fdd1a(*(u32 *)(unaff_r13 + 0x28));
    } else {
        iVar2 = FUN_8c1fd550(*(u32 *)(unaff_r13 + 0x28), a1);
        if ((iVar2 != 0) && (*(char *)(0x8c4783e8 + *(int *)(unaff_r13 + 0x28) * (int)0x148) != '\0')) {
            iVar2 = (*(code *)(&thunk_FUN_8c1ffcc2))(*(u32 *)(unaff_r13 + 0x28), a1, a2, a3);
            if (iVar2 < 0) {
                return (int)(int)0xffffff03;
            }
            ar4_00 = *(u32 *)(unaff_r13 + 0x28);
            iVar2 = FUN_8c2008f4(ar4_00, a1, a2, a3);
            puVar1 = (&FUN_8c1fbc44);
            if (-1 < iVar2) {
                iVar3 = FUN_8c1fbc44(ar4_00, iVar2, unaff_r9, a3);
                ar6_00 = 0xffff;
                if (iVar3 < 0) {
                    if (iVar3 == (int)0xffffff01) {
                        return iVar3;
                    }
                    do {
                        iVar3 = ar6_00;
                        FUN_8c20099e(ar4_00, iVar2, ar6_00);
                        iVar2 = FUN_8c200890(ar4_00, 0xfffc, iVar3, a3);
                        if (iVar2 < 0)
                            goto LAB_8c1fec70;
                        iVar3 = (*(code *)puVar1)(ar4_00, iVar2, unaff_r9, a3);
                    } while (iVar3 != 0);
                }
                FUN_8c20099e(ar4_00, iVar2, 0xfffa);
                if (*(int *)(unaff_r13 + 0x38) == ar6_00) {
                    *(int *)(unaff_r13 + 0x38) = (int)(short)iVar2;
                } else {
                    FUN_8c20099e(ar4_00, *(u32 *)(unaff_r13 + 0x3c), iVar2);
                }
                *(int *)(unaff_r13 + 0x3c) = (int)(short)iVar2;
                *(int *)(unaff_r13 + 0x30) = *(int *)(unaff_r13 + 0x30) + 1;
                return 0;
            }
        LAB_8c1fec70:
            return (int)(int)0xffffff04;
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fecf2  0x8c1fecf2
 * called by: FUN_8c20112c, FUN_8c201240
 */
int FUN_8c1fecf2(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    u32 ar5_00;

    iVar3 = *(int *)(a0 + 0x28) * (int)0x148 + 0x8c4783e0;
    uVar4 = a1;
    iVar1 = FUN_8c1fd510(*(int *)(a0 + 0x28), a1);
    if (iVar1 == 0) {
        FUN_8c1fdd1a(*(u32 *)(a0 + 0x28));
    } else {
        iVar1 = FUN_8c1fd550(*(u32 *)(a0 + 0x28), uVar4);
        if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + *(int *)(a0 + 0x28) * (int)0x148) != '\0')) {
            iVar1 = thunk_FUN_8c1ffcc2(*(u32 *)(a0 + 0x28), uVar4, unused_a2, a3);
            if (iVar1 < 0) {
                return (int)(int)0xffffff03;
            }
            ar5_00 = *(u32 *)(a0 + 0x30);
            uVar4 = *(u32 *)(a0 + 0x28);
            uVar2 = FUN_8c2009d0(uVar4, ar5_00);
            if (((uVar2 & 0xffff) == 0xfffc) && (*(int *)(a0 + 0x30) < *(int *)(*(int *)(iVar3 + 0x1c) + 0x38))) {
                iVar1 = FUN_8c1fbc44(uVar4, ar5_00, a1, a3);
                if (iVar1 < 0) {
                    return iVar1;
                }
                FUN_8c20099e(uVar4, ar5_00, 0xfffa);
                if (*(int *)(a0 + 0x38) == 0xffff) {
                    *(int *)(a0 + 0x38) = (int)(short)ar5_00;
                } else {
                    FUN_8c20099e(uVar4, *(u32 *)(a0 + 0x3c), ar5_00);
                }
                *(int *)(a0 + 0x3c) = (int)(short)ar5_00;
                *(int *)(a0 + 0x30) = *(int *)(a0 + 0x30) + 1;
                return 0;
            }
            return (int)(int)0xffffff04;
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fedfa  0x8c1fedfa
 */
int FUN_8c1fedfa(int a0, int a1, int a2) {
    int iVar1;
    int iVar2;
    int iVar3;
    int ar6_00;

    if (a0 == 0) {
        iVar1 = (int)(int)0xffffff00;
    } else if (*(char *)(*(int *)(a0 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
        iVar1 = (int)(int)0xffffff01;
    } else {
        iVar3 = (int)0x200;
        ar6_00 = *(int *)(a0 + 0x28) * (int)0x148;
        iVar1 = 0x8c4783e0 + ar6_00;
        *(u32 *)(iVar1 + 0x30) = 1;
        *(int *)(iVar1 + 0x34) = a2;
        iVar1 = 0;
        if (0 < a2) {
            do {
                iVar2 = FUN_8c1fee6c(a0, a1);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar1 = iVar1 + 1;
                a1 = a1 + iVar3;
            } while (iVar1 < a2);
        }
        iVar1 = 0;
    }
    return iVar1;
}

/*
 * FUN_8c1fee02  0x8c1fee02
 */
int FUN_8c1fee02(u32 unused_a0, int a1, int a2) {
    int iVar1;
    int iVar2;
    int iVar3;
    int unaff_r14;
    char in_T;
    int a6;

    if (in_T == '\0') {
        if (*(char *)(*(int *)(unaff_r14 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
            iVar1 = (int)(int)0xffffff01;
        } else {
            iVar3 = (int)0x200;
            a6 = *(int *)(unaff_r14 + 0x28) * (int)0x148;
            iVar1 = 0x8c4783e0 + a6;
            *(u32 *)(iVar1 + 0x30) = 1;
            *(int *)(iVar1 + 0x34) = a2;
            iVar1 = 0;
            if (0 < a2) {
                do {
                    iVar2 = FUN_8c1fee6c(unaff_r14, a1);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    iVar1 = iVar1 + 1;
                    a1 = a1 + iVar3;
                } while (iVar1 < a2);
            }
            iVar1 = 0;
        }
    } else {
        iVar1 = (int)(int)0xffffff00;
    }
    return iVar1;
}

/*
 * FUN_8c1fee6c  0x8c1fee6c
 * called by: FUN_8c1fedfa, FUN_8c1fee02, FUN_8c200e8a, FUN_8c20103c, FUN_8c201240, FUN_8c2013c2
 */
int FUN_8c1fee6c(int a0, u32 a1) {
    u32 r6;
    u32 r7;
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    u32 uVar3;

    uVar3 = a1;
    iVar1 = FUN_8c1fd510(*(u32 *)(a0 + 0x28), a1);
    if (iVar1 == 0) {
        FUN_8c1fdd1a(*(u32 *)(a0 + 0x28));
    } else {
        iVar1 = FUN_8c1fd550(*(u32 *)(a0 + 0x28), uVar3);
        if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + *(int *)(a0 + 0x28) * (int)0x148) != '\0')) {
            iVar1 = thunk_FUN_8c1ffcc2(*(u32 *)(a0 + 0x28), uVar3, r6, r7);
            if (iVar1 < 0) {
                return (int)(int)0xffffff03;
            }
            uVar3 = *(u32 *)(a0 + 0x28);
            if (*(int *)(a0 + 0x40) == 0xfffa) {
                if (*(int *)(a0 + 0x34) != 0) {
                    return 0xffff0000;
                }
            } else if (*(int *)(a0 + 0x34) != 0) {
                if ((*(int *)(a0 + 0x40) != 0xfffc) && (*(int *)(a0 + 0x40) != 0xffff)) {
                    ar5_00 = *(u32 *)(a0 + 0x40);
                    iVar1 = FUN_8c1fbb6c(uVar3, ar5_00, a1);
                    if (iVar1 < 0) {
                        return iVar1;
                    }
                    uVar2 = FUN_8c2009d0(uVar3, ar5_00);
                    *(u32 *)(a0 + 0x40) = uVar2 & 0xffff;
                    iVar1 = *(int *)(a0 + 0x34) + -1;
                    *(int *)(a0 + 0x34) = iVar1;
                    return iVar1;
                }
                return (int)(int)0xffffff41;
            }
            return 0;
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1fef5a  0x8c1fef5a
 * called by: FUN_8c1fc564
 */
int FUN_8c1fef5a(int a0, u32 a1) {
    int iVar1;
    u32 ar5_00;
    u8 auStack_34[48];

    if (*(char *)(0x8c4783e2 + a0 * 0x148) != '\0') {
        ar5_00 = a1;
        iVar1 = FUN_8c1fd510(a0, a1);
        if (iVar1 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar1 = FUN_8c1fd550(a0, ar5_00);
            if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + a0 * 0x148) != '\0')) {
                iVar1 = thunk_FUN_8c1ffcc2();
                if (iVar1 < 0) {
                    return (int)(int)0xffffff03;
                }
                iVar1 = FUN_8c200566(a0, a1, auStack_34);
                if (-1 < iVar1) {
                    return 0;
                }
                return (int)(int)0xffffff05;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ff018  0x8c1ff018
 * called by: FUN_8c1fc198
 */
int FUN_8c1ff018(int a0, u8 *a1, u32 a2, u32 a3) {
    u8 bVar1;
    bool bVar2;
    u8 *puVar3;
    int iVar4;
    u8 *pbVar5;
    u8 *pbVar6;
    int iVar7;
    int iVar8;

    iVar7 = (int)0x148;
    iVar8 = a0 * iVar7 + 0x8c4783e0;
    if (*(char *)(iVar8 + 2) != '\0') {
        pbVar5 = a1;
        iVar4 = FUN_8c1fd510(a0, a1);
        if (iVar4 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar4 = FUN_8c1fd550(a0, pbVar5);
            if ((iVar4 != 0) && (*(char *)(a0 * iVar7 + 0x8c4783e0 + 8) != '\0')) {
                iVar7 = thunk_FUN_8c1ffcc2();
                puVar3 = (&FUN_8c200a84);
                if (iVar7 < 0) {
                    return (int)(int)0xffffff03;
                }
                *(u32 *)(iVar8 + 0x18) = 0;
                pbVar5 = (u8 *)(*(code *)puVar3)(a0, 0, a2, a3);
                iVar7 = 0;
                bVar2 = false;
                do {
                    if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x30) <= iVar7) {
                    LAB_8c1ff0b4:
                        if (!bVar2) {
                            return (int)(int)0xffffff05;
                        }
                        pbVar5 = pbVar5 + 4;
                        pbVar6 = a1 + 0xc;
                        for (; a1 < pbVar6; a1 = a1 + 1) {
                            bVar1 = *pbVar5;
                            pbVar5 = pbVar5 + 1;
                            *a1 = bVar1;
                        }
                        *pbVar6 = 0;
                        *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
                        return 0;
                    }
                    if ((*pbVar5 == 0x33) || (*pbVar5 == 0xcc)) {
                        bVar2 = true;
                        goto LAB_8c1ff0b4;
                    }
                    pbVar5 = pbVar5 + 0x20;
                    iVar7 = iVar7 + 1;
                    *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
                } while (true);
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ff110  0x8c1ff110
 * called by: FUN_8c1fc1c6
 */
int FUN_8c1ff110(int a0, u8 *a1) {
    u8 bVar1;
    bool bVar2;
    int iVar3;
    u8 *pbVar4;
    int iVar5;
    int iVar6;
    u8 *pbVar7;

    iVar5 = (int)0x148;
    iVar6 = a0 * iVar5 + 0x8c4783e0;
    if (*(char *)(iVar6 + 2) != '\0') {
        pbVar4 = a1;
        iVar3 = FUN_8c1fd510(a0, a1);
        if (iVar3 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar3 = FUN_8c1fd550(a0, pbVar4);
            if ((iVar3 != 0) && (*(char *)(a0 * iVar5 + 0x8c4783e0 + 8) != '\0')) {
                iVar5 = thunk_FUN_8c1ffcc2();
                if (iVar5 < 0) {
                    return (int)(int)0xffffff03;
                }
                pbVar4 = (u8 *)FUN_8c200a84(a0, *(u32 *)(iVar6 + 0x18));
                iVar5 = *(int *)(iVar6 + 0x18);
                bVar2 = false;
                do {
                    if (*(int *)(*(int *)(iVar6 + 0x1c) + 0x30) <= iVar5) {
                    LAB_8c1ff1a6:
                        if (!bVar2) {
                            return (int)(int)0xffffff05;
                        }
                        pbVar4 = pbVar4 + 4;
                        pbVar7 = a1 + 0xc;
                        for (; a1 < pbVar7; a1 = a1 + 1) {
                            bVar1 = *pbVar4;
                            pbVar4 = pbVar4 + 1;
                            *a1 = bVar1;
                        }
                        *pbVar7 = 0;
                        return 0;
                    }
                    *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
                    if ((*pbVar4 == 0x33) || (*pbVar4 == 0xcc)) {
                        bVar2 = true;
                        goto LAB_8c1ff1a6;
                    }
                    pbVar4 = pbVar4 + 0x20;
                    iVar5 = iVar5 + 1;
                } while (true);
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ff1f8  0x8c1ff1f8
 * called by: FUN_8c1fc1f4
 */
int FUN_8c1ff1f8(int a0, u8 *a1, int *a2, u32 a3) {
    u8 bVar1;
    u8 *puVar2;
    int iVar3;
    u8 *pbVar4;
    u8 *pbVar5;
    int *ar6_00;
    u8 *ar6_01;
    int iVar6;
    int iVar7;
    u8 auStack_40[4];
    int iStack_3c;
    u16 uStack_38;
    u8 uStack_36;
    u8 auStack_20[8];
    int iStack_18;

    iVar6 = (int)0x148;
    iVar7 = a0 * iVar6 + 0x8c4783e0;
    if (*(char *)(iVar7 + 2) != '\0') {
        pbVar4 = a1;
        ar6_00 = a2;
        iVar3 = FUN_8c1fd510(a0, a1);
        if (iVar3 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar3 = FUN_8c1fd550(a0, pbVar4);
            if ((iVar3 != 0) && (*(char *)(a0 * iVar6 + 0x8c4783e0 + 8) != '\0')) {
                iVar6 = thunk_FUN_8c1ffcc2();
                puVar2 = (&FUN_8c200a84);
                if (iVar6 < 0) {
                    return (int)(int)0xffffff03;
                }
                *(u32 *)(iVar7 + 0x18) = 0;
                pbVar4 = (u8 *)(*(code *)puVar2)(a0, 0, ar6_00, a3);
                iVar6 = 0;
                iVar3 = 0;
                do {
                    if (*(int *)(*(int *)(iVar7 + 0x1c) + 0x30) <= iVar6) {
                    LAB_8c1ff298:
                        if (iVar3 == 0) {
                            return (int)(int)0xffffff05;
                        }
                        ar6_01 = pbVar4 + 4;
                        pbVar5 = a1 + 0xc;
                        for (; puVar2 = (&FUN_8c2004ea), a1 < pbVar5; a1 = a1 + 1) {
                            bVar1 = *ar6_01;
                            ar6_01 = ar6_01 + 1;
                            *a1 = bVar1;
                        }
                        *pbVar5 = 0;
                        *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
                        (*(code *)puVar2)(pbVar4, auStack_40, ar6_01, iVar3);
                        iVar6 = (int)0xcc;
                        *a2 = iStack_18 * (*(int *)(*(int *)(iVar7 + 0x1c) + 0x2c) + 1);
                        *(short *)(a2 + 1) = (short)iStack_18;
                        *(u8 *)((int)a2 + 6) = (u8)iStack_3c;
                        *(u8 *)((int)a2 + 7) = uStack_36;
                        *(u16 *)(a2 + 2) = uStack_38;
                        puVar2 = (&FUN_8c200c82);
                        *(bool *)((int)a2 + 6) = iStack_3c == iVar6;
                        (*(code *)puVar2)((int)a2 + 10, auStack_20, ar6_01, iVar3);
                        return 0;
                    }
                    if ((*pbVar4 == 0x33) || (*pbVar4 == 0xcc)) {
                        iVar3 = 1;
                        goto LAB_8c1ff298;
                    }
                    pbVar4 = pbVar4 + 0x20;
                    iVar6 = iVar6 + 1;
                    *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
                } while (true);
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ff336  0x8c1ff336
 * called by: FUN_8c1fc226
 */
int FUN_8c1ff336(int a0, u8 *a1, int *a2, int a3) {
    u8 bVar1;
    bool bVar2;
    u8 *puVar3;
    int iVar4;
    u8 *pbVar5;
    u8 *ar6_01;
    u8 *pbVar6;
    int iVar7;
    int iVar8;
    u8 auStack_44[4];
    int iStack_40;
    u16 uStack_3c;
    u8 uStack_3a;
    u8 auStack_24[8];
    int iStack_1c;

    iVar7 = (int)0x148;
    iVar8 = a0 * iVar7 + 0x8c4783e0;
    if (*(char *)(iVar8 + 2) != '\0') {
        pbVar5 = a1;
        iVar4 = FUN_8c1fd510(a0, a1);
        if (iVar4 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar4 = FUN_8c1fd550(a0, pbVar5);
            if ((iVar4 != 0) && (*(char *)(a0 * iVar7 + 0x8c4783e0 + 8) != '\0')) {
                iVar7 = thunk_FUN_8c1ffcc2();
                if (iVar7 < 0) {
                    return (int)(int)0xffffff03;
                }
                pbVar5 = (u8 *)FUN_8c200a84(a0, *(u32 *)(iVar8 + 0x18));
                iVar7 = *(int *)(iVar8 + 0x18);
                bVar2 = false;
                do {
                    if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x30) <= iVar7) {
                    LAB_8c1ff400:
                        if (!bVar2) {
                            return (int)(int)0xffffff05;
                        }
                        ar6_01 = pbVar5 + 4;
                        pbVar6 = a1 + 0xc;
                        for (; puVar3 = (&FUN_8c2004ea), a1 < pbVar6; a1 = a1 + 1) {
                            bVar1 = *ar6_01;
                            ar6_01 = ar6_01 + 1;
                            *a1 = bVar1;
                        }
                        *pbVar6 = 0;
                        (*(code *)puVar3)(pbVar5, auStack_44, ar6_01, a3);
                        *a2 = iStack_1c * (*(int *)(*(int *)(iVar8 + 0x1c) + 0x2c) + 1);
                        iVar7 = (int)0xcc;
                        *(short *)(a2 + 1) = (short)iStack_1c;
                        *(u8 *)((int)a2 + 6) = (u8)iStack_40;
                        *(u8 *)((int)a2 + 7) = uStack_3a;
                        *(u16 *)(a2 + 2) = uStack_3c;
                        puVar3 = (&FUN_8c200c82);
                        *(bool *)((int)a2 + 6) = iStack_40 == iVar7;
                        (*(code *)puVar3)((int)a2 + 10, auStack_24, ar6_01, a3);
                        return 0;
                    }
                    *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
                    bVar1 = *pbVar5;
                    a3 = (int)(char)bVar1;
                    if ((bVar1 == 0x33) || (bVar1 == 0xcc)) {
                        bVar2 = true;
                        goto LAB_8c1ff400;
                    }
                    pbVar5 = pbVar5 + 0x20;
                    iVar7 = iVar7 + 1;
                } while (true);
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ff478  0x8c1ff478
 * called by: FUN_8c1fe7aa, FUN_8c1ff530, FUN_8c1ff610
 */
int FUN_8c1ff478(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    u8 *ar6_00;
    int iVar1;
    u32 ar4_00;
    int iVar2;
    u32 uVar3;
    u8 *ar6_01;
    u32 ar6_02;
    u32 ar5_00;
    u8 auStack_48[12];
    u32 uStack_3c;
    int iStack_20;

    ar6_01 = auStack_48;
    iVar1 = FUN_8c200566(a0, a1, ar6_01);
    if (iVar1 < 0) {
        iVar1 = (int)(int)0xffffff05;
    } else {
        ar4_00 = FUN_8c200a84(a0, iVar1);
        iVar2 = FUN_8c200b10(a0, a1);
        ar6_00 = 0xfffc;
        if (iVar2 == 0) {
            ar5_00 = uStack_3c;
            for (iVar2 = 0; iVar2 < iStack_20; iVar2 = iVar2 + 1) {
                uVar3 = FUN_8c2009d0(a0, ar5_00);
                ar6_01 = ar6_00;
                FUN_8c20099e(a0, ar5_00, ar6_00);
                ar5_00 = uVar3 & 0xffff;
            }
        }
        ar6_02 = 0x20;
        memset(ar4_00, 0, 0x20);
        FUN_8c200a9c(a0, iVar1);
        iVar1 = 0;
    }
    return iVar1;
}

/*
 * FUN_8c1ff530  0x8c1ff530
 */
u32 FUN_8c1ff530(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;

    iVar3 = a0 * 0x148;
    *(u32 *)(iVar3 + 0x8c478410) = 1;
    *(u32 *)(iVar3 + 0x8c478414) = *(u32 *)(&g_8c273a90 + *(int *)(iVar3 + 0x8c4783e4) * 0x50);
    if ((&g_8c4783e2)[iVar3] != '\0') {
        uVar2 = a1;
        iVar1 = FUN_8c1fd510(a0, a1);
        if (iVar1 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar1 = FUN_8c1fd550(a0, uVar2);
            if ((iVar1 != 0) && ((&g_8c4783e8)[iVar3] != '\0')) {
                iVar3 = thunk_FUN_8c1ffcc2();
                if (iVar3 < 0) {
                    return 0xffffff03;
                }
                iVar3 = ret_const_0_200aec();
                if (iVar3 < 0) {
                    return 0xffffff0b;
                }
                iVar3 = FUN_8c1ff478(a0, a1, a2, a3);
                if (iVar3 < 0) {
                    return iVar3;
                }
                iVar3 = FUN_8c200346(a0, a1, a2, a3);
                if (iVar3 < 0) {
                    return iVar3;
                }
                uVar2 = FUN_8c2007f0(a0, a1, a2);
                return uVar2;
            }
        }
    }
    return 0xffffff01;
}

/*
 * FUN_8c1ff610  0x8c1ff610
 */
u32 FUN_8c1ff610(int a0, u32 *a1, int a2, u32 a3) {
    bool bVar1;
    int iVar2;
    u32 *ar5_00;
    int ar6_00;
    u32 *puVar3;
    int iVar4;

    iVar4 = a0 * 0x148;
    *(u32 *)(iVar4 + 0x8c478410) = 1;
    *(u32 *)(iVar4 + 0x8c478414) = *(u32 *)(&g_8c273ab8 + *(int *)(iVar4 + 0x8c4783e4) * 0x50);
    if ((&g_8c4783e2)[iVar4] != '\0') {
        ar5_00 = a1;
        ar6_00 = a2;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, ar5_00);
            if ((iVar2 != 0) && ((&g_8c4783e8)[iVar4] != '\0')) {
                iVar4 = thunk_FUN_8c1ffcc2();
                if (iVar4 < 0) {
                    return 0xffffff03;
                }
                iVar4 = 0;
                puVar3 = a1;
                if (0 < a2) {
                    do {
                        ar5_00 = (u32 *)*puVar3;
                        iVar2 = ret_const_0_200aec();
                        if (iVar2 < 0) {
                            return 0xffffff0a;
                        }
                        iVar4 = iVar4 + 1;
                        puVar3 = puVar3 + 1;
                    } while (iVar4 < a2);
                }
                iVar4 = 0;
                bVar1 = false;
                if (0 < a2) {
                    do {
                        ar5_00 = (u32 *)*a1;
                        iVar2 = FUN_8c1ff478(a0, ar5_00, ar6_00, a3);
                        iVar4 = iVar4 + 1;
                        if (iVar2 < 0) {
                            bVar1 = true;
                        }
                        a1 = a1 + 1;
                    } while (iVar4 < a2);
                }
                iVar4 = FUN_8c200346(a0, ar5_00, ar6_00, a3);
                if (iVar4 < 0) {
                    return iVar4;
                }
                iVar4 = FUN_8c2007f0(a0, ar5_00, ar6_00);
                if (iVar4 < 0) {
                    return iVar4;
                }
                if (bVar1) {
                    return 0xffffff0a;
                }
                return 0;
            }
        }
    }
    return 0xffffff01;
}

/*
 * FUN_8c1ff72e  0x8c1ff72e
 */
u32 FUN_8c1ff72e(int a0, u32 a1, u8 *a2) {
    u8 uVar1;
    int iVar2;
    u32 uVar3;
    u8 *puVar4;
    u8 *ar6_00;
    int iVar5;
    u8 auStack_38[48];

    iVar5 = a0 * 0x148;
    *(u32 *)(iVar5 + 0x8c478410) = 1;
    *(u32 *)(iVar5 + 0x8c478414) = *(u32 *)(&g_8c273a94 + *(int *)(iVar5 + 0x8c4783e4) * 0x50);
    if ((&g_8c4783e2)[iVar5] != '\0') {
        uVar3 = a1;
        puVar4 = a2;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, uVar3);
            if ((iVar2 != 0) && ((&g_8c4783e8)[iVar5] != '\0')) {
                iVar5 = thunk_FUN_8c1ffcc2();
                if (iVar5 < 0) {
                    return 0xffffff03;
                }
                iVar5 = ret_const_0_200aec();
                if (iVar5 < 0) {
                    return 0xffffff0b;
                }
                iVar5 = FUN_8c200566(a0, a1, auStack_38);
                if (iVar5 < 0) {
                    return 0xffffff05;
                }
                puVar4 = auStack_38;
                iVar2 = FUN_8c200566(a0, a2, puVar4);
                if (-1 < iVar2) {
                    return 0xffffff06;
                }
                iVar2 = FUN_8c200a84(a0, iVar5);
                ar6_00 = (u8 *)(iVar2 + 0x10);
                for (puVar4 = (u8 *)(iVar2 + 4); puVar4 < ar6_00; puVar4 = puVar4 + 1) {
                    uVar1 = *a2;
                    a2 = a2 + 1;
                    *puVar4 = uVar1;
                }
                FUN_8c200a9c(a0, iVar5);
                uVar3 = FUN_8c200346(a0, iVar5, ar6_00, a2);
                return uVar3;
            }
        }
    }
    return 0xffffff01;
}

/*
 * FUN_8c1ff844  0x8c1ff844
 */
u32 FUN_8c1ff844(int a0, u32 a1, u32 a2, u32 a3) {
    u8 uVar1;
    int iVar2;
    u32 uVar3;
    u8 *puVar4;
    u8 *puVar5;
    u8 *ar6_01;
    int iVar6;
    u8 auStack_44[44];
    u8 auStack_18[12];

    iVar6 = a0 * 0x148;
    *(u32 *)(iVar6 + 0x8c478410) = 1;
    *(u32 *)(iVar6 + 0x8c478414) = *(u32 *)(&g_8c273a9c + *(int *)(iVar6 + 0x8c4783e4) * 0x50);
    if ((&g_8c4783e2)[iVar6] != '\0') {
        uVar3 = a1;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, uVar3);
            if ((iVar2 != 0) && ((&g_8c4783e8)[iVar6] != '\0')) {
                iVar6 = thunk_FUN_8c1ffcc2();
                if (iVar6 < 0) {
                    return 0xffffff03;
                }
                iVar6 = ret_const_0_200aec();
                if (iVar6 < 0) {
                    return 0xffffff0b;
                }
                puVar4 = auStack_44;
                iVar6 = FUN_8c200566(a0, a1, puVar4);
                if (iVar6 < 0) {
                    return 0xffffff05;
                }
                iVar2 = FUN_8c200a84(a0, iVar6);
                FUN_8c200bfc(auStack_18, a2, puVar4);
                puVar5 = auStack_18;
                ar6_01 = (u8 *)(iVar2 + 0x18);
                for (puVar4 = (u8 *)(iVar2 + 0x10); puVar4 < ar6_01; puVar4 = puVar4 + 1) {
                    uVar1 = *puVar5;
                    puVar5 = puVar5 + 1;
                    *puVar4 = uVar1;
                }
                FUN_8c200a9c(a0, iVar6);
                uVar3 = FUN_8c200346(a0, iVar6, ar6_01, a3);
                return uVar3;
            }
        }
    }
    return 0xffffff01;
}

/*
 * FUN_8c1ff95a  0x8c1ff95a
 */
int FUN_8c1ff95a(int a0, u32 a1, u32 a2) {
    u8 uVar1;
    int iVar2;
    u8 *puVar3;
    u32 ar5_00;
    u8 *ar6_01;
    u8 auStack_3c[8];
    u8 auStack_34[48];

    if (*(char *)(0x8c4783e2 + a0 * 0x148) != '\0') {
        ar5_00 = a1;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, ar5_00);
            if ((iVar2 != 0) && (*(char *)(0x8c4783e8 + a0 * 0x148) != '\0')) {
                iVar2 = thunk_FUN_8c1ffcc2();
                if (iVar2 < 0) {
                    return (int)(int)0xffffff03;
                }
                iVar2 = ret_const_0_200aec();
                if (iVar2 < 0) {
                    return (int)(int)0xffffff0b;
                }
                puVar3 = auStack_34;
                iVar2 = FUN_8c200566(a0, a1, puVar3);
                if (iVar2 < 0) {
                    return (int)(int)0xffffff05;
                }
                iVar2 = FUN_8c200a84(a0, iVar2);
                ar6_01 = (u8 *)(iVar2 + 0x10);
                for (puVar3 = auStack_3c; puVar3 < auStack_34; puVar3 = puVar3 + 1) {
                    uVar1 = *ar6_01;
                    ar6_01 = ar6_01 + 1;
                    *puVar3 = uVar1;
                }
                FUN_8c200c82(a2, auStack_3c);
                return 0;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ffa54  0x8c1ffa54
 */
u32 FUN_8c1ffa54(int a0, u32 a1, u32 a2, u32 a3) {
    u8 uVar1;
    short sVar2;
    int iVar3;
    u32 uVar4;
    u8 *a6;
    int iVar5;
    u8 auStack_3c[48];

    iVar5 = a0 * 0x148;
    sVar2 = (short)a2;
    uVar1 = (u8)a3;
    *(u32 *)(iVar5 + 0x8c478410) = 1;
    *(u32 *)(iVar5 + 0x8c478414) = *(u32 *)(&g_8c273a9c + *(int *)(iVar5 + 0x8c4783e4) * 0x50);
    if ((&g_8c4783e2)[iVar5] != '\0') {
        uVar4 = a1;
        iVar3 = FUN_8c1fd510(a0, a1);
        if (iVar3 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar3 = FUN_8c1fd550(a0, uVar4);
            if ((iVar3 != 0) && ((&g_8c4783e8)[iVar5] != '\0')) {
                iVar5 = thunk_FUN_8c1ffcc2();
                if (iVar5 < 0) {
                    return 0xffffff03;
                }
                iVar5 = ret_const_0_200aec();
                if (iVar5 < 0) {
                    return 0xffffff0b;
                }
                a6 = auStack_3c;
                iVar5 = FUN_8c200566(a0, a1, a6);
                if (iVar5 < 0) {
                    return 0xffffff05;
                }
                iVar3 = FUN_8c200a84(a0, iVar5);
                if (g_8c26d20c != 0) {
                    a6 = (u8 *)(int)sVar2;
                    (**(code **)(g_8c4783dc + 0x10))(iVar3, 0x1a, a6, a3);
                }
                *(u8 *)(iVar3 + 1) = uVar1;
                FUN_8c200a9c(a0, iVar5);
                uVar4 = FUN_8c200346(a0, iVar5, a6, a3);
                return uVar4;
            }
        }
    }
    return 0xffffff01;
}

/*
 * FUN_8c1ffb70  0x8c1ffb70
 * called by: FUN_8c1fc654, FUN_8c200e8a, FUN_8c200f2c, FUN_8c2013c2
 */
int FUN_8c1ffb70(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u8 auStack_34[40];
    u32 uStack_c;

    if (*(char *)(0x8c4783e2 + a0 * 0x148) != '\0') {
        ar5_00 = a1;
        iVar1 = FUN_8c1fd510(a0, a1);
        if (iVar1 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar1 = FUN_8c1fd550(a0, ar5_00);
            if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + a0 * 0x148) != '\0')) {
                iVar1 = thunk_FUN_8c1ffcc2();
                if (iVar1 < 0) {
                    return (int)(int)0xffffff03;
                }
                iVar1 = ret_const_0_200aec();
                if (iVar1 < 0) {
                    return (int)(int)0xffffff0b;
                }
                iVar1 = FUN_8c200566(a0, a1, auStack_34);
                if (iVar1 < 0) {
                    return (int)(int)0xffffff05;
                }
                return uStack_c;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ffc0a  0x8c1ffc0a
 * called by: FUN_8c1fc258, FUN_8c200038
 */
int FUN_8c1ffc0a(int a0, int a1) {
    int iVar1;
    int iVar2;
    u8 auStack_38[16];
    u8 auStack_28[32];

    if (*(char *)(0x8c4783e2 + a0 * 0x148) != '\0') {
        iVar2 = a1;
        iVar1 = FUN_8c1fd510(a0, a1);
        if (iVar1 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar1 = FUN_8c1fd550(a0, iVar2);
            if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + a0 * 0x148) != '\0')) {
                iVar2 = thunk_FUN_8c1ffcc2();
                if (iVar2 < 0) {
                    return (int)(int)0xffffff03;
                }
                iVar2 = FUN_8c2005d6(a0, auStack_38);
                if (iVar2 < 0) {
                    return (int)(int)0xffffff05;
                }
                for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
                    *(u8 *)(iVar2 + a1) = auStack_28[iVar2];
                }
                *(u8 *)(a1 + 0xc) = 0;
                return 0;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ffcc2  0x8c1ffcc2
 * called by: FUN_8c200a00
 */
int FUN_8c1ffcc2(int a0, u32 a1) {
    int iVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;

    iVar3 = (int)0x148;
    iVar4 = a0 * iVar3 + 0x8c4783e0;
    if (*(char *)(iVar4 + 2) != '\0') {
        iVar1 = FUN_8c1fd510(a0, a1);
        if (iVar1 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar1 = FUN_8c1fd550(a0, a1);
            if ((iVar1 != 0) && (*(char *)(a0 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
                pcVar2 = *(char **)(iVar4 + 0x20);
                iVar3 = 0;
                do {
                    if (*pcVar2 != 'U') {
                        *(u8 *)(iVar4 + 0xb) = 0;
                        *(u8 *)(iVar4 + 0xc) = 0;
                        goto LAB_8c1ffd38;
                    }
                    iVar3 = iVar3 + 1;
                    pcVar2 = pcVar2 + 1;
                } while (iVar3 < 0x10);
                if (*(int *)(0x8c478e20 + a0 * 4) == 0) {
                    return 0;
                }
            LAB_8c1ffd38:
                return (int)(int)0xffffff03;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ffd6c  0x8c1ffd6c
 */
int FUN_8c1ffd6c(int a0, u8 *a1) {
    u8 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u8 *puVar5;
    u8 *puStack_10;

    iVar3 = (int)0x148;
    iVar4 = a0 * iVar3 + 0x8c4783e0;
    if (*(char *)(iVar4 + 2) != '\0') {
        puVar5 = a1;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
        } else {
            iVar2 = FUN_8c1fd550(a0, puVar5);
            if ((iVar2 != 0) && (*(char *)(a0 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
                iVar3 = thunk_FUN_8c1ffcc2();
                if (iVar3 < 0) {
                    return (int)(int)0xffffff03;
                }
                puVar5 = (u8 *)(*(int *)(iVar4 + 0x20) + 0x10);
                puStack_10 = a1;
                for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
                    uVar1 = *puVar5;
                    puVar5 = puVar5 + 1;
                    *puStack_10 = uVar1;
                    puStack_10 = puStack_10 + 1;
                }
                return 0;
            }
        }
    }
    return (int)(int)0xffffff01;
}

/*
 * FUN_8c1ffdfa  0x8c1ffdfa
 */
int FUN_8c1ffdfa(int a0, u8 *a1) {
    short sVar1;
    int iVar2;
    u32 uVar3;
    u8 *puVar4;
    int iVar5;
    int iVar6;
    u8 *puStack_14;

    iVar5 = (int)0x148;
    iVar6 = a0 * iVar5 + 0x8c4783e0;
    sVar1 = (int)0xffffff01;
    if (*(char *)(iVar6 + 2) != '\0') {
        puVar4 = a1;
        iVar2 = FUN_8c1fd510(a0, a1);
        if (iVar2 == 0) {
            FUN_8c1fdd1a(a0);
            sVar1 = (int)0xffffff01;
        } else {
            iVar2 = FUN_8c1fd550(a0, puVar4);
            sVar1 = (int)0xffffff01;
            if (((iVar2 != 0) && (*(char *)(a0 * iVar5 + 0x8c4783e0 + 8) != '\0')) &&
                (iVar5 = thunk_FUN_8c1ffcc2(), sVar1 = (int)0xffffff03, -1 < iVar5)) {
                iVar5 = 0;
                puVar4 = (u8 *)(*(int *)(iVar6 + 0x20) + 0x10);
                for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
                    *puVar4 = 0;
                    puVar4 = puVar4 + 1;
                }
                puVar4 = (u8 *)(*(int *)(iVar6 + 0x20) + 0x10);
                puStack_14 = a1;
                for (; iVar5 < 0x20; iVar5 = iVar5 + 1) {
                    *puVar4 = *puStack_14;
                    puVar4 = puVar4 + 1;
                    puStack_14 = puStack_14 + 1;
                }
                uVar3 = FUN_8c20065a(a0);
                return uVar3;
            }
        }
    }
    return (int)sVar1;
}

/*
 * FUN_8c1ffebe  0x8c1ffebe
 * called by: FUN_8c200038
 */
u32 FUN_8c1ffebe(int a0) {
    int *piVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;

    piVar1 = 0x8c4783dc;
    uVar5 = 0xfffc;
    iVar3 = a0 * 0x148 + 0x8c4783e0;
    iVar4 = 0;
    while (true) {
        if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar4) {
            return 0xffffffff;
        }
        uVar2 = (**(code **)(*piVar1 + 0xc))(*(u32 *)(iVar3 + 0x24), iVar4 << 1, uVar5);
        if (((uVar2 & 0xffff) != 0xfffc) && ((uVar2 & 0xffff) != 0xffff))
            break;
        iVar4 = iVar4 + 1;
    }
    return iVar4;
}

/*
 * FUN_8c1ffeca  0x8c1ffeca
 */
u32 FUN_8c1ffeca(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    int in_r3;
    int iVar3;
    int in_MACL;

    piVar1 = 0x8c4783dc;
    iVar3 = 0;
    while (true) {
        if (*(int *)(*(int *)(in_MACL + in_r3 + 0x1c) + 0x30) <= iVar3) {
            return 0xffffffff;
        }
        uVar2 = (**(code **)(*piVar1 + 0xc))(*(u32 *)(in_MACL + in_r3 + 0x24), iVar3 << 1, a2, a3);
        if (((uVar2 & 0xffff) != 0xfffc) && ((uVar2 & 0xffff) != 0xffff))
            break;
        iVar3 = iVar3 + 1;
    }
    return iVar3;
}

/*
 * FUN_8c1fff0c  0x8c1fff0c
 * called by: FUN_8c200038
 */
int FUN_8c1fff0c(int a0, int a1) {
    int *piVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;

    uVar2 = 0xfffc;
    piVar1 = 0x8c4783dc;
    uVar6 = 0xfffc;
    iVar4 = a0 * 0x148 + 0x8c4783e0;
    iVar5 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x30);
    do {
        iVar5 = iVar5 + -1;
        if (iVar5 < a1) {
            return 0xffffffff;
        }
        uVar3 = (**(code **)(*piVar1 + 0xc))(*(u32 *)(iVar4 + 0x24), iVar5 * 2, uVar6);
    } while ((uVar3 & 0xffff) != uVar2);
    return iVar5;
}

/*
 * FUN_8c1fff20  0x8c1fff20
 */
int FUN_8c1fff20(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    u32 uVar3;
    int in_r3;
    int unaff_r11;
    int unaff_r13;
    int iVar4;

    uVar2 = 0xfffc;
    piVar1 = 0x8c4783dc;
    iVar4 = *(int *)(*(int *)(unaff_r13 + in_r3 + 0x1c) + 0x30);
    do {
        iVar4 = iVar4 + -1;
        if (iVar4 < unaff_r11) {
            return 0xffffffff;
        }
        uVar3 = (**(code **)(*piVar1 + 0xc))(*(u32 *)(unaff_r13 + in_r3 + 0x24), iVar4 * 2, a2, a3);
    } while ((uVar3 & 0xffff) != uVar2);
    return iVar4;
}

/*
 * FUN_8c1fff5e  0x8c1fff5e
 * called by: FUN_8c200038
 */
u32 FUN_8c1fff5e(int a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    char *a4;

    piVar1 = 0x8c4783dc;
    iVar3 = a0 * 0x148 + 0x8c4783e0;
    a4 = *(char **)(iVar3 + 0x28);
    iVar4 = 0;
    while (true) {
        if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar4) {
            return 0;
        }
        if ((*a4 != '\0') && (uVar2 = (**(code **)(*piVar1 + 0xc))(a4, 2, a2, a3), (uVar2 & 0xffff) == a1))
            break;
        a4 = a4 + 0x20;
        iVar4 = iVar4 + 1;
    }
    return a4;
}

/*
 * FUN_8c1fffca  0x8c1fffca
 * called by: FUN_8c200038
 */
u32 FUN_8c1fffca(int a0) {
    u32 uVar1;
    int iVar2;
    int ar5_00;
    int iVar3;

    iVar3 = a0 * 0x148 + 0x8c4783e0;
    ar5_00 = 0;
    do {
        if (**(int **)(iVar3 + 0x1c) + 1 <= ar5_00) {
            return 0;
        }
        uVar1 = FUN_8c2009d0(a0, ar5_00);
        uVar1 = uVar1 & 0xffff;
        if (((uVar1 != 0xfffc) && (uVar1 != 0xffff)) && (uVar1 != 0xfffa)) {
            if (ar5_00 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
                iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x30);
            } else {
                iVar2 = **(int **)(iVar3 + 0x1c) + 1;
            }
            if (iVar2 <= (int)uVar1) {
                return 0xffffffff;
            }
        }
        ar5_00 = ar5_00 + 1;
    } while (true);
}

/*
 * FUN_8c1fffd8  0x8c1fffd8
 */
u32 FUN_8c1fffd8(void) {
    u32 uVar1;
    int in_r3;
    int iVar2;
    u32 unaff_r12;
    int a5;
    int iVar3;
    int in_MACL;

    iVar3 = in_MACL + in_r3;
    a5 = 0;
    do {
        if (**(int **)(iVar3 + 0x1c) + 1 <= a5) {
            return 0;
        }
        uVar1 = FUN_8c2009d0(unaff_r12, a5);
        uVar1 = uVar1 & 0xffff;
        if (((uVar1 != 0xfffc) && (uVar1 != 0xffff)) && (uVar1 != 0xfffa)) {
            if (a5 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
                iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x30);
            } else {
                iVar2 = **(int **)(iVar3 + 0x1c) + 1;
            }
            if (iVar2 <= (int)uVar1) {
                return 0xffffffff;
            }
        }
        a5 = a5 + 1;
    } while (true);
}
