/* Seaman (USA) region 0x8c110000-0x8c120000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * asr_sub_110060  0x8c110060
 * area name: in the asr library code range
 */
u32 asr_sub_110060(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int unaff_r14;

    iVar1 = *(int *)(unaff_r14 + 0x28);
    if (iVar1 == 0) {
        if (*(int *)(unaff_r14 + 0x48) == *(int *)(unaff_r14 + 0x7c)) {
            asr_sub_10fe04(unaff_r14);
        }
        if (*(u32 *)(unaff_r14 + 0x48) < *(u32 *)(unaff_r14 + 0x7c)) {
            asr_sub_10fc96(unaff_r14, unused_a1, a2, a3);
        }
        if ((float)*(int *)(unaff_r14 + 0x8c) < *(float *)(unaff_r14 + 0x4c)) {
            *(u32 *)(unaff_r14 + 0x28) = 1;
        }
    } else if (iVar1 == 1) {
        asr_sub_10fe04(unaff_r14);
        if (*(int *)(unaff_r14 + 0x48) == 0) {
            *(u32 *)(unaff_r14 + 0x28) = 2;
        }
    } else if (iVar1 == 2) {
        if (*(u32 *)(unaff_r14 + 0x48) < *(u32 *)(unaff_r14 + 0x7c)) {
            asr_sub_10fc96(unaff_r14, unused_a1, a2, a3);
        }
        asr_sub_10fe04(unaff_r14);
    }
    if (*(int *)(unaff_r14 + 0x28) != 1) {
        uVar2 = 0;
        do {
            if ((*(char *)(*(int *)(unaff_r14 + 0x6c) + uVar2) != '\0') &&
                (*(int *)(*(int *)(*(int *)(uVar2 * 8 + *(int *)(unaff_r14 + 0xc)) + 0x40) +
                          *(int *)(uVar2 * 8 + *(int *)(unaff_r14 + 0xc) + 4) * 4) ==
                 *(int *)(*(int *)(*(int *)(unaff_r14 + 0xc) + uVar2 * 8) + 0x3c))) {
                return 0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 <= *(u32 *)(unaff_r14 + 0x78));
    }
    return 1;
}

/*
 * asr_sub_110158  0x8c110158
 * area name: in the asr library code range
 */
u32 asr_sub_110158(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 =
        (*(code *)(&asr_sub_120580))(a0, a1, 4, 1, (&DATA_8c11005c), (&DATA_8c10fec4), (&asr_sub_10f8e6), (int)0x94);
    return uVar1;
}

/*
 * asr_sub_11033c  0x8c11033c
 * area name: in the asr library code range
 * called by: asr_sub_1103ea, asr_sub_110414
 */
int asr_sub_11033c(int *a0, u32 a1) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;

    iVar1 = (int)0xc4;
    iVar2 = *a0;
    uVar4 = 0;
    uVar3 = *(int *)(iVar1 + iVar2) * 8 + *(int *)(iVar1 + -0x38 + iVar2) * *(int *)(iVar1 + -0x3c + iVar2) * 2 +
            (*(int *)(iVar1 + -0x30 + iVar2) + 1) * 2 + *(int *)(iVar1 + -0x2c + iVar2) * 2 +
            (*(int *)(iVar1 + -0x28 + iVar2) + 1) * 2 + *(int *)(iVar1 + -0x24 + iVar2) * 4 + (int)0xd4;
    iVar2 = iVar2 + uVar3 + ((uVar3 * 2 ^ uVar3) & 3);
    if (a1 != 0) {
        do {
            uVar3 = asr_sub_1104d2(a0, iVar2);
            uVar4 = uVar4 + 1;
            iVar2 = iVar2 + uVar3 + ((uVar3 << 1 ^ uVar3) & 3);
        } while (uVar4 < a1);
    }
    return iVar2;
}

/*
 * asr_sub_11034c  0x8c11034c
 * area name: in the asr library code range
 */
int asr_sub_11034c(void) {
    int in_r0;
    int iVar1;
    u32 uVar2;
    u32 unaff_r10;
    int *unaff_r11;
    u32 uVar3;

    iVar1 = *unaff_r11;
    uVar3 = 0;
    uVar2 = *(int *)(in_r0 + iVar1) * 8 + *(int *)(in_r0 + -0x38 + iVar1) * *(int *)(in_r0 + -0x3c + iVar1) * 2 +
            (*(int *)(in_r0 + -0x30 + iVar1) + 1) * 2 + *(int *)(in_r0 + -0x2c + iVar1) * 2 +
            (*(int *)(in_r0 + -0x28 + iVar1) + 1) * 2 + *(int *)(in_r0 + -0x24 + iVar1) * 4 + (int)0xd4;
    iVar1 = iVar1 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
    if (unaff_r10 != 0) {
        do {
            uVar2 = asr_sub_1104d2(unaff_r11, iVar1);
            uVar3 = uVar3 + 1;
            iVar1 = iVar1 + uVar2 + ((uVar2 << 1 ^ uVar2) & 3);
        } while (uVar3 < unaff_r10);
    }
    return iVar1;
}

/*
 * asr_sub_1103ea  0x8c1103ea
 * area name: in the asr library code range
 */
u32 asr_sub_1103ea(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = *a0;
    iVar1 = asr_sub_11033c(a0, *(u32 *)((int)0x88 + *a0));
    return *(u32 *)(*(int *)(iVar2 + 0xb8) * 4 + iVar1);
}

/*
 * asr_sub_110414  0x8c110414
 * area name: in the asr library code range
 * called by: asr_sub_110460
 */
int asr_sub_110414(int *a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;

    iVar3 = *a0;
    iVar1 = asr_sub_11033c(a0, *(u32 *)(0x88 + iVar3));
    uVar2 = (iVar1 + *(int *)(*(int *)(0xb8 + iVar3) * 4 + iVar1) * 2) - iVar3;
    return iVar3 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
}

/*
 * asr_sub_110460  0x8c110460
 * area name: in the asr library code range
 */
int asr_sub_110460(u32 a0) {
    int a5;
    int iVar1;

    a5 = asr_sub_110414(a0);
    iVar1 = asr_sub_1104b2(a0, a5);
    return iVar1 + a5;
}

/*
 * asr_sub_1104b2  0x8c1104b2
 * area name: in the asr library code range
 * called by: asr_sub_110460
 */
int asr_sub_1104b2(int *a0, int *a1) {
    return a1[1] * 2 + 8 + (*(int *)((int)0xc8 + *a0) + 1) * 2 + (*a1 + 1) * 2;
}

/*
 * asr_sub_1104d2  0x8c1104d2
 * area name: in the asr library code range
 * called by: asr_sub_11033c, asr_sub_11034c
 */
u32 asr_sub_1104d2(int *a0, int *a1) {
    u32 uVar1;
    int iVar2;

    iVar2 = a1[3];
    if (*(short *)((int)0xd0 + *a0) == 0) {
        uVar1 = a1[5];
    } else {
        uVar1 = a1[5] + 1U >> 1;
    }
    uVar1 = *a1 * a1[1] * 4 + a1[1] * a1[2] * 4 + *a1 * iVar2 * 4 + iVar2 * 4 + iVar2 * uVar1 + 0x18;
    if (*(short *)((int)0xd2 + *a0) != 0) {
        uVar1 = uVar1 + ((uVar1 * 2 ^ uVar1) & 3) + a1[3] * a1[3] * 4;
    }
    return uVar1;
}

/*
 * memmove_wrap_11066a  0x8c11066a
 * only calls memmove
 * called by: asr_sub_11e534
 */
u32 memmove_wrap_11066a(void) {
    u32 uVar1;

    uVar1 = memmove((&DATA_8c127b20), (int)0xd4);
    return uVar1;
}

/*
 * asr_sub_110680  0x8c110680
 * area name: in the asr library code range
 */
u32 asr_sub_110680(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    float *pfVar1;
    float *pfVar2;
    int iVar3;
    u32 uVar4;
    u64 uVar5;
    char cVar6;

    cVar6 = '\0';
    if ((*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01') || (*(u32 *)(a0 + 0x48) < *(u32 *)(a0 + 0x2c))) {
        uVar4 = (*(u32 **)(a0 + 0xc))[1];
        pfVar1 = (float *)mring_read_advance(**(u32 **)(a0 + 0xc), uVar4, unused_a2, a3);
        if (pfVar1 == NULL) {
            if (*(char *)(a0 + 0x28) != '\0') {
                iVar3 = *(int *)(a0 + 0x48);
                while (iVar3 != 0) {
                    cVar6 = '\0';
                    iVar3 = mring_write_advance(**(u32 **)(a0 + 0x10));
                    if (iVar3 == 0)
                        break;
                    if (cVar6 == '\0') {
                        uVar5 = CONCAT44(*(u32 *)(a0 + 0x44), *(u32 *)(a0 + 0x34));
                    } else {
                        uVar5 = *(u64 *)(a0 + 0x44);
                    }
                    *(bool *)iVar3 = (float)uVar5 < (float)((u64)uVar5 >> 0x20);
                    iVar3 = *(int *)(a0 + 0x48) + -1;
                    *(int *)(a0 + 0x48) = iVar3;
                }
                if (*(int *)(a0 + 0x48) == 0) {
                    *(u8 *)(a0 + 0x28) = 0;
                }
                return (int)*(char *)(a0 + 0x28);
            }
        } else {
            if (cVar6 == '\0') {
                uVar5 = CONCAT44(*(u32 *)(a0 + 0x44), **(u32 **)(a0 + 0x3c));
            } else {
                uVar5 = *(u64 *)(a0 + 0x44);
            }
            *(float *)(a0 + 0x44) = (float)((u64)uVar5 >> 0x20) - (float)uVar5;
            pfVar2 = *(float **)(a0 + 0x3c);
            *(float **)(a0 + 0x3c) = pfVar2 + 1;
            *pfVar2 = *pfVar1;
            *(float *)(a0 + 0x44) = *(float *)(a0 + 0x44) + *pfVar1;
            if (*(int *)(a0 + 0x3c) == *(int *)(a0 + 0x40)) {
                *(u32 *)(a0 + 0x3c) = *(u32 *)(a0 + 0x38);
            }
            if (*(int *)(a0 + 0x48) == *(int *)(a0 + 0x2c)) {
                cVar6 = '\0';
                uVar4 = mring_write_advance(**(u32 **)(a0 + 0x10));
                if (cVar6 == '\0') {
                    uVar5 = CONCAT44(*(u32 *)(a0 + 0x44), *(u32 *)(a0 + 0x34));
                } else {
                    uVar5 = *(u64 *)(a0 + 0x44);
                }
                *(bool *)uVar4 = (float)uVar5 < (float)((u64)uVar5 >> 0x20);
            } else {
                *(int *)(a0 + 0x48) = *(int *)(a0 + 0x48) + 1;
            }
        }
    }
    iVar3 = **(int **)(a0 + 0xc);
    return *(int *)((*(int **)(a0 + 0xc))[1] * 4 + *(int *)(iVar3 + 0x40)) == *(int *)(iVar3 + 0x3c) ^ 1;
}

/*
 * asr_sub_1107b0  0x8c1107b0
 * area name: in the asr library code range
 */
u32 asr_sub_1107b0(int *a0, u32 a1, u32 a2, int *a3) {
    u32 uVar1;
    int a5;

    uVar1 = a1 & 0xff;
    if (uVar1 == 1) {
        *(u8 *)(a0 + 10) = 1;
    } else if (uVar1 == (int)0xf8) {
        *a3 = a0[0x12];
    } else {
        if (uVar1 != (int)0xff) {
            return 0;
        }
        a5 = a0[0xe];
        (**(code **)(*a0 + 0x18))(*a0, a5, a2, a3);
        asr_sub_120668(a0, a5, a2, a3);
    }
    return 1;
}

/*
 * asr_sub_110818  0x8c110818
 * area name: in the asr library code range
 */
u32 asr_sub_110818(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int *unaff_r14;
    float extraout_fr0;
    float extraout_fr0_00;
    float extraout_fr0_01;
    char cVar2;

    iVar1 = *unaff_r14;
    asr_state_has_event(a0, 1, a2);
    unaff_r14[0xb] = (int)extraout_fr0 & 0xffff;
    asr_state_has_event(unaff_r14, 2, a2);
    unaff_r14[0xc] = (int)extraout_fr0_00 & 0xffff;
    asr_state_has_event(unaff_r14, 3, a2);
    cVar2 = '\0';
    unaff_r14[0xd] = (int)(float)(int)(short)(int)extraout_fr0_01;
    *(u16 *)(*(int *)unaff_r14[4] + 0xc) = 1;
    iVar1 = (**(code **)(iVar1 + 0x14))(iVar1, unaff_r14[0xc], 4, a3);
    unaff_r14[0xe] = iVar1;
    unaff_r14[0xf] = iVar1;
    unaff_r14[0x10] = unaff_r14[0xc] * 4 + unaff_r14[0xe];
    if (cVar2 == '\0') {
        unaff_r14[0x11] = 0;
    } else {
        unaff_r14[0x11] = 0;
        unaff_r14[0x12] = 0x41700000;
    }
    unaff_r14[0x12] = 0;
    return 0;
}

/*
 * asr_sub_1108b0  0x8c1108b0
 * area name: in the asr library code range
 */
u32 asr_sub_1108b0(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_sub_120580))(a0, a1, 1, 1, (&asr_sub_110680), (&DATA_8c110810), (&asr_sub_1107b0), 0x4c);
    return uVar1;
}

/*
 * asr_sub_110908  0x8c110908
 * area name: in the asr library code range
 */
u32 asr_sub_110908(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3, int ain1) {
    u8 bVar1;
    u32 uVar2;
    float *pfVar3;
    int iVar4;
    int *piVar5;
    u32 ar5_00;
    int iVar6;
    u32 ar6_00;
    int unaff_r14;
    float extraout_fr3;
    float fVar7;
    float fVar8;
    u64 uVar9;
    char cVar10;

    cVar10 = '\0';
    bVar1 = *(u8 *)(unaff_r14 + 8);
    iVar4 = *(int *)(unaff_r14 + 0xc);
    if (*(char *)(**(int **)(unaff_r14 + 0x10) + ain1) != '\x01') {
        ar6_00 = *(u32 *)(unaff_r14 + 0x28);
        ar5_00 = (u32) * (u8 *)(unaff_r14 + 8);
        uVar9 = 0;
        uVar2 = asr_sub_112074(*(u32 *)(unaff_r14 + 0xc), ar5_00, ar6_00, a3);
        if ((uVar2 & 0xff) == 0) {
            return 0;
        }
        if (cVar10 == '\0') {
            fVar8 = 1.0;
        } else {
            fVar8 = -NAN;
        }
        uVar2 = 0;
        fVar7 = extraout_fr3;
        if (*(char *)(unaff_r14 + 8) != '\0') {
            do {
                if (*(int *)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4) != 0) {
                    if (cVar10 == '\0') {
                        fVar7 = **(float **)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4);
                    }
                    cVar10 = '\0';
                    uVar9 = CONCAT44((float)((u64)uVar9 >> 0x20) + fVar8, (float)uVar9 + fVar7);
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(u8 *)(unaff_r14 + 8));
        }
        pfVar3 = (float *)mring_write_advance(**(u32 **)(unaff_r14 + 0x10));
        *pfVar3 = (float)uVar9 / (float)((u64)uVar9 >> 0x20);
    }
    piVar5 = *(int **)(unaff_r14 + 0xc);
    while (true) {
        if ((int *)((u32)bVar1 * 8 + iVar4) <= piVar5) {
            return 1;
        }
        iVar6 = *piVar5;
        if ((*(int *)(*(int *)(iVar6 + 0x2c) + piVar5[1] * 4) != 0) &&
            (*(int *)(*(int *)(iVar6 + 0x40) + piVar5[1] * 4) == *(int *)(iVar6 + 0x3c)))
            break;
        piVar5 = piVar5 + 2;
    }
    return 0;
}

/*
 * asr_sub_1109d2  0x8c1109d2
 * area name: in the asr library code range
 */
u32 asr_sub_1109d2(int *a0, u32 a1, u32 a2, u32 a3) {
    int a5;

    if ((a1 & 0xff) == (int)0xff) {
        a5 = a0[10];
        (**(code **)(*a0 + 0x18))(*a0, a5, a2, a3);
        asr_sub_120668(a0, a5, a2, a3);
        return 1;
    }
    return 0;
}

/*
 * asr_sub_110a30  0x8c110a30
 * area name: in the asr library code range
 */
u32 asr_sub_110a30(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    *(u16 *)(*(int *)a0[4] + 0xc) = 4;
    iVar1 = (**(code **)(*a0 + 0x10))(*a0, (u32) * (u8 *)(a0 + 2) << 2, a2, a3);
    a0[10] = iVar1;
    return 0;
}

/*
 * asr_sub_110a5c  0x8c110a5c
 * area name: in the asr library code range
 */
u32 asr_sub_110a5c(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_sub_120580))(a0, a1, 3, 1, (&DATA_8c110900), (&asr_sub_110a30), (&asr_sub_1109d2), 0x2c);
    return uVar1;
}

/*
 * asr_sub_110a90  0x8c110a90
 * area name: in the asr library code range
 * called by: asr_sub_110aea
 */
u64 *asr_sub_110a90(int a0, int a1, float *a2) {
    u64 *puVar1;
    int iVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    u32 uVar6;
    float fVar7;

    uVar6 = 0;
    puVar1 = &g_8c110bd0;
    if (*(int *)(a0 + 0x28) != 0) {
        do {
            iVar2 = uVar6 * 4;
            *a2 = 10.0;
            pfVar3 = *(float **)(*(int *)(a0 + 0x2c) + iVar2);
            puVar1 = *(u64 **)(a0 + 0x30);
            pfVar5 = pfVar3 + *(int *)(*(int *)(a0 + 0x34) + iVar2);
            pfVar4 = (float *)(*(int *)((int)puVar1 + iVar2) * 4 + a1);
            for (; pfVar3 < pfVar5; pfVar3 = pfVar3 + 1) {
                fVar7 = *pfVar4;
                pfVar4 = pfVar4 + 1;
                *a2 = fVar7 * *pfVar3 + *a2;
            }
            uVar6 = uVar6 + 1;
            a2 = a2 + 1;
        } while (uVar6 < *(u32 *)(a0 + 0x28));
    }
    return puVar1;
}

/*
 * asr_sub_110aea  0x8c110aea
 * area name: in the asr library code range
 */
u32 asr_sub_110aea(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    if (*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01') {
        uVar2 = (*(u32 **)(a0 + 0xc))[1];
        iVar1 = mring_read_advance(**(u32 **)(a0 + 0xc), uVar2, unused_a2, a3);
        if (iVar1 != 0) {
            uVar2 = mring_write_advance(**(u32 **)(a0 + 0x10));
            asr_sub_110a90(a0, iVar1, uVar2);
        }
    }
    iVar1 = **(int **)(a0 + 0xc);
    return *(int *)((*(int **)(a0 + 0xc))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c) ^ 1;
}

/*
 * asr_sub_110b58  0x8c110b58
 * area name: in the asr library code range
 * called by: asr_sub_110bec
 */
u32 asr_sub_110b58(int *a0) {
    u32 in_r0;
    u32 uVar1;
    int iVar2;

    if (a0[0xb] != 0) {
        uVar1 = 0;
        iVar2 = *a0;
        if (a0[10] != 0) {
            do {
                (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)(a0[0xb] + uVar1 * 4));
                uVar1 = uVar1 + 1;
            } while (uVar1 < (u32)a0[10]);
        }
        (**(code **)(iVar2 + 0x18))(iVar2, a0[0xb]);
        (**(code **)(iVar2 + 0x18))(iVar2, a0[0xc]);
        in_r0 = (**(code **)(iVar2 + 0x18))(iVar2, a0[0xd]);
        a0[0xb] = 0;
    }
    return in_r0;
}

/*
 * asr_sub_110b5c  0x8c110b5c
 * area name: in the asr library code range
 */
u32 asr_sub_110b5c(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;
    int a4;
    int *unaff_r14;

    if (unaff_r14[0xb] != 0) {
        uVar1 = 0;
        a4 = *unaff_r14;
        if (unaff_r14[10] != 0) {
            do {
                (**(code **)(a4 + 0x18))(a4, *(u32 *)(unaff_r14[0xb] + uVar1 * 4), a2, a3);
                uVar1 = uVar1 + 1;
            } while (uVar1 < (u32)unaff_r14[10]);
        }
        (**(code **)(a4 + 0x18))(a4, unaff_r14[0xb], a2, a3);
        (**(code **)(a4 + 0x18))(a4, unaff_r14[0xc], a2, a3);
        in_r0 = (**(code **)(a4 + 0x18))(a4, unaff_r14[0xd], a2, a3);
        unaff_r14[0xb] = 0;
    }
    return in_r0;
}

/*
 * asr_sub_110bec  0x8c110bec
 * area name: in the asr library code range
 */
u32 asr_sub_110bec(u32 unused_a0, u32 a1, int a2, u32 *a3, int ain0) {
    u32 uVar1;
    int a6;
    u32 *a7;
    u32 uVar2;
    u32 unaff_r14;
    char in_T;

    uVar2 = 1;
    if (in_T == '\x01') {
        a6 = a2;
        a7 = a3;
        asr_sub_110b58(unaff_r14);
        uVar1 = (**(code **)(a2 + 0x3c))(a2, a1, a6, a7);
        if (*a3 < uVar1) {
            (**(code **)(a2 + 0x6c))(a2, a1, a6, a7);
            uVar2 = asr_sub_110c80(unaff_r14, a1, a6, a7);
            uVar2 = (u32)((uVar2 & 0xff) == 0);
            *a3 = *a3 + 1;
        }
    } else if (ain0 == 0xff) {
        asr_sub_110b58(unaff_r14);
        asr_sub_120668(unaff_r14, a1, a2, a3);
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_sub_110c80  0x8c110c80
 * area name: in the asr library code range
 * called by: asr_sub_110bec
 * decompiler: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x8c11105a
 */
u32 asr_sub_110c80(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    float *a5;
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    float *pfVar6;
    int iVar7;
    float *pfVar8;
    u32 uVar9;
    int a4;
    float fVar10;
    u64 in_dr0;
    double dVar11;
    float fVar12;
    float fVar13;
    float fVar15;
    double dVar14;
    u64 in_dr4;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    char cVar21;

    fVar13 = (float)((u64)in_dr0 >> 0x20);
    fVar16 = (float)((u64)in_dr4 >> 0x20);
    a4 = *a0;
    asr_state_has_event(a0, 2, a2);
    fVar18 = fVar13;
    asr_state_has_event(a0, 3, a2);
    a0[0xe] = (int)fVar16;
    uVar3 = ((int)fVar13 & 0xffffU) >> 1;
    uVar9 = uVar3 + 1;
    iVar5 = uVar9 * 4;
    iVar1 = a4;
    a5 = (float *)(**(code **)(a4 + 0x10))(a4, iVar5, a2, a3);
    if (a5 == NULL) {
    LAB_8c1110d4:
        asr_fsm_set_result(a0, 100, a2, a3);
    } else {
        fVar10 = fVar18 / (float)uVar3;
        fVar19 = 1000.0;
        fVar17 = fVar18;
        if (1000.0 < fVar18) {
            fVar17 = 1000.0;
        }
        fVar20 = 0.0;
        pfVar6 = a5;
        if (0.0 < fVar17) {
            do {
                *pfVar6 = fVar20 / (fVar16 * 100.0);
                fVar20 = fVar20 + fVar10;
                pfVar6 = pfVar6 + 1;
            } while (fVar20 < fVar17);
        }
        fVar15 = fVar10 / 2.0 + fVar18;
        fVar17 = 5.0;
        for (; fVar20 < fVar15; fVar20 = fVar20 + fVar10) {
            cVar21 = '\0';
            fVar12 = fVar16 * 1000.0;
            thunk_FUN_8c013dfc();
            if (cVar21 == '\0') {
                fVar12 = 0.69314694;
            }
            *pfVar6 = fVar17 * (fVar13 / fVar12) + 10.0;
            pfVar6 = pfVar6 + 1;
            fVar13 = fVar17;
        }
        if (fVar19 <= fVar18) {
            fVar13 = 4.4765625;
            thunk_FUN_8c013dfc();
            dVar11 = (double)((fVar13 * fVar17) / 0.69314694 + 10.0) + -0.95;
            dVar14 = dVar11;
            if (2147483648.0 <= dVar11) {
                dVar11 = dVar11 - 4294967296.0;
                dVar14 = dVar11;
            }
        } else {
            dVar14 = (double)fVar18 / 100.0 + -0.95;
            dVar11 = 2147483648.0;
            if (2147483648.0 <= dVar14) {
                dVar11 = 4294967296.0;
                dVar14 = dVar14 - 4294967296.0;
            }
        }
        fVar13 = (float)((u64)dVar11 >> 0x20);
        a0[10] = (int)dVar14;
        asr_state_has_event(a0, 4, a2);
        if (a0[10] == ((int)fVar13 & 0xffffU)) {
            iVar1 = (**(code **)(a4 + 0x14))(a4, a0[10], 4, a3);
            a0[0xb] = iVar1;
            iVar1 = (**(code **)(a4 + 0x14))(a4, a0[10], 4, a3);
            a0[0xc] = iVar1;
            iVar1 = (**(code **)(a4 + 0x14))(a4, a0[10], 4, a3);
            a0[0xd] = iVar1;
            a2 = 4;
            pfVar6 = (float *)a0[10];
            iVar1 = (**(code **)(a4 + 0x14))(a4, pfVar6, 4, a3);
            if ((((a0[0xb] != 0) && (a0[0xc] != 0)) && (a0[0xd] != 0)) && (iVar1 != 0)) {
                uVar3 = 0;
                if (a0[10] != 0) {
                    do {
                        iVar5 = uVar3 * 4;
                        *(u32 *)(a0[0xd] + iVar5) = 0;
                        *(u32 *)(a0[0xc] + iVar5) = 0xffffffff;
                        fVar13 = (float)(int)(uVar3 + 1);
                        if (fVar13 < 0.0) {
                            fVar13 = fVar13 + 4.2949673e+09;
                        }
                        if (uVar3 < 10) {
                            *(float *)(iVar1 + uVar3 * 4) = fVar13 * 100.0;
                        } else {
                            fVar18 = -2.0;
                            thunk_FUN_8c014064();
                            *(float *)(iVar1 + uVar3 * 4) = fVar18 * fVar19;
                        }
                        uVar4 = 1;
                        iVar5 = uVar3 * 4;
                        if (1 < uVar9) {
                            do {
                                if ((a5[uVar4] <= fVar13 + -1.0) || (fVar13 + 1.0 <= a5[uVar4])) {
                                    iVar7 = 0;
                                } else {
                                    iVar7 = 1;
                                }
                                *(int *)(a0[0xd] + iVar5) = *(int *)(a0[0xd] + iVar5) + iVar7;
                                if ((iVar7 != 0) && (*(int *)(a0[0xc] + iVar5) == -1)) {
                                    *(u32 *)(a0[0xc] + iVar5) = uVar4;
                                }
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < uVar9);
                        }
                        iVar7 = a0[0xb];
                        a2 = 4;
                        cVar21 = '\0';
                        uVar2 = (**(code **)(a4 + 0x14))(a4, *(u32 *)(a0[0xd] + iVar5), 4, a3);
                        *(u32 *)(iVar7 + iVar5) = uVar2;
                        if (*(int *)(a0[0xb] + iVar5) == 0)
                            goto LAB_8c1110d4;
                        pfVar6 = *(float **)(a0[0xb] + iVar5);
                        uVar4 = 0;
                        pfVar8 = pfVar6;
                        if (*(int *)(a0[0xd] + iVar5) != 0) {
                            do {
                                iVar7 = *(int *)(a0[0xc] + iVar5) + uVar4;
                                if (cVar21 == '\0') {
                                    fVar18 = a5[iVar7];
                                } else {
                                    fVar18 = (float)((u64) * (u64 *)(a5 + iVar7) >> 0x20);
                                }
                                cVar21 = '\0';
                                pfVar6 = pfVar8 + 1;
                                if (fVar13 <= fVar18) {
                                    fVar18 = fVar13 - fVar18;
                                } else {
                                    fVar18 = fVar18 - fVar13;
                                }
                                uVar4 = uVar4 + 1;
                                *pfVar8 = fVar18 + 1.0;
                                pfVar8 = pfVar6;
                            } while (uVar4 < *(u32 *)(a0[0xd] + iVar5));
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < (u32)a0[10]);
                }
                (**(code **)(a4 + 0x18))(a4, iVar1, a2, a3);
                (**(code **)(a4 + 0x18))(a4, a5, a2, a3);
                return 0;
            }
            asr_fsm_set_result(a0, 100, a2, a3);
        }
    }
    return 1;
}

/*
 * asr_sub_11116e  0x8c11116e
 * area name: in the asr library code range
 */
u32 asr_sub_11116e(int a0, u32 unused_a1, u32 a2) {
    float extraout_fr0;

    asr_state_has_event(a0, 4, a2);
    *(short *)(**(int **)(a0 + 0x10) + 0xc) = (short)((int)extraout_fr0 << 2);
    return 0;
}

/*
 * asr_sub_1111a0  0x8c1111a0
 * area name: in the asr library code range
 */
u32 asr_sub_1111a0(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_sub_120580))(a0, a1, 1, 1, (&asr_sub_110aea), (&asr_sub_11116e), (&DATA_8c110be0), 0x3c);
    return uVar1;
}

/*
 * asr_sub_111208  0x8c111208
 * area name: in the asr library code range
 * called by: asr_sub_1112e2, asr_sub_1112ee, asr_sub_111e72, asr_sub_111fc6, asr_sub_112074, asr_sub_112170,
 * asr_sub_11217e, mring_read_advance
 */
int asr_sub_111208(int *a0, int a1, int a2) {
    int iVar1;
    int a5;
    int ar7_00;
    int iVar2;
    int iVar3;
    int iVar4;
    char cStack_24;

    cStack_24 = '\0';
    iVar4 = a1 * 4;
    iVar1 = 0;
    a5 = a0[0xe];
joined_r0x8c111238:
    do {
        if (a5 == 0) {
            return (int)cStack_24;
        }
        ar7_00 = *(int *)(*(int *)(a5 + 8) + iVar4);
        if (-1 < ar7_00) {
            iVar2 = ar7_00;
            if ((a2 == 0) && (ar7_00 == 0)) {
                iVar2 = -1;
            }
            *(int *)(*(int *)(a5 + 8) + iVar4) = iVar2 - a2;
            if (iVar2 - a2 < 0) {
                iVar3 = *(int *)(a5 + 0xc);
                iVar2 = *(int *)(a5 + 4) + -1;
                *(int *)(a5 + 4) = iVar2;
                if (iVar2 == 0) {
                    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
                }
                cStack_24 = '\x01';
                iVar2 = *a0;
                asr_sub_1209ec(iVar3, *(u32 *)(a0[0xd] + iVar4), iVar2, ar7_00);
                if (*(int *)(a5 + 4) == 0) {
                    iVar3 = *(int *)(a5 + 0x10);
                    if (iVar1 == 0) {
                        a0[0xe] = iVar3;
                    } else {
                        *(int *)(iVar1 + 0x10) = iVar3;
                    }
                    (**(code **)(*a0 + 0x18))(*a0, *(u32 *)(a5 + 8), iVar2, ar7_00);
                    (**(code **)(*a0 + 0x18))(*a0, a5, iVar2, ar7_00);
                    a5 = iVar3;
                    goto joined_r0x8c111238;
                }
            }
        }
        iVar1 = a5;
        a5 = *(int *)(a5 + 0x10);
    } while (true);
}

/*
 * asr_sub_1112e2  0x8c1112e2
 * area name: in the asr library code range
 */
u32 asr_sub_1112e2(int a0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int *piVar4;

    piVar4 = *(int **)(a0 + 0xc);
    uVar2 = 0;
    uVar3 = 0;
    if (*(char *)(a0 + 8) != '\0') {
        do {
            if ((*(int *)(*piVar4 + 0x38) != 0) && (*(int *)(*(int *)(*piVar4 + 0x2c) + piVar4[1] * 4) != 0)) {
                uVar1 = asr_sub_111208(*piVar4, piVar4[1], 0);
                uVar2 = uVar2 | uVar1;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 2;
        } while (uVar3 < *(u8 *)(a0 + 8));
    }
    return uVar2;
}

/*
 * asr_sub_1112ee  0x8c1112ee
 * area name: in the asr library code range
 */
u32 asr_sub_1112ee(u32 a0) {
    u32 uVar1;
    int unaff_r12;
    u32 uVar2;
    int *piVar3;

    piVar3 = *(int **)(unaff_r12 + 0xc);
    uVar2 = a0;
    if (a0 < *(u8 *)(unaff_r12 + 8)) {
        do {
            if ((*(int *)(*piVar3 + 0x38) != 0) && (*(int *)(*(int *)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0)) {
                uVar1 = asr_sub_111208(*piVar3, piVar3[1], 0);
                a0 = a0 | uVar1;
            }
            uVar2 = uVar2 + 1;
            piVar3 = piVar3 + 2;
        } while (uVar2 < *(u8 *)(unaff_r12 + 8));
    }
    return a0;
}

/*
 * asr_sub_111342  0x8c111342
 * area name: in the asr library code range
 * called by: asr_sub_1113d0, asr_sub_11189a, asr_sub_111e72
 */
int asr_sub_111342(int a0, u32 unused_a1, u32 a2) {
    int in_r0;
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
    if (*(int *)(a0 + 0x14) != 0) {
        do {
            in_r0 = uVar2 * 4;
            if (*(int *)(in_r0 + *(int *)(a0 + 0x40)) != *(int *)(a0 + 0x3c)) {
                in_r0 = *(int *)(a0 + 0x2c);
                iVar1 = uVar2 * 4;
                if (*(int *)(a0 + 0x24) == *(int *)(in_r0 + iVar1)) {
                    *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
                    break;
                }
                if (*(u32 *)(a0 + 0x24) < *(u32 *)(a0 + 0x28)) {
                    in_r0 = *(int *)(a0 + 0x2c);
                    if ((*(u32 *)(in_r0 + iVar1) < *(u32 *)(a0 + 0x28)) &&
                        (*(u32 *)(a0 + 0x24) < *(u32 *)(in_r0 + iVar1))) {
                        in_r0 = *(int *)(a0 + 0x2c);
                        *(u32 *)(a0 + 0x28) = *(u32 *)(in_r0 + iVar1);
                    }
                } else {
                    in_r0 = *(int *)(a0 + 0x2c);
                    if ((*(u32 *)(in_r0 + iVar1) < *(u32 *)(a0 + 0x28)) ||
                        (*(u32 *)(a0 + 0x24) < *(u32 *)(in_r0 + iVar1))) {
                        in_r0 = *(int *)(a0 + 0x2c);
                        *(u32 *)(a0 + 0x28) = *(u32 *)(in_r0 + iVar1);
                    }
                }
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(u32 *)(a0 + 0x14));
    }
    if (uVar2 == *(u32 *)(a0 + 0x14)) {
        in_r0 = 0x30;
        *(u8 *)(a0 + 0x30) = 0;
    }
    return in_r0;
}

/*
 * asr_sub_1113d0  0x8c1113d0
 * area name: in the asr library code range
 * called by: asr_sub_10ea24, asr_sub_10ea62, asr_sub_10f8e6, asr_sub_11d432, asr_sub_120148, asr_sub_1209ec,
 * asr_sub_120b1a
 */
u32 asr_sub_1113d0(int *a0, u32 a1, int a2, int a3) {
    bool bVar1;
    int *piVar2;
    int *extraout_r2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    int iVar8;
    int iVar9;
    u32 uVar10;

    uVar7 = 1;
    uVar10 = 1;
    iVar8 = a2 * 4;
    if ((char)a1 == '\x01') {
        a0[6] = a0[5];
        a0[0xf] = 0;
        uVar3 = 0;
        if (a0[5] != 0) {
            do {
                iVar8 = uVar3 * 4;
                uVar3 = uVar3 + 1;
                *(int *)(a0[0xb] + iVar8) = a0[9];
                *(u32 *)(a0[0x10] + iVar8) = 0;
            } while (uVar3 < (u32)a0[5]);
        }
    } else if ((char)a1 == '\x02') {
        a0[6] = a0[5];
        a0[0xf] = 0;
        uVar10 = 0;
        if (a0[5] != 0) {
            do {
                iVar8 = uVar10 * 4;
                uVar10 = uVar10 + 1;
                *(int *)(a0[0xb] + iVar8) = a0[9];
                *(u32 *)(a0[0x10] + iVar8) = 0;
            } while (uVar10 < (u32)a0[5]);
        }
        uVar10 = asr_sub_1117e4(a0, (u32) * (u16 *)((int)a0 + 0xe), 1);
    } else if ((char)a1 == '\x03') {
        a0[6] = a0[5];
        a0[0xf] = 0;
        uVar10 = 0;
        if (a0[5] != 0) {
            do {
                iVar8 = uVar10 * 4;
                uVar10 = uVar10 + 1;
                *(int *)(a0[0xb] + iVar8) = a0[9];
                *(u32 *)(a0[0x10] + iVar8) = 0;
            } while (uVar10 < (u32)a0[5]);
        }
        uVar10 = asr_sub_1117e4(a0, a2, 1);
    } else if ((char)a1 == '\x04') {
        uVar3 = 0;
        if (a0[5] != 0) {
            do {
                iVar8 = uVar3 * 4;
                uVar3 = uVar3 + 1;
                *(int *)(a0[0xb] + iVar8) = a0[9];
                *(int *)(a0[0x10] + iVar8) = a0[0xf];
            } while (uVar3 < (u32)a0[5]);
        }
        a0[10] = a0[9];
        *(u8 *)(a0 + 0xc) = 0;
        a0[6] = 0;
        uVar3 = 0;
        if (a0[5] != 0) {
            do {
                uVar4 = uVar3 + 1;
                *(u32 *)(uVar3 * 4 + a0[0xb]) = 0;
                uVar3 = uVar4;
            } while (uVar4 < (u32)a0[5]);
        }
        iVar8 = a0[0xe];
        while (iVar8 != 0) {
            if (*(int *)(iVar8 + 0xc) != a2) {
                uVar3 = asr_sub_120948(*(u32 *)(iVar8 + 0xc), *a0);
                uVar10 = uVar10 | uVar3;
            }
            iVar9 = *(int *)(iVar8 + 0x10);
            (**(code **)(*a0 + 0x18))(*a0, iVar8, uVar7, a3);
            iVar8 = iVar9;
        }
        a0[0xe] = 0;
    } else if ((char)a1 == '\x05') {
        if (*(int *)(a0[0xb] + iVar8) == 0) {
            *(int *)(a0[0xb] + iVar8) = a0[9];
            *(int *)(a0[0x10] + iVar8) = a0[0xf];
            if (a0[6] == 0) {
                a0[10] = a0[9];
            }
            a0[6] = a0[6] + 1;
        }
    } else if ((char)a1 == '\x06') {
        if ((*(int *)(a0[0xb] + iVar8) != 0) && (a0[0xe] == 0)) {
            iVar5 = *(int *)(a0[0xb] + iVar8);
            *(int *)(a0[0xb] + iVar8) = 0;
            iVar9 = a0[6];
            a0[6] = iVar9 + -1;
            if (iVar9 + -1 == 0) {
                a0[10] = a0[9];
            } else if (iVar5 == a0[10]) {
                asr_sub_111342(a0, iVar5, 1);
            }
            *(int *)(a0[0x10] + iVar8) = a0[0xf];
        }
    } else if ((char)a1 == '\a') {
        if (*(int *)(a0[0xb] + iVar8) == 0) {
            *(int *)(a0[0xb] + iVar8) = a0[9];
            *(int *)(a0[0x10] + iVar8) = a0[0xf];
            a0[6] = a0[6] + 1;
        }
        uVar10 = asr_sub_11189a(a0, a2, a3);
    } else if ((char)a1 == -8) {
        if ((*(char *)((int)a0 + 0x31) != '\0') && (a0[6] != 0)) {
            bVar1 = false;
            iVar9 = a0[0xe];
            iVar8 = 0;
            while (iVar5 = iVar9, iVar5 != 0) {
                if (*(int *)(iVar5 + 0xc) == a2) {
                    bVar1 = true;
                }
                iVar8 = iVar5;
                iVar9 = *(int *)(iVar5 + 0x10);
            }
            if (!bVar1) {
                *(int *)(a2 + 4) = *(int *)(a2 + 4) + 1;
                iVar9 = a3;
                iVar5 = (**(code **)(*a0 + 0x10))(*a0, 0x14, 1, a3);
                uVar7 = (**(code **)(*a0 + 0x10))(*a0, a0[5] << 2, uVar7, iVar9);
                uVar6 = 0x80000000;
                *(u32 *)(iVar5 + 8) = uVar7;
                uVar3 = 0;
                if (a0[5] != 0) {
                    do {
                        if (*(int *)(uVar3 * 4 + a0[0xb]) == 0) {
                            *(u32 *)(*(int *)(iVar5 + 8) + uVar3 * 4) = uVar6;
                        } else if ((*(int *)(a0[0xb] + uVar3 * 4) == a0[9]) &&
                                   (*(int *)(a0[0x10] + uVar3 * 4) != a0[0xf])) {
                            *(int *)(*(int *)(iVar5 + 8) + uVar3 * 4) = a0[2] + a3;
                        } else {
                            if ((u32)a0[9] < *(u32 *)(a0[0xb] + uVar3 * 4)) {
                                iVar9 = libgcc_divide_helper_010468((a0[9] + a0[4]) - *(int *)(a0[0xb] + uVar3 * 4),
                                                                    (u32) * (u16 *)(a0 + 3));
                                piVar2 = extraout_r2;
                            } else {
                                piVar2 = (int *)(*(int *)(iVar5 + 8) + uVar3 * 4);
                                iVar9 = libgcc_divide_helper_010468(a0[9] - *(int *)(a0[0xb] + uVar3 * 4),
                                                                    (u32) * (u16 *)(a0 + 3));
                            }
                            *piVar2 = iVar9 + a3;
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < (u32)a0[5]);
                }
                *(int *)(iVar5 + 4) = a0[6];
                *(int *)(iVar5 + 0xc) = a2;
                *(u32 *)(iVar5 + 0x10) = 0;
                if (iVar8 == 0) {
                    a0[0xe] = iVar5;
                } else {
                    *(int *)(iVar8 + 0x10) = iVar5;
                }
            }
        }
    } else if ((char)a1 == -1) {
        iVar8 = a0[0xe];
        if (a0[7] != 0) {
            (**(code **)(*a0 + 0x18))(*a0, a0[7], 1, a3);
        }
        if (a0[0xb] != 0) {
            (**(code **)(*a0 + 0x18))(*a0, a0[0xb], uVar7, a3);
            (**(code **)(*a0 + 0x18))(*a0, a0[0xd], uVar7, a3);
            (**(code **)(*a0 + 0x18))(*a0, a0[0x10], uVar7, a3);
        }
        while (iVar8 != 0) {
            iVar9 = *(int *)(iVar8 + 0x10);
            (**(code **)(*a0 + 0x18))(*a0, iVar8, uVar7, a3);
            iVar8 = iVar9;
        }
        (**(code **)(*a0 + 0x18))(*a0, a0, uVar7, a3);
    } else {
        uVar10 = 0;
    }
    return uVar10;
}

/*
 * asr_sub_1117e4  0x8c1117e4
 * area name: in the asr library code range
 * called by: asr_sub_1113d0
 */
u32 asr_sub_1117e4(int a0, u32 a1, u32 a2) {
    int iVar1;
    int iVar2;
    u32 uVar3;

    if (*(u32 *)(a0 + 0x24) < *(u32 *)(a0 + 0x28)) {
        uVar3 = libgcc_divide_helper_010468(*(int *)(a0 + 0x28) - *(u32 *)(a0 + 0x24), (u32) * (u16 *)(a0 + 0xc));
    } else {
        iVar1 = libgcc_divide_helper_01051c(*(int *)(a0 + 0x24) - *(int *)(a0 + 0x28), (u32) * (u16 *)(a0 + 0xc));
        uVar3 = *(int *)(a0 + 8) - iVar1;
    }
    if (uVar3 < a1) {
        return 0;
    }
    iVar1 = a1 * *(u16 *)(a0 + 0xc);
    uVar3 = *(int *)(a0 + 0x28) - iVar1;
    *(u32 *)(a0 + 0x28) = uVar3;
    if (uVar3 < *(u32 *)(a0 + 0x1c)) {
        *(int *)(a0 + 0x28) = *(int *)(a0 + 0x28) + *(int *)(a0 + 0x10);
    }
    uVar3 = 0;
    if (*(int *)(a0 + 0x28) == *(int *)(a0 + 0x24)) {
        *(u8 *)(a0 + 0x30) = 1;
    }
    if (*(int *)(a0 + 0x14) != 0) {
        do {
            if (*(int *)(uVar3 * 4 + *(int *)(a0 + 0x2c)) != 0) {
                iVar2 = uVar3 * 4;
                *(int *)(*(int *)(a0 + 0x2c) + iVar2) = *(int *)(*(int *)(a0 + 0x2c) + iVar2) - iVar1;
                *(int *)(*(int *)(a0 + 0x40) + iVar2) = *(int *)(*(int *)(a0 + 0x40) + iVar2) - iVar1;
                if (*(u32 *)(*(int *)(a0 + 0x2c) + iVar2) < *(u32 *)(a0 + 0x1c)) {
                    *(int *)(*(int *)(a0 + 0x2c) + iVar2) = *(int *)(*(int *)(a0 + 0x2c) + iVar2) + *(int *)(a0 + 0x10);
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(u32 *)(a0 + 0x14));
    }
    return 1;
}

/*
 * asr_sub_11189a  0x8c11189a
 * area name: in the asr library code range
 * called by: asr_sub_1113d0
 */
u32 asr_sub_11189a(int a0, int a1, int a2) {
    int iVar1;
    u32 uVar2;
    int *ain0;
    int iVar3;
    u32 ar6_00;

    if (a2 != 0) {
        iVar3 = a1 * 4;
        ar6_00 = a2 * (u32) * (u16 *)(a0 + 0xc);
        uVar2 = *(int *)(a0 + 0x24) - *(int *)(*(int *)(a0 + 0x2c) + iVar3);
        if (0x7fffffff < uVar2) {
            uVar2 = uVar2 + *(int *)(a0 + 0x10);
        }
        if ((uVar2 == 0) && (*(int *)(*(int *)(a0 + 0x40) + iVar3) == *(int *)(a0 + 0x3c))) {
            uVar2 = *(u32 *)(a0 + 0x10);
        }
        if (uVar2 < ar6_00) {
            return 0;
        }
        if (ar6_00 == uVar2) {
            *(u8 *)(a0 + 0x30) = 1;
        }
        ain0 = (int *)(*(int *)(a0 + 0x2c) + iVar3);
        iVar1 = *(int *)(a0 + 0x1c);
        uVar2 = (*ain0 - iVar1) - ar6_00;
        if (0x7fffffff < uVar2) {
            iVar1 = *(int *)(a0 + 0x20);
        }
        *ain0 = iVar1 + uVar2;
        *(int *)(*(int *)(a0 + 0x40) + iVar3) = *(int *)(*(int *)(a0 + 0x40) + iVar3) - a2;
        if (*(int *)(a0 + 0x14) == 1) {
            *(u32 *)(a0 + 0x28) = *(u32 *)(*(int *)(a0 + 0x2c) + iVar3);
        } else {
            asr_sub_111342(a0, uVar2, ar6_00);
        }
    }
    return 1;
}

/*
 * asr_sub_11194c  0x8c11194c
 * area name: in the asr library code range
 */
int *asr_sub_11194c(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int a5;
    u64 in_dr0;
    float fVar3;
    float fVar4;
    float fVar5;
    int iVar6;
    u32 uVar7;
    char cVar8;

    fVar3 = (float)((u64)in_dr0 >> 0x20);
    cVar8 = '\0';
    asr_state_has_event(a0, 1, a2);
    if (cVar8 == '\0') {
        fVar5 = 2.1474836e+09;
    } else {
        fVar5 = -NAN;
    }
    fVar4 = fVar3;
    if (fVar5 < fVar3) {
        fVar4 = fVar3 + -4.2949673e+09;
    }
    a5 = 2;
    iVar6 = (int)fVar4;
    asr_state_has_event(a0, 2, a2);
    uVar7 = (u32)fVar3;
    if ((uVar7 & 0xffff) == 0xffff) {
        uVar7 = (u32)(short)a0[3];
    }
    if (a0[7] != 0) {
        a5 = a0[7];
        (**(code **)(*a0 + 0x18))(*a0, a5, a2, a3);
    }
    if ((uVar7 & 0xffff) == 0) {
        a0[7] = 0;
    } else {
        a2 = uVar7 & 0xffff;
        a5 = iVar6;
        iVar1 = (**(code **)(*a0 + 0x14))(*a0, iVar6, a2, a3);
        a0[7] = iVar1;
        if (iVar1 == 0) {
            (**(code **)(*a0 + 0x18))(*a0, a0, a2, a3);
            asr_fsm_set_result(a0, 2, a2, a3);
            return (int *)0;
        }
    }
    a0[2] = iVar6;
    iVar6 = (uVar7 & 0xffff) * iVar6;
    *(short *)(a0 + 3) = (short)uVar7;
    a0[4] = iVar6;
    a0[8] = a0[7] + iVar6;
    asr_sub_112234(a0);
    asr_state_has_event(a0, 3, a2);
    if (((int)fVar3 & 0xffU) == 0) {
        a0[6] = 0;
        uVar7 = 0;
        if (a0[5] != 0) {
            do {
                uVar2 = uVar7 + 1;
                *(u32 *)(uVar7 * 4 + a0[0xb]) = 0;
                uVar7 = uVar2;
            } while (uVar2 < (u32)a0[5]);
        }
    } else {
        a0[6] = a0[5];
    }
    asr_state_has_event(a0, 4, a2);
    *(u16 *)((int)a0 + 0xe) = (u16)(int)fVar3 & 0xff;
    asr_state_has_event(a0, 5, a2);
    *(char *)((int)a0 + 0x31) = (char)(int)fVar3;
    return a0;
}

/*
 * asr_sub_111adc  0x8c111adc
 * area name: in the asr library code range
 * called by: asr_sub_10d0da
 */
u32 asr_sub_111adc(int *a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 a6;
    u32 a7;
    int a5;
    u64 in_dr0;
    float fVar4;
    float fVar5;
    float fVar6;
    char cVar7;
    short in_stack_00000000;
    char in_stack_00000004;

    fVar4 = (float)((u64)in_dr0 >> 0x20);
    cVar7 = '\0';
    a6 = a2;
    a7 = a3;
    a5 = a1;
    if (a1 == 0) {
        a1 = 1;
        asr_state_has_event(a0, 1, a2);
        if (cVar7 == '\0') {
            fVar6 = 2.1474836e+09;
        } else {
            fVar6 = -NAN;
        }
        fVar5 = fVar4;
        if (fVar6 < fVar4) {
            fVar5 = fVar4 + -4.2949673e+09;
        }
        a5 = (int)fVar5;
    }
    if (a2 == 0) {
        a1 = 2;
        asr_state_has_event(a0, 2, a6);
        a2 = (u32)fVar4;
    }
    if (a0[7] != 0) {
        a1 = a0[7];
        (**(code **)(*a0 + 0x18))(*a0, a1, a6, a7);
    }
    if ((a2 & 0xffff) == 0) {
        a0[7] = 0;
    } else {
        a6 = a2 & 0xffff;
        a1 = a5;
        iVar1 = (**(code **)(*a0 + 0x14))(*a0, a5, a6, a7);
        a0[7] = iVar1;
        if (iVar1 == 0) {
            asr_fsm_set_result(a0, 2, a6, a7);
            return 0;
        }
    }
    a0[2] = a5;
    *(short *)(a0 + 3) = (short)a2;
    a0[4] = (a2 & 0xffff) * a5;
    a0[9] = a0[7];
    a0[8] = a0[7] + a0[4];
    asr_sub_112234(a0);
    if ((a3 & 0xff) == 0xff) {
        asr_state_has_event(a0, 3, a6);
        a3 = (u32)fVar4;
    }
    if ((a3 & 0xff) == 0) {
        a0[6] = 0;
        uVar2 = 0;
        if (a0[5] != 0) {
            do {
                uVar3 = uVar2 + 1;
                *(u32 *)(uVar2 * 4 + a0[0xb]) = 0;
                uVar2 = uVar3;
            } while (uVar3 < (u32)a0[5]);
        }
    } else {
        a0[6] = a0[5];
    }
    if (in_stack_00000000 == -1) {
        asr_state_has_event(a0, 4, a6);
        in_stack_00000000 = (short)(int)fVar4;
    }
    *(short *)((int)a0 + 0xe) = in_stack_00000000;
    if (in_stack_00000004 == -1) {
        asr_state_has_event(a0, 5, a6);
        *(char *)((int)a0 + 0x31) = (char)(int)fVar4;
    } else {
        *(char *)((int)a0 + 0x31) = in_stack_00000004;
    }
    return a0;
}

/*
 * asr_sub_111cdc  0x8c111cdc
 * area name: in the asr library code range
 * called by: asr_sub_10f22a, asr_sub_11f258
 */
u32 asr_sub_111cdc(int a0, int a1, u32 a2) {
    u8 *puVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;

    puVar1 = (&memmove);
    iVar5 = a2 * *(u16 *)(a0 + 0xc);
    if ((*(char *)(a0 + 0x30) == '\0') && (a2 <= *(u32 *)(a0 + 8))) {
        if (*(u32 *)(a0 + 0x24) < *(u32 *)(a0 + 0x28)) {
            if (*(u32 *)(a0 + 0x28) < (u32)(*(int *)(a0 + 0x24) + iVar5))
                goto LAB_8c111d40;
            memmove(*(u32 *)(a0 + 0x24), a1, iVar5);
            *(int *)(a0 + 0x24) = *(int *)(a0 + 0x24) + iVar5;
        } else {
            if (*(u32 *)(a0 + 0x28) < (u32)((*(int *)(a0 + 0x24) + iVar5) - *(int *)(a0 + 0x10)))
                goto LAB_8c111d40;
            if (*(u32 *)(a0 + 0x20) < (u32)(*(int *)(a0 + 0x24) + iVar5)) {
                iVar4 = *(int *)(a0 + 0x20) - *(int *)(a0 + 0x24);
                memmove(a1, iVar4);
                (*(code *)puVar1)(*(u32 *)(a0 + 0x1c), a1 + iVar4, iVar5 - iVar4);
                *(int *)(a0 + 0x24) = (iVar5 - iVar4) + *(int *)(a0 + 0x1c);
            } else {
                memmove(*(u32 *)(a0 + 0x24), a1, iVar5);
                iVar5 = *(int *)(a0 + 0x24) + iVar5;
                *(int *)(a0 + 0x24) = iVar5;
                if (iVar5 == *(int *)(a0 + 0x20)) {
                    *(u32 *)(a0 + 0x24) = *(u32 *)(a0 + 0x1c);
                }
            }
        }
        uVar3 = 0;
        if (*(int *)(a0 + 0x14) != 0) {
            do {
                if (*(int *)(uVar3 * 4 + *(int *)(a0 + 0x2c)) == 0) {
                    *(u32 *)(*(int *)(a0 + 0x40) + uVar3 * 4) = *(int *)(*(int *)(a0 + 0x40) + uVar3 * 4) + a2;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(u32 *)(a0 + 0x14));
        }
        if ((*(int *)(a0 + 0x24) == *(int *)(a0 + 0x28)) && (*(int *)(a0 + 0x18) != 0)) {
            *(u8 *)(a0 + 0x30) = 1;
        }
        uVar2 = 1;
        *(u32 *)(a0 + 0x3c) = *(int *)(a0 + 0x3c) + a2;
    } else {
    LAB_8c111d40:
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_sub_111cec  0x8c111cec
 * area name: in the asr library code range
 */
u32 asr_sub_111cec(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    u32 uVar3;
    int unaff_r10;
    u32 unaff_r11;
    int a6;
    int unaff_r14;
    int iVar4;

    puVar1 = (&memmove);
    iVar4 = unaff_r11 * *(u16 *)(unaff_r14 + 0xc);
    if ((*(char *)(unaff_r14 + 0x30) == '\0') && (unaff_r11 <= *(u32 *)(unaff_r14 + 8))) {
        if (*(u32 *)(unaff_r14 + 0x24) < *(u32 *)(unaff_r14 + 0x28)) {
            if (*(u32 *)(unaff_r14 + 0x28) < (u32)(*(int *)(unaff_r14 + 0x24) + iVar4))
                goto LAB_8c111d40;
            memmove(*(u32 *)(unaff_r14 + 0x24), unaff_r10, iVar4);
            *(int *)(unaff_r14 + 0x24) = *(int *)(unaff_r14 + 0x24) + iVar4;
        } else {
            if (*(u32 *)(unaff_r14 + 0x28) < (u32)((*(int *)(unaff_r14 + 0x24) + iVar4) - *(int *)(unaff_r14 + 0x10)))
                goto LAB_8c111d40;
            if (*(u32 *)(unaff_r14 + 0x20) < (u32)(*(int *)(unaff_r14 + 0x24) + iVar4)) {
                a6 = *(int *)(unaff_r14 + 0x20) - *(int *)(unaff_r14 + 0x24);
                memmove(*(int *)(unaff_r14 + 0x24), unaff_r10, a6);
                (*(code *)puVar1)(*(u32 *)(unaff_r14 + 0x1c), unaff_r10 + a6, iVar4 - a6, a3);
                *(int *)(unaff_r14 + 0x24) = (iVar4 - a6) + *(int *)(unaff_r14 + 0x1c);
            } else {
                memmove(*(u32 *)(unaff_r14 + 0x24), unaff_r10, iVar4);
                iVar4 = *(int *)(unaff_r14 + 0x24) + iVar4;
                *(int *)(unaff_r14 + 0x24) = iVar4;
                if (iVar4 == *(int *)(unaff_r14 + 0x20)) {
                    *(u32 *)(unaff_r14 + 0x24) = *(u32 *)(unaff_r14 + 0x1c);
                }
            }
        }
        uVar3 = 0;
        if (*(int *)(unaff_r14 + 0x14) != 0) {
            do {
                if (*(int *)(uVar3 * 4 + *(int *)(unaff_r14 + 0x2c)) == 0) {
                    *(u32 *)(*(int *)(unaff_r14 + 0x40) + uVar3 * 4) =
                        *(int *)(*(int *)(unaff_r14 + 0x40) + uVar3 * 4) + unaff_r11;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(u32 *)(unaff_r14 + 0x14));
        }
        if ((*(int *)(unaff_r14 + 0x24) == *(int *)(unaff_r14 + 0x28)) && (*(int *)(unaff_r14 + 0x18) != 0)) {
            *(u8 *)(unaff_r14 + 0x30) = 1;
        }
        uVar2 = 1;
        *(u32 *)(unaff_r14 + 0x3c) = *(int *)(unaff_r14 + 0x3c) + unaff_r11;
    } else {
    LAB_8c111d40:
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * mring_write_advance  0x8c111dfe
 * advances the write position of a multi-reader ring buffer by one element and counts it for each idle reader
 * called by: asr_sub_10a564, asr_sub_10c530, asr_sub_10cb90, asr_sub_10d0da, asr_sub_10e818, asr_sub_10f22a,
 * asr_sub_10fe04, asr_sub_10fe0a (+11 more)
 */
u32 mring_write_advance(int a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;

    if (*(char *)(a0 + 0x30) != '\0') {
        return 0;
    }
    iVar3 = *(int *)(a0 + 0x24);
    iVar1 = iVar3 + (u32) * (u16 *)(a0 + 0xc);
    *(int *)(a0 + 0x24) = iVar1;
    uVar2 = 0;
    if (iVar1 == *(int *)(a0 + 0x20)) {
        *(u32 *)(a0 + 0x24) = *(u32 *)(a0 + 0x1c);
    }
    if (*(int *)(a0 + 0x14) != 0) {
        do {
            if (*(int *)(uVar2 * 4 + *(int *)(a0 + 0x2c)) == 0) {
                *(int *)(*(int *)(a0 + 0x40) + uVar2 * 4) = *(int *)(*(int *)(a0 + 0x40) + uVar2 * 4) + 1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(u32 *)(a0 + 0x14));
    }
    if ((*(int *)(a0 + 0x24) == *(int *)(a0 + 0x28)) && (*(int *)(a0 + 0x18) != 0)) {
        *(u8 *)(a0 + 0x30) = 1;
    }
    *(int *)(a0 + 0x3c) = *(int *)(a0 + 0x3c) + 1;
    return iVar3;
}

/*
 * asr_sub_111e72  0x8c111e72
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_10f22a
 */
u32 asr_sub_111e72(int a0, int a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar4;
    int ar6_00;
    u32 ar5_00;
    int iVar5;

    iVar4 = a1 * 4;
    ar5_00 = *(u32 *)(*(int *)(a0 + 0x2c) + iVar4);
    if (*(int *)(*(int *)(a0 + 0x40) + iVar4) == *(int *)(a0 + 0x3c)) {
        if ((*(int *)(a0 + 0x38) != 0) && (ar5_00 != 0)) {
            asr_sub_111208(a0, a1, 0);
        }
    } else if (a3 <= *(u32 *)(a0 + 8)) {
        iVar5 = a3 * *(u16 *)(a0 + 0xc);
        uVar1 = ar5_00;
        iVar2 = iVar5;
        if (ar5_00 < *(u32 *)(a0 + 0x24)) {
            if (iVar5 + ar5_00 <= *(u32 *)(a0 + 0x24)) {
                memmove(a2, ar5_00, iVar5);
                *(int *)(*(int *)(a0 + 0x2c) + iVar4) = *(int *)(*(int *)(a0 + 0x2c) + iVar4) + iVar5;
            LAB_8c111f76:
                *(u32 *)(*(int *)(a0 + 0x40) + iVar4) = *(int *)(*(int *)(a0 + 0x40) + iVar4) + a3;
                if (*(u32 *)(a0 + 0x28) == ar5_00) {
                    asr_sub_111342(a0, uVar1, iVar2);
                }
                if (*(int *)(a0 + 0x38) != 0) {
                    asr_sub_111208(a0, a1, a3);
                }
                return 1;
            }
        } else if ((ar5_00 + iVar5) - *(int *)(a0 + 0x10) <= *(u32 *)(a0 + 0x24)) {
            if (*(u32 *)(a0 + 0x20) < iVar5 + ar5_00) {
                ar6_00 = *(int *)(a0 + 0x20) - ar5_00;
                memmove(a2, ar5_00, ar6_00);
                iVar5 = iVar5 - ar6_00;
                uVar1 = *(u32 *)(a0 + 0x1c);
                iVar2 = iVar5;
                memmove(a2 + ar6_00, uVar1, iVar5);
                *(int *)(*(int *)(a0 + 0x2c) + iVar4) = iVar5 + *(int *)(a0 + 0x1c);
            } else {
                memmove(a2, ar5_00, iVar5);
                *(int *)(*(int *)(a0 + 0x2c) + iVar4) = *(int *)(*(int *)(a0 + 0x2c) + iVar4) + iVar5;
                if (*(int *)(*(int *)(a0 + 0x2c) + iVar4) == *(int *)(a0 + 0x20)) {
                    *(u32 *)(*(int *)(a0 + 0x2c) + iVar4) = *(u32 *)(a0 + 0x1c);
                }
            }
            goto LAB_8c111f76;
        }
    }
    return 0;
}

/*
 * mring_read_advance  0x8c111fbe
 * advances reader a1 of a multi-reader ring buffer by one element
 * called by: asr_sub_10c530, asr_sub_10cb90, asr_sub_10e818, asr_sub_10f22a, asr_sub_10fc96, asr_sub_110680,
 * asr_sub_110aea, asr_sub_112074 (+8 more)
 */
int mring_read_advance(int a0, int a1, u32 unused_a2, int a3) {
    int iVar1;
    int *piVar2;
    u32 uVar3;
    int iVar4;

    iVar4 = a1 * 4;
    if (*(int *)(*(int *)(a0 + 0x40) + iVar4) == *(int *)(a0 + 0x3c)) {
        if ((*(int *)(a0 + 0x38) != 0) && (*(int *)(*(int *)(a0 + 0x2c) + iVar4) != 0)) {
            asr_sub_111208(a0, a1, 0);
        }
        iVar1 = 0;
    } else {
        piVar2 = (int *)(*(int *)(a0 + 0x2c) + iVar4);
        iVar1 = *piVar2;
        *piVar2 = iVar1 + (u32) * (u16 *)(a0 + 0xc);
        if (*(u32 *)(a0 + 0x20) <= *(u32 *)(*(int *)(a0 + 0x2c) + iVar4)) {
            *(u32 *)(*(int *)(a0 + 0x2c) + iVar4) = *(u32 *)(a0 + 0x1c);
        }
        *(int *)(*(int *)(a0 + 0x40) + iVar4) = *(int *)(*(int *)(a0 + 0x40) + iVar4) + 1;
        if (iVar1 == *(int *)(a0 + 0x28)) {
            uVar3 = 0;
            if (*(int *)(a0 + 0x14) != 0) {
                do {
                    a3 = uVar3 * 4;
                    if ((iVar1 == *(int *)(*(int *)(a0 + 0x2c) + a3)) &&
                        (*(int *)(*(int *)(a0 + 0x40) + a3) != *(int *)(a0 + 0x3c)))
                        break;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(u32 *)(a0 + 0x14));
            }
            if (uVar3 == *(u32 *)(a0 + 0x14)) {
                *(u32 *)(a0 + 0x28) = *(u32 *)(*(int *)(a0 + 0x2c) + iVar4);
                *(u8 *)(a0 + 0x30) = 0;
            }
        }
        if (*(int *)(a0 + 0x38) != 0) {
            asr_sub_111208(a0, a1, 1);
        }
    }
    return iVar1;
}

/*
 * asr_sub_111fc6  0x8c111fc6
 * area name: sits between asr functions (same compilation unit)
 */
int asr_sub_111fc6(int a0, u32 a1, u32 unused_a2, int a3) {
    int in_r0;
    int iVar1;
    int *piVar2;
    u32 uVar3;
    int unaff_r14;

    if (*(int *)(*(int *)(in_r0 + a0) + unaff_r14) == *(int *)(a0 + 0x3c)) {
        if ((*(int *)(a0 + 0x38) != 0) && (*(int *)(*(int *)(a0 + 0x2c) + unaff_r14) != 0)) {
            asr_sub_111208(a0, a1, 0);
        }
        iVar1 = 0;
    } else {
        piVar2 = (int *)(*(int *)(a0 + 0x2c) + unaff_r14);
        iVar1 = *piVar2;
        *piVar2 = iVar1 + (u32) * (u16 *)(a0 + 0xc);
        if (*(u32 *)(a0 + 0x20) <= *(u32 *)(*(int *)(a0 + 0x2c) + unaff_r14)) {
            *(u32 *)(*(int *)(a0 + 0x2c) + unaff_r14) = *(u32 *)(a0 + 0x1c);
        }
        *(int *)(*(int *)(a0 + 0x40) + unaff_r14) = *(int *)(*(int *)(a0 + 0x40) + unaff_r14) + 1;
        if (iVar1 == *(int *)(a0 + 0x28)) {
            uVar3 = 0;
            if (*(int *)(a0 + 0x14) != 0) {
                do {
                    a3 = uVar3 * 4;
                    if ((iVar1 == *(int *)(*(int *)(a0 + 0x2c) + a3)) &&
                        (*(int *)(*(int *)(a0 + 0x40) + a3) != *(int *)(a0 + 0x3c)))
                        break;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(u32 *)(a0 + 0x14));
            }
            if (uVar3 == *(u32 *)(a0 + 0x14)) {
                *(u32 *)(a0 + 0x28) = *(u32 *)(*(int *)(a0 + 0x2c) + unaff_r14);
                *(u8 *)(a0 + 0x30) = 0;
            }
        }
        if (*(int *)(a0 + 0x38) != 0) {
            asr_sub_111208(a0, a1, 1);
        }
    }
    return iVar1;
}

/*
 * asr_sub_112074  0x8c112074
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_10a80c, asr_sub_110908
 */
u32 asr_sub_112074(int *a0, int a1, u32 *a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    u32 uVar3;
    int *a6;
    int *piVar4;
    bool bVar5;

    piVar4 = a0 + a1 * 2;
    bVar5 = true;
    for (a6 = a0; a6 < piVar4; a6 = a6 + 2) {
        if (*(int *)(*(int *)(*a6 + 0x2c) + a6[1] * 4) != 0) {
            bVar5 = *(int *)(*(int *)(*a6 + 0x40) + a6[1] * 4) == *(int *)(*a6 + 0x3c);
            break;
        }
    }
    do {
        piVar1 = a6;
        a6 = piVar1 + 2;
        if (piVar4 <= a6)
            break;
    } while ((*(int *)(*(int *)(*a6 + 0x2c) + piVar1[3] * 4) == 0) ||
             (bVar5 == (*(int *)(*(int *)(*a6 + 0x40) + piVar1[3] * 4) == *(int *)(*a6 + 0x3c))));
    if (a6 == piVar4) {
        if (bVar5 == false) {
            for (; a0 < piVar4; a0 = a0 + 2) {
                uVar3 = mring_read_advance(*a0, a0[1], a6, a3);
                *a2 = uVar3;
                a2 = a2 + 1;
            }
        } else {
            for (; a0 < piVar4; a0 = a0 + 2) {
                if ((*(int *)(*a0 + 0x38) != 0) && (*(int *)(*(int *)(*a0 + 0x2c) + a0[1] * 4) != 0)) {
                    asr_sub_111208(*a0, a0[1], 0);
                }
            }
        }
        uVar2 = (u32)(bVar5 == false);
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_sub_112170  0x8c112170
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_10c530, asr_sub_10e818, asr_sub_10fc96, asr_sub_11c0e4, asr_sub_11f8de, asr_sub_121896
 */
u32 asr_sub_112170(int *a0, int a1) {
    int *piVar1;
    u32 uVar2;
    int *piVar3;
    int *piVar4;
    bool bVar5;
    u32 uVar6;

    uVar6 = 0;
    piVar4 = a0 + a1 * 2;
    bVar5 = true;
    for (piVar3 = a0; piVar3 < piVar4; piVar3 = piVar3 + 2) {
        if (*(int *)(*(int *)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0) {
            bVar5 = *(int *)(*(int *)(*piVar3 + 0x40) + piVar3[1] * 4) == *(int *)(*piVar3 + 0x3c);
            break;
        }
    }
    do {
        piVar1 = piVar3;
        piVar3 = piVar1 + 2;
        if (piVar4 <= piVar3)
            break;
    } while ((*(int *)(*(int *)(*piVar3 + 0x2c) + piVar1[3] * 4) == 0) ||
             (bVar5 == (*(int *)(*(int *)(*piVar3 + 0x40) + piVar1[3] * 4) == *(int *)(*piVar3 + 0x3c))));
    if (piVar3 == piVar4) {
        if (bVar5 != false) {
            for (; a0 < piVar4; a0 = a0 + 2) {
                if ((*(int *)(*a0 + 0x38) != 0) && (*(int *)(*(int *)(*a0 + 0x2c) + a0[1] * 4) != 0)) {
                    asr_sub_111208(*a0, a0[1], 0);
                }
            }
        }
        uVar2 = (u32)(bVar5 == false);
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_sub_11217e  0x8c11217e
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11217e(int *a0, u32 unused_a1, int *a2) {
    int *piVar1;
    u32 uVar2;
    int unaff_r13;
    int *piVar3;
    bool bVar4;

    piVar3 = (int *)(unaff_r13 + (int)a2);
    bVar4 = true;
    for (; a2 < piVar3; a2 = a2 + 2) {
        if (*(int *)(*(int *)(*a2 + 0x2c) + a2[1] * 4) != 0) {
            bVar4 = *(int *)(*(int *)(*a2 + 0x40) + a2[1] * 4) == *(int *)(*a2 + 0x3c);
            break;
        }
    }
    do {
        piVar1 = a2;
        a2 = piVar1 + 2;
        if (piVar3 <= a2)
            break;
    } while ((*(int *)(*(int *)(*a2 + 0x2c) + piVar1[3] * 4) == 0) ||
             (bVar4 == (*(int *)(*(int *)(*a2 + 0x40) + piVar1[3] * 4) == *(int *)(*a2 + 0x3c))));
    if (a2 == piVar3) {
        if (bVar4 != false) {
            for (; a0 < piVar3; a0 = a0 + 2) {
                if ((*(int *)(*a0 + 0x38) != 0) && (*(int *)(*(int *)(*a0 + 0x2c) + a0[1] * 4) != 0)) {
                    asr_sub_111208(*a0, a0[1], 0);
                }
            }
        }
        uVar2 = (u32)(bVar4 == false);
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * asr_sub_112234  0x8c112234
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11194c, asr_sub_111adc
 */
u32 asr_sub_112234(int a0) {
    u32 uVar1;
    int iVar2;

    uVar1 = 0;
    if (*(int *)(a0 + 0x14) != 0) {
        do {
            iVar2 = uVar1 * 4;
            uVar1 = uVar1 + 1;
            *(u32 *)(*(int *)(a0 + 0x2c) + iVar2) = *(u32 *)(a0 + 0x1c);
            *(u32 *)(*(int *)(a0 + 0x40) + iVar2) = 0;
        } while (uVar1 < *(u32 *)(a0 + 0x14));
    }
    *(u32 *)(a0 + 0x3c) = 0;
    *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x1c);
    *(u32 *)(a0 + 0x24) = *(u32 *)(a0 + 0x1c);
    *(u8 *)(a0 + 0x30) = 0;
    *(u32 *)(a0 + 0x38) = 0;
    return 0x30;
}

/*
 * asr_sub_1122ac  0x8c1122ac
 * area name: sits between asr functions (same compilation unit)
 */
int *asr_sub_1122ac(int a0, u32 a1, int a2, u32 a3) {
    int *piVar1;
    int iVar2;
    u32 a6;
    int iStack_18;
    u8 uStack_14;

    a6 = 0x44;
    piVar1 = (int *)(**(code **)(a0 + 0x14))(a0, 1, 0x44, a3);
    if (piVar1 == NULL) {
        iStack_18 = a0;
        uStack_14 = (u8)a1;
        asr_fsm_set_result(&iStack_18, 2, a6, a3);
        piVar1 = NULL;
    } else {
        iVar2 = (**(code **)(a0 + 0x10))(a0, a2 << 2, a6, a3);
        piVar1[0xb] = iVar2;
        iVar2 = (**(code **)(a0 + 0x14))(a0, a2, 4, a3);
        piVar1[0xd] = iVar2;
        iVar2 = (**(code **)(a0 + 0x14))(a0, a2, 4, a3);
        piVar1[0x10] = iVar2;
        piVar1[5] = a2;
        *(u8 *)(piVar1 + 1) = (u8)a1;
        *piVar1 = a0;
        piVar1[2] = 1;
    }
    return piVar1;
}

/*
 * asr_sub_112350  0x8c112350
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11b6b8
 */
u32 asr_sub_112350(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = (**(code **)(a0 + 0x14))(a0, 1, 0x18, a3);
    if (iVar1 == 0) {
        return 0;
    }
    return iVar1;
}

/*
 * asr_free_obj  0x8c11237a
 * frees the owned buffer at +0xc (when +0x14 is set), then the object, through allocator a1
 * called by: asr_free_model_parts, asr_sub_11b88c
 */
u32 asr_free_obj(int a0, int a1) {
    u32 uVar1;

    if ((*(char *)(a0 + 0x14) != '\0') && (*(int *)(a0 + 0xc) != 0)) {
        (**(code **)(a1 + 0x18))(a1, *(u32 *)(a0 + 0xc));
    }
    /* WARNING: Could not recover jumptable at 0x8c1123ac. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(a1 + 0x18))(a1, a0);
    return uVar1;
}

/*
 * asr_sub_112380  0x8c112380
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_112380(u32 unused_a0, int a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    int unaff_r14;

    if ((*(char *)(in_r0 + unaff_r14) != '\0') && (*(int *)(unaff_r14 + 0xc) != 0)) {
        (**(code **)(a1 + 0x18))(a1, *(u32 *)(unaff_r14 + 0xc), a2, a3);
    }
    /* WARNING: Could not recover jumptable at 0x8c1123ac. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(a1 + 0x18))(a1);
    return uVar1;
}

/*
 * asr_sub_1123b0  0x8c1123b0
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11b6b8
 */
u32 asr_sub_1123b0(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = (**(code **)(a0 + 0x14))(a0, 1, 0x18, a3);
    if (iVar1 == 0) {
        return 0;
    }
    return iVar1;
}

/*
 * asr_free_obj_b  0x8c1123da
 * frees the owned buffer at +0xc (when +0x14 is set), then the object, through allocator a1
 * called by: asr_free_model_parts, asr_sub_11b88c
 */
u32 asr_free_obj_b(int a0, int a1) {
    u32 uVar1;

    if ((*(char *)(a0 + 0x14) != '\0') && (*(int *)(a0 + 0xc) != 0)) {
        (**(code **)(a1 + 0x18))(a1, *(u32 *)(a0 + 0xc));
    }
    /* WARNING: Could not recover jumptable at 0x8c11240c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(a1 + 0x18))(a1, a0);
    return uVar1;
}

/*
 * asr_sub_1123e0  0x8c1123e0
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_1123e0(u32 unused_a0, int a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    int unaff_r14;

    if ((*(char *)(in_r0 + unaff_r14) != '\0') && (*(int *)(unaff_r14 + 0xc) != 0)) {
        (**(code **)(a1 + 0x18))(a1, *(u32 *)(unaff_r14 + 0xc), a2, a3);
    }
    /* WARNING: Could not recover jumptable at 0x8c11240c. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(a1 + 0x18))(a1);
    return uVar1;
}

/*
 * asr_sub_112410  0x8c112410
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11b6b8
 */
int *asr_sub_112410(int *a0, int a1, int a2, int a3) {
    int iVar1;
    u64 *puVar2;
    u32 uVar3;
    u32 in_fr5;
    u64 uVar4;
    u32 uVar5;
    char cVar6;

    cVar6 = '\0';
    uVar5 = a1 * a2;
    *a0 = a1;
    a0[1] = a2;
    a0[2] = uVar5;
    iVar1 = (**(code **)(a3 + 0x10))(a3, uVar5 * 4);
    a0[3] = iVar1;
    if (iVar1 == 0) {
        (**(code **)(a3 + 0x18))(a3, a0);
        a0 = NULL;
    } else {
        *(u8 *)(a0 + 5) = 1;
        uVar3 = 0;
        a0[4] = uVar5 * 4 + a0[3];
        puVar2 = (u64 *)a0[3];
        if (cVar6 == '\0') {
            uVar4 = (u64)in_fr5;
        } else {
            uVar4 = 0x8c1129e400000000;
        }
        if (uVar5 != 0) {
            do {
                uVar3 = uVar3 + 1;
                if (cVar6 == '\0') {
                    *(int *)puVar2 = (int)(uVar4 >> 0x20);
                } else {
                    *puVar2 = uVar4;
                }
                puVar2 = (u64 *)((int)puVar2 + 4);
            } while (uVar3 < uVar5);
        }
    }
    return a0;
}

/*
 * asr_sub_11241e  0x8c11241e
 * area name: sits between asr functions (same compilation unit)
 */
u32 *asr_sub_11241e(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u64 *puVar2;
    u32 uVar3;
    u32 unaff_r12;
    int unaff_r13;
    u32 *unaff_r14;
    u32 in_fr5;
    u64 uVar4;

    *unaff_r14 = a1;
    unaff_r14[1] = a2;
    unaff_r14[2] = unaff_r12;
    iVar1 = (**(code **)(unaff_r13 + 0x10))(unaff_r13, unaff_r12 << 2, a2, a3);
    unaff_r14[3] = iVar1;
    if (iVar1 == 0) {
        (**(code **)(unaff_r13 + 0x18))(unaff_r13, unaff_r14, a2, a3);
        unaff_r14 = NULL;
    } else {
        *(u8 *)(unaff_r14 + 5) = 1;
        uVar3 = 0;
        unaff_r14[4] = unaff_r12 * 4 + unaff_r14[3];
        puVar2 = (u64 *)unaff_r14[3];

        uVar4 = CONCAT44(g_8c1125e0, in_fr5);

        if (unaff_r12 != 0) {
            do {
                uVar3 = uVar3 + 1;

                *(int *)puVar2 = (int)((u64)uVar4 >> 0x20);

                puVar2 = (u64 *)((int)puVar2 + 4);
            } while (uVar3 < unaff_r12);
        }
    }
    return unaff_r14;
}

/*
 * asr_sub_112482  0x8c112482
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11b6b8
 */
int *asr_sub_112482(int *a0, int a1, int a2, int a3) {
    int iVar1;
    u32 a6;
    int a7;
    int a5;

    a5 = a1 * a2;
    *a0 = a1;
    a0[1] = a2;
    a6 = 4;
    a0[2] = a5;
    a7 = a3;
    iVar1 = (**(code **)(a3 + 0x14))(a3, a5, 4, a3);
    a0[3] = iVar1;
    if (iVar1 == 0) {
        (**(code **)(a3 + 0x18))(a3, a0, a6, a7);
        a0 = NULL;
    } else {
        *(u8 *)(a0 + 5) = 1;
        a0[4] = a5 * 4 + a0[3];
    }
    return a0;
}

/*
 * asr_sub_1124de  0x8c1124de
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11b6b8
 */
int *asr_sub_1124de(int *a0, int *a1, int a2) {
    u8 *puVar1;
    int iVar2;

    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = *a1 * a1[1];
    iVar2 = (**(code **)(a2 + 0x10))(a2, *a0 * a0[1] * 4);
    a0[3] = iVar2;
    if (iVar2 == 0) {
        (**(code **)(a2 + 0x18))(a2, a0);
        a0 = NULL;
    } else {
        *(u8 *)(a0 + 5) = 1;
        puVar1 = (&asr_sub_1129e4);
        a0[4] = *a0 * a0[1] * 4 + a0[3];
        (*(code *)puVar1)(a0, a1);
    }
    return a0;
}

/*
 * asr_sub_1124ea  0x8c1124ea
 * area name: sits between asr functions (same compilation unit)
 */
int *asr_sub_1124ea(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int unaff_r12;
    int *unaff_r13;
    int *unaff_r14;
    u32 in_PR;

    *unaff_r14 = *unaff_r13;
    unaff_r14[1] = unaff_r13[1];
    unaff_r14[2] = *unaff_r13 * unaff_r13[1];
    iVar1 = (**(code **)(unaff_r12 + 0x10))(unaff_r12, *unaff_r14 * unaff_r14[1] * 4, a2, a3);
    unaff_r14[3] = iVar1;
    if (iVar1 == 0) {
        (**(code **)(unaff_r12 + 0x18))(unaff_r12, unaff_r14, a2, a3);
        unaff_r14 = NULL;
    } else {
        *(u8 *)(unaff_r14 + 5) = 1;
        unaff_r14[4] = *unaff_r14 * unaff_r14[1] * 4 + unaff_r14[3];
        asr_sub_1129e4(unaff_r14, unaff_r13, a2, a3, in_PR);
    }
    return unaff_r14;
}

/*
 * asr_sub_1125e8  0x8c1125e8
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11b93c
 */
u32 asr_sub_1125e8(int *a0, int a1) {
    u32 in_r0;
    int iVar1;
    int iVar2;
    u32 *puVar3;
    int iVar4;
    u32 *puVar5;

    iVar4 = *a0;
    iVar2 = a0[1];
    iVar1 = a0[3];
    puVar5 = (u32 *)(a1 * iVar4 * 4 + iVar1);
    for (puVar3 = puVar5 + iVar4; puVar3 < (u32 *)(iVar4 * iVar2 * 4 + iVar1); puVar3 = puVar3 + 1) {
        *puVar5 = *puVar3;
        puVar5 = puVar5 + 1;
    }
    a0[1] = a0[1] + -1;
    a0[2] = a0[2] + -1;
    a0[4] = a0[4] + *a0 * -4;
    return in_r0;
}

/*
 * asr_array2d_init  0x8c112642
 * sets up a rows x columns array header (a1, a2) over the data at a3
 * called by: asr_sub_11b6b8
 */
u32 asr_array2d_init(int *a0, int a1, int a2, int a3) {
    u32 in_r0;

    *a0 = a1;
    a0[1] = a2;
    a0[2] = a1 * a2;
    a0[3] = a3;
    a0[4] = a3 + a0[2] * 4;
    return in_r0;
}

/*
 * asr_sub_112658  0x8c112658
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11b93c
 */
u32 asr_sub_112658(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    float *pfVar2;
    float fVar3;

    pfVar2 = *(float **)(a0 + 0xc);
    uVar1 = 1;
    fVar3 = *pfVar2;
    if (1 < *(u32 *)(a0 + 8)) {
        do {
            pfVar2 = pfVar2 + 1;
            uVar1 = uVar1 + 1;
            if (fVar3 < *pfVar2) {
                fVar3 = *pfVar2;
            }
        } while (uVar1 < *(u32 *)(a0 + 8));
    }
    return ain0;
}

/*
 * asr_sub_112680  0x8c112680
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11b93c
 */
u64 *asr_sub_112680(int *a0) {
    char cVar1;
    u64 *puVar2;
    int iVar3;
    int iVar4;
    float *a5;
    u32 uVar5;
    float *pfVar6;
    u64 uVar7;
    double dVar8;
    float fVar9;
    u8 bVar10;
    u8 bVar11;
    u8 bVar12;

    uVar5 = 0;
    puVar2 = &g_8c112824;
    iVar4 = a0[1];
    iVar3 = *a0;
    a5 = (float *)a0[3];
    pfVar6 = a5;
    if (iVar3 * iVar4 != 0) {
        do {
            uVar7 = 0x4000000000000000;
            thunk_FUN_8c013cd8();
            bVar10 = 0;
            bVar11 = 0;
            bVar12 = 0;
            thunk_FUN_8c013dfc();
            uVar5 = uVar5 + 1;
            cVar1 = (char)((((u32)bVar10 << 0x12 | (u32)bVar11 << 0x13 | (u32)bVar12 << 0x14) & 0x100000) >> 0x14);
            if (cVar1 == '\0') {
                dVar8 = (double)CONCAT44(0x3fe00000, (int)uVar7);
            } else {
                dVar8 = -1.5698269832574723e-250;
            }
            puVar2 = (u64 *)&g_8c112830;
            if (cVar1 == '\0') {
                dVar8 = (double)((u64)dVar8 & 0xffffffff00000000);
            }
            if (cVar1 == '\0') {
                fVar9 = *pfVar6;
            } else {
                fVar9 = (float)((u64) * (u64 *)pfVar6 >> 0x20);
            }
            *pfVar6 = fVar9 - (float)((double)(float)((u64)uVar7 >> 0x20) * dVar8);
            pfVar6 = pfVar6 + 1;
        } while (uVar5 < (u32)(iVar3 * iVar4));
    }
    return puVar2;
}

/*
 * asr_sub_112734  0x8c112734
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11b93c
 */
u32 asr_sub_112734(float *a0, float *a1, int a2) {
    char cVar1;
    float fVar2;
    float *ain0;
    float fVar3;
    float fVar4;
    float *pfVar5;
    float *ar5_00;
    float ar6_00;
    float *pfVar6;
    float *pfVar7;
    float fVar8;
    float *pfVar9;
    float fVar10;
    float fVar11;
    u64 uVar12;
    float fVar13;
    float fVar15;
    u64 in_xd2;
    u8 bVar16;
    u8 bVar17;
    u8 bVar18;
    u64 uVar14;

    fVar3 = a0[1];
    fVar2 = *a0;
    ar6_00 = (float)(a2 + 1);
    fVar4 = a0[3];
    ain0 = (float *)((int)a1[2] * 4 + (int)a1[3]);
    pfVar5 = a0;
    ar5_00 = a1;
    fVar8 = ar6_00;
    if ((u32)ar6_00 < (u32)a0[1]) {
        do {
            pfVar7 = (float *)((int)fVar8 * (int)*a0 * 4 + (int)a0[3]);
            pfVar9 = pfVar7 + (int)fVar8;
            fVar15 = *pfVar9;
            pfVar6 = pfVar7 + -(int)*a0;
            fVar13 = pfVar9[-1];
            uVar14 = CONCAT44(fVar15, fVar13);
            fVar11 = fVar13;
            if (fVar13 <= 0.0) {
                fVar11 = -fVar13;
            }
            fVar10 = fVar15;
            if (fVar15 <= 0.0) {
                fVar10 = -fVar15;
            }
            bVar16 = 0;
            bVar17 = 0;
            bVar18 = 0;
            if (fVar10 <= fVar11) {
                fVar13 = -fVar15 / fVar13;
                fVar11 = fVar13;
                noop_11fbb6();
                cVar1 = (char)((((u32)bVar16 << 0x12 | (u32)bVar17 << 0x13 | (u32)bVar18 << 0x14) & 0x100000) >> 0x14);
                if (cVar1 == '\0') {
                    fVar15 = 1.0;
                } else {
                    fVar15 = 0.0;
                }
                uVar12 = in_xd2;
                if (cVar1 == '\0') {
                    uVar12 = CONCAT44(fVar15 / fVar13, fVar15 / fVar13);
                }
                fVar13 = (float)((u64)uVar12 >> 0x20);
                fVar11 = (float)uVar12 * fVar11;
            } else {
                fVar15 = -fVar13 / fVar15;
                fVar13 = fVar15;
                noop_11fbb6();
                cVar1 = (char)((((u32)bVar16 << 0x12 | (u32)bVar17 << 0x13 | (u32)bVar18 << 0x14) & 0x100000) >> 0x14);
                if (cVar1 == '\0') {
                    fVar11 = 1.0;
                } else {
                    fVar11 = -INFINITY;
                }
                uVar12 = in_xd2;
                if (cVar1 == '\0') {
                    uVar12 = CONCAT44(fVar11 / fVar15, fVar11 / fVar15);
                }
                fVar11 = (float)uVar12;
                fVar13 = (float)((u64)uVar12 >> 0x20) * fVar13;
            }
            fVar15 = 1.4013e-45;
            if (1 < (u32)fVar8) {
                do {
                    fVar10 = *pfVar7;
                    pfVar7 = pfVar7 + 1;
                    fVar15 = (float)((int)fVar15 + 1);
                    *pfVar6 = fVar10;
                    pfVar6 = pfVar6 + 1;
                } while ((u32)fVar15 < (u32)fVar8);
            }
            *pfVar6 = (float)uVar14 * fVar13 - (float)((u64)uVar14 >> 0x20) * fVar11;
            for (pfVar5 = pfVar9 + -1 + (int)*a0; pfVar5 < (float *)((int)fVar2 * (int)fVar3 * 4 + (int)fVar4);
                 pfVar5 = pfVar5 + (int)*a0) {
                fVar15 = *pfVar5;
                *pfVar5 = (float)*(u64 *)pfVar5 * fVar13 - (float)((u64) * (u64 *)pfVar5 >> 0x20) * fVar11;
                pfVar5[1] = fVar11 * fVar15 + pfVar5[1] * fVar13;
            }
            for (pfVar5 = (float *)((int)fVar8 * 4 + (int)a1[3]); pfVar5 < ain0; pfVar5 = pfVar5 + (int)*a1) {
                ar5_00 = pfVar5 + -1;
                fVar15 = *ar5_00;
                *ar5_00 = fVar15 * fVar13 - *pfVar5 * fVar11;
                *pfVar5 = fVar11 * fVar15 + *pfVar5 * fVar13;
            }
            fVar8 = (float)((int)fVar8 + 1);
        } while ((u32)fVar8 < (u32)a0[1]);
    }
    a0[1] = (float)((int)a0[1] + -1);
    return 0;
}

/*
 * asr_sub_112958  0x8c112958
 * area name: in the asr library code range
 * called by: asr_sub_11b93c
 */
u32 asr_sub_112958(u32 *a0, int a1, int a2) {
    float *pfVar1;
    u32 uVar2;
    float *pfVar3;
    u32 uVar4;
    float *pfVar5;
    float *pfVar6;
    float *pfVar7;
    float *pfVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    bool bVar12;

    pfVar8 = (float *)a0[3];
    pfVar5 = *(float **)(a1 + 0xc);
    uVar4 = 0;
    pfVar3 = *(float **)(a2 + 0xc);
    while (bVar12 = uVar4 < a0[1], uVar4 = uVar4 + 1, bVar12) {
        fVar11 = *pfVar3;
        pfVar7 = pfVar3 + 1;
        pfVar8 = pfVar8 + uVar4;
        pfVar1 = pfVar7;
        uVar2 = uVar4;
        pfVar6 = pfVar8;
        if (uVar4 < *a0) {
            do {
                uVar2 = uVar2 + 1;
                fVar9 = *pfVar6;
                pfVar6 = pfVar6 + 1;
                fVar10 = *pfVar1;
                pfVar1 = pfVar1 + 1;
                fVar11 = fVar9 * fVar10 + fVar11;
            } while (uVar2 < *a0);
        }
        fVar9 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        *pfVar3 = *pfVar3 - fVar11 * fVar9;
        uVar2 = uVar4;
        pfVar3 = pfVar7;
        if (uVar4 < *a0) {
            do {
                uVar2 = uVar2 + 1;
                fVar10 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                *pfVar7 = *pfVar7 - fVar11 * fVar9 * fVar10;
                pfVar7 = pfVar7 + 1;
            } while (uVar2 < *a0);
        }
    }
    return 0;
}

/*
 * asr_sub_1129e4  0x8c1129e4
 * area name: in the asr library code range
 * called by: asr_sub_1124ea, asr_sub_11b93c
 */
u32 asr_sub_1129e4(int a0, int a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;

    uVar3 = *(u32 *)(a0 + 8);
    puVar4 = *(u32 **)(a0 + 0xc);
    uVar1 = 0;
    puVar2 = *(u32 **)(a1 + 0xc);
    if (uVar3 != 0) {
        do {
            uVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            uVar1 = uVar1 + 1;
            *puVar4 = uVar5;
            puVar4 = puVar4 + 1;
        } while (uVar1 < uVar3);
    }
    return ain0;
}

/*
 * asr_sub_112a02  0x8c112a02
 * area name: in the asr library code range
 * called by: asr_sub_11b93c
 */
u32 asr_sub_112a02(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 in_fr4;

    uVar2 = *(u32 *)(a0 + 8);
    puVar3 = *(u32 **)(a0 + 0xc);
    uVar1 = 0;
    if (uVar2 != 0) {
        do {
            uVar1 = uVar1 + 1;
            *puVar3 = in_fr4;
            puVar3 = puVar3 + 1;
        } while (uVar1 < uVar2);
    }
    return ain0;
}

/*
 * asr_sub_112a20  0x8c112a20
 * area name: in the asr library code range
 * called by: asr_sub_11495c, asr_sub_114e80, asr_sub_11b13e
 */
u32 asr_sub_112a20(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    float extraout_fr0;

    asr_state_has_event(a0, 0x10, a2);
    *(u32 *)(a0 + 0x138) = a1;
    *(u32 *)(a0 + 0x140) = a1;
    uVar1 = (int)extraout_fr0 & 0xffff;
    if (*(char *)(a0 + 0xf9) == '\0') {
        if (uVar1 < a1) {
            uVar1 = a1;
        }
        *(u32 *)(a0 + 0x13c) = uVar1;
    } else {
        *(u32 *)(a0 + 0x13c) = 1;
    }
    if ((a1 < 2) && (*(char *)(a0 + 0xf8) == '\0')) {
        if (*(code **)(a0 + 0x130) == asr_sub_117bac) {
            return 0;
        }
        *(code **)(a0 + 0x130) = asr_sub_117bac;
        *(u32 *)(a0 + 0x134) = *(u32 *)(a0 + 0x130);
        if (*(int *)(a0 + 0x44) == 0) {
            return 0;
        }
        if (*(int *)(a0 + 0xb0) != 0) {
            return 0;
        }
        uVar1 = asr_sub_115732(a0, 1, a2, a3);
    } else {
        if (*(code **)(a0 + 0x130) == asr_sub_11617a) {
            return 0;
        }
        *(code **)(a0 + 0x130) = asr_sub_11617a;
        *(u32 *)(a0 + 0x134) = *(u32 *)(a0 + 0x130);
        if (*(int *)(a0 + 0x44) == 0) {
            return 0;
        }
        if (*(int *)(a0 + 0xa8) != 0) {
            return 0;
        }
        uVar1 = asr_sub_1155a0(a0, 1);
    }
    if ((uVar1 & 0xff) == 0) {
        return 0;
    }
    return 1;
}

/*
 * asr_sub_112a28  0x8c112a28
 * area name: in the asr library code range
 */
u32 asr_sub_112a28(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int unaff_r14;
    u32 extraout_fr1;
    float extraout_fr0;
    u8 in_FPSCR_CAUSE;
    u8 in_FPSCR_DN;
    u8 in_FPSCR_PR;

    asr_state_has_event(a0, 0x10, a2);
    iVar1 = (int)0x138;
    uVar2 = ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13) & 0xffe7ffff;
    *(u32 *)(iVar1 + unaff_r14) = a1;
    *(u32 *)(iVar1 + 8 + unaff_r14) = a1;
    if ((char)((uVar2 & 0x80000) >> 0x13) == '\0') {
        uVar2 = (u32)extraout_fr0;
    } else {
        uVar2 = (u32)(double)CONCAT44(extraout_fr0, extraout_fr1);
    }
    uVar2 = uVar2 & 0xffff;
    if (*(char *)(iVar1 + -0x3f + unaff_r14) == '\0') {
        if (uVar2 < a1) {
            uVar2 = a1;
        }
        *(u32 *)(0x13c + unaff_r14) = uVar2;
    } else {
        *(u32 *)(0x13c + unaff_r14) = 1;
    }
    if ((a1 < 2) && (*(char *)(0xf8 + unaff_r14) == '\0')) {
        iVar1 = (int)0x130;
        if (*(u8 **)(iVar1 + unaff_r14) == (&asr_sub_117bac)) {
            return 0;
        }
        *(u8 **)(iVar1 + unaff_r14) = (&asr_sub_117bac);
        *(u32 *)(iVar1 + 4 + unaff_r14) = *(u32 *)(iVar1 + unaff_r14);
        if (*(int *)(unaff_r14 + 0x44) == 0) {
            return 0;
        }
        if (*(int *)(0xb0 + unaff_r14) != 0) {
            return 0;
        }
        uVar2 = asr_sub_115732(unaff_r14, 1, a2, a3);
    } else {
        iVar1 = (int)0x130;
        if (*(u8 **)(iVar1 + unaff_r14) == (&asr_sub_11617a)) {
            return 0;
        }
        *(u8 **)(iVar1 + unaff_r14) = (&asr_sub_11617a);
        *(u32 *)(iVar1 + 4 + unaff_r14) = *(u32 *)(iVar1 + unaff_r14);
        if (*(int *)(unaff_r14 + 0x44) == 0) {
            return 0;
        }
        if (*(int *)(0xa8 + unaff_r14) != 0) {
            return 0;
        }
        uVar2 = asr_sub_1155a0(unaff_r14, 1);
    }
    if ((uVar2 & 0xff) == 0) {
        return 0;
    }
    return 1;
}

/*
 * asr_sub_112b1c  0x8c112b1c
 * area name: in the asr library code range
 * called by: asr_sub_113e98, asr_sub_114e80, asr_sub_11b13e
 */
int asr_sub_112b1c(int a0, u32 a1) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;

    *(u16 *)(0x1be + a0) = (u16)a1;
    uVar1 = 0x80;
    iVar2 = (int)0xc0;
    if (*(int *)(iVar2 + a0) != 0) {
        uVar3 = 0;
        if (*(int *)(a0 + 0x38) != 0) {
            do {
                if ((*(u16 *)(uVar3 * 2 + *(int *)(0xc0 + a0)) & uVar1) == 0) {
                    iVar2 = *(int *)(0x1c0 + a0);
                    *(u16 *)(iVar2 + uVar3 * 2) = 0;
                } else {
                    iVar2 = *(int *)(0x1c0 + a0);
                    *(u16 *)(iVar2 + uVar3 * 2) = (u16)a1;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(u32 *)(a0 + 0x38));
        }
    }
    return iVar2;
}

/*
 * asr_sub_112b6e  0x8c112b6e
 * area name: in the asr library code range
 * called by: asr_sub_1133f6, asr_sub_11372e, asr_sub_115ac8
 */
u32 asr_sub_112b6e(int *a0, int a1, u32 a2, u32 a3) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int ar6_00;
    u32 uVar5;
    int iVar6;
    int a4;

    iVar6 = a0[0x17];
    a4 = *a0;
    iVar2 = (**(code **)(a4 + 0x10))(a4, (iVar6 + 1) * 4, a2, a3);
    if (iVar2 != 0) {
        if (iVar6 != 0) {
            ar6_00 = iVar6 << 2;
            memmove(iVar2, a0[0x16], ar6_00);
            (**(code **)(a4 + 0x18))(a4, a0[0x16], ar6_00, a3);
        }
        a0[0x16] = iVar2;
        a2 = 0x20;
        iVar2 = (**(code **)(a4 + 0x14))(a4, (u32)(*(u16 *)((int)0x1e4 + (int)a0) >> 5), 0x20, a3);
        if (iVar2 != 0) {
            if (a1 != 0) {
                uVar1 = *(u16 *)((int)0x1e4 + (int)a0);
                *(int *)(a1 + 0x18) = iVar2;
                uVar5 = (u32)(uVar1 >> 5);
                uVar3 = 0;
                uVar4 = uVar3;
                if (uVar5 != 1) {
                    do {
                        uVar3 = uVar4 + 1;
                        *(u32 *)(uVar4 * 0x20 + iVar2 + 0x18) = (uVar4 + 1) * 0x20 + iVar2;
                        uVar4 = uVar3;
                    } while (uVar3 < uVar5 - 1);
                }
                *(u32 *)(uVar3 * 0x20 + iVar2 + 0x18) = 0;
            }
            *(int *)(a0[0x16] + iVar6 * 4) = iVar2;
            a0[0x17] = iVar6 + 1;
            return iVar2;
        }
    }
    asr_fsm_set_result(a0, 2, a2, a3);
    return 0;
}

/*
 * asr_sub_112c90  0x8c112c90
 * area name: in the asr library code range
 * called by: asr_sub_1133f6, asr_sub_11b13e
 */
u32 asr_sub_112c90(int *a0) {
    u32 uVar1;
    int iVar2;

    iVar2 = *a0;
    uVar1 = 0;
    if (a0[0x17] != 0) {
        do {
            (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)(a0[0x16] + uVar1 * 4));
            uVar1 = uVar1 + 1;
        } while (uVar1 < (u32)a0[0x17]);
    }
    if (a0[0x16] != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, a0[0x16]);
    }
    a0[0x16] = 0;
    a0[0x17] = 0;
    return 0x5c;
}

/*
 * asr_sub_112c9e  0x8c112c9e
 * area name: in the asr library code range
 */
u32 asr_sub_112c9e(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 unaff_r11;
    u32 uVar1;
    int a4;
    int *unaff_r14;

    a4 = *unaff_r14;
    uVar1 = unaff_r11;
    if (unaff_r11 < *(u32 *)(in_r0 + (int)unaff_r14)) {
        do {
            (**(code **)(a4 + 0x18))(a4, *(u32 *)(unaff_r14[0x16] + uVar1 * 4), a2, a3);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (u32)unaff_r14[0x17]);
    }
    if (unaff_r14[0x16] != 0) {
        (**(code **)(a4 + 0x18))(a4, unaff_r14[0x16], a2, a3);
    }
    unaff_r14[0x16] = unaff_r11;
    unaff_r14[0x17] = unaff_r11;
    return 0x5c;
}

/*
 * asr_sub_112d00  0x8c112d00
 * area name: in the asr library code range
 * called by: asr_sub_11372e
 */
u32 asr_sub_112d00(int a0) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;

    iVar1 = 0;
    uVar5 = (u32)(*(u16 *)(0x1e4 + a0) >> 5);
    uVar6 = 0;
    if (*(int *)(a0 + 0x5c) != 0) {
        do {
            iVar4 = *(int *)(*(int *)(a0 + 0x58) + uVar6 * 4);
            if (iVar1 != 0) {
                *(int *)(iVar1 + 0x18) = iVar4;
            }
            uVar2 = 0;
            uVar3 = uVar2;
            if (uVar5 != 1) {
                do {
                    uVar2 = uVar3 + 1;
                    *(u32 *)(uVar3 * 0x20 + iVar4 + 0x18) = (uVar3 + 1) * 0x20 + iVar4;
                    uVar3 = uVar2;
                } while (uVar2 < uVar5 - 1);
            }
            uVar6 = uVar6 + 1;
            iVar1 = uVar2 * 0x20 + iVar4;
        } while (uVar6 < *(u32 *)(a0 + 0x5c));
    }
    if (iVar1 != 0) {
        *(u32 *)(iVar1 + 0x18) = 0;
    }
    *(u32 *)(a0 + 0x54) = **(u32 **)(a0 + 0x58);
    return 0;
}

/*
 * asr_sub_112d82  0x8c112d82
 * area name: in the asr library code range
 * called by: asr_sub_1133f6, asr_sub_119c68, asr_sub_11a0e8
 */
u32 asr_sub_112d82(int *a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    code *extraout_r3;
    u32 uVar4;
    int iVar5;
    int iVar6;

    iVar5 = a0[0x22];
    iVar6 = *a0;
    iVar1 = (**(code **)(iVar6 + 0x10))(iVar6, (iVar5 + 1) * 4, a2, a3);
    if (iVar1 != 0) {
        if (iVar5 != 0) {
            a2 = iVar5 << 2;
            memmove(iVar1, a0[0x21], a2);
            (**(code **)(iVar6 + 0x18))(iVar6, a0[0x21], a2, a3);
        }
        a0[0x21] = iVar1;
        iVar1 = libgcc_divide_helper_01051c((u32) * (u16 *)(a0 + 0x79), 0x18);
        iVar1 = (*extraout_r3)(iVar6, iVar1 * 0x18, a2, a3);
        if (iVar1 != 0) {
            iVar6 = libgcc_divide_helper_01051c((u32) * (u16 *)(a0 + 0x79), 0x18);
            if (a1 == 0) {
                a0[0x23] = iVar1;
                a0[0x20] = 0;
            } else {
                *(int *)(a1 + 0x10) = iVar1;
            }
            uVar4 = 0;
            if (iVar6 != 1) {
                do {
                    iVar3 = uVar4 + 1;
                    iVar2 = uVar4 * 0x18;
                    uVar4 = uVar4 + 1;
                    *(int *)(iVar2 + iVar1 + 0x10) = iVar3 * 0x18 + iVar1;
                } while (uVar4 < iVar6 - 1U);
            }
            *(u32 *)(uVar4 * 0x18 + iVar1 + 0x10) = 0;
            *(int *)(a0[0x21] + iVar5 * 4) = iVar1;
            a0[0x22] = iVar5 + 1;
            return iVar1;
        }
    }
    asr_fsm_set_result(a0, 2, a2, a3);
    return 0;
}

/*
 * asr_sub_112ec6  0x8c112ec6
 * area name: in the asr library code range
 * called by: asr_sub_1133f6, asr_sub_11b13e
 */
int asr_sub_112ec6(int *a0) {
    u32 uVar1;
    int iVar2;

    iVar2 = *a0;
    uVar1 = 0;
    if (*(int *)((int)0x88 + (int)a0) != 0) {
        do {
            (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)(*(int *)((int)0x84 + (int)a0) + uVar1 * 4));
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(u32 *)((int)0x88 + (int)a0));
    }
    if (*(int *)((int)0x84 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x84 + (int)a0));
    }
    iVar2 = (int)0x84;
    *(u32 *)(iVar2 + (int)a0) = 0;
    iVar2 = iVar2 + 4;
    *(u32 *)(iVar2 + (int)a0) = 0;
    return iVar2;
}

/*
 * asr_sub_112ed4  0x8c112ed4
 * area name: in the asr library code range
 */
int asr_sub_112ed4(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 unaff_r11;
    u32 uVar1;
    int iVar2;
    int *unaff_r14;

    iVar2 = *unaff_r14;
    uVar1 = unaff_r11;
    if (unaff_r11 < *(u32 *)(in_r0 + (int)unaff_r14)) {
        do {
            (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)(*(int *)((int)0x84 + (int)unaff_r14) + uVar1 * 4), a2, a3);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(u32 *)((int)0x88 + (int)unaff_r14));
    }
    if (*(int *)((int)0x84 + (int)unaff_r14) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x84 + (int)unaff_r14), a2, a3);
    }
    iVar2 = (int)0x84;
    *(u32 *)(iVar2 + (int)unaff_r14) = unaff_r11;
    iVar2 = iVar2 + 4;
    *(u32 *)(iVar2 + (int)unaff_r14) = unaff_r11;
    return iVar2;
}

/*
 * asr_sub_112f40  0x8c112f40
 * area name: in the asr library code range
 * called by: asr_sub_11abf0, asr_sub_11ac4c, asr_sub_11ad68
 */
u32 asr_sub_112f40(int a0) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;

    uVar6 = 0;
    uVar4 = 0;
    iVar1 = libgcc_divide_helper_01051c((u32) * (u16 *)(a0 + 0x1e4), 0x18);
    uVar7 = uVar4;
    if (uVar4 < *(u32 *)(a0 + 0x88)) {
        do {
            iVar5 = *(int *)(*(int *)(a0 + 0x84) + uVar7 * 4);
            if (uVar4 != 0) {
                *(int *)(uVar4 + 0x10) = iVar5;
            }
            uVar4 = uVar6;
            if (iVar1 != 1) {
                do {
                    iVar3 = uVar4 + 1;
                    iVar2 = uVar4 * 0x18;
                    uVar4 = uVar4 + 1;
                    *(int *)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
                } while (uVar4 < iVar1 - 1U);
            }
            uVar7 = uVar7 + 1;
            uVar4 = uVar4 * 0x18 + iVar5;
        } while (uVar7 < *(u32 *)(a0 + 0x88));
    }
    if (uVar4 != 0) {
        *(u32 *)(uVar4 + 0x10) = uVar6;
    }
    *(u32 *)(a0 + 0x8c) = **(u32 **)(a0 + 0x84);
    *(u32 *)(a0 + 0x80) = uVar6;
    return 0;
}

/*
 * asr_sub_112f48  0x8c112f48
 * area name: in the asr library code range
 */
u32 asr_sub_112f48(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int in_r0;
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    u32 uVar6;

    iVar1 = libgcc_divide_helper_01051c((u32) * (u16 *)(in_r0 + a0), 0x18);
    uVar6 = a1;
    if (a1 < *(u32 *)(a0 + 0x88)) {
        do {
            iVar5 = *(int *)(*(int *)(a0 + 0x84) + uVar6 * 4);
            if (a1 != 0) {
                *(int *)(a1 + 0x10) = iVar5;
            }
            uVar4 = a3;
            if (iVar1 != 1) {
                do {
                    iVar3 = uVar4 + 1;
                    iVar2 = uVar4 * 0x18;
                    uVar4 = uVar4 + 1;
                    *(int *)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
                } while (uVar4 < iVar1 - 1U);
            }
            uVar6 = uVar6 + 1;
            a1 = uVar4 * 0x18 + iVar5;
        } while (uVar6 < *(u32 *)(a0 + 0x88));
    }
    if (a1 != 0) {
        *(u32 *)(a1 + 0x10) = a3;
    }
    *(u32 *)(a0 + 0x8c) = **(u32 **)(a0 + 0x84);
    *(u32 *)(a0 + 0x80) = a3;
    return 0;
}

/*
 * asr_sub_112fd8  0x8c112fd8
 * area name: in the asr library code range
 * called by: asr_sub_1133f6, asr_sub_119320, asr_sub_1197d8, asr_sub_11a014, asr_sub_11a02c, asr_sub_11b5a0
 */
u32 asr_sub_112fd8(int *a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    code *extraout_r3;
    u32 uVar4;
    int iVar5;
    int iVar6;

    iVar5 = a0[0x44];
    iVar6 = *a0;
    iVar1 = (**(code **)(iVar6 + 0x10))(iVar6, (iVar5 + 1) * 4, a2, a3);
    if (iVar1 != 0) {
        if (iVar5 != 0) {
            a2 = iVar5 << 2;
            memmove(iVar1, a0[0x43], a2);
            (**(code **)(iVar6 + 0x18))(iVar6, a0[0x43], a2, a3);
        }
        a0[0x43] = iVar1;
        iVar1 = libgcc_divide_helper_01051c((u32) * (u16 *)(a0 + 0x79), 0x18);
        iVar1 = (*extraout_r3)(iVar6, iVar1 * 0x18, a2, a3);
        if (iVar1 != 0) {
            if (a1 != 0) {
                iVar6 = libgcc_divide_helper_01051c((u32) * (u16 *)(a0 + 0x79), 0x18);
                *(int *)(a1 + 4) = iVar1;
                uVar4 = 0;
                if (iVar6 != 1) {
                    do {
                        iVar3 = uVar4 + 1;
                        iVar2 = uVar4 * 0x18;
                        uVar4 = uVar4 + 1;
                        *(int *)(iVar2 + iVar1 + 4) = iVar3 * 0x18 + iVar1;
                    } while (uVar4 < iVar6 - 1U);
                }
                *(u32 *)(uVar4 * 0x18 + iVar1 + 4) = 0;
            }
            *(int *)(a0[0x43] + iVar5 * 4) = iVar1;
            a0[0x44] = iVar5 + 1;
            return iVar1;
        }
    }
    asr_fsm_set_result(a0, 2, a2, a3);
    return 0;
}

/*
 * asr_sub_113124  0x8c113124
 * area name: in the asr library code range
 * called by: asr_sub_1133f6, asr_sub_11b13e
 */
int asr_sub_113124(int *a0) {
    u32 uVar1;
    int iVar2;

    iVar2 = *a0;
    uVar1 = 0;
    if (*(int *)((int)0x110 + (int)a0) != 0) {
        do {
            (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)(*(int *)((int)0x10c + (int)a0) + uVar1 * 4));
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(u32 *)((int)0x110 + (int)a0));
    }
    if (*(int *)((int)0x10c + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x10c + (int)a0));
    }
    iVar2 = (int)0x10c;
    *(u32 *)(iVar2 + (int)a0) = 0;
    iVar2 = iVar2 + 4;
    *(u32 *)(iVar2 + (int)a0) = 0;
    return iVar2;
}

/*
 * asr_sub_113132  0x8c113132
 * area name: in the asr library code range
 */
int asr_sub_113132(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 unaff_r11;
    u32 uVar1;
    int iVar2;
    int *unaff_r14;

    iVar2 = *unaff_r14;
    uVar1 = unaff_r11;
    if (unaff_r11 < *(u32 *)(in_r0 + (int)unaff_r14)) {
        do {
            (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)(*(int *)((int)0x10c + (int)unaff_r14) + uVar1 * 4), a2, a3);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(u32 *)((int)0x110 + (int)unaff_r14));
    }
    if (*(int *)((int)0x10c + (int)unaff_r14) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x10c + (int)unaff_r14), a2, a3);
    }
    iVar2 = (int)0x10c;
    *(u32 *)(iVar2 + (int)unaff_r14) = unaff_r11;
    iVar2 = iVar2 + 4;
    *(u32 *)(iVar2 + (int)unaff_r14) = unaff_r11;
    return iVar2;
}

/*
 * asr_sub_11318e  0x8c11318e
 * area name: in the asr library code range
 * called by: asr_sub_1155a0, asr_sub_1155a4, asr_sub_115f18, asr_sub_11a0e8
 */
u32 asr_sub_11318e(int *a0, int *a1, int a2, u32 a3) {
    u16 uVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;
    u32 uVar5;
    code *extraout_r3;
    int *piVar6;
    u32 uVar7;
    u32 uVar8;
    int iVar9;
    u32 uVar10;

    uVar1 = *(u16 *)(a0 + 0x47);
    iVar9 = *a0;
    uVar8 = (u32)uVar1;
    iVar3 = (**(code **)(iVar9 + 0x10))(iVar9, (uVar8 + 1) * 4, 0);
    if (iVar3 != 0) {
        if (uVar8 != 0) {
            a2 = uVar8 << 2;
            memmove(iVar3, a0[0x46], a2);
            (**(code **)(iVar9 + 0x18))(iVar9, a0[0x46]);
        }
        a0[0x46] = iVar3;
        iVar3 = libgcc_divide_helper_01051c((u32) * (u16 *)(a0 + 0x79), 0xc);
        piVar4 = (int *)(*extraout_r3)(iVar9, iVar3 * 0xc);
        if (piVar4 != NULL) {
            iVar3 = libgcc_divide_helper_01051c((u32) * (u16 *)(a0 + 0x79), 0xc);
            uVar7 = iVar3 - 1;
            if (a1 != NULL) {
                *a1 = (int)piVar4;
                piVar4[1] = (int)a1;
            }
            uVar10 = 0;
            piVar6 = piVar4;
            piVar2 = piVar4;
            if (uVar7 != 0) {
                do {
                    uVar10 = uVar10 + 1;
                    *piVar6 = (int)(piVar2 + 3);
                    piVar2[4] = (int)piVar6;
                    piVar6 = piVar6 + 3;
                    piVar2 = piVar2 + 3;
                } while (uVar10 < uVar7);
            }
            piVar4[uVar7 * 3] = 0;
            *(int **)(a0[0x46] + uVar8 * 4) = piVar4;
            *(u16 *)(a0 + 0x47) = uVar1 + 1;
            if (a0[0x49] == 0) {
                a0[0x49] = (int)piVar4;
            }
            a0[0x48] = (int)(piVar4 + uVar7 * 3);
            return 0x120;
        }
    }
    uVar5 = asr_fsm_set_result(a0, 2, a2, a3);
    return uVar5;
}

/*
 * asr_sub_11319e  0x8c11319e
 * area name: in the asr library code range
 */
u32 asr_sub_11319e(u32 unused_a0, u32 unused_a1, int a2, u32 a3, int ain0) {
    u16 uVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;
    u32 uVar5;
    code *extraout_r3;
    int *piVar6;
    u32 uVar7;
    int *unaff_r10;
    u32 uVar8;
    int a4;
    u32 uVar9;
    int *unaff_r14;

    uVar1 = *(u16 *)(ain0 + (int)unaff_r14);
    a4 = *unaff_r14;
    uVar8 = (u32)uVar1;
    iVar3 = (**(code **)(a4 + 0x10))(a4, (uVar8 + 1) * 4, a2, a3);
    if (iVar3 != 0) {
        if (uVar8 != 0) {
            a2 = uVar8 << 2;
            memmove(iVar3, unaff_r14[0x46], a2);
            (**(code **)(a4 + 0x18))(a4, unaff_r14[0x46], a2, a3);
        }
        unaff_r14[0x46] = iVar3;
        iVar3 = libgcc_divide_helper_01051c((u32) * (u16 *)(unaff_r14 + 0x79), 0xc);
        piVar4 = (int *)(*extraout_r3)(a4, iVar3 * 0xc, a2, a3);
        if (piVar4 != NULL) {
            iVar3 = libgcc_divide_helper_01051c((u32) * (u16 *)(unaff_r14 + 0x79), 0xc);
            uVar7 = iVar3 - 1;
            if (unaff_r10 != NULL) {
                *unaff_r10 = (int)piVar4;
                piVar4[1] = (int)unaff_r10;
            }
            uVar9 = 0;
            piVar6 = piVar4;
            piVar2 = piVar4;
            if (uVar7 != 0) {
                do {
                    uVar9 = uVar9 + 1;
                    *piVar6 = (int)(piVar2 + 3);
                    piVar2[4] = (int)piVar6;
                    piVar6 = piVar6 + 3;
                    piVar2 = piVar2 + 3;
                } while (uVar9 < uVar7);
            }
            piVar4[uVar7 * 3] = 0;
            *(int **)(unaff_r14[0x46] + uVar8 * 4) = piVar4;
            *(u16 *)(unaff_r14 + 0x47) = uVar1 + 1;
            if (unaff_r14[0x49] == 0) {
                unaff_r14[0x49] = (int)piVar4;
            }
            unaff_r14[0x48] = (int)(piVar4 + uVar7 * 3);
            return 0x120;
        }
    }
    uVar5 = asr_fsm_set_result(unaff_r14, 2, a2, a3);
    return uVar5;
}

/*
 * asr_sub_1132cc  0x8c1132cc
 * area name: in the asr library code range
 * called by: asr_sub_11b13e
 */
int asr_sub_1132cc(int *a0) {
    u32 uVar1;
    int iVar2;

    iVar2 = *a0;
    uVar1 = 0;
    if (*(short *)((int)0x11c + (int)a0) != 0) {
        do {
            (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)(*(int *)((int)0x118 + (int)a0) + uVar1 * 4));
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(u16 *)((int)0x11c + (int)a0));
    }
    if (*(int *)((int)0x118 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x118 + (int)a0));
    }
    iVar2 = (int)0x118;
    *(u32 *)(iVar2 + (int)a0) = 0;
    *(u16 *)(iVar2 + 4 + (int)a0) = 0;
    *(u32 *)(iVar2 + 8 + (int)a0) = 0;
    *(u32 *)(iVar2 + 0xc + (int)a0) = 0;
    return iVar2 + 0xc;
}

/*
 * asr_sub_1132da  0x8c1132da
 * area name: in the asr library code range
 */
int asr_sub_1132da(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 unaff_r11;
    u32 uVar1;
    int iVar2;
    int *unaff_r14;

    iVar2 = *unaff_r14;
    uVar1 = unaff_r11;
    if (unaff_r11 < *(u16 *)(in_r0 + (int)unaff_r14)) {
        do {
            (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)(*(int *)((int)0x118 + (int)unaff_r14) + uVar1 * 4), a2, a3);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(u16 *)((int)0x11c + (int)unaff_r14));
    }
    if (*(int *)((int)0x118 + (int)unaff_r14) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x118 + (int)unaff_r14), a2, a3);
    }
    iVar2 = (int)0x118;
    *(u32 *)(iVar2 + (int)unaff_r14) = unaff_r11;
    *(short *)(iVar2 + 4 + (int)unaff_r14) = (short)unaff_r11;
    *(u32 *)(iVar2 + 8 + (int)unaff_r14) = unaff_r11;
    *(u32 *)(iVar2 + 0xc + (int)unaff_r14) = unaff_r11;
    return iVar2 + 0xc;
}

/*
 * asr_sub_113354  0x8c113354
 * area name: in the asr library code range
 * called by: asr_sub_11372e, asr_sub_115ac8
 */
u32 *asr_sub_113354(int a0) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u32 *puVar5;
    u32 uVar6;
    int iVar7;
    u32 uVar8;

    uVar6 = 0;
    uVar4 = 0;
    iVar1 = libgcc_divide_helper_01051c((u32) * (u16 *)(a0 + 0x1e4), 0x18);
    uVar8 = uVar4;
    if (uVar4 < *(u32 *)(a0 + 0x110)) {
        do {
            iVar7 = *(int *)(*(int *)(a0 + 0x10c) + uVar8 * 4);
            if (uVar4 != 0) {
                *(int *)(uVar4 + 4) = iVar7;
            }
            uVar4 = uVar6;
            if (iVar1 != 1) {
                do {
                    iVar3 = uVar4 + 1;
                    iVar2 = uVar4 * 0x18;
                    uVar4 = uVar4 + 1;
                    *(int *)(iVar2 + iVar7 + 4) = iVar3 * 0x18 + iVar7;
                } while (uVar4 < iVar1 - 1U);
            }
            uVar8 = uVar8 + 1;
            uVar4 = uVar4 * 0x18 + iVar7;
        } while (uVar8 < *(u32 *)(a0 + 0x110));
    }
    if (uVar4 != 0) {
        *(u32 *)(uVar4 + 4) = uVar6;
    }
    puVar5 = (u32 *)**(u32 **)(a0 + 0x10c);
    puVar5[3] = uVar6;
    puVar5[5] = uVar6;
    *puVar5 = uVar6;
    puVar5[2] = uVar6;
    puVar5[4] = uVar6;
    *(u32 *)(a0 + 0x114) = puVar5[1];
    return puVar5;
}

/*
 * asr_sub_11335c  0x8c11335c
 * area name: in the asr library code range
 */
u32 *asr_sub_11335c(int a0, u32 a1, u32 a2) {
    int in_r0;
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u32 *puVar5;
    int iVar6;
    u32 uVar7;

    iVar1 = libgcc_divide_helper_01051c((u32) * (u16 *)(in_r0 + a0), 0x18);
    uVar7 = a1;
    if (a1 < *(u32 *)(a0 + 0x110)) {
        do {
            iVar6 = *(int *)(*(int *)(a0 + 0x10c) + uVar7 * 4);
            if (a1 != 0) {
                *(int *)(a1 + 4) = iVar6;
            }
            uVar4 = a2;
            if (iVar1 != 1) {
                do {
                    iVar3 = uVar4 + 1;
                    iVar2 = uVar4 * 0x18;
                    uVar4 = uVar4 + 1;
                    *(int *)(iVar2 + iVar6 + 4) = iVar3 * 0x18 + iVar6;
                } while (uVar4 < iVar1 - 1U);
            }
            uVar7 = uVar7 + 1;
            a1 = uVar4 * 0x18 + iVar6;
        } while (uVar7 < *(u32 *)(a0 + 0x110));
    }
    if (a1 != 0) {
        *(u32 *)(a1 + 4) = a2;
    }
    puVar5 = (u32 *)**(u32 **)(a0 + 0x10c);
    puVar5[3] = a2;
    puVar5[5] = a2;
    *puVar5 = a2;
    puVar5[2] = a2;
    puVar5[4] = a2;
    *(u32 *)(a0 + 0x114) = puVar5[1];
    return puVar5;
}

/*
 * asr_sub_1133f6  0x8c1133f6
 * area name: in the asr library code range
 * called by: asr_sub_11372e, asr_sub_114e80, asr_sub_115ac8
 */
u32 asr_sub_1133f6(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    asr_sub_113124(a0);
    uVar2 = 0;
    iVar1 = asr_sub_112fd8(a0, 0, a2, a3);
    if (iVar1 != 0) {
        asr_sub_112c90(a0);
        uVar2 = 0;
        iVar1 = asr_sub_112b6e(a0, 0, a2, a3);
        if (iVar1 != 0) {
            asr_sub_112ec6(a0);
            iVar1 = asr_sub_112d82(a0, 0, a2, a3);
            if (iVar1 != 0) {
                return 0;
            }
        }
    }
    return 1;
}

/*
 * asr_sub_11346c  0x8c11346c
 * area name: in the asr library code range
 */
u32 asr_sub_11346c(int a0, u16 *a1, int a2, int *a3) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    int *piVar4;
    u32 uVar5;
    u16 *puVar6;
    u32 *puVar7;
    u16 *puVar8;
    int *piVar9;
    int *piVar10;
    int iVar11;
    u32 uStack_20;

    if (*(int *)(a0 + 0x30) == 1) {
        iVar11 = *(int *)(a0 + 0x54);
        uStack_20 = 0;
        uVar3 = (u32) * (u16 *)(0xe4 + a0);
        if (*(short *)(a0 + 0x50) != 0) {
            do {
                puVar6 = *(u16 **)(iVar11 + 0xc);
                uVar1 = *puVar6 >> 2;
                if (*(char *)(a2 + (u32)uVar1) == '\0') {
                    uVar3 = uVar3 + 1;
                    *(u8 *)(a2 + (u32)uVar1) = 1;
                    a1[uVar3] = uVar1;
                }
                puVar8 = puVar6 + 1;
                if ((*puVar6 & 1) == 0) {
                    uVar1 = *puVar8;
                    a3 = (int *)(u32)(uVar1 >> 2);
                    if (*(char *)(a2 + (int)a3) == '\0') {
                        uVar3 = uVar3 + 1;
                        *(char *)(a2 + (int)a3) = '\x01';
                        a1[uVar3] = uVar1 >> 2;
                    }
                    if ((*puVar8 & 1) != 0) {
                        puVar7 = (u32 *)(*(int *)(puVar6 + 2) * 4 + *(int *)(0x98 + a0));
                        piVar10 = (int *)puVar7[1];
                        a3 = (int *)*puVar7;
                        while (a3 < piVar10) {
                            piVar9 = *(int **)(*a3 * 4 + *(int *)(a0 + 0x44));
                            iVar2 = *a3;
                            a3 = a3 + 1;
                            piVar4 = *(int **)((iVar2 + 1) * 4 + *(int *)(a0 + 0x44));
                            while (piVar9 < piVar4) {
                                iVar2 = *piVar9;
                                piVar9 = piVar9 + 1;
                                uVar1 = *(u16 *)(iVar2 * 2 + *(int *)(a0 + 0x48)) >> 2;
                                if (*(char *)(a2 + (u32)uVar1) == '\0') {
                                    uVar3 = uVar3 + 1;
                                    *(u8 *)(a2 + (u32)uVar1) = 1;
                                    a1[uVar3] = uVar1;
                                }
                            }
                        }
                    }
                } else {
                    puVar7 = (u32 *)(*(int *)puVar8 * 4 + *(int *)(0x98 + a0));
                    piVar10 = (int *)puVar7[1];
                    a3 = (int *)*puVar7;
                    while (a3 < piVar10) {
                        piVar9 = *(int **)(*a3 * 4 + *(int *)(a0 + 0x44));
                        iVar2 = *a3;
                        a3 = a3 + 1;
                        piVar4 = *(int **)((iVar2 + 1) * 4 + *(int *)(a0 + 0x44));
                        while (piVar9 < piVar4) {
                            iVar2 = *piVar9;
                            piVar9 = piVar9 + 1;
                            uVar1 = *(u16 *)(iVar2 * 2 + *(int *)(a0 + 0x48)) >> 2;
                            if (*(char *)(a2 + (u32)uVar1) == '\0') {
                                uVar3 = uVar3 + 1;
                                *(u8 *)(a2 + (u32)uVar1) = 1;
                                a1[uVar3] = uVar1;
                            }
                        }
                    }
                }
                uStack_20 = uStack_20 + 1;
                iVar11 = *(int *)(iVar11 + 0x18);
            } while (uStack_20 < *(u16 *)(a0 + 0x50));
        }
        uVar5 = (u32)(*(u16 *)(*(int *)(a0 + 0x28) + 0xc) >> 1);
        if (uVar5 - uVar3 < (u32) * (u16 *)(a0 + 0x50)) {
            *(u32 *)(a0 + 0x30) = 0;
        }
        if (uVar3 == uVar5) {
            memset(a2, 0, (*(u16 *)(*(int *)(a0 + 0x28) + 0xc) >> 1) + 1);
            *(u32 *)(a0 + 0x30) = 0;
        }
        *a1 = (u16)uVar3;
    } else if (*(int *)(a0 + 0x30) == 0) {
        if (*(u16 *)(a0 + 0x50) < *(u16 *)(*(int *)(a0 + 0x28) + 0xc) >> 2) {
            *(u32 *)(a0 + 0x30) = 1;
        }
        uVar1 = *(u16 *)(*(int *)(a0 + 0x28) + 0xc) >> 1;
        uVar3 = (u32)uVar1;
        *a1 = uVar1;
    } else {
        uVar3 = 0;
    }
    return uVar3;
}

/*
 * asr_sub_11372e  0x8c11372e
 * area name: in the asr library code range
 * called by: asr_sub_114e80, asr_sub_11596e, asr_sub_115980, asr_sub_11b13e
 */
u32 asr_sub_11372e(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    int *piVar4;
    int *piVar5;
    int iVar6;
    u32 uVar7;
    int iVar8;
    int iVar9;
    int *piVar10;
    int iVar11;
    u32 uStack_2c;
    u32 uStack_28;

    iVar9 = 0;
    *(u32 *)((int)0x1ac + (int)a0) = 0;
    *(u16 *)(a0 + 0x14) = 0;
    *(u16 *)(a0 + 0xd) = 0;
    iVar2 = (int)0x150;
    *(u32 *)(iVar2 + (int)a0) = 0;
    *(u32 *)(iVar2 + -0x24 + (int)a0) = 0xffffffff;
    iVar2 = (int)0x1c4;
    *(u16 *)(iVar2 + (int)a0) = 0;
    *(u16 *)(iVar2 + -0x2a + (int)a0) = 0;
    a0[0xc] = 1;
    *(u32 *)(iVar2 + -0x28 + (int)a0) = 0;
    if (*(char *)(iVar2 + -0x70 + (int)a0) != '\0') {
        *(u8 *)((int)0x154 + (int)a0) = 0;
        uVar3 = asr_sub_1133f6(a0, unused_a1, a2, a3);
        if ((uVar3 & 0xff) != 0) {
            return 1;
        }
    }
    piVar4 = (int *)asr_sub_113354(a0);
    piVar4[1] = 0;
    uVar3 = asr_sub_112d00(a0);
    if ((uVar3 & 0xff) == 0) {
        if (*(u8 **)((int)0x134 + (int)a0) == (&asr_sub_11617a)) {
            asr_sub_1157c0(a0);
        }
        if (*(u8 **)((int)0x134 + (int)a0) == (&asr_sub_117bac)) {
            asr_sub_115778(a0);
        }
        iVar2 = 0;
        if (*(u8 **)((int)0x134 + (int)a0) == (&asr_sub_11617a)) {
            iVar11 = a0[0x15];
            uStack_2c = 0;
            if (*(int *)((int)0x144 + (int)a0) != 0) {
                do {
                    uVar7 = *(u32 *)(*(int *)((int)0x148 + (int)a0) + uStack_2c * 4);
                    uVar3 = -(uVar7 & 7);
                    if ((int)uVar3 < 0) {
                        uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
                    } else {
                        uVar3 = (int)0x80 << (uVar3 & 0x1f);
                    }
                    if ((*(u8 *)(*(int *)((int)0x94 + (int)a0) + (uVar7 >> 3)) & uVar3) != 0) {
                        piVar5 = *(int **)((uVar7 + 1) * 4 + a0[0x11]);
                        for (piVar10 = *(int **)(uVar7 * 4 + a0[0x11]); piVar10 < piVar5; piVar10 = piVar10 + 1) {
                            *(int *)(iVar11 + 0xc) = *piVar10 * 2 + a0[0x12];
                            *(u16 *)(iVar11 + 2) = 0;
                            *(int **)(iVar11 + 8) = piVar4;
                            *(u32 *)(iVar11 + 0x10) = 0;
                            iVar9 = (int)0xac;
                            *(int *)(iVar11 + 0x14) = *(int *)((int)0xa4 + (int)a0) + -4;
                            *(u32 *)(iVar11 + 0x1c) = *(int *)(iVar9 + (int)a0) + uStack_2c * 4;
                            if (*(int *)(iVar11 + 0x18) == 0) {
                                iVar8 = asr_sub_112b6e(a0, iVar11, a2, a3);
                            } else {
                                iVar8 = *(int *)(iVar11 + 0x18);
                            }
                            iVar2 = iVar2 + 1;
                            iVar9 = iVar11;
                            iVar11 = iVar8;
                        }
                    }
                    uStack_2c = uStack_2c + 1;
                } while (uStack_2c < *(u32 *)((int)0x144 + (int)a0));
            }
        } else if (*(u8 **)((int)0x134 + (int)a0) == (&asr_sub_119320)) {
            iVar6 = *(int *)((int)0x1b4 + (int)a0);
            iVar8 = a0[0x10];
            uVar3 = 0;
            iVar11 = a0[0x15];
            if (a0[0x10] != 0) {
                do {
                    iVar9 = iVar11;
                    *(u32 *)(iVar9 + 0xc) = uVar3 * 2 + a0[0x12];
                    *(u32 *)(iVar9 + 0x10) = 0;
                    uVar1 = 0x77ff;
                    if (uVar3 == iVar8 - iVar6) {
                        uVar1 = 0;
                    }
                    *(u16 *)(iVar9 + 2) = uVar1;
                    *(int **)(iVar9 + 8) = piVar4;
                    *(int **)(iVar9 + 4) = piVar4;
                    *(u32 *)(iVar9 + 0x14) = 0;
                    if (*(int *)(iVar9 + 0x18) == 0) {
                        iVar11 = asr_sub_112b6e(a0, iVar9, a2, a3);
                    } else {
                        iVar11 = *(int *)(iVar9 + 0x18);
                    }
                    uVar3 = uVar3 + 1;
                    iVar2 = iVar2 + 1;
                } while (uVar3 < (u32)a0[0x10]);
            }
            *piVar4 = iVar2;
        } else {
            iVar11 = a0[0x15];
            if (a0[0x13] == 0) {
                iVar8 = (**(code **)(*a0 + 0x10))(*a0, a0[0x10] << 2, a2, a3);
                a0[0x13] = iVar8;
                if (a0[0x13] == 0) {
                    asr_fsm_set_result(a0, 2, a2, a3);
                    return 1;
                }
            }
            iVar8 = a0[0x10] << 2;
            memset(a0[0x13], 0, iVar8);
            uStack_28 = 0;
            if (*(int *)((int)0x144 + (int)a0) != 0) {
                do {
                    uVar7 = *(u32 *)(*(int *)((int)0x148 + (int)a0) + uStack_28 * 4);
                    uVar3 = -(uVar7 & 7);
                    if ((int)uVar3 < 0) {
                        uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
                    } else {
                        uVar3 = (int)0x80 << (uVar3 & 0x1f);
                    }
                    if ((*(u8 *)(*(int *)((int)0x94 + (int)a0) + (uVar7 >> 3)) & uVar3) != 0) {
                        piVar5 = *(int **)((uVar7 + 1) * 4 + a0[0x11]);
                        for (piVar10 = *(int **)(uVar7 * 4 + a0[0x11]); piVar10 < piVar5; piVar10 = piVar10 + 1) {
                            *(int *)(iVar11 + 0xc) = *piVar10 * 2 + a0[0x12];
                            *(u32 *)(iVar11 + 0x10) = 0;
                            *(u16 *)(iVar11 + 2) = 0;
                            *(int **)(iVar11 + 8) = piVar4;
                            *(u32 *)(iVar11 + 0x14) = 0;
                            *(int *)(a0[0x13] + *piVar10 * 4) = iVar11;
                            if (*(int *)(iVar11 + 0x18) == 0) {
                                iVar6 = asr_sub_112b6e(a0, iVar11, iVar8, a3);
                            } else {
                                iVar6 = *(int *)(iVar11 + 0x18);
                            }
                            iVar2 = iVar2 + 1;
                            iVar9 = iVar11;
                            iVar11 = iVar6;
                        }
                    }
                    uStack_28 = uStack_28 + 1;
                } while (uStack_28 < *(u32 *)((int)0x144 + (int)a0));
            }
        }
        iVar11 = 0;
        iVar8 = 0;
        *piVar4 = *piVar4 + iVar2;
        a0[0x18] = iVar9;
        *(short *)(a0 + 0x14) = (short)iVar2;
        iVar9 = (int)0x160;
        *(u16 *)(iVar9 + -2 + (int)a0) = *(u16 *)(iVar9 + (int)a0);
        *(u8 *)(iVar9 + -4 + (int)a0) = 0;
        do {
            iVar9 = (int)0x184;
            iVar8 = iVar8 + 1;
            *(u32 *)((int)a0 + iVar11 + 0x170) = 0;
            *(u32 *)((int)a0 + iVar11 + iVar9) = 0;
            iVar11 = iVar11 + 4;
        } while (iVar8 < 5);
        *(u8 *)((int)0x198 + (int)a0) = 0;
        return 0;
    }
    return 1;
}

/*
 * asr_sub_113ac8  0x8c113ac8
 * area name: in the asr library code range
 * called by: asr_sub_114e80, asr_sub_11adde, asr_sub_11b13e
 */
int asr_sub_113ac8(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    int *piVar6;
    u32 *puVar7;
    u32 uVar8;
    u32 *puVar9;
    u32 *puVar10;
    u32 *puVar11;
    u32 uVar12;

    iVar1 = (int)0x9c;
    uVar8 = 0;
    uVar5 = (u32)0x80;
    puVar11 = *(u32 **)(iVar1 + a0);
    piVar6 = *(int **)(iVar1 + -4 + a0);
    iVar1 = iVar1 + -0xc;
    puVar9 = *(u32 **)(iVar1 + a0);
    puVar10 = puVar9;
    if (*(int *)(a0 + 0x38) != 0) {
        do {
            *piVar6 = (int)puVar11;
            piVar6 = piVar6 + 1;
            uVar4 = *puVar10;
            puVar10 = puVar10 + 1;
            uVar12 = *puVar10;
            puVar7 = puVar9 + uVar4;
        joined_r0x8c113afe:
            if (uVar4 < uVar12) {
                uVar3 = *puVar7;
                puVar7 = puVar7 + 1;
                iVar1 = *(int *)(0xc0 + a0);
                uVar4 = uVar4 + 1;
                if ((*(u16 *)(iVar1 + uVar3 * 2) & uVar5) != 0)
                    goto code_r0x8c113b16;
                goto LAB_8c113b32;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(u32 *)(a0 + 0x38));
    }
    *piVar6 = (int)puVar11;
    return iVar1;
code_r0x8c113b16:
    iVar1 = *(int *)(0x94 + a0);
    uVar2 = -(uVar3 & 7);
    if ((int)uVar2 < 0) {
        uVar2 = (int)uVar5 >> (~uVar2 & 0x1f) + 1;
    } else {
        uVar2 = uVar5 << (uVar2 & 0x1f);
    }
    if ((*(u8 *)(iVar1 + (uVar3 >> 3)) & uVar2) != 0) {
    LAB_8c113b32:
        *puVar11 = uVar3;
        puVar11 = puVar11 + 1;
    }
    goto joined_r0x8c113afe;
}

/*
 * asr_sub_113b54  0x8c113b54
 * area name: in the asr library code range
 * called by: asr_sub_114e80
 */
int asr_sub_113b54(int a0) {
    int iVar1;
    int iVar2;
    u32 *puVar3;

    iVar1 = (int)0xfc;
    puVar3 = *(u32 **)(iVar1 + a0);
    *puVar3 = *(u32 *)(a0 + 0x38);
    puVar3[1] = *(u32 *)(iVar1 + 0x48 + a0);
    puVar3[2] = *(u32 *)(a0 + 0x44);
    puVar3[3] = *(u32 *)(a0 + 0x48);
    iVar1 = (int)0x1c0;
    puVar3[4] = *(u32 *)(a0 + 0xc0);
    iVar2 = (int)0x98;
    puVar3[5] = *(u32 *)(iVar1 + a0);
    puVar3[6] = *(u32 *)(iVar2 + a0);
    iVar1 = (int)0x148;
    puVar3[7] = *(u32 *)(iVar2 + 4 + a0);
    puVar3[8] = *(u32 *)(iVar1 + a0);
    iVar2 = (int)0xa8;
    puVar3[9] = *(u32 *)(iVar1 + 0x10 + a0);
    puVar3[10] = *(u32 *)(iVar2 + a0);
    puVar3[0xb] = *(u32 *)(iVar2 + 4 + a0);
    puVar3[0xc] = *(u32 *)(iVar2 + -8 + a0);
    puVar3[0xd] = *(u32 *)(iVar2 + 0x10 + a0);
    puVar3[0xe] = *(u32 *)(iVar2 + 0xc + a0);
    return iVar2 + 0xc;
}

/*
 * asr_sub_113bcc  0x8c113bcc
 * area name: in the asr library code range
 * called by: asr_sub_11ace2, asr_sub_11adde
 */
int asr_sub_113bcc(int a0) {
    int iVar1;
    u32 *puVar2;

    iVar1 = (int)0xfc;
    puVar2 = *(u32 **)(iVar1 + a0);
    *(u32 *)(a0 + 0x38) = *puVar2;
    *(u32 *)(iVar1 + 0x48 + a0) = puVar2[1];
    *(u32 *)(a0 + 0x44) = puVar2[2];
    *(u32 *)(a0 + 0x48) = puVar2[3];
    *(u32 *)(a0 + 0xc0) = puVar2[4];
    *(u32 *)(0x1c0 + a0) = puVar2[5];
    iVar1 = (int)0x98;
    *(u32 *)(iVar1 + a0) = puVar2[6];
    *(u32 *)(iVar1 + 4 + a0) = puVar2[7];
    iVar1 = (int)0x148;
    *(u32 *)(iVar1 + a0) = puVar2[8];
    *(u32 *)(iVar1 + 0x10 + a0) = puVar2[9];
    iVar1 = (int)0xa8;
    *(u32 *)(iVar1 + a0) = puVar2[10];
    *(u32 *)(iVar1 + 4 + a0) = puVar2[0xb];
    *(u32 *)(iVar1 + -8 + a0) = puVar2[0xc];
    *(u32 *)(iVar1 + 0x10 + a0) = puVar2[0xd];
    *(u32 *)(iVar1 + 0xc + a0) = puVar2[0xe];
    *(int *)(iVar1 + -4 + a0) = (*(int *)(a0 + 0x38) + *(int *)(iVar1 + 0x10 + a0) + 1) * 4 + *(int *)(iVar1 + -8 + a0);
    *(u32 *)(iVar1 + 0x60 + a0) = *(u32 *)(a0 + 0x38);
    return iVar1 + 0x60;
}

/*
 * asr_sub_113c46  0x8c113c46
 * area name: in the asr library code range
 * called by: asr_sub_11ace2
 */
int asr_sub_113c46(int *a0) {
    u32 uVar1;
    int iVar2;

    iVar2 = *a0;
    (**(code **)(iVar2 + 0x18))(iVar2, a0[0x12]);
    (**(code **)(iVar2 + 0x18))(iVar2, a0[0x11]);
    (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xc0 + (int)a0));
    (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x1c0 + (int)a0));
    (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x98 + (int)a0));
    (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x9c + (int)a0));
    (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x148 + (int)a0));
    (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x100 + (int)a0));
    if (*(u8 **)((int)0x130 + (int)a0) == (&asr_sub_11617a)) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xa0 + (int)a0));
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xac + (int)a0));
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xa8 + (int)a0));
    }
    if (*(u8 **)((int)0x130 + (int)a0) == (&asr_sub_117bac)) {
        /* WARNING: Could not recover jumptable at 0x8c113d36. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xb0 + (int)a0));
        return uVar1;
    }
    return (int)0x130;
}

/*
 * asr_sub_113c4e  0x8c113c4e
 * area name: in the asr library code range
 */
int asr_sub_113c4e(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    int *unaff_r13;
    int a4;

    a4 = *unaff_r13;
    (**(code **)(a4 + 0x18))(a4, *(u32 *)(in_r0 + (int)unaff_r13), a2, a3);
    (**(code **)(a4 + 0x18))(a4, unaff_r13[0x11], a2, a3);
    (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xc0 + (int)unaff_r13), a2, a3);
    (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x1c0 + (int)unaff_r13), a2, a3);
    (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x98 + (int)unaff_r13), a2, a3);
    (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x9c + (int)unaff_r13), a2, a3);
    (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x148 + (int)unaff_r13), a2, a3);
    (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x100 + (int)unaff_r13), a2, a3);
    if (*(u8 **)((int)0x130 + (int)unaff_r13) == (&asr_sub_11617a)) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xa0 + (int)unaff_r13), a2, a3);
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xac + (int)unaff_r13), a2, a3);
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xa8 + (int)unaff_r13), a2, a3);
    }
    if (*(u8 **)((int)0x130 + (int)unaff_r13) == (&asr_sub_117bac)) {
        /* WARNING: Could not recover jumptable at 0x8c113d36. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xb0 + (int)unaff_r13));
        return uVar1;
    }
    return (int)0x130;
}

/*
 * asr_sub_113d68  0x8c113d68
 * area name: in the asr library code range
 * called by: asr_sub_113e98
 */
int asr_sub_113d68(int *a0, int *a1, int *a2, u32 a3, u16 *s0, u16 *s4, int s8) {
    short sVar1;
    int in_r0;
    int iVar2;
    u16 *puVar3;
    int *piVar4;
    int iVar5;
    short *psVar6;
    short sStack_1a;

    puVar3 = (u16 *)*a2;
    piVar4 = (int *)*a0;
    psVar6 = (short *)((u32)*s0 * 2 + s8);
    while (s0 < s4) {
        s0 = s0 + 1;
        *piVar4 = *a1;
        piVar4 = piVar4 + 1;
        iVar5 = (u32)*s0 * 2 + s8;
        iVar2 = iVar5 - (int)psVar6;
        *a1 = *a1 + ((int)(iVar2 + (u32)(iVar2 < 0)) >> 1) + 2;
        for (; psVar6 < (short *)(iVar5 + -2); psVar6 = psVar6 + 1) {
            *puVar3 = *psVar6 << 2 | 2;
            puVar3 = puVar3 + 1;
        }
        sVar1 = *psVar6;
        psVar6 = psVar6 + 1;
        *puVar3 = sVar1 << 2 | 1;
        sStack_1a = (short)((u32)a3 >> 0x10);
        in_r0 = (int)sStack_1a;
        *(u32 *)(puVar3 + 1) = a3;
        puVar3 = puVar3 + 3;
    }
    *a2 = (int)puVar3;
    *a0 = (int)piVar4;
    return in_r0;
}

/*
 * asr_sub_113dfa  0x8c113dfa
 * area name: in the asr library code range
 * called by: asr_sub_113e98
 */
int asr_sub_113dfa(int *a0, int *a1, int *a2, int a3, u32 s0) {
    u16 uVar1;
    int a6;
    int a4;
    u32 *puVar2;

    uVar1 = *(u16 *)(a0 + 1);
    a4 = *a2;
    a6 = (u32)uVar1 * 2;
    memmove(a4, *a0 * 2 + a3, a6);
    puVar2 = (u32 *)(a4 + a6);
    *(u16 *)((int)puVar2 + -2) = *(u16 *)((int)puVar2 + -2) | 1;
    *puVar2 = s0;
    *a1 = *a1 + uVar1 + 2;
    *a2 = (int)(puVar2 + 1);
    return (int)s0._2_2_;
}

/*
 * asr_sub_113e64  0x8c113e64
 * area name: in the asr library code range
 * called by: asr_sub_119c68, asr_sub_11a0e8
 */
int asr_sub_113e64(int a0, int a1, int a2) {
    u32 uVar1;
    int iVar2;
    u32 *puVar3;
    int iVar4;

    iVar2 = 0;
    puVar3 = (u32 *)(*(int *)(*(int *)(a0 + 0x44) + a1 * 4) + 4);
    iVar4 = a2 - *(int *)(a0 + 0x48);
    uVar1 = *puVar3;
    while (uVar1 < (u32)((int)(iVar4 + (u32)(iVar4 < 0)) >> 1)) {
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + 1;
        uVar1 = *puVar3;
    }
    return iVar2;
}

/*
 * asr_sub_113e98  0x8c113e98
 * area name: in the asr library code range
 * called by: asr_sub_11ac4c
 */
u32 asr_sub_113e98(int *a0, int a1, u32 unused_a2, u32 a3) {
    u32 *puVar1;
    int *piVar2;
    int *piVar3;
    u16 uVar4;
    u16 uVar5;
    u16 uVar6;
    u16 uVar7;
    u16 uVar8;
    short *psVar9;
    int *piVar10;
    u32 uVar11;
    int iVar12;
    int iVar13;
    u32 uVar14;
    int *piVar15;
    int *piVar16;
    int iVar17;
    u32 uVar18;
    u16 *puVar19;
    int *ar7_00;
    int *piVar20;
    int a4;
    int iVar21;
    u32 uVar22;
    u32 uVar23;
    int *piVar24;
    u32 *puStack_8c;
    short *psStack_88;
    int *piStack_84;
    int *piStack_7c;
    int *piStack_74;
    int *piStack_70;
    int iStack_6c;
    int *piStack_68;
    int *piStack_64;
    int iStack_60;
    u16 *puStack_5c;
    int *piStack_58;
    u32 *puStack_54;
    int *piStack_50;
    int iStack_4c;
    int iStack_48;
    short *psStack_44;
    int iStack_40;
    int *piStack_3c;
    int iStack_38;
    int iStack_34;
    int *piStack_30;
    int *piStack_2c;
    int *piStack_28;
    int iStack_24;

    puStack_5c = (u16 *)a0[0x41];
    iVar21 = 0;
    uVar22 = 0;
    piVar20 = (int *)a0[0x11];
    puStack_54 = (u32 *)*piVar20;
    a4 = *a0;
    iStack_34 = 0;
    iStack_40 = 0;
    iStack_38 = a0[0x3b];
    iVar12 = a0[0x3c];
    iStack_4c = 0;
    iStack_60 = 0;
    piStack_30 = (int *)a0[0x12];
    uVar8 = 1;
    uVar7 = 0;
    for (iVar17 = a1; iVar17 != 0; iVar17 = *(int *)(iVar17 + 0x10)) {
        iStack_34 = iStack_34 + 1;
        for (piVar16 = *(int **)(iVar17 + 0xc); piVar16 != NULL; piVar16 = (int *)piVar16[4]) {
            iVar13 = piVar20[*piVar16 + 1] - piVar20[*piVar16];
            if (iVar13 < 0) {
                iVar13 = iVar13 + 3;
            }
            uVar14 = iVar13 >> 2;
            iVar21 = iVar21 + uVar14;
            if (uVar22 < uVar14) {
                uVar22 = uVar14;
            }
        }
    }
    iVar13 = (**(code **)(a4 + 0x10))(a4, (iVar21 + 1) * 0xc, 0, a3);
    iVar21 = (**(code **)(a4 + 0x10))(a4, iVar21 * uVar22 * 6, iVar17, a3);
    *(u16 *)(iVar13 + 8) = 0xffff;
    do {
        if (a1 == 0) {
            for (uVar5 = *(u16 *)(iVar13 + 8); uVar5 != 0xffff; uVar5 = *(u16 *)((u32)uVar5 * 6 + iVar21 + 2)) {
                iStack_40 = iStack_40 + 1;
            }
            piVar10 = (int *)(uVar8 - 1);
            piStack_50 = (int *)(iVar13 + 0xc);
            iStack_6c = (u32)uVar7 - iStack_40;
            piVar15 = piStack_50;
            piVar16 = piStack_50;
            piVar20 = piVar10;
            piStack_84 = piVar10;
            for (piVar24 = (int *)0x1; piVar24 <= piVar10; piVar24 = (int *)((int)piVar24 + 1)) {
                uVar22 = (u32) * (u16 *)(piVar16 + 2);
                if (uVar22 != 0) {
                    iStack_4c = iStack_4c + (u32)puStack_5c[piVar15[1] * 6 + 2];
                    uVar7 = puStack_5c[piVar15[1] * 6 + 4];
                    while (uVar22 != 0xffff) {
                        uVar8 = puStack_5c[*(int *)((u32) * (u16 *)(uVar22 * 6 + iVar21) * 0xc + iVar13 + 4) * 6 + 3] +
                                uVar7 * (short)a0[0x3d];
                        puVar19 = (u16 *)((u32)uVar8 * 2 + iVar12);
                        iVar17 =
                            (u32) * (u16 *)((u32)puVar19[1] * 2 + iVar12) - (u32) * (u16 *)((u32)*puVar19 * 2 + iVar12);
                        if (iVar17 == 0) {
                            uVar8 = 0xffff;
                        } else {
                            iStack_4c = iStack_4c + iVar17;
                            piStack_84 = (int *)((int)piStack_84 + 1);
                            iStack_6c = iStack_6c + 1;
                            puVar19 = (u16 *)((u32)uVar8 * 2 + iVar12);
                            piVar20 = (int *)((int)piVar20 + ((u32)puVar19[1] - (u32)*puVar19));
                        }
                        iVar17 = uVar22 * 6 + iVar21;
                        *(u16 *)(iVar17 + 4) = uVar8;
                        uVar22 = (u32) * (u16 *)(iVar17 + 2);
                    }
                }
                piVar16 = piVar16 + 3;
                piVar15 = piVar15 + 3;
            }
            piStack_64 = piVar10;
            piStack_74 = (int *)(**(code **)(a4 + 0x10))(a4, ((int)piStack_84 + 1U) * 4, piVar15, piVar16);
            piStack_2c = piStack_74;
            puStack_54 = (u32 *)(**(code **)(a4 + 0x10))(a4, iStack_6c << 2, piVar15, piVar16);
            puVar19 = (u16 *)0x2;
            psStack_88 = (short *)(**(code **)(a4 + 0x14))(a4, piStack_84, 2, piVar16);
            psStack_44 = psStack_88;
            iVar17 = (**(code **)(a4 + 0x10))(a4, (int)piStack_84 << 1, puVar19, piVar16);
            a0[0x70] = iVar17;
            piStack_70 =
                (int *)(**(code **)(a4 + 0x10))(a4, ((int)piStack_84 + (int)piVar20 + 2) * 4, puVar19, piVar16);
            piStack_68 = piStack_70 + (int)piStack_84 + 1;
            piStack_58 = piStack_70;
            iStack_48 = (**(code **)(a4 + 0x10))(a4, ((int)piVar20 * 2 + iStack_4c) * 2, puVar19, piVar16);
            iStack_24 = iStack_48;
            piVar20 = (int *)(**(code **)(a4 + 0x10))(a4, iStack_40 << 2, puVar19, piVar16);
            piStack_28 = piVar20;
            piVar15 = (int *)(**(code **)(a4 + 0x10))(a4, (int)piStack_84 << 3, puVar19, piVar16);
            a0[0x40] = (int)piVar15;
            iStack_60 = 0;
            uVar7 = *(u16 *)(iVar13 + 8);
            while (uVar7 != 0xffff) {
                puVar19 = (u16 *)((u32)uVar7 * 6 + iVar21);
                piVar16 = (int *)(u32)*puVar19;
                *piVar20 = (int)piVar16 + -1;
                psStack_88[(int)piVar16 + -1] = 1;
                piVar20 = piVar20 + 1;
                uVar7 = puVar19[1];
            }
            puStack_8c = puStack_54;
            piVar20 = piStack_50;
            for (piStack_3c = (int *)0x1; piStack_3c <= piVar10; piStack_3c = (int *)((int)piStack_3c + 1)) {
                iStack_4c = CONCAT22(iStack_4c._2_2_, *(u16 *)(a0[0x30] + *piVar20 * 2));
                uVar7 = *(u16 *)(piVar20 + 2);
                *piVar15 = *piVar20;
                uVar22 = (u32)uVar7;
                piVar15[1] = piVar20[1];
                piVar15 = piVar15 + 2;
                *piStack_74 = (int)puStack_8c;
                *piStack_68 = iStack_60;
                *piStack_70 = (int)piStack_68;
                puVar19 = (u16 *)&iStack_48;
                piVar16 = piStack_30;
                piStack_68 = piStack_68 + 1;
                asr_sub_113dfa(puStack_5c + piVar20[1] * 6, &iStack_60, puVar19, piStack_30);
                if (uVar22 != 0) {
                    if (uVar22 == 0xffff) {
                        *psStack_88 = 2;
                    } else if (*psStack_88 != 1) {
                        *psStack_88 = (short)iStack_4c;
                    }
                    psStack_88 = psStack_88 + 1;
                    piVar24 = piStack_64;
                    for (; piStack_64 = piVar24, uVar22 != 0xffff; uVar22 = (u32) * (u16 *)(uVar22 * 6 + iVar21 + 2)) {
                        if (*(short *)(uVar22 * 6 + iVar21 + 4) == -1) {
                            *puStack_8c = *(u16 *)(uVar22 * 6 + iVar21) - 1;
                        } else {
                            piStack_64 = (int *)((int)piVar24 + 1);
                            *puStack_8c = (u32)piVar24;
                        }
                        puStack_8c = puStack_8c + 1;
                        piVar24 = piStack_64;
                    }
                }
                piVar20 = piVar20 + 3;
                piStack_74 = piStack_74 + 1;
                piStack_70 = piStack_70 + 1;
            }
            *piStack_74 = (int)puStack_8c;
            *piStack_70 = (int)piStack_68;
            piVar24 = piStack_50;
            piStack_74 = piStack_74 + 1;
            piStack_70 = piStack_70 + 1;
            piStack_64 = piVar10;
            for (piStack_7c = (int *)0x1; piStack_7c <= piVar10; piStack_7c = (int *)((int)piStack_7c + 1)) {
                uVar22 = (u32) * (u16 *)(piVar24 + 2);
                puVar1 = puStack_8c;
                piVar2 = piStack_74;
                piVar3 = piStack_70;
                ar7_00 = piStack_64;
                if (uVar22 != 0) {
                    for (; puStack_8c = puVar1, piStack_74 = piVar2, piStack_70 = piVar3, piStack_64 = ar7_00,
                           uVar22 != 0xffff;
                         uVar22 = (u32) * (u16 *)(uVar22 * 6 + iVar21 + 2)) {
                        uVar7 = *(u16 *)(uVar22 * 6 + iVar21 + 4);
                        piVar20 = (int *)CONCAT22((short)((u32)piVar20 >> 0x10), uVar7);
                        if (uVar7 != 0xffff) {
                            *piVar15 = -1;
                            piVar15[1] = -1;
                            piVar15 = piVar15 + 2;
                            puStack_5c = (u16 *)((u32)uVar7 * 2 + iVar12);
                            puVar19 = (u16 *)&iStack_48;
                            piStack_64 = (int *)((int)ar7_00 + 1);
                            asr_sub_113d68(&piStack_68, &iStack_60, puVar19, ar7_00, (u32)*puStack_5c * 2 + iVar12,
                                           (u32)puStack_5c[1] * 2 + iVar12, iStack_38);
                            piStack_70 = piVar3 + 1;
                            *piVar3 = (int)piStack_68;
                            puStack_8c = puVar1 + 1;
                            *puVar1 = *(u16 *)(uVar22 * 6 + iVar21) - 1;
                            piStack_74 = piVar2 + 1;
                            *piVar2 = (int)puStack_8c;
                            piVar16 = ar7_00;
                        }
                        puVar1 = puStack_8c;
                        piVar2 = piStack_74;
                        piVar3 = piStack_70;
                        ar7_00 = piStack_64;
                    }
                }
                piVar24 = piVar24 + 3;
            }
            *piStack_68 = iStack_60;
            uVar22 = a0[0x56];
            if (uVar22 < (u32)(iStack_34 * 0x14)) {
                uVar22 = iStack_34 * 0x14;
            }
            a0[0x56] = uVar22;
            a0[0x42] = (int)piVar10;
            a0[0x51] = iStack_40;
            a0[0xe] = (int)piStack_84;
            a0[0x11] = (int)piStack_58;
            a0[0x12] = iStack_24;
            a0[0x30] = (int)psStack_44;
            a0[0x26] = (int)piStack_2c;
            a0[0x27] = (int)puStack_54;
            a0[0x2d] = iStack_6c;
            piStack_68 = piStack_68 + 1;
            asr_sub_112b1c(a0, (int)*(short *)((int)a0 + 0x1be));
            a0[0x52] = (int)piStack_28;
            (**(code **)(a4 + 0x18))(a4, iVar13, puVar19, piVar16);
            (**(code **)(a4 + 0x18))(a4, iVar21, puVar19, piVar16);
            if ((((code *)a0[0x4c] == asr_sub_11617a) && (uVar22 = asr_sub_1155a0(a0, iVar21), (uVar22 & 0xff) != 0)) ||
                (((code *)a0[0x4c] == asr_sub_117bac &&
                  (uVar22 = asr_sub_115732(a0, iVar21, puVar19, piVar16), (uVar22 & 0xff) != 0)))) {
                uVar11 = 1;
            } else {
                *(u8 *)(a0 + 0x1f) = 1;
                uVar11 = 0;
            }
            return uVar11;
        }
        piStack_70 = NULL;
        piStack_84 = NULL;
        piVar16 = *(int **)(a1 + 0xc);
        uVar22 = 0;
        if (piVar16 != NULL) {
            do {
                if (piVar16 == NULL)
                    break;
                piStack_84 = (int *)*piVar16;
                uVar5 = *(u16 *)(uVar22 * 0xc + iVar13 + 8);
                iVar17 = piVar20[(int)piStack_84] - (int)puStack_54;
                if (iVar17 < 0) {
                    iVar17 = iVar17 + 3;
                }
                piStack_70 = (int *)(iVar17 >> 2);
                while (uVar14 = (u32)uVar5, uVar14 != 0xffff) {
                    if ((int *)*(int *)((u32) * (u16 *)(uVar14 * 6 + iVar21) * 0xc + iVar13 + 4) == piStack_70) {
                        uVar22 = (u32) * (u16 *)(uVar14 * 6 + iVar21);
                        piVar16 = (int *)piVar16[4];
                        goto LAB_8c11405a;
                    }
                    uVar5 = *(u16 *)(uVar14 * 6 + iVar21 + 2);
                }
                if (uVar22 == 0) {
                    a3 = 1;
                } else {
                    iVar17 = piVar20[*(int *)(uVar22 * 0xc + iVar13) + 1] - piVar20[*(int *)(uVar22 * 0xc + iVar13)];
                    if (iVar17 < 0) {
                        iVar17 = iVar17 + 3;
                    }
                    a3 = iVar17 >> 2;
                }
            LAB_8c11405a:
            } while (uVar14 != 0xffff);
            uVar5 = *(u16 *)(uVar22 * 0xc + iVar13 + 8);
            uVar14 = a3;
            while (true) {
                iVar17 = piVar20[(int)piStack_84 + 1] - piVar20[(int)piStack_84];
                if (iVar17 < 0) {
                    iVar17 = iVar17 + 3;
                }
                a3 = iVar17 >> 2;
                psStack_44 = (short *)(a3 - 1);
                piStack_58 = (int *)(u32)uVar8;
                uVar18 = 0;
                uVar4 = uVar7;
                if (a3 != 0) {
                    do {
                        psVar9 = (short *)((u32)uVar4 * 6 + iVar21);
                        uVar7 = uVar5;
                        for (piStack_7c = NULL; piStack_7c < uVar14; piStack_7c = (int *)((int)piStack_7c + 1)) {
                            *psVar9 = uVar8 + (short)uVar18;
                            uVar6 = uVar7;
                            if (uVar5 == 0xffff) {
                                uVar6 = 0xffff;
                            }
                            psVar9[1] = uVar6;
                            uVar7 = uVar7 + 1;
                            psVar9 = psVar9 + 3;
                        }
                        if ((short *)uVar18 == psStack_44) {
                            for (uVar23 = 0; uVar23 < uVar14; uVar23 = uVar23 + 1) {
                                *(u16 *)((uVar23 + uVar22) * 0xc + iVar13 + 8) = uVar4 + (short)uVar23;
                            }
                        }
                        uVar7 = uVar4 + (short)uVar14;
                        piVar15 = (int *)(((int)piStack_58 + uVar18) * 0xc + iVar13);
                        piVar15[1] = (int)piStack_70 + uVar18;
                        uVar18 = uVar18 + 1;
                        *piVar15 = (int)piStack_84;
                        uVar5 = uVar4;
                        uVar4 = uVar7;
                    } while (uVar18 < a3);
                }
                psStack_88._0_2_ = (short)a3;
                uVar8 = (short)psStack_88 + uVar8;
                piVar16 = (int *)piVar16[4];
                if (piVar16 == NULL)
                    break;
                piStack_84 = (int *)*piVar16;
                iVar17 = piVar20[(int)piStack_84] - (int)puStack_54;
                if (iVar17 < 0) {
                    iVar17 = iVar17 + 3;
                }
                piStack_70 = (int *)(iVar17 >> 2);
                uVar5 = 0xffff;
                uVar22 = (u32)piStack_58;
                uVar14 = a3;
            }
            uVar14 = 0;
            uVar22 = (u32)piStack_58;
            if (a3 != 0) {
                do {
                    iVar17 = uVar22 * 0xc;
                    uVar22 = uVar22 + 1;
                    uVar14 = uVar14 + 1;
                    *(u16 *)(iVar17 + iVar13 + 8) = 0xffff;
                } while (uVar14 < a3);
            }
        }
        a1 = *(int *)(a1 + 0x10);
    } while (true);
}

/*
 * asr_sub_114774  0x8c114774
 * area name: in the asr library code range
 * called by: asr_sub_11ad68
 */
u32 asr_sub_114774(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u16 uVar1;
    u8 *puVar2;
    u16 *ar4_00;
    int *a6;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    int a5;
    int ar6_00;
    u32 *puVar7;
    int iVar8;
    u32 uVar9;
    int a4;

    a4 = *a0;
    iVar8 = 0;
    puVar7 = *(u32 **)((int)0x98 + (int)a0);
    ar4_00 = (u16 *)(**(code **)(a4 + 0x14))(a4, a0[0xe] << 1, 1, a3);
    ar6_00 = a0[0xe] << 1;
    memmove(ar4_00, *(u32 *)((int)0xc0 + (int)a0), ar6_00);
    uVar1 = *ar4_00;
    while ((uVar1 & 1) == 0) {
        iVar8 = iVar8 + 1;
        uVar1 = ar4_00[iVar8];
    }
    ar4_00[iVar8] = ar4_00[iVar8] & (u16)0xfffe;
    iVar3 = iVar8 * 4;
    uVar4 = *(u32 *)(*(int *)((int)0x98 + (int)a0) + iVar3);
    uVar9 = *(int *)((iVar8 + 1) * 4 + *(int *)((int)0x90 + (int)a0)) - *(int *)(iVar3 + *(int *)((int)0x90 + (int)a0));
    a5 = uVar9 * 4;
    a6 = (int *)(**(code **)(a4 + 0x10))(a4, a5, ar6_00, a3);
    *a6 = iVar8;
    uVar5 = 0;
    do {
        uVar5 = uVar5 + 1;
        *puVar7 = uVar4;
        puVar7 = puVar7 + 1;
    } while (uVar5 <= (u32)a0[0xe]);
    uVar5 = 0;
    if (uVar9 != 0) {
        do {
            a5 =
                *(int *)((*(int *)(iVar3 + *(int *)((int)0x90 + (int)a0)) + uVar5) * 4 + *(int *)((int)0x90 + (int)a0));
            ar4_00[a5] = ar4_00[a5] | 3;
            uVar6 = uVar5 + 1;
            a6[uVar5] = a5;
            uVar5 = uVar6;
        } while (uVar6 < uVar9);
    }
    puVar2 = (&asr_sub_11617a);
    iVar8 = (int)0x144;
    *(u32 *)(iVar8 + (int)a0) = uVar9;
    *(int **)(iVar8 + 4 + (int)a0) = a6;
    iVar8 = (int)0xc0;
    *(u16 **)(iVar8 + (int)a0) = ar4_00;
    *(u32 *)(iVar8 + -0xc + (int)a0) = 0;
    if ((*(u8 **)(iVar8 + 0x70 + (int)a0) == puVar2) && (uVar5 = asr_sub_1155a0(a0, a5), (uVar5 & 0xff) != 0)) {
        uVar4 = 1;
    } else {
        uVar4 = 0;
    }
    return uVar4;
}

/*
 * asr_sub_1148c4  0x8c1148c4
 * area name: in the asr library code range
 * called by: asr_sub_11adde
 */
int asr_sub_1148c4(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    (**(code **)(*a0 + 0x18))(*a0, *(u32 *)((int)0x148 + (int)a0), a2, a3);
    (**(code **)(*a0 + 0x18))(*a0, *(u32 *)((int)0xc0 + (int)a0), a2, a3);
    if (*(u8 **)((int)0x130 + (int)a0) == (&asr_sub_11617a)) {
        (**(code **)(*a0 + 0x18))(*a0, *(u32 *)((int)0xa8 + (int)a0), a2, a3);
        (**(code **)(*a0 + 0x18))(*a0, *(u32 *)((int)0xac + (int)a0), a2, a3);
        /* WARNING: Could not recover jumptable at 0x8c11493e. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*a0 + 0x18))(*a0, *(u32 *)((int)0xa0 + (int)a0));
        return uVar1;
    }
    return (int)0x130;
}

/*
 * asr_sub_11495c  0x8c11495c
 * area name: in the asr library code range
 */
u32 asr_sub_11495c(u32 unused_a0, u32 a1, u32 a2, u32 a3, int ain0) {
    u32 uVar1;
    u32 uVar2;
    u32 unaff_r10;
    int iVar3;
    int *unaff_r14;
    u32 extraout_fr1;
    float extraout_fr0;
    float extraout_fr0_00;
    float extraout_fr0_01;
    float extraout_fr0_02;
    float extraout_fr0_03;
    float extraout_fr0_04;
    float extraout_fr0_05;
    int extraout_fr0_06;
    float extraout_fr0_07;
    float extraout_fr0_08;
    float extraout_fr0_09;
    float in_fr3;
    float fVar4;
    char cVar5;

    cVar5 = '\0';
    iVar3 = *unaff_r14;
    *(u32 *)(ain0 + (int)unaff_r14) = unaff_r10;
    asr_state_has_event(unaff_r14, a1, a2);
    if (cVar5 == '\0') {
        in_fr3 = 2.1474836e+09;
    }
    fVar4 = extraout_fr0;
    if (in_fr3 < extraout_fr0) {
        fVar4 = extraout_fr0 + -4.2949673e+09;
    }
    unaff_r14[0x53] = (int)fVar4;
    asr_state_has_event(unaff_r14, 0x16, a2);
    *(char *)((int)unaff_r14 + 0x1e6) = (char)(int)extraout_fr0_00;
    if (*(char *)((int)unaff_r14 + 0x1e6) == '\0') {
        *(char *)(unaff_r14 + 0x1f) = (char)unaff_r10;
    } else {
        *(u8 *)(unaff_r14 + 0x1f) = 0;
    }
    unaff_r14[10] = *(int *)unaff_r14[3];
    unaff_r14[0xb] = *(int *)unaff_r14[4];
    asr_state_has_event(unaff_r14, 0x10, a2);
    uVar1 = asr_sub_112a20(unaff_r14, (int)extraout_fr0_01 & 0xffff, a2, a3);
    if ((uVar1 & 0xff) == 0) {
        *(char *)(unaff_r14 + 0x55) = (char)unaff_r10;
        asr_state_has_event(unaff_r14, 0x11, a2);
        *(short *)(unaff_r14 + 0x79) = (short)(int)extraout_fr0_02;
        if (*(u16 *)(unaff_r14 + 0x79) < 0xfde9) {
            if (*(u16 *)(unaff_r14 + 0x79) < 200) {
                *(u16 *)(unaff_r14 + 0x79) = 200;
            }
        } else {
            *(u16 *)(unaff_r14 + 0x79) = 65000;
        }
        asr_state_has_event(unaff_r14, 8, a2);
        cVar5 = '\0';
        unaff_r14[0x56] = (int)extraout_fr0_03 & 0xffff;
        asr_state_has_event(unaff_r14, 5, a2);
        if (cVar5 == '\0') {
            fVar4 = 128.0;
        }
        fVar4 = extraout_fr0_04 * fVar4;
        if (2.1474836e+09 < fVar4) {
            fVar4 = fVar4 + -4.2949673e+09;
        }
        unaff_r14[0x5b] = (int)fVar4;
        asr_state_has_event(unaff_r14, 6, a2);
        cVar5 = '\0';
        *(short *)(unaff_r14 + 0x58) = (short)(int)extraout_fr0_05;
        asr_state_has_event(unaff_r14, 7, a2);
        if (cVar5 == '\0') {
            unaff_r14[0x59] = extraout_fr0_06;
        } else {
            *(u64 *)(unaff_r14 + 0x59) = CONCAT44(extraout_fr0_06, extraout_fr1);
        }
        asr_state_has_event(unaff_r14, 10, a2);
        *(short *)(unaff_r14 + 0x68) = (short)(int)extraout_fr0_07;
        asr_state_has_event(unaff_r14, 0xf, a2);
        *(short *)((int)unaff_r14 + 0x1be) = (short)(int)extraout_fr0_08;
        iVar3 = (**(code **)(iVar3 + 0x10))(iVar3, 0x3c, a2, a3);
        unaff_r14[0x3f] = iVar3;
        unaff_r14[0x20] = 0;
        unaff_r14[0x13] = 0;
        asr_state_has_event(unaff_r14, 0x18, a2);
        *(short *)(unaff_r14 + 0x7a) = (short)(int)extraout_fr0_09;
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * asr_sub_114bd8  0x8c114bd8
 * area name: in the asr library code range
 * called by: asr_sub_11b13e
 */
u32 asr_sub_114bd8(int a0, int a1, u32 a2) {
    u16 uVar1;
    u32 uVar2;
    u32 uVar3;
    float extraout_fr0;

    uVar1 = (**(code **)(a1 + 0x2c))(a1);
    *(u16 *)(a0 + 0xdc) = uVar1;
    uVar1 = (**(code **)(a1 + 0x30))(a1);
    *(u16 *)(a0 + 0xde) = uVar1;
    uVar1 = (**(code **)(a1 + 0x34))(a1);
    *(u16 *)(a0 + 0xe0) = uVar1;
    uVar1 = (**(code **)(a1 + 0x38))(a1);
    *(u16 *)(a0 + 0xe2) = uVar1;
    uVar1 = (**(code **)(a1 + 0x34))(a1);
    *(u16 *)(a0 + 0x1c6) = uVar1;
    uVar1 = (**(code **)(a1 + 0x20))(a1);
    *(u16 *)(a0 + 0xe4) = uVar1;
    uVar2 = (**(code **)(a1 + 0x44))(a1);
    *(u32 *)(a0 + 0xf4) = uVar2;
    uVar1 = (**(code **)(a1 + 0x48))(a1);
    *(u16 *)(a0 + 0xe6) = uVar1;
    uVar2 = (**(code **)(a1 + 0x88))(a1);
    *(u32 *)(a0 + 0xe8) = uVar2;
    asr_state_has_event(a0, 0x15, a2);
    *(char *)(a0 + 0xf8) = (char)(int)extraout_fr0;
    if (*(char *)(a0 + 0xf8) != '\0') {
        uVar2 = (**(code **)(a1 + 0x8c))(a1);
        uVar3 = (**(code **)(a1 + 0xcc))(uVar2);
        *(u32 *)(a0 + 0xec) = uVar3;
        uVar2 = (**(code **)(a1 + 0xd0))(uVar2);
        *(u32 *)(a0 + 0xf0) = uVar2;
    }
    return 0;
}

/*
 * asr_sub_114be0  0x8c114be0
 * area name: in the asr library code range
 */
u32 asr_sub_114be0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    u32 a5;
    int unaff_r13;
    int unaff_r14;
    u32 extraout_fr1;
    float extraout_fr0;
    u8 uVar5;
    u8 in_FPSCR_CAUSE;
    u8 bVar6;
    u8 bVar7;
    u8 bVar8;
    u8 in_FPSCR_DN;
    u8 bVar9;
    u8 bVar10;
    u8 in_FPSCR_PR;

    uVar2 = (**(code **)(unaff_r14 + 0x2c))(a1, a1, a2, a3);
    *(short *)(0xdc + unaff_r13) = (short)uVar2;
    bVar6 = 0;
    bVar8 = 0;
    bVar10 = (u8)((((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13) & 0xffe7ffff &
                   0x80000) >>
                  0x13);
    uVar2 = (**(code **)(unaff_r14 + 0x30))(unaff_r14, a1, a2, a3);
    *(short *)(0xde + unaff_r13) = (short)uVar2;
    bVar7 = 0;
    bVar9 = 0;
    bVar6 = (u8)((((u32)bVar6 << 0xc | (u32)bVar8 << 0x12 | (u32)bVar10 << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
    uVar2 = (**(code **)(unaff_r14 + 0x34))(unaff_r14, a1, a2, a3);
    *(short *)(0xe0 + unaff_r13) = (short)uVar2;
    bVar8 = 0;
    bVar10 = 0;
    bVar6 = (u8)((((u32)bVar7 << 0xc | (u32)bVar9 << 0x12 | (u32)bVar6 << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
    uVar2 = (**(code **)(unaff_r14 + 0x38))(unaff_r14, a1, a2, a3);
    *(short *)(0xe2 + unaff_r13) = (short)uVar2;
    bVar7 = 0;
    bVar9 = 0;
    bVar6 = (u8)((((u32)bVar8 << 0xc | (u32)bVar10 << 0x12 | (u32)bVar6 << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
    uVar2 = (**(code **)(unaff_r14 + 0x34))(unaff_r14, a1, a2, a3);
    *(short *)(0x1c6 + unaff_r13) = (short)uVar2;
    bVar8 = 0;
    bVar10 = 0;
    bVar6 = (u8)((((u32)bVar7 << 0xc | (u32)bVar9 << 0x12 | (u32)bVar6 << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
    uVar2 = (**(code **)(unaff_r14 + 0x20))(unaff_r14, a1, a2, a3);
    *(short *)(0xe4 + unaff_r13) = (short)uVar2;
    bVar7 = 0;
    bVar9 = 0;
    bVar6 = (u8)((((u32)bVar8 << 0xc | (u32)bVar10 << 0x12 | (u32)bVar6 << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
    uVar2 = (**(code **)(unaff_r14 + 0x44))(unaff_r14, a1, a2, a3);
    *(u32 *)(0xf4 + unaff_r13) = uVar2;
    bVar8 = 0;
    bVar10 = 0;
    bVar6 = (u8)((((u32)bVar7 << 0xc | (u32)bVar9 << 0x12 | (u32)bVar6 << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
    uVar2 = (**(code **)(unaff_r14 + 0x48))(unaff_r14, a1, a2, a3);
    *(short *)(0xe6 + unaff_r13) = (short)uVar2;
    bVar7 = 0;
    bVar9 = 0;
    bVar6 = (u8)((((u32)bVar8 << 0xc | (u32)bVar10 << 0x12 | (u32)bVar6 << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
    uVar2 = (**(code **)(0x88 + unaff_r14))(unaff_r14, a1, a2, a3);
    puVar1 = (&asr_state_has_event);
    a5 = 0x15;
    *(u32 *)(0xe8 + unaff_r13) = uVar2;
    bVar8 = 0;
    bVar10 = 0;
    bVar6 = (u8)((((u32)bVar7 << 0xc | (u32)bVar9 << 0x12 | (u32)bVar6 << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
    (*(code *)puVar1)(unaff_r13, 0x15, a2, a3);
    iVar3 = (int)0xf8;
    if ((char)((((u32)bVar8 << 0xc | (u32)bVar10 << 0x12 | (u32)bVar6 << 0x13) & 0xffe7ffff & 0x80000) >> 0x13) ==
        '\0') {
        uVar5 = (u8)(int)extraout_fr0;
    } else {
        uVar5 = (u8)(int)(double)CONCAT44(extraout_fr0, extraout_fr1);
    }
    *(u8 *)(iVar3 + unaff_r13) = uVar5;
    if (*(char *)(iVar3 + unaff_r13) != '\0') {
        uVar2 = (**(code **)(0x8c + unaff_r14))(unaff_r14, a5, a2, a3);
        uVar4 = (**(code **)(0xcc + unaff_r14))(uVar2, a5, a2, a3);
        *(u32 *)(0xec + unaff_r13) = uVar4;
        uVar2 = (**(code **)(0xd0 + unaff_r14))(uVar2, a5, a2, a3);
        *(u32 *)(0xf0 + unaff_r13) = uVar2;
    }
    return 0;
}

/*
 * asr_sub_114d30  0x8c114d30
 * area name: in the asr library code range
 * called by: asr_sub_114e80
 */
int asr_sub_114d30(int a0, u32 a1, u32 a2) {
    u16 uVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int iVar6;
    int *piVar7;
    int *piVar8;
    int iVar9;
    u16 *puVar10;
    u32 uVar11;
    int *piVar12;
    u16 *puVar13;
    int iStack_28;
    int *piStack_24;
    u32 uStack_20;

    piVar7 = *(int **)(0x104 + a0);
    iVar2 = (int)0xc8;
    piStack_24 = (int *)(*(int *)(a0 + 0x38) * 4 + *(int *)(a0 + 0x44) + 4);
    iVar3 = iVar2 + 0x20;
    iVar9 = *(int *)(iVar3 + a0);
    piVar12 = (int *)(*(int *)(iVar2 + a0) * 4 + *(int *)(iVar2 + 8 + a0));
    uStack_20 = 0;
    piVar8 = piVar12 + 2;
    if (a1 != 0) {
        do {
            piVar12 = piVar12 + 1;
            iStack_28 = 0;
            puVar13 = (u16 *)(*piVar12 * 2 + *(int *)(0xcc + a0));
            iVar2 = *(int *)(0xcc + a0) + *piVar8 * 2;
            puVar10 = (u16 *)(iVar2 + -2);
            *(u16 *)((int)piVar7 + 6) = *(u16 *)(*(int *)((u32)*puVar13 * 4 + iVar9) * 2 + iVar9);
            *(u16 *)(piVar7 + 2) = *(u16 *)((*(int *)((u32)*puVar10 * 4 + iVar9) + 1) * 2 + iVar9);
            iVar3 = 0;
            if (2 < (u32)((int)((iVar2 - (int)puVar13) + (u32)(iVar2 - (int)puVar13 < 0)) >> 1)) {
                uVar1 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar10 = (u16 *)(iVar2 + -4);
                piVar4 = (int *)((u32)uVar1 * 4 + iVar9);
                iStack_28 = (piVar4[1] - *piVar4) + -2;
            }
            piVar4 = piStack_24 + 1;
            *piVar7 = *piStack_24 + iStack_28;
            for (; puVar13 <= puVar10; puVar13 = puVar13 + 1) {
                piVar5 = (int *)((u32)*puVar13 * 4 + iVar9);
                iVar3 = iVar3 + (piVar5[1] - *piVar5) + -2;
            }
            *(short *)(piVar7 + 1) = (short)iVar3;
            piVar8 = piVar8 + 1;
            piVar7 = piVar7 + 3;
            uStack_20 = uStack_20 + 1;
            piStack_24 = piVar4;
        } while (uStack_20 < a1);
    }
    iVar2 = 0xfffe;
    uVar11 = 0;
    iVar9 = *piStack_24;
    if (a2 != 0) {
        do {
            piStack_24 = piStack_24 + 1;
            iVar3 = (int)0xe6;
            iVar6 = *piStack_24;
            *piVar7 = iVar9;
            *(u16 *)(piVar7 + 2) = *(u16 *)(iVar3 + a0);
            *(u16 *)((int)piVar7 + 6) = *(u16 *)(0xe6 + a0);
            uVar11 = uVar11 + 1;
            iVar3 = (iVar6 - iVar9) + iVar2;
            *(short *)(piVar7 + 1) = (short)iVar3;
            piVar7 = piVar7 + 3;
            iVar9 = iVar6;
        } while (uVar11 < a2);
    }
    return iVar3;
}

/*
 * asr_sub_114e80  0x8c114e80
 * area name: in the asr library code range
 * called by: asr_sub_11b13e
 */
u32 asr_sub_114e80(int *a0, int a1, u32 a2, short *a3) {
    u16 uVar1;
    short sVar2;
    u32 *puVar3;
    bool bVar4;
    u16 uVar5;
    int iVar6;
    int *a6;
    int iVar7;
    int iVar8;
    u32 uVar9;
    u16 *puVar10;
    int *piVar11;
    int iVar12;
    u32 uVar13;
    u16 *puVar14;
    u16 *puVar15;
    int *a5;
    int *piVar16;
    int *piVar17;
    int *a7;
    int iVar18;
    short *psVar19;
    short *psVar20;
    int a4;
    float extraout_fr0;
    float extraout_fr0_00;
    float fVar21;
    bool bVar22;
    u32 uStack_54;
    int *piStack_50;
    int *piStack_4c;
    u32 *puStack_44;
    u16 *puStack_40;
    int *piStack_2c;

    a4 = *a0;
    iVar18 = a0[0x3a];
    uVar5 = (short)a0[0x37] << 2 | 1;
    iVar12 = a1;
    iVar6 = (**(code **)(a1 + 0x10))(a1, a1, a2, a3);
    a6 = (int *)(**(code **)(a1 + 0x14))(a1, iVar12, a2, a3);
    iVar7 = (**(code **)(a1 + 0x1c))(a1, iVar12, a2, a3);
    a0[0x51] = iVar7;
    iVar7 = (**(code **)(a1 + 8))(a1, iVar12, a2, a3);
    a0[0x32] = iVar7;
    iVar7 = (**(code **)(a1 + 8))(a1, iVar12, a2, a3);
    iVar8 = (**(code **)(a1 + 0xc))(a1, iVar12, a2, a3);
    a0[0xe] = iVar8 + iVar7;
    a0[0xf] = ((iVar8 + iVar7) - 1U >> 3) + 1;
    a0[0x2f] = iVar6 + (int)a6;
    a0[0x42] = a0[0xe];
    uVar9 = asr_sub_1133f6(a0, iVar12, a2, a3);
    if ((uVar9 & 0xff) != 0) {
        return 1;
    }
    puVar10 = (u16 *)(**(code **)(a1 + 0x34))(a1, iVar12, a2, a3);
    a0[0x33] = (int)puVar10;
    iVar7 = (**(code **)(a1 + 0x38))(a1, iVar12, a2, a3);
    a0[0x34] = iVar7;
    iVar7 = (**(code **)(a1 + 0x3c))(a1, iVar12, a2, a3);
    a0[0x35] = iVar7;
    iVar7 = (**(code **)(a1 + 0x40))(a1, iVar12, a2, a3);
    a0[0x36] = iVar7;
    iVar7 = (**(code **)(a1 + 0x28))(a1, iVar12, a2, a3);
    piVar11 = (int *)(**(code **)(a1 + 0x24))(a1, iVar12, a2, a3);
    piVar17 = NULL;
    if (piVar11 != NULL) {
        do {
            uVar1 = *puVar10;
            puVar10 = puVar10 + 1;
            piVar17 = (int *)((int)piVar17 + 1);
            iVar7 = iVar7 + (*(int *)((uVar1 + 1) * 4 + iVar18) - *(int *)((u32)uVar1 * 4 + iVar18));
        } while (piVar17 < piVar11);
    }
    a0[0x10] = iVar7 + (int)piVar11 * -2 + a0[0x2f] * 3;
    iVar12 = (**(code **)(a4 + 0x10))(a4, a0[0x51] << 2, piVar17, a3);
    a0[0x52] = iVar12;
    iVar12 = (**(code **)(a4 + 0x10))(a4, a0[0xe] << 1, piVar17, a3);
    a0[0x70] = iVar12;
    iVar12 = (**(code **)(a4 + 0x10))(a4, (a0[0xe] + a0[0x2f] + 2) * 4, piVar17, a3);
    a0[0x11] = iVar12;
    iVar12 = (**(code **)(a4 + 0x10))(a4, a0[0x10] << 1, piVar17, a3);
    a0[0x12] = iVar12;
    if ((((a0[0x52] != 0) && (a0[0x70] != 0)) && (a0[0x11] != 0)) && (a0[0x12] != 0)) {
        iVar12 = 0;
        puVar10 = (u16 *)a0[0x12];
        uStack_54 = -1;
        bVar4 = false;
        puVar14 = (u16 *)a0[0x33];
        a5 = (int *)a0[0x34];
        a7 = a5 + *a5;
        puVar3 = (u32 *)a0[0x11];
        piVar16 = (u32 *)a0[0x11] + a0[0xe] + 1;
        puStack_40 = puVar14;
        piStack_50 = a5;
        piStack_2c = a7;
        iVar7 = uStack_54;
        for (puVar15 = puVar14;
             uStack_54 = iVar7, piStack_4c = piVar16, puStack_44 = puVar3, puVar15 < puVar14 + (int)piVar11;
             puVar15 = puVar15 + 1) {
            if (puVar15 == puStack_40) {
                if (bVar4) {
                    if (*(char *)((int)a0 + 0x1e6) == '\0') {
                        puVar10[-1] = puVar10[-1] | 1;
                    } else {
                        *puVar10 = uVar5;
                        puVar10 = puVar10 + 1;
                        iVar12 = iVar12 + 1;
                    }
                    uStack_54._0_2_ = (u16)iVar7;
                    *puVar10 = (u16)uStack_54;
                    uStack_54._2_2_ = (u16)((u32)iVar7 >> 0x10);
                    puVar10[1] = uStack_54._2_2_;
                    puVar10 = puVar10 + 2;
                    iVar12 = iVar12 + 2;
                } else {
                    bVar4 = true;
                }
                bVar22 = a7 == piStack_2c;
                a7 = a7 + 1;
                if (bVar22) {
                    piStack_50 = piStack_50 + 1;
                    uStack_54 = iVar7 + 1;
                    piStack_2c = (int *)(*piStack_50 * 4 + a0[0x34]);
                    puStack_44 = puVar3 + 1;
                    *puVar3 = piVar16;
                }
                puStack_40 = puVar14 + *a7;
                piStack_4c = piVar16 + 1;
                *piVar16 = iVar12;
            }
            piVar16 = (int *)((u32)*puVar15 * 4 + iVar18);
            piVar17 = (int *)(piVar16[1] * 2 + iVar18);
            for (a5 = (int *)(*piVar16 * 2 + iVar18 + 4); a5 < piVar17; a5 = (int *)((int)a5 + 2)) {
                iVar12 = iVar12 + 1;
                *puVar10 = (short)*a5 << 2;
                puVar10 = puVar10 + 1;
            }
            puVar3 = puStack_44;
            piVar16 = piStack_4c;
            iVar7 = uStack_54;
        }
        psVar19 = (short *)a0[0x35];
        iVar7 = (**(code **)(a1 + 0x28))(a1, a5, piVar17, a7);
        a3 = psVar19 + iVar7;
        piVar11 = (int *)a0[0x36];
        piVar16 = piVar11 + *piVar11;
        piVar17 = piVar16;
        psVar20 = psVar19;
        puStack_40 = (u16 *)psVar19;
        do {
            if ((u16 *)psVar20 == puStack_40) {
                if (bVar4) {
                    if (*(char *)((int)a0 + 0x1e6) == '\0') {
                        puVar10[-1] = puVar10[-1] | 1;
                    } else {
                        *puVar10 = uVar5;
                        puVar10 = puVar10 + 1;
                        iVar12 = iVar12 + 1;
                    }
                    *puVar10 = (u16)uStack_54;
                    puVar10[1] = uStack_54._2_2_;
                    puVar10 = puVar10 + 2;
                    iVar12 = iVar12 + 2;
                } else {
                    bVar4 = true;
                }
                bVar22 = piVar16 == piVar17;
                piVar16 = piVar16 + 1;
                if (bVar22) {
                    piVar11 = piVar11 + 1;
                    uStack_54 = uStack_54 + 1;
                    piVar17 = (int *)(*piVar11 * 4 + a0[0x36]);
                    *puStack_44 = piStack_4c;
                    puStack_44 = puStack_44 + 1;
                }
                puStack_40 = (u16 *)(psVar19 + *piVar16);
                *piStack_4c = iVar12;
                piStack_4c = piStack_4c + 1;
                if (psVar20 == a3)
                    goto LAB_8c115274;
            }
            sVar2 = *psVar20;
            psVar20 = psVar20 + 1;
            iVar12 = iVar12 + 1;
            *puVar10 = sVar2 << 2;
            puVar10 = puVar10 + 1;
        } while (true);
    }
LAB_8c115402:
    uVar13 = asr_fsm_set_result(a0, 0x71, piVar17, a3);
    return uVar13;
LAB_8c115274:
    iVar12 = (**(code **)(a4 + 0x10))(a4, a0[0x2f] * 0xc, piVar17, a3);
    a0[0x41] = iVar12;
    asr_sub_114d30(a0, iVar6, a6);
    iVar12 = (**(code **)(a1 + 0x48))(a1, iVar6, a6, a3);
    a0[0x24] = iVar12;
    iVar12 = (**(code **)(a1 + 0x44))(a1, iVar6, a6, a3);
    a0[0x30] = iVar12;
    *(u8 *)(a0 + 0x31) = 0;
    uVar13 = (**(code **)(a1 + 0x30))(a1, iVar6, a6, a3);
    *(char *)((int)a0 + 0xf9) = (char)uVar13;
    if (*(char *)((int)a0 + 0xf9) == '\0') {
        asr_state_has_event(a0, 0xf, a6);
        piVar17 = a6;
        fVar21 = extraout_fr0;
    } else {
        asr_state_has_event(a0, 0x17, a6);
        piVar17 = a6;
        fVar21 = extraout_fr0_00;
    }
    asr_sub_112b1c(a0, (int)fVar21);
    iVar12 = 0;
    uVar9 = 0;
    if (a0[0xe] != 0) {
        do {
            if ((*(u16 *)(uVar9 * 2 + a0[0x30]) & 1) != 0) {
                iVar6 = iVar12 * 4;
                iVar12 = iVar12 + 1;
                *(u32 *)(a0[0x52] + iVar6) = uVar9;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (u32)a0[0xe]);
    }
    iVar12 = (**(code **)(a4 + 0x10))(a4, (a0[0xe] + 1) * 4, piVar17, a3);
    a0[0x26] = iVar12;
    iVar12 = (**(code **)(a4 + 0x10))(a4, a0[0xf], piVar17, a3);
    a0[0x25] = iVar12;
    iVar12 = (**(code **)(a4 + 0x10))(a4, (((int *)a0[0x24])[a0[0xe]] - *(int *)a0[0x24]) * 4, piVar17, a3);
    a0[0x27] = iVar12;
    if (((a0[0x26] != 0) && (a0[0x25] != 0)) && (a0[0x27] != 0)) {
        uVar9 = 0;
        if (a0[0xf] != 1) {
            do {
                *(u8 *)(a0[0x25] + uVar9) = 0xff;
                uVar9 = uVar9 + 1;
            } while (uVar9 < a0[0xf] - 1U);
        }
        uVar13 = 7;
        iVar6 = 0xff << (8 - (a0[0xe] & 7U) & 7);
        *(char *)(a0[0x25] + uVar9) = (char)iVar6;
        asr_sub_113ac8(a0, iVar6, 7);
        iVar12 = ((int *)a0[0x26])[a0[0xe]] - *(int *)a0[0x26];
        if (iVar12 < 0) {
            iVar12 = iVar12 + 3;
        }
        a0[0x2d] = iVar12 >> 2;
        if ((((code *)a0[0x4c] != asr_sub_11617a) || (uVar9 = asr_sub_1155a0(a0, iVar6), (uVar9 & 0xff) == 0)) &&
            (((code *)a0[0x4c] != asr_sub_117bac ||
              (uVar9 = asr_sub_115732(a0, iVar6, uVar13, a3), (uVar9 & 0xff) == 0)))) {
            iVar12 = a0[0x50];
            uVar9 = asr_sub_112a20(a0, iVar12, uVar13, a3);
            if (((uVar9 & 0xff) == 0) && (uVar9 = asr_sub_11372e(a0, iVar12, uVar13, a3), (uVar9 & 0xff) == 0)) {
                if (*(char *)((int)a0 + 0xf9) == '\0') {
                    if ((char)a0[0x3e] == '\0') {
                        a0[0x69] = (int)asr_sub_11abf0;
                        *(u8 *)(a0 + 0x76) = 1;
                    } else {
                        a0[0x69] = (int)asr_sub_11ac4c;
                        *(u8 *)(a0 + 0x76) = 0;
                        asr_sub_113b54(a0);
                    }
                } else {
                    a0[0x69] = (int)asr_sub_11ad68;
                    *(u8 *)(a0 + 0x76) = 1;
                    asr_sub_113b54(a0);
                }
                return 0;
            }
        }
        return 1;
    }
    goto LAB_8c115402;
}

/*
 * asr_sub_1155a0  0x8c1155a0
 * area name: in the asr library code range
 * called by: asr_sub_112a20, asr_sub_112a28, asr_sub_113e98, asr_sub_114774, asr_sub_114e80
 */
u32 asr_sub_1155a0(int *a0, u32 a1) {
    u8 *puVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    u32 uVar6;
    int *piVar7;
    int iVar8;

    iVar8 = *a0;
    uVar2 = (**(code **)(iVar8 + 0x10))(iVar8, (a0[0xe] + 1) * 4);
    puVar1 = (&asr_fsm_set_result);
    *(u32 *)((int)0xa8 + (int)a0) = uVar2;
    if (*(int *)((int)0xa8 + (int)a0) != 0) {
        uVar2 =
            (**(code **)(iVar8 + 0x10))(iVar8, (*(int *)((int)0x144 + (int)a0) + *(int *)((int)0xb4 + (int)a0)) * 4);
        *(u32 *)((int)0xac + (int)a0) = uVar2;
        if (*(int *)((int)0xac + (int)a0) != 0) {
            if (*(int *)((int)0x124 + (int)a0) == 0) {
                asr_sub_11318e(a0, 0);
            }
            piVar7 = *(int **)((int)0x9c + (int)a0);
            piVar5 = piVar7 + *(int *)(0x9c + 0x18 + (int)a0);
            iVar3 = 0;
            for (; piVar7 < piVar5; piVar7 = piVar7 + 1) {
                iVar4 = *(int *)((*piVar7 + 1) * 4 + a0[0x11]) - *(int *)(*piVar7 * 4 + a0[0x11]);
                if (iVar4 < 0) {
                    iVar4 = iVar4 + 3;
                }
                iVar3 = iVar3 + (iVar4 >> 2);
            }
            iVar4 = (int)0xb8;
            *(int *)(iVar4 + (int)a0) = iVar3;
            uVar2 = (**(code **)(iVar8 + 0x10))(iVar8, (a0[0xe] + *(int *)(iVar4 + (int)a0) + 1) * 4);
            *(u32 *)((int)0xa0 + (int)a0) = uVar2;
            iVar8 = (int)0xb8;
            *(int *)(iVar8 + -0x14 + (int)a0) =
                (a0[0xe] + *(int *)(iVar8 + (int)a0) + 1) * 4 + *(int *)(iVar8 + -0x18 + (int)a0);
            if (*(int *)(iVar8 + -0x18 + (int)a0) != 0) {
                uVar6 = 0;
                iVar8 = a0[0xe] * 4 + *(int *)((int)0xa0 + (int)a0);
                if (a0[0xe] != 0) {
                    do {
                        iVar3 = (int)0x98;
                        *(int *)(*(int *)((int)0xa0 + (int)a0) + uVar6 * 4) = iVar8;
                        for (piVar7 = *(int **)(*(int *)(iVar3 + (int)a0) + uVar6 * 4);
                             piVar7 < *(int **)((uVar6 + 1) * 4 + *(int *)(iVar3 + (int)a0)); piVar7 = piVar7 + 1) {
                            iVar4 = *(int *)((*piVar7 + 1) * 4 + a0[0x11]) - *(int *)(*piVar7 * 4 + a0[0x11]);
                            if (iVar4 < 0) {
                                iVar4 = iVar4 + 3;
                            }
                            iVar8 = iVar8 + (iVar4 >> 2) * 4;
                        }
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < (u32)a0[0xe]);
                }
                return 0;
            }
        }
    }
    uVar2 = (*(code *)puVar1)(a0, 0x71);
    return uVar2;
}

/*
 * asr_sub_1155a4  0x8c1155a4
 * area name: in the asr library code range
 */
u32 asr_sub_1155a4(u32 unused_a0, u32 unused_a1, int *a2, int a3) {
    u8 *puVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int *piVar6;
    u32 uVar7;
    int iVar8;
    int *unaff_r14;

    iVar8 = *unaff_r14;
    uVar2 = (**(code **)(iVar8 + 0x10))(iVar8, (unaff_r14[0xe] + 1) * 4, a2, a3);
    puVar1 = (&asr_fsm_set_result);
    *(u32 *)((int)0xa8 + (int)unaff_r14) = uVar2;
    if (*(int *)((int)0xa8 + (int)unaff_r14) != 0) {
        uVar2 = (**(code **)(iVar8 + 0x10))(
            iVar8, (*(int *)((int)0x144 + (int)unaff_r14) + *(int *)((int)0xb4 + (int)unaff_r14)) * 4, a2, a3);
        *(u32 *)((int)0xac + (int)unaff_r14) = uVar2;
        if (*(int *)((int)0xac + (int)unaff_r14) != 0) {
            if (*(int *)((int)0x124 + (int)unaff_r14) == 0) {
                asr_sub_11318e(unaff_r14, 0, a2, a3);
            }
            a2 = *(int **)((int)0x9c + (int)unaff_r14);
            piVar6 = a2 + *(int *)(0x9c + 0x18 + (int)unaff_r14);
            iVar3 = 0;
            for (piVar5 = a2; piVar5 < piVar6; piVar5 = piVar5 + 1) {
                a3 = *piVar5;
                a2 = (int *)unaff_r14[0x11];
                iVar4 = a2[a3 + 1] - a2[a3];
                if (iVar4 < 0) {
                    iVar4 = iVar4 + 3;
                }
                iVar3 = iVar3 + (iVar4 >> 2);
            }
            iVar4 = (int)0xb8;
            *(int *)(iVar4 + (int)unaff_r14) = iVar3;
            uVar2 =
                (**(code **)(iVar8 + 0x10))(iVar8, (unaff_r14[0xe] + *(int *)(iVar4 + (int)unaff_r14) + 1) * 4, a2, a3);
            *(u32 *)((int)0xa0 + (int)unaff_r14) = uVar2;
            iVar8 = (int)0xb8;
            *(int *)(iVar8 + -0x14 + (int)unaff_r14) =
                (unaff_r14[0xe] + *(int *)(iVar8 + (int)unaff_r14) + 1) * 4 + *(int *)(iVar8 + -0x18 + (int)unaff_r14);
            if (*(int *)(iVar8 + -0x18 + (int)unaff_r14) != 0) {
                uVar7 = 0;
                iVar8 = unaff_r14[0xe] * 4 + *(int *)((int)0xa0 + (int)unaff_r14);
                if (unaff_r14[0xe] != 0) {
                    do {
                        iVar3 = (int)0x98;
                        *(int *)(*(int *)((int)0xa0 + (int)unaff_r14) + uVar7 * 4) = iVar8;
                        for (piVar5 = *(int **)(*(int *)(iVar3 + (int)unaff_r14) + uVar7 * 4);
                             piVar5 < *(int **)((uVar7 + 1) * 4 + *(int *)(iVar3 + (int)unaff_r14));
                             piVar5 = piVar5 + 1) {
                            iVar4 =
                                *(int *)((*piVar5 + 1) * 4 + unaff_r14[0x11]) - *(int *)(*piVar5 * 4 + unaff_r14[0x11]);
                            if (iVar4 < 0) {
                                iVar4 = iVar4 + 3;
                            }
                            iVar8 = iVar8 + (iVar4 >> 2) * 4;
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < (u32)unaff_r14[0xe]);
                }
                return 0;
            }
        }
    }
    uVar2 = (*(code *)puVar1)(unaff_r14, 0x71, a2, a3);
    return uVar2;
}

/*
 * asr_sub_115732  0x8c115732
 * area name: in the asr library code range
 * called by: asr_sub_112a20, asr_sub_112a28, asr_sub_113e98, asr_sub_114e80
 */
u32 asr_sub_115732(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*a0 + 0x10))(*a0, a0[0xe] << 3, a2, a3);
    *(u32 *)((int)0xb0 + (int)a0) = uVar1;
    if (*(int *)((int)0xb0 + (int)a0) == 0) {
        uVar1 = asr_fsm_set_result(a0, 0x71);
        return uVar1;
    }
    return 0;
}

/*
 * asr_sub_115778  0x8c115778
 * area name: in the asr library code range
 * called by: asr_sub_11372e
 */
int asr_sub_115778(int a0) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;

    *(u32 *)(0x1ac + a0) = 0;
    *(u32 *)(a0 + 0x68) = 0;
    *(u32 *)(a0 + 0x6c) = 0;
    iVar1 = 100;
    *(u16 *)(a0 + 100) = 0;
    uVar2 = 0;
    if ((*(u32 *)(a0 + 0x38) & 0x7fffffff) != 0) {
        do {
            uVar3 = uVar2 + 1;
            iVar1 = *(int *)(0xb0 + a0);
            *(u32 *)(iVar1 + uVar2 * 4) = 0;
            uVar2 = uVar3;
        } while (uVar3 < (u32)(*(int *)(a0 + 0x38) << 1));
    }
    return iVar1;
}

/*
 * asr_sub_1157c0  0x8c1157c0
 * area name: in the asr library code range
 * called by: asr_sub_11372e
 */
int asr_sub_1157c0(int a0) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;

    *(u32 *)(0x1ac + a0) = 0;
    *(u32 *)(a0 + 0x68) = 0;
    *(u32 *)(a0 + 0x6c) = 0;
    *(u16 *)(a0 + 100) = 0;
    *(u32 *)(a0 + 0x74) = 0;
    *(u32 *)(a0 + 0x78) = 0;
    *(u16 *)(a0 + 0x70) = 0;
    uVar2 = 0;
    do {
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        *(u32 *)(iVar1 + *(int *)(0xa8 + a0)) = 0;
    } while (uVar2 <= *(u32 *)(a0 + 0x38));
    uVar2 = 0;
    if (*(int *)(0x144 + a0) + *(int *)(0xb4 + a0) != 0) {
        do {
            iVar1 = uVar2 * 4;
            uVar2 = uVar2 + 1;
            *(u32 *)(*(int *)(0xac + a0) + iVar1) = 0;
        } while (uVar2 < (u32)(*(int *)(0x144 + a0) + *(int *)(0xb4 + a0)));
    }
    iVar1 = 0xa0 + 0x18;
    puVar3 = (u32 *)**(u32 **)(0xa0 + a0);
    uVar2 = 0;
    if (*(int *)(iVar1 + a0) != 0) {
        do {
            iVar1 = (int)0xb8;
            uVar2 = uVar2 + 1;
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
        } while (uVar2 < *(u32 *)(iVar1 + a0));
    }
    return iVar1;
}

/*
 * asr_sub_11584e  0x8c11584e
 * area name: in the asr library code range
 * called by: asr_sub_11b13e
 */
u32 *asr_sub_11584e(int *a0, u32 *a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 *puVar3;
    int iVar4;

    if (a1 == NULL) {
        puVar3 = (u32 *)(**(code **)(*a0 + 0x10))(*a0, 0x14, a2, a3);
        iVar4 = (int)0x134;
        *puVar3 = *(u32 *)(iVar4 + (int)a0);
        puVar1 = (&asr_sub_119320);
        puVar3[1] = *(u32 *)(iVar4 + 0x70 + (int)a0);
        puVar2 = (&DATA_8c11920c);
        *(u8 **)(iVar4 + (int)a0) = puVar1;
        puVar1 = "LP";
        *(u8 **)(iVar4 + 0x70 + (int)a0) = puVar2;
        *(u8 **)(iVar4 + 0x74 + (int)a0) = puVar1;
        return puVar3;
    }
    iVar4 = (int)0x134;
    *(u32 *)(iVar4 + (int)a0) = *a1;
    puVar1 = (&asr_sub_11346c);
    *(u32 *)(iVar4 + 0x70 + (int)a0) = a1[1];
    puVar2 = (&asr_sub_11af3a);
    *(u8 **)(iVar4 + 0x74 + (int)a0) = puVar1;
    a0[6] = (int)puVar2;
    (**(code **)(*a0 + 0x18))(*a0, a1, a2, a3);
    return (u32 *)0;
}

/*
 * asr_sub_1158e0  0x8c1158e0
 * area name: in the asr library code range
 * called by: asr_sub_11b13e
 */
u32 *asr_sub_1158e0(int *a0, u32 *a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 *puVar3;
    int iVar4;

    if (a1 == NULL) {
        puVar3 = (u32 *)(**(code **)(*a0 + 0x10))(*a0, 0x14, a2, a3);
        iVar4 = (int)0x134;
        *puVar3 = *(u32 *)(iVar4 + (int)a0);
        puVar3[1] = *(u32 *)(iVar4 + 0x70 + (int)a0);
        puVar3[2] = *(u32 *)(iVar4 + 0x74 + (int)a0);
        puVar3[3] = a0[6];
        puVar1 = (&asr_sub_1197d8);
        puVar3[4] = *(u32 *)(iVar4 + -0xc + (int)a0);
        puVar2 = (&asr_sub_119706);
        *(u8 **)(iVar4 + (int)a0) = puVar1;
        puVar1 = (&DATA_8c1136d2);
        *(u8 **)(iVar4 + 0x70 + (int)a0) = puVar2;
        puVar2 = (&asr_sub_11af7e);
        *(u8 **)(iVar4 + 0x74 + (int)a0) = puVar1;
        a0[6] = (int)puVar2;
        *(u32 *)(iVar4 + -0xc + (int)a0) = 0;
        return puVar3;
    }
    iVar4 = (int)0x134;
    *(u32 *)(iVar4 + (int)a0) = *a1;
    *(u32 *)(iVar4 + 0x70 + (int)a0) = a1[1];
    *(u32 *)(iVar4 + 0x74 + (int)a0) = a1[2];
    a0[6] = a1[3];
    *(u32 *)(iVar4 + -0xc + (int)a0) = a1[4];
    (**(code **)(*a0 + 0x18))(*a0, a1, a2, a3);
    return (u32 *)0;
}

/*
 * asr_sub_11596e  0x8c11596e
 * area name: in the asr library code range
 * called by: asr_sub_11b13e
 */
u32 asr_sub_11596e(int *a0, u32 *a1) {
    u8 *puVar1;
    char cVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    int iVar9;
    u32 uVar10;

    puVar1 = (&asr_sub_1133f6);
    uVar7 = *a1;
    uVar10 = a1[1];
    iVar9 = *a0;
    uVar6 = a1[2];
    uVar8 = a1[3];
    *(u32 *)((int)0x1b4 + (int)a0) = uVar10;
    a0[0xe] = uVar7 + 2;
    cVar2 = (*(code *)puVar1)(a0);
    if (cVar2 == '\0') {
        iVar4 = (uVar10 - 1) * 2 + uVar7 + 2;
        a0[0x10] = iVar4;
        iVar4 = (**(code **)(iVar9 + 0x10))(iVar9, iVar4 * 2);
        a0[0x12] = iVar4;
        if (a0[0x12] == 0) {
            uVar3 = asr_fsm_set_result(a0, 2);
            return uVar3;
        }
        if (a0[0x13] != 0) {
            (**(code **)(iVar9 + 0x18))(iVar9, a0[0x13]);
            a0[0x13] = 0;
        }
        iVar9 = 0;
        uVar5 = 0;
        if (uVar7 != 0) {
            do {
                iVar4 = uVar5 * 2;
                uVar5 = uVar5 + 1;
                *(u16 *)(iVar9 * 2 + a0[0x12]) = *(u16 *)(iVar4 + uVar6);
                iVar9 = iVar9 + 1;
            } while (uVar5 < uVar7);
        }
        uVar6 = 0;
        if (uVar10 != 0) {
            do {
                iVar4 = uVar6 * 2;
                uVar6 = uVar6 + 1;
                *(u16 *)(iVar9 * 2 + a0[0x12]) = *(u16 *)(iVar4 + uVar8);
                iVar9 = iVar9 + 1;
            } while (uVar6 < uVar10);
            uVar6 = 0;
            if (uVar10 != 0) {
                do {
                    iVar4 = uVar6 * 2;
                    uVar6 = uVar6 + 1;
                    *(u16 *)(iVar9 * 2 + a0[0x12]) = *(u16 *)(iVar4 + uVar8);
                    iVar9 = iVar9 + 1;
                } while (uVar6 < uVar10);
            }
        }
        cVar2 = asr_sub_11372e(a0);
        if (cVar2 == '\0') {
            return 0;
        }
    }
    return 1;
}

/*
 * asr_sub_115980  0x8c115980
 * area name: in the asr library code range
 */
u32 asr_sub_115980(u32 unused_a0, u32 *a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int in_r0;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    int iVar8;
    u32 uVar9;
    int *unaff_r14;

    puVar1 = (&asr_sub_1133f6);
    uVar6 = *a1;
    uVar9 = a1[1];
    iVar8 = *unaff_r14;
    uVar5 = a1[2];
    uVar7 = a1[3];
    *(u32 *)(in_r0 + (int)unaff_r14) = uVar9;
    unaff_r14[0xe] = uVar6 + 2;
    uVar2 = (*(code *)puVar1)(unaff_r14, a1, a2, a3);
    if ((uVar2 & 0xff) == 0) {
        iVar4 = (uVar9 - 1) * 2 + uVar6 + 2;
        unaff_r14[0x10] = iVar4;
        iVar4 = (**(code **)(iVar8 + 0x10))(iVar8, iVar4 * 2, a2, a3);
        unaff_r14[0x12] = iVar4;
        if (unaff_r14[0x12] == 0) {
            uVar3 = asr_fsm_set_result(2);
            return uVar3;
        }
        if (unaff_r14[0x13] != 0) {
            (**(code **)(iVar8 + 0x18))(iVar8, unaff_r14[0x13], a2, a3);
            unaff_r14[0x13] = 0;
        }
        iVar8 = 0;
        uVar2 = 0;
        if (uVar6 != 0) {
            do {
                iVar4 = uVar2 * 2;
                uVar2 = uVar2 + 1;
                *(u16 *)(iVar8 * 2 + unaff_r14[0x12]) = *(u16 *)(iVar4 + uVar5);
                iVar8 = iVar8 + 1;
            } while (uVar2 < uVar6);
        }
        uVar2 = 0;
        if (uVar9 != 0) {
            do {
                iVar4 = uVar2 * 2;
                uVar2 = uVar2 + 1;
                *(u16 *)(iVar8 * 2 + unaff_r14[0x12]) = *(u16 *)(iVar4 + uVar7);
                iVar8 = iVar8 + 1;
            } while (uVar2 < uVar9);
            uVar2 = 0;
            if (uVar9 != 0) {
                do {
                    iVar4 = uVar2 * 2;
                    uVar2 = uVar2 + 1;
                    *(u16 *)(iVar8 * 2 + unaff_r14[0x12]) = *(u16 *)(iVar4 + uVar7);
                    iVar8 = iVar8 + 1;
                } while (uVar2 < uVar9);
            }
        }
        uVar2 = asr_sub_11372e(unaff_r14, uVar2, a2, a3);
        if ((uVar2 & 0xff) == 0) {
            return 0;
        }
    }
    return 1;
}

/*
 * asr_sub_115ac8  0x8c115ac8
 * area name: in the asr library code range
 * called by: asr_sub_11b13e
 */
u32 asr_sub_115ac8(int a0, u32 *a1, u32 a2, u32 a3) {
    u16 uVar1;
    u8 *puVar2;
    u16 uVar3;
    int iVar4;
    u32 uVar5;
    int *piVar6;
    int iVar7;
    u32 uVar8;
    u32 uVar9;
    int ar5_00;
    int iVar10;
    u32 uStack_38;
    int iStack_34;
    u16 *puStack_30;
    u16 *puStack_24;

    uVar8 = *a1;
    puStack_24 = (u16 *)a1[2];
    puStack_30 = (u16 *)a1[3];
    uVar9 = a1[1];
    *(u16 *)(a0 + 0x50) = 0;
    iVar4 = (int)0x12c;
    *(u32 *)(iVar4 + a0) = 0xffffffff;
    *(u16 *)(iVar4 + 0x6e + a0) = 0;
    *(u32 *)(iVar4 + 0x80 + a0) = 0;
    *(u32 *)(iVar4 + 0x88 + a0) = uVar9;
    if (uVar9 == 0) {
        *(u32 *)(0x1b8 + a0) = 0;
    } else {
        *(u32 *)(0x1b8 + a0) = (u32)*puStack_30;
    }
    uVar5 = asr_sub_1133f6(a0, a1, a2, a3);
    if ((uVar5 & 0xff) == 0) {
        piVar6 = (int *)asr_sub_113354(a0);
        puVar2 = (&asr_sub_112d00);
        piVar6[1] = 0;
        piVar6[4] = 0;
        *piVar6 = 0;
        uVar5 = (*(code *)puVar2)(a0, a1, a2, a3);
        uVar1 = 0x77ff;
        if ((uVar5 & 0xff) == 0) {
            ar5_00 = 0;
            iStack_34 = 0;
            iVar10 = *(int *)(a0 + 0x54);
            uStack_38 = 0;
            iVar4 = ar5_00;
            if (uVar9 != 0) {
                do {
                    ar5_00 = iVar10;
                    *(u32 *)(ar5_00 + 0xc) = (u32)puStack_30[uStack_38];
                    if (iVar4 != 0) {
                        *(int *)(iVar4 + 0x10) = ar5_00;
                    }
                    uVar3 = uVar1;
                    if (uStack_38 == 0) {
                        uVar3 = 0;
                    }
                    *(u16 *)(ar5_00 + 2) = uVar3;
                    *(int **)(ar5_00 + 8) = piVar6;
                    *(int **)(ar5_00 + 4) = piVar6;
                    if (*(int *)(ar5_00 + 0x18) == 0) {
                        iVar10 = asr_sub_112b6e(a0, ar5_00, a2, a3);
                    } else {
                        iVar10 = *(int *)(ar5_00 + 0x18);
                    }
                    iStack_34 = iStack_34 + 1;
                    uStack_38 = uStack_38 + 1;
                    iVar4 = ar5_00;
                } while (uStack_38 < uVar9);
            }
            uStack_38 = 0;
            iVar4 = ar5_00;
            if (uVar8 != 0) {
                do {
                    ar5_00 = iVar10;
                    *(u32 *)(ar5_00 + 0xc) = (u32)*puStack_24;
                    if (iVar4 != 0) {
                        *(int *)(iVar4 + 0x10) = ar5_00;
                    }
                    *(u16 *)(ar5_00 + 2) = uVar1;
                    *(int **)(ar5_00 + 8) = piVar6;
                    *(int **)(ar5_00 + 4) = piVar6;
                    if (*(int *)(ar5_00 + 0x18) == 0) {
                        iVar10 = asr_sub_112b6e(a0, ar5_00, a2, a3);
                    } else {
                        iVar10 = *(int *)(ar5_00 + 0x18);
                    }
                    iStack_34 = iStack_34 + 1;
                    uStack_38 = uStack_38 + 1;
                    iVar4 = ar5_00;
                    puStack_24 = puStack_24 + 1;
                } while (uStack_38 < uVar8);
            }
            uStack_38 = 0;
            iVar4 = ar5_00;
            iVar7 = iVar10;
            if (uVar9 != 0) {
                do {
                    ar5_00 = iVar7;
                    *(u32 *)(ar5_00 + 0xc) = (u32)*puStack_30;
                    if (iVar4 != 0) {
                        *(int *)(iVar4 + 0x10) = ar5_00;
                    }
                    *(u16 *)(ar5_00 + 2) = uVar1;
                    *(int **)(ar5_00 + 8) = piVar6;
                    *(int **)(ar5_00 + 4) = piVar6;
                    if (*(int *)(ar5_00 + 0x18) == 0) {
                        iVar7 = asr_sub_112b6e(a0, ar5_00, a2, a3);
                    } else {
                        iVar7 = *(int *)(ar5_00 + 0x18);
                    }
                    iStack_34 = iStack_34 + 1;
                    uStack_38 = uStack_38 + 1;
                    iVar4 = ar5_00;
                    puStack_30 = puStack_30 + 1;
                } while (uStack_38 < uVar9);
            }
            if (uVar9 < 2) {
                *(int *)(ar5_00 + 0x10) = ar5_00;
            } else {
                *(int *)(ar5_00 + 0x10) = iVar10;
            }
            if (uVar9 == 0) {
                *(u16 *)(*(int *)(a0 + 0x54) + 2) = 0;
            }
            *piVar6 = iStack_34;
            *(int *)(a0 + 0x60) = ar5_00;
            *(short *)(a0 + 0x50) = (short)iStack_34;
            *(u8 *)(0x1d8 + a0) = 0;
            return 0;
        }
    }
    return 1;
}

/*
 * asr_sub_115cec  0x8c115cec
 * area name: in the asr library code range
 * called by: asr_sub_11b13e
 */
int asr_sub_115cec(int *a0) {
    int iVar1;
    int iVar2;

    iVar2 = *a0;
    if (a0[0x11] != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, a0[0x11]);
        a0[0x11] = 0;
    }
    if (a0[0x12] != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, a0[0x12]);
        a0[0x12] = 0;
    }
    if (a0[0x13] != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, a0[0x13]);
        a0[0x13] = 0;
    }
    if (*(int *)((int)0x148 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x148 + (int)a0));
        *(u32 *)((int)0x148 + (int)a0) = 0;
    }
    if (*(int *)((int)0x1c0 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x1c0 + (int)a0));
        *(u32 *)((int)0x1c0 + (int)a0) = 0;
    }
    if ((*(char *)((int)0xc4 + (int)a0) != '\0') && (*(int *)((int)0xc0 + (int)a0) != 0)) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xc0 + (int)a0));
        *(u32 *)((int)0xc0 + (int)a0) = 0;
    }
    if (*(int *)((int)0x98 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x98 + (int)a0));
        *(u32 *)((int)0x98 + (int)a0) = 0;
    }
    if (*(int *)((int)0x94 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x94 + (int)a0));
        *(u32 *)((int)0x94 + (int)a0) = 0;
    }
    if (*(int *)((int)0x9c + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x9c + (int)a0));
        *(u32 *)((int)0x9c + (int)a0) = 0;
    }
    if (*(int *)((int)0xa8 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xa8 + (int)a0));
        *(u32 *)((int)0xa8 + (int)a0) = 0;
    }
    if (*(int *)((int)0xac + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xac + (int)a0));
        *(u32 *)((int)0xac + (int)a0) = 0;
    }
    if (*(int *)((int)0xa0 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xa0 + (int)a0));
        *(u32 *)((int)0xa0 + (int)a0) = 0;
    }
    if (*(int *)((int)0xb0 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0xb0 + (int)a0));
        *(u32 *)((int)0xb0 + (int)a0) = 0;
    }
    if (*(int *)((int)0x104 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x104 + (int)a0));
        *(u32 *)((int)0x104 + (int)a0) = 0;
    }
    iVar1 = (int)0x1d4;
    if (*(int *)(iVar1 + (int)a0) != 0) {
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x1cc + (int)a0));
        (**(code **)(iVar2 + 0x18))(iVar2, *(u32 *)((int)0x1d0 + (int)a0));
        iVar1 = (int)0x1d4;
        *(u32 *)(iVar1 + (int)a0) = 0;
    }
    return iVar1;
}

/*
 * asr_sub_115cf4  0x8c115cf4
 * area name: in the asr library code range
 */
int asr_sub_115cf4(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    int iVar1;
    int a4;
    int *unaff_r14;

    a4 = *unaff_r14;
    if (*(int *)(in_r0 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)(in_r0 + (int)unaff_r14), a2, a3);
        unaff_r14[0x11] = 0;
    }
    if (unaff_r14[0x12] != 0) {
        (**(code **)(a4 + 0x18))(a4, unaff_r14[0x12], a2, a3);
        unaff_r14[0x12] = 0;
    }
    if (unaff_r14[0x13] != 0) {
        (**(code **)(a4 + 0x18))(a4, unaff_r14[0x13], a2, a3);
        unaff_r14[0x13] = 0;
    }
    if (*(int *)((int)0x148 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x148 + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0x148 + (int)unaff_r14) = 0;
    }
    if (*(int *)((int)0x1c0 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x1c0 + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0x1c0 + (int)unaff_r14) = 0;
    }
    if ((*(char *)((int)0xc4 + (int)unaff_r14) != '\0') && (*(int *)((int)0xc0 + (int)unaff_r14) != 0)) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xc0 + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0xc0 + (int)unaff_r14) = 0;
    }
    if (*(int *)((int)0x98 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x98 + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0x98 + (int)unaff_r14) = 0;
    }
    if (*(int *)((int)0x94 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x94 + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0x94 + (int)unaff_r14) = 0;
    }
    if (*(int *)((int)0x9c + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x9c + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0x9c + (int)unaff_r14) = 0;
    }
    if (*(int *)((int)0xa8 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xa8 + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0xa8 + (int)unaff_r14) = 0;
    }
    if (*(int *)((int)0xac + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xac + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0xac + (int)unaff_r14) = 0;
    }
    if (*(int *)((int)0xa0 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xa0 + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0xa0 + (int)unaff_r14) = 0;
    }
    if (*(int *)((int)0xb0 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0xb0 + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0xb0 + (int)unaff_r14) = 0;
    }
    if (*(int *)((int)0x104 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x104 + (int)unaff_r14), a2, a3);
        *(u32 *)((int)0x104 + (int)unaff_r14) = 0;
    }
    iVar1 = (int)0x1d4;
    if (*(int *)(iVar1 + (int)unaff_r14) != 0) {
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x1cc + (int)unaff_r14), a2, a3);
        (**(code **)(a4 + 0x18))(a4, *(u32 *)((int)0x1d0 + (int)unaff_r14), a2, a3);
        iVar1 = (int)0x1d4;
        *(u32 *)(iVar1 + (int)unaff_r14) = 0;
    }
    return iVar1;
}

/*
 * asr_sub_115ed8  0x8c115ed8
 * area name: in the asr library code range
 * called by: asr_sub_119320, asr_sub_1197d8, asr_sub_11a634
 */
int asr_sub_115ed8(int a0, int *a1) {
    int *piVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;

    iVar4 = *(int *)a1[1];
    piVar3 = (int *)a1[1];
    piVar2 = a1;
    while (piVar1 = piVar3, iVar4 < 2) {
        piVar3 = (int *)piVar1[1];
        piVar2 = piVar1;
        iVar4 = *(int *)piVar1[1];
    }
    iVar4 = (int)0x114;
    *piVar1 = *piVar1 + -1;
    piVar2[1] = *(int *)(iVar4 + a0);
    *(int **)(iVar4 + a0) = a1;
    return iVar4;
}

/*
 * asr_sub_115f18  0x8c115f18
 * area name: in the asr library code range
 * called by: asr_sub_11617a, asr_sub_11a0e8, asr_sub_11a634
 */
int asr_sub_115f18(int a0, int a1, u32 a2, u32 a3) {
    int *piVar1;
    int iVar2;
    int *piVar3;
    int *piVar4;
    int *ar5_00;
    int *piVar5;

    ar5_00 = (int *)**(int **)(0x124 + a0);
    if (ar5_00 == *(int **)(0x124 + -4 + a0)) {
        asr_sub_11318e(a0, ar5_00, a2, a3);
    }
    iVar2 = (int)0x124;
    ar5_00[2] = a1;
    if (ar5_00 != *(int **)(iVar2 + a0)) {
        do {
            piVar4 = (int *)ar5_00[2];
            ar5_00 = (int *)ar5_00[1];
            iVar2 = *piVar4;
            while (iVar2 == 0) {
                piVar5 = (int *)piVar4[1];
                piVar3 = piVar4;
                if (piVar5 != NULL) {
                    iVar2 = *piVar5 + -1;
                    *piVar5 = iVar2;
                    while (piVar1 = piVar5, iVar2 == 0) {
                        piVar3 = (int *)piVar1[2];
                        if ((piVar3 != NULL) && (iVar2 = *piVar3, *piVar3 = iVar2 + -1, iVar2 + -1 == 0)) {
                            ar5_00 = (int *)*ar5_00;
                            if (ar5_00 == (int *)*(int *)(0x120 + a0)) {
                                asr_sub_11318e(a0, ar5_00, a2, a3);
                            }
                            ar5_00[2] = piVar1[2];
                        }
                        piVar5 = (int *)piVar1[1];
                        piVar3 = piVar1;
                        if (piVar5 == NULL)
                            break;
                        iVar2 = *piVar5 + -1;
                        *piVar5 = iVar2;
                    }
                }
                iVar2 = (int)0x114;
                piVar3[1] = *(int *)(iVar2 + a0);
                *(int **)(iVar2 + a0) = piVar4;
                piVar4 = (int *)piVar4[2];
                if (piVar4 == NULL)
                    break;
                *piVar4 = *piVar4 + -1;
                iVar2 = *piVar4;
            }
            iVar2 = (int)0x124;
        } while (ar5_00 != *(int **)(iVar2 + a0));
    }
    return iVar2;
}

/*
 * asr_sub_115fec  0x8c115fec
 * area name: in the asr library code range
 * called by: asr_sub_11617a, asr_sub_117bac
 */
u32 asr_sub_115fec(int a0) {
    u16 uVar1;
    u32 uVar2;
    int extraout_r3;
    int iVar3;
    int iVar4;
    u32 uVar5;
    int iVar6;
    u32 d;

    iVar4 = 0;
    if (*(char *)(a0 + 0x15c) == '\0') {
        if ((10 < *(u32 *)(a0 + 300)) || (*(u32 *)(a0 + 0x158) >> 2 < (u32) * (u16 *)(a0 + 0x50))) {
            *(u8 *)(a0 + 0x15c) = 1;
        }
    } else {
        d = 1;
        iVar3 = 0;
        uVar5 = 0;
        iVar6 = 0;
        do {
            iVar6 = iVar6 + 1;
            uVar5 = uVar5 + *(int *)(a0 + 0x170 + iVar3);
            d = d + *(int *)(a0 + 0x184 + iVar3);
            iVar3 = iVar3 + 4;
        } while (iVar6 < 5);
        if (uVar5 < 0x2000000) {
            uVar2 = libgcc_divide_helper_01051c(uVar5 * 0x80, d);
        } else {
            uVar2 = libgcc_divide_helper_01051c(uVar5, d >> 7);
        }
        *(u32 *)(a0 + 0x168) = uVar2;
        iVar3 = *(int *)(a0 + 0x158) - (u32) * (u16 *)(a0 + 0x50);
        iVar6 = iVar3 * *(int *)(a0 + 0x16c) * *(int *)(a0 + 0x168);
        if (iVar3 < 1) {
            iVar3 = -0x1fffc000;
            if ((iVar6 < 1) && (iVar3 = iVar6, iVar6 < -0x1fffc000)) {
                iVar3 = -0x1fffc000;
            }
        } else {
            iVar3 = 0x1fffc000;
            if ((-1 < iVar6) && (iVar3 = iVar6, 0x1fffc000 < iVar6)) {
                iVar3 = 0x1fffc000;
            }
        }
        uVar1 = *(u16 *)(a0 + 0x15e);
        iVar3 = (iVar3 >> 0xe) + (u32)uVar1;
        if ((int)(u32) * (u16 *)(a0 + 0x160) < iVar3) {
            *(u16 *)(a0 + 0x15e) = *(u16 *)(a0 + 0x160);
        } else {
            *(short *)(a0 + 0x15e) = (short)iVar3;
        }
        uVar2 = 3;
        uVar5 = libgcc_divide_helper_010468((u32)uVar1, 3);
        if (extraout_r3 < (int)(uVar5 & 0xffff)) {
            uVar2 = libgcc_divide_helper_010468((u32)uVar1, uVar2);
            *(short *)(a0 + 0x15e) = (short)uVar2;
        }
    }
    uVar2 = 0x15c;
    if (*(char *)(a0 + 0x15c) != '\0') {
        iVar6 = (u32) * (u8 *)(a0 + 0x198) * 4;
        iVar3 = *(u8 *)(a0 + 0x198) + 1;
        *(u32 *)(a0 + 0x170 + iVar6) = (u32) * (u16 *)(a0 + 0x50) * (u32) * (u16 *)(a0 + 0x15e) >> 3;
        *(u32 *)(iVar6 + a0 + 0x184) = (u32) * (u16 *)(a0 + 0x50) * (u32) * (u16 *)(a0 + 0x50) >> 3;
        if (iVar3 == 5) {
            iVar3 = iVar4;
        }
        uVar2 = 0x198;
        *(char *)(a0 + 0x198) = (char)iVar3;
    }
    return uVar2;
}

/*
 * asr_sub_11617a  0x8c11617a
 * area name: in the asr library code range
 * decompiler: Switch with 1 destination removed at 0x8c1163a2
 * decompiler: Switch with 1 destination removed at 0x8c117400
 */
u32 asr_sub_11617a(u32 a0, u32 a1, u32 a2, u32 a3) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u16 *puVar5;
    int iVar6;
    int *piVar7;
    u32 *puVar8;
    u32 uVar9;
    int iStack_8;

    iVar2 = (int)(int)0xffffff70;
    *(u32 *)((int)&iStack_8 + 0x8c + iVar2) = a0;
    *(u32 *)((int)&iStack_8 + 0x88 + iVar2) = a1;
    (&stack0x0000000f)[iVar2] = *(u8 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x7c);
    if (0xea60 < (int)(u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50)) {
        return 0xffffffff;
    }
    *(int *)(&stack0x00000030 + iVar2) = (int)0x7fff;
    *(int *)(&stack0x0000002c + iVar2) = (int)*(short *)((int)0x19a + *(int *)((int)&iStack_8 + 0x8c + iVar2));
    *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54);
    iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
    *(int *)(0x1ac + iVar6) = *(int *)(0x1ac + iVar6) + *(int *)(&stack0x0000002c + iVar2);
    *(u32 *)(&stack0x00000034 + iVar2) = 0;
    while (*(u32 *)(&stack0x00000034 + iVar2) < (u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50)) {
        iVar6 = (int)*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2);
        *(int *)(&stack0x00000008 + iVar2) = iVar6;
        if (iVar6 < 0x77ff) {
            *(u32 *)(&stack0x00000004 + iVar2) = (u32)(**(u16 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc) >> 2);
            iVar4 = *(int *)(&stack0x00000008 + iVar2);
            *(int *)(&stack0x00000008 + iVar2) = iVar4 - *(int *)(&stack0x0000002c + iVar2);
            iVar6 = (int)0x88;
            **(u16 **)((int)&iStack_8 + 0x84 + iVar2) = (short)(iVar4 - *(int *)(&stack0x0000002c + iVar2));
            *(int *)(&stack0x00000008 + iVar2) =
                *(int *)(&stack0x00000008 + iVar2) +
                (int)*(short *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + *(int *)(&stack0x00000004 + iVar2) * 2);
            *(u16 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) = *(u16 *)(&stack0x00000008 + iVar2);
        } else {
            **(u16 **)((int)&iStack_8 + 0x84 + iVar2) = (short)*(u32 *)(&stack0x00000008 + iVar2);
        }
        if (*(int *)(&stack0x00000008 + iVar2) <= *(int *)(&stack0x00000030 + iVar2)) {
            if (*(int *)(&stack0x00000008 + iVar2) == *(int *)(&stack0x00000030 + iVar2)) {
                *(u32 *)(&stack0x00000004 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                while ((**(u16 **)(&stack0x00000004 + iVar2) & 1) == 0) {
                    *(int *)(&stack0x00000004 + iVar2) = *(int *)(&stack0x00000004 + iVar2) + 2;
                }
                *(u16 *)(&stack0x00000000 + iVar2) = *(u16 *)(*(int *)(&stack0x00000004 + iVar2) + 2);
                *(u16 *)(&stack0x00000002 + iVar2) = *(u16 *)(*(int *)(&stack0x00000004 + iVar2) + 4);
                if ((*(u16 *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xc0) +
                              *(int *)(&stack0x00000000 + iVar2) * 2) &
                     2) != 0) {
                    *(u32 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                        *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                }
            } else {
                *(u32 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                    *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
            }
            *(u32 *)(&stack0x00000030 + iVar2) = *(u32 *)(&stack0x00000008 + iVar2);
        }
        iVar6 = (int)0x84;
        piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
        *piVar7 = *piVar7 + 1;
        iVar4 = *(int *)((int)&iStack_8 + iVar6 + iVar2);
        iVar6 = (int)0x84;
        *(u32 *)(iVar4 + 4) = *(u32 *)(iVar4 + 8);
        *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x18);
        *(int *)(&stack0x00000034 + iVar2) = *(int *)(&stack0x00000034 + iVar2) + 1;
    }
    *(short *)((int)0x19a + *(int *)((int)&iStack_8 + 0x8c + iVar2)) = (short)*(u32 *)(&stack0x00000030 + iVar2);
    asr_sub_115fec(*(u32 *)((int)&iStack_8 + 0x8c + iVar2));
    iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
    *(short *)(&stack0x0000002a + iVar2) = *(short *)(0x19a + -0x3c + iVar6) + *(short *)(0x19a + iVar6) +
                                           *(short *)((int)0x1a0 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
    *(u32 *)(&stack0x00000048 + iVar2) = (u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50);
    *(u32 *)(&stack0x00000044 + iVar2) = (u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 100);
    *(u32 *)(&stack0x00000040 + iVar2) = (u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x70);
    *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x60);
    *(u32 *)(&stack0x00000070 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x6c);
    *(u32 *)(&stack0x0000006c + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x78);
    *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54);
    iVar6 = 0;
    *(u32 *)(&stack0x00000064 + iVar2) = 0;
    do {
        *(int *)(&stack0x00000034 + iVar2) = iVar6;
        if ((u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50) <= *(u32 *)(&stack0x00000034 + iVar2)) {
            *(u32 *)(&stack0x0000003c + iVar2) = *(u32 *)(&stack0x00000044 + iVar2);
            *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68);
            *(u32 *)(&stack0x00000064 + iVar2) = 0;
            uVar9 = 0;
            while (*(u32 *)(&stack0x00000034 + iVar2) = uVar9, uVar9 < *(u32 *)(&stack0x0000003c + iVar2)) {
                iVar6 = (int)*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2);
                *(int *)(&stack0x00000008 + iVar2) = iVar6;
                if (*(short *)(&stack0x0000002a + iVar2) < iVar6) {
                    if ((*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8) != 0) &&
                        (piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8), iVar6 = *piVar7 + -1,
                         *piVar7 = iVar6, iVar6 < 1)) {
                        (*(code *)(&asr_sub_115f18))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                     *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8), a2, a3);
                    }
                    if ((&stack0x0000000f)[iVar2] == '\0') {
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10) = 0;
                    } else {
                        **(u32 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c) = 0;
                    }
                    if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x00000070 + iVar2)) {
                        *(u32 *)(&stack0x00000070 + iVar2) = *(u32 *)(&stack0x00000064 + iVar2);
                        if (*(int *)((int)&iStack_8 + 0x84 + iVar2) ==
                            *(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68)) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) = 0;
                        }
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                    } else {
                        *(u32 *)(&stack0x00000004 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                        if (*(int *)(&stack0x00000064 + iVar2) == 0) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) =
                                *(u32 *)(&stack0x00000004 + iVar2);
                        } else {
                            *(u32 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) = *(u32 *)(&stack0x00000004 + iVar2);
                        }
                        *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(&stack0x00000004 + iVar2);
                    }
                    *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + -1;
                } else {
                    *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
                    iVar6 = *(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                    *(int *)(&stack0x0000004c + iVar2) = iVar6;
                    *(u16 *)(&stack0x00000024 + iVar2) = *(u16 *)(iVar6 + 2);
                    *(u16 *)(&stack0x00000026 + iVar2) = *(u16 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
                    iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                    *(int *)(&stack0x00000050 + iVar2) = iVar6;
                    if (*(int *)(iVar6 + 4) == 0) {
                        iVar4 = (int)0x114;
                        iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                        uVar3 = (*(code *)(&asr_sub_112fd8))(iVar6, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                        *(u32 *)(iVar4 + iVar6) = uVar3;
                    } else {
                        *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                    }
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                    **(u32 **)(&stack0x00000050 + iVar2) = 0;
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                        *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                    iVar6 = (int)0xa8;
                    *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                        *(int *)(&stack0x00000008 + iVar2) +
                        *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                    *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                    iVar6 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + iVar6) +
                                     *(int *)(&stack0x00000024 + iVar2) * 4);
                    *(int *)(&stack0x00000060 + iVar2) = iVar6;
                    if (iVar6 == 0) {
                        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                            uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                                 *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                            *(u32 *)(&stack0x00000068 + iVar2) = uVar3;
                        } else {
                            *(u32 *)(&stack0x00000068 + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        }
                        *(u16 *)(*(int *)(&stack0x00000068 + iVar2) + 2) = *(u16 *)(&stack0x00000008 + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
                        *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(int *)(&stack0x00000040 + iVar2) = *(int *)(&stack0x00000040 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
                        if (*(int *)(&stack0x0000006c + iVar2) != 0) {
                            *(u32 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18) = *(u32 *)(&stack0x00000068 + iVar2);
                        }
                        *(u32 *)(&stack0x0000006c + iVar2) = *(u32 *)(&stack0x00000068 + iVar2);
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xa8) +
                                 *(int *)(&stack0x00000024 + iVar2) * 4) = *(u32 *)(&stack0x0000006c + iVar2);
                        if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) == 0) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) =
                                *(u32 *)(&stack0x0000006c + iVar2);
                        }
                    } else if (*(int *)(&stack0x00000008 + iVar2) < (int)*(short *)(iVar6 + 2)) {
                        *(u16 *)(*(int *)(&stack0x00000060 + iVar2) + 2) = *(u16 *)(&stack0x00000008 + iVar2);
                        *(u32 *)(&stack0x00000054 + iVar2) = *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 8);
                        *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000058 + iVar2) + 8) = *(u32 *)(&stack0x00000054 + iVar2);
                    } else {
                        *(u32 *)(&stack0x00000054 + iVar2) =
                            *(u32 *)(*(int *)(*(int *)(&stack0x00000060 + iVar2) + 8) + 8);
                        *(u32 *)(*(int *)(*(int *)(&stack0x00000060 + iVar2) + 8) + 8) =
                            *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000058 + iVar2) + 8) = *(u32 *)(&stack0x00000054 + iVar2);
                    }
                    piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
                    iVar6 = *piVar7 + -1;
                    *piVar7 = iVar6;
                    if (iVar6 < 1) {
                        (*(code *)(&asr_sub_115f18))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                     *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8), a2, a3);
                    }
                    *(u16 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) = 0x7fff;
                    iVar6 = (int)0x84;
                    *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8) = 0;
                    *(u32 *)(&stack0x00000064 + iVar2) = *(u32 *)((int)&iStack_8 + iVar6 + iVar2);
                    *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
                }
                uVar9 = *(int *)(&stack0x00000034 + iVar2) + 1;
            }
            *(u32 *)(&stack0x00000038 + iVar2) = *(u32 *)(&stack0x00000040 + iVar2);
            *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74);
            *(u32 *)(&stack0x00000064 + iVar2) = 0;
            uVar9 = 0;
            while (*(u32 *)(&stack0x00000034 + iVar2) = uVar9, uVar9 < *(u32 *)(&stack0x00000038 + iVar2)) {
                *(int *)(&stack0x00000008 + iVar2) = (int)*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2);
                *(u16 *)(&stack0x00000024 + iVar2) =
                    *(u16 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc) + 2);
                *(u16 *)(&stack0x00000026 + iVar2) =
                    *(u16 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc) + 4);
                if ((int)*(short *)(&stack0x0000002a + iVar2) < *(int *)(&stack0x00000008 + iVar2)) {
                    *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xa8) +
                             *(int *)(&stack0x00000024 + iVar2) * 4) = 0;
                    if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x0000006c + iVar2)) {
                        *(u32 *)(&stack0x0000006c + iVar2) = *(u32 *)(&stack0x00000064 + iVar2);
                        if (*(int *)((int)&iStack_8 + 0x84 + iVar2) ==
                            *(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74)) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) = 0;
                        }
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                    } else {
                        *(u32 *)(&stack0x00000004 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                        if (*(int *)(&stack0x00000064 + iVar2) == 0) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) =
                                *(u32 *)(&stack0x00000004 + iVar2);
                        } else {
                            *(u32 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) = *(u32 *)(&stack0x00000004 + iVar2);
                        }
                        *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(&stack0x00000004 + iVar2);
                    }
                    *(int *)(&stack0x00000040 + iVar2) = *(int *)(&stack0x00000040 + iVar2) + -1;
                } else {
                    *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
                    *(u32 *)(&stack0x0000001c + iVar2) =
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0x98) +
                                 *(int *)(&stack0x00000024 + iVar2) * 4);
                    *(u32 *)(&stack0x00000018 + iVar2) =
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0x98) +
                                 (*(int *)(&stack0x00000024 + iVar2) + 1) * 4);
                    *(u32 *)(&stack0x0000005c + iVar2) =
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xa0) +
                                 *(int *)(&stack0x00000024 + iVar2) * 4);
                    while (*(u32 *)(&stack0x0000001c + iVar2) < *(u32 *)(&stack0x00000018 + iVar2)) {
                        iVar6 = **(int **)(&stack0x0000001c + iVar2);
                        *(int *)(&stack0x00000020 + iVar2) = iVar6;
                        *(short *)(&stack0x0000000c + iVar2) =
                            *(short *)(&stack0x00000008 + iVar2) +
                            *(short *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0x1c0) + iVar6 * 2);
                        *(u32 *)(&stack0x00000014 + iVar2) =
                            *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x44) +
                                     *(int *)(&stack0x00000020 + iVar2) * 4);
                        *(u32 *)(&stack0x00000010 + iVar2) =
                            *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x44) +
                                     (*(int *)(&stack0x00000020 + iVar2) + 1) * 4);
                        while (*(u32 *)(&stack0x00000014 + iVar2) < *(u32 *)(&stack0x00000010 + iVar2)) {
                            puVar5 = (u16 *)(**(int **)(&stack0x00000014 + iVar2) * 2 +
                                             *(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x48));
                            *(u16 **)(&stack0x0000004c + iVar2) = puVar5;
                            *(u32 *)(&stack0x00000060 + iVar2) = **(u32 **)(&stack0x0000005c + iVar2);
                            *(short *)(&stack0x00000028 + iVar2) =
                                *(short *)(&stack0x0000000c + iVar2) +
                                *(short *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (u32)(*puVar5 >> 2) * 2);
                            if (*(short *)(&stack0x00000028 + iVar2) <= *(short *)(&stack0x0000002a + iVar2)) {
                                if (*(int *)(&stack0x00000060 + iVar2) == 0) {
                                    if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                                        uVar3 =
                                            (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                                         *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                                        *(u32 *)(&stack0x00000074 + iVar2) = uVar3;
                                    } else {
                                        *(u32 *)(&stack0x00000074 + iVar2) =
                                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                                    }
                                    *(u16 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                                        *(u16 *)(&stack0x00000028 + iVar2);
                                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                                        *(u32 *)(&stack0x0000004c + iVar2);
                                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                                        *(u32 *)(&stack0x00000058 + iVar2);
                                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
                                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) = 0;
                                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                                    *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                                    **(u32 **)(&stack0x0000005c + iVar2) = *(u32 *)(&stack0x00000074 + iVar2);
                                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
                                        *(u32 *)(&stack0x0000005c + iVar2);
                                    iVar4 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                                    iVar6 = *(int *)(&stack0x0000001c + iVar2) -
                                            *(int *)((int)0x9c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                                    if (iVar6 < 0) {
                                        iVar6 = iVar6 + 3;
                                    }
                                    *(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
                                        *(int *)(0x144 + iVar4) * 4 + *(int *)(0xac + iVar4) + (iVar6 >> 2) * 4;
                                } else if (*(short *)(&stack0x00000028 + iVar2) <
                                           *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
                                    *(u16 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
                                        *(u16 *)(&stack0x00000028 + iVar2);
                                    iVar6 = **(int **)(*(int *)(&stack0x00000060 + iVar2) + 8) + -1;
                                    **(int **)(*(int *)(&stack0x00000060 + iVar2) + 8) = iVar6;
                                    if (iVar6 < 1) {
                                        (*(code *)(&asr_sub_115f18))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                                     *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 8),
                                                                     a2, a3);
                                    }
                                    *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                                        *(u32 *)(&stack0x00000058 + iVar2);
                                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                                }
                            }
                            *(int *)(&stack0x00000014 + iVar2) = *(int *)(&stack0x00000014 + iVar2) + 4;
                            *(int *)(&stack0x0000005c + iVar2) = *(int *)(&stack0x0000005c + iVar2) + 4;
                        }
                        *(int *)(&stack0x0000001c + iVar2) = *(int *)(&stack0x0000001c + iVar2) + 4;
                    }
                    iVar6 = **(int **)(&stack0x00000058 + iVar2) + -1;
                    **(int **)(&stack0x00000058 + iVar2) = iVar6;
                    if (iVar6 < 1) {
                        (*(code *)(&asr_sub_115f18))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                     *(u32 *)(&stack0x00000058 + iVar2), a2, a3);
                    }
                    *(u16 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) = 0x77ff;
                    iVar6 = (int)0x84;
                    *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8) = 0;
                    *(u32 *)(&stack0x00000064 + iVar2) = *(u32 *)((int)&iStack_8 + iVar6 + iVar2);
                    *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
                }
                uVar9 = *(int *)(&stack0x00000034 + iVar2) + 1;
            }
            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x60) = *(u32 *)(&stack0x00000074 + iVar2);
            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x6c) = *(u32 *)(&stack0x00000070 + iVar2);
            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x78) = *(u32 *)(&stack0x0000006c + iVar2);
            *(u16 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50) = *(u16 *)(&stack0x00000048 + iVar2);
            *(u16 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 100) = *(u16 *)(&stack0x00000044 + iVar2);
            *(u16 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x70) = *(u16 *)(&stack0x00000040 + iVar2);
            return 0;
        }
        *(int *)(&stack0x00000000 + iVar2) = (int)**(short **)((int)&iStack_8 + 0x84 + iVar2);
        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
        puVar5 = *(u16 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
        *(u16 **)(&stack0x0000004c + iVar2) = puVar5;
        uVar1 = *puVar5;
        *(u32 *)(&stack0x00000008 + iVar2) = (u32)uVar1;
        if ((uVar1 & 2) == 0) {
            *(u32 *)(&stack0x00000004 + iVar2) = 1;
        } else {
            *(u32 *)(&stack0x00000004 + iVar2) = 0;
        }
        if ((*(u32 *)(&stack0x00000008 + iVar2) & 1) == 0) {
            iVar6 = *(int *)(&stack0x0000004c + iVar2);
            *(u16 **)(&stack0x0000004c + iVar2) = (u16 *)(iVar6 + 2);
            uVar1 = *(u16 *)(iVar6 + 2);
            *(u32 *)(&stack0x00000008 + iVar2) = (u32)uVar1;
            uVar9 = (u32)(uVar1 >> 2);
            *(u32 *)(&stack0xfffffffc + iVar2) = uVar9;
            *(short *)(&stack0x00000028 + iVar2) = *(short *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + uVar9 * 2) +
                                                   (short)*(u32 *)(&stack0x00000000 + iVar2);
            if (((*(u32 *)(&stack0x00000008 + iVar2) & 1) == 0) || ((&stack0x0000000f)[iVar2] != '\0')) {
                iVar6 = *(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10);
                *(int *)(&stack0x00000060 + iVar2) = iVar6;
                if (iVar6 == 0) {
                    if (*(short *)(&stack0x00000028 + iVar2) <= *(short *)(&stack0x0000002a + iVar2)) {
                        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                            *(int *)(&stack0x00000050 + iVar2) = iVar6;
                            if (*(int *)(iVar6 + 4) == 0) {
                                iVar4 = (int)0x114;
                                iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                                uVar3 = (*(code *)(&asr_sub_112fd8))(iVar6, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                                *(u32 *)(iVar4 + iVar6) = uVar3;
                            } else {
                                *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                            }
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                                *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                            **(u32 **)(&stack0x00000050 + iVar2) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                                *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                                *(int *)(&stack0x00000000 + iVar2) +
                                *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                            *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                        }
                        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                            uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                                 *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                            *(u32 *)(&stack0x00000074 + iVar2) = uVar3;
                        } else {
                            *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        }
                        *(u16 *)(*(int *)(&stack0x00000074 + iVar2) + 2) = *(u16 *)(&stack0x00000028 + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                        iVar6 = (int)0x84;
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
                        *(u32 *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x10) = *(u32 *)(&stack0x00000074 + iVar2);
                    }
                } else if (*(short *)(&stack0x00000028 + iVar2) < *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
                    if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                        iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(&stack0x00000050 + iVar2) = iVar6;
                        if (*(int *)(iVar6 + 4) == 0) {
                            iVar4 = (int)0x114;
                            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                            uVar3 = (*(code *)(&asr_sub_112fd8))(iVar6, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                            *(u32 *)(iVar4 + iVar6) = uVar3;
                        } else {
                            *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                                *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                        }
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                        **(u32 **)(&stack0x00000050 + iVar2) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                            *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                            *(int *)(&stack0x00000000 + iVar2) +
                            *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                    }
                    *(u16 *)(*(int *)(&stack0x00000060 + iVar2) + 2) = *(u16 *)(&stack0x00000028 + iVar2);
                    iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
                    *(int *)(&stack0x00000054 + iVar2) = iVar6;
                    if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
                        *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1;
                        **(int **)(&stack0x00000054 + iVar2) = iVar6;
                        if (iVar6 < 1) {
                            asr_sub_115f18(*(u32 *)((int)&iStack_8 + 0x8c + iVar2), *(u32 *)(&stack0x00000054 + iVar2),
                                           a2, a3);
                        }
                    }
                }
                piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
                iVar6 = *piVar7 + -1;
                *piVar7 = iVar6;
                if (iVar6 < 1) {
                    asr_sub_115f18(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                   *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4), a2, a3);
                }
                if (*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) <= *(short *)(&stack0x0000002a + iVar2)) {
                    iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
                    *(int *)(&stack0x00000064 + iVar2) = iVar6;
                    *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(iVar6 + 0x18);
                    goto LAB_8c1173e8;
                }
                if ((*(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) <
                     *(u32 *)((int)0xa0 + *(int *)((int)&iStack_8 + 0x8c + iVar2))) ||
                    (*(u32 *)((int)0xa4 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) <=
                     *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14))) {
                    if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) == 0)
                        goto LAB_8c116732;
                    if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) != 0) {
                        iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
                        *(int *)(&stack0x00000064 + iVar2) = iVar6;
                        *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(iVar6 + 0x18);
                        goto LAB_8c1173e8;
                    }
                    piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
                    iVar6 = *piVar7 + -1;
                    *piVar7 = iVar6;
                    if (iVar6 < 1) {
                        asr_sub_115f18(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                       *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8), a2, a3);
                    }
                    *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10) = 0;
                    if (*(int *)((int)&iStack_8 + 0x84 + iVar2) != *(int *)(&stack0x00000074 + iVar2)) {
                        *(u32 *)((int)&iStack_8 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                        if (*(int *)(&stack0x00000064 + iVar2) == 0) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) = *(u32 *)((int)&iStack_8 + iVar2);
                        } else {
                            *(u32 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + iVar2);
                        }
                        *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)((int)&iStack_8 + iVar2);
                        goto LAB_8c1173cc;
                    }
                } else {
                    **(u32 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) = 0;
                LAB_8c116732:
                    piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
                    iVar6 = *piVar7 + -1;
                    *piVar7 = iVar6;
                    if (iVar6 < 1) {
                        asr_sub_115f18(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                       *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8), a2, a3);
                    }
                    if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) != 0) {
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) + 0x14) = 0;
                    }
                    if (*(int *)((int)&iStack_8 + 0x84 + iVar2) != *(int *)(&stack0x00000074 + iVar2)) {
                        *(u32 *)((int)&iStack_8 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                        if (*(int *)(&stack0x00000064 + iVar2) == 0) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) = *(u32 *)((int)&iStack_8 + iVar2);
                        } else {
                            *(u32 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + iVar2);
                        }
                        *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)((int)&iStack_8 + iVar2);
                        goto LAB_8c1173cc;
                    }
                }
                *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(&stack0x00000064 + iVar2);
                goto LAB_8c1173cc;
            }
            iVar6 = **(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
            *(int *)(&stack0x00000060 + iVar2) = iVar6;
            if (iVar6 == 0) {
                if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                    iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                    *(int *)(&stack0x00000050 + iVar2) = iVar6;
                    if (*(int *)(iVar6 + 4) == 0) {
                        iVar4 = (int)0x114;
                        iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                        uVar3 = (*(code *)(&asr_sub_112fd8))(iVar6, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                        *(u32 *)(iVar4 + iVar6) = uVar3;
                    } else {
                        *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                    }
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                    **(u32 **)(&stack0x00000050 + iVar2) = 0;
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                        *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                    *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                        *(int *)(&stack0x00000000 + iVar2) +
                        *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                    *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                }
                if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                    uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                         *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                    *(u32 *)(&stack0x00000074 + iVar2) = uVar3;
                } else {
                    *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                }
                *(u16 *)(*(int *)(&stack0x00000074 + iVar2) + 2) = *(u16 *)(&stack0x00000028 + iVar2);
                *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
                *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                iVar6 = (int)0x84;
                *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
                    *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
                **(u32 **)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x1c) = *(u32 *)(&stack0x00000074 + iVar2);
                *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(&stack0x00000074 + iVar2);
                if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                    uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                         *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                    *(u32 *)(&stack0x00000068 + iVar2) = uVar3;
                } else {
                    *(u32 *)(&stack0x00000068 + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                }
                *(u16 *)(*(int *)(&stack0x00000068 + iVar2) + 2) = *(u16 *)(&stack0x00000000 + iVar2);
                *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
                *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) = *(u32 *)((int)&iStack_8 + 0x80 + iVar2);
                **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
                *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                    *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
                if (*(int *)(&stack0x00000070 + iVar2) != 0) {
                    *(u32 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) = *(u32 *)(&stack0x00000068 + iVar2);
                }
                *(u32 *)(&stack0x00000070 + iVar2) = *(u32 *)(&stack0x00000068 + iVar2);
                if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) == 0) {
                    *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) = *(u32 *)(&stack0x00000070 + iVar2);
                }
                *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x10) = *(u32 *)(&stack0x00000070 + iVar2);
            } else {
                if (*(short *)(&stack0x00000028 + iVar2) < *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
                    if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                        iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(&stack0x00000050 + iVar2) = iVar6;
                        if (*(int *)(iVar6 + 4) == 0) {
                            iVar4 = (int)0x114;
                            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                            uVar3 = (*(code *)(&asr_sub_112fd8))(iVar6, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                            *(u32 *)(iVar4 + iVar6) = uVar3;
                        } else {
                            *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                                *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                        }
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                        **(u32 **)(&stack0x00000050 + iVar2) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                            *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                            *(int *)(&stack0x00000000 + iVar2) +
                            *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                        *(u32 *)(&stack0x00000004 + iVar2) = 1;
                    }
                    *(u16 *)(*(int *)(&stack0x00000060 + iVar2) + 2) = *(u16 *)(&stack0x00000028 + iVar2);
                    iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
                    *(int *)(&stack0x00000054 + iVar2) = iVar6;
                    if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
                        *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1;
                        **(int **)(&stack0x00000054 + iVar2) = iVar6;
                        if (iVar6 < 1) {
                            asr_sub_115f18(*(u32 *)((int)&iStack_8 + 0x8c + iVar2), *(u32 *)(&stack0x00000054 + iVar2),
                                           a2, a3);
                        }
                    }
                }
                iVar6 = *(int *)(&stack0x00000060 + iVar2);
                *(int *)((int)&iStack_8 + 0x80 + iVar2) = iVar6;
                iVar6 = *(int *)(iVar6 + 0x10);
                *(int *)(&stack0x00000060 + iVar2) = iVar6;
                if (iVar6 == 0) {
                    if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                        iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(&stack0x00000050 + iVar2) = iVar6;
                        if (*(int *)(iVar6 + 4) == 0) {
                            iVar4 = (int)0x114;
                            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                            uVar3 = (*(code *)(&asr_sub_112fd8))(iVar6, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                            *(u32 *)(iVar4 + iVar6) = uVar3;
                        } else {
                            *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                                *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                        }
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                        **(u32 **)(&stack0x00000050 + iVar2) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                            *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                            *(int *)(&stack0x00000000 + iVar2) +
                            *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                    }
                    if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                        uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                             *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                        *(u32 *)(&stack0x00000068 + iVar2) = uVar3;
                    } else {
                        *(u32 *)(&stack0x00000068 + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                    }
                    *(u16 *)(*(int *)(&stack0x00000068 + iVar2) + 2) = *(u16 *)(&stack0x00000000 + iVar2);
                    *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                    *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                    *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
                    *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) = *(u32 *)((int)&iStack_8 + 0x80 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                        *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
                    if (*(int *)(&stack0x00000070 + iVar2) != 0) {
                        *(u32 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) = *(u32 *)(&stack0x00000068 + iVar2);
                    }
                    *(u32 *)(&stack0x00000070 + iVar2) = *(u32 *)(&stack0x00000068 + iVar2);
                    if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) == 0) {
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) = *(u32 *)(&stack0x00000070 + iVar2);
                    }
                    *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x10) = *(u32 *)(&stack0x00000070 + iVar2);
                } else if (*(int *)(&stack0x00000000 + iVar2) <
                           (int)*(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
                    if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                        iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(&stack0x00000050 + iVar2) = iVar6;
                        if (*(int *)(iVar6 + 4) == 0) {
                            iVar4 = (int)0x114;
                            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                            uVar3 = (*(code *)(&asr_sub_112fd8))(iVar6, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                            *(u32 *)(iVar4 + iVar6) = uVar3;
                        } else {
                            *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                                *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                        }
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                        **(u32 **)(&stack0x00000050 + iVar2) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                            *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                            *(int *)(&stack0x00000000 + iVar2) +
                            *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                    }
                    *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                    *(u16 *)(*(int *)(&stack0x00000060 + iVar2) + 2) = *(u16 *)(&stack0x00000000 + iVar2);
                    iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
                    *(int *)(&stack0x00000054 + iVar2) = iVar6;
                    if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
                        *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
                            (iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1,
                             **(int **)(&stack0x00000054 + iVar2) = iVar6, iVar6 < 1)) {
                            asr_sub_115f18(*(u32 *)((int)&iStack_8 + 0x8c + iVar2), *(u32 *)(&stack0x00000054 + iVar2),
                                           a2, a3);
                        }
                    }
                }
            }
            piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
            iVar6 = *piVar7 + -1;
            *piVar7 = iVar6;
            if (iVar6 < 1) {
                asr_sub_115f18(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                               *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4), a2, a3);
            }
            if (*(short *)(&stack0x0000002a + iVar2) < *(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2)) {
                piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
                iVar6 = *piVar7 + -1;
                *piVar7 = iVar6;
                if (iVar6 < 1) {
                    asr_sub_115f18(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                   *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8), a2, a3);
                }
                if ((*(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) <
                     *(u32 *)((int)0xa0 + *(int *)((int)&iStack_8 + 0x8c + iVar2))) ||
                    (*(u32 *)((int)0xa4 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) <=
                     *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14))) {
                    if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) != 0) {
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10) = 0;
                    }
                } else {
                    **(u32 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) = 0;
                }
                if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
                    *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(&stack0x00000064 + iVar2);
                } else {
                    *(u32 *)((int)&iStack_8 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
                    *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                    if (*(int *)(&stack0x00000064 + iVar2) == 0) {
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) = *(u32 *)((int)&iStack_8 + iVar2);
                    } else {
                        *(u32 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + iVar2);
                    }
                    *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)((int)&iStack_8 + iVar2);
                }
                goto LAB_8c1173cc;
            }
            iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
            *(int *)(&stack0x00000064 + iVar2) = iVar6;
            *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(iVar6 + 0x18);
        } else {
            if ((&stack0x0000000f)[iVar2] == '\0') {
                iVar6 = *(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10);
            } else {
                iVar6 = **(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
            }
            *(int *)(&stack0x00000060 + iVar2) = iVar6;
            if (iVar6 == 0) {
                if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x0000002a + iVar2)) {
                    if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                        iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(&stack0x00000050 + iVar2) = iVar6;
                        if (*(int *)(iVar6 + 4) == 0) {
                            iVar4 = (int)0x114;
                            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                            uVar3 = (*(code *)(&asr_sub_112fd8))(iVar6, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                            *(u32 *)(iVar4 + iVar6) = uVar3;
                        } else {
                            *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                                *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                        }
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                        **(u32 **)(&stack0x00000050 + iVar2) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                            *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                            *(int *)(&stack0x00000000 + iVar2) +
                            *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                    }
                    if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                        uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                             *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                        *(u32 *)(&stack0x00000068 + iVar2) = uVar3;
                    } else {
                        *(u32 *)(&stack0x00000068 + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                    }
                    *(u16 *)(*(int *)(&stack0x00000068 + iVar2) + 2) = *(u16 *)(&stack0x00000000 + iVar2);
                    *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                    *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                    *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
                    *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                        *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
                    if (*(int *)(&stack0x00000070 + iVar2) != 0) {
                        *(u32 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) = *(u32 *)(&stack0x00000068 + iVar2);
                    }
                    *(u32 *)(&stack0x00000070 + iVar2) = *(u32 *)(&stack0x00000068 + iVar2);
                    if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) == 0) {
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) = *(u32 *)(&stack0x00000070 + iVar2);
                    }
                    if ((&stack0x0000000f)[iVar2] == '\0') {
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) = *(u32 *)(&stack0x00000070 + iVar2);
                    } else {
                        iVar6 = (int)0x84;
                        *(u32 *)(*(int *)(&stack0x00000070 + iVar2) + 0x1c) =
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
                        **(u32 **)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x1c) =
                            *(u32 *)(&stack0x00000070 + iVar2);
                    }
                }
            } else if (*(int *)(&stack0x00000000 + iVar2) < (int)*(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
                if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                    iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                    *(int *)(&stack0x00000050 + iVar2) = iVar6;
                    if (*(int *)(iVar6 + 4) == 0) {
                        iVar4 = (int)0x114;
                        iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                        uVar3 = (*(code *)(&asr_sub_112fd8))(iVar6, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                        *(u32 *)(iVar4 + iVar6) = uVar3;
                    } else {
                        *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                    }
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
                    **(u32 **)(&stack0x00000050 + iVar2) = 0;
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                        *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                    *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                        *(int *)(&stack0x00000000 + iVar2) +
                        *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
                    *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                }
                *(u16 *)(*(int *)(&stack0x00000060 + iVar2) + 2) = *(u16 *)(&stack0x00000000 + iVar2);
                *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
                *(int *)(&stack0x00000054 + iVar2) = iVar6;
                if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
                    *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
                        (iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1,
                         **(int **)(&stack0x00000054 + iVar2) = iVar6, iVar6 < 1)) {
                        (*(code *)(&asr_sub_115f18))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                                     *(u32 *)(&stack0x00000054 + iVar2), a2, a3);
                    }
                }
            }
            piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
            iVar6 = *piVar7 + -1;
            *piVar7 = iVar6;
            if (iVar6 < 1) {
                (*(code *)(&asr_sub_115f18))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                             *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4), a2, a3);
            }
            if ((*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) <= *(short *)(&stack0x0000002a + iVar2)) ||
                (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) != 0)) {
                iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
                *(int *)(&stack0x00000064 + iVar2) = iVar6;
                *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(iVar6 + 0x18);
                goto LAB_8c1173e8;
            }
            piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
            iVar6 = *piVar7 + -1;
            *piVar7 = iVar6;
            if (iVar6 < 1) {
                (*(code *)(&asr_sub_115f18))(*(u32 *)((int)&iStack_8 + 0x8c + iVar2),
                                             *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8), a2, a3);
            }
            if ((&stack0x0000000f)[iVar2] == '\0') {
                puVar8 = *(u32 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
            LAB_8c11734a:
                *puVar8 = 0;
            } else {
                if ((*(u32 *)((int)0xa0 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) <=
                     *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14)) &&
                    (*(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) <
                     *(u32 *)((int)0xa4 + *(int *)((int)&iStack_8 + 0x8c + iVar2)))) {
                    puVar8 = *(u32 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14);
                    goto LAB_8c11734a;
                }
                if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) != 0) {
                    *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10) = 0;
                }
            }
            if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
                *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(&stack0x00000064 + iVar2);
            } else {
                *(u32 *)(&stack0xfffffffc + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
                *(u32 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x84 + iVar2);
                if (*(int *)(&stack0x00000064 + iVar2) == 0) {
                    *(u32 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) = *(u32 *)(&stack0xfffffffc + iVar2);
                } else {
                    *(u32 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) = *(u32 *)(&stack0xfffffffc + iVar2);
                }
                *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = *(u32 *)(&stack0xfffffffc + iVar2);
            }
        LAB_8c1173cc:
            *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + -1;
        }
    LAB_8c1173e8:
        iVar6 = *(int *)(&stack0x00000034 + iVar2) + 1;
    } while (true);
}

/*
 * asr_sub_117bac  0x8c117bac
 * area name: in the asr library code range
 */
u32 asr_sub_117bac(u32 a0, u32 a1, u32 a2, u32 a3) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int *piVar5;
    short sVar6;
    int iVar7;
    u16 *puVar8;
    int iStack_8;

    iVar2 = (int)(int)0xffffff74;
    *(u32 *)((int)&iStack_8 + 0x88 + iVar2) = a0;
    *(u32 *)((int)&iStack_8 + 0x84 + iVar2) = a1;
    (&stack0x0000000f)[iVar2] = *(u8 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x7c);
    if (0xea60 < *(u16 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50)) {
        return 0xffffffff;
    }
    *(int *)(&stack0x00000038 + iVar2) = (int)0x7fff;
    *(u16 *)(&stack0x00000036 + iVar2) = *(u16 *)((int)0x19a + *(int *)((int)&iStack_8 + 0x88 + iVar2));
    *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54);
    iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
    *(int *)(0x1ac + iVar4) = *(int *)(0x1ac + iVar4) + (int)*(short *)(&stack0x00000036 + iVar2);
    iVar4 = 0;
    while (*(int *)(&stack0x0000003c + iVar2) = iVar4,
           *(u32 *)(&stack0x0000003c + iVar2) < (u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50)) {
        *(u32 *)(&stack0x00000008 + iVar2) = (u32)(**(u16 **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) >> 2);
        iVar4 = (int)*(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2);
        *(int *)(&stack0x00000004 + iVar2) = iVar4;
        if (iVar4 < 0x77ff) {
            iVar7 = *(int *)(&stack0x00000004 + iVar2);
            *(int *)(&stack0x00000004 + iVar2) = iVar7 - *(short *)(&stack0x00000036 + iVar2);
            iVar4 = (int)0x84;
            **(u16 **)((int)&iStack_8 + 0x80 + iVar2) = (short)(iVar7 - *(short *)(&stack0x00000036 + iVar2));
            *(int *)(&stack0x00000004 + iVar2) =
                *(int *)(&stack0x00000004 + iVar2) +
                (int)*(short *)(*(int *)((int)&iStack_8 + iVar4 + iVar2) + *(int *)(&stack0x00000008 + iVar2) * 2);
            *(u16 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2) = *(u16 *)(&stack0x00000004 + iVar2);
        } else {
            **(u16 **)((int)&iStack_8 + 0x80 + iVar2) = (short)*(u32 *)(&stack0x00000004 + iVar2);
        }
        if (*(int *)(&stack0x00000004 + iVar2) <= *(int *)(&stack0x00000038 + iVar2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == *(int *)(&stack0x00000038 + iVar2)) {
                *(u32 *)(&stack0x00000000 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                while ((**(u16 **)(&stack0x00000000 + iVar2) & 1) == 0) {
                    *(int *)(&stack0x00000000 + iVar2) = *(int *)(&stack0x00000000 + iVar2) + 2;
                }
                *(u16 *)(&stack0xfffffffc + iVar2) = *(u16 *)(*(int *)(&stack0x00000000 + iVar2) + 2);
                *(u16 *)(&stack0xfffffffe + iVar2) = *(u16 *)(*(int *)(&stack0x00000000 + iVar2) + 4);
                if ((*(u16 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xc0) +
                              *(int *)(&stack0xfffffffc + iVar2) * 2) &
                     2) != 0) {
                    *(u32 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                        *(u32 *)((int)&iStack_8 + 0x80 + iVar2);
                }
            } else {
                *(u32 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                    *(u32 *)((int)&iStack_8 + 0x80 + iVar2);
            }
            *(u32 *)(&stack0x00000038 + iVar2) = *(u32 *)(&stack0x00000004 + iVar2);
        }
        iVar4 = (int)0x80;
        piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
        *piVar5 = *piVar5 + 1;
        iVar7 = *(int *)((int)&iStack_8 + iVar4 + iVar2);
        iVar4 = (int)0x80;
        *(u32 *)(iVar7 + 4) = *(u32 *)(iVar7 + 8);
        *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + iVar4 + iVar2) + 0x18);
        iVar4 = *(int *)(&stack0x0000003c + iVar2) + 1;
    }
    *(u16 *)((int)0x19a + *(int *)((int)&iStack_8 + 0x88 + iVar2)) = *(u16 *)(&stack0x00000038 + iVar2);
    asr_sub_115fec(*(u32 *)((int)&iStack_8 + 0x88 + iVar2));
    iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
    *(short *)(&stack0x00000034 + iVar2) = *(short *)(0x19a + -0x3c + iVar4) + *(short *)(0x19a + iVar4) +
                                           *(short *)((int)0x1a0 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
    *(u32 *)(&stack0x00000048 + iVar2) = (u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50);
    *(u32 *)(&stack0x00000044 + iVar2) = (u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 100);
    *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x60);
    *(u32 *)(&stack0x00000070 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x6c);
    *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54);
    iVar4 = 0;
    *(u32 *)(&stack0x00000068 + iVar2) = 0;
    do {
        *(int *)(&stack0x0000003c + iVar2) = iVar4;
        if ((u32) * (u16 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50) <= *(u32 *)(&stack0x0000003c + iVar2)) {
            *(u32 *)(&stack0x00000040 + iVar2) = *(u32 *)(&stack0x00000044 + iVar2);
            *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68);
            *(u32 *)(&stack0x00000068 + iVar2) = 0;
            *(u32 *)(&stack0x0000003c + iVar2) = 0;
            while (*(u32 *)(&stack0x0000003c + iVar2) < *(u32 *)(&stack0x00000040 + iVar2)) {
                *(int *)(&stack0x00000008 + iVar2) = (int)*(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2);
                *(u16 *)(&stack0x0000002c + iVar2) =
                    *(u16 *)(*(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) + 2);
                *(u16 *)(&stack0x0000002e + iVar2) =
                    *(u16 *)(*(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) + 4);
                if ((int)*(short *)(&stack0x00000034 + iVar2) < *(int *)(&stack0x00000008 + iVar2)) {
                    *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
                             (*(int *)(&stack0x0000002c + iVar2) * 2 + 1) * 4) = 0;
                    if (*(int *)((int)&iStack_8 + 0x80 + iVar2) == *(int *)(&stack0x00000070 + iVar2)) {
                        *(u32 *)(&stack0x00000070 + iVar2) = *(u32 *)(&stack0x00000068 + iVar2);
                        if (*(int *)((int)&iStack_8 + 0x80 + iVar2) ==
                            *(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68)) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) = 0;
                        }
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x80 + iVar2);
                    } else {
                        *(u32 *)(&stack0x00000004 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x80 + iVar2);
                        if (*(int *)(&stack0x00000068 + iVar2) == 0) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) =
                                *(u32 *)(&stack0x00000004 + iVar2);
                        } else {
                            *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) = *(u32 *)(&stack0x00000004 + iVar2);
                        }
                        *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(&stack0x00000004 + iVar2);
                    }
                    *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + -1;
                } else {
                    (&stack0x00000007)[iVar2] = 0;
                    *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
                    *(u32 *)(&stack0x00000020 + iVar2) =
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0x98) +
                                 *(int *)(&stack0x0000002c + iVar2) * 4);
                    *(u32 *)(&stack0x0000001c + iVar2) =
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0x98) +
                                 (*(int *)(&stack0x0000002c + iVar2) + 1) * 4);
                    while (*(u32 *)(&stack0x00000020 + iVar2) < *(u32 *)(&stack0x0000001c + iVar2)) {
                        iVar4 = **(int **)(&stack0x00000020 + iVar2);
                        *(int *)(&stack0x00000028 + iVar2) = iVar4;
                        *(short *)(&stack0x00000032 + iVar2) =
                            (short)*(u32 *)(&stack0x00000008 + iVar2) +
                            *(short *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0x1c0) + iVar4 * 2);
                        *(u32 *)(&stack0x00000018 + iVar2) =
                            *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x44) +
                                     *(int *)(&stack0x00000028 + iVar2) * 4);
                        *(u32 *)(&stack0x00000014 + iVar2) =
                            *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x44) +
                                     (*(int *)(&stack0x00000028 + iVar2) + 1) * 4);
                        while (*(u32 *)(&stack0x00000018 + iVar2) < *(u32 *)(&stack0x00000014 + iVar2)) {
                            iVar4 = **(int **)(&stack0x00000018 + iVar2);
                            *(int *)(&stack0x00000010 + iVar2) = iVar4;
                            puVar8 = (u16 *)(iVar4 * 2 + *(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x48));
                            *(u16 **)(&stack0x0000004c + iVar2) = puVar8;
                            *(short *)(&stack0x00000030 + iVar2) =
                                *(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + (u32)(*puVar8 >> 2) * 2) +
                                *(short *)(&stack0x00000032 + iVar2);
                            if (*(short *)(&stack0x00000030 + iVar2) <= *(short *)(&stack0x00000034 + iVar2)) {
                                iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x4c) +
                                                 *(int *)(&stack0x00000010 + iVar2) * 4);
                                *(int *)(&stack0x00000064 + iVar2) = iVar4;
                                if (iVar4 == 0) {
                                    if ((&stack0x00000007)[iVar2] == '\0') {
                                        iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                                        *(int *)(&stack0x00000050 + iVar2) = iVar4;
                                        if (*(int *)(iVar4 + 4) == 0) {
                                            iVar7 = (int)0x114;
                                            iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                                            uVar3 = (*(code *)(&asr_sub_112fd8))(
                                                iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                                            *(u32 *)(iVar7 + iVar4) = uVar3;
                                        } else {
                                            *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                                *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                                        }
                                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                                            *(u32 *)(&stack0x00000058 + iVar2);
                                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                                            *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                                        **(u32 **)(&stack0x00000050 + iVar2) = 0;
                                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                                            *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                                        *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                                            *(int *)(&stack0x00000008 + iVar2) +
                                            *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                                        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                                        (&stack0x00000007)[iVar2] = 1;
                                    }
                                    if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                                        uVar3 =
                                            (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                                         *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                                        *(u32 *)(&stack0x00000074 + iVar2) = uVar3;
                                    } else {
                                        *(u32 *)(&stack0x00000074 + iVar2) =
                                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                                    }
                                    *(u16 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                                        *(u16 *)(&stack0x00000030 + iVar2);
                                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                                        *(u32 *)(&stack0x0000004c + iVar2);
                                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                                        *(u32 *)(&stack0x00000058 + iVar2);
                                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                                    *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                                    *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x4c) +
                                             *(int *)(&stack0x00000010 + iVar2) * 4) =
                                        *(u32 *)(&stack0x00000074 + iVar2);
                                } else if (*(short *)(&stack0x00000030 + iVar2) < *(short *)(iVar4 + 2)) {
                                    *(u16 *)(*(int *)(&stack0x00000064 + iVar2) + 2) =
                                        *(u16 *)(&stack0x00000030 + iVar2);
                                    if ((&stack0x00000007)[iVar2] == '\0') {
                                        iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                                        *(int *)(&stack0x00000050 + iVar2) = iVar4;
                                        if (*(int *)(iVar4 + 4) == 0) {
                                            iVar7 = (int)0x114;
                                            iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                                            uVar3 = (*(code *)(&asr_sub_112fd8))(
                                                iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                                            *(u32 *)(iVar7 + iVar4) = uVar3;
                                        } else {
                                            *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                                *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                                        }
                                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                                            *(u32 *)(&stack0x00000058 + iVar2);
                                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                                            *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                                        **(u32 **)(&stack0x00000050 + iVar2) = 0;
                                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                                            *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                                        *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                                            *(int *)(&stack0x00000008 + iVar2) +
                                            *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                                        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                                        (&stack0x00000007)[iVar2] = 1;
                                    }
                                    iVar4 = *(int *)(*(int *)(&stack0x00000064 + iVar2) + 8);
                                    *(int *)(&stack0x00000054 + iVar2) = iVar4;
                                    if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
                                        *(u32 *)(*(int *)(&stack0x00000064 + iVar2) + 8) =
                                            *(u32 *)(&stack0x00000058 + iVar2);
                                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                                        iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1;
                                        **(int **)(&stack0x00000054 + iVar2) = iVar4;
                                        if (iVar4 < 1) {
                                            (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                                         *(u32 *)(&stack0x00000054 + iVar2), a2, a3);
                                        }
                                    }
                                }
                            }
                            *(int *)(&stack0x00000018 + iVar2) = *(int *)(&stack0x00000018 + iVar2) + 4;
                        }
                        *(int *)(&stack0x00000020 + iVar2) = *(int *)(&stack0x00000020 + iVar2) + 4;
                    }
                    piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
                    iVar4 = *piVar5 + -1;
                    *piVar5 = iVar4;
                    if (iVar4 < 1) {
                        (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                     *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8), a2, a3);
                    }
                    *(u16 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2) = 0x77ff;
                    iVar4 = (int)0x80;
                    *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8) = 0;
                    *(u32 *)(&stack0x00000068 + iVar2) = *(u32 *)((int)&iStack_8 + iVar4 + iVar2);
                    *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
                }
                *(int *)(&stack0x0000003c + iVar2) = *(int *)(&stack0x0000003c + iVar2) + 1;
            }
            *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x60) = *(u32 *)(&stack0x00000074 + iVar2);
            *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x6c) = *(u32 *)(&stack0x00000070 + iVar2);
            *(u16 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50) = *(u16 *)(&stack0x00000048 + iVar2);
            *(u16 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 100) = *(u16 *)(&stack0x00000044 + iVar2);
            return 0;
        }
        *(int *)(&stack0x00000000 + iVar2) = (int)**(short **)((int)&iStack_8 + 0x80 + iVar2);
        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4);
        puVar8 = *(u16 **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
        *(u16 **)(&stack0x0000004c + iVar2) = puVar8;
        uVar1 = *puVar8;
        *(u32 *)(&stack0x00000008 + iVar2) = (u32)uVar1;
        if ((uVar1 & 2) == 0) {
            *(u32 *)(&stack0x00000004 + iVar2) = 1;
        } else {
            *(u32 *)(&stack0x00000004 + iVar2) = 0;
        }
        if ((*(u32 *)(&stack0x00000008 + iVar2) & 1) == 0) {
            iVar4 = *(int *)(&stack0x0000004c + iVar2);
            *(u16 **)(&stack0x0000004c + iVar2) = (u16 *)(iVar4 + 2);
            uVar1 = *(u16 *)(iVar4 + 2);
            *(u32 *)(&stack0x00000008 + iVar2) = (u32)uVar1;
            if (((uVar1 & 1) == 0) || ((&stack0x0000000f)[iVar2] != '\0')) {
                iVar4 = *(int *)(&stack0x0000004c + iVar2) - *(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x48);
                *(int *)(&stack0x00000010 + iVar2) = (int)(iVar4 + (u32)(iVar4 < 0)) >> 1;
                sVar6 = *(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) +
                                   (*(u32 *)(&stack0x00000008 + iVar2) >> 2) * 2) +
                        (short)*(u32 *)(&stack0x00000000 + iVar2);
                *(short *)(&stack0x00000030 + iVar2) = sVar6;
                if (sVar6 <= *(short *)(&stack0x00000034 + iVar2)) {
                    iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x4c) +
                                     *(int *)(&stack0x00000010 + iVar2) * 4);
                    *(int *)(&stack0x00000064 + iVar2) = iVar4;
                    if (iVar4 == 0) {
                        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                            iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(&stack0x00000050 + iVar2) = iVar4;
                            if (*(int *)(iVar4 + 4) == 0) {
                                iVar7 = (int)0x114;
                                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                                uVar3 = (*(code *)(&asr_sub_112fd8))(iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                                *(u32 *)(iVar7 + iVar4) = uVar3;
                            } else {
                                *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                            }
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                                *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                            **(u32 **)(&stack0x00000050 + iVar2) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                                *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                                *(int *)(&stack0x00000000 + iVar2) +
                                *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                        }
                        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                            uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                                 *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                            *(u32 *)(&stack0x00000074 + iVar2) = uVar3;
                        } else {
                            *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        }
                        *(u16 *)(*(int *)(&stack0x00000074 + iVar2) + 2) = *(u16 *)(&stack0x00000030 + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x4c) +
                                 *(int *)(&stack0x00000010 + iVar2) * 4) = *(u32 *)(&stack0x00000074 + iVar2);
                    } else if (*(short *)(&stack0x00000030 + iVar2) < *(short *)(iVar4 + 2)) {
                        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                            iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(&stack0x00000050 + iVar2) = iVar4;
                            if (*(int *)(iVar4 + 4) == 0) {
                                iVar7 = (int)0x114;
                                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                                uVar3 = (*(code *)(&asr_sub_112fd8))(iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                                *(u32 *)(iVar7 + iVar4) = uVar3;
                            } else {
                                *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                            }
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                                *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                            **(u32 **)(&stack0x00000050 + iVar2) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                                *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                                *(int *)(&stack0x00000000 + iVar2) +
                                *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                        }
                        *(u16 *)(*(int *)(&stack0x00000064 + iVar2) + 2) = *(u16 *)(&stack0x00000030 + iVar2);
                        iVar4 = *(int *)(*(int *)(&stack0x00000064 + iVar2) + 8);
                        *(int *)(&stack0x00000054 + iVar2) = iVar4;
                        if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
                            *(u32 *)(*(int *)(&stack0x00000064 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1;
                            **(int **)(&stack0x00000054 + iVar2) = iVar4;
                            if (iVar4 < 1) {
                                (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                             *(u32 *)(&stack0x00000054 + iVar2), a2, a3);
                            }
                        }
                    }
                }
                piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4);
                iVar4 = *piVar5 + -1;
                *piVar5 = iVar4;
                if (iVar4 < 1) {
                    (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                 *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4), a2, a3);
                }
                if (*(short *)(&stack0x00000034 + iVar2) < *(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2)) {
                    piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
                    iVar4 = *piVar5 + -1;
                    *piVar5 = iVar4;
                    if (iVar4 < 1) {
                        (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                     *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8), a2, a3);
                    }
                    iVar7 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                    iVar4 = *(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) - *(int *)(iVar7 + 0x48);
                    *(u32 *)(*(int *)(iVar7 + 0x4c) + ((int)(iVar4 + (u32)(iVar4 < 0)) >> 1) * 4) = 0;
                    if (*(int *)((int)&iStack_8 + 0x80 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
                        *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(&stack0x00000068 + iVar2);
                    } else {
                        *(u32 *)(&stack0xfffffffc + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x80 + iVar2);
                        if (*(int *)(&stack0x00000068 + iVar2) == 0) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54) =
                                *(u32 *)(&stack0xfffffffc + iVar2);
                        } else {
                            *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) = *(u32 *)(&stack0xfffffffc + iVar2);
                        }
                        *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(&stack0xfffffffc + iVar2);
                    }
                    goto LAB_8c118c66;
                }
                iVar4 = *(int *)((int)&iStack_8 + 0x80 + iVar2);
                *(int *)(&stack0x00000068 + iVar2) = iVar4;
                *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(iVar4 + 0x18);
            } else {
                *(u16 *)(&stack0xfffffffc + iVar2) = *(u16 *)(*(int *)(&stack0x0000004c + iVar2) + 2);
                *(u16 *)(&stack0xfffffffe + iVar2) = *(u16 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
                *(short *)(&stack0x00000030 + iVar2) = *(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) +
                                                                  (*(u32 *)(&stack0x00000008 + iVar2) >> 2) * 2) +
                                                       (short)*(u32 *)(&stack0x00000000 + iVar2);
                *(int *)(&stack0x00000024 + iVar2) = *(int *)(&stack0xfffffffc + iVar2) * 2;
                iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
                                 *(int *)(&stack0xfffffffc + iVar2) * 8);
                *(int *)(&stack0x00000060 + iVar2) = iVar4;
                if (*(short *)(&stack0x00000030 + iVar2) <= *(short *)(&stack0x00000034 + iVar2)) {
                    if (iVar4 == 0) {
                        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                            iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(&stack0x00000050 + iVar2) = iVar4;
                            if (*(int *)(iVar4 + 4) == 0) {
                                iVar7 = (int)0x114;
                                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                                uVar3 = (*(code *)(&asr_sub_112fd8))(iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                                *(u32 *)(iVar7 + iVar4) = uVar3;
                            } else {
                                *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                            }
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                                *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                            **(u32 **)(&stack0x00000050 + iVar2) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                                *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                                *(int *)(&stack0x00000000 + iVar2) +
                                *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                            *(u32 *)(&stack0x00000004 + iVar2) = 1;
                        }
                        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                            uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                                 *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                            *(u32 *)(&stack0x00000074 + iVar2) = uVar3;
                        } else {
                            *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        }
                        *(u16 *)(*(int *)(&stack0x00000074 + iVar2) + 2) = *(u16 *)(&stack0x00000030 + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
                                 *(int *)(&stack0x00000024 + iVar2) * 4) = *(u32 *)(&stack0x00000074 + iVar2);
                    } else if (*(short *)(&stack0x00000030 + iVar2) < *(short *)(iVar4 + 2)) {
                        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                            iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(&stack0x00000050 + iVar2) = iVar4;
                            if (*(int *)(iVar4 + 4) == 0) {
                                iVar7 = (int)0x114;
                                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                                uVar3 = (*(code *)(&asr_sub_112fd8))(iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                                *(u32 *)(iVar7 + iVar4) = uVar3;
                            } else {
                                *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                            }
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                                *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                            **(u32 **)(&stack0x00000050 + iVar2) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                                *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                                *(int *)(&stack0x00000000 + iVar2) +
                                *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                            *(u32 *)(&stack0x00000004 + iVar2) = 1;
                        }
                        *(u16 *)(*(int *)(&stack0x00000060 + iVar2) + 2) = *(u16 *)(&stack0x00000030 + iVar2);
                        iVar4 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
                        *(int *)(&stack0x00000054 + iVar2) = iVar4;
                        if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
                            *(u32 *)(*(int *)(&stack0x00000060 + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1;
                            **(int **)(&stack0x00000054 + iVar2) = iVar4;
                            if (iVar4 < 1) {
                                (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                             *(u32 *)(&stack0x00000054 + iVar2), a2, a3);
                            }
                        }
                    }
                }
                if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x00000034 + iVar2)) {
                    iVar7 = *(int *)(&stack0x00000024 + iVar2);
                    iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                    *(int *)(&stack0x00000024 + iVar2) = iVar7 + 1;
                    iVar4 = *(int *)(*(int *)(iVar4 + 0xb0) + (iVar7 + 1) * 4);
                    *(int *)(&stack0x0000005c + iVar2) = iVar4;
                    if (iVar4 == 0) {
                        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                            iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(&stack0x00000050 + iVar2) = iVar4;
                            if (*(int *)(iVar4 + 4) == 0) {
                                iVar7 = (int)0x114;
                                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                                uVar3 = (*(code *)(&asr_sub_112fd8))(iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                                *(u32 *)(iVar7 + iVar4) = uVar3;
                            } else {
                                *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                            }
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                                *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                            **(u32 **)(&stack0x00000050 + iVar2) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                                *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                                *(int *)(&stack0x00000000 + iVar2) +
                                *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                        }
                        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                            uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                                 *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                            *(u32 *)(&stack0x0000006c + iVar2) = uVar3;
                        } else {
                            *(u32 *)(&stack0x0000006c + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        }
                        *(u16 *)(*(int *)(&stack0x0000006c + iVar2) + 2) = *(u16 *)(&stack0x00000000 + iVar2);
                        *(u32 *)(*(int *)(&stack0x0000006c + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                        *(u32 *)(*(int *)(&stack0x0000006c + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18);
                        if (*(int *)(&stack0x00000070 + iVar2) != 0) {
                            *(u32 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) = *(u32 *)(&stack0x0000006c + iVar2);
                        }
                        *(u32 *)(&stack0x00000070 + iVar2) = *(u32 *)(&stack0x0000006c + iVar2);
                        if (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) == 0) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) =
                                *(u32 *)(&stack0x00000070 + iVar2);
                        }
                        *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
                                 *(int *)(&stack0x00000024 + iVar2) * 4) = *(u32 *)(&stack0x00000070 + iVar2);
                    } else if (*(int *)(&stack0x00000000 + iVar2) < (int)*(short *)(iVar4 + 2)) {
                        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                            iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(&stack0x00000050 + iVar2) = iVar4;
                            if (*(int *)(iVar4 + 4) == 0) {
                                iVar7 = (int)0x114;
                                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                                uVar3 = (*(code *)(&asr_sub_112fd8))(iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                                *(u32 *)(iVar7 + iVar4) = uVar3;
                            } else {
                                *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                    *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                            }
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                                *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                            **(u32 **)(&stack0x00000050 + iVar2) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                            *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                                *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                                *(int *)(&stack0x00000000 + iVar2) +
                                *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                            *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                        }
                        *(u16 *)(*(int *)(&stack0x0000005c + iVar2) + 2) = *(u16 *)(&stack0x00000000 + iVar2);
                        iVar4 = *(int *)(*(int *)(&stack0x0000005c + iVar2) + 8);
                        *(int *)(&stack0x00000054 + iVar2) = iVar4;
                        if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
                            *(u32 *)(*(int *)(&stack0x0000005c + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                            if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
                                (iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1,
                                 **(int **)(&stack0x00000054 + iVar2) = iVar4, iVar4 < 1)) {
                                (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                             *(u32 *)(&stack0x00000054 + iVar2), a2, a3);
                            }
                        }
                    }
                }
                piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4);
                iVar4 = *piVar5 + -1;
                *piVar5 = iVar4;
                if (iVar4 < 1) {
                    (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                 *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4), a2, a3);
                }
                if (*(short *)(&stack0x00000034 + iVar2) < *(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2)) {
                    piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
                    iVar4 = *piVar5 + -1;
                    *piVar5 = iVar4;
                    if (iVar4 < 1) {
                        (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                     *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8), a2, a3);
                    }
                    iVar7 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                    iVar4 = *(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) - *(int *)(iVar7 + 0x48);
                    *(u32 *)(*(int *)(iVar7 + 0x4c) + ((int)(iVar4 + (u32)(iVar4 < 0)) >> 1) * 4) = 0;
                    if (*(int *)((int)&iStack_8 + 0x80 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
                        *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(&stack0x00000068 + iVar2);
                    } else {
                        *(u32 *)((int)&iStack_8 + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
                            *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x80 + iVar2);
                        if (*(int *)(&stack0x00000068 + iVar2) == 0) {
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54) = *(u32 *)((int)&iStack_8 + iVar2);
                        } else {
                            *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + iVar2);
                        }
                        *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)((int)&iStack_8 + iVar2);
                    }
                LAB_8c118c66:
                    *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + -1;
                } else {
                    iVar4 = *(int *)((int)&iStack_8 + 0x80 + iVar2);
                    *(int *)(&stack0x00000068 + iVar2) = iVar4;
                    *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(iVar4 + 0x18);
                }
            }
        } else {
            if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x00000034 + iVar2)) {
                *(u16 *)(&stack0xfffffffc + iVar2) = *(u16 *)(*(int *)(&stack0x0000004c + iVar2) + 2);
                *(u16 *)(&stack0xfffffffe + iVar2) = *(u16 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
                iVar4 = *(int *)(&stack0xfffffffc + iVar2) * 2 + 1;
                *(int *)(&stack0x00000024 + iVar2) = iVar4;
                iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) + iVar4 * 4);
                *(int *)(&stack0x0000005c + iVar2) = iVar4;
                if (iVar4 == 0) {
                    if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                        iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                        *(int *)(&stack0x00000050 + iVar2) = iVar4;
                        if (*(int *)(iVar4 + 4) == 0) {
                            iVar7 = (int)0x114;
                            iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                            uVar3 = (*(code *)(&asr_sub_112fd8))(iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                            *(u32 *)(iVar7 + iVar4) = uVar3;
                        } else {
                            *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                        }
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                        **(u32 **)(&stack0x00000050 + iVar2) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                            *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                        *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                            *(int *)(&stack0x00000000 + iVar2) +
                            *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                    }
                    if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                        uVar3 = (*(code *)(&asr_sub_112b6e))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                             *(u32 *)(&stack0x00000074 + iVar2), a2, a3);
                        *(u32 *)(&stack0x0000006c + iVar2) = uVar3;
                    } else {
                        *(u32 *)(&stack0x0000006c + iVar2) = *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                    }
                    *(u16 *)(*(int *)(&stack0x0000006c + iVar2) + 2) = *(u16 *)(&stack0x00000000 + iVar2);
                    *(u32 *)(*(int *)(&stack0x0000006c + iVar2) + 0xc) = *(u32 *)(&stack0x0000004c + iVar2);
                    *(u32 *)(*(int *)(&stack0x0000006c + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                        *(u32 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18);
                    if (*(int *)(&stack0x00000070 + iVar2) != 0) {
                        *(u32 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) = *(u32 *)(&stack0x0000006c + iVar2);
                    }
                    *(u32 *)(&stack0x00000070 + iVar2) = *(u32 *)(&stack0x0000006c + iVar2);
                    if (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) == 0) {
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) = *(u32 *)(&stack0x00000070 + iVar2);
                    }
                    *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
                             *(int *)(&stack0x00000024 + iVar2) * 4) = *(u32 *)(&stack0x00000070 + iVar2);
                } else if (*(int *)(&stack0x00000000 + iVar2) < (int)*(short *)(iVar4 + 2)) {
                    if (*(int *)(&stack0x00000004 + iVar2) == 0) {
                        iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                        *(int *)(&stack0x00000050 + iVar2) = iVar4;
                        if (*(int *)(iVar4 + 4) == 0) {
                            iVar7 = (int)0x114;
                            iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                            uVar3 = (*(code *)(&asr_sub_112fd8))(iVar4, *(u32 *)(&stack0x00000050 + iVar2), a2, a3);
                            *(u32 *)(iVar7 + iVar4) = uVar3;
                        } else {
                            *(u32 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                                *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                        }
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 4) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                            *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                        **(u32 **)(&stack0x00000050 + iVar2) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                        *(u32 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                            *(u32 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                        *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                            *(int *)(&stack0x00000000 + iVar2) +
                            *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                        *(u32 *)(&stack0x00000058 + iVar2) = *(u32 *)(&stack0x00000050 + iVar2);
                    }
                    *(u16 *)(*(int *)(&stack0x0000005c + iVar2) + 2) = *(u16 *)(&stack0x00000000 + iVar2);
                    iVar4 = *(int *)(*(int *)(&stack0x0000005c + iVar2) + 8);
                    *(int *)(&stack0x00000054 + iVar2) = iVar4;
                    if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
                        *(u32 *)(*(int *)(&stack0x0000005c + iVar2) + 8) = *(u32 *)(&stack0x00000058 + iVar2);
                        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                        if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
                            (iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1,
                             **(int **)(&stack0x00000054 + iVar2) = iVar4, iVar4 < 1)) {
                            (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                         *(u32 *)(&stack0x00000054 + iVar2), a2, a3);
                        }
                    }
                }
            }
            piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4);
            iVar4 = *piVar5 + -1;
            *piVar5 = iVar4;
            if (iVar4 < 1) {
                (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                             *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4), a2, a3);
            }
            if (*(short *)(&stack0x00000034 + iVar2) < *(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2)) {
                piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
                iVar4 = *piVar5 + -1;
                *piVar5 = iVar4;
                if (iVar4 < 1) {
                    (*(code *)(&asr_sub_115ed8))(*(u32 *)((int)&iStack_8 + 0x88 + iVar2),
                                                 *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8), a2, a3);
                }
                if ((&stack0x0000000f)[iVar2] == '\0') {
                    *(u16 *)(&stack0xfffffffc + iVar2) = *(u16 *)(*(int *)(&stack0x0000004c + iVar2) + 2);
                    *(u16 *)(&stack0xfffffffe + iVar2) = *(u16 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
                    *(u32 *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
                             *(int *)(&stack0xfffffffc + iVar2) * 8) = 0;
                } else {
                    iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                    iVar7 = *(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) - *(int *)(iVar4 + 0x48);
                    *(u32 *)(*(int *)(iVar4 + 0x4c) + ((int)(iVar7 + (u32)(iVar7 < 0)) >> 1) * 4) = 0;
                }
                if (*(int *)((int)&iStack_8 + 0x80 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
                    *(u32 *)(&stack0x00000074 + iVar2) = *(u32 *)(&stack0x00000068 + iVar2);
                } else {
                    *(u32 *)(&stack0xfffffffc + iVar2) = *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
                    *(u32 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
                        *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                    *(u32 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) = *(u32 *)((int)&iStack_8 + 0x80 + iVar2);
                    if (*(int *)(&stack0x00000068 + iVar2) == 0) {
                        *(u32 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54) = *(u32 *)(&stack0xfffffffc + iVar2);
                    } else {
                        *(u32 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) = *(u32 *)(&stack0xfffffffc + iVar2);
                    }
                    *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(&stack0xfffffffc + iVar2);
                }
                goto LAB_8c118c66;
            }
            iVar4 = *(int *)((int)&iStack_8 + 0x80 + iVar2);
            *(int *)(&stack0x00000068 + iVar2) = iVar4;
            *(u32 *)((int)&iStack_8 + 0x80 + iVar2) = *(u32 *)(iVar4 + 0x18);
        }
        iVar4 = *(int *)(&stack0x0000003c + iVar2) + 1;
    } while (true);
}

/*
 * asr_sub_11919e  0x8c11919e
 * area name: in the asr library code range
 */
u32 asr_sub_11919e(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    int iStack_c;

    uStack_14 = asr_sub_11a634(a0, &uStack_1c, a2, a3);
    uStack_18 = uStack_1c;
    uStack_10 = *(u32 *)(0x1ac + a0);
    iStack_c = *(int *)(0x12c + a0) + 1;
    uVar1 = asr_sub_120348(a0, 0xc, &uStack_18, 3);
    if ((uVar1 & 0xff) != 0) {
        return 1;
    }
    return 0;
}

/*
 * asr_sub_119218  0x8c119218
 * area name: in the asr library code range
 */
u32 asr_sub_119218(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 *ar6_00;
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 *a6;
    u32 a7;
    int a4;
    int iVar4;
    int *unaff_r14;
    bool bVar5;

    iVar4 = *(int *)(in_r0 + (int)unaff_r14);
    a4 = *unaff_r14;
    uVar2 = a1;
    if (a1 < (unaff_r14[0x10] - *(int *)((int)0x1b4 + (int)unaff_r14)) - 1U) {
        do {
            uVar2 = uVar2 + 1;
            iVar4 = *(int *)(iVar4 + 0x18);
        } while (uVar2 < (unaff_r14[0x10] - *(int *)((int)0x1b4 + (int)unaff_r14)) - 1U);
    }
    uVar2 = unaff_r14[0x10] + *(int *)((int)0x1b4 + (int)unaff_r14) * -2;
    for (iVar3 = *(int *)(iVar4 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        if ((*(int *)(iVar3 + 0x10) != 0) &&
            (iVar1 = *(int *)(iVar3 + 0x10) - unaff_r14[0x12], (u32)((int)(iVar1 + (u32)(iVar1 < 0)) >> 1) < uVar2)) {
            a1 = a1 + 1;
        }
    }
    ar6_00 = (u32 *)(**(code **)(a4 + 0x10))(a4, (a1 - 1) * 2 + 8, a2, a3);
    *ar6_00 = a1;
    iVar3 = a1 - 1;
    for (iVar4 = *(int *)(iVar4 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
        if ((*(int *)(iVar4 + 0x10) != 0) &&
            (iVar1 = *(int *)(iVar4 + 0x10) - unaff_r14[0x12], (u32)((int)(iVar1 + (u32)(iVar1 < 0)) >> 1) < uVar2)) {
            iVar1 = iVar3 * 2;
            iVar3 = iVar3 + -1;
            *(u16 *)((int)ar6_00 + iVar1 + 4) = **(u16 **)(iVar4 + 0x10);
        }
    }
    a7 = 1;
    a6 = ar6_00;
    uVar2 = asr_sub_120348(unaff_r14, 0xc, ar6_00, 1);
    bVar5 = (uVar2 & 0xff) == 0;
    if (bVar5) {
        (**(code **)(a4 + 0x18))(a4, ar6_00, a6, a7);
    }
    return (u32)!bVar5;
}

/*
 * asr_sub_119320  0x8c119320
 * area name: in the asr library code range
 */
u32 asr_sub_119320(int a0, int a1) {
    int iVar1;
    u32 uVar2;
    int *piVar3;
    short *ar7_00;
    short *psVar4;
    int iVar5;
    short sVar6;
    u32 uVar7;
    u32 uVar8;
    int iVar9;
    int *piVar10;
    u16 *puVar11;
    short *psVar12;
    short *psVar13;
    u32 uStack_30;
    short sStack_2c;
    short *psStack_24;

    iVar5 = (int)0x77ff;
    uVar7 = 0;
    iVar9 = (int)0x7fff;
    sVar6 = *(short *)(0x19a + a0);
    iVar1 = 0x19a + 0x12;
    *(int *)(iVar1 + a0) = *(int *)(iVar1 + a0) + (int)sVar6;
    puVar11 = *(u16 **)(a0 + 0x54);
    uVar8 = (u32) * (u16 *)(a0 + 0x50);
    if (uVar8 != 0) {
        do {
            iVar1 = (int)(short)puVar11[1];
            if (iVar1 < iVar5) {
                iVar1 = iVar1 + (short)(*(short *)(a1 + (u32) * *(u16 **)(puVar11 + 6) * 2) - sVar6);
            }
            *puVar11 = (short)iVar1;
            puVar11[1] = (short)iVar1;
            if (iVar1 <= iVar9) {
                *(u16 **)(0x19c + a0) = puVar11;
                iVar9 = iVar1;
            }
            iVar1 = **(int **)(puVar11 + 2) + -1;
            **(int **)(puVar11 + 2) = iVar1;
            if (iVar1 < 1) {
                asr_sub_115ed8(a0, *(u32 *)(puVar11 + 2));
            }
            uVar7 = uVar7 + 1;
            **(int **)(puVar11 + 4) = **(int **)(puVar11 + 4) + 1;
            *(u32 *)(puVar11 + 2) = *(u32 *)(puVar11 + 4);
            puVar11 = *(u16 **)(puVar11 + 0xc);
        } while (uVar7 < uVar8);
    }
    uVar7 = 1;
    *(short *)(0x19a + a0) = (short)iVar9;
    ar7_00 = *(short **)(a0 + 0x54);
    iVar9 = (int)ar7_00[1];
    psVar4 = *(short **)(ar7_00 + 0xc);
    if (1 < uVar8 + *(int *)(0x1b4 + a0) * -2) {
        do {
            if ((int)*psVar4 < (int)(short)iVar9) {
                iVar9 = (int)*psVar4;
                ar7_00 = psVar4;
            }
            uVar7 = uVar7 + 1;
            psVar4 = *(short **)(psVar4 + 0xc);
        } while (uVar7 < uVar8 + *(int *)(0x1b4 + a0) * -2);
    }
    sStack_2c = *(short *)(0x1e8 + a0) + (short)iVar9;
    if (uVar7 < (uVar8 - *(int *)(0x1b4 + a0)) - 1) {
        do {
            uVar7 = uVar7 + 1;
            psVar4 = *(short **)(psVar4 + 0xc);
        } while (uVar7 < (uVar8 - *(int *)(0x1b4 + a0)) - 1);
    }
    psVar12 = ar7_00;
    if (*psVar4 < sStack_2c) {
        sStack_2c = *psVar4;
        psVar12 = psVar4;
    }
    for (; uVar7 < uVar8 - 1; uVar7 = uVar7 + 1) {
        psVar4 = *(short **)(psVar4 + 0xc);
    }
    iVar1 = iVar9;
    psStack_24 = ar7_00;
    if ((int)*psVar4 < (int)(short)iVar9) {
        iVar1 = (int)*psVar4;
        psStack_24 = psVar4;
    }
    psVar4 = *(short **)(a0 + 0x54);
    uStack_30 = 0;
    sVar6 = (short)iVar1 + *(short *)(0x1e8 + a0);
    piVar3 = *(int **)(psStack_24 + 2);
    piVar10 = *(int **)(0x114 + a0);
    if (piVar10[1] == 0) {
        uVar2 = asr_sub_112fd8(a0, piVar10, iVar9, ar7_00);
        *(u32 *)(0x114 + a0) = uVar2;
    } else {
        *(int *)(0x114 + a0) = piVar10[1];
    }
    iVar1 = (int)0x12c;
    piVar10[1] = (int)piVar3;
    *piVar3 = *piVar3 + 1;
    piVar10[4] = *(int *)(psStack_24 + 6);
    iVar5 = (int)0x1ac;
    *piVar10 = 0;
    piVar10[5] = *(int *)(iVar1 + a0) + 1;
    piVar10[3] = (int)psVar4[1] + *(int *)(iVar5 + a0);
    iVar1 = (int)0x1b4;
    *piVar10 = *piVar10 + 1;
    if (uVar8 + *(int *)(iVar1 + a0) * -2 != 0) {
        do {
            if (sVar6 < psVar4[1]) {
                psVar4[1] = sVar6;
                piVar3 = *(int **)(psVar4 + 4);
                *(int **)(psVar4 + 4) = piVar10;
                *piVar10 = *piVar10 + 1;
                iVar1 = *piVar3;
                *piVar3 = iVar1 + -1;
                if (iVar1 + -1 < 1) {
                    asr_sub_115ed8(a0, piVar3);
                }
            }
            psVar4 = *(short **)(psVar4 + 0xc);
            uStack_30 = uStack_30 + 1;
        } while (uStack_30 < uVar8 + *(int *)(0x1b4 + a0) * -2);
    }
    iVar1 = *piVar10;
    *piVar10 = iVar1 + -1;
    if (iVar1 + -1 < 1) {
        asr_sub_115ed8(a0, piVar10);
    }
    if (sStack_2c < psVar4[1]) {
        psVar4[1] = sStack_2c;
        piVar10 = *(int **)(0x114 + a0);
        piVar3 = *(int **)(psVar12 + 2);
        if (piVar10[1] == 0) {
            uVar2 = asr_sub_112fd8(a0, piVar10, iVar9, ar7_00);
            *(u32 *)(0x114 + a0) = uVar2;
        } else {
            *(int *)(0x114 + a0) = piVar10[1];
        }
        iVar1 = (int)0x12c;
        piVar10[1] = (int)piVar3;
        *piVar3 = *piVar3 + 1;
        piVar10[4] = *(int *)(psVar12 + 6);
        *piVar10 = 0;
        piVar10[5] = *(int *)(iVar1 + a0) + 1;
        piVar10[3] = (int)psVar4[1] + *(int *)(0x1ac + a0);
        piVar3 = *(int **)(psVar4 + 4);
        *(int **)(psVar4 + 4) = piVar10;
        *piVar10 = *piVar10 + 1;
        iVar1 = *piVar3;
        *piVar3 = iVar1 + -1;
        if (iVar1 + -1 < 1) {
            asr_sub_115ed8(a0, piVar3);
        }
    }
    psVar12 = *(short **)(psVar4 + 0xc);
    uVar7 = 0;
    psVar13 = psVar12;
    if (*(int *)(0x1b4 + a0) != 1) {
        do {
            if (*psVar4 < psVar13[1]) {
                psVar13[1] = *psVar4;
                piVar10 = *(int **)(psVar13 + 4);
                piVar3 = *(int **)(psVar4 + 2);
                if (piVar10 != piVar3) {
                    *(int **)(psVar13 + 4) = piVar3;
                    *piVar3 = *piVar3 + 1;
                    iVar1 = *piVar10;
                    *piVar10 = iVar1 + -1;
                    if (iVar1 + -1 < 1) {
                        asr_sub_115ed8(a0, piVar10);
                    }
                }
            }
            uVar7 = uVar7 + 1;
            psVar12 = *(short **)(psVar13 + 0xc);
            psVar4 = psVar13;
            psVar13 = psVar12;
        } while (uVar7 < *(int *)(0x1b4 + a0) - 1U);
    }
    uVar7 = 0;
    psVar4 = psVar12;
    if (*(int *)(0x1b4 + a0) != 1) {
        do {
            uVar7 = uVar7 + 1;
            psVar4 = *(short **)(psVar4 + 0xc);
        } while (uVar7 < *(int *)(0x1b4 + a0) - 1U);
    }
    if (*psVar4 < psVar12[1]) {
        psVar12[1] = *psVar4;
        piVar10 = *(int **)(psVar12 + 4);
        piVar3 = *(int **)(psVar4 + 2);
        if (piVar10 != piVar3) {
            *(int **)(psVar12 + 4) = piVar3;
            *piVar3 = *piVar3 + 1;
            iVar1 = *piVar10;
            *piVar10 = iVar1 + -1;
            if (iVar1 + -1 < 1) {
                asr_sub_115ed8(a0, piVar10);
            }
        }
    }
    uVar7 = 0;
    psVar4 = *(short **)(psVar12 + 0xc);
    if (*(int *)(0x1b4 + a0) != 1) {
        do {
            if (*psVar12 < psVar4[1]) {
                psVar4[1] = *psVar12;
                piVar10 = *(int **)(psVar4 + 4);
                piVar3 = *(int **)(psVar12 + 2);
                if (piVar10 != piVar3) {
                    *(int **)(psVar4 + 4) = piVar3;
                    *piVar3 = *piVar3 + 1;
                    iVar1 = *piVar10;
                    *piVar10 = iVar1 + -1;
                    if (iVar1 + -1 < 1) {
                        asr_sub_115ed8(a0, piVar10);
                    }
                }
            }
            uVar7 = uVar7 + 1;
            psVar12 = psVar4;
            psVar4 = *(short **)(psVar4 + 0xc);
        } while (uVar7 < *(int *)(0x1b4 + a0) - 1U);
    }
    return 0;
}

/*
 * asr_sub_119706  0x8c119706
 * area name: in the asr library code range
 */
u32 asr_sub_119706(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    float fVar4;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    float fStack_1c;
    int iStack_18;
    int iStack_14;
    int iStack_10;

    iStack_10 = asr_sub_11b5a0(a0, unused_a1, a2, a3);
    if (*(int *)(a0 + 0x1b4) == 0) {
        iStack_18 = 0;
        iStack_14 = *(int *)(a0 + 300) + 1;
        iStack_24 = (int)*(short *)(a0 + 0x1b0) + *(int *)(a0 + 0x1ac);
    } else {
        iStack_14 = *(int *)(iStack_10 + 0x14);
        iVar3 = iStack_10;
        for (iVar2 = iStack_10; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
            if ((*(u32 *)(a0 + 0x1b8) == (*(u32 *)(iVar2 + 0x10) & 0xffff)) && (*(int *)(iVar2 + 4) != 0)) {
                iVar3 = iVar2;
            }
        }
        iStack_18 = *(int *)(iVar3 + 0x14);
        iStack_24 = *(int *)(iStack_10 + 0xc) - *(int *)(iVar3 + 0xc);
    }
    iStack_20 = iStack_14 - iStack_18;
    fStack_1c = (float)iStack_24;
    if (iStack_24 < 0) {
        fStack_1c = fStack_1c + 4.2949673e+09;
    }
    fVar4 = (float)iStack_20;
    if (iStack_20 < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
    }
    fStack_1c = fStack_1c / fVar4;
    iStack_28 = (int)*(short *)(a0 + 0x1b0) + *(int *)(a0 + 0x1ac);
    uVar1 = asr_sub_120348(a0, 0xc, &iStack_28, 2);
    return uVar1;
}

/*
 * asr_sub_1197d8  0x8c1197d8
 * area name: in the asr library code range
 */
u32 asr_sub_1197d8(int a0, int a1) {
    short sVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    short sVar7;
    short *psVar8;
    int ar6_00;
    int ar7_00;
    int *piVar9;
    u32 uVar10;
    short *psVar11;
    int *piVar12;
    u32 uStack_30;

    sVar7 = 0x77ff;
    ar6_00 = (int)0x77ff;
    psVar11 = NULL;
    ar7_00 = (int)0x7fff;
    psVar8 = *(short **)(a0 + 0x54);
    sVar1 = *(short *)(0x19a + a0);
    iVar2 = 0x19a + 0x12;
    *(int *)(iVar2 + a0) = *(int *)(iVar2 + a0) + (int)sVar1;
    uVar6 = (u32) * (u16 *)(a0 + 0x50);
    uVar10 = 0;
    if (uVar6 != 0) {
        do {
            iVar2 = (int)psVar8[1];
            if (iVar2 < ar6_00) {
                iVar2 = iVar2 - sVar1;
                *psVar8 = (short)iVar2;
                iVar2 = iVar2 + *(short *)(a1 + *(int *)(psVar8 + 6) * 2);
                psVar8[1] = (short)iVar2;
            } else {
                *psVar8 = sVar7;
            }
            if (iVar2 < (short)ar7_00) {
                ar7_00 = iVar2;
            }
            **(int **)(psVar8 + 4) = **(int **)(psVar8 + 4) + 1;
            uVar10 = uVar10 + 1;
            *(u32 *)(psVar8 + 2) = *(u32 *)(psVar8 + 4);
            psVar8 = *(short **)(psVar8 + 0xc);
        } while (uVar10 < uVar6);
    }
    *(short *)(0x19a + a0) = (short)ar7_00;
    uVar10 = *(u32 *)(0x1b4 + a0);
    uStack_30 = 0;
    psVar8 = *(short **)(a0 + 0x54);
    if (uVar6 != 0) {
        do {
            psVar11 = psVar8;
            iVar2 = *(int *)(psVar11 + 8);
            sVar1 = *psVar11;
            sVar7 = *(short *)(a1 + *(int *)(iVar2 + 0xc) * 2) + sVar1;
            piVar12 = *(int **)(psVar11 + 2);
            piVar9 = piVar12;
            if (sVar7 < *(short *)(iVar2 + 2)) {
                *(short *)(iVar2 + 2) = sVar7;
                piVar9 = *(int **)(0x114 + a0);
                if (piVar9[1] == 0) {
                    uVar3 = asr_sub_112fd8(a0, piVar9, ar6_00, ar7_00);
                    *(u32 *)(0x114 + a0) = uVar3;
                } else {
                    *(int *)(0x114 + a0) = piVar9[1];
                }
                iVar4 = (int)0x12c;
                piVar9[1] = (int)piVar12;
                *piVar12 = *piVar12 + 1;
                piVar9[4] = *(int *)(psVar11 + 6);
                *piVar9 = 0;
                iVar5 = (int)0x1ac;
                piVar9[5] = *(int *)(iVar4 + a0);
                piVar9[3] = (int)sVar1 + *(int *)(iVar5 + a0);
                piVar12 = *(int **)(iVar2 + 8);
                if (piVar12 != piVar9) {
                    *(int **)(iVar2 + 8) = piVar9;
                    *piVar9 = *piVar9 + 1;
                    iVar2 = *piVar12;
                    *piVar12 = iVar2 + -1;
                    if (iVar2 + -1 < 1) {
                        asr_sub_115ed8(a0, piVar12);
                    }
                }
            }
            if ((1 < uVar10) && (uVar10 - 1 == uStack_30)) {
                iVar2 = *(int *)(a0 + 0x54);
                sVar7 = *(short *)(a1 + *(int *)(iVar2 + 0xc) * 2) + sVar1;
                if (sVar7 < *(short *)(iVar2 + 2)) {
                    *(short *)(iVar2 + 2) = sVar7;
                    piVar12 = piVar9;
                    if (piVar9 == *(int **)(psVar11 + 2)) {
                        piVar12 = *(int **)(0x114 + a0);
                        if (piVar12[1] == 0) {
                            uVar3 = asr_sub_112fd8(a0, piVar12, ar6_00, ar7_00);
                            *(u32 *)(0x114 + a0) = uVar3;
                        } else {
                            *(int *)(0x114 + a0) = piVar12[1];
                        }
                        iVar4 = (int)0x12c;
                        piVar12[1] = (int)piVar9;
                        *piVar9 = *piVar9 + 1;
                        piVar12[4] = *(int *)(psVar11 + 6);
                        *piVar12 = 0;
                        iVar5 = (int)0x1ac;
                        piVar12[5] = *(int *)(iVar4 + a0);
                        piVar12[3] = (int)sVar1 + *(int *)(iVar5 + a0);
                    }
                    piVar9 = *(int **)(iVar2 + 8);
                    if (piVar9 != piVar12) {
                        *(int **)(iVar2 + 8) = piVar12;
                        *piVar12 = *piVar12 + 1;
                        iVar2 = *piVar9;
                        *piVar9 = iVar2 + -1;
                        if (iVar2 + -1 < 1) {
                            asr_sub_115ed8(a0, piVar9);
                        }
                    }
                }
            }
            iVar2 = **(int **)(psVar11 + 2) + -1;
            **(int **)(psVar11 + 2) = iVar2;
            if (iVar2 < 1) {
                asr_sub_115ed8(a0, *(u32 *)(psVar11 + 2));
            }
            uStack_30 = uStack_30 + 1;
            psVar8 = *(short **)(psVar11 + 0xc);
        } while (uStack_30 < uVar6);
    }
    *(short *)(0x1b0 + a0) = psVar11[1];
    return 0;
}

/*
 * asr_sub_119a18  0x8c119a18
 * area name: in the asr library code range
 * called by: asr_sub_11a0e8
 */
int asr_sub_119a18(int a0, int a1, int a2) {
    float extraout_fr0;
    float extraout_fr0_00;
    float fVar1;
    float fVar2;
    float fVar3;
    char cVar4;

    cVar4 = '\0';
    fVar1 = (float)a1;
    if (a1 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)a2;
    if (a2 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar3 = (float)a0;
    if (a0 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar3 = (fVar1 - fVar2) / fVar3;
    fVar1 = 0.08544444;
    if (-26.0 <= fVar3) {
        if (78.0 < fVar3) {
            fVar1 = -4.4671087;
            thunk_FUN_8c013cd8();
            if (cVar4 == '\0') {
                fVar1 = 1.0;
            }
            fVar1 = 10000.0 / (extraout_fr0_00 + fVar1);
        } else {
            fVar1 = (91.0 - fVar3) * 76.899994;
        }
    } else {
        thunk_FUN_8c013cd8();
        if (cVar4 == '\0') {
            fVar1 = 1.0;
        }
        fVar1 = 10000.0 / (extraout_fr0 + fVar1);
    }
    if (2.1474836e+09 <= fVar1) {
        fVar1 = fVar1 - 4.2949673e+09;
    }
    return (int)fVar1;
}

/*
 * asr_sub_119a1e  0x8c119a1e
 * area name: in the asr library code range
 */
int asr_sub_119a1e(int a0, u32 unused_a1, int a2) {
    char cVar1;
    u32 uVar2;
    double in_dr0;
    u32 uVar3;
    float fVar4;
    double dVar5;
    double dVar6;
    u32 in_fr5;
    float fVar8;
    double dVar7;
    float fVar9;
    double in_dr14;
    double in_xd2;
    double in_xd14;
    char in_T;
    bool bVar10;
    int in_FPUL;
    int iVar11;
    u8 in_FPSCR_CAUSE;
    u8 in_FPSCR_DN;
    u8 in_FPSCR_PR;
    u8 in_FPSCR_SZ;

    fVar4 = (float)in_FPUL;
    if (in_T != '\x01') {
        if (in_FPSCR_PR == 0) {
            fVar4 = fVar4 + 0x4f800000;
        } else {
            fVar4 = SUB84((double)CONCAT44(0x4f800000, fVar4) + (double)CONCAT44(0x4f800000, fVar4), 0);
        }
    }
    if (in_FPSCR_PR == 0) {
        dVar5 = (double)CONCAT44((float)a2, fVar4);
    } else {
        dVar5 = (double)a2;
    }
    if (a2 < 0) {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        if (in_FPSCR_PR == 0) {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) + 0x4f800000, SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 + in_dr0;
        }
    }
    if (in_FPSCR_PR == 0) {
        fVar4 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 - dVar5, 0);
    }
    if (in_FPSCR_PR == 0) {
        dVar5 = (double)CONCAT44((float)a0, fVar4);
    } else {
        dVar5 = (double)a0;
    }
    if (a0 < 0) {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        if (in_FPSCR_PR == 0) {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) + 0x4f800000, SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 + in_dr0;
        }
    }
    if (in_FPSCR_SZ == 0) {
        in_xd2 = (double)CONCAT44(SUB84(dVar5, 0), in_fr5);
    }
    if (in_FPSCR_PR == 0) {
        dVar5 = (double)CONCAT44((float)((u64)in_xd2 >> 0x20) / (float)((u64)dVar5 >> 0x20), SUB84(in_xd2, 0));
    } else {
        dVar5 = in_xd2 / dVar5;
    }
    if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(g_8c119ab4, g_8c119ab0);
    } else {
        dVar6 = (double)CONCAT44(g_8c119ab8, g_8c119ab4);
    }
    fVar4 = (float)((u64)dVar6 >> 0x20);
    fVar8 = (float)((u64)dVar5 >> 0x20);
    if (in_FPSCR_PR == 0) {
        bVar10 = fVar8 < fVar4;
    } else {
        bVar10 = dVar5 < dVar6;
    }
    dVar7 = dVar5;
    if (in_FPSCR_SZ == 0) {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), fVar8);
        dVar7 = in_xd14;
    }
    if (in_FPSCR_PR == 0) {
        fVar9 = SUB84(in_dr14, 0) * SUB84(dVar6, 0);
    } else {
        fVar9 = SUB84(in_dr14 * dVar6, 0);
    }
    uVar3 = (u32)((u64)in_dr0 >> 0x20);
    if (bVar10) {
        if (in_FPSCR_SZ == 0) {
            in_dr0 = (double)CONCAT44(uVar3, g_8c119ab8);
            dVar7 = (double)CONCAT44(fVar9, SUB84(dVar5, 0));
        }
        if (in_FPSCR_PR == 0) {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 + in_dr0;
        }
        thunk_FUN_8c013cd8();
        if (in_FPSCR_SZ == 0) {
            dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), g_8c119ac0);
        }
        uVar2 = ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 |
                 (u32)in_FPSCR_SZ << 0x14) &
                0xffe7ffff;
        in_FPSCR_CAUSE = 0;
        in_FPSCR_DN = 0;
        in_FPSCR_PR = (u8)((uVar2 & 0x80000) >> 0x13);
        in_FPSCR_SZ = (u8)((uVar2 & 0x100000) >> 0x14);
        if (in_FPSCR_PR == 0) {
            dVar5 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) + SUB84(dVar6, 0), SUB84(in_dr0, 0));
        } else {
            dVar5 = in_dr0 + dVar6;
        }
        if (in_FPSCR_SZ == 0) {
            dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), g_8c119ac4);
        }
        if (in_FPSCR_PR == 0) {
            fVar4 = SUB84(dVar7, 0) / (float)((u64)dVar5 >> 0x20);
        } else {
            fVar4 = SUB84(dVar7 / dVar5, 0);
        }
    } else {
        if (in_FPSCR_SZ == 0) {
            in_dr0 = (double)CONCAT44(uVar3, (u32)g_8c119ac8);
        }
        if (in_FPSCR_PR == 0) {
            bVar10 = SUB84(in_dr0, 0) < fVar8;
        } else {
            bVar10 = in_dr0 < dVar5;
        }
        if (bVar10) {
            if (in_FPSCR_SZ == 0) {
                dVar6 = (double)CONCAT44(fVar4, g_8c119be0);
                dVar7 = (double)CONCAT44(fVar9, SUB84(dVar5, 0));
            }
            if (in_FPSCR_PR == 0) {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + SUB84(dVar6, 0), SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 + dVar6;
            }
            thunk_FUN_8c013cd8();
            if (in_FPSCR_SZ == 0) {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), g_8c119be8);
            }
            uVar2 = ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 |
                     (u32)in_FPSCR_SZ << 0x14) &
                    0xffe7ffff;
            in_FPSCR_CAUSE = 0;
            in_FPSCR_DN = 0;
            in_FPSCR_PR = (u8)((uVar2 & 0x80000) >> 0x13);
            in_FPSCR_SZ = (u8)((uVar2 & 0x100000) >> 0x14);
            if (in_FPSCR_PR == 0) {
                dVar5 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) + SUB84(dVar6, 0), SUB84(in_dr0, 0));
            } else {
                dVar5 = in_dr0 + dVar6;
            }
            if (in_FPSCR_SZ == 0) {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), g_8c119bf0);
            }
            if (in_FPSCR_PR == 0) {
                fVar4 = SUB84(dVar7, 0) / (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar7 / dVar5, 0);
            }
        } else {
            if (in_FPSCR_SZ == 0) {
                dVar6 = (double)CONCAT44(g_8c119ad0, g_8c119ac8._4_4_);
            } else {
                dVar6 = (double)CONCAT44(uRam8c119ad4, g_8c119ad0);
            }
            if (in_FPSCR_PR == 0) {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) - fVar8);
            } else {
                dVar6 = dVar6 - dVar5;
            }
            if (in_FPSCR_SZ == 0) {
                dVar5 = (double)CONCAT44(fVar8, SUB84(dVar6, 0));
            }
            if (in_FPSCR_PR == 0) {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar6 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 * dVar6, 0);
            }
        }
    }
    fVar8 = SUB84(dVar6, 0);
    if (in_FPSCR_SZ == 0) {
        fVar8 = fVar4;
    }
    cVar1 = (char)((((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13) & 0xffe7ffff &
                    0x80000) >>
                   0x13);
    dVar5 = (double)CONCAT44(0x4f000000, fVar8);
    if (cVar1 != '\0' || 0x4f000000 <= fVar8) {
        if (cVar1 == '\0') {
            dVar5 = (double)CONCAT44(0x4f000000 + 0x4f000000, fVar8 - (0x4f000000 + 0x4f000000));
        } else {
            dVar5 = (dVar5 + dVar5) - (dVar5 + dVar5);
        }
    }
    if (cVar1 == '\0') {
        iVar11 = (int)SUB84(dVar5, 0);
    } else {
        iVar11 = (int)dVar5;
    }
    return iVar11;
}

/*
 * asr_sub_119b16  0x8c119b16
 * area name: in the asr library code range
 * called by: asr_sub_119c68, asr_sub_11a0e8
 */
u32 asr_sub_119b16(int a0, int a1, int a2, int a3) {
    int iVar1;
    u64 in_dr0;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    char cVar7;

    fVar6 = (float)((u64)in_dr0 >> 0x20);
    if (a2 != a3) {
        cVar7 = '\0';
        fVar2 = (float)a1;
        if (a1 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
        }
        iVar1 = *(int *)(*(int *)(a0 + 0x1cc) + a2 * 4);
        fVar3 = (float)iVar1;
        if (iVar1 < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
        }
        iVar1 = *(int *)(*(int *)(a0 + 0x1cc) + a3 * 4);
        fVar4 = (float)iVar1;
        if (iVar1 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
        }
        fVar5 = (float)(a2 - a3);
        if (a2 - a3 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar5 = ((fVar2 - fVar3) + fVar4) / fVar5;
        fVar2 = 0.08544444;
        if (-26.0 <= fVar5) {
            if (78.0 < fVar5) {
                fVar2 = -4.4671087;
                thunk_FUN_8c013cd8();
                if (cVar7 == '\0') {
                    fVar2 = 1.0;
                }
                fVar6 = 10000.0 / (fVar6 + fVar2);
            } else {
                fVar6 = (91.0 - fVar5) * 76.899994;
            }
        } else {
            thunk_FUN_8c013cd8();
            if (cVar7 == '\0') {
                fVar2 = 1.0;
            }
            fVar6 = 10000.0 / (fVar6 + fVar2);
        }
        fVar6 = fVar6 + 0.5;
        if (2.1474836e+09 <= fVar6) {
            fVar6 = fVar6 - 4.2949673e+09;
        }
        return (int)fVar6;
    }
    return 0;
}

/*
 * asr_sub_119c68  0x8c119c68
 * area name: in the asr library code range
 * called by: asr_sub_11a88c
 */
int *asr_sub_119c68(int a0, int a1, u32 *a2, u32 *a3) {
    u32 uVar1;
    u32 uVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int *ar5_00;
    u32 *puVar6;
    u32 *puVar7;
    u32 *puVar8;
    u32 *puVar9;
    int *piVar10;
    u32 uStack_84;
    u32 *puStack_80;
    u32 *puStack_7c;
    int *piStack_78;
    u32 uStack_74;
    u32 uStack_70;
    char cStack_6c;
    int iStack_68;
    int iStack_64;
    u32 *puStack_60;
    int iStack_5c;
    u32 uStack_58;
    int iStack_54;
    int iStack_50;
    u32 *puStack_4c;
    u32 *puStack_48;
    u32 uStack_44;
    int iStack_40;
    int iStack_3c;
    u32 uStack_38;
    u32 uStack_34;
    u32 uStack_28;

    cStack_6c = (char)a2;
    puStack_48 = a3;
    ar5_00 = *(int **)(0x8c + a0);
    piStack_78 = NULL;
    puStack_60 = (u32 *)0x1;
    iStack_50 = 0;
    iStack_54 = 0;
    puStack_4c = (u32 *)**(u32 **)((int)&uStack_84 + (int)0x84);
    iStack_3c = 0;
    iStack_40 = 1;
    puVar6 = NULL;
    if (*(int *)(a1 + 8) != 0) {
        uStack_34 = *(u32 *)(a1 + 8);
        puVar6 = &uStack_38;
        uStack_28 = *(u32 *)(a1 + 0xc);
        uStack_38 = 1;
        puStack_7c = *(u32 **)(0x12c + a0);
        iStack_68 = (int)*(short *)(a1 + 2) + *(int *)(0x1ac + a0);
    }
    uStack_44 = (u32)((char)a2 == '\0');
    if (puVar6 != NULL) {
        iVar4 = puVar6[4];
        while (iVar4 != 0) {
            uVar1 = (u32)uStack_84 >> 0x10;
            uStack_84 = CONCAT22((short)uVar1, *(u16 *)(puVar6[4] + 2));
            uStack_84 = CONCAT22(*(u16 *)(puVar6[4] + 4), *(u16 *)(puVar6[4] + 2));
            puVar9 = (u32 *)puVar6[1];
            puVar7 = NULL;
            if (((uStack_44 != 0) && (puVar9[4] != 0)) &&
                (uStack_70 = CONCAT22(*(u16 *)(puVar9[4] + 4), *(u16 *)(puVar9[4] + 2)),
                 *(u32 *)(0x108 + a0) <= uStack_70)) {
                iStack_3c = 1;
                puVar8 = (u32 *)puVar9[1];
                if ((*(u16 *)puVar8[4] & 2) == 0) {
                    uStack_74 = CONCAT22(*(u16 *)(puVar8[4] + 4), *(u16 *)(puVar8[4] + 2));
                    iVar5 = *(int *)(0x104 + a0);
                    iVar4 = *(int *)(0x104 + -4 + a0);
                    uStack_58 = (u32) * (u16 *)(*(int *)(uStack_74 * 8 + iVar4 + 4) * 0xc + iVar5 + 6);
                    if (*(short *)(iVar5 + *(int *)(uStack_84 * 8 + iVar4 + 4) * 0xc + 8) == 0) {
                        puVar7 = NULL;
                    } else {
                        puVar7 = puVar8;
                        if (uStack_58 == 0) {
                            puVar7 = (u32 *)puVar8[1];
                            puVar9 = puVar8;
                        }
                    }
                } else {
                    puVar7 = (u32 *)puVar8[1];
                    puVar9 = puVar8;
                }
            }
            iStack_64 = puVar9[3];
            puStack_80 = (u32 *)puVar9[5];
            iStack_5c = iStack_68 - puVar9[3];
            if (iStack_40 != 0) {
                if (puStack_4c < puStack_80) {
                    puStack_4c = puStack_80;
                    **(int **)((int)&uStack_84 + (int)0x8c) = iStack_5c;
                }
                if (cStack_6c == '\0') {
                    iStack_54 = iStack_68 - (u32) * (u16 *)(0x1da + a0) * (int)*(short *)(0x1da + -0x1c + a0);
                    puStack_60 = puStack_7c;
                    iStack_50 = *(int *)(*(int *)(0x1d0 + a0) + (int)puStack_7c * 4);
                }
                iStack_40 = 0;
            }
            if (ar5_00[4] == 0) {
                piVar3 = (int *)asr_sub_112d82(a0, ar5_00, a2, a3);
            } else {
                piVar3 = (int *)ar5_00[4];
            }
            ar5_00[4] = (int)piStack_78;
            piStack_78 = ar5_00;
            ar5_00[3] = 0;
            *ar5_00 = uStack_84;
            if (cStack_6c == '\0') {
                if (*(u16 *)puVar6[4] >> 2 == *(u16 *)(0xe2 + a0)) {
                    puStack_60 = (u32 *)((int)puStack_60 - ((int)puStack_7c - (int)puStack_80));
                    iStack_54 = iStack_54 - iStack_5c;
                    iStack_50 = iStack_50 - (*(int *)((int)puStack_7c * 4 + *(int *)(0x1d0 + a0)) -
                                             *(int *)((int)puStack_80 * 4 + *(int *)(0x1d0 + a0)));
                }
                if ((*(u16 *)(uStack_84 * 2 + *(int *)(0xc0 + a0)) & 0x80) == 0) {
                    iVar4 = 0;
                } else {
                    iVar4 = (int)*(short *)(0x1be + a0);
                }
                *(u16 *)(ar5_00 + 5) = puStack_7c._0_2_;
                iVar4 = (iStack_68 - iVar4) - iStack_64;
                ar5_00[2] = iVar4;
                a3 = puStack_80;
                iVar4 = asr_sub_119b16(a0, iVar4, puStack_7c, puStack_80);
                ar5_00[1] = iVar4;
                a2 = puStack_7c;
            } else {
                a2 = (u32 *)puVar6[4];
                uVar2 = asr_sub_113e64(a0, uStack_84, a2);
                *(short *)((int)ar5_00 + 0x16) = (short)uVar2;
            }
            if (iStack_3c != 0) {
                if (puVar7 == NULL) {
                    puVar9 = (u32 *)puVar9[1];
                    if (uStack_58 == 0) {
                        puStack_80 = (u32 *)puVar9[5];
                        iStack_64 = puVar9[3];
                    }
                } else if (puVar7[4] != 0) {
                    if ((*(u16 *)puVar7[4] & 2) != 0) {
                        puStack_80 = (u32 *)puVar7[5];
                        iStack_64 = puVar7[3];
                        puVar9 = puVar7;
                    }
                    puVar9 = (u32 *)puVar9[1];
                }
                iStack_3c = 0;
            }
            puStack_7c = puStack_80;
            iStack_68 = iStack_64;
            ar5_00 = piVar3;
            if (puVar9 == NULL)
                break;
            puVar6 = puVar9;
            iVar4 = puVar9[4];
        }
    }
    if (piStack_78 == NULL) {
        piVar10 = NULL;
        piVar3 = ar5_00;
    } else {
        if (ar5_00[4] == 0) {
            piVar3 = (int *)asr_sub_112d82(a0, ar5_00, a2, a3);
        } else {
            piVar3 = (int *)ar5_00[4];
        }
        ar5_00[3] = (int)piStack_78;
        if ((u32) * (u16 *)(piStack_78 + 5) < *puStack_48) {
            *puStack_48 = (u32) * (u16 *)(piStack_78 + 5);
            **(int **)((int)&uStack_84 + (int)0x88) = piStack_78[2];
        }
        piVar10 = ar5_00;
        if (cStack_6c == '\0') {
            ar5_00[2] = iStack_54;
            ar5_00[1] = iStack_50;
            *(short *)(ar5_00 + 5) = (short)puStack_60;
        }
    }
    *(int **)(0x8c + a0) = piVar3;
    **(u32 **)((int)&uStack_84 + (int)0x84) = (u32)puStack_4c;
    return piVar10;
}

/*
 * asr_sub_11a014  0x8c11a014
 * area name: in the asr library code range
 * called by: asr_sub_11a0e8
 */
u32 *asr_sub_11a014(int a0, int a1) {
    u32 *puVar1;
    u32 uVar2;
    int *piVar3;
    u32 *puVar4;
    u32 *puVar5;

    puVar4 = *(u32 **)(0x114 + a0);
    puVar1 = NULL;
    for (; a1 != 0; a1 = *(int *)(a1 + 8)) {
        puVar5 = *(u32 **)(0x114 + a0);
        if (puVar5[1] == 0) {
            uVar2 = asr_sub_112fd8(a0, puVar5);
            *(u32 *)(0x114 + a0) = uVar2;
        } else {
            *(u32 *)(0x114 + a0) = puVar5[1];
        }
        puVar5[4] = *(u32 *)(a1 + 0x10);
        *puVar5 = 1;
        puVar5[3] = *(u32 *)(a1 + 0xc);
        puVar5[5] = *(u32 *)(a1 + 0x14);
        piVar3 = *(int **)(a1 + 4);
        puVar5[1] = piVar3;
        *piVar3 = *piVar3 + 1;
        puVar5[2] = 0;
        if (puVar1 != NULL) {
            puVar1[2] = puVar5;
        }
        puVar1 = puVar5;
    }
    *puVar4 = 0;
    return puVar4;
}

/*
 * asr_sub_11a02c  0x8c11a02c
 * area name: in the asr library code range
 */
u32 *asr_sub_11a02c(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    int *piVar2;
    u32 *puVar3;
    u32 unaff_r10;
    u32 *unaff_r11;
    int unaff_r12;
    int unaff_r13;
    u32 *ar5_00;
    char in_T;

    puVar3 = *(u32 **)(in_r0 + unaff_r12);
    if (in_T != '\x01') {
        do {
            ar5_00 = *(u32 **)(0x114 + unaff_r12);
            if (ar5_00[1] == 0) {
                uVar1 = asr_sub_112fd8(unaff_r12, ar5_00, a2, a3);
                *(u32 *)(0x114 + unaff_r12) = uVar1;
            } else {
                *(u32 *)(0x114 + unaff_r12) = ar5_00[1];
            }
            ar5_00[4] = *(u32 *)(unaff_r13 + 0x10);
            *ar5_00 = 1;
            ar5_00[3] = *(u32 *)(unaff_r13 + 0xc);
            ar5_00[5] = *(u32 *)(unaff_r13 + 0x14);
            piVar2 = *(int **)(unaff_r13 + 4);
            ar5_00[1] = piVar2;
            *piVar2 = *piVar2 + 1;
            ar5_00[2] = unaff_r10;
            if (unaff_r11 != NULL) {
                unaff_r11[2] = ar5_00;
            }
            unaff_r13 = *(int *)(unaff_r13 + 8);
            unaff_r11 = ar5_00;
        } while (unaff_r13 != 0);
    }
    *puVar3 = unaff_r10;
    return puVar3;
}

/*
 * asr_sub_11a09e  0x8c11a09e
 * area name: in the asr library code range
 * called by: asr_sub_11a0e8
 */
u32 *asr_sub_11a09e(u32 *a0) {
    u32 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 uVar5;

    uVar4 = a0[3];
    puVar3 = (u32 *)a0[2];
    puVar2 = a0;
    while (puVar1 = puVar3, puVar1 != NULL) {
        if ((u32)puVar1[3] < uVar4) {
            uVar5 = *a0;
            puVar2[2] = puVar1[2];
            puVar1[2] = a0;
            *a0 = 1;
            *puVar1 = uVar5;
            uVar4 = puVar1[3];
            puVar3 = (u32 *)puVar2[2];
            a0 = puVar1;
        } else {
            puVar3 = (u32 *)puVar1[2];
            puVar2 = puVar1;
        }
    }
    return a0;
}

/*
 * asr_sub_11a0e8  0x8c11a0e8
 * area name: in the asr library code range
 * called by: asr_sub_11a88c
 */
int *asr_sub_11a0e8(int a0, int *a1, u32 a2, u32 a3) {
    int *a5;
    int *piVar1;
    u32 uVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int *a5_00;
    char cVar6;
    int *piVar7;
    int *ar5_00;
    int *piVar8;
    int *piVar9;
    u32 uStack_44;
    int *piStack_40;
    int *piStack_38;
    int iStack_30;
    int *piStack_2c;
    u32 uStack_28;
    int iStack_24;

    cVar6 = (char)a2;
    piVar8 = *(int **)(0x8c + a0);
    piStack_38 = NULL;
    piVar9 = (int *)a1[2];
    piStack_40 = NULL;
    ar5_00 = *(int **)(0x124 + a0);
    iStack_24 = 0;
    iStack_30 = 1;
    uStack_28 = 0;
    piStack_2c = NULL;
    a5_00 = a1;
    if (piVar9 != NULL) {
        if (cVar6 == '\0') {
            piStack_2c = (int *)(((int)*(short *)((int)a1 + 2) + *(int *)(0x1ac + a0)) -
                                 (u32) * (u16 *)(0x1da + a0) * (int)*(short *)(0x1be + a0));
            iStack_30 = *(int *)(0x12c + a0);
            uStack_28 = *(u32 *)(*(int *)(0x1d0 + a0) + iStack_30 * 4);
        }
        if (piVar8[4] == 0) {
            piVar4 = (int *)asr_sub_112d82(a0, piVar8, a2, a3);
        } else {
            piVar4 = (int *)piVar8[4];
        }
        uStack_44 = (int *)CONCAT22(*(u16 *)(a1[3] + 4), *(u16 *)(a1[3] + 2));
        piVar8[4] = 0;
        piVar8[3] = 0;
        if (cVar6 == '\0') {
            iVar3 = (int)0xc0;
            *(u16 *)(piVar8 + 5) = *(u16 *)(0x12c + a0);
            if ((*(u16 *)((int)uStack_44 * 2 + *(int *)(iVar3 + a0)) & 0x80) == 0) {
                iVar3 = 0;
            } else {
                iVar3 = (int)*(short *)(0x1be + a0);
            }
            piVar8[2] = (((int)*(short *)((int)a1 + 2) + *(int *)(0x1ac + a0)) - piVar9[3]) - iVar3;
            a5_00 = (int *)piVar8[2];
            a2 = (u32) * (u16 *)(piVar8 + 5);
            a3 = piVar9[5] & 0xffff;
            iVar3 = asr_sub_119b16(a0, a5_00, a2, a3);
            piVar8[1] = iVar3;
        } else {
            a2 = a1[3];
            a5_00 = uStack_44;
            uVar2 = asr_sub_113e64(a0, uStack_44, a2);
            *(short *)((int)piVar8 + 0x16) = (short)uVar2;
        }
        *piVar8 = (int)uStack_44;
        piVar7 = piVar8;
        piStack_38 = piVar8;
        while (piVar1 = piStack_40, piVar8 = piVar4, a5 = piVar9, a5 != NULL) {
            piVar4 = piVar8;
            if (a5[4] == 0) {
                piVar9 = NULL;
                piStack_40 = piVar1;
            } else {
                piVar9 = (int *)a5[1];
                piStack_40 = piVar7;
                if ((*(u16 *)a5[4] & 2) == 0) {
                    if (piVar8[4] == 0) {
                        piVar4 = (int *)asr_sub_112d82(a0, piVar8, a2, a3);
                    } else {
                        piVar4 = (int *)piVar8[4];
                    }
                    uStack_44 = (int *)CONCAT22(*(u16 *)(a5[4] + 4), *(u16 *)(a5[4] + 2));
                    piVar8[4] = (int)piStack_38;
                    piVar8[3] = 0;
                    if (cVar6 == '\0') {
                        a2 = a5[5];
                        a3 = piVar9[5];
                        if (*(u16 *)a5[4] >> 2 == *(u16 *)(0xe2 + a0)) {
                            iStack_30 = iStack_30 - (a2 - a3);
                            piStack_2c = (int *)((int)piStack_2c - (a5[3] - *(int *)(a5[1] + 0xc)));
                            uStack_28 = uStack_28 - (*(int *)(a2 * 4 + *(int *)(0x1d0 + a0)) -
                                                     *(int *)(a3 * 4 + *(int *)(0x1d0 + a0)));
                        }
                        if ((*(u16 *)((int)uStack_44 * 2 + *(int *)(0xc0 + a0)) & 0x80) == 0) {
                            iVar3 = 0;
                        } else {
                            iVar3 = (int)*(short *)(0x1be + a0);
                        }
                        *(short *)(piVar8 + 5) = (short)a2;
                        a5_00 = (int *)((a5[3] - piVar9[3]) - iVar3);
                        piVar8[2] = (int)a5_00;
                        iVar3 = asr_sub_119b16(a0, a5_00, a2, a3);
                        piVar8[1] = iVar3;
                    } else {
                        a2 = a5[4];
                        a5_00 = uStack_44;
                        uVar2 = asr_sub_113e64(a0, uStack_44, a2);
                        *(short *)((int)piVar8 + 0x16) = (short)uVar2;
                    }
                    *piVar8 = (int)uStack_44;
                    piVar7 = a5;
                    if ((a5 != (int *)a1[2]) && (1 < *a5)) {
                        a5_00 = a5;
                        piVar7 = (int *)asr_sub_11a014(a0, a5);
                    }
                    ar5_00 = (int *)*ar5_00;
                    if (ar5_00 == *(int **)(0x120 + a0)) {
                        a5_00 = ar5_00;
                        asr_sub_11318e(a0, ar5_00, a2, a3);
                    }
                    ar5_00[2] = (int)piVar7;
                    piStack_38 = piVar8;
                    piStack_40 = piVar7;
                    if ((piVar7 != a5) && (piVar1 != NULL)) {
                        *piVar7 = *piVar7 + 1;
                        iVar3 = *(int *)piVar1[1] + -1;
                        *(int *)piVar1[1] = iVar3;
                        if (iVar3 < 1) {
                            a5_00 = (int *)piVar1[1];
                            asr_sub_115f18(a0, a5_00, a2, a3);
                        }
                        piVar1[1] = (int)piVar7;
                    }
                }
            }
        }
    }
    piVar9 = *(int **)(0x124 + a0);
    iVar3 = (int)0x124;
    *(int *)(iVar3 + a0) = *ar5_00;
    if (*(int *)(iVar3 + a0) == *(int *)(iVar3 + -4 + a0)) {
        a5_00 = *(int **)(0x124 + a0);
        asr_sub_11318e(a0, a5_00, a2, a3);
    }
    if (piStack_38 == NULL) {
        piStack_40 = NULL;
        piVar4 = piVar8;
    } else {
        if (piVar8[4] == 0) {
            a5_00 = piVar8;
            piVar4 = (int *)asr_sub_112d82(a0, piVar8, a2, a3);
        } else {
            piVar4 = (int *)piVar8[4];
        }
        piVar8[3] = (int)piStack_38;
        piStack_40 = piVar8;
        if (cVar6 == '\0') {
            piVar8[2] = (int)*(short *)((int)a1 + 2) + *(int *)(0x1ac + a0);
            iVar3 = asr_sub_119a18(iStack_30, piStack_2c, uStack_28);
            piVar8[1] = iVar3;
            a5_00 = piStack_2c;
            a2 = uStack_28;
        }
    }
    piVar8 = NULL;
    for (; ar5_00 != piVar9; ar5_00 = (int *)ar5_00[1]) {
        piVar7 = (int *)ar5_00[2];
        if (piVar8 == NULL) {
            piVar8 = NULL;
            if (piVar7[2] != 0) {
                piVar8 = (int *)asr_sub_11a09e(piVar7[2]);
                iStack_24 = piVar8[3] - piVar7[3];
                *piVar8 = *piVar7 + -1;
                piVar7[2] = 0;
            }
        } else {
            iVar3 = asr_sub_11a014(a0, piVar7);
            *piVar8 = *piVar8 + 1;
            iVar5 = **(int **)(iVar3 + 4) + -1;
            **(int **)(iVar3 + 4) = iVar5;
            a5_00 = piVar7;
            if (iVar5 < 1) {
                a5_00 = *(int **)(iVar3 + 4);
                asr_sub_115f18(a0, a5_00, a2, a3);
            }
            *(int **)(iVar3 + 4) = piVar8;
            iVar5 = *(int *)(iVar3 + 0xc);
            *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + iStack_24;
            piVar8 = (int *)asr_sub_11a09e(iVar3);
            iStack_24 = piVar8[3] - iVar5;
        }
    }
    if (piVar8 == NULL) {
        if (a1[2] != 0) {
            iVar3 = *(int *)a1[2] + -1;
            *(int *)a1[2] = iVar3;
            if (iVar3 < 1) {
                asr_sub_115f18(a0, a1[2], a2, a3);
            }
            a1[2] = 0;
        }
        *(u16 *)((int)a1 + 2) = 0x7fff;
    } else {
        *piVar8 = *piVar8 + 1;
        iVar3 = *(int *)a1[2] + -1;
        *(int *)a1[2] = iVar3;
        if (iVar3 < 1) {
            asr_sub_115f18(a0, a1[2], a2, a3);
        }
        a1[2] = (int)piVar8;
        *(short *)((int)a1 + 2) = (short)iStack_24 + *(short *)((int)a1 + 2);
    }
    *(int **)(0x124 + a0) = piVar9;
    *(int **)(0x8c + a0) = piVar4;
    return piStack_40;
}

/*
 * asr_sub_11a588  0x8c11a588
 * area name: in the asr library code range
 * called by: asr_sub_11a634
 */
int asr_sub_11a588(int a0, int *a1, int a2) {
    int iVar1;
    int iVar2;
    u32 uStack_c;

    if (a2 == 0) {
        iVar2 = -1;
    } else {
        iVar2 = 0;
        iVar1 = *(int *)(*a1 + 8);
        while (iVar1 != 0) {
            if (*(int *)(iVar1 + 0x10) == 0) {
                iVar1 = 0;
            } else {
                if (((**(u16 **)(iVar1 + 0x10) & 1) != 0) &&
                    (uStack_c = CONCAT22(*(u16 *)(*(int *)(iVar1 + 0x10) + 4), *(u16 *)(*(int *)(iVar1 + 0x10) + 2)),
                     (*(u16 *)(*(int *)(0xc0 + a0) + uStack_c * 2) & 0x80) != 0)) {
                    iVar2 = iVar2 + 1;
                }
                iVar1 = *(int *)(iVar1 + 4);
            }
        }
    }
    return iVar2;
}

/*
 * asr_sub_11a634  0x8c11a634
 * area name: in the asr library code range
 * called by: asr_sub_11919e, asr_sub_11a88c, asr_sub_11adde
 */
int asr_sub_11a634(int *a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u8 *a7;
    int ar5_00;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    int *piStack_24;

    iVar3 = a0[0x15];
    ar5_00 = 0;
    uVar4 = 0;
    if ((short)a0[0x14] != 0) {
        do {
            if (((**(u16 **)(iVar3 + 0xc) & 1) != 0) &&
                (uStack_28 = CONCAT22(*(u16 *)(*(int *)(iVar3 + 0xc) + 4), *(u16 *)(*(int *)(iVar3 + 0xc) + 2)),
                 (*(u16 *)(*(int *)((int)0xc0 + (int)a0) + uStack_28 * 2) & 2) != 0)) {
                ar5_00 = ar5_00 + 1;
            }
            uVar4 = uVar4 + 1;
            iVar3 = *(int *)(iVar3 + 0x18);
        } while (uVar4 < *(u16 *)(a0 + 0x14));
    }
    if (ar5_00 == 0) {
        *a1 = 0;
    } else {
        uVar1 = (**(code **)(*a0 + 0x10))(*a0, ar5_00 << 2, a2, a3);
        *a1 = uVar1;
        iVar3 = a0[0x15];
        piStack_24 = (int *)*a1;
        if (*(u8 **)((int)0x134 + (int)a0) == (&asr_sub_11617a)) {
            uStack_34 = 0;
            if ((short)a0[0x14] != 0) {
                do {
                    if ((**(u16 **)(iVar3 + 0xc) & 1) == 0) {
                        iVar2 = **(int **)(iVar3 + 8) + -1;
                        **(int **)(iVar3 + 8) = iVar2;
                        if (iVar2 < 1) {
                            asr_sub_115f18(a0, *(u32 *)(iVar3 + 8), a2, a3);
                        }
                        *(u32 *)(iVar3 + 8) = 0;
                    } else {
                        uStack_30 = CONCAT22(*(u16 *)(*(int *)(iVar3 + 0xc) + 4), *(u16 *)(*(int *)(iVar3 + 0xc) + 2));
                        if ((*(u16 *)(*(int *)((int)0xc0 + (int)a0) + uStack_30 * 2) & 2) == 0) {
                            iVar2 = **(int **)(iVar3 + 8) + -1;
                            **(int **)(iVar3 + 8) = iVar2;
                            if (iVar2 < 1) {
                                asr_sub_115f18(a0, *(u32 *)(iVar3 + 8), a2, a3);
                            }
                            *(u32 *)(iVar3 + 8) = 0;
                        } else {
                            *piStack_24 = iVar3;
                            piStack_24 = piStack_24 + 1;
                        }
                    }
                    iVar3 = *(int *)(iVar3 + 0x18);
                    uStack_34 = uStack_34 + 1;
                } while (uStack_34 < *(u16 *)(a0 + 0x14));
            }
        } else {
            uStack_34 = 0;
            if ((short)a0[0x14] != 0) {
                do {
                    if ((**(u16 **)(iVar3 + 0xc) & 1) == 0) {
                        iVar2 = **(int **)(iVar3 + 8) + -1;
                        **(int **)(iVar3 + 8) = iVar2;
                        if (iVar2 < 1) {
                            asr_sub_115ed8(a0, *(u32 *)(iVar3 + 8));
                        }
                        *(u32 *)(iVar3 + 8) = 0;
                    } else {
                        uStack_2c = CONCAT22(*(u16 *)(*(int *)(iVar3 + 0xc) + 4), *(u16 *)(*(int *)(iVar3 + 0xc) + 2));
                        if ((*(u16 *)(*(int *)((int)0xc0 + (int)a0) + uStack_2c * 2) & 2) == 0) {
                            iVar2 = **(int **)(iVar3 + 8) + -1;
                            **(int **)(iVar3 + 8) = iVar2;
                            if (iVar2 < 1) {
                                asr_sub_115ed8(a0, *(u32 *)(iVar3 + 8));
                            }
                            *(u32 *)(iVar3 + 8) = 0;
                        } else {
                            *piStack_24 = iVar3;
                            piStack_24 = piStack_24 + 1;
                        }
                    }
                    iVar3 = *(int *)(iVar3 + 0x18);
                    uStack_34 = uStack_34 + 1;
                } while (uStack_34 < *(u16 *)(a0 + 0x14));
            }
        }
        a7 = (&DATA_8c11a5f6);
        libc_sub_0140b4(*a1, ar5_00, 4, (&DATA_8c11a5f6));
        uVar1 = asr_sub_11a588(a0, *a1, ar5_00);
        *(short *)((int)0x1da + (int)a0) = (short)uVar1;
    }
    return ar5_00;
}

/*
 * asr_sub_11a88c  0x8c11a88c
 * area name: in the asr library code range
 * called by: asr_sub_11abf0, asr_sub_11ac4c, asr_sub_11ace2, asr_sub_11ad68
 */
int asr_sub_11a88c(int *a0, short *a1, short *a2, u32 a3) {
    int *piVar1;
    short sVar2;
    short sVar3;
    u32 uVar4;
    int *a7;
    int iVar5;
    int iVar6;
    int iVar7;
    u32 uVar8;
    int iVar9;
    u32 uVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int *piStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;

    uVar4 = asr_sub_11a634(a0, &piStack_38, a2, a3);
    if (uVar4 == 0) {
        iVar6 = (int)0x80;
        *(u32 *)(iVar6 + (int)a0) = 0;
    } else {
        iStack_30 = -1;
        uVar10 = 0;
        iStack_34 = 0;
        iStack_28 = 0;
        iStack_2c = 0;
        sVar2 = *(short *)(*piStack_38 + 2);
        a7 = (int *)(int)sVar2;
        iVar7 = 0;
        if (uVar4 != 0) {
            do {
                uVar10 = uVar10 + 1;
                a2 = (short *)(*(int *)((int)piStack_38 + iVar7) + 2);
                *a2 = *a2 - sVar2;
                iVar7 = iVar7 + 4;
            } while (uVar10 < uVar4);
        }
        if ((*(u8 **)((int)0x130 + (int)a0) == (&asr_sub_11617a)) &&
            ((*(char *)((int)0xf8 + (int)a0) == '\0' || (((u32)a1 & 0xff) != 0)))) {
            uVar10 = 1;
            a2 = a1;
            iVar7 = asr_sub_11a0e8(a0, *piStack_38, a1, a7);
            iVar6 = iVar7;
            if ((iVar7 != 0) && (iVar5 = iVar7, 1 < *(u32 *)((int)0x138 + (int)a0))) {
                do {
                    uVar8 = 1;
                    iVar6 = *piStack_38;
                    sVar2 = *(short *)(iVar6 + 2);
                    if (1 < uVar4) {
                        sVar3 = *(short *)(piStack_38[1] + 2);
                        while (sVar3 < sVar2) {
                            iVar9 = uVar8 - 1;
                            piVar1 = piStack_38 + uVar8;
                            uVar8 = uVar8 + 1;
                            piStack_38[iVar9] = *piVar1;
                            if (uVar4 <= uVar8)
                                break;
                            sVar3 = *(short *)(piStack_38[uVar8] + 2);
                        }
                    }
                    piStack_38[uVar8 - 1] = iVar6;
                    a2 = a1;
                    iVar6 = asr_sub_11a0e8(a0, *piStack_38, a1, a7);
                    *(int *)(iVar5 + 0x10) = iVar6;
                    uVar10 = uVar10 + 1;
                } while ((iVar6 != 0) && (iVar5 = iVar6, uVar10 < *(u32 *)((int)0x138 + (int)a0)));
            }
            if (iVar6 != 0) {
                *(u32 *)(iVar6 + 0x10) = 0;
            }
        } else {
            uVar10 = *(u32 *)((int)0x138 + (int)a0);
            if (uVar4 <= *(u32 *)((int)0x138 + (int)a0)) {
                uVar10 = uVar4;
            }
            iVar6 = uVar10 << 2;
            iVar7 = 0;
            while (uVar10 != 0) {
                iVar6 = iVar6 + -4;
                uVar10 = uVar10 - 1;
                a7 = &iStack_30;
                a2 = a1;
                iVar5 = asr_sub_119c68(a0, *(u32 *)((int)piStack_38 + iVar6), a1, a7);
                if (iVar5 != 0) {
                    *(int *)(iVar5 + 0x10) = iVar7;
                    iVar7 = iVar5;
                }
            }
        }
        *(int *)((int)0x80 + (int)a0) = iVar7;
        iStack_24 = *a0;
        iVar6 = (**(code **)(iStack_24 + 0x18))(iStack_24, piStack_38, a2, a7);
        if ((iVar7 != 0) && (((u32)a1 & 0xff) == 0)) {
            iVar11 = iStack_28 + iStack_2c;
            iVar9 = *(int *)((int)0x1d0 + (int)a0);
            iVar12 = (iStack_30 + *(int *)((int)0x12c + (int)a0)) - iStack_34;
            iVar13 = *(int *)(*(int *)((int)0x12c + (int)a0) * 4 + iVar9);
            iVar5 = *(int *)(iStack_34 * 4 + iVar9);
            iVar6 = iStack_30 * 4;
            iVar9 = *(int *)(iVar6 + iVar9);
            for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
                iVar6 =
                    (*(code *)(&asr_sub_119a18))((u32) * (u16 *)(iVar7 + 0x14) - iVar12, *(int *)(iVar7 + 8) - iVar11,
                                                 *(int *)(iVar7 + 4) - ((iVar13 - iVar5) + iVar9), a7);
                *(int *)(iVar7 + 4) = iVar6;
            }
        }
    }
    return iVar6;
}

/*
 * asr_sub_11aaa8  0x8c11aaa8
 * area name: in the asr library code range
 * called by: asr_sub_11af7e
 */
u32 asr_sub_11aaa8(int a0) {
    u16 uVar1;
    int iVar2;
    u16 *puVar3;
    u32 uVar4;
    int iVar5;

    iVar5 = *(int *)(0x19c + a0);
    if (iVar5 != 0) {
        puVar3 = *(u16 **)(iVar5 + 0xc);
        if (*(u8 **)(0x134 + a0) == (&asr_sub_119320)) {
            iVar2 = (int)puVar3 - *(int *)(a0 + 0x48);
            uVar4 = (int)(iVar2 + (u32)(iVar2 < 0)) >> 1;
            if ((uVar4 < *(u32 *)(a0 + 0x38)) || (*(int *)(0x1b4 + a0) + *(u32 *)(a0 + 0x38) <= uVar4)) {
                *(u16 *)(a0 + 0x34) = 0;
            } else {
                *(short *)(a0 + 0x34) = *(short *)(a0 + 0x34) + 1;
            }
        } else {
            uVar1 = *puVar3;
            while ((uVar1 & 1) == 0) {
                puVar3 = puVar3 + 1;
                uVar1 = *puVar3;
            }
            iVar2 = *(int *)(puVar3 + 1);
            if (((*(u16 *)(iVar2 * 2 + *(int *)(0xc0 + a0)) & 2) == 0) || (iVar2 != *(int *)(0x150 + a0))) {
                *(u16 *)(a0 + 0x34) = 0;
            } else {
                *(short *)(a0 + 0x34) = *(short *)(a0 + 0x34) + 1;
            }
            *(int *)(0x150 + a0) = iVar2;
        }
        if (*(u32 *)(0x14c + a0) < (u32) * (u16 *)(a0 + 0x34)) {
            if (*(u8 **)(0x134 + a0) == (&asr_sub_119320)) {
                iVar5 = *(int *)(iVar5 + 8);
                uVar1 = 0;
                if (iVar5 != 0) {
                    iVar2 = *(int *)(iVar5 + 0x10);
                    while (iVar2 != 0) {
                        iVar2 = *(int *)(iVar5 + 0x10) - *(int *)(a0 + 0x48);
                        iVar5 = *(int *)(iVar5 + 4);
                        if ((u32)((int)(iVar2 + (u32)(iVar2 < 0)) >> 1) <
                            (u32)(*(int *)(a0 + 0x40) + *(int *)(0x1b4 + a0) * -2)) {
                            uVar1 = uVar1 + 1;
                        }
                        if (iVar5 == 0)
                            break;
                        iVar2 = *(int *)(iVar5 + 0x10);
                    }
                }
                if (uVar1 < 0x10) {
                    *(u16 *)(a0 + 0x34) = 0;
                    return 0;
                }
            }
            return 1;
        }
    }
    return 0;
}

/*
 * asr_sub_11abc6  0x8c11abc6
 * area name: in the asr library code range
 * called by: asr_sub_11abf0, asr_sub_11ac4c, asr_sub_11ace2
 */
u32 asr_sub_11abc6(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;

    if (*(int *)(0x80 + a0) == 0) {
        a1 = 0;
        uVar1 = 10;
        uVar2 = 0;
    } else {
        uVar2 = *(u32 *)(0x80 + a0);
        uVar1 = 9;
    }
    uVar1 = asr_sub_120348(a0, uVar1, uVar2, a1);
    return uVar1;
}

/*
 * asr_sub_11abf0  0x8c11abf0
 * area name: in the asr library code range
 */
u32 asr_sub_11abf0(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = asr_sub_112f40(a0);
    if ((uVar1 & 0xff) == 0) {
        asr_sub_11a88c(a0, 0, a2, a3);
        uVar1 = asr_sub_11abc6(a0, 0);
        if ((uVar1 & 0xff) == 0) {
            return 0;
        }
    }
    return 1;
}

/*
 * asr_sub_11ac4c  0x8c11ac4c
 * area name: in the asr library code range
 */
u32 asr_sub_11ac4c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;

    uVar1 = asr_sub_112f40(a0);
    if ((uVar1 & 0xff) == 0) {
        *(u32 *)(0x13c + -4 + a0) = *(u32 *)(0x13c + a0);
        asr_sub_11a88c(a0, 1, a2, a3);
        if (*(int *)(0x80 + a0) == 0) {
            uVar3 = asr_sub_11abc6(a0, 0);
            return uVar3;
        }
        *(u32 *)(0x140 + -8 + a0) = *(u32 *)(0x140 + a0);
        uVar1 = asr_sub_113e98(a0, *(u32 *)(0x80 + a0), a2, a3);
        if ((uVar1 & 0xff) == 0) {
            iVar2 = (int)0x1a4;
            *(u8 **)(iVar2 + a0) = (&DATA_8c11acde);
            *(u8 *)(iVar2 + 0x34 + a0) = 1;
            uVar3 = asr_sub_120348(a0, 0xd, 0);
            return uVar3;
        }
    }
    return 1;
}

/*
 * asr_sub_11ace2  0x8c11ace2
 * area name: in the asr library code range
 */
u32 asr_sub_11ace2(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 a5;
    int unaff_r14;

    asr_sub_11a88c(a0, 0, a2, a3);
    *(u8 **)(0x1a4 + unaff_r14) = (&asr_sub_11ac4c);
    a5 = *(u32 *)(0x100 + unaff_r14);
    uVar1 = asr_sub_11abc6(unaff_r14, a5);
    if ((uVar1 & 0xff) != 0) {
        return 1;
    }
    asr_sub_113c46(unaff_r14);
    asr_sub_113bcc(unaff_r14);
    *(u8 *)(unaff_r14 + 0x7c) = 0;
    *(u8 *)(0x1d8 + unaff_r14) = 0;
    return 0;
}

/*
 * asr_sub_11ad68  0x8c11ad68
 * area name: in the asr library code range
 */
u32 asr_sub_11ad68(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;

    uVar1 = asr_sub_112f40(a0);
    if ((uVar1 & 0xff) == 0) {
        uVar3 = 0;
        *(u32 *)(0x13c + -4 + a0) = *(u32 *)(0x13c + a0);
        asr_sub_11a88c(a0, 0, a2, a3);
        *(u32 *)(0x140 + -8 + a0) = *(u32 *)(0x140 + a0);
        uVar1 = asr_sub_114774(a0, uVar3, a2, a3);
        if ((uVar1 & 0xff) == 0) {
            iVar2 = (int)0x1a4;
            *(u8 **)(iVar2 + a0) = (&asr_sub_11adde);
            *(u8 *)(iVar2 + 0x34 + a0) = 0;
            uVar3 = asr_sub_120348(a0, 0xe, *(u32 *)(0x80 + a0), 0);
            return uVar3;
        }
    }
    return 1;
}

/*
 * asr_sub_11adde  0x8c11adde
 * area name: in the asr library code range
 */
u32 asr_sub_11adde(int a0, u32 *a1, u32 *a2, u32 a3) {
    u32 uVar1;
    u32 uStack_14;
    u32 *puStack_10;
    u32 *puStack_c;

    puStack_10 = a1;
    puStack_c = a2;
    if (a1 == NULL) {
        asr_sub_1148c4(a0, 0, a2, a3);
        asr_sub_113bcc(a0);
        asr_sub_113ac8(a0, a1, a2);
        *(u8 **)(0x1a4 + a0) = (&asr_sub_11ad68);
    } else {
        uVar1 = asr_sub_11a634(a0, &uStack_14, a2, a3);
        *puStack_10 = uStack_14;
        *puStack_c = uVar1;
    }
    *(u8 *)(0x1d8 + a0) = 1;
    return 0;
}

/*
 * asr_sub_11ae6c  0x8c11ae6c
 * area name: in the asr library code range
 * called by: asr_sub_11af7e
 */
int asr_sub_11ae6c(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 *ar4_00;
    u32 *ar4_01;
    int iVar1;
    int iVar2;

    ar4_00 = (u32 *)(**(code **)(*a0 + 0x10))(*a0, (*(int *)((int)0x1d4 + (int)a0) + (int)0x97) * 4, a2, a3);
    ar4_01 = (u32 *)(**(code **)(*a0 + 0x10))(*a0, (*(int *)((int)0x1d4 + (int)a0) + (int)0x97) * 4, a2, a3);
    iVar1 = (int)0x1d4;
    if (*(int *)(iVar1 + (int)a0) == 0) {
        *ar4_00 = 0;
        *ar4_01 = 0;
    } else {
        iVar2 = (*(int *)(iVar1 + (int)a0) + 1) * 4;
        memmove(ar4_00, *(u32 *)(iVar1 + -8 + (int)a0), iVar2);
        (**(code **)(*a0 + 0x18))(*a0, *(u32 *)((int)0x1cc + (int)a0), iVar2, a3);
        iVar1 = (*(int *)((int)0x1d4 + (int)a0) + 1) * 4;
        memmove(ar4_01, *(u32 *)(0x1d4 + -4 + (int)a0), iVar1);
        (**(code **)(*a0 + 0x18))(*a0, *(u32 *)((int)0x1d0 + (int)a0), iVar1, a3);
    }
    iVar1 = (int)0x1cc;
    iVar2 = (int)0x96;
    *(u32 **)(iVar1 + (int)a0) = ar4_00;
    *(u32 **)(iVar1 + 4 + (int)a0) = ar4_01;
    iVar1 = iVar1 + 8;
    *(int *)(iVar1 + (int)a0) = *(int *)(iVar1 + (int)a0) + iVar2;
    return iVar1;
}

/*
 * asr_sub_11af3a  0x8c11af3a
 * area name: in the asr library code range
 */
u32 asr_sub_11af3a(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;

    puVar1 = (&mring_read_advance);
    iVar2 = (*(code *)(&mring_read_advance))(**(u32 **)(a0 + 0xc), (*(u32 **)(a0 + 0xc))[1], a2, a3);
    while (iVar2 != 0) {
        iVar2 = (*(code *)puVar1)(**(u32 **)(a0 + 0xc), (*(u32 **)(a0 + 0xc))[1], a2, a3);
    }
    return 0;
}

/*
 * asr_sub_11af7e  0x8c11af7e
 * area name: in the asr library code range
 */
u32 asr_sub_11af7e(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;

    iVar1 = (*(code *)(&mring_read_advance))(**(u32 **)(a0 + 0xc), (*(u32 **)(a0 + 0xc))[1], a2, a3);
    if (iVar1 != 0) {
        if (*(u8 **)(a0 + 0x18) == (&asr_sub_11af3a)) {
            return 0;
        }
        iVar2 = (int)0x12c;
        *(int *)(iVar2 + a0) = *(int *)(iVar2 + a0) + 1;
        iVar4 = iVar1;
        iVar2 = (**(code **)(iVar2 + 8 + a0))(a0, iVar1, a2, a3);
        if (iVar2 != 0) {
            asr_fsm_set_result(a0, 0x77, a2, a3);
            a3 = 0;
            a2 = 0;
            *(u8 **)(a0 + 0x18) = (&asr_sub_11af3a);
            iVar4 = 0xb;
            uVar3 = asr_sub_120348(a0, 0xb, 0, 0);
            if ((uVar3 & 0xff) != 0) {
                return 1;
            }
        }
        if (*(char *)(0x1d8 + a0) != '\0') {
            if (*(u32 *)(0x1d4 + a0) <= *(u32 *)(0x12c + a0)) {
                asr_sub_11ae6c(a0, iVar4, a2, a3);
            }
            *(int *)((*(int *)(0x12c + a0) + 1) * 4 + *(int *)(0x1cc + a0)) =
                (int)*(short *)((u32) * (u16 *)(0xde + a0) * 2 + iVar1) +
                *(int *)(*(int *)(0x12c + a0) * 4 + *(int *)(0x1cc + a0));
            iVar4 = *(int *)(0x1d0 + a0);
            *(int *)((*(int *)(0x12c + a0) + 1) * 4 + iVar4) =
                (int)*(short *)(iVar1 + (u32) * (u16 *)(0xe0 + a0) * 2) + *(int *)(*(int *)(0x12c + a0) * 4 + iVar4);
        }
        iVar1 = mring_write_advance(*(u32 *)(a0 + 0x2c));
        iVar4 = iVar1 + (u32) * (u16 *)(*(int *)(a0 + 0x28) + 0xc);
        uVar3 = (**(code **)(0x1a8 + a0))(a0, iVar1, iVar4, a3);
        if ((uVar3 & 0xffff) == 0) {
            return 1;
        }
        if ((*(int *)(0x128 + a0) != 0) && (uVar3 = asr_sub_11aaa8(a0), (uVar3 & 0xff) != 0)) {
            *(u8 **)(a0 + 0x18) = (&asr_sub_11af3a);
            uVar3 = asr_sub_120348(a0, 8, 0, 0);
            if ((uVar3 & 0xff) != 0) {
                return 1;
            }
        }
    }
    iVar1 = **(int **)(a0 + 0xc);
    return *(int *)((*(int **)(a0 + 0xc))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c) ^ 1;
}

/*
 * asr_sub_11b13e  0x8c11b13e
 * area name: in the asr library code range
 */
u32 asr_sub_11b13e(int *a0, u32 a1, u32 *a2, int *a3) {
    u8 *puVar1;
    int iVar2;
    u8 bVar3;
    u32 uVar4;
    u32 uVar5;
    u32 ar5_00;
    u32 uVar6;
    int *piVar7;
    u32 uVar8;
    u32 ar6_00;
    u32 *puVar9;
    u32 uVar10;
    u32 uVar11;
    int iVar12;

    puVar1 = (&memset);
    uVar11 = a1 & 0xff;
    if (uVar11 == 4) {
        iVar2 = (int)0x1a4;
        a0[6] = (int)(&asr_sub_11af3a);
        uVar11 = (**(code **)(iVar2 + (int)a0))(a0, a2, a3, a3);
    } else {
        if ((uVar11 == 0x21) || (uVar11 == 3)) {
            if ((uVar11 == 3) && (uVar11 = asr_sub_11372e(a0, a1, a2, a3), (uVar11 & 0xff) != 0)) {
                return 0;
            }
            uVar8 = 0;
            mring_read_advance(a0[0xb], 0, a2, a3);
            iVar2 = mring_write_advance(a0[0xb]);
            iVar12 = (u32) * (u16 *)(a0[10] + 0xc) + iVar2;
            (*(code *)puVar1)(iVar12, 0, (u32)(*(u16 *)(a0[10] + 0xc) >> 1), a3);
            (*(code *)puVar1)(iVar12, 1, (u32) * (u16 *)((int)0xe4 + (int)a0), a3);
            uVar11 = (**(code **)((int)0x1a8 + (int)a0))(a0, iVar2, iVar12, a3);
            if ((uVar11 & 0xffff) == 0) {
                return 0;
            }
            a0[6] = (int)(&asr_sub_11af7e);
            return 1;
        }
        if (uVar11 == 5) {
            a0[6] = (int)(&asr_sub_11af3a);
            return 1;
        }
        if (uVar11 != 0x22) {
            if (uVar11 == 0x23) {
                puVar9 = a2;
                asr_sub_115cec(a0);
                uVar11 = asr_sub_114e80(a0, a2, puVar9, a3);
            } else if (uVar11 == 0x1c) {
                memset(*(u32 *)((int)0x94 + (int)a0), 0, a0[0xf]);
                piVar7 = NULL;
                ar6_00 = 7;
                uVar8 = 0x80;
                if (a3 != NULL) {
                    do {
                        uVar10 = *a2;
                        a2 = a2 + 1;
                        piVar7 = (int *)((int)piVar7 + 1);
                        uVar11 = -(uVar10 & 7);
                        if ((int)uVar11 < 0) {
                            bVar3 = (u8)(0x80 >> (~uVar11 & 0x1f) + 1);
                        } else {
                            bVar3 = (u8)(0x80 << (uVar11 & 0x1f));
                        }
                        uVar10 = uVar10 >> 3;
                        *(u8 *)(*(int *)((int)0x94 + (int)a0) + uVar10) =
                            *(u8 *)(*(int *)((int)0x94 + (int)a0) + uVar10) | bVar3;
                    } while (piVar7 < a3);
                }
                asr_sub_113ac8(a0, 0x80, 7);
                uVar11 = asr_sub_11372e(a0, uVar8, ar6_00, a2);
            } else {
                if (uVar11 == 0x1d) {
                    *a2 = *(u32 *)((int)0x94 + (int)a0);
                    *a3 = a0[0xf];
                    return 1;
                }
                if (uVar11 == 0x11) {
                    return 1;
                }
                if (uVar11 == 0x1a) {
                    uVar11 = *a2;
                    uVar10 = a2[2];
                    uVar4 = a2[3];
                    uVar5 = a2[4];
                    ar5_00 = a2[5];
                    uVar6 = a2[7];
                    if (*(u32 *)((int)0x158 + (int)a0) != uVar11) {
                        iVar2 = (int)0x154;
                        *(u8 *)(iVar2 + (int)a0) = 1;
                        *(u32 *)(iVar2 + 4 + (int)a0) = uVar11;
                    }
                    *(u32 *)((int)0x14c + (int)a0) = uVar5;
                    uVar11 = asr_sub_112a20(a0, uVar10, a2, a3);
                    if ((uVar11 & 0xff) == 0) {
                        if ((int)*(short *)((int)0x1be + (int)a0) != ar5_00) {
                            asr_sub_112b1c(a0, ar5_00);
                        }
                        if (uVar4 == 0) {
                            *(u32 *)((int)0x128 + (int)a0) = 0;
                        } else {
                            *(u32 *)((int)0x128 + (int)a0) = 1;
                        }
                        *(short *)((int)0x1e8 + (int)a0) = (short)uVar6;
                        return 1;
                    }
                    return 0;
                }
                if (uVar11 == 0x1b) {
                    iVar2 = (int)0x158;
                    *a2 = *(u32 *)(iVar2 + (int)a0);
                    a2[4] = *(u32 *)(iVar2 + -0xc + (int)a0);
                    iVar12 = (int)0x1be;
                    a2[2] = *(u32 *)(iVar2 + -0x20 + (int)a0);
                    iVar2 = (int)0x128;
                    a2[5] = (int)*(short *)(iVar12 + (int)a0);
                    iVar12 = (int)0x1e8;
                    a2[3] = (u32)(*(int *)(iVar2 + (int)a0) != 0);
                    a2[7] = (int)*(short *)(iVar12 + (int)a0);
                    return 1;
                }
                if (uVar11 == 0x15) {
                    if (a3 != (int *)0x1) {
                        asr_sub_11584e(a0, a2, a2, a3);
                        return 1;
                    }
                    uVar11 = asr_sub_11584e(a0, 0, a2, 1);
                LAB_8c11b488:
                    *a2 = uVar11;
                    return 1;
                }
                if (uVar11 == 0x17) {
                    puVar9 = a2;
                    asr_sub_115cec(a0);
                    uVar11 = asr_sub_11596e(a0, a2);
                } else {
                    if (uVar11 == 0x18) {
                        if (a3 != (int *)0x1) {
                            asr_sub_1158e0(a0, a2, a2, a3);
                            return 1;
                        }
                        uVar11 = asr_sub_1158e0(a0, 0, a2, 1);
                        goto LAB_8c11b488;
                    }
                    if (uVar11 != 0x19) {
                        if (uVar11 == 0x1e) {
                            mring_read_advance(*(u32 *)a0[4], 0, a2, a3);
                            *(u8 **)((int)0x1a4 + (int)a0) = (&asr_sub_11919e);
                            return 1;
                        }
                        if (uVar11 == (int)0xff) {
                            asr_sub_115cec(a0);
                            asr_sub_112c90(a0);
                            asr_sub_112ec6(a0);
                            asr_sub_113124(a0);
                            asr_sub_1132cc(a0);
                            if (*(int *)((int)0xfc + (int)a0) != 0) {
                                (**(code **)(*a0 + 0x18))(*a0, *(u32 *)((int)0xfc + (int)a0), a2, a3);
                            }
                            (**(code **)(*a0 + 0x18))(*a0, a0[3], a2, a3);
                            (**(code **)(*a0 + 0x18))(*a0, a0[4], a2, a3);
                            (**(code **)(*a0 + 0x18))(*a0, a0, a2, a3);
                            return 1;
                        }
                        return 0;
                    }
                    uVar11 = asr_sub_115ac8(a0, a2, a2, a3);
                }
            }
            if ((uVar11 & 0xff) == 0) {
                return 1;
            }
            return 0;
        }
        uVar11 = asr_sub_114bd8(a0, a2, a2);
    }
    if ((uVar11 & 0xff) != 0) {
        return 0;
    }
    return 1;
}

/*
 * asr_sub_11b5a0  0x8c11b5a0
 * area name: in the asr library code range
 * called by: asr_sub_119706
 */
int *asr_sub_11b5a0(int a0, u32 unused_a1, u32 a2, u32 a3) {
    short sVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    int *piVar5;
    int iVar6;
    int *ar5_00;

    iVar6 = *(int *)(a0 + 0x54);
    uVar4 = 1;
    if (1 < *(u16 *)(a0 + 0x50)) {
        do {
            uVar4 = uVar4 + 1;
            iVar6 = *(int *)(iVar6 + 0x18);
        } while (uVar4 < *(u16 *)(a0 + 0x50));
    }
    piVar5 = *(int **)(iVar6 + 8);
    ar5_00 = piVar5;
    if (*(int *)(0x1b4 + a0) == 0) {
        sVar1 = *(short *)(0x1b0 + a0);
        ar5_00 = *(int **)(0x114 + a0);
        if (ar5_00[1] == 0) {
            uVar2 = asr_sub_112fd8(a0, ar5_00, a2, a3);
            *(u32 *)(0x114 + a0) = uVar2;
        } else {
            *(int *)(0x114 + a0) = ar5_00[1];
        }
        iVar3 = (int)0x12c;
        ar5_00[1] = (int)piVar5;
        *piVar5 = *piVar5 + 1;
        ar5_00[4] = *(int *)(iVar6 + 0xc);
        *ar5_00 = 0;
        iVar6 = (int)0x1ac;
        ar5_00[5] = *(int *)(iVar3 + a0);
        ar5_00[3] = (int)sVar1 + *(int *)(iVar6 + a0);
        ar5_00[5] = ar5_00[5] + 1;
    }
    return ar5_00;
}

/*
 * asr_sub_11b666  0x8c11b666
 * area name: in the asr library code range
 */
int asr_sub_11b666(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar1 = (*(code *)(&asr_sub_120580))(a0, a1, a3, a3, (&asr_sub_11af7e), (&DATA_8c11494a), (&asr_sub_11b13e),
                                         (int)0x1ec);
    if (iVar1 != 0) {
        iVar2 = (int)0x1a8;
        *(u8 **)(iVar2 + iVar1) = (&asr_sub_11346c);
        *(u32 *)(iVar2 + -4 + iVar1) = 0;
    }
    return iVar1;
}

/*
 * asr_sub_11b6b8  0x8c11b6b8
 * area name: in the asr library code range
 * called by: asr_sub_10ad00
 */
u32 asr_sub_11b6b8(int a0, int a1, u32 *a2, u32 a3) {
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    int ar5_00;
    float fVar9;
    float in_fr4;

    uVar5 = 1;
    uVar7 = 0x1c;
    piVar1 = (int *)(**(code **)(a0 + 0x14))(a0, 1, 0x1c, a3);
    if (piVar1 != NULL) {
        iVar2 = asr_sub_112350(a0, uVar5, uVar7, a3);
        *piVar1 = iVar2;
        if (iVar2 != 0) {
            uVar8 = (u32) * (u16 *)((int)a2 + 6);
            uVar5 = *a2;
            uVar6 = (u32) * (u16 *)(a2 + 1);
            asr_array2d_init(*piVar1, uVar6, uVar8, uVar5);
            iVar2 = asr_sub_112350(a0, uVar6, uVar8, uVar5);
            piVar1[1] = iVar2;
            if (iVar2 != 0) {
                uVar8 = (u32) * (u16 *)((int)a2 + 0xe);
                uVar5 = a2[2];
                uVar6 = (u32) * (u16 *)(a2 + 3);
                asr_array2d_init(piVar1[1], uVar6, uVar8, uVar5);
                iVar2 = asr_sub_112350(a0, uVar6, uVar8, uVar5);
                piVar1[3] = iVar2;
                if (iVar2 != 0) {
                    uVar8 = (u32) * (u16 *)((int)a2 + 0x16);
                    uVar5 = a2[4];
                    uVar6 = (u32) * (u16 *)(a2 + 5);
                    asr_array2d_init(piVar1[3], uVar6, uVar8, uVar5);
                    fVar9 = (float)(a1 + -1);
                    if (a1 + -1 < 0) {
                        fVar9 = fVar9 + 4.2949673e+09;
                    }
                    fVar9 = fVar9 / in_fr4 + 0.5;
                    if (2.1474836e+09 <= fVar9) {
                        fVar9 = fVar9 - 4.2949673e+09;
                    }
                    iVar2 = asr_sub_112350(a0, uVar6, uVar8, uVar5);
                    piVar1[4] = iVar2;
                    if (iVar2 != 0) {
                        uVar7 = 0;
                        uVar5 = 1;
                        asr_array2d_init(piVar1[4], a1, 1, 0);
                        iVar2 = asr_sub_112350(a0, a1, uVar5, uVar7);
                        piVar1[5] = iVar2;
                        if (iVar2 != 0) {
                            uVar5 = 1;
                            ar5_00 = (int)fVar9 + 2;
                            iVar2 = ar5_00;
                            iVar4 = a0;
                            iVar3 = asr_sub_112410(piVar1[5], ar5_00, 1, a0);
                            if (iVar3 != 0) {
                                iVar2 = asr_sub_1123b0(a0, iVar2, uVar5, iVar4);
                                piVar1[6] = iVar2;
                                if (iVar2 != 0) {
                                    uVar5 = 1;
                                    iVar2 = a0;
                                    iVar4 = asr_sub_112482(piVar1[6], 1, ar5_00, a0);
                                    if (iVar4 != 0) {
                                        iVar4 = asr_sub_112350(a0, uVar5, ar5_00, iVar2);
                                        piVar1[2] = iVar4;
                                        if ((iVar4 != 0) &&
                                            (iVar2 = asr_sub_1124de(piVar1[2], piVar1[1], a0), iVar2 != 0)) {
                                            return piVar1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

/*
 * asr_free_model_parts  0x8c11b884
 * frees the seven parts of a0 and a0 itself through allocator a1
 * called by: asr_sub_10abf4, asr_sub_10abfa
 */
u32 asr_free_model_parts(u32 *a0, int a1) {
    u8 *puVar1;
    u32 uVar2;

    puVar1 = (&asr_free_obj);
    asr_free_obj(*a0);
    (*(code *)puVar1)(a0[1], a1);
    (*(code *)puVar1)(a0[3], a1);
    (*(code *)puVar1)(a0[4], a1);
    (*(code *)puVar1)(a0[5], a1);
    asr_free_obj_b(a0[6], a1);
    (*(code *)puVar1)(a0[2], a1);
    /* WARNING: Could not recover jumptable at 0x8c11b900. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(a1 + 0x18))(a1, a0);
    return uVar2;
}

/*
 * asr_sub_11b88c  0x8c11b88c
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11b88c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    u32 *unaff_r13;
    int unaff_r14;

    puVar1 = (&asr_free_obj);
    asr_free_obj(*unaff_r13, a1);
    (*(code *)puVar1)(unaff_r13[1], unaff_r14, a2, a3);
    (*(code *)puVar1)(unaff_r13[3], unaff_r14, a2, a3);
    (*(code *)puVar1)(unaff_r13[4], unaff_r14, a2, a3);
    (*(code *)puVar1)(unaff_r13[5], unaff_r14, a2, a3);
    asr_free_obj_b(unaff_r13[6], unaff_r14);
    (*(code *)puVar1)(unaff_r13[2], unaff_r14, a2, a3);
    /* WARNING: Could not recover jumptable at 0x8c11b900. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(unaff_r14 + 0x18))();
    return uVar2;
}

/*
 * asr_sub_11b93c  0x8c11b93c
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_10a308, asr_sub_10a564
 */
u32 asr_sub_11b93c(u32 *a0, int a1) {
    u32 r6;
    u32 r7;
    int *piVar1;
    int iVar2;
    u32 uVar3;
    u32 ain0;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    u32 *ar7_00;
    u32 *puVar7;
    u32 uVar8;
    float *pfVar9;
    int *piVar10;
    int ar4_00;
    int *piVar11;
    int *ar4_01;
    int *ar4_02;
    float fVar12;
    u64 in_dr2;
    u64 uVar13;
    float fVar14;
    float fVar15;
    u64 in_xd2;
    char cVar16;

    uVar3 = a0[1];
    piVar10 = (int *)*a0;
    ain0 = a0[3];
    ar4_02 = (int *)a0[2];
    ar4_00 = a0[6];
    piVar11 = (int *)a0[5];
    ar4_01 = (int *)a0[4];
    asr_sub_1129e4(ar4_02, uVar3, r6, r7, ain0);
    ar4_01[3] = a1;
    ar4_01[4] = ar4_01[2] * 4 + a1;
    asr_sub_112658(ar4_01, uVar3, r6, r7, ain0);
    asr_sub_112680(ar4_01);
    cVar16 = '\0';
    iVar2 = asr_sub_112958(ar4_02, ain0, ar4_01);
    if (iVar2 == 0) {
        iVar2 = *(int *)(ar4_00 + 4);
        while (iVar2 != 0) {
            iVar2 = iVar2 + -1;
            *(int *)(*(int *)(ar4_00 + 0xc) + iVar2 * 4) = iVar2;
        }
        do {
            uVar8 = ar4_02[1];
            pfVar5 = (float *)(*piVar11 * 4 + piVar11[3]);
            pfVar6 = (float *)(*ar4_02 * uVar8 * 4 + ar4_02[3]);
            ar7_00 = (u32 *)(*ar4_01 * 4 + ar4_01[3] + (*ar4_01 - uVar8) * -4);
            for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                ar7_00 = ar7_00 + -1;
                if (cVar16 == '\0') {
                    in_dr2 = (u64)*ar7_00;
                } else {
                    in_xd2 = *(u64 *)ar7_00;
                }
                pfVar4 = (float *)((uVar8 - 1) * *ar4_02 * 4 + ar4_02[3] + uVar8 * 4 + -4);
                if (cVar16 == '\0') {
                    fVar15 = *pfVar4;
                    pfVar5 = pfVar5 + -1;
                    *pfVar5 = (float)in_dr2;
                } else {
                    fVar15 = (float)((u64) * (u64 *)pfVar4 >> 0x20);
                    pfVar5 = pfVar5 + -2;
                    *(u64 *)pfVar5 = in_xd2;
                }
                pfVar9 = pfVar5;
                for (pfVar4 = pfVar4 + *ar4_02; fVar12 = (float)in_dr2, pfVar4 < pfVar6; pfVar4 = pfVar4 + *ar4_02) {
                    pfVar9 = pfVar9 + 1;
                    if (cVar16 == '\0') {
                        uVar13 = CONCAT44(*pfVar4, *pfVar9);
                    } else {
                        in_xd2 = *(u64 *)pfVar9;
                        uVar13 = *(u64 *)pfVar4;
                    }
                    cVar16 = '\0';
                    fVar14 = (float)((u64)uVar13 >> 0x20) * (float)uVar13;
                    fVar12 = *pfVar5 - fVar14;
                    in_dr2 = CONCAT44(fVar14, fVar12);
                    *pfVar5 = fVar12;
                }
                if (cVar16 == '\0') {
                    fVar12 = *pfVar5;
                } else {
                    in_xd2 = *(u64 *)pfVar5;
                }
                cVar16 = '\0';
                *pfVar5 = fVar12 / fVar15;
                in_dr2 = 0;
                if ((0.0 < *pfVar5) && (2 < uVar8))
                    break;
                cVar16 = '\0';
            }
            if (uVar8 != 0) {
                pfVar5 = (float *)(uVar8 - 1);
                pfVar6 = pfVar5;
                iVar2 = asr_sub_112734(ar4_02, ar4_01, pfVar5);
                if (iVar2 != 0)
                    goto LAB_8c11ba88;
                *piVar11 = *piVar11 + -1;
                cVar16 = '\0';
                asr_sub_1125e8(ar4_00, pfVar5);
            }
        } while (2 < uVar8);
        cVar16 = '\0';
        asr_sub_112a02(ar4_01, pfVar5, pfVar6, ar7_00, ain0);
        pfVar5 = (float *)piVar11[3];
        pfVar6 = pfVar5 + *piVar11;
        piVar1 = *(int **)(ar4_00 + 0xc);
        for (; pfVar5 < pfVar6; pfVar5 = pfVar5 + 1) {
            pfVar4 = (float *)ar4_01[3];
            puVar7 = (u32 *)(*piVar10 * *piVar1 * 4 + piVar10[3]);
            uVar8 = 0;
            if (ar4_01[2] != 0) {
                do {
                    uVar8 = uVar8 + 1;
                    if (cVar16 == '\0') {
                        fVar15 = *pfVar5;
                        uVar3 = *puVar7;
                        puVar7 = puVar7 + 1;
                        uVar13 = CONCAT44(*pfVar4, uVar3);
                    } else {
                        fVar15 = (float)((u64) * (u64 *)pfVar5 >> 0x20);
                        puVar7 = puVar7 + 2;
                        uVar13 = *(u64 *)pfVar4;
                    }
                    cVar16 = '\0';
                    *pfVar4 = fVar15 * (float)uVar13 + (float)((u64)uVar13 >> 0x20);
                    pfVar4 = pfVar4 + 1;
                } while (uVar8 < (u32)ar4_01[2]);
            }
            piVar1 = piVar1 + 1;
        }
        iVar2 = piVar10[1];
        uVar3 = 0;
        ar4_02[1] = iVar2;
        *piVar11 = iVar2;
        *(int *)(ar4_00 + 4) = iVar2;
    } else {
    LAB_8c11ba88:
        uVar3 = 1;
    }
    return uVar3;
}

/*
 * asr_sub_11bb54  0x8c11bb54
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_reset_weights
 */
u32 asr_sub_11bb54(int a0) {
    u32 *puVar1;
    int iVar2;

    puVar1 = *(u32 **)(a0 + 0x38);
    iVar2 = *(int *)(a0 + 0x54);
    if (puVar1 < puVar1 + iVar2) {
        do {
            *puVar1 = 0x3f800000;
            puVar1 = puVar1 + 1;
        } while (puVar1 < (u32 *)(*(int *)(a0 + 0x38) + iVar2 * 4));
    }
    puVar1 = *(u32 **)(a0 + 0x34);
    if (puVar1 < puVar1 + iVar2) {
        do {
            *puVar1 = 0x3f800000;
            puVar1 = puVar1 + 1;
        } while (puVar1 < (u32 *)(*(int *)(a0 + 0x34) + iVar2 * 4));
    }
    *(u16 *)(a0 + 0x28) = 0;
    return 0x28;
}

/*
 * asr_reset_weights  0x8c11bb94
 * fills the weight array at +0x2c with 1.0 and resets +0x2a
 * called by: asr_sub_11c210, asr_sub_11c2b8
 */
u32 asr_reset_weights(int a0, u32 unused_a1, u32 a2) {
    u32 uVar1;
    u32 *ar5_00;
    int ar7_00;

    ar5_00 = *(u32 **)(a0 + 0x2c);
    ar7_00 = *(int *)(a0 + 0x54);
    if (ar5_00 < ar5_00 + ar7_00 + *(int *)(a0 + 0x54)) {
        do {
            *ar5_00 = 0x3f800000;
            ar5_00 = ar5_00 + 1;
        } while (ar5_00 < (u32 *)(*(int *)(a0 + 0x2c) + ar7_00 * 4 + *(int *)(a0 + 0x54) * 4));
    }
    *(u16 *)(a0 + 0x2a) = 0;
    uVar1 = asr_sub_11bb54(a0);
    return uVar1;
}

/*
 * asr_sub_11bbd4  0x8c11bbd4
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11c210
 */
u32 asr_sub_11bbd4(int a0, u32 *a1) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 uVar5;
    int ar6_00;
    int iVar6;
    u32 *ar5_00;
    int *piVar7;
    s64 in_dr0;
    float fVar8;
    float in_fr15;
    char cVar9;

    puVar3 = a1 + 2;
    uVar5 = *(u32 *)(a0 + 0x54);
    *(short *)(a0 + 0x28) = (short)*a1;
    ar6_00 = uVar5 * 4;
    *(short *)(a0 + 0x2a) = (short)a1[1];
    memmove(*(u32 *)(a0 + 0x2c), puVar3, ar6_00);
    memmove(*(u32 *)(a0 + 0x34), puVar3 + uVar5, ar6_00);
    ar5_00 = puVar3 + uVar5 + uVar5;
    cVar9 = '\0';
    puVar3 = ar5_00;
    memmove(*(u32 *)(a0 + 0x38), ar5_00, ar6_00);
    uVar2 = 0;
    piVar7 = ar5_00 + uVar5;
    uVar4 = 0;
    iVar6 = 0;
    if (cVar9 == '\0') {
        in_fr15 = 0.5;
    }
    if (uVar5 != 0) {
        do {
            fVar8 = (float)((u64)in_dr0 >> 0x20);
            iVar1 = *(int *)(a0 + 0x30);
            thunk_FUN_8c013dfc();
            uVar4 = uVar4 + 1;
            in_dr0 = (u64)(u32)(fVar8 * in_fr15) << 0x20;
            *(float *)(iVar1 + iVar6) = fVar8 * in_fr15;
            iVar6 = iVar6 + 4;
        } while (uVar4 < uVar5);
    }
    *(int *)(a0 + 0x44) = *piVar7 * 4 + *(int *)(a0 + 0x3c);
    *(int *)(a0 + 0x48) = piVar7[1] * 4 + *(int *)(a0 + 0x3c);
    uVar2 = memmove(*(u32 *)(a0 + 0x3c), piVar7 + 2, uVar5 * (*(u16 *)(a0 + 0x4c) + 1) * 4);
    return uVar2;
}

/*
 * asr_sub_11bbec  0x8c11bbec
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11bbec(u32 *a0, u32 a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    int in_r0;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    int a5;
    int a6;
    u32 uVar6;
    int iVar7;
    int unaff_r13;
    int a5_00;
    int *piVar8;
    int unaff_r14;
    u8 *puVar9;
    double in_dr0;
    float in_fr15;
    u32 in_fr14;
    u32 in_PR;
    u8 in_FPSCR_CAUSE;
    u8 bVar10;
    u8 in_FPSCR_DN;
    u8 bVar11;
    u8 in_FPSCR_PR;
    u8 bVar12;
    u8 in_FPSCR_SZ;
    u8 bVar13;
    u8 auStack_c[4];
    u8 auStack_8[4];

    puVar1 = (&memmove);

    puVar9 = auStack_8;

    *(u32 *)(puVar9 + -4) = in_PR;
    uVar6 = *(u32 *)(in_r0 + unaff_r14);
    *(short *)(unaff_r14 + 0x28) = (short)*a0;
    iVar7 = uVar6 * 4;
    *(short *)(unaff_r14 + 0x2a) = (short)a0[1];
    (*(code *)puVar1)(*(u32 *)(unaff_r14 + 0x2c), a1, iVar7, a3);
    uVar3 =
        ((u32)in_FPSCR_CAUSE << 0xc | (u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) &
        0xffe7ffff;
    bVar10 = 0;
    bVar11 = 0;
    bVar12 = (u8)((uVar3 & 0x80000) >> 0x13);
    bVar13 = (u8)((uVar3 & 0x100000) >> 0x14);
    (*(code *)puVar1)(*(u32 *)(unaff_r14 + 0x34), unaff_r13 + iVar7, iVar7, a3);
    a5_00 = unaff_r13 + iVar7 + iVar7;
    uVar3 = ((u32)bVar10 << 0xc | (u32)bVar11 << 0x12 | (u32)bVar12 << 0x13 | (u32)bVar13 << 0x14) & 0xffe7ffff;
    bVar10 = 0;
    bVar11 = 0;
    bVar12 = (u8)((uVar3 & 0x80000) >> 0x13);
    bVar13 = (u8)((uVar3 & 0x100000) >> 0x14);
    a5 = a5_00;
    a6 = iVar7;
    (*(code *)puVar1)(*(u32 *)(unaff_r14 + 0x38), a5_00, iVar7, a3);
    puVar2 = (&thunk_FUN_8c013dfc);
    uVar5 = 0;
    piVar8 = (int *)(a5_00 + iVar7);
    uVar3 = 0;
    iVar7 = 0;
    if (bVar13 == 0) {
        in_fr15 = (float)g_8c11bdfc;
    }
    if (uVar6 != 0) {
        do {
            *(int *)(puVar9 + -8) = *(int *)(unaff_r14 + 0x30) + iVar7;
            uVar4 = ((u32)bVar10 << 0xc | (u32)bVar11 << 0x12 | (u32)bVar12 << 0x13 | (u32)bVar13 << 0x14) & 0xffe7ffff;
            bVar10 = 0;
            bVar11 = 0;
            bVar12 = (u8)((uVar4 & 0x80000) >> 0x13);
            bVar13 = (u8)((uVar4 & 0x100000) >> 0x14);
            (*(code *)puVar2)(uVar5, a5, a6, a3);
            uVar3 = uVar3 + 1;
            uVar4 = ((u32)bVar10 << 0xc | (u32)bVar11 << 0x12 | (u32)bVar12 << 0x13 | (u32)bVar13 << 0x14) & 0xffe7ffff;
            bVar10 = 0;
            bVar11 = 0;
            bVar12 = (u8)((uVar4 & 0x80000) >> 0x13);
            bVar13 = (u8)((uVar4 & 0x100000) >> 0x14);
            if (bVar12 == 0) {
                in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) * in_fr15, SUB84(in_dr0, 0));
            } else {
                in_dr0 = in_dr0 * (double)CONCAT44(in_fr14, in_fr15);
            }
            if (bVar13 == 0) {
                *(int *)*(double **)(puVar9 + -8) = (int)((u64)in_dr0 >> 0x20);
            } else {
                **(double **)(puVar9 + -8) = in_dr0;
            }
            iVar7 = iVar7 + 4;
        } while (uVar3 < uVar6);
    }
    *(int *)(unaff_r14 + 0x44) = *piVar8 * 4 + *(int *)(unaff_r14 + 0x3c);
    *(int *)(unaff_r14 + 0x48) = piVar8[1] * 4 + *(int *)(unaff_r14 + 0x3c);
    uVar5 = (*(code *)puVar1)(*(u32 *)(unaff_r14 + 0x3c), piVar8 + 2, uVar6 * (*(u16 *)(unaff_r14 + 0x4c) + 1) * 4, a3);
    return uVar5;
}

/*
 * asr_sub_11bcb8  0x8c11bcb8
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11c210
 */
u32 asr_sub_11bcb8(int a0, u32 *a1) {
    u8 *puVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 *puVar5;

    puVar1 = (&memmove);
    puVar5 = a1 + 2;
    iVar3 = *(int *)(a0 + 0x54);
    iVar4 = iVar3 * 4;
    *a1 = (u32) * (u16 *)(a0 + 0x28);
    a1[1] = (u32) * (u16 *)(a0 + 0x2a);
    (*(code *)puVar1)(puVar5, *(u32 *)(a0 + 0x2c), iVar4);
    puVar5 = puVar5 + iVar3;
    (*(code *)puVar1)(puVar5, *(u32 *)(a0 + 0x34), iVar4);
    (*(code *)puVar1)(puVar5 + iVar3, *(u32 *)(a0 + 0x38), iVar4);
    iVar4 = *(int *)(a0 + 0x44) - *(int *)(a0 + 0x3c);
    puVar5 = puVar5 + iVar3 + iVar3;
    if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
    }
    *puVar5 = iVar4 >> 2;
    iVar4 = *(int *)(a0 + 0x48) - *(int *)(a0 + 0x3c);
    if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
    }
    puVar5[1] = iVar4 >> 2;
    uVar2 = (*(code *)puVar1)(puVar5 + 2, *(u32 *)(a0 + 0x3c), iVar3 * (*(u16 *)(a0 + 0x4c) + 1) * 4);
    return uVar2;
}

/*
 * asr_sub_11bccc  0x8c11bccc
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11bccc(u32 *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    int in_r0;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int ar6_00;
    int unaff_r13;
    int a4;
    int *piVar5;
    int unaff_r14;

    puVar1 = (&memmove);
    iVar4 = *(int *)(in_r0 + unaff_r14);
    ar6_00 = iVar4 * 4;
    *a0 = (u32) * (u16 *)(unaff_r14 + 0x28);
    a0[1] = (u32) * (u16 *)(unaff_r14 + 0x2a);
    (*(code *)puVar1)(unaff_r13, *(u32 *)(unaff_r14 + 0x2c), ar6_00, a3);
    (*(code *)puVar1)(unaff_r13 + ar6_00, *(u32 *)(unaff_r14 + 0x34), ar6_00, a3);
    a4 = unaff_r13 + ar6_00 + ar6_00;
    (*(code *)puVar1)(a4, *(u32 *)(unaff_r14 + 0x38), ar6_00, a3);
    iVar3 = *(int *)(unaff_r14 + 0x44) - *(int *)(unaff_r14 + 0x3c);
    piVar5 = (int *)(a4 + ar6_00);
    if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
    }
    *piVar5 = iVar3 >> 2;
    iVar3 = *(int *)(unaff_r14 + 0x48) - *(int *)(unaff_r14 + 0x3c);
    if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
    }
    piVar5[1] = iVar3 >> 2;
    uVar2 = (*(code *)puVar1)(piVar5 + 2, *(u32 *)(unaff_r14 + 0x3c), iVar4 * (*(u16 *)(unaff_r14 + 0x4c) + 1) * 4, a3);
    return uVar2;
}

/*
 * asr_sub_11bd6c  0x8c11bd6c
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11c0e4
 */
u32 asr_sub_11bd6c(int a0, u32 a1, float *a2, float *a3) {
    u16 uVar1;
    u16 uVar2;
    u64 uVar3;
    float *pfVar4;
    int iVar5;
    float *pfVar6;
    float *pfVar7;
    u32 a4_00;
    float *pfVar8;
    float *pfVar9;
    float *pfVar10;
    u16 uVar11;
    float *pfVar12;
    int ar4_00;
    float *pfVar13;
    float *pfVar14;
    u32 uVar15;
    u64 in_dr0;
    float fVar16;
    float fVar17;
    float fVar18;
    u64 in_dr4;
    s64 lVar19;
    float fVar20;
    float in_fr15;
    float fVar21;
    char cVar22;
    u64 *in_stack_00000000;
    u16 uStack_48;

    cVar22 = '\0';
    iVar5 = *(int *)(a0 + 0x54);
    ar4_00 = *(int *)(a0 + 0x44);
    pfVar6 = *(float **)(a0 + 0x40);
    pfVar4 = *(float **)(a0 + 0x3c);
    uVar1 = *(u16 *)(a0 + 0x4c);
    uStack_48 = *(u16 *)(a0 + 0x2a);
    uVar11 = *(u16 *)(a0 + 0x28);
    fVar21 = *(float *)(a0 + 0x5c);
    lVar19 = (u64) * (u32 *)(a0 + 0x60) << 0x20;
    pfVar12 = *(float **)(a0 + 0x2c);
    pfVar14 = (float *)(iVar5 * 4);
    pfVar9 = a2;
    pfVar10 = pfVar14;
    pfVar8 = a3;
    memmove(ar4_00, a2, pfVar14);
    fVar17 = (float)((u64)lVar19 >> 0x20);
    fVar20 = (float)in_dr4;
    pfVar13 = (float *)(ar4_00 + (int)pfVar14);
    if ((float *)(ar4_00 + (int)pfVar14) == pfVar6) {
        pfVar13 = pfVar4;
    }
    if (cVar22 == '\0') {
        in_fr15 = 0.5;
    }
    if ((char)a1 == '\0') {
        if (uStack_48 == 0) {
            pfVar6 = *(float **)(a0 + 0x30);
            pfVar7 = a2;
            for (pfVar4 = pfVar12; pfVar4 < (float *)((int)pfVar14 + (int)pfVar12); pfVar4 = pfVar4 + 1) {
                if (cVar22 == '\0') {
                    *pfVar4 = *pfVar7;
                    in_dr4 = in_dr4 & 0xffffffff;
                } else {
                    *(u64 *)pfVar4 = *(u64 *)pfVar7;
                    in_dr4 = *(u64 *)pfVar7;
                }
                thunk_FUN_8c013dfc();
                fVar17 = (float)((u64)lVar19 >> 0x20);
                fVar20 = (float)in_dr4;
                cVar22 = '\0';
                fVar16 = (float)((u64)in_dr0 >> 0x20) * in_fr15;
                in_dr0 = CONCAT44(fVar16, (int)in_dr0);
                *pfVar6 = fVar16;
                pfVar7 = pfVar7 + 1;
                pfVar6 = pfVar6 + 1;
            }
        }
        if ((u32)uVar11 <= (u32)uVar1) {
            uVar11 = uVar11 + 1;
        }
        a4_00 = uVar1 + 1;
        if (uVar11 == a4_00) {
            if ((float)uStack_48 < fVar17) {
                uStack_48 = uStack_48 + 1;
                fVar17 = (float)uStack_48;
            }
            lVar19 = (u64)(u32)(1.0 / fVar17) << 0x20;
            pfVar6 = *(float **)(a0 + 0x30);
            pfVar7 = pfVar13;
            for (pfVar4 = pfVar12; cVar22 = '\0', pfVar4 < (float *)((int)pfVar14 + (int)pfVar12);
                 pfVar4 = pfVar4 + 1) {
                fVar20 = *pfVar4;
                fVar17 = *pfVar7 - fVar20;
                if (fVar20 < fVar17) {
                    fVar17 = *pfVar4;
                }
                uVar15 = (u32)in_dr0;
                *pfVar4 = fVar17 * (float)((u64)lVar19 >> 0x20) + *pfVar4;
                thunk_FUN_8c013dfc();
                in_dr0 = CONCAT44(fVar17 * in_fr15, uVar15);
                *pfVar6 = fVar17 * in_fr15;
                pfVar6 = pfVar6 + 1;
                pfVar7 = pfVar7 + 1;
            }
        }
    } else {
        uVar11 = 0;
    }
    if (cVar22 == '\0') {
        lVar19 = CONCAT44(0x3f800000, fVar20);
    } else {
        lVar19 = 0x358637bd3f800000;
    }
    if (uStack_48 != 0) {
        fVar17 = (float)((u64)lVar19 >> 0x20);
        if (cVar22 == '\0') {
            lVar19 = (u64)(u32)fVar17 << 0x20;
        }
        pfVar8 = *(float **)(a0 + 0x34);
        pfVar4 = (float *)((int)pfVar14 + (int)pfVar8);
        uVar3 = (u64)lVar19 >> 0x20;
        fVar20 = *(float *)(a0 + 0x68);
        pfVar10 = *(float **)(a0 + 0x50);
        pfVar9 = *(float **)(a0 + 0x38);
        for (; pfVar8 < pfVar4; pfVar8 = pfVar8 + 1) {
            fVar16 = *pfVar10;
            in_dr0 = CONCAT44(fVar16, (int)in_dr0);
            pfVar10 = pfVar10 + 1;
            fVar18 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            *pfVar8 = fVar21 * (fVar16 * fVar18 + fVar17);
        }
        pfVar10 = *(float **)(a0 + 0x38);
        pfVar9 = (float *)((int)pfVar14 + (int)pfVar10);
        lVar19 = CONCAT44(fVar17, 0x358637bd);
        pfVar8 = a2;
        for (; pfVar10 < pfVar9; pfVar10 = pfVar10 + 1) {
            fVar16 = *pfVar8;
            pfVar8 = pfVar8 + 1;
            fVar17 = *pfVar12;
            in_dr0 = CONCAT44(fVar17, (int)in_dr0);
            pfVar12 = pfVar12 + 1;
            *pfVar10 = (fVar16 + 1e-06) / (fVar17 * fVar20 + 1e-06);
        }
        pfVar12 = *(float **)(a0 + 0x34);
        pfVar9 = (float *)((int)pfVar14 + (int)pfVar12);
        pfVar10 = *(float **)(a0 + 0x38);
        for (; cVar22 = '\0', pfVar12 < pfVar9; pfVar12 = pfVar12 + 1) {
            fVar17 = *pfVar10;
            in_dr0 = CONCAT44(fVar17, (int)in_dr0);
            pfVar10 = pfVar10 + 1;
            *pfVar12 = fVar17 * ((float)uVar3 - fVar21) + *pfVar12;
        }
    }
    if (uStack_48 == 0) {
        pfVar12 = *(float **)(a0 + 0x50);
        pfVar14 = (float *)((int)pfVar14 + (int)pfVar12);
        for (; pfVar12 < pfVar14; pfVar12 = pfVar12 + 1) {
            if (cVar22 == '\0') {
                *pfVar12 = (float)((u64)lVar19 >> 0x20);
            } else {
                *(s64 *)pfVar12 = lVar19;
            }
        }
    } else {
        pfVar12 = *(float **)(a0 + 0x34);
        if (cVar22 == '\0') {
            fVar17 = *(float *)(a0 + 0x6c);
        } else {
            fVar17 = (float)((u64) * (u64 *)(a0 + 0x6c) >> 0x20);
        }
        pfVar10 = (float *)((int)pfVar14 + (int)pfVar12);
        pfVar14 = *(float **)(a0 + 0x50);
        for (; pfVar12 < pfVar10; pfVar12 = pfVar12 + 1) {
            if (cVar22 == '\0') {
                lVar19 = CONCAT44((int)((u64)lVar19 >> 0x20), *pfVar12);
            }
            fVar20 = (float)((u64)lVar19 >> 0x20);
            if ((float)lVar19 <= fVar20) {
                fVar21 = 0.0;
            } else {
                fVar21 = fVar20 - fVar20 / (float)lVar19;
            }
            cVar22 = '\0';
            fVar21 = fVar21 * fVar21;
            lVar19 = CONCAT44(fVar20, fVar21);
            fVar20 = fVar17;
            if (fVar17 < fVar21) {
                fVar20 = fVar21;
            }
            *pfVar14 = fVar20;
            pfVar14 = pfVar14 + 1;
        }
    }
    uVar2 = *(u16 *)(a0 + 0x58);
    for (pfVar9 = a3; pfVar9 < a3 + uVar2; pfVar9 = pfVar9 + 1) {
        thunk_FUN_8c013dfc();
        fVar17 = (float)((u64)in_dr0 >> 0x20) * in_fr15;
        in_dr0 = CONCAT44(fVar17, (int)in_dr0);
        *pfVar9 = fVar17;
    }
    for (; pfVar9 < a3 + iVar5; pfVar9 = pfVar9 + 1) {
        thunk_FUN_8c013dfc();
        fVar17 = (float)((u64)in_dr0 >> 0x20) * in_fr15;
        in_dr0 = CONCAT44(fVar17, (int)in_dr0);
        *pfVar9 = fVar17;
    }
    cVar22 = '\0';
    thunk_FUN_8c013dfc();
    if (cVar22 == '\0') {
        *(int *)in_stack_00000000 = (int)((u64)in_dr0 >> 0x20);
    } else {
        *in_stack_00000000 = in_dr0;
    }
    *(u16 *)(a0 + 0x4c) = uVar1;
    *(u16 *)(a0 + 0x2a) = uStack_48;
    *(u16 *)(a0 + 0x28) = uVar11;
    *(float **)(a0 + 0x44) = pfVar13;
    return 0x44;
}

/*
 * asr_sub_11c0e4  0x8c11c0e4
 * area name: in the asr library code range
 */
u32 asr_sub_11c0e4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    char *pcVar3;
    u32 uVar4;
    u32 a7;
    int *piVar5;
    u32 uVar6;

    if ((*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01') &&
        (uVar2 = asr_sub_112170(*(u32 *)(a0 + 0xc), 2), (uVar2 & 0xff) != 0)) {
        pcVar3 = (char *)(*(code *)(&mring_read_advance))(*(u32 *)(*(int *)(a0 + 0xc) + 8),
                                                          *(u32 *)(*(int *)(a0 + 0xc) + 0xc), a2, a3);
        uVar6 = (*(u32 **)(a0 + 0xc))[1];
        uVar4 = mring_read_advance(**(u32 **)(a0 + 0xc), uVar6, a2, a3);
        puVar1 = (&mring_write_advance);
        mring_write_advance(**(u32 **)(a0 + 0x10));
        a7 = (*(code *)puVar1)(*(u32 *)(*(int *)(a0 + 0x10) + 4), uVar6, a2, a3);
        uVar6 = (*(code *)puVar1)(*(u32 *)(*(int *)(a0 + 0x10) + 8), uVar6, a2, a3);
        asr_sub_11bd6c(a0, (int)*pcVar3, uVar4, a7);
        memmove(uVar6, *(u32 *)(a0 + 0x30), *(int *)(a0 + 0x54) << 2);
    }
    piVar5 = *(int **)(a0 + 0xc);
    if ((*(int *)(piVar5[1] * 4 + *(int *)(*piVar5 + 0x40)) == *(int *)(*piVar5 + 0x3c)) ||
        (*(int *)(*(int *)(piVar5[2] + 0x40) + piVar5[3] * 4) == *(int *)(piVar5[2] + 0x3c))) {
        uVar4 = 0;
    } else {
        uVar4 = 1;
    }
    return uVar4;
}

/*
 * vcall_slot6  0x8c11c1d8
 * calls virtual slot 6 of the object passed in
 * called by: asr_sub_11c210
 */
u32 vcall_slot6(int *a0) {
    u32 uVar1;

    /* WARNING: Could not recover jumptable at 0x8c11c1ea. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*a0 + 0x18))(*a0, a0[0xf]);
    return uVar1;
}

/*
 * asr_sub_11c210  0x8c11c210
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11c210(u32 unused_a0, u32 unused_a1, int a2, int *a3) {
    int in_r0;
    int unaff_r14;
    char in_T;

    if (in_T == '\x01') {
        if (a2 != 0) {
            asr_sub_11bcb8(unaff_r14, *a3 + a2);
        }
        *a3 = *a3 + ((*(u16 *)(unaff_r14 + 0x4c) + 4) * *(int *)(unaff_r14 + 0x54) + 4) * 4;
    } else if (in_r0 == 2) {
        if (a2 == 0) {
            asr_reset_weights(unaff_r14, unused_a1, 0);
        } else {
            asr_sub_11bbd4(unaff_r14, *a3 + a2);
            *a3 = *a3 + ((*(u16 *)(unaff_r14 + 0x4c) + 4) * *(int *)(unaff_r14 + 0x54) + 4) * 4;
        }
    } else {
        if (in_r0 != 0xff) {
            return 0;
        }
        vcall_slot6(unaff_r14);
        asr_sub_120668(unaff_r14, unused_a1, a2, a3);
    }
    return 1;
}

/*
 * asr_sub_11c2b8  0x8c11c2b8
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11c2b8(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u16 uVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    u32 uVar6;
    int *unaff_r14;
    u32 extraout_fr1;
    u32 extraout_fr1_00;
    u32 extraout_fr1_01;
    u32 extraout_fr1_02;
    float extraout_fr0;
    float extraout_fr0_00;
    float extraout_fr0_01;
    int extraout_fr0_02;
    int extraout_fr0_03;
    int extraout_fr0_04;
    int extraout_fr0_05;
    int a5;
    char cVar7;

    iVar5 = *unaff_r14;
    asr_state_has_event(a0, 8, a2);
    uVar6 = (int)extraout_fr0 & 0xffff;
    unaff_r14[0x15] = uVar6;
    *(u16 *)(*(int *)unaff_r14[4] + 0xc) = 4;
    uVar1 = (u16)(uVar6 << 2);
    *(u16 *)(*(int *)(unaff_r14[4] + 4) + 0xc) = uVar1;
    *(u16 *)(*(int *)(unaff_r14[4] + 8) + 0xc) = uVar1;
    asr_state_has_event(unaff_r14, 6, a2);
    *(short *)(unaff_r14 + 0x16) = (short)(int)extraout_fr0_00 + -1;
    asr_state_has_event(unaff_r14, 1, a2);
    cVar7 = '\0';
    *(short *)(unaff_r14 + 0x13) = (short)(int)extraout_fr0_01;
    asr_state_has_event(unaff_r14, 2, a2);
    if (cVar7 == '\0') {
        unaff_r14[0x1b] = extraout_fr0_02;
    } else {
        *(u64 *)(unaff_r14 + 0x1b) = CONCAT44(extraout_fr0_02, extraout_fr1);
    }
    cVar7 = '\0';
    asr_state_has_event(unaff_r14, 3, a2);
    if (cVar7 == '\0') {
        unaff_r14[0x1a] = extraout_fr0_03;
    } else {
        *(u64 *)(unaff_r14 + 0x1a) = CONCAT44(extraout_fr0_03, extraout_fr1_00);
    }
    cVar7 = '\0';
    asr_state_has_event(unaff_r14, 4, a2);
    if (cVar7 == '\0') {
        unaff_r14[0x18] = extraout_fr0_04;
    } else {
        *(u64 *)(unaff_r14 + 0x18) = CONCAT44(extraout_fr0_04, extraout_fr1_01);
    }
    cVar7 = '\0';
    asr_state_has_event(unaff_r14, 7, a2);
    if (cVar7 == '\0') {
        unaff_r14[0x17] = extraout_fr0_05;
    } else {
        *(u64 *)(unaff_r14 + 0x17) = CONCAT44(extraout_fr0_05, extraout_fr1_02);
    }
    uVar4 = 4;
    a5 = uVar6 * (*(u16 *)(unaff_r14 + 0x13) + 6);
    iVar5 = (**(code **)(iVar5 + 0x14))(iVar5, a5, 4, a3);
    unaff_r14[0xf] = iVar5;
    unaff_r14[0x11] = iVar5;
    iVar3 = uVar6 * 4;
    iVar5 = uVar6 * (*(u16 *)(unaff_r14 + 0x13) + 1) * 4 + unaff_r14[0xf];
    unaff_r14[0x10] = iVar5;
    unaff_r14[0xb] = iVar5;
    iVar2 = iVar5 + iVar3 + iVar3;
    unaff_r14[0xc] = iVar5 + iVar3;
    iVar5 = iVar2 + iVar3;
    unaff_r14[0xd] = iVar2;
    unaff_r14[0xe] = iVar5;
    unaff_r14[0x14] = iVar3 + iVar5;
    if (unaff_r14[0xf] != 0) {
        asr_reset_weights(unaff_r14, a5, uVar4);
        return 0;
    }
    uVar4 = asr_fsm_set_result(unaff_r14, 0x66, uVar4, a3);
    return uVar4;
}

/*
 * asr_sub_11c412  0x8c11c412
 * area name: in the asr library code range
 */
u32 asr_sub_11c412(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_sub_120580))(a0, a1, 2, 3, (&asr_sub_11c0e4), (&DATA_8c11c2b0), (&DATA_8c11c204), 0x70);
    return uVar1;
}

/*
 * asr_sub_11c47c  0x8c11c47c
 * area name: in the asr library code range
 */
u32 asr_sub_11c47c(u32 a0, u32 unused_a1, u32 a2) {
    int in_r0;
    u32 uVar1;
    u16 in_r3;
    u8 unaff_r12;
    int unaff_r14;

    *(u16 *)(in_r0 + unaff_r14) = in_r3;
    *(u16 *)(unaff_r14 + 0x58) = (u16)(u8)a2;
    if (unaff_r12 == 0) {
    LAB_8c11c4a6:
        if ((u8)a2 != 0) {
            uVar1 = asr_calloc_wrap(a0, (u32)(u8)a2, 4);
            *(u32 *)(unaff_r14 + 0x5c) = uVar1;
            if (*(int *)(unaff_r14 + 0x5c) == 0)
                goto LAB_8c11c4ca;
        }
        uVar1 = 0;
    } else {
        uVar1 = asr_calloc_wrap(a0, (u32)unaff_r12, 8);
        *(u32 *)(unaff_r14 + 0x54) = uVar1;
        if (*(int *)(unaff_r14 + 0x54) != 0)
            goto LAB_8c11c4a6;
    LAB_8c11c4ca:
        uVar1 = 1;
    }
    return uVar1;
}

/*
 * asr_sub_11c5e4  0x8c11c5e4
 * area name: in the asr library code range
 * called by: asr_sub_11c86c, asr_sub_11ec7c
 */
u32 *asr_sub_11c5e4(int a0, u32 *a1, int a2, int a3, u32 s0) {
    int *piVar1;
    u32 *puVar2;
    int *piVar3;
    int *piVar4;
    int iVar5;
    int a6;
    int a7;
    u32 uVar6;
    int iVar7;
    u32 *puVar8;
    int iVar9;
    bool bVar10;
    u32 uVar11;

    iVar7 = 0;
    iVar5 = **(int **)(0x230 + a0);
    a6 = a2;
    a7 = a3;
    piVar1 = (int *)(**(code **)(*(int *)(0xfc + a0) + 0x14))(0xc, 0xf4 + a0, a2, a3);
    *a1 = piVar1;
    puVar2 = (u32 *)(int)0x13c;
    if (*(u32 *)(a0 + 0x78) < *(u32 *)((int)puVar2 + a0)) {
        piVar1[2] = 2;
    } else {
        piVar1[2] = 0;
    }
    if (a2 == 0) {
        *piVar1 = 0;
        piVar1[1] = 0;
    } else {
        bVar10 = true;
        iVar9 = a2;
        while (bVar10) {
            iVar9 = *(int *)(iVar9 + 0x10);
            bVar10 = iVar9 != 0;
            iVar7 = iVar7 + 1;
        }
        piVar3 = (int *)(**(code **)(*(int *)(0xfc + a0) + 0x14))(iVar7 * 0x18, 0xf4 + a0, a6, a7);
        *piVar1 = iVar7;
        piVar1[1] = (int)piVar3;
        puVar2 = (u32 *)(u32)(a3 == 0);
        for (; a2 != 0; a2 = *(int *)(a2 + 0x10)) {
            piVar1 = *(int **)(a2 + 0xc);
            iVar7 = 0;
            uVar6 = iVar5 * 0x6e;
            if ((char)s0 == '\0') {
                uVar6 = 0;
            }
            for (; piVar1 != NULL; piVar1 = (int *)piVar1[4]) {
                if (((u32 *)(u32)(a3 == 0) != NULL) || (*(int *)(*piVar1 * 8 + a3) != -1)) {
                    iVar7 = iVar7 + 1;
                }
            }
            puVar2 = (u32 *)(**(code **)(*(int *)(0xfc + a0) + 0x14))(iVar7 << 4, 0xf4 + a0, a6, a7);
            *piVar3 = iVar7;
            piVar3[1] = *(int *)(a2 + 4);
            piVar3[2] = *(int *)(a2 + 8);
            piVar3[3] = -1;
            piVar3[5] = (int)puVar2;
            puVar8 = puVar2;
            for (piVar1 = *(int **)(a2 + 0xc); piVar1 != NULL; piVar1 = (int *)piVar1[4]) {
                if ((char)s0 == '\0') {
                    uVar11 = (u32) * (u16 *)(piVar1 + 5);
                } else {
                    uVar11 = ((u32) * (u16 *)(piVar1 + 5) + iVar5) * 0x6e;
                }
                if ((a3 == 0) || (puVar2 = *(u32 **)(*piVar1 * 8 + a3), puVar2 != (u32 *)0xffffffff)) {
                    piVar4 = (int *)(**(code **)(*(int *)(0xfc + a0) + 0x14))(0xc, 0xf4 + a0, a6, a7);
                    puVar2 = (u32 *)piVar3[3];
                    if (puVar2 == (u32 *)0xffffffff) {
                        piVar3[3] = uVar6;
                    }
                    *puVar8 = 1;
                    puVar8[1] = uVar6;
                    puVar8[2] = uVar11;
                    puVar8[3] = piVar4;
                    *piVar4 = piVar1[1];
                    piVar4[1] = piVar1[2];
                    if (a3 == 0) {
                        piVar4[2] = *piVar1;
                    } else {
                        piVar4[2] = *(int *)(*piVar1 * 8 + a3);
                    }
                    puVar8 = puVar8 + 4;
                }
                uVar6 = uVar11;
            }
            piVar3[4] = uVar6;
            piVar3 = piVar3 + 6;
        }
    }
    return puVar2;
}

/*
 * asr_sub_11c7b8  0x8c11c7b8
 * area name: in the asr library code range
 * called by: asr_sub_11c86c, asr_sub_11ec7c
 */
u32 asr_sub_11c7b8(int a0, int *a1) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;

    piVar5 = (int *)a1[1];
    iVar2 = 0;
    if (0 < *a1) {
        do {
            iVar3 = piVar5[5];
            iVar4 = 0;
            if (0 < *piVar5) {
                do {
                    (**(code **)(*(int *)(0xfc + a0) + 0x18))(*(u32 *)(iVar3 + 0xc), 0xf4 + a0);
                    iVar4 = iVar4 + 1;
                    iVar3 = iVar3 + 0x10;
                } while (iVar4 < *piVar5);
            }
            (**(code **)(*(int *)(0xfc + a0) + 0x18))(piVar5[5], 0xf4 + a0);
            iVar2 = iVar2 + 1;
            piVar5 = piVar5 + 6;
        } while (iVar2 < *a1);
    }
    if (iVar2 != 0) {
        (**(code **)(*(int *)(0xfc + a0) + 0x18))(a1[1], 0xf4 + a0);
    }
    /* WARNING: Could not recover jumptable at 0x8c11c85e. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(0xfc + a0) + 0x18))(a1, 0xf4 + a0);
    return uVar1;
}

/*
 * asr_sub_11c7cc  0x8c11c7cc
 * area name: in the asr library code range
 */
u32 asr_sub_11c7cc(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int unaff_r8;
    int iVar2;
    int *unaff_r10;
    int iVar3;
    int iVar4;
    int *piVar5;
    int unaff_r14;

    piVar5 = (int *)unaff_r10[1];
    iVar2 = unaff_r8;
    if (0 < *unaff_r10) {
        do {
            iVar3 = piVar5[5];
            iVar4 = unaff_r8;
            if (0 < *piVar5) {
                do {
                    (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))(*(u32 *)(iVar3 + 0xc), 0xf4 + unaff_r14, a2, a3);
                    iVar4 = iVar4 + 1;
                    iVar3 = iVar3 + 0x10;
                } while (iVar4 < *piVar5);
            }
            (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))(piVar5[5], 0xf4 + unaff_r14, a2, a3);
            iVar2 = iVar2 + 1;
            piVar5 = piVar5 + 6;
        } while (iVar2 < *unaff_r10);
    }
    if (iVar2 != 0) {
        (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))(unaff_r10[1], 0xf4 + unaff_r14, a2, a3);
    }
    /* WARNING: Could not recover jumptable at 0x8c11c85e. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))(0xf4 + unaff_r14);
    return uVar1;
}

/*
 * asr_sub_11c86c  0x8c11c86c
 * area name: in the asr library code range
 */
int asr_sub_11c86c(int a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 s0) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = a3;
    asr_sub_11c5e4(a0, &uStack_10, a3, s0);
    uVar1 = (**(code **)(0xc4 + a0))(uStack_10, 0xf4 + a0, a3, s0);
    uStack_c = CONCAT31(uStack_c._1_3_, (char)uVar1);
    asr_sub_11c7b8(a0, uStack_10);
    return (int)(char)uStack_c;
}

/*
 * asr_calloc  0x8c11c914
 * allocates a1 * a2 bytes through the object's allocator (+0x14) and clears them
 * called by: asr_calloc_wrap, asr_sub_11ce8e, asr_sub_120f04, asr_sub_1213d0
 */
int asr_calloc(int a0, int a1, int a2, u32 a3) {
    int ar4_00;

    ar4_00 = (**(code **)(a0 + 0x14))(a1 * a2, a3, a2, a3);
    if (ar4_00 != 0) {
        memset(ar4_00, 0, a1 * a2);
    }
    return ar4_00;
}

/*
 * asr_calloc_wrap  0x8c11c972
 * only calls asr_calloc
 * called by: asr_sub_11c47c
 */
u32 asr_calloc_wrap(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = asr_calloc(*(u32 *)(0xfc + a0), a1, a2, 0xf4 + a0);
    return uVar1;
}

/*
 * asr_set_state_notify  0x8c11c99a
 * sets the state at +0x3e to a1 and calls the callback at +0xc8 when it changes
 * called by: asr_sub_11e534, asr_sub_11ec7c
 */
u32 asr_set_state_notify(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = 0;
    if (*(short *)(a0 + 0x3e) != (short)a1) {
        *(short *)(a0 + 0x3e) = (short)a1;
        if (*(int *)(0xc8 + a0) != 0) {
            uVar1 = (**(code **)(0xc8 + a0))((short)a1, 0xf4 + a0);
        }
    }
    return uVar1;
}

/*
 * asr_sub_11c9a0  0x8c11c9a0
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11c9a0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    int unaff_r14;

    uVar1 = 0;
    if ((u32) * (u16 *)(in_r0 + unaff_r14) != (u32)(u16)a1) {
        *(u16 *)(in_r0 + unaff_r14) = (u16)a1;
        if (*(int *)(0xc8 + unaff_r14) != 0) {
            uVar1 = (**(code **)(0xc8 + unaff_r14))((u32)(u16)a1, 0xf4 + unaff_r14, a2, a3);
        }
    }
    return uVar1;
}

/*
 * asr_check_object  0x8c11c9d2
 * 6 for NULL, 0x12 when the magic (+0x38) is not 0x1b9813f5, records error 2 when the checksum (+4) no longer matches
 * called by: asr_sub_11ca28, asr_sub_11cd4e, asr_sub_11ce44, asr_sub_11ce8e, asr_sub_11e2de, asr_sub_11e8d6,
 * lib11c_check_handle, lib11c_take_error
 */
u32 asr_check_object(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    if (a0 == 0) {
        return 6;
    }
    if (*(int *)(a0 + 0x38) != 0x1b9813f5) {
        return 0x12;
    }
    iVar1 = (**(code **)(a0 + 0x1c))(a0 + 8);
    if (*(int *)(a0 + 4) != iVar1) {
        uVar2 = lib11c_set_error(a0, 2, a2, a3);
        return uVar2;
    }
    return 0;
}

/*
 * asr_sub_11c9d6  0x8c11c9d6
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11c9d6(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int unaff_r14;

    if (unaff_r14 == 0) {
        return 6;
    }
    if (*(int *)(unaff_r14 + 0x38) != 0x1b9813f5) {
        return 0x12;
    }
    iVar1 = (**(code **)(unaff_r14 + 0x1c))(unaff_r14 + 8, a1, a2, a3);
    if (*(int *)(unaff_r14 + 4) != iVar1) {
        uVar2 = lib11c_set_error(unaff_r14, 2, a2, a3);
        return uVar2;
    }
    return 0;
}

/*
 * lib11c_check_handle  0x8c11ca24
 * checks the handle magic 0x218df4f5 and its state; 0 when valid
 * called by: asr_sub_11cd4e, asr_sub_11d200, asr_sub_11d20e, asr_sub_11d370, asr_sub_11d374, asr_sub_11d5d4,
 * asr_sub_11d6f0, asr_sub_11d7b8 (+16 more)
 */
u32 lib11c_check_handle(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;

    if (a0 == 0) {
        return 6;
    }
    if (*(int *)(0xf0 + a0) == 0x218df4f5) {
        iVar1 = asr_check_object(*(u32 *)(0xfc + a0), unused_a1, a2, a3);
        if (iVar1 != 0) {
            return 1;
        }
        iVar1 = (**(code **)(*(int *)(0xfc + a0) + 0x1c))(0xf4 + a0);
        if ((*(int *)(0xe8 + a0) == iVar1) &&
            (iVar1 = (**(code **)(*(int *)(0xfc + a0) + 0x20))(0xf4 + a0), *(int *)(0xec + a0) == iVar1)) {
            return 0;
        }
        ar5_00 = 2;
        uVar2 = *(u32 *)(0xfc + a0);
    } else {
        ar5_00 = 0xb;
        uVar2 = *(u32 *)(0xfc + a0);
    }
    uVar2 = lib11c_set_error(uVar2, ar5_00, a2, a3);
    return uVar2;
}

/*
 * asr_sub_11ca28  0x8c11ca28
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11ca28(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    int unaff_r14;

    if (unaff_r14 == 0) {
        return 6;
    }
    if (*(int *)(0xf0 + unaff_r14) == 0x218df4f5) {
        iVar1 = asr_check_object(*(u32 *)(0xfc + unaff_r14), a1, a2, a3);
        if (iVar1 != 0) {
            return 1;
        }
        iVar1 = (**(code **)(*(int *)(0xfc + unaff_r14) + 0x1c))(0xf4 + unaff_r14, a1, a2, a3);
        if ((*(int *)(0xe8 + unaff_r14) == iVar1) &&
            (iVar1 = (**(code **)(*(int *)(0xfc + unaff_r14) + 0x20))(0xf4 + unaff_r14, a1, a2, a3),
             *(int *)(0xec + unaff_r14) == iVar1)) {
            return 0;
        }
        ar5_00 = 2;
        uVar2 = *(u32 *)(0xfc + unaff_r14);
    } else {
        ar5_00 = 0xb;
        uVar2 = *(u32 *)(0xfc + unaff_r14);
    }
    uVar2 = lib11c_set_error(uVar2, ar5_00, a2, a3);
    return uVar2;
}

/*
 * asr_sub_11cad4  0x8c11cad4
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11e534, asr_sub_11e82c
 */
u32 asr_sub_11cad4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int ar4_00;

    if (a0 == 0) {
        uVar1 = 6;
    } else if (*(int *)(a0 + 0x18) == 0x2d79b6f5) {
        ar4_00 = *(int *)(a0 + 0x14);
        iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8);
        if ((*(int *)(a0 + 0xc) != iVar2) ||
            (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8), *(int *)(a0 + 0x10) != iVar2)) {
            uVar1 = lib11c_set_error(ar4_00, 0xf, a2, a3);
            return uVar1;
        }
        uVar1 = 0;
    } else {
        uVar1 = 0xe;
    }
    return uVar1;
}

/*
 * asr_sub_11cada  0x8c11cada
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11cada(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int unaff_r13;
    int ar4_00;

    if (unaff_r13 == 0) {
        uVar1 = 6;
    } else if (*(int *)(unaff_r13 + 0x18) == 0x2d79b6f5) {
        ar4_00 = *(int *)(unaff_r13 + 0x14);
        iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8, a1, a2, a3);
        if ((*(int *)(unaff_r13 + 0xc) != iVar2) ||
            (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8, a1, a2, a3), *(int *)(unaff_r13 + 0x10) != iVar2)) {
            uVar1 = lib11c_set_error(ar4_00, 0xf, a2, a3);
            return uVar1;
        }
        uVar1 = 0;
    } else {
        uVar1 = 0xe;
    }
    return uVar1;
}

/*
 * asr_sub_11cb54  0x8c11cb54
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11e9b4, asr_sub_11ea3c
 */
u32 asr_sub_11cb54(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int ar4_00;

    if (a0 == 0) {
        uVar1 = 6;
    } else if (*(int *)(a0 + 0x18) == 0x2783d5f5) {
        ar4_00 = *(int *)(a0 + 0x14);
        iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8);
        if ((*(int *)(a0 + 0xc) != iVar2) ||
            (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8), *(int *)(a0 + 0x10) != iVar2)) {
            uVar1 = lib11c_set_error(ar4_00, 0x11, a2, a3);
            return uVar1;
        }
        uVar1 = 0;
    } else {
        uVar1 = 0x10;
    }
    return uVar1;
}

/*
 * asr_sub_11cb5a  0x8c11cb5a
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11cb5a(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int unaff_r13;
    int ar4_00;

    if (unaff_r13 == 0) {
        uVar1 = 6;
    } else if (*(int *)(unaff_r13 + 0x18) == 0x2783d5f5) {
        ar4_00 = *(int *)(unaff_r13 + 0x14);
        iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8, a1, a2, a3);
        if ((*(int *)(unaff_r13 + 0xc) != iVar2) ||
            (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8, a1, a2, a3), *(int *)(unaff_r13 + 0x10) != iVar2)) {
            uVar1 = lib11c_set_error(ar4_00, 0x11, a2, a3);
            return uVar1;
        }
        uVar1 = 0;
    } else {
        uVar1 = 0x10;
    }
    return uVar1;
}

/*
 * asr_sub_11cbbc  0x8c11cbbc
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11cc2c
 * strings: "=>?"; "@AB=>?"
 */
u32 asr_sub_11cbbc(int a0, int a1, u32 a2) {
    u32 uVar1;
    u8 *puVar2;
    bool bVar3;

    puVar2 = "=>?";
    if ((u8)a2 != 0) {
        puVar2 = "@AB=>?";
    }
    uVar1 = asr_sub_120348(a0 + 0x48, (int)(char)puVar2[a1], a1, (u32)(u8)a2);
    bVar3 = (uVar1 & 0xff) == 0;
    if (bVar3) {
        *(u8 *)(a1 + 0xe4 + a0) = (u8)a2;
    }
    return (u32)!bVar3;
}

/*
 * asr_sub_11cc2c  0x8c11cc2c
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_11daa4, asr_sub_11dda2, asr_sub_11e534
 */
u32 asr_sub_11cc2c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *puVar2;
    u32 *puVar3;
    u32 uVar4;
    int a4;
    u32 uVar5;

    uVar5 = 0;
    if (*(int *)(0x108 + a0) != 0) {
        a4 = *(int *)(0x108 + a0);
        uVar4 = a1;
        uVar1 = (**(code **)(a4 + 0x3c))(a4, a1, a2, a3);
        puVar2 = (u32 *)(**(code **)(*(int *)(0x108 + a0) + 0x6c))(*(int *)(0x108 + a0), uVar4, a2, a3);
        uVar4 = 0;
        puVar3 = puVar2;
        if (uVar1 != 0) {
            do {
                uVar4 = uVar4 + 1;
                uVar5 = uVar5 | *puVar3;
                puVar3 = puVar3 + 2;
            } while (uVar4 < uVar1);
        }
        if (((a1 & uVar5) == 0) || ((a1 != 0xffffffff && ((~uVar5 & a1) != 0)))) {
            return 1;
        }
        uVar5 = 0;
        do {
            uVar4 = (u32)((puVar2[uVar5 * 2] & a1) != 0);
            if ((uVar4 != *(u8 *)(0xe4 + a0 + uVar5)) &&
                (uVar4 = asr_sub_11cbbc(a0, uVar5, uVar4), (uVar4 & 0xff) != 0)) {
                return 1;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 3);
    }
    return 0;
}

/*
 * lib11c_set_error  0x8c11cd02
 * records error a1 if none is set, under the handle's lock callbacks
 * called by: asr_check_object, asr_sub_11c9d6, asr_sub_11ca28, asr_sub_11cad4, asr_sub_11cada, asr_sub_11cb54,
 * asr_sub_11cb5a, asr_sub_11ce8e (+14 more)
 */
u32 lib11c_set_error(int *a0, int a1, u32 a2, u32 a3) {
    (*(code *)a0[0xb])(a0[4], a0 + 2, a2, a3);
    if (*a0 == 0) {
        *a0 = a1;
    }
    (*(code *)a0[0xc])(a0[4], a0 + 2, a2, a3);
    return 1;
}

/*
 * lib11c_take_error  0x8c11cd44
 * returns and clears the handle's pending error
 * called by: asr_lib_bind_recognizer_model, asr_lib_create_engine, asr_lib_create_recognizer, asr_lib_load_model,
 * asr_sub_10b698, asr_sub_10b6a0, asr_sub_10b6cc, asr_sub_10b852 (+28 more)
 */
u32 lib11c_take_error(u32 *a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;

    uVar3 = 0x80000000;
    iVar2 = a1;
    if ((a1 == 0) || (iVar1 = lib11c_check_handle(a1, a1, a2, a3), iVar1 != 0)) {
        iVar2 = asr_check_object(a0, iVar2, a2, a3);
        if (iVar2 == 0) {
            uVar3 = 0x12;
        } else {
            (*(code *)a0[0xb])(a0[4], a0 + 2, uVar3);
            uVar3 = *a0;
            *a0 = 0;
            (*(code *)a0[0xc])(a0[4], a0 + 2);
        }
    } else {
        uVar3 = *(u32 *)(a1 + 0x40);
        *(u32 *)(a1 + 0x40) = 0;
    }
    return uVar3;
}

/*
 * asr_sub_11cd4e  0x8c11cd4e
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11cd4e(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int unaff_r12;
    u32 uVar2;
    int unaff_r13;

    if ((unaff_r12 == 0) || (iVar1 = lib11c_check_handle(unaff_r12, unused_a1, a2, a3), iVar1 != 0)) {
        iVar1 = asr_check_object(a0, unused_a1, a2, a3);
        if (iVar1 == 0) {
            uVar2 = 0x12;
        } else {
            (*(code *)a0[0xb])(a0[4], a0 + 2, a2, a3);
            uVar2 = *a0;
            *a0 = 0;
            (*(code *)a0[0xc])(a0[4], a0 + 2, a2, a3);
        }
    } else {
        uVar2 = *(u32 *)(unaff_r13 + 0x40);
        *(u32 *)(unaff_r13 + 0x40) = 0;
    }
    return uVar2;
}

/*
 * asr_sub_11cdb6  0x8c11cdb6
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_lib_create_engine
 */
u32 asr_sub_11cdb6(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 uVar2;
    u32 *a5;
    u32 uStack_14;
    u32 uStack_10;

    a5 = &uStack_14;
    if (a0 != NULL) {
        uStack_10 = 0;
        uStack_14 = a1;
        puVar1 = (u32 *)(*(code *)*a0)(0x3c, &uStack_14, a2, a3);
        if (puVar1 != NULL) {
            *puVar1 = 0;
            puVar1[5] = *a0;
            puVar1[6] = a0[1];
            puVar1[7] = a0[3];
            puVar1[8] = a0[4];
            puVar1[9] = a0[5];
            puVar1[10] = a0[6];
            puVar1[0xb] = a0[7];
            uVar2 = 0x1b9813f5;
            puVar1[0xc] = a0[8];
            puVar1[0xe] = uVar2;
            puVar1[2] = uStack_14;
            puVar1[3] = uStack_10;
            uVar2 = (*(code *)puVar1[9])(&uStack_14, a5, a2, a3);
            puVar1[4] = uVar2;
            uVar2 = (*(code *)puVar1[7])(&uStack_14, a5, a2, a3);
            puVar1[1] = uVar2;
            return puVar1;
        }
    }
    return 0;
}

/*
 * asr_sub_11ce44  0x8c11ce44
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_10b8c6
 */
u32 asr_sub_11ce44(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = asr_check_object(a0, a1, a2, a3);
    if (iVar1 != 0) {
        return 1;
    }
    (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x10), a0 + 8, a2, a3);
    *(u32 *)(a0 + 0x38) = 0;
    (**(code **)(a0 + 0x18))(a0, a0 + 8, a2, a3);
    return 0;
}

/*
 * asr_sub_11ce88  0x8c11ce88
 * area name: sits between asr functions (same compilation unit)
 * called by: asr_sub_10be4e
 */
u32 asr_sub_11ce88(void) {
    return g_8c127c14;
}

/*
 * asr_sub_11ce8e  0x8c11ce8e
 * area name: sits between asr functions (same compilation unit)
 */
u32 asr_sub_11ce8e(int a0, u32 *a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *s8;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 *puVar5;
    u8 *puVar6;
    int iVar7;
    u32 *ar6_00;
    int iVar8;
    u8 *a7;
    u32 extraout_fr3;
    u64 in_xd2;
    u8 in_FPSCR_DN;
    u8 bVar9;
    u8 bVar10;
    u8 bVar11;
    u8 in_FPSCR_PR;
    u8 bVar12;
    u8 bVar13;
    u8 in_FPSCR_SZ;
    char cVar14;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_c;

    uStack_c = 0;
    uStack_28 = *(u32 *)(&DATA_8c127c28);
    uStack_24 = *(u32 *)((&DATA_8c127c28) + 4);
    uStack_20 = *(u32 *)((&DATA_8c127c28) + 8);
    uStack_1c = *(u32 *)((&DATA_8c127c28) + 0xc);
    uStack_18 = *(u32 *)((&DATA_8c127c28) + 0x10);
    uStack_14 = *(u32 *)((&DATA_8c127c28) + 0x14);
    uStack_34 = *(u32 *)(&DATA_8c127c40);
    uStack_30 = *(u32 *)((&DATA_8c127c40) + 4);
    uStack_2c = *(u32 *)((&DATA_8c127c40) + 8);
    uVar4 = a2;
    iVar2 = asr_check_object(a0, a1, a2, a3);
    if (iVar2 == 0) {
        if (a1 == NULL) {
            lib11c_set_error(a0, 0x13, uVar4, a3);
        } else {
            iVar7 = (int)0x2b4;
            iVar8 = a0 + 8;
            bVar9 = 0;
            bVar11 = 0;
            bVar13 = (u8)((((u32)in_FPSCR_DN << 0x12 | (u32)in_FPSCR_PR << 0x13 | (u32)in_FPSCR_SZ << 0x14) &
                           0xffe7ffff & 0x100000) >>
                          0x14);
            iVar2 = asr_calloc(a0, 1, iVar7, iVar8);
            if (iVar2 == 0) {
                lib11c_set_error(a0, 2, iVar7, iVar8);
            } else {
                iVar7 = (int)0xc4;
                *(int *)(iVar2 + 0x48) = iVar2;
                puVar5 = (u32 *)(iVar7 + iVar2);
                *(u8 *)(iVar2 + 0x4c) = 0;
                *puVar5 = *a1;
                puVar5[1] = a1[1];
                puVar5[2] = a1[2];
                puVar5[3] = a1[3];
                puVar5[4] = a1[4];
                puVar5[5] = a1[5];
                puVar1 = (&DATA_8c1274a4);
                *(u32 *)(0xf4 + iVar2) = *(u32 *)(a0 + 8);
                s8 = (&DATA_8c127aba);
                *(int *)(0xfc + iVar2) = a0;
                ar6_00 = &uStack_34;
                puVar5 = &uStack_28;
                bVar10 = 0;
                bVar12 = 0;
                bVar9 =
                    (u8)((((u32)bVar9 << 0x12 | (u32)bVar11 << 0x13 | (u32)bVar13 << 0x14) & 0xffe7ffff & 0x100000) >>
                         0x14);
                a7 = (&DATA_8c1278b0);
                uVar3 = (*(code *)(&asr_sub_1201e6))(iVar2, puVar5, ar6_00, (&DATA_8c1278b0), (&DATA_8c12799c),
                                                     (&DATA_8c127a74), s8, puVar1, 0, 0);
                if ((uVar3 & 0xff) == 0) {
                    bVar11 = 0;
                    bVar13 = 0;
                    bVar9 = (u8)((((u32)bVar10 << 0x12 | (u32)bVar12 << 0x13 | (u32)bVar9 << 0x14) & 0xffe7ffff &
                                  0x100000) >>
                                 0x14);
                    uVar4 = (**(code **)(a0 + 0x1c))(a0 + 8, puVar5, ar6_00, a7);
                    *(u32 *)(0xe8 + iVar2) = uVar4;
                    bVar10 = 0;
                    bVar12 = 0;
                    bVar9 = (u8)((((u32)bVar11 << 0x12 | (u32)bVar13 << 0x13 | (u32)bVar9 << 0x14) & 0xffe7ffff &
                                  0x100000) >>
                                 0x14);
                    uVar4 = (**(code **)(a0 + 0x20))(a0 + 8, puVar5, ar6_00, a7);
                    *(u32 *)(0xec + iVar2) = uVar4;
                    *(u32 *)(iVar2 + 0x60) = 0;
                    *(u32 *)(iVar2 + 100) = **(u32 **)(iVar2 + 0x5c);
                    *(u32 *)(iVar2 + 0x6c) = *(u32 *)(*(int *)(iVar2 + 0x5c) + 4);
                    *(u32 *)(iVar2 + 0x70) = **(u32 **)(iVar2 + 0x54);
                    puVar1 = (&DATA_8c11c8be);
                    *(u32 *)(iVar2 + 0x74) = *(u32 *)(*(int *)(iVar2 + 0x54) + 4);
                    iVar7 = (int)0x100;
                    *(u32 *)(iVar7 + iVar2) = 0;
                    *(u32 *)(iVar7 + 4 + iVar2) = 0;
                    *(u8 *)(0x234 + iVar2) = 0;
                    uVar3 = 0xffe7ffff;
                    iVar7 = (int)0xe0;
                    *(u8 **)(iVar7 + iVar2) = puVar1;
                    *(u16 *)(iVar7 + 100 + iVar2) = 0;
                    *(u32 *)(iVar7 + 0x68 + iVar2) = 4;
                    cVar14 =
                        (char)((((u32)bVar10 << 0x12 | (u32)bVar12 << 0x13 | (u32)bVar9 << 0x14) & uVar3 & 0x100000) >>
                               0x14);
                    uVar4 = (**(code **)(a0 + 0x14))(0x28, a0 + 8, ar6_00, a7);
                    *(u32 *)(0x2b0 + iVar2) = uVar4;
                    if (*(int *)(0x2b0 + iVar2) == 0) {
                        lib11c_set_error(a0, 2, ar6_00, a7);
                    } else {
                        iVar7 = (int)0x22c;
                        **(u32 **)(0x2b0 + iVar2) = 0;
                        puVar1 = (&asr_sub_120348);
                        a7 = NULL;
                        uVar4 = g_8c11d120;
                        if (cVar14 != '\0') {
                            in_xd2 = CONCAT44((&asr_sub_120348), g_8c11d120);
                            uVar4 = extraout_fr3;
                        }
                        ar6_00 = (u32 *)(iVar7 + iVar2);
                        if (cVar14 == '\0') {
                            *(u32 *)(0x2a0 + iVar2) = uVar4;
                        } else {
                            *(u64 *)(0x2a0 + iVar2) = in_xd2;
                        }
                        uVar3 = (*(code *)puVar1)(iVar2 + 0x48, 4, ar6_00, 0);
                        if ((uVar3 & 0xff) == 0) {
                            a7 = NULL;
                            ar6_00 = (u32 *)(0x230 + iVar2);
                            uVar4 = 0x29;
                            uVar3 = asr_sub_120348(iVar2 + 0x48, 0x29, ar6_00, 0);
                            if (((uVar3 & 0xff) == 0) &&
                                (uVar3 = asr_sub_11d8fc(iVar2), uVar4 = 0x218df4f5, (uVar3 & 0xff) == 0)) {
                                iVar7 = (int)0xf8;
                                iVar8 = (int)0xe4;
                                uVar3 = 0;
                                *(u32 *)(iVar7 + iVar2) = a2;
                                puVar6 = (u8 *)(iVar8 + iVar2);
                                *(u32 *)(iVar7 + -8 + iVar2) = uVar4;
                                do {
                                    *puVar6 = 1;
                                    puVar6[1] = 1;
                                    uVar3 = uVar3 + 3;
                                    puVar6[2] = 1;
                                    puVar6 = puVar6 + 3;
                                } while (uVar3 < 3);
                                return iVar2;
                            }
                        }
                    }
                } else {
                    lib11c_set_error(*(u32 *)(0xfc + iVar2), *(u32 *)(iVar2 + 0x40), ar6_00, a7);
                }
                (**(code **)(a0 + 0x18))(iVar2, a0 + 8, ar6_00, a7);
            }
        }
    }
    return 0;
}

/*
 * asr_sub_11d14c  0x8c11d14c
 * area name: in the asr library code range
 * called by: asr_sub_11e3ea
 */
u32 asr_sub_11d14c(int a0, u32 *a1, int *a2) {
    u32 uVar1;
    u32 *puVar2;
    int iVar3;
    u32 a6;
    int *a7;
    int iStack_20;
    u32 *puStack_1c;
    int *piStack_18;
    int iStack_14;

    a7 = &iStack_20;
    a6 = 0;
    iStack_20 = 0;
    iStack_14 = *(int *)(0xfc + a0);
    puStack_1c = a1;
    piStack_18 = a2;
    uVar1 = asr_sub_120348(a0 + 0x48, 0x27, 0, &iStack_20);
    if ((uVar1 & 0xff) == 0) {
        iStack_20 = iStack_20 + 0x88;
        puVar2 = (u32 *)(**(code **)(iStack_14 + 0x14))(iStack_20, 0xf4 + a0, a6, a7);
        iVar3 = (int)0x100;
        puVar2[1] = iStack_20;
        *puVar2 = 4;
        memmove(puVar2 + 2, **(int **)(iVar3 + a0) + 8, (int)0x80);
        iStack_20 = 0;
        uVar1 = (*(code *)(&asr_sub_120348))(a0 + 0x48, 0x27, (int)(puVar2 + 2) + (int)0x80, &iStack_20);
        if ((uVar1 & 0xff) == 0) {
            *piStack_18 = iStack_20 + 0x88;
            *puStack_1c = puVar2;
            return 0;
        }
    }
    return 1;
}

/*
 * asr_sub_11d200  0x8c11d200
 * area name: in the asr library code range
 * called by: asr_sub_10ba20
 */
u32 asr_sub_11d200(int a0, u32 unused_a1, u32 a2, u32 a3) {
    short sVar1;
    char cVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    int *piVar6;
    int iVar7;
    int *piVar8;

    iVar3 = lib11c_check_handle(a0, unused_a1, a2, a3);
    if (iVar3 == 0) {
        iVar3 = *(int *)(0xfc + a0);
        sVar1 = *(short *)(a0 + 0x3e);
        if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
            uVar4 = asr_fsm_set_result(a0 + 0x48, 7);
            return uVar4 & 0xff;
        }
        iVar5 = (int)0x100;
        if (*(int *)(iVar5 + a0) != 0) {
            iVar7 = (int)0xf4;
            *(int *)(*(int *)(iVar5 + a0) + 4) = *(int *)(*(int *)(iVar5 + a0) + 4) + -1;
            (**(code **)(iVar3 + 0x18))(*(u32 *)(iVar5 + 8 + a0), iVar7 + a0);
            *(u32 *)(0x108 + a0) = 0;
        }
        iVar5 = 0;
        if (*(int *)(0x104 + a0) != 0) {
            iVar7 = *(int *)(0x104 + a0);
            *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + -1;
        }
        piVar6 = (int *)(0x118 + a0);
        piVar8 = piVar6;
        do {
            if (*piVar6 != 0) {
                (**(code **)(iVar3 + 0x18))(*piVar8, 0xf4 + a0);
            }
            iVar5 = iVar5 + 1;
            piVar8 = piVar8 + 1;
            piVar6 = piVar6 + 1;
        } while (iVar5 < 3);
        if (**(int **)(0x2b0 + a0) != 0) {
            (**(code **)(iVar3 + 0x18))(**(u32 **)(0x2b0 + a0), 0xf4 + a0);
        }
        (**(code **)(iVar3 + 0x18))(*(u32 *)(0x2b0 + a0), 0xf4 + a0);
        (**(code **)(iVar3 + 0x18))(*(u32 *)(a0 + 0x54), 0xf4 + a0);
        (**(code **)(iVar3 + 0x18))(*(u32 *)(a0 + 0x5c), 0xf4 + a0);
        cVar2 = asr_sub_12025e(a0);
        if (cVar2 == '\0') {
            iVar5 = (int)0xf4;
            *(u32 *)(0xf0 + a0) = 0;
            (**(code **)(iVar3 + 0x18))(a0, iVar5 + a0);
            return 0;
        }
    }
    return 1;
}

/*
 * asr_sub_11d20e  0x8c11d20e
 * area name: in the asr library code range
 */
u32 asr_sub_11d20e(int a0, u32 unused_a1, u32 a2, u32 a3) {
    short sVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    int unaff_r9;
    int *piVar7;

    iVar2 = lib11c_check_handle(a0, unused_a1, a2, a3);
    if (iVar2 == 0) {
        iVar2 = *(int *)(0xfc + a0);
        sVar1 = *(short *)(unaff_r9 + 0x3e);
        if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
            uVar3 = asr_fsm_set_result(a0 + 0x48, 7, a2, a3);
            return uVar3 & 0xff;
        }
        iVar4 = (int)0x100;
        if (*(int *)(iVar4 + a0) != 0) {
            iVar6 = (int)0xf4;
            *(int *)(*(int *)(iVar4 + a0) + 4) = *(int *)(*(int *)(iVar4 + a0) + 4) + -1;
            (**(code **)(iVar2 + 0x18))(*(u32 *)(iVar4 + 8 + a0), iVar6 + a0, a2, a3);
            *(u32 *)(0x108 + a0) = 0;
        }
        iVar4 = 0;
        if (*(int *)(0x104 + a0) != 0) {
            iVar6 = *(int *)(0x104 + a0);
            *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1;
        }
        piVar5 = (int *)(0x118 + a0);
        piVar7 = piVar5;
        do {
            if (*piVar5 != 0) {
                (**(code **)(iVar2 + 0x18))(*piVar7, 0xf4 + a0, a2, a3);
            }
            iVar4 = iVar4 + 1;
            piVar7 = piVar7 + 1;
            piVar5 = piVar5 + 1;
        } while (iVar4 < 3);
        if (**(int **)(0x2b0 + a0) != 0) {
            (**(code **)(iVar2 + 0x18))(**(u32 **)(0x2b0 + a0), 0xf4 + a0, a2, a3);
        }
        (**(code **)(iVar2 + 0x18))(*(u32 *)(0x2b0 + a0), 0xf4 + a0, a2, a3);
        (**(code **)(iVar2 + 0x18))(*(u32 *)(a0 + 0x54), 0xf4 + a0, a2, a3);
        iVar4 = 0xf4 + a0;
        (**(code **)(iVar2 + 0x18))(*(u32 *)(a0 + 0x5c), iVar4, a2, a3);
        uVar3 = asr_sub_12025e(unaff_r9);
        if ((uVar3 & 0xff) == 0) {
            iVar4 = (int)0xf4;
            *(u32 *)(0xf0 + a0) = 0;
            (**(code **)(iVar2 + 0x18))(a0, iVar4 + a0, a2, a3);
            return 0;
        }
    }
    return 1;
}

/*
 * asr_sub_11d370  0x8c11d370
 * area name: in the asr library code range
 * called by: asr_sub_10c322, asr_sub_10c32a
 */
u32 asr_sub_11d370(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    char cVar2;
    int iVar3;
    u32 uVar4;

    iVar3 = lib11c_check_handle(a0, unused_a1, a2, a3);
    if (iVar3 == 0) {
        if (*(short *)(a0 + 0x3e) == 2) {
            iVar3 = (int)0x118;
            *(u32 *)(iVar3 + 0xc + a0) = *(u32 *)(iVar3 + a0);
            *(u32 *)(iVar3 + 0x24 + a0) = 0;
            *(u32 *)(iVar3 + 0x28 + a0) = 0;
            *(u16 *)(iVar3 + 0x2c + a0) = 0;
            puVar1 = (&asr_sub_120348);
            iVar3 = (int)0x22a;
            *(u16 *)(iVar3 + a0) = 0;
            *(u16 *)(iVar3 + 0x1a + a0) = 0;
            *(u32 *)(a0 + 0x40) = 0;
            *(u32 *)(0x10c + a0) = 3;
            cVar2 = (*(code *)puVar1)(a0 + 0x48, 1, 0);
            if ((cVar2 == '\0') && (*(int *)(0x88 + a0) == 0)) {
                asr_sub_120348(a0 + 0x48, 2, 0);
            }
            uVar4 = *(u32 *)(a0 + 0x40);
        } else {
            uVar4 = asr_fsm_set_result(a0 + 0x48, 7);
            uVar4 = uVar4 & 0xff;
        }
    } else {
        uVar4 = 1;
    }
    return uVar4;
}

/*
 * asr_sub_11d374  0x8c11d374
 * area name: in the asr library code range
 */
u32 asr_sub_11d374(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    int unaff_r14;

    iVar2 = lib11c_check_handle(a0, unused_a1, a2, a3);
    if (iVar2 == 0) {
        if (*(short *)(a0 + 0x3e) == 2) {
            iVar2 = (int)0x118;
            *(u32 *)(iVar2 + 0xc + unaff_r14) = *(u32 *)(iVar2 + unaff_r14);
            *(u32 *)(iVar2 + 0x24 + unaff_r14) = 0;
            *(u32 *)(iVar2 + 0x28 + unaff_r14) = 0;
            *(u16 *)(iVar2 + 0x2c + unaff_r14) = 0;
            puVar1 = (&asr_sub_120348);
            iVar2 = (int)0x22a;
            *(u16 *)(iVar2 + unaff_r14) = 0;
            *(u16 *)(iVar2 + 0x1a + unaff_r14) = 0;
            *(u32 *)(a0 + 0x40) = 0;
            *(u32 *)(0x10c + unaff_r14) = 3;
            uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48, 1, 0, 0);
            if (((uVar3 & 0xff) == 0) && (*(int *)(0x88 + unaff_r14) == 0)) {
                asr_sub_120348(unaff_r14 + 0x48, 2, 0, 0);
            }
            uVar3 = *(u32 *)(a0 + 0x40);
        } else {
            uVar3 = asr_fsm_set_result(unaff_r14 + 0x48, 7, a2, a3);
            uVar3 = uVar3 & 0xff;
        }
    } else {
        uVar3 = 1;
    }
    return uVar3;
}

/*
 * asr_sub_11d432  0x8c11d432
 * area name: in the asr library code range
 * called by: asr_sub_11ec7c, asr_sub_122230, asr_sub_1222b4
 */
u32 asr_sub_11d432(int a0, int a1) {
    u32 uVar1;
    u32 ar5_00;
    u32 ar6_00;
    u32 *puStack_c;

    if (a1 == 0) {
        ar5_00 = 6;
        puStack_c = *(u32 **)(a0 + 0x54);
        ar6_00 = puStack_c[1];
    } else {
        puStack_c = *(u32 **)(a0 + 0x54);
        ar6_00 = puStack_c[1];
        ar5_00 = 5;
    }
    uVar1 = asr_sub_1113d0(*puStack_c, ar5_00, ar6_00, 0);
    return (u32)((uVar1 & 0xff) == 0);
}

/*
 * asr_sub_11d488  0x8c11d488
 * area name: in the asr library code range
 * called by: asr_sub_11d5d4, asr_sub_11f258
 */
u32 asr_sub_11d488(int a0, int a1, u32 a2, u32 a3) {
    u16 uVar1;
    int ar5_00;
    int ar4_00;
    u32 uVar2;
    int ar6_00;
    int iVar3;
    int iVar4;
    int iVar5;
    int ar4_01;
    u32 uVar6;
    int ar5_01;
    int ar4_02;
    int iVar7;

    ar4_01 = *(int *)(a0 + 0x70);
    iVar7 = a1 * 4;
    iVar5 = (int)0x7d0;
    iVar4 = *(int *)(0xfc + a0);
    do {
        ar5_00 = mring_read_advance(ar4_01, *(u32 *)(a0 + 0x74), a2, a3);
        if (ar5_00 == 0) {
            return 0;
        }
        ar4_02 = *(int *)(0x124 + a0 + iVar7);
        uVar6 = ar4_02 + (u32) * (u16 *)(ar4_01 + 0xc);
        if (*(u32 *)(0x130 + a0 + iVar7) < uVar6) {
            ar5_01 = *(int *)(0x118 + a0 + iVar7);
            ar6_00 = *(int *)(0x130 + a0 + iVar7) - ar5_01;
            ar4_00 = (**(code **)(iVar4 + 0x14))(ar6_00 + iVar5, 0xf4 + a0, a2, a3);
            if (ar4_00 == 0) {
                uVar2 = asr_fsm_set_result(a0 + 0x48, 2);
                return uVar2;
            }
            if (ar5_01 != 0) {
                iVar3 = ar6_00;
                memmove(ar4_00, ar5_01, ar6_00);
                (**(code **)(iVar4 + 0x18))(ar5_01, 0xf4 + a0, iVar3, a3);
            }
            iVar3 = (int)0x130;
            ar4_02 = (ar4_02 - ar5_01) + ar4_00;
            uVar1 = *(u16 *)(ar4_01 + 0xc);
            *(int *)(0x118 + a0 + iVar7) = ar4_00;
            *(int *)(iVar3 + a0 + iVar7) = ar4_00 + ar6_00 + iVar5;
            uVar6 = ar4_02 + (u32)uVar1;
        }
        a2 = (u32) * (u16 *)(ar4_01 + 0xc);
        memmove(ar4_02, ar5_00, a2);
        *(u32 *)(0x124 + a0 + iVar7) = uVar6;
    } while (true);
}

/*
 * asr_sub_11d5d4  0x8c11d5d4
 * area name: in the asr library code range
 * called by: asr_sub_10c356, asr_sub_10c35e
 */
u32 asr_sub_11d5d4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    short sVar1;
    int iVar2;
    u32 uVar3;
    u32 a4;
    u32 a5;
    int iVar4;
    u32 uVar5;
    u32 ar7_00;

    sVar1 = *(short *)(a0 + 0x3e);
    iVar2 = lib11c_check_handle(a0, unused_a1, a2, a3);
    if (iVar2 == 0) {
        *(u32 *)(a0 + 0x40) = 0;
        if (((sVar1 != 3) && (sVar1 != 4)) && (sVar1 != 7)) {
            return 0;
        }
        ar7_00 = 0;
        uVar5 = 0;
        uVar3 = asr_sub_120348(a0 + 0x48, 3, 0, 0);
        if (((uVar3 & 0xff) == 0) && (uVar3 = asr_sub_120284(a0, 0, uVar5, ar7_00), (uVar3 & 0xff) == 0)) {
            a5 = (u32) * (u16 *)(0x244 + a0);
            uVar3 = asr_sub_11d488(a0, a5, uVar5, ar7_00);
            if (((uVar3 & 0xff) == 0) &&
                (((*(short *)(0x144 + a0) == 0 ||
                   (((*(short *)(0x144 + a0) != 1 || (uVar3 = asr_sub_11eb8c(a0), (uVar3 & 0xff) == 0)) &&
                     ((*(short *)(0x144 + a0) != 2 ||
                       (uVar3 = asr_sub_11ec7c(a0, a5, uVar5, ar7_00), (uVar3 & 0xff) == 0)))))) &&
                  (*(int *)(0x148 + a0) != 4)))) {
                iVar2 = (int)0x148;
                iVar4 = (int)0xf4;
                a4 = *(u32 *)(iVar2 + a0);
                *(u32 *)(iVar2 + a0) = 4;
                uVar3 = (**(code **)(iVar2 + -0x7c + a0))(a4, iVar4 + a0, uVar5, ar7_00);
                if ((uVar3 & 0xff) != 0)
                    goto LAB_8c11d6c2;
            }
        }
        uVar5 = *(u32 *)(a0 + 0x40);
    } else {
    LAB_8c11d6c2:
        uVar5 = 1;
    }
    return uVar5;
}

/*
 * asr_sub_11d6f0  0x8c11d6f0
 * area name: in the asr library code range
 * called by: asr_sub_10b6cc, asr_sub_10c0b4
 */
u32 asr_sub_11d6f0(int a0, u32 *a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u32 *puVar5;
    u32 a5;
    u32 uVar6;
    u32 auStack_64[2];
    code *pcStack_5c;
    code *pcStack_58;

    puVar5 = a1;
    uVar3 = a2;
    iVar2 = lib11c_check_handle(a0, a1, a2, a3);
    puVar1 = (&asr_fsm_set_result);
    if (iVar2 == 0) {
        if ((a1 == NULL) && (a2 != 0)) {
            a5 = 0x13;
        override_prt_8c11d780_7a4d7f16:
            uVar3 = (*(code *)puVar1)(a0 + 0x48, a5, uVar3, a3);
        } else {
            memmove_wrap_10ca2e();
            auStack_64[0] = **(u32 **)(0x104 + a0);
            iVar2 = (*pcStack_5c)(auStack_64, puVar5, uVar3, a3);
            iVar4 = (*pcStack_58)(auStack_64, puVar5, uVar3, a3);
            uVar6 = 0;
            uVar3 = iVar2 + iVar4;
            puVar5 = a1;
            if (a2 != 0) {
                do {
                    if (uVar3 <= *puVar5) {
                        a5 = 0x19;
                        goto override_prt_8c11d780_7a4d7f16;
                    }
                    uVar6 = uVar6 + 1;
                    puVar5 = puVar5 + 1;
                } while (uVar6 < a2);
            }
            uVar3 = asr_sub_120348(a0 + 0x48, 0x19, a1, a2);
        }
        uVar3 = uVar3 & 0xff;
    } else {
        uVar3 = 1;
    }
    return uVar3;
}

/*
 * asr_sub_11d7b8  0x8c11d7b8
 * area name: in the asr library code range
 * called by: asr_sub_10bce4
 */
u32 asr_sub_11d7b8(int a0, int *a1, int *a2, u32 a3) {
    u8 bVar1;
    u8 *puVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    int *piVar6;
    u32 *a7;
    int iVar7;
    int iVar8;
    u32 uVar9;
    u32 uStack_2c;
    int iStack_28;
    int *piStack_24;
    int *piStack_20;
    int iStack_1c;

    a7 = &uStack_2c;
    iVar7 = 0;
    iVar8 = 0;
    piStack_24 = a1;
    piStack_20 = a2;
    iVar3 = lib11c_check_handle(a0, a1, a2, a3);
    puVar2 = (&asr_sub_120348);
    if (iVar3 == 0) {
        if ((piStack_24 == NULL) || (piStack_20 == NULL)) {
            uVar4 = asr_fsm_set_result(a0 + 0x48, 0x13, a2, a3);
            return uVar4 & 0xff;
        }
        iStack_1c = *(int *)(0xfc + a0);
        *(u32 *)(a0 + 0x40) = 0;
        piVar6 = &iStack_28;
        uVar4 = (*(code *)puVar2)(a0 + 0x48, 0x1a, piVar6, &uStack_2c);
        puVar2 = (&asr_fsm_set_result);
        if ((uVar4 & 0xff) == 0) {
            uVar9 = (u32)0x80;
            uVar4 = 0;
            if (uStack_2c != 0) {
                do {
                    piVar6 = (int *)(int)(char)*(u8 *)(iStack_28 + uVar4);
                    uVar5 = uVar9;
                    do {
                        if (((u32) * (u8 *)(iStack_28 + uVar4) & uVar5 & 0xff) != 0) {
                            iVar8 = iVar8 + 1;
                        }
                        uVar5 = (uVar5 & 0xff) >> 1;
                    } while (uVar5 != 0);
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uStack_2c);
            }
            if (iVar8 == 0) {
                piVar6 = NULL;
            } else {
                piVar6 = (int *)(**(code **)(iStack_1c + 0x14))(iVar8 << 2, 0xf4 + a0, piVar6, a7);
            }
            *piStack_20 = iVar8;
            *piStack_24 = (int)piVar6;
            uVar4 = 0;
            if (uStack_2c != 0) {
                do {
                    bVar1 = *(u8 *)(iStack_28 + uVar4);
                    uVar5 = uVar9;
                    do {
                        if (((u32)bVar1 & uVar5 & 0xff) != 0) {
                            *piVar6 = iVar7;
                            piVar6 = piVar6 + 1;
                        }
                        uVar5 = (uVar5 & 0xff) >> 1;
                        iVar7 = iVar7 + 1;
                    } while (uVar5 != 0);
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uStack_2c);
            }
            return 0;
        }
        *(u32 *)(a0 + 0x40) = 0;
        (*(code *)puVar2)(a0 + 0x48, 7, piVar6, a7);
    }
    return 1;
}

/*
 * asr_sub_11d8fc  0x8c11d8fc
 * area name: in the asr library code range
 * called by: asr_sub_11ce8e
 */
u32 asr_sub_11d8fc(int a0) {
    u8 *puVar1;
    char cVar2;
    u32 uVar3;

    puVar1 = (&asr_sub_120348);
    *(u32 *)(a0 + 0x78) = 0;
    cVar2 = (*(code *)puVar1)(a0 + 0x48, 0x46, a0 + 0x7c, 0);
    if ((((cVar2 == '\0') && (cVar2 = (*(code *)puVar1)(a0 + 0x48, 0x47, 0x88 + a0, 0), cVar2 == '\0')) &&
         (cVar2 = (*(code *)puVar1)(a0 + 0x48, 0x48, 0x9c + a0, 0), cVar2 == '\0')) &&
        (cVar2 = (*(code *)puVar1)(a0 + 0x48, 0x49, 0xa0 + a0, 0), cVar2 == '\0')) {
        uVar3 = (*(code *)puVar1)(a0 + 0x48, 0x4a, 0xa4 + a0, 0);
    } else {
        uVar3 = 1;
    }
    return uVar3;
}

/*
 * asr_sub_11d904  0x8c11d904
 * area name: in the asr library code range
 */
u32 asr_sub_11d904(u32 unused_a0, u32 unused_a1, int a2) {
    u8 *puVar1;
    u32 uVar2;
    u32 uVar3;
    int unaff_r14;

    puVar1 = (&asr_sub_120348);
    *(u32 *)(unaff_r14 + 0x78) = 0;
    uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x46, a2 + 0x7c, 0);
    if (((((uVar2 & 0xff) == 0) &&
          (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x47, 0x88 + unaff_r14, 0), (uVar2 & 0xff) == 0)) &&
         (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x48, 0x9c + unaff_r14, 0), (uVar2 & 0xff) == 0)) &&
        (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x49, 0xa0 + unaff_r14, 0), (uVar2 & 0xff) == 0)) {
        uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x4a, 0xa4 + unaff_r14, 0);
    } else {
        uVar3 = 1;
    }
    return uVar3;
}

/*
 * asr_sub_11d996  0x8c11d996
 * area name: in the asr library code range
 * called by: asr_sub_10bd4c
 */
u32 asr_sub_11d996(int a0, int *a1, u32 *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 *ar6_00;

    ar6_00 = a2;
    iVar1 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar1 == 0) {
        if ((a1 == NULL) || (a2 == NULL)) {
            uVar2 = asr_fsm_set_result(a0 + 0x48, 0x13, ar6_00, a3);
            uVar2 = uVar2 & 0xff;
        } else {
            puVar3 = (u32 *)(**(code **)(*(int *)(a0 + 0xfc) + 0x14))(0x38, a0 + 0xf4);
            if (puVar3 == NULL) {
                *a1 = 0;
                *a2 = 0;
                uVar4 = lib11c_set_error(*(u32 *)(a0 + 0xfc), 2, ar6_00, a3);
                return uVar4;
            }
            *a2 = 0x38;
            *a1 = (int)puVar3;
            uVar4 = libgcc_divide_helper_01051c(*(u32 *)(a0 + 0x78), 100);
            puVar3[3] = uVar4;
            puVar3[9] = *(u32 *)(a0 + 0x7c);
            puVar3[0xc] = *(u32 *)(a0 + 0x80);
            puVar3[1] = *(u32 *)(a0 + 0x88);
            puVar3[2] = *(int *)(a0 + 0x90) * 10;
            puVar3[7] = *(u32 *)(a0 + 0x94);
            puVar3[8] = *(int *)(a0 + 0x98) * 10;
            puVar3[0xd] = *(u32 *)(a0 + 0x9c);
            puVar3[6] = 0x32 - *(short *)(a0 + 0xa0);
            puVar3[5] = 0x32 - *(short *)(a0 + 0xa2);
            puVar3[4] = *(u32 *)(a0 + 0xa4);
            puVar3[10] = *(u32 *)(a0 + 0xac);
            *puVar3 = *(u32 *)(a0 + 0xb0);
            uVar2 = 0;
            puVar3[0xb] = *(u32 *)(a0 + 0xbc);
        }
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * asr_sub_11d9a0  0x8c11d9a0
 * area name: in the asr library code range
 */
u32 asr_sub_11d9a0(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 uVar4;
    int *unaff_r12;
    u32 *unaff_r13;

    iVar1 = lib11c_check_handle(a0, unused_a1, a2, a3);
    if (iVar1 == 0) {
        if ((unaff_r12 == NULL) || (unaff_r13 == NULL)) {
            uVar2 = asr_fsm_set_result(a0 + 0x48, 0x13, a2, a3);
            uVar2 = uVar2 & 0xff;
        } else {
            puVar3 = (u32 *)(**(code **)(*(int *)(a0 + 0xfc) + 0x14))(0x38, a0 + 0xf4, a2, a3);
            if (puVar3 == NULL) {
                *unaff_r12 = 0;
                *unaff_r13 = 0;
                uVar4 = lib11c_set_error(*(u32 *)(a0 + 0xfc), 2, a2, a3);
                return uVar4;
            }
            *unaff_r13 = 0x38;
            *unaff_r12 = (int)puVar3;
            uVar4 = libgcc_divide_helper_01051c(*(u32 *)(a0 + 0x78), 100);
            puVar3[3] = uVar4;
            puVar3[9] = *(u32 *)(a0 + 0x7c);
            puVar3[0xc] = *(u32 *)(a0 + 0x80);
            puVar3[1] = *(u32 *)(a0 + 0x88);
            puVar3[2] = *(int *)(a0 + 0x90) * 10;
            puVar3[7] = *(u32 *)(a0 + 0x94);
            puVar3[8] = *(int *)(a0 + 0x98) * 10;
            puVar3[0xd] = *(u32 *)(a0 + 0x9c);
            puVar3[6] = 0x32 - *(short *)(a0 + 0xa0);
            puVar3[5] = 0x32 - *(short *)(a0 + 0xa2);
            puVar3[4] = *(u32 *)(a0 + 0xa4);
            puVar3[10] = *(u32 *)(a0 + 0xac);
            *puVar3 = *(u32 *)(a0 + 0xb0);
            uVar2 = 0;
            puVar3[0xb] = *(u32 *)(a0 + 0xbc);
        }
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * asr_sub_11daa4  0x8c11daa4
 * area name: in the asr library code range
 * called by: asr_sub_10c2f4
 */
u32 asr_sub_11daa4(int a0, u32 *a1, int a2, u32 a3) {
    short sVar1;
    int iVar2;
    u32 uVar3;
    u32 d;
    u32 uVar4;
    int a6;

    a6 = a2;
    iVar2 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar2 != 0) {
        return 1;
    }
    if (a1 == NULL) {
        uVar4 = 0x13;
    } else if (a2 == 0x38) {
        sVar1 = *(short *)(a0 + 0x3e);
        if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
            iVar2 = asr_sub_11cc2c(a0, a1[0xd], a6, a3);
            if (iVar2 == 0) {
                d = 10;
                *(int *)(a0 + 0x78) = a1[3] * 100;
                *(u32 *)(a0 + 0x7c) = a1[9];
                *(u32 *)(a0 + 0x80) = a1[0xc];
                *(u32 *)(a0 + 0x84) = 0;
                *(u32 *)(a0 + 0x88) = a1[1];
                *(u32 *)(a0 + 0x8c) = *a1;
                uVar4 = libgcc_divide_helper_01051c(a1[2], 10);
                *(u32 *)(a0 + 0x90) = uVar4;
                *(u32 *)(a0 + 0x94) = a1[7];
                uVar4 = libgcc_divide_helper_01051c(a1[8], d);
                *(u32 *)(a0 + 0x98) = uVar4;
                *(u32 *)(a0 + 0x9c) = a1[0xd];
                *(short *)(a0 + 0xa0) = 0x32 - (short)a1[6];
                *(short *)(a0 + 0xa2) = 0x32 - (short)a1[5];
                *(u32 *)(a0 + 0xa4) = a1[4];
                *(u32 *)(a0 + 0xac) = a1[10];
                *(u32 *)(a0 + 0xb0) = *a1;
                *(u32 *)(a0 + 0xb4) = a1[2] << 1;
                *(u32 *)(a0 + 0xbc) = a1[0xb];
                uVar3 = asr_sub_120348(a0 + 0x48, 0x50, a0 + 0x7c, 0);
                if ((uVar3 & 0xff) != 0) {
                    return 1;
                }
                uVar3 = asr_sub_120348(a0 + 0x48, 0x51, a0 + 0x88, 0);
                if ((uVar3 & 0xff) != 0) {
                    return 1;
                }
                uVar3 = asr_sub_120348(a0 + 0x48, 0x52, a0 + 0x9c, 0);
                if ((uVar3 & 0xff) != 0) {
                    return 1;
                }
                uVar3 = asr_sub_120348(a0 + 0x48, 0x53, a0 + 0xa0, 0);
                if ((uVar3 & 0xff) != 0) {
                    return 1;
                }
                uVar3 = asr_sub_120348(a0 + 0x48, 0x54, a0 + 0xa4, 0);
                goto LAB_8c11dc70;
            }
            uVar4 = 0x14;
        } else {
            uVar4 = 7;
        }
    } else {
        uVar4 = 0x17;
    }
    uVar3 = asr_fsm_set_result(a0 + 0x48, uVar4, a6, a3);
LAB_8c11dc70:
    return uVar3 & 0xff;
}

/*
 * asr_sub_11dc7e  0x8c11dc7e
 * area name: in the asr library code range
 * called by: asr_sub_10bd20, asr_sub_11eb8c, asr_sub_11ec7c
 */
u32 asr_sub_11dc7e(int a0, u32 a1, int *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    int *ar6_00;

    ar6_00 = a2;
    iVar1 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar1 != 0) {
        return 1;
    }
    if (a2 == NULL) {
        ar5_00 = 0x13;
    LAB_8c11dd8c:
        uVar2 = asr_fsm_set_result(a0 + 0x48, ar5_00, ar6_00, a3);
        return uVar2 & 0xff;
    }
    switch (a1) {
    case 1:
        *a2 = *(int *)(a0 + 0x8c);
        return 0;
    case 2:
        iVar1 = 0x88;
        goto LAB_8c11dd50;
    case 3:
        iVar1 = 0xbc;
        goto LAB_8c11dd6a;
    case 4:
        iVar1 = *(int *)(a0 + 0x90) * 10;
        break;
    case 5:
        iVar1 = libgcc_divide_helper_01051c(*(u32 *)(a0 + 0x78), 100);
        *a2 = iVar1;
        return 0;
    case 6:
        iVar1 = 0xa4;
        goto LAB_8c11dd6a;
    case 7:
        iVar1 = 0x32 - *(short *)(a0 + 0xa2);
        break;
    case 8:
        iVar1 = 0x32 - *(short *)(a0 + 0xa0);
        goto LAB_8c11dd7a;
    case 9:
        iVar1 = 0x94;
    LAB_8c11dd50:
        iVar1 = *(int *)(iVar1 + a0);
        break;
    case 10:
        iVar1 = *(int *)(a0 + 0x98) * 10;
        goto LAB_8c11dd7a;
    case 0xb:
        iVar1 = *(int *)(a0 + 0x7c);
        break;
    case 0xc:
        iVar1 = *(int *)(a0 + 0x80);
        break;
    case 0xd:
        iVar1 = 0xac;
    LAB_8c11dd6a:
        iVar1 = *(int *)(iVar1 + a0);
    LAB_8c11dd7a:
        *a2 = iVar1;
        return 0;
    case 0xe:
        iVar1 = *(int *)(a0 + 0x9c);
        goto LAB_8c11dd7a;
    default:
        ar5_00 = 10;
        goto LAB_8c11dd8c;
    }
    *a2 = iVar1;
    return 0;
}

/*
 * asr_sub_11dda2  0x8c11dda2
 * area name: in the asr library code range
 * called by: asr_sub_10c2a2, asr_sub_10c2aa, asr_sub_11eb8c, asr_sub_11ec7c
 */
u32 asr_sub_11dda2(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    short sVar3;
    u32 uVar4;
    int ar6_00;

    ar6_00 = a2;
    iVar1 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar1 != 0) {
        return 1;
    }
    sVar3 = *(short *)(a0 + 0x3e);
    if ((((sVar3 != 0) && (sVar3 != 1)) && (sVar3 != 2)) && (sVar3 != 5)) {
        uVar4 = 7;
    override_prt_8c11e12a_7a4d7f16:
        uVar2 = asr_fsm_set_result(a0 + 0x48, uVar4, ar6_00, a3);
        return uVar2 & 0xff;
    }
    *(u32 *)(a0 + 0x40) = 0;
    ar6_00 = 10;
    uVar4 = libgcc_divide_helper_01051c(a2, 10);
    sVar3 = 0x32 - (short)a2;
    switch (a1) {
    case 1:
        *(int *)(a0 + 0x8c) = a2;
        *(int *)(a0 + 0xb0) = a2;
        uVar2 = asr_sub_120348(a0 + 0x48, 0x51, a0 + 0x88, 0);
        if ((uVar2 & 0xff) == 0) {
            asr_sub_120348(a0 + 0x48, 0x54, a0 + 0xa4, 0);
        }
        break;
    case 2:
        *(int *)(a0 + 0x88) = a2;
        asr_sub_120348(a0 + 0x48, 0x51, a0 + 0x88, 0);
        break;
    case 3:
        *(int *)(a0 + 0xbc) = a2;
        asr_sub_120348(a0 + 0x48, 0x54, a0 + 0xa4, 0);
        break;
    case 4:
        *(u32 *)(a0 + 0x90) = uVar4;
        uVar4 = libgcc_divide_helper_01051c(a2 << 1, ar6_00);
        *(u32 *)(a0 + 0xb4) = uVar4;
        uVar2 = asr_sub_120348(a0 + 0x48, 0x51, a0 + 0x88, 0);
        if ((uVar2 & 0xff) == 0) {
            asr_sub_120348(a0 + 0x48, 0x54, a0 + 0xa4, 0);
        }
        break;
    case 5:
        *(int *)(a0 + 0x78) = a2 * 100;
        break;
    case 6:
        *(int *)(a0 + 0xa4) = a2;
        asr_sub_120348(a0 + 0x48, 0x54, a0 + 0xa4, 0);
        break;
    case 7:
        *(short *)(a0 + 0xa2) = sVar3;
        asr_sub_120348(a0 + 0x48, 0x53, a0 + 0xa0, 0);
        break;
    case 8:
        *(short *)(a0 + 0xa0) = sVar3;
        asr_sub_120348(a0 + 0x48, 0x53, a0 + 0xa0, 0);
        break;
    case 9:
        *(int *)(a0 + 0x94) = a2;
        asr_sub_120348(a0 + 0x48, 0x51, a0 + 0x88, 0);
        break;
    case 10:
        *(u32 *)(a0 + 0x98) = uVar4;
        asr_sub_120348(a0 + 0x48, 0x51, a0 + 0x88, 0);
        break;
    case 0xb:
        *(int *)(a0 + 0x7c) = a2;
        asr_sub_120348(a0 + 0x48, 0x50, a0 + 0x7c, 0);
        break;
    case 0xc:
        *(int *)(a0 + 0x80) = a2;
        asr_sub_120348(a0 + 0x48, 0x50, a0 + 0x7c, 0);
        break;
    case 0xd:
        *(int *)(a0 + 0xac) = a2;
        asr_sub_120348(a0 + 0x48, 0x54, a0 + 0xa4, 0);
        break;
    case 0xe:
        iVar1 = asr_sub_11cc2c(a0, a2, ar6_00, a3);
        if (iVar1 != 0) {
            uVar4 = 0x14;
            goto override_prt_8c11e12a_7a4d7f16;
        }
        *(int *)(a0 + 0x9c) = a2;
        asr_sub_120348(a0 + 0x48, 0x52, a0 + 0x9c, 0);
        break;
    default:
        uVar4 = 10;
        goto override_prt_8c11e12a_7a4d7f16;
    }
    return *(u32 *)(a0 + 0x40);
}

/*
 * asr_sub_11e146  0x8c11e146
 * area name: in the asr library code range
 * called by: asr_sub_10bb6e
 */
u32 asr_sub_11e146(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar1 != 0) {
        return 1;
    }
    *(u32 *)(a0 + 0x40) = 0;
    asr_sub_120348(a0 + 0x48, 0x35, a1 & 0xffff, 0);
    return *(u32 *)(a0 + 0x40);
}

/*
 * asr_sub_11e190  0x8c11e190
 * area name: in the asr library code range
 * called by: asr_sub_10be70
 */
u32 asr_sub_11e190(int a0, u32 *a1) {
    u32 uVar1;
    u32 uVar2;

    if (a0 == 0) {
        return 6;
    }
    if (*(int *)(0xf0 + a0) != 0x218df4f5) {
        uVar1 = lib11c_set_error(*(u32 *)(0xfc + a0), 0xb);
        return uVar1;
    }
    if (a1 == NULL) {
        uVar2 = asr_fsm_set_result(a0 + 0x48, 0x13);
        return uVar2 & 0xff;
    }
    *a1 = (u32) * (u16 *)(a0 + 0x3e);
    return 0;
}

/*
 * asr_sub_11e194  0x8c11e194
 * area name: in the asr library code range
 */
u32 asr_sub_11e194(u32 unused_a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int unaff_r14;

    if (unaff_r14 == 0) {
        return 6;
    }
    if (*(int *)(0xf0 + unaff_r14) != 0x218df4f5) {
        uVar1 = lib11c_set_error(*(u32 *)(0xfc + unaff_r14), 0xb);
        return uVar1;
    }
    if (a1 == NULL) {
        uVar2 = asr_fsm_set_result(unaff_r14 + 0x48, 0x13, a2, a3);
        return uVar2 & 0xff;
    }
    *a1 = (u32) * (u16 *)(unaff_r14 + 0x3e);
    return 0;
}

/*
 * asr_sub_11e214  0x8c11e214
 * area name: in the asr library code range
 * called by: asr_sub_10bdee
 */
u32 asr_sub_11e214(int a0, u16 *a1) {
    u32 uVar1;
    u32 uVar2;

    if (a0 == 0) {
        return 6;
    }
    if (*(int *)(0xf0 + a0) != 0x218df4f5) {
        uVar1 = lib11c_set_error(*(u32 *)(0xfc + a0), 0xb);
        return uVar1;
    }
    if (a1 == NULL) {
        uVar2 = asr_fsm_set_result(a0 + 0x48, 0x13);
        return uVar2 & 0xff;
    }
    *a1 = **(u16 **)(0x22c + a0);
    return 0;
}

/*
 * asr_sub_11e218  0x8c11e218
 * area name: in the asr library code range
 */
u32 asr_sub_11e218(u32 unused_a0, u16 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int unaff_r14;

    if (unaff_r14 == 0) {
        return 6;
    }
    if (*(int *)(0xf0 + unaff_r14) != 0x218df4f5) {
        uVar1 = lib11c_set_error(*(u32 *)(0xfc + unaff_r14), 0xb);
        return uVar1;
    }
    if (a1 == NULL) {
        uVar2 = asr_fsm_set_result(unaff_r14 + 0x48, 0x13, a2, a3);
        return uVar2 & 0xff;
    }
    *a1 = **(u16 **)(0x22c + unaff_r14);
    return 0;
}

/*
 * asr_sub_11e274  0x8c11e274
 * area name: in the asr library code range
 * called by: asr_sub_10be22
 */
u32 asr_sub_11e274(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar1 != 0) {
        return 1;
    }
    if (a1 == 0) {
        uVar2 = asr_fsm_set_result(a0 + 0x48, 0x13, a2, a3);
        return uVar2 & 0xff;
    }
    *(u32 *)(a0 + 0x40) = 0;
    asr_sub_120348(a0 + 0x48, 5, a1, 0);
    return *(u32 *)(a0 + 0x40);
}

/*
 * asr_sub_11e2de  0x8c11e2de
 * area name: in the asr library code range
 */
u32 asr_sub_11e2de(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar5 = a2;
    iVar1 = asr_check_object(a0, a1, a2, a3);
    if (iVar1 == 0) {
        if (a1 == 0) {
            lib11c_set_error(a0, 0x13, iVar5, a3);
        } else {
            iVar1 = a1;
            if (a2 == 0) {
                iVar1 = (**(code **)(a0 + 0x14))(*(u32 *)(a1 + 4), a0 + 8, iVar5, a3);
                if (iVar1 == 0) {
                    lib11c_set_error(a0, 0x71, iVar5, a3);
                    return 0;
                }
                iVar5 = *(int *)(a1 + 4);
                memmove(iVar1, a1, iVar5);
            }
            iVar4 = a0 + 8;
            piVar2 = (int *)(**(code **)(a0 + 0x14))(0x1c, iVar4, iVar5, a3);
            if (piVar2 != NULL) {
                piVar2[1] = 0;
                piVar2[2] = (u32)(a2 == 0);
                iVar3 = (**(code **)(a0 + 0x1c))(a0 + 8, iVar4, iVar5, a3);
                piVar2[3] = iVar3;
                iVar4 = (**(code **)(a0 + 0x20))(a0 + 8, iVar4, iVar5, a3);
                iVar5 = 0x2d79b6f5;
                piVar2[4] = iVar4;
                piVar2[6] = iVar5;
                *piVar2 = iVar1;
                piVar2[5] = a0;
                return piVar2;
            }
            lib11c_set_error(a0, 0x71, iVar5, a3);
        }
    }
    return 0;
}

/*
 * asr_sub_11e3ea  0x8c11e3ea
 * area name: in the asr library code range
 * called by: asr_sub_10bb3a
 */
u32 asr_sub_11e3ea(int a0, int a1, u32 *a2, u32 *a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 a5;
    u32 *a6;
    u32 *ar7_00;

    a6 = a2;
    ar7_00 = a3;
    iVar2 = lib11c_check_handle(a0, a1, a2, a3);
    puVar1 = (&asr_fsm_set_result);
    if (iVar2 == 0) {
        if ((a2 == NULL) || (a3 == NULL)) {
            a5 = 0x13;
        } else if (a1 == 4) {
            if ((*(short *)(a0 + 0x3e) == 2) || (*(short *)(a0 + 0x3e) == 1)) {
                uVar3 = asr_sub_11d14c(a0, a2, a3);
                if ((uVar3 & 0xff) == 0) {
                    return 0;
                }
                goto LAB_8c11e476;
            }
            a5 = 7;
            *a2 = 0;
            *a3 = 0;
        } else {
            a5 = 0xd;
            *a2 = 0;
            *a3 = 0;
        }
        uVar3 = (*(code *)puVar1)(a0 + 0x48, a5, a6, ar7_00);
        uVar3 = uVar3 & 0xff;
    } else {
    LAB_8c11e476:
        uVar3 = 1;
    }
    return uVar3;
}

/*
 * asr_sub_11e48a  0x8c11e48a
 * area name: in the asr library code range
 * called by: asr_sub_10bbf2
 */
u32 asr_sub_11e48a(int a0, u32 *a1, u32 *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 *a6;

    a6 = a2;
    iVar1 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar1 == 0) {
        if ((a1 == NULL) || (a2 == NULL)) {
            uVar2 = asr_fsm_set_result(a0 + 0x48, 0x13, a6, a3);
            uVar2 = uVar2 & 0xff;
        } else {
            iVar1 = *(int *)(0xfc + a0);
            uVar2 = (u32)(*(int *)(0x100 + a0) != 0);
            *a2 = uVar2;
            if (uVar2 == 0) {
                *a1 = 0;
            } else {
                puVar3 = (u32 *)(**(code **)(iVar1 + 0x14))(8, 0xf4 + a0, a6, a3);
                *a1 = puVar3;
                if (*(int *)(0x100 + a0) != 0) {
                    *puVar3 = *(u32 *)(0x100 + a0);
                }
            }
            uVar2 = 0;
        }
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * asr_sub_11e534  0x8c11e534
 * area name: in the asr library code range
 * called by: asr_lib_bind_recognizer_model, asr_sub_10b852
 */
u32 asr_sub_11e534(int *a0, int *a1, int a2, u8 *a3) {
    short sVar1;
    u8 *puVar2;
    int iVar3;
    u32 uVar4;
    int *ar5_00;
    u32 uVar5;
    int iVar6;
    u32 *ar7_00;
    int iVar7;
    u32 uStack_2c;
    int *piStack_28;
    u32 auStack_24[2];

    ar7_00 = &uStack_2c;
    iVar7 = *(int *)((int)0xfc + (int)a0);
    uStack_2c = 0;
    ar5_00 = a1;
    piStack_28 = a0;
    iVar3 = lib11c_check_handle(a0, a1, a2, a3);
    puVar2 = (&asr_fsm_set_result);
    if (iVar3 != 0) {
        return 1;
    }
    sVar1 = *(short *)((int)piStack_28 + 0x3e);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
        if (a1 == NULL) {
            iVar3 = (int)0x100;
            if (*(int *)(iVar3 + (int)a0) == 0) {
                return 0;
            }
            iVar6 = (int)0xf4;
            *(int *)(*(int *)(iVar3 + (int)a0) + 4) = *(int *)(*(int *)(iVar3 + (int)a0) + 4) + -1;
            *(u32 *)(iVar3 + (int)a0) = 0;
            (**(code **)(iVar7 + 0x18))(*(u32 *)(iVar3 + 8 + (int)a0), iVar6 + (int)a0, a2, a3);
            iVar3 = (int)0x108;
            *(u32 *)(iVar3 + (int)a0) = 0;
            if ((*(int *)(iVar3 + -4 + (int)a0) != 0) && (iVar3 = asr_sub_11ea3c(a0, 0, a2, a3), iVar3 != 0)) {
                return 1;
            }
            uVar4 = asr_set_state_notify(a0, 0);
            goto LAB_8c11e7fa;
        }
        iVar3 = asr_sub_11cad4(a1, ar5_00, a2, a3);
        if (iVar3 != 0) {
            return 1;
        }
        if (*(int *)*a1 == 4) {
            auStack_24[0] = 0;
            if (*(int *)(*a1 + 4) == 8) {
                iVar3 = 0;
            LAB_8c11e7c4:
                uVar4 = asr_sub_120348(a0 + 0x12, 0x26, iVar3, auStack_24);
                if ((uVar4 & 0xff) != 0) {
                    return 1;
                }
                return 0;
            }
            iVar3 = *a1 + 8;
            piStack_28 = *(int **)((int)0x100 + (int)a0);
            if (piStack_28 != NULL) {
                a2 = (int)0x80;
                iVar7 = memcmp(iVar3, *piStack_28 + 8, a2);
                if (iVar7 == 0) {
                    iVar3 = iVar3 + 0x80;
                    goto LAB_8c11e7c4;
                }
            }
            uVar5 = lib11c_set_error(*(u32 *)((int)0xfc + (int)a0), 0xc, a2, a3);
            return uVar5;
        }
        if (*(int *)*a1 != 10) {
            uVar4 = (*(code *)puVar2)(a0 + 0x12, 0xd, a2, a3);
            goto LAB_8c11e7fa;
        }
        if (*(int *)((int)0x100 + (int)a0) == 0) {
            iVar3 = (int)0xf4 + (int)a0;
            uVar5 = (**(code **)(iVar7 + 0x14))((int)0xd4, iVar3, a2, a3);
            *(u32 *)((int)0x108 + (int)a0) = uVar5;
            if (*(int *)((int)0x108 + (int)a0) == 0) {
                return 1;
            }
            memmove_wrap_11066a(*(u32 *)((int)0x108 + (int)a0), iVar3, a2, a3);
        } else {
            iVar3 = *(int *)((int)0x100 + (int)a0);
            *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
        }
        iVar3 = (int)0x108;
        **(int **)(iVar3 + (int)a0) = *a1;
        if ((*(int *)(iVar3 + -4 + (int)a0) != 0) && (iVar3 = asr_sub_11ea3c(a0, 0, a2, a3), iVar3 != 0)) {
            return 1;
        }
        a2 = *(int *)((int)0x108 + (int)a0);
        uVar4 = asr_sub_120348(a0 + 0x12, 0x25, a2, &uStack_2c);
        if ((uVar4 & 0xff) != 0) {
            return 1;
        }
        uVar5 = *(u32 *)((int)0x9c + (int)a0);
        iVar3 = asr_sub_11cc2c(a0, uVar5, a2, ar7_00);
        if (iVar3 == 0) {
            piStack_28 = *(int **)((int)0x108 + (int)a0);
            uVar4 = (**(code **)((int)piStack_28 + 8))(piStack_28, uVar5, a2, ar7_00);
            uStack_2c = 0;
            if ((uVar4 & 0xffff) != 0) {
                do {
                    uVar5 = (**(code **)((int)0x84 + *(int *)((int)0x108 + (int)a0)))(*(int *)((int)0x108 + (int)a0),
                                                                                      uStack_2c, a2, ar7_00);
                    iVar3 = (int)0x28c;
                    iVar7 = uStack_2c * 4;
                    iVar6 = *(int *)((int)0x108 + (int)a0);
                    uVar5 = (**(code **)(0x108 + -0x44 + iVar6))(iVar6, uVar5, a2, ar7_00);
                    *(u32 *)((int)a0 + iVar7 + iVar3) = uVar5;
                    uStack_2c = uStack_2c + 1;
                } while (uStack_2c < (uVar4 & 0xffff));
            }
            *(int **)((int)0x100 + (int)a0) = a1;
            a1[1] = a1[1] + 1;
            return 0;
        }
        uVar5 = 0x14;
    } else {
        uVar5 = 7;
        ar7_00 = (u32 *)a3;
    }
    uVar4 = (*(code *)puVar2)(a0 + 0x12, uVar5, a2, ar7_00);
LAB_8c11e7fa:
    return uVar4 & 0xff;
}

/*
 * asr_sub_11e82c  0x8c11e82c
 * area name: in the asr library code range
 * called by: asr_sub_10bad4
 */
u32 asr_sub_11e82c(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = asr_sub_11cad4(a0, unused_a1, a2, a3);
    if (iVar1 == 0) {
        iVar1 = a0[5];
        if (a0[1] != 0) {
            uVar2 = lib11c_set_error(iVar1, 9);
            return uVar2;
        }
        a0[6] = 0;
        if (a0[2] != 0) {
            (**(code **)(iVar1 + 0x18))(*a0, iVar1 + 8, a2, a3);
        }
        (**(code **)(iVar1 + 0x18))(a0, iVar1 + 8, a2, a3);
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * asr_sub_11e896  0x8c11e896
 * area name: in the asr library code range
 * called by: asr_sub_11e8d6
 */
int asr_sub_11e896(int a0, int a1, u32 a2, u32 a3) {
    int ar4_00;

    ar4_00 = (**(code **)(a0 + 0x14))(*(u32 *)(a1 + 4), a0 + 8, a2, a3);
    if (ar4_00 != 0) {
        memmove(ar4_00, a1, *(u32 *)(a1 + 4));
    }
    return ar4_00;
}

/*
 * asr_sub_11e8d6  0x8c11e8d6
 * area name: in the asr library code range
 */
u32 asr_sub_11e8d6(int a0, int *a1, int a2, u32 a3) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 uVar4;
    int a6;

    a6 = a2;
    iVar1 = asr_check_object(a0, a1, a2, a3);
    if (iVar1 == 0) {
        if (a1 == NULL) {
            lib11c_set_error(a0, 0x13, a6, a3);
        } else if (*a1 == 2) {
            if ((a2 != 0) || (a1 = (int *)asr_sub_11e896(a0, a1, a6, a3), a1 != NULL)) {
                iVar1 = a0 + 8;
                puVar2 = (u32 *)(**(code **)(a0 + 0x14))(0x1c, iVar1, a6, a3);
                if (puVar2 != NULL) {
                    puVar2[1] = 0;
                    puVar2[2] = (u32)(a2 == 0);
                    uVar3 = (**(code **)(a0 + 0x1c))(a0 + 8, iVar1, a6, a3);
                    puVar2[3] = uVar3;
                    uVar4 = (**(code **)(a0 + 0x20))(a0 + 8, iVar1, a6, a3);
                    uVar3 = 0x2783d5f5;
                    puVar2[4] = uVar4;
                    puVar2[6] = uVar3;
                    *puVar2 = a1;
                    puVar2[5] = a0;
                    return puVar2;
                }
                lib11c_set_error(a0, 0x71, a6, a3);
            }
        } else {
            lib11c_set_error(a0, 0xd, a6, a3);
        }
    }
    return 0;
}

/*
 * asr_sub_11e9b4  0x8c11e9b4
 * area name: in the asr library code range
 * called by: asr_sub_10ba7c
 */
u32 asr_sub_11e9b4(u32 *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = asr_sub_11cb54(a0, a1, a2, a3);
    if (iVar1 == 0) {
        iVar1 = a0[5];
        if (a0[1] != 0) {
            uVar2 = lib11c_set_error(iVar1, 5);
            return uVar2;
        }
        a0[6] = 0;
        if (a0[2] != 0) {
            (**(code **)(iVar1 + 0x18))(*a0, iVar1 + 8, a2, a3);
        }
        (**(code **)(iVar1 + 0x18))(a0, iVar1 + 8, a2, a3);
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * asr_sub_11ea3c  0x8c11ea3c
 * area name: in the asr library code range
 * called by: asr_sub_10b6cc, asr_sub_11e534, asr_sub_11f66a
 */
u32 asr_sub_11ea3c(int a0, int *a1, int a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 ar5_00;
    int *ar5_01;
    int aiStack_5c[20];
    u32 uStack_c;

    uStack_c = 0;
    ar5_01 = a1;
    iVar2 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar2 == 0) {
        if ((*(short *)(a0 + 0x3e) != 2) && (*(short *)(a0 + 0x3e) != 1)) {
            ar5_00 = 7;
            uVar4 = *(u32 *)(0xfc + a0);
        LAB_8c11eaae:
            uVar4 = lib11c_set_error(uVar4, ar5_00, a2, a3);
            return uVar4;
        }
        *(u32 *)(a0 + 0x40) = 0;
        if (a1 != NULL) {
            a2 = (int)0x80;
            ar5_01 = (int *)(**(int **)(0x100 + a0) + 8);
            iVar2 = memcmp(*a1 + 8, ar5_01, a2);
            if (iVar2 != 0) {
                ar5_00 = 0xc;
                uVar4 = *(u32 *)(0xfc + a0);
                goto LAB_8c11eaae;
            }
        }
        iVar2 = (int)0x104;
        if (*(int *)(iVar2 + a0) != 0) {
            *(int *)(*(int *)(iVar2 + a0) + 4) = *(int *)(*(int *)(iVar2 + a0) + 4) + -1;
        }
        puVar1 = (&asr_set_state_notify);
        if (a1 == NULL) {
            *(u32 *)(iVar2 + a0) = 0;
            uVar3 = (*(code *)puVar1)(a0, 1, a2, a3);
            return uVar3 & 0xff;
        }
        iVar2 = asr_sub_11cb54(a1, ar5_01, a2, a3);
        if (iVar2 == 0) {
            memmove_wrap_10ca2e();
            aiStack_5c[0] = *a1;
            uVar3 = asr_sub_120348(a0 + 0x48, 0x24, aiStack_5c, 0);
            if ((uVar3 & 0xff) == 0) {
                iVar2 = (int)0x104;
                a1[1] = a1[1] + 1;
                *(int **)(iVar2 + a0) = a1;
                return *(u32 *)(a0 + 0x40);
            }
        }
    }
    return 1;
}

/*
 * asr_sub_11eb6c  0x8c11eb6c
 * area name: in the asr library code range
 * called by: asr_sub_10b1ec, asr_sub_10bb9a, asr_sub_10bba8
 */
u32 asr_sub_11eb6c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = lib11c_check_handle(a0, unused_a1, a2, a3);
    if (iVar1 != 0) {
        return 0;
    }
    return *(u32 *)(0x104 + a0);
}

/*
 * asr_sub_11eb8c  0x8c11eb8c
 * area name: in the asr library code range
 * called by: asr_sub_11d5d4, asr_sub_11f258
 */
u32 asr_sub_11eb8c(int a0) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 ar6_00;
    u32 uVar4;
    u32 auStack_c[2];

    uVar4 = 0;
    uVar1 = asr_sub_120348(a0 + 0x48, 0x11, 0, 0);
    if (((uVar1 & 0xff) == 0) && (iVar2 = asr_sub_11dc7e(a0, 1, auStack_c, uVar4), iVar2 == 0)) {
        ar6_00 = 0;
        uVar3 = 1;
        iVar2 = asr_sub_11dda2(a0, 1, 0, uVar4);
        if ((iVar2 == 0) && (uVar1 = asr_sub_12212e(a0), (uVar1 & 0xff) == 0)) {
            uVar3 = 0;
            uVar1 = asr_sub_122230(a0, (&DATA_8c127c1d), 0);
            if (((uVar1 & 0xff) == 0) && (uVar1 = asr_sub_1222b4(a0, (&DATA_8c127c1d)), (uVar1 & 0xff) == 0)) {
                uVar4 = 0;
                uVar1 = asr_sub_120348(a0 + 0x48, 0x15, 0, 0);
                if (((uVar1 & 0xff) == 0) && (iVar2 = asr_sub_11dda2(a0, 1, auStack_c[0], uVar4), iVar2 == 0)) {
                    *(u16 *)(0x144 + a0) = 0;
                    return 0;
                }
            }
        }
    }
    return 1;
}

/*
 * asr_sub_11ec7c  0x8c11ec7c
 * area name: in the asr library code range
 * called by: asr_sub_11d5d4, asr_sub_11f258
 */
u32 asr_sub_11ec7c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u16 uVar1;
    u32 *puVar2;
    int a4;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    int *piVar6;
    float *pfVar7;
    int iVar8;
    int a5;
    int *ar6_00;
    u32 *ar7_00;
    u32 ar7_01;
    int iVar9;
    int iVar10;
    float fVar12;
    u64 uVar11;
    u64 in_dr12;
    u64 uVar13;
    float fVar14;
    u64 in_dr14;
    code *pcVar15;
    char cVar16;
    u32 uStack_58;
    int iStack_54;
    u32 uStack_50;
    u32 *puStack_4c;
    int iStack_48;
    u32 uStack_44;
    u32 uStack_40;
    int iStack_3c;
    u32 uStack_38;
    int iStack_34;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    uStack_28 = (u32)in_dr12;
    uStack_2c = (u32)((u64)in_dr12 >> 0x20);
    iVar10 = *(int *)(a0 + 0xfc);
    uStack_40 = 0x1e;
    if (*(int *)(a0 + 0x14c) == 0) {
    LAB_8c11f120:
        uVar5 = 0;
    } else {
        iStack_34 = a0;
        a4 = (**(code **)(iVar10 + 0x14))(0x78, a0 + 0xf4, a2, a3);
        fVar14 = (float)in_dr14;
        if (a4 == 0) {
            uVar5 = lib11c_set_error(iVar10, 1, a2, a3);
            return uVar5;
        }
        iVar8 = *(int *)(a0 + 0x14c);
        iVar9 = *(int *)(iVar8 + 0xc);
        puStack_4c = *(u32 **)(iVar8 + 0x10);
        uVar1 = *(u16 *)(iVar9 + 0x14);
        *(u32 *)(iVar8 + 0x10) = 0;
        asr_sub_11c5e4(a0, &iStack_48, *(u32 *)(a0 + 0x14c), 0, 0);
        ar7_00 = NULL;
        *(u32 **)(*(int *)(a0 + 0x14c) + 0x10) = puStack_4c;
        puStack_4c = *(u32 **)(*(int *)(iStack_48 + 4) + 0x14);
        uVar3 = asr_sub_120348(a0 + 0x48, 0x11, 0, 0);
        if (((uVar3 & 0xff) == 0) && (iVar8 = asr_sub_11dc7e(a0, 1, &uStack_38, ar7_00), iVar8 == 0)) {
            ar6_00 = NULL;
            iVar8 = asr_sub_11dda2(a0, 1, 0, ar7_00);
            if (iVar8 == 0) {
                iVar8 = 0;
                cVar16 = '\0';
                uVar3 = asr_sub_11d432(a0, 0);
                if ((uVar3 & 0xff) == 0) {
                    uVar3 = (u32)uVar1;
                    if (cVar16 == '\0') {
                        uVar13 = 0x445925b1;
                        pcVar15 = (code *)0x3a83126e;
                    } else {
                        uVar13 = 0x445925b100000000;
                        fVar14 = 0.0009999999;
                        pcVar15 = asr_sub_12212e;
                    }
                    while (true) {
                        puStack_4c = puStack_4c + 4;
                        iVar9 = *(int *)(iVar9 + 0x10);
                        if (*(int *)(iVar9 + 0x10) == 0)
                            break;
                        uStack_44 = (u32) * (u16 *)(iVar9 + 0x14);
                        uVar4 = asr_sub_12212e(a0);
                        if (((uVar4 & 0xff) != 0) ||
                            (uVar4 = asr_sub_12215c(a0, &g_8c127c1d, 0, uVar3, uStack_44), (uVar4 & 0xff) != 0))
                            goto LAB_8c11f0fa;
                        ar6_00 = &iStack_54;
                        ar7_00 = &uStack_58;
                        uVar4 = asr_sub_120348(a0 + 0x48, 0x20, ar6_00, &uStack_58);
                        if (((uVar4 & 0xff) != 0) ||
                            (uVar4 = asr_sub_120284(iStack_34, &g_8c127c1d, ar6_00, ar7_00), (uVar4 & 0xff) != 0))
                            goto LAB_8c11f0fa;
                        iVar8 = a0 + 0xf4;
                        (**(code **)(iVar10 + 0x18))(puStack_4c[3], iVar8, ar6_00, ar7_00);
                        puVar2 = puStack_4c;
                        *puStack_4c = uStack_58;
                        if (uStack_58 != 0) {
                            a5 = a0 + 0xf4;
                            iVar8 = uStack_58 * 0xc;
                            cVar16 = '\0';
                            uVar3 = (**(code **)(iVar10 + 0x14))(iVar8, a5, ar6_00, ar7_00);
                            puVar2[3] = uVar3;
                            if (uStack_40 < uStack_58) {
                                uStack_40 = uStack_58;
                                (**(code **)(iVar10 + 0x18))(a4, a0 + 0xf4, ar6_00, ar7_00);
                                iVar8 = uStack_40 << 2;
                                a5 = a0 + 0xf4;
                                cVar16 = '\0';
                                a4 = (**(code **)(iVar10 + 0x14))(iVar8, a5, ar6_00, ar7_00);
                            }
                            if (cVar16 == '\0') {
                                fVar14 = (float)((u64)uVar13 >> 0x20);
                            }
                            uVar4 = 0;
                            if (uStack_58 != 0) {
                                do {
                                    iStack_3c = uVar4 * 4;
                                    pfVar7 = (float *)(iStack_3c + a4);
                                    uVar11 = 0x408f400000000000;
                                    cVar16 = '\0';
                                    thunk_FUN_8c013cd8();
                                    uVar4 = uVar4 + 1;
                                    fVar12 = (float)((u64)uVar11 >> 0x20);
                                    if (cVar16 == '\0') {
                                        *pfVar7 = fVar12;
                                    } else {
                                        *(u64 *)pfVar7 = uVar11;
                                    }
                                    fVar14 = fVar14 + fVar12;
                                } while (uVar4 < uStack_58);
                                uVar4 = 0;
                                if (uStack_58 != 0) {
                                    do {
                                        fVar12 = (float)((u64)uVar11 >> 0x20);
                                        if (*(float *)(uVar4 * 4 + a4) / fVar14 <= (float)pcVar15) {
                                            *(u32 *)(uVar4 * 0xc + uVar3) = 6000;
                                        } else {
                                            piVar6 = (int *)(uVar4 * 0xc + uVar3);
                                            thunk_FUN_8c013dfc();
                                            uVar11 = 0x3fe0000000000000;
                                            *piVar6 = (int)(-(fVar12 * (float)uVar13) + 0.5);
                                        }
                                        iVar8 = uVar4 * 4;
                                        a5 = uVar4 * 0xc + uVar3;
                                        *(int *)(a5 + 4) = (int)*(short *)(*(int *)(iStack_54 + iVar8) + 2);
                                        uStack_50 = CONCAT22(*(u16 *)(*(int *)(*(int *)(iStack_54 + iVar8) + 0xc) + 4),
                                                             *(u16 *)(*(int *)(*(int *)(iStack_54 + iVar8) + 0xc) + 2));
                                        uVar4 = uVar4 + 1;
                                        *(u32 *)(a5 + 8) = uStack_50;
                                    } while (uVar4 < uStack_58);
                                }
                            }
                            iVar8 = a0 + 0xf4;
                            (**(code **)(iVar10 + 0x18))(iStack_54, iVar8, ar6_00, ar7_00);
                            uVar3 = uStack_44;
                        }
                    }
                    ar7_01 = 0;
                    uVar5 = 0;
                    uVar3 = asr_sub_120348(a0 + 0x48, 0x20, 0, 0);
                    if (((uVar3 & 0xff) == 0) && (uVar3 = asr_sub_11d432(a0, 1), (uVar3 & 0xff) == 0)) {
                        uVar3 = (**(code **)(a0 + 0xc4))(iStack_48, a0 + 0xf4, uVar5, ar7_01);
                        asr_sub_11c7b8(a0, iStack_48);
                        if ((uVar3 & 0xff) != 0) {
                            return uVar3;
                        }
                        (**(code **)(iVar10 + 0x18))(a4, a0 + 0xf4, uVar5, ar7_01);
                        uVar3 = asr_set_state_notify(a0, 2);
                        if ((uVar3 & 0xff) == 0) {
                            uVar5 = 0;
                            uVar3 = asr_sub_120348(a0 + 0x48, 0x15, 0, 0);
                            if (((uVar3 & 0xff) == 0) &&
                                (iVar10 = asr_sub_11dda2(a0, 1, uStack_38, uVar5), iVar10 == 0)) {
                                *(u16 *)(a0 + 0x144) = 0;
                                goto LAB_8c11f120;
                            }
                        }
                    }
                }
            }
        }
    LAB_8c11f0fa:
        uVar5 = 1;
    }
    return uVar5;
}

/*
 * asr_sub_11f13e  0x8c11f13e
 * area name: in the asr library code range
 * called by: asr_sub_11f258
 */
u32 asr_sub_11f13e(int a0, int a1) {
    u8 *puVar1;
    u8 *puVar2;
    u8 *puVar3;
    char cVar4;
    u32 uVar5;

    puVar1 = (&asr_sub_120348);
    *(int *)(0x10c + a0) = a1;
    puVar3 = (&DATA_8c127c1d);
    puVar2 = (&DATA_8c127c18);
    if (a1 == 0) {
        *(u32 *)(a0 + 0x60) = *(u32 *)(a0 + 100);
        *(u32 *)(0x114 + a0) = 0;
        if ((*(int *)(0x88 + a0) == 0) || (*(char *)(0x234 + a0) != '\0')) {
            cVar4 = (*(code *)puVar1)(a0 + 0x48, 0x34, 0);
        } else {
            cVar4 = (*(code *)puVar1)(a0 + 0x48, 0x33, 0);
        }
    } else if (a1 == 1) {
        *(u32 *)(a0 + 0x60) = *(u32 *)(a0 + 0x68);
        *(u8 **)(0x114 + a0) = puVar2;
        cVar4 = (*(code *)puVar1)(a0 + 0x48, 0x2b, 0);
    } else {
        if (a1 != 2) {
            return 0x18;
        }
        *(u32 *)(a0 + 0x60) = *(u32 *)(a0 + 0x6c);
        *(u8 **)(0x114 + a0) = puVar3;
        cVar4 = (*(code *)puVar1)(a0 + 0x48, 0x2c, 0);
    }
    if ((cVar4 == '\0') &&
        (((*(int *)(0x88 + a0) == 0 || (a1 == 0)) || (cVar4 = (*(code *)puVar1)(a0 + 0x48, 2, 0), cVar4 == '\0')))) {
        *(u32 *)(0x110 + a0) = (u32) * (u16 *)(*(int *)(a0 + 0x60) + 0xc);
        uVar5 = 0;
    } else {
        uVar5 = 1;
    }
    return uVar5;
}

/*
 * asr_sub_11f14a  0x8c11f14a
 * area name: in the asr library code range
 */
u32 asr_sub_11f14a(u32 unused_a0, u32 a1) {
    u8 *puVar1;
    u8 *puVar2;
    u8 *puVar3;
    int in_r0;
    u32 uVar4;
    u32 uVar5;
    int unaff_r12;
    int unaff_r14;

    puVar1 = (&asr_sub_120348);
    *(u32 *)(in_r0 + unaff_r14) = a1;
    puVar3 = (&DATA_8c127c1d);
    puVar2 = (&DATA_8c127c18);
    if (unaff_r12 == 0) {
        *(u32 *)(unaff_r14 + 0x60) = *(u32 *)(unaff_r14 + 100);
        *(u32 *)(0x114 + unaff_r14) = 0;
        if ((*(int *)(0x88 + unaff_r14) == 0) || (*(char *)(0x234 + unaff_r14) != '\0')) {
            uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x34, 0, 0);
        } else {
            uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x33, 0, 0);
        }
    } else if (unaff_r12 == 1) {
        *(u32 *)(unaff_r14 + 0x60) = *(u32 *)(unaff_r14 + 0x68);
        *(u8 **)(0x114 + unaff_r14) = puVar2;
        uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x2b, 0, 0);
    } else {
        if (unaff_r12 != 2) {
            return 0x18;
        }
        *(u32 *)(unaff_r14 + 0x60) = *(u32 *)(unaff_r14 + 0x6c);
        *(u8 **)(0x114 + unaff_r14) = puVar3;
        uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48, 0x2c, 0, 0);
    }
    if (((uVar4 & 0xff) == 0) && (((*(int *)(0x88 + unaff_r14) == 0 || (unaff_r12 == 0)) ||
                                   (uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48, 2, 0, 0), (uVar4 & 0xff) == 0)))) {
        *(u32 *)(0x110 + unaff_r14) = (u32) * (u16 *)(*(int *)(unaff_r14 + 0x60) + 0xc);
        uVar5 = 0;
    } else {
        uVar5 = 1;
    }
    return uVar5;
}

/*
 * asr_sub_11f258  0x8c11f258
 * area name: in the asr library code range
 * called by: asr_sub_10b698, asr_sub_10b6a0
 */
u32 asr_sub_11f258(int a0, u32 a1, u8 *a2, int a3) {
    u8 uVar1;
    short sVar2;
    u16 uVar3;
    u8 *puVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    int iVar9;
    u8 *puVar10;
    u32 uVar11;
    int iVar12;
    u32 uVar13;

    puVar10 = a2;
    iVar9 = a3;
    iVar5 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar5 == 0) {
        if (a2 == NULL) {
            uVar11 = 0x13;
        } else {
            sVar2 = *(short *)(a0 + 0x3e);
            uVar8 = (u32)sVar2;
            if (((sVar2 == 3) || (sVar2 == 4)) || (sVar2 == 7)) {
                if (*(int *)(0x10c + a0) == 3) {
                    uVar6 = asr_sub_11f13e(a0, a1);
                    uVar8 = a1;
                    if ((uVar6 & 0xff) != 0) {
                        return uVar6 & 0xff;
                    }
                } else if (a1 != *(u32 *)(0x10c + a0)) {
                    uVar11 = 1;
                    goto override_prt_8c11f2f4_7a4d7f16;
                }
                puVar4 = (&asr_sub_120284);
                *(u32 *)(a0 + 0x40) = 0;
                uVar13 = *(u32 *)(0x110 + a0);
                for (uVar6 = a3 + (u32) * (u16 *)(0x22a + a0); uVar13 <= uVar6; uVar6 = uVar6 - uVar13) {
                    if (*(short *)(0x22a + a0) == 0) {
                        puVar10 = (u8 *)0x1;
                        uVar8 = asr_sub_111cdc(*(u32 *)(a0 + 0x60), a2, 1);
                        if ((uVar8 & 0xff) == 0)
                            goto LAB_8c11f57e;
                        if (*(int *)(0x10c + a0) == 2) {
                            puVar10 = (u8 *)0x1;
                            uVar8 = asr_sub_111cdc(*(u32 *)(a0 + 0x70), a2, 1);
                            if ((uVar8 & 0xff) == 0)
                                goto LAB_8c11f57e;
                        }
                        a2 = a2 + uVar13;
                    } else {
                        iVar5 = mring_write_advance(*(u32 *)(a0 + 0x60));
                        (*(code *)(&memmove))(iVar5, 0x150 + a0, (u32) * (u16 *)(0x22a + a0), iVar9);
                        puVar10 = (u8 *)(uVar13 - *(u16 *)(0x22a + a0));
                        (*(code *)(&memmove))(iVar5 + (u32) * (u16 *)(0x22a + a0), a2, puVar10, iVar9);
                        uVar3 = *(u16 *)(0x22a + a0);
                        *(u16 *)(0x22a + a0) = 0;
                        a2 = a2 + (uVar13 - uVar3);
                        if (*(int *)(0x10c + a0) == 2) {
                            puVar10 = (u8 *)0x1;
                            uVar8 = asr_sub_111cdc(*(u32 *)(a0 + 0x70), iVar5, 1);
                            if ((uVar8 & 0xff) == 0)
                                goto LAB_8c11f57e;
                        }
                    }
                    iVar5 = (int)0x13c;
                    *(int *)(iVar5 + a0) = *(int *)(iVar5 + a0) + 1;
                    uVar8 = (*(code *)puVar4)(a0, *(u32 *)(iVar5 + -0x28 + a0), puVar10, iVar9);
                    if ((uVar8 & 0xff) != 0)
                        goto LAB_8c11f5ba;
                    uVar8 = (u32) * (u16 *)(0x244 + a0);
                    uVar7 = asr_sub_11d488(a0, uVar8, puVar10, iVar9);
                    if ((uVar7 & 0xff) != 0)
                        goto LAB_8c11f504;
                    if (*(int *)(0x140 + a0) != 0) {
                        uVar8 = (*(code *)puVar4)(a0, *(u32 *)(0x114 + a0), puVar10, iVar9);
                        if ((uVar8 & 0xff) != 0)
                            goto LAB_8c11f5ba;
                        uVar8 = (u32) * (u16 *)(0x244 + a0);
                        uVar6 = asr_sub_11d488(a0, uVar8, puVar10, iVar9);
                    joined_r0x8c11f48c:
                        if ((uVar6 & 0xff) != 0) {
                        LAB_8c11f504:
                            return *(u32 *)(a0 + 0x40);
                        }
                        uVar6 = 0;
                        break;
                    }
                    if ((*(u32 *)(a0 + 0x78) != 0) && (*(u32 *)(a0 + 0x78) < *(u32 *)(0x13c + a0))) {
                        iVar9 = 0;
                        puVar10 = NULL;
                        uVar8 = asr_sub_120348(a0 + 0x48, 3, 0, 0);
                        if (((uVar8 & 0xff) == 0) &&
                            (uVar8 = (*(code *)puVar4)(a0, *(u32 *)(0x114 + a0), puVar10, iVar9),
                             (uVar8 & 0xff) == 0)) {
                            uVar8 = (u32) * (u16 *)(0x244 + a0);
                            uVar6 = asr_sub_11d488(a0, uVar8, puVar10, iVar9);
                            goto joined_r0x8c11f48c;
                        }
                        goto LAB_8c11f5ba;
                    }
                }
                if ((*(short *)(0x144 + a0) != 0) &&
                    (((*(short *)(0x144 + a0) == 1 && (uVar13 = asr_sub_11eb8c(a0), (uVar13 & 0xff) != 0)) ||
                      ((*(short *)(0x144 + a0) == 2 &&
                        (uVar8 = asr_sub_11ec7c(a0, uVar8, puVar10, iVar9), (uVar8 & 0xff) != 0)))))) {
                LAB_8c11f5ba:
                    return *(u32 *)(a0 + 0x40);
                }
                if (*(int *)(0x148 + a0) == 4) {
                    iVar9 = (int)0x22a;
                    uVar8 = (u32) * (u16 *)(iVar9 + a0);
                    puVar10 = (u8 *)(0x150 + a0 + uVar8);
                    for (; uVar8 < uVar6; uVar8 = uVar8 + 1) {
                        uVar1 = *a2;
                        a2 = a2 + 1;
                        *puVar10 = uVar1;
                        puVar10 = puVar10 + 1;
                    }
                    *(short *)(iVar9 + a0) = (short)uVar6;
                    goto LAB_8c11f5ba;
                }
                iVar5 = (int)0x148;
                iVar12 = (int)0xf4;
                uVar11 = *(u32 *)(iVar5 + a0);
                *(u32 *)(iVar5 + a0) = 4;
                uVar8 = (**(code **)(iVar5 + -0x7c + a0))(uVar11, iVar12 + a0, puVar10, iVar9);
                if ((uVar8 & 0xff) == 0)
                    goto LAB_8c11f5ba;
                goto LAB_8c11f57e;
            }
            uVar11 = 7;
        }
    override_prt_8c11f2f4_7a4d7f16:
        uVar8 = asr_fsm_set_result(a0 + 0x48, uVar11, puVar10, iVar9);
        uVar8 = uVar8 & 0xff;
    } else {
    LAB_8c11f57e:
        uVar8 = 1;
    }
    return uVar8;
}

/*
 * asr_sub_11f5d2  0x8c11f5d2
 * area name: in the asr library code range
 * called by: asr_sub_1225fc, asr_sub_122604
 */
u32 asr_sub_11f5d2(int a0, u32 a1, u32 a2, u32 a3) {
    short sVar1;
    int iVar2;
    u32 uVar3;
    u32 a4;
    int iVar4;

    iVar2 = lib11c_check_handle(a0, a1, a2, a3);
    if (iVar2 != 0) {
        return 1;
    }
    sVar1 = *(short *)(a0 + 0x3e);
    if (((sVar1 != 6) && (sVar1 != 8)) && (sVar1 != 9)) {
        uVar3 = asr_fsm_set_result(a0 + 0x48, 7, a2, a3);
        return uVar3 & 0xff;
    }
    uVar3 = asr_sub_121cc0(a0, a1, a2, a3);
    if (*(int *)(0x148 + a0) != 4) {
        iVar2 = (int)0x148;
        iVar4 = (int)0xf4;
        a4 = *(u32 *)(iVar2 + a0);
        *(u32 *)(iVar2 + a0) = 4;
        uVar3 = (**(code **)(iVar2 + -0x7c + a0))(a4, iVar4 + a0, a2, a3);
    }
    return uVar3 & 0xff;
}

/*
 * asr_sub_11f66a  0x8c11f66a
 * area name: in the asr library code range
 * called by: asr_sub_122630, asr_sub_122638
 */
u32 asr_sub_11f66a(int a0, int a1, int a2, u32 a3) {
    short sVar1;
    u8 *puVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    u32 a5;

    iVar5 = a2;
    iVar3 = lib11c_check_handle(a0, a1, a2, a3);
    puVar2 = (&asr_fsm_set_result);
    if (iVar3 != 0) {
        return 1;
    }
    if ((a1 == 0) || (a2 == 0)) {
        a5 = 0x13;
    } else {
        sVar1 = *(short *)(a0 + 0x3e);
        if ((sVar1 == 1) || (sVar1 == 2)) {
            iVar3 = (**(code **)(*(int *)(0x108 + a0) + 0x50))(*(int *)(0x108 + a0), (int)sVar1, iVar5, a3);
            if (iVar3 == 0) {
                a5 = 0x15;
            } else {
                if (*(int *)(0x88 + a0) == 0) {
                    if ((*(int *)(0x104 + a0) != 0) && (iVar5 = asr_sub_11ea3c(a0, 0, iVar5, a3), iVar5 != 0)) {
                        return *(u32 *)(a0 + 0x40);
                    }
                    iVar5 = 0;
                    iVar3 = 0;
                    do {
                        iVar3 = iVar3 + 3;
                        iVar6 = (int)0x118;
                        *(u32 *)(0x124 + a0 + iVar5) = *(u32 *)(0x118 + a0 + iVar5);
                        iVar7 = (int)0x118;
                        *(u32 *)(0x124 + a0 + iVar5 + 4) = *(u32 *)(iVar6 + a0 + iVar5 + 4);
                        *(u32 *)(0x124 + a0 + iVar5 + 8) = *(u32 *)(iVar7 + a0 + iVar5 + 8);
                        iVar5 = iVar5 + 0xc;
                    } while (iVar3 < 3);
                    *(u32 *)(0x148 + a0) = 4;
                    uVar4 = asr_sub_121d36(a0, 3, a1, a2);
                    goto LAB_8c11f79a;
                }
                a5 = 0x16;
            }
        } else {
            a5 = 7;
        }
    }
    uVar4 = (*(code *)puVar2)(a0 + 0x48, a5, iVar5, a3);
LAB_8c11f79a:
    return uVar4 & 0xff;
}

/*
 * asr_sub_11f7bc  0x8c11f7bc
 * area name: in the asr library code range
 * called by: asr_sub_122358
 */
int asr_sub_11f7bc(int a0, int a1, int a2, int a3) {
    int iVar1;
    int *piVar2;
    u16 *puVar3;
    u32 uVar4;
    int iVar5;
    int *piVar6;
    int iVar7;

    iVar5 = *(int *)(0xfc + a0);
    iVar1 = (int)0x2b0;
    piVar6 = (int *)(a1 * 0xc + *(int *)(iVar1 + a0) + a2 * 4);
    if ((a1 == 0) && (a2 == 0)) {
        uVar4 = 0;
        iVar7 = 0;
        piVar2 = (int *)(0x268 + a0);
        do {
            uVar4 = uVar4 + 3;
            iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
            piVar2 = piVar2 + 6;
        } while (uVar4 < 3);
        if (**(int **)(iVar1 + a0) != 0) {
            (**(code **)(iVar5 + 0x18))(**(u32 **)(iVar1 + a0), 0xf4 + a0, 0);
        }
        piVar2 = *(int **)(0x2b0 + a0);
        iVar1 = (**(code **)(iVar5 + 0x14))(iVar7 * 6, 0xf4 + a0);
        *piVar2 = iVar1;
    }
    puVar3 = (u16 *)*piVar6;
    if (a3 == 0) {
        *puVar3 = (short)0xffff;
    } else {
        for (; a3 != 0; a3 = *(int *)(a3 + 4)) {
            *puVar3 = (short)*(u32 *)(a3 + 0x14);
            puVar3 = puVar3 + 1;
        }
    }
    piVar6[1] = (int)puVar3;
    return iVar1;
}

/*
 * asr_sub_11f7d6  0x8c11f7d6
 * area name: in the asr library code range
 */
int asr_sub_11f7d6(u32 unused_a0, int a1, int a2, u32 a3) {
    int in_r0;
    int iVar1;
    int *piVar2;
    u16 *puVar3;
    u32 uVar4;
    u32 a6;
    int iVar5;
    int unaff_r11;
    int *piVar6;
    int iVar7;
    int unaff_r13;
    int unaff_r14;

    iVar5 = *(int *)(in_r0 + unaff_r13);
    iVar1 = (int)0x2b0;
    piVar6 = (int *)(unaff_r11 * 4 + *(int *)(iVar1 + unaff_r13) + a2 * 4);
    if ((a1 == 0) && (a2 == 0)) {
        uVar4 = 0;
        iVar7 = 0;
        a6 = 3;
        piVar2 = (int *)(0x268 + unaff_r13);
        do {
            uVar4 = uVar4 + 3;
            iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
            piVar2 = piVar2 + 6;
        } while (uVar4 < 3);
        if (**(int **)(iVar1 + unaff_r13) != 0) {
            (**(code **)(iVar5 + 0x18))(**(u32 **)(iVar1 + unaff_r13), 0xf4 + unaff_r13, 3, a3);
        }
        piVar2 = *(int **)(0x2b0 + unaff_r13);
        iVar1 = (**(code **)(iVar5 + 0x14))(iVar7 * 6, 0xf4 + unaff_r13, a6, a3);
        *piVar2 = iVar1;
    }
    puVar3 = (u16 *)*piVar6;
    if (unaff_r14 == 0) {
        *puVar3 = (short)0xffff;
    } else {
        for (; unaff_r14 != 0; unaff_r14 = *(int *)(unaff_r14 + 4)) {
            *puVar3 = (short)*(u32 *)(unaff_r14 + 0x14);
            puVar3 = puVar3 + 1;
        }
    }
    piVar6[1] = (int)puVar3;
    return iVar1;
}

/*
 * asr_sub_11f898  0x8c11f898
 * area name: in the asr library code range
 * called by: asr_sub_11f8de
 */
u32 asr_sub_11f898(int a0) {
    float *pfVar1;
    float fVar2;
    float fVar3;

    pfVar1 = *(float **)(a0 + 0x2c);
    fVar3 = *pfVar1;
    fVar2 = fVar3;
    while (pfVar1 = pfVar1 + 1, pfVar1 < *(float **)(a0 + 0x30)) {
        if (*pfVar1 < fVar2) {
            fVar2 = *pfVar1;
        }
        if (fVar3 < *pfVar1) {
            fVar3 = *pfVar1;
        }
    }
    return (u32)(fVar3 - fVar2 < *(float *)(a0 + 0x38));
}

/*
 * asr_sub_11f8de  0x8c11f8de
 * area name: in the asr library code range
 */
u32 asr_sub_11f8de(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    float *pfVar2;
    float *pfVar3;
    int *piVar4;
    u32 ar5_00;
    float in_fr3;
    float fVar5;
    u32 in_PR;
    char cVar6;
    float fStack_10;
    float fStack_c;
    u32 uStack_8;

    if (*(char *)(**(int **)(a0 + 0x10) + 0x30) != '\x01') {
        uVar1 = asr_sub_112170(*(u32 *)(a0 + 0xc), 2);
        if ((uVar1 & 0xff) == 0) {
            return 0;
        }
        cVar6 = '\0';
        pfVar2 = (float *)mring_read_advance(**(u32 **)(a0 + 0xc), (*(u32 **)(a0 + 0xc))[1], unused_a2, a3);
        if (cVar6 == '\0') {
            fStack_c = *pfVar2;
            uStack_8 = in_PR;
            in_fr3 = fStack_c;
        } else {
            fStack_c = (float)*(u64 *)pfVar2;
            uStack_8 = (u32)((u64) * (u64 *)pfVar2 >> 0x20);
        }
        ar5_00 = *(u32 *)(*(int *)(a0 + 0xc) + 0xc);
        cVar6 = '\0';
        pfVar2 = (float *)mring_read_advance(*(u32 *)(*(int *)(a0 + 0xc) + 8), ar5_00, unused_a2, a3);
        if (cVar6 == '\0') {
            fStack_10 = *pfVar2;
            in_fr3 = fStack_10;
        } else {
            fStack_10 = (float)*(u64 *)pfVar2;
            fStack_c = (float)((u64) * (u64 *)pfVar2 >> 0x20);
        }
        cVar6 = '\0';
        pfVar2 = (float *)mring_write_advance(**(u32 **)(a0 + 0x10));
        pfVar3 = *(float **)(a0 + 0x34);
        *(float **)(a0 + 0x34) = pfVar3 + 1;
        if (cVar6 == '\0') {
            *pfVar3 = fStack_c;
            in_fr3 = fStack_c;
        } else {
            *(u64 *)(pfVar3 + -1) = CONCAT44(uStack_8, fStack_c);
        }
        if (*(int *)(a0 + 0x34) == *(int *)(a0 + 0x30)) {
            *(u32 *)(a0 + 0x34) = *(u32 *)(a0 + 0x2c);
        }
        cVar6 = '\0';
        uVar1 = asr_sub_11f898(a0);
        pfVar3 = *(float **)(a0 + 0x44);
        if (cVar6 == '\0') {
            fVar5 = *pfVar3;
            pfVar3 = pfVar3 + 1;
        } else {
            fVar5 = (float)((u64) * (u64 *)pfVar3 >> 0x20);
            pfVar3 = pfVar3 + 2;
        }
        *(float **)(a0 + 0x44) = pfVar3;
        if (cVar6 == '\0') {
            pfVar3[-1] = fStack_10;
            in_fr3 = fStack_10;
        } else {
            *(u64 *)(pfVar3 + -2) = CONCAT44(fStack_c, fStack_10);
        }
        if (*(int *)(a0 + 0x44) == *(int *)(a0 + 0x40)) {
            *(u32 *)(a0 + 0x44) = *(u32 *)(a0 + 0x3c);
        }
        if (cVar6 == '\0') {
            in_fr3 = 0.0;
        }
        if ((in_fr3 < fVar5) && ((uVar1 & 0xff) == 0)) {
            fVar5 = fVar5 * 0.099999994;
        }
        *pfVar2 = fVar5;
    }
    piVar4 = *(int **)(a0 + 0xc);
    if ((*(int *)(piVar4[1] * 4 + *(int *)(*piVar4 + 0x40)) != *(int *)(*piVar4 + 0x3c)) &&
        (*(int *)(*(int *)(piVar4[2] + 0x40) + piVar4[3] * 4) != *(int *)(piVar4[2] + 0x3c))) {
        return 1;
    }
    return 0;
}

/*
 * asr_sub_11fa1e  0x8c11fa1e
 * area name: in the asr library code range
 */
u32 asr_sub_11fa1e(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    int in_r1;
    int a5;
    int *unaff_r13;
    int a4;

    a4 = *unaff_r13;
    if (in_r0 == in_r1) {
        (**(code **)(a4 + 0x18))(a4, unaff_r13[0xb], a2, a3);
        a5 = unaff_r13[0xf];
        (**(code **)(a4 + 0x18))(a4, a5, a2, a3);
        asr_sub_120668(unaff_r13, a5, a2, a3);
    }
    return (u32)(in_r0 == in_r1);
}

/*
 * asr_sub_11fa64  0x8c11fa64
 * area name: in the asr library code range
 */
u32 asr_sub_11fa64(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3, u32 ain0) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int a4;
    int *unaff_r14;
    float extraout_fr0;
    float extraout_fr0_00;
    u32 in_fr5;
    u64 uVar4;
    char cVar5;

    a4 = *unaff_r14;
    *(u16 *)(*(int *)unaff_r14[4] + 0xc) = (u16)ain0;
    asr_state_has_event(unaff_r14, 1, a2);
    unaff_r14[10] = (int)extraout_fr0 & 0xff;
    asr_state_has_event(unaff_r14, 2, a2);
    unaff_r14[0xe] = (int)(float)(int)(short)(int)extraout_fr0_00;
    iVar1 = (**(code **)(a4 + 0x14))(a4, unaff_r14[10] * 2 + 1, 4, a3);
    unaff_r14[0xb] = iVar1;
    uVar3 = 4;
    cVar5 = '\0';
    iVar1 = (**(code **)(a4 + 0x14))(a4, unaff_r14[10], 4, a3);
    unaff_r14[0xf] = iVar1;
    if ((unaff_r14[0xb] != 0) && (unaff_r14[0xf] != 0)) {
        uVar2 = 0;
        if (cVar5 == '\0') {
            uVar4 = (u64)in_fr5;
        } else {
            uVar4 = 0xd2084f2200000000;
        }
        if (unaff_r14[10] * 2 != -1) {
            do {
                iVar1 = uVar2 * 4;
                uVar2 = uVar2 + 1;
                if (cVar5 == '\0') {
                    *(int *)(unaff_r14[0xb] + iVar1) = (int)(uVar4 >> 0x20);
                } else {
                    *(u64 *)(unaff_r14[0xb] + iVar1) = uVar4;
                }
            } while (uVar2 < unaff_r14[10] * 2 + 1U);
        }
        unaff_r14[0xc] = unaff_r14[10] * 8 + unaff_r14[0xb] + 4;
        unaff_r14[0xd] = unaff_r14[0xb];
        unaff_r14[0x10] = unaff_r14[10] * 4 + unaff_r14[0xf];
        unaff_r14[0x11] = unaff_r14[0xf];
        return 0;
    }
    uVar3 = asr_fsm_set_result(unaff_r14, 2, uVar3, a3);
    return uVar3;
}

/*
 * asr_sub_11fb64  0x8c11fb64
 * area name: in the asr library code range
 */
u32 asr_sub_11fb64(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = (*(code *)(&asr_sub_120580))(a0, a1, 2, 1, (&asr_sub_11f8de), (&DATA_8c11fa5e), (&DATA_8c11fa14), 0x48);
    return uVar1;
}

/*
 * thunk_FUN_8c013dfc  0x8c11fb98
 * called by: asr_sub_10a2cc, asr_sub_10a564, asr_sub_10df48, asr_sub_10e6c0, asr_sub_10e6d0, asr_sub_10f22a,
 * asr_sub_110c80, asr_sub_112680 (+5 more)
 */
u32 thunk_FUN_8c013dfc(void) {
    u32 uVar1;

    uVar1 = (g_8c013dfc)();
    return uVar1;
}

/*
 * thunk_FUN_8c013cd8  0x8c11fb9e
 * called by: asr_sub_10a2cc, asr_sub_10a564, asr_sub_10df48, asr_sub_112680, asr_sub_119a18, asr_sub_119a1e,
 * asr_sub_119b16, asr_sub_11ec7c (+2 more)
 */
u32 thunk_FUN_8c013cd8(void) {
    u32 uVar1;

    uVar1 = (g_8c013cd8)();
    return uVar1;
}

/*
 * thunk_FUN_8c013d28  0x8c11fba4
 * called by: asr_sub_10f41e
 */
u32 thunk_FUN_8c013d28(void) {
    u32 uVar1;

    uVar1 = (g_8c013d28)();
    return uVar1;
}

/*
 * thunk_FUN_8c013be8  0x8c11fbaa
 * called by: asr_sub_123ea6, asr_sub_123eae
 */
u32 thunk_FUN_8c013be8(void) {
    u32 uVar1;

    uVar1 = libc_sub_013be8();
    return uVar1;
}

/*
 * thunk_FUN_8c014064  0x8c11fbb0
 * called by: asr_sub_110c80
 */
u32 thunk_FUN_8c014064(void) {
    u32 uVar1;

    uVar1 = (g_8c014064)();
    return uVar1;
}

/*
 * noop_11fbb6  0x8c11fbb6
 * does nothing
 * called by: asr_sub_10fab2, asr_sub_10fabc, asr_sub_112734
 */
u32 noop_11fbb6(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * thunk_FUN_8c0142e4  0x8c11fbbc
 * called by: asr_sub_10cccc
 */
u32 thunk_FUN_8c0142e4(void) {
    u32 uVar1;

    uVar1 = (g_8c0142e4)();
    return uVar1;
}

/*
 * thunk_FUN_8c013c88  0x8c11fbc2
 * called by: asr_sub_10cccc, asr_sub_1251e4
 */
u32 thunk_FUN_8c013c88(void) {
    u32 uVar1;

    uVar1 = (g_8c013c88)();
    return uVar1;
}

/*
 * asr_sub_11fbe4  0x8c11fbe4
 * area name: in the asr library code range
 * called by: asr_sub_11fcc4
 */
u32 asr_sub_11fbe4(int a0, int a1, int a2, int a3) {
    u32 uVar1;
    char cVar2;

    *(int *)(*(int *)(a2 + 0x34) + a3 * 4) = a1;
    if (a1 == 0) {
        uVar1 = (**(code **)(a0 + 0x24))(a0, a2, a3, a3);
        if ((uVar1 & 0xff) != 0) {
            return 1;
        }
    } else {
        cVar2 = '\0';
        if (*(char *)(a1 + 8) != '\0') {
            do {
                if (*(int *)(cVar2 * 8 + *(int *)(a1 + 0xc)) == 0) {
                    *(int *)(*(int *)(a1 + 0xc) + cVar2 * 8) = a2;
                    *(int *)(cVar2 * 8 + *(int *)(a1 + 0xc) + 4) = a3;
                    return 0;
                }
                cVar2 = cVar2 + '\x01';
            } while ((int)cVar2 < (int)(u32) * (u8 *)(a1 + 8));
        }
    }
    return 0;
}

/*
 * asr_sub_11fc5e  0x8c11fc5e
 * area name: in the asr library code range
 * called by: asr_sub_11fcc4
 */
u32 asr_sub_11fc5e(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    char cVar2;

    if (a1 == 0) {
        uVar1 = (**(code **)(a0 + 0x28))(a0, a2, a2, a3);
        if ((uVar1 & 0xff) != 0) {
            return 1;
        }
    } else {
        cVar2 = '\0';
        if (*(char *)(a1 + 9) != '\0') {
            do {
                if (*(int *)(cVar2 * 4 + *(int *)(a1 + 0x10)) == 0) {
                    *(u32 *)(cVar2 * 4 + *(int *)(a1 + 0x10)) = a2;
                    return 0;
                }
                cVar2 = cVar2 + '\x01';
            } while ((int)cVar2 < (int)(u32) * (u8 *)(a1 + 9));
        }
    }
    return 0;
}

/*
 * asr_sub_11fcc4  0x8c11fcc4
 * area name: in the asr library code range
 * called by: asr_sub_1201e6, asr_sub_1201ea
 */
u32 asr_sub_11fcc4(u16 *a0, u8 *a1, u8 *a2, u8 *a3) {
    u8 bVar1;
    char cVar2;
    u8 *pbVar3;
    u16 uVar4;
    int iVar5;
    char *a5;
    u32 uVar6;
    char *pcVar7;
    u8 *pbVar8;
    u8 *pbVar9;
    u32 uVar10;
    u32 uVar11;
    u8 *a6;
    int iVar12;
    int iVar13;
    u32 uVar14;

    uVar14 = (u32)0xff;
    iVar13 = 0;
    iVar12 = 0;
    bVar1 = *a1;
    pbVar8 = a1;
    while (bVar1 != uVar14) {
        pbVar8 = pbVar8 + 8;
        iVar13 = iVar13 + 1;
        bVar1 = *pbVar8;
    }
    bVar1 = *a2;
    uVar10 = uVar14;
    pbVar8 = a2;
    while (bVar1 != uVar14) {
        if ((uVar10 & 0xff) != (u32)*pbVar8) {
            uVar10 = (u32)(char)*pbVar8;
            iVar12 = iVar12 + 1;
        }
        pbVar8 = pbVar8 + 2;
        bVar1 = *pbVar8;
    }
    a0[1] = (u16)a1[8];
    a0[5] = (u16)*a2;
    pbVar9 = a2;
    pbVar8 = a3;
    iVar5 = (**(code **)(a0 + 8))(a0, iVar13 << 2, a2, a3);
    *(int *)(a0 + 2) = iVar5;
    if (iVar5 != 0) {
        iVar5 = (**(code **)(a0 + 8))(a0, iVar12 << 2, pbVar9, pbVar8);
        *(int *)(a0 + 6) = iVar5;
        if (iVar5 != 0) {
            a6 = (u8 *)0x1;
            a5 = (char *)(**(code **)(a0 + 10))(a0, iVar13 * 2 + iVar12, 1, pbVar8);
            pcVar7 = a5 + iVar13;
            bVar1 = *a2;
            pbVar9 = a2;
            while (bVar1 != uVar14) {
                pbVar3 = pbVar9 + 1;
                pbVar9 = pbVar9 + 2;
                a5[*pbVar3] = a5[*pbVar3] + '\x01';
                bVar1 = *pbVar9;
            }
            bVar1 = *a3;
            pbVar9 = a3;
            while (bVar1 != uVar14) {
                pcVar7[((u32)*pbVar9 - (u32)a0[5]) + iVar13] = pcVar7[((u32)*pbVar9 - (u32)a0[5]) + iVar13] + '\x01';
                pbVar3 = pbVar9 + 1;
                pbVar9 = pbVar9 + 2;
                pcVar7[*pbVar3] = pcVar7[*pbVar3] + '\x01';
                bVar1 = *pbVar9;
            }
            *a0 = 0;
            for (pbVar9 = a1; *pbVar9 != uVar14; pbVar9 = pbVar9 + 8) {
                if (*(int *)(pbVar9 + 4) == 0) {
                    if (*pbVar9 == 0) {
                        a6 = (u8 *)(int)*a5;
                        uVar10 = (**(code **)(a0 + 0x10))(a0, (int)*pcVar7, a6, pbVar8);
                        if ((uVar10 & 0xff) != 0) {
                            return 1;
                        }
                    }
                } else {
                    a1 = (u8 *)(**(code **)(pbVar9 + 4))(a0, (int)(char)*pbVar9, a6, pbVar8);
                    if (a1 == NULL) {
                        return 1;
                    }
                    if (a1[8] != pcVar7[*pbVar9]) {
                        return 1;
                    }
                    if (a1[9] != a5[*pbVar9]) {
                        return 1;
                    }
                    uVar4 = *a0;
                    *a0 = uVar4 + 1;
                    *(u8 **)(*(int *)(a0 + 2) + (u32)uVar4 * 4) = a1;
                    if (*a0 != (u16)*pbVar9) {
                        return 1;
                    }
                }
            }
            a0[4] = 0;
            uVar10 = uVar14;
            for (; *a2 != uVar14; a2 = a2 + 2) {
                if (a2[1] == 0) {
                    uVar11 = 0;
                } else {
                    uVar11 = *(u32 *)(*(int *)(a0 + 2) + ((u32)a2[1] - (u32)a0[1]) * 4);
                }
                if ((uVar10 & 0xff) != (u32)*a2) {
                    a1 = (u8 *)(*(code *)(&asr_sub_1122ac))(a0, (int)(char)*a2,
                                                            (u32)(u8)pcVar7[((u32)*a2 - (u32)a0[5]) + iVar13], pbVar8);
                    if (a1 == NULL) {
                        return 1;
                    }
                    uVar4 = a0[4];
                    a0[4] = uVar4 + 1;
                    *(u8 **)((u32)uVar4 * 4 + *(int *)(a0 + 6)) = a1;
                    uVar10 = (u32)(char)*a2;
                }
                a6 = a1;
                uVar6 = asr_sub_11fc5e(a0, uVar11, a1, pbVar8);
                if ((uVar6 & 0xff) != 0) {
                    return 1;
                }
            }
            bVar1 = *a3;
            while (true) {
                if (bVar1 == uVar14) {
                    (**(code **)(a0 + 0xc))(a0, a5, a6, pbVar8);
                    return 0;
                }
                uVar4 = a0[5];
                bVar1 = *a3;
                if (a3[1] == 0) {
                    uVar11 = 0;
                } else {
                    uVar11 = *(u32 *)(*(int *)(a0 + 2) + ((u32)a3[1] - (u32)a0[1]) * 4);
                }
                uVar10 = (int)(char)bVar1 - (int)(short)uVar4 & 0xff;
                cVar2 = pcVar7[uVar10 + iVar13];
                pcVar7[uVar10 + iVar13] = cVar2 - 1U;
                pbVar8 = (u8 *)(u32)(u8)(cVar2 - 1U);
                a6 = *(u8 **)(*(int *)(a0 + 6) + ((int)(char)bVar1 - (int)(short)uVar4 & 0xffU) * 4);
                uVar10 = asr_sub_11fbe4(a0, uVar11, a6, pbVar8);
                if ((uVar10 & 0xff) != 0)
                    break;
                a3 = a3 + 2;
                bVar1 = *a3;
            }
        }
    }
    return 1;
}

/*
 * asr_sub_11ffa8  0x8c11ffa8
 * area name: in the asr library code range
 * called by: asr_sub_12025e
 */
u32 asr_sub_11ffa8(u16 *a0) {
    u8 *puVar1;
    char cVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    uVar3 = 0;
    iVar5 = (int)0xff;
    iVar4 = 0;
    if (*a0 != 0) {
        do {
            iVar6 = *(int *)(*(int *)(a0 + 2) + iVar4 * 4);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) != 0)) {
                cVar2 = (**(code **)(iVar6 + 0x1c))(iVar6, iVar5, 0);
                uVar3 = uVar3 | cVar2 == '\0';
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(u32)*a0);
    }
    puVar1 = (&asr_sub_1113d0);
    iVar4 = 0;
    if (a0[4] != 0) {
        do {
            if (*(int *)(*(int *)(a0 + 6) + iVar4 * 4) != 0) {
                cVar2 = (*(code *)puVar1)(iVar5, 0);
                uVar3 = uVar3 | cVar2 == '\0';
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(u32)a0[4]);
    }
    (**(code **)(a0 + 0xc))(a0, *(u32 *)(a0 + 2));
    (**(code **)(a0 + 0xc))(a0, *(u32 *)(a0 + 6));
    return uVar3;
}

/*
 * asr_sub_11ffb8  0x8c11ffb8
 * area name: in the asr library code range
 */
u32 asr_sub_11ffb8(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    u32 unaff_r9;
    u32 uVar3;
    u32 uVar4;
    int a5;
    int iVar5;
    u16 *unaff_r14;

    a5 = (int)0xff;
    uVar3 = unaff_r9;
    uVar4 = unaff_r9;
    if (*unaff_r14 != 0) {
        do {
            iVar5 = *(int *)(*(int *)(unaff_r14 + 2) + uVar4 * 4);
            if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) != 0)) {
                a3 = 0;
                a2 = 0;
                uVar2 = (**(code **)(iVar5 + 0x1c))(iVar5, a5, 0, 0);
                uVar3 = uVar3 | (uVar2 & 0xff) == 0;
            }
            uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)(u32)*unaff_r14);
    }
    puVar1 = (&asr_sub_1113d0);
    if (unaff_r14[4] != 0) {
        do {
            iVar5 = *(int *)(*(int *)(unaff_r14 + 6) + unaff_r9 * 4);
            if (iVar5 != 0) {
                a3 = 0;
                a2 = 0;
                uVar4 = (*(code *)puVar1)(iVar5, a5, 0, 0);
                uVar3 = uVar3 | (uVar4 & 0xff) == 0;
            }
            unaff_r9 = unaff_r9 + 1;
        } while ((int)unaff_r9 < (int)(u32)unaff_r14[4]);
    }
    (**(code **)(unaff_r14 + 0xc))(unaff_r14, *(u32 *)(unaff_r14 + 2), a2, a3);
    (**(code **)(unaff_r14 + 0xc))(unaff_r14, *(u32 *)(unaff_r14 + 6), a2, a3);
    return uVar3;
}
