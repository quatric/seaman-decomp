/* Seaman (USA) region 0x8c250000-0x8c260000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * gfxlib_uses_float_to_color_u8_250144  0x8c250144
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 * called by: ninja_uses_ta_fifo_2536a8
 * decompiler: Heritage AFTER dead removal. Example location: r0x8c4c2630 : 0x8c250546
 */
u32 gfxlib_uses_float_to_color_u8_250144(u16 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u16 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    u32 uVar7;
    int iVar8;
    code *pcVar9;
    double *pdVar10;
    u8 *puVar11;
    u8 *puVar12;
    u32 *puVar13;
    double *pdVar14;
    double *ar6_00;
    u8 *ar6_01;
    double *unaff_r8;
    double *pdVar15;
    double *pdVar16;
    double *pdVar17;
    u16 *puVar18;
    u16 *puVar19;
    u16 *puVar20;
    double in_dr0;
    double dVar21;
    double dVar22;
    double dVar23;
    u64 uVar24;
    u32 uVar25;
    double in_dr4;
    double dVar26;
    float fVar29;
    double dVar27;
    u32 uVar30;
    u32 uVar31;
    float fVar32;
    u64 in_dr14;
    double dVar33;
    double in_xd2;
    double dVar34;
    double in_xd4;
    double in_xd14;
    bool bVar35;
    float in_PR;
    char cVar36;
    char cVar37;
    u64 *ain0;
    int iStack_60;
    int iStack_5c;
    int iStack_58;
    int iStack_54;
    u32 uStack_4c;
    u32 uStack_48;
    u8 auStack_3c[12];
    u32 uStack_30;
    u32 uStack_2c;
    float fStack_28;
    float fStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uVar28;

    cVar37 = '\0';
    cVar36 = '\0';
    uStack_1c = (u32)in_dr14;
    uStack_20 = (u32)((u64)in_dr14 >> 0x20);
    uVar1 = *a0;
    puVar18 = *(u16 **)(a0 + 2);
    dVar33 = (double)CONCAT44(uStack_20, 0x3f000000);
    uVar2 = uVar1 & 0xc000;
    fStack_24 = in_PR;
    if ((uVar1 & 0xc000) == 0) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 3;
        iStack_5c = 0;
        dVar33 = 7.946779287948402e-07;
        ain0 = (u64 *)&g_8c4c2630;
        while (true) {
            uVar28 = SUB84(in_dr4, 0);
            uVar2 = (u32)a0[1];
            if ((int)uVar2 <= iStack_5c)
                break;
            uVar1 = *puVar18;
            puVar20 = puVar18 + 1;
            puVar19 = puVar18 + 2;
            puVar18 = puVar18 + 3;
            pdVar10 = (double *)((u32)*puVar20 * 0x40 + g_8c4aa510);
            if (cVar37 == '\0') {
                uVar28 = *(u32 *)((int)pdVar10 + 4);
            } else {
                in_xd4 = *(double *)((int)pdVar10 + 4);
            }
            pdVar15 = (double *)((u32)uVar1 * 0x40 + g_8c4aa510);
            if (cVar37 == '\0') {
                dVar23 = (double)CONCAT44(uVar28, *(u32 *)((int)pdVar15 + 4));
            } else {
                in_xd2 = *(double *)((int)pdVar15 + 4);
                dVar23 = in_xd4;
            }
            if (cVar36 == '\0') {
                dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) - SUB84(dVar23, 0), SUB84(dVar23, 0));
            } else {
                dVar23 = dVar23 - dVar23;
            }
            pdVar16 = (double *)((u32)*puVar19 * 0x40 + g_8c4aa510);
            if (cVar37 == '\0') {
                fVar29 = *(float *)(pdVar10 + 1);
                dVar26 = (double)CONCAT44(fVar29, uVar28);
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)(pdVar16 + 1));
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar29);
            } else {
                dVar26 = pdVar10[1];
                in_xd2 = pdVar16[1];
                fVar29 = (float)((u64)dVar26 >> 0x20);
            }
            if (cVar36 == '\0') {
                fVar29 = SUB84(dVar23, 0) - fVar29;
                dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) * fVar29, fVar29);
            } else {
                dVar23 = (dVar23 - dVar26) * (dVar23 - dVar26);
            }
            if (cVar37 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)(pdVar15 + 1));
            } else {
                in_xd2 = pdVar15[1];
            }
            if (cVar36 == '\0') {
                dVar21 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar23, 0));
            } else {
                dVar21 = in_dr0 - dVar23;
            }
            uVar28 = (u32)((u64)dVar23 >> 0x20);
            if (cVar37 == '\0') {
                dVar23 = (double)CONCAT44(uVar28, *(u32 *)((int)pdVar16 + 4));
                dVar26 = (double)CONCAT44(uVar28, SUB84(dVar26, 0));
            } else {
                in_xd2 = *(double *)((int)pdVar16 + 4);
                dVar26 = dVar23;
            }
            iStack_54 = 0;
            if (cVar36 == '\0') {
                fVar29 = SUB84(dVar23, 0) - SUB84(dVar26, 0);
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), fVar29);
                in_dr0 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) * fVar29);
            } else {
                dVar23 = dVar23 - dVar26;
                in_dr0 = dVar21 * dVar23;
            }
            if (cVar36 == '\0') {
                fVar29 = (float)((u64)dVar26 >> 0x20) - SUB84(in_dr0, 0);
                in_dr4 = (double)CONCAT44(fVar29, SUB84(dVar26, 0));
                bVar35 = 0.0 < fVar29;
            } else {
                in_dr4 = dVar26 - in_dr0;
                bVar35 = (double)((u64)dVar23 & 0xffffffff00000000) < in_dr4;
            }
            if (bVar35) {
                if ((g_8c4ab308 & 0x800000) != 0) {
                    iStack_54 = 0x8000;
                    goto LAB_8c250264;
                }
            } else {
            LAB_8c250264:
                pdVar17 = pdVar10 + 2;
                puVar11 = auStack_3c;
                pdVar14 = pdVar16 + 2;
                triangle_normal(pdVar15 + 2, pdVar17, pdVar14, puVar11);
                uVar28 = SUB84(in_dr0, 0);
                njUnitVector(auStack_3c, pdVar17, pdVar14, puVar11, ain0);
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44(*(u32 *)(pdVar15 + 2), *(u32 *)(pdVar10 + 2));
                } else {
                    dVar23 = pdVar15[2];
                    in_xd2 = pdVar10[2];
                }
                puVar12 = auStack_3c;
                puVar11 = &g_8c4c2620;
                if (cVar36 == '\0') {
                    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0), SUB84(dVar23, 0));
                } else {
                    dVar23 = dVar23 + dVar23;
                }
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)(pdVar16 + 2));
                } else {
                    in_xd2 = pdVar16[2];
                }
                fVar29 = (float)((u64)dVar33 >> 0x20);
                if (cVar36 == '\0') {
                    dVar23 =
                        (double)CONCAT44(((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0)) * fVar29, SUB84(dVar23, 0));
                } else {
                    dVar23 = (dVar23 + dVar23) * dVar33;
                }
                if (cVar37 == '\0') {
                    uStack_30 = (u32)((u64)dVar23 >> 0x20);
                    dVar23 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 0x14), *(u32 *)((int)pdVar10 + 0x14));
                } else {
                    uStack_30 = SUB84(dVar23, 0);
                    dVar23 = *(double *)((int)pdVar15 + 0x14);
                    in_xd2 = *(double *)((int)pdVar10 + 0x14);
                }
                if (cVar36 == '\0') {
                    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0), SUB84(dVar23, 0));
                } else {
                    dVar23 = dVar23 + dVar23;
                }
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)((int)pdVar16 + 0x14));
                } else {
                    in_xd2 = *(double *)((int)pdVar16 + 0x14);
                }
                if (cVar36 == '\0') {
                    dVar23 =
                        (double)CONCAT44(((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0)) * fVar29, SUB84(dVar23, 0));
                } else {
                    dVar23 = (dVar23 + dVar23) * dVar33;
                }
                if (cVar37 == '\0') {
                    uStack_2c = (u32)((u64)dVar23 >> 0x20);
                    dVar23 = (double)CONCAT44(*(u32 *)(pdVar15 + 3), *(u32 *)(pdVar10 + 3));
                } else {
                    uStack_2c = SUB84(dVar23, 0);
                    dVar23 = pdVar15[3];
                    in_xd2 = pdVar10[3];
                }
                if (cVar36 == '\0') {
                    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0), SUB84(dVar23, 0));
                } else {
                    dVar23 = dVar23 + dVar23;
                }
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)(pdVar16 + 3));
                } else {
                    in_xd2 = pdVar16[3];
                }
                if (cVar36 == '\0') {
                    dVar23 =
                        (double)CONCAT44(((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0)) * fVar29, SUB84(dVar23, 0));
                } else {
                    dVar23 = (dVar23 + dVar23) * dVar33;
                }
                fVar29 = (float)((u64)dVar23 >> 0x20);
                fStack_28 = fVar29;
                if (cVar37 != '\0') {
                    fStack_28 = SUB84(dVar23, 0);
                    fStack_24 = fVar29;
                }
                puVar13 = &uStack_30;
                gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar13, puVar12, iStack_54);
                uVar30 = SUB84(dVar23, 0);
                dVar23 = g_8c4c2624;
                if (cVar37 == '\0') {
                    dVar23 = in_xd4;
                }
                uVar7 = float_to_color_u8(puVar11, puVar13, puVar12, iStack_54);
                if (cVar37 == '\0') {
                    uVar3 = *(u32 *)((int)ain0 + 4);
                    in_xd4 = dVar23;
                } else {
                    in_xd4 = *(double *)((int)ain0 + 4);
                    uVar3 = (u32)*ain0;
                }
                uVar4 = float_to_color_u8(puVar11, puVar13, puVar12, iStack_54);
                uVar31 = SUB84(dVar33, 0);
                dVar23 = in_xd14;
                dVar26 = in_xd14;
                if (cVar37 == '\0') {
                    dVar23 = in_xd2;
                    uVar30 = uVar31;
                    dVar26 = (double)CONCAT44(uVar31, uVar28);
                }
                *(u32 *)pdVar15 = 0xe0000000;
                if (cVar37 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(pdVar15 + 6), uVar30);
                } else {
                    dVar21 = pdVar15[6];
                }
                if (cVar36 == '\0') {
                    dVar21 = (double)(u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)((u64)dVar21 >> 0x20) +
                                                SUB84(dVar21, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar15 + 4) = SUB84(dVar21, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar15 + 0x34), uVar31);
                    dVar26 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    pdVar15[4] = dVar23;
                    uVar24 = *(u64 *)((int)pdVar15 + 0x34);
                    dVar23 = in_xd14;
                    dVar26 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar15 + 0x24) = (int)uVar24;
                    dVar26 = (double)CONCAT44(*(u32 *)pdVar15, SUB84(dVar26, 0));
                    dVar21 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 4), (int)uVar24);
                    pdVar15 = pdVar15 + 1;
                } else {
                    *(double *)((int)pdVar15 + 0x24) = dVar23;
                    dVar26 = *pdVar15;
                    dVar21 = pdVar15[1];
                    pdVar15 = pdVar15 + 2;
                }
                if (cVar37 == '\0') {
                    uVar28 = *(u32 *)(pdVar15 + 2);
                    dVar27 = (double)CONCAT44(uVar28, uVar3);
                    *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar15 + 0x14);
                    *(u32 *)(unaff_r8 + 3) = uVar28;
                    *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar21 >> 0x20);
                    unaff_r8 = unaff_r8 + 2;
                    *(int *)unaff_r8 = (int)((u64)dVar26 >> 0x20);
                    dVar21 = (double)((u64)dVar33 & 0xffffffff);
                    dVar26 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    dVar27 = pdVar15[2];
                    unaff_r8[3] = pdVar15[3];
                    unaff_r8[2] = dVar27;
                    unaff_r8[1] = dVar21;
                    *unaff_r8 = dVar26;
                    dVar23 = in_xd14;
                    dVar26 = in_xd14;
                }
                *(u32 *)pdVar10 = 0xe0000000;
                if (cVar37 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(pdVar10 + 6), SUB84(dVar21, 0));
                } else {
                    dVar21 = pdVar10[6];
                }
                if (cVar36 == '\0') {
                    dVar21 = (double)(u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)((u64)dVar21 >> 0x20) +
                                                SUB84(dVar21, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar10 + 4) = SUB84(dVar21, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar10 + 0x34), uVar31);
                    dVar26 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    pdVar10[4] = dVar23;
                    uVar24 = *(u64 *)((int)pdVar10 + 0x34);
                    dVar23 = in_xd14;
                    dVar26 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar10 + 0x24) = (int)uVar24;
                    dVar26 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(dVar26, 0));
                    dVar21 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), (int)uVar24);
                    pdVar10 = pdVar10 + 1;
                } else {
                    *(double *)((int)pdVar10 + 0x24) = dVar23;
                    dVar26 = *pdVar10;
                    dVar21 = pdVar10[1];
                    pdVar10 = pdVar10 + 2;
                }
                if (cVar37 == '\0') {
                    uVar28 = *(u32 *)(pdVar10 + 2);
                    dVar27 = (double)CONCAT44(uVar28, SUB84(dVar27, 0));
                    *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar10 + 0x14);
                    *(u32 *)(unaff_r8 + 7) = uVar28;
                    *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar21 >> 0x20);
                    pdVar10 = unaff_r8 + 6;
                    *(int *)pdVar10 = (int)((u64)dVar26 >> 0x20);
                    dVar21 = (double)((u64)dVar33 & 0xffffffff);
                    dVar26 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    dVar27 = pdVar10[2];
                    unaff_r8[7] = pdVar10[3];
                    unaff_r8[6] = dVar27;
                    unaff_r8[5] = dVar21;
                    pdVar10 = unaff_r8 + 4;
                    *pdVar10 = dVar26;
                    dVar26 = in_xd14;
                    dVar23 = in_xd14;
                }
                *(u32 *)pdVar16 = 0xf0000000;
                *(u32 *)(pdVar16 + 5) = uVar7;
                *(u32 *)((int)pdVar16 + 0x2c) = uVar4;
                if (cVar37 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(pdVar16 + 6), SUB84(dVar21, 0));
                } else {
                    dVar21 = pdVar16[6];
                }
                if (cVar36 == '\0') {
                    dVar21 = (double)(u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)((u64)dVar21 >> 0x20) +
                                                SUB84(dVar21, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar16 + 4) = SUB84(dVar21, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar16 + 0x34), uVar31);
                    in_xd2 = dVar23;
                    dVar23 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    pdVar16[4] = dVar23;
                    uVar24 = *(u64 *)((int)pdVar16 + 0x34);
                    in_xd2 = in_xd14;
                    dVar23 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar16 + 0x24) = (int)uVar24;
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar16, SUB84(dVar23, 0));
                    dVar23 = (double)CONCAT44(*(u32 *)((int)pdVar16 + 4), (int)uVar24);
                    pdVar16 = pdVar16 + 1;
                } else {
                    *(double *)((int)pdVar16 + 0x24) = in_xd2;
                    in_dr0 = *pdVar16;
                    dVar23 = pdVar16[1];
                    pdVar16 = pdVar16 + 2;
                }
                if (cVar37 == '\0') {
                    uVar28 = *(u32 *)(pdVar16 + 2);
                    in_dr4 = (double)CONCAT44(uVar28, SUB84(dVar27, 0));
                    *(u32 *)((int)pdVar10 + 0x3c) = *(u32 *)((int)pdVar16 + 0x14);
                    *(u32 *)(pdVar10 + 7) = uVar28;
                    *(int *)((int)pdVar10 + 0x34) = (int)((u64)dVar23 >> 0x20);
                    pdVar10 = pdVar10 + 6;
                    *(int *)pdVar10 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    in_dr4 = pdVar16[2];
                    pdVar10[7] = pdVar16[3];
                    pdVar10[6] = in_dr4;
                    pdVar10[5] = dVar23;
                    pdVar10 = pdVar10 + 4;
                    *pdVar10 = in_dr0;
                }
                unaff_r8 = pdVar10 + 4;
                g_8c4aa520 = g_8c4aa520 + 3;
            }
            iStack_5c = iStack_5c + 1;
        }
    } else if (uVar2 == 0x4000) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 4;
        for (iStack_54 = 0; uVar2 = (u32)a0[1], iStack_54 < (int)uVar2; iStack_54 = iStack_54 + 1) {
            puVar20 = puVar18 + 3;
            pdVar17 = (double *)((u32)puVar18[2] * 0x40 + g_8c4aa510);
            pdVar15 = (double *)((u32)*puVar18 * 0x40 + g_8c4aa510);
            pdVar16 = (double *)((u32)puVar18[1] * 0x40 + g_8c4aa510);
            puVar18 = puVar18 + 4;
            pdVar10 = (double *)((u32)*puVar20 * 0x40 + g_8c4aa510);
            if (cVar37 == '\0') {
                uVar28 = *(u32 *)((int)pdVar16 + 4);
                dVar26 = (double)CONCAT44(uVar28, *(u32 *)((int)pdVar15 + 4));
                dVar23 = (double)CONCAT44(uVar28, SUB84(in_dr4, 0));
            } else {
                dVar26 = *(double *)((int)pdVar16 + 4);
                in_xd2 = *(double *)((int)pdVar15 + 4);
                uVar28 = (u32)((u64)dVar26 >> 0x20);
                dVar23 = dVar26;
            }
            if (cVar36 == '\0') {
                dVar26 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) - SUB84(dVar26, 0), SUB84(dVar26, 0));
            } else {
                dVar26 = dVar26 - dVar26;
            }
            if (cVar37 == '\0') {
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)(pdVar17 + 1));
                dVar23 = (double)CONCAT44(uVar28, *(u32 *)(pdVar16 + 1));
            } else {
                in_xd2 = pdVar17[1];
            }
            fVar29 = SUB84(dVar23, 0);
            if (cVar36 == '\0') {
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) - fVar29);
            } else {
                dVar26 = dVar26 - dVar23;
            }
            if (cVar37 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar29);
            }
            if (cVar36 == '\0') {
                dVar26 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) * SUB84(dVar26, 0), SUB84(dVar26, 0));
            } else {
                dVar26 = dVar26 * dVar26;
            }
            if (cVar37 == '\0') {
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)(pdVar15 + 1));
            } else {
                in_xd2 = pdVar15[1];
            }
            if (cVar36 == '\0') {
                dVar21 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar26, 0));
            } else {
                dVar21 = in_dr0 - dVar26;
            }
            if (cVar37 == '\0') {
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)((int)pdVar17 + 4));
            } else {
                in_xd2 = *(double *)((int)pdVar17 + 4);
            }
            uStack_4c = 0;
            if (cVar36 == '\0') {
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) - (float)((u64)dVar23 >> 0x20));
            } else {
                dVar26 = dVar26 - dVar23;
            }
            uVar2 = (u32)((u64)dVar26 >> 0x20);
            dVar23 = dVar26;
            if (cVar37 == '\0') {
                dVar23 = (double)CONCAT44(uVar2, fVar29);
            }
            if (cVar36 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) * SUB84(dVar26, 0));
            } else {
                in_dr0 = dVar21 * dVar26;
            }
            if (cVar36 == '\0') {
                fVar29 = (float)((u64)dVar23 >> 0x20) - SUB84(in_dr0, 0);
                in_dr4 = (double)CONCAT44(fVar29, SUB84(dVar23, 0));
                bVar35 = 0.0 < fVar29;
            } else {
                in_dr4 = dVar23 - in_dr0;
                bVar35 = (double)((u64)uVar2 << 0x20) < in_dr4;
            }
            if (bVar35) {
                if ((g_8c4ab308 & 0x800000) != 0) {
                    uStack_4c = 0x8000;
                    goto LAB_8c2504bc;
                }
            } else {
            LAB_8c2504bc:
                pdVar14 = pdVar16 + 2;
                puVar11 = auStack_3c;
                ar6_00 = pdVar17 + 2;
                triangle_normal(pdVar15 + 2, pdVar14, ar6_00, puVar11);
                uVar28 = SUB84(in_dr0, 0);
                njUnitVector(auStack_3c, pdVar14, ar6_00, puVar11, pdVar10);
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44(*(u32 *)(pdVar16 + 2), *(u32 *)(pdVar17 + 2));
                } else {
                    dVar23 = pdVar16[2];
                    in_xd2 = pdVar17[2];
                }
                puVar11 = &g_8c4c2620;
                puVar12 = auStack_3c;
                fVar29 = SUB84(dVar33, 0);
                if (cVar36 == '\0') {
                    dVar23 =
                        (double)CONCAT44(((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0)) * fVar29, SUB84(dVar23, 0));
                } else {
                    dVar23 = (dVar23 + dVar23) * dVar33;
                }
                if (cVar37 == '\0') {
                    uStack_30 = (u32)((u64)dVar23 >> 0x20);
                    dVar23 = (double)CONCAT44(*(u32 *)((int)pdVar16 + 0x14), *(u32 *)((int)pdVar17 + 0x14));
                } else {
                    uStack_30 = SUB84(dVar23, 0);
                    dVar23 = *(double *)((int)pdVar16 + 0x14);
                    in_xd2 = *(double *)((int)pdVar17 + 0x14);
                }
                if (cVar36 == '\0') {
                    dVar23 =
                        (double)CONCAT44(((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0)) * fVar29, SUB84(dVar23, 0));
                } else {
                    dVar23 = (dVar23 + dVar23) * dVar33;
                }
                if (cVar37 == '\0') {
                    uStack_2c = (u32)((u64)dVar23 >> 0x20);
                    dVar23 = (double)CONCAT44(*(u32 *)(pdVar16 + 3), *(u32 *)(pdVar17 + 3));
                } else {
                    uStack_2c = SUB84(dVar23, 0);
                    dVar23 = pdVar16[3];
                    in_xd2 = pdVar17[3];
                }
                if (cVar36 == '\0') {
                    dVar23 =
                        (double)CONCAT44(((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0)) * fVar29, SUB84(dVar23, 0));
                } else {
                    dVar23 = (dVar23 + dVar23) * dVar33;
                }
                fVar29 = (float)((u64)dVar23 >> 0x20);
                fStack_28 = fVar29;
                if (cVar37 != '\0') {
                    fStack_28 = SUB84(dVar23, 0);
                    fStack_24 = fVar29;
                }
                puVar13 = &uStack_30;
                gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar13, puVar12, uStack_4c);
                uVar30 = SUB84(dVar23, 0);
                uVar3 = float_to_color_u8(puVar11, puVar13, puVar12, uStack_4c);
                uVar7 = g_8c4c2630;
                if (cVar37 == '\0') {
                    uVar7 = g_8c4c2634;
                }
                uVar4 = float_to_color_u8(puVar11, puVar13, puVar12, uStack_4c);
                uVar31 = SUB84(dVar33, 0);
                dVar23 = in_xd14;
                dVar26 = in_xd14;
                if (cVar37 == '\0') {
                    dVar23 = in_xd2;
                    uVar30 = uVar31;
                    dVar26 = (double)CONCAT44(uVar31, uVar28);
                }
                *(u32 *)pdVar15 = 0xe0000000;
                if (cVar37 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(pdVar15 + 6), uVar30);
                } else {
                    dVar21 = pdVar15[6];
                }
                if (cVar36 == '\0') {
                    dVar21 = (double)(u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)((u64)dVar21 >> 0x20) +
                                                SUB84(dVar21, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar15 + 4) = SUB84(dVar21, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar15 + 0x34), uVar31);
                    dVar26 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    pdVar15[4] = dVar23;
                    uVar24 = *(u64 *)((int)pdVar15 + 0x34);
                    dVar23 = in_xd14;
                    dVar26 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar15 + 0x24) = (int)uVar24;
                    dVar26 = (double)CONCAT44(*(u32 *)pdVar15, SUB84(dVar26, 0));
                    dVar21 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 4), (int)uVar24);
                    pdVar15 = pdVar15 + 1;
                } else {
                    *(double *)((int)pdVar15 + 0x24) = dVar23;
                    dVar26 = *pdVar15;
                    dVar21 = pdVar15[1];
                    pdVar15 = pdVar15 + 2;
                }
                if (cVar37 == '\0') {
                    uVar28 = *(u32 *)(pdVar15 + 2);
                    dVar27 = (double)CONCAT44(uVar28, uVar7);
                    *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar15 + 0x14);
                    *(u32 *)(unaff_r8 + 3) = uVar28;
                    *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar21 >> 0x20);
                    unaff_r8 = unaff_r8 + 2;
                    *(int *)unaff_r8 = (int)((u64)dVar26 >> 0x20);
                    dVar21 = (double)((u64)dVar33 & 0xffffffff);
                    dVar26 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    dVar27 = pdVar15[2];
                    unaff_r8[3] = pdVar15[3];
                    unaff_r8[2] = dVar27;
                    unaff_r8[1] = dVar21;
                    *unaff_r8 = dVar26;
                    dVar23 = in_xd14;
                    dVar26 = in_xd14;
                }
                *(u32 *)pdVar16 = 0xe0000000;
                if (cVar37 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(pdVar16 + 6), SUB84(dVar21, 0));
                } else {
                    dVar21 = pdVar16[6];
                }
                if (cVar36 == '\0') {
                    dVar21 = (double)(u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)((u64)dVar21 >> 0x20) +
                                                SUB84(dVar21, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar16 + 4) = SUB84(dVar21, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar16 + 0x34), uVar31);
                    dVar26 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    pdVar16[4] = dVar23;
                    uVar24 = *(u64 *)((int)pdVar16 + 0x34);
                    dVar23 = in_xd14;
                    dVar26 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar16 + 0x24) = (int)uVar24;
                    dVar26 = (double)CONCAT44(*(u32 *)pdVar16, SUB84(dVar26, 0));
                    dVar21 = (double)CONCAT44(*(u32 *)((int)pdVar16 + 4), (int)uVar24);
                    pdVar16 = pdVar16 + 1;
                } else {
                    *(double *)((int)pdVar16 + 0x24) = dVar23;
                    dVar26 = *pdVar16;
                    dVar21 = pdVar16[1];
                    pdVar16 = pdVar16 + 2;
                }
                if (cVar37 == '\0') {
                    uVar28 = *(u32 *)(pdVar16 + 2);
                    dVar27 = (double)CONCAT44(uVar28, SUB84(dVar27, 0));
                    *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar16 + 0x14);
                    *(u32 *)(unaff_r8 + 7) = uVar28;
                    *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar21 >> 0x20);
                    pdVar15 = unaff_r8 + 6;
                    *(int *)pdVar15 = (int)((u64)dVar26 >> 0x20);
                    dVar21 = (double)((u64)dVar33 & 0xffffffff);
                    dVar26 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    dVar27 = pdVar16[2];
                    unaff_r8[7] = pdVar16[3];
                    unaff_r8[6] = dVar27;
                    unaff_r8[5] = dVar21;
                    pdVar15 = unaff_r8 + 4;
                    *pdVar15 = dVar26;
                    dVar26 = in_xd14;
                    dVar23 = in_xd14;
                }
                *(u32 *)pdVar17 = 0xe0000000;
                *(u32 *)(pdVar17 + 5) = uVar3;
                *(u32 *)((int)pdVar17 + 0x2c) = uVar4;
                if (cVar37 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(pdVar17 + 6), SUB84(dVar21, 0));
                } else {
                    dVar21 = pdVar17[6];
                }
                if (cVar36 == '\0') {
                    dVar21 = (double)(u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)((u64)dVar21 >> 0x20) +
                                                SUB84(dVar21, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar17 + 4) = SUB84(dVar21, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar17 + 0x34), uVar31);
                    dVar26 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                } else {
                    pdVar17[4] = dVar23;
                    uVar24 = *(u64 *)((int)pdVar17 + 0x34);
                    dVar23 = in_xd14;
                    dVar26 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar17 + 0x24) = (int)uVar24;
                    dVar26 = (double)CONCAT44(*(u32 *)pdVar17, SUB84(dVar26, 0));
                    dVar21 = (double)CONCAT44(*(u32 *)((int)pdVar17 + 4), (int)uVar24);
                    pdVar17 = pdVar17 + 1;
                } else {
                    *(double *)((int)pdVar17 + 0x24) = dVar23;
                    dVar26 = *pdVar17;
                    dVar21 = pdVar17[1];
                    pdVar17 = pdVar17 + 2;
                }
                if (cVar37 == '\0') {
                    uVar28 = *(u32 *)(pdVar17 + 2);
                    dVar27 = (double)CONCAT44(uVar28, SUB84(dVar27, 0));
                    *(u32 *)((int)pdVar15 + 0x3c) = *(u32 *)((int)pdVar17 + 0x14);
                    *(u32 *)(pdVar15 + 7) = uVar28;
                    *(int *)((int)pdVar15 + 0x34) = (int)((u64)dVar21 >> 0x20);
                    pdVar15 = pdVar15 + 6;
                    *(int *)pdVar15 = (int)((u64)dVar26 >> 0x20);
                    dVar21 = (double)((u64)dVar33 & 0xffffffff);
                } else {
                    dVar27 = pdVar17[2];
                    pdVar15[7] = pdVar17[3];
                    pdVar15[6] = dVar27;
                    pdVar15[5] = dVar21;
                    pdVar15 = pdVar15 + 4;
                    *pdVar15 = dVar26;
                    dVar23 = in_xd14;
                }
                *(u32 *)pdVar10 = 0xf0000000;
                dVar22 = in_xd14;
                if (cVar37 == '\0') {
                    dVar22 = (double)CONCAT44(uVar31, SUB84(dVar26, 0));
                }
                *(u32 *)(pdVar10 + 5) = uVar3;
                *(u32 *)((int)pdVar10 + 0x2c) = uVar4;
                if (cVar37 == '\0') {
                    dVar26 = (double)CONCAT44(*(u32 *)(pdVar10 + 6), SUB84(dVar21, 0));
                } else {
                    dVar26 = pdVar10[6];
                }
                if (cVar36 == '\0') {
                    dVar26 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar26 >> 0x20) +
                                                SUB84(dVar26, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar10 + 4) = SUB84(dVar26, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar10 + 0x34), uVar31);
                    in_xd2 = dVar23;
                    dVar23 = (double)CONCAT44(uVar31, SUB84(dVar22, 0));
                } else {
                    pdVar10[4] = dVar23;
                    uVar24 = *(u64 *)((int)pdVar10 + 0x34);
                    in_xd2 = in_xd14;
                    dVar23 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar10 + 0x24) = (int)uVar24;
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(dVar23, 0));
                    dVar23 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), (int)uVar24);
                    pdVar10 = pdVar10 + 1;
                } else {
                    *(double *)((int)pdVar10 + 0x24) = in_xd2;
                    in_dr0 = *pdVar10;
                    dVar23 = pdVar10[1];
                    pdVar10 = pdVar10 + 2;
                }
                if (cVar37 == '\0') {
                    uVar28 = *(u32 *)(pdVar10 + 2);
                    in_dr4 = (double)CONCAT44(uVar28, SUB84(dVar27, 0));
                    *(u32 *)((int)pdVar15 + 0x3c) = *(u32 *)((int)pdVar10 + 0x14);
                    *(u32 *)(pdVar15 + 7) = uVar28;
                    *(int *)((int)pdVar15 + 0x34) = (int)((u64)dVar23 >> 0x20);
                    pdVar15 = pdVar15 + 6;
                    *(int *)pdVar15 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    in_dr4 = pdVar10[2];
                    pdVar15[7] = pdVar10[3];
                    pdVar15[6] = in_dr4;
                    pdVar15[5] = dVar23;
                    pdVar15 = pdVar15 + 4;
                    *pdVar15 = in_dr0;
                }
                unaff_r8 = pdVar15 + 4;
                g_8c4aa520 = g_8c4aa520 + 4;
            }
        }
    } else if (uVar2 == 0x8000) {
        puVar11 = &g_8c4c2620;
        for (iStack_58 = 0; uVar2 = (u32)a0[1], iStack_58 < (int)uVar2; iStack_58 = iStack_58 + 1) {
            puVar20 = puVar18 + 1;
            uVar2 = (u32)*puVar18;
            g_8c4aa51c = g_8c4aa51c + uVar2;
            iVar8 = (u32)*puVar20 * 0x40 + g_8c4aa510;
            iVar5 = (u32)puVar18[2] * 0x40 + g_8c4aa510;
            iVar6 = (u32)puVar18[3] * 0x40 + g_8c4aa510;
            if (cVar37 == '\0') {
                uVar28 = *(u32 *)(iVar5 + 4);
                dVar23 = (double)CONCAT44(uVar28, *(u32 *)(iVar8 + 4));
                dVar26 = (double)CONCAT44(uVar28, SUB84(in_dr4, 0));
            } else {
                dVar23 = *(double *)(iVar5 + 4);
                in_xd2 = *(double *)(iVar8 + 4);
                uVar28 = (u32)((u64)dVar23 >> 0x20);
                dVar26 = dVar23;
            }
            if (cVar36 == '\0') {
                dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) - SUB84(dVar23, 0), SUB84(dVar23, 0));
            } else {
                dVar23 = dVar23 - dVar23;
            }
            if (cVar37 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)(iVar6 + 8));
                dVar26 = (double)CONCAT44(uVar28, *(u32 *)(iVar5 + 8));
            } else {
                in_xd2 = *(double *)(iVar6 + 8);
            }
            fVar29 = SUB84(dVar26, 0);
            if (cVar36 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) - fVar29);
            } else {
                dVar23 = dVar23 - dVar26;
            }
            if (cVar37 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar29);
            }
            if (cVar36 == '\0') {
                dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) * SUB84(dVar23, 0), SUB84(dVar23, 0));
            } else {
                dVar23 = dVar23 * dVar23;
            }
            if (cVar37 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)(iVar8 + 8));
            } else {
                in_xd2 = *(double *)(iVar8 + 8);
            }
            if (cVar36 == '\0') {
                dVar21 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar23, 0));
            } else {
                dVar21 = in_dr0 - dVar23;
            }
            if (cVar37 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)(iVar6 + 4));
            } else {
                in_xd2 = *(double *)(iVar6 + 4);
            }
            uStack_48 = 0;
            if (cVar36 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) - (float)((u64)dVar26 >> 0x20));
            } else {
                dVar23 = dVar23 - dVar26;
            }
            uVar25 = (u32)((u64)dVar23 >> 0x20);
            dVar26 = dVar23;
            if (cVar37 == '\0') {
                dVar26 = (double)CONCAT44(uVar25, fVar29);
            }
            if (cVar36 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) * SUB84(dVar23, 0));
            } else {
                in_dr0 = dVar21 * dVar23;
            }
            if (cVar36 == '\0') {
                fVar29 = (float)((u64)dVar26 >> 0x20) - SUB84(in_dr0, 0);
                in_dr4 = (double)CONCAT44(fVar29, SUB84(dVar26, 0));
                bVar35 = 0.0 < fVar29;
            } else {
                in_dr4 = dVar26 - in_dr0;
                bVar35 = (double)((u64)uVar25 << 0x20) < in_dr4;
            }
            if (bVar35) {
                if ((g_8c4ab308 & 0x800000) != 0) {
                    uStack_48 = 0x8000;
                    goto LAB_8c250778;
                }
                puVar18 = puVar20 + uVar2;
            } else {
            LAB_8c250778:
                puVar12 = auStack_3c;
                g_8c4aa520 = g_8c4aa520 + uVar2;
                iVar6 = iVar6 + 0x10;
                iVar5 = iVar5 + 0x10;
                triangle_normal(iVar8 + 0x10, iVar5, iVar6, puVar12);
                uVar28 = SUB84(in_dr0, 0);
                njUnitVector(auStack_3c, iVar5, iVar6, puVar12, puVar11);
                iVar5 = (u32)puVar20[((int)uVar2 >> 1) + -1] * 0x40 + g_8c4aa510;
                if (cVar37 == '\0') {
                    uStack_30 = *(u32 *)(iVar5 + 0x10);
                    uStack_2c = *(u32 *)(iVar5 + 0x14);
                    fStack_28 = *(float *)(iVar5 + 0x18);
                } else {
                    uStack_30 = (u32) * (u64 *)(iVar5 + 0x10);
                    uStack_2c = (u32) * (u64 *)(iVar5 + 0x14);
                    in_xd2 = *(double *)(iVar5 + 0x18);
                    fStack_28 = SUB84(in_xd2, 0);
                    fStack_24 = (float)((u64)in_xd2 >> 0x20);
                }
                iVar5 = (u32)puVar20[(int)uVar2 >> 1] * 0x40 + g_8c4aa510;
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44(uStack_30, *(u32 *)(iVar5 + 0x10));
                } else {
                    in_xd2 = *(double *)(iVar5 + 0x10);
                    dVar23 = (double)CONCAT44(uStack_2c, uStack_30);
                }
                if (cVar36 == '\0') {
                    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0), SUB84(dVar23, 0));
                } else {
                    dVar23 = dVar23 + dVar23;
                }
                uVar30 = (u32)((u64)dVar23 >> 0x20);
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44(uStack_2c, *(u32 *)(iVar5 + 0x14));
                    uStack_30 = uVar30;
                } else {
                    uStack_30 = SUB84(dVar23, 0);
                    in_xd2 = *(double *)(iVar5 + 0x14);
                    dVar23 = (double)CONCAT44(fStack_28, uVar30);
                }
                if (cVar36 == '\0') {
                    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0), SUB84(dVar23, 0));
                } else {
                    dVar23 = dVar23 + dVar23;
                }
                uVar30 = (u32)((u64)dVar23 >> 0x20);
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44(fStack_28, *(u32 *)(iVar5 + 0x18));
                    uStack_2c = uVar30;
                } else {
                    uStack_2c = SUB84(dVar23, 0);
                    in_xd2 = *(double *)(iVar5 + 0x18);
                    dVar23 = (double)CONCAT44(fStack_24, uVar30);
                }
                if (cVar36 == '\0') {
                    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + SUB84(dVar23, 0), SUB84(dVar23, 0));
                } else {
                    dVar23 = dVar23 + dVar23;
                }
                fVar29 = (float)((u64)dVar23 >> 0x20);
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44(fVar29, uStack_30);
                    fStack_28 = fVar29;
                } else {
                    fStack_28 = SUB84(dVar23, 0);
                    in_xd2 = (double)CONCAT44(uStack_2c, uStack_30);
                    fStack_24 = fVar29;
                }
                fVar29 = SUB84(dVar33, 0);
                if (cVar36 == '\0') {
                    dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) * fVar29);
                } else {
                    dVar23 = dVar23 * dVar33;
                }
                if (cVar37 == '\0') {
                    uStack_30 = SUB84(dVar23, 0);
                    dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), uStack_2c);
                } else {
                    uStack_30 = SUB84(in_xd2, 0);
                    uStack_2c = (u32)((u64)in_xd2 >> 0x20);
                    in_xd2 = (double)CONCAT44(fStack_28, uStack_2c);
                }
                if (cVar36 == '\0') {
                    dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) * fVar29);
                } else {
                    dVar23 = dVar23 * dVar33;
                }
                puVar12 = &g_8c4c2620;
                ar6_01 = auStack_3c;
                if (cVar37 == '\0') {
                    uStack_2c = SUB84(dVar23, 0);
                    dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), fStack_28);
                } else {
                    uStack_2c = SUB84(in_xd2, 0);
                    fStack_28 = (float)((u64)in_xd2 >> 0x20);
                    in_xd2 = (double)CONCAT44(fStack_24, fStack_28);
                }
                if (cVar36 == '\0') {
                    fVar29 = SUB84(dVar23, 0) * fVar29;
                } else {
                    fVar29 = SUB84(dVar23 * dVar33, 0);
                }
                fStack_28 = fVar29;
                if (cVar37 != '\0') {
                    fStack_28 = SUB84(in_xd2, 0);
                    fStack_24 = (float)((u64)in_xd2 >> 0x20);
                }
                puVar13 = &uStack_30;
                gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar13, ar6_01, uStack_48);
                uVar7 = float_to_color_u8(puVar12, puVar13, ar6_01, uStack_48);
                uVar30 = g_8c4c2630;
                if (cVar37 == '\0') {
                    uVar30 = g_8c4c2634;
                }
                uVar3 = float_to_color_u8(puVar12, puVar13, ar6_01, uStack_48);
                fVar32 = SUB84(dVar33, 0);
                dVar23 = in_xd14;
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44(fVar32, uVar28);
                }
                dVar26 = in_xd14;
                if (cVar37 == '\0') {
                    dVar26 = in_xd2;
                    fVar29 = fVar32;
                }
                pdVar10 = (double *)((u32)*puVar20 * 0x40 + g_8c4aa510);
                *(u32 *)pdVar10 = 0xe0000000;
                if (cVar37 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)(pdVar10 + 6), fVar29);
                } else {
                    dVar21 = pdVar10[6];
                }
                if (cVar36 == '\0') {
                    dVar21 = (double)(u64)(u32)((float)((u64)dVar23 >> 0x20) * (float)((u64)dVar21 >> 0x20) +
                                                SUB84(dVar21, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar10 + 4) = SUB84(dVar21, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar10 + 0x34), fVar32);
                    dVar23 = (double)CONCAT44(fVar32, SUB84(dVar23, 0));
                } else {
                    pdVar10[4] = dVar26;
                    uVar24 = *(u64 *)((int)pdVar10 + 0x34);
                    dVar26 = in_xd14;
                    dVar23 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar10 + 0x24) = (int)uVar24;
                    dVar23 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(dVar23, 0));
                    dVar21 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), (int)uVar24);
                    pdVar10 = pdVar10 + 1;
                } else {
                    *(double *)((int)pdVar10 + 0x24) = dVar26;
                    dVar23 = *pdVar10;
                    dVar21 = pdVar10[1];
                    pdVar10 = pdVar10 + 2;
                }
                if (cVar37 == '\0') {
                    uVar28 = *(u32 *)(pdVar10 + 2);
                    dVar27 = (double)CONCAT44(uVar28, uVar30);
                    *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar10 + 0x14);
                    *(u32 *)(unaff_r8 + 3) = uVar28;
                    *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar21 >> 0x20);
                    unaff_r8 = unaff_r8 + 2;
                    *(int *)unaff_r8 = (int)((u64)dVar23 >> 0x20);
                } else {
                    dVar27 = pdVar10[2];
                    unaff_r8[3] = pdVar10[3];
                    unaff_r8[2] = dVar27;
                    unaff_r8[1] = dVar21;
                    *unaff_r8 = dVar23;
                }
                puVar20 = puVar18 + 3;
                dVar34 = in_xd14;
                dVar22 = in_xd14;
                if (cVar37 == '\0') {
                    dVar21 = (double)((u64)dVar33 & 0xffffffff);
                    dVar34 = dVar26;
                    dVar22 = (double)CONCAT44(fVar32, SUB84(dVar23, 0));
                }
                pdVar10 = (double *)((u32)puVar18[2] * 0x40 + g_8c4aa510);
                *(u32 *)pdVar10 = 0xe0000000;
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44(*(u32 *)(pdVar10 + 6), SUB84(dVar21, 0));
                } else {
                    dVar23 = pdVar10[6];
                }
                if (cVar36 == '\0') {
                    dVar23 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar23 >> 0x20) +
                                                SUB84(dVar23, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar10 + 4) = SUB84(dVar23, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar10 + 0x34), fVar32);
                    dVar23 = (double)CONCAT44(fVar32, SUB84(dVar22, 0));
                } else {
                    pdVar10[4] = dVar34;
                    uVar24 = *(u64 *)((int)pdVar10 + 0x34);
                    dVar34 = in_xd14;
                    dVar23 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar10 + 0x24) = (int)uVar24;
                    dVar23 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(dVar23, 0));
                    dVar26 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), (int)uVar24);
                    pdVar10 = pdVar10 + 1;
                } else {
                    *(double *)((int)pdVar10 + 0x24) = dVar34;
                    dVar23 = *pdVar10;
                    dVar26 = pdVar10[1];
                    pdVar10 = pdVar10 + 2;
                }
                if (cVar37 == '\0') {
                    uVar28 = *(u32 *)(pdVar10 + 2);
                    dVar21 = (double)CONCAT44(uVar28, SUB84(dVar27, 0));
                    *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar10 + 0x14);
                    *(u32 *)(unaff_r8 + 7) = uVar28;
                    *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar26 >> 0x20);
                    pdVar10 = unaff_r8 + 6;
                    *(int *)pdVar10 = (int)((u64)dVar23 >> 0x20);
                } else {
                    dVar21 = pdVar10[2];
                    unaff_r8[7] = pdVar10[3];
                    unaff_r8[6] = dVar21;
                    unaff_r8[5] = dVar26;
                    pdVar10 = unaff_r8 + 4;
                    *pdVar10 = dVar23;
                }
                uVar28 = SUB84(dVar21, 0);
                pdVar10 = pdVar10 + 4;
                iStack_60 = 2;
                if (2 < (int)(uVar2 - 1)) {
                    do {
                        fVar29 = SUB84(dVar26, 0);
                        uVar1 = *puVar20;
                        puVar20 = puVar20 + 1;
                        dVar27 = in_xd14;
                        dVar26 = in_xd14;
                        if (cVar37 == '\0') {
                            dVar27 = dVar34;
                            fVar29 = fVar32;
                            dVar26 = (double)CONCAT44(fVar32, SUB84(dVar23, 0));
                        }
                        pdVar15 = (double *)((u32)uVar1 * 0x40 + g_8c4aa510);
                        *(u32 *)pdVar15 = 0xe0000000;
                        *(u32 *)(pdVar15 + 5) = uVar7;
                        *(u32 *)((int)pdVar15 + 0x2c) = uVar3;
                        if (cVar37 == '\0') {
                            dVar23 = (double)CONCAT44(*(u32 *)(pdVar15 + 6), fVar29);
                        } else {
                            dVar23 = pdVar15[6];
                        }
                        if (cVar36 == '\0') {
                            dVar23 = (double)(u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)((u64)dVar23 >> 0x20) +
                                                        SUB84(dVar23, 0));
                        }
                        if (cVar37 == '\0') {
                            *(int *)(pdVar15 + 4) = SUB84(dVar23, 0);
                            uVar24 = CONCAT44(*(u32 *)((int)pdVar15 + 0x34), fVar32);
                            dVar34 = dVar27;
                            dVar23 = (double)CONCAT44(fVar32, SUB84(dVar26, 0));
                        } else {
                            pdVar15[4] = dVar27;
                            uVar24 = *(u64 *)((int)pdVar15 + 0x34);
                            dVar34 = in_xd14;
                            dVar23 = in_xd14;
                        }
                        if (cVar36 == '\0') {
                            uVar24 = (u64)(u32)((float)((u64)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                        }
                        if (cVar37 == '\0') {
                            *(int *)((int)pdVar15 + 0x24) = (int)uVar24;
                            dVar23 = (double)CONCAT44(*(u32 *)pdVar15, SUB84(dVar23, 0));
                            dVar26 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 4), (int)uVar24);
                            pdVar15 = pdVar15 + 1;
                        } else {
                            *(double *)((int)pdVar15 + 0x24) = dVar34;
                            dVar23 = *pdVar15;
                            dVar26 = pdVar15[1];
                            pdVar15 = pdVar15 + 2;
                        }
                        if (cVar37 == '\0') {
                            uVar28 = *(u32 *)(pdVar15 + 2);
                            dVar21 = (double)CONCAT44(uVar28, SUB84(dVar21, 0));
                            *(u32 *)((int)pdVar10 + 0x1c) = *(u32 *)((int)pdVar15 + 0x14);
                            *(u32 *)(pdVar10 + 3) = uVar28;
                            *(int *)((int)pdVar10 + 0x14) = (int)((u64)dVar26 >> 0x20);
                            pdVar10 = pdVar10 + 2;
                            *(int *)pdVar10 = (int)((u64)dVar23 >> 0x20);
                        } else {
                            dVar21 = pdVar15[2];
                            pdVar10[3] = pdVar15[3];
                            pdVar10[2] = dVar21;
                            pdVar10[1] = dVar26;
                            *pdVar10 = dVar23;
                        }
                        uVar28 = SUB84(dVar21, 0);
                        pdVar10 = pdVar10 + 4;
                        iStack_60 = iStack_60 + 1;
                    } while (iStack_60 < (int)(uVar2 - 1));
                }
                fVar29 = SUB84(dVar26, 0);
                puVar18 = puVar20 + 1;
                in_xd2 = in_xd14;
                dVar26 = in_xd14;
                if (cVar37 == '\0') {
                    in_xd2 = dVar34;
                    fVar29 = fVar32;
                    dVar26 = (double)CONCAT44(fVar32, SUB84(dVar23, 0));
                }
                pdVar15 = (double *)((u32)*puVar20 * 0x40 + g_8c4aa510);
                *(u32 *)pdVar15 = 0xf0000000;
                *(u32 *)(pdVar15 + 5) = uVar7;
                *(u32 *)((int)pdVar15 + 0x2c) = uVar3;
                if (cVar37 == '\0') {
                    dVar23 = (double)CONCAT44(*(u32 *)(pdVar15 + 6), fVar29);
                } else {
                    dVar23 = pdVar15[6];
                }
                if (cVar36 == '\0') {
                    dVar23 = (double)(u64)(u32)((float)((u64)dVar26 >> 0x20) * (float)((u64)dVar23 >> 0x20) +
                                                SUB84(dVar23, 0));
                }
                if (cVar37 == '\0') {
                    *(int *)(pdVar15 + 4) = SUB84(dVar23, 0);
                    uVar24 = CONCAT44(*(u32 *)((int)pdVar15 + 0x34), fVar32);
                    dVar23 = (double)CONCAT44(fVar32, SUB84(dVar26, 0));
                } else {
                    pdVar15[4] = in_xd2;
                    uVar24 = *(u64 *)((int)pdVar15 + 0x34);
                    in_xd2 = in_xd14;
                    dVar23 = in_xd14;
                }
                if (cVar36 == '\0') {
                    uVar24 = (u64)(u32)((float)((u64)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) + (float)uVar24);
                }
                if (cVar37 == '\0') {
                    *(int *)((int)pdVar15 + 0x24) = (int)uVar24;
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar15, SUB84(dVar23, 0));
                    dVar23 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 4), (int)uVar24);
                    pdVar15 = pdVar15 + 1;
                } else {
                    *(double *)((int)pdVar15 + 0x24) = in_xd2;
                    in_dr0 = *pdVar15;
                    dVar23 = pdVar15[1];
                    pdVar15 = pdVar15 + 2;
                }
                if (cVar37 == '\0') {
                    uVar30 = *(u32 *)(pdVar15 + 2);
                    in_dr4 = (double)CONCAT44(uVar30, uVar28);
                    *(u32 *)((int)pdVar10 + 0x1c) = *(u32 *)((int)pdVar15 + 0x14);
                    *(u32 *)(pdVar10 + 3) = uVar30;
                    *(int *)((int)pdVar10 + 0x14) = (int)((u64)dVar23 >> 0x20);
                    pdVar10 = pdVar10 + 2;
                    *(int *)pdVar10 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    in_dr4 = pdVar15[2];
                    pdVar10[3] = pdVar15[3];
                    pdVar10[2] = in_dr4;
                    pdVar10[1] = dVar23;
                    *pdVar10 = in_dr0;
                }
                unaff_r8 = pdVar10 + 4;
            }
        }
    } else if (uVar2 == 0xc000) {
        if ((g_8c4ab308 & 0x800000) == 0) {
            pcVar9 = gfxlib_uses_float_to_color_u8_241722;
        } else {
            pcVar9 = gfxlib_uses_float_to_color_u8_24149e;
        }
        uVar2 = (*pcVar9)(a0, uVar1 & 0x3fff, a2, a3);
    }
    return uVar2;
}

/*
 * vram_250a54  0x8c250a54
 * called by: ninja_uses_ta_fifo_2536a8
 * decompiler: Heritage AFTER dead removal. Example location: r0x8c4c262c : 0x8c250fb4
 */
u32 vram_250a54(u16 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u16 uVar1;
    double dVar2;
    u32 uVar3;
    int iVar4;
    code *pcVar5;
    int iVar6;
    double *pdVar7;
    u32 uVar8;
    int iVar9;
    u8 *puVar10;
    u8 *puVar11;
    u16 *puVar12;
    u32 *ar4_00;
    u32 *puVar13;
    double *pdVar14;
    u32 *puVar15;
    u8 *puVar16;
    double *pdVar17;
    int iVar18;
    u32 uVar19;
    double *unaff_r8;
    double *pdVar20;
    double *pdVar21;
    double *pdVar22;
    u32 uVar23;
    u32 *ar6_00;
    u16 *puVar24;
    u16 *puVar25;
    double in_dr0;
    float fVar26;
    float fVar27;
    double in_dr2;
    u64 uVar28;
    double dVar29;
    double in_dr4;
    double dVar30;
    float fVar34;
    double dVar31;
    double dVar32;
    double dVar33;
    u32 uVar36;
    u32 uVar37;
    double in_dr6;
    double in_dr8;
    double in_dr12;
    u64 in_dr14;
    double dVar38;
    double in_xd0;
    double in_xd2;
    double dVar39;
    double in_xd4;
    double in_xd6;
    double dVar40;
    double in_xd8;
    double in_xd14;
    bool bVar41;
    float in_PR;
    char cVar42;
    char cVar43;
    u32 *puVar44;
    u32 *puStack_68;
    int iStack_64;
    int iStack_60;
    int iStack_5c;
    u32 uStack_58;
    u32 uStack_50;
    u32 uStack_48;
    u32 uStack_44;
    u8 auStack_40[12];
    u32 uStack_34;
    u32 uStack_30;
    float fStack_2c;
    float fStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uVar35;

    cVar43 = '\0';
    cVar42 = '\0';
    uStack_1c = (u32)in_dr14;
    uStack_20 = (u32)((u64)in_dr14 >> 0x20);
    uStack_24 = (u32)((u64)in_dr12 >> 0x20);
    dVar38 = (double)CONCAT44(uStack_20, 0x3f000000);
    uVar1 = *a0;
    puVar24 = *(u16 **)(a0 + 2);
    uVar3 = uVar1 & 0xc000;
    fStack_28 = in_PR;
    if ((uVar1 & 0xc000) == 0) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 3;
        puVar11 = &g_8c4c2620;
        dVar38 = 7.946779287948402e-07;
        for (iStack_64 = 0; uVar3 = (u32)a0[1], iStack_64 < (int)uVar3; iStack_64 = iStack_64 + 1) {
            uVar1 = *puVar24;
            puVar12 = puVar24 + 1;
            puVar25 = puVar24 + 2;
            puVar24 = puVar24 + 3;
            pdVar21 = (double *)((u32)*puVar25 * 0x40 + g_8c4aa510);
            pdVar7 = (double *)((u32)uVar1 * 0x40 + g_8c4aa510);
            pdVar20 = (double *)((u32)*puVar12 * 0x40 + g_8c4aa510);
            if ((*(u32 *)pdVar7 & *(u32 *)pdVar20 & *(u32 *)pdVar21 & 0x3f) == 0) {
                if (((*(u32 *)pdVar7 | *(u32 *)pdVar20 | *(u32 *)pdVar21) & 1) == 0) {
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)((int)pdVar20 + 4);
                        dVar32 = (double)CONCAT44(uVar35, *(u32 *)((int)pdVar7 + 4));
                    } else {
                        dVar32 = *(double *)((int)pdVar20 + 4);
                        in_xd2 = *(double *)((int)pdVar7 + 4);
                        uVar35 = SUB84(in_dr4, 0);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) - SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 - dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar21 + 1));
                        dVar30 = (double)CONCAT44(*(u32 *)(pdVar20 + 1), uVar35);
                    } else {
                        in_xd2 = pdVar21[1];
                        dVar30 = pdVar20[1];
                    }
                    fVar34 = (float)((u64)dVar30 >> 0x20);
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar32, 0) - fVar34);
                    } else {
                        dVar32 = dVar32 - dVar30;
                    }
                    dVar40 = dVar30;
                    if (cVar43 == '\0') {
                        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar34);
                        dVar40 = in_xd0;
                    }
                    in_xd0 = dVar40;
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) * SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 * dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar7 + 1));
                    } else {
                        in_xd2 = pdVar7[1];
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar32, 0));
                    } else {
                        dVar40 = in_dr0 - dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)((int)pdVar21 + 4));
                    } else {
                        in_xd2 = *(double *)((int)pdVar21 + 4);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar32, 0) - SUB84(dVar30, 0));
                    } else {
                        dVar32 = dVar32 - dVar30;
                    }
                    uVar3 = (u32)((u64)dVar32 >> 0x20);
                    dVar29 = dVar32;
                    if (cVar43 == '\0') {
                        dVar29 = (double)CONCAT44(uVar3, SUB84(dVar30, 0));
                    }
                    if (cVar42 == '\0') {
                        in_dr0 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), SUB84(dVar40, 0) * SUB84(dVar32, 0));
                    } else {
                        in_dr0 = dVar40 * dVar32;
                    }
                    in_dr2 = (double)((u64)uVar3 << 0x20);
                    if (cVar42 == '\0') {
                        fVar34 = (float)((u64)dVar29 >> 0x20) - SUB84(in_dr0, 0);
                        in_dr4 = (double)CONCAT44(fVar34, SUB84(dVar29, 0));
                        bVar41 = 0.0 < fVar34;
                    } else {
                        in_dr4 = dVar29 - in_dr0;
                        bVar41 = in_dr2 < in_dr4;
                    }
                    iStack_5c = 0;
                    if (bVar41) {
                        if ((g_8c4ab308 & 0x800000) == 0)
                            goto LAB_8c250e3e;
                        iStack_5c = 0x8000;
                    }
                    pdVar22 = pdVar20 + 2;
                    puVar10 = auStack_40;
                    pdVar14 = pdVar21 + 2;
                    triangle_normal(pdVar7 + 2, pdVar22, pdVar14, puVar10);
                    uVar35 = SUB84(in_dr0, 0);
                    njUnitVector(auStack_40, pdVar22, pdVar14, puVar10, puVar11);
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44(*(u32 *)(pdVar7 + 2), *(u32 *)(pdVar20 + 2));
                    } else {
                        dVar32 = pdVar7[2];
                        in_xd2 = pdVar20[2];
                    }
                    puVar16 = auStack_40;
                    puVar10 = &g_8c4c2620;
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 + dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar21 + 2));
                    } else {
                        in_xd2 = pdVar21[2];
                    }
                    fVar34 = (float)((u64)dVar38 >> 0x20);
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_34 = (u32)((u64)dVar32 >> 0x20);
                        dVar32 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 0x14), *(u32 *)((int)pdVar20 + 0x14));
                    } else {
                        uStack_34 = SUB84(dVar32, 0);
                        dVar32 = *(double *)((int)pdVar7 + 0x14);
                        in_xd2 = *(double *)((int)pdVar20 + 0x14);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 + dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)((int)pdVar21 + 0x14));
                    } else {
                        in_xd2 = *(double *)((int)pdVar21 + 0x14);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_30 = (u32)((u64)dVar32 >> 0x20);
                        dVar32 = (double)CONCAT44(*(u32 *)(pdVar7 + 3), *(u32 *)(pdVar20 + 3));
                    } else {
                        uStack_30 = SUB84(dVar32, 0);
                        dVar32 = pdVar7[3];
                        in_xd2 = pdVar20[3];
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 + dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar21 + 3));
                    } else {
                        in_xd2 = pdVar21[3];
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    fVar34 = (float)((u64)dVar32 >> 0x20);
                    fStack_2c = fVar34;
                    if (cVar43 != '\0') {
                        fStack_2c = SUB84(dVar32, 0);
                        fStack_28 = fVar34;
                    }
                    puVar13 = &uStack_34;
                    gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar13, puVar16, iStack_5c);
                    uVar37 = SUB84(dVar32, 0);
                    if (cVar43 != '\0') {
                        in_xd6 = *(double *)(puVar11 + 0xc);
                    }
                    uStack_48 = float_to_color_u8(puVar10, puVar13, puVar16, iStack_5c);
                    uVar3 = g_8c4c2634;
                    if (cVar43 != '\0') {
                        in_xd6 = (double)CONCAT44(g_8c4c2640, g_8c4c263c);
                        uVar3 = g_8c4c2630;
                    }
                    uStack_44 = float_to_color_u8(puVar10, puVar13, puVar16, iStack_5c);
                    uVar36 = SUB84(dVar38, 0);
                    dVar32 = in_xd14;
                    dVar30 = in_xd14;
                    if (cVar43 == '\0') {
                        dVar32 = in_xd2;
                        uVar37 = uVar36;
                        dVar30 = (double)CONCAT44(uVar36, uVar35);
                    }
                    *(u32 *)pdVar7 = 0xe0000000;
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(*(u32 *)(pdVar7 + 6), uVar37);
                    } else {
                        dVar40 = pdVar7[6];
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)(u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)((u64)dVar40 >> 0x20) +
                                                    SUB84(dVar40, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar7 + 4) = SUB84(dVar40, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar7 + 0x34), uVar36);
                        dVar30 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        pdVar7[4] = dVar32;
                        uVar28 = *(u64 *)((int)pdVar7 + 0x34);
                        dVar32 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar7 + 0x24) = (int)uVar28;
                        dVar30 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar30, 0));
                        dVar40 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), (int)uVar28);
                        pdVar7 = pdVar7 + 1;
                    } else {
                        *(double *)((int)pdVar7 + 0x24) = dVar32;
                        dVar30 = *pdVar7;
                        dVar40 = pdVar7[1];
                        pdVar7 = pdVar7 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar7 + 2);
                        dVar29 = (double)CONCAT44(uVar35, uVar3);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar35;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar40 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)dVar30 >> 0x20);
                        dVar40 = (double)((u64)dVar38 & 0xffffffff);
                        dVar30 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        dVar29 = pdVar7[2];
                        unaff_r8[3] = pdVar7[3];
                        unaff_r8[2] = dVar29;
                        unaff_r8[1] = dVar40;
                        *unaff_r8 = dVar30;
                        dVar32 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    *(u32 *)pdVar20 = 0xe0000000;
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(*(u32 *)(pdVar20 + 6), SUB84(dVar40, 0));
                    } else {
                        dVar40 = pdVar20[6];
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)(u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)((u64)dVar40 >> 0x20) +
                                                    SUB84(dVar40, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar20 + 4) = SUB84(dVar40, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar20 + 0x34), uVar36);
                        dVar30 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        pdVar20[4] = dVar32;
                        uVar28 = *(u64 *)((int)pdVar20 + 0x34);
                        dVar32 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar20 + 0x24) = (int)uVar28;
                        dVar30 = (double)CONCAT44(*(u32 *)pdVar20, SUB84(dVar30, 0));
                        dVar40 = (double)CONCAT44(*(u32 *)((int)pdVar20 + 4), (int)uVar28);
                        pdVar20 = pdVar20 + 1;
                    } else {
                        *(double *)((int)pdVar20 + 0x24) = dVar32;
                        dVar30 = *pdVar20;
                        dVar40 = pdVar20[1];
                        pdVar20 = pdVar20 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar20 + 2);
                        dVar29 = (double)CONCAT44(uVar35, SUB84(dVar29, 0));
                        *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar20 + 0x14);
                        *(u32 *)(unaff_r8 + 7) = uVar35;
                        *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar40 >> 0x20);
                        pdVar7 = unaff_r8 + 6;
                        *(int *)pdVar7 = (int)((u64)dVar30 >> 0x20);
                        dVar40 = (double)((u64)dVar38 & 0xffffffff);
                        dVar30 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        dVar29 = pdVar20[2];
                        unaff_r8[7] = pdVar20[3];
                        unaff_r8[6] = dVar29;
                        unaff_r8[5] = dVar40;
                        pdVar7 = unaff_r8 + 4;
                        *pdVar7 = dVar30;
                        dVar30 = in_xd14;
                        dVar32 = in_xd14;
                    }
                    *(u32 *)pdVar21 = 0xf0000000;
                    *(u32 *)(pdVar21 + 5) = uStack_48;
                    *(u32 *)((int)pdVar21 + 0x2c) = uStack_44;
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(*(u32 *)(pdVar21 + 6), SUB84(dVar40, 0));
                    } else {
                        dVar40 = pdVar21[6];
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)(u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)((u64)dVar40 >> 0x20) +
                                                    SUB84(dVar40, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar21 + 4) = SUB84(dVar40, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar21 + 0x34), uVar36);
                        in_xd2 = dVar32;
                        dVar32 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        pdVar21[4] = dVar32;
                        uVar28 = *(u64 *)((int)pdVar21 + 0x34);
                        in_xd2 = in_xd14;
                        dVar32 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar32 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar21 + 0x24) = (int)uVar28;
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar21, SUB84(dVar32, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar21 + 4), (int)uVar28);
                        pdVar21 = pdVar21 + 1;
                    } else {
                        *(double *)((int)pdVar21 + 0x24) = in_xd2;
                        in_dr0 = *pdVar21;
                        in_dr2 = pdVar21[1];
                        pdVar21 = pdVar21 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar21 + 2);
                        in_dr4 = (double)CONCAT44(uVar35, SUB84(dVar29, 0));
                        *(u32 *)((int)pdVar7 + 0x3c) = *(u32 *)((int)pdVar21 + 0x14);
                        *(u32 *)(pdVar7 + 7) = uVar35;
                        *(int *)((int)pdVar7 + 0x34) = (int)((u64)in_dr2 >> 0x20);
                        pdVar7 = pdVar7 + 6;
                        *(int *)pdVar7 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        in_dr4 = pdVar21[2];
                        pdVar7[7] = pdVar21[3];
                        pdVar7[6] = in_dr4;
                        pdVar7[5] = in_dr2;
                        pdVar7 = pdVar7 + 4;
                        *pdVar7 = in_dr0;
                    }
                    unaff_r8 = pdVar7 + 4;
                    g_8c4aa520 = g_8c4aa520 + 3;
                } else {
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar20 + 3);
                        uVar37 = *(u32 *)((int)pdVar20 + 0x14);
                        in_dr8 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 0x14), SUB84(in_dr8, 0));
                        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(pdVar7 + 3));
                        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar37);
                        dVar40 = (double)CONCAT44(uVar35, SUB84(in_dr0, 0));
                        dVar32 = in_xd2;
                        dVar30 = (double)CONCAT44(uVar37, uVar35);
                    } else {
                        dVar40 = pdVar20[3];
                        dVar32 = *(double *)((int)pdVar20 + 0x14);
                        in_dr8 = *(double *)((int)pdVar7 + 0x14);
                        uVar37 = (u32)((u64)dVar32 >> 0x20);
                        uVar35 = SUB84(dVar32, 0);
                        dVar30 = dVar32;
                        in_xd6 = dVar40;
                    }
                    fVar34 = (float)((u64)in_dr8 >> 0x20);
                    if (cVar42 == '\0') {
                        fVar26 = SUB84(in_dr2, 0) * SUB84(in_dr4, 0);
                        dVar40 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) * fVar34, SUB84(dVar40, 0));
                    } else {
                        fVar26 = SUB84(in_dr2 * in_dr4, 0);
                        dVar40 = dVar40 * in_dr8;
                    }
                    if (cVar43 == '\0') {
                        in_dr8 = (double)CONCAT44(fVar34, *(u32 *)(pdVar20 + 2));
                        dVar29 = (double)CONCAT44(*(u32 *)(pdVar7 + 2), SUB84(in_dr4, 0));
                        dVar31 = (double)CONCAT44(uVar35, fVar26);
                    } else {
                        in_xd8 = pdVar20[2];
                        dVar29 = pdVar7[2];
                        dVar31 = in_xd6;
                    }
                    fVar34 = (float)((u64)dVar29 >> 0x20);
                    if (cVar42 == '\0') {
                        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * fVar34, SUB84(dVar31, 0));
                    } else {
                        dVar31 = dVar31 * dVar29;
                    }
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), uVar37);
                        dVar30 = in_xd0;
                    }
                    in_xd0 = dVar30;
                    if (cVar42 == '\0') {
                        dVar40 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) - SUB84(dVar31, 0), SUB84(dVar40, 0));
                    } else {
                        dVar40 = dVar40 - dVar31;
                    }
                    in_xd2 = in_xd8;
                    if (cVar43 == '\0') {
                        dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(in_dr8, 0));
                        in_xd2 = dVar32;
                    }
                    if (cVar42 == '\0') {
                        dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar31, 0) * SUB84(dVar29, 0));
                    } else {
                        dVar31 = dVar31 * dVar29;
                    }
                    dVar32 = in_xd8;
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44(SUB84(in_dr8, 0), SUB84(in_dr12, 0));
                    }
                    if (cVar42 == '\0') {
                        in_dr12 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) * (float)((u64)in_dr8 >> 0x20),
                                                   SUB84(dVar32, 0));
                        dVar40 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), SUB84(dVar40, 0) * fVar34);
                        fVar34 = SUB84(dVar31, 0) - (float)((u64)dVar31 >> 0x20);
                    } else {
                        in_dr12 = dVar32 * in_dr8;
                        dVar40 = dVar40 * dVar29;
                        fVar34 = SUB84(dVar31 - dVar31, 0);
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44(*(u32 *)((int)pdVar21 + 0x14), fVar34);
                    } else {
                        dVar32 = *(double *)((int)pdVar21 + 0x14);
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)CONCAT44((int)((u64)dVar40 >> 0x20),
                                                  SUB84(dVar40, 0) - (float)((u64)in_dr12 >> 0x20));
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) * SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar40 = dVar40 - in_dr12;
                        dVar32 = dVar32 * dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar21 + 2));
                    } else {
                        in_xd2 = pdVar21[2];
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) * SUB84(dVar32, 0) +
                                                      (float)((u64)dVar32 >> 0x20),
                                                  SUB84(dVar32, 0));
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar21 + 3));
                        in_dr0 = (double)CONCAT44(SUB84(dVar40, 0), SUB84(dVar40, 0));
                    } else {
                        in_xd2 = pdVar21[3];
                        in_dr0 = in_xd0;
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)((u64)(u32)((float)((u64)in_dr0 >> 0x20) * SUB84(dVar32, 0) +
                                                     (float)((u64)dVar32 >> 0x20))
                                          << 0x20);
                    }
                    in_dr2 = (double)((u64)dVar32 & 0xffffffff00000000);
                    in_dr4 = in_dr2;
                    if (cVar43 == '\0') {
                        in_dr4 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar29, 0));
                    }
                    if (cVar42 == '\0') {
                        bVar41 = 0.0 < (float)((u64)in_dr4 >> 0x20);
                    } else {
                        bVar41 = in_dr2 < in_dr4;
                    }
                    iStack_5c = 0;
                    if (bVar41) {
                        if ((g_8c4ab308 & 0x800000) == 0)
                            goto LAB_8c250e3e;
                        iStack_5c = 0x8000;
                    }
                    pdVar22 = pdVar20 + 2;
                    puVar10 = auStack_40;
                    pdVar14 = pdVar21 + 2;
                    triangle_normal(pdVar7 + 2, pdVar22, pdVar14, puVar10);
                    njUnitVector(auStack_40, pdVar22, pdVar14, puVar10, puVar11);
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44(*(u32 *)(pdVar7 + 2), *(u32 *)(pdVar20 + 2));
                    } else {
                        dVar32 = pdVar7[2];
                        in_xd2 = pdVar20[2];
                    }
                    puVar16 = auStack_40;
                    puVar10 = &g_8c4c2620;
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 + dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar21 + 2));
                    } else {
                        in_xd2 = pdVar21[2];
                    }
                    fVar34 = (float)((u64)dVar38 >> 0x20);
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_34 = (u32)((u64)dVar32 >> 0x20);
                        dVar32 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 0x14), *(u32 *)((int)pdVar20 + 0x14));
                    } else {
                        uStack_34 = SUB84(dVar32, 0);
                        dVar32 = *(double *)((int)pdVar7 + 0x14);
                        in_xd2 = *(double *)((int)pdVar20 + 0x14);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 + dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)((int)pdVar21 + 0x14));
                    } else {
                        in_xd2 = *(double *)((int)pdVar21 + 0x14);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_30 = (u32)((u64)dVar32 >> 0x20);
                        dVar32 = (double)CONCAT44(*(u32 *)(pdVar7 + 3), *(u32 *)(pdVar20 + 3));
                    } else {
                        uStack_30 = SUB84(dVar32, 0);
                        dVar32 = pdVar7[3];
                        in_xd2 = pdVar20[3];
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 + dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar21 + 3));
                    } else {
                        in_xd2 = pdVar21[3];
                    }
                    if (cVar42 == '\0') {
                        in_dr2 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        in_dr2 = (dVar32 + dVar32) * dVar38;
                    }
                    fVar34 = (float)((u64)in_dr2 >> 0x20);
                    fStack_2c = fVar34;
                    if (cVar43 != '\0') {
                        fStack_2c = SUB84(in_dr2, 0);
                        fStack_28 = fVar34;
                    }
                    puVar13 = &uStack_34;
                    gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar13, puVar16, iStack_5c);
                    if (cVar43 != '\0') {
                        in_xd6 = *(double *)(puVar11 + 0xc);
                    }
                    uStack_48 = float_to_color_u8(puVar10, puVar13, puVar16, iStack_5c);
                    if (cVar43 == '\0') {
                        in_dr4 = (double)CONCAT44(g_8c4c2630, g_8c4c2634);
                    } else {
                        in_xd6 = (double)CONCAT44(g_8c4c2640, g_8c4c263c);
                        in_dr4 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                    }
                    uStack_44 = float_to_color_u8(puVar10, puVar13, puVar16, iStack_5c);
                    gfxlib_fill_loop_247b20(pdVar7, pdVar20, pdVar21, &uStack_48);
                }
            }
        LAB_8c250e3e:
        }
    } else if (uVar3 == 0x4000) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 4;
        iStack_5c = 0;
        while (true) {
            uVar37 = SUB84(in_dr6, 0);
            uVar35 = SUB84(in_dr4, 0);
            uVar3 = (u32)a0[1];
            if ((int)uVar3 <= iStack_5c)
                break;
            puVar12 = puVar24 + 3;
            pdVar22 = (double *)((u32)puVar24[2] * 0x40 + g_8c4aa510);
            pdVar20 = (double *)((u32)*puVar24 * 0x40 + g_8c4aa510);
            pdVar21 = (double *)((u32)puVar24[1] * 0x40 + g_8c4aa510);
            puVar24 = puVar24 + 4;
            pdVar7 = (double *)((u32)*puVar12 * 0x40 + g_8c4aa510);
            if ((*(u32 *)pdVar20 & *(u32 *)pdVar21 & *(u32 *)pdVar22 & *(u32 *)pdVar7 & 0x3f) == 0) {
                if (((*(u32 *)pdVar20 | *(u32 *)pdVar21 | *(u32 *)pdVar22 | *(u32 *)pdVar7) & 1) == 0) {
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)((int)pdVar21 + 4);
                        dVar32 = (double)CONCAT44(uVar35, *(u32 *)((int)pdVar20 + 4));
                    } else {
                        dVar32 = *(double *)((int)pdVar21 + 4);
                        in_xd2 = *(double *)((int)pdVar20 + 4);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) - SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 - dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar22 + 1));
                        dVar30 = (double)CONCAT44(*(u32 *)(pdVar21 + 1), uVar35);
                    } else {
                        in_xd2 = pdVar22[1];
                        dVar30 = pdVar21[1];
                    }
                    fVar34 = (float)((u64)dVar30 >> 0x20);
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar32, 0) - fVar34);
                    } else {
                        dVar32 = dVar32 - dVar30;
                    }
                    dVar40 = dVar30;
                    if (cVar43 == '\0') {
                        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar34);
                        dVar40 = in_xd0;
                    }
                    in_xd0 = dVar40;
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) * SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar32 = dVar32 * dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar20 + 1));
                    } else {
                        in_xd2 = pdVar20[1];
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar32, 0));
                    } else {
                        dVar40 = in_dr0 - dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)((int)pdVar22 + 4));
                    } else {
                        in_xd2 = *(double *)((int)pdVar22 + 4);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar32, 0) - SUB84(dVar30, 0));
                    } else {
                        dVar32 = dVar32 - dVar30;
                    }
                    uVar3 = (u32)((u64)dVar32 >> 0x20);
                    dVar29 = dVar32;
                    if (cVar43 == '\0') {
                        dVar29 = (double)CONCAT44(uVar3, SUB84(dVar30, 0));
                    }
                    if (cVar42 == '\0') {
                        in_dr0 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), SUB84(dVar40, 0) * SUB84(dVar32, 0));
                    } else {
                        in_dr0 = dVar40 * dVar32;
                    }
                    in_dr2 = (double)((u64)uVar3 << 0x20);
                    if (cVar42 == '\0') {
                        fVar34 = (float)((u64)dVar29 >> 0x20) - SUB84(in_dr0, 0);
                        in_dr4 = (double)CONCAT44(fVar34, SUB84(dVar29, 0));
                        bVar41 = 0.0 < fVar34;
                    } else {
                        in_dr4 = dVar29 - in_dr0;
                        bVar41 = in_dr2 < in_dr4;
                    }
                    uStack_58 = 0;
                    if (bVar41) {
                        if ((g_8c4ab308 & 0x800000) == 0)
                            goto LAB_8c25127e;
                        uStack_58 = 0x8000;
                    }
                    pdVar14 = pdVar21 + 2;
                    puVar11 = auStack_40;
                    pdVar17 = pdVar22 + 2;
                    triangle_normal(pdVar20 + 2, pdVar14, pdVar17, puVar11);
                    uVar35 = SUB84(in_dr0, 0);
                    njUnitVector(auStack_40, pdVar14, pdVar17, puVar11, pdVar7);
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44(*(u32 *)(pdVar21 + 2), *(u32 *)(pdVar22 + 2));
                    } else {
                        dVar32 = pdVar21[2];
                        in_xd2 = pdVar22[2];
                    }
                    puVar11 = &g_8c4c2620;
                    puVar10 = auStack_40;
                    fVar34 = SUB84(dVar38, 0);
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_34 = (u32)((u64)dVar32 >> 0x20);
                        dVar32 = (double)CONCAT44(*(u32 *)((int)pdVar21 + 0x14), *(u32 *)((int)pdVar22 + 0x14));
                    } else {
                        uStack_34 = SUB84(dVar32, 0);
                        dVar32 = *(double *)((int)pdVar21 + 0x14);
                        in_xd2 = *(double *)((int)pdVar22 + 0x14);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_30 = (u32)((u64)dVar32 >> 0x20);
                        dVar32 = (double)CONCAT44(*(u32 *)(pdVar21 + 3), *(u32 *)(pdVar22 + 3));
                    } else {
                        uStack_30 = SUB84(dVar32, 0);
                        dVar32 = pdVar21[3];
                        in_xd2 = pdVar22[3];
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    fVar34 = (float)((u64)dVar32 >> 0x20);
                    fStack_2c = fVar34;
                    if (cVar43 != '\0') {
                        fStack_2c = SUB84(dVar32, 0);
                        fStack_28 = fVar34;
                    }
                    puVar13 = &uStack_34;
                    gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar13, puVar10, uStack_58);
                    uVar37 = SUB84(dVar32, 0);
                    if (cVar43 != '\0') {
                        in_xd6 = (double)CONCAT44(g_8c4c2630, g_8c4c262c);
                    }
                    uStack_48 = float_to_color_u8(puVar11, puVar13, puVar10, uStack_58);
                    uVar19 = g_8c4c2634;
                    uVar3 = g_8c4c263c;
                    if (cVar43 != '\0') {
                        in_xd6 = (double)CONCAT44(g_8c4c2640, g_8c4c263c);
                        uVar19 = g_8c4c2630;
                        uVar3 = g_8c4c2638;
                    }
                    uStack_44 = float_to_color_u8(puVar11, puVar13, puVar10, uStack_58);
                    uVar36 = SUB84(dVar38, 0);
                    dVar32 = in_xd14;
                    dVar30 = in_xd14;
                    if (cVar43 == '\0') {
                        dVar32 = in_xd2;
                        uVar37 = uVar36;
                        dVar30 = (double)CONCAT44(uVar36, uVar35);
                    }
                    *(u32 *)pdVar20 = 0xe0000000;
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(*(u32 *)(pdVar20 + 6), uVar37);
                    } else {
                        dVar40 = pdVar20[6];
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)(u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)((u64)dVar40 >> 0x20) +
                                                    SUB84(dVar40, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar20 + 4) = SUB84(dVar40, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar20 + 0x34), uVar36);
                        dVar30 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        pdVar20[4] = dVar32;
                        uVar28 = *(u64 *)((int)pdVar20 + 0x34);
                        dVar32 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar20 + 0x24) = (int)uVar28;
                        dVar30 = (double)CONCAT44(*(u32 *)pdVar20, SUB84(dVar30, 0));
                        dVar40 = (double)CONCAT44(*(u32 *)((int)pdVar20 + 4), (int)uVar28);
                        pdVar20 = pdVar20 + 1;
                    } else {
                        *(double *)((int)pdVar20 + 0x24) = dVar32;
                        dVar30 = *pdVar20;
                        dVar40 = pdVar20[1];
                        pdVar20 = pdVar20 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar20 + 2);
                        dVar31 = (double)CONCAT44(uVar35, uVar19);
                        dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar20 + 0x14), uVar3);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar20 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar35;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar40 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)dVar30 >> 0x20);
                        dVar40 = (double)((u64)dVar38 & 0xffffffff);
                        dVar30 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        dVar31 = pdVar20[2];
                        dVar29 = pdVar20[3];
                        unaff_r8[3] = dVar29;
                        unaff_r8[2] = dVar31;
                        unaff_r8[1] = dVar40;
                        *unaff_r8 = dVar30;
                        dVar32 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    *(u32 *)pdVar21 = 0xe0000000;
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(*(u32 *)(pdVar21 + 6), SUB84(dVar40, 0));
                    } else {
                        dVar40 = pdVar21[6];
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)(u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)((u64)dVar40 >> 0x20) +
                                                    SUB84(dVar40, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar21 + 4) = SUB84(dVar40, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar21 + 0x34), uVar36);
                        dVar30 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        pdVar21[4] = dVar32;
                        uVar28 = *(u64 *)((int)pdVar21 + 0x34);
                        dVar32 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar21 + 0x24) = (int)uVar28;
                        dVar30 = (double)CONCAT44(*(u32 *)pdVar21, SUB84(dVar30, 0));
                        dVar40 = (double)CONCAT44(*(u32 *)((int)pdVar21 + 4), (int)uVar28);
                        pdVar21 = pdVar21 + 1;
                    } else {
                        *(double *)((int)pdVar21 + 0x24) = dVar32;
                        dVar30 = *pdVar21;
                        dVar40 = pdVar21[1];
                        pdVar21 = pdVar21 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar21 + 2);
                        dVar31 = (double)CONCAT44(uVar35, SUB84(dVar31, 0));
                        dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar21 + 0x14), SUB84(dVar29, 0));
                        *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar21 + 0x14);
                        *(u32 *)(unaff_r8 + 7) = uVar35;
                        *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar40 >> 0x20);
                        pdVar20 = unaff_r8 + 6;
                        *(int *)pdVar20 = (int)((u64)dVar30 >> 0x20);
                        dVar40 = (double)((u64)dVar38 & 0xffffffff);
                        dVar30 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        dVar31 = pdVar21[2];
                        dVar29 = pdVar21[3];
                        unaff_r8[7] = dVar29;
                        unaff_r8[6] = dVar31;
                        unaff_r8[5] = dVar40;
                        pdVar20 = unaff_r8 + 4;
                        *pdVar20 = dVar30;
                        dVar30 = in_xd14;
                        dVar32 = in_xd14;
                    }
                    *(u32 *)pdVar22 = 0xe0000000;
                    *(u32 *)(pdVar22 + 5) = uStack_48;
                    *(u32 *)((int)pdVar22 + 0x2c) = uStack_44;
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(*(u32 *)(pdVar22 + 6), SUB84(dVar40, 0));
                    } else {
                        dVar40 = pdVar22[6];
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)(u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)((u64)dVar40 >> 0x20) +
                                                    SUB84(dVar40, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar22 + 4) = SUB84(dVar40, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar22 + 0x34), uVar36);
                        dVar30 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    } else {
                        pdVar22[4] = dVar32;
                        uVar28 = *(u64 *)((int)pdVar22 + 0x34);
                        dVar32 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar22 + 0x24) = (int)uVar28;
                        dVar30 = (double)CONCAT44(*(u32 *)pdVar22, SUB84(dVar30, 0));
                        dVar40 = (double)CONCAT44(*(u32 *)((int)pdVar22 + 4), (int)uVar28);
                        pdVar22 = pdVar22 + 1;
                    } else {
                        *(double *)((int)pdVar22 + 0x24) = dVar32;
                        dVar30 = *pdVar22;
                        dVar40 = pdVar22[1];
                        pdVar22 = pdVar22 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar22 + 2);
                        dVar31 = (double)CONCAT44(uVar35, SUB84(dVar31, 0));
                        dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar22 + 0x14), SUB84(dVar29, 0));
                        *(u32 *)((int)pdVar20 + 0x3c) = *(u32 *)((int)pdVar22 + 0x14);
                        *(u32 *)(pdVar20 + 7) = uVar35;
                        *(int *)((int)pdVar20 + 0x34) = (int)((u64)dVar40 >> 0x20);
                        pdVar20 = pdVar20 + 6;
                        *(int *)pdVar20 = (int)((u64)dVar30 >> 0x20);
                        dVar40 = (double)((u64)dVar38 & 0xffffffff);
                    } else {
                        dVar31 = pdVar22[2];
                        dVar29 = pdVar22[3];
                        pdVar20[7] = dVar29;
                        pdVar20[6] = dVar31;
                        pdVar20[5] = dVar40;
                        pdVar20 = pdVar20 + 4;
                        *pdVar20 = dVar30;
                        dVar32 = in_xd14;
                    }
                    *(u32 *)pdVar7 = 0xf0000000;
                    dVar33 = in_xd14;
                    if (cVar43 == '\0') {
                        dVar33 = (double)CONCAT44(uVar36, SUB84(dVar30, 0));
                    }
                    *(u32 *)(pdVar7 + 5) = uStack_48;
                    *(u32 *)((int)pdVar7 + 0x2c) = uStack_44;
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(*(u32 *)(pdVar7 + 6), SUB84(dVar40, 0));
                    } else {
                        dVar30 = pdVar7[6];
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)(u64)(u32)((float)((u64)dVar33 >> 0x20) * (float)((u64)dVar30 >> 0x20) +
                                                    SUB84(dVar30, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar7 + 4) = SUB84(dVar30, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar7 + 0x34), uVar36);
                        in_xd2 = dVar32;
                        dVar32 = (double)CONCAT44(uVar36, SUB84(dVar33, 0));
                    } else {
                        pdVar7[4] = dVar32;
                        uVar28 = *(u64 *)((int)pdVar7 + 0x34);
                        in_xd2 = in_xd14;
                        dVar32 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar32 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar7 + 0x24) = (int)uVar28;
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar32, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), (int)uVar28);
                        pdVar7 = pdVar7 + 1;
                    } else {
                        *(double *)((int)pdVar7 + 0x24) = in_xd2;
                        in_dr0 = *pdVar7;
                        in_dr2 = pdVar7[1];
                        pdVar7 = pdVar7 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar7 + 2);
                        in_dr4 = (double)CONCAT44(uVar35, SUB84(dVar31, 0));
                        in_dr6 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 0x14), SUB84(dVar29, 0));
                        *(u32 *)((int)pdVar20 + 0x3c) = *(u32 *)((int)pdVar7 + 0x14);
                        *(u32 *)(pdVar20 + 7) = uVar35;
                        *(int *)((int)pdVar20 + 0x34) = (int)((u64)in_dr2 >> 0x20);
                        pdVar20 = pdVar20 + 6;
                        *(int *)pdVar20 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        in_dr4 = pdVar7[2];
                        in_dr6 = pdVar7[3];
                        pdVar20[7] = in_dr6;
                        pdVar20[6] = in_dr4;
                        pdVar20[5] = in_dr2;
                        pdVar20 = pdVar20 + 4;
                        *pdVar20 = in_dr0;
                    }
                    unaff_r8 = pdVar20 + 4;
                    g_8c4aa520 = g_8c4aa520 + 4;
                } else {
                    if (cVar43 == '\0') {
                        uVar37 = *(u32 *)(pdVar21 + 3);
                        uVar35 = *(u32 *)((int)pdVar21 + 0x14);
                        in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), *(u32 *)((int)pdVar20 + 0x14));
                        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar35);
                        dVar40 = (double)CONCAT44(uVar37, SUB84(in_dr0, 0));
                        dVar32 = in_xd2;
                        dVar30 = (double)CONCAT44(uVar35, *(u32 *)(pdVar20 + 3));
                    } else {
                        dVar40 = pdVar21[3];
                        dVar32 = *(double *)((int)pdVar21 + 0x14);
                        uVar35 = (u32)((u64)dVar32 >> 0x20);
                        dVar30 = dVar32;
                        in_xd6 = dVar40;
                    }
                    fVar34 = SUB84(dVar30, 0);
                    if (cVar42 == '\0') {
                        fVar26 = SUB84(in_dr2, 0) * fVar34;
                        dVar40 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) * SUB84(in_dr8, 0), SUB84(dVar40, 0));
                    } else {
                        fVar26 = SUB84(in_dr2 * dVar30, 0);
                        dVar40 = dVar40 * in_dr8;
                    }
                    if (cVar43 == '\0') {
                        in_dr8 = (double)CONCAT44(*(u32 *)(pdVar21 + 2), SUB84(in_dr8, 0));
                        in_dr6 = (double)CONCAT44(*(u32 *)(pdVar20 + 2), uVar37);
                        dVar29 = (double)CONCAT44(uVar37, fVar26);
                    } else {
                        in_dr8 = pdVar21[2];
                        in_dr6 = pdVar20[2];
                        dVar29 = in_xd6;
                    }
                    fVar26 = (float)((u64)in_dr6 >> 0x20);
                    if (cVar42 == '\0') {
                        dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * fVar26, SUB84(dVar29, 0));
                    } else {
                        dVar29 = dVar29 * in_dr6;
                    }
                    dVar31 = dVar30;
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), uVar35);
                        dVar31 = in_xd0;
                    }
                    in_xd0 = dVar31;
                    if (cVar42 == '\0') {
                        dVar40 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) - SUB84(dVar29, 0), SUB84(dVar40, 0));
                    } else {
                        dVar40 = dVar40 - dVar29;
                    }
                    uVar35 = (u32)((u64)in_dr8 >> 0x20);
                    in_xd2 = in_dr8;
                    if (cVar43 == '\0') {
                        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar35);
                        in_xd2 = dVar32;
                    }
                    if (cVar42 == '\0') {
                        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) * fVar34);
                    } else {
                        dVar29 = dVar29 * dVar30;
                    }
                    dVar32 = in_dr8;
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44(uVar35, SUB84(in_dr12, 0));
                    }
                    if (cVar42 == '\0') {
                        in_dr12 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) * SUB84(in_dr8, 0), SUB84(dVar32, 0));
                        dVar40 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), SUB84(dVar40, 0) * fVar26);
                        fVar26 = SUB84(dVar29, 0) - (float)((u64)dVar29 >> 0x20);
                    } else {
                        in_dr12 = dVar32 * in_dr8;
                        dVar40 = dVar40 * in_dr6;
                        fVar26 = SUB84(dVar29 - dVar29, 0);
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44(*(u32 *)((int)pdVar22 + 0x14), fVar26);
                    } else {
                        dVar32 = *(double *)((int)pdVar22 + 0x14);
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)CONCAT44((int)((u64)dVar40 >> 0x20),
                                                  SUB84(dVar40, 0) - (float)((u64)in_dr12 >> 0x20));
                        dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) * SUB84(dVar32, 0), SUB84(dVar32, 0));
                    } else {
                        dVar40 = dVar40 - in_dr12;
                        dVar32 = dVar32 * dVar32;
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar22 + 2));
                    } else {
                        in_xd2 = pdVar22[2];
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) * SUB84(dVar32, 0) +
                                                      (float)((u64)dVar32 >> 0x20),
                                                  SUB84(dVar32, 0));
                    }
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(pdVar22 + 3));
                        in_dr0 = (double)CONCAT44(SUB84(dVar40, 0), SUB84(dVar40, 0));
                    } else {
                        in_xd2 = pdVar22[3];
                        in_dr0 = in_xd0;
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)((u64)(u32)((float)((u64)in_dr0 >> 0x20) * SUB84(dVar32, 0) +
                                                     (float)((u64)dVar32 >> 0x20))
                                          << 0x20);
                    }
                    in_dr2 = (double)((u64)dVar32 & 0xffffffff00000000);
                    in_dr4 = in_dr2;
                    if (cVar43 == '\0') {
                        in_dr4 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), fVar34);
                    }
                    if (cVar42 == '\0') {
                        bVar41 = 0.0 < (float)((u64)in_dr4 >> 0x20);
                    } else {
                        bVar41 = in_dr2 < in_dr4;
                    }
                    uStack_58 = 0;
                    if (bVar41) {
                        if ((g_8c4ab308 & 0x800000) == 0)
                            goto LAB_8c25127e;
                        uStack_58 = 0x8000;
                    }
                    pdVar14 = pdVar21 + 2;
                    puVar11 = auStack_40;
                    pdVar17 = pdVar22 + 2;
                    triangle_normal(pdVar20 + 2, pdVar14, pdVar17, puVar11);
                    njUnitVector(auStack_40, pdVar14, pdVar17, puVar11, pdVar7);
                    if (cVar43 == '\0') {
                        dVar32 = (double)CONCAT44(*(u32 *)(pdVar21 + 2), *(u32 *)(pdVar22 + 2));
                    } else {
                        dVar32 = pdVar21[2];
                        in_xd2 = pdVar22[2];
                    }
                    puVar11 = &g_8c4c2620;
                    puVar10 = auStack_40;
                    fVar34 = SUB84(dVar38, 0);
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_34 = (u32)((u64)dVar32 >> 0x20);
                        dVar32 = (double)CONCAT44(*(u32 *)((int)pdVar21 + 0x14), *(u32 *)((int)pdVar22 + 0x14));
                    } else {
                        uStack_34 = SUB84(dVar32, 0);
                        dVar32 = *(double *)((int)pdVar21 + 0x14);
                        in_xd2 = *(double *)((int)pdVar22 + 0x14);
                    }
                    if (cVar42 == '\0') {
                        dVar32 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        dVar32 = (dVar32 + dVar32) * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_30 = (u32)((u64)dVar32 >> 0x20);
                        dVar32 = (double)CONCAT44(*(u32 *)(pdVar21 + 3), *(u32 *)(pdVar22 + 3));
                    } else {
                        uStack_30 = SUB84(dVar32, 0);
                        dVar32 = pdVar21[3];
                        in_xd2 = pdVar22[3];
                    }
                    if (cVar42 == '\0') {
                        in_dr2 = (double)CONCAT44(((float)((u64)dVar32 >> 0x20) + SUB84(dVar32, 0)) * fVar34,
                                                  SUB84(dVar32, 0));
                    } else {
                        in_dr2 = (dVar32 + dVar32) * dVar38;
                    }
                    fVar34 = (float)((u64)in_dr2 >> 0x20);
                    fStack_2c = fVar34;
                    if (cVar43 != '\0') {
                        fStack_2c = SUB84(in_dr2, 0);
                        fStack_28 = fVar34;
                    }
                    puVar13 = &uStack_34;
                    gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar13, puVar10, uStack_58);
                    if (cVar43 != '\0') {
                        in_xd6 = (double)CONCAT44(g_8c4c2630, g_8c4c262c);
                    }
                    uStack_48 = float_to_color_u8(puVar11, puVar13, puVar10, uStack_58);
                    if (cVar43 == '\0') {
                        in_dr6 = (double)(u64)g_8c4c263c;
                        in_dr4 = (double)(u64)g_8c4c2634;
                    } else {
                        in_xd6 = (double)CONCAT44(g_8c4c2640, g_8c4c263c);
                        in_dr6 = (double)CONCAT44(g_8c4c263c, g_8c4c2638);
                        in_dr4 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                    }
                    uStack_44 = float_to_color_u8(puVar11, puVar13, puVar10, uStack_58);
                    if ((*(u32 *)pdVar20 & *(u32 *)pdVar21 & *(u32 *)pdVar22 & 1) == 0) {
                        gfxlib_fill_loop_247b20(pdVar20, pdVar21, pdVar22, &uStack_48);
                    }
                    if ((*(u32 *)pdVar21 & *(u32 *)pdVar22 & *(u32 *)pdVar7 & 1) == 0) {
                        gfxlib_fill_loop_247b20(pdVar21, pdVar22, pdVar7, &uStack_48);
                    }
                }
            }
        LAB_8c25127e:
            iStack_5c = iStack_5c + 1;
        }
    } else if (uVar3 == 0x8000) {
        iStack_60 = 0;
        puVar13 = &uStack_48;
        while (true) {
            uVar35 = SUB84(in_dr4, 0);
            uVar3 = (u32)a0[1];
            if ((int)uVar3 <= iStack_60)
                break;
            iVar18 = 0;
            puVar25 = puVar24 + 1;
            uVar19 = 0xffffffff;
            uVar23 = (u32)*puVar24;
            uVar3 = 0;
            g_8c4aa51c = g_8c4aa51c + uVar23;
            puVar12 = puVar25;
            if (uVar23 != 0) {
                do {
                    uVar1 = *puVar12;
                    puVar12 = puVar12 + 1;
                    iVar18 = iVar18 + 1;
                    uVar8 = *(u32 *)((u32)uVar1 * 0x40 + g_8c4aa510);
                    uVar19 = uVar19 & uVar8;
                    uVar3 = uVar3 | uVar8;
                } while (iVar18 < (int)uVar23);
            }
            dVar32 = in_xd0;
            if ((uVar19 & 0x3f) == 0) {
                iVar18 = (int)uVar23 >> 1;
                if ((uVar3 & 1) == 0) {
                    iVar4 = (u32)*puVar25 * 0x40 + g_8c4aa510;
                    iVar9 = (u32)puVar24[2] * 0x40 + g_8c4aa510;
                    iVar6 = (u32)puVar24[3] * 0x40 + g_8c4aa510;
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(iVar9 + 4);
                        dVar30 = (double)CONCAT44(uVar35, *(u32 *)(iVar4 + 4));
                    } else {
                        dVar30 = *(double *)(iVar9 + 4);
                        in_xd2 = *(double *)(iVar4 + 4);
                        in_xd4 = dVar30;
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) - SUB84(dVar30, 0), SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 - dVar30;
                    }
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)(iVar6 + 8));
                        dVar40 = (double)CONCAT44(*(u32 *)(iVar9 + 8), uVar35);
                    } else {
                        in_xd2 = *(double *)(iVar6 + 8);
                        dVar40 = *(double *)(iVar9 + 8);
                    }
                    fVar34 = (float)((u64)dVar40 >> 0x20);
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) - fVar34);
                    } else {
                        dVar30 = dVar30 - dVar40;
                    }
                    dVar32 = dVar40;
                    if (cVar43 == '\0') {
                        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar34);
                        dVar32 = in_xd0;
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * SUB84(dVar30, 0), SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 * dVar30;
                    }
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)(iVar4 + 8));
                    } else {
                        in_xd2 = *(double *)(iVar4 + 8);
                    }
                    if (cVar42 == '\0') {
                        dVar29 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar30, 0));
                    } else {
                        dVar29 = in_dr0 - dVar30;
                    }
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)(iVar6 + 4));
                    } else {
                        in_xd2 = *(double *)(iVar6 + 4);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) - SUB84(dVar40, 0));
                    } else {
                        dVar30 = dVar30 - dVar40;
                    }
                    uVar3 = (u32)((u64)dVar30 >> 0x20);
                    dVar31 = dVar30;
                    if (cVar43 == '\0') {
                        dVar31 = (double)CONCAT44(uVar3, SUB84(dVar40, 0));
                    }
                    if (cVar42 == '\0') {
                        in_dr0 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) * SUB84(dVar30, 0));
                    } else {
                        in_dr0 = dVar29 * dVar30;
                    }
                    in_dr2 = (double)((u64)uVar3 << 0x20);
                    if (cVar42 == '\0') {
                        fVar34 = (float)((u64)dVar31 >> 0x20) - SUB84(in_dr0, 0);
                        in_dr4 = (double)CONCAT44(fVar34, SUB84(dVar31, 0));
                        bVar41 = 0.0 < fVar34;
                    } else {
                        in_dr4 = dVar31 - in_dr0;
                        bVar41 = in_dr2 < in_dr4;
                    }
                    uStack_50 = 0;
                    if (bVar41) {
                        if ((g_8c4ab308 & 0x800000) == 0)
                            goto LAB_8c2516e6;
                        uStack_50 = 0x8000;
                    }
                    puVar11 = auStack_40;
                    g_8c4aa520 = g_8c4aa520 + uVar23;
                    iVar6 = iVar6 + 0x10;
                    iVar9 = iVar9 + 0x10;
                    triangle_normal(iVar4 + 0x10, iVar9, iVar6, puVar11);
                    uVar35 = SUB84(in_dr0, 0);
                    njUnitVector(auStack_40, iVar9, iVar6, puVar11, puVar13);
                    iVar4 = (u32)puVar25[iVar18 + -1] * 0x40 + g_8c4aa510;
                    if (cVar43 == '\0') {
                        uStack_34 = *(u32 *)(iVar4 + 0x10);
                        uStack_30 = *(u32 *)(iVar4 + 0x14);
                        fStack_2c = *(float *)(iVar4 + 0x18);
                    } else {
                        uStack_34 = (u32) * (u64 *)(iVar4 + 0x10);
                        uStack_30 = (u32) * (u64 *)(iVar4 + 0x14);
                        in_xd2 = *(double *)(iVar4 + 0x18);
                        fStack_2c = SUB84(in_xd2, 0);
                        fStack_28 = (float)((u64)in_xd2 >> 0x20);
                    }
                    iVar18 = (u32)puVar25[iVar18] * 0x40 + g_8c4aa510;
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(uStack_34, *(u32 *)(iVar18 + 0x10));
                    } else {
                        in_xd2 = *(double *)(iVar18 + 0x10);
                        dVar30 = (double)CONCAT44(uStack_30, uStack_34);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + SUB84(dVar30, 0), SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 + dVar30;
                    }
                    uVar37 = (u32)((u64)dVar30 >> 0x20);
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(uStack_30, *(u32 *)(iVar18 + 0x14));
                        uStack_34 = uVar37;
                    } else {
                        uStack_34 = SUB84(dVar30, 0);
                        in_xd2 = *(double *)(iVar18 + 0x14);
                        dVar30 = (double)CONCAT44(fStack_2c, uVar37);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + SUB84(dVar30, 0), SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 + dVar30;
                    }
                    uVar37 = (u32)((u64)dVar30 >> 0x20);
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(fStack_2c, *(u32 *)(iVar18 + 0x18));
                        uStack_30 = uVar37;
                    } else {
                        uStack_30 = SUB84(dVar30, 0);
                        in_xd2 = *(double *)(iVar18 + 0x18);
                        dVar30 = (double)CONCAT44(fStack_28, uVar37);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + SUB84(dVar30, 0), SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 + dVar30;
                    }
                    fVar34 = (float)((u64)dVar30 >> 0x20);
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(fVar34, uStack_34);
                        fStack_2c = fVar34;
                    } else {
                        fStack_2c = SUB84(dVar30, 0);
                        in_xd2 = (double)CONCAT44(uStack_30, uStack_34);
                        fStack_28 = fVar34;
                    }
                    fVar34 = SUB84(dVar38, 0);
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar34);
                    } else {
                        dVar30 = dVar30 * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_34 = SUB84(dVar30, 0);
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), uStack_30);
                    } else {
                        uStack_34 = SUB84(in_xd2, 0);
                        uStack_30 = (u32)((u64)in_xd2 >> 0x20);
                        in_xd2 = (double)CONCAT44(fStack_2c, uStack_30);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar34);
                    } else {
                        dVar30 = dVar30 * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_30 = SUB84(dVar30, 0);
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fStack_2c);
                    } else {
                        uStack_30 = SUB84(in_xd2, 0);
                        fStack_2c = (float)((u64)in_xd2 >> 0x20);
                        in_xd2 = (double)CONCAT44(fStack_28, fStack_2c);
                    }
                    if (cVar42 == '\0') {
                        fVar34 = SUB84(dVar30, 0) * fVar34;
                    } else {
                        fVar34 = SUB84(dVar30 * dVar38, 0);
                    }
                    puVar11 = &g_8c4c2620;
                    puVar10 = auStack_40;
                    fStack_2c = fVar34;
                    if (cVar43 != '\0') {
                        fStack_2c = SUB84(in_xd2, 0);
                        fStack_28 = (float)((u64)in_xd2 >> 0x20);
                    }
                    puVar15 = &uStack_34;
                    gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar15, puVar10, uStack_50);
                    if (cVar43 != '\0') {
                        in_xd4 = (double)CONCAT44(g_8c4c2628, g_8c4c2624);
                    }
                    puVar44 = puVar13;
                    uVar37 = float_to_color_u8(puVar11, puVar15, puVar10, uStack_50);
                    *puVar13 = uVar37;
                    uVar19 = g_8c4c2634;
                    uVar3 = g_8c4c263c;
                    if (cVar43 != '\0') {
                        in_xd4 = (double)CONCAT44(g_8c4c2638, g_8c4c2634);
                        uVar19 = g_8c4c2630;
                        uVar3 = g_8c4c2638;
                    }
                    uStack_44 = float_to_color_u8(puVar11, puVar15, puVar10, uStack_50);
                    fVar26 = SUB84(dVar38, 0);
                    dVar30 = in_xd14;
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(fVar26, uVar35);
                    }
                    dVar40 = in_xd14;
                    if (cVar43 == '\0') {
                        dVar40 = in_xd2;
                        fVar34 = fVar26;
                    }
                    pdVar7 = (double *)((u32)*puVar25 * 0x40 + g_8c4aa510);
                    *(u32 *)pdVar7 = 0xe0000000;
                    if (cVar43 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)(pdVar7 + 6), fVar34);
                    } else {
                        dVar29 = pdVar7[6];
                    }
                    if (cVar42 == '\0') {
                        dVar29 = (double)(u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)((u64)dVar29 >> 0x20) +
                                                    SUB84(dVar29, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar7 + 4) = SUB84(dVar29, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar7 + 0x34), fVar26);
                        dVar30 = (double)CONCAT44(fVar26, SUB84(dVar30, 0));
                    } else {
                        pdVar7[4] = dVar40;
                        uVar28 = *(u64 *)((int)pdVar7 + 0x34);
                        dVar40 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar7 + 0x24) = (int)uVar28;
                        dVar30 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar30, 0));
                        dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), (int)uVar28);
                        pdVar7 = pdVar7 + 1;
                    } else {
                        *(double *)((int)pdVar7 + 0x24) = dVar40;
                        dVar30 = *pdVar7;
                        dVar29 = pdVar7[1];
                        pdVar7 = pdVar7 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar7 + 2);
                        dVar33 = (double)CONCAT44(uVar35, uVar19);
                        dVar31 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 0x14), uVar3);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar35;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar29 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)dVar30 >> 0x20);
                    } else {
                        dVar33 = pdVar7[2];
                        dVar31 = pdVar7[3];
                        unaff_r8[3] = dVar31;
                        unaff_r8[2] = dVar33;
                        unaff_r8[1] = dVar29;
                        *unaff_r8 = dVar30;
                    }
                    puVar12 = puVar24 + 3;
                    dVar39 = in_xd14;
                    dVar2 = in_xd14;
                    if (cVar43 == '\0') {
                        dVar29 = (double)((u64)dVar38 & 0xffffffff);
                        dVar39 = dVar40;
                        dVar2 = (double)CONCAT44(fVar26, SUB84(dVar30, 0));
                    }
                    pdVar7 = (double *)((u32)puVar24[2] * 0x40 + g_8c4aa510);
                    *(u32 *)pdVar7 = 0xe0000000;
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(*(u32 *)(pdVar7 + 6), SUB84(dVar29, 0));
                    } else {
                        dVar30 = pdVar7[6];
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)(u64)(u32)((float)((u64)dVar2 >> 0x20) * (float)((u64)dVar30 >> 0x20) +
                                                    SUB84(dVar30, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar7 + 4) = SUB84(dVar30, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar7 + 0x34), fVar26);
                        dVar30 = (double)CONCAT44(fVar26, SUB84(dVar2, 0));
                    } else {
                        pdVar7[4] = dVar39;
                        uVar28 = *(u64 *)((int)pdVar7 + 0x34);
                        dVar39 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar7 + 0x24) = (int)uVar28;
                        dVar30 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar30, 0));
                        dVar40 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), (int)uVar28);
                        pdVar7 = pdVar7 + 1;
                    } else {
                        *(double *)((int)pdVar7 + 0x24) = dVar39;
                        dVar30 = *pdVar7;
                        dVar40 = pdVar7[1];
                        pdVar7 = pdVar7 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar35 = *(u32 *)(pdVar7 + 2);
                        dVar33 = (double)CONCAT44(uVar35, SUB84(dVar33, 0));
                        dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 0x14), SUB84(dVar31, 0));
                        *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar7 + 0x14);
                        *(u32 *)(unaff_r8 + 7) = uVar35;
                        *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar40 >> 0x20);
                        pdVar7 = unaff_r8 + 6;
                        *(int *)pdVar7 = (int)((u64)dVar30 >> 0x20);
                    } else {
                        dVar33 = pdVar7[2];
                        dVar29 = pdVar7[3];
                        unaff_r8[7] = dVar29;
                        unaff_r8[6] = dVar33;
                        unaff_r8[5] = dVar40;
                        pdVar7 = unaff_r8 + 4;
                        *pdVar7 = dVar30;
                    }
                    uVar35 = SUB84(dVar29, 0);
                    uVar37 = SUB84(dVar33, 0);
                    pdVar7 = pdVar7 + 4;
                    puStack_68 = (u32 *)0x2;
                    if (2 < (int)(uVar23 - 1)) {
                        do {
                            fVar34 = SUB84(dVar40, 0);
                            uVar1 = *puVar12;
                            puVar12 = puVar12 + 1;
                            dVar31 = in_xd14;
                            dVar40 = in_xd14;
                            if (cVar43 == '\0') {
                                dVar31 = dVar39;
                                fVar34 = fVar26;
                                dVar40 = (double)CONCAT44(fVar26, SUB84(dVar30, 0));
                            }
                            pdVar20 = (double *)((u32)uVar1 * 0x40 + g_8c4aa510);
                            *(u32 *)pdVar20 = 0xe0000000;
                            *(u32 *)(pdVar20 + 5) = *puVar44;
                            *(u32 *)((int)pdVar20 + 0x2c) = uStack_44;
                            if (cVar43 == '\0') {
                                dVar30 = (double)CONCAT44(*(u32 *)(pdVar20 + 6), fVar34);
                            } else {
                                dVar30 = pdVar20[6];
                            }
                            if (cVar42 == '\0') {
                                dVar30 =
                                    (double)(u64)(u32)((float)((u64)dVar40 >> 0x20) * (float)((u64)dVar30 >> 0x20) +
                                                       SUB84(dVar30, 0));
                            }
                            if (cVar43 == '\0') {
                                *(int *)(pdVar20 + 4) = SUB84(dVar30, 0);
                                uVar28 = CONCAT44(*(u32 *)((int)pdVar20 + 0x34), fVar26);
                                dVar39 = dVar31;
                                dVar30 = (double)CONCAT44(fVar26, SUB84(dVar40, 0));
                            } else {
                                pdVar20[4] = dVar31;
                                uVar28 = *(u64 *)((int)pdVar20 + 0x34);
                                dVar39 = in_xd14;
                                dVar30 = in_xd14;
                            }
                            if (cVar42 == '\0') {
                                uVar28 =
                                    (u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                            }
                            if (cVar43 == '\0') {
                                *(int *)((int)pdVar20 + 0x24) = (int)uVar28;
                                dVar30 = (double)CONCAT44(*(u32 *)pdVar20, SUB84(dVar30, 0));
                                dVar40 = (double)CONCAT44(*(u32 *)((int)pdVar20 + 4), (int)uVar28);
                                pdVar20 = pdVar20 + 1;
                            } else {
                                *(double *)((int)pdVar20 + 0x24) = dVar39;
                                dVar30 = *pdVar20;
                                dVar40 = pdVar20[1];
                                pdVar20 = pdVar20 + 2;
                            }
                            if (cVar43 == '\0') {
                                uVar35 = *(u32 *)(pdVar20 + 2);
                                dVar33 = (double)CONCAT44(uVar35, SUB84(dVar33, 0));
                                dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar20 + 0x14), SUB84(dVar29, 0));
                                *(u32 *)((int)pdVar7 + 0x1c) = *(u32 *)((int)pdVar20 + 0x14);
                                *(u32 *)(pdVar7 + 3) = uVar35;
                                *(int *)((int)pdVar7 + 0x14) = (int)((u64)dVar40 >> 0x20);
                                pdVar7 = pdVar7 + 2;
                                *(int *)pdVar7 = (int)((u64)dVar30 >> 0x20);
                            } else {
                                dVar33 = pdVar20[2];
                                dVar29 = pdVar20[3];
                                pdVar7[3] = dVar29;
                                pdVar7[2] = dVar33;
                                pdVar7[1] = dVar40;
                                *pdVar7 = dVar30;
                            }
                            uVar35 = SUB84(dVar29, 0);
                            uVar37 = SUB84(dVar33, 0);
                            pdVar7 = pdVar7 + 4;
                            puStack_68 = (u32 *)((int)puStack_68 + 1);
                        } while ((int)puStack_68 < (int)(uVar23 - 1));
                    }
                    fVar34 = SUB84(dVar40, 0);
                    puVar24 = puVar12 + 1;
                    pdVar20 = (double *)((u32)*puVar12 * 0x40 + g_8c4aa510);
                    *(u32 *)pdVar20 = 0xf0000000;
                    dVar40 = in_xd14;
                    in_xd2 = in_xd14;
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(fVar26, SUB84(dVar30, 0));
                        in_xd2 = dVar39;
                        fVar34 = fVar26;
                    }
                    *(u32 *)(pdVar20 + 5) = *puVar44;
                    *(u32 *)((int)pdVar20 + 0x2c) = uStack_44;
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(*(u32 *)(pdVar20 + 6), fVar34);
                    } else {
                        dVar30 = pdVar20[6];
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)(u64)(u32)((float)((u64)dVar40 >> 0x20) * (float)((u64)dVar30 >> 0x20) +
                                                    SUB84(dVar30, 0));
                    }
                    if (cVar43 == '\0') {
                        *(int *)(pdVar20 + 4) = SUB84(dVar30, 0);
                        uVar28 = CONCAT44(*(u32 *)((int)pdVar20 + 0x34), fVar26);
                        dVar30 = (double)CONCAT44(fVar26, SUB84(dVar40, 0));
                    } else {
                        pdVar20[4] = in_xd2;
                        uVar28 = *(u64 *)((int)pdVar20 + 0x34);
                        in_xd2 = in_xd14;
                        dVar30 = in_xd14;
                    }
                    if (cVar42 == '\0') {
                        uVar28 = (u64)(u32)((float)((u64)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) + (float)uVar28);
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdVar20 + 0x24) = (int)uVar28;
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar20, SUB84(dVar30, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar20 + 4), (int)uVar28);
                        pdVar20 = pdVar20 + 1;
                    } else {
                        *(double *)((int)pdVar20 + 0x24) = in_xd2;
                        in_dr0 = *pdVar20;
                        in_dr2 = pdVar20[1];
                        pdVar20 = pdVar20 + 2;
                    }
                    if (cVar43 == '\0') {
                        uVar36 = *(u32 *)(pdVar20 + 2);
                        in_dr4 = (double)CONCAT44(uVar36, uVar37);
                        in_dr6 = (double)CONCAT44(*(u32 *)((int)pdVar20 + 0x14), uVar35);
                        *(u32 *)((int)pdVar7 + 0x1c) = *(u32 *)((int)pdVar20 + 0x14);
                        *(u32 *)(pdVar7 + 3) = uVar36;
                        *(int *)((int)pdVar7 + 0x14) = (int)((u64)in_dr2 >> 0x20);
                        pdVar7 = pdVar7 + 2;
                        *(int *)pdVar7 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        in_dr4 = pdVar20[2];
                        in_dr6 = pdVar20[3];
                        pdVar7[3] = in_dr6;
                        pdVar7[2] = in_dr4;
                        pdVar7[1] = in_dr2;
                        *pdVar7 = in_dr0;
                    }
                    unaff_r8 = pdVar7 + 4;
                } else {
                    iVar4 = (u32)*puVar25 * 0x40 + g_8c4aa510;
                    iVar9 = (u32)puVar24[2] * 0x40 + g_8c4aa510;
                    iVar6 = (u32)puVar24[3] * 0x40 + g_8c4aa510;
                    if (cVar43 == '\0') {
                        in_dr6 = (double)CONCAT44(*(u32 *)(iVar4 + 0x14), SUB84(in_dr6, 0));
                        dVar30 = (double)CONCAT44(*(u32 *)(iVar9 + 0x18), SUB84(in_dr0, 0));
                        dVar32 = (double)CONCAT44(*(u32 *)(iVar9 + 0x14), *(u32 *)(iVar9 + 0x18));
                        dVar40 = (double)CONCAT44(*(u32 *)(iVar4 + 0x18), uVar35);
                    } else {
                        dVar30 = *(double *)(iVar9 + 0x18);
                        in_dr6 = *(double *)(iVar4 + 0x14);
                        dVar32 = *(double *)(iVar9 + 0x14);
                        dVar40 = *(double *)(iVar4 + 0x18);
                        in_xd8 = dVar30;
                    }
                    fVar34 = (float)((u64)in_dr6 >> 0x20);
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar34, SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 * in_dr6;
                    }
                    uVar35 = (u32)((u64)dVar32 >> 0x20);
                    dVar29 = dVar32;
                    if (cVar43 == '\0') {
                        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar35);
                        dVar29 = in_xd2;
                    }
                    fVar26 = (float)((u64)dVar40 >> 0x20);
                    if (cVar42 == '\0') {
                        fVar27 = SUB84(in_dr2, 0) * fVar26;
                    } else {
                        fVar27 = SUB84(in_dr2 * dVar40, 0);
                    }
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(fVar26, *(u32 *)(iVar9 + 0x10));
                        in_dr6 = (double)CONCAT44(fVar34, *(u32 *)(iVar4 + 0x10));
                        dVar31 = (double)CONCAT44(SUB84(dVar32, 0), fVar27);
                    } else {
                        in_xd4 = *(double *)(iVar9 + 0x10);
                        dVar31 = in_xd8;
                    }
                    if (cVar42 == '\0') {
                        dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) * SUB84(in_dr6, 0), SUB84(dVar31, 0));
                    } else {
                        dVar31 = dVar31 * in_dr6;
                    }
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), uVar35);
                        dVar32 = in_xd0;
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) - SUB84(dVar31, 0), SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 - dVar31;
                    }
                    uVar35 = SUB84(dVar40, 0);
                    in_xd2 = in_xd4;
                    if (cVar43 == '\0') {
                        dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), uVar35);
                        in_xd2 = dVar29;
                    }
                    if (cVar42 == '\0') {
                        dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20),
                                                  SUB84(dVar31, 0) * (float)((u64)dVar40 >> 0x20));
                    } else {
                        dVar31 = dVar31 * dVar40;
                    }
                    dVar40 = in_xd4;
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(uVar35, SUB84(in_dr12, 0));
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * SUB84(in_dr6, 0));
                        in_dr12 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) * (float)((u64)in_dr6 >> 0x20),
                                                   SUB84(dVar40, 0));
                        fVar34 = SUB84(dVar31, 0) - (float)((u64)dVar31 >> 0x20);
                    } else {
                        dVar30 = dVar30 * in_dr6;
                        in_dr12 = dVar40 * in_dr6;
                        fVar34 = SUB84(dVar31 - dVar31, 0);
                    }
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(*(u32 *)(iVar6 + 0x14), fVar34);
                    } else {
                        dVar40 = *(double *)(iVar6 + 0x14);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20),
                                                  SUB84(dVar30, 0) - (float)((u64)in_dr12 >> 0x20));
                        dVar40 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) * SUB84(dVar40, 0), SUB84(dVar40, 0));
                    } else {
                        dVar30 = dVar30 - in_dr12;
                        dVar40 = dVar40 * dVar40;
                    }
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), *(u32 *)(iVar6 + 0x10));
                    } else {
                        in_xd2 = *(double *)(iVar6 + 0x10);
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * SUB84(dVar40, 0) +
                                                      (float)((u64)dVar40 >> 0x20),
                                                  SUB84(dVar40, 0));
                    }
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), *(u32 *)(iVar6 + 0x18));
                        in_dr0 = (double)CONCAT44(SUB84(dVar30, 0), SUB84(dVar30, 0));
                    } else {
                        in_xd2 = *(double *)(iVar6 + 0x18);
                        in_dr0 = dVar32;
                    }
                    if (cVar42 == '\0') {
                        dVar40 = (double)((u64)(u32)((float)((u64)in_dr0 >> 0x20) * SUB84(dVar40, 0) +
                                                     (float)((u64)dVar40 >> 0x20))
                                          << 0x20);
                    }
                    in_dr2 = (double)((u64)dVar40 & 0xffffffff00000000);
                    in_dr4 = in_dr2;
                    if (cVar43 == '\0') {
                        in_dr4 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), uVar35);
                    }
                    if (cVar42 == '\0') {
                        bVar41 = 0.0 < (float)((u64)in_dr4 >> 0x20);
                    } else {
                        bVar41 = in_dr2 < in_dr4;
                    }
                    uStack_50 = 0;
                    if (bVar41) {
                        if ((g_8c4ab308 & 0x800000) == 0)
                            goto LAB_8c2516e6;
                        uStack_50 = 0x8000;
                    }
                    puVar11 = auStack_40;
                    iVar6 = iVar6 + 0x10;
                    iVar9 = iVar9 + 0x10;
                    triangle_normal(iVar4 + 0x10, iVar9, iVar6, puVar11);
                    njUnitVector(auStack_40, iVar9, iVar6, puVar11, puVar13);
                    iVar4 = (u32)puVar25[iVar18 + -1] * 0x40 + g_8c4aa510;
                    if (cVar43 == '\0') {
                        uStack_34 = *(u32 *)(iVar4 + 0x10);
                        uStack_30 = *(u32 *)(iVar4 + 0x14);
                        fStack_2c = *(float *)(iVar4 + 0x18);
                    } else {
                        uStack_34 = (u32) * (u64 *)(iVar4 + 0x10);
                        uStack_30 = (u32) * (u64 *)(iVar4 + 0x14);
                        in_xd2 = *(double *)(iVar4 + 0x18);
                        fStack_2c = SUB84(in_xd2, 0);
                        fStack_28 = (float)((u64)in_xd2 >> 0x20);
                    }
                    iVar18 = (u32)puVar25[iVar18] * 0x40 + g_8c4aa510;
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(uStack_34, *(u32 *)(iVar18 + 0x10));
                    } else {
                        in_xd2 = *(double *)(iVar18 + 0x10);
                        dVar30 = (double)CONCAT44(uStack_30, uStack_34);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + SUB84(dVar30, 0), SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 + dVar30;
                    }
                    uVar35 = (u32)((u64)dVar30 >> 0x20);
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(uStack_30, *(u32 *)(iVar18 + 0x14));
                        uStack_34 = uVar35;
                    } else {
                        uStack_34 = SUB84(dVar30, 0);
                        in_xd2 = *(double *)(iVar18 + 0x14);
                        dVar30 = (double)CONCAT44(fStack_2c, uVar35);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + SUB84(dVar30, 0), SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 + dVar30;
                    }
                    uVar35 = (u32)((u64)dVar30 >> 0x20);
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(fStack_2c, *(u32 *)(iVar18 + 0x18));
                        uStack_30 = uVar35;
                    } else {
                        uStack_30 = SUB84(dVar30, 0);
                        in_xd2 = *(double *)(iVar18 + 0x18);
                        dVar30 = (double)CONCAT44(fStack_28, uVar35);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + SUB84(dVar30, 0), SUB84(dVar30, 0));
                    } else {
                        dVar30 = dVar30 + dVar30;
                    }
                    fVar34 = (float)((u64)dVar30 >> 0x20);
                    if (cVar43 == '\0') {
                        dVar30 = (double)CONCAT44(fVar34, uStack_34);
                        fStack_2c = fVar34;
                    } else {
                        fStack_2c = SUB84(dVar30, 0);
                        in_xd2 = (double)CONCAT44(uStack_30, uStack_34);
                        fStack_28 = fVar34;
                    }
                    fVar34 = SUB84(dVar38, 0);
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar34);
                    } else {
                        dVar30 = dVar30 * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_34 = SUB84(dVar30, 0);
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), uStack_30);
                    } else {
                        uStack_34 = SUB84(in_xd2, 0);
                        uStack_30 = (u32)((u64)in_xd2 >> 0x20);
                        in_xd2 = (double)CONCAT44(fStack_2c, uStack_30);
                    }
                    if (cVar42 == '\0') {
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar34);
                    } else {
                        dVar30 = dVar30 * dVar38;
                    }
                    if (cVar43 == '\0') {
                        uStack_30 = SUB84(dVar30, 0);
                        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fStack_2c);
                    } else {
                        uStack_30 = SUB84(in_xd2, 0);
                        fStack_2c = (float)((u64)in_xd2 >> 0x20);
                        in_xd2 = (double)CONCAT44(fStack_28, fStack_2c);
                    }
                    if (cVar42 == '\0') {
                        in_dr2 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar34);
                    } else {
                        in_dr2 = dVar30 * dVar38;
                    }
                    puVar11 = &g_8c4c2620;
                    puVar10 = auStack_40;
                    if (cVar43 == '\0') {
                        fStack_2c = SUB84(in_dr2, 0);
                    } else {
                        fStack_2c = SUB84(in_xd2, 0);
                        fStack_28 = (float)((u64)in_xd2 >> 0x20);
                    }
                    puVar15 = &uStack_34;
                    gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar15, puVar10, uStack_50);
                    if (cVar43 != '\0') {
                        in_xd4 = (double)CONCAT44(g_8c4c2628, g_8c4c2624);
                    }
                    puVar44 = puVar13;
                    uVar35 = float_to_color_u8(puVar11, puVar15, puVar10, uStack_50);
                    *puVar13 = uVar35;
                    if (cVar43 == '\0') {
                        in_dr6 = (double)(u64)g_8c4c263c;
                        in_dr4 = (double)(u64)g_8c4c2634;
                    } else {
                        in_dr6 = (double)CONCAT44(g_8c4c263c, g_8c4c2638);
                        in_xd4 = (double)CONCAT44(g_8c4c2638, g_8c4c2634);
                        in_dr4 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                    }
                    uStack_44 = float_to_color_u8(puVar11, puVar15, puVar10, uStack_50);
                    puVar12 = puVar24 + 2;
                    puVar24 = puVar24 + 3;
                    iStack_64 = 0;
                    ar4_00 = (u32 *)((u32)*puVar25 * 0x40 + g_8c4aa510);
                    puStack_68 = (u32 *)((u32)*puVar12 * 0x40 + g_8c4aa510);
                    if (0 < (int)(uVar23 - 2)) {
                        do {
                            uVar1 = *puVar24;
                            puVar24 = puVar24 + 1;
                            ar6_00 = (u32 *)((u32)uVar1 * 0x40 + g_8c4aa510);
                            if ((*ar4_00 & *puStack_68 & *ar6_00 & 1) == 0) {
                                gfxlib_fill_loop_247b20(ar4_00, puStack_68, ar6_00, &uStack_48);
                            }
                            iStack_64 = iStack_64 + 1;
                            ar4_00 = puStack_68;
                            puStack_68 = ar6_00;
                        } while (iStack_64 < (int)(uVar23 - 2));
                    }
                }
            } else {
            LAB_8c2516e6:
                puVar24 = puVar25 + uVar23;
                puVar44 = puVar13;
            }
            iStack_60 = iStack_60 + 1;
            in_xd0 = dVar32;
            puVar13 = puVar44;
        }
    } else if (uVar3 == 0xc000) {
        if ((g_8c4ab318 & 1) == 0) {
            pcVar5 = gfxlib_uses_float_to_color_u8_246254;
        } else {
            pcVar5 = gfxlib_uses_float_to_color_u8_245cc8;
        }
        uVar3 = (*pcVar5)(a0, uVar1 & 0x3fff, a2, a3);
    }
    return uVar3;
}

/*
 * vram_2518b4  0x8c2518b4
 * called by: ninja_uses_ta_fifo_2536a8
 */
u32 vram_2518b4(u16 *a0, double *a1, int a2, u32 a3) {
    u16 uVar1;
    double *pdVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    double *pdVar7;
    double *pdVar8;
    code *UNRECOVERED_JUMPTABLE;
    double *pdVar9;
    double *pdVar10;
    int ar7_00;
    double *unaff_r8;
    double *pdVar11;
    u16 *puVar12;
    u16 *puVar13;
    double in_dr0;
    double dVar14;
    double in_dr2;
    double dVar15;
    double dVar16;
    u32 uVar17;
    u32 uVar18;
    u32 uVar19;
    double in_dr4;
    double dVar20;
    float fVar21;
    double in_xd2;
    double dVar22;
    double in_xd14;
    bool bVar23;
    char cVar24;
    char cVar25;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_24;

    cVar25 = '\0';
    cVar24 = '\0';
    uVar1 = *a0;
    iStack_34._0_2_ = uVar1 & 0x3fff;
    uVar6 = 0x3f000000;
    uVar3 = uVar1 & 0xc000;
    puVar12 = *(u16 **)(a0 + 2);
    if ((uVar1 & 0xc000) == 0) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 3;
        for (iStack_2c = 0; uVar3 = (u32)a0[1], iStack_2c < (int)uVar3; iStack_2c = iStack_2c + 1) {
            pdVar8 = (double *)((u32)*puVar12 * 0x40 + g_8c4aa510);
            puVar13 = puVar12 + 2;
            pdVar7 = (double *)((u32)puVar12[1] * 0x40 + g_8c4aa510);
            puVar12 = puVar12 + 3;
            pdVar9 = (double *)((u32)*puVar13 * 0x40 + g_8c4aa510);
            if ((g_8c4ab308 & 0x800000) == 0) {
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)((int)pdVar7 + 4);
                    dVar20 = (double)CONCAT44(uVar19, *(u32 *)((int)pdVar8 + 4));
                    dVar22 = (double)CONCAT44(uVar19, SUB84(in_dr4, 0));
                } else {
                    dVar20 = *(double *)((int)pdVar7 + 4);
                    in_xd2 = *(double *)((int)pdVar8 + 4);
                    uVar19 = (u32)((u64)dVar20 >> 0x20);
                    dVar22 = dVar20;
                }
                if (cVar24 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar20, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar20;
                }
                if (cVar25 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(pdVar9 + 1));
                    dVar22 = (double)CONCAT44(uVar19, *(u32 *)(pdVar7 + 1));
                } else {
                    in_xd2 = pdVar9[1];
                }
                fVar21 = SUB84(dVar22, 0);
                if (cVar24 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - fVar21);
                } else {
                    dVar20 = dVar20 - dVar22;
                }
                if (cVar25 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar21);
                }
                if (cVar24 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * SUB84(dVar20, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 * dVar20;
                }
                if (cVar25 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(pdVar8 + 1));
                } else {
                    in_xd2 = pdVar8[1];
                }
                if (cVar24 == '\0') {
                    dVar14 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar20, 0));
                } else {
                    dVar14 = in_dr0 - dVar20;
                }
                if (cVar25 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)((int)pdVar9 + 4));
                } else {
                    in_xd2 = *(double *)((int)pdVar9 + 4);
                }
                if (cVar24 == '\0') {
                    dVar20 =
                        (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - (float)((u64)dVar22 >> 0x20));
                } else {
                    dVar20 = dVar20 - dVar22;
                }
                uVar3 = (u32)((u64)dVar20 >> 0x20);
                dVar22 = dVar20;
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(uVar3, fVar21);
                }
                if (cVar24 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) * SUB84(dVar20, 0));
                } else {
                    in_dr0 = dVar14 * dVar20;
                }
                in_dr2 = (double)((u64)uVar3 << 0x20);
                if (cVar24 == '\0') {
                    fVar21 = (float)((u64)dVar22 >> 0x20) - SUB84(in_dr0, 0);
                    in_dr4 = (double)CONCAT44(fVar21, SUB84(dVar22, 0));
                    bVar23 = 0.0 < fVar21;
                } else {
                    in_dr4 = dVar22 - in_dr0;
                    bVar23 = in_dr2 < in_dr4;
                }
                if (!bVar23)
                    goto LAB_8c2519bc;
            } else {
            LAB_8c2519bc:
                uVar19 = SUB84(in_dr2, 0);
                uVar5 = SUB84(in_dr0, 0);
                *(u32 *)pdVar8 = 0xe0000000;
                CacheBlockWriteBack(pdVar8);
                uVar18 = g_8c4c11b0;
                if (cVar25 == '\0') {
                    uVar18 = g_8c4c11b4;
                }
                uVar4 = float_to_color_u8(pdVar8, a1, a2, a3);
                dVar14 = in_xd14;
                dVar22 = in_xd14;
                dVar20 = in_xd14;
                if (cVar25 == '\0') {
                    dVar14 = (double)CONCAT44(uVar6, uVar18);
                    dVar22 = in_xd2;
                    uVar19 = uVar6;
                    dVar20 = (double)CONCAT44(uVar6, uVar5);
                }
                *(u32 *)(pdVar8 + 5) = uVar4;
                if (cVar25 == '\0') {
                    dVar15 = (double)CONCAT44(*(u32 *)(pdVar8 + 6), uVar19);
                    pdVar11 = (double *)((int)pdVar8 + 0x34);
                } else {
                    dVar15 = pdVar8[6];
                    pdVar11 = pdVar8 + 7;
                }
                if (cVar24 == '\0') {
                    dVar15 = (double)(u64)(u32)((float)((u64)dVar20 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                SUB84(dVar15, 0));
                }
                uVar19 = (u32)((u64)dVar14 >> 0x20);
                if (cVar25 == '\0') {
                    *(int *)(pdVar8 + 4) = SUB84(dVar15, 0);
                    dVar15 = (double)CONCAT44(*(u32 *)pdVar11, uVar19);
                    dVar14 = dVar22;
                    dVar22 = (double)CONCAT44(uVar19, SUB84(dVar20, 0));
                } else {
                    pdVar8[4] = dVar22;
                    dVar15 = *pdVar11;
                    dVar22 = dVar14;
                }
                pdVar10 = (double *)((int)pdVar8 + 0x24);
                if (cVar24 == '\0') {
                    dVar15 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                SUB84(dVar15, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)pdVar10 = SUB84(dVar15, 0);
                } else {
                    *pdVar10 = dVar14;
                }
                CacheBlockWriteBack(pdVar10);
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar22, 0));
                    dVar20 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 4), SUB84(dVar15, 0));
                    pdVar8 = pdVar8 + 1;
                } else {
                    dVar22 = *pdVar8;
                    dVar20 = pdVar8[1];
                    pdVar8 = pdVar8 + 2;
                }
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)(pdVar8 + 2);
                    *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar8 + 0x14);
                    *(u32 *)(unaff_r8 + 3) = uVar19;
                    *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar20 >> 0x20);
                    unaff_r8 = unaff_r8 + 2;
                    *(int *)unaff_r8 = (int)((u64)dVar22 >> 0x20);
                } else {
                    dVar15 = pdVar8[2];
                    unaff_r8[3] = pdVar8[3];
                    unaff_r8[2] = dVar15;
                    unaff_r8[1] = dVar20;
                    *unaff_r8 = dVar22;
                }
                *(u32 *)pdVar7 = 0xe0000000;
                CacheBlockWriteBack(pdVar7);
                uVar19 = g_8c4c11b0;
                if (cVar25 == '\0') {
                    uVar19 = g_8c4c11b4;
                }
                uVar5 = float_to_color_u8(pdVar7, pdVar11, a2, a3);
                uVar18 = SUB84(dVar20, 0);
                dVar16 = in_xd14;
                dVar20 = in_xd14;
                dVar15 = in_xd14;
                if (cVar25 == '\0') {
                    dVar16 = (double)CONCAT44(uVar6, uVar19);
                    dVar20 = dVar14;
                    uVar18 = uVar6;
                    dVar15 = (double)CONCAT44(uVar6, SUB84(dVar22, 0));
                }
                *(u32 *)(pdVar7 + 5) = uVar5;
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)(pdVar7 + 6), uVar18);
                    pdVar8 = (double *)((int)pdVar7 + 0x34);
                } else {
                    dVar22 = pdVar7[6];
                    pdVar8 = pdVar7 + 7;
                }
                if (cVar24 == '\0') {
                    dVar22 = (double)(u64)(u32)((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar22 >> 0x20) +
                                                SUB84(dVar22, 0));
                }
                uVar19 = (u32)((u64)dVar16 >> 0x20);
                if (cVar25 == '\0') {
                    *(int *)(pdVar7 + 4) = SUB84(dVar22, 0);
                    dVar14 = (double)CONCAT44(*(u32 *)pdVar8, uVar19);
                    dVar16 = dVar20;
                    dVar22 = (double)CONCAT44(uVar19, SUB84(dVar15, 0));
                } else {
                    pdVar7[4] = dVar20;
                    dVar14 = *pdVar8;
                    dVar22 = dVar16;
                }
                pdVar11 = (double *)((int)pdVar7 + 0x24);
                if (cVar24 == '\0') {
                    dVar14 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar14 >> 0x20) +
                                                SUB84(dVar14, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)pdVar11 = SUB84(dVar14, 0);
                } else {
                    *pdVar11 = dVar16;
                }
                CacheBlockWriteBack(pdVar11);
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar22, 0));
                    dVar20 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(dVar14, 0));
                    pdVar7 = pdVar7 + 1;
                } else {
                    dVar22 = *pdVar7;
                    dVar20 = pdVar7[1];
                    pdVar7 = pdVar7 + 2;
                }
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)(pdVar7 + 2);
                    *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar7 + 0x14);
                    *(u32 *)(unaff_r8 + 7) = uVar19;
                    *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar20 >> 0x20);
                    pdVar7 = unaff_r8 + 6;
                    *(int *)pdVar7 = (int)((u64)dVar22 >> 0x20);
                } else {
                    dVar14 = pdVar7[2];
                    unaff_r8[7] = pdVar7[3];
                    unaff_r8[6] = dVar14;
                    unaff_r8[5] = dVar20;
                    pdVar7 = unaff_r8 + 4;
                    *pdVar7 = dVar22;
                }
                *(u32 *)pdVar9 = 0xf0000000;
                CacheBlockWriteBack(pdVar9);
                uVar19 = g_8c4c11b0;
                if (cVar25 == '\0') {
                    uVar19 = g_8c4c11b4;
                }
                uVar5 = float_to_color_u8(pdVar9, pdVar8, a2, a3);
                uVar18 = SUB84(dVar20, 0);
                dVar14 = in_xd14;
                in_xd2 = in_xd14;
                dVar20 = in_xd14;
                if (cVar25 == '\0') {
                    dVar14 = (double)CONCAT44(uVar6, uVar19);
                    in_xd2 = dVar16;
                    uVar18 = uVar6;
                    dVar20 = (double)CONCAT44(uVar6, SUB84(dVar22, 0));
                }
                *(u32 *)(pdVar9 + 5) = uVar5;
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)(pdVar9 + 6), uVar18);
                    a1 = (double *)((int)pdVar9 + 0x34);
                } else {
                    dVar22 = pdVar9[6];
                    a1 = pdVar9 + 7;
                }
                if (cVar24 == '\0') {
                    dVar22 = (double)(u64)(u32)((float)((u64)dVar20 >> 0x20) * (float)((u64)dVar22 >> 0x20) +
                                                SUB84(dVar22, 0));
                }
                uVar19 = (u32)((u64)dVar14 >> 0x20);
                if (cVar25 == '\0') {
                    *(int *)(pdVar9 + 4) = SUB84(dVar22, 0);
                    dVar15 = (double)CONCAT44(*(u32 *)a1, uVar19);
                    dVar22 = (double)CONCAT44(uVar19, SUB84(dVar20, 0));
                } else {
                    pdVar9[4] = in_xd2;
                    dVar15 = *a1;
                    in_xd2 = dVar14;
                    dVar22 = dVar14;
                }
                pdVar8 = (double *)((int)pdVar9 + 0x24);
                if (cVar24 == '\0') {
                    dVar15 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                SUB84(dVar15, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)pdVar8 = SUB84(dVar15, 0);
                } else {
                    *pdVar8 = in_xd2;
                }
                CacheBlockWriteBack(pdVar8);
                if (cVar25 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar22, 0));
                    in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), SUB84(dVar15, 0));
                    pdVar9 = pdVar9 + 1;
                } else {
                    in_dr0 = *pdVar9;
                    in_dr2 = pdVar9[1];
                    pdVar9 = pdVar9 + 2;
                }
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)(pdVar9 + 2);
                    in_dr4 = (double)CONCAT44(uVar19, SUB84(dVar14, 0));
                    *(u32 *)((int)pdVar7 + 0x3c) = *(u32 *)((int)pdVar9 + 0x14);
                    *(u32 *)(pdVar7 + 7) = uVar19;
                    *(int *)((int)pdVar7 + 0x34) = (int)((u64)in_dr2 >> 0x20);
                    pdVar7 = pdVar7 + 6;
                    *(int *)pdVar7 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    in_dr4 = pdVar9[2];
                    pdVar7[7] = pdVar9[3];
                    pdVar7[6] = in_dr4;
                    pdVar7[5] = in_dr2;
                    pdVar7 = pdVar7 + 4;
                    *pdVar7 = in_dr0;
                }
                unaff_r8 = pdVar7 + 4;
                g_8c4aa520 = g_8c4aa520 + 3;
            }
        }
    } else if (uVar3 == 0x4000) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 4;
        iStack_24 = 0;
        while (true) {
            uVar19 = SUB84(in_dr4, 0);
            uVar3 = (u32)a0[1];
            if ((int)uVar3 <= iStack_24)
                break;
            pdVar9 = (double *)((u32)*puVar12 * 0x40 + g_8c4aa510);
            pdVar8 = (double *)((u32)puVar12[1] * 0x40 + g_8c4aa510);
            puVar13 = puVar12 + 3;
            pdVar11 = (double *)((u32)puVar12[2] * 0x40 + g_8c4aa510);
            puVar12 = puVar12 + 4;
            pdVar7 = (double *)((u32)*puVar13 * 0x40 + g_8c4aa510);
            if ((g_8c4ab308 & 0x800000) == 0) {
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)((int)pdVar8 + 4);
                    dVar22 = (double)CONCAT44(uVar19, *(u32 *)((int)pdVar9 + 4));
                } else {
                    dVar22 = *(double *)((int)pdVar8 + 4);
                    in_xd2 = *(double *)((int)pdVar9 + 4);
                }
                if (cVar24 == '\0') {
                    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar22, 0));
                } else {
                    dVar22 = dVar22 - dVar22;
                }
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar11 + 1));
                    dVar20 = (double)CONCAT44(*(u32 *)(pdVar8 + 1), uVar19);
                } else {
                    in_xd2 = pdVar11[1];
                    dVar20 = pdVar8[1];
                }
                fVar21 = (float)((u64)dVar20 >> 0x20);
                if (cVar24 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - fVar21);
                } else {
                    dVar22 = dVar22 - dVar20;
                }
                if (cVar25 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar21);
                }
                if (cVar24 == '\0') {
                    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar22, 0), SUB84(dVar22, 0));
                } else {
                    dVar22 = dVar22 * dVar22;
                }
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar9 + 1));
                } else {
                    in_xd2 = pdVar9[1];
                }
                if (cVar24 == '\0') {
                    dVar14 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar22, 0));
                } else {
                    dVar14 = in_dr0 - dVar22;
                }
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)((int)pdVar11 + 4));
                } else {
                    in_xd2 = *(double *)((int)pdVar11 + 4);
                }
                if (cVar24 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - SUB84(dVar20, 0));
                } else {
                    dVar22 = dVar22 - dVar20;
                }
                uVar3 = (u32)((u64)dVar22 >> 0x20);
                dVar15 = dVar22;
                if (cVar25 == '\0') {
                    dVar15 = (double)CONCAT44(uVar3, SUB84(dVar20, 0));
                }
                if (cVar24 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) * SUB84(dVar22, 0));
                } else {
                    in_dr0 = dVar14 * dVar22;
                }
                in_dr2 = (double)((u64)uVar3 << 0x20);
                if (cVar24 == '\0') {
                    fVar21 = (float)((u64)dVar15 >> 0x20) - SUB84(in_dr0, 0);
                    in_dr4 = (double)CONCAT44(fVar21, SUB84(dVar15, 0));
                    bVar23 = 0.0 < fVar21;
                } else {
                    in_dr4 = dVar15 - in_dr0;
                    bVar23 = in_dr2 < in_dr4;
                }
                if (!bVar23)
                    goto LAB_8c251bbc;
            } else {
            LAB_8c251bbc:
                uVar19 = SUB84(in_dr2, 0);
                uVar5 = SUB84(in_dr0, 0);
                *(u32 *)pdVar9 = 0xe0000000;
                CacheBlockWriteBack(pdVar9);
                uVar18 = g_8c4c11b0;
                if (cVar25 == '\0') {
                    uVar18 = g_8c4c11b4;
                }
                uVar4 = float_to_color_u8(pdVar9, a1, a2, a3);
                dVar14 = in_xd14;
                dVar22 = in_xd14;
                dVar20 = in_xd14;
                if (cVar25 == '\0') {
                    dVar14 = (double)CONCAT44(uVar6, uVar18);
                    dVar22 = in_xd2;
                    uVar19 = uVar6;
                    dVar20 = (double)CONCAT44(uVar6, uVar5);
                }
                *(u32 *)(pdVar9 + 5) = uVar4;
                if (cVar25 == '\0') {
                    dVar15 = (double)CONCAT44(*(u32 *)(pdVar9 + 6), uVar19);
                    pdVar10 = (double *)((int)pdVar9 + 0x34);
                } else {
                    dVar15 = pdVar9[6];
                    pdVar10 = pdVar9 + 7;
                }
                if (cVar24 == '\0') {
                    dVar15 = (double)(u64)(u32)((float)((u64)dVar20 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                SUB84(dVar15, 0));
                }
                uVar19 = (u32)((u64)dVar14 >> 0x20);
                if (cVar25 == '\0') {
                    *(int *)(pdVar9 + 4) = SUB84(dVar15, 0);
                    dVar15 = (double)CONCAT44(*(u32 *)pdVar10, uVar19);
                    dVar14 = dVar22;
                    dVar22 = (double)CONCAT44(uVar19, SUB84(dVar20, 0));
                } else {
                    pdVar9[4] = dVar22;
                    dVar15 = *pdVar10;
                    dVar22 = dVar14;
                }
                pdVar2 = (double *)((int)pdVar9 + 0x24);
                if (cVar24 == '\0') {
                    dVar15 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                SUB84(dVar15, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)pdVar2 = SUB84(dVar15, 0);
                } else {
                    *pdVar2 = dVar14;
                }
                CacheBlockWriteBack(pdVar2);
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar22, 0));
                    dVar20 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), SUB84(dVar15, 0));
                    pdVar9 = pdVar9 + 1;
                } else {
                    dVar22 = *pdVar9;
                    dVar20 = pdVar9[1];
                    pdVar9 = pdVar9 + 2;
                }
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)(pdVar9 + 2);
                    *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar9 + 0x14);
                    *(u32 *)(unaff_r8 + 3) = uVar19;
                    *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar20 >> 0x20);
                    unaff_r8 = unaff_r8 + 2;
                    *(int *)unaff_r8 = (int)((u64)dVar22 >> 0x20);
                } else {
                    dVar15 = pdVar9[2];
                    unaff_r8[3] = pdVar9[3];
                    unaff_r8[2] = dVar15;
                    unaff_r8[1] = dVar20;
                    *unaff_r8 = dVar22;
                }
                *(u32 *)pdVar8 = 0xe0000000;
                CacheBlockWriteBack(pdVar8);
                uVar19 = g_8c4c11b0;
                if (cVar25 == '\0') {
                    uVar19 = g_8c4c11b4;
                }
                uVar5 = float_to_color_u8(pdVar8, pdVar10, a2, a3);
                uVar18 = SUB84(dVar20, 0);
                dVar16 = in_xd14;
                dVar20 = in_xd14;
                dVar15 = in_xd14;
                if (cVar25 == '\0') {
                    dVar16 = (double)CONCAT44(uVar6, uVar19);
                    dVar20 = dVar14;
                    uVar18 = uVar6;
                    dVar15 = (double)CONCAT44(uVar6, SUB84(dVar22, 0));
                }
                *(u32 *)(pdVar8 + 5) = uVar5;
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)(pdVar8 + 6), uVar18);
                    pdVar9 = (double *)((int)pdVar8 + 0x34);
                } else {
                    dVar22 = pdVar8[6];
                    pdVar9 = pdVar8 + 7;
                }
                if (cVar24 == '\0') {
                    dVar22 = (double)(u64)(u32)((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar22 >> 0x20) +
                                                SUB84(dVar22, 0));
                }
                uVar19 = (u32)((u64)dVar16 >> 0x20);
                if (cVar25 == '\0') {
                    *(int *)(pdVar8 + 4) = SUB84(dVar22, 0);
                    dVar14 = (double)CONCAT44(*(u32 *)pdVar9, uVar19);
                    dVar16 = dVar20;
                    dVar22 = (double)CONCAT44(uVar19, SUB84(dVar15, 0));
                } else {
                    pdVar8[4] = dVar20;
                    dVar14 = *pdVar9;
                    dVar22 = dVar16;
                }
                pdVar10 = (double *)((int)pdVar8 + 0x24);
                if (cVar24 == '\0') {
                    dVar14 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar14 >> 0x20) +
                                                SUB84(dVar14, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)pdVar10 = SUB84(dVar14, 0);
                } else {
                    *pdVar10 = dVar16;
                }
                CacheBlockWriteBack(pdVar10);
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar22, 0));
                    dVar20 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 4), SUB84(dVar14, 0));
                    pdVar8 = pdVar8 + 1;
                } else {
                    dVar22 = *pdVar8;
                    dVar20 = pdVar8[1];
                    pdVar8 = pdVar8 + 2;
                }
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)(pdVar8 + 2);
                    *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar8 + 0x14);
                    *(u32 *)(unaff_r8 + 7) = uVar19;
                    *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar20 >> 0x20);
                    pdVar8 = unaff_r8 + 6;
                    *(int *)pdVar8 = (int)((u64)dVar22 >> 0x20);
                } else {
                    dVar14 = pdVar8[2];
                    unaff_r8[7] = pdVar8[3];
                    unaff_r8[6] = dVar14;
                    unaff_r8[5] = dVar20;
                    pdVar8 = unaff_r8 + 4;
                    *pdVar8 = dVar22;
                }
                *(u32 *)pdVar11 = 0xe0000000;
                CacheBlockWriteBack(pdVar11);
                uVar19 = g_8c4c11b0;
                if (cVar25 == '\0') {
                    uVar19 = g_8c4c11b4;
                }
                uVar5 = float_to_color_u8(pdVar11, pdVar9, a2, a3);
                uVar18 = SUB84(dVar20, 0);
                dVar15 = in_xd14;
                dVar20 = in_xd14;
                dVar14 = in_xd14;
                if (cVar25 == '\0') {
                    dVar15 = (double)CONCAT44(uVar6, uVar19);
                    dVar20 = dVar16;
                    uVar18 = uVar6;
                    dVar14 = (double)CONCAT44(uVar6, SUB84(dVar22, 0));
                }
                *(u32 *)(pdVar11 + 5) = uVar5;
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)(pdVar11 + 6), uVar18);
                    pdVar9 = (double *)((int)pdVar11 + 0x34);
                } else {
                    dVar22 = pdVar11[6];
                    pdVar9 = pdVar11 + 7;
                }
                if (cVar24 == '\0') {
                    dVar22 = (double)(u64)(u32)((float)((u64)dVar14 >> 0x20) * (float)((u64)dVar22 >> 0x20) +
                                                SUB84(dVar22, 0));
                }
                uVar19 = (u32)((u64)dVar15 >> 0x20);
                if (cVar25 == '\0') {
                    *(int *)(pdVar11 + 4) = SUB84(dVar22, 0);
                    dVar16 = (double)CONCAT44(*(u32 *)pdVar9, uVar19);
                    dVar15 = dVar20;
                    dVar22 = (double)CONCAT44(uVar19, SUB84(dVar14, 0));
                } else {
                    pdVar11[4] = dVar20;
                    dVar16 = *pdVar9;
                    dVar22 = dVar15;
                }
                pdVar10 = (double *)((int)pdVar11 + 0x24);
                if (cVar24 == '\0') {
                    dVar16 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar16 >> 0x20) +
                                                SUB84(dVar16, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)pdVar10 = SUB84(dVar16, 0);
                } else {
                    *pdVar10 = dVar15;
                }
                CacheBlockWriteBack(pdVar10);
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)pdVar11, SUB84(dVar22, 0));
                    dVar20 = (double)CONCAT44(*(u32 *)((int)pdVar11 + 4), SUB84(dVar16, 0));
                    pdVar11 = pdVar11 + 1;
                } else {
                    dVar22 = *pdVar11;
                    dVar20 = pdVar11[1];
                    pdVar11 = pdVar11 + 2;
                }
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)(pdVar11 + 2);
                    *(u32 *)((int)pdVar8 + 0x3c) = *(u32 *)((int)pdVar11 + 0x14);
                    *(u32 *)(pdVar8 + 7) = uVar19;
                    *(int *)((int)pdVar8 + 0x34) = (int)((u64)dVar20 >> 0x20);
                    pdVar8 = pdVar8 + 6;
                    *(int *)pdVar8 = (int)((u64)dVar22 >> 0x20);
                } else {
                    dVar14 = pdVar11[2];
                    pdVar8[7] = pdVar11[3];
                    pdVar8[6] = dVar14;
                    pdVar8[5] = dVar20;
                    pdVar8 = pdVar8 + 4;
                    *pdVar8 = dVar22;
                }
                *(u32 *)pdVar7 = 0xf0000000;
                CacheBlockWriteBack(pdVar7);
                uVar19 = g_8c4c11b0;
                if (cVar25 == '\0') {
                    uVar19 = g_8c4c11b4;
                }
                uVar5 = float_to_color_u8(pdVar7, pdVar9, a2, a3);
                uVar18 = SUB84(dVar20, 0);
                dVar14 = in_xd14;
                in_xd2 = in_xd14;
                dVar20 = in_xd14;
                if (cVar25 == '\0') {
                    dVar14 = (double)CONCAT44(uVar6, uVar19);
                    in_xd2 = dVar15;
                    uVar18 = uVar6;
                    dVar20 = (double)CONCAT44(uVar6, SUB84(dVar22, 0));
                }
                *(u32 *)(pdVar7 + 5) = uVar5;
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)(pdVar7 + 6), uVar18);
                    a1 = (double *)((int)pdVar7 + 0x34);
                } else {
                    dVar22 = pdVar7[6];
                    a1 = pdVar7 + 7;
                }
                if (cVar24 == '\0') {
                    dVar22 = (double)(u64)(u32)((float)((u64)dVar20 >> 0x20) * (float)((u64)dVar22 >> 0x20) +
                                                SUB84(dVar22, 0));
                }
                uVar19 = (u32)((u64)dVar14 >> 0x20);
                if (cVar25 == '\0') {
                    *(int *)(pdVar7 + 4) = SUB84(dVar22, 0);
                    dVar15 = (double)CONCAT44(*(u32 *)a1, uVar19);
                    dVar22 = (double)CONCAT44(uVar19, SUB84(dVar20, 0));
                } else {
                    pdVar7[4] = in_xd2;
                    dVar15 = *a1;
                    in_xd2 = dVar14;
                    dVar22 = dVar14;
                }
                pdVar9 = (double *)((int)pdVar7 + 0x24);
                if (cVar24 == '\0') {
                    dVar15 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                SUB84(dVar15, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)pdVar9 = SUB84(dVar15, 0);
                } else {
                    *pdVar9 = in_xd2;
                }
                CacheBlockWriteBack(pdVar9);
                if (cVar25 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar22, 0));
                    in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(dVar15, 0));
                    pdVar7 = pdVar7 + 1;
                } else {
                    in_dr0 = *pdVar7;
                    in_dr2 = pdVar7[1];
                    pdVar7 = pdVar7 + 2;
                }
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)(pdVar7 + 2);
                    in_dr4 = (double)CONCAT44(uVar19, SUB84(dVar14, 0));
                    *(u32 *)((int)pdVar8 + 0x3c) = *(u32 *)((int)pdVar7 + 0x14);
                    *(u32 *)(pdVar8 + 7) = uVar19;
                    *(int *)((int)pdVar8 + 0x34) = (int)((u64)in_dr2 >> 0x20);
                    pdVar8 = pdVar8 + 6;
                    *(int *)pdVar8 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    in_dr4 = pdVar7[2];
                    pdVar8[7] = pdVar7[3];
                    pdVar8[6] = in_dr4;
                    pdVar8[5] = in_dr2;
                    pdVar8 = pdVar8 + 4;
                    *pdVar8 = in_dr0;
                }
                unaff_r8 = pdVar8 + 4;
                g_8c4aa520 = g_8c4aa520 + 4;
            }
            iStack_24 = iStack_24 + 1;
        }
    } else if (uVar3 == 0x8000) {
        for (iStack_30 = 0; uVar3 = (u32)a0[1], iStack_30 < (int)uVar3; iStack_30 = iStack_30 + 1) {
            puVar13 = puVar12 + 1;
            uVar3 = (u32)*puVar12;
            g_8c4aa51c = g_8c4aa51c + uVar3;
            ar7_00 = g_8c4aa510;
            if ((g_8c4ab308 & 0x800000) == 0) {
                a2 = (u32)puVar12[2] * 0x40 + g_8c4aa510;
                a1 = (double *)((u32)*puVar13 * 0x40 + g_8c4aa510);
                ar7_00 = g_8c4aa510 + (u32)puVar12[3] * 0x40;
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)(a2 + 4);
                    dVar20 = (double)CONCAT44(uVar19, *(u32 *)((int)a1 + 4));
                    dVar22 = (double)CONCAT44(uVar19, SUB84(in_dr4, 0));
                } else {
                    dVar20 = *(double *)(a2 + 4);
                    in_xd2 = *(double *)((int)a1 + 4);
                    uVar19 = (u32)((u64)dVar20 >> 0x20);
                    dVar22 = dVar20;
                }
                if (cVar24 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar20, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 - dVar20;
                }
                if (cVar25 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(ar7_00 + 8));
                    dVar22 = (double)CONCAT44(uVar19, *(u32 *)(a2 + 8));
                } else {
                    in_xd2 = *(double *)(ar7_00 + 8);
                }
                fVar21 = SUB84(dVar22, 0);
                if (cVar24 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - fVar21);
                } else {
                    dVar20 = dVar20 - dVar22;
                }
                if (cVar25 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar21);
                }
                if (cVar24 == '\0') {
                    dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * SUB84(dVar20, 0), SUB84(dVar20, 0));
                } else {
                    dVar20 = dVar20 * dVar20;
                }
                if (cVar25 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(a1 + 1));
                } else {
                    in_xd2 = a1[1];
                }
                if (cVar24 == '\0') {
                    dVar14 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar20, 0));
                } else {
                    dVar14 = in_dr0 - dVar20;
                }
                if (cVar25 == '\0') {
                    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(ar7_00 + 4));
                } else {
                    in_xd2 = *(double *)(ar7_00 + 4);
                }
                if (cVar24 == '\0') {
                    dVar20 =
                        (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - (float)((u64)dVar22 >> 0x20));
                } else {
                    dVar20 = dVar20 - dVar22;
                }
                uVar17 = (u32)((u64)dVar20 >> 0x20);
                dVar22 = dVar20;
                if (cVar25 == '\0') {
                    dVar22 = (double)CONCAT44(uVar17, fVar21);
                }
                if (cVar24 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) * SUB84(dVar20, 0));
                } else {
                    in_dr0 = dVar14 * dVar20;
                }
                in_dr2 = (double)((u64)uVar17 << 0x20);
                if (cVar24 == '\0') {
                    fVar21 = (float)((u64)dVar22 >> 0x20) - SUB84(in_dr0, 0);
                    in_dr4 = (double)CONCAT44(fVar21, SUB84(dVar22, 0));
                    bVar23 = 0.0 < fVar21;
                } else {
                    in_dr4 = dVar22 - in_dr0;
                    bVar23 = in_dr2 < in_dr4;
                }
                if (!bVar23)
                    goto LAB_8c251dfc;
                puVar12 = puVar13 + uVar3;
            } else {
            LAB_8c251dfc:
                g_8c4aa520 = g_8c4aa520 + uVar3;
                iStack_34 = 0;
                dVar22 = in_xd2;
                if (0 < (int)(uVar3 - 1)) {
                    do {
                        uVar19 = SUB84(in_dr2, 0);
                        uVar5 = SUB84(in_dr0, 0);
                        uVar1 = *puVar13;
                        puVar13 = puVar13 + 1;
                        pdVar7 = (double *)((u32)uVar1 * 0x40 + g_8c4aa510);
                        *(u32 *)pdVar7 = 0xe0000000;
                        CacheBlockWriteBack(pdVar7);
                        uVar18 = g_8c4c11b0;
                        if (cVar25 == '\0') {
                            uVar18 = g_8c4c11b4;
                        }
                        uVar4 = float_to_color_u8(pdVar7, a1, a2, ar7_00);
                        in_xd2 = in_xd14;
                        dVar20 = in_xd14;
                        dVar14 = in_xd14;
                        if (cVar25 == '\0') {
                            in_xd2 = (double)CONCAT44(uVar6, uVar18);
                            dVar20 = dVar22;
                            uVar19 = uVar6;
                            dVar14 = (double)CONCAT44(uVar6, uVar5);
                        }
                        *(u32 *)(pdVar7 + 5) = uVar4;
                        if (cVar25 == '\0') {
                            dVar22 = (double)CONCAT44(*(u32 *)(pdVar7 + 6), uVar19);
                            a1 = (double *)((int)pdVar7 + 0x34);
                        } else {
                            dVar22 = pdVar7[6];
                            a1 = pdVar7 + 7;
                        }
                        if (cVar24 == '\0') {
                            dVar22 = (double)(u64)(u32)((float)((u64)dVar14 >> 0x20) * (float)((u64)dVar22 >> 0x20) +
                                                        SUB84(dVar22, 0));
                        }
                        uVar19 = (u32)((u64)in_xd2 >> 0x20);
                        if (cVar25 == '\0') {
                            *(int *)(pdVar7 + 4) = SUB84(dVar22, 0);
                            dVar15 = (double)CONCAT44(*(u32 *)a1, uVar19);
                            in_xd2 = dVar20;
                            dVar22 = (double)CONCAT44(uVar19, SUB84(dVar14, 0));
                        } else {
                            pdVar7[4] = dVar20;
                            dVar15 = *a1;
                            dVar22 = in_xd2;
                        }
                        pdVar8 = (double *)((int)pdVar7 + 0x24);
                        if (cVar24 == '\0') {
                            dVar15 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                        SUB84(dVar15, 0));
                        }
                        if (cVar25 == '\0') {
                            *(int *)pdVar8 = SUB84(dVar15, 0);
                        } else {
                            *pdVar8 = in_xd2;
                        }
                        CacheBlockWriteBack(pdVar8);
                        if (cVar25 == '\0') {
                            in_dr0 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar22, 0));
                            in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(dVar15, 0));
                            pdVar7 = pdVar7 + 1;
                        } else {
                            in_dr0 = *pdVar7;
                            in_dr2 = pdVar7[1];
                            pdVar7 = pdVar7 + 2;
                        }
                        if (cVar25 == '\0') {
                            uVar19 = *(u32 *)(pdVar7 + 2);
                            *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                            *(u32 *)(unaff_r8 + 3) = uVar19;
                            *(int *)((int)unaff_r8 + 0x14) = (int)((u64)in_dr2 >> 0x20);
                            unaff_r8 = unaff_r8 + 2;
                            *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                        } else {
                            dVar22 = pdVar7[2];
                            unaff_r8[3] = pdVar7[3];
                            unaff_r8[2] = dVar22;
                            unaff_r8[1] = in_dr2;
                            *unaff_r8 = in_dr0;
                        }
                        unaff_r8 = unaff_r8 + 4;
                        iStack_34 = iStack_34 + 1;
                        dVar22 = in_xd2;
                    } while (iStack_34 < (int)(uVar3 - 1));
                }
                uVar19 = SUB84(in_dr2, 0);
                uVar5 = SUB84(in_dr0, 0);
                puVar12 = puVar13 + 1;
                pdVar7 = (double *)((u32)*puVar13 * 0x40 + g_8c4aa510);
                *(u32 *)pdVar7 = 0xf0000000;
                CacheBlockWriteBack(pdVar7);
                uVar18 = g_8c4c11b0;
                if (cVar25 == '\0') {
                    uVar18 = g_8c4c11b4;
                }
                uVar4 = float_to_color_u8(pdVar7, a1, a2, ar7_00);
                dVar14 = in_xd14;
                dVar22 = in_xd14;
                dVar20 = in_xd14;
                if (cVar25 == '\0') {
                    dVar14 = (double)CONCAT44(uVar6, uVar18);
                    dVar22 = in_xd2;
                    uVar19 = uVar6;
                    dVar20 = (double)CONCAT44(uVar6, uVar5);
                }
                *(u32 *)(pdVar7 + 5) = uVar4;
                if (cVar25 == '\0') {
                    dVar15 = (double)CONCAT44(*(u32 *)(pdVar7 + 6), uVar19);
                    a1 = (double *)((int)pdVar7 + 0x34);
                } else {
                    dVar15 = pdVar7[6];
                    a1 = pdVar7 + 7;
                }
                if (cVar24 == '\0') {
                    dVar15 = (double)(u64)(u32)((float)((u64)dVar20 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                SUB84(dVar15, 0));
                }
                uVar19 = (u32)((u64)dVar14 >> 0x20);
                if (cVar25 == '\0') {
                    *(int *)(pdVar7 + 4) = SUB84(dVar15, 0);
                    dVar15 = (double)CONCAT44(*(u32 *)a1, uVar19);
                    in_xd2 = dVar22;
                    dVar22 = (double)CONCAT44(uVar19, SUB84(dVar20, 0));
                } else {
                    pdVar7[4] = dVar22;
                    dVar15 = *a1;
                    in_xd2 = dVar14;
                    dVar22 = dVar14;
                }
                pdVar8 = (double *)((int)pdVar7 + 0x24);
                if (cVar24 == '\0') {
                    dVar15 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                SUB84(dVar15, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)pdVar8 = SUB84(dVar15, 0);
                } else {
                    *pdVar8 = in_xd2;
                }
                CacheBlockWriteBack(pdVar8);
                if (cVar25 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar22, 0));
                    in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(dVar15, 0));
                    pdVar7 = pdVar7 + 1;
                } else {
                    in_dr0 = *pdVar7;
                    in_dr2 = pdVar7[1];
                    pdVar7 = pdVar7 + 2;
                }
                if (cVar25 == '\0') {
                    uVar19 = *(u32 *)(pdVar7 + 2);
                    in_dr4 = (double)CONCAT44(uVar19, SUB84(dVar14, 0));
                    *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                    *(u32 *)(unaff_r8 + 3) = uVar19;
                    *(int *)((int)unaff_r8 + 0x14) = (int)((u64)in_dr2 >> 0x20);
                    unaff_r8 = unaff_r8 + 2;
                    *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    in_dr4 = pdVar7[2];
                    unaff_r8[3] = pdVar7[3];
                    unaff_r8[2] = in_dr4;
                    unaff_r8[1] = in_dr2;
                    *unaff_r8 = in_dr0;
                }
                unaff_r8 = unaff_r8 + 4;
            }
        }
    } else if (uVar3 == 0xc000) {
        if ((g_8c4ab308 & 0x800000) == 0) {
            UNRECOVERED_JUMPTABLE = gfxlib_uses_float_to_color_u8_241d90;
        } else {
            UNRECOVERED_JUMPTABLE = gfxlib_uses_float_to_color_u8_241be8;
        }
        /* WARNING: Could not recover jumptable at 0x8c251f46. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar6 = (*UNRECOVERED_JUMPTABLE)(a0, (u16)iStack_34);
        return uVar6;
    }
    return uVar3;
}

/*
 * gfxlib_uses_float_to_color_u8_251f78  0x8c251f78
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 * called by: ninja_uses_ta_fifo_2536a8
 */
u32 gfxlib_uses_float_to_color_u8_251f78(u16 *a0, double *a1, double *a2, u32 a3) {
    u16 uVar1;
    double *pdVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    code *UNRECOVERED_JUMPTABLE;
    double *pdVar8;
    double *pdVar9;
    u32 uVar10;
    u32 *ar6_00;
    u32 *ar4_00;
    double *pdVar11;
    u32 ar6_01;
    int iVar12;
    int iVar13;
    u16 *puVar14;
    double *unaff_r8;
    double *pdVar15;
    int iVar16;
    double *pdVar17;
    u32 uVar18;
    u32 *ar5_00;
    u16 *puVar19;
    u16 *puVar20;
    u16 *puVar21;
    double in_dr0;
    float fVar22;
    float fVar23;
    float fVar24;
    double in_dr2;
    double dVar25;
    double dVar26;
    u32 uVar27;
    double in_dr4;
    double dVar28;
    double dVar29;
    double in_dr6;
    double in_dr8;
    double dVar31;
    double in_dr12;
    double dVar32;
    double in_xd0;
    double in_xd2;
    double in_xd4;
    double dVar33;
    double in_xd6;
    double in_xd8;
    double in_xd14;
    bool bVar34;
    char cVar35;
    char cVar36;
    int iStack_38;
    int iStack_34;
    int iStack_2c;
    u32 uVar30;

    cVar36 = '\0';
    cVar35 = '\0';
    uVar7 = 0x3f000000;
    uVar1 = *a0;
    iStack_38._0_2_ = uVar1 & 0x3fff;
    uVar3 = uVar1 & 0xc000;
    puVar19 = *(u16 **)(a0 + 2);
    if ((uVar1 & 0xc000) == 0) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 3;
        iStack_34 = 0;
        while (true) {
            uVar3 = (u32)a0[1];
            if ((int)uVar3 <= iStack_34)
                break;
            puVar14 = puVar19 + 1;
            pdVar8 = (double *)((u32)*puVar19 * 0x40 + g_8c4aa510);
            puVar20 = puVar19 + 2;
            puVar19 = puVar19 + 3;
            pdVar15 = (double *)((u32)*puVar20 * 0x40 + g_8c4aa510);
            pdVar9 = (double *)((u32)*puVar14 * 0x40 + g_8c4aa510);
            if ((*(u32 *)pdVar8 & *(u32 *)pdVar9 & *(u32 *)pdVar15 & 0x3f) == 0) {
                if (((*(u32 *)pdVar8 | *(u32 *)pdVar9 | *(u32 *)pdVar15) & 1) == 0) {
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        if (cVar36 == '\0') {
                            uVar27 = *(u32 *)((int)pdVar9 + 4);
                            dVar28 = (double)CONCAT44(uVar27, *(u32 *)((int)pdVar8 + 4));
                            dVar29 = (double)CONCAT44(uVar27, SUB84(in_dr4, 0));
                        } else {
                            dVar28 = *(double *)((int)pdVar9 + 4);
                            in_xd2 = *(double *)((int)pdVar8 + 4);
                            uVar27 = (u32)((u64)dVar28 >> 0x20);
                            dVar29 = dVar28;
                        }
                        if (cVar35 == '\0') {
                            dVar28 =
                                (double)CONCAT44((float)((u64)dVar28 >> 0x20) - SUB84(dVar28, 0), SUB84(dVar28, 0));
                        } else {
                            dVar28 = dVar28 - dVar28;
                        }
                        if (cVar36 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)(pdVar15 + 1));
                            dVar29 = (double)CONCAT44(uVar27, *(u32 *)(pdVar9 + 1));
                        } else {
                            in_xd2 = pdVar15[1];
                            in_xd4 = pdVar9[1];
                        }
                        fVar24 = SUB84(dVar29, 0);
                        if (cVar35 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) - fVar24);
                        } else {
                            dVar28 = dVar28 - dVar29;
                        }
                        dVar33 = in_xd4;
                        if (cVar36 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar24);
                            dVar33 = in_xd0;
                        }
                        in_xd0 = dVar33;
                        if (cVar35 == '\0') {
                            dVar28 =
                                (double)CONCAT44((float)((u64)dVar28 >> 0x20) * SUB84(dVar28, 0), SUB84(dVar28, 0));
                        } else {
                            dVar28 = dVar28 * dVar28;
                        }
                        if (cVar36 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)(pdVar8 + 1));
                        } else {
                            in_xd2 = pdVar8[1];
                        }
                        if (cVar35 == '\0') {
                            dVar33 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar28, 0));
                        } else {
                            dVar33 = in_dr0 - dVar28;
                        }
                        if (cVar36 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)((int)pdVar15 + 4));
                        } else {
                            in_xd2 = *(double *)((int)pdVar15 + 4);
                        }
                        if (cVar35 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20),
                                                      SUB84(dVar28, 0) - (float)((u64)dVar29 >> 0x20));
                        } else {
                            dVar28 = dVar28 - dVar29;
                        }
                        uVar3 = (u32)((u64)dVar28 >> 0x20);
                        dVar29 = dVar28;
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44(uVar3, fVar24);
                        }
                        if (cVar35 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)dVar33 >> 0x20), SUB84(dVar33, 0) * SUB84(dVar28, 0));
                        } else {
                            in_dr0 = dVar33 * dVar28;
                        }
                        in_dr2 = (double)((u64)uVar3 << 0x20);
                        if (cVar35 == '\0') {
                            fVar24 = (float)((u64)dVar29 >> 0x20) - SUB84(in_dr0, 0);
                            in_dr4 = (double)CONCAT44(fVar24, SUB84(dVar29, 0));
                            bVar34 = 0.0 < fVar24;
                        } else {
                            in_dr4 = dVar29 - in_dr0;
                            bVar34 = in_dr2 < in_dr4;
                        }
                        if (bVar34)
                            goto LAB_8c25223c;
                    }
                    uVar27 = SUB84(in_dr2, 0);
                    uVar5 = SUB84(in_dr0, 0);
                    *(u32 *)pdVar8 = 0xe0000000;
                    CacheBlockWriteBack(pdVar8);
                    uVar30 = g_8c4c11b4;
                    if (cVar36 != '\0') {
                        in_xd6 = (double)CONCAT44(g_8c4c11c0, g_8c4c11bc);
                        in_xd4 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                        uVar30 = g_8c4c11b0;
                    }
                    uVar4 = float_to_color_u8(pdVar8, a1, a2, a3);
                    dVar33 = in_xd14;
                    dVar29 = in_xd14;
                    dVar28 = in_xd14;
                    if (cVar36 == '\0') {
                        dVar33 = (double)CONCAT44(uVar7, uVar30);
                        dVar29 = in_xd2;
                        uVar27 = uVar7;
                        dVar28 = (double)CONCAT44(uVar7, uVar5);
                    }
                    *(u32 *)(pdVar8 + 5) = uVar4;
                    if (cVar36 == '\0') {
                        dVar25 = (double)CONCAT44(*(u32 *)(pdVar8 + 6), uVar27);
                        pdVar17 = (double *)((int)pdVar8 + 0x34);
                    } else {
                        dVar25 = pdVar8[6];
                        pdVar17 = pdVar8 + 7;
                    }
                    if (cVar35 == '\0') {
                        dVar25 = (double)(u64)(u32)((float)((u64)dVar28 >> 0x20) * (float)((u64)dVar25 >> 0x20) +
                                                    SUB84(dVar25, 0));
                    }
                    uVar27 = (u32)((u64)dVar33 >> 0x20);
                    if (cVar36 == '\0') {
                        *(int *)(pdVar8 + 4) = SUB84(dVar25, 0);
                        dVar25 = (double)CONCAT44(*(u32 *)pdVar17, uVar27);
                        dVar33 = dVar29;
                        dVar29 = (double)CONCAT44(uVar27, SUB84(dVar28, 0));
                    } else {
                        pdVar8[4] = dVar29;
                        dVar25 = *pdVar17;
                        dVar29 = dVar33;
                    }
                    pdVar11 = (double *)((int)pdVar8 + 0x24);
                    if (cVar35 == '\0') {
                        dVar25 = (double)(u64)(u32)((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar25 >> 0x20) +
                                                    SUB84(dVar25, 0));
                    }
                    if (cVar36 == '\0') {
                        *(int *)pdVar11 = SUB84(dVar25, 0);
                    } else {
                        *pdVar11 = dVar33;
                    }
                    CacheBlockWriteBack(pdVar11);
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar29, 0));
                        dVar28 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 4), SUB84(dVar25, 0));
                        pdVar8 = pdVar8 + 1;
                    } else {
                        dVar29 = *pdVar8;
                        dVar28 = pdVar8[1];
                        pdVar8 = pdVar8 + 2;
                    }
                    if (cVar36 == '\0') {
                        uVar27 = *(u32 *)(pdVar8 + 2);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar8 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar27;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar28 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)dVar29 >> 0x20);
                    } else {
                        dVar25 = pdVar8[2];
                        unaff_r8[3] = pdVar8[3];
                        unaff_r8[2] = dVar25;
                        unaff_r8[1] = dVar28;
                        *unaff_r8 = dVar29;
                    }
                    *(u32 *)pdVar9 = 0xe0000000;
                    CacheBlockWriteBack(pdVar9);
                    uVar27 = g_8c4c11b4;
                    if (cVar36 != '\0') {
                        in_xd6 = (double)CONCAT44(g_8c4c11c0, g_8c4c11bc);
                        in_xd4 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                        uVar27 = g_8c4c11b0;
                    }
                    uVar5 = float_to_color_u8(pdVar9, pdVar17, a2, a3);
                    uVar30 = SUB84(dVar28, 0);
                    dVar31 = in_xd14;
                    dVar28 = in_xd14;
                    dVar25 = in_xd14;
                    if (cVar36 == '\0') {
                        dVar31 = (double)CONCAT44(uVar7, uVar27);
                        dVar28 = dVar33;
                        uVar30 = uVar7;
                        dVar25 = (double)CONCAT44(uVar7, SUB84(dVar29, 0));
                    }
                    *(u32 *)(pdVar9 + 5) = uVar5;
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)(pdVar9 + 6), uVar30);
                        pdVar8 = (double *)((int)pdVar9 + 0x34);
                    } else {
                        dVar29 = pdVar9[6];
                        pdVar8 = pdVar9 + 7;
                    }
                    if (cVar35 == '\0') {
                        dVar29 = (double)(u64)(u32)((float)((u64)dVar25 >> 0x20) * (float)((u64)dVar29 >> 0x20) +
                                                    SUB84(dVar29, 0));
                    }
                    uVar27 = (u32)((u64)dVar31 >> 0x20);
                    if (cVar36 == '\0') {
                        *(int *)(pdVar9 + 4) = SUB84(dVar29, 0);
                        dVar33 = (double)CONCAT44(*(u32 *)pdVar8, uVar27);
                        dVar31 = dVar28;
                        dVar29 = (double)CONCAT44(uVar27, SUB84(dVar25, 0));
                    } else {
                        pdVar9[4] = dVar28;
                        dVar33 = *pdVar8;
                        dVar29 = dVar31;
                    }
                    pdVar17 = (double *)((int)pdVar9 + 0x24);
                    if (cVar35 == '\0') {
                        dVar33 = (double)(u64)(u32)((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar33 >> 0x20) +
                                                    SUB84(dVar33, 0));
                    }
                    if (cVar36 == '\0') {
                        *(int *)pdVar17 = SUB84(dVar33, 0);
                    } else {
                        *pdVar17 = dVar31;
                    }
                    CacheBlockWriteBack(pdVar17);
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar29, 0));
                        dVar28 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), SUB84(dVar33, 0));
                        pdVar9 = pdVar9 + 1;
                    } else {
                        dVar29 = *pdVar9;
                        dVar28 = pdVar9[1];
                        pdVar9 = pdVar9 + 2;
                    }
                    if (cVar36 == '\0') {
                        uVar27 = *(u32 *)(pdVar9 + 2);
                        *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar9 + 0x14);
                        *(u32 *)(unaff_r8 + 7) = uVar27;
                        *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar28 >> 0x20);
                        pdVar9 = unaff_r8 + 6;
                        *(int *)pdVar9 = (int)((u64)dVar29 >> 0x20);
                    } else {
                        dVar33 = pdVar9[2];
                        unaff_r8[7] = pdVar9[3];
                        unaff_r8[6] = dVar33;
                        unaff_r8[5] = dVar28;
                        pdVar9 = unaff_r8 + 4;
                        *pdVar9 = dVar29;
                    }
                    *(u32 *)pdVar15 = 0xf0000000;
                    CacheBlockWriteBack(pdVar15);
                    uVar27 = g_8c4c11b4;
                    if (cVar36 != '\0') {
                        in_xd6 = (double)CONCAT44(g_8c4c11c0, g_8c4c11bc);
                        in_xd4 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                        uVar27 = g_8c4c11b0;
                    }
                    uVar5 = float_to_color_u8(pdVar15, pdVar8, a2, a3);
                    uVar30 = SUB84(dVar28, 0);
                    dVar33 = in_xd14;
                    in_xd2 = in_xd14;
                    dVar28 = in_xd14;
                    if (cVar36 == '\0') {
                        dVar33 = (double)CONCAT44(uVar7, uVar27);
                        in_xd2 = dVar31;
                        uVar30 = uVar7;
                        dVar28 = (double)CONCAT44(uVar7, SUB84(dVar29, 0));
                    }
                    *(u32 *)(pdVar15 + 5) = uVar5;
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)(pdVar15 + 6), uVar30);
                        a1 = (double *)((int)pdVar15 + 0x34);
                    } else {
                        dVar29 = pdVar15[6];
                        a1 = pdVar15 + 7;
                    }
                    if (cVar35 == '\0') {
                        dVar29 = (double)(u64)(u32)((float)((u64)dVar28 >> 0x20) * (float)((u64)dVar29 >> 0x20) +
                                                    SUB84(dVar29, 0));
                    }
                    uVar27 = (u32)((u64)dVar33 >> 0x20);
                    if (cVar36 == '\0') {
                        *(int *)(pdVar15 + 4) = SUB84(dVar29, 0);
                        dVar25 = (double)CONCAT44(*(u32 *)a1, uVar27);
                        dVar29 = (double)CONCAT44(uVar27, SUB84(dVar28, 0));
                    } else {
                        pdVar15[4] = in_xd2;
                        dVar25 = *a1;
                        in_xd2 = dVar33;
                        dVar29 = dVar33;
                    }
                    pdVar8 = (double *)((int)pdVar15 + 0x24);
                    if (cVar35 == '\0') {
                        dVar25 = (double)(u64)(u32)((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar25 >> 0x20) +
                                                    SUB84(dVar25, 0));
                    }
                    if (cVar36 == '\0') {
                        *(int *)pdVar8 = SUB84(dVar25, 0);
                    } else {
                        *pdVar8 = in_xd2;
                    }
                    CacheBlockWriteBack(pdVar8);
                    if (cVar36 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar15, SUB84(dVar29, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 4), SUB84(dVar25, 0));
                        pdVar15 = pdVar15 + 1;
                    } else {
                        in_dr0 = *pdVar15;
                        in_dr2 = pdVar15[1];
                        pdVar15 = pdVar15 + 2;
                    }
                    if (cVar36 == '\0') {
                        uVar27 = *(u32 *)(pdVar15 + 2);
                        in_dr4 = (double)CONCAT44(uVar27, SUB84(dVar33, 0));
                        *(u32 *)((int)pdVar9 + 0x3c) = *(u32 *)((int)pdVar15 + 0x14);
                        *(u32 *)(pdVar9 + 7) = uVar27;
                        *(int *)((int)pdVar9 + 0x34) = (int)((u64)in_dr2 >> 0x20);
                        pdVar9 = pdVar9 + 6;
                        *(int *)pdVar9 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        in_dr4 = pdVar15[2];
                        pdVar9[7] = pdVar15[3];
                        pdVar9[6] = in_dr4;
                        pdVar9[5] = in_dr2;
                        pdVar9 = pdVar9 + 4;
                        *pdVar9 = in_dr0;
                    }
                    unaff_r8 = pdVar9 + 4;
                    g_8c4aa520 = g_8c4aa520 + 3;
                } else {
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        if (cVar36 == '\0') {
                            uVar27 = *(u32 *)(pdVar9 + 3);
                            uVar30 = *(u32 *)((int)pdVar9 + 0x14);
                            pdVar17 = (double *)((int)pdVar8 + 0x14);
                            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar30);
                            dVar33 = (double)CONCAT44(uVar27, SUB84(in_dr0, 0));
                            dVar29 = in_xd2;
                            dVar28 = *(double *)((int)pdVar9 + 0x14);
                        } else {
                            dVar33 = pdVar9[3];
                            dVar29 = *(double *)((int)pdVar9 + 0x14);
                            in_xd4 = *(double *)((int)pdVar8 + 0x14);
                            pdVar17 = pdVar8 + 3;
                            uVar30 = SUB84(dVar33, 0);
                            uVar27 = (u32)((u64)dVar33 >> 0x20);
                            dVar28 = dVar33;
                            in_xd6 = dVar29;
                        }
                        dVar25 = *pdVar17;
                        fVar23 = (float)((u64)dVar25 >> 0x20);
                        fVar24 = SUB84(dVar25, 0);
                        if (cVar35 == '\0') {
                            fVar22 = SUB84(in_dr2, 0) * fVar23;
                            dVar33 = (double)CONCAT44((float)((u64)dVar33 >> 0x20) * fVar24, SUB84(dVar33, 0));
                        } else {
                            fVar22 = SUB84(in_dr2 * dVar25, 0);
                            dVar33 = dVar33 * dVar25;
                        }
                        if (cVar36 == '\0') {
                            dVar31 = (double)CONCAT44(*(u32 *)(pdVar8 + 2), *(u32 *)(pdVar9 + 2));
                            dVar28 = (double)CONCAT44(uVar27, fVar22);
                        } else {
                            in_xd8 = pdVar9[2];
                            dVar31 = pdVar8[2];
                        }
                        fVar22 = (float)((u64)dVar31 >> 0x20);
                        if (cVar35 == '\0') {
                            dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * fVar22, SUB84(dVar28, 0));
                        } else {
                            dVar28 = dVar28 * dVar31;
                        }
                        dVar26 = in_xd8;
                        if (cVar36 == '\0') {
                            dVar26 = (double)CONCAT44(SUB84(dVar31, 0), SUB84(in_dr12, 0));
                        }
                        if (cVar35 == '\0') {
                            dVar33 =
                                (double)CONCAT44((float)((u64)dVar33 >> 0x20) - SUB84(dVar28, 0), SUB84(dVar33, 0));
                        } else {
                            dVar33 = dVar33 - dVar28;
                        }
                        in_xd2 = in_xd8;
                        if (cVar36 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar31, 0));
                            in_xd2 = dVar29;
                        }
                        if (cVar35 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) * fVar23);
                        } else {
                            dVar28 = dVar28 * dVar25;
                        }
                        dVar29 = in_xd6;
                        if (cVar36 == '\0') {
                            dVar33 = (double)CONCAT44((int)((u64)dVar33 >> 0x20), uVar30);
                            dVar29 = in_xd0;
                        }
                        in_xd0 = dVar29;
                        if (cVar35 == '\0') {
                            dVar33 = (double)CONCAT44((int)((u64)dVar33 >> 0x20), SUB84(dVar33, 0) * fVar22);
                            in_dr12 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) * fVar24, SUB84(dVar26, 0));
                            fVar23 = SUB84(dVar28, 0) - (float)((u64)dVar28 >> 0x20);
                        } else {
                            dVar33 = dVar33 * dVar31;
                            in_dr12 = dVar26 * dVar25;
                            fVar23 = SUB84(dVar28 - dVar28, 0);
                        }
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 0x14), fVar23);
                        } else {
                            dVar29 = *(double *)((int)pdVar15 + 0x14);
                        }
                        if (cVar35 == '\0') {
                            dVar33 = (double)CONCAT44((int)((u64)dVar33 >> 0x20),
                                                      SUB84(dVar33, 0) - (float)((u64)in_dr12 >> 0x20));
                            dVar29 =
                                (double)CONCAT44((float)((u64)dVar29 >> 0x20) * SUB84(dVar29, 0), SUB84(dVar29, 0));
                        } else {
                            dVar33 = dVar33 - in_dr12;
                            dVar29 = dVar29 * dVar29;
                        }
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(pdVar15 + 2));
                        } else {
                            in_xd2 = pdVar15[2];
                        }
                        if (cVar35 == '\0') {
                            dVar29 = (double)CONCAT44((float)((u64)dVar33 >> 0x20) * SUB84(dVar29, 0) +
                                                          (float)((u64)dVar29 >> 0x20),
                                                      SUB84(dVar29, 0));
                        }
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(pdVar15 + 3));
                            in_dr0 = (double)CONCAT44(SUB84(dVar33, 0), SUB84(dVar33, 0));
                        } else {
                            in_xd2 = pdVar15[3];
                            in_dr0 = in_xd0;
                        }
                        if (cVar35 == '\0') {
                            dVar29 = (double)((u64)(u32)((float)((u64)in_dr0 >> 0x20) * SUB84(dVar29, 0) +
                                                         (float)((u64)dVar29 >> 0x20))
                                              << 0x20);
                        }
                        in_dr2 = (double)((u64)dVar29 & 0xffffffff00000000);
                        in_dr4 = in_dr2;
                        if (cVar36 == '\0') {
                            in_dr4 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), fVar24);
                        }
                        if (cVar35 == '\0') {
                            bVar34 = 0.0 < (float)((u64)in_dr4 >> 0x20);
                        } else {
                            bVar34 = in_dr2 < in_dr4;
                        }
                        if (bVar34)
                            goto LAB_8c25223c;
                    }
                    gfxlib_uses_float_to_color_u8_23e4c8(pdVar8, pdVar9, pdVar15, a3);
                    a1 = pdVar9;
                    a2 = pdVar15;
                }
            }
        LAB_8c25223c:
            iStack_34 = iStack_34 + 1;
        }
    } else if (uVar3 == 0x4000) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 4;
        iStack_2c = 0;
        while (true) {
            uVar27 = SUB84(in_dr4, 0);
            uVar3 = (u32)a0[1];
            if ((int)uVar3 <= iStack_2c)
                break;
            pdVar9 = (double *)((u32)*puVar19 * 0x40 + g_8c4aa510);
            puVar14 = puVar19 + 3;
            pdVar15 = (double *)((u32)puVar19[1] * 0x40 + g_8c4aa510);
            pdVar17 = (double *)((u32)puVar19[2] * 0x40 + g_8c4aa510);
            puVar19 = puVar19 + 4;
            pdVar8 = (double *)((u32)*puVar14 * 0x40 + g_8c4aa510);
            if ((*(u32 *)pdVar9 & *(u32 *)pdVar15 & *(u32 *)pdVar17 & *(u32 *)pdVar8 & 0x3f) == 0) {
                if (((*(u32 *)pdVar9 | *(u32 *)pdVar15 | *(u32 *)pdVar17 | *(u32 *)pdVar8) & 1) == 0) {
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        if (cVar36 == '\0') {
                            uVar27 = *(u32 *)((int)pdVar15 + 4);
                            dVar29 = (double)CONCAT44(uVar27, *(u32 *)((int)pdVar9 + 4));
                        } else {
                            dVar29 = *(double *)((int)pdVar15 + 4);
                            in_xd2 = *(double *)((int)pdVar9 + 4);
                            in_xd4 = dVar29;
                        }
                        if (cVar35 == '\0') {
                            dVar29 =
                                (double)CONCAT44((float)((u64)dVar29 >> 0x20) - SUB84(dVar29, 0), SUB84(dVar29, 0));
                        } else {
                            dVar29 = dVar29 - dVar29;
                        }
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(pdVar17 + 1));
                            dVar28 = (double)CONCAT44(*(u32 *)(pdVar15 + 1), uVar27);
                        } else {
                            in_xd2 = pdVar17[1];
                            dVar28 = pdVar15[1];
                        }
                        fVar24 = (float)((u64)dVar28 >> 0x20);
                        if (cVar35 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) - fVar24);
                        } else {
                            dVar29 = dVar29 - dVar28;
                        }
                        dVar33 = dVar28;
                        if (cVar36 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar24);
                            dVar33 = in_xd0;
                        }
                        in_xd0 = dVar33;
                        if (cVar35 == '\0') {
                            dVar29 =
                                (double)CONCAT44((float)((u64)dVar29 >> 0x20) * SUB84(dVar29, 0), SUB84(dVar29, 0));
                        } else {
                            dVar29 = dVar29 * dVar29;
                        }
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(pdVar9 + 1));
                        } else {
                            in_xd2 = pdVar9[1];
                        }
                        if (cVar35 == '\0') {
                            dVar33 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar29, 0));
                        } else {
                            dVar33 = in_dr0 - dVar29;
                        }
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)((int)pdVar17 + 4));
                        } else {
                            in_xd2 = *(double *)((int)pdVar17 + 4);
                        }
                        if (cVar35 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) - SUB84(dVar28, 0));
                        } else {
                            dVar29 = dVar29 - dVar28;
                        }
                        uVar3 = (u32)((u64)dVar29 >> 0x20);
                        dVar25 = dVar29;
                        if (cVar36 == '\0') {
                            dVar25 = (double)CONCAT44(uVar3, SUB84(dVar28, 0));
                        }
                        if (cVar35 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)dVar33 >> 0x20), SUB84(dVar33, 0) * SUB84(dVar29, 0));
                        } else {
                            in_dr0 = dVar33 * dVar29;
                        }
                        in_dr2 = (double)((u64)uVar3 << 0x20);
                        if (cVar35 == '\0') {
                            fVar24 = (float)((u64)dVar25 >> 0x20) - SUB84(in_dr0, 0);
                            in_dr4 = (double)CONCAT44(fVar24, SUB84(dVar25, 0));
                            bVar34 = 0.0 < fVar24;
                        } else {
                            in_dr4 = dVar25 - in_dr0;
                            bVar34 = in_dr2 < in_dr4;
                        }
                        if (bVar34)
                            goto LAB_8c25258e;
                    }
                    uVar27 = SUB84(in_dr2, 0);
                    uVar5 = SUB84(in_dr0, 0);
                    *(u32 *)pdVar9 = 0xe0000000;
                    CacheBlockWriteBack(pdVar9);
                    uVar30 = g_8c4c11b4;
                    if (cVar36 != '\0') {
                        in_xd4 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                        uVar30 = g_8c4c11b0;
                    }
                    uVar4 = float_to_color_u8(pdVar9, a1, a2, a3);
                    dVar33 = in_xd14;
                    dVar29 = in_xd14;
                    dVar28 = in_xd14;
                    if (cVar36 == '\0') {
                        dVar33 = (double)CONCAT44(uVar7, uVar30);
                        dVar29 = in_xd2;
                        uVar27 = uVar7;
                        dVar28 = (double)CONCAT44(uVar7, uVar5);
                    }
                    *(u32 *)(pdVar9 + 5) = uVar4;
                    if (cVar36 == '\0') {
                        dVar25 = (double)CONCAT44(*(u32 *)(pdVar9 + 6), uVar27);
                        pdVar11 = (double *)((int)pdVar9 + 0x34);
                    } else {
                        dVar25 = pdVar9[6];
                        pdVar11 = pdVar9 + 7;
                    }
                    if (cVar35 == '\0') {
                        dVar25 = (double)(u64)(u32)((float)((u64)dVar28 >> 0x20) * (float)((u64)dVar25 >> 0x20) +
                                                    SUB84(dVar25, 0));
                    }
                    uVar27 = (u32)((u64)dVar33 >> 0x20);
                    if (cVar36 == '\0') {
                        *(int *)(pdVar9 + 4) = SUB84(dVar25, 0);
                        dVar25 = (double)CONCAT44(*(u32 *)pdVar11, uVar27);
                        dVar33 = dVar29;
                        dVar29 = (double)CONCAT44(uVar27, SUB84(dVar28, 0));
                    } else {
                        pdVar9[4] = dVar29;
                        dVar25 = *pdVar11;
                        dVar29 = dVar33;
                    }
                    pdVar2 = (double *)((int)pdVar9 + 0x24);
                    if (cVar35 == '\0') {
                        dVar25 = (double)(u64)(u32)((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar25 >> 0x20) +
                                                    SUB84(dVar25, 0));
                    }
                    if (cVar36 == '\0') {
                        *(int *)pdVar2 = SUB84(dVar25, 0);
                    } else {
                        *pdVar2 = dVar33;
                    }
                    CacheBlockWriteBack(pdVar2);
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar29, 0));
                        dVar28 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), SUB84(dVar25, 0));
                        pdVar9 = pdVar9 + 1;
                    } else {
                        dVar29 = *pdVar9;
                        dVar28 = pdVar9[1];
                        pdVar9 = pdVar9 + 2;
                    }
                    if (cVar36 == '\0') {
                        uVar27 = *(u32 *)(pdVar9 + 2);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar9 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar27;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar28 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)dVar29 >> 0x20);
                    } else {
                        dVar25 = pdVar9[2];
                        unaff_r8[3] = pdVar9[3];
                        unaff_r8[2] = dVar25;
                        unaff_r8[1] = dVar28;
                        *unaff_r8 = dVar29;
                    }
                    *(u32 *)pdVar15 = 0xe0000000;
                    CacheBlockWriteBack(pdVar15);
                    uVar27 = g_8c4c11b4;
                    if (cVar36 != '\0') {
                        in_xd4 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                        uVar27 = g_8c4c11b0;
                    }
                    uVar5 = float_to_color_u8(pdVar15, pdVar11, a2, a3);
                    uVar30 = SUB84(dVar28, 0);
                    dVar31 = in_xd14;
                    dVar28 = in_xd14;
                    dVar25 = in_xd14;
                    if (cVar36 == '\0') {
                        dVar31 = (double)CONCAT44(uVar7, uVar27);
                        dVar28 = dVar33;
                        uVar30 = uVar7;
                        dVar25 = (double)CONCAT44(uVar7, SUB84(dVar29, 0));
                    }
                    *(u32 *)(pdVar15 + 5) = uVar5;
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)(pdVar15 + 6), uVar30);
                        pdVar9 = (double *)((int)pdVar15 + 0x34);
                    } else {
                        dVar29 = pdVar15[6];
                        pdVar9 = pdVar15 + 7;
                    }
                    if (cVar35 == '\0') {
                        dVar29 = (double)(u64)(u32)((float)((u64)dVar25 >> 0x20) * (float)((u64)dVar29 >> 0x20) +
                                                    SUB84(dVar29, 0));
                    }
                    uVar27 = (u32)((u64)dVar31 >> 0x20);
                    if (cVar36 == '\0') {
                        *(int *)(pdVar15 + 4) = SUB84(dVar29, 0);
                        dVar33 = (double)CONCAT44(*(u32 *)pdVar9, uVar27);
                        dVar31 = dVar28;
                        dVar29 = (double)CONCAT44(uVar27, SUB84(dVar25, 0));
                    } else {
                        pdVar15[4] = dVar28;
                        dVar33 = *pdVar9;
                        dVar29 = dVar31;
                    }
                    pdVar11 = (double *)((int)pdVar15 + 0x24);
                    if (cVar35 == '\0') {
                        dVar33 = (double)(u64)(u32)((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar33 >> 0x20) +
                                                    SUB84(dVar33, 0));
                    }
                    if (cVar36 == '\0') {
                        *(int *)pdVar11 = SUB84(dVar33, 0);
                    } else {
                        *pdVar11 = dVar31;
                    }
                    CacheBlockWriteBack(pdVar11);
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)pdVar15, SUB84(dVar29, 0));
                        dVar28 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 4), SUB84(dVar33, 0));
                        pdVar15 = pdVar15 + 1;
                    } else {
                        dVar29 = *pdVar15;
                        dVar28 = pdVar15[1];
                        pdVar15 = pdVar15 + 2;
                    }
                    if (cVar36 == '\0') {
                        uVar27 = *(u32 *)(pdVar15 + 2);
                        *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar15 + 0x14);
                        *(u32 *)(unaff_r8 + 7) = uVar27;
                        *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar28 >> 0x20);
                        pdVar15 = unaff_r8 + 6;
                        *(int *)pdVar15 = (int)((u64)dVar29 >> 0x20);
                    } else {
                        dVar33 = pdVar15[2];
                        unaff_r8[7] = pdVar15[3];
                        unaff_r8[6] = dVar33;
                        unaff_r8[5] = dVar28;
                        pdVar15 = unaff_r8 + 4;
                        *pdVar15 = dVar29;
                    }
                    *(u32 *)pdVar17 = 0xe0000000;
                    CacheBlockWriteBack(pdVar17);
                    uVar27 = g_8c4c11b4;
                    if (cVar36 != '\0') {
                        in_xd4 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                        uVar27 = g_8c4c11b0;
                    }
                    uVar5 = float_to_color_u8(pdVar17, pdVar9, a2, a3);
                    uVar30 = SUB84(dVar28, 0);
                    dVar25 = in_xd14;
                    dVar28 = in_xd14;
                    dVar33 = in_xd14;
                    if (cVar36 == '\0') {
                        dVar25 = (double)CONCAT44(uVar7, uVar27);
                        dVar28 = dVar31;
                        uVar30 = uVar7;
                        dVar33 = (double)CONCAT44(uVar7, SUB84(dVar29, 0));
                    }
                    *(u32 *)(pdVar17 + 5) = uVar5;
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)(pdVar17 + 6), uVar30);
                        pdVar9 = (double *)((int)pdVar17 + 0x34);
                    } else {
                        dVar29 = pdVar17[6];
                        pdVar9 = pdVar17 + 7;
                    }
                    if (cVar35 == '\0') {
                        dVar29 = (double)(u64)(u32)((float)((u64)dVar33 >> 0x20) * (float)((u64)dVar29 >> 0x20) +
                                                    SUB84(dVar29, 0));
                    }
                    uVar27 = (u32)((u64)dVar25 >> 0x20);
                    if (cVar36 == '\0') {
                        *(int *)(pdVar17 + 4) = SUB84(dVar29, 0);
                        dVar31 = (double)CONCAT44(*(u32 *)pdVar9, uVar27);
                        dVar25 = dVar28;
                        dVar29 = (double)CONCAT44(uVar27, SUB84(dVar33, 0));
                    } else {
                        pdVar17[4] = dVar28;
                        dVar31 = *pdVar9;
                        dVar29 = dVar25;
                    }
                    pdVar11 = (double *)((int)pdVar17 + 0x24);
                    if (cVar35 == '\0') {
                        dVar31 = (double)(u64)(u32)((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar31 >> 0x20) +
                                                    SUB84(dVar31, 0));
                    }
                    if (cVar36 == '\0') {
                        *(int *)pdVar11 = SUB84(dVar31, 0);
                    } else {
                        *pdVar11 = dVar25;
                    }
                    CacheBlockWriteBack(pdVar11);
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)pdVar17, SUB84(dVar29, 0));
                        dVar28 = (double)CONCAT44(*(u32 *)((int)pdVar17 + 4), SUB84(dVar31, 0));
                        pdVar17 = pdVar17 + 1;
                    } else {
                        dVar29 = *pdVar17;
                        dVar28 = pdVar17[1];
                        pdVar17 = pdVar17 + 2;
                    }
                    if (cVar36 == '\0') {
                        uVar27 = *(u32 *)(pdVar17 + 2);
                        *(u32 *)((int)pdVar15 + 0x3c) = *(u32 *)((int)pdVar17 + 0x14);
                        *(u32 *)(pdVar15 + 7) = uVar27;
                        *(int *)((int)pdVar15 + 0x34) = (int)((u64)dVar28 >> 0x20);
                        pdVar15 = pdVar15 + 6;
                        *(int *)pdVar15 = (int)((u64)dVar29 >> 0x20);
                    } else {
                        dVar33 = pdVar17[2];
                        pdVar15[7] = pdVar17[3];
                        pdVar15[6] = dVar33;
                        pdVar15[5] = dVar28;
                        pdVar15 = pdVar15 + 4;
                        *pdVar15 = dVar29;
                    }
                    *(u32 *)pdVar8 = 0xf0000000;
                    CacheBlockWriteBack(pdVar8);
                    uVar27 = g_8c4c11b4;
                    if (cVar36 != '\0') {
                        in_xd4 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                        uVar27 = g_8c4c11b0;
                    }
                    uVar5 = float_to_color_u8(pdVar8, pdVar9, a2, a3);
                    uVar30 = SUB84(dVar28, 0);
                    dVar33 = in_xd14;
                    in_xd2 = in_xd14;
                    dVar28 = in_xd14;
                    if (cVar36 == '\0') {
                        dVar33 = (double)CONCAT44(uVar7, uVar27);
                        in_xd2 = dVar25;
                        uVar30 = uVar7;
                        dVar28 = (double)CONCAT44(uVar7, SUB84(dVar29, 0));
                    }
                    *(u32 *)(pdVar8 + 5) = uVar5;
                    if (cVar36 == '\0') {
                        dVar29 = (double)CONCAT44(*(u32 *)(pdVar8 + 6), uVar30);
                        a1 = (double *)((int)pdVar8 + 0x34);
                    } else {
                        dVar29 = pdVar8[6];
                        a1 = pdVar8 + 7;
                    }
                    if (cVar35 == '\0') {
                        dVar29 = (double)(u64)(u32)((float)((u64)dVar28 >> 0x20) * (float)((u64)dVar29 >> 0x20) +
                                                    SUB84(dVar29, 0));
                    }
                    uVar27 = (u32)((u64)dVar33 >> 0x20);
                    if (cVar36 == '\0') {
                        *(int *)(pdVar8 + 4) = SUB84(dVar29, 0);
                        dVar25 = (double)CONCAT44(*(u32 *)a1, uVar27);
                        dVar29 = (double)CONCAT44(uVar27, SUB84(dVar28, 0));
                    } else {
                        pdVar8[4] = in_xd2;
                        dVar25 = *a1;
                        in_xd2 = dVar33;
                        dVar29 = dVar33;
                    }
                    pdVar9 = (double *)((int)pdVar8 + 0x24);
                    if (cVar35 == '\0') {
                        dVar25 = (double)(u64)(u32)((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar25 >> 0x20) +
                                                    SUB84(dVar25, 0));
                    }
                    if (cVar36 == '\0') {
                        *(int *)pdVar9 = SUB84(dVar25, 0);
                    } else {
                        *pdVar9 = in_xd2;
                    }
                    CacheBlockWriteBack(pdVar9);
                    if (cVar36 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar29, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 4), SUB84(dVar25, 0));
                        pdVar8 = pdVar8 + 1;
                    } else {
                        in_dr0 = *pdVar8;
                        in_dr2 = pdVar8[1];
                        pdVar8 = pdVar8 + 2;
                    }
                    if (cVar36 == '\0') {
                        uVar27 = *(u32 *)(pdVar8 + 2);
                        in_dr4 = (double)CONCAT44(uVar27, SUB84(dVar33, 0));
                        *(u32 *)((int)pdVar15 + 0x3c) = *(u32 *)((int)pdVar8 + 0x14);
                        *(u32 *)(pdVar15 + 7) = uVar27;
                        *(int *)((int)pdVar15 + 0x34) = (int)((u64)in_dr2 >> 0x20);
                        pdVar15 = pdVar15 + 6;
                        *(int *)pdVar15 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        in_dr4 = pdVar8[2];
                        pdVar15[7] = pdVar8[3];
                        pdVar15[6] = in_dr4;
                        pdVar15[5] = in_dr2;
                        pdVar15 = pdVar15 + 4;
                        *pdVar15 = in_dr0;
                    }
                    unaff_r8 = pdVar15 + 4;
                    g_8c4aa520 = g_8c4aa520 + 4;
                } else {
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        if (cVar36 == '\0') {
                            uVar27 = *(u32 *)(pdVar15 + 3);
                            uVar30 = *(u32 *)((int)pdVar15 + 0x14);
                            pdVar11 = (double *)((int)pdVar9 + 0x14);
                            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar30);
                            dVar33 = (double)CONCAT44(uVar27, SUB84(in_dr0, 0));
                            dVar29 = in_xd2;
                            dVar28 = (double)CONCAT44(uVar30, uVar27);
                        } else {
                            dVar33 = pdVar15[3];
                            dVar29 = *(double *)((int)pdVar15 + 0x14);
                            pdVar11 = pdVar9 + 3;
                            uVar30 = (u32)((u64)dVar29 >> 0x20);
                            uVar27 = SUB84(dVar29, 0);
                            dVar28 = dVar29;
                            in_xd4 = dVar33;
                        }
                        dVar25 = *pdVar11;
                        fVar24 = (float)((u64)dVar25 >> 0x20);
                        if (cVar35 == '\0') {
                            fVar23 = SUB84(in_dr2, 0) * fVar24;
                            dVar33 =
                                (double)CONCAT44((float)((u64)dVar33 >> 0x20) * SUB84(dVar25, 0), SUB84(dVar33, 0));
                        } else {
                            fVar23 = SUB84(in_dr2 * dVar25, 0);
                            dVar33 = dVar33 * dVar25;
                        }
                        if (cVar36 == '\0') {
                            dVar31 = (double)CONCAT44(*(u32 *)(pdVar9 + 2), *(u32 *)(pdVar15 + 2));
                            dVar26 = (double)CONCAT44(uVar27, fVar23);
                        } else {
                            in_xd8 = pdVar15[2];
                            dVar31 = pdVar9[2];
                            dVar26 = in_xd4;
                        }
                        fVar23 = (float)((u64)dVar31 >> 0x20);
                        if (cVar35 == '\0') {
                            dVar26 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) * fVar23, SUB84(dVar26, 0));
                        } else {
                            dVar26 = dVar26 * dVar31;
                        }
                        dVar32 = in_xd8;
                        if (cVar36 == '\0') {
                            dVar32 = (double)CONCAT44(SUB84(dVar31, 0), SUB84(in_dr12, 0));
                        }
                        if (cVar35 == '\0') {
                            dVar33 =
                                (double)CONCAT44((float)((u64)dVar33 >> 0x20) - SUB84(dVar26, 0), SUB84(dVar33, 0));
                        } else {
                            dVar33 = dVar33 - dVar26;
                        }
                        in_xd2 = in_xd8;
                        if (cVar36 == '\0') {
                            dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar31, 0));
                            in_xd2 = dVar29;
                        }
                        if (cVar35 == '\0') {
                            dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) * fVar24);
                        } else {
                            dVar26 = dVar26 * dVar25;
                        }
                        if (cVar36 == '\0') {
                            dVar33 = (double)CONCAT44((int)((u64)dVar33 >> 0x20), uVar30);
                            dVar28 = in_xd0;
                        }
                        in_xd0 = dVar28;
                        if (cVar35 == '\0') {
                            dVar33 = (double)CONCAT44((int)((u64)dVar33 >> 0x20), SUB84(dVar33, 0) * fVar23);
                            in_dr12 =
                                (double)CONCAT44((float)((u64)dVar32 >> 0x20) * SUB84(dVar25, 0), SUB84(dVar32, 0));
                            fVar24 = SUB84(dVar26, 0) - (float)((u64)dVar26 >> 0x20);
                        } else {
                            dVar33 = dVar33 * dVar31;
                            in_dr12 = dVar32 * dVar25;
                            fVar24 = SUB84(dVar26 - dVar26, 0);
                        }
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar17 + 0x14), fVar24);
                        } else {
                            dVar29 = *(double *)((int)pdVar17 + 0x14);
                        }
                        if (cVar35 == '\0') {
                            dVar33 = (double)CONCAT44((int)((u64)dVar33 >> 0x20),
                                                      SUB84(dVar33, 0) - (float)((u64)in_dr12 >> 0x20));
                            dVar29 =
                                (double)CONCAT44((float)((u64)dVar29 >> 0x20) * SUB84(dVar29, 0), SUB84(dVar29, 0));
                        } else {
                            dVar33 = dVar33 - in_dr12;
                            dVar29 = dVar29 * dVar29;
                        }
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(pdVar17 + 2));
                        } else {
                            in_xd2 = pdVar17[2];
                        }
                        if (cVar35 == '\0') {
                            dVar29 = (double)CONCAT44((float)((u64)dVar33 >> 0x20) * SUB84(dVar29, 0) +
                                                          (float)((u64)dVar29 >> 0x20),
                                                      SUB84(dVar29, 0));
                        }
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(pdVar17 + 3));
                            in_dr0 = (double)CONCAT44(SUB84(dVar33, 0), SUB84(dVar33, 0));
                        } else {
                            in_xd2 = pdVar17[3];
                            in_dr0 = in_xd0;
                        }
                        if (cVar35 == '\0') {
                            dVar29 = (double)((u64)(u32)((float)((u64)in_dr0 >> 0x20) * SUB84(dVar29, 0) +
                                                         (float)((u64)dVar29 >> 0x20))
                                              << 0x20);
                        }
                        in_dr2 = (double)((u64)dVar29 & 0xffffffff00000000);
                        in_dr4 = in_dr2;
                        if (cVar36 == '\0') {
                            in_dr4 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar27);
                        }
                        if (cVar35 == '\0') {
                            bVar34 = 0.0 < (float)((u64)in_dr4 >> 0x20);
                        } else {
                            bVar34 = in_dr2 < in_dr4;
                        }
                        if (bVar34)
                            goto LAB_8c25258e;
                    }
                    if ((*(u32 *)pdVar9 & *(u32 *)pdVar15 & *(u32 *)pdVar17 & 1) == 0) {
                        a1 = pdVar15;
                        a2 = pdVar17;
                        gfxlib_uses_float_to_color_u8_23e4c8(pdVar9, pdVar15, pdVar17, a3);
                    }
                    if ((*(u32 *)pdVar15 & *(u32 *)pdVar17 & *(u32 *)pdVar8 & 1) == 0) {
                        gfxlib_uses_float_to_color_u8_23e4c8(pdVar15, pdVar17, pdVar8, a3);
                        a1 = pdVar17;
                        a2 = pdVar8;
                    }
                }
            }
        LAB_8c25258e:
            iStack_2c = iStack_2c + 1;
        }
    } else if (uVar3 == 0x8000) {
        iVar16 = 0;
        while (true) {
            uVar27 = SUB84(in_dr4, 0);
            uVar3 = (u32)a0[1];
            if ((int)uVar3 <= iVar16)
                break;
            ar6_01 = 0;
            puVar20 = puVar19 + 1;
            iVar13 = 0;
            uVar18 = 0xffffffff;
            uVar3 = (u32)*puVar19;
            g_8c4aa51c = g_8c4aa51c + uVar3;
            puVar14 = puVar20;
            if (uVar3 != 0) {
                do {
                    uVar1 = *puVar14;
                    puVar14 = puVar14 + 1;
                    iVar13 = iVar13 + 1;
                    uVar10 = *(u32 *)((u32)uVar1 * 0x40 + g_8c4aa510);
                    uVar18 = uVar18 & uVar10;
                    ar6_01 = ar6_01 | uVar10;
                } while (iVar13 < (int)uVar3);
            }
            if ((uVar18 & 0x3f) == 0) {
                puVar14 = puVar19 + 3;
                if ((ar6_01 & 1) == 0) {
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        ar6_01 = (u32)puVar19[2] * 0x40 + g_8c4aa510;
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44(*(u32 *)(ar6_01 + 4), uVar27);
                        } else {
                            dVar29 = *(double *)(ar6_01 + 4);
                        }
                        iVar13 = (u32)*puVar20 * 0x40 + g_8c4aa510;
                        uVar27 = (u32)((u64)dVar29 >> 0x20);
                        if (cVar36 == '\0') {
                            dVar28 = (double)CONCAT44(uVar27, *(u32 *)(iVar13 + 4));
                        } else {
                            in_xd2 = *(double *)(iVar13 + 4);
                            dVar28 = dVar29;
                        }
                        if (cVar35 == '\0') {
                            dVar28 =
                                (double)CONCAT44((float)((u64)dVar28 >> 0x20) - SUB84(dVar28, 0), SUB84(dVar28, 0));
                        } else {
                            dVar28 = dVar28 - dVar28;
                        }
                        puVar14 = (u16 *)(g_8c4aa510 + (u32)*puVar14 * 0x40);
                        if (cVar36 == '\0') {
                            fVar24 = *(float *)(ar6_01 + 8);
                            dVar29 = (double)CONCAT44(uVar27, fVar24);
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)(puVar14 + 4));
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar24);
                        } else {
                            in_xd0 = *(double *)(ar6_01 + 8);
                            in_xd2 = *(double *)(puVar14 + 4);
                            fVar24 = SUB84(dVar29, 0);
                            in_xd4 = in_xd0;
                        }
                        if (cVar35 == '\0') {
                            fVar23 = SUB84(dVar28, 0) - fVar24;
                            dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * fVar23, fVar23);
                        } else {
                            dVar28 = (dVar28 - dVar29) * (dVar28 - dVar29);
                        }
                        if (cVar36 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)(iVar13 + 8));
                        } else {
                            in_xd2 = *(double *)(iVar13 + 8);
                        }
                        if (cVar35 == '\0') {
                            dVar33 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar28, 0));
                        } else {
                            dVar33 = in_dr0 - dVar28;
                        }
                        if (cVar36 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)(puVar14 + 2));
                        } else {
                            in_xd2 = *(double *)(puVar14 + 2);
                        }
                        if (cVar35 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20),
                                                      SUB84(dVar28, 0) - (float)((u64)dVar29 >> 0x20));
                        } else {
                            dVar28 = dVar28 - dVar29;
                        }
                        uVar18 = (u32)((u64)dVar28 >> 0x20);
                        dVar29 = dVar28;
                        if (cVar36 == '\0') {
                            dVar29 = (double)CONCAT44(uVar18, fVar24);
                        }
                        if (cVar35 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)dVar33 >> 0x20), SUB84(dVar33, 0) * SUB84(dVar28, 0));
                        } else {
                            in_dr0 = dVar33 * dVar28;
                        }
                        in_dr2 = (double)((u64)uVar18 << 0x20);
                        if (cVar35 == '\0') {
                            fVar24 = (float)((u64)dVar29 >> 0x20) - SUB84(in_dr0, 0);
                            in_dr4 = (double)CONCAT44(fVar24, SUB84(dVar29, 0));
                            bVar34 = 0.0 < fVar24;
                        } else {
                            in_dr4 = dVar29 - in_dr0;
                            bVar34 = in_dr2 < in_dr4;
                        }
                        if (bVar34)
                            goto LAB_8c25280c;
                    }
                    g_8c4aa520 = g_8c4aa520 + uVar3;
                    pdVar9 = (double *)(uVar3 - 1);
                    iStack_38 = 0;
                    pdVar8 = pdVar9;
                    dVar29 = in_xd0;
                    dVar28 = in_xd2;
                    if (0 < (int)pdVar9) {
                        do {
                            uVar27 = SUB84(in_dr2, 0);
                            uVar5 = SUB84(in_dr0, 0);
                            uVar1 = *puVar20;
                            puVar20 = puVar20 + 1;
                            pdVar15 = (double *)((u32)uVar1 * 0x40 + g_8c4aa510);
                            *(u32 *)pdVar15 = 0xe0000000;
                            CacheBlockWriteBack(pdVar15);
                            uVar30 = g_8c4c11b4;
                            if (cVar36 != '\0') {
                                in_xd4 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                                uVar30 = g_8c4c11b0;
                            }
                            uVar4 = float_to_color_u8(pdVar15, pdVar8, ar6_01, puVar14);
                            in_xd2 = in_xd14;
                            dVar29 = in_xd14;
                            dVar33 = in_xd14;
                            if (cVar36 == '\0') {
                                in_xd2 = (double)CONCAT44(uVar7, uVar30);
                                dVar29 = dVar28;
                                uVar27 = uVar7;
                                dVar33 = (double)CONCAT44(uVar7, uVar5);
                            }
                            *(u32 *)(pdVar15 + 5) = uVar4;
                            if (cVar36 == '\0') {
                                dVar28 = (double)CONCAT44(*(u32 *)(pdVar15 + 6), uVar27);
                                pdVar8 = (double *)((int)pdVar15 + 0x34);
                            } else {
                                dVar28 = pdVar15[6];
                                pdVar8 = pdVar15 + 7;
                            }
                            if (cVar35 == '\0') {
                                dVar28 =
                                    (double)(u64)(u32)((float)((u64)dVar33 >> 0x20) * (float)((u64)dVar28 >> 0x20) +
                                                       SUB84(dVar28, 0));
                            }
                            uVar27 = (u32)((u64)in_xd2 >> 0x20);
                            if (cVar36 == '\0') {
                                *(int *)(pdVar15 + 4) = SUB84(dVar28, 0);
                                dVar28 = (double)CONCAT44(*(u32 *)pdVar8, uVar27);
                                in_xd2 = dVar29;
                                dVar29 = (double)CONCAT44(uVar27, SUB84(dVar33, 0));
                            } else {
                                pdVar15[4] = dVar29;
                                dVar28 = *pdVar8;
                                dVar29 = in_xd2;
                            }
                            pdVar17 = (double *)((int)pdVar15 + 0x24);
                            if (cVar35 == '\0') {
                                dVar28 =
                                    (double)(u64)(u32)((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar28 >> 0x20) +
                                                       SUB84(dVar28, 0));
                            }
                            if (cVar36 == '\0') {
                                *(int *)pdVar17 = SUB84(dVar28, 0);
                            } else {
                                *pdVar17 = in_xd2;
                            }
                            CacheBlockWriteBack(pdVar17);
                            if (cVar36 == '\0') {
                                in_dr0 = (double)CONCAT44(*(u32 *)pdVar15, SUB84(dVar29, 0));
                                in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 4), SUB84(dVar28, 0));
                                pdVar15 = pdVar15 + 1;
                            } else {
                                in_dr0 = *pdVar15;
                                in_dr2 = pdVar15[1];
                                pdVar15 = pdVar15 + 2;
                            }
                            if (cVar36 == '\0') {
                                uVar27 = *(u32 *)(pdVar15 + 2);
                                *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar15 + 0x14);
                                *(u32 *)(unaff_r8 + 3) = uVar27;
                                *(int *)((int)unaff_r8 + 0x14) = (int)((u64)in_dr2 >> 0x20);
                                unaff_r8 = unaff_r8 + 2;
                                *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                            } else {
                                dVar29 = pdVar15[2];
                                unaff_r8[3] = pdVar15[3];
                                unaff_r8[2] = dVar29;
                                unaff_r8[1] = in_dr2;
                                *unaff_r8 = in_dr0;
                            }
                            unaff_r8 = unaff_r8 + 4;
                            iStack_38 = iStack_38 + 1;
                            dVar29 = in_xd0;
                            dVar28 = in_xd2;
                        } while (iStack_38 < (int)pdVar9);
                    }
                    uVar30 = SUB84(in_dr2, 0);
                    uVar4 = SUB84(in_dr0, 0);
                    puVar19 = puVar20 + 1;
                    pdVar9 = (double *)((u32)*puVar20 * 0x40 + g_8c4aa510);
                    *(u32 *)pdVar9 = 0xf0000000;
                    CacheBlockWriteBack(pdVar9);
                    uVar5 = g_8c4c11b4;
                    uVar27 = g_8c4c11bc;
                    if (cVar36 != '\0') {
                        in_xd4 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                        uVar5 = g_8c4c11b0;
                        uVar27 = g_8c4c11b8;
                    }
                    uVar6 = float_to_color_u8(pdVar9, pdVar8, ar6_01, puVar14);
                    dVar25 = in_xd14;
                    dVar28 = in_xd14;
                    dVar33 = in_xd14;
                    if (cVar36 == '\0') {
                        dVar25 = (double)CONCAT44(uVar7, uVar5);
                        dVar28 = in_xd2;
                        uVar30 = uVar7;
                        dVar33 = (double)CONCAT44(uVar7, uVar4);
                    }
                    *(u32 *)(pdVar9 + 5) = uVar6;
                    if (cVar36 == '\0') {
                        dVar31 = (double)CONCAT44(*(u32 *)(pdVar9 + 6), uVar30);
                        pdVar8 = (double *)((int)pdVar9 + 0x34);
                    } else {
                        dVar31 = pdVar9[6];
                        pdVar8 = pdVar9 + 7;
                    }
                    if (cVar35 == '\0') {
                        dVar31 = (double)(u64)(u32)((float)((u64)dVar33 >> 0x20) * (float)((u64)dVar31 >> 0x20) +
                                                    SUB84(dVar31, 0));
                    }
                    uVar30 = (u32)((u64)dVar25 >> 0x20);
                    if (cVar36 == '\0') {
                        *(int *)(pdVar9 + 4) = SUB84(dVar31, 0);
                        dVar31 = (double)CONCAT44(*(u32 *)pdVar8, uVar30);
                        in_xd2 = dVar28;
                        dVar28 = (double)CONCAT44(uVar30, SUB84(dVar33, 0));
                    } else {
                        pdVar9[4] = dVar28;
                        dVar31 = *pdVar8;
                        in_xd2 = dVar25;
                        dVar28 = dVar25;
                    }
                    pdVar8 = (double *)((int)pdVar9 + 0x24);
                    if (cVar35 == '\0') {
                        dVar31 = (double)(u64)(u32)((float)((u64)dVar28 >> 0x20) * (float)((u64)dVar31 >> 0x20) +
                                                    SUB84(dVar31, 0));
                    }
                    if (cVar36 == '\0') {
                        *(int *)pdVar8 = SUB84(dVar31, 0);
                    } else {
                        *pdVar8 = in_xd2;
                    }
                    CacheBlockWriteBack(pdVar8);
                    if (cVar36 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar28, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), SUB84(dVar31, 0));
                        pdVar9 = pdVar9 + 1;
                    } else {
                        in_dr0 = *pdVar9;
                        in_dr2 = pdVar9[1];
                        pdVar9 = pdVar9 + 2;
                    }
                    if (cVar36 == '\0') {
                        uVar30 = *(u32 *)(pdVar9 + 2);
                        in_dr4 = (double)CONCAT44(uVar30, SUB84(dVar25, 0));
                        in_dr6 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 0x14), uVar27);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar9 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar30;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)in_dr2 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        in_dr4 = pdVar9[2];
                        in_dr6 = pdVar9[3];
                        unaff_r8[3] = in_dr6;
                        unaff_r8[2] = in_dr4;
                        unaff_r8[1] = in_dr2;
                        *unaff_r8 = in_dr0;
                    }
                    unaff_r8 = unaff_r8 + 4;
                } else {
                    dVar29 = in_xd0;
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        iVar13 = (u32)puVar19[2] * 0x40 + g_8c4aa510;
                        if (cVar36 == '\0') {
                            uVar27 = *(u32 *)(iVar13 + 0x18);
                        } else {
                            in_xd4 = *(double *)(iVar13 + 0x18);
                        }
                        dVar28 = in_xd4;
                        if (cVar36 == '\0') {
                            dVar28 = (double)CONCAT44(uVar27, SUB84(in_dr0, 0));
                        }
                        iVar12 = (u32)*puVar20 * 0x40 + g_8c4aa510;
                        if (cVar36 == '\0') {
                            in_dr6 = (double)CONCAT44(*(u32 *)(iVar13 + 0x14), SUB84(in_dr6, 0));
                            in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), *(u32 *)(iVar12 + 0x14));
                            dVar33 = (double)CONCAT44(*(u32 *)(iVar12 + 0x18), uVar27);
                        } else {
                            in_dr6 = *(double *)(iVar13 + 0x14);
                            dVar33 = *(double *)(iVar12 + 0x18);
                        }
                        uVar27 = (u32)((u64)in_dr6 >> 0x20);
                        dVar25 = in_dr6;
                        if (cVar36 == '\0') {
                            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar27);
                            dVar25 = in_xd2;
                        }
                        fVar24 = (float)((u64)dVar33 >> 0x20);
                        if (cVar35 == '\0') {
                            dVar28 =
                                (double)CONCAT44((float)((u64)dVar28 >> 0x20) * SUB84(in_dr8, 0), SUB84(dVar28, 0));
                            dVar29 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * fVar24);
                        } else {
                            dVar28 = dVar28 * in_dr8;
                            dVar29 = in_dr2 * dVar33;
                        }
                        puVar14 = (u16 *)(g_8c4aa510 + (u32)*puVar14 * 0x40);
                        if (cVar35 == '\0') {
                            dVar28 =
                                (double)CONCAT44((float)((u64)dVar28 >> 0x20) - SUB84(dVar29, 0), SUB84(dVar28, 0));
                        } else {
                            dVar28 = dVar28 - dVar29;
                        }
                        if (cVar36 == '\0') {
                            uVar30 = *(u32 *)(iVar13 + 0x10);
                            in_dr6 = (double)CONCAT44(uVar27, *(u32 *)(iVar12 + 0x10));
                            dVar29 = (double)CONCAT44(SUB84(dVar33, 0), uVar30);
                            in_dr8 = (double)CONCAT44(uVar30, SUB84(in_dr8, 0));
                        } else {
                            dVar25 = *(double *)(iVar13 + 0x10);
                            uVar30 = (u32)((u64)dVar25 >> 0x20);
                            dVar29 = in_xd4;
                            in_dr8 = dVar25;
                        }
                        if (cVar35 == '\0') {
                            dVar31 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * SUB84(in_dr6, 0),
                                                      SUB84(dVar29, 0) * fVar24);
                        } else {
                            dVar31 = dVar29 * dVar33 * in_dr6;
                        }
                        dVar29 = in_dr6;
                        dVar26 = in_dr8;
                        if (cVar36 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), (int)((u64)in_dr6 >> 0x20));
                            dVar29 = in_xd0;
                            dVar26 = (double)CONCAT44(uVar30, SUB84(in_dr12, 0));
                        }
                        if (cVar35 == '\0') {
                            in_dr12 =
                                (double)CONCAT44((float)((u64)dVar26 >> 0x20) * SUB84(in_dr8, 0), SUB84(dVar26, 0));
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) * SUB84(in_dr6, 0));
                            fVar24 = SUB84(dVar31, 0) - (float)((u64)dVar31 >> 0x20);
                        } else {
                            in_dr12 = dVar26 * in_dr8;
                            dVar28 = dVar28 * in_dr6;
                            fVar24 = SUB84(dVar31 - dVar31, 0);
                        }
                        if (cVar36 == '\0') {
                            dVar31 = (double)CONCAT44(*(u32 *)(puVar14 + 10), fVar24);
                        } else {
                            dVar31 = *(double *)(puVar14 + 10);
                        }
                        if (cVar35 == '\0') {
                            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20),
                                                      SUB84(dVar28, 0) - (float)((u64)in_dr12 >> 0x20));
                            dVar31 =
                                (double)CONCAT44((float)((u64)dVar31 >> 0x20) * SUB84(dVar31, 0), SUB84(dVar31, 0));
                        } else {
                            dVar28 = dVar28 - in_dr12;
                            dVar31 = dVar31 * dVar31;
                        }
                        if (cVar36 == '\0') {
                            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), *(u32 *)(puVar14 + 8));
                        } else {
                            dVar25 = *(double *)(puVar14 + 8);
                        }
                        if (cVar35 == '\0') {
                            dVar31 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * SUB84(dVar31, 0) +
                                                          (float)((u64)dVar31 >> 0x20),
                                                      SUB84(dVar31, 0));
                        }
                        if (cVar36 == '\0') {
                            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), *(u32 *)(puVar14 + 0xc));
                            in_dr0 = (double)CONCAT44(SUB84(dVar28, 0), SUB84(dVar28, 0));
                            in_xd2 = dVar25;
                        } else {
                            in_xd2 = *(double *)(puVar14 + 0xc);
                            in_dr0 = dVar29;
                        }
                        if (cVar35 == '\0') {
                            dVar31 = (double)((u64)(u32)((float)((u64)in_dr0 >> 0x20) * SUB84(dVar31, 0) +
                                                         (float)((u64)dVar31 >> 0x20))
                                              << 0x20);
                        }
                        in_dr2 = (double)((u64)dVar31 & 0xffffffff00000000);
                        in_dr4 = in_dr2;
                        if (cVar36 == '\0') {
                            in_dr4 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar33, 0));
                        }
                        if (cVar35 == '\0') {
                            bVar34 = 0.0 < (float)((u64)in_dr4 >> 0x20);
                        } else {
                            bVar34 = in_dr2 < in_dr4;
                        }
                        in_xd0 = dVar29;
                        if (bVar34)
                            goto LAB_8c25280c;
                    }
                    puVar21 = puVar19 + 2;
                    puVar19 = puVar19 + 3;
                    iStack_34 = 0;
                    ar4_00 = (u32 *)((u32)*puVar20 * 0x40 + g_8c4aa510);
                    ar5_00 = (u32 *)((u32)*puVar21 * 0x40 + g_8c4aa510);
                    if (0 < (int)(uVar3 - 2)) {
                        do {
                            uVar1 = *puVar19;
                            puVar19 = puVar19 + 1;
                            ar6_00 = (u32 *)((u32)uVar1 * 0x40 + g_8c4aa510);
                            if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                                gfxlib_uses_float_to_color_u8_23e4c8(ar4_00, ar5_00, ar6_00, puVar14);
                            }
                            iStack_34 = iStack_34 + 1;
                            ar4_00 = ar5_00;
                            ar5_00 = ar6_00;
                        } while (iStack_34 < (int)(uVar3 - 2));
                    }
                }
            } else {
            LAB_8c25280c:
                puVar19 = puVar20 + uVar3;
                dVar29 = in_xd0;
            }
            iVar16 = iVar16 + 1;
            in_xd0 = dVar29;
        }
    } else if (uVar3 == 0xc000) {
        if ((g_8c4ab318 & 1) == 0) {
            UNRECOVERED_JUMPTABLE = gfxlib_uses_float_to_color_u8_246b7a;
        } else {
            UNRECOVERED_JUMPTABLE = gfxlib_uses_float_to_color_u8_246756;
        }
        /* WARNING: Could not recover jumptable at 0x8c2528b0. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE)(a0, (u16)iStack_38);
        return uVar7;
    }
    return uVar3;
}

/*
 * gfxlib_fill_loop_2528e8  0x8c2528e8
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: ninja_uses_ta_fifo_2536a8
 * decompiler: Heritage AFTER dead removal. Example location: r0x8c4c11b4 : 0x8c252a54
 */
u32 gfxlib_fill_loop_2528e8(u16 *a0) {
    u16 uVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 *puVar4;
    int iVar5;
    code *UNRECOVERED_JUMPTABLE;
    u32 *puVar6;
    u32 *puVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int unaff_r8;
    u16 *puVar11;
    u16 *puVar12;
    u32 uVar13;
    u32 uVar14;
    float fVar15;
    u32 uVar16;
    float fVar17;
    int iStack_2c;
    int iStack_24;
    int iStack_1c;

    uVar1 = *a0;
    uVar2 = uVar1 & 0xc000;
    puVar11 = *(u16 **)(a0 + 2);
    if ((uVar1 & 0xc000) == 0) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 3;
        for (iStack_24 = 0; uVar2 = (u32)a0[1], iStack_24 < (int)uVar2; iStack_24 = iStack_24 + 1) {
            puVar6 = (u32 *)((u32)*puVar11 * 0x40 + g_8c4aa510);
            puVar12 = puVar11 + 2;
            puVar4 = (u32 *)((u32)puVar11[1] * 0x40 + g_8c4aa510);
            puVar11 = puVar11 + 3;
            puVar3 = (u32 *)((u32)*puVar12 * 0x40 + g_8c4aa510);
            if (((g_8c4ab308 & 0x800000) != 0) ||
                (((float)puVar4[1] - (float)puVar6[1]) * ((float)puVar3[2] - (float)puVar4[2]) -
                     ((float)puVar4[2] - (float)puVar6[2]) * ((float)puVar3[1] - (float)puVar4[1]) <=
                 0.0)) {
                *puVar6 = 0xe0000000;
                CacheBlockWriteBack(puVar6);
                puVar6[8] = g_8c4c11b0;
                puVar6[9] = g_8c4c11b4;
                puVar6[10] = g_8c4c11b8;
                puVar6[0xb] = g_8c4c11bc;
                CacheBlockWriteBack(puVar6 + 0xb);
                uVar13 = *puVar6;
                uVar14 = puVar6[1];
                uVar16 = puVar6[6];
                *(u32 *)(unaff_r8 + 0x1c) = puVar6[7];
                *(u32 *)(unaff_r8 + 0x18) = uVar16;
                *(u32 *)(unaff_r8 + 0x14) = uVar14;
                *(u32 *)(unaff_r8 + 0x10) = uVar13;
                *puVar4 = 0xe0000000;
                CacheBlockWriteBack(puVar4);
                puVar4[8] = g_8c4c11b0;
                puVar4[9] = g_8c4c11b4;
                puVar4[10] = g_8c4c11b8;
                puVar4[0xb] = g_8c4c11bc;
                CacheBlockWriteBack(puVar4 + 0xb);
                uVar13 = *puVar4;
                uVar14 = puVar4[1];
                uVar16 = puVar4[6];
                *(u32 *)(unaff_r8 + 0x4c) = puVar4[7];
                *(u32 *)(unaff_r8 + 0x48) = uVar16;
                *(u32 *)(unaff_r8 + 0x44) = uVar14;
                *(u32 *)(unaff_r8 + 0x40) = uVar13;
                *puVar3 = 0xf0000000;
                CacheBlockWriteBack(puVar3);
                puVar3[8] = g_8c4c11b0;
                puVar3[9] = g_8c4c11b4;
                puVar3[10] = g_8c4c11b8;
                puVar3[0xb] = g_8c4c11bc;
                CacheBlockWriteBack(puVar3 + 0xb);
                uVar13 = *puVar3;
                uVar14 = puVar3[1];
                uVar16 = puVar3[6];
                *(u32 *)(unaff_r8 + 0x7c) = puVar3[7];
                *(u32 *)(unaff_r8 + 0x78) = uVar16;
                *(u32 *)(unaff_r8 + 0x74) = uVar14;
                *(u32 *)(unaff_r8 + 0x70) = uVar13;
                unaff_r8 = unaff_r8 + 0x90;
                g_8c4aa520 = g_8c4aa520 + 3;
            }
        }
    } else if (uVar2 == 0x4000) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 4;
        for (iStack_1c = 0; uVar2 = (u32)a0[1], iStack_1c < (int)uVar2; iStack_1c = iStack_1c + 1) {
            puVar6 = (u32 *)((u32)*puVar11 * 0x40 + g_8c4aa510);
            puVar4 = (u32 *)((u32)puVar11[1] * 0x40 + g_8c4aa510);
            puVar12 = puVar11 + 3;
            puVar3 = (u32 *)((u32)puVar11[2] * 0x40 + g_8c4aa510);
            puVar11 = puVar11 + 4;
            puVar7 = (u32 *)((u32)*puVar12 * 0x40 + g_8c4aa510);
            if (((g_8c4ab308 & 0x800000) != 0) ||
                (((float)puVar4[1] - (float)puVar6[1]) * ((float)puVar3[2] - (float)puVar4[2]) -
                     ((float)puVar4[2] - (float)puVar6[2]) * ((float)puVar3[1] - (float)puVar4[1]) <=
                 0.0)) {
                *puVar6 = 0xe0000000;
                CacheBlockWriteBack(puVar6);
                puVar6[8] = g_8c4c11b0;
                puVar6[9] = g_8c4c11b4;
                puVar6[10] = g_8c4c11b8;
                puVar6[0xb] = g_8c4c11bc;
                CacheBlockWriteBack(puVar6 + 0xb);
                uVar13 = *puVar6;
                uVar14 = puVar6[1];
                uVar16 = puVar6[6];
                *(u32 *)(unaff_r8 + 0x1c) = puVar6[7];
                *(u32 *)(unaff_r8 + 0x18) = uVar16;
                *(u32 *)(unaff_r8 + 0x14) = uVar14;
                *(u32 *)(unaff_r8 + 0x10) = uVar13;
                *puVar4 = 0xe0000000;
                CacheBlockWriteBack(puVar4);
                puVar4[8] = g_8c4c11b0;
                puVar4[9] = g_8c4c11b4;
                puVar4[10] = g_8c4c11b8;
                puVar4[0xb] = g_8c4c11bc;
                CacheBlockWriteBack(puVar4 + 0xb);
                uVar13 = *puVar4;
                uVar14 = puVar4[1];
                uVar16 = puVar4[6];
                *(u32 *)(unaff_r8 + 0x4c) = puVar4[7];
                *(u32 *)(unaff_r8 + 0x48) = uVar16;
                *(u32 *)(unaff_r8 + 0x44) = uVar14;
                *(u32 *)(unaff_r8 + 0x40) = uVar13;
                *puVar3 = 0xe0000000;
                CacheBlockWriteBack(puVar3);
                puVar3[8] = g_8c4c11b0;
                puVar3[9] = g_8c4c11b4;
                puVar3[10] = g_8c4c11b8;
                puVar3[0xb] = g_8c4c11bc;
                CacheBlockWriteBack(puVar3 + 0xb);
                uVar13 = *puVar3;
                uVar14 = puVar3[1];
                uVar16 = puVar3[6];
                *(u32 *)(unaff_r8 + 0x7c) = puVar3[7];
                *(u32 *)(unaff_r8 + 0x78) = uVar16;
                *(u32 *)(unaff_r8 + 0x74) = uVar14;
                *(u32 *)(unaff_r8 + 0x70) = uVar13;
                *puVar7 = 0xf0000000;
                CacheBlockWriteBack(puVar7);
                puVar7[8] = g_8c4c11b0;
                puVar7[9] = g_8c4c11b4;
                puVar7[10] = g_8c4c11b8;
                puVar7[0xb] = g_8c4c11bc;
                CacheBlockWriteBack(puVar7 + 0xb);
                uVar13 = *puVar7;
                uVar14 = puVar7[1];
                uVar16 = puVar7[6];
                *(u32 *)(unaff_r8 + 0xac) = puVar7[7];
                *(u32 *)(unaff_r8 + 0xa8) = uVar16;
                *(u32 *)(unaff_r8 + 0xa4) = uVar14;
                *(u32 *)(unaff_r8 + 0xa0) = uVar13;
                unaff_r8 = unaff_r8 + 0xc0;
                g_8c4aa520 = g_8c4aa520 + 4;
            }
        }
    } else if (uVar2 == 0x8000) {
        for (iVar5 = 0; uVar2 = (u32)a0[1], iVar5 < (int)uVar2; iVar5 = iVar5 + 1) {
            puVar12 = puVar11 + 1;
            uVar2 = (u32)*puVar11;
            g_8c4aa51c = g_8c4aa51c + uVar2;
            if (((g_8c4ab308 & 0x800000) != 0) ||
                (iVar10 = (u32)puVar11[2] * 0x40 + g_8c4aa510, iVar9 = (u32)*puVar12 * 0x40 + g_8c4aa510,
                 iVar8 = g_8c4aa510 + (u32)puVar11[3] * 0x40, fVar17 = *(float *)(iVar10 + 4),
                 fVar15 = *(float *)(iVar10 + 8),
                 (fVar17 - *(float *)(iVar9 + 4)) * (*(float *)(iVar8 + 8) - fVar15) -
                         (fVar15 - *(float *)(iVar9 + 8)) * (*(float *)(iVar8 + 4) - fVar17) <=
                     0.0)) {
                g_8c4aa520 = g_8c4aa520 + uVar2;
                iStack_2c = 0;
                if (0 < (int)(uVar2 - 1)) {
                    do {
                        uVar1 = *puVar12;
                        puVar12 = puVar12 + 1;
                        puVar3 = (u32 *)((u32)uVar1 * 0x40 + g_8c4aa510);
                        *puVar3 = 0xe0000000;
                        CacheBlockWriteBack(puVar3);
                        puVar3[8] = g_8c4c11b0;
                        puVar3[9] = g_8c4c11b4;
                        puVar3[10] = g_8c4c11b8;
                        puVar3[0xb] = g_8c4c11bc;
                        CacheBlockWriteBack(puVar3 + 0xb);
                        uVar13 = *puVar3;
                        uVar14 = puVar3[1];
                        uVar16 = puVar3[6];
                        *(u32 *)(unaff_r8 + 0x1c) = puVar3[7];
                        *(u32 *)(unaff_r8 + 0x18) = uVar16;
                        *(u32 *)(unaff_r8 + 0x14) = uVar14;
                        *(u32 *)(unaff_r8 + 0x10) = uVar13;
                        unaff_r8 = unaff_r8 + 0x30;
                        iStack_2c = iStack_2c + 1;
                    } while (iStack_2c < (int)(uVar2 - 1));
                }
                puVar11 = puVar12 + 1;
                puVar3 = (u32 *)((u32)*puVar12 * 0x40 + g_8c4aa510);
                *puVar3 = 0xf0000000;
                CacheBlockWriteBack(puVar3);
                puVar3[8] = g_8c4c11b0;
                puVar3[9] = g_8c4c11b4;
                puVar3[10] = g_8c4c11b8;
                puVar3[0xb] = g_8c4c11bc;
                CacheBlockWriteBack(puVar3 + 0xb);
                uVar13 = *puVar3;
                uVar14 = puVar3[1];
                uVar16 = puVar3[6];
                *(u32 *)(unaff_r8 + 0x1c) = puVar3[7];
                *(u32 *)(unaff_r8 + 0x18) = uVar16;
                *(u32 *)(unaff_r8 + 0x14) = uVar14;
                *(u32 *)(unaff_r8 + 0x10) = uVar13;
                unaff_r8 = unaff_r8 + 0x30;
            } else {
                puVar11 = puVar12 + uVar2;
            }
        }
    } else if (uVar2 == 0xc000) {
        if ((g_8c4ab308 & 0x800000) == 0) {
            UNRECOVERED_JUMPTABLE = (code *)&LAB_8c242234;
        } else {
            UNRECOVERED_JUMPTABLE = gfxlib_uses_noop_2420fe;
        }
        /* WARNING: Could not recover jumptable at 0x8c252e56. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar13 = (*UNRECOVERED_JUMPTABLE)(a0, uVar1 & 0x3fff);
        return uVar13;
    }
    return uVar2;
}

/*
 * gfxlib_calls_fill_loop_252e7c  0x8c252e7c
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: fill_loop
 * called by: ninja_uses_ta_fifo_2536a8
 */
u32 gfxlib_calls_fill_loop_252e7c(u16 *a0) {
    u16 uVar1;
    u32 uVar2;
    code *UNRECOVERED_JUMPTABLE;
    double *pdVar3;
    double *pdVar4;
    u32 uVar5;
    u32 *ar6_00;
    u16 *puVar6;
    int iVar7;
    u32 *ar4_00;
    u32 uVar8;
    int iVar9;
    int iVar10;
    double *unaff_r8;
    double *pdVar11;
    int iVar12;
    double *pdVar13;
    u32 uVar14;
    u32 *ar5_00;
    u16 *puVar15;
    u16 *puVar16;
    double in_dr0;
    float fVar17;
    float fVar18;
    double in_dr2;
    u64 uVar19;
    double dVar20;
    double dVar21;
    double in_dr4;
    float fVar23;
    u32 uVar24;
    double dVar22;
    u32 uVar25;
    double in_dr6;
    double dVar26;
    double in_dr8;
    double in_dr12;
    double dVar28;
    double in_xd0;
    double in_xd4;
    double in_xd6;
    double dVar29;
    double in_xd8;
    bool bVar30;
    char cVar31;
    char cVar32;
    int iStack_34;
    int iStack_30;
    int iStack_28;
    u32 uVar27;

    cVar32 = '\0';
    cVar31 = '\0';
    uVar1 = *a0;
    iStack_30._0_2_ = uVar1 & 0x3fff;
    uVar2 = uVar1 & 0xc000;
    puVar15 = *(u16 **)(a0 + 2);
    if ((uVar1 & 0xc000) == 0) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 3;
        iStack_30 = 0;
        while (true) {
            uVar24 = SUB84(in_dr4, 0);
            uVar2 = (u32)a0[1];
            if ((int)uVar2 <= iStack_30)
                break;
            puVar6 = puVar15 + 1;
            pdVar3 = (double *)((u32)*puVar15 * 0x40 + g_8c4aa510);
            puVar16 = puVar15 + 2;
            puVar15 = puVar15 + 3;
            pdVar13 = (double *)((u32)*puVar16 * 0x40 + g_8c4aa510);
            pdVar4 = (double *)((u32)*puVar6 * 0x40 + g_8c4aa510);
            if ((*(u32 *)pdVar3 & *(u32 *)pdVar4 & *(u32 *)pdVar13 & 0x3f) == 0) {
                if (((*(u32 *)pdVar3 | *(u32 *)pdVar4 | *(u32 *)pdVar13) & 1) == 0) {
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        if (cVar32 == '\0') {
                            uVar24 = *(u32 *)((int)pdVar4 + 4);
                            dVar26 = (double)CONCAT44(uVar24, *(u32 *)((int)pdVar3 + 4));
                        } else {
                            dVar26 = *(double *)((int)pdVar4 + 4);
                        }
                        if (cVar31 == '\0') {
                            dVar26 =
                                (double)CONCAT44((float)((u64)dVar26 >> 0x20) - SUB84(dVar26, 0), SUB84(dVar26, 0));
                        } else {
                            dVar26 = dVar26 - dVar26;
                        }
                        if (cVar32 == '\0') {
                            dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)(pdVar13 + 1));
                            dVar22 = (double)CONCAT44(*(u32 *)(pdVar4 + 1), uVar24);
                        } else {
                            dVar22 = pdVar4[1];
                        }
                        fVar23 = (float)((u64)dVar22 >> 0x20);
                        if (cVar31 == '\0') {
                            dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) - fVar23);
                        } else {
                            dVar26 = dVar26 - dVar22;
                        }
                        dVar29 = dVar22;
                        if (cVar32 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar23);
                            dVar29 = in_xd0;
                        }
                        in_xd0 = dVar29;
                        if (cVar31 == '\0') {
                            dVar26 =
                                (double)CONCAT44((float)((u64)dVar26 >> 0x20) * SUB84(dVar26, 0), SUB84(dVar26, 0));
                        } else {
                            dVar26 = dVar26 * dVar26;
                        }
                        if (cVar32 == '\0') {
                            dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)(pdVar3 + 1));
                        }
                        if (cVar31 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar26, 0));
                        } else {
                            dVar29 = in_dr0 - dVar26;
                        }
                        if (cVar32 == '\0') {
                            dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)((int)pdVar13 + 4));
                        }
                        if (cVar31 == '\0') {
                            dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) - SUB84(dVar22, 0));
                        } else {
                            dVar26 = dVar26 - dVar22;
                        }
                        uVar2 = (u32)((u64)dVar26 >> 0x20);
                        dVar21 = dVar26;
                        if (cVar32 == '\0') {
                            dVar21 = (double)CONCAT44(uVar2, SUB84(dVar22, 0));
                        }
                        if (cVar31 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) * SUB84(dVar26, 0));
                        } else {
                            in_dr0 = dVar29 * dVar26;
                        }
                        in_dr2 = (double)((u64)uVar2 << 0x20);
                        if (cVar31 == '\0') {
                            fVar23 = (float)((u64)dVar21 >> 0x20) - SUB84(in_dr0, 0);
                            in_dr4 = (double)CONCAT44(fVar23, SUB84(dVar21, 0));
                            bVar30 = 0.0 < fVar23;
                        } else {
                            in_dr4 = dVar21 - in_dr0;
                            bVar30 = in_dr2 < in_dr4;
                        }
                        uVar24 = SUB84(in_dr4, 0);
                        if (bVar30)
                            goto LAB_8c2530dc;
                    }
                    *(u32 *)pdVar3 = 0xe0000000;
                    CacheBlockWriteBack(pdVar3);
                    if (cVar32 == '\0') {
                        *(u32 *)(pdVar3 + 4) = g_8c4c11b0;
                        *(u32 *)((int)pdVar3 + 0x24) = g_8c4c11b4;
                        uVar25 = g_8c4c11b8;
                        *(u32 *)(pdVar3 + 5) = g_8c4c11b8;
                        uVar19 = CONCAT44(g_8c4c11bc, uVar25);
                        *(u32 *)((int)pdVar3 + 0x2c) = g_8c4c11bc;
                    } else {
                        pdVar3[4] = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                        *(u64 *)((int)pdVar3 + 0x24) = CONCAT44(g_8c4c11bc, g_8c4c11b8);
                        pdVar3[5] = g_8c4c11c0;
                        uVar19 = g_8c4c11c8;
                        *(u64 *)((int)pdVar3 + 0x2c) = g_8c4c11c8;
                    }
                    CacheBlockWriteBack((u32 *)((int)pdVar3 + 0x2c));
                    if (cVar32 == '\0') {
                        dVar26 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(in_dr0, 0));
                        dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar3 + 4), (int)uVar19);
                        pdVar3 = pdVar3 + 1;
                    } else {
                        dVar26 = *pdVar3;
                        dVar22 = pdVar3[1];
                        pdVar3 = pdVar3 + 2;
                    }
                    if (cVar32 == '\0') {
                        uVar25 = *(u32 *)(pdVar3 + 2);
                        dVar29 = (double)CONCAT44(uVar25, uVar24);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar3 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar25;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar22 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)dVar26 >> 0x20);
                    } else {
                        dVar29 = pdVar3[2];
                        unaff_r8[3] = pdVar3[3];
                        unaff_r8[2] = dVar29;
                        unaff_r8[1] = dVar22;
                        *unaff_r8 = dVar26;
                    }
                    *(u32 *)pdVar4 = 0xe0000000;
                    CacheBlockWriteBack(pdVar4);
                    if (cVar32 == '\0') {
                        *(u32 *)(pdVar4 + 4) = g_8c4c11b0;
                        *(u32 *)((int)pdVar4 + 0x24) = g_8c4c11b4;
                        uVar24 = g_8c4c11b8;
                        *(u32 *)(pdVar4 + 5) = g_8c4c11b8;
                        uVar19 = CONCAT44(g_8c4c11bc, uVar24);
                        *(u32 *)((int)pdVar4 + 0x2c) = g_8c4c11bc;
                    } else {
                        pdVar4[4] = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                        *(u64 *)((int)pdVar4 + 0x24) = CONCAT44(g_8c4c11bc, g_8c4c11b8);
                        pdVar4[5] = g_8c4c11c0;
                        uVar19 = g_8c4c11c8;
                        *(u64 *)((int)pdVar4 + 0x2c) = g_8c4c11c8;
                    }
                    CacheBlockWriteBack((u32 *)((int)pdVar4 + 0x2c));
                    if (cVar32 == '\0') {
                        dVar26 = (double)CONCAT44(*(u32 *)pdVar4, SUB84(dVar26, 0));
                        dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar4 + 4), (int)uVar19);
                        pdVar4 = pdVar4 + 1;
                    } else {
                        dVar26 = *pdVar4;
                        dVar22 = pdVar4[1];
                        pdVar4 = pdVar4 + 2;
                    }
                    if (cVar32 == '\0') {
                        uVar24 = *(u32 *)(pdVar4 + 2);
                        dVar29 = (double)CONCAT44(uVar24, SUB84(dVar29, 0));
                        *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar4 + 0x14);
                        *(u32 *)(unaff_r8 + 7) = uVar24;
                        *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar22 >> 0x20);
                        pdVar3 = unaff_r8 + 6;
                        *(int *)pdVar3 = (int)((u64)dVar26 >> 0x20);
                    } else {
                        dVar29 = pdVar4[2];
                        unaff_r8[7] = pdVar4[3];
                        unaff_r8[6] = dVar29;
                        unaff_r8[5] = dVar22;
                        pdVar3 = unaff_r8 + 4;
                        *pdVar3 = dVar26;
                    }
                    *(u32 *)pdVar13 = 0xf0000000;
                    CacheBlockWriteBack(pdVar13);
                    if (cVar32 == '\0') {
                        *(u32 *)(pdVar13 + 4) = g_8c4c11b0;
                        *(u32 *)((int)pdVar13 + 0x24) = g_8c4c11b4;
                        uVar24 = g_8c4c11b8;
                        *(u32 *)(pdVar13 + 5) = g_8c4c11b8;
                        uVar19 = CONCAT44(g_8c4c11bc, uVar24);
                        *(u32 *)((int)pdVar13 + 0x2c) = g_8c4c11bc;
                    } else {
                        pdVar13[4] = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                        *(u64 *)((int)pdVar13 + 0x24) = CONCAT44(g_8c4c11bc, g_8c4c11b8);
                        pdVar13[5] = g_8c4c11c0;
                        uVar19 = g_8c4c11c8;
                        *(u64 *)((int)pdVar13 + 0x2c) = g_8c4c11c8;
                    }
                    CacheBlockWriteBack((u32 *)((int)pdVar13 + 0x2c));
                    if (cVar32 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar13, SUB84(dVar26, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar13 + 4), (int)uVar19);
                        pdVar13 = pdVar13 + 1;
                    } else {
                        in_dr0 = *pdVar13;
                        in_dr2 = pdVar13[1];
                        pdVar13 = pdVar13 + 2;
                    }
                    if (cVar32 == '\0') {
                        uVar24 = *(u32 *)(pdVar13 + 2);
                        in_dr4 = (double)CONCAT44(uVar24, SUB84(dVar29, 0));
                        *(u32 *)((int)pdVar3 + 0x3c) = *(u32 *)((int)pdVar13 + 0x14);
                        *(u32 *)(pdVar3 + 7) = uVar24;
                        *(int *)((int)pdVar3 + 0x34) = (int)((u64)in_dr2 >> 0x20);
                        pdVar3 = pdVar3 + 6;
                        *(int *)pdVar3 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        in_dr4 = pdVar13[2];
                        pdVar3[7] = pdVar13[3];
                        pdVar3[6] = in_dr4;
                        pdVar3[5] = in_dr2;
                        pdVar3 = pdVar3 + 4;
                        *pdVar3 = in_dr0;
                    }
                    unaff_r8 = pdVar3 + 4;
                    g_8c4aa520 = g_8c4aa520 + 3;
                } else {
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        if (cVar32 == '\0') {
                            uVar24 = *(u32 *)(pdVar4 + 3);
                            uVar25 = *(u32 *)((int)pdVar4 + 0x14);
                            dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar3 + 0x14), uVar24);
                            dVar26 = (double)CONCAT44(uVar25, *(u32 *)(pdVar3 + 3));
                            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar25);
                            dVar29 = (double)CONCAT44(uVar24, SUB84(in_dr0, 0));
                        } else {
                            dVar29 = pdVar4[3];
                            dVar26 = *(double *)((int)pdVar4 + 0x14);
                            dVar22 = *(double *)((int)pdVar3 + 0x14);
                            uVar25 = (u32)((u64)dVar26 >> 0x20);
                            uVar24 = SUB84(dVar22, 0);
                            in_xd8 = dVar29;
                        }
                        fVar23 = SUB84(dVar26, 0);
                        fVar18 = (float)((u64)dVar22 >> 0x20);
                        if (cVar31 == '\0') {
                            fVar17 = SUB84(in_dr2, 0) * fVar23;
                            dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * fVar18, SUB84(dVar29, 0));
                        } else {
                            fVar17 = SUB84(in_dr2 * dVar26, 0);
                            dVar29 = dVar29 * dVar22;
                        }
                        if (cVar32 == '\0') {
                            dVar21 = (double)CONCAT44(*(u32 *)(pdVar3 + 2), *(u32 *)(pdVar4 + 2));
                            dVar20 = (double)CONCAT44(uVar24, fVar17);
                        } else {
                            in_xd6 = pdVar4[2];
                            dVar21 = pdVar3[2];
                            dVar20 = in_xd8;
                        }
                        fVar17 = (float)((u64)dVar21 >> 0x20);
                        if (cVar31 == '\0') {
                            dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * fVar17, SUB84(dVar20, 0));
                        } else {
                            dVar20 = dVar20 * dVar21;
                        }
                        dVar28 = in_xd6;
                        if (cVar32 == '\0') {
                            dVar28 = (double)CONCAT44(SUB84(dVar21, 0), SUB84(in_dr12, 0));
                        }
                        if (cVar31 == '\0') {
                            dVar29 =
                                (double)CONCAT44((float)((u64)dVar29 >> 0x20) - SUB84(dVar20, 0), SUB84(dVar29, 0));
                        } else {
                            dVar29 = dVar29 - dVar20;
                        }
                        if (cVar32 == '\0') {
                            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar21, 0));
                        }
                        if (cVar31 == '\0') {
                            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) * fVar23);
                        } else {
                            dVar20 = dVar20 * dVar26;
                        }
                        if (cVar32 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar25);
                            dVar26 = in_xd0;
                        }
                        if (cVar31 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) * fVar17);
                            in_dr12 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * fVar18, SUB84(dVar28, 0));
                            fVar18 = SUB84(dVar20, 0) - (float)((u64)dVar20 >> 0x20);
                        } else {
                            dVar29 = dVar29 * dVar21;
                            in_dr12 = dVar28 * dVar22;
                            fVar18 = SUB84(dVar20 - dVar20, 0);
                        }
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar13 + 0x14), fVar18);
                        } else {
                            dVar22 = *(double *)((int)pdVar13 + 0x14);
                        }
                        if (cVar31 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20),
                                                      SUB84(dVar29, 0) - (float)((u64)in_dr12 >> 0x20));
                            dVar22 =
                                (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar22, 0), SUB84(dVar22, 0));
                        } else {
                            dVar29 = dVar29 - in_dr12;
                            dVar22 = dVar22 * dVar22;
                        }
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar13 + 2));
                        }
                        if (cVar31 == '\0') {
                            dVar22 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * SUB84(dVar22, 0) +
                                                          (float)((u64)dVar22 >> 0x20),
                                                      SUB84(dVar22, 0));
                        }
                        in_dr0 = dVar26;
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar13 + 3));
                            in_dr0 = (double)CONCAT44(SUB84(dVar29, 0), SUB84(dVar29, 0));
                        }
                        if (cVar31 == '\0') {
                            dVar22 = (double)((u64)(u32)((float)((u64)in_dr0 >> 0x20) * SUB84(dVar22, 0) +
                                                         (float)((u64)dVar22 >> 0x20))
                                              << 0x20);
                        }
                        in_dr2 = (double)((u64)dVar22 & 0xffffffff00000000);
                        in_dr4 = in_dr2;
                        if (cVar32 == '\0') {
                            in_dr4 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar23);
                        }
                        if (cVar31 == '\0') {
                            bVar30 = 0.0 < (float)((u64)in_dr4 >> 0x20);
                        } else {
                            bVar30 = in_dr2 < in_dr4;
                        }
                        in_xd0 = dVar26;
                        if (bVar30)
                            goto LAB_8c2530dc;
                    }
                    gfxlib_fill_loop_23eb44(pdVar3, pdVar4, pdVar13);
                }
            }
        LAB_8c2530dc:
            iStack_30 = iStack_30 + 1;
        }
    } else if (uVar2 == 0x4000) {
        g_8c4aa51c = g_8c4aa51c + (u32)a0[1] * 4;
        iStack_28 = 0;
        while (true) {
            uVar24 = SUB84(in_dr4, 0);
            uVar2 = (u32)a0[1];
            if ((int)uVar2 <= iStack_28)
                break;
            pdVar4 = (double *)((u32)*puVar15 * 0x40 + g_8c4aa510);
            puVar6 = puVar15 + 3;
            pdVar13 = (double *)((u32)puVar15[1] * 0x40 + g_8c4aa510);
            pdVar11 = (double *)((u32)puVar15[2] * 0x40 + g_8c4aa510);
            puVar15 = puVar15 + 4;
            pdVar3 = (double *)((u32)*puVar6 * 0x40 + g_8c4aa510);
            if ((*(u32 *)pdVar4 & *(u32 *)pdVar13 & *(u32 *)pdVar11 & *(u32 *)pdVar3 & 0x3f) == 0) {
                if (((*(u32 *)pdVar4 | *(u32 *)pdVar13 | *(u32 *)pdVar11 | *(u32 *)pdVar3) & 1) == 0) {
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        if (cVar32 == '\0') {
                            uVar25 = *(u32 *)((int)pdVar13 + 4);
                            dVar22 = (double)CONCAT44(uVar25, *(u32 *)((int)pdVar4 + 4));
                            dVar26 = (double)CONCAT44(uVar25, uVar24);
                        } else {
                            dVar22 = *(double *)((int)pdVar13 + 4);
                            uVar25 = (u32)((u64)dVar22 >> 0x20);
                            dVar26 = dVar22;
                        }
                        if (cVar31 == '\0') {
                            dVar22 =
                                (double)CONCAT44((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar22, 0));
                        } else {
                            dVar22 = dVar22 - dVar22;
                        }
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar11 + 1));
                            dVar26 = (double)CONCAT44(uVar25, *(u32 *)(pdVar13 + 1));
                        } else {
                            in_xd4 = pdVar13[1];
                        }
                        fVar23 = SUB84(dVar26, 0);
                        if (cVar31 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - fVar23);
                        } else {
                            dVar22 = dVar22 - dVar26;
                        }
                        dVar29 = in_xd4;
                        if (cVar32 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar23);
                            dVar29 = in_xd0;
                        }
                        in_xd0 = dVar29;
                        if (cVar31 == '\0') {
                            dVar22 =
                                (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar22, 0), SUB84(dVar22, 0));
                        } else {
                            dVar22 = dVar22 * dVar22;
                        }
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar4 + 1));
                        }
                        if (cVar31 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar22, 0));
                        } else {
                            dVar29 = in_dr0 - dVar22;
                        }
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)((int)pdVar11 + 4));
                        }
                        if (cVar31 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20),
                                                      SUB84(dVar22, 0) - (float)((u64)dVar26 >> 0x20));
                        } else {
                            dVar22 = dVar22 - dVar26;
                        }
                        uVar2 = (u32)((u64)dVar22 >> 0x20);
                        dVar26 = dVar22;
                        if (cVar32 == '\0') {
                            dVar26 = (double)CONCAT44(uVar2, fVar23);
                        }
                        if (cVar31 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) * SUB84(dVar22, 0));
                        } else {
                            in_dr0 = dVar29 * dVar22;
                        }
                        in_dr2 = (double)((u64)uVar2 << 0x20);
                        if (cVar31 == '\0') {
                            fVar23 = (float)((u64)dVar26 >> 0x20) - SUB84(in_dr0, 0);
                            in_dr4 = (double)CONCAT44(fVar23, SUB84(dVar26, 0));
                            bVar30 = 0.0 < fVar23;
                        } else {
                            in_dr4 = dVar26 - in_dr0;
                            bVar30 = in_dr2 < in_dr4;
                        }
                        uVar24 = SUB84(in_dr4, 0);
                        if (bVar30)
                            goto LAB_8c253392;
                    }
                    *(u32 *)pdVar4 = 0xe0000000;
                    CacheBlockWriteBack(pdVar4);
                    if (cVar32 == '\0') {
                        *(u32 *)(pdVar4 + 4) = g_8c4c11b0;
                        *(u32 *)((int)pdVar4 + 0x24) = g_8c4c11b4;
                        uVar25 = g_8c4c11b8;
                        *(u32 *)(pdVar4 + 5) = g_8c4c11b8;
                        uVar19 = CONCAT44(g_8c4c11bc, uVar25);
                        *(u32 *)((int)pdVar4 + 0x2c) = g_8c4c11bc;
                    } else {
                        pdVar4[4] = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                        *(u64 *)((int)pdVar4 + 0x24) = CONCAT44(g_8c4c11bc, g_8c4c11b8);
                        pdVar4[5] = g_8c4c11c0;
                        uVar19 = g_8c4c11c8;
                        *(u64 *)((int)pdVar4 + 0x2c) = g_8c4c11c8;
                    }
                    CacheBlockWriteBack((u32 *)((int)pdVar4 + 0x2c));
                    if (cVar32 == '\0') {
                        dVar26 = (double)CONCAT44(*(u32 *)pdVar4, SUB84(in_dr0, 0));
                        dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar4 + 4), (int)uVar19);
                        pdVar4 = pdVar4 + 1;
                    } else {
                        dVar26 = *pdVar4;
                        dVar22 = pdVar4[1];
                        pdVar4 = pdVar4 + 2;
                    }
                    if (cVar32 == '\0') {
                        uVar25 = *(u32 *)(pdVar4 + 2);
                        dVar29 = (double)CONCAT44(uVar25, uVar24);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar4 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar25;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar22 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)dVar26 >> 0x20);
                    } else {
                        dVar29 = pdVar4[2];
                        unaff_r8[3] = pdVar4[3];
                        unaff_r8[2] = dVar29;
                        unaff_r8[1] = dVar22;
                        *unaff_r8 = dVar26;
                    }
                    *(u32 *)pdVar13 = 0xe0000000;
                    CacheBlockWriteBack(pdVar13);
                    if (cVar32 == '\0') {
                        *(u32 *)(pdVar13 + 4) = g_8c4c11b0;
                        *(u32 *)((int)pdVar13 + 0x24) = g_8c4c11b4;
                        uVar24 = g_8c4c11b8;
                        *(u32 *)(pdVar13 + 5) = g_8c4c11b8;
                        uVar19 = CONCAT44(g_8c4c11bc, uVar24);
                        *(u32 *)((int)pdVar13 + 0x2c) = g_8c4c11bc;
                    } else {
                        pdVar13[4] = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                        *(u64 *)((int)pdVar13 + 0x24) = CONCAT44(g_8c4c11bc, g_8c4c11b8);
                        pdVar13[5] = g_8c4c11c0;
                        uVar19 = g_8c4c11c8;
                        *(u64 *)((int)pdVar13 + 0x2c) = g_8c4c11c8;
                    }
                    CacheBlockWriteBack((u32 *)((int)pdVar13 + 0x2c));
                    if (cVar32 == '\0') {
                        dVar26 = (double)CONCAT44(*(u32 *)pdVar13, SUB84(dVar26, 0));
                        dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar13 + 4), (int)uVar19);
                        pdVar13 = pdVar13 + 1;
                    } else {
                        dVar26 = *pdVar13;
                        dVar22 = pdVar13[1];
                        pdVar13 = pdVar13 + 2;
                    }
                    if (cVar32 == '\0') {
                        uVar24 = *(u32 *)(pdVar13 + 2);
                        dVar29 = (double)CONCAT44(uVar24, SUB84(dVar29, 0));
                        *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)pdVar13 + 0x14);
                        *(u32 *)(unaff_r8 + 7) = uVar24;
                        *(int *)((int)unaff_r8 + 0x34) = (int)((u64)dVar22 >> 0x20);
                        pdVar4 = unaff_r8 + 6;
                        *(int *)pdVar4 = (int)((u64)dVar26 >> 0x20);
                    } else {
                        dVar29 = pdVar13[2];
                        unaff_r8[7] = pdVar13[3];
                        unaff_r8[6] = dVar29;
                        unaff_r8[5] = dVar22;
                        pdVar4 = unaff_r8 + 4;
                        *pdVar4 = dVar26;
                    }
                    *(u32 *)pdVar11 = 0xe0000000;
                    CacheBlockWriteBack(pdVar11);
                    if (cVar32 == '\0') {
                        *(u32 *)(pdVar11 + 4) = g_8c4c11b0;
                        *(u32 *)((int)pdVar11 + 0x24) = g_8c4c11b4;
                        uVar24 = g_8c4c11b8;
                        *(u32 *)(pdVar11 + 5) = g_8c4c11b8;
                        uVar19 = CONCAT44(g_8c4c11bc, uVar24);
                        *(u32 *)((int)pdVar11 + 0x2c) = g_8c4c11bc;
                    } else {
                        pdVar11[4] = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                        *(u64 *)((int)pdVar11 + 0x24) = CONCAT44(g_8c4c11bc, g_8c4c11b8);
                        pdVar11[5] = g_8c4c11c0;
                        uVar19 = g_8c4c11c8;
                        *(u64 *)((int)pdVar11 + 0x2c) = g_8c4c11c8;
                    }
                    CacheBlockWriteBack((u32 *)((int)pdVar11 + 0x2c));
                    if (cVar32 == '\0') {
                        dVar26 = (double)CONCAT44(*(u32 *)pdVar11, SUB84(dVar26, 0));
                        dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar11 + 4), (int)uVar19);
                        pdVar11 = pdVar11 + 1;
                    } else {
                        dVar26 = *pdVar11;
                        dVar22 = pdVar11[1];
                        pdVar11 = pdVar11 + 2;
                    }
                    if (cVar32 == '\0') {
                        uVar24 = *(u32 *)(pdVar11 + 2);
                        dVar29 = (double)CONCAT44(uVar24, SUB84(dVar29, 0));
                        *(u32 *)((int)pdVar4 + 0x3c) = *(u32 *)((int)pdVar11 + 0x14);
                        *(u32 *)(pdVar4 + 7) = uVar24;
                        *(int *)((int)pdVar4 + 0x34) = (int)((u64)dVar22 >> 0x20);
                        pdVar4 = pdVar4 + 6;
                        *(int *)pdVar4 = (int)((u64)dVar26 >> 0x20);
                    } else {
                        dVar29 = pdVar11[2];
                        pdVar4[7] = pdVar11[3];
                        pdVar4[6] = dVar29;
                        pdVar4[5] = dVar22;
                        pdVar4 = pdVar4 + 4;
                        *pdVar4 = dVar26;
                    }
                    *(u32 *)pdVar3 = 0xf0000000;
                    CacheBlockWriteBack(pdVar3);
                    if (cVar32 == '\0') {
                        *(u32 *)(pdVar3 + 4) = g_8c4c11b0;
                        *(u32 *)((int)pdVar3 + 0x24) = g_8c4c11b4;
                        uVar24 = g_8c4c11b8;
                        *(u32 *)(pdVar3 + 5) = g_8c4c11b8;
                        uVar19 = CONCAT44(g_8c4c11bc, uVar24);
                        *(u32 *)((int)pdVar3 + 0x2c) = g_8c4c11bc;
                    } else {
                        pdVar3[4] = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                        *(u64 *)((int)pdVar3 + 0x24) = CONCAT44(g_8c4c11bc, g_8c4c11b8);
                        pdVar3[5] = g_8c4c11c0;
                        uVar19 = g_8c4c11c8;
                        *(u64 *)((int)pdVar3 + 0x2c) = g_8c4c11c8;
                    }
                    CacheBlockWriteBack((u32 *)((int)pdVar3 + 0x2c));
                    if (cVar32 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(dVar26, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar3 + 4), (int)uVar19);
                        pdVar3 = pdVar3 + 1;
                    } else {
                        in_dr0 = *pdVar3;
                        in_dr2 = pdVar3[1];
                        pdVar3 = pdVar3 + 2;
                    }
                    if (cVar32 == '\0') {
                        uVar24 = *(u32 *)(pdVar3 + 2);
                        in_dr4 = (double)CONCAT44(uVar24, SUB84(dVar29, 0));
                        *(u32 *)((int)pdVar4 + 0x3c) = *(u32 *)((int)pdVar3 + 0x14);
                        *(u32 *)(pdVar4 + 7) = uVar24;
                        *(int *)((int)pdVar4 + 0x34) = (int)((u64)in_dr2 >> 0x20);
                        pdVar4 = pdVar4 + 6;
                        *(int *)pdVar4 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        in_dr4 = pdVar3[2];
                        pdVar4[7] = pdVar3[3];
                        pdVar4[6] = in_dr4;
                        pdVar4[5] = in_dr2;
                        pdVar4 = pdVar4 + 4;
                        *pdVar4 = in_dr0;
                    }
                    unaff_r8 = pdVar4 + 4;
                    g_8c4aa520 = g_8c4aa520 + 4;
                } else {
                    dVar26 = in_xd0;
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        if (cVar32 == '\0') {
                            uVar25 = *(u32 *)(pdVar13 + 3);
                            uVar27 = *(u32 *)((int)pdVar13 + 0x14);
                            dVar26 = (double)CONCAT44(uVar27, uVar25);
                            dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar4 + 0x14), uVar24);
                            in_dr8 = (double)CONCAT44(*(u32 *)(pdVar4 + 3), SUB84(in_dr8, 0));
                            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar27);
                            dVar29 = (double)CONCAT44(uVar25, SUB84(in_dr0, 0));
                        } else {
                            dVar29 = pdVar13[3];
                            dVar26 = *(double *)((int)pdVar13 + 0x14);
                            dVar22 = *(double *)((int)pdVar4 + 0x14);
                            in_dr8 = pdVar4[3];
                            uVar27 = (u32)((u64)dVar26 >> 0x20);
                            uVar25 = SUB84(dVar26, 0);
                            in_xd6 = dVar29;
                        }
                        fVar18 = (float)((u64)in_dr8 >> 0x20);
                        fVar23 = (float)((u64)dVar22 >> 0x20);
                        if (cVar31 == '\0') {
                            fVar17 = SUB84(in_dr2, 0) * fVar18;
                            dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * fVar23, SUB84(dVar29, 0));
                        } else {
                            fVar17 = SUB84(in_dr2 * in_dr8, 0);
                            dVar29 = dVar29 * dVar22;
                        }
                        if (cVar32 == '\0') {
                            in_dr8 = (double)CONCAT44(fVar18, *(u32 *)(pdVar13 + 2));
                            dVar22 = (double)CONCAT44(fVar23, *(u32 *)(pdVar4 + 2));
                            dVar21 = (double)CONCAT44(uVar25, fVar17);
                        } else {
                            in_xd8 = pdVar13[2];
                            in_xd4 = pdVar4[2];
                            dVar21 = in_xd6;
                        }
                        fVar23 = SUB84(dVar22, 0);
                        if (cVar31 == '\0') {
                            dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * fVar23, SUB84(dVar21, 0));
                        } else {
                            dVar21 = dVar21 * dVar22;
                        }
                        dVar20 = in_xd8;
                        if (cVar32 == '\0') {
                            dVar20 = (double)CONCAT44(SUB84(in_dr8, 0), SUB84(in_dr12, 0));
                        }
                        if (cVar31 == '\0') {
                            dVar29 =
                                (double)CONCAT44((float)((u64)dVar29 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar29, 0));
                        } else {
                            dVar29 = dVar29 - dVar21;
                        }
                        if (cVar32 == '\0') {
                            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(in_dr8, 0));
                        }
                        if (cVar31 == '\0') {
                            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20),
                                                      SUB84(dVar21, 0) * (float)((u64)in_dr8 >> 0x20));
                        } else {
                            dVar21 = dVar21 * in_dr8;
                        }
                        if (cVar32 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar27);
                            dVar26 = in_xd0;
                        }
                        if (cVar31 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) * fVar23);
                            in_dr12 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * (float)((u64)dVar22 >> 0x20),
                                                       SUB84(dVar20, 0));
                            fVar18 = SUB84(dVar21, 0) - (float)((u64)dVar21 >> 0x20);
                        } else {
                            dVar29 = dVar29 * dVar22;
                            in_dr12 = dVar20 * dVar22;
                            fVar18 = SUB84(dVar21 - dVar21, 0);
                        }
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar11 + 0x14), fVar18);
                        } else {
                            dVar22 = *(double *)((int)pdVar11 + 0x14);
                        }
                        if (cVar31 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20),
                                                      SUB84(dVar29, 0) - (float)((u64)in_dr12 >> 0x20));
                            dVar22 =
                                (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar22, 0), SUB84(dVar22, 0));
                        } else {
                            dVar29 = dVar29 - in_dr12;
                            dVar22 = dVar22 * dVar22;
                        }
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar11 + 2));
                        }
                        if (cVar31 == '\0') {
                            dVar22 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * SUB84(dVar22, 0) +
                                                          (float)((u64)dVar22 >> 0x20),
                                                      SUB84(dVar22, 0));
                        }
                        in_dr0 = dVar26;
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar11 + 3));
                            in_dr0 = (double)CONCAT44(SUB84(dVar29, 0), SUB84(dVar29, 0));
                        }
                        if (cVar31 == '\0') {
                            dVar22 = (double)((u64)(u32)((float)((u64)in_dr0 >> 0x20) * SUB84(dVar22, 0) +
                                                         (float)((u64)dVar22 >> 0x20))
                                              << 0x20);
                        }
                        in_dr2 = (double)((u64)dVar22 & 0xffffffff00000000);
                        in_dr4 = in_dr2;
                        if (cVar32 == '\0') {
                            in_dr4 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar23);
                        }
                        if (cVar31 == '\0') {
                            bVar30 = 0.0 < (float)((u64)in_dr4 >> 0x20);
                        } else {
                            bVar30 = in_dr2 < in_dr4;
                        }
                        in_xd0 = dVar26;
                        if (bVar30)
                            goto LAB_8c253392;
                    }
                    in_xd0 = dVar26;
                    if ((*(u32 *)pdVar4 & *(u32 *)pdVar13 & *(u32 *)pdVar11 & 1) == 0) {
                        gfxlib_fill_loop_23eb44(pdVar4, pdVar13, pdVar11);
                        in_xd0 = dVar26;
                    }
                    if ((*(u32 *)pdVar13 & *(u32 *)pdVar11 & *(u32 *)pdVar3 & 1) == 0) {
                        gfxlib_fill_loop_23eb44(pdVar13, pdVar11, pdVar3);
                    }
                }
            }
        LAB_8c253392:
            iStack_28 = iStack_28 + 1;
        }
    } else if (uVar2 == 0x8000) {
        iVar12 = 0;
        while (true) {
            uVar24 = SUB84(in_dr6, 0);
            uVar25 = SUB84(in_dr4, 0);
            uVar2 = (u32)a0[1];
            if ((int)uVar2 <= iVar12)
                break;
            uVar8 = 0;
            puVar16 = puVar15 + 1;
            iVar10 = 0;
            uVar14 = 0xffffffff;
            uVar2 = (u32)*puVar15;
            g_8c4aa51c = g_8c4aa51c + uVar2;
            puVar6 = puVar16;
            if (uVar2 != 0) {
                do {
                    uVar1 = *puVar6;
                    puVar6 = puVar6 + 1;
                    iVar10 = iVar10 + 1;
                    uVar5 = *(u32 *)((u32)uVar1 * 0x40 + g_8c4aa510);
                    uVar14 = uVar14 & uVar5;
                    uVar8 = uVar8 | uVar5;
                } while (iVar10 < (int)uVar2);
            }
            if ((uVar14 & 0x3f) == 0) {
                if ((uVar8 & 1) == 0) {
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        iVar10 = (u32)puVar15[2] * 0x40 + g_8c4aa510;
                        if (cVar32 == '\0') {
                            dVar26 = (double)CONCAT44(*(u32 *)(iVar10 + 4), uVar25);
                        } else {
                            dVar26 = *(double *)(iVar10 + 4);
                        }
                        iVar9 = (u32)*puVar16 * 0x40 + g_8c4aa510;
                        uVar25 = (u32)((u64)dVar26 >> 0x20);
                        dVar22 = dVar26;
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44(uVar25, *(u32 *)(iVar9 + 4));
                        }
                        if (cVar31 == '\0') {
                            dVar22 =
                                (double)CONCAT44((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar22, 0));
                        } else {
                            dVar22 = dVar22 - dVar22;
                        }
                        iVar7 = g_8c4aa510 + (u32)puVar15[3] * 0x40;
                        if (cVar32 == '\0') {
                            fVar23 = *(float *)(iVar10 + 8);
                            dVar26 = (double)CONCAT44(uVar25, fVar23);
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(iVar7 + 8));
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar23);
                        } else {
                            in_xd0 = *(double *)(iVar10 + 8);
                            fVar23 = SUB84(dVar26, 0);
                            in_xd4 = in_xd0;
                        }
                        if (cVar31 == '\0') {
                            fVar18 = SUB84(dVar22, 0) - fVar23;
                            dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * fVar18, fVar18);
                        } else {
                            dVar22 = (dVar22 - dVar26) * (dVar22 - dVar26);
                        }
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(iVar9 + 8));
                        }
                        if (cVar31 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar22, 0));
                        } else {
                            dVar29 = in_dr0 - dVar22;
                        }
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(iVar7 + 4));
                        }
                        if (cVar31 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20),
                                                      SUB84(dVar22, 0) - (float)((u64)dVar26 >> 0x20));
                        } else {
                            dVar22 = dVar22 - dVar26;
                        }
                        uVar8 = (u32)((u64)dVar22 >> 0x20);
                        dVar26 = dVar22;
                        if (cVar32 == '\0') {
                            dVar26 = (double)CONCAT44(uVar8, fVar23);
                        }
                        if (cVar31 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) * SUB84(dVar22, 0));
                        } else {
                            in_dr0 = dVar29 * dVar22;
                        }
                        in_dr2 = (double)((u64)uVar8 << 0x20);
                        if (cVar31 == '\0') {
                            fVar23 = (float)((u64)dVar26 >> 0x20) - SUB84(in_dr0, 0);
                            in_dr4 = (double)CONCAT44(fVar23, SUB84(dVar26, 0));
                            bVar30 = 0.0 < fVar23;
                        } else {
                            in_dr4 = dVar26 - in_dr0;
                            bVar30 = in_dr2 < in_dr4;
                        }
                        if (bVar30)
                            goto LAB_8c2535c8;
                    }
                    uVar25 = SUB84(in_dr4, 0);
                    g_8c4aa520 = g_8c4aa520 + uVar2;
                    iStack_34 = 0;
                    if (0 < (int)(uVar2 - 1)) {
                        do {
                            uVar1 = *puVar16;
                            puVar16 = puVar16 + 1;
                            pdVar3 = (double *)((u32)uVar1 * 0x40 + g_8c4aa510);
                            *(u32 *)pdVar3 = 0xe0000000;
                            CacheBlockWriteBack(pdVar3);
                            if (cVar32 == '\0') {
                                *(u32 *)(pdVar3 + 4) = g_8c4c11b0;
                                *(u32 *)((int)pdVar3 + 0x24) = g_8c4c11b4;
                                uVar24 = g_8c4c11b8;
                                *(u32 *)(pdVar3 + 5) = g_8c4c11b8;
                                uVar19 = CONCAT44(g_8c4c11bc, uVar24);
                                *(u32 *)((int)pdVar3 + 0x2c) = g_8c4c11bc;
                            } else {
                                pdVar3[4] = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                                *(u64 *)((int)pdVar3 + 0x24) = CONCAT44(g_8c4c11bc, g_8c4c11b8);
                                pdVar3[5] = g_8c4c11c0;
                                uVar19 = g_8c4c11c8;
                                *(u64 *)((int)pdVar3 + 0x2c) = g_8c4c11c8;
                            }
                            CacheBlockWriteBack((u32 *)((int)pdVar3 + 0x2c));
                            if (cVar32 == '\0') {
                                in_dr0 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(in_dr0, 0));
                                dVar26 = (double)CONCAT44(*(u32 *)((int)pdVar3 + 4), (int)uVar19);
                                pdVar3 = pdVar3 + 1;
                            } else {
                                in_dr0 = *pdVar3;
                                dVar26 = pdVar3[1];
                                pdVar3 = pdVar3 + 2;
                            }
                            if (cVar32 == '\0') {
                                uVar24 = *(u32 *)(pdVar3 + 2);
                                in_dr4 = (double)CONCAT44(uVar24, SUB84(in_dr4, 0));
                                in_dr6 = (double)CONCAT44(*(u32 *)((int)pdVar3 + 0x14), SUB84(in_dr6, 0));
                                *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar3 + 0x14);
                                *(u32 *)(unaff_r8 + 3) = uVar24;
                                *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar26 >> 0x20);
                                unaff_r8 = unaff_r8 + 2;
                                *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                            } else {
                                in_dr4 = pdVar3[2];
                                in_dr6 = pdVar3[3];
                                unaff_r8[3] = in_dr6;
                                unaff_r8[2] = in_dr4;
                                unaff_r8[1] = dVar26;
                                *unaff_r8 = in_dr0;
                            }
                            uVar24 = SUB84(in_dr6, 0);
                            uVar25 = SUB84(in_dr4, 0);
                            unaff_r8 = unaff_r8 + 4;
                            iStack_34 = iStack_34 + 1;
                        } while (iStack_34 < (int)(uVar2 - 1));
                    }
                    puVar15 = puVar16 + 1;
                    pdVar3 = (double *)((u32)*puVar16 * 0x40 + g_8c4aa510);
                    *(u32 *)pdVar3 = 0xf0000000;
                    CacheBlockWriteBack(pdVar3);
                    if (cVar32 == '\0') {
                        *(u32 *)(pdVar3 + 4) = g_8c4c11b0;
                        *(u32 *)((int)pdVar3 + 0x24) = g_8c4c11b4;
                        uVar27 = g_8c4c11b8;
                        *(u32 *)(pdVar3 + 5) = g_8c4c11b8;
                        uVar19 = CONCAT44(g_8c4c11bc, uVar27);
                        *(u32 *)((int)pdVar3 + 0x2c) = g_8c4c11bc;
                    } else {
                        pdVar3[4] = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                        *(u64 *)((int)pdVar3 + 0x24) = CONCAT44(g_8c4c11bc, g_8c4c11b8);
                        pdVar3[5] = g_8c4c11c0;
                        uVar19 = g_8c4c11c8;
                        *(u64 *)((int)pdVar3 + 0x2c) = g_8c4c11c8;
                    }
                    CacheBlockWriteBack((u32 *)((int)pdVar3 + 0x2c));
                    if (cVar32 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(in_dr0, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar3 + 4), (int)uVar19);
                        pdVar3 = pdVar3 + 1;
                    } else {
                        in_dr0 = *pdVar3;
                        in_dr2 = pdVar3[1];
                        pdVar3 = pdVar3 + 2;
                    }
                    if (cVar32 == '\0') {
                        uVar27 = *(u32 *)(pdVar3 + 2);
                        in_dr4 = (double)CONCAT44(uVar27, uVar25);
                        in_dr6 = (double)CONCAT44(*(u32 *)((int)pdVar3 + 0x14), uVar24);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar3 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar27;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)in_dr2 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        in_dr4 = pdVar3[2];
                        in_dr6 = pdVar3[3];
                        unaff_r8[3] = in_dr6;
                        unaff_r8[2] = in_dr4;
                        unaff_r8[1] = in_dr2;
                        *unaff_r8 = in_dr0;
                    }
                    unaff_r8 = unaff_r8 + 4;
                } else {
                    dVar26 = in_xd0;
                    if ((g_8c4ab308 & 0x800000) == 0) {
                        iVar9 = (u32)puVar15[2] * 0x40 + g_8c4aa510;
                        if (cVar32 == '\0') {
                            uVar25 = *(u32 *)(iVar9 + 0x18);
                        } else {
                            in_xd4 = *(double *)(iVar9 + 0x18);
                        }
                        dVar22 = in_xd4;
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44(uVar25, SUB84(in_dr0, 0));
                        }
                        iVar10 = (u32)*puVar16 * 0x40 + g_8c4aa510;
                        if (cVar32 == '\0') {
                            in_dr6 = (double)CONCAT44(*(u32 *)(iVar9 + 0x14), uVar24);
                            in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), *(u32 *)(iVar10 + 0x14));
                            dVar29 = (double)CONCAT44(*(u32 *)(iVar10 + 0x18), uVar25);
                        } else {
                            in_dr6 = *(double *)(iVar9 + 0x14);
                            dVar29 = *(double *)(iVar10 + 0x18);
                        }
                        uVar24 = (u32)((u64)in_dr6 >> 0x20);
                        if (cVar32 == '\0') {
                            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar24);
                        }
                        fVar23 = (float)((u64)dVar29 >> 0x20);
                        if (cVar31 == '\0') {
                            dVar22 =
                                (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(in_dr8, 0), SUB84(dVar22, 0));
                            dVar26 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * fVar23);
                        } else {
                            dVar22 = dVar22 * in_dr8;
                            dVar26 = in_dr2 * dVar29;
                        }
                        iVar7 = g_8c4aa510 + (u32)puVar15[3] * 0x40;
                        if (cVar31 == '\0') {
                            dVar22 =
                                (double)CONCAT44((float)((u64)dVar22 >> 0x20) - SUB84(dVar26, 0), SUB84(dVar22, 0));
                        } else {
                            dVar22 = dVar22 - dVar26;
                        }
                        if (cVar32 == '\0') {
                            uVar25 = *(u32 *)(iVar9 + 0x10);
                            in_dr8 = (double)CONCAT44(uVar25, SUB84(in_dr8, 0));
                            in_dr6 = (double)CONCAT44(uVar24, *(u32 *)(iVar10 + 0x10));
                            dVar26 = (double)CONCAT44(SUB84(dVar29, 0), uVar25);
                        } else {
                            in_dr8 = *(double *)(iVar9 + 0x10);
                            uVar25 = (u32)((u64)in_dr8 >> 0x20);
                            dVar26 = in_xd4;
                        }
                        if (cVar31 == '\0') {
                            dVar21 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) * SUB84(in_dr6, 0),
                                                      SUB84(dVar26, 0) * fVar23);
                        } else {
                            dVar21 = dVar26 * dVar29 * in_dr6;
                        }
                        dVar26 = in_dr6;
                        dVar20 = in_dr8;
                        if (cVar32 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), (int)((u64)in_dr6 >> 0x20));
                            dVar26 = in_xd0;
                            dVar20 = (double)CONCAT44(uVar25, SUB84(in_dr12, 0));
                        }
                        if (cVar31 == '\0') {
                            in_dr12 =
                                (double)CONCAT44((float)((u64)dVar20 >> 0x20) * SUB84(in_dr8, 0), SUB84(dVar20, 0));
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) * SUB84(in_dr6, 0));
                            fVar23 = SUB84(dVar21, 0) - (float)((u64)dVar21 >> 0x20);
                        } else {
                            in_dr12 = dVar20 * in_dr8;
                            dVar22 = dVar22 * in_dr6;
                            fVar23 = SUB84(dVar21 - dVar21, 0);
                        }
                        if (cVar32 == '\0') {
                            dVar21 = (double)CONCAT44(*(u32 *)(iVar7 + 0x14), fVar23);
                        } else {
                            dVar21 = *(double *)(iVar7 + 0x14);
                        }
                        if (cVar31 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20),
                                                      SUB84(dVar22, 0) - (float)((u64)in_dr12 >> 0x20));
                            dVar21 =
                                (double)CONCAT44((float)((u64)dVar21 >> 0x20) * SUB84(dVar21, 0), SUB84(dVar21, 0));
                        } else {
                            dVar22 = dVar22 - in_dr12;
                            dVar21 = dVar21 * dVar21;
                        }
                        if (cVar32 == '\0') {
                            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(iVar7 + 0x10));
                        }
                        if (cVar31 == '\0') {
                            dVar21 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar21, 0) +
                                                          (float)((u64)dVar21 >> 0x20),
                                                      SUB84(dVar21, 0));
                        }
                        in_dr0 = dVar26;
                        if (cVar32 == '\0') {
                            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(iVar7 + 0x18));
                            in_dr0 = (double)CONCAT44(SUB84(dVar22, 0), SUB84(dVar22, 0));
                        }
                        if (cVar31 == '\0') {
                            dVar21 = (double)((u64)(u32)((float)((u64)in_dr0 >> 0x20) * SUB84(dVar21, 0) +
                                                         (float)((u64)dVar21 >> 0x20))
                                              << 0x20);
                        }
                        in_dr2 = (double)((u64)dVar21 & 0xffffffff00000000);
                        in_dr4 = in_dr2;
                        if (cVar32 == '\0') {
                            in_dr4 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar29, 0));
                        }
                        if (cVar31 == '\0') {
                            bVar30 = 0.0 < (float)((u64)in_dr4 >> 0x20);
                        } else {
                            bVar30 = in_dr2 < in_dr4;
                        }
                        in_xd0 = dVar26;
                        if (bVar30)
                            goto LAB_8c2535c8;
                    }
                    puVar6 = puVar15 + 2;
                    puVar15 = puVar15 + 3;
                    iStack_30 = 0;
                    ar4_00 = (u32 *)((u32)*puVar16 * 0x40 + g_8c4aa510);
                    ar5_00 = (u32 *)((u32)*puVar6 * 0x40 + g_8c4aa510);
                    in_xd0 = dVar26;
                    if (0 < (int)(uVar2 - 2)) {
                        do {
                            uVar1 = *puVar15;
                            puVar15 = puVar15 + 1;
                            ar6_00 = (u32 *)((u32)uVar1 * 0x40 + g_8c4aa510);
                            if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                                gfxlib_fill_loop_23eb44(ar4_00, ar5_00, ar6_00);
                            }
                            iStack_30 = iStack_30 + 1;
                            ar4_00 = ar5_00;
                            ar5_00 = ar6_00;
                        } while (iStack_30 < (int)(uVar2 - 2));
                    }
                }
            } else {
            LAB_8c2535c8:
                puVar15 = puVar16 + uVar2;
            }
            iVar12 = iVar12 + 1;
        }
    } else if (uVar2 == 0xc000) {
        if ((g_8c4ab318 & 1) == 0) {
            UNRECOVERED_JUMPTABLE = gfxlib_uses_noop_247280;
        } else {
            UNRECOVERED_JUMPTABLE = gfxlib_uses_noop_246f1a;
        }
        /* WARNING: Could not recover jumptable at 0x8c253690. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar24 = (*UNRECOVERED_JUMPTABLE)(a0, (u16)iStack_30);
        return uVar24;
    }
    return uVar2;
}

/*
 * ninja_uses_ta_fifo_2536a8  0x8c2536a8
 * area name: in the ninja library code range; behaviour name: its main named callee is ta_fifo_237124
 * called by: ninja_uses_ta_fifo_254026
 */
u32 ninja_uses_ta_fifo_2536a8(int a0, u8 *a1, u32 a2, u32 a3, u32 ain0) {
    float fVar1;
    u16 uVar2;
    int iVar3;
    u32 uVar4;
    u32 unaff_r8;
    u16 *ar4_00;
    u8 *unaff_r13;
    u16 unaff_r14;
    code *pcVar5;
    double in_dr2;
    double dVar6;
    u32 uVar8;
    double dVar7;
    double in_dr4;
    float fVar9;
    float fVar10;
    u32 in_fr15;
    double in_xd2;
    double in_xd14;
    char cVar11;
    char cVar12;
    u32 uStack_24;

    cVar12 = '\0';
    cVar11 = '\0';
    if (*(int *)(a0 + 8) <= g_8c4aa514) {
        ar4_00 = *(u16 **)(a0 + 0xc);
        if ((g_8c4aa4f0 & 1) != 0) {
            a2 = 1;
            a1 = (u8 *)0x3;
            gfxlib_draw_234d68(&PTR_DAT_8c277c00, 3, 1, a3);
        }
        g_8c4aa554 = 0;
        ain0 = ninja_calls_fill_loop_254006(a0);
        if (ain0 == 0) {
            gfxlib_uses_noop_fr4_test_23c2a0(&g_8c4ab30c);
            iVar3 = 0;
            while (true) {
                fVar10 = g_8c4c11c0;
                uVar4 = (u32)((u64)in_dr2 >> 0x20);
                uVar8 = SUB84(in_dr4, 0);
                ain0 = (u32) * (u16 *)(a0 + 0x14);
                if ((int)ain0 <= iVar3)
                    break;
                uVar2 = *ar4_00 & 0x3fff;
                if ((iVar3 == 0) || (uVar2 != unaff_r14)) {
                    unaff_r13 = (u8 *)(*(int *)(a0 + 0x10) + (u32)uVar2 * 0x14);
                    g_8c4ab308 = *(u32 *)(unaff_r13 + 0x10);
                    if (g_8c4aa554 != 0) {
                        g_8c4ab308 = g_8c4ab308 | 0x100000;
                    }
                    if ((g_8c4aa4f0 & 4) != 0) {
                        g_8c4ab308 = g_8c4ab308 & g_8c4aa524 | g_8c4aa528;
                    }
                    if (cVar12 == '\0') {
                        in_fr15 = 0x3b808081;
                    } else {
                        in_xd14 = -1.9601903259109032e-249;
                    }
                    if ((g_8c4ab308 & 0x200000) == 0) {
                        dVar7 = in_xd14;
                        if (cVar12 == '\0') {
                            dVar7 = (double)CONCAT44(in_fr15, uVar8);
                        }
                        fVar9 = (float)((u64)dVar7 >> 0x20);
                        if (cVar11 == '\0') {
                            dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[2] * fVar9);
                        } else {
                            dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[2]) * dVar7;
                        }
                        g_8c4c11b4 = SUB84(in_xd2, 0);
                        g_8c4c11a0 = g_8c4c11b4;
                        if (cVar12 == '\0') {
                            g_8c4c11b4 = SUB84(dVar6, 0);
                        }
                        uVar4 = (u32)((u64)dVar6 >> 0x20);
                        if (cVar11 == '\0') {
                            dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[1] * fVar9);
                        } else {
                            dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[1]) * dVar7;
                        }
                        g_8c4c11b8 = g_8c4c11a0;
                        if (cVar12 == '\0') {
                            g_8c4c11b8 = SUB84(dVar6, 0);
                        }
                        uVar4 = (u32)((u64)dVar6 >> 0x20);
                        if (cVar11 == '\0') {
                            dVar6 = (double)CONCAT44(uVar4, (float)*unaff_r13 * fVar9);
                        } else {
                            dVar6 = (double)CONCAT44(uVar4, (float)*unaff_r13) * dVar7;
                        }
                        g_8c4c11c0 = (float)((u64)in_xd2 >> 0x20);
                        fVar1 = g_8c4c11c0;
                        g_8c4c11bc = g_8c4c11a0;
                        if (cVar12 == '\0') {
                            g_8c4c11bc = SUB84(dVar6, 0);
                            g_8c4c11c0 = fVar10;
                        }
                        uVar4 = (u32)((u64)dVar6 >> 0x20);
                        if (cVar11 == '\0') {
                            dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[3] * fVar9);
                        } else {
                            dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[3]) * dVar7;
                        }
                        g_8c4c11b0 = g_8c4c11a0;
                        if (cVar12 == '\0') {
                            g_8c4c11a0 = SUB84(dVar6, 0);
                            g_8c4c11b0 = SUB84(dVar6, 0);
                            fVar1 = g_8c4c11b4;
                        }
                    } else {
                        ta_calc_2371be(*(u32 *)(unaff_r13 + 0xc) & 0x3fffffff);
                        fVar10 = g_8c4c11c0;
                        g_8c4c11a0 = SUB84(in_xd2, 0);
                        if ((g_8c4aa4f0 & 0x200) == 0) {
                            dVar7 = in_xd14;
                            if (cVar12 == '\0') {
                                dVar7 = (double)CONCAT44(in_fr15, uVar8);
                            }
                            fVar9 = (float)((u64)dVar7 >> 0x20);
                            if (cVar11 == '\0') {
                                dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[2] * fVar9);
                            } else {
                                dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[2]) * dVar7;
                            }
                            g_8c4c11b4 = g_8c4c11a0;
                            if (cVar12 == '\0') {
                                g_8c4c11b4 = SUB84(dVar6, 0);
                            }
                            uVar4 = (u32)((u64)dVar6 >> 0x20);
                            if (cVar11 == '\0') {
                                dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[1] * fVar9);
                            } else {
                                dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[1]) * dVar7;
                            }
                            g_8c4c11b8 = g_8c4c11a0;
                            if (cVar12 == '\0') {
                                g_8c4c11b8 = SUB84(dVar6, 0);
                            }
                            uVar4 = (u32)((u64)dVar6 >> 0x20);
                            if (cVar11 == '\0') {
                                dVar6 = (double)CONCAT44(uVar4, (float)*unaff_r13 * fVar9);
                            } else {
                                dVar6 = (double)CONCAT44(uVar4, (float)*unaff_r13) * dVar7;
                            }
                            g_8c4c11c0 = (float)((u64)in_xd2 >> 0x20);
                            fVar1 = g_8c4c11c0;
                            g_8c4c11bc = g_8c4c11a0;
                            if (cVar12 == '\0') {
                                g_8c4c11bc = SUB84(dVar6, 0);
                                g_8c4c11c0 = fVar10;
                            }
                            uVar4 = (u32)((u64)dVar6 >> 0x20);
                            if (cVar11 == '\0') {
                                dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[3] * fVar9);
                            } else {
                                dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[3]) * dVar7;
                            }
                            g_8c4c11b0 = g_8c4c11a0;
                            if (cVar12 == '\0') {
                                g_8c4c11a0 = SUB84(dVar6, 0);
                                g_8c4c11b0 = SUB84(dVar6, 0);
                                fVar1 = g_8c4c11b4;
                            }
                        } else {
                            dVar7 = in_xd14;
                            if (cVar12 == '\0') {
                                dVar7 = (double)CONCAT44(in_fr15, uVar8);
                            }
                            if (cVar11 == '\0') {
                                dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[3] * (float)((u64)dVar7 >> 0x20));
                            } else {
                                dVar6 = (double)CONCAT44(uVar4, (float)unaff_r13[3]) * dVar7;
                            }
                            g_8c4c11b8 = SUB84(dVar7, 0);
                            dVar7 = (double)CONCAT44(0x3f800000, g_8c4c11b8);
                            g_8c4c11b0 = SUB84(dVar6, 0);
                            if (cVar12 == '\0') {
                                g_8c4c11bc = 1.0;
                                g_8c4c11a0 = g_8c4c11b0;
                                fVar1 = g_8c4c11bc;
                                g_8c4c11b8 = g_8c4c11bc;
                            } else {
                                g_8c4c11c0 = 1.0;
                                g_8c4c11b0 = 1.0;
                                fVar1 = g_8c4c11b8;
                                g_8c4c11bc = g_8c4c11b8;
                            }
                        }
                    }
                    g_8c4c11b4 = fVar1;
                    uVar4 = 0x10;
                    if (cVar12 == '\0') {
                        dVar7 = (double)CONCAT44(g_8c4aa52c, SUB84(dVar7, 0));
                    } else {
                        dVar7 = (double)CONCAT44(g_8c4aa530, g_8c4aa52c);
                    }
                    fVar10 = (float)((u64)dVar7 >> 0x20);
                    uVar8 = (u32)((u64)dVar6 >> 0x20);
                    if ((g_8c4aa4f0 & 0x10) == 0) {
                        uVar4 = 0x20;
                        if ((g_8c4aa4f0 & 0x20) != 0) {
                            if (cVar12 == '\0') {
                                dVar6 = (double)CONCAT44(uVar8, g_8c4c11b0);
                            } else {
                                in_xd2 = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
                            }
                            if (cVar11 == '\0') {
                                g_8c4c11b0 = SUB84(dVar6, 0) + fVar10;
                            } else {
                                g_8c4c11b0 = SUB84(dVar6 + dVar7, 0);
                            }
                            if (cVar12 == '\0') {
                                dVar6 = (double)CONCAT44(g_8c4c11b4, g_8c4aa530);
                            } else {
                                g_8c4c11b0 = SUB84(in_xd2, 0);
                                g_8c4c11b4 = (float)((u64)in_xd2 >> 0x20);
                                dVar6 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
                                in_xd2 = (double)CONCAT44(g_8c4aa534, g_8c4aa530);
                            }
                            if (cVar11 == '\0') {
                                dVar6 =
                                    (double)CONCAT44((float)((u64)dVar6 >> 0x20) + SUB84(dVar6, 0), SUB84(dVar6, 0));
                            } else {
                                dVar6 = dVar6 + dVar6;
                            }
                            fVar10 = (float)((u64)dVar6 >> 0x20);
                            if (cVar12 == '\0') {
                                dVar6 = (double)CONCAT44(g_8c4c11b8, g_8c4aa534);
                                g_8c4c11b4 = fVar10;
                            } else {
                                g_8c4c11b4 = SUB84(dVar6, 0);
                                dVar6 = (double)CONCAT44(g_8c4c11bc, fVar10);
                                in_xd2 = (double)CONCAT44(g_8c4aa538, g_8c4aa534);
                            }
                            if (cVar11 == '\0') {
                                dVar6 =
                                    (double)CONCAT44((float)((u64)dVar6 >> 0x20) + SUB84(dVar6, 0), SUB84(dVar6, 0));
                            } else {
                                dVar6 = dVar6 + dVar6;
                            }
                            fVar10 = (float)((u64)dVar6 >> 0x20);
                            if (cVar12 == '\0') {
                                dVar6 = (double)CONCAT44(g_8c4c11bc, g_8c4aa538);
                                g_8c4c11b8 = fVar10;
                            } else {
                                g_8c4c11b8 = SUB84(dVar6, 0);
                                dVar6 = (double)CONCAT44(g_8c4c11c0, fVar10);
                                in_xd2 = (double)CONCAT44(g_8c4aa53c, g_8c4aa538);
                            }
                            if (cVar11 == '\0') {
                                dVar6 =
                                    (double)CONCAT44((float)((u64)dVar6 >> 0x20) + SUB84(dVar6, 0), SUB84(dVar6, 0));
                            } else {
                                dVar6 = dVar6 + dVar6;
                            }
                            fVar10 = (float)((u64)dVar6 >> 0x20);
                            if (cVar12 == '\0') {
                                g_8c4c11a0 = g_8c4c11b0;
                                dVar6 = (double)CONCAT44(fVar10, fVar10);
                                g_8c4c11bc = fVar10;
                            } else {
                                g_8c4c11bc = SUB84(dVar6, 0);
                                g_8c4c11a0 = g_8c4c11b0;
                                in_xd2 = dVar6;
                                g_8c4c11b0 = fVar10;
                                g_8c4c11c0 = fVar10;
                            }
                        }
                    } else {
                        if (cVar12 == '\0') {
                            dVar6 = (double)CONCAT44(uVar8, g_8c4aa538);
                            g_8c4c11a0 = fVar10;
                            g_8c4c11b0 = fVar10;
                        } else {
                            in_xd2 = (double)CONCAT44(g_8c4aa53c, g_8c4aa538);
                            g_8c4c11c0 = g_8c4aa53c;
                            g_8c4c11b0 = g_8c4aa53c;
                            g_8c4c11a0 = SUB84(dVar7, 0);
                        }
                        g_8c4c11ac = g_8c4aa538;
                        g_8c4c11a8 = g_8c4aa534;
                        g_8c4c11a4 = g_8c4aa530;
                        g_8c4c11b4 = g_8c4c11a4;
                        g_8c4c11b8 = g_8c4c11a8;
                        g_8c4c11bc = g_8c4c11ac;
                    }
                    in_dr4 = in_xd14;
                    if (cVar12 == '\0') {
                        in_dr4 = (double)CONCAT44(in_fr15, SUB84(dVar7, 0));
                    }
                    uVar8 = (u32)((u64)dVar6 >> 0x20);
                    fVar10 = (float)((u64)in_dr4 >> 0x20);
                    if (cVar11 == '\0') {
                        dVar7 = (double)CONCAT44(uVar8, (float)unaff_r13[6] * fVar10);
                    } else {
                        dVar7 = (double)CONCAT44(uVar8, (float)unaff_r13[6]) * in_dr4;
                    }
                    g_8c4c11c4 = SUB84(in_xd2, 0);
                    g_8c4c11cc = g_8c4c11c4;
                    if (cVar12 == '\0') {
                        g_8c4c11c4 = SUB84(dVar7, 0);
                    }
                    uVar8 = (u32)((u64)dVar7 >> 0x20);
                    if (cVar11 == '\0') {
                        dVar7 = (double)CONCAT44(uVar8, (float)unaff_r13[5] * fVar10);
                    } else {
                        dVar7 = (double)CONCAT44(uVar8, (float)unaff_r13[5]) * in_dr4;
                    }
                    g_8c4c11c8 = g_8c4c11cc;
                    if (cVar12 == '\0') {
                        g_8c4c11c8 = SUB84(dVar7, 0);
                    }
                    uVar8 = (u32)((u64)dVar7 >> 0x20);
                    if (cVar11 == '\0') {
                        in_dr2 = (double)CONCAT44(uVar8, (float)unaff_r13[4] * fVar10);
                    } else {
                        in_dr2 = (double)CONCAT44(uVar8, (float)unaff_r13[4]) * in_dr4;
                    }
                    if (cVar12 == '\0') {
                        g_8c4c11cc = SUB84(in_dr2, 0);
                        g_8c4c11d0 = *(u32 *)(unaff_r13 + 8);
                        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4c11d0);
                    } else {
                        in_xd2 = *(double *)(unaff_r13 + 8);
                        g_8c4c11d0 = SUB84(in_xd2, 0);
                        uRam8c4c11d4 = (u32)((u64)in_xd2 >> 0x20);
                    }
                    g_8c4c11a4 = g_8c4c11b4;
                    g_8c4c11a8 = g_8c4c11b8;
                    g_8c4c11ac = g_8c4c11bc;
                    gfxlib_state_switch_23c4ba(&g_8c4aa52c);
                    uStack_24 = g_8c4ab308 & 0x3600000;
                    ta_update_fields_237370(g_8c4ab308);
                    a3 = 0x1000000;
                    a2 = 0x2000000;
                    a1 = (u8 *)0x80000;
                    unaff_r14 = uVar2;
                    if ((g_8c4ab308 & 0x200000) == 0) {
                        if ((g_8c4ab308 & 0x2000000) == 0) {
                            if ((g_8c4ab308 & 0x1000000) == 0) {
                                if ((g_8c4ab308 & 0x100000) == 0) {
                                    uVar4 = 0x80012;
                                    ta_fifo_237124(0x80012, 0x80000, 0x2000000, 0x1000000);
                                    goto LAB_8c253a5e;
                                }
                                uVar4 = 0x2100012;
                                ta_fifo_237124(0x2100012, 0x80000, 0x2000000, 0x1000000);
                                goto LAB_8c253a50;
                            }
                            if ((g_8c4ab308 & 0x100000) != 0) {
                                uVar4 = 0x2100010;
                                ta_fifo_237124(0x2100010, 0x80000, 0x2000000, 0x1000000);
                                goto LAB_8c253a50;
                            }
                            uVar4 = 0x80010;
                            ta_fifo_237124(0x80010, 0x80000, 0x2000000, 0x1000000);
                        LAB_8c253a5e:
                            pcVar5 = ta_sq_write_header4_short;
                        } else {
                            if ((g_8c4ab308 & 0x100000) == 0) {
                                uVar4 = 0x80010;
                                ta_fifo_237124(0x80010, 0x80000, 0x2000000, 0x1000000);
                                goto LAB_8c253a5e;
                            }
                            uVar4 = 0x2100010;
                            ta_fifo_237124(0x2100010, 0x80000, 0x2000000, 0x1000000);
                        LAB_8c253a50:
                            pcVar5 = ta_sq_write_header5_short;
                        }
                        unaff_r8 = (*pcVar5)(uVar4, a1, a2, a3);
                    } else {
                        uVar4 = 0x80008;
                        if ((g_8c4ab308 & 0x2000000) == 0) {
                            if ((g_8c4ab308 & 0x1000000) == 0) {
                                if ((g_8c4ab308 & 0x100000) == 0) {
                                    if ((g_8c4ab308 & 0x80000) == 0) {
                                        uVar4 = 0x8000e;
                                    } else {
                                        uVar4 = 0x8000a;
                                    }
                                    ta_fifo_237124(uVar4, 0x80000, 0x2000000, 0x1000000);
                                    goto LAB_8c253a00;
                                }
                                if ((g_8c4ab308 & 0x80000) == 0) {
                                    uVar4 = 0x210000e;
                                } else {
                                    uVar4 = 0x210000a;
                                }
                                ta_fifo_237124(uVar4, 0x80000, 0x2000000, 0x1000000);
                                goto LAB_8c2539ea;
                            }
                            if ((g_8c4ab308 & 0x100000) != 0) {
                                if ((g_8c4ab308 & 0x80000) == 0) {
                                    uVar4 = 0x210000c;
                                } else {
                                    uVar4 = 0x2100008;
                                }
                                ta_fifo_237124(uVar4, 0x80000, 0x2000000, 0x1000000);
                                goto LAB_8c2539ea;
                            }
                            if ((g_8c4ab308 & 0x80000) == 0) {
                                uVar4 = 0x8000c;
                            }
                            ta_fifo_237124(uVar4, 0x80000, 0x2000000, 0x1000000);
                        LAB_8c253a00:
                            pcVar5 = ta_sq_write_header4;
                        } else {
                            if ((g_8c4ab308 & 0x100000) == 0) {
                                uVar4 = 0x80008;
                                ta_fifo_237124(0x80008, 0x80000, 0x2000000, 0x1000000);
                                goto LAB_8c253a00;
                            }
                            uVar4 = 0x2100008;
                            ta_fifo_237124(0x2100008, 0x80000, 0x2000000, 0x1000000);
                        LAB_8c2539ea:
                            pcVar5 = ta_sq_write_header5;
                        }
                        unaff_r8 = (*pcVar5)(uVar4, a1, a2, a3);
                    }
                }
                if (g_8c4ab318 == 0) {
                    if (uStack_24 == 0) {
                        a1 = unaff_r13;
                        gfxlib_calls_scan_loop_247e16(ar4_00);
                    } else if (uStack_24 == 0x200000) {
                        a1 = unaff_r13;
                        gfxlib_uses_float_to_color_u8_24901e(ar4_00);
                    } else if (uStack_24 == 0x600000) {
                        a1 = unaff_r13;
                        gfxlib_uses_float_to_color_u8_24a808(ar4_00);
                    } else if (uStack_24 == 0x1000000) {
                        a1 = unaff_r13;
                        gfxlib_uses_float_to_color_u8_24bdc8(ar4_00, unaff_r13, a2, a3);
                    } else if (uStack_24 == 0x1200000) {
                        a1 = unaff_r13;
                        vram_24d5a8(ar4_00, unaff_r13, a2, a3);
                    } else if ((uStack_24 == 0x2200000) || (uStack_24 == 0x3200000)) {
                        a1 = unaff_r13;
                        vram_24ef30(ar4_00, unaff_r13, a2, a3);
                    } else if (uStack_24 == 0x1600000) {
                        a1 = unaff_r13;
                        gfxlib_uses_float_to_color_u8_250144(ar4_00, unaff_r13, a2, a3);
                    } else if ((uStack_24 == 0x2600000) || (uStack_24 == 0x3600000)) {
                        a1 = unaff_r13;
                        vram_2518b4(ar4_00, unaff_r13, a2, a3);
                    } else if ((uStack_24 == 0x2000000) || (uStack_24 == 0x3000000)) {
                        a1 = unaff_r13;
                        gfxlib_fill_loop_2528e8(ar4_00);
                    }
                } else if (uStack_24 == 0) {
                    a1 = unaff_r13;
                    gfxlib_calls_scan_loop_2485bc(ar4_00);
                } else if (uStack_24 == 0x200000) {
                    a1 = unaff_r13;
                    vram_2499ec(ar4_00);
                } else if (uStack_24 == 0x600000) {
                    a1 = unaff_r13;
                    gfxlib_uses_float_to_color_u8_24b154(ar4_00);
                } else if (uStack_24 == 0x1000000) {
                    a1 = unaff_r13;
                    gfxlib_uses_float_to_color_u8_24c6f0(ar4_00, unaff_r13, a2, a3);
                } else if (uStack_24 == 0x1200000) {
                    a1 = unaff_r13;
                    gfxlib_uses_float_to_color_u8_24df18(ar4_00, unaff_r13, a2, a3);
                } else if ((uStack_24 == 0x2200000) || (uStack_24 == 0x3200000)) {
                    a1 = unaff_r13;
                    vram_24f64c(ar4_00, unaff_r13, a2, a3);
                } else if (uStack_24 == 0x1600000) {
                    a1 = unaff_r13;
                    vram_250a54(ar4_00, unaff_r13, a2, a3);
                } else if ((uStack_24 == 0x2600000) || (uStack_24 == 0x3600000)) {
                    a1 = unaff_r13;
                    gfxlib_uses_float_to_color_u8_251f78(ar4_00, unaff_r13, a2, a3);
                } else if ((uStack_24 == 0x2000000) || (uStack_24 == 0x3000000)) {
                    a1 = unaff_r13;
                    gfxlib_calls_fill_loop_252e7c(ar4_00);
                }
                ta_set_list_addr(unaff_r8);
                ar4_00 = ar4_00 + 0xc;
                iVar3 = iVar3 + 1;
            }
        }
    }
    return ain0;
}

/*
 * ninja_calls_fill_loop_253cfc  0x8c253cfc
 * area name: in the ninja library code range; behaviour name: its callees mostly do: calls_fill_loop
 * called by: ninja_draw_254042
 */
u32 ninja_calls_fill_loop_253cfc(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = a0;
    gfxlib_calls_fill_loop_23c70c();
    gfxlib_fill_loop_237630();
    gfxlib_uses_memcpy_words_n_2376c4();
    ninja_vec_254066(a0, a1, a2, a3);
    uVar1 = gfxlib_calc_237760();
    return uVar1;
}

/*
 * ninja_uses_matrix_push_253d1c  0x8c253d1c
 * area name: in the ninja library code range; behaviour name: its main named callee is matrix_push
 * called by: ninja_vec_254066
 */
u32 ninja_uses_matrix_push_253d1c(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;

    do {
        uVar1 = *a0 & 7;
        if (uVar1 == 0) {
            matrix_push(0, a1, a2, a3, 0);
            uVar2 = touch_fields_30_3c(0, a1, a2, a3, 4);
            if ((*a0 & 0x20) == 0) {
                a1 = a0[5];
                a3 = a0[7];
                a2 = a0[6];
                njRotateXYZ(0, a1, a2, a3, uVar2);
            } else {
                a1 = a0[5];
                a2 = a0[6];
                a3 = a0[7];
                ninja_float_calc_256e18(0, a1, a2, a3, uVar2);
            }
            matrix_scale(0, a1, a2, a3, 4);
            if ((*a0 & 8) == 0) {
                ninja_uses_ta_fifo_254026(a0[1], a1, a2, a3);
            }
            if ((*a0 & 0x10) == 0) {
                ninja_vec_254066(a0[0xb], a1, a2, a3);
            }
        LAB_8c253fa8:
            uVar1 = matrix_pop_n(1);
        } else {
            if (uVar1 == 1) {
                uVar2 = matrix_push(0, a1, a2, a3, 1);
                if ((*a0 & 0x20) == 0) {
                    a1 = a0[5];
                    a3 = a0[7];
                    a2 = a0[6];
                    njRotateXYZ(0, a1, a2, a3, uVar2);
                } else {
                    a1 = a0[5];
                    a2 = a0[6];
                    a3 = a0[7];
                    ninja_float_calc_256e18(0, a1, a2, a3, uVar2);
                }
                matrix_scale(0, a1, a2, a3, 4);
                if ((*a0 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(a0[1], a1, a2, a3);
                }
                if ((*a0 & 0x10) == 0) {
                    ninja_vec_254066(a0[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 2) {
                matrix_push(0, a1, a2, a3, 2);
                touch_fields_30_3c(0, a1, a2, a3, 4);
                matrix_scale(0, a1, a2, a3, 4);
                if ((*a0 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(a0[1], a1, a2, a3);
                }
                if ((*a0 & 0x10) == 0) {
                    ninja_vec_254066(a0[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 3) {
                matrix_push(0, a1, a2, a3, 3);
                matrix_scale(0, a1, a2, a3, 4);
                if ((*a0 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(a0[1], a1, a2, a3);
                }
                if ((*a0 & 0x10) == 0) {
                    ninja_vec_254066(a0[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 4) {
                matrix_push(0, a1, a2, a3, 4);
                uVar2 = touch_fields_30_3c(0, a1, a2, a3, 4);
                if ((*a0 & 0x20) == 0) {
                    a1 = a0[5];
                    a3 = a0[7];
                    a2 = a0[6];
                    njRotateXYZ(0, a1, a2, a3, uVar2);
                } else {
                    a1 = a0[5];
                    a2 = a0[6];
                    a3 = a0[7];
                    ninja_float_calc_256e18(0, a1, a2, a3, uVar2);
                }
                if ((*a0 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(a0[1], a1, a2, a3);
                }
                if ((*a0 & 0x10) == 0) {
                    ninja_vec_254066(a0[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 5) {
                uVar2 = matrix_push(0, a1, a2, a3, 5);
                if ((*a0 & 0x20) == 0) {
                    a1 = a0[5];
                    a3 = a0[7];
                    a2 = a0[6];
                    njRotateXYZ(0, a1, a2, a3, uVar2);
                } else {
                    a1 = a0[5];
                    a2 = a0[6];
                    a3 = a0[7];
                    ninja_float_calc_256e18(0, a1, a2, a3, uVar2);
                }
                if ((*a0 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(a0[1], a1, a2, a3);
                }
                if ((*a0 & 0x10) == 0) {
                    ninja_vec_254066(a0[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 6) {
                matrix_push(0, a1, a2, a3, 6);
                touch_fields_30_3c(0, a1, a2, a3, 4);
                if ((*a0 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(a0[1], a1, a2, a3);
                }
                if ((*a0 & 0x10) == 0) {
                    ninja_vec_254066(a0[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 7) {
                uVar1 = *a0;
                if ((uVar1 & 8) == 0) {
                    uVar1 = ninja_uses_ta_fifo_254026(a0[1], a1, a2, a3);
                }
                if ((*a0 & 0x10) == 0) {
                    uVar1 = ninja_vec_254066(a0[0xb], a1, a2, a3);
                }
            }
        }
        a0 = (u32 *)a0[0xc];
        if (a0 == NULL) {
            return uVar1;
        }
    } while (true);
}

/*
 * alt_entry_253d20  0x8c253d20
 * probably an entry 4 bytes into 8c253d1c: it reads registers that code sets before it
 */
u32 alt_entry_253d20(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *unaff_r14;
    u32 in_PR;

    do {
        uVar1 = *unaff_r14 & 7;
        if (uVar1 == 0) {
            matrix_push(0, a1, a2, a3);
            touch_fields_30_3c(0, a1, a2, a3, in_PR);
            if ((*unaff_r14 & 0x20) == 0) {
                a1 = unaff_r14[5];
                a3 = unaff_r14[7];
                a2 = unaff_r14[6];
                njRotateXYZ(0, a1, a2, a3, in_PR);
            } else {
                a1 = unaff_r14[5];
                a2 = unaff_r14[6];
                a3 = unaff_r14[7];
                ninja_float_calc_256e18(0, a1, a2, a3);
            }
            matrix_scale(0, a1, a2, a3);
            if ((*unaff_r14 & 8) == 0) {
                ninja_uses_ta_fifo_254026(unaff_r14[1], a1, a2, a3);
            }
            if ((*unaff_r14 & 0x10) == 0) {
                ninja_vec_254066(unaff_r14[0xb], a1, a2, a3);
            }
        LAB_8c253fa8:
            uVar1 = matrix_pop_n(1);
        } else {
            if (uVar1 == 1) {
                matrix_push(0, a1, a2, a3);
                if ((*unaff_r14 & 0x20) == 0) {
                    a1 = unaff_r14[5];
                    a3 = unaff_r14[7];
                    a2 = unaff_r14[6];
                    njRotateXYZ(0, a1, a2, a3, in_PR);
                } else {
                    a1 = unaff_r14[5];
                    a2 = unaff_r14[6];
                    a3 = unaff_r14[7];
                    ninja_float_calc_256e18(0, a1, a2, a3);
                }
                matrix_scale(0, a1, a2, a3);
                if ((*unaff_r14 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(unaff_r14[1], a1, a2, a3);
                }
                if ((*unaff_r14 & 0x10) == 0) {
                    ninja_vec_254066(unaff_r14[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 2) {
                matrix_push(0, a1, a2, a3);
                touch_fields_30_3c(0, a1, a2, a3, in_PR);
                matrix_scale(0, a1, a2, a3);
                if ((*unaff_r14 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(unaff_r14[1], a1, a2, a3);
                }
                if ((*unaff_r14 & 0x10) == 0) {
                    ninja_vec_254066(unaff_r14[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 3) {
                matrix_push(0, a1, a2, a3);
                matrix_scale(0, a1, a2, a3);
                if ((*unaff_r14 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(unaff_r14[1], a1, a2, a3);
                }
                if ((*unaff_r14 & 0x10) == 0) {
                    ninja_vec_254066(unaff_r14[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 4) {
                matrix_push(0, a1, a2, a3);
                touch_fields_30_3c(0, a1, a2, a3, in_PR);
                if ((*unaff_r14 & 0x20) == 0) {
                    a1 = unaff_r14[5];
                    a3 = unaff_r14[7];
                    a2 = unaff_r14[6];
                    njRotateXYZ(0, a1, a2, a3, in_PR);
                } else {
                    a1 = unaff_r14[5];
                    a2 = unaff_r14[6];
                    a3 = unaff_r14[7];
                    ninja_float_calc_256e18(0, a1, a2, a3);
                }
                if ((*unaff_r14 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(unaff_r14[1], a1, a2, a3);
                }
                if ((*unaff_r14 & 0x10) == 0) {
                    ninja_vec_254066(unaff_r14[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 5) {
                matrix_push(0, a1, a2, a3);
                if ((*unaff_r14 & 0x20) == 0) {
                    a1 = unaff_r14[5];
                    a3 = unaff_r14[7];
                    a2 = unaff_r14[6];
                    njRotateXYZ(0, a1, a2, a3, in_PR);
                } else {
                    a1 = unaff_r14[5];
                    a2 = unaff_r14[6];
                    a3 = unaff_r14[7];
                    ninja_float_calc_256e18(0, a1, a2, a3);
                }
                if ((*unaff_r14 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(unaff_r14[1], a1, a2, a3);
                }
                if ((*unaff_r14 & 0x10) == 0) {
                    ninja_vec_254066(unaff_r14[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 6) {
                matrix_push(0, a1, a2, a3);
                touch_fields_30_3c(0, a1, a2, a3, in_PR);
                if ((*unaff_r14 & 8) == 0) {
                    ninja_uses_ta_fifo_254026(unaff_r14[1], a1, a2, a3);
                }
                if ((*unaff_r14 & 0x10) == 0) {
                    ninja_vec_254066(unaff_r14[0xb], a1, a2, a3);
                }
                goto LAB_8c253fa8;
            }
            if (uVar1 == 7) {
                uVar1 = *unaff_r14;
                if ((uVar1 & 8) == 0) {
                    uVar1 = ninja_uses_ta_fifo_254026(unaff_r14[1], a1, a2, a3);
                }
                if ((*unaff_r14 & 0x10) == 0) {
                    uVar1 = ninja_vec_254066(unaff_r14[0xb], a1, a2, a3);
                }
            }
        }
        unaff_r14 = (u32 *)unaff_r14[0xc];
        if (unaff_r14 == NULL) {
            return uVar1;
        }
    } while (true);
}

/*
 * ninja_draw_with_saved_state  0x8c253fe0
 * runs gfxlib_calls_fill_loop_247df4 between draw_state_save and draw_state_restore
 */
u32 ninja_draw_with_saved_state(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    draw_state_save(a0, a1, a2, a3);
    gfxlib_calls_fill_loop_247df4(a0, a1, a2, a3);
    uVar1 = draw_state_restore(&stack0xfffffff4);
    return uVar1;
}

/*
 * ninja_calls_fill_loop_254006  0x8c254006
 * area name: in the ninja library code range; behaviour name: its callees mostly do: calls_fill_loop
 * called by: ninja_uses_ta_fifo_2536a8
 */
u32 ninja_calls_fill_loop_254006(u32 a0) {
    u32 uVar1;

    uVar1 = gfxlib_calls_fill_loop_23d386(a0);
    return uVar1;
}

/*
 * ninja_uses_ta_fifo_254026  0x8c254026
 * area name: in the ninja library code range; behaviour name: its callees mostly do: uses_ta_fifo
 * called by: alt_entry_253d20, gfxlib_calls_fill_loop_247df4, ninja_uses_matrix_push_253d1c
 */
u32 ninja_uses_ta_fifo_254026(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 unaff_r8;

    uVar1 = ninja_uses_ta_fifo_2536a8(a0, a1, a2, a3, unaff_r8);
    return uVar1;
}

/*
 * ninja_draw_254042  0x8c254042
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: Class_1298b8_m10_0159d0, Class_1298b8_m11_0159ec, Class_1298b8_m2_015588, Class_1298b8_m3_0155e8,
 * Class_1298b8_m4_0156a0, Class_1298b8_m5_015720, Class_1298b8_m6_0157f8, Class_1298b8_m7_015890 (+2 more)
 */
u32 ninja_draw_254042(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    draw_state_save(a0, a1, a2, a3);
    ninja_calls_fill_loop_253cfc(a0, a1, a2, a3);
    uVar1 = draw_state_restore(&stack0xfffffff4);
    return uVar1;
}

/*
 * ninja_vec_254066  0x8c254066
 * area name: in the ninja library code range; behaviour name: mostly calls vec functions
 * called by: alt_entry_253d20, ninja_calls_fill_loop_253cfc, ninja_uses_matrix_push_253d1c
 */
u32 ninja_vec_254066(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = ninja_uses_matrix_push_253d1c(a0, a1, a2, a3);
    return uVar1;
}

/*
 * ninja_float_calc_2540a0  0x8c2540a0
 * area name: in the ninja library code range; behaviour name: floating-point arithmetic
 * called by: CAnimBody_uses_get_field_1c_on_field_b0_026de0, CAnimal_uses_njGetMatrix_026968
 */
u32 ninja_float_calc_2540a0(u32 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float fVar1;
    float in_fr4;

    if (a0 == NULL) {
        g_8c4aad80 = 0;
        g_8c4ab0c0 = 0;
        g_8c4aad82 = 0;
    } else {
        fVar1 = (float)(int)a0[1];
        if ((int)a0[1] < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
        }
        if (fVar1 <= in_fr4) {
            return ain0;
        }
        g_8c4aad80 = *(u16 *)((int)a0 + 10) & 0xff3f;
        g_8c4ab0c0 = (u16)((*(u16 *)((int)a0 + 10) & 0xc0) != 0);
        g_8c4aad82 = *(u16 *)(a0 + 2);
        g_8c4aad48 = *a0;
        g_8c4aad58 = a0[1];
    }
    g_8c4aad5c = 0;
    g_8c4aad60 = 0;
    if ((g_8c4aad82 & 1) == 0) {
        g_8c4aad34 = (code *)&LAB_8c2559bc;
    } else {
        g_8c4aad34 = ninja_draw_254d1a;
    }
    if ((g_8c4aad82 & 2) == 0) {
        g_8c4aad38 = (code *)&LAB_8c2559da;
        g_8c4aad40 = (code *)&LAB_8c2559f4;
    } else {
        g_8c4aad38 = ninja_vec_254e80;
        g_8c4aad40 = ninja_calls_float_calc_254f1e;
    }
    if ((g_8c4aad82 & 4) == 0) {
        g_8c4aad3c = (code *)&LAB_8c255a0e;
    } else {
        g_8c4aad3c = ninja_vec_254db0;
    }
    g_8c4aad54 = in_fr4;
    return (u32)g_8c4aad82;
}

/*
 * ninja_calls_update_fields_25415c  0x8c25415c
 * area name: in the ninja library code range; behaviour name: its callees mostly do: update_fields
 */
u32 ninja_calls_update_fields_25415c(int a0, int a1, int a2, u32 a3, int ain0, u32 *ain1) {
    u32 ain0_00;
    u32 uVar1;
    u32 *in_r2;
    int iVar2;
    u32 unaff_r13;
    int *unaff_r14;

    *in_r2 = *(u32 *)(ain0 + a2);
    *ain1 = *(u32 *)((int)&PTR_FUN_8c277c3c + a1);
    unaff_r14[6] = a0;
    ain0_00 = (u32)g_8c4aad80;
    iVar2 = *unaff_r14;
    if (ain0_00 == 0) {
        (*g_8c4aad34)(unaff_r13, a1, a2, a3);
        (*g_8c4aad38)(unaff_r13, a1, a2, a3);
        ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
    } else {
        if (ain0_00 == 1) {
            unaff_r14[1] = iVar2;
            unaff_r14[2] = iVar2 + 4;
            unaff_r14[5] = 0;
            (*g_8c4aad34)(unaff_r13, a1, a2, a3);
            (*g_8c4aad38)(unaff_r13, a1, a2, a3);
            ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
            iVar2 = iVar2 + 8;
        } else if (ain0_00 == 2) {
            unaff_r14[1] = iVar2;
            unaff_r14[2] = iVar2 + 8;
            unaff_r14[5] = 0;
            (*g_8c4aad34)(unaff_r13, a1, a2, a3);
            (*g_8c4aad38)(unaff_r13, a1, a2, a3);
            ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
            iVar2 = iVar2 + 0x10;
        } else if (ain0_00 == 3) {
            unaff_r14[1] = iVar2;
            unaff_r14[2] = iVar2 + 0xc;
            unaff_r14[5] = 0;
            (*g_8c4aad34)(unaff_r13, a1, a2, a3);
            (*g_8c4aad38)(unaff_r13, a1, a2, a3);
            ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
            iVar2 = iVar2 + 0x18;
        } else {
            if (ain0_00 != 4)
                goto LAB_8c25423c;
            unaff_r14[1] = iVar2;
            unaff_r14[2] = iVar2 + 0x10;
            unaff_r14[5] = 0;
            (*g_8c4aad34)(unaff_r13, a1, a2, a3);
            (*g_8c4aad38)(unaff_r13, a1, a2, a3);
            ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
            iVar2 = iVar2 + 0x20;
        }
        *unaff_r14 = iVar2;
    }
LAB_8c25423c:
    if (unaff_r14[6] == 0) {
        return ain0_00;
    }
    uVar1 = ninja_update_fields_255d6c(0, unaff_r14[6], a2, a3, ain0_00);
    return uVar1;
}

/*
 * ninja_calls_update_fields_254280  0x8c254280
 * area name: in the ninja library code range; behaviour name: its callees mostly do: update_fields
 */
u32 ninja_calls_update_fields_254280(int a0, int a1, int a2, u32 a3, int ain0, u32 *ain1) {
    u32 ain0_00;
    u32 uVar1;
    u32 *in_r2;
    int iVar2;
    u32 unaff_r13;
    int *unaff_r14;

    *in_r2 = *(u32 *)(ain0 + a2);
    *ain1 = *(u32 *)((int)&PTR_FUN_8c277c3c + a1);
    unaff_r14[6] = a0;
    ain0_00 = (u32)g_8c4aad80;
    iVar2 = *unaff_r14;
    if (ain0_00 == 0) {
        (*g_8c4aad34)(unaff_r13, a1, a2, a3);
        (*g_8c4aad40)(unaff_r13, a1, a2, a3);
        ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
    } else {
        if (ain0_00 == 1) {
            unaff_r14[1] = iVar2;
            unaff_r14[2] = iVar2 + 4;
            unaff_r14[5] = 0;
            (*g_8c4aad34)(unaff_r13, a1, a2, a3);
            (*g_8c4aad40)(unaff_r13, a1, a2, a3);
            ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
            iVar2 = iVar2 + 8;
        } else if (ain0_00 == 2) {
            unaff_r14[1] = iVar2;
            unaff_r14[2] = iVar2 + 8;
            unaff_r14[5] = 0;
            (*g_8c4aad34)(unaff_r13, a1, a2, a3);
            (*g_8c4aad40)(unaff_r13, a1, a2, a3);
            ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
            iVar2 = iVar2 + 0x10;
        } else if (ain0_00 == 3) {
            unaff_r14[1] = iVar2;
            unaff_r14[2] = iVar2 + 0xc;
            unaff_r14[5] = 0;
            (*g_8c4aad34)(unaff_r13, a1, a2, a3);
            (*g_8c4aad40)(unaff_r13, a1, a2, a3);
            ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
            iVar2 = iVar2 + 0x18;
        } else {
            if (ain0_00 != 4)
                goto LAB_8c2543be;
            unaff_r14[1] = iVar2;
            unaff_r14[2] = iVar2 + 0x10;
            unaff_r14[5] = 0;
            (*g_8c4aad34)(unaff_r13, a1, a2, a3);
            (*g_8c4aad40)(unaff_r13, a1, a2, a3);
            ain0_00 = (*g_8c4aad3c)(unaff_r13, a1, a2, a3);
            iVar2 = iVar2 + 0x20;
        }
        *unaff_r14 = iVar2;
    }
LAB_8c2543be:
    if (unaff_r14[6] == 0) {
        return ain0_00;
    }
    uVar1 = ninja_update_fields_255d6c(0, unaff_r14[6], a2, a3, ain0_00);
    return uVar1;
}

/*
 * ninja_scan_loop_2545ec  0x8c2545ec
 * area name: in the ninja library code range; behaviour name: a loop that only reads
 * called by: game_uses_njGetMatrix_029af0
 */
u32 ninja_scan_loop_2545ec(u32 a0, int a1) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    float fVar5;

    if (g_8c4aad80 == 1) {
        g_8c4aad50 = (u32 *)(g_8c4aad48 + 1);
        g_8c4aad4c = g_8c4aad48;
    } else {
        if (g_8c4aad80 == 2) {
            g_8c4aad50 = (u32 *)(g_8c4aad48 + 2);
        } else if (g_8c4aad80 == 3) {
            g_8c4aad50 = (u32 *)(g_8c4aad48 + 3);
        } else {
            if (g_8c4aad80 != 4)
                goto LAB_8c25463a;
            g_8c4aad50 = (u32 *)(g_8c4aad48 + 4);
        }
        g_8c4aad4c = g_8c4aad48;
    }
LAB_8c25463a:
    fVar5 = g_8c4aad54;
    if (2.1474836e+09 < g_8c4aad54) {
        fVar5 = g_8c4aad54 + -4.2949673e+09;
    }
    uVar2 = 0;
    uVar3 = *g_8c4aad50;
    while (uVar4 = uVar3, 1 < uVar4 - uVar2) {
        uVar3 = uVar2 + uVar4 >> 1;
        if (*(u32 *)(uVar3 * 0x10 + *g_8c4aad4c) <= (u32)(int)fVar5) {
            uVar2 = uVar3;
            uVar3 = uVar4;
        }
    }
    /* WARNING: Could not recover jumptable at 0x8c254694. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_FUN_8c277c34)[a1])(a0);
    return uVar1;
}

/*
 * ninja_scan_loop_254698  0x8c254698
 * area name: in the ninja library code range; behaviour name: a loop that only reads
 * called by: game_uses_njGetMatrix_029af0
 */
u32 ninja_scan_loop_254698(u32 a0, int a1) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    float fVar6;

    if (g_8c4aad80 == 1) {
        g_8c4aad50 = g_8c4aad48 + 4;
        g_8c4aad4c = g_8c4aad48;
    } else {
        if (g_8c4aad80 == 2) {
            g_8c4aad50 = g_8c4aad48 + 8;
        } else if (g_8c4aad80 == 3) {
            g_8c4aad50 = g_8c4aad48 + 0xc;
        } else {
            if (g_8c4aad80 != 4)
                goto LAB_8c2546fa;
            g_8c4aad50 = g_8c4aad48 + 0x10;
        }
        g_8c4aad4c = g_8c4aad48;
    }
LAB_8c2546fa:
    iVar2 = (u32)((g_8c4aad82 & 1) != 0) * 4;
    fVar6 = g_8c4aad54;
    if (2.1474836e+09 < g_8c4aad54) {
        fVar6 = g_8c4aad54 + -4.2949673e+09;
    }
    uVar3 = 0;
    uVar4 = *(u32 *)(g_8c4aad50 + iVar2);
    while (uVar5 = uVar4, 1 < uVar5 - uVar3) {
        uVar4 = uVar3 + uVar5 >> 1;
        if (*(u32 *)(uVar4 * 0x10 + *(int *)(g_8c4aad4c + iVar2)) <= (u32)(int)fVar6) {
            uVar3 = uVar4;
            uVar4 = uVar5;
        }
    }
    /* WARNING: Could not recover jumptable at 0x8c254758. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_FUN_8c277c3c)[a1])(a0);
    return uVar1;
}

/*
 * ninja_scan_loop_254780  0x8c254780
 * area name: in the ninja library code range; behaviour name: a loop that only reads
 * called by: game_uses_njGetMatrix_029af0
 */
u32 ninja_scan_loop_254780(u32 a0, int a1) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    float fVar6;

    uVar2 = (u32)((g_8c4aad82 & 1) != 0);
    if ((g_8c4aad82 & 2) != 0) {
        uVar2 = uVar2 + 1;
    }
    if (g_8c4aad80 == 1) {
        g_8c4aad50 = g_8c4aad48 + 4;
        g_8c4aad4c = g_8c4aad48;
    } else {
        if (g_8c4aad80 == 2) {
            g_8c4aad50 = g_8c4aad48 + 8;
        } else if (g_8c4aad80 == 3) {
            g_8c4aad50 = g_8c4aad48 + 0xc;
        } else {
            if (g_8c4aad80 != 4)
                goto LAB_8c2547ea;
            g_8c4aad50 = g_8c4aad48 + 0x10;
        }
        g_8c4aad4c = g_8c4aad48;
    }
LAB_8c2547ea:
    fVar6 = g_8c4aad54;
    if (2.1474836e+09 < g_8c4aad54) {
        fVar6 = g_8c4aad54 + -4.2949673e+09;
    }
    uVar3 = 0;
    uVar4 = *(u32 *)(g_8c4aad50 + uVar2 * 4);
    while (uVar5 = uVar4, 1 < uVar5 - uVar3) {
        uVar4 = uVar3 + uVar5 >> 1;
        if (*(u32 *)(uVar4 * 0x10 + *(int *)(g_8c4aad4c + uVar2 * 4)) <= (u32)(int)fVar6) {
            uVar3 = uVar4;
            uVar4 = uVar5;
        }
    }
    /* WARNING: Could not recover jumptable at 0x8c254848. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_FUN_8c277c34)[a1])(a0);
    return uVar1;
}

/*
 * ninja_calls_update_fields_25484c  0x8c25484c
 * area name: in the ninja library code range; behaviour name: its callees mostly do: update_fields
 * called by: game_uses_njGetMatrix_029af0
 */
u32 ninja_calls_update_fields_25484c(void) {
    int *piVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;

    piVar1 = 0x8c4aad48;
    uVar2 = (u32) * 0x8c4aad80;
    iVar4 = g_8c4aad48;
    if (uVar2 == 1) {
        iVar4 = iVar4 + 8;
    } else if (uVar2 == 2) {
        iVar4 = iVar4 + 0x10;
    } else if (uVar2 == 3) {
        iVar4 = iVar4 + 0x18;
    } else {
        if (uVar2 != 4)
            goto LAB_8c25487a;
        iVar4 = iVar4 + 0x20;
    }
    g_8c4aad48 = iVar4;
LAB_8c25487a:
    if (piVar1[6] == 0) {
        return uVar2;
    }
    uVar3 = ninja_update_fields_255d6c(0);
    return uVar3;
}

/*
 * ninja_uses_switch_jump_2548a8  0x8c2548a8
 * area name: in the ninja library code range; behaviour name: its main named callee is switch_jump
 */
u32 ninja_uses_switch_jump_2548a8(int a0, int a1, u32 a2, u64 *a3) {
    int iVar1;
    int *piVar2;
    int *piVar3;
    double in_dr0;
    float fVar4;
    float fVar5;
    float fVar6;
    double dVar7;
    u32 in_fr5;
    u32 uVar8;
    double in_xd0;
    u64 in_xd2;
    u64 uVar9;
    u64 in_xd4;
    u32 in_PR;
    char cVar10;
    char cVar11;
    u8 auStack_14[8];
    u32 uStack_c;

    fVar6 = (float)((u64)in_xd4 >> 0x20);
    cVar11 = '\0';
    cVar10 = '\0';
    uStack_c = in_PR;
    switch_jump(8, auStack_14, &g_8c271d70);
    piVar3 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar2 = (int *)(a0 + iVar1 * 0x10);
    fVar4 = (float)(*piVar2 - *piVar3);
    dVar7 = (double)(u64)(u32)fVar4;
    uVar9 = in_xd2;
    if (cVar11 == '\0') {
        uVar9 = CONCAT44(fVar4, in_fr5);
    }
    uVar8 = (u32)((u64)uVar9 >> 0x20);
    if (cVar10 != '\0' || 0.0 <= fVar4) {
        if (cVar11 == '\0') {
            dVar7 = (double)(u64)uVar8;
            uVar9 = in_xd2;
        }
    } else {
        if (cVar11 == '\0') {
            dVar7 = (double)(u64)uVar8;
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
            uVar9 = in_xd2;
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar10 == '\0') {
            dVar7 = (double)(u64)(u32)(SUB84(dVar7, 0) + SUB84(in_dr0, 0));
        } else {
            dVar7 = dVar7 + in_dr0;
        }
    }
    if (cVar11 == '\0') {
        stack0xfffffff0 = CONCAT44(uStack_c, SUB84(dVar7, 0));
    } else {
        stack0xfffffff0 = uVar9;
    }
    iVar1 = *piVar3;
    fVar4 = (float)iVar1;
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar4);
    if (iVar1 < 0) {
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x4f800000, fVar4 + 4.2949673e+09);
        } else {
            dVar7 = (double)CONCAT44(0x4f800000, fVar4) + (double)CONCAT44(0x4f800000, fVar4);
        }
    }
    if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
    }
    if (cVar10 == '\0') {
        fVar4 = SUB84(in_dr0, 0) - SUB84(dVar7, 0);
    } else {
        fVar4 = SUB84(in_dr0 - dVar7, 0);
    }
    iVar1 = (u32)(0 < *piVar2 - iVar1) * 4;
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), *(u32 *)(auStack_14 + iVar1));
        in_xd0 = (double)CONCAT44(fVar4, 0x3f800000);
    } else {
        uVar9 = *(u64 *)(auStack_14 + iVar1);
    }
    if (cVar10 == '\0') {
        in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) / SUB84(dVar7, 0), SUB84(in_xd0, 0));
    } else {
        in_xd0 = in_xd0 / dVar7;
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(piVar3[1], piVar2[1]);
    } else {
        uVar9 = *(u64 *)(piVar2 + 1);
        dVar7 = *(double *)(piVar3 + 1);
    }
    if (cVar10 == '\0') {
        fVar4 = (float)((u64)in_xd0 >> 0x20);
        in_xd0 = (double)CONCAT44(fVar4, SUB84(in_xd0, 0) - fVar4);
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * fVar4);
    } else {
        in_xd0 = in_xd0 - in_xd0;
        fVar4 = (float)((u64)in_xd0 >> 0x20);
        dVar7 = dVar7 * in_xd0;
    }
    if (cVar11 == '\0') {
        fVar6 = SUB84(in_xd0, 0);
    }
    if (cVar10 == '\0') {
        dVar7 = (double)(u64)(u32)(fVar6 * (float)((u64)dVar7 >> 0x20) + SUB84(dVar7, 0));
    }
    if (cVar11 == '\0') {
        *(int *)a3 = SUB84(dVar7, 0);
        dVar7 = (double)CONCAT44(piVar3[2], piVar2[2]);
    } else {
        *a3 = uVar9;
        uVar9 = *(u64 *)(piVar2 + 2);
        dVar7 = *(double *)(piVar3 + 2);
    }
    if (cVar10 == '\0') {
        fVar5 = fVar6 * (float)((u64)dVar7 >> 0x20) + SUB84(dVar7, 0) * fVar4;
    } else {
        fVar5 = SUB84(dVar7 * in_xd0, 0);
    }
    if (cVar11 == '\0') {
        *(float *)((int)a3 + 4) = fVar5;
        dVar7 = (double)CONCAT44(piVar3[3], piVar2[3]);
    } else {
        *(u64 *)((int)a3 + 4) = uVar9;
        uVar9 = *(u64 *)(piVar2 + 3);
        dVar7 = *(double *)(piVar3 + 3);
    }
    if (cVar10 == '\0') {
        fVar6 = fVar6 * (float)((u64)dVar7 >> 0x20) + SUB84(dVar7, 0) * fVar4;
    } else {
        fVar6 = SUB84(dVar7 * in_xd0, 0);
    }
    if (cVar11 == '\0') {
        *(float *)(a3 + 1) = fVar6;
    } else {
        a3[1] = uVar9;
    }
    return 8;
}

/*
 * ninja_uses_switch_jump_254956  0x8c254956
 * area name: in the ninja library code range; behaviour name: its main named callee is switch_jump
 */
int ninja_uses_switch_jump_254956(int a0, int a1, u32 a2, int *a3) {
    int iVar1;
    u32 uVar2;
    int *piVar3;
    int *piVar4;
    double in_dr0;
    float fVar5;
    float fVar6;
    double dVar7;
    double dVar8;
    u32 in_fr5;
    u64 uVar9;
    double in_xd0;
    u64 in_xd2;
    u64 uVar10;
    u64 in_xd4;
    u32 in_PR;
    char cVar11;
    char cVar12;
    u32 uStack_14;
    u64 uStack_10;

    fVar5 = (float)((u64)in_xd4 >> 0x20);
    cVar12 = '\0';
    cVar11 = '\0';
    uStack_10._4_4_ = in_PR;
    switch_jump(8, &uStack_14, &g_8c271d78);
    piVar4 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar3 = (int *)(a0 + iVar1 * 0x10);
    fVar6 = (float)(*piVar3 - *piVar4);
    dVar7 = (double)(u64)(u32)fVar6;
    uVar9 = in_xd2;
    if (cVar12 == '\0') {
        uVar9 = CONCAT44(fVar6, in_fr5);
    }
    uVar2 = (u32)((u64)uVar9 >> 0x20);
    uVar10 = uVar9;
    if (cVar11 != '\0' || 0.0 <= fVar6) {
        if (cVar12 == '\0') {
            dVar7 = (double)(u64)uVar2;
            uVar10 = in_xd2;
        }
    } else {
        if (cVar12 == '\0') {
            dVar7 = (double)(u64)uVar2;
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
            uVar10 = in_xd2;
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar11 == '\0') {
            dVar7 = (double)(u64)(u32)(SUB84(dVar7, 0) + SUB84(in_dr0, 0));
        } else {
            dVar7 = dVar7 + in_dr0;
        }
    }
    if (cVar12 == '\0') {
        uStack_10 = CONCAT44(uStack_10._4_4_, SUB84(dVar7, 0));
    } else {
        uStack_10 = uVar10;
    }
    iVar1 = *piVar4;
    fVar6 = (float)iVar1;
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar6);
    if (iVar1 < 0) {
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x4f800000, fVar6 + 4.2949673e+09);
        } else {
            dVar7 = (double)CONCAT44(0x4f800000, fVar6) + (double)CONCAT44(0x4f800000, fVar6);
        }
    }
    if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
    }
    if (cVar11 == '\0') {
        fVar6 = SUB84(in_dr0, 0) - SUB84(dVar7, 0);
    } else {
        fVar6 = SUB84(in_dr0 - dVar7, 0);
    }
    uVar2 = (u32)(0 < *piVar3 - iVar1);
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), (&uStack_14)[uVar2]);
        in_xd0 = (double)CONCAT44(fVar6, (int)uVar9);
    }
    if (cVar11 == '\0') {
        fVar6 = (float)((u64)in_xd0 >> 0x20) / SUB84(dVar7, 0);
    } else {
        fVar6 = (float)((u64)(in_xd0 / dVar7) >> 0x20);
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(fVar6, 1.0 - fVar6);
        dVar8 = (double)CONCAT44((float)piVar3[1] * fVar6, (float)piVar4[1]);
    } else {
        dVar7 = (double)CONCAT44(fVar6, 0x3f800000) - (double)CONCAT44(fVar6, 0x3f800000);
        fVar6 = (float)((u64)dVar7 >> 0x20);
        dVar8 = (double)piVar3[1] * dVar7;
    }
    if (cVar12 == '\0') {
        fVar5 = SUB84(dVar7, 0);
    }
    if (cVar11 == '\0') {
        iVar1 = (int)(fVar5 * SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20));
    } else {
        iVar1 = (int)dVar8;
    }
    *a3 = iVar1;
    if (cVar11 == '\0') {
        iVar1 = (int)(fVar5 * (float)piVar4[2] + (float)piVar3[2] * fVar6);
    } else {
        iVar1 = (int)((double)piVar3[2] * dVar7);
    }
    a3[1] = iVar1;
    if (cVar11 == '\0') {
        iVar1 = (int)(fVar5 * (float)piVar4[3] + (float)piVar3[3] * fVar6);
    } else {
        iVar1 = (int)((double)piVar3[3] * dVar7);
    }
    a3[2] = iVar1;
    return uVar2 * 4;
}

/*
 * ninja_uses_libgcc_divide_helper_254a1e  0x8c254a1e
 * area name: in the ninja library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 */
u32 ninja_uses_libgcc_divide_helper_254a1e(int a0, int a1, int a2, double *a3) {
    double dVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int *piVar6;
    double in_dr0;
    double dVar7;
    float fVar8;
    float fVar9;
    u32 uVar10;
    double dVar11;
    double dVar12;
    u64 uVar13;
    u32 in_fr5;
    u32 uVar15;
    float fVar16;
    double dVar14;
    float fVar17;
    double in_dr6;
    u32 in_fr9;
    double dVar18;
    double dVar19;
    u32 in_fr11;
    double dVar20;
    float fVar21;
    double in_xd0;
    double in_xd2;
    double dVar22;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd10;
    u32 in_PR;
    u8 auStack_1c[8];
    u32 uStack_14;

    uStack_14 = in_PR;
    switch_jump(8, auStack_1c, &g_8c271d80);
    iVar2 = libgcc_divide_helper_0106dc(a1 + a2 + -1, a2);
    iVar4 = iVar2 * 0x10 + a0;
    piVar5 = (int *)(a1 * 0x10 + a0);
    iVar2 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar6 = (int *)(iVar2 * 0x10 + a0);
    iVar2 = libgcc_divide_helper_0106dc(a1 + 2, a2);
    iVar2 = a0 + iVar2 * 0x10;
    fVar8 = (float)(*piVar6 - *piVar5);
    dVar11 = (double)(u64)(u32)fVar8;
    dVar20 = in_xd2;

    dVar20 = (double)CONCAT44(fVar8, in_fr5);

    uVar15 = (u32)((u64)dVar20 >> 0x20);
    dVar22 = dVar20;
    if (0.0 <= fVar8) {

        dVar11 = (double)(u64)uVar15;
        dVar22 = in_xd2;

    } else {

        dVar11 = (double)(u64)uVar15;
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
        dVar22 = in_xd2;

        dVar11 = (double)(u64)(u32)(SUB84(dVar11, 0) + SUB84(in_dr0, 0));
    }

    stack0xffffffe8 = (double)CONCAT44(uStack_14, SUB84(dVar11, 0));

    iVar3 = *piVar5;
    fVar8 = (float)iVar3;
    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar8);
    if (iVar3 < 0) {

        dVar11 = (double)CONCAT44(0x4f800000, fVar8 + 4.2949673e+09);
    }

    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);

    fVar8 = SUB84(in_dr0, 0) - SUB84(dVar11, 0);

    iVar3 = (u32)(0 < *piVar6 - iVar3) * 4;

    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), *(u32 *)(auStack_1c + iVar3));
    in_xd0 = (double)CONCAT44(fVar8, SUB84(dVar20, 0));

    in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) / SUB84(dVar11, 0), SUB84(in_xd0, 0));

    uVar10 = (u32)((u64)dVar11 >> 0x20);
    dVar11 = (double)CONCAT44(uVar10, 0x3f800000);

    dVar11 = (double)CONCAT44(uVar10, 0x40000000);

    dVar20 = (double)CONCAT44(0x3f000000, in_fr11);
    uVar10 = (u32)((u64)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(uVar10, uVar10);

    fVar16 = (float)((u64)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(fVar16, SUB84(in_xd0, 0) * fVar16);

    fVar9 = (float)((u64)in_xd0 >> 0x20);
    fVar16 = SUB84(in_xd0, 0);
    dVar18 = in_xd4;
    dVar14 = in_xd0;

    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), fVar9);
    dVar18 = (double)CONCAT44(fVar16, in_fr9);
    dVar14 = in_xd6;

    dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) * SUB84(dVar11, 0), SUB84(dVar18, 0));
    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0) * fVar16);

    uVar10 = (u32)((u64)dVar18 >> 0x20);
    dVar12 = dVar18;

    dVar12 = (double)CONCAT44(uVar10, SUB84(dVar11, 0));

    dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) - fVar9, SUB84(dVar12, 0));

    fVar17 = SUB84(in_dr6, 0);
    dVar11 = dVar14;

    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fVar17);
    dVar11 = in_xd10;

    dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) - fVar17, SUB84(dVar12, 0));

    dVar7 = dVar12;

    dVar18 = (double)CONCAT44(uVar10, (int)((u64)dVar12 >> 0x20));
    dVar7 = in_xd8;

    fVar21 = (float)((u64)dVar20 >> 0x20);

    dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) * fVar21);

    dVar12 = (double)CONCAT44(0x3fc00000, SUB84(dVar12, 0));
    fVar8 = 2.5;

    dVar20 = (double)CONCAT44(fVar21, SUB84(dVar20, 0) * (float)((u64)dVar12 >> 0x20));

    in_xd4 = (double)CONCAT44(fVar16, fVar8);

    fVar8 = (float)((u64)dVar20 >> 0x20);

    in_xd4 = (double)CONCAT44((float)((u64)in_xd4 >> 0x20) * SUB84(in_xd4, 0), SUB84(in_xd4, 0));
    in_xd0 = (double)CONCAT44(fVar9 * fVar8, fVar16);

    dVar12 = (double)((u64)dVar20 & 0xffffffff);
    dVar11 = dVar22;

    fVar17 = fVar17 - SUB84(in_xd0, 0);

    dVar22 = (double)CONCAT44(*(u32 *)(iVar4 + 4), SUB84(dVar12, 0));

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - (float)((u64)in_xd4 >> 0x20));

    in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) - SUB84(dVar20, 0), SUB84(in_xd0, 0));

    dVar12 = dVar11;

    dVar12 = (double)CONCAT44(SUB84(dVar22, 0), fVar17);

    dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) + 1.0, SUB84(dVar12, 0));

    dVar19 = in_xd0;

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), (int)((u64)dVar18 >> 0x20));
    dVar19 = (double)CONCAT44((int)((u64)in_xd0 >> 0x20), SUB84(dVar18, 0));
    dVar18 = dVar11;

    dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) + SUB84(dVar22, 0), SUB84(dVar19, 0));

    fVar16 = (float)((u64)dVar12 >> 0x20);

    dVar11 = (double)CONCAT44(piVar5[1], SUB84(in_xd4, 0));
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar16);

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) * (float)((u64)dVar11 >> 0x20));

    dVar1 = dVar7;

    dVar14 = (double)CONCAT44(SUB84(dVar12, 0), SUB84(in_xd0, 0));
    dVar1 = (double)CONCAT44(SUB84(dVar19, 0), SUB84(dVar11, 0));

    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) * fVar8, SUB84(dVar14, 0));
    dVar22 = (double)(u64)(u32)((float)((u64)dVar1 >> 0x20) * (float)((u64)dVar22 >> 0x20) + SUB84(dVar22, 0));

    uVar15 = (u32)((u64)dVar19 >> 0x20);

    uVar13 = CONCAT44(piVar6[1], SUB84(dVar22, 0));
    dVar11 = (double)CONCAT44(uVar15, SUB84(dVar1, 0));

    uVar13 = (u64)(u32)((float)((u64)dVar11 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);

    fVar8 = (float)((u64)dVar14 >> 0x20);

    dVar20 = (double)CONCAT44(*(u32 *)(iVar2 + 4), (int)uVar13);
    dVar11 = (double)CONCAT44(fVar8, SUB84(dVar11, 0));

    fVar9 = (float)((u64)dVar20 >> 0x20);
    dVar20 = (double)CONCAT44(fVar9, (float)((u64)dVar11 >> 0x20) * fVar9 + SUB84(dVar20, 0));

    *(int *)a3 = SUB84(dVar20, 0);
    dVar11 = (double)CONCAT44(piVar5[2], SUB84(dVar11, 0));
    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fVar16);

    fVar9 = SUB84(dVar20, 0) * (float)((u64)dVar11 >> 0x20);

    uVar13 = CONCAT44(*(u32 *)(iVar4 + 8), fVar9);
    dVar11 = (double)CONCAT44(SUB84(dVar19, 0), SUB84(dVar11, 0));

    uVar13 = (u64)(u32)((float)((u64)dVar11 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);

    uVar13 = CONCAT44(piVar6[2], (int)uVar13);
    dVar11 = (double)CONCAT44(uVar15, SUB84(dVar11, 0));

    uVar13 = (u64)(u32)((float)((u64)dVar11 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);

    uVar13 = CONCAT44(*(u32 *)(iVar2 + 8), (int)uVar13);
    dVar14 = (double)CONCAT44(fVar8, SUB84(dVar11, 0));

    uVar13 = (u64)(u32)((float)((u64)dVar14 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);

    uVar10 = (u32)uVar13;

    *(u32 *)((int)a3 + 4) = uVar10;
    dVar11 = (double)CONCAT44(piVar5[3], SUB84(dVar14, 0));
    uVar10 = *(u32 *)(iVar4 + 0xc);

    dVar12 = (double)CONCAT44(fVar16 * (float)((u64)dVar11 >> 0x20), SUB84(dVar12, 0));

    dVar7 = (double)((s64)dVar19 << 0x20);
    uVar13 = CONCAT44(piVar6[3], uVar10);

    dVar12 =
        (double)CONCAT44((float)((u64)dVar7 >> 0x20) * (float)uVar13 + (float)((u64)dVar12 >> 0x20), SUB84(dVar12, 0));

    dVar19 = (double)((u64)uVar15 << 0x20);
    uVar13 = CONCAT44((int)(uVar13 >> 0x20), (int)((u64)dVar12 >> 0x20));
    dVar12 = dVar18;

    uVar13 = (u64)(u32)((float)((u64)dVar19 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);

    uVar13 = CONCAT44(*(u32 *)(iVar2 + 0xc), (int)uVar13);

    uVar13 = (u64)(u32)(fVar8 * (float)(uVar13 >> 0x20) + (float)uVar13);

    *(int *)(a3 + 1) = (int)uVar13;

    return 8;
}

/*
 * ninja_uses_libgcc_divide_helper_254b94  0x8c254b94
 * area name: in the ninja library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 */
u32 *ninja_uses_libgcc_divide_helper_254b94(int a0, int a1, int a2, int *a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    double in_dr0;
    double dVar6;
    double dVar7;
    float fVar8;
    double dVar9;
    u32 uVar11;
    double dVar10;
    float fVar12;
    u32 in_fr5;
    u32 uVar13;
    float fVar14;
    float fVar15;
    double in_dr6;
    float fVar16;
    u32 in_fr9;
    double dVar17;
    double dVar18;
    u32 in_fr11;
    double dVar19;
    u32 uVar20;
    u64 in_dr12;
    float fVar21;
    double in_xd0;
    double in_xd2;
    double dVar22;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd10;
    u32 in_PR;
    char cVar23;
    char cVar24;
    u8 auStack_20[8];
    u32 uStack_18;
    u32 uStack_14;

    cVar24 = '\0';
    cVar23 = '\0';
    uStack_14 = (u32)((u64)in_dr12 >> 0x20);
    uStack_18 = in_PR;
    switch_jump(8, auStack_20, &g_8c271d88);
    uVar20 = (u32)in_dr12;
    iVar1 = libgcc_divide_helper_0106dc(a1 + a2 + -1, a2);
    iVar3 = iVar1 * 0x10 + a0;
    piVar4 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar5 = (int *)(iVar1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 2, a2);
    iVar1 = a0 + iVar1 * 0x10;
    fVar8 = (float)(*piVar5 - *piVar4);
    dVar9 = (double)(u64)(u32)fVar8;
    dVar19 = in_xd2;
    if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(fVar8, in_fr5);
    }
    uVar13 = (u32)((u64)dVar19 >> 0x20);
    dVar22 = dVar19;
    if (cVar23 != '\0' || 0.0 <= fVar8) {
        if (cVar24 == '\0') {
            dVar9 = (double)(u64)uVar13;
            dVar22 = in_xd2;
        }
    } else {
        if (cVar24 == '\0') {
            dVar9 = (double)(u64)uVar13;
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
            dVar22 = in_xd2;
        } else {
            in_xd0 = -1.8629950226301174e-249;
        }
        if (cVar23 == '\0') {
            dVar9 = (double)(u64)(u32)(SUB84(dVar9, 0) + SUB84(in_dr0, 0));
        } else {
            dVar9 = dVar9 + in_dr0;
        }
    }
    if (cVar24 == '\0') {
        stack0xffffffe4 = (double)CONCAT44(uStack_18, SUB84(dVar9, 0));
    } else {
        stack0xffffffe4 = dVar22;
    }
    iVar2 = *piVar4;
    fVar8 = (float)iVar2;
    dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), fVar8);
    if (iVar2 < 0) {
        if (cVar23 == '\0') {
            dVar9 = (double)CONCAT44(0x4f800000, fVar8 + 4.2949673e+09);
        } else {
            dVar9 = (double)CONCAT44(0x4f800000, fVar8) + (double)CONCAT44(0x4f800000, fVar8);
        }
    }
    if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
    }
    if (cVar23 == '\0') {
        fVar8 = SUB84(in_dr0, 0) - SUB84(dVar9, 0);
    } else {
        fVar8 = SUB84(in_dr0 - dVar9, 0);
    }
    iVar2 = (u32)(0 < *piVar5 - iVar2) * 4;
    if (cVar24 == '\0') {
        dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), *(u32 *)(auStack_20 + iVar2));
        in_xd0 = (double)CONCAT44(fVar8, SUB84(dVar19, 0));
    } else {
        dVar22 = *(double *)(auStack_20 + iVar2);
    }
    if (cVar23 == '\0') {
        in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) / SUB84(dVar9, 0), SUB84(in_xd0, 0));
    } else {
        in_xd0 = in_xd0 / dVar9;
    }
    uVar11 = (u32)((u64)dVar9 >> 0x20);
    dVar9 = (double)CONCAT44(uVar11, 0x3f800000);
    if (cVar23 == '\0') {
        dVar9 = (double)CONCAT44(uVar11, 0x40000000);
    } else {
        dVar9 = dVar9 + dVar9;
    }
    if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(0x3f000000, in_fr11);
        uVar11 = (u32)((u64)in_xd0 >> 0x20);
        in_xd0 = (double)CONCAT44(uVar11, uVar11);
    } else {
        dVar19 = 0.1250000293366611;
        in_xd4 = in_xd0;
    }
    if (cVar23 == '\0') {
        fVar14 = (float)((u64)in_xd0 >> 0x20);
        in_xd0 = (double)CONCAT44(fVar14, SUB84(in_xd0, 0) * fVar14);
    } else {
        in_xd0 = in_xd0 * in_xd0;
    }
    fVar16 = (float)((u64)in_xd0 >> 0x20);
    fVar14 = SUB84(in_xd0, 0);
    dVar17 = in_xd4;
    dVar6 = in_xd0;
    if (cVar24 == '\0') {
        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), fVar16);
        dVar17 = (double)CONCAT44(fVar14, in_fr9);
        dVar6 = in_xd6;
    }
    if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * SUB84(dVar9, 0), SUB84(dVar17, 0));
        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0) * fVar14);
    } else {
        dVar17 = dVar17 * dVar9;
        in_dr6 = in_dr6 * in_xd0;
    }
    uVar11 = (u32)((u64)dVar17 >> 0x20);
    dVar10 = dVar17;
    if (cVar24 == '\0') {
        dVar10 = (double)CONCAT44(uVar11, SUB84(dVar9, 0));
    }
    if (cVar23 == '\0') {
        dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) - fVar16, SUB84(dVar10, 0));
    } else {
        dVar10 = dVar10 - in_xd0;
    }
    fVar15 = SUB84(in_dr6, 0);
    dVar9 = dVar6;
    if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), fVar15);
        dVar9 = in_xd10;
    }
    if (cVar23 == '\0') {
        dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) - fVar15, SUB84(dVar10, 0));
    } else {
        dVar10 = dVar10 - in_dr6;
    }
    dVar7 = dVar10;
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(uVar11, (int)((u64)dVar10 >> 0x20));
        dVar7 = in_xd8;
    }
    fVar21 = (float)((u64)dVar19 >> 0x20);
    if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) * fVar21);
    } else {
        dVar17 = dVar17 * dVar19;
    }
    if (cVar24 == '\0') {
        dVar10 = (double)CONCAT44(0x3fc00000, SUB84(dVar10, 0));
    } else {
        dVar10 = 8.000001899898052;
    }
    if (cVar24 == '\0') {
        fVar8 = 2.5;
    }
    fVar12 = (float)((u64)dVar10 >> 0x20);
    if (cVar23 == '\0') {
        dVar19 = (double)CONCAT44(fVar21, SUB84(dVar19, 0) * fVar12);
    } else {
        dVar19 = dVar19 * dVar10;
    }
    if (cVar24 == '\0') {
        in_xd4 = (double)CONCAT44(fVar14, fVar8);
    }
    fVar8 = (float)((u64)dVar19 >> 0x20);
    if (cVar23 == '\0') {
        in_xd4 = (double)CONCAT44((float)((u64)in_xd4 >> 0x20) * SUB84(in_xd4, 0), SUB84(in_xd4, 0));
        in_xd0 = (double)CONCAT44(fVar16 * fVar8, fVar14);
    } else {
        in_xd4 = in_xd4 * in_xd4;
        in_xd0 = in_xd0 * dVar19;
    }
    if (cVar24 == '\0') {
        dVar10 = (double)CONCAT44(fVar12, SUB84(dVar19, 0));
        dVar9 = dVar22;
    }
    if (cVar23 == '\0') {
        fVar15 = fVar15 - SUB84(in_xd0, 0);
    } else {
        fVar15 = SUB84(in_dr6 - in_xd0, 0);
    }
    if (cVar23 == '\0') {
        dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) - (float)((u64)in_xd4 >> 0x20));
        in_xd0 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) - SUB84(dVar19, 0), SUB84(in_xd0, 0));
    } else {
        dVar10 = dVar10 - in_xd4;
        in_xd0 = in_xd0 - dVar19;
    }
    dVar22 = dVar9;
    if (cVar24 == '\0') {
        dVar22 = (double)CONCAT44(SUB84(dVar10, 0), fVar15);
    }
    if (cVar23 == '\0') {
        dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + 1.0, SUB84(dVar22, 0));
    } else {
        dVar22 = dVar22 + (double)CONCAT44(0x3f800000, SUB84(in_xd4, 0));
    }
    fVar14 = (float)((u64)dVar17 >> 0x20);
    dVar18 = in_xd0;
    if (cVar24 == '\0') {
        dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), fVar14);
        fVar14 = (float)((u64)dVar9 >> 0x20);
        dVar18 = (double)CONCAT44((int)((u64)in_xd0 >> 0x20), SUB84(dVar17, 0));
    }
    if (cVar23 == '\0') {
        dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) + SUB84(dVar10, 0), SUB84(dVar18, 0));
    } else {
        dVar18 = dVar18 + dVar10;
    }
    fVar16 = (float)((u64)dVar22 >> 0x20);
    dVar9 = dVar22;
    if (cVar24 == '\0') {
        dVar9 = (double)CONCAT44(fVar16, uVar20);
    }
    if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((float)piVar5[1], (float)*(int *)(iVar1 + 4));
    } else {
        dVar17 = (double)piVar5[1];
    }
    if (cVar24 == '\0') {
        dVar6 = (double)CONCAT44(SUB84(dVar22, 0), SUB84(in_xd0, 0));
    }
    if (cVar23 == '\0') {
        fVar8 = (float)((u64)dVar6 >> 0x20) * fVar8;
    } else {
        fVar8 = (float)((u64)(dVar6 * dVar19) >> 0x20);
    }
    if (cVar23 == '\0') {
        fVar15 = (float)piVar4[1];
        dVar19 = (double)CONCAT44(fVar15, (float)*(int *)(iVar3 + 4));
        dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) * fVar15, SUB84(dVar9, 0));
    } else {
        dVar19 = (double)piVar4[1];
        dVar9 = dVar9 * dVar19;
    }
    uVar20 = SUB84(dVar18, 0);
    dVar6 = dVar7;
    if (cVar24 == '\0') {
        dVar6 = (double)CONCAT44(uVar20, SUB84(dVar19, 0));
    }
    fVar15 = (float)((u64)dVar18 >> 0x20);
    if (cVar23 == '\0') {
        fVar21 = fVar8 * SUB84(dVar17, 0) + fVar15 * (float)((u64)dVar17 >> 0x20) +
                 (float)((u64)dVar6 >> 0x20) * SUB84(dVar6, 0) + (float)((u64)dVar9 >> 0x20);
        dVar9 = (double)CONCAT44(fVar21, SUB84(dVar9, 0));
        iVar2 = (int)fVar21;
    } else {
        iVar2 = (int)dVar9;
    }
    dVar19 = dVar22;
    if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(fVar16, SUB84(dVar9, 0));
    }
    *a3 = iVar2;
    if (cVar23 == '\0') {
        dVar9 = (double)CONCAT44((float)piVar5[2], (float)*(int *)(iVar1 + 8));
    } else {
        dVar9 = (double)piVar5[2];
    }
    if (cVar23 == '\0') {
        fVar21 = (float)piVar4[2];
        dVar6 = (double)CONCAT44(fVar21, (float)*(int *)(iVar3 + 8));
        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) * fVar21, SUB84(dVar19, 0));
    } else {
        dVar6 = (double)piVar4[2];
        dVar19 = dVar19 * dVar6;
    }
    dVar17 = dVar7;
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(uVar20, SUB84(dVar6, 0));
    }
    if (cVar23 == '\0') {
        iVar2 = (int)(fVar8 * SUB84(dVar9, 0) + fVar15 * (float)((u64)dVar9 >> 0x20) +
                      (float)((u64)dVar17 >> 0x20) * SUB84(dVar17, 0) + (float)((u64)dVar19 >> 0x20));
    } else {
        iVar2 = (int)dVar19;
    }
    a3[1] = iVar2;
    if (cVar24 == '\0') {
        fVar14 = (float)*(int *)(iVar1 + 0xc);
    }
    if (cVar23 == '\0') {
        dVar9 = (double)CONCAT44((float)piVar5[3], (float)*(int *)(iVar1 + 0xc));
    } else {
        dVar9 = (double)piVar5[3];
    }
    if (cVar23 == '\0') {
        fVar21 = (float)piVar4[3];
        dVar19 = (double)CONCAT44(fVar21, (float)*(int *)(iVar3 + 0xc));
        fVar16 = fVar16 * fVar21;
    } else {
        dVar19 = (double)piVar4[3];
        fVar16 = (float)((u64)(dVar22 * dVar19) >> 0x20);
    }
    if (cVar24 == '\0') {
        dVar7 = (double)CONCAT44(uVar20, SUB84(dVar19, 0));
    }
    if (cVar23 == '\0') {
        fVar16 = (float)((u64)dVar7 >> 0x20) * SUB84(dVar7, 0) + fVar16;
    }
    if (cVar24 == '\0') {
        dVar18 = (double)((u64)(u32)fVar15 << 0x20);
        dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), fVar16);
    }
    if (cVar23 == '\0') {
        iVar1 = (int)(fVar8 * fVar14 + (float)((u64)dVar18 >> 0x20) * (float)((u64)dVar9 >> 0x20) + SUB84(dVar9, 0));
    } else {
        iVar1 = (int)dVar9;
    }
    a3[2] = iVar1;
    return &g_8c254e64;
}

/*
 * ninja_draw_254d1a  0x8c254d1a
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 */
u32 ninja_draw_254d1a(u32 a0, u32 unused_a1, u32 a2, u8 *a3) {
    u32 uVar1;
    int a4;
    u32 a5;
    u32 uVar2;
    u32 uVar3;
    float fVar4;
    u8 auStack_18[16];

    a5 = g_8c4aad5c * 4;
    a4 = *(int *)(g_8c4aad4c + a5);
    if (a4 != 0) {
        a2 = *(u32 *)(g_8c4aad50 + a5);
        fVar4 = g_8c4aad54;
        if (2.1474836e+09 < g_8c4aad54) {
            fVar4 = g_8c4aad54 + -4.2949673e+09;
        }
        a5 = 0;
        uVar2 = a2;
        while (uVar3 = uVar2, 1 < uVar3 - a5) {
            uVar2 = a5 + uVar3 >> 1;
            if (*(u32 *)(uVar2 * 0x10 + a4) <= (u32)(int)fVar4) {
                a5 = uVar2;
                uVar2 = uVar3;
            }
        }
        a3 = auStack_18;
        (*g_8c4ab0b4)(a4, a5, a2, a3);
    }
    uVar1 = touch_fields_30_3c(g_8c4aad60, a5, a2, a3, a0);
    g_8c4aad5c = g_8c4aad5c + 1;
    return uVar1;
}

/*
 * ninja_vec_254db0  0x8c254db0
 * area name: in the ninja library code range; behaviour name: mostly calls vec functions
 */
u32 ninja_vec_254db0(u32 a0, u32 unused_a1, u32 a2, u8 *a3) {
    u32 uVar1;
    int a4;
    u32 a5;
    u32 uVar2;
    u32 uVar3;
    float fVar4;
    u8 auStack_18[16];

    a5 = g_8c4aad5c * 4;
    a4 = *(int *)(g_8c4aad4c + a5);
    if (a4 != 0) {
        a2 = *(u32 *)(g_8c4aad50 + a5);
        fVar4 = g_8c4aad54;
        if (2.1474836e+09 < g_8c4aad54) {
            fVar4 = g_8c4aad54 + -4.2949673e+09;
        }
        a5 = 0;
        uVar2 = a2;
        while (uVar3 = uVar2, 1 < uVar3 - a5) {
            uVar2 = a5 + uVar3 >> 1;
            if (*(u32 *)(uVar2 * 0x10 + a4) <= (u32)(int)fVar4) {
                a5 = uVar2;
                uVar2 = uVar3;
            }
        }
        a3 = auStack_18;
        (*g_8c4ab0b4)(a4, a5, a2, a3);
    }
    uVar1 = matrix_scale(g_8c4aad60, a5, a2, a3, a0);
    g_8c4aad5c = g_8c4aad5c + 1;
    return uVar1;
}

/*
 * ninja_vec_254e80  0x8c254e80
 * area name: in the ninja library code range; behaviour name: mostly calls vec functions
 */
u32 ninja_vec_254e80(int a0) {
    u32 uVar1;
    int a4;
    u32 a5;
    u32 a6;
    u32 uVar2;
    u32 uVar3;
    float fVar4;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    a4 = *(int *)(g_8c4aad4c + g_8c4aad5c * 4);
    if (a4 == 0) {
        uVar1 = njRotateXYZ(g_8c4aad60, *(u32 *)(a0 + 0x14), *(u32 *)(a0 + 0x18), *(u32 *)(a0 + 0x1c), a0);
    } else {
        a6 = *(u32 *)(g_8c4aad50 + g_8c4aad5c * 4);
        fVar4 = g_8c4aad54;
        if (2.1474836e+09 < g_8c4aad54) {
            fVar4 = g_8c4aad54 + -4.2949673e+09;
        }
        a5 = 0;
        uVar2 = a6;
        while (uVar3 = uVar2, 1 < uVar3 - a5) {
            uVar2 = a5 + uVar3 >> 1;
            if (*(u32 *)(uVar2 * 0x10 + a4) <= (u32)(int)fVar4) {
                a5 = uVar2;
                uVar2 = uVar3;
            }
        }
        (*g_8c4ab0b8)(a4, a5, a6, &uStack_18);
        uVar1 = njRotateXYZ(g_8c4aad60, uStack_18, uStack_14, uStack_10, a0);
    }
    g_8c4aad5c = g_8c4aad5c + 1;
    return uVar1;
}

/*
 * ninja_calls_float_calc_254f1e  0x8c254f1e
 * area name: in the ninja library code range; behaviour name: its callees mostly do: float_calc
 */
u32 ninja_calls_float_calc_254f1e(int a0) {
    u32 uVar1;
    int a4;
    u32 a5;
    u32 a6;
    u32 uVar2;
    u32 uVar3;
    float fVar4;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    a4 = *(int *)(g_8c4aad4c + g_8c4aad5c * 4);
    if (a4 == 0) {
        uVar1 = ninja_float_calc_256e18(g_8c4aad60, *(u32 *)(a0 + 0x14), *(u32 *)(a0 + 0x18), *(u32 *)(a0 + 0x1c), a0);
    } else {
        a6 = *(u32 *)(g_8c4aad50 + g_8c4aad5c * 4);
        fVar4 = g_8c4aad54;
        if (2.1474836e+09 < g_8c4aad54) {
            fVar4 = g_8c4aad54 + -4.2949673e+09;
        }
        a5 = 0;
        uVar2 = a6;
        while (uVar3 = uVar2, 1 < uVar3 - a5) {
            uVar2 = a5 + uVar3 >> 1;
            if (*(u32 *)(uVar2 * 0x10 + a4) <= (u32)(int)fVar4) {
                a5 = uVar2;
                uVar2 = uVar3;
            }
        }
        (*g_8c4ab0b8)(a4, a5, a6, &uStack_18);
        uVar1 = ninja_float_calc_256e18(g_8c4aad60, uStack_18, uStack_14, uStack_10, a0);
    }
    g_8c4aad5c = g_8c4aad5c + 1;
    return uVar1;
}

/*
 * ninja_uses_libgcc_divide_helper_254fbc  0x8c254fbc
 * area name: in the ninja library code range; behaviour name: its main named callee is libgcc_divide_helper_0106dc
 * called by: ninja_uses_catmull_rom_vec3_255346
 */
int ninja_uses_libgcc_divide_helper_254fbc(int a0, int a1, int a2, u32 *a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int *piVar6;
    u8 auStack_18[12];

    switch_jump(8, auStack_18, &g_8c271d90);
    iVar1 = libgcc_divide_helper_0106dc(a1 + a2 + -1, a2);
    iVar1 = iVar1 * 8 + a0;
    piVar5 = (int *)(a1 * 8 + a0);
    iVar2 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar6 = (int *)(iVar2 * 8 + a0);
    iVar2 = libgcc_divide_helper_0106dc(a1 + 2, a2);
    iVar4 = *piVar5;
    iVar3 = *piVar6;
    *a3 = *(u32 *)(iVar1 + 4);
    a3[1] = piVar5[1];
    a3[2] = piVar6[1];
    a3[3] = *(u32 *)(iVar2 * 8 + a0 + 4);
    return (u32)(0 < iVar3 - iVar4) << 2;
}

/*
 * keyframe_pair_nj  0x8c255080
 * the Ninja library's copy of keyframe_pair
 * called by: ninja_vec_2556c8
 */
int keyframe_pair_nj(int a0, int a1, u32 a2, int *a3) {
    int iVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;
    u8 auStack_14[12];

    switch_jump(8, auStack_14, &g_8c271d98);
    piVar4 = (int *)(a1 * 8 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar2 = (int *)(a0 + iVar1 * 8);
    iVar3 = *piVar4;
    iVar1 = *piVar2;
    *a3 = piVar4[1];
    a3[1] = piVar2[1];
    return (u32)(0 < iVar1 - iVar3) << 2;
}

/*
 * vec3_lerp_normalize  0x8c25513c
 * a2 = normalize(lerp(a0, a1, t)), falling back to (0, 0, 1) for a near-zero result
 * called by: ninja_vec_2556c8
 */
u32 *vec3_lerp_normalize(float *a0, float *a1, float *a2) {
    float *pfVar1;
    float *pfVar2;
    float fVar3;
    u64 in_dr4;
    float fVar4;

    fVar4 = (float)((u64)in_dr4 >> 0x20);
    fVar3 = 1.0 - fVar4;
    pfVar1 = a2 + 1;
    pfVar2 = a2 + 2;
    *a2 = *a0 * fVar3 + *a1 * fVar4;
    *pfVar1 = fVar3 * a0[1] + a1[1] * fVar4;
    fVar3 = fVar3 * a0[2] + a1[2] * fVar4;
    *pfVar2 = fVar3;
    fVar3 = *a2 * *a2 + *pfVar1 * *pfVar1 + fVar3 * fVar3;
    if (fVar3 <= 1e-05) {
        *a2 = 0.0;
        *pfVar1 = 0.0;
        *pfVar2 = 1.0;
    } else {
        fVar3 = 1.0 / SQRT(fVar3);
        *a2 = *a2 * fVar3;
        *pfVar1 = *pfVar1 * fVar3;
        *pfVar2 = *pfVar2 * fVar3;
    }
    return &g_8c255408;
}

/*
 * Vec3_lerp_nj  0x8c2551aa
 * a2 = lerp(a0, a1, fr4) (the Ninja library's copy)
 * called by: ninja_vec_2556c8
 */
u32 Vec3_lerp_nj(float *a0, float *a1, float *a2) {
    float fVar1;
    u64 in_dr4;
    float fVar2;

    fVar2 = (float)((u64)in_dr4 >> 0x20);
    fVar1 = 1.0 - fVar2;
    *a2 = *a0 * fVar1 + *a1 * fVar2;
    a2[1] = fVar1 * a0[1] + a1[1] * fVar2;
    a2[2] = fVar1 * a0[2] + a1[2] * fVar2;
    return 8;
}

/*
 * ninja_float_calc_2551d4  0x8c2551d4
 * area name: in the ninja library code range; behaviour name: floating-point arithmetic
 * called by: ninja_uses_catmull_rom_vec3_255346
 */
u32 *ninja_float_calc_2551d4(float *a0, float *a1, float *a2, float *a3) {
    float *pfVar1;
    float *pfVar2;
    float fVar3;
    u64 in_dr4;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float *in_stack_00000000;

    fVar4 = (float)((u64)in_dr4 >> 0x20);
    fVar3 = fVar4 * fVar4;
    fVar6 = fVar4 * fVar3;
    fVar5 = ((fVar3 * 2.0 - fVar4) - fVar6) * 0.5;
    fVar7 = (fVar6 * 1.5 - fVar3 * 2.5) + 1.0;
    fVar4 = (fVar4 * 0.5 - fVar6 * 1.5) + fVar3 * 2.0;
    pfVar1 = in_stack_00000000 + 1;
    fVar3 = (fVar6 - fVar3) * 0.5;
    *in_stack_00000000 = fVar3 * *a3 + fVar4 * *a2 + fVar5 * *a0 + *a1 * fVar7;
    *pfVar1 = fVar3 * a3[1] + fVar4 * a2[1] + fVar5 * a0[1] + a1[1] * fVar7;
    pfVar2 = in_stack_00000000 + 2;
    fVar3 = fVar3 * a3[2] + fVar4 * a2[2] + fVar5 * a0[2] + a1[2] * fVar7;
    *pfVar2 = fVar3;
    fVar3 = *in_stack_00000000 * *in_stack_00000000 + *pfVar1 * *pfVar1 + fVar3 * fVar3;
    if (fVar3 <= 1e-05) {
        *in_stack_00000000 = 0.0;
        *pfVar1 = 0.0;
        *pfVar2 = 1.0;
    } else {
        fVar3 = 1.0 / SQRT(fVar3);
        *in_stack_00000000 = *in_stack_00000000 * fVar3;
        *pfVar1 = *pfVar1 * fVar3;
        *pfVar2 = *pfVar2 * fVar3;
    }
    return &g_8c255408;
}

/*
 * catmull_rom_vec3  0x8c2552b0
 * *s0 = point at t (fr5) on the Catmull-Rom spline through a0, a1, a2, a3
 * called by: ninja_uses_catmull_rom_vec3_255346
 */
u32 catmull_rom_vec3(float *a0, float *a1, float *a2, float *a3, float *s0) {
    float fVar1;
    u64 in_dr4;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;

    fVar5 = (float)((u64)in_dr4 >> 0x20);
    fVar1 = fVar5 * fVar5;
    fVar3 = fVar5 * fVar1;
    fVar2 = ((fVar1 * 2.0 - fVar5) - fVar3) * 0.5;
    fVar4 = (fVar3 * 1.5 - fVar1 * 2.5) + 1.0;
    fVar5 = (fVar5 * 0.5 - fVar3 * 1.5) + fVar1 * 2.0;
    fVar1 = (fVar3 - fVar1) * 0.5;
    *s0 = fVar1 * *a3 + fVar5 * *a2 + fVar2 * *a0 + *a1 * fVar4;
    s0[1] = fVar1 * a3[1] + fVar5 * a2[1] + fVar2 * a0[1] + a1[1] * fVar4;
    s0[2] = fVar1 * a3[2] + fVar5 * a2[2] + fVar2 * a0[2] + a1[2] * fVar4;
    return 8;
}

/*
 * ninja_uses_catmull_rom_vec3_255346  0x8c255346
 * area name: in the ninja library code range; behaviour name: its main named callee is catmull_rom_vec3
 */
u32 ninja_uses_catmull_rom_vec3_255346(u32 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *puVar4;
    int iVar5;
    u32 uVar6;
    int *a5;
    u32 uVar7;
    int *a6;
    u32 uVar8;
    int *a7;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    double in_dr2;
    double dVar13;
    float fVar14;
    u32 in_fr5;
    float fVar15;
    u32 in_fr12;
    u64 in_dr14;
    bool bVar16;
    u32 uVar17;
    char cVar18;
    char cVar19;
    u32 uStack_74;
    int iStack_4c;
    int iStack_48;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int aiStack_30[3];
    u32 uStack_24;
    u32 uStack_20;

    cVar19 = '\0';
    cVar18 = '\0';
    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    iVar9 = 0;
    if (a0[1] == 0) {
        return ain0;
    }
    if ((*a0 & 8) != 0) {
        return *a0;
    }
    puVar4 = (u32 *)a0[1];
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    fVar14 = 2.1474836e+09;
    iVar11 = puVar4[2];
    iVar5 = g_8c4aad78 * 4;
    if (g_8c4aad84 == 1) {
        iVar10 = *(int *)(g_8c4aad68 + iVar5);
        if (iVar10 != 0) {
            fVar14 = g_8c4aad70;
            if (2.1474836e+09 < g_8c4aad70) {
                fVar14 = g_8c4aad70 + -4.2949673e+09;
            }
            uVar7 = 0;
            uVar6 = *(u32 *)(g_8c4aad6c + iVar5);
            while (uVar8 = uVar6, 1 < uVar8 - uVar7) {
                uVar6 = uVar7 + uVar8 >> 1;
                if (*(u32 *)(uVar6 * 8 + iVar10) <= (u32)(int)fVar14) {
                    uVar7 = uVar6;
                    uVar6 = uVar8;
                }
            }
            ninja_uses_libgcc_divide_helper_254fbc(iVar10, uVar7, *(u32 *)(g_8c4aad6c + iVar5), &iStack_3c);
            iVar9 = 1;
        }
    } else if (g_8c4aad84 == 2) {
        iVar10 = *(int *)(g_8c4aad68 + iVar5);
        if (iVar10 != 0) {
            fVar14 = g_8c4aad70;
            if (2.1474836e+09 < g_8c4aad70) {
                fVar14 = g_8c4aad70 + -4.2949673e+09;
            }
            uVar7 = 0;
            uVar6 = *(u32 *)(g_8c4aad6c + iVar5);
            while (uVar8 = uVar6, 1 < uVar8 - uVar7) {
                uVar6 = uVar7 + uVar8 >> 1;
                if (*(u32 *)(uVar6 * 8 + iVar10) <= (u32)(int)fVar14) {
                    uVar7 = uVar6;
                    uVar6 = uVar8;
                }
            }
            ninja_uses_libgcc_divide_helper_254fbc(iVar10, uVar7, *(u32 *)(g_8c4aad6c + iVar5), &iStack_4c);
            iVar9 = 2;
        }
    } else if (g_8c4aad84 == 3) {
        iVar10 = *(int *)(g_8c4aad68 + iVar5);
        if (iVar10 != 0) {
            if (g_8c4aad70 <= 2.1474836e+09) {
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aad70);
            } else {
                in_dr2 = (double)CONCAT44(0xcf800000, g_8c4aad70 + -4.2949673e+09);
            }
            uVar7 = 0;
            uVar6 = *(u32 *)(g_8c4aad6c + iVar5);
            while (uVar8 = uVar6, 1 < uVar8 - uVar7) {
                uVar6 = uVar7 + uVar8 >> 1;
                if (*(u32 *)(uVar6 * 8 + iVar10) <= (u32)(int)SUB84(in_dr2, 0)) {
                    uVar7 = uVar6;
                    uVar6 = uVar8;
                }
            }
            ninja_uses_libgcc_divide_helper_254fbc(iVar10, uVar7, *(u32 *)(g_8c4aad6c + iVar5), &iStack_3c);
            iVar9 = 1;
        }
        g_8c4aad78 = g_8c4aad78 + 1;
        iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
        if (iVar5 != 0) {
            uVar7 = *(u32 *)(g_8c4aad6c + g_8c4aad78 * 4);
            if (cVar19 == '\0') {
                dVar13 = (double)CONCAT44(g_8c4aad70, in_fr5);
            } else {
                dVar13 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
            }
            fVar15 = (float)((u64)dVar13 >> 0x20);
            if (cVar18 == '\0') {
                bVar16 = fVar14 < fVar15;
            } else {
                bVar16 = (double)CONCAT44(in_fr12, fVar14) < dVar13;
            }
            uVar6 = 0;
            if (bVar16) {
                if (cVar19 == '\0') {
                    dVar13 = (double)CONCAT44(0xcf800000, fVar15);
                } else {
                    dVar13 = -1.8639332822651773e-249;
                }
                if (cVar18 == '\0') {
                    fVar14 = (float)((u64)dVar13 >> 0x20);
                    in_dr2 = (double)CONCAT44(fVar14, SUB84(dVar13, 0) + fVar14);
                } else {
                    in_dr2 = dVar13 + dVar13;
                }
            } else if (cVar19 == '\0') {
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar15);
            }
            uVar8 = uVar7;
            if (cVar18 == '\0') {
                uVar17 = (u32)SUB84(in_dr2, 0);
            } else {
                uVar17 = (u32)in_dr2;
            }
            while (uStack_74 = uVar8, 1 < uStack_74 - uVar6) {
                uVar8 = uStack_74 + uVar6 >> 1;
                if (*(u32 *)(uVar8 * 8 + iVar5) <= uVar17) {
                    uVar6 = uVar8;
                    uVar8 = uStack_74;
                }
            }
            ninja_uses_libgcc_divide_helper_254fbc(iVar5, uVar6, uVar7, &iStack_4c);
            iVar9 = iVar9 + 2;
        }
    }
    iVar5 = g_8c4ab0c4;
    a7 = &iStack_44;
    a5 = aiStack_30;
    a6 = &iStack_40;
    if (iVar9 == 1) {
        iVar9 = 0;
        iVar10 = 0;
        if (0 < iVar11) {
            do {
                a7 = (int *)(aiStack_30[0] + iVar10);
                a5 = (int *)(iStack_38 + iVar10);
                a6 = (int *)(iStack_34 + iVar10);
                catmull_rom_vec3(iVar10 + iStack_3c, a5, a6, a7);
                iVar9 = iVar9 + 1;
                iVar10 = iVar10 + 0xc;
            } while (iVar9 < iVar11);
        }
        *(int *)a0[1] = iVar5;
    } else {
        if (iVar9 == 2) {
            iVar9 = 0;
            iVar10 = 0;
            if (0 < iVar11) {
                do {
                    a5 = (int *)(iVar10 + iStack_48);
                    a7 = (int *)(iStack_40 + iVar10);
                    a6 = (int *)(iStack_44 + iVar10);
                    ninja_float_calc_2551d4(iStack_4c + iVar10, a5, a6, a7);
                    iVar9 = iVar9 + 1;
                    iVar10 = iVar10 + 0xc;
                } while (iVar9 < iVar11);
            }
        } else {
            if (iVar9 != 3)
                goto LAB_8c25569a;
            iVar9 = 0;
            iVar10 = iVar11 * 0xc + g_8c4ab0c4;
            iVar12 = 0;
            if (0 < iVar11) {
                do {
                    catmull_rom_vec3(iStack_3c + iVar12, iStack_38 + iVar12, iStack_34 + iVar12,
                                     aiStack_30[0] + iVar12);
                    a5 = (int *)(iStack_48 + iVar12);
                    a7 = (int *)(iStack_40 + iVar12);
                    a6 = (int *)(iStack_44 + iVar12);
                    ninja_float_calc_2551d4(iStack_4c + iVar12, a5, a6, a7);
                    iVar9 = iVar9 + 1;
                    iVar12 = iVar12 + 0xc;
                } while (iVar9 < iVar11);
            }
            *(int *)a0[1] = iVar5;
            iVar5 = iVar10;
        }
        *(int *)(a0[1] + 4) = iVar5;
    }
LAB_8c25569a:
    uVar1 = (*g_8c4ab0bc)(a0[1], a5, a6, a7);
    *(u32 *)a0[1] = uVar2;
    *(u32 *)(a0[1] + 4) = uVar3;
    return uVar1;
}

/*
 * ninja_vec_2556c8  0x8c2556c8
 * area name: in the ninja library code range; behaviour name: mostly calls vec functions
 */
u32 ninja_vec_2556c8(u32 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *puVar4;
    int iVar5;
    u32 uVar6;
    int *a5;
    u32 uVar7;
    int *a6;
    u32 uVar8;
    int *a7;
    int iVar9;
    u32 uVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    double in_dr2;
    double dVar14;
    float fVar15;
    u32 in_fr5;
    float fVar16;
    u32 in_fr12;
    u64 in_dr14;
    bool bVar17;
    u32 uVar18;
    char cVar19;
    char cVar20;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    u32 uStack_24;
    u32 uStack_20;

    cVar20 = '\0';
    cVar19 = '\0';
    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    iVar9 = 0;
    if (a0[1] == 0) {
        return ain0;
    }
    if ((*a0 & 8) != 0) {
        return *a0;
    }
    puVar4 = (u32 *)a0[1];
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    fVar15 = 2.1474836e+09;
    iVar12 = puVar4[2];
    iVar5 = g_8c4aad78 * 4;
    if (g_8c4aad84 == 1) {
        iVar11 = *(int *)(g_8c4aad68 + iVar5);
        if (iVar11 != 0) {
            fVar15 = g_8c4aad70;
            if (2.1474836e+09 < g_8c4aad70) {
                fVar15 = g_8c4aad70 + -4.2949673e+09;
            }
            uVar6 = 0;
            uVar7 = *(u32 *)(g_8c4aad6c + iVar5);
            while (uVar8 = uVar7, 1 < uVar8 - uVar6) {
                uVar7 = uVar6 + uVar8 >> 1;
                if (*(u32 *)(uVar7 * 8 + iVar11) <= (u32)(int)fVar15) {
                    uVar6 = uVar7;
                    uVar7 = uVar8;
                }
            }
            keyframe_pair_nj(iVar11, uVar6, *(u32 *)(g_8c4aad6c + iVar5), &iStack_34);
            iVar9 = 1;
        }
    } else if (g_8c4aad84 == 2) {
        iVar11 = *(int *)(g_8c4aad68 + iVar5);
        if (iVar11 != 0) {
            fVar15 = g_8c4aad70;
            if (2.1474836e+09 < g_8c4aad70) {
                fVar15 = g_8c4aad70 + -4.2949673e+09;
            }
            uVar6 = 0;
            uVar7 = *(u32 *)(g_8c4aad6c + iVar5);
            while (uVar8 = uVar7, 1 < uVar8 - uVar6) {
                uVar7 = uVar6 + uVar8 >> 1;
                if (*(u32 *)(uVar7 * 8 + iVar11) <= (u32)(int)fVar15) {
                    uVar6 = uVar7;
                    uVar7 = uVar8;
                }
            }
            keyframe_pair_nj(iVar11, uVar6, *(u32 *)(g_8c4aad6c + iVar5), &iStack_3c);
            iVar9 = 2;
        }
    } else if (g_8c4aad84 == 3) {
        iVar11 = *(int *)(g_8c4aad68 + iVar5);
        if (iVar11 != 0) {
            if (g_8c4aad70 <= 2.1474836e+09) {
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aad70);
            } else {
                in_dr2 = (double)CONCAT44(g_8c4aad70 + -4.2949673e+09, g_8c4aad70 + -4.2949673e+09);
            }
            uVar6 = 0;
            uVar7 = *(u32 *)(g_8c4aad6c + iVar5);
            while (uVar8 = uVar7, 1 < uVar8 - uVar6) {
                uVar7 = uVar6 + uVar8 >> 1;
                if (*(u32 *)(uVar7 * 8 + iVar11) <= (u32)(int)SUB84(in_dr2, 0)) {
                    uVar6 = uVar7;
                    uVar7 = uVar8;
                }
            }
            keyframe_pair_nj(iVar11, uVar6, *(u32 *)(g_8c4aad6c + iVar5), &iStack_34);
            iVar9 = 1;
        }
        g_8c4aad78 = g_8c4aad78 + 1;
        iVar5 = *(int *)(g_8c4aad68 + g_8c4aad78 * 4);
        if (iVar5 != 0) {
            uVar6 = 0;
            uVar7 = *(u32 *)(g_8c4aad6c + g_8c4aad78 * 4);
            if (cVar20 == '\0') {
                dVar14 = (double)CONCAT44(g_8c4aad70, in_fr5);
            } else {
                dVar14 = (double)CONCAT44(g_8c4aad74, g_8c4aad70);
            }
            fVar16 = (float)((u64)dVar14 >> 0x20);
            if (cVar19 == '\0') {
                bVar17 = fVar15 < fVar16;
            } else {
                bVar17 = (double)CONCAT44(in_fr12, fVar15) < dVar14;
            }
            if (bVar17) {
                if (cVar20 == '\0') {
                    dVar14 = (double)CONCAT44(0xcf800000, fVar16);
                } else {
                    dVar14 = 8.151439918505315e-41;
                }
                if (cVar19 == '\0') {
                    fVar15 = (float)((u64)dVar14 >> 0x20);
                    in_dr2 = (double)CONCAT44(fVar15, SUB84(dVar14, 0) + fVar15);
                } else {
                    in_dr2 = dVar14 + dVar14;
                }
            } else if (cVar20 == '\0') {
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar16);
            }
            uVar8 = uVar7;
            if (cVar19 == '\0') {
                uVar18 = (u32)SUB84(in_dr2, 0);
            } else {
                uVar18 = (u32)in_dr2;
            }
            while (uVar10 = uVar8, 1 < uVar10 - uVar6) {
                uVar8 = uVar6 + uVar10 >> 1;
                if (*(u32 *)(uVar8 * 8 + iVar5) <= uVar18) {
                    uVar6 = uVar8;
                    uVar8 = uVar10;
                }
            }
            keyframe_pair_nj(iVar5, uVar6, uVar7, &iStack_3c);
            iVar9 = iVar9 + 2;
        }
    }
    iVar5 = g_8c4ab0c4;
    a5 = &iStack_34;
    a6 = &iStack_3c;
    a7 = &iStack_38;
    if (iVar9 == 1) {
        iVar9 = 0;
        iVar11 = 0;
        if (0 < iVar12) {
            do {
                a5 = (int *)(iStack_30 + iVar11);
                a6 = (int *)(iVar11 + iVar5);
                Vec3_lerp_nj(iVar11 + iStack_34, a5, a6);
                iVar9 = iVar9 + 1;
                iVar11 = iVar11 + 0xc;
            } while (iVar9 < iVar12);
        }
        *(int *)a0[1] = iVar5;
    } else {
        if (iVar9 == 2) {
            iVar9 = 0;
            iVar11 = 0;
            if (0 < iVar12) {
                do {
                    a5 = (int *)(iVar11 + iStack_38);
                    a6 = (int *)(iVar11 + iVar5);
                    vec3_lerp_normalize(iStack_3c + iVar11, a5, a6);
                    iVar9 = iVar9 + 1;
                    iVar11 = iVar11 + 0xc;
                } while (iVar9 < iVar12);
            }
        } else {
            if (iVar9 != 3)
                goto LAB_8c25598e;
            iVar9 = 0;
            iVar11 = iVar12 * 0xc + g_8c4ab0c4;
            iVar13 = 0;
            if (0 < iVar12) {
                do {
                    Vec3_lerp_nj(iStack_34 + iVar13, iStack_30 + iVar13, iVar13 + iVar5);
                    a5 = (int *)(iStack_38 + iVar13);
                    a6 = (int *)(iVar13 + iVar11);
                    vec3_lerp_normalize(iStack_3c + iVar13, a5, a6);
                    iVar9 = iVar9 + 1;
                    iVar13 = iVar13 + 0xc;
                } while (iVar9 < iVar12);
            }
            *(int *)a0[1] = iVar5;
            iVar5 = iVar11;
        }
        *(int *)(a0[1] + 4) = iVar5;
    }
LAB_8c25598e:
    uVar1 = (*g_8c4ab0bc)(a0[1], a5, a6, a7);
    *(u32 *)a0[1] = uVar2;
    *(u32 *)(a0[1] + 4) = uVar3;
    return uVar1;
}

/*
 * ninja_calc_255a2e  0x8c255a2e
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 */
u32 ninja_calc_255a2e(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r2;

    (*(code *)*in_r2)(a0, a1, a2, a3);
    (*(code *)*0x8c4aad38)(a0, a1, a2, a3);
    /* WARNING: Could not recover jumptable at 0x8c255a48. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*0x8c4aad3c)(a0);
    return uVar1;
}

/*
 * ninja_init_fields_255a5a  0x8c255a5a
 * area name: in the ninja library code range; behaviour name: writes 3 members
 */
u32 ninja_init_fields_255a5a(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    u32 unaff_r12;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 4;
    unaff_r13[5] = in_r3;
    (*(code *)*in_r1)(unaff_r12, a1, a2, a3);
    (*(code *)*0x8c4aad38)(unaff_r12, a1, a2, a3);
    uVar1 = (*(code *)*0x8c4aad3c)(unaff_r12, a1, a2, a3);
    *unaff_r13 = iVar2 + 8;
    return uVar1;
}

/*
 * ninja_init_fields_255a9a  0x8c255a9a
 * area name: in the ninja library code range; behaviour name: writes 3 members
 */
u32 ninja_init_fields_255a9a(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    u32 unaff_r12;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 8;
    unaff_r13[5] = in_r3;
    (*(code *)*in_r1)(unaff_r12, a1, a2, a3);
    (*(code *)*0x8c4aad38)(unaff_r12, a1, a2, a3);
    uVar1 = (*(code *)*0x8c4aad3c)(unaff_r12, a1, a2, a3);
    *unaff_r13 = iVar2 + 0x10;
    return uVar1;
}

/*
 * ninja_init_fields_255ada  0x8c255ada
 * area name: in the ninja library code range; behaviour name: writes 3 members
 */
u32 ninja_init_fields_255ada(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    u32 unaff_r12;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 0xc;
    unaff_r13[5] = in_r3;
    (*(code *)*in_r1)(unaff_r12, a1, a2, a3);
    (*(code *)*0x8c4aad38)(unaff_r12, a1, a2, a3);
    uVar1 = (*(code *)*0x8c4aad3c)(unaff_r12, a1, a2, a3);
    *unaff_r13 = iVar2 + 0x18;
    return uVar1;
}

/*
 * ninja_init_fields_255b46  0x8c255b46
 * area name: in the ninja library code range; behaviour name: writes 3 members
 */
u32 ninja_init_fields_255b46(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    u32 unaff_r12;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 0x10;
    unaff_r13[5] = in_r3;
    (*(code *)*in_r1)(unaff_r12, a1, a2, a3);
    (*(code *)*0x8c4aad38)(unaff_r12, a1, a2, a3);
    uVar1 = (*(code *)*0x8c4aad3c)(unaff_r12, a1, a2, a3);
    *unaff_r13 = iVar2 + 0x20;
    return uVar1;
}

/*
 * ninja_init_fields_255ba0  0x8c255ba0
 * area name: in the ninja library code range; behaviour name: writes 3 members
 */
u32 ninja_init_fields_255ba0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 4;
    unaff_r13[5] = in_r3;
    uVar1 = (*(code *)*in_r1)(a0, a1, a2, a3);
    *unaff_r13 = iVar2 + 8;
    return uVar1;
}

/*
 * ninja_init_fields_255bca  0x8c255bca
 * area name: in the ninja library code range; behaviour name: writes 3 members
 */
u32 ninja_init_fields_255bca(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *in_r1;
    int in_r3;
    int *unaff_r13;
    int iVar2;

    iVar2 = *unaff_r13;
    unaff_r13[1] = iVar2;
    unaff_r13[2] = iVar2 + 8;
    unaff_r13[5] = in_r3;
    uVar1 = (*(code *)*in_r1)(a0, a1, a2, a3);
    *unaff_r13 = iVar2 + 0x10;
    return uVar1;
}

/*
 * ninja_calc_255bea  0x8c255bea
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 * called by: game_init
 */
u32 ninja_calc_255bea(u32 a0) {
    u32 in_r0;

    g_8c4ab0c4 = a0;
    return in_r0;
}

/*
 * ninja_uses_switch_jump_255bf6  0x8c255bf6
 * area name: in the ninja library code range; behaviour name: its main named callee is switch_jump
 */
int ninja_uses_switch_jump_255bf6(int a0, int a1, u32 a2, int *a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int *piVar6;
    int iVar7;
    int *piVar8;
    double in_dr0;
    float fVar9;
    float fVar10;
    double dVar11;
    u32 in_fr5;
    u64 uVar12;
    double in_xd0;
    u64 in_xd2;
    u64 uVar13;
    u64 in_xd4;
    u32 in_PR;
    char cVar14;
    char cVar15;
    u32 uStack_1c;
    u64 uStack_18;

    fVar9 = (float)((u64)in_xd4 >> 0x20);
    cVar15 = '\0';
    cVar14 = '\0';
    uStack_18._4_4_ = in_PR;
    switch_jump(8, &uStack_1c, &g_8c271da0);
    piVar8 = (int *)(a1 * 0x10 + a0);
    iVar1 = libgcc_divide_helper_0106dc(a1 + 1, a2);
    piVar6 = (int *)(iVar1 * 0x10 + a0);
    fVar10 = (float)(*piVar6 - *piVar8);
    dVar11 = (double)(u64)(u32)fVar10;
    uVar12 = in_xd2;
    if (cVar15 == '\0') {
        uVar12 = CONCAT44(fVar10, in_fr5);
    }
    uVar2 = (u32)((u64)uVar12 >> 0x20);
    uVar13 = uVar12;
    if (cVar14 != '\0' || 0.0 <= fVar10) {
        if (cVar15 == '\0') {
            dVar11 = (double)(u64)uVar2;
            uVar13 = in_xd2;
        }
    } else {
        if (cVar15 == '\0') {
            dVar11 = (double)(u64)uVar2;
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x4f800000);
            uVar13 = in_xd2;
        } else {
            in_xd0 = -3.511233917769577e+154;
        }
        if (cVar14 == '\0') {
            dVar11 = (double)(u64)(u32)(SUB84(dVar11, 0) + SUB84(in_dr0, 0));
        } else {
            dVar11 = dVar11 + in_dr0;
        }
    }
    if (cVar15 == '\0') {
        uStack_18 = CONCAT44(uStack_18._4_4_, SUB84(dVar11, 0));
    } else {
        uStack_18 = uVar13;
    }
    iVar1 = *piVar8;
    fVar10 = (float)iVar1;
    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar10);
    if (iVar1 < 0) {
        if (cVar14 == '\0') {
            dVar11 = (double)CONCAT44(0x4f800000, fVar10 + 4.2949673e+09);
        } else {
            dVar11 = (double)CONCAT44(0x4f800000, fVar10) + (double)CONCAT44(0x4f800000, fVar10);
        }
    }
    if (cVar15 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aad54);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4aad58, g_8c4aad54);
    }
    if (cVar14 == '\0') {
        fVar10 = SUB84(in_dr0, 0) - SUB84(dVar11, 0);
    } else {
        fVar10 = SUB84(in_dr0 - dVar11, 0);
    }
    uVar2 = (u32)(0 < *piVar6 - iVar1);
    if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), (&uStack_1c)[uVar2]);
    }
    iVar1 = piVar6[1] - piVar8[1];
    if (cVar15 == '\0') {
        in_xd0 = (double)CONCAT44(fVar10, (int)uVar12);
    }
    if (cVar14 == '\0') {
        fVar10 = (float)((u64)in_xd0 >> 0x20) / SUB84(dVar11, 0);
    } else {
        fVar10 = (float)((u64)(in_xd0 / dVar11) >> 0x20);
    }
    if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44(fVar10, 1.0 - fVar10);
    } else {
        dVar11 = (double)CONCAT44(fVar10, 0x3f800000) - (double)CONCAT44(fVar10, 0x3f800000);
    }
    if (iVar1 < 0x8001) {
        if (iVar1 < -0x8000) {
            iVar1 = iVar1 + 0x10000;
        }
    } else {
        iVar1 = iVar1 + -0x10000;
    }
    iVar5 = piVar6[2] - piVar8[2];
    if (iVar5 < 0x8001) {
        if (iVar5 < -0x8000) {
            iVar5 = iVar5 + 0x10000;
        }
    } else {
        iVar5 = iVar5 + -0x10000;
    }
    iVar3 = piVar8[2];
    iVar7 = piVar6[3] - piVar8[3];
    if (iVar7 < 0x8001) {
        if (iVar7 < -0x8000) {
            iVar7 = iVar7 + 0x10000;
        }
    } else {
        iVar7 = iVar7 + -0x10000;
    }
    if (cVar15 == '\0') {
        fVar9 = SUB84(dVar11, 0);
    }
    iVar4 = piVar8[3];
    fVar10 = (float)((u64)dVar11 >> 0x20);
    if (cVar14 == '\0') {
        iVar1 = (int)(fVar9 * (float)piVar8[1] + (float)(iVar1 + piVar8[1]) * fVar10);
    } else {
        iVar1 = (int)((double)(iVar1 + piVar8[1]) * dVar11);
    }
    *a3 = iVar1;
    if (cVar14 == '\0') {
        iVar1 = (int)(fVar9 * (float)piVar8[2] + (float)(iVar5 + iVar3) * fVar10);
    } else {
        iVar1 = (int)((double)(iVar5 + iVar3) * dVar11);
    }
    a3[1] = iVar1;
    if (cVar14 == '\0') {
        iVar1 = (int)(fVar9 * (float)piVar8[3] + (float)(iVar7 + iVar4) * fVar10);
    } else {
        iVar1 = (int)((double)(iVar7 + iVar4) * dVar11);
    }
    a3[2] = iVar1;
    return uVar2 * 4;
}

/*
 * ninja_update_fields_255d6c  0x8c255d6c
 * area name: in the ninja library code range; behaviour name: conditionally writes members
 * called by: CAnimal_uses_njGetMatrix_026968, Class_1299f8_calls_update_fields_02430c, Class_1299f8_m4_019588,
 * Class_129a24_m1_019b68, alt_entry_2376d8, game_calls_update_fields_023e98, gfxlib_uses_memcpy_words_n_2376c4,
 * gfxlib_uses_njUnitVector_2163d4 (+8 more) decompiler: Heritage AFTER dead removal. Example location: s0xffffffe0 :
 * 0x8c255f08
 */
u32 ninja_update_fields_255d6c(u32 *a0, int a1, u32 a2, u32 a3, u32 ain0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    u32 uVar9;
    u32 uVar10;
    u32 uVar11;
    u32 uVar12;
    u32 uVar13;
    u32 uVar14;
    u32 uVar15;

    if (a0 != NULL) {
        uVar1 = *(u32 *)(a1 + 0xc);
        uVar9 = *(u32 *)(a1 + 0x1c);
        uVar2 = *(u32 *)(a1 + 0x2c);
        uVar10 = *(u32 *)(a1 + 0x3c);
        uVar3 = *(u32 *)(a1 + 0xc);
        uVar11 = *(u32 *)(a1 + 0x1c);
        uVar4 = *(u32 *)(a1 + 0x2c);
        uVar12 = *(u32 *)(a1 + 0x3c);
        uVar5 = *(u32 *)(a1 + 0xc);
        uVar13 = *(u32 *)(a1 + 0x1c);
        uVar6 = *(u32 *)(a1 + 0x2c);
        uVar14 = *(u32 *)(a1 + 0x3c);
        uVar7 = *(u32 *)(a1 + 0xc);
        uVar15 = *(u32 *)(a1 + 0x1c);
        uVar8 = *(u32 *)(a1 + 0x2c);
        a0[0xf] = *(u32 *)(a1 + 0x3c);
        a0[0xe] = uVar14;
        a0[0xb] = uVar8;
        a0[10] = uVar6;
        a0[7] = uVar15;
        a0[6] = uVar13;
        a0[3] = uVar7;
        a0[2] = uVar5;
        a0[0xd] = uVar12;
        a0[0xc] = uVar10;
        a0[9] = uVar4;
        a0[8] = uVar2;
        a0[5] = uVar11;
        a0[4] = uVar9;
        a0[1] = uVar3;
        *a0 = uVar1;
        return 4;
    }
    return ain0;
}

/*
 * njOuterProduct  0x8c255f40
 * a2 = a0 x a1
 * called by: Class_129a24_m1_019b68
 */
u32 njOuterProduct(float *a0, float *a1, float *a2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    fVar6 = *a0;
    fVar3 = *a1;
    fVar2 = a0[1];
    fVar1 = a1[1];
    fVar4 = a0[2];
    fVar5 = a1[2];
    *a2 = -fVar4 * fVar1 + fVar2 * fVar5;
    a2[1] = fVar6 * -fVar5 + fVar4 * fVar3;
    a2[2] = fVar2 * -fVar3 + fVar6 * fVar1;
    return 8;
}

/*
 * ninja_draw_255f88  0x8c255f88
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: ninja_uses_ninja_close_file_256164
 */
u32 ninja_draw_255f88(u32 a0) {
    int *piVar1;
    u32 uVar2;

    piVar1 = 0x8c4aabbc;
    *(u32 *)(g_8c4aabbc + 0x68) = a0;
    uVar2 = ta_load_texture_params(*piVar1);
    return uVar2;
}

/*
 * tex_set_palette_bank  0x8c255f96
 * for palettized textures puts palette bank a1 into the TSP word's palette bits and records it
 * called by: tex_uses_tex_entry_find_255ff8
 */
u32 tex_set_palette_bank(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;

    uVar1 = *(u32 *)(a0 + 0x18) >> 0x10 & 0xff00;
    if ((uVar1 == (int)0x500) || (uVar1 == (int)0x600)) {
        uVar2 = 0x3f;
    } else {
        if ((uVar1 != (int)0x700) && (uVar1 != (int)0x800)) {
            return uVar1;
        }
        uVar2 = 0x30;
    }
    *(u32 *)(a0 + 0xc) = *(u32 *)(a0 + 0xc) & 0xf81fffff;
    *(u32 *)(a0 + 0xc) = *(u32 *)(a0 + 0xc) | (uVar2 & a1) << 0x15;
    *(u32 *)(a0 + 4) = a1;
    return uVar1;
}

/*
 * tex_uses_tex_entry_find_255ff8  0x8c255ff8
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is
 * tex_entry_find
 */
u32 tex_uses_tex_entry_find_255ff8(u32 a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    iVar1 = tex_entry_find(g_8c277b08, g_8c277b0c, a0);
    if (-1 < iVar1) {
        uVar2 = tex_set_palette_bank(iVar1 * 0x44 + g_8c277b08, a1);
        return uVar2;
    }
    return iVar1;
}

/*
 * ninja_set_palette_format  0x8c25603a
 * sets the PVR palette format from a0 (0-2 are 16-bit formats, 6 is the 32-bit one) and records the entry width (0x10
 * or 0x20)
 */
u32 ninja_set_palette_format(int a0) {
    u32 *puVar1;
    u32 uVar2;

    puVar1 = 0x8c4ab138;
    g_8c4ab13c = a0;
    if (a0 == 0) {
        uVar2 = 0;
    } else if (a0 == 1) {
        uVar2 = 1;
    } else if (a0 == 2) {
        uVar2 = 2;
    } else {
        if (a0 == 6) {
            uVar2 = 3;
            *puVar1 = 0x20;
            goto LAB_8c256072;
        }
        uVar2 = 0;
    }
    *puVar1 = 0x10;
LAB_8c256072:
    uVar2 = shinobi_draw_20a280(uVar2);
    return uVar2;
}

/*
 * ninja_palette_load  0x8c2560b4
 * writes a1 palette entries from a2 into palette RAM (0x5f9000) starting at entry a0, as halfwords or whole words by
 * the current format
 */
u32 ninja_palette_load(int a0, int a1, u16 *a2) {
    u16 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;

    uVar2 = 0xa0000000;
    if (g_8c4ab138 == 0x10) {
        iVar5 = a1 + a0;
        uVar4 = a0 * 4 + 0x5f9000;
        for (; a0 < iVar5; a0 = a0 + 1) {
            uVar1 = *a2;
            a2 = a2 + 1;
            *(u32 *)(uVar4 | uVar2) = (u32)uVar1;
            uVar4 = uVar4 + 4;
        }
        return 0x10;
    }
    uVar3 = memcpy_words_n(a0 * 4 + 0x5f9000 | 0xa0000000, a2, a1);
    return uVar3;
}

/*
 * ninja_uses_ninja_close_file_256164  0x8c256164
 * area name: in the ninja library code range; behaviour name: its main named callee is ninja_close_file
 */
u32 ninja_uses_ninja_close_file_256164(u32 a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int *a4;
    int *ar5_00;
    int a5;
    int in_stack_ffffffdc;
    int iStack_1c;
    u8 bStack_18;
    short sStack_16;
    u16 uStack_14;
    u16 uStack_12;

    a4 = (int *)&stack0xffffffdc;
    ar5_00 = a1;
    tex_error_reset();
    iVar1 = nj_file_open(a0, ar5_00, a2, a3);
    if (-1 < iVar1) {
        a5 = 4;
        iVar1 = ninja_uses_memcpy_bytes_259c48(&stack0xffffffdc, 4, a2, a3);
        if (-1 < iVar1) {
            if (in_stack_ffffffdc != 0x4c505650) {
                ninja_close_file();
                return 0xffffffff;
            }
            a5 = 0xc;
            a4 = &iStack_1c;
            iVar1 = ninja_uses_memcpy_bytes_259c48(a4, 0xc, a2, a3);
            if (-1 < iVar1) {
                ninja_draw_255f88((int)sStack_16);
                a5 = iStack_1c + -8;
                a4 = (int *)*a1;
                iVar1 = ninja_uses_memcpy_bytes_259c48(a4, a5, a2, a3);
                if (-1 < iVar1) {
                    *(short *)((int)a1 + 6) = sStack_16;
                    *(u16 *)(a1 + 2) = uStack_14;
                    *(u16 *)((int)a1 + 10) = uStack_12;
                    *(u16 *)(a1 + 1) = (u16)bStack_18;
                    ninja_close_file();
                    return 1;
                }
            }
        }
        ninja_close_file();
    }
    return 0xffffffff;
}

/*
 * matrix_pop_n  0x8c256210
 * pops a0 matrices off the matrix stack
 * called by: CAnimal_draw_029510, CAnimal_draw_088288, CAnimal_uses_njGetMatrix_026968, CEnv_draw_0d2264,
 * CSquidLine_uses_matrix_push_0ad354, Class_1298b8_m11_0159ec, Class_1298b8_m2_015588, Class_1298b8_m3_0155e8 (+50
 * more)
 */
u32 matrix_pop_n(int a0) {
    if (g_8c4aa5a0 - a0 != 0) {
        g_8c4aa5a0 = g_8c4aa5a0 - a0;
        g_8c4aa4bc = g_8c4aa4bc + a0 * -0x40;
        return 1;
    }
    return 0;
}

/*
 * matrix_pop1  0x8c256254
 * pops one 4x4 matrix off the matrix stack if more than one is on it
 * called by: alt_entry_218ea0, alt_entry_2199c0, alt_entry_21a718, alt_entry_21a8be, alt_entry_21a952,
 * alt_entry_21b916, alt_entry_21b9a8, gfxlib_draw_21a8b0 (+8 more)
 */
u32 matrix_pop1(void) {
    if (0 < g_8c4aa5a0 + -1) {
        g_8c4aa5a0 = g_8c4aa5a0 + -1;
        g_8c4aa4bc = g_8c4aa4bc + -0x40;
        return 1;
    }
    return 0;
}

/*
 * matrix_float_calc_256294  0x8c256294
 * area name: sits between matrix functions (same compilation unit); behaviour name: floating-point arithmetic
 * called by: CSquidLine_vec_085c3c, Class_12acc8_m1_09f470, game_calls_float_calc_019508, game_calls_float_calc_0d1754,
 * game_calls_float_calc_0d43cc, game_uses_list_node_next_wrap_0da754, game_uses_stick_x_right_half_0e1f90,
 * game_vec_02fcc4 (+2 more)
 */
u32 matrix_float_calc_256294(int a0, double *a1, double *a2) {
    double in_dr0;
    u64 uVar1;
    u32 in_fr3;
    double dVar2;
    u64 uVar3;
    float fVar6;
    u64 uVar4;
    s64 lVar5;
    u32 in_fr5;
    float fVar7;
    double dVar8;
    float fVar9;
    float fVar10;
    double dVar11;
    float fVar12;
    u64 in_xd0;
    double in_xd2;
    double in_xd4;
    float in_xf6;
    float in_xf7;
    u64 in_xd8;
    float in_xf10;
    float in_xf11;
    float in_xf12;
    float in_xf13;
    float in_xf14;
    float in_xf15;

    if (a0 == 0) {

        dVar8 = (double)CONCAT44(*(u32 *)a1, *(u32 *)((int)a1 + 4));
        dVar11 = (double)CONCAT44(*(u32 *)(a1 + 1), 0x3f800000);

        fVar12 = SUB84(dVar8, 0);
        fVar9 = (float)((u64)dVar8 >> 0x20);
        fVar10 = SUB84(dVar11, 0);
        fVar6 = (float)((u64)dVar11 >> 0x20);
        fVar7 = (float)in_xd0 * fVar12 + SUB84(in_xd4, 0) * fVar9 + (float)in_xd8 * fVar10 + in_xf12 * fVar6;
        fVar7 = (float)((u64)in_xd0 >> 0x20) * fVar12 + (float)((u64)in_xd4 >> 0x20) * fVar9 +
                (float)((u64)in_xd8 >> 0x20) * fVar10 + in_xf13 * fVar6;
        fVar7 = SUB84(in_xd2, 0) * fVar12 + in_xf6 * fVar9 + in_xf10 * fVar10 + in_xf14 * fVar6;
        fVar12 = (float)((u64)in_xd2 >> 0x20) * fVar12 + in_xf7 * fVar9 + in_xf11 * fVar10 + in_xf15 * fVar6;

    } else {

        dVar11 = (double)CONCAT44(*(u32 *)a1, *(u32 *)((int)a1 + 4));
        dVar2 = (double)CONCAT44(*(u32 *)(a1 + 1), 0x3f800000);
        uVar1 = CONCAT44(*(u32 *)a0, *(u32 *)(a0 + 0x10));
        uVar3 = CONCAT44(*(u32 *)(a0 + 0x20), *(u32 *)(a0 + 0x30));
        dVar8 = in_xd2;

        fVar12 = SUB84(dVar11, 0);
        fVar7 = (float)((u64)dVar11 >> 0x20);
        fVar9 = SUB84(dVar2, 0);
        fVar10 = (float)((u64)dVar2 >> 0x20);

        fVar6 = (float)uVar1 * fVar12 + (float)((u64)uVar1 >> 0x20) * fVar7 + (float)uVar3 * fVar9 +
                (float)((u64)uVar3 >> 0x20) * fVar10;

        uVar1 = CONCAT44(*(u32 *)(a0 + 4), *(u32 *)(a0 + 0x14));
        uVar4 = CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x34));
        in_xd2 = dVar8;
        dVar8 = (double)CONCAT44((int)uVar3, in_fr5);

        fVar6 = (float)uVar1 * fVar12 + (float)((u64)uVar1 >> 0x20) * fVar7 + (float)uVar4 * fVar9 +
                (float)((u64)uVar4 >> 0x20) * fVar10;

        dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), (int)uVar4);
        in_dr0 = (double)CONCAT44(*(u32 *)(a0 + 8), *(u32 *)(a0 + 0x18));
        lVar5 = CONCAT44(*(u32 *)(a0 + 0x28), *(u32 *)(a0 + 0x38));

        fVar12 = SUB84(in_dr0, 0) * fVar12 + (float)((u64)in_dr0 >> 0x20) * fVar7 + (float)lVar5 * fVar9 +
                 (float)((u64)lVar5 >> 0x20) * fVar10;

        in_fr3 = (u32)lVar5;
        dVar11 = in_xd2;

        dVar11 = (double)(lVar5 << 0x20);
    }
    fVar12 = (float)((u64)dVar11 >> 0x20);

    dVar11 = (double)CONCAT44(fVar12, 1.0 / fVar12);

    dVar2 = (double)CONCAT44(*(u32 *)0x8c4aa4a8, in_fr3);

    dVar2 =
        (double)CONCAT44((float)((u64)dVar2 >> 0x20) * (float)((u64)dVar8 >> 0x20) * SUB84(dVar11, 0), SUB84(dVar2, 0));

    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aa4dc);

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(in_dr0, 0), SUB84(dVar2, 0));

    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)0x8c4aa4a8 + 0xc));

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) + SUB84(in_dr0, 0), SUB84(dVar2, 0));

    dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), *(u32 *)0x8c4aa4a8);

    dVar11 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), SUB84(dVar2, 0) * SUB84(dVar8, 0) * SUB84(dVar11, 0));

    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), g_8c4aa4e0);

    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) * SUB84(in_dr0, 0));

    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(0x8c4aa4a8 + 2));

    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) + SUB84(in_dr0, 0));

    *(int *)a2 = (int)((u64)dVar11 >> 0x20);
    *(int *)((int)a2 + 4) = SUB84(dVar11, 0);

    return 4;
}

/*
 * matrix_push  0x8c256328
 * pushes the current 4x4 matrix onto the matrix stack
 * called by: CAnimal_draw_029510, CAnimal_draw_088288, CAnimal_uses_njGetMatrix_026968, CEnv_draw_0d2264,
 * CSquidLine_uses_matrix_push_0ad354, Class_1298b8_m11_0159ec, Class_1298b8_m2_015588, Class_1298b8_m3_0155e8 (+50
 * more)
 */
u32 matrix_push(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 *puVar1;
    u32 in_fr1;
    u32 in_fr3;
    u32 in_fr5;
    u32 in_fr7;
    u32 in_fr9;
    u32 in_fr11;
    u32 in_fr13;
    u32 in_fr15;

    puVar1 = g_8c4aa4bc;
    if (g_8c4aa59c <= g_8c4aa5a0) {
        return 0;
    }
    g_8c4aa5a0 = g_8c4aa5a0 + 1;
    *g_8c4aa4bc = ain0;
    g_8c4aa4bc[8] = ain0;
    g_8c4aa4bc[0xf] = in_fr15;
    g_8c4aa4bc[0xe] = in_fr13;
    g_8c4aa4bc[0xd] = in_fr11;
    g_8c4aa4bc[0xc] = in_fr9;
    g_8c4aa4bc[0xb] = in_fr7;
    g_8c4aa4bc[10] = in_fr5;
    g_8c4aa4bc[9] = in_fr3;
    g_8c4aa4bc[8] = in_fr1;
    g_8c4aa4bc = g_8c4aa4bc + 0x18;
    if (a0 != 0) {
        return 1;
    }
    *g_8c4aa4bc = ain0;
    puVar1[0x20] = ain0;
    puVar1[0x27] = in_fr15;
    puVar1[0x26] = in_fr13;
    puVar1[0x25] = in_fr11;
    puVar1[0x24] = in_fr9;
    puVar1[0x23] = in_fr7;
    puVar1[0x22] = in_fr5;
    puVar1[0x21] = in_fr3;
    puVar1[0x20] = in_fr1;
    return 1;
}

/*
 * matrix_push_regs  0x8c2563ac
 * pushes a matrix held in the FPU registers onto the matrix stack
 * called by: alt_entry_218ea0, alt_entry_2199c0, alt_entry_21a718, alt_entry_21a8be, alt_entry_21a952,
 * alt_entry_21b916, alt_entry_21b9a8, gfxlib_uses_matrix_push_regs_218e8a (+4 more)
 */
u32 matrix_push_regs(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 *puVar1;
    u32 *puVar2;
    u32 in_fr1;
    u32 in_fr3;
    u32 in_fr5;
    u32 in_fr7;
    u32 in_fr9;
    u32 in_fr11;
    u32 in_fr13;
    u32 in_fr15;

    puVar1 = g_8c4aa4bc;
    if (g_8c4aa5a0 < g_8c4aa59c) {
        g_8c4aa5a0 = g_8c4aa5a0 + 1;
        *g_8c4aa4bc = ain0;
        g_8c4aa4bc[8] = ain0;
        puVar2 = g_8c4aa4bc + 0xf;
        g_8c4aa4bc = g_8c4aa4bc + 0x10;
        *puVar2 = in_fr15;
        puVar1[0xe] = in_fr13;
        puVar1[0xd] = in_fr11;
        puVar1[0xc] = in_fr9;
        puVar1[0xb] = in_fr7;
        puVar1[10] = in_fr5;
        puVar1[9] = in_fr3;
        puVar1[8] = in_fr1;
        return 1;
    }
    return 0;
}

/*
 * matrix_uses_switch_jump_2563f8  0x8c2563f8
 * area name: sits between matrix functions (same compilation unit); behaviour name: its main named callee is
 * switch_jump called by: gfxlib_uses_switch_jump_21d06c
 */
u32 matrix_uses_switch_jump_2563f8(double *a0) {
    u32 uVar1;
    double *pdVar2;
    u64 in_dr0;
    float fVar3;
    u64 in_dr2;
    u32 uVar6;
    double dVar4;
    double dVar5;
    u32 in_fr5;
    float fVar7;
    double dVar8;
    u32 in_fr7;
    double dVar10;
    float fVar11;
    u32 uVar12;
    double in_dr8;
    u32 uVar13;
    float fVar14;
    u32 in_fr11;
    float fVar15;
    double dVar16;
    double dVar17;
    double dVar18;
    float fVar19;
    double in_dr12;
    double dVar20;
    u64 in_dr14;
    double in_xd0;
    double dVar21;
    double in_xd2;
    double dVar22;
    double in_xd4;
    double dVar23;
    double in_xd6;
    double in_xd8;
    u64 in_xd10;
    double in_xd12;
    double dVar24;
    double in_xd14;
    bool bVar25;
    char cVar26;
    char cVar27;
    u32 uStack_94;
    u32 uStack_90;
    double adStack_50[8];
    u32 uStack_c;
    u32 uStack_8;
    u32 uStack_4;
    float fVar9;

    uVar6 = (u32)((u64)in_dr2 >> 0x20);
    cVar27 = '\0';
    cVar26 = '\0';
    uStack_4 = (u32)in_dr14;
    uStack_8 = (u32)((u64)in_dr14 >> 0x20);
    uStack_c = SUB84(in_dr12, 0);
    pdVar2 = adStack_50;
    switch_jump(0x40, adStack_50, &g_8c271da8);
    uVar13 = (u32)((u64)in_dr8 >> 0x20);
    if (cVar27 == '\0') {
        dVar16 = (double)CONCAT44(*(u32 *)a0, in_fr11);
        uVar1 = (int)((u64)in_dr0 >> 0x20);
    } else {
        uStack_90 = SUB84(in_dr8, 0);
        dVar16 = *a0;
        uVar1 = uStack_90;
    }
    dVar4 = (double)((u64)uVar6 << 0x20);
    fVar7 = (float)((u64)dVar16 >> 0x20);
    dVar8 = dVar16;
    if (cVar27 == '\0') {
        dVar8 = (double)CONCAT44(fVar7, in_fr5);
    }
    if (cVar26 == '\0') {
        fVar9 = (float)((u64)dVar8 >> 0x20) * fVar7;
        dVar8 = (double)CONCAT44(fVar9, SUB84(dVar8, 0));
        bVar25 = 0.0 < fVar9;
    } else {
        dVar8 = dVar8 * dVar16;
        fVar9 = (float)((u64)dVar8 >> 0x20);
        bVar25 = dVar4 < dVar8;
    }
    dVar16 = 0.0078125;
    dVar23 = dVar16;
    if (bVar25) {
        if (cVar26 == '\0') {
            bVar25 = fVar9 < 1.0;
        } else {
            bVar25 = dVar8 < 0.0078125;
        }
        if (bVar25) {
            if (cVar26 == '\0') {
                dVar4 = (double)((u64)(u32)(1.0 - fVar9) << 0x20);
            } else {
                dVar4 = 0.0078125 - dVar8;
            }
            if (cVar27 == '\0') {
                dVar8 = (double)CONCAT44(fVar9, 0x3f800000);
                dVar23 = in_xd4;
            }
            if (cVar26 == '\0') {
                dVar4 = (double)CONCAT44(SQRT((float)((u64)dVar4 >> 0x20)), SUB84(dVar4, 0));
            } else {
                dVar4 = SQRT(dVar4);
            }
            dVar22 = dVar4;
            if (cVar27 == '\0') {
                in_dr8 = (double)CONCAT44(uVar13, (int)((u64)dVar4 >> 0x20));
                dVar22 = in_xd8;
            }
            if (cVar26 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) / SUB84(in_dr8, 0));
            } else {
                dVar8 = dVar8 / in_dr8;
            }
        } else {
            dVar23 = in_xd14;
            dVar22 = in_xd14;
            if (cVar27 == '\0') {
                in_dr8 = 0.0;
                dVar23 = in_xd4;
                dVar22 = in_xd8;
            }
            dVar8 = 0.0078125;
        }
    } else {
        dVar22 = dVar16;
        if (cVar27 == '\0') {
            dVar8 = (double)CONCAT44(fVar9, 0x3f800000);
            in_dr8 = (double)CONCAT44(uVar13, 0x3f800000);
            dVar23 = in_xd4;
            dVar22 = in_xd8;
        }
    }
    fVar9 = SUB84(dVar4, 0);
    if (cVar27 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 1), SUB84(in_dr8, 0));
        in_fr7 = *(u32 *)((int)a0 + 4);
    } else {
        dVar4 = a0[1];
        in_xd6 = *(double *)((int)a0 + 4);
    }
    if (cVar26 == '\0') {
        dVar17 = (double)CONCAT44(fVar7, 0x40000000);
    } else {
        dVar17 = (double)CONCAT44(fVar7, 0x3f800000) + (double)CONCAT44(fVar7, 0x3f800000);
    }
    if (cVar27 == '\0') {
        dVar10 = (double)CONCAT44(*(u32 *)((int)a0 + 0xc), in_fr7);
    } else {
        dVar10 = *(double *)((int)a0 + 0xc);
    }
    fVar7 = SUB84(dVar8, 0);
    if (cVar26 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * fVar7, SUB84(dVar4, 0));
        dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) * fVar7, SUB84(dVar10, 0) * fVar7);
    } else {
        dVar4 = dVar4 * dVar8;
        dVar10 = dVar10 * dVar8 * dVar8;
    }
    if (cVar27 == '\0') {
        in_xd10 = CONCAT44(SUB84(dVar17, 0), (int)in_dr0);
    }
    if (cVar26 == '\0') {
        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * SUB84(dVar4, 0), SUB84(dVar17, 0));
    } else {
        dVar17 = dVar17 * dVar4;
    }
    fVar7 = -1.0;
    if (cVar26 == '\0') {
        fVar7 = (float)((u64)in_xd10 >> 0x20) * (float)((u64)dVar8 >> 0x20) + -1.0;
    }
    fVar14 = SUB84(dVar10, 0);
    dVar8 = dVar17;
    if (cVar27 == '\0') {
        dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), 0x3f800000);
        in_xd6 = (double)CONCAT44(fVar14, (int)in_xd10);
        dVar8 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), fVar7);
        dVar16 = dVar22;
    }
    if (cVar26 == '\0') {
        fVar7 = SUB84(dVar8, 0);
        dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) * SUB84(dVar17, 0), fVar7);
        dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), SUB84(dVar4, 0) - fVar7);
    } else {
        dVar8 = dVar8 * dVar17;
        fVar7 = SUB84(dVar8, 0);
        dVar4 = dVar4 - dVar8;
    }
    uVar13 = (u32)((u64)dVar8 >> 0x20);
    dVar21 = dVar8;
    dVar22 = dVar23;
    if (cVar27 == '\0') {
        in_xd6 = (double)CONCAT44((int)((u64)in_xd6 >> 0x20), uVar13);
        dVar21 = in_xd0;
        dVar22 = in_xd2;
        fVar9 = fVar7;
    }
    fVar11 = (float)((u64)dVar10 >> 0x20);
    if (cVar26 == '\0') {
        in_xd6 = (double)CONCAT44((int)((u64)in_xd6 >> 0x20), SUB84(in_xd6, 0) * fVar11);
    } else {
        in_xd6 = in_xd6 * dVar10;
    }
    uVar12 = SUB84(dVar4, 0);
    dVar24 = dVar16;
    if (cVar27 == '\0') {
        in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), uVar12);
        dVar24 = in_xd12;
    }
    if (cVar26 == '\0') {
        dVar20 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr12, 0) * fVar14);
    } else {
        dVar20 = in_dr12 * dVar10;
    }
    fVar19 = SUB84(dVar20, 0);
    dVar5 = dVar24;
    if (cVar27 == '\0') {
        dVar5 = (double)CONCAT44(fVar19, fVar9);
    }
    fVar9 = (float)((u64)dVar4 >> 0x20);
    if (cVar26 == '\0') {
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * fVar9,
                                 (float)((u64)in_xd6 >> 0x20) * fVar19 + SUB84(dVar5, 0));
    } else {
        dVar5 = dVar5 * dVar4;
    }
    uStack_90 = (u32)((u64)dVar5 >> 0x20);
    uStack_94 = SUB84(dVar5, 0);
    if (cVar27 == '\0') {
        *(u32 *)pdVar2 = uStack_94;
        dVar5 = (double)CONCAT44(uStack_90, uStack_90);
        uStack_94 = uStack_90;
        uStack_90 = uVar1;
    } else {
        *pdVar2 = dVar22;
        dVar22 = dVar5;
    }
    if (cVar26 == '\0') {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), SUB84(dVar5, 0) - SUB84(in_xd6, 0));
    } else {
        dVar5 = dVar5 - in_xd6;
    }
    dVar18 = dVar24;
    if (cVar27 == '\0') {
        dVar18 = (double)CONCAT44(fVar19, SUB84(dVar17, 0));
    }
    if (cVar26 == '\0') {
        dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) * fVar11, SUB84(dVar18, 0));
    } else {
        dVar18 = dVar18 * dVar10;
    }
    if (cVar27 == '\0') {
        dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), uVar13);
    }
    if (cVar26 == '\0') {
        dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) * fVar9);
    } else {
        dVar18 = dVar18 * dVar4;
    }
    fVar19 = (float)((u64)dVar18 >> 0x20);
    if (cVar27 == '\0') {
        *(int *)(pdVar2 + 2) = SUB84(dVar5, 0);
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), fVar19);
        dVar17 = (double)CONCAT44(fVar9, SUB84(in_xd6, 0));
    } else {
        pdVar2[2] = dVar22;
        dVar22 = dVar18;
        dVar17 = dVar4;
    }
    fVar15 = SUB84(dVar18, 0);
    if (cVar26 == '\0') {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), SUB84(dVar5, 0) + fVar15);
    } else {
        dVar5 = dVar5 + dVar18;
    }
    if (cVar27 == '\0') {
        *(int *)(pdVar2 + 4) = SUB84(dVar5, 0);
        *(u32 *)(pdVar2 + 6) = 0;
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), uStack_94);
    } else {
        pdVar2[4] = dVar22;
        pdVar2[6] = in_xd14;
        dVar22 = (double)CONCAT44(uStack_90, uStack_94);
    }
    if (cVar26 == '\0') {
        dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) + SUB84(dVar5, 0));
    } else {
        dVar17 = dVar17 + dVar5;
    }
    if (cVar27 == '\0') {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), fVar7);
        *(int *)((int)pdVar2 + 4) = SUB84(dVar17, 0);
        dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), uVar12);
        dVar16 = dVar21;
    } else {
        *(double *)((int)pdVar2 + 4) = dVar21;
        dVar22 = dVar23;
    }
    if (cVar26 == '\0') {
        dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) * fVar9);
    } else {
        dVar17 = dVar17 * dVar4;
    }
    dVar4 = dVar8;
    if (cVar27 == '\0') {
        dVar4 = (double)CONCAT44(uVar13, uVar12);
    }
    if (cVar26 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * fVar14, SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 * dVar10;
    }
    fVar9 = SUB84(dVar17, 0);
    if (cVar27 == '\0') {
        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), fVar9);
        dVar16 = dVar24;
    }
    if (cVar26 == '\0') {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), (float)((u64)dVar17 >> 0x20) * fVar9 + SUB84(dVar5, 0));
        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) * fVar11);
    } else {
        dVar20 = dVar20 * dVar10;
    }
    if (cVar27 == '\0') {
        *(int *)((int)pdVar2 + 0x14) = SUB84(dVar5, 0);
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), SUB84(dVar20, 0));
        dVar16 = dVar22;
    } else {
        *(double *)((int)pdVar2 + 0x14) = dVar22;
    }
    fVar14 = (float)((u64)dVar4 >> 0x20);
    if (cVar26 == '\0') {
        fVar3 = SUB84(dVar5, 0) - fVar14;
        dVar4 = (double)CONCAT44(fVar14, SUB84(dVar4, 0) * fVar11);
    } else {
        fVar3 = SUB84(dVar5 - dVar4, 0);
        dVar4 = dVar4 * dVar10;
    }
    if (cVar27 == '\0') {
        *(float *)((int)pdVar2 + 0x24) = fVar3;
    } else {
        *(double *)((int)pdVar2 + 0x24) = dVar16;
    }
    if (cVar26 == '\0') {
        dVar18 = (double)CONCAT44(fVar19 - fVar15, fVar15);
    } else {
        dVar18 = dVar18 - dVar18;
    }
    if (cVar27 == '\0') {
        dVar10 = (double)CONCAT44(fVar11, fVar9);
        *(u32 *)((int)pdVar2 + 0x34) = 0;
    } else {
        *(double *)((int)pdVar2 + 0x34) = in_xd14;
    }
    if (cVar26 == '\0') {
        dVar20 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + SUB84(dVar20, 0), SUB84(dVar4, 0));
        dVar8 = (double)CONCAT44(uVar13, (float)((u64)dVar10 >> 0x20) * SUB84(dVar4, 0) + fVar7);
    } else {
        dVar20 = dVar4 + dVar20;
    }
    if (cVar27 == '\0') {
        *(int *)(pdVar2 + 1) = (int)((u64)dVar18 >> 0x20);
        *(int *)(pdVar2 + 3) = (int)((u64)dVar20 >> 0x20);
        *(int *)(pdVar2 + 5) = SUB84(dVar8, 0);
        *(u32 *)(pdVar2 + 7) = 0;
        *(u32 *)((int)pdVar2 + 0xc) = 0;
        *(u32 *)((int)pdVar2 + 0x1c) = 0;
        *(u32 *)((int)pdVar2 + 0x2c) = 0;
    } else {
        pdVar2[1] = dVar18;
        pdVar2[3] = dVar20;
        pdVar2[5] = dVar23;
        pdVar2[7] = in_xd14;
        *(double *)((int)pdVar2 + 0xc) = in_xd14;
        *(double *)((int)pdVar2 + 0x1c) = in_xd14;
        *(double *)((int)pdVar2 + 0x2c) = in_xd14;
    }
    if (cVar27 == '\0') {
        *(u32 *)((int)pdVar2 + 0x3c) = 0x3f800000;
    } else {
        *(u64 *)((int)pdVar2 + 0x3c) = 0x3f80000000000000;
    }
    return 0x3c;
}

/*
 * ninja_uses_tex_is_palettized_2565c4  0x8c2565c4
 * area name: in the ninja library code range; behaviour name: its main named callee is tex_is_palettized
 * called by: Class_12b388_uses_Class_129808_draw_0c5cb4, ninja_uses_tex_is_palettized_25b37c
 */
u32 ninja_uses_tex_is_palettized_2565c4(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    int ain0_00;
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 *ar4_00;

    iVar3 = 0;
    for (uVar2 = 0; uVar2 < g_8c277b0c; uVar2 = uVar2 + 1) {
        ar4_00 = (u32 *)(g_8c277b08 + iVar3);
        if ((ar4_00[4] & 1) != 0) {
            ain0_00 = tex_is_palettized(ar4_00[6] >> 0x10 & 0xff00);
            gfxlib_update_fields_2362de(ar4_00[5]);
            if (ain0_00 == 1) {
                unused_a2 = 0;
                unused_a1 = 1;
                tex_entry_clear_flags_by_id(*ar4_00, 1, 0, unused_a3, 1);
            } else {
                uVar1 = ar4_00[4];
                ar4_00[4] = uVar1 & 0xfffffffe;
                if ((uVar1 & 0xfffffffe) == 0) {
                    tex_uses_libgcc_divide_helper_25a49e(ar4_00);
                }
            }
        }
        ain0 = *ar4_00;
        if ((ain0 != 0xffffffff) && (ain0 = ar4_00[4], (ain0 & 3) == 0)) {
            ain0 = tex_uses_libgcc_divide_helper_25a49e(ar4_00);
        }
        iVar3 = iVar3 + 0x44;
    }
    return ain0;
}

/*
 * alt_entry_2565d8  0x8c2565d8
 * probably an entry 20 bytes into 8c2565c4: it reads registers that code sets before it
 */
u32 alt_entry_2565d8(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    int iVar1;
    u32 uVar2;
    u32 unaff_r8;
    u32 unaff_r11;
    u32 *a4;
    u32 in_PR;

    for (; unaff_r11 < g_8c277b0c; unaff_r11 = unaff_r11 + 1) {
        a4 = (u32 *)(g_8c277b08 + a0);
        if ((a4[4] & unaff_r8) != 0) {
            iVar1 = tex_is_palettized(a4[6] >> 0x10 & 0xff00);
            gfxlib_update_fields_2362de(a4[5]);
            if (iVar1 == 1) {
                unused_a2 = 0;
                unused_a1 = 1;
                tex_entry_clear_flags_by_id(*a4, 1, 0, unused_a3, in_PR);
            } else {
                uVar2 = a4[4];
                a4[4] = uVar2 & 0xfffffffe;
                if ((uVar2 & 0xfffffffe) == 0) {
                    tex_uses_libgcc_divide_helper_25a49e(a4);
                }
            }
        }
        ain0 = *a4;
        if ((ain0 != 0xffffffff) && (ain0 = a4[4], (ain0 & 3) == 0)) {
            ain0 = tex_uses_libgcc_divide_helper_25a49e(a4);
        }
        a0 = a0 + 0x44;
    }
    return ain0;
}

/*
 * ninja_scan_loop_256670  0x8c256670
 * area name: in the ninja library code range; behaviour name: a loop that only reads
 * called by: CMothLine_FreeGraphicResource, CTexture_ReleaseFromVRAM, game_release_0ae640
 */
u32 ninja_scan_loop_256670(int *a0) {
    u32 *puVar1;
    u8 *puVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;

    puVar2 = (&ninja_uses_tex_is_palettized_2567f8);
    puVar1 = 0x8c4aa6ac;
    uVar4 = 1;
    for (uVar5 = 0; uVar5 < (u32)a0[1]; uVar5 = uVar5 + 1) {
        iVar3 = (*(code *)puVar2)(*(u32 *)(uVar5 * 0xc + *a0 + 8));
        if (iVar3 < 0) {
            uVar4 = 0xffffffff;
            *puVar1 = uVar5;
        }
    }
    return uVar4;
}

/*
 * alt_entry_25667e  0x8c25667e
 * probably an entry 14 bytes into 8c256670: it reads registers that code sets before it
 */
u32 alt_entry_25667e(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u8 *puVar2;
    int iVar3;
    u32 unaff_r11;
    u32 unaff_r12;
    int *unaff_r13;
    u32 uVar4;

    puVar2 = (&ninja_uses_tex_is_palettized_2567f8);
    puVar1 = 0x8c4aa6ac;
    for (uVar4 = 0; uVar4 < (u32)unaff_r13[1]; uVar4 = uVar4 + 1) {
        iVar3 = (*(code *)puVar2)(*(u32 *)(uVar4 * 0xc + *unaff_r13 + 8), a1, a2, a3);
        if (iVar3 < 0) {
            *puVar1 = uVar4;
            unaff_r12 = unaff_r11;
        }
    }
    return unaff_r12;
}

/*
 * ninja_uses_tex_is_palettized_2566c8  0x8c2566c8
 * area name: in the ninja library code range; behaviour name: its main named callee is tex_is_palettized
 * called by: ninja_uses_tex_is_palettized_25b37c
 */
u32 ninja_uses_tex_is_palettized_2566c8(u32 unused_a0, int a1, u32 a2, u32 unused_a3, u32 ain0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 *a4;
    u32 uStack_30;
    u32 uStack_28;
    int iStack_24;

    iStack_24 = 0;
    for (uStack_28 = 0; uStack_28 < g_8c277b0c; uStack_28 = uStack_28 + 1) {
        a4 = (u32 *)(iStack_24 + g_8c277b08);
        if ((a4[4] & 2) != 0) {
            iVar1 = tex_is_palettized(a4[6] >> 0x10 & 0xff00);
            kamui_list_20cf88(a4 + 6);
            if (iVar1 == 1) {
                uVar2 = *a4;
                if ((a4[4] & 1) == 0) {
                    iVar1 = 0;
                    iVar3 = 0;
                    for (uStack_30 = 0; uStack_30 < g_8c277b0c; uStack_30 = uStack_30 + 1) {
                        if (*(u32 *)(g_8c277b08 + iVar3) == uVar2) {
                            tex_uses_libgcc_divide_helper_25a49e(g_8c277b08 + iVar1);
                        }
                        iVar3 = iVar3 + 0x44;
                        iVar1 = iVar1 + 0x44;
                    }
                } else {
                    iVar1 = 0;
                    a2 = 0;
                    a1 = 0;
                    while (a2 < g_8c277b0c) {
                        a2 = a2 + 1;
                        if (*(u32 *)(g_8c277b08 + a1) == uVar2) {
                            *(u16 *)(g_8c277b08 + iVar1 + 0x40) = 0;
                            *(u32 *)(g_8c277b08 + iVar1 + 0x10) = *(u32 *)(g_8c277b08 + iVar1 + 0x10) & 0xfffffff5;
                        }
                        a1 = a1 + 0x44;
                        iVar1 = iVar1 + 0x44;
                    }
                }
            } else {
                uVar2 = a4[4];
                a4[4] = uVar2 & 0xfffffffd;
                if ((uVar2 & 0xfffffffd) == 0) {
                    tex_uses_libgcc_divide_helper_25a49e(a4);
                } else {
                    *(u16 *)(a4 + 0x10) = 0;
                }
            }
        }
        ain0 = *a4;
        if ((ain0 != 0xffffffff) && (ain0 = a4[4], (ain0 & 3) == 0)) {
            ain0 = tex_uses_libgcc_divide_helper_25a49e(a4);
        }
        iStack_24 = iStack_24 + 0x44;
    }
    g_8c277b10 = 0xffffffff;
    return ain0;
}

/*
 * ninja_uses_tex_is_palettized_2567f8  0x8c2567f8
 * area name: in the ninja library code range; behaviour name: its main named callee is tex_is_palettized
 * called by: ninja_uses_tex_is_palettized_256944
 */
u32 ninja_uses_tex_is_palettized_2567f8(int *a0) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;

    if ((a0[4] & 2U) == 0) {
        if (((a0[4] & 1U) != 0) || (*a0 == -1)) {
            g_8c4aa6b4 = 1;
            return 0xffffffff;
        }
    } else {
        iVar1 = tex_is_palettized((u32)a0[6] >> 0x10 & 0xff00);
        if (iVar1 == 1) {
            iVar1 = *a0;
            if (1 < *(u16 *)(a0 + 0x10)) {
                iVar2 = 0;
                uVar4 = 0;
                iVar3 = 0;
                while (uVar4 < g_8c277b0c) {
                    uVar4 = uVar4 + 1;
                    if (*(int *)(g_8c277b08 + iVar3) == iVar1) {
                        *(short *)(g_8c277b08 + iVar2 + 0x40) = *(short *)(g_8c277b08 + iVar2 + 0x40) + -1;
                    }
                    iVar3 = iVar3 + 0x44;
                    iVar2 = iVar2 + 0x44;
                }
                return 1;
            }
            kamui_list_20cf88(a0 + 6);
            if ((a0[4] & 1U) != 0) {
                iVar3 = 0;
                iVar2 = 0;
                uVar4 = 0;
                while (uVar4 < g_8c277b0c) {
                    uVar4 = uVar4 + 1;
                    if (*(int *)(g_8c277b08 + iVar3) == iVar1) {
                        *(u16 *)(g_8c277b08 + iVar2 + 0x40) = 0;
                        *(u32 *)(g_8c277b08 + iVar2 + 0x10) = *(u32 *)(g_8c277b08 + iVar2 + 0x10) & 0xfffffff5;
                    }
                    iVar3 = iVar3 + 0x44;
                    iVar2 = iVar2 + 0x44;
                }
                return 1;
            }
            iVar3 = 0;
            iVar2 = 0;
            for (uVar4 = 0; uVar4 < g_8c277b0c; uVar4 = uVar4 + 1) {
                if (*(int *)(iVar2 + g_8c277b08) == iVar1) {
                    tex_uses_libgcc_divide_helper_25a49e(iVar3 + g_8c277b08);
                }
                iVar2 = iVar2 + 0x44;
                iVar3 = iVar3 + 0x44;
            }
            return 1;
        }
        if ((short)a0[0x10] != 0) {
            *(short *)(a0 + 0x10) = (short)a0[0x10] + -1;
        }
        if ((short)a0[0x10] != 0) {
            return 1;
        }
        kamui_list_20cf88(a0 + 6);
        a0[4] = a0[4] & 0xfffffffd;
        if (g_8c277b10 == *a0) {
            g_8c277b10 = -1;
        }
        if ((a0[4] & 1U) != 0) {
            return 1;
        }
    }
    tex_uses_libgcc_divide_helper_25a49e(a0);
    return 1;
}

/*
 * alt_entry_2567fe  0x8c2567fe
 * probably an entry 6 bytes into 8c2567f8: it reads registers that code sets before it
 */
u32 alt_entry_2567fe(void) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    int *unaff_r13;

    if ((unaff_r13[4] & 2U) == 0) {
        if (((unaff_r13[4] & 1U) != 0) || (*unaff_r13 == -1)) {
            g_8c4aa6b4 = 1;
            return 0xffffffff;
        }
    } else {
        iVar1 = tex_is_palettized((u32)unaff_r13[6] >> 0x10 & 0xff00);
        if (iVar1 == 1) {
            iVar1 = *unaff_r13;
            if (1 < *(u16 *)(unaff_r13 + 0x10)) {
                iVar2 = 0;
                uVar4 = 0;
                iVar3 = 0;
                while (uVar4 < g_8c277b0c) {
                    uVar4 = uVar4 + 1;
                    if (*(int *)(g_8c277b08 + iVar3) == iVar1) {
                        *(short *)(g_8c277b08 + iVar2 + 0x40) = *(short *)(g_8c277b08 + iVar2 + 0x40) + -1;
                    }
                    iVar3 = iVar3 + 0x44;
                    iVar2 = iVar2 + 0x44;
                }
                return 1;
            }
            kamui_list_20cf88(unaff_r13 + 6);
            if ((unaff_r13[4] & 1U) != 0) {
                iVar3 = 0;
                iVar2 = 0;
                uVar4 = 0;
                while (uVar4 < g_8c277b0c) {
                    uVar4 = uVar4 + 1;
                    if (*(int *)(g_8c277b08 + iVar3) == iVar1) {
                        *(u16 *)(g_8c277b08 + iVar2 + 0x40) = 0;
                        *(u32 *)(g_8c277b08 + iVar2 + 0x10) = *(u32 *)(g_8c277b08 + iVar2 + 0x10) & 0xfffffff5;
                    }
                    iVar3 = iVar3 + 0x44;
                    iVar2 = iVar2 + 0x44;
                }
                return 1;
            }
            iVar3 = 0;
            iVar2 = 0;
            for (uVar4 = 0; uVar4 < g_8c277b0c; uVar4 = uVar4 + 1) {
                if (*(int *)(iVar2 + g_8c277b08) == iVar1) {
                    tex_uses_libgcc_divide_helper_25a49e(iVar3 + g_8c277b08);
                }
                iVar2 = iVar2 + 0x44;
                iVar3 = iVar3 + 0x44;
            }
            return 1;
        }
        if ((short)unaff_r13[0x10] != 0) {
            *(short *)(unaff_r13 + 0x10) = (short)unaff_r13[0x10] + -1;
        }
        if ((short)unaff_r13[0x10] != 0) {
            return 1;
        }
        kamui_list_20cf88(unaff_r13 + 6);
        unaff_r13[4] = unaff_r13[4] & 0xfffffffd;
        if (g_8c277b10 == *unaff_r13) {
            g_8c277b10 = -1;
        }
        if ((unaff_r13[4] & 1U) != 0) {
            return 1;
        }
    }
    tex_uses_libgcc_divide_helper_25a49e(unaff_r13);
    return 1;
}

/*
 * ninja_uses_tex_is_palettized_256944  0x8c256944
 * area name: in the ninja library code range; behaviour name: its callees mostly do: uses_tex_is_palettized
 */
int ninja_uses_tex_is_palettized_256944(int a0) {
    int iVar1;

    iVar1 = ninja_uses_tex_is_palettized_2567f8(*(u32 *)(*g_8c277b04 + a0 * 0xc + 8));
    if (iVar1 < 0) {
        g_8c4aa6ac = a0;
    }
    return iVar1;
}

/*
 * ninja_update_fields_25699c  0x8c25699c
 * area name: in the ninja library code range; behaviour name: conditionally writes members
 * called by: game_calls_update_fields_01a180
 */
u32 ninja_update_fields_25699c(int a0) {
    if (a0 == 0) {
        a0 = g_8c4c0cc0;
    }
    *(u32 *)(a0 + 0x40) = *(u32 *)(a0 + 0x5c);
    *(u32 *)(a0 + 0x44) = *(u32 *)(a0 + 0x60);
    *(u32 *)(a0 + 0x48) = *(u32 *)(a0 + 100);
    *(u32 *)(a0 + 0x4c) = *(u32 *)(a0 + 0x68);
    *(u32 *)(a0 + 0x50) = *(u32 *)(a0 + 0x6c);
    *(u32 *)(a0 + 0x54) = *(u32 *)(a0 + 0x70);
    *(u32 *)(a0 + 0x58) = *(u32 *)(a0 + 0x74);
    return 0x58;
}

/*
 * ninja_scan_loop_2569e0  0x8c2569e0
 * area name: in the ninja library code range; behaviour name: a loop that only reads
 * called by: alt_entry_218ea0, alt_entry_2199c0, alt_entry_21a718, alt_entry_21a8be, alt_entry_21a952,
 * alt_entry_21b916, alt_entry_21b9a8, gfxlib_calls_scan_loop_21cf22 (+9 more)
 */
u32 ninja_scan_loop_2569e0(u32 *a0, int a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float fVar1;

    if (0 < a1)
        goto LAB_8c256a1a;
    do {
        if (a0[2] != 0) {
            fVar1 = ((float)(a0[2] & 0xffff) * 6.2831855) / 65536.0;
            sin(fVar1);
            cos(fVar1);
        }
        if (0 < a1) {
            return ain0;
        }
    LAB_8c256a1a:
        if (a0[1] != 0) {
            fVar1 = ((float)(a0[1] & 0xffff) * 6.2831855) / 65536.0;
            sin(fVar1);
            cos(fVar1);
        }
        if (*a0 != 0) {
            fVar1 = ((float)(*a0 & 0xffff) * 6.2831855) / 65536.0;
            sin(fVar1);
            cos(fVar1);
        }
    } while (0 < a1);
    return ain0;
}

/*
 * ninja_float_calc_256a78  0x8c256a78
 * area name: in the ninja library code range; behaviour name: floating-point arithmetic
 * called by: CSquidLine_uses_matrix_push_0ad354, Class_1299f8_m4_019588, Class_129a24_m1_019b68,
 * Class_12aeec_uses_gfx_set_color4_0a481c, Class_12bec0_draw_0f5e0c, Vec3_vec_02374c, matrix_rotate_deg,
 * matrix_rotate_deg_m
 */
u32 ninja_float_calc_256a78(int a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float fVar1;
    float fVar2;
    float fVar3;
    s64 lVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float in_xf0;
    float in_xf1;
    float in_xf2;
    float in_xf3;
    u64 in_xd4;
    float fVar9;
    u64 in_xd6;
    float fVar10;
    u64 in_xd8;
    float fVar11;
    u64 in_xd10;
    float fVar12;
    u64 in_xd12;
    float fVar13;
    u64 in_xd14;
    float fVar14;

    fVar13 = (float)((u64)in_xd12 >> 0x20);
    fVar14 = (float)((u64)in_xd14 >> 0x20);
    if (a0 != 0) {
        fVar1 = ((float)(u16)a1 * 6.2831855) / 65536.0;
        fVar2 = (float)sin(fVar1);
        fVar1 = (float)cos(fVar1);
        fVar2 = (float)fVar2;
        fVar1 = (float)fVar1;
        lVar4 = (u64)(u32)fVar2 << 0x20;
        fVar6 = *(float *)(a0 + 0x10);
        fVar5 = *(float *)(a0 + 0x14);
        fVar8 = *(float *)(a0 + 0x18);
        fVar7 = *(float *)(a0 + 0x1c);
        fVar9 = (float)((u64)in_xd4 >> 0x20);
        fVar11 = (float)((u64)in_xd8 >> 0x20);
        fVar10 = (float)((u64)in_xd6 >> 0x20);
        fVar12 = (float)((u64)in_xd10 >> 0x20);
        fVar3 = in_xf2 * fVar1 + (float)in_xd6 * 0.0 + (float)in_xd10 * 0.0 + (float)in_xd14 * fVar2;
        fVar3 = in_xf3 * fVar1 + fVar10 * 0.0 + fVar12 * 0.0 + fVar14 * fVar2;
        *(float *)(a0 + 0x2c) =
            in_xf2 * fVar5 + (float)in_xd6 * fVar6 + (float)in_xd10 * fVar7 + (float)in_xd14 * fVar8;
        *(float *)(a0 + 0x28) = in_xf3 * fVar5 + fVar10 * fVar6 + fVar12 * fVar7 + fVar14 * fVar8;
        *(float *)(a0 + 0x24) = in_xf0 * fVar5 + (float)in_xd4 * fVar6 + (float)in_xd8 * fVar7 + (float)in_xd12 * fVar8;
        *(float *)(a0 + 0x20) = in_xf1 * fVar5 + fVar9 * fVar6 + fVar11 * fVar7 + fVar13 * fVar8;
        *(int *)(a0 + 0x1c) = (int)lVar4;
        *(int *)(a0 + 0x18) = (int)((u64)lVar4 >> 0x20);
        *(float *)(a0 + 0x14) = in_xf0 * fVar1 + (float)in_xd4 * 0.0 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar2;
        *(float *)(a0 + 0x10) = in_xf1 * fVar1 + fVar9 * 0.0 + fVar11 * 0.0 + fVar13 * fVar2;
        return ain0;
    }
    fVar13 = ((float)(u16)a1 * 6.2831855) / 65536.0;
    sin(fVar13);
    cos(fVar13);
    return ain0;
}

/*
 * njRotateXYZ  0x8c256b0c
 * rotates matrix a0 (NULL: current) by Ninja angles a1, a2, a3
 * called by: CAnimal_draw_088288, CAnimal_uses_njGetMatrix_026968, CSquidLine_uses_matrix_push_0ad354,
 * Class_1298b8_m11_0159ec, Class_1298b8_m3_0155e8, Class_1298b8_m5_015720, Class_1298b8_m6_0157f8,
 * Class_1298b8_m7_015890 (+28 more) decompiler: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x8c256c66
 */
u32 njRotateXYZ(float *a0, u32 a1, u32 a2, u32 a3, u32 ain0) {
    float fVar1;
    float fVar3;
    u64 uVar2;
    float fVar4;
    float fVar7;
    s64 lVar5;
    s64 lVar6;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    u64 in_xd0;
    float fVar13;
    float fVar14;
    u64 in_xd2;
    float fVar15;
    float fVar16;
    u64 in_xd4;
    float fVar17;
    float fVar18;
    u64 in_xd6;
    float fVar19;
    float fVar20;
    u64 in_xd8;
    float fVar21;
    float fVar22;
    u64 in_xd10;
    float fVar23;
    float fVar24;
    u64 in_xd12;
    float fVar25;
    float fVar26;
    u64 in_xd14;
    float fVar27;

    fVar20 = (float)in_xd8;
    fVar21 = (float)((u64)in_xd8 >> 0x20);
    fVar22 = (float)in_xd10;
    fVar23 = (float)((u64)in_xd10 >> 0x20);
    fVar24 = (float)in_xd12;
    fVar25 = (float)((u64)in_xd12 >> 0x20);
    fVar26 = (float)in_xd14;
    fVar27 = (float)((u64)in_xd14 >> 0x20);
    if (a0 != NULL) {
        fVar12 = (float)in_xd0;
        fVar13 = (float)((u64)in_xd0 >> 0x20);
        fVar14 = (float)in_xd2;
        fVar15 = (float)((u64)in_xd2 >> 0x20);
        fVar16 = (float)in_xd4;
        fVar17 = (float)((u64)in_xd4 >> 0x20);
        fVar18 = (float)in_xd6;
        fVar19 = (float)((u64)in_xd6 >> 0x20);
        if (a3 != 0) {
            fVar1 = ((float)(a3 & 0xffff) * 6.2831855) / 65536.0;
            sin(fVar1);
            cos(fVar1);
            fVar3 = *a0;
            fVar1 = a0[1];
            fVar7 = a0[2];
            fVar4 = a0[3];
            fVar9 = a0[4];
            fVar8 = a0[5];
            fVar11 = a0[6];
            fVar10 = a0[7];
            a0[7] = fVar14 * fVar8 + fVar18 * fVar9 + fVar22 * fVar10 + fVar26 * fVar11;
            a0[6] = fVar15 * fVar8 + fVar19 * fVar9 + fVar23 * fVar10 + fVar27 * fVar11;
            a0[5] = fVar12 * fVar8 + fVar16 * fVar9 + fVar20 * fVar10 + fVar24 * fVar11;
            a0[4] = fVar13 * fVar8 + fVar17 * fVar9 + fVar21 * fVar10 + fVar25 * fVar11;
            a0[3] = fVar14 * fVar1 + fVar18 * fVar3 + fVar22 * fVar4 + fVar26 * fVar7;
            a0[2] = fVar15 * fVar1 + fVar19 * fVar3 + fVar23 * fVar4 + fVar27 * fVar7;
            a0[1] = fVar12 * fVar1 + fVar16 * fVar3 + fVar20 * fVar4 + fVar24 * fVar7;
            *a0 = fVar13 * fVar1 + fVar17 * fVar3 + fVar21 * fVar4 + fVar25 * fVar7;
        }
        if (a2 != 0) {
            fVar1 = ((float)(a2 & 0xffff) * 6.2831855) / 65536.0;
            fVar3 = (float)sin(fVar1);
            fVar1 = (float)cos(fVar1);
            fVar3 = (float)fVar3;
            fVar1 = (float)fVar1;
            lVar5 = (u64)(u32)fVar3 << 0x20;
            lVar6 = (u64)(u32)fVar1 << 0x20;
            fVar7 = *a0;
            fVar4 = a0[1];
            fVar9 = a0[2];
            fVar8 = a0[3];
            fVar10 = fVar12 * 0.0 + fVar16 * fVar3 + fVar20 * 0.0 + fVar24 * fVar1;
            fVar10 = fVar13 * 0.0 + fVar17 * fVar3 + fVar21 * 0.0 + fVar25 * fVar1;
            fVar10 = fVar14 * 0.0 + fVar18 * fVar3 + fVar22 * 0.0 + fVar26 * fVar1;
            fVar1 = fVar15 * 0.0 + fVar19 * fVar3 + fVar23 * 0.0 + fVar27 * fVar1;
            a0[0xb] = (float)lVar6;
            a0[10] = (float)((u64)lVar6 >> 0x20);
            a0[9] = (float)lVar5;
            a0[8] = (float)((u64)lVar5 >> 0x20);
            a0[3] = fVar14 * fVar4 + fVar18 * fVar7 + fVar22 * fVar8 + fVar26 * fVar9;
            a0[2] = fVar15 * fVar4 + fVar19 * fVar7 + fVar23 * fVar8 + fVar27 * fVar9;
            a0[1] = fVar12 * fVar4 + fVar16 * fVar7 + fVar20 * fVar8 + fVar24 * fVar9;
            *a0 = fVar13 * fVar4 + fVar17 * fVar7 + fVar21 * fVar8 + fVar25 * fVar9;
        }
        if (a1 != 0) {
            fVar1 = ((float)(a1 & 0xffff) * 6.2831855) / 65536.0;
            fVar3 = (float)sin(fVar1);
            fVar1 = (float)cos(fVar1);
            fVar3 = (float)fVar3;
            fVar1 = (float)fVar1;
            lVar6 = (u64)(u32)fVar3 << 0x20;
            uVar2 = (u64)(u32)fVar1;
            fVar8 = a0[4];
            fVar7 = a0[5];
            fVar10 = a0[6];
            fVar9 = a0[7];
            fVar4 = fVar12 * fVar1 + fVar16 * 0.0 + fVar20 * 0.0 + fVar24 * fVar3;
            fVar4 = fVar13 * fVar1 + fVar17 * 0.0 + fVar21 * 0.0 + fVar25 * fVar3;
            fVar4 = fVar14 * fVar1 + fVar18 * 0.0 + fVar22 * 0.0 + fVar26 * fVar3;
            fVar1 = fVar15 * fVar1 + fVar19 * 0.0 + fVar23 * 0.0 + fVar27 * fVar3;
            a0[0xb] = fVar14 * fVar7 + fVar18 * fVar8 + fVar22 * fVar9 + fVar26 * fVar10;
            a0[10] = fVar15 * fVar7 + fVar19 * fVar8 + fVar23 * fVar9 + fVar27 * fVar10;
            a0[9] = fVar12 * fVar7 + fVar16 * fVar8 + fVar20 * fVar9 + fVar24 * fVar10;
            a0[8] = fVar13 * fVar7 + fVar17 * fVar8 + fVar21 * fVar9 + fVar25 * fVar10;
            a0[7] = (float)lVar6;
            a0[6] = (float)((u64)lVar6 >> 0x20);
            a0[5] = (float)uVar2;
            a0[4] = (float)(uVar2 >> 0x20);
        }
        return ain0;
    }
    if (a3 != 0) {
        fVar20 = ((float)(a3 & 0xffff) * 6.2831855) / 65536.0;
        sin(fVar20);
        cos(fVar20);
    }
    if (a2 != 0) {
        fVar20 = ((float)(a2 & 0xffff) * 6.2831855) / 65536.0;
        sin(fVar20);
        cos(fVar20);
    }
    if (a1 != 0) {
        fVar20 = ((float)(a1 & 0xffff) * 6.2831855) / 65536.0;
        sin(fVar20);
        cos(fVar20);
    }
    return ain0;
}

/*
 * njRotateY  0x8c256ce0
 * rotates matrix a0 (NULL: current) about Y by Ninja angle a1
 * called by: Class_1299f8_m4_019588, Class_129a24_m1_019b68, Class_12aeec_uses_gfx_set_color4_0a481c, Vec3_vec_0238b4,
 * njRotateY_wrap, rotate_y_degrees
 */
u32 njRotateY(float *a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    s64 lVar8;
    s64 lVar9;
    u64 in_xd0;
    float fVar10;
    u64 in_xd2;
    float fVar11;
    float in_xf4;
    float in_xf5;
    float in_xf6;
    float in_xf7;
    u64 in_xd8;
    float fVar12;
    u64 in_xd10;
    float fVar13;
    u64 in_xd12;
    float fVar14;
    u64 in_xd14;
    float fVar15;

    fVar14 = (float)((u64)in_xd12 >> 0x20);
    fVar15 = (float)((u64)in_xd14 >> 0x20);
    if (a0 != NULL) {
        fVar1 = ((float)(u16)a1 * 6.2831855) / 65536.0;
        fVar3 = (float)sin(fVar1);
        fVar1 = (float)cos(fVar1);
        fVar3 = (float)fVar3;
        fVar1 = (float)fVar1;
        lVar9 = (u64)(u32)fVar1 << 0x20;
        lVar8 = (u64)(u32)fVar3 << 0x20;
        fVar4 = *a0;
        fVar2 = a0[1];
        fVar6 = a0[2];
        fVar5 = a0[3];
        fVar10 = (float)((u64)in_xd0 >> 0x20);
        fVar12 = (float)((u64)in_xd8 >> 0x20);
        fVar11 = (float)((u64)in_xd2 >> 0x20);
        fVar13 = (float)((u64)in_xd10 >> 0x20);
        fVar7 = (float)in_xd0 * 0.0 + in_xf4 * fVar3 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar1;
        fVar7 = fVar10 * 0.0 + in_xf5 * fVar3 + fVar12 * 0.0 + fVar14 * fVar1;
        fVar7 = (float)in_xd2 * 0.0 + in_xf6 * fVar3 + (float)in_xd10 * 0.0 + (float)in_xd14 * fVar1;
        fVar1 = fVar11 * 0.0 + in_xf7 * fVar3 + fVar13 * 0.0 + fVar15 * fVar1;
        a0[0xb] = (float)lVar9;
        a0[10] = (float)((u64)lVar9 >> 0x20);
        a0[9] = (float)lVar8;
        a0[8] = (float)((u64)lVar8 >> 0x20);
        a0[3] = (float)in_xd2 * fVar2 + in_xf6 * fVar4 + (float)in_xd10 * fVar5 + (float)in_xd14 * fVar6;
        a0[2] = fVar11 * fVar2 + in_xf7 * fVar4 + fVar13 * fVar5 + fVar15 * fVar6;
        a0[1] = (float)in_xd0 * fVar2 + in_xf4 * fVar4 + (float)in_xd8 * fVar5 + (float)in_xd12 * fVar6;
        *a0 = fVar10 * fVar2 + in_xf5 * fVar4 + fVar12 * fVar5 + fVar14 * fVar6;
        return ain0;
    }
    fVar14 = ((float)(u16)a1 * 6.2831855) / 65536.0;
    sin(fVar14);
    cos(fVar14);
    return ain0;
}

/*
 * njRotateZ  0x8c256d7c
 * rotates matrix a0 (NULL: current) about Z by Ninja angle a1
 * called by: Class_129a24_m1_019b68, Class_12aeec_uses_gfx_set_color4_0a481c, njRotateZ_wrap, rotate_degrees
 */
u32 njRotateZ(float *a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    u64 in_xd0;
    float fVar9;
    u64 in_xd2;
    float fVar10;
    u64 in_xd4;
    float fVar11;
    u64 in_xd6;
    float fVar12;
    float in_xf8;
    float in_xf9;
    float in_xf10;
    float in_xf11;
    u64 in_xd12;
    float fVar13;
    u64 in_xd14;
    float fVar14;

    fVar13 = (float)((u64)in_xd12 >> 0x20);
    fVar14 = (float)((u64)in_xd14 >> 0x20);
    if (a0 != NULL) {
        fVar1 = ((float)(u16)a1 * 6.2831855) / 65536.0;
        sin(fVar1);
        cos(fVar1);
        fVar2 = *a0;
        fVar1 = a0[1];
        fVar4 = a0[2];
        fVar3 = a0[3];
        fVar6 = a0[4];
        fVar5 = a0[5];
        fVar8 = a0[6];
        fVar7 = a0[7];
        fVar9 = (float)((u64)in_xd0 >> 0x20);
        fVar11 = (float)((u64)in_xd4 >> 0x20);
        fVar10 = (float)((u64)in_xd2 >> 0x20);
        fVar12 = (float)((u64)in_xd6 >> 0x20);
        a0[7] = (float)in_xd2 * fVar5 + (float)in_xd6 * fVar6 + in_xf10 * fVar7 + (float)in_xd14 * fVar8;
        a0[6] = fVar10 * fVar5 + fVar12 * fVar6 + in_xf11 * fVar7 + fVar14 * fVar8;
        a0[5] = (float)in_xd0 * fVar5 + (float)in_xd4 * fVar6 + in_xf8 * fVar7 + (float)in_xd12 * fVar8;
        a0[4] = fVar9 * fVar5 + fVar11 * fVar6 + in_xf9 * fVar7 + fVar13 * fVar8;
        a0[3] = (float)in_xd2 * fVar1 + (float)in_xd6 * fVar2 + in_xf10 * fVar3 + (float)in_xd14 * fVar4;
        a0[2] = fVar10 * fVar1 + fVar12 * fVar2 + in_xf11 * fVar3 + fVar14 * fVar4;
        a0[1] = (float)in_xd0 * fVar1 + (float)in_xd4 * fVar2 + in_xf8 * fVar3 + (float)in_xd12 * fVar4;
        *a0 = fVar9 * fVar1 + fVar11 * fVar2 + in_xf9 * fVar3 + fVar13 * fVar4;
        return ain0;
    }
    fVar13 = ((float)(u16)a1 * 6.2831855) / 65536.0;
    sin(fVar13);
    cos(fVar13);
    return ain0;
}

/*
 * ninja_float_calc_256e18  0x8c256e18
 * area name: in the ninja library code range; behaviour name: floating-point arithmetic
 * called by: alt_entry_253d20, game_uses_njGetMatrix_029af0, ninja_calls_float_calc_254f1e,
 * ninja_uses_matrix_push_253d1c decompiler: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x8c256f72
 */
u32 ninja_float_calc_256e18(float *a0, u32 a1, u32 a2, u32 a3, u32 ain0) {
    float fVar1;
    float fVar2;
    float fVar4;
    float fVar5;
    u64 uVar3;
    float fVar6;
    float fVar8;
    s64 lVar7;
    float fVar9;
    s64 lVar10;
    float fVar11;
    float fVar12;
    u64 in_xd0;
    float fVar13;
    float fVar14;
    u64 in_xd2;
    float fVar15;
    float fVar16;
    u64 in_xd4;
    float fVar17;
    float fVar18;
    u64 in_xd6;
    float fVar19;
    float fVar20;
    u64 in_xd8;
    float fVar21;
    float fVar22;
    u64 in_xd10;
    float fVar23;
    float fVar24;
    u64 in_xd12;
    float fVar25;
    float fVar26;
    u64 in_xd14;
    float fVar27;

    fVar16 = (float)in_xd4;
    fVar17 = (float)((u64)in_xd4 >> 0x20);
    fVar18 = (float)in_xd6;
    fVar19 = (float)((u64)in_xd6 >> 0x20);
    fVar24 = (float)in_xd12;
    fVar25 = (float)((u64)in_xd12 >> 0x20);
    fVar26 = (float)in_xd14;
    fVar27 = (float)((u64)in_xd14 >> 0x20);
    if (a0 != NULL) {
        fVar12 = (float)in_xd0;
        fVar13 = (float)((u64)in_xd0 >> 0x20);
        fVar14 = (float)in_xd2;
        fVar15 = (float)((u64)in_xd2 >> 0x20);
        fVar20 = (float)in_xd8;
        fVar21 = (float)((u64)in_xd8 >> 0x20);
        fVar22 = (float)in_xd10;
        fVar23 = (float)((u64)in_xd10 >> 0x20);
        if (a2 != 0) {
            fVar1 = ((float)(a2 & 0xffff) * 6.2831855) / 65536.0;
            fVar4 = (float)sin(fVar1);
            fVar1 = (float)cos(fVar1);
            fVar4 = (float)fVar4;
            fVar1 = (float)fVar1;
            lVar10 = (u64)(u32)fVar1 << 0x20;
            lVar7 = (u64)(u32)fVar4 << 0x20;
            fVar5 = *a0;
            fVar2 = a0[1];
            fVar8 = a0[2];
            fVar6 = a0[3];
            fVar9 = fVar12 * 0.0 + fVar16 * fVar4 + fVar20 * 0.0 + fVar24 * fVar1;
            fVar9 = fVar13 * 0.0 + fVar17 * fVar4 + fVar21 * 0.0 + fVar25 * fVar1;
            fVar9 = fVar14 * 0.0 + fVar18 * fVar4 + fVar22 * 0.0 + fVar26 * fVar1;
            fVar1 = fVar15 * 0.0 + fVar19 * fVar4 + fVar23 * 0.0 + fVar27 * fVar1;
            a0[0xb] = (float)lVar10;
            a0[10] = (float)((u64)lVar10 >> 0x20);
            a0[9] = (float)lVar7;
            a0[8] = (float)((u64)lVar7 >> 0x20);
            a0[3] = fVar14 * fVar2 + fVar18 * fVar5 + fVar22 * fVar6 + fVar26 * fVar8;
            a0[2] = fVar15 * fVar2 + fVar19 * fVar5 + fVar23 * fVar6 + fVar27 * fVar8;
            a0[1] = fVar12 * fVar2 + fVar16 * fVar5 + fVar20 * fVar6 + fVar24 * fVar8;
            *a0 = fVar13 * fVar2 + fVar17 * fVar5 + fVar21 * fVar6 + fVar25 * fVar8;
        }
        if (a1 != 0) {
            fVar1 = ((float)(a1 & 0xffff) * 6.2831855) / 65536.0;
            fVar4 = (float)sin(fVar1);
            fVar1 = (float)cos(fVar1);
            fVar4 = (float)fVar4;
            fVar1 = (float)fVar1;
            lVar7 = (u64)(u32)fVar4 << 0x20;
            uVar3 = (u64)(u32)fVar1;
            fVar6 = a0[4];
            fVar5 = a0[5];
            fVar9 = a0[6];
            fVar8 = a0[7];
            fVar2 = fVar12 * fVar1 + fVar16 * 0.0 + fVar20 * 0.0 + fVar24 * fVar4;
            fVar2 = fVar13 * fVar1 + fVar17 * 0.0 + fVar21 * 0.0 + fVar25 * fVar4;
            fVar2 = fVar14 * fVar1 + fVar18 * 0.0 + fVar22 * 0.0 + fVar26 * fVar4;
            fVar1 = fVar15 * fVar1 + fVar19 * 0.0 + fVar23 * 0.0 + fVar27 * fVar4;
            a0[0xb] = fVar14 * fVar5 + fVar18 * fVar6 + fVar22 * fVar8 + fVar26 * fVar9;
            a0[10] = fVar15 * fVar5 + fVar19 * fVar6 + fVar23 * fVar8 + fVar27 * fVar9;
            a0[9] = fVar12 * fVar5 + fVar16 * fVar6 + fVar20 * fVar8 + fVar24 * fVar9;
            a0[8] = fVar13 * fVar5 + fVar17 * fVar6 + fVar21 * fVar8 + fVar25 * fVar9;
            a0[7] = (float)lVar7;
            a0[6] = (float)((u64)lVar7 >> 0x20);
            a0[5] = (float)uVar3;
            a0[4] = (float)(uVar3 >> 0x20);
        }
        if (a3 != 0) {
            fVar1 = ((float)(a3 & 0xffff) * 6.2831855) / 65536.0;
            sin(fVar1);
            cos(fVar1);
            fVar4 = *a0;
            fVar1 = a0[1];
            fVar5 = a0[2];
            fVar2 = a0[3];
            fVar8 = a0[4];
            fVar6 = a0[5];
            fVar11 = a0[6];
            fVar9 = a0[7];
            a0[7] = fVar14 * fVar6 + fVar18 * fVar8 + fVar22 * fVar9 + fVar26 * fVar11;
            a0[6] = fVar15 * fVar6 + fVar19 * fVar8 + fVar23 * fVar9 + fVar27 * fVar11;
            a0[5] = fVar12 * fVar6 + fVar16 * fVar8 + fVar20 * fVar9 + fVar24 * fVar11;
            a0[4] = fVar13 * fVar6 + fVar17 * fVar8 + fVar21 * fVar9 + fVar25 * fVar11;
            a0[3] = fVar14 * fVar1 + fVar18 * fVar4 + fVar22 * fVar2 + fVar26 * fVar5;
            a0[2] = fVar15 * fVar1 + fVar19 * fVar4 + fVar23 * fVar2 + fVar27 * fVar5;
            a0[1] = fVar12 * fVar1 + fVar16 * fVar4 + fVar20 * fVar2 + fVar24 * fVar5;
            *a0 = fVar13 * fVar1 + fVar17 * fVar4 + fVar21 * fVar2 + fVar25 * fVar5;
        }
        return ain0;
    }
    if (a2 != 0) {
        fVar16 = ((float)(a2 & 0xffff) * 6.2831855) / 65536.0;
        sin(fVar16);
        cos(fVar16);
    }
    if (a1 != 0) {
        fVar16 = ((float)(a1 & 0xffff) * 6.2831855) / 65536.0;
        sin(fVar16);
        cos(fVar16);
    }
    if (a3 != 0) {
        fVar16 = ((float)(a3 & 0xffff) * 6.2831855) / 65536.0;
        sin(fVar16);
        cos(fVar16);
    }
    return ain0;
}

/*
 * matrix_scale  0x8c256fec
 * scales the matrix rows by fr4, fr5, fr6
 * called by: CAnimal_draw_088288, CAnimal_uses_njGetMatrix_026968, CSquidLine_uses_matrix_push_0ad354,
 * CSquidLine_uses_matrix_scale_0369c4, Class_1298b8_m11_0159ec, Class_1298b8_m4_0156a0, Class_1298b8_m5_015720,
 * Class_1298b8_m7_015890 (+26 more)
 */
u32 matrix_scale(float *a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float in_fr5;
    float in_fr4;
    float in_fr6;

    if (a0 == NULL) {
        return ain0;
    }
    *a0 = *a0 * in_fr4;
    a0[1] = a0[1] * in_fr4;
    a0[2] = a0[2] * in_fr4;
    a0[3] = a0[3] * in_fr4;
    a0[4] = a0[4] * in_fr5;
    a0[5] = a0[5] * in_fr5;
    a0[6] = a0[6] * in_fr5;
    a0[7] = a0[7] * in_fr5;
    a0[8] = a0[8] * in_fr6;
    a0[9] = a0[9] * in_fr6;
    a0[10] = a0[10] * in_fr6;
    a0[0xb] = a0[0xb] * in_fr6;
    return 0x28;
}

/*
 * noop_257098  0x8c257098
 * does nothing
 * called by: alt_entry_218ea0, alt_entry_2199c0, alt_entry_21a718, alt_entry_21a8be, alt_entry_21a952,
 * alt_entry_21b916, alt_entry_21b9a8, gfxlib_uses_matrix_push_regs_218e8a (+8 more)
 */
u32 noop_257098(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_2570d8  0x8c2570d8
 * does nothing
 * called by: Class_1299f8_m3_019f00
 */
u32 noop_2570d8(u32 a0) {
    u32 in_r0;

    return in_r0;
}

/*
 * ninja_float_calc_2570ec  0x8c2570ec
 * area name: in the ninja library code range; behaviour name: floating-point arithmetic
 * called by: game_init
 */
u32 ninja_float_calc_2570ec(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 in_fr5;
    u32 in_fr4;

    g_8c4aa4dc = in_fr4;
    g_8c4aa4e0 = in_fr5;
    return ain0;
}

/*
 * ninja_draw_257104  0x8c257104
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: CProlog_Ready
 */
u32 ninja_draw_257104(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = pvr_wrap_20a16e(a0, r5, r6, r7, a0);
    return uVar1;
}

/*
 * ninja_draw_257120  0x8c257120
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: WEATHRE_UNIT_CreateGraphics, game_draw_0d8400
 */
u32 ninja_draw_257120(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = pvr_wrap_20a16e(a0, r5, r6, r7, a0);
    return uVar1;
}

/*
 * thunk_FUN_8c20a1d0  0x8c25713c
 * called by: WEATHRE_UNIT_CreateGraphics, game_draw_0d1c3c, game_draw_0d8400, game_uses_CWaterTank_CreateStage_0de07c
 */
u32 thunk_FUN_8c20a1d0(u32 a0) {
    u32 uVar1;

    uVar1 = (g_8c20a1d0)();
    return uVar1;
}

/*
 * ninja_uses_ninja_angle_sincos_257148  0x8c257148
 * area name: in the ninja library code range; behaviour name: its main named callee is ninja_angle_sincos
 * called by: game_uses_touch_fields_30_3c_0ff928, rotate_degrees_7c
 */
u32 ninja_uses_ninja_angle_sincos_257148(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    double in_dr0;
    float fVar2;
    double dVar3;
    u32 uVar4;
    u32 in_PR;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    uVar1 = ninja_angle_sincos(a0 >> 1, r5, r6, r7, in_PR);
    fVar2 = (float)((u64)in_dr0 >> 0x20);
    if (cVar6 == '\0') {
        dVar3 = (double)CONCAT44(g_8c4aa4ac, fVar2);
    } else {
        dVar3 = (double)CONCAT44(g_8c4aa4b0, g_8c4aa4ac);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) / (fVar2 + SUB84(dVar3, 0)), SUB84(dVar3, 0));
    } else {
        dVar3 = dVar3 / (in_dr0 + dVar3);
    }
    uVar4 = (u32)((u64)dVar3 >> 0x20);
    g_8c4aa4a8 = uVar4;
    if (cVar6 != '\0') {
        g_8c4aa4a8 = SUB84(dVar3, 0);
        g_8c4aa4ac = uVar4;
    }
    return uVar1;
}

/*
 * ninja_calc_257170  0x8c257170
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 * called by: game_uses_touch_fields_30_3c_0ff928
 */
u32 ninja_calc_257170(u32 *a0) {
    g_8c4aa4a8 = *a0;
    g_8c4aa4b4 = a0[3];
    g_8c4aa4b8 = a0[4];
    return 0x10;
}

/*
 * ninja_init_fields_257188  0x8c257188
 * area name: in the ninja library code range; behaviour name: writes 3 members
 * called by: C3DRenderPly_SetMem, game_uses_malloc_thunk_015f18, game_uses_set_fields_0_4_8_015470
 */
u32 ninja_init_fields_257188(u32 *a0, u32 a1, int a2, u32 a3, u32 s0) {
    u32 in_r0;

    *a0 = a1;
    a0[4] = a3;
    a0[5] = s0;
    a0[1] = a2 << 0x10;
    return in_r0;
}

/*
 * set_fields_0_4_8_257196  0x8c257196
 * stores +0x0, +0x4, +0x8
 * called by: C3DRenderPly_SetMem, game_uses_Class_129920_ctor_0c2490, game_uses_malloc_thunk_015f18,
 * game_uses_set_fields_0_4_8_015470
 */
u32 set_fields_0_4_8_257196(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;

    *a0 = a1;
    a0[1] = a3;
    a0[2] = a2;
    return in_r0;
}

/*
 * tex_size_to_index  0x8c2571a8
 * texture size 8..1024 to 0..7
 * called by: alt_entry_257208, tex_uses_tex_size_to_index_2571fe
 */
int tex_size_to_index(int a0) {
    if (a0 == 8) {
        a0 = 0;
    } else if (a0 == 0x10) {
        a0 = 1;
    } else if (a0 == 0x20) {
        a0 = 2;
    } else if (a0 == 0x40) {
        a0 = 3;
    } else if (a0 == 0x80) {
        a0 = 4;
    } else if (a0 == 0x100) {
        a0 = 5;
    } else if (a0 == 0x200) {
        a0 = 6;
    } else if (a0 == 0x400) {
        a0 = 7;
    }
    return a0;
}

/*
 * tex_uses_tex_size_to_index_2571fe  0x8c2571fe
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is
 * tex_size_to_index called by: alt_entry_237830, alt_entry_25a394, gfxlib_uses_ninja_close_file_239212,
 * gfxlib_uses_tex_entry_alloc_23793c, gfxlib_uses_tex_entry_alloc_237964, gfxlib_uses_tex_entry_alloc_2387a0,
 * ninja_draw_25b4ea, pvr_uses_tex_entry_alloc_23a29c (+2 more)
 */
u32 tex_uses_tex_size_to_index_2571fe(int a0) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;

    iVar1 = tex_size_to_index(*(u32 *)(a0 + 0x24));
    uVar2 = tex_size_to_index(*(u32 *)(a0 + 0x28));
    uVar3 = 0xbfffffff;
    *(u32 *)(a0 + 8) = iVar1 << 3 | uVar2;
    uVar4 = *(u32 *)(a0 + 0x30);
    uVar2 = *(u32 *)(a0 + 0x18) >> 0x10 & 0xff00;
    uVar3 = (((((u32)((uVar4 & 1) != 0) << 0x1f & uVar3 | (uVar4 & 8) << 0x1b) & 0xc7ffffff |
               *(u32 *)(a0 + 0x20) & 0x38000000) &
                  0xfbffffff |
              (~(uVar4 & 4) & 4) << 0x18) &
                 0xfdffffff |
             (uVar4 & 0x10) << 0x15) &
                0xff800000 |
            *(u32 *)(a0 + 0x34) >> 3;
    if ((uVar2 == (int)0x500) || (uVar2 == (int)0x600)) {
        uVar2 = *(u32 *)(a0 + 4) & 0x3f;
    } else {
        if ((uVar2 != (int)0x700) && (uVar2 != (int)0x800))
            goto LAB_8c2572b6;
        uVar2 = *(u32 *)(a0 + 4) & 0x30;
    }
    uVar3 = uVar2 << 0x15 | 0xf81fffff & uVar3;
LAB_8c2572b6:
    *(u32 *)(a0 + 0xc) = uVar3;
    return uVar2;
}

/*
 * alt_entry_257208  0x8c257208
 * probably an entry 10 bytes into 8c2571fe: it reads registers that code sets before it
 */
u32 alt_entry_257208(int a0) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    int unaff_r13;

    iVar1 = tex_size_to_index(*(u32 *)(unaff_r13 + 0xc));
    uVar2 = tex_size_to_index(*(u32 *)(unaff_r13 + 0x10));
    uVar3 = 0xbfffffff;
    *(u32 *)(a0 + 8) = iVar1 << 3 | uVar2;
    uVar4 = *(u32 *)(unaff_r13 + 0x18);
    uVar2 = *(u32 *)(a0 + 0x18) >> 0x10 & 0xff00;
    uVar3 = (((((u32)((uVar4 & 1) != 0) << 0x1f & uVar3 | (uVar4 & 8) << 0x1b) & 0xc7ffffff |
               *(u32 *)(unaff_r13 + 8) & 0x38000000) &
                  0xfbffffff |
              (~(uVar4 & 4) & 4) << 0x18) &
                 0xfdffffff |
             (uVar4 & 0x10) << 0x15) &
                0xff800000 |
            *(u32 *)(unaff_r13 + 0x1c) >> 3;
    if ((uVar2 == (int)0x500) || (uVar2 == (int)0x600)) {
        uVar2 = *(u32 *)(a0 + 4) & 0x3f;
    } else {
        if ((uVar2 != (int)0x700) && (uVar2 != (int)0x800))
            goto LAB_8c2572b6;
        uVar2 = *(u32 *)(a0 + 4) & 0x30;
    }
    uVar3 = uVar2 << 0x15 | 0xf81fffff & uVar3;
LAB_8c2572b6:
    *(u32 *)(a0 + 0xc) = uVar3;
    return uVar2;
}

/*
 * ninja_vec_2572ec  0x8c2572ec
 * area name: in the ninja library code range; behaviour name: mostly calls vec functions
 * called by: Class_1299f8_m1_01a148, Class_129a24_m1_019b68, game_uses_matrix_push_0cc524,
 * game_uses_touch_fields_30_3c_0ff928
 */
u32 ninja_vec_2572ec(float *a0) {
    u32 uVar1;
    float *ar6_00;
    float *ar7_00;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar2 = ((float)(-(int)a0[0x16] & 0xffff) * 6.2831855) / 65536.0;
    fVar3 = (float)sin(fVar2);
    fVar2 = (float)cos(fVar2);
    fVar3 = (float)fVar3;
    fVar2 = (float)fVar2;
    fVar4 = a0[0x13] * a0[0x13] + a0[0x15] * a0[0x15];
    fVar5 = 1.0 / SQRT(a0[0x14] * a0[0x14] + fVar4);
    fVar7 = a0[0x14] * fVar5;
    fVar5 = SQRT(fVar4) * fVar5;
    if (fVar4 <= 1e-06) {
        fVar4 = 0.0;
        fVar6 = 1.0;
    } else {
        fVar6 = a0[0x15] * (1.0 / SQRT(fVar4));
        fVar4 = -(a0[0x13] * (1.0 / SQRT(fVar4)));
    }
    *a0 = fVar2 * fVar6 - fVar3 * fVar7 * fVar4;
    a0[1] = fVar4 * fVar2 * fVar7 + fVar3 * fVar6;
    a0[2] = -(fVar5 * fVar4);
    a0[3] = 0.0;
    ar7_00 = a0 + 6;
    ar6_00 = a0 + 9;
    a0[4] = -(fVar3 * fVar5);
    a0[5] = fVar2 * fVar5;
    *ar7_00 = fVar7;
    a0[7] = 0.0;
    a0[8] = fVar6 * fVar3 * fVar7 + fVar2 * fVar4;
    *ar6_00 = fVar3 * fVar4 - fVar2 * fVar7 * fVar6;
    a0[10] = fVar5 * fVar6;
    a0[0xb] = 0.0;
    a0[0xc] = (-(a0[0x10] * *a0) - a0[0x11] * a0[4]) - a0[0x12] * a0[8];
    a0[0xd] = (-(a0[0x10] * a0[1]) - a0[0x11] * a0[5]) - a0[0x12] * *ar6_00;
    a0[0xe] = (-(a0[0x10] * a0[2]) - a0[0x11] * *ar7_00) - a0[0x12] * a0[10];
    a0[0xf] = 1.0;
    g_8c4c0cc0 = a0;
    uVar1 = ta_vec_213e2c(a0, a0, ar6_00, ar7_00);
    return uVar1;
}

/*
 * njSinCos  0x8c25747c
 * sine and cosine of a Ninja angle (0..65535 = one turn)
 * called by: Class_12a990_m2_09bc2c, Class_12b580_uses_njSinCos_0e705c, Class_12b930_sound_0d3d6c, game_draw_0d4124,
 * game_draw_0d4428, game_vec_03207c
 */
u32 njSinCos(u32 a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float fVar1;

    fVar1 = ((float)(u16)a0 * 6.2831855) / 65536.0;
    sin(fVar1);
    cos(fVar1);
    return ain0;
}

/*
 * noop_257488  0x8c257488
 * called by: ninja_draw_2588f8
 */
u32 noop_257488(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ninja_draw_25748c  0x8c25748c
 * area name: sits between ninja functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_draw_015d74
 */
u32 ninja_draw_25748c(int a0, int a1, u32 a2, u32 a3) {
    u32 ar4_00;
    u32 uVar1;
    u8 *a4;
    code *ar5_01;
    u32 ar6_00;
    code *pcVar2;
    ar6_00 = a2;
    draw_state_save(a0, a1, a2, a3);
    njSetTexture(*(u32 *)(a0 + 0x18));
    ta_calc_2371be((int)*(short *)(*(int *)(a0 + 0x1c) + a1 * 0x14 + 0x10));
    if ((a2 & 0x20) == 0) {
        uVar1 = 0x80028;
        ar5_01 = ta_init_fields_236b3c;
    } else {
        uVar1 = 0x2100028;
        ar5_01 = ta_init_fields_236c38;
    }
    pcVar2 = ar5_01;
    ta_fifo_237124(uVar1, ar5_01, ar6_00, a3);
    a4 = &g_8c4aa52c;
    if ((a2 & 2) == 0) {
        a4 = &g_8c271de8;
    }
    (*pcVar2)(a4, ar5_01, ar6_00, a3);
    ninja_float_calc_257e10(a0, a1, a2);
    uVar1 = ar4_00;
    ta_set_list_addr(ar4_00);
    uVar1 = draw_state_restore(uVar1);
    return uVar1;
}

/*
 * ninja_draw_25754c  0x8c25754c
 * area name: sits between ninja functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: Class_12984c_draw_016014, Class_12984c_draw_016068
 */
u32 ninja_draw_25754c(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int ar4_00;
    u32 uVar2;
    u8 *a4;
    code *pcVar3;
    u32 ar6_00;
    code *pcVar4;

    iVar1 = a1;
    ar6_00 = a2;
    draw_state_save(a0, a1, a2, a3);
    njSetTexture(*(u32 *)(a0 + 0x18));
    ta_calc_2371be((int)*(short *)(*(int *)(a0 + 0x1c) + a1 * 0x14 + 0x10));
    if ((a2 & 0x20) == 0) {
        uVar2 = 0x80028;
        pcVar3 = ta_init_fields_236b3c;
    } else {
        uVar2 = 0x2100028;
        pcVar3 = ta_init_fields_236c38;
    }
    pcVar4 = pcVar3;
    ta_fifo_237124(uVar2, pcVar3, ar6_00, a3);
    a4 = &g_8c4aa52c;
    if ((a2 & 2) == 0) {
        a4 = &g_8c271de8;
    }
    (*pcVar4)(a4, pcVar3, ar6_00, a3);
    pcVar3 = ninja_float_calc_257610;
    if ((a2 & 0x10) == 0) {
        pcVar3 = ninja_calls_fill_loop_2578ac;
    }
    iVar1 = (*pcVar3)(a0, a1, a2, a3);
    if (iVar1 != 0) {
        a0 = ar4_00;
        ta_set_list_addr(ar4_00);
    }
    uVar2 = draw_state_restore(a0);
    return uVar2;
}

/*
 * ninja_float_calc_257610  0x8c257610
 * area name: sits between ninja functions (same compilation unit); behaviour name: floating-point arithmetic
 */
u32 ninja_float_calc_257610(double *a0, int a1, u32 a2) {
    short sVar1;
    short sVar2;
    short sVar3;
    short sVar4;
    u32 uVar5;
    int iVar6;
    int in_r2;
    double *pdVar7;
    double *pdVar8;
    short *psVar9;
    u32 unaff_r8;
    double *pdVar10;
    u32 unaff_r9;
    u8 *puVar11;
    u8 *puVar12;
    u32 *puVar13;
    float fVar16;
    double dVar14;
    u32 uVar17;
    float fVar18;
    double dVar15;
    float fVar19;
    u32 uVar20;
    u32 uVar21;
    double dVar22;
    float fVar24;
    double dVar23;
    u32 in_fr5;
    float fVar25;
    double dVar26;
    double dVar27;
    float fVar28;
    u32 uVar29;
    double dVar30;
    float fVar31;
    double dVar32;
    double dVar33;
    float fVar34;
    u32 in_fr11;
    float fVar35;
    double dVar36;
    u32 in_fr13;
    float fVar37;
    double dVar38;
    float fVar39;
    double in_dr14;
    double in_xd0;
    double in_xd2;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    u64 in_xd10;
    double in_xd12;
    double in_xd14;
    bool bVar43;
    bool bVar44;
    bool bVar45;
    bool bVar46;
    bool bVar47;
    bool bVar48;
    bool bVar49;
    bool bVar50;
    bool bVar51;
    bool bVar52;
    bool bVar53;
    bool bVar54;
    bool bVar55;
    bool bVar56;
    bool bVar57;
    bool bVar58;
    u8 auStack_20[16];
    u8 auStack_10[12];

    uVar5 = 0xf0000000;
    uVar21 = 0xe0000000;

    stack0xfffffff8 = CONCAT44(SUB84(in_dr14, 0), auStack_10._8_4_);
    puVar11 = auStack_10;

    *(u32 *)(puVar11 + -4) = unaff_r9;
    *(u32 *)(puVar11 + -8) = unaff_r8;
    psVar9 = (short *)(a1 * 0x14 + *(int *)((int)a0 + 0x1c));

    dVar22 = (double)CONCAT44(g_8c2576d4, in_fr5);

    fVar18 = (float)((u64)dVar22 >> 0x20);

    fVar16 = (float)(int)psVar9[4] * fVar18;

    dVar14 = (double)CONCAT44(fVar16, (float)(int)psVar9[5] * fVar18);

    fVar16 = (float)(int)psVar9[6] * fVar18;

    dVar22 = (double)CONCAT44(fVar16, (float)(int)psVar9[7] * fVar18);

    dVar15 = dVar14;
    dVar26 = dVar22;
    if (((a2 & 4) != 0) && (dVar15 = dVar22, dVar26 = dVar14, 1)) {
        dVar15 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar14, 0));
        dVar26 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar22, 0));
    }
    dVar22 = in_xd0;
    dVar14 = in_xd2;
    if (((a2 & 8) != 0) && (dVar22 = in_xd2, dVar14 = in_xd0, 1)) {
        uVar17 = SUB84(dVar15, 0);
        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar26, 0));
        dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), uVar17);
        dVar22 = in_xd0;
        dVar14 = in_xd2;
    }
    sVar1 = *psVar9;
    sVar2 = psVar9[1];
    sVar3 = psVar9[2];
    sVar4 = psVar9[3];
    uVar17 = (u32)((u64)dVar15 >> 0x20);

    *(u32 *)(puVar11 + -0xc) = uVar17;
    pdVar10 = (double *)(puVar11 + -0x10);
    *(int *)pdVar10 = SUB84(dVar15, 0);

    iVar6 = -(int)sVar3;

    pdVar10 = (double *)((int)pdVar10 + -4);
    *(u32 *)pdVar10 = uVar17;

    pdVar10 = (double *)((int)pdVar10 + -4);
    *(int *)pdVar10 = SUB84(dVar26, 0);

    uVar17 = (u32)((u64)dVar26 >> 0x20);

    pdVar10 = (double *)((int)pdVar10 + -4);
    *(u32 *)pdVar10 = uVar17;

    *(int *)((int)pdVar10 + -4) = SUB84(dVar15, 0);
    pdVar10 = pdVar10 + -1;
    *(u32 *)pdVar10 = uVar17;

    fVar18 = (float)iVar6;

    pdVar10 = (double *)((int)pdVar10 + -4);
    *(int *)pdVar10 = SUB84(dVar26, 0);

    fVar16 = (float)-(int)sVar4;

    dVar26 = (double)CONCAT44(*(u32 *)((int)a0 + 0xc), *(u32 *)(a0 + 2));

    fVar24 = (float)((u64)dVar26 >> 0x20);

    dVar15 = (double)CONCAT44(fVar18 * fVar24, fVar16);
    fVar24 = (float)(sVar1 + iVar6) * fVar24;

    fVar18 = (float)((int)sVar2 + -(int)sVar4);

    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) * SUB84(dVar26, 0));
    dVar26 = (double)CONCAT44(fVar24, fVar18 * SUB84(dVar26, 0));

    dVar27 = (double)CONCAT44(*(u32 *)a0, *(u32 *)((int)a0 + 4));
    fVar18 = *(float *)(a0 + 1);
    pdVar8 = (double *)((int)a0 + 0xc);

    fVar19 = SUB84(dVar27, 0);
    fVar35 = (float)((u64)dVar27 >> 0x20);
    fVar16 = SUB84(in_xd12, 0) * fVar18;
    fVar24 = (float)((u64)in_xd12 >> 0x20) * fVar18;
    fVar18 = (float)((u64)dVar14 >> 0x20) * fVar19 + (float)((u64)in_xd6 >> 0x20) * fVar35 +
             (float)((u64)in_xd10 >> 0x20) * 1.0 + (float)((u64)in_xd14 >> 0x20) * fVar18;
    fVar16 = SUB84(dVar22, 0) * fVar19 + SUB84(in_xd4, 0) * fVar35 + SUB84(in_xd8, 0) * 1.0 + fVar16;
    fVar16 = (float)((u64)dVar22 >> 0x20) * fVar19 + (float)((u64)in_xd4 >> 0x20) * fVar35 +
             (float)((u64)in_xd8 >> 0x20) * 1.0 + fVar24;

    dVar32 = (double)CONCAT44(*(u32 *)0x8c4aa4d8, *(u32 *)0x8c4aa4d4);

    dVar30 = (double)CONCAT44(fVar18, 1.0 / fVar18);
    bVar43 = (float)((u64)dVar32 >> 0x20) < fVar18;

    if (!bVar43) {

        bVar43 = fVar18 < SUB84(dVar32, 0);

        if (!bVar43) {

            dVar36 = (double)CONCAT44(*(u32 *)0x8c4aa4a8, in_fr11);

            fVar16 = (float)((u64)dVar36 >> 0x20) * SUB84(dVar30, 0);
            dVar36 = (double)CONCAT44(fVar16, SUB84(dVar36, 0));
            dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) * fVar16, SUB84(dVar15, 0));

            dVar32 = (double)CONCAT44(*(u32 *)0x8c4aa4dc, SUB84(dVar32, 0));

            dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) * fVar16);

            dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)0x8c4aa4e0);

            dVar23 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) * fVar16, SUB84(dVar26, 0) * fVar16);
            fVar24 = (float)((u64)dVar32 >> 0x20) * fVar16;
            dVar26 = (double)CONCAT44(fVar24, SUB84(dVar32, 0) * fVar16);
            dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) * fVar24, SUB84(dVar27, 0));

            dVar32 = (double)CONCAT44(*(u32 *)((int)0x8c4aa4a8 + 0xc), SUB84(dVar36, 0));
            pdVar7 = 0x8c4aa4a8 + 2;

            dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) * SUB84(dVar26, 0));

            dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)pdVar7);

            dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) + (float)((u64)dVar32 >> 0x20), SUB84(dVar27, 0));

            puVar12 = puVar11 + -0x2c;
            *(float *)(puVar11 + -0x2c) = SUB84(dVar30, 0);

            dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) + SUB84(dVar32, 0));

            *(int *)(puVar12 + -4) = SUB84(dVar27, 0);
            puVar13 = (u32 *)(puVar12 + -8);
            *(int *)(puVar12 + -8) = (int)((u64)dVar27 >> 0x20);

            uVar17 = (u32)((u64)dVar15 >> 0x20);
            fVar16 = SUB84(dVar23, 0);
            uVar20 = (u32)((u64)dVar23 >> 0x20);
            dVar26 = in_xd14;
            if ((a2 & 1) == 0) {
                dVar36 = dVar15;
                dVar27 = dVar23;
                dVar38 = dVar23;

                dVar36 = (double)CONCAT44(uVar17, fVar16);
                dVar27 = (double)CONCAT44(uVar20, SUB84(dVar15, 0));
                dVar14 = in_xd4;

            } else {

                fVar24 = ((float)(*(u32 *)(pdVar8 + 1) & 0xffff) * 6.2831855) / 65536.0;
                fVar19 = (float)sin(fVar24);
                fVar24 = (float)cos(fVar24);
                dVar32 = (double)CONCAT44((float)fVar19, (float)fVar24);

                dVar26 = dVar23;
                dVar38 = dVar15;
                dVar36 = dVar22;

                dVar30 = (double)CONCAT44(fVar18, SUB84(dVar15, 0));
                dVar15 = (double)CONCAT44(uVar17, uVar17);
                dVar26 = (double)CONCAT44(uVar20, uVar20);
                dVar38 = dVar22;
                dVar36 = in_xd6;

                dVar22 = dVar38;
                fVar18 = SUB84(dVar32, 0);
                fVar24 = (float)((u64)dVar32 >> 0x20);

                dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) * fVar18, SUB84(dVar15, 0) * fVar24);
                dVar33 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) * fVar18, SUB84(dVar26, 0) * fVar24);

                dVar26 = dVar14;

                dVar36 = (double)CONCAT44(SUB84(dVar30, 0), fVar16);
                dVar26 = in_xd14;

                dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar24);
                dVar23 = (double)CONCAT44(uVar20, fVar16 * fVar24);
                in_dr14 = (double)CONCAT44((float)((u64)dVar36 >> 0x20) * fVar18, SUB84(dVar36, 0) * fVar18);

                fVar18 = (float)((u64)dVar15 >> 0x20);
                dVar36 = dVar15;

                dVar36 = (double)CONCAT44(fVar18, SUB84(dVar27, 0));

                dVar36 = (double)CONCAT44((float)((u64)dVar36 >> 0x20) - SUB84(dVar23, 0), SUB84(dVar36, 0));

                dVar14 = dVar22;

                dVar36 = (double)CONCAT44((int)((u64)dVar36 >> 0x20), SUB84(dVar15, 0));
                dVar14 = in_xd4;

                fVar16 = (float)((u64)in_dr14 >> 0x20);

                dVar36 = (double)CONCAT44((int)((u64)dVar36 >> 0x20), SUB84(dVar36, 0) + SUB84(in_dr14, 0));
                dVar15 = (double)CONCAT44(fVar18 - SUB84(dVar30, 0), SUB84(dVar15, 0) + fVar16);

                fVar18 = (float)((u64)dVar33 >> 0x20);
                dVar38 = dVar33;

                dVar38 = (double)CONCAT44(fVar18, in_fr13);

                dVar38 = (double)CONCAT44((float)((u64)dVar38 >> 0x20) - SUB84(dVar23, 0), SUB84(dVar38, 0));

                dVar38 = (double)CONCAT44((int)((u64)dVar38 >> 0x20), SUB84(dVar33, 0));

                dVar38 = (double)CONCAT44((int)((u64)dVar38 >> 0x20), SUB84(dVar38, 0) + SUB84(in_dr14, 0));
                dVar27 = (double)CONCAT44(fVar18 - SUB84(dVar30, 0), SUB84(dVar33, 0) + fVar16);
            }

            dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *puVar13);
            pdVar8 = (double *)(puVar13 + 2);
            dVar30 = (double)CONCAT44(*(u32 *)0x8c4aa4dc, puVar13[1]);
            dVar32 = (double)CONCAT44(*(u32 *)0x8c4aa4e0, SUB84(dVar32, 0));

            fVar24 = (float)((u64)dVar30 >> 0x20);
            fVar18 = SUB84(dVar23, 0);
            fVar19 = (float)((u64)dVar32 >> 0x20);
            fVar16 = SUB84(dVar30, 0);

            dVar33 =
                (double)CONCAT44((float)((u64)dVar15 >> 0x20) * fVar24 + fVar18, SUB84(dVar15, 0) * fVar19 + fVar16);
            dVar36 =
                (double)CONCAT44((float)((u64)dVar36 >> 0x20) * fVar24 + fVar18, SUB84(dVar36, 0) * fVar19 + fVar16);
            dVar15 =
                (double)CONCAT44((float)((u64)dVar27 >> 0x20) * fVar24 + fVar18, SUB84(dVar27, 0) * fVar19 + fVar16);
            dVar27 =
                (double)CONCAT44((float)((u64)dVar38 >> 0x20) * fVar24 + fVar18, SUB84(dVar38, 0) * fVar19 + fVar16);

            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)0x8c4aa4c4);
            dVar30 = (double)CONCAT44(fVar24, *(u32 *)((int)0x8c4aa4c4 + 4));
            dVar32 = (double)CONCAT44(fVar19, *(u32 *)(0x8c4aa4c4 + 1));
            dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)((int)0x8c4aa4c4 + 0xc));

            fVar18 = SUB84(dVar33, 0);
            fVar16 = SUB84(dVar23, 0);

            bVar43 = fVar16 < fVar18;

            fVar24 = SUB84(dVar30, 0);

            bVar44 = fVar18 < fVar24;

            fVar19 = (float)((u64)dVar33 >> 0x20);
            fVar35 = SUB84(dVar32, 0);

            bVar45 = fVar35 < fVar19;

            fVar39 = SUB84(in_dr14, 0);

            bVar46 = fVar19 < fVar39;

            fVar25 = SUB84(dVar36, 0);

            bVar47 = fVar16 < fVar25;

            bVar48 = fVar25 < fVar24;

            fVar28 = (float)((u64)dVar36 >> 0x20);

            bVar49 = fVar35 < fVar28;

            bVar50 = fVar28 < fVar39;

            fVar31 = SUB84(dVar15, 0);

            bVar51 = fVar16 < fVar31;

            bVar52 = fVar31 < fVar24;

            fVar34 = (float)((u64)dVar15 >> 0x20);

            bVar53 = fVar35 < fVar34;

            bVar54 = fVar34 < fVar39;

            fVar37 = SUB84(dVar27, 0);

            bVar55 = fVar16 < fVar37;

            bVar56 = fVar37 < fVar24;

            fVar24 = (float)((u64)dVar27 >> 0x20);

            bVar57 = fVar35 < fVar24;

            bVar58 = fVar24 < fVar39;

            dVar32 = (double)CONCAT44(*(u32 *)pdVar8, fVar16);

            if ((0xffffffff & ((((0x0 << 1 | (u32)bVar43) << 1 | (u32)bVar44) << 1 | (u32)bVar45) << 1 | (u32)bVar46) &
                 ((((0x0 << 1 | (u32)bVar47) << 1 | (u32)bVar48) << 1 | (u32)bVar49) << 1 | (u32)bVar50) &
                 ((((0x0 << 1 | (u32)bVar51) << 1 | (u32)bVar52) << 1 | (u32)bVar53) << 1 | (u32)bVar54) &
                 ((((0x0 << 1 | (u32)bVar55) << 1 | (u32)bVar56) << 1 | (u32)bVar57) << 1 | (u32)bVar58)) != 0) {
                return 0;
            }
            uVar17 = (u32)((u64)dVar32 >> 0x20);

            uVar20 = *(u32 *)((int)pdVar10 + 0x1c);
            dVar32 = (double)CONCAT44(uVar17, uVar20);
            uVar29 = *(u32 *)(pdVar10 + 3);
            *(u32 *)(in_r2 + 0x18) = 0x3f800000;
            *(u32 *)(in_r2 + 0x14) = uVar29;
            *(u32 *)(in_r2 + 0x10) = uVar20;
            *(u32 *)(in_r2 + 0xc) = uVar17;
            *(float *)(in_r2 + 8) = fVar18;
            pdVar8 = (double *)(in_r2 + 4);
            *(float *)pdVar8 = fVar19;

            *(u32 *)((int)pdVar8 + -4) = uVar21;

            uVar20 = *(u32 *)((int)pdVar10 + 0x14);
            dVar32 = (double)CONCAT44(uVar17, uVar20);
            uVar29 = *(u32 *)(pdVar10 + 2);
            *(u32 *)((int)pdVar8 + 0x34) = 0x3f800000;
            *(u32 *)(pdVar8 + 6) = uVar29;
            *(u32 *)((int)pdVar8 + 0x2c) = uVar20;
            *(u32 *)(pdVar8 + 5) = uVar17;
            *(float *)((int)pdVar8 + 0x24) = fVar25;
            pdVar8 = pdVar8 + 4;
            *(float *)pdVar8 = fVar28;

            *(u32 *)((int)pdVar8 + -4) = uVar21;

            uVar20 = *(u32 *)((int)pdVar10 + 0xc);
            dVar32 = (double)CONCAT44(uVar17, uVar20);
            uVar29 = *(u32 *)(pdVar10 + 1);
            *(u32 *)((int)pdVar8 + 0x34) = 0x3f800000;
            *(u32 *)(pdVar8 + 6) = uVar29;
            *(u32 *)((int)pdVar8 + 0x2c) = uVar20;
            *(u32 *)(pdVar8 + 5) = uVar17;
            *(float *)((int)pdVar8 + 0x24) = fVar31;
            pdVar8 = pdVar8 + 4;
            *(float *)pdVar8 = fVar34;

            *(u32 *)((int)pdVar8 + -4) = uVar21;

            uVar21 = *(u32 *)((int)pdVar10 + 4);
            uVar20 = *(u32 *)pdVar10;
            *(u32 *)((int)pdVar8 + 0x34) = 0x3f800000;
            *(u32 *)(pdVar8 + 6) = uVar20;
            *(u32 *)((int)pdVar8 + 0x2c) = uVar21;
            *(u32 *)(pdVar8 + 5) = uVar17;
            *(float *)((int)pdVar8 + 0x24) = fVar37;
            pdVar8 = pdVar8 + 4;
            *(float *)pdVar8 = fVar24;

            *(u32 *)((int)pdVar8 + -4) = uVar5;
            return 1;
        }
    }
    return 0;
}

/*
 * ninja_calls_fill_loop_2578ac  0x8c2578ac
 * area name: in the ninja library code range; behaviour name: its callees mostly do: fill_loop
 */
u32 ninja_calls_fill_loop_2578ac(double *a0, int a1, u32 a2) {
    short sVar1;
    short sVar2;
    short sVar3;
    u32 uVar4;
    int iVar5;
    u32 uVar6;
    int in_r2;
    u8 bVar7;
    short *psVar8;
    double *pdVar9;
    u32 unaff_r8;
    double *pdVar10;
    u32 unaff_r9;
    u64 *puVar11;
    u8 *puVar12;
    u32 in_fr1;
    float fVar13;
    double dVar15;
    float fVar18;
    float fVar19;
    double dVar16;
    float fVar20;
    double dVar17;
    float fVar21;
    u32 uVar22;
    u32 uVar23;
    double dVar24;
    float fVar27;
    double dVar25;
    double dVar26;
    u32 in_fr5;
    float fVar28;
    float fVar29;
    double dVar30;
    float fVar31;
    u32 uVar32;
    u32 uVar33;
    double in_dr6;
    float fVar34;
    double dVar35;
    float fVar36;
    float fVar37;
    double in_dr10;
    u32 uVar38;
    float fVar39;
    float fVar40;
    u64 in_dr12;
    double dVar41;
    u64 in_dr14;
    double dVar42;
    u32 uVar43;
    double in_xd0;
    double in_xd2;
    double dVar45;
    double in_xd4;
    double dVar46;
    double in_xd6;
    double in_xd8;
    double dVar47;
    double in_xd10;
    float fVar48;
    double in_xd12;
    double dVar49;
    double in_xd14;
    double dVar50;
    float fVar51;
    bool bVar52;
    bool bVar53;
    bool bVar54;
    bool bVar55;
    bool bVar56;
    bool bVar57;
    bool bVar58;
    bool bVar59;
    bool bVar60;
    bool bVar61;
    bool bVar62;
    bool bVar63;
    bool bVar64;
    bool bVar65;
    bool bVar66;
    bool bVar67;
    u32 in_PR;
    u8 auStack_20[16];
    u64 uStack_10;
    u64 uStack_8;
    float fVar14;

    uVar4 = 0xf0000000;
    uVar6 = 0xe0000000;

    uStack_8 = (double)CONCAT44((int)in_dr14, (u32)uStack_8);
    uStack_8._0_4_ = (int)((u64)in_dr14 >> 0x20);
    puVar11 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12, (int)((u64)in_dr12 >> 0x20));

    *(u32 *)((int)puVar11 + -4) = unaff_r9;
    *(u32 *)((int)puVar11 + -8) = unaff_r8;
    psVar8 = (short *)(a1 * 0x14 + *(int *)((int)a0 + 0x1c));

    dVar45 = (double)CONCAT44(g_8c257990, in_fr5);

    dVar15 = (double)CONCAT44((float)(int)psVar8[4], in_fr1);

    fVar19 = (float)((u64)dVar45 >> 0x20);

    fVar18 = (float)((u64)dVar15 >> 0x20) * fVar19;

    dVar15 = (double)CONCAT44(fVar18, (float)(int)psVar8[5] * fVar19);

    fVar18 = (float)(int)psVar8[6] * fVar19;

    dVar24 = (double)CONCAT44(fVar18, (float)(int)psVar8[7] * fVar19);

    dVar16 = dVar15;
    dVar50 = dVar24;
    dVar30 = dVar45;
    if (((a2 & 4) != 0) && (dVar16 = dVar24, dVar50 = dVar15, dVar30 = dVar15, 1)) {
        uVar23 = (u32)((u64)dVar15 >> 0x20);
        dVar16 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar15, 0));
        dVar50 = (double)CONCAT44(uVar23, SUB84(dVar24, 0));
        dVar30 = (double)CONCAT44(uVar23, SUB84(dVar45, 0));
    }
    dVar24 = dVar30;
    dVar45 = in_xd0;
    dVar15 = in_xd2;
    if (((a2 & 8) != 0) && (dVar24 = in_xd0, dVar45 = in_xd2, dVar15 = in_xd0, 1)) {
        uVar23 = SUB84(dVar16, 0);
        dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar50, 0));
        dVar50 = (double)CONCAT44((int)((u64)dVar50 >> 0x20), uVar23);
        dVar24 = (double)CONCAT44(uVar23, SUB84(dVar30, 0));
        dVar45 = in_xd0;
        dVar15 = in_xd2;
    }
    sVar1 = *psVar8;
    sVar2 = psVar8[1];
    sVar3 = psVar8[3];
    iVar5 = -(int)psVar8[2];
    uVar23 = (u32)((u64)dVar16 >> 0x20);

    pdVar10 = (double *)((int)puVar11 + -0xc);
    *(u32 *)pdVar10 = uVar23;

    pdVar10 = (double *)((int)pdVar10 + -4);
    *(int *)pdVar10 = SUB84(dVar16, 0);

    pdVar10 = (double *)((int)pdVar10 + -4);
    *(u32 *)pdVar10 = uVar23;

    uVar23 = (u32)((u64)dVar50 >> 0x20);

    *(int *)((int)pdVar10 + -4) = SUB84(dVar50, 0);
    *(u32 *)(pdVar10 + -1) = uVar23;
    pdVar10 = (double *)((int)pdVar10 + -0xc);
    *(int *)pdVar10 = SUB84(dVar16, 0);

    fVar19 = (float)iVar5;

    *(u32 *)((int)pdVar10 + -4) = uVar23;
    pdVar10 = pdVar10 + -1;
    *(int *)pdVar10 = SUB84(dVar50, 0);

    fVar18 = (float)-(int)sVar3;

    dVar24 = (double)CONCAT44(*(u32 *)((int)a0 + 0xc), SUB84(dVar24, 0));

    fVar27 = (float)(sVar1 + iVar5);

    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)(a0 + 2));

    fVar21 = (float)((int)sVar2 + -(int)sVar3);
    fVar28 = (float)((u64)dVar24 >> 0x20);
    fVar37 = SUB84(dVar24, 0);

    dVar16 = (double)CONCAT44(fVar19 * fVar28, fVar18 * fVar37);
    dVar24 = (double)CONCAT44(fVar27 * fVar28, fVar21 * fVar37);

    uVar23 = (u32)((u64)dVar16 >> 0x20);
    fVar19 = SUB84(dVar24, 0);
    uVar33 = (u32)((u64)dVar24 >> 0x20);
    dVar50 = in_xd14;
    if ((a2 & 1) == 0) {
        dVar30 = dVar16;
        dVar42 = dVar24;
        dVar41 = dVar24;
        dVar46 = dVar15;
        dVar47 = dVar45;
        dVar49 = dVar15;

        dVar30 = (double)CONCAT44(uVar23, fVar19);
        dVar42 = (double)CONCAT44(uVar33, SUB84(dVar16, 0));
        dVar46 = in_xd4;
        dVar47 = in_xd8;
        dVar49 = in_xd12;

    } else {

        fVar18 = ((float)(*(u32 *)((int)a0 + 0x14) & 0xffff) * 6.2831855) / 65536.0;
        fVar27 = (float)sin(fVar18);
        fVar18 = (float)cos(fVar18);
        in_dr10 = (double)CONCAT44((float)fVar27, (float)fVar18);

        dVar50 = dVar24;
        dVar47 = dVar24;
        dVar30 = dVar16;

        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(dVar16, 0));
        dVar16 = (double)CONCAT44(uVar23, uVar23);
        dVar50 = (double)CONCAT44(uVar33, uVar33);
        dVar47 = in_xd8;
        dVar30 = dVar45;
        dVar45 = in_xd6;

        in_xd6 = dVar45;
        dVar45 = dVar30;
        fVar18 = SUB84(in_dr10, 0);
        fVar27 = (float)((u64)in_dr10 >> 0x20);

        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * fVar18, SUB84(dVar16, 0) * fVar27);
        dVar35 = (double)CONCAT44((float)((u64)dVar50 >> 0x20) * fVar18, SUB84(dVar50, 0) * fVar27);

        dVar30 = in_xd6;
        dVar50 = dVar15;

        dVar30 = (double)CONCAT44(SUB84(in_dr6, 0), fVar19);
        dVar50 = in_xd14;

        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0) * fVar27);
        dVar24 = (double)CONCAT44(uVar33, fVar19 * fVar27);
        dVar42 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar18, SUB84(dVar30, 0) * fVar18);

        fVar19 = (float)((u64)dVar16 >> 0x20);
        dVar30 = dVar16;

        dVar30 = (double)CONCAT44(fVar19, fVar37);

        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) - SUB84(dVar24, 0), SUB84(dVar30, 0));

        dVar46 = dVar45;

        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar16, 0));
        dVar46 = in_xd4;

        fVar18 = (float)((u64)dVar42 >> 0x20);

        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) + SUB84(dVar42, 0));
        dVar16 = (double)CONCAT44(fVar19 - SUB84(in_dr6, 0), SUB84(dVar16, 0) + fVar18);

        fVar19 = (float)((u64)dVar35 >> 0x20);
        dVar41 = dVar35;

        dVar41 = (double)CONCAT44(fVar19, (int)in_dr12);

        dVar41 = (double)CONCAT44((float)((u64)dVar41 >> 0x20) - SUB84(dVar24, 0), SUB84(dVar41, 0));

        dVar49 = dVar47;

        dVar41 = (double)CONCAT44((int)((u64)dVar41 >> 0x20), SUB84(dVar35, 0));
        dVar49 = in_xd12;

        dVar41 = (double)CONCAT44((int)((u64)dVar41 >> 0x20), SUB84(dVar41, 0) + SUB84(dVar42, 0));
        dVar42 = (double)CONCAT44(fVar19 - SUB84(in_dr6, 0), SUB84(dVar35, 0) + fVar18);
    }

    dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)a0);
    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)((int)a0 + 4));
    pdVar9 = a0 + 1;

    fVar19 = SUB84(in_dr6, 0);

    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + SUB84(dVar24, 0), SUB84(dVar16, 0) + fVar19);

    dVar24 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar24, 0));

    fVar18 = SUB84(dVar24, 0);

    dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + fVar18, SUB84(dVar30, 0) + fVar19);

    fVar27 = (float)((u64)dVar24 >> 0x20);
    dVar35 = dVar24;

    dVar35 = (double)CONCAT44(fVar27, fVar19);

    dVar42 = (double)CONCAT44((float)((u64)dVar42 >> 0x20) + fVar18, SUB84(dVar42, 0) + SUB84(dVar35, 0));

    dVar17 = dVar24;

    dVar17 = (double)CONCAT44(fVar27, SUB84(in_dr10, 0));

    dVar41 = (double)CONCAT44((float)((u64)dVar41 >> 0x20) + fVar18, SUB84(dVar41, 0) + SUB84(dVar35, 0));

    dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)0x8c4aa4d8);
    dVar24 = (double)CONCAT44(fVar27, *(u32 *)0x8c4aa4d4);

    fVar21 = SUB84(dVar45, 0);
    fVar37 = (float)((u64)dVar45 >> 0x20);
    fVar28 = (float)((u64)dVar15 >> 0x20);
    fVar29 = SUB84(dVar46, 0);
    fVar31 = (float)((u64)dVar46 >> 0x20);
    fVar34 = (float)((u64)in_xd6 >> 0x20);
    fVar36 = SUB84(dVar47, 0);
    fVar40 = (float)((u64)dVar47 >> 0x20);
    fVar48 = (float)((u64)in_xd10 >> 0x20);
    fVar19 = SUB84(dVar49, 0);
    fVar18 = (float)((u64)dVar49 >> 0x20);
    fVar51 = (float)((u64)dVar50 >> 0x20);

    fVar14 = SUB84(dVar16, 0);
    fVar20 = (float)((u64)dVar16 >> 0x20);
    fVar13 = fVar19 * fVar27;
    fVar39 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar14 + fVar34 * fVar20 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar13 = fVar21 * fVar14 + fVar29 * fVar20 + fVar36 * 1.0 + fVar13;
    fVar13 = fVar37 * fVar14 + fVar31 * fVar20 + fVar40 * 1.0 + fVar39;

    dVar25 = (double)CONCAT44(fVar27, 1.0 / fVar27);
    bVar52 = SUB84(dVar17, 0) < fVar27;
    bVar53 = fVar27 < SUB84(dVar24, 0);

    dVar26 = dVar15;

    dVar26 = (double)CONCAT44(SUB84(dVar25, 0), SUB84(dVar25, 0));

    fVar27 = (float)((u64)dVar35 >> 0x20);

    fVar14 = SUB84(dVar30, 0);
    fVar20 = (float)((u64)dVar30 >> 0x20);
    fVar13 = fVar19 * fVar27;
    fVar39 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar14 + fVar34 * fVar20 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar28 = fVar21 * fVar14 + fVar29 * fVar20 + fVar36 * 1.0 + fVar13;
    fVar28 = fVar37 * fVar14 + fVar31 * fVar20 + fVar40 * 1.0 + fVar39;

    dVar35 = (double)CONCAT44(fVar27, 1.0 / fVar27);
    bVar54 = SUB84(dVar17, 0) < fVar27;

    bVar55 = fVar27 < SUB84(dVar24, 0);

    dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), *(u32 *)0x8c4aa4d8);
    dVar35 = (double)CONCAT44(SUB84(dVar35, 0), *(u32 *)0x8c4aa4d4);
    dVar25 = in_xd6;

    fVar27 = (float)((u64)dVar17 >> 0x20);
    fVar28 = (float)((u64)dVar15 >> 0x20);
    fVar34 = (float)((u64)dVar25 >> 0x20);

    fVar14 = SUB84(dVar42, 0);
    fVar20 = (float)((u64)dVar42 >> 0x20);
    fVar13 = fVar19 * fVar27;
    fVar39 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar14 + fVar34 * fVar20 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar13 = fVar21 * fVar14 + fVar29 * fVar20 + fVar36 * 1.0 + fVar13;
    fVar13 = fVar37 * fVar14 + fVar31 * fVar20 + fVar40 * 1.0 + fVar39;

    fVar13 = SUB84(dVar26, 0);

    dVar15 = (double)CONCAT44(fVar27, 1.0 / fVar27);
    bVar56 = fVar13 < fVar27;

    bVar57 = fVar27 < SUB84(dVar35, 0);

    in_xd10 = (double)CONCAT44(SUB84(dVar15, 0), SUB84(dVar15, 0));

    fVar27 = (float)((u64)dVar24 >> 0x20);

    fVar39 = SUB84(dVar41, 0);
    fVar14 = (float)((u64)dVar41 >> 0x20);
    fVar19 = fVar19 * fVar27;
    fVar18 = fVar18 * fVar27;
    fVar27 = fVar28 * fVar39 + fVar34 * fVar14 + fVar48 * 1.0 + fVar51 * fVar27;
    fVar19 = fVar21 * fVar39 + fVar29 * fVar14 + fVar36 * 1.0 + fVar19;
    fVar19 = fVar37 * fVar39 + fVar31 * fVar14 + fVar40 * 1.0 + fVar18;

    dVar15 = (double)CONCAT44(fVar27, 1.0 / fVar27);
    bVar58 = fVar13 < fVar27;

    bVar59 = fVar27 < SUB84(dVar35, 0);

    bVar7 = ((bVar53 << 1 | bVar55) << 1 | bVar57) << 1 | bVar59;
    dVar24 = dVar50;

    dVar24 = (double)CONCAT44(SUB84(dVar15, 0), SUB84(dVar15, 0));

    if (((u8)(((bVar52 << 1 | bVar54) << 1 | bVar56) << 1 | bVar58) == 0xf) || (bVar7 == 0xf)) {
        uVar6 = 0;
    } else {

        fVar13 = g_8c4aa4a8;
        dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), fVar13);
        dVar35 = (double)CONCAT44((int)((u64)dVar35 >> 0x20), fVar13);
        in_xd10 = (double)CONCAT44((int)((u64)in_xd10 >> 0x20), g_8c4aa4dc);
        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)0x8c4aa4e0);

        dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), fVar13 * SUB84(in_xd10, 0));
        dVar35 = (double)CONCAT44((int)((u64)dVar35 >> 0x20), SUB84(dVar35, 0) * SUB84(dVar24, 0));

        in_xd10 = (double)CONCAT44((int)((u64)in_xd10 >> 0x20), 0x8c4aa4a8 [3]);
        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), 0x8c4aa4a8 [4]);

        fVar18 = (float)((u64)dVar26 >> 0x20);
        fVar19 = SUB84(dVar26, 0);
        fVar27 = SUB84(dVar35, 0);
        fVar21 = (float)((u64)dVar35 >> 0x20);
        fVar37 = SUB84(in_xd10, 0);
        fVar29 = SUB84(dVar24, 0);
        fVar28 = (float)((u64)in_xd10 >> 0x20);
        fVar31 = (float)((u64)dVar24 >> 0x20);

        dVar17 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * fVar18 * fVar19 + fVar37,
                                  SUB84(dVar16, 0) * fVar18 * fVar27 + fVar29);
        dVar16 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar21 * fVar19 + fVar37,
                                  SUB84(dVar30, 0) * fVar21 * fVar27 + fVar29);
        dVar15 = (double)CONCAT44((float)((u64)dVar42 >> 0x20) * fVar28 * fVar19 + fVar37,
                                  SUB84(dVar42, 0) * fVar28 * fVar27 + fVar29);
        dVar30 = (double)CONCAT44((float)((u64)dVar41 >> 0x20) * fVar31 * fVar19 + fVar37,
                                  SUB84(dVar41, 0) * fVar31 * fVar27 + fVar29);

        dVar24 = (double)CONCAT44(fVar31, *(u32 *)0x8c4aa4c4);
        dVar35 = (double)CONCAT44(fVar21, *(u32 *)((int)0x8c4aa4c4 + 4));
        in_xd10 = (double)CONCAT44(fVar28, *(u32 *)(0x8c4aa4c4 + 1));
        dVar26 = (double)CONCAT44(fVar18, *(u32 *)((int)0x8c4aa4c4 + 0xc));

        fVar19 = SUB84(dVar17, 0);
        fVar18 = SUB84(dVar26, 0);

        bVar52 = fVar18 < fVar19;

        fVar27 = SUB84(dVar35, 0);

        bVar53 = fVar19 < fVar27;

        fVar21 = (float)((u64)dVar17 >> 0x20);
        fVar37 = SUB84(in_xd10, 0);

        bVar54 = fVar37 < fVar21;

        fVar28 = SUB84(dVar24, 0);

        bVar55 = fVar21 < fVar28;

        fVar29 = SUB84(dVar16, 0);

        bVar56 = fVar18 < fVar29;

        bVar57 = fVar29 < fVar27;

        fVar31 = (float)((u64)dVar16 >> 0x20);

        bVar58 = fVar37 < fVar31;

        bVar59 = fVar31 < fVar28;

        fVar34 = SUB84(dVar15, 0);

        bVar60 = fVar18 < fVar34;

        bVar61 = fVar34 < fVar27;

        fVar36 = (float)((u64)dVar15 >> 0x20);

        bVar62 = fVar37 < fVar36;

        bVar63 = fVar36 < fVar28;

        fVar40 = SUB84(dVar30, 0);

        bVar64 = fVar18 < fVar40;

        bVar65 = fVar40 < fVar27;

        fVar18 = (float)((u64)dVar30 >> 0x20);

        bVar66 = fVar37 < fVar18;

        bVar67 = fVar18 < fVar28;

        if ((0xffffffff & ((((0x0 << 1 | (u32)bVar52) << 1 | (u32)bVar53) << 1 | (u32)bVar54) << 1 | (u32)bVar55) &
             ((((0x0 << 1 | (u32)bVar56) << 1 | (u32)bVar57) << 1 | (u32)bVar58) << 1 | (u32)bVar59) &
             ((((0x0 << 1 | (u32)bVar60) << 1 | (u32)bVar61) << 1 | (u32)bVar62) << 1 | (u32)bVar63) &
             ((((0x0 << 1 | (u32)bVar64) << 1 | (u32)bVar65) << 1 | (u32)bVar66) << 1 | (u32)bVar67)) == 0) {
            uVar23 = (u32)((u64)dVar26 >> 0x20);
            uVar33 = (u32)((u64)dVar35 >> 0x20);
            uVar38 = (u32)((u64)in_xd10 >> 0x20);
            uVar43 = (u32)((u64)dVar24 >> 0x20);
            if (bVar7 == 0) {

                uVar22 = *(u32 *)((int)pdVar10 + 0x1c);
                uVar32 = *(u32 *)(pdVar10 + 3);
                dVar35 = (double)CONCAT44(uVar33, uVar32);
                *(u32 *)(in_r2 + 0x18) = 0x3f800000;
                *(u32 *)(in_r2 + 0x14) = uVar32;
                *(u32 *)(in_r2 + 0x10) = uVar22;
                *(u32 *)(in_r2 + 0xc) = uVar23;
                *(float *)(in_r2 + 8) = fVar19;
                pdVar9 = (double *)(in_r2 + 4);
                *(float *)pdVar9 = fVar21;

                *(u32 *)((int)pdVar9 + -4) = uVar6;

                uVar23 = *(u32 *)((int)pdVar10 + 0x14);
                uVar33 = *(u32 *)(pdVar10 + 2);
                *(u32 *)((int)pdVar9 + 0x34) = 0x3f800000;
                *(u32 *)(pdVar9 + 6) = uVar33;
                *(u32 *)((int)pdVar9 + 0x2c) = uVar23;
                *(int *)(pdVar9 + 5) = (int)((u64)dVar35 >> 0x20);
                *(float *)((int)pdVar9 + 0x24) = fVar29;
                pdVar9 = pdVar9 + 4;
                *(float *)pdVar9 = fVar31;

                *(u32 *)((int)pdVar9 + -4) = uVar6;

                uVar23 = *(u32 *)((int)pdVar10 + 0xc);
                uVar33 = *(u32 *)(pdVar10 + 1);
                *(u32 *)((int)pdVar9 + 0x34) = 0x3f800000;
                *(u32 *)(pdVar9 + 6) = uVar33;
                *(u32 *)((int)pdVar9 + 0x2c) = uVar23;
                *(u32 *)(pdVar9 + 5) = uVar38;
                *(float *)((int)pdVar9 + 0x24) = fVar34;
                pdVar9 = pdVar9 + 4;
                *(float *)pdVar9 = fVar36;

                *(u32 *)((int)pdVar9 + -4) = uVar6;

                uVar6 = *(u32 *)((int)pdVar10 + 4);
                uVar23 = *(u32 *)pdVar10;
                *(u32 *)((int)pdVar9 + 0x34) = 0x3f800000;
                *(u32 *)(pdVar9 + 6) = uVar23;
                *(u32 *)((int)pdVar9 + 0x2c) = uVar6;
                *(u32 *)(pdVar9 + 5) = uVar43;
                *(float *)((int)pdVar9 + 0x24) = fVar40;
                pdVar9 = pdVar9 + 4;
                *(float *)pdVar9 = fVar18;

                *(u32 *)((int)pdVar9 + -4) = uVar4;
                uVar6 = 1;
            } else {

                uVar6 = *(u32 *)((int)pdVar10 + 4);
                *(u32 *)((int)puVar11 + -0x34) = *(u32 *)pdVar10;
                *(u32 *)((int)puVar11 + -0x38) = uVar6;
                *(u32 *)((int)puVar11 + -0x3c) = uVar43;
                *(float *)((int)puVar11 + -0x40) = fVar40;
                *(float *)((int)puVar11 + -0x44) = fVar18;
                uVar6 = *(u32 *)((int)pdVar10 + 0xc);
                *(u32 *)((int)puVar11 + -0x54) = *(u32 *)(pdVar10 + 1);
                *(u32 *)((int)puVar11 + -0x58) = uVar6;
                *(u32 *)((int)puVar11 + -0x5c) = uVar38;
                *(float *)((int)puVar11 + -0x60) = fVar34;
                *(float *)((int)puVar11 + -100) = fVar36;
                uVar6 = *(u32 *)((int)pdVar10 + 0x14);
                *(u32 *)((int)puVar11 + -0x74) = *(u32 *)(pdVar10 + 2);
                *(u32 *)((int)puVar11 + -0x78) = uVar6;
                *(u32 *)((int)puVar11 + -0x7c) = uVar33;
                *(float *)((int)puVar11 + -0x80) = fVar29;
                *(float *)((int)puVar11 + -0x84) = fVar31;
                uVar6 = *(u32 *)((int)pdVar10 + 0x1c);
                *(u32 *)((int)puVar11 + -0x94) = *(u32 *)(pdVar10 + 3);
                *(u32 *)((int)puVar11 + -0x98) = uVar6;
                *(u32 *)((int)puVar11 + -0x9c) = uVar23;
                *(float *)((int)puVar11 + -0xa0) = fVar19;
                puVar12 = (u8 *)((int)puVar11 + -0xa4);
                *(float *)((int)puVar11 + -0xa4) = fVar21;

                *(u32 *)(puVar12 + -8) = in_PR;
                ninja_fill_loop_257be8(bVar7, puVar12 + -4);
                uVar6 = 1;
            }
        } else {
            uVar6 = 0;
        }
    }
    return uVar6;
}

/*
 * ninja_test_257bc0  0x8c257bc0
 * area name: in the ninja library code range; behaviour name: returns the result of a comparison
 */
u32 ninja_test_257bc0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    code *in_r1;
    u32 in_r3;

    (*in_r1)(in_r3, a1, a2, a3);
    return 1;
}

/*
 * ninja_fill_loop_257be8  0x8c257be8
 * area name: in the ninja library code range; behaviour name: a loop that writes memory
 * called by: ninja_calls_fill_loop_2578ac
 */
int ninja_fill_loop_257be8(u32 a0, int a1) {
    int iVar1;
    double *pdVar2;
    int in_r2;
    u32 uVar3;
    int iVar4;
    u64 *puVar5;
    double *pdVar6;
    double *pdVar7;
    u64 *puVar8;
    int iVar9;
    u8 bVar10;
    u32 uVar12;
    double *pdVar13;
    u64 *puVar14;
    u64 *unaff_r14;
    u64 *puVar15;
    double dVar16;
    float in_fr3;
    double dVar17;
    double dVar19;
    double in_dr6;
    double dVar20;
    float fVar22;
    float fVar24;
    float fVar25;
    u32 uVar26;
    float fVar28;
    double dVar27;
    u32 uVar29;
    double dVar30;
    u32 uVar32;
    u64 uVar31;
    double in_xd4;
    double in_xd10;
    double dVar33;
    double dStack_80;
    int iStack_78;
    u8 auStack_74[8];
    u64 auStack_68[7];
    double dStack_30;
    u8 auStack_28[8];
    u64 uStack_20;
    u8 bVar11;
    float fVar18;
    float fVar21;
    double dVar23;

    puVar8 = auStack_68;

    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), g_8c4aa4a8);
    dVar30 = (double)CONCAT44(g_8c4aa4dc, g_8c4aa4e0);
    dVar19 = (double)CONCAT44(g_8c4aa4b4, g_8c4aa4b8);
    fVar28 = g_8c4aa4d4;

    dStack_80 = (double)CONCAT44(fVar28, 1.0 / fVar28);

    fVar28 = SUB84(dVar19, 0);
    fVar25 = (float)((u64)dVar19 >> 0x20);

    stack0xffffff90 = (double)CONCAT44(fVar28, auStack_74._4_4_);
    pdVar2 = (double *)auStack_74;

    fVar24 = (float)((u64)dVar30 >> 0x20) * SUB84(in_dr6, 0);
    fVar22 = SUB84(dVar30, 0) * SUB84(in_dr6, 0);
    dVar30 = (double)CONCAT44(1.0 / fVar24, 1.0 / fVar22);
    dVar23 = (double)CONCAT44(fVar24 * SUB84(dStack_80, 0), fVar22 * SUB84(dStack_80, 0));

    dVar16 = (double)CONCAT44(*(u32 *)(a1 + 100), *(u32 *)(a1 + 0x68));
    in_fr3 = *(float *)(a1 + 0x6c);
    iVar4 = a1 + 0x70;

    fVar24 = (float)((u64)dVar30 >> 0x20);
    fVar22 = SUB84(dVar30, 0);

    fVar18 = 1.0 / in_fr3;
    dVar17 = (double)CONCAT44(fVar18, in_fr3);
    dStack_30 = (double)CONCAT44(((float)((u64)dVar16 >> 0x20) - fVar25) * fVar24 * fVar18,
                                 (SUB84(dVar16, 0) - fVar28) * fVar22 * fVar18);

    uStack_20 = (double)CONCAT44(fVar18, (u32)uStack_20);
    pdVar6 = (double *)(auStack_28 + 4);
    auStack_28._4_4_ = (int)((u64)dStack_30 >> 0x20);
    dVar16 = (double)CONCAT44(*(u32 *)(iVar4 + -0x2c), *(u32 *)(iVar4 + -0x28));
    in_dr6 = (double)(u64) * (u32 *)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x20;

    fVar18 = SUB84(in_dr6, 0);

    fVar21 = 1.0 / fVar18;
    dVar20 = (double)CONCAT44(fVar21, fVar18);
    dVar16 = (double)CONCAT44(((float)((u64)dVar16 >> 0x20) - fVar25) * fVar24 * fVar21,
                              (SUB84(dVar16, 0) - fVar28) * fVar22 * fVar21);

    *(float *)((int)pdVar6 + -4) = fVar21;
    *(int *)(pdVar6 + -1) = SUB84(dVar16, 0);
    pdVar6 = (double *)((int)pdVar6 + -0xc);
    *(int *)pdVar6 = (int)((u64)dVar16 >> 0x20);
    dVar16 = (double)CONCAT44(*(u32 *)(iVar4 + -0x2c), *(u32 *)(iVar4 + -0x28));
    dVar17 = (double)(u64) * (u32 *)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x20;

    fVar18 = SUB84(dVar17, 0);

    fVar21 = 1.0 / fVar18;
    dVar17 = (double)CONCAT44(fVar21, fVar18);
    dVar16 = (double)CONCAT44(((float)((u64)dVar16 >> 0x20) - fVar25) * fVar24 * fVar21,
                              (SUB84(dVar16, 0) - fVar28) * fVar22 * fVar21);

    *(float *)((int)pdVar6 + -4) = fVar21;
    *(int *)(pdVar6 + -1) = SUB84(dVar16, 0);
    pdVar6 = (double *)((int)pdVar6 + -0xc);
    *(int *)pdVar6 = (int)((u64)dVar16 >> 0x20);
    dVar16 = (double)CONCAT44(*(u32 *)(iVar4 + -0x2c), *(u32 *)(iVar4 + -0x28));
    dVar20 = (double)(u64) * (u32 *)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x20;

    fVar18 = SUB84(dVar20, 0);

    fVar21 = 1.0 / fVar18;
    dVar20 = (double)CONCAT44(fVar21, fVar18);
    dVar30 = (double)CONCAT44(((float)((u64)dVar16 >> 0x20) - fVar25) * fVar24 * fVar21,
                              (SUB84(dVar16, 0) - fVar28) * fVar22 * fVar21);

    *(float *)((int)pdVar6 + -4) = fVar21;
    *(int *)(pdVar6 + -1) = SUB84(dVar30, 0);
    pdVar6 = (double *)((int)pdVar6 + -0xc);
    *(int *)pdVar6 = (int)((u64)dVar30 >> 0x20);

    puVar5 = (u64 *)(iVar4 + -0x10);
    iStack_78 = 2;
    uVar12 = a0 >> 1;
    pdVar13 = pdVar6;
    do {
        pdVar7 = pdVar13 + 3;
        puVar14 = puVar5 + 8;
        bVar10 = (&g_8c271df8)[uVar12];
        uVar3 = 0xe0000000;
        iVar1 = 0;
        iVar9 = 3;
        puVar15 = unaff_r14;
        do {
            bVar11 = (char)bVar10 >> 1;
            if ((bVar10 & 1) != 0) {

                dVar16 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar19, 0));
                pdVar2 = (double *)((int)pdVar2 + 4);
                dVar30 = (double)CONCAT44(*(u32 *)pdVar7, *(u32 *)((int)pdVar7 + 4));
                dVar17 = (double)CONCAT44(*(u32 *)(pdVar7 + 1), SUB84(dVar17, 0));
                dVar19 = (double)CONCAT44(*(u32 *)pdVar13, *(u32 *)((int)pdVar13 + 4));
                dVar20 = (double)CONCAT44(*(u32 *)(pdVar13 + 1), SUB84(dVar20, 0));
                pdVar13 = (double *)((int)pdVar13 + 0xc);

                fVar28 = (float)((u64)dVar17 >> 0x20);

                dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - fVar28, SUB84(dVar16, 0));

                uVar26 = (u32)((u64)dVar20 >> 0x20);
                dVar33 = dVar20;

                dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), uVar26);
                dVar33 = in_xd10;

                fVar25 = SUB84(dVar16, 0) - fVar28;
                dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) / fVar25, fVar25);

                dVar27 = in_xd4;
                in_xd10 = dVar19;

                dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), (int)((u64)dVar19 >> 0x20));
                dVar27 = (double)CONCAT44(SUB84(dVar19, 0), SUB84(dStack_80, 0));
                in_xd10 = dVar33;

                fVar25 = (float)((u64)dVar30 >> 0x20);

                fVar22 = (float)((u64)dVar16 >> 0x20);
                dVar19 = (double)CONCAT44(fVar22, ((SUB84(dVar16, 0) - fVar25) * fVar22 + fVar25) *
                                                      (float)((u64)dVar23 >> 0x20));
                dStack_80 = (double)CONCAT44(
                    (((float)((u64)dVar27 >> 0x20) - SUB84(dVar30, 0)) * fVar22 + SUB84(dVar30, 0)) * SUB84(dVar23, 0),
                    SUB84(dVar27, 0));

                dVar30 = (double)CONCAT44(*(u32 *)pdVar2, *(u32 *)((int)pdVar2 + 4));
                pdVar2 = pdVar2 + 1;

                pdVar2 = (double *)((int)pdVar2 + -0xc);

                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), SUB84(dVar19, 0) + (float)((u64)dVar30 >> 0x20));
                dStack_80 = (double)CONCAT44((float)((u64)dStack_80 >> 0x20) + SUB84(dVar30, 0), SUB84(dStack_80, 0));

                dVar17 = (double)CONCAT44(fVar28, *(u32 *)(puVar14 + 2));
                dVar20 = (double)CONCAT44(uVar26, *(u32 *)((int)puVar14 + 0x14));
                dVar30 = (double)CONCAT44(*(u32 *)(puVar5 + 2), *(u32 *)((int)puVar5 + 0x14));
                puVar5 = puVar5 + 3;

                puVar5 = puVar5 + -3;
                fVar28 = (float)((u64)dVar19 >> 0x20);

                dVar30 = (double)CONCAT44(((float)((u64)dVar30 >> 0x20) - SUB84(dVar17, 0)) * fVar28 + SUB84(dVar17, 0),
                                          (SUB84(dVar30, 0) - SUB84(dVar20, 0)) * fVar28 + SUB84(dVar20, 0));

                iVar1 = iVar1 + 1;
                uVar26 = SUB84(dVar19, 0);
                uVar32 = (u32)((u64)dVar30 >> 0x20);
                uVar29 = (u32)((u64)dStack_80 >> 0x20);
                pdVar13 = (double *)((int)pdVar13 + -0xc);
                if (iVar1 == 3) {
                    if ((char)bVar11 < '\0') {

                        *(int *)((int)puVar8 + 0x14) = SUB84(dVar30, 0);
                        *(u32 *)(puVar8 + 2) = uVar32;
                        *(int *)((int)puVar8 + 0xc) = SUB84(dStack_80, 0);
                        *(u32 *)(puVar8 + 1) = uVar29;
                        pdVar7 = (double *)((int)puVar8 + 4);
                        *(u32 *)pdVar7 = uVar26;

                        puVar8 = (u64 *)((int)pdVar7 + -4);
                        puVar15 = puVar8;
                        goto LAB_8c257d74;
                    }
                    uVar3 = 0xf0000000;
                }
                dVar19 = (double)CONCAT44(0x3f800000, uVar26);

                *(u32 *)(in_r2 + 0x18) = 0x3f800000;
                *(int *)(in_r2 + 0x14) = SUB84(dVar30, 0);
                *(u32 *)(in_r2 + 0x10) = uVar32;
                *(int *)(in_r2 + 0xc) = SUB84(dStack_80, 0);
                *(u32 *)(in_r2 + 8) = uVar29;
                pdVar7 = (double *)(in_r2 + 4);
                *(u32 *)pdVar7 = uVar26;

                *(u32 *)((int)pdVar7 + -4) = uVar3;
                in_r2 = (int)pdVar7 + 0x1c;
            }
        LAB_8c257d74:
            pdVar7 = pdVar13;
            uVar26 = SUB84(dVar19, 0);
            bVar10 = (char)bVar10 >> 2;
            puVar14 = puVar5;
            unaff_r14 = puVar15;
            if ((bVar11 & 1) != 0) {
                iVar1 = iVar1 + 1;
                if (iVar1 == 3) {
                    unaff_r14 = puVar5;
                    if ((char)bVar10 < '\0')
                        goto LAB_8c257db2;
                    uVar3 = 0xf0000000;
                }

                uVar26 = *(u32 *)((int)puVar5 + 4);
                dStack_80 = (double)CONCAT44(*(u32 *)(puVar5 + 1), SUB84(dStack_80, 0));
                dVar20 = (double)(u64) * (u32 *)((int)puVar5 + 0xc);
                uVar31 = CONCAT44(*(u32 *)(puVar5 + 2), *(u32 *)((int)puVar5 + 0x14));
                puVar5 = puVar5 + 3;

                dVar19 = (double)CONCAT44(0x3f800000, uVar26);

                *(u32 *)(in_r2 + 0x18) = 0x3f800000;
                *(int *)(in_r2 + 0x14) = (int)uVar31;
                *(int *)(in_r2 + 0x10) = (int)((u64)uVar31 >> 0x20);
                *(int *)(in_r2 + 0xc) = SUB84(dVar20, 0);
                *(int *)(in_r2 + 8) = (int)((u64)dStack_80 >> 0x20);
                pdVar13 = (double *)(in_r2 + 4);
                *(u32 *)pdVar13 = uVar26;

                *(u32 *)((int)pdVar13 + -4) = uVar3;
                in_r2 = (int)pdVar13 + 0x1c;
                puVar14 = puVar5 + -3;
                unaff_r14 = puVar15;
            }
        LAB_8c257db2:
            uVar26 = SUB84(dVar19, 0);
            pdVar13 = (double *)((int)pdVar7 + 0xc);
            iVar9 = iVar9 + -1;
            puVar5 = puVar14 + 4;
            puVar15 = unaff_r14;
        } while (iVar9 != 0);
        if ((char)bVar10 < '\0') {

            uVar26 = *(u32 *)((int)unaff_r14 + 4);
            dStack_80 = (double)CONCAT44(*(u32 *)(unaff_r14 + 1), *(u32 *)((int)unaff_r14 + 0xc));
            uVar31 = CONCAT44(*(u32 *)(unaff_r14 + 2), *(u32 *)((int)unaff_r14 + 0x14));
            unaff_r14 = unaff_r14 + 3;

            dVar19 = (double)CONCAT44(0x3f800000, uVar26);

            *(u32 *)(in_r2 + 0x18) = 0x3f800000;
            *(int *)(in_r2 + 0x14) = (int)uVar31;
            *(int *)(in_r2 + 0x10) = (int)((u64)uVar31 >> 0x20);
            *(int *)(in_r2 + 0xc) = SUB84(dStack_80, 0);
            *(int *)(in_r2 + 8) = (int)((u64)dStack_80 >> 0x20);
            pdVar13 = (double *)(in_r2 + 4);
            *(u32 *)pdVar13 = uVar26;

            *(u32 *)((int)pdVar13 + -4) = 0xf0000000;
            in_r2 = (int)pdVar13 + 0x1c;
        }
        iStack_78 = iStack_78 + -1;
        if (iStack_78 == 0) {
            return iVar1;
        }
        puVar5 = (u64 *)(iVar4 + 0x10);
        pdVar13 = (double *)((int)pdVar6 + 0xc);
        uVar12 = a0 & 7;
    } while (true);
}

/*
 * ninja_float_calc_257e10  0x8c257e10
 * area name: in the ninja library code range; behaviour name: floating-point arithmetic
 * called by: ninja_draw_25748c
 */
u32 ninja_float_calc_257e10(float *a0, int a1, u32 a2) {
    u32 *in_r2;
    short *psVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    u64 in_dr4;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    fVar11 = -(float)((u64)in_dr4 >> 0x20);
    fVar12 = 1.0;
    if (1.0 <= fVar11) {
        fVar12 = 1.0 / fVar11;
    }
    psVar1 = (short *)(a1 * 0x14 + (int)a0[7]);
    fVar11 = (float)(int)psVar1[4] * 0.00390625;
    fVar8 = (float)(int)psVar1[6] * 0.00390625;
    if ((a2 & 4) != 0) {
        fVar11 = (float)(int)psVar1[6] * 0.00390625;
        fVar8 = (float)(int)psVar1[4] * 0.00390625;
    }
    fVar2 = (float)(int)psVar1[5] * 0.00390625;
    fVar5 = (float)(int)psVar1[7] * 0.00390625;
    if ((a2 & 8) != 0) {
        fVar2 = (float)(int)psVar1[7] * 0.00390625;
        fVar5 = (float)(int)psVar1[5] * 0.00390625;
    }
    fVar4 = (float)-(int)psVar1[2] * a0[3];
    fVar9 = (float)((int)*psVar1 + -(int)psVar1[2]) * a0[3];
    fVar3 = (float)-(int)psVar1[3] * a0[4];
    fVar6 = (float)((int)psVar1[1] + -(int)psVar1[3]) * a0[4];
    if ((a2 & 1) == 0) {
        fVar4 = fVar4 + *a0;
        fVar3 = fVar3 + a0[1];
        fVar9 = fVar9 + *a0;
        fVar6 = fVar6 + a0[1];
        in_r2[6] = 0x3f800000;
        in_r2[5] = fVar2;
        in_r2[4] = fVar11;
        in_r2[3] = fVar12;
        in_r2[2] = fVar3;
        in_r2[1] = fVar4;
        *in_r2 = 0xe0000000;
        in_r2[0xe] = 0x3f800000;
        in_r2[0xd] = fVar5;
        in_r2[0xc] = fVar11;
        in_r2[0xb] = fVar12;
        in_r2[10] = fVar6;
        in_r2[9] = fVar4;
        in_r2[8] = 0xe0000000;
        in_r2[0x16] = 0x3f800000;
        in_r2[0x15] = fVar2;
        in_r2[0x14] = fVar8;
        in_r2[0x13] = fVar12;
        in_r2[0x12] = fVar3;
        in_r2[0x11] = fVar9;
        in_r2[0x10] = 0xe0000000;
        in_r2[0x1e] = 0x3f800000;
        in_r2[0x1d] = fVar5;
        in_r2[0x1c] = fVar8;
        in_r2[0x1b] = fVar12;
        in_r2[0x1a] = fVar6;
        in_r2[0x19] = fVar9;
        in_r2[0x18] = 0xf0000000;
    } else {
        fVar13 = ((float)((u32)a0[5] & 0xffff) * 6.2831855) / 65536.0;
        fVar14 = (float)sin(fVar13);
        fVar13 = (float)cos(fVar13);
        fVar14 = (float)fVar14;
        fVar13 = (float)fVar13;
        fVar10 = *a0;
        fVar7 = a0[1];
        in_r2[6] = 0x3f800000;
        in_r2[5] = fVar2;
        in_r2[4] = fVar11;
        in_r2[3] = fVar12;
        in_r2[2] = fVar4 * fVar14 + fVar3 * fVar13 + fVar7;
        in_r2[1] = (fVar4 * fVar13 - fVar3 * fVar14) + fVar10;
        *in_r2 = 0xe0000000;
        in_r2[0xe] = 0x3f800000;
        in_r2[0xd] = fVar5;
        in_r2[0xc] = fVar11;
        in_r2[0xb] = fVar12;
        in_r2[10] = fVar4 * fVar14 + fVar6 * fVar13 + fVar7;
        in_r2[9] = (fVar4 * fVar13 - fVar6 * fVar14) + fVar10;
        in_r2[8] = 0xe0000000;
        in_r2[0x16] = 0x3f800000;
        in_r2[0x15] = fVar2;
        in_r2[0x14] = fVar8;
        in_r2[0x13] = fVar12;
        in_r2[0x12] = fVar9 * fVar14 + fVar3 * fVar13 + fVar7;
        in_r2[0x11] = (fVar9 * fVar13 - fVar3 * fVar14) + fVar10;
        in_r2[0x10] = 0xe0000000;
        in_r2[0x1e] = 0x3f800000;
        in_r2[0x1d] = fVar5;
        in_r2[0x1c] = fVar8;
        in_r2[0x1b] = fVar12;
        in_r2[0x1a] = fVar9 * fVar14 + fVar6 * fVar13 + fVar7;
        in_r2[0x19] = (fVar9 * fVar13 - fVar6 * fVar14) + fVar10;
        in_r2[0x18] = 0xf0000000;
    }
    return 1;
}

/*
 * noop_fr4_test  0x8c258030
 * tests fr4 against 0 and returns the same value either way
 * called by: Vec3_length_sq, alt_entry_233d20, alt_entry_23c2a6, gfxlib_uses_noop_fr4_test_2336e8,
 * gfxlib_uses_noop_fr4_test_233d14, gfxlib_uses_noop_fr4_test_23c2a0, kamui_uses_noop_fr4_test_212a30,
 * ninja_uses_noop_fr4_test_212898
 */
u32 noop_fr4_test(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float in_fr4;

    if (0.0 <= in_fr4) {
        return ain0;
    }
    return ain0;
}

/*
 * ninja_float_calc_258048  0x8c258048
 * area name: in the ninja library code range; behaviour name: floating-point arithmetic
 * called by: gfxlib_calls_float_calc_234a6a, line_closest_point
 */
u32 ninja_float_calc_258048(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float in_fr4;

    if (0.0 <= in_fr4) {
        return ain0;
    }
    return ain0;
}

/*
 * ninja_uses_kamui_cfg_texture_memory_25806c  0x8c25806c
 * area name: in the ninja library code range; behaviour name: its callees mostly do: uses_kamui_cfg_texture_memory
 */
u32 ninja_uses_kamui_cfg_texture_memory_25806c(u32 a0, u32 *a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 *in_r2;

    *a1 = a0;
    *in_r2 = a0;
    kamui_uses_kamui_cfg_texture_memory_211120(0x8c4aacbc, a1, unused_a2, a3);
    uVar1 = ninja_calls_scan_loop_25b49e(0);
    g_8c4aa6a8 = uVar1;
    return uVar1;
}

/*
 * ninja_calc_258096  0x8c258096
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 */
u8 *ninja_calc_258096(void) {
    u8 *puVar1;

    g_8c4aa6d4 = 0;
    puVar1 = &g_8c4aa6dc;
    g_8c4aa6dc = 1;
    if (g_8c277aec != NULL) {
        puVar1 = (u8 *)(*g_8c277aec)();
    }
    return puVar1;
}

/*
 * alt_entry_25809a  0x8c25809a
 * probably an entry 4 bytes into 8c258096: it reads registers that code sets before it
 */
u8 *alt_entry_25809a(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 in_r3;

    puVar1 = &g_8c4aa6dc;
    g_8c4aa6dc = 1;
    g_8c4aa6d4 = in_r3;
    if (g_8c277aec != NULL) {
        puVar1 = (u8 *)(*g_8c277aec)(a0, a1, a2, a3);
    }
    return puVar1;
}

/*
 * ninja_calc_2580b8  0x8c2580b8
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 */
u32 ninja_calc_2580b8(void) {
    u32 in_r0;

    g_8c4aa6d8 = 0;
    return in_r0;
}

/*
 * set_g_8c4aa558  0x8c2580c0
 * stores its argument in the global at 0x8c4aa558
 */
u32 set_g_8c4aa558(u32 a0) {
    u32 in_r0;

    g_8c4aa558 = a0;
    return in_r0;
}

/*
 * ninja_uses_ret_const_1_2580c6  0x8c2580c6
 * area name: in the ninja library code range; behaviour name: its callees mostly do: uses_ret_const_1
 */
u32 ninja_uses_ret_const_1_2580c6(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    if (g_8c4aa6dc != 0) {
        ain0 = shinobi_uses_ret_const_1_1fa54c(g_8c4ab334);
    }
    g_8c277c68 = g_8c277c68 + 1;
    return ain0;
}

/*
 * pvr_2580e4  0x8c2580e4
 * called by: draw_uses_free_sys_258b26, pvr_25825a
 */
u32 pvr_2580e4(void) {
    u32 in_r0;

    do {
    } while ((*0xa05f810c & (int)0x3ff) == 0);
    do {
    } while ((*0xa05f810c & (int)0x3ff) != 0);
    return in_r0;
}

/*
 * g2dma_2580f8  0x8c2580f8
 * called by: aica_reg_258104
 */
u32 g2dma_2580f8(u32 *a0) {
    u32 uVar1;

    uVar1 = *0xa05f688c;
    *a0 = (u32)((uVar1 & 0x20) == 0);
    return uVar1;
}

/*
 * aica_reg_258104  0x8c258104
 * called by: ninja_uses_aica_reg_258604, pvr_25825a
 */
u32 aica_reg_258104(u32 a0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    int a6;
    int *a7;
    u8 in_MD;
    u8 bVar7;
    u8 in_RB;
    u8 bVar8;
    u8 in_BL;
    u8 bVar9;
    u8 in_FD;
    u8 bVar10;
    u8 in_M;
    u8 extraout_M;
    u8 bVar11;
    u8 in_Q;
    u8 extraout_Q;
    u8 bVar12;
    u8 in_IMASK;
    u8 bVar13;
    u8 in_S;
    u8 extraout_S;
    u8 bVar14;
    u8 in_T;
    int iStack_30;
    int *piStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    int aiStack_20[4];
    int iStack_10;

    iStack_30 = 0;
    uStack_24 = (((u32)in_T | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4;
    uVar1 = (u32)in_T | (u32)in_S << 1;
    uVar2 = uVar1 | (u32)in_IMASK << 4 | (u32)in_Q << 8;
    uVar3 = uVar2 | (u32)in_M << 9;
    bVar9 = (u8)(((u32)in_BL << 0x1c) >> 0x18);
    bVar7 = bVar9 | (u8)(((u32)in_RB << 0x1d) >> 0x18);
    bVar14 = (u8)((uVar1 & 2) >> 1);
    bVar13 = 0;
    bVar12 = (u8)(uVar2 >> 8) & 1;
    bVar11 = (u8)((uVar3 & 0x200) >> 9);
    bVar10 = (u8)(((uVar3 | (u32)in_FD << 0xf) & 0x8000) >> 0xf);
    bVar9 = (bVar9 & 0x10) >> 4;
    bVar8 = (bVar7 & 0x20) >> 5;
    bVar7 = ((bVar7 | (u8)(((u32)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
    piStack_2c = aiStack_20;
    iVar6 = 0;
    a6 = 0;
    piVar5 = piStack_2c;
    a7 = piStack_2c;
    do {
        iVar4 = iVar6 * 0x20;
        iVar6 = iVar6 + 1;
        if ((*(u32 *)(iVar4 + g_8c277c74 + 0x18) & 1) == 0) {
            *a7 = 0;
        } else {
            *(u32 *)(g_8c277c74 + a6 + 0x1c) = 0;
            *piVar5 = 1;
        }
        piVar5 = piVar5 + 1;
        a7 = a7 + 1;
        a6 = a6 + 0x20;
        uStack_28 = a0;
    } while (iVar6 < 4);
    while (iStack_30 != 1) {
        g2dma_2580f8(&iStack_30);
        bVar11 = extraout_M;
        bVar12 = extraout_Q;
        bVar14 = extraout_S;
    }
    _DAT_a0702c00 = _DAT_a0702c00 & 0xfffffcff | uStack_28;
    iVar6 = 0;
    for (; &iStack_10 > piStack_2c; piStack_2c = piStack_2c + 1) {
        if (*piStack_2c == 1) {
            *(u32 *)(g_8c277c74 + iVar6 + 0x1c) = 1;
        }
        iVar6 = iVar6 + 0x20;
    }
    return (uStack_24 & 0xf) << 4 |
           ((u32)(&iStack_10 <= piStack_2c) | (u32)bVar14 << 1 | (u32)bVar13 << 4) & 0xffffff0f | (u32)bVar12 << 8 |
           (u32)bVar11 << 9 | (u32)bVar10 << 0xf | (u32)bVar9 << 0x1c | (u32)bVar8 << 0x1d | (u32)bVar7 << 0x1e;
}

/*
 * aica_reg_258210  0x8c258210
 * called by: ninja_uses_aica_reg_258604
 */
u32 aica_reg_258210(u32 a0) {
    u32 uVar1;
    u32 uStack_10;
    u32 uStack_c;

    uStack_c = a0;
    shinobi_uses_syG2FifoWait_1f92c0(0xa0702c00, &uStack_10, 4, 1, 0, 0);
    uStack_10 = uStack_10 & (int)(int)0xfffffcff | uStack_c;
    uVar1 = syG2CpuCopy(&uStack_10, 0xa0702c00, 4, 1, 0, 0);
    return uVar1;
}

/*
 * ninja_update_fields_258252  0x8c258252
 * area name: in the ninja library code range; behaviour name: conditionally writes members
 */
u32 ninja_update_fields_258252(int a0) {
    u32 in_r0;

    *(u32 *)(a0 + 4) = g_8c4aa6e0;
    return in_r0;
}

/*
 * pvr_25825a  0x8c25825a
 * called by: Class_12c394_uses_imask_to_sr_bits_102bd0
 */
u32 pvr_25825a(u32 a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    u32 uVar3;
    u32 uVar4;
    u8 *ar5_01;
    u32 uVar5;
    u64 in_dr2;
    double dVar6;
    u32 in_fr5;
    double dVar7;
    u32 in_xf12;
    u64 in_xd14;
    bool bVar8;
    char cVar9;
    char cVar10;
    int iVar11;

    uVar5 = (u32)((u64)in_dr2 >> 0x20);
    cVar10 = '\0';
    cVar9 = '\0';
    ar5_01 = &g_8c4aa4a8;
    uVar3 = 0x44200000;
    if ((a0 & 0x10) == 0) {
        g_8c4aa508 = 0x140;
        g_8c4aa4ac = 0x43a00000;
    } else {
        g_8c4aa508 = 0x280;
        g_8c4aa4ac = 0x44200000;
    }
    dVar7 = 7.205761227476173e+16;
    if ((a0 & 0x20) == 0) {
        g_8c4aa50c = 0xf0;
        g_8c4aa4b0 = 0x43700000;
    } else {
        g_8c4aa50c = 0x1e0;
        g_8c4aa4b0 = 0x43f00000;
    }
    g_8c4aa4e4 = a0;
    g_8c4aa4e8 = a1;
    g_8c4aa4ec = a2;
    iVar11 = a1;
    if ((a0 & 3) == 1) {
        pvr_2580e4();
        aica_reg_258104(0);
        g_8c4aa4ac = in_xf12;
        if (cVar10 == '\0') {
            g_8c4aa4ac = uVar3;
        }
        g_8c4aa508 = 0x280;
        if (cVar10 == '\0') {
            g_8c4aa4b0 = SUB84(dVar7, 0);
        } else {
            g_8c4aa4b0 = (u32)in_xd14;
            g_8c4aa4b4 = (u32)((u64)in_xd14 >> 0x20);
        }
        g_8c4aa50c = 0x1e0;
    } else {
        uVar4 = a0;
        iVar1 = shinobi_calls_calc_1f7ea8(a0);
        pvr_2580e4();
        if (iVar1 == 2) {
            uVar3 = 0x200;
        } else if (iVar1 == 3) {
            uVar3 = 0x300;
        } else if (iVar1 == 1) {
            uVar3 = 0x100;
        } else {
            uVar3 = 0x300;
        }
        aica_reg_258104(uVar3);
    }
    if ((a0 & 0x10000) == 0) {
        uVar5 = 0;
    } else {
        if (cVar9 == '\0') {
            uVar5 = 0x40000000;
        } else {
            uVar5 = SUB84((double)CONCAT44(uVar5, 0x3f800000) + (double)CONCAT44(uVar5, 0x3f800000), 0);
        }
        if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44(g_8c4aa4ac, uVar5);
        } else {
            dVar6 = (double)CONCAT44(g_8c4aa4b0, g_8c4aa4ac);
        }
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * SUB84(dVar6, 0), SUB84(dVar6, 0));
        } else {
            dVar6 = dVar6 * dVar6;
        }
        g_8c4aa4ac = SUB84(dVar6, 0);
        uVar5 = (u32)((u64)dVar6 >> 0x20);
        if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44(g_8c4aa4b0, g_8c4aa4ac);
            g_8c4aa4ac = uVar5;
        } else {
            dVar6 = (double)CONCAT44(g_8c4aa4b4, uVar5);
            g_8c4aa4b0 = uVar5;
        }
        if (cVar9 == '\0') {
            bVar8 = (float)((u64)dVar6 >> 0x20) == (float)((u64)dVar7 >> 0x20);
        } else {
            bVar8 = dVar6 == dVar7;
        }
        uVar5 = 1;
        if (bVar8) {
            if (cVar10 == '\0') {
                g_8c4aa4b0 = SUB84(dVar7, 0);
            } else {
                g_8c4aa4b0 = (u32)in_xd14;
                g_8c4aa4b4 = (u32)((u64)in_xd14 >> 0x20);
            }
        }
    }
    if (iVar11 == 0) {
        ar5_01 = NULL;
    } else if (iVar11 == 1) {
        ar5_01 = (u8 *)0x1;
    } else if (iVar11 == 3) {
        ar5_01 = (u8 *)0x3;
    } else if (iVar11 == 4) {
        ar5_01 = (u8 *)0x4;
    } else if (iVar11 == 5) {
        ar5_01 = (u8 *)0x5;
    }
    _DAT_a05f80e8 = _DAT_a05f80e8 | 8;
    _DAT_a05f6900 = 8;
    kamui_set_video_mode_like(a0 & 3, &DAT_a05f6900, a2, a3);
    if ((a0 & 0x40) != 0) {
        uVar4 = a0 & 0xe0000;
        g_8c4aa6e0 = (int)(short)((int)uVar4 >> 0x11);
        shinobi_calls_update_fields_2078d8(ninja_update_fields_258252, 0);
        if (g_8c4aa50c == 0xf0) {
            if (uVar4 == 0) {
                g_8c4aa50c = 0xf8;
            } else if (uVar4 == 0x20000) {
                g_8c4aa50c = 0x100;
            } else if (uVar4 == 0x40000) {
                g_8c4aa50c = 0x108;
            } else if (uVar4 == 0x60000) {
                g_8c4aa50c = 0x110;
            } else if (uVar4 == 0x80000) {
                g_8c4aa50c = 0x118;
            }
        } else if (uVar4 == 0) {
            g_8c4aa50c = 0x1f0;
        } else if (uVar4 == 0x20000) {
            g_8c4aa50c = 0x200;
        } else if (uVar4 == 0x40000) {
            g_8c4aa50c = 0x210;
        } else if (uVar4 == 0x60000) {
            g_8c4aa50c = 0x220;
        } else if (uVar4 == 0x80000) {
            g_8c4aa50c = 0x230;
        }
    }
    uVar3 = 1;
    kamui_set_display_mode_cfg(a0 & 0xfff, ar5_01, 1, uVar5);
    g_8c4aacbc = 0x60;
    g_8c4aacc0 = 1;
    g_8c4aad1c = 0x8c4aa6e4;
    g_8c4aad20 = 0x8c4aa70c;
    g_8c4aacc4 = &g_8c4aad1c;
    g_8c4aaccc = 0;
    g_8c4aacd0 = 0;
    g_8c4aacd8 = g_8c277ac8;
    g_8c277b2c = 0;
    g_8c4aacdc = &g_8c4aabdc;
    g_8c4aace0 = 0;
    g_8c4aace4 = 0;
    if (cVar10 == '\0') {
        g_8c4aacf8 = 0;
    } else {
        uRam8c4aacfc = 0;
        g_8c4aacf8 = in_fr5;
    }
    g_8c4aa6dc = 0;
    g_8c4aa6d4 = 0;
    g_8c4aa6d8 = 1;
    g_8c4aa558 = 0;
    g_8c4aace8 = g_8c4aacf8;
    g_8c4aacec = g_8c4aacf8;
    g_8c4aacf0 = g_8c4aacf8;
    g_8c4aacf4 = g_8c4aacf8;
    pvr_calls_update_fields_20757e(ninja_calc_258096, 0);
    ar5_00 = 0;
    shinobi_calls_update_fields_20786a(ninja_calc_2580b8, 0);
    shinobi_calls_update_fields_2078be(set_g_8c4aa558);
    uVar2 = g_8c4aa4ec;
    pvr_test_20a786(g_8c4aa4ec);
    uVar2 = ninja_draw_2588f8();
    if ((_DAT_a05f689c & 0xff) < 10) {
        draw_draw_helper_259a1c(0xffff6600);
        /* WARNING: Could not recover jumptable at 0x8c25857e. Too many branches */
        /* WARNING: Treating indirect jump as call */
        uVar5 = (*g_8c277c70)();
        return uVar5;
    }
    return uVar2;
}

/*
 * ninja_uses_aica_reg_258604  0x8c258604
 * area name: in the ninja library code range; behaviour name: its main named callee is aica_reg_258104
 */
u32 ninja_uses_aica_reg_258604(u32 a0, u32 a1, u32 a2) {
    short sVar1;
    int *piVar2;
    int *piVar3;
    int iVar4;
    u8 *a4;
    u32 uVar5;
    u32 ar6_00;
    u32 uVar6;
    int ar5_00;
    u8 *puVar7;
    u32 uVar8;
    u64 in_dr2;
    double dVar9;
    float fVar10;
    float fVar11;
    u64 in_dr14;
    u64 uVar12;
    u32 in_PR;
    u8 auStack_30[12];
    u8 auStack_24[4];
    u64 uStack_20;

    uVar8 = (u32)((u64)in_dr2 >> 0x20);

    uStack_20 = CONCAT44((int)in_dr14, (u32)uStack_20);
    uStack_20._0_4_ = (int)((u64)in_dr14 >> 0x20);
    puVar7 = auStack_24;

    *(u32 *)(puVar7 + -4) = in_PR;
    *(u32 *)(puVar7 + -8) = a1;
    *(u32 *)(puVar7 + -0xc) = a2;
    thunk_FUN_8c207f80();
    uVar5 = (u32)in_dr14;
    pvr_test_20aed8(1);
    piVar2 = 0x8c4aa508;
    g_8c4aa4e8 = *(u32 *)(puVar7 + -8);
    ar5_00 = 0x8c4aa4a8;
    g_8c4aa4ec = *(u32 *)(puVar7 + -0xc);
    *(u32 *)(puVar7 + -0xc) = (int)0xfff & a0;

    uVar12 = CONCAT44((u32)g_8c258714, uVar5);

    uVar5 = (u32)((u64)uVar12 >> 0x20);
    if ((a0 & 0x10) == 0) {
        iVar4 = (int)0x140;

        *(u32 *)(ar5_00 + 4) = (u32)g_8c258720;

    } else {
        iVar4 = (int)0x280;

        *(u32 *)(ar5_00 + 4) = uVar5;
    }
    *piVar2 = iVar4;
    piVar3 = 0x8c4aa50c;
    fVar11 = g_8c258720._4_4_;

    uVar12 = CONCAT44(uVar5, g_8c258728);

    if ((a0 & 0x20) == 0) {
        iVar4 = (int)0xf0;

        *(float *)(ar5_00 + 8) = fVar11;

    } else {
        iVar4 = (int)0x1e0;

        *(int *)(ar5_00 + 8) = (int)uVar12;
    }
    *piVar3 = iVar4;
    if ((a0 & 3) == 1) {
        aica_reg_258104(0);
        iVar4 = (int)0x280;

        *(int *)(ar5_00 + 4) = (int)((u64)uVar12 >> 0x20);

        *piVar2 = iVar4;
        iVar4 = (int)0x1e0;

        *(int *)(ar5_00 + 8) = (int)uVar12;

        *piVar3 = iVar4;
    } else {
        iVar4 = shinobi_calls_calc_1f7ea8(a0 & 3);
        if (iVar4 == 2) {
            iVar4 = (int)0x200;
        } else if (iVar4 == 3) {
            iVar4 = (int)0x300;
        } else if (iVar4 == 1) {
            iVar4 = (int)0x100;
        } else {
            iVar4 = (int)0x300;
        }
        aica_reg_258210(iVar4);
    }
    if ((0x10000 & a0) == 0) {
        uVar8 = 0;
    } else {

        uVar8 = 0x40000000;

        dVar9 = (double)CONCAT44(*(u32 *)(ar5_00 + 4), uVar8);

        dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) * SUB84(dVar9, 0), SUB84(dVar9, 0));

        *(int *)(ar5_00 + 4) = (int)((u64)dVar9 >> 0x20);
        fVar10 = *(float *)(ar5_00 + 8);

        uVar8 = 1;
        if (fVar10 == fVar11) {

            *(int *)(ar5_00 + 8) = (int)uVar12;
        }
    }
    iVar4 = *(int *)(puVar7 + -8);
    if (iVar4 == 0) {
        ar5_00 = 0;
    } else if (iVar4 == 1) {
        ar5_00 = 1;
    } else if (iVar4 == 3) {
        ar5_00 = 3;
    } else if (iVar4 == 4) {
        ar5_00 = 4;
    } else if (iVar4 == 5) {
        ar5_00 = 5;
    }
    g_8c4aacd8 = *(u32 *)(&DATA_8c277ac8);
    if ((a0 & 0x40) == 0)
        goto LAB_8c258846;
    uVar6 = 0xe0000 & a0;
    g_8c4aa6e0 = (int)(short)((int)uVar6 >> 0x11);
    shinobi_calls_update_fields_2078d8((&ninja_update_fields_258252), 0);
    if (*piVar3 == (int)0xf0) {
        sVar1 = 0xf8;
        if (uVar6 != 0) {
            if (uVar6 == 0x20000) {
                iVar4 = (int)0x100;
            LAB_8c25883e:
                *piVar3 = iVar4;
            } else {
                sVar1 = 0x108;
                if (uVar6 != 0x40000) {
                    if (uVar6 == 0x60000) {
                        iVar4 = (int)0x110;
                        goto LAB_8c25883e;
                    }
                    sVar1 = 0x118;
                    if (uVar6 != 0x80000)
                        goto LAB_8c258846;
                }
                *piVar3 = (int)sVar1;
            }
            goto LAB_8c258846;
        }
    } else {
        sVar1 = 0x1f0;
        if (uVar6 != 0) {
            if (uVar6 != 0x20000) {
                sVar1 = 0x210;
                if (uVar6 != 0x40000) {
                    if (uVar6 == 0x60000) {
                        iVar4 = (int)0x220;
                        goto LAB_8c25883e;
                    }
                    sVar1 = 0x230;
                    if (uVar6 != 0x80000)
                        goto LAB_8c258846;
                }
                *piVar3 = (int)sVar1;
                goto LAB_8c258846;
            }
            iVar4 = (int)0x200;
            goto LAB_8c25883e;
        }
    }
    *piVar3 = (int)sVar1;
LAB_8c258846:
    ar6_00 = 1;
    kamui_set_display_mode_cfg(*(u32 *)(puVar7 + -0xc), ar5_00, 1, uVar8);
    pvr_test_20a786(g_8c4aa4ec);
    g_8c4aa6dc = 0;
    g_8c4aa6d4 = 0;
    g_8c4aa6d8 = 1;
    g_8c4aa558 = 0;
    pvr_calls_update_fields_20757e((&ninja_calc_258096), 0);
    uVar5 = 0;
    shinobi_calls_update_fields_20786a((&ninja_calc_2580b8), 0);
    a4 = (&set_g_8c4aa558);
    shinobi_calls_update_fields_2078be((&set_g_8c4aa558));
    screen_reset_view();
    uVar8 = pvr_test_20aed8(0);
    return uVar8;
}

/*
 * ninja_draw_2588f8  0x8c2588f8
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: pvr_25825a
 */
u32 ninja_draw_2588f8(void) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 *ar5_00;
    float *ar6_00;
    u8 *puVar5;
    u8 *puVar6;
    u8 *a7;
    u32 *puVar7;
    u8 *puVar8;
    u64 uVar9;
    u64 in_xd2;
    char cVar10;
    u32 uStack_2c;
    u32 uStack_28;
    float fStack_24;

    cVar10 = '\0';
    puVar5 = &stack0xffffff14;
    puVar6 = &stack0xffffff14;
    g_8c4aa518 = 0;
    g_8c4aa51c = 0;
    g_8c4aa520 = 0;
    g_8c4aa4b4 = g_8c4aa4ac / 2.0;
    g_8c4aa4b8 = g_8c4aa4b0 / 2.0;
    g_8c4aa4dc = 0x3f800000;
    g_8c4aa4e0 = 0x3f800000;
    g_8c4aa4a8 = 0x43fa0000;
    g_8c4aa4d4 = 0x3f800000;
    ar5_00 = &uStack_2c;
    g_8c4aa4d8 = 0x476a6000;
    ar6_00 = &fStack_24;
    a7 = &g_8c4aa4c4;
    g_8c4aa4f0 = 0;
    g_8c4aa540 = 0;
    g_8c4ab14c = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    g_8c4aa4cc = g_8c4aa4ac + -1.0;
    g_8c4aa4d0 = g_8c4aa4b0 + -1.0;
    g_8c4aa4c4 = 0;
    g_8c4aa4c8 = 0;
    uVar9 = CONCAT44(g_8c4aa4d0, g_8c4aa4cc);
    fStack_24 = g_8c4aa4cc;
    gfx_light_globals_reset(&g_8c4aa4cc, ar5_00, ar6_00, &g_8c4aa4c4);
    puVar8 = (u8 *)0x8c4aa73c;
    puVar7 = (u32 *)&g_8c4aabc0;
    do {
        ninja_draw_258d82(puVar8);
        puVar8 = puVar8 + 0xc0;
        *puVar7 = 0x80012;
        puVar7 = puVar7 + 1;
    } while (puVar8 < &g_8c4aabbc);
    ninja_draw_258d82(&g_8c4aabfc);
    g_8c4aabfc = 0xc0;
    g_8c4aac28 = 10;
    g_8c4aac2c = 0xb;
    ta_fifo_20f640(&g_8c4aabfc, ar5_00, ar6_00, a7);
    puVar8 = &g_8c4aabfc;
    colors_float_to_argb_70_80(&g_8c4aabfc);
    noop_257488();
    pvr_wrap();
    uVar1 = 0;
    draw_state_select(0);
    libgcc_movstr_i4(uVar1, ar5_00, &stack0xffffff14, a7);
    uVar3 = 0;
    do {
        uVar2 = uVar3 + 4;
        if (cVar10 == '\0') {
            uVar9 = (u64) * (u32 *)(puVar5 + uVar3);
        } else {
            in_xd2 = *(u64 *)(puVar5 + uVar3);
        }
        if (cVar10 == '\0') {
            *(int *)(uVar3 + 0x8c4c0d60) = (int)uVar9;
        } else {
            *(u64 *)(uVar3 + 0x8c4c0d60) = in_xd2;
        }
        uVar3 = uVar2;
    } while (uVar2 < 0xc0);
    uVar1 = 3;
    g_8c4c0da0 = 3;
    libgcc_movstr_i4(uVar2, &g_8c4c0da0, &stack0xffffff14, 3);
    uVar3 = 0;
    do {
        uVar2 = uVar3;
        uVar4 = uVar3 + 4;
        if (cVar10 == '\0') {
            uVar9 = (u64) * (u32 *)(puVar6 + uVar3);
        } else {
            in_xd2 = *(u64 *)(puVar6 + uVar3);
        }
        if (cVar10 == '\0') {
            *(int *)(uVar3 + 0x8c4c0e80) = (int)uVar9;
        } else {
            *(u64 *)(uVar3 + 0x8c4c0e80) = in_xd2;
        }
        uVar3 = uVar4;
    } while (uVar4 < 0xc0);
    g_8c4c0ec0 = uVar1;
    g_8c4ab330 = 0;
    return uVar2;
}

/*
 * screen_reset_view  0x8c258ac0
 * centres the view on the screen size and sets the clip rectangle to the full screen
 * called by: ninja_uses_aica_reg_258604
 */
u32 screen_reset_view(void) {
    g_8c4aa518 = 0;
    g_8c4aa51c = 0;
    g_8c4aa520 = 0;
    g_8c4aa4b4 = g_8c4aa4ac / 2.0;
    g_8c4aa4b8 = g_8c4aa4b0 / 2.0;
    g_8c4aa4c4 = 0;
    g_8c4aa4c8 = 0;
    g_8c4aa4cc = g_8c4aa4ac + -1.0;
    g_8c4aa4d0 = g_8c4aa4b0 + -1.0;
    return 4;
}

/*
 * draw_uses_free_sys_258b26  0x8c258b26
 * area name: sits between draw functions (same compilation unit); behaviour name: its main named callee is free_sys
 * called by: game_init
 */
u32 draw_uses_free_sys_258b26(int a0, int a1, int a2, int a3) {
    u32 uVar1;
    u32 ar5_00;
    u32 *ar6_00;
    int iVar2;
    float fVar3;
    float fVar4;
    double dVar5;
    double dVar6;
    double dVar7;
    u32 in_fr5;
    u32 uVar9;
    double dVar8;
    float fVar10;
    float fVar11;
    double in_dr6;
    u32 in_fr9;
    double in_dr14;
    u32 uVar12;
    double in_xd2;
    double in_xd4;
    double in_xd6;
    u8 in_IMASK;
    u8 in_S;
    u8 extraout_S;
    u8 extraout_T;
    u8 bVar13;
    char cVar14;
    char cVar15;
    int in_stack_00000000;

    cVar15 = '\0';
    cVar14 = '\0';
    ar6_00 = &g_8c277c6c;
    ar5_00 = 0x100010;
    g_8c277c6c = 0;
    if (a0 < 0) {
        a0 = 100;
        g_8c4aad18 = 0x20;
        g_8c277c6c = 1;
    LAB_8c258b82:
        g_8c4aacc0 = 0x100010;
    } else {
        if (a2 < 0) {
            g_8c4aad18 = 0x22;
            a2 = 100;
        LAB_8c258b80:
            g_8c277c6c = 2;
            goto LAB_8c258b82;
        }
        if (in_stack_00000000 < 0) {
            in_stack_00000000 = 100;
            g_8c4aad18 = 0x24;
            goto LAB_8c258b80;
        }
        g_8c4aacc0 = 0x100000;
        g_8c4aad18 = 0;
    }
    g_8c277b2c = a1 + a0 + a2 + a3 + in_stack_00000000;
    iVar2 = a3;
    g_8c277ad0 = a0;
    g_8c277ad4 = a1;
    g_8c277ad8 = a2;
    g_8c277adc = a3;
    g_8c277ae0 = in_stack_00000000;
    if (g_8c277b30 == 0) {
        if (g_8c4aace0 != 0) {
            free_sys(g_8c4aace0 & 0x8fffffff, 0x100010, &g_8c277c6c, a3);
        }
        fVar3 = (float)g_8c277b2c;
        dVar5 = (double)(u64)(u32)fVar3;
        dVar8 = in_xd2;
        if (cVar15 == '\0') {
            dVar8 = (double)CONCAT44(fVar3, in_fr5);
        }
        uVar9 = (u32)((u64)dVar8 >> 0x20);
        uVar12 = (u32)((u64)in_dr14 >> 0x20);
        if (cVar14 != '\0' || 0.0 <= fVar3) {
            if (cVar15 == '\0') {
                in_dr14 = (double)CONCAT44(uVar12, uVar9);
            }
        } else {
            if (cVar15 == '\0') {
                in_dr14 = (double)CONCAT44(uVar12, uVar9);
                dVar5 = 6.58979161647419e-315;
            } else {
                in_xd2 = -2.7677198172564077e-250;
            }
            if (cVar14 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + SUB84(dVar5, 0));
            } else {
                in_dr14 = in_dr14 + dVar5;
            }
        }
        uVar9 = 0;
        uVar1 = g_8c277b2c * 4 + 0x160;
        g_8c4aace0 = malloc_thunk(uVar1, ar5_00, ar6_00, iVar2);
        in_fr5 = SUB84(dVar8, 0);
        g_8c4aace0 = g_8c4aace0 | 0x20000000;
        in_S = extraout_S;
        bVar13 = extraout_T;
    } else {
        uVar9 = (u32)((u64)in_dr14 >> 0x20);
        uVar1 = g_8c277b30;
        if (g_8c277b34 < g_8c277b2c * 4 + 0x160U) {
            fVar3 = (float)g_8c277b2c;
            bVar13 = fVar3 < 0.0;
            if ((bool)bVar13) {
                fVar3 = fVar3 + 4.2949673e+09;
            }
            in_dr14 = (double)CONCAT44(uVar9, fVar3);
            uVar9 = 0;
            g_8c4aace0 = 0;
            g_8c4aace4 = 0;
            goto LAB_8c258cae;
        }
        fVar3 = (float)g_8c277b2c;
        bVar13 = fVar3 < 0.0;
        if ((bool)bVar13) {
            fVar3 = fVar3 + 4.2949673e+09;
        }
        in_dr14 = (double)CONCAT44(uVar9, fVar3);
        uVar9 = 0;
        g_8c4aace0 = g_8c277b30;
    }
    g_8c4aace4 = g_8c277b2c + 0x58;
LAB_8c258cae:
    if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(0x42c80000, in_fr5);
    } else {
        dVar8 = -1.862832998689489e-249;
    }
    fVar3 = (float)((u64)dVar8 >> 0x20);
    if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44(uVar9, (float)a0 * fVar3);
    } else {
        dVar5 = (double)CONCAT44(uVar9, (float)a0) * dVar8;
    }
    dVar7 = in_xd2;
    if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(fVar3, SUB84(dVar5, 0));
        dVar7 = in_xd4;
    }
    fVar3 = SUB84(in_dr14, 0);
    if (cVar14 == '\0') {
        fVar10 = (float)((u64)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar10, SUB84(dVar8, 0) / fVar3);
        fVar4 = (float)a1 * fVar10;
    } else {
        dVar8 = dVar8 / in_dr14;
        fVar10 = (float)((u64)dVar8 >> 0x20);
        fVar4 = SUB84((double)CONCAT44((int)((u64)dVar5 >> 0x20), (float)a1) * dVar8, 0);
    }
    dVar5 = in_xd2;
    if (cVar15 == '\0') {
        dVar5 = (double)CONCAT44(fVar4, in_fr9);
    }
    if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) / fVar3, SUB84(dVar5, 0));
        dVar6 = (double)CONCAT44((float)a3, (float)a2 * fVar10);
    } else {
        dVar5 = dVar5 / in_dr14;
        dVar6 = (double)a3 * dVar8;
    }
    if (cVar15 == '\0') {
        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(dVar6, 0));
        g_8c4aace8 = SUB84(dVar8, 0);
    } else {
        g_8c4aace8 = SUB84(dVar7, 0);
        in_xd6 = in_xd2;
    }
    fVar4 = (float)((u64)dVar6 >> 0x20);
    if (cVar14 == '\0') {
        fVar11 = SUB84(in_dr6, 0) / fVar3;
        dVar7 = (double)CONCAT44(fVar4 * fVar10, (float)in_stack_00000000 * fVar10);
    } else {
        fVar11 = SUB84(in_dr6 / in_dr14, 0);
        dVar7 = (double)CONCAT44(fVar4, (float)in_stack_00000000) * dVar8 * dVar8;
    }
    dVar6 = dVar7;
    if (cVar15 == '\0') {
        dVar6 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar11);
    }
    if (cVar14 == '\0') {
        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) / fVar3, SUB84(dVar6, 0));
    } else {
        dVar6 = dVar6 / in_dr14;
    }
    if (cVar15 == '\0') {
        g_8c4aacec = (u32)((u64)dVar5 >> 0x20);
        in_xd2 = (double)CONCAT44(SUB84(dVar7, 0), SUB84(dVar8, 0));
    } else {
        g_8c4aacec = SUB84(dVar5, 0);
    }
    if (cVar14 == '\0') {
        dVar8 = (double)CONCAT44((float)((u64)in_xd2 >> 0x20) / fVar3, SUB84(in_xd2, 0));
    } else {
        dVar8 = in_xd2 / in_dr14;
    }
    g_8c4aacf4 = SUB84(dVar6, 0);
    uVar9 = (u32)((u64)dVar8 >> 0x20);
    if (cVar15 == '\0') {
        g_8c4aacf0 = g_8c4aacf4;
        g_8c4aacf4 = (int)((u64)dVar6 >> 0x20);
        g_8c4aacf8 = uVar9;
    } else {
        g_8c4aacf0 = SUB84(in_xd6, 0);
        g_8c4aacf8 = SUB84(dVar8, 0);
        uRam8c4aacfc = uVar9;
    }
    pvr_2580e4(uVar1, ar5_00, ar6_00, iVar2, (((u32)bVar13 | (u32)in_S << 1 | (u32)in_IMASK << 4) & 0xf0) >> 4);
    kamui_uses_kamui_cfg_texture_memory_211120(&g_8c4aacbc, ar5_00, ar6_00, iVar2);
    g_8c4aa6a8 = ninja_calls_scan_loop_25b49e(0);
    return g_8c4aa6a8;
}

/*
 * draw_state_select  0x8c258d4c
 * makes polygon-state block a0 (0xc0 bytes each at 0x8c4aa73c) current and loads it
 * called by: ninja_draw_2588f8
 */
u32 draw_state_select(int a0) {
    u32 uVar1;
    int ar4_00;

    ar4_00 = a0 * 0xc0 + 0x8c4aa73c;
    g_8c4aabbc = ar4_00;
    uVar1 = ta_load_texture_params(ar4_00);
    g_8c4aabd8 = a0 * 4 + 0x8c4aabc0;
    return uVar1;
}

/*
 * ninja_draw_258d82  0x8c258d82
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: ninja_draw_2588f8
 */
u32 ninja_draw_258d82(u32 *a0) {
    u32 uVar1;

    *a0 = 0x3f3ffff;
    a0[1] = 0;
    a0[2] = 0;
    a0[3] = 1;
    a0[4] = 0;
    a0[5] = 6;
    a0[6] = 1;
    a0[7] = 0;
    a0[8] = 1;
    a0[9] = 0;
    a0[10] = 0;
    a0[0xb] = 8;
    a0[0xc] = 6;
    a0[0xd] = 0;
    a0[0xe] = 0;
    a0[0xf] = 2;
    a0[0x10] = 0;
    a0[0x11] = 0;
    a0[0x12] = 0;
    a0[0x14] = 0;
    a0[0x13] = 0;
    a0[0x15] = 0;
    a0[0x16] = 0;
    a0[0x17] = 4;
    a0[0x18] = 3;
    a0[0x1b] = 0;
    a0[0x19] = 0;
    a0[0x1a] = 0;
    a0[0x1c] = 0x3f800000;
    a0[0x1d] = 0x3f800000;
    a0[0x1e] = 0x3f800000;
    a0[0x1f] = 0x3f800000;
    a0[0x20] = 0x3f800000;
    a0[0x21] = 0;
    a0[0x22] = 0;
    a0[0x23] = 0;
    uVar1 = ta_fifo_20f640(a0, 0, 1, 6);
    return uVar1;
}

/*
 * set_g_8c277ae8  0x8c258e0a
 * stores its argument in the global at 0x8c277ae8
 * called by: CGame_Initial, Class_12b388_uses_Class_129808_draw_0c5cb4
 */
u32 set_g_8c277ae8(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    g_8c277ae8 = a0;
    return ain0;
}

/*
 * ninja_calc_258e50  0x8c258e50
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 * called by: alt_entry_258e70, game_frame
 */
u32 ninja_calc_258e50(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    if (g_8c277ae8 != NULL) {
        ain0 = (*g_8c277ae8)();
    }
    return ain0;
}

/*
 * alt_entry_258e52  0x8c258e52
 * probably an entry 2 bytes into 8c258e50: it reads registers that code sets before it
 */
u32 alt_entry_258e52(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 in_r0;
    u32 *in_r3;

    if ((code *)*in_r3 != NULL) {
        in_r0 = (*(code *)*in_r3)(a0, a1, a2, a3);
    }
    return in_r0;
}

/*
 * game_frame  0x8c258e66
 * called by: main
 */
u8 *game_frame(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 ain0;
    u32 ain0_00;
    u8 *ar4_00;
    u32 uVar1;

    uVar1 = 0;
    ain0 = sh4_tmu_1f88e6(a0);
    g_8c4aad24 = ain0;
    if (g_8c4aa6dc != 0) {
        while ((g_8c4aa6d4 != 0 && (uVar1 < 0x28870))) {
            a1 = sh4_tmu_1f88e6(a0);
            a0 = int_diff(g_8c4aad24, a1);
            ain0 = fix7_to_hundredths(a0);
            uVar1 = ain0;
        }
        if (uVar1 < 0x28870) {
            ninja_calc_258e50(a0, a1, a2, a3, ain0);
        }
    }
    g_8c4aa6d4 = 1;
    ta_copy_20b7a0(a0, a1, a2, a3);
    ar4_00 = &g_8c4aa540;
    g_8c4aa518 = 0;
    g_8c4aa51c = 0;
    g_8c4aa520 = 0;
    g_8c4aa540 = g_8c4aa540 + 1;
    ain0_00 = ta_draw_20b260(&g_8c4aa540, a1, a2, a3);
    shinobi_uses_maple_port_info_1f61c6(ar4_00, a1, a2, a3, ain0_00);
    g_8c4aad28 = sh4_tmu_1f88e6(ar4_00);
    g_8c4aa4f4 = *g_8c4aabdc;
    g_8c4aa4f8 = g_8c4aabdc[1];
    g_8c4aa4fc = g_8c4aabdc[2];
    g_8c4aa500 = g_8c4aabdc[3];
    g_8c4aa504 = g_8c4aabdc[4];
    return &g_8c4aa4fc;
}

/*
 * alt_entry_258e70  0x8c258e70
 * probably an entry 10 bytes into 8c258e66: it reads registers that code sets before it
 */
u8 *alt_entry_258e70(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *ar4_00;
    u32 unaff_r11;
    u32 in_PR;

    g_8c4aad24 = sh4_tmu_1f88e6(a0);
    uVar1 = unaff_r11;
    if (g_8c4aa6dc != 0) {
        while ((g_8c4aa6d4 != 0 && (uVar1 < 0x28870))) {
            a1 = sh4_tmu_1f88e6(a0);
            a0 = int_diff(g_8c4aad24, a1);
            uVar1 = fix7_to_hundredths(a0);
        }
        if (uVar1 < 0x28870) {
            ninja_calc_258e50(a0, a1, a2, a3, in_PR);
        }
    }
    g_8c4aa6d4 = 1;
    ta_copy_20b7a0(a0, a1, a2, a3);
    ar4_00 = &g_8c4aa540;
    g_8c4aa540 = g_8c4aa540 + 1;
    g_8c4aa518 = unaff_r11;
    g_8c4aa51c = unaff_r11;
    g_8c4aa520 = unaff_r11;
    ta_draw_20b260(&g_8c4aa540, a1, a2, a3);
    shinobi_uses_maple_port_info_1f61c6(ar4_00, a1, a2, a3, in_PR);
    g_8c4aad28 = sh4_tmu_1f88e6(ar4_00);
    g_8c4aa4f4 = *g_8c4aabdc;
    g_8c4aa4f8 = g_8c4aabdc[1];
    g_8c4aa4fc = g_8c4aabdc[2];
    g_8c4aa500 = g_8c4aabdc[3];
    g_8c4aa504 = g_8c4aabdc[4];
    return &g_8c4aa4fc;
}

/*
 * ninja_calc_258f1c  0x8c258f1c
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 */
u32 ninja_calc_258f1c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    u32 uVar4;

    puVar1 = (&ta_copy_20b7a0);
    g_8c4aa6d4 = 1;
    uVar4 = (*(code *)puVar1)(a0, a1, a2, a3);
    puVar3 = 0x8c4aa520;
    puVar2 = 0x8c4aa51c;
    g_8c4aa518 = 0;
    *puVar2 = 0;
    *puVar3 = 0;
    return uVar4;
}

/*
 * ninja_uses_sh4_tmu_258f3a  0x8c258f3a
 * area name: in the ninja library code range; behaviour name: its main named callee is sh4_tmu_1f88e6
 */
u32 *ninja_uses_sh4_tmu_258f3a(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int *ar4_00;
    u32 uVar2;
    u32 *puVar3;
    u32 *puVar4;

    uVar2 = sh4_tmu_1f88e6(a0);
    puVar1 = (&ta_draw_20b260);
    g_8c4aad24 = uVar2;
    (*(code *)puVar1)(a0, a1, a2, a3);
    ar4_00 = 0x8c4aa540;
    puVar1 = (&sh4_tmu_1f88e6);
    g_8c4aa540 = g_8c4aa540 + 1;
    uVar2 = (*(code *)puVar1)(ar4_00, a1, a2, a3);
    puVar4 = 0x8c4aabdc;
    g_8c4aad28 = uVar2;
    puVar4 = (u32 *)*puVar4;
    g_8c4aa4f4 = *puVar4;
    g_8c4aa4f8 = puVar4[1];
    puVar3 = 0x8c4aa4fc;
    g_8c4aa4fc = puVar4[2];
    g_8c4aa500 = puVar4[3];
    g_8c4aa504 = puVar4[4];
    return puVar3;
}

/*
 * ninja_set_event900_callback  0x8c258fd8
 * removes the previous handler and, when a0 is set, installs a0 for interrupt event 0x900
 * called by: game_init_sound_and_messages
 */
int ninja_set_event900_callback(int a0) {
    int *piVar1;
    int in_r0;

    piVar1 = 0x8c4ab330;
    if (g_8c4ab330 != 0) {
        in_r0 = shinobi_uses_ret_const_1_1fa54c(g_8c4ab330);
        *piVar1 = 0;
    }
    if (a0 != 0) {
        in_r0 = ta_uses_ret_const_1_1fa244((int)0x900, a0, 0x58, 0);
        *piVar1 = in_r0;
    }
    return in_r0;
}

/*
 * ninja_calls_calc_259046  0x8c259046
 * area name: in the ninja library code range; behaviour name: its callees mostly do: calc
 * called by: game_init, game_uses_touch_fields_30_3c_0ff928
 */
u32 ninja_calls_calc_259046(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 *puStack_74;
    u32 *puStack_70;
    u32 *puStack_6c;
    u32 uStack_68;
    u32 uStack_64;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_48;
    u32 uStack_40;
    u32 uStack_3c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_1c;

    puStack_74 = &uStack_68;
    puStack_70 = &uStack_48;
    uStack_68 = 0xe0000000;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0x3727c5ac;
    uStack_48 = 0xe0000000;
    puStack_6c = &uStack_28;
    uStack_40 = 0;
    uStack_3c = 0x3727c5ac;
    uStack_28 = 0xf0000000;
    uStack_24 = 0;
    uStack_1c = 0x3727c5ac;
    uVar1 = pvr_calc_20a420(&puStack_74, 0, 0x20, puStack_74);
    return uVar1;
}

/*
 * ninja_release_2590bc  0x8c2590bc
 * area name: in the ninja library code range; behaviour name: mostly calls release functions
 * called by: system_init_libs
 */
u32 ninja_release_2590bc(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = kamui_list_210fd2(&g_8c4aabdc, a1, a2, a3);
    if (g_8c277b30 == 0) {
        uVar1 = free_sys(g_8c4aace0 & 0x8fffffff, a1, a2, a3);
        return uVar1;
    }
    return uVar1;
}

/*
 * ninja_draw_259138  0x8c259138
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 */
u32 ninja_draw_259138(void) {
    int *piVar1;
    u32 uVar2;
    u32 uVar3;
    u32 in_r0;
    int iVar4;
    u32 *in_r2;
    u32 uVar5;
    u32 ar5_00;
    u32 ar6_00;
    u32 unaff_r13;

    uVar2 = 0xffe7ffff;
    piVar1 = 0x8c4aabbc;
    if (*(u32 *)*in_r2 != unaff_r13) {
        iVar4 = (int)0x90;
        ar6_00 = *(u32 *)(iVar4 + 4 + g_8c4aabbc);
        ar5_00 = *(u32 *)(iVar4 + g_8c4aabbc) & 0xfdffff00 | 0x20000ff & unaff_r13;
        uVar5 = *(u32 *)(iVar4 + 8 + g_8c4aabbc);
        *(u32 *)(iVar4 + g_8c4aabbc) = ar5_00;
        uVar3 = 0x180000;
        *(u32 *)(iVar4 + 4 + *piVar1) = ar6_00;
        *(u32 *)(iVar4 + 8 + *piVar1) = uVar5 & uVar2 | uVar3 & unaff_r13;
        in_r0 = ta_load_texture_params(*piVar1);
        *(u32 *)*0x8c4aabd8 = unaff_r13;
    }
    return in_r0;
}

/*
 * ninja_draw_2591f8  0x8c2591f8
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 */
u32 ninja_draw_2591f8(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_r0 == 1) {
        *(u32 *)(ar5_00 + 0x14) = 6;
    } else if (in_r0 == 0) {
        *(u32 *)(ar5_00 + 0x14) = 7;
    }
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ninja_draw_25922e  0x8c25922e
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 */
u32 ninja_draw_25922e(u32 a0, u32 a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int *unaff_r14;

    *(u32 *)*unaff_r14 = in_r2;
    *(u32 *)(in_r0 + *unaff_r14) = a0;
    ta_fifo_20f640(*unaff_r14, a1, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ta_fifo_259274  0x8c259274
 * called by: game_init
 */
u32 ta_fifo_259274(int a0) {
    int *piVar1;
    u32 uVar2;
    int iVar3;

    piVar1 = 0x8c4aabbc;
    *(int *)*0x8c4aabbc = (int)0x4000;
    iVar3 = *piVar1;
    if (a0 == 0) {
        *(u32 *)(iVar3 + 0x54) = 0;
    } else if (a0 == 1) {
        *(u32 *)(iVar3 + 0x54) = 2;
    } else if (a0 == 2) {
        *(u32 *)(iVar3 + 0x54) = 1;
    }
    ta_fifo_20f640(*piVar1);
    uVar2 = ta_load_texture_params(*piVar1);
    return uVar2;
}

/*
 * alt_entry_25927e  0x8c25927e
 * probably an entry 10 bytes into 8c259274: it reads registers that code sets before it
 */
u32 alt_entry_25927e(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;
    char in_T;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_T == '\x01') {
        *(u32 *)(ar5_00 + 0x54) = 0;
    } else if (in_r0 == 1) {
        *(u32 *)(ar5_00 + 0x54) = 2;
    } else if (in_r0 == 2) {
        *(u32 *)(ar5_00 + 0x54) = 1;
    }
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ta_draw_2592c4  0x8c2592c4
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 ta_draw_2592c4(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;
    char in_T;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_T == '\x01') {
        *(u32 *)(ar5_00 + 0x58) = 1;
    } else if (in_r0 == 0) {
        *(u32 *)(ar5_00 + 0x58) = 0;
    }
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ta_draw_2592fe  0x8c2592fe
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 ta_draw_2592fe(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;
    char in_T;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_T == '\x01') {
        *(u32 *)(ar5_00 + 0x4c) = 0;
        goto LAB_8c259332;
    }
    if (in_r0 == 1) {
        uVar1 = 1;
    } else {
        if (in_r0 == 2) {
            *(u32 *)(ar5_00 + 0x4c) = 2;
            goto LAB_8c259332;
        }
        if (in_r0 != 3)
            goto LAB_8c259332;
        uVar1 = 3;
    }
    *(u32 *)(ar5_00 + 0x4c) = uVar1;
LAB_8c259332:
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ta_draw_259358  0x8c259358
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_init
 */
u32 ta_draw_259358(int a0) {
    int *piVar1;
    u32 uVar2;
    int iVar3;

    piVar1 = 0x8c4aabbc;
    *(int *)*0x8c4aabbc = (int)0x2000;
    iVar3 = *piVar1;
    if (a0 == 0) {
        *(u32 *)(iVar3 + 0x50) = 0;
        goto LAB_8c259396;
    }
    if (a0 == 1) {
        uVar2 = 1;
    } else {
        if (a0 == 2) {
            *(u32 *)(iVar3 + 0x50) = 2;
            goto LAB_8c259396;
        }
        if (a0 != 3)
            goto LAB_8c259396;
        uVar2 = 3;
    }
    *(u32 *)(iVar3 + 0x50) = uVar2;
LAB_8c259396:
    ta_fifo_20f640(*piVar1);
    uVar2 = ta_load_texture_params(*piVar1);
    return uVar2;
}

/*
 * alt_entry_259362  0x8c259362
 * probably an entry 10 bytes into 8c259358: it reads registers that code sets before it
 */
u32 alt_entry_259362(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;
    char in_T;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_T == '\x01') {
        *(u32 *)(ar5_00 + 0x50) = 0;
        goto LAB_8c259396;
    }
    if (in_r0 == 1) {
        uVar1 = 1;
    } else {
        if (in_r0 == 2) {
            *(u32 *)(ar5_00 + 0x50) = 2;
            goto LAB_8c259396;
        }
        if (in_r0 != 3)
            goto LAB_8c259396;
        uVar1 = 3;
    }
    *(u32 *)(ar5_00 + 0x50) = uVar1;
LAB_8c259396:
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * thunk_FUN_8c20a13a  0x8c2593a6
 * called by: game_init
 */
u32 thunk_FUN_8c20a13a(void) {
    u32 uVar1;

    uVar1 = (g_8c20a13a)();
    return uVar1;
}

/*
 * ta_draw_2593ac  0x8c2593ac
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_init
 */
u32 ta_draw_2593ac(int a0) {
    int *piVar1;
    u32 uVar2;
    int iVar3;

    piVar1 = 0x8c4aabbc;
    *(u32 *)*0x8c4aabbc = 2;
    iVar3 = *piVar1;
    if (a0 == 0) {
        *(u32 *)(iVar3 + 0x18) = 0;
    } else if (a0 == 1) {
        *(u32 *)(iVar3 + 0x18) = 1;
    } else if (a0 == 2) {
        *(u32 *)(iVar3 + 0x18) = 2;
    } else if (a0 == 3) {
        *(u32 *)(iVar3 + 0x18) = 3;
    }
    ta_fifo_20f640(*piVar1);
    uVar2 = ta_load_texture_params(*piVar1);
    return uVar2;
}

/*
 * alt_entry_2593b4  0x8c2593b4
 * probably an entry 8 bytes into 8c2593ac: it reads registers that code sets before it
 */
u32 alt_entry_2593b4(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    int ar5_00;
    int *unaff_r14;

    *(u32 *)*unaff_r14 = a2;
    ar5_00 = *unaff_r14;
    if (in_r0 == 0) {
        *(u32 *)(ar5_00 + 0x18) = 0;
    } else if (in_r0 == 1) {
        *(u32 *)(ar5_00 + 0x18) = 1;
    } else if (in_r0 == 2) {
        *(u32 *)(ar5_00 + 0x18) = a2;
    } else if (in_r0 == 3) {
        *(u32 *)(ar5_00 + 0x18) = 3;
    }
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ta_draw_25940c  0x8c25940c
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 ta_draw_25940c(int a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 in_r0;
    u32 uVar2;

    piVar1 = 0x8c4aabbc;
    switch (in_r0) {
    case 0:
        a1 = 0;
        break;
    case 1:
        a1 = 1;
        break;
    case 2:
        a1 = 2;
        break;
    case 3:
        a1 = 3;
        break;
    case 4:
        a1 = 4;
        break;
    case 5:
        a1 = 5;
        break;
    case 6:
        a1 = 6;
        break;
    case 7:
        a1 = 7;
        break;
    case 8:
        a1 = 8;
        break;
    case 9:
        a1 = 9;
        break;
    case 10:
        a1 = 10;
        break;
    case 0xb:
        a1 = 0xb;
    }
    if (a0 == 0) {
        *(u32 *)*0x8c4aabbc = 0x40;
        *(u32 *)(*piVar1 + 0x2c) = a1;
    }
    if (a0 == 1) {
        *(int *)*piVar1 = (int)0x80;
        *(u32 *)(*piVar1 + 0x30) = a1;
    }
    ta_fifo_20f640(*piVar1, a1, a2, a3);
    uVar2 = ta_load_texture_params(*piVar1);
    return uVar2;
}

/*
 * ta_draw_2594a0  0x8c2594a0
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 ta_draw_2594a0(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;
    char in_T;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_T == '\x01') {
        *(u32 *)(ar5_00 + 0x40) = 1;
    } else if (in_r0 == 0) {
        *(u32 *)(ar5_00 + 0x40) = 0;
    }
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ta_draw_2594da  0x8c2594da
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 ta_draw_2594da(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;
    char in_T;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_T == '\x01') {
        *(u32 *)(ar5_00 + 0x44) = 1;
    } else if (in_r0 == 0) {
        *(u32 *)(ar5_00 + 0x44) = 0;
    }
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ta_draw_259526  0x8c259526
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 ta_draw_259526(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;
    char in_T;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_T == '\x01') {
        *(u32 *)(ar5_00 + 0x48) = 1;
    } else if (in_r0 == 0) {
        *(u32 *)(ar5_00 + 0x48) = 0;
    }
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ta_draw_259556  0x8c259556
 * area name: sits between ta functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_init
 */
u32 ta_draw_259556(int a0) {
    int *piVar1;
    u32 uVar2;
    int iVar3;

    piVar1 = 0x8c4aabbc;
    *(u32 *)*0x8c4aabbc = 0x20000;
    iVar3 = *piVar1;
    if (a0 == 3) {
        *(u32 *)(iVar3 + 0x60) = 0;
        goto LAB_8c259594;
    }
    if (a0 == 0) {
        uVar2 = 1;
    } else {
        if (a0 == 1) {
            *(u32 *)(iVar3 + 0x60) = 2;
            goto LAB_8c259594;
        }
        if (a0 != 2)
            goto LAB_8c259594;
        uVar2 = 3;
    }
    *(u32 *)(iVar3 + 0x60) = uVar2;
LAB_8c259594:
    ta_fifo_20f640(*piVar1);
    uVar2 = ta_load_texture_params(*piVar1);
    return uVar2;
}

/*
 * alt_entry_259560  0x8c259560
 * probably an entry 10 bytes into 8c259556: it reads registers that code sets before it
 */
u32 alt_entry_259560(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;
    char in_T;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_T == '\x01') {
        *(u32 *)(ar5_00 + 0x60) = 0;
        goto LAB_8c259594;
    }
    if (in_r0 == 0) {
        uVar1 = 1;
    } else {
        if (in_r0 == 1) {
            *(u32 *)(ar5_00 + 0x60) = 2;
            goto LAB_8c259594;
        }
        if (in_r0 != 2)
            goto LAB_8c259594;
        uVar1 = 3;
    }
    *(u32 *)(ar5_00 + 0x60) = uVar1;
LAB_8c259594:
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * ta_fifo_2595aa  0x8c2595aa
 * called by: date_time_message_draw, game_uses_Vec3_ctor_zero_0ff7d4, game_uses_touch_fields_30_3c_0ff928
 */
u32 ta_fifo_2595aa(int a0, u64 *a1, int a2, int a3) {
    u32 uVar1;
    u64 *puVar2;
    u64 *src;
    float fVar3;
    double in_dr2;
    double dVar4;
    u64 uVar5;
    double dVar6;
    float in_fr5;
    double dVar7;
    float fVar8;
    u64 in_xd2;
    u64 in_xd4;
    int iVar9;
    int iVar10;
    char cVar11;
    char cVar12;

    cVar12 = '\0';
    cVar11 = '\0';
    puVar2 = a1;
    if (g_8c277c6c == 1) {
        draw_state_save(1, a1, a2, a3);
        uVar1 = 0x80012;
        ta_fifo_237124(0x80012, puVar2, a2, a3);
        uVar1 = ta_sq_write_header4_short();
    } else {
        if (g_8c277c6c != 2)
            goto LAB_8c25962e;
        draw_state_save(2, a1, a2, a3);
        uVar1 = 0x2100012;
        ta_fifo_237124(0x2100012, puVar2, a2, a3);
        uVar1 = ta_sq_write_header5_short();
    }
    ta_set_list_addr(uVar1);
    draw_state_restore(uVar1);
LAB_8c25962e:
    if (g_8c277ad0 != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c7c);
        } else {
            in_xd2 = CONCAT44(g_8c277c80, g_8c277c7c);
        }
        if (cVar11 == '\0') {
            a3 = (int)SUB84(in_dr2, 0);
        } else {
            a3 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c78);
        } else {
            in_xd2 = CONCAT44(g_8c277c7c, g_8c277c78);
        }
        if (cVar11 == '\0') {
            a2 = (int)SUB84(in_dr2, 0);
        } else {
            a2 = (int)in_dr2;
        }
        puVar2 = NULL;
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 0, a2, a3);
    }
    if (g_8c277ad4 != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c7c);
        } else {
            in_xd2 = CONCAT44(g_8c277c80, g_8c277c7c);
        }
        if (cVar11 == '\0') {
            a3 = (int)SUB84(in_dr2, 0);
        } else {
            a3 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c78);
        } else {
            in_xd2 = CONCAT44(g_8c277c7c, g_8c277c78);
        }
        if (cVar11 == '\0') {
            a2 = (int)SUB84(in_dr2, 0);
        } else {
            a2 = (int)in_dr2;
        }
        puVar2 = (u64 *)0x1;
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 1, a2, a3);
    }
    if (g_8c277ad8 != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c7c);
        } else {
            in_xd2 = CONCAT44(g_8c277c80, g_8c277c7c);
        }
        if (cVar11 == '\0') {
            a3 = (int)SUB84(in_dr2, 0);
        } else {
            a3 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c78);
        } else {
            in_xd2 = CONCAT44(g_8c277c7c, g_8c277c78);
        }
        if (cVar11 == '\0') {
            a2 = (int)SUB84(in_dr2, 0);
        } else {
            a2 = (int)in_dr2;
        }
        puVar2 = (u64 *)0x2;
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 2, a2, a3);
    }
    if (g_8c277adc != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c7c);
        } else {
            in_xd2 = CONCAT44(g_8c277c80, g_8c277c7c);
        }
        if (cVar11 == '\0') {
            a3 = (int)SUB84(in_dr2, 0);
        } else {
            a3 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c78);
        } else {
            in_xd2 = CONCAT44(g_8c277c7c, g_8c277c78);
        }
        if (cVar11 == '\0') {
            a2 = (int)SUB84(in_dr2, 0);
        } else {
            a2 = (int)in_dr2;
        }
        puVar2 = (u64 *)0x3;
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 3, a2, a3);
    }
    if (g_8c277ae0 != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c7c);
        } else {
            in_xd2 = CONCAT44(g_8c277c80, g_8c277c7c);
        }
        if (cVar11 == '\0') {
            a3 = (int)SUB84(in_dr2, 0);
        } else {
            a3 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c277c78);
        } else {
            in_xd2 = CONCAT44(g_8c277c7c, g_8c277c78);
        }
        if (cVar11 == '\0') {
            a2 = (int)SUB84(in_dr2, 0);
        } else {
            a2 = (int)in_dr2;
        }
        puVar2 = (u64 *)0x4;
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 4, a2, a3);
    }
    *g_8c4aabbc = 0x10000000;
    g_8c4aabbc[0x2f] = a0;
    ta_fifo_20f640(g_8c4aabbc, puVar2, a2, a3);
    ta_load_texture_params(g_8c4aabbc);
    src = a1 + 1;
    if (g_8c277ad0 != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)((int)a1 + 4));
        } else {
            in_xd2 = *(u64 *)((int)a1 + 4);
        }
        if (cVar11 == '\0') {
            iVar9 = (int)SUB84(in_dr2, 0);
        } else {
            iVar9 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)a1);
        } else {
            in_xd2 = *a1;
        }
        if (cVar11 == '\0') {
            iVar10 = (int)SUB84(in_dr2, 0);
        } else {
            iVar10 = (int)in_dr2;
        }
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 0, iVar10, iVar9);
    }
    if (g_8c277ad4 != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)((int)a1 + 4));
        } else {
            in_xd2 = *(u64 *)((int)a1 + 4);
        }
        if (cVar11 == '\0') {
            iVar9 = (int)SUB84(in_dr2, 0);
        } else {
            iVar9 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)a1);
        } else {
            in_xd2 = *a1;
        }
        if (cVar11 == '\0') {
            iVar10 = (int)SUB84(in_dr2, 0);
        } else {
            iVar10 = (int)in_dr2;
        }
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 1, iVar10, iVar9);
    }
    if (g_8c277ad8 != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)((int)a1 + 4));
        } else {
            in_xd2 = *(u64 *)((int)a1 + 4);
        }
        if (cVar11 == '\0') {
            iVar9 = (int)SUB84(in_dr2, 0);
        } else {
            iVar9 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)a1);
        } else {
            in_xd2 = *a1;
        }
        if (cVar11 == '\0') {
            iVar10 = (int)SUB84(in_dr2, 0);
        } else {
            iVar10 = (int)in_dr2;
        }
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 2, iVar10, iVar9);
    }
    if (g_8c277adc != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)((int)a1 + 4));
        } else {
            in_xd2 = *(u64 *)((int)a1 + 4);
        }
        if (cVar11 == '\0') {
            iVar9 = (int)SUB84(in_dr2, 0);
        } else {
            iVar9 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)a1);
        } else {
            in_xd2 = *a1;
        }
        if (cVar11 == '\0') {
            iVar10 = (int)SUB84(in_dr2, 0);
        } else {
            iVar10 = (int)in_dr2;
        }
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 3, iVar10, iVar9);
    }
    if (g_8c277ae0 != 0) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)((int)a1 + 4));
        } else {
            in_xd2 = *(u64 *)((int)a1 + 4);
        }
        if (cVar11 == '\0') {
            iVar9 = (int)SUB84(in_dr2, 0);
        } else {
            iVar9 = (int)in_dr2;
        }
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)a1);
        } else {
            in_xd2 = *a1;
        }
        if (cVar11 == '\0') {
            iVar10 = (int)SUB84(in_dr2, 0);
        } else {
            iVar10 = (int)in_dr2;
        }
        kamui_uses_sq_copy_words_2122ea(&g_8c4aabdc, 4, iVar10, iVar9);
    }
    switch_jump(8, &g_8c277c78, a1);
    switch_jump(8, &g_8c277c80, src);
    uVar1 = (u32)((u64)in_dr2 >> 0x20);
    if (a0 == 2) {
        if (cVar12 == '\0') {
            in_dr2 = (double)CONCAT44(uVar1, *(u32 *)a1);
            dVar7 = (double)CONCAT44(0x42000000, in_fr5);
        } else {
            in_xd2 = *a1;
            dVar7 = 6442452000.0;
        }
        fVar8 = (float)((u64)dVar7 >> 0x20);
        if (cVar11 == '\0') {
            g_8c4aa4c4 = SUB84(in_dr2, 0) * fVar8;
        } else {
            g_8c4aa4c4 = SUB84(in_dr2 * dVar7, 0);
        }
        if (cVar12 == '\0') {
            dVar4 = (double)CONCAT44(*(u32 *)((int)a1 + 4), g_8c4aa4c4);
            dVar6 = (double)((u64)(u32)fVar8 << 0x20);
        } else {
            g_8c4aa4c4 = (float)in_xd2;
            dVar4 = *(double *)((int)a1 + 4);
            dVar6 = dVar7;
        }
        if (cVar11 == '\0') {
            dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * fVar8, SUB84(dVar4, 0));
        } else {
            dVar4 = dVar4 * dVar7;
        }
        g_8c4aa4c8 = (float)((u64)dVar4 >> 0x20);
        if (cVar12 == '\0') {
            g_8c4aa4d0 = 31.0;
            uVar5 = CONCAT44((int)*src, 0x41f80000);
        } else {
            g_8c4aa4c8 = SUB84(dVar4, 0);
            in_xd2 = 0xd63fe00441f80000;
            g_8c4aa4d0 = SUB84(dVar7, 0);
            uVar5 = *src;
            in_xd4 = in_xd2;
        }
        fVar8 = (float)((u64)dVar6 >> 0x20);
        if (cVar11 == '\0') {
            uVar5 = (u64)(u32)(fVar8 * (float)(uVar5 >> 0x20) + (float)uVar5);
        }
        if (cVar12 == '\0') {
            fVar3 = *(float *)((int)a1 + 0xc);
            g_8c4aa4cc = (float)uVar5;
        } else {
            g_8c4aa4cc = (float)in_xd2;
            fVar3 = (float)uVar5;
        }
        if (cVar11 == '\0') {
            g_8c4aa4d0 = fVar8 * fVar3 + g_8c4aa4d0;
        }
        if (cVar12 != '\0') {
            g_8c4aa4d0 = (float)in_xd4;
            g_8c4aa4d4 = (u32)((u64)in_xd4 >> 0x20);
        }
    } else {
        if (cVar12 == '\0') {
            g_8c4aa4c8 = 0.0;
            in_dr2 = (double)CONCAT44(uVar1, g_8c4aa4ac);
        } else {
            in_xd2 = CONCAT44(g_8c4aa4b0, g_8c4aa4ac);
            g_8c4aa4c8 = in_fr5;
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0xbf800000, in_fr5);
            g_8c4aa4d0 = -1.0;
            dVar6 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) + -1.0);
        } else {
            dVar7 = -(double)CONCAT44(0x3f800000, in_fr5);
            g_8c4aa4d0 = (float)((u64)dVar7 >> 0x20);
            dVar6 = in_dr2 + dVar7;
        }
        if (cVar12 == '\0') {
            g_8c4aa4cc = SUB84(dVar6, 0);
            dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), g_8c4aa4b0);
        } else {
            g_8c4aa4cc = (float)in_xd2;
            in_xd2 = CONCAT44(g_8c4aa4b4, g_8c4aa4b0);
        }
        if (cVar11 == '\0') {
            g_8c4aa4d0 = SUB84(dVar6, 0) + g_8c4aa4d0;
        } else {
            g_8c4aa4d0 = SUB84(dVar6 + dVar7, 0);
        }
        g_8c4aa4c4 = g_8c4aa4c8;
        if (cVar12 != '\0') {
            g_8c4aa4d0 = (float)in_xd2;
            g_8c4aa4d4 = (u32)((u64)in_xd2 >> 0x20);
        }
    }
    return 4;
}

/*
 * draw_state_copy_out  0x8c259968
 * copies the current 0xc0-byte polygon state and texture selection into a0
 */
u32 draw_state_copy_out(u32 a0) {
    memcpy_bytes(a0, g_8c4aabbc, 0xc0);
    g_8c4ab140 = g_8c277b10;
    g_8c4ab144 = g_8c277b14;
    return g_8c277b14;
}

/*
 * draw_state_copy_in  0x8c259988
 * loads a polygon state saved by draw_state_copy_out
 */
u32 *draw_state_copy_in(u32 a0) {
    u32 ar6_00;

    ar6_00 = 0xc0;
    memcpy_bytes(g_8c4aabbc, a0, 0xc0);
    ta_load_texture_params(g_8c4aabbc);
    g_8c277b10 = g_8c4ab140;
    g_8c277b14 = g_8c4ab144;
    return &g_8c277b10;
}

/*
 * thunk_FUN_8c207f80  0x8c2599ba
 * called by: ninja_uses_aica_reg_258604
 */
u32 thunk_FUN_8c207f80(void) {
    u32 uVar1;

    uVar1 = (g_8c207f80)();
    return uVar1;
}

/*
 * alt_entry_2599ca  0x8c2599ca
 * probably an entry 16 bytes into 8c2599ba: it reads registers that code sets before it
 */
u32 alt_entry_2599ca(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int in_r0;
    u32 uVar1;
    u32 in_r2;
    int ar5_00;
    int *unaff_r14;
    char in_T;

    *(u32 *)*unaff_r14 = in_r2;
    ar5_00 = *unaff_r14;
    if (in_T == '\x01') {
        *(u32 *)(ar5_00 + 100) = 1;
    } else if (in_r0 == 0) {
        *(u32 *)(ar5_00 + 100) = 0;
    }
    ta_fifo_20f640(*unaff_r14, ar5_00, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * draw_draw_helper_2599fa  0x8c2599fa
 * area name: sits between draw functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 draw_draw_helper_2599fa(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = pvr_draw_20a156(a0, a1, r6, r7, a0, a1);
    return uVar1;
}

/*
 * draw_draw_helper_259a1c  0x8c259a1c
 * area name: sits between draw functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_init, pvr_25825a
 */
u32 draw_draw_helper_259a1c(u32 a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = pvr_wrap_20a356(a0, r5, r6, r7, a0);
    return uVar1;
}

/*
 * draw_copy_259a70  0x8c259a70
 * area name: sits between draw functions (same compilation unit); behaviour name: mostly calls copy functions
 */
int draw_copy_259a70(u32 *a0) {
    float fVar1;
    u64 in_dr2;
    u32 uVar3;
    double dVar2;
    u32 in_fr5;
    double dVar4;
    double dVar5;
    u32 in_fr7;
    double dVar7;
    double in_xd2;
    bool bVar8;
    int iVar9;
    char cVar10;
    char cVar11;
    u8 auStack_d0[12];
    u32 uStack_c4;
    u32 uStack_bc;
    u32 uStack_a0;
    u32 uStack_9c;
    u8 auStack_50[20];
    u8 auStack_3c[20];
    int iStack_28;
    int iStack_24;
    float fVar6;

    uVar3 = (u32)((u64)in_dr2 >> 0x20);
    cVar11 = '\0';
    cVar10 = '\0';
    ta_fill_loop_20aacc(auStack_d0);
    *a0 = uStack_c4;
    a0[1] = uStack_bc;
    if ((u32)a0[2] < uStack_bc) {
        a0[2] = uStack_bc;
    }
    memcpy_bytes(a0 + 3, auStack_50, 0x14);
    memcpy_bytes(a0 + 8, auStack_3c, 0x14);
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x4f000000, in_fr7);
        in_fr5 = 0x3fa3d70a;
    } else {
        dVar7 = 0.03875000204425305;
    }
    fVar1 = (float)iStack_28;
    dVar2 = (double)CONCAT44(uVar3, fVar1);
    if (iStack_28 < 0) {
        if (cVar10 == '\0') {
            dVar2 = (double)CONCAT44(0x4f800000, fVar1 + 4.2949673e+09);
        } else {
            dVar2 = (double)CONCAT44(0x4f800000, fVar1) + (double)CONCAT44(0x4f800000, fVar1);
        }
    }
    dVar4 = in_xd2;
    if (cVar11 == '\0') {
        dVar4 = (double)CONCAT44(SUB84(dVar2, 0), in_fr5);
    }
    fVar1 = (float)((u64)dVar7 >> 0x20);
    if (cVar10 == '\0') {
        fVar6 = (float)((u64)dVar4 >> 0x20) * SUB84(dVar4, 0);
        dVar4 = (double)CONCAT44(fVar6, SUB84(dVar4, 0));
        bVar8 = fVar1 < fVar6;
    } else {
        dVar4 = dVar4 * dVar4;
        fVar6 = (float)((u64)dVar4 >> 0x20);
        bVar8 = dVar7 < dVar4;
    }
    dVar5 = dVar4;
    if (bVar8) {
        if (cVar11 == '\0') {
            dVar2 = (double)CONCAT44(0xcf800000, fVar6);
            dVar5 = in_xd2;
        } else {
            dVar2 = -1.803317530245569e-130;
        }
        if (cVar10 == '\0') {
            fVar6 = (float)((u64)dVar2 >> 0x20);
            dVar2 = (double)CONCAT44(fVar6, SUB84(dVar2, 0) + fVar6);
        } else {
            dVar2 = dVar2 + dVar2;
        }
    } else if (cVar11 == '\0') {
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), fVar6);
        dVar5 = in_xd2;
    }
    if (cVar10 == '\0') {
        iVar9 = (int)SUB84(dVar2, 0);
    } else {
        iVar9 = (int)dVar2;
    }
    a0[0xd] = iVar9;
    fVar6 = (float)iStack_24;
    dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), fVar6);
    if (iStack_24 < 0) {
        if (cVar10 == '\0') {
            dVar2 = (double)CONCAT44(0x4f800000, fVar6 + 4.2949673e+09);
        } else {
            dVar2 = (double)CONCAT44(0x4f800000, fVar6) + (double)CONCAT44(0x4f800000, fVar6);
        }
    }
    if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(SUB84(dVar2, 0), SUB84(dVar4, 0));
    }
    if (cVar10 == '\0') {
        fVar6 = (float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0);
        bVar8 = fVar1 < fVar6;
    } else {
        fVar6 = (float)((u64)(dVar5 * dVar5) >> 0x20);
        bVar8 = dVar7 < dVar5 * dVar5;
    }
    if (bVar8) {
        if (cVar11 == '\0') {
            dVar2 = (double)CONCAT44(0xcf800000, fVar6);
        } else {
            dVar2 = -1.803317530245569e-130;
        }
        if (cVar10 == '\0') {
            fVar1 = (float)((u64)dVar2 >> 0x20);
            dVar2 = (double)CONCAT44(fVar1, SUB84(dVar2, 0) + fVar1);
        } else {
            dVar2 = dVar2 + dVar2;
        }
    } else if (cVar11 == '\0') {
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), fVar6);
    }
    if (cVar10 == '\0') {
        iVar9 = (int)SUB84(dVar2, 0);
    } else {
        iVar9 = (int)dVar2;
    }
    a0[0xe] = iVar9;
    g_8c4aa734 = uStack_a0 | 0xa5000000;
    g_8c4aa738 = uStack_9c | 0xa5000000;
    a0[0xf] = *g_8c4aabdc - g_8c4aa4f4;
    a0[0x10] = g_8c4aabdc[1] - g_8c4aa4f8;
    a0[0x11] = g_8c4aabdc[2] - g_8c4aa4fc;
    a0[0x12] = g_8c4aabdc[3] - g_8c4aa500;
    iVar9 = g_8c4aabdc[4] - g_8c4aa504;
    a0[0x13] = iVar9;
    return iVar9;
}

/*
 * ninja_angle_sincos  0x8c259bd8
 * sin and cos of Ninja angle a0 (65536 units per turn)
 * called by: ninja_uses_ninja_angle_sincos_257148
 */
u32 ninja_angle_sincos(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float fVar1;

    fVar1 = ((float)(u16)a0 * 6.2831855) / 65536.0;
    sin(fVar1);
    cos(fVar1);
    return ain0;
}

/*
 * nj_file_open  0x8c259be8
 * opens file a0 for the Ninja loader and records its size and sector count; -2 on failure
 * called by: gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964, ninja_uses_ninja_close_file_256164
 */
u32 nj_file_open(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    g_8c4b3338 = gdfs_open_like(a0, 0, a2, a3);
    if ((g_8c4b3338 != 0) && (iVar1 = gdfs_get_size_like(g_8c4b3338, &g_8c277c9c), iVar1 != 0)) {
        g_8c277c98 = g_8c277c9c + 0x7ff >> 0xb;
        g_8c277c94 = 0;
        g_8c277ca0 = 0;
        g_8c277ca4 = 0;
        g_8c277ca8 = 0;
        g_8c277cac = 0;
        return 0;
    }
    g_8c4aa6b4 = 2;
    return 0xfffffffe;
}

/*
 * ninja_close_file  0x8c259c40
 * closes Ninja's file handle (0x8c4b3338) through gdfs_close_like
 * called by: gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964, ninja_uses_ninja_close_file_256164
 */
u32 ninja_close_file(void) {
    u32 uVar1;

    uVar1 = (g_8c1f309c)(g_8c4b3338);
    return uVar1;
}

/*
 * ninja_uses_memcpy_bytes_259c48  0x8c259c48
 * area name: in the ninja library code range; behaviour name: its main named callee is memcpy_bytes
 * called by: gfxlib_copy_238f2a, gfxlib_uses_ninja_close_file_239212, ninja_uses_ninja_close_file_256164,
 * pvrt_stream_is_palettized, ta_fifo_239012, tex_uses_dcache_writeback_range_25a770, tex_uses_gfx_heap_alloc_25a838,
 * tex_uses_nj_seek_25a216 (+1 more)
 */
u32 ninja_uses_memcpy_bytes_259c48(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 ar4_00;
    u32 ar6_00;
    int iVar5;
    u32 uVar6;

    if ((a1 != 0) && (a1 + g_8c277ca0 <= g_8c277c9c)) {
        iVar4 = g_8c277ca0;
        uVar6 = g_8c277c8c;
        iVar1 = libgcc_divide_helper_010468(g_8c277ca0, g_8c277c8c);
        uVar6 = iVar4 - uVar6 * iVar1;
        iVar4 = g_8c277c90;
        iVar2 = libgcc_divide_helper_010468(g_8c277c94, g_8c277c90);
        if ((iVar1 == iVar2) && (iVar2 = g_8c277c94, g_8c277ca8 != 0)) {
        LAB_8c259d32:
            g_8c277c94 = iVar2;
            if (uVar6 != g_8c277ca4) {
                g_8c277ca4 = uVar6;
            }
            g_8c277ca8 = g_8c277c8c - g_8c277ca4;
            if (g_8c277ca8 < a1) {
                uVar6 = 0;
                iVar4 = g_8c277c88;
                iVar1 = g_8c277c90;
                ar4_00 = g_8c4b3338;
                if (g_8c277ca8 != 0) {
                    memcpy_bytes(a0, g_8c277c88 + g_8c277ca4, g_8c277ca8);
                    g_8c277ca0 = g_8c277ca0 + g_8c277ca8;
                    uVar6 = g_8c277ca8;
                    iVar4 = g_8c277c88;
                    iVar1 = g_8c277c90;
                    ar4_00 = g_8c4b3338;
                }
                for (; g_8c277c88 = iVar4, g_8c277c90 = iVar1, g_8c4b3338 = ar4_00, uVar6 < a1;
                     uVar6 = uVar6 + ar6_00) {
                    ar6_00 = a1 - uVar6;
                    if (g_8c277c8c < ar6_00) {
                        iVar4 = libgcc_divide_helper_01051c(ar6_00, g_8c277c8c);
                        iVar1 = iVar1 * iVar4;
                        iVar5 = a0 + uVar6;
                        iVar2 = gdfs_calls_update_fields_1f31c6(ar4_00, iVar1, iVar5, a3);
                        if (iVar2 != 0) {
                            g_8c4aa6b8 = gdfs_get_stat_like(g_8c4b3338);
                            g_8c4aa6bc = gdfs_get_err_like(g_8c4b3338);
                            g_8c4aa6b4 = 5;
                            return 0xffffffff;
                        }
                        ar6_00 = g_8c277c8c * iVar4;
                        g_8c277ca0 = g_8c277ca0 + ar6_00;
                        g_8c277c94 = g_8c277c94 + g_8c277c90 * iVar4;
                        g_8c277ca4 = 0;
                    } else {
                        iVar2 = gdfs_calls_update_fields_1f31c6(ar4_00, iVar1, iVar4, a3);
                        if (iVar2 != 0) {
                            g_8c4aa6b8 = gdfs_get_stat_like(g_8c4b3338);
                            g_8c4aa6bc = gdfs_get_err_like(g_8c4b3338);
                            g_8c4aa6b4 = 5;
                            return 0xffffffff;
                        }
                        memcpy_bytes(a0 + uVar6, g_8c277c88, ar6_00);
                        g_8c277ca0 = g_8c277ca0 + ar6_00;
                        g_8c277c94 = g_8c277c94 + g_8c277c90;
                        g_8c277ca8 = g_8c277c8c - ar6_00;
                        g_8c277ca4 = ar6_00;
                    }
                    iVar4 = g_8c277c88;
                    iVar1 = g_8c277c90;
                    ar4_00 = g_8c4b3338;
                }
            } else {
                memcpy_bytes(a0, g_8c277c88 + g_8c277ca4, a1);
                g_8c277ca4 = g_8c277ca4 + a1;
                g_8c277ca0 = g_8c277ca0 + a1;
                g_8c277ca8 = g_8c277c8c - g_8c277ca4;
            }
            return 1;
        }
        iVar2 = gdFsSeek(g_8c4b3338, iVar1 * iVar4, 0);
        if (iVar2 == 0) {
            iVar5 = g_8c277c90;
            iVar3 = gdfs_calls_update_fields_1f31c6(g_8c4b3338, g_8c277c90, g_8c277c88, a3);
            iVar2 = iVar1 * iVar4;
            if (iVar3 == 0)
                goto LAB_8c259d32;
            g_8c4aa6b8 = gdfs_get_stat_like(g_8c4b3338);
            g_8c4aa6bc = gdfs_get_err_like(g_8c4b3338);
        }
    }
    g_8c4aa6b4 = 5;
    return 0xffffffff;
}

/*
 * ninja_uses_memcpy_bytes_259e80  0x8c259e80
 * area name: in the ninja library code range; behaviour name: its main named callee is memcpy_bytes
 */
u32 ninja_uses_memcpy_bytes_259e80(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 ar4_00;
    int iVar5;
    u32 uVar6;
    u32 uVar7;

    if ((a1 != 0) && (a1 + g_8c277ca0 <= g_8c277c9c)) {
        iVar4 = g_8c277ca0;
        uVar6 = g_8c277c8c;
        iVar1 = libgcc_divide_helper_010468(g_8c277ca0, g_8c277c8c);
        uVar6 = iVar4 - uVar6 * iVar1;
        iVar4 = g_8c277c90;
        iVar2 = libgcc_divide_helper_010468(g_8c277c94, g_8c277c90);
        if ((iVar1 == iVar2) && (iVar2 = g_8c277c94, g_8c277ca8 != 0)) {
        LAB_8c259f6a:
            g_8c277c94 = iVar2;
            if (uVar6 != g_8c277ca4) {
                g_8c277ca4 = uVar6;
            }
            g_8c277ca8 = g_8c277c8c - g_8c277ca4;
            if (g_8c277ca8 < a1) {
                uVar6 = 0;
                if (g_8c277ca8 != 0) {
                    memcpy_bytes(a0, g_8c277c88 + g_8c277ca4, g_8c277ca8);
                    g_8c277ca0 = g_8c277ca0 + g_8c277ca8;
                    uVar6 = g_8c277ca8;
                }
                iVar4 = g_8c277c88;
                iVar1 = g_8c277c90;
                ar4_00 = g_8c4b3338;
                if (a1 - uVar6 < g_8c277c9c - g_8c277ca0) {
                    for (; g_8c277c88 = iVar4, g_8c277c90 = iVar1, g_8c4b3338 = ar4_00, uVar6 < a1;
                         uVar6 = uVar6 + uVar7) {
                        uVar7 = a1 - uVar6;
                        if (g_8c277c8c < uVar7) {
                            iVar4 = libgcc_divide_helper_01051c(uVar7, g_8c277c8c);
                            iVar1 = iVar1 * iVar4;
                            iVar5 = a0 + uVar6;
                            iVar2 = gdfs_calls_update_fields_1f31c6(ar4_00, iVar1, iVar5, a3);
                            if (iVar2 != 0) {
                                g_8c4aa6b8 = gdfs_get_stat_like(g_8c4b3338);
                                g_8c4aa6bc = gdfs_get_err_like(g_8c4b3338);
                                g_8c4aa6b4 = 5;
                                return 0xffffffff;
                            }
                            uVar7 = g_8c277c8c * iVar4;
                            g_8c277ca0 = g_8c277ca0 + uVar7;
                            g_8c277c94 = g_8c277c94 + g_8c277c90 * iVar4;
                            g_8c277ca4 = 0;
                        } else {
                            iVar2 = gdfs_calls_update_fields_1f31c6(ar4_00, iVar1, iVar4, a3);
                            if (iVar2 != 0) {
                                g_8c4aa6b8 = gdfs_get_stat_like(g_8c4b3338);
                                g_8c4aa6bc = gdfs_get_err_like(g_8c4b3338);
                                g_8c4aa6b4 = 5;
                                return 0xffffffff;
                            }
                            memcpy_bytes(a0 + uVar6, g_8c277c88, uVar7);
                            g_8c277ca0 = g_8c277ca0 + uVar7;
                            g_8c277c94 = g_8c277c94 + g_8c277c90;
                            g_8c277ca8 = g_8c277c8c - uVar7;
                            g_8c277ca4 = uVar7;
                        }
                        iVar4 = g_8c277c88;
                        iVar1 = g_8c277c90;
                        ar4_00 = g_8c4b3338;
                    }
                } else {
                    uVar7 = (a1 - uVar6) + 0x7ff >> 0xb;
                    gdfs_calls_update_fields_1f31c6(g_8c4b3338, uVar7, a0 + uVar6, a3);
                    g_8c277ca0 = g_8c277ca0 + uVar7 * 0x800;
                    g_8c277c94 = 0;
                    g_8c277ca4 = 0;
                }
            } else {
                memcpy_bytes(a0, g_8c277c88 + g_8c277ca4, a1);
                g_8c277ca4 = g_8c277ca4 + a1;
                g_8c277ca0 = g_8c277ca0 + a1;
                g_8c277ca8 = g_8c277c8c - g_8c277ca4;
            }
            return 1;
        }
        iVar2 = gdFsSeek(g_8c4b3338, iVar1 * iVar4, 0);
        if (iVar2 == 0) {
            iVar5 = g_8c277c90;
            iVar3 = gdfs_calls_update_fields_1f31c6(g_8c4b3338, g_8c277c90, g_8c277c88, a3);
            iVar2 = iVar1 * iVar4;
            if (iVar3 == 0)
                goto LAB_8c259f6a;
            g_8c4aa6b8 = gdfs_get_stat_like(g_8c4b3338);
            g_8c4aa6bc = gdfs_get_err_like(g_8c4b3338);
        }
    }
    g_8c4aa6b4 = 5;
    return 0xffffffff;
}

/*
 * nj_seek  0x8c25a122
 * moves the position at 0x8c277ca0: a1 = 0 sets it, 1 adds a0, 2 sets it to size - a0
 * called by: gfxlib_uses_ninja_close_file_239212, pvrt_stream_is_palettized, tex_uses_dcache_writeback_range_25a770,
 * tex_uses_gfx_heap_alloc_25a838, tex_uses_nj_seek_25a216, vram_uses_nj_seek_25ae38
 */
int nj_seek(int a0, int a1) {
    int iVar1;

    if (a1 == 1) {
        iVar1 = g_8c277ca0 + a0;
    } else {
        iVar1 = a0;
        if ((a1 != 0) && (iVar1 = g_8c277ca0, a1 == 2)) {
            iVar1 = g_8c277c9c - a0;
        }
    }
    g_8c277ca0 = iVar1;
    return a1;
}

/*
 * filename_add_ext_if_missing  0x8c25a174
 * appends name a1 to a0 and then extension a2 unless the name already ends with it (case-insensitive)
 * called by: gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964
 */
u32 filename_add_ext_if_missing(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u8 *ar4_00;
    u32 ar5_00;
    u32 ain0;
    u32 in_stack_ffffffe8;

    ar5_00 = a1;
    ain0 = a2;
    uVar1 = log_message(a1, a1, a2);
    libc_calls_fill_loop_010998();
    ar4_00 = &stack0xffffffe8;
    strupr(ar4_00, ar5_00, a2, a3);
    uVar1 = ain0;
    if ((char)in_stack_ffffffe8 == '.') {
        ar4_00 = &stack0xffffffe8;
        iVar2 = strcmp_word(ar4_00, ain0);
        ar5_00 = ain0;
        if (iVar2 == 0) {
            libc_calls_fill_loop_010998();
            strcat(a0, a1);
            return 1;
        }
    }
    libc_calls_fill_loop_010998();
    strcat(a0, a1);
    strcat(a0, uVar1);
    return 1;
}

/*
 * tex_is_palettized  0x8c25a1ee
 * 1 for the palettised texture formats 0x500..0x800 (4- and 8-bit, with and without mipmaps)
 * called by: alt_entry_237830, alt_entry_2565d8, alt_entry_2567fe, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_2387a0, ninja_uses_tex_is_palettized_2565c4, ninja_uses_tex_is_palettized_2566c8,
 * ninja_uses_tex_is_palettized_2567f8
 */
u32 tex_is_palettized(int a0) {
    if ((((a0 != 0x500) && (a0 != 0x600)) && (a0 != 0x700)) && (a0 != 0x800)) {
        return 0;
    }
    return 1;
}

/*
 * tex_uses_nj_seek_25a216  0x8c25a216
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is nj_seek
 * called by: gfxlib_uses_tex_entry_alloc_23793c, gfxlib_uses_tex_entry_alloc_237964
 */
u32 tex_uses_nj_seek_25a216(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iStack_34;
    int *piStack_30;
    u8 auStack_2c[4];
    u32 uStack_28;
    u8 auStack_20[8];
    int iStack_18;

    piStack_30 = a0;
    nj_seek(0, 0);
    iStack_18 = -1;
    do {
        iVar1 = ninja_uses_memcpy_bytes_259c48(&iStack_34, 4, unused_a2, a3);
        if (iVar1 < 0) {
            return 0xfffffffc;
        }
        if (iStack_34 == 0x58494247) {
            nj_seek(0xfffffffc, 1);
            iVar1 = ninja_uses_memcpy_bytes_259c48(auStack_20, 0xc, unused_a2, a3);
        joined_r0x8c25a25e:
            if (iVar1 < 0) {
                return 0xfffffffc;
            }
        } else if (iStack_34 == 0x54525650) {
            iVar1 = ninja_uses_memcpy_bytes_259c48(auStack_2c, 0xc, unused_a2, a3);
            goto joined_r0x8c25a25e;
        }
        if (iStack_34 == 0x54525650) {
            nj_seek(0, 0);
            if (iStack_18 == -1) {
                while (iVar1 = tex_entry_find(g_8c277b08, g_8c277b0c, g_8c277b18), iVar1 != -1) {
                    g_8c277b18 = g_8c277b18 + -1;
                }
                *piStack_30 = g_8c277b18;
            } else {
                *piStack_30 = iStack_18;
            }
            uStack_28 = uStack_28 & 0xff00;
            if ((((uStack_28 == 0x500) || (uStack_28 == 0x600)) || (uStack_28 == 0x700)) || (uStack_28 == 0x800)) {
                uVar2 = 1;
            } else {
                uVar2 = 0;
            }
            return uVar2;
        }
    } while (true);
}

/*
 * tex_table_init  0x8c25a33c
 * records the texture table (a0, a1 entries of 0x44 bytes) and marks every entry empty
 * called by: ninja_uses_tex_table_init_25b34a
 */
u32 tex_table_init(int a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    int iVar2;
    int iVar3;

    iVar3 = 0;
    g_8c277b08 = a0;
    g_8c277b0c = a1;
    for (uVar1 = 0; uVar1 < g_8c277b0c; uVar1 = uVar1 + 1) {
        ain0 = 0x40;
        *(u32 *)(g_8c277b08 + iVar3) = 0xffffffff;
        *(u32 *)(g_8c277b08 + iVar3 + 4) = 0xffffffff;
        *(u32 *)(g_8c277b08 + iVar3 + 0x10) = 0;
        iVar2 = g_8c277b08 + iVar3;
        iVar3 = iVar3 + 0x44;
        *(u16 *)(iVar2 + 0x40) = 0;
    }
    g_8c277cb0 = 0;
    g_8c4aa5a4 = 0;
    return ain0;
}

/*
 * tex_entry_alloc  0x8c25a380
 * takes a free 0x44-byte entry in the texture table (0x8c277b08) and fills it from a1
 * called by: gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964, gfxlib_uses_tex_entry_alloc_2387a0, pvr_uses_tex_entry_alloc_23a29c
 */
u32 tex_entry_alloc(int *a0, u32 *a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;

    uVar2 = g_8c277cb0;
    if (*(int *)(g_8c277cb0 * 0x44 + g_8c277b08) != -1) {
        for (uVar2 = 0; (uVar2 < g_8c277b0c && (*(int *)(uVar2 * 0x44 + g_8c277b08) != -1)); uVar2 = uVar2 + 1) {
        }
    }
    if (uVar2 == g_8c277b0c - 1) {
        g_8c277cb0 = 0;
    } else {
        g_8c277cb0 = uVar2 + 1;
    }
    iVar3 = uVar2 * 0x44;
    *a0 = g_8c277b08 + iVar3;
    *(u32 *)(g_8c277b08 + iVar3 + 0x18) = a1[1];
    *(u32 *)(g_8c277b08 + iVar3 + 0x1c) = a1[2];
    *(u32 *)(g_8c277b08 + iVar3 + 0x20) = a1[3];
    *(u32 *)(g_8c277b08 + iVar3 + 0x24) = a1[4];
    *(u32 *)(g_8c277b08 + iVar3 + 0x28) = a1[5];
    *(u32 *)(g_8c277b08 + iVar3 + 0x2c) = a1[6];
    *(u32 *)(g_8c277b08 + iVar3 + 0x30) = a1[7];
    *(u32 *)(g_8c277b08 + iVar3 + 0x34) = a1[8];
    *(u32 *)(g_8c277b08 + iVar3 + 0x14) = *a1;
    *(u32 *)(g_8c277b08 + iVar3) = a2;
    *(u32 *)(g_8c277b08 + iVar3 + 4) = s0;
    *(u32 *)(g_8c277b08 + iVar3 + 0x10) = a3;
    *(u32 *)(g_8c277b08 + iVar3 + 0x10) = *(u32 *)(g_8c277b08 + iVar3 + 0x10) & 0xfffffff7;
    if ((a3 & 6) == 0) {
        uVar1 = 0x40;
        *(u16 *)(g_8c277b08 + iVar3 + 0x40) = 0;
    } else {
        *(u16 *)(g_8c277b08 + iVar3 + 0x40) = 1;
        uVar1 = tex_uses_tex_size_to_index_2571fe(g_8c277b08 + iVar3);
    }
    if (g_8c4aa5a4 <= uVar2) {
        g_8c4aa5a4 = g_8c4aa5a4 + 1;
    }
    return uVar1;
}

/*
 * alt_entry_25a394  0x8c25a394
 * probably an entry 20 bytes into 8c25a380: it reads registers that code sets before it
 */
u32 alt_entry_25a394(int *a0, u32 *a1, u32 a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12, u32 s16, u32 s20, u32 s24,
                     u32 s28) {
    u32 uVar1;
    u32 unaff_r8;
    u32 *unaff_r9;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int *unaff_r14;

    uVar2 = *unaff_r9;
    uVar3 = unaff_r8;
    if (*(int *)(uVar2 * 0x44 + *unaff_r14) != -1) {
        for (; (uVar2 = uVar3, uVar3 < g_8c277b0c && (*(int *)(uVar3 * 0x44 + *unaff_r14) != -1)); uVar3 = uVar3 + 1) {
        }
    }
    if (uVar2 == g_8c277b0c - 1) {
        *unaff_r9 = unaff_r8;
    } else {
        *unaff_r9 = uVar2 + 1;
    }
    iVar4 = uVar2 * 0x44;
    *a0 = *unaff_r14 + iVar4;
    *(u32 *)(*unaff_r14 + iVar4 + 0x18) = a1[1];
    *(u32 *)(*unaff_r14 + iVar4 + 0x1c) = a1[2];
    *(u32 *)(*unaff_r14 + iVar4 + 0x20) = a1[3];
    *(u32 *)(*unaff_r14 + iVar4 + 0x24) = a1[4];
    *(u32 *)(*unaff_r14 + iVar4 + 0x28) = a1[5];
    *(u32 *)(*unaff_r14 + iVar4 + 0x2c) = a1[6];
    *(u32 *)(*unaff_r14 + iVar4 + 0x30) = a1[7];
    *(u32 *)(*unaff_r14 + iVar4 + 0x34) = a1[8];
    *(u32 *)(*unaff_r14 + iVar4 + 0x14) = *a1;
    *(u32 *)(*unaff_r14 + iVar4) = a2;
    *(u32 *)(*unaff_r14 + iVar4 + 4) = s28;
    *(u32 *)(*unaff_r14 + iVar4 + 0x10) = a3;
    *(u32 *)(*unaff_r14 + iVar4 + 0x10) = *(u32 *)(*unaff_r14 + iVar4 + 0x10) & 0xfffffff7;
    if ((a3 & 6) == 0) {
        uVar1 = 0x40;
        *(short *)(*unaff_r14 + iVar4 + 0x40) = (short)unaff_r8;
    } else {
        *(u16 *)(*unaff_r14 + iVar4 + 0x40) = 1;
        uVar1 = tex_uses_tex_size_to_index_2571fe(*unaff_r14 + iVar4);
    }
    if (g_8c4aa5a4 <= uVar2) {
        g_8c4aa5a4 = g_8c4aa5a4 + 1;
    }
    return uVar1;
}

/*
 * tex_uses_libgcc_divide_helper_25a49e  0x8c25a49e
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is
 * libgcc_divide_helper_01051c called by: alt_entry_2565d8, alt_entry_2567fe, ninja_uses_tex_is_palettized_2565c4,
 * ninja_uses_tex_is_palettized_2566c8, ninja_uses_tex_is_palettized_2567f8, tex_entry_clear_flags_by_id
 */
int tex_uses_libgcc_divide_helper_25a49e(u32 *a0) {
    int iVar1;
    u32 uVar2;
    int *piVar3;

    piVar3 = &g_8c277b08;
    *a0 = 0xffffffff;
    a0[1] = 0xffffffff;
    uVar2 = 0;
    a0[2] = 0;
    a0[3] = 0;
    a0[5] = 0;
    a0[6] = 0;
    a0[7] = 0;
    a0[8] = 0;
    a0[9] = 0;
    a0[10] = 0;
    a0[0xb] = 0;
    a0[0xc] = 0;
    a0[0xd] = 0;
    a0[4] = 0;
    *(u16 *)(a0 + 0x10) = 0;
    iVar1 = libgcc_divide_helper_01051c((int)a0 - g_8c277b08, 0x44);
    if ((0 < g_8c4aa5a4) && (iVar1 == g_8c4aa5a4 + -1)) {
        while ((0 < g_8c4aa5a4 && (iVar1 = *(int *)((g_8c4aa5a4 + -1) * 0x44 + g_8c277b08), iVar1 == -1))) {
            g_8c4aa5a4 = g_8c4aa5a4 + -1;
        }
    }
    for (; (uVar2 < g_8c277b0c && (iVar1 = *(int *)(uVar2 * 0x44 + *piVar3), iVar1 != -1)); uVar2 = uVar2 + 1) {
    }
    g_8c277cb0 = uVar2;
    return iVar1;
}

/*
 * alt_entry_25a4a6  0x8c25a4a6
 * probably an entry 8 bytes into 8c25a49e: it reads registers that code sets before it
 */
int alt_entry_25a4a6(u32 *a0, u32 a1, u32 a2, int *a3, int ain0) {
    int iVar1;
    code *in_r2;
    u32 uVar2;

    *a0 = a1;
    a0[1] = a1;
    uVar2 = 0;
    a0[2] = 0;
    a0[3] = 0;
    a0[5] = 0;
    a0[6] = 0;
    a0[7] = 0;
    a0[8] = 0;
    a0[9] = 0;
    a0[10] = 0;
    a0[0xb] = 0;
    a0[0xc] = 0;
    a0[0xd] = 0;
    a0[4] = 0;
    *(u16 *)(ain0 + (int)a0) = 0;
    iVar1 = (*in_r2)((int)a0 - *a3, 0, a2, a3);
    if ((0 < g_8c4aa5a4) && (iVar1 == g_8c4aa5a4 + -1)) {
        while ((0 < g_8c4aa5a4 && (iVar1 = *(int *)((g_8c4aa5a4 + -1) * 0x44 + g_8c277b08), iVar1 == -1))) {
            g_8c4aa5a4 = g_8c4aa5a4 + -1;
        }
    }
    for (; (uVar2 < g_8c277b0c && (iVar1 = *(int *)(uVar2 * 0x44 + *a3), iVar1 != -1)); uVar2 = uVar2 + 1) {
    }
    g_8c277cb0 = uVar2;
    return iVar1;
}

/*
 * tex_entry_find  0x8c25a536
 * index of the texture-table entry (0x44 bytes each, a1 of them at a0) whose id is a2; -1 if none
 * called by: alt_entry_23729c, gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964, gfxlib_uses_tex_entry_alloc_2387a0, ninja_draw_into_texture_entry,
 * pvr_uses_tex_entry_alloc_23a29c, ta_select_texture_cached (+2 more)
 */
u32 tex_entry_find(int a0, u32 a1, int a2) {
    u32 uVar1;

    if ((a0 != 0) && (uVar1 = 0, a1 != 0)) {
        do {
            if (*(int *)(uVar1 * 0x44 + a0) == a2) {
                return uVar1;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < a1);
    }
    return 0xffffffff;
}

/*
 * array44_index_of  0x8c25a566
 * index of entry a2 in the array a0 of a1 0x44-byte entries, else -1
 * called by: alt_entry_2378ba, gfxlib_uses_array44_index_of_2378a6
 */
u32 array44_index_of(int a0, u32 a1, int a2) {
    int iVar1;
    u32 uVar2;
    int n;
    u32 d;

    if ((a2 != 0) && (a0 != 0)) {
        n = a2 - a0;
        d = 0x44;
        iVar1 = libgcc_divide_helper_0106dc(n, 0x44);
        if ((iVar1 == 0) && (uVar2 = libgcc_divide_helper_01051c(n, d), uVar2 < a1)) {
            return uVar2;
        }
    }
    return 0xffffffff;
}

/*
 * tex_entry_find_pair  0x8c25a5c0
 * index of the texture-table entry whose first two words are a2, a3; -1 if none
 * called by: gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964, gfxlib_uses_tex_entry_alloc_2387a0, pvr_uses_tex_entry_alloc_23a29c
 */
u32 tex_entry_find_pair(int a0, u32 a1, int a2, int a3) {
    u32 uVar1;

    if ((a0 != 0) && (uVar1 = 0, a1 != 0)) {
        do {
            if ((*(int *)(uVar1 * 0x44 + a0) == a2) && (*(int *)(uVar1 * 0x44 + a0 + 4) == a3)) {
                return uVar1;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < a1);
    }
    return 0xffffffff;
}

/*
 * tex_entry_set_flags  0x8c25a608
 * ORs a1 into the flags of every texture-table entry whose id is a0
 * called by: alt_entry_237830, gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964, gfxlib_uses_tex_entry_alloc_2387a0, gfxlib_uses_tex_entry_set_flags_23782c,
 * pvr_uses_tex_entry_alloc_23a29c
 */
u32 tex_entry_set_flags(int a0, u32 a1, int a2, u32 unused_a3, u32 ain0) {
    int *a4;
    u32 uVar1;
    int iVar2;

    iVar2 = 0;
    for (uVar1 = 0; uVar1 < g_8c277b0c; uVar1 = uVar1 + 1) {
        a4 = (int *)(g_8c277b08 + iVar2);
        if (*a4 == a0) {
            a4[4] = a4[4] | a1;
            a4[5] = a2;
            if ((a1 & 2) != 0) {
                *(short *)(a4 + 0x10) = (short)a4[0x10] + 1;
                ain0 = tex_uses_tex_size_to_index_2571fe(a4);
            }
        }
        iVar2 = iVar2 + 0x44;
    }
    return ain0;
}

/*
 * tex_entry_clear_flags_by_id  0x8c25a674
 * clears flags a1 on every texture entry with id a0 and releases an entry once it is no longer used
 * called by: alt_entry_2565d8, ninja_uses_tex_is_palettized_2565c4
 */
u32 tex_entry_clear_flags_by_id(int a0, u32 a1, u32 a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    int *a4;
    u32 uVar2;
    u32 uVar3;
    int iVar4;

    iVar4 = 0;
    uVar2 = ~a1;
    for (uVar3 = 0; uVar3 < g_8c277b0c; uVar3 = uVar3 + 1) {
        a4 = (int *)(g_8c277b08 + iVar4);
        if (*a4 == a0) {
            uVar1 = a4[4];
            a4[4] = uVar1 & uVar2;
            if ((uVar1 & uVar2 & 2) == 0) {
                ain0 = 0x40;
                a4[0xd] = 0;
                *(u16 *)(a4 + 0x10) = 0;
            }
            if ((a4[4] & 1U) == 0) {
                a4[5] = 0;
            }
            if ((a4[4] & 3U) == 0) {
                ain0 = tex_uses_libgcc_divide_helper_25a49e(a4);
            }
        }
        iVar4 = iVar4 + 0x44;
    }
    return ain0;
}

/*
 * tex_entry_addref  0x8c25a6ea
 * adds a reference (+0x40) to every texture-table entry whose id is a0
 * called by: gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964, gfxlib_uses_tex_entry_alloc_2387a0, pvr_uses_tex_entry_alloc_23a29c
 */
u32 tex_entry_addref(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    int *piVar1;
    u32 uVar2;

    piVar1 = g_8c277b08;
    for (uVar2 = 0; uVar2 < g_8c277b0c; uVar2 = uVar2 + 1) {
        if (*piVar1 == a0) {
            ain0 = 0x40;
            *(short *)(piVar1 + 0x10) = (short)piVar1[0x10] + 1;
        }
        piVar1 = piVar1 + 0x11;
    }
    return ain0;
}

/*
 * tex_entry_next_free  0x8c25a710
 * +0x14 of the next free texture-table entry
 * called by: gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964, gfxlib_uses_tex_entry_alloc_2387a0, pvr_uses_tex_entry_alloc_23a29c
 */
int tex_entry_next_free(void) {
    u32 uVar1;

    uVar1 = g_8c277cb0;
    if (*(int *)(g_8c277cb0 * 0x44 + g_8c277b08) != -1) {
        for (uVar1 = 0; (uVar1 < g_8c277b0c && (*(int *)(uVar1 * 0x44 + g_8c277b08) != -1)); uVar1 = uVar1 + 1) {
        }
    }
    return uVar1 * 0x44 + g_8c277b08 + 0x14;
}

/*
 * tex_uses_dcache_writeback_range_25a770  0x8c25a770
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is
 * dcache_writeback_range called by: gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964
 */
int tex_uses_dcache_writeback_range_25a770(int a0, int a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u8 *ar6_00;
    u32 ar6_01;
    u32 uVar5;
    int in_stack_ffffffc8;

    ar6_00 = &stack0xffffffc8;
    iVar1 = ninja_uses_nj_seek_25af3c(a1, *(u32 *)(a0 + 4), &stack0xffffffc8);
    if (-1 < iVar1) {
        uVar5 = *(u32 *)(a1 + 0x18);
        uVar3 = in_stack_ffffffc8 - 8;
        if ((int)uVar5 < (int)uVar3) {
            iVar1 = uVar3 - uVar5;
            uVar3 = uVar5;
        } else {
            iVar1 = 0;
        }
        ar6_01 = 0;
        uVar5 = g_8c4aa6d0;
        if (uVar3 <= g_8c4aa6d0) {
            uVar5 = uVar3;
        }
        if (0 < (int)uVar3) {
            do {
                uVar4 = uVar5;
                iVar2 = ninja_uses_memcpy_bytes_259c48(g_8c4aa6cc, uVar5, ar6_00, a3);
                if (iVar2 < 0) {
                    kamui_list_20cf88(a1 + 4);
                    return 0xffffffff;
                }
                dcache_writeback_range(g_8c4aa6cc, uVar5);
                ar6_00 = (u8 *)ar6_01;
                a3 = uVar5;
                ninja_uses_vram64_25ab02(a1 + 4, g_8c4aa6cc, ar6_01, uVar5);
                ar6_01 = ar6_01 + uVar5;
                uVar4 = uVar3 - ar6_01;
                if (uVar4 < g_8c4aa6d0) {
                    uVar5 = uVar4;
                }
                do {
                    iVar2 = pvr_calls_scan_loop_20a7e0();
                } while (iVar2 != 0);
            } while (ar6_01 != uVar3);
        }
        if (0 < iVar1) {
            nj_seek(iVar1, 1);
        }
        iVar1 = 1;
    }
    return iVar1;
}

/*
 * tex_uses_gfx_heap_alloc_25a838  0x8c25a838
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is
 * gfx_heap_alloc called by: gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964
 */
int tex_uses_gfx_heap_alloc_25a838(int a0, int *a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int ar4_00;
    int ain0;
    u32 ar5_00;
    u8 *ar6_00;
    int in_stack_ffffffd8;

    ar6_00 = &stack0xffffffd8;
    ar5_00 = *(u32 *)(a0 + 4);
    iVar1 = ninja_draw_25afc0(a1, ar5_00, &stack0xffffffd8);
    if (-1 < iVar1) {
        iVar1 = a1[6];
        in_stack_ffffffd8 = in_stack_ffffffd8 + -8;
        if (iVar1 < in_stack_ffffffd8) {
            ain0 = in_stack_ffffffd8 - iVar1;
            in_stack_ffffffd8 = iVar1;
        } else {
            ain0 = 0;
        }
        ar4_00 = gfx_heap_alloc(in_stack_ffffffd8);
        if (ar4_00 == 0) {
            g_8c4aa6b4 = 7;
            iVar1 = -7;
        } else {
            iVar1 = ninja_uses_memcpy_bytes_259c48(ar4_00, in_stack_ffffffd8, ar6_00, a3);
            if (iVar1 < 0) {
                iVar1 = -5;
            } else {
                dcache_writeback_range(ar4_00, in_stack_ffffffd8);
                if (0 < ain0) {
                    nj_seek(ain0, 1);
                }
                iVar1 = 1;
                *a1 = ar4_00;
            }
        }
    }
    return iVar1;
}

/*
 * tex_copy_to_alloc  0x8c25a8c0
 * copies a texture's data into newly allocated texture memory and writes the cache back; -7 when out of memory
 * called by: gfxlib_uses_tex_entry_alloc_23793c, gfxlib_uses_tex_entry_alloc_2387a0, pvr_uses_tex_entry_alloc_23a29c
 */
int tex_copy_to_alloc(u32 unused_a0, int *a1) {
    int iVar1;
    int ar4_00;
    iVar1 = tex_test_25a962(a1);
    if (-1 < iVar1) {
        iVar1 = a1[6];
        ar4_00 = gfx_heap_alloc(iVar1);
        if (ar4_00 == 0) {
            g_8c4aa6b4 = 7;
            iVar1 = -7;
        } else {
            memcpy_bytes(ar4_00, *a1, iVar1);
            dcache_writeback_range(ar4_00, iVar1);
            iVar1 = 1;
            *a1 = ar4_00;
        }
    }
    return iVar1;
}

/*
 * tex_calls_test_25a914  0x8c25a914
 * area name: sits between tex functions (same compilation unit); behaviour name: its callees mostly do: test
 * called by: alt_entry_237830, gfxlib_uses_ninja_close_file_239212, gfxlib_uses_tex_entry_alloc_23793c,
 * gfxlib_uses_tex_entry_alloc_237964, gfxlib_uses_tex_entry_alloc_2387a0, gfxlib_uses_tex_entry_set_flags_23782c,
 * pvr_uses_tex_entry_alloc_23a29c
 */
int tex_calls_test_25a914(u32 a0, u32 *a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;

    iVar2 = tex_test_25a962(a1);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = ninja_uses_vram64_25ab74(a1 + 1, *a1);
    puVar1 = (&pvr_calls_scan_loop_20a7e0);
    if (iVar2 == 0) {
        do {
            iVar2 = (*(code *)puVar1)();
        } while (iVar2 != 0);
        return 1;
    }
    kamui_list_20cf88(a1 + 1);
    g_8c4aa6b4 = 8;
    return 0xfffffff8;
}

/*
 * alt_entry_25a918  0x8c25a918
 * probably an entry 4 bytes into 8c25a914: it reads registers that code sets before it
 */
int alt_entry_25a918(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 *ar4_00;
    u32 ar5_00;
    u32 *unaff_r14;

    iVar2 = tex_test_25a962(a1);
    if (iVar2 < 0) {
        return iVar2;
    }
    ar5_00 = *unaff_r14;
    ar4_00 = unaff_r14 + 1;
    iVar2 = ninja_uses_vram64_25ab74(ar4_00, ar5_00);
    puVar1 = (&pvr_calls_scan_loop_20a7e0);
    if (iVar2 == 0) {
        do {
            iVar2 = (*(code *)puVar1)(ar4_00, ar5_00, a2, a3);
        } while (iVar2 != 0);
        return 1;
    }
    kamui_list_20cf88(unaff_r14 + 1);
    g_8c4aa6b4 = 8;
    return 0xfffffff8;
}

/*
 * tex_test_25a962  0x8c25a962
 * area name: sits between tex functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: alt_entry_25a918, tex_calls_test_25a914, tex_copy_to_alloc
 */
u32 tex_test_25a962(int a0) {
    int iVar1;

    iVar1 = (*(code *)(&gfxlib_uses_ta_fifo_233e10))(a0 + 4, *(u32 *)(a0 + 0x10), *(u32 *)(a0 + 0x14),
                                                     *(u32 *)(a0 + 4) >> 0x10);
    if (iVar1 != 0) {
        g_8c4aa6b4 = 6;
        return 0xfffffffa;
    }
    return 1;
}

/*
 * alt_entry_25a966  0x8c25a966
 * probably an entry 4 bytes into 8c25a962: it reads registers that code sets before it
 */
u32 alt_entry_25a966(int a0) {
    int iVar1;
    int unaff_r14;

    iVar1 = (*(code *)(&gfxlib_uses_ta_fifo_233e10))(a0 + 4, *(u32 *)(unaff_r14 + 0x10), *(u32 *)(unaff_r14 + 0x14),
                                                     *(u32 *)(unaff_r14 + 4) >> 0x10);
    if (iVar1 != 0) {
        g_8c4aa6b4 = 6;
        return 0xfffffffa;
    }
    return 1;
}

/*
 * tex_uses_vram64_25a9cc  0x8c25a9cc
 * area name: sits between tex functions (same compilation unit); behaviour name: its main named callee is vram64_20a8e0
 * called by: ninja_uses_vram64_25ab02
 */
u32 tex_uses_vram64_25a9cc(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 ar6_00;
    iVar1 = ta_test_213a04(*(u32 *)(a0 + 0xc), *(u32 *)(a0 + 0x10));
    iVar1 = iVar1 * 4;
    if ((*(u32 *)(a0 + 0x18) & 1) == 0) {
        uVar2 = *(u32 *)(&g_8c277ce0 + iVar1);
        uVar3 = *(u32 *)(&g_8c277d18 + iVar1);
    } else {
        uVar2 = *(u32 *)(&g_8c277cfc + iVar1);
        uVar3 = *(int *)(&g_8c277d34 + iVar1) + 10;
    }
    ar6_00 = 0;
    uVar4 = 0;
    if (a2 <= uVar2) {
        uVar4 = uVar2 - a2;
        if (a3 <= uVar4)
            goto LAB_8c25aa36;
        a3 = a3 - uVar4;
    }
    ar6_00 = a3;
    a3 = uVar4;
    if (uVar3 < ar6_00) {
        ar6_00 = uVar3;
    }
LAB_8c25aa36:
    if (a3 == 0) {
        if (ar6_00 == 0) {
            return 0;
        }
        iVar1 = (*(int *)(a0 + 0x1c) + a2) - uVar2;
    } else {
        iVar1 = *(int *)(a0 + 0x1c) + a2;
        vram64_20a8e0(iVar1, a1, a3);
        if (ar6_00 == 0) {
            return 0;
        }
        a1 = a1 + a3;
    }
    vram64_20a8e0(iVar1 + 0x800, a1, ar6_00);
    return 0;
}

/*
 * ninja_uses_vram64_25aa80  0x8c25aa80
 * area name: in the ninja library code range; behaviour name: its main named callee is vram64_20a8e0
 * called by: ninja_uses_vram64_25ab74
 */
u32 ninja_uses_vram64_25aa80(int a0, int a1) {
    int iVar1;
    int ar6_00;
    int ar4_00;

    iVar1 = ta_test_213a04(*(u32 *)(a0 + 0xc), *(u32 *)(a0 + 0x10));
    iVar1 = iVar1 * 4;
    if ((*(u32 *)(a0 + 0x18) & 1) == 0) {
        ar6_00 = *(int *)(&g_8c277ce0 + iVar1);
        iVar1 = *(int *)(&g_8c277d18 + iVar1);
    } else {
        ar6_00 = *(int *)(&g_8c277cfc + iVar1);
        iVar1 = *(int *)(&g_8c277d34 + iVar1) + 10;
    }
    ar4_00 = *(int *)(a0 + 0x1c);
    vram64_20a8e0(ar4_00, a1, ar6_00);
    vram64_20a8e0(ar4_00 + 0x800, a1 + ar6_00, iVar1);
    return 0;
}

/*
 * ninja_uses_vram64_25ab02  0x8c25ab02
 * area name: in the ninja library code range; behaviour name: its main named callee is vram64_20a8e0
 * called by: ninja_uses_vram64_25ac94, tex_uses_dcache_writeback_range_25a770
 */
u32 ninja_uses_vram64_25ab02(u32 *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar6_00;
    u32 uVar2;
    u32 uVar3;

    uVar2 = a3 & 0xfffffffc;
    if (uVar2 != 0) {
        if ((*a0 & 0xffff) == 3) {
            tex_uses_vram64_25a9cc(a0, a1, a2, a3);
        } else {
            if ((*a0 >> 0x10 & 0xff00) == (int)0x200) {
                iVar1 = 4;
            } else {
                iVar1 = 0;
            }
            uVar3 = (a2 & 0xfffffffc) + iVar1;
            ar6_00 = a0[5] - uVar3;
            if (a0[5] <= uVar3) {
                return 7;
            }
            if (uVar2 < ar6_00) {
                ar6_00 = uVar2;
            }
            vram64_20a8e0(uVar3 + a0[7], a1, ar6_00);
        }
    }
    return 0;
}

/*
 * ninja_uses_vram64_25ab74  0x8c25ab74
 * area name: in the ninja library code range; behaviour name: its main named callee is vram64_20a8e0
 * called by: alt_entry_25a918, tex_calls_test_25a914
 */
u32 ninja_uses_vram64_25ab74(u32 *a0, u32 a1) {
    int iVar1;
    u32 ar4_00;
    u32 ar6_00;

    if ((*a0 & 0xffff) == 3) {
        ninja_uses_vram64_25aa80(a0, a1);
    } else {
        if ((*a0 >> 0x10 & 0xff00) == 0x200) {
            iVar1 = ta_test_213a04(a0[3], a0[4]);
            ar6_00 = *(int *)(&g_8c277d50 + iVar1 * 4) + 4;
            ar4_00 = a0[7] + 4;
        } else {
            ar4_00 = a0[7];
            ar6_00 = a0[5];
        }
        vram64_20a8e0(ar4_00, a1, ar6_00);
    }
    return 0;
}

/*
 * pvr_parse_header  0x8c25abf0
 * walks a PVR file's chunks: GBIX sets *a1 to the global index, PVRT copies the 8-byte header to a0
 * called by: gfxlib_uses_tex_entry_alloc_23793c, gfxlib_uses_tex_entry_alloc_2387a0
 */
int *pvr_parse_header(u32 a0, int *a1, int *a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;

    iVar2 = 0x54525650;
    puVar1 = (&memcpy_bytes);
    *a1 = -1;
    do {
        iVar4 = *a2;
        if (iVar4 == 0x54525650) {
            (*(code *)puVar1)(a0, a2 + 2, 8, a3);
            a2 = a2 + 4;
        } else {
            if (iVar4 != 0x58494247) {
                return (int *)0;
            }
            uVar3 = a2[1];
            *a1 = a2[2];
            a2 = (int *)((int)(a2 + 2) + (uVar3 & 0xfffffffc));
        }
    } while (iVar4 != iVar2);
    return a2;
}

/*
 * ninja_test_25ac56  0x8c25ac56
 * area name: in the ninja library code range; behaviour name: returns the result of a comparison
 */
u32 ninja_test_25ac56(int a0, u32 *a1) {
    int iVar1;

    iVar1 =
        (*(code *)(&gfxlib_uses_ta_fifo_233e10))(a0 + 0x18, (u32) * (u16 *)(a1 + 1), (u32) * (u16 *)((int)a1 + 6), *a1);
    if (iVar1 != 0) {
        g_8c4aa6b4 = 6;
        return 0xffffffff;
    }
    return 1;
}

/*
 * ninja_uses_vram64_25ac94  0x8c25ac94
 * area name: in the ninja library code range; behaviour name: its callees mostly do: uses_vram64
 */
u32 ninja_uses_vram64_25ac94(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = ninja_uses_vram64_25ab02(a0 + 0x18, a1, a2, a3);
    if (iVar1 != 0) {
        g_8c4aa6b4 = 8;
        return 0xffffffff;
    }
    return 1;
}

/*
 * ninja_uses_vram64_25acc2  0x8c25acc2
 * area name: in the ninja library code range; behaviour name: its callees mostly do: uses_vram64
 */
u32 ninja_uses_vram64_25acc2(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 in_r3;
    int unaff_r14;

    if (((in_r3 & *(u32 *)(unaff_r14 + 0x18)) == 0) && ((*(u32 *)(unaff_r14 + 0x18) & 0x11000000) == 0)) {
        iVar1 = kamui_uses_vram64_20cc56(unaff_r14 + 0x18, a1, a2, a3);
    } else {
        g_8c277cd4 = *(int *)(unaff_r14 + 0x34) + -4;
        iVar1 = kamui_uses_vram64_20cc56(&g_8c277cb8, a1, a2, a3);
    }
    if (iVar1 == 0) {
        return 1;
    }
    g_8c4aa6b4 = 8;
    return 0xffffffff;
}

/*
 * vram64_25ad0a  0x8c25ad0a
 */
u32 vram64_25ad0a(int a0, u32 a1, int a2, u32 a3) {
    if (a0 == 0) {
        return 0xffffffff;
    }
    vram_fill_loop_25ad98(a1, (*(u32 *)(a0 + 0x34) | 0xa4000000) + a2, a3);
    return 1;
}

/*
 * vram_calls_scan_loop_25ad42  0x8c25ad42
 * area name: sits between vram functions (same compilation unit); behaviour name: its callees mostly do:
 * calls_scan_loop
 */
u32 vram_calls_scan_loop_25ad42(void) {
    int iVar1;

    iVar1 = pvr_calls_scan_loop_20a7e0();
    if (iVar1 == 0) {
        return 1;
    }
    return 0xffffffff;
}

/*
 * vram_fill_loop_25ad98  0x8c25ad98
 * area name: sits between vram functions (same compilation unit); behaviour name: a loop that writes memory
 * called by: vram64_25ad0a
 */
u32 vram_fill_loop_25ad98(u32 *a0, u32 *a1, u32 a2) {
    u32 uVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;

    uVar1 = (u32)a0 | (u32)a1 | a2;
    if ((uVar1 & 0x1f) == 0) {
        uVar3 = a2 >> 5;
        do {
            uVar4 = *a1;
            uVar5 = a1[1];
            uVar6 = a1[2];
            uVar7 = a1[3];
            a1 = a1 + 4;
            *a0 = uVar1;
            a0[7] = uVar7;
            a0[6] = uVar6;
            a0[5] = uVar5;
            a0[4] = uVar4;
            uVar3 = uVar3 - 1;
            a0 = a0 + 0xc;
        } while (uVar3 != 0);
        return uVar1;
    }
    if ((uVar1 & 0xf) == 0) {
        uVar3 = a2 >> 4;
        do {
            uVar4 = *a1;
            puVar2 = a1 + 1;
            a1 = a1 + 2;
            uVar3 = uVar3 - 1;
            a0[3] = *puVar2;
            a0[2] = uVar4;
            a0 = a0 + 6;
        } while (uVar3 != 0);
        return uVar1;
    }
    if ((uVar1 & 7) == 0) {
        uVar3 = a2 >> 3;
        do {
            uVar4 = *a1;
            a1 = a1 + 1;
            uVar3 = uVar3 - 1;
            *a0 = uVar4;
            a0 = a0 + 2;
        } while (uVar3 != 0);
        return uVar1;
    }
    if ((uVar1 & 3) == 0) {
        uVar1 = a2 >> 2;
        do {
            uVar3 = *a1;
            a1 = a1 + 1;
            uVar1 = uVar1 - 1;
            *a0 = uVar3;
            a0 = a0 + 1;
        } while (uVar1 != 0);
        return uVar3;
    }
    if ((uVar1 & 1) == 0) {
        uVar1 = a2 >> 1;
        do {
            uVar3 = *a1;
            a1 = (u32 *)((int)a1 + 2);
            uVar1 = uVar1 - 1;
            *(short *)a0 = (short)uVar3;
            a0 = (u32 *)((int)a0 + 2);
        } while (uVar1 != 0);
        return (int)(short)uVar3;
    }
    do {
        uVar1 = *a1;
        a1 = (u32 *)((int)a1 + 1);
        a2 = a2 - 1;
        *(char *)a0 = (char)uVar1;
        a0 = (u32 *)((int)a0 + 1);
    } while (a2 != 0);
    return (int)(char)uVar1;
}

/*
 * vram_uses_nj_seek_25ae38  0x8c25ae38
 * area name: sits between vram functions (same compilation unit); behaviour name: its main named callee is nj_seek
 * called by: ninja_draw_25afc0, ninja_uses_nj_seek_25af3c
 */
u32 vram_uses_nj_seek_25ae38(u32 *a0, u32 *a1, u32 *a2, u32 *a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    int iStack_2c;
    u32 uStack_28;
    u32 *puStack_24;
    u32 *puStack_20;
    u32 *puStack_1c;
    u32 *puStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u16 uStack_c;
    u16 uStack_a;

    puStack_24 = a0;
    puStack_20 = a1;
    puStack_1c = a2;
    puStack_18 = a3;
    do {
        puVar1 = (&ninja_uses_memcpy_bytes_259c48);
        iVar2 = ninja_uses_memcpy_bytes_259c48(&iStack_2c, 4, a2, a3);
        if (iVar2 < 0) {
            return 0xffffffff;
        }
        if (iStack_2c == 0x54525650) {
            iVar2 = (*(code *)puVar1)(&uStack_14, 0xc, a2, a3);
            if (iVar2 < 0) {
                return 0xffffffff;
            }
        } else {
            iVar2 = (*(code *)puVar1)(&uStack_28, 4, a2, a3);
            if (iVar2 < 0) {
                return 0xffffffff;
            }
            nj_seek(uStack_28, 1);
        }
        iVar2 = 0x8c4aa6ac;
    } while (iStack_2c != 0x54525650);
    *puStack_18 = uStack_14;
    *puStack_24 = (u32)uStack_c;
    uVar3 = *puStack_24;
    if ((((uVar3 == 8) || (uVar3 == 0x10)) || (uVar3 == 0x20)) ||
        (((uVar3 == 0x40 || (uVar3 == (int)0x80)) ||
          ((uVar3 == (int)0x100 || ((uVar3 == (int)0x200 || (uVar3 == (int)0x400)))))))) {
        *puStack_20 = (u32)uStack_a;
        uVar3 = *puStack_20;
        if ((uVar3 == 8) || (((((uVar3 == 0x10 || (uVar3 == 0x20)) || (uVar3 == 0x40)) ||
                               ((uVar3 == (int)0x80 || (uVar3 == (int)0x100)))) ||
                              ((uVar3 == (int)0x200 || (uVar3 == (int)0x400)))))) {
            *puStack_1c = uStack_10;
            return 1;
        }
    }
    *(u32 *)(iVar2 + 8) = 4;
    return 0xfffffffc;
}

/*
 * ninja_uses_nj_seek_25af3c  0x8c25af3c
 * area name: in the ninja library code range; behaviour name: its callees mostly do: uses_nj_seek
 * called by: tex_uses_dcache_writeback_range_25a770
 */
int ninja_uses_nj_seek_25af3c(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    uStack_10 = a1;
    iVar1 = vram_uses_nj_seek_25ae38(&uStack_18, &uStack_14, &uStack_1c, a2);
    if (iVar1 < 0) {
        return iVar1;
    }
    if ((uStack_1c == (int)0xe00) && ((uStack_10 & 0x400000) != 0)) {
        uStack_1c = uStack_1c & 0xff | (int)0xf00;
    }
    iVar1 = gfxlib_uses_ta_fifo_233e10(a0 + 4, uStack_18, uStack_14, uStack_1c);
    if (iVar1 != 0) {
        g_8c4aa6b4 = 6;
        return 0xfffffffa;
    }
    *(u32 *)(a0 + 4) = *(u32 *)(a0 + 4) | uStack_1c << 0x10 & 0xffff0000 | *(u32 *)(a0 + 4) & 0xffff;
    return 1;
}

/*
 * ninja_draw_25afc0  0x8c25afc0
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: tex_uses_gfx_heap_alloc_25a838
 */
int ninja_draw_25afc0(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    int iStack_10;
    u32 uStack_c;

    iStack_10 = a0;
    uStack_c = a1;
    iVar1 = vram_uses_nj_seek_25ae38(&uStack_18, &uStack_14, &uStack_1c, a2);
    if (iVar1 < 0) {
        return iVar1;
    }
    if ((uStack_1c == (int)0xe00) && ((uStack_c & 0x400000) != 0)) {
        uStack_1c = uStack_1c & 0xff | (int)0xf00;
    }
    iVar1 = ta_fifo_2137c0(iStack_10 + 4, uStack_18, uStack_14, uStack_1c);
    if (iVar1 != 0) {
        g_8c4aa6b4 = 6;
        return 0xfffffffa;
    }
    return 1;
}

/*
 * ninja_draw_25b044  0x8c25b044
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: game_draw_0154c4, game_draw_015e18
 */
u32 ninja_draw_25b044(int a0) {
    u32 uVar1;
    int ar6_00;
    int ar7_00;
    int iVar2;

    uVar1 = 0;
    iVar2 = *(int *)(*g_8c277b04 + a0 * 0xc + 8);
    ar6_00 = *(int *)(iVar2 + 0x24) + -1;
    ar7_00 = *(int *)(iVar2 + 0x28) + -1;
    pvr_set_clip_rect(0, 0, ar6_00, ar7_00);
    kamui_draw_20bdc0(iVar2 + 0x18, uVar1, ar6_00, ar7_00);
    uVar1 = pvr_set_clip_rect(0, 0, g_8c4aa508 + -1, g_8c4aa50c + -1);
    return uVar1;
}

/*
 * alt_entry_25b052  0x8c25b052
 * probably an entry 14 bytes into 8c25b044: it reads registers that code sets before it
 */
u32 alt_entry_25b052(int a0) {
    code *in_r2;
    u32 *in_r3;
    u32 uVar1;
    int ar6_00;
    int ar7_00;
    int iVar2;

    uVar1 = 0;
    iVar2 = *(int *)(*(int *)*in_r3 + a0 + 8);
    ar6_00 = *(int *)(iVar2 + 0x24) + -1;
    ar7_00 = *(int *)(iVar2 + 0x28) + -1;
    (*in_r2)(0, 0, ar6_00, ar7_00);
    kamui_draw_20bdc0(iVar2 + 0x18, uVar1, ar6_00, ar7_00);
    uVar1 = pvr_set_clip_rect(0, g_8c4aa508 + -1, g_8c4aa50c + -1);
    return uVar1;
}

/*
 * ninja_draw_into_texture_entry  0x8c25b08a
 * finds texture entry a0, clips to its size, draws into its surface and restores the screen clip rectangle
 */
u32 ninja_draw_into_texture_entry(u32 a0) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int ar7_00;

    iVar1 = tex_entry_find(g_8c277b08, g_8c277b0c, a0);
    if (-1 < iVar1) {
        uVar2 = 0;
        iVar3 = iVar1 * 0x44 + g_8c277b08;
        ar7_00 = *(int *)(iVar3 + 0x28) + -1;
        iVar3 = *(int *)(iVar3 + 0x24) + -1;
        pvr_set_clip_rect(0, 0, iVar3, ar7_00);
        kamui_draw_20bdc0(iVar1 * 0x44 + g_8c277b08 + 0x18, uVar2, iVar3, ar7_00);
        uVar2 = pvr_set_clip_rect(0, 0, g_8c4aa508 + -1, g_8c4aa50c + -1);
        return uVar2;
    }
    return iVar1;
}

/*
 * ninja_calc_25b100  0x8c25b100
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 * called by: C3DRenderPly_SetMem, game_uses_malloc_thunk_015f18
 */
u32 ninja_calc_25b100(void) {
    u32 uVar1;

    uVar1 = (g_8c20c8e0)();
    return uVar1;
}

/*
 * write_u32_le  0x8c25b10c
 * stores a0 little-endian at a1 (any alignment)
 * called by: ninja_uses_write_u32_le_25b12e
 */
u32 write_u32_le(u32 a0, u8 *a1) {
    *a1 = (char)a0;
    a1[1] = (char)(a0 >> 8);
    a1[2] = (char)(a0 >> 0x10);
    a1[3] = (char)(a0 >> 0x18);
    return a0 >> 0x18;
}

/*
 * put_u16_le  0x8c25b124
 * stores a0 as a little-endian u16 at a1
 * called by: ninja_uses_write_u32_le_25b12e
 */
u32 put_u16_le(u32 a0, u8 *a1) {
    *a1 = (char)a0;
    a1[1] = (char)(a0 >> 8);
    return a0 >> 8;
}

/*
 * ninja_uses_write_u32_le_25b12e  0x8c25b12e
 * area name: in the ninja library code range; behaviour name: its main named callee is write_u32_le
 */
u32 ninja_uses_write_u32_le_25b12e(int a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 s0, u32 s4, u32 s8, u32 s12,
                                   u32 s16, u32 s20) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u8 *puVar5;
    int a4;
    int a4_00;
    u8 *ar4_00;
    u8 *puVar6;
    int aiStack_24[2];

    iVar1 = (int)(int)0xffffff24;
    *(u32 *)((int)aiStack_24 + iVar1 + 4) = a1;
    ta_fill_loop_20aacc(&stack0xffffffe4 + iVar1);
    iVar3 = 0x8c4aa70c;
    if (g_8c4aa6f8 == *(int *)((int)&s20 + iVar1)) {
        iVar3 = 0x8c4aa6e4;
    }
    a4 = *(int *)(iVar3 + 0x10);
    a4_00 = *(int *)(iVar3 + 0xc);
    ar4_00 = *(u8 **)((int)aiStack_24 + iVar1 + 4);
    *(int *)((int)aiStack_24 + 0xd0 + iVar1 + 4) = a4_00 * a4 * 3;
    uVar2 = kamui_uses_vram_20d082(ar4_00, iVar3);
    if (a0 != 0) {
        put_u16_le((int)0x4d42, a0);
        write_u32_le(*(u32 *)((int)aiStack_24 + 0xd0 + iVar1 + 4), a0 + 2);
        write_u32_le(0, a0 + 6);
        write_u32_le(0x36, a0 + 10);
        write_u32_le(0x28, a0 + 0xe);
        write_u32_le(a4_00, a0 + 0x12);
        write_u32_le(a4, a0 + 0x16);
        put_u16_le(1, a0 + 0x1a);
        put_u16_le(0x18, a0 + 0x1c);
        write_u32_le(0, a0 + 0x1e);
        write_u32_le(0, a0 + 0x22);
        write_u32_le(0, a0 + 0x26);
        write_u32_le(0, a0 + 0x2a);
        write_u32_le(0, a0 + 0x2e);
        write_u32_le(0, a0 + 0x32);
        iVar3 = g_8c4aa4e8;
        iVar4 = a4 + -1;
        if (iVar3 == 0) {
            *(u32 *)((int)aiStack_24 + iVar1) = 0;
        } else if (iVar3 == 1) {
            *(u32 *)((int)aiStack_24 + iVar1) = 1;
        } else {
            if (iVar3 != 3) {
                if (iVar3 == 4) {
                    iVar3 = a4_00 * iVar4;
                    for (; -1 < iVar4; iVar4 = iVar4 + -1) {
                        iVar1 = 0;
                        puVar5 = (u8 *)(iVar3 * 3 + a0 + 0x36);
                        if (0 < a4_00) {
                            do {
                                iVar1 = iVar1 + 1;
                                *puVar5 = *ar4_00;
                                puVar6 = ar4_00 + 2;
                                puVar5[1] = ar4_00[1];
                                ar4_00 = ar4_00 + 3;
                                puVar5[2] = *puVar6;
                                puVar5 = puVar5 + 3;
                            } while (iVar1 < a4_00);
                        }
                        iVar3 = iVar3 - a4_00;
                    }
                    return 4;
                }
                if (iVar3 != 5) {
                    return iVar3;
                }
                iVar3 = a4_00 * iVar4;
                for (; -1 < iVar4; iVar4 = iVar4 + -1) {
                    iVar1 = 0;
                    puVar5 = (u8 *)(iVar3 * 3 + a0 + 0x36);
                    if (0 < a4_00) {
                        do {
                            iVar1 = iVar1 + 1;
                            *puVar5 = *ar4_00;
                            puVar5[1] = ar4_00[1];
                            puVar5[2] = ar4_00[2];
                            ar4_00 = ar4_00 + 4;
                            puVar5 = puVar5 + 3;
                        } while (iVar1 < a4_00);
                    }
                    iVar3 = iVar3 - a4_00;
                }
                return 5;
            }
            *(u32 *)((int)aiStack_24 + iVar1) = 3;
        }
        uVar2 = ta_fill_loop_20de80(a0 + 0x36, ar4_00, a4_00, a4);
    }
    return uVar2;
}

/*
 * ninja_calc_25b334  0x8c25b334
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 * called by: game_init
 */
u32 ninja_calc_25b334(u32 a0, u32 a1) {
    u32 *puVar1;
    u32 in_r0;

    puVar1 = 0x8c4aa6d0;
    g_8c4aa6cc = a0;
    *puVar1 = a1 & 0xfffff800;
    return in_r0;
}

/*
 * ninja_uses_tex_table_init_25b34a  0x8c25b34a
 * area name: in the ninja library code range; behaviour name: its main named callee is tex_table_init
 * called by: game_init
 */
u32 *ninja_uses_tex_table_init_25b34a(u32 a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 in_PR;

    tex_table_init(a0, a1, r6, r7, in_PR);
    g_8c4aa5a8 = 0;
    g_8c277b24 = 2;
    g_8c277b28 = 0;
    g_8c4ab10c = 0;
    g_8c4ab110 = 0;
    g_8c4ab114 = 0;
    g_8c4ab118 = 0;
    g_8c4ab11c = 0;
    g_8c4ab120 = 0;
    g_8c4ab124 = 0;
    g_8c4ab128 = 0;
    return &g_8c277b28;
}

/*
 * ninja_uses_tex_is_palettized_25b37c  0x8c25b37c
 * area name: in the ninja library code range; behaviour name: its callees mostly do: uses_tex_is_palettized
 * called by: game_shutdown_a
 */
u32 ninja_uses_tex_is_palettized_25b37c(u32 unused_a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u32 in_PR;

    ninja_uses_tex_is_palettized_2566c8(unused_a0, a1, a2, r7, in_PR);
    uVar1 = ninja_uses_tex_is_palettized_2565c4(unused_a0, a1, a2, r7, in_PR);
    g_8c4ab10c = 0;
    g_8c4ab110 = 0;
    g_8c4ab114 = 0;
    g_8c4ab118 = 0;
    g_8c4ab11c = 0;
    g_8c4ab120 = 0;
    g_8c4ab124 = 0;
    g_8c4ab128 = 0;
    return uVar1;
}

/*
 * njLoadTexture  0x8c25b3a2
 * loads every texture of the list a0 (count at +4); 1 on success, -1 on error
 * called by: C2DSprite_Load, C3DRenderPly_SetMem, game_uses_malloc_thunk_015f18, game_uses_njLoadTexture_01f9c4
 */
u32 njLoadTexture(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;

    tex_error_reset();
    if (*(int *)(a0 + 4) == 0) {
        g_8c4aa6b4 = 1;
        ar5_00 = g_8c4aa6ac;
    LAB_8c25b3d2:
        g_8c4aa6ac = ar5_00;
        uVar2 = 0xffffffff;
    } else {
        for (ar5_00 = 0; ar5_00 < *(u32 *)(a0 + 4); ar5_00 = ar5_00 + 1) {
            iVar1 = gfxlib_uses_tex_entry_alloc_23793c(a0, ar5_00, unused_a2, a3);
            if (iVar1 < 0)
                goto LAB_8c25b3d2;
        }
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * njSetTexture  0x8c25b3ec
 * makes a0 the current texture list (0x8c277b04); -1 for NULL
 * called by: CSquidLine_uses_matrix_push_0ad354, CTexture_LoadFromCache, Class_129808_draw_016544,
 * Class_129808_m10_0162bc, Class_1298b8_m2_015588, Class_1298b8_m3_0155e8, Class_1298b8_m4_0156a0,
 * Class_1298b8_m5_015720 (+13 more)
 */
u32 njSetTexture(int a0) {
    if (a0 == 0) {
        return 0xffffffff;
    }
    g_8c277b04 = a0;
    return 1;
}

/*
 * njSetTextureNum  0x8c25b434
 * selects texture a0 of the current list and loads its parameters when it changes
 * called by: Class_129808_draw_016544, obj_set_texture_num
 */
u32 njSetTextureNum(int a0) {
    int *ar5_00;

    ar5_00 = *(int **)(*g_8c277b04 + a0 * 0xc + 8);
    if ((*ar5_00 != g_8c277b10) || (g_8c277b14 != ar5_00[1])) {
        g_8c277b10 = *ar5_00;
        g_8c277b14 = ar5_00[1];
        *(u32 *)(g_8c4aabbc + 0x98) = *(u32 *)(g_8c4aabbc + 0x98) & 0xffffffc0 | ar5_00[2] & 0x3fU;
        g_8c277b1c = (u32)ar5_00[6] >> 0x10;
        *(int *)(g_8c4aabbc + 0x9c) = ar5_00[3];
        ta_load_texture_params(g_8c4aabbc);
    }
    return 1;
}

/*
 * alt_entry_25b440  0x8c25b440
 * probably an entry 12 bytes into 8c25b434: it reads registers that code sets before it
 */
u32 alt_entry_25b440(int a0) {
    u32 *in_r3;
    int *ar5_00;

    ar5_00 = *(int **)(*(int *)*in_r3 + a0 + 8);
    if ((*ar5_00 != g_8c277b10) || (g_8c277b14 != ar5_00[1])) {
        g_8c277b10 = *ar5_00;
        g_8c277b14 = ar5_00[1];
        *(u32 *)(g_8c4aabbc + 0x98) = *(u32 *)(g_8c4aabbc + 0x98) & 0xffffffc0 | ar5_00[2] & 0x3fU;
        g_8c277b1c = (u32)ar5_00[6] >> 0x10;
        *(int *)(g_8c4aabbc + 0x9c) = ar5_00[3];
        ta_load_texture_params(g_8c4aabbc);
    }
    return 1;
}

/*
 * ninja_calls_scan_loop_25b49e  0x8c25b49e
 * area name: in the ninja library code range; behaviour name: its callees mostly do: calls_scan_loop
 * called by: draw_uses_free_sys_258b26, ninja_uses_kamui_cfg_texture_memory_25806c
 */
u32 ninja_calls_scan_loop_25b49e(int a0) {
    u32 uStack_10;
    u32 uStack_c;
    int iStack_8;

    if (a0 == 2) {
        return g_8c4aa6a8;
    }
    iStack_8 = a0;
    kamui_calls_scan_loop_20cfe0(&uStack_10, &uStack_c);
    if (iStack_8 == 0) {
        return uStack_10;
    }
    return uStack_c;
}

/*
 * ninja_calls_fill_loop_25b4da  0x8c25b4da
 * area name: in the ninja library code range; behaviour name: its callees mostly do: calls_fill_loop
 */
u32 ninja_calls_fill_loop_25b4da(void) {
    u32 uVar1;

    uVar1 = libc_calls_fill_loop_010998();
    return uVar1;
}

/*
 * ninja_draw_25b4ea  0x8c25b4ea
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: game_draw_0f7ea0
 */
u32 ninja_draw_25b4ea(u32 *a0, u32 *a1, u32 *a2, u32 a3) {
    u32 uVar1;
    u32 ar7_00;
    u32 *puVar2;
    u32 *ar5_00;
    u32 *puVar3;
    u32 *puVar4;
    u32 *puVar5;
    u32 *ar4_00;

    ar5_00 = a1;
    uVar1 = kamui_draw_20d114(a0, a1, a2, a3);
    puVar4 = a0;
    puVar5 = a0;
    ar4_00 = a0;
    for (puVar3 = NULL; puVar3 < a1; puVar3 = (u32 *)((int)puVar3 + 1)) {
        ar7_00 = a0[(int)puVar3 * 0x11];
        uVar1 = ar7_00;
        if ((ar7_00 != 0xffffffff) && (uVar1 = (a0 + (int)puVar3 * 0x11)[4], (uVar1 & 2) != 0)) {
            if ((puVar5[4] & 8) != 0) {
                uVar1 = puVar4[0xd];
                a2 = NULL;
                puVar2 = a0;
                ar5_00 = a0;
                if (a1 != NULL) {
                    do {
                        a2 = (u32 *)((int)a2 + 1);
                        if (ar7_00 == *ar5_00) {
                            puVar2[0xd] = uVar1;
                        }
                        puVar2 = puVar2 + 0x11;
                        ar5_00 = ar5_00 + 0x11;
                    } while (a2 < a1);
                }
            }
            uVar1 = tex_uses_tex_size_to_index_2571fe(ar4_00);
        }
        puVar4 = puVar4 + 0x11;
        puVar5 = puVar5 + 0x11;
        ar4_00 = ar4_00 + 0x11;
    }
    return uVar1;
}

/*
 * tex_error_reset  0x8c25b5b4
 * clears the texture loader's error state (0x8c4aa6ac)
 * called by: alt_entry_2378ba, gfxlib_uses_array44_index_of_2378a6, gfxlib_uses_ninja_close_file_239212,
 * ninja_uses_ninja_close_file_256164, njLoadTexture, pvr_uses_tex_entry_alloc_23a29c
 */
u32 tex_error_reset(void) {
    u32 *puVar1;
    u32 in_r0;

    puVar1 = 0x8c4aa6ac;
    g_8c4aa6ac = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return in_r0;
}

/*
 * touch_fields_30_3c  0x8c25b5d0
 * rewrites the four words at +0x30..+0x3c with themselves (no effect)
 * called by: CAnimal_draw_088288, CAnimal_uses_njGetMatrix_026968, CSquidLine_uses_matrix_push_0ad354,
 * Class_1298b8_m11_0159ec, Class_1298b8_m2_015588, Class_1298b8_m3_0155e8, Class_1298b8_m4_0156a0,
 * Class_1298b8_m5_015720 (+23 more)
 */
u32 touch_fields_30_3c(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    if (a0 != 0) {
        *(u32 *)(a0 + 0x30) = *(u32 *)(a0 + 0x30);
        *(u32 *)(a0 + 0x34) = *(u32 *)(a0 + 0x34);
        *(u32 *)(a0 + 0x38) = *(u32 *)(a0 + 0x38);
        *(u32 *)(a0 + 0x3c) = *(u32 *)(a0 + 0x3c);
        return 0x3c;
    }
    return ain0;
}

/*
 * noop_25b638  0x8c25b638
 * called by: alt_entry_218ea0, alt_entry_2199c0, alt_entry_21a718, alt_entry_21a8be, alt_entry_21a952,
 * alt_entry_21b916, alt_entry_21b9a8, gfxlib_draw_21a8b0 (+10 more)
 */
u32 noop_25b638(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * tex_calls_fill_loop_25b650  0x8c25b650
 * area name: sits between tex functions (same compilation unit); behaviour name: its callees mostly do: fill_loop
 * called by: gfxlib_draw_235bfc
 */
u64 *tex_calls_fill_loop_25b650(u32 *a0, int a1, u64 *a2, int a3) {
    bool bVar1;
    bool bVar2;
    int iVar3;
    u32 *puVar4;
    int iVar5;
    int iVar6;
    u32 uVar7;
    u64 *puVar8;
    bool bVar9;
    u32 *ar6_00;
    u32 *ar5_00;
    u64 in_dr2;
    double dVar10;
    float fVar11;
    double in_dr4;
    float fVar12;
    u64 in_dr14;
    double dVar13;
    bool bVar14;
    char cVar15;
    char cVar16;
    int iStack_38;
    int iStack_2c;
    int iStack_28;

    cVar16 = '\0';
    cVar15 = '\0';
    iVar3 = 0;
    iVar6 = 0;
    bVar9 = false;
    if (a3 < 1) {
        uVar7 = 0xe0000000;
        iVar5 = a1;
        do {
            puVar4 = a0 + iVar3 * 4;
            *(u32 *)(a2 + 3) = *puVar4;
            *(u32 *)((int)a2 + 0xc) = puVar4[1];
            *(u32 *)(a2 + 1) = puVar4[2];
            *(u32 *)((int)a2 + 4) = puVar4[3];
            *(u32 *)a2 = uVar7;
            bVar9 = (bool)(bVar9 ^ 1);
            a2 = a2 + 4;
            if (bVar9) {
                iVar3 = iVar5 + -1;
                iVar5 = iVar3;
            } else {
                iVar3 = iVar6 + 1;
                iVar6 = iVar3;
            }
            a1 = a1 + -1;
            if (a1 == 0) {
                uVar7 = 0xf0000000;
            }
        } while (-1 < a1);
        return a2;
    }
    bVar9 = false;
    iStack_28 = 1;
    iStack_2c = a1 + -1;
    bVar2 = false;
    iVar6 = 1;
    iStack_38 = a1 + -2;
    dVar10 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aa4d4);
    dVar13 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), 1.0 / g_8c4aa4d4);
    puVar4 = a0;
    ar5_00 = a0 + iStack_2c * 4;
    do {
        dVar10 = (double)((u64)dVar10 & 0xffffffff00000000);
        if (cVar16 == '\0') {
            in_dr4 = (double)CONCAT44(puVar4[1], SUB84(in_dr4, 0));
        } else {
            in_dr4 = *(double *)(puVar4 + 1);
        }
        fVar11 = (float)((u64)in_dr4 >> 0x20);
        if (cVar15 == '\0') {
            bVar14 = 0.0 < fVar11;
        } else {
            bVar14 = dVar10 < in_dr4;
        }
        ar6_00 = a0 + iVar6 * 4;
        bVar1 = false;
        fVar12 = SUB84(dVar13, 0);
        if (bVar14) {
            if (cVar15 == '\0') {
                bVar14 = fVar11 < fVar12;
            } else {
                bVar14 = in_dr4 < dVar13;
            }
            if (!bVar14)
                goto LAB_8c25b742;
            if (cVar16 == '\0') {
                dVar10 = (double)((u64)(u32)ar5_00[1] << 0x20);
            } else {
                dVar10 = *(double *)(ar5_00 + 1);
            }
            fVar11 = (float)((u64)dVar10 >> 0x20);
            if (cVar15 != '\0' || fVar11 <= SUB84(dVar10, 0))
                goto LAB_8c25b742;
            if (cVar16 == '\0') {
                dVar10 = (double)CONCAT44(fVar11, ar5_00[1]);
            }
            if (cVar15 == '\0') {
                bVar14 = SUB84(dVar10, 0) < fVar12;
            } else {
                bVar14 = dVar10 < dVar13;
            }
            if (!bVar14)
                goto LAB_8c25b742;
            if (cVar16 == '\0') {
                fVar11 = (float)ar6_00[1];
            } else {
                fVar11 = (float)((u64) * (u64 *)(ar6_00 + 1) >> 0x20);
            }
            dVar10 = (double)((u64)(u32)fVar11 << 0x20);
            if (cVar15 != '\0' || fVar11 <= 0.0)
                goto LAB_8c25b742;
            if (cVar16 == '\0') {
                dVar10 = (double)CONCAT44(fVar11, ar6_00[1]);
            }
            if (cVar15 == '\0') {
                bVar14 = SUB84(dVar10, 0) < fVar12;
            } else {
                bVar14 = dVar10 < dVar13;
            }
            if (!bVar14)
                goto LAB_8c25b742;
        } else {
        LAB_8c25b742:
            bVar1 = true;
        }
        uVar7 = (u32)((u64)dVar10 >> 0x20);
        if (bVar1) {
            if (bVar9) {
                *(u32 *)(a2 + 3) = *ar5_00;
                if (cVar16 == '\0') {
                    *(u32 *)((int)a2 + 0xc) = ar5_00[1];
                    *(u32 *)(a2 + 1) = ar5_00[2];
                    dVar10 = (double)CONCAT44(uVar7, ar5_00[3]);
                    puVar8 = (u64 *)((int)a2 + 4);
                    *(u32 *)puVar8 = ar5_00[3];
                } else {
                    a2[1] = *(u64 *)(ar5_00 + 1);
                    *a2 = *(u64 *)(ar5_00 + 2);
                    puVar8 = a2 + -1;
                    *puVar8 = *(u64 *)(ar5_00 + 3);
                }
                *(u32 *)((int)puVar8 + -4) = 0xf0000000;
                bVar9 = false;
                a2 = (u64 *)((int)puVar8 + 0x1c);
            }
            dVar10 = (double)((u64)dVar10 & 0xffffffff00000000);
            if (cVar16 == '\0') {
                in_dr4 = (double)CONCAT44(puVar4[1], SUB84(in_dr4, 0));
            } else {
                in_dr4 = *(double *)(puVar4 + 1);
            }
            fVar11 = (float)((u64)in_dr4 >> 0x20);
            if (cVar15 == '\0') {
                bVar14 = 0.0 < fVar11;
            } else {
                bVar14 = dVar10 < in_dr4;
            }
            if (bVar14) {
                if (cVar15 == '\0') {
                    bVar14 = fVar11 < fVar12;
                } else {
                    bVar14 = in_dr4 < dVar13;
                }
                if (!bVar14)
                    goto LAB_8c25b7c2;
            LAB_8c25b7de:
                a2 = (u64 *)ninja_fill_loop_25b858(puVar4, ar5_00, ar6_00, a2);
            } else {
            LAB_8c25b7c2:
                if (cVar16 == '\0') {
                    fVar11 = (float)ar5_00[1];
                } else {
                    fVar11 = (float)((u64) * (u64 *)(ar5_00 + 1) >> 0x20);
                }
                if (cVar15 == '\0' && 0.0 < fVar11) {
                    if (cVar16 == '\0') {
                        dVar10 = (double)((u64)(u32)ar5_00[1] << 0x20);
                    } else {
                        dVar10 = *(double *)(ar5_00 + 1);
                    }
                    if (cVar15 == '\0') {
                        bVar14 = (float)((u64)dVar10 >> 0x20) < fVar12;
                    } else {
                        bVar14 = dVar10 < dVar13;
                    }
                    if (bVar14)
                        goto LAB_8c25b7de;
                }
                if (cVar16 == '\0') {
                    fVar11 = (float)ar6_00[1];
                } else {
                    fVar11 = (float)((u64) * (u64 *)(ar6_00 + 1) >> 0x20);
                }
                dVar10 = (double)((u64)(u32)fVar11 << 0x20);
                if (cVar15 == '\0' && 0.0 < fVar11) {
                    if (cVar16 == '\0') {
                        dVar10 = (double)((u64)(u32)ar6_00[1] << 0x20);
                    } else {
                        dVar10 = *(double *)(ar6_00 + 1);
                    }
                    if (cVar15 == '\0') {
                        bVar14 = (float)((u64)dVar10 >> 0x20) < fVar12;
                    } else {
                        bVar14 = dVar10 < dVar13;
                    }
                    if (bVar14)
                        goto LAB_8c25b7de;
                }
            }
        } else {
            if (!bVar9) {
                *(u32 *)(a2 + 3) = *puVar4;
                if (cVar16 == '\0') {
                    *(u32 *)((int)a2 + 0xc) = puVar4[1];
                    *(u32 *)(a2 + 1) = puVar4[2];
                    dVar10 = (double)CONCAT44(uVar7, puVar4[3]);
                    puVar8 = (u64 *)((int)a2 + 4);
                    *(u32 *)puVar8 = puVar4[3];
                } else {
                    a2[1] = *(u64 *)(puVar4 + 1);
                    *a2 = *(u64 *)(puVar4 + 2);
                    puVar8 = a2 + -1;
                    *puVar8 = *(u64 *)(puVar4 + 3);
                }
                *(u32 *)((int)puVar8 + -4) = 0xe0000000;
                bVar9 = true;
                a2 = (u64 *)((int)puVar8 + 0x1c);
            }
            *(u32 *)(a2 + 3) = *ar5_00;
            if (cVar16 == '\0') {
                *(u32 *)((int)a2 + 0xc) = ar5_00[1];
                *(u32 *)(a2 + 1) = ar5_00[2];
                dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), ar5_00[3]);
                puVar8 = (u64 *)((int)a2 + 4);
                *(u32 *)puVar8 = ar5_00[3];
            } else {
                a2[1] = *(u64 *)(ar5_00 + 1);
                *a2 = *(u64 *)(ar5_00 + 2);
                puVar8 = a2 + -1;
                *puVar8 = *(u64 *)(ar5_00 + 3);
            }
            *(u32 *)((int)puVar8 + -4) = 0xe0000000;
            a2 = (u64 *)((int)puVar8 + 0x1c);
        }
        bVar2 = (bool)(bVar2 ^ 1);
        if (bVar2) {
            iVar6 = iStack_2c + -1;
            iStack_2c = iVar6;
        } else {
            iVar6 = iStack_28 + 1;
            iStack_28 = iVar6;
        }
        iStack_38 = iStack_38 + -1;
        puVar4 = ar5_00;
        ar5_00 = ar6_00;
        if (iStack_38 < 1) {
            if (bVar9) {
                *(u32 *)(a2 + 3) = *ar6_00;
                if (cVar16 == '\0') {
                    *(u32 *)((int)a2 + 0xc) = ar6_00[1];
                    *(u32 *)(a2 + 1) = ar6_00[2];
                    puVar8 = (u64 *)((int)a2 + 4);
                    *(u32 *)puVar8 = ar6_00[3];
                } else {
                    a2[1] = *(u64 *)(ar6_00 + 1);
                    *a2 = *(u64 *)(ar6_00 + 2);
                    puVar8 = a2 + -1;
                    *puVar8 = *(u64 *)(ar6_00 + 3);
                }
                *(u32 *)((int)puVar8 + -4) = 0xf0000000;
                a2 = (u64 *)((int)puVar8 + 0x1c);
            }
            return a2;
        }
    } while (true);
}

/*
 * tex_calls_fill_loop_25b6c6  0x8c25b6c6
 * area name: sits between tex functions (same compilation unit); behaviour name: its callees mostly do: fill_loop
 */
u64 *tex_calls_fill_loop_25b6c6(u32 a0, u32 a1, u64 *a2) {
    bool bVar1;
    bool bVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    u32 *a4;
    int iVar6;
    u64 *puVar7;
    u32 *a6;
    u32 *puVar8;
    u64 *puVar9;
    double in_dr2;
    float fVar10;
    double in_dr4;
    float fVar11;
    u64 in_dr14;
    u32 uVar13;
    double dVar12;
    bool bVar14;
    u32 in_PR;
    u64 uStack_24;

    uVar3 = 0xe0000000;

    puVar9 = (u64 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44((int)in_dr14, (u32)uStack_24);

    *(u32 *)((int)puVar9 + -4) = in_PR;
    uVar13 = (u32)((u64)in_dr14 >> 0x20);
    *(u32 *)((int)puVar9 + -0x14) = a0;
    bVar2 = false;
    *(u32 *)((int)puVar9 + -0x18) = a1;
    *(u32 *)((int)puVar9 + -8) = 1;
    iVar5 = *(int *)((int)puVar9 + -0x18);
    *(int *)((int)puVar9 + -0xc) = iVar5 + -1;
    *(u32 *)((int)puVar9 + -0x10) = 0;
    a4 = *(u32 **)((int)puVar9 + -0x14);
    iVar6 = *(int *)((int)puVar9 + -8);
    *(int *)((int)puVar9 + -0x18) = *(int *)((int)puVar9 + -0x18) + -2;

    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aa4d4);

    puVar8 = a4 + (iVar5 + -1) * 4;

    dVar12 = (double)CONCAT44(uVar13, 1.0 / SUB84(in_dr2, 0));

    do {
        in_dr2 = (double)((u64)in_dr2 & 0xffffffff00000000);

        in_dr4 = (double)CONCAT44(a4[1], SUB84(in_dr4, 0));

        fVar10 = (float)((u64)in_dr4 >> 0x20);

        bVar14 = 0.0 < fVar10;

        a6 = (u32 *)(iVar6 * 0x10 + *(int *)((int)puVar9 + -0x14));
        bVar1 = false;
        fVar11 = SUB84(dVar12, 0);
        if (bVar14) {

            bVar14 = fVar10 < fVar11;

            if (!bVar14)
                goto LAB_8c25b742;

            in_dr2 = (double)((u64)(u32)puVar8[1] << 0x20);

            fVar10 = (float)((u64)in_dr2 >> 0x20);
            if (fVar10 <= SUB84(in_dr2, 0))
                goto LAB_8c25b742;

            in_dr2 = (double)CONCAT44(fVar10, puVar8[1]);

            bVar14 = SUB84(in_dr2, 0) < fVar11;

            if (!bVar14)
                goto LAB_8c25b742;

            fVar10 = (float)a6[1];

            in_dr2 = (double)((u64)(u32)fVar10 << 0x20);
            if (fVar10 <= 0.0)
                goto LAB_8c25b742;

            in_dr2 = (double)CONCAT44(fVar10, a6[1]);

            bVar14 = SUB84(in_dr2, 0) < fVar11;

            if (!bVar14)
                goto LAB_8c25b742;
        } else {
        LAB_8c25b742:
            bVar1 = true;
        }
        uVar13 = (u32)((u64)in_dr2 >> 0x20);
        if (bVar1) {
            if (bVar2) {
                *(u32 *)(a2 + 3) = *puVar8;
                uVar4 = 0xf0000000;

                *(u32 *)((int)a2 + 0xc) = puVar8[1];
                *(u32 *)(a2 + 1) = puVar8[2];
                in_dr2 = (double)CONCAT44(uVar13, puVar8[3]);
                puVar7 = (u64 *)((int)a2 + 4);
                *(u32 *)puVar7 = puVar8[3];

                *(u32 *)((int)puVar7 + -4) = uVar4;
                bVar2 = false;
                a2 = (u64 *)((int)puVar7 + 0x1c);
            }
            in_dr2 = (double)((u64)in_dr2 & 0xffffffff00000000);

            in_dr4 = (double)CONCAT44(a4[1], SUB84(in_dr4, 0));

            fVar10 = (float)((u64)in_dr4 >> 0x20);

            bVar14 = 0.0 < fVar10;

            if (bVar14) {

                bVar14 = fVar10 < fVar11;

                if (!bVar14)
                    goto LAB_8c25b7c2;
            LAB_8c25b7de:
                a2 = (u64 *)ninja_fill_loop_25b858(a4, puVar8, a6, a2);
            } else {
            LAB_8c25b7c2:

                fVar10 = (float)puVar8[1];

                if (0.0 < fVar10) {

                    in_dr2 = (double)((u64)(u32)puVar8[1] << 0x20);

                    bVar14 = (float)((u64)in_dr2 >> 0x20) < fVar11;

                    if (bVar14)
                        goto LAB_8c25b7de;
                }

                fVar10 = (float)a6[1];

                in_dr2 = (double)((u64)(u32)fVar10 << 0x20);
                if (0.0 < fVar10) {

                    in_dr2 = (double)((u64)(u32)a6[1] << 0x20);

                    bVar14 = (float)((u64)in_dr2 >> 0x20) < fVar11;

                    if (bVar14)
                        goto LAB_8c25b7de;
                }
            }
        } else {
            if (!bVar2) {
                *(u32 *)(a2 + 3) = *a4;

                *(u32 *)((int)a2 + 0xc) = a4[1];
                *(u32 *)(a2 + 1) = a4[2];
                in_dr2 = (double)CONCAT44(uVar13, a4[3]);
                puVar7 = (u64 *)((int)a2 + 4);
                *(u32 *)puVar7 = a4[3];

                *(u32 *)((int)puVar7 + -4) = uVar3;
                bVar2 = true;
                a2 = (u64 *)((int)puVar7 + 0x1c);
            }
            *(u32 *)(a2 + 3) = *puVar8;

            *(u32 *)((int)a2 + 0xc) = puVar8[1];
            *(u32 *)(a2 + 1) = puVar8[2];
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), puVar8[3]);
            puVar7 = (u64 *)((int)a2 + 4);
            *(u32 *)puVar7 = puVar8[3];

            *(u32 *)((int)puVar7 + -4) = uVar3;
            a2 = (u64 *)((int)puVar7 + 0x1c);
        }
        iVar5 = *(int *)((int)puVar9 + -0x10);
        *(u32 *)((int)puVar9 + -0x10) = iVar5 + 1U;
        if ((iVar5 + 1U & 1) == 0) {
            iVar6 = *(int *)((int)puVar9 + -8) + 1;
            *(int *)((int)puVar9 + -8) = iVar6;
        } else {
            iVar6 = *(int *)((int)puVar9 + -0xc) + -1;
            *(int *)((int)puVar9 + -0xc) = iVar6;
        }
        iVar5 = *(int *)((int)puVar9 + -0x18);
        *(int *)((int)puVar9 + -0x18) = iVar5 + -1;
        a4 = puVar8;
        puVar8 = a6;
        if (iVar5 + -1 < 1) {
            if (bVar2) {
                *(u32 *)(a2 + 3) = *a6;
                uVar3 = 0xf0000000;

                *(u32 *)((int)a2 + 0xc) = a6[1];
                *(u32 *)(a2 + 1) = a6[2];
                puVar7 = (u64 *)((int)a2 + 4);
                *(u32 *)puVar7 = a6[3];

                *(u32 *)((int)puVar7 + -4) = uVar3;
                a2 = (u64 *)((int)puVar7 + 0x1c);
            }
            return a2;
        }
    } while (true);
}

/*
 * ninja_fill_loop_25b858  0x8c25b858
 * area name: in the ninja library code range; behaviour name: a loop that writes memory
 * called by: tex_calls_fill_loop_25b650, tex_calls_fill_loop_25b6c6
 */
u32 *ninja_fill_loop_25b858(u32 *a0, u32 *a1, u32 *a2, u64 *a3) {
    u32 *puVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u32 *puVar5;
    u32 uVar6;
    u32 uVar7;
    u32 *puVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    u64 *puVar12;
    double *pdVar13;
    u8 *puVar14;
    u8 *puVar15;
    double in_dr0;
    double dVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    double dVar20;
    double dVar21;
    double dVar22;
    double dVar23;
    u32 in_fr5;
    double dVar25;
    u32 in_fr9;
    float fVar27;
    double dVar28;
    u32 in_fr11;
    double dVar29;
    double in_dr12;
    double dVar31;
    float fVar32;
    double in_dr14;
    double in_xd2;
    double dVar33;
    double dVar34;
    double in_xd4;
    double dVar35;
    double in_xd6;
    double in_xd10;
    double in_xd12;
    double in_xd14;
    double dVar36;
    bool bVar37;
    bool bVar38;
    int iVar39;
    int iVar40;
    u8 auStack_28[8];
    u8 auStack_20[4];
    float fVar24;
    u32 uVar26;
    float fVar30;

    uVar3 = 0xe0000000;

    _auStack_20 = CONCAT44(SUB84(in_dr14, 0), auStack_20);
    puVar14 = auStack_20;

    iVar4 = (int)(int)0xffffff44;

    *(int *)(puVar14 + -4) = SUB84(in_dr12, 0);
    puVar15 = puVar14 + -8;
    *(int *)(puVar14 + -8) = (int)((u64)in_dr12 >> 0x20);

    iVar2 = iVar4 + 0x4c;

    uVar26 = *(u32 *)0x8c4aa4a8;
    dVar20 = (double)CONCAT44(*(u32 *)0x8c4aa4e0, *(u32 *)0x8c4aa4dc);
    dVar25 = (double)CONCAT44(uVar26, *(u32 *)((int)0x8c4aa4a8 + 0xc));
    in_fr9 = *(u32 *)(0x8c4aa4a8 + 2);
    dVar28 = (double)CONCAT44(uVar26, in_fr5);

    dVar25 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) * SUB84(dVar20, 0), SUB84(dVar25, 0));

    dVar28 = (double)CONCAT44(uVar26, in_fr9);

    dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * (float)((u64)dVar20 >> 0x20), SUB84(dVar28, 0));

    dVar29 = (double)CONCAT44(0x3f800000, in_fr11);
    dVar33 = dVar29;
    dVar35 = dVar29;
    dVar21 = dVar29;

    dVar33 = 0.007812501848093234;
    dVar35 = in_xd4;
    dVar21 = (double)CONCAT44(0x3f800000, SUB84(dVar20, 0));

    fVar32 = (float)((u64)dVar25 >> 0x20);
    fVar24 = (float)((u64)dVar28 >> 0x20);

    dVar20 = (double)CONCAT44((float)((u64)dVar33 >> 0x20) / fVar32, SUB84(dVar33, 0) / fVar24);

    *(u32 *)(puVar15 + iVar4 + 100) = *a0;

    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), a0[1]);

    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) / SUB84(dVar21, 0), SUB84(dVar21, 0));

    pdVar13 = (double *)(puVar15 + iVar4 + 0x60);
    *(int *)pdVar13 = (int)((u64)dVar21 >> 0x20);
    dVar21 = (double)CONCAT44(*(u32 *)(puVar15 + iVar4 + 0x60), a0[2]);

    fVar27 = SUB84(dVar28, 0);
    fVar30 = SUB84(dVar20, 0);

    fVar17 = (SUB84(dVar21, 0) - fVar27) * (float)((u64)dVar21 >> 0x20) * fVar30;

    pdVar13 = (double *)((int)pdVar13 + -4);
    *(float *)pdVar13 = fVar17;
    dVar21 = (double)CONCAT44(*(u32 *)(puVar15 + iVar4 + 0x60), a0[3]);

    fVar17 = SUB84(dVar25, 0);

    fVar18 = (SUB84(dVar21, 0) - fVar17) * (float)((u64)dVar21 >> 0x20);

    dVar21 = dVar29;

    dVar21 = (double)CONCAT44(0x3f800000, fVar18);

    fVar18 = (float)((u64)dVar20 >> 0x20);

    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) * fVar18);

    *(int *)((int)pdVar13 + -4) = SUB84(dVar21, 0);
    *(u32 *)(pdVar13 + -1) = a0[1];
    *(u32 *)((int)pdVar13 + -0xc) = a0[2];
    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), a0[3]);
    pdVar13 = pdVar13 + -2;
    *(u32 *)pdVar13 = a0[3];

    *(u32 *)((int)pdVar13 + 0x34) = *a1;

    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), a1[1]);

    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) / SUB84(dVar21, 0), SUB84(dVar21, 0));

    uVar26 = (u32)((u64)dVar21 >> 0x20);

    pdVar13 = pdVar13 + 6;
    *(u32 *)pdVar13 = uVar26;
    dVar21 = (double)CONCAT44(uVar26, a1[2]);

    fVar19 = SUB84(dVar21, 0) - fVar27;

    dVar21 = (double)CONCAT44(*(u32 *)(puVar15 + iVar4 + 0x7c), fVar19);

    fVar19 = SUB84(dVar21, 0) * (float)((u64)dVar21 >> 0x20) * fVar30;

    pdVar13 = (double *)((int)pdVar13 + -4);
    *(float *)pdVar13 = fVar19;
    dVar21 = (double)CONCAT44(*(u32 *)(puVar15 + iVar4 + 0x7c), a1[3]);

    fVar19 = (SUB84(dVar21, 0) - fVar17) * (float)((u64)dVar21 >> 0x20) * fVar18;

    *(float *)((int)pdVar13 + -4) = fVar19;
    *(u32 *)(pdVar13 + -1) = a1[1];
    *(u32 *)((int)pdVar13 + -0xc) = a1[2];
    pdVar13 = pdVar13 + -2;
    *(u32 *)pdVar13 = a1[3];

    *(u32 *)((int)pdVar13 + 0x34) = *a2;

    dVar21 = (double)CONCAT44(0x3f800000, a2[1]);

    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) / SUB84(dVar21, 0), SUB84(dVar21, 0));

    iVar9 = 0;

    pdVar13 = pdVar13 + 6;
    *(int *)pdVar13 = (int)((u64)dVar21 >> 0x20);
    dVar21 = (double)CONCAT44(*(u32 *)(puVar15 + iVar4 + 0x98), a2[2]);

    fVar19 = (SUB84(dVar21, 0) - fVar27) * (float)((u64)dVar21 >> 0x20) * fVar30;

    pdVar13 = (double *)((int)pdVar13 + -4);
    *(float *)pdVar13 = fVar19;
    dVar21 = (double)CONCAT44(*(u32 *)(puVar15 + iVar4 + 0x98), a2[3]);

    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) - fVar17);

    fVar19 = (float)((u64)dVar21 >> 0x20);
    dVar20 = (double)CONCAT44(fVar19, SUB84(dVar21, 0) * fVar19 * fVar18);

    *(int *)((int)pdVar13 + -4) = SUB84(dVar20, 0);
    *(u32 *)(pdVar13 + -1) = a2[1];
    *(u32 *)((int)pdVar13 + -0xc) = a2[2];
    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), a2[3]);
    *(u32 *)(pdVar13 + -2) = a2[3];
    dVar21 = (double)CONCAT44(*(u32 *)0x8c4aa4d4, fVar30);

    puVar1 = (u32 *)(puVar15 + iVar4 + 0x1c);
    dVar33 = dVar21;

    dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), (int)((u64)dVar21 >> 0x20));
    dVar33 = in_xd2;

    iVar39 = 2;
    iVar10 = 0;

    fVar30 = 1.0 / SUB84(dVar20, 0);
    dVar29 = (double)CONCAT44(fVar30, in_fr11);
    dVar28 = (double)CONCAT44(fVar24 * fVar30, fVar27);
    dVar25 = (double)CONCAT44(fVar32 * fVar30, fVar17);

    do {
        iVar39 = iVar39 * 0x1c + iVar2;

        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(puVar15 + iVar39 + 0x14));

        fVar32 = (float)((u64)dVar21 >> 0x20);

        bVar37 = fVar32 < SUB84(dVar20, 0);

        iVar11 = iVar10 * 0x1c + iVar2;

        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(puVar15 + iVar11 + 0x14));

        bVar38 = fVar32 < SUB84(dVar20, 0);

        if ((bVar37 ^ 1) != -(bVar38 - 1)) {

            dVar21 = (double)CONCAT44(fVar32, *(u32 *)(puVar15 + iVar39 + 0x14));
            dVar20 = (double)CONCAT44(*(u32 *)(puVar15 + iVar11 + 0x14), fVar32);

            dVar20 =
                (double)CONCAT44((float)((u64)dVar20 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar20, 0) - SUB84(dVar21, 0));

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(puVar15 + iVar39 + 0xc));

            puVar5 = puVar1 + iVar9 * 4;
            dVar36 = dVar33;

            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(dVar20, 0));
            dVar36 = in_xd14;

            fVar32 = SUB84(in_dr14, 0) / (float)((u64)dVar20 >> 0x20);

            dVar20 = (double)CONCAT44(SUB84(dVar21, 0), *(u32 *)(puVar15 + iVar11 + 0xc));

            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - SUB84(dVar21, 0));

            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(puVar15 + iVar39 + 0x10));
            dVar16 = (double)CONCAT44(fVar32, SUB84(in_dr0, 0));

            fVar24 = (float)((u64)dVar16 >> 0x20);

            dVar20 = (double)CONCAT44(fVar24 * SUB84(dVar20, 0) + (float)((u64)dVar20 >> 0x20), SUB84(dVar20, 0));

            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(puVar15 + iVar11 + 0x10));

            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - SUB84(dVar29, 0));

            dVar31 = in_xd10;

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), (int)((u64)dVar20 >> 0x20));
            dVar31 = (double)CONCAT44(SUB84(dVar29, 0), SUB84(dVar20, 0));
            dVar20 = dVar35;

            dVar31 = (double)CONCAT44(fVar24 * SUB84(dVar31, 0) + (float)((u64)dVar31 >> 0x20), SUB84(dVar31, 0));

            dVar34 = in_xd6;
            dVar35 = dVar20;

            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar25, 0));
            dVar34 = dVar33;
            dVar35 = (double)CONCAT44(SUB84(dVar21, 0), SUB84(dVar16, 0));

            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20),
                                      (float)((u64)dVar35 >> 0x20) * (float)((u64)dVar25 >> 0x20) + SUB84(dVar31, 0));

            uVar26 = (u32)((u64)dVar31 >> 0x20);
            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar26);
            puVar5[3] = SUB84(dVar31, 0);
            dVar31 = (double)((u64)dVar28 & 0xffffffff);
            dVar33 = (double)CONCAT44(uVar26, SUB84(dVar35, 0));

            fVar30 = SUB84(dVar31, 0);
            fVar24 = (float)((u64)dVar33 >> 0x20);

            fVar30 = fVar24 * (float)((u64)dVar28 >> 0x20) + fVar30;

            uVar7 = (u32)((u64)dVar29 >> 0x20);

            puVar5[2] = (u32)fVar30;
            puVar5[1] = uVar7;

            uVar6 = *(u32 *)(puVar15 + iVar39 + 0x18);
            fVar30 = (float)(uVar6 >> 0x18);
            dVar35 = dVar34;

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), fVar30);
            dVar35 = dVar20;

            if (fVar30 < 0.0) {
                fVar27 = g_8c25bb00;

                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) + fVar27);
            }
            fVar30 = (float)(uVar6 >> 0x10 & 0xff);
            dVar20 = dVar34;

            dVar29 = (double)CONCAT44(uVar7, fVar30);
            dVar20 = in_xd10;

            if (fVar30 < 0.0) {
                fVar27 = g_8c25bb00;

                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) + fVar27);
            }
            fVar30 = (float)(uVar6 >> 8 & 0xff);
            in_dr14 = dVar34;

            in_dr14 = (double)CONCAT44(fVar30, fVar32);

            if (fVar30 < 0.0) {
                fVar32 = g_8c25bb00;

                in_dr14 = (double)CONCAT44((float)((u64)in_dr14 >> 0x20) + fVar32, SUB84(in_dr14, 0));
            }
            fVar32 = (float)(uVar6 & 0xff);
            dVar16 = dVar34;

            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), fVar32);
            dVar16 = in_xd12;

            if (fVar32 < 0.0) {
                fVar30 = g_8c25bb00;

                in_dr12 = (double)(u64)(u32)(SUB84(in_dr12, 0) + fVar30);
            }
            uVar7 = *(u32 *)(puVar15 + iVar11 + 0x18);
            fVar32 = (float)(uVar7 >> 0x18);
            dVar31 = dVar34;

            dVar31 = (double)CONCAT44(fVar32, SUB84(in_dr12, 0));

            if (fVar32 < 0.0) {
                fVar30 = g_8c25bb00;

                dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) + fVar30, SUB84(dVar31, 0));
            }
            fVar32 = (float)(uVar7 >> 0x10 & 0xff);

            *(float *)(puVar15 + iVar4 + 8) = fVar32;

            if (0.0 <= fVar32) {

                fVar32 = *(float *)(puVar15 + iVar4 + 8);

            } else {

                dVar33 = (double)CONCAT44(fVar24, g_8c25bb00);
                fVar32 = *(float *)(puVar15 + iVar4 + 8);

                fVar32 = fVar32 + SUB84(dVar33, 0);
            }
            uVar6 = uVar7 >> 8 & 0xff;
            dVar33 = (double)((u64)dVar33 & 0xffffffff00000000);

            *(float *)(puVar15 + iVar4 + 0x18) = fVar32;

            fVar24 = (float)uVar6;
            dVar22 = (double)CONCAT44(fVar24, fVar32);
            bVar37 = fVar24 < 0.0;

            *(float *)(puVar15 + iVar4 + 4) = fVar24;

            if (bVar37) {

                dVar33 = (double)((u64)(u32)g_8c25bb00 << 0x20);
                dVar22 = (double)CONCAT44(*(u32 *)(puVar15 + iVar4 + 4), SUB84(dVar22, 0));

                fVar32 = (float)((u64)dVar22 >> 0x20) + (float)((u64)dVar33 >> 0x20);

            } else
                fVar32 = *(float *)(puVar15 + iVar4 + 4);

            dVar22 = (double)((u64)(u32)fVar32 << 0x20);

            *(float *)(puVar15 + iVar4 + 0x14) = fVar32;

            uVar26 = (u32)((u64)dVar33 >> 0x20);
            fVar24 = (float)(uVar7 & 0xff);
            dVar33 = (double)CONCAT44(uVar26, fVar24);

            bVar37 = fVar24 < 0.0;

            *(float *)(puVar15 + iVar4) = fVar24;

            if (bVar37) {

                dVar22 = (double)CONCAT44(fVar32, *(u32 *)(puVar15 + iVar4));
                dVar33 = (double)CONCAT44(uVar26, g_8c25bb00);

                dVar22 = (double)(u64)(u32)(SUB84(dVar22, 0) + SUB84(dVar33, 0));

            } else
                dVar22 = (double)(u64) * (u32 *)(puVar15 + iVar4);

            dVar31 = (double)CONCAT44((float)((u64)dVar31 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar31, 0));

            fVar32 = SUB84(dVar22, 0);
            *(float *)(puVar15 + iVar4 + 0xc) = fVar32;
            dVar22 = (double)CONCAT44(SUB84(in_dr14, 0), SUB84(dVar33, 0));
            dVar23 = (double)CONCAT44(SUB84(dVar21, 0), fVar32);

            fVar24 = SUB84(dVar31, 0);
            fVar30 = (float)((u64)dVar22 >> 0x20);

            dVar23 =
                (double)CONCAT44(fVar30 * (float)((u64)dVar31 >> 0x20) + (float)((u64)dVar23 >> 0x20), fVar32 - fVar24);

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), fVar24);
            in_dr12 = (double)CONCAT44(SUB84(dVar29, 0), fVar24);

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), fVar30 * SUB84(dVar23, 0) + SUB84(dVar21, 0));

            uVar26 = (u32)((u64)dVar23 >> 0x20);

            *(u32 *)(puVar15 + iVar4 + 0x10) = uVar26;
            dVar22 = (double)CONCAT44(fVar30, *(u32 *)(puVar15 + iVar4 + 0x18));
            dVar23 = (double)CONCAT44(uVar26, uVar26);
            dVar33 = dVar34;

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - SUB84(dVar29, 0));

            fVar32 = (float)((u64)in_dr14 >> 0x20);
            in_xd10 = in_dr14;

            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), fVar32);
            in_xd10 = dVar20;

            fVar30 = (float)((u64)dVar22 >> 0x20);

            in_dr12 = (double)CONCAT44(fVar30 * SUB84(dVar22, 0) + (float)((u64)in_dr12 >> 0x20), fVar24);

            dVar22 = (double)CONCAT44(fVar30, *(u32 *)(puVar15 + iVar4 + 0x14));

            fVar24 = (float)((u64)dVar22 >> 0x20);
            dVar29 =
                (double)CONCAT44((int)((u64)dVar29 >> 0x20), fVar24 * (SUB84(dVar22, 0) - fVar32) + SUB84(dVar29, 0));

            in_dr0 = (double)CONCAT44(fVar24, 0x4f000000);

            bVar37 = SUB84(dVar23, 0) < 0x4f000000;

            if (!bVar37) {

                in_dr0 = (double)CONCAT44(fVar24, 0x4f000000 + 0x4f000000);
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) - (0x4f000000 + 0x4f000000));
            }

            iVar39 = (int)SUB84(dVar23, 0);

            uVar26 = (u32)((u64)dVar23 >> 0x20);
            dVar20 = (double)CONCAT44(uVar26, 0x4f000000);
            fVar32 = (float)((u64)in_dr12 >> 0x20);

            bVar37 = fVar32 < 0x4f000000;

            if (!bVar37) {

                dVar20 = (double)CONCAT44(uVar26, 0x4f000000 + 0x4f000000);
                in_dr12 = (double)CONCAT44(fVar32 - (0x4f000000 + 0x4f000000), SUB84(in_dr12, 0));
            }

            iVar11 = (int)(float)((u64)in_dr12 >> 0x20);

            uVar26 = (u32)((u64)dVar20 >> 0x20);
            dVar20 = (double)CONCAT44(uVar26, 0x4f000000);

            bVar37 = SUB84(dVar29, 0) < 0x4f000000;

            if (!bVar37) {

                dVar20 = (double)CONCAT44(uVar26, 0x4f000000 + 0x4f000000);
                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) - (0x4f000000 + 0x4f000000));
            }

            iVar40 = (int)SUB84(dVar29, 0);

            uVar26 = (u32)((u64)dVar20 >> 0x20);
            dVar20 = (double)CONCAT44(uVar26, 0x4f000000);

            bVar37 = SUB84(dVar21, 0) < 0x4f000000;

            if (!bVar37) {

                dVar20 = (double)CONCAT44(uVar26, 0x4f000000 + 0x4f000000);
                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) - (0x4f000000 + 0x4f000000));
            }

            uVar7 = (u32)SUB84(dVar21, 0);

            iVar9 = iVar9 + 1;
            *puVar5 = iVar39 << 0x18 | iVar11 << 0x10 | iVar40 << 8 | uVar7;
            in_xd12 = dVar16;
            in_xd14 = dVar36;
        }
        pdVar13 = (double *)(puVar15 + iVar10 * 0x1c + iVar2);

        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)((int)pdVar13 + 0x14));

        bVar37 = (float)((u64)dVar21 >> 0x20) < SUB84(dVar20, 0);

        if (bVar37) {

            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)pdVar13);

            puVar8 = puVar1 + iVar9 * 4;

            puVar8[3] = SUB84(dVar20, 0);
            puVar8[2] = *(u32 *)((int)pdVar13 + 4);
            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(pdVar13 + 1));
            puVar8[1] = *(u32 *)(pdVar13 + 1);

            iVar9 = iVar9 + 1;
            *puVar8 = *(u32 *)(pdVar13 + 3);
        }
        iVar11 = iVar10 + 1;
        iVar39 = iVar10;
        iVar10 = iVar11;
    } while (iVar11 < 3);
    *(u32 *)(a3 + 3) = *puVar1;

    *(u32 *)((int)a3 + 0xc) = *(u32 *)(puVar15 + iVar4 + 0x20);
    *(u32 *)(a3 + 1) = *(u32 *)(puVar15 + iVar4 + 0x24);
    puVar12 = (u64 *)((int)a3 + 4);
    *(u32 *)puVar12 = *(u32 *)(puVar15 + iVar4 + 0x28);

    *(u32 *)((int)puVar12 + -4) = uVar3;
    *(u32 *)((int)puVar12 + 0x34) = *(u32 *)(puVar15 + iVar4 + 0x2c);

    *(u32 *)(puVar12 + 5) = *(u32 *)(puVar15 + iVar4 + 0x30);
    *(u32 *)((int)puVar12 + 0x24) = *(u32 *)(puVar15 + iVar4 + 0x34);
    puVar12 = puVar12 + 4;
    *(u32 *)puVar12 = *(u32 *)(puVar15 + iVar4 + 0x38);

    *(u32 *)((int)puVar12 + -4) = uVar3;
    if (iVar9 != 3) {
        *(u32 *)((int)puVar12 + 0x34) = *(u32 *)(puVar15 + iVar4 + 0x4c);

        *(u32 *)(puVar12 + 5) = *(u32 *)(puVar15 + iVar4 + 0x50);
        *(u32 *)((int)puVar12 + 0x24) = *(u32 *)(puVar15 + iVar4 + 0x54);
        puVar12 = puVar12 + 4;
        *(u32 *)puVar12 = *(u32 *)(puVar15 + iVar4 + 0x58);

        *(u32 *)((int)puVar12 + -4) = uVar3;
    }
    *(u32 *)((int)puVar12 + 0x34) = *(u32 *)(puVar15 + iVar4 + 0x3c);
    uVar3 = 0xf0000000;

    *(u32 *)(puVar12 + 5) = *(u32 *)(puVar15 + iVar4 + 0x40);
    *(u32 *)((int)puVar12 + 0x24) = *(u32 *)(puVar15 + iVar4 + 0x44);
    puVar12 = puVar12 + 4;
    *(u32 *)puVar12 = *(u32 *)(puVar15 + iVar4 + 0x48);

    *(u32 *)((int)puVar12 + -4) = uVar3;
    return (u32 *)((int)puVar12 + 0x1c);
}

/*
 * ninja_calls_fill_loop_25bc88  0x8c25bc88
 * area name: in the ninja library code range; behaviour name: its callees mostly do: fill_loop
 * called by: gfxlib_draw_235bfc
 */
u64 *ninja_calls_fill_loop_25bc88(u32 *a0, int a1, u64 *a2, int a3) {
    bool bVar1;
    int iVar2;
    u32 *puVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u64 *puVar7;
    bool bVar8;
    u32 *ar6_00;
    u32 *ar5_00;
    u64 in_dr2;
    double dVar9;
    float fVar10;
    double in_dr4;
    float fVar11;
    u64 in_dr14;
    double dVar12;
    bool bVar13;
    bool bVar14;
    char cVar15;
    char cVar16;
    int iStack_38;
    int iStack_2c;
    int iStack_28;

    cVar16 = '\0';
    cVar15 = '\0';
    iVar2 = 0;
    iVar4 = 0;
    bVar8 = false;
    if (a3 < 1) {
        uVar6 = 0xe0000000;
        iVar5 = a1;
        do {
            puVar3 = a0 + iVar2 * 6;
            *(u32 *)(a2 + 3) = *puVar3;
            *(u32 *)((int)a2 + 0x14) = puVar3[1];
            *(u32 *)(a2 + 2) = puVar3[2];
            *(u32 *)((int)a2 + 0xc) = puVar3[3];
            *(u32 *)(a2 + 1) = puVar3[4];
            *(u32 *)((int)a2 + 4) = puVar3[5];
            *(u32 *)a2 = uVar6;
            bVar8 = (bool)(bVar8 ^ 1);
            a2 = a2 + 4;
            if (bVar8) {
                iVar2 = iVar5 + -1;
                iVar5 = iVar2;
            } else {
                iVar2 = iVar4 + 1;
                iVar4 = iVar2;
            }
            a1 = a1 + -1;
            if (a1 == 0) {
                uVar6 = 0xf0000000;
            }
        } while (-1 < a1);
        return a2;
    }
    bVar8 = false;
    iStack_28 = 1;
    iStack_2c = a1 + -1;
    bVar1 = false;
    iStack_38 = a1 + -2;
    iVar4 = 1;
    dVar9 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aa4d4);
    dVar12 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), 1.0 / g_8c4aa4d4);
    puVar3 = a0;
    ar5_00 = a0 + iStack_2c * 6;
    do {
        dVar9 = (double)((u64)dVar9 & 0xffffffff00000000);
        if (cVar16 == '\0') {
            in_dr4 = (double)CONCAT44(puVar3[3], SUB84(in_dr4, 0));
        } else {
            in_dr4 = *(double *)(puVar3 + 3);
        }
        bVar14 = false;
        fVar10 = (float)((u64)in_dr4 >> 0x20);
        if (cVar15 == '\0') {
            bVar13 = 0.0 < fVar10;
        } else {
            bVar13 = dVar9 < in_dr4;
        }
        ar6_00 = a0 + iVar4 * 6;
        fVar11 = SUB84(dVar12, 0);
        if (bVar13) {
            if (cVar15 == '\0') {
                bVar13 = fVar10 < fVar11;
            } else {
                bVar13 = in_dr4 < dVar12;
            }
            if (!bVar13)
                goto LAB_8c25bd92;
            if (cVar16 == '\0') {
                dVar9 = (double)((u64)(u32)ar5_00[3] << 0x20);
            } else {
                dVar9 = *(double *)(ar5_00 + 3);
            }
            fVar10 = (float)((u64)dVar9 >> 0x20);
            if (cVar15 != '\0' || fVar10 <= SUB84(dVar9, 0))
                goto LAB_8c25bd92;
            if (cVar16 == '\0') {
                dVar9 = (double)CONCAT44(fVar10, ar5_00[3]);
            }
            if (cVar15 == '\0') {
                bVar13 = SUB84(dVar9, 0) < fVar11;
            } else {
                bVar13 = dVar9 < dVar12;
            }
            if (!bVar13)
                goto LAB_8c25bd92;
            if (cVar16 == '\0') {
                fVar10 = (float)ar6_00[3];
            } else {
                fVar10 = (float)((u64) * (u64 *)(ar6_00 + 3) >> 0x20);
            }
            dVar9 = (double)((u64)(u32)fVar10 << 0x20);
            if (cVar15 != '\0' || fVar10 <= 0.0)
                goto LAB_8c25bd92;
            if (cVar16 == '\0') {
                dVar9 = (double)CONCAT44(fVar10, ar6_00[3]);
            }
            if (cVar15 == '\0') {
                bVar13 = SUB84(dVar9, 0) < fVar11;
            } else {
                bVar13 = dVar9 < dVar12;
            }
            if (!bVar13)
                goto LAB_8c25bd92;
        } else {
        LAB_8c25bd92:
            bVar14 = true;
        }
        uVar6 = (u32)((u64)dVar9 >> 0x20);
        if (bVar14) {
            if (bVar8) {
                *(u32 *)(a2 + 3) = *ar5_00;
                if (cVar16 == '\0') {
                    *(u32 *)((int)a2 + 0x14) = ar5_00[1];
                    *(u32 *)(a2 + 2) = ar5_00[2];
                    *(u32 *)((int)a2 + 0xc) = ar5_00[3];
                    *(u32 *)(a2 + 1) = ar5_00[4];
                    dVar9 = (double)CONCAT44(uVar6, ar5_00[5]);
                    puVar7 = (u64 *)((int)a2 + 4);
                    *(u32 *)puVar7 = ar5_00[5];
                } else {
                    a2[2] = *(u64 *)(ar5_00 + 1);
                    a2[1] = *(u64 *)(ar5_00 + 2);
                    *a2 = *(u64 *)(ar5_00 + 3);
                    a2[-1] = *(u64 *)(ar5_00 + 4);
                    puVar7 = a2 + -2;
                    *puVar7 = *(u64 *)(ar5_00 + 5);
                }
                *(u32 *)((int)puVar7 + -4) = 0xf0000000;
                bVar8 = false;
                a2 = (u64 *)((int)puVar7 + 0x1c);
            }
            dVar9 = (double)((u64)dVar9 & 0xffffffff00000000);
            if (cVar16 == '\0') {
                in_dr4 = (double)CONCAT44(puVar3[3], SUB84(in_dr4, 0));
            } else {
                in_dr4 = *(double *)(puVar3 + 3);
            }
            fVar10 = (float)((u64)in_dr4 >> 0x20);
            if (cVar15 == '\0') {
                bVar14 = 0.0 < fVar10;
            } else {
                bVar14 = dVar9 < in_dr4;
            }
            if (bVar14) {
                if (cVar15 == '\0') {
                    bVar14 = fVar10 < fVar11;
                } else {
                    bVar14 = in_dr4 < dVar12;
                }
                if (!bVar14)
                    goto LAB_8c25be34;
            LAB_8c25be50:
                a2 = (u64 *)ninja_fill_loop_25bed8(puVar3, ar5_00, ar6_00, a2);
            } else {
            LAB_8c25be34:
                if (cVar16 == '\0') {
                    fVar10 = (float)ar5_00[3];
                } else {
                    fVar10 = (float)((u64) * (u64 *)(ar5_00 + 3) >> 0x20);
                }
                if (cVar15 == '\0' && 0.0 < fVar10) {
                    if (cVar16 == '\0') {
                        dVar9 = (double)((u64)(u32)ar5_00[3] << 0x20);
                    } else {
                        dVar9 = *(double *)(ar5_00 + 3);
                    }
                    if (cVar15 == '\0') {
                        bVar14 = (float)((u64)dVar9 >> 0x20) < fVar11;
                    } else {
                        bVar14 = dVar9 < dVar12;
                    }
                    if (bVar14)
                        goto LAB_8c25be50;
                }
                if (cVar16 == '\0') {
                    fVar10 = (float)ar6_00[3];
                } else {
                    fVar10 = (float)((u64) * (u64 *)(ar6_00 + 3) >> 0x20);
                }
                dVar9 = (double)((u64)(u32)fVar10 << 0x20);
                if (cVar15 == '\0' && 0.0 < fVar10) {
                    if (cVar16 == '\0') {
                        dVar9 = (double)((u64)(u32)ar6_00[3] << 0x20);
                    } else {
                        dVar9 = *(double *)(ar6_00 + 3);
                    }
                    if (cVar15 == '\0') {
                        bVar14 = (float)((u64)dVar9 >> 0x20) < fVar11;
                    } else {
                        bVar14 = dVar9 < dVar12;
                    }
                    if (bVar14)
                        goto LAB_8c25be50;
                }
            }
        } else {
            if (!bVar8) {
                *(u32 *)(a2 + 3) = *puVar3;
                if (cVar16 == '\0') {
                    *(u32 *)((int)a2 + 0x14) = puVar3[1];
                    *(u32 *)(a2 + 2) = puVar3[2];
                    *(u32 *)((int)a2 + 0xc) = puVar3[3];
                    *(u32 *)(a2 + 1) = puVar3[4];
                    dVar9 = (double)CONCAT44(uVar6, puVar3[5]);
                    puVar7 = (u64 *)((int)a2 + 4);
                    *(u32 *)puVar7 = puVar3[5];
                } else {
                    a2[2] = *(u64 *)(puVar3 + 1);
                    a2[1] = *(u64 *)(puVar3 + 2);
                    *a2 = *(u64 *)(puVar3 + 3);
                    a2[-1] = *(u64 *)(puVar3 + 4);
                    puVar7 = a2 + -2;
                    *puVar7 = *(u64 *)(puVar3 + 5);
                }
                *(u32 *)((int)puVar7 + -4) = 0xe0000000;
                bVar8 = true;
                a2 = (u64 *)((int)puVar7 + 0x1c);
            }
            *(u32 *)(a2 + 3) = *ar5_00;
            if (cVar16 == '\0') {
                *(u32 *)((int)a2 + 0x14) = ar5_00[1];
                *(u32 *)(a2 + 2) = ar5_00[2];
                *(u32 *)((int)a2 + 0xc) = ar5_00[3];
                *(u32 *)(a2 + 1) = ar5_00[4];
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), ar5_00[5]);
                puVar7 = (u64 *)((int)a2 + 4);
                *(u32 *)puVar7 = ar5_00[5];
            } else {
                a2[2] = *(u64 *)(ar5_00 + 1);
                a2[1] = *(u64 *)(ar5_00 + 2);
                *a2 = *(u64 *)(ar5_00 + 3);
                a2[-1] = *(u64 *)(ar5_00 + 4);
                puVar7 = a2 + -2;
                *puVar7 = *(u64 *)(ar5_00 + 5);
            }
            *(u32 *)((int)puVar7 + -4) = 0xe0000000;
            a2 = (u64 *)((int)puVar7 + 0x1c);
        }
        bVar1 = (bool)(bVar1 ^ 1);
        if (bVar1) {
            iVar4 = iStack_2c + -1;
            iStack_2c = iVar4;
        } else {
            iVar4 = iStack_28 + 1;
            iStack_28 = iVar4;
        }
        iStack_38 = iStack_38 + -1;
        puVar3 = ar5_00;
        ar5_00 = ar6_00;
        if (iStack_38 < 1) {
            if (bVar8) {
                *(u32 *)(a2 + 3) = *ar6_00;
                if (cVar16 == '\0') {
                    *(u32 *)((int)a2 + 0x14) = ar6_00[1];
                    *(u32 *)(a2 + 2) = ar6_00[2];
                    *(u32 *)((int)a2 + 0xc) = ar6_00[3];
                    *(u32 *)(a2 + 1) = ar6_00[4];
                    puVar7 = (u64 *)((int)a2 + 4);
                    *(u32 *)puVar7 = ar6_00[5];
                } else {
                    a2[2] = *(u64 *)(ar6_00 + 1);
                    a2[1] = *(u64 *)(ar6_00 + 2);
                    *a2 = *(u64 *)(ar6_00 + 3);
                    a2[-1] = *(u64 *)(ar6_00 + 4);
                    puVar7 = a2 + -2;
                    *puVar7 = *(u64 *)(ar6_00 + 5);
                }
                *(u32 *)((int)puVar7 + -4) = 0xf0000000;
                a2 = (u64 *)((int)puVar7 + 0x1c);
            }
            return a2;
        }
    } while (true);
}

/*
 * ninja_calls_fill_loop_25bd0a  0x8c25bd0a
 * area name: in the ninja library code range; behaviour name: its callees mostly do: fill_loop
 */
u64 *ninja_calls_fill_loop_25bd0a(u32 a0, u32 a1, u64 *a2) {
    bool bVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 *a4;
    int iVar5;
    u64 *puVar6;
    u32 *a6;
    u32 *puVar7;
    u64 *puVar8;
    double in_dr2;
    float fVar9;
    double in_dr4;
    float fVar10;
    u64 in_dr14;
    u32 uVar12;
    double dVar11;
    bool bVar13;
    bool bVar14;
    u32 in_PR;
    u64 uStack_24;

    uVar2 = 0xe0000000;

    puVar8 = (u64 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44((int)in_dr14, (u32)uStack_24);

    *(u32 *)((int)puVar8 + -4) = in_PR;
    *(u32 *)((int)puVar8 + -0x14) = a0;
    uVar12 = (u32)((u64)in_dr14 >> 0x20);
    *(u32 *)((int)puVar8 + -0x18) = a1;
    bVar1 = false;
    *(u32 *)((int)puVar8 + -8) = 1;
    iVar4 = *(int *)((int)puVar8 + -0x18);
    *(int *)((int)puVar8 + -0xc) = iVar4 + -1;
    *(u32 *)((int)puVar8 + -0x10) = 0;
    a4 = *(u32 **)((int)puVar8 + -0x14);
    iVar5 = *(int *)((int)puVar8 + -8);
    *(int *)((int)puVar8 + -0x18) = *(int *)((int)puVar8 + -0x18) + -2;

    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aa4d4);

    puVar7 = a4 + (iVar4 + -1) * 6;

    dVar11 = (double)CONCAT44(uVar12, 1.0 / SUB84(in_dr2, 0));

    do {
        in_dr2 = (double)((u64)in_dr2 & 0xffffffff00000000);

        in_dr4 = (double)CONCAT44(a4[3], SUB84(in_dr4, 0));

        bVar14 = false;
        fVar9 = (float)((u64)in_dr4 >> 0x20);

        bVar13 = 0.0 < fVar9;

        a6 = (u32 *)(iVar5 * 0x18 + *(int *)((int)puVar8 + -0x14));
        fVar10 = SUB84(dVar11, 0);
        if (bVar13) {

            bVar13 = fVar9 < fVar10;

            if (!bVar13)
                goto LAB_8c25bd92;

            in_dr2 = (double)((u64)(u32)puVar7[3] << 0x20);

            fVar9 = (float)((u64)in_dr2 >> 0x20);
            if (fVar9 <= SUB84(in_dr2, 0))
                goto LAB_8c25bd92;

            in_dr2 = (double)CONCAT44(fVar9, puVar7[3]);

            bVar13 = SUB84(in_dr2, 0) < fVar10;

            if (!bVar13)
                goto LAB_8c25bd92;

            fVar9 = (float)a6[3];

            in_dr2 = (double)((u64)(u32)fVar9 << 0x20);
            if (fVar9 <= 0.0)
                goto LAB_8c25bd92;

            in_dr2 = (double)CONCAT44(fVar9, a6[3]);

            bVar13 = SUB84(in_dr2, 0) < fVar10;

            if (!bVar13)
                goto LAB_8c25bd92;
        } else {
        LAB_8c25bd92:
            bVar14 = true;
        }
        uVar12 = (u32)((u64)in_dr2 >> 0x20);
        if (bVar14) {
            if (bVar1) {
                *(u32 *)(a2 + 3) = *puVar7;
                uVar3 = 0xf0000000;

                *(u32 *)((int)a2 + 0x14) = puVar7[1];
                *(u32 *)(a2 + 2) = puVar7[2];
                *(u32 *)((int)a2 + 0xc) = puVar7[3];
                *(u32 *)(a2 + 1) = puVar7[4];
                in_dr2 = (double)CONCAT44(uVar12, puVar7[5]);
                puVar6 = (u64 *)((int)a2 + 4);
                *(u32 *)puVar6 = puVar7[5];

                *(u32 *)((int)puVar6 + -4) = uVar3;
                bVar1 = false;
                a2 = (u64 *)((int)puVar6 + 0x1c);
            }
            in_dr2 = (double)((u64)in_dr2 & 0xffffffff00000000);

            in_dr4 = (double)CONCAT44(a4[3], SUB84(in_dr4, 0));

            fVar9 = (float)((u64)in_dr4 >> 0x20);

            bVar14 = 0.0 < fVar9;

            if (bVar14) {

                bVar14 = fVar9 < fVar10;

                if (!bVar14)
                    goto LAB_8c25be34;
            LAB_8c25be50:
                a2 = (u64 *)ninja_fill_loop_25bed8(a4, puVar7, a6, a2);
            } else {
            LAB_8c25be34:

                fVar9 = (float)puVar7[3];

                if (0.0 < fVar9) {

                    in_dr2 = (double)((u64)(u32)puVar7[3] << 0x20);

                    bVar14 = (float)((u64)in_dr2 >> 0x20) < fVar10;

                    if (bVar14)
                        goto LAB_8c25be50;
                }

                fVar9 = (float)a6[3];

                in_dr2 = (double)((u64)(u32)fVar9 << 0x20);
                if (0.0 < fVar9) {

                    in_dr2 = (double)((u64)(u32)a6[3] << 0x20);

                    bVar14 = (float)((u64)in_dr2 >> 0x20) < fVar10;

                    if (bVar14)
                        goto LAB_8c25be50;
                }
            }
        } else {
            if (!bVar1) {
                *(u32 *)(a2 + 3) = *a4;

                *(u32 *)((int)a2 + 0x14) = a4[1];
                *(u32 *)(a2 + 2) = a4[2];
                *(u32 *)((int)a2 + 0xc) = a4[3];
                *(u32 *)(a2 + 1) = a4[4];
                in_dr2 = (double)CONCAT44(uVar12, a4[5]);
                puVar6 = (u64 *)((int)a2 + 4);
                *(u32 *)puVar6 = a4[5];

                *(u32 *)((int)puVar6 + -4) = uVar2;
                bVar1 = true;
                a2 = (u64 *)((int)puVar6 + 0x1c);
            }
            *(u32 *)(a2 + 3) = *puVar7;

            *(u32 *)((int)a2 + 0x14) = puVar7[1];
            *(u32 *)(a2 + 2) = puVar7[2];
            *(u32 *)((int)a2 + 0xc) = puVar7[3];
            *(u32 *)(a2 + 1) = puVar7[4];
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), puVar7[5]);
            puVar6 = (u64 *)((int)a2 + 4);
            *(u32 *)puVar6 = puVar7[5];

            *(u32 *)((int)puVar6 + -4) = uVar2;
            a2 = (u64 *)((int)puVar6 + 0x1c);
        }
        iVar4 = *(int *)((int)puVar8 + -0x10);
        *(u32 *)((int)puVar8 + -0x10) = iVar4 + 1U;
        if ((iVar4 + 1U & 1) == 0) {
            iVar5 = *(int *)((int)puVar8 + -8) + 1;
            *(int *)((int)puVar8 + -8) = iVar5;
        } else {
            iVar5 = *(int *)((int)puVar8 + -0xc) + -1;
            *(int *)((int)puVar8 + -0xc) = iVar5;
        }
        iVar4 = *(int *)((int)puVar8 + -0x18);
        *(int *)((int)puVar8 + -0x18) = iVar4 + -1;
        a4 = puVar7;
        puVar7 = a6;
        if (iVar4 + -1 < 1) {
            if (bVar1) {
                *(u32 *)(a2 + 3) = *a6;
                uVar2 = 0xf0000000;

                *(u32 *)((int)a2 + 0x14) = a6[1];
                *(u32 *)(a2 + 2) = a6[2];
                *(u32 *)((int)a2 + 0xc) = a6[3];
                *(u32 *)(a2 + 1) = a6[4];
                puVar6 = (u64 *)((int)a2 + 4);
                *(u32 *)puVar6 = a6[5];

                *(u32 *)((int)puVar6 + -4) = uVar2;
                a2 = (u64 *)((int)puVar6 + 0x1c);
            }
            return a2;
        }
    } while (true);
}

/*
 * ninja_fill_loop_25bed8  0x8c25bed8
 * area name: in the ninja library code range; behaviour name: a loop that writes memory
 * called by: ninja_calls_fill_loop_25bc88, ninja_calls_fill_loop_25bd0a
 */
u32 *ninja_fill_loop_25bed8(u32 *a0, u32 *a1, u32 *a2, u64 *a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;
    u32 *puVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    u64 *puVar11;
    double *pdVar12;
    u32 *puVar13;
    u8 *puVar14;
    u8 *puVar15;
    double in_dr0;
    double dVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    double dVar21;
    double dVar22;
    double dVar23;
    double dVar24;
    float fVar25;
    u32 in_fr5;
    double dVar26;
    float fVar28;
    u32 in_fr9;
    float fVar29;
    double dVar30;
    u32 in_fr11;
    double dVar31;
    double in_dr12;
    double in_dr14;
    double dVar32;
    double in_xd2;
    double dVar33;
    double dVar34;
    double in_xd4;
    double dVar35;
    double in_xd6;
    double in_xd12;
    double in_xd14;
    bool bVar36;
    bool bVar37;
    int iVar38;
    int iVar39;
    u8 auStack_24[8];
    u8 auStack_1c[4];
    u32 uVar27;

    uVar2 = 0xe0000000;

    _auStack_1c = CONCAT44(SUB84(in_dr14, 0), auStack_1c);
    puVar14 = auStack_1c;

    iVar3 = (int)(int)0xffffff18;

    *(int *)(puVar14 + -4) = SUB84(in_dr12, 0);
    puVar15 = puVar14 + -8;
    *(int *)(puVar14 + -8) = (int)((u64)in_dr12 >> 0x20);

    iVar1 = iVar3 + 0x7c;

    uVar27 = *(u32 *)0x8c4aa4a8;
    dVar21 = (double)CONCAT44(*(u32 *)0x8c4aa4e0, *(u32 *)0x8c4aa4dc);
    dVar26 = (double)CONCAT44(uVar27, *(u32 *)((int)0x8c4aa4a8 + 0xc));
    in_fr9 = *(u32 *)(0x8c4aa4a8 + 2);
    dVar30 = (double)CONCAT44(uVar27, in_fr5);

    dVar26 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) * SUB84(dVar21, 0), SUB84(dVar26, 0));

    dVar30 = (double)CONCAT44(uVar27, in_fr9);

    dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) * (float)((u64)dVar21 >> 0x20), SUB84(dVar30, 0));

    dVar31 = (double)CONCAT44(0x3f800000, in_fr11);
    dVar33 = dVar31;
    dVar35 = dVar31;
    dVar22 = dVar31;

    dVar33 = 0.007812501848093234;
    dVar35 = in_xd4;
    dVar22 = (double)CONCAT44(0x3f800000, SUB84(dVar21, 0));

    fVar25 = (float)((u64)dVar26 >> 0x20);
    fVar20 = (float)((u64)dVar30 >> 0x20);

    dVar21 = (double)CONCAT44((float)((u64)dVar33 >> 0x20) / fVar20, SUB84(dVar33, 0) / fVar25);

    *(u32 *)(puVar15 + iVar3 + 0x9c) = *a0;

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), a0[3]);

    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) / SUB84(dVar22, 0), SUB84(dVar22, 0));

    pdVar12 = (double *)(puVar15 + iVar3 + 0x98);
    *(int *)pdVar12 = (int)((u64)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(*(u32 *)(puVar15 + iVar3 + 0x98), a0[4]);

    fVar29 = SUB84(dVar30, 0);
    fVar19 = (float)((u64)dVar21 >> 0x20);

    fVar17 = (SUB84(dVar22, 0) - fVar29) * (float)((u64)dVar22 >> 0x20) * fVar19;

    pdVar12 = (double *)((int)pdVar12 + -4);
    *(float *)pdVar12 = fVar17;
    dVar22 = (double)CONCAT44(*(u32 *)(puVar15 + iVar3 + 0x98), a0[5]);

    fVar28 = SUB84(dVar26, 0);
    fVar17 = SUB84(dVar21, 0);

    fVar18 = (SUB84(dVar22, 0) - fVar28) * (float)((u64)dVar22 >> 0x20) * fVar17;

    *(float *)((int)pdVar12 + -4) = fVar18;
    *(u32 *)(pdVar12 + -1) = a0[1];
    *(u32 *)((int)pdVar12 + -0xc) = a0[2];
    *(u32 *)(pdVar12 + -2) = a0[3];
    *(u32 *)((int)pdVar12 + -0x14) = a0[4];
    fVar18 = (float)a0[5];
    pdVar12 = pdVar12 + -3;
    *(float *)pdVar12 = fVar18;

    dVar22 = dVar31;

    dVar22 = (double)CONCAT44(0x3f800000, fVar18);

    *(u32 *)((int)pdVar12 + 0x44) = *a1;

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), a1[3]);

    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) / SUB84(dVar22, 0), SUB84(dVar22, 0));

    pdVar12 = pdVar12 + 8;
    *(int *)pdVar12 = (int)((u64)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(*(u32 *)(puVar15 + iVar3 + 0xbc), a1[4]);

    fVar18 = (SUB84(dVar22, 0) - fVar29) * (float)((u64)dVar22 >> 0x20) * fVar19;

    pdVar12 = (double *)((int)pdVar12 + -4);
    *(float *)pdVar12 = fVar18;
    dVar22 = (double)CONCAT44(*(u32 *)(puVar15 + iVar3 + 0xbc), a1[5]);

    fVar18 = (SUB84(dVar22, 0) - fVar28) * (float)((u64)dVar22 >> 0x20) * fVar17;

    *(float *)((int)pdVar12 + -4) = fVar18;
    *(u32 *)(pdVar12 + -1) = a1[1];
    *(u32 *)((int)pdVar12 + -0xc) = a1[2];
    *(u32 *)(pdVar12 + -2) = a1[3];
    *(u32 *)((int)pdVar12 + -0x14) = a1[4];
    uVar27 = a1[5];
    pdVar12 = pdVar12 + -3;
    *(u32 *)pdVar12 = uVar27;
    dVar22 = (double)CONCAT44(0x3f800000, uVar27);

    *(u32 *)((int)pdVar12 + 0x44) = *a2;

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), a2[3]);

    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) / SUB84(dVar22, 0), SUB84(dVar22, 0));

    pdVar12 = pdVar12 + 8;
    *(int *)pdVar12 = (int)((u64)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(*(u32 *)(puVar15 + iVar3 + 0xe0), a2[4]);

    fVar19 = (SUB84(dVar22, 0) - fVar29) * (float)((u64)dVar22 >> 0x20) * fVar19;

    pdVar12 = (double *)((int)pdVar12 + -4);
    *(float *)pdVar12 = fVar19;
    dVar22 = (double)CONCAT44(*(u32 *)(puVar15 + iVar3 + 0xe0), a2[5]);

    fVar19 = (float)((u64)dVar22 >> 0x20);
    dVar21 = (double)CONCAT44(fVar19, (SUB84(dVar22, 0) - fVar28) * fVar19 * fVar17);

    pdVar12 = (double *)((int)pdVar12 + -4);
    *(int *)pdVar12 = SUB84(dVar21, 0);
    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), a2[1]);

    iVar8 = 0;

    pdVar12 = (double *)((int)pdVar12 + -4);
    *(int *)pdVar12 = SUB84(dVar21, 0);

    *(u32 *)((int)pdVar12 + -4) = a2[2];
    *(u32 *)(pdVar12 + -1) = a2[3];
    *(u32 *)((int)pdVar12 + -0xc) = a2[4];
    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), a2[5]);
    *(u32 *)(pdVar12 + -2) = a2[5];
    dVar22 = (double)CONCAT44(*(u32 *)0x8c4aa4d4, fVar17);

    puVar13 = (u32 *)(puVar15 + iVar3 + 0x1c);
    dVar33 = dVar22;

    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), (int)((u64)dVar22 >> 0x20));
    dVar33 = in_xd2;

    iVar38 = 2;
    iVar9 = 0;

    fVar19 = 1.0 / SUB84(dVar21, 0);
    dVar31 = (double)CONCAT44(fVar19, in_fr11);
    dVar26 = (double)CONCAT44(fVar25 * fVar19, fVar28);
    dVar30 = (double)CONCAT44(fVar20 * fVar19, fVar29);

    do {
        iVar38 = iVar38 * 0x24 + iVar1;

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(puVar15 + iVar38 + 0x1c));

        fVar25 = (float)((u64)dVar22 >> 0x20);

        bVar36 = fVar25 < SUB84(dVar21, 0);

        iVar10 = iVar9 * 0x24 + iVar1;

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(puVar15 + iVar10 + 0x1c));

        bVar37 = fVar25 < SUB84(dVar21, 0);

        if ((bVar36 ^ 1) != -(bVar37 - 1)) {

            dVar22 = (double)CONCAT44(fVar25, *(u32 *)(puVar15 + iVar38 + 0x1c));
            dVar21 = (double)CONCAT44(*(u32 *)(puVar15 + iVar10 + 0x1c), fVar25);

            dVar21 =
                (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar21, 0) - SUB84(dVar22, 0));

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(puVar15 + iVar38 + 0x14));
            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar21, 0));

            dVar31 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar31, 0) / (float)((u64)dVar21 >> 0x20));

            dVar21 = (double)CONCAT44(SUB84(dVar22, 0), *(u32 *)(puVar15 + iVar10 + 0x14));

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) - SUB84(dVar22, 0));

            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(puVar15 + iVar38 + 0x18));
            dVar16 = (double)CONCAT44(SUB84(dVar31, 0), SUB84(in_dr0, 0));

            fVar25 = (float)((u64)dVar16 >> 0x20);

            dVar21 = (double)CONCAT44(fVar25 * SUB84(dVar21, 0) + (float)((u64)dVar21 >> 0x20), SUB84(dVar21, 0));

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(puVar15 + iVar10 + 0x18));

            fVar20 = SUB84(in_dr14, 0);

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) - fVar20);

            dVar23 = in_xd14;

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), (int)((u64)dVar21 >> 0x20));
            dVar23 = (double)CONCAT44(fVar20, SUB84(dVar21, 0));
            dVar21 = dVar35;

            dVar23 = (double)CONCAT44(fVar25 * SUB84(dVar23, 0) + (float)((u64)dVar23 >> 0x20), SUB84(dVar23, 0));

            dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)(puVar15 + iVar10 + 0xc));
            dVar32 = (double)CONCAT44(*(u32 *)(puVar15 + iVar38 + 0xc), fVar20);
            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), *(u32 *)(puVar15 + iVar38 + 0x10));

            fVar20 = (float)((u64)dVar32 >> 0x20);

            dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) - fVar20);

            dVar35 = dVar32;

            dVar32 = (double)CONCAT44(fVar20, SUB84(dVar23, 0));
            dVar35 = (double)CONCAT44(fVar20, (int)((u64)dVar23 >> 0x20));
            dVar23 = in_xd14;

            dVar32 = (double)CONCAT44(fVar25 * SUB84(dVar32, 0) + (float)((u64)dVar32 >> 0x20), SUB84(dVar32, 0));

            dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), *(u32 *)(puVar15 + iVar10 + 0x10));

            dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar32, 0) - SUB84(in_dr12, 0));

            puVar4 = puVar13 + iVar8 * 6;
            dVar24 = in_xd12;

            dVar24 = (double)CONCAT44(SUB84(in_dr12, 0), SUB84(dVar32, 0));
            dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar35, 0));

            dVar24 = (double)CONCAT44(fVar25 * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

            dVar35 = dVar21;
            dVar34 = in_xd6;

            dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar26, 0));
            dVar35 = (double)CONCAT44(SUB84(dVar22, 0), SUB84(dVar16, 0));
            dVar34 = dVar33;

            dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20),
                                      (float)((u64)dVar35 >> 0x20) * (float)((u64)dVar26 >> 0x20) + SUB84(dVar24, 0));

            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), (int)((u64)dVar24 >> 0x20));
            puVar4[5] = SUB84(dVar24, 0);
            dVar24 = (double)((u64)dVar30 & 0xffffffff);
            dVar33 = in_xd12;
            dVar16 = (double)CONCAT44(SUB84(dVar32, 0), SUB84(dVar35, 0));

            fVar20 = SUB84(dVar24, 0);
            fVar25 = (float)((u64)dVar16 >> 0x20);

            fVar20 = fVar25 * (float)((u64)dVar30 >> 0x20) + fVar20;

            uVar6 = (u32)((u64)dVar32 >> 0x20);

            puVar4[4] = (u32)fVar20;
            puVar4[3] = (u32)((u64)dVar31 >> 0x20);
            puVar4[2] = uVar6;
            puVar4[1] = SUB84(in_dr12, 0);

            uVar5 = *(u32 *)(puVar15 + iVar38 + 0x20);
            fVar20 = (float)(uVar5 >> 0x18);
            dVar35 = dVar34;

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar20);
            dVar35 = dVar21;

            if (fVar20 < 0.0) {
                fVar19 = g_8c25c1d8;

                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) + fVar19);
            }
            fVar20 = (float)(uVar5 >> 0x10 & 0xff);
            dVar21 = dVar34;

            dVar32 = (double)CONCAT44(uVar6, fVar20);
            dVar21 = dVar23;

            if (fVar20 < 0.0) {
                fVar19 = g_8c25c1d8;

                dVar32 = (double)(u64)(u32)(SUB84(dVar32, 0) + fVar19);
            }
            fVar20 = (float)(uVar5 >> 8 & 0xff);
            in_dr14 = dVar34;

            in_dr14 = (double)CONCAT44(fVar20, SUB84(dVar32, 0));

            if (fVar20 < 0.0) {
                fVar19 = g_8c25c1d8;

                in_dr14 = (double)CONCAT44((float)((u64)in_dr14 >> 0x20) + fVar19, SUB84(in_dr14, 0));
            }
            fVar20 = (float)(uVar5 & 0xff);
            in_xd12 = dVar34;

            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), fVar20);
            in_xd12 = dVar33;

            if (fVar20 < 0.0) {
                fVar19 = g_8c25c1d8;

                in_dr12 = (double)(u64)(u32)(SUB84(in_dr12, 0) + fVar19);
            }
            uVar6 = *(u32 *)(puVar15 + iVar10 + 0x20);
            fVar20 = (float)(uVar6 >> 0x18);
            dVar33 = dVar34;

            dVar33 = (double)CONCAT44(fVar20, SUB84(in_dr12, 0));

            if (fVar20 < 0.0) {
                fVar19 = g_8c25c1d8;

                dVar33 = (double)CONCAT44((float)((u64)dVar33 >> 0x20) + fVar19, SUB84(dVar33, 0));
            }
            fVar20 = (float)(uVar6 >> 0x10 & 0xff);

            *(float *)(puVar15 + iVar3 + 8) = fVar20;

            if (0.0 <= fVar20) {

                fVar20 = *(float *)(puVar15 + iVar3 + 8);

            } else {

                dVar16 = (double)CONCAT44(fVar25, g_8c25c1d8);
                fVar20 = *(float *)(puVar15 + iVar3 + 8);

                fVar20 = fVar20 + SUB84(dVar16, 0);
            }
            uVar5 = uVar6 >> 8 & 0xff;
            dVar16 = (double)((u64)dVar16 & 0xffffffff00000000);

            *(float *)(puVar15 + iVar3 + 0x18) = fVar20;

            fVar25 = (float)uVar5;
            dVar23 = (double)CONCAT44(fVar25, fVar20);
            bVar36 = fVar25 < 0.0;

            *(float *)(puVar15 + iVar3 + 4) = fVar25;

            if (bVar36) {

                dVar16 = (double)((u64)(u32)g_8c25c1d8 << 0x20);
                dVar23 = (double)CONCAT44(*(u32 *)(puVar15 + iVar3 + 4), SUB84(dVar23, 0));

                fVar25 = (float)((u64)dVar23 >> 0x20) + (float)((u64)dVar16 >> 0x20);

            } else
                fVar25 = *(float *)(puVar15 + iVar3 + 4);

            dVar23 = (double)((u64)(u32)fVar25 << 0x20);

            *(float *)(puVar15 + iVar3 + 0x14) = fVar25;

            uVar27 = (u32)((u64)dVar16 >> 0x20);
            fVar20 = (float)(uVar6 & 0xff);
            dVar16 = (double)CONCAT44(uVar27, fVar20);

            bVar36 = fVar20 < 0.0;

            *(float *)(puVar15 + iVar3) = fVar20;

            if (bVar36) {

                dVar23 = (double)CONCAT44(fVar25, *(u32 *)(puVar15 + iVar3));
                dVar16 = (double)CONCAT44(uVar27, g_8c25c1d8);

                dVar23 = (double)(u64)(u32)(SUB84(dVar23, 0) + SUB84(dVar16, 0));

            } else
                dVar23 = (double)(u64) * (u32 *)(puVar15 + iVar3);

            dVar33 = (double)CONCAT44((float)((u64)dVar33 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar33, 0));

            fVar25 = SUB84(dVar23, 0);
            *(float *)(puVar15 + iVar3 + 0xc) = fVar25;
            dVar16 = (double)CONCAT44(SUB84(dVar31, 0), SUB84(dVar16, 0));
            dVar23 = (double)CONCAT44(SUB84(dVar22, 0), fVar25);

            fVar20 = SUB84(dVar33, 0);
            fVar19 = (float)((u64)dVar16 >> 0x20);

            dVar23 =
                (double)CONCAT44(fVar19 * (float)((u64)dVar33 >> 0x20) + (float)((u64)dVar23 >> 0x20), fVar25 - fVar20);

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar20);
            in_dr12 = (double)CONCAT44(SUB84(in_dr14, 0), fVar20);

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar19 * SUB84(dVar23, 0) + SUB84(dVar22, 0));

            uVar27 = (u32)((u64)dVar23 >> 0x20);

            *(u32 *)(puVar15 + iVar3 + 0x10) = uVar27;
            dVar16 = (double)CONCAT44(fVar19, *(u32 *)(puVar15 + iVar3 + 0x18));
            dVar23 = (double)CONCAT44(uVar27, uVar27);
            dVar33 = dVar34;

            dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar16, 0) - SUB84(in_dr14, 0));

            in_xd14 = in_dr14;

            uVar27 = (u32)((u64)in_dr14 >> 0x20);
            in_dr14 = (double)CONCAT44(uVar27, uVar27);
            in_xd14 = dVar21;

            fVar25 = (float)((u64)dVar16 >> 0x20);

            in_dr12 = (double)CONCAT44(fVar25 * SUB84(dVar16, 0) + (float)((u64)in_dr12 >> 0x20), fVar20);

            dVar16 = (double)CONCAT44(fVar25, *(u32 *)(puVar15 + iVar3 + 0x14));

            fVar25 = (float)((u64)in_dr14 >> 0x20);

            fVar20 = (float)((u64)dVar16 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar25, fVar20 * (SUB84(dVar16, 0) - fVar25) + SUB84(in_dr14, 0));

            in_dr0 = (double)CONCAT44(fVar20, 0x4f000000);

            bVar36 = SUB84(dVar23, 0) < 0x4f000000;

            if (!bVar36) {

                in_dr0 = (double)CONCAT44(fVar20, 0x4f000000 + 0x4f000000);
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) - (0x4f000000 + 0x4f000000));
            }

            iVar38 = (int)SUB84(dVar23, 0);

            uVar27 = (u32)((u64)dVar23 >> 0x20);
            dVar21 = (double)CONCAT44(uVar27, 0x4f000000);
            fVar25 = (float)((u64)in_dr12 >> 0x20);

            bVar36 = fVar25 < 0x4f000000;

            if (!bVar36) {

                dVar21 = (double)CONCAT44(uVar27, 0x4f000000 + 0x4f000000);
                in_dr12 = (double)CONCAT44(fVar25 - (0x4f000000 + 0x4f000000), SUB84(in_dr12, 0));
            }

            iVar10 = (int)(float)((u64)in_dr12 >> 0x20);

            uVar27 = (u32)((u64)dVar21 >> 0x20);
            dVar21 = (double)CONCAT44(uVar27, 0x4f000000);

            bVar36 = SUB84(in_dr14, 0) < 0x4f000000;

            if (!bVar36) {

                dVar21 = (double)CONCAT44(uVar27, 0x4f000000 + 0x4f000000);
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) - (0x4f000000 + 0x4f000000));
            }

            iVar39 = (int)SUB84(in_dr14, 0);

            uVar27 = (u32)((u64)dVar21 >> 0x20);
            dVar21 = (double)CONCAT44(uVar27, 0x4f000000);

            bVar36 = SUB84(dVar22, 0) < 0x4f000000;

            if (!bVar36) {

                dVar21 = (double)CONCAT44(uVar27, 0x4f000000 + 0x4f000000);
                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - (0x4f000000 + 0x4f000000));
            }

            uVar6 = (u32)SUB84(dVar22, 0);

            iVar8 = iVar8 + 1;
            *puVar4 = iVar38 << 0x18 | iVar10 << 0x10 | iVar39 << 8 | uVar6;
        }
        pdVar12 = (double *)(puVar15 + iVar9 * 0x24 + iVar1);

        dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)((int)pdVar12 + 0x1c));

        bVar36 = (float)((u64)dVar22 >> 0x20) < SUB84(dVar21, 0);

        if (bVar36) {

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)pdVar12);

            puVar7 = puVar13 + iVar8 * 6;

            puVar7[5] = SUB84(dVar21, 0);
            puVar7[4] = *(u32 *)((int)pdVar12 + 4);
            puVar7[3] = *(u32 *)(pdVar12 + 1);
            puVar7[2] = *(u32 *)((int)pdVar12 + 0xc);
            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(pdVar12 + 2));
            puVar7[1] = *(u32 *)(pdVar12 + 2);

            iVar8 = iVar8 + 1;
            *puVar7 = *(u32 *)(pdVar12 + 4);
        }
        iVar10 = iVar9 + 1;
        iVar38 = iVar9;
        iVar9 = iVar10;
    } while (iVar10 < 3);
    *(u32 *)(a3 + 3) = *puVar13;

    *(u32 *)((int)a3 + 0x14) = *(u32 *)(puVar15 + iVar3 + 0x20);
    *(u32 *)(a3 + 2) = *(u32 *)(puVar15 + iVar3 + 0x24);
    *(u32 *)((int)a3 + 0xc) = *(u32 *)(puVar15 + iVar3 + 0x28);
    *(u32 *)(a3 + 1) = *(u32 *)(puVar15 + iVar3 + 0x2c);
    puVar11 = (u64 *)((int)a3 + 4);
    *(u32 *)puVar11 = *(u32 *)(puVar15 + iVar3 + 0x30);

    *(u32 *)((int)puVar11 + -4) = uVar2;
    *(u32 *)((int)puVar11 + 0x34) = *(u32 *)(puVar15 + iVar3 + 0x34);

    *(u32 *)(puVar11 + 6) = *(u32 *)(puVar15 + iVar3 + 0x38);
    *(u32 *)((int)puVar11 + 0x2c) = *(u32 *)(puVar15 + iVar3 + 0x3c);
    *(u32 *)(puVar11 + 5) = *(u32 *)(puVar15 + iVar3 + 0x40);
    *(u32 *)((int)puVar11 + 0x24) = *(u32 *)(puVar15 + iVar3 + 0x44);
    puVar11 = puVar11 + 4;
    *(u32 *)puVar11 = *(u32 *)(puVar15 + iVar3 + 0x48);

    *(u32 *)((int)puVar11 + -4) = uVar2;
    if (iVar8 != 3) {
        *(u32 *)((int)puVar11 + 0x34) = *(u32 *)(puVar15 + iVar3 + 100);

        *(u32 *)(puVar11 + 6) = *(u32 *)(puVar15 + iVar3 + 0x68);
        *(u32 *)((int)puVar11 + 0x2c) = *(u32 *)(puVar15 + iVar3 + 0x6c);
        *(u32 *)(puVar11 + 5) = *(u32 *)(puVar15 + iVar3 + 0x70);
        *(u32 *)((int)puVar11 + 0x24) = *(u32 *)(puVar15 + iVar3 + 0x74);
        puVar11 = puVar11 + 4;
        *(u32 *)puVar11 = *(u32 *)(puVar15 + iVar3 + 0x78);

        *(u32 *)((int)puVar11 + -4) = uVar2;
    }
    *(u32 *)((int)puVar11 + 0x34) = *(u32 *)(puVar15 + iVar3 + 0x4c);
    uVar2 = 0xf0000000;

    *(u32 *)(puVar11 + 6) = *(u32 *)(puVar15 + iVar3 + 0x50);
    *(u32 *)((int)puVar11 + 0x2c) = *(u32 *)(puVar15 + iVar3 + 0x54);
    *(u32 *)(puVar11 + 5) = *(u32 *)(puVar15 + iVar3 + 0x58);
    *(u32 *)((int)puVar11 + 0x24) = *(u32 *)(puVar15 + iVar3 + 0x5c);
    puVar11 = puVar11 + 4;
    *(u32 *)puVar11 = *(u32 *)(puVar15 + iVar3 + 0x60);

    *(u32 *)((int)puVar11 + -4) = uVar2;
    return (u32 *)((int)puVar11 + 0x1c);
}

/*
 * ninja_calls_float_calc_25c3a4  0x8c25c3a4
 * area name: in the ninja library code range; behaviour name: its callees mostly do: float_calc
 * called by: gfxlib_draw_235bfc
 */
int ninja_calls_float_calc_25c3a4(double *a0, int a1, int a2) {
    u64 uVar1;
    u32 uVar2;
    u32 uVar3;
    double *pdVar4;
    double *pdVar5;
    float fVar6;
    u64 in_dr2;
    double dVar7;
    u32 in_fr5;
    float fVar8;
    double dVar9;
    u32 in_fr7;
    float fVar10;
    u32 uVar12;
    double dVar11;
    double dVar13;
    u32 uVar15;
    double dVar14;
    float fVar16;
    double in_dr10;
    u32 in_fr13;
    float fVar17;
    double dVar18;
    float fVar19;
    double in_dr14;
    float fVar20;
    double in_xd2;
    double dVar21;
    double dVar22;
    double in_xd4;
    double dVar23;
    double in_xd6;
    double in_xd12;
    double in_xd14;
    bool bVar24;
    char cVar25;
    char cVar26;

    cVar26 = '\0';
    cVar25 = '\0';
    pdVar5 = a0 + (a1 + -1) * 2;
    dVar14 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aa4d4);
    dVar18 = (double)CONCAT44(1.0 / g_8c4aa4d4, in_fr13);
    dVar9 = (double)CONCAT44(*(u32 *)((int)pdVar5 + 4), in_fr5);
    dVar13 = (double)((u64) * (u32 *)((int)pdVar5 + 0xc) << 0x20);
    uVar2 = *(u32 *)pdVar5;
    dVar11 = (double)CONCAT44(*(u32 *)(pdVar5 + 1), in_fr7);
    do {
        uVar3 = *(u32 *)a0;
        uVar1 = (u64)dVar14 >> 0x20;
        dVar7 = (double)(uVar1 << 0x20);
        if (cVar26 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)a0 + 4));
            pdVar4 = a0 + 1;
        } else {
            in_xd14 = *(double *)((int)a0 + 4);
            pdVar4 = (double *)((int)a0 + 0xc);
        }
        if (cVar25 == '\0') {
            bVar24 = 0.0 < SUB84(in_dr14, 0);
        } else {
            bVar24 = dVar7 < in_dr14;
        }
        if (cVar26 == '\0') {
            in_dr14 = (double)CONCAT44(*(u32 *)pdVar4, SUB84(in_dr14, 0));
            dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), *(u32 *)((int)pdVar4 + 4));
            pdVar4 = pdVar4 + 1;
        } else {
            in_dr14 = *pdVar4;
            in_xd12 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
        }
        fVar19 = SUB84(in_dr14, 0);
        fVar17 = (float)((u64)dVar18 >> 0x20);
        fVar20 = (float)((u64)dVar9 >> 0x20);
        dVar23 = in_xd4;
        if (bVar24) {
            if (cVar25 == '\0') {
                bVar24 = fVar19 < fVar17;
            } else {
                bVar24 = in_dr14 < dVar18;
            }
            if (!bVar24)
                goto LAB_8c25c3fc;
            if (cVar25 == '\0') {
                bVar24 = 0.0 < fVar20;
            } else {
                bVar24 = dVar7 < dVar9;
            }
            if (!bVar24)
                goto LAB_8c25c3fc;
            if (cVar25 == '\0') {
                bVar24 = fVar20 < fVar17;
            } else {
                bVar24 = dVar9 < dVar18;
            }
            if (!bVar24)
                goto LAB_8c25c3fc;
            uVar12 = (u32)((u64)dVar11 >> 0x20);
            dVar23 = dVar11;
            if (cVar26 == '\0') {
                dVar9 = (double)CONCAT44(fVar20, uVar12);
                dVar23 = in_xd4;
            }
            fVar20 = (float)((u64)in_dr14 >> 0x20);
            if (cVar25 == '\0') {
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), SUB84(dVar9, 0) - fVar20);
            } else {
                dVar9 = dVar9 - in_dr14;
            }
            uVar15 = (u32)((u64)dVar13 >> 0x20);
            if (cVar26 == '\0') {
                dVar11 = (double)CONCAT44(uVar12, uVar15);
                dVar13 = in_xd6;
            }
            fVar17 = SUB84(dVar18, 0);
            if (cVar25 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) - fVar17);
            } else {
                dVar11 = dVar11 - dVar18;
            }
            fVar8 = SUB84(dVar9, 0);
            dVar21 = dVar23;
            if (cVar26 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), fVar8);
                dVar21 = in_xd2;
            }
            if (cVar25 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * fVar8);
            } else {
                dVar7 = dVar7 * dVar9;
            }
            fVar10 = SUB84(dVar11, 0);
            fVar6 = fVar10;
            if (cVar26 != '\0') {
                fVar6 = (float)((u64)dVar13 >> 0x20);
            }
            if (cVar25 == '\0') {
                fVar6 = SQRT(fVar6 * fVar10 + SUB84(dVar7, 0));
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar6);
                dVar14 = (double)CONCAT44(uVar15, 1.0 / fVar6);
            } else {
                dVar7 = SQRT(dVar7);
                dVar14 = (double)CONCAT44(uVar15, 0x3f800000) / dVar7;
            }
            if (cVar26 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), 0x3f066666);
            } else {
                dVar21 = -3.1050369136217506e+231;
            }
            *(u32 *)(a2 + 0x18) = uVar2;
            uVar12 = (u32)((u64)dVar9 >> 0x20);
            if (cVar26 == '\0') {
                pdVar5 = (double *)(a2 + 0xc);
                *(u32 *)pdVar5 = uVar12;
            } else {
                pdVar5 = (double *)(a2 + 8);
                *pdVar5 = dVar9;
            }
            if (cVar25 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar10 * SUB84(dVar14, 0) * SUB84(dVar7, 0));
                dVar9 = (double)CONCAT44(uVar12, fVar8 * SUB84(dVar14, 0) * SUB84(dVar7, 0));
            } else {
                dVar11 = dVar11 * dVar14 * dVar7;
                dVar9 = dVar9 * dVar14 * dVar7;
            }
            fVar8 = (float)((u64)dVar11 >> 0x20);
            dVar22 = dVar11;
            if (cVar26 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar8);
                dVar22 = dVar21;
            }
            fVar6 = -SUB84(dVar11, 0);
            dVar11 = (double)CONCAT44(fVar8, fVar6);
            if (cVar25 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar6);
            } else {
                dVar7 = dVar7 - dVar11;
            }
            fVar10 = SUB84(dVar9, 0);
            dVar21 = dVar23;
            if (cVar26 == '\0') {
                dVar21 = (double)CONCAT44(fVar10, SUB84(in_dr10, 0));
            }
            if (cVar25 == '\0') {
                in_dr10 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + fVar10, SUB84(dVar21, 0));
            } else {
                in_dr10 = dVar21 + dVar9;
            }
            if (cVar26 == '\0') {
                dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), fVar6);
            }
            if (cVar25 == '\0') {
                dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), SUB84(dVar14, 0) + fVar6);
            } else {
                dVar14 = dVar14 + dVar11;
            }
            fVar16 = (float)((u64)dVar14 >> 0x20);
            if (cVar26 == '\0') {
                pdVar5 = (double *)((int)pdVar5 + -4);
                *(int *)pdVar5 = SUB84(dVar7, 0);
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar16);
            } else {
                pdVar5 = pdVar5 + -1;
                *pdVar5 = dVar22;
                dVar22 = dVar14;
            }
            if (cVar25 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar10);
            } else {
                dVar7 = dVar7 - dVar9;
            }
            if (cVar26 == '\0') {
                pdVar5 = (double *)((int)pdVar5 + -4);
                *(int *)pdVar5 = SUB84(dVar7, 0);
            } else {
                pdVar5 = pdVar5 + -1;
                *pdVar5 = dVar22;
            }
            *(u32 *)((int)pdVar5 + -4) = 0xe0000000;
            dVar21 = in_dr14;
            if (cVar26 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar20);
                dVar21 = dVar22;
            }
            if (cVar25 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar6);
            } else {
                dVar7 = dVar7 - dVar11;
            }
            *(u32 *)((int)pdVar5 + 0x34) = uVar3;
            if (cVar26 == '\0') {
                *(float *)(pdVar5 + 5) = fVar19;
                pdVar5 = (double *)((int)pdVar5 + 0x24);
                *(int *)pdVar5 = SUB84(dVar7, 0);
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar17);
            } else {
                *(double *)((int)pdVar5 + 0x24) = in_xd14;
                pdVar5 = (double *)((int)pdVar5 + 0x1c);
                *pdVar5 = dVar21;
                dVar21 = in_xd12;
            }
            if (cVar25 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar10);
            } else {
                dVar7 = dVar7 - dVar9;
            }
            if (cVar26 == '\0') {
                pdVar5 = (double *)((int)pdVar5 + -4);
                *(int *)pdVar5 = SUB84(dVar7, 0);
            } else {
                pdVar5 = pdVar5 + -1;
                *pdVar5 = dVar21;
            }
            *(u32 *)((int)pdVar5 + -4) = 0xe0000000;
            if (cVar25 == '\0') {
                dVar11 = (double)CONCAT44(fVar8 + SUB84(dVar14, 0), fVar6);
            } else {
                dVar11 = dVar11 + dVar14;
            }
            *(u32 *)((int)pdVar5 + 0x34) = uVar2;
            fVar8 = (float)((u64)in_dr10 >> 0x20);
            if (cVar25 == '\0') {
                dVar14 = (double)CONCAT44(fVar16 + fVar8, SUB84(dVar14, 0));
            } else {
                dVar14 = dVar14 + in_dr10;
            }
            if (cVar26 == '\0') {
                *(int *)(pdVar5 + 5) = (int)((u64)dVar9 >> 0x20);
                *(int *)((int)pdVar5 + 0x24) = (int)((u64)dVar11 >> 0x20);
                pdVar5 = pdVar5 + 4;
                *(int *)pdVar5 = (int)((u64)dVar14 >> 0x20);
            } else {
                *(double *)((int)pdVar5 + 0x24) = dVar9;
                *(double *)((int)pdVar5 + 0x1c) = dVar11;
                pdVar5 = (double *)((int)pdVar5 + 0x14);
                *pdVar5 = dVar14;
            }
            *(u32 *)((int)pdVar5 + -4) = 0xe0000000;
            in_xd2 = in_dr14;
            if (cVar26 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar20);
                in_xd2 = dVar21;
            }
            if (cVar25 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) + SUB84(dVar14, 0));
            } else {
                dVar7 = dVar7 + dVar14;
            }
            *(u32 *)((int)pdVar5 + 0x34) = uVar3;
            if (cVar26 == '\0') {
                *(float *)(pdVar5 + 5) = fVar19;
                pdVar5 = (double *)((int)pdVar5 + 0x24);
                *(int *)pdVar5 = SUB84(dVar7, 0);
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar17);
            } else {
                *(double *)((int)pdVar5 + 0x24) = in_xd14;
                pdVar5 = (double *)((int)pdVar5 + 0x1c);
                *pdVar5 = in_xd2;
                in_xd2 = in_xd12;
            }
            if (cVar25 == '\0') {
                dVar14 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) + fVar8);
            } else {
                dVar14 = dVar7 + in_dr10;
            }
            if (cVar26 == '\0') {
                pdVar5 = (double *)((int)pdVar5 + -4);
                *(int *)pdVar5 = SUB84(dVar14, 0);
            } else {
                pdVar5 = pdVar5 + -1;
                *pdVar5 = in_xd2;
            }
            *(u32 *)((int)pdVar5 + -4) = 0xf0000000;
            a2 = (int)pdVar5 + 0x1c;
            in_xd6 = dVar13;
        } else {
        LAB_8c25c3fc:
            if (cVar25 == '\0') {
                bVar24 = 0.0 < fVar20;
            } else {
                bVar24 = (double)(uVar1 << 0x20) < dVar9;
            }
            if (bVar24) {
                if (cVar25 == '\0') {
                    bVar24 = fVar20 < fVar17;
                } else {
                    bVar24 = dVar9 < dVar18;
                }
                if (!bVar24)
                    goto LAB_8c25c406;
            LAB_8c25c410:
                dVar14 = (double)(uVar1 << 0x20);
                a2 = ninja_float_calc_25c4d2(pdVar5, a0, a2);
                dVar23 = in_xd4;
            } else {
            LAB_8c25c406:
                dVar14 = (double)(uVar1 << 0x20);
                if (cVar25 == '\0') {
                    bVar24 = 0.0 < fVar19;
                } else {
                    bVar24 = dVar14 < in_dr14;
                }
                if (bVar24) {
                    if (cVar25 == '\0') {
                        bVar24 = fVar19 < fVar17;
                    } else {
                        bVar24 = in_dr14 < dVar18;
                    }
                    if (bVar24)
                        goto LAB_8c25c410;
                }
            }
        }
        dVar7 = in_dr14;
        if (cVar26 == '\0') {
            dVar7 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(dVar11, 0));
        }
        a1 = a1 + -1;
        dVar13 = in_xd12;
        dVar11 = in_xd14;
        if (cVar26 == '\0') {
            dVar13 = (double)((s64)dVar18 << 0x20);
            dVar11 = (double)CONCAT44(SUB84(in_dr14, 0), SUB84(dVar9, 0));
        }
        dVar9 = dVar11;
        uVar2 = uVar3;
        pdVar5 = a0;
        a0 = pdVar4;
        dVar11 = dVar7;
        in_xd4 = dVar23;
        if (a1 == 0) {
            return a2;
        }
    } while (true);
}

/*
 * ninja_calls_float_calc_25c3d0  0x8c25c3d0
 * area name: in the ninja library code range; behaviour name: its callees mostly do: float_calc
 */
int ninja_calls_float_calc_25c3d0(u32 unused_a0, u32 unused_a1, u32 *a2) {
    u64 uVar1;
    u32 uVar2;
    double *in_r3;
    u32 uVar3;
    int unaff_r8;
    double *unaff_r9;
    u32 uVar4;
    double *unaff_r12;
    double *pdVar5;
    int unaff_r14;
    double *pdVar6;
    float fVar7;
    double in_dr2;
    double dVar8;
    u32 in_fr5;
    float fVar9;
    double dVar10;
    u32 in_fr7;
    float fVar11;
    u32 uVar13;
    double dVar12;
    double dVar14;
    u32 uVar16;
    double dVar15;
    float fVar17;
    double in_dr10;
    double dVar18;
    float fVar19;
    double in_dr12;
    double dVar20;
    float fVar21;
    double in_dr14;
    float fVar22;
    double in_xd2;
    double dVar23;
    double in_xd4;
    double dVar24;
    double in_xd6;
    double in_xd12;
    double in_xd14;
    bool bVar25;

    uVar2 = 0xe0000000;

    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)in_r3);

    dVar20 = (double)CONCAT44((float)((u64)in_dr12 >> 0x20) / SUB84(in_dr2, 0), SUB84(in_dr12, 0));

    uVar3 = *a2;

    dVar10 = (double)CONCAT44(a2[1], in_fr5);
    dVar14 = (double)((u64)(u32)a2[3] << 0x20);
    dVar12 = (double)CONCAT44(a2[2], in_fr7);

    do {
        uVar4 = *(u32 *)unaff_r12;
        uVar1 = (u64)in_dr2 >> 0x20;
        dVar8 = (double)(uVar1 << 0x20);

        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)unaff_r12 + 4));
        pdVar5 = unaff_r12 + 1;

        bVar25 = 0.0 < SUB84(in_dr14, 0);

        in_dr14 = (double)CONCAT44(*(u32 *)pdVar5, SUB84(in_dr14, 0));
        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)((int)pdVar5 + 4));
        pdVar5 = pdVar5 + 1;

        fVar21 = SUB84(in_dr14, 0);
        fVar19 = (float)((u64)dVar20 >> 0x20);
        fVar22 = (float)((u64)dVar10 >> 0x20);
        dVar24 = in_xd4;
        if (bVar25) {

            bVar25 = fVar21 < fVar19;

            if (!bVar25)
                goto LAB_8c25c3fc;

            bVar25 = 0.0 < fVar22;

            if (!bVar25)
                goto LAB_8c25c3fc;

            bVar25 = fVar22 < fVar19;

            if (!bVar25)
                goto LAB_8c25c3fc;
            uVar13 = (u32)((u64)dVar12 >> 0x20);
            dVar24 = dVar12;

            dVar10 = (double)CONCAT44(fVar22, uVar13);
            dVar24 = in_xd4;

            fVar22 = (float)((u64)in_dr14 >> 0x20);

            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) - fVar22);

            uVar16 = (u32)((u64)dVar14 >> 0x20);

            dVar12 = (double)CONCAT44(uVar13, uVar16);
            dVar14 = in_xd6;

            fVar19 = SUB84(dVar20, 0);

            dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), SUB84(dVar12, 0) - fVar19);

            fVar9 = SUB84(dVar10, 0);
            dVar18 = dVar24;

            dVar8 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar9);
            dVar18 = in_xd2;

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) * fVar9);

            fVar11 = SUB84(dVar12, 0);
            fVar7 = fVar11;

            fVar7 = SQRT(fVar7 * fVar11 + SUB84(dVar8, 0));
            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar7);
            dVar15 = (double)CONCAT44(uVar16, 1.0 / fVar7);

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), g_8c25c68c);

            *(u32 *)(unaff_r14 + 0x18) = uVar3;
            uVar13 = (u32)((u64)dVar10 >> 0x20);

            pdVar6 = (double *)(unaff_r14 + 0xc);
            *(u32 *)pdVar6 = uVar13;

            dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), fVar11 * SUB84(dVar15, 0) * SUB84(dVar8, 0));
            dVar10 = (double)CONCAT44(uVar13, fVar9 * SUB84(dVar15, 0) * SUB84(dVar8, 0));

            fVar9 = (float)((u64)dVar12 >> 0x20);
            dVar23 = dVar12;

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar9);
            dVar23 = dVar18;

            fVar7 = -SUB84(dVar12, 0);
            dVar12 = (double)CONCAT44(fVar9, fVar7);

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) - fVar7);

            fVar11 = SUB84(dVar10, 0);
            dVar18 = dVar24;

            dVar18 = (double)CONCAT44(fVar11, SUB84(in_dr10, 0));

            in_dr10 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) + fVar11, SUB84(dVar18, 0));

            dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), fVar7);

            dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) + fVar7);

            fVar17 = (float)((u64)dVar15 >> 0x20);

            pdVar6 = (double *)((int)pdVar6 + -4);
            *(int *)pdVar6 = SUB84(dVar8, 0);
            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar17);

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) - fVar11);

            pdVar6 = (double *)((int)pdVar6 + -4);
            *(int *)pdVar6 = SUB84(dVar8, 0);

            *(u32 *)((int)pdVar6 + -4) = uVar2;
            dVar18 = in_dr14;

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar22);
            dVar18 = dVar23;

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) - fVar7);

            *(u32 *)((int)pdVar6 + 0x34) = uVar4;

            *(float *)(pdVar6 + 5) = fVar21;
            pdVar6 = (double *)((int)pdVar6 + 0x24);
            *(int *)pdVar6 = SUB84(dVar8, 0);
            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar19);

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) - fVar11);

            pdVar6 = (double *)((int)pdVar6 + -4);
            *(int *)pdVar6 = SUB84(dVar8, 0);

            *(u32 *)((int)pdVar6 + -4) = uVar2;

            dVar12 = (double)CONCAT44(fVar9 + SUB84(dVar15, 0), fVar7);

            *(u32 *)((int)pdVar6 + 0x34) = uVar3;
            fVar9 = (float)((u64)in_dr10 >> 0x20);

            dVar15 = (double)CONCAT44(fVar17 + fVar9, SUB84(dVar15, 0));

            *(int *)(pdVar6 + 5) = (int)((u64)dVar10 >> 0x20);
            *(int *)((int)pdVar6 + 0x24) = (int)((u64)dVar12 >> 0x20);
            pdVar6 = pdVar6 + 4;
            *(int *)pdVar6 = (int)((u64)dVar15 >> 0x20);

            *(u32 *)((int)pdVar6 + -4) = uVar2;
            uVar3 = 0xf0000000;
            in_xd2 = in_dr14;

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar22);
            in_xd2 = dVar18;

            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) + SUB84(dVar15, 0));

            *(u32 *)((int)pdVar6 + 0x34) = uVar4;

            *(float *)(pdVar6 + 5) = fVar21;
            pdVar6 = (double *)((int)pdVar6 + 0x24);
            *(int *)pdVar6 = SUB84(dVar8, 0);
            dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar19);

            in_dr2 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) + fVar9);

            pdVar6 = (double *)((int)pdVar6 + -4);
            *(int *)pdVar6 = SUB84(in_dr2, 0);

            *(u32 *)((int)pdVar6 + -4) = uVar3;
            unaff_r14 = (int)pdVar6 + 0x1c;
            in_xd6 = dVar14;
        } else {
        LAB_8c25c3fc:

            bVar25 = 0.0 < fVar22;

            if (bVar25) {

                bVar25 = fVar22 < fVar19;

                if (!bVar25)
                    goto LAB_8c25c406;
            LAB_8c25c410:
                in_dr2 = (double)(uVar1 << 0x20);
                unaff_r14 = ninja_float_calc_25c4d2(unaff_r9, unaff_r12, unaff_r14);
                dVar24 = in_xd4;
            } else {
            LAB_8c25c406:
                in_dr2 = (double)(uVar1 << 0x20);

                bVar25 = 0.0 < fVar21;

                if (bVar25) {

                    bVar25 = fVar21 < fVar19;

                    if (bVar25)
                        goto LAB_8c25c410;
                }
            }
        }
        dVar8 = in_dr14;

        dVar8 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(dVar12, 0));

        unaff_r8 = unaff_r8 + -1;
        dVar14 = in_xd12;
        dVar12 = in_xd14;

        dVar14 = (double)((s64)dVar20 << 0x20);
        dVar12 = (double)CONCAT44(SUB84(in_dr14, 0), SUB84(dVar10, 0));

        dVar10 = dVar12;
        uVar3 = uVar4;
        unaff_r9 = unaff_r12;
        unaff_r12 = pdVar5;
        dVar12 = dVar8;
        in_xd4 = dVar24;
        if (unaff_r8 == 0) {
            return unaff_r14;
        }
    } while (true);
}

/*
 * ninja_float_calc_25c4d2  0x8c25c4d2
 * area name: in the ninja library code range; behaviour name: floating-point arithmetic
 * called by: ninja_calls_float_calc_25c3a4, ninja_calls_float_calc_25c3d0
 */
int ninja_float_calc_25c4d2(u32 *a0, u32 *a1, int a2) {
    u64 *puVar1;
    double *pdVar2;
    u32 unaff_r12;
    double *pdVar3;
    u32 *puVar4;
    double in_dr0;
    double dVar5;
    float fVar6;
    double in_dr2;
    double dVar7;
    u32 uVar10;
    double dVar8;
    double dVar9;
    u32 in_fr5;
    float fVar11;
    float fVar12;
    float fVar13;
    double dVar14;
    float fVar17;
    double dVar15;
    double dVar18;
    u32 in_fr9;
    float fVar19;
    float fVar20;
    double dVar21;
    u32 in_fr11;
    double dVar22;
    double in_dr12;
    u32 uVar23;
    float fVar24;
    u32 uVar25;
    float fVar26;
    u64 in_dr14;
    double dVar27;
    double in_xd2;
    double dVar28;
    double in_xd4;
    double dVar29;
    double in_xd6;
    double in_xd8;
    double in_xd10;
    double in_xd12;
    double in_xd14;
    double dVar30;
    bool bVar31;
    bool bVar32;
    int iVar33;
    int iVar34;
    int iVar35;
    u8 auStack_24[12];
    u32 auStack_18[3];
    u32 uVar16;

    uVar10 = (u32)((u64)in_dr14 >> 0x20);

    puVar4 = auStack_18;
    stack0xffffffe4 = CONCAT44(SUB84(in_dr12, 0), auStack_24._8_4_);

    bVar32 = false;

    uVar16 = *(u32 *)0x8c4aa4a8;
    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)0x8c4aa4dc);
    in_fr9 = *(u32 *)(0x8c4aa4a8 + 2);
    dVar14 = (double)CONCAT44(uVar16, *(u32 *)((int)0x8c4aa4a8 + 0xc));
    dVar7 = (double)CONCAT44(uVar16, in_fr5);

    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) * SUB84(in_dr2, 0), SUB84(dVar14, 0));

    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), a0[1]);

    dVar22 = (double)CONCAT44(1.0 / SUB84(in_dr2, 0), in_fr11);

    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), a1[1]);
    dVar21 = (double)CONCAT44(uVar16, in_fr9);

    dVar27 = (double)CONCAT44(uVar10, 1.0 / SUB84(in_dr2, 0));

    fVar20 = (float)((u64)dVar14 >> 0x20);

    fVar17 = 1.0 / fVar20;

    dVar7 = (double)CONCAT44(*(u32 *)0x8c4aa4e0, *(u32 *)0x8c4aa4d4);

    fVar26 = (float)((u64)dVar7 >> 0x20);

    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * fVar26, SUB84(dVar21, 0));

    fVar12 = (float)((u64)dVar21 >> 0x20);

    bVar31 = (float)((u64)dVar22 >> 0x20) < SUB84(dVar7, 0);
    dVar15 = (double)CONCAT44(fVar17, 1.0 / fVar12);

    uVar23 = (u32)((u64)in_dr12 >> 0x20);
    fVar6 = SUB84(dVar14, 0);
    uVar16 = SUB84(dVar22, 0);
    fVar19 = SUB84(dVar21, 0);
    uVar10 = (u32)((u64)in_dr0 >> 0x20);
    fVar11 = SUB84(dVar15, 0);
    fVar13 = (float)((u64)dVar15 >> 0x20);
    fVar24 = SUB84(dVar27, 0);
    fVar17 = SUB84(in_xd4, 0);
    if (bVar31) {

        in_dr0 = (double)CONCAT44(uVar10, a0[1]);

        dVar22 = (double)CONCAT44(1.0 / SUB84(in_dr0, 0), uVar16);

        dVar27 = (double)CONCAT44(a0[2], fVar24);

        pdVar3 = (double *)*a0;
        uVar10 = (u32)((u64)dVar27 >> 0x20);
        dVar18 = dVar27;

        dVar7 = (double)CONCAT44(fVar26, uVar10);
        dVar18 = in_xd2;

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar19);

        uVar25 = a0[3];
        *(float *)((int)puVar4 + -0x28) = SUB84(in_dr0, 0);
        *(u32 *)((int)puVar4 + -0x1c) = uVar10;
        *(u32 *)((int)puVar4 + -0x18) = uVar25;

        unaff_r12 = *a1;
        fVar26 = (float)((u64)dVar22 >> 0x20);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * fVar26);

        dVar8 = dVar18;

        dVar22 = (double)CONCAT44(fVar26, SUB84(dVar7, 0));
        dVar8 = in_xd10;

        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) * fVar11);

        dVar28 = in_xd14;

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), uVar25);
        dVar28 = dVar18;

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar6);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * (float)((u64)dVar22 >> 0x20));

        dVar18 = dVar28;

        in_dr12 = (double)CONCAT44(uVar23, SUB84(dVar7, 0));
        dVar18 = in_xd12;

        in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr12, 0) * fVar13);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), a1[1]);

        fVar26 = 1.0 / SUB84(dVar7, 0);

        *(float *)((int)puVar4 + -0x10) = SUB84(dVar7, 0);
        fVar17 = (float)a1[2];
        *(float *)((int)puVar4 + -4) = fVar17;
        dVar7 = (double)CONCAT44(fVar11, fVar17);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar17 - fVar19);

        dVar27 = (double)CONCAT44(a1[3], fVar26);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * SUB84(dVar27, 0));

        dVar29 = dVar28;

        dVar15 = (double)CONCAT44(fVar13, SUB84(dVar7, 0));
        dVar29 = in_xd4;

        fVar17 = (float)((u64)dVar7 >> 0x20);

        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) * fVar17);

        in_xd2 = dVar27;

        dVar7 = (double)CONCAT44(fVar17, (int)((u64)dVar27 >> 0x20));
        in_xd2 = dVar28;

        fVar17 = SUB84(dVar7, 0) - fVar6;

        uVar10 = *(u32 *)((int)puVar4 + -0x10);
        dVar7 = (double)CONCAT44(uVar10, fVar17);
        *(u32 *)((int)puVar4 + -0x14) = uVar10;

        dVar7 = (double)CONCAT44(uVar10, SUB84(dVar7, 0) * SUB84(dVar27, 0));

        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(dVar7, 0));

        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) * (float)((u64)dVar15 >> 0x20));

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), *(u32 *)((int)puVar4 + -4));

    } else {

        bVar31 = fVar24 < SUB84(dVar7, 0);

        pdVar3 = 0x8c4aa4a8;
        if (!bVar31)
            goto LAB_8c25c5fc;

        in_dr0 = (double)CONCAT44(uVar10, a1[1]);

        dVar22 = (double)CONCAT44(1.0 / SUB84(in_dr0, 0), uVar16);

        dVar27 = (double)CONCAT44(a1[2], fVar24);

        pdVar3 = (double *)*a1;
        uVar10 = (u32)((u64)dVar27 >> 0x20);
        dVar18 = dVar27;

        dVar7 = (double)CONCAT44(fVar26, uVar10);
        dVar18 = in_xd2;

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar19);

        uVar25 = a1[3];
        *(float *)((int)puVar4 + -0x28) = SUB84(in_dr0, 0);
        *(u32 *)((int)puVar4 + -0x1c) = uVar10;
        *(u32 *)((int)puVar4 + -0x18) = uVar25;

        unaff_r12 = *a0;
        fVar26 = (float)((u64)dVar22 >> 0x20);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * fVar26);

        dVar8 = dVar18;

        dVar22 = (double)CONCAT44(fVar26, SUB84(dVar7, 0));
        dVar8 = in_xd10;

        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) * fVar11);

        dVar28 = in_xd14;

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), uVar25);
        dVar28 = dVar18;

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar6);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * (float)((u64)dVar22 >> 0x20));

        dVar18 = dVar28;

        in_dr12 = (double)CONCAT44(uVar23, SUB84(dVar7, 0));
        dVar18 = in_xd12;

        in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr12, 0) * fVar13);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), a0[1]);

        fVar26 = 1.0 / SUB84(dVar7, 0);

        *(float *)((int)puVar4 + -0xc) = SUB84(dVar7, 0);
        fVar17 = (float)a0[2];
        *(float *)((int)puVar4 + -8) = fVar17;
        dVar7 = (double)CONCAT44(fVar11, fVar17);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar17 - fVar19);

        dVar27 = (double)CONCAT44(a0[3], fVar26);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * SUB84(dVar27, 0));

        dVar29 = dVar28;

        dVar15 = (double)CONCAT44(fVar13, SUB84(dVar7, 0));
        dVar29 = in_xd4;

        fVar17 = (float)((u64)dVar7 >> 0x20);

        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) * fVar17);

        in_xd2 = dVar27;

        dVar7 = (double)CONCAT44(fVar17, (int)((u64)dVar27 >> 0x20));
        in_xd2 = dVar28;

        fVar17 = SUB84(dVar7, 0) - fVar6;

        uVar10 = *(u32 *)((int)puVar4 + -0xc);
        dVar7 = (double)CONCAT44(uVar10, fVar17);
        *(u32 *)((int)puVar4 + -0x14) = uVar10;

        dVar7 = (double)CONCAT44(uVar10, SUB84(dVar7, 0) * SUB84(dVar27, 0));

        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(dVar7, 0));

        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) * (float)((u64)dVar15 >> 0x20));

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), *(u32 *)((int)puVar4 + -8));
    }

    *(int *)((int)puVar4 + -0x20) = SUB84(dVar7, 0);

    bVar32 = true;
    in_xd10 = dVar8;
    in_xd4 = dVar29;
    in_xd12 = dVar18;

    *(int *)((int)puVar4 + -0x24) = (int)((u64)dVar27 >> 0x20);

LAB_8c25c5fc:
    if (bVar32) {

        dVar7 = (double)(u64) * (u32 *)0x8c4aa4d4;
        dVar18 = in_xd2;

        fVar17 = (float)((u64)dVar22 >> 0x20);

        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) - fVar17);

        fVar26 = SUB84(dVar22, 0);

        fVar11 = SUB84(dVar15, 0) - fVar26;
        dVar22 = (double)CONCAT44(0x3f800000, SUB84(dVar7, 0) - fVar17);

        dVar7 = in_xd10;

        dVar7 = (double)CONCAT44(fVar26, fVar11);

        fVar17 = SUB84(in_dr0, 0) - SUB84(in_dr12, 0);

        dVar15 = dVar18;

        dVar15 = (double)CONCAT44(SUB84(dVar22, 0), fVar26);

        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) / SUB84(dVar27, 0), SUB84(dVar15, 0));

        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)0x8c4aa4d4);

        fVar26 = (float)((u64)dVar22 >> 0x20) / SUB84(dVar22, 0);

        fVar11 = (float)((u32)pdVar3 >> 0x18);
        dVar8 = (double)CONCAT44(fVar26, fVar11);
        uVar10 = (u32)((u64)dVar15 >> 0x20);
        dVar22 = dVar15;

        dVar22 = (double)CONCAT44(uVar10, fVar17);

        fVar17 = (float)((u64)dVar22 >> 0x20);

        dVar7 = (double)CONCAT44(fVar17 * SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20), SUB84(dVar7, 0));

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(in_dr12, 0));
        in_xd12 = in_xd4;

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar17 * SUB84(dVar22, 0) + SUB84(dVar7, 0));

        dVar22 = dVar8;

        dVar22 = (double)((u64)(u32)fVar26 << 0x20);

        dVar21 = (double)CONCAT44(fVar12 * (float)((u64)dVar7 >> 0x20), fVar19);

        *(float *)((int)puVar4 + -0x28) = fVar26;

        fVar17 = (float)((u64)dVar22 >> 0x20);

        fVar12 = (float)((u64)dVar21 >> 0x20);
        dVar21 = (double)CONCAT44(fVar12, fVar17 * fVar12 + SUB84(dVar21, 0));
        fVar6 = fVar17 * fVar20 * SUB84(dVar7, 0) + fVar6;

        *(int *)((int)puVar4 + -0x1c) = SUB84(dVar21, 0);
        *(float *)((int)puVar4 + -0x18) = fVar6;

        bVar32 = fVar11 < SUB84(dVar22, 0);

        dVar22 = dVar18;

        dVar22 = (double)CONCAT44(fVar11, SUB84(dVar7, 0));

        if (bVar32) {

            dVar8 = (double)CONCAT44(fVar26, g_8c25c6a0);

            dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + SUB84(dVar8, 0), SUB84(dVar22, 0));
        }
        fVar20 = (float)((u32)pdVar3 >> 0x10 & 0xff);
        dVar14 = dVar18;

        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar20);
        dVar14 = in_xd12;

        if (fVar20 < 0.0) {
            fVar17 = g_8c25c6a0;

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) + fVar17);
        }
        fVar20 = (float)((u32)pdVar3 >> 8 & 0xff);
        dVar7 = dVar18;

        dVar7 = (double)CONCAT44(fVar20, fVar6);

        uVar25 = (u32)((u64)dVar7 >> 0x20);
        dVar8 = dVar7;
        if (0.0 <= fVar20) {

            dVar7 = (double)(u64)uVar25;
            dVar8 = in_xd6;

        } else {

            dVar7 = (double)CONCAT44(uVar25, uVar25);
            dVar8 = in_xd6;
            fVar20 = g_8c25c6a0;

            dVar7 = (double)(u64)(u32)(SUB84(dVar7, 0) + fVar20);
        }
        fVar20 = (float)((u32)pdVar3 & 0xff);
        dVar28 = dVar18;

        dVar28 = (double)CONCAT44(fVar20, SUB84(dVar7, 0));

        uVar25 = (u32)((u64)dVar28 >> 0x20);
        dVar29 = dVar28;
        if (0.0 <= fVar20) {

            dVar21 = (double)(u64)uVar25;
            dVar29 = in_xd8;

        } else {

            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar25);
            dVar29 = in_xd8;
            fVar20 = g_8c25c854;

            dVar21 = (double)(u64)(u32)(SUB84(dVar21, 0) + fVar20);
        }
        fVar20 = (float)(unaff_r12 >> 0x18);
        dVar7 = dVar18;

        dVar7 = (double)CONCAT44(fVar20, SUB84(dVar28, 0));

        if (fVar20 < 0.0) {
            fVar17 = g_8c25c854;

            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + fVar17, SUB84(dVar7, 0));
        }
        fVar20 = (float)(unaff_r12 >> 0x10 & 0xff);
        dVar28 = dVar18;

        dVar28 = (double)CONCAT44(fVar20, SUB84(dVar21, 0));

        if (fVar20 < 0.0) {
            fVar17 = g_8c25c854;

            dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) + fVar17, SUB84(dVar28, 0));
        }
        fVar20 = (float)(unaff_r12 >> 8 & 0xff);
        dVar21 = dVar18;

        dVar15 = (double)CONCAT44(uVar10, fVar20);
        dVar21 = in_xd10;

        if (fVar20 < 0.0) {
            fVar17 = g_8c25c854;

            dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) + fVar17);
        }
        dVar9 = (double)(u64)(u32)(float)(unaff_r12 & 0xff);
        dVar30 = dVar18;

        dVar27 = dVar9;
        dVar30 = in_xd14;

        uVar10 = SUB84(dVar27, 0);
        if (0.0 <= (float)(unaff_r12 & 0xff)) {
            dVar27 = dVar30;

            dVar27 = (double)CONCAT44(uVar10, uVar10);

        } else {

            dVar9 = (double)(u64)(u32)g_8c25c854;
            dVar27 = (double)CONCAT44(uVar10, uVar10);

            dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) + SUB84(dVar9, 0), SUB84(dVar27, 0));
        }
        fVar20 = (float)((u64)dVar22 >> 0x20);

        dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) - fVar20, SUB84(dVar7, 0));

        dVar5 = dVar15;

        dVar5 = (double)((u64)dVar15 & 0xffffffff00000000);

        fVar17 = SUB84(dVar7, 0);

        fVar26 = SUB84(dVar15, 0) - fVar17;

        in_xd2 = dVar22;

        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), fVar20);
        in_xd2 = dVar30;

        fVar12 = SUB84(dVar22, 0);
        fVar20 = (float)((u64)dVar5 >> 0x20);

        fVar11 = SUB84(dVar28, 0);
        dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) - fVar12, fVar11);
        dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) - fVar11,
                                  fVar20 * (float)((u64)dVar7 >> 0x20) + SUB84(dVar27, 0));

        dVar22 = (double)((u64)dVar7 & 0xffffffff);
        in_xd4 = dVar14;
        dVar14 = (double)CONCAT44(fVar12, fVar17);

        fVar12 = SUB84(dVar22, 0);
        fVar13 = SUB84(dVar9, 0);

        fVar12 = fVar20 * fVar26 + fVar12;
        dVar14 = (double)CONCAT44(fVar20 * (float)((u64)dVar28 >> 0x20) + (float)((u64)dVar14 >> 0x20), fVar17);

        dVar15 = dVar29;

        fVar13 = SUB84(dVar27, 0);
        in_xd2 = dVar18;
        dVar15 = (double)CONCAT44(fVar11, fVar12);

        dVar7 = (double)CONCAT44(0x4f000000, fVar13);

        dVar15 =
            (double)CONCAT44(fVar20 * (float)((u64)dVar27 >> 0x20) + (float)((u64)dVar15 >> 0x20), SUB84(dVar15, 0));

        if (0x4f000000 <= fVar13) {

            dVar7 = (double)CONCAT44(0x4f000000 + 0x4f000000, fVar13 - (0x4f000000 + 0x4f000000));
        }

        iVar33 = (int)SUB84(dVar7, 0);

        uVar10 = (u32)((u64)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(uVar10, 0x4f000000);
        fVar20 = (float)((u64)dVar14 >> 0x20);

        bVar32 = fVar20 < 0x4f000000;

        if (!bVar32) {

            dVar7 = (double)CONCAT44(uVar10, 0x4f000000 + 0x4f000000);
            dVar14 = (double)CONCAT44(fVar20 - (0x4f000000 + 0x4f000000), SUB84(dVar14, 0));
        }

        iVar34 = (int)(float)((u64)dVar14 >> 0x20);

        uVar10 = (u32)((u64)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(uVar10, 0x4f000000);

        bVar32 = SUB84(dVar15, 0) < 0x4f000000;

        if (!bVar32) {

            dVar7 = (double)CONCAT44(uVar10, 0x4f000000 + 0x4f000000);
            dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) - (0x4f000000 + 0x4f000000));
        }

        iVar35 = (int)SUB84(dVar15, 0);

        uVar10 = (u32)((u64)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(uVar10, 0x4f000000);
        fVar20 = (float)((u64)dVar15 >> 0x20);

        bVar32 = fVar20 < 0x4f000000;

        if (!bVar32) {

            dVar7 = (double)CONCAT44(uVar10, 0x4f000000 + 0x4f000000);
            dVar15 = (double)CONCAT44(fVar20 - (0x4f000000 + 0x4f000000), SUB84(dVar15, 0));
        }

        uVar25 = (u32)(float)((u64)dVar15 >> 0x20);

        pdVar3 = (double *)(iVar33 << 0x18 | iVar34 << 0x10 | iVar35 << 8 | uVar25);
        in_xd6 = dVar8;
        in_xd8 = dVar29;
        in_xd10 = dVar21;
    }

    dVar21 = (double)CONCAT44(*(u32 *)((int)puVar4 + -0x24), *(u32 *)((int)puVar4 + -0x18));
    fVar20 = *(float *)((int)puVar4 + -0x1c);
    dVar22 = (double)CONCAT44(*(u32 *)((int)puVar4 + -0x20), fVar20);
    dVar27 = (double)CONCAT44(fVar20, SUB84(dVar15, 0));

    fVar17 = (float)((u64)dVar22 >> 0x20);

    dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) - fVar17, SUB84(dVar27, 0));

    fVar26 = SUB84(dVar21, 0);
    dVar15 = in_xd10;

    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), fVar26);
    dVar15 = in_xd4;

    fVar12 = (float)((u64)dVar21 >> 0x20);

    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) - fVar12);

    fVar11 = g_8c25c85c;

    *(double **)(a2 + 0x18) = pdVar3;
    uVar10 = 0xe0000000;
    fVar13 = (float)((u64)dVar27 >> 0x20);
    dVar14 = dVar27;

    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar13);
    dVar14 = in_xd2;

    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * fVar13);

    fVar19 = SUB84(dVar27, 0);
    fVar6 = fVar19;

    fVar6 = SQRT(fVar6 * fVar19 + SUB84(dVar7, 0));
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar6);
    fVar6 = 1.0 / fVar6;
    dVar18 = (double)CONCAT44(fVar13 * fVar6 * fVar11, fVar19 * fVar6 * fVar11);

    fVar6 = (float)((u64)dVar18 >> 0x20);
    fVar13 = -SUB84(dVar18, 0);
    dVar27 = (double)CONCAT44(fVar6, fVar13);

    dVar15 = (double)CONCAT44(fVar13, fVar11);

    dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) + fVar13, SUB84(dVar15, 0));

    dVar18 = dVar27;

    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), fVar6);
    dVar18 = in_xd6;

    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) + fVar6);

    puVar1 = (u64 *)(a2 + 0xc);
    *(u32 *)puVar1 = *(u32 *)((int)puVar4 + -0x28);
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar20);
    in_xd8 = dVar14;

    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar13);

    pdVar2 = (double *)((int)puVar1 + -4);
    *(int *)pdVar2 = SUB84(dVar7, 0);
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar26);
    in_xd10 = in_xd8;

    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar6);

    pdVar2 = (double *)((int)pdVar2 + -4);
    *(int *)pdVar2 = SUB84(dVar7, 0);

    *(u32 *)((int)pdVar2 + -4) = uVar10;
    *(u32 *)((int)pdVar2 + 0x34) = unaff_r12;

    pdVar2 = pdVar2 + 5;
    *(u32 *)pdVar2 = *(u32 *)((int)puVar4 + -0x14);
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar17);

    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar13);

    pdVar2 = (double *)((int)pdVar2 + -4);
    *(int *)pdVar2 = SUB84(dVar7, 0);
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar12);

    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - fVar6);

    pdVar2 = (double *)((int)pdVar2 + -4);
    *(int *)pdVar2 = SUB84(dVar7, 0);

    *(u32 *)((int)pdVar2 + -4) = uVar10;
    *(double **)((int)pdVar2 + 0x34) = pdVar3;
    fVar11 = (float)((u64)dVar15 >> 0x20);

    pdVar2 = pdVar2 + 5;
    *(u32 *)pdVar2 = *(u32 *)((int)puVar4 + -0x28);
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar11);

    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) + fVar20);

    pdVar2 = (double *)((int)pdVar2 + -4);
    *(int *)pdVar2 = SUB84(dVar7, 0);
    dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar15, 0));

    fVar26 = SUB84(dVar7, 0) + fVar26;

    pdVar2 = (double *)((int)pdVar2 + -4);
    *(float *)pdVar2 = fVar26;

    *(u32 *)((int)pdVar2 + -4) = uVar10;

    dVar21 = (double)CONCAT44(fVar11 + fVar17, SUB84(dVar15, 0) + fVar12);

    *(u32 *)((int)pdVar2 + 0x34) = unaff_r12;
    uVar10 = 0xf0000000;

    *(u32 *)(pdVar2 + 5) = *(u32 *)((int)puVar4 + -0x14);
    *(int *)((int)pdVar2 + 0x24) = (int)((u64)dVar21 >> 0x20);
    pdVar2 = pdVar2 + 4;
    *(int *)pdVar2 = SUB84(dVar21, 0);

    *(u32 *)((int)pdVar2 + -4) = uVar10;
    return (int)pdVar2 + 0x1c;
}

/*
 * ninja_calls_float_calc_25c868  0x8c25c868
 * area name: in the ninja library code range; behaviour name: its callees mostly do: float_calc
 * called by: gfxlib_draw_235bfc
 */
double *ninja_calls_float_calc_25c868(double *a0, int a1, double *a2) {
    u64 uVar1;
    u32 uVar2;
    u32 uVar3;
    double *pdVar4;
    double *pdVar5;
    u32 *puVar6;
    float fVar7;
    u64 in_dr2;
    double dVar9;
    float fVar11;
    double dVar10;
    double dVar12;
    float fVar14;
    double dVar13;
    double dVar15;
    double dVar16;
    float fVar17;
    u32 uVar19;
    double dVar18;
    u32 in_fr13;
    float fVar20;
    double dVar21;
    float fVar22;
    float fVar23;
    double in_dr14;
    float fVar24;
    double in_xd2;
    double dVar25;
    double in_xd4;
    double in_xd6;
    double dVar26;
    double in_xd8;
    double in_xd12;
    double in_xd14;
    bool bVar27;
    u32 in_PR;
    char cVar28;
    char cVar29;
    u32 uStack_3c;
    u32 uStack_38;
    u32 uStack_34;
    u32 uStack_30;
    double dVar8;

    cVar29 = '\0';
    cVar28 = '\0';
    dVar9 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), g_8c4aa4d4);
    pdVar5 = a0 + (a1 + -1) * 3;
    dVar21 = (double)CONCAT44(1.0 / g_8c4aa4d4, in_fr13);
    uVar19 = *(u32 *)((int)pdVar5 + 4);
    dVar16 = (double)(u64) * (u32 *)(pdVar5 + 1);
    dVar10 = (double)CONCAT44(*(u32 *)((int)pdVar5 + 0xc), *(u32 *)(pdVar5 + 2));
    dVar13 = (double)(u64) * (u32 *)((int)pdVar5 + 0x14);
    uVar2 = *(u32 *)pdVar5;
    uStack_30 = in_PR;
    do {
        uVar3 = *(u32 *)a0;
        if (cVar29 == '\0') {
            uStack_38 = *(u32 *)((int)a0 + 4);
            uStack_3c = *(u32 *)(a0 + 1);
            dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), uStack_3c);
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)a0 + 0xc));
            pdVar4 = a0 + 2;
        } else {
            uStack_34 = (u32)((u64) * (u64 *)((int)a0 + 4) >> 0x20);
            in_xd2 = *(double *)((int)a0 + 0xc);
            uStack_3c = SUB84(in_xd2, 0);
            uStack_38 = (u32)((u64)in_xd2 >> 0x20);
            in_xd14 = *(double *)((int)a0 + 0x14);
            pdVar4 = (double *)((int)a0 + 0x1c);
        }
        uVar1 = (u64)dVar9 >> 0x20;
        dVar8 = (double)(uVar1 << 0x20);
        if (cVar28 == '\0') {
            bVar27 = 0.0 < SUB84(in_dr14, 0);
        } else {
            bVar27 = dVar8 < in_dr14;
        }
        if (cVar29 == '\0') {
            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)pdVar4);
            in_dr14 = (double)CONCAT44(*(u32 *)((int)pdVar4 + 4), SUB84(in_dr14, 0));
            pdVar4 = pdVar4 + 1;
        } else {
            in_xd12 = *pdVar4;
            in_dr14 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
        }
        fVar23 = SUB84(in_dr14, 0);
        fVar22 = (float)((u64)dVar21 >> 0x20);
        fVar11 = (float)((u64)dVar10 >> 0x20);
        dVar26 = in_xd6;
        if (bVar27) {
            if (cVar28 == '\0') {
                bVar27 = fVar23 < fVar22;
            } else {
                bVar27 = in_dr14 < dVar21;
            }
            if (!bVar27)
                goto LAB_8c25c8d6;
            if (cVar28 == '\0') {
                bVar27 = 0.0 < fVar11;
            } else {
                bVar27 = dVar8 < dVar10;
            }
            if (!bVar27)
                goto LAB_8c25c8d6;
            if (cVar28 == '\0') {
                bVar27 = fVar11 < fVar22;
            } else {
                bVar27 = dVar10 < dVar21;
            }
            if (!bVar27)
                goto LAB_8c25c8d6;
            fVar22 = SUB84(dVar10, 0);
            dVar12 = in_xd4;
            if (cVar29 == '\0') {
                dVar12 = (double)CONCAT44(fVar22, SUB84(dVar13, 0));
            }
            fVar20 = SUB84(dVar21, 0);
            if (cVar28 == '\0') {
                dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) - fVar20, SUB84(dVar12, 0));
            } else {
                dVar12 = dVar12 - dVar21;
            }
            dVar15 = in_xd6;
            if (cVar29 == '\0') {
                dVar15 = (double)CONCAT44(SUB84(dVar12, 0), SUB84(dVar16, 0));
            }
            fVar24 = (float)((u64)in_dr14 >> 0x20);
            if (cVar28 == '\0') {
                dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - fVar24, SUB84(dVar15, 0));
            } else {
                dVar15 = dVar15 - in_dr14;
            }
            fVar14 = (float)((u64)dVar12 >> 0x20);
            dVar25 = dVar12;
            if (cVar29 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), fVar14);
                dVar25 = in_xd2;
            }
            fVar17 = (float)((u64)dVar15 >> 0x20);
            if (cVar28 == '\0') {
                fVar7 = SQRT(fVar17 * fVar17 + SUB84(dVar8, 0) * fVar14);
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar7);
                dVar18 = (double)CONCAT44(uVar19, 1.0 / fVar7);
            } else {
                dVar8 = SQRT(dVar8 * dVar12);
                dVar18 = (double)CONCAT44(uVar19, 0x3f800000) / dVar8;
            }
            if (cVar29 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), 0x3f066666);
            } else {
                dVar25 = -3.1050369136217506e+231;
            }
            if (cVar28 == '\0') {
                dVar13 = (double)CONCAT44(fVar14 * SUB84(dVar18, 0) * SUB84(dVar8, 0), SUB84(dVar12, 0));
                dVar16 = (double)CONCAT44(fVar17 * SUB84(dVar18, 0) * SUB84(dVar8, 0), SUB84(dVar15, 0));
            } else {
                dVar13 = dVar12 * dVar18 * dVar8;
                dVar16 = dVar15 * dVar18 * dVar8;
            }
            fVar14 = (float)((u64)dVar13 >> 0x20);
            in_xd2 = dVar13;
            if (cVar29 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar14);
                in_xd2 = dVar25;
            }
            if (cVar28 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) + fVar14);
                dVar16 = (double)CONCAT44(-(float)((u64)dVar16 >> 0x20), SUB84(dVar16, 0));
            } else {
                dVar8 = dVar8 + dVar13;
                dVar16 = -dVar16;
            }
            fVar17 = (float)((u64)dVar16 >> 0x20);
            if (cVar29 == '\0') {
                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), fVar17);
            }
            if (cVar28 == '\0') {
                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) + fVar17);
            } else {
                dVar18 = dVar18 + dVar16;
            }
            if (cVar29 == '\0') {
                uStack_34 = SUB84(dVar8, 0);
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar22);
            } else {
                uStack_34 = SUB84(in_xd2, 0);
                uStack_30 = (u32)((u64)in_xd2 >> 0x20);
                in_xd2 = in_xd4;
            }
            if (cVar28 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) - fVar17);
            } else {
                dVar8 = dVar8 - dVar16;
            }
            *(u32 *)(a2 + 3) = uVar2;
            uVar19 = (u32)((u64)dVar18 >> 0x20);
            if (cVar29 == '\0') {
                *(u32 *)((int)a2 + 0x14) = uVar19;
                *(int *)(a2 + 2) = SUB84(dVar16, 0);
                *(float *)((int)a2 + 0xc) = fVar11;
                pdVar5 = a2 + 1;
                *(int *)pdVar5 = SUB84(dVar8, 0);
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar13, 0));
            } else {
                a2[2] = dVar18;
                a2[1] = in_xd8;
                *a2 = dVar10;
                pdVar5 = a2 + -1;
                *pdVar5 = in_xd2;
                in_xd2 = in_xd6;
            }
            if (cVar28 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) - fVar14);
            } else {
                dVar8 = dVar8 - dVar13;
            }
            if (cVar29 == '\0') {
                pdVar5 = (double *)((int)pdVar5 + -4);
                *(int *)pdVar5 = SUB84(dVar8, 0);
            } else {
                pdVar5 = pdVar5 + -1;
                *pdVar5 = in_xd2;
            }
            *(u32 *)((int)pdVar5 + -4) = 0xe0000000;
            *(u32 *)((int)pdVar5 + 0x34) = uVar3;
            if (cVar29 == '\0') {
                *(u32 *)(pdVar5 + 6) = uStack_38;
                puVar6 = (u32 *)((int)pdVar5 + 0x2c);
                *puVar6 = uStack_3c;
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar20);
            } else {
                *(u64 *)((int)pdVar5 + 0x2c) = CONCAT44(uStack_34, uStack_38);
                puVar6 = (u32 *)((int)pdVar5 + 0x24);
                *(u64 *)puVar6 = CONCAT44(uStack_38, uStack_3c);
                in_xd2 = in_xd12;
            }
            if (cVar28 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) - fVar17);
            } else {
                dVar8 = dVar8 - dVar16;
            }
            if (cVar29 == '\0') {
                puVar6[-1] = (u32)fVar23;
                pdVar5 = (double *)(puVar6 + -2);
                *(int *)pdVar5 = SUB84(dVar8, 0);
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar24);
            } else {
                *(double *)(puVar6 + -2) = in_xd14;
                pdVar5 = (double *)(puVar6 + -4);
                *pdVar5 = in_xd2;
                in_xd2 = in_dr14;
            }
            if (cVar28 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), SUB84(dVar8, 0) - fVar14);
            } else {
                dVar8 = dVar8 - dVar13;
            }
            if (cVar29 == '\0') {
                pdVar5 = (double *)((int)pdVar5 + -4);
                *(int *)pdVar5 = SUB84(dVar8, 0);
            } else {
                pdVar5 = pdVar5 + -1;
                *pdVar5 = in_xd2;
            }
            *(u32 *)((int)pdVar5 + -4) = 0xe0000000;
            if (cVar28 == '\0') {
                dVar10 = (double)CONCAT44(fVar11, fVar22 + SUB84(dVar18, 0));
            } else {
                dVar10 = dVar10 + dVar18;
            }
            *(u32 *)((int)pdVar5 + 0x34) = uVar2;
            if (cVar29 == '\0') {
                *(u32 *)(pdVar5 + 6) = uVar19;
                *(int *)((int)pdVar5 + 0x2c) = SUB84(dVar16, 0);
                *(int *)(pdVar5 + 5) = (int)((u64)dVar10 >> 0x20);
                pdVar5 = (double *)((int)pdVar5 + 0x24);
                *(int *)pdVar5 = SUB84(dVar10, 0);
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), uStack_34);
            } else {
                *(double *)((int)pdVar5 + 0x2c) = dVar18;
                *(double *)((int)pdVar5 + 0x24) = in_xd8;
                *(double *)((int)pdVar5 + 0x1c) = dVar10;
                pdVar5 = (double *)((int)pdVar5 + 0x14);
                *pdVar5 = in_xd4;
                in_xd2 = (double)CONCAT44(uStack_30, uStack_34);
            }
            if (cVar28 == '\0') {
                dVar13 = (double)(u64)(u32)(SUB84(dVar13, 0) + SUB84(dVar8, 0));
            } else {
                dVar13 = dVar13 + dVar8;
            }
            if (cVar29 == '\0') {
                pdVar5 = (double *)((int)pdVar5 + -4);
                *(int *)pdVar5 = SUB84(dVar13, 0);
            } else {
                pdVar5 = pdVar5 + -1;
                *pdVar5 = in_xd6;
            }
            *(u32 *)((int)pdVar5 + -4) = 0xe0000000;
            dVar9 = in_dr14;
            if (cVar29 == '\0') {
                dVar9 = (double)CONCAT44(fVar24, SUB84(dVar8, 0));
            }
            *(u32 *)((int)pdVar5 + 0x34) = uVar3;
            if (cVar29 == '\0') {
                *(u32 *)(pdVar5 + 6) = uStack_38;
                puVar6 = (u32 *)((int)pdVar5 + 0x2c);
                *puVar6 = uStack_3c;
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), fVar20);
            } else {
                *(u64 *)((int)pdVar5 + 0x2c) = CONCAT44(uStack_34, uStack_38);
                puVar6 = (u32 *)((int)pdVar5 + 0x24);
                *(u64 *)puVar6 = CONCAT44(uStack_38, uStack_3c);
                in_xd2 = in_xd12;
            }
            if (cVar28 == '\0') {
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), SUB84(dVar9, 0) + SUB84(dVar18, 0));
            } else {
                dVar9 = dVar9 + dVar18;
            }
            if (cVar29 == '\0') {
                puVar6[-1] = (u32)fVar23;
                pdVar5 = (double *)(puVar6 + -2);
                *(int *)pdVar5 = SUB84(dVar9, 0);
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), uStack_34);
            } else {
                *(double *)(puVar6 + -2) = in_xd14;
                pdVar5 = (double *)(puVar6 + -4);
                *pdVar5 = in_xd2;
                in_xd2 = (double)CONCAT44(uStack_30, uStack_34);
            }
            if (cVar28 == '\0') {
                dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) + SUB84(dVar9, 0), SUB84(dVar9, 0));
            } else {
                dVar9 = dVar9 + dVar9;
            }
            if (cVar29 == '\0') {
                pdVar5 = (double *)((int)pdVar5 + -4);
                *(int *)pdVar5 = (int)((u64)dVar9 >> 0x20);
            } else {
                pdVar5 = pdVar5 + -1;
                *pdVar5 = dVar9;
            }
            *(u32 *)((int)pdVar5 + -4) = 0xf0000000;
            a2 = (double *)((int)pdVar5 + 0x1c);
        } else {
        LAB_8c25c8d6:
            if (cVar28 == '\0') {
                bVar27 = 0.0 < fVar11;
            } else {
                bVar27 = (double)(uVar1 << 0x20) < dVar10;
            }
            if (bVar27) {
                if (cVar28 == '\0') {
                    bVar27 = fVar11 < fVar22;
                } else {
                    bVar27 = dVar10 < dVar21;
                }
                if (!bVar27)
                    goto LAB_8c25c8e0;
            LAB_8c25c8ea:
                dVar9 = (double)(uVar1 << 0x20);
                a2 = (double *)ninja_float_calc_25c9d8(pdVar5, a0, a2);
                dVar26 = in_xd6;
            } else {
            LAB_8c25c8e0:
                dVar9 = (double)(uVar1 << 0x20);
                if (cVar28 == '\0') {
                    bVar27 = 0.0 < fVar23;
                } else {
                    bVar27 = dVar9 < in_dr14;
                }
                if (bVar27) {
                    if (cVar28 == '\0') {
                        bVar27 = fVar23 < fVar22;
                    } else {
                        bVar27 = in_dr14 < dVar21;
                    }
                    if (bVar27)
                        goto LAB_8c25c8ea;
                }
            }
        }
        if (cVar29 == '\0') {
            dVar16 = (double)(u64)uStack_3c;
            uVar19 = uStack_38;
        } else {
            in_xd8 = (double)CONCAT44(uStack_38, uStack_3c);
            uVar19 = uStack_34;
        }
        a1 = a1 + -1;
        in_xd6 = in_dr14;
        dVar10 = in_xd14;
        dVar8 = in_xd12;
        if (cVar29 == '\0') {
            dVar13 = (double)((u64)in_dr14 >> 0x20);
            in_xd6 = dVar26;
            dVar10 = (double)CONCAT44(SUB84(in_dr14, 0), SUB84(dVar21, 0));
            dVar8 = in_xd4;
        }
        in_xd4 = dVar8;
        uVar2 = uVar3;
        pdVar5 = a0;
        a0 = pdVar4;
        if (a1 == 0) {
            return a2;
        }
    } while (true);
}

/*
 * ninja_float_calc_25c9d8  0x8c25c9d8
 * area name: in the ninja library code range; behaviour name: floating-point arithmetic
 * called by: ninja_calls_float_calc_25c868
 */
int ninja_float_calc_25c9d8(u32 *a0, u32 *a1, int a2) {
    double *pdVar1;
    u64 *puVar2;
    double *pdVar3;
    u64 *puVar4;
    u32 in_fr1;
    float fVar5;
    double in_dr2;
    double dVar6;
    u32 uVar9;
    double dVar7;
    float fVar10;
    double dVar8;
    u32 uVar11;
    u32 in_fr5;
    u32 uVar14;
    float fVar15;
    double dVar12;
    float fVar16;
    double dVar13;
    float fVar17;
    double dVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    double dVar22;
    double dVar23;
    u64 in_dr10;
    double dVar24;
    float fVar25;
    double in_dr12;
    double dVar26;
    u32 in_fr15;
    double dVar27;
    double in_xd2;
    double dVar28;
    double dVar29;
    double in_xd4;
    double in_xd6;
    double dVar30;
    double in_xd8;
    double in_xd10;
    double in_xd12;
    double in_xd14;
    bool bVar31;
    int iVar32;
    int iVar33;
    int iVar34;
    u8 auStack_20[16];
    u64 auStack_10[2];

    uVar11 = (u32)((u64)in_dr12 >> 0x20);

    puVar4 = auStack_10;
    auStack_10[0] = CONCAT44(SUB84(in_dr12, 0), uVar11);

    uVar14 = *(u32 *)0x8c4aa4a8;
    in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)0x8c4aa4dc);
    in_dr12 = (double)CONCAT44(uVar11, uVar14);
    dVar18 = (double)CONCAT44(*(u32 *)((int)0x8c4aa4a8 + 0xc), *(u32 *)(0x8c4aa4a8 + 2));
    dVar24 = (double)CONCAT44(uVar14, in_fr5);

    dVar26 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr12, 0) * SUB84(in_dr2, 0));

    dVar6 = (double)CONCAT44(*(u32 *)0x8c4aa4e0, a0[3]);
    dVar27 = (double)CONCAT44(uVar14, in_fr15);

    fVar10 = (float)((u64)dVar6 >> 0x20);

    dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) * fVar10, SUB84(dVar27, 0));
    fVar15 = 1.0 / SUB84(dVar6, 0);

    uVar11 = (u32)((u64)in_dr10 >> 0x20);
    fVar25 = SUB84(dVar26, 0);
    fVar16 = (float)((u64)dVar27 >> 0x20);

    fVar20 = 1.0 / fVar25;
    dVar24 = (double)CONCAT44(uVar11, 1.0 / fVar16);

    dVar6 = (double)CONCAT44(fVar10, a1[3]);
    dVar22 = (double)CONCAT44(*(u32 *)0x8c4aa4d4, fVar20);

    fVar10 = (float)((u64)dVar22 >> 0x20);

    bVar31 = fVar15 < fVar10;
    dVar12 = (double)CONCAT44(fVar15, 1.0 / SUB84(dVar6, 0));

    fVar21 = SUB84(dVar22, 0);
    uVar11 = (u32)((u64)dVar6 >> 0x20);
    fVar17 = SUB84(dVar18, 0);
    fVar19 = (float)((u64)dVar18 >> 0x20);
    fVar20 = SUB84(dVar12, 0);
    fVar15 = SUB84(in_xd10, 0);
    if (bVar31) {

        dVar6 = (double)CONCAT44(uVar11, a0[3]);

        dVar12 = (double)CONCAT44(1.0 / SUB84(dVar6, 0), fVar20);

        pdVar3 = (double *)*a0;

        *(float *)((int)puVar4 + -0x14) = SUB84(dVar6, 0);
        dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), a0[4]);
        dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), a0[5]);

        fVar20 = SUB84(dVar6, 0) - fVar17;

        uVar9 = a0[1];
        dVar26 = (double)CONCAT44(uVar9, fVar20);
        *(u32 *)((int)puVar4 + -0x34) = uVar9;

        fVar20 = (float)((u64)dVar12 >> 0x20);

        dVar26 = (double)CONCAT44(uVar9, SUB84(dVar26, 0) * fVar20);

        dVar6 = in_xd2;

        dVar6 = (double)CONCAT44(SUB84(dVar26, 0), SUB84(dVar24, 0));

        dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * SUB84(dVar6, 0), SUB84(dVar6, 0));

        dVar28 = in_xd4;

        dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar12, 0));
        dVar28 = in_xd2;

        dVar12 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), (SUB84(dVar26, 0) - fVar19) * fVar20);

        dVar30 = dVar28;

        dVar27 = (double)CONCAT44(fVar16, SUB84(dVar12, 0));
        dVar30 = in_xd14;

        dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) * fVar21);

        *(u32 *)((int)puVar4 + -0x30) = a0[2];
        dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), a1[3]);

        pdVar1 = (double *)*a1;

        *(float *)((int)puVar4 + -0x10) = SUB84(dVar12, 0);

        dVar12 = (double)CONCAT44(fVar20, 1.0 / SUB84(dVar12, 0));

        fVar15 = (float)a1[4];
        *(float *)((int)puVar4 + -4) = fVar15;
        dVar7 = (double)CONCAT44(SUB84(dVar6, 0), fVar15);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), fVar15 - fVar17);

        dVar26 = (double)CONCAT44(a1[5], fVar25);

        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * SUB84(dVar12, 0));

        dVar29 = dVar28;

        dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar7, 0));
        dVar29 = in_xd10;

        fVar15 = (float)((u64)dVar7 >> 0x20);

        dVar24 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) * fVar15);

        uVar11 = (u32)((u64)dVar26 >> 0x20);
        in_xd2 = dVar26;

        dVar7 = (double)CONCAT44(fVar15, uVar11);
        in_xd2 = dVar28;

        fVar15 = SUB84(dVar7, 0) - fVar19;

        dVar6 = in_xd8;

        dVar6 = (double)CONCAT44(fVar21, fVar15);

        dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) * SUB84(dVar12, 0));

        dVar28 = in_xd2;

        dVar22 = (double)CONCAT44(fVar10, SUB84(dVar6, 0));
        dVar28 = in_xd8;

        fVar10 = (float)((u64)dVar6 >> 0x20);

        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) * fVar10);

        *(u32 *)((int)puVar4 + -0x20) = a1[1];
        *(u32 *)((int)puVar4 + -0x24) = a1[2];
        *(u32 *)((int)puVar4 + -0x1c) = *(u32 *)((int)puVar4 + -0x10);
        dVar6 = (double)CONCAT44(fVar10, *(u32 *)((int)puVar4 + -4));
        *(u32 *)((int)puVar4 + -0x28) = *(u32 *)((int)puVar4 + -4);
        *(u32 *)((int)puVar4 + -0x2c) = uVar11;

    } else {

        bVar31 = fVar20 < fVar10;

        pdVar1 = 0x8c4aa4d4;
        pdVar3 = 0x8c4aa4a8;
        dVar28 = in_xd8;
        dVar29 = in_xd10;
        dVar30 = in_xd14;
        if (bVar31) {

            fVar20 = (float)a1[3];

            dVar6 = (double)CONCAT44(uVar11, a1[4]);

            dVar26 = (double)CONCAT44(1.0 / fVar20, fVar20);

            pdVar3 = (double *)*a1;

            *(float *)((int)puVar4 + -0x18) = SUB84(dVar6, 0);

            fVar20 = (float)((u64)dVar26 >> 0x20);

            fVar5 = (SUB84(dVar6, 0) - fVar17) * fVar20;

            dVar6 = in_xd2;

            dVar6 = (double)CONCAT44(fVar5, SUB84(dVar24, 0));

            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) * SUB84(dVar6, 0), SUB84(dVar6, 0));

            dVar12 = (double)CONCAT44(a1[1], a1[5]);

            dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), SUB84(dVar12, 0) - fVar19);

            uVar11 = (u32)((u64)dVar12 >> 0x20);

            *(u32 *)((int)puVar4 + -0x34) = uVar11;

            dVar12 = (double)CONCAT44(uVar11, SUB84(dVar12, 0) * fVar20);

            dVar30 = in_xd2;

            dVar27 = (double)CONCAT44(fVar16, SUB84(dVar12, 0));
            dVar30 = in_xd14;

            dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), SUB84(dVar27, 0) * fVar21);

            *(u32 *)((int)puVar4 + -0x30) = a1[2];
            dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), a0[3]);

            pdVar1 = (double *)*a0;

            *(float *)((int)puVar4 + -0xc) = SUB84(dVar12, 0);

            dVar12 = (double)CONCAT44(fVar20, 1.0 / SUB84(dVar12, 0));

            fVar15 = (float)a0[4];
            *(float *)((int)puVar4 + -8) = fVar15;
            dVar28 = (double)CONCAT44(SUB84(dVar6, 0), fVar15);
            dVar7 = in_xd2;

            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), fVar15 - fVar17);

            dVar26 = (double)CONCAT44(a0[5], fVar25);

            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) * SUB84(dVar12, 0));

            dVar29 = dVar7;

            dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar28, 0));
            dVar29 = in_xd10;

            fVar15 = (float)((u64)dVar28 >> 0x20);

            dVar24 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) * fVar15);

            uVar11 = (u32)((u64)dVar26 >> 0x20);
            in_xd2 = dVar26;

            dVar28 = (double)CONCAT44(fVar15, uVar11);
            in_xd2 = dVar7;

            fVar15 = SUB84(dVar28, 0) - fVar19;

            dVar6 = in_xd8;

            dVar6 = (double)CONCAT44(fVar21, fVar15);

            dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) * SUB84(dVar12, 0));

            dVar28 = in_xd2;

            dVar22 = (double)CONCAT44(fVar10, SUB84(dVar6, 0));
            dVar28 = in_xd8;

            fVar10 = (float)((u64)dVar6 >> 0x20);

            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) * fVar10);

            *(u32 *)((int)puVar4 + -0x20) = a0[1];
            *(u32 *)((int)puVar4 + -0x24) = a0[2];
            *(u32 *)((int)puVar4 + -0x1c) = *(u32 *)((int)puVar4 + -0xc);
            dVar6 = (double)CONCAT44(fVar10, *(u32 *)((int)puVar4 + -8));
            *(u32 *)((int)puVar4 + -0x28) = *(u32 *)((int)puVar4 + -8);
            *(u32 *)((int)puVar4 + -0x2c) = uVar11;
        }
    }
    uVar11 = (u32)((u64)dVar22 >> 0x20);
    dVar7 = dVar22;

    dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), uVar11);
    dVar7 = in_xd2;

    fVar10 = (float)((u64)dVar12 >> 0x20);
    dVar12 = (double)CONCAT44(fVar10, SUB84(dVar12, 0) - fVar10);
    dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) - fVar10);
    fVar10 = (float)((u64)dVar24 >> 0x20);
    dVar24 = (double)CONCAT44(fVar10, SUB84(dVar24, 0) - fVar10);

    dVar23 = dVar24;

    dVar23 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), SUB84(dVar12, 0));

    fVar10 = SUB84(dVar27, 0);

    dVar22 = (double)CONCAT44(uVar11, SUB84(dVar22, 0) - fVar10);
    fVar15 = SUB84(dVar6, 0) / SUB84(dVar23, 0);

    dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), fVar10);
    *(float *)((int)puVar4 + -0x38) = fVar15;
    dVar6 = (double)CONCAT44(*(u32 *)((int)puVar4 + -0x34), in_fr1);
    dVar12 = (double)CONCAT44(*(u32 *)((int)puVar4 + -0x20), fVar15);
    dVar30 = in_xd4;

    fVar15 = (float)((u64)dVar6 >> 0x20);

    dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) - fVar15, SUB84(dVar12, 0));

    uVar11 = SUB84(dVar12, 0);
    dVar6 = (double)CONCAT44(fVar15, uVar11);
    dVar12 = (double)CONCAT44(uVar11, (int)((u64)dVar12 >> 0x20));

    dVar6 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) * SUB84(dVar12, 0) + (float)((u64)dVar6 >> 0x20), uVar11);

    *(int *)((int)puVar4 + -0x34) = (int)((u64)dVar6 >> 0x20);
    dVar12 = (double)CONCAT44(*(u32 *)((int)puVar4 + -0x30), SUB84(dVar12, 0));
    dVar6 = (double)CONCAT44(*(u32 *)((int)puVar4 + -0x24), SUB84(dVar6, 0));

    fVar15 = (float)((u64)dVar12 >> 0x20);

    dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - fVar15, SUB84(dVar6, 0));

    uVar11 = SUB84(dVar6, 0);
    dVar12 = (double)CONCAT44(fVar15, uVar11);
    dVar6 = (double)CONCAT44(uVar11, (int)((u64)dVar6 >> 0x20));

    fVar15 = (float)((u64)dVar6 >> 0x20);

    dVar12 = (double)CONCAT44(fVar15 * SUB84(dVar6, 0) + (float)((u64)dVar12 >> 0x20), uVar11);
    dVar23 = (double)CONCAT44(fVar15 * SUB84(dVar24, 0) + (float)((u64)dVar23 >> 0x20), SUB84(dVar23, 0));

    *(int *)((int)puVar4 + -0x30) = (int)((u64)dVar12 >> 0x20);

    fVar25 = (float)((u64)dVar22 >> 0x20);

    dVar26 = (double)CONCAT44(1.0 / fVar25, SUB84(dVar26, 0));

    fVar16 = (float)((u64)dVar23 >> 0x20);
    dVar23 = (double)CONCAT44(fVar16, fVar15 * SUB84(dVar22, 0) + SUB84(dVar23, 0));
    dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) * fVar16, fVar10);

    dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar26, 0) * SUB84(dVar23, 0));
    fVar10 = (float)((u32)pdVar3 >> 0x18);
    dVar6 = (double)CONCAT44(fVar10, SUB84(dVar12, 0));
    bVar31 = fVar10 < 0.0;

    uVar9 = (u32)((u64)dVar26 >> 0x20);
    dVar12 = dVar26;

    dVar12 = (double)((u64)uVar9 << 0x20);

    fVar15 = (float)((u64)dVar12 >> 0x20);

    dVar18 = (double)CONCAT44(fVar15 * SUB84(dVar26, 0) + fVar19, fVar15 * (float)((u64)dVar27 >> 0x20) + fVar17);

    uVar11 = SUB84(dVar18, 0);
    dVar13 = dVar6;
    dVar12 = in_xd6;

    dVar26 = (double)CONCAT44(uVar9, (int)((u64)dVar18 >> 0x20));
    dVar13 = (double)CONCAT44(fVar10, SUB84(dVar23, 0));
    dVar18 = in_xd12;
    dVar12 = (double)CONCAT44(uVar11, SUB84(dVar27, 0));

    if (bVar31) {

        dVar27 = (double)CONCAT44(g_8c25cdc8, SUB84(dVar6, 0));

        dVar13 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) + (float)((u64)dVar27 >> 0x20), SUB84(dVar13, 0));
    }
    fVar10 = (float)((u32)pdVar3 >> 0x10 & 0xff);
    dVar27 = dVar7;

    dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), fVar10);
    dVar27 = dVar30;

    if (fVar10 < 0.0) {
        fVar15 = g_8c25cdc8;

        dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), SUB84(dVar13, 0) + fVar15);
    }
    fVar10 = (float)((u32)pdVar3 >> 8 & 0xff);
    dVar6 = dVar7;

    dVar6 = (double)CONCAT44(fVar10, uVar11);

    uVar9 = (u32)((u64)dVar6 >> 0x20);
    dVar30 = dVar6;
    if (0.0 <= fVar10) {

        dVar6 = (double)(u64)uVar9;
        dVar30 = in_xd6;

    } else {

        dVar6 = (double)CONCAT44(uVar9, uVar9);
        dVar30 = in_xd6;
        fVar10 = g_8c25cdc8;

        dVar6 = (double)(u64)(u32)(SUB84(dVar6, 0) + fVar10);
    }
    fVar10 = (float)((u32)pdVar3 & 0xff);
    dVar23 = dVar7;

    dVar23 = (double)CONCAT44(fVar10, SUB84(dVar6, 0));

    uVar9 = (u32)((u64)dVar23 >> 0x20);
    dVar6 = dVar23;
    if (0.0 <= fVar10) {

        dVar22 = (double)(u64)uVar9;
        dVar6 = dVar28;

    } else {

        dVar22 = (double)CONCAT44(fVar25, uVar9);
        dVar6 = dVar28;
        fVar10 = g_8c25cdc8;

        dVar22 = (double)(u64)(u32)(SUB84(dVar22, 0) + fVar10);
    }
    fVar10 = (float)((u32)pdVar1 >> 0x18);
    dVar28 = dVar7;

    dVar28 = (double)CONCAT44(fVar10, SUB84(dVar23, 0));

    if (fVar10 < 0.0) {
        fVar15 = g_8c25cdc8;

        dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) + fVar15, SUB84(dVar28, 0));
    }
    fVar10 = (float)((u32)pdVar1 >> 0x10 & 0xff);
    dVar23 = dVar7;

    dVar23 = (double)CONCAT44(fVar10, SUB84(dVar22, 0));

    if (fVar10 < 0.0) {
        fVar15 = g_8c25cdc8;

        dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + fVar15, SUB84(dVar23, 0));
    }
    fVar10 = (float)((u32)pdVar1 >> 8 & 0xff);
    dVar22 = dVar7;

    dVar22 = (double)CONCAT44(fVar10, SUB84(dVar24, 0));

    if (fVar10 < 0.0) {
        fVar15 = g_8c25cdc8;

        dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + fVar15, SUB84(dVar22, 0));
    }
    fVar10 = (float)((u32)pdVar1 & 0xff);
    dVar8 = (double)(u64)(u32)fVar10;
    dVar24 = dVar7;

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar10);
    dVar24 = dVar29;

    uVar11 = SUB84(dVar22, 0);
    uVar14 = (u32)((u64)dVar12 >> 0x20);
    if (0.0 <= fVar10) {

        dVar12 = (double)CONCAT44(uVar14, uVar11);

    } else {

        dVar12 = (double)CONCAT44(uVar14, uVar11);
        dVar8 = (double)(u64)(u32)g_8c25cdc8;

        dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), SUB84(dVar12, 0) + SUB84(dVar8, 0));
    }
    fVar10 = (float)((u64)dVar13 >> 0x20);

    dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) - fVar10, SUB84(dVar28, 0));

    fVar15 = *(float *)((int)puVar4 + -0x38);

    fVar25 = SUB84(dVar28, 0);

    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - fVar25, uVar11);

    dVar29 = dVar13;

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar10);
    dVar29 = dVar24;

    fVar10 = SUB84(dVar13, 0);

    fVar16 = SUB84(dVar23, 0);
    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) - fVar10, fVar16);
    dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), SUB84(dVar12, 0) - fVar16);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar15 * (float)((u64)dVar28 >> 0x20) + SUB84(dVar22, 0));

    dVar13 = (double)((u64)dVar28 & 0xffffffff);
    dVar24 = dVar27;
    dVar27 = (double)CONCAT44(fVar10, fVar25);

    fVar10 = SUB84(dVar13, 0);
    fVar20 = SUB84(dVar8, 0);

    fVar10 = fVar15 * (float)((u64)dVar22 >> 0x20) + fVar10;
    dVar27 = (double)CONCAT44(fVar15 * (float)((u64)dVar23 >> 0x20) + (float)((u64)dVar27 >> 0x20), fVar25);

    dVar6 = (double)CONCAT44(fVar16, fVar10);
    fVar20 = SUB84(dVar22, 0);
    dVar29 = dVar7;

    dVar22 = (double)CONCAT44(0x4f000000, fVar20);

    dVar6 = (double)CONCAT44(fVar15 * SUB84(dVar12, 0) + (float)((u64)dVar6 >> 0x20), SUB84(dVar6, 0));

    if (0x4f000000 <= fVar20) {

        dVar22 = (double)CONCAT44(0x4f000000 + 0x4f000000, fVar20 - (0x4f000000 + 0x4f000000));
    }

    iVar32 = (int)SUB84(dVar22, 0);

    uVar11 = (u32)((u64)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(uVar11, 0x4f000000);
    fVar10 = (float)((u64)dVar27 >> 0x20);

    bVar31 = fVar10 < 0x4f000000;

    if (!bVar31) {

        dVar22 = (double)CONCAT44(uVar11, 0x4f000000 + 0x4f000000);
        dVar27 = (double)CONCAT44(fVar10 - (0x4f000000 + 0x4f000000), SUB84(dVar27, 0));
    }

    iVar33 = (int)(float)((u64)dVar27 >> 0x20);

    uVar11 = (u32)((u64)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(uVar11, 0x4f000000);

    bVar31 = SUB84(dVar6, 0) < 0x4f000000;

    if (!bVar31) {

        dVar22 = (double)CONCAT44(uVar11, 0x4f000000 + 0x4f000000);
        dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) - (0x4f000000 + 0x4f000000));
    }

    iVar34 = (int)SUB84(dVar6, 0);

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), 0x4f000000);
    fVar10 = (float)((u64)dVar6 >> 0x20);

    bVar31 = fVar10 < 0x4f000000;

    if (!bVar31) {

        dVar6 = (double)CONCAT44(fVar10 - (0x4f000000 + 0x4f000000), SUB84(dVar6, 0));
    }
    fVar10 = (float)((u64)dVar12 >> 0x20);

    dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), fVar10);
    pdVar3 = (double *)((int)puVar4 + -0x2c);

    dVar22 = *pdVar3;

    uVar9 = (u32)(float)((u64)dVar6 >> 0x20);

    fVar15 = SUB84(dVar26, 0);
    dVar28 = dVar18;

    dVar28 = (double)CONCAT44(fVar15, SUB84(dVar6, 0));

    fVar25 = (float)((u64)dVar22 >> 0x20);

    dVar6 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar28, 0) - fVar25);

    fVar16 = g_8c25cdd0;

    fVar17 = (float)((u64)dVar6 >> 0x20);
    fVar20 = SUB84(dVar6, 0);

    dVar27 = (double)CONCAT44(fVar17, fVar17 * fVar17 + fVar20 * fVar20);

    uVar9 = iVar32 << 0x18 | iVar33 << 0x10 | iVar34 << 8 | uVar9;
    *(u32 *)(a2 + 0x18) = uVar9;
    uVar11 = 0xe0000000;

    fVar19 = 1.0 / SQRT(SUB84(dVar27, 0));
    dVar27 = (double)CONCAT44(fVar19, fVar16);
    dVar6 = (double)CONCAT44(-(fVar17 * fVar19 * fVar16), fVar20 * fVar19 * fVar16);

    fVar16 = SUB84(dVar6, 0);

    dVar27 = (double)CONCAT44(fVar19, fVar16);
    dVar24 = dVar30;

    fVar20 = SUB84(dVar27, 0) + fVar16;

    fVar17 = (float)((u64)dVar6 >> 0x20);
    dVar27 = dVar6;

    dVar27 = (double)CONCAT44(fVar17, fVar20);

    dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) + fVar17, SUB84(dVar27, 0));

    *(u32 *)(a2 + 0x14) = *(u32 *)((int)puVar4 + -0x34);
    puVar2 = (u64 *)(a2 + 0x10);
    *(u32 *)puVar2 = *(u32 *)((int)puVar4 + -0x30);
    dVar22 = (double)CONCAT44(fVar25, fVar10);

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - fVar17);

    uVar14 = (u32)((u64)dVar26 >> 0x20);

    *(u32 *)((int)puVar2 + -4) = uVar14;
    pdVar3 = (double *)(puVar2 + -1);
    *(int *)pdVar3 = SUB84(dVar22, 0);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar15);
    dVar18 = dVar29;

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - fVar16);

    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = SUB84(dVar22, 0);

    *(u32 *)((int)pdVar3 + -4) = uVar11;
    *(double **)((int)pdVar3 + 0x34) = pdVar1;

    *(u32 *)(pdVar3 + 6) = *(u32 *)((int)puVar4 + -0x20);
    *(u32 *)((int)pdVar3 + 0x2c) = *(u32 *)((int)puVar4 + -0x24);
    pdVar3 = pdVar3 + 5;
    *(u32 *)pdVar3 = *(u32 *)((int)puVar4 + -0x1c);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)((int)puVar4 + -0x28));

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - fVar17);

    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = SUB84(dVar22, 0);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)((int)puVar4 + -0x2c));

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) - fVar16);

    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = SUB84(dVar22, 0);

    *(u32 *)((int)pdVar3 + -4) = uVar11;
    *(u32 *)((int)pdVar3 + 0x34) = uVar9;
    fVar25 = (float)((u64)dVar27 >> 0x20);

    *(u32 *)(pdVar3 + 6) = *(u32 *)((int)puVar4 + -0x34);
    puVar2 = (u64 *)((int)pdVar3 + 0x2c);
    *(u32 *)puVar2 = *(u32 *)((int)puVar4 + -0x30);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar25);

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) + fVar10);

    *(u32 *)((int)puVar2 + -4) = uVar14;
    pdVar3 = (double *)(puVar2 + -1);
    *(int *)pdVar3 = SUB84(dVar22, 0);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar27, 0));

    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) + fVar15);

    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = SUB84(dVar22, 0);

    *(u32 *)((int)pdVar3 + -4) = uVar11;
    uVar11 = 0xf0000000;
    *(double **)((int)pdVar3 + 0x34) = pdVar1;

    *(u32 *)(pdVar3 + 6) = *(u32 *)((int)puVar4 + -0x20);
    *(u32 *)((int)pdVar3 + 0x2c) = *(u32 *)((int)puVar4 + -0x24);
    pdVar3 = pdVar3 + 5;
    *(u32 *)pdVar3 = *(u32 *)((int)puVar4 + -0x1c);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)((int)puVar4 + -0x28));

    dVar27 = (double)CONCAT44(fVar25 + SUB84(dVar22, 0), SUB84(dVar27, 0));

    pdVar3 = (double *)((int)pdVar3 + -4);
    *(int *)pdVar3 = (int)((u64)dVar27 >> 0x20);
    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)((int)puVar4 + -0x2c));

    fVar10 = SUB84(dVar27, 0) + SUB84(dVar22, 0);

    pdVar3 = (double *)((int)pdVar3 + -4);
    *(float *)pdVar3 = fVar10;

    *(u32 *)((int)pdVar3 + -4) = uVar11;
    return (int)pdVar3 + 0x1c;
}

/*
 * njGetMatrix  0x8c25cddc
 * copies the current matrix into a0
 * called by: CAnimal_uses_njGetMatrix_026968, Class_129938_m1_0170e0, Class_129938_m2_0171f4, Class_1299f8_m4_019588,
 * Class_129a24_m1_019b68, Vec3_vec_023484, Vec3_vec_023570, Vec3_vec_023668 (+6 more)
 */
u32 njGetMatrix(u32 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;

    uVar7 = g_8c278778;
    uVar6 = g_8c278774;
    uVar5 = g_8c278770;
    uVar4 = g_8c27876c;
    uVar3 = g_8c278768;
    uVar2 = g_8c278760._4_4_;
    uVar1 = (u32)g_8c278760;
    if (a0 == NULL) {
        return ain0;
    }
    a0[7] = g_8c27877c;
    a0[6] = uVar7;
    a0[5] = uVar6;
    a0[4] = uVar5;
    a0[3] = uVar4;
    a0[2] = uVar3;
    a0[1] = uVar2;
    *a0 = uVar1;
    uVar7 = g_8c278798;
    uVar6 = g_8c278794;
    uVar5 = g_8c278790;
    uVar4 = g_8c27878c;
    uVar3 = g_8c278788;
    uVar2 = g_8c278784;
    uVar1 = g_8c278780;
    a0[0xf] = g_8c27879c;
    a0[0xe] = uVar7;
    a0[0xd] = uVar6;
    a0[0xc] = uVar5;
    a0[0xb] = uVar4;
    a0[10] = uVar3;
    a0[9] = uVar2;
    a0[8] = uVar1;
    return ain0;
}

/*
 * njUnitVector  0x8c25ce48
 * normalises the Vec3 at a0 in place
 * called by: Class_1299f8_m3_019f00, gfxlib_uses_float_to_color_u8_24bdc8, gfxlib_uses_float_to_color_u8_24c6f0,
 * gfxlib_uses_float_to_color_u8_24df18, gfxlib_uses_float_to_color_u8_250144, gfxlib_uses_njUnitVector_2163d4,
 * gfxlib_uses_njUnitVector_2166e8, gfxlib_uses_njUnitVector_22b7a8 (+3 more)
 */
u32 njUnitVector(float *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float fVar1;
    float fVar2;
    s64 lVar3;
    float fVar4;

    fVar2 = *a0;
    fVar1 = a0[1];
    fVar4 = a0[2];
    lVar3 = (u64)(u32)fVar4 << 0x20;
    fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0 + fVar4 * fVar4;
    fVar4 = 1.0 / SQRT((float)lVar3);
    a0[2] = (float)((u64)lVar3 >> 0x20) * fVar4;
    a0[1] = fVar1 * fVar4;
    *a0 = fVar2 * fVar4;
    return ain0;
}

/*
 * ninja_calc_25ce80  0x8c25ce80
 * area name: in the ninja library code range; behaviour name: integer arithmetic on its arguments
 * called by: ninja_draw_25d7c6
 */
int ninja_calc_25ce80(int a0, u32 a1) {
    return (*(int *)(&g_8c277d80 + g_8c4aa05c * 4) + *(int *)(&g_8c277d80 + g_8c4aa060 * 4) +
            *(int *)(&g_8c277d80 + g_8c4aa064 * 4) + *(int *)(&g_8c277d80 + g_8c4aa068 * 4) +
            *(int *)(&g_8c277d80 + g_8c4aa06c * 4)) *
           a0 * 4;
}

/*
 * pvr_ta_list_init  0x8c25cebc
 * programs the TA object-list and ISP base/limit registers for buffer a2, the tile clip (a0 x a1 tiles) and list
 * allocation sizes, then starts TA_LIST_INIT called by: ta_fifo_25d0a0
 */
u32 pvr_ta_list_init(int a0, int a1, int a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    u32 uVar3;
    u32 a6;
    int iVar4;

    puVar1 = (&pvr_20a844);
    iVar4 = a2 * 0x20;
    (*(code *)(&pvr_20a844))((int)0x124, *(u32 *)(0x8c4aa024 + iVar4), a2, a3);
    (*(code *)puVar1)((int)0x12c, *(u32 *)(0x8c4aa028 + iVar4), a2, a3);
    (*(code *)puVar1)((int)0x128, *(u32 *)(0x8c4aa030 + iVar4), a2, a3);
    (*(code *)puVar1)((int)0x130, *(u32 *)(0x8c4aa034 + iVar4), a2, a3);
    (*(code *)puVar1)((int)0x13c, (a1 + -1) * 0x10000 + a0 + -1, a2, a3);
    uVar3 = g_8c4aa05c & 3 | (g_8c4aa060 & 3) << 4 | (g_8c4aa064 & 3) << 8 | (g_8c4aa068 & 3) << 0xc;
    if (g_8c4a9bac == 6) {
        a6 = (g_8c4aa058 & 1) << 0x14;
        uVar3 = uVar3 | a6 | (g_8c4aa06c & 3) << 0x10;
    } else {
        a6 = (g_8c4aa058 & 1) << 0x10;
        uVar3 = uVar3 | a6;
    }
    (*(code *)puVar1)((int)0x140, uVar3, a6, a3);
    uVar2 = (*(code *)puVar1)((int)0x144, 0x80000000, a6, a3);
    return uVar2;
}

/*
 * vram_25cfc2  0x8c25cfc2
 * called by: ta_fifo_25d0a0
 */
u32 vram_25cfc2(u32 a0, int a1) {
    u32 *puVar1;

    puVar1 = (u32 *)(a0 | 0xa5000000);
    *puVar1 = (a0 - a1 >> 2) + 2 | 0x80200000;
    puVar1[1] = 0xf0000000;
    puVar1[2] = 0x800000;
    puVar1[3] = 0x24900000;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0x2edbe6ff;
    puVar1[8] = 0x80ff0000;
    puVar1[9] = 0;
    puVar1[10] = 0x44a00000;
    puVar1[0xb] = 0x2edbe6ff;
    puVar1[0xc] = 0x8000ff00;
    puVar1[0xd] = 0x45200000;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0x2edbe6ff;
    puVar1[0x10] = 0x800000ff;
    return a0;
}

/*
 * ta_fifo_25d028  0x8c25d028
 * called by: ta_fifo_25d0a0
 */
u32 ta_fifo_25d028(u32 a0) {
    u32 uVar1;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;
    u32 uStack_8;

    uStack_1c = 0x10000000;
    uStack_18 = 0x80000000;
    uStack_14 = 0x80000000;
    uStack_10 = 0x80000000;
    uStack_c = 0x80000000;
    uStack_8 = 0x80000000;
    uVar1 = vram_20a87c(a0, &uStack_1c, 0x18);
    return uVar1;
}

/*
 * ta_fifo_25d0a0  0x8c25d0a0
 * called by: ninja_draw_25d7c6, pvr_20672a, pvr_2069a0
 */
int ta_fifo_25d0a0(int a0, int a1, u32 a2, u32 a3) {
    bool bVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    u32 *extraout_r2;
    u32 uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    u32 *extraout_r3;
    u32 uVar14;
    u32 uVar15;
    u32 uVar16;
    int iVar17;
    u32 *a5;
    u32 uVar18;
    int iVar19;
    u32 n;
    bool bVar20;
    u32 uVar21;
    u32 in_stack_00000000;
    int in_stack_00000004;
    int iStack_d8;
    u32 uStack_d4;
    u32 uStack_d0;
    u32 uStack_cc;
    u32 uStack_98;
    u32 uStack_94;
    u32 uStack_90;
    u32 uStack_88;
    u32 uStack_84;
    u32 auStack_80[7];
    u32 uStack_64;
    u32 uStack_60;
    u32 uStack_54;
    u32 auStack_50[7];
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;

    bVar1 = false;
    bVar20 = g_8c4a9d70 == 1;
    iVar17 = a1;
    uVar18 = a2;
    if (g_8c4a9db8 == 0) {
        uVar18 = in_stack_00000000;
        pvr_ta_list_init(a0, a1, in_stack_00000000, a3);
    }
    uVar21 = a0 * a1;
    iVar19 = in_stack_00000000 * 0x20;
    iStack_d8 = a2 * uVar21 * 0x18 + *(int *)(iVar19 + 0x8c4aa01c);
    if (((g_8c4a9bb0 & 0x20) != 0) && (g_8c4aa010 != 0)) {
        iVar17 = *(int *)(&g_8c4aa018 + iVar19);
        uStack_cc = vram_25cfc2(*(int *)(iVar19 + 0x8c4aa01c) + uVar21 * 0x60, iVar17);
        if ((g_8c4aa05c == 0) && ((g_8c4aa064 != 0 && (bVar20 != 0)))) {
            bVar1 = true;
        } else {
            bVar1 = false;
        }
    }
    if ((g_8c4a9bb0 & 0x80) != 0) {
        ta_fifo_25d028(iStack_d8);
        iStack_d8 = iStack_d8 + 0x18;
    }
    if (g_8c4aa05c == 0) {
        uStack_98 = 0x80000000;
    } else {
        uStack_98 = 0;
    }
    if (g_8c4aa060 == 0) {
        uStack_94 = 0x80000000;
    } else {
        uStack_94 = 0;
    }
    if (g_8c4aa064 == 0) {
        uStack_90 = 0x80000000;
    } else {
        uStack_90 = 0;
    }
    if (g_8c4aa068 == 0) {
        uStack_84 = 0x80000000;
    } else {
        uStack_84 = 0;
    }
    if (g_8c4aa06c == 0) {
        uStack_88 = 0x80000000;
    } else {
        uStack_88 = 0;
    }
    iVar7 = *(int *)(&g_8c277d80 + g_8c4aa05c * 4);
    iVar9 = *(int *)(&g_8c277d80 + g_8c4aa060 * 4);
    iVar10 = *(int *)(&g_8c277d80 + g_8c4aa064 * 4);
    iVar11 = *(int *)(&g_8c277d80 + g_8c4aa068 * 4);
    iVar12 = *(int *)(&g_8c277d80 + g_8c4aa06c * 4);
    iVar19 = *(int *)(iVar19 + 0x8c4aa024);
    iVar4 = *(int *)(&g_8c277d80 + g_8c4aa05c * 4) * uVar21 * 4 + iVar19;
    iVar5 = iVar4 + *(int *)(&g_8c277d80 + g_8c4aa060 * 4) * uVar21 * 4;
    iVar6 = *(int *)(&g_8c277d80 + g_8c4aa064 * 4) * uVar21 * 4 + iVar5;
    iVar17 = g_8c4aa068 * 4;
    n = 0;
    iVar13 = *(int *)(&g_8c277d80 + iVar17);
    uVar18 = (u32)bVar20 << 0x1d;
    uStack_d4 = a2;
    if (uVar21 != 0) {
        do {
            uVar16 = 0;
            if (in_stack_00000004 == 0) {
                uStack_d4 = libgcc_divide_helper_01051c(n, g_8c4aa00c);
                uStack_d0 = libgcc_divide_helper_0106dc(n, *extraout_r2);
            } else if (in_stack_00000004 == 1) {
                uStack_d4 = libgcc_divide_helper_0106dc(n, g_8c4aa008);
                uStack_d0 = libgcc_divide_helper_01051c(n, *extraout_r3);
            }
            if ((g_8c4a9d74 == 1) && ((g_8c4a9d78 < uStack_d4 || (g_8c4a9d7c < uStack_d0)))) {
                uVar16 = 0x80000000;
            }
            uVar2 = (uStack_d0 & 0x3f) << 8;
            iVar17 = uStack_d0 * g_8c4aa008 + uStack_d4;
            uVar3 = (uStack_d4 & 0x3f) << 2;
            uVar14 = (u32)(n == uVar21 - 1) << 0x1f | uVar2 | uVar3;
            auStack_50[6] = uVar14 | uVar18;
            uStack_34 = iVar7 * 4 * iVar17 + iVar19 | uStack_98 | uVar16;
            uVar8 = iVar9 * 4 * iVar17 + iVar4 | uStack_94 | uVar16;
            uVar15 = iVar10 * 4 * iVar17 + iVar5 | uStack_90 | uVar16;
            uStack_28 = iVar11 * 4 * iVar17 + iVar6 | uStack_84 | uVar16;
            uStack_24 = uVar15;
            if (g_8c277d90 == 0) {
                uStack_24 = iVar12 * 4 * iVar17 + iVar6 + iVar13 * uVar21 * 4 | uStack_88 | uVar16;
            }
            uStack_30 = uVar8;
            if ((g_8c4a9d80 != 0) && (uStack_30 = uStack_28, g_8c4a9d84 == 1)) {
                uStack_30 = uVar8;
                uStack_28 = uVar8;
            }
            uStack_2c = uVar15;
            if ((g_8c4a9bb0 & 0x20) == 0) {
                iVar17 = vram_20a87c(n * 0x18 + iStack_d8, auStack_50 + 6, 0x18);
            } else {
                if (g_8c4aa010 == 0) {
                    auStack_50[6] = uVar2 | uVar3 | uVar18 | 0x10000000;
                    auStack_50[0] = uVar14 | uVar18 | 0x40000000;
                    auStack_50[1] = 0x80000000;
                    auStack_50[2] = 0x80000000;
                    auStack_50[3] = 0x80000000;
                    auStack_50[4] = 0x80000000;
                    auStack_50[5] = 0x80000000;
                    iVar17 = n * 0x30 + iStack_d8;
                    vram_20a87c(iVar17, auStack_50 + 6, 0x18);
                    iVar17 = iVar17 + 0x18;
                    a5 = auStack_50;
                } else {
                    auStack_50[6] = uVar2 | uVar3 | uVar18 | 0x10000000;
                    auStack_80[6] = uVar2 | uVar3 | uVar18 | 0x50000000;
                    auStack_80[0] = uVar14 | uVar18 | 0x40000000;
                    auStack_50[0] = uVar2 | uVar3 | 0x50000000;
                    if (bVar1) {
                        uStack_34 = uStack_cc;
                    }
                    auStack_50[1] = 0x80000000;
                    auStack_50[2] = 0x80000000;
                    auStack_50[3] = uStack_cc;
                    auStack_50[4] = 0x80000000;
                    auStack_50[5] = 0x80000000;
                    uStack_64 = 0x80000000;
                    uStack_60 = 0x80000000;
                    uStack_54 = 0x80000000;
                    uStack_2c = 0x80000000;
                    uStack_28 = 0x80000000;
                    auStack_80[1] = 0x80000000;
                    auStack_80[2] = 0x80000000;
                    auStack_80[3] = 0x80000000;
                    auStack_80[4] = 0x80000000;
                    auStack_80[5] = 0x80000000;
                    iVar17 = n * 0x60 + iStack_d8;
                    vram_20a87c(iVar17, auStack_50 + 6, 0x18);
                    vram_20a87c(iVar17 + 0x18, auStack_50, 0x18);
                    vram_20a87c(iVar17 + 0x30, auStack_80 + 6, 0x18);
                    a5 = auStack_80;
                    iVar17 = iVar17 + 0x48;
                }
                iVar17 = vram_20a87c(iVar17, a5, 0x18);
            }
            n = n + 1;
        } while (n < uVar21);
    }
    return iVar17;
}

/*
 * ninja_draw_25d780  0x8c25d780
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: shinobi_draw_206162
 */
u32 *ninja_draw_25d780(void) {
    u32 *puVar1;
    u32 *puVar2;
    u32 ar4_00;
    u32 ar5_00;

    pvr_20a844(8, 1);
    ar5_00 = 0;
    ar4_00 = 8;
    pvr_20a844(8, 0);
    sh4_dmac_202e20();
    puVar1 = 0x8c4a9ff4;
    g_8c4a9ff4 = 0x800000;
    puVar2 = 0x8c4a9ffc;
    g_8c4a9ffc = 0x600000;
    puVar1[3] = *puVar2;
    puVar2[7] = g_8c4a9ff4 >> 1;
    puVar2[0xf] = 0;
    g_8c4aa058 = 1;
    return puVar2 + 7;
}

/*
 * ninja_draw_25d7c6  0x8c25d7c6
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: kamui_uses_kamui_cfg_texture_memory_211120, kamui_uses_ta_fifo_21092e, shinobi_draw_206162,
 * ta_uses_sh4_dmac_210e40
 */
u32 ninja_draw_25d7c6(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0) {
    u32 *puVar1;
    u32 *puVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    g_8c4a9c14 = s0;
    puVar1 = 0x8c4aa058;
    g_8c4aa058 = (0x10000 & s0) >> 0x10;
    puVar2 = 0x8c4aa05c;
    g_8c4aa05c = (0x60000 & s0) >> 0x11;
    puVar1[2] = (0x180000 & s0) >> 0x13;
    puVar2[2] = (0x600000 & s0) >> 0x15;
    puVar1[4] = (0x1800000 & s0) >> 0x17;
    puVar2[4] = (s0 & 0x6000000) >> 0x19;
    puVar1[-0x18] = (puVar1[-0x15] >> 2) * 3;
    iVar3 = ninja_calc_25ce80(puVar2[-0x15] * g_8c4aa00c, 1);
    iVar10 = (int)(int)0xffffff00;
    iVar7 = 0;
    iVar11 = 0;
    iVar8 = 0;
    iVar9 = 0;
    do {
        iVar12 = iVar11 * 0x20;
        *(int *)(0x8c4aa018 + 4 + iVar12) = *(int *)(0x8c4aa018 + iVar12) + g_8c4aa004;
        iVar4 = 0x8c4aa01c;
        if ((g_8c4a9bb0 & 0x20) == 0) {
            *(int *)(0x8c4aa01c + iVar12) =
                *(int *)(0x8c4aa01c + iVar12) + g_8c4aa008 * *(int *)(0x8c4aa01c + -0x10) * -0x18;
        } else {
            if (g_8c4aa010 == 0) {
                iVar6 = *(int *)(0x8c4aa01c + iVar12) + g_8c4aa008 * *(int *)(0x8c4aa01c + -0x10) * -0x30;
                iVar4 = 0x8c4aa01c;
            } else {
                *(int *)(0x8c4aa01c + iVar12) = *(int *)(0x8c4aa01c + iVar12) + -0x44;
                iVar6 = *(int *)(iVar4 + iVar12) + g_8c4aa008 * g_8c4aa00c * -0x60;
            }
            *(int *)(iVar4 + iVar12) = iVar6;
        }
        if ((g_8c4a9bb0 & 0x80) != 0) {
            *(int *)(0x8c4aa01c + iVar12) = *(int *)(0x8c4aa01c + iVar12) + -0x18;
        }
        iVar4 = 0x8c4aa01c;
        if (g_8c4aa058 == 0) {
            *(u32 *)(0x8c4aa024 + iVar7) = *(int *)(0x8c4aa018 + iVar7) + g_8c4a9ff8 & 0xffffffe0;
            iVar4 = 0x8c4aa01c;
            *(u32 *)(0x8c4aa01c + 0xc + iVar7) = *(int *)(0x8c4aa01c + iVar7) - iVar3 & 0xffffff80;
            *(int *)(iVar4 + 0x10 + iVar7) = *(int *)(iVar4 + 8 + iVar7) + iVar3;
        } else {
            *(u32 *)(0x8c4aa01c + 8 + iVar8) = *(int *)(0x8c4aa01c + iVar8) - iVar3 & 0xffffff80;
            *(u32 *)(iVar4 + 0xc + iVar8) = *(int *)(iVar4 + -4 + iVar8) + g_8c4a9ff8 & 0xffffffe0;
            *(u32 *)(iVar4 + 0x10 + iVar8) = *(u32 *)(iVar4 + 8 + iVar8);
        }
        iVar4 = 0x8c4aa018;
        *(u32 *)(0x8c4aa018 + 0x18 + iVar9) = *(u32 *)(0x8c4aa018 + iVar9);
        *(int *)(iVar4 + 0x1c + iVar9) = *(int *)(iVar4 + iVar9) + g_8c4a9ff8 + iVar10;
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar8 + 0x20;
        iVar7 = iVar7 + 0x20;
    } while (iVar11 < 2);
    ta_fifo_25d0a0(g_8c4aa008, g_8c4aa00c, 0, 1);
    uVar5 = ta_fifo_25d0a0(g_8c4aa008, g_8c4aa00c, 0, 1);
    return uVar5;
}

/*
 * pvr_soft_reset  0x8c25da4c
 * pulses the PVR SOFTRESET register (a05f8008): 1 then 0
 */
u32 pvr_soft_reset(void) {
    u32 uVar1;

    pvr_20a844(8, 1);
    uVar1 = pvr_20a844(8, 0);
    return uVar1;
}

/*
 * pvr_pack_display_regs  0x8c25dac0
 * packs the display mode parameters from the stack into the shadow values of the PVR display registers
 * called by: pvr_uses_libgcc_divide_helper_25dc60
 */
u32 pvr_pack_display_regs(void) {
    u32 *puVar1;
    u32 uVar2;
    u32 uVar3;
    u32 in_stack_00000000;
    u32 in_stack_00000004;
    u32 in_stack_00000008;
    u32 in_stack_0000000c;
    u32 in_stack_00000010;
    u32 in_stack_00000014;
    u32 in_stack_00000018;
    u32 in_stack_0000001c;
    u32 in_stack_00000020;
    u32 in_stack_00000028;
    u32 in_stack_0000002c;
    u32 in_stack_00000030;
    u32 in_stack_00000034;
    u32 in_stack_00000038;
    u32 in_stack_0000003c;
    u32 in_stack_00000040;
    u32 in_stack_00000044;
    u32 in_stack_00000048;
    u32 in_stack_0000004c;
    u32 in_stack_00000050;
    u32 in_stack_00000054;
    u32 in_stack_00000058;
    u32 in_stack_0000005c;
    u32 in_stack_00000060;
    u32 in_stack_00000064;
    u32 in_stack_00000068;
    u32 in_stack_0000006c;
    u8 in_stack_00000070;

    uVar2 = (u32)0x7ff;
    g_8c4a9e60 = in_stack_00000058 & uVar2 | (in_stack_00000054 & uVar2) << 0x10;
    g_8c4a9e64 = in_stack_00000060 & uVar2 | (in_stack_0000005c & uVar2) << 0x10;
    g_8c4a9e68 = in_stack_00000048 & 0xf | (in_stack_0000004c & 0x1f) << 4 | (in_stack_00000050 & 0xf) << 9;
    g_8c4a9bec = in_stack_00000000;
    g_8c4a9bf0 = in_stack_00000004;
    uVar2 = (u32)0x3ff;
    uVar3 = (in_stack_00000008 & uVar2) << 0x14;
    if (g_8c4a9c00 < 1) {
        g_8c4a9e6c = in_stack_00000000 & uVar2 | (in_stack_00000004 & uVar2) << 10 | uVar3;
    } else {
        g_8c4a9e6c = in_stack_00000000 & uVar2 | (in_stack_00000004 - g_8c4a9c00 & uVar2) << 10 | uVar3;
    }
    g_8c4a9ea8 = in_stack_00000014 & 0xff | (in_stack_00000018 & 0xff) << 8;
    puVar1 = 0x8c4a9eac;
    g_8c4a9eac = in_stack_00000010 & 0xffff | (in_stack_0000000c & 1) << 0x10 | (in_stack_0000001c & 1) << 0x12;
    puVar1[-0xf] = in_stack_00000044 & (int)0x1ff;
    g_8c4a9e78 = in_stack_00000030 & 7 | (in_stack_0000002c & 1) << 3 | (in_stack_00000034 & 0xff) << 8 |
                 (in_stack_00000038 & 0xff) << 0x10;
    g_8c4a9e74 = in_stack_00000020 & 1 | (in_stack_00000028 & 1) << 1 | (in_stack_0000003c & 3) << 2 |
                 (in_stack_00000040 & 7) << 4 | (u32)in_stack_00000070 << 8 | (in_stack_00000068 & 0x1f) << 0x10 |
                 (in_stack_00000064 & 1) << 0x16 | (in_stack_0000006c & 1) << 0x17;
    return 0x6c;
}

/*
 * pvr_uses_libgcc_divide_helper_25dc60  0x8c25dc60
 * area name: sits between pvr functions (same compilation unit); behaviour name: its main named callee is
 * libgcc_divide_helper_010468 called by: kamui_set_display_mode_cfg, shinobi_draw_207da0
 */
u32 pvr_uses_libgcc_divide_helper_25dc60(int a0, u32 a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 d;
    u32 a6;
    u32 ar7_00;
    u32 uVar4;
    int iVar5;
    int iVar6;
    int n;
    u32 in_stack_00000000;
    int in_stack_00000004;
    int iStack_e4;
    int iStack_dc;
    int iStack_d8;
    u32 auStack_d4[4];
    u32 auStack_c0[4];
    int aiStack_ac[4];
    int iStack_94;
    u32 uStack_90;
    int iStack_8c;
    u32 uStack_88;
    u32 uStack_84;
    u32 uStack_80;
    u32 uStack_7c;
    u32 uStack_78;
    u32 uStack_74;
    u32 uStack_6c;
    u32 uStack_68;
    u32 uStack_64;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    int iStack_50;
    u32 uStack_4c;
    u32 uStack_48;
    u32 uStack_44;
    u32 uStack_3c;
    u32 uStack_38;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;

    aiStack_ac[0] = g_8c271fd0;
    aiStack_ac[1] = g_8c271fd4;
    aiStack_ac[2] = g_8c271fd8;
    aiStack_ac[3] = g_8c271fdc;
    auStack_c0[0] = g_8c271fe8;
    auStack_c0[1] = g_8c271fec;
    auStack_c0[2] = g_8c271ff0;
    auStack_c0[3] = g_8c271ff4;
    auStack_d4[0] = g_8c271ffc;
    auStack_d4[1] = g_8c272000;
    auStack_d4[2] = g_8c272004;
    auStack_d4[3] = g_8c272008;
    iVar6 = aiStack_ac[a2];
    g_8c4a9bf8 = a1;
    if (((g_8c4a9bcc & 1) != 1) && ((g_8c4a9bcc & 0x2c) == 0x20)) {
        g_8c4a9bf8 = a1 >> 1;
    }
    if ((in_stack_00000004 == 0) || ((g_8c4a9bcc & 0x20) != 0)) {
        iStack_dc = 1;
    } else {
        iStack_dc = 2;
    }
    uStack_74 = 1;
    uStack_5c = 0;
    uStack_60 = 0;
    uStack_54 = 0;
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    if ((g_8c4a9bcc & 1) == 0) {
        uStack_28 = 0;
        if (a3 == 1) {
            iVar5 = 2;
            goto LAB_8c25dd8c;
        }
        iStack_d8 = 1;
        iVar5 = 1;
    } else {
        uStack_28 = 1;
        iVar5 = 1;
    LAB_8c25dd8c:
        iStack_d8 = 0;
    }
    if (iVar6 != 0x10) {
        if (iVar6 == 0x18) {
            uStack_64 = 4;
            uStack_58 = 2;
        } else {
            if (iVar6 != 0x20)
                goto LAB_8c25dde8;
            uStack_64 = 6;
            uStack_58 = 3;
        }
        uStack_68 = 0;
        goto LAB_8c25dde8;
    }
    if (a2 == 3) {
        uStack_64 = 3;
    LAB_8c25ddc4:
        uStack_58 = 0;
    } else if (a2 == 0) {
        uStack_64 = 1;
        uStack_58 = 1;
    } else {
        if (a2 == 1) {
            uStack_64 = 0;
            goto LAB_8c25ddc4;
        }
        uStack_64 = 1;
        uStack_58 = 1;
    }
    uStack_68 = in_stack_00000000;
LAB_8c25dde8:
    n = a0 * iVar6;
    uStack_6c = 0;
    uStack_78 = 0;
    iStack_50 = n;
    if (n < 0) {
        iStack_50 = n + 0x3f;
    }
    iStack_50 = iStack_50 >> 6;
    d = 0x20;
    g_8c4a9bf4 = a0;
    iVar1 = libgcc_divide_helper_010468(n, 0x20);
    uVar4 = (int)(a1 + ((int)a1 < 0)) >> 1;
    iStack_94 = iVar1 + -1;
    iVar1 = iVar6;
    if (iVar6 < 0) {
        iVar1 = iVar6 + 7;
    }
    iVar1 = (iVar1 >> 3) * a0;
    uStack_90 = uVar4;
    if (a3 == 1) {
        if ((g_8c4a9bcc & d) == 0) {
            g_8c4a9dc4 = 0;
            iStack_8c = 1;
            g_8c4a9dc8 = iVar1;
            uStack_90 = a1;
        } else {
            iVar2 = libgcc_divide_helper_010468(n, d);
            iStack_8c = iVar2 + 1;
            g_8c4a9dc4 = 0;
            g_8c4a9dc8 = iVar1;
        }
    } else if ((g_8c4a9bcc & 1) == 0) {
        if ((g_8c4a9bcc & d) == 0) {
            g_8c4a9dc4 = 0;
            iStack_8c = 1;
            g_8c4a9dc8 = iVar1;
            uStack_90 = a1;
        } else {
            g_8c4a9dc4 = 0;
            g_8c4a9dc8 = iVar1;
            iVar1 = libgcc_divide_helper_010468(n, d);
            iStack_8c = iVar1 + 1;
        }
    } else {
        g_8c4a9dc4 = 0;
        iStack_8c = 1;
        g_8c4a9dc8 = iVar1;
        uStack_90 = a1;
    }
    uVar3 = uStack_90;
    uStack_90 = uStack_90 - 1;
    ar7_00 = 0x42;
    if (in_stack_00000004 == 0) {
        uStack_88 = 0;
        if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) != 0x20)) {
            if ((g_8c4a9bcc & 1) == 0) {
                if ((g_8c4a9bcc & d) == 0) {
                    if ((g_8c4a9bcc & 0x42) == 0x42) {
                        uStack_84 = auStack_c0[g_8c4a9bdc];
                        uStack_90 = uVar3 - 2;
                    } else {
                        uStack_84 = 0x400;
                    }
                } else {
                    if ((g_8c4a9bcc & 0x42) == 0x42) {
                        uStack_84 = auStack_c0[g_8c4a9bdc];
                    } else {
                        uStack_84 = 0x401;
                    }
                    uStack_90 = uVar3 - 2;
                }
            } else {
                uStack_84 = 0x400;
            }
        } else {
            if ((g_8c4a9bcc & 0x42) == 0x42) {
                uStack_84 = auStack_d4[g_8c4a9bdc];
            } else {
                uStack_84 = 0x800;
            }
            g_8c4a9dc4 = 0;
            g_8c4a9dc8 = 0;
            iStack_8c = 1;
            uStack_90 = uVar3 - 2;
        }
        iStack_e4 = 1;
    } else {
        g_8c4a9c14 = g_8c4a9c14 | 1;
        uStack_88 = 1;
        iStack_e4 = 2;
        uStack_90 = uVar3 - 2;
        if ((g_8c4a9bcc & 1) == 0) {
            uVar3 = g_8c4a9bcc & 0xffffffec;
            if ((((uVar3 == 100) || (uVar3 == 0x68)) || (uVar3 == 0x24)) || (uVar3 == 0x28)) {
                if ((g_8c4a9bcc & 0x42) == 0x42) {
                    uStack_84 = auStack_c0[g_8c4a9bdc];
                } else {
                    uStack_84 = 0x401;
                }
                iStack_8c = libgcc_divide_helper_010468(n, d);
                iStack_8c = iStack_8c + 1;
            } else if ((((uVar3 == 0x60) || (uVar3 == 0x40)) ||
                        ((uVar3 == 0x44 || ((uVar3 == 0x20 || (uVar3 == 0)))))) ||
                       (uVar3 == 4)) {
                g_8c4a9dc4 = 0;
                g_8c4a9dc8 = 0;
                if ((g_8c4a9bcc & 0x42) == 0x42) {
                    uStack_84 = auStack_d4[g_8c4a9bdc];
                } else {
                    uStack_84 = 0x800;
                }
                iStack_8c = 1;
            }
        } else {
            uStack_84 = 0x401;
        }
    }
    uStack_80 = 0x40;
    uStack_7c = 0x80;
    g_8c4aa008 = libgcc_divide_helper_010468(a0, d);
    g_8c4aa008 = g_8c4aa008 * iStack_e4;
    iVar5 = libgcc_divide_helper_010468(a1 * iVar5 * iStack_dc, d);
    g_8c4aa00c = iVar5 + iStack_d8;
    a6 = 0xf;
    if (0xf < g_8c4aa00c) {
        g_8c4aa00c = 0xf;
    }
    uStack_48 = 9;
    uStack_4c = 6;
    if (iVar6 == 0x10) {
        uStack_44 = 8;
    } else {
        uStack_44 = 0xb;
    }
    uStack_3c = 0;
    iVar6 = a0 + -1;
    uStack_34 = 0;
    if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) != 0x20)) {
        a1 = a1 - 1;
        uStack_38 = a1;
    } else {
        uStack_38 = uVar4 - 1;
    }
    libgcc_movstr_i4(iVar6, a1, 0xf, ar7_00);
    pvr_pack_display_regs();
    g_8c4a9be8 = 0;
    g_8c4a9be4 = 0;
    return 0;
}

/*
 * ninja_draw_25e260  0x8c25e260
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: ninja_draw_25e540, ninja_draw_25e884, ninja_draw_25eb60
 */
u32 ninja_draw_25e260(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int *piVar1;
    u8 *puVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 a5;
    u32 uVar6;
    u32 uVar7;
    u32 in_stack_00000000;
    u32 in_stack_00000004;
    u32 in_stack_00000008;
    u32 in_stack_0000000c;
    u32 in_stack_00000010;
    u32 in_stack_00000014;
    u32 in_stack_00000018;
    u32 in_stack_0000001c;
    u32 in_stack_00000020;
    u32 in_stack_00000024;
    int in_stack_00000028;
    int in_stack_0000002c;
    int in_stack_00000030;
    u32 in_stack_00000034;
    u32 in_stack_00000038;
    u32 in_stack_0000003c;
    u32 in_stack_00000040;
    u32 in_stack_00000044;
    int in_stack_00000048;
    int in_stack_0000004c;
    u32 in_stack_00000050;
    int in_stack_00000054;
    int in_stack_0000005c;
    int in_stack_00000060;
    int in_stack_00000068;
    u32 in_stack_0000006c;
    u32 in_stack_00000070;
    u32 in_stack_00000074;
    u32 in_stack_00000078;

    iVar3 = (int)0xf8;
    g_8c4a9c04 = *(int *)((int)&stack0x00000000 + iVar3);
    g_8c4a9c08 = *(int *)(&stack0xfffffff8 + iVar3);
    g_8c4a9c0c = *(u32 *)(&stack0xfffffffc + iVar3);
    g_8c4a9e8c = in_stack_00000054 << 1 | in_stack_00000050 | in_stack_0000005c << 2 | in_stack_00000068 << 3 |
                 in_stack_00000030 << 4 | in_stack_00000060 << 5 | in_stack_00000028 << 6 | in_stack_0000002c << 7 |
                 in_stack_00000048 << 8 | in_stack_0000004c << 9;
    uVar5 = (u32)0x7ff;
    g_8c4a9e98 = in_stack_00000004 & uVar5 | (in_stack_00000000 & uVar5) << 0x10;
    g_8c4a9e90 = (in_stack_00000004 & uVar5) << 0x10;
    g_8c4a9e9c = in_stack_00000008 & uVar5 | (in_stack_00000014 & uVar5) << 0x10;
    g_8c4a9ea0 = in_stack_00000010 & uVar5 | (in_stack_0000000c & uVar5) << 0x10;
    g_8c4a9e94 = in_stack_00000074 & uVar5 | (in_stack_00000078 & uVar5) << 0x10;
    uVar6 = 0x7f;
    uVar7 = (u32)0x3ff;
    g_8c4a9ea4 = in_stack_00000018 & 0x7f | (in_stack_0000001c & 0xf) << 8 | (in_stack_00000020 & uVar7) << 0xc |
                 (in_stack_00000024 & 0x7f) << 0x16;
    uVar5 = (in_stack_00000044 & 0xf) << 4;
    g_8c4a9eb0 = in_stack_00000034 & 1 | (in_stack_00000038 & 1) << 1 | (in_stack_0000003c & 1) << 2 |
                 (in_stack_00000040 & 1) << 3 | uVar5 | (in_stack_0000006c & 1) << 8 |
                 (in_stack_00000070 & 0x3f) << 0x10;
    piVar1 = 0x8c4a9c04;
    g_8c4a9eb4 = g_8c4a9c04 + g_8c4a9bfc;
    g_8c4a9eb8 = g_8c4a9c08 + g_8c4a9c00 | (0x8c4a9c08 [1] + piVar1[-1]) * 0x10000;
    puVar2 = (&pvr_20a876);
    if ((g_8c4aa098 != 1) && ((g_8c4a9bb0 & 2) != 0)) {
        iVar3 = (int)0x10c;
        do {
            uVar4 = (*(code *)puVar2)(iVar3, uVar5, uVar6, a3);
        } while ((uVar4 & uVar7) == 0);
        do {
            uVar4 = (*(code *)puVar2)(iVar3, uVar5, uVar6, a3);
        } while ((uVar4 & uVar7) != 0);
    }
    puVar2 = (&pvr_20a844);
    pvr_20a844((int)0xe8, g_8c4a9eb0 | 8);
    a5 = 0x800000;
    if ((g_8c4a9bc8 & 1) == 0) {
        a5 = 0;
    }
    (*(code *)puVar2)(0x44, a5, uVar6, a3);
    (*(code *)puVar2)(0x5c, 0, uVar6, a3);
    (*(code *)puVar2)((int)0xd0, g_8c4a9e8c, uVar6, a3);
    (*(code *)puVar2)((int)0xd8, g_8c4a9e9c, uVar6, a3);
    (*(code *)puVar2)((int)0xcc, g_8c4a9e94, uVar6, a3);
    (*(code *)puVar2)((int)0xd4, g_8c4a9e98, uVar6, a3);
    (*(code *)puVar2)((int)0xdc, g_8c4a9ea0, uVar6, a3);
    (*(code *)puVar2)((int)0xe0, g_8c4a9ea4, uVar6, a3);
    (*(code *)puVar2)((int)0xec, g_8c4a9eb4, uVar6, a3);
    (*(code *)puVar2)((int)0xf0, g_8c4a9eb8, uVar6, a3);
    uVar6 = (*(code *)puVar2)((int)0xc8, g_8c4a9e90, uVar6, a3);
    return uVar6;
}

/*
 * ninja_draw_25e540  0x8c25e540
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: kamui_set_display_mode_cfg
 */
u32 ninja_draw_25e540(u32 a0, u32 a1) {
    u32 uVar1;
    int ar5_00;
    u32 ar6_00;
    u32 a7;
    bool bVar2;
    int aiStack_118[13];
    u32 uStack_e4;
    u32 uStack_e0;
    u32 uStack_dc;
    u32 uStack_d8;
    u32 uStack_d4;
    u32 uStack_d0;
    u32 uStack_cc;
    u32 uStack_c8;
    u32 uStack_c4;
    u32 uStack_c0;
    u32 uStack_bc;
    u32 uStack_b8;
    u32 uStack_b4;
    u32 uStack_b0;
    u32 uStack_ac;
    u32 uStack_a8;
    u32 uStack_a4;
    u32 uStack_a0;
    u32 uStack_9c;
    u32 uStack_98;
    u32 uStack_94;
    u32 uStack_90;
    u32 uStack_8c;
    int iStack_14;
    int iStack_10;
    u32 uStack_c;

    aiStack_118[7] = 0x35f;
    aiStack_118[5] = 0x8d;
    aiStack_118[6] = 0x34b;
    uVar1 = 1;
    aiStack_118[0xb] = 0x3f;
    if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
        aiStack_118[10] = 0x138;
    } else {
        aiStack_118[10] = 0x270;
    }
    a7 = 0x42;
    ar6_00 = 0x16;
    if ((g_8c4a9bcc & 0x42) == 0x42) {
        if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
            aiStack_118[8] = 0x16;
            aiStack_118[9] = 0x134;
        } else {
            aiStack_118[8] = 0x2c;
            aiStack_118[9] = 0x26c;
        }
        if ((g_8c4a9bcc & 0x20) == 0) {
            uStack_90 = 0x136;
        } else {
            uStack_90 = 0x134;
        }
    } else {
        if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
            aiStack_118[8] = 0x16;
            aiStack_118[9] = 0x134;
        } else {
            aiStack_118[8] = 0x2c;
            aiStack_118[9] = 0x26c;
        }
        if ((g_8c4a9bcc & 0x20) == 0) {
            uStack_90 = 0x136;
        } else {
            uStack_90 = 0x134;
        }
    }
    uStack_8c = 0x15;
    if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
        aiStack_118[0xc] = 3;
        uStack_e4 = 799;
        uStack_e0 = 0xf;
    } else {
        uStack_e4 = 0x16a;
        uStack_e0 = 0x1f;
        aiStack_118[0xc] = 5;
    }
    if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
        uStack_d4 = 0;
    } else {
        uStack_d4 = 1;
    }
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
        uStack_c0 = 2;
    } else {
        uStack_c0 = 0;
    }
    if (g_8c4a9bac == 6) {
        uStack_94 = 0x16;
    } else {
        uStack_94 = 0x3f;
    }
    bVar2 = (g_8c4a9bcc & 0x10) == 0;
    if (bVar2) {
        uStack_98 = 1;
    } else {
        uStack_98 = 0;
    }
    uStack_98 = (u32)bVar2;
    uStack_dc = 0;
    uStack_d8 = 1;
    uStack_bc = 1;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_9c = 0;
    uStack_a4 = 0;
    ar5_00 = 0xf0;
    uStack_a0 = 0xf0;
    uStack_c = 0xae;
    if ((g_8c4a9bcc & 0x42) == 0x42) {
        aiStack_118[0] = 0x2a;
        aiStack_118[1] = 0x26;
        aiStack_118[2] = 0x22;
        aiStack_118[3] = 0x1e;
        aiStack_118[4] = 0x1a;
        iStack_10 = aiStack_118[g_8c4a9bdc];
        ar5_00 = iStack_10;
        if (((g_8c4a9bcc & 1) != 1) && ((g_8c4a9bcc & 0x2c) != 0)) {
            ar5_00 = iStack_10 + -1;
        }
        g_8c4a9ecc =
            (int)(*(int *)(&g_8c4aa084 + g_8c4a9bdc * 4) + (u32)(*(int *)(&g_8c4aa084 + g_8c4a9bdc * 4) < 0)) >> 1;
        iStack_14 = ar5_00;
    } else {
        ar6_00 = 0x2e;
        if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
            iStack_14 = 0x2e;
        } else {
            iStack_14 = 0x2d;
        }
        iStack_10 = 0x2e;
        g_8c4a9ecc = 0xf0;
    }
    g_8c4a9ec4 = (aiStack_118[8] >> 1) + g_8c4a9ecc;
    g_8c4a9ec8 = aiStack_118[8];
    libgcc_movstr_i4(1, ar5_00, ar6_00, 0x42);
    uVar1 = ninja_draw_25e260(uVar1, ar5_00, ar6_00, a7);
    return uVar1;
}

/*
 * ninja_draw_25e884  0x8c25e884
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: kamui_set_display_mode_cfg
 */
u32 ninja_draw_25e884(u32 a0, u32 a1) {
    u32 uVar1;
    u32 a5;
    u32 a6;
    u32 a7;
    int iStack_f8;

    uVar1 = 1;
    a6 = 0x12;
    if (((g_8c4a9bcc & 1) == 1) || ((g_8c4a9bcc & 0x2c) == 0)) {
        iStack_f8 = 0x12;
    } else {
        iStack_f8 = 0x24;
    }
    a7 = 0x1f;
    a5 = 0;
    g_8c4a9ecc = 0xf0;
    g_8c4a9ec4 = (iStack_f8 >> 1) + 0xf0;
    g_8c4a9ec8 = iStack_f8;
    libgcc_movstr_i4(1, 0, 0x12, 0x1f);
    uVar1 = ninja_draw_25e260(uVar1, a5, a6, a7);
    return uVar1;
}

/*
 * ninja_draw_25eb60  0x8c25eb60
 * area name: in the ninja library code range; behaviour name: mostly calls draw functions
 * called by: kamui_set_display_mode_cfg
 */
u32 ninja_draw_25eb60(u32 a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 a5;
    u32 a6;

    a5 = 0x28;
    a6 = 0x23;
    uVar1 = 0x1e0;
    g_8c4a9ecc = 0x1e0;
    g_8c4a9ec4 = 0x208;
    g_8c4a9ec8 = 0x28;
    libgcc_movstr_i4(0x1e0, 0x28, 0x23, a3);
    uVar1 = ninja_draw_25e260(uVar1, a5, a6, a3);
    return uVar1;
}

/*
 * ret_const_1_25eca0  0x8c25eca0
 * called by: pvr_uses_ret_const_1_20759a
 */
u32 ret_const_1_25eca0(u32 a0) {
    return 1;
}

/*
 * ret_const_1_25eca4  0x8c25eca4
 * called by: pvr_uses_ret_const_1_2075bc
 */
u32 ret_const_1_25eca4(void) {
    return 1;
}

/*
 * cri_clear_table_4b3340  0x8c25eca8
 * clears the 0x100-byte table at 8c4b3340 and its two counters
 * called by: alt_entry_262814, cri_uses_irq_disable_nested_262810
 */
u32 cri_clear_table_4b3340(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = memset(0x8c4b3340, 0, 0x100);
    g_8c277d98 = 0;
    g_8c277d9c = 0;
    return uVar1;
}

/*
 * cri_clear_table_4b3340_b  0x8c25ecc2
 * clears the 0x100-byte table at 8c4b3340 and its two counters
 * called by: cri_uses_irq_disable_nested_2628fa
 */
u32 cri_clear_table_4b3340_b(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = memset(0x8c4b3340, 0, 0x100);
    g_8c277d98 = 0;
    g_8c277d9c = 0;
    return uVar1;
}

/*
 * cri_set_error_callback  0x8c25ecdc
 * registers the CRI error callback (a0) and its argument (a1)
 */
u32 cri_set_error_callback(u32 a0, u32 a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    g_8c277d98 = a0;
    g_8c277d9c = a1;
    return ain0;
}

/*
 * lib_error_printf  0x8c25ece6
 * formats a library error and hands it to the registered error callback
 * called by: ADXF_AddPartition, ADXF_GetFileRange, ADXF_GetFsizeByte, ADXF_GetFsizeSct, ADXF_GetNumReadSct,
 * ADXF_GetNumReqSct, ADXF_GetStat, ADXF_LoadPartition (+19 more)
 */
u32 lib_error_printf(u32 a0, u32 unused_a1, u32 a2, u32 unused_a3, u32 s0, u32 s4) {
    u32 uVar1;

    uVar1 = vsprintf_like(0x8c4b3340, s0, &s4);
    if (g_8c277d98 != NULL) {
        uVar1 = (*g_8c277d98)(g_8c277d9c, 0x8c4b3340);
    }
    return uVar1;
}

/*
 * cri_error_printf  0x8c25ecea
 * formats the message into the CRI error buffer and passes it to the registered error callback, if any
 */
u32 cri_error_printf(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3, u32 s0, u32 s4, u32 s8, u32 s12) {
    u32 uVar1;
    u32 *ar6_00;

    if ((a1 & (u32)&s8) == 0) {
        ar6_00 = &s8;
    } else {
        ar6_00 = &s12;
    }
    uVar1 = vsprintf_like(0x8c4b3340, s4, ar6_00);
    if (g_8c277d98 != NULL) {
        uVar1 = (*g_8c277d98)(g_8c277d9c, 0x8c4b3340, ar6_00, a3);
    }
    return uVar1;
}

/*
 * cri_calc_25ed3c  0x8c25ed3c
 * area name: in the cri library code range; behaviour name: integer arithmetic on its arguments
 * called by: cri_calls_calc_25f052
 */
u8 *cri_calc_25ed3c(u8 *a0, u32 *a1, u32 *a2, u32 *a3, u32 *s0) {
    u8 bVar1;
    u8 bVar2;
    bool bVar3;
    bool bVar4;
    u16 *puVar5;
    u32 uVar6;
    u32 uVar7;
    u16 uVar8;
    u32 uVar9;
    u32 uVar10;
    u16 *puVar11;
    u16 *puVar12;
    u32 uVar13;
    u32 uVar14;
    u8 *pbStack_20;

    uVar7 = 0xff00;
    uVar6 = 0xff0000;
    bVar3 = false;
    bVar4 = false;
    pbStack_20 = (u8 *)((u32)a0[1] << 8 | (u32)a0[2] << 0x10 | (u32)a0[3] << 0x18 | (u32)*a0);
    bVar2 = a0[7];
    bVar1 = a0[4];
    uVar13 = (u32)a0[5] << 8 | (u32)a0[6] << 0x10 | (u32)bVar2 << 0x18 | (u32)bVar1;
    uVar9 = (int)uVar13 >> 8 & 0xff00;
    uVar13 = uVar13 << 8 & 0xff0000;
    if ((pbStack_20 == 0x4d524f46) &&
        (((u32)a0[9] << 8 | (u32)a0[10] << 0x10 | (u32)a0[0xb] << 0x18 | (u32)a0[8]) == 0x46464941)) {
        puVar11 = (u16 *)(a0 + 0xc);
    joined_r0x8c25edfe:
        puVar5 = puVar11;
        if ((u16 *)((int)(a0 + 0xc) + ((bVar2 | uVar9 | uVar13 | (u32)bVar1 << 0x18) - 4)) <= puVar5) {
            return pbStack_20;
        }
        uVar10 = (u32) * (u8 *)((int)puVar5 + 1) << 8 | (u32)(u8)puVar5[1] << 0x10 |
                 (u32) * (u8 *)((int)puVar5 + 3) << 0x18 | (u32)(u8)*puVar5;
        uVar14 = (u32) * (u8 *)((int)puVar5 + 5) << 8 | (u32)(u8)puVar5[3] << 0x10 |
                 (u32) * (u8 *)((int)puVar5 + 7) << 0x18 | (u32)(u8)puVar5[2];
        uVar14 = (u32) * (u8 *)((int)puVar5 + 7) | (int)uVar14 >> 8 & uVar7 | uVar14 << 8 & uVar6 |
                 (u32)(u8)puVar5[2] << 0x18;
        puVar11 = puVar5 + 4;
        if (uVar10 == 0x4d4d4f43) {
            if (bVar3)
                goto joined_r0x8c25edfe;
            if ((int)uVar14 < 0x12)
                goto LAB_8c25ee98;
            *a2 = (int)(u32)*puVar11 >> 8 | (u32)*puVar11 << 8 & uVar7;
            uVar14 = (u32) * (u8 *)((int)puVar5 + 0xb) << 8 | (u32)(u8)puVar5[6] << 0x10 |
                     (u32) * (u8 *)((int)puVar5 + 0xd) << 0x18 | (u32)(u8)puVar5[5];
            *s0 = (u32) * (u8 *)((int)puVar5 + 0xd) | (int)uVar14 >> 8 & uVar7 | uVar14 << 8 & uVar6 |
                  (u32)(u8)puVar5[5] << 0x18;
            *a3 = (int)(u32)puVar5[7] >> 8 | (u32)puVar5[7] << 8 & uVar7;
            uVar8 = puVar5[9] >> 8 | puVar5[9] << 8 & (u16)uVar7;
            uVar14 = -((int)0x400e - ((int)(u32)puVar5[8] >> 8 | (u32)puVar5[8] << 8 & uVar7 & 0xffff));
            if ((int)uVar14 < 0) {
                uVar14 = (u32)(uVar8 >> (~uVar14 & 0x1f) + 1);
            } else {
                uVar14 = (u32)uVar8 << (uVar14 & 0x1f);
            }
            puVar12 = puVar5 + 0xd;
            *a1 = uVar14;
            bVar3 = true;
        } else {
            if (uVar10 != 0x444e5353) {
                puVar11 = (u16 *)((int)puVar11 + (uVar14 + 1 & 0xfffffffe));
                goto joined_r0x8c25edfe;
            }
            if (bVar4)
                goto joined_r0x8c25edfe;
            uVar14 = (u32) * (u8 *)((int)puVar5 + 9) << 8 | (u32)(u8)puVar5[5] << 0x10 |
                     (u32) * (u8 *)((int)puVar5 + 0xb) << 0x18;
            puVar12 = puVar5 + 6;
            pbStack_20 = (u8 *)(((u32) * (u8 *)((int)puVar5 + 0xb) | (uVar14 & uVar7 << 8) >> 8 |
                                 (uVar14 | (u8)*puVar11) << 8 & uVar6 | (u32)(u8)*puVar11 << 0x18) +
                                (int)puVar12);
            bVar4 = true;
        }
        puVar11 = puVar12;
        if ((!bVar3) || (!bVar4))
            goto joined_r0x8c25edfe;
    } else {
    LAB_8c25ee98:
        pbStack_20 = NULL;
    }
    return pbStack_20;
}

/*
 * is_aiff_header  0x8c25f01e
 * 1 when a0 starts a "FORM"...."AIFF" header
 * called by: alt_entry_25fdbe, cri_uses_is_spsd_header_25fdb2
 */
u32 is_aiff_header(int a0) {
    int iVar1;

    iVar1 = memcmp(a0, &g_8c272028, 4);
    if ((iVar1 == 0) && (iVar1 = memcmp(a0 + 8, &g_8c272030, 4), iVar1 == 0)) {
        return 1;
    }
    return 0;
}

/*
 * cri_calls_calc_25f052  0x8c25f052
 * area name: in the cri library code range; behaviour name: its callees mostly do: calc
 * called by: cri_copy_25f0ea
 */
u32 cri_calls_calc_25f052(u32 a0, int a1, short *a2, u8 *a3, char *s0, u8 *s4, char *s8, u32 *s12, u32 *s16, u32 *s20) {
    int iVar1;
    short sVar2;
    u32 uStack_20;
    char acStack_1c[4];
    char acStack_18[4];
    u32 uStack_14;
    u32 uStack_10;
    short *psStack_c;
    u8 *puStack_8;

    if (a1 < 0x1000) {
        *a2 = 0;
    } else {
        uStack_10 = a0;
        psStack_c = a2;
        puStack_8 = a3;
        iVar1 = cri_calc_25ed3c(a0, &uStack_20, acStack_1c, acStack_18);
        if ((iVar1 != 0) && (sVar2 = (short)iVar1 - (short)uStack_10, *psStack_c = sVar2, 0 < sVar2)) {
            *s12 = uStack_20;
            *s8 = acStack_1c[0];
            *s0 = acStack_18[0];
            *s16 = uStack_14;
            *puStack_8 = 0xff;
            iVar1 = (int)(short)*s8 * (int)(short)*s0;
            if (iVar1 < 0) {
                iVar1 = iVar1 + 7;
            }
            *s4 = (char)(iVar1 >> 3);
            *s20 = 1;
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * cri_copy_25f0ea  0x8c25f0ea
 * area name: in the cri library code range; behaviour name: mostly calls copy functions
 * called by: alt_entry_25fdbe, cri_uses_is_spsd_header_25fdb2
 */
u32 cri_copy_25f0ea(int a0, u32 a1, u32 a2) {
    int iVar1;
    int a7;
    short asStack_14[2];

    *(u16 *)(a0 + 2) = 1;
    a7 = a0 + 0xc;
    iVar1 = cri_calls_calc_25f052(a1, a2, asStack_14, a7);
    if (iVar1 < 0) {
        return 0;
    }
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
    *(u16 *)(a0 + 0xa8) = 3;
    if (*(char *)(a0 + 0xd) == '\b') {
        *(u16 *)(0xaa + a0) = 1;
    } else {
        *(u16 *)(0xaa + a0) = 0;
    }
    memset(a0 + 0x4c, 0, 4);
    return (int)asStack_14[0];
}

/*
 * cri_uses_get_field_c_25f1e8  0x8c25f1e8
 * area name: in the cri library code range; behaviour name: its main named callee is get_field_c_264f82
 * called by: cri_uses_get_field_c_25f40e
 */
int cri_uses_get_field_c_25f1e8(int a0) {
    u16 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;

    iVar10 = *(int *)(a0 + 0x50);
    if ((*(int *)(a0 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(a0 + 8), &g_8c4b9828), iVar2 == 0)) {
        (**(code **)(0x88 + a0))(*(u32 *)(0x88 + 4 + a0), a0 + 0x70, a0 + 0x74, a0 + 0x78);
        iVar2 = *(int *)(a0 + 0x68) - *(int *)(a0 + 0x70);
        if (*(int *)(a0 + 0x74) < iVar2) {
            iVar2 = *(int *)(a0 + 0x74);
        }
        iVar4 = *(int *)(a0 + 100);
        if (*(int *)(a0 + 0x54) < iVar2) {
            iVar2 = *(int *)(a0 + 0x54);
        }
        iVar9 = *(int *)(a0 + 0x70) * 2 + iVar4;
        if (*(char *)(a0 + 0xe) == '\x02') {
            iVar8 = *(int *)(a0 + 0x6c);
            iVar7 = 0;
            iVar3 = *(int *)(a0 + 0x70);
            iVar5 = 0;
            iVar6 = 0;
            if (0 < iVar2) {
                do {
                    uVar1 = *(u16 *)(iVar5 * 2 + iVar10);
                    iVar7 = iVar7 + 1;
                    *(u16 *)(iVar6 + iVar9) = uVar1 << 8 | uVar1 >> 8;
                    uVar1 = *(u16 *)((iVar5 + 1) * 2 + iVar10);
                    *(u16 *)(iVar6 + (iVar8 + iVar3) * 2 + iVar4) = uVar1 << 8 | uVar1 >> 8;
                    iVar5 = iVar5 + 2;
                    iVar6 = iVar6 + 2;
                } while (iVar7 < iVar2);
            }
        } else {
            iVar6 = 0;
            iVar4 = 0;
            if (0 < iVar2) {
                do {
                    iVar6 = iVar6 + 1;
                    *(u16 *)(iVar4 + iVar9) = *(u16 *)(iVar4 + iVar10) << 8 | *(u16 *)(iVar4 + iVar10) >> 8;
                    iVar4 = iVar4 + 2;
                } while (iVar6 < iVar2);
            }
        }
        *(int *)(0xa0 + a0) = iVar2;
        *(int *)(0xa4 + a0) = iVar2 * *(char *)(a0 + 0xe) * 2;
        *(u32 *)(a0 + 4) = 2;
    }
    iVar10 = *(int *)(a0 + 4);
    if (iVar10 == 2) {
        iVar10 = (int)0x90;
        iVar10 = (**(code **)(iVar10 + a0))(*(u32 *)(iVar10 + 4 + a0), *(u32 *)(iVar10 + 0x14 + a0),
                                            *(u32 *)(iVar10 + 0x10 + a0));
        *(u32 *)(a0 + 4) = 3;
    }
    return iVar10;
}

/*
 * alt_entry_25f1f4  0x8c25f1f4
 * probably an entry 12 bytes into 8c25f1e8: it reads registers that code sets before it
 */
int alt_entry_25f1f4(u32 unused_a0, u32 a1, u32 unused_a2, int *a3) {
    u16 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int *unaff_r13;
    int unaff_r14;

    iVar9 = *unaff_r13;
    if ((*(int *)(unaff_r14 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(unaff_r14 + 8), a1), iVar2 == 0)) {
        a3 = unaff_r13 + 10;
        (**(code **)(0x88 + unaff_r14))(*(u32 *)(0x88 + 4 + unaff_r14), unaff_r13 + 8, unaff_r13 + 9, a3);
        iVar2 = unaff_r13[6] - unaff_r13[8];
        if (unaff_r13[9] < iVar2) {
            iVar2 = unaff_r13[9];
        }
        iVar4 = unaff_r13[5];
        if (unaff_r13[1] < iVar2) {
            iVar2 = unaff_r13[1];
        }
        iVar8 = unaff_r13[8] * 2 + iVar4;
        if (*(char *)(unaff_r14 + 0xe) == '\x02') {
            iVar7 = unaff_r13[7];
            a3 = NULL;
            iVar3 = unaff_r13[8];
            iVar5 = 0;
            iVar6 = 0;
            if (0 < iVar2) {
                do {
                    uVar1 = *(u16 *)(iVar5 * 2 + iVar9);
                    a3 = (int *)((int)a3 + 1);
                    *(u16 *)(iVar6 + iVar8) = uVar1 << 8 | uVar1 >> 8;
                    uVar1 = *(u16 *)((iVar5 + 1) * 2 + iVar9);
                    *(u16 *)(iVar6 + (iVar7 + iVar3) * 2 + iVar4) = uVar1 << 8 | uVar1 >> 8;
                    iVar5 = iVar5 + 2;
                    iVar6 = iVar6 + 2;
                } while ((int)a3 < iVar2);
            }
        } else {
            iVar6 = 0;
            iVar4 = 0;
            if (0 < iVar2) {
                do {
                    uVar1 = *(u16 *)(iVar4 + iVar9);
                    a3 = (int *)(u32)uVar1;
                    iVar6 = iVar6 + 1;
                    *(u16 *)(iVar4 + iVar8) = uVar1 << 8 | uVar1 >> 8;
                    iVar4 = iVar4 + 2;
                } while (iVar6 < iVar2);
            }
        }
        *(int *)(0xa0 + unaff_r14) = iVar2;
        *(int *)(0xa4 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe) * 2;
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
 * cri_uses_get_field_c_25f306  0x8c25f306
 * area name: in the cri library code range; behaviour name: its main named callee is get_field_c_264f82
 * called by: cri_uses_get_field_c_25f40e
 */
int cri_uses_get_field_c_25f306(int a0) {
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
                    *(u16 *)((int)psVar10 + iVar8) = (u16)pbVar11[iVar7] << 8;
                    iVar5 = iVar7 + 1;
                    iVar9 = iVar9 + 1;
                    iVar7 = iVar7 + 2;
                    *(u16 *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (u16)pbVar11[iVar5] << 8;
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
                    *psVar10 = (u16)bVar1 << 8;
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
 * alt_entry_25f312  0x8c25f312
 * probably an entry 12 bytes into 8c25f306: it reads registers that code sets before it
 */
int alt_entry_25f312(u32 unused_a0, u32 a1, u32 unused_a2, int a3) {
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
                    *(u16 *)((int)psVar9 + iVar8) = (u16)pbVar10[iVar7] << 8;
                    iVar5 = iVar7 + 1;
                    a3 = a3 + 1;
                    iVar7 = iVar7 + 2;
                    *(u16 *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (u16)pbVar10[iVar5] << 8;
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
                    *psVar9 = (u16)bVar1 << 8;
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
 * cri_uses_get_field_c_25f40e  0x8c25f40e
 * area name: in the cri library code range; behaviour name: its callees mostly do: uses_get_field_c
 * called by: cri_uses_get_field_c_2602f4
 */
u32 cri_uses_get_field_c_25f40e(int a0) {
    u32 uVar1;

    if (*(short *)(0xaa + a0) == 1) {
        uVar1 = cri_uses_get_field_c_25f306(a0);
        return uVar1;
    }
    uVar1 = cri_uses_get_field_c_25f1e8(a0);
    return uVar1;
}

/*
 * cri_uses_libgcc_divide_helper_25f428  0x8c25f428
 * area name: in the cri library code range; behaviour name: its main named callee is libgcc_divide_helper_01051c
 * called by: cri_uses_libgcc_divide_helper_25f67e
 */
u32 cri_uses_libgcc_divide_helper_25f428(u8 *a0, int a1, u32 *a2, u32 *a3, u32 *s0, u32 *s4, int *s8) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;

    uVar4 = (u32)a0[1] << 8 | (u32)a0[2] << 0x10 | (u32)a0[3] << 0x18 | (u32)*a0;
    if ((uVar4 != 0x64732e) && (uVar4 != 0x646e732e)) {
        return 0;
    }
    iVar3 = CONCAT13(a0[4], CONCAT12(a0[5], CONCAT11(a0[6], a0[7])));
    if (a1 < iVar3) {
        return 0;
    }
    uVar4 = CONCAT13(a0[8], CONCAT12(a0[9], CONCAT11(a0[10], a0[0xb])));
    iVar2 = CONCAT13(a0[0xc], CONCAT12(a0[0xd], CONCAT11(a0[0xe], a0[0xf])));
    if (iVar2 == 1) {
        *s8 = 2;
    LAB_8c25f55c:
        *s0 = 8;
    } else {
        if (iVar2 == 2) {
            *s8 = 1;
            goto LAB_8c25f55c;
        }
        if (iVar2 != 3) {
            return 0;
        }
        *s8 = 0;
        *s0 = 0x10;
    }
    *a2 = (u32)a0[0x13] |
          (int)((u32)a0[0x11] << 8 | (u32)a0[0x12] << 0x10 | (u32)a0[0x13] << 0x18 | (u32)a0[0x10]) >> 8 & 0xff00U |
          (u32)a0[0x11] << 0x10 | (u32)a0[0x10] << 0x18;
    *a3 = (u32)a0[0x17] |
          (int)((u32)a0[0x15] << 8 | (u32)a0[0x16] << 0x10 | (u32)a0[0x17] << 0x18 | (u32)a0[0x14]) >> 8 & 0xff00U |
          (u32)a0[0x15] << 0x10 | (u32)a0[0x14] << 0x18;
    if ((*s8 == 2) || (*s8 == 1)) {
        uVar1 = libgcc_divide_helper_01051c(uVar4, *a3);
    } else {
        if (*s8 != 0) {
            *s4 = 0x7fff0000;
            goto LAB_8c25f636;
        }
        uVar1 = libgcc_divide_helper_01051c(uVar4 >> 1, *a3);
    }
    *s4 = uVar1;
LAB_8c25f636:
    return a0 + iVar3;
}

/*
 * alt_entry_25f42c  0x8c25f42c
 * probably an entry 4 bytes into 8c25f428: it reads registers that code sets before it
 */
u32 alt_entry_25f42c(int a0, int a1, u32 *a2, u32 *a3, u32 s0, u32 *s4, u32 *s8, int *s12) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u8 *unaff_r14;

    uVar4 = (u32)unaff_r14[1] << 8 | (u32)unaff_r14[2] << 0x10 | (u32)unaff_r14[3] << 0x18 | (u32)*unaff_r14;
    if ((uVar4 != 0x64732e) && (uVar4 != 0x646e732e)) {
        return 0;
    }
    iVar3 = CONCAT13(unaff_r14[4], CONCAT12(unaff_r14[5], CONCAT11(unaff_r14[6], unaff_r14[7])));
    if (a1 < iVar3) {
        return 0;
    }
    uVar4 = CONCAT13(unaff_r14[8], CONCAT12(unaff_r14[9], CONCAT11(unaff_r14[10], unaff_r14[0xb])));
    iVar2 = CONCAT13(unaff_r14[0xc], CONCAT12(unaff_r14[0xd], CONCAT11(unaff_r14[0xe], unaff_r14[0xf])));
    if (iVar2 == 1) {
        *s12 = 2;
    LAB_8c25f55c:
        *s4 = 8;
    } else {
        if (iVar2 == 2) {
            *s12 = 1;
            goto LAB_8c25f55c;
        }
        if (iVar2 != 3) {
            return 0;
        }
        *s12 = 0;
        *s4 = 0x10;
    }
    *a2 = (u32)unaff_r14[0x13] |
          (int)((u32)unaff_r14[0x11] << 8 | (u32)unaff_r14[0x12] << 0x10 | (u32)unaff_r14[0x13] << 0x18 |
                (u32)unaff_r14[0x10]) >>
                  8 &
              0xff00U |
          (u32)unaff_r14[0x11] << 0x10 | (u32)unaff_r14[0x10] << 0x18;
    *a3 = (u32)unaff_r14[0x17] |
          (int)((u32)unaff_r14[0x15] << 8 | (u32)unaff_r14[0x16] << 0x10 | (u32)unaff_r14[0x17] << 0x18 |
                (u32)unaff_r14[0x14]) >>
                  8 &
              0xff00U |
          (u32)unaff_r14[0x15] << 0x10 | (u32)unaff_r14[0x14] << 0x18;
    if ((*s12 == 2) || (*s12 == 1)) {
        uVar1 = libgcc_divide_helper_01051c(uVar4, *a3);
    } else {
        if (*s12 != 0) {
            *s8 = 0x7fff0000;
            goto LAB_8c25f636;
        }
        uVar1 = libgcc_divide_helper_01051c(uVar4 >> 1, *a3);
    }
    *s8 = uVar1;
LAB_8c25f636:
    return a0 + iVar3;
}

/*
 * is_au_header  0x8c25f64c
 * 1 when a0 starts with ".snd" or ".sd"
 * called by: alt_entry_25fdbe, cri_uses_is_spsd_header_25fdb2
 */
u32 is_au_header(u32 a0) {
    int iVar1;

    iVar1 = memcmp(a0, &g_8c272038, 4);
    if ((iVar1 != 0) && (iVar1 = memcmp(a0, &g_8c272040, 4), iVar1 != 0)) {
        return 0;
    }
    return 1;
}

/*
 * cri_uses_libgcc_divide_helper_25f67e  0x8c25f67e
 * area name: in the cri library code range; behaviour name: its callees mostly do: uses_libgcc_divide_helper
 * called by: cri_copy_25f742
 */
u32 cri_uses_libgcc_divide_helper_25f67e(u32 a0, int a1, short *a2, u8 *a3, char *s0, u8 *s4, char *s8, u32 *s12,
                                         u32 *s16, u32 *s20) {
    int iVar1;
    short sVar2;
    u32 uStack_20;
    char acStack_1c[4];
    char cStack_18;
    u32 uStack_14;
    short *psStack_10;
    u32 uStack_c;
    u8 *puStack_8;

    if (a1 < 8) {
        *a2 = 0;
    } else {
        psStack_10 = a2;
        uStack_c = a0;
        puStack_8 = a3;
        iVar1 = cri_uses_libgcc_divide_helper_25f428(a0, a1, &uStack_20, acStack_1c);
        if ((iVar1 != 0) && (sVar2 = (short)iVar1 - (short)uStack_c, *psStack_10 = sVar2, 0 < sVar2)) {
            *s12 = uStack_20;
            *s8 = acStack_1c[0];
            *s0 = cStack_18;
            *s16 = uStack_14;
            *puStack_8 = 0xff;
            iVar1 = (int)(short)*s8 * (int)(short)*s0;
            if (iVar1 < 0) {
                iVar1 = iVar1 + 7;
            }
            *s4 = (char)(iVar1 >> 3);
            *s20 = 1;
            return 0;
        }
    }
    return 0xffffffff;
}

/*
 * cri_copy_25f742  0x8c25f742
 * area name: in the cri library code range; behaviour name: mostly calls copy functions
 * called by: alt_entry_25fdbe, cri_uses_is_spsd_header_25fdb2
 */
int cri_copy_25f742(int a0, u32 a1, u32 a2) {
    int iVar1;
    int a7;
    short asStack_1c[2];
    u16 uStack_18;

    a7 = a0 + 0xc;
    *(u16 *)(a0 + 2) = 1;
    iVar1 = cri_uses_libgcc_divide_helper_25f67e(a1, a2, asStack_1c, a7);
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
        *(u16 *)(a0 + 0xa8) = 4;
        *(u16 *)(0xaa + a0) = uStack_18;
        memset(a0 + 0x4c, 0, 4);
        iVar1 = (int)asStack_1c[0];
    }
    return iVar1;
}

/*
 * cri_uses_get_field_c_25f830  0x8c25f830
 * area name: in the cri library code range; behaviour name: its main named callee is get_field_c_264f82
 * called by: cri_uses_get_field_c_25fb5c
 */
int cri_uses_get_field_c_25f830(int a0) {
    u16 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;

    iVar10 = *(int *)(a0 + 0x50);
    if ((*(int *)(a0 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(a0 + 8), &g_8c4b9828), iVar2 == 0)) {
        (**(code **)(0x88 + a0))(*(u32 *)(0x88 + 4 + a0), a0 + 0x70, a0 + 0x74, a0 + 0x78);
        iVar2 = *(int *)(a0 + 0x68) - *(int *)(a0 + 0x70);
        if (*(int *)(a0 + 0x74) < iVar2) {
            iVar2 = *(int *)(a0 + 0x74);
        }
        iVar4 = *(int *)(a0 + 100);
        if (*(int *)(a0 + 0x54) < iVar2) {
            iVar2 = *(int *)(a0 + 0x54);
        }
        iVar9 = *(int *)(a0 + 0x70) * 2 + iVar4;
        if (*(char *)(a0 + 0xe) == '\x02') {
            iVar8 = *(int *)(a0 + 0x6c);
            iVar7 = 0;
            iVar3 = *(int *)(a0 + 0x70);
            iVar5 = 0;
            iVar6 = 0;
            if (0 < iVar2) {
                do {
                    uVar1 = *(u16 *)(iVar5 * 2 + iVar10);
                    iVar7 = iVar7 + 1;
                    *(u16 *)(iVar6 + iVar9) = uVar1 << 8 | uVar1 >> 8;
                    uVar1 = *(u16 *)((iVar5 + 1) * 2 + iVar10);
                    *(u16 *)(iVar6 + (iVar8 + iVar3) * 2 + iVar4) = uVar1 << 8 | uVar1 >> 8;
                    iVar5 = iVar5 + 2;
                    iVar6 = iVar6 + 2;
                } while (iVar7 < iVar2);
            }
        } else {
            iVar6 = 0;
            iVar4 = 0;
            if (0 < iVar2) {
                do {
                    iVar6 = iVar6 + 1;
                    *(u16 *)(iVar4 + iVar9) = *(u16 *)(iVar4 + iVar10) << 8 | *(u16 *)(iVar4 + iVar10) >> 8;
                    iVar4 = iVar4 + 2;
                } while (iVar6 < iVar2);
            }
        }
        *(int *)(0xa0 + a0) = iVar2;
        *(int *)(0xa4 + a0) = iVar2 * *(char *)(a0 + 0xe) * 2;
        *(u32 *)(a0 + 4) = 2;
    }
    iVar10 = *(int *)(a0 + 4);
    if (iVar10 == 2) {
        iVar10 = (int)0x90;
        iVar10 = (**(code **)(iVar10 + a0))(*(u32 *)(iVar10 + 4 + a0), *(u32 *)(iVar10 + 0x14 + a0),
                                            *(u32 *)(iVar10 + 0x10 + a0));
        *(u32 *)(a0 + 4) = 3;
    }
    return iVar10;
}

/*
 * alt_entry_25f83c  0x8c25f83c
 * probably an entry 12 bytes into 8c25f830: it reads registers that code sets before it
 */
int alt_entry_25f83c(u32 unused_a0, u32 a1, u32 unused_a2, int *a3) {
    u16 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int *unaff_r13;
    int unaff_r14;

    iVar9 = *unaff_r13;
    if ((*(int *)(unaff_r14 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(unaff_r14 + 8), a1), iVar2 == 0)) {
        a3 = unaff_r13 + 10;
        (**(code **)(0x88 + unaff_r14))(*(u32 *)(0x88 + 4 + unaff_r14), unaff_r13 + 8, unaff_r13 + 9, a3);
        iVar2 = unaff_r13[6] - unaff_r13[8];
        if (unaff_r13[9] < iVar2) {
            iVar2 = unaff_r13[9];
        }
        iVar4 = unaff_r13[5];
        if (unaff_r13[1] < iVar2) {
            iVar2 = unaff_r13[1];
        }
        iVar8 = unaff_r13[8] * 2 + iVar4;
        if (*(char *)(unaff_r14 + 0xe) == '\x02') {
            iVar7 = unaff_r13[7];
            a3 = NULL;
            iVar3 = unaff_r13[8];
            iVar5 = 0;
            iVar6 = 0;
            if (0 < iVar2) {
                do {
                    uVar1 = *(u16 *)(iVar5 * 2 + iVar9);
                    a3 = (int *)((int)a3 + 1);
                    *(u16 *)(iVar6 + iVar8) = uVar1 << 8 | uVar1 >> 8;
                    uVar1 = *(u16 *)((iVar5 + 1) * 2 + iVar9);
                    *(u16 *)(iVar6 + (iVar7 + iVar3) * 2 + iVar4) = uVar1 << 8 | uVar1 >> 8;
                    iVar5 = iVar5 + 2;
                    iVar6 = iVar6 + 2;
                } while ((int)a3 < iVar2);
            }
        } else {
            iVar6 = 0;
            iVar4 = 0;
            if (0 < iVar2) {
                do {
                    uVar1 = *(u16 *)(iVar4 + iVar9);
                    a3 = (int *)(u32)uVar1;
                    iVar6 = iVar6 + 1;
                    *(u16 *)(iVar4 + iVar8) = uVar1 << 8 | uVar1 >> 8;
                    iVar4 = iVar4 + 2;
                } while (iVar6 < iVar2);
            }
        }
        *(int *)(0xa0 + unaff_r14) = iVar2;
        *(int *)(0xa4 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe) * 2;
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
 * cri_uses_get_field_c_25f950  0x8c25f950
 * area name: in the cri library code range; behaviour name: its main named callee is get_field_c_264f82
 * called by: cri_uses_get_field_c_25fb5c
 */
int cri_uses_get_field_c_25f950(int a0) {
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
                    *(u16 *)((int)psVar10 + iVar8) = (u16)pbVar11[iVar7] << 8;
                    iVar5 = iVar7 + 1;
                    iVar9 = iVar9 + 1;
                    iVar7 = iVar7 + 2;
                    *(u16 *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (u16)pbVar11[iVar5] << 8;
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
                    *psVar10 = (u16)bVar1 << 8;
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
 * alt_entry_25f95c  0x8c25f95c
 * probably an entry 12 bytes into 8c25f950: it reads registers that code sets before it
 */
int alt_entry_25f95c(u32 unused_a0, u32 a1, u32 unused_a2, int a3) {
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
                    *(u16 *)((int)psVar9 + iVar8) = (u16)pbVar10[iVar7] << 8;
                    iVar5 = iVar7 + 1;
                    a3 = a3 + 1;
                    iVar7 = iVar7 + 2;
                    *(u16 *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (u16)pbVar10[iVar5] << 8;
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
                    *psVar9 = (u16)bVar1 << 8;
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
 * cri_uses_get_field_c_25fa58  0x8c25fa58
 * area name: in the cri library code range; behaviour name: its main named callee is get_field_c_264f82
 * called by: cri_uses_get_field_c_25fb5c
 */
int cri_uses_get_field_c_25fa58(int a0, u32 a1) {
    u8 bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    u16 *puVar9;
    u8 *pbVar10;
    int iVar11;
    u8 *puVar12;

    puVar12 = &g_8c4b9828;
    pbVar10 = *(u8 **)(a0 + 0x50);
    if ((*(int *)(a0 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(a0 + 8), a1), iVar2 == 0)) {
        (**(code **)(a0 + 0x88))(*(u32 *)(a0 + 0x8c), a0 + 0x70, a0 + 0x74, a0 + 0x78);
        iVar2 = *(int *)(a0 + 0x68) - *(int *)(a0 + 0x70);
        if (*(int *)(a0 + 0x74) < iVar2) {
            iVar2 = *(int *)(a0 + 0x74);
        }
        iVar6 = *(int *)(a0 + 100);
        if (*(int *)(a0 + 0x54) < iVar2) {
            iVar2 = *(int *)(a0 + 0x54);
        }
        puVar9 = (u16 *)(*(int *)(a0 + 0x70) * 2 + iVar6);
        if (*(char *)(a0 + 0xe) == '\x02') {
            iVar3 = *(int *)(a0 + 0x6c);
            iVar8 = 0;
            iVar4 = *(int *)(a0 + 0x70);
            iVar11 = 0;
            iVar7 = 0;
            if (0 < iVar2) {
                do {
                    iVar11 = iVar11 + 1;
                    *(u16 *)((int)puVar9 + iVar7) = *(u16 *)(&g_8c277da0 + (u32)pbVar10[iVar8] * 2);
                    iVar5 = iVar8 + 1;
                    iVar8 = iVar8 + 2;
                    *(u16 *)(iVar7 + (iVar3 + iVar4) * 2 + iVar6) = *(u16 *)(&g_8c277da0 + (u32)pbVar10[iVar5] * 2);
                    iVar7 = iVar7 + 2;
                } while (iVar11 < iVar2);
            }
        } else {
            iVar6 = 0;
            if (0 < iVar2) {
                do {
                    bVar1 = *pbVar10;
                    pbVar10 = pbVar10 + 1;
                    iVar6 = iVar6 + 1;
                    *puVar9 = *(u16 *)(&g_8c277da0 + (u32)bVar1 * 2);
                    puVar9 = puVar9 + 1;
                } while (iVar6 < iVar2);
            }
        }
        *(int *)(a0 + 0xa0) = iVar2;
        *(int *)(a0 + 0xa4) = iVar2 * *(char *)(a0 + 0xe);
        *(u32 *)(a0 + 4) = 2;
    }
    iVar2 = *(int *)(a0 + 4);
    if (iVar2 == 2) {
        iVar2 = (**(code **)(a0 + 0x90))(*(u32 *)(a0 + 0x94), *(u32 *)(a0 + 0xa4), *(u32 *)(a0 + 0xa0), puVar12);
        *(u32 *)(a0 + 4) = 3;
    }
    return iVar2;
}

/*
 * alt_entry_25fa64  0x8c25fa64
 * probably an entry 12 bytes into 8c25fa58: it reads registers that code sets before it
 */
int alt_entry_25fa64(u32 unused_a0, u32 a1, u32 unused_a2, u16 *a3) {
    u8 bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    u16 *puVar8;
    u8 *pbVar9;
    u32 *unaff_r13;
    int iVar10;
    int unaff_r14;

    pbVar9 = (u8 *)*unaff_r13;
    if ((*(int *)(unaff_r14 + 4) == 1) && (iVar2 = get_field_c_264f82(*(u32 *)(unaff_r14 + 8), a1), iVar2 == 0)) {
        (**(code **)(unaff_r14 + 0x88))(*(u32 *)(unaff_r14 + 0x8c), unaff_r13 + 8, unaff_r13 + 9, unaff_r13 + 10);
        iVar2 = unaff_r13[6] - unaff_r13[8];
        if ((int)unaff_r13[9] < iVar2) {
            iVar2 = unaff_r13[9];
        }
        iVar6 = unaff_r13[5];
        if ((int)unaff_r13[1] < iVar2) {
            iVar2 = unaff_r13[1];
        }
        puVar8 = (u16 *)(unaff_r13[8] * 2 + iVar6);
        if (*(char *)(unaff_r14 + 0xe) == '\x02') {
            iVar3 = unaff_r13[7];
            a3 = NULL;
            iVar4 = unaff_r13[8];
            iVar10 = 0;
            iVar7 = 0;
            if (0 < iVar2) {
                do {
                    iVar10 = iVar10 + 1;
                    *(u16 *)((int)puVar8 + iVar7) = *(u16 *)(&g_8c277da0 + (u32)pbVar9[(int)a3] * 2);
                    iVar5 = (int)a3 + 1;
                    a3 = a3 + 1;
                    *(u16 *)(iVar7 + (iVar3 + iVar4) * 2 + iVar6) = *(u16 *)(&g_8c277da0 + (u32)pbVar9[iVar5] * 2);
                    iVar7 = iVar7 + 2;
                } while (iVar10 < iVar2);
            }
        } else {
            iVar6 = 0;
            a3 = puVar8;
            if (0 < iVar2) {
                do {
                    bVar1 = *pbVar9;
                    pbVar9 = pbVar9 + 1;
                    iVar6 = iVar6 + 1;
                    *a3 = *(u16 *)(&g_8c277da0 + (u32)bVar1 * 2);
                    a3 = a3 + 1;
                } while (iVar6 < iVar2);
            }
        }
        *(int *)(unaff_r14 + 0xa0) = iVar2;
        *(int *)(unaff_r14 + 0xa4) = iVar2 * *(char *)(unaff_r14 + 0xe);
        *(u32 *)(unaff_r14 + 4) = 2;
    }
    iVar2 = *(int *)(unaff_r14 + 4);
    if (iVar2 == 2) {
        iVar2 = (**(code **)(unaff_r14 + 0x90))(*(u32 *)(unaff_r14 + 0x94), *(u32 *)(unaff_r14 + 0xa4),
                                                *(u32 *)(unaff_r14 + 0xa0), a3);
        *(u32 *)(unaff_r14 + 4) = 3;
    }
    return iVar2;
}

/*
 * cri_uses_get_field_c_25fb5c  0x8c25fb5c
 * area name: in the cri library code range; behaviour name: its callees mostly do: uses_get_field_c
 * called by: cri_uses_get_field_c_2602f4
 */
u32 cri_uses_get_field_c_25fb5c(int a0, u32 a1) {
    u32 uVar1;

    if (*(short *)(0xaa + a0) == 2) {
        uVar1 = cri_uses_get_field_c_25fa58(a0, a1);
        return uVar1;
    }
    if (*(short *)(0xaa + a0) == 1) {
        uVar1 = cri_uses_get_field_c_25f950(a0);
        return uVar1;
    }
    uVar1 = cri_uses_get_field_c_25f830(a0);
    return uVar1;
}

/*
 * cri_copy_25fb8c  0x8c25fb8c
 * area name: in the cri library code range; behaviour name: mostly calls copy functions
 * called by: cri_copy_262ac4
 */
u32 cri_copy_25fb8c(void) {
    u32 uVar1;

    memset_wrap_264ed0();
    uVar1 = memset(0x8c4b3440, 0, (int)0x560);
    return uVar1;
}

/*
 * cri_calc_25fba0  0x8c25fba0
 * area name: in the cri library code range; behaviour name: integer arithmetic on its arguments
 */
u32 cri_calc_25fba0(int a0, u32 *a1, int *a2, int *a3) {
    *a1 = *(u32 *)(a0 + 0x9c);
    *a2 = *(int *)(a0 + 0x40) - *(int *)(a0 + 0x9c);
    *a3 = *(int *)(a0 + 0x18) - *(int *)(a0 + 0x98);
    return *(u32 *)(a0 + 0x3c);
}

/*
 * cri_update_fields_25fbbe  0x8c25fbbe
 * area name: in the cri library code range; behaviour name: conditionally writes members
 */
u32 cri_update_fields_25fbbe(int a0, u32 unused_a1, int a2) {
    *(int *)(a0 + 0x9c) = *(int *)(a0 + 0x9c) + a2;
    *(int *)(a0 + 0x98) = *(int *)(a0 + 0x98) + a2;
    return 0x98;
}

/*
 * cri_copy_25fbd0  0x8c25fbd0
 * area name: in the cri library code range; behaviour name: mostly calls copy functions
 * called by: cri_uses_get_field_1c_262b04
 */
u32 cri_copy_25fbd0(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u16 *ar4_00;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u16 *ar4_01;

    iVar2 = 0;
    do {
        if (*(short *)(iVar2 * 0xac + 0x8c4b3440) == 0)
            break;
        iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    if (iVar2 != 8) {
        iVar2 = iVar2 * 0xac;
        ar6_00 = 0xac;
        ar4_01 = (u16 *)(iVar2 + 0x8c4b3440);
        ar5_00 = 0;
        ar4_00 = ar4_01;
        ar7_00 = a3;
        memset(ar4_01, 0, 0xac);
        *ar4_01 = 1;
        iVar1 = vram64_264eda(ar4_00, ar5_00, ar6_00, ar7_00);
        *(int *)(iVar2 + 0x8c4b3448) = iVar1;
        if (iVar1 != 0) {
            *(u32 *)(iVar2 + 0x8c4b3478) = a0;
            *(u32 *)(iVar2 + 0x8c4b347c) = a1;
            *(u32 *)(iVar2 + 0x8c4b3480) = a2;
            *(u32 *)(iVar2 + 0x8c4b3484) = a3;
            *(u8 **)(iVar2 + 0x8c4b34c8) = &LAB_8c25fba0;
            *(u16 **)(iVar2 + 0x8c4b34cc) = ar4_01;
            *(u8 **)(iVar2 + 0x8c4b34d0) = &LAB_8c25fbbe;
            *(u16 **)(iVar2 + 0x8c4b34d4) = ar4_01;
            return ar4_01;
        }
        cri_copy_25fc5c(ar4_01);
    }
    return 0;
}

/*
 * cri_copy_25fc5c  0x8c25fc5c
 * area name: in the cri library code range; behaviour name: mostly calls copy functions
 * called by: cri_copy_25fbd0, ta_fifo_262c04, ta_fifo_262c08
 */
u32 cri_copy_25fc5c(u16 *a0) {
    u32 in_r0;

    if (a0 != NULL) {
        vram_calc_264f6a(*(u32 *)(a0 + 4));
        in_r0 = memset(a0, 0, (int)0xac);
        *a0 = 0;
    }
    return in_r0;
}

/*
 * alt_entry_25fc60  0x8c25fc60
 * probably an entry 4 bytes into 8c25fc5c: it reads registers that code sets before it
 */
u32 alt_entry_25fc60(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 ain0) {
    u16 *unaff_r14;

    if (unaff_r14 != NULL) {
        vram_calc_264f6a(*(u32 *)(unaff_r14 + 4));
        ain0 = memset(unaff_r14, 0, 0xac);
        *unaff_r14 = 0;
    }
    return ain0;
}

/*
 * cri_sound_25fca4  0x8c25fca4
 * area name: in the cri library code range; behaviour name: mostly calls sound functions
 * called by: alt_entry_25fdbe, cri_uses_is_spsd_header_25fdb2
 */
int cri_sound_25fca4(int a0, u32 a1, u32 a2) {
    u8 *puVar1;
    int iVar2;
    int ar7_00;
    short asStack_14[4];
    u8 *puStack_c;

    puStack_c = &g_8c4b9828;
    *(u16 *)(a0 + 2) = 1;
    ar7_00 = a0 + 0xc;
    iVar2 =
        (*(code *)(&adx_parse_header))(a1, a2, asStack_14, ar7_00, a0 + 0xd, a0 + 0xf, a0 + 0xe, a0 + 0x14, a0 + 0x18);
    if ((iVar2 < 0) || (iVar2 = adx_get_highpass_freq(a1, a2, a0 + 0x1c), iVar2 < 0)) {
        iVar2 = 0;
    } else {
        (*(code *)(&vram_uses_libm_errno_wrap_264f52))(*(u32 *)(a0 + 8), *(u32 *)(a0 + 0x14),
                                                       (int)*(short *)(a0 + 0x1c), ar7_00);
        iVar2 = a0 + 0x24;
        (*(code *)(&ADX_test_260f02))(a1, a2, a0 + 0x20, iVar2, a0 + 0x26, a0 + 0x28, a0 + 0x2c, a0 + 0x30, a0 + 0x34);
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
        puVar1 = (&memset);
        *(u16 *)(a0 + 0xa8) = 0;
        (*(code *)puVar1)(a0 + 0x4c, 0, 4, iVar2);
        iVar2 = (int)asStack_14[0];
    }
    return iVar2;
}

/*
 * cri_uses_is_spsd_header_25fdb2  0x8c25fdb2
 * area name: in the cri library code range; behaviour name: its main named callee is is_spsd_header
 * called by: ta_uses_get_field_a8_s16_262c80
 */
u32 cri_uses_is_spsd_header_25fdb2(u32 a0, u16 *a1, u32 a2) {
    u32 uVar1;
    int iVar2;

    if (((int)(u32)*a1 >> 8 | (u32)*a1 << 8 & 0xff00 & 0xffff) == 0x8000) {
        uVar1 = cri_sound_25fca4(a0, a1, a2);
        return uVar1;
    }
    iVar2 = is_spsd_header(a1, &g_8c4b9828);
    if (iVar2 != 0) {
        uVar1 = cri_copy_26045c(a0, a1, a2);
        return uVar1;
    }
    iVar2 = is_wav_header(a1);
    if (iVar2 != 0) {
        uVar1 = cri_copy_260810(a0, a1, a2);
        return uVar1;
    }
    iVar2 = is_aiff_header(a1);
    if (iVar2 == 0) {
        iVar2 = is_au_header(a1);
        if (iVar2 == 0) {
            return 0;
        }
        uVar1 = cri_copy_25f742(a0, a1, a2);
        return uVar1;
    }
    uVar1 = cri_copy_25f0ea(a0, a1, a2);
    return uVar1;
}

/*
 * alt_entry_25fdbe  0x8c25fdbe
 * probably an entry 12 bytes into 8c25fdb2: it reads registers that code sets before it
 */
u32 alt_entry_25fdbe(u32 unused_a0, u32 a1, u32 a2) {
    u32 uVar1;
    int iVar2;
    u32 in_r2;
    u32 uVar3;
    u32 uVar4;
    u32 unaff_r12;
    u16 *unaff_r14;

    uVar4 = (u32)*unaff_r14;
    if ((int)in_r2 < 0) {
        uVar3 = (int)uVar4 >> (~in_r2 & 0x1f) + 1;
    } else {
        uVar3 = uVar4 << (in_r2 & 0x1f);
    }
    if ((uVar3 & 0xff | uVar4 << 8 & 0xff00 & 0xffff) == 0x8000) {
        uVar1 = cri_sound_25fca4(unaff_r12, unaff_r14, a2);
        return uVar1;
    }
    uVar1 = a2;
    iVar2 = is_spsd_header(unaff_r14, a1);
    if (iVar2 != 0) {
        uVar1 = cri_copy_26045c(a2);
        return uVar1;
    }
    iVar2 = is_wav_header(unaff_r14);
    if (iVar2 != 0) {
        uVar1 = cri_copy_260810(a2);
        return uVar1;
    }
    iVar2 = is_aiff_header(unaff_r14);
    if (iVar2 != 0) {
        uVar1 = cri_copy_25f0ea(a2);
        return uVar1;
    }
    iVar2 = is_au_header(unaff_r14);
    if (iVar2 != 0) {
        uVar1 = cri_copy_25f742(a2);
        return uVar1;
    }
    return 0;
}

/*
 * cri_update_fields_25fea8  0x8c25fea8
 * area name: in the cri library code range; behaviour name: conditionally writes members
 */
int cri_update_fields_25fea8(int a0, u32 a1, u32 a2) {
    int iVar1;

    iVar1 = (int)0x88;
    *(u32 *)(iVar1 + a0) = a1;
    iVar1 = iVar1 + 4;
    *(u32 *)(iVar1 + a0) = a2;
    return iVar1;
}

/*
 * get_field_a8_s16  0x8c25fec0
 * called by: cri_uses_get_field_a8_s16_262e10, get_field_a8_s16_wrap, ta_uses_get_field_a8_s16_262c80
 */
int get_field_a8_s16(int a0) {
    return (int)*(short *)(0xa8 + a0);
}

/*
 * get_field_e_s8  0x8c25feca
 * called by: cri_uses_get_field_18_262f02, get_field_e_s8_wrap
 */
int get_field_e_s8(int a0) {
    return (int)*(char *)(a0 + 0xe);
}

/*
 * cri_calc_25fed2  0x8c25fed2
 * area name: in the cri library code range; behaviour name: integer arithmetic on its arguments
 * called by: cri_calls_calc_263162
 */
u32 cri_calc_25fed2(int a0) {
    if (*(short *)(0xa8 + a0) != 0) {
        if (*(short *)(0xa8 + a0) == 2) {
            if (*(short *)(0xaa + a0) == 2) {
                return 4;
            }
            if (*(short *)(0xaa + a0) == 1) {
                return 8;
            }
        } else if ((*(short *)(0xa8 + a0) == 1) && (*(short *)(0xaa + a0) == 2)) {
            return 4;
        }
    }
    return 0x10;
}

/*
 * get_field_18_25ff16  0x8c25ff16
 * called by: cri_uses_get_field_18_262f02, get_field_18_wrap
 */
u32 get_field_18_25ff16(int a0) {
    return *(u32 *)(a0 + 0x18);
}

/*
 * get_field_24_s16  0x8c25ff22
 * called by: get_field_24_s16_wrap
 */
int get_field_24_s16(int a0) {
    return (int)*(short *)(a0 + 0x24);
}

/*
 * get_field_4_25ff38  0x8c25ff38
 * called by: cri_uses_get_field_4_26304a, cri_uses_get_field_4_26307e
 */
u32 get_field_4_25ff38(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * cri_uses_libgcc_divide_helper_25ff3c  0x8c25ff3c
 * area name: in the cri library code range; behaviour name: its main named callee is libgcc_divide_helper_010468
 * called by: cri_uses_get_field_a8_s16_262e10
 */
u32 cri_uses_libgcc_divide_helper_25ff3c(int a0, u32 a1, u32 a2) {
    u32 uVar1;
    int iVar2;

    if (*(short *)(a0 + 0xa8) == 0) {
        *(u32 *)(a0 + 0x50) = a1;
        uVar1 = libgcc_divide_helper_010468(a2, (int)*(char *)(a0 + 0xf));
    } else {
        *(u32 *)(a0 + 0x50) = a1;
        iVar2 = (int)*(char *)(a0 + 0xd);
        if (iVar2 < 0) {
            iVar2 = iVar2 + 7;
        }
        uVar1 = libgcc_divide_helper_010468(a2, (iVar2 >> 3) * (int)*(char *)(a0 + 0xe));
    }
    *(u32 *)(a0 + 0x54) = uVar1;
    *(u32 *)(a0 + 0x84) = 0;
    *(u32 *)(a0 + 0xa0) = 0;
    *(u32 *)(a0 + 0xa4) = 0;
    return 0xa4;
}

/*
 * cri_uses_libgcc_divide_helper_25ff3e  0x8c25ff3e
 * area name: in the cri library code range; behaviour name: its main named callee is libgcc_divide_helper_010468
 */
u32 cri_uses_libgcc_divide_helper_25ff3e(int a0, u32 a1, u32 a2, u32 unused_a3, int ain0) {
    u32 uVar1;
    int iVar2;

    if (*(short *)(ain0 + a0) == 0) {
        *(u32 *)(a0 + 0x50) = a1;
        uVar1 = libgcc_divide_helper_010468(a2, (int)*(char *)(a0 + 0xf));
    } else {
        *(u32 *)(a0 + 0x50) = a1;
        iVar2 = (int)*(char *)(a0 + 0xd);
        if (iVar2 < 0) {
            iVar2 = iVar2 + 7;
        }
        uVar1 = libgcc_divide_helper_010468(a2, (iVar2 >> 3) * (int)*(char *)(a0 + 0xe));
    }
    *(u32 *)(a0 + 0x54) = uVar1;
    *(u32 *)(a0 + 0x84) = 0;
    *(u32 *)(a0 + 0xa0) = 0;
    *(u32 *)(a0 + 0xa4) = 0;
    return 0xa4;
}

/*
 * cri_update_fields_25ff8e  0x8c25ff8e
 * area name: in the cri library code range; behaviour name: conditionally writes members
 * called by: cri_uses_get_field_a8_s16_262e10
 */
u32 cri_update_fields_25ff8e(int a0) {
    u32 in_r0;

    if (*(int *)(a0 + 4) == 0) {
        *(u32 *)(a0 + 4) = 1;
    }
    return in_r0;
}

/*
 * cri_copy_25ff9c  0x8c25ff9c
 * area name: in the cri library code range; behaviour name: mostly calls copy functions
 * called by: ta_copy_262c66
 */
u32 cri_copy_25ff9c(int a0) {
    u32 uVar1;

    uVar1 = vram_copy_264fd4(*(u32 *)(a0 + 8));
    *(u32 *)(a0 + 4) = 0;
    return uVar1;
}

/*
 * cri_calls_update_fields_25ffb6  0x8c25ffb6
 * area name: in the cri library code range; behaviour name: its callees mostly do: update_fields
 * called by: cri_uses_get_field_18_262f02
 */
int cri_calls_update_fields_25ffb6(int a0) {
    int iVar1;

    iVar1 = *(int *)(a0 + 4);
    if (iVar1 == 3) {
        vram_update_fields_264fea(*(u32 *)(a0 + 8));
        iVar1 = (int)0x9c;
        *(u32 *)(iVar1 + a0) = 0;
        *(u32 *)(a0 + 4) = 0;
    }
    return iVar1;
}

/*
 * alt_entry_25ffba  0x8c25ffba
 * probably an entry 4 bytes into 8c25ffb6: it reads registers that code sets before it
 */
int alt_entry_25ffba(void) {
    int iVar1;
    int unaff_r14;

    iVar1 = *(int *)(unaff_r14 + 4);
    if (iVar1 == 3) {
        vram_update_fields_264fea(*(u32 *)(unaff_r14 + 8));
        iVar1 = (int)0x9c;
        *(u32 *)(iVar1 + unaff_r14) = 0;
        *(u32 *)(unaff_r14 + 4) = 0;
    }
    return iVar1;
}

/*
 * get_field_a000a4_25fff0  0x8c25fff0
 * called by: cri_uses_get_field_18_262f02
 */
u32 get_field_a000a4_25fff0(int a0) {
    return *(u32 *)(0xa4 + a0);
}

/*
 * get_field_a0_25fff6  0x8c25fff6
 * called by: cri_uses_get_field_18_262f02
 */
u32 get_field_a0_25fff6(int a0) {
    return *(u32 *)(0xa0 + a0);
}
