/* Seaman (USA) region 0x8c260000-0x8c270000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * cri_sub_260000  0x8c260000
 * area name: in the cri library code range
 * called by: cri_sub_260062
 */
u32 cri_sub_260000(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 8);
    (*(code *)(&vram_sub_264f86))(uVar1, *(u32 *)(a0 + 0x50), a1, *(int *)(a0 + 100) + *(int *)(a0 + 0x70) * 2);
    uVar1 = vram_sub_264fc2(uVar1);
    return uVar1;
}

/*
 * cri_sub_260006  0x8c260006
 * area name: in the cri library code range
 */
u32 cri_sub_260006(int a0, u32 a1, int a2) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 8);
    (*(code *)(&vram_sub_264f86))(uVar1, *(u32 *)(a0 + 0x50), a1, *(int *)(a2 + 0x14) + *(int *)(a2 + 0x20) * 2);
    uVar1 = vram_sub_264fc2(uVar1);
    return uVar1;
}

/*
 * cri_sub_26002c  0x8c26002c
 * area name: in the cri library code range
 * called by: cri_sub_260062
 */
u32 cri_sub_26002c(int a0, int a1) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 8);
    (*(code *)(&vram_sub_264fa4))(uVar1, *(u32 *)(a0 + 0x50), a1 << 1,
                                  *(int *)(a0 + 0x6c) * 2 + *(int *)(a0 + 100) + *(int *)(a0 + 0x70) * 2);
    uVar1 = vram_sub_264fc2(uVar1);
    return uVar1;
}

/*
 * cri_sub_260030  0x8c260030
 * area name: in the cri library code range
 */
u32 cri_sub_260030(int a0, int a1, int a2) {
    int ar7_00;
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 8);
    ar7_00 = *(int *)(a2 + 100) + *(int *)(a2 + 0x70) * 2;
    (*(code *)(&vram_sub_264fa4))(uVar1, *(u32 *)(a0 + 0x50), a1 << 1, ar7_00, *(int *)(a2 + 0x6c) * 2 + ar7_00);
    uVar1 = vram_sub_264fc2(uVar1);
    return uVar1;
}

/*
 * cri_sub_260062  0x8c260062
 * area name: in the cri library code range
 * called by: cri_sub_260284, cri_sub_2602f4
 */
u32 cri_sub_260062(int a0) {
    int ar5_00;
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int n;

    iVar4 = a0 + 0x50;
    ar5_00 = libgcc_divide_helper_010468(*(u32 *)(a0 + 0x54), *(u32 *)(a0 + 0x58));
    iVar8 = *(int *)(iVar4 + 0x28);
    iVar5 = *(int *)(iVar4 + 0x10);
    iVar9 = *(int *)(iVar4 + 0x20);
    iVar3 = iVar8 + iVar5 + -1;
    n = *(int *)(iVar4 + 0x24);
    iVar6 = *(int *)(iVar4 + 0x18);
    iVar1 = libgcc_divide_helper_010468(iVar3, iVar5);
    iVar3 = libgcc_divide_helper_010614(iVar3, iVar5);
    iVar7 = (iVar5 - iVar3) + -1;
    iVar3 = libgcc_divide_helper_010468((iVar6 - iVar9) + iVar5 + -1, iVar5);
    if ((iVar1 < iVar3) && ((iVar3 * iVar5 - iVar7) + iVar9 < *(int *)(iVar4 + 0x18))) {
        iVar3 = iVar3 + 1;
    }
    if (iVar8 < n) {
        n = n + iVar7;
    }
    iVar5 = libgcc_divide_helper_010468(n, iVar5);
    if (iVar5 < ar5_00) {
        ar5_00 = iVar5;
    }
    if (iVar1 < ar5_00) {
        ar5_00 = iVar1;
    }
    if (iVar3 < ar5_00) {
        ar5_00 = iVar3;
    }
    if (*(int *)(iVar4 + 8) == 2) {
        uVar2 = cri_sub_26002c(a0, ar5_00);
        return uVar2;
    }
    uVar2 = cri_sub_260000(a0, ar5_00);
    return uVar2;
}

/*
 * memcpy_u16  0x8c26011e
 * copies a2 16-bit values from a1 to a0
 * called by: cri_sub_26014c, memcpy_u16_wrap
 */
u32 memcpy_u16(u16 *a0, u16 *a1, int a2) {
    u16 uVar1;
    u32 in_r0;

    for (; 0 < a2; a2 = a2 + -1) {
        uVar1 = *a1;
        a1 = a1 + 1;
        *a0 = uVar1;
        a0 = a0 + 1;
    }
    return in_r0;
}

/*
 * cri_sub_26014c  0x8c26014c
 * area name: in the cri library code range
 * called by: cri_sub_260198
 */
u32 cri_sub_26014c(int a0, int a1, int a2, u32 a3) {
    u32 ain0;
    u32 uVar1;

    uVar1 = a3;
    ain0 = memcpy_u16(a0, a1 * 2 + a0, a3);
    uVar1 = memcpy_u16(a2 * 2 + a0, (a1 + a2) * 2 + a0, a3);
    return uVar1;
}

/*
 * memcpy_u16_wrap  0x8c260180
 * only calls memcpy_u16
 * called by: cri_sub_260198
 */
u32 memcpy_u16_wrap(int a0, int a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = memcpy_u16(a0, a1 * 2 + a0, a3);
    return uVar1;
}

/*
 * cri_sub_260198  0x8c260198
 * area name: in the cri library code range
 * called by: cri_sub_260284, cri_sub_2602f4
 */
u32 cri_sub_260198(int a0) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u32 ar4_00;
    int ar5_00;
    int d;
    int iVar7;

    d = *(int *)(a0 + 0x60);
    iVar4 = *(int *)(a0 + 0x5c);
    ar5_00 = *(int *)(a0 + 0x40);
    iVar5 = d + *(int *)(a0 + 0x78) + -1;
    iVar7 = *(int *)(a0 + 0x70);
    ar4_00 = *(u32 *)(a0 + 100);
    uVar6 = *(u32 *)(a0 + 0x44);
    iVar1 = libgcc_divide_helper_010468(iVar5, d);
    iVar2 = libgcc_divide_helper_010614(iVar5, d);
    iVar5 = get_field_10_264ff8(*(u32 *)(a0 + 8));
    iVar3 = libgcc_divide_helper_010468(d * iVar5, *(u32 *)(a0 + 0x58));
    if (iVar1 <= iVar5) {
        iVar3 = iVar3 - ((d - iVar2) + -1);
    }
    iVar7 = iVar7 + iVar3;
    *(int *)(a0 + 0xa0) = iVar3;
    *(int *)(a0 + 0xa4) = iVar4 * iVar5;
    if (ar5_00 <= iVar7) {
        iVar7 = iVar7 - ar5_00;
        if (*(int *)(a0 + 0x58) == 2) {
            uVar6 = cri_sub_26014c(ar4_00, ar5_00, uVar6, iVar7);
            return uVar6;
        }
        uVar6 = memcpy_u16_wrap(ar4_00, ar5_00, uVar6, iVar7);
        return uVar6;
    }
    return 0xa4;
}

/*
 * cri_sub_260284  0x8c260284
 * area name: in the cri library code range
 */
int cri_sub_260284(u32 unused_a0, int a1, int a2, int a3) {
    int iVar1;
    int unaff_r13;
    int unaff_r14;

    if ((*(int *)(unaff_r14 + 4) == 1) && (iVar1 = get_field_c_264f82(*(u32 *)(unaff_r14 + 8), a1), iVar1 == 0)) {
        a1 = unaff_r13 + 0x70;
        a3 = unaff_r13 + 0x78;
        a2 = unaff_r13 + 0x74;
        (**(code **)(0x88 + unaff_r14))(*(u32 *)(0x88 + 4 + unaff_r14), a1, a2, a3);
        cri_sub_260062(unaff_r14);
        *(u32 *)(unaff_r14 + 4) = 2;
    }
    iVar1 = *(int *)(unaff_r14 + 4);
    if (iVar1 == 2) {
        vram_sub_26501c(*(u32 *)(unaff_r14 + 8));
        iVar1 = get_field_c_264f82(*(u32 *)(unaff_r14 + 8), a1);
        if (iVar1 == 3) {
            cri_sub_260198(unaff_r14);
            vram_sub_264fea(*(u32 *)(unaff_r14 + 8));
            iVar1 = (int)0x90;
            iVar1 =
                (**(code **)(iVar1 + unaff_r14))(*(u32 *)(iVar1 + 4 + unaff_r14), *(u32 *)(iVar1 + 0x14 + unaff_r14),
                                                 *(u32 *)(iVar1 + 0x10 + unaff_r14), a3);
            *(u32 *)(unaff_r14 + 4) = 3;
        }
    }
    return iVar1;
}

/*
 * cri_sub_2602f4  0x8c2602f4
 * area name: in the cri library code range
 * called by: cri_sub_260340, cri_sub_26304a, cri_sub_26307e
 */
u32 cri_sub_2602f4(int a0) {
    int r5;
    int r6;
    int r7;
    int iVar1;
    u32 uVar2;

    if (*(short *)(0xa8 + a0) == 0) {
        if ((*(int *)(a0 + 4) == 1) && (iVar1 = get_field_c_264f82(*(u32 *)(a0 + 8)), iVar1 == 0)) {
            r5 = a0 + 0x70;
            r7 = a0 + 0x78;
            r6 = a0 + 0x74;
            (**(code **)(0x88 + a0))(*(u32 *)(0x88 + 4 + a0));
            cri_sub_260062(a0);
            *(u32 *)(a0 + 4) = 2;
        }
        iVar1 = *(int *)(a0 + 4);
        if (iVar1 == 2) {
            vram_sub_26501c(*(u32 *)(a0 + 8));
            iVar1 = get_field_c_264f82(*(u32 *)(a0 + 8));
            if (iVar1 == 3) {
                cri_sub_260198(a0);
                vram_sub_264fea(*(u32 *)(a0 + 8));
                iVar1 = (int)0x90;
                iVar1 = (**(code **)(iVar1 + a0))(*(u32 *)(iVar1 + 4 + a0), *(u32 *)(iVar1 + 0x14 + a0),
                                                  *(u32 *)(iVar1 + 0x10 + a0));
                *(u32 *)(a0 + 4) = 3;
            }
        }
        return iVar1;
    }
    if (*(short *)(0xa8 + a0) == 2) {
        uVar2 = cri_sub_260540();
        return uVar2;
    }
    if (*(short *)(0xa8 + a0) == 3) {
        uVar2 = cri_sub_25f40e();
        return uVar2;
    }
    if (*(short *)(0xa8 + a0) == 4) {
        uVar2 = cri_sub_25fb5c();
        return uVar2;
    }
    if (*(short *)(0xa8 + a0) == 1) {
        uVar2 = cri_sub_260c60();
        return uVar2;
    }
    return (int)*(short *)(0xa8 + a0);
}

/*
 * cri_sub_260340  0x8c260340
 * area name: in the cri library code range
 */
int cri_sub_260340(short *a0) {
    int iVar1;
    int unaff_r12;
    short *psVar2;
    int iVar3;

    iVar3 = (int)0xac;
    psVar2 = (short *)(unaff_r12 + (int)a0);
    do {
        iVar1 = (int)*a0;
        if (iVar1 == 1) {
            iVar1 = cri_sub_2602f4(a0);
        }
        a0 = (short *)((int)a0 + iVar3);
    } while (a0 < psVar2);
    return iVar1;
}

/*
 * cri_sub_260390  0x8c260390
 * area name: in the cri library code range
 * called by: cri_sub_26045c
 */
u32 cri_sub_260390(int a0, u32 unused_a1, short *a2, u8 *a3, u8 *s0, char *s4, char *s8, u32 *s12, int *s16, u32 *s20,
                   u16 *s24) {
    char cVar1;
    int *piVar2;

    *a2 = (u16) * (u8 *)(a0 + 7) << 4;
    *s8 = (*(u8 *)(a0 + 9) & 3) + 1;
    *s12 = (u32) * (u16 *)(a0 + 0x2a);
    cVar1 = *(char *)(a0 + 8);
    piVar2 = (int *)(a0 + 0xc);
    if (cVar1 == '\0') {
        *s0 = 0x10;
        *s4 = *s8 << 1;
        *s20 = 1;
        *s16 = (int)(*piVar2 + (u32)(*piVar2 < 0)) >> 1;
        *s24 = 0;
    } else if (cVar1 == '\x01') {
        *s0 = 8;
        *s4 = *s8;
        *s20 = 1;
        *s16 = *piVar2;
        *s24 = 1;
    } else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        *s0 = 4;
        *s4 = *s8;
        *s20 = 2;
        *s16 = *piVar2 << 1;
        *s24 = 2;
    }
    *s4 = '\x02';
    *s20 = 1;
    *s16 = (int)(*piVar2 + (u32)(*piVar2 < 0)) >> 1;
    *s0 = 0x10;
    *a3 = 0xff;
    return 0;
}

/*
 * cri_sub_26045c  0x8c26045c
 * area name: in the cri library code range
 * called by: cri_sub_25fdb2, cri_sub_25fdbe
 */
int cri_sub_26045c(int a0, u32 a1, u32 a2) {
    int iVar1;
    int a7;
    short asStack_18[2];

    a7 = a0 + 0xc;
    *(u16 *)(a0 + 2) = 1;
    iVar1 = cri_sub_260390(a1, a2, asStack_18, a7);
    if (iVar1 < 0) {
        iVar1 = 0;
    } else {
        *(u16 *)(a0 + 0x1c) = 0;
        *(u16 *)(a0 + 0x4a) = 0;
        *(u16 *)(a0 + 0x48) = 0;
        *(u16 *)(a0 + 0x26) = 0;
        *(u16 *)(a0 + 0x24) = 0;
        *(u32 *)(a0 + 0x34) = 0;
        *(u32 *)(a0 + 0x30) = 0;
        *(u32 *)(a0 + 0x2c) = 0;
        *(u32 *)(a0 + 0x28) = 0;
        *(u32 *)(a0 + 0x20) = 0;
        *(int *)(a0 + 0x58) = (int)*(char *)(a0 + 0xe);
        *(int *)(a0 + 0x5c) = (int)*(char *)(a0 + 0xf);
        *(u32 *)(a0 + 0x60) = *(u32 *)(a0 + 0x10);
        *(u32 *)(a0 + 100) = *(u32 *)(a0 + 0x3c);
        *(u32 *)(a0 + 0x68) = *(u32 *)(a0 + 0x40);
        *(u32 *)(a0 + 0x6c) = *(u32 *)(a0 + 0x44);
        *(u16 *)(a0 + 0x7c) = *(u16 *)(a0 + 0x48);
        *(u16 *)(a0 + 0x7e) = *(u16 *)(a0 + 0x4a);
        *(int *)(a0 + 0x80) = a0 + 0x4c;
        *(u32 *)(a0 + 0x9c) = 0;
        *(u32 *)(a0 + 0x98) = 0;
        *(u16 *)(a0 + 0xa8) = 2;
        memset(a0 + 0x4c, 0, 4);
        iVar1 = (int)asStack_18[0];
    }
    return iVar1;
}

/*
 * cri_sub_260540  0x8c260540
 * area name: in the cri library code range
 * called by: cri_sub_2602f4
 */
int cri_sub_260540(int a0) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;

    iVar9 = *(int *)(a0 + 0x50);
    if ((*(int *)(a0 + 4) == 1) && (iVar1 = get_field_c_264f82(*(u32 *)(a0 + 8), &g_8c4b9828), iVar1 == 0)) {
        (**(code **)(0x88 + a0))(*(u32 *)(0x88 + 4 + a0), a0 + 0x70, a0 + 0x74, a0 + 0x78);
        iVar1 = *(int *)(a0 + 0x68) - *(int *)(a0 + 0x70);
        if (*(int *)(a0 + 0x74) < iVar1) {
            iVar1 = *(int *)(a0 + 0x74);
        }
        iVar5 = *(int *)(a0 + 100);
        if (*(int *)(a0 + 0x54) < iVar1) {
            iVar1 = *(int *)(a0 + 0x54);
        }
        iVar8 = *(int *)(a0 + 0x70) * 2 + iVar5;
        if (*(char *)(a0 + 0xe) == '\x02') {
            iVar2 = *(int *)(a0 + 0x6c);
            iVar3 = *(int *)(a0 + 0x70);
            iVar10 = 0;
            iVar6 = 0;
            iVar7 = 0;
            if (0 < iVar1) {
                do {
                    iVar10 = iVar10 + 1;
                    *(u16 *)(iVar7 + iVar8) = *(u16 *)(iVar6 * 2 + iVar9);
                    iVar4 = iVar6 + 1;
                    iVar6 = iVar6 + 2;
                    *(u16 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(u16 *)(iVar4 * 2 + iVar9);
                    iVar7 = iVar7 + 2;
                } while (iVar10 < iVar1);
            }
        } else {
            iVar2 = 0;
            iVar5 = 0;
            if (0 < iVar1) {
                do {
                    iVar2 = iVar2 + 1;
                    *(u16 *)(iVar5 + iVar8) = *(u16 *)(iVar5 + iVar9);
                    iVar5 = iVar5 + 2;
                } while (iVar2 < iVar1);
            }
        }
        *(int *)(0xa0 + a0) = iVar1;
        *(int *)(0xa4 + a0) = iVar1 * *(char *)(a0 + 0xe) * 2;
        *(u32 *)(a0 + 4) = 2;
    }
    iVar9 = *(int *)(a0 + 4);
    if (iVar9 == 2) {
        iVar9 = (int)0x90;
        iVar9 = (**(code **)(iVar9 + a0))(*(u32 *)(iVar9 + 4 + a0), *(u32 *)(iVar9 + 0x14 + a0),
                                          *(u32 *)(iVar9 + 0x10 + a0));
        *(u32 *)(a0 + 4) = 3;
    }
    return iVar9;
}

/*
 * cri_sub_26054c  0x8c26054c
 * area name: in the cri library code range
 */
int cri_sub_26054c(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int *unaff_r13;
    int iVar10;
    int unaff_r14;

    iVar9 = *unaff_r13;
    if ((*(int *)(unaff_r14 + 4) == 1) && (iVar1 = get_field_c_264f82(*(u32 *)(unaff_r14 + 8), a1), iVar1 == 0)) {
        (**(code **)(0x88 + unaff_r14))(*(u32 *)(0x88 + 4 + unaff_r14), unaff_r13 + 8, unaff_r13 + 9, unaff_r13 + 10);
        iVar1 = unaff_r13[6] - unaff_r13[8];
        if (unaff_r13[9] < iVar1) {
            iVar1 = unaff_r13[9];
        }
        iVar5 = unaff_r13[5];
        if (unaff_r13[1] < iVar1) {
            iVar1 = unaff_r13[1];
        }
        iVar8 = unaff_r13[8] * 2 + iVar5;
        a3 = 0;
        if (*(char *)(unaff_r14 + 0xe) == '\x02') {
            iVar2 = unaff_r13[7];
            iVar3 = unaff_r13[8];
            iVar10 = 0;
            iVar6 = 0;
            iVar7 = 0;
            if (0 < iVar1) {
                do {
                    iVar10 = iVar10 + 1;
                    *(u16 *)(iVar7 + iVar8) = *(u16 *)(iVar6 * 2 + iVar9);
                    iVar4 = iVar6 + 1;
                    iVar6 = iVar6 + 2;
                    *(u16 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(u16 *)(iVar4 * 2 + iVar9);
                    iVar7 = iVar7 + 2;
                } while (iVar10 < iVar1);
            }
        } else {
            iVar2 = 0;
            iVar5 = 0;
            if (0 < iVar1) {
                do {
                    iVar2 = iVar2 + 1;
                    *(u16 *)(iVar5 + iVar8) = *(u16 *)(iVar5 + iVar9);
                    iVar5 = iVar5 + 2;
                } while (iVar2 < iVar1);
            }
        }
        *(int *)(0xa0 + unaff_r14) = iVar1;
        *(int *)(0xa4 + unaff_r14) = iVar1 * *(char *)(unaff_r14 + 0xe) * 2;
        *(u32 *)(unaff_r14 + 4) = 2;
    }
    iVar9 = *(int *)(unaff_r14 + 4);
    if (iVar9 == 2) {
        iVar9 = (int)0x90;
        iVar9 = (**(code **)(iVar9 + unaff_r14))(*(u32 *)(iVar9 + 4 + unaff_r14), *(u32 *)(iVar9 + 0x14 + unaff_r14),
                                                 *(u32 *)(iVar9 + 0x10 + unaff_r14), a3);
        *(u32 *)(unaff_r14 + 4) = 3;
    }
    return iVar9;
}

/*
 * cri_sub_260636  0x8c260636
 * area name: in the cri library code range
 * called by: cri_sub_25fdb2, cri_sub_25fdbe
 */
u32 cri_sub_260636(u32 a0, u32 a1) {
    int iVar1;

    iVar1 = memcmp(a0, &g_8c272048, 4);
    return (u32)(iVar1 == 0);
}

/*
 * cri_sub_260658  0x8c260658
 * area name: in the cri library code range
 * called by: cri_sub_260810
 */
u32 cri_sub_260658(int a0, u32 a1, short *a2, u8 *a3, char *s0, char *s4, char *s8, u32 *s12, u32 s16, u32 *s20,
                   u16 *s24) {
    u8 bVar1;
    u8 bVar2;
    u8 bVar3;
    u8 bVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    u32 *extraout_r2;
    u32 *extraout_r3;
    u8 *pbVar8;
    u16 *puVar9;
    u32 uVar10;

    uVar10 = 0;
    if (0 < (int)a1) {
        do {
            iVar5 = memcmp(uVar10 + a0, PTR_DAT_8c277fa0, 4);
            if (iVar5 == 0)
                break;
            uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)a1);
    }
    if (uVar10 != a1) {
        if ((int)uVar10 < 0) {
            uVar6 = ~(~uVar10 + 1 & 3) + 1;
        } else {
            uVar6 = uVar10 & 3;
        }
        if ((uVar6 == 0) && (puVar9 = (u16 *)(uVar10 + 8 + a0), *puVar9 < 2)) {
            uVar10 = 0;
            if (0 < (int)a1) {
                do {
                    iVar5 = memcmp(uVar10 + a0, PTR_DAT_8c277fa8, 4);
                    if (iVar5 == 0)
                        break;
                    uVar10 = uVar10 + 1;
                } while ((int)uVar10 < (int)a1);
            }
            if (uVar10 != a1) {
                pbVar8 = (u8 *)(uVar10 + 4 + a0);
                bVar2 = pbVar8[1];
                bVar1 = *pbVar8;
                bVar3 = pbVar8[2];
                bVar4 = pbVar8[3];
                *a2 = (short)uVar10 + 8;
                uVar10 = (u32)bVar2 << 8 | (u32)bVar3 << 0x10 | (u32)bVar4 << 0x18 | (u32)bVar1;
                *a3 = 0xff;
                *s12 = (u32) * (u8 *)((int)puVar9 + 5) << 8 | (u32)(u8)puVar9[3] << 0x10 |
                       (u32) * (u8 *)((int)puVar9 + 7) << 0x18 | (u32)(u8)puVar9[2];
                *s8 = (char)puVar9[1];
                *s0 = (char)puVar9[7];
                *s4 = (char)puVar9[6];
                uVar7 = libgcc_divide_helper_010468(uVar10, (int)*s4);
                *extraout_r3 = uVar7;
                *s20 = 1;
                if (*s0 == '\x10') {
                    *s24 = 0;
                } else if (*s0 == '\b') {
                    *s24 = 1;
                } else if (*s0 == '\x04') {
                    *s4 = *s8 << 1;
                    *s20 = 4;
                    uVar7 = libgcc_divide_helper_01051c(uVar10 >> 1, (int)*s8);
                    *extraout_r2 = uVar7;
                    *s0 = '\x10';
                    *s24 = 2;
                }
                if ((((*s0 != '\0') && (*s4 != '\0')) && ('\0' < *s8)) && ((*s8 < '\x03' && (*s12 != 0)))) {
                    return 0;
                }
            }
        }
    }
    return 0xffffffff;
}

/*
 * cri_sub_260810  0x8c260810
 * area name: in the cri library code range
 * called by: cri_sub_25fdb2, cri_sub_25fdbe
 */
int cri_sub_260810(int a0, u32 a1, u32 a2) {
    int iVar1;
    int a7;
    short asStack_18[2];

    a7 = a0 + 0xc;
    *(u16 *)(a0 + 2) = 1;
    iVar1 = cri_sub_260658(a1, a2, asStack_18, a7);
    if (iVar1 < 0) {
        iVar1 = 0;
    } else {
        *(u16 *)(a0 + 0x1c) = 0;
        *(u16 *)(a0 + 0x4a) = 0;
        *(u16 *)(a0 + 0x48) = 0;
        *(u16 *)(a0 + 0x26) = 0;
        *(u16 *)(a0 + 0x24) = 0;
        *(u32 *)(a0 + 0x34) = 0;
        *(u32 *)(a0 + 0x30) = 0;
        *(u32 *)(a0 + 0x2c) = 0;
        *(u32 *)(a0 + 0x28) = 0;
        *(u32 *)(a0 + 0x20) = 0;
        *(int *)(a0 + 0x58) = (int)*(char *)(a0 + 0xe);
        *(int *)(a0 + 0x5c) = (int)*(char *)(a0 + 0xf);
        *(u32 *)(a0 + 0x60) = *(u32 *)(a0 + 0x10);
        *(u32 *)(a0 + 100) = *(u32 *)(a0 + 0x3c);
        *(u32 *)(a0 + 0x68) = *(u32 *)(a0 + 0x40);
        *(u32 *)(a0 + 0x6c) = *(u32 *)(a0 + 0x44);
        *(u16 *)(a0 + 0x7c) = *(u16 *)(a0 + 0x48);
        *(u16 *)(a0 + 0x7e) = *(u16 *)(a0 + 0x4a);
        *(int *)(a0 + 0x80) = a0 + 0x4c;
        *(u32 *)(a0 + 0x9c) = 0;
        *(u32 *)(a0 + 0x98) = 0;
        *(u16 *)(a0 + 0xa8) = 1;
        memset(a0 + 0x4c, 0, 4);
        iVar1 = (int)asStack_18[0];
    }
    return iVar1;
}

/*
 * cri_sub_2608f8  0x8c2608f8
 * area name: in the cri library code range
 * called by: cri_sub_260c60
 */
int cri_sub_2608f8(int a0) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;

    iVar9 = *(int *)(a0 + 0x50);
    if ((*(int *)(a0 + 4) == 1) && (iVar1 = get_field_c_264f82(*(u32 *)(a0 + 8), &g_8c4b9828), iVar1 == 0)) {
        (**(code **)(0x88 + a0))(*(u32 *)(0x88 + 4 + a0), a0 + 0x70, a0 + 0x74, a0 + 0x78);
        iVar1 = *(int *)(a0 + 0x68) - *(int *)(a0 + 0x70);
        if (*(int *)(a0 + 0x74) < iVar1) {
            iVar1 = *(int *)(a0 + 0x74);
        }
        iVar5 = *(int *)(a0 + 100);
        if (*(int *)(a0 + 0x54) < iVar1) {
            iVar1 = *(int *)(a0 + 0x54);
        }
        iVar8 = *(int *)(a0 + 0x70) * 2 + iVar5;
        if (*(char *)(a0 + 0xe) == '\x02') {
            iVar2 = *(int *)(a0 + 0x6c);
            iVar3 = *(int *)(a0 + 0x70);
            iVar10 = 0;
            iVar6 = 0;
            iVar7 = 0;
            if (0 < iVar1) {
                do {
                    iVar10 = iVar10 + 1;
                    *(u16 *)(iVar7 + iVar8) = *(u16 *)(iVar6 * 2 + iVar9);
                    iVar4 = iVar6 + 1;
                    iVar6 = iVar6 + 2;
                    *(u16 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(u16 *)(iVar4 * 2 + iVar9);
                    iVar7 = iVar7 + 2;
                } while (iVar10 < iVar1);
            }
        } else {
            iVar2 = 0;
            iVar5 = 0;
            if (0 < iVar1) {
                do {
                    iVar2 = iVar2 + 1;
                    *(u16 *)(iVar5 + iVar8) = *(u16 *)(iVar5 + iVar9);
                    iVar5 = iVar5 + 2;
                } while (iVar2 < iVar1);
            }
        }
        *(int *)(0xa0 + a0) = iVar1;
        *(int *)(0xa4 + a0) = iVar1 * *(char *)(a0 + 0xe) * 2;
        *(u32 *)(a0 + 4) = 2;
    }
    iVar9 = *(int *)(a0 + 4);
    if (iVar9 == 2) {
        iVar9 = (int)0x90;
        iVar9 = (**(code **)(iVar9 + a0))(*(u32 *)(iVar9 + 4 + a0), *(u32 *)(iVar9 + 0x14 + a0),
                                          *(u32 *)(iVar9 + 0x10 + a0));
        *(u32 *)(a0 + 4) = 3;
    }
    return iVar9;
}

/*
 * cri_sub_260904  0x8c260904
 * area name: in the cri library code range
 */
int cri_sub_260904(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int *unaff_r13;
    int iVar10;
    int unaff_r14;

    iVar9 = *unaff_r13;
    if ((*(int *)(unaff_r14 + 4) == 1) && (iVar1 = get_field_c_264f82(*(u32 *)(unaff_r14 + 8), a1), iVar1 == 0)) {
        (**(code **)(0x88 + unaff_r14))(*(u32 *)(0x88 + 4 + unaff_r14), unaff_r13 + 8, unaff_r13 + 9, unaff_r13 + 10);
        iVar1 = unaff_r13[6] - unaff_r13[8];
        if (unaff_r13[9] < iVar1) {
            iVar1 = unaff_r13[9];
        }
        iVar5 = unaff_r13[5];
        if (unaff_r13[1] < iVar1) {
            iVar1 = unaff_r13[1];
        }
        iVar8 = unaff_r13[8] * 2 + iVar5;
        a3 = 0;
        if (*(char *)(unaff_r14 + 0xe) == '\x02') {
            iVar2 = unaff_r13[7];
            iVar3 = unaff_r13[8];
            iVar10 = 0;
            iVar6 = 0;
            iVar7 = 0;
            if (0 < iVar1) {
                do {
                    iVar10 = iVar10 + 1;
                    *(u16 *)(iVar7 + iVar8) = *(u16 *)(iVar6 * 2 + iVar9);
                    iVar4 = iVar6 + 1;
                    iVar6 = iVar6 + 2;
                    *(u16 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(u16 *)(iVar4 * 2 + iVar9);
                    iVar7 = iVar7 + 2;
                } while (iVar10 < iVar1);
            }
        } else {
            iVar2 = 0;
            iVar5 = 0;
            if (0 < iVar1) {
                do {
                    iVar2 = iVar2 + 1;
                    *(u16 *)(iVar5 + iVar8) = *(u16 *)(iVar5 + iVar9);
                    iVar5 = iVar5 + 2;
                } while (iVar2 < iVar1);
            }
        }
        *(int *)(0xa0 + unaff_r14) = iVar1;
        *(int *)(0xa4 + unaff_r14) = iVar1 * *(char *)(unaff_r14 + 0xe) * 2;
        *(u32 *)(unaff_r14 + 4) = 2;
    }
    iVar9 = *(int *)(unaff_r14 + 4);
    if (iVar9 == 2) {
        iVar9 = (int)0x90;
        iVar9 = (**(code **)(iVar9 + unaff_r14))(*(u32 *)(iVar9 + 4 + unaff_r14), *(u32 *)(iVar9 + 0x14 + unaff_r14),
                                                 *(u32 *)(iVar9 + 0x10 + unaff_r14), a3);
        *(u32 *)(unaff_r14 + 4) = 3;
    }
    return iVar9;
}

/*
 * cri_sub_2609f0  0x8c2609f0
 * area name: in the cri library code range
 * called by: cri_sub_260c60
 */
int cri_sub_2609f0(int a0) {
    u8 bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    short *psVar10;
    u8 *pbVar11;

    pbVar11 = *(u8 **)(a0 + 0x50);
    if ((*(int *)(a0 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(a0 + 8), &g_8c4b9828), iVar2 == 0)) {
        (**(code **)(0x88 + a0))(*(u32 *)(0x88 + 4 + a0), a0 + 0x70, a0 + 0x74, a0 + 0x78);
        iVar2 = *(int *)(a0 + 0x68) - *(int *)(a0 + 0x70);
        if (*(int *)(a0 + 0x74) < iVar2) {
            iVar2 = *(int *)(a0 + 0x74);
        }
        iVar6 = *(int *)(a0 + 100);
        if (*(int *)(a0 + 0x54) < iVar2) {
            iVar2 = *(int *)(a0 + 0x54);
        }
        psVar10 = (short *)(*(int *)(a0 + 0x70) * 2 + iVar6);
        if (*(char *)(a0 + 0xe) == '\x02') {
            iVar3 = *(int *)(a0 + 0x6c);
            iVar9 = 0;
            iVar4 = *(int *)(a0 + 0x70);
            iVar7 = 0;
            iVar8 = 0;
            if (0 < iVar2) {
                do {
                    *(u16 *)((int)psVar10 + iVar8) = (pbVar11[iVar7] - 0x80) * 0x100;
                    iVar5 = iVar7 + 1;
                    iVar9 = iVar9 + 1;
                    iVar7 = iVar7 + 2;
                    *(u16 *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (pbVar11[iVar5] - 0x80) * 0x100;
                    iVar8 = iVar8 + 2;
                } while (iVar9 < iVar2);
            }
        } else {
            iVar6 = 0;
            if (0 < iVar2) {
                do {
                    bVar1 = *pbVar11;
                    pbVar11 = pbVar11 + 1;
                    iVar6 = iVar6 + 1;
                    *psVar10 = (bVar1 - 0x80) * 0x100;
                    psVar10 = psVar10 + 1;
                } while (iVar6 < iVar2);
            }
        }
        *(int *)(0xa0 + a0) = iVar2;
        *(int *)(0xa4 + a0) = iVar2 * *(char *)(a0 + 0xe);
        *(u32 *)(a0 + 4) = 2;
    }
    iVar2 = *(int *)(a0 + 4);
    if (iVar2 == 2) {
        iVar2 = (int)0x90;
        iVar2 = (**(code **)(iVar2 + a0))(*(u32 *)(iVar2 + 4 + a0), *(u32 *)(iVar2 + 0x14 + a0),
                                          *(u32 *)(iVar2 + 0x10 + a0));
        *(u32 *)(a0 + 4) = 3;
    }
    return iVar2;
}

/*
 * cri_sub_2609fc  0x8c2609fc
 * area name: in the cri library code range
 */
int cri_sub_2609fc(u32 unused_a0, u32 a1, u32 unused_a2, int a3) {
    u8 bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    short *psVar9;
    u8 *pbVar10;
    u32 *unaff_r13;
    int unaff_r14;

    pbVar10 = (u8 *)*unaff_r13;
    if ((*(int *)(unaff_r14 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(unaff_r14 + 8), a1), iVar2 == 0)) {
        (**(code **)(0x88 + unaff_r14))(*(u32 *)(0x88 + 4 + unaff_r14), unaff_r13 + 8, unaff_r13 + 9, unaff_r13 + 10);
        iVar2 = unaff_r13[6] - unaff_r13[8];
        if ((int)unaff_r13[9] < iVar2) {
            iVar2 = unaff_r13[9];
        }
        iVar6 = unaff_r13[5];
        if ((int)unaff_r13[1] < iVar2) {
            iVar2 = unaff_r13[1];
        }
        psVar9 = (short *)(unaff_r13[8] * 2 + iVar6);
        if (*(char *)(unaff_r14 + 0xe) == '\x02') {
            iVar3 = unaff_r13[7];
            a3 = 0;
            iVar4 = unaff_r13[8];
            iVar7 = 0;
            iVar8 = 0;
            if (0 < iVar2) {
                do {
                    *(u16 *)((int)psVar9 + iVar8) = (pbVar10[iVar7] - 0x80) * 0x100;
                    iVar5 = iVar7 + 1;
                    a3 = a3 + 1;
                    iVar7 = iVar7 + 2;
                    *(u16 *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (pbVar10[iVar5] - 0x80) * 0x100;
                    iVar8 = iVar8 + 2;
                } while (a3 < iVar2);
            }
        } else {
            a3 = 0;
            if (0 < iVar2) {
                do {
                    bVar1 = *pbVar10;
                    pbVar10 = pbVar10 + 1;
                    a3 = a3 + 1;
                    *psVar9 = (bVar1 - 0x80) * 0x100;
                    psVar9 = psVar9 + 1;
                } while (a3 < iVar2);
            }
        }
        *(int *)(0xa0 + unaff_r14) = iVar2;
        *(int *)(0xa4 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe);
        *(u32 *)(unaff_r14 + 4) = 2;
    }
    iVar2 = *(int *)(unaff_r14 + 4);
    if (iVar2 == 2) {
        iVar2 = (int)0x90;
        iVar2 = (**(code **)(iVar2 + unaff_r14))(*(u32 *)(iVar2 + 4 + unaff_r14), *(u32 *)(iVar2 + 0x14 + unaff_r14),
                                                 *(u32 *)(iVar2 + 0x10 + unaff_r14), a3);
        *(u32 *)(unaff_r14 + 4) = 3;
    }
    return iVar2;
}

/*
 * cri_sub_260afc  0x8c260afc
 * area name: in the cri library code range
 * called by: cri_sub_260c60
 */
int cri_sub_260afc(int a0) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    u16 *puVar10;
    int iVar11;
    int iVar12;

    iVar11 = *(int *)(a0 + 0x50);
    if ((*(int *)(a0 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(a0 + 8), &g_8c4b9828), iVar2 == 0)) {
        (**(code **)(0x88 + a0))(*(u32 *)(0x88 + 4 + a0), a0 + 0x70, a0 + 0x74, a0 + 0x78);
        iVar2 = *(int *)(a0 + 0x68) - *(int *)(a0 + 0x70);
        if (*(int *)(a0 + 0x74) < iVar2) {
            iVar2 = *(int *)(a0 + 0x74);
        }
        iVar6 = *(int *)(a0 + 100);
        if (*(int *)(a0 + 0x54) < iVar2) {
            iVar2 = *(int *)(a0 + 0x54);
        }
        puVar10 = (u16 *)(*(int *)(a0 + 0x70) * 2 + iVar6);
        if (*(char *)(a0 + 0xe) == '\x02') {
            iVar9 = *(int *)(a0 + 0x6c);
            iVar4 = *(int *)(a0 + 0x70);
            iVar12 = 0;
            iVar7 = 0;
            iVar8 = 0;
            if (0 < iVar2) {
                do {
                    *(u16 *)((int)puVar10 + iVar8) = CONCAT11(*(u8 *)(iVar7 + 2 + iVar11), *(u8 *)(iVar11 + iVar7));
                    iVar5 = iVar7 + 3;
                    iVar3 = iVar7 + 1;
                    iVar12 = iVar12 + 1;
                    iVar7 = iVar7 + 4;
                    *(u16 *)(iVar8 + (iVar9 + iVar4) * 2 + iVar6) =
                        CONCAT11(*(u8 *)(iVar5 + iVar11), *(u8 *)(iVar3 + iVar11));
                    iVar8 = iVar8 + 2;
                } while (iVar12 < iVar2);
            }
        } else {
            iVar4 = 0;
            iVar6 = 0;
            if (0 < iVar2) {
                do {
                    iVar7 = iVar6 + 1;
                    iVar4 = iVar4 + 1;
                    puVar1 = (u8 *)(iVar6 + iVar11);
                    iVar6 = iVar6 + 2;
                    *puVar10 = CONCAT11(*(u8 *)(iVar7 + iVar11), *puVar1);
                    puVar10 = puVar10 + 1;
                } while (iVar4 < iVar2);
            }
        }
        *(int *)(0xa0 + a0) = iVar2;
        *(int *)(0xa4 + a0) = iVar2 * *(char *)(a0 + 0xe) * 2;
        *(u32 *)(a0 + 4) = 2;
    }
    iVar11 = *(int *)(a0 + 4);
    if (iVar11 == 2) {
        iVar11 = (int)0x90;
        iVar11 = (**(code **)(iVar11 + a0))(*(u32 *)(iVar11 + 4 + a0), *(u32 *)(iVar11 + 0x14 + a0),
                                            *(u32 *)(iVar11 + 0x10 + a0));
        *(u32 *)(a0 + 4) = 3;
    }
    return iVar11;
}

/*
 * cri_sub_260b08  0x8c260b08
 * area name: in the cri library code range
 */
int cri_sub_260b08(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    u16 *puVar10;
    int iVar11;
    int *unaff_r13;
    int iVar12;
    int unaff_r14;

    iVar11 = *unaff_r13;
    if ((*(int *)(unaff_r14 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(unaff_r14 + 8), a1), iVar2 == 0)) {
        (**(code **)(0x88 + unaff_r14))(*(u32 *)(0x88 + 4 + unaff_r14), unaff_r13 + 8, unaff_r13 + 9, unaff_r13 + 10);
        iVar2 = unaff_r13[6] - unaff_r13[8];
        if (unaff_r13[9] < iVar2) {
            iVar2 = unaff_r13[9];
        }
        iVar6 = unaff_r13[5];
        if (unaff_r13[1] < iVar2) {
            iVar2 = unaff_r13[1];
        }
        puVar10 = (u16 *)(unaff_r13[8] * 2 + iVar6);
        a3 = 0;
        if (*(char *)(unaff_r14 + 0xe) == '\x02') {
            iVar9 = unaff_r13[7];
            iVar4 = unaff_r13[8];
            iVar12 = 0;
            iVar7 = 0;
            iVar8 = 0;
            if (0 < iVar2) {
                do {
                    *(u16 *)((int)puVar10 + iVar8) = CONCAT11(*(u8 *)(iVar7 + 2 + iVar11), *(u8 *)(iVar11 + iVar7));
                    iVar5 = iVar7 + 3;
                    iVar3 = iVar7 + 1;
                    iVar12 = iVar12 + 1;
                    iVar7 = iVar7 + 4;
                    *(u16 *)(iVar8 + (iVar9 + iVar4) * 2 + iVar6) =
                        CONCAT11(*(u8 *)(iVar5 + iVar11), *(u8 *)(iVar3 + iVar11));
                    iVar8 = iVar8 + 2;
                } while (iVar12 < iVar2);
            }
        } else {
            iVar4 = 0;
            iVar6 = 0;
            if (0 < iVar2) {
                do {
                    iVar7 = iVar6 + 1;
                    iVar4 = iVar4 + 1;
                    puVar1 = (u8 *)(iVar6 + iVar11);
                    iVar6 = iVar6 + 2;
                    *puVar10 = CONCAT11(*(u8 *)(iVar7 + iVar11), *puVar1);
                    puVar10 = puVar10 + 1;
                } while (iVar4 < iVar2);
            }
        }
        *(int *)(0xa0 + unaff_r14) = iVar2;
        *(int *)(0xa4 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe) * 2;
        *(u32 *)(unaff_r14 + 4) = 2;
    }
    iVar11 = *(int *)(unaff_r14 + 4);
    if (iVar11 == 2) {
        iVar11 = (int)0x90;
        iVar11 =
            (**(code **)(iVar11 + unaff_r14))(*(u32 *)(iVar11 + 4 + unaff_r14), *(u32 *)(iVar11 + 0x14 + unaff_r14),
                                              *(u32 *)(iVar11 + 0x10 + unaff_r14), a3);
        *(u32 *)(unaff_r14 + 4) = 3;
    }
    return iVar11;
}

/*
 * cri_sub_260c2c  0x8c260c2c
 * area name: in the cri library code range
 * called by: cri_sub_25fdb2, cri_sub_25fdbe
 */
u32 cri_sub_260c2c(int a0) {
    int iVar1;

    iVar1 = memcmp(a0, &g_8c272050, 4);
    if ((iVar1 == 0) && (iVar1 = memcmp(a0 + 8, &g_8c272060, 4), iVar1 == 0)) {
        return 1;
    }
    return 0;
}

/*
 * cri_sub_260c60  0x8c260c60
 * area name: in the cri library code range
 * called by: cri_sub_2602f4
 */
u32 cri_sub_260c60(int a0) {
    u32 uVar1;

    if (*(short *)(0xaa + a0) == 2) {
        uVar1 = cri_sub_260afc(a0);
        return uVar1;
    }
    if (*(short *)(0xaa + a0) == 1) {
        uVar1 = cri_sub_2609f0(a0);
        return uVar1;
    }
    if (*(short *)(0xaa + a0) == 0) {
        uVar1 = cri_sub_2608f8(a0);
        return uVar1;
    }
    return (int)0xaa;
}

/*
 * cri_sub_260c98  0x8c260c98
 * area name: in the cri library code range
 * called by: cri_sub_262810, cri_sub_262814
 */
u32 cri_sub_260c98(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    g_8c277fb0 = 0;
    return ain0;
}

/*
 * irq_disable_nested  0x8c260ca0
 * raises SR.IMASK to 15 on the first call and counts the nesting (pairs with irq_restore_nested)
 * called by: ADXF_Close_like, ADXF_Open_like, ADXF_Stop, ADXF_sub_2620c8, ADXF_sub_26216c, ADXF_sub_262208,
 * ADXF_sub_2622e4, ADXF_sub_262312 (+17 more)
 */
u32 irq_disable_nested(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;

    if (g_8c277fb0 == 0) {
        g_8c277fb4 = (((u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
        ain0 = ((u32)in_S << 1 | 1 | (u32)in_IMASK << 4) & 0xffffff0f | (u32)in_Q << 8 | (u32)in_M << 9 |
               (u32)in_FD << 0xf | (u32)in_BL << 0x1c | (u32)in_RB << 0x1d | (u32)in_MD << 0x1e | 0xf0;
    }
    g_8c277fb0 = g_8c277fb0 + 1;
    return ain0;
}

/*
 * irq_restore_nested  0x8c260cc8
 * drops the interrupt-disable nesting count and restores SR.IMASK when it reaches 0
 * called by: ADXF_Close_like, ADXF_Open_like, ADXF_Stop, ADXF_sub_2620c8, ADXF_sub_26216c, ADXF_sub_262208,
 * ADXF_sub_2622e4, ADXF_sub_262312 (+17 more)
 */
u32 irq_restore_nested(u32 unused_a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;

    g_8c277fb0 = g_8c277fb0 + -1;
    if (g_8c277fb0 == 0) {
        ain0 = (g_8c277fb4 & 0xf) << 4 | ((u32)in_S << 1 | 1 | (u32)in_IMASK << 4) & 0xffffff0f | (u32)in_Q << 8 |
               (u32)in_M << 9 | (u32)in_FD << 0xf | (u32)in_BL << 0x1c | (u32)in_RB << 0x1d | (u32)in_MD << 0x1e;
    }
    return ain0;
}

/*
 * irq_sub_260cf8  0x8c260cf8
 * area name: sits between irq functions (same compilation unit)
 * called by: vram64_264eda, vram_sub_264f52
 */
u32 *irq_sub_260cf8(int a0, int a1, u16 *a2, u16 *a3) {
    float fVar1;
    float fVar2;
    float fVar4;
    double dVar3;
    double dVar5;
    u32 in_fr13;
    double dVar6;
    u32 uVar7;
    double in_xd2;
    u16 uVar8;
    char cVar9;
    char cVar10;

    cVar10 = '\0';
    cVar9 = '\0';
    dVar3 = (double)CONCAT44((float)a1, 0x40c90fdb);
    fVar4 = (float)a0 * 6.2831855;
    dVar6 = (double)CONCAT44(0x3fb504f3, in_fr13);
    libc_sub_013c38(a0, a1, a2, a3);
    if (cVar9 == '\0') {
        fVar4 = 2.0;
    } else {
        fVar4 = SUB84((double)CONCAT44(fVar4, 0x3f800000) + (double)CONCAT44(fVar4, 0x3f800000), 0);
    }
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - (float)((u64)dVar3 >> 0x20), SUB84(dVar6, 0));
        dVar3 = (double)CONCAT44(0xbf800000, SQRT(fVar4));
    } else {
        dVar6 = dVar6 - dVar3;
        dVar3 = SQRT(-(double)CONCAT44(0x3f800000, fVar4));
    }
    uVar7 = (u32)((u64)dVar6 >> 0x20);
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(uVar7, uVar7);
        in_xd2 = (double)CONCAT44(SUB84(dVar3, 0), uVar7);
    }
    fVar4 = (float)((u64)dVar3 >> 0x20);
    if (cVar9 == '\0') {
        in_xd2 = (double)CONCAT44((float)((u64)in_xd2 >> 0x20) + fVar4, SUB84(in_xd2, 0));
    } else {
        in_xd2 = in_xd2 + dVar3;
    }
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44(fVar4, uVar7);
    }
    fVar4 = (float)((u64)in_xd2 >> 0x20);
    if (cVar9 == '\0') {
        fVar1 = SUB84(dVar6, 0) - fVar4;
        fVar2 = SQRT((SUB84(dVar3, 0) + fVar4) * fVar1);
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), fVar2);
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - fVar2, fVar1);
    } else {
        dVar3 = SQRT((dVar3 + in_xd2) * (dVar6 - in_xd2));
        dVar6 = (dVar6 - in_xd2) - dVar3;
    }
    uVar7 = (u32)((u64)dVar6 >> 0x20);
    dVar5 = dVar6;
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), fVar4);
        dVar5 = (double)CONCAT44(uVar7, SUB84(in_xd2, 0));
    }
    if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / SUB84(dVar3, 0), SUB84(dVar5, 0));
    } else {
        dVar5 = dVar5 / dVar3;
    }
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), 0x46000000);
    }
    fVar4 = (float)((u64)dVar5 >> 0x20);
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(uVar7, fVar4);
    }
    if (cVar9 == '\0') {
        fVar1 = SUB84(dVar6, 0) * SUB84(dVar3, 0);
        dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), fVar1);
        uVar8 = (u16)(int)fVar1;
    } else {
        dVar6 = dVar6 * dVar3;
        uVar8 = (u16)(int)dVar6;
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), fVar4);
    }
    if (cVar9 == '\0') {
        fVar4 = SUB84(dVar6, 0) * fVar4;
    } else {
        fVar4 = SUB84(dVar6 * dVar5, 0);
    }
    *a2 = uVar8;
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x45800000, fVar4);
    } else {
        dVar6 = 1.38524461322914e-309;
    }
    if (cVar9 == '\0') {
        fVar4 = (float)((u64)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar4, SUB84(dVar6, 0) * fVar4);
    } else {
        dVar6 = dVar6 * dVar6;
    }
    if (cVar9 == '\0') {
        uVar8 = (u16)(int)-SUB84(dVar6, 0);
    } else {
        uVar8 = (u16)(int)(double)CONCAT44((int)((u64)dVar6 >> 0x20), -SUB84(dVar6, 0));
    }
    *a3 = uVar8;
    return &g_8c260e88;
}

/*
 * irq_sub_260d7c  0x8c260d7c
 * area name: sits between irq functions (same compilation unit)
 */
u32 irq_sub_260d7c(u16 *a0, int a1, short *a2, u8 *a3, u8 *s0, u8 *s4, u8 *s8, u32 *s12, u32 *s16) {
    u32 uVar1;
    u32 *extraout_r3;
    u32 uVar2;

    if (a1 < 0x10) {
        return 0xffffffff;
    }
    if (((int)(u32)*a0 >> 8 | (*a0 & 0xff) << 8) == 0x8000) {
        *a2 = (a0[1] >> 8 | a0[1] << 8) + 4;
        *a3 = (char)a0[2];
        *s4 = *(u8 *)((int)a0 + 5);
        *s0 = (char)a0[3];
        *s8 = *(u8 *)((int)a0 + 7);
        uVar2 = *(u32 *)(a0 + 4);
        *s12 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar2 = *(u32 *)(a0 + 6);
        *s16 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar1 = libgcc_divide_helper_010468(((char)*s4 + -2) * 8, (int)(char)*s0);
        *extraout_r3 = uVar1;
        return 0;
    }
    return 0xfffffffe;
}

/*
 * irq_sub_260e9c  0x8c260e9c
 * area name: sits between irq functions (same compilation unit)
 * called by: cri_sub_25fca4
 */
u32 irq_sub_260e9c(u16 *a0, int a1, u16 *a2) {
    if (0x11 < a1) {
        if (((int)(u32)*a0 >> 8 | (u32)*a0 << 8 & 0xff00 & 0xffff) != 0x8000) {
            return 0xfffffffe;
        }
        if (0xd < (int)((int)(short)a0[1] >> 8 & 0xffU | (int)(short)a0[1] << 8 & 0xff00)) {
            *a2 = a0[8] >> 8 | a0[8] << 8 & (int)0xffffff00;
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * cri_sub_260f02  0x8c260f02
 * area name: in the cri library code range
 */
u32 cri_sub_260f02(u16 *a0, int a1, u32 *a2, u16 *a3, u16 *s0, u32 *s4, u32 *s8, u32 *s12, u32 *s16) {
    u16 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;

    *a3 = 0;
    uVar2 = 0xff00;
    if (a1 < 0x30) {
        return 0xffffffff;
    }
    if ((u16)(*a0 >> 8 | *a0 << 8 & (u16)0xff00) == 0x8000) {
        if ((int)((int)(short)a0[1] >> 8 & 0xffU | (int)(short)a0[1] << 8 & 0xff00) < 0x2c) {
            return 0xffffffff;
        }
        *a2 = (int)(short)a0[10] >> 8 & 0xffU | (int)(short)a0[10] << 8 & 0xff00;
        uVar1 = (int)0xffffff00;
        *a3 = a0[0xb] >> 8 | a0[0xb] << 8 & (int)0xffffff00;
        uVar3 = 0xff0000;
        if (*a3 == 1) {
            *s0 = a0[0xd] >> 8 | a0[0xd] << 8 & uVar1;
            uVar4 = *(u32 *)(a0 + 0xe);
            *s4 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
            uVar4 = *(u32 *)(a0 + 0x10);
            *s8 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
            uVar4 = *(u32 *)(a0 + 0x12);
            *s12 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
            uVar4 = *(u32 *)(a0 + 0x14);
            *s16 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
            return 0;
        }
    }
    return 0xfffffffe;
}

/*
 * cri_sub_261058  0x8c261058
 * area name: in the cri library code range
 * called by: vram_sub_26501c
 */
int cri_sub_261058(u16 *a0, int a1, u16 *a2, short *a3, u32 s0, u32 s4) {
    u16 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    int iStack_20;

    fVar5 = (float)((int)*a3 << 0x10);
    fVar6 = (float)((int)a3[1] << 0x10);
    fVar8 = (float)((int)(short)s0 << 4) / 65536.0;
    fVar9 = (float)((int)(short)s4 << 4) / 65536.0;
    iVar4 = 0;
    while (true) {
        if (a1 <= iVar4) {
            *a3 = (short)((u32)(int)fVar5 >> 0x10);
            a3[1] = (short)((u32)(int)fVar6 >> 0x10);
            return a1;
        }
        uVar2 = (u32)(short)(*a0 >> 8 | *a0 << 8);
        if ((uVar2 & 0x8000) != 0)
            break;
        iStack_20 = 0;
        a0 = a0 + 1;
        fVar7 = (float)((uVar2 & 0x1fff) + 1);
        do {
            uVar1 = *a0;
            a0 = (u16 *)((int)a0 + 1);
            iVar3 = (u32)(u8)uVar1 * 4;
            fVar6 = fVar7 * *(float *)(&g_8c272730 + iVar3) + fVar8 * fVar5 + fVar9 * fVar6;
            *a2 = (short)((u32)(int)fVar6 >> 0x10);
            fVar5 = fVar7 * *(float *)(&g_8c272b30 + iVar3) + fVar8 * fVar6 + fVar9 * fVar5;
            a2[1] = (short)((u32)(int)fVar5 >> 0x10);
            a2 = a2 + 2;
            iStack_20 = iStack_20 + 2;
        } while (iStack_20 < 0x20);
        iVar4 = iVar4 + 1;
    }
    return iVar4;
}

/*
 * cri_sub_261170  0x8c261170
 * area name: in the cri library code range
 * called by: vram_sub_26501c
 */
int cri_sub_261170(u16 *a0, int a1, u16 *a2, short *a3, u16 *s0, short *s4, u32 s8, u32 s12) {
    u16 *puVar1;
    int iVar2;
    u16 uVar3;
    int iVar4;
    u32 uVar5;
    u16 *puVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    int iStack_30;
    int iStack_2c;
    int iStack_28;

    fVar7 = (float)((int)*a3 << 0x10);
    fVar8 = (float)((int)a3[1] << 0x10);
    fVar9 = (float)((int)*s4 << 0x10);
    fVar10 = (float)((int)s4[1] << 0x10);
    iStack_30 = 0;
    iStack_28 = 1;
    iStack_2c = 0;
    fVar12 = (float)((int)(short)s8 << 4) / 65536.0;
    fVar13 = (float)((int)(short)s12 << 4) / 65536.0;
    while (true) {
        if ((int)(a1 + (u32)(a1 < 0)) >> 1 <= iStack_30) {
            *a3 = (short)((u32)(int)fVar7 >> 0x10);
            a3[1] = (short)((u32)(int)fVar8 >> 0x10);
            *s4 = (short)((u32)(int)fVar9 >> 0x10);
            s4[1] = (short)((u32)(int)fVar10 >> 0x10);
            return a1;
        }
        uVar3 = *a0 >> 8 | *a0 << 8;
        if (((int)(short)uVar3 & 0x8000U) != 0)
            break;
        iVar2 = 0;
        fVar11 = (float)(((int)(short)uVar3 & 0x1fffU) + 1);
        puVar1 = a0 + 1;
        do {
            puVar6 = puVar1;
            iVar4 = (u32)(u8)*puVar6 * 4;
            fVar8 = fVar11 * *(float *)(&g_8c272730 + iVar4) + fVar12 * fVar7 + fVar13 * fVar8;
            *a2 = (short)((u32)(int)fVar8 >> 0x10);
            fVar7 = fVar11 * *(float *)(&g_8c272b30 + iVar4) + fVar12 * fVar8 + fVar13 * fVar7;
            iVar2 = iVar2 + 2;
            a2[1] = (short)((u32)(int)fVar7 >> 0x10);
            a2 = a2 + 2;
            puVar1 = (u16 *)((int)puVar6 + 1);
        } while (iVar2 < 0x20);
        uVar3 = *(u16 *)((int)puVar6 + 1);
        uVar5 = (u32)(short)(uVar3 >> 8 | uVar3 << 8);
        if ((uVar5 & 0x8000) != 0) {
            return iStack_28;
        }
        iVar2 = 0;
        a0 = (u16 *)((int)puVar6 + 3);
        fVar11 = (float)((uVar5 & 0x1fff) + 1);
        do {
            uVar3 = *a0;
            a0 = (u16 *)((int)a0 + 1);
            iVar4 = (u32)(u8)uVar3 * 4;
            fVar10 = fVar11 * *(float *)(&g_8c272730 + iVar4) + fVar12 * fVar9 + fVar13 * fVar10;
            *s0 = (short)((u32)(int)fVar10 >> 0x10);
            fVar9 = fVar11 * *(float *)(&g_8c272b30 + iVar4) + fVar12 * fVar10 + fVar13 * fVar9;
            iVar2 = iVar2 + 2;
            s0[1] = (short)((u32)(int)fVar9 >> 0x10);
            s0 = s0 + 2;
        } while (iVar2 < 0x20);
        iStack_30 = iStack_30 + 1;
        iStack_28 = iStack_28 + 2;
        iStack_2c = iStack_2c + 2;
    }
    return iStack_2c;
}

/*
 * cri_sub_261370  0x8c261370
 * area name: in the cri library code range
 */
u32 cri_sub_261370(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;
    int *unaff_r14;

    if (*unaff_r14 == 0) {
        in_r0 = memset(0x8c4b39a0, 0, (int)0x180);
    }
    *unaff_r14 = *unaff_r14 + 1;
    return in_r0;
}

/*
 * cri_sub_2613aa  0x8c2613aa
 * area name: in the cri library code range
 */
u8 *cri_sub_2613aa(int a0, int a1, int a2) {
    u32 r7;
    u8 *puVar1;
    int ar4_00;
    int ar5_00;
    int ar6_00;
    int iVar2;
    char cVar3;

    cVar3 = '\0';
    iVar2 = 0;
    do {
        if (*(char *)(iVar2 * 0x30 + 0x8c4b39a0) == '\0')
            break;
        iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    if (iVar2 == 8) {
        puVar1 = NULL;
    } else {
        ar6_00 = a2;
        irq_disable_nested(8, a1, a2, r7, a1);
        iVar2 = iVar2 * 0x30;
        ar5_00 = 0;
        puVar1 = (u8 *)(iVar2 + 0x8c4b39a0);
        *(char *)(iVar2 + 0x8c4b39a2) = (char)a0;
        ar4_00 = 0;
        if (0 < a0) {
            do {
                ar5_00 = ar5_00 + 1;
                *(u32 *)(iVar2 + 0x8c4b39a4 + ar4_00) = *(u32 *)(a1 + ar4_00);
                *(u32 *)(iVar2 + 0x8c4b39ac + ar4_00) = *(u32 *)(a2 + ar4_00);
                *(u32 *)(iVar2 + 0x8c4b39b4 + ar4_00) = 0;
                ar4_00 = ar4_00 + 4;
            } while (ar5_00 < a0);
        }
        *(u8 *)(iVar2 + 0x8c4b39a1) = 0;
        *(u32 *)(iVar2 + 0x8c4b39cc) = 0;
        *(int *)(iVar2 + 0x8c4b39bc) = a0;
        *(u32 *)(iVar2 + 0x8c4b39c0) = 0xac44;
        if (cVar3 == '\0') {
            *(u32 *)(iVar2 + 0x8c4b39c4) = 0x3dcccccd;
            *(u32 *)(iVar2 + 0x8c4b39c8) = 0x3dcccccd;
        } else {
            *(u64 *)(iVar2 + 0x8c4b39c4) = 0x8c260cc83dcccccd;
            *(u64 *)(iVar2 + 0x8c4b39c8) = 0x8c260cc83dcccccd;
        }
        *puVar1 = 1;
        irq_restore_nested(ar4_00, ar5_00, ar6_00, r7, a1);
    }
    return puVar1;
}

/*
 * cri_sub_26145e  0x8c26145e
 * area name: in the cri library code range
 * called by: cri_sub_2639fa
 */
u32 cri_sub_26145e(int a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 ain0) {
    u32 uVar1;
    u32 ar5_00;
    u32 ar6_00;

    if (a0 != 0) {
        irq_disable_nested(a0, unused_a1, unused_a2, a3, a0);
        ar5_00 = 0;
        ar6_00 = 0x30;
        uVar1 = memset(a0, 0, 0x30);
        uVar1 = irq_restore_nested(a0, ar5_00, ar6_00, a3, uVar1);
        return uVar1;
    }
    return ain0;
}

/*
 * cri_sub_2614d6  0x8c2614d6
 * area name: in the cri library code range
 * called by: cri_sub_261640
 */
u32 cri_sub_2614d6(int a0, u32 unused_a1, int **a2, int **a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    short *psVar6;
    short **a7;
    int iVar7;
    int iVar8;
    int *piVar9;
    int iVar10;
    int iVar11;
    int d;
    int iStack_3c;
    int *piStack_30;
    int iStack_2c;
    short *psStack_28;
    u32 uStack_24;

    uVar1 = 0x24;
    d = (int)((float)*(int *)(a0 + 0x20) * *(float *)(a0 + 0x24));
    iVar11 = 0;
    do {
        if (*(int *)(a0 + 0x1c) <= iVar11) {
            return uVar1;
        }
        iVar7 = iVar11 * 4;
        piVar9 = *(int **)(a0 + 4 + iVar7);
        uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9, 1, a2, a3);
        uVar2 = libgcc_divide_helper_010468(uVar1 >> 1, d);
        piVar9 = *(int **)(a0 + 0xc + iVar7);
        uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9, 0, a2, a3);
        uVar3 = uVar1 >> 4;
        if ((int)uVar2 < (int)uVar3) {
            uVar3 = uVar2;
        }
        for (iVar10 = 0; iVar10 < (int)uVar3; iVar10 = iVar10 + 1) {
            iStack_3c = 0;
            for (iVar8 = 0; iVar8 < d; iVar8 = iVar8 + uVar1) {
                piVar9 = *(int **)(a0 + 4 + iVar7);
                a7 = &psStack_28;
                (**(code **)(*piVar9 + 0x18))(piVar9, 1, (d - iVar8) * 2, a7);
                uVar1 = uStack_24 >> 1;
                iVar5 = 0;
                psVar6 = psStack_28;
                if (uVar1 != 0) {
                    do {
                        iVar4 = (int)*psVar6;
                        if (iVar4 < 0) {
                            iVar4 = -iVar4;
                        }
                        psVar6 = psVar6 + 1;
                        if (iStack_3c < iVar4) {
                            iStack_3c = iVar4;
                        }
                        iVar5 = iVar5 + 1;
                    } while (iVar5 < (int)uVar1);
                }
                piVar9 = *(int **)(a0 + 4 + iVar7);
                (**(code **)(*piVar9 + 0x20))(piVar9, 0, &psStack_28, a7);
            }
            piVar9 = *(int **)(a0 + 0xc + iVar7);
            a3 = &piStack_30;
            (**(code **)(*piVar9 + 0x18))(piVar9, 0, 0x10, a3);
            if (iStack_2c == 0) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while (true);
            }
            *piStack_30 = iStack_3c;
            piStack_30[1] = *(int *)(a0 + 0x14 + iVar7);
            a2 = &piStack_30;
            piStack_30[2] = *(int *)(a0 + 0x20);
            piStack_30[3] = d;
            piVar9 = *(int **)(a0 + 0xc + iVar7);
            uVar1 = (**(code **)(*piVar9 + 0x20))(piVar9, 1, a2, a3);
            piVar9 = (int *)(a0 + 0x14 + iVar7);
            *piVar9 = *piVar9 + d;
            *(int *)(a0 + 0x2c) = *(int *)(a0 + 0x2c) + 1;
        }
        iVar11 = iVar11 + 1;
    } while (true);
}

/*
 * cri_sub_261640  0x8c261640
 * area name: in the cri library code range
 * called by: cri_sub_26165c
 */
u32 cri_sub_261640(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (*(char *)(a0 + 1) == 2) {
        uVar1 = cri_sub_2614d6(a0, unused_a1, a2, a3);
        return uVar1;
    }
    return (int)*(char *)(a0 + 1);
}

/*
 * cri_sub_26165c  0x8c26165c
 * area name: in the cri library code range
 */
int cri_sub_26165c(char *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int unaff_r13;
    char *pcVar2;

    pcVar2 = a0 + unaff_r13;
    do {
        iVar1 = (int)*a0;
        if (iVar1 == 1) {
            iVar1 = cri_sub_261640(a0, unused_a1, a2, a3);
        }
        a0 = a0 + 0x30;
    } while (a0 < pcVar2);
    return iVar1;
}

/*
 * set_field_20_261680  0x8c261680
 * called by: cri_sub_2647f4
 */
u32 set_field_20_261680(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x20) = a1;
    return in_r0;
}

/*
 * cri_sub_2616a8  0x8c2616a8
 * area name: in the cri library code range
 * called by: cri_sub_26175c
 */
u32 cri_sub_2616a8(void) {
    u32 uVar1;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    /* WARNING: Could not recover jumptable at 0x8c2616ca. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 =
        (*(code *)(0xa0000000 | 0x8c2616d4))((short)((((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4));
    return uVar1;
}

/*
 * cri_sub_26175c  0x8c26175c
 * area name: in the cri library code range
 */
u32 cri_sub_26175c(u32 a0) {
    u32 *puVar1;
    u32 uVar2;

    cri_sub_2616a8();
    puVar1 = 0xff00001c;
    *0xff00001c = a0 & (int)(int)0xfffff7ff | (int)0x800;
    uVar2 = *puVar1 & 0xfffffff7 | 8;
    *puVar1 = uVar2;
    return uVar2;
}

/*
 * cri_sub_261786  0x8c261786
 * area name: in the cri library code range
 * called by: ADXF_sub_26211c, ADXF_sub_262312
 * decompiler: Switch with 1 destination removed at 0x8c261798
 * decompiler: Switch with 1 destination removed at 0x8c2617a8
 * decompiler: Switch with 1 destination removed at 0x8c2617e6
 */
u32 cri_sub_261786(u32 a0, u32 a1) {
    u32 in_r0;
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u8 in_IMASK;
    u8 in_S;

    if (a1 != 0) {
        uVar3 = 0x1fffffe0 & a0;
        if (0x30000 <= a1) {
            /* WARNING: Could not recover jumptable at 0x8c26180e. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar1 = (*(code *)(0xa0000000 | 0x8c261818))((short)((((u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4));
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
 * ta_fifo_2619b4  0x8c2619b4
 * called by: cri_sub_262810, cri_sub_262814
 */
u32 *ta_fifo_2619b4(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    u32 *puVar2;

    puVar1 = (&memset);
    memset(0x8c4b3b20, 0, (int)0x300);
    (*(code *)puVar1)(0x8c4b3e20, 0, (int)0x400, a3);
    (*(code *)puVar1)(0x8c4b4224, (int)0xff, (int)0x1000, a3);
    (*(code *)puVar1)(0x8c4b5224, 0, 0x20, a3);
    puVar2 = 0x8c4b4220;
    g_8c4b5244 = 0;
    *puVar2 = 0;
    return puVar2;
}

/*
 * ta_fifo_2619ee  0x8c2619ee
 * called by: cri_sub_2628fa
 */
u32 ta_fifo_2619ee(void) {
    u8 *puVar1;
    u32 *puVar2;
    u32 uVar3;

    puVar2 = 0x8c4b5244;
    uVar3 = 0x8c4b5224;
    puVar1 = (&memset);
    g_8c4b4220 = 0;
    *puVar2 = 0;
    (*(code *)puVar1)(uVar3, 0, 0x20);
    (*(code *)puVar1)(0x8c4b4224, (int)0xff, (int)0x1000);
    (*(code *)puVar1)(0x8c4b3e20, 0, (int)0x400);
    uVar3 = (*(code *)puVar1)(0x8c4b3b20, 0, (int)0x300);
    return uVar3;
}

/*
 * ta_fifo_2619f8  0x8c2619f8
 */
u32 ta_fifo_2619f8(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    u32 *in_r0;
    u32 uVar2;
    u32 *in_r2;
    u32 in_r3;

    uVar2 = 0x8c4b5224;
    puVar1 = (&memset);
    *in_r2 = in_r3;
    *in_r0 = in_r3;
    (*(code *)puVar1)(uVar2, a1, 0x20, a3);
    (*(code *)puVar1)(0x8c4b4224, (int)0xff, (int)0x1000, a3);
    (*(code *)puVar1)(0x8c4b3e20, 0, (int)0x400, a3);
    uVar2 = (*(code *)puVar1)(0x8c4b3b20, 0, (int)0x300, a3);
    return uVar2;
}

/*
 * cri_sub_261a4c  0x8c261a4c
 * area name: in the cri library code range
 * called by: ADXF_Close_like, ADXF_Open_like, ADXF_Seek, ADXF_Seek_262560, ADXF_Stop, ADXF_sub_2620c8, ADXF_sub_26216c,
 * ADXF_sub_262312
 */
int cri_sub_261a4c(int a0, int a1, u32 a2, u32 a3, u32 s0) {
    u32 *puVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u8 *puVar5;

    puVar1 = 0x8c4b5244;
    uVar4 = g_8c4b5244;
    if ((int)uVar4 < 0) {
        uVar4 = ~(~uVar4 + 1 & (int)0xff) + 1;
    } else {
        uVar4 = uVar4 & (int)0xff;
    }
    g_8c4b5244 = uVar4;
    iVar3 = a0 * 2;
    puVar5 = (u8 *)(uVar4 * 0x10 + 0x8c4b4224);
    if (a1 == 0) {
        *(short *)(0x8c4b5224 + iVar3) = *(short *)(0x8c4b5224 + iVar3) + 1;
    }
    *puVar5 = (char)a0;
    puVar5[1] = (char)a1;
    iVar2 = 0x8c4b5224;
    *(u16 *)(puVar5 + 2) = *(u16 *)(0x8c4b5224 + iVar3);
    *(u32 *)(puVar5 + 4) = a2;
    *(u32 *)(puVar5 + 8) = a3;
    *(u32 *)(puVar5 + 0xc) = s0;
    *puVar1 = *puVar1 + 1;
    return iVar2;
}

/*
 * cri_sub_261aa8  0x8c261aa8
 * area name: in the cri library code range
 * called by: cri_sub_261ae2
 */
u32 cri_sub_261aa8(void) {
    u32 in_r0;
    int iVar1;

    iVar1 = 0xc350;
    do {
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return in_r0;
}

/*
 * cri_sub_261ab2  0x8c261ab2
 * name hint from a string it uses: E9040801 ptid is range outsi; area name: in the cri library code range
 * called by: ADXF_LoadPartition, ADXF_sub_261d46
 * strings: "E9040801:'ptid' is range outside.(adxf_ChkPrmPt)\n"; "E9040802:'ptinfo' is NULL.(adxf_ChkPrmPt)\n"
 */
u32 cri_sub_261ab2(int a0, int a1, u32 a2) {
    u32 r7;
    u32 in_PR;
    char *s0;

    if ((a0 < 0) || (0xff < a0)) {
        s0 = "E9040801:'ptid' is range outside.(adxf_ChkPrmPt)\n";
    } else {
        if (a1 != 0) {
            return 0;
        }
        s0 = "E9040802:'ptinfo' is NULL.(adxf_ChkPrmPt)\n";
    }
    lib_error_printf(a0, a1, a2, r7, s0, in_PR);
    return 0xfffffffd;
}

/*
 * cri_sub_261ae2  0x8c261ae2
 * area name: in the cri library code range
 * called by: ADXF_LoadPartition, ADXF_sub_261d46
 */
u32 cri_sub_261ae2(int a0, u32 a1, u32 a2, u32 a3) {
    int a4;
    int iVar1;
    u32 uVar2;
    u32 a5;
    int iVar3;

    iVar3 = 0;
    do {
        a5 = a1;
        uVar2 = a2;
        a1 = a5;
        a4 = ADXF_sub_262312(a0, a5, a2);
        if (0 < a4)
            break;
        shinobi_sub_1f39f0(a4, a5, uVar2, a3);
        ADXSTM_sub_26371e(a4, a5, uVar2, a3);
        ADXF_sub_262524(a4, a5, uVar2, a3);
        cri_sub_261aa8();
        iVar3 = iVar3 + 1;
    } while (iVar3 < 10000);
    if (iVar3 == 10000) {
        return 0;
    }
    iVar3 = 0;
    do {
        shinobi_sub_1f39f0(a4, a5, uVar2, a3);
        ADXSTM_sub_26371e(a4, a5, uVar2, a3);
        ADXF_sub_262524(a4, a5, uVar2, a3);
        a4 = a0;
        iVar1 = ADXF_GetStat(a0, a5, uVar2);
        if (iVar1 == 3)
            break;
        cri_sub_261aa8();
        iVar3 = iVar3 + 1;
    } while (iVar3 < 10000);
    uVar2 = ADXF_GetNumReadSct(a0, a5, uVar2);
    return uVar2;
}

/*
 * ADXF_LoadPartition  0x8c261b96
 * named from the library error message it prints (ADXF_LoadPartition)
 * called by: game_sub_0221c8
 * strings: "E9040803:can't get FAD of '%s'.(ADXF_LoadPartition)\n"; "E9040805:read error'%s'.(ADXF_LoadPartition)\n";
 * "E9040806:'%s' is broken.(ADXF_LoadPartition)\n"; "E9040804:can't open '%s'.(ADXF_LoadPartition)\n"
 */
int ADXF_LoadPartition(int a0, u32 a1, u32 *a2, int a3) {
    u16 uVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    char *s0;
    u16 *extraout_r2;
    u16 *extraout_r2_00;
    u32 *puVar5;
    u32 *puVar6;
    int *ar5_00;
    u32 uVar7;
    int iVar8;
    int iStack_40;
    u32 uStack_3c;
    u32 *puStack_38;
    u32 *puStack_34;
    int iStack_30;
    u32 uStack_2c;
    u32 *puStack_28;
    int iStack_24;

    puVar5 = a2;
    iStack_30 = a3;
    iVar2 = cri_sub_261ab2(a0, a2, a2);
    if (-1 < iVar2) {
        puVar6 = &uStack_3c;
        uVar7 = a1;
        iVar2 = cri_sub_2637ca(a1, puVar6, puVar5, a3);
        if (iVar2 < 0) {
            s0 = "E9040803:can't get FAD of '%s'.(ADXF_LoadPartition)\n";
        } else {
            puVar6 = &uStack_2c;
            uVar7 = a1;
            puStack_34 = (u32 *)ADXF_Open_like(a1, puVar6);
            if (puStack_34 != NULL) {
                ar5_00 = NULL;
                iVar8 = -1;
                uVar7 = 0x18;
                puVar5 = a2;
                memset(a2, 0, 0x18);
                *(u32 **)(a0 * 4 + 0x8c4b3e20) = a2;
                iVar2 = 0;
                *a2 = 0;
                a2[2] = uStack_3c;
                puStack_38 = a2 + 5;
                *(u8 *)((int)a2 + 0x12) = 0;
                iStack_24 = (int)a2 + 0x16;
                iStack_40 = 0;
                a2[3] = 0;
                puStack_28 = (u32 *)&g_8c4b5268;
            LAB_8c261d02:
                do {
                    puVar6 = (u32 *)0x3;
                    if (2 < iVar2) {
                        puVar6 = puVar5;
                        if (iVar2 == 3) {
                            lib_error_printf(puVar5, ar5_00, uVar7, a3,
                                             "E9040805:read error'%s'.(ADXF_LoadPartition)\n", a1);
                            puVar6 = puVar5;
                        }
                    LAB_8c261d1a:
                        if (iVar8 == -4) {
                            lib_error_printf(puVar6, ar5_00, uVar7, a3,
                                             "E9040806:'%s' is broken.(ADXF_LoadPartition)\n", a1);
                        }
                        ADXF_Close_like(puStack_34);
                        return iVar8;
                    }
                    ar5_00 = (int *)0x1;
                    puVar5 = puStack_34;
                    uVar7 = 0x8c4b5260;
                    iVar3 = cri_sub_261ae2(puStack_34, 1, 0x8c4b5260, a3);
                    if (0 < iVar3) {
                        uVar7 = 0x800;
                        if (a2[3] == 0) {
                            if (0x10000 < g_8c4b5264) {
                                g_8c4b5264 = 0x10000;
                                puVar6 = (u32 *)0xfffffffc;
                                iVar8 = -4;
                                goto LAB_8c261d1a;
                            }
                            if (iStack_30 < g_8c4b5264) {
                                uVar1 = (u16)iStack_30;
                            } else {
                                uVar1 = (u16)g_8c4b5264;
                            }
                            *(u16 *)(a2 + 4) = uVar1;
                            a2[3] = (u32)uVar1;
                            a2[1] = (uVar1 + 1) * 2 + 0x16 & 0xfffffffc;
                            uVar4 = libgcc_divide_helper_010468(*puStack_28, 0x800);
                            *extraout_r2 = (short)uVar4;
                        } else {
                            puVar6 = (u32 *)0x1;
                        }
                        a3 = 0x200;
                        ar5_00 = (int *)((int)puVar6 * 4 + 0x8c4b5260);
                        if (puVar6 < (u32 *)0x200) {
                            do {
                                iStack_40 = iStack_40 + 1;
                                uVar4 = libgcc_divide_helper_010468(*ar5_00 + 0x7ff, uVar7);
                                *extraout_r2_00 = (short)uVar4;
                                if ((int)a2[3] <= iStack_40) {
                                    iVar8 = 0;
                                    goto LAB_8c261d1a;
                                }
                                puVar6 = (u32 *)((int)puVar6 + 2);
                                ar5_00 = ar5_00 + 2;
                            } while ((int)puVar6 < a3);
                        }
                        iVar2 = 0;
                        puVar5 = puVar6;
                        goto LAB_8c261d02;
                    }
                    iVar2 = iVar2 + 1;
                } while (true);
            }
            s0 = "E9040804:can't open '%s'.(ADXF_LoadPartition)\n";
            puStack_34 = NULL;
        }
        lib_error_printf(uVar7, puVar6, puVar5, a3, s0, a1);
        iVar2 = -1;
    }
    return iVar2;
}

/*
 * ADXF_sub_261d46  0x8c261d46
 * name hint from a string it uses: E9040807 can t find s ADXF A; area name: sits between ADXF functions (same
 * compilation unit) strings: "E9040807:can't find '%s'.(ADXF_AddPartition)\n"; "E9040809:read
 * error'%s'.(ADXF_LoadPartition)\n"; "E9040810:'%s' is broken.(ADXF_LoadPartition)\n"; "E9040808:cannot open
 * '%s'.(ADXF_AddPartition)\n"
 */
int ADXF_sub_261d46(int a0, u32 a1, int *a2, int a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    char *s0;
    int *piVar4;
    u32 ar4_00;
    int *ar5_00;
    int *ar6_00;
    int iVar5;
    int iVar6;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int *piStack_24;

    ar6_00 = a2;
    iStack_30 = a3;
    iVar1 = cri_sub_261ab2(a0, a2, a2);
    if (-1 < iVar1) {
        ar5_00 = &iStack_38;
        uVar3 = a1;
        iVar1 = cri_sub_2637ca(a1, ar5_00, ar6_00, a3);
        if (iVar1 < 0) {
            s0 = "E9040807:can't find '%s'.(ADXF_AddPartition)\n";
        } else {
            ar5_00 = &iStack_28;
            uVar3 = a1;
            iStack_34 = ADXF_Open_like(a1, ar5_00);
            if (iStack_34 != 0) {
                iVar6 = -1;
                piVar4 = (int *)(a0 * 4 + 0x8c4b3e20);
                *a2 = *piVar4;
                *piVar4 = (int)a2;
                iVar5 = 0;
                iVar1 = 0;
                a2[2] = iStack_38;
                *(u8 *)((int)a2 + 0x12) = 1;
                piStack_24 = a2 + 5;
                iStack_2c = 0;
                a2[3] = 0;
            LAB_8c261ebe:
                do {
                    ar4_00 = 3;
                    if (2 < iVar1) {
                        if (iVar1 == 3) {
                            lib_error_printf(3, ar5_00, ar6_00, a3, "E9040809:read error'%s'.(ADXF_LoadPartition)\n",
                                             a1);
                        }
                    LAB_8c261ed6:
                        if (iVar6 == -4) {
                            lib_error_printf(ar4_00, ar5_00, ar6_00, a3,
                                             "E9040810:'%s' is broken.(ADXF_LoadPartition)\n", a1);
                        }
                        *(u16 *)(a2 + 4) = (u16)iStack_2c;
                        a2[1] = (u32) * (u16 *)(a2 + 4) * 8 + *(int *)(*a2 + 4) + 0x14;
                        ADXF_Close_like(iStack_34);
                        return iVar6;
                    }
                    ar5_00 = (int *)0x1;
                    ar6_00 = (int *)0x8c4b72e0;
                    iVar2 = cri_sub_261ae2(iStack_34, 1, 0x8c4b72e0, a3);
                    if (0 < iVar2) {
                        ar4_00 = 0;
                        if (a2[3] == 0) {
                            if (0x10000 < g_8c4b72e4) {
                                g_8c4b72e4 = 0x10000;
                                ar4_00 = 0xfffffffc;
                                iVar6 = -4;
                                goto LAB_8c261ed6;
                            }
                            iVar1 = g_8c4b72e4;
                            if (iStack_30 < g_8c4b72e4) {
                                iVar1 = iStack_30;
                            }
                            a2[3] = iVar1;
                            ar4_00 = 2;
                        }
                        ar5_00 = (int *)0x200;
                        if (ar4_00 < 0x200) {
                            do {
                                if (*(int *)(ar4_00 * 4 + 0x8c4b72e0) == 0) {
                                    ar4_00 = ar4_00 + 2;
                                } else {
                                    a3 = 0x7ff;
                                    ar5_00 = piStack_24 + iStack_2c * 2;
                                    *(short *)ar5_00 = (short)iVar5;
                                    ar6_00 = (int *)0x800;
                                    iVar2 = ar4_00 + 1;
                                    iStack_2c = iStack_2c + 1;
                                    iVar1 =
                                        libgcc_divide_helper_010468(*(int *)(ar4_00 * 4 + 0x8c4b72e0) + 0x7ff, 0x800);
                                    ar5_00[1] = iVar1;
                                    ar4_00 = iVar2 + 1;
                                    uVar3 = libgcc_divide_helper_010468(*(int *)(iVar2 * 4 + 0x8c4b72e0) + a3, ar6_00);
                                    *(short *)((int)ar5_00 + 2) = (short)uVar3;
                                }
                                iVar5 = iVar5 + 1;
                                if (a2[3] <= iVar5) {
                                    iVar6 = 0;
                                    goto LAB_8c261ed6;
                                }
                            } while ((int)ar4_00 < 0x200);
                        }
                        iVar1 = 0;
                        goto LAB_8c261ebe;
                    }
                    iVar1 = iVar1 + 1;
                } while (true);
            }
            s0 = "E9040808:cannot open '%s'.(ADXF_AddPartition)\n";
            iStack_34 = 0;
        }
        lib_error_printf(uVar3, ar5_00, ar6_00, a3, s0, a1);
        iVar1 = -1;
    }
    return iVar1;
}

/*
 * ADXF_sub_261f22  0x8c261f22
 * area name: sits between ADXF functions (same compilation unit)
 * called by: ADXF_sub_261f48
 */
char *ADXF_sub_261f22(void) {
    char *pcVar1;
    char *pcVar2;
    char *pcVar3;

    pcVar2 = 0x8c4b3b20;
    for (pcVar1 = 0x8c4b3b20; (pcVar3 = NULL, pcVar1 < 0x8c4b3b20 + 0x300 && (pcVar3 = pcVar2, *pcVar1 != '\0'));
         pcVar1 = pcVar1 + 0x30) {
        pcVar2 = pcVar2 + 0x30;
    }
    return pcVar3;
}

/*
 * ADXF_sub_261f48  0x8c261f48
 * area name: sits between ADXF functions (same compilation unit)
 * called by: ADXF_Open_like, ADXF_sub_2620c8
 */
u32 ADXF_sub_261f48(void) {
    u8 *puVar1;

    puVar1 = (u8 *)ADXF_sub_261f22();
    if (puVar1 == NULL) {
        return 0;
    }
    puVar1[1] = 1;
    *(u32 *)(puVar1 + 4) = 0;
    *(u32 *)(puVar1 + 0x1c) = 0;
    *(u32 *)(puVar1 + 0x20) = 0;
    *(u32 *)(puVar1 + 0x24) = 0;
    puVar1[2] = 0;
    *(u32 *)(puVar1 + 8) = 0;
    *puVar1 = 1;
    return puVar1;
}

/*
 * ADXF_sub_261f7a  0x8c261f7a
 * name hint from a string it uses: E9040901 can t find s ADXF O; area name: sits between ADXF functions (same
 * compilation unit) called by: ADXF_Open_like
 */
int ADXF_sub_261f7a(int a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 a4;
    u32 *ar5_00;
    u32 *a5;
    u32 uStack_20;
    u32 uStack_1c;
    u32 auStack_18[2];

    a5 = &uStack_20;
    ar5_00 = auStack_18;
    a4 = a1;
    iVar2 = cri_sub_2637ca(a1, ar5_00, a2, a3);
    puVar1 = (&lib_error_printf);
    if (-1 < iVar2) {
        ar5_00 = &uStack_1c;
        a4 = a1;
        iVar2 = cri_sub_2637e8(a1, ar5_00, a2, a3);
        if (-1 < iVar2) {
            iVar2 = cri_sub_263816(a1, &uStack_20, a2, a3);
            if (iVar2 < 0) {
                (*(code *)puVar1)(a1, a5, a2, a3);
                return iVar2;
            }
            *(u32 *)(a0 + 0xc) = auStack_18[0];
            *(u32 *)(a0 + 0x10) = uStack_1c;
            *(u32 *)(a0 + 0x14) = uStack_20;
            return 0;
        }
    }
    (*(code *)puVar1)(a4, ar5_00, a2, a3);
    return iVar2;
}

/*
 * ADXF_Open_like  0x8c26201c
 * allocates an ADXF handle and opens file a0 on it; NULL on failure
 * called by: ADXF_LoadPartition, ADXF_sub_261d46, CDCGD_sub_0202c0, CDCGD_sub_02041c
 */
int ADXF_Open_like(u32 a0, u32 a1) {
    int a4;
    int ar4_00;
    u32 ar5_00;
    u32 ar6_00;
    int iVar1;
    u32 ain0;

    ar5_00 = 0;
    ar4_00 = 1;
    ar6_00 = a0;
    ain0 = a1;
    cri_sub_261a4c(1, 0, a0, a1);
    irq_disable_nested(ar4_00, ar5_00, ar6_00, a1, ain0);
    a4 = ADXF_sub_261f48();
    iVar1 = a4;
    if ((a4 != 0) && (ar5_00 = a0, ar4_00 = ADXF_sub_261f7a(a4, a0, ar6_00, a1), ar4_00 < 0)) {
        ADXF_Close_like(a4);
        iVar1 = 0;
        ar4_00 = a4;
    }
    irq_restore_nested(ar4_00, ar5_00, ar6_00, a1, ain0);
    cri_sub_261a4c(1, 1, a0, ain0);
    return iVar1;
}

/*
 * ADXF_sub_262078  0x8c262078
 * area name: sits between ADXF functions (same compilation unit)
 * called by: ADXF_sub_2620c8
 */
u32 ADXF_sub_262078(int a0, u32 a1, u32 a2) {
    int iVar1;
    int iStack_18;
    u32 uStack_14;
    iVar1 = ADXF_sub_26270c(a1, a2, &uStack_14, &iStack_18);
    if (iVar1 < 0) {
        return 0xfffffffd;
    }
    *(u32 *)(a0 + 0xc) = uStack_14;
    *(int *)(a0 + 0x10) = iStack_18;
    *(int *)(a0 + 0x14) = iStack_18 << 0xb;
    return 0;
}

/*
 * ADXF_sub_2620c8  0x8c2620c8
 * area name: sits between ADXF functions (same compilation unit)
 */
int ADXF_sub_2620c8(void) {
    int a4;
    int ar4_00;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 unaff_r12;
    u32 unaff_r13;
    int iVar1;
    u32 in_PR;

    ar5_00 = 0;
    ar4_00 = 2;
    ar6_00 = unaff_r12;
    ar7_00 = unaff_r13;
    cri_sub_261a4c(2, 0, unaff_r12, unaff_r13);
    irq_disable_nested(ar4_00, ar5_00, ar6_00, ar7_00, in_PR);
    a4 = ADXF_sub_261f48();
    iVar1 = a4;
    if ((a4 != 0) &&
        (ar5_00 = unaff_r12, ar6_00 = unaff_r13, ar4_00 = ADXF_sub_262078(a4, unaff_r12, unaff_r13), ar4_00 < 0)) {
        ADXF_Close_like(a4);
        iVar1 = 0;
        ar4_00 = a4;
    }
    irq_restore_nested(ar4_00, ar5_00, ar6_00, ar7_00, in_PR);
    cri_sub_261a4c(2, 1, unaff_r12, unaff_r13);
    return iVar1;
}

/*
 * ADXF_sub_26211c  0x8c26211c
 * area name: sits between ADXF functions (same compilation unit)
 * called by: ADXF_Stop, ADXF_sub_2624a0
 */
int ADXF_sub_26211c(int a0, u32 a1, u32 a2, u32 a3, int ain0) {

    if (*(int *)(a0 + 4) != 0) {
        ain0 = ADXSTM_sub_263446(*(u32 *)(a0 + 4), a1, a2, a3);
        *(u32 *)(a0 + 4) = 0;
    }
    if ((*(int *)(a0 + 8) != 0) && (ain0 = (int)*(char *)(a0 + 2), ain0 == 0)) {
        if (g_8c4b4220 == 1) {
            a1 = *(u32 *)(a0 + 0x2c);
            cri_sub_261786(*(u32 *)(a0 + 0x28), a1);
        }
        ain0 = (**(code **)(**(int **)(a0 + 8) + 0xc))(*(int **)(a0 + 8), a1, a2, a3);
        *(u32 *)(a0 + 8) = 0;
    }
    return ain0;
}

/*
 * ADXF_Close_like  0x8c262168
 * stops an ADXF handle that is reading and clears it (0x30 bytes)
 * called by: ADXF_LoadPartition, ADXF_Open_like, ADXF_sub_261d46, ADXF_sub_2620c8, ADXF_sub_2621e2, CDCGD_sub_02049c,
 * game_sub_01f8a4, game_sub_01fab4
 */
u32 ADXF_Close_like(int a0) {
    u32 uVar1;
    u32 ar5_00;
    u32 ar7_00;

    ar5_00 = 0;
    ar7_00 = 0xffffffff;
    uVar1 = cri_sub_261a4c(3, 0, a0, 0xffffffff, 0xffffffff);
    if (a0 != 0) {
        irq_disable_nested();
        if (*(char *)(a0 + 1) == '\x02') {
            ADXF_Stop(a0);
        }
        memset(a0, 0, 0x30);
        irq_restore_nested();
        uVar1 = cri_sub_261a4c(3, 1, a0, 0xffffffff, 0xffffffff);
    }
    return uVar1;
}

/*
 * ADXF_sub_26216c  0x8c26216c
 * area name: sits between ADXF functions (same compilation unit)
 */
u32 ADXF_sub_26216c(int a0) {
    u32 uVar1;
    u32 in_r3;
    u32 uVar2;
    int iVar3;
    u32 ar5_00;
    u32 in_PR;

    ar5_00 = 0;
    uVar2 = 3;
    iVar3 = a0;
    uVar1 = cri_sub_261a4c(3, 0, a0, in_r3);
    if (a0 != 0) {
        irq_disable_nested(uVar2, ar5_00, iVar3, in_r3, in_PR);
        if (*(char *)(a0 + 1) == '\x02') {
            ADXF_Stop(a0);
        }
        uVar1 = 0;
        uVar2 = 0x30;
        iVar3 = a0;
        memset(a0, 0, 0x30);
        irq_restore_nested(iVar3, uVar1, uVar2, in_r3, in_PR);
        uVar1 = cri_sub_261a4c(3, 1, a0, 0xffffffff);
    }
    return uVar1;
}

/*
 * ADXF_sub_2621e2  0x8c2621e2
 * area name: sits between ADXF functions (same compilation unit)
 */
int ADXF_sub_2621e2(u32 unused_a0, char *a1) {
    int iVar1;
    int unaff_r12;
    char *pcVar2;
    char *a4;
    char *pcVar3;

    pcVar2 = a1 + unaff_r12;
    a4 = a1;
    pcVar3 = a1;
    do {
        iVar1 = (int)*pcVar3;
        if (iVar1 == 1) {
            iVar1 = ADXF_Close_like(a4);
        }
        pcVar3 = pcVar3 + 0x30;
        a4 = a4 + 0x30;
    } while (pcVar3 < pcVar2);
    return iVar1;
}

/*
 * ADXF_sub_262208  0x8c262208
 * name hint from a string it uses: E9040811 adxf is NULL adxf r; area name: sits between ADXF functions (same
 * compilation unit) called by: ADXF_sub_2622e4, ADXF_sub_262312
 */
u32 ADXF_sub_262208(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 ar4_00;
    u32 ar5_00;
    u32 uVar3;

    if ((a0 == 0) || (a1 < 0)) {
        lib_error_printf(a0, a1, a2, a3);
    } else {
        if (a2 != 0) {
            if (*(char *)(a0 + 1) == '\x02') {
                return 0;
            }
            if (*(int *)(a0 + 4) != 0) {
                lib_error_printf(a0, a1, a2, a3);
                return 0xffffffff;
            }
            irq_disable_nested(a0, a1, a2, a3, a2);
            *(int *)(a0 + 0x1c) = *(int *)(a0 + 0xc) + *(int *)(a0 + 0x18);
            iVar2 = *(int *)(a0 + 0x10) - *(int *)(a0 + 0x18);
            if (a1 < iVar2) {
                iVar2 = a1;
            }
            *(int *)(a0 + 0x20) = iVar2;
            *(u32 *)(a0 + 0x24) = 0;
            ar5_00 = *(u32 *)(a0 + 0x20);
            iVar2 = a2;
            iVar1 = ADXSTM_OpenRange(*(u32 *)(a0 + 0x1c), ar5_00, a2, a3);
            if (iVar1 == 0) {
                uVar3 = 0xffffffff;
                ar4_00 = 0;
            } else {
                *(int *)(a0 + 4) = iVar1;
                *(u8 *)(a0 + 1) = 2;
                ar4_00 = *(u32 *)(a0 + 4);
                ADXSTM_rewind(ar4_00);
                uVar3 = *(u32 *)(a0 + 0x20);
            }
            irq_restore_nested(ar4_00, ar5_00, a2, a3, iVar2);
            return uVar3;
        }
        lib_error_printf(a0, a1, 0, a3);
    }
    return 0xfffffffd;
}

/*
 * ADXF_sub_2622e4  0x8c2622e4
 * area name: sits between ADXF functions (same compilation unit)
 */
u32 ADXF_sub_2622e4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ain0;
    int ar4_00;

    irq_disable_nested(a0, a1, a2, a3, a2);
    ar4_00 = a0;
    ain0 = ADXF_sub_262208(a0, a1, a2, a3);
    *(u8 *)(a0 + 2) = 1;
    irq_restore_nested(ar4_00, a1, a2, a3, ain0);
    return ain0;
}

/*
 * ADXF_sub_262312  0x8c262312
 * name hint from a string it uses: E9040816 adxf is NULL ADXF R; area name: sits between ADXF functions (same
 * compilation unit) called by: CDCGD_sub_0202c0, cri_sub_261ae2, game_sub_01fab4
 */
u32 ADXF_sub_262312(int *a0, int a1, u32 a2) {
    int *piVar1;
    u32 uVar2;
    u32 ar4_00;
    int *ar4_01;
    u32 a5;
    int iVar3;
    int iVar4;
    int *a6;
    int ar7_00;

    a5 = 0;
    uVar2 = 4;
    piVar1 = a0;
    ar7_00 = a1;
    cri_sub_261a4c(4, 0, a0, a1);
    if ((a0 == NULL) || (a1 < 0)) {
        lib_error_printf(uVar2, a5, piVar1, ar7_00);
    } else if (a2 == 0) {
        lib_error_printf(uVar2, a5, piVar1, ar7_00);
    } else {
        if ((a2 & 0x1f) == 0) {
            if (*(char *)((int)a0 + 1) == '\x02') {
                return 0;
            }
            if (a0[2] != 0) {
                lib_error_printf(a2, a5, piVar1, ar7_00);
                return 0xffffffff;
            }
            iVar3 = a1 << 0xb;
            uVar2 = 0;
            ar4_00 = a2;
            iVar4 = iVar3;
            piVar1 = (int *)game_sub_26b564(a2, iVar3, 0);
            if (piVar1 == NULL) {
                return 0xfffffffe;
            }
            a0[10] = a2;
            a0[0xb] = iVar4;
            if (g_8c4b4220 == 1) {
                iVar3 = a0[0xb];
                ar4_00 = a0[10];
                cri_sub_261786(ar4_00, iVar3);
            }
            irq_disable_nested(ar4_00, iVar3, uVar2, ar7_00, iVar4);
            ar4_01 = a0;
            iVar4 = a1;
            a6 = piVar1;
            iVar3 = ADXF_sub_262208(a0, a1, piVar1, ar7_00);
            if (iVar3 < 1) {
                (**(code **)(*piVar1 + 0xc))(piVar1, iVar4, a6, ar7_00);
                ar4_01 = piVar1;
            } else {
                a0[2] = (int)piVar1;
            }
            *(u8 *)((int)a0 + 2) = 0;
            irq_restore_nested(ar4_01, iVar4, a6, ar7_00, iVar3);
            cri_sub_261a4c(4, 1, a0, a1);
            return iVar3;
        }
        lib_error_printf(a2, a5, piVar1, ar7_00);
    }
    return 0xfffffffd;
}

/*
 * ADXF_Stop  0x8c262406
 * named from the library error message it prints (ADXF_Stop)
 * called by: ADXF_Close_like, ADXF_Seek, ADXF_Seek_262560, ADXF_sub_26216c
 * strings: "E9040822:\'adxf\' is NULL.(ADXF_Stop)\n"; "E9040823:\'adxf->stm\' is NULL.(ADXF_Stop)\n"
 */
u32 ADXF_Stop(int a0) {
    u32 ar4_00;
    int ar4_01;
    u32 ar5_00;
    u8 *ar5_01;
    int ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;

    ar5_01 = &stack0xfffffff4;
    ar5_00 = 0;
    ar7_00 = 0xffffffff;
    ar4_00 = 5;
    ar6_00 = a0;
    cri_sub_261a4c(5, 0, a0, 0xffffffff);
    if (a0 == 0) {
        lib_error_printf(ar4_00, ar5_00, ar6_00, ar7_00, "E9040822:\'adxf\' is NULL.(ADXF_Stop)\n", in_stack_fffffff4);
        return 0xfffffffd;
    }
    if (*(char *)(a0 + 1) != '\x01') {
        if (*(char *)(a0 + 1) == '\x03') {
            *(u8 *)(a0 + 1) = 1;
        } else {
            if (*(int *)(a0 + 4) == 0) {
                lib_error_printf(ar4_00, ar5_00, ar6_00, ar7_00, "E9040823:\'adxf->stm\' is NULL.(ADXF_Stop)\n",
                                 in_stack_fffffff4);
                return 0xffffffff;
            }
            irq_disable_nested(ar4_00, ar5_00, ar6_00, ar7_00, in_stack_fffffff4);
            ADXSTM_stop_read(*(u32 *)(a0 + 4), ar5_00, ar6_00, ar7_00);
            ADXSTM_sub_263768(*(u32 *)(a0 + 4), &stack0xfffffff4);
            *(u32 *)(a0 + 0x24) = in_stack_fffffff4;
            ar4_01 = a0;
            ADXF_sub_26211c(a0, ar5_01, ar6_00, ar7_00, in_stack_fffffff4);
            *(u8 *)(a0 + 1) = 1;
            irq_restore_nested(ar4_01, ar5_01, ar6_00, ar7_00, in_stack_fffffff4);
            cri_sub_261a4c(5, 1, a0, 0xffffffff);
        }
    }
    return *(u32 *)(a0 + 0x18);
}

/*
 * ADXF_sub_2624a0  0x8c2624a0
 * area name: sits between ADXF functions (same compilation unit)
 * called by: ADXF_sub_262524
 */
int ADXF_sub_2624a0(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 *ar5_00;
    u32 in_stack_fffffff4;

    ar5_00 = &stack0xfffffff4;
    iVar1 = (int)*(char *)(a0 + 1);
    if (iVar1 == 2) {
        uVar2 = get_field_1_s8_263746(*(u32 *)(a0 + 4));
        *(char *)(a0 + 1) = (char)uVar2;
        ADXSTM_sub_263768(*(u32 *)(a0 + 4), &stack0xfffffff4);
        *(u32 *)(a0 + 0x24) = in_stack_fffffff4;
        iVar1 = (int)*(char *)(a0 + 1);
        if ((iVar1 == 3) || (iVar1 == 4)) {
            *(int *)(a0 + 0x18) = *(int *)(a0 + 0x18) + *(int *)(a0 + 0x24);
            iVar1 = ADXF_sub_26211c(a0, ar5_00, a2, a3, in_stack_fffffff4);
        }
    }
    return iVar1;
}

/*
 * ADXF_sub_262524  0x8c262524
 * area name: sits between ADXF functions (same compilation unit)
 * called by: adx_server, cri_sub_261ae2
 */
u32 ADXF_sub_262524(u32 a0, u32 a1, u32 a2, u32 a3) {
    int ain0;
    u32 uVar1;
    char *ar4_00;
    char *a4;
    u32 in_PR;

    irq_disable_nested(a0, a1, a2, a3, in_PR);
    a4 = &g_8c4b3b20;
    do {
        ain0 = (int)*a4;
        ar4_00 = a4;
        if (ain0 == 1) {
            ain0 = ADXF_sub_2624a0(a4, a1, a2, a3);
        }
        a4 = a4 + 0x30;
    } while (a4 < (char *)0x8c4b3e20);
    uVar1 = irq_restore_nested(ar4_00, a1, a2, a3, ain0);
    return uVar1;
}

/*
 * ADXF_Seek  0x8c262554
 * named from the library error message it prints (ADXF_Seek)
 * called by: CDCGD_sub_0202c0
 * strings: "E9040825:'adxf' is NULL.(ADXF_Seek)\n"; "E9040826:'type' is illigal.(ADXF_Seek)\n"
 */
u32 ADXF_Seek(int a0, int a1, int a2) {
    int ar4_00;
    u32 uVar1;
    int ar6_00;
    int ar7_00;
    u32 in_PR;

    uVar1 = 0;
    ar4_00 = 6;
    ar6_00 = a0;
    ar7_00 = a1;
    cri_sub_261a4c(6, 0, a0, a1, a2);
    if (a0 == 0) {
        lib_error_printf(ar4_00, uVar1, ar6_00, ar7_00, "E9040825:'adxf' is NULL.(ADXF_Seek)\n", in_PR);
    LAB_8c2625b4:
        uVar1 = 0xfffffffd;
    } else {
        if (*(char *)(a0 + 1) == '\x02') {
            ar4_00 = a0;
            ADXF_Stop(a0);
        }
        if (a2 == 0) {
            *(int *)(a0 + 0x18) = a1;
        } else if (a2 == 1) {
            *(int *)(a0 + 0x18) = *(int *)(a0 + 0x18) + a1;
        } else {
            if (a2 != 2) {
                lib_error_printf(ar4_00, uVar1, ar6_00, ar7_00, "E9040826:'type' is illigal.(ADXF_Seek)\n", in_PR);
                goto LAB_8c2625b4;
            }
            *(int *)(a0 + 0x18) = *(int *)(a0 + 0x10) + a1;
        }
        if (*(int *)(a0 + 0x18) < 0) {
            *(u32 *)(a0 + 0x18) = 0;
        } else if (*(int *)(a0 + 0x10) < *(int *)(a0 + 0x18)) {
            *(u32 *)(a0 + 0x18) = *(u32 *)(a0 + 0x10);
        }
        cri_sub_261a4c(6, 1, a0, a1, a2);
        uVar1 = *(u32 *)(a0 + 0x18);
    }
    return uVar1;
}

/*
 * ADXF_Seek_262560  0x8c262560
 * named from the library error message it prints (ADXF_Seek)
 * strings: "E9040825:'adxf' is NULL.(ADXF_Seek)\n"; "E9040826:'type' is illigal.(ADXF_Seek)\n"
 */
u32 ADXF_Seek_262560(void) {
    int ar4_00;
    u32 uVar1;
    int a6;
    int a7;
    int unaff_r12;
    int unaff_r13;
    int unaff_r14;
    u32 in_PR;

    uVar1 = 0;
    ar4_00 = 6;
    a6 = unaff_r14;
    a7 = unaff_r12;
    cri_sub_261a4c(6, 0, unaff_r14, unaff_r12);
    if (unaff_r14 == 0) {
        lib_error_printf(ar4_00, uVar1, a6, a7, "E9040825:'adxf' is NULL.(ADXF_Seek)\n", in_PR);
    LAB_8c2625b4:
        uVar1 = 0xfffffffd;
    } else {
        if (*(char *)(unaff_r14 + 1) == '\x02') {
            ar4_00 = unaff_r14;
            ADXF_Stop(unaff_r14);
        }
        if (unaff_r13 == 0) {
            *(int *)(unaff_r14 + 0x18) = unaff_r12;
        } else if (unaff_r13 == 1) {
            *(int *)(unaff_r14 + 0x18) = *(int *)(unaff_r14 + 0x18) + unaff_r12;
        } else {
            if (unaff_r13 != 2) {
                lib_error_printf(ar4_00, uVar1, a6, a7, "E9040826:'type' is illigal.(ADXF_Seek)\n", in_PR);
                goto LAB_8c2625b4;
            }
            *(int *)(unaff_r14 + 0x18) = *(int *)(unaff_r14 + 0x10) + unaff_r12;
        }
        if (*(int *)(unaff_r14 + 0x18) < 0) {
            *(u32 *)(unaff_r14 + 0x18) = 0;
        } else if (*(int *)(unaff_r14 + 0x10) < *(int *)(unaff_r14 + 0x18)) {
            *(u32 *)(unaff_r14 + 0x18) = *(u32 *)(unaff_r14 + 0x10);
        }
        cri_sub_261a4c(6, 1, unaff_r14, unaff_r12);
        uVar1 = *(u32 *)(unaff_r14 + 0x18);
    }
    return uVar1;
}

/*
 * ADXF_Tell  0x8c2625ec
 * named from the library error message it prints (ADXF_Tell)
 * strings: "E9040827:'adxf' is NULL.(ADXF_Tell)\n"
 */
u32 ADXF_Tell(int a0, u32 unused_a1, u32 a2) {
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        lib_error_printf(0, unused_a1, a2, r7, "E9040827:'adxf' is NULL.(ADXF_Tell)\n", in_PR);
        return 0xfffffffd;
    }
    return *(u32 *)(a0 + 0x18);
}

/*
 * ADXF_GetFsizeSct  0x8c262628
 * named from the library error message it prints (ADXF_GetFsizeSct)
 * strings: "E9040828:'adxf' is NULL.(ADXF_GetFsizeSct)\n"
 */
u32 ADXF_GetFsizeSct(int a0, u32 unused_a1, u32 a2) {
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        lib_error_printf(0, unused_a1, a2, r7, "E9040828:'adxf' is NULL.(ADXF_GetFsizeSct)\n", in_PR);
        return 0xfffffffd;
    }
    return *(u32 *)(a0 + 0x10);
}

/*
 * ADXF_GetFsizeByte  0x8c262646
 * named from the library error message it prints (ADXF_GetFsizeByte)
 * called by: CDCGD_sub_0202c0, CDCGD_sub_02041c
 * strings: "E9040829:'adxf' is NULL.(ADXF_GetFsizeByte)\n"
 */
u32 ADXF_GetFsizeByte(int a0, u32 unused_a1, u32 a2) {
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        lib_error_printf(0, unused_a1, a2, r7, "E9040829:'adxf' is NULL.(ADXF_GetFsizeByte)\n", in_PR);
        return 0xfffffffd;
    }
    return *(u32 *)(a0 + 0x14);
}

/*
 * ADXF_GetNumReqSct  0x8c262664
 * named from the library error message it prints (ADXF_GetNumReqSct)
 * strings: "E9040830:'adxf' is NULL.(ADXF_GetNumReqSct)\n"
 */
u32 ADXF_GetNumReqSct(int a0, u32 *a1, u32 a2) {
    u32 r7;
    if (a0 == 0) {
        lib_error_printf(0, a1, a2, r7, "E9040830:'adxf' is NULL.(ADXF_GetNumReqSct)\n", a1);
        *a1 = 0;
        return 0xfffffffd;
    }
    *a1 = *(u32 *)(a0 + 0x1c);
    return *(u32 *)(a0 + 0x20);
}

/*
 * ADXF_GetNumReadSct  0x8c262696
 * named from the library error message it prints (ADXF_GetNumReadSct)
 * called by: cri_sub_261ae2
 * strings: "E9040831:'adxf' is NULL.(ADXF_GetNumReadSct)\n"
 */
u32 ADXF_GetNumReadSct(int a0, u32 unused_a1, u32 a2) {
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        lib_error_printf(0, unused_a1, a2, r7, "E9040831:'adxf' is NULL.(ADXF_GetNumReadSct)\n", in_PR);
        return 0xfffffffd;
    }
    return *(u32 *)(a0 + 0x24);
}

/*
 * ADXF_GetStat  0x8c2626b4
 * named from the library error message it prints (ADXF_GetStat)
 * called by: cri_sub_261ae2, game_sub_01f8a4, game_sub_01fab4
 * strings: "E9040832:'adxf' is NULL.(ADXF_GetStat)\n"
 */
u32 ADXF_GetStat(int a0, u32 unused_a1, u32 a2) {
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        lib_error_printf(0, unused_a1, a2, r7, "E9040832:'adxf' is NULL.(ADXF_GetStat)\n", in_PR);
        return 0xfffffffd;
    }
    return (int)*(char *)(a0 + 1);
}

/*
 * ADXF_GetFileRange  0x8c2626d2
 * named from the library error message it prints (ADXF_GetFileRange)
 * called by: ADXF_sub_26270c
 * strings: "E9040828:'ptid' is range outside.(ADXF_GetFileRange)\n"; "E9040828:'flid' is range
 * outside.(ADXF_GetFileRange)\n"
 */
u32 ADXF_GetFileRange(int a0, int a1, u32 a2) {
    u32 r7;
    char *s0;
    u32 in_PR;

    if ((a0 < 0) || (0xff < a0)) {
        s0 = "E9040828:'ptid' is range outside.(ADXF_GetFileRange)\n";
    } else {
        a0 = *(int *)(a0 * 4 + 0x8c4b3e20);
        if ((-1 < a1) && (a1 < *(int *)(a0 + 0xc))) {
            return 0;
        }
        s0 = "E9040828:'flid' is range outside.(ADXF_GetFileRange)\n";
    }
    lib_error_printf(a0, a1, a2, r7, s0, in_PR);
    return 0xfffffffd;
}

/*
 * ADXF_sub_26270c  0x8c26270c
 * area name: sits between ADXF functions (same compilation unit)
 * called by: ADXF_sub_262078, ADXT_StartAfs
 */
int ADXF_sub_26270c(int a0, u32 a1, int *a2, u32 *a3) {
    u16 uVar1;
    int iVar2;
    u16 *puVar3;
    int *piVar4;
    int iVar5;
    u32 uVar6;

    iVar2 = ADXF_GetFileRange(a0, a1, a2);
    if (iVar2 < 0) {
        *a2 = -1;
        *a3 = 0xffffffff;
    } else {
        for (piVar4 = *(int **)(0x8c4b3e20 + a0 * 4); iVar5 = 0, *piVar4 != 0; piVar4 = (int *)*piVar4) {
            for (; iVar5 < (int)(u32) * (u16 *)(piVar4 + 4); iVar5 = iVar5 + 1) {
                puVar3 = (u16 *)(piVar4 + iVar5 * 2 + 5);
                if (*puVar3 == a1) {
                    *a2 = piVar4[2] + *(int *)(puVar3 + 2);
                    *a3 = (u32)puVar3[1];
                    return iVar2;
                }
            }
        }
        iVar5 = 0;
        uVar6 = (u32) * (u16 *)(piVar4 + 5);
        puVar3 = (u16 *)((int)piVar4 + 0x16);
        if (0 < (int)a1) {
            do {
                uVar1 = *puVar3;
                puVar3 = puVar3 + 1;
                iVar5 = iVar5 + 1;
                uVar6 = uVar6 + uVar1;
            } while (iVar5 < (int)a1);
        }
        *a2 = uVar6 + piVar4[2];
        *a3 = (u32)((u16 *)((int)piVar4 + 0x16))[a1];
    }
    return iVar2;
}

/*
 * lib_error_printf_wrap  0x8c2627f6
 * only calls lib_error_printf
 */
u32 lib_error_printf_wrap(u32 a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;

    uVar1 = lib_error_printf(a0, a1, a2, r7, &g_8c2726e8, a1);
    return uVar1;
}

/*
 * cri_sub_262810  0x8c262810
 * area name: in the cri library code range
 * called by: input_sub_01f608
 */
u32 cri_sub_262810(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 ain0) {
    u32 uVar1;
    int ain0_00;
    u8 *ar4_00;
    code *ar5_00;

    if (g_8c278478 == 0) {
        uVar1 = cri_sub_260c98(a0, unused_a1, unused_a2, a3, ain0);
        uVar1 = irq_disable_nested(a0, unused_a1, unused_a2, a3, uVar1);
        uVar1 = game_sub_26b992();
        uVar1 = game_sub_26b526();
        game_sub_26b212();
        cri_sub_25eca8(a0, unused_a1, unused_a2, a3);
        memset_wrap_263244(a0, unused_a1, unused_a2, a3);
        cri_sub_262ac4();
        ta_fifo_2619b4(a0, unused_a1, unused_a2, a3);
        thunk_FUN_8c2689c8();
        thunk_FUN_8c26a130(lib_error_printf_wrap, 0);
        ar4_00 = &g_8c277fd0;
        uVar1 = 0x4a0;
        ar5_00 = NULL;
        memset(&g_8c277fd0, 0, 0x4a0);
        ain0_00 = g_8c278474;
        if (g_8c278474 == 1) {
            ar4_00 = (u8 *)0x900;
            a3 = 0;
            ar5_00 = adx_server;
            uVar1 = 0x70;
            ain0_00 = ta_sub_1fa244(0x900, adx_server, 0x70, 0);
            g_8c278470 = ain0_00;
        }
        ain0 = irq_restore_nested(ar4_00, ar5_00, uVar1, a3, ain0_00);
    }
    g_8c278478 = g_8c278478 + 1;
    return ain0;
}

/*
 * cri_sub_262814  0x8c262814
 * area name: in the cri library code range
 */
u32 cri_sub_262814(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 ain0) {
    u8 *ar4_00;
    code *ar5_00;
    u32 ar6_00;
    int *unaff_r14;
    u32 in_PR;

    if (*unaff_r14 == 0) {
        cri_sub_260c98(a0, unused_a1, unused_a2, a3, in_PR);
        irq_disable_nested(a0, unused_a1, unused_a2, a3, in_PR);
        game_sub_26b992();
        game_sub_26b526();
        game_sub_26b212();
        cri_sub_25eca8(a0, unused_a1, unused_a2, a3);
        memset_wrap_263244(a0, unused_a1, unused_a2, a3);
        cri_sub_262ac4();
        ta_fifo_2619b4(a0, unused_a1, unused_a2, a3);
        thunk_FUN_8c2689c8();
        thunk_FUN_8c26a130(lib_error_printf_wrap, 0);
        ar4_00 = &g_8c277fd0;
        ar6_00 = 0x4a0;
        ar5_00 = NULL;
        memset(&g_8c277fd0, 0, 0x4a0);
        if (g_8c278474 == 1) {
            ar4_00 = (u8 *)0x900;
            a3 = 0;
            ar5_00 = adx_server;
            ar6_00 = 0x70;
            g_8c278470 = ta_sub_1fa244(0x900, adx_server, 0x70, 0);
        }
        ain0 = irq_restore_nested(ar4_00, ar5_00, ar6_00, a3, in_PR);
    }
    *unaff_r14 = *unaff_r14 + 1;
    return ain0;
}

/*
 * cri_sub_2628fa  0x8c2628fa
 * area name: in the cri library code range
 */
u32 cri_sub_2628fa(int *a0, u32 a1, u32 unused_a2, u32 a3, u32 ain0) {
    u32 uVar1;
    int iVar2;
    u32 in_PR;

    iVar2 = *a0;
    *a0 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
        irq_disable_nested(a0, a1, unused_a2, a3, in_PR);
        iVar2 = g_8c278470;
        if (g_8c278470 != 0) {
            shinobi_sub_1fa54c(g_8c278470);
            g_8c278470 = 0;
        }
        irq_restore_nested(iVar2, a1, unused_a2, a3, in_PR);
        thunk_FUN_8c268a24();
        irq_disable_nested(iVar2, a1, unused_a2, a3, in_PR);
        ta_fifo_2619ee();
        memset_wrap_262ad8();
        noop_26325a();
        cri_sub_25ecc2(iVar2, a1, unused_a2, a3);
        game_sub_26b234();
        game_sub_26b548();
        uVar1 = game_sub_26b9b4();
        uVar1 = irq_restore_nested(iVar2, a1, unused_a2, a3, uVar1);
        return uVar1;
    }
    return ain0;
}

/*
 * thunk_FUN_8c2689c8  0x8c2629a0
 * called by: cri_sub_262810, cri_sub_262814
 */
u32 thunk_FUN_8c2689c8(void) {
    u32 uVar1;

    uVar1 = (g_8c2689c8)();
    return uVar1;
}

/*
 * thunk_FUN_8c268a24  0x8c2629a6
 * called by: cri_sub_2628fa
 */
u32 thunk_FUN_8c268a24(void) {
    u32 uVar1;

    uVar1 = (g_8c268a24)();
    return uVar1;
}

/*
 * cri_sub_2629ac  0x8c2629ac
 * area name: in the cri library code range
 */
u32 cri_sub_2629ac(void) {
    u32 uVar1;

    uVar1 = sd_sub_268b70();
    return uVar1;
}

/*
 * cri_sub_2629b2  0x8c2629b2
 * area name: in the cri library code range
 * called by: cri_sub_2639fa
 */
u32 cri_sub_2629b2(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    mwRnaStop(a0, unused_a1, a2, a3);
    uVar1 = sd_sub_268c7e(a0);
    return uVar1;
}

/*
 * cri_sub_2629d0  0x8c2629d0
 * area name: in the cri library code range
 */
u32 cri_sub_2629d0(void) {
    u32 uVar1;

    uVar1 = mwRna_sub_2690d8();
    return uVar1;
}

/*
 * mwRna_set_play_sw_wrap  0x8c2629d6
 * only calls mwRna_set_play_sw
 */
u32 mwRna_set_play_sw_wrap(void) {
    u32 uVar1;

    uVar1 = mwRna_set_play_sw();
    return uVar1;
}

/*
 * mwRnaGetTime_wrap  0x8c2629dc
 * only calls mwRnaGetTime
 */
u32 mwRnaGetTime_wrap(void) {
    u32 uVar1;

    uVar1 = mwRnaGetTime();
    return uVar1;
}

/*
 * mwRna_get_read_pos_wrap  0x8c2629e2
 * only calls mwRna_get_read_pos
 */
u32 mwRna_get_read_pos_wrap(void) {
    u32 uVar1;

    uVar1 = mwRna_get_read_pos();
    return uVar1;
}

/*
 * ret_const_7fffffff_2629e8  0x8c2629e8
 * called by: cri_sub_264a42
 */
u32 ret_const_7fffffff_2629e8(void) {
    return 0x7fffffff;
}

/*
 * thunk_FUN_8c2695e4  0x8c2629f4
 * called by: adx_server
 */
u32 thunk_FUN_8c2695e4(void) {
    u32 uVar1;

    uVar1 = mwRna_sub_2695e4();
    return uVar1;
}

/*
 * mwRnaSetNumChan_wrap  0x8c262a00
 * only calls mwRnaSetNumChan
 */
u32 mwRnaSetNumChan_wrap(void) {
    u32 uVar1;

    uVar1 = mwRnaSetNumChan();
    return uVar1;
}

/*
 * mwRnaSetSfreq_wrap  0x8c262a06
 * only calls mwRnaSetSfreq
 */
u32 mwRnaSetSfreq_wrap(void) {
    u32 uVar1;

    uVar1 = mwRnaSetSfreq();
    return uVar1;
}

/*
 * mwRnaSetOutVol_wrap  0x8c262a0c
 * only calls mwRnaSetOutVol
 */
u32 mwRnaSetOutVol_wrap(void) {
    u32 uVar1;

    uVar1 = mwRnaSetOutVol();
    return uVar1;
}

/*
 * mwRnaSetBitPerSmpl_wrap  0x8c262a18
 * only calls mwRnaSetBitPerSmpl
 */
u32 mwRnaSetBitPerSmpl_wrap(void) {
    u32 uVar1;

    uVar1 = mwRnaSetBitPerSmpl();
    return uVar1;
}

/*
 * mwRnaDiscardData_wrap  0x8c262a36
 * only calls mwRnaDiscardData
 */
u32 mwRnaDiscardData_wrap(void) {
    u32 uVar1;

    uVar1 = mwRnaDiscardData();
    return uVar1;
}

/*
 * noop_262a44  0x8c262a44
 * called by: cri_sub_2647f4
 */
u32 noop_262a44(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * cri_sub_262a4c  0x8c262a4c
 * area name: in the cri library code range
 * called by: cri_sub_2647f4
 */
u32 cri_sub_262a4c(u32 a0, u32 a1) {
    u32 auStack_8[2];

    mwRna_sub_269fc8(a0, a1, auStack_8);
    return auStack_8[0];
}

/*
 * cri_sub_262ac4  0x8c262ac4
 * area name: in the cri library code range
 * called by: cri_sub_262810, cri_sub_262814
 */
u32 cri_sub_262ac4(void) {
    u32 uVar1;

    cri_sub_25fb8c();
    uVar1 = memset(0x8c4b9348, 0, (int)0x4e0);
    return uVar1;
}

/*
 * memset_wrap_262ad8  0x8c262ad8
 * only calls memset
 * called by: cri_sub_2628fa
 */
u32 memset_wrap_262ad8(void) {
    u32 uVar1;

    uVar1 = memset(0x8c4b9348, 0, (int)0x4e0);
    return uVar1;
}

/*
 * cri_sub_262ae2  0x8c262ae2
 * area name: in the cri library code range
 * called by: cri_sub_262b04, ta_sub_262c50
 */
u32 cri_sub_262ae2(int a0) {
    u32 uVar1;

    uVar1 = 0x7fffffff;
    *(u32 *)(0x98 + a0) = 0;
    *(u32 *)(a0 + 0x2c) = 0;
    *(u32 *)(a0 + 0x30) = 0;
    *(u32 *)(a0 + 0x34) = 0;
    *(u32 *)(a0 + 0x38) = uVar1;
    *(u32 *)(a0 + 0x3c) = 0xffffffff;
    *(u32 *)(a0 + 0x40) = 0;
    *(u32 *)(a0 + 0x44) = 0;
    *(u8 *)(a0 + 3) = 0;
    return 0;
}

/*
 * cri_sub_262b04  0x8c262b04
 * area name: in the cri library code range
 * called by: cri_sub_263840
 */
u32 cri_sub_262b04(u32 a0, int a1, u32 *a2) {
    u8 *ar5_00;
    u8 *puVar1;
    u32 ar5_01;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    int a5;
    u32 uVar6;
    u32 ar4_00;
    u8 *ar6_00;

    iVar5 = (int)0x9c;
    uVar6 = 8;
    iVar4 = 0;
    ar4_00 = *a2;
    do {
        if (*(char *)(iVar4 * iVar5 + 0x8c4b9348) == '\0')
            break;
        iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    if (iVar4 != 8) {
        ar6_00 = (u8 *)(iVar4 * iVar5 + 0x8c4b9348);
        iVar4 = 0x8c4b9348;
        ar5_01 = get_field_1c_26b94e(ar4_00, iVar5, 8, 0x8c4b9348);
        uVar2 = get_field_20_26b952(ar4_00);
        uVar3 = get_field_24_26b956(ar4_00);
        iVar4 = (uVar2 >> 1) + (uVar3 >> 1);
        uVar6 = cri_sub_25fbd0(a1, ar5_01, uVar2 >> 1, iVar4);
        puVar1 = (&cri_sub_25fea8);
        ar5_00 = (&ta_sub_262d6c);
        *(u32 *)(ar6_00 + 4) = uVar6;
        (*(code *)puVar1)(uVar6, ar5_00, ar6_00, iVar4);
        if (*(int *)(ar6_00 + 4) != 0) {
            a5 = 0;
            *(u32 *)(ar6_00 + 8) = a0;
            ar6_00[2] = (char)a1;
            iVar5 = 0;
            if (0 < a1) {
                do {
                    a5 = a5 + 1;
                    *(u32 *)(ar6_00 + iVar5 + 0xc) = *(u32 *)(iVar5 + (int)a2);
                    iVar5 = iVar5 + 4;
                } while (a5 < a1);
            }
            ar6_00[1] = 0;
            cri_sub_262ae2(ar6_00);
            *(u32 *)(ar6_00 + 0x48) = 0;
            *(u32 *)(ar6_00 + 0x4c) = 0;
            *(u32 *)(ar6_00 + 0x50) = 0;
            *(u32 *)(ar6_00 + 0x54) = 0;
            *ar6_00 = 1;
            return ar6_00;
        }
    }
    return 0;
}

/*
 * ta_fifo_262c04  0x8c262c04
 * called by: cri_sub_2639fa
 */
u32 ta_fifo_262c04(int a0) {
    u32 in_r0;
    u32 uVar1;

    if (a0 != 0) {
        if (*(int *)(a0 + 4) != 0) {
            cri_sub_25fc5c(*(u32 *)(a0 + 4));
        }
        irq_disable_nested();
        memset(a0, 0, (int)0x9c);
        uVar1 = irq_restore_nested();
        return uVar1;
    }
    return in_r0;
}

/*
 * ta_fifo_262c08  0x8c262c08
 */
u32 ta_fifo_262c08(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 ain0) {
    u32 uVar1;
    u32 ar5_00;
    u32 ar6_00;
    int unaff_r14;
    u32 in_PR;

    if (unaff_r14 != 0) {
        if (*(int *)(unaff_r14 + 4) != 0) {
            a0 = *(u32 *)(unaff_r14 + 4);
            cri_sub_25fc5c(a0);
        }
        irq_disable_nested(a0, unused_a1, unused_a2, a3, in_PR);
        ar5_00 = 0;
        ar6_00 = 0x9c;
        uVar1 = memset(unaff_r14, 0, 0x9c);
        uVar1 = irq_restore_nested(unaff_r14, ar5_00, ar6_00, a3, uVar1);
        return uVar1;
    }
    return ain0;
}

/*
 * get_field_1_s8_262c38  0x8c262c38
 * called by: cri_sub_2647f4, cri_sub_264a42, cri_sub_264b14, cri_sub_264b1a, cri_sub_264c92, cri_sub_264e84,
 * cri_sub_264e88
 */
int get_field_1_s8_262c38(int a0, u32 a1) {
    return (int)*(char *)(a0 + 1);
}

/*
 * set_field_8_262c3c  0x8c262c3c
 * called by: cri_sub_263b34, cri_sub_263bfe
 */
u32 set_field_8_262c3c(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 8) = a1;
    return in_r0;
}

/*
 * set_field_38_262c4c  0x8c262c4c
 * called by: cri_sub_2647f4
 */
u32 set_field_38_262c4c(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x38) = a1;
    return in_r0;
}

/*
 * ta_sub_262c50  0x8c262c50
 * area name: sits between ta functions (same compilation unit)
 * called by: cri_sub_263b34, cri_sub_263bfe
 */
u32 ta_sub_262c50(int a0) {
    cri_sub_262ae2(a0);
    *(u8 *)(a0 + 1) = 1;
    return 1;
}

/*
 * ta_sub_262c66  0x8c262c66
 * area name: sits between ta functions (same compilation unit)
 * called by: cri_sub_263c64, cri_sub_264ba0
 */
u32 ta_sub_262c66(int a0) {
    cri_sub_25ff9c(*(u32 *)(a0 + 4));
    *(u8 *)(a0 + 1) = 0;
    return 0;
}

/*
 * ta_sub_262c80  0x8c262c80
 * area name: sits between ta functions (same compilation unit)
 * called by: cri_sub_26307e
 */
u32 ta_sub_262c80(int a0) {
    u8 *puVar1;
    int ar5_00;
    int iVar2;
    int iVar3;
    u32 ar5_01;
    u32 *a7;
    u8 *ar7_00;
    u32 uVar4;
    int *a4;
    u8 auStack_24[8];
    u32 uStack_1c;
    int iStack_18;

    a4 = *(int **)(a0 + 8);
    uVar4 = *(u32 *)(a0 + 4);
    a7 = &uStack_1c;
    (**(code **)(*a4 + 0x18))(a4, 1, (int)0x1000, a7);
    if (((iStack_18 < 0x10) ||
         (ar5_01 = uStack_1c, iVar3 = iStack_18, ar5_00 = cri_sub_25fdb2(uVar4, uStack_1c, iStack_18),
          puVar1 = (&get_field_a8_s16), ar5_00 == 0)) ||
        (iStack_18 < ar5_00)) {
        uVar4 = (**(code **)(*a4 + 0x1c))(a4, 1, &uStack_1c, a7);
    } else {
        *(int *)(0x98 + a0) = ar5_00;
        iVar2 = (*(code *)puVar1)(uVar4, ar5_01, iVar3, a7);
        if (iVar2 == 4) {
            *(u8 *)(a0 + 3) = 1;
        }
        iVar3 = get_field_a8_s16(uVar4);
        if (iVar3 == 2) {
            if (0x3f < iStack_18) {
                iStack_18 = 0x40;
            }
            memmove(a0 + 0x58, uStack_1c, iStack_18);
        }
        ar7_00 = auStack_24;
        span_take(&uStack_1c, ar5_00, &uStack_1c, ar7_00);
        (**(code **)(*a4 + 0x20))(a4, 0, &uStack_1c, ar7_00);
        (**(code **)(*a4 + 0x1c))(a4, 1, auStack_24, ar7_00);
        uVar4 = 2;
        *(u8 *)(a0 + 1) = 2;
    }
    return uVar4;
}

/*
 * ta_sub_262d6c  0x8c262d6c
 * area name: sits between ta functions (same compilation unit)
 * decompiler: Switch with 1 destination removed at 0x8c262e0c
 */
u32 ta_sub_262d6c(int a0, u32 *a1, u32 *a2, int *a3) {
    u8 *puVar1;
    int iVar2;
    u32 ar4_00;
    u32 uVar3;
    u32 *a5;
    u32 uVar4;
    u32 *a6;
    int *a7;
    u32 *a6_00;
    int *a4;
    int iVar5;

    puVar1 = (&get_field_e_s8);
    a6_00 = (u32 *)(int)0x4000;
    ar4_00 = *(u32 *)(a0 + 0xc);
    a5 = a1;
    a6 = a2;
    a7 = a3;
    for (iVar5 = 0; iVar2 = (*(code *)puVar1)(*(u32 *)(a0 + 4), a5, a6, a7), iVar5 < iVar2; iVar5 = iVar5 + 1) {
        a4 = *(int **)(iVar5 * 4 + a0 + 0xc);
        a5 = NULL;
        a7 = (int *)(iVar5 * 8 + a0 + 0x1c);
        a6 = a6_00;
        (**(code **)(*a4 + 0x18))(a4, 0, a6_00, a7);
    }
    iVar5 = get_field_1c_26b94e(ar4_00, a5, a6, a7);
    *a1 = (u32)(*(int *)(a0 + 0x1c) - iVar5) >> 1;
    uVar4 = *(u32 *)(a0 + 0x38);
    uVar3 = *(u32 *)(a0 + 0x20) >> 1;
    if ((int)uVar3 < (int)uVar4) {
        uVar4 = uVar3;
    }
    *a2 = uVar4;
    if (*(int *)(a0 + 0x3c) < 0) {
        *a3 = 0x1fffffff;
    } else {
        *a3 = *(int *)(a0 + 0x3c) - *(int *)(a0 + 0x40);
    }
    return *(u32 *)(*(int *)(a0 + 4) + 0x3c);
}

/*
 * cri_sub_262e10  0x8c262e10
 * area name: in the cri library code range
 * called by: cri_sub_26304a, cri_sub_26307e
 */
u32 cri_sub_262e10(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    u32 ar6_00;
    int a7;
    u32 uVar3;
    int *a4;

    uVar3 = *(u32 *)(a0 + 4);
    a4 = *(int **)(a0 + 8);
    if ((*(char *)(a0 + 3) == '\x01') && (iVar1 = (**(code **)(*a4 + 0x24))(a4, 1, a2, a3), iVar1 == 0)) {
        *(u8 *)(a0 + 1) = 3;
        return 3;
    }
    ar5_00 = 1;
    a7 = a0 + 0x14;
    ar6_00 = 0x7fffffff;
    (**(code **)(*a4 + 0x18))(a4, 1, 0x7fffffff, a7);
    iVar1 = get_field_a8_s16(uVar3);
    if ((((iVar1 == 0) && (1 < *(int *)(a0 + 0x18))) &&
         (((int)**(short **)(a0 + 0x14) >> 8 & 0xffU | (int)**(short **)(a0 + 0x14) << 8 & 0xff00 & 0xffff) ==
          0x8001)) ||
        (iVar1 = get_field_18_wrap(a0), iVar1 <= *(int *)(a0 + 0x34))) {
        *(u8 *)(a0 + 1) = 3;
    } else {
        iVar1 = get_field_10_of_field_4(a0);
        uVar2 = (**(code **)(**(int **)(a0 + 0xc) + 0x24))(*(int **)(a0 + 0xc), 0, ar6_00, a7);
        if (iVar1 <= (int)(uVar2 >> 1)) {
            cri_sub_25ff3c(uVar3, *(u32 *)(a0 + 0x14), *(u32 *)(a0 + 0x18));
            uVar3 = cri_sub_25ff8e(uVar3);
            return uVar3;
        }
    }
    /* WARNING: Could not recover jumptable at 0x8c262ed8. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*a4 + 0x1c))(a4, 1, a0 + 0x14);
    return uVar3;
}

/*
 * cri_sub_262f02  0x8c262f02
 * area name: in the cri library code range
 * called by: cri_sub_26304a, cri_sub_26307e
 */
u32 cri_sub_262f02(int a0) {
    u8 *puVar1;
    int iVar2;
    int ar5_00;
    int iVar3;
    int iVar4;
    u32 ar5_01;
    u8 *a6;
    u8 *ar7_00;
    u32 uVar5;
    int *piVar6;
    u8 auStack_30[8];
    u32 uStack_28;
    u8 *puStack_24;

    piVar6 = *(int **)(a0 + 8);
    uVar5 = *(u32 *)(a0 + 4);
    iVar2 = get_field_18_25ff16(uVar5);
    ar5_00 = get_field_a000a4_25fff0(uVar5);
    iVar3 = get_field_a0_25fff6(uVar5);
    puVar1 = (&span_take);
    iVar2 = iVar2 - *(int *)(a0 + 0x34);
    if (iVar3 < iVar2) {
        iVar2 = iVar3;
    }
    ar7_00 = auStack_30;
    span_take(a0 + 0x14, ar5_00, &uStack_28, ar7_00);
    (**(code **)(*piVar6 + 0x20))(piVar6, 0, &uStack_28, ar7_00);
    ar5_01 = 1;
    a6 = auStack_30;
    (**(code **)(*piVar6 + 0x1c))(piVar6, 1, a6, ar7_00);
    for (iVar3 = 0; iVar4 = get_field_e_s8(*(u32 *)(a0 + 4)), iVar3 < iVar4; iVar3 = iVar3 + 1) {
        ar7_00 = auStack_30;
        (*(code *)puVar1)(iVar3 * 8 + a0 + 0x1c, iVar2 << 1, &uStack_28, ar7_00);
        if (*(int *)(a0 + 0x50) != 0) {
            ar7_00 = puStack_24;
            (**(code **)(a0 + 0x50))(*(u32 *)(a0 + 0x54), iVar3, uStack_28, puStack_24);
        }
        piVar6 = *(int **)(iVar3 * 4 + a0 + 0xc);
        (**(code **)(*piVar6 + 0x20))(piVar6, 1, &uStack_28, ar7_00);
        piVar6 = *(int **)(a0 + 0xc + iVar3 * 4);
        ar5_01 = 0;
        a6 = auStack_30;
        (**(code **)(*piVar6 + 0x1c))(piVar6, 0, a6, ar7_00);
    }
    *(int *)(a0 + 0x2c) = *(int *)(a0 + 0x2c) + iVar2;
    *(int *)(a0 + 0x30) = *(int *)(a0 + 0x30) + ar5_00;
    *(int *)(a0 + 0x34) = *(int *)(a0 + 0x34) + iVar2;
    *(int *)(a0 + 0x40) = *(int *)(a0 + 0x40) + iVar2;
    *(int *)(a0 + 0x44) = *(int *)(a0 + 0x44) + ar5_00;
    if (((-1 < *(int *)(a0 + 0x3c)) && (*(int *)(a0 + 0x3c) <= *(int *)(a0 + 0x40))) && (*(int *)(a0 + 0x48) != 0)) {
        (**(code **)(a0 + 0x48))(*(u32 *)(a0 + 0x4c), ar5_01, a6, ar7_00);
    }
    uVar5 = cri_sub_25ffb6(uVar5);
    return uVar5;
}

/*
 * cri_sub_26304a  0x8c26304a
 * area name: in the cri library code range
 */
u32 cri_sub_26304a(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int unaff_r13;
    u32 uVar2;

    uVar2 = *(u32 *)(unaff_r13 + 4);
    iVar1 = get_field_4_25ff38(uVar2);
    if (iVar1 == 0) {
        cri_sub_262e10(unaff_r13, unused_a1, a2, a3);
    }
    cri_sub_2602f4(uVar2);
    iVar1 = get_field_4_25ff38(uVar2);
    if (iVar1 == 3) {
        uVar2 = cri_sub_262f02(unaff_r13);
        return uVar2;
    }
    return iVar1;
}

/*
 * cri_sub_26307e  0x8c26307e
 * area name: in the cri library code range
 * called by: cri_sub_2630cc, cri_sub_2630d6
 */
u32 cri_sub_26307e(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    if (*(char *)(a0 + 1) != '\x02') {
        if (*(char *)(a0 + 1) == 1) {
            uVar2 = ta_sub_262c80(a0);
            return uVar2;
        }
        return (int)*(char *)(a0 + 1);
    }
    uVar2 = *(u32 *)(a0 + 4);
    iVar1 = get_field_4_25ff38(uVar2);
    if (iVar1 == 0) {
        cri_sub_262e10(a0, unused_a1, a2, a3);
    }
    cri_sub_2602f4(uVar2);
    iVar1 = get_field_4_25ff38(uVar2);
    if (iVar1 == 3) {
        uVar2 = cri_sub_262f02(a0);
        return uVar2;
    }
    return iVar1;
}

/*
 * cri_sub_2630cc  0x8c2630cc
 * area name: in the cri library code range
 * called by: adx_server
 */
int cri_sub_2630cc(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    char *pcVar2;
    int iVar3;
    char *ar4_00;

    iVar3 = (int)0x9c;
    pcVar2 = 0x8c4b9348 + 0x4e0;
    ar4_00 = 0x8c4b9348;
    do {
        iVar1 = (int)*ar4_00;
        if (iVar1 == 1) {
            iVar1 = cri_sub_26307e(ar4_00, unused_a1, a2, a3);
        }
        ar4_00 = ar4_00 + iVar3;
    } while (ar4_00 < pcVar2);
    return iVar1;
}

/*
 * cri_sub_2630d6  0x8c2630d6
 * area name: in the cri library code range
 */
int cri_sub_2630d6(char *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int unaff_r12;
    char *pcVar2;
    int iVar3;

    iVar3 = (int)0x9c;
    pcVar2 = a0 + unaff_r12;
    do {
        iVar1 = (int)*a0;
        if (iVar1 == 1) {
            iVar1 = cri_sub_26307e(a0, unused_a1, a2, a3);
        }
        a0 = a0 + iVar3;
    } while (a0 < pcVar2);
    return iVar1;
}

/*
 * get_field_2c_2630fe  0x8c2630fe
 * called by: cri_sub_264c92, cri_sub_264e84, cri_sub_264e88
 */
u32 get_field_2c_2630fe(int a0) {
    return *(u32 *)(a0 + 0x2c);
}

/*
 * set_field_34_263102  0x8c263102
 * called by: ADXT_sub_264614
 */
u32 set_field_34_263102(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x34) = a1;
    return in_r0;
}

/*
 * set_fields_48_4c  0x8c263114
 * stores +0x48, +0x4c
 * called by: cri_sub_2647f4
 */
u32 set_fields_48_4c(int a0, u32 a1, u32 a2) {
    *(u32 *)(a0 + 0x48) = a1;
    *(u32 *)(a0 + 0x4c) = a2;
    return 0x4c;
}

/*
 * set_field_3c_26311e  0x8c26311e
 * called by: ADXT_sub_264614, ADXT_sub_2646fe, cri_sub_2647f4
 */
u32 set_field_3c_26311e(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x3c) = a1;
    return in_r0;
}

/*
 * set_field_40_263126  0x8c263126
 * called by: ADXT_sub_264614, cri_sub_2647f4
 */
u32 set_field_40_263126(int a0, u32 a1) {
    *(u32 *)(a0 + 0x40) = a1;
    return 0x40;
}

/*
 * set_field_44_263132  0x8c263132
 * called by: ADXT_sub_264614, cri_sub_2647f4
 */
u32 set_field_44_263132(int a0, u32 a1) {
    *(u32 *)(a0 + 0x44) = a1;
    return 0x44;
}

/*
 * get_field_a8_s16_wrap  0x8c26313e
 * only calls get_field_a8_s16
 * called by: cri_sub_2647f4
 */
u32 get_field_a8_s16_wrap(int a0) {
    u32 uVar1;

    uVar1 = get_field_a8_s16(*(u32 *)(a0 + 4));
    return uVar1;
}

/*
 * get_field_14_of_field_4  0x8c26314a
 * returns +0x14 of the object at +0x4
 * called by: cri_sub_263cd8, cri_sub_263ce4, cri_sub_263dd8, cri_sub_2647f4
 * decompiler: Switch with 1 destination removed at 0x8c263152
 */
u32 get_field_14_of_field_4(int a0) {
    return *(u32 *)(*(int *)(a0 + 4) + 0x14);
}

/*
 * get_field_e_s8_wrap  0x8c263156
 * only calls get_field_e_s8
 * called by: cri_sub_263df6, cri_sub_264784, cri_sub_264788, cri_sub_2647f4, cri_sub_264b14, cri_sub_264b1a
 */
u32 get_field_e_s8_wrap(int a0) {
    u32 uVar1;

    uVar1 = get_field_e_s8(*(u32 *)(a0 + 4));
    return uVar1;
}

/*
 * cri_sub_263162  0x8c263162
 * area name: in the cri library code range
 * called by: cri_sub_263cd8, cri_sub_263ce4, cri_sub_2647f4
 */
u32 cri_sub_263162(int a0) {
    u32 uVar1;

    uVar1 = cri_sub_25fed2(*(u32 *)(a0 + 4));
    return uVar1;
}

/*
 * get_field_10_of_field_4  0x8c26316e
 * returns +0x10 of the object at +0x4
 * called by: cri_sub_262e10, cri_sub_2647f4, cri_sub_264a42
 * decompiler: Switch with 1 destination removed at 0x8c263176
 */
u32 get_field_10_of_field_4(int a0) {
    return *(u32 *)(*(int *)(a0 + 4) + 0x10);
}

/*
 * get_field_18_wrap  0x8c263186
 * only calls get_field_18_25ff16
 * called by: cri_sub_262e10, cri_sub_263cd8, cri_sub_263ce4, cri_sub_2647f4
 */
u32 get_field_18_wrap(int a0) {
    u32 uVar1;

    uVar1 = get_field_18_25ff16(*(u32 *)(a0 + 4));
    return uVar1;
}

/*
 * get_field_24_s16_wrap  0x8c26319e
 * only calls get_field_24_s16
 * called by: cri_sub_2647f4
 */
u32 get_field_24_s16_wrap(int a0) {
    u32 uVar1;

    uVar1 = get_field_24_s16(*(u32 *)(a0 + 4));
    return uVar1;
}

/*
 * get_field_28_of_field_4  0x8c2631b6
 * returns +0x28 of the object at +0x4
 * called by: ADXT_sub_264614
 * decompiler: Switch with 1 destination removed at 0x8c2631be
 */
u32 get_field_28_of_field_4(int a0) {
    return *(u32 *)(*(int *)(a0 + 4) + 0x28);
}

/*
 * get_field_2c_of_field_4  0x8c2631c2
 * returns +0x2c of the object at +0x4
 * called by: ADXT_sub_264614, ADXT_sub_2646fe
 * decompiler: Switch with 1 destination removed at 0x8c2631ca
 */
u32 get_field_2c_of_field_4(int a0) {
    return *(u32 *)(*(int *)(a0 + 4) + 0x2c);
}

/*
 * get_field_30_of_field_4  0x8c2631ce
 * returns +0x30 of the object at +0x4
 * called by: ADXT_sub_264614, cri_sub_2647f4
 * decompiler: Switch with 1 destination removed at 0x8c2631d6
 */
u32 get_field_30_of_field_4(int a0) {
    return *(u32 *)(*(int *)(a0 + 4) + 0x30);
}

/*
 * get_field_34_of_field_4  0x8c2631da
 * returns +0x34 of the object at +0x4
 * called by: ADXT_sub_264614, cri_sub_2647f4
 * decompiler: Switch with 1 destination removed at 0x8c2631e2
 */
u32 get_field_34_of_field_4(int a0) {
    return *(u32 *)(*(int *)(a0 + 4) + 0x34);
}

/*
 * field_ptr_58  0x8c2631f8
 * returns the address of the member at +0x58
 * called by: cri_sub_2647f4
 */
int field_ptr_58(int a0) {
    return a0 + 0x58;
}

/*
 * memset_wrap_263244  0x8c263244
 * only calls memset
 * called by: cri_sub_262810, cri_sub_262814
 */
u32 memset_wrap_263244(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    memset(0x8c4b9828, 0, (int)0xc80);
    return 1;
}

/*
 * noop_26325a  0x8c26325a
 * called by: cri_sub_2628fa
 */
u32 noop_26325a(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * cri_sub_26325e  0x8c26325e
 * area name: in the cri library code range
 * called by: ADXSTM_OpenFname, ADXSTM_OpenFnameRange, ADXSTM_OpenRange
 */
u8 *cri_sub_26325e(u32 a0, u32 a1, u32 a2, int *a3) {
    u8 *puVar1;
    u32 uVar2;
    int iVar3;

    uVar2 = 0x7fffffff;
    iVar3 = 0;
    do {
        if (*(char *)(iVar3 * 100 + 0x8c4b9828) == '\0')
            break;
        iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    if (iVar3 == 0x20) {
        puVar1 = NULL;
    } else {
        puVar1 = (u8 *)(iVar3 * 100 + 0x8c4b9828);
        puVar1[1] = 1;
        puVar1[2] = 0;
        *(int **)(puVar1 + 4) = a3;
        *(u32 *)(puVar1 + 8) = a0;
        *(u32 *)(puVar1 + 0xc) = 0;
        *(u32 *)(puVar1 + 0x10) = a1;
        *(u32 *)(puVar1 + 0x14) = a2;
        *(u32 *)(puVar1 + 0x2c) = uVar2;
        iVar3 = *(int *)(puVar1 + 0x14) + (int)0x7ff;
        if (iVar3 < 0) {
            iVar3 = iVar3 + 0x7ff;
        }
        *(int *)(puVar1 + 0x30) = iVar3 >> 0xb;
        *puVar1 = 1;
        uVar2 = (**(code **)(*a3 + 0x24))(a3, 0);
        *(u32 *)(puVar1 + 0x18) = uVar2;
        *(u32 *)(puVar1 + 0x1c) = uVar2;
    }
    return puVar1;
}

/*
 * cri_sub_26326e  0x8c26326e
 * area name: in the cri library code range
 */
u8 *cri_sub_26326e(u32 a0, u32 a1, u32 a2) {
    int in_r0;
    u8 *puVar1;
    u32 uVar2;
    int iVar3;
    int unaff_r10;
    int *unaff_r11;
    int unaff_r14;

    uVar2 = 0x7fffffff;
    iVar3 = unaff_r10;
    do {
        if (*(char *)(iVar3 * unaff_r14 + 0x8c4b9828) == '\0')
            break;
        iVar3 = iVar3 + 1;
    } while (iVar3 < in_r0);
    if (iVar3 == 0x20) {
        puVar1 = NULL;
    } else {
        puVar1 = (u8 *)(iVar3 * unaff_r14 + 0x8c4b9828);
        puVar1[1] = 1;
        puVar1[2] = (char)unaff_r10;
        *(int **)(puVar1 + 4) = unaff_r11;
        *(u32 *)(puVar1 + 8) = a0;
        *(int *)(puVar1 + 0xc) = unaff_r10;
        *(u32 *)(puVar1 + 0x10) = a1;
        *(u32 *)(puVar1 + 0x14) = a2;
        *(u32 *)(puVar1 + 0x2c) = uVar2;
        iVar3 = *(int *)(puVar1 + 0x14) + (int)0x7ff;
        if (iVar3 < 0) {
            iVar3 = iVar3 + 0x7ff;
        }
        *(int *)(puVar1 + 0x30) = iVar3 >> 0xb;
        *puVar1 = 1;
        uVar2 = (**(code **)(*unaff_r11 + 0x24))(unaff_r11, 0, a2, 1);
        *(u32 *)(puVar1 + 0x18) = uVar2;
        *(u32 *)(puVar1 + 0x1c) = uVar2;
    }
    return puVar1;
}

/*
 * memset_wrap_2632e2  0x8c2632e2
 * only calls memset
 * called by: ADXSTM_sub_263446, ADXSTM_sub_26344a
 */
u32 memset_wrap_2632e2(void) {
    u32 uVar1;

    uVar1 = memset(0, 100);
    return uVar1;
}

/*
 * ADXSTM_OpenFname  0x8c2632ea
 * named from the library error message it prints (ADXSTM_OpenFname)
 * called by: ADXT_StartFname
 * strings: "E8101210: can\'t open \'%s\' (ADXSTM_OpenFname)"; "E8101211: can\'t GetFileSize (ADXSTM_OpenFname)"
 */
u32 ADXSTM_OpenFname(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 ar4_00;
    int ar4_01;
    u32 ar5_00;
    u8 *ar5_01;
    u32 in_stack_ffffffec;

    ar5_01 = &stack0xffffffec;
    ar5_00 = 0;
    ar4_00 = a0;
    iVar1 = gdfs_open_like(a0, 0, a2, a3);
    if (iVar1 == 0) {
        lib_error_printf(ar4_00, ar5_00, a2, a3, "E8101210: can\'t open \'%s\' (ADXSTM_OpenFname)", a0);
    } else {
        ar4_01 = iVar1;
        iVar2 = gdfs_get_size_like(iVar1, &stack0xffffffec);
        if (iVar2 != 0) {
            iVar1 = cri_sub_26325e(iVar1, 0, in_stack_ffffffec, a1);
            if (iVar1 == 0) {
                return 0;
            }
            strncpy(iVar1 + 0x40, a0, 0x20);
            return iVar1;
        }
        lib_error_printf(ar4_01, ar5_01, a2, a3, "E8101211: can\'t GetFileSize (ADXSTM_OpenFname)", in_stack_ffffffec);
        gdfs_close_like(iVar1, ar5_01, a2, a3);
    }
    return 0;
}

/*
 * ADXSTM_OpenRange  0x8c263388
 * named from the library error message it prints (ADXSTM_OpenRange)
 * called by: ADXF_sub_262208
 * strings: "E8101212: can't open fad=%d, nsct=%d (ADXSTM_OpenRange)"; "OpenRange"
 */
u32 ADXSTM_OpenRange(u32 a0, int a1, u32 a2, u32 a3) {
    int a4;
    int iVar1;
    u32 ar6_00;

    iVar1 = a1;
    ar6_00 = a2;
    a4 = shinobi_sub_1f39ac(a0, a1, a2, a3);
    if (a4 == 0) {
        lib_error_printf(0, iVar1, ar6_00, a3, "E8101212: can't open fad=%d, nsct=%d (ADXSTM_OpenRange)", a0);
        return 0;
    }
    iVar1 = cri_sub_26325e(a4, 0, a1 << 0xb, a2);
    if (iVar1 != 0) {
        strncpy(iVar1 + 0x40, "OpenRange", 0x20);
    }
    return iVar1;
}

/*
 * ADXSTM_OpenFnameRange  0x8c2633e6
 * named from the library error message it prints (ADXSTM_OpenFnameRange)
 * strings: "E8101213: can't open '%s'(ADXSTM_OpenFnameRange)"
 */
int ADXSTM_OpenFnameRange(u32 a0, u32 a1, int a2, u32 a3) {
    int a4;
    int iVar1;
    u32 ar5_00;
    u32 uVar2;

    ar5_00 = 0;
    iVar1 = a2;
    uVar2 = a3;
    a4 = gdfs_open_like(a0, 0, a2, a3);
    if (a4 == 0) {
        lib_error_printf(0, ar5_00, iVar1, uVar2, "E8101213: can't open '%s'(ADXSTM_OpenFnameRange)", a0);
        iVar1 = 0;
    } else {
        iVar1 = cri_sub_26325e(a4, a1, a2 << 0xb, a3);
        if (iVar1 != 0) {
            uVar2 = 0x20;
            strncpy(iVar1 + 0x40, a0, 0x20);
            ADXSTM_sub_263534(iVar1, 0);
        }
    }
    return iVar1;
}

/*
 * ADXSTM_sub_263446  0x8c263446
 * area name: sits between ADXSTM functions (same compilation unit)
 * called by: ADXF_sub_26211c, cri_sub_2639fa, cri_sub_263c64
 */
u32 ADXSTM_sub_263446(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;

    if (a0 != 0) {
        ADXSTM_stop_read(a0, a1, a2, a3);
        if (*(int *)(a0 + 8) != 0) {
            gdfs_close_like(*(u32 *)(a0 + 8));
        }
        uVar1 = memset_wrap_2632e2();
        return uVar1;
    }
    return in_r0;
}

/*
 * ADXSTM_sub_26344a  0x8c26344a
 * area name: sits between ADXSTM functions (same compilation unit)
 */
u32 ADXSTM_sub_26344a(u32 a0, u32 a1, u32 a2, u32 a3, u32 ain0) {
    u32 uVar1;
    int unaff_r14;

    if (unaff_r14 != 0) {
        ADXSTM_stop_read(a0, a1, a2, a3);
        if (*(int *)(unaff_r14 + 8) != 0) {
            gdfs_close_like(*(u32 *)(unaff_r14 + 8), a1, a2, a3);
        }
        uVar1 = memset_wrap_2632e2();
        return uVar1;
    }
    return ain0;
}

/*
 * ADXSTM_rewind  0x8c26346e
 * resets the stream read state (status 2, or 3 when there is no file)
 * called by: ADXF_sub_262208, cri_sub_263bc0, cri_sub_263bc8, cri_sub_264ba0
 */
u32 ADXSTM_rewind(int a0) {
    u32 uVar1;

    if (*(int *)(a0 + 0x14) == 0) {
        *(u32 *)(a0 + 0x34) = 0;
        *(u32 *)(a0 + 0xc) = 0;
        *(u8 *)(a0 + 1) = 3;
    } else {
        *(u8 *)(a0 + 1) = 2;
        *(u32 *)(a0 + 0x34) = 0;
        uVar1 = ADXSTM_get_read_pos(a0, 0);
        *(u32 *)(a0 + 0xc) = uVar1;
    }
    return 1;
}

/*
 * ADXSTM_sub_263472  0x8c263472
 * area name: sits between ADXSTM functions (same compilation unit)
 */
u32 ADXSTM_sub_263472(u32 a0) {
    u32 uVar1;
    int unaff_r14;

    if (*(int *)(unaff_r14 + 0x14) == 0) {
        *(u32 *)(unaff_r14 + 0x34) = 0;
        *(u32 *)(unaff_r14 + 0xc) = 0;
        *(u8 *)(unaff_r14 + 1) = 3;
    } else {
        *(u8 *)(unaff_r14 + 1) = 2;
        *(u32 *)(unaff_r14 + 0x34) = 0;
        uVar1 = ADXSTM_get_read_pos(a0, 0);
        *(u32 *)(unaff_r14 + 0xc) = uVar1;
    }
    return 1;
}

/*
 * ADXSTM_stop_read  0x8c263498
 * aborts the stream's file read (timing it into 0x8c278480) and marks the stream stopped
 * called by: ADXF_Stop, ADXSTM_sub_263446, ADXSTM_sub_26344a, cri_sub_263c64, cri_sub_264ba0
 */
u32 ADXSTM_stop_read(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;

    if ((*(char *)(a0 + 2) == '\x01') && (*(int *)(a0 + 8) != 0)) {
        uVar1 = sh4_tmu_1f88e6(a0);
        uVar2 = *(u32 *)(a0 + 8);
        gdfs_sub_1f367a(uVar2, a1, a2, a3);
        uVar2 = sh4_tmu_1f88e6(uVar2);
        uVar1 = int_diff(uVar1, uVar2);
        *(u32 *)(&DATA_8c278480) = uVar1;
        *(u8 *)(a0 + 2) = 0;
    }
    *(u8 *)(a0 + 1) = 1;
    return 1;
}

/*
 * ADXSTM_get_read_pos  0x8c2634dc
 * read position of the stream's file (+8) relative to its start (+0x10); 0 without a file
 * called by: ADXSTM_rewind, ADXSTM_sub_263472, ADXSTM_sub_263534, ADXSTM_sub_2635a4, ADXSTM_sub_263768
 */
int ADXSTM_get_read_pos(int a0, u32 a1) {
    int iVar1;

    if (*(int *)(a0 + 8) != 0) {
        iVar1 = gdfs_sub_1f316e(*(u32 *)(a0 + 8));
        return iVar1 - *(int *)(a0 + 0x10);
    }
    return 0;
}

/*
 * ADXSTM_sub_2634e0  0x8c2634e0
 * area name: sits between ADXSTM functions (same compilation unit)
 */
int ADXSTM_sub_2634e0(void) {
    int iVar1;
    int unaff_r14;

    if (*(int *)(unaff_r14 + 8) != 0) {
        iVar1 = gdfs_sub_1f316e(*(u32 *)(unaff_r14 + 8));
        return iVar1 - *(int *)(unaff_r14 + 0x10);
    }
    return 0;
}

/*
 * ADXSTM_sub_263534  0x8c263534
 * area name: sits between ADXSTM functions (same compilation unit)
 * called by: ADXSTM_OpenFnameRange, ADXT_sub_2646fe, cri_sub_264ba0
 */
u32 ADXSTM_sub_263534(int a0, int a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = *(int *)(a0 + 0x14) + (int)0x7ff;
    if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7ff;
    }
    iVar1 = iVar1 >> 0xb;
    if (a1 <= iVar1) {
        iVar1 = a1;
    }
    uVar2 = 0;
    iVar1 = *(int *)(a0 + 0x10) + iVar1;
    gdfs_sub_1f3122(*(u32 *)(a0 + 8), iVar1, 0);
    uVar2 = ADXSTM_get_read_pos(a0, iVar1);
    return uVar2;
}

/*
 * set_fields_38_3c  0x8c263574
 * stores +0x38, +0x3c
 * called by: cri_sub_2647f4
 */
u32 set_fields_38_3c(int a0, u32 a1, u32 a2) {
    u32 in_r0;

    *(u32 *)(a0 + 0x38) = a1;
    *(u32 *)(a0 + 0x3c) = a2;
    return in_r0;
}

/*
 * ADXSTM_set_sector_count  0x8c26357a
 * +0x30 = a1, or the file size (+0x14) in 2 KB sectors when a1 is negative
 * called by: ADXT_sub_2646fe, cri_sub_263bc0, cri_sub_263bc8, cri_sub_2647f4
 */
u32 ADXSTM_set_sector_count(int a0, int a1) {
    u32 in_r0;
    int iVar1;

    if (a1 < 0) {
        iVar1 = *(int *)(a0 + 0x14) + (int)0x7ff;
        if (iVar1 < 0) {
            iVar1 = iVar1 + 0x7ff;
        }
        *(int *)(a0 + 0x30) = iVar1 >> 0xb;
    } else {
        *(int *)(a0 + 0x30) = a1;
    }
    return in_r0;
}

/*
 * ADXSTM_sub_26359a  0x8c26359a
 * area name: sits between ADXSTM functions (same compilation unit)
 * called by: ADXSTM_sub_2635a4
 */
u32 ADXSTM_sub_26359a(void) {
    u32 in_r0;

    *(int *)(&DATA_8c278484) = *(int *)(&DATA_8c278484) + 1;
    return in_r0;
}

/*
 * ADXSTM_sub_2635a4  0x8c2635a4
 * name hint from a string it uses: E8101214 GDFS error adxstmf ; area name: sits between ADXSTM functions (same
 * compilation unit) called by: ADXSTM_sub_263702 strings: "E8101214: GDFS error (adxstmf_stat_exec)\n"
 */
int ADXSTM_sub_2635a4(int a0, int a1, u8 *a2, u8 *a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    u32 a6;
    int iVar6;
    int *a4;
    u32 in_stack_ffffffdc;
    u8 auStack_20[8];
    u8 auStack_18[12];
    u32 uStack_c;

    uStack_c = 1;
    a4 = *(int **)(a0 + 4);
    iVar1 = a0;
    if (*(char *)(a0 + 2) == '\x01') {
        iVar1 = gdfs_get_stat_like(*(u32 *)(a0 + 8));
        if (iVar1 == 1) {
            iVar6 = *(int *)(a0 + 0x20) * 0x800;
            a3 = auStack_20;
            span_take(a0 + 0x24, iVar6, auStack_18, a3);
            (**(code **)(*a4 + 0x20))(a4, 1, auStack_18, a3);
            uVar5 = 0;
            a2 = auStack_20;
            (**(code **)(*a4 + 0x1c))(a4, 0, a2, a3);
            iVar1 = ADXSTM_get_read_pos(a0, uVar5);
            if ((iVar1 == *(int *)(a0 + 0x30)) && (*(int *)(a0 + 0x38) != 0)) {
                (**(code **)(a0 + 0x38))(*(u32 *)(a0 + 0x3c), uVar5, a2, a3);
            }
            *(int *)(a0 + 0x34) = *(int *)(a0 + 0x34) + iVar6;
            *(u8 *)(a0 + 2) = 0;
            iVar1 = ADXSTM_get_read_pos(a0, uVar5);
            iVar6 = *(int *)(a0 + 0x14) + 0x7ff;
            if (iVar6 < 0) {
                iVar6 = *(int *)(a0 + 0x14) + 0xffe;
            }
            a1 = iVar6 >> 0xb;
            if (a1 <= iVar1) {
                *(u8 *)(a0 + 1) = 3;
            }
        } else if (iVar1 == 5) {
            lib_error_printf(5, a1, a2, a3, "E8101214: GDFS error (adxstmf_stat_exec)\n", in_stack_ffffffdc);
            *(u8 *)(a0 + 1) = 4;
            *(u8 *)(a0 + 2) = 0;
        }
    }
    iVar6 = (int)*(char *)(a0 + 2);
    if (iVar6 == 0) {
        if ((a4 == NULL) || (*a4 == 0)) {
            iVar6 = ADXSTM_sub_26359a();
        } else {
            iVar6 = (**(code **)(*a4 + 0x24))(a4, 1, a2, a3);
            if (iVar6 < *(int *)(a0 + 0x1c)) {
                a6 = *(u32 *)(a0 + 0x18);
                uVar5 = 0;
                iVar1 = a0 + 0x24;
                (**(code **)(*a4 + 0x18))(a4, 0, a6, iVar1);
                iVar6 = *(int *)(a0 + 0x28);
                if (iVar6 < 0) {
                    iVar6 = iVar6 + 0x7ff;
                }
                iVar3 = *(int *)(a0 + 0x30);
                iVar2 = ADXSTM_get_read_pos(a0, uVar5);
                iVar4 = iVar3 - iVar2;
                if (iVar6 >> 0xb < iVar3 - iVar2) {
                    iVar4 = iVar6 >> 0xb;
                }
                iVar6 = *(int *)(a0 + 0x2c);
                if (iVar4 < *(int *)(a0 + 0x2c)) {
                    iVar6 = iVar4;
                }
                if (iVar6 != 0) {
                    iVar6 = gdfs_sub_1f332c(*(u32 *)(a0 + 8), iVar6, *(u32 *)(a0 + 0x24));
                    *(int *)(a0 + 0x20) = iVar6;
                    if (0 < iVar6) {
                        *(u8 *)(a0 + 2) = 1;
                        return 1;
                    }
                }
                iVar6 = (**(code **)(*a4 + 0x1c))(a4, 0, a0 + 0x24, iVar1);
            }
        }
    }
    return iVar6;
}

/*
 * ADXSTM_sub_263702  0x8c263702
 * area name: sits between ADXSTM functions (same compilation unit)
 * called by: ADXSTM_sub_26371e, ADXSTM_sub_263726
 */
u32 ADXSTM_sub_263702(int a0, u32 a1, u32 a2, u32 a3) {
    int ain0;
    u32 uVar1;
    int a4;

    a4 = a0;
    irq_disable_nested(a0, a1, a2, a3, a0);
    ain0 = (int)*(char *)(a4 + 1);
    if (ain0 == 2) {
        ain0 = ADXSTM_sub_2635a4(a4, a1, a2, a3);
        a0 = a4;
    }
    uVar1 = irq_restore_nested(a0, a1, a2, a3, ain0);
    return uVar1;
}

/*
 * ADXSTM_sub_26371e  0x8c26371e
 * area name: sits between ADXSTM functions (same compilation unit)
 * called by: adx_server, cri_sub_261ae2
 */
int ADXSTM_sub_26371e(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    char *pcVar2;
    char *ar4_00;

    pcVar2 = 0x8c4b9828 + 0xc80;
    ar4_00 = 0x8c4b9828;
    do {
        iVar1 = (int)*ar4_00;
        if (iVar1 == 1) {
            iVar1 = ADXSTM_sub_263702(ar4_00, a1, a2, a3);
        }
        ar4_00 = ar4_00 + 100;
    } while (ar4_00 < pcVar2);
    return iVar1;
}

/*
 * ADXSTM_sub_263726  0x8c263726
 * area name: sits between ADXSTM functions (same compilation unit)
 */
int ADXSTM_sub_263726(char *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int unaff_r13;
    char *pcVar2;

    pcVar2 = a0 + unaff_r13;
    do {
        iVar1 = (int)*a0;
        if (iVar1 == 1) {
            iVar1 = ADXSTM_sub_263702(a0, a1, a2, a3);
        }
        a0 = a0 + 100;
    } while (a0 < pcVar2);
    return iVar1;
}

/*
 * get_field_1_s8_263746  0x8c263746
 * called by: ADXF_sub_2624a0, cri_sub_264c92, cri_sub_264e84, cri_sub_264e88
 */
int get_field_1_s8_263746(int a0) {
    return (int)*(char *)(a0 + 1);
}

/*
 * ADXSTM_sub_263768  0x8c263768
 * area name: sits between ADXSTM functions (same compilation unit)
 * called by: ADXF_Stop, ADXF_sub_2624a0
 */
u32 ADXSTM_sub_263768(int a0, int *a1) {
    int iVar1;

    iVar1 = ADXSTM_get_read_pos(a0, a1);
    *a1 = iVar1 - *(int *)(a0 + 0xc);
    return 1;
}

/*
 * set_fields_1c_18  0x8c263798
 * stores +0x1c, +0x18
 * called by: cri_sub_263bc0
 */
u32 set_fields_1c_18(int a0, u32 a1, u32 a2) {
    *(u32 *)(a0 + 0x1c) = a1;
    *(u32 *)(a0 + 0x18) = a2;
    return 1;
}

/*
 * cri_sub_2637ae  0x8c2637ae
 * area name: in the cri library code range
 */
u32 cri_sub_2637ae(int a0, u32 *a1) {
    u32 uVar1;

    uVar1 = gdfs_get_stat_like(*(u32 *)(a0 + 8));
    *a1 = uVar1;
    return uVar1;
}

/*
 * cri_sub_2637ca  0x8c2637ca
 * area name: in the cri library code range
 * called by: ADXF_LoadPartition, ADXF_sub_261d46, ADXF_sub_261f7a
 */
u32 cri_sub_2637ca(u32 a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 auStack_10[4];

    uVar1 = gdfs_sub_1f3968(a0, auStack_10, a2, a3);
    *a1 = auStack_10[0];
    return uVar1;
}

/*
 * cri_sub_2637e8  0x8c2637e8
 * area name: in the cri library code range
 * called by: ADXF_sub_261f7a
 */
u32 cri_sub_2637e8(u32 a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_10[4];
    int iStack_c;

    uVar1 = gdfs_sub_1f3968(a0, auStack_10, a2, a3);
    iStack_c = iStack_c + 0x7ff;
    if (iStack_c < 0) {
        iStack_c = iStack_c + 0x7ff;
    }
    *a1 = iStack_c >> 0xb;
    return uVar1;
}

/*
 * cri_sub_263816  0x8c263816
 * area name: in the cri library code range
 * called by: ADXF_sub_261f7a
 */
u32 cri_sub_263816(u32 a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_10[4];
    u32 uStack_c;

    uVar1 = gdfs_sub_1f3968(a0, auStack_10, a2, a3);
    *a1 = uStack_c;
    return uVar1;
}

/*
 * cri_sub_263840  0x8c263840
 * area name: in the cri library code range
 * called by: game_sub_0221c8
 */
u32 cri_sub_263840(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    int iVar4;
    u16 *puVar5;
    int iVar6;
    int iVar7;
    int a6;
    u32 uVar8;
    u8 *ar4_00;
    code *pcVar10;
    double dVar9;
    u16 uVar11;
    char cVar12;
    char cVar13;

    cVar13 = '\0';
    cVar12 = '\0';
    uVar8 = a1 + 0x1fU & 0xffffffe0;
    iVar7 = a2 - (uVar8 - a1);
    iVar4 = 0;
    do {
        if ((&g_8c277fd0)[iVar4 * 0x94] == '\0')
            break;
        iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    if (iVar4 != 8) {
        iVar4 = iVar4 * 0x94;
        ar4_00 = &g_8c277fd0 + iVar4;
        memset(ar4_00, 0, 0x94);
        *(char *)(iVar4 + 0x8c277fd3) = (char)a0;
        *(u32 *)(iVar4 + 0x8c277ff0) = a0 * 0x4040 + uVar8;
        *(u32 *)(iVar4 + 0x8c277ff4) = (iVar7 + a0 * -0x4040) - 0x24U & 0xfffff800;
        *(u32 *)(iVar4 + 0x8c277ff8) = 0x24;
        *(u32 *)(iVar4 + 0x8c277ffc) = uVar8;
        *(u32 *)(iVar4 + 0x8c278000) = 0x2000;
        *(u32 *)(iVar4 + 0x8c278004) = 0x2020;
        a6 = *(int *)(iVar4 + 0x8c277ff8);
        iVar6 = *(int *)(iVar4 + 0x8c277ff4);
        iVar1 = game_sub_26b564(*(u32 *)(iVar4 + 0x8c277ff0), iVar6, a6);
        *(int *)(iVar4 + 0x8c277fe0) = iVar1;
        *(int *)(iVar4 + 0x8c277fe4) = iVar1;
        if (iVar1 != 0) {
            iVar1 = 0;
            if (0 < a0) {
                do {
                    iVar7 = iVar1 * 4;
                    puVar3 = (u32 *)(iVar7 + iVar4 + 0x8c277fe8);
                    a6 = (*(int *)(iVar4 + 0x8c278004) - *(int *)(iVar4 + 0x8c278000)) * 2;
                    iVar6 = *(int *)(iVar4 + 0x8c278000) << 1;
                    uVar2 = game_sub_26b564(*(int *)(iVar4 + 0x8c278004) * iVar1 * 2 + *(int *)(iVar4 + 0x8c277ffc),
                                            iVar6, a6);
                    *puVar3 = uVar2;
                    if (*(int *)(iVar4 + 0x8c277fe8 + iVar7) == 0)
                        goto override_prt_8c26394e_7a4d7f16;
                    iVar1 = iVar1 + 1;
                } while (iVar1 < a0);
            }
            a6 = iVar4 + 0x8c277fe8;
            iVar6 = a0;
            iVar1 = cri_sub_262b04(*(u32 *)(iVar4 + 0x8c277fe4), a0, a6);
            *(int *)(iVar4 + 0x8c277fd4) = iVar1;
            if (iVar1 != 0) {
                iVar6 = a0;
                iVar1 = sd_sub_268b70(iVar4 + 0x8c277fe8, a0, a6, a3);
                *(int *)(iVar4 + 0x8c277fdc) = iVar1;
                if (iVar1 != 0) {
                    *(u32 *)(iVar4 + 0x8c278008) = 0x3c;
                    iVar7 = *(int *)(iVar4 + 0x8c277ff4);
                    if (iVar7 < 0) {
                        iVar7 = iVar7 + 0x7ff;
                    }
                    iVar6 = 0;
                    *(short *)(iVar4 + 0x8c27800c) = (short)(iVar7 >> 0xb);
                    if (cVar13 == '\0') {
                        pcVar10 = (code *)0x3f59999a;
                    } else {
                        pcVar10 = cri_sub_2629b2;
                    }
                    dVar9 = (double)CONCAT44(pcVar10, (float)(int)*(short *)(iVar4 + 0x8c27800c));
                    if (cVar12 == '\0') {
                        uVar11 = (u16)(int)((float)(int)*(short *)(iVar4 + 0x8c27800c) * (float)pcVar10);
                    } else {
                        uVar11 = (u16)(int)(dVar9 * dVar9);
                    }
                    *(u16 *)(iVar4 + 0x8c27800e) = uVar11;
                    *(u16 *)(iVar4 + 0x8c278010) = 0;
                    puVar5 = (u16 *)(iVar4 + 0x8c278012);
                    if (0 < a0) {
                        do {
                            iVar6 = iVar6 + 1;
                            *puVar5 = 0xff80;
                            puVar5 = puVar5 + 1;
                        } while (iVar6 < a0);
                    }
                    *(u8 *)(iVar4 + 0x8c27803c) = 1;
                    *(u32 *)(iVar4 + 0x8c278024) = 0;
                    *(u32 *)(iVar4 + 0x8c278028) = 0;
                    *(u32 *)(iVar4 + 0x8c27802c) = 0;
                    *(u16 *)(iVar4 + 0x8c278030) = 0;
                    *(u32 *)(iVar4 + 0x8c278034) = 0;
                    *(u16 *)(iVar4 + 0x8c278038) = 0;
                    *(u16 *)(iVar4 + 0x8c27803a) = 0;
                    *(u8 *)(iVar4 + 0x8c27803d) = 1;
                    *(u8 *)(iVar4 + 0x8c278042) = 0;
                    *(u32 *)(iVar4 + 0x8c278058) = 0;
                    *ar4_00 = 1;
                    return ar4_00;
                }
            }
        }
    override_prt_8c26394e_7a4d7f16:
        cri_sub_2639fa(ar4_00, iVar6, a6, a3, iVar7);
    }
    return 0;
}

/*
 * cri_sub_2639fa  0x8c2639fa
 * area name: in the cri library code range
 * called by: cri_sub_263840, cri_sub_263b0c
 */
u32 cri_sub_2639fa(u8 *a0, u32 a1, u32 a2, u32 a3, u32 ain0) {
    u32 uVar1;
    u8 *puVar2;
    u32 ar5_00;
    u32 ar6_00;
    int iVar3;
    int iVar4;
    int *in_stack_ffffffe8;

    if (a0 != NULL) {
        puVar2 = a0;
        cri_sub_263c64(a0, a1, a2, a3);
        if (*(int *)(a0 + 0xc) != 0) {
            puVar2 = *(u8 **)(a0 + 0xc);
            cri_sub_2629b2(puVar2, a1, a2, a3);
        }
        if (*(int *)(a0 + 4) != 0) {
            puVar2 = *(u8 **)(a0 + 4);
            ta_fifo_262c04(puVar2);
        }
        if (*(int *)(a0 + 8) != 0) {
            puVar2 = *(u8 **)(a0 + 8);
            ADXSTM_sub_263446(puVar2, a1, a2, a3);
        }
        irq_disable_nested(puVar2, a1, a2, a3, in_stack_ffffffe8);
        if (*(int *)(a0 + 0x10) != 0) {
            in_stack_ffffffe8 = *(int **)(a0 + 0x10);
            (**(code **)(*in_stack_ffffffe8 + 0xc))(in_stack_ffffffe8, a1, a2, a3);
        }
        for (iVar3 = 0; iVar3 < (char)a0[3]; iVar3 = iVar3 + 1) {
            iVar4 = iVar3 * 4;
            if (*(int *)(a0 + iVar4 + 0x18) != 0) {
                (**(code **)(**(int **)(a0 + iVar4 + 0x18) + 0xc))(*(int **)(a0 + iVar4 + 0x18), a1, a2, a3);
            }
            if (*(int *)(a0 + iVar4 + 0x78) != 0) {
                (**(code **)(**(int **)(a0 + iVar4 + 0x78) + 0xc))(*(int **)(a0 + iVar4 + 0x78), a1, a2, a3);
            }
            if (*(int *)(a0 + iVar4 + 0x80) != 0) {
                (**(code **)(**(int **)(a0 + iVar4 + 0x80) + 0xc))(*(int **)(a0 + iVar4 + 0x80), a1, a2, a3);
            }
        }
        if (*(int *)(a0 + 0x74) != 0) {
            cri_sub_26145e(*(u32 *)(a0 + 0x74), a1, a2, a3, in_stack_ffffffe8);
        }
        ar5_00 = 0;
        ar6_00 = 0x94;
        puVar2 = a0;
        uVar1 = memset(a0, 0, 0x94);
        *a0 = 0;
        uVar1 = irq_restore_nested(puVar2, ar5_00, ar6_00, a3, uVar1);
        return uVar1;
    }
    return ain0;
}

/*
 * cri_sub_263b0c  0x8c263b0c
 * area name: in the cri library code range
 */
int cri_sub_263b0c(char *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int unaff_r12;
    char *pcVar2;
    u32 in_PR;

    pcVar2 = a0 + unaff_r12;
    do {
        iVar1 = (int)*a0;
        if (iVar1 == 1) {
            iVar1 = cri_sub_2639fa(a0, a1, a2, a3, in_PR);
        }
        a0 = a0 + 0x94;
    } while (a0 < pcVar2);
    return iVar1;
}

/*
 * cri_sub_263b34  0x8c263b34
 * area name: in the cri library code range
 * called by: ADXT_StartMem, ADXT_StartMemIdx, cri_sub_263bc0, cri_sub_263bc8, cri_sub_264ba0
 */
u32 cri_sub_263b34(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    int *a4;
    int iVar1;
    u32 uVar2;

    ar5_00 = a1;
    for (iVar1 = 0; iVar1 < *(char *)(a0 + 3); iVar1 = iVar1 + 1) {
        a4 = *(int **)(iVar1 * 4 + a0 + 0x18);
        (**(code **)(*a4 + 0x14))(a4, a1, a2, a3);
    }
    uVar2 = ar5_00;
    set_field_8_262c3c(*(u32 *)(a0 + 4), ar5_00);
    *(u32 *)(a0 + 0x14) = uVar2;
    ta_sub_262c50(*(u32 *)(a0 + 4));
    *(u8 *)(a0 + 1) = 1;
    *(u32 *)(a0 + 0x4c) = 0;
    *(u8 *)(a0 + 0x71) = 0;
    *(u32 *)(a0 + 0x8c) = 0x7fffffff;
    *(u32 *)(a0 + 0x90) = 0xffffffff;
    return 0x90;
}

/*
 * cri_sub_263bc0  0x8c263bc0
 * area name: in the cri library code range
 * called by: ADXT_StartAfs, ADXT_StartFname
 */
u32 cri_sub_263bc0(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 ain0;
    u32 ar5_00;
    int ar6_00;

    ar6_00 = (int)*(short *)(a0 + 0x3c) << 0xb;
    ain0 = set_fields_1c_18(*(u32 *)(a0 + 8), (int)*(short *)(a0 + 0x3e) << 0xb, ar6_00);
    ar5_00 = 0x19;
    ADXSTM_set_sector_count(*(u32 *)(a0 + 8), 0x19);
    ADXSTM_rewind(*(u32 *)(a0 + 8));
    cri_sub_263b34(a0, *(u32 *)(a0 + 0x10), ar6_00, a3);
    *(u8 *)(a0 + 2) = 0;
    return 0;
}

/*
 * cri_sub_263bc8  0x8c263bc8
 * area name: in the cri library code range
 */
u32 cri_sub_263bc8(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3, int ain0) {
    code *in_r3;
    u32 ar5_00;
    int ar6_00;
    int unaff_r14;

    ar6_00 = (int)*(short *)(ain0 + unaff_r14) << 0xb;
    (*in_r3)(*(u32 *)(unaff_r14 + 8), (int)*(short *)(unaff_r14 + 0x3e) << 0xb, ar6_00, a3);
    ar5_00 = 0x19;
    ADXSTM_set_sector_count(*(u32 *)(unaff_r14 + 8), 0x19);
    ADXSTM_rewind(*(u32 *)(unaff_r14 + 8));
    cri_sub_263b34(unaff_r14, *(u32 *)(unaff_r14 + 0x10), ar6_00, a3);
    *(u8 *)(unaff_r14 + 2) = 0;
    return 0;
}

/*
 * cri_sub_263bfe  0x8c263bfe
 * area name: in the cri library code range
 */
u32 cri_sub_263bfe(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int *a4;
    int iVar3;

    iVar3 = a0;
    uVar1 = a1;
    cri_sub_263c64(a0, a1, a2, a3);
    irq_disable_nested(iVar3, a1, a2, a3, uVar1);
    for (iVar3 = 0; iVar3 < *(char *)(a0 + 3); iVar3 = iVar3 + 1) {
        a4 = *(int **)(iVar3 * 4 + a0 + 0x18);
        (**(code **)(*a4 + 0x14))(a4, a1, a2, a3);
    }
    uVar2 = uVar1;
    set_field_8_262c3c(*(u32 *)(a0 + 4), uVar1);
    *(u32 *)(a0 + 0x14) = uVar2;
    uVar2 = *(u32 *)(a0 + 4);
    ta_sub_262c50(uVar2);
    *(u8 *)(a0 + 1) = 1;
    *(u8 *)(a0 + 2) = 3;
    *(u32 *)(a0 + 0x4c) = 0;
    uVar1 = irq_restore_nested(uVar2, uVar1, a2, a3, 0x4c);
    return uVar1;
}

/*
 * cri_sub_263c64  0x8c263c64
 * area name: in the cri library code range
 * called by: ADXT_StartAfs, ADXT_StartFname, ADXT_StartMem, ADXT_StartMemIdx, cri_sub_2639fa, cri_sub_263bfe,
 * cri_sub_2647f4, cri_sub_264c92 (+3 more)
 */
u32 cri_sub_263c64(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int *ar4_00;
    u32 uVar1;
    u32 in_stack_fffffff0;

    irq_disable_nested(a0, unused_a1, a2, a3, in_stack_fffffff0);
    mwRna_sub_2690d8(*(u32 *)(a0 + 0xc), 0, a2, a3);
    uVar1 = 0;
    mwRna_set_play_sw(*(u32 *)(a0 + 0xc), 0, a2, a3);
    ar4_00 = *(int **)(a0 + 4);
    ta_sub_262c66(ar4_00);
    if (*(int *)(a0 + 8) != 0) {
        ADXSTM_stop_read(*(u32 *)(a0 + 8), uVar1, a2, a3);
        ADXSTM_sub_263446(*(u32 *)(a0 + 8), uVar1, a2, a3);
        ar4_00 = *(int **)(a0 + 0x14);
        (**(code **)(*ar4_00 + 0x14))(ar4_00, uVar1, a2, a3);
        *(u32 *)(a0 + 8) = 0;
    }
    if ((*(char *)(a0 + 2) == '\x02') && (*(int *)(a0 + 0x14) != 0)) {
        ar4_00 = *(int **)(a0 + 0x14);
        (**(code **)(*ar4_00 + 0xc))(ar4_00, uVar1, a2, a3);
    }
    *(u32 *)(a0 + 0x14) = 0;
    *(u8 *)(a0 + 1) = 0;
    uVar1 = irq_restore_nested(ar4_00, uVar1, a2, a3, 0);
    return uVar1;
}

/*
 * get_field_1_s8_263cd4  0x8c263cd4
 * called by: ADX_sub_264104, adx_stall_watchdog, cri_sub_263f54
 */
int get_field_1_s8_263cd4(int a0) {
    return (int)*(char *)(a0 + 1);
}

/*
 * cri_sub_263cd8  0x8c263cd8
 * area name: in the cri library code range
 * called by: adx_stall_watchdog, cri_sub_263d90
 */
u32 cri_sub_263cd8(int a0, int *a1, u32 *a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    if ((*(char *)(a0 + 1) == '\x03') || (*(char *)(a0 + 1) == '\x04')) {
        mwRnaGetTime(*(u32 *)(a0 + 0xc), a1, a2, a3);
    } else if (*(char *)(a0 + 1) == '\x05') {
        iVar1 = get_field_18_wrap(*(u32 *)(a0 + 4));
        *a1 = iVar1;
        uVar2 = get_field_14_of_field_4(*(u32 *)(a0 + 4));
        *a2 = uVar2;
        uVar2 = cri_sub_263162(*(u32 *)(a0 + 4));
        iVar1 = libgcc_divide_helper_010468(0x10, uVar2);
        *a1 = *a1 * iVar1;
    } else {
        *a1 = 0;
        *a2 = 1;
    }
    *a1 = *a1 + *(int *)(a0 + 0x88);
    return 0x88;
}

/*
 * cri_sub_263ce4  0x8c263ce4
 * area name: in the cri library code range
 */
u32 cri_sub_263ce4(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *unaff_r12;
    int *unaff_r13;
    int unaff_r14;

    if ((*(char *)(unaff_r14 + 1) == '\x03') || (*(char *)(unaff_r14 + 1) == '\x04')) {
        mwRnaGetTime(*(u32 *)(unaff_r14 + 0xc), unaff_r13, unaff_r12, a3);
    } else if (*(char *)(unaff_r14 + 1) == '\x05') {
        iVar1 = get_field_18_wrap(*(u32 *)(unaff_r14 + 4));
        *unaff_r13 = iVar1;
        uVar2 = get_field_14_of_field_4(*(u32 *)(unaff_r14 + 4));
        *unaff_r12 = uVar2;
        uVar2 = cri_sub_263162(*(u32 *)(unaff_r14 + 4));
        iVar1 = libgcc_divide_helper_010468(0x10, uVar2);
        *unaff_r13 = *unaff_r13 * iVar1;
    } else {
        *unaff_r13 = 0;
        *unaff_r12 = 1;
    }
    *unaff_r13 = *unaff_r13 + *(int *)(unaff_r14 + 0x88);
    return 0x88;
}

/*
 * cri_sub_263d90  0x8c263d90
 * area name: in the cri library code range
 */
int cri_sub_263d90(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    float fVar1;
    double dVar2;
    int iVar3;
    char cVar4;
    char cVar5;
    int iStack_c;
    int aiStack_8[2];

    cVar5 = '\0';
    cVar4 = '\0';
    cri_sub_263cd8(a0, &iStack_c, aiStack_8, a3);
    if (cVar4 == '\0') {
        fVar1 = (float)iStack_c / (float)aiStack_8[0];
    } else {
        fVar1 = SUB84((double)aiStack_8[0] / (double)aiStack_8[0], 0);
    }
    if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(0x42c80000, fVar1);
    } else {
        dVar2 = -3.874703964122394e-250;
    }
    if (cVar4 == '\0') {
        iVar3 = (int)(SUB84(dVar2, 0) * (float)((u64)dVar2 >> 0x20));
    } else {
        iVar3 = (int)(dVar2 * dVar2);
    }
    return iVar3;
}

/*
 * cri_sub_263dd8  0x8c263dd8
 * area name: in the cri library code range
 * called by: cri_sub_263f54
 */
u32 cri_sub_263dd8(int a0) {
    u32 uVar1;

    if ('\x01' < *(char *)(a0 + 1)) {
        uVar1 = get_field_14_of_field_4(*(u32 *)(a0 + 4));
        return uVar1;
    }
    return 0;
}

/*
 * cri_sub_263df6  0x8c263df6
 * area name: in the cri library code range
 * called by: cri_sub_263f54, cri_sub_264a42
 */
u32 cri_sub_263df6(int a0) {
    u32 uVar1;

    if ('\x01' < *(char *)(a0 + 1)) {
        uVar1 = get_field_e_s8_wrap(*(u32 *)(a0 + 4));
        return uVar1;
    }
    return 0;
}

/*
 * ADXT_SetOutPan  0x8c263e50
 * named from the library error message it prints (ADXT_SetOutPan)
 * called by: game_sub_022b68
 * strings: "E8101208: parameter error (ADXT_SetOutPan)"
 */
u32 ADXT_SetOutPan(int a0, int a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u32 in_PR;

    *(short *)(a1 * 2 + a0 + 0x42) = (short)a2;
    if (a1 < *(char *)(a0 + 3)) {
        uVar1 = (*(code *)&SUB_8c262a12)(*(u32 *)(a0 + 0xc));
        return uVar1;
    }
    uVar1 = lib_error_printf(a0, a1, a2, r7, "E8101208: parameter error (ADXT_SetOutPan)", in_PR);
    return uVar1;
}

/*
 * ADXT_SetOutPan_263e5c  0x8c263e5c
 * named from the library error message it prints (ADXT_SetOutPan)
 * strings: "E8101208: parameter error (ADXT_SetOutPan)"
 */
u32 ADXT_SetOutPan_263e5c(u32 a0, int a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    int in_r2;
    int in_r3;
    int unaff_r14;
    u32 in_PR;

    *(short *)(in_r3 + in_r2) = (short)a2;
    if (a1 < *(char *)(unaff_r14 + 3)) {
        uVar1 = (*(code *)&SUB_8c262a12)(*(u32 *)(unaff_r14 + 0xc));
        return uVar1;
    }
    uVar1 = lib_error_printf(a0, a1, a2, r7, "E8101208: parameter error (ADXT_SetOutPan)", in_PR);
    return uVar1;
}

/*
 * cri_sub_263e8e  0x8c263e8e
 * area name: in the cri library code range
 * called by: game_sub_022c20
 */
u32 cri_sub_263e8e(int a0, u32 a1) {
    u32 uVar1;

    *(u16 *)(a0 + 0x40) = (u16)a1;
    uVar1 = mwRnaSetOutVol(*(u32 *)(a0 + 0xc));
    return uVar1;
}

/*
 * cri_sub_263f1a  0x8c263f1a
 * area name: in the cri library code range
 */
int cri_sub_263f1a(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    if (*(int *)(a0 + 0x14) == 0) {
        return 0;
    }
    iVar1 = (**(code **)(**(int **)(a0 + 0x14) + 0x24))(*(int **)(a0 + 0x14), 1, a2, a3);
    if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7ff;
    }
    return iVar1 >> 0xb;
}

/*
 * cri_sub_263f54  0x8c263f54
 * area name: in the cri library code range
 */
int cri_sub_263f54(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *a4;
    u32 a5;
    u8 *puVar3;
    u32 in_PR;
    u8 auStack_c[4];
    u8 auStack_8[4];

    puVar3 = auStack_8;

    *(u32 *)(puVar3 + -4) = in_PR;
    iVar1 = get_field_1_s8_263cd4(a0);
    if ((1 < iVar1) && (*(int *)(a0 + 0x14) != 0)) {
        a4 = *(int **)(a0 + 0x14);
        a5 = 1;
        *(int **)(puVar3 + -0xc) = a4;
        uVar2 = (**(code **)(*a4 + 0x24))(a4, 1, a2, a3);
        *(u32 *)(puVar3 + -0xc) = uVar2;
        uVar2 = cri_sub_263df6(a0);
        *(u32 *)(puVar3 + -8) = uVar2;
        cri_sub_263dd8(a0);
        iVar1 = libgcc_divide_helper_010468(*(u32 *)(puVar3 + -0xc), *(int *)(puVar3 + -8) * 0x12);
        iVar1 = iVar1 << 5;
    }
    return iVar1;
}

/*
 * cri_sub_263fba  0x8c263fba
 * area name: in the cri library code range
 */
u32 cri_sub_263fba(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    if (*(int *)(a0 + 0x14) != 0) {
        iVar1 = (**(code **)(**(int **)(a0 + 0x14) + 0x24))(*(int **)(a0 + 0x14), 1, a2, a3);
        if ((int)*(short *)(a0 + 0x3e) << 0xb <= iVar1) {
            return 1;
        }
    }
    return 0;
}

/*
 * set_field_6d_u8  0x8c263ffa
 * called by: game_sub_0221c8
 */
u32 set_field_6d_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x6d) = (u8)a1;
    return 0x6d;
}

/*
 * adx_server  0x8c264010
 * ADX file/stream server (V-blank job)
 * called by: ADX_sub_2641ee
 */
u32 adx_server(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar4_00;
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    char *ar4_01;
    char *a4;

    ar4_00 = sh4_tmu_1f88e6(a0);
    cri_sub_2630cc(a0, unused_a1, a2, a3);
    uVar1 = sh4_tmu_1f88e6(a0);
    uVar3 = ar4_00;
    uVar2 = uVar1;
    g_8c27848c = int_diff(ar4_00, uVar1);
    thunk_FUN_8c2695e4();
    uVar2 = sh4_tmu_1f88e6(uVar3);
    uVar3 = uVar2;
    g_8c278490 = int_diff(uVar1, uVar2);
    ADXF_sub_262524(uVar1, uVar3, a2, a3);
    uVar1 = sh4_tmu_1f88e6(uVar1);
    uVar3 = uVar1;
    g_8c278494 = int_diff(uVar2, uVar1);
    ADXSTM_sub_26371e(uVar2, uVar3, a2, a3);
    uVar2 = sh4_tmu_1f88e6(uVar2);
    uVar3 = uVar2;
    g_8c278498 = int_diff(uVar1, uVar2);
    a4 = &g_8c277fd0;
    do {
        ar4_01 = a4;
        if (*a4 == '\x01') {
            cri_sub_264e84(a4, uVar3, a2, a3);
        }
        a4 = a4 + 0x94;
    } while (a4 < &g_8c278470);
    uVar3 = sh4_tmu_1f88e6(ar4_01);
    g_8c27849c = int_diff(uVar2, uVar3);
    g_8c278488 = int_diff(ar4_00, uVar3);
    return g_8c278488;
}

/*
 * ADX_sub_264104  0x8c264104
 * area name: sits between ADX functions (same compilation unit)
 */
u32 ADX_sub_264104(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = get_field_1_s8_263cd4(a0);
    *(char *)(a0 + 0x72) = (char)a1;
    if ((iVar1 != 3) && (iVar1 != 4)) {
        return iVar1;
    }
    if (a1 == 1) {
        (*(code *)(&mwRna_set_play_sw))(*(u32 *)(a0 + 0xc), 0, a2, a3);
        iVar1 = 0x7a120;
        do {
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar2 = (*(code *)(&mwRna_sub_269738))(*(u32 *)(a0 + 0xc));
        return uVar2;
    }
    uVar2 = (*(code *)(&mwRna_set_play_sw))(*(u32 *)(a0 + 0xc), 1);
    return uVar2;
}

/*
 * thunk_FUN_8c25ecdc  0x8c2641e2
 * called by: game_sub_0221c8
 */
u32 thunk_FUN_8c25ecdc(u32 unused_a0, u32 a1) {
    u32 uVar1;

    uVar1 = (g_8c25ecdc)();
    return uVar1;
}

/*
 * ADX_sub_2641ee  0x8c2641ee
 * area name: sits between ADX functions (same compilation unit)
 */
u32 ADX_sub_2641ee(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar4_00;

    if (*(char *)(a0 + 0x72) == '\0') {
        return 0;
    }
    ar4_00 = *(u32 *)(a0 + 0xc);
    uVar1 = mwRnaDiscardData(ar4_00, a1, a2, a3);
    adx_server(ar4_00, a1, a2, a3);
    return uVar1;
}

/*
 * cri_sub_264222  0x8c264222
 * area name: in the cri library code range
 */
u32 cri_sub_264222(u16 *a0, int a1, int *a2) {
    int iVar1;
    short asStack_28[2];
    u8 auStack_24[4];
    u8 auStack_20[4];
    u8 auStack_1c[4];
    u8 auStack_18[4];
    u8 auStack_14[4];
    u8 auStack_10[8];
    int *piStack_8;

    if (((1 < a1) && (((int)(u32)*a0 >> 8 | (u32)*a0 << 8 & 0xff00 & 0xffff) == 0x8000)) &&
        (piStack_8 = a2,
         iVar1 = (*(code *)(&irq_sub_260d7c))(a0, a1, asStack_28, auStack_24, auStack_20, auStack_1c, auStack_18,
                                              auStack_14, auStack_10),
         -1 < iVar1)) {
        *piStack_8 = (int)asStack_28[0];
        return 1;
    }
    return 0;
}

/*
 * cri_sub_264308  0x8c264308
 * area name: in the cri library code range
 */
int cri_sub_264308(int a0, int a1, int a2) {
    int iVar1;
    u32 *puVar2;
    u8 *a7;
    u8 *a7_00;
    int d;
    int *a4;
    int iVar3;
    u8 auStack_28[8];
    u32 uStack_20;
    u32 uStack_1c;

    a7 = auStack_28;
    a7_00 = auStack_28;
    a4 = *(int **)(a0 + 0x14);
    if (a2 < 0) {
        a2 = a2 + 0x1f;
    }
    d = a1 * 0x12;
    iVar3 = (a2 >> 5) * d;
    puVar2 = &uStack_20;
    (**(code **)(*a4 + 0x18))(a4, 0, iVar3, puVar2);
    iVar1 = libgcc_divide_helper_010468(uStack_1c, d);
    iVar1 = iVar1 * d;
    memset(uStack_20, 0, iVar1);
    span_take(&uStack_20, iVar1, &uStack_20, auStack_28);
    (**(code **)(*a4 + 0x20))(a4, 1, &uStack_20, a7);
    (**(code **)(*a4 + 0x1c))(a4, 0, auStack_28, a7);
    puVar2 = &uStack_20;
    (**(code **)(*a4 + 0x18))(a4, 0, iVar3 - iVar1, puVar2);
    iVar3 = libgcc_divide_helper_010468(uStack_1c, d);
    iVar3 = iVar3 * d;
    memset(uStack_20, 0, iVar3);
    span_take(&uStack_20, iVar3, &uStack_20, auStack_28);
    (**(code **)(*a4 + 0x20))(a4, 1, &uStack_20, a7_00);
    (**(code **)(*a4 + 0x1c))(a4, 0, auStack_28, a7_00);
    iVar1 = libgcc_divide_helper_010468(iVar1 + iVar3, d);
    return iVar1 << 5;
}

/*
 * ADXT_StartAfs  0x8c264408
 * named from the library error message it prints (ADXT_StartAfs)
 * called by: game_sub_022918
 * strings: "E8101202: can't open %d, %d (ADXT_StartAfs)\n"
 */
u32 ADXT_StartAfs(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *ar7_00;
    int iStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    iVar1 = a0;
    uStack_10 = a1;
    uStack_c = a2;
    cri_sub_263c64(a0, a1, a2, a3);
    irq_disable_nested(iVar1, a1, a2, a3);
    ar7_00 = &uStack_14;
    ADXF_sub_26270c(uStack_10, uStack_c, &iStack_18, ar7_00);
    uVar2 = *(u32 *)(a0 + 0x10);
    iVar1 = (*(code *)(&ADXSTM_OpenRange))(iStack_18, uStack_14, uVar2, ar7_00);
    *(int *)(a0 + 8) = iVar1;
    if (iVar1 == 0) {
        irq_restore_nested(iStack_18, uStack_14, uVar2, ar7_00);
        (*(code *)(&lib_error_printf))(iStack_18, uStack_14, uVar2, ar7_00,
                                       "E8101202: can't open %d, %d (ADXT_StartAfs)\n", uStack_10);
    } else {
        cri_sub_263bc0(a0, uStack_14, uVar2, ar7_00);
        iStack_18 = a0;
    }
    uVar2 = irq_restore_nested(iStack_18, uStack_14, uVar2, ar7_00);
    return uVar2;
}

/*
 * ADXT_StartFname  0x8c26446c
 * named from the library error message it prints (ADXT_StartFname)
 * strings: "E8101205: can\'t open \'%s\' (ADXT_StartFname)"
 */
u32 ADXT_StartFname(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ain0;
    int iVar2;
    int ain0_00;
    u32 uVar3;

    iVar2 = a0;
    ain0_00 = a1;
    cri_sub_263c64(a0, a1, a2, a3);
    irq_disable_nested(iVar2, a1, a2, a3, ain0_00);
    uVar3 = *(u32 *)(a0 + 0x10);
    iVar2 = ain0_00;
    iVar1 = ADXSTM_OpenFname(ain0_00, uVar3, a2, a3);
    *(int *)(a0 + 8) = iVar1;
    if (iVar1 == 0) {
        irq_restore_nested(ain0_00, uVar3, a2, a3, iVar2);
        ain0 = lib_error_printf(ain0_00, uVar3, a2, a3, "E8101205: can\'t open \'%s\' (ADXT_StartFname)", iVar2);
        a0 = ain0_00;
    } else {
        ain0 = cri_sub_263bc0(a0, uVar3, a2, a3);
    }
    uVar3 = irq_restore_nested(a0, uVar3, a2, a3, ain0);
    return uVar3;
}

/*
 * ADXT_StartMem  0x8c2644b8
 * named from the library error message it prints (ADXT_StartMem)
 * strings: "E8101207: can\'t create sj (ADXT_StartMem)\n"
 */
u32 ADXT_StartMem(int a0, int a1, u32 a2, u32 a3) {
    int ar5_00;
    u32 ain0;
    u32 uVar1;
    int iVar2;
    int ain0_00;

    iVar2 = a0;
    uVar1 = a2;
    ain0_00 = a1;
    cri_sub_263c64(a0, a1, a2, a3);
    irq_disable_nested(iVar2, a1, uVar1, a3, ain0_00);
    iVar2 = ain0_00;
    ar5_00 = ADXT_sub_26b250(ain0_00, a2);
    if (ar5_00 == 0) {
        irq_restore_nested(ain0_00, 0, uVar1, a3, iVar2);
        ain0 = lib_error_printf(ain0_00, ar5_00, uVar1, a3, "E8101207: can\'t create sj (ADXT_StartMem)\n", iVar2);
    } else {
        ain0_00 = a0;
        cri_sub_263b34(a0, ar5_00, uVar1, a3);
        ain0 = 2;
        *(u8 *)(a0 + 2) = 2;
    }
    uVar1 = irq_restore_nested(ain0_00, ar5_00, uVar1, a3, ain0);
    return uVar1;
}

/*
 * ADXT_StartMemIdx  0x8c264504
 * named from the library error message it prints (ADXT_StartMemIdx)
 * strings: "E8101207: can\'t create sj (ADXT_StartMemIdx)"
 */
u32 ADXT_StartMemIdx(int a0, int a1, int a2, u32 a3) {
    int ar5_00;
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int ar6_00;
    int ain0;

    iVar3 = a1;
    ar6_00 = a2;
    ain0 = a1;
    cri_sub_263c64(a0, a1, a2, a3);
    uVar2 = *(u32 *)(a1 + 4);
    if ((a2 < (int)(uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)) && (-1 < a2)) {
        irq_disable_nested(uVar2, iVar3, ar6_00, a3, ain0);
        uVar2 = *(u32 *)((a2 + 1) * 8 + a1);
        iVar3 = (uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) + ain0;
        ar5_00 = ADXT_sub_26b250(iVar3, 0x40000000);
        if (ar5_00 == 0) {
            irq_restore_nested(iVar3, 0, ar6_00, a3, ain0);
            uVar1 = lib_error_printf(iVar3, ar5_00, ar6_00, a3, "E8101207: can\'t create sj (ADXT_StartMemIdx)", ain0);
        } else {
            iVar3 = a0;
            cri_sub_263b34(a0, ar5_00, ar6_00, a3);
            uVar1 = 2;
            *(u8 *)(a0 + 2) = 2;
        }
        uVar1 = irq_restore_nested(iVar3, ar5_00, ar6_00, a3, uVar1);
        return uVar1;
    }
    return 0xff00;
}

/*
 * ADXT_sub_264614  0x8c264614
 * name hint from a string it uses: E8101201 not enough data adx; area name: sits between ADXT functions (same
 * compilation unit) strings: "E8101201: not enough data (adxt_trap_entry)\n"
 */
u32 ADXT_sub_264614(int a0) {
    int ar5_00;
    u32 uVar1;
    int s4;
    int *ar4_00;
    u32 ar5_01;
    u32 a6;
    u8 *a6_00;
    u8 *puVar2;
    u32 ar4_01;
    int *a4;
    u8 auStack_20[4];
    int iStack_1c;

    a4 = *(int **)(a0 + 0x14);
    ar4_01 = *(u32 *)(a0 + 4);
    ar5_00 = get_field_28_of_field_4(ar4_01);
    uVar1 = get_field_2c_of_field_4(ar4_01);
    s4 = get_field_30_of_field_4(ar4_01);
    get_field_34_of_field_4(ar4_01);
    if ((*(int *)(a0 + 8) == 0) && (*(char *)(a0 + 0x6c) == '\0')) {
        uVar1 = set_field_3c_26311e(*(u32 *)(a0 + 4), 0xffffffff);
    } else {
        a6 = *(u32 *)(a0 + 0x50);
        ar5_01 = 1;
        puVar2 = auStack_20;
        ar4_00 = a4;
        (**(code **)(*a4 + 0x18))(a4, 1, a6, puVar2);
        if (iStack_1c < *(int *)(a0 + 0x50)) {
            lib_error_printf(ar4_00, ar5_01, a6, puVar2, "E8101201: not enough data (adxt_trap_entry)\n", s4);
        }
        a6_00 = auStack_20;
        (**(code **)(*a4 + 0x20))(a4, 0, a6_00, puVar2);
        set_field_40_263126(ar4_01, 0);
        *(int *)(a0 + 0x90) = s4 - ar5_00;
        set_field_3c_26311e(ar4_01, s4 - ar5_00);
        set_field_44_263132(ar4_01, uVar1);
        set_field_34_263102(ar4_01, ar5_00);
        if (*(char *)(a0 + 2) == '\x02') {
            (**(code **)(*a4 + 0x14))(a4, ar5_00, a6_00, puVar2);
            puVar2 = auStack_20;
            (**(code **)(*a4 + 0x18))(a4, 1, uVar1, puVar2);
            (**(code **)(*a4 + 0x20))(a4, 0, auStack_20, puVar2);
        }
        uVar1 = 0x4c;
        *(int *)(a0 + 0x4c) = *(int *)(a0 + 0x4c) + 1;
    }
    return uVar1;
}

/*
 * ADXT_sub_2646fe  0x8c2646fe
 * area name: sits between ADXT functions (same compilation unit)
 */
u32 ADXT_sub_2646fe(int a0) {
    int ain0;
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 8);
    ain0 = get_field_2c_of_field_4(*(u32 *)(a0 + 4));
    if (*(char *)(a0 + 0x6c) != '\0') {
        if (ain0 < 0) {
            ain0 = ain0 + 0x7ff;
        }
        uVar1 = ADXSTM_sub_263534(uVar1, ain0 >> 0xb);
        return uVar1;
    }
    uVar1 = set_field_3c_26311e(*(u32 *)(a0 + 4), 0xffffffff);
    uVar1 = ADXSTM_set_sector_count(*(u32 *)(a0 + 8), 0x7fffffff);
    return uVar1;
}

/*
 * cri_sub_264784  0x8c264784
 * area name: in the cri library code range
 * called by: cri_sub_2647f4
 */
u32 cri_sub_264784(int a0) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;

    iVar2 = get_field_e_s8_wrap(*(u32 *)(a0 + 4));
    puVar1 = (&DATA_8c262a12);
    if (iVar2 == 1) {
        if (*(short *)(a0 + 0x42) == -0x80) {
            iVar2 = 0;
        } else {
            iVar2 = (int)*(short *)(a0 + 0x42);
        }
        uVar3 = FUN_8c262a12(*(u32 *)(a0 + 0xc), 0, iVar2);
    } else {
        if (*(short *)(a0 + 0x42) == -0x80) {
            iVar2 = -0xf;
        } else {
            iVar2 = (int)*(short *)(a0 + 0x42);
        }
        FUN_8c262a12(*(u32 *)(a0 + 0xc), 0, iVar2);
        if (*(short *)(a0 + 0x44) == -0x80) {
            iVar2 = 0xf;
        } else {
            iVar2 = (int)*(short *)(a0 + 0x44);
        }
        uVar3 = (*(code *)puVar1)(*(u32 *)(a0 + 0xc), 1, iVar2);
    }
    return uVar3;
}

/*
 * cri_sub_264788  0x8c264788
 * area name: in the cri library code range
 */
u32 cri_sub_264788(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    int unaff_r14;

    iVar2 = get_field_e_s8_wrap(*(u32 *)(unaff_r14 + 4));
    puVar1 = (&DATA_8c262a12);
    if (iVar2 == 1) {
        if (*(short *)(unaff_r14 + 0x42) == -0x80) {
            iVar2 = 0;
        } else {
            iVar2 = (int)*(short *)(unaff_r14 + 0x42);
        }
        uVar3 = FUN_8c262a12(*(u32 *)(unaff_r14 + 0xc), 0, iVar2, a3);
    } else {
        if (*(short *)(unaff_r14 + 0x42) == -0x80) {
            iVar2 = -0xf;
        } else {
            iVar2 = (int)*(short *)(unaff_r14 + 0x42);
        }
        FUN_8c262a12(*(u32 *)(unaff_r14 + 0xc), 0, iVar2, a3);
        if (*(short *)(unaff_r14 + 0x44) == -0x80) {
            iVar2 = 0xf;
        } else {
            iVar2 = (int)*(short *)(unaff_r14 + 0x44);
        }
        uVar3 = (*(code *)puVar1)(*(u32 *)(unaff_r14 + 0xc), 1, iVar2, a3);
    }
    return uVar3;
}

/*
 * cri_sub_2647f4  0x8c2647f4
 * name hint from a string it uses: E9081001 can t play d ch dat; area name: in the cri library code range
 * called by: cri_sub_264e84, cri_sub_264e88
 * strings: "E9081001: can't play %d ch data (maxch=%d) [adxt_stat_decinf"
 */
int cri_sub_2647f4(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 ar5_00;
    u32 ar5_01;
    u32 *extraout_r3;
    code *ar5_02;
    u32 uVar5;

    uVar5 = *(u32 *)(a0 + 4);
    iVar1 = get_field_1_s8_262c38(uVar5, a1);
    if (iVar1 == 2) {
        iVar1 = get_field_e_s8_wrap(uVar5);
        if (*(char *)(a0 + 3) < iVar1) {
            lib_error_printf(iVar1, a1, a2, a3, "E9081001: can't play %d ch data (maxch=%d) [adxt_stat_decinfo]\n",
                             iVar1);
            uVar5 = cri_sub_263c64(a0, a1, a2, a3);
            return uVar5;
        }
        uVar2 = get_field_14_of_field_4(uVar5);
        iVar1 = get_field_24_s16_wrap(uVar5);
        if (iVar1 < 1) {
            iVar3 = libgcc_divide_helper_010468(uVar2, *(u32 *)(a0 + 0x38));
            iVar3 = (int)(iVar3 * 3 + (u32)(iVar3 * 3 < 0)) >> 1;
        } else {
            iVar3 = libgcc_divide_helper_010468(uVar2, *(u32 *)(a0 + 0x38));
            iVar3 = iVar3 * 3;
        }
        *(int *)(a0 + 0x48) = iVar3;
        iVar3 = get_field_10_of_field_4(uVar5);
        iVar3 = iVar3 * 2;
        iVar4 = libgcc_divide_helper_010468(*(int *)(a0 + 0x48) + iVar3, iVar3);
        *(int *)(a0 + 0x48) = iVar4 * iVar3;
        ar5_02 = *(code **)(a0 + 0x48);
        set_field_38_262c4c(uVar5, ar5_02);
        if (iVar1 < 1) {
            if (*(int *)(a0 + 8) != 0) {
                ar5_02 = (code *)0x7fffffff;
                ADXSTM_set_sector_count(*(u32 *)(a0 + 8), 0x7fffffff);
            }
        } else {
            if (*(char *)(a0 + 2) == '\x02') {
                *(u32 *)(a0 + 0x50) = 0;
            } else {
                iVar1 = get_field_34_of_field_4(uVar5);
                iVar3 = libgcc_divide_helper_010614(iVar1, 0x800);
                *(int *)(a0 + 0x50) = 0x800 - iVar3;
                uVar2 = libgcc_divide_helper_010614(*(u32 *)(a0 + 0x50), 0x800);
                *extraout_r3 = uVar2;
                uVar2 = libgcc_divide_helper_010468(iVar1 + 0x7ff, 0x800);
                *(u32 *)(a0 + 0x8c) = uVar2;
                ADXSTM_set_sector_count(*(u32 *)(a0 + 8), uVar2);
                ar5_02 = ADXT_sub_2646fe;
                a2 = a0;
                set_fields_38_3c(*(u32 *)(a0 + 8), ADXT_sub_2646fe, a0);
            }
            uVar2 = get_field_30_of_field_4(uVar5);
            *(u32 *)(a0 + 0x90) = uVar2;
            set_field_3c_26311e(uVar5, uVar2);
            set_field_44_263132(uVar5, 0);
            set_field_40_263126(uVar5, 0);
            ar5_02 = ADXT_sub_264614;
            a2 = a0;
            set_fields_48_4c(uVar5, ADXT_sub_264614, a0);
        }
        iVar3 = get_field_14_of_field_4(uVar5);
        uVar2 = get_field_e_s8_wrap(uVar5);
        ar5_00 = get_field_18_wrap(uVar5);
        ar5_01 = cri_sub_263162(uVar5);
        mwRnaSetBitPerSmpl(*(u32 *)(a0 + 0xc), ar5_01, a2, a3);
        mwRnaSetSfreq(*(u32 *)(a0 + 0xc), iVar3, a2, a3);
        mwRnaSetNumChan(*(u32 *)(a0 + 0xc), uVar2, a2, a3);
        noop_262a44(*(u32 *)(a0 + 0xc), ar5_00, a2, a3, ar5_00);
        iVar1 = (int)*(short *)(a0 + 0x40);
        mwRnaSetOutVol(*(u32 *)(a0 + 0xc), iVar1, a2, a3);
        cri_sub_264784(a0);
        if (*(int *)(a0 + 0x74) != 0) {
            set_field_20_261680(*(u32 *)(a0 + 0x74), iVar3);
            iVar1 = iVar3;
        }
        iVar3 = get_field_a8_s16_wrap(uVar5);
        if (iVar3 == 2) {
            uVar5 = field_ptr_58(uVar5);
            cri_sub_262a4c(*(u32 *)(a0 + 0xc), uVar5);
        }
        mwRna_sub_2690d8(*(u32 *)(a0 + 0xc), 1, a2, a3);
        iVar1 = 2;
        *(u8 *)(a0 + 1) = 2;
    }
    return iVar1;
}

/*
 * cri_sub_264a42  0x8c264a42
 * area name: in the cri library code range
 * called by: cri_sub_264e84, cri_sub_264e88
 */
int cri_sub_264a42(int a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    u32 ar4_00;
    u32 *a7;
    int iVar4;
    u32 *puVar5;
    u32 ar4_01;
    int iVar6;
    int *a4;
    u32 uStack_24;
    u32 uStack_20;

    ar4_00 = *(u32 *)(a0 + 4);
    ar4_01 = *(u32 *)(a0 + 0xc);
    iVar2 = mwRna_get_read_pos(ar4_01);
    iVar3 = ret_const_7fffffff_2629e8();
    if (((*(int *)(a0 + 0x48) <= iVar2) || (iVar2 = get_field_10_of_field_4(ar4_00), iVar3 <= iVar2)) ||
        (iVar2 = get_field_1_s8_262c38(*(u32 *)(a0 + 4), a1), iVar2 == 3)) {
        if (*(char *)(a0 + 0x70) == '\0') {
            if (*(char *)(a0 + 0x72) == '\0') {
                a1 = 1;
                mwRna_set_play_sw(ar4_01, 1, a2, a3);
            }
            *(u8 *)(a0 + 1) = 3;
        }
        *(u8 *)(a0 + 0x71) = 1;
    }
    iVar2 = get_field_1_s8_262c38(*(u32 *)(a0 + 4), a1);
    if (iVar2 == 3) {
        iVar3 = cri_sub_263df6(a0);
        puVar1 = (&memset);
        iVar2 = 0x48;
        iVar4 = *(int *)(a0 + 0x48);
        iVar6 = 0;
        puVar5 = (u32 *)(a0 + 0x18);
        if (0 < iVar3) {
            do {
                a4 = (int *)*puVar5;
                puVar5 = puVar5 + 1;
                a7 = &uStack_24;
                (**(code **)(*a4 + 0x18))(a4, 0, iVar4 * iVar3 * 2, a7);
                (*(code *)puVar1)(uStack_24, 0, uStack_20, a7);
                iVar2 = (**(code **)(*a4 + 0x20))(a4, 1, &uStack_24, a7);
                iVar6 = iVar6 + 1;
            } while (iVar6 < iVar3);
        }
    }
    return iVar2;
}

/*
 * cri_sub_264b14  0x8c264b14
 * area name: in the cri library code range
 * called by: cri_sub_264e84, cri_sub_264e88
 */
int cri_sub_264b14(int a0) {
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;

    iVar1 = get_field_1_s8_262c38(*(u32 *)(a0 + 4), &g_8c278064);
    if (iVar1 == 3) {
        iVar2 = get_field_e_s8_wrap(*(u32 *)(a0 + 4));
        iVar4 = 0;
        iVar1 = iVar2;
        if (0 < iVar2) {
            do {
                piVar3 = *(int **)(iVar4 * 4 + a0 + 0x18);
                iVar1 = (**(code **)(*piVar3 + 0x24))(piVar3, 1);
                if (0x1f < iVar1)
                    break;
                iVar4 = iVar4 + 1;
            } while (iVar4 < iVar2);
        }
        if (iVar4 == iVar2) {
            mwRna_sub_2690d8(*(u32 *)(a0 + 0xc), 0);
            iVar1 = 4;
            *(u8 *)(a0 + 1) = 4;
        }
    }
    return iVar1;
}

/*
 * cri_sub_264b1a  0x8c264b1a
 * area name: in the cri library code range
 */
int cri_sub_264b1a(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *a4;
    int unaff_r13;
    int iVar3;

    iVar1 = get_field_1_s8_262c38(*(u32 *)(unaff_r13 + 4), a1);
    if (iVar1 == 3) {
        iVar2 = get_field_e_s8_wrap(*(u32 *)(unaff_r13 + 4));
        iVar3 = 0;
        iVar1 = iVar2;
        if (0 < iVar2) {
            do {
                a4 = *(int **)(iVar3 * 4 + unaff_r13 + 0x18);
                iVar1 = (**(code **)(*a4 + 0x24))(a4, 1, a2, a3);
                if (0x1f < iVar1)
                    break;
                iVar3 = iVar3 + 1;
            } while (iVar3 < iVar2);
        }
        if (iVar3 == iVar2) {
            (*(code *)(&mwRna_sub_2690d8))(*(u32 *)(unaff_r13 + 0xc), 0, a2, a3);
            iVar1 = 4;
            *(u8 *)(unaff_r13 + 1) = 4;
        }
    }
    return iVar1;
}

/*
 * cri_sub_264b7a  0x8c264b7a
 * area name: in the cri library code range
 * called by: cri_sub_264e84, cri_sub_264e88
 */
int cri_sub_264b7a(int a0) {
    int iVar1;

    iVar1 = mwRna_get_read_pos(*(u32 *)(a0 + 0xc));
    if (iVar1 < 1) {
        mwRna_set_play_sw(*(u32 *)(a0 + 0xc), 0);
        iVar1 = 5;
        *(u8 *)(a0 + 1) = 5;
    }
    return iVar1;
}

/*
 * cri_sub_264b7e  0x8c264b7e
 * area name: in the cri library code range
 */
int cri_sub_264b7e(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int unaff_r14;

    iVar1 = (*(code *)(&mwRna_get_read_pos))(*(u32 *)(unaff_r14 + 0xc), a1, a2, a3);
    if (iVar1 < 1) {
        (*(code *)(&mwRna_set_play_sw))(*(u32 *)(unaff_r14 + 0xc), 0, a2, a3);
        iVar1 = 5;
        *(u8 *)(unaff_r14 + 1) = 5;
    }
    return iVar1;
}

/*
 * noop_264b9c  0x8c264b9c
 * called by: cri_sub_264e84, cri_sub_264e88
 */
u32 noop_264b9c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * cri_sub_264ba0  0x8c264ba0
 * area name: in the cri library code range
 * called by: cri_sub_264c92, cri_sub_264e84, cri_sub_264e88
 */
u32 cri_sub_264ba0(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    int *a4;
    int iVar2;
    u32 in_stack_ffffffec;

    irq_disable_nested(a0, unused_a1, a2, a3, in_stack_ffffffec);
    mwRna_sub_2690d8(*(u32 *)(a0 + 0xc), 0, a2, a3);
    uVar1 = 0;
    mwRna_set_play_sw(*(u32 *)(a0 + 0xc), 0, a2, a3);
    ta_sub_262c66(*(u32 *)(a0 + 4));
    if (*(int *)(a0 + 8) != 0) {
        ADXSTM_stop_read(*(u32 *)(a0 + 8), uVar1, a2, a3);
        (**(code **)(**(int **)(a0 + 0x14) + 0x14))(*(int **)(a0 + 0x14), uVar1, a2, a3);
    }
    for (iVar2 = 0; iVar2 < *(char *)(a0 + 3); iVar2 = iVar2 + 1) {
        a4 = *(int **)(iVar2 * 4 + a0 + 0x18);
        (**(code **)(*a4 + 0x14))(a4, uVar1, a2, a3);
    }
    if (*(int *)(a0 + 8) != 0) {
        uVar1 = 0;
        ADXSTM_sub_263534(*(u32 *)(a0 + 8), 0);
        ADXSTM_rewind(*(u32 *)(a0 + 8));
    }
    ar5_00 = *(u32 *)(a0 + 0x14);
    uVar1 = cri_sub_263b34(a0, ar5_00, a2, a3);
    uVar1 = irq_restore_nested(a0, ar5_00, a2, a3, uVar1);
    return uVar1;
}

/*
 * cri_sub_264c92  0x8c264c92
 * area name: in the cri library code range
 */
int cri_sub_264c92(int a0, u32 unused_a1, u32 a2, u32 a3) {
    char cVar1;
    u32 ar5_00;
    u32 ar4_00;
    int iVar2;
    int iVar3;
    u32 ar5_01;

    cVar1 = *(char *)(a0 + 1);
    ar5_00 = sh4_tmu_1f88e6(a0);
    ar5_01 = ar5_00;
    ar4_00 = int_diff(g_8c2784a0, ar5_00);
    iVar2 = sh4_sub_1f88f6(ar4_00);
    iVar3 = libgcc_divide_helper_010468(1000000, *(u32 *)(a0 + 0x38));
    iVar3 = libgcc_divide_helper_010468(iVar3 << 3, 10);
    if (iVar2 < iVar3) {
        return iVar3;
    }
    g_8c2784a0 = ar5_00;
    if (((cVar1 == '\x03') && (*(char *)(a0 + 0x72) == '\0')) &&
        (iVar2 = get_field_1_s8_262c38(*(u32 *)(a0 + 4), ar5_01), iVar2 != 3)) {
        iVar2 = get_field_2c_2630fe(*(u32 *)(a0 + 4));
        if (*(int *)(a0 + 100) == iVar2) {
            *(short *)(a0 + 0x68) = *(short *)(a0 + 0x68) + 1;
            if (*(int *)(a0 + 0x38) * 5 < (int)*(short *)(a0 + 0x68)) {
                *(u16 *)(a0 + 0x60) = 0xfffe;
            }
        } else {
            *(u16 *)(a0 + 0x68) = 0;
        }
        *(int *)(a0 + 100) = iVar2;
        if (*(short *)(a0 + 0x60) != 0) {
            if ((*(char *)(a0 + 0x6d) == '\x01') || (*(char *)(a0 + 0x6d) == '\x02')) {
                cri_sub_263c64(a0, ar5_01, a2, a3);
            }
            if (*(char *)(a0 + 0x6d) != '\0') {
                *(u16 *)(a0 + 0x60) = 0;
                goto LAB_8c264d58;
            }
        }
    } else {
    LAB_8c264d58:
        *(u16 *)(a0 + 0x68) = 0;
    }
    if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
        ((*(char *)(a0 + 0x72) == '\0' && (iVar2 = get_field_1_s8_262c38(*(u32 *)(a0 + 4), ar5_01), iVar2 != 3)))) {
        if (*(int *)(a0 + 0x14) == 0) {
            iVar2 = 0;
        } else {
            ar5_01 = 1;
            iVar2 = (**(code **)(**(int **)(a0 + 0x14) + 0x24))(*(int **)(a0 + 0x14), 1, a2, a3);
        }
        if (iVar2 < 0x40) {
            *(short *)(a0 + 0x6a) = *(short *)(a0 + 0x6a) + 1;
            if (cVar1 == '\x03') {
                if (*(int *)(a0 + 0x38) * 5 < (int)*(short *)(a0 + 0x6a)) {
                LAB_8c264dce:
                    *(u16 *)(a0 + 0x60) = 0xffff;
                }
            } else if (*(int *)(a0 + 0x38) * 0x14 < (int)*(short *)(a0 + 0x6a))
                goto LAB_8c264dce;
            iVar2 = 0x60;
            if (*(short *)(a0 + 0x60) == 0)
                goto LAB_8c264e04;
            if (*(char *)(a0 + 0x6d) == '\x01') {
                cri_sub_263c64(a0, ar5_01, a2, a3);
            } else if (*(char *)(a0 + 0x6d) == '\x02') {
                cri_sub_264ba0(a0, ar5_01, a2, a3);
            }
            iVar2 = 0x6d;
            if (*(char *)(a0 + 0x6d) == '\0')
                goto LAB_8c264e04;
            *(u16 *)(a0 + 0x60) = 0;
        }
    }
    iVar2 = 0x6a;
    *(u16 *)(a0 + 0x6a) = 0;
LAB_8c264e04:
    if ((*(int *)(a0 + 8) != 0) && (iVar2 = get_field_1_s8_263746(*(u32 *)(a0 + 8)), iVar2 == 4)) {
        if (*(char *)(a0 + 0x6d) == '\x01') {
            cri_sub_263c64(a0, ar5_01, a2, a3);
        } else if (*(char *)(a0 + 0x6d) == '\x02') {
            cri_sub_264ba0(a0, ar5_01, a2, a3);
        }
        iVar2 = 0x6d;
        if (*(char *)(a0 + 0x6d) != '\0') {
            *(u16 *)(a0 + 0x60) = 0;
            iVar2 = 0x6a;
            *(u16 *)(a0 + 0x6a) = 0;
        }
    }
    return iVar2;
}

/*
 * cri_sub_264e84  0x8c264e84
 * area name: in the cri library code range
 * called by: adx_server
 */
int cri_sub_264e84(int a0, u32 a1, u32 a2, u32 a3) {
    char cVar1;
    u32 ar5_00;
    u32 ar4_00;
    int iVar2;
    int iVar3;
    int *piVar4;
    u32 ar5_01;

    if (*(char *)(a0 + 1) == '\x03') {
        cri_sub_264b14(a0);
    } else if (*(char *)(a0 + 1) == '\x01') {
        cri_sub_2647f4(a0, a1, a2, a3);
    } else if (*(char *)(a0 + 1) == '\x02') {
        cri_sub_264a42(a0, a1, a2, a3);
    } else if (*(char *)(a0 + 1) == '\x04') {
        cri_sub_264b7a(a0);
    } else if (*(char *)(a0 + 1) == '\x05') {
        noop_264b9c();
    }
    cVar1 = *(char *)(a0 + 1);
    ar5_00 = sh4_tmu_1f88e6(a0);
    ar5_01 = ar5_00;
    ar4_00 = int_diff(g_8c2784a0, ar5_00);
    iVar2 = sh4_sub_1f88f6(ar4_00);
    iVar3 = libgcc_divide_helper_010468(1000000, *(u32 *)(a0 + 0x38));
    iVar3 = libgcc_divide_helper_010468(iVar3 << 3, 10);
    if (iVar2 < iVar3) {
        return iVar3;
    }
    g_8c2784a0 = ar5_00;
    if (((cVar1 == '\x03') && (*(char *)(a0 + 0x72) == '\0')) &&
        (iVar2 = get_field_1_s8_262c38(*(u32 *)(a0 + 4), ar5_01), iVar2 != 3)) {
        iVar2 = get_field_2c_2630fe(*(u32 *)(a0 + 4));
        if (*(int *)(a0 + 100) == iVar2) {
            *(short *)(a0 + 0x68) = *(short *)(a0 + 0x68) + 1;
            if (*(int *)(a0 + 0x38) * 5 < (int)*(short *)(a0 + 0x68)) {
                *(u16 *)(a0 + 0x60) = 0xfffe;
            }
        } else {
            *(u16 *)(a0 + 0x68) = 0;
        }
        *(int *)(a0 + 100) = iVar2;
        if (*(short *)(a0 + 0x60) != 0) {
            if ((*(char *)(a0 + 0x6d) == '\x01') || (*(char *)(a0 + 0x6d) == '\x02')) {
                cri_sub_263c64(a0, ar5_01, a2, a3);
            }
            if (*(char *)(a0 + 0x6d) != '\0') {
                *(u16 *)(a0 + 0x60) = 0;
                goto LAB_8c264d58;
            }
        }
    } else {
    LAB_8c264d58:
        *(u16 *)(a0 + 0x68) = 0;
    }
    if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
        ((*(char *)(a0 + 0x72) == '\0' && (iVar2 = get_field_1_s8_262c38(*(u32 *)(a0 + 4), ar5_01), iVar2 != 3)))) {
        if (*(int *)(a0 + 0x14) == 0) {
            iVar2 = 0;
        } else {
            piVar4 = *(int **)(a0 + 0x14);
            ar5_01 = 1;
            iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4, piVar4);
        }
        if (iVar2 < 0x40) {
            *(short *)(a0 + 0x6a) = *(short *)(a0 + 0x6a) + 1;
            if (cVar1 == '\x03') {
                if (*(int *)(a0 + 0x38) * 5 < (int)*(short *)(a0 + 0x6a)) {
                LAB_8c264dce:
                    *(u16 *)(a0 + 0x60) = 0xffff;
                }
            } else if (*(int *)(a0 + 0x38) * 0x14 < (int)*(short *)(a0 + 0x6a))
                goto LAB_8c264dce;
            iVar2 = 0x60;
            if (*(short *)(a0 + 0x60) == 0)
                goto LAB_8c264e04;
            if (*(char *)(a0 + 0x6d) == '\x01') {
                cri_sub_263c64(a0, ar5_01, a2, a3);
            } else if (*(char *)(a0 + 0x6d) == '\x02') {
                cri_sub_264ba0(a0, ar5_01, a2, a3);
            }
            iVar2 = 0x6d;
            if (*(char *)(a0 + 0x6d) == '\0')
                goto LAB_8c264e04;
            *(u16 *)(a0 + 0x60) = 0;
        }
    }
    iVar2 = 0x6a;
    *(u16 *)(a0 + 0x6a) = 0;
LAB_8c264e04:
    if ((*(int *)(a0 + 8) != 0) && (iVar2 = get_field_1_s8_263746(*(u32 *)(a0 + 8)), iVar2 == 4)) {
        if (*(char *)(a0 + 0x6d) == '\x01') {
            cri_sub_263c64(a0, ar5_01, a2, a3);
        } else if (*(char *)(a0 + 0x6d) == '\x02') {
            cri_sub_264ba0(a0, ar5_01, a2, a3);
        }
        iVar2 = 0x6d;
        if (*(char *)(a0 + 0x6d) != '\0') {
            *(u16 *)(a0 + 0x60) = 0;
            iVar2 = 0x6a;
            *(u16 *)(a0 + 0x6a) = 0;
        }
    }
    return iVar2;
}

/*
 * cri_sub_264e88  0x8c264e88
 * area name: in the cri library code range
 */
int cri_sub_264e88(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    char cVar1;
    u32 ar5_00;
    u32 ar4_00;
    int iVar2;
    int iVar3;
    int *piVar4;
    u32 ar5_01;
    int unaff_r14;

    if (*(char *)(unaff_r14 + 1) == '\x03') {
        cri_sub_264b14(unaff_r14);
    } else if (*(char *)(unaff_r14 + 1) == '\x01') {
        cri_sub_2647f4(unaff_r14, a1, a2, a3);
    } else if (*(char *)(unaff_r14 + 1) == '\x02') {
        cri_sub_264a42(unaff_r14, a1, a2, a3);
    } else if (*(char *)(unaff_r14 + 1) == '\x04') {
        cri_sub_264b7a(unaff_r14);
    } else if (*(char *)(unaff_r14 + 1) == '\x05') {
        noop_264b9c();
    }
    cVar1 = *(char *)(unaff_r14 + 1);
    ar5_00 = sh4_tmu_1f88e6(unaff_r14);
    ar5_01 = ar5_00;
    ar4_00 = int_diff(g_8c2784a0, ar5_00);
    iVar2 = sh4_sub_1f88f6(ar4_00);
    iVar3 = libgcc_divide_helper_010468(1000000, *(u32 *)(unaff_r14 + 0x38));
    iVar3 = libgcc_divide_helper_010468(iVar3 << 3, 10);
    if (iVar2 < iVar3) {
        return iVar3;
    }
    g_8c2784a0 = ar5_00;
    if (((cVar1 == '\x03') && (*(char *)(unaff_r14 + 0x72) == '\0')) &&
        (iVar2 = get_field_1_s8_262c38(*(u32 *)(unaff_r14 + 4), ar5_01), iVar2 != 3)) {
        iVar2 = get_field_2c_2630fe(*(u32 *)(unaff_r14 + 4));
        if (*(int *)(unaff_r14 + 100) == iVar2) {
            *(short *)(unaff_r14 + 0x68) = *(short *)(unaff_r14 + 0x68) + 1;
            if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x68)) {
                *(u16 *)(unaff_r14 + 0x60) = 0xfffe;
            }
        } else {
            *(u16 *)(unaff_r14 + 0x68) = 0;
        }
        *(int *)(unaff_r14 + 100) = iVar2;
        if (*(short *)(unaff_r14 + 0x60) != 0) {
            if ((*(char *)(unaff_r14 + 0x6d) == '\x01') || (*(char *)(unaff_r14 + 0x6d) == '\x02')) {
                cri_sub_263c64(unaff_r14, ar5_01, a2, a3);
            }
            if (*(char *)(unaff_r14 + 0x6d) != '\0') {
                *(u16 *)(unaff_r14 + 0x60) = 0;
                goto LAB_8c264d58;
            }
        }
    } else {
    LAB_8c264d58:
        *(u16 *)(unaff_r14 + 0x68) = 0;
    }
    if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
        ((*(char *)(unaff_r14 + 0x72) == '\0' &&
          (iVar2 = get_field_1_s8_262c38(*(u32 *)(unaff_r14 + 4), ar5_01), iVar2 != 3)))) {
        if (*(int *)(unaff_r14 + 0x14) == 0) {
            iVar2 = 0;
        } else {
            piVar4 = *(int **)(unaff_r14 + 0x14);
            ar5_01 = 1;
            iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4, piVar4);
        }
        if (iVar2 < 0x40) {
            *(short *)(unaff_r14 + 0x6a) = *(short *)(unaff_r14 + 0x6a) + 1;
            if (cVar1 == '\x03') {
                if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x6a)) {
                LAB_8c264dce:
                    *(u16 *)(unaff_r14 + 0x60) = 0xffff;
                }
            } else if (*(int *)(unaff_r14 + 0x38) * 0x14 < (int)*(short *)(unaff_r14 + 0x6a))
                goto LAB_8c264dce;
            iVar2 = 0x60;
            if (*(short *)(unaff_r14 + 0x60) == 0)
                goto LAB_8c264e04;
            if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
                cri_sub_263c64(unaff_r14, ar5_01, a2, a3);
            } else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
                cri_sub_264ba0(unaff_r14, ar5_01, a2, a3);
            }
            iVar2 = 0x6d;
            if (*(char *)(unaff_r14 + 0x6d) == '\0')
                goto LAB_8c264e04;
            *(u16 *)(unaff_r14 + 0x60) = 0;
        }
    }
    iVar2 = 0x6a;
    *(u16 *)(unaff_r14 + 0x6a) = 0;
LAB_8c264e04:
    if ((*(int *)(unaff_r14 + 8) != 0) && (iVar2 = get_field_1_s8_263746(*(u32 *)(unaff_r14 + 8)), iVar2 == 4)) {
        if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
            cri_sub_263c64(unaff_r14, ar5_01, a2, a3);
        } else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
            cri_sub_264ba0(unaff_r14, ar5_01, a2, a3);
        }
        iVar2 = 0x6d;
        if (*(char *)(unaff_r14 + 0x6d) != '\0') {
            *(u16 *)(unaff_r14 + 0x60) = 0;
            iVar2 = 0x6a;
            *(u16 *)(unaff_r14 + 0x6a) = 0;
        }
    }
    return iVar2;
}

/*
 * memset_wrap_264ed0  0x8c264ed0
 * only calls memset
 * called by: cri_sub_25fb8c
 */
u32 memset_wrap_264ed0(void) {
    u32 uVar1;

    uVar1 = memset(0x8c4ba4a8, 0, (int)0x1a0);
    return uVar1;
}

/*
 * vram64_264eda  0x8c264eda
 * called by: cri_sub_25fbd0
 */
u32 *vram64_264eda(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 ar5_00;
    u32 *ar4_00;
    int ar4_01;
    int iVar1;

    iVar1 = 0;
    do {
        if (*(int *)(iVar1 * 0x34 + 0x8c4ba4a8) == 0)
            break;
        iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    if (iVar1 == 8) {
        ar4_00 = NULL;
    } else {
        ar4_00 = (u32 *)(iVar1 * 0x34 + 0x8c4ba4a8);
        memset(ar4_00, 0, 0x34);
        *ar4_00 = 1;
        ar5_00 = 0xac44;
        ar4_01 = (int)0x1f4;
        ar4_00[1] = iVar1;
        ar4_00[2] = 0;
        ar4_00[3] = 0;
        iVar1 = (int)ar4_00 + 0x32;
        irq_sub_260cf8(ar4_01, ar5_00, ar4_00 + 0xc, iVar1);
        memset(ar4_00 + 10, 0, 8);
    }
    return ar4_00;
}

/*
 * vram_sub_264f52  0x8c264f52
 * area name: sits between vram functions (same compilation unit)
 */
u32 vram_sub_264f52(int a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    uVar1 = irq_sub_260cf8(a2, a0 + 0x30, a0 + 0x32);
    return uVar1;
}

/*
 * vram_sub_264f6a  0x8c264f6a
 * area name: sits between vram functions (same compilation unit)
 * called by: cri_sub_25fc5c, cri_sub_25fc60
 */
u32 vram_sub_264f6a(u32 *a0) {
    u8 *puVar1;
    u32 in_r0;
    u32 uVar2;

    puVar1 = (&memset);
    if (a0 != NULL) {
        *a0 = 0;
        uVar2 = (*(code *)puVar1)(0, 0x34);
        return uVar2;
    }
    return in_r0;
}

/*
 * get_field_c_264f82  0x8c264f82
 * called by: cri_sub_25f1e8, cri_sub_25f1f4, cri_sub_25f306, cri_sub_25f312, cri_sub_25f830, cri_sub_25f83c,
 * cri_sub_25f950, cri_sub_25f95c (+12 more)
 */
u32 get_field_c_264f82(int a0, u32 a1) {
    return *(u32 *)(a0 + 0xc);
}

/*
 * vram_sub_264f86  0x8c264f86
 * area name: sits between vram functions (same compilation unit)
 */
u32 vram_sub_264f86(int a0, u32 a1, u32 a2, u32 a3) {
    if (*(int *)(a0 + 0xc) == 0) {
        *(u32 *)(a0 + 0x14) = 1;
        *(u32 *)(a0 + 0x18) = a1;
        *(u32 *)(a0 + 0x1c) = a2;
        *(u32 *)(a0 + 0x20) = a3;
        *(u32 *)(a0 + 0x24) = 0;
        return 1;
    }
    return 0;
}

/*
 * vram_sub_264fa4  0x8c264fa4
 * area name: sits between vram functions (same compilation unit)
 */
u32 vram_sub_264fa4(int a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    if (*(int *)(a0 + 0xc) == 0) {
        *(u32 *)(a0 + 0x14) = 2;
        *(u32 *)(a0 + 0x18) = a1;
        *(u32 *)(a0 + 0x1c) = a2;
        *(u32 *)(a0 + 0x20) = a3;
        *(u32 *)(a0 + 0x24) = s0;
        return 1;
    }
    return 0;
}

/*
 * vram_sub_264fc2  0x8c264fc2
 * area name: sits between vram functions (same compilation unit)
 * called by: cri_sub_260000, cri_sub_260006, cri_sub_26002c, cri_sub_260030
 */
u32 vram_sub_264fc2(int a0) {
    u32 in_r0;

    if (*(int *)(a0 + 0xc) == 0) {
        *(u32 *)(a0 + 0x10) = 0;
        *(u32 *)(a0 + 0xc) = 1;
    }
    return in_r0;
}

/*
 * vram_sub_264fd4  0x8c264fd4
 * area name: sits between vram functions (same compilation unit)
 * called by: cri_sub_25ff9c
 */
u32 vram_sub_264fd4(int a0) {
    u32 uVar1;

    *(u32 *)(a0 + 0xc) = 0;
    uVar1 = memset(a0 + 0x28, 0, 8);
    return uVar1;
}

/*
 * vram_sub_264fea  0x8c264fea
 * area name: sits between vram functions (same compilation unit)
 * called by: cri_sub_25ffb6, cri_sub_25ffba, cri_sub_260284, cri_sub_2602f4
 */
int vram_sub_264fea(int a0) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0xc);
    if (iVar1 == 3) {
        *(u32 *)(a0 + 0xc) = 0;
    }
    return iVar1;
}

/*
 * get_field_10_264ff8  0x8c264ff8
 * called by: cri_sub_260198
 */
u32 get_field_10_264ff8(int a0) {
    return *(u32 *)(a0 + 0x10);
}

/*
 * vram_sub_264ffc  0x8c264ffc
 * area name: sits between vram functions (same compilation unit)
 * called by: vram_sub_26501c
 */
u32 vram_sub_264ffc(void) {
    u32 in_r0;

    *(u32 *)(&DATA_8c2784a8) = 1;
    return in_r0;
}

/*
 * vram_sub_26501c  0x8c26501c
 * area name: sits between vram functions (same compilation unit)
 * called by: cri_sub_260284, cri_sub_2602f4, sd_sub_2650be
 */
u32 vram_sub_26501c(int a0) {
    u32 uVar1;
    int ar7_00;
    u32 ar4_00;
    u32 ar5_00;
    u32 ar6_00;

    if (*(int *)(a0 + 0xc) == 1) {
        *(u32 *)(a0 + 0xc) = 2;
    }
    uVar1 = *(u32 *)(a0 + 0xc);
    if (uVar1 == 2) {
        if (*(int *)(a0 + 0x14) == 1) {
            uVar1 = cri_sub_261058(*(u32 *)(a0 + 0x18), *(u32 *)(a0 + 0x1c), *(u32 *)(a0 + 0x20), a0 + 0x28,
                                   (int)*(short *)(a0 + 0x30), (int)*(short *)(a0 + 0x32));
            *(u32 *)(a0 + 0x10) = uVar1;
        } else {
            ar7_00 = a0 + 0x28;
            ar5_00 = *(u32 *)(a0 + 0x1c);
            ar6_00 = *(u32 *)(a0 + 0x20);
            ar4_00 = *(u32 *)(a0 + 0x18);
            uVar1 = cri_sub_261170(ar4_00, ar5_00, ar6_00, ar7_00, *(u32 *)(a0 + 0x24), a0 + 0x2c,
                                   (int)*(short *)(a0 + 0x30), (int)*(short *)(a0 + 0x32));
            *(u32 *)(a0 + 0x10) = uVar1;
            if ((int)uVar1 < 0) {
                uVar1 = ~(~uVar1 + 1 & 1) + 1;
            } else {
                uVar1 = uVar1 & 1;
            }
            if (uVar1 == 1) {
                uVar1 = vram_sub_264ffc();
            }
        }
        *(u32 *)(a0 + 0xc) = 3;
    }
    return uVar1;
}

/*
 * sd_sub_2650be  0x8c2650be
 * area name: in the sd library code range
 */
int sd_sub_2650be(int *a0) {
    int iVar1;
    int unaff_r13;
    int *piVar2;

    piVar2 = (int *)(unaff_r13 + (int)a0);
    do {
        iVar1 = *a0;
        if (iVar1 == 1) {
            iVar1 = vram_sub_26501c(a0);
        }
        a0 = a0 + 0xd;
    } while (a0 < piVar2);
    return iVar1;
}

/*
 * sd_sub_2650ec  0x8c2650ec
 * area name: in the sd library code range
 * called by: aica_sub_2655f4
 */
u32 sd_sub_2650ec(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int ar5_00;
    u32 ar4_00;
    u32 uVar2;

    puVar1 = (&DATA_8c2784c0);
    ar5_00 = (int)0x100;
    *(u32 *)(&DATA_8c2784c0) = 0x8c4ba677 & 0xffffffe0;
    ar4_00 = 0x8c4bb603 & 0xffffffe0;
    sd_sub_265ac8(0x8c4babe4, 0x40);
    uVar2 = 0x40;
    sd_sub_265ba8(0x8c4bb3e4, 0x40);
    sd_sub_266bd4(ar4_00);
    uVar2 = 0x8c4bb804;
    sd_sub_268920(0x8c4bb804, ar5_00, a2, a3);
    sd_sub_2667cc();
    *(u32 *)((int)0x1a8 + *(int *)puVar1) = 0;
    shinobi_sub_1f8d98(*(int *)puVar1 + (int)0x1ac, 0);
    g_8c4ba648 = *(u32 *)((int)0x1ac + *(int *)puVar1);
    return 0;
}

/*
 * sd_flush_host_commands  0x8c26518c
 * called by: sdSysFlushHostCmd, sdSysServer, sd_sub_2688e2
 */
int sd_flush_host_commands(u32 unused_a0, u32 unused_a1, u32 a2) {
    int iVar1;
    int iVar2;
    u8 *ar5_00;
    int iVar3;
    int iVar4;
    int iVar5;
    int ar5_01;
    u32 in_stack_ffffffdc;

    iVar1 = g_8c2784c0;
    ar5_00 = &stack0xffffffdc;
    if (g_8c2784c0 == 0) {
        ar5_01 = 0xd000001;
    } else {
        if (*(int *)(g_8c2784c0 + 0x160) != 1) {
            iVar2 = *(int *)(g_8c2784c0 + 0x1bc);
            aica_ram_read_byte(iVar2, &stack0xffffffdc);
            if ((char)in_stack_ffffffdc == '\0') {
                iVar4 = 0;
                iVar5 = *(int *)(g_8c2784c0 + 0x168);
                iVar3 = 0;
                if (0 < iVar5) {
                    do {
                        iVar2 = *(int *)(iVar1 + 0x174);
                        *(int *)(iVar1 + 0x174) = iVar2 + 1;
                        iVar2 = iVar2 * 0x1c + *(int *)(iVar1 + 0x164);
                        if (*(int *)(iVar1 + 0x174) == iVar5) {
                            *(u32 *)(iVar1 + 0x174) = 0;
                        }
                        if (*(int *)(iVar2 + 0x14) == 1) {
                            ar5_01 = sd_sub_266c48(iVar2);
                            if (ar5_01 != 0)
                                goto LAB_8c26522c;
                            iVar4 = iVar4 + 1;
                            if ((iVar4 == 0x20) || (*(int *)(g_8c2784c0 + 0x16c) == 0))
                                break;
                        }
                        iVar3 = iVar3 + 1;
                    } while (iVar3 < iVar5);
                }
                ar5_01 = sd_send_host_commands();
                goto LAB_8c26522c;
            }
        }
        ar5_01 = 0xb000003;
    }
LAB_8c26522c:
    if (ar5_01 != 0) {
        sd_set_last_error(sd_flush_host_commands, ar5_01, a2);
    }
    return ar5_01;
}

/*
 * aica_reg_265278  0x8c265278
 * called by: aica_ram_2684b8, aica_sub_2654f4, aica_sub_2654fc
 */
u32 aica_reg_265278(void) {
    u32 *ar4_00;
    u32 ar5_00;
    int iVar1;

    shinobi_sub_1f92c0(0xa0702c00, 0x8c4ba650, 4, 1, 1, 1);
    ar5_00 = 0xa0702c00;
    ar4_00 = 0x8c4ba650;
    g_8c4ba650 = g_8c4ba650 | 1;
    syG2CpuCopy(ar4_00, ar5_00, 4, 1, 1, 1);
    iVar1 = (int)0x100;
    do {
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0;
}

/*
 * aica_reg_2652f4  0x8c2652f4
 * called by: aica_sub_2654f4, aica_sub_2654fc
 */
u32 aica_reg_2652f4(void) {
    u8 *ar4_00;
    u32 ar5_00;
    int iVar1;

    shinobi_sub_1f92c0(0xa0702c00, (&DATA_8c2784b0), 4, 1, 1, 1);
    ar5_00 = 0xa0702c00;
    ar4_00 = (&DATA_8c2784b0);
    *(u32 *)(&DATA_8c2784b0) = *(u32 *)(&DATA_8c2784b0) & 0xfffffffe;
    syG2CpuCopy(ar4_00, ar5_00, 4, 1, 1, 1);
    iVar1 = (int)0x100;
    do {
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0;
}

/*
 * aica_sub_265374  0x8c265374
 * area name: sits between aica functions (same compilation unit)
 * called by: aica_sub_2669f4
 */
int aica_sub_265374(u32 a0, u32 a1, u32 a2) {
    int ar5_00;
    u8 *ar6_00;
    int *ar7_00;
    int in_stack_ffffffe4;
    int iStack_18;
    u32 uStack_14;
    char cStack_c;

    ar6_00 = &stack0xffffffe4;
    ar7_00 = &iStack_18;
    uStack_14 = a0;
    cStack_c = (char)a2;
    ar5_00 = aica_sub_2684f0(a1, (int)(char)a2, &stack0xffffffe4, ar7_00);
    if (ar5_00 == 0) {
        if ((in_stack_ffffffe4 == 0) || (iStack_18 < 1)) {
            ar5_00 = 0x7fffffff;
        } else {
            ar5_00 = sd_dma_start(uStack_14, in_stack_ffffffe4, ar6_00, ar7_00);
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(aica_sub_265374, ar5_00, ar6_00);
    }
    return ar5_00;
}

/*
 * aica_sub_2653e0  0x8c2653e0
 * area name: sits between aica functions (same compilation unit)
 * called by: aica_sub_2654fc
 */
int aica_sub_2653e0(u32 a0) {
    u8 *puVar1;
    u8 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    puVar2 = (&aica_ram_read_u8);
    puVar1 = (&DATA_8c2784c0);
    iVar4 = *(int *)(&DATA_8c2784c0);
    iVar3 = 0xd000001;
    if (iVar4 != 0) {
        iVar3 = (int)0x1d0;
        iVar5 = *(int *)(0x1cc + iVar4);
        iVar6 = iVar5 + 0x20;
        *(int *)(0x1cc + -0x1c + iVar4) = iVar6;
        (*(code *)puVar2)(iVar6, *(int *)puVar1 + iVar3);
        (*(code *)puVar2)(iVar5 + 0x21, *(int *)puVar1 + (int)0x1d1);
        if ((*(char *)(*(int *)puVar1 + (int)0x1d0) == '\x01') && (*(char *)((int)0x1d1 + *(int *)puVar1) == '\0')) {
            iVar5 = iVar5 + 0x23;
        } else {
            iVar5 = iVar5 + 0x22;
        }
        (*(code *)puVar2)(iVar5, (int)0x1d2 + *(int *)puVar1);
        iVar3 = (int)0xa0;
        *(u8 *)((int)0x1d3 + *(int *)puVar1) = 0;
        puVar2 = (&aica_ram_268618);
        aica_ram_268618(iVar3 + iVar6, *(int *)puVar1 + (int)0x1b4);
        (*(code *)puVar2)(0xa4 + iVar6, *(int *)puVar1 + (int)0x1b8);
        (*(code *)puVar2)(0xa8 + iVar6, *(int *)puVar1 + (int)0x1bc);
        (*(code *)puVar2)(0xac + iVar6, *(int *)puVar1 + (int)0x1c0);
        (*(code *)puVar2)(0xb0 + iVar6, *(int *)puVar1 + (int)0x1c4);
        (*(code *)puVar2)(0xb4 + iVar6, *(int *)puVar1 + (int)0x1c8);
        iVar3 = 0;
    }
    if (iVar3 != 0) {
        sd_set_last_error((&aica_sub_2653e0), iVar3);
    }
    return iVar3;
}

/*
 * aica_sub_2653e8  0x8c2653e8
 * area name: sits between aica functions (same compilation unit)
 */
int aica_sub_2653e8(u32 unused_a0, u32 unused_a1, u32 a2) {
    int iVar1;
    int ar5_00;
    int iVar2;
    int *unaff_r14;

    iVar1 = *unaff_r14;
    ar5_00 = 0;
    if (iVar1 == 0) {
        ar5_00 = 0xd000001;
    } else {
        iVar2 = *(int *)(iVar1 + 0x1cc);
        *(int *)(iVar1 + 0x1b0) = iVar2 + 0x20;
        aica_ram_read_u8(iVar2 + 0x20, *unaff_r14 + 0x1d0);
        aica_ram_read_u8(iVar2 + 0x21, *unaff_r14 + 0x1d1);
        if ((*(char *)(*unaff_r14 + 0x1d0) == '\x01') && (*(char *)(*unaff_r14 + 0x1d1) == '\0')) {
            iVar1 = iVar2 + 0x23;
        } else {
            iVar1 = iVar2 + 0x22;
        }
        aica_ram_read_u8(iVar1, *unaff_r14 + 0x1d2);
        *(u8 *)(*unaff_r14 + 0x1d3) = 0;
        aica_ram_268618(iVar2 + 0xc0, *unaff_r14 + 0x1b4);
        aica_ram_268618(iVar2 + 0xc4, *unaff_r14 + 0x1b8);
        aica_ram_268618(iVar2 + 200, *unaff_r14 + 0x1bc);
        aica_ram_268618(iVar2 + 0xcc, *unaff_r14 + 0x1c0);
        aica_ram_268618(iVar2 + 0xd0, *unaff_r14 + 0x1c4);
        aica_ram_268618(iVar2 + 0xd4, *unaff_r14 + 0x1c8);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(aica_sub_2653e0, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * aica_sub_2654f4  0x8c2654f4
 * area name: sits between aica functions (same compilation unit)
 * called by: aica_driver_upload
 */
int aica_sub_2654f4(int a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    int *piVar3;

    iVar2 = 0x7000103;
    if ((((a0 != 0) && (piVar3 = *(int **)(a0 + 8), iVar2 = 0x9000001, *piVar3 == 0x56524453)) &&
         (iVar2 = 0xb000002, (char)piVar3[1] == '\x01')) &&
        (*(char *)((int)piVar3 + 5) < '\x02')) {
        aica_reg_265278();
        aica_ram_2684b8();
        aica_sub_265704((&DATA_8c2784b8));
        sd_dma_setup(*(u32 *)(&DATA_8c2784b8), piVar3 + 8, piVar3[2], 0xffffffff, 0);
        sd_dma_start(*(u32 *)(&DATA_8c2784b8), 0);
        aica_reg_2652f4();
        puVar1 = (&aica_sub_2653e0);
        for (iVar2 = 0x200000; iVar2 != 0; iVar2 = iVar2 + -1) {
        }
        *(u32 *)(&DATA_8c2784c4) = 1;
        (*(code *)puVar1)();
        sd_sub_2659dc(a0);
        iVar2 = 0;
    }
    if (*(int *)(&DATA_8c2784b8) != 0) {
        sd_handle_release(*(u32 *)(&DATA_8c2784b8));
    }
    if (iVar2 != 0) {
        sd_set_last_error((&aica_sub_2654f4), iVar2);
    }
    return iVar2;
}

/*
 * aica_sub_2654fc  0x8c2654fc
 * area name: sits between aica functions (same compilation unit)
 */
int aica_sub_2654fc(u32 unused_a0, u32 unused_a1, int a2, u32 a3) {
    u32 ar4_00;
    int iVar1;
    u32 ar5_00;
    int unaff_r12;
    int *piVar2;
    int ar5_01;

    ar5_01 = 0;
    if (unaff_r12 == 0) {
        ar5_01 = 0x7000103;
    } else {
        piVar2 = *(int **)(unaff_r12 + 8);
        if (*piVar2 == 0x56524453) {
            if (((char)piVar2[1] == '\x01') && (*(char *)((int)piVar2 + 5) < '\x02')) {
                aica_reg_265278();
                aica_ram_2684b8();
                aica_sub_265704(&g_8c2784b8);
                a3 = 0xffffffff;
                a2 = piVar2[2];
                sd_dma_setup(0, piVar2 + 8, a2, 0xffffffff, 0);
                ar5_00 = 0;
                ar4_00 = 0;
                sd_dma_start(0, 0, a2, a3);
                aica_reg_2652f4();
                for (iVar1 = 0x200000; iVar1 != 0; iVar1 = iVar1 + -1) {
                }
                g_8c2784c4 = 1;
                aica_sub_2653e0(0);
                sd_sub_2659dc(unaff_r12);
            } else {
                ar5_01 = 0xb000002;
            }
        } else {
            ar5_01 = 0x9000001;
        }
    }
    if (ar5_01 != 0) {
        sd_set_last_error(aica_sub_2654f4, ar5_01, a2);
    }
    return ar5_01;
}

/*
 * aica_sub_2655f4  0x8c2655f4
 * area name: sits between aica functions (same compilation unit)
 * called by: aica_driver_upload
 */
int aica_sub_2655f4(u32 a0, u32 a1, u32 a2, u32 a3) {
    int ar5_00;

    ar5_00 = sd_sub_2650ec(0, a1, a2, a3);
    if (ar5_00 != 0) {
        sd_set_last_error(aica_sub_2655f4, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_dma_kick  0x8c265620
 * called by: sd_dma_start
 */
int sd_dma_kick(int a0, u32 a1, u32 a2, code *a3) {
    int ar5_00;
    int in_stack_ffffffe0;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        sdMemBlkGetStat(a0, &stack0xffffffe0, a2, a3);
        if (in_stack_ffffffe0 == 2) {
            ar5_00 = 0x6000001;
        } else {
            *(u32 *)(a0 + 0x18) = 0;
            ar5_00 = set_field_4_265f74(a0, 2);
            if (ar5_00 == 0) {
                a3 = sd_dma_end;
                *(int *)(g_8c2784c0 + 400) = a0;
                *(int *)(g_8c2784c0 + 0x188) = *(int *)(g_8c2784c0 + 0x188) + 1;
                a2 = *(u32 *)(a0 + 0xc);
                ar5_00 = sd_g2_transfer(*(u32 *)(a0 + 8), a1, a2, sd_dma_end, a0);
            }
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_dma_kick, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * aica_sub_265704  0x8c265704
 * area name: sits between aica functions (same compilation unit)
 * called by: aica_driver_upload, aica_sub_2654f4, aica_sub_2654fc, aica_sub_2669f4, game_sub_022504, sd_sub_266bd4,
 * sd_sub_266bda, sd_sub_26a246
 */
int aica_sub_265704(u32 *a0) {
    u32 r7;
    u32 ain0;
    int *dst;
    int ar6_00;
    int ar5_00;

    ar5_00 = 0;
    ain0 = 0x17c;
    dst = *(int **)(g_8c2784c0 + 0x17c);
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
        ar6_00 = 0;
    } else {
        r7 = 0x40;
        ar6_00 = 0;
        do {
            if (*dst != 1) {
                switch_jump(0x20, dst, &g_8c2784d0);
                ain0 = 0x184;
                *a0 = dst;
                *(int *)(g_8c2784c0 + 0x184) = *(int *)(g_8c2784c0 + 0x184) + 1;
                goto LAB_8c26574e;
            }
            ar6_00 = ar6_00 + 1;
            dst = dst + 8;
        } while (ar6_00 < 0x40);
        ar5_00 = 0x7000101;
        *a0 = 0;
        ain0 = 1;
    }
LAB_8c26574e:
    if (ar5_00 != 0) {
        sd_set_last_error(aica_sub_265704, ar5_00, ar6_00);
    }
    return ar5_00;
}

/*
 * aica_sub_26570c  0x8c26570c
 * area name: sits between aica functions (same compilation unit)
 */
int aica_sub_26570c(int *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain1) {
    int *in_r3;
    int *dst;
    int ar6_00;
    int unaff_r14;

    dst = *(int **)(*in_r3 + 0x17c);
    if (*in_r3 == 0) {
        unaff_r14 = 0xd000001;
        ar6_00 = 0;
    } else {
        unused_a3 = 0x40;
        ar6_00 = ain1;
        do {
            if (*dst != 1) {
                switch_jump(0x20, dst, &g_8c2784d0);
                *a0 = (int)dst;
                *(int *)(g_8c2784c0 + 0x184) = *(int *)(g_8c2784c0 + 0x184) + 1;
                goto LAB_8c26574e;
            }
            ar6_00 = ar6_00 + 1;
            dst = dst + 8;
        } while (ar6_00 < 0x40);
        unaff_r14 = 0x7000101;
        *a0 = ain1;
    }
LAB_8c26574e:
    if (unaff_r14 != 0) {
        sd_set_last_error(aica_sub_265704, unaff_r14, ar6_00);
    }
    return unaff_r14;
}

/*
 * sd_handle_release  0x8c265784
 * releases a sound handle and drops the driver's handle count (+0x184)
 * called by: aica_driver_upload, aica_sub_2654f4, aica_sub_2669f4, game_sub_022504, sd_sub_26a5de
 */
int sd_handle_release(int *a0) {
    u8 *puVar1;
    int iVar2;

    puVar1 = (&DATA_8c2784c0);
    iVar2 = 0xd000001;
    if (((*(int *)(&DATA_8c2784c0) != 0) && (iVar2 = 0x7000102, a0 != NULL)) && (*a0 == 1)) {
        iVar2 = (int)0x184;
        *a0 = 0;
        *(int *)(iVar2 + *(int *)puVar1) = *(int *)(iVar2 + *(int *)puVar1) + -1;
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        sd_set_last_error((&sd_handle_release), iVar2);
    }
    return iVar2;
}

/*
 * aica_sub_26578c  0x8c26578c
 * area name: sits between aica functions (same compilation unit)
 */
int aica_sub_26578c(int *a0, u32 unused_a1, int a2) {
    u32 r7;
    int *in_r2;
    int unaff_r14;

    if (*in_r2 == 0) {
        unaff_r14 = 0xd000001;
    } else {
        r7 = 0x7000102;
        if (a0 == NULL) {
            unaff_r14 = 0x7000102;
        } else if (*a0 == 1) {
            *a0 = a2;
            *(int *)(g_8c2784c0 + 0x184) = *(int *)(g_8c2784c0 + 0x184) + -1;
        } else {
            unaff_r14 = 0x7000102;
        }
    }
    if (unaff_r14 != 0) {
        sd_set_last_error(sd_handle_release, unaff_r14, a2);
    }
    return unaff_r14;
}

/*
 * aica_ram_2657ec  0x8c2657ec
 * called by: sd_dma_end, sd_dma_start
 */
int aica_ram_2657ec(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    int iVar2;
    int in_stack_ffffffdc;

    if (g_8c2784c0 == 0) {
        iVar2 = 0xd000001;
    } else if (a0 == 0) {
        iVar2 = 0x7000103;
    } else {
        sdMemBlkGetStat(a0, &stack0xffffffdc, a2, a3);
        if (in_stack_ffffffdc == 2) {
            iVar2 = 0x6000001;
        } else {
            g_8c4bd404 = 0;
            *(u32 *)(a0 + 0x18) = 0;
            iVar2 = a1 + -0x5f800000;
            a3 = *(u32 *)(a0 + 0xc);
            a2 = *(u32 *)(a0 + 8);
            uVar1 = *(u32 *)(g_8c2784c0 + 0x1ac);
            g_8c4bd404 = shinobi_sub_1f900c(uVar1, iVar2, a2, a3, 0, 1, 1, sd_dma_end, a0);
            if (g_8c4bd404 != 0) {
                sd_sub_2658e2();
            }
            iVar2 = set_field_4_265f74(a0, 2);
            if (iVar2 == 0) {
                ar5_00 = 0;
                *(int *)(g_8c2784c0 + 400) = a0;
                *(int *)(g_8c2784c0 + 0x188) = *(int *)(g_8c2784c0 + 0x188) + 1;
                uVar1 = *(u32 *)(g_8c2784c0 + 0x1ac);
                g_8c4bd404 = shinobi_sub_1f9194(uVar1, 0);
                if (g_8c4bd404 != 0) {
                    sd_sub_2658e2();
                }
            }
        }
    }
    if (iVar2 != 0) {
        sd_set_last_error(aica_ram_2657ec, iVar2, a2);
    }
    return iVar2;
}

/*
 * noop_2658de  0x8c2658de
 * called by: sd_dma_start
 */
u32 noop_2658de(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * sd_sub_2658e2  0x8c2658e2
 * area name: in the sd library code range
 * called by: aica_ram_2657ec
 */
u32 sd_sub_2658e2(void) {
    u32 in_r0;

    *(int *)(&DATA_8c2784f0) = *(int *)(&DATA_8c2784f0) + 1;
    return in_r0;
}

/*
 * sd_dma_end  0x8c26592c
 * G2 DMA end callback
 */
u32 sd_dma_end(int a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u8 in_MD;
    u8 bVar3;
    u8 in_RB;
    u8 bVar4;
    u8 in_BL;
    u8 bVar5;
    u8 in_FD;
    u8 bVar6;
    u8 in_M;
    u8 extraout_M;
    u8 extraout_M_00;
    u8 extraout_M_01;
    u8 extraout_M_02;
    u8 bVar7;
    u8 in_Q;
    u8 extraout_Q;
    u8 extraout_Q_00;
    u8 extraout_Q_01;
    u8 extraout_Q_02;
    u8 bVar8;
    u8 in_IMASK;
    u8 bVar9;
    u8 in_S;
    u8 extraout_S;
    u8 extraout_S_00;
    u8 extraout_S_01;
    u8 extraout_S_02;
    u8 bVar10;
    u8 in_T;
    u8 extraout_T;
    u8 extraout_T_00;
    u8 bVar11;
    u32 uStack_18;
    u32 uStack_14;
    int iStack_10;
    u32 uStack_c;

    puVar1 = (&sd_sub_2659dc);
    uStack_c = (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
    bVar5 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar3 = bVar5 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar9 = (u8)((((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4);
    bVar6 = (u8)((((u32)in_Q << 8 | (u32)in_M << 9 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar5 = (bVar5 & 0x10) >> 4;
    bVar4 = (bVar3 & 0x20) >> 5;
    bVar3 = ((bVar3 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    *(u32 *)(a0 + 4) = 1;
    (*(code *)puVar1)(a0, a1, a2, a3);
    puVar1 = (&DATA_8c2784c0);
    *(u32 *)((int)0x190 + *(int *)(&DATA_8c2784c0)) = 0;
    iVar2 = *(int *)puVar1;
    *(int *)(0x18c + iVar2) = *(int *)(0x18c + iVar2) + 1;
    sd_sub_265b68(&iStack_10, a1, a2);
    bVar11 = 0;
    bVar7 = extraout_M;
    bVar8 = extraout_Q;
    bVar10 = extraout_S;
    if (0 < iStack_10) {
        sd_dma_queue_pop(&uStack_18, &uStack_14);
        iVar2 = *(int *)(*(int *)puVar1 + (int)0x1a8);
        if (iVar2 == 0) {
            sd_dma_start(uStack_18, uStack_14, a2, a3);
            bVar7 = extraout_M_01;
            bVar8 = extraout_Q_01;
            bVar10 = extraout_S_01;
            bVar11 = extraout_T;
        } else if (iVar2 == 1) {
            aica_ram_2657ec(uStack_18, uStack_14, a2, a3);
            bVar7 = extraout_M_02;
            bVar8 = extraout_Q_02;
            bVar10 = extraout_S_02;
            bVar11 = extraout_T_00;
        } else {
            bVar11 = 0;
            bVar7 = extraout_M_00;
            bVar8 = extraout_Q_00;
            bVar10 = extraout_S_00;
        }
    }
    return (uStack_c & 0xf) << 4 |
           ((u32)bVar11 | (u32)bVar10 << 1 | (u32)bVar9 << 4 | (u32)bVar8 << 8 | (u32)bVar7 << 9 | (u32)bVar6 << 0xf |
            (u32)bVar5 << 0x1c | (u32)bVar4 << 0x1d | (u32)bVar3 << 0x1e) &
               (int)(int)0xffffff0f;
}

/*
 * sd_sub_2659dc  0x8c2659dc
 * area name: in the sd library code range
 * called by: aica_sub_2654f4, aica_sub_2654fc
 */
int sd_sub_2659dc(int a0) {
    int iVar1;
    int iVar2;

    iVar1 = 0;
    iVar2 = 0x7000103;
    if ((a0 != 0) && (iVar2 = iVar1, *(int *)(a0 + 0x10) != 0)) {
        if (*(int *)(a0 + 0x10) == -1) {
            *(u32 *)(a0 + 0x18) = 1;
        } else {
            (**(code **)(a0 + 0x10))(*(u32 *)(a0 + 0x14));
        }
    }
    if (iVar2 != 0) {
        sd_set_last_error((&sd_sub_2659dc), iVar2);
    }
    return iVar2;
}

/*
 * sd_sub_2659e4  0x8c2659e4
 * area name: in the sd library code range
 */
int sd_sub_2659e4(int a0, u32 a1, u32 a2, u32 a3) {
    int unaff_r13;
    char in_T;

    if (in_T == '\0') {
        if (*(int *)(a0 + 0x10) != 0) {
            if (*(int *)(a0 + 0x10) == -1) {
                *(u32 *)(a0 + 0x18) = 1;
            } else {
                (**(code **)(a0 + 0x10))(*(u32 *)(a0 + 0x14), a1, a2, a3);
            }
        }
    } else {
        unaff_r13 = 0x7000103;
    }
    if (unaff_r13 != 0) {
        sd_set_last_error(sd_sub_2659dc, unaff_r13, a2);
    }
    return unaff_r13;
}

/*
 * sdMemBlkGetStat  0x8c265a2c
 * named from the library error message "E1244:sdMemBlkGetStat return error in mwSndGetTrnsStat"
 * called by: aica_ram_2657ec, mwSndGetTrnsStat, sd_dma_kick, sd_dma_setup, sd_dma_start
 */
int sdMemBlkGetStat(int a0, u32 *a1, u32 a2, u32 a3) {
    int ar5_00;

    ar5_00 = 0;
    sd_dma_poll(a0, a1, a2, a3);
    if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (a1 == NULL) {
        ar5_00 = 0x7000203;
    } else {
        *a1 = *(u32 *)(a0 + 4);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sdMemBlkGetStat, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_265ab0  0x8c265ab0
 * area name: sits between sd functions (same compilation unit)
 * called by: game_sub_26b092, game_sub_26b132
 */
u32 sd_sub_265ab0(u32 *a0) {
    if (*(int *)(&DATA_8c2784c0) != 0) {
        *a0 = *(u32 *)((int)0x1a8 + *(int *)(&DATA_8c2784c0));
    }
    return 0;
}

/*
 * sd_sub_265ac8  0x8c265ac8
 * area name: sits between sd functions (same compilation unit)
 * called by: sd_sub_2650ec
 */
int sd_sub_265ac8(u32 a0, int a1) {
    u32 in_r0;
    int iVar1;
    int *ar6_00;
    u32 ar7_00;
    int iVar2;
    int ar5_00;

    ar7_00 = 0;
    ar6_00 = &g_8c2784c0;
    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else {
        *(u32 *)(g_8c2784c0 + 0x17c) = a0;
        iVar2 = 0;
        *(int *)(g_8c2784c0 + 0x180) = a1;
        *(u32 *)(g_8c2784c0 + 0x184) = 0;
        *(u32 *)(g_8c2784c0 + 0x188) = 0;
        *(u32 *)(g_8c2784c0 + 0x18c) = 0;
        in_r0 = 400;
        *(u32 *)(g_8c2784c0 + 400) = 0;
        g_8c4bd408 = g_8c2784c0 + 0x17c;
        iVar1 = 0;
        if (0 < a1) {
            do {
                in_r0 = switch_jump(0x20, *(int *)(*ar6_00 + 0x17c) + iVar1, &g_8c2784f8);
                iVar2 = iVar2 + 1;
                iVar1 = iVar1 + 0x20;
            } while (iVar2 < a1);
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_265ac8, ar5_00, ar6_00);
    }
    return ar5_00;
}

/*
 * sd_sub_265ace  0x8c265ace
 * area name: sits between sd functions (same compilation unit)
 */
int sd_sub_265ace(u32 a0, int a1, int *a2, int a3) {
    int iVar1;
    int iVar3;
    if (*a2 == 0) {
        a3 = 0xd000001;
    } else {
        *(u32 *)(*a2 + 0x17c) = a0;
        *(int *)(*a2 + 0x180) = a1;
        *(int *)(*a2 + 0x184) = a3;
        *(int *)(*a2 + 0x188) = a3;
        *(int *)(*a2 + 0x18c) = a3;
        *(int *)(*a2 + 400) = a3;
        g_8c4bd408 = *a2 + 0x17c;
        iVar1 = a3;
        iVar3 = a3;
        if (0 < a1) {
            do {
                switch_jump(0x20, *(int *)(*a2 + 0x17c) + iVar1, &g_8c2784f8);
                iVar3 = iVar3 + 1;
                iVar1 = iVar1 + 0x20;
            } while (iVar3 < a1);
        }
    }
    if (a3 != 0) {
        sd_set_last_error(sd_sub_265ac8, a3, a2);
    }
    return a3;
}

/*
 * sd_sub_265b68  0x8c265b68
 * area name: sits between sd functions (same compilation unit)
 * called by: sd_dma_end
 */
int sd_sub_265b68(u32 *a0, u32 unused_a1, u32 a2) {
    u32 in_r0;
    int ar5_00;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else {
        in_r0 = 0x1a4;
        *a0 = *(u32 *)(g_8c2784c0 + 0x1a4);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_265b68, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_265b6a  0x8c265b6a
 * area name: sits between sd functions (same compilation unit)
 */
int sd_sub_265b6a(u32 *a0, u32 unused_a1, u32 a2) {
    int *in_r3;
    int ar5_00;

    ar5_00 = 0;
    if (*in_r3 == 0) {
        ar5_00 = 0xd000001;
    } else {
        *a0 = *(u32 *)(*in_r3 + 0x1a4);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_265b68, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_265ba8  0x8c265ba8
 * area name: sits between sd functions (same compilation unit)
 * called by: sd_sub_2650ec
 */
int sd_sub_265ba8(u32 a0, int a1) {
    u32 in_r0;
    int iVar1;
    int *ar6_00;
    u32 ar7_00;
    int ar5_00;
    int iVar2;

    ar7_00 = 0;
    ar6_00 = &g_8c2784c0;
    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else {
        *(u32 *)(g_8c2784c0 + 0x194) = a0;
        iVar2 = 0;
        *(int *)(g_8c2784c0 + 0x198) = a1;
        *(u32 *)(g_8c2784c0 + 0x19c) = 0;
        *(u32 *)(g_8c2784c0 + 0x1a0) = 0;
        in_r0 = 0x1a4;
        *(u32 *)(g_8c2784c0 + 0x1a4) = 0;
        g_8c4bd418 = g_8c2784c0 + 0x194;
        iVar1 = 0;
        g_8c4bd410 = a0;
        g_8c4bd414 = a1;
        if (0 < a1) {
            do {
                in_r0 = switch_jump(8, *(int *)(*ar6_00 + 0x194) + iVar1, &g_8c278518);
                iVar2 = iVar2 + 1;
                iVar1 = iVar1 + 8;
            } while (iVar2 < a1);
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_265ba8, ar5_00, ar6_00);
    }
    return ar5_00;
}

/*
 * sd_sub_265bae  0x8c265bae
 * area name: sits between sd functions (same compilation unit)
 */
int sd_sub_265bae(u32 a0, int a1, int *a2, int a3) {
    int iVar1;
    int iVar3;
    if (*a2 == 0) {
        a3 = 0xd000001;
    } else {
        *(u32 *)(*a2 + 0x194) = a0;
        *(int *)(*a2 + 0x198) = a1;
        *(int *)(*a2 + 0x19c) = a3;
        *(int *)(*a2 + 0x1a0) = a3;
        *(int *)(*a2 + 0x1a4) = a3;
        g_8c4bd418 = *a2 + 0x194;
        iVar1 = a3;
        iVar3 = a3;
        g_8c4bd410 = a0;
        g_8c4bd414 = a1;
        if (0 < a1) {
            do {
                switch_jump(8, *(int *)(*a2 + 0x194) + iVar1, &g_8c278518);
                iVar3 = iVar3 + 1;
                iVar1 = iVar1 + 8;
            } while (iVar3 < a1);
        }
    }
    if (a3 != 0) {
        sd_set_last_error(sd_sub_265ba8, a3, a2);
    }
    return a3;
}

/*
 * sd_dma_queue_pop  0x8c265c50
 * called by: sd_dma_end, sd_dma_start
 */
int sd_dma_queue_pop(u32 *a0, u32 *a1) {
    int ar7_00;
    int ar5_00;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    ar7_00 = g_8c2784c0;
    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else {
        *a0 = *(u32 *)(*(int *)(g_8c2784c0 + 0x1a0) * 8 + *(int *)(g_8c2784c0 + 0x194));
        *a1 = *(u32 *)(*(int *)(g_8c2784c0 + 0x1a0) * 8 + *(int *)(g_8c2784c0 + 0x194) + 4);
        *(u32 *)(*(int *)(g_8c2784c0 + 0x1a0) * 8 + *(int *)(g_8c2784c0 + 0x194)) = 0;
        *(u32 *)(*(int *)(g_8c2784c0 + 0x1a0) * 8 + *(int *)(g_8c2784c0 + 0x194) + 4) = 0;
        *(int *)(g_8c2784c0 + 0x1a0) = *(int *)(g_8c2784c0 + 0x1a0) + 1;
        if (*(int *)(g_8c2784c0 + 0x1a0) == *(int *)(g_8c2784c0 + 0x198)) {
            *(u32 *)(g_8c2784c0 + 0x1a0) = 0;
        }
        *(int *)(g_8c2784c0 + 0x1a4) = *(int *)(g_8c2784c0 + 0x1a4) + -1;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_dma_queue_pop, ar5_00, &g_8c2784c0, ar7_00,
                          (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4);
    }
    return ar5_00;
}

/*
 * sd_dma_queue_push  0x8c265d38
 * called by: sd_dma_start
 */
int sd_dma_queue_push(u32 a0, u32 a1) {
    int ar7_00;
    int ar5_00;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    ar7_00 = g_8c2784c0;
    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (*(int *)(g_8c2784c0 + 0x1a4) < *(int *)(g_8c2784c0 + 0x198)) {
        *(u32 *)(*(int *)(g_8c2784c0 + 0x19c) * 8 + *(int *)(g_8c2784c0 + 0x194)) = a0;
        *(u32 *)(*(int *)(g_8c2784c0 + 0x19c) * 8 + *(int *)(g_8c2784c0 + 0x194) + 4) = a1;
        *(int *)(g_8c2784c0 + 0x19c) = *(int *)(g_8c2784c0 + 0x19c) + 1;
        if (*(int *)(g_8c2784c0 + 0x19c) == *(int *)(g_8c2784c0 + 0x198)) {
            *(u32 *)(g_8c2784c0 + 0x19c) = 0;
        }
        *(int *)(g_8c2784c0 + 0x1a4) = *(int *)(g_8c2784c0 + 0x1a4) + 1;
    } else {
        ar5_00 = 0x5000101;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_dma_queue_push, ar5_00, &g_8c2784c0, ar7_00,
                          (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4);
    }
    return ar5_00;
}

/*
 * sd_dma_poll  0x8c265e08
 * polls the G2 DMA when interrupts are masked
 * called by: mwSndGetTrnsStat, sdMemBlkGetStat, sdSysServer, sd_sub_2688e2
 */
u32 sd_dma_poll(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int *ar5_00;
    char in_IMASK;
    char in_S;
    u8 in_T;
    int aiStack_10[2];

    ar5_00 = aiStack_10;
    if ((((*(int *)(&DATA_8c2784c0) != 0) && ((u8)((in_T | in_S << 1) & 0xf0 | in_IMASK << 4) == 0xf0)) &&
         ((*(code *)(&syG2DmaGetStatus))(*(u32 *)((int)0x1ac + *(int *)(&DATA_8c2784c0)), aiStack_10, a2, a3),
          aiStack_10[0] == 0)) &&
        (*(int *)((int)0x190 + *(int *)(&DATA_8c2784c0)) != 0)) {
        (*(code *)(&syG2DmaEndHandler))(*(u32 *)((int)0x1ac + *(int *)(&DATA_8c2784c0)), ar5_00, a2, a3);
    }
    return 0;
}

/*
 * set_field_8_265e80  0x8c265e80
 * called by: sd_dma_setup
 */
u32 set_field_8_265e80(int a0, u32 a1) {
    *(u32 *)(a0 + 8) = a1;
    return 0;
}

/*
 * sd_sub_265e88  0x8c265e88
 * area name: in the sd library code range
 * called by: sd_dma_setup
 */
u32 sd_sub_265e88(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = 0x7000103;
    if (a0 != 0) {
        *(u32 *)(a0 + 0x10) = a1;
        *(u32 *)(a0 + 0x14) = a2;
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * sd_dma_setup  0x8c265ea0
 * called by: aica_driver_upload, aica_sub_2654f4, aica_sub_2654fc, aica_sub_2669f4, game_sub_022504, mwSndTrns_26abf0,
 * mwSndTrns_26aca8, sd_send_host_commands
 */
int sd_dma_setup(int a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;
    int ar5_00;
    int in_stack_ffffffe0;

    ar5_00 = 0;
    uVar1 = a2;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        sdMemBlkGetStat(a0, &stack0xffffffe0, a2, a3);
        if (in_stack_ffffffe0 == 2) {
            ar5_00 = 0x6000001;
        } else {
            set_field_4_265f74(a0, 0);
            set_field_8_265e80(a0, a1);
            set_field_c_265f7c(a0, a2);
            sd_sub_265e88(a0, a3, s0);
            set_field_4_265f74(a0, 0);
            uVar1 = s0;
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_dma_setup, ar5_00, uVar1);
    }
    return ar5_00;
}

/*
 * set_field_4_265f74  0x8c265f74
 * called by: aica_ram_2657ec, sd_dma_kick, sd_dma_setup
 */
u32 set_field_4_265f74(int a0, u32 a1) {
    *(u32 *)(a0 + 4) = a1;
    return 0;
}

/*
 * set_field_c_265f7c  0x8c265f7c
 * called by: sd_dma_setup
 */
u32 set_field_c_265f7c(int a0, u32 a1) {
    *(u32 *)(a0 + 0xc) = a1;
    return 0;
}

/*
 * sd_wait_idle_set_1a8  0x8c265f84
 * runs sdSysServer until the host-command queue is idle, then sets +0x1a8 = a0
 * called by: game_sub_0221c8, game_sub_26b092, game_sub_26b132
 */
u32 sd_wait_idle_set_1a8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 a4;

    puVar2 = (&sdSysServer);
    puVar1 = (&DATA_8c2784c0);
    a4 = a0;
    if (*(int *)(&DATA_8c2784c0) != 0) {
        while (*(int *)((int)0x190 + *(int *)puVar1) != 0) {
            (*(code *)puVar2)(a4, a1, a2, a3);
        }
        *(u32 *)((int)0x1a8 + *(int *)puVar1) = a0;
    }
    return 0;
}

/*
 * sd_dma_start  0x8c265ff4
 * called by: aica_sub_265374, aica_sub_2654f4, aica_sub_2654fc, mwSndTrns_26abf0, mwSndTrns_26aca8, sd_dma_end,
 * sd_send_host_commands
 */
int sd_dma_start(int a0, u32 a1, u32 a2, u32 a3) {
    u32 a5;
    int ar5_00;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;
    u32 in_stack_ffffffd4;
    u32 uVar1;
    u32 uStack_28;
    int iStack_24;
    u32 uStack_20;
    u32 uStack_1c;

    ar5_00 = 0;
    uStack_1c = (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
    uVar1 = in_stack_ffffffd4;
    uStack_20 = a1;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        sdMemBlkGetStat(a0, &iStack_24, a2, a3);
        uVar1 = in_stack_ffffffd4;
        if (iStack_24 == 2) {
            ar5_00 = 0x6000001;
        } else {
            g_8c4bd404 = 0;
            *(u32 *)(a0 + 0x18) = 0;
            if (*(int *)(g_8c2784c0 + 0x1a8) == 0) {
                ar5_00 = sd_dma_kick(a0, uStack_20, a2, a3);
                uVar1 = in_stack_ffffffd4;
                if (ar5_00 == 0) {
                    return 0;
                }
            } else if (((*(int *)(g_8c2784c0 + 0x1a8) == 1) &&
                        (ar5_00 = sd_dma_queue_push(a0, uStack_20), uVar1 = in_stack_ffffffd4, ar5_00 == 0)) &&
                       (*(int *)(g_8c2784c0 + 400) == 0)) {
                sd_dma_queue_pop(&stack0xffffffd4, &uStack_28);
                uVar1 = in_stack_ffffffd4;
                ar5_00 = aica_ram_2657ec(in_stack_ffffffd4, uStack_28, a2, a3);
                if ((ar5_00 == 0) && (a5 = uStack_28, *(int *)(a0 + 0x10) == -1)) {
                    while (*(int *)(a0 + 0x18) != 1) {
                        sdSysServer(in_stack_ffffffd4, a5, a2, a3);
                        noop_2658de();
                    }
                }
            }
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_dma_start, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266134  0x8c266134
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
int sd_sub_266134(int a0, u32 *a1, u32 a2) {
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_268618(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8) + 0x18, &stack0xfffffff0);
        *a1 = in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266134, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2661a4  0x8c2661a4
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
int sd_sub_2661a4(int a0, u8 *a1, u32 a2) {
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_read_u8(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8) + 0x11, &stack0xfffffff0);
        *a1 = (char)in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(&LAB_8c2664c4, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266214  0x8c266214
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
int sd_sub_266214(int a0, u32 *a1, u32 a2) {
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_sub_26868c(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8) + 0x1c, &stack0xfffffff0);
        *a1 = in_stack_fffffff0 & 0xffff;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266214, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266288  0x8c266288
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
int sd_sub_266288(int a0, u32 *a1, u32 a2) {
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_read_byte(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8), &stack0xfffffff0);
        *a1 = in_stack_fffffff0 & 0xff;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266288, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2662f8  0x8c2662f8
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
int sd_sub_2662f8(int a0, u8 *a1, u32 a2) {
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_read_u8(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8) + 0x10, &stack0xfffffff0);
        *a1 = (char)in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2662f8, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266368  0x8c266368
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
int sd_sub_266368(int a0, u8 *a1, u32 a2) {
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_read_u8(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8) + 2, &stack0xfffffff0);
        *a1 = (char)in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266368, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2663d8  0x8c2663d8
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
u32 sd_sub_2663d8(int a0, u16 *a1, u32 a2) {
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_268618(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8) + 8, &stack0xfffffff0);
        *a1 = (short)in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2663d8, ar5_00, a2);
    }
    return 0;
}

/*
 * sd_sub_266448  0x8c266448
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
int sd_sub_266448(int a0, u16 *a1, u32 a2) {
    int iVar1;
    int ar5_00;
    int in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_268618(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8) + 4, &stack0xfffffff0);
        iVar1 = in_stack_fffffff0;
        if (in_stack_fffffff0 < 0) {
            iVar1 = in_stack_fffffff0 + 3;
        }
        *a1 = (short)(iVar1 >> 2);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266448, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2664c4  0x8c2664c4
 * area name: in the sd library code range
 */
int sd_sub_2664c4(int a0, u8 *a1, u32 a2) {
    u32 in_r0;
    int ar5_00;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        sd_sub_266214(a0, a1 + 0x14, a2);
        sd_sub_266288(a0, a1 + 0x18, a2);
        *a1 = 0;
        a1[1] = 0;
        sd_sub_266620(a0, a1 + 2, a2);
        sd_sub_266368(a0, a1 + 3, a2);
        sd_sub_2663d8(a0, a1 + 6, a2);
        sd_sub_266448(a0, a1 + 8, a2);
        sd_sub_2662f8(a0, a1 + 4, a2);
        sd_sub_2661a4(a0, a1 + 5, a2);
        sd_sub_266134(a0, a1 + 0x10, a2);
        in_r0 = sd_sub_2665b0(a0, a1 + 0xc, a2);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2664c4, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2664d4  0x8c2664d4
 * area name: in the sd library code range
 */
int sd_sub_2664d4(u32 unused_a0, u32 unused_a1, u32 a2) {
    int *in_r2;
    int unaff_r11;
    int unaff_r13;
    u8 *unaff_r14;

    if (*in_r2 == 0) {
        unaff_r11 = 0xd000001;
    } else if (unaff_r13 == 0) {
        unaff_r11 = 0x7000103;
    } else {
        sd_sub_266214(unaff_r13, unaff_r14 + 0x14, a2);
        sd_sub_266288(unaff_r13, unaff_r14 + 0x18, a2);
        *unaff_r14 = (char)unaff_r11;
        unaff_r14[1] = (char)unaff_r11;
        sd_sub_266620(unaff_r13, unaff_r14 + 2, a2);
        sd_sub_266368(unaff_r13, unaff_r14 + 3, a2);
        sd_sub_2663d8(unaff_r13, unaff_r14 + 6, a2);
        sd_sub_266448(unaff_r13, unaff_r14 + 8, a2);
        sd_sub_2662f8(unaff_r13, unaff_r14 + 4, a2);
        sd_sub_2661a4(unaff_r13, unaff_r14 + 5, a2);
        sd_sub_266134(unaff_r13, unaff_r14 + 0x10, a2);
        sd_sub_2665b0(unaff_r13, unaff_r14 + 0xc, a2);
    }
    if (unaff_r11 != 0) {
        sd_set_last_error(&LAB_8c2664c4, unaff_r11, a2);
    }
    return unaff_r11;
}

/*
 * sd_sub_2665b0  0x8c2665b0
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
int sd_sub_2665b0(int a0, u32 *a1, u32 a2) {
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_2686d4(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8) + 0x14, &stack0xfffffff0);
        *a1 = in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2665b0, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266620  0x8c266620
 * area name: in the sd library code range
 * called by: sd_sub_2664c4, sd_sub_2664d4
 */
int sd_sub_266620(int a0, u8 *a1, u32 a2) {
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_read_u8(*(char *)(a0 + 1) * 0x20 + *(int *)(g_8c2784c0 + 0x1b8) + 1, &stack0xfffffff0);
        *a1 = (char)in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266620, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266690  0x8c266690
 * area name: in the sd library code range
 * called by: sd_sub_2666cc, sd_sub_266892
 */
int sd_sub_266690(int a0) {
    int iVar1;

    iVar1 = 0x7000103;
    if ((a0 != 0) && (iVar1 = 0, *(int *)(a0 + 4) != 1)) {
        iVar1 = 0x7000102;
    }
    if (iVar1 != 0) {
        sd_set_last_error((&sd_sub_266690), iVar1);
    }
    return iVar1;
}

/*
 * sd_sub_266694  0x8c266694
 * area name: in the sd library code range
 */
int sd_sub_266694(int a0, u32 unused_a1, u32 a2) {
    int ar5_00;
    char in_T;

    ar5_00 = 0;
    if (in_T == '\0') {
        if (*(int *)(a0 + 4) != 1) {
            ar5_00 = 0x7000102;
        }
    } else {
        ar5_00 = 0x7000103;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266690, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2666cc  0x8c2666cc
 * area name: in the sd library code range
 * called by: sd_sub_266ccc, sd_sub_266cce, sd_sub_26809c, sd_sub_26809e
 */
int sd_sub_2666cc(int a0, u32 unused_a1, u32 a2) {
    int ar5_00;

    ar5_00 = sd_sub_266690(a0);
    if (ar5_00 == 0) {
        *(u32 *)(a0 + 4) = 0;
    } else {
        sd_set_last_error(sd_sub_2666cc, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266708  0x8c266708
 * area name: in the sd library code range
 * called by: sd_sub_267470, sd_sub_2675d8, sd_sub_2680ec, sd_sub_2680ee
 */
int sd_sub_266708(int *a0, int a1) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = 0x7000101;
    iVar3 = *(int *)(&DATA_8c2784c0);
    if (a1 == 1) {
        iVar2 = 0;
        iVar3 = iVar3 + 8;
        do {
            if (*(int *)(iVar3 + 4) != 1)
                break;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 8;
        } while (iVar2 < 8);
    joined_r0x8c266742:
        if (iVar2 == 8) {
        LAB_8c266782:
            iVar3 = 0;
        }
    } else {
        if (a1 == 2) {
            iVar2 = 0;
            iVar3 = iVar3 + 0x48;
            do {
                if (*(int *)(iVar3 + 4) != 1)
                    break;
                iVar2 = iVar2 + 1;
                iVar3 = iVar3 + 8;
            } while (iVar2 < 8);
            goto joined_r0x8c266742;
        }
        iVar2 = 0x7fffffff;
        if (a1 != 3)
            goto LAB_8c2667a0;
        iVar2 = 0;
        iVar3 = 0x88 + iVar3;
        do {
            if (*(int *)(iVar3 + 4) != 1)
                break;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + 8;
        } while (iVar2 < 4);
        if (iVar2 == 4)
            goto LAB_8c266782;
    }
    if (iVar3 == 0) {
        *a0 = 0;
        iVar2 = iVar1;
    } else {
        *a0 = iVar3;
        *(u32 *)(iVar3 + 4) = 1;
        iVar2 = 0;
    }
LAB_8c2667a0:
    if (iVar2 != 0) {
        sd_set_last_error((&sd_sub_266708), iVar2);
    }
    return iVar2;
}

/*
 * sd_sub_266710  0x8c266710
 * area name: in the sd library code range
 */
int sd_sub_266710(int *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
    int iVar1;
    int ar6_00;
    int iVar2;
    int unaff_r13;

    ar6_00 = 8;
    iVar2 = unaff_r13;
    if (ain0 == 1) {
        iVar1 = g_8c2784c0 + 8;
        do {
            if (*(int *)(iVar1 + 4) != 1)
                break;
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 8;
        } while (iVar2 < 8);
    joined_r0x8c266742:
        if (iVar2 == 8) {
        LAB_8c266782:
            iVar1 = unaff_r13;
        }
    } else {
        if (ain0 == 2) {
            iVar1 = g_8c2784c0 + 0x48;
            do {
                if (*(int *)(iVar1 + 4) != 1)
                    break;
                iVar2 = iVar2 + 1;
                iVar1 = iVar1 + 8;
            } while (iVar2 < 8);
            goto joined_r0x8c266742;
        }
        if (ain0 != 3) {
            iVar2 = g_8c2784c0;
            iVar1 = 0x7fffffff;
            goto LAB_8c2667a0;
        }
        iVar1 = g_8c2784c0 + 0x88;
        iVar2 = 4;
        ar6_00 = unaff_r13;
        do {
            if (*(int *)(iVar1 + 4) != 1)
                break;
            ar6_00 = ar6_00 + 1;
            iVar1 = iVar1 + 8;
        } while (ar6_00 < 4);
        if (ar6_00 == 4)
            goto LAB_8c266782;
    }
    if (iVar1 == 0) {
        iVar1 = 0x7000101;
        *a0 = unaff_r13;
    } else {
        *a0 = iVar1;
        *(u32 *)(iVar1 + 4) = 1;
        iVar1 = unaff_r13;
    }
LAB_8c2667a0:
    if (iVar1 != 0) {
        sd_set_last_error(sd_sub_266708, iVar1, ar6_00);
    }
    return iVar1;
}

/*
 * sd_sub_2667cc  0x8c2667cc
 * area name: in the sd library code range
 * called by: sd_sub_2650ec
 */
u32 sd_sub_2667cc(void) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;

    puVar1 = (&DATA_8c2784c0);
    uVar4 = (u32)0xa8;
    uVar3 = 0;
    do {
        *(u8 *)(*(int *)puVar1 + uVar3 + 1) = 0;
        iVar2 = *(int *)puVar1 + uVar3;
        uVar3 = uVar3 + 8;
        *(u32 *)(iVar2 + 4) = 0;
    } while (uVar3 < uVar4);
    uVar3 = 0;
    do {
        uVar4 = uVar3 + 1;
        *(char *)(*(int *)puVar1 + uVar3 * 8 + 9) = (char)uVar3;
        *(u8 *)(uVar3 * 8 + *(int *)puVar1 + 8) = 1;
        uVar3 = uVar4;
    } while (uVar4 < 8);
    uVar3 = 0;
    do {
        uVar4 = uVar3 + 1;
        *(char *)(*(int *)puVar1 + uVar3 * 8 + 0x49) = (char)uVar3;
        *(u8 *)(uVar3 * 8 + *(int *)puVar1 + 0x48) = 2;
        uVar3 = uVar4;
    } while (uVar4 < 8);
    uVar3 = 0;
    do {
        iVar5 = uVar3 * 8;
        iVar2 = (int)0x88;
        *(char *)((int)0x88 + *(int *)puVar1 + iVar5 + 1) = (char)uVar3;
        uVar3 = uVar3 + 1;
        *(u8 *)(iVar5 + iVar2 + *(int *)puVar1) = 3;
    } while (uVar3 < 4);
    *(u8 *)(*(int *)puVar1 + 1) = 0;
    **(u8 **)puVar1 = 9;
    return 0;
}

/*
 * sd_sub_26686a  0x8c26686a
 * area name: in the sd library code range
 */
int sd_sub_26686a(u32 unused_a0, u32 a1, u32 a2) {
    int ar5_00;

    ar5_00 = 0;
    if (((char)a1 < '\0') || (' ' < (char)a1)) {
        ar5_00 = 0x3000001;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_26686a, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_26686e  0x8c26686e
 * area name: in the sd library code range
 */
int sd_sub_26686e(int a0, u32 unused_a1, u32 a2) {
    int ar5_00;

    ar5_00 = 0;
    if ((a0 < 0) || (0x20 < a0)) {
        ar5_00 = 0x3000001;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(&LAB_8c26686a, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266892  0x8c266892
 * area name: in the sd library code range
 */
int sd_sub_266892(int a0, u32 a1, u32 a2) {
    char cVar1;
    int iVar2;

    cVar1 = (char)a1;
    if ((cVar1 < '\0') || ('\x10' < cVar1)) {
        iVar2 = 0x3000001;
    } else {
        iVar2 = sd_sub_266690(a0);
        iVar2 = -((iVar2 == 0) - 1);
        if (iVar2 == 0) {
            return 0;
        }
        *(char *)(a0 + 2) = cVar1;
    }
    if (iVar2 != 0) {
        sd_set_last_error(sd_sub_266892, iVar2, a2);
    }
    return iVar2;
}

/*
 * aica_ram_2668fc  0x8c2668fc
 * called by: mwSnd_move_to_work_mem
 */
int aica_ram_2668fc(int a0, u32 a1, u32 a2, int a3) {
    u32 ar6_00;
    int iVar1;
    int ar5_00;

    ar5_00 = 0;
    if (((a1 & 3) == 0) && ((a2 & 3) == 0)) {
        iVar1 = a2 + 3;
        if (iVar1 < 0) {
            iVar1 = a2 + 6;
        }
        a3 = iVar1 >> 2;
        ar6_00 = 4;
        g_8c4bd404 = shinobi_sub_1f92c0(a0 + -0x5f800000, a1, 4, a3, 1, 1);
    } else {
        ar5_00 = 0x7fffffff;
        ar6_00 = a2;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(aica_ram_2668fc, ar5_00, ar6_00);
    }
    return ar5_00;
}

/*
 * sd_g2_transfer  0x8c266970
 * called by: sd_dma_kick
 */
int sd_g2_transfer(u32 a0, int a1, u32 a2, code *a3, u32 s0) {
    int ar5_00;
    u32 uVar1;
    code *ar7_00;
    int ar5_01;

    ar5_01 = 0;
    if (((a0 & 3) == 0) && ((a2 & 3) == 0)) {
        uVar1 = a2;
        if ((int)a2 < 0) {
            uVar1 = a2 + 3;
        }
        ar7_00 = (code *)((int)uVar1 >> 2);
        ar5_00 = a1 + -0x5f800000;
        uVar1 = 4;
        g_8c4bd404 = syG2CpuCopy(a0, ar5_00, 4, ar7_00, 1, 1);
        if ((a3 != NULL) && (a3 != (code *)0xffffffff)) {
            (*a3)(s0, ar5_00, uVar1, ar7_00);
        }
    } else {
        ar5_01 = 0x7fffffff;
        uVar1 = a2;
        ar7_00 = a3;
    }
    if (ar5_01 != 0) {
        sd_set_last_error(sd_g2_transfer, ar5_01, uVar1);
    }
    return ar5_01;
}

/*
 * aica_sub_2669f4  0x8c2669f4
 * area name: sits between aica functions (same compilation unit)
 * called by: game_sub_022504
 */
int aica_sub_2669f4(int a0, int a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    int ar5_00;
    int *piVar4;
    int ar4_00;

    ar4_00 = 0;
    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        piVar3 = *(int **)(a0 + 8);
        if (*piVar3 == 0x544c4d53) {
            aica_sub_265704(&stack0xffffffdc);
            iVar1 = piVar3[2];
            piVar4 = piVar3 + 8;
            if ((char)piVar3[1] < '\x01') {
                if (piVar3[4] != -1) {
                    piVar4 = piVar3 + 4;
                }
                ar5_00 = 0x9000002;
            }
            iVar2 = 0;
            if (0 < iVar1) {
                do {
                    if (-1 < piVar4[3]) {
                        a1 = piVar4[1];
                        a3 = piVar4[3];
                        a2 = piVar4[2];
                        ar5_00 = sd_sub_268320(*piVar4, a1, a2, a3);
                        if (ar5_00 != 0)
                            break;
                    }
                    if (0 < piVar4[5]) {
                        a3 = -1;
                        a2 = piVar4[5];
                        a1 = piVar4[4] + (int)piVar3;
                        ar5_00 = sd_dma_setup(ar4_00, a1, a2, 0xffffffff, 0);
                        if (ar5_00 != 0)
                            break;
                        a1 = *piVar4;
                        a2 = piVar4[1];
                        ar5_00 = aica_sub_265374(ar4_00, a1, a2);
                        if (ar5_00 != 0)
                            break;
                    }
                    iVar2 = iVar2 + 1;
                    piVar4 = piVar4 + 8;
                } while (iVar2 < iVar1);
            }
        } else {
            ar5_00 = 0x9000001;
        }
    }
    if (ar4_00 != 0) {
        sd_handle_release(ar4_00);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(aica_sub_2669f4, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_send_host_commands  0x8c266b08
 * G2 DMA of the command slots to sound RAM 0x13200
 * called by: sd_flush_host_commands
 */
u32 sd_send_host_commands(void) {
    int ar6_00;
    u8 *ar7_00;

    if (*(int *)(g_8c2784c0 + 0x15c) != 0) {
        *(u32 *)(g_8c2784c0 + 0x160) = 1;
        if ((*(u32 *)(g_8c2784c0 + 0x15c) & 1) != 0) {
            *(int *)(g_8c2784c0 + 0x15c) = *(int *)(g_8c2784c0 + 0x15c) + 1;
        }
        ar7_00 = (u8 *)0x8c266b70;
        ar6_00 = *(int *)(g_8c2784c0 + 0x15c) << 4;
        sd_dma_setup(*(u32 *)(g_8c2784c0 + 0x178), *(u32 *)(g_8c2784c0 + 0x158), ar6_00, (u8 *)0x8c266b70,
                     g_8c2784c0 + 0x158);
        sd_dma_start(*(u32 *)(g_8c2784c0 + 0x178), *(u32 *)(g_8c2784c0 + 0x1c4), ar6_00, ar7_00);
    }
    return 0;
}

/*
 * sd_sub_266b0e  0x8c266b0e
 * area name: in the sd library code range
 */
u32 sd_sub_266b0e(void) {
    int in_r0;
    int iVar1;
    int ar6_00;
    u8 *ar7_00;
    int *unaff_r14;

    if (*(int *)(in_r0 + *unaff_r14) != 0) {
        iVar1 = (int)0x160;
        *(u32 *)(iVar1 + *unaff_r14) = 1;
        if ((*(u32 *)(iVar1 + -4 + *unaff_r14) & 1) != 0) {
            *(int *)((int)0x15c + *unaff_r14) = *(int *)((int)0x15c + *unaff_r14) + 1;
        }
        iVar1 = (int)0x15c;
        ar6_00 = *(int *)(iVar1 + *unaff_r14) << 4;
        ar7_00 = (&DATA_8c266b70);
        (*(code *)(&sd_dma_setup))(*(u32 *)(iVar1 + 0x1c + *unaff_r14), *(u32 *)(iVar1 + -4 + *unaff_r14), ar6_00,
                                   (&DATA_8c266b70), (int)0x158 + *unaff_r14);
        (*(code *)(&sd_dma_start))(*(u32 *)(0x1c4 + -0x4c + *unaff_r14), *(u32 *)((int)0x1c4 + *unaff_r14), ar6_00,
                                   ar7_00);
    }
    return 0;
}

/*
 * sd_sub_266b76  0x8c266b76
 * area name: in the sd library code range
 */
int sd_sub_266b76(u32 unused_a0, u32 a1) {
    int iVar1;
    int iVar2;
    int *unaff_r14;

    sd_sub_2687c8(*(u32 *)((int)0x1bc + *unaff_r14), a1);
    for (iVar2 = 0; iVar1 = (int)0x15c, iVar2 < *(int *)(iVar1 + *unaff_r14); iVar2 = iVar2 + 1) {
        *(u8 *)(iVar2 * 0x10 + *(int *)((int)0x158 + *unaff_r14)) = 0;
    }
    *(u32 *)(iVar1 + *unaff_r14) = 0;
    *(u32 *)(iVar1 + 4 + *unaff_r14) = 0;
    return iVar1 + 4;
}

/*
 * sd_sub_266bd4  0x8c266bd4
 * area name: in the sd library code range
 * called by: sd_sub_2650ec
 */
int sd_sub_266bd4(u32 a0) {
    u8 *puVar1;
    u32 *puVar2;
    u8 *puVar3;
    int iVar4;

    puVar3 = (&memset);
    puVar2 = 0x8c4bd420;
    puVar1 = (&DATA_8c2784c0);
    iVar4 = 0xd000001;
    if (*(int *)(&DATA_8c2784c0) != 0) {
        iVar4 = (int)0x200;
        *(u32 *)((int)0x158 + *(int *)(&DATA_8c2784c0)) = a0;
        *puVar2 = a0;
        (*(code *)puVar3)(0, iVar4);
        *(u32 *)((int)0x160 + *(int *)puVar1) = 0;
        iVar4 = aica_sub_265704(*(int *)puVar1 + (int)0x178);
    }
    if (iVar4 != 0) {
        sd_set_last_error((&sd_sub_266bd4), iVar4);
    }
    return iVar4;
}

/*
 * sd_sub_266bda  0x8c266bda
 * area name: in the sd library code range
 */
int sd_sub_266bda(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar5_00;
    int *unaff_r13;
    int ar5_01;

    if (*unaff_r13 == 0) {
        ar5_01 = 0xd000001;
    } else {
        a2 = 0x200;
        *(u32 *)(*unaff_r13 + 0x158) = a0;
        ar5_00 = 0;
        g_8c4bd420 = a0;
        memset(a0, 0, 0x200);
        *(u32 *)(*unaff_r13 + 0x160) = 0;
        ar5_01 = aica_sub_265704(*unaff_r13 + 0x178);
    }
    if (ar5_01 != 0) {
        sd_set_last_error(sd_sub_266bd4, ar5_01, a2);
    }
    return ar5_01;
}

/*
 * sd_sub_266c48  0x8c266c48
 * area name: in the sd library code range
 * called by: sd_flush_host_commands
 */
int sd_sub_266c48(u32 *a0) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u8 *puVar5;

    iVar2 = (int)0x15c;
    iVar3 = *(int *)(&DATA_8c2784c0);
    iVar4 = 0xa000001;
    if (*(int *)(iVar2 + iVar3) < 0x20) {
        iVar4 = *(int *)(iVar2 + iVar3);
        *(int *)(iVar2 + iVar3) = iVar4 + 1;
        puVar1 = (&memmove);
        puVar5 = (u8 *)(iVar4 * 0x10 + *(int *)(iVar2 + -4 + iVar3));
        *puVar5 = (char)*a0;
        (*(code *)puVar1)(puVar5 + 2, a0 + 1, 0xe, 0);
        puVar1 = (&DATA_8c2784c0);
        iVar4 = (int)0x16c;
        a0[5] = 0;
        *(int *)(iVar4 + *(int *)puVar1) = *(int *)(iVar4 + *(int *)puVar1) + -1;
        iVar4 = 0;
    }
    if (iVar4 != 0) {
        sd_set_last_error((&sd_sub_266c48), iVar4);
    }
    return iVar4;
}

/*
 * sd_sub_266c54  0x8c266c54
 * area name: in the sd library code range
 */
int sd_sub_266c54(u32 unused_a0, u32 unused_a1, u32 a2, u32 unused_a3, int ain0) {
    int in_r2;
    int *in_r3;
    int iVar1;
    int iVar2;
    u8 *puVar3;
    u32 *unaff_r13;
    int ar5_00;

    iVar1 = *in_r3;
    ar5_00 = 0;
    if (*(int *)(ain0 + iVar1) < in_r2) {
        iVar2 = *(int *)(ain0 + iVar1);
        *(int *)(ain0 + iVar1) = iVar2 + 1;
        puVar3 = (u8 *)(iVar2 * 0x10 + *(int *)(ain0 + -4 + iVar1));
        *puVar3 = (char)*unaff_r13;
        a2 = 0xe;
        memmove(puVar3 + 2, unaff_r13 + 1, 0xe);
        unaff_r13[5] = 0;
        *(int *)(g_8c2784c0 + 0x16c) = *(int *)(g_8c2784c0 + 0x16c) + -1;
    } else {
        ar5_00 = 0xa000001;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266c48, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266ccc  0x8c266ccc
 * area name: in the sd library code range
 * called by: thunk_FUN_8c266ccc
 */
int sd_sub_266ccc(int a0, u32 unused_a1, u32 a2) {
    int in_r0;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        in_r0 = sd_sub_2666cc(a0, unused_a1, a2);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266ccc, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_266cce  0x8c266cce
 * area name: in the sd library code range
 */
int sd_sub_266cce(int a0, u32 unused_a1, u32 a2) {
    int *in_r2;
    int ar5_00;

    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        ar5_00 = sd_sub_2666cc(a0, unused_a1, a2);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266ccc, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * thunk_FUN_8c266ccc  0x8c266d1c
 * called by: sd_sub_26a5de
 */
u32 thunk_FUN_8c266ccc(void) {
    u32 uVar1;

    uVar1 = sd_sub_266ccc();
    return uVar1;
}

/*
 * sd_sub_266d28  0x8c266d28
 * area name: in the sd library code range
 * called by: sd_sub_267250, sd_sub_267264, thunk_FUN_8c266d28
 */
int sd_sub_266d28(int a0, u32 a1, int *a2, u8 *a3) {
    int iVar1;
    int *piVar2;
    int *piVar3;
    int ar5_00;
    int in_stack_ffffffd8;
    int iStack_1c;
    u8 auStack_18[8];

    ar5_00 = 0;
    piVar2 = a2;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (a2 == NULL) {
        ar5_00 = 0x7000203;
    } else {
        piVar3 = (int *)((short)*(char *)(a0 + 1) * 0x2c + g_8c2784c0 + 0xa8);
        aica_ram_268618(*(int *)(g_8c2784c0 + 0x1b8) + *(char *)(a0 + 1) * 0x40 + (char)a1 * 0x20 + 0x418,
                        &stack0xffffffd8);
        a3 = auStack_18;
        piVar2 = &iStack_1c;
        aica_sub_2684f0(0x52535053, (int)*(char *)((int)piVar3 + (char)a1 + 7), piVar2, a3);
        iVar1 = *piVar3;
        if (iVar1 == 1) {
            in_stack_ffffffd8 = in_stack_ffffffd8 * 2;
        } else if ((iVar1 != 0) && (iVar1 == 2)) {
            in_stack_ffffffd8 = (int)(in_stack_ffffffd8 + (u32)(in_stack_ffffffd8 < 0)) >> 1;
        }
        *a2 = in_stack_ffffffd8;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266d28, ar5_00, piVar2);
    }
    return ar5_00;
}

/*
 * thunk_FUN_8c266d28  0x8c266e20
 * called by: mwSndGetPlayPos
 */
u32 thunk_FUN_8c266d28(void) {
    u32 uVar1;

    uVar1 = sd_sub_266d28();
    return uVar1;
}

/*
 * sd_sub_266e2c  0x8c266e2c
 * area name: in the sd library code range
 * called by: sd_sub_267250, sd_sub_267264
 */
u32 sd_sub_266e2c(int a0, u32 a1, u8 *a2, u32 a3) {
    int ar6_00;
    u32 uVar1;
    u8 auStack_10[4];
    u8 *puStack_c;

    ar6_00 = *(int *)(&DATA_8c2784c0);
    uVar1 = 0xd000001;
    if (((ar6_00 != 0) && (uVar1 = 0x7000103, a0 != 0)) && (uVar1 = 0x7000203, a2 != NULL)) {
        puStack_c = a2;
        (*(code *)(&aica_ram_read_u8))(*(char *)(a0 + 1) * 0x40 + (int)0x400 + *(int *)(0x1b8 + ar6_00) +
                                           (char)a1 * 0x20 + 0x11,
                                       auStack_10, ar6_00, a3);
        *puStack_c = auStack_10[0];
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * sd_sub_266ea8  0x8c266ea8
 * area name: in the sd library code range
 * called by: sd_sub_267250, sd_sub_267264
 */
int sd_sub_266ea8(int a0, u32 a1, u32 *a2) {
    int iVar1;
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    iVar1 = g_8c2784c0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (a2 == NULL) {
        ar5_00 = 0x7000203;
    } else {
        aica_ram_2686d4(*(char *)(a0 + 1) * 0x40 + *(int *)(g_8c2784c0 + 0x1b8) + (char)a1 * 0x20 + 0x41c,
                        &stack0xfffffff0);
        *a2 = in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266ea8, ar5_00, iVar1);
    }
    return ar5_00;
}

/*
 * sd_sub_266f38  0x8c266f38
 * area name: in the sd library code range
 * called by: mwSndGetPlayPos, sd_sub_267250, sd_sub_267264
 */
int sd_sub_266f38(int a0, u32 a1, u32 *a2) {
    int iVar1;
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    iVar1 = g_8c2784c0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (a2 == NULL) {
        ar5_00 = 0x7000203;
    } else {
        aica_ram_read_byte(*(char *)(a0 + 1) * 0x40 + *(int *)(g_8c2784c0 + 0x1b8) + 0x400 + (char)a1 * 0x20,
                           &stack0xfffffff0);
        *a2 = in_stack_fffffff0 & 0xff;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266f38, ar5_00, iVar1);
    }
    return ar5_00;
}

/*
 * sd_sub_266fc8  0x8c266fc8
 * area name: in the sd library code range
 * called by: sd_sub_267250, sd_sub_267264
 */
int sd_sub_266fc8(int a0, u32 a1, u8 *a2) {
    int iVar1;
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    iVar1 = g_8c2784c0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (a2 == NULL) {
        ar5_00 = 0x7000203;
    } else {
        aica_ram_read_u8(*(char *)(a0 + 1) * 0x40 + *(int *)(g_8c2784c0 + 0x1b8) + (char)a1 * 0x20 + 0x410,
                         &stack0xfffffff0);
        *a2 = (char)in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_266fc8, ar5_00, iVar1);
    }
    return ar5_00;
}

/*
 * sd_sub_267058  0x8c267058
 * area name: in the sd library code range
 * called by: sd_sub_267250, sd_sub_267264
 */
int sd_sub_267058(int a0, u32 a1, char *a2) {
    char cVar1;
    int iVar2;
    char cVar3;
    char *pcVar4;
    int ar5_00;
    u32 in_stack_ffffffe0;

    ar5_00 = 0;
    pcVar4 = a2;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (a2 == NULL) {
        ar5_00 = 0x7000203;
    } else {
        iVar2 = (short)*(char *)(a0 + 1) * 0x2c + g_8c2784c0;
        aica_ram_read_u8(*(int *)(g_8c2784c0 + 0x1b8) + *(char *)(a0 + 1) * 0x40 + (char)a1 * 0x20 + 0x402,
                         &stack0xffffffe0);
        cVar3 = (char)in_stack_ffffffe0;
        cVar1 = *(char *)(iVar2 + 0xad);
        if ((cVar1 != '\x01') && (cVar1 == '\x02')) {
            if ((char)a1 == '\0') {
                cVar3 = cVar3 + '@';
            } else if ((char)a1 == '\x01') {
                if (cVar3 == '\0') {
                    cVar3 = -1;
                }
                cVar3 = cVar3 + -0x40;
            }
            cVar3 = cVar3 * '\x02';
        }
        *a2 = cVar3;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267058, ar5_00, pcVar4);
    }
    return ar5_00;
}

/*
 * sd_sub_267130  0x8c267130
 * area name: in the sd library code range
 * called by: sd_sub_267250, sd_sub_267264
 */
int sd_sub_267130(int a0, u32 a1, u16 *a2) {
    int iVar1;
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    iVar1 = g_8c2784c0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (a2 == NULL) {
        ar5_00 = 0x7000203;
    } else {
        aica_ram_268618(*(char *)(a0 + 1) * 0x40 + *(int *)(g_8c2784c0 + 0x1b8) + (char)a1 * 0x20 + 0x408,
                        &stack0xfffffff0);
        *a2 = (short)in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267130, ar5_00, iVar1);
    }
    return ar5_00;
}

/*
 * sd_sub_2671c0  0x8c2671c0
 * area name: in the sd library code range
 * called by: sd_sub_267250, sd_sub_267264
 */
int sd_sub_2671c0(int a0, u32 a1, u16 *a2) {
    int iVar1;
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    iVar1 = g_8c2784c0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (a2 == NULL) {
        ar5_00 = 0x7000203;
    } else {
        aica_ram_268618(*(char *)(a0 + 1) * 0x40 + *(int *)(g_8c2784c0 + 0x1b8) + (char)a1 * 0x20 + 0x404,
                        &stack0xfffffff0);
        *a2 = (short)in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2671c0, ar5_00, iVar1);
    }
    return ar5_00;
}

/*
 * sd_sub_267250  0x8c267250
 * area name: in the sd library code range
 * called by: thunk_FUN_8c267250
 */
int sd_sub_267250(int a0, u32 a1, u8 *a2) {
    u8 *puVar1;
    int iVar2;

    iVar2 = 0xd000001;
    if ((*(int *)(&DATA_8c2784c0) != 0) && (iVar2 = 0x7000103, a0 != 0)) {
        sd_sub_266ea8(a0, a1, a2 + 0x14);
        sd_sub_266f38(a0, a1, a2 + 0x18);
        puVar1 = (&sd_sub_2673f0);
        *a2 = 0;
        a2[1] = 0;
        (*(code *)puVar1)(a0, a1, a2 + 2);
        sd_sub_267058(a0, a1, a2 + 3);
        sd_sub_267130(a0, a1, a2 + 6);
        sd_sub_2671c0(a0, a1, a2 + 8);
        sd_sub_266fc8(a0, a1, a2 + 4);
        sd_sub_266e2c(a0, a1, a2 + 5);
        sd_sub_266d28(a0, a1, a2 + 0x10);
        sd_sub_267360(a0, a1, a2 + 0xc);
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        sd_set_last_error((&sd_sub_2664c4), iVar2);
    }
    return iVar2;
}

/*
 * sd_sub_267264  0x8c267264
 * area name: in the sd library code range
 */
int sd_sub_267264(u32 unused_a0, u32 unused_a1, u8 *a2, u32 a3) {
    int *in_r2;
    int unaff_r10;
    u32 unaff_r12;
    int unaff_r13;
    u8 *unaff_r14;

    if (*in_r2 == 0) {
        unaff_r10 = 0xd000001;
    } else if (unaff_r13 == 0) {
        unaff_r10 = 0x7000103;
    } else {
        sd_sub_266ea8(unaff_r13, unaff_r12, unaff_r14 + 0x14);
        sd_sub_266f38(unaff_r13, unaff_r12, unaff_r14 + 0x18);
        *unaff_r14 = (char)unaff_r10;
        unaff_r14[1] = (char)unaff_r10;
        sd_sub_2673f0(unaff_r13, unaff_r12, unaff_r14 + 2);
        sd_sub_267058(unaff_r13, unaff_r12, unaff_r14 + 3);
        sd_sub_267130(unaff_r13, unaff_r12, unaff_r14 + 6);
        sd_sub_2671c0(unaff_r13, unaff_r12, unaff_r14 + 8);
        sd_sub_266fc8(unaff_r13, unaff_r12, unaff_r14 + 4);
        sd_sub_266e2c(unaff_r13, unaff_r12, unaff_r14 + 5, a3);
        sd_sub_266d28(unaff_r13, unaff_r12, unaff_r14 + 0x10, a3);
        a2 = unaff_r14 + 0xc;
        sd_sub_267360(unaff_r13, unaff_r12, a2);
    }
    if (unaff_r10 != 0) {
        sd_set_last_error(&LAB_8c2664c4, unaff_r10, a2);
    }
    return unaff_r10;
}

/*
 * thunk_FUN_8c267250  0x8c267354
 * called by: mwSndGetPan, mwSndGetVol
 */
u32 thunk_FUN_8c267250(u32 unused_a0, u32 a1) {
    u32 uVar1;

    uVar1 = sd_sub_267250();
    return uVar1;
}

/*
 * sd_sub_267360  0x8c267360
 * area name: in the sd library code range
 * called by: sd_sub_267250, sd_sub_267264
 */
int sd_sub_267360(int a0, u32 a1, u32 *a2) {
    int iVar1;
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    iVar1 = g_8c2784c0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (a2 == NULL) {
        ar5_00 = 0x7000203;
    } else {
        aica_ram_2686d4(*(char *)(a0 + 1) * 0x40 + *(int *)(g_8c2784c0 + 0x1b8) + (char)a1 * 0x20 + 0x414,
                        &stack0xfffffff0);
        *a2 = in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267360, ar5_00, iVar1);
    }
    return ar5_00;
}

/*
 * sd_sub_2673f0  0x8c2673f0
 * area name: in the sd library code range
 * called by: sd_sub_267264
 */
int sd_sub_2673f0(int a0, u32 a1, u8 *a2) {
    int iVar1;
    int ar5_00;
    u32 in_stack_fffffff0;

    ar5_00 = 0;
    iVar1 = g_8c2784c0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        aica_ram_read_u8(*(char *)(a0 + 1) * 0x40 + *(int *)(g_8c2784c0 + 0x1b8) + (char)a1 * 0x20 + 0x401,
                         &stack0xfffffff0);
        *a2 = (char)in_stack_fffffff0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2673f0, ar5_00, iVar1);
    }
    return ar5_00;
}

/*
 * sd_sub_267470  0x8c267470
 * area name: in the sd library code range
 */
int sd_sub_267470(int *a0, u32 unused_a1, int a2, int a3, u32 s0, u32 s4) {
    u32 *puVar1;
    u8 *puVar2;
    int iVar3;
    int ar5_00;
    u32 *puVar4;
    u8 auStackY_a0[128];

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (((char)s0 < '\x01') || ('\x02' < (char)s0)) {
    LAB_8c2674f6:
        ar5_00 = 0x3000001;
    } else {
        if (((int)&s0 + 1U & 3) == 0) {
            puVar4 = (u32 *)((int)&s0 + 1);
        } else {
            puVar4 = &s4;
        }
        for (a2 = 0; a2 < (char)s0; a2 = a2 + 1) {
            puVar1 = puVar4 + 1;
            if (((u32)puVar1 & 3) != 0) {
                puVar1 = puVar4 + 2;
            }
            puVar4 = puVar1 + -1;
            if (((u32)puVar4 & 3) != 0) {
                puVar4 = puVar1 + -2;
            }
            (&stack0xffffffe0)[a2] = (char)*puVar4;
            a3 = (int)(char)(&stack0xffffffe0)[a2];
            if ((a3 < 0) || (0xf < a3))
                goto LAB_8c2674f6;
            puVar4 = puVar1;
        }
        puVar2 = &stack0xffffffe0 + (char)s0;
        if (puVar2 < &stack0xffffffe2) {
            a2 = -1;
            do {
                *puVar2 = 0xff;
                puVar2 = puVar2 + 1;
            } while (puVar2 < &stack0xffffffe2);
        }
        ar5_00 = sd_sub_266708(a0, 3);
        if (ar5_00 == 0) {
            puVar4 = (u32 *)(g_8c2784c0 + 0xa8 + (short)*(char *)(*a0 + 1) * 0x2c);
            *puVar4 = 1;
            *(char *)(puVar4 + 1) = (char)s0;
            sd_sub_267d88(*a0, (int)(char)s0);
            sd_sub_267924(*a0, 0);
            for (iVar3 = 0; iVar3 < (char)s0; iVar3 = iVar3 + 1) {
                *(u8 *)((int)puVar4 + iVar3 + 7) = (&stack0xffffffe0)[iVar3];
                puVar4[iVar3 + 3] = 1;
                puVar4[iVar3 + 5] = 0;
                puVar4[iVar3 + 9] = 0;
            }
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267470, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2675d8  0x8c2675d8
 * area name: in the sd library code range
 * called by: sd_sub_26a246
 */
int sd_sub_2675d8(int *a0, u32 unused_a1, int a2, int a3, u32 s0, u32 s4) {
    u32 *puVar1;
    u8 *puVar2;
    int iVar3;
    int ar5_00;
    u32 *puVar4;
    u8 auStackY_a0[128];

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (((char)s0 < '\x01') || ('\x02' < (char)s0)) {
    LAB_8c26765e:
        ar5_00 = 0x3000001;
    } else {
        if (((int)&s0 + 1U & 3) == 0) {
            puVar4 = (u32 *)((int)&s0 + 1);
        } else {
            puVar4 = &s4;
        }
        for (a2 = 0; a2 < (char)s0; a2 = a2 + 1) {
            puVar1 = puVar4 + 1;
            if (((u32)puVar1 & 3) != 0) {
                puVar1 = puVar4 + 2;
            }
            puVar4 = puVar1 + -1;
            if (((u32)puVar4 & 3) != 0) {
                puVar4 = puVar1 + -2;
            }
            (&stack0xffffffe0)[a2] = (char)*puVar4;
            a3 = (int)(char)(&stack0xffffffe0)[a2];
            if ((a3 < 0) || (0xf < a3))
                goto LAB_8c26765e;
            puVar4 = puVar1;
        }
        puVar2 = &stack0xffffffe0 + (char)s0;
        if (puVar2 < &stack0xffffffe2) {
            a2 = -1;
            do {
                *puVar2 = 0xff;
                puVar2 = puVar2 + 1;
            } while (puVar2 < &stack0xffffffe2);
        }
        ar5_00 = sd_sub_266708(a0, 3);
        if (ar5_00 == 0) {
            puVar4 = (u32 *)(g_8c2784c0 + 0xa8 + (short)*(char *)(*a0 + 1) * 0x2c);
            *puVar4 = 1;
            *(char *)(puVar4 + 1) = (char)s0;
            sd_sub_267d88(*a0, (int)(char)s0);
            sd_sub_267924(*a0, 0);
            for (iVar3 = 0; iVar3 < (char)s0; iVar3 = iVar3 + 1) {
                *(u8 *)((int)puVar4 + iVar3 + 7) = (&stack0xffffffe0)[iVar3];
                puVar4[iVar3 + 3] = 1;
                puVar4[iVar3 + 5] = 0;
                puVar4[iVar3 + 9] = 0;
            }
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267470, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_267740  0x8c267740
 * area name: in the sd library code range
 * called by: sdPstmPlay
 */
int sd_sub_267740(int a0, int a1, u32 a2, u32 a3) {
    u8 bVar1;
    u32 *puVar2;
    u8 *puVar3;
    char *pcVar4;
    int iVar5;
    int *piVar6;
    int iVar7;
    u8 bVar8;
    u8 *pbVar9;
    u8 bVar10;

    iVar7 = 0xd000001;
    if (((*(int *)(&DATA_8c2784c0) != 0) && (iVar7 = 0x7000103, a0 != 0)) &&
        (iVar7 = 0x3000001, ((u8)a3 & 0xf0) == 0)) {
        bVar1 = *(u8 *)(a0 + 1);
        piVar6 = (int *)((short)(char)bVar1 * 0x2c + (int)0xa8 + *(int *)(&DATA_8c2784c0));
        *piVar6 = a1;
        pbVar9 = 0x8c4bd42c;
        puVar2 = 0x8c4bd428;
        iVar7 = 0x3000001;
        if (*(char *)((int)piVar6 + 5) == '\x01') {
            bVar10 = 0;
        } else {
            if (*(char *)((int)piVar6 + 5) != '\x02')
                goto LAB_8c267802;
            bVar10 = (u8)0x80;
        }
        iVar5 = *piVar6;
        if (iVar5 == 1) {
            bVar8 = 0;
        } else if (iVar5 == 0) {
            bVar8 = 0x10;
        } else {
            if (iVar5 != 2)
                goto LAB_8c267802;
            bVar8 = 0x30;
        }
        piVar6[3] = 0;
        piVar6[4] = 0;
        *puVar2 = 0x21;
        puVar3 = 0x8c4bd42d;
        *pbVar9 = bVar1 | bVar10 | bVar8;
        *puVar3 = *(u8 *)((int)piVar6 + 6);
        *(char *)((int)puVar2 + 6) = (char)a2;
        pcVar4 = 0x8c4bd430;
        pbVar9[3] = (u8)((u32)a2 >> 8);
        *pcVar4 = (u8)a3 << 3;
        pbVar9 = (u8 *)((int)piVar6 + 7);
        for (iVar7 = 5; iVar7 < 7; iVar7 = iVar7 + 1) {
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            0x8c4bd42c [iVar7] = bVar1;
        }
        iVar7 = sd_sub_267fe8(0x8c4bd428, sd_sub_267740);
    }
LAB_8c267802:
    if (iVar7 != 0) {
        sd_set_last_error((&sd_sub_267740), iVar7);
    }
    return iVar7;
}

/*
 * sd_sub_267744  0x8c267744
 * area name: in the sd library code range
 */
int sd_sub_267744(int a0, int a1, u8 *a2, u32 a3) {
    u8 uVar1;
    u8 bVar2;
    int *in_r3;
    int *piVar3;
    u8 bVar4;
    u8 bVar5;
    int iVar6;

    if (*in_r3 == 0) {
        iVar6 = 0xd000001;
        goto LAB_8c267802;
    }
    if (a0 == 0) {
        iVar6 = 0x7000103;
        goto LAB_8c267802;
    }
    if ((a3 & 0xf0) == 0) {
        bVar2 = *(u8 *)(a0 + 1);
        piVar3 = (int *)((short)(char)bVar2 * 0x2c + *in_r3 + 0xa8);
        *piVar3 = a1;
        if (*(char *)((int)piVar3 + 5) == '\x01') {
            bVar5 = 0;
        } else {
            if (*(char *)((int)piVar3 + 5) != '\x02')
                goto LAB_8c2677e6;
            bVar5 = 0x80;
        }
        iVar6 = *piVar3;
        if (iVar6 == 1) {
            bVar4 = 0;
        } else if (iVar6 == 0) {
            bVar4 = 0x10;
        } else {
            if (iVar6 != 2)
                goto LAB_8c2677e6;
            bVar4 = 0x30;
        }
        g_8c4bd42c = bVar2 | bVar5 | bVar4;
        piVar3[3] = 0;
        piVar3[4] = 0;
        g_8c4bd428 = 0x21;
        g_8c4bd42d = *(u8 *)((int)piVar3 + 6);
        a3 = (int)(char)a3 << 3;
        g_8c4bd42e = SUB41(a2, 0);
        g_8c4bd42f = (u8)((u32)a2 >> 8);
        g_8c4bd430 = (u8)a3;
        a2 = (u8 *)((int)piVar3 + 7);
        for (iVar6 = 5; iVar6 < 7; iVar6 = iVar6 + 1) {
            uVar1 = *a2;
            a2 = a2 + 1;
            (&g_8c4bd42c)[iVar6] = uVar1;
        }
        iVar6 = sd_sub_267fe8(&g_8c4bd428, 7, a2, a3);
    } else {
    LAB_8c2677e6:
        iVar6 = 0x3000001;
    }
LAB_8c267802:
    if (iVar6 != 0) {
        sd_set_last_error(sd_sub_267740, iVar6, a2);
    }
    return iVar6;
}

/*
 * sdPstmPlay  0x8c26784c
 * named from the library error message "E1233:sdPstmPlay return error in mwSndPlay"
 * called by: mwSndPlay
 */
int sdPstmPlay(u32 a0, u32 a1, u32 a2, u32 a3) {
    int ar5_00;
    u32 *puVar1;

    puVar1 = &g_8c278520;
    do {
        if ((int)*puVar1 < 1) {
            ar5_00 = 0x3000001;
        LAB_8c267878:
            if (ar5_00 != 0) {
                sd_set_last_error(sdPstmPlay, ar5_00, a2);
            }
            return ar5_00;
        }
        if ((a2 & 0xffff) == *puVar1) {
            a2 = (u32)(short)puVar1[1];
            ar5_00 = sd_sub_267740(a0, a1, a2, a3);
            goto LAB_8c267878;
        }
        puVar1 = puVar1 + 2;
    } while (true);
}

/*
 * sd_sub_2678a4  0x8c2678a4
 * area name: sits between sd functions (same compilation unit)
 * called by: thunk_FUN_8c2678a4
 */
int sd_sub_2678a4(int a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd440 = 0x2e;
        g_8c4bd444 = *(u8 *)(a0 + 1);
        in_r0 = sd_sub_267fe8(&g_8c4bd440, a1, a2, a3);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2678a4, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2678a6  0x8c2678a6
 * area name: sits between sd functions (same compilation unit)
 */
int sd_sub_2678a6(int a0, u32 a1, u32 a2, u32 a3) {
    int *in_r2;
    int ar5_00;

    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd440 = 0x2e;
        g_8c4bd444 = *(u8 *)(a0 + 1);
        ar5_00 = sd_sub_267fe8(&g_8c4bd440, a1, a2, a3);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2678a4, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * thunk_FUN_8c2678a4  0x8c267908
 * called by: sd_sub_26a5de
 */
u32 thunk_FUN_8c2678a4(void) {
    u32 uVar1;

    uVar1 = sd_sub_2678a4();
    return uVar1;
}

/*
 * sd_sub_267914  0x8c267914
 * area name: sits between sd functions (same compilation unit)
 */
u32 sd_sub_267914(u32 unused_a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    uVar1 = sd_sub_267924((int)(char)a2);
    return uVar1;
}

/*
 * sd_sub_267924  0x8c267924
 * area name: sits between sd functions (same compilation unit)
 * called by: sd_sub_267470, sd_sub_2675d8, sd_sub_267914
 */
int sd_sub_267924(int a0, int a1) {
    int ar6_00;
    int in_r0;
    int ar7_00;
    int ar5_00;

    ar6_00 = g_8c2784c0;
    ar7_00 = 0xd000001;
    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else {
        ar7_00 = (int)*(char *)(a0 + 1);
        if ((char)a1 == '\x7f') {
            in_r0 = 0;
        } else {
            in_r0 = a1 * -2 + -1;
        }
        *(char *)((short)*(char *)(a0 + 1) * 0x2c + g_8c2784c0 + 0xae) = (char)in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267924, ar5_00, ar6_00);
    }
    return ar5_00;
}

/*
 * sd_sub_267926  0x8c267926
 * area name: sits between sd functions (same compilation unit)
 */
int sd_sub_267926(int a0, u32 a1) {
    char cVar1;
    int *in_r3;
    int ar6_00;
    int ar7_00;
    int ar5_00;

    ar6_00 = *in_r3;
    ar7_00 = 0xd000001;
    ar5_00 = 0;
    if (ar6_00 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else if (ar6_00 == 0) {
        ar5_00 = 0xd000001;
    } else {
        ar7_00 = (int)*(char *)(a0 + 1);
        if ((char)a1 == '\x7f') {
            cVar1 = '\0';
        } else {
            cVar1 = (char)a1 * -2 + -1;
        }
        *(char *)((short)*(char *)(a0 + 1) * 0x2c + ar6_00 + 0xae) = cVar1;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267924, ar5_00, ar6_00);
    }
    return ar5_00;
}

/*
 * sd_sub_2679a0  0x8c2679a0
 * area name: sits between sd functions (same compilation unit)
 * called by: sd_sub_267a10
 */
int sd_sub_2679a0(int a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd458 = 0x2b;
        g_8c4bd45c = *(u8 *)(a0 + 1);
        g_8c4bd45d = (u8)((char)a1 + 0x80);
        in_r0 = sd_sub_267fe8(&g_8c4bd458, (char)a1 + 0x80, a2, a3);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2679a0, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2679a2  0x8c2679a2
 * area name: sits between sd functions (same compilation unit)
 */
int sd_sub_2679a2(int a0, u32 a1, u32 a2, u32 a3) {
    int *in_r2;
    int ar5_00;

    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd458 = 0x2b;
        g_8c4bd45c = *(u8 *)(a0 + 1);
        g_8c4bd45d = (u8)((char)a1 + 0x80);
        ar5_00 = sd_sub_267fe8(&g_8c4bd458, (char)a1 + 0x80, a2, a3);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2679a0, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_267a10  0x8c267a10
 * area name: sits between sd functions (same compilation unit)
 */
u32 sd_sub_267a10(u32 unused_a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    uVar1 = sd_sub_2679a0((int)(char)a2);
    return uVar1;
}

/*
 * sd_sub_267a20  0x8c267a20
 * area name: sits between sd functions (same compilation unit)
 * called by: sd_sub_267a98
 */
int sd_sub_267a20(int a0, u32 a1, int a2, u32 a3) {
    int in_r0;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        a2 = (char)a2 + 0x80;
        g_8c4bd470 = 0x29;
        g_8c4bd474 = *(u8 *)(a0 + 1);
        g_8c4bd475 = (u8)a1;
        g_8c4bd476 = (u8)a2;
        in_r0 = sd_sub_267fe8(&g_8c4bd470, a1, a2, a3);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267a20, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_267a22  0x8c267a22
 * area name: sits between sd functions (same compilation unit)
 */
int sd_sub_267a22(int a0, u32 a1, int a2, u32 a3) {
    int *in_r2;
    int ar5_00;

    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        a2 = (char)a2 + 0x80;
        g_8c4bd470 = 0x29;
        g_8c4bd474 = *(u8 *)(a0 + 1);
        g_8c4bd475 = (u8)a1;
        g_8c4bd476 = (u8)a2;
        ar5_00 = sd_sub_267fe8(&g_8c4bd470, a1, a2, a3);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267a20, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_267a98  0x8c267a98
 * area name: in the sd library code range
 */
u32 sd_sub_267a98(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = sd_sub_267a20((int)(char)a2, (int)(char)a3);
    return uVar1;
}

/*
 * sd_sub_267ab0  0x8c267ab0
 * area name: in the sd library code range
 * called by: sd_sub_267b20
 */
int sd_sub_267ab0(int a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd488 = 0x2a;
        g_8c4bd48c = *(u8 *)(a0 + 1);
        g_8c4bd48d = (u8)((char)a1 + 0x80);
        in_r0 = sd_sub_267fe8(&g_8c4bd488, (char)a1 + 0x80, a2, a3);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267ab0, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_267ab2  0x8c267ab2
 * area name: in the sd library code range
 */
int sd_sub_267ab2(int a0, u32 a1, u32 a2, u32 a3) {
    int *in_r2;
    int ar5_00;

    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd488 = 0x2a;
        g_8c4bd48c = *(u8 *)(a0 + 1);
        g_8c4bd48d = (u8)((char)a1 + 0x80);
        ar5_00 = sd_sub_267fe8(&g_8c4bd488, (char)a1 + 0x80, a2, a3);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267ab0, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_267b20  0x8c267b20
 * area name: in the sd library code range
 */
u32 sd_sub_267b20(u32 unused_a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    uVar1 = sd_sub_267ab0((int)(char)a2);
    return uVar1;
}

/*
 * sd_sub_267b30  0x8c267b30
 * area name: in the sd library code range
 * called by: sd_sub_267d98, thunk_FUN_8c267b30
 */
int sd_sub_267b30(int a0, u32 a1, u32 a2, u32 a3) {
    u8 bVar1;
    char cVar2;
    u32 uVar3;
    u8 uVar4;
    int iVar5;
    int iVar6;
    int in_stack_ffffffe4;
    int iStack_18;

    if (g_8c2784c0 == 0) {
        iVar5 = 0xd000001;
    } else if (a0 == 0) {
        iVar5 = 0x7000103;
    } else {
        bVar1 = *(u8 *)(a0 + 1);
        cVar2 = (char)a2;
        a2 = 0;
        iVar6 = g_8c2784c0 + 0xa8 + (short)(char)bVar1 * 0x2c;
        *(int *)((char)a1 * 4 + iVar6 + 0x1c) = (int)cVar2;
        for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
            *(int *)(&stack0xffffffe4 + iVar5 * 4) = (int)cVar2;
        }
        uVar3 = (u32)(char)a1;
        if ((*(char *)(iVar6 + 5) != '\x01') && (*(char *)(iVar6 + 5) == '\x02')) {
            if (uVar3 == 0) {
                in_stack_ffffffe4 = in_stack_ffffffe4 + 0x80;
            } else if ((uVar3 == 1) && (iStack_18 = iStack_18 + -0x80, -2 < iStack_18)) {
                iStack_18 = -2;
            }
            for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
                *(int *)(&stack0xffffffe4 + iVar5 * 4) =
                    (int)(*(int *)(&stack0xffffffe4 + iVar5 * 4) + (u32)(*(int *)(&stack0xffffffe4 + iVar5 * 4) < 0)) >>
                    1;
            }
        }
        for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
            *(int *)(&stack0xffffffe4 + iVar5 * 4) = *(int *)(&stack0xffffffe4 + iVar5 * 4) + 0x80;
        }
        g_8c4bd4a0 = 0x26;
        g_8c4bd4a4 = (&g_8c278588)[uVar3 & 3] | bVar1;
        uVar4 = (u8)((u32)a3 >> 8);
        if (uVar3 == 0) {
            g_8c4bd4a5 = (u8)in_stack_ffffffe4;
            g_8c4bd4a9 = 0;
            g_8c4bd4aa = 0;
            g_8c4bd4ab = 0;
            g_8c4bd4a6 = (char)a3;
            g_8c4bd4a7 = uVar4;
        } else if (uVar3 == 1) {
            g_8c4bd4a5 = 0;
            g_8c4bd4a6 = 0;
            g_8c4bd4a7 = 0;
            g_8c4bd4a9 = (u8)iStack_18;
            g_8c4bd4aa = (char)a3;
            g_8c4bd4ab = uVar4;
        }
        iVar5 = sd_sub_267fe8(&g_8c4bd4a0, &g_8c4bd4a5, 0, a3);
    }
    if (iVar5 != 0) {
        sd_set_last_error(sd_sub_267b30, iVar5, a2);
    }
    return iVar5;
}

/*
 * thunk_FUN_8c267b30  0x8c267cc0
 * called by: mwSndSetPan
 */
u32 thunk_FUN_8c267b30(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = sd_sub_267b30();
    return uVar1;
}

/*
 * sd_sub_267ccc  0x8c267ccc
 * area name: in the sd library code range
 * called by: sd_sub_267d74
 */
int sd_sub_267ccc(int a0, u32 a1, int a2, u32 a3) {
    int in_r0;
    int iVar1;
    int iVar2;

    iVar1 = a2;
    if (g_8c2784c0 == 0) {
        iVar2 = 0xd000001;
    } else if (a0 == 0) {
        iVar2 = 0x7000103;
    } else {
        iVar2 = (int)(short)a1;
        if ((iVar2 < -0x18ff) || (0x18ff < iVar2)) {
            iVar2 = 0x3000001;
        } else {
            g_8c4bd4b8 = 0x28;
            g_8c4bd4bc = *(u8 *)(a0 + 1);
            iVar2 = iVar2 + 0x8000;
            g_8c4bd4be = (u8)iVar2;
            g_8c4bd4bf = (u8)((u32)iVar2 >> 8);
            g_8c4bd4c0 = (u8)a2;
            iVar1 = a2 >> 8;
            g_8c4bd4c1 = (u8)((u32)a2 >> 8);
            in_r0 = sd_sub_267fe8(&g_8c4bd4b8, iVar2 >> 8, iVar1, a3);
            iVar2 = in_r0;
        }
    }
    if (iVar2 != 0) {
        sd_set_last_error(sd_sub_267ccc, iVar2, iVar1);
    }
    return iVar2;
}

/*
 * sd_sub_267cce  0x8c267cce
 * area name: in the sd library code range
 */
int sd_sub_267cce(int a0, u32 a1, int a2, u32 a3) {
    int *in_r2;
    int iVar1;
    int iVar2;

    iVar1 = a2;
    if (*in_r2 == 0) {
        iVar2 = 0xd000001;
    } else if (a0 == 0) {
        iVar2 = 0x7000103;
    } else {
        iVar2 = (int)(short)a1;
        if ((iVar2 < -0x18ff) || (0x18ff < iVar2)) {
            iVar2 = 0x3000001;
        } else {
            g_8c4bd4b8 = 0x28;
            g_8c4bd4bc = *(u8 *)(a0 + 1);
            iVar2 = iVar2 + 0x8000;
            g_8c4bd4be = (u8)iVar2;
            g_8c4bd4bf = (u8)((u32)iVar2 >> 8);
            g_8c4bd4c0 = (u8)a2;
            iVar1 = a2 >> 8;
            g_8c4bd4c1 = (u8)((u32)a2 >> 8);
            iVar2 = sd_sub_267fe8(&g_8c4bd4b8, iVar2 >> 8, iVar1, a3);
        }
    }
    if (iVar2 != 0) {
        sd_set_last_error(sd_sub_267ccc, iVar2, iVar1);
    }
    return iVar2;
}

/*
 * sd_sub_267d74  0x8c267d74
 * area name: in the sd library code range
 * called by: mwSnd_sub_26aa5c
 */
u32 sd_sub_267d74(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = sd_sub_267ccc((int)(short)a2, a3);
    return uVar1;
}

/*
 * sd_sub_267d88  0x8c267d88
 * area name: in the sd library code range
 * called by: sd_sub_267470, sd_sub_2675d8, thunk_FUN_8c267d88
 */
int sd_sub_267d88(int a0, u32 a1) {
    u8 *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar4 = 0xd000001;
    if ((((*(int *)(&DATA_8c2784c0) != 0) && (iVar4 = 0x7000103, a0 != 0)) &&
         (iVar3 = (int)(char)a1, iVar4 = 0x3000001, 0 < iVar3)) &&
        (((iVar3 < 3 && (iVar2 = (short)*(char *)(a0 + 1) * 0x2c + (int)0xa8 + *(int *)(&DATA_8c2784c0), -1 < iVar3)) &&
          (iVar3 <= *(char *)(iVar2 + 4))))) {
        *(char *)(iVar2 + 5) = (char)a1;
        puVar1 = (&sd_sub_267b30);
        iVar5 = 0;
        iVar4 = 0;
        if (0 < iVar3) {
            do {
                (*(code *)puVar1)(a0, iVar5, *(u32 *)(iVar5 * 4 + iVar2 + 0x1c), 0);
                iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
        }
    }
    if (iVar4 != 0) {
        sd_set_last_error((&sd_sub_267d88), iVar4);
    }
    return iVar4;
}

/*
 * sd_sub_267d98  0x8c267d98
 * area name: in the sd library code range
 */
int sd_sub_267d98(u32 unused_a0, u32 a1, int a2, int a3) {
    int *in_r3;
    int iVar1;
    int unaff_r10;
    int iVar2;
    int iVar3;
    int ar5_00;

    iVar1 = a3;
    if (*in_r3 == 0) {
        a3 = 0xd000001;
    } else if (unaff_r10 == 0) {
        a3 = 0x7000103;
    } else {
        iVar3 = (int)(char)a1;
        if ((0 < iVar3) && (iVar3 < 3)) {
            a2 = (int)*(char *)(unaff_r10 + 1);
            iVar2 = (short)*(char *)(unaff_r10 + 1) * 0x2c + *in_r3 + 0xa8;
            if ((-1 < iVar3) && (iVar3 <= *(char *)(iVar2 + 4))) {
                *(char *)(iVar2 + 5) = (char)a1;
                ar5_00 = a3;
                if (0 < iVar3) {
                    do {
                        a2 = *(int *)(ar5_00 * 4 + iVar2 + 0x1c);
                        iVar1 = 0;
                        sd_sub_267b30(unaff_r10, ar5_00, a2, 0);
                        ar5_00 = ar5_00 + 1;
                    } while (ar5_00 < iVar3);
                }
                goto LAB_8c267e0a;
            }
        }
        a3 = 0x3000001;
    }
LAB_8c267e0a:
    if (a3 != 0) {
        sd_set_last_error(sd_sub_267d88, a3, a2);
    }
    return a3;
}

/*
 * thunk_FUN_8c267d88  0x8c267e48
 * called by: mwSndSetNumChan
 */
u32 thunk_FUN_8c267d88(void) {
    u32 uVar1;

    uVar1 = sd_sub_267d88();
    return uVar1;
}

/*
 * sd_sub_267e54  0x8c267e54
 * area name: in the sd library code range
 * called by: thunk_FUN_8c267e54
 */
int sd_sub_267e54(int a0, u32 a1, int a2, u32 a3) {
    int in_r0;
    u8 uVar1;
    u32 uVar2;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        uVar2 = (u32)(char)a1;
        a2 = (char)a2 + 0x80;
        g_8c4bd4d0 = 0x25;
        g_8c4bd4d4 = (&g_8c278590)[uVar2 & 3] | *(u8 *)(a0 + 1);
        uVar1 = (u8)((u32)a3 >> 8);
        if ((uVar2 == 0) || (uVar2 == 0xffffffff)) {
            g_8c4bd4d5 = (char)a2;
            g_8c4bd4d6 = (char)a3;
            g_8c4bd4d7 = uVar1;
        }
        if ((uVar2 == 1) || (uVar2 == 0xffffffff)) {
            g_8c4bd4d9 = (char)a2;
            g_8c4bd4da = (char)a3;
            g_8c4bd4db = uVar1;
        }
        in_r0 = sd_sub_267fe8(&g_8c4bd4d0, a3, a2, a3);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267e54, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_267e56  0x8c267e56
 * area name: in the sd library code range
 */
int sd_sub_267e56(int a0, u32 a1, int a2, u32 a3) {
    int *in_r3;
    u8 uVar1;
    int ar5_00;
    u32 uVar2;

    if (*in_r3 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        uVar2 = (u32)(char)a1;
        a2 = (char)a2 + 0x80;
        g_8c4bd4d0 = 0x25;
        g_8c4bd4d4 = (&g_8c278590)[uVar2 & 3] | *(u8 *)(a0 + 1);
        uVar1 = (u8)((u32)a3 >> 8);
        if ((uVar2 == 0) || (uVar2 == 0xffffffff)) {
            g_8c4bd4d5 = (char)a2;
            g_8c4bd4d6 = (char)a3;
            g_8c4bd4d7 = uVar1;
        }
        if ((uVar2 == 1) || (uVar2 == 0xffffffff)) {
            g_8c4bd4d9 = (char)a2;
            g_8c4bd4da = (char)a3;
            g_8c4bd4db = uVar1;
        }
        ar5_00 = sd_sub_267fe8(&g_8c4bd4d0, a3, a2, a3);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267e54, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * thunk_FUN_8c267e54  0x8c267f20
 * called by: mwSndSetVol, mwSnd_sub_26a870
 */
u32 thunk_FUN_8c267e54(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = sd_sub_267e54();
    return uVar1;
}

/*
 * sd_sub_267f2c  0x8c267f2c
 * area name: in the sd library code range
 * called by: thunk_FUN_8c267f2c
 */
int sd_sub_267f2c(int a0, u32 unused_a1, int a2, int a3) {
    char cVar1;
    int iVar2;
    u32 in_stack_fffffff0;

    if (g_8c2784c0 == 0) {
        iVar2 = 0xd000001;
    } else if (a0 == 0) {
        iVar2 = 0x7000103;
    } else {
        g_8c4bd4ec = *(char *)(a0 + 1);
        a3 = 0;
        a2 = (short)g_8c4bd4ec * 0x2c + g_8c2784c0 + 0xa8;
        cVar1 = *(char *)(a2 + 4);
        in_stack_fffffff0 = CONCAT31((s32)((u32)in_stack_fffffff0 >> 8), cVar1);
        iVar2 = 0;
        if (0 < cVar1) {
            do {
                *(u32 *)(a2 + 0xc + iVar2) = 1;
                a3 = a3 + 1;
                *(u32 *)(a2 + 0x14 + iVar2) = 0;
                *(u32 *)(a2 + 0x24 + iVar2) = 0;
                iVar2 = iVar2 + 4;
            } while (a3 < cVar1);
        }
        g_8c4bd4e8 = 0x22;
        iVar2 = sd_sub_267fe8(&g_8c4bd4e8, 0, a2, a3);
    }
    if (iVar2 != 0) {
        sd_set_last_error(sd_sub_267f2c, iVar2, a2);
    }
    return iVar2;
}

/*
 * thunk_FUN_8c267f2c  0x8c267fdc
 * called by: mwSndStop
 */
u32 thunk_FUN_8c267f2c(void) {
    u32 uVar1;

    uVar1 = sd_sub_267f2c();
    return uVar1;
}

/*
 * sd_sub_267fe8  0x8c267fe8
 * area name: in the sd library code range
 * called by: sd_sub_267740, sd_sub_267744, sd_sub_2678a4, sd_sub_2678a6, sd_sub_2679a0, sd_sub_2679a2, sd_sub_267a20,
 * sd_sub_267a22 (+17 more)
 */
int sd_sub_267fe8(u32 a0, u32 a1, int a2, int a3) {
    int iVar1;
    u32 ain0;
    int iVar2;
    int iVar3;
    int ar5_00;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    iVar1 = g_8c2784c0;
    ar5_00 = 0;
    ain0 = (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else {
        iVar2 = g_8c2784c0 + 0x158;
        a3 = *(int *)(g_8c2784c0 + 0x168);
        if (*(int *)(g_8c2784c0 + 0x16c) == 0x100) {
            ar5_00 = 0xa000001;
            a2 = 0x100;
        } else {
            iVar3 = *(int *)(g_8c2784c0 + 0x170);
            *(int *)(g_8c2784c0 + 0x170) = iVar3 + 1;
            a2 = iVar3 * 0x1c + *(int *)(iVar1 + 0x164);
            if (*(int *)(iVar1 + 0x170) == a3) {
                *(u32 *)(iVar1 + 0x170) = 0;
            }
            *(u32 *)(a2 + 0x14) = 1;
            switch_jump_r0(0x14, a2, a0);
            *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_267fe8, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_26809c  0x8c26809c
 * area name: in the sd library code range
 * called by: game_sub_02257c, se_slot_close
 */
int sd_sub_26809c(int a0, u32 unused_a1, u32 a2) {
    int in_r0;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        in_r0 = sd_sub_2666cc(a0, unused_a1, a2);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_26809c, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_26809e  0x8c26809e
 * area name: in the sd library code range
 */
int sd_sub_26809e(int a0, u32 unused_a1, u32 a2) {
    int *in_r2;
    int ar5_00;

    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        ar5_00 = sd_sub_2666cc(a0, unused_a1, a2);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_26809c, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2680ec  0x8c2680ec
 * area name: in the sd library code range
 * called by: game_sub_02257c, se_slot_open
 */
int sd_sub_2680ec(int a0, u32 unused_a1, u32 a2) {
    int in_r0;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        in_r0 = sd_sub_266708(a0, 2);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2680ec, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2680ee  0x8c2680ee
 * area name: in the sd library code range
 */
int sd_sub_2680ee(int a0, u32 unused_a1, u32 a2) {
    int *in_r2;
    int ar5_00;

    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        ar5_00 = sd_sub_266708(a0, 2);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2680ec, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_26813c  0x8c26813c
 * area name: in the sd library code range
 * called by: game_sub_02257c
 */
int sd_sub_26813c(int a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    int iVar1;

    if (g_8c2784c0 == 0) {
        iVar1 = 0xd000001;
    } else if (a0 == 0) {
        iVar1 = 0x7000103;
    } else {
        iVar1 = (int)(char)a3;
        if ((iVar1 < 0) || (0x1f < iVar1)) {
            iVar1 = 0x3000001;
        } else {
            g_8c4bd500 = 0x11;
            g_8c4bd504 = *(u8 *)(a0 + 1);
            g_8c4bd505 = (u8)a1;
            g_8c4bd506 = (u8)a2;
            g_8c4bd507 = (u8)(iVar1 << 3);
            in_r0 = sd_sub_267fe8(&g_8c4bd500, a1, a2, a3);
            iVar1 = in_r0;
        }
    }
    if (iVar1 != 0) {
        sd_set_last_error(sd_sub_26813c, iVar1, a2);
    }
    return iVar1;
}

/*
 * sd_sub_26813e  0x8c26813e
 * area name: in the sd library code range
 */
int sd_sub_26813e(int a0, u32 a1, u32 a2, u32 a3) {
    int *in_r2;
    int iVar1;

    if (*in_r2 == 0) {
        iVar1 = 0xd000001;
    } else if (a0 == 0) {
        iVar1 = 0x7000103;
    } else {
        iVar1 = (int)(char)a3;
        if ((iVar1 < 0) || (0x1f < iVar1)) {
            iVar1 = 0x3000001;
        } else {
            g_8c4bd500 = 0x11;
            g_8c4bd504 = *(u8 *)(a0 + 1);
            g_8c4bd505 = (u8)a1;
            g_8c4bd506 = (u8)a2;
            g_8c4bd507 = (u8)(iVar1 << 3);
            iVar1 = sd_sub_267fe8(&g_8c4bd500, a1, a2, a3);
        }
    }
    if (iVar1 != 0) {
        sd_set_last_error(sd_sub_26813c, iVar1, a2);
    }
    return iVar1;
}

/*
 * sd_sub_2681d0  0x8c2681d0
 * area name: in the sd library code range
 * called by: game_sub_02257c, se_sub_0227bc
 */
int sd_sub_2681d0(int a0, u32 a1, int a2, u32 a3) {
    int in_r0;
    int iVar1;
    int ar5_00;

    iVar1 = a2;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd518 = 0x16;
        g_8c4bd51c = *(u8 *)(a0 + 1);
        g_8c4bd51d = (u8)((char)a1 + 0x80);
        g_8c4bd51e = (u8)a2;
        iVar1 = a2 >> 8;
        g_8c4bd51f = (u8)((u32)a2 >> 8);
        in_r0 = sd_sub_267fe8(&g_8c4bd518, (char)a1 + 0x80, iVar1, a3);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2681d0, ar5_00, iVar1);
    }
    return ar5_00;
}

/*
 * sd_sub_2681d2  0x8c2681d2
 * area name: in the sd library code range
 */
int sd_sub_2681d2(int a0, u32 a1, int a2, u32 a3) {
    int *in_r2;
    int iVar1;
    int ar5_00;

    iVar1 = a2;
    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd518 = 0x16;
        g_8c4bd51c = *(u8 *)(a0 + 1);
        g_8c4bd51d = (u8)((char)a1 + 0x80);
        g_8c4bd51e = (u8)a2;
        iVar1 = a2 >> 8;
        g_8c4bd51f = (u8)((u32)a2 >> 8);
        ar5_00 = sd_sub_267fe8(&g_8c4bd518, (char)a1 + 0x80, iVar1, a3);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2681d0, ar5_00, iVar1);
    }
    return ar5_00;
}

/*
 * sd_sub_268250  0x8c268250
 * area name: in the sd library code range
 * called by: game_sub_02257c, se_sub_022804
 */
int sd_sub_268250(int a0, u32 a1, u32 a2) {
    char cVar1;
    u32 *puVar2;
    u32 *puVar3;
    u8 *puVar4;
    u8 *puVar5;
    u8 *puVar6;
    int iVar7;

    puVar4 = 0x8c4bd534;
    puVar2 = 0x8c4bd530;
    iVar7 = 0x7000103;
    if (a0 != 0) {
        cVar1 = (char)0x80;
        g_8c4bd530 = 0x15;
        puVar5 = 0x8c4bd536;
        *puVar4 = *(u8 *)(a0 + 1);
        puVar4[1] = (char)a1 + cVar1;
        *puVar5 = (char)a2;
        puVar6 = (&sd_sub_267fe8);
        puVar3 = 0x8c4bd530;
        *(char *)((int)puVar2 + 7) = (char)((u32)a2 >> 8);
        iVar7 = (*(code *)puVar6)(puVar3);
    }
    if (iVar7 != 0) {
        sd_set_last_error((&sd_sub_268250), iVar7);
    }
    return iVar7;
}

/*
 * sd_sub_268254  0x8c268254
 * area name: in the sd library code range
 */
int sd_sub_268254(int a0, u32 a1, int a2, u32 a3) {
    int ar6_00;
    int ar5_00;
    char in_T;

    if (in_T == '\0') {
        g_8c4bd530 = 0x15;
        g_8c4bd534 = *(u8 *)(a0 + 1);
        g_8c4bd535 = (u8)((char)a1 + 0x80);
        g_8c4bd536 = (u8)a2;
        ar6_00 = a2 >> 8;
        g_8c4bd537 = (u8)((u32)a2 >> 8);
        ar5_00 = sd_sub_267fe8(&g_8c4bd530, (char)a1 + 0x80, ar6_00, a3);
    } else {
        ar5_00 = 0x7000103;
        ar6_00 = a2;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_268250, ar5_00, ar6_00);
    }
    return ar5_00;
}

/*
 * sd_sub_2682bc  0x8c2682bc
 * area name: in the sd library code range
 * called by: se_slot_status
 */
int sd_sub_2682bc(int a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd548 = 0x12;
        g_8c4bd54c = *(u8 *)(a0 + 1);
        in_r0 = sd_sub_267fe8(&g_8c4bd548, a1, a2, a3);
        ar5_00 = in_r0;
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2682bc, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_2682be  0x8c2682be
 * area name: in the sd library code range
 */
int sd_sub_2682be(int a0, u32 a1, u32 a2, u32 a3) {
    int *in_r2;
    int ar5_00;

    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else if (a0 == 0) {
        ar5_00 = 0x7000103;
    } else {
        g_8c4bd548 = 0x12;
        g_8c4bd54c = *(u8 *)(a0 + 1);
        ar5_00 = sd_sub_267fe8(&g_8c4bd548, a1, a2, a3);
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_2682bc, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_268320  0x8c268320
 * area name: in the sd library code range
 * called by: aica_sub_2669f4, sd_sub_26a246
 */
u32 sd_sub_268320(int a0, u32 a1, u32 a2, u32 a3) {
    int ar6_00;
    int ar7_00;
    int iVar1;
    int ar4_00;
    int iVar2;
    u32 *puVar3;

    ar6_00 = *(int *)(&DATA_8c2784c0);
    if (ar6_00 == 0) {
        return 0xd000001;
    }
    ar7_00 = (int)(char)a1;
    if (ar7_00 < 0) {
        return 0x8000003;
    }
    iVar1 = (char)a1 * 8;
    if (a0 == 0x42534d53) {
        if (0xf < ar7_00) {
            return 0x8000003;
        }
        iVar2 = (int)0x1e4;
        ar4_00 = *(int *)(0x1c0 + ar6_00) + iVar1;
    } else if (a0 == 0x42504d53) {
        if (0xf < ar7_00) {
            return 0x8000003;
        }
        iVar2 = (int)0x264;
        ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x80 + iVar1;
    } else if (a0 == 0x42534f53) {
        if (0xf < ar7_00) {
            return 0x8000003;
        }
        iVar2 = (int)0x2e4;
        ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x100 + iVar1;
    } else {
        if (a0 != 0x52535053) {
            if (a0 == 0x42504653) {
                if (0 < ar7_00) {
                    return 0x8000003;
                }
                iVar1 = (int)0x3e4;
                ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x200;
            } else if (a0 == 0x424f4653) {
                if (0 < ar7_00) {
                    return 0x8000003;
                }
                iVar1 = (int)0x464;
                ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x280;
            } else {
                if (a0 != 0x57504653) {
                    return 0x9000001;
                }
                if (0 < ar7_00) {
                    return 0x8000003;
                }
                iVar1 = (int)0x46c;
                ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x288;
            }
            puVar3 = (u32 *)(iVar1 + ar6_00);
            goto LAB_8c26846a;
        }
        if (0xf < ar7_00) {
            return 0x8000003;
        }
        iVar2 = (int)0x364;
        ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x180 + iVar1;
    }
    puVar3 = (u32 *)(iVar2 + ar6_00 + iVar1);
LAB_8c26846a:
    aica_ram_268748(ar4_00, a2);
    aica_ram_268748(ar4_00 + 4, a3);
    *puVar3 = a2;
    puVar3[1] = a3;
    return 0;
}

/*
 * aica_ram_2684b8  0x8c2684b8
 * called by: aica_sub_2654f4, aica_sub_2654fc
 * strings: "SEGA"
 */
u32 aica_ram_2684b8(void) {
    aica_reg_265278();
    syG2CpuCopy("SEGA", 0xa0800000, 4, 0x80000, 0, 1);
    return 0;
}

/*
 * aica_sub_2684f0  0x8c2684f0
 * area name: sits between aica functions (same compilation unit)
 * called by: aica_sub_265374, sd_sub_266d28
 */
u32 aica_sub_2684f0(int a0, u32 a1, u32 *a2, u32 *a3) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;
    int iVar4;

    iVar4 = *(int *)(&DATA_8c2784c0);
    uVar3 = 0;
    if (iVar4 == 0) {
        return 0xd000001;
    }
    if (a2 == NULL) {
        return 0x3000001;
    }
    if (a3 == NULL) {
        return 0x3000001;
    }
    if ((char)a1 < '\0') {
        return 0x8000003;
    }
    if (a0 == 0x42534d53) {
        if ('\x0f' < (char)a1) {
            return 0x8000003;
        }
        iVar1 = (int)0x1e4;
    } else if (a0 == 0x42504d53) {
        if ('\x0f' < (char)a1) {
            return 0x8000003;
        }
        iVar1 = (int)0x264;
    } else if (a0 == 0x42534f53) {
        if ('\x0f' < (char)a1) {
            return 0x8000003;
        }
        iVar1 = (int)0x2e4;
    } else {
        if (a0 != 0x52535053) {
            if (a0 == 0x42504653) {
                if ((char)a1 != '\0') {
                    return 0x8000003;
                }
                iVar1 = (int)0x3e4;
            } else if (a0 == 0x424f4653) {
                if ((char)a1 != '\0') {
                    return 0x8000003;
                }
                iVar1 = (int)0x464;
            } else {
                if (a0 != 0x57504653) {
                    puVar2 = NULL;
                    uVar3 = 0x9000001;
                    goto LAB_8c2685de;
                }
                if ((char)a1 != '\0') {
                    return 0x8000003;
                }
                iVar1 = (int)0x46c;
            }
            puVar2 = (u32 *)(iVar1 + iVar4);
            goto LAB_8c2685de;
        }
        if ('\x0f' < (char)a1) {
            return 0x8000003;
        }
        iVar1 = (int)0x364;
    }
    puVar2 = (u32 *)(iVar1 + iVar4 + (char)a1 * 8);
LAB_8c2685de:
    if (puVar2 == NULL) {
        if (a2 != NULL) {
            *a2 = 0;
        }
        if (a3 != NULL) {
            *a3 = 0xffffffff;
        }
    } else {
        *a2 = *puVar2;
        *a3 = puVar2[1];
    }
    return uVar3;
}

/*
 * aica_ram_268618  0x8c268618
 * called by: aica_sub_2653e0, aica_sub_2653e8, sd_sub_266134, sd_sub_2663d8, sd_sub_266448, sd_sub_266d28,
 * sd_sub_267130, sd_sub_2671c0
 */
u32 aica_ram_268618(int a0, u32 a1) {
    if (a0 < 0x200000) {
        shinobi_sub_1f92c0(a0 + 0xa0800000, a1, 4, 1, 0, 0);
    }
    return 0;
}

/*
 * aica_ram_read_u8  0x8c268650
 * reads one byte of sound RAM at a0 (below 2 MB) into *a1
 * called by: aica_sub_2653e8, sd_sub_2661a4, sd_sub_2662f8, sd_sub_266368, sd_sub_266620, sd_sub_266fc8, sd_sub_267058,
 * sd_sub_2673f0
 */
u32 aica_ram_read_u8(u32 a0, u8 *a1) {
    u8 auStack_8[8];

    if ((int)a0 < 0x200000) {
        aica_ram_2686d4(a0 & 0xfffffffc, auStack_8);
        *a1 = auStack_8[a0 & 3];
    }
    return 0;
}

/*
 * aica_sub_26868c  0x8c26868c
 * area name: sits between aica functions (same compilation unit)
 * called by: sd_sub_266214
 */
u32 aica_sub_26868c(u32 a0, u16 *a1) {
    u16 auStack_c[4];

    if ((int)a0 < 0x200000) {
        aica_ram_2686d4(a0 & 0xfffffffc, auStack_c);
        *a1 = *(u16 *)((int)auStack_c + (a0 & 2));
    }
    return 0;
}

/*
 * aica_ram_2686d4  0x8c2686d4
 * called by: aica_ram_read_byte, aica_ram_read_u8, aica_sub_26868c, sd_sub_2665b0, sd_sub_266ea8, sd_sub_267360,
 * sd_sub_2687c8
 */
u32 aica_ram_2686d4(int a0, u32 a1) {
    if (a0 < 0x200000) {
        shinobi_sub_1f92c0(a0 + 0xa0800000, a1, 4, 1, 0, 0);
    }
    return 0;
}

/*
 * aica_ram_read_byte  0x8c26870c
 * reads the byte at a0 of sound RAM (below 2 MB) into *a1
 * called by: sd_flush_host_commands, sd_sub_266288, sd_sub_266f38
 */
u32 aica_ram_read_byte(u32 a0, u8 *a1) {
    u8 auStack_8[8];

    if ((int)a0 < 0x200000) {
        aica_ram_2686d4(a0 & 0xfffffffc, auStack_8);
        *a1 = auStack_8[a0 & 3];
    }
    return 0;
}

/*
 * aica_ram_268748  0x8c268748
 * called by: sd_sub_268320
 */
u32 aica_ram_268748(int a0, u32 a1) {
    u32 auStack_8[2];

    if (a0 < 0x200000) {
        auStack_8[0] = a1;
        syG2CpuCopy(auStack_8, a0 + 0xa0800000, 4, 1, 0, 0);
    }
    return 0;
}

/*
 * aica_ram_268788  0x8c268788
 * called by: sd_sub_2687c8
 */
u32 aica_ram_268788(int a0, u32 a1) {
    u32 auStack_8[2];

    if (a0 < 0x200000) {
        auStack_8[0] = a1;
        syG2CpuCopy(auStack_8, a0 + 0xa0800000, 4, 1, 0, 0);
    }
    return 0;
}

/*
 * sd_sub_2687c8  0x8c2687c8
 * area name: in the sd library code range
 * called by: sd_sub_266b76
 */
u32 sd_sub_2687c8(u32 a0, u32 a1) {
    u32 auStack_10[2];

    if ((int)a0 < 0x200000) {
        aica_ram_2686d4(a0 & 0xfffffffc, auStack_10);
        *(u8 *)((a0 & 3) + (int)auStack_10) = (u8)a1;
        aica_ram_268788(a0 & 0xfffffffc, auStack_10[0]);
    }
    return 0;
}

/*
 * sd_sub_268818  0x8c268818
 * area name: in the sd library code range
 * called by: game_sub_0221c8
 */
int sd_sub_268818(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    int ar5_00;

    if (g_8c2784c0 == 0) {
        a0 = in_r0;
        ar5_00 = 0xd000001;
    } else {
        g_8c4bd560 = 0x8a;
        if (a0 == 0x4f4e4f4d) {
            g_8c4bd564 = 0xff;
        } else {
            if (a0 != 0x4f525453) {
                ar5_00 = 0x3000001;
                goto LAB_8c268860;
            }
            g_8c4bd564 = 0;
        }
        a0 = sd_sub_267fe8(&g_8c4bd560, &g_8c4bd564, a2, a3);
        ar5_00 = a0;
    }
LAB_8c268860:
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_268818, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_26881a  0x8c26881a
 * area name: in the sd library code range
 */
int sd_sub_26881a(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int *in_r2;
    int ar5_00;

    if (*in_r2 == 0) {
        ar5_00 = 0xd000001;
    } else {
        g_8c4bd560 = 0x8a;
        if (a0 == 0x4f4e4f4d) {
            g_8c4bd564 = 0xff;
        } else {
            if (a0 != 0x4f525453) {
                ar5_00 = 0x3000001;
                goto LAB_8c268860;
            }
            g_8c4bd564 = 0;
        }
        ar5_00 = sd_sub_267fe8(&g_8c4bd560, &g_8c4bd564, a2, a3);
    }
LAB_8c268860:
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_268818, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_set_last_error  0x8c2688a0
 * records an sd library error code and detail
 * called by: aica_ram_2657ec, aica_ram_2668fc, aica_sub_265374, aica_sub_2653e0, aica_sub_2653e8, aica_sub_2654f4,
 * aica_sub_2654fc, aica_sub_2655f4 (+99 more)
 */
u32 sd_set_last_error(u32 a0, u32 a1, u32 a2) {
    u8 *puVar1;
    u32 in_r0;

    puVar1 = (&DATA_8c2785a4);
    g_8c2785a0 = a0;
    *(u32 *)puVar1 = a1;
    return in_r0;
}

/*
 * sdSysFlushHostCmd  0x8c2688b4
 * called by: sd_sub_26a6d8
 */
int sdSysFlushHostCmd(u32 unused_a0, u32 unused_a1, u32 a2) {
    int ar5_00;

    ar5_00 = sd_flush_host_commands(unused_a0, unused_a1, a2);
    if (ar5_00 != 0) {
        sd_set_last_error(sdSysFlushHostCmd, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sdSysServer  0x8c2688e0
 * flushes queued host commands when auto-flush is on, then polls the DMA
 * called by: sd_dma_start, sound_server, sound_server_2
 */
u32 sdSysServer(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int ar4_00;

    ar4_00 = g_8c2784c0;
    if (((g_8c2784c0 != 0) && (g_8c2784c4 == 1)) && (0 < *(int *)(g_8c2784c0 + 0x16c))) {
        sd_flush_host_commands(g_8c2784c0, unused_a1, a2);
    }
    sd_dma_poll(ar4_00, unused_a1, a2, a3);
    return 0;
}

/*
 * sd_sub_2688e2  0x8c2688e2
 * area name: sits between sd functions (same compilation unit)
 */
u32 sd_sub_2688e2(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int *in_r3;
    int ar4_00;

    ar4_00 = *in_r3;
    if (((ar4_00 != 0) && (*(int *)(&DATA_8c2784c4) == 1)) && (0 < *(int *)(0x16c + ar4_00))) {
        sd_flush_host_commands(ar4_00, unused_a1, a2);
    }
    sd_dma_poll(ar4_00, unused_a1, a2, a3);
    return 0;
}

/*
 * sd_sub_268920  0x8c268920
 * area name: sits between sd functions (same compilation unit)
 * called by: sd_sub_2650ec
 */
int sd_sub_268920(u32 a0, u32 a1, u8 *a2, u32 a3) {
    u32 in_r0;
    int iVar1;
    u32 uVar2;
    int ar5_00;

    ar5_00 = 0;
    if (g_8c2784c0 == 0) {
        ar5_00 = 0xd000001;
    } else {
        *(u32 *)(g_8c2784c0 + 0x164) = a0;
        *(u32 *)(g_8c2784c0 + 0x168) = a1;
        *(u32 *)(g_8c2784c0 + 0x174) = 0;
        *(u32 *)(g_8c2784c0 + 0x170) = 0;
        g_8c4bd578 = a0;
        in_r0 = memset(a0, 0, a1 * 0x1c);
        a2 = &g_8c2785a8;
        uVar2 = 0;
        iVar1 = 0;
        if (a1 != 0) {
            do {
                in_r0 = switch_jump_r0(0x1c, *(int *)(g_8c2784c0 + 0x164) + iVar1, a2);
                uVar2 = uVar2 + 1;
                iVar1 = iVar1 + 0x1c;
            } while (uVar2 < a1);
        }
    }
    if (ar5_00 != 0) {
        sd_set_last_error(sd_sub_268920, ar5_00, a2);
    }
    return ar5_00;
}

/*
 * sd_sub_26892c  0x8c26892c
 * area name: sits between sd functions (same compilation unit)
 */
u32 sd_sub_26892c(u32 a0, u32 unused_a1, u8 *a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 unaff_r12;
    u32 unaff_r13;
    int *unaff_r14;

    if (*unaff_r14 == 0) {
        unaff_r13 = 0xd000001;
    } else {
        *(u32 *)(*unaff_r14 + 0x164) = a0;
        *(u32 *)(*unaff_r14 + 0x168) = unaff_r12;
        *(u32 *)(*unaff_r14 + 0x174) = unaff_r13;
        *(u32 *)(*unaff_r14 + 0x170) = unaff_r13;
        g_8c4bd578 = a0;
        memset(a0, 0, unaff_r12 * 0x1c);
        a2 = &g_8c2785a8;
        uVar1 = unaff_r13;
        uVar2 = unaff_r13;
        if (unaff_r12 != 0) {
            do {
                switch_jump_r0(0x1c, *(int *)(*unaff_r14 + 0x164) + uVar1, a2);
                uVar2 = uVar2 + 1;
                uVar1 = uVar1 + 0x1c;
            } while (uVar2 < unaff_r12);
        }
    }
    if (unaff_r13 != 0) {
        sd_set_last_error(sd_sub_268920, unaff_r13, a2);
    }
    return unaff_r13;
}

/*
 * noop_2689c4  0x8c2689c4
 * called by: sd_sub_2689c8
 */
u32 noop_2689c4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * sd_sub_2689c8  0x8c2689c8
 * area name: sits between sd functions (same compilation unit)
 */
u32 sd_sub_2689c8(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int ar4_00;
    u32 ar4_01;
    u32 uVar1;
    u32 *ar6_00;
    u32 a7;

    noop_26a0f8();
    memset(&g_8c4bd580, 0, 0x480);
    memset(0x8c4bda00, 0, 0x820);
    uVar1 = 0x80808080;
    ar4_00 = 0;
    a7 = 0x200;
    ar6_00 = (u32 *)&g_8c4be220;
    do {
        ar4_00 = ar4_00 + 1;
        *ar6_00 = 0x80808080;
        ar6_00 = ar6_00 + 1;
    } while (ar4_00 < 0x200);
    if (g_8c2785cc == 0) {
        g_8c2785cc = ret_const_8c2785e8_26b1ca(ar4_00, 0x80808080, ar6_00, 0x200);
    }
    ar4_01 = 0;
    (**(code **)(g_8c2785cc + 0xc))(0, uVar1, ar6_00, a7);
    noop_2689c4();
    uVar1 = sd_sub_26a130(0, 0);
    return uVar1;
}

/*
 * sd_sub_268a24  0x8c268a24
 * area name: sits between sd functions (same compilation unit)
 * decompiler: Switch with 1 destination removed at 0x8c268ab4
 */
u32 sd_sub_268a24(u32 a0, u32 a1, u32 a2, u32 a3) {
    char *pcVar1;
    u32 uVar2;
    u32 *puVar3;
    char *pcVar4;
    int iVar5;
    char *pcVar6;
    char *pcVar7;
    int iVar8;

    pcVar1 = 0x8c4bd580;
    iVar5 = (int)0x480;
    iVar8 = (int)0x90;
    pcVar4 = 0x8c4bd580 + iVar5;
    pcVar6 = 0x8c4bd580;
    pcVar7 = 0x8c4bd580;
    do {
        if (*pcVar7 == '\x01') {
            mwRnaStop(pcVar6, a1, a2, a3);
        }
        pcVar7 = pcVar7 + iVar8;
        pcVar6 = pcVar6 + iVar8;
    } while (pcVar7 < pcVar4);
    pcVar6 = pcVar1;
    pcVar7 = pcVar1;
    pcVar4 = pcVar1;
    do {
        if (*pcVar4 == '\x01') {
            sd_sub_268c7e(pcVar7, pcVar6, a2, a3);
        }
        pcVar4 = pcVar4 + iVar8;
        pcVar7 = pcVar7 + iVar8;
    } while (pcVar4 < pcVar1 + iVar5);
    memset(pcVar1, 0, iVar5);
    memset(0x8c4bda00, 0, (int)0x820);
    uVar2 = 0x80808080;
    iVar5 = 0;
    iVar8 = (int)0x200;
    puVar3 = 0x8c4be220;
    do {
        iVar5 = iVar5 + 1;
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
    } while (iVar5 < iVar8);
    uVar2 = (**(code **)(*(int *)(&DATA_8c2785cc) + 0x10))();
    return uVar2;
}

/*
 * sd_sub_268a36  0x8c268a36
 * area name: sits between sd functions (same compilation unit)
 * decompiler: Switch with 1 destination removed at 0x8c268ab4
 */
u32 sd_sub_268a36(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int a6;
    u32 *a7;
    int unaff_r9;
    int unaff_r10;
    char *unaff_r11;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;

    iVar5 = (int)0x90;
    pcVar2 = unaff_r11;
    pcVar3 = unaff_r11;
    do {
        if (*pcVar3 == '\x01') {
            mwRnaStop(pcVar2, unused_a1, a2, a3);
        }
        pcVar3 = pcVar3 + iVar5;
        pcVar2 = pcVar2 + iVar5;
    } while (pcVar3 < (char *)(unaff_r9 + unaff_r10));
    pcVar2 = unaff_r11;
    pcVar3 = unaff_r11;
    pcVar4 = unaff_r11;
    do {
        if (*pcVar4 == '\x01') {
            sd_sub_268c7e(pcVar3, pcVar2, a2, a3);
        }
        pcVar4 = pcVar4 + iVar5;
        pcVar3 = pcVar3 + iVar5;
    } while (pcVar4 < unaff_r11 + unaff_r10);
    memset(unaff_r11, 0, unaff_r10);
    memset(0x8c4bda00, 0, (int)0x820);
    uVar1 = 0x80808080;
    iVar5 = 0;
    a6 = (int)0x200;
    a7 = 0x8c4be220;
    do {
        iVar5 = iVar5 + 1;
        *a7 = uVar1;
        a7 = a7 + 1;
    } while (iVar5 < a6);
    uVar1 = (**(code **)(*(int *)(&DATA_8c2785cc) + 0x10))(iVar5, uVar1, a6, a7);
    return uVar1;
}

/*
 * sd_sub_268afc  0x8c268afc
 * area name: in the sd library code range
 * called by: sd_sub_268b70
 */
int sd_sub_268afc(int a0) {
    int iVar1;

    iVar1 = (int)0x2000;
    *(u8 *)(a0 + 1) = 0;
    *(u8 *)(a0 + 4) = 0;
    *(u8 *)(a0 + 5) = 0;
    *(u8 *)(a0 + 6) = 0;
    *(u32 *)(a0 + 0x34) = 0;
    *(u32 *)(a0 + 0x2c) = 0;
    *(u32 *)(a0 + 0x30) = 0;
    *(int *)(a0 + 0x40) = iVar1;
    *(int *)(a0 + 0x44) = iVar1;
    *(u32 *)(a0 + 0x48) = 0;
    *(u32 *)(a0 + 0x60) = 0;
    *(u32 *)(a0 + 0x6c) = 0xffffffff;
    *(u32 *)(a0 + 0x70) = 0;
    *(u32 *)(a0 + 0x74) = 0;
    *(u32 *)(a0 + 0x78) = 0;
    *(u32 *)(a0 + 0x7c) = 0;
    *(u32 *)(a0 + 0x80) = 0;
    *(u32 *)(a0 + 0x8c) = 0;
    *(u8 *)(a0 + 7) = 0;
    iVar1 = (int)0x88;
    *(u32 *)(iVar1 + a0) = 0;
    return iVar1;
}

/*
 * sd_sub_268b48  0x8c268b48
 * area name: in the sd library code range
 * called by: sd_sub_268b70
 */
char *sd_sub_268b48(void) {
    char *pcVar1;
    char *pcVar2;
    char *pcVar3;

    pcVar2 = 0x8c4bd580;
    for (pcVar1 = 0x8c4bd580; (pcVar3 = NULL, pcVar1 < 0x8c4bd580 + 0x480 && (pcVar3 = pcVar2, *pcVar1 != '\0'));
         pcVar1 = pcVar1 + 0x90) {
        pcVar2 = pcVar2 + 0x90;
    }
    return pcVar3;
}

/*
 * sd_sub_268b70  0x8c268b70
 * name hint from a string it uses: E1201 mwRnaCreate Illigal pa; area name: in the sd library code range
 * called by: cri_sub_2629ac, cri_sub_263840
 */
u32 sd_sub_268b70(int *a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u8 *a4;
    u32 uVar2;
    int *a4_00;
    u8 *a4_01;
    int iVar3;
    u32 ar5_00;
    u8 auStack_20[4];
    int *piStack_1c;

    puVar1 = (&debug_printf);
    a4_01 = auStack_20;
    if (((int)a1 < 1) || (2 < (int)a1)) {
        debug_printf(a0, a1, a2, a3);
    } else {
        a4_00 = a0;
        ar5_00 = a1;
        if (a0 != NULL) {
            ar5_00 = 0;
            if (0 < (int)a1) {
                do {
                    if (*a4_00 == 0)
                        goto LAB_8c268bae;
                    ar5_00 = ar5_00 + 1;
                    a4_00 = a4_00 + 1;
                } while ((int)ar5_00 < (int)a1);
            }
            sd_irq_disable(auStack_20);
            a4 = (u8 *)sd_sub_268b48();
            if (a4 == NULL) {
                (*(code *)puVar1)(a4_01, ar5_00, a2, a3);
            } else {
                ar5_00 = 0;
                a4[3] = (char)a1;
                a4[2] = (char)a1;
                iVar3 = 0;
                if (0 < (int)a1) {
                    do {
                        ar5_00 = ar5_00 + 1;
                        *(u32 *)(a4 + iVar3 + 0x10) = *(u32 *)(iVar3 + (int)a0);
                        iVar3 = iVar3 + 4;
                    } while ((int)ar5_00 < (int)a1);
                }
                iVar3 = (**(code **)(*(int *)(&DATA_8c2785cc) + 0x14))(a1, ar5_00, a2, a3);
                *(int *)(a4 + 0x38) = iVar3;
                if (iVar3 == 0) {
                    (*(code *)puVar1)(a1, ar5_00, a2, a3);
                    a4 = NULL;
                } else {
                    sd_sub_268afc(a4);
                    mwRnaSetBitPerSmpl(a4, 0x10, a2, a3);
                    mwRnaSetSfreq(a4, 0xac44, a2, a3);
                    ar5_00 = (u32)(u8)a4[3];
                    mwRnaSetNumChan(a4, ar5_00, a2, a3);
                    piStack_1c = *(int **)(a4 + 0x38);
                    uVar2 = (**(code **)(*piStack_1c + 0x18))(piStack_1c, ar5_00, a2, a3);
                    *(u32 *)(a4 + 0x28) = uVar2;
                    *a4 = 1;
                }
            }
            sd_irq_restore(auStack_20);
            return a4;
        }
    LAB_8c268bae:
        debug_printf(a4_00, ar5_00, a2, a3);
    }
    return 0;
}

/*
 * sd_sub_268c7e  0x8c268c7e
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: in the sd library code range
 * called by: cri_sub_2629b2, sd_sub_268a24, sd_sub_268a36
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 sd_sub_268c7e(u8 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar6_00;
    u32 in_stack_fffffff0;

    if (a0 == NULL) {
        uVar1 = debug_printf(0, unused_a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_fffffff0);
        return uVar1;
    }
    sd_irq_disable(&stack0xfffffff0);
    if (a0[1] != '\0') {
        mwRnaStop(a0, unused_a1, a2, a3);
    }
    *a0 = 0;
    for (iVar2 = 0; iVar2 < (int)(u32)(u8)a0[2]; iVar2 = iVar2 + 1) {
        *(u32 *)(a0 + iVar2 * 4 + 0x10) = 0;
    }
    (**(code **)(**(int **)(a0 + 0x38) + 0xc))(*(int **)(a0 + 0x38), 0, a2, a3);
    uVar1 = 0;
    ar6_00 = 0x90;
    memset(a0, 0, 0x90);
    uVar1 = sd_irq_restore(&stack0xfffffff0);
    return uVar1;
}

/*
 * sd_sub_268cee  0x8c268cee
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: in the sd library code range
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 sd_sub_268cee(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_fffffff4;

    if (a0 == 0) {
        uVar1 = debug_printf(0, unused_a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_fffffff4);
        return uVar1;
    }
    sd_irq_disable(&stack0xfffffff4);
    if (*(char *)(a0 + 1) != '\0') {
        mwRnaStop(a0, unused_a1, a2, a3);
    }
    *(u8 *)(a0 + 1) = 4;
    uVar1 = 1;
    *(u32 *)(a0 + 0x40) = *(u32 *)(a0 + 0x44);
    mwRna_sub_2690d8(a0, 1, a2, a3);
    uVar1 = sd_irq_restore(&stack0xfffffff4);
    return uVar1;
}

/*
 * noop_268d60  0x8c268d60
 * called by: mwRnaStop, mwRna_sub_2694a4
 */
u32 noop_268d60(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * mwRnaStop  0x8c268d64
 * stops an mwRna output: play switch off, buffers reset, status cleared (interrupts masked)
 * called by: cri_sub_2629b2, sd_sub_268a24, sd_sub_268a36, sd_sub_268c7e, sd_sub_268cee
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaStop(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_fffffff4;

    if (a0 == 0) {
        uVar1 = debug_printf(0, unused_a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_fffffff4);
        return uVar1;
    }
    uVar1 = 0;
    if (*(char *)(a0 + 1) != '\0') {
        sd_irq_disable(&stack0xfffffff4);
        mwRna_set_play_sw(a0, 0, a2, a3);
        uVar1 = 0;
        mwRna_sub_2690d8(a0, 0, a2, a3);
        noop_268d60();
        *(u8 *)(a0 + 7) = 0;
        *(u8 *)(a0 + 1) = 0;
        uVar1 = sd_irq_restore(&stack0xfffffff4);
    }
    return uVar1;
}

/*
 * mwRna_sub_268db4  0x8c268db4
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: sits between mwRna functions (same
 * compilation unit) strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_sub_268db4(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 in_PR;

    if (a0 == 0) {
        uVar1 = debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return uVar1;
    }
    if (*(char *)(a0 + 6) != '\x01') {
        *(u8 *)(a0 + 6) = 1;
    }
    return 1;
}

/*
 * mwRna_sub_268ddc  0x8c268ddc
 * area name: sits between mwRna functions (same compilation unit)
 * called by: mwRna_sub_269244, mwRna_sub_2693ce
 */
u32 mwRna_sub_268ddc(int a0, u32 a1, u32 a2, u32 a3, int s0) {
    if (s0 < 1) {
        return 0;
    }
    (**(code **)(**(int **)(a0 + 0x38) + 0x4c))(*(int **)(a0 + 0x38), a1, a2, a3);
    *(u32 *)(a0 + 0x5c) = 1;
    return s0;
}

/*
 * mwRna_sub_268e1a  0x8c268e1a
 * area name: sits between mwRna functions (same compilation unit)
 * called by: mwRnaPause, mwRna_sub_2694a4
 */
int mwRna_sub_268e1a(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int a5;
    int aiStack_24[3];

    if (*(int *)(a0 + 0x5c) == 0) {
        iVar1 = 0;
    } else {
        iVar1 = 1;
        aiStack_24[1] = 1;
        aiStack_24[0] = 1;
        for (a5 = 0; a5 < (int)(u32) * (u8 *)(a0 + 3); a5 = a5 + 1) {
            iVar2 = (**(code **)(**(int **)(a0 + 0x38) + 0x50))(*(int **)(a0 + 0x38), a5, a2, a3);
            if (iVar2 != 1) {
                aiStack_24[a5] = 0;
            }
        }
        if ((aiStack_24[0] == 0) || (aiStack_24[1] == 0)) {
            iVar1 = 0;
        }
        if (iVar1 == 1) {
            *(u32 *)(a0 + 0x5c) = 0;
        }
    }
    return iVar1;
}

/*
 * mwRna_sub_268ea8  0x8c268ea8
 * area name: sits between mwRna functions (same compilation unit)
 * called by: mwRnaGetTime, mwRna_sub_2694a4, mwRna_sub_26962c
 */
u32 mwRna_sub_268ea8(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u8 auStack_1c[4];
    int *piStack_18;

    sd_irq_disable(auStack_1c);
    piStack_18 = *(int **)(a0 + 0x38);
    iVar4 = *(int *)(a0 + 0x30);
    uVar1 = (**(code **)(*piStack_18 + 0x20))(piStack_18, 0, a2, a3);
    iVar2 = libgcc_divide_helper_010468(0x20, *(u32 *)(a0 + 8));
    iVar2 = iVar2 << 3;
    iVar3 = libgcc_divide_helper_010468(uVar1, iVar2);
    iVar5 = iVar3 * iVar2 - iVar4;
    *(int *)(a0 + 0x30) = iVar3 * iVar2;
    if (iVar5 < 0) {
        iVar5 = iVar5 + *(int *)(a0 + 0x28);
    }
    iVar2 = *(int *)(a0 + 0x34) - iVar5;
    if (iVar2 < 0) {
        *(u8 *)(a0 + 4) = 1;
        iVar2 = 0;
        iVar5 = *(int *)(a0 + 0x2c) - iVar4;
    }
    if ((*(char *)(a0 + 4) == '\x01') && (iVar3 = mwRna_is_playing(a0), iVar3 == 1)) {
        *(u32 *)(a0 + 0x2c) = *(u32 *)(a0 + 0x30);
        *(u8 *)(a0 + 4) = 0;
    }
    *(int *)(a0 + 0x34) = iVar2;
    *(int *)(a0 + 0x48) = *(int *)(a0 + 0x48) + iVar5;
    uVar1 = sd_irq_restore(auStack_1c);
    return uVar1;
}

/*
 * mwRna_sub_268f3e  0x8c268f3e
 * name hint from a string it uses: E1213 mwlRnaAddWrPos rna sj ; area name: sits between mwRna functions (same
 * compilation unit) called by: mwRnaDiscardData, mwRna_sub_2690d8, mwRna_sub_2694a4, mwRna_sub_269738
 */
u32 mwRna_sub_268f3e(int a0, u32 unused_a1, u8 *a2, u8 *a3) {
    u32 uVar1;
    u8 *puVar2;
    int *piVar3;
    int iVar4;
    u8 auStack_3c[4];
    u8 auStack_38[8];
    u8 auStack_30[8];
    u32 uStack_28;
    u32 uStack_24;

    puVar2 = auStack_3c;
    sd_irq_disable(auStack_3c);
    for (iVar4 = 0; iVar4 < (int)(u32) * (u8 *)(a0 + 3); iVar4 = iVar4 + 1) {
        if (*(int *)(iVar4 * 4 + a0 + 0x10) == 0) {
            debug_printf(puVar2, unused_a1, a2, a3);
        }
    }
    for (iVar4 = 0; iVar4 < (int)(u32) * (u8 *)(a0 + 3); iVar4 = iVar4 + 1) {
        uStack_28 = *(u32 *)(a0 + 0x18 + iVar4 * 8);
        uStack_24 = *(u32 *)(iVar4 * 8 + a0 + 0x1c);
        puVar2 = auStack_30;
        a3 = auStack_38;
        uVar1 = libgcc_divide_helper_010468(*(int *)(a0 + 0x3c) * *(int *)(a0 + 8), 8);
        span_take(&uStack_28, uVar1, puVar2, a3);
        piVar3 = *(int **)(a0 + 0x10 + iVar4 * 4);
        (**(code **)(*piVar3 + 0x20))(piVar3, 0, auStack_30, a3);
        piVar3 = *(int **)(a0 + 0x10 + iVar4 * 4);
        unused_a1 = 1;
        a2 = auStack_38;
        (**(code **)(*piVar3 + 0x1c))(piVar3, 1, a2, a3);
    }
    uVar1 = libgcc_divide_helper_010614(*(int *)(a0 + 0x2c) + *(int *)(a0 + 0x3c), *(u32 *)(a0 + 0x28));
    *(u32 *)(a0 + 0x2c) = uVar1;
    *(int *)(a0 + 0x34) = *(int *)(a0 + 0x34) + *(int *)(a0 + 0x3c);
    *(int *)(a0 + 0x4c) = *(int *)(a0 + 0x4c) + *(int *)(a0 + 0x3c);
    *(u32 *)(a0 + 0x3c) = 0;
    uVar1 = sd_irq_restore(auStack_3c);
    return uVar1;
}

/*
 * mwRna_sub_269056  0x8c269056
 * area name: sits between mwRna functions (same compilation unit)
 * called by: mwRnaDiscardData, mwRna_sub_2690d8, mwRna_sub_2694a4, mwRna_sub_269738
 */
u32 mwRna_sub_269056(int a0) {
    u32 uVar1;

    uVar1 = libgcc_divide_helper_010614(*(int *)(a0 + 0x50) + *(int *)(a0 + 0x58), *(u32 *)(a0 + 0x28));
    *(u32 *)(a0 + 0x50) = uVar1;
    *(int *)(a0 + 0x54) = *(int *)(a0 + 0x54) + *(int *)(a0 + 0x58);
    *(u32 *)(a0 + 0x58) = 0;
    return 0x58;
}

/*
 * mwRna_sub_26905a  0x8c26905a
 * area name: sits between mwRna functions (same compilation unit)
 */
u32 mwRna_sub_26905a(int a0) {
    u32 uVar1;
    code *in_r2;

    uVar1 = (*in_r2)();
    *(u32 *)(a0 + 0x50) = uVar1;
    *(int *)(a0 + 0x54) = *(int *)(a0 + 0x54) + *(int *)(a0 + 0x58);
    *(u32 *)(a0 + 0x58) = 0;
    return 0x58;
}

/*
 * mwRnaPause  0x8c269086
 * named from the library error message it prints (mwRnaPause)
 * called by: mwRnaDiscardData, mwRna_sub_2690d8, mwRna_sub_26962c
 * strings: "E1209:mwRnaPause Time out of wait for DMA finish"
 */
int mwRnaPause(u32 a0, u32 unused_a1, u32 a2, u32 a3, int ain0) {
    int iVar1;
    u32 ar4_00;
    int iVar2;
    u32 s4;

    g_8c2785d4 = 0;
    for (iVar2 = 0; ar4_00 = 0, s4 = a0, iVar2 < 200; iVar2 = iVar2 + 1) {
        ain0 = mwRna_sub_268e1a(a0, unused_a1, a2, a3);
        ar4_00 = a0;
        if (ain0 == 1)
            break;
        iVar1 = 5000;
        do {
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        g_8c2785d4 = g_8c2785d4 + 1;
        a0 = s4;
    }
    if (iVar2 == 200) {
        ain0 = debug_printf(ar4_00, unused_a1, a2, a3, "E1209:mwRnaPause Time out of wait for DMA finish", s4);
    }
    return ain0;
}

/*
 * mwRna_sub_2690d8  0x8c2690d8
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: sits between mwRna functions (same
 * compilation unit) called by: cri_sub_2629d0, cri_sub_263c64, cri_sub_2647f4, cri_sub_264b14, cri_sub_264ba0,
 * mwRnaStop, mwRna_sub_2694a4, sd_sub_268cee strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_sub_2690d8(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int a5;
    u32 in_stack_ffffffec;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_ffffffec);
    } else {
        *(u32 *)(a0 + 0x8c) = 1;
        a5 = a1;
        if (*(char *)(a0 + 5) == '\x01') {
            mwRnaPause(a0, a1, a2, a3, in_stack_ffffffec);
            iVar2 = mwRna_is_playing(a0);
            if (iVar2 == 1) {
                mwRna_sub_268f3e(a0, a5, a2, a3);
            } else {
                mwRna_sub_269056(a0);
            }
            *(u8 *)(a0 + 5) = 0;
        }
        sd_irq_disable(&stack0xffffffec);
        *(u32 *)(a0 + 0x8c) = 0;
        if (a1 == 0) {
            iVar2 = mwRna_is_playing(a0);
            if (iVar2 != 0) {
                *(u32 *)(a0 + 0x50) = *(u32 *)(a0 + 0x2c);
                *(u32 *)(a0 + 0x54) = 0;
                *(u32 *)(a0 + 0x58) = 0;
                *(u8 *)(a0 + 1) = *(u8 *)(a0 + 1) & 6;
            }
        } else if ((a1 == 1) && (iVar2 = mwRna_is_playing(a0), iVar2 != 1)) {
            *(u32 *)(a0 + 0x2c) = 0;
            *(u32 *)(a0 + 0x30) = 0;
            *(u32 *)(a0 + 0x34) = 0;
            *(u8 *)(a0 + 6) = 0;
            *(u32 *)(a0 + 0x5c) = 0;
            *(u32 *)(a0 + 0x48) = 0;
            *(u32 *)(a0 + 0x4c) = 0;
            *(u32 *)(a0 + 0x3c) = 0;
            *(u8 *)(a0 + 4) = 0;
            *(u32 *)(a0 + 0x50) = *(u32 *)(a0 + 0x2c);
            *(u32 *)(a0 + 0x54) = 0;
            *(u8 *)(a0 + 1) = *(u8 *)(a0 + 1) | 1;
        }
        uVar1 = sd_irq_restore(&stack0xffffffec);
    }
    return uVar1;
}

/*
 * mwRna_set_play_sw  0x8c2691b8
 * a1 = 1 starts (vtable +0x10, sets bit 1), 0 stops (vtable +0x14) an mwRna handle's output
 * called by: cri_sub_263c64, cri_sub_264a42, cri_sub_264b7a, cri_sub_264ba0, mwRnaStop, mwRna_set_play_sw_wrap,
 * mwRna_sub_2694a4, mwRna_sub_26962c (+1 more) strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_set_play_sw(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u8 auStack_c[8];

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", a1);
        return uVar1;
    }
    iVar2 = a1;
    sd_irq_disable(auStack_c);
    if (iVar2 == 0) {
        iVar2 = mwRna_is_output_on(a0);
        if (iVar2 != 0) {
            (**(code **)(**(int **)(a0 + 0x38) + 0x14))(*(int **)(a0 + 0x38), a1, a2, a3);
            *(u8 *)(a0 + 1) = *(u8 *)(a0 + 1) & 5;
        }
    } else if ((iVar2 == 1) && (iVar2 = mwRna_is_output_on(a0), iVar2 != 1)) {
        (**(code **)(**(int **)(a0 + 0x38) + 0x10))(*(int **)(a0 + 0x38), a1, a2, a3);
        *(u8 *)(a0 + 1) = *(u8 *)(a0 + 1) | 2;
    }
    uVar1 = sd_irq_restore(auStack_c);
    return uVar1;
}

/*
 * mwRna_sub_269244  0x8c269244
 * name hint from a string it uses: E1212 mwlRnaStartTrans rna s; area name: sits between mwRna functions (same
 * compilation unit) called by: mwRna_sub_2694a4
 */
int *mwRna_sub_269244(u8 *a0, u32 unused_a1, u8 *a2, u8 *a3) {
    int iVar1;
    int iVar2;
    u8 *a7;
    int *piVar3;
    u8 *puVar4;
    int *a5;
    u8 *a6;
    int *piVar5;
    int iVar6;

    iVar1 = libgcc_divide_helper_010468(0x20, *(u32 *)(a0 + 8));
    iVar1 = iVar1 * 8;
    piVar3 = (int *)(*(int *)(a0 + 0x28) - *(int *)(a0 + 0x34));
    iVar2 = libgcc_divide_helper_010468(piVar3, iVar1);
    piVar5 = (int *)(iVar2 * iVar1);
    for (iVar2 = 0; iVar2 < (int)(u32)(u8)a0[3]; iVar2 = iVar2 + 1) {
        if (*(int *)(a0 + iVar2 * 4 + 0x10) == 0) {
            debug_printf(piVar3, unused_a1, a2, a3);
        }
        piVar3 = *(int **)(a0 + iVar2 * 4 + 0x10);
        iVar6 = (int)piVar5 * *(int *)(a0 + 8);
        a3 = a0 + iVar2 * 8 + 0x18;
        if (iVar6 < 0) {
            iVar6 = iVar6 + 7;
        }
        unused_a1 = 1;
        a2 = (u8 *)(iVar6 >> 3);
        (**(code **)(*piVar3 + 0x18))(piVar3, 1, a2, a3);
    }
    if (a0[3] == '\x01') {
        puVar4 = *(u8 **)(a0 + 0x1c);
    } else {
        a2 = *(u8 **)(a0 + 0x1c);
        a3 = *(u8 **)(a0 + 0x24);
        puVar4 = a3;
        if ((int)a2 < (int)a3) {
            puVar4 = a2;
        }
    }
    iVar2 = libgcc_divide_helper_010468(puVar4, *(u32 *)(a0 + 8));
    piVar3 = (int *)(iVar2 << 3);
    if ((int)piVar5 <= iVar2 << 3) {
        piVar3 = piVar5;
    }
    a5 = (int *)(*(int *)(a0 + 0x28) - *(int *)(a0 + 0x2c));
    if ((int)a5 <= (int)piVar3) {
        piVar3 = a5;
    }
    iVar2 = libgcc_divide_helper_010468(piVar3, iVar1);
    if (iVar2 * iVar1 < 1) {
        for (iVar1 = 0; iVar1 < (int)(u32)(u8)a0[3]; iVar1 = iVar1 + 1) {
            if (*(int *)(a0 + iVar1 * 4 + 0x10) == 0) {
                debug_printf(piVar3, a5, a2, a3);
            }
            piVar3 = *(int **)(a0 + iVar1 * 4 + 0x10);
            a5 = (int *)0x1;
            a2 = a0 + iVar1 * 8 + 0x18;
            (**(code **)(*piVar3 + 0x1c))(piVar3, 1, a2, a3);
        }
        piVar5 = NULL;
    } else {
        puVar4 = &g_8c4bea40;
        for (piVar3 = NULL; (int)piVar3 < (int)(u32)(u8)a0[3]; piVar3 = (int *)((int)piVar3 + 1)) {
            a7 = *(u8 **)(a0 + (int)piVar3 * 8 + 0x18);
            a6 = *(u8 **)(a0 + 0x2c);
            g_8c4bea40 = sh4_tmu_1f88e6(puVar4);
            puVar4 = a0;
            a5 = piVar3;
            piVar5 = (int *)mwRna_sub_268ddc(a0, piVar3, a6, a7);
            g_8c4bea44 = sh4_tmu_1f88e6(puVar4);
            a2 = a6;
            a3 = a7;
        }
        *(int **)(a0 + 0x3c) = piVar5;
    }
    return piVar5;
}

/*
 * mwRna_sub_2693ce  0x8c2693ce
 * area name: sits between mwRna functions (same compilation unit)
 * called by: mwRna_sub_2694a4
 */
u8 *mwRna_sub_2693ce(int a0) {
    int iVar1;
    u8 *puVar2;
    int iVar3;
    u32 d;
    int iVar4;
    u8 *a7;

    iVar3 = *(int *)(a0 + 0x28);
    d = *(u32 *)(a0 + 8);
    iVar4 = (iVar3 - *(int *)(a0 + 0x34)) - *(int *)(a0 + 0x54);
    iVar1 = libgcc_divide_helper_010468(0x20, d);
    iVar1 = iVar1 << 3;
    iVar4 = libgcc_divide_helper_010468(iVar4, iVar1);
    iVar3 = iVar3 - *(int *)(a0 + 0x50);
    if (iVar4 * iVar1 < iVar3) {
        iVar3 = iVar4 * iVar1;
    }
    iVar4 = libgcc_divide_helper_010468(0x800, d);
    if (iVar4 << 3 <= iVar3) {
        iVar3 = iVar4 << 3;
    }
    iVar3 = libgcc_divide_helper_010468(iVar3, iVar1);
    if (iVar3 * iVar1 < 1) {
        puVar2 = NULL;
    } else {
        if (*(int *)(a0 + 8) == 4) {
            puVar2 = &g_8c4be220;
        } else {
            puVar2 = (u8 *)0x8c4bda00;
        }
        a7 = puVar2 + 0x20;
        for (iVar3 = 0; iVar3 < (int)(u32) * (u8 *)(a0 + 3); iVar3 = iVar3 + 1) {
            puVar2 = (u8 *)mwRna_sub_268ddc(a0, iVar3, *(u32 *)(a0 + 0x50), a7);
        }
        *(u8 **)(a0 + 0x58) = puVar2;
    }
    return puVar2;
}

/*
 * mwRna_sub_2694a4  0x8c2694a4
 * area name: sits between mwRna functions (same compilation unit)
 * called by: mwRna_sub_2695e4
 */
u32 mwRna_sub_2694a4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;

    if (*(int *)(0x8c + a0) == 1) {
        return 1;
    }
    iVar2 = mwRna_is_playing(a0);
    puVar1 = (&DATA_8c2785d8);
    if ((iVar2 == 1) && (*(char *)(a0 + 5) == '\x01')) {
        iVar2 = mwRna_sub_268e1a(a0, unused_a1, a2, a3);
        if (iVar2 == 1) {
            mwRna_sub_268f3e(a0, unused_a1, a2, a3);
            *(u8 *)(a0 + 5) = 0;
            *(u32 *)puVar1 = 0;
        } else {
            *(int *)puVar1 = *(int *)puVar1 + 1;
        }
    }
    if ((*(char *)(a0 + 6) == '\x01') && (*(char *)(a0 + 5) == '\0')) {
        unused_a1 = 1;
        iVar2 = (**(code **)(**(int **)(a0 + 0x10) + 0x24))(*(int **)(a0 + 0x10), 1, a2, a3);
        if (iVar2 < 0x20) {
            unused_a1 = 0;
            mwRna_sub_2690d8(a0, 0, a2, a3);
            *(u8 *)(a0 + 6) = 0;
        }
    }
    iVar2 = mwRna_is_output_on(a0);
    if (iVar2 == 1) {
        mwRna_sub_268ea8(a0, unused_a1, a2, a3);
    }
    iVar2 = mwRna_is_playing(a0);
    if (iVar2 == 1) {
        if (*(char *)(a0 + 5) != '\0')
            goto LAB_8c26958c;
        iVar2 = mwRna_sub_269244(a0, unused_a1, a2, a3);
    } else {
        iVar2 = mwRna_is_output_on(a0);
        if ((iVar2 != 1) || (*(int *)(a0 + 0x28) <= *(int *)(a0 + 0x54)))
            goto LAB_8c26958c;
        if ((*(char *)(a0 + 5) == '\x01') && (iVar2 = mwRna_sub_268e1a(a0, unused_a1, a2, a3), iVar2 == 1)) {
            mwRna_sub_269056(a0);
            *(u8 *)(a0 + 5) = 0;
        }
        if (*(char *)(a0 + 5) != '\0')
            goto LAB_8c26958c;
        iVar2 = mwRna_sub_2693ce(a0);
    }
    if (0 < iVar2) {
        *(u8 *)(a0 + 5) = 1;
    }
LAB_8c26958c:
    if (((*(char *)(a0 + 1) == '\x05') && (*(int *)(a0 + 0x40) <= *(int *)(a0 + 0x34))) &&
        (*(char *)(a0 + 7) == '\0')) {
        mwRna_set_play_sw(a0, 1, a2, a3);
        *(u32 *)(a0 + 0x40) = 0x7fffffff;
    }
    if ((*(u8 *)(a0 + 1) == 6) && (*(int *)(a0 + 0x34) == 0)) {
        uVar3 = 0;
        mwRna_set_play_sw(a0, 0, a2, a3);
        uVar3 = noop_268d60();
        return uVar3;
    }
    return (u32) * (u8 *)(a0 + 1);
}

/*
 * mwRna_sub_2695e4  0x8c2695e4
 * area name: sits between mwRna functions (same compilation unit)
 * called by: thunk_FUN_8c2695e4
 */
u32 mwRna_sub_2695e4(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    char *a5;
    char *pcVar2;
    int iVar3;
    char *a4;
    char *pcVar4;
    u8 auStack_18[8];

    sd_irq_disable(auStack_18);
    iVar3 = (int)0x90;
    pcVar2 = 0x8c4bd580 + 0x480;
    a5 = 0x8c4bd580;
    a4 = 0x8c4bd580;
    pcVar4 = 0x8c4bd580;
    do {
        if (*pcVar4 == '\x01') {
            mwRna_sub_2694a4(a4, a5, a2, a3);
        }
        pcVar4 = pcVar4 + iVar3;
        a4 = a4 + iVar3;
    } while (pcVar4 < pcVar2);
    uVar1 = sd_irq_restore(auStack_18);
    return uVar1;
}

/*
 * mwRna_sub_26962c  0x8c26962c
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: sits between mwRna functions (same
 * compilation unit) strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_sub_26962c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 in_stack_fffffff0;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_fffffff0);
    } else {
        sd_irq_disable(&stack0xfffffff0);
        if (*(char *)(a0 + 7) == '\0') {
            iVar2 = mwRna_is_output_on(a0);
            uVar3 = mwRna_is_playing(a0);
            *(u32 *)(a0 + 0x88) = iVar2 << 1 | uVar3;
            mwRna_sub_268ea8(a0, a1, a2, a3);
            a1 = 0;
            mwRna_set_play_sw(a0, 0, a2, a3);
            *(u8 *)(a0 + 7) = 1;
            if (*(char *)(a0 + 5) == '\x01') {
                *(u32 *)(a0 + 0x8c) = 1;
                sd_irq_restore(&stack0xfffffff0);
                mwRnaPause(a0, a1, a2, a3, in_stack_fffffff0);
                sd_irq_disable(&stack0xfffffff0);
                *(u32 *)(a0 + 0x8c) = 0;
            }
            mwRna_sub_269738(a0, a1, a2, a3);
        }
        uVar1 = sd_irq_restore(&stack0xfffffff0);
    }
    return uVar1;
}

/*
 * mwRna_sub_2696aa  0x8c2696aa
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: sits between mwRna functions (same
 * compilation unit) strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_sub_2696aa(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_fffffff4;

    if (a0 == 0) {
        uVar1 = debug_printf(0, unused_a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_fffffff4);
        return uVar1;
    }
    sd_irq_disable(&stack0xfffffff4);
    if (*(char *)(a0 + 7) == '\x01') {
        if ((*(int *)(a0 + 0x88) != 0) && (*(int *)(a0 + 0x88) != 1)) {
            unused_a1 = 1;
            mwRna_set_play_sw(a0, 1, a2, a3);
        }
        *(u8 *)(a0 + 7) = 0;
    }
    uVar1 = sd_irq_restore(&stack0xfffffff4);
    return uVar1;
}

/*
 * mwRna_sub_269718  0x8c269718
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: sits between mwRna functions (same
 * compilation unit) strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_sub_269718(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0;
    }
    return (u32) * (u8 *)(a0 + 7);
}

/*
 * mwRna_sub_269738  0x8c269738
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: sits between mwRna functions (same
 * compilation unit) called by: mwRna_sub_26962c strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_sub_269738(int a0, int a1, u8 *a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u8 *puVar3;
    int in_stack_ffffffec;
    u8 auStack_10[4];
    int *piStack_c;

    puVar3 = &stack0xffffffec;
    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_ffffffec);
        return uVar1;
    }
    sd_irq_disable(auStack_10);
    if (*(char *)(a0 + 5) == '\x01') {
        iVar2 = mwRna_is_playing(a0);
        if (iVar2 == 1) {
            mwRna_sub_268f3e(a0, a1, a2, a3);
        } else {
            mwRna_sub_269056(a0);
        }
        *(u8 *)(a0 + 5) = 0;
    }
    if ((*(int *)(a0 + 0x30) != 0) && (0 < *(int *)(a0 + 0x34))) {
        piStack_c = *(int **)(a0 + 0x38);
        iVar2 = (**(code **)(*piStack_c + 0x54))(piStack_c, *(u32 *)(a0 + 0x30), &stack0xffffffec, a3);
        a2 = puVar3;
        if (*(int *)(a0 + 0x88) == 2) {
            uVar1 = libgcc_divide_helper_010614((*(int *)(a0 + 0x50) + *(int *)(a0 + 0x28)) - in_stack_ffffffec,
                                                *(int *)(a0 + 0x28));
            *(u32 *)(a0 + 0x50) = uVar1;
            a2 = puVar3;
        }
        a1 = *(int *)(a0 + 0x28);
        uVar1 = libgcc_divide_helper_010614((*(int *)(a0 + 0x2c) + a1) - in_stack_ffffffec, a1);
        *(u32 *)(a0 + 0x2c) = uVar1;
        *(int *)(a0 + 0x30) = (*(int *)(a0 + 0x30) + iVar2) - in_stack_ffffffec;
        *(int *)(a0 + 0x34) = *(int *)(a0 + 0x34) - iVar2;
    }
    uVar1 = sd_irq_restore(auStack_10);
    return uVar1;
}

/*
 * mwRnaDiscardData  0x8c269808
 * named from the library error message it prints (mwRnaDiscardData)
 * called by: ADX_sub_2641ee, mwRnaDiscardData_wrap
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"; "E1210:mwRnaDiscardData Play Switch is ON"
 */
u32 mwRnaDiscardData(int a0, int a1, u8 *a2, u8 *a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    char *s0;
    u8 *a5;
    int *piVar5;
    u8 *ar5_00;
    u8 auStack_4c[4];
    u8 *puStack_48;
    u8 *puStack_44;
    u8 auStack_40[8];
    u8 auStack_38[8];
    u8 auStack_30[4];
    u8 *puStack_2c;
    u8 auStack_28[4];
    u8 *puStack_24;

    iVar2 = a0;
    iVar3 = a1;
    if (a0 == 0) {
        s0 = "E1205:Illigal parameter (MWRNA=NULL)";
    } else {
        iVar1 = mwRna_is_output_on(a0);
        if (iVar1 != 1) {
            if (iVar3 < 1) {
                return 0;
            }
            *(u32 *)(a0 + 0x8c) = 1;
            if (*(char *)(a0 + 5) == '\x01') {
                mwRnaPause(a0, a1, a2, a3, iVar3);
                iVar2 = mwRna_is_playing(a0);
                if (iVar2 == 1) {
                    mwRna_sub_268f3e(a0, a1, a2, a3);
                } else {
                    mwRna_sub_269056(a0);
                }
                *(u8 *)(a0 + 5) = 0;
            }
            sd_irq_disable(auStack_4c);
            *(u32 *)(a0 + 0x8c) = 0;
            iVar2 = libgcc_divide_helper_010468(0x20, *(u32 *)(a0 + 8));
            iVar2 = iVar2 << 3;
            iVar3 = libgcc_divide_helper_010468(iVar3, iVar2);
            iVar3 = iVar3 * iVar2;
            if (*(int *)(a0 + 0x34) < iVar3) {
                iVar2 = (iVar3 - *(int *)(a0 + 0x34)) * *(int *)(a0 + 8);
                if (iVar2 < 0) {
                    iVar2 = iVar2 + 7;
                }
                a2 = (u8 *)(iVar2 >> 3);
                (**(code **)(**(int **)(a0 + 0x10) + 0x18))(*(int **)(a0 + 0x10), 1, a2, auStack_30);
                a5 = (u8 *)0x1;
                a3 = auStack_28;
                (**(code **)(**(int **)(a0 + 0x14) + 0x18))(*(int **)(a0 + 0x14), 1, a2, a3);
                ar5_00 = puStack_2c;
                if ((*(char *)(a0 + 3) != '\x01') &&
                    (puStack_48 = auStack_28, a5 = puStack_24, a2 = puStack_2c, ar5_00 = puStack_24,
                     puStack_44 = auStack_30, (int)puStack_2c < (int)puStack_24)) {
                    ar5_00 = puStack_2c;
                }
                for (iVar2 = 0; iVar2 < (int)(u32) * (u8 *)(a0 + 3); iVar2 = iVar2 + 1) {
                    a3 = auStack_40;
                    span_take(auStack_30 + iVar2 * 8, ar5_00, auStack_38, a3);
                    piVar5 = *(int **)(a0 + 0x10 + iVar2 * 4);
                    (**(code **)(*piVar5 + 0x20))(piVar5, 0, auStack_38, a3);
                    piVar5 = *(int **)(a0 + 0x10 + iVar2 * 4);
                    a5 = (u8 *)0x1;
                    a2 = auStack_40;
                    (**(code **)(*piVar5 + 0x1c))(piVar5, 1, a2, a3);
                }
                *(u32 *)(a0 + 0x2c) = 0;
                *(u32 *)(a0 + 0x34) = 0;
                iVar2 = libgcc_divide_helper_010468(ar5_00, *(u32 *)(a0 + 8));
                iVar2 = iVar2 * 8 + *(int *)(a0 + 0x28);
            } else {
                a5 = (u8 *)libgcc_divide_helper_010614(*(int *)(a0 + 0x30) + iVar3, *(u32 *)(a0 + 0x28));
                iVar2 = (**(code **)(**(int **)(a0 + 0x38) + 0x58))(*(int **)(a0 + 0x38), a5, a2, a3);
                iVar3 = *(int *)(a0 + 0x34) - iVar2;
                *(int *)(a0 + 0x34) = iVar3;
                uVar4 = libgcc_divide_helper_010614(iVar3, *(u32 *)(a0 + 0x28));
                *(u32 *)(a0 + 0x2c) = uVar4;
            }
            *(u32 *)(a0 + 0x30) = 0;
            sd_irq_restore(auStack_4c);
            return iVar2;
        }
        s0 = "E1210:mwRnaDiscardData Play Switch is ON";
    }
    debug_printf(iVar2, a1, a2, a3, s0, iVar3);
    return 0;
}

/*
 * mwRnaGetTime  0x8c2699d0
 * *a1 = samples played (+0x4c - +0x34), *a2 = sampling rate (+0xc); matches the CRI mwRna API shape
 * called by: cri_sub_263cd8, cri_sub_263ce4, mwRnaGetTime_wrap
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaGetTime(int a0, int *a1, u32 *a2, u32 a3) {
    u32 uVar1;
    u32 *puVar2;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", a2);
    } else {
        puVar2 = a2;
        mwRna_sub_268ea8(a0, a1, a2, a3);
        *a1 = *(int *)(a0 + 0x4c) - *(int *)(a0 + 0x34);
        uVar1 = mwRnaGetSfreq(a0);
        *puVar2 = uVar1;
    }
    return uVar1;
}

/*
 * mwRna_get_status  0x8c269a10
 * the status byte +1 of an mwRna handle (bit 0 playing, bit 1 output on)
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_get_status(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return (u32) * (u8 *)(a0 + 1);
}

/*
 * mwRna_is_playing  0x8c269a30
 * bit 0 of +1 of an mwRna handle; -1 for NULL
 * called by: mwRnaDiscardData, mwRna_sub_268ea8, mwRna_sub_2690d8, mwRna_sub_2694a4, mwRna_sub_26962c, mwRna_sub_269738
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_is_playing(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return *(u8 *)(a0 + 1) & 1;
}

/*
 * mwRna_is_output_on  0x8c269a56
 * bit 1 of +1 of an mwRna handle; -1 for NULL
 * called by: mwRnaDiscardData, mwRna_set_play_sw, mwRna_sub_2694a4, mwRna_sub_26962c
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_is_output_on(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return (int)(*(u8 *)(a0 + 1) & 2) >> 1;
}

/*
 * mwRna_status_bit2  0x8c269a7e
 * bit 2 of +1 of an mwRna handle; -1 for NULL
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_status_bit2(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return (int)(*(u8 *)(a0 + 1) & 4) >> 2;
}

/*
 * mwRna_get_read_pos  0x8c269aa8
 * +0x34 of an mwRna handle
 * called by: cri_sub_264a42, cri_sub_264b7a, mwRna_get_read_pos_wrap
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_get_read_pos(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return *(u32 *)(a0 + 0x34);
}

/*
 * mwRna_get_buffered  0x8c269ac6
 * +0x28 - +0x34 of an mwRna handle
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_get_buffered(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return *(int *)(a0 + 0x28) - *(int *)(a0 + 0x34);
}

/*
 * mwRnaSetNumChan  0x8c269ae8
 * named from the library error message it prints (mwRnaSetNumChan)
 * called by: cri_sub_2647f4, mwRnaSetNumChan_wrap, sd_sub_268b70
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"; "E1211:mwRnaSetNumChan Illigal parameter(NCH>MAXNCH)"
 */
u32 mwRnaSetNumChan(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    char *s0;
    u32 in_stack_fffffff0;

    if (a0 == 0) {
        s0 = "E1205:Illigal parameter (MWRNA=NULL)";
    } else {
        if (a1 <= (int)(u32) * (u8 *)(a0 + 2)) {
            *(char *)(a0 + 3) = (char)a1;
            (**(code **)(**(int **)(a0 + 0x38) + 0x1c))(*(int **)(a0 + 0x38), (int)(char)a1, a2, a3);
            if (a1 == 1) {
                *(u32 *)(a0 + 100) = 0;
                *(u32 *)(a0 + 0x68) = 0;
            } else {
                *(u32 *)(a0 + 100) = 0xfffffff1;
                *(u32 *)(a0 + 0x68) = 0xf;
            }
            mwRnaSetOutPan(a0, 0, *(u32 *)(a0 + 100), a3);
            uVar1 = mwRnaSetOutPan(a0, 1, *(u32 *)(a0 + 0x68), a3);
            return uVar1;
        }
        s0 = "E1211:mwRnaSetNumChan Illigal parameter(NCH>MAXNCH)";
    }
    uVar1 = debug_printf(a0, a1, a2, a3, s0, in_stack_fffffff0);
    return uVar1;
}

/*
 * mwRna_set_field_44  0x8c269b6e
 * +0x44 of an mwRna handle = a1
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_set_field_44(int a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 in_PR;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return uVar1;
    }
    *(u32 *)(a0 + 0x44) = a1;
    return 0x44;
}

/*
 * mwRnaSetBitPerSmpl  0x8c269b8e
 * sets bits per sample (+8), rescaling the buffer length +0x28; output vtable slot 0x2c
 * called by: cri_sub_2647f4, mwRnaSetBitPerSmpl_wrap, mwRna_sub_269fc8, sd_sub_268b70
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaSetBitPerSmpl(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 in_stack_fffffff0;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_fffffff0);
    } else {
        iVar2 = *(int *)(a0 + 0x28) * *(int *)(a0 + 8);
        if (iVar2 < 0) {
            iVar2 = iVar2 + 7;
        }
        iVar2 = libgcc_divide_helper_010468(iVar2 >> 3, a1);
        *(int *)(a0 + 0x28) = iVar2 << 3;
        uVar1 = (**(code **)(**(int **)(a0 + 0x38) + 0x2c))(*(int **)(a0 + 0x38), a1, a2, a3);
        *(u32 *)(a0 + 8) = a1;
    }
    return uVar1;
}

/*
 * mwRnaSetSfreq  0x8c269c04
 * sets the sampling rate (+0xc); output vtable slot 0x24
 * called by: cri_sub_2647f4, mwRnaSetSfreq_wrap, mwRna_sub_269fc8, sd_sub_268b70
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaSetSfreq(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", a1);
        return uVar1;
    }
    uVar1 = (**(code **)(**(int **)(a0 + 0x38) + 0x24))(*(int **)(a0 + 0x38), a1, a2, a3);
    *(u32 *)(a0 + 0xc) = a1;
    return uVar1;
}

/*
 * mwRnaSetOutVol  0x8c269c3e
 * output volume clamped to -999..0 (+0x60); output vtable slot 0x34
 * called by: cri_sub_263e8e, cri_sub_2647f4, mwRnaSetOutVol_wrap
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaSetOutVol(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_fffffff0;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_fffffff0);
    } else {
        if (a1 < 0) {
            if (a1 < -0x3e6) {
                a1 = -999;
            }
        } else {
            a1 = 0;
        }
        (**(code **)(**(int **)(a0 + 0x38) + 0x34))(*(int **)(a0 + 0x38), a1, a2, a3);
        uVar1 = 0x60;
        *(int *)(a0 + 0x60) = a1;
    }
    return uVar1;
}

/*
 * mwRnaSetOutPan  0x8c269c88
 * pan of channel a1 clamped to -15..15 (+0x64[a1]); output vtable slot 0x3c
 * called by: mwRnaSetNumChan
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaSetOutPan(int a0, int a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, a3, "E1205:Illigal parameter (MWRNA=NULL)", a1);
    } else {
        iVar2 = -0xf;
        if ((a2 < -0xf) || (iVar2 = 0xf, 0xf < a2)) {
            a2 = iVar2;
        }
        uVar1 = (**(code **)(**(int **)(a0 + 0x38) + 0x3c))(*(int **)(a0 + 0x38), a1, a2, a3);
        *(int *)(a1 * 4 + a0 + 100) = a2;
    }
    return uVar1;
}

/*
 * mwRnaSetFx  0x8c269cec
 * named from the library error message it prints (mwRnaSetFx)
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"; "E1207:mwRnaSetFx Illigal parameter (FXCH)"
 */
u32 mwRnaSetFx(int a0, int a1, int a2) {
    u32 r7;
    u32 uVar1;
    char *s0;
    u32 in_stack_ffffffec;

    if (a0 == 0) {
        s0 = "E1205:Illigal parameter (MWRNA=NULL)";
    } else {
        if ((-1 < a1) && (a1 < 0x11)) {
            if (a2 < -0x2d) {
                a2 = -0x2d;
            } else if (0 < a2) {
                a2 = 0;
            }
            (**(code **)(**(int **)(a0 + 0x38) + 0x44))(*(int **)(a0 + 0x38), 0, a1, a2);
            *(int *)(a0 + 0x6c) = a1;
            *(int *)(a0 + 0x70) = a2;
            return 0x70;
        }
        s0 = "E1207:mwRnaSetFx Illigal parameter (FXCH)";
    }
    uVar1 = debug_printf(a0, a1, a2, r7, s0, in_stack_ffffffec);
    return uVar1;
}

/*
 * mwRna_set_fx1  0x8c269d58
 * effect send 1 (stores the values read back at +0x74/+0x78)
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_set_fx1(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u32 in_stack_ffffffe4;
    u32 uStack_18;
    int *piStack_14;
    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_ffffffe4);
        return uVar1;
    }
    piStack_14 = *(int **)(a0 + 0x38);
    (**(code **)(*piStack_14 + 0x44))(piStack_14, 1, a1, a2);
    piStack_14 = *(int **)(a0 + 0x38);
    (**(code **)(*piStack_14 + 0x48))(piStack_14, 1, &stack0xffffffe4, &uStack_18);
    *(u32 *)(a0 + 0x74) = in_stack_ffffffe4;
    *(u32 *)(a0 + 0x78) = uStack_18;
    return 0x78;
}

/*
 * mwRna_set_fx2_level  0x8c269db8
 * effect send 2 level clamped to -45..0 (+0x84)
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_set_fx2_level(int a0, int a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 in_stack_fffffff0;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_stack_fffffff0);
    } else {
        if (a1 < -0x2d) {
            a1 = -0x2d;
        } else if (0 < a1) {
            a1 = 0;
        }
        (**(code **)(**(int **)(a0 + 0x38) + 0x44))(*(int **)(a0 + 0x38), 2, a1, 0);
        uVar1 = 0x84;
        *(int *)(a0 + 0x84) = a1;
    }
    return uVar1;
}

/*
 * mwRnaGetBitPerSmpl  0x8c269e18
 * +8 of an mwRna handle
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaGetBitPerSmpl(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return *(u32 *)(a0 + 8);
}

/*
 * mwRnaGetSfreq  0x8c269e36
 * +0xc of an mwRna handle
 * called by: mwRnaGetTime
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaGetSfreq(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return *(u32 *)(a0 + 0xc);
}

/*
 * mwRnaGetOutVol  0x8c269e54
 * +0x60 of an mwRna handle
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaGetOutVol(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return *(u32 *)(a0 + 0x60);
}

/*
 * mwRnaGetOutPan  0x8c269e74
 * +0x64[a1] of an mwRna handle
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaGetOutPan(int a0, int a1) {
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, a1, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return *(u32 *)(a1 * 4 + a0 + 100);
}

/*
 * mwRnaGetFx  0x8c269e9a
 * *a1, *a2 = effect channel and level (+0x6c, +0x70)
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRnaGetFx(int a0, u32 *a1, u32 *a2) {
    u32 r7;
    u32 uVar1;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, r7, "E1205:Illigal parameter (MWRNA=NULL)", a2);
        *a1 = 0xffffffff;
        *a2 = 0xffffffff;
        return uVar1;
    }
    *a1 = *(u32 *)(a0 + 0x6c);
    *a2 = *(u32 *)(a0 + 0x70);
    return 0x70;
}

/*
 * mwRna_get_fx1  0x8c269eda
 * *a1, *a2 = +0x74, +0x78
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_get_fx1(int a0, u32 *a1, u32 *a2) {
    u32 r7;
    u32 uVar1;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, r7, "E1205:Illigal parameter (MWRNA=NULL)", a2);
        *a1 = 0xffffffff;
        *a2 = 0xffffffff;
        return uVar1;
    }
    *a1 = *(u32 *)(a0 + 0x74);
    *a2 = *(u32 *)(a0 + 0x78);
    return 0x78;
}

/*
 * mwRna_get_fx2_level  0x8c269f1a
 * +0x84 of an mwRna handle
 * strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_get_fx2_level(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 in_PR;

    if (a0 == 0) {
        debug_printf(0, r5, r6, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return 0xffffffff;
    }
    return *(u32 *)(a0 + 0x84);
}

/*
 * thunk_FUN_8c26a130  0x8c269f3a
 * called by: cri_sub_262810, cri_sub_262814
 */
u32 thunk_FUN_8c26a130(u32 unused_a0, u32 a1) {
    u32 uVar1;

    uVar1 = (g_8c26a130)();
    return uVar1;
}

/*
 * mwRna_sub_269f50  0x8c269f50
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: sits between mwRna functions (same
 * compilation unit) strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_sub_269f50(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, r7, "E1205:Illigal parameter (MWRNA=NULL)", a2);
        return uVar1;
    }
    *(u32 *)(a0 + 0x7c) = a1;
    *(u32 *)(a0 + 0x80) = a2;
    /* WARNING: Could not recover jumptable at 0x8c269f94. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(a0 + 0x38) + 0x44))(*(int **)(a0 + 0x38), 3, a1, a2);
    return uVar1;
}

/*
 * mwRna_sub_269fa0  0x8c269fa0
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: sits between mwRna functions (same
 * compilation unit) strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_sub_269fa0(int a0, u32 *a1, u32 *a2) {
    u32 r7;
    u32 uVar1;
    u32 in_PR;

    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, r7, "E1205:Illigal parameter (MWRNA=NULL)", in_PR);
        return uVar1;
    }
    *a1 = *(u32 *)(a0 + 0x7c);
    *a2 = *(u32 *)(a0 + 0x80);
    return 0x80;
}

/*
 * mwRna_sub_269fc8  0x8c269fc8
 * name hint from a string it uses: E1205 Illigal parameter MWRN; area name: sits between mwRna functions (same
 * compilation unit) called by: cri_sub_262a4c strings: "E1205:Illigal parameter (MWRNA=NULL)"
 */
u32 mwRna_sub_269fc8(int a0, u32 a1, int *a2) {
    u32 r7;
    u32 uVar1;
    u32 uVar2;
    u32 *a6;
    u8 *a7;
    u32 *a7_00;
    int *piVar3;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 *puStack_24;
    int *piStack_20;
    u8 auStack_1c[4];
    u32 uStack_18;
    u32 uStack_14;
    u32 auStack_10[2];

    puStack_24 = (u32 *)a1;
    if (a0 == 0) {
        uVar1 = debug_printf(0, a1, a2, r7, "E1205:Illigal parameter (MWRNA=NULL)", a2);
    } else {
        (**(code **)(**(int **)(a0 + 0x38) + 0x44))(*(int **)(a0 + 0x38), 4, a1, 0);
        uVar2 = 4;
        a7 = auStack_1c;
        piVar3 = a2;
        uVar1 = (**(code **)(**(int **)(a0 + 0x38) + 0x48))(*(int **)(a0 + 0x38), 4, a2, a7);
        if (0 < *piVar3) {
            uVar1 = (**(code **)(**(int **)(a0 + 0x38) + 0x30))(*(int **)(a0 + 0x38), uVar2, a2, a7);
            uStack_18 = (**(code **)(**(int **)(a0 + 0x38) + 0x28))(*(int **)(a0 + 0x38), uVar2, a2, a7);
            uVar2 = (**(code **)(**(int **)(a0 + 0x38) + 0x38))(*(int **)(a0 + 0x38), uVar2, a2, a7);
            puStack_24 = &uStack_14;
            piStack_20 = *(int **)(a0 + 0x38);
            uStack_14 = (**(code **)(*piStack_20 + 0x40))(piStack_20, 0, a2, a7);
            piStack_20 = auStack_10;
            auStack_10[0] = (**(code **)(**(int **)(a0 + 0x38) + 0x40))(*(int **)(a0 + 0x38), 1, a2, a7);
            (**(code **)(**(int **)(a0 + 0x38) + 0x48))(*(int **)(a0 + 0x38), 0, &uStack_2c, &uStack_28);
            a6 = &uStack_34;
            a7_00 = &uStack_30;
            (**(code **)(**(int **)(a0 + 0x38) + 0x48))(*(int **)(a0 + 0x38), 3, a6, a7_00);
            mwRnaSetBitPerSmpl(a0, uVar1, a6, a7_00);
            mwRnaSetSfreq(a0, uStack_18, a6, a7_00);
            *(u32 *)(a0 + 0x60) = uVar2;
            *(u32 *)(a0 + 100) = *puStack_24;
            *(int *)(a0 + 0x68) = *piStack_20;
            *(u32 *)(a0 + 0x6c) = uStack_2c;
            *(u32 *)(a0 + 0x70) = uStack_28;
            *(u32 *)(a0 + 0x7c) = uStack_34;
            uVar1 = 0x80;
            *(u32 *)(a0 + 0x80) = uStack_30;
        }
    }
    return uVar1;
}

/*
 * noop_26a0f8  0x8c26a0f8
 * called by: sd_sub_2689c8
 */
u32 noop_26a0f8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * sd_irq_disable  0x8c26a100
 * saves SR.IMASK in *a0 and returns SR with IMASK 15
 * called by: mwRnaDiscardData, mwRnaStop, mwRna_set_play_sw, mwRna_sub_268ea8, mwRna_sub_268f3e, mwRna_sub_2690d8,
 * mwRna_sub_2695e4, mwRna_sub_26962c (+5 more)
 */
u32 sd_irq_disable(u32 *a0) {
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
 * sd_irq_restore  0x8c26a118
 * SR with IMASK from *a0
 * called by: mwRnaDiscardData, mwRnaStop, mwRna_set_play_sw, mwRna_sub_268ea8, mwRna_sub_268f3e, mwRna_sub_2690d8,
 * mwRna_sub_2695e4, mwRna_sub_26962c (+5 more)
 */
u32 sd_irq_restore(u32 *a0) {
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
 * sd_sub_26a130  0x8c26a130
 * area name: in the sd library code range
 * called by: sd_sub_2689c8
 */
u32 sd_sub_26a130(int a0, u32 a1) {
    u8 *puVar1;
    u32 uVar2;

    puVar1 = (&DATA_8c2785e4);
    if (a0 == 0) {
        *(u32 *)(&DATA_8c2785e0) = 0;
        *(u32 *)puVar1 = 0;
    } else {
        *(int *)(&DATA_8c2785e0) = a0;
        *(u32 *)puVar1 = a1;
    }
    uVar2 = memset(0x8c4bea48, 0, (int)0x100);
    return uVar2;
}

/*
 * debug_printf  0x8c26a14e
 * called by: mwRnaDiscardData, mwRnaGetBitPerSmpl, mwRnaGetFx, mwRnaGetOutPan, mwRnaGetOutVol, mwRnaGetSfreq,
 * mwRnaGetTime, mwRnaPause (+47 more)
 */
u32 debug_printf(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, u32 s4) {
    u32 uVar1;

    uVar1 = vsprintf_like(0x8c4bea48, s0, &s4);
    if (*(code **)(&DATA_8c2785e0) != NULL) {
        uVar1 = (**(code **)(&DATA_8c2785e0))(*(u32 *)(&DATA_8c2785e4), 0x8c4bea48);
    }
    return uVar1;
}

/*
 * sd_sub_26a152  0x8c26a152
 * area name: in the sd library code range
 */
u32 sd_sub_26a152(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12) {
    u32 uVar1;
    u32 *ar6_00;

    if ((a1 & (u32)&s8) == 0) {
        ar6_00 = &s8;
    } else {
        ar6_00 = &s12;
    }
    uVar1 = vsprintf_like(0x8c4bea48, s4, ar6_00);
    if (*(code **)(&DATA_8c2785e0) != NULL) {
        uVar1 = (**(code **)(&DATA_8c2785e0))(*(u32 *)(&DATA_8c2785e4), 0x8c4bea48, ar6_00, a3);
    }
    return uVar1;
}

/*
 * sd_sub_26a1a4  0x8c26a1a4
 * area name: in the sd library code range
 * called by: sd_sub_26a204
 */
u32 sd_sub_26a1a4(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;

    uVar1 = memset(0x8c4beb48, 0, 0x40);
    iVar3 = 0xf;
    uVar4 = 0x8c4beb48 + 0x40;
    uVar2 = 0x8c4beb48;
    do {
        *(int *)(uVar2 + 4) = iVar3;
        uVar2 = uVar2 + 8;
        iVar3 = iVar3 + -1;
    } while (uVar2 < uVar4);
    return uVar1;
}

/*
 * sd_sub_26a1ca  0x8c26a1ca
 * area name: in the sd library code range
 * called by: sd_sub_26a246
 */
u32 sd_sub_26a1ca(void) {
    int *piVar1;
    int *piVar2;

    piVar1 = 0x8c4beb48;
    piVar2 = 0x8c4beb48;
    while (true) {
        if (0x8c4beb48 + 0x10 <= piVar1) {
            return 0;
        }
        if (*piVar1 == 0)
            break;
        piVar1 = piVar1 + 2;
        piVar2 = piVar2 + 2;
    }
    *piVar2 = 1;
    return piVar2;
}

/*
 * clear_field_0_26a1f2  0x8c26a1f2
 * called by: sd_sub_26a5de
 */
u32 clear_field_0_26a1f2(u32 *a0) {
    u32 in_r0;

    *a0 = 0;
    return in_r0;
}

/*
 * get_field_4_26a1f8  0x8c26a1f8
 * called by: sd_sub_26a246
 */
u32 get_field_4_26a1f8(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * sd_sub_26a204  0x8c26a204
 * area name: in the sd library code range
 */
u32 sd_sub_26a204(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    memset(0x8c4beb88, 0, (int)0x2a0);
    uVar1 = sd_sub_26a1a4();
    return uVar1;
}

/*
 * sd_sub_26a220  0x8c26a220
 * area name: in the sd library code range
 * called by: sd_sub_26a246
 */
u32 sd_sub_26a220(void) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;

    uVar2 = 0x8c4beb88;
    for (uVar1 = 0x8c4beb88; (uVar3 = 0, uVar1 < 0x8c4beb88 + (int)0x2a0 && (uVar3 = uVar2, *(int *)(uVar1 + 4) != 0));
         uVar1 = uVar1 + 0x54) {
        uVar2 = uVar2 + 0x54;
    }
    return uVar3;
}

/*
 * sd_sub_26a246  0x8c26a246
 * name hint from a string it uses: E1221 Illigal parameter NCH ; area name: in the sd library code range
 */
u32 sd_sub_26a246(int a0, int a1, int a2, int a3) {
    u8 *puVar1;
    u8 *puVar2;
    u8 *puVar3;
    u8 *puVar4;
    u32 *puVar5;
    int iVar6;
    int iVar7;
    u32 *puVar8;
    u32 uVar9;
    u32 a7;
    int iVar10;
    int *piVar11;
    u32 *puStack_40;
    int *piStack_3c;
    u32 *puStack_38;
    int iStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    int aiStack_28[3];

    puVar1 = (&debug_printf);
    iVar6 = a0;
    if (((a0 < 1) || (2 < a0)) || (puVar5 = (u32 *)sd_sub_26a220(), puVar5 == NULL)) {
        (*(code *)puVar1)(iVar6, a1, a2, a3);
    } else {
        *puVar5 = (&DATA_8c278600);
        for (iVar10 = 0; puVar2 = (&clear_field_0_26a1f2), iVar10 < a0; iVar10 = iVar10 + 1) {
            puVar8 = puVar5 + iVar10 + 6;
            uVar9 = sd_sub_26a1ca();
            *puVar8 = uVar9;
            if (puVar5[iVar10 + 6] == 0) {
                (*(code *)puVar1)(iVar6, a1, a2, a3);
                iVar6 = 0;
                puVar5 = puVar5 + 6;
                if (iVar10 < 1) {
                    return 0;
                }
                do {
                    uVar9 = *puVar5;
                    puVar5 = puVar5 + 1;
                    (*(code *)puVar2)(uVar9, a1, a2, a3);
                    iVar6 = iVar6 + 1;
                } while (iVar6 < iVar10);
                return 0;
            }
            piVar11 = aiStack_28 + iVar10;
            iVar6 = puVar5[iVar10 + 6];
            iVar7 = get_field_4_26a1f8(iVar6);
            *piVar11 = iVar7;
        }
        puStack_40 = NULL;
        piVar11 = puVar5 + 0xe;
        piStack_3c = aiStack_28;
        if (0 < a0) {
            do {
                a3 = (int)0x4000;
                a1 = *piStack_3c;
                iVar10 = (0x10 - a1) * -0x4040 + 0x200000;
                a2 = iVar10;
                iVar6 = sd_sub_268320(0x52535053, a1, iVar10, a3);
                if (iVar6 != 0) {
                    (*(code *)puVar1)(iVar6, a1, a2, a3);
                }
                *piVar11 = iVar10;
                puStack_40 = (u32 *)((int)puStack_40 + 1);
                piVar11 = piVar11 + 1;
                piStack_3c = piStack_3c + 1;
            } while ((int)puStack_40 < a0);
        }
        puVar5[0x10] = (int)0x4000;
        for (puStack_40 = NULL; puVar3 = (&sd_handle_release), (int)puStack_40 < a0;
             puStack_40 = (u32 *)((int)puStack_40 + 1)) {
            iVar6 = aica_sub_265704(&uStack_30);
            if (iVar6 != 0) {
                (*(code *)puVar1)(iVar6, a1, a2, a3);
                piStack_3c = puVar5 + 8;
                puStack_38 = NULL;
                if (0 < (int)puStack_40) {
                    do {
                        iVar6 = (*(code *)puVar3)(*piStack_3c, a1, a2, a3);
                        if (iVar6 != 0) {
                            (*(code *)puVar1)(iVar6, a1, a2, a3);
                        }
                        puStack_38 = (u32 *)((int)puStack_38 + 1);
                        piStack_3c = piStack_3c + 1;
                    } while ((int)puStack_38 < (int)puStack_40);
                }
                iVar6 = 0;
                puVar5 = puVar5 + 6;
                if (a0 < 1) {
                    return 0;
                }
                do {
                    uVar9 = *puVar5;
                    puVar5 = puVar5 + 1;
                    (*(code *)puVar2)(uVar9, a1, a2, a3);
                    iVar6 = iVar6 + 1;
                } while (iVar6 < a0);
                return 0;
            }
            puVar5[(int)puStack_40 + 8] = uStack_30;
        }
        for (puStack_40 = NULL; (int)puStack_40 < a0; puStack_40 = (u32 *)((int)puStack_40 + 1)) {
            puVar8 = &uStack_30;
            iVar6 = aica_sub_265704(puVar8);
            if (iVar6 != 0) {
                (*(code *)puVar1)(puVar8, a1, a2, a3);
                puStack_38 = puVar5 + 10;
                iStack_34 = 0;
                if (0 < (int)puStack_40) {
                    do {
                        uVar9 = *puStack_38;
                        (*(code *)puVar3)(uVar9, a1, a2, a3);
                        if (iVar6 != 0) {
                            (*(code *)puVar1)(uVar9, a1, a2, a3);
                        }
                        iStack_34 = iStack_34 + 1;
                        puStack_38 = puStack_38 + 1;
                    } while (iStack_34 < (int)puStack_40);
                }
                puStack_40 = puVar5 + 8;
                puStack_38 = NULL;
                if (0 < a0) {
                    do {
                        uVar9 = *puStack_40;
                        (*(code *)puVar3)(uVar9, a1, a2, a3);
                        if (iVar6 != 0) {
                            (*(code *)puVar1)(uVar9, a1, a2, a3);
                        }
                        puStack_38 = (u32 *)((int)puStack_38 + 1);
                        puStack_40 = puStack_40 + 1;
                    } while ((int)puStack_38 < a0);
                }
                iVar6 = 0;
                puVar5 = puVar5 + 6;
                if (a0 < 1) {
                    return 0;
                }
                do {
                    uVar9 = *puVar5;
                    puVar5 = puVar5 + 1;
                    (*(code *)puVar2)(uVar9, a1, a2, a3);
                    iVar6 = iVar6 + 1;
                } while (iVar6 < a0);
                return 0;
            }
            puVar5[(int)puStack_40 + 10] = uStack_30;
        }
        if (a0 == 1) {
            puVar8 = &uStack_2c;
            iVar6 = sd_sub_2675d8(puVar8, a1, a2, a3, 1, (int)(char)aiStack_28[0]);
        } else {
            puVar8 = &uStack_2c;
            iVar6 = sd_sub_2675d8(puVar8, a1, a2, a3, a0, (int)(char)aiStack_28[0]);
        }
        puVar4 = (&thunk_FUN_8c2678a4);
        if (iVar6 == 0) {
            puVar5[0xc] = uStack_2c;
            puVar5[3] = a0;
            puVar5[2] = a0;
            for (iVar6 = 0; puVar2 = (&sd_sub_267914), iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
                iVar10 = iVar6;
                iVar7 = (*(code *)puVar4)(puVar5[0xc], iVar6, a2, a3);
                if (iVar7 != 0) {
                    (*(code *)puVar1)(iVar7, iVar10, a2, a3);
                }
            }
            for (iVar6 = 0; iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
                uVar9 = 0x7f;
                a7 = 0;
                iVar10 = iVar6;
                iVar7 = (*(code *)puVar2)(puVar5[0xc], iVar6, 0x7f, 0);
                if (iVar7 != 0) {
                    (*(code *)puVar1)(iVar7, iVar10, uVar9, a7);
                }
            }
            puVar5[0x12] = 0xffffffff;
            puVar5[0x11] = 0;
            puVar5[1] = 1;
            return puVar5;
        }
        (*(code *)puVar1)(puVar8, a1, a2, a3);
        piStack_3c = puVar5 + 8;
        iStack_34 = 0;
        if (0 < a0) {
            do {
                uVar9 = *piStack_3c;
                (*(code *)puVar3)(uVar9, a1, a2, a3);
                if (iVar6 != 0) {
                    (*(code *)puVar1)(uVar9, a1, a2, a3);
                }
                (*(code *)puVar2)(puVar5[(int)puStack_40 + 6], a1, a2, a3);
                iStack_34 = iStack_34 + 1;
                piStack_3c = piStack_3c + 1;
            } while (iStack_34 < a0);
        }
    }
    return 0;
}

/*
 * sd_sub_26a5de  0x8c26a5de
 * name hint from a string it uses: E1230 sdMemBlkDestroy return; area name: in the sd library code range
 */
u32 sd_sub_26a5de(u32 unused_a0, int unused_a1, u32 unused_a2, u32 a3, u32 ain0) {
    int iVar1;
    int iVar2;
    int unaff_r14;
    char in_T;

    if (in_T != '\x01') {
        for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
            clear_field_0_26a1f2(*(u32 *)(unaff_r14 + 0x18 + iVar2 * 4));
            iVar1 = sd_handle_release(*(u32 *)(unaff_r14 + 0x20 + iVar2 * 4));
            if (iVar1 != 0) {
                debug_printf(iVar1, unused_a1, unused_a2, a3);
            }
        }
        for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
            iVar1 = sd_handle_release(*(u32 *)(iVar2 * 4 + unaff_r14 + 0x28));
            if (iVar1 != 0) {
                debug_printf(iVar1, unused_a1, unused_a2, a3);
            }
        }
        for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
            unused_a1 = iVar2;
            iVar1 = thunk_FUN_8c2678a4(*(u32 *)(unaff_r14 + 0x30), iVar2, unused_a2, a3);
            if (iVar1 != 0) {
                debug_printf(iVar1, unused_a1, unused_a2, a3);
            }
        }
        iVar2 = thunk_FUN_8c266ccc(*(u32 *)(unaff_r14 + 0x30), unused_a1, unused_a2, a3);
        if (iVar2 != 0) {
            debug_printf(iVar2, unused_a1, unused_a2, a3);
        }
        *(u32 *)(unaff_r14 + 8) = 0;
        *(u32 *)(unaff_r14 + 0xc) = 0;
        ain0 = memset(unaff_r14, 0, 0x54);
        *(u32 *)(unaff_r14 + 4) = 0;
    }
    return ain0;
}

/*
 * sd_sub_26a6d8  0x8c26a6d8
 * name hint from a string it uses: E1241 sdSysFlushHostCmd retu; area name: in the sd library code range
 * called by: mwSndPlay, mwSndStop
 * strings: "E1241:sdSysFlushHostCmd return error mwSndPlay or mwSndStop"
 */
int sd_sub_26a6d8(u32 unused_a0, u32 a1, u32 a2) {
    u32 r7;
    int ar4_00;
    u32 in_PR;

    ar4_00 = sdSysFlushHostCmd(unused_a0, a1, a2);
    if ((ar4_00 != 0) && (ar4_00 != 0xb000003)) {
        ar4_00 = debug_printf(ar4_00, a1, a2, r7, "E1241:sdSysFlushHostCmd return error mwSndPlay or mwSndStop", in_PR);
    }
    return ar4_00;
}

/*
 * mwSndPlay  0x8c26a6fc
 * strings: "E1233:sdPstmPlay return error in mwSndPlay"
 */
u32 mwSndPlay(int a0, u32 a1) {
    u32 uVar1;
    int iVar2;
    u32 ar7_00;
    u32 s4;

    iVar2 = *(int *)(a0 + 0x10);
    uVar1 = *(u32 *)(a0 + 0x14);
    if (iVar2 == 0x10) {
        a1 = 1;
    } else if (iVar2 == 8) {
        a1 = 0;
    } else if (iVar2 == 4) {
        a1 = 2;
    }
    ar7_00 = 0;
    *(int *)(a0 + 0x10) = iVar2;
    s4 = uVar1;
    iVar2 = sdPstmPlay(*(u32 *)(a0 + 0x30), a1, uVar1, 0);
    if (iVar2 != 0) {
        debug_printf(iVar2, a1, uVar1, ar7_00, "E1233:sdPstmPlay return error in mwSndPlay", s4);
    }
    uVar1 = sd_sub_26a6d8(a0, 1, uVar1);
    return uVar1;
}

/*
 * mwSndStop  0x8c26a750
 * named from the library error message it prints (mwSndStop)
 * strings: "E1234:sdPstmStop return error in mwSndStop"
 */
u32 mwSndStop(u32 unused_a0, u32 unused_a1, u32 a2) {
    u32 r7;
    int ar4_00;
    u32 uVar1;
    int unaff_r14;
    u32 in_PR;

    ar4_00 = thunk_FUN_8c267f2c(*(u32 *)(unaff_r14 + 0x30), unused_a1, a2, r7);
    if (ar4_00 != 0) {
        debug_printf(ar4_00, unused_a1, a2, r7, "E1234:sdPstmStop return error in mwSndStop", in_PR);
    }
    uVar1 = sd_sub_26a6d8(unaff_r14, 0, a2);
    return uVar1;
}

/*
 * mwSnd_sub_26a772  0x8c26a772
 * area name: sits between mwSnd functions (same compilation unit)
 */
int mwSnd_sub_26a772(int a0) {
    int iVar1;

    iVar1 = libgcc_divide_helper_010468(*(u32 *)(a0 + 0x40), *(u32 *)(a0 + 0x10));
    return iVar1 << 3;
}

/*
 * mwSnd_sub_26a776  0x8c26a776
 * area name: sits between mwSnd functions (same compilation unit)
 */
int mwSnd_sub_26a776(void) {
    int iVar1;
    code *in_r3;

    iVar1 = (*in_r3)();
    return iVar1 << 3;
}

/*
 * mwSndSetNumChan  0x8c26a786
 * named from the library error message it prints (mwSndSetNumChan)
 * strings: "E1240:sdPstmSetUseCh return error in mwSndSetNumChan"
 */
u32 mwSndSetNumChan(int a0, u32 a1) {
    u32 r6;
    u32 r7;
    int ar4_00;
    u32 uVar1;
    u32 s4;

    *(u32 *)(a0 + 0xc) = a1;
    s4 = a1;
    ar4_00 = thunk_FUN_8c267d88(*(u32 *)(a0 + 0x30), a1, r6, r7);
    uVar1 = 0;
    if (ar4_00 != 0) {
        uVar1 = debug_printf(ar4_00, a1, r6, r7, "E1240:sdPstmSetUseCh return error in mwSndSetNumChan", s4);
    }
    return uVar1;
}

/*
 * mwSndGetPlayPos  0x8c26a7b4
 * strings: "E1236:sdPstmGetCurAdr return error in mwSndGetPlayPos"
 */
int mwSndGetPlayPos(int a0, u32 a1) {
    u32 r7;
    int iVar1;
    u32 ar5_00;
    u32 *ar6_00;
    u32 s4;
    u32 uStack_10;
    u32 uStack_c;

    s4 = 1;
    uStack_c = a1;
    sd_sub_266f38(*(u32 *)(a0 + 0x30), 0, &stack0xffffffec);
    if ((s4 & 1) == 0) {
        iVar1 = 0;
    } else {
        ar6_00 = &uStack_10;
        ar5_00 = uStack_c;
        iVar1 = thunk_FUN_8c266d28(*(u32 *)(a0 + 0x30), uStack_c, ar6_00, r7);
        if (iVar1 != 0) {
            debug_printf(iVar1, ar5_00, ar6_00, r7, "E1236:sdPstmGetCurAdr return error in mwSndGetPlayPos", s4);
        }
        iVar1 = libgcc_divide_helper_010468(uStack_10, *(u32 *)(a0 + 0x10));
        iVar1 = iVar1 << 3;
    }
    return iVar1;
}

/*
 * set_field_14_26a80a  0x8c26a80a
 */
u32 set_field_14_26a80a(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x14) = a1;
    return in_r0;
}

/*
 * set_field_10_26a812  0x8c26a812
 */
u32 set_field_10_26a812(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x10) = a1;
    return in_r0;
}

/*
 * mwSndSetVol  0x8c26a860
 * strings: "E1237:sdPstmSetVol return error in mwSndSetVol"
 */
int mwSndSetVol(int a0, int a1) {
    int in_r0;
    int iVar1;
    int ar4_00;
    int ar5_00;
    int iVar2;
    int ar6_00;
    u32 uVar3;
    u32 in_PR;

    iVar2 = -0x7f;
    if (-0x3bf < a1) {
        if (-1 < a1) {
            iVar1 = 0x7f;
            goto LAB_8c26a8aa;
        }
        iVar1 = libgcc_divide_helper_010468(a1 * -0xff + 0x80, 0xfffffc41);
        in_r0 = libgcc_divide_helper_010468(iVar1 * 10, 0x12);
        iVar1 = in_r0;
        if (iVar2 <= in_r0)
            goto LAB_8c26a8aa;
    }
    iVar1 = iVar2;
LAB_8c26a8aa:
    iVar2 = 0;
    while (true) {
        if (*(int *)(a0 + 0xc) <= iVar2) {
            return in_r0;
        }
        uVar3 = 0;
        ar5_00 = iVar2;
        ar6_00 = iVar1;
        ar4_00 = thunk_FUN_8c267e54(*(u32 *)(a0 + 0x30), iVar2, iVar1, 0);
        if (ar4_00 != 0)
            break;
        iVar2 = iVar2 + 1;
        in_r0 = 0;
    }
    uVar3 = debug_printf(ar4_00, ar5_00, ar6_00, uVar3, "E1237:sdPstmSetVol return error in mwSndSetVol", in_PR);
    return uVar3;
}

/*
 * mwSnd_sub_26a870  0x8c26a870
 * name hint from a string it uses: E1237 sdPstmSetVol return er; area name: sits between mwSnd functions (same
 * compilation unit)
 */
int mwSnd_sub_26a870(int a0, int a1, u32 unused_a2, u32 unused_a3, int ain0) {
    int iVar1;
    int a4;
    int a5;
    int iVar2;
    int a6;
    u32 uVar3;
    int unaff_r12;

    iVar2 = -0x7f;
    if (a0 < a1) {
        if (-1 < a1) {
            iVar1 = 0x7f;
            goto LAB_8c26a8aa;
        }
        iVar1 = libgcc_divide_helper_010468(a1 * -0xff + 0x80, a0);
        ain0 = libgcc_divide_helper_010468(iVar1 * 10, 0x12);
        iVar1 = ain0;
        if (iVar2 <= ain0)
            goto LAB_8c26a8aa;
    }
    iVar1 = iVar2;
LAB_8c26a8aa:
    iVar2 = 0;
    while (true) {
        if (*(int *)(unaff_r12 + 0xc) <= iVar2) {
            return ain0;
        }
        uVar3 = 0;
        a5 = iVar2;
        a6 = iVar1;
        a4 = thunk_FUN_8c267e54(*(u32 *)(unaff_r12 + 0x30), iVar2, iVar1, 0);
        if (a4 != 0)
            break;
        iVar2 = iVar2 + 1;
        ain0 = 0;
    }
    uVar3 = debug_printf(a4, a5, a6, uVar3);
    return uVar3;
}

/*
 * mwSndGetVol  0x8c26a8e4
 */
u32 mwSndGetVol(int a0) {
    u32 uVar1;
    u8 auStack_20[2];
    char cStack_1e;

    thunk_FUN_8c267250(*(u32 *)(a0 + 0x30), 0);
    uVar1 = libgcc_divide_helper_010468(cStack_1e * -0x77e + 0x80, 0xff);
    return uVar1;
}

/*
 * mwSndSetPan  0x8c26a914
 * strings: "E1238:sdPstmSetPan return error in mwSndSetPan"
 */
u32 mwSndSetPan(int a0, u32 a1, int a2) {
    u32 ar6_00;
    int ar4_00;
    u32 uVar1;
    u32 ar7_00;
    u32 s4;

    ar6_00 = libgcc_divide_helper_010468(a2 * 0x7f, 0xf);
    ar7_00 = 0;
    s4 = a1;
    ar4_00 = thunk_FUN_8c267b30(*(u32 *)(a0 + 0x30), a1, ar6_00, 0);
    uVar1 = 0;
    if (ar4_00 != 0) {
        uVar1 = debug_printf(ar4_00, a1, ar6_00, ar7_00, "E1238:sdPstmSetPan return error in mwSndSetPan", s4);
    }
    return uVar1;
}

/*
 * mwSndGetPan  0x8c26a956
 */
u32 mwSndGetPan(int a0, u32 a1) {
    u32 uVar1;
    u8 auStack_20[3];
    char cStack_1d;

    thunk_FUN_8c267250(*(u32 *)(a0 + 0x30), a1);
    uVar1 = libgcc_divide_helper_010468(cStack_1d * 0xf, 0x7f);
    return uVar1;
}

/*
 * mwSnd_sub_26a9b8  0x8c26a9b8
 * name hint from a string it uses: E1245 sdPstmSetFxCh return e; area name: sits between mwSnd functions (same
 * compilation unit)
 */
u32 mwSnd_sub_26a9b8(int a0, u32 unused_a1, int a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    int unaff_r10;
    int a6;
    int iVar7;
    char in_T;

    puVar2 = (&sd_sub_267a98);
    puVar1 = (&debug_printf);
    if (in_T == '\x01') {
        if (a2 < 0) {
            a6 = a2 * 2 + ((int)(a2 + (u32)(a2 < 0)) >> 1);
        } else {
            a6 = 0x7f;
        }
    } else {
        a6 = -0x7f;
    }
    if (*(int *)(a0 + 0x48) != unaff_r10) {
        for (iVar7 = 0; iVar7 < *(int *)(a0 + 0xc); iVar7 = iVar7 + 1) {
            a3 = 0x7f;
            iVar5 = iVar7;
            iVar6 = unaff_r10;
            iVar3 = (*(code *)puVar2)(*(u32 *)(a0 + 0x30), iVar7, unaff_r10, 0x7f);
            if (iVar3 != 0) {
                (*(code *)puVar1)(iVar3, iVar5, iVar6, a3);
            }
        }
        *(int *)(a0 + 0x48) = unaff_r10;
    }
    puVar2 = (&sd_sub_267b20);
    uVar4 = 0x48;
    for (iVar7 = 0; iVar7 < *(int *)(a0 + 0xc); iVar7 = iVar7 + 1) {
        iVar5 = iVar7;
        iVar6 = a6;
        iVar3 = (*(code *)puVar2)(*(u32 *)(a0 + 0x30), iVar7, a6, a3);
        uVar4 = 0;
        if (iVar3 != 0) {
            uVar4 = (*(code *)puVar1)(iVar3, iVar5, iVar6, a3);
        }
    }
    return uVar4;
}

/*
 * mwSnd_sub_26aa48  0x8c26aa48
 * area name: sits between mwSnd functions (same compilation unit)
 * called by: mwSnd_sub_26ab86
 */
u32 mwSnd_sub_26aa48(u32 unused_a0, u32 *a1, u32 *a2, u32 unused_a3, u32 ain0) {
    *a1 = 0;
    *a2 = 0;
    return ain0;
}

/*
 * mwSnd_sub_26aa5c  0x8c26aa5c
 * name hint from a string it uses: E1239 sdPstmSetPitch return ; area name: sits between mwSnd functions (same
 * compilation unit)
 */
int mwSnd_sub_26aa5c(int a0, int a1, int a2) {
    int iVar1;
    int a4;
    int iVar2;
    int a5;
    int a6;
    u32 a7;
    int a5_00;
    int unaff_r14;
    char in_T;

    if (in_T != '\0') {
        a1 = a0;
    }
    if (a1 < -0x17) {
        a1 = -0x18;
    }
    *(int *)(unaff_r14 + 0x4c) = a1;
    iVar2 = a1 << 8;
    if (0x62 < a2) {
        a2 = 99;
    }
    if (a2 < -0x62) {
        a2 = -99;
    }
    *(int *)(unaff_r14 + 0x50) = a2;
    iVar1 = libgcc_divide_helper_010468(a2 << 8, 100);
    iVar2 = iVar2 + iVar1;
    for (a5_00 = 0; a5_00 < *(int *)(unaff_r14 + 0xc); a5_00 = a5_00 + 1) {
        a7 = 0;
        a5 = a5_00;
        a6 = iVar2;
        a4 = sd_sub_267d74(*(u32 *)(unaff_r14 + 0x30), a5_00, iVar2, 0);
        iVar1 = 0;
        if (a4 != 0) {
            iVar1 = debug_printf(a4, a5, a6, a7);
        }
    }
    return iVar1;
}

/*
 * mwSnd_sub_26aad4  0x8c26aad4
 * area name: sits between mwSnd functions (same compilation unit)
 * called by: mwSnd_sub_26ab86
 */
u32 mwSnd_sub_26aad4(int a0, u32 *a1, u32 *a2) {
    *a1 = *(u32 *)(a0 + 0x4c);
    *a2 = *(u32 *)(a0 + 0x50);
    return 0x50;
}

/*
 * mwSnd_sub_26aaea  0x8c26aaea
 * name hint from a string it uses: E1247 sdPstmSetDrctLev retur; area name: sits between mwSnd functions (same
 * compilation unit)
 */
u32 mwSnd_sub_26aaea(int a0, int a1, u32 unused_a2, u32 a3) {
    u8 *puVar1;
    u8 *puVar2;
    u32 in_r0;
    int a4;
    int a5;
    int a6;
    int a6_00;
    int a5_00;
    char in_T;

    puVar2 = (&sd_sub_267a10);
    puVar1 = (&debug_printf);
    if (in_T == '\x01') {
        if (a1 < 0) {
            a6_00 = a1 * 3;
        } else {
            a6_00 = 0x7f;
        }
    } else {
        a6_00 = -0x7f;
    }
    for (a5_00 = 0; a5_00 < *(int *)(a0 + 0xc); a5_00 = a5_00 + 1) {
        a5 = a5_00;
        a6 = a6_00;
        a4 = (*(code *)puVar2)(*(u32 *)(a0 + 0x30), a5_00, a6_00, a3);
        in_r0 = 0;
        if (a4 != 0) {
            in_r0 = (*(code *)puVar1)(a4, a5, a6, a3);
        }
    }
    return in_r0;
}

/*
 * ret_const_0_26ab42  0x8c26ab42
 * called by: mwSnd_sub_26ab86
 */
u32 ret_const_0_26ab42(u32 unused_a0, u32 a1) {
    return 0;
}

/*
 * mwSnd_sub_26ab86  0x8c26ab86
 * area name: sits between mwSnd functions (same compilation unit)
 */
u32 mwSnd_sub_26ab86(u32 a0, int a1, u32 unused_a2, u32 *a3) {
    u32 uVar1;
    int *unaff_r14;
    char in_T;

    if (in_T != '\0') {
        uVar1 = mwSnd_sub_26aa48(a0, unaff_r14, a3, a3);
        return uVar1;
    }
    if (a1 == 1) {
        uVar1 = mwSnd_sub_26aad4(a0, unaff_r14, a3);
        return uVar1;
    }
    if (a1 == 2) {
        a1 = ret_const_0_26ab42(a0, 2);
        *unaff_r14 = a1;
    } else {
        *unaff_r14 = 0;
    }
    *a3 = 0;
    return a1;
}

/*
 * mwSndTrns_26abf0  0x8c26abf0
 * named from the library error message it prints (mwSndTrns)
 * called by: mwSndTrns, mwSnd_sub_26ae54, mwSnd_sub_26af7a
 * strings: "E1243:sdMemBlkTransfer return error in mwSndTrns"; "E1242:sdMemBlkSetPrm return error in mwSndTrns"
 */
u32 mwSndTrns_26abf0(int a0, int a1, int a2, u32 a3, int s0) {
    int iVar1;
    int ar5_00;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;

    iVar4 = s0 * *(int *)(a0 + 0x10);
    if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
    }
    iVar4 = iVar4 >> 3;
    g_8c4bf028 = sh4_tmu_1f88e6(a0);
    uVar3 = 0;
    iVar2 = a1 * 4;
    iVar5 = iVar4;
    iVar1 = sd_dma_setup(*(u32 *)(iVar2 + a0 + 0x20), a3, iVar4, 0, 0);
    if (iVar1 == 0) {
        iVar5 = a2 * *(int *)(a0 + 0x10);
        if (iVar5 < 0) {
            iVar5 = iVar5 + 7;
        }
        ar5_00 = (iVar5 >> 3) + *(int *)(a0 + 0x38 + iVar2);
        g_8c4bf02c = sh4_tmu_1f88e6(0);
        iVar5 = ar5_00;
        iVar1 = sd_dma_start(*(u32 *)(a0 + 0x20 + iVar2), ar5_00, iVar4, uVar3);
        if (iVar1 != 0) {
            debug_printf(iVar1, ar5_00, iVar4, uVar3, "E1243:sdMemBlkTransfer return error in mwSndTrns", iVar5);
        }
        uVar3 = sh4_tmu_1f88e6(iVar1);
        g_8c4bf030 = uVar3;
    } else {
        uVar3 = debug_printf(iVar1, a3, iVar4, uVar3, "E1242:sdMemBlkSetPrm return error in mwSndTrns", iVar5);
    }
    return uVar3;
}

/*
 * mwSndTrns_26aca8  0x8c26aca8
 * named from the library error message it prints (mwSndTrns)
 * called by: mwSndTrns
 * strings: "E1242:sdMemBlkSetPrm return error in mwSndTrns"; "E1243:sdMemBlkTransfer return error in mwSndTrns"
 */
u32 mwSndTrns_26aca8(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int s4;
    int ar5_00;
    u32 uVar3;
    u32 ar7_00;

    ar7_00 = 0;
    uVar3 = 0x20;
    s4 = a1 * 4;
    iVar1 = sd_dma_setup(*(u32 *)(s4 + a0 + 0x28), a3, 0x20, 0, 0);
    if (iVar1 != 0) {
        uVar3 = debug_printf(iVar1, a3, uVar3, ar7_00, "E1242:sdMemBlkSetPrm return error in mwSndTrns", s4);
        return uVar3;
    }
    iVar1 = a2 * *(int *)(a0 + 0x10);
    if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
    }
    ar5_00 = *(int *)(a0 + 0x38 + s4) + (iVar1 >> 3);
    iVar1 = sd_dma_start(*(u32 *)(a0 + 0x28 + s4), ar5_00, uVar3, ar7_00);
    uVar2 = 0;
    if (iVar1 != 0) {
        uVar2 = debug_printf(iVar1, ar5_00, uVar3, ar7_00, "E1243:sdMemBlkTransfer return error in mwSndTrns", s4);
    }
    return uVar2;
}

/*
 * mwSndTrns  0x8c26ad32
 */
u32 mwSndTrns(int a0, u32 a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    uVar1 = mwSndTrns_26abf0(a0, a1, a2, a3);
    if (a2 == 0) {
        iVar2 = libgcc_divide_helper_010468(*(u32 *)(a0 + 0x40), *(u32 *)(a0 + 0x10));
        uVar1 = mwSndTrns_26aca8(a0, a1, iVar2 * 8, a3);
        return uVar1;
    }
    return uVar1;
}

/*
 * mwSndGetTrnsStat  0x8c26ada4
 * strings: "E1244:sdMemBlkGetStat return error in mwSndGetTrnsStat"
 */
u32 mwSndGetTrnsStat(int a0, int a1, u32 a2, u32 a3) {
    int ar4_00;
    u8 *ar5_00;
    u32 in_stack_ffffffec;

    ar5_00 = &stack0xffffffec;
    sd_dma_poll(a0, a1, a2, a3);
    ar4_00 = sdMemBlkGetStat(*(u32 *)(a1 * 4 + a0 + 0x20), &stack0xffffffec, a2, a3);
    if (ar4_00 != 0) {
        debug_printf(ar4_00, ar5_00, a2, a3, "E1244:sdMemBlkGetStat return error in mwSndGetTrnsStat",
                     in_stack_ffffffec);
    }
    return in_stack_ffffffec;
}

/*
 * mwSnd_move_to_work_mem  0x8c26ae04
 * copies a sound from sound memory into the work area; prints E1227 on error
 * called by: mwSnd_sub_26ae54, mwSnd_sub_26af7a
 * strings: "E1227:sdMoveSndMemToWrkMem return error"
 */
u32 mwSnd_move_to_work_mem(int a0, int a1, u32 a2, int a3) {
    int iVar1;
    u32 ar6_00;
    int iVar2;
    u32 uVar3;
    int in_stack_00000000;
    u32 s4;

    uVar3 = 8;
    iVar2 = *(int *)(a0 + 0x10);
    iVar1 = libgcc_divide_helper_010468(a3 * iVar2, 8);
    iVar1 = *(int *)(a1 * 4 + a0 + 0x38) + iVar1;
    ar6_00 = libgcc_divide_helper_010468(in_stack_00000000 * iVar2, uVar3);
    s4 = a2;
    iVar1 = aica_ram_2668fc(iVar1, a2, ar6_00, a3);
    uVar3 = 0;
    if (iVar1 != 0) {
        uVar3 = debug_printf(iVar1, a2, ar6_00, a3, "E1227:sdMoveSndMemToWrkMem return error", s4);
    }
    return uVar3;
}

/*
 * mwSnd_sub_26ae54  0x8c26ae54
 * area name: sits between mwSnd functions (same compilation unit)
 */
int mwSnd_sub_26ae54(int a0, u32 a1) {
    u32 r6;
    int iVar1;
    int a7;
    int iVar2;
    int a6;
    int iVar3;
    int iStack_34;

    iVar1 = libgcc_divide_helper_010468(0x100, *(u32 *)(a0 + 0x10));
    iVar1 = iVar1 * 8;
    a7 = libgcc_divide_helper_010614(r6, iVar1);
    if (0 < a7) {
        a6 = 0;
        mwSnd_move_to_work_mem(a0, a1, 0x8c4bee28, 0);
        iStack_34 = 0;
        iVar2 = iVar1 - a7;
        do {
            iVar3 = iVar1;
            if (iStack_34 == 0x3f) {
                iVar3 = iVar2;
            }
            mwSnd_move_to_work_mem(a0, a1, iVar1 + 0x8c4bee28, a7);
            mwSndTrns_26abf0(a0, a1, a6, iVar1 + 0x8c4bee28);
            a6 = a6 + iVar3;
            iStack_34 = iStack_34 + 1;
            a7 = a7 + iVar3;
        } while (iStack_34 < 0x40);
        a7 = mwSndTrns_26abf0(a0, a1, a6, 0x8c4bee28);
    }
    return a7;
}

/*
 * mwSnd_sub_26af42  0x8c26af42
 * area name: sits between mwSnd functions (same compilation unit)
 * called by: game_sub_26b092, game_sub_26b132
 */
int mwSnd_sub_26af42(u32 unused_a0, int a1, int *a2, u32 unused_a3, int ain0) {
    int d;
    int iVar1;

    if (a1 == 0) {
        *a2 = 0;
        return ain0;
    }
    *a2 = 1;
    iVar1 = 0x40;
    d = 2;
    while ((*a2 <= iVar1 && (ain0 = libgcc_divide_helper_010614(a1, d), ain0 == 0))) {
        d = d * 2;
        *a2 = *a2 << 1;
    }
    return ain0;
}

/*
 * mwSnd_sub_26af7a  0x8c26af7a
 * area name: sits between mwSnd functions (same compilation unit)
 * called by: game_sub_26b092, game_sub_26b132
 */
int mwSnd_sub_26af7a(int a0, u32 a1, u32 a2, int a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar5;
    u32 uStack_48;
    u32 uStack_40;
    u32 uStack_38;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;

    uStack_2c = 0x100;
    iVar1 = libgcc_divide_helper_010468(0x100, *(u32 *)(a0 + 0x10));
    uStack_30 = 0x8c4bee28;
    uStack_2c = uStack_2c + 0x8c4bee28;
    uStack_40 = 0;
    iVar2 = libgcc_divide_helper_010468(0x40, a3);
    iVar3 = iVar2;
    uStack_38 = a2;
    for (; uStack_40 < a3; uStack_40 = uStack_40 + 1) {
        if ((int)uStack_38 < 0) {
            uStack_28 = ~(~uStack_38 + 1 & 0x3f) + 1;
        } else {
            uStack_28 = uStack_38 & 0x3f;
        }
        iVar3 = mwSnd_move_to_work_mem(a0, a1, uStack_30, uStack_28 * iVar1 * 8);
        uStack_48 = 0;
        if (0 < iVar2) {
            do {
                iVar5 = uStack_30;
                uStack_28 = (uStack_28 - a2) + 0x40;
                if ((int)uStack_28 < 0) {
                    uStack_28 = ~(~uStack_28 + 1 & 0x3f) + 1;
                } else {
                    uStack_28 = uStack_28 & 0x3f;
                }
                iVar3 = uStack_28 * iVar1 * 8;
                mwSnd_move_to_work_mem(a0, a1, uStack_2c, iVar3);
                iVar3 = mwSndTrns_26abf0(a0, a1, iVar3, uStack_30);
                uStack_30 = uStack_2c;
                uStack_2c = iVar5;
                uStack_48 = uStack_48 + 1;
            } while (uStack_48 < iVar2);
        }
        uStack_38 = uStack_38 + 1;
    }
    return iVar3;
}

/*
 * game_sub_26b092  0x8c26b092
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b092(int a0, int a1, int *a2, u32 a3) {
    int iVar1;
    int *piVar2;
    int ar5_00;
    int iVar3;
    u32 in_stack_ffffffd8;
    u32 uStack_24;
    int *piStack_20;

    ar5_00 = a1;
    piStack_20 = a2;
    sd_sub_265ab0(&uStack_24);
    sd_wait_idle_set_1a8(0, ar5_00, a2, a3);
    iVar1 = libgcc_divide_helper_010468(0x100, *(u32 *)(a0 + 0x10));
    iVar1 = iVar1 << 3;
    piVar2 = (int *)libgcc_divide_helper_010468(a1, iVar1);
    iVar3 = libgcc_divide_helper_010614(a1, iVar1);
    iVar1 = libgcc_divide_helper_010614(iVar1 - iVar3, iVar1);
    for (iVar3 = 0; iVar3 < *(int *)(a0 + 0xc); iVar3 = iVar3 + 1) {
        *(int *)(a0 + 0x44) = iVar1;
        a2 = piVar2;
        if (0 < iVar1) {
            a2 = (int *)((int)piVar2 + 1);
        }
        mwSnd_sub_26af42(a1, a2, &stack0xffffffd8, a3, in_stack_ffffffd8);
        a3 = in_stack_ffffffd8;
        ar5_00 = iVar3;
        in_stack_ffffffd8 = a3;
        mwSnd_sub_26af7a(a0, iVar3, a2, a3);
    }
    sd_wait_idle_set_1a8(uStack_24, ar5_00, a2, a3);
    *piStack_20 = a1 + *(int *)(a0 + 0x44);
    return *(u32 *)(a0 + 0x44);
}

/*
 * game_sub_26b132  0x8c26b132
 * area name: game code; nothing names its area yet
 */
int game_sub_26b132(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u8 *ar5_00;
    int iVar2;
    u8 *ar5_01;
    u8 *ar6_00;
    u8 *a5;
    u32 in_stack_ffffffe4;
    u32 uVar3;
    u32 auStack_18[2];

    ar6_00 = &stack0xffffffe4;
    iVar1 = libgcc_divide_helper_010468(0x100, *(u32 *)(a0 + 0x10));
    iVar1 = iVar1 * 8;
    ar5_00 = (u8 *)libgcc_divide_helper_010468(a1, iVar1);
    if ((int)ar5_00 < 1) {
        iVar1 = 0;
    } else {
        iVar2 = libgcc_divide_helper_010614(a1, iVar1);
        *(int *)(a0 + 0x44) = iVar1 - iVar2;
        ar5_01 = ar5_00;
        mwSnd_sub_26af42(a1, ar5_00, &stack0xffffffe4, a3, in_stack_ffffffe4);
        sd_sub_265ab0(auStack_18);
        sd_wait_idle_set_1a8(0, ar5_01, ar6_00, a3);
        for (a5 = NULL; (int)a5 < *(int *)(a0 + 0xc); a5 = a5 + 1) {
            ar5_01 = a5;
            ar6_00 = ar5_00;
            uVar3 = in_stack_ffffffe4;
            mwSnd_sub_26af7a(a0, a5, ar5_00, in_stack_ffffffe4);
            a3 = in_stack_ffffffe4;
            in_stack_ffffffe4 = uVar3;
        }
        sd_wait_idle_set_1a8(auStack_18[0], ar5_01, ar6_00, a3);
        iVar1 = (int)ar5_00 * iVar1;
    }
    return iVar1;
}

/*
 * ret_const_8c2785e8_26b1ca  0x8c26b1ca
 * called by: sd_sub_2689c8
 */
u32 ret_const_8c2785e8_26b1ca(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3) {
    return 0x8c2785e8;
}

/*
 * sr_get_imask  0x8c26b1e0
 * the SR interrupt mask (IMASK)
 * called by: game_sub_26b32e, game_sub_26b3a0, game_sub_26b3f8, game_sub_26b490
 */
u32 sr_get_imask(void) {
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    return (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
}

/*
 * sr_with_imask  0x8c26b1f8
 * SR with IMASK replaced by a1
 * called by: game_sub_26b32e, game_sub_26b3a0, game_sub_26b3f8, game_sub_26b490
 */
u32 sr_with_imask(u32 unused_a0, u32 a1) {
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    return (a1 & 0xf) << 4 | ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4 | (u32)in_Q << 8 | (u32)in_M << 9 |
                              (u32)in_FD << 0xf | (u32)in_BL << 0x1c | (u32)in_RB << 0x1d | (u32)in_MD << 0x1e) &
                                 (int)(int)0xffffff0f;
}

/*
 * game_sub_26b212  0x8c26b212
 * area name: game code; nothing names its area yet
 * called by: cri_sub_262810, cri_sub_262814
 */
u32 game_sub_26b212(void) {
    u8 *puVar1;
    u32 in_r0;

    puVar1 = (&DATA_8c278690);
    if (*(int *)(&DATA_8c278690) == 0) {
        in_r0 = memset(0x8c4bf038, 0, (int)0x480);
    }
    *(int *)puVar1 = *(int *)puVar1 + 1;
    return in_r0;
}

/*
 * game_sub_26b216  0x8c26b216
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b216(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;
    int *unaff_r14;

    if (*unaff_r14 == 0) {
        in_r0 = memset(0x8c4bf038, 0, (int)0x480);
    }
    *unaff_r14 = *unaff_r14 + 1;
    return in_r0;
}

/*
 * game_sub_26b234  0x8c26b234
 * area name: game code; nothing names its area yet
 * called by: cri_sub_2628fa
 */
u32 game_sub_26b234(void) {
    u32 in_r0;
    u32 uVar1;
    int iVar2;

    iVar2 = *(int *)(&DATA_8c278690);
    *(int *)(&DATA_8c278690) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
        uVar1 = memset(0x8c4bf038, 0, (int)0x480);
        return uVar1;
    }
    return in_r0;
}

/*
 * ADXT_sub_26b250  0x8c26b250
 * area name: most of its named callers are ADXT
 * called by: ADXT_StartMem, ADXT_StartMemIdx
 */
u32 ADXT_sub_26b250(u32 a0, u32 a1) {
    int iVar1;
    int ar6_00;
    u32 *ar4_00;

    ar6_00 = 0;
    do {
        if (*(int *)(ar6_00 * 0x24 + 0x8c4bf03c) == 0)
            break;
        ar6_00 = ar6_00 + 1;
    } while (ar6_00 < 0x20);
    if (ar6_00 == 0x20) {
        return 0;
    }
    iVar1 = ar6_00 * 0x24;
    ar4_00 = (u32 *)(iVar1 + 0x8c4bf038);
    *(u32 *)(iVar1 + 0x8c4bf03c) = 1;
    *ar4_00 = &g_8c278660;
    *(u32 *)(iVar1 + 0x8c4bf04c) = a0;
    *(u32 *)(iVar1 + 0x8c4bf050) = a1;
    *(u8 **)(iVar1 + 0x8c4bf040) = &g_8c273978;
    *(u8 **)(iVar1 + 0x8c4bf054) = &g_8c26b20e;
    *(u32 **)(iVar1 + 0x8c4bf058) = ar4_00;
    game_sub_26b2da(ar4_00, a1, ar6_00, 0x8c4bf038);
    return ar4_00;
}

/*
 * game_sub_26b254  0x8c26b254
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b254(u32 a0, u32 a1) {
    int iVar1;
    int ar6_00;
    int unaff_r14;
    u32 *ar4_00;

    ar6_00 = 0;
    do {
        if (*(int *)(ar6_00 * 0x24 + 0x8c4bf03c) == 0)
            break;
        ar6_00 = ar6_00 + 1;
    } while (ar6_00 < unaff_r14);
    if (ar6_00 == 0x20) {
        return 0;
    }
    iVar1 = ar6_00 * 0x24;
    ar4_00 = (u32 *)(iVar1 + 0x8c4bf038);
    *(u32 *)(iVar1 + 0x8c4bf03c) = 1;
    *ar4_00 = &g_8c278660;
    *(u32 *)(iVar1 + 0x8c4bf04c) = a0;
    *(u32 *)(iVar1 + 0x8c4bf050) = a1;
    *(u8 **)(iVar1 + 0x8c4bf040) = &g_8c273978;
    *(u8 **)(iVar1 + 0x8c4bf054) = &g_8c26b20e;
    *(u32 **)(iVar1 + 0x8c4bf058) = ar4_00;
    game_sub_26b2da(ar4_00, a1, ar6_00, 0x8c4bf038);
    return ar4_00;
}

/*
 * game_sub_26b2b6  0x8c26b2b6
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b2b6(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;
    int unaff_r14;

    if (unaff_r14 != 0) {
        in_r0 = memset(unaff_r14, 0, 0x24);
        *(u32 *)(unaff_r14 + 4) = 0;
    }
    return in_r0;
}

/*
 * game_sub_26b2da  0x8c26b2da
 * area name: game code; nothing names its area yet
 * called by: ADXT_sub_26b250, game_sub_26b254
 */
u32 game_sub_26b2da(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;

    *(u32 *)(a0 + 0xc) = *(u32 *)(a0 + 0x18);
    *(u32 *)(a0 + 0x10) = 0;
    return in_r0;
}

/*
 * game_sub_26b2e8  0x8c26b2e8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b2e8(int a0, int a1, u32 a2, u32 a3) {
    int in_r0;

    if (in_r0 == 1) {
        return *(u32 *)(a0 + 0xc);
    }
    if ((a1 != 0) && (*(int *)(a0 + 0x1c) != 0)) {
        (**(code **)(a0 + 0x1c))(*(u32 *)(a0 + 0x20), 0xfffffffd, a2, a3);
    }
    return 0;
}

/*
 * game_sub_26b32e  0x8c26b32e
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b32e(int a0, int a1, int a2, int *a3) {
    u32 uVar1;
    int a6;
    int *a7;

    a6 = a2;
    a7 = a3;
    uVar1 = sr_get_imask();
    if (a1 == 0) {
        a3[1] = 0;
        *a3 = 0;
    } else if (a1 == 1) {
        if (*(int *)(a0 + 0xc) < a2) {
            a2 = *(int *)(a0 + 0xc);
        }
        a3[1] = a2;
        *a3 = *(int *)(a0 + 0x14) + *(int *)(a0 + 0x10);
        *(int *)(a0 + 0x10) = *(int *)(a0 + 0x10) + a3[1];
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) - a3[1];
    } else {
        a3[1] = 0;
        *a3 = 0;
        if (*(int *)(a0 + 0x1c) != 0) {
            (**(code **)(a0 + 0x1c))(*(u32 *)(a0 + 0x20), 0xfffffffd, a6, a7);
        }
    }
    uVar1 = sr_with_imask(a0, uVar1);
    return uVar1;
}

/*
 * game_sub_26b3a0  0x8c26b3a0
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b3a0(int a0, int a1, int *a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;
    int *a6;

    if ((0 < a2[1]) && (*a2 != 0)) {
        a6 = a2;
        uVar1 = sr_get_imask();
        if ((a1 != 0) && (a1 != 1)) {
            a2[1] = 0;
            *a2 = 0;
            if (*(int *)(a0 + 0x1c) != 0) {
                (**(code **)(a0 + 0x1c))(*(u32 *)(a0 + 0x20), 0xfffffffd, a6, a3);
            }
        }
        uVar1 = sr_with_imask(a0, uVar1);
        return uVar1;
    }
    return in_r0;
}

/*
 * game_sub_26b3f8  0x8c26b3f8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b3f8(int a0, int a1, int *a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;
    int iVar2;
    int *piVar3;
    int *a6;

    if ((a2[1] < 1) || (*a2 == 0)) {
        return in_r0;
    }
    a6 = a2;
    uVar1 = sr_get_imask();
    if (a1 == 0) {
        iVar2 = *(int *)(a0 + 0x1c);
    } else if (a1 == 1) {
        iVar2 = *(int *)(a0 + 0x10) - a2[1];
        if (iVar2 < 1) {
            iVar2 = 0;
        }
        *(int *)(a0 + 0x10) = iVar2;
        a6 = *(int **)(a0 + 0x18);
        piVar3 = (int *)(*(int *)(a0 + 0xc) + a2[1]);
        if ((int)a6 < (int)piVar3) {
            piVar3 = a6;
        }
        *(int **)(a0 + 0xc) = piVar3;
        if (iVar2 == *a2 - *(int *)(a0 + 0x14))
            goto LAB_8c26b478;
        iVar2 = *(int *)(a0 + 0x1c);
    } else {
        a2[1] = 0;
        *a2 = 0;
        iVar2 = *(int *)(a0 + 0x1c);
    }
    if (iVar2 != 0) {
        (**(code **)(a0 + 0x1c))(*(u32 *)(a0 + 0x20), 0xfffffffd, a6, a3);
    }
LAB_8c26b478:
    uVar1 = sr_with_imask(a0, uVar1);
    return uVar1;
}

/*
 * game_sub_26b490  0x8c26b490
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b490(int a0, int a1, int a2, int *a3) {
    u32 a5;
    int iVar1;
    int a6;
    int *a7;
    int iVar2;

    a6 = a2;
    a7 = a3;
    a5 = sr_get_imask();
    iVar1 = 0;
    if (a1 != 0) {
        if (a1 != 1) {
            iVar2 = 0;
            if (*(int *)(a0 + 0x1c) != 0) {
                (**(code **)(a0 + 0x1c))(*(u32 *)(a0 + 0x20), 0xfffffffd, a6, a7);
            }
            goto LAB_8c26b4d2;
        }
        iVar1 = *(int *)(a0 + 0xc);
        iVar2 = a2;
        if (a2 <= iVar1)
            goto LAB_8c26b4d2;
    }
    iVar2 = iVar1;
LAB_8c26b4d2:
    *a3 = iVar2;
    sr_with_imask(a0, a5);
    return (u32)(iVar2 == a2);
}

/*
 * sr_get_imask_b  0x8c26b4f4
 * another copy of sr_get_imask
 * called by: game_sub_26b64e, game_sub_26b720, game_sub_26b7f4, game_sub_26b8c8
 */
u32 sr_get_imask_b(void) {
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    return (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
}

/*
 * sr_with_imask_b  0x8c26b50c
 * another copy of sr_with_imask
 * called by: game_sub_26b64e, game_sub_26b720, game_sub_26b7f4, game_sub_26b8c8
 */
u32 sr_with_imask_b(u32 unused_a0, u32 a1) {
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    return (a1 & 0xf) << 4 | ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4 | (u32)in_Q << 8 | (u32)in_M << 9 |
                              (u32)in_FD << 0xf | (u32)in_BL << 0x1c | (u32)in_RB << 0x1d | (u32)in_MD << 0x1e) &
                                 (int)(int)0xffffff0f;
}

/*
 * game_sub_26b526  0x8c26b526
 * area name: game code; nothing names its area yet
 * called by: cri_sub_262810, cri_sub_262814
 */
u32 game_sub_26b526(void) {
    u8 *puVar1;
    u32 in_r0;

    puVar1 = (&DATA_8c2786cc);
    if (*(int *)(&DATA_8c2786cc) == 0) {
        in_r0 = memset(0x8c4bf4b8, 0, (int)0xc00);
    }
    *(int *)puVar1 = *(int *)puVar1 + 1;
    return in_r0;
}

/*
 * game_sub_26b52a  0x8c26b52a
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b52a(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;
    int *unaff_r14;

    if (*unaff_r14 == 0) {
        in_r0 = memset(0x8c4bf4b8, 0, (int)0xc00);
    }
    *unaff_r14 = *unaff_r14 + 1;
    return in_r0;
}

/*
 * game_sub_26b548  0x8c26b548
 * area name: game code; nothing names its area yet
 * called by: cri_sub_2628fa
 */
u32 game_sub_26b548(void) {
    u32 in_r0;
    u32 uVar1;
    int iVar2;

    iVar2 = *(int *)(&DATA_8c2786cc);
    *(int *)(&DATA_8c2786cc) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
        uVar1 = memset(0x8c4bf4b8, 0, (int)0xc00);
        return uVar1;
    }
    return in_r0;
}

/*
 * game_sub_26b564  0x8c26b564
 * area name: game code; nothing names its area yet
 * called by: ADXF_sub_262312, cri_sub_263840
 */
u32 game_sub_26b564(u32 a0, u32 a1, u32 a2) {
    int ain0;
    int ar7_00;
    u32 *ar4_00;

    ain0 = 0;
    do {
        if (*(int *)(ain0 * 0x30 + 0x8c4bf4bc) == 0)
            break;
        ain0 = ain0 + 1;
    } while (ain0 < 0x40);
    if (ain0 == 0x40) {
        return 0;
    }
    ar7_00 = ain0 * 0x30;
    ar4_00 = (u32 *)(ar7_00 + 0x8c4bf4b8);
    *(u32 *)(ar7_00 + 0x8c4bf4bc) = 1;
    *ar4_00 = &g_8c27869c;
    *(u32 *)(ar7_00 + 0x8c4bf4d4) = a0;
    *(u32 *)(ar7_00 + 0x8c4bf4d8) = a1;
    *(u32 *)(ar7_00 + 0x8c4bf4dc) = a2;
    *(u8 **)(ar7_00 + 0x8c4bf4c0) = &g_8c273988;
    *(u8 **)(ar7_00 + 0x8c4bf4e0) = &g_8c26b522;
    *(u32 **)(ar7_00 + 0x8c4bf4e4) = ar4_00;
    game_sub_26b5ee(ar4_00);
    return ar4_00;
}

/*
 * game_sub_26b568  0x8c26b568
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b568(u32 a0, u32 a1, u32 a2, u32 unused_a3, int ain0) {
    int iVar1;
    u32 *ar4_00;

    iVar1 = 0;
    do {
        if (*(int *)(iVar1 * 0x30 + 0x8c4bf4bc) == 0)
            break;
        iVar1 = iVar1 + 1;
    } while (iVar1 < ain0);
    if (iVar1 == 0x40) {
        return 0;
    }
    iVar1 = iVar1 * 0x30;
    ar4_00 = (u32 *)(iVar1 + 0x8c4bf4b8);
    *(u32 *)(iVar1 + 0x8c4bf4bc) = 1;
    *ar4_00 = &g_8c27869c;
    *(u32 *)(iVar1 + 0x8c4bf4d4) = a0;
    *(u32 *)(iVar1 + 0x8c4bf4d8) = a1;
    *(u32 *)(iVar1 + 0x8c4bf4dc) = a2;
    *(u8 **)(iVar1 + 0x8c4bf4c0) = &g_8c273988;
    *(u8 **)(iVar1 + 0x8c4bf4e0) = &g_8c26b522;
    *(u32 **)(iVar1 + 0x8c4bf4e4) = ar4_00;
    game_sub_26b5ee(ar4_00);
    return ar4_00;
}

/*
 * game_sub_26b5c6  0x8c26b5c6
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b5c6(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;

    if (a0 != 0) {
        in_r0 = memset(a0, 0, 0x30);
        *(u32 *)(a0 + 4) = 0;
    }
    return in_r0;
}

/*
 * game_sub_26b5ca  0x8c26b5ca
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b5ca(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;
    int unaff_r14;

    if (unaff_r14 != 0) {
        in_r0 = memset(unaff_r14, 0, 0x30);
        *(u32 *)(unaff_r14 + 4) = 0;
    }
    return in_r0;
}

/*
 * game_sub_26b5ee  0x8c26b5ee
 * area name: game code; nothing names its area yet
 * called by: game_sub_26b564, game_sub_26b568
 */
u32 game_sub_26b5ee(int a0) {
    u32 in_r0;

    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x10) = *(u32 *)(a0 + 0x20);
    *(u32 *)(a0 + 0x14) = 0;
    *(u32 *)(a0 + 0x18) = 0;
    return in_r0;
}

/*
 * game_sub_26b5fc  0x8c26b5fc
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b5fc(int a0, int a1) {
    if (a1 == 1) {
        return *(u32 *)(a0 + 0xc);
    }
    if (a1 == 0) {
        return *(u32 *)(a0 + 0x10);
    }
    if (*(int *)(a0 + 0x28) != 0) {
        (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd);
    }
    return 0;
}

/*
 * game_sub_26b600  0x8c26b600
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b600(int a0, int a1, u32 a2, u32 a3) {
    int in_r0;

    if (in_r0 == 1) {
        return *(u32 *)(a0 + 0xc);
    }
    if (a1 == 0) {
        return *(u32 *)(a0 + 0x10);
    }
    if (*(int *)(a0 + 0x28) != 0) {
        (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a2, a3);
    }
    return 0;
}

/*
 * game_sub_26b64e  0x8c26b64e
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b64e(int a0, int a1, int a2, int *a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int a6;
    int *a7;

    a6 = a2;
    a7 = a3;
    uVar1 = sr_get_imask_b();
    if (a1 == 0) {
        iVar3 = (*(int *)(a0 + 0x20) - *(int *)(a0 + 0x14)) + *(int *)(a0 + 0x24);
        if (*(int *)(a0 + 0x10) < iVar3) {
            iVar3 = *(int *)(a0 + 0x10);
        }
        a3[1] = iVar3;
        if (iVar3 < a2) {
            a2 = iVar3;
        }
        a3[1] = a2;
        *a3 = *(int *)(a0 + 0x1c) + *(int *)(a0 + 0x14);
        uVar2 = libgcc_divide_helper_010614(*(int *)(a0 + 0x14) + a3[1], *(u32 *)(a0 + 0x20));
        *(u32 *)(a0 + 0x14) = uVar2;
        *(int *)(a0 + 0x10) = *(int *)(a0 + 0x10) - a3[1];
    } else if (a1 == 1) {
        iVar3 = (*(int *)(a0 + 0x20) - *(int *)(a0 + 0x18)) + *(int *)(a0 + 0x24);
        if (*(int *)(a0 + 0xc) < iVar3) {
            iVar3 = *(int *)(a0 + 0xc);
        }
        a3[1] = iVar3;
        if (iVar3 < a2) {
            a2 = iVar3;
        }
        a3[1] = a2;
        *a3 = *(int *)(a0 + 0x1c) + *(int *)(a0 + 0x18);
        uVar2 = libgcc_divide_helper_010614(*(int *)(a0 + 0x18) + a3[1], *(u32 *)(a0 + 0x20));
        *(u32 *)(a0 + 0x18) = uVar2;
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) - a3[1];
    } else {
        a3[1] = 0;
        *a3 = 0;
        if (*(int *)(a0 + 0x28) != 0) {
            (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a6, a7);
        }
    }
    uVar1 = sr_with_imask_b(a0, uVar1);
    return uVar1;
}

/*
 * game_sub_26b720  0x8c26b720
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b720(int a0, int a1, int *a2, u32 a3) {
    u32 in_r0;
    u32 uVar1;
    int *a6;
    int iVar2;

    if ((0 < a2[1]) && (*a2 != 0)) {
        a6 = a2;
        uVar1 = sr_get_imask_b();
        if (a1 == 1) {
            *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + a2[1];
            iVar2 = *a2 - *(int *)(a0 + 0x1c);
            if (iVar2 < *(int *)(a0 + 0x24)) {
                a6 = (int *)(*(int *)(a0 + 0x24) - iVar2);
                if (a2[1] < (int)a6) {
                    a6 = (int *)a2[1];
                }
                (*(code *)(&memmove))(*(int *)(a0 + 0x20) + iVar2 + *(int *)(a0 + 0x1c), *a2, a6, a3);
            }
            iVar2 = (*a2 - *(int *)(a0 + 0x1c)) + a2[1];
            if (*(int *)(a0 + 0x20) < iVar2) {
                a6 = (int *)(iVar2 - *(int *)(a0 + 0x20));
                if (a2[1] < (int)a6) {
                    a6 = (int *)a2[1];
                }
                (*(code *)(&memmove))(*(int *)(a0 + 0x1c), *(int *)(a0 + 0x1c) + (iVar2 - (int)a6), a6, a3);
            }
        } else if (a1 == 0) {
            *(int *)(a0 + 0x10) = *(int *)(a0 + 0x10) + a2[1];
        } else {
            a2[1] = 0;
            *a2 = 0;
            if (*(int *)(a0 + 0x28) != 0) {
                (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a6, a3);
            }
        }
        uVar1 = sr_with_imask_b(a0, uVar1);
        return uVar1;
    }
    return in_r0;
}

/*
 * game_sub_26b7f4  0x8c26b7f4
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b7f4(int a0, int a1, int *a2, u32 a3, u32 ain0) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int *a6;

    if ((a2[1] < 1) || (*a2 == 0)) {
        return ain0;
    }
    a6 = a2;
    uVar1 = sr_get_imask_b();
    if (a1 == 0) {
        iVar3 = *(int *)(a0 + 0x20);
        iVar2 = libgcc_divide_helper_010614((*(int *)(a0 + 0x14) + iVar3) - a2[1], iVar3);
        iVar3 = libgcc_divide_helper_010614(*a2 - *(int *)(a0 + 0x1c), iVar3);
        if (iVar2 == iVar3) {
            *(int *)(a0 + 0x14) = iVar2;
            *(int *)(a0 + 0x10) = *(int *)(a0 + 0x10) + a2[1];
            goto LAB_8c26b8b0;
        }
        iVar2 = *(int *)(a0 + 0x28);
    } else if (a1 == 1) {
        iVar3 = *(int *)(a0 + 0x20);
        iVar2 = libgcc_divide_helper_010614((*(int *)(a0 + 0x18) + iVar3) - a2[1], iVar3);
        iVar3 = libgcc_divide_helper_010614(*a2 - *(int *)(a0 + 0x1c), iVar3);
        if (iVar2 == iVar3) {
            *(int *)(a0 + 0x18) = iVar2;
            *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + a2[1];
            goto LAB_8c26b8b0;
        }
        iVar2 = *(int *)(a0 + 0x28);
    } else {
        a2[1] = 0;
        *a2 = 0;
        iVar2 = *(int *)(a0 + 0x28);
    }
    if (iVar2 != 0) {
        (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a6, a3);
    }
LAB_8c26b8b0:
    uVar1 = sr_with_imask_b(a0, uVar1);
    return uVar1;
}

/*
 * game_sub_26b8c8  0x8c26b8c8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b8c8(int a0, int a1, int a2, int *a3) {
    u32 a5;
    int iVar1;
    int a6;
    int *a7;
    int iVar2;

    a6 = a2;
    a7 = a3;
    a5 = sr_get_imask_b();
    if (a1 == 0) {
        a6 = *(int *)(a0 + 0x10);
        iVar1 = (*(int *)(a0 + 0x20) - *(int *)(a0 + 0x14)) + *(int *)(a0 + 0x24);
        if (a6 < iVar1) {
            iVar1 = a6;
        }
    } else {
        if (a1 != 1) {
            iVar2 = 0;
            if (*(int *)(a0 + 0x28) != 0) {
                (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a6, a7);
            }
            goto LAB_8c26b934;
        }
        a6 = (*(int *)(a0 + 0x20) - *(int *)(a0 + 0x18)) + *(int *)(a0 + 0x24);
        iVar1 = a6;
        if (*(int *)(a0 + 0xc) < a6) {
            iVar1 = *(int *)(a0 + 0xc);
        }
    }
    iVar2 = a2;
    if (iVar1 < a2) {
        iVar2 = iVar1;
    }
LAB_8c26b934:
    *a3 = iVar2;
    sr_with_imask_b(a0, a5);
    return (u32)(iVar2 == a2);
}

/*
 * get_field_1c_26b94e  0x8c26b94e
 * called by: cri_sub_262b04, ta_sub_262d6c
 */
u32 get_field_1c_26b94e(int a0, u32 unused_a1, u32 a2, u32 a3) {
    return *(u32 *)(a0 + 0x1c);
}

/*
 * get_field_20_26b952  0x8c26b952
 * called by: cri_sub_262b04
 */
u32 get_field_20_26b952(int a0) {
    return *(u32 *)(a0 + 0x20);
}

/*
 * get_field_24_26b956  0x8c26b956
 * called by: cri_sub_262b04
 */
u32 get_field_24_26b956(int a0) {
    return *(u32 *)(a0 + 0x24);
}

/*
 * sr_get_imask_c  0x8c26b960
 * another copy of sr_get_imask
 * called by: game_sub_26bb16, game_sub_26bbe2, game_sub_26bcaa
 */
u32 sr_get_imask_c(void) {
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    return (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
}

/*
 * sr_with_imask_c  0x8c26b978
 * another copy of sr_with_imask
 * called by: game_sub_26bb16, game_sub_26bbe2, game_sub_26bcaa
 */
u32 sr_with_imask_c(u32 unused_a0, u32 a1) {
    u8 in_MD;
    u8 in_RB;
    u8 in_BL;
    u8 in_FD;
    u8 in_M;
    u8 in_Q;
    u8 in_IMASK;
    u8 in_S;
    u8 in_T;

    return (a1 & 0xf) << 4 | ((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4 | (u32)in_Q << 8 | (u32)in_M << 9 |
                              (u32)in_FD << 0xf | (u32)in_BL << 0x1c | (u32)in_RB << 0x1d | (u32)in_MD << 0x1e) &
                                 (int)(int)0xffffff0f;
}

/*
 * game_sub_26b992  0x8c26b992
 * area name: game code; nothing names its area yet
 * called by: cri_sub_262810, cri_sub_262814
 */
u32 game_sub_26b992(void) {
    u8 *puVar1;
    u32 in_r0;

    puVar1 = (&DATA_8c278700);
    if (*(int *)(&DATA_8c278700) == 0) {
        in_r0 = memset(0x8c4c00b8, 0, (int)0xc00);
    }
    *(int *)puVar1 = *(int *)puVar1 + 1;
    return in_r0;
}

/*
 * game_sub_26b996  0x8c26b996
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b996(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;
    int *unaff_r14;

    if (*unaff_r14 == 0) {
        in_r0 = memset(0x8c4c00b8, 0, (int)0xc00);
    }
    *unaff_r14 = *unaff_r14 + 1;
    return in_r0;
}

/*
 * game_sub_26b9b4  0x8c26b9b4
 * area name: game code; nothing names its area yet
 * called by: cri_sub_2628fa
 */
u32 game_sub_26b9b4(void) {
    u32 in_r0;
    u32 uVar1;
    int iVar2;

    iVar2 = *(int *)(&DATA_8c278700);
    *(int *)(&DATA_8c278700) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
        uVar1 = memset(0x8c4c00b8, 0, (int)0xc00);
        return uVar1;
    }
    return in_r0;
}

/*
 * game_sub_26b9d4  0x8c26b9d4
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26b9d4(u32 a0, u32 a1, u32 a2, u32 unused_a3, int ain1) {
    int iVar1;
    u32 *a4;

    iVar1 = 0;
    do {
        if (*(char *)(iVar1 * 0x30 + 0x8c4c00bc) == '\0')
            break;
        iVar1 = iVar1 + 1;
    } while (iVar1 < ain1);
    if (iVar1 == 0x40) {
        return 0;
    }
    iVar1 = iVar1 * 0x30;
    a4 = (u32 *)(iVar1 + 0x8c4c00b8);
    *(u8 *)(iVar1 + 0x8c4c00bc) = 1;
    *(u8 *)(iVar1 + 0x8c4c00bd) = (u8)a0;
    *a4 = &g_8c2786d0;
    *(u8 *)(iVar1 + 0x8c4c00bd) = (u8)a0;
    *(u8 **)(iVar1 + 0x8c4c00c0) = &g_8c2739c8;
    *(u32 *)(iVar1 + 0x8c4c00c4) = a1;
    *(u32 *)(iVar1 + 0x8c4c00c8) = a2 >> 4;
    *(u8 **)(iVar1 + 0x8c4c00e0) = &g_8c26b98e;
    *(u32 **)(iVar1 + 0x8c4c00e4) = a4;
    game_sub_26ba62(a4);
    return a4;
}

/*
 * game_sub_26ba3e  0x8c26ba3e
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26ba3e(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 in_r0;
    int unaff_r14;

    if (unaff_r14 != 0) {
        memset(unaff_r14, 0, 0x30);
        in_r0 = 0;
        *(u8 *)(unaff_r14 + 4) = 0;
    }
    return in_r0;
}

/*
 * game_sub_26ba62  0x8c26ba62
 * area name: game code; nothing names its area yet
 * called by: game_sub_26b9d4
 */
u32 *game_sub_26ba62(int a0) {
    int *piVar1;
    u32 *puVar2;
    int iVar3;
    u32 *puVar4;
    int iVar5;

    iVar5 = *(int *)(a0 + 0xc);
    *(int *)(a0 + 0x14) = iVar5;
    for (iVar3 = 0; iVar3 < *(int *)(a0 + 0x10) + -1; iVar3 = iVar3 + 1) {
        piVar1 = (int *)(iVar3 * 0x10 + iVar5);
        *piVar1 = (iVar3 + 1) * 0x10 + iVar5;
        piVar1[2] = 0;
        piVar1[3] = 0;
    }
    puVar2 = (u32 *)(iVar3 * 0x10 + iVar5);
    puVar4 = (u32 *)(a0 + 0x18);
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    do {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    } while (puVar4 < (u32 *)(a0 + 0x28));
    return puVar2;
}

/*
 * game_sub_26bad4  0x8c26bad4
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26bad4(int a0, int a1, u32 a2, u32 a3) {
    int *piVar1;
    int iVar2;
    char in_T;

    if ((in_T != '\0') && (a1 < 4)) {
        iVar2 = 0;
        piVar1 = (int *)(a1 * 4 + a0 + 0x18);
        while (piVar1 = (int *)*piVar1, piVar1 != NULL) {
            iVar2 = iVar2 + piVar1[3];
        }
        return iVar2;
    }
    if (*(int *)(a0 + 0x28) != 0) {
        (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a2, a3);
    }
    return 0;
}

/*
 * game_sub_26bb16  0x8c26bb16
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26bb16(int a0, int a1, u8 *a2, u32 *a3, u32 ain0) {
    u32 uVar1;
    int iVar2;
    u8 *ar6_00;
    u32 *ar7_00;
    u32 *puVar3;
    u32 auStack_24[2];
    u8 auStack_1c[4];
    int iStack_18;

    if ((a1 < 0) || (3 < a1)) {
        if (*(int *)(a0 + 0x28) != 0) {
            ain0 = (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a2, a3);
        }
        *a3 = 0;
        a3[1] = 0;
        return ain0;
    }
    ar6_00 = a2;
    ar7_00 = a3;
    uVar1 = sr_get_imask_c();
    iVar2 = a1 * 4;
    puVar3 = *(u32 **)(a0 + 0x18 + iVar2);
    if (puVar3 != NULL) {
        switch_jump(8, auStack_1c, puVar3 + 2);
        if (iStack_18 <= (int)a2) {
            switch_jump(8, a3, auStack_1c);
            *(u32 *)(iVar2 + a0 + 0x18) = *puVar3;
            *puVar3 = *(u32 *)(a0 + 0x14);
            *(u32 **)(a0 + 0x14) = puVar3;
            goto LAB_8c26bbce;
        }
        if (*(char *)(a0 + 5) == '\x01') {
            ar7_00 = auStack_24;
            ar6_00 = auStack_1c;
            span_take(auStack_1c, a2, ar6_00, ar7_00);
            switch_jump(8, a3, auStack_1c);
            switch_jump(8, puVar3 + 2, auStack_24);
            goto LAB_8c26bbce;
        }
    }
    *a3 = 0;
    a3[1] = 0;
LAB_8c26bbce:
    uVar1 = sr_with_imask_c(a0, uVar1);
    return uVar1;
}

/*
 * game_sub_26bbe2  0x8c26bbe2
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26bbe2(int a0, int a1, int *a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    int *piVar2;
    int *piVar3;
    u32 *puVar4;
    int *a6;
    u32 ar7_00;

    if ((a1 < 0) || (3 < a1)) {
        if (*(int *)(a0 + 0x28) != 0) {
            /* WARNING: Could not recover jumptable at 0x8c26bc10. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar1 = (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd);
            return uVar1;
        }
    } else if ((0 < a2[1]) && (*a2 != 0)) {
        a6 = a2;
        uVar1 = sr_get_imask_c();
        ar7_00 = 0;
        piVar2 = (int *)(a1 * 4 + a0 + 0x18);
        piVar3 = NULL;
        while (*piVar2 != 0) {
            piVar2 = (int *)*piVar2;
            piVar3 = piVar2;
            a6 = piVar2;
        }
        if (((*(char *)(a0 + 5) == '\x01') && (piVar3 != NULL)) && (piVar3[2] + piVar3[3] == *a2)) {
            piVar3[3] = piVar3[3] + a2[1];
        } else {
            puVar4 = *(u32 **)(a0 + 0x14);
            if (puVar4 == NULL) {
                if (*(int *)(a0 + 0x28) != 0) {
                    (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a6, 0);
                }
            } else {
                *(u32 *)(a0 + 0x14) = *puVar4;
                *puVar4 = 0;
                switch_jump(8, puVar4 + 2, a2);
                *piVar2 = (int)puVar4;
            }
        }
        uVar1 = sr_with_imask_c(a0, uVar1);
        return uVar1;
    }
    return ain0;
}

/*
 * game_sub_26bcaa  0x8c26bcaa
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26bcaa(int a0, int a1, int *a2, u32 a3, u32 ain0) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 *puVar4;
    int *a6;

    if ((a1 < 0) || (3 < a1)) {
        if (*(int *)(a0 + 0x28) != 0) {
            /* WARNING: Could not recover jumptable at 0x8c26bcd8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar1 = (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd);
            return uVar1;
        }
    } else if ((0 < a2[1]) && (*a2 != 0)) {
        a6 = a2;
        uVar1 = sr_get_imask_c();
        iVar2 = a1 * 4;
        iVar3 = *(int *)(iVar2 + a0 + 0x18);
        if (((*(char *)(a0 + 5) == '\x01') && (iVar3 != 0)) && (*a2 + a2[1] == *(int *)(iVar3 + 8))) {
            *(int *)(iVar3 + 8) = *a2;
            *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + a2[1];
        } else {
            puVar4 = *(u32 **)(a0 + 0x14);
            if (puVar4 == NULL) {
                if (*(int *)(a0 + 0x28) != 0) {
                    (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a6, a3);
                }
            } else {
                *(u32 *)(a0 + 0x14) = *puVar4;
                *puVar4 = 0;
                switch_jump(8, puVar4 + 2, a2);
                *puVar4 = *(u32 *)(a0 + 0x18 + iVar2);
                *(u32 **)(a0 + 0x18 + iVar2) = puVar4;
            }
        }
        uVar1 = sr_with_imask_c(a0, uVar1);
        return uVar1;
    }
    return ain0;
}

/*
 * game_sub_26bd86  0x8c26bd86
 * area name: game code; nothing names its area yet
 */
u32 game_sub_26bd86(int a0, int a1, int a2, u32 *a3) {
    int iVar1;
    u8 *puVar2;
    u8 auStack_10[12];

    puVar2 = auStack_10;
    *a3 = 0;
    if ((a1 < 0) || (3 < a1)) {
        if (*(int *)(a0 + 0x28) != 0) {
            (**(code **)(a0 + 0x28))(*(u32 *)(a0 + 0x2c), 0xfffffffd, a2, a3);
        }
    } else {
        iVar1 = *(int *)(a1 * 4 + a0 + 0x18);
        if (iVar1 != 0) {
            switch_jump(8, auStack_10, iVar1 + 8);
            *a3 = *(u32 *)(puVar2 + 4);
            if (*(char *)(a0 + 5) == '\x01') {
                if (a2 <= *(int *)(puVar2 + 4)) {
                    return 1;
                }
            } else if (*(int *)(puVar2 + 4) == a2) {
                return 1;
            }
        }
    }
    return 0;
}

/*
 * span_take  0x8c26be30
 * takes at most a1 bytes from the span a2 (pointer, length) into a3 and advances it
 * called by: ADXSTM_sub_2635a4, cri_sub_262f02, cri_sub_264308, game_sub_26bb16, mwRnaDiscardData, mwRna_sub_268f3e,
 * ta_sub_262c80
 */
u32 span_take(u32 a0, int a1, int *a2, int *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;

    uVar1 = switch_jump(8, a2, a0);
    a3[1] = a2[1];
    if (a1 < a2[1]) {
        a2[1] = a1;
    }
    iVar2 = a3[1];
    iVar3 = a2[1];
    a3[1] = iVar2 - iVar3;
    if (iVar2 - iVar3 == 0) {
        *a3 = 0;
    } else {
        *a3 = *a2 + a2[1];
    }
    return uVar1;
}
