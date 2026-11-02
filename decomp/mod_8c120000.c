/* Seaman (USA) region 0x8c120000-0x8c130000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * asr_sub_120078  0x8c120078
 * area name: in the asr library code range
 * called by: asr_sub_1201e6, asr_sub_1201ea
 */
u32 asr_sub_120078(u16 *a0) {
    u8 *puVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;

    uVar5 = 0;
    iVar3 = 0;
    if (*a0 != 0) {
        do {
            iVar4 = *(int *)(*(int *)(a0 + 2) + iVar3 * 4);
            if ((*(int *)(iVar4 + 0x14) != 0) && (cVar2 = (**(code **)(iVar4 + 0x14))(iVar4, uVar5), cVar2 != '\0')) {
                return 1;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(u32)*a0);
    }
    puVar1 = (&asr_sub_11194c);
    iVar3 = 0;
    if (a0[4] != 0) {
        do {
            iVar4 = (*(code *)puVar1)(*(u32 *)(*(int *)(a0 + 6) + iVar3 * 4));
            if (iVar4 == 0) {
                return 1;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(u32)a0[4]);
    }
    return 0;
}

/*
 * asr_sub_12007c  0x8c12007c
 * area name: in the asr library code range
 */
u32 asr_sub_12007c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u16 *unaff_r14;

    iVar3 = 0;
    if (*unaff_r14 != 0) {
        do {
            iVar4 = *(int *)(*(int *)(unaff_r14 + 2) + iVar3 * 4);
            if ((*(int *)(iVar4 + 0x14) != 0) &&
                (uVar2 = (**(code **)(iVar4 + 0x14))(iVar4, a1, a2, a3), (uVar2 & 0xff) != 0)) {
                return 1;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(u32)*unaff_r14);
    }
    puVar1 = (&asr_sub_11194c);
    iVar3 = 0;
    if (unaff_r14[4] != 0) {
        do {
            iVar4 = (*(code *)puVar1)(*(u32 *)(*(int *)(unaff_r14 + 6) + iVar3 * 4), a1, a2, a3);
            if (iVar4 == 0) {
                return 1;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(u32)unaff_r14[4]);
    }
    return 0;
}

/*
 * asr_table_lookup  0x8c1200f4
 * entry (a1 - first) of the table a0 (count, first, entries), else 0
 * called by: asr_sub_120148, asr_sub_120348
 */
u32 asr_table_lookup(u16 *a0, u32 a1) {
    int iVar1;

    iVar1 = (a1 & 0xff) - (u32)a0[1];
    if ((-1 < iVar1) && (iVar1 < (int)(u32)*a0)) {
        return *(u32 *)(iVar1 * 4 + *(int *)(a0 + 2));
    }
    return 0;
}

/*
 * asr_table_lookup_b  0x8c12011a
 * entry (a1 - first) of the table at a0+8 (count, first, entries), else 0
 * called by: asr_sub_120148
 */
u32 asr_table_lookup_b(int a0, u32 a1) {
    int iVar1;

    iVar1 = (a1 & 0xff) - (u32) * (u16 *)(a0 + 10);
    if ((-1 < iVar1) && (iVar1 < (int)(u32) * (u16 *)(a0 + 8))) {
        return *(u32 *)(iVar1 * 4 + *(int *)(a0 + 0xc));
    }
    return 0;
}

/*
 * asr_sub_120148  0x8c120148
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_120348
 */
u32 asr_sub_120148(u32 a0, char *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = asr_table_lookup(a0, (int)*a1);
    if (iVar1 == 0) {
        iVar1 = asr_table_lookup_b(a0, (int)*a1);
        if (iVar1 != 0) {
            uVar2 = asr_sub_1113d0(iVar1, (int)a1[1], a2, a3);
        }
    } else {
        uVar2 = (**(code **)(iVar1 + 0x1c))(iVar1, (int)a1[1], a2, a3);
        if (0xf9 <= (short)(u16)(u8)a1[1]) {
            uVar2 = asr_sub_1207e8(iVar1, (int)a1[1], a2);
        }
    }
    return uVar2;
}

/*
 * asr_sub_1201e6  0x8c1201e6
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_1201e6(int a0, u32 *a1, u32 *a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20) {
    u32 uVar1;

    *(u32 *)(a0 + 0x34) = a3;
    *(u32 *)(a0 + 0x38) = s12;
    *(u32 *)(a0 + 0x40) = 0;
    *(u32 *)(a0 + 0x1c) = *a1;
    *(u32 *)(a0 + 0x20) = a1[1];
    *(u32 *)(a0 + 0x24) = a1[2];
    *(u32 *)(a0 + 0x28) = a1[3];
    *(u32 *)(a0 + 0x2c) = a1[4];
    *(u32 *)(a0 + 0x30) = a1[5];
    *(u16 *)(a0 + 0x3c) = (u16)s16;
    *(u16 *)(a0 + 0x3e) = (u16)s20;
    *(u32 *)(a0 + 0x10) = *a2;
    *(u32 *)(a0 + 0x14) = a2[1];
    *(u32 *)(a0 + 0x18) = a2[2];
    uVar1 = asr_sub_11fcc4(a0, s0, s4, s8);
    if (((uVar1 & 0xff) == 0) && (uVar1 = asr_sub_120078(a0), (uVar1 & 0xff) == 0)) {
        return 0;
    }
    return 1;
}

/*
 * asr_sub_1201ea  0x8c1201ea
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_1201ea(u32 unused_a0, u32 *a1, u32 *a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20,
                   u32 s24) {
    u32 uVar1;
    int unaff_r14;

    *(u32 *)(unaff_r14 + 0x34) = a3;
    *(u32 *)(unaff_r14 + 0x38) = s16;
    *(u32 *)(unaff_r14 + 0x40) = 0;
    *(u32 *)(unaff_r14 + 0x1c) = *a1;
    *(u32 *)(unaff_r14 + 0x20) = a1[1];
    *(u32 *)(unaff_r14 + 0x24) = a1[2];
    *(u32 *)(unaff_r14 + 0x28) = a1[3];
    *(u32 *)(unaff_r14 + 0x2c) = a1[4];
    *(u32 *)(unaff_r14 + 0x30) = a1[5];
    *(u16 *)(unaff_r14 + 0x3c) = (u16)s20;
    *(u16 *)(unaff_r14 + 0x3e) = (u16)s24;
    *(u32 *)(unaff_r14 + 0x10) = *a2;
    *(u32 *)(unaff_r14 + 0x14) = a2[1];
    *(u32 *)(unaff_r14 + 0x18) = a2[2];
    uVar1 = asr_sub_11fcc4(unaff_r14, s4, s8, s12);
    if (((uVar1 & 0xff) == 0) && (uVar1 = asr_sub_120078(unaff_r14), (uVar1 & 0xff) == 0)) {
        return 0;
    }
    return 1;
}

/*
 * asr_sub_12025e  0x8c12025e
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11d200, asr_sub_11d20e
 */
u32 asr_sub_12025e(u32 a0) {
    u32 uVar1;

    uVar1 = asr_sub_11ffa8(a0);
    if ((uVar1 & 0xff) != 0) {
        return 1;
    }
    return 0;
}

/*
 * asr_sub_120284  0x8c120284
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11d5d4, asr_sub_11ec7c, asr_sub_1222b4
 */
u32 asr_sub_120284(u16 *a0, u8 *a1, u32 a2, u32 a3) {
    u8 bVar1;
    u16 uVar2;
    u8 *puVar3;
    u32 uVar4;
    u32 uVar5;
    int iVar6;
    u32 a5;
    u8 *a5_00;
    u16 uVar7;
    u32 uVar8;
    int a4;
    int *piVar9;
    u8 *pbVar10;

    puVar3 = (&asr_sub_1112e2);
    a5_00 = a1;
    if (a1 == NULL) {
        uVar2 = *a0;
        a5 = 0;
        do {
            uVar8 = 0;
            piVar9 = *(int **)(a0 + 2);
            uVar7 = 0;
            if (uVar2 != 0) {
                do {
                    uVar4 = (**(code **)(*piVar9 + 0x18))(*piVar9, a5, a2, a3);
                    iVar6 = *piVar9;
                    piVar9 = piVar9 + 1;
                    uVar5 = (*(code *)puVar3)(iVar6, a5, a2, a3);
                    uVar7 = uVar7 + 1;
                    uVar8 = uVar8 | uVar4 | uVar5;
                } while ((uVar7 & 0xff) < uVar2);
            }
        } while ((uVar8 & 0xff) != 0);
    } else {
        do {
            uVar2 = a0[1];
            iVar6 = *(int *)(a0 + 2);
            uVar8 = 0;
            bVar1 = *a1;
            pbVar10 = a1;
            while (bVar1 != 0) {
                bVar1 = *pbVar10;
                pbVar10 = pbVar10 + 1;
                a4 = *(int *)((u32)bVar1 * 4 + iVar6 + (u32)uVar2 * -4);
                uVar4 = (**(code **)(a4 + 0x18))(a4, a5_00, a2, a3);
                uVar5 = (*(code *)puVar3)(a4, a5_00, a2, a3);
                uVar8 = uVar8 | uVar4 | uVar5;
                bVar1 = *pbVar10;
            }
        } while ((uVar8 & 0xff) != 0);
    }
    return 0;
}

/*
 * asr_sub_120348  0x8c120348
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11919e, asr_sub_119218, asr_sub_119706, asr_sub_11abc6, asr_sub_11ac4c, asr_sub_11ad68,
 * asr_sub_11af7e, asr_sub_11cbbc (+27 more)
 */
u32 asr_sub_120348(int *a0, u32 a1, u32 a2, u32 a3) {
    char cVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    char *pcVar7;
    int *piVar8;
    u32 a7;
    u32 uVar9;
    int a4;

    iVar2 = a0[1];
    a4 = *a0;
    pcVar7 =
        *(char **)(*(int *)((u32) * (u16 *)(a4 + 0x3c) * 4 + *(int *)(a4 + 0x38)) + (u32) * (u16 *)(a4 + 0x3e) * 4);
    iVar6 = *(int *)(pcVar7 + 4);
    uVar9 = 0;
    for (; (iVar6 != 0 && (*pcVar7 != (char)iVar2)); pcVar7 = pcVar7 + 8) {
        iVar6 = *(int *)(pcVar7 + 0xc);
    }
    piVar8 = *(int **)(pcVar7 + 4);
    if (piVar8 != NULL) {
        iVar6 = *piVar8;
        while ((iVar6 != 0 && ((u32) * (u8 *)*piVar8 != (a1 & 0xff)))) {
            piVar8 = piVar8 + 1;
            iVar6 = *piVar8;
        }
        iVar6 = *piVar8;
        if (iVar6 != 0) {
            uVar3 = a2;
            a7 = a3;
            if ((*(u16 *)(iVar6 + 2) != 0xffff) && ((u32) * (u16 *)(iVar6 + 2) != (u32) * (u16 *)(a4 + 0x3e))) {
                *(u16 *)(a4 + 0x3e) = *(u16 *)(iVar6 + 2);
                uVar9 = (**(code **)(a4 + 0x1c))(a4, (int)*(short *)(a4 + 0x3e), a2, a3);
                if ((uVar9 & 0xff) != 0) {
                    return uVar9;
                }
            }
            if (*(char *)(iVar6 + 1) == '\0') {
                cVar1 = *(char *)(iVar6 + 9);
                iVar5 = iVar6 + 8;
                while (cVar1 != '\0') {
                    uVar4 = asr_sub_120148(a4, iVar5, a2, a3);
                    uVar9 = uVar9 | (uVar4 & 0xff) == 0;
                    cVar1 = *(char *)(iVar5 + 3);
                    iVar5 = iVar5 + 2;
                }
            } else {
                uVar3 = asr_table_lookup(a4, (int)*(char *)(iVar6 + 1));
                iVar5 = asr_sub_1208fc(iVar6 + 8, uVar3, a4, a7);
                uVar9 = (u32)(iVar5 == 0);
            }
            if (*(int *)(iVar6 + 4) != 0) {
                uVar4 = (**(code **)(iVar6 + 4))(a4, (int)(char)iVar2, a1, a2);
                uVar9 = uVar9 | uVar4;
            }
            return uVar9;
        }
    }
    uVar3 = asr_fsm_set_result(a0, 5, a2, a3);
    return uVar3;
}

/*
 * asr_fsm_set_result  0x8c1204c4
 * records the first result code (+0x40) and passes it to the result callback (+0x2c)
 * called by: asr_sub_10d016, asr_sub_10f736, asr_sub_10f742, asr_sub_110c80, asr_sub_11194c, asr_sub_111adc,
 * asr_sub_1122ac, asr_sub_112b6e (+37 more)
 */
int asr_fsm_set_result(int *a0, u32 a1, u32 a2, u32 a3) {
    int a4;

    a4 = *a0;
    if (*(int *)(a4 + 0x40) == 0) {
        *(u32 *)(a4 + 0x40) = (u32)CONCAT12((char)a0[1], (short)a1);
    }
    if (*(int *)(a4 + 0x2c) != 0) {
        (**(code **)(a4 + 0x2c))(a4, *(u32 *)(a4 + 0x40), a2, a3);
    }
    return (int)(short)a1;
}

/*
 * asr_sub_12050a  0x8c12050a
 * area name: sits between asr functions (same compilation unit)
 */
int asr_sub_12050a(int *a0, u32 a1, u32 a2, u32 a3) {
    int a4;

    a4 = *a0;
    if (*(int *)(a4 + 0x44) == 0) {
        *(u32 *)(a4 + 0x44) = (u32)CONCAT12((char)a0[1], (short)a1);
    }
    if (*(int *)(a4 + 0x30) != 0) {
        (**(code **)(a4 + 0x30))(a4, *(u32 *)(a4 + 0x44), a2, a3);
    }
    return (int)(short)a1;
}

/*
 * asr_state_has_event  0x8c120550
 * 4 when the current state's event table (+0x34) holds code a1
 * called by: asr_sub_10ad00, asr_sub_10c48c, asr_sub_10cccc, asr_sub_10df48, asr_sub_10f41e, asr_sub_10fece,
 * asr_sub_110818, asr_sub_110c80 (+16 more)
 */
int asr_state_has_event(int *a0, u32 a1, u32 a2) {
    int iVar1;
    short *psVar2;

    iVar1 = *(int *)(*a0 + 0x34);
    for (psVar2 = *(short **)(iVar1 + (u32) * (u8 *)(a0 + 1) * 4); (*psVar2 != (short)a1 && (*psVar2 != 0));
         psVar2 = psVar2 + 4) {
    }
    if (*psVar2 != 0) {
        iVar1 = 4;
    }
    return iVar1;
}

/*
 * asr_sub_120580  0x8c120580
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_124b0c
 */
u32 asr_sub_120580(int a0, u32 a1, u32 a2, u32 a3, int s0, int s4, int s8, u32 s12) {
    int *a5;
    int iVar1;
    u32 a7;
    int iStack_1c;
    u8 uStack_18;

    a7 = a3;
    a5 = (int *)(**(code **)(a0 + 0x14))(a0, 1, s12, a3);
    iStack_1c = a0;
    uStack_18 = (u8)a1;
    if (a5 == NULL) {
        asr_fsm_set_result(&iStack_1c, 2, s12, a7);
    } else {
        if ((u8)a2 != 0) {
            s12 = 8;
            iVar1 = (**(code **)(a0 + 0x14))(a0, (u32)(u8)a2, 8, a7);
            a5[3] = iVar1;
        }
        if ((a3 & 0xff) != 0) {
            s12 = 4;
            iVar1 = (**(code **)(a0 + 0x14))(a0, a3 & 0xff, 4, a7);
            a5[4] = iVar1;
        }
        if ((((u8)a2 == 0) || (a5[3] != 0)) && (((a3 & 0xff) == 0 || (a5[4] != 0)))) {
            *a5 = a0;
            *(u8 *)(a5 + 1) = (u8)a1;
            *(u8 *)(a5 + 2) = (u8)a2;
            *(char *)((int)a5 + 9) = (char)a3;
            a5[5] = s4;
            a5[7] = s8;
            a5[6] = s0;
            a5[9] = s0;
            *(u8 *)(a5 + 8) = 1;
            return a5;
        }
        (**(code **)(a0 + 0x18))(a0, a5, s12, a7);
        asr_fsm_set_result(&iStack_1c, 2, s12, a7);
    }
    return 0;
}

/*
 * asr_sub_120668  0x8c120668
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_10ac3c, asr_sub_10c838, asr_sub_10cc6e, asr_sub_10f39a, asr_sub_10f8e6, asr_sub_1107b0,
 * asr_sub_1109d2, asr_sub_110bec (+5 more)
 */
u32 asr_sub_120668(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    if ((char)a0[2] != '\0') {
        (**(code **)(*a0 + 0x18))(*a0, a0[3], a2, a3);
    }
    if (*(char *)((int)a0 + 9) != '\0') {
        (**(code **)(*a0 + 0x18))(*a0, a0[4], a2, a3);
    }
    /* WARNING: Could not recover jumptable at 0x8c1206b2. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*a0 + 0x18))(*a0, a0);
    return uVar1;
}

/*
 * asr_sub_1206ba  0x8c1206ba
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_120798, asr_sub_1207e8, asr_sub_1207f0
 */
u32 asr_sub_1206ba(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    char cVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 uVar5;

    puVar1 = (&asr_sub_1113d0);
    uVar4 = 0;
    uVar5 = 0;
    if (*(char *)(a0 + 8) != '\0') {
        do {
            puVar3 = (u32 *)(uVar5 * 8 + *(int *)(a0 + 0xc));
            cVar2 = (*(code *)puVar1)(*puVar3, 6, puVar3[1], 0);
            uVar4 = uVar4 | cVar2 == '\0';
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(u8 *)(a0 + 8));
    }
    return uVar4;
}

/*
 * asr_sub_1206cc  0x8c1206cc
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_1206cc(u32 a0) {
    u8 *puVar1;
    u32 uVar2;
    u32 in_r3;
    u32 *puVar3;
    u32 unaff_r12;
    int unaff_r13;

    puVar1 = (&asr_sub_1113d0);
    if (in_r3 < *(u8 *)(unaff_r13 + 8)) {
        do {
            puVar3 = (u32 *)(a0 * 8 + *(int *)(unaff_r13 + 0xc));
            uVar2 = (*(code *)puVar1)(*puVar3, 6, puVar3[1], 0);
            unaff_r12 = unaff_r12 | (uVar2 & 0xff) == 0;
            a0 = a0 + 1;
        } while (a0 < *(u8 *)(unaff_r13 + 8));
    }
    return unaff_r12;
}

/*
 * asr_sub_12071a  0x8c12071a
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_1207c6, asr_sub_1207e8, asr_sub_1207f0
 */
u32 asr_sub_12071a(int a0, int a1, u32 a2, u32 a3) {
    u8 *puVar1;
    char cVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    puVar1 = (&asr_sub_1113d0);
    if (a1 == 0) {
        uVar3 = 5;
    } else {
        uVar3 = 7;
    }
    uVar5 = 0;
    uVar6 = 0;
    if (*(char *)(a0 + 8) != '\0') {
        do {
            puVar4 = (u32 *)(uVar6 * 8 + *(int *)(a0 + 0xc));
            cVar2 = (*(code *)puVar1)(*puVar4, uVar3, puVar4[1], a1);
            uVar5 = uVar5 | cVar2 == '\0';
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(u8 *)(a0 + 8));
    }
    return uVar5;
}

/*
 * asr_sub_12072a  0x8c12072a
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_12072a(int a0) {
    u8 *puVar1;
    u32 uVar2;
    u32 a5;
    u32 unaff_r10;
    u32 *puVar3;
    u32 uVar4;
    u32 uVar5;
    char in_T;

    puVar1 = (&asr_sub_1113d0);
    if (in_T == '\x01') {
        a5 = 5;
    } else {
        a5 = 7;
    }
    uVar4 = 0;
    uVar5 = 0;
    if (*(char *)(a0 + 8) != '\0') {
        do {
            puVar3 = (u32 *)(uVar5 * 8 + *(int *)(a0 + 0xc));
            uVar2 = (*(code *)puVar1)(*puVar3, a5, puVar3[1], unaff_r10);
            uVar4 = uVar4 | (uVar2 & 0xff) == 0;
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(u8 *)(a0 + 8));
    }
    return uVar4;
}

/*
 * asr_sub_120798  0x8c120798
 * area name: in the asr library code range
 * called by: asr_sub_1207e8, asr_sub_1207f0, asr_sub_121896, asr_sub_1219f4
 */
u32 asr_sub_120798(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;

    uVar2 = asr_sub_1206ba(a0, unused_a1, a2, a3);
    puVar1 = (&DATA_8c1206b6);
    if ((uVar2 & 0xff) != 0) {
        return 1;
    }
    if (*(u8 **)(a0 + 0x18) != (&DATA_8c1206b6)) {
        *(u32 *)(a0 + 0x24) = *(u32 *)(a0 + 0x18);
        *(u8 **)(a0 + 0x18) = puVar1;
    }
    return 0;
}

/*
 * asr_sub_1207c6  0x8c1207c6
 * area name: in the asr library code range
 * called by: asr_sub_1207e8, asr_sub_1207f0, asr_sub_1219f4
 */
u32 asr_sub_1207c6(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = asr_sub_12071a(a0, a1, a2, a3);
    if ((uVar1 & 0xff) != 0) {
        return 1;
    }
    *(u32 *)(a0 + 0x18) = *(u32 *)(a0 + 0x24);
    return 0;
}

/*
 * asr_sub_1207e8  0x8c1207e8
 * area name: in the asr library code range
 * called by: asr_sub_120148
 */
u32 asr_sub_1207e8(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 uVar2;

    uVar1 = a1 & 0xff;
    uVar2 = 1;
    if (uVar1 == (int)0xf9) {
    LAB_8c12085e:
        if (*(char *)(a0 + 0x20) != '\0') {
            uVar1 = asr_sub_1207c6(a0, a2, 1, 1);
            uVar2 = (u32)((uVar1 & 0xff) == 0);
        }
    } else {
        if (uVar1 == (int)0xfa) {
        LAB_8c120846:
            uVar1 = asr_sub_120798(a0, a1, 1, 1);
        } else {
            if (uVar1 == (int)0xfb) {
                a2 = 0;
                *(u8 *)(a0 + 0x20) = 1;
                goto LAB_8c12085e;
            }
            if (uVar1 == (int)0xfc) {
                *(u8 *)(a0 + 0x20) = 0;
                goto LAB_8c120846;
            }
            if (uVar1 == (int)0xfd) {
                uVar1 = asr_sub_12071a(a0, a2, 1, 1);
            } else {
                if (uVar1 != (int)0xfe) {
                    return 0;
                }
                uVar1 = asr_sub_1206ba(a0, a1, 1, 1);
            }
        }
        uVar2 = (u32)((uVar1 & 0xff) == 0);
    }
    return uVar2;
}

/*
 * asr_sub_1207f0  0x8c1207f0
 * area name: in the asr library code range
 */
u32 asr_sub_1207f0(int a0) {
    u32 r5;
    int in_r0;
    int in_r1;
    u32 uVar1;
    u32 unaff_r14;

    uVar1 = 1;
    if (in_r0 == in_r1) {
    LAB_8c12085e:
        if (*(char *)(a0 + 0x20) != '\0') {
            uVar1 = asr_sub_1207c6(a0, unaff_r14, 1, 1);
            uVar1 = (u32)((uVar1 & 0xff) == 0);
        }
    } else {
        if (in_r0 == 0xfa) {
        LAB_8c120846:
            uVar1 = asr_sub_120798(a0, r5, 1, 1);
        } else {
            if (in_r0 == 0xfb) {
                unaff_r14 = 0;
                *(u8 *)(a0 + 0x20) = 1;
                goto LAB_8c12085e;
            }
            if (in_r0 == 0xfc) {
                *(u8 *)(a0 + 0x20) = 0;
                goto LAB_8c120846;
            }
            if (in_r0 == 0xfd) {
                uVar1 = asr_sub_12071a(a0, unaff_r14, 1, 1);
            } else {
                if (in_r0 != 0xfe) {
                    return 0;
                }
                uVar1 = asr_sub_1206ba(a0, r5, 1, 1);
            }
        }
        uVar1 = (u32)((uVar1 & 0xff) == 0);
    }
    return uVar1;
}

/*
 * asr_sub_120890  0x8c120890
 * area name: in the asr library code range
 * called by: asr_sub_1208fc
 */
u32 *asr_sub_120890(int a0, int a1, u32 a2, u32 a3) {
    char cVar1;
    int iVar2;
    u32 *puVar3;
    u32 uVar4;

    uVar4 = 0;
    cVar1 = *(char *)(a0 + 1);
    iVar2 = a0;
    while (cVar1 != '\0') {
        uVar4 = uVar4 + 1;
        cVar1 = *(char *)(iVar2 + 3);
        iVar2 = iVar2 + 2;
    }
    puVar3 = (u32 *)(**(code **)(a1 + 0x10))(a1, ((uVar4 & 0xffff) - 1) * 2 + 0xc, a2, a3);
    if (puVar3 != NULL) {
        memmove(puVar3 + 2, a0, (uVar4 & 0xffff) << 1);
        *puVar3 = uVar4 & 0xffff;
        puVar3[1] = 0;
    }
    return puVar3;
}

/*
 * asr_sub_1208fc  0x8c1208fc
 * area name: in the asr library code range
 * called by: asr_sub_120348
 */
u32 asr_sub_1208fc(u32 a0, u32 a1, int a2, u32 a3) {
    u32 a4;
    u32 uVar1;
    int a6;
    u32 a7;

    a4 = asr_sub_120890(a0, a2, a2, a3);
    a7 = 0;
    a6 = a2;
    uVar1 = asr_sub_1209ec(a4, a1, a2, 0);
    if ((uVar1 & 0xff) != 0) {
        (**(code **)(a2 + 0x18))(a2, a4, a6, a7);
        a4 = 0;
    }
    return a4;
}

/*
 * asr_sub_120948  0x8c120948
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_1113d0
 */
u32 asr_sub_120948(int *a0, int a1) {
    u8 *puVar1;
    char cVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;

    puVar1 = (&asr_sub_120148);
    uVar5 = 1;
    uVar3 = 0;
    iVar4 = 0;
    if (0 < *a0) {
        do {
            cVar2 = (*(code *)puVar1)(a1, (int)a0 + iVar4 * 2 + 8, 0, uVar5);
            iVar4 = iVar4 + 1;
            uVar3 = (u32)(cVar2 == '\0');
        } while (iVar4 < *a0);
    }
    *a0 = 0;
    if (a0[1] == 0) {
        (**(code **)(a1 + 0x18))(a1, a0);
    }
    return uVar3;
}

/*
 * asr_sub_12095c  0x8c12095c
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_12095c(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    int unaff_r10;
    int unaff_r11;
    u32 unaff_r12;
    int iVar3;
    int *unaff_r14;

    puVar1 = (&asr_sub_120148);
    iVar3 = unaff_r10;
    if (0 < *unaff_r14) {
        do {
            a3 = 0;
            a2 = 0;
            uVar2 = (*(code *)puVar1)(unaff_r11, (int)unaff_r14 + iVar3 * 2 + 8, 0, 0);
            iVar3 = iVar3 + 1;
            unaff_r12 = (u32)((uVar2 & 0xff) == 0);
        } while (iVar3 < *unaff_r14);
    }
    *unaff_r14 = unaff_r10;
    if (unaff_r14[1] == 0) {
        (**(code **)(unaff_r11 + 0x18))(unaff_r11, unaff_r14, a2, a3);
    }
    return unaff_r12;
}

/*
 * asr_sub_1209be  0x8c1209be
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_1209ec
 */
int asr_sub_1209be(int *a0, int a1) {
    int in_r0;
    u8 *puVar1;

    if (a1 < *a0 + -1) {
        do {
            puVar1 = (u8 *)((int)a0 + a1 * 2 + 8);
            a1 = a1 + 1;
            *puVar1 = puVar1[2];
            in_r0 = (int)(char)puVar1[3];
            puVar1[1] = puVar1[3];
        } while (a1 < *a0 + -1);
    }
    *a0 = *a0 + -1;
    return in_r0;
}

/*
 * asr_sub_1209ec  0x8c1209ec
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_111208, asr_sub_1208fc
 */
u32 asr_sub_1209ec(int *a0, int a1, int *a2, int *a3) {
    char cVar1;
    u32 uVar2;
    int *ar6_00;
    int *ar7_00;
    int *piVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    int *piVar7;

    piVar3 = (int *)&stack0xffffffd8;
    uVar4 = 0;
    a0[1] = a0[1] + 1;
    ar6_00 = a2;
    ar7_00 = a3;
    if (a1 != 0) {
        cVar1 = *(char *)(a1 + 4);
        iVar5 = 0;
        if (0 < *a0) {
            do {
                if (cVar1 == *(char *)((int)a0 + iVar5 * 2 + 8)) {
                    ar7_00 = NULL;
                    ar6_00 = a3;
                    uVar2 = (**(code **)(a1 + 0x1c))(a1, (int)*(char *)((int)a0 + iVar5 * 2 + 9), a3, 0);
                    uVar4 = uVar4 | (uVar2 & 0xff) == 0;
                    asr_sub_1209be(a0, iVar5);
                } else {
                    iVar5 = iVar5 + 1;
                }
            } while (iVar5 < *a0);
        }
        if (*a0 != 0) {
            iVar5 = 0;
            ar6_00 = a0;
            (**(code **)(a1 + 0x1c))(a1, 0xf8, a0, &stack0xffffffd8);
            ar7_00 = piVar3;
            if (-1 < iVar5) {
                piVar3 = (int *)(iVar5 + (int)a3);
                for (iVar6 = 0; iVar6 < (int)(u32) * (u8 *)(a1 + 9); iVar6 = iVar6 + 1) {
                    ar6_00 = a0;
                    piVar7 = piVar3;
                    uVar2 = asr_sub_1113d0(*(u32 *)(iVar6 * 4 + *(int *)(a1 + 0x10)), 0xf8, a0, piVar3);
                    uVar4 = uVar4 | (uVar2 & 0xff) == 0;
                    ar7_00 = piVar3;
                    piVar3 = piVar7;
                }
            }
        }
    }
    iVar5 = a0[1];
    a0[1] = iVar5 + -1;
    if (iVar5 + -1 == 0) {
        (*(code *)a2[6])(a2, a0, ar6_00, ar7_00);
    }
    return uVar4;
}

/*
 * asr_sub_120b1a  0x8c120b1a
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_120b1a(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = asr_sub_1113d0(a1, (int)0xf8, a0, a2);
    return (u32)((uVar1 & 0xff) == 0);
}

/*
 * asr_sub_120b48  0x8c120b48
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_121690, asr_sub_12169e
 */
u32 asr_sub_120b48(int a0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    float *pfVar5;
    u32 uVar6;
    int *piVar7;
    u32 d;
    u32 uVar8;
    u32 uVar9;
    int iVar10;
    u16 *puVar11;
    float *pfVar12;
    double in_dr2;
    float fVar13;
    u32 in_fr5;
    u64 uVar14;
    double dVar15;
    u8 in_FPSCR_DN;
    u8 bVar16;
    u8 bVar17;
    float *pfStack_30;
    int iStack_2c;

    bVar17 = 0;
    bVar16 = 0;
    uVar6 = 0;
    piVar7 = *(int **)(a0 + 0x284);
    iStack_2c = 0;
    d = (u32) * (u16 *)(a0 + 0x288);
    uVar3 = 0x8c120c6c;
    dVar15 = 0.5;
    uVar14 = (u64)in_fr5;
    for (; piVar7 != NULL; piVar7 = (int *)piVar7[4]) {
        uVar4 = libgcc_divide_helper_01051c(piVar7[1], d);
        uVar3 = uVar4;
        uVar9 = uVar6;
        if (d != 0) {
            do {
                pfStack_30 = *(float **)(a0 + 0x28c + iStack_2c * 4);
                pfVar12 = *(float **)(a0 + 0x29c);
                uVar3 = uVar6;
                if (uVar4 != 0) {
                    do {
                        iVar10 = *piVar7;
                        if (bVar17 == 0) {
                            *pfVar12 = (float)(uVar14 >> 0x20);
                        } else {
                            *(u64 *)pfVar12 = uVar14;
                        }
                        puVar11 = (u16 *)(iVar10 + uVar9 * 2);
                        uVar8 = uVar6;
                        if (uVar4 != 0) {
                            do {
                                uVar8 = uVar8 + 1;
                                pfVar5 = pfStack_30 + 1;
                                in_FPSCR_DN = 0;
                                bVar16 = 0;
                                bVar17 = 0;
                                fVar13 = (float)*puVar11 * *pfStack_30 + *pfVar12;
                                in_dr2 = (double)CONCAT44(fVar13, *pfStack_30);
                                *pfVar12 = fVar13;
                                puVar11 = puVar11 + d;
                                pfStack_30 = pfVar5;
                            } while (uVar8 < uVar4);
                        }
                        uVar3 = uVar3 + 1;
                        pfVar12 = pfVar12 + 1;
                    } while (uVar3 < uVar4);
                }
                iVar10 = uVar9 * 2;
                pfVar12 = *(float **)(a0 + 0x29c);
                puVar11 = (u16 *)(*piVar7 + iVar10);
                uVar8 = uVar6;
                uVar3 = uVar6;
                if (uVar4 != 0) {
                    do {
                        fVar13 = SUB84(in_dr2, 0);
                        uVar1 = (u32)in_FPSCR_DN;
                        uVar2 = (u32)bVar16;
                        uVar3 = uVar3 + 1;
                        if (bVar17 == 0) {
                            fVar13 = *pfVar12;
                            pfVar12 = pfVar12 + 1;
                        } else {
                            pfVar12 = pfVar12 + 2;
                        }
                        in_FPSCR_DN = 0;
                        bVar16 = 0;
                        bVar17 = (u8)(((uVar1 << 0x12 | uVar2 << 0x13 | (u32)bVar17 << 0x14) & 0x100000) >> 0x14);
                        in_dr2 = (double)fVar13 + dVar15;
                        *puVar11 = (u16)(int)in_dr2;
                        uVar8 = uVar8 + *puVar11;
                        puVar11 = puVar11 + d;
                    } while (uVar3 < uVar4);
                }
                uVar9 = uVar9 + 1;
                uVar3 = piVar7[2];
                *(short *)(uVar3 + iVar10) = (short)uVar8;
            } while (uVar9 < d);
        }
        iStack_2c = iStack_2c + 1;
    }
    return uVar3;
}

/*
 * asr_sub_120c7c  0x8c120c7c
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_121690, asr_sub_12169e
 */
u32 *asr_sub_120c7c(int a0) {
    u16 uVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 d;
    u16 *ar4_00;
    u32 ar5_00;
    float *ar6_00;
    u16 *puVar4;
    u16 *puVar5;
    u32 uVar6;
    int iVar7;
    int *piVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    u32 uStack_38;

    d = (u32) * (u16 *)(a0 + 0x288);
    fVar12 = *(float *)(a0 + 0x2a4);
    puVar2 = (u32 *)0x2a0;
    fVar13 = *(float *)(a0 + 0x2a0);
    for (piVar8 = *(int **)(a0 + 0x284); piVar8 != NULL; piVar8 = (int *)piVar8[4]) {
        uVar3 = libgcc_divide_helper_01051c(piVar8[1], d);
        fVar10 = (float)(int)uVar3;
        if ((int)uVar3 < 0) {
            fVar10 = fVar10 + 4.2949673e+09;
        }
        puVar2 = &g_8c120dd8;
        uStack_38 = 0;
        fVar11 = fVar13 * fVar10 + 1.0;
        puVar4 = (u16 *)*piVar8;
        iVar7 = 0;
        fVar10 = fVar13;
        if (d != 0) {
            do {
                uVar1 = *(u16 *)(piVar8[2] + iVar7);
                ar4_00 = (u16 *)(*piVar8 + iVar7);
                ar6_00 = *(float **)(a0 + 0x2a8);
                ar5_00 = 0;
                if (uVar3 != 0) {
                    do {
                        ar5_00 = ar5_00 + 1;
                        *ar6_00 = ((float)*ar4_00 / (float)uVar1 + fVar13) / fVar11;
                        ar4_00 = ar4_00 + d;
                        ar6_00 = ar6_00 + 1;
                    } while (ar5_00 < uVar3);
                }
                puVar2 = (u32 *)0x2a8;
                uVar6 = 0;
                puVar5 = puVar4;
                fVar9 = fVar10;
                if (uVar3 != 0) {
                    do {
                        thunk_FUN_8c013dfc();
                        uVar6 = uVar6 + 1;
                        fVar9 = -fVar10;
                        puVar2 = (u32 *)&g_8c120ddc;
                        fVar10 = 1.75;
                        *puVar5 = (short)(int)((fVar9 * 255.0) / fVar12 + 0.5);
                        puVar5 = puVar5 + d;
                        fVar9 = 1.75;
                    } while (uVar6 < uVar3);
                }
                fVar10 = fVar9;
                puVar4 = puVar4 + 1;
                uStack_38 = uStack_38 + 1;
                iVar7 = iVar7 + 2;
            } while (uStack_38 < d);
        }
    }
    return puVar2;
}

/*
 * asr_sub_120e12  0x8c120e12
 * area name: in the asr library code range
 * called by: asr_sub_121690, asr_sub_12169e
 */
int asr_sub_120e12(int a0, int a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    short *psVar3;
    u16 *puVar4;
    int iVar5;
    u16 *puVar6;
    int iVar7;
    int iVar8;
    u8 *pbVar9;
    u32 uVar10;
    u32 uVar11;
    int *piVar12;
    u16 uStack_28;

    piVar12 = *(int **)(0x284 + a0);
    uVar11 = (u32) * (u16 *)(0x284 + 4 + a0);
    uVar1 = (**(code **)(*(int *)(0x108 + a0) + 8))(*(int *)(0x108 + a0), a1, a2, a3);
    uStack_28 = 0;
    iVar2 = *(int *)(0x2b0 + a0);
    puVar4 = *(u16 **)(iVar2 + (a2 * 3 + a1) * 4);
    for (; piVar12 != NULL; piVar12 = (int *)piVar12[4]) {
        iVar5 = *piVar12;
        uVar10 = 0;
        iVar7 = 0;
        iVar2 = piVar12[2];
        iVar8 = *puVar4 - 1;
        pbVar9 = (u8 *)(*(int *)(0x118 + a0 + a1 * 4) + (uVar1 & 0xffff) * iVar8 + (u32)uStack_28);
        puVar6 = puVar4;
        if (uVar11 != 0) {
            do {
                puVar6 = puVar6 + 1;
                if ((int)(u32)*puVar6 <= iVar8) {
                    do {
                        iVar8 = iVar8 + -1;
                        psVar3 = (short *)(*pbVar9 * uVar11 * 2 + iVar7 + iVar5);
                        *psVar3 = *psVar3 + 0x32;
                        *(short *)(iVar2 + iVar7) = *(short *)(iVar2 + iVar7) + 0x32;
                        pbVar9 = pbVar9 + -(uVar1 & 0xffff);
                    } while ((int)(u32)*puVar6 <= iVar8);
                }
                uVar10 = uVar10 + 1;
                iVar7 = iVar7 + 2;
            } while (uVar10 < uVar11);
        }
        iVar2 = (short)uStack_28 + 1;
        uStack_28 = (u16)iVar2;
    }
    return iVar2;
}

/*
 * asr_sub_120f04  0x8c120f04
 * area name: in the asr library code range
 * called by: asr_sub_122358
 */
u32 asr_sub_120f04(int a0, u32 a1, u32 a2, int a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int *piVar4;
    int iVar5;
    u32 a5;
    int a4;
    int a4_00;
    float fVar6;
    float in_fr13;
    u64 in_dr14;
    u64 uVar7;
    u64 in_xd14;
    int iVar8;
    char cVar9;
    u32 uStack_34;
    int *piStack_30;

    cVar9 = '\0';
    a4 = *(int *)(a0 + 0xfc);
    a4_00 = *(int *)(a0 + 0x108);
    *(u32 *)(a0 + 0x284) = 0;
    piStack_30 = (int *)(a0 + 0x284);
    *(u16 *)(a0 + 0x2ac) = 0;
    uVar1 = (**(code **)(a4_00 + 8))(a4_00, a1, a2, a3);
    uVar2 = (u32)in_dr14;
    uStack_34 = 0;
    if (uVar1 != 0) {
        do {
            uVar3 = uStack_34;
            uVar2 = (**(code **)(a4_00 + 0x84))(a4_00, uStack_34, a2, a3);
            uVar3 = (**(code **)(a4_00 + 0x60))(uVar2, uVar3, a2, a3);
            if (*(u16 *)(a0 + 0x2ac) < uVar3) {
                *(short *)(a0 + 0x2ac) = (short)uVar3;
            }
            piVar4 = (int *)(**(code **)(a4 + 0x14))(0x14, a0 + 0xf4, a2, a3);
            if (piVar4 == NULL)
                goto LAB_8c121104;
            *piVar4 = 0;
            piVar4[2] = 0;
            *piStack_30 = (int)piVar4;
            iVar8 = uVar3 * *(u16 *)(a0 + 0x288);
            iVar5 = asr_calloc(a4, iVar8 * 2, 1, a0 + 0xf4);
            *piVar4 = iVar5;
            if (iVar5 == 0)
                goto LAB_8c121104;
            a2 = 1;
            piVar4[1] = iVar8;
            a3 = a0 + 0xf4;
            cVar9 = '\0';
            iVar5 = asr_calloc(a4, (u32) * (u16 *)(a0 + 0x288) << 1, 1, a3);
            uVar2 = (u32)in_dr14;
            piVar4[2] = iVar5;
            if (iVar5 == 0)
                goto LAB_8c121104;
            piVar4[3] = (u32) * (u16 *)(a0 + 0x288);
            piStack_30 = piVar4 + 4;
            piVar4[4] = 0;
            uStack_34 = uStack_34 + 1;
        } while (uStack_34 < uVar1);
    }
    uVar3 = 0;
    if (cVar9 == '\0') {
        uVar2 = 0;
    } else {
        in_xd14 = 0x3f80000000000000;
    }
    if (cVar9 == '\0') {
        uVar7 = CONCAT44(0x3f800000, uVar2);
    } else {
        uVar7 = 0x4f8000003f800000;
    }
    uVar2 = (u32)uVar7;
    if (uVar1 != 0) {
        do {
            a5 = uVar3;
            uVar2 = (**(code **)(a4_00 + 0x84))(a4_00, uVar3, a2, a3);
            cVar9 = '\0';
            (**(code **)(a4_00 + 0x60))(uVar2, a5, a2, a3);
            if (cVar9 == '\0') {
                in_fr13 = *(float *)(a0 + 0x2a0);
            }
            fVar6 = in_fr13;
            thunk_FUN_8c013dfc();
            cVar9 = '\0';
            uVar3 = uVar3 + 1;
            if ((float)uVar7 < -fVar6) {
                uVar7 = (u64)(u32)-fVar6;
            }
            uVar2 = (u32)uVar7;
        } while (uVar3 < uVar1);
    }
    if (cVar9 == '\0') {
        *(u32 *)(a0 + 0x2a4) = uVar2;
    } else {
        *(u64 *)(a0 + 0x2a4) = in_xd14;
    }
    uVar2 = (**(code **)(a4 + 0x14))((u32) * (u16 *)(a0 + 0x2ac) << 2, a0 + 0xf4, a2, a3);
    *(u32 *)(a0 + 0x2a8) = uVar2;
    uVar2 = asr_calloc(a4, (u32) * (u16 *)(a0 + 0x2ac), 4, a0 + 0xf4);
    *(u32 *)(a0 + 0x29c) = uVar2;
    if ((*(int *)(a0 + 0x2a8) == 0) || (*(int *)(a0 + 0x29c) == 0)) {
    LAB_8c121104:
        uVar2 = 1;
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_free_node_list  0x8c121124
 * frees every node of the list at +0x284 and the buffers at +0x2a8 and +0x29c
 * called by: asr_sub_121690, asr_sub_12169e
 */
u32 asr_free_node_list(int a0) {
    u32 *puVar1;
    u32 uVar2;
    u32 *puVar3;
    int iVar4;

    iVar4 = *(int *)(0xfc + a0);
    puVar1 = *(u32 **)(0x284 + a0);
    while (puVar1 != NULL) {
        puVar3 = (u32 *)puVar1[4];
        (**(code **)(iVar4 + 0x18))(*puVar1, 0xf4 + a0);
        (**(code **)(iVar4 + 0x18))(puVar1[2], 0xf4 + a0);
        (**(code **)(iVar4 + 0x18))(puVar1, 0xf4 + a0);
        puVar1 = puVar3;
    }
    (**(code **)(iVar4 + 0x18))(*(u32 *)(0x2a8 + a0), 0xf4 + a0);
    /* WARNING: Could not recover jumptable at 0x8c1211a8. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar4 + 0x18))(*(u32 *)(0x29c + a0), 0xf4 + a0);
    return uVar2;
}

/*
 * asr_sub_12112c  0x8c12112c
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_12112c(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 *a4;
    int in_r0;
    u32 uVar1;
    u32 *puVar2;
    int iVar3;
    int unaff_r13;

    iVar3 = *(int *)(in_r0 + unaff_r13);
    a4 = *(u32 **)(0x284 + unaff_r13);
    while (a4 != NULL) {
        puVar2 = (u32 *)a4[4];
        (**(code **)(iVar3 + 0x18))(*a4, 0xf4 + unaff_r13, a2, a3);
        (**(code **)(iVar3 + 0x18))(a4[2], 0xf4 + unaff_r13, a2, a3);
        (**(code **)(iVar3 + 0x18))(a4, 0xf4 + unaff_r13, a2, a3);
        a4 = puVar2;
    }
    (**(code **)(iVar3 + 0x18))(*(u32 *)(0x2a8 + unaff_r13), 0xf4 + unaff_r13, a2, a3);
    /* WARNING: Could not recover jumptable at 0x8c1211a8. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(iVar3 + 0x18))(*(u32 *)(0x29c + unaff_r13), 0xf4 + unaff_r13);
    return uVar1;
}

/*
 * asr_sum_table_strided  0x8c1211ac
 * sum of 8c1293e4[byte] over a1 bytes at a0, stride a2
 * called by: asr_sub_1213d0
 */
int asr_sum_table_strided(u8 *a0, u32 a1, int a2) {
    u32 uVar1;
    int iVar2;

    iVar2 = 0;
    uVar1 = 0;
    if (a1 != 0) {
        do {
            uVar1 = uVar1 + 1;
            iVar2 = iVar2 + *(int *)((&DATA_8c1293e4) + (u32)*a0 * 4);
            a0 = a0 + a2;
        } while (uVar1 < a1);
    }
    return iVar2;
}

/*
 * asr_sub_1211f0  0x8c1211f0
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_1213d0
 */
u8 *asr_sub_1211f0(int *a0, u8 *a1, int a2, u16 *a3, u32 s0, u32 s4) {
    u8 bVar1;
    u16 uVar2;
    u8 *in_r0;
    u32 uVar3;
    int *piVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;

    iVar5 = *(int *)(&DATA_8c1293e0);
    uVar3 = 0;
    if (s4 != 0) {
        do {
            bVar1 = *a1;
            a1 = a1 + a2;
            uVar7 = (u32)bVar1;
            iVar5 = iVar5 + uVar7 * -2;
            uVar6 = 0;
            piVar4 = a0;
            if (s0 != 0) {
                do {
                    in_r0 = (&DATA_8c1293e4);
                    uVar2 = *a3;
                    a3 = a3 + 1;
                    uVar6 = uVar6 + 1;
                    *piVar4 =
                        *piVar4 + *(int *)((&DATA_8c1293e4) + ((int)*(short *)((u32)uVar2 * 2 + iVar5) + uVar7) * 4);
                    piVar4 = piVar4 + 1;
                } while (uVar6 < s0);
            }
            uVar3 = uVar3 + 1;
            iVar5 = iVar5 + uVar7 * 2;
        } while (uVar3 < s4);
    }
    return in_r0;
}

/*
 * asr_sub_121260  0x8c121260
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_1213d0
 */
int asr_sub_121260(u8 *a0, int a1, u32 a2, int a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;

    uVar2 = a3 + 1U >> 1;
    iVar3 = 0;
    if (a1 == 0) {
        uVar1 = 0;
        if (a2 != 0) {
            do {
                uVar1 = uVar1 + 1;
                iVar3 = iVar3 + *(int *)((&DATA_8c1293e4) + ((u32)*a0 & (int)0xf0) * 4);
                a0 = a0 + uVar2;
            } while (uVar1 < a2);
        }
    } else {
        uVar1 = 0;
        if (a2 != 0) {
            do {
                uVar1 = uVar1 + 1;
                iVar3 = iVar3 + *(int *)((&DATA_8c1293e4) + ((u32)*a0 << 4 & (int)0xf0) * 4);
                a0 = a0 + uVar2;
            } while (uVar1 < a2);
        }
    }
    return iVar3;
}

/*
 * asr_sub_1212d4  0x8c1212d4
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_1213d0
 */
int asr_sub_1212d4(int *a0, u8 *a1, int a2, int a3, u16 *s0, u32 s4, u32 s8) {
    u8 bVar1;
    u8 *puVar2;
    int in_r0;
    u16 *puVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    int iVar8;
    int *piStack_24;
    int *piStack_20;

    puVar2 = (&DATA_8c1293e4);
    uVar5 = a3 + 1U >> 1;
    uVar6 = (u32)0xf0;
    iVar8 = *(int *)(&DATA_8c1293e0);
    if (a2 == 0) {
        piStack_24 = NULL;
        if (s8 != 0) {
            do {
                bVar1 = *a1;
                a1 = a1 + uVar5;
                uVar4 = bVar1 & uVar6;
                iVar8 = iVar8 + uVar4 * -2;
                uVar7 = 0;
                piStack_20 = a0;
                if (s4 != 0) {
                    do {
                        uVar7 = uVar7 + 1;
                        puVar3 = s0 + 1;
                        in_r0 = ((int)*(short *)((u32)*s0 * 2 + iVar8) + uVar4) * 4;
                        *piStack_20 = *piStack_20 + *(int *)(puVar2 + in_r0);
                        s0 = puVar3;
                        piStack_20 = piStack_20 + 1;
                    } while (uVar7 < s4);
                }
                iVar8 = iVar8 + uVar4 * 2;
                piStack_24 = (int *)((int)piStack_24 + 1);
            } while (piStack_24 < s8);
        }
    } else {
        piStack_20 = NULL;
        if (s8 != 0) {
            do {
                bVar1 = *a1;
                a1 = a1 + uVar5;
                uVar4 = (u32)bVar1 << 4 & uVar6;
                iVar8 = iVar8 + uVar4 * -2;
                uVar7 = 0;
                piStack_24 = a0;
                if (s4 != 0) {
                    do {
                        uVar7 = uVar7 + 1;
                        puVar3 = s0 + 1;
                        in_r0 = ((int)*(short *)((u32)*s0 * 2 + iVar8) + uVar4) * 4;
                        *piStack_24 = *piStack_24 + *(int *)(puVar2 + in_r0);
                        s0 = puVar3;
                        piStack_24 = piStack_24 + 1;
                    } while (uVar7 < s4);
                }
                iVar8 = iVar8 + uVar4 * 2;
                piStack_20 = (int *)((int)piStack_20 + 1);
            } while (piStack_20 < s8);
        }
    }
    return in_r0;
}

/*
 * asr_sub_1213d0  0x8c1213d0
 * area name: in the asr library code range
 * called by: asr_sub_121690, asr_sub_12169e
 */
u32 asr_sub_1213d0(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    int iVar6;
    u32 *ar4_00;
    int iVar7;
    u32 *a6;
    int iVar8;
    u32 uVar9;
    int iVar10;
    int ar4_01;
    u32 *ar4_02;
    u32 *puVar11;
    u32 *puVar12;
    u32 *puVar13;
    u32 *ar7_00;
    u32 ain0;
    u32 uVar14;
    u32 uVar15;
    int a4;
    u32 *puStack_5c;
    u32 uStack_58;
    u32 uStack_50;

    ar4_01 = *(int *)(a0 + 0xfc);
    a4 = *(int *)(a0 + 0x108);
    iVar6 = a1;
    uVar1 = (**(code **)(a4 + 8))(a4, a1, a2, a3);
    iVar2 = (**(code **)(a4 + 0x70))(a4, iVar6, a2, a3);
    iVar10 = *(int *)(a1 * 8 + a0 + 0x26c);
    ain0 = (u32) * (u16 *)(a0 + 0x288);
    iVar3 = (**(code **)(a4 + 0x20))(a4, iVar6, a2, a3);
    iVar4 = (**(code **)(a4 + 0x9c))(a4, iVar6, a2, a3);
    uVar5 = (**(code **)(a4 + 0x50))(a4, iVar6, a2, a3);
    iVar6 = (**(code **)(a4 + 0x94))(a4, iVar6, a2, a3);
    ar7_00 = (u32 *)(a0 + 0xf4);
    ar4_00 = (u32 *)asr_calloc(ar4_01, ain0 << 1, 4, ar7_00);
    puVar13 = (u32 *)(ain0 * 4);
    ar4_02 = (u32 *)((int)puVar13 + (int)ar4_00);
    memset(ar4_02, 0xff, puVar13);
    uStack_50 = 0;
    puVar11 = (u32 *)((ain0 - 1) * 2 + iVar10);
    if (uVar5 != 0) {
        do {
            uVar14 = 0;
            uStack_58 = 0;
            puStack_5c = *(u32 **)(a0 + 0x284);
            iVar10 = uVar1 * ((u32) * (u16 *)(iVar6 + uStack_50 * 2) - iVar3);
            if (uVar1 != 0) {
                do {
                    uVar15 = uVar14;
                    uVar9 = (**(code **)(a4 + 0x84))(a4, uVar14, puVar13, ar7_00);
                    iVar7 = (**(code **)(a4 + 0xc0))(uVar9, uVar15, puVar13, ar7_00);
                    a6 = (u32 *)(**(code **)(a4 + 0x68))(uVar9, uVar15, puVar13, ar7_00);
                    uVar9 = (**(code **)(a4 + 0x60))(uVar9, uVar15, puVar13, ar7_00);
                    if (iVar4 == 0) {
                        iVar7 = (u32) * (u16 *)(iVar2 + (iVar10 + uVar14) * 2) + iVar7;
                        iVar8 = asr_sum_table_strided(iVar7, uVar9, a6);
                        ar7_00 = (u32 *)*puStack_5c;
                        asr_sub_1211f0(ar4_00, iVar7, a6, ar7_00, ain0, uVar9);
                    } else {
                        uVar15 = (u32) * (u16 *)(iVar2 + (iVar10 + uVar14) * 2);
                        puVar13 = (u32 *)(uVar15 & 1);
                        iVar7 = ((int)uVar15 >> 1) + iVar7;
                        iVar8 = asr_sub_121260(iVar7, puVar13, uVar9, a6);
                        ar7_00 = a6;
                        asr_sub_1212d4(ar4_00, iVar7, puVar13, a6, *puStack_5c, ain0, uVar9);
                        a6 = puVar13;
                    }
                    uStack_58 = uStack_58 + iVar8;
                    uVar14 = uVar14 + 1;
                    puStack_5c = (u32 *)puStack_5c[4];
                    puVar13 = a6;
                } while (uVar14 < uVar1);
            }
            uVar14 = 0;
            puVar12 = ar4_02;
            puVar13 = puVar11;
            ar7_00 = ar4_00;
            if (ain0 != 0) {
                do {
                    uVar15 = ar4_00[uVar14] - (uStack_58 >> 1);
                    if (uVar15 < ar4_02[uVar14]) {
                        *puVar12 = uVar15;
                        *(u16 *)puVar13 = *(u16 *)(uStack_50 * 2 + iVar6);
                    }
                    uVar14 = uVar14 + 1;
                    *ar7_00 = 0;
                    puVar13 = (u32 *)((int)puVar13 + -2);
                    ar7_00 = ar7_00 + 1;
                    puVar12 = puVar12 + 1;
                } while (uVar14 < ain0);
            }
            uStack_50 = uStack_50 + 1;
        } while (uStack_50 < uVar5);
    }
    /* WARNING: Could not recover jumptable at 0x8c121684. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(ar4_01 + 0x18))(ar4_00, a0 + 0xf4);
    return uVar9;
}

/*
 * asr_sub_121690  0x8c121690
 * area name: in the asr library code range
 * called by: asr_sub_122358
 */
u32 asr_sub_121690(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_01;

    ar5_01 = 0;
    if (*(int *)(0x240 + a0) != 0) {
        do {
            a2 = a1;
            asr_sub_120e12(a0, ar5_01, a1, a3);
            ar5_01 = ar5_01 + 1;
        } while (ar5_01 < *(u32 *)(0x240 + a0));
    }
    if (*(int *)(0x28c + a0) != 0) {
        asr_sub_120b48(a0);
    }
    asr_sub_120c7c(a0);
    asr_sub_1213d0(a0, a1, a2, a3);
    uVar1 = asr_free_node_list(a0);
    return uVar1;
}

/*
 * asr_sub_12169e  0x8c12169e
 * area name: in the asr library code range
 */
u32 asr_sub_12169e(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    u32 unaff_r13;
    int unaff_r14;
    if (in_r2 < *(u32 *)(in_r0 + unaff_r14)) {
        do {
            a2 = a1;
            asr_sub_120e12(unaff_r14, unaff_r13, a1, a3);
            unaff_r13 = unaff_r13 + 1;
        } while (unaff_r13 < *(u32 *)(0x240 + unaff_r14));
    }
    if (*(int *)(0x28c + unaff_r14) != 0) {
        asr_sub_120b48(unaff_r14);
    }
    asr_sub_120c7c(unaff_r14);
    asr_sub_1213d0(unaff_r14, a1, a2, a3);
    uVar1 = asr_free_node_list(unaff_r14);
    return uVar1;
}

/*
 * asr_sub_121710  0x8c121710
 * area name: in the asr library code range
 * called by: asr_sub_1219f4
 */
u32 asr_sub_121710(int a0) {
    *(u32 *)(a0 + 0x2c) = 0;
    *(u32 *)(a0 + 0x30) = 0;
    *(u32 *)(a0 + 0x34) = 0;
    *(u32 *)(a0 + 0x38) = 0;
    *(u32 *)(a0 + 0x3c) = 0;
    *(u32 *)(a0 + 0x40) = 0;
    *(u8 *)(a0 + 0x44) = 0;
    *(u8 *)(a0 + 0x45) = 0;
    *(u32 *)(a0 + 0x48) = 0;
    return 0x48;
}

/*
 * asr_sub_12172e  0x8c12172e
 * area name: in the asr library code range
 * called by: asr_sub_121896
 */
u32 asr_sub_12172e(int a0) {
    u32 uVar1;
    float fVar2;
    u64 in_dr4;
    float fVar3;
    float fVar4;
    u64 in_dr6;
    float fVar5;
    bool bVar6;

    fVar5 = (float)((u64)in_dr6 >> 0x20);
    fVar4 = fVar5 + *(float *)(a0 + 0x60);
    fVar3 = (float)((u64)in_dr4 >> 0x20);
    fVar2 = (float)in_dr4 + -4.0;
    if (fVar2 < fVar5) {
        fVar2 = fVar5;
    }
    if (fVar2 < fVar4) {
        fVar4 = (fVar4 - fVar2) * 0.5 + fVar2;
    }
    if (fVar4 < *(float *)(a0 + 100)) {
        fVar4 = *(float *)(a0 + 100);
    }
    if (*(u32 *)(a0 + 0x38) < *(u32 *)(a0 + 0x54)) {
        *(int *)(a0 + 0x38) = *(int *)(a0 + 0x38) + 1;
    }
    if (fVar5 <= fVar3) {
        *(u32 *)(a0 + 0x2c) = 0;
    } else {
        *(int *)(a0 + 0x2c) = *(int *)(a0 + 0x2c) + 1;
    }
    if (*(u32 *)(a0 + 0x58) < *(u32 *)(a0 + 0x2c)) {
        *(int *)(a0 + 0x38) = *(int *)(a0 + 0x58) + -1;
    }
    if (fVar4 <= fVar3) {
        *(int *)(a0 + 0x34) = *(int *)(a0 + 0x34) + 1;
    } else {
        *(u32 *)(a0 + 0x34) = 0;
    }
    if (*(int *)(a0 + 0x34) == 4) {
        *(u8 *)(a0 + 0x45) = 1;
        *(u32 *)(a0 + 0x48) = 0;
    } else if ((*(char *)(a0 + 0x45) != '\0') &&
               (uVar1 = *(u32 *)(a0 + 0x48), *(u32 *)(a0 + 0x48) = uVar1 + 1, *(u32 *)(a0 + 0x58) < uVar1)) {
        *(u8 *)(a0 + 0x45) = 0;
        asr_sub_120348(a0, 0xc, (u32) * (u8 *)(a0 + 4), 4);
    }
    bVar6 = *(u32 *)(a0 + 0x50) < *(u32 *)(a0 + 0x34);
    if (bVar6) {
        *(u8 *)(a0 + 0x44) = 1;
        *(u32 *)(a0 + 0x34) = 0;
        *(u8 *)(a0 + 0x45) = 0;
    }
    return (u32)bVar6;
}

/*
 * asr_sub_121736  0x8c121736
 * area name: in the asr library code range
 */
u32 asr_sub_121736(void) {
    char cVar1;
    int in_r0;
    u32 uVar3;
    u32 uVar4;
    int unaff_r14;
    u8 *puVar5;
    double in_dr2;
    float fVar6;
    double in_dr4;
    float fVar8;
    double in_dr6;
    double dVar9;
    bool bVar10;
    u8 in_FPSCR_CAUSE;
    u8 in_FPSCR_DN;
    u8 in_FPSCR_PR;
    u8 in_FPSCR_SZ;
    char cVar2;
    double dVar7;

    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(in_r0 + unaff_r14));

    dVar9 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0) + SUB84(in_dr2, 0));

    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c12195c);

    fVar8 = (float)((u64)dVar9 >> 0x20);

    fVar6 = SUB84(in_dr4, 0) + SUB84(in_dr2, 0);
    dVar7 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar6);
    bVar10 = fVar6 < fVar8;

    if ((bVar10)) {
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar8);
    }
    uVar3 =
        ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) &
        0xffe7ffff;
    uVar4 = (uVar3 & 0x80000) >> 0x13;
    cVar1 = (char)uVar4;
    uVar3 = (uVar3 & 0x100000) >> 0x14;
    cVar2 = (char)uVar3;
    fVar6 = SUB84(dVar7, 0);
    if (cVar1 == '\0') {
        bVar10 = fVar6 < SUB84(dVar9, 0);
    } else {
        bVar10 = dVar7 < dVar9;
    }
    if (bVar10) {
        if (cVar2 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(dVar9, 0));
        }
        if (cVar1 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) - fVar6);
        } else {
            in_dr2 = in_dr2 - dVar7;
        }
        puVar5 = (&asr_sub_120348);
        if (cVar2 == '\0') {
            dVar9 = (double)CONCAT44(fVar8, fVar6);
            puVar5 = g_8c121964;
        }
        if (cVar1 == '\0') {
            dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), (float)puVar5 * SUB84(in_dr2, 0) + SUB84(dVar9, 0));
        }
    }
    if (cVar2 == '\0') {
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(unaff_r14 + 100));
    }
    uVar3 = (uVar4 << 0x13 | uVar3 << 0x14) & 0xffe7ffff;
    uVar4 = (uVar3 & 0x80000) >> 0x13;
    if ((char)uVar4 == '\0') {
        bVar10 = SUB84(dVar9, 0) < SUB84(in_dr2, 0);
    } else {
        bVar10 = dVar9 < in_dr2;
    }
    if ((bVar10) && ((char)(uVar3 >> 0x14) == '\0')) {
        dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), *(u32 *)(unaff_r14 + 100));
    }
    if (*(u32 *)(unaff_r14 + 0x38) < *(u32 *)(unaff_r14 + 0x54)) {
        *(int *)(unaff_r14 + 0x38) = *(int *)(unaff_r14 + 0x38) + 1;
    }
    uVar4 = (uVar4 << 0x13 & 0xffe7ffff) >> 0x13;
    fVar8 = (float)((u64)dVar7 >> 0x20);
    if ((char)uVar4 == '\0') {
        bVar10 = fVar8 < (float)((u64)dVar9 >> 0x20);
    } else {
        bVar10 = dVar7 < dVar9;
    }
    if (bVar10) {
        *(int *)(unaff_r14 + 0x2c) = *(int *)(unaff_r14 + 0x2c) + 1;
    } else {
        *(u32 *)(unaff_r14 + 0x2c) = 0;
    }
    if (*(u32 *)(unaff_r14 + 0x58) < *(u32 *)(unaff_r14 + 0x2c)) {
        *(int *)(unaff_r14 + 0x38) = *(int *)(unaff_r14 + 0x58) + -1;
    }
    if ((char)((uVar4 << 0x13 & 0xffe7ffff) >> 0x13) == '\0') {
        bVar10 = fVar8 < SUB84(dVar9, 0);
    } else {
        bVar10 = dVar7 < dVar9;
    }
    if (bVar10) {
        *(u32 *)(unaff_r14 + 0x34) = 0;
    } else {
        *(int *)(unaff_r14 + 0x34) = *(int *)(unaff_r14 + 0x34) + 1;
    }
    if (*(int *)(unaff_r14 + 0x34) == 4) {
        *(u8 *)(unaff_r14 + 0x45) = 1;
        *(u32 *)(unaff_r14 + 0x48) = 0;
    } else if ((*(char *)(unaff_r14 + 0x45) != '\0') &&
               (uVar4 = *(u32 *)(unaff_r14 + 0x48), *(u32 *)(unaff_r14 + 0x48) = uVar4 + 1,
                *(u32 *)(unaff_r14 + 0x58) < uVar4)) {
        *(u8 *)(unaff_r14 + 0x45) = 0;
        asr_sub_120348(unaff_r14, 0xc, (u32) * (u8 *)(unaff_r14 + 4), 4);
    }
    bVar10 = *(u32 *)(unaff_r14 + 0x50) < *(u32 *)(unaff_r14 + 0x34);
    if (bVar10) {
        *(u8 *)(unaff_r14 + 0x44) = 1;
        *(u32 *)(unaff_r14 + 0x34) = 0;
        *(u8 *)(unaff_r14 + 0x45) = 0;
    }
    return (u32)bVar10;
}

/*
 * asr_sub_12182e  0x8c12182e
 * area name: in the asr library code range
 * called by: asr_sub_121896
 */
u32 asr_sub_12182e(int a0) {
    int iVar1;
    u64 in_dr4;
    float fVar2;

    fVar2 = (float)((u64)in_dr4 >> 0x20);
    if ((float)in_dr4 <= fVar2) {
        iVar1 = *(int *)(a0 + 0x30) + 1;
        *(int *)(a0 + 0x30) = iVar1;
        if (iVar1 == 6) {
            *(u32 *)(a0 + 0x2c) = 0;
        }
    } else {
        *(int *)(a0 + 0x2c) = *(int *)(a0 + 0x2c) + 1;
        *(u32 *)(a0 + 0x30) = 0;
    }
    if ((float)in_dr4 + *(float *)(a0 + 0x60) <= fVar2) {
        *(int *)(a0 + 0x34) = *(int *)(a0 + 0x34) + 1;
    } else {
        *(u32 *)(a0 + 0x34) = 0;
    }
    if (*(u32 *)(a0 + 0x50) < *(u32 *)(a0 + 0x34)) {
        *(u8 *)(a0 + 0x44) = 1;
    }
    if ((*(u32 *)(a0 + 0x5c) < *(u32 *)(a0 + 0x2c)) && (*(char *)(a0 + 0x44) != '\0')) {
        return 1;
    }
    return 0;
}

/*
 * asr_sub_121896  0x8c121896
 * area name: in the asr library code range
 */
u32 asr_sub_121896(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    int *piVar3;
    u32 uVar4;
    u32 ar6_00;
    u32 ar7_00;

    uVar2 = asr_sub_112170(*(u32 *)(a0 + 0xc), 2);
    if ((uVar2 & 0xff) == 0) {
        return 0;
    }
    (*(code *)(&mring_read_advance))(*(u32 *)(*(int *)(a0 + 0xc) + 8), *(u32 *)(*(int *)(a0 + 0xc) + 0xc), a2, a3);
    uVar4 = (*(u32 **)(a0 + 0xc))[1];
    mring_read_advance(**(u32 **)(a0 + 0xc), uVar4, a2, a3);
    *(int *)(a0 + 0x40) = *(int *)(a0 + 0x40) + 1;
    if (*(int *)(a0 + 0x28) == 0) {
        uVar2 = asr_sub_12172e(a0);
        puVar1 = (&asr_sub_120348);
        if ((uVar2 & 0xff) != 0) {
            ar7_00 = 0;
            uVar4 = 10;
            *(int *)(a0 + 0x3c) = *(int *)(a0 + 0x40) - *(int *)(a0 + 0x38);
            ar6_00 = *(u32 *)(a0 + 0x38);
            uVar2 = (*(code *)puVar1)(a0, 10, ar6_00, 0);
            if ((uVar2 & 0xff) != 0) {
                return 1;
            }
            if (*(char *)(a0 + 0x4d) == '\0') {
                uVar2 = asr_sub_120798(a0, uVar4, ar6_00, ar7_00);
                if ((uVar2 & 0xff) != 0) {
                    return 1;
                }
            } else {
                *(u32 *)(a0 + 0x28) = 1;
            }
        }
    } else if ((*(int *)(a0 + 0x28) == 1) && (uVar2 = asr_sub_12182e(a0), (uVar2 & 0xff) != 0)) {
        uVar2 = asr_sub_120348(a0, 0xb, *(u32 *)(a0 + 0x40), 0);
        if ((uVar2 & 0xff) != 0) {
            return 1;
        }
        *(u32 *)(a0 + 0x28) = 2;
    }
    piVar3 = *(int **)(a0 + 0xc);
    if ((*(int *)(piVar3[1] * 4 + *(int *)(*piVar3 + 0x40)) != *(int *)(*piVar3 + 0x3c)) &&
        (*(int *)(*(int *)(piVar3[2] + 0x40) + piVar3[3] * 4) != *(int *)(piVar3[2] + 0x3c))) {
        return 1;
    }
    return 0;
}

/*
 * asr_sub_1219f4  0x8c1219f4
 * area name: in the asr library code range
 */
u32 asr_sub_1219f4(int a0, u32 a1, u32 *a2, u32 a3, float *ain0) {
    u32 uVar1;
    float fVar2;
    float fVar3;

    fVar3 = *ain0;
    uVar1 = a1 & 0xff;
    if (uVar1 == 1) {
        asr_sub_121710(a0);
        if (*(char *)(a0 + 0x4c) == '\0') {
            if (*(char *)(a0 + 0x4d) == '\0') {
                *(u32 *)(a0 + 0x28) = 2;
                uVar1 = asr_sub_120798(a0, a1, a2, a3);
            } else {
                *(u32 *)(a0 + 0x28) = 1;
                uVar1 = asr_sub_1207c6(a0, 0, a2, a3);
            }
        } else {
            *(u32 *)(a0 + 0x28) = 0;
            uVar1 = asr_sub_1207c6(a0, 0, a2, a3);
        }
        if ((uVar1 & 0xff) != 0) {
            return 0;
        }
    } else if (uVar1 == 2) {
        *(char *)(a0 + 0x4c) = (char)*a2;
        *(char *)(a0 + 0x4d) = (char)a2[1];
        *(u32 *)(a0 + 0x5c) = a2[2];
        fVar2 = (float)(int)a2[3];
        if ((int)a2[3] < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        *(float *)(a0 + 0x60) = fVar2 * fVar3;
        *(u32 *)(a0 + 0x50) = a2[4];
    } else if (uVar1 == 3) {
        *a2 = (u32) * (u8 *)(a0 + 0x4c);
        a2[1] = (u32) * (u8 *)(a0 + 0x4d);
        a2[2] = *(u32 *)(a0 + 0x5c);
        fVar3 = *(float *)(a0 + 0x60) / fVar3;
        if (2.1474836e+09 < fVar3) {
            fVar3 = fVar3 + -4.2949673e+09;
        }
        a2[3] = (int)fVar3;
        a2[4] = *(u32 *)(a0 + 0x50);
    } else if (uVar1 == 4) {
        *a2 = a0 + 0x3c;
    } else {
        if (uVar1 != 0xff) {
            return 0;
        }
        asr_sub_120668(a0, a1, a2, a3);
    }
    return 1;
}

/*
 * asr_sub_121b40  0x8c121b40
 * area name: in the asr library code range
 */
u32 asr_sub_121b40(u32 a0, u32 unused_a1, u32 a2, u32 unused_a3, float *ain0) {
    int unaff_r14;
    u32 extraout_fr1;
    float extraout_fr0;
    float extraout_fr0_00;
    float extraout_fr0_01;
    float extraout_fr0_02;
    u32 extraout_fr0_03;
    float extraout_fr0_04;
    float fVar1;
    float fVar2;
    char cVar3;

    fVar2 = *ain0;
    asr_state_has_event(a0, 1, a2);
    fVar1 = extraout_fr0;
    if (fVar2 < extraout_fr0) {
        fVar1 = extraout_fr0 + -4.2949673e+09;
    }
    *(int *)(unaff_r14 + 0x50) = (int)fVar1;
    asr_state_has_event(unaff_r14, 2, a2);
    fVar1 = extraout_fr0_00;
    if (fVar2 < extraout_fr0_00) {
        fVar1 = extraout_fr0_00 + -4.2949673e+09;
    }
    *(int *)(unaff_r14 + 0x58) = (int)fVar1;
    asr_state_has_event(unaff_r14, 3, a2);
    *(float *)(unaff_r14 + 0x60) = (float)(int)(short)(int)extraout_fr0_01 * 0.002302585;
    asr_state_has_event(unaff_r14, 4, a2);
    cVar3 = '\0';
    *(u32 *)(unaff_r14 + 0x5c) = (int)extraout_fr0_02 & 0xffff;
    asr_state_has_event(unaff_r14, 5, a2);
    if (cVar3 == '\0') {
        *(u32 *)(unaff_r14 + 100) = extraout_fr0_03;
    } else {
        *(u64 *)(unaff_r14 + 100) = CONCAT44(extraout_fr0_03, extraout_fr1);
    }
    asr_state_has_event(unaff_r14, 6, a2);
    fVar1 = extraout_fr0_04;
    if (fVar2 < extraout_fr0_04) {
        fVar1 = extraout_fr0_04 + -4.2949673e+09;
    }
    *(int *)(unaff_r14 + 0x54) = (int)fVar1;
    *(u8 *)(unaff_r14 + 0x4c) = 1;
    *(u8 *)(unaff_r14 + 0x4d) = 1;
    return 0;
}

/*
 * asr_sub_121c50  0x8c121c50
 * area name: in the asr library code range
 */
u32 asr_sub_121c50(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_sub_120580))(a0, a1, 2, 0, (&asr_sub_121896), (&DATA_8c121b38), (&DATA_8c1219f2), 0x68);
    return uVar1;
}

/*
 * asr_sub_121cc0  0x8c121cc0
 * area name: in the asr library code range
 * called by: asr_sub_11f5d2
 */
u32 asr_sub_121cc0(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (a1 == 1) {
        if ((u32) * (u16 *)(0x244 + a0) == *(int *)(0x244 + -4 + a0) - 1U) {
            uVar1 = 0x16;
        } else {
            uVar1 = 10;
        }
        uVar1 = asr_sub_120348(a0 + 0x48, uVar1, 0, 0);
    } else {
        if (a1 == 2) {
            uVar1 = 0xc;
        } else {
            if (a1 != 3) {
                uVar1 = asr_fsm_set_result(a0 + 0x48, 3, a2, a3);
                return uVar1;
            }
            uVar1 = 0xb;
        }
        uVar1 = asr_sub_120348(a0 + 0x48, uVar1, 0, 0);
    }
    return uVar1;
}

/*
 * asr_sub_121d36  0x8c121d36
 * area name: in the asr library code range
 * called by: asr_sub_11f66a
 */
u32 asr_sub_121d36(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = (int)0x238;
    *(u32 *)(iVar1 + a0) = a2;
    *(u32 *)(iVar1 + 4 + a0) = a3;
    *(u32 *)(iVar1 + 8 + a0) = a1;
    uVar2 = asr_sub_121f72(a0);
    if ((uVar2 & 0xff) == 0) {
        uVar2 = (**(code **)(0xe0 + a0))(a0, 0, 0, 0, 0);
    }
    return uVar2;
}

/*
 * asr_sub_121d3c  0x8c121d3c
 * area name: in the asr library code range
 */
u32 asr_sub_121d3c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    int unaff_r14;

    *(u32 *)(in_r0 + unaff_r14) = a2;
    *(u32 *)(in_r0 + 4 + unaff_r14) = a3;
    *(u32 *)(in_r0 + 8 + unaff_r14) = a1;
    uVar1 = asr_sub_121f72(unaff_r14);
    if ((uVar1 & 0xff) == 0) {
        uVar1 = (**(code **)(0xe0 + unaff_r14))(unaff_r14, 0, 0, 0);
    }
    return uVar1;
}

/*
 * asr_sub_121d8a  0x8c121d8a
 * area name: in the asr library code range
 */
u32 asr_sub_121d8a(int a0, u32 a1) {
    int in_r0;
    u32 uVar1;

    *(u32 *)(in_r0 + a0) = a1;
    *(u32 *)(in_r0 + 4 + a0) = a1;
    if ((*(char *)(in_r0 + -4 + a0) != '\0') && (uVar1 = asr_sub_122060(a0), (uVar1 & 0xff) != 0)) {
        return 1;
    }
    return 0;
}

/*
 * asr_sub_121dc8  0x8c121dc8
 * area name: in the asr library code range
 */
u32 asr_sub_121dc8(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = *(int *)(0xfc + a0);
    iVar1 = (int)0x244;
    iVar3 = (u32) * (u16 *)(0x244 + a0) * 4;
    iVar4 = (int)0xf4;
    *(u32 *)(0x124 + a0 + iVar3) = *(u32 *)(0x118 + a0 + iVar3);
    (**(code **)(iVar2 + 0x18))(*(u32 *)((u32) * (u16 *)(iVar1 + a0) * 8 + 0x268 + a0 + 4), iVar4 + a0, a2, a3);
    iVar1 = (int)0x148;
    *(u32 *)((u32) * (u16 *)(0x244 + a0) * 8 + 0x268 + a0 + 4) = 0;
    *(u32 *)(iVar1 + a0) = 0;
    return 0;
}

/*
 * asr_sub_121e40  0x8c121e40
 * area name: in the asr library code range
 * called by: asr_sub_121f38
 */
u32 asr_sub_121e40(int a0, u32 unused_a1, u32 a2, int *a3, int s0) {
    u8 *puVar1;
    u32 uVar2;
    int iVar3;
    int *a7;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar6 = *(int *)(0xfc + a0);
    iVar4 = *a3;
    if (s0 == 1) {
        iVar3 = (int)0x268;
        iVar5 = (u32) * (u16 *)(0x244 + a0) * 8;
        *(int *)(0x268 + a0 + iVar5) = iVar4;
        a7 = a3;
        if (*(int *)(iVar3 + a0 + iVar5 + 4) != 0) {
            (**(code **)(iVar6 + 0x18))(*(u32 *)(0x268 + a0 + iVar5 + 4), 0xf4 + a0, a2, a3);
        }
        iVar3 = (int)0x268;
        iVar4 = iVar4 << 1;
        uVar2 = (**(code **)(iVar6 + 0x14))(iVar4, 0xf4 + a0, a2, a7);
        puVar1 = (&memmove);
        iVar6 = (int)0x268;
        *(u32 *)(iVar3 + a0 + iVar5 + 4) = uVar2;
        (*(code *)puVar1)(*(u32 *)(iVar6 + a0 + iVar5 + 4), a3 + 1, iVar4, a7);
        *(u32 *)(0x148 + a0) = 1;
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * asr_sub_121ef0  0x8c121ef0
 * area name: in the asr library code range
 * called by: asr_sub_121f38
 */
u32 asr_sub_121ef0(int a0, u32 unused_a1, u32 unused_a2, u32 *a3, int s0) {
    u32 *puVar1;

    if (s0 != 2) {
        return 1;
    }
    puVar1 = (u32 *)(0x24c + a0);
    *puVar1 = *a3;
    puVar1[1] = a3[1];
    puVar1[2] = a3[2];
    puVar1[3] = a3[3];
    puVar1[4] = a3[4];
    puVar1[5] = a3[5];
    puVar1[6] = a3[6];
    return 0;
}

/*
 * asr_sub_121f38  0x8c121f38
 * area name: in the asr library code range
 */
u32 asr_sub_121f38(u32 a0, u32 unused_a1, u32 a2, u32 a3, int s0) {
    u32 uVar1;

    if (s0 == 1) {
        uVar1 = asr_sub_121e40(a0, unused_a1, a2, a3);
    } else {
        if (s0 != 2) {
            return 1;
        }
        uVar1 = asr_sub_121ef0(a0, unused_a1, a2, a3);
    }
    return uVar1;
}

/*
 * asr_sub_121f72  0x8c121f72
 * area name: in the asr library code range
 * called by: asr_sub_121d36, asr_sub_121d3c
 */
u32 asr_sub_121f72(int a0) {
    u32 uVar1;
    int iVar2;
    u32 a5;
    int ar6_00;
    u32 uVar3;
    int a4;
    int iStack_20;
    int iStack_1c;
    u32 uStack_18;
    int iStack_14;

    uVar3 = 1;
    a4 = *(int *)(0x108 + a0);
    ar6_00 = 0x248 + a0;
    uVar1 = asr_sub_120348(a0 + 0x48, 0xe, ar6_00, 1);
    if ((uVar1 & 0xff) == 0) {
        iVar2 = (int)0x234;
        a5 = 0;
        *(u8 *)(iVar2 + a0) = 1;
        *(u16 *)(iVar2 + 0x10 + a0) = 0;
        *(u8 **)(0xdc + a0) = (&asr_sub_121e40);
        iVar2 = (int)0x240;
        uVar1 = 0;
        if (*(int *)(iVar2 + a0) != 0) {
            do {
                *(u32 *)(uVar1 * 8 + 0x268 + a0 + 4) = 0;
                uVar1 = uVar1 + 1;
            } while (uVar1 < *(u32 *)(iVar2 + a0));
        }
        iVar2 = (**(code **)(a4 + 0x50))(a4, 0, ar6_00, uVar3);
        uStack_18 = (**(code **)(0x94 + a4))(a4, a5, ar6_00, uVar3);
        iStack_1c = 1;
        iStack_20 = iVar2;
        uVar3 = (**(code **)(a4 + 0x2c))(a4, a5, ar6_00, uVar3);
        iStack_14 = (int)0x280;
        *(short *)(0x280 + a0) = (short)uVar3;
        iStack_14 = iStack_14 + a0;
        uVar1 = asr_sub_120348(a0 + 0x48, 0xf, &iStack_20, (iStack_1c + iVar2) * 2 + 0x10);
        if ((uVar1 & 0xff) == 0) {
            return 0;
        }
    }
    return 1;
}

/*
 * asr_sub_122060  0x8c122060
 * area name: in the asr library code range
 * called by: asr_sub_121d8a, asr_sub_122312
 */
u32 asr_sub_122060(int a0) {
    u8 *puVar1;
    char cVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;

    iVar4 = *(int *)(0xfc + a0);
    uVar5 = 0;
    if (*(int *)(0x240 + a0) != 0) {
        do {
            if (*(int *)(uVar5 * 8 + 0x268 + a0 + 4) != 0) {
                (**(code **)(iVar4 + 0x18))(*(u32 *)(uVar5 * 8 + 0x268 + a0 + 4), 0xf4 + a0);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(u32 *)(0x240 + a0));
    }
    puVar1 = (&asr_sub_120348);
    *(u32 *)(0x148 + a0) = 3;
    cVar2 = (*(code *)puVar1)(a0 + 0x48, 0x23, 0);
    if (((cVar2 == '\0') && (cVar2 = (*(code *)puVar1)(a0 + 0x48, 0x15, 0), cVar2 == '\0')) &&
        (cVar2 = (*(code *)puVar1)(a0 + 0x48, 0x10, *(u32 *)(0x248 + a0), 2), puVar1 = (&asr_sub_121f38),
         cVar2 == '\0')) {
        *(u8 *)(0x234 + a0) = 0;
        *(u8 **)(0xdc + a0) = puVar1;
        uVar3 = 0;
    } else {
        uVar3 = 1;
    }
    return uVar3;
}

/*
 * asr_sub_122070  0x8c122070
 * area name: in the asr library code range
 */
u32 asr_sub_122070(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int in_r0;
    u32 in_r2;
    int iVar2;
    u32 unaff_r12;
    u32 uVar3;
    int unaff_r14;

    iVar2 = *(int *)(in_r0 + unaff_r14);
    uVar3 = unaff_r12;
    if (in_r2 < *(u32 *)(0x240 + unaff_r14)) {
        do {
            if (*(int *)(uVar3 * 8 + 0x268 + unaff_r14 + 4) != 0) {
                (**(code **)(iVar2 + 0x18))(*(u32 *)(uVar3 * 8 + 0x268 + unaff_r14 + 4), 0xf4 + unaff_r14, a2, a3);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(u32 *)(0x240 + unaff_r14));
    }
    puVar1 = (&asr_sub_120348);
    *(u32 *)(0x148 + unaff_r14) = 3;
    uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x23, 0, 0);
    if ((((uVar3 & 0xff) == 0) && (uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x15, 0, 0), (uVar3 & 0xff) == 0)) &&
        (uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x10, *(u32 *)(0x248 + unaff_r14), 2), puVar1 = (&asr_sub_121f38),
         (uVar3 & 0xff) == 0)) {
        *(char *)(0x234 + unaff_r14) = (char)unaff_r12;
        *(u8 **)(0xdc + unaff_r14) = puVar1;
    } else {
        unaff_r12 = 1;
    }
    return unaff_r12;
}

/*
 * asr_sub_12212e  0x8c12212e
 * area name: in the asr library code range
 * called by: asr_sub_11eb8c, asr_sub_11ec7c
 */
u32 asr_sub_12212e(int a0) {
    u32 uVar1;

    uVar1 = asr_sub_120348(a0 + 0x48, 0x1f, 0);
    return uVar1;
}

/*
 * asr_sub_12215c  0x8c12215c
 * area name: in the asr library code range
 * called by: asr_sub_11ec7c, asr_sub_122230
 */
u32 asr_sub_12215c(int a0, u32 a1, int a2, int a3, int s0) {
    u8 *puVar1;
    u8 *puVar2;
    u8 *puVar3;
    u32 uVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    int iVar8;
    u32 a5;

    puVar3 = (&asr_sub_111cdc);
    puVar2 = (&asr_fsm_set_result);
    puVar1 = (&asr_sub_120284);
    iVar8 = a2 * 4;
    uVar6 = (u32) * (u16 *)(*(int *)(a0 + 0x6c) + 0xc);
    iVar5 = *(int *)(0x118 + a0 + iVar8);
    a5 = a3 * uVar6 + iVar5;
    uVar6 = uVar6 * s0 + iVar5;
    if (*(u32 *)(0x124 + a0 + iVar8) < a5) {
        a5 = *(u32 *)(0x124 + a0 + iVar8);
    }
    if (*(u32 *)(0x124 + a0 + iVar8) < uVar6) {
        uVar6 = *(u32 *)(0x124 + a0 + iVar8);
    }
    while (true) {
        if (uVar6 <= a5) {
            return 0;
        }
        uVar7 = 1;
        uVar4 = (*(code *)puVar3)(*(u32 *)(a0 + 0x6c), a5, 1, a3);
        if ((uVar4 & 0xff) == 0)
            break;
        a5 = a5 + *(u16 *)(*(int *)(a0 + 0x6c) + 0xc);
        uVar4 = (*(code *)puVar1)(a0, a1, uVar7, a3);
        if ((uVar4 & 0xff) != 0) {
            return 1;
        }
    }
    uVar7 = (*(code *)puVar2)(a0 + 0x48, 1, uVar7, a3);
    return uVar7;
}

/*
 * asr_sub_122230  0x8c122230
 * area name: in the asr library code range
 * called by: asr_sub_11eb8c, asr_sub_122358
 */
u32 asr_sub_122230(int a0, u32 a1, int a2) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;

    iVar3 = *(int *)(a0 + 0x124 + a2 * 4);
    iVar4 = *(int *)(a2 * 4 + a0 + 0x118);
    uVar1 = asr_sub_11d432(a0, 0);
    if ((uVar1 & 0xff) != 0) {
        return 1;
    }
    libgcc_divide_helper_01051c(iVar3 - iVar4, (u32) * (u16 *)(*(int *)(a0 + 0x6c) + 0xc));
    uVar2 = asr_sub_12215c(a0, a1, a2, 0);
    return uVar2;
}

/*
 * asr_sub_1222b4  0x8c1222b4
 * area name: in the asr library code range
 * called by: asr_sub_11eb8c, asr_sub_122358
 */
u32 asr_sub_1222b4(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    u32 ar7_00;

    ar7_00 = 0;
    uVar2 = 0;
    uVar1 = asr_sub_120348(a0 + 0x48, 0x20, 0, 0);
    if (((uVar1 & 0xff) == 0) && (uVar1 = asr_sub_120284(a0, a1, uVar2, ar7_00), (uVar1 & 0xff) == 0)) {
        uVar2 = asr_sub_11d432(a0, 1);
        return uVar2;
    }
    return 1;
}

/*
 * asr_sub_122312  0x8c122312
 * area name: in the asr library code range
 */
u32 asr_sub_122312(u32 a0) {
    u32 uVar1;

    uVar1 = asr_sub_122358(a0);
    if (((uVar1 & 0xff) == 0) && (uVar1 = asr_sub_122060(a0), (uVar1 & 0xff) == 0)) {
        return 0;
    }
    return 1;
}

/*
 * asr_sub_122358  0x8c122358
 * area name: in the asr library code range
 * called by: asr_sub_122312
 */
u32 asr_sub_122358(int a0) {
    u8 *puVar1;
    u8 *a5;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    int iVar6;
    int iVar7;
    u32 *puVar8;
    int iVar9;
    u32 uVar10;
    u32 uVar11;
    u32 *a6;
    u32 uStack_40;
    u32 uStack_3c;
    u32 uStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    u32 uStack_28;
    int iStack_24;

    puVar1 = (&asr_sub_120348);
    iVar6 = *(int *)(0x108 + a0);
    uStack_3c = 0x7fffffff;
    uStack_38 = 0;
    iStack_34 = *(int *)(0xfc + a0);
    uVar2 = asr_sub_120348(a0 + 0x48, 0x11, 0, 0);
    if (((uVar2 & 0xff) == 0) && (uVar2 = (*(code *)puVar1)(a0 + 0x48, 0x22, 0, 0), (uVar2 & 0xff) == 0)) {
        uVar10 = 1;
        uVar2 = 0x12;
        puVar8 = &uStack_40;
        uVar3 = (*(code *)puVar1)(a0 + 0x48, 0x12, puVar8, 1);
        a5 = (&DATA_8c1297e8);
        if ((uVar3 & 0xff) == 0) {
            *(u8 **)(0xdc + a0) = (&asr_sub_121ef0);
            uVar3 = 0;
            if (*(int *)(0x240 + a0) != 0) {
                do {
                    uVar11 = 0;
                    iStack_30 = *(int *)(0x268 + a0 + uVar3 * 8);
                    uStack_28 = *(u32 *)(uVar3 * 8 + 0x268 + a0 + 4);
                    iStack_2c = 1;
                    uVar5 = (**(code **)(iVar6 + 0x2c))(iVar6, uVar2, puVar8, uVar10);
                    iStack_24 = 0x280 + a0;
                    *(short *)(0x280 + a0) = (short)uVar5;
                    iVar4 = iStack_30 + iStack_2c;
                    a6 = NULL;
                    if (*(int *)(0x240 + a0) != 0) {
                        do {
                            uVar2 = (*(code *)puVar1)(a0 + 0x48, 0x13, &iStack_30, iVar4 * 2 + 0x10);
                            if ((uVar2 & 0xff) != 0) {
                                return 1;
                            }
                            uVar10 = 0;
                            uVar2 = (*(code *)puVar1)(a0 + 0x48, 0x21, 0, 0);
                            if ((uVar2 & 0xff) != 0) {
                                return 1;
                            }
                            puVar8 = a6;
                            uVar2 = asr_sub_122230(a0, a5, a6);
                            if ((uVar2 & 0xff) != 0) {
                                return 1;
                            }
                            uVar2 = asr_sub_1222b4(a0, a5);
                            if ((uVar2 & 0xff) != 0) {
                                return 1;
                            }
                            uVar10 = *(u32 *)(0x24c + 0x18 + a0);
                            uVar11 = uVar11 + *(int *)(0x24c + a0);
                            uVar2 = uVar3;
                            puVar8 = a6;
                            asr_sub_11f7bc(a0, uVar3, a6, uVar10);
                            a6 = (u32 *)((int)a6 + 1);
                        } while (a6 < *(u32 **)(0x240 + a0));
                    }
                    if (uVar11 < uStack_3c) {
                        uStack_3c = uVar11;
                        uStack_38 = uVar3;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(u32 *)(0x240 + a0));
            }
            uVar10 = 2;
            uVar2 = (*(code *)puVar1)(a0 + 0x48, 0x14, uStack_40, 2);
            if ((uVar2 & 0xff) == 0) {
                iVar9 = (int)0xf4;
                *(u8 **)(0xdc + a0) = (&asr_sub_121f38);
                iVar9 = iVar9 + a0;
                iVar6 = (int)0x288;
                iVar7 = uStack_38 * 8;
                *(short *)(iVar6 + a0) = (short)*(u32 *)(iVar7 + 0x268 + a0);
                iVar4 = (int)0x238;
                **(int **)(iVar6 + -0x4c + a0) = *(int *)(0x268 + a0 + iVar7) << 1;
                puVar8 = *(u32 **)(iVar4 + a0);
                uVar5 = (**(code **)(iStack_34 + 0x14))(**(u32 **)(0x23c + a0), iVar9, uStack_40, uVar10);
                *puVar8 = uVar5;
                iVar6 = asr_sub_120f04(a0, iVar9, uStack_40, uVar10);
                if (iVar6 == 0) {
                    asr_sub_121690(a0, uStack_38, uStack_40, uVar10);
                    (*(code *)(&memmove))(**(u32 **)(0x238 + a0), *(u32 *)(0x268 + a0 + iVar7 + 4),
                                          **(u32 **)(0x23c + a0), uVar10);
                    return 0;
                }
            }
        }
    }
    return 1;
}

/*
 * asr_sub_1225fc  0x8c1225fc
 * area name: in the asr library code range
 * called by: asr_sub_01d15c, speech_sub_01d9ac, speech_sub_01d9e0
 */
u32 asr_sub_1225fc(u32 *a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = asr_sub_11f5d2(*a0);
    if (iVar1 != 0) {
        uVar2 = lib11c_take_error(*(u32 *)a0[1], *a0);
    }
    return uVar2;
}

/*
 * asr_sub_122604  0x8c122604
 * area name: in the asr library code range
 */
u32 asr_sub_122604(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *unaff_r13;
    u32 unaff_r14;

    iVar1 = asr_sub_11f5d2(*unaff_r13, a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r14 = lib11c_take_error(*(u32 *)unaff_r13[1], *unaff_r13, a2, a3);
    }
    return unaff_r14;
}

/*
 * asr_sub_122630  0x8c122630
 * area name: in the asr library code range
 * called by: game_sub_01d7cc
 */
u32 asr_sub_122630(u32 *a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    iVar1 = asr_sub_11f66a(*a0);
    if (iVar1 != 0) {
        uVar2 = lib11c_take_error(*(u32 *)a0[1], *a0);
    }
    return uVar2;
}

/*
 * asr_sub_122638  0x8c122638
 * area name: in the asr library code range
 */
u32 asr_sub_122638(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 unaff_r13;
    u32 *unaff_r14;

    iVar1 = asr_sub_11f66a(*unaff_r14, a1, a2, a3);
    if (iVar1 != 0) {
        unaff_r13 = lib11c_take_error(*(u32 *)unaff_r14[1], *unaff_r14, a2, a3);
    }
    return unaff_r13;
}

/*
 * asr_sub_122664  0x8c122664
 * area name: in the asr library code range
 * called by: game_sub_01dc80
 */
int asr_sub_122664(u32 *a0, int *a1, u32 a2, u32 a3, int s0, int *s4, u32 *s8) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    int *ar6_00;
    int *piVar6;
    int iVar7;
    int *piVar8;
    u16 *puVar9;
    int *ar5_00;
    int *piVar10;
    int ar5_01;
    int *piStack_64;
    u32 uStack_60;
    int *piStack_5c;
    int *piStack_58;
    int iStack_54;
    int *piStack_50;
    int *piStack_4c;
    int *piStack_48;
    int *piStack_44;
    int iStack_40;
    int *piStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;

    piStack_3c = (int *)*a0;
    ar5_01 = *piStack_3c;
    piStack_5c = (int *)(0xb4 + ar5_01);
    piStack_48 = (int *)((int)piStack_5c + *(int *)(0xa4 + ar5_01) * 2 + 3U & 0xfffffffc);
    piStack_58 = (int *)((*(int *)(0x88 + ar5_01) + 1) * 4 + (int)piStack_48);
    piStack_4c = (int *)((int)piStack_58 + (*(int *)(0x90 + ar5_01) + 1) * 4);
    uStack_60 = (int)piStack_4c + *(int *)(0xa8 + ar5_01) * 2 + 3 & 0xfffffffc;
    iVar5 = *(int *)(0x8c + ar5_01) + *(int *)(0x88 + ar5_01);
    piStack_44 = (int *)(uStack_60 + (*(int *)(0x8c + ar5_01) + 1) * 4);
    iVar7 = iVar5 + 1;
    iStack_34 = 0;
    ar5_00 = piStack_44 + *(int *)(0x94 + ar5_01) + 1;
    piVar10 = (int *)((int)ar5_00 + iVar5 * 2 + 3 & 0xfffffffc);
    iStack_30 = 0;
    iStack_40 = *a1;
    uStack_28 = *(u32 *)(iStack_40 + 4);
    uStack_24 = 0;
    iVar5 = 0;
    if (piStack_3c[1] == 0) {
        piVar8 = &iStack_54;
        piStack_50 = a1;
        iStack_38 = a2;
        uStack_2c = a3;
        iVar1 = asr_sub_10ca58(a1, a2, piVar8, &piStack_64);
        if (iVar1 == 0) {
            piVar6 = NULL;
            if (piStack_64 != NULL) {
                do {
                    uVar2 = 0;
                    if (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01) != 0) {
                    LAB_8c122778:
                        if ((u32)(*(u16 *)(uVar2 * 2 + (int)ar5_00) >> 8) != *(u32 *)(iStack_54 + (int)piVar6 * 4))
                            goto LAB_8c12282a;
                        uVar4 = 0;
                        if (*(int *)(0x98 + ar5_01) != 0) {
                            do {
                                iVar1 = iVar7 + uVar4;
                                uVar4 = uVar4 + 1;
                                if (piVar10[iVar1] == uVar2) {
                                    iVar5 = iVar5 + 1;
                                }
                            } while (uVar4 < *(u32 *)(0x98 + ar5_01));
                        }
                        piVar8 = piVar10 + uVar2 + 1;
                        uVar4 = piVar10[uVar2] - *piVar10;
                        if (uVar4 < (u32)(*piVar8 - *piVar10)) {
                            do {
                                iVar1 = iVar7 + uVar4;
                                uVar4 = uVar4 + 1;
                                if (piVar10[iVar1] == uVar2) {
                                    iVar5 = iVar5 + 1;
                                }
                            } while (uVar4 < (u32)(*piVar8 - *piVar10));
                        }
                        iVar5 = iVar5 + (piVar10[uVar2 + 1] - piVar10[uVar2]);
                        if ((*(u16 *)(uVar2 * 2 + (int)ar5_00) & 1) != 0) {
                            iStack_34 = iStack_34 + 1;
                        }
                        if ((*(u16 *)(uVar2 * 2 + (int)ar5_00) & 2) != 0) {
                            iStack_30 = iStack_30 + 1;
                        }
                    }
                LAB_8c12283a:
                    piVar6 = (int *)((int)piVar6 + 1);
                } while (piVar6 < piStack_64);
            }
            iVar1 = (int)0xa8;
            uVar2 = *(int *)(iVar1 + -0x20 + ar5_01) + *(int *)(iVar1 + -0x1c + ar5_01);
            iStack_38 =
                (s0 + 0xe) * (int)piStack_64 + *(int *)(ar5_01 + 4) + iVar5 * 4 +
                ((*(u32 *)(iVar1 + ar5_01) & 1) + (uVar2 & 1)) * -2 +
                ((((u32)(s0 * (int)piStack_64) >> 1) + *(u32 *)(iVar1 + ar5_01) & 1) + (uVar2 + (int)piStack_64 & 1)) *
                    2;
            iVar5 = (**(code **)(iStack_40 + 8))(iStack_38, &uStack_28, piVar8, piVar6);
            piStack_50 = (int *)iVar5;
            if (iVar5 == 0) {
                (**(code **)(iStack_40 + 0xc))(iStack_54, &uStack_28, piVar8, piVar6);
            LAB_8c122b8e:
                iVar1 = 1;
            } else {
                memmove(iVar5, ar5_01, (int)0xb4);
                iVar1 = (int)0xb4;
                (*(code *)(&memmove))(iVar5 + iVar1, piStack_5c, *(int *)(0xa4 + ar5_01) << 1, piVar6);
                uVar2 = iVar5 + iVar1 + *(int *)(0xa4 + ar5_01) * 2 + 3U & 0xfffffffc;
                (*(code *)(&memmove))(uVar2, piStack_48, (*(int *)(0xa4 + -0x1c + ar5_01) + 1) * 4, piVar6);
                iVar5 = uVar2 + (*(int *)(0x88 + ar5_01) + 1) * 4;
                (*(code *)(&memmove))(iVar5, piStack_58, (*(int *)(0x88 + 8 + ar5_01) + 1) * 4, piVar6);
                iVar5 = iVar5 + (*(int *)(0x90 + ar5_01) + 1) * 4;
                (*(code *)(&memmove))(iVar5, piStack_4c, *(int *)(0x90 + 0x18 + ar5_01) << 1, piVar6);
                piStack_5c = NULL;
                iVar5 = iVar5 + *(int *)(0xa8 + ar5_01) * 2;
                if (piStack_64 != NULL) {
                    do {
                        memmove(iVar5, uStack_2c, s0);
                        piStack_5c = (int *)((int)piStack_5c + 1);
                        iVar5 = iVar5 + s0;
                    } while (piStack_5c < piStack_64);
                }
                piVar8 = (int *)(iVar5 + 3U & 0xfffffffc);
                uVar2 = 0;
                if (*(int *)(0x8c + ar5_01) != 0) {
                    do {
                        iVar1 = uVar2 * 4;
                        uVar2 = uVar2 + 1;
                        iVar5 = (int)0x8c;
                        *piVar8 = *(int *)(uStack_60 + iVar1) + (int)piStack_64;
                        piVar8 = piVar8 + 1;
                    } while (uVar2 < *(u32 *)(iVar5 + ar5_01));
                }
                uVar2 = 0;
                if (piStack_64 != (int *)0xffffffff) {
                    do {
                        iVar5 = uVar2 + *(int *)(0x8c + 8 + ar5_01) + *(int *)(0x8c + ar5_01);
                        uVar2 = uVar2 + 1;
                        *piVar8 = (int)piStack_64 + iVar5 + 1;
                        piVar8 = piVar8 + 1;
                    } while (uVar2 < (int)piStack_64 + 1U);
                }
                (*(code *)(&memmove))(piVar8, piStack_44, *(int *)(0x94 + ar5_01) << 2, piVar6);
                piVar8 = piVar8 + *(int *)(0x94 + ar5_01);
                uVar2 = 0;
                if (piStack_64 != (int *)0xffffffff) {
                    do {
                        uVar4 = s0 * uVar2;
                        uVar2 = uVar2 + 1;
                        *piVar8 = (uVar4 >> 1) + *(int *)(0xa8 + ar5_01);
                        piVar8 = piVar8 + 1;
                    } while (uVar2 < (int)piStack_64 + 1U);
                }
                ar6_00 = (int *)((*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)) * 2);
                memmove(piVar8, ar5_00, ar6_00);
                piVar6 = 0xffbf;
                puVar9 = (u16 *)((int)piVar8 + (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)) * 2);
                piVar8 = NULL;
                if (piStack_64 != NULL) {
                    do {
                        uVar2 = 0;
                        ar6_00 = (int *)((int)piVar8 * 4);
                        if (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01) != 0) {
                            do {
                                if ((u32)(*(u16 *)(uVar2 * 2 + (int)ar5_00) >> 8) ==
                                    *(u32 *)(iStack_54 + (int)ar6_00)) {
                                    *puVar9 = *(u16 *)(uVar2 * 2 + (int)ar5_00) & (u16)piVar6;
                                    puVar9 = puVar9 + 1;
                                    break;
                                }
                                uVar2 = uVar2 + 1;
                            } while (uVar2 < (u32)(*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)));
                        }
                        piVar8 = (int *)((int)piVar8 + 1);
                    } while (piVar8 < piStack_64);
                }
                piVar8 = (int *)((int)puVar9 + 3U & 0xfffffffc);
                iVar5 = (int)0x8c;
                *piVar8 = *piVar10 + (int)piStack_64;
                piVar8 = piVar8 + 1;
                piStack_48 = piVar8 + *(int *)(iVar5 + -4 + ar5_01) + *(int *)(iVar5 + ar5_01) + (int)piStack_64;
                uStack_60 = 0;
                iVar5 = 0;
                if (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01) != 0) {
                    do {
                        if (piVar10[uStack_60 + 1] != piVar10[uStack_60]) {
                            piStack_4c = piVar10 + uStack_60;
                            piStack_58 = (int *)(**(code **)(iStack_40 + 8))((piVar10[uStack_60 + 1] - *piStack_4c) * 4,
                                                                             &uStack_28, ar6_00, piVar6);
                            if (piStack_58 == NULL) {
                                (**(code **)(iStack_40 + 0xc))(iStack_54, &uStack_28, ar6_00, piVar6);
                                (**(code **)(iStack_40 + 0xc))(piStack_50, &uStack_28, ar6_00, piVar6);
                                goto LAB_8c122b8e;
                            }
                            ar6_00 = piVar10 + uStack_60 + 1;
                            uVar2 = *piStack_4c - *piVar10;
                            iVar1 = 0;
                            if (uVar2 < (u32)(*ar6_00 - *piVar10)) {
                                do {
                                    piVar6 = piVar10 + iVar7 + uVar2;
                                    iVar3 = uVar2 + iVar5;
                                    uVar2 = uVar2 + 1;
                                    piStack_48[iVar3] = *piVar6;
                                    *(u32 *)((int)piStack_58 + iVar1 * 4) =
                                        (u32)(*(u16 *)(*piVar6 * 2 + (int)ar5_00) >> 8);
                                    iVar1 = iVar1 + 1;
                                } while (uVar2 < (u32)(*ar6_00 - *piVar10));
                            }
                            piStack_5c = NULL;
                            piStack_44 = piVar10 + uStack_60 + 1;
                            if (piStack_64 != NULL) {
                                do {
                                    ar6_00 = *(int **)(iStack_54 + (int)piStack_5c * 4);
                                    iVar1 = (*(code *)(&asr_sub_10cb4c))(piStack_58, *piStack_44 - *piStack_4c, ar6_00,
                                                                         piVar6);
                                    if (iVar1 != 0) {
                                        iVar1 = (*piStack_44 - *piVar10) + iVar5;
                                        iVar5 = iVar5 + 1;
                                        piStack_48[iVar1] =
                                            *(int *)(0x88 + ar5_01) + *(int *)(0x8c + ar5_01) + (int)piStack_5c;
                                    }
                                    piStack_5c = (int *)((int)piStack_5c + 1);
                                } while (piStack_5c < piStack_64);
                            }
                            (**(code **)(iStack_40 + 0xc))(piStack_58, &uStack_28, ar6_00, piVar6);
                        }
                        iVar1 = (int)0x8c;
                        *piVar8 = (int)piStack_64 + iVar5 + piVar10[uStack_60 + 1];
                        uStack_60 = uStack_60 + 1;
                        piVar8 = piVar8 + 1;
                    } while (uStack_60 < (u32)(*(int *)(iVar1 + -4 + ar5_01) + *(int *)(iVar1 + ar5_01)));
                }
                piStack_58 = NULL;
                if (piStack_64 != NULL) {
                    do {
                        iVar1 = (int)0x88;
                        *piVar8 = piVar8[-1];
                        uStack_60 = 0;
                        if (*(int *)(iVar1 + ar5_01) != 0) {
                            do {
                                if ((u32)(*(u16 *)(uStack_60 * 2 + (int)ar5_00) >> 8) ==
                                    *(u32 *)(iStack_54 + (int)piStack_58 * 4)) {
                                    piStack_5c = piVar10 + uStack_60 + 1;
                                    piStack_4c = piVar10 + uStack_60;
                                    piStack_44 = (int *)*piStack_4c;
                                    ar6_00 = (int *)((*piStack_5c - (int)piStack_44) * 4);
                                    (*(code *)(&memmove))(piStack_48 + *(int *)(0x98 + ar5_01) + iVar5,
                                                          piVar10 + (int)piStack_44 + (iVar7 - *piVar10), ar6_00,
                                                          piVar6);
                                    iVar1 = *piStack_4c;
                                    iVar3 = *piStack_5c;
                                    *piVar8 = *piVar8 + (iVar3 - iVar1);
                                    iVar5 = iVar5 + (iVar3 - iVar1);
                                    uVar2 = *piStack_4c - *piVar10;
                                    iVar1 = iVar5;
                                    if (uVar2 < (u32)(*piStack_5c - *piVar10)) {
                                        do {
                                            iVar3 = iVar7 + uVar2;
                                            uVar2 = uVar2 + 1;
                                            iVar5 = iVar1;
                                            if (piVar10[iVar3] == uStack_60) {
                                                iVar5 = iVar1 + 1;
                                                piStack_48[iVar1 + *(int *)(0x98 + ar5_01)] =
                                                    *(int *)(0x88 + ar5_01) + *(int *)(0x8c + ar5_01) + (int)piStack_58;
                                                *piVar8 = *piVar8 + 1;
                                            }
                                            iVar1 = iVar5;
                                        } while (uVar2 < (u32)(*piStack_5c - *piVar10));
                                    }
                                    break;
                                }
                                uStack_60 = uStack_60 + 1;
                            } while (uStack_60 < *(u32 *)(0x88 + ar5_01));
                        }
                        piStack_58 = (int *)((int)piStack_58 + 1);
                        piVar8 = piVar8 + 1;
                    } while (piStack_58 < piStack_64);
                }
                (**(code **)(iStack_40 + 0xc))(iStack_54, &uStack_28, ar6_00, piVar6);
                iVar7 = (int)0x8c;
                *(int *)((int)piStack_50 + 4) = iStack_38;
                *(int *)(iVar7 + (int)piStack_50) = *(int *)(iVar7 + (int)piStack_50) + (int)piStack_64;
                *(int *)(iVar7 + 8 + (int)piStack_50) = *(int *)(iVar7 + 8 + (int)piStack_50) + (int)piStack_64;
                *(int *)(iVar7 + 0xc + (int)piStack_50) = *(int *)(iVar7 + 0xc + (int)piStack_50) + iVar5;
                *(int *)(iVar7 + 0x10 + (int)piStack_50) = *(int *)(iVar7 + 0x10 + (int)piStack_50) + iStack_34;
                *(int *)(iVar7 + 0x14 + (int)piStack_50) = *(int *)(iVar7 + 0x14 + (int)piStack_50) + iStack_30;
                iVar5 = 0x80000000;
                *(u32 *)(iVar7 + 0x1c + (int)piStack_50) =
                    *(int *)(iVar7 + 0x1c + (int)piStack_50) + ((u32)(s0 * (int)piStack_64) >> 1);
                *s4 = *(int *)(0x8c + ar5_01) + iVar5;
                *s8 = piStack_64;
                if (piStack_3c[2] != 0) {
                    (**(code **)(iStack_40 + 0xc))(*piStack_3c, &uStack_28, ar6_00, piVar6);
                }
                iVar1 = 0;
                *piStack_3c = (int)piStack_50;
                piStack_3c[2] = 1;
            }
        }
    } else {
        iVar1 = 5;
    }
    return iVar1;
LAB_8c12282a:
    uVar2 = uVar2 + 1;
    if ((u32)(*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)) <= uVar2)
        goto LAB_8c12283a;
    goto LAB_8c122778;
}

/*
 * asr_sub_122e7c  0x8c122e7c
 * area name: in the asr library code range
 * called by: game_sub_01dc80
 */
int asr_sub_122e7c(u32 *a0, int *a1, u32 a2, u32 a3, int s0) {
    u32 *puVar1;
    int iVar2;
    int iVar3;
    u16 *puVar4;
    u32 *puVar5;
    int iVar6;
    u32 uVar7;
    int *piVar8;
    int iVar9;
    u32 *puVar10;
    int iVar11;
    u32 uVar12;
    u16 *a6;
    u32 *puVar13;
    int *piVar14;
    int *piVar15;
    int *piVar16;
    u32 *puVar17;
    int iVar18;
    u32 *puVar19;
    int *piVar20;
    int ar5_00;
    int *piStack_64;
    int *piStack_60;
    int iStack_5c;
    u32 uStack_54;
    int iStack_50;
    u32 *puStack_4c;
    int *piStack_48;
    int iStack_44;
    int *piStack_40;
    int iStack_3c;
    u32 uStack_38;
    int *piStack_34;
    u32 uStack_30;
    int iStack_2c;
    u32 uStack_28;
    u32 uStack_24;

    piStack_48 = (int *)*a0;
    ar5_00 = *piStack_48;
    piStack_40 = (int *)(0xb4 + ar5_00);
    uStack_30 = (int)piStack_40 + *(int *)(0xa4 + ar5_00) * 2 + 3U & 0xfffffffc;
    iVar9 = *(int *)(0x88 + ar5_00);
    piStack_34 = (int *)((iVar9 + 1) * 4 + uStack_30);
    puStack_4c = (u32 *)((int)piStack_34 + (*(int *)(0x90 + ar5_00) + 1) * 4);
    iVar6 = *(int *)(0xa8 + -0x1c + ar5_00);
    iVar11 = (*(int *)(0xa8 + ar5_00) * 2 + (int)puStack_4c + 3U & 0xfffffffc) + (iVar6 + 1) * 4;
    iVar6 = iVar6 + iVar9;
    iStack_44 = (*(int *)(0x94 + ar5_00) + 1) * 4 + iVar11;
    iVar18 = iVar6 + 1;
    piVar20 = (int *)(iVar6 * 2 + iStack_44 + 3U & 0xfffffffc);
    iStack_5c = 0;
    iStack_50 = *a1;
    puVar17 = (u32 *)(iVar9 + a3 + 0x80000000);
    uStack_28 = *(u32 *)(iStack_50 + 4);
    uStack_24 = 0;
    if ((a3 < 0x80000000) || (*(u32 *)(0x8c + ar5_00) <= a3 + 0x80000000)) {
    LAB_8c123014:
        iVar9 = (int)0x8c;
    } else {
        iVar6 = a3 - 0x80000000;
        if (piStack_48[1] == 0) {
            puVar13 = &uStack_38;
            iVar9 = asr_sub_10ca58(a1, a2, &uStack_54, puVar13);
            if (iVar9 == 0) {
                puVar19 = (u32 *)(s0 + (int)puVar17);
                puVar4 = (u16 *)((int)puVar17 * 2 + iStack_44);
                for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (u32 *)((int)puVar5 + 1)) {
                    uVar12 = (u32)(*puVar4 >> 8);
                    iVar9 = asr_sub_10cb4c(uStack_54, uStack_38, uVar12);
                    if (iVar9 == 0) {
                        (**(code **)(iStack_50 + 0xc))(uStack_54, &uStack_28, uVar12, puVar13);
                        goto LAB_8c123014;
                    }
                    puVar4 = puVar4 + 1;
                }
                puVar4 = (u16 *)((int)puVar17 * 2 + iStack_44);
                for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (u32 *)((int)puVar5 + 1)) {
                    if ((*puVar4 & 0x40) != 0) {
                        (**(code **)(iStack_50 + 0xc))(uStack_54, &uStack_28, 0x40, puVar13);
                        goto LAB_8c123014;
                    }
                    puVar4 = puVar4 + 1;
                }
                (**(code **)(iStack_50 + 0xc))(uStack_54, &uStack_28, 0x40, puVar13);
                iStack_2c = iVar6 * 4;
                uVar12 = 0;
                iVar9 = (*(int *)(iVar11 + (iVar6 + 1) * 4) - *(int *)(iVar11 + iStack_2c)) * 2;
                if (*(int *)(0x98 + ar5_00) != 0) {
                    do {
                        if ((puVar17 <= (u32 *)piVar20[iVar18 + uVar12]) &&
                            ((u32 *)piVar20[iVar18 + uVar12] < puVar19)) {
                            iStack_5c = iStack_5c + 1;
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < *(u32 *)(0x98 + ar5_00));
                }
                puVar10 = (u32 *)(piVar20 + (int)puVar17 + 1);
                puVar1 = (u32 *)(piVar20 + (int)puVar17);
                for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (u32 *)((int)puVar5 + 1)) {
                    uVar12 = *puVar1;
                    if (uVar12 < *puVar10) {
                        do {
                            puVar13 = (u32 *)piVar20[uVar12];
                            if ((puVar13 < puVar17) || (puVar19 <= puVar13)) {
                                iStack_5c = iStack_5c + 1;
                            }
                            uVar12 = uVar12 + 1;
                        } while (uVar12 < *puVar10);
                    }
                    puVar10 = puVar10 + 1;
                    puVar1 = puVar1 + 1;
                }
                iVar2 = (int)0xa8;
                uVar12 = (u32)(s0 * iVar9) >> 1;
                uVar7 = *(int *)(iVar2 + -0x20 + ar5_00) + *(int *)(iVar2 + -0x1c + ar5_00);
                iStack_3c = (*(int *)(ar5_00 + 4) - (iVar9 + 0xe) * s0) + iStack_5c * -4 +
                            ((*(u32 *)(iVar2 + ar5_00) & 1) + (uVar7 & 1)) * -2 +
                            ((*(u32 *)(iVar2 + ar5_00) - uVar12 & 1) + (uVar7 - s0 & 1)) * 2;
                iVar2 = (**(code **)(iStack_50 + 8))(iStack_3c, &uStack_28, puVar5, puVar13);
                if (iVar2 == 0) {
                    iVar9 = 1;
                } else {
                    memmove(iVar2, ar5_00, (int)0xb4);
                    iVar9 = (int)0xb4;
                    (*(code *)(&memmove))(iVar2 + iVar9, piStack_40, *(int *)(0xa4 + ar5_00) << 1, puVar13);
                    uVar7 = iVar2 + iVar9 + *(int *)(0xa4 + ar5_00) * 2 + 3U & 0xfffffffc;
                    (*(code *)(&memmove))(uVar7, uStack_30, (*(int *)(0x88 + ar5_00) + 1) * 4, puVar13);
                    iVar9 = uVar7 + (*(int *)(0x88 + ar5_00) + 1) * 4;
                    (*(code *)(&memmove))(iVar9, piStack_34, (*(int *)(0x90 + ar5_00) + 1) * 4, puVar13);
                    iVar9 = iVar9 + (*(int *)(0x90 + ar5_00) + 1) * 4;
                    piStack_40 = (int *)(iStack_2c + iVar11);
                    memmove(iVar9, puStack_4c, *piStack_40 << 1);
                    iVar9 = iVar9 + *piStack_40 * 2;
                    piStack_34 = (int *)((iVar6 + s0) * 4 + iVar11);
                    uStack_30 = *piStack_34;
                    piStack_40 = (int *)(iVar6 + s0);
                    (*(code *)(&memmove))(iVar9, uStack_30 * 2 + (int)puStack_4c,
                                          (*(int *)(iVar11 + *(int *)(0x94 + ar5_00) * 4) - uStack_30) * 2, puVar13);
                    uVar7 = 0;
                    iVar6 = (int)0x8c;
                    piVar15 = (int *)(iVar9 + (*(int *)(iVar11 + *(int *)(0x94 + ar5_00) * 4) - *piStack_34) * 2 + 3U &
                                      0xfffffffc);
                    if (*(int *)(iVar6 + ar5_00) - s0 != -1) {
                        do {
                            iVar9 = (*(int *)(iVar6 + ar5_00) - s0) + uVar7;
                            uVar7 = uVar7 + 1;
                            *piVar15 = iVar9 + 1;
                            piVar15 = piVar15 + 1;
                        } while (uVar7 < (*(int *)(iVar6 + ar5_00) - s0) + 1U);
                    }
                    memmove(piVar15, iVar11, iStack_2c);
                    piVar15 = (int *)((int)piVar15 + iStack_2c);
                    piVar8 = piStack_40;
                    if (piStack_40 < *(int *)(0x94 + ar5_00) + 1U) {
                        do {
                            iVar9 = (int)piVar8 * 4;
                            piVar8 = (int *)((int)piVar8 + 1);
                            iVar6 = (int)0x94;
                            *piVar15 = *(int *)(iVar11 + iVar9) - uVar12;
                            piVar15 = piVar15 + 1;
                        } while (piVar8 < *(int *)(iVar6 + ar5_00) + 1U);
                    }
                    iVar11 = (int)puVar17 * 2;
                    memmove(piVar15, iStack_44, iVar11);
                    (*(code *)(&memmove))(
                        (int)piVar15 + iVar11, s0 * 2 + iVar11 + iStack_44,
                        (((*(int *)(0x8c + -4 + ar5_00) + *(int *)(0x8c + ar5_00)) - (int)puVar17) - s0) * 2, puVar13);
                    iVar9 = (int)0x8c;
                    iVar6 = 0;
                    piVar8 = piVar20 + 1;
                    piVar14 =
                        (int *)((int)piVar15 + iVar11 +
                                    (((*(int *)(iVar9 + -4 + ar5_00) + *(int *)(iVar9 + ar5_00)) - (int)puVar17) - s0) *
                                        2 +
                                    3U &
                                0xfffffffc);
                    *piVar14 = *piVar20 - s0;
                    piVar14 = piVar14 + 1;
                    iVar9 = (*(int *)(iVar9 + -4 + ar5_00) + *(int *)(iVar9 + ar5_00)) - s0;
                    puStack_4c = NULL;
                    piVar15 = piVar14;
                    piStack_64 = piVar20;
                    piStack_60 = piVar8;
                    if (puVar17 != NULL) {
                        do {
                            uVar7 = *piStack_64 - *piVar20;
                            if (uVar7 < (u32)(*piVar8 - *piVar20)) {
                                do {
                                    if ((u32 *)piVar20[iVar18 + uVar7] < puVar17) {
                                        iVar11 = piVar20[iVar18 + uVar7];
                                    LAB_8c1233aa:
                                        piVar14[iVar9 + (uVar7 - iVar6)] = iVar11;
                                    } else {
                                        if (puVar19 <= (u32 *)piVar20[iVar18 + uVar7]) {
                                            iVar11 = piVar20[iVar18 + uVar7] - s0;
                                            goto LAB_8c1233aa;
                                        }
                                        iVar6 = iVar6 + 1;
                                    }
                                    uVar7 = uVar7 + 1;
                                } while (uVar7 < (u32)(*piVar8 - *piVar20));
                            }
                            piVar8 = piVar8 + 1;
                            *piVar15 = (*piStack_60 - s0) - iVar6;
                            piVar15 = piVar15 + 1;
                            puStack_4c = (u32 *)((int)puStack_4c + 1);
                            piStack_60 = piStack_60 + 1;
                            piStack_64 = piStack_64 + 1;
                        } while (puStack_4c < puVar17);
                    }
                    piVar8 = piVar20 + (int)puVar17 + 1;
                    piVar16 = piVar20 + (int)puVar17;
                    for (puVar13 = puVar17; puVar13 < puVar19; puVar13 = (u32 *)((int)puVar13 + 1)) {
                        iVar3 = *piVar16;
                        piVar16 = piVar16 + 1;
                        iVar11 = *piVar8;
                        piVar8 = piVar8 + 1;
                        iVar6 = iVar6 + (iVar11 - iVar3);
                    }
                    puVar13 = puVar19;
                    if (puVar19 < (u32 *)(*(int *)(0x8c + -4 + ar5_00) + *(int *)(0x8c + ar5_00))) {
                        do {
                            uVar7 = piVar20[(int)puVar13] - *piVar20;
                            if (uVar7 < (u32)(piVar20[(int)puVar13 + 1] - *piVar20)) {
                                do {
                                    if ((u32 *)piVar20[iVar18 + uVar7] < puVar17) {
                                        piVar14[iVar9 + (uVar7 - iVar6)] = piVar20[iVar18 + uVar7];
                                    } else if ((u32 *)piVar20[iVar18 + uVar7] < puVar19) {
                                        iVar6 = iVar6 + 1;
                                    } else {
                                        piVar14[iVar9 + (uVar7 - iVar6)] = piVar20[iVar18 + uVar7] - s0;
                                    }
                                    uVar7 = uVar7 + 1;
                                } while (uVar7 < (u32)(piVar20[(int)puVar13 + 1] - *piVar20));
                            }
                            iVar11 = (int)puVar13 + 1;
                            puVar13 = (u32 *)((int)puVar13 + 1);
                            iVar3 = (int)0x8c;
                            *piVar15 = (piVar20[iVar11] - s0) - iVar6;
                            piVar15 = piVar15 + 1;
                        } while (puVar13 < (u32 *)(*(int *)(iVar3 + -4 + ar5_00) + *(int *)(iVar3 + ar5_00)));
                    }
                    iVar9 = (int)0x8c;
                    *(int *)(iVar2 + 4) = iStack_3c;
                    *(int *)(iVar9 + iVar2) = *(int *)(iVar9 + iVar2) - s0;
                    *(int *)(iVar9 + 8 + iVar2) = *(int *)(iVar9 + 8 + iVar2) - s0;
                    *(int *)(iVar9 + 0xc + iVar2) = *(int *)(iVar9 + 0xc + iVar2) - iVar6;
                    puVar4 = (u16 *)((int)puVar17 * 2 + iStack_44);
                    a6 = puVar4;
                    while (puVar17 < puVar19) {
                        if ((*a6 & 1) != 0) {
                            *(int *)(0x9c + iVar2) = *(int *)(0x9c + iVar2) + -1;
                        }
                        puVar17 = (u32 *)((int)puVar17 + 1);
                        if ((*puVar4 & 2) != 0) {
                            *(int *)(0xa0 + iVar2) = *(int *)(0xa0 + iVar2) + -1;
                        }
                        puVar4 = puVar4 + 1;
                        a6 = a6 + 1;
                    }
                    *(u32 *)(0xa8 + iVar2) = *(int *)(0xa8 + iVar2) - uVar12;
                    if (piStack_48[2] != 0) {
                        (**(code **)(iStack_50 + 0xc))(*piStack_48, &uStack_28, a6, 2);
                    }
                    iVar9 = 0;
                    *piStack_48 = iVar2;
                    piStack_48[2] = 1;
                }
            }
        } else {
            iVar9 = 5;
        }
    }
    return iVar9;
}

/*
 * asr_sub_12356c  0x8c12356c
 * area name: in the asr library code range
 * called by: asr_sub_12394c, asr_sub_123954, asr_sub_123e4c, asr_sub_123e54, asr_sub_12462c
 */
int asr_sub_12356c(int a0, u32 unused_a1, u32 a2) {
    int iVar1;

    iVar1 = (int)0x4d4;
    *(u16 *)(iVar1 + a0) = 0;
    *(u16 *)(iVar1 + 2 + a0) = 0;
    *(u16 *)(iVar1 + -0x14 + a0) = 0;
    return iVar1 + -0x14;
}

/*
 * asr_sub_12357c  0x8c12357c
 * area name: in the asr library code range
 * called by: asr_sub_1235fc, asr_sub_123602, asr_sub_1239f0
 */
u32 asr_sub_12357c(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = asr_sub_120348(a0, 0xc, *(u8 *)(a0 + 4), a1);
    return uVar1;
}

/*
 * asr_sub_123594  0x8c123594
 * area name: in the asr library code range
 * called by: asr_sub_1235fc, asr_sub_123602, asr_sub_1239f0
 */
u32 asr_sub_123594(int a0, u32 a1) {
    int iVar1;

    if (*(char *)(0x4bc + a0) == '\0') {
        if (((short)a1 == 0) || (*(short *)(0x4b8 + a0) == (short)a1)) {
            return (int)*(short *)(0x4b8 + a0);
        }
        iVar1 = (int)0x4bc;
        *(u8 *)(iVar1 + a0) = 1;
        *(u16 *)(iVar1 + 2 + a0) = 0x32;
        *(u16 *)(iVar1 + -4 + a0) = 0;
        asr_sub_120348(a0, 0xb, (short)a1, 0);
    }
    return 0;
}

/*
 * asr_sub_12359a  0x8c12359a
 * area name: in the asr library code range
 */
u32 asr_sub_12359a(u32 unused_a0, u32 a1) {
    int in_r0;
    int iVar1;
    int unaff_r14;

    if (*(char *)(in_r0 + unaff_r14) == '\0') {
        if (((u16)a1 == 0) || (*(u16 *)(0x4b8 + unaff_r14) == (u16)a1)) {
            return (int)*(short *)(0x4b8 + unaff_r14);
        }
        iVar1 = (int)0x4bc;
        *(u8 *)(iVar1 + unaff_r14) = 1;
        *(u16 *)(iVar1 + 2 + unaff_r14) = 0x32;
        *(u16 *)(iVar1 + -4 + unaff_r14) = 0;
        asr_sub_120348(unaff_r14, 0xb, (u32)(u16)a1, 0);
    }
    return 0;
}

/*
 * asr_sub_1235fc  0x8c1235fc
 * area name: in the asr library code range
 * called by: asr_sub_1238a6, asr_sub_1238ac
 */
u32 asr_sub_1235fc(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    float fVar6;
    float fVar7;
    int iVar8;

    fVar7 = (*(float *)(a0 + 0x2c) + *(float *)(a0 + 0x38) + *(float *)(a0 + 0x3c)) - *(float *)(a0 + 0x4b0);
    iVar4 = 0;
    uVar1 = asr_sub_123594(a0, 0);
    uVar5 = uVar1 & 0xffff;
    if (uVar5 != 0) {
        fVar6 = (float)uVar5;
        *(short *)(a0 + 0x4ba) = (short)uVar1;
        *(u32 *)(a0 + 0x4cc) = 0;
        uVar1 = uVar5;
        if (0.19999999 < ABS(fVar7)) {
            iVar8 = (int)(fVar6 * (-(*(float *)(a0 + 0x4c4) * fVar7 * 0.049999997) + 1.0));
            if (0xffff < iVar8) {
                iVar8 = 0xffff;
            }
            iVar4 = iVar8;
            if (*(short *)(a0 + 0x4c0) != 0) {
                a2 = (u32) * (u16 *)(a0 + 0x4c0);
                a3 = (u32) * (u16 *)(a0 + 0x4c2);
                iVar3 = a2 - a3;
                iVar2 = iVar3;
                if (iVar3 < iVar8) {
                    iVar2 = iVar8;
                }
                iVar4 = a3 + a2;
                if ((iVar2 < iVar4) && (iVar4 = iVar8, iVar8 <= iVar3)) {
                    iVar4 = iVar3;
                }
            }
            uVar1 = asr_sub_123594(a0, iVar4);
            uVar1 = uVar1 & 0xffff;
            if (uVar1 == 0) {
                *(u32 *)(a0 + 0x4cc) = 1;
                return 0;
            }
        }
        if (*(short *)(a0 + 0x4c0) == 0) {
            iVar4 = labs(uVar1 - uVar5);
            if ((int)(fVar6 * 0.01) < iVar4) {
                *(u16 *)(a0 + 0x4b4) = 0;
            }
            if (10 < *(u16 *)(a0 + 0x4b4)) {
                *(short *)(a0 + 0x4c0) = (short)uVar1;
                *(u16 *)(a0 + 0x4b4) = 0;
                fVar7 = *(float *)(a0 + 0x2c) + *(float *)(a0 + 0x38) + *(float *)(a0 + 0x3c);
                if ((((*(u16 *)(a0 + 0x4c0) == 0xffff) && (fVar7 < *(float *)(a0 + 0x4b0) + -2.763102)) ||
                     ((*(u16 *)(a0 + 0x4c0) < 0x199b && (*(float *)(a0 + 0x4b0) + 1.381551 < fVar7)))) &&
                    (uVar1 = asr_sub_12357c(a0, 5), (uVar1 & 0xff) != 0)) {
                    return 1;
                }
            }
        } else {
            *(u16 *)(a0 + 0x4b4) = 0;
        }
    }
    return 0;
}

/*
 * asr_sub_123602  0x8c123602
 * area name: in the asr library code range
 */
u32 asr_sub_123602(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    char cVar1;
    int in_r0;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    int unaff_r14;
    u64 *puVar8;
    double dVar9;
    double dVar10;
    u32 uVar12;
    double dVar11;
    float fVar13;
    u32 in_fr5;
    float fVar14;
    u64 in_dr12;
    u64 in_dr14;
    double in_xd2;
    double in_xd14;
    bool bVar15;
    u32 in_PR;
    u32 uVar16;
    u32 uVar17;
    u32 uVar18;
    int iVar19;
    u8 in_FPSCR_CAUSE;
    u8 bVar20;
    u8 in_FPSCR_DN;
    u8 bVar21;
    u8 in_FPSCR_PR;
    u8 bVar22;
    u8 in_FPSCR_SZ;
    u8 bVar23;
    u8 auStack_30[16];
    u64 uStack_20;
    u64 uStack_18;

    uStack_18 = (double)CONCAT44((int)in_dr14, (u32)uStack_18);
    uStack_18._0_4_ = (int)((u64)in_dr14 >> 0x20);
    puVar8 = &uStack_20;
    uStack_20 = CONCAT44((int)in_dr12, (int)((u64)in_dr12 >> 0x20));

    *(u32 *)((int)puVar8 + -4) = in_PR;

    dVar10 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x2c), *(u32 *)(in_r0 + unaff_r14));

    dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) + SUB84(dVar10, 0), SUB84(dVar10, 0));

    dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), *(u32 *)(unaff_r14 + 0x3c));

    dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) + SUB84(dVar10, 0), SUB84(dVar10, 0));

    uVar12 = (u32)((u64)dVar10 >> 0x20);
    dVar10 = (double)CONCAT44(uVar12, (int)in_dr14);
    dVar11 = (double)CONCAT44(uVar12, *(u32 *)(0x4b0 + unaff_r14));

    dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) - SUB84(dVar11, 0), SUB84(dVar10, 0));

    uVar6 = 0;
    uVar2 = asr_sub_123594(a0, 0);
    uVar16 = 0x80000;
    uVar17 = 0xffff;
    uVar7 = uVar2 & 0xffff;
    if (uVar7 == 0) {
        return 0;
    }
    uVar4 =
        ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) &
        0xffe7ffff;
    uVar18 = (uVar4 & 0x100000) >> 0x14;
    iVar3 = (int)0x4ba;
    fVar13 = (float)((u64)dVar10 >> 0x20);
    *(short *)(iVar3 + unaff_r14) = (short)uVar2;
    *(u32 *)(iVar3 + 0x12 + unaff_r14) = 0;
    if ((char)uVar18 == '\0') {
        dVar10 = (double)CONCAT44(fVar13, (float)uVar7);
        in_xd2 = in_xd14;
    }
    uVar16 = uVar4 & 0x80000 | uVar18 << 0x14 | uVar16 & 0x3fffff;
    bVar20 = 0;
    bVar21 = 0;
    uVar2 = (uVar16 & 0x80000) >> 0x13;
    bVar22 = (u8)uVar2;
    uVar16 = (uVar16 & 0x100000) >> 0x14;
    bVar23 = (u8)uVar16;
    dVar11 = (double)fVar13;
    if (bVar23 == 0) {
        dVar9 = (double)CONCAT44(g_8c1236fc, g_8c123700);
    } else {
        dVar9 = (double)CONCAT44(g_8c123700, g_8c1236fc);
    }
    if (bVar22 == 0) {
        fVar13 = ABS((float)((u64)dVar11 >> 0x20));
        dVar11 = (double)CONCAT44(fVar13, SUB84(dVar11, 0));
        bVar15 = (float)((u64)dVar9 >> 0x20) < fVar13;
    } else {
        dVar11 = ABS(dVar11);
        fVar13 = (float)((u64)dVar11 >> 0x20);
        bVar15 = dVar9 < dVar11;
    }
    uVar18 = uVar7;
    if (bVar15) {
        uVar16 = (uVar2 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
        if (bVar23 == 0) {
            dVar11 = (double)CONCAT44(fVar13, *(u32 *)(0x4c4 + unaff_r14));
        }
        uVar2 = (uVar16 & 0x80000) >> 0x13;
        cVar1 = (char)uVar2;
        uVar16 = uVar16 >> 0x14;
        if (cVar1 == '\0') {
            fVar13 = SUB84(dVar11, 0) * (float)((u64)dVar10 >> 0x20);
        } else {
            fVar13 = SUB84(dVar11 * dVar10, 0);
        }
        if ((char)uVar16 == '\0') {
            dVar11 = (double)CONCAT44(g_8c123704, fVar13);
            in_xd2 = (double)CONCAT44(SUB84(dVar10, 0), g_8c123708);
        } else {
            dVar11 = (double)CONCAT44(g_8c123708, g_8c123704);
        }
        if (cVar1 == '\0') {
            fVar13 = (float)((u64)dVar11 >> 0x20);
            dVar11 = (double)CONCAT44(fVar13, SUB84(dVar11, 0) * fVar13);
        } else {
            dVar11 = dVar11 * dVar11;
        }
        uVar12 = (u32)((u64)dVar11 >> 0x20);
        if (cVar1 == '\0') {
            fVar13 = -SUB84(dVar11, 0) + SUB84(in_xd2, 0);
            dVar11 = (double)CONCAT44(uVar12, fVar13);
            fVar13 = (float)((u64)in_xd2 >> 0x20) * fVar13;
            dVar9 = (double)CONCAT44(fVar13, SUB84(in_xd2, 0));
            uVar18 = (u32)fVar13;
        } else {
            dVar11 = (double)CONCAT44(uVar12, -SUB84(dVar11, 0)) + in_xd2;
            dVar9 = in_xd2 * dVar11;
            uVar18 = (u32)dVar9;
        }
        if ((int)uVar17 < (int)uVar18) {
            uVar18 = uVar17;
        }
        iVar3 = (int)0x4c0;
        uVar6 = uVar18;
        if (*(short *)(iVar3 + unaff_r14) != 0) {
            a2 = (u32) * (u16 *)(iVar3 + unaff_r14);
            a3 = (u32) * (u16 *)(iVar3 + 2 + unaff_r14);
            uVar5 = a2 - a3;
            uVar4 = uVar5;
            if ((int)uVar5 < (int)uVar18) {
                uVar4 = uVar18;
            }
            uVar6 = a3 + a2;
            if (((int)uVar4 < (int)uVar6) && (uVar6 = uVar18, (int)uVar18 <= (int)uVar5)) {
                uVar6 = uVar5;
            }
        }
        uVar16 = (uVar2 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
        bVar20 = 0;
        bVar21 = 0;
        bVar22 = (u8)((uVar16 & 0x80000) >> 0x13);
        bVar23 = (u8)(uVar16 >> 0x14);
        uVar18 = asr_sub_123594(unaff_r14, uVar6);
        uVar18 = uVar18 & 0xffff;
        if (uVar18 == 0) {
            *(u32 *)(0x4cc + unaff_r14) = 1;
            return 0;
        }
    }
    fVar13 = SUB84(dVar9, 0);
    uVar12 = (u32)((u64)dVar11 >> 0x20);
    if (*(short *)(0x4c0 + unaff_r14) != 0) {
        *(u16 *)(0x4b4 + unaff_r14) = 0;
        return 0;
    }
    uVar16 = ((u32)bVar20 << 0xc | (u32)bVar21 << 0x12 | (u32)bVar22 << 0x13 | (u32)bVar23 << 0x14) & 0xffe7ffff;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = (u8)((uVar16 & 0x80000) >> 0x13);
    bVar23 = (u8)((uVar16 & 0x100000) >> 0x14);
    iVar3 = labs(uVar18 - uVar7);
    uVar16 = ((u32)bVar20 << 0xc | (u32)bVar21 << 0x12 | (u32)bVar22 << 0x13 | (u32)bVar23 << 0x14) & 0xffe7ffff;
    dVar11 = (double)CONCAT44(uVar12, 0x3c23d70a);
    uVar6 = (uVar16 & 0x80000) >> 0x13;
    uVar16 = (uVar16 & 0x100000) >> 0x14;
    cVar1 = (char)uVar16;
    if ((char)uVar6 == '\0') {
        iVar19 = (int)(SUB84(dVar10, 0) * 0x3c23d70a);
    } else {
        iVar19 = (int)(dVar10 * dVar11);
    }
    if (iVar19 < iVar3) {
        *(u16 *)(0x4b4 + unaff_r14) = 0;
    }
    if (*(u16 *)(0x4b4 + unaff_r14) < 0xb) {
        return 0;
    }
    iVar3 = (int)0x4c0;
    *(short *)(iVar3 + unaff_r14) = (short)uVar18;
    *(u16 *)(iVar3 + -0xc + unaff_r14) = 0;
    if (cVar1 == '\0') {
        dVar11 = (double)(u64) * (u32 *)(unaff_r14 + 0x38);
    }
    uVar16 = (uVar6 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
    if (cVar1 == '\0') {
        dVar10 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x2c), SUB84(dVar11, 0));
    } else {
        dVar10 = *(double *)(unaff_r14 + 0x2c);
    }
    uVar6 = (uVar16 & 0x80000) >> 0x13;
    bVar20 = (u8)uVar6;
    uVar16 = uVar16 >> 0x14;
    bVar21 = (u8)uVar16;
    if (bVar20 == 0) {
        dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) + SUB84(dVar10, 0), SUB84(dVar10, 0));
    } else {
        dVar10 = dVar10 + dVar10;
    }
    if (bVar21 == 0) {
        dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), *(u32 *)(unaff_r14 + 0x3c));
    }
    dVar11 = dVar10;
    if (bVar21 == 0) {
        dVar11 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), in_fr5);
    }
    if (bVar20 == 0) {
        fVar14 = (float)((u64)dVar11 >> 0x20) + SUB84(dVar10, 0);
    } else {
        fVar14 = (float)((u64)(dVar11 + dVar10) >> 0x20);
    }
    if (*(u16 *)(0x4c0 + unaff_r14) == uVar17) {
        uVar17 = uVar6 << 0x13 | uVar16 << 0x14 | 0x80000 & 0x3fffff;
        bVar20 = (u8)((uVar17 & 0x80000) >> 0x13);
        bVar21 = (u8)((uVar17 & 0x100000) >> 0x14);
        if (bVar21 == 0) {
            fVar13 = *(float *)(0x4b0 + unaff_r14);
        }
        dVar10 = (double)fVar13;
        if (bVar21 == 0) {
            dVar11 = (double)CONCAT44(g_8c123810, g_8c123814);
        } else {
            dVar11 = (double)CONCAT44(g_8c123814, g_8c123810);
        }
        if (bVar20 == 0) {
            fVar13 = (float)((u64)dVar10 >> 0x20) + (float)((u64)dVar11 >> 0x20);
            dVar10 = (double)CONCAT44(fVar13, SUB84(dVar10, 0));
            bVar15 = (float)((u64)(double)fVar14 >> 0x20) < fVar13;
        } else {
            dVar10 = dVar10 + dVar11;
            bVar15 = (double)fVar14 < dVar10;
        }
        fVar13 = SUB84(dVar10, 0);
        if (bVar15)
            goto LAB_8c1237c2;
    }
    if ((int)0x199b <= (int)(u32) * (u16 *)(0x4c0 + unaff_r14)) {
        return 0;
    }
    uVar17 = (u32)bVar20 << 0x13 | (u32)bVar21 << 0x14 | 0x80000 & 0x3fffff;
    cVar1 = (char)((uVar17 & 0x100000) >> 0x14);
    if (cVar1 == '\0') {
        fVar13 = *(float *)(0x4b0 + unaff_r14);
    }
    if (cVar1 == '\0') {
        dVar10 = (double)CONCAT44(g_8c123818, g_8c123814);
    } else {
        dVar10 = (double)CONCAT44(_FUN_8c12381c, g_8c123818);
    }
    if ((char)((uVar17 & 0x80000) >> 0x13) == '\0') {
        bVar15 =
            (float)((u64)(double)fVar13 >> 0x20) + (float)((u64)dVar10 >> 0x20) < (float)((u64)(double)fVar14 >> 0x20);
    } else {
        bVar15 = (double)fVar13 + dVar10 < (double)fVar14;
    }
    if (!bVar15) {
        return 0;
    }
LAB_8c1237c2:
    uVar17 = asr_sub_12357c(unaff_r14, 5);
    if ((uVar17 & 0xff) == 0) {
        return 0;
    }
    return 1;
}

/*
 * asr_sub_12381c  0x8c12381c
 * area name: in the asr library code range
 * called by: asr_sub_1238a6, asr_sub_1238ac
 */
int asr_sub_12381c(int a0) {
    int iVar1;

    iVar1 = 0x4b8;
    if ((*(short *)(a0 + 0x4b8) != 0) && (iVar1 = *(int *)(a0 + 0x4cc), iVar1 == 1)) {
        *(u32 *)(a0 + 0x4cc) = 0;
        if (*(short *)(a0 + 0x4c0) == 0) {
            iVar1 = abs((u32) * (u16 *)(a0 + 0x4b8) - (u32) * (u16 *)(a0 + 0x4ba));
            if ((int)((int)((float)*(u16 *)(a0 + 0x4ba) * 0.01) & 0xffffU) < iVar1) {
                *(u16 *)(a0 + 0x4b4) = 0;
            }
            iVar1 = 0x4b4;
            if (10 < *(u16 *)(a0 + 0x4b4)) {
                *(u16 *)(a0 + 0x4c0) = *(u16 *)(a0 + 0x4b8);
                iVar1 = 0x4b4;
                *(u16 *)(a0 + 0x4b4) = 0;
            }
        } else {
            iVar1 = 0x4b4;
            *(u16 *)(a0 + 0x4b4) = 0;
        }
    }
    return iVar1;
}

/*
 * asr_sub_123822  0x8c123822
 * area name: in the asr library code range
 */
int asr_sub_123822(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    int iVar1;
    int unaff_r14;
    double dVar2;
    u32 uVar3;
    u8 in_FPSCR_CAUSE;
    u8 in_FPSCR_DN;
    u8 in_FPSCR_PR;

    if ((*(short *)(in_r0 + unaff_r14) != 0) && (in_r0 = *(int *)(0x4cc + unaff_r14), in_r0 == 1)) {
        iVar1 = (int)0x4cc;
        *(u32 *)(iVar1 + unaff_r14) = 0;
        if (*(short *)(iVar1 + -0xc + unaff_r14) == 0) {
            iVar1 = (*(code *)(&abs))((u32) * (u16 *)(0x4b8 + unaff_r14) - (u32) * (u16 *)(0x4b8 + 2 + unaff_r14), a1,
                                      a2, a3);
            dVar2 = (double)CONCAT44(0x3c23d70a, (float)*(u16 *)(0x4ba + unaff_r14));
            if ((char)((((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13) &
                        0xffe7ffff & 0x80000) >>
                       0x13) == '\0') {
                uVar3 = (u32)((float)*(u16 *)(0x4ba + unaff_r14) * 0x3c23d70a);
            } else {
                uVar3 = (u32)(dVar2 * dVar2);
            }
            if ((int)(uVar3 & 0xffff) < iVar1) {
                *(u16 *)(0x4b4 + unaff_r14) = 0;
            }
            in_r0 = (int)0x4b4;
            if (10 < *(u16 *)(in_r0 + unaff_r14)) {
                iVar1 = (int)0x4b8;
                *(u16 *)(iVar1 + 8 + unaff_r14) = *(u16 *)(iVar1 + unaff_r14);
                in_r0 = iVar1 + -4;
                *(u16 *)(in_r0 + unaff_r14) = 0;
            }
        } else {
            in_r0 = (int)0x4b4;
            *(u16 *)(in_r0 + unaff_r14) = 0;
        }
    }
    return in_r0;
}

/*
 * asr_sub_1238a6  0x8c1238a6
 * area name: in the asr library code range
 * called by: asr_sub_1244f8
 */
u32 asr_sub_1238a6(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    short sVar2;
    u32 uVar3;
    u32 ar5_00;

    if ((*(char *)(0x4bc + a0) != '\0') &&
        (sVar2 = *(short *)(0x4be + a0) + -1, *(short *)(0x4be + a0) = sVar2, sVar2 == 0)) {
        iVar1 = (int)0x4bc;
        *(u8 *)(iVar1 + a0) = 0;
        *(u32 *)(iVar1 + 0x10 + a0) = 0;
        *(u16 *)(iVar1 + -8 + a0) = 0;
    }
    if (*(short *)(0x4c0 + a0) == 0) {
        uVar3 = 1;
    } else {
        uVar3 = 2;
    }
    ar5_00 = (u32) * (u16 *)(0x4b4 + a0);
    if ((uVar3 <= ar5_00) && (ar5_00 != *(u16 *)(0x4b6 + a0))) {
        if (*(int *)(0x4cc + a0) == 0) {
            uVar3 = asr_sub_1235fc(a0, ar5_00, a2, a3);
            if ((uVar3 & 0xff) != 0) {
                return 1;
            }
        } else {
            asr_sub_12381c(a0);
        }
    }
    *(u16 *)(0x4b4 + 2 + a0) = *(u16 *)(0x4b4 + a0);
    return 0;
}

/*
 * asr_sub_1238ac  0x8c1238ac
 * area name: in the asr library code range
 */
u32 asr_sub_1238ac(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    int iVar1;
    short sVar2;
    u32 uVar3;
    u32 a5;
    int unaff_r14;

    if ((*(char *)(in_r0 + unaff_r14) != '\0') &&
        (sVar2 = *(short *)(0x4be + unaff_r14) + -1, *(short *)(0x4be + unaff_r14) = sVar2, sVar2 == 0)) {
        iVar1 = (int)0x4bc;
        *(u8 *)(iVar1 + unaff_r14) = 0;
        *(u32 *)(iVar1 + 0x10 + unaff_r14) = 0;
        *(u16 *)(iVar1 + -8 + unaff_r14) = 0;
    }
    if (*(short *)(0x4c0 + unaff_r14) == 0) {
        uVar3 = 1;
    } else {
        uVar3 = 2;
    }
    a5 = (u32) * (u16 *)(0x4b4 + unaff_r14);
    if ((uVar3 <= a5) && (a5 != *(u16 *)(0x4b6 + unaff_r14))) {
        if (*(int *)(0x4cc + unaff_r14) == 0) {
            uVar3 = asr_sub_1235fc(unaff_r14, a5, a2, a3);
            if ((uVar3 & 0xff) != 0) {
                return 1;
            }
        } else {
            asr_sub_12381c(unaff_r14);
        }
    }
    *(u16 *)(0x4b4 + 2 + unaff_r14) = *(u16 *)(0x4b4 + unaff_r14);
    return 0;
}

/*
 * asr_sub_12394c  0x8c12394c
 * area name: in the asr library code range
 * called by: asr_sub_12462c
 */
u32 asr_sub_12394c(int a0, u32 a1) {
    u32 uVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    float fVar2;
    u64 uVar3;
    char cVar4;

    if (*(char *)(a0 + 0x4ac) != (char)a1) {
        *(char *)(a0 + 0x4ac) = (char)a1;
        if ((char)a1 == '\0') {
            fVar2 = *(float *)(a0 + 0x2c) + *(float *)(a0 + 0x38) + *(float *)(a0 + 0x3c);
        } else {
            *(u16 *)(a0 + 0x4b8) = 0;
            ar7_00 = 0;
            ar6_00 = 0;
            *(u8 *)(a0 + 0x4bc) = 0;
            ar5_00 = 10;
            uVar1 = asr_sub_120348(a0, 10, 0, 0);
            if ((uVar1 & 0xff) != 0) {
                return 1;
            }
            cVar4 = '\0';
            asr_sub_12356c(a0, ar5_00, ar6_00);
            if (cVar4 == '\0') {
                uVar3 = CONCAT44(*(u32 *)(a0 + 0x38), *(u32 *)(a0 + 0x3c));
            } else {
                uVar3 = *(u64 *)(a0 + 0x38);
            }
            fVar2 = *(float *)(a0 + 0x2c) - ((float)((u64)uVar3 >> 0x20) + (float)uVar3);
        }
        *(float *)(a0 + 0x2c) = fVar2;
    }
    return 0;
}

/*
 * asr_sub_123954  0x8c123954
 * area name: in the asr library code range
 */
u32 asr_sub_123954(u32 unused_a0, u32 a1) {
    char cVar1;
    u8 *puVar2;
    int in_r0;
    int iVar3;
    u32 in_r2;
    u32 uVar4;
    u32 a5;
    u32 a6;
    u32 a7;
    int unaff_r14;
    u32 in_fr3;
    float fVar5;
    double dVar6;
    u64 in_xd2;
    u8 in_FPSCR_CAUSE;
    u8 bVar7;
    u8 in_FPSCR_DN;
    u8 bVar8;
    u8 in_FPSCR_PR;
    u8 bVar9;
    u8 in_FPSCR_SZ;
    u8 bVar10;
    char cVar11;

    if (*(u8 *)(in_r0 + unaff_r14) != in_r2) {
        *(char *)(in_r0 + unaff_r14) = (char)a1;
        if ((char)a1 == '\0') {

            in_fr3 = *(u32 *)(unaff_r14 + 0x3c);

            uVar4 = ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 |
                     (u32)in_FPSCR_SZ << 0x14) &
                    0xffe7ffff;

            dVar6 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x38), in_fr3);

            cVar1 = (char)((uVar4 & 0x80000) >> 0x13);
            cVar11 = (char)((uVar4 & 0x100000) >> 0x14);
            if (cVar1 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + SUB84(dVar6, 0), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 + dVar6;
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), *(u32 *)(unaff_r14 + 0x2c));
            } else {
                in_xd2 = *(u64 *)(unaff_r14 + 0x2c);
            }
            if (cVar1 == '\0') {
                fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 + dVar6, 0);
            }
        } else {
            iVar3 = (int)0x4b8;
            *(u16 *)(iVar3 + unaff_r14) = 0;
            puVar2 = (&asr_sub_120348);
            uVar4 = 0xffe7ffff;
            a7 = 0;
            a6 = 0;
            *(u8 *)(iVar3 + 4 + unaff_r14) = 0;
            a5 = 10;
            uVar4 = ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 |
                     (u32)in_FPSCR_SZ << 0x14) &
                    uVar4;
            bVar7 = 0;
            bVar8 = 0;
            bVar9 = (u8)((uVar4 & 0x80000) >> 0x13);
            bVar10 = (u8)((uVar4 & 0x100000) >> 0x14);
            uVar4 = (*(code *)puVar2)(unaff_r14, 10, 0, 0);
            if ((uVar4 & 0xff) != 0) {
                return 1;
            }
            uVar4 = ((u32)bVar7 << 0xc | (u32)bVar8 << 0x12 | (u32)bVar9 << 0x13 | (u32)bVar10 << 0x14) & 0xffe7ffff;
            bVar7 = 0;
            bVar8 = 0;
            bVar9 = (u8)((uVar4 & 0x80000) >> 0x13);
            bVar10 = (u8)((uVar4 & 0x100000) >> 0x14);
            asr_sub_12356c(unaff_r14, a5, a6);
            if (bVar10 == 0) {
                in_fr3 = *(u32 *)(unaff_r14 + 0x3c);
            } else {
                in_xd2 = *(u64 *)(unaff_r14 + 0x3c);
            }
            uVar4 = ((u32)bVar7 << 0xc | (u32)bVar8 << 0x12 | (u32)bVar9 << 0x13 | (u32)bVar10 << 0x14) & 0xffe7ffff;
            if (bVar10 == 0) {
                dVar6 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x38), in_fr3);
            } else {
                dVar6 = *(double *)(unaff_r14 + 0x38);
            }
            cVar1 = (char)((uVar4 & 0x80000) >> 0x13);
            cVar11 = (char)((uVar4 & 0x100000) >> 0x14);
            if (cVar1 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + SUB84(dVar6, 0), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 + dVar6;
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), *(u32 *)(unaff_r14 + 0x2c));
            } else {
                in_xd2 = *(u64 *)(unaff_r14 + 0x2c);
            }
            if (cVar1 == '\0') {
                fVar5 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 - dVar6, 0);
            }
        }
        if (cVar11 == '\0') {
            *(float *)(unaff_r14 + 0x2c) = fVar5;
        } else {
            *(u64 *)(unaff_r14 + 0x2c) = in_xd2;
        }
    }
    return 0;
}

/*
 * asr_sub_1239f0  0x8c1239f0
 * area name: in the asr library code range
 * called by: asr_sub_1244f8
 */
u32 asr_sub_1239f0(int a0) {
    u32 uVar1;
    float fVar2;
    u64 in_dr4;
    float fVar3;
    float in_PR;
    u8 in_FPSCR_DN;
    char cVar4;

    fVar3 = (float)((u64)in_dr4 >> 0x20);
    if (((*(char *)(a0 + 0x4ac) != '\0') && (*(short *)(a0 + 0x4c0) != 0)) || (*(char *)(a0 + 0x4ac) == '\0')) {
        cVar4 = (char)((in_FPSCR_DN & 4) >> 2);
        if (cVar4 == '\0') {
            fVar2 = 5.7564626;
        } else {
            fVar2 = 0.0;
        }
        if ((*(float *)(a0 + 0x494) < fVar2) &&
            (3 < (int)((u32) * (u16 *)(a0 + 0x4d4) - (u32) * (u16 *)(a0 + 0x4d6)))) {
            cVar4 = '\0';
            uVar1 = asr_sub_12357c(a0, 0);
            if ((uVar1 & 0xff) != 0) {
                return 1;
            }
            *(u16 *)(a0 + 0x4d6) = *(u16 *)(a0 + 0x4d4);
        }
        fVar2 = fVar3;
        if (cVar4 == '\0') {
            fVar2 = *(float *)(a0 + 0x4a8);
            in_PR = fVar3;
        }
        if ((in_PR - fVar2 <= 0.69077545) || (*(short *)(a0 + 0x4d6) == *(short *)(a0 + 0x4d4))) {
            fVar3 = *(float *)(a0 + 0x2c);
            if (*(char *)(a0 + 0x4ac) != '\0') {
                fVar3 = fVar3 + *(float *)(a0 + 0x38) + *(float *)(a0 + 0x3c);
            }
            if ((fVar3 - *(float *)(a0 + 0x4a8) < -6.9077544) &&
                (3 < (int)((u32) * (u16 *)(a0 + 0x4d4) - (u32) * (u16 *)(a0 + 0x4d6)))) {
                uVar1 = asr_sub_12357c(a0, 2);
                if ((uVar1 & 0xff) != 0) {
                    return 1;
                }
                *(u16 *)(a0 + 0x4d6) = *(u16 *)(a0 + 0x4d4);
            }
        } else {
            *(u16 *)(a0 + 0x4d6) = *(u16 *)(a0 + 0x4d4);
            uVar1 = asr_sub_12357c(a0, 1);
            if ((uVar1 & 0xff) != 0) {
                return 1;
            }
        }
    }
    if ((((*(char *)(a0 + 0x4ac) != '\0') && (*(int *)(a0 + 0x4dc) != 0)) &&
         (*(u32 *)(a0 + 0x4dc) < *(u32 *)(a0 + 0x4d0))) &&
        (*(short *)(a0 + 0x4d4) == 0)) {
        uVar1 = asr_sub_12357c(a0, 3);
        if ((uVar1 & 0xff) != 0) {
            return 1;
        }
        if ((*(char *)(a0 + 0x4c9) == '\0') && (*(char *)(a0 + 0x4ac) != '\0')) {
            *(u8 *)(a0 + 0x4c9) = 1;
            uVar1 = asr_sub_123594(a0, 0xbfff);
            if ((uVar1 & 0xffff) != 0) {
                return 1;
            }
        }
        *(u32 *)(a0 + 0x4d0) = 0;
    }
    return 0;
}

/*
 * asr_sub_123bac  0x8c123bac
 * area name: in the asr library code range
 * called by: asr_sub_12462c
 */
u32 asr_sub_123bac(int a0, u8 *a1) {
    int iVar1;
    int iVar2;
    int iVar3;

    *a1 = *(u8 *)(a0 + 0x28);
    *(u32 *)(a1 + 4) = *(u32 *)(a0 + 0x2c);
    *(u32 *)(a1 + 8) = *(u32 *)(a0 + 0x30);
    *(u32 *)(a1 + 0xc) = *(u32 *)(a0 + 0x34);
    *(u32 *)(a1 + 0x10) = *(u32 *)(a0 + 0x38);
    *(u32 *)(a1 + 0x14) = *(u32 *)(a0 + 0x3c);
    *(u32 *)(a1 + 0x18) = *(u32 *)(a0 + 0x40);
    *(u16 *)(a1 + 0x1c) = *(u16 *)(a0 + 0x44);
    iVar1 = 0;
    iVar2 = 0;
    *(u16 *)(a1 + 0x1e) = *(u16 *)(a0 + 0x46);
    *(u16 *)(a1 + 0x20) = *(u16 *)(a0 + 0x48);
    *(u16 *)(a1 + 0x22) = *(u16 *)(a0 + 0x4a);
    *(u32 *)(a1 + 0x24) = *(u32 *)(a0 + 0x4c);
    *(u32 *)(a1 + 0x28) = *(u32 *)(a0 + 0x50);
    do {
        *(u32 *)(a1 + iVar1 + 0x2c) = *(u32 *)(a0 + 0x54 + iVar1);
        iVar2 = iVar2 + 2;
        *(u32 *)(a1 + iVar1 + 0x30) = *(u32 *)(a0 + iVar1 + 0x58);
        iVar1 = iVar1 + 8;
    } while (iVar2 < 0x14);
    iVar1 = *(int *)(a0 + 0xa8) - (a0 + 0x54);
    if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
    }
    iVar2 = 0;
    iVar3 = 0;
    *(short *)(a1 + 0x7c) = (short)(iVar1 >> 2);
    do {
        *(u16 *)(a1 + iVar2 + 0x7e) = *(u16 *)(a0 + 0xac + iVar2);
        *(u16 *)(a1 + iVar2 + 0x80) = *(u16 *)(a0 + iVar2 + 0xae);
        iVar3 = iVar3 + 3;
        *(u16 *)(a1 + iVar2 + 0x82) = *(u16 *)(a0 + iVar2 + 0xb0);
        iVar2 = iVar2 + 6;
    } while (iVar3 < 0x96);
    iVar1 = 0;
    iVar2 = 0;
    *(u32 *)(a1 + 0x1ac) = *(u32 *)(a0 + 0x430);
    do {
        iVar2 = iVar2 + 2;
        *(u16 *)(a1 + iVar1 + 0x1b0) = *(u16 *)(a0 + 0x434 + iVar1);
        *(u16 *)(a1 + iVar1 + 0x1b2) = *(u16 *)(a0 + iVar1 + 0x436);
        iVar1 = iVar1 + 4;
    } while (iVar2 < 0x28);
    iVar1 = *(int *)(a0 + 0x488) - (a0 + 0x434);
    *(short *)(a1 + 0x200) = (short)((int)(iVar1 + (u32)(iVar1 < 0)) >> 1);
    return 0x200;
}

/*
 * asr_sub_123d00  0x8c123d00
 * area name: in the asr library code range
 * called by: asr_sub_12462c
 */
u32 asr_sub_123d00(int a0, u8 *a1) {
    int iVar1;
    int iVar2;

    *(u8 *)(a0 + 0x28) = *a1;
    *(u32 *)(a0 + 0x2c) = *(u32 *)(a1 + 4);
    *(u32 *)(a0 + 0x30) = *(u32 *)(a1 + 8);
    *(u32 *)(a0 + 0x34) = *(u32 *)(a1 + 0xc);
    *(u32 *)(a0 + 0x38) = *(u32 *)(a1 + 0x10);
    *(u32 *)(a0 + 0x3c) = *(u32 *)(a1 + 0x14);
    *(u32 *)(a0 + 0x40) = *(u32 *)(a1 + 0x18);
    *(u16 *)(a0 + 0x44) = *(u16 *)(a1 + 0x1c);
    *(u16 *)(a0 + 0x46) = *(u16 *)(a1 + 0x1e);
    *(u16 *)(a0 + 0x48) = *(u16 *)(a1 + 0x20);
    iVar1 = 0;
    iVar2 = 0;
    *(u16 *)(a0 + 0x4a) = *(u16 *)(a1 + 0x22);
    *(u32 *)(a0 + 0x4c) = *(u32 *)(a1 + 0x24);
    *(u32 *)(a0 + 0x50) = *(u32 *)(a1 + 0x28);
    do {
        *(u32 *)(a0 + 0x54 + iVar1) = *(u32 *)(a1 + iVar1 + 0x2c);
        iVar2 = iVar2 + 2;
        *(u32 *)(a0 + iVar1 + 0x58) = *(u32 *)(a1 + iVar1 + 0x30);
        iVar1 = iVar1 + 8;
    } while (iVar2 < 0x14);
    iVar1 = 0;
    iVar2 = 0;
    *(u32 *)(a0 + 0xa8) = (u32) * (u16 *)(a1 + 0x7c) * 4 + a0 + 0x54;
    do {
        *(u16 *)(a0 + 0xac + iVar1) = *(u16 *)(a1 + iVar1 + 0x7e);
        *(u16 *)(a0 + iVar1 + 0xae) = *(u16 *)(a1 + iVar1 + 0x80);
        iVar2 = iVar2 + 3;
        *(u16 *)(a0 + iVar1 + 0xb0) = *(u16 *)(a1 + iVar1 + 0x82);
        iVar1 = iVar1 + 6;
    } while (iVar2 < 0x96);
    iVar1 = 0;
    iVar2 = 0;
    *(u32 *)(a0 + 0x430) = *(u32 *)(a1 + 0x1ac);
    do {
        iVar2 = iVar2 + 2;
        *(u16 *)(a0 + 0x434 + iVar1) = *(u16 *)(a1 + iVar1 + 0x1b0);
        *(u16 *)(a0 + iVar1 + 0x436) = *(u16 *)(a1 + iVar1 + 0x1b2);
        iVar1 = iVar1 + 4;
    } while (iVar2 < 0x28);
    *(u32 *)(a0 + 0x488) = (u32) * (u16 *)(a1 + 0x200) * 2 + a0 + 0x434;
    return 0x488;
}

/*
 * asr_sub_123e4c  0x8c123e4c
 * area name: in the asr library code range
 * called by: asr_sub_12462c
 */
u32 asr_sub_123e4c(int a0, u32 unused_a1, u32 a2) {
    u32 uVar1;
    u32 *puVar2;
    u32 ar5_00;
    float extraout_fr0;

    *(u8 *)(a0 + 0x28) = 0;
    asr_state_has_event(a0, 6, a2);
    ar5_00 = 0;
    puVar2 = (u32 *)(a0 + 0x54);
    *(short *)(a0 + 0x48) = (short)(int)extraout_fr0;
    do {
        *puVar2 = 0x4effffff;
        ar5_00 = ar5_00 + 2;
        puVar2[1] = 0x4effffff;
        puVar2 = puVar2 + 2;
    } while (ar5_00 < 0x14);
    *(int *)(a0 + 0xa8) = a0 + 0x54;
    uVar1 = asr_sub_12356c(a0, ar5_00, 0x14);
    return uVar1;
}

/*
 * asr_sub_123e54  0x8c123e54
 * area name: in the asr library code range
 */
u32 asr_sub_123e54(u32 unused_a0, u32 unused_a1, u32 a2) {
    char cVar1;
    int in_r0;
    u32 uVar2;
    u32 uVar3;
    u8 in_r3;
    u64 *puVar4;
    u32 ar5_00;
    int unaff_r14;
    u32 extraout_fr1;
    float extraout_fr0;
    u32 in_fr5;
    u64 uVar5;
    u16 uVar6;
    u8 in_FPSCR_CAUSE;
    u8 in_FPSCR_DN;
    u8 in_FPSCR_PR;
    u8 in_FPSCR_SZ;

    *(u8 *)(in_r0 + unaff_r14) = in_r3;
    uVar2 = g_8c123ef4;

    uVar2 = in_fr5;

    asr_state_has_event(unaff_r14, 6, a2);
    uVar3 =
        ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) &
        0xffe7ffff;
    cVar1 = (char)((uVar3 & 0x100000) >> 0x14);
    ar5_00 = 0;
    puVar4 = (u64 *)(unaff_r14 + 0x54);
    if ((char)((uVar3 & 0x80000) >> 0x13) == '\0') {
        uVar6 = (u16)(int)extraout_fr0;
    } else {
        uVar6 = (u16)(int)(double)CONCAT44(extraout_fr0, extraout_fr1);
    }
    *(u16 *)(unaff_r14 + 0x48) = uVar6;
    if (cVar1 == '\0') {
        uVar5 = CONCAT44(g_8c123f00, uVar2);
    } else {
        uVar5 = CONCAT44(g_8c123f04, g_8c123f00);
    }
    do {
        uVar2 = (u32)((u64)uVar5 >> 0x20);
        if (cVar1 == '\0') {
            *(u32 *)puVar4 = uVar2;
        } else {
            *puVar4 = uVar5;
        }
        ar5_00 = ar5_00 + 2;
        if (cVar1 == '\0') {
            *(u32 *)((int)puVar4 + 4) = uVar2;
        } else {
            *(u64 *)((int)puVar4 + 4) = uVar5;
        }
        puVar4 = puVar4 + 1;
    } while (ar5_00 < 0x14);
    *(int *)(0xa8 + unaff_r14) = unaff_r14 + 0x54;
    uVar2 = asr_sub_12356c(unaff_r14, ar5_00, 0x14);
    return uVar2;
}

/*
 * asr_sub_123ea6  0x8c123ea6
 * area name: in the asr library code range
 * called by: asr_sub_1244f8
 */
u32 asr_sub_123ea6(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    short sVar1;
    u32 uVar2;
    u16 uVar3;
    short *psVar4;
    float *pfVar5;
    short sVar6;
    int iVar7;
    int ar5_00;
    short sVar8;
    float *ar6_00;
    int iVar9;
    float *ar7_00;
    u64 in_dr0;
    float fVar10;
    u64 in_dr4;
    float fVar11;
    float fVar12;
    float fVar13;
    u64 uVar14;
    u64 in_xd14;
    char cVar15;

    fVar12 = (float)((u64)in_dr0 >> 0x20);
    cVar15 = '\0';
    *(u32 *)(a0 + 0x4a4) = 0x3c23d70a;
    fVar10 = (float)((u64)in_dr4 >> 0x20);
    uVar14 = CONCAT44(0x3f800000, fVar10);
    iVar7 = a0;
    if (*(char *)(a0 + 0x28) == '\0') {
        *(u32 *)(a0 + 0x38) = 0x3f800000;
        *(float *)(a0 + 0x3c) = fVar10;
        if (*(char *)(a0 + 0x4ac) == '\0') {
            *(float *)(a0 + 0x2c) = fVar10 + *(float *)(a0 + 0x4a0) + 1.0;
        } else {
            *(u32 *)(a0 + 0x2c) = *(u32 *)(a0 + 0x4a0);
        }
        *(u32 *)(a0 + 0x494) = 0x40400000;
        fVar10 = *(float *)(a0 + 0x38) * 1.5 + *(float *)(a0 + 0x3c);
        *(float *)(a0 + 0x34) = fVar10;
        fVar12 = 1.8939124;
        *(float *)(a0 + 0x30) = fVar10 + 1.1513;
        unused_a2 = 300;
        *(u32 *)(a0 + 0x40) = 0xe0ad78eb;
        *(u16 *)(a0 + 0x4b4) = 0;
        *(u8 *)(a0 + 0x28) = 1;
        iVar7 = a0 + 0xac;
        unused_a1 = 0;
        cVar15 = '\0';
        memset(iVar7, 0, 300);
        *(u32 *)(a0 + 0x430) = 0;
    }
    fVar10 = (float)in_dr4;
    if (*(short *)(a0 + 0x48) < 1) {
        if (*(u32 *)(a0 + 0x430) < 0x28) {
            *(int *)(a0 + 0x430) = *(int *)(a0 + 0x430) + 1;
            thunk_FUN_8c013be8();
            cVar15 = '\0';
            sVar8 = (short)(int)fVar12;
        } else {
            sVar8 = 5;
            psVar4 = (short *)(**(short **)(a0 + 0x488) * 2 + a0 + 0xac);
            *psVar4 = *psVar4 + -1;
        }
        fVar12 = (float)uVar14;
        if (cVar15 == '\0') {
            fVar10 = 0.5;
            in_xd14 = CONCAT44(fVar12, 0xc1280000);
        }
        sVar6 = (short)(int)((((float)((u64)in_xd14 >> 0x20) + (float)in_xd14) * 149.0) / 20.5 + fVar10);
        if (sVar6 < 0) {
            sVar6 = 0;
        }
        if (0x95 < sVar6) {
            sVar6 = 0x95;
        }
        psVar4 = (short *)(sVar6 * 2 + a0 + 0xac);
        *psVar4 = *psVar4 + 1;
        psVar4 = *(short **)(a0 + 0x488);
        *(short **)(a0 + 0x488) = psVar4 + 1;
        *psVar4 = sVar6;
        if (*(int *)(a0 + 0x488) == *(int *)(a0 + 0x484)) {
            *(int *)(a0 + 0x488) = a0 + 0x434;
        }
        sVar6 = 0;
        psVar4 = (short *)(a0 + 0xac);
        do {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            iVar7 = (int)sVar8;
            sVar6 = sVar6 + sVar1;
        } while (sVar6 < iVar7);
        iVar9 = (int)psVar4 - (a0 + 0xac);
        psVar4 = (short *)(a0 + 0x1d6);
        ar5_00 = 0;
        ar7_00 = (float *)((((int)(iVar9 + (u32)(iVar9 < 0)) >> 1) + 0xffffU & 0xffff) * 4 + a0 + 0x1d8);
        do {
            ar5_00 = ar5_00 + *psVar4;
            psVar4 = psVar4 + -1;
        } while ((short)ar5_00 < iVar7);
        iVar9 = (int)psVar4 - (a0 + 0xac);
        ar6_00 = (float *)((((int)(iVar9 + (u32)(iVar9 < 0)) >> 1) + 1U & 0xffff) * 4 + a0 + 0x1d8);
        fVar11 = *ar6_00;
        fVar13 = *ar7_00 - *(float *)(a0 + 0x3c);
        if (fVar10 < fVar13) {
            fVar13 = fVar10;
        }
        if (fVar13 <= 0.0) {
            fVar10 = 0.049999997;
        } else {
            fVar10 = 0.01;
        }
        *(float *)(a0 + 0x3c) = *(float *)(a0 + 0x3c) + fVar13 * fVar10 + 0.0;
        pfVar5 = *(float **)(a0 + 0xa8);
        fVar10 = **(float **)(a0 + 0xa8);
        *(float **)(a0 + 0xa8) = pfVar5 + 1;
        *pfVar5 = fVar12;
        if (*(u32 *)(a0 + 0xa4) <= *(u32 *)(a0 + 0xa8)) {
            *(int *)(a0 + 0xa8) = a0 + 0x54;
        }
        if (fVar10 - *(float *)(a0 + 0x3c) < *(float *)(a0 + 0x38) + 0.5) {
            fVar10 = (fVar11 - *(float *)(a0 + 0x3c)) - *(float *)(a0 + 0x38);
            if (0.099999994 < fVar10) {
                fVar10 = 0.099999994;
            }
            if (fVar10 <= 0.0) {
                fVar13 = 0.19999999;
            } else {
                fVar13 = 0.02;
            }
            *(float *)(a0 + 0x38) = *(float *)(a0 + 0x38) + fVar10 * fVar13 + 0.0;
            if (*(float *)(a0 + 0x38) < 0.46) {
                *(u32 *)(a0 + 0x38) = 0x3eeb851e;
            }
        }
        *(float *)(a0 + 0x34) = *(float *)(a0 + 0x38) * 1.5 + *(float *)(a0 + 0x3c);
        if (*(char *)(a0 + 0x4ac) == '\0') {
            fVar10 = 0.0;
        } else {
            fVar10 = *(float *)(a0 + 0x38) + *(float *)(a0 + 0x3c);
        }
        fVar13 = *(float *)(a0 + 0x40) - ((*(float *)(a0 + 0x2c) + fVar10) - *(float *)(a0 + 0x34)) * 0.01;
        *(float *)(a0 + 0x40) = fVar13;
        if (fVar13 < fVar11) {
            *(float *)(a0 + 0x40) = fVar11 - fVar10;
        }
        *(float *)(a0 + 0x30) = *(float *)(a0 + 0x34) + 1.1513;
        fVar11 = *(float *)(a0 + 0x498) + *(float *)(a0 + 0x4a8) + -1007.0;
        *(float *)(a0 + 0x50) = fVar11;
        fVar13 = 1.8939124;
        if (*(float *)(a0 + 0x30) < fVar11) {
            *(u32 *)(a0 + 0x30) = *(u32 *)(a0 + 0x50);
        }
        if (fVar12 <= *(float *)(a0 + 0x30)) {
            *(u16 *)(a0 + 0x44) = 0;
        } else {
            *(short *)(a0 + 0x44) = *(short *)(a0 + 0x44) + 1;
        }
        if (*(short *)(a0 + 0x48e) < *(short *)(a0 + 0x44)) {
            if (*(short *)(a0 + 0x46) == 0) {
                *(float *)(a0 + 0x40) = *(float *)(a0 + 0x34) - fVar10;
            }
            *(u16 *)(a0 + 0x46) = *(u16 *)(a0 + 0x490);
        }
        sVar8 = *(short *)(a0 + 0x46);
        *(short *)(a0 + 0x46) = sVar8 + -1;
        if (sVar8 < 1) {
            *(u16 *)(a0 + 0x46) = 0;
            *(u16 *)(a0 + 0x4a) = 0;
        } else {
            uVar3 = *(short *)(a0 + 0x4a) + 1;
            *(u16 *)(a0 + 0x4a) = uVar3;
            if ((((u32)uVar3 == (int)*(short *)(a0 + 0x492)) || (*(short *)(a0 + 0x46) == 0)) ||
                (fVar13 = 1.8939124, *(float *)(a0 + 0x2c) + 1.0 < *(float *)(a0 + 0x40))) {
                *(u16 *)(a0 + 0x4a) = 0;
                fVar11 = *(float *)(a0 + 0x40) - *(float *)(a0 + 0x2c);
                if (fVar11 <= 0.0) {
                    fVar13 = 0.049999997;
                } else {
                    fVar13 = 0.29999998;
                }
                *(float *)(a0 + 0x2c) = fVar13 * fVar11 + *(float *)(a0 + 0x2c);
                *(short *)(a0 + 0x4b4) = *(short *)(a0 + 0x4b4) + 1;
            }
        }
        fVar11 = 0.0;
        *(float *)(a0 + 0x494) = (*(float *)(a0 + 0x2c) + fVar10) - *(float *)(a0 + 0x34);
        if (fVar12 <= *(float *)(a0 + 0x34)) {
            fVar12 = 0.0;
        } else {
            uVar14 = uVar14 & 0xffffffff00000000;
            fVar11 = 0.0;
            thunk_FUN_8c013cd8();
            fVar12 = (float)(uVar14 >> 0x20);
            fVar12 = fVar12 / (fVar13 + fVar12);
        }
        if ((0.0 <= fVar12) && (fVar11 = fVar12, 1.0 < fVar12)) {
            fVar11 = (float)(uVar14 >> 0x20);
        }
        *(float *)(a0 + 0x4a4) = fVar11;
        uVar2 = 0x4c;
        *(float *)(a0 + 0x4c) = *(float *)(a0 + 0x4c) + *(float *)(a0 + 0x4a4);
    } else {
        if (*(short *)(a0 + 0x48) != 0) {
            *(u8 *)(a0 + 0x28) = 0;
        }
        uVar2 = 0x48;
        *(short *)(a0 + 0x48) = *(short *)(a0 + 0x48) + -1;
    }
    return uVar2;
}

/*
 * asr_sub_123eae  0x8c123eae
 * area name: in the asr library code range
 */
u32 asr_sub_123eae(int a0, u32 unused_a1, int a2, u32 a3) {
    char cVar1;
    char cVar2;
    u32 uVar3;
    short sVar4;
    double *in_r0;
    int iVar5;
    u16 uVar6;
    u32 uVar7;
    short *psVar8;
    float *pfVar9;
    short sVar10;
    int ar5_00;
    short sVar11;
    double *ar6_00;
    int iVar12;
    double *ar7_00;
    double *pdVar13;
    int unaff_r14;
    u64 *puVar14;
    double in_dr0;
    u32 uVar15;
    u32 uVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    double in_dr2;
    u64 uVar20;
    double dVar21;
    u32 uVar22;
    float fVar23;
    double in_dr4;
    double dVar24;
    float fVar25;
    u32 in_fr7;
    double dVar26;
    double dVar27;
    u64 in_dr12;
    u64 in_dr14;
    float fVar29;
    double dVar28;
    double in_xd0;
    double in_xd2;
    double dVar30;
    double dVar31;
    double in_xd4;
    double in_xd12;
    double in_xd14;
    bool bVar32;
    u32 in_PR;
    u8 in_FPSCR_CAUSE;
    u8 bVar33;
    u8 in_FPSCR_DN;
    u8 bVar34;
    u8 in_FPSCR_PR;
    u8 bVar35;
    u8 in_FPSCR_SZ;
    u8 bVar36;
    u8 auStack_24[16];
    u64 uStack_14;
    u64 uStack_c;

    if (in_FPSCR_SZ == 0) {
        uStack_c = (double)CONCAT44((int)in_dr14, (u32)uStack_c);
        uStack_c._0_4_ = (int)((u64)in_dr14 >> 0x20);
        puVar14 = &uStack_14;
        uStack_14 = CONCAT44((int)in_dr12, (int)((u64)in_dr12 >> 0x20));
    } else {
        puVar14 = (u64 *)auStack_24;
        uStack_c = in_xd14;
        uStack_14 = in_dr14;
    }
    *(u32 *)((int)puVar14 + -4) = in_PR;
    if (in_FPSCR_SZ == 0) {
        in_dr2 = (double)(u64) * (u32 *)in_r0;
    } else {
        in_xd2 = *in_r0;
    }
    if (in_FPSCR_SZ == 0) {
        *(int *)(0x4a4 + unaff_r14) = SUB84(in_dr2, 0);
        dVar28 = (double)CONCAT44(g_8c123f08, (int)((u64)in_dr4 >> 0x20));
    } else {
        *(double *)(0x4a4 + unaff_r14) = in_xd2;
        dVar28 = (double)CONCAT44(uRam8c123f0c, g_8c123f08);
        in_xd14 = in_dr4;
    }
    if (*(char *)(unaff_r14 + 0x28) == '\0') {
        fVar29 = (float)((u64)dVar28 >> 0x20);
        if (in_FPSCR_SZ == 0) {
            *(float *)(unaff_r14 + 0x38) = fVar29;
            *(int *)(unaff_r14 + 0x3c) = SUB84(dVar28, 0);
        } else {
            *(double *)(unaff_r14 + 0x38) = dVar28;
            *(double *)(unaff_r14 + 0x3c) = in_xd14;
        }
        if (*(char *)(0x4ac + unaff_r14) == '\0') {
            if (in_FPSCR_SZ == 0) {
                dVar21 = (double)CONCAT44(SUB84(dVar28, 0), *(u32 *)(0x4a0 + unaff_r14));
            } else {
                in_xd2 = *(double *)(0x4a0 + unaff_r14);
                dVar21 = in_xd14;
            }
            if (in_FPSCR_PR == 0) {
                in_dr2 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0) + fVar29, SUB84(dVar21, 0));
            } else {
                in_dr2 = dVar21 + dVar21 + dVar28;
            }
            if (in_FPSCR_SZ == 0) {
                *(int *)(unaff_r14 + 0x2c) = (int)((u64)in_dr2 >> 0x20);
            } else {
                *(double *)(unaff_r14 + 0x2c) = in_dr2;
            }
        } else if (in_FPSCR_SZ == 0) {
            uVar15 = *(u32 *)(0x4a0 + unaff_r14);
            in_dr2 = (double)(u64)uVar15;
            *(u32 *)(unaff_r14 + 0x2c) = uVar15;
        } else {
            in_xd2 = *(double *)(0x4a0 + unaff_r14);
            *(double *)(unaff_r14 + 0x2c) = in_xd2;
        }
        fVar29 = 0xffe7ffff;
        uVar16 = g_8c123ff0;
        if (in_FPSCR_SZ != 0) {
            in_xd2 = (double)CONCAT44(g_8c123ff4, g_8c123ff0);
            uVar16 = SUB84(in_dr2, 0);
        }
        if (in_FPSCR_SZ == 0) {
            *(u32 *)(0x494 + unaff_r14) = uVar16;
            uVar16 = *(u32 *)(unaff_r14 + 0x3c);
            fVar17 = g_8c123ff4;
        } else {
            *(double *)(0x494 + unaff_r14) = in_xd2;
            in_xd2 = *(double *)(unaff_r14 + 0x3c);
            fVar17 = 0xffe7ffff;
        }
        uVar15 = 0x80000;
        uVar7 = ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 |
                 (u32)in_FPSCR_SZ << 0x14) &
                (u32)fVar29;
        if (in_FPSCR_SZ == 0) {
            uVar20 = CONCAT44(*(u32 *)(unaff_r14 + 0x38), uVar16);
        } else {
            uVar20 = *(u64 *)(unaff_r14 + 0x38);
        }
        uVar3 = (uVar7 & 0x80000) >> 0x13;
        uVar7 = (uVar7 & 0x100000) >> 0x14;
        if ((char)uVar3 == '\0') {
            uVar20 = (u64)(u32)(fVar17 * (float)(uVar20 >> 0x20) + (float)uVar20);
        }
        if ((char)uVar7 == '\0') {
            *(float *)(unaff_r14 + 0x34) = (float)uVar20;
        } else {
            *(double *)(unaff_r14 + 0x34) = in_xd2;
        }
        uVar15 = uVar3 << 0x13 | uVar7 << 0x14 | uVar15 & 0x3fffff;
        uVar7 = (uVar15 & 0x80000) >> 0x13;
        uVar15 = (uVar15 & 0x100000) >> 0x14;
        cVar1 = (char)uVar15;
        dVar21 = (double)(float)uVar20;
        if (cVar1 == '\0') {
            in_dr0 = (double)CONCAT44(g_8c124000, g_8c124004);
        } else {
            in_dr0 = (double)CONCAT44(g_8c124004, g_8c124000);
            in_xd0 = (double)CONCAT44(g_8c124008, g_8c124004);
        }
        if ((char)uVar7 == '\0') {
            dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + (float)((u64)in_dr0 >> 0x20), SUB84(dVar21, 0));
        } else {
            dVar21 = dVar21 + in_dr0;
        }
        if (cVar1 == '\0') {
            *(float *)(unaff_r14 + 0x30) = (float)dVar21;
        } else {
            *(double *)(unaff_r14 + 0x30) = in_xd2;
        }
        a2 = (int)0x12c;
        fVar29 = g_8c124008;
        if (cVar1 != '\0') {
            in_xd2 = (double)CONCAT44((&memset), g_8c124008);
            fVar29 = (float)dVar21;
        }
        if (cVar1 == '\0') {
            *(float *)(unaff_r14 + 0x40) = fVar29;
        } else {
            *(double *)(unaff_r14 + 0x40) = in_xd2;
        }
        fVar29 = 0xffe7ffff;
        *(u16 *)(0x4b4 + unaff_r14) = 0;
        *(u8 *)(unaff_r14 + 0x28) = 1;
        uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & (u32)fVar29;
        a0 = a2 + -0x80 + unaff_r14;
        unused_a1 = 0;
        in_FPSCR_CAUSE = 0;
        in_FPSCR_DN = 0;
        in_FPSCR_PR = (u8)((uVar15 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (u8)(uVar15 >> 0x14);
        memset(a0, 0, a2);
        *(u32 *)(0x430 + unaff_r14) = 0;
    }
    fVar29 = (float)in_dr12;
    if (0 < *(short *)(unaff_r14 + 0x48)) {
        if (*(short *)(unaff_r14 + 0x48) != 0) {
            *(u8 *)(unaff_r14 + 0x28) = 0;
        }
        *(short *)(unaff_r14 + 0x48) = *(short *)(unaff_r14 + 0x48) + -1;
        return 0x48;
    }
    iVar5 = (int)0x430;
    if (*(u32 *)(iVar5 + unaff_r14) < 0x28) {
        *(int *)(iVar5 + unaff_r14) = *(int *)(iVar5 + unaff_r14) + 1;
        uVar15 = ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 |
                  (u32)in_FPSCR_SZ << 0x14) &
                 (u32)0xffe7ffff;
        bVar33 = 0;
        bVar34 = 0;
        bVar35 = (u8)((uVar15 & 0x80000) >> 0x13);
        bVar36 = (u8)((uVar15 & 0x100000) >> 0x14);
        fVar17 = (float)*(int *)(iVar5 + unaff_r14);
        if (*(int *)(iVar5 + unaff_r14) < 0) {
            if (bVar36 == 0) {
                dVar21 = (double)CONCAT44(g_8c124010, fVar17);
            } else {
                dVar21 = (double)CONCAT44(g_8c124014, g_8c124010);
            }
            if (bVar35 == 0) {
                fVar17 = SUB84(dVar21, 0) + (float)((u64)dVar21 >> 0x20);
            } else {
                fVar17 = SUB84(dVar21 + dVar21, 0);
            }
        }
        if (bVar36 == 0) {
            dVar21 = (double)CONCAT44(g_8c124014, fVar17);
            dVar31 = (double)CONCAT44(fVar17, SUB84(in_dr4, 0));
        } else {
            dVar21 = (double)CONCAT44((&thunk_FUN_8c013be8), g_8c124014);
            dVar31 = in_xd2;
        }
        if (bVar35 == 0) {
            in_dr4 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * (float)((u64)dVar21 >> 0x20), SUB84(dVar31, 0));
        } else {
            in_dr4 = dVar31 * dVar21;
        }
        thunk_FUN_8c013be8();
        uVar15 =
            ((u32)bVar33 << 0xc | (u32)bVar34 << 0x12 | (u32)bVar35 << 0x13 | (u32)bVar36 << 0x14) & (u32)0xffe7ffff;
        in_FPSCR_CAUSE = 0;
        in_FPSCR_DN = 0;
        in_FPSCR_PR = (u8)((uVar15 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (u8)((uVar15 & 0x100000) >> 0x14);
        if (in_FPSCR_PR == 0) {
            sVar11 = (short)(int)(float)((u64)in_dr0 >> 0x20);
        } else {
            sVar11 = (short)(int)in_dr0;
        }
    } else {
        sVar11 = 5;
        psVar8 = (short *)(**(short **)(0x488 + unaff_r14) * 2 + 0xac + unaff_r14);
        *psVar8 = *psVar8 + -1;
    }
    if (in_FPSCR_SZ == 0) {
        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), g_8c124134);
    } else {
        in_xd4 = (double)CONCAT44(g_8c124138, g_8c124134);
    }
    uVar15 =
        ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) &
        0xffe7ffff;
    fVar17 = SUB84(dVar28, 0);
    if (in_FPSCR_SZ == 0) {
        dVar21 = (double)CONCAT44(fVar17, g_8c124138);
    } else {
        in_xd2 = (double)CONCAT44(0xffe7ffff, g_8c124138);
        dVar21 = in_xd14;
    }
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    cVar1 = (char)uVar7;
    uVar15 = (uVar15 & 0x100000) >> 0x14;
    cVar2 = (char)uVar15;
    if (cVar1 == '\0') {
        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));
    } else {
        dVar21 = dVar21 + dVar21;
    }
    if (cVar2 == '\0') {
        dVar31 = (double)CONCAT44(g_8c124144, g_8c124140);
    } else {
        in_xd0 = (double)CONCAT44(g_8c124144, g_8c124140);
        dVar31 = (double)CONCAT44(0xffff, g_8c124144);
    }
    if (cVar1 == '\0') {
        dVar21 = (double)CONCAT44(((float)((u64)dVar21 >> 0x20) * SUB84(dVar31, 0)) / (float)((u64)dVar31 >> 0x20),
                                  SUB84(dVar21, 0));
    } else {
        dVar21 = (dVar21 * dVar31) / dVar31;
    }
    dVar30 = dVar21;
    if (cVar2 == '\0') {
        uVar16 = (u32)((u64)dVar21 >> 0x20);
        dVar21 = (double)CONCAT44(uVar16, uVar16);
        dVar30 = in_xd2;
    }
    if (cVar1 == '\0') {
        fVar18 = SUB84(dVar21, 0) + SUB84(in_dr4, 0);
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), fVar18);
        sVar10 = (short)(int)fVar18;
    } else {
        dVar21 = dVar21 + in_dr4;
        sVar10 = (short)(int)dVar21;
    }
    if (sVar10 < 0) {
        sVar10 = 0;
    }
    if (0x95 < sVar10) {
        sVar10 = 0x95;
    }
    iVar5 = (int)0x488;
    psVar8 = (short *)(sVar10 * 2 + 0xac + unaff_r14);
    *psVar8 = *psVar8 + 1;
    psVar8 = *(short **)(iVar5 + unaff_r14);
    *(short **)(iVar5 + unaff_r14) = psVar8 + 1;
    *psVar8 = sVar10;
    if (*(int *)(iVar5 + unaff_r14) == *(int *)(iVar5 + -4 + unaff_r14)) {
        *(int *)(0x488 + unaff_r14) = 0x434 + unaff_r14;
    }
    sVar10 = 0;
    psVar8 = (short *)(0xac + unaff_r14);
    do {
        sVar4 = *psVar8;
        psVar8 = psVar8 + 1;
        iVar5 = (int)sVar11;
        sVar10 = sVar10 + sVar4;
    } while (sVar10 < iVar5);
    iVar12 = (int)psVar8 - (0xac + unaff_r14);
    psVar8 = (short *)((int)0x12a + 0xac + unaff_r14);
    ar5_00 = 0;
    ar7_00 = (double *)((((int)(iVar12 + (u32)(iVar12 < 0)) >> 1) + 0xffff & 0xffffU) * 4 + 0x1d8 + unaff_r14);
    if (cVar2 == '\0') {
        dVar26 = (double)CONCAT44(*(u32 *)ar7_00, in_fr7);
    } else {
        dVar26 = *ar7_00;
    }
    do {
        ar5_00 = ar5_00 + *psVar8;
        psVar8 = psVar8 + -1;
    } while ((short)ar5_00 < iVar5);
    if (cVar2 == '\0') {
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(unaff_r14 + 0x3c));
    } else {
        dVar30 = *(double *)(unaff_r14 + 0x3c);
    }
    iVar12 = (int)psVar8 - (0xac + unaff_r14);
    ar6_00 = (double *)((((int)(iVar12 + (u32)(iVar12 < 0)) >> 1) + 1U & 0xffff) * 4 + 0x1d8 + unaff_r14);
    if (cVar2 == '\0') {
        dVar24 = (double)CONCAT44(*(u32 *)ar6_00, SUB84(in_dr4, 0));
    } else {
        dVar24 = *ar6_00;
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    uVar15 = uVar15 >> 0x14;
    if ((char)uVar7 == '\0') {
        fVar18 = (float)((u64)dVar26 >> 0x20) - SUB84(dVar21, 0);
        dVar26 = (double)CONCAT44(fVar18, SUB84(dVar26, 0));
        bVar32 = SUB84(dVar24, 0) < fVar18;
    } else {
        dVar26 = dVar26 - dVar21;
        bVar32 = dVar24 < dVar26;
    }
    dVar27 = dVar26;
    if ((bVar32) && (dVar27 = in_xd4, (char)uVar15 == '\0')) {
        dVar27 = (double)CONCAT44(SUB84(dVar24, 0), SUB84(dVar26, 0));
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    dVar21 = (double)CONCAT44(0x0, SUB84(dVar21, 0));
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    cVar1 = (char)uVar7;
    uVar15 = uVar15 >> 0x14;
    cVar2 = (char)uVar15;
    fVar18 = (float)((u64)dVar27 >> 0x20);
    if (cVar1 == '\0') {
        bVar32 = 0x0 < fVar18;
    } else {
        bVar32 = dVar21 < dVar27;
    }
    pdVar13 = (double *)(unaff_r14 + 0x3c);
    if (bVar32) {
        if (cVar2 == '\0') {
            dVar21 = (double)CONCAT44(0x0, g_8c124150);
        } else {
            dVar30 = (double)CONCAT44(uRam8c124154, g_8c124150);
        }
    } else if (cVar2 == '\0') {
        dVar21 = (double)CONCAT44(0x0, (u32)g_8c124278);
    } else {
        dVar30 = (double)CONCAT44(0xffe7ffff, (u32)g_8c124278);
    }
    dVar26 = dVar27;
    if (cVar2 == '\0') {
        dVar26 = (double)CONCAT44(fVar18, SUB84(dVar31, 0));
    }
    if (cVar1 == '\0') {
        dVar21 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) * SUB84(dVar21, 0) + (float)((u64)dVar21 >> 0x20),
                                  SUB84(dVar21, 0));
    }
    iVar12 = (int)0xa8;
    dVar31 = dVar21;
    if (cVar2 == '\0') {
        dVar21 = (double)((u64)dVar21 >> 0x20);
        dVar31 = dVar30;
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    if (cVar2 == '\0') {
        dVar21 = (double)CONCAT44(*(u32 *)pdVar13, SUB84(dVar21, 0));
    } else {
        dVar21 = *pdVar13;
    }
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    uVar15 = uVar15 >> 0x14;
    cVar1 = (char)uVar15;
    if ((char)uVar7 == '\0') {
        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));
    } else {
        dVar21 = dVar21 + dVar21;
    }
    uVar16 = (u32)((u64)dVar21 >> 0x20);
    if (cVar1 == '\0') {
        *(u32 *)pdVar13 = uVar16;
    } else {
        *pdVar13 = dVar21;
    }
    pfVar9 = *(float **)(iVar12 + unaff_r14);
    if (cVar1 == '\0') {
        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)*(double **)(iVar12 + unaff_r14));
    } else {
        in_xd4 = **(double **)(iVar12 + unaff_r14);
    }
    *(float **)(iVar12 + unaff_r14) = pfVar9 + 1;
    if (cVar1 == '\0') {
        *pfVar9 = fVar17;
    } else {
        *(double *)(pfVar9 + -1) = in_xd14;
    }
    if (*(u32 *)(iVar12 + -4 + unaff_r14) <= *(u32 *)(iVar12 + unaff_r14)) {
        *(int *)(0xa8 + unaff_r14) = unaff_r14 + 0x54;
    }
    if (cVar1 == '\0') {
        dVar21 = (double)CONCAT44(uVar16, *(u32 *)(unaff_r14 + 0x3c));
    } else {
        dVar31 = *(double *)(unaff_r14 + 0x3c);
    }
    uVar7 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    uVar15 = (uVar7 & 0x80000) >> 0x13;
    if ((char)uVar15 == '\0') {
        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) - SUB84(dVar21, 0));
    } else {
        dVar24 = dVar24 - dVar21;
    }
    uVar15 = uVar15 << 0x13 | uVar7 & 0xfff00000 | 0x80000 & 0x3fffff;
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    bVar33 = (u8)uVar7;
    uVar15 = (uVar15 & 0x100000) >> 0x14;
    bVar34 = (u8)uVar15;
    dVar21 = (double)SUB84(dVar24, 0);
    if (bVar34 == 0) {
        *(int *)((int)puVar14 + -8) = (int)((u64)dVar21 >> 0x20);
        pdVar13 = (double *)((int)puVar14 + -0xc);
        *(int *)((int)puVar14 + -0xc) = SUB84(dVar21, 0);
        dVar26 = (double)(u64) * (u32 *)(unaff_r14 + 0x38);
        dVar21 = (double)CONCAT44(g_8c124284, SUB84(dVar21, 0));
    } else {
        *(double *)((int)puVar14 + -0xc) = dVar21;
        pdVar13 = (double *)((int)puVar14 + -0x14);
        *(double *)((int)puVar14 + -0x14) = dVar31;
        in_xd0 = *(double *)(unaff_r14 + 0x38);
        dVar21 = (double)CONCAT44(0x0, g_8c124284);
    }
    dVar30 = (double)SUB84(dVar26, 0);
    if (bVar34 == 0) {
        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), 0x0);
    } else {
        dVar31 = (double)CONCAT44(g_8c12428c, 0x0);
    }
    if (bVar33 == 0) {
        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + (float)((u64)dVar21 >> 0x20), SUB84(dVar30, 0));
    } else {
        dVar30 = dVar30 + dVar21;
    }
    if (bVar34 != 0) {
        dVar31 = *pdVar13;
        pdVar13 = pdVar13 + 1;
    }
    dVar21 = *pdVar13;
    if (bVar33 == 0) {
        bVar32 = (float)((u64)dVar21 >> 0x20) < (float)((u64)dVar30 >> 0x20);
    } else {
        bVar32 = dVar21 < dVar30;
    }
    if (bVar32) {
        if (bVar34 == 0) {
            dVar21 = (double)(u64) * (u32 *)(unaff_r14 + 0x3c);
        } else {
            dVar31 = *(double *)(unaff_r14 + 0x3c);
        }
        uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
        uVar16 = (u32)((u64)dVar24 >> 0x20);
        dVar30 = dVar24;
        if (bVar34 == 0) {
            dVar30 = (double)CONCAT44(uVar16, SUB84(dVar21, 0));
        }
        uVar7 = (uVar15 & 0x80000) >> 0x13;
        cVar1 = (char)uVar7;
        uVar15 = uVar15 >> 0x14;
        cVar2 = (char)uVar15;
        if (cVar1 == '\0') {
            dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) - SUB84(dVar30, 0), SUB84(dVar30, 0));
        } else {
            dVar30 = dVar30 - dVar30;
        }
        if (cVar2 == '\0') {
            uVar22 = (u32)((u64)dVar30 >> 0x20);
            dVar27 = (double)CONCAT44(g_8c12428c, SUB84(dVar27, 0));
            dVar24 = (double)CONCAT44(uVar16, uVar22);
            dVar30 = in_xd4;
            dVar21 = (double)CONCAT44(uVar22, *(u32 *)(unaff_r14 + 0x38));
            dVar26 = dVar31;
        } else {
            dVar26 = *(double *)(unaff_r14 + 0x38);
            dVar27 = (double)CONCAT44(g_8c124290, g_8c12428c);
            dVar21 = dVar30;
        }
        fVar18 = (float)((u64)dVar27 >> 0x20);
        if (cVar1 == '\0') {
            fVar23 = SUB84(dVar24, 0) - SUB84(dVar21, 0);
            dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), fVar23);
            bVar32 = fVar18 < fVar23;
        } else {
            dVar24 = dVar24 - dVar21;
            bVar32 = dVar27 < dVar24;
        }
        dVar31 = dVar30;
        if ((bVar32) && (dVar31 = dVar27, cVar2 == '\0')) {
            dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), fVar18);
            dVar31 = dVar30;
        }
        fVar18 = (float)((u64)dVar31 >> 0x20);
        uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
        dVar21 = (double)CONCAT44(0x0, SUB84(dVar21, 0));
        uVar7 = (uVar15 & 0x80000) >> 0x13;
        cVar1 = (char)uVar7;
        uVar15 = uVar15 >> 0x14;
        cVar2 = (char)uVar15;
        if (cVar1 == '\0') {
            bVar32 = 0x0 < SUB84(dVar24, 0);
        } else {
            bVar32 = dVar21 < dVar24;
        }
        pdVar13 = (double *)(unaff_r14 + 0x38);
        if (bVar32) {
            if (cVar2 == '\0') {
                dVar21 = (double)CONCAT44(0x0, g_8c124290);
            } else {
                dVar26 = (double)CONCAT44(g_8c124294, g_8c124290);
            }
        } else if (cVar2 == '\0') {
            dVar21 = (double)CONCAT44(0x0, g_8c124294);
        } else {
            dVar26 = (double)CONCAT44(g_8c124298, g_8c124294);
        }
        if (cVar2 == '\0') {
            fVar18 = SUB84(dVar24, 0);
        }
        if (cVar1 == '\0') {
            dVar21 = (double)CONCAT44(fVar18 * SUB84(dVar21, 0) + (float)((u64)dVar21 >> 0x20), SUB84(dVar21, 0));
        }
        dVar31 = dVar21;
        if (cVar2 == '\0') {
            dVar21 = (double)((u64)dVar21 >> 0x20);
            dVar31 = dVar26;
        }
        uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
        if (cVar2 == '\0') {
            dVar21 = (double)CONCAT44(*(u32 *)pdVar13, SUB84(dVar21, 0));
        } else {
            dVar21 = *pdVar13;
        }
        uVar7 = (uVar15 & 0x80000) >> 0x13;
        uVar15 = uVar15 >> 0x14;
        if ((char)uVar7 == '\0') {
            dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));
        } else {
            dVar21 = dVar21 + dVar21;
        }
        if ((char)uVar15 == '\0') {
            *(int *)pdVar13 = (int)((u64)dVar21 >> 0x20);
            dVar21 = (double)(u64) * (u32 *)(unaff_r14 + 0x38);
        } else {
            *pdVar13 = dVar21;
            dVar31 = *(double *)(unaff_r14 + 0x38);
        }
        uVar15 = uVar7 << 0x13 | uVar15 << 0x14 | 0x80000 & 0x3fffff;
        bVar33 = (u8)((uVar15 & 0x80000) >> 0x13);
        bVar34 = (u8)((uVar15 & 0x100000) >> 0x14);
        dVar21 = (double)SUB84(dVar21, 0);
        if (bVar34 == 0) {
            dVar30 = (double)CONCAT44(g_8c124298, g_8c12429c);
        } else {
            dVar30 = (double)CONCAT44(g_8c12429c, g_8c124298);
            in_xd0 = (double)CONCAT44(g_8c1242a0, g_8c12429c);
        }
        if (bVar33 == 0) {
            bVar32 = (float)((u64)dVar21 >> 0x20) < (float)((u64)dVar30 >> 0x20);
        } else {
            bVar32 = dVar21 < dVar30;
        }
        if (bVar32) {
            if (bVar34 == 0) {
                dVar21 = (double)(u64)g_8c1242a0;
                *(u32 *)(unaff_r14 + 0x38) = g_8c1242a0;
            } else {
                dVar31 = (double)CONCAT44(g_8c1242a4, g_8c1242a0);
                *(double *)(unaff_r14 + 0x38) = dVar31;
            }
        }
    }
    uVar16 = SUB84(dVar21, 0);
    if (bVar34 == 0) {
        uVar16 = *(u32 *)(unaff_r14 + 0x3c);
    } else {
        dVar31 = *(double *)(unaff_r14 + 0x3c);
    }
    if (bVar34 == 0) {
        dVar21 = (double)CONCAT44(g_8c1242a4, SUB84(dVar30, 0));
        dVar30 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x38), uVar16);
    } else {
        dVar21 = (double)CONCAT44(uRam8c1242a8, g_8c1242a4);
        dVar30 = *(double *)(unaff_r14 + 0x38);
    }
    uVar15 = ((u32)bVar33 << 0x13 | (u32)bVar34 << 0x14) & 0xffe7ffff;
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    cVar1 = (char)uVar7;
    uVar15 = uVar15 >> 0x14;
    cVar2 = (char)uVar15;
    fVar18 = (float)((u64)dVar21 >> 0x20);
    if (cVar1 == '\0') {
        fVar23 = (float)((u64)dVar30 >> 0x20);
        dVar30 = (double)CONCAT44(fVar23, fVar18 * fVar23 + SUB84(dVar30, 0));
    }
    if (cVar2 == '\0') {
        *(int *)(unaff_r14 + 0x34) = SUB84(dVar30, 0);
        fVar29 = 0x0;
    } else {
        *(double *)(unaff_r14 + 0x34) = dVar31;
        in_xd12 = (double)CONCAT44(g_8c12428c, 0x0);
    }
    uVar16 = (u32)((u64)dVar24 >> 0x20);
    if (*(char *)(0x4ac + unaff_r14) == '\0') {
        if (cVar2 == '\0') {
            dVar24 = (double)CONCAT44(uVar16, fVar29);
        }
    } else {
        if (cVar2 == '\0') {
            dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)(unaff_r14 + 0x3c));
            dVar24 = (double)CONCAT44(uVar16, *(u32 *)(unaff_r14 + 0x38));
        } else {
            dVar31 = *(double *)(unaff_r14 + 0x3c);
        }
        if (cVar1 == '\0') {
            dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar24, 0) + SUB84(dVar30, 0));
        } else {
            dVar24 = dVar24 + dVar30;
        }
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    if (cVar2 == '\0') {
        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)(unaff_r14 + 0x2c));
    } else {
        dVar31 = *(double *)(unaff_r14 + 0x2c);
    }
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    cVar1 = (char)uVar7;
    uVar15 = uVar15 >> 0x14;
    cVar2 = (char)uVar15;
    fVar23 = SUB84(dVar24, 0);
    if (cVar1 == '\0') {
        fVar19 = SUB84(dVar30, 0) + fVar23;
    } else {
        fVar19 = SUB84(dVar30 + dVar24, 0);
    }
    fVar25 = (float)((u64)dVar24 >> 0x20);
    if (cVar2 == '\0') {
        dVar30 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x34), fVar19);
        dVar21 = (double)CONCAT44(fVar18, *(u32 *)(unaff_r14 + 0x40));
        dVar26 = (double)CONCAT44(fVar25, SUB84(dVar27, 0));
    } else {
        dVar30 = *(double *)(unaff_r14 + 0x34);
        in_xd0 = *(double *)(unaff_r14 + 0x40);
        dVar26 = dVar24;
    }
    if (cVar1 == '\0') {
        fVar18 = SUB84(dVar30, 0) - (float)((u64)dVar30 >> 0x20);
    } else {
        fVar18 = SUB84(dVar30 - dVar30, 0);
    }
    if (cVar1 == '\0') {
        dVar30 = (double)CONCAT44(0x3c23d70a, fVar18 * 0x3c23d70a);
        fVar18 = SUB84(dVar21, 0) - fVar18 * 0x3c23d70a;
    } else {
        dVar30 = (double)CONCAT44(0x3c23d70a, fVar18) * (double)CONCAT44(0x3c23d70a, fVar18);
        fVar18 = SUB84(dVar21 - dVar30, 0);
    }
    dVar21 = in_xd0;
    if (cVar2 == '\0') {
        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar18);
        dVar21 = dVar31;
    }
    if (cVar1 == '\0') {
        bVar32 = SUB84(dVar30, 0) < fVar25;
    } else {
        bVar32 = dVar30 < dVar24;
    }
    if (cVar2 == '\0') {
        *(float *)(unaff_r14 + 0x40) = fVar18;
    } else {
        *(double *)(unaff_r14 + 0x40) = in_xd0;
    }
    if (cVar1 == '\0') {
        dVar26 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) - fVar23, SUB84(dVar26, 0));
    } else {
        dVar26 = dVar26 - dVar24;
    }
    if (bVar32) {
        if (cVar2 == '\0') {
            *(int *)(unaff_r14 + 0x40) = (int)((u64)dVar26 >> 0x20);
        } else {
            *(double *)(unaff_r14 + 0x40) = dVar26;
        }
    }
    if (cVar2 == '\0') {
        dVar30 = (double)(u64) * (u32 *)(unaff_r14 + 0x34);
    } else {
        dVar21 = *(double *)(unaff_r14 + 0x34);
    }
    uVar15 = uVar7 << 0x13 | uVar15 << 0x14 | 0x80000 & 0x3fffff;
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    uVar15 = (uVar15 & 0x100000) >> 0x14;
    cVar1 = (char)uVar15;
    dVar31 = (double)SUB84(dVar30, 0);
    if (cVar1 == '\0') {
        dVar30 = (double)CONCAT44(g_8c124354, g_8c124358);
    } else {
        dVar30 = (double)CONCAT44(g_8c124358, g_8c124354);
    }
    fVar18 = (float)((u64)dVar30 >> 0x20);
    if ((char)uVar7 == '\0') {
        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) + fVar18, SUB84(dVar31, 0));
    } else {
        dVar31 = dVar31 + dVar30;
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    if (cVar1 == '\0') {
        *(float *)(unaff_r14 + 0x30) = (float)dVar31;
    } else {
        *(double *)(unaff_r14 + 0x30) = dVar21;
    }
    iVar12 = (int)0x4a8;
    if (cVar1 == '\0') {
        dVar31 = (double)CONCAT44(*(u32 *)(iVar12 + -0x10 + unaff_r14), *(u32 *)(iVar12 + unaff_r14));
    } else {
        dVar21 = *(double *)(iVar12 + unaff_r14);
        dVar31 = *(double *)(iVar12 + -0x10 + unaff_r14);
    }
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    cVar1 = (char)uVar7;
    uVar15 = uVar15 >> 0x14;
    cVar2 = (char)uVar15;
    if (cVar1 == '\0') {
        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) + SUB84(dVar31, 0), SUB84(dVar31, 0));
    } else {
        dVar31 = dVar31 + dVar31;
    }
    if (cVar2 == '\0') {
        dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), g_8c12435c);
    } else {
        dVar21 = (double)CONCAT44(uRam8c124360, g_8c12435c);
    }
    if (cVar1 == '\0') {
        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) + SUB84(dVar31, 0), SUB84(dVar31, 0));
    } else {
        dVar31 = dVar31 + dVar31;
    }
    fVar19 = (float)((u64)dVar31 >> 0x20);
    if (cVar2 == '\0') {
        *(float *)(unaff_r14 + 0x50) = fVar19;
        dVar30 = (double)CONCAT44(fVar18, *(u32 *)(unaff_r14 + 0x30));
    } else {
        *(double *)(unaff_r14 + 0x50) = dVar31;
    }
    if (cVar1 == '\0') {
        bVar32 = SUB84(dVar30, 0) < fVar19;
    } else {
        bVar32 = dVar30 < dVar31;
    }
    if (bVar32) {
        if (cVar2 == '\0') {
            dVar31 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x50), SUB84(dVar31, 0));
            *(u32 *)(unaff_r14 + 0x30) = *(u32 *)(unaff_r14 + 0x50);
        } else {
            dVar31 = *(double *)(unaff_r14 + 0x50);
            *(double *)(unaff_r14 + 0x30) = dVar31;
        }
    }
    if (cVar2 == '\0') {
        dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), *(u32 *)(unaff_r14 + 0x30));
    } else {
        dVar21 = *(double *)(unaff_r14 + 0x30);
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    bVar33 = (u8)uVar7;
    uVar15 = uVar15 >> 0x14;
    bVar34 = (u8)uVar15;
    if (bVar33 == 0) {
        bVar32 = SUB84(dVar31, 0) < fVar17;
    } else {
        bVar32 = dVar31 < dVar28;
    }
    if (bVar32) {
        *(short *)(unaff_r14 + 0x44) = *(short *)(unaff_r14 + 0x44) + 1;
    } else {
        *(u16 *)(unaff_r14 + 0x44) = 0;
    }
    if (*(short *)(0x48e + unaff_r14) < *(short *)(unaff_r14 + 0x44)) {
        if (*(short *)(unaff_r14 + 0x46) == 0) {
            if (bVar34 == 0) {
                dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), *(u32 *)(unaff_r14 + 0x34));
            } else {
                dVar21 = *(double *)(unaff_r14 + 0x34);
            }
            uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
            bVar33 = (u8)((uVar15 & 0x80000) >> 0x13);
            bVar34 = (u8)(uVar15 >> 0x14);
            if (bVar33 == 0) {
                dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar31, 0) - fVar23);
            } else {
                dVar31 = dVar31 - dVar24;
            }
            if (bVar34 == 0) {
                *(int *)(unaff_r14 + 0x40) = SUB84(dVar31, 0);
            } else {
                *(double *)(unaff_r14 + 0x40) = dVar21;
            }
        }
        *(u16 *)(unaff_r14 + 0x46) = *(u16 *)(0x490 + unaff_r14);
    }
    sVar11 = *(short *)(unaff_r14 + 0x46);
    *(short *)(unaff_r14 + 0x46) = sVar11 + -1;
    if (sVar11 < 1) {
        *(u16 *)(unaff_r14 + 0x46) = 0;
        *(u16 *)(unaff_r14 + 0x4a) = 0;
    } else {
        uVar6 = *(short *)(unaff_r14 + 0x4a) + 1;
        *(u16 *)(unaff_r14 + 0x4a) = uVar6;
        if (((u32)uVar6 != (int)*(short *)(0x492 + unaff_r14)) && (*(short *)(unaff_r14 + 0x46) != 0)) {
            if (bVar34 == 0) {
                dVar31 = (double)(u64)(u32)g_8c124474;
            }
            uVar15 = ((u32)bVar33 << 0x13 | (u32)bVar34 << 0x14) & 0xffe7ffff;
            if (bVar34 == 0) {
                dVar31 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x2c), SUB84(dVar31, 0));
            } else {
                dVar31 = *(double *)(unaff_r14 + 0x2c);
            }
            bVar33 = (u8)((uVar15 & 0x80000) >> 0x13);
            bVar34 = (u8)(uVar15 >> 0x14);
            if (bVar33 == 0) {
                dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) + SUB84(dVar31, 0), SUB84(dVar31, 0));
            } else {
                dVar31 = dVar31 + dVar31;
            }
            if (bVar34 == 0) {
                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)(unaff_r14 + 0x40));
            }
            if (bVar33 == 0) {
                bVar32 = (float)((u64)dVar31 >> 0x20) < SUB84(dVar30, 0);
            } else {
                bVar32 = dVar31 < dVar30;
            }
            if (!bVar32)
                goto LAB_8c12441c;
        }
        if (bVar34 == 0) {
            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), *(u32 *)(unaff_r14 + 0x2c));
        }
        uVar15 = ((u32)bVar33 << 0x13 | (u32)bVar34 << 0x14) & 0xffe7ffff;
        if (bVar34 == 0) {
            dVar24 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x40), fVar23);
        } else {
            dVar24 = *(double *)(unaff_r14 + 0x40);
        }
        bVar33 = (u8)((uVar15 & 0x80000) >> 0x13);
        bVar34 = (u8)(uVar15 >> 0x14);
        *(u16 *)(unaff_r14 + 0x4a) = 0;
        if (bVar33 == 0) {
            dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) - SUB84(dVar31, 0), SUB84(dVar24, 0));
        } else {
            dVar24 = dVar24 - dVar31;
        }
        if (bVar34 == 0) {
            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), g_8c124474._4_4_);
        }
        fVar18 = (float)((u64)dVar24 >> 0x20);
        if (bVar33 == 0) {
            bVar32 = SUB84(dVar31, 0) < fVar18;
        } else {
            bVar32 = dVar31 < dVar24;
        }
        fVar23 = 0x3d4ccccc;
        if (bVar32) {
            fVar23 = 0x3e999999;
        }
        dVar30 = (double)CONCAT44(fVar23, SUB84(dVar30, 0));
        if (bVar34 == 0) {
            dVar31 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x2c), SUB84(dVar31, 0));
        } else {
            dVar31 = *(double *)(unaff_r14 + 0x2c);
        }
        if (bVar33 == 0) {
            dVar31 = (double)CONCAT44(fVar23 * fVar18 + (float)((u64)dVar31 >> 0x20), SUB84(dVar31, 0));
        }
        if (bVar34 == 0) {
            *(int *)(unaff_r14 + 0x2c) = (int)((u64)dVar31 >> 0x20);
        } else {
            *(double *)(unaff_r14 + 0x2c) = dVar31;
        }
        *(short *)(0x4b4 + unaff_r14) = *(short *)(0x4b4 + unaff_r14) + 1;
    }
LAB_8c12441c:
    uVar16 = SUB84(dVar31, 0);
    if (bVar34 == 0) {
        dVar21 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x2c), fVar29);
    } else {
        dVar21 = *(double *)(unaff_r14 + 0x2c);
    }
    uVar15 = ((u32)bVar33 << 0x13 | (u32)bVar34 << 0x14) & 0xffe7ffff;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = (u8)((uVar15 & 0x80000) >> 0x13);
    bVar36 = (u8)(uVar15 >> 0x14);
    fVar29 = SUB84(dVar24, 0);
    if (bVar35 == 0) {
        dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + fVar29, SUB84(dVar21, 0));
    } else {
        dVar21 = dVar21 + dVar24;
    }
    if (bVar36 == 0) {
        uVar16 = *(u32 *)(unaff_r14 + 0x34);
    }
    fVar18 = (float)((u64)dVar21 >> 0x20);
    dVar31 = dVar21;
    if (bVar36 == 0) {
        dVar31 = (double)CONCAT44(fVar18, uVar16);
    }
    if (bVar35 == 0) {
        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) - SUB84(dVar31, 0), SUB84(dVar31, 0));
    } else {
        dVar31 = dVar31 - dVar31;
    }
    uVar16 = (u32)((u64)dVar31 >> 0x20);
    if (bVar36 == 0) {
        *(u32 *)(0x494 + unaff_r14) = uVar16;
        dVar31 = (double)CONCAT44(uVar16, *(u32 *)(unaff_r14 + 0x34));
    } else {
        *(double *)(0x494 + unaff_r14) = dVar31;
    }
    if (bVar35 == 0) {
        bVar32 = SUB84(dVar31, 0) < fVar17;
    } else {
        bVar32 = dVar31 < dVar28;
    }
    if (bVar32) {
        if (bVar35 == 0) {
            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), fVar17 - fVar18);
        } else {
            dVar28 = dVar28 - dVar21;
        }
        if (bVar36 == 0) {
            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), *(u32 *)(0x49c + unaff_r14));
        }
        if (bVar35 == 0) {
            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) + SUB84(dVar31, 0));
        } else {
            dVar28 = dVar28 + dVar31;
        }
        if (bVar36 == 0) {
            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), g_8c124484);
        }
        if (bVar35 == 0) {
            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) * SUB84(dVar31, 0));
        } else {
            dVar28 = dVar28 * dVar31;
        }
        if (bVar36 == 0) {
            in_xd14 = (double)CONCAT44(SUB84(dVar28, 0), fVar29);
        }
        if (bVar35 == 0) {
            uVar16 = SUB84(in_xd14, 0);
        } else {
            uVar16 = SUB84(-in_xd14, 0);
        }
        thunk_FUN_8c013cd8();
        uVar15 = ((u32)bVar33 << 0xc | (u32)bVar34 << 0x12 | (u32)bVar35 << 0x13 | (u32)bVar36 << 0x14) & 0xffe7ffff;
        bVar35 = (u8)((uVar15 & 0x80000) >> 0x13);
        bVar36 = (u8)((uVar15 & 0x100000) >> 0x14);
        fVar29 = (float)((u64)dVar28 >> 0x20);
        if (bVar35 == 0) {
            dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + fVar29, SUB84(dVar30, 0));
        } else {
            dVar30 = dVar30 + dVar28;
        }
        dVar31 = dVar28;
        if (bVar36 == 0) {
            dVar31 = (double)CONCAT44(fVar29, uVar16);
        }
        if (bVar35 == 0) {
            dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) / (float)((u64)dVar30 >> 0x20), SUB84(dVar31, 0));
        } else {
            dVar31 = dVar31 / dVar30;
        }
    } else {
        dVar31 = in_xd12;
        if (bVar36 == 0) {
            dVar31 = (double)CONCAT44(SUB84(dVar21, 0), fVar29);
        }
    }
    fVar17 = (float)((u64)dVar31 >> 0x20);
    uVar7 = (u32)bVar35 << 0x13 | (u32)bVar36 << 0x14 | 0x80000 & 0x3fffff;
    uVar15 = (uVar7 & 0x80000) >> 0x13;
    cVar1 = (char)uVar15;
    uVar7 = (uVar7 & 0x100000) >> 0x14;
    cVar2 = (char)uVar7;
    fVar29 = g_8c1244f0;
    if (cVar2 == '\0') {
        fVar29 = g_8c1244ec;
    }
    if (cVar1 == '\0') {
        bVar32 = (float)((u64)(double)fVar17 >> 0x20) < fVar29;
    } else {
        bVar32 = (double)fVar17 < (double)CONCAT44(fVar29, g_8c1244ec);
    }
    if (bVar32) {
        if (cVar2 == '\0') {
            in_xd12 = (double)CONCAT44(SUB84(dVar21, 0), SUB84(dVar31, 0));
        }
    } else {
        if (cVar2 == '\0') {
            dVar21 = (double)CONCAT44(g_8c1244f0, g_8c1244ec);
        } else {
            dVar21 = (double)CONCAT44(0xffe7ffff, g_8c1244f0);
        }
        if (cVar1 == '\0') {
            bVar32 = (float)((u64)dVar21 >> 0x20) < (float)((u64)(double)fVar17 >> 0x20);
        } else {
            bVar32 = dVar21 < (double)fVar17;
        }
        in_xd12 = dVar31;
        if ((bVar32) && (in_xd12 = dVar28, cVar2 == '\0')) {
            in_xd12 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar31, 0));
        }
    }
    uVar16 = SUB84((double)fVar17, 0);
    iVar5 = (int)0x4a4;
    if (cVar2 == '\0') {
        *(int *)(0x4a4 + unaff_r14) = (int)((u64)in_xd12 >> 0x20);
    } else {
        *(double *)(0x4a4 + unaff_r14) = in_xd12;
    }
    if (cVar2 == '\0') {
        uVar16 = *(u32 *)(iVar5 + unaff_r14);
    }
    uVar15 = (uVar15 << 0x13 | uVar7 << 0x14) & 0xffe7ffff;
    if (cVar2 == '\0') {
        dVar28 = (double)CONCAT44(*(u32 *)(unaff_r14 + 0x4c), uVar16);
    } else {
        dVar28 = *(double *)(unaff_r14 + 0x4c);
    }
    if ((char)((uVar15 & 0x80000) >> 0x13) == '\0') {
        dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) + SUB84(dVar28, 0), SUB84(dVar28, 0));
    } else {
        dVar28 = dVar28 + dVar28;
    }
    if ((char)(uVar15 >> 0x14) == '\0') {
        *(int *)(unaff_r14 + 0x4c) = (int)((u64)dVar28 >> 0x20);
    } else {
        *(double *)(unaff_r14 + 0x4c) = dVar28;
    }
    return 0x4c;
}

/*
 * asr_sub_1244f8  0x8c1244f8
 * area name: in the asr library code range
 */
u32 asr_sub_1244f8(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u64 *puVar1;
    u64 *puVar2;
    u32 uVar3;
    int iVar4;
    u32 ar5_00;
    char cVar5;

    if ((*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01') &&
        ((*(char *)(a0 + 0x48c) == '\0' || (*(char *)((*(int **)(a0 + 0x10))[1] + 0x30) != '\x01')))) {
        ar5_00 = (*(u32 **)(a0 + 0xc))[1];
        puVar1 = (u64 *)mring_read_advance(**(u32 **)(a0 + 0xc), ar5_00, a2, a3);
        if (puVar1 != NULL) {
            *(int *)(a0 + 0x4d0) = *(int *)(a0 + 0x4d0) + 1;
            asr_sub_123ea6(a0, ar5_00, a2, a3);
            cVar5 = '\0';
            puVar2 = (u64 *)mring_write_advance(**(u32 **)(a0 + 0x10));
            if (cVar5 == '\0') {
                *(u32 *)puVar2 = *(u32 *)(a0 + 0x4a4);
            } else {
                *puVar2 = *(u64 *)(a0 + 0x4a4);
            }
            if (*(char *)(a0 + 0x48c) != '\0') {
                cVar5 = '\0';
                puVar2 = (u64 *)mring_write_advance(*(u32 *)(*(int *)(a0 + 0x10) + 4));
                if (cVar5 == '\0') {
                    *(u32 *)puVar2 = *(u32 *)(a0 + 0x2c);
                    *(u32 *)((int)puVar2 + 4) = *(u32 *)(a0 + 0x30);
                    *(u32 *)(puVar2 + 1) = *(u32 *)(a0 + 0x34);
                    *(u32 *)((int)puVar2 + 0xc) = *(u32 *)(a0 + 0x3c);
                    *(u32 *)(puVar2 + 2) = *(u32 *)(a0 + 0x38);
                    *(u32 *)((int)puVar2 + 0x14) = *(u32 *)puVar1;
                } else {
                    *puVar2 = *(u64 *)(a0 + 0x2c);
                    *(u64 *)((int)puVar2 + 4) = *(u64 *)(a0 + 0x30);
                    puVar2[1] = *(u64 *)(a0 + 0x34);
                    *(u64 *)((int)puVar2 + 0xc) = *(u64 *)(a0 + 0x3c);
                    puVar2[2] = *(u64 *)(a0 + 0x38);
                    *(u64 *)((int)puVar2 + 0x14) = *puVar1;
                }
            }
            if (((*(char *)(a0 + 0x4ac) != '\0') &&
                 (uVar3 = asr_sub_1238a6(a0, ar5_00, a2, a3), (uVar3 & 0xff) != 0)) ||
                ((*(char *)(a0 + 0x4d8) != '\0' && (uVar3 = asr_sub_1239f0(a0), (uVar3 & 0xff) != 0)))) {
                return 1;
            }
        }
    }
    iVar4 = **(int **)(a0 + 0xc);
    return *(int *)((*(int **)(a0 + 0xc))[1] * 4 + *(int *)(iVar4 + 0x40)) == *(int *)(iVar4 + 0x3c) ^ 1;
}

/*
 * asr_sub_12462c  0x8c12462c
 * area name: in the asr library code range
 */
u32 asr_sub_12462c(u32 unused_a0, u32 unused_a1, u32 *a2, int *a3, int ain0) {
    u32 uVar1;
    u32 a5;
    u32 *ar6_00;
    int unaff_r14;
    float fVar2;
    char in_T;
    u8 in_FPSCR_DN;

    if (in_T == '\x01') {
        if ((char)((in_FPSCR_DN & 4) >> 2) == '\0') {
            fVar2 = 100.0;
        } else {
            fVar2 = 0.0;
        }
        *(short *)a2 = (short)(int)(*(float *)(unaff_r14 + 0x494) * 4.3429446 * fVar2);
    } else if (ain0 == 2) {
        *(u8 *)(unaff_r14 + 0x4bc) = 0;
        *(short *)(unaff_r14 + 0x4b8) = (short)a2;
    } else if (ain0 == 3) {
        a5 = *a2;
        ar6_00 = a2;
        uVar1 = asr_sub_12394c(unaff_r14, a5);
        if ((uVar1 & 0xff) != 0) {
            return 0;
        }
        if ((u32) * (u8 *)(unaff_r14 + 0x4c8) != (a2[1] & 0xff)) {
            *(char *)(unaff_r14 + 0x4c8) = (char)a2[1];
            if (a2[1] == 0) {
                *(u16 *)(unaff_r14 + 0x4c2) = 0x1eb8;
            } else {
                *(u16 *)(unaff_r14 + 0x4c2) = 0x3333;
            }
            asr_sub_12356c(unaff_r14, a5, ar6_00);
        }
        *(u32 *)(unaff_r14 + 0x4dc) = a2[2] * 100;
    } else if (ain0 == 4) {
        *a2 = (u32) * (u8 *)(unaff_r14 + 0x4ac);
        a2[1] = (u32) * (u8 *)(unaff_r14 + 0x4c8);
        fVar2 = (float)*(int *)(unaff_r14 + 0x4dc);
        if (*(int *)(unaff_r14 + 0x4dc) < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        fVar2 = fVar2 / 100.0;
        if (2.1474836e+09 < fVar2) {
            fVar2 = fVar2 + -4.2949673e+09;
        }
        a2[2] = (int)fVar2;
    } else {
        if (ain0 == 5) {
            if (a2 == NULL) {
                asr_sub_123e4c(unaff_r14, unused_a1, 0);
                return 1;
            }
            asr_sub_123d00(unaff_r14, *a3 + (int)a2);
        } else {
            if (ain0 != 6) {
                if (ain0 == 7) {
                    *(short *)(unaff_r14 + 0x4d4) = *(short *)(unaff_r14 + 0x4d4) + 1;
                    return 1;
                }
                if (ain0 == 0xff) {
                    asr_sub_120668(unaff_r14, unused_a1, a2, a3);
                    return 1;
                }
                return 0;
            }
            if (a2 != NULL) {
                asr_sub_123bac(unaff_r14, *a3 + (int)a2);
            }
        }
        *a3 = *a3 + 0x204;
    }
    return 1;
}

/*
 * asr_sub_1247d4  0x8c1247d4
 * area name: in the asr library code range
 */
u32 asr_sub_1247d4(u32 unused_a0, u32 unused_a1, u32 a2, u32 unused_a3, u32 ain0) {
    int iVar1;
    int iVar2;
    u32 *puVar3;
    u32 uVar4;
    int unaff_r14;
    u64 in_dr0;
    float fVar5;
    float fVar6;
    u64 uVar7;
    u32 uVar8;
    char cVar9;

    *(u16 *)(**(int **)(unaff_r14 + 0x10) + 0xc) = (u16)ain0;
    if (*(char *)(unaff_r14 + 0x48c) != '\0') {
        *(u16 *)(*(int *)(*(int *)(unaff_r14 + 0x10) + 4) + 0xc) = 0x18;
    }
    iVar1 = 0;
    do {
        *(float *)(iVar1 * 4 + unaff_r14 + 0x1d8) = ((float)iVar1 * 20.5) / 149.0 + 10.5;
        iVar2 = iVar1 + 2;
        *(float *)((iVar1 + 1) * 4 + unaff_r14 + 0x1d8) = ((float)(iVar1 + 1) * 20.5) / 149.0 + 10.5;
        iVar1 = iVar1 + 3;
        fVar5 = ((float)iVar2 * 20.5) / 149.0 + 10.5;
        *(float *)(iVar2 * 4 + unaff_r14 + 0x1d8) = fVar5;
    } while (iVar1 < 0x96);
    *(int *)(unaff_r14 + 0x484) = unaff_r14 + 0x484;
    *(int *)(unaff_r14 + 0x488) = unaff_r14 + 0x434;
    uVar8 = 0;
    cVar9 = '\0';
    asr_state_has_event(unaff_r14, 0x2b, a2);
    if (cVar9 == '\0') {
        *(int *)(unaff_r14 + 0x4a8) = (int)((u64)in_dr0 >> 0x20);
    } else {
        *(u64 *)(unaff_r14 + 0x4a8) = in_dr0;
    }
    asr_state_has_event(unaff_r14, 6, a2);
    *(short *)(unaff_r14 + 0x48) = (short)(int)(float)((u64)in_dr0 >> 0x20);
    asr_state_has_event(unaff_r14, 8, a2);
    *(short *)(unaff_r14 + 0x490) = (short)(int)(float)((u64)in_dr0 >> 0x20);
    asr_state_has_event(unaff_r14, 9, a2);
    *(short *)(unaff_r14 + 0x492) = (short)(int)(float)((u64)in_dr0 >> 0x20);
    asr_state_has_event(unaff_r14, 10, a2);
    cVar9 = '\0';
    *(short *)(unaff_r14 + 0x48e) = (short)(int)(float)((u64)in_dr0 >> 0x20);
    asr_state_has_event(unaff_r14, 0xb, a2);
    if (cVar9 == '\0') {
        fVar5 = 4.3429;
    }
    uVar4 = (u32)in_dr0;
    fVar5 = (float)((u64)in_dr0 >> 0x20) / fVar5;
    *(float *)(unaff_r14 + 0x49c) = fVar5;
    asr_state_has_event(unaff_r14, 0xd, a2);
    cVar9 = '\0';
    *(float *)(unaff_r14 + 0x498) = (float)(int)(short)(int)fVar5 * 0.002302585;
    fVar6 = 5.0;
    asr_state_has_event(unaff_r14, 0x24, a2);
    if (cVar9 == '\0') {
        fVar6 = 4.3429;
    }
    cVar9 = '\0';
    fVar5 = fVar5 / fVar6 + -1.0;
    uVar7 = CONCAT44(fVar5, uVar4);
    *(float *)(unaff_r14 + 0x4a0) = fVar5;
    asr_state_has_event(unaff_r14, 0x1b, a2);
    fVar5 = (float)((u64)uVar7 >> 0x20);
    if (cVar9 == '\0') {
        *(float *)(unaff_r14 + 0x50) = fVar5;
        uVar7 = CONCAT44(*(u32 *)(unaff_r14 + 0x50), 0x408af967);
    } else {
        *(u64 *)(unaff_r14 + 0x50) = uVar7;
        uVar7 = *(u64 *)(unaff_r14 + 0x50);
    }
    iVar1 = 0;
    fVar6 = (float)uVar7;
    uVar4 = 0x14;
    puVar3 = (u32 *)(unaff_r14 + 0x54);
    *(float *)(unaff_r14 + 0x50) = (float)((u64)uVar7 >> 0x20) / fVar6 + *(float *)(unaff_r14 + 0x4a8);
    *(int *)(unaff_r14 + 0xa4) = unaff_r14 + 0xa4;
    do {
        *puVar3 = 0x4effffff;
        iVar1 = iVar1 + 2;
        puVar3[1] = 0x4effffff;
        puVar3 = puVar3 + 2;
    } while (iVar1 < 0x14);
    *(int *)(unaff_r14 + 0xa8) = unaff_r14 + 0x54;
    *(u32 *)(unaff_r14 + 0x4c) = uVar8;
    *(u8 *)(unaff_r14 + 0x4c9) = 0;
    cVar9 = '\0';
    asr_state_has_event(unaff_r14, 0x29, 0x14);
    if (cVar9 == '\0') {
        fVar6 = 100.0;
    }
    fVar5 = fVar5 / fVar6;
    *(float *)(unaff_r14 + 0x4c4) = fVar5;
    asr_state_has_event(unaff_r14, 0x28, uVar4);
    if (2.1474836e+09 <= fVar5) {
        fVar5 = fVar5 - 4.2949673e+09;
    }
    *(int *)(unaff_r14 + 0x4dc) = (int)fVar5 * 100;
    *(float *)(unaff_r14 + 0x4b0) = *(float *)(unaff_r14 + 0x4a8) + -1.842068;
    *(u16 *)(unaff_r14 + 0x4c0) = 0;
    asr_state_has_event(unaff_r14, 0x27, uVar4);
    *(char *)(unaff_r14 + 0x4c8) = (char)(int)fVar5;
    if (*(char *)(unaff_r14 + 0x4c8) == '\0') {
        *(u16 *)(unaff_r14 + 0x4c2) = 0x1eb8;
    } else {
        *(u16 *)(unaff_r14 + 0x4c2) = 0x3333;
    }
    asr_state_has_event(unaff_r14, 0x2a, uVar4);
    *(char *)(unaff_r14 + 0x4d8) = (char)(int)fVar5;
    return 0;
}

/*
 * asr_sub_124b0c  0x8c124b0c
 * area name: in the asr library code range
 */
int asr_sub_124b0c(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 ar7_00;
    float extraout_fr0;
    u32 uStack_10;
    char cStack_c;

    uStack_10 = a0;
    cStack_c = (char)a1;
    asr_state_has_event(&uStack_10, 0x25, a2);
    if (((int)extraout_fr0 & 0xffU) == 0) {
        ar7_00 = 1;
    } else {
        ar7_00 = 2;
    }
    iVar1 = asr_sub_120580(a0, (int)(char)a1, 1, ar7_00, asr_sub_1244f8, &LAB_8c1247cc, &LAB_8c124620, 0x4e0);
    *(char *)(iVar1 + 0x48c) = (char)(int)extraout_fr0;
    return iVar1;
}

/*
 * asr_sub_124ba0  0x8c124ba0
 * area name: in the asr library code range
 */
u32 asr_sub_124ba0(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int *unaff_r14;

    unaff_r14[10] = unaff_r14[3];
    unaff_r14[0xb] = *(int *)unaff_r14[4];
    iVar1 = (**(code **)(*unaff_r14 + 0x10))(*unaff_r14, (u32) * (u16 *)(*(int *)unaff_r14[10] + 0xc) << 1, a2, a3);
    unaff_r14[0xe] = iVar1;
    return (u32)(iVar1 == 0);
}

/*
 * asr_sub_124bd0  0x8c124bd0
 * area name: in the asr library code range
 * called by: asr_sub_124edc
 */
u32 asr_sub_124bd0(int *a0, int a1, u32 a2, u32 a3) {
    u8 uVar1;
    u16 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    int iVar7;
    u8 *puVar8;

    iVar7 = *a0;
    uVar3 = (**(code **)(a1 + 8))(a1);
    asr_sub_124f2a(iVar7, a0, a2, a3);
    iVar7 = (**(code **)(iVar7 + 0x10))(iVar7, uVar3 * 0x14);
    a0[0xc] = iVar7;
    if (iVar7 == 0) {
        uVar4 = asr_fsm_set_result(a0, 2);
        return uVar4;
    }
    uVar6 = 0;
    *(short *)(a0 + 0xd) = (short)uVar3;
    puVar8 = (u8 *)a0[0xc];
    if (uVar3 != 0) {
        do {
            uVar4 = (**(code **)(0x84 + a1))(a1, uVar6);
            uVar1 = (**(code **)(a1 + 0x54))(uVar4);
            *puVar8 = uVar1;
            uVar1 = (**(code **)(a1 + 0x58))(uVar4);
            puVar8[1] = uVar1;
            uVar1 = (**(code **)(a1 + 0x5c))(uVar4);
            puVar8[2] = uVar1;
            uVar1 = (**(code **)(a1 + 0x60))(uVar4);
            puVar8[3] = uVar1;
            uVar2 = (**(code **)(a1 + 100))(uVar4);
            *(u16 *)(puVar8 + 4) = uVar2 & 0xff;
            uVar5 = (**(code **)(0xb4 + a1))(uVar4);
            *(u32 *)(puVar8 + 8) = uVar5;
            uVar5 = (**(code **)(0xb8 + a1))(uVar4);
            *(u32 *)(puVar8 + 0xc) = uVar5;
            uVar4 = (**(code **)(0xbc + a1))(uVar4);
            uVar6 = uVar6 + 1;
            *(u32 *)(puVar8 + 0x10) = uVar4;
            puVar8 = puVar8 + 0x14;
        } while (uVar6 < uVar3);
    }
    return 0;
}

/*
 * asr_sub_124bd8  0x8c124bd8
 * area name: in the asr library code range
 */
u32 asr_sub_124bd8(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 a5;
    u32 a5_00;
    int iVar4;
    int *unaff_r13;
    u8 *puVar5;
    int unaff_r14;

    iVar4 = *unaff_r13;
    uVar1 = (**(code **)(unaff_r14 + 8))(a1, a1, a2, a3);
    asr_sub_124f2a(iVar4, unaff_r13, a2, a3);
    iVar4 = (**(code **)(iVar4 + 0x10))(iVar4, uVar1 * 0x14, a2, a3);
    unaff_r13[0xc] = iVar4;
    if (iVar4 == 0) {
        uVar2 = asr_fsm_set_result(2);
        return uVar2;
    }
    a5_00 = 0;
    *(short *)(unaff_r13 + 0xd) = (short)uVar1;
    puVar5 = (u8 *)unaff_r13[0xc];
    if (uVar1 != 0) {
        do {
            a5 = a5_00;
            uVar2 = (**(code **)(0x84 + unaff_r14))(unaff_r14, a5_00, a2, a3);
            uVar3 = (**(code **)(unaff_r14 + 0x54))(uVar2, a5, a2, a3);
            *puVar5 = (char)uVar3;
            uVar3 = (**(code **)(unaff_r14 + 0x58))(uVar2, a5, a2, a3);
            puVar5[1] = (char)uVar3;
            uVar3 = (**(code **)(unaff_r14 + 0x5c))(uVar2, a5, a2, a3);
            puVar5[2] = (char)uVar3;
            uVar3 = (**(code **)(unaff_r14 + 0x60))(uVar2, a5, a2, a3);
            puVar5[3] = (char)uVar3;
            uVar3 = (**(code **)(unaff_r14 + 100))(uVar2, a5, a2, a3);
            *(u16 *)(puVar5 + 4) = (u16)uVar3 & 0xff;
            uVar3 = (**(code **)(0xb4 + unaff_r14))(uVar2, a5, a2, a3);
            *(u32 *)(puVar5 + 8) = uVar3;
            uVar3 = (**(code **)(0xb8 + unaff_r14))(uVar2, a5, a2, a3);
            *(u32 *)(puVar5 + 0xc) = uVar3;
            uVar2 = (**(code **)(0xbc + unaff_r14))(uVar2, a5, a2, a3);
            a5_00 = a5_00 + 1;
            *(u32 *)(puVar5 + 0x10) = uVar2;
            puVar5 = puVar5 + 0x14;
        } while (a5_00 < uVar1);
    }
    return 0;
}

/*
 * asr_sub_124d10  0x8c124d10
 * area name: in the asr library code range
 * called by: asr_sub_124e28
 */
float asr_sub_124d10(u8 *a0, float *a1) {
    float *pfVar1;
    int iVar2;
    float fVar3;
    int iVar4;
    float *pfVar5;
    int *piVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    u64 uVar10;

    fVar7 = 0.0;
    fVar3 = 0.0;
    uVar10 = 0x7f7fffff7f7fffff;
    if (a0[1] != 0) {
        do {
            iVar2 = 1;
            pfVar1 = (float *)((int)fVar3 * (u32)*a0 * 4 + *(int *)(a0 + 8));
            fVar9 = (*a1 - *pfVar1) * (*a1 - *pfVar1);
            fVar8 = (float)((u64)uVar10 >> 0x20);
            pfVar5 = a1;
            if (1 < *a0) {
                do {
                    pfVar5 = pfVar5 + 1;
                    pfVar1 = pfVar1 + 1;
                    fVar9 = (*pfVar5 - *pfVar1) * (*pfVar5 - *pfVar1) + fVar9;
                    if (fVar8 < fVar9)
                        break;
                    iVar2 = iVar2 + 1;
                } while (iVar2 < (int)(u32)*a0);
            }
            if (fVar9 < fVar8) {
                uVar10 = CONCAT44(fVar9, (int)uVar10);
                fVar7 = fVar3;
            }
            fVar3 = (float)((int)fVar3 + 1);
        } while ((int)fVar3 < (int)(u32)a0[1]);
    }
    fVar3 = (float)uVar10;
    piVar6 = (int *)((u32)a0[2] * ((u32)fVar7 & 0xff) * 4 + *(int *)(a0 + 0xc));
    iVar2 = 0;
    if (a0[2] != 0) {
        do {
            iVar4 = *piVar6;
            piVar6 = piVar6 + 1;
            pfVar5 = (float *)(iVar4 * 4 + *(int *)(a0 + 0x10));
            iVar4 = 1;
            pfVar1 = pfVar5 + 1;
            fVar9 = *a1 - *pfVar5;
            fVar9 = fVar9 * fVar9;
            pfVar5 = a1;
            if (1 < *a0) {
                do {
                    pfVar5 = pfVar5 + 1;
                    fVar8 = *pfVar1;
                    pfVar1 = pfVar1 + 1;
                    fVar9 = (*pfVar5 - fVar8) * (*pfVar5 - fVar8) + fVar9;
                    if (fVar3 < fVar9)
                        break;
                    iVar4 = iVar4 + 1;
                } while (iVar4 < (int)(u32)*a0);
            }
            iVar2 = iVar2 + 1;
            if (fVar9 < fVar3) {
                fVar7 = *pfVar1;
                fVar3 = fVar9;
            }
        } while (iVar2 < (int)(u32)a0[2]);
    }
    return fVar7;
}

/*
 * asr_sub_124e28  0x8c124e28
 * area name: in the asr library code range
 */
u32 asr_sub_124e28(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u8 *puVar2;
    u32 uVar3;
    int iVar4;
    int a4;

    if (*(char *)(*(int *)(a0 + 0x2c) + 0x30) == '\0') {
        uVar3 = (*(u32 **)(a0 + 0x28))[1];
        iVar1 = mring_read_advance(**(u32 **)(a0 + 0x28), uVar3, unused_a2, a3);
        if (iVar1 != 0) {
            puVar2 = (u8 *)mring_write_advance(*(u32 *)(a0 + 0x2c));
            a4 = *(int *)(a0 + 0x30);
            iVar4 = 0;
            if (*(short *)(a0 + 0x34) != 0) {
                do {
                    uVar3 = asr_sub_124d10(a4, (u32) * (u16 *)(a4 + 4) * 4 + iVar1);
                    *puVar2 = (char)uVar3;
                    iVar4 = iVar4 + 1;
                    a4 = a4 + 0x14;
                    puVar2 = puVar2 + 1;
                } while (iVar4 < (int)(u32) * (u16 *)(a0 + 0x34));
            }
        }
    }
    iVar1 = **(int **)(a0 + 0x28);
    return *(int *)((*(int **)(a0 + 0x28))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c) ^ 1;
}

/*
 * asr_sub_124edc  0x8c124edc
 * area name: in the asr library code range
 */
u32 asr_sub_124edc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if ((a1 & 0xff) == 1) {
        uVar1 = asr_sub_124bd0(a0, a2, a2, a3);
        if ((uVar1 & 0xff) == 0) {
            *(u8 **)(a0 + 0x18) = (&asr_sub_124e28);
        } else {
            *(u8 **)(a0 + 0x18) = (&DATA_8c124e24);
        }
    } else {
        if ((a1 & 0xff) != (int)0xff) {
            return 0;
        }
        asr_sub_124f54(a0, a1, a2, a3);
    }
    return 1;
}

/*
 * asr_sub_124f2a  0x8c124f2a
 * area name: in the asr library code range
 * called by: asr_sub_124bd0, asr_sub_124bd8, asr_sub_124f54, asr_sub_124f5a
 */
u32 asr_sub_124f2a(int a0, int a1, u32 a2, u32 a3) {
    if (*(short *)(a1 + 0x34) != 0) {
        (**(code **)(a0 + 0x18))(a0, *(u32 *)(a1 + 0x30), a2, a3);
        *(u16 *)(a1 + 0x34) = 0;
    }
    return 0x34;
}

/*
 * asr_sub_124f54  0x8c124f54
 * area name: in the asr library code range
 * called by: asr_sub_124edc
 */
u32 asr_sub_124f54(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar4_00;

    ar4_00 = *a0;
    (**(code **)(ar4_00 + 0x18))(ar4_00, a0[3]);
    (**(code **)(ar4_00 + 0x18))(ar4_00, a0[4]);
    (**(code **)(ar4_00 + 0x18))(ar4_00, a0[0xe]);
    asr_sub_124f2a(ar4_00, a0, a2, a3);
    /* WARNING: Could not recover jumptable at 0x8c124fa6. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(ar4_00 + 0x18))(ar4_00, a0);
    return uVar1;
}

/*
 * asr_sub_124f5a  0x8c124f5a
 * area name: in the asr library code range
 */
u32 asr_sub_124f5a(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int *unaff_r13;
    int a4;

    a4 = *unaff_r13;
    (**(code **)(a4 + 0x18))(a4, unaff_r13[3], a2, a3);
    (**(code **)(a4 + 0x18))(a4, unaff_r13[4], a2, a3);
    (**(code **)(a4 + 0x18))(a4, unaff_r13[0xe], a2, a3);
    asr_sub_124f2a(a4, unaff_r13, a2, a3);
    /* WARNING: Could not recover jumptable at 0x8c124fa6. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(a4 + 0x18))(a4);
    return uVar1;
}

/*
 * asr_sub_124faa  0x8c124faa
 * area name: in the asr library code range
 */
u32 asr_sub_124faa(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_sub_120580))(a0, a1, 1, 1, (&DATA_8c124e24), (&DATA_8c124b9c), (&asr_sub_124edc), 0x40);
    return uVar1;
}

/*
 * asr_sub_124fe8  0x8c124fe8
 * area name: in the asr library code range
 */
u32 asr_sub_124fe8(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u16 uVar1;
    float *pfVar2;
    u64 *puVar3;
    int iVar4;
    u32 uVar5;
    u64 *puVar6;
    float *pfVar7;
    u64 uVar8;
    u64 in_dr4;
    float fVar9;
    char cVar10;
    short *psStack_1c;

    cVar10 = '\0';
    if ((*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01') &&
        (psStack_1c =
             (short *)mring_read_advance(**(u32 **)(a0 + 0xc), *(u32 *)(*(int *)(a0 + 0xc) + 4), unused_a2, a3),
         psStack_1c != NULL)) {
        pfVar7 = *(float **)(a0 + 0x2c);
        puVar6 = *(u64 **)(a0 + 0x44);
        uVar1 = *(u16 *)(a0 + 0x36);
        if (cVar10 == '\0') {
            in_dr4 = CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(a0 + 0x3c));
        }
        uVar5 = (u32)uVar1;
        iVar4 = 0;
        if (uVar5 != 0) {
            do {
                iVar4 = iVar4 + 1;
                cVar10 = '\0';
                fVar9 = (float)(int)*psStack_1c;
                *pfVar7 = fVar9 - (float)in_dr4;
                pfVar7 = pfVar7 + 1;
                in_dr4 = CONCAT44(fVar9, fVar9);
                psStack_1c = psStack_1c + 1;
            } while (iVar4 < (int)uVar5);
        }
        if (cVar10 == '\0') {
            *(int *)(a0 + 0x3c) = (int)((u64)in_dr4 >> 0x20);
        } else {
            *(u64 *)(a0 + 0x3c) = in_dr4;
        }
        if (pfVar7 == *(float **)(a0 + 0x30)) {
            pfVar7 = *(float **)(a0 + 0x28);
        }
        iVar4 = (u32)uVar1 * 4;
        if (*(char *)(a0 + 0x40) == '\0') {
            cVar10 = '\0';
            pfVar2 = (float *)mring_write_advance(**(u32 **)(a0 + 0x10));
            *(float **)(a0 + 0x2c) = pfVar7;
            puVar3 = (u64 *)((u32) * (u16 *)(a0 + 0x38) * 4 + (int)puVar6);
            pfVar7 = pfVar7 + (uVar5 - *(u16 *)(a0 + 0x38));
            while (puVar6 < puVar3) {
                if (cVar10 == '\0') {
                    fVar9 = *pfVar7;
                    pfVar7 = pfVar7 + 1;
                    uVar8 = CONCAT44(*(u32 *)puVar6, fVar9);
                    puVar6 = (u64 *)((int)puVar6 + 4);
                } else {
                    pfVar7 = pfVar7 + 2;
                    uVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                }
                cVar10 = '\0';
                *pfVar2 = (float)((u64)uVar8 >> 0x20) * (float)uVar8;
                pfVar2 = pfVar2 + 1;
            }
            if (pfVar7 == *(float **)(a0 + 0x30)) {
                pfVar7 = *(float **)(a0 + 0x28);
            }
            puVar3 = (u64 *)(iVar4 + (int)puVar6);
            while (puVar6 < puVar3) {
                if (cVar10 == '\0') {
                    fVar9 = *pfVar7;
                    pfVar7 = pfVar7 + 1;
                    uVar8 = CONCAT44(*(u32 *)puVar6, fVar9);
                    puVar6 = (u64 *)((int)puVar6 + 4);
                } else {
                    pfVar7 = pfVar7 + 2;
                    uVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                }
                cVar10 = '\0';
                *pfVar2 = (float)((u64)uVar8 >> 0x20) * (float)uVar8;
                pfVar2 = pfVar2 + 1;
            }
            if (pfVar7 == *(float **)(a0 + 0x30)) {
                pfVar7 = *(float **)(a0 + 0x28);
            }
            puVar3 = (u64 *)((u32) * (u16 *)(a0 + 0x38) * 4 + (int)puVar6);
            while (puVar6 < puVar3) {
                if (cVar10 == '\0') {
                    fVar9 = *pfVar7;
                    pfVar7 = pfVar7 + 1;
                    uVar8 = CONCAT44(*(u32 *)puVar6, fVar9);
                    puVar6 = (u64 *)((int)puVar6 + 4);
                } else {
                    pfVar7 = pfVar7 + 2;
                    uVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                }
                cVar10 = '\0';
                *pfVar2 = (float)((u64)uVar8 >> 0x20) * (float)uVar8;
                pfVar2 = pfVar2 + 1;
            }
        } else {
            puVar6 = *(u64 **)(a0 + 0x2c);
            if (cVar10 == '\0') {
                *(u32 *)puVar6 = 0;
            } else {
                *puVar6 = 0x8c013ef400000000;
            }
            memmove(pfVar7, puVar6, iVar4);
            pfVar7 = pfVar7 + uVar1;
            if (pfVar7 == *(float **)(a0 + 0x30)) {
                pfVar7 = *(float **)(a0 + 0x28);
            }
            *(u8 *)(a0 + 0x40) = 0;
            *(float **)(a0 + 0x2c) = pfVar7;
        }
    }
    iVar4 = **(int **)(a0 + 0xc);
    return *(int *)((*(int **)(a0 + 0xc))[1] * 4 + *(int *)(iVar4 + 0x40)) == *(int *)(iVar4 + 0x3c) ^ 1;
}

/*
 * asr_sub_12516c  0x8c12516c
 * area name: in the asr library code range
 */
u32 asr_sub_12516c(int *a0, u32 a1, u32 a2, u32 a3) {
    int a5;

    if ((char)a1 == '\x01') {
        a0[0xf] = 0;
        *(u8 *)(a0 + 0x10) = 1;
    } else {
        if ((char)a1 != -1) {
            return 0;
        }
        (**(code **)(*a0 + 0x18))(*a0, a0[10], a2, a3);
        a5 = a0[0x11];
        (**(code **)(*a0 + 0x18))(*a0, a5, a2, a3);
        asr_sub_120668(a0, a5, a2, a3);
    }
    return 1;
}

/*
 * asr_sub_1251e4  0x8c1251e4
 * area name: in the asr library code range
 */
u32 asr_sub_1251e4(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 a6;
    u32 uVar4;
    int a4;
    int *unaff_r14;
    u64 in_dr0;
    float fVar5;
    u64 uVar6;
    u32 uVar7;
    u32 uVar8;
    char cVar9;

    fVar5 = (float)((u64)in_dr0 >> 0x20);
    a4 = *unaff_r14;
    asr_state_has_event(a0, 1, a2);
    uVar7 = (u32)fVar5;
    *(short *)((int)unaff_r14 + 0x36) = (short)uVar7;
    asr_state_has_event(unaff_r14, 2, a2);
    uVar8 = (u32)fVar5;
    uVar4 = uVar8 & 0xffff;
    *(short *)(unaff_r14 + 0xd) = (short)uVar8;
    iVar3 = uVar4 - (uVar7 & 0xffff);
    *(short *)(unaff_r14 + 0xe) = (short)((int)(iVar3 + (u32)(iVar3 < 0)) >> 1);
    if (((uVar7 & 0xffff) <= uVar4) && (uVar4 <= (uVar7 & 0xffff) * 3)) {
        *(short *)(*(int *)unaff_r14[4] + 0xc) = (short)(uVar8 << 2);
        *(u16 *)((int)unaff_r14 + 0x3a) = 3;
        iVar3 = (**(code **)(a4 + 0x14))(a4, (u32) * (u16 *)((int)unaff_r14 + 0x36) * 3, 4, a3);
        unaff_r14[10] = iVar3;
        a6 = 4;
        uVar8 = uVar8 & 0xffff;
        cVar9 = '\0';
        iVar3 = (**(code **)(a4 + 0x14))(a4, uVar8, 4, a3);
        unaff_r14[0x11] = iVar3;
        if ((unaff_r14[10] != 0) && (unaff_r14[0x11] != 0)) {
            unaff_r14[0xb] = unaff_r14[10];
            unaff_r14[0xc] = (uVar7 & 0xffff) * 0xc + unaff_r14[10];
            iVar3 = 0;
            if (cVar9 == '\0') {
                uVar6 = 0x3f0a3d703eeb851e;
            } else {
                uVar6 = 0x3eeb851e3f0a3d70;
            }
            if (uVar4 != 0) {
                do {
                    iVar1 = unaff_r14[0x11];
                    iVar2 = iVar3 * 4;
                    fVar5 = (float)((u64)(double)(int)(uVar4 - 1) >> 0x20);
                    thunk_FUN_8c013c88();
                    iVar3 = iVar3 + 1;
                    cVar9 = '\0';
                    *(float *)(iVar1 + iVar2) = -(fVar5 * (float)uVar6) + (float)((u64)uVar6 >> 0x20);
                } while (iVar3 < (int)uVar4);
            }
            if (cVar9 == '\0') {
                unaff_r14[0xf] = 0;
            } else {
                unaff_r14[0xf] = 0;
                unaff_r14[0x10] = 0x8c12516c;
            }
            *(u8 *)(unaff_r14 + 0x10) = 1;
            return 0;
        }
        asr_fsm_set_result(unaff_r14, 2, a6, a3);
    }
    return 1;
}

/*
 * asr_sub_12538e  0x8c12538e
 * area name: in the asr library code range
 */
u32 asr_sub_12538e(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_sub_120580))(a0, a1, 1, 1, (&asr_sub_124fe8), (&DATA_8c1251dc), (&asr_sub_12516c), 0x48);
    return uVar1;
}
