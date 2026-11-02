/* Seaman (USA) region 0x8c230000-0x8c240000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * gfxlib_fill_loop_23018c  0x8c23018c
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 */
int gfxlib_fill_loop_23018c(short *a0, int a1, u32 a2, int a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u32 *puVar6;
    u32 *puVar7;
    u32 *puVar8;
    int iVar9;
    u32 uVar10;
    u32 uVar11;
    float in_fr4;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    uVar1 = g_8c4aa4f0;
    uVar2 = a2 & 0x3fff;
    iVar3 = 0;
    iVar4 = 0;
    do {
        iVar5 = (int)*a0;
        fVar14 = 1.0;
        if ((uVar1 & 0x80000000) != 0) {
            fVar14 = -1.0;
        }
        puVar6 = (u32 *)(a0[1] * 0x20 + a1);
        if (iVar5 < 0) {
            iVar5 = -iVar5;
            fVar14 = -fVar14;
        }
        iVar4 = iVar4 + iVar5;
        iVar5 = iVar5 + -2;
        iVar9 = 0;
        puVar7 = (u32 *)(a0[4] * 0x20 + a1);
        a0 = a0 + 7;
        fVar13 = (float)puVar6[6] * 0.5 + 0.5;
        fVar15 = (float)puVar7[6] * 0.5 + 0.5;
        do {
            puVar8 = (u32 *)(*a0 * 0x20 + a1);
            fVar16 = (float)puVar8[6];
            fVar12 = (((float)puVar6[2] - (float)puVar7[2]) * ((float)puVar8[1] - (float)puVar7[1]) -
                      ((float)puVar8[2] - (float)puVar7[2]) * ((float)puVar6[1] - (float)puVar7[1])) *
                     fVar14;
            fVar14 = -fVar14;
            if (0.0 <= fVar12) {
                puVar6 = puVar7;
                if (iVar9 != 0) {
                    uVar10 = *puVar7;
                    uVar11 = puVar7[1];
                    fVar12 = (float)puVar7[2];
                    puVar6 = puVar7 + -3;
                    *(float *)(a3 + 0x14) = fVar15;
                    *(u32 *)(a3 + 0x10) = uVar11;
                    *(u32 *)(a3 + 0xc) = uVar10;
                    fVar13 = fVar12 + in_fr4;
                    if (fVar12 + in_fr4 < in_fr4) {
                        fVar13 = in_fr4;
                    }
                    iVar3 = iVar3 + iVar9 + 1;
                    *(u32 *)(a3 + 0xc) = 0xf0000000;
                    iVar9 = 0;
                    *(float *)(a3 + 0x24) = fVar13;
                    a3 = a3 + 0x2c;
                }
            } else {
                if (iVar9 == 0) {
                    uVar10 = *puVar6;
                    iVar9 = 1;
                    uVar11 = puVar6[1];
                    fVar12 = (float)puVar6[2];
                    *(float *)(a3 + 0x14) = fVar13;
                    *(u32 *)(a3 + 0x10) = uVar11;
                    *(u32 *)(a3 + 0xc) = uVar10;
                    fVar13 = fVar12 + in_fr4;
                    if (fVar12 + in_fr4 < in_fr4) {
                        fVar13 = in_fr4;
                    }
                    *(u32 *)(a3 + 0xc) = 0xe0000000;
                    *(float *)(a3 + 0x24) = fVar13;
                    a3 = a3 + 0x2c;
                }
                uVar10 = *puVar7;
                iVar9 = iVar9 + 1;
                uVar11 = puVar7[1];
                fVar12 = (float)puVar7[2];
                *(float *)(a3 + 0x14) = fVar15;
                *(u32 *)(a3 + 0x10) = uVar11;
                *(u32 *)(a3 + 0xc) = uVar10;
                fVar13 = fVar12 + in_fr4;
                if (fVar12 + in_fr4 < in_fr4) {
                    fVar13 = in_fr4;
                }
                *(u32 *)(a3 + 0xc) = 0xe0000000;
                *(float *)(a3 + 0x24) = fVar13;
                a3 = a3 + 0x2c;
                puVar6 = puVar7 + -3;
            }
            a0 = a0 + (a2 >> 0xe & 3) + 3;
            fVar12 = fVar16 * 0.5 + 0.5;
            iVar5 = iVar5 + -1;
            puVar7 = puVar8;
            fVar13 = fVar15;
            fVar15 = fVar12;
        } while (iVar5 != 0);
        if (iVar9 != 0) {
            uVar10 = *puVar8;
            uVar11 = puVar8[1];
            fVar13 = (float)puVar8[2];
            *(float *)(a3 + 0x14) = fVar12;
            *(u32 *)(a3 + 0x10) = uVar11;
            *(u32 *)(a3 + 0xc) = uVar10;
            fVar14 = fVar13 + in_fr4;
            if (fVar13 + in_fr4 < in_fr4) {
                fVar14 = in_fr4;
            }
            iVar3 = iVar3 + iVar9 + 1;
            *(u32 *)(a3 + 0xc) = 0xf0000000;
            *(float *)(a3 + 0x24) = fVar14;
            a3 = a3 + 0x2c;
        }
        uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    g_8c4aa520 = g_8c4aa520 + iVar3;
    g_8c4aa51c = g_8c4aa51c + iVar4;
    return a3;
}

/*
 * gfxlib_uses_vram64_230384  0x8c230384
 * area name: in the gfxlib library code range; behaviour name: its main named callee is vram64_231eac
 */
double *gfxlib_uses_vram64_230384(short *a0, int a1, u32 a2, double *a3) {
    u32 uVar1;
    short *psVar2;
    short *psVar3;
    double *pdVar4;
    double *pdVar5;
    double *pdVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    double *pdVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    double *pdVar15;
    u32 *puVar16;
    u32 *puVar17;
    u32 *puVar18;
    double in_dr0;
    float fVar20;
    double dVar21;
    float fVar22;
    float fVar23;
    double in_dr4;
    u32 uVar26;
    double dVar24;
    double dVar25;
    double in_dr6;
    double dVar27;
    double in_dr8;
    double in_dr10;
    double dVar28;
    double in_dr12;
    double in_dr14;
    u32 uVar29;
    u32 uVar30;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    u64 in_xd10;
    double in_xd12;
    double in_xd14;
    bool bVar31;
    bool bVar32;
    char cVar33;
    char cVar34;
    short *psStack_40;
    u32 uStack_38;
    u32 auStack_34[2];
    u32 uStack_28;
    u32 uStack_20;
    double *pdVar19;

    cVar34 = '\0';
    cVar33 = '\0';
    uStack_20 = SUB84(in_dr14, 0);
    uVar29 = (u32)((u64)in_dr14 >> 0x20);
    uStack_28 = SUB84(in_dr12, 0);
    uVar30 = (u32)((u64)in_dr12 >> 0x20);
    uVar26 = (u32)((u64)in_dr4 >> 0x20);
    if ((g_8c4aa4f0 & 0x20000) == 0) {
        uStack_28 = uVar29;
        puVar16 = auStack_34;
        auStack_34[0] = g_8c4aa4f0;
        uVar1 = a2 & 0x3fff;
        iVar9 = 0;
        iVar11 = 0;
        iVar13 = (a2 >> 0xe & 3) << 1;
        dVar25 = (double)CONCAT44(uVar26, 0x3f000000);
        uStack_20 = uVar30;
        do {
            iVar7 = (int)*a0;
            fVar23 = 1.0;
            if ((*puVar16 & 0x80000000) != 0) {
                fVar23 = -1.0;
            }
            pdVar6 = (double *)(a0[1] * 0x20 + a1);
            if (iVar7 < 0) {
                iVar7 = -iVar7;
                fVar23 = -fVar23;
            }
            iVar11 = iVar11 + iVar7;
            iVar7 = iVar7 + -2;
            iVar14 = 0;
            pdVar10 = (double *)(a0[4] * 0x20 + a1);
            if (cVar34 == '\0') {
                dVar28 = (double)CONCAT44(*(u32 *)(pdVar6 + 3), SUB84(in_dr10, 0));
            } else {
                dVar28 = pdVar6[3];
            }
            fVar22 = SUB84(dVar25, 0);
            if (cVar33 == '\0') {
                dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * fVar22 + fVar22,
                                          SUB84(dVar28, 0) * fVar22 + fVar22);
            } else {
                dVar28 = dVar28 * dVar25 * dVar25 + dVar25 + dVar25;
            }
            a0 = a0 + 7;
            if (cVar34 == '\0') {
                dVar21 = (double)CONCAT44(*(u32 *)(pdVar10 + 3), SUB84(in_dr12, 0));
            } else {
                dVar21 = pdVar10[3];
            }
            if (cVar33 == '\0') {
                dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * fVar22 + fVar22,
                                          SUB84(dVar21, 0) * fVar22 + fVar22);
            } else {
                dVar21 = dVar21 * dVar25 * dVar25 + dVar25 + dVar25;
            }
        LAB_8c23072e:
            in_dr12 = dVar21;
            in_dr10 = dVar28;
            if (cVar34 == '\0') {
                dVar28 = (double)CONCAT44(*(u32 *)((int)pdVar6 + 4), SUB84(in_dr0, 0));
                dVar21 = (double)CONCAT44(*(u32 *)(pdVar6 + 1), SUB84(in_dr6, 0));
                iVar8 = (int)pdVar6 + 0xc;
            } else {
                dVar28 = *(double *)((int)pdVar6 + 4);
                dVar21 = *(double *)((int)pdVar6 + 0xc);
                iVar8 = (int)pdVar6 + 0x14;
            }
            if (cVar34 == '\0') {
                dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)((int)pdVar10 + 4));
                pdVar10 = pdVar10 + 1;
            } else {
                pdVar10 = (double *)((int)pdVar10 + 0xc);
            }
            iVar12 = *a0 * 0x20 + a1;
            if (cVar34 == '\0') {
                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)pdVar10);
                pdVar15 = (double *)((int)pdVar10 + 4);
            } else {
                pdVar15 = pdVar10 + 1;
            }
            pdVar4 = (double *)(iVar8 + -0xc);
            if (cVar33 == '\0') {
                dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) - SUB84(dVar28, 0), SUB84(dVar28, 0));
                in_dr6 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar21, 0));
            } else {
                dVar28 = dVar28 - dVar28;
                in_dr6 = dVar21 - dVar21;
            }
            pdVar6 = (double *)((int)pdVar15 + -0xc);
            if (cVar34 == '\0') {
                fVar22 = *(float *)(iVar12 + 4);
                dVar21 = (double)CONCAT44(*(u32 *)(iVar12 + 8), fVar23);
                iVar12 = iVar12 + 0xc;
            } else {
                fVar22 = (float)((u64) * (u64 *)(iVar12 + 4) >> 0x20);
                dVar21 = *(double *)(iVar12 + 0xc);
                iVar12 = iVar12 + 0x14;
            }
            if (cVar33 == '\0') {
                dVar24 = (double)CONCAT44(fVar22 - SUB84(dVar28, 0), 0x3f800000);
            } else {
                dVar24 = (double)CONCAT44(fVar22, 0x3f800000) - dVar28;
            }
            if (cVar34 == '\0') {
                dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)pdVar4);
            }
            if (cVar33 == '\0') {
                dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(in_dr6, 0), SUB84(dVar21, 0));
            } else {
                dVar21 = dVar21 - in_dr6;
            }
            if (cVar34 == '\0') {
                in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)pdVar6);
            }
            if (cVar33 == '\0') {
                dVar21 =
                    (double)CONCAT44((float)((u64)dVar21 >> 0x20) * (float)((u64)dVar28 >> 0x20), SUB84(dVar21, 0));
            } else {
                dVar21 = dVar21 * dVar28;
            }
            if (cVar34 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)(iVar12 + -0xc), SUB84(dVar28, 0));
            } else {
                in_dr0 = *(double *)(iVar12 + -0xc);
            }
            psVar3 = a0 + 3;
            fVar23 = SUB84(in_dr0, 0);
            fVar22 = SUB84(dVar24, 0);
            if (cVar33 == '\0') {
                bVar32 = fVar23 < fVar22;
            } else {
                bVar32 = in_dr0 < dVar24;
            }
            if (cVar34 == '\0') {
                dVar28 = (double)CONCAT44(*(u32 *)(iVar12 + 0xc), SUB84(in_dr14, 0));
            } else {
                dVar28 = *(double *)(iVar12 + 0xc);
            }
            pdVar10 = (double *)(iVar12 + -0xc);
            bVar31 = true;
            uVar30 = (u32)((u64)in_dr10 >> 0x20);
            fVar20 = (float)((u64)dVar25 >> 0x20);
            uVar29 = (u32)((u64)in_dr12 >> 0x20);
            if (bVar32) {
            LAB_8c2307e4:
                if (iVar14 != 0) {
                    if (cVar34 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar6, fVar23);
                        dVar24 = (double)CONCAT44(*(u32 *)(pdVar15 + -1), SUB84(dVar24, 0));
                        dVar27 = (double)CONCAT44(*(u32 *)((int)pdVar15 + -4), SUB84(in_dr6, 0));
                    } else {
                        in_dr0 = *pdVar6;
                        dVar24 = *(double *)((int)pdVar15 + -4);
                        dVar27 = *(double *)((int)pdVar15 + 4);
                        pdVar15 = (double *)((int)pdVar15 + 0xc);
                    }
                    pdVar6 = pdVar15 + -3;
                    if (cVar34 == '\0') {
                        pdVar15 = (double *)((int)a3 + 0x14);
                        *(u32 *)pdVar15 = uVar29;
                    } else {
                        pdVar15 = a3 + 2;
                        *pdVar15 = in_dr12;
                    }
                    if (cVar33 == '\0') {
                        dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) + fVar20, SUB84(dVar27, 0));
                    } else {
                        dVar27 = dVar27 + dVar25;
                    }
                    if (cVar34 == '\0') {
                        pdVar15 = (double *)((int)pdVar15 + -4);
                        *(int *)pdVar15 = (int)((u64)dVar24 >> 0x20);
                    } else {
                        pdVar15 = pdVar15 + -1;
                        *pdVar15 = dVar24;
                    }
                    if (cVar33 == '\0') {
                        bVar32 = (float)((u64)dVar27 >> 0x20) < fVar20;
                    } else {
                        bVar32 = dVar27 < dVar25;
                    }
                    if (cVar34 == '\0') {
                        pdVar15 = (double *)((int)pdVar15 + -4);
                        *(int *)pdVar15 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        pdVar15 = pdVar15 + -1;
                        *pdVar15 = in_dr0;
                    }
                    in_dr6 = dVar27;
                    if ((bVar32) && (in_dr6 = dVar25, cVar34 == '\0')) {
                        in_dr6 = (double)CONCAT44(fVar20, SUB84(dVar27, 0));
                    }
                    iVar9 = iVar9 + iVar14 + 1;
                    *(u32 *)pdVar15 = 0xf0000000;
                    iVar14 = 0;
                    if (cVar34 == '\0') {
                        *(int *)(pdVar15 + 3) = (int)((u64)in_dr6 >> 0x20);
                    } else {
                        pdVar15[3] = in_dr6;
                    }
                    a3 = pdVar15 + 4;
                }
            } else {
                if (cVar33 == '\0') {
                    bVar32 = SUB84(in_dr6, 0) < fVar22;
                    in_dr6 =
                        (double)CONCAT44((float)((u64)in_dr6 >> 0x20) * (float)((u64)dVar24 >> 0x20), SUB84(in_dr6, 0));
                } else {
                    bVar32 = in_dr6 < dVar24;
                    in_dr6 = in_dr6 * dVar24;
                }
                if (bVar32)
                    goto LAB_8c2307e4;
                dVar24 = (double)((u64)dVar24 & 0xffffffff);
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)in_dr0 >> 0x20) < fVar22;
                    in_dr6 = (double)CONCAT44(((float)((u64)in_dr6 >> 0x20) - (float)((u64)dVar21 >> 0x20)) *
                                                  SUB84(dVar21, 0),
                                              SUB84(in_dr6, 0));
                } else {
                    bVar32 = in_dr0 < dVar24;
                    in_dr6 = (in_dr6 - dVar21) * dVar21;
                }
                if (bVar32)
                    goto LAB_8c2307e4;
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)in_dr6 >> 0x20) < 0.0;
                } else {
                    bVar32 = in_dr6 < dVar24;
                }
                bVar31 = false;
                if (!bVar32)
                    goto LAB_8c2307e4;
                if (iVar14 == 0) {
                    if (cVar34 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar4, fVar23);
                        dVar24 = (double)CONCAT44(*(u32 *)(iVar8 + -8), fVar22);
                        dVar27 = (double)CONCAT44(*(u32 *)(iVar8 + -4), SUB84(in_dr6, 0));
                    } else {
                        in_dr0 = *pdVar4;
                        dVar24 = *(double *)(iVar8 + -4);
                        dVar27 = *(double *)(iVar8 + 4);
                        iVar8 = iVar8 + 0xc;
                    }
                    iVar14 = 1;
                    pdVar4 = (double *)(iVar8 + -0x18);
                    if (cVar34 == '\0') {
                        pdVar5 = (double *)((int)a3 + 0x14);
                        *(u32 *)pdVar5 = uVar30;
                    } else {
                        pdVar5 = a3 + 2;
                        *pdVar5 = in_dr10;
                    }
                    if (cVar33 == '\0') {
                        dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) + fVar20, SUB84(dVar27, 0));
                    } else {
                        dVar27 = dVar27 + dVar25;
                    }
                    if (cVar34 == '\0') {
                        pdVar5 = (double *)((int)pdVar5 + -4);
                        *(int *)pdVar5 = (int)((u64)dVar24 >> 0x20);
                    } else {
                        pdVar5 = pdVar5 + -1;
                        *pdVar5 = dVar24;
                    }
                    if (cVar33 == '\0') {
                        bVar32 = (float)((u64)dVar27 >> 0x20) < fVar20;
                    } else {
                        bVar32 = dVar27 < dVar25;
                    }
                    if (cVar34 == '\0') {
                        pdVar5 = (double *)((int)pdVar5 + -4);
                        *(int *)pdVar5 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        pdVar5 = pdVar5 + -1;
                        *pdVar5 = in_dr0;
                    }
                    in_dr6 = dVar27;
                    if ((bVar32) && (in_dr6 = dVar25, cVar34 == '\0')) {
                        in_dr6 = (double)CONCAT44(fVar20, SUB84(dVar27, 0));
                    }
                    *(u32 *)pdVar5 = 0xe0000000;
                    if (cVar34 == '\0') {
                        *(int *)(pdVar5 + 3) = (int)((u64)in_dr6 >> 0x20);
                    } else {
                        pdVar5[3] = in_dr6;
                    }
                    a3 = pdVar5 + 4;
                }
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar6, SUB84(in_dr0, 0));
                    dVar24 = (double)CONCAT44(*(u32 *)(pdVar15 + -1), SUB84(dVar24, 0));
                    dVar27 = (double)CONCAT44(*(u32 *)((int)pdVar15 + -4), SUB84(in_dr6, 0));
                } else {
                    in_dr0 = *pdVar6;
                    dVar24 = *(double *)((int)pdVar15 + -4);
                    dVar27 = *(double *)((int)pdVar15 + 4);
                    pdVar15 = (double *)((int)pdVar15 + 0xc);
                }
                iVar14 = iVar14 + 1;
                pdVar6 = pdVar15 + -3;
                if (cVar34 == '\0') {
                    pdVar15 = (double *)((int)a3 + 0x14);
                    *(u32 *)pdVar15 = uVar29;
                } else {
                    pdVar15 = a3 + 2;
                    *pdVar15 = in_dr12;
                }
                if (cVar33 == '\0') {
                    dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) + fVar20, SUB84(dVar27, 0));
                } else {
                    dVar27 = dVar27 + dVar25;
                }
                if (cVar34 == '\0') {
                    pdVar15 = (double *)((int)pdVar15 + -4);
                    *(int *)pdVar15 = (int)((u64)dVar24 >> 0x20);
                } else {
                    pdVar15 = pdVar15 + -1;
                    *pdVar15 = dVar24;
                }
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)dVar27 >> 0x20) < fVar20;
                } else {
                    bVar32 = dVar27 < dVar25;
                }
                if (cVar34 == '\0') {
                    pdVar15 = (double *)((int)pdVar15 + -4);
                    *(int *)pdVar15 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    pdVar15 = pdVar15 + -1;
                    *pdVar15 = in_dr0;
                }
                in_dr6 = dVar27;
                if ((bVar32) && (in_dr6 = dVar25, cVar34 == '\0')) {
                    in_dr6 = (double)CONCAT44(fVar20, SUB84(dVar27, 0));
                }
                *(u32 *)pdVar15 = 0xe0000000;
                if (cVar34 == '\0') {
                    *(int *)(pdVar15 + 3) = (int)((u64)in_dr6 >> 0x20);
                } else {
                    pdVar15[3] = in_dr6;
                }
                a3 = pdVar15 + 4;
            }
            if (bVar31) {
                if (cVar34 == '\0') {
                    dVar27 = (double)CONCAT44(*(u32 *)pdVar4, SUB84(in_dr0, 0));
                } else {
                    dVar27 = *pdVar4;
                }
                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), 0x3f800000);
                if (cVar33 == '\0') {
                    bVar32 = 1.0 < (float)((u64)dVar27 >> 0x20);
                } else {
                    bVar32 = dVar24 < dVar27;
                }
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar6, SUB84(dVar27, 0));
                } else {
                    in_dr0 = *pdVar6;
                }
                if (!bVar32) {
                    if (cVar33 == '\0') {
                        bVar32 = 1.0 < (float)((u64)in_dr0 >> 0x20);
                    } else {
                        bVar32 = dVar24 < in_dr0;
                    }
                    if (cVar34 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr0, 0));
                    } else {
                        in_dr0 = *pdVar10;
                    }
                    if (!bVar32) {
                        if (cVar33 == '\0') {
                            bVar32 = 1.0 < (float)((u64)in_dr0 >> 0x20);
                        } else {
                            bVar32 = dVar24 < in_dr0;
                        }
                        if (!bVar32)
                            goto LAB_8c230818;
                    }
                }
                *(u32 *)((int)puVar16 + -4) = uVar1;
                *(int *)((int)puVar16 + -8) = iVar9;
                *(int *)((int)puVar16 + -0xc) = iVar11;
                *(short **)((int)puVar16 + -0x10) = psVar3;
                *(int *)((int)puVar16 + -0x14) = a1;
                *(int *)((int)puVar16 + -0x18) = iVar13;
                if (cVar34 == '\0') {
                    *(float *)((int)puVar16 + -0x1c) = fVar20;
                    *(int *)((int)puVar16 + -0x20) = SUB84(dVar25, 0);
                    *(float *)((int)puVar16 + -0x24) = SUB84(dVar21, 0);
                    *(u32 *)((int)puVar16 + -0x28) = uVar30;
                    puVar17 = (u32 *)((int)puVar16 + -0x2c);
                    *(int *)((int)puVar16 + -0x2c) = SUB84(in_dr10, 0);
                } else {
                    *(double *)((int)puVar16 + -0x20) = dVar25;
                    *(double *)((int)puVar16 + -0x28) = in_xd4;
                    *(double *)((int)puVar16 + -0x30) = in_xd8;
                    *(double *)((int)puVar16 + -0x38) = in_dr10;
                    puVar17 = (u32 *)((int)puVar16 + -0x40);
                    *(u64 *)((int)puVar16 + -0x40) = in_xd10;
                    in_xd4 = in_xd8;
                }
                a3 = (double *)vram64_231eac(pdVar4, pdVar6, pdVar10, a3);
                if (cVar34 == '\0') {
                    in_dr10 = (double)(u64)*puVar17;
                    dVar21 = (double)(u64)puVar17[2];
                    pdVar19 = (double *)(puVar17 + 3);
                    puVar18 = puVar17 + 5;
                } else {
                    in_xd10 = *(u64 *)puVar17;
                    in_dr10 = *(double *)(puVar17 + 2);
                    in_xd8 = *(double *)(puVar17 + 4);
                    in_xd4 = *(double *)(puVar17 + 6);
                    pdVar19 = (double *)(puVar17 + 8);
                    puVar18 = puVar17 + 10;
                }
                dVar25 = *pdVar19;
                iVar13 = *puVar18;
                a1 = puVar18[1];
                psVar3 = (short *)puVar18[2];
                iVar11 = puVar18[3];
                iVar9 = puVar18[4];
                uVar1 = puVar18[5];
                puVar16 = puVar18 + 6;
            }
        LAB_8c230818:
            fVar23 = -SUB84(dVar21, 0);
            fVar22 = SUB84(dVar25, 0);
            if (cVar33 == '\0') {
                dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * fVar22, SUB84(dVar28, 0));
            } else {
                dVar28 = dVar28 * dVar25;
            }
            a0 = (short *)((int)psVar3 + iVar13);
            if (cVar33 == '\0') {
                dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) * fVar22);
            } else {
                dVar28 = dVar28 * dVar25;
            }
            iVar7 = iVar7 + -1;
            if (cVar33 == '\0') {
                in_dr14 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) + fVar22, SUB84(dVar28, 0) + fVar22);
            } else {
                in_dr14 = dVar28 + dVar25 + dVar25;
            }
            uVar30 = (u32)((u64)in_dr14 >> 0x20);
            if (iVar7 != 0) {
                dVar28 = in_dr12;
                dVar21 = in_dr14;
                if (cVar34 == '\0') {
                    dVar28 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr10, 0));
                    dVar21 = (double)CONCAT44(uVar30, SUB84(in_dr12, 0));
                }
                goto LAB_8c23072e;
            }
            if (iVar14 != 0) {
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr0, 0));
                    pdVar6 = (double *)(iVar12 + -8);
                } else {
                    in_dr0 = *pdVar10;
                    pdVar6 = (double *)(iVar12 + -4);
                }
                if (cVar34 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)pdVar6, SUB84(dVar24, 0));
                    dVar28 = (double)CONCAT44(*(u32 *)((int)pdVar6 + 4), SUB84(in_dr6, 0));
                    pdVar6 = (double *)((int)a3 + 0x14);
                    *(u32 *)pdVar6 = uVar30;
                } else {
                    dVar21 = *pdVar6;
                    dVar28 = pdVar6[1];
                    pdVar6 = a3 + 2;
                    *pdVar6 = in_dr14;
                }
                fVar23 = (float)((u64)dVar25 >> 0x20);
                if (cVar33 == '\0') {
                    dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) + fVar23, SUB84(dVar28, 0));
                } else {
                    dVar28 = dVar28 + dVar25;
                }
                if (cVar34 == '\0') {
                    pdVar6 = (double *)((int)pdVar6 + -4);
                    *(int *)pdVar6 = (int)((u64)dVar21 >> 0x20);
                } else {
                    pdVar6 = pdVar6 + -1;
                    *pdVar6 = dVar21;
                }
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)dVar28 >> 0x20) < fVar23;
                } else {
                    bVar32 = dVar28 < dVar25;
                }
                if (cVar34 == '\0') {
                    pdVar6 = (double *)((int)pdVar6 + -4);
                    *(int *)pdVar6 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    pdVar6 = pdVar6 + -1;
                    *pdVar6 = in_dr0;
                }
                in_dr6 = dVar28;
                if ((bVar32) && (in_dr6 = dVar25, cVar34 == '\0')) {
                    in_dr6 = (double)CONCAT44(fVar23, SUB84(dVar28, 0));
                }
                iVar9 = iVar9 + iVar14 + 1;
                *(u32 *)pdVar6 = 0xf0000000;
                if (cVar34 == '\0') {
                    *(int *)(pdVar6 + 3) = (int)((u64)in_dr6 >> 0x20);
                } else {
                    pdVar6[3] = in_dr6;
                }
                a3 = pdVar6 + 4;
            }
            uVar1 = uVar1 - 1;
            if (uVar1 == 0) {
                g_8c4aa520 = g_8c4aa520 + iVar9;
                g_8c4aa51c = g_8c4aa51c + iVar11;
                return a3;
            }
        } while (true);
    }
    dVar28 = (double)CONCAT44(g_8c277afc + 0.5, uStack_20);
    iVar9 = 0;
    uStack_38 = a2 & 0x3fff;
    iVar11 = 0;
    dVar25 = (double)CONCAT44(0x3f800000, g_8c277af8 + 0.5);
    if ((g_8c4aa4f0 & 0x80000000) != 0) {
        dVar25 = (double)CONCAT44(0xbf800000, g_8c277af8 + 0.5);
    }
    auStack_34[0] = (a2 >> 0xe & 3) << 1;
    psStack_40 = a0;
    do {
        psVar3 = psStack_40 + 1;
        iVar13 = (int)*psStack_40;
        dVar21 = dVar25;
        if (cVar34 == '\0') {
            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), (int)((u64)dVar25 >> 0x20));
            dVar21 = in_xd14;
        }
        in_xd14 = dVar21;
        if (iVar13 < 0) {
            dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), -SUB84(dVar28, 0));
            iVar13 = -iVar13;
        }
        iVar11 = iVar11 + iVar13;
        iVar13 = iVar13 + -2;
        psVar2 = psStack_40 + 4;
        iVar7 = 0;
        psStack_40 = psStack_40 + 7;
        pdVar6 = (double *)(*psVar3 * 0x20 + a1);
        pdVar10 = (double *)(*psVar2 * 0x20 + a1);
        do {
            pdVar15 = (double *)(*psStack_40 * 0x20 + a1);
            psStack_40 = psStack_40 + 3;
            if (cVar34 == '\0') {
                dVar21 = (double)CONCAT44(*(u32 *)pdVar6, 0x3f800000);
            } else {
                dVar21 = *pdVar6;
            }
            bVar32 = false;
            fVar23 = SUB84(in_dr4, 0);
            if (cVar33 != '\0' || (float)((u64)dVar21 >> 0x20) <= SUB84(dVar21, 0)) {
            LAB_8c23049a:
                bVar32 = true;
                in_dr4 = (double)CONCAT44(0x3f800000, fVar23);
            } else {
                if (cVar34 == '\0') {
                    dVar21 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(dVar21, 0));
                } else {
                    dVar21 = *pdVar10;
                }
                if (cVar33 != '\0' || (float)((u64)dVar21 >> 0x20) <= SUB84(dVar21, 0))
                    goto LAB_8c23049a;
                if (cVar34 == '\0') {
                    fVar22 = *(float *)pdVar15;
                } else {
                    fVar22 = (float)((u64)*pdVar15 >> 0x20);
                }
                dVar21 = (double)CONCAT44(fVar22, 0x3f800000);
                if (cVar33 != '\0' || fVar22 <= 1.0)
                    goto LAB_8c23049a;
                if (cVar34 == '\0') {
                    fVar23 = *(float *)((int)pdVar10 + 4);
                    in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar23);
                    dVar21 = (double)CONCAT44(fVar23, *(u32 *)((int)pdVar6 + 4));
                } else {
                    dVar21 = *(double *)((int)pdVar10 + 4);
                    in_xd4 = dVar21;
                }
                if (cVar33 == '\0') {
                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - SUB84(dVar21, 0), SUB84(dVar21, 0));
                } else {
                    dVar21 = dVar21 - dVar21;
                }
                if (cVar34 == '\0') {
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(pdVar15 + 1));
                    in_dr6 = (double)CONCAT44(*(u32 *)(pdVar10 + 1), SUB84(in_dr6, 0));
                } else {
                    in_dr6 = pdVar10[1];
                }
                fVar22 = (float)((u64)in_dr6 >> 0x20);
                if (cVar33 == '\0') {
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) - fVar22);
                } else {
                    dVar21 = dVar21 - in_dr6;
                }
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar22);
                }
                if (cVar33 == '\0') {
                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) * SUB84(dVar21, 0), SUB84(dVar21, 0));
                } else {
                    dVar21 = dVar21 * dVar21;
                }
                if (cVar34 == '\0') {
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(pdVar6 + 1));
                }
                if (cVar33 == '\0') {
                    dVar24 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar21, 0));
                } else {
                    dVar24 = in_dr0 - dVar21;
                }
                if (cVar34 == '\0') {
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)((int)pdVar15 + 4));
                }
                if (cVar33 == '\0') {
                    fVar20 = SUB84(dVar21, 0) - fVar23;
                    fVar22 = SUB84(dVar24, 0) * fVar20;
                    in_dr0 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), fVar22);
                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) - fVar22, fVar20);
                } else {
                    in_dr0 = dVar24 * (dVar21 - in_dr4);
                    dVar21 = (dVar21 - in_dr4) - in_dr0;
                }
                dVar24 = dVar21;
                if (cVar34 == '\0') {
                    dVar24 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), fVar23);
                }
                if (cVar33 == '\0') {
                    in_dr4 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) * SUB84(dVar28, 0), SUB84(dVar24, 0));
                } else {
                    in_dr4 = dVar24 * dVar28;
                }
            }
            dVar21 = (double)((u64)dVar21 & 0xffffffff00000000);
            fVar23 = (float)((u64)in_dr4 >> 0x20);
            if (cVar33 == '\0') {
                bVar31 = fVar23 < 0.0;
            } else {
                bVar31 = in_dr4 < dVar21;
            }
            uVar29 = (u32)((u64)dVar28 >> 0x20);
            uVar30 = SUB84(dVar25, 0);
            if (bVar31) {
                if (iVar7 == 0) {
                    if (cVar34 == '\0') {
                        in_dr10 = (double)CONCAT44(*(u32 *)((int)pdVar6 + 4), SUB84(in_dr10, 0));
                        pdVar4 = pdVar6 + 1;
                        dVar21 = (double)((u64)uVar26 << 0x20);
                        in_dr4 = (double)CONCAT44(fVar23, *(u32 *)(pdVar6 + 2));
                        pdVar5 = (double *)((int)pdVar6 + 0x14);
                    } else {
                        in_dr10 = *(double *)((int)pdVar6 + 4);
                        dVar21 = (double)CONCAT44(psStack_40, uVar26);
                        in_xd8 = *(double *)((int)pdVar6 + 0xc);
                        pdVar4 = (double *)((int)pdVar6 + 0x14);
                        in_xd4 = *(double *)((int)pdVar6 + 0x1c);
                        pdVar5 = (double *)((int)pdVar6 + 0x24);
                    }
                    in_dr8 = *pdVar4;
                    fVar23 = (float)((u64)dVar21 >> 0x20);
                    if (cVar33 == '\0') {
                        fVar22 = SUB84(in_dr4, 0) + fVar23;
                        dVar24 = (double)(u64)(u32)fVar22;
                        bVar31 = fVar22 < fVar23;
                    } else {
                        dVar24 = in_dr4 + dVar21;
                        bVar31 = dVar24 < dVar21;
                    }
                    if (cVar34 == '\0') {
                        in_dr6 = (double)CONCAT44(*(u32 *)pdVar5, SUB84(in_dr6, 0));
                        pdVar5 = (double *)((int)pdVar5 + 4);
                    } else {
                        in_dr6 = *pdVar5;
                        pdVar5 = pdVar5 + 1;
                    }
                    uVar1 = SUB84(dVar24, 0);
                    if ((bVar31) && (uVar1 = uVar26, cVar34 != '\0')) {
                        in_xd4 = (double)CONCAT44(psStack_40, uVar26);
                        uVar1 = SUB84(dVar24, 0);
                    }
                    if (cVar34 == '\0') {
                        in_dr0 = (double)CONCAT44(0x3f000000, SUB84(in_dr0, 0));
                        in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), uVar30);
                        in_dr4 = (double)CONCAT44(uVar29, uVar1);
                    } else {
                        pdVar5 = pdVar5 + 1;
                        in_dr0 = -2.681562215333027e+154;
                        in_xd6 = in_xd12;
                        in_dr4 = dVar28;
                    }
                    dVar21 = *pdVar5;
                    fVar23 = (float)((u64)in_dr0 >> 0x20);
                    if (cVar33 == '\0') {
                        in_dr4 = (double)CONCAT44(fVar23 * (float)((u64)dVar21 >> 0x20) + (float)((u64)in_dr4 >> 0x20),
                                                  SUB84(in_dr4, 0));
                        in_dr6 =
                            (double)CONCAT44((int)((u64)in_dr6 >> 0x20), fVar23 * SUB84(dVar21, 0) + SUB84(in_dr6, 0));
                    }
                    if (cVar34 == '\0') {
                        *(int *)((int)a3 + 0x1c) = (int)((u64)in_dr6 >> 0x20);
                        *(int *)(a3 + 3) = SUB84(in_dr4, 0);
                        *(int *)((int)a3 + 0x14) = (int)((u64)in_dr4 >> 0x20);
                        *(int *)(a3 + 2) = SUB84(in_dr6, 0);
                        *(int *)((int)a3 + 0xc) = (int)((u64)in_dr8 >> 0x20);
                        *(int *)(a3 + 1) = SUB84(in_dr8, 0);
                        pdVar4 = (double *)((int)a3 + 4);
                        *(int *)pdVar4 = (int)((u64)in_dr10 >> 0x20);
                    } else {
                        a3[3] = in_dr6;
                        a3[2] = in_xd4;
                        a3[1] = in_dr4;
                        *a3 = in_xd6;
                        a3[-1] = in_dr8;
                        a3[-2] = in_xd8;
                        pdVar4 = a3 + -3;
                        *pdVar4 = in_dr10;
                    }
                    *(u32 *)((int)pdVar4 + -4) = 0xe0000000;
                    iVar7 = 1;
                    a3 = (double *)((int)pdVar4 + 0x1c);
                }
                if (cVar34 == '\0') {
                    in_dr6 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), SUB84(in_dr6, 0));
                    dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar26);
                    in_dr8 = (double)CONCAT44(*(u32 *)(pdVar10 + 1), SUB84(in_dr8, 0));
                    in_dr10 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 0xc), SUB84(in_dr10, 0));
                    in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(pdVar10 + 2));
                    pdVar4 = (double *)((int)pdVar10 + 0x14);
                } else {
                    in_dr6 = *(double *)((int)pdVar10 + 4);
                    in_dr8 = *(double *)((int)pdVar10 + 0xc);
                    in_dr10 = *(double *)((int)pdVar10 + 0x14);
                    in_xd4 = *(double *)((int)pdVar10 + 0x1c);
                    pdVar4 = (double *)((int)pdVar10 + 0x24);
                }
                if (cVar33 == '\0') {
                    fVar23 = SUB84(in_dr4, 0) + SUB84(dVar21, 0);
                    dVar24 = (double)(u64)(u32)fVar23;
                    bVar31 = fVar23 < SUB84(dVar21, 0);
                } else {
                    dVar24 = in_dr4 + dVar21;
                    bVar31 = dVar24 < dVar21;
                }
                if (cVar34 == '\0') {
                    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)pdVar4);
                    pdVar4 = (double *)((int)pdVar4 + 4);
                } else {
                    in_xd6 = *pdVar4;
                    pdVar4 = pdVar4 + 1;
                }
                uVar1 = SUB84(dVar24, 0);
                if ((bVar31) && (uVar1 = uVar26, cVar34 != '\0')) {
                    in_xd4 = (double)CONCAT44(psStack_40, uVar26);
                    uVar1 = SUB84(dVar24, 0);
                }
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44(0x3f000000, SUB84(in_dr0, 0));
                    in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), uVar30);
                    in_dr4 = (double)CONCAT44(uVar29, uVar1);
                } else {
                    pdVar4 = pdVar4 + 1;
                    in_dr0 = -2.681562215333027e+154;
                    in_xd8 = in_xd12;
                    in_dr4 = dVar28;
                }
                dVar21 = *pdVar4;
                fVar23 = (float)((u64)in_dr0 >> 0x20);
                if (cVar33 == '\0') {
                    in_dr4 = (double)CONCAT44(fVar23 * (float)((u64)dVar21 >> 0x20) + (float)((u64)in_dr4 >> 0x20),
                                              SUB84(in_dr4, 0));
                    in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), fVar23 * SUB84(dVar21, 0) + SUB84(in_dr8, 0));
                }
                if (cVar34 == '\0') {
                    *(int *)((int)a3 + 0x1c) = SUB84(in_dr6, 0);
                    *(int *)(a3 + 3) = SUB84(in_dr4, 0);
                    *(int *)((int)a3 + 0x14) = (int)((u64)in_dr4 >> 0x20);
                    *(int *)(a3 + 2) = SUB84(in_dr8, 0);
                    *(int *)((int)a3 + 0xc) = (int)((u64)in_dr10 >> 0x20);
                    *(int *)(a3 + 1) = (int)((u64)in_dr8 >> 0x20);
                    pdVar4 = (double *)((int)a3 + 4);
                    *(int *)pdVar4 = (int)((u64)in_dr6 >> 0x20);
                } else {
                    a3[3] = in_xd6;
                    a3[2] = in_xd4;
                    a3[1] = in_dr4;
                    *a3 = in_xd8;
                    a3[-1] = in_dr10;
                    a3[-2] = in_dr8;
                    pdVar4 = a3 + -3;
                    *pdVar4 = in_dr6;
                }
                *(u32 *)((int)pdVar4 + -4) = 0xe0000000;
                a3 = (double *)((int)pdVar4 + 0x1c);
                iVar7 = iVar7 + 1;
            } else if (iVar7 != 0) {
                if (cVar34 == '\0') {
                    in_dr8 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), SUB84(in_dr8, 0));
                    pdVar4 = pdVar10 + 1;
                    dVar21 = (double)((u64)uVar26 << 0x20);
                    in_dr4 = (double)CONCAT44(fVar23, *(u32 *)(pdVar10 + 2));
                    pdVar5 = (double *)((int)pdVar10 + 0x14);
                } else {
                    in_dr8 = *(double *)((int)pdVar10 + 4);
                    dVar21 = (double)CONCAT44(psStack_40, uVar26);
                    in_xd6 = *(double *)((int)pdVar10 + 0xc);
                    pdVar4 = (double *)((int)pdVar10 + 0x14);
                    in_xd4 = *(double *)((int)pdVar10 + 0x1c);
                    pdVar5 = (double *)((int)pdVar10 + 0x24);
                }
                in_dr6 = *pdVar4;
                fVar23 = (float)((u64)dVar21 >> 0x20);
                if (cVar33 == '\0') {
                    fVar22 = SUB84(in_dr4, 0) + fVar23;
                    dVar24 = (double)(u64)(u32)fVar22;
                    bVar31 = fVar22 < fVar23;
                } else {
                    dVar24 = in_dr4 + dVar21;
                    bVar31 = dVar24 < dVar21;
                }
                if (cVar34 == '\0') {
                    in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), *(u32 *)pdVar5);
                    pdVar5 = (double *)((int)pdVar5 + 4);
                } else {
                    in_xd8 = *pdVar5;
                    pdVar5 = pdVar5 + 1;
                }
                uVar1 = SUB84(dVar24, 0);
                if ((bVar31) && (uVar1 = uVar26, cVar34 != '\0')) {
                    in_xd4 = (double)CONCAT44(psStack_40, uVar26);
                    uVar1 = SUB84(dVar24, 0);
                }
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44(0x3f000000, SUB84(in_dr0, 0));
                    in_dr10 = (double)CONCAT44(uVar30, SUB84(in_dr10, 0));
                    in_dr4 = (double)CONCAT44(uVar29, uVar1);
                } else {
                    pdVar5 = pdVar5 + 1;
                    in_dr0 = -2.681562215333027e+154;
                    in_dr10 = in_xd12;
                    in_dr4 = dVar28;
                }
                dVar21 = *pdVar5;
                fVar23 = (float)((u64)in_dr0 >> 0x20);
                if (cVar33 == '\0') {
                    in_dr4 = (double)CONCAT44(fVar23 * (float)((u64)dVar21 >> 0x20) + (float)((u64)in_dr4 >> 0x20),
                                              SUB84(in_dr4, 0));
                    in_dr10 =
                        (double)CONCAT44(fVar23 * SUB84(dVar21, 0) + (float)((u64)in_dr10 >> 0x20), SUB84(in_dr10, 0));
                }
                if (cVar34 == '\0') {
                    *(int *)((int)a3 + 0x1c) = SUB84(in_dr8, 0);
                    *(int *)(a3 + 3) = SUB84(in_dr4, 0);
                    *(int *)((int)a3 + 0x14) = (int)((u64)in_dr4 >> 0x20);
                    *(int *)(a3 + 2) = (int)((u64)in_dr10 >> 0x20);
                    *(int *)((int)a3 + 0xc) = (int)((u64)in_dr6 >> 0x20);
                    *(int *)(a3 + 1) = SUB84(in_dr6, 0);
                    pdVar4 = (double *)((int)a3 + 4);
                    *(int *)pdVar4 = (int)((u64)in_dr8 >> 0x20);
                } else {
                    a3[3] = in_xd8;
                    a3[2] = in_xd4;
                    a3[1] = in_dr4;
                    *a3 = in_dr10;
                    a3[-1] = in_dr6;
                    a3[-2] = in_xd6;
                    pdVar4 = a3 + -3;
                    *pdVar4 = in_dr8;
                }
                *(u32 *)((int)pdVar4 + -4) = 0xf0000000;
                iVar9 = iVar9 + iVar7 + 1;
                iVar7 = 0;
                a3 = (double *)((int)pdVar4 + 0x1c);
            }
            if (bVar32) {
                if (cVar34 == '\0') {
                    fVar23 = *(float *)pdVar6;
                } else {
                    fVar23 = (float)((u64)*pdVar6 >> 0x20);
                }
                dVar21 = (double)CONCAT44(fVar23, 0x3f800000);
                if (cVar33 != '\0' || fVar23 <= 1.0) {
                    if (cVar34 == '\0') {
                        dVar21 = (double)CONCAT44(*(u32 *)pdVar10, 0x3f800000);
                    } else {
                        dVar21 = *pdVar10;
                    }
                    if (cVar33 != '\0' || (float)((u64)dVar21 >> 0x20) <= SUB84(dVar21, 0)) {
                        if (cVar34 == '\0') {
                            fVar23 = *(float *)pdVar15;
                        } else {
                            fVar23 = (float)((u64)*pdVar15 >> 0x20);
                        }
                        dVar21 = (double)CONCAT44(fVar23, 0x3f800000);
                        if (cVar33 != '\0' || fVar23 <= 1.0)
                            goto LAB_8c2305e8;
                    }
                }
                if (cVar34 == '\0') {
                    in_dr4 = (double)CONCAT44(uVar26, SUB84(dVar28, 0));
                } else {
                    in_dr4 = (double)CONCAT44(psStack_40, uVar26);
                    in_xd4 = in_xd14;
                }
                a3 = (double *)vram64_231eac(pdVar6, pdVar10, pdVar15, a3);
            }
        LAB_8c2305e8:
            psStack_40 = (short *)((int)psStack_40 + auStack_34[0]);
            iVar13 = iVar13 + -1;
            uVar30 = (u32)((u64)dVar28 >> 0x20);
            dVar28 = (double)CONCAT44(uVar30, -SUB84(dVar28, 0));
            pdVar6 = pdVar10;
            pdVar10 = pdVar15;
        } while (iVar13 != 0);
        if (iVar7 != 0) {
            if (cVar34 == '\0') {
                in_dr8 = (double)CONCAT44(*(u32 *)((int)pdVar15 + 4), SUB84(in_dr8, 0));
                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), uVar26);
                in_dr6 = (double)CONCAT44(*(u32 *)(pdVar15 + 1), *(u32 *)((int)pdVar15 + 0xc));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(pdVar15 + 2));
                pdVar15 = (double *)((int)pdVar15 + 0x14);
            } else {
                in_dr8 = *(double *)((int)pdVar15 + 4);
                in_dr6 = *(double *)((int)pdVar15 + 0xc);
                in_xd6 = *(double *)((int)pdVar15 + 0x14);
                in_xd4 = *(double *)((int)pdVar15 + 0x1c);
                pdVar15 = (double *)((int)pdVar15 + 0x24);
            }
            if (cVar33 == '\0') {
                fVar23 = SUB84(in_dr4, 0) + SUB84(dVar21, 0);
                dVar24 = (double)(u64)(u32)fVar23;
                bVar32 = fVar23 < SUB84(dVar21, 0);
            } else {
                dVar24 = in_dr4 + dVar21;
                bVar32 = dVar24 < dVar21;
            }
            if (cVar34 == '\0') {
                in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), *(u32 *)pdVar15);
                pdVar15 = (double *)((int)pdVar15 + 4);
            } else {
                in_xd8 = *pdVar15;
                pdVar15 = pdVar15 + 1;
            }
            uVar1 = SUB84(dVar24, 0);
            if ((bVar32) && (uVar1 = uVar26, cVar34 != '\0')) {
                in_xd4 = (double)CONCAT44(psStack_40, uVar26);
                uVar1 = SUB84(dVar24, 0);
            }
            if (cVar34 == '\0') {
                in_dr0 = (double)CONCAT44(0x3f000000, SUB84(in_dr0, 0));
                in_dr10 = (double)CONCAT44(SUB84(dVar25, 0), SUB84(in_dr10, 0));
                in_dr4 = (double)CONCAT44(uVar30, uVar1);
            } else {
                pdVar15 = pdVar15 + 1;
                in_dr0 = -2.681562215333027e+154;
                in_dr10 = in_xd12;
                in_dr4 = dVar28;
            }
            fVar23 = (float)((u64)in_dr0 >> 0x20);
            if (cVar33 == '\0') {
                in_dr4 = (double)CONCAT44(fVar23 * (float)((u64)*pdVar15 >> 0x20) + (float)((u64)in_dr4 >> 0x20),
                                          SUB84(in_dr4, 0));
                in_dr10 =
                    (double)CONCAT44(fVar23 * SUB84(*pdVar15, 0) + (float)((u64)in_dr10 >> 0x20), SUB84(in_dr10, 0));
            }
            if (cVar34 == '\0') {
                *(int *)((int)a3 + 0x1c) = SUB84(in_dr8, 0);
                *(int *)(a3 + 3) = SUB84(in_dr4, 0);
                *(int *)((int)a3 + 0x14) = (int)((u64)in_dr4 >> 0x20);
                *(int *)(a3 + 2) = (int)((u64)in_dr10 >> 0x20);
                *(int *)((int)a3 + 0xc) = SUB84(in_dr6, 0);
                *(int *)(a3 + 1) = (int)((u64)in_dr6 >> 0x20);
                pdVar6 = (double *)((int)a3 + 4);
                *(int *)pdVar6 = (int)((u64)in_dr8 >> 0x20);
            } else {
                a3[3] = in_xd8;
                a3[2] = in_xd4;
                a3[1] = in_dr4;
                *a3 = in_dr10;
                a3[-1] = in_xd6;
                a3[-2] = in_dr6;
                pdVar6 = a3 + -3;
                *pdVar6 = in_dr8;
            }
            *(u32 *)((int)pdVar6 + -4) = 0xf0000000;
            iVar9 = iVar9 + iVar7 + 1;
            a3 = (double *)((int)pdVar6 + 0x1c);
        }
        uStack_38 = uStack_38 - 1;
        if (uStack_38 == 0) {
            g_8c4aa520 = g_8c4aa520 + iVar9;
            g_8c4aa51c = g_8c4aa51c + iVar11;
            return a3;
        }
    } while (true);
}

/*
 * gfxlib_uses_vram64_2306a0  0x8c2306a0
 * area name: in the gfxlib library code range; behaviour name: its main named callee is vram64_231eac
 */
double *gfxlib_uses_vram64_2306a0(short *a0, int a1, u32 a2, double *a3) {
    bool bVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    short *psVar5;
    int iVar6;
    double *pdVar7;
    int iVar8;
    double *pdVar9;
    int iVar10;
    double *ar4_00;
    double *pdVar11;
    double *pdVar12;
    int iVar13;
    int iVar14;
    u32 *puVar15;
    u32 *puVar16;
    u32 *puVar17;
    double in_dr0;
    float fVar20;
    double dVar19;
    u64 in_dr4;
    double dVar21;
    float fVar22;
    double in_dr6;
    double dVar23;
    float fVar24;
    double in_dr10;
    double dVar25;
    u32 uVar26;
    double in_dr12;
    double dVar27;
    u32 uVar28;
    double in_dr14;
    u64 in_xd4;
    u64 in_xd8;
    u64 in_xd10;
    bool bVar29;
    char cVar30;
    char cVar31;
    u32 auStack_34[2];
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    double *pdVar18;

    cVar31 = '\0';
    cVar30 = '\0';
    uStack_20 = (int)((u64)in_dr12 >> 0x20);
    uStack_24 = SUB84(in_dr12, 0);
    uStack_28 = (int)((u64)in_dr14 >> 0x20);
    uStack_2c = SUB84(in_dr14, 0);
    puVar15 = auStack_34;
    auStack_34[0] = g_8c4aa4f0;
    uVar2 = a2 & 0x3fff;
    iVar3 = 0;
    iVar4 = 0;
    iVar6 = (a2 >> 0xe & 3) << 1;
    dVar21 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), 0x3f000000);
    do {
        iVar8 = (int)*a0;
        fVar24 = 1.0;
        if ((*puVar15 & 0x80000000) != 0) {
            fVar24 = -1.0;
        }
        pdVar9 = (double *)(a0[1] * 0x20 + a1);
        if (iVar8 < 0) {
            iVar8 = -iVar8;
            fVar24 = -fVar24;
        }
        iVar4 = iVar4 + iVar8;
        iVar8 = iVar8 + -2;
        iVar14 = 0;
        pdVar11 = (double *)(a0[4] * 0x20 + a1);
        if (cVar31 == '\0') {
            dVar25 = (double)CONCAT44(*(u32 *)(pdVar9 + 3), SUB84(in_dr10, 0));
        } else {
            dVar25 = pdVar9[3];
        }
        fVar20 = SUB84(dVar21, 0);
        if (cVar30 == '\0') {
            dVar25 =
                (double)CONCAT44((float)((u64)dVar25 >> 0x20) * fVar20 + fVar20, SUB84(dVar25, 0) * fVar20 + fVar20);
        } else {
            dVar25 = dVar25 * dVar21 * dVar21 + dVar21 + dVar21;
        }
        a0 = a0 + 7;
        if (cVar31 == '\0') {
            dVar27 = (double)CONCAT44(*(u32 *)(pdVar11 + 3), SUB84(in_dr12, 0));
        } else {
            dVar27 = pdVar11[3];
        }
        if (cVar30 == '\0') {
            dVar27 =
                (double)CONCAT44((float)((u64)dVar27 >> 0x20) * fVar20 + fVar20, SUB84(dVar27, 0) * fVar20 + fVar20);
        } else {
            dVar27 = dVar27 * dVar21 * dVar21 + dVar21 + dVar21;
        }
    LAB_8c23072e:
        in_dr12 = dVar27;
        in_dr10 = dVar25;
        if (cVar31 == '\0') {
            dVar25 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), SUB84(in_dr0, 0));
            dVar27 = (double)CONCAT44(*(u32 *)(pdVar9 + 1), SUB84(in_dr6, 0));
            iVar10 = (int)pdVar9 + 0xc;
        } else {
            dVar25 = *(double *)((int)pdVar9 + 4);
            dVar27 = *(double *)((int)pdVar9 + 0xc);
            iVar10 = (int)pdVar9 + 0x14;
        }
        if (cVar31 == '\0') {
            dVar25 = (double)CONCAT44((int)((u64)dVar25 >> 0x20), *(u32 *)((int)pdVar11 + 4));
            pdVar11 = pdVar11 + 1;
        } else {
            pdVar11 = (double *)((int)pdVar11 + 0xc);
        }
        iVar13 = *a0 * 0x20 + a1;
        if (cVar31 == '\0') {
            dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), *(u32 *)pdVar11);
            pdVar12 = (double *)((int)pdVar11 + 4);
        } else {
            pdVar12 = pdVar11 + 1;
        }
        ar4_00 = (double *)(iVar10 + -0xc);
        if (cVar30 == '\0') {
            dVar25 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) - SUB84(dVar25, 0), SUB84(dVar25, 0));
            in_dr6 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) - SUB84(dVar27, 0), SUB84(dVar27, 0));
        } else {
            dVar25 = dVar25 - dVar25;
            in_dr6 = dVar27 - dVar27;
        }
        pdVar9 = (double *)((int)pdVar12 + -0xc);
        if (cVar31 == '\0') {
            fVar20 = *(float *)(iVar13 + 4);
            dVar27 = (double)CONCAT44(*(u32 *)(iVar13 + 8), fVar24);
            iVar13 = iVar13 + 0xc;
        } else {
            fVar20 = (float)((u64) * (u64 *)(iVar13 + 4) >> 0x20);
            dVar27 = *(double *)(iVar13 + 0xc);
            iVar13 = iVar13 + 0x14;
        }
        if (cVar30 == '\0') {
            dVar19 = (double)CONCAT44(fVar20 - SUB84(dVar25, 0), 0x3f800000);
        } else {
            dVar19 = (double)CONCAT44(fVar20, 0x3f800000) - dVar25;
        }
        if (cVar31 == '\0') {
            dVar25 = (double)CONCAT44((int)((u64)dVar25 >> 0x20), *(u32 *)ar4_00);
        }
        if (cVar30 == '\0') {
            dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) - SUB84(in_dr6, 0), SUB84(dVar27, 0));
        } else {
            dVar27 = dVar27 - in_dr6;
        }
        if (cVar31 == '\0') {
            in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)pdVar9);
        }
        if (cVar30 == '\0') {
            dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) * (float)((u64)dVar25 >> 0x20), SUB84(dVar27, 0));
        } else {
            dVar27 = dVar27 * dVar25;
        }
        if (cVar31 == '\0') {
            in_dr0 = (double)CONCAT44(*(u32 *)(iVar13 + -0xc), SUB84(dVar25, 0));
        } else {
            in_dr0 = *(double *)(iVar13 + -0xc);
        }
        psVar5 = a0 + 3;
        fVar24 = SUB84(in_dr0, 0);
        fVar20 = SUB84(dVar19, 0);
        if (cVar30 == '\0') {
            bVar29 = fVar24 < fVar20;
        } else {
            bVar29 = in_dr0 < dVar19;
        }
        if (cVar31 == '\0') {
            dVar25 = (double)CONCAT44(*(u32 *)(iVar13 + 0xc), SUB84(in_dr14, 0));
        } else {
            dVar25 = *(double *)(iVar13 + 0xc);
        }
        pdVar11 = (double *)(iVar13 + -0xc);
        bVar1 = true;
        uVar26 = (u32)((u64)in_dr10 >> 0x20);
        fVar22 = (float)((u64)dVar21 >> 0x20);
        uVar28 = (u32)((u64)in_dr12 >> 0x20);
        if (bVar29) {
        LAB_8c2307e4:
            if (iVar14 != 0) {
                if (cVar31 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, fVar24);
                    dVar19 = (double)CONCAT44(*(u32 *)(pdVar12 + -1), SUB84(dVar19, 0));
                    dVar23 = (double)CONCAT44(*(u32 *)((int)pdVar12 + -4), SUB84(in_dr6, 0));
                } else {
                    in_dr0 = *pdVar9;
                    dVar19 = *(double *)((int)pdVar12 + -4);
                    dVar23 = *(double *)((int)pdVar12 + 4);
                    pdVar12 = (double *)((int)pdVar12 + 0xc);
                }
                pdVar9 = pdVar12 + -3;
                if (cVar31 == '\0') {
                    pdVar12 = (double *)((int)a3 + 0x14);
                    *(u32 *)pdVar12 = uVar28;
                } else {
                    pdVar12 = a3 + 2;
                    *pdVar12 = in_dr12;
                }
                if (cVar30 == '\0') {
                    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + fVar22, SUB84(dVar23, 0));
                } else {
                    dVar23 = dVar23 + dVar21;
                }
                if (cVar31 == '\0') {
                    pdVar12 = (double *)((int)pdVar12 + -4);
                    *(int *)pdVar12 = (int)((u64)dVar19 >> 0x20);
                } else {
                    pdVar12 = pdVar12 + -1;
                    *pdVar12 = dVar19;
                }
                if (cVar30 == '\0') {
                    bVar29 = (float)((u64)dVar23 >> 0x20) < fVar22;
                } else {
                    bVar29 = dVar23 < dVar21;
                }
                if (cVar31 == '\0') {
                    pdVar12 = (double *)((int)pdVar12 + -4);
                    *(int *)pdVar12 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    pdVar12 = pdVar12 + -1;
                    *pdVar12 = in_dr0;
                }
                in_dr6 = dVar23;
                if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
                    in_dr6 = (double)CONCAT44(fVar22, SUB84(dVar23, 0));
                }
                iVar3 = iVar3 + iVar14 + 1;
                *(u32 *)pdVar12 = 0xf0000000;
                iVar14 = 0;
                if (cVar31 == '\0') {
                    *(int *)(pdVar12 + 3) = (int)((u64)in_dr6 >> 0x20);
                } else {
                    pdVar12[3] = in_dr6;
                }
                a3 = pdVar12 + 4;
            }
        } else {
            if (cVar30 == '\0') {
                bVar29 = SUB84(in_dr6, 0) < fVar20;
                in_dr6 =
                    (double)CONCAT44((float)((u64)in_dr6 >> 0x20) * (float)((u64)dVar19 >> 0x20), SUB84(in_dr6, 0));
            } else {
                bVar29 = in_dr6 < dVar19;
                in_dr6 = in_dr6 * dVar19;
            }
            if (bVar29)
                goto LAB_8c2307e4;
            dVar19 = (double)((u64)dVar19 & 0xffffffff);
            if (cVar30 == '\0') {
                bVar29 = (float)((u64)in_dr0 >> 0x20) < fVar20;
                in_dr6 = (double)CONCAT44(
                    ((float)((u64)in_dr6 >> 0x20) - (float)((u64)dVar27 >> 0x20)) * SUB84(dVar27, 0), SUB84(in_dr6, 0));
            } else {
                bVar29 = in_dr0 < dVar19;
                in_dr6 = (in_dr6 - dVar27) * dVar27;
            }
            if (bVar29)
                goto LAB_8c2307e4;
            if (cVar30 == '\0') {
                bVar29 = (float)((u64)in_dr6 >> 0x20) < 0.0;
            } else {
                bVar29 = in_dr6 < dVar19;
            }
            bVar1 = false;
            if (!bVar29)
                goto LAB_8c2307e4;
            if (iVar14 == 0) {
                if (cVar31 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)ar4_00, fVar24);
                    dVar19 = (double)CONCAT44(*(u32 *)(iVar10 + -8), fVar20);
                    dVar23 = (double)CONCAT44(*(u32 *)(iVar10 + -4), SUB84(in_dr6, 0));
                } else {
                    in_dr0 = *ar4_00;
                    dVar19 = *(double *)(iVar10 + -4);
                    dVar23 = *(double *)(iVar10 + 4);
                    iVar10 = iVar10 + 0xc;
                }
                iVar14 = 1;
                ar4_00 = (double *)(iVar10 + -0x18);
                if (cVar31 == '\0') {
                    pdVar7 = (double *)((int)a3 + 0x14);
                    *(u32 *)pdVar7 = uVar26;
                } else {
                    pdVar7 = a3 + 2;
                    *pdVar7 = in_dr10;
                }
                if (cVar30 == '\0') {
                    dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + fVar22, SUB84(dVar23, 0));
                } else {
                    dVar23 = dVar23 + dVar21;
                }
                if (cVar31 == '\0') {
                    pdVar7 = (double *)((int)pdVar7 + -4);
                    *(int *)pdVar7 = (int)((u64)dVar19 >> 0x20);
                } else {
                    pdVar7 = pdVar7 + -1;
                    *pdVar7 = dVar19;
                }
                if (cVar30 == '\0') {
                    bVar29 = (float)((u64)dVar23 >> 0x20) < fVar22;
                } else {
                    bVar29 = dVar23 < dVar21;
                }
                if (cVar31 == '\0') {
                    pdVar7 = (double *)((int)pdVar7 + -4);
                    *(int *)pdVar7 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    pdVar7 = pdVar7 + -1;
                    *pdVar7 = in_dr0;
                }
                in_dr6 = dVar23;
                if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
                    in_dr6 = (double)CONCAT44(fVar22, SUB84(dVar23, 0));
                }
                *(u32 *)pdVar7 = 0xe0000000;
                if (cVar31 == '\0') {
                    *(int *)(pdVar7 + 3) = (int)((u64)in_dr6 >> 0x20);
                } else {
                    pdVar7[3] = in_dr6;
                }
                a3 = pdVar7 + 4;
            }
            if (cVar31 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(in_dr0, 0));
                dVar19 = (double)CONCAT44(*(u32 *)(pdVar12 + -1), SUB84(dVar19, 0));
                dVar23 = (double)CONCAT44(*(u32 *)((int)pdVar12 + -4), SUB84(in_dr6, 0));
            } else {
                in_dr0 = *pdVar9;
                dVar19 = *(double *)((int)pdVar12 + -4);
                dVar23 = *(double *)((int)pdVar12 + 4);
                pdVar12 = (double *)((int)pdVar12 + 0xc);
            }
            iVar14 = iVar14 + 1;
            pdVar9 = pdVar12 + -3;
            if (cVar31 == '\0') {
                pdVar12 = (double *)((int)a3 + 0x14);
                *(u32 *)pdVar12 = uVar28;
            } else {
                pdVar12 = a3 + 2;
                *pdVar12 = in_dr12;
            }
            if (cVar30 == '\0') {
                dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) + fVar22, SUB84(dVar23, 0));
            } else {
                dVar23 = dVar23 + dVar21;
            }
            if (cVar31 == '\0') {
                pdVar12 = (double *)((int)pdVar12 + -4);
                *(int *)pdVar12 = (int)((u64)dVar19 >> 0x20);
            } else {
                pdVar12 = pdVar12 + -1;
                *pdVar12 = dVar19;
            }
            if (cVar30 == '\0') {
                bVar29 = (float)((u64)dVar23 >> 0x20) < fVar22;
            } else {
                bVar29 = dVar23 < dVar21;
            }
            if (cVar31 == '\0') {
                pdVar12 = (double *)((int)pdVar12 + -4);
                *(int *)pdVar12 = (int)((u64)in_dr0 >> 0x20);
            } else {
                pdVar12 = pdVar12 + -1;
                *pdVar12 = in_dr0;
            }
            in_dr6 = dVar23;
            if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
                in_dr6 = (double)CONCAT44(fVar22, SUB84(dVar23, 0));
            }
            *(u32 *)pdVar12 = 0xe0000000;
            if (cVar31 == '\0') {
                *(int *)(pdVar12 + 3) = (int)((u64)in_dr6 >> 0x20);
            } else {
                pdVar12[3] = in_dr6;
            }
            a3 = pdVar12 + 4;
        }
        if (bVar1) {
            if (cVar31 == '\0') {
                dVar23 = (double)CONCAT44(*(u32 *)ar4_00, SUB84(in_dr0, 0));
            } else {
                dVar23 = *ar4_00;
            }
            dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), 0x3f800000);
            if (cVar30 == '\0') {
                bVar29 = 1.0 < (float)((u64)dVar23 >> 0x20);
            } else {
                bVar29 = dVar19 < dVar23;
            }
            if (cVar31 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar23, 0));
            } else {
                in_dr0 = *pdVar9;
            }
            if (!bVar29) {
                if (cVar30 == '\0') {
                    bVar29 = 1.0 < (float)((u64)in_dr0 >> 0x20);
                } else {
                    bVar29 = dVar19 < in_dr0;
                }
                if (cVar31 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar11, SUB84(in_dr0, 0));
                } else {
                    in_dr0 = *pdVar11;
                }
                if (!bVar29) {
                    if (cVar30 == '\0') {
                        bVar29 = 1.0 < (float)((u64)in_dr0 >> 0x20);
                    } else {
                        bVar29 = dVar19 < in_dr0;
                    }
                    if (!bVar29)
                        goto LAB_8c230818;
                }
            }
            *(u32 *)((int)puVar15 + -4) = uVar2;
            *(int *)((int)puVar15 + -8) = iVar3;
            *(int *)((int)puVar15 + -0xc) = iVar4;
            *(short **)((int)puVar15 + -0x10) = psVar5;
            *(int *)((int)puVar15 + -0x14) = a1;
            *(int *)((int)puVar15 + -0x18) = iVar6;
            if (cVar31 == '\0') {
                *(float *)((int)puVar15 + -0x1c) = fVar22;
                *(int *)((int)puVar15 + -0x20) = SUB84(dVar21, 0);
                *(float *)((int)puVar15 + -0x24) = SUB84(dVar27, 0);
                *(u32 *)((int)puVar15 + -0x28) = uVar26;
                puVar16 = (u32 *)((int)puVar15 + -0x2c);
                *(int *)((int)puVar15 + -0x2c) = SUB84(in_dr10, 0);
            } else {
                *(double *)((int)puVar15 + -0x20) = dVar21;
                *(u64 *)((int)puVar15 + -0x28) = in_xd4;
                *(u64 *)((int)puVar15 + -0x30) = in_xd8;
                *(double *)((int)puVar15 + -0x38) = in_dr10;
                puVar16 = (u32 *)((int)puVar15 + -0x40);
                *(u64 *)((int)puVar15 + -0x40) = in_xd10;
                in_xd4 = in_xd8;
            }
            a3 = (double *)vram64_231eac(ar4_00, pdVar9, pdVar11, a3);
            if (cVar31 == '\0') {
                in_dr10 = (double)(u64)*puVar16;
                dVar27 = (double)(u64)puVar16[2];
                pdVar18 = (double *)(puVar16 + 3);
                puVar17 = puVar16 + 5;
            } else {
                in_xd10 = *(u64 *)puVar16;
                in_dr10 = *(double *)(puVar16 + 2);
                in_xd8 = *(u64 *)(puVar16 + 4);
                in_xd4 = *(u64 *)(puVar16 + 6);
                pdVar18 = (double *)(puVar16 + 8);
                puVar17 = puVar16 + 10;
            }
            dVar21 = *pdVar18;
            iVar6 = *puVar17;
            a1 = puVar17[1];
            psVar5 = (short *)puVar17[2];
            iVar4 = puVar17[3];
            iVar3 = puVar17[4];
            uVar2 = puVar17[5];
            puVar15 = puVar17 + 6;
        }
    LAB_8c230818:
        fVar24 = -SUB84(dVar27, 0);
        fVar20 = SUB84(dVar21, 0);
        if (cVar30 == '\0') {
            dVar25 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) * fVar20, SUB84(dVar25, 0));
        } else {
            dVar25 = dVar25 * dVar21;
        }
        a0 = (short *)((int)psVar5 + iVar6);
        if (cVar30 == '\0') {
            dVar25 = (double)CONCAT44((int)((u64)dVar25 >> 0x20), SUB84(dVar25, 0) * fVar20);
        } else {
            dVar25 = dVar25 * dVar21;
        }
        iVar8 = iVar8 + -1;
        if (cVar30 == '\0') {
            in_dr14 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) + fVar20, SUB84(dVar25, 0) + fVar20);
        } else {
            in_dr14 = dVar25 + dVar21 + dVar21;
        }
        uVar26 = (u32)((u64)in_dr14 >> 0x20);
        if (iVar8 != 0) {
            dVar25 = in_dr12;
            dVar27 = in_dr14;
            if (cVar31 == '\0') {
                dVar25 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr10, 0));
                dVar27 = (double)CONCAT44(uVar26, SUB84(in_dr12, 0));
            }
            goto LAB_8c23072e;
        }
        if (iVar14 != 0) {
            if (cVar31 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)pdVar11, SUB84(in_dr0, 0));
                pdVar9 = (double *)(iVar13 + -8);
            } else {
                in_dr0 = *pdVar11;
                pdVar9 = (double *)(iVar13 + -4);
            }
            if (cVar31 == '\0') {
                dVar27 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar19, 0));
                dVar25 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), SUB84(in_dr6, 0));
                pdVar9 = (double *)((int)a3 + 0x14);
                *(u32 *)pdVar9 = uVar26;
            } else {
                dVar27 = *pdVar9;
                dVar25 = pdVar9[1];
                pdVar9 = a3 + 2;
                *pdVar9 = in_dr14;
            }
            fVar24 = (float)((u64)dVar21 >> 0x20);
            if (cVar30 == '\0') {
                dVar25 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) + fVar24, SUB84(dVar25, 0));
            } else {
                dVar25 = dVar25 + dVar21;
            }
            if (cVar31 == '\0') {
                pdVar9 = (double *)((int)pdVar9 + -4);
                *(int *)pdVar9 = (int)((u64)dVar27 >> 0x20);
            } else {
                pdVar9 = pdVar9 + -1;
                *pdVar9 = dVar27;
            }
            if (cVar30 == '\0') {
                bVar29 = (float)((u64)dVar25 >> 0x20) < fVar24;
            } else {
                bVar29 = dVar25 < dVar21;
            }
            if (cVar31 == '\0') {
                pdVar9 = (double *)((int)pdVar9 + -4);
                *(int *)pdVar9 = (int)((u64)in_dr0 >> 0x20);
            } else {
                pdVar9 = pdVar9 + -1;
                *pdVar9 = in_dr0;
            }
            in_dr6 = dVar25;
            if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
                in_dr6 = (double)CONCAT44(fVar24, SUB84(dVar25, 0));
            }
            iVar3 = iVar3 + iVar14 + 1;
            *(u32 *)pdVar9 = 0xf0000000;
            if (cVar31 == '\0') {
                *(int *)(pdVar9 + 3) = (int)((u64)in_dr6 >> 0x20);
            } else {
                pdVar9[3] = in_dr6;
            }
            a3 = pdVar9 + 4;
        }
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) {
            g_8c4aa520 = g_8c4aa520 + iVar3;
            g_8c4aa51c = g_8c4aa51c + iVar4;
            return a3;
        }
    } while (true);
}

/*
 * gfxlib_fill_loop_230ca4  0x8c230ca4
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 */
float *gfxlib_fill_loop_230ca4(short *a0, int a1, u32 a2, float *a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    float *pfVar5;
    int iVar6;
    float *pfVar7;
    float *pfVar8;
    float *pfVar9;
    int iVar10;
    int iVar11;
    float fVar12;
    float fVar13;
    float in_fr4;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;

    uVar1 = g_8c4aa4f0;
    uVar2 = a2 & 0x3fff;
    iVar3 = 0;
    iVar4 = 0;
    do {
        iVar6 = (int)*a0;
        fVar17 = 1.0;
        if ((uVar1 & 0x80000000) != 0) {
            fVar17 = -1.0;
        }
        pfVar7 = (float *)(a0[1] * 0x20 + a1);
        if (iVar6 < 0) {
            iVar6 = -iVar6;
            fVar17 = -fVar17;
        }
        iVar4 = iVar4 + iVar6;
        iVar6 = iVar6 + -2;
        iVar10 = 0;
        iVar11 = 0;
        pfVar8 = (float *)(a0[4] * 0x20 + a1);
        a0 = a0 + 7;
        fVar12 = pfVar7[6] * 0.5 + 0.5;
        fVar16 = pfVar8[6] * 0.5 + 0.5;
        do {
            pfVar9 = (float *)(*a0 * 0x20 + a1);
            fVar18 = pfVar9[6];
            fVar14 = ((pfVar7[2] - pfVar8[2]) * (pfVar9[1] - pfVar8[1]) -
                      (pfVar9[2] - pfVar8[2]) * (pfVar7[1] - pfVar8[1])) *
                     fVar17;
            fVar17 = -fVar17;
            if (0.0 <= fVar14) {
                if (iVar10 != 0) {
                    fVar14 = *pfVar8;
                    fVar13 = pfVar8[1];
                    fVar15 = pfVar8[2];
                    pfVar8 = pfVar8 + -3;
                    a3[5] = fVar16;
                    a3[4] = fVar13;
                    a3[3] = fVar14;
                    fVar14 = fVar15 + in_fr4;
                    if (fVar15 + in_fr4 < in_fr4) {
                        fVar14 = in_fr4;
                    }
                    iVar3 = iVar3 + iVar10 + 1;
                    a3[3] = -1.5845633e+29;
                    iVar10 = 0;
                    a3[9] = fVar14;
                    a3 = a3 + 0xb;
                }
                if (iVar11 == 0) {
                    fVar14 = *pfVar7;
                    iVar11 = 1;
                    fVar13 = pfVar7[1];
                    fVar15 = pfVar7[2];
                    a3[5] = fVar12;
                    a3[4] = fVar13;
                    a3[3] = fVar14;
                    fVar12 = -fVar15 + in_fr4;
                    if (-fVar15 + in_fr4 < in_fr4) {
                        fVar12 = in_fr4;
                    }
                    a3[3] = -3.689349e+19;
                    a3[9] = fVar12;
                    a3 = a3 + 0xb;
                }
                fVar12 = *pfVar8;
                iVar11 = iVar11 + 1;
                fVar14 = pfVar8[1];
                fVar13 = pfVar8[2];
                a3[5] = fVar16;
                a3[4] = fVar14;
                a3[3] = fVar12;
                fVar12 = -fVar13 + in_fr4;
                if (-fVar13 + in_fr4 < in_fr4) {
                    fVar12 = in_fr4;
                }
                a3[3] = -3.689349e+19;
                pfVar5 = a3 + 9;
                *pfVar5 = fVar12;
            } else {
                if (iVar11 != 0) {
                    fVar14 = *pfVar8;
                    fVar13 = pfVar8[1];
                    fVar15 = pfVar8[2];
                    pfVar8 = pfVar8 + -3;
                    a3[5] = fVar16;
                    a3[4] = fVar13;
                    a3[3] = fVar14;
                    fVar14 = -fVar15 + in_fr4;
                    if (-fVar15 + in_fr4 < in_fr4) {
                        fVar14 = in_fr4;
                    }
                    iVar3 = iVar3 + iVar11 + 1;
                    a3[3] = -1.5845633e+29;
                    iVar11 = 0;
                    a3[9] = fVar14;
                    a3 = a3 + 0xb;
                }
                if (iVar10 == 0) {
                    fVar14 = *pfVar7;
                    iVar10 = 1;
                    fVar13 = pfVar7[1];
                    fVar15 = pfVar7[2];
                    a3[5] = fVar12;
                    a3[4] = fVar13;
                    a3[3] = fVar14;
                    fVar12 = fVar15 + in_fr4;
                    if (fVar15 + in_fr4 < in_fr4) {
                        fVar12 = in_fr4;
                    }
                    a3[3] = -3.689349e+19;
                    a3[9] = fVar12;
                    a3 = a3 + 0xb;
                }
                fVar12 = *pfVar8;
                iVar10 = iVar10 + 1;
                fVar14 = pfVar8[1];
                fVar13 = pfVar8[2];
                a3[5] = fVar16;
                a3[4] = fVar14;
                a3[3] = fVar12;
                fVar12 = fVar13 + in_fr4;
                if (fVar13 + in_fr4 < in_fr4) {
                    fVar12 = in_fr4;
                }
                a3[3] = -3.689349e+19;
                pfVar5 = a3 + 9;
                *pfVar5 = fVar12;
            }
            pfVar7 = pfVar8 + -3;
            a3 = pfVar5 + 2;
            a0 = a0 + (a2 >> 0xe & 3) + 3;
            fVar14 = fVar18 * 0.5 + 0.5;
            iVar6 = iVar6 + -1;
            pfVar8 = pfVar9;
            fVar12 = fVar16;
            fVar16 = fVar14;
        } while (iVar6 != 0);
        if (iVar10 == 0) {
            if (iVar11 != 0) {
                fVar17 = *pfVar9;
                fVar12 = pfVar9[1];
                fVar16 = pfVar9[2];
                pfVar5[7] = fVar14;
                pfVar5[6] = fVar12;
                pfVar5[5] = fVar17;
                fVar17 = -fVar16 + in_fr4;
                if (-fVar16 + in_fr4 < in_fr4) {
                    fVar17 = in_fr4;
                }
                iVar3 = iVar3 + iVar11 + 1;
                pfVar5[5] = -1.5845633e+29;
                pfVar5[0xb] = fVar17;
                a3 = pfVar5 + 0xd;
            }
        } else {
            fVar17 = *pfVar9;
            fVar12 = pfVar9[1];
            fVar16 = pfVar9[2];
            pfVar5[7] = fVar14;
            pfVar5[6] = fVar12;
            pfVar5[5] = fVar17;
            fVar17 = fVar16 + in_fr4;
            if (fVar16 + in_fr4 < in_fr4) {
                fVar17 = in_fr4;
            }
            iVar3 = iVar3 + iVar10 + 1;
            pfVar5[5] = -1.5845633e+29;
            pfVar5[0xb] = fVar17;
            a3 = pfVar5 + 0xd;
        }
        uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    g_8c4aa520 = g_8c4aa520 + iVar3;
    g_8c4aa51c = g_8c4aa51c + iVar4;
    return a3;
}

/*
 * gfxlib_uses_vram64_230f70  0x8c230f70
 * area name: in the gfxlib library code range; behaviour name: its main named callee is vram64_2319cc
 */
double *gfxlib_uses_vram64_230f70(short *a0, int a1, u32 a2, double *a3) {
    u32 uVar1;
    double *pdVar2;
    short *psVar3;
    double *pdVar4;
    double *pdVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    double *pdVar10;
    int iVar11;
    double *pdVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    u32 *puVar16;
    u32 *puVar17;
    u32 *puVar19;
    double in_dr0;
    float fVar20;
    float fVar21;
    double in_dr2;
    float fVar25;
    double dVar22;
    u64 uVar23;
    float fVar26;
    double dVar24;
    float fVar27;
    double in_dr4;
    u32 uVar30;
    double dVar28;
    double dVar29;
    double in_dr6;
    u64 uVar31;
    double dVar32;
    u32 uVar34;
    double dVar33;
    u32 uVar36;
    u64 in_dr8;
    double dVar37;
    double in_dr10;
    u32 uVar39;
    double dVar38;
    double in_dr12;
    double in_dr14;
    double in_xd2;
    double in_xd4;
    double dVar40;
    double in_xd6;
    double in_xd8;
    u64 in_xd10;
    double in_xd12;
    double in_xd14;
    bool bVar41;
    u32 in_PR;
    char cVar42;
    char cVar43;
    double *pdStack_58;
    short *psStack_50;
    u32 uStack_44;
    u32 uStack_40;
    u32 uStack_3c;
    int iStack_38;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_20;
    double *pdVar18;
    u32 uVar35;

    cVar43 = '\0';
    cVar42 = '\0';
    uStack_20 = SUB84(in_dr14, 0);
    uVar36 = (u32)((u64)in_dr14 >> 0x20);
    uStack_28 = SUB84(in_dr12, 0);
    uVar35 = (u32)((u64)in_dr12 >> 0x20);
    uVar30 = (u32)((u64)in_dr4 >> 0x20);
    if ((g_8c4aa4f0 & 0x20000) == 0) {
        uStack_28 = uVar36;
        uStack_2c = SUB84(in_dr14, 0);
        puVar19 = &uStack_34;
        uStack_34 = g_8c4aa4f0;
        uVar1 = a2 & 0x3fff;
        iVar14 = 0;
        iVar15 = 0;
        iVar9 = (a2 >> 0xe & 3) << 1;
        dVar22 = (double)CONCAT44(uVar30, 0x3f000000);
        uStack_20 = uVar35;
        do {
            iVar7 = (int)*a0;
            fVar25 = 1.0;
            if ((*puVar19 & 0x80000000) != 0) {
                fVar25 = -1.0;
            }
            pdVar2 = (double *)(a0[1] * 0x20 + a1);
            if (iVar7 < 0) {
                iVar7 = -iVar7;
                fVar25 = -fVar25;
            }
            iVar15 = iVar15 + iVar7;
            iVar7 = iVar7 + -2;
            iVar13 = 0;
            iVar6 = 0;
            pdVar12 = (double *)(a0[4] * 0x20 + a1);
            if (cVar43 == '\0') {
                dVar38 = (double)CONCAT44(*(u32 *)(pdVar2 + 3), SUB84(in_dr10, 0));
            } else {
                dVar38 = pdVar2[3];
            }
            fVar20 = SUB84(dVar22, 0);
            if (cVar42 == '\0') {
                dVar38 = (double)CONCAT44((float)((u64)dVar38 >> 0x20) * fVar20 + fVar20,
                                          SUB84(dVar38, 0) * fVar20 + fVar20);
            } else {
                dVar38 = dVar38 * dVar22 * dVar22 + dVar22 + dVar22;
            }
            a0 = a0 + 7;
            if (cVar43 == '\0') {
                dVar32 = (double)CONCAT44(*(u32 *)(pdVar12 + 3), SUB84(in_dr12, 0));
            } else {
                dVar32 = pdVar12[3];
            }
            if (cVar42 == '\0') {
                dVar32 = (double)CONCAT44((float)((u64)dVar32 >> 0x20) * fVar20 + fVar20,
                                          SUB84(dVar32, 0) * fVar20 + fVar20);
            } else {
                dVar32 = dVar32 * dVar22 * dVar22 + dVar22 + dVar22;
            }
            do {
                if (cVar43 == '\0') {
                    dVar40 = (double)CONCAT44(*(u32 *)((int)pdVar2 + 4), SUB84(in_dr0, 0));
                    dVar29 = (double)CONCAT44(*(u32 *)(pdVar2 + 1), SUB84(in_dr6, 0));
                    iVar8 = (int)pdVar2 + 0xc;
                } else {
                    dVar40 = *(double *)((int)pdVar2 + 4);
                    dVar29 = *(double *)((int)pdVar2 + 0xc);
                    iVar8 = (int)pdVar2 + 0x14;
                }
                if (cVar43 == '\0') {
                    dVar40 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), *(u32 *)((int)pdVar12 + 4));
                    pdVar12 = pdVar12 + 1;
                } else {
                    pdVar12 = (double *)((int)pdVar12 + 0xc);
                }
                iVar11 = *a0 * 0x20 + a1;
                if (cVar43 == '\0') {
                    dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)pdVar12);
                    pdVar10 = (double *)((int)pdVar12 + 4);
                } else {
                    pdVar10 = pdVar12 + 1;
                }
                pdVar4 = (double *)(iVar8 + -0xc);
                if (cVar42 == '\0') {
                    dVar40 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) - SUB84(dVar40, 0), SUB84(dVar40, 0));
                    dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) - SUB84(dVar29, 0), SUB84(dVar29, 0));
                } else {
                    dVar40 = dVar40 - dVar40;
                    dVar29 = dVar29 - dVar29;
                }
                pdVar2 = (double *)((int)pdVar10 + -0xc);
                if (cVar43 == '\0') {
                    dVar28 = (double)CONCAT44(*(u32 *)(iVar11 + 4), SUB84(in_dr2, 0));
                    dVar37 = (double)CONCAT44(*(u32 *)(iVar11 + 8), fVar25);
                    iVar11 = iVar11 + 0xc;
                } else {
                    dVar28 = *(double *)(iVar11 + 4);
                    dVar37 = *(double *)(iVar11 + 0xc);
                    iVar11 = iVar11 + 0x14;
                }
                if (cVar42 == '\0') {
                    fVar25 = (float)((u64)dVar28 >> 0x20) - SUB84(dVar40, 0);
                } else {
                    fVar25 = (float)((u64)(dVar28 - dVar40) >> 0x20);
                }
                psVar3 = a0 + 3;
                if (cVar43 == '\0') {
                    dVar28 = (double)CONCAT44(*(u32 *)(iVar11 + 0xc), SUB84(in_dr14, 0));
                } else {
                    dVar28 = *(double *)(iVar11 + 0xc);
                }
                pdVar12 = (double *)(iVar11 + -0xc);
                if (cVar42 == '\0') {
                    dVar37 = (double)CONCAT44((float)((u64)dVar37 >> 0x20) - SUB84(dVar29, 0), SUB84(dVar37, 0));
                } else {
                    dVar37 = dVar37 - dVar29;
                }
                dVar24 = (double)CONCAT44(fVar25, 0x3f800000);
                if (cVar42 == '\0') {
                    dVar37 =
                        (double)CONCAT44((float)((u64)dVar37 >> 0x20) * (float)((u64)dVar40 >> 0x20), SUB84(dVar37, 0));
                } else {
                    dVar37 = dVar37 * dVar40;
                }
                if (cVar43 == '\0') {
                    dVar40 = (double)CONCAT44(*(u32 *)pdVar4, SUB84(dVar40, 0));
                } else {
                    dVar40 = *pdVar4;
                }
                if (cVar42 == '\0') {
                    in_dr6 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * fVar25, SUB84(dVar29, 0));
                    bVar41 = (float)((u64)dVar40 >> 0x20) < 1.0;
                } else {
                    in_dr6 = dVar29 * dVar24;
                    bVar41 = dVar40 < dVar24;
                }
                if (cVar43 == '\0') {
                    dVar40 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar40, 0));
                } else {
                    dVar40 = *pdVar2;
                }
                fVar25 = (float)((u64)dVar22 >> 0x20);
                uVar36 = (u32)((u64)dVar32 >> 0x20);
                uVar35 = (u32)((u64)dVar38 >> 0x20);
                if (bVar41) {
                LAB_8c23179c:
                    if (iVar6 == 0) {
                        if (iVar13 != 0) {
                            if (cVar43 == '\0') {
                                dVar40 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar40, 0));
                                dVar24 = (double)CONCAT44(*(u32 *)(pdVar10 + -1), 0x3f800000);
                                dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -4), SUB84(in_dr6, 0));
                            } else {
                                dVar40 = *pdVar2;
                                dVar24 = *(double *)((int)pdVar10 + -4);
                                dVar29 = *(double *)((int)pdVar10 + 4);
                                pdVar10 = (double *)((int)pdVar10 + 0xc);
                            }
                            pdVar2 = pdVar10 + -3;
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)a3 + 0x14);
                                *(u32 *)pdVar10 = uVar36;
                            } else {
                                pdVar10 = a3 + 2;
                                *pdVar10 = dVar32;
                            }
                            if (cVar42 == '\0') {
                                dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) + fVar25, SUB84(dVar29, 0));
                            } else {
                                dVar29 = dVar29 + dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar24 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar24;
                            }
                            if (cVar42 == '\0') {
                                bVar41 = (float)((u64)dVar29 >> 0x20) < fVar25;
                            } else {
                                bVar41 = dVar29 < dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar40 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar40;
                            }
                            in_dr6 = dVar29;
                            if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                                in_dr6 = (double)CONCAT44(fVar25, SUB84(dVar29, 0));
                            }
                            iVar14 = iVar14 + iVar13 + 1;
                            *(u32 *)pdVar10 = 0xf0000000;
                            iVar13 = 0;
                            if (cVar43 == '\0') {
                                *(int *)(pdVar10 + 3) = (int)((u64)in_dr6 >> 0x20);
                            } else {
                                pdVar10[3] = in_dr6;
                            }
                            a3 = pdVar10 + 4;
                        }
                    } else {
                        if (cVar43 == '\0') {
                            dVar40 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar40, 0));
                            dVar24 = (double)CONCAT44(*(u32 *)(pdVar10 + -1), 0x3f800000);
                            dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -4), SUB84(in_dr6, 0));
                        } else {
                            dVar40 = *pdVar2;
                            dVar24 = *(double *)((int)pdVar10 + -4);
                            dVar29 = *(double *)((int)pdVar10 + 4);
                            pdVar10 = (double *)((int)pdVar10 + 0xc);
                        }
                        pdVar2 = pdVar10 + -3;
                        if (cVar42 == '\0') {
                            dVar29 = (double)CONCAT44(-(float)((u64)dVar29 >> 0x20), SUB84(dVar29, 0));
                        } else {
                            dVar29 = -dVar29;
                        }
                        if (cVar43 == '\0') {
                            pdVar10 = (double *)((int)a3 + 0x14);
                            *(u32 *)pdVar10 = uVar36;
                        } else {
                            pdVar10 = a3 + 2;
                            *pdVar10 = dVar32;
                        }
                        if (cVar42 == '\0') {
                            dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) + fVar25, SUB84(dVar29, 0));
                        } else {
                            dVar29 = dVar29 + dVar22;
                        }
                        if (cVar43 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar24 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar24;
                        }
                        if (cVar42 == '\0') {
                            bVar41 = (float)((u64)dVar29 >> 0x20) < fVar25;
                        } else {
                            bVar41 = dVar29 < dVar22;
                        }
                        if (cVar43 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar40 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar40;
                        }
                        dVar33 = dVar29;
                        if ((bVar41) && (dVar33 = dVar22, cVar43 == '\0')) {
                            dVar33 = (double)CONCAT44(fVar25, SUB84(dVar29, 0));
                        }
                        uVar36 = (u32)((u64)dVar33 >> 0x20);
                        in_dr6 = (double)CONCAT44(uVar36, -SUB84(dVar33, 0));
                        iVar14 = iVar14 + iVar6 + 1;
                        *(u32 *)pdVar10 = 0xf0000000;
                        iVar6 = 0;
                        if (cVar43 == '\0') {
                            *(u32 *)(pdVar10 + 3) = uVar36;
                        } else {
                            pdVar10[3] = in_dr6;
                        }
                        a3 = pdVar10 + 4;
                    }
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(*(u32 *)pdVar4, SUB84(dVar40, 0));
                    } else {
                        dVar40 = *pdVar4;
                    }
                    in_dr2 = (double)CONCAT44(0x3f800000, SUB84(dVar24, 0));
                    if (cVar42 == '\0') {
                        bVar41 = 1.0 < (float)((u64)dVar40 >> 0x20);
                    } else {
                        bVar41 = in_dr2 < dVar40;
                    }
                    if (cVar43 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar40, 0));
                    } else {
                        in_dr0 = *pdVar2;
                    }
                    if (!bVar41) {
                        if (cVar42 == '\0') {
                            bVar41 = 1.0 < (float)((u64)in_dr0 >> 0x20);
                        } else {
                            bVar41 = in_dr2 < in_dr0;
                        }
                        if (cVar43 == '\0') {
                            in_dr0 = (double)CONCAT44(*(u32 *)pdVar12, SUB84(in_dr0, 0));
                        } else {
                            in_dr0 = *pdVar12;
                        }
                        if (!bVar41) {
                            if (cVar42 == '\0') {
                                bVar41 = (float)((u64)in_dr0 >> 0x20) < 1.0;
                            } else {
                                bVar41 = in_dr0 < in_dr2;
                            }
                            if (bVar41)
                                goto LAB_8c2318f0;
                        }
                    }
                    *(u32 *)((int)puVar19 + -4) = uVar1;
                    *(int *)((int)puVar19 + -8) = iVar14;
                    *(int *)((int)puVar19 + -0xc) = iVar15;
                    *(short **)((int)puVar19 + -0x10) = psVar3;
                    *(int *)((int)puVar19 + -0x14) = a1;
                    *(int *)((int)puVar19 + -0x18) = iVar9;
                    if (cVar43 == '\0') {
                        *(float *)((int)puVar19 + -0x1c) = fVar25;
                        *(int *)((int)puVar19 + -0x20) = SUB84(dVar22, 0);
                        *(float *)((int)puVar19 + -0x24) = SUB84(dVar37, 0);
                        *(u32 *)((int)puVar19 + -0x28) = uVar35;
                        puVar16 = (u32 *)((int)puVar19 + -0x2c);
                        *(int *)((int)puVar19 + -0x2c) = SUB84(dVar38, 0);
                    } else {
                        *(double *)((int)puVar19 + -0x20) = dVar22;
                        *(double *)((int)puVar19 + -0x28) = in_xd4;
                        *(double *)((int)puVar19 + -0x30) = in_xd8;
                        *(double *)((int)puVar19 + -0x38) = dVar38;
                        puVar16 = (u32 *)((int)puVar19 + -0x40);
                        *(u64 *)((int)puVar19 + -0x40) = in_xd10;
                        in_xd4 = in_xd8;
                    }
                    a3 = (double *)vram64_2319cc(pdVar4, pdVar2, pdVar12, a3);
                    if (cVar43 == '\0') {
                        dVar38 = (double)(u64)*puVar16;
                        dVar37 = (double)(u64)puVar16[2];
                        pdVar18 = (double *)(puVar16 + 3);
                        puVar17 = puVar16 + 5;
                    } else {
                        in_xd10 = *(u64 *)puVar16;
                        dVar38 = *(double *)(puVar16 + 2);
                        in_xd8 = *(double *)(puVar16 + 4);
                        in_xd4 = *(double *)(puVar16 + 6);
                        pdVar18 = (double *)(puVar16 + 8);
                        puVar17 = puVar16 + 10;
                    }
                    dVar22 = *pdVar18;
                    iVar9 = *puVar17;
                    a1 = puVar17[1];
                    psVar3 = (short *)puVar17[2];
                    iVar15 = puVar17[3];
                    iVar14 = puVar17[4];
                    uVar1 = puVar17[5];
                    puVar19 = puVar17 + 6;
                    if (cVar42 == '\0') {
                        puVar19 = puVar17 + 6;
                    }
                } else {
                    if (cVar42 == '\0') {
                        bVar41 = (float)((u64)dVar40 >> 0x20) < 1.0;
                    } else {
                        bVar41 = dVar40 < dVar24;
                    }
                    if (cVar43 == '\0') {
                        dVar40 = (double)CONCAT44(*(u32 *)pdVar12, SUB84(dVar40, 0));
                    } else {
                        dVar40 = *pdVar12;
                    }
                    if (bVar41)
                        goto LAB_8c23179c;
                    if (cVar42 == '\0') {
                        bVar41 = (float)((u64)dVar40 >> 0x20) < 1.0;
                        fVar20 = (float)((u64)in_dr6 >> 0x20) - (float)((u64)dVar37 >> 0x20);
                    } else {
                        bVar41 = dVar40 < dVar24;
                        fVar20 = (float)((u64)(in_dr6 - dVar37) >> 0x20);
                    }
                    if (cVar42 == '\0') {
                        in_dr6 = (double)((u64)(u32)(fVar20 * SUB84(dVar37, 0)) << 0x20);
                    } else {
                        in_dr6 = (double)((u64)(u32)fVar20 << 0x20) * dVar37;
                    }
                    if (bVar41)
                        goto LAB_8c23179c;
                    fVar20 = SUB84(in_dr6, 0);
                    if (cVar42 != '\0' || fVar20 <= (float)((u64)in_dr6 >> 0x20)) {
                        if (iVar13 != 0) {
                            if (cVar43 == '\0') {
                                dVar40 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar40, 0));
                                dVar24 = (double)CONCAT44(*(u32 *)(pdVar10 + -1), 0x3f800000);
                                dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -4), fVar20);
                            } else {
                                dVar40 = *pdVar2;
                                dVar24 = *(double *)((int)pdVar10 + -4);
                                dVar29 = *(double *)((int)pdVar10 + 4);
                                pdVar10 = (double *)((int)pdVar10 + 0xc);
                            }
                            pdVar2 = pdVar10 + -3;
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)a3 + 0x14);
                                *(u32 *)pdVar10 = uVar36;
                            } else {
                                pdVar10 = a3 + 2;
                                *pdVar10 = dVar32;
                            }
                            if (cVar42 == '\0') {
                                dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) + fVar25, SUB84(dVar29, 0));
                            } else {
                                dVar29 = dVar29 + dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar24 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar24;
                            }
                            if (cVar42 == '\0') {
                                bVar41 = (float)((u64)dVar29 >> 0x20) < fVar25;
                            } else {
                                bVar41 = dVar29 < dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar40 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar40;
                            }
                            in_dr6 = dVar29;
                            if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                                in_dr6 = (double)CONCAT44(fVar25, SUB84(dVar29, 0));
                            }
                            iVar14 = iVar14 + iVar13 + 1;
                            *(u32 *)pdVar10 = 0xf0000000;
                            iVar13 = 0;
                            if (cVar43 == '\0') {
                                *(int *)(pdVar10 + 3) = (int)((u64)in_dr6 >> 0x20);
                            } else {
                                pdVar10[3] = in_dr6;
                            }
                            a3 = pdVar10 + 4;
                        }
                        if (iVar6 == 0) {
                            if (cVar43 == '\0') {
                                dVar40 = (double)CONCAT44(*(u32 *)pdVar4, SUB84(dVar40, 0));
                                dVar24 = (double)CONCAT44(*(u32 *)(iVar8 + -8), SUB84(dVar24, 0));
                                dVar29 = (double)CONCAT44(*(u32 *)(iVar8 + -4), SUB84(in_dr6, 0));
                            } else {
                                dVar40 = *pdVar4;
                                dVar24 = *(double *)(iVar8 + -4);
                                dVar29 = *(double *)(iVar8 + 4);
                            }
                            iVar6 = 1;
                            if (cVar42 == '\0') {
                                dVar29 = (double)CONCAT44(-(float)((u64)dVar29 >> 0x20), SUB84(dVar29, 0));
                            } else {
                                dVar29 = -dVar29;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)a3 + 0x14);
                                *(u32 *)pdVar10 = uVar35;
                            } else {
                                pdVar10 = a3 + 2;
                                *pdVar10 = dVar38;
                            }
                            if (cVar42 == '\0') {
                                dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) + fVar25, SUB84(dVar29, 0));
                            } else {
                                dVar29 = dVar29 + dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar24 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar24;
                            }
                            if (cVar42 == '\0') {
                                bVar41 = (float)((u64)dVar29 >> 0x20) < fVar25;
                            } else {
                                bVar41 = dVar29 < dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar40 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar40;
                            }
                            dVar33 = dVar29;
                            if ((bVar41) && (dVar33 = dVar22, cVar43 == '\0')) {
                                dVar33 = (double)CONCAT44(fVar25, SUB84(dVar29, 0));
                            }
                            uVar35 = (u32)((u64)dVar33 >> 0x20);
                            in_dr6 = (double)CONCAT44(uVar35, -SUB84(dVar33, 0));
                            *(u32 *)pdVar10 = 0xe0000000;
                            if (cVar43 == '\0') {
                                *(u32 *)(pdVar10 + 3) = uVar35;
                            } else {
                                pdVar10[3] = in_dr6;
                            }
                            a3 = pdVar10 + 4;
                        }
                        if (cVar43 == '\0') {
                            in_dr0 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar40, 0));
                            in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar2 + 4), SUB84(dVar24, 0));
                            dVar40 = (double)CONCAT44(*(u32 *)(pdVar2 + 1), SUB84(in_dr6, 0));
                            pdVar2 = (double *)((int)pdVar2 + 0xc);
                        } else {
                            in_dr0 = *pdVar2;
                            in_dr2 = pdVar2[1];
                            dVar40 = pdVar2[2];
                            pdVar2 = pdVar2 + 3;
                        }
                        iVar6 = iVar6 + 1;
                        pdVar2 = pdVar2 + -3;
                        if (cVar42 == '\0') {
                            dVar40 = (double)CONCAT44(-(float)((u64)dVar40 >> 0x20), SUB84(dVar40, 0));
                        } else {
                            dVar40 = -dVar40;
                        }
                        if (cVar43 == '\0') {
                            pdVar10 = (double *)((int)a3 + 0x14);
                            *(u32 *)pdVar10 = uVar36;
                        } else {
                            pdVar10 = a3 + 2;
                            *pdVar10 = dVar32;
                        }
                        if (cVar42 == '\0') {
                            dVar40 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) + fVar25, SUB84(dVar40, 0));
                        } else {
                            dVar40 = dVar40 + dVar22;
                        }
                        if (cVar43 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)in_dr2 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = in_dr2;
                        }
                        if (cVar42 == '\0') {
                            bVar41 = (float)((u64)dVar40 >> 0x20) < fVar25;
                        } else {
                            bVar41 = dVar40 < dVar22;
                        }
                        if (cVar43 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)in_dr0 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = in_dr0;
                        }
                        dVar29 = dVar40;
                        if ((bVar41) && (dVar29 = dVar22, cVar43 == '\0')) {
                            dVar29 = (double)CONCAT44(fVar25, SUB84(dVar40, 0));
                        }
                        uVar35 = (u32)((u64)dVar29 >> 0x20);
                        in_dr6 = (double)CONCAT44(uVar35, -SUB84(dVar29, 0));
                        *(u32 *)pdVar10 = 0xe0000000;
                        if (cVar43 == '\0') {
                            *(u32 *)(pdVar10 + 3) = uVar35;
                        } else {
                            pdVar10[3] = in_dr6;
                        }
                        a3 = pdVar10 + 4;
                    } else {
                        if (iVar6 != 0) {
                            if (cVar43 == '\0') {
                                dVar40 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar40, 0));
                                dVar24 = (double)CONCAT44(*(u32 *)(pdVar10 + -1), 0x3f800000);
                                dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -4), fVar20);
                            } else {
                                dVar40 = *pdVar2;
                                dVar24 = *(double *)((int)pdVar10 + -4);
                                dVar29 = *(double *)((int)pdVar10 + 4);
                                pdVar10 = (double *)((int)pdVar10 + 0xc);
                            }
                            pdVar2 = pdVar10 + -3;
                            if (cVar42 == '\0') {
                                dVar29 = (double)CONCAT44(-(float)((u64)dVar29 >> 0x20), SUB84(dVar29, 0));
                            } else {
                                dVar29 = -dVar29;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)a3 + 0x14);
                                *(u32 *)pdVar10 = uVar36;
                            } else {
                                pdVar10 = a3 + 2;
                                *pdVar10 = dVar32;
                            }
                            if (cVar42 == '\0') {
                                dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) + fVar25, SUB84(dVar29, 0));
                            } else {
                                dVar29 = dVar29 + dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar24 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar24;
                            }
                            if (cVar42 == '\0') {
                                bVar41 = (float)((u64)dVar29 >> 0x20) < fVar25;
                            } else {
                                bVar41 = dVar29 < dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar40 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar40;
                            }
                            dVar33 = dVar29;
                            if ((bVar41) && (dVar33 = dVar22, cVar43 == '\0')) {
                                dVar33 = (double)CONCAT44(fVar25, SUB84(dVar29, 0));
                            }
                            uVar34 = (u32)((u64)dVar33 >> 0x20);
                            in_dr6 = (double)CONCAT44(uVar34, -SUB84(dVar33, 0));
                            iVar14 = iVar14 + iVar6 + 1;
                            *(u32 *)pdVar10 = 0xf0000000;
                            iVar6 = 0;
                            if (cVar43 == '\0') {
                                *(u32 *)(pdVar10 + 3) = uVar34;
                            } else {
                                pdVar10[3] = in_dr6;
                            }
                            a3 = pdVar10 + 4;
                        }
                        if (iVar13 == 0) {
                            if (cVar43 == '\0') {
                                dVar40 = (double)CONCAT44(*(u32 *)pdVar4, SUB84(dVar40, 0));
                                dVar24 = (double)CONCAT44(*(u32 *)(iVar8 + -8), SUB84(dVar24, 0));
                                dVar29 = (double)CONCAT44(*(u32 *)(iVar8 + -4), SUB84(in_dr6, 0));
                                pdVar10 = (double *)((int)a3 + 0x14);
                                *(u32 *)pdVar10 = uVar35;
                            } else {
                                dVar40 = *pdVar4;
                                dVar24 = *(double *)(iVar8 + -4);
                                dVar29 = *(double *)(iVar8 + 4);
                                pdVar10 = a3 + 2;
                                *pdVar10 = dVar38;
                            }
                            iVar13 = 1;
                            if (cVar42 == '\0') {
                                dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) + fVar25, SUB84(dVar29, 0));
                            } else {
                                dVar29 = dVar29 + dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar24 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar24;
                            }
                            if (cVar42 == '\0') {
                                bVar41 = (float)((u64)dVar29 >> 0x20) < fVar25;
                            } else {
                                bVar41 = dVar29 < dVar22;
                            }
                            if (cVar43 == '\0') {
                                pdVar10 = (double *)((int)pdVar10 + -4);
                                *(int *)pdVar10 = (int)((u64)dVar40 >> 0x20);
                            } else {
                                pdVar10 = pdVar10 + -1;
                                *pdVar10 = dVar40;
                            }
                            in_dr6 = dVar29;
                            if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                                in_dr6 = (double)CONCAT44(fVar25, SUB84(dVar29, 0));
                            }
                            *(u32 *)pdVar10 = 0xe0000000;
                            if (cVar43 == '\0') {
                                *(int *)(pdVar10 + 3) = (int)((u64)in_dr6 >> 0x20);
                            } else {
                                pdVar10[3] = in_dr6;
                            }
                            a3 = pdVar10 + 4;
                        }
                        if (cVar43 == '\0') {
                            in_dr0 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar40, 0));
                            in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar2 + 4), SUB84(dVar24, 0));
                            dVar40 = (double)CONCAT44(*(u32 *)(pdVar2 + 1), SUB84(in_dr6, 0));
                            pdVar2 = (double *)((int)pdVar2 + 0xc);
                        } else {
                            in_dr0 = *pdVar2;
                            in_dr2 = pdVar2[1];
                            dVar40 = pdVar2[2];
                            pdVar2 = pdVar2 + 3;
                        }
                        iVar13 = iVar13 + 1;
                        pdVar2 = pdVar2 + -3;
                        if (cVar43 == '\0') {
                            pdVar10 = (double *)((int)a3 + 0x14);
                            *(u32 *)pdVar10 = uVar36;
                        } else {
                            pdVar10 = a3 + 2;
                            *pdVar10 = dVar32;
                        }
                        if (cVar42 == '\0') {
                            dVar40 = (double)CONCAT44((float)((u64)dVar40 >> 0x20) + fVar25, SUB84(dVar40, 0));
                        } else {
                            dVar40 = dVar40 + dVar22;
                        }
                        if (cVar43 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)in_dr2 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = in_dr2;
                        }
                        if (cVar42 == '\0') {
                            bVar41 = (float)((u64)dVar40 >> 0x20) < fVar25;
                        } else {
                            bVar41 = dVar40 < dVar22;
                        }
                        if (cVar43 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)in_dr0 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = in_dr0;
                        }
                        in_dr6 = dVar40;
                        if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                            in_dr6 = (double)CONCAT44(fVar25, SUB84(dVar40, 0));
                        }
                        *(u32 *)pdVar10 = 0xe0000000;
                        if (cVar43 == '\0') {
                            *(int *)(pdVar10 + 3) = (int)((u64)in_dr6 >> 0x20);
                        } else {
                            pdVar10[3] = in_dr6;
                        }
                        a3 = pdVar10 + 4;
                    }
                }
            LAB_8c2318f0:
                fVar25 = SUB84(dVar22, 0);
                if (cVar42 == '\0') {
                    dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * fVar25, SUB84(dVar28, 0));
                } else {
                    dVar28 = dVar28 * dVar22;
                }
                a0 = (short *)((int)psVar3 + iVar9);
                if (cVar42 == '\0') {
                    dVar40 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) + fVar25, SUB84(dVar28, 0) * fVar25);
                } else {
                    dVar40 = dVar28 * dVar22 + dVar22;
                }
                iVar7 = iVar7 + -1;
                if (cVar42 == '\0') {
                    in_dr14 = (double)CONCAT44((int)((u64)dVar40 >> 0x20), SUB84(dVar40, 0) + fVar25);
                } else {
                    in_dr14 = dVar40 + dVar22;
                }
                in_dr10 = dVar32;
                if (cVar43 == '\0') {
                    in_dr10 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), SUB84(dVar38, 0));
                }
                fVar25 = -SUB84(dVar37, 0);
                uVar35 = (u32)((u64)in_dr14 >> 0x20);
                in_dr12 = in_dr14;
                if (cVar43 == '\0') {
                    in_dr12 = (double)CONCAT44(uVar35, SUB84(dVar32, 0));
                }
                dVar38 = in_dr10;
                dVar32 = in_dr12;
            } while (iVar7 != 0);
            fVar25 = (float)((u64)dVar22 >> 0x20);
            if (iVar13 == 0) {
                if (iVar6 != 0) {
                    if (cVar43 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar12, SUB84(in_dr0, 0));
                        pdVar2 = (double *)(iVar11 + -8);
                    } else {
                        in_dr0 = *pdVar12;
                        pdVar2 = (double *)(iVar11 + -4);
                    }
                    if (cVar43 == '\0') {
                        in_dr2 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(in_dr2, 0));
                        dVar38 = (double)CONCAT44(*(u32 *)((int)pdVar2 + 4), SUB84(in_dr6, 0));
                    } else {
                        in_dr2 = *pdVar2;
                        dVar38 = pdVar2[1];
                    }
                    if (cVar42 == '\0') {
                        dVar38 = (double)CONCAT44(-(float)((u64)dVar38 >> 0x20), SUB84(dVar38, 0));
                    } else {
                        dVar38 = -dVar38;
                    }
                    if (cVar43 == '\0') {
                        pdVar2 = (double *)((int)a3 + 0x14);
                        *(u32 *)pdVar2 = uVar35;
                    } else {
                        pdVar2 = a3 + 2;
                        *pdVar2 = in_dr14;
                    }
                    if (cVar42 == '\0') {
                        dVar38 = (double)CONCAT44((float)((u64)dVar38 >> 0x20) + fVar25, SUB84(dVar38, 0));
                    } else {
                        dVar38 = dVar38 + dVar22;
                    }
                    if (cVar43 == '\0') {
                        pdVar2 = (double *)((int)pdVar2 + -4);
                        *(int *)pdVar2 = (int)((u64)in_dr2 >> 0x20);
                    } else {
                        pdVar2 = pdVar2 + -1;
                        *pdVar2 = in_dr2;
                    }
                    if (cVar42 == '\0') {
                        bVar41 = (float)((u64)dVar38 >> 0x20) < fVar25;
                    } else {
                        bVar41 = dVar38 < dVar22;
                    }
                    if (cVar43 == '\0') {
                        pdVar2 = (double *)((int)pdVar2 + -4);
                        *(int *)pdVar2 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        pdVar2 = pdVar2 + -1;
                        *pdVar2 = in_dr0;
                    }
                    dVar32 = dVar38;
                    if ((bVar41) && (dVar32 = dVar22, cVar43 == '\0')) {
                        dVar32 = (double)CONCAT44(fVar25, SUB84(dVar38, 0));
                    }
                    uVar35 = (u32)((u64)dVar32 >> 0x20);
                    in_dr6 = (double)CONCAT44(uVar35, -SUB84(dVar32, 0));
                    iVar14 = iVar14 + iVar6 + 1;
                    *(u32 *)pdVar2 = 0xf0000000;
                    if (cVar43 == '\0') {
                        *(u32 *)(pdVar2 + 3) = uVar35;
                    } else {
                        pdVar2[3] = in_dr6;
                    }
                    a3 = pdVar2 + 4;
                }
            } else {
                if (cVar43 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar12, SUB84(in_dr0, 0));
                    pdVar2 = (double *)(iVar11 + -8);
                } else {
                    in_dr0 = *pdVar12;
                    pdVar2 = (double *)(iVar11 + -4);
                }
                if (cVar43 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(in_dr2, 0));
                    dVar38 = (double)CONCAT44(*(u32 *)((int)pdVar2 + 4), SUB84(in_dr6, 0));
                    pdVar2 = (double *)((int)a3 + 0x14);
                    *(u32 *)pdVar2 = uVar35;
                } else {
                    in_dr2 = *pdVar2;
                    dVar38 = pdVar2[1];
                    pdVar2 = a3 + 2;
                    *pdVar2 = in_dr14;
                }
                if (cVar42 == '\0') {
                    dVar38 = (double)CONCAT44((float)((u64)dVar38 >> 0x20) + fVar25, SUB84(dVar38, 0));
                } else {
                    dVar38 = dVar38 + dVar22;
                }
                if (cVar43 == '\0') {
                    pdVar2 = (double *)((int)pdVar2 + -4);
                    *(int *)pdVar2 = (int)((u64)in_dr2 >> 0x20);
                } else {
                    pdVar2 = pdVar2 + -1;
                    *pdVar2 = in_dr2;
                }
                if (cVar42 == '\0') {
                    bVar41 = (float)((u64)dVar38 >> 0x20) < fVar25;
                } else {
                    bVar41 = dVar38 < dVar22;
                }
                if (cVar43 == '\0') {
                    pdVar2 = (double *)((int)pdVar2 + -4);
                    *(int *)pdVar2 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    pdVar2 = pdVar2 + -1;
                    *pdVar2 = in_dr0;
                }
                in_dr6 = dVar38;
                if ((bVar41) && (in_dr6 = dVar22, cVar43 == '\0')) {
                    in_dr6 = (double)CONCAT44(fVar25, SUB84(dVar38, 0));
                }
                iVar14 = iVar14 + iVar13 + 1;
                *(u32 *)pdVar2 = 0xf0000000;
                if (cVar43 == '\0') {
                    *(int *)(pdVar2 + 3) = (int)((u64)in_dr6 >> 0x20);
                } else {
                    pdVar2[3] = in_dr6;
                }
                a3 = pdVar2 + 4;
            }
            uVar1 = uVar1 - 1;
            if (uVar1 == 0) {
                g_8c4aa520 = g_8c4aa520 + iVar14;
                g_8c4aa51c = g_8c4aa51c + iVar15;
                return a3;
            }
        } while (true);
    }
    fVar25 = g_8c277af8 + 0.5;
    dVar38 = (double)CONCAT44(g_8c277afc + 0.5, uStack_28);
    iVar14 = 0;
    iVar15 = 0;
    uStack_44 = a2 & 0x3fff;
    dVar22 = (double)CONCAT44(fVar25, 0x3f800000);
    uStack_34 = 0x3f800000;
    if ((g_8c4aa4f0 & 0x80000000) != 0) {
        dVar22 = 1.58735232019473e-314;
        uStack_34 = 0xbf800000;
    }
    iStack_38 = (a2 >> 0xe & 3) << 1;
    pdStack_58 = a3;
    psStack_50 = a0;
    uStack_30 = in_PR;
    uStack_2c = uVar35;
    do {
        fVar20 = SUB84(dVar22, 0);
        iVar9 = (int)*psStack_50;
        pdVar2 = (double *)(psStack_50[1] * 0x20 + a1);
        if (cVar43 == '\0') {
            dVar38 = (double)CONCAT44((int)((u64)dVar38 >> 0x20), uStack_34);
        } else {
            in_xd12 = (double)CONCAT44(uStack_30, uStack_34);
        }
        if (iVar9 < 0) {
            dVar38 = (double)CONCAT44((int)((u64)dVar38 >> 0x20), -SUB84(dVar38, 0));
            iVar9 = -iVar9;
        }
        uVar1 = (u32)((u64)dVar38 >> 0x20);
        dVar22 = dVar38;
        if (cVar43 == '\0') {
            in_dr8 = (u64)uVar1;
            dVar22 = in_xd8;
        }
        in_xd8 = dVar22;
        iVar15 = iVar15 + iVar9;
        iVar7 = 0;
        if (cVar43 == '\0') {
            in_dr10 = (double)CONCAT44(fVar25, SUB84(in_dr10, 0));
            in_dr0 = (double)CONCAT44(0x3f000000, SUB84(in_dr0, 0));
            fVar20 = *(float *)(pdVar2 + 3);
        } else {
            in_dr10 = (double)CONCAT44(uStack_44, fVar25);
            in_dr0 = 2.9297889377462193e+173;
            in_xd2 = pdVar2[3];
        }
        iVar6 = 0;
        iVar9 = iVar9 + -2;
        fVar26 = (float)((u64)in_dr0 >> 0x20);
        if (cVar42 == '\0') {
            in_dr10 = (double)CONCAT44(fVar26 * fVar20 + (float)((u64)in_dr10 >> 0x20), SUB84(in_dr10, 0));
        }
        if (cVar43 == '\0') {
            fVar20 = *(float *)((int)pdVar2 + 0x1c);
        } else {
            in_xd2 = *(double *)((int)pdVar2 + 0x1c);
        }
        if (cVar42 == '\0') {
            in_dr8 = (u64)(u32)(fVar26 * fVar20 + (float)in_dr8);
        }
        pdVar12 = (double *)(psStack_50[4] * 0x20 + a1);
        if (cVar43 == '\0') {
            fVar20 = *(float *)(pdVar12 + 3);
            dVar32 = (double)CONCAT44(uVar1, fVar25);
        } else {
            in_xd14 = (double)CONCAT44(uStack_44, fVar25);
            in_xd2 = pdVar12[3];
            dVar32 = dVar38;
        }
        psStack_50 = psStack_50 + 7;
        if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), fVar26 * fVar20 + SUB84(dVar32, 0));
        }
        if (cVar43 == '\0') {
            fVar20 = *(float *)((int)pdVar12 + 0x1c);
        } else {
            in_xd2 = *(double *)((int)pdVar12 + 0x1c);
        }
        dVar40 = in_xd14;
        if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(fVar26 * fVar20 + (float)((u64)dVar32 >> 0x20), SUB84(dVar32, 0));
        }
        do {
            pdVar10 = (double *)(*psStack_50 * 0x20 + a1);
            psStack_50 = psStack_50 + 3;
            if (cVar43 == '\0') {
                in_dr0 = (double)CONCAT44(0x3f000000, SUB84(in_dr0, 0));
                dVar22 = (double)CONCAT44(*(u32 *)(pdVar10 + 3), fVar25);
            } else {
                in_xd2 = (double)CONCAT44(uStack_44, fVar25);
                in_dr0 = 2.9297889377462193e+173;
                dVar22 = pdVar10[3];
            }
            fVar20 = (float)((u64)in_dr0 >> 0x20);
            if (cVar42 == '\0') {
                dVar22 = (double)(u64)(u32)(fVar20 * (float)((u64)dVar22 >> 0x20) + SUB84(dVar22, 0));
            }
            uStack_3c = SUB84(dVar22, 0);
            if (cVar43 == '\0') {
                uVar23 = CONCAT44(*(u32 *)((int)pdVar10 + 0x1c), (int)((u64)dVar38 >> 0x20));
            } else {
                uStack_3c = SUB84(in_xd2, 0);
                iStack_38 = (int)((u64)in_xd2 >> 0x20);
                uVar23 = *(u64 *)((int)pdVar10 + 0x1c);
                in_xd2 = dVar38;
            }
            if (cVar42 == '\0') {
                uVar23 = (u64)(u32)(fVar20 * (float)(uVar23 >> 0x20) + (float)uVar23);
            }
            if (cVar43 == '\0') {
                uStack_40 = (u32)uVar23;
                fVar26 = *(float *)pdVar2;
            } else {
                uStack_40 = SUB84(in_xd2, 0);
                uStack_3c = (u32)((u64)in_xd2 >> 0x20);
                fVar26 = (float)((u64)*pdVar2 >> 0x20);
            }
            dVar22 = (double)CONCAT44(fVar26, 0x3f800000);
            uVar36 = SUB84(dVar32, 0);
            uVar34 = (u32)((u64)dVar32 >> 0x20);
            uVar35 = (u32)in_dr8;
            if (cVar42 != '\0' || 1.0 <= fVar26) {
                if (cVar43 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)pdVar12, 0x3f800000);
                } else {
                    dVar22 = *pdVar12;
                }
                if (cVar42 == '\0' && (float)((u64)dVar22 >> 0x20) < SUB84(dVar22, 0))
                    goto LAB_8c231400;
                if (cVar43 == '\0') {
                    fVar26 = *(float *)pdVar10;
                } else {
                    fVar26 = (float)((u64)*pdVar10 >> 0x20);
                }
                dVar22 = (double)CONCAT44(fVar26, 0x3f800000);
                if (cVar42 == '\0' && fVar26 < 1.0)
                    goto LAB_8c231400;
                if (cVar43 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), *(u32 *)(pdVar2 + 1));
                    dVar29 = *(double *)((int)pdVar12 + 4);
                } else {
                    in_xd2 = pdVar2[1];
                    dVar29 = pdVar12[1];
                    dVar22 = *(double *)((int)pdVar10 + 4);
                    in_xd4 = *(double *)((int)pdVar12 + 4);
                }
                fVar26 = (float)((u64)dVar29 >> 0x20);
                fVar27 = SUB84(dVar29, 0);
                if (cVar42 == '\0') {
                    fVar21 = (SUB84(dVar22, 0) - fVar26) * ((float)((u64)dVar22 >> 0x20) - fVar27);
                } else {
                    dVar22 = (dVar22 - dVar29) - dVar29;
                    fVar21 = SUB84(dVar22 * dVar22, 0);
                }
                if (cVar43 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar2 + 4), fVar21);
                    in_dr0 = (double)CONCAT44(fVar20, *(u32 *)(pdVar10 + 1));
                } else {
                    dVar22 = *(double *)((int)pdVar2 + 4);
                }
                if (cVar42 == '\0') {
                    fVar26 = SUB84(in_dr0, 0) - fVar26;
                    in_dr0 = (double)(u64)(u32)fVar26;
                    fVar26 = ((float)((u64)dVar22 >> 0x20) - fVar27) * fVar26;
                    dVar22 = (double)CONCAT44(fVar26, SUB84(dVar22, 0) - fVar26);
                } else {
                    in_dr0 = in_dr0 - dVar29;
                    dVar22 = (dVar22 - dVar29) * in_dr0;
                    dVar22 = dVar22 - dVar22;
                }
                dVar29 = in_xd2;
                if (cVar43 == '\0') {
                    dVar29 = (double)CONCAT44(SUB84(dVar22, 0), fVar27);
                }
                if (cVar42 == '\0') {
                    dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) * SUB84(dVar38, 0), SUB84(dVar29, 0));
                } else {
                    dVar29 = dVar29 * dVar38;
                }
                dVar22 = (double)((u64)dVar22 & 0xffffffff00000000);
                fVar20 = (float)((u64)dVar29 >> 0x20);
                if (cVar42 == '\0') {
                    bVar41 = fVar20 < 0.0;
                } else {
                    bVar41 = dVar29 < dVar22;
                }
                uVar39 = (u32)((u64)in_dr10 >> 0x20);
                if (bVar41) {
                    if (iVar6 != 0) {
                        if (cVar43 == '\0') {
                            dVar29 = (double)CONCAT44(fVar20, uVar30);
                            uVar31 = CONCAT44(*(u32 *)((int)pdVar12 + 4), *(u32 *)(pdVar12 + 1));
                            in_dr8 = CONCAT44(*(u32 *)((int)pdVar12 + 0xc), uVar35);
                            dVar22 = (double)((u64) * (u32 *)(pdVar12 + 2) << 0x20);
                            pdVar4 = (double *)((int)pdVar12 + 0x14);
                            dVar28 = in_xd4;
                        } else {
                            uVar31 = *(u64 *)((int)pdVar12 + 4);
                            dVar28 = (double)CONCAT44(psStack_50, uVar30);
                            in_xd6 = *(double *)((int)pdVar12 + 0xc);
                            in_dr8 = *(u64 *)((int)pdVar12 + 0x14);
                            dVar22 = *(double *)((int)pdVar12 + 0x1c);
                            pdVar4 = (double *)((int)pdVar12 + 0x24);
                        }
                        if (cVar42 == '\0') {
                            fVar20 = SUB84(dVar29, 0) - (float)((u64)dVar22 >> 0x20);
                        } else {
                            fVar20 = SUB84(dVar29 - dVar22, 0);
                        }
                        if (cVar43 == '\0') {
                            dVar22 = (double)CONCAT44(uVar30, SUB84(dVar22, 0));
                            dVar29 = (double)CONCAT44(*(u32 *)pdVar4, fVar20);
                        } else {
                            dVar22 = (double)CONCAT44(psStack_50, uVar30);
                            dVar29 = *pdVar4;
                        }
                        fVar20 = (float)((u64)dVar22 >> 0x20);
                        if (cVar42 == '\0') {
                            bVar41 = SUB84(dVar29, 0) < fVar20;
                            dVar29 = (double)CONCAT44(-(float)((u64)dVar29 >> 0x20), SUB84(dVar29, 0));
                        } else {
                            bVar41 = dVar29 < dVar22;
                            dVar29 = -dVar29;
                        }
                        in_xd4 = dVar28;
                        if ((bVar41) && (in_xd4 = dVar22, cVar43 == '\0')) {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), fVar20);
                            in_xd4 = dVar28;
                        }
                        if (cVar43 == '\0') {
                            *(int *)((int)pdStack_58 + 0x1c) = (int)((u64)dVar29 >> 0x20);
                            *(int *)(pdStack_58 + 3) = SUB84(dVar29, 0);
                            *(u32 *)((int)pdStack_58 + 0x14) = uVar34;
                            *(u32 *)(pdStack_58 + 2) = uVar36;
                            *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
                            *(int *)(pdStack_58 + 1) = (int)uVar31;
                            *(int *)((int)pdStack_58 + 4) = (int)((u64)uVar31 >> 0x20);
                        } else {
                            *(double *)((int)pdStack_58 + 0x1c) = dVar29;
                            pdStack_58[3] = in_xd4;
                            *(double *)((int)pdStack_58 + 0x14) = dVar32;
                            pdStack_58[2] = dVar40;
                            *(u64 *)((int)pdStack_58 + 0xc) = in_dr8;
                            pdStack_58[1] = in_xd6;
                            *(u64 *)((int)pdStack_58 + 4) = uVar31;
                        }
                        *(u32 *)pdStack_58 = 0xf0000000;
                        iVar14 = iVar14 + iVar6 + 1;
                        pdStack_58 = pdStack_58 + 4;
                        iVar6 = 0;
                    }
                    if (iVar7 == 0) {
                        pdVar4 = (double *)((int)pdVar2 + 4);
                        if (cVar43 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar30);
                            in_dr8 = CONCAT44(*(u32 *)((int)pdVar2 + 0xc), (int)in_dr8);
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(pdVar2 + 2));
                            pdVar2 = (double *)((int)pdVar2 + 0x14);
                        } else {
                            in_xd6 = *pdVar4;
                            pdVar4 = (double *)((int)pdVar2 + 0xc);
                            in_xd2 = (double)CONCAT44(psStack_50, uVar30);
                            in_dr8 = *(u64 *)((int)pdVar2 + 0x14);
                            in_xd4 = *(double *)((int)pdVar2 + 0x1c);
                            pdVar2 = (double *)((int)pdVar2 + 0x24);
                        }
                        dVar28 = *pdVar4;
                        if (cVar42 == '\0') {
                            fVar20 = SUB84(dVar29, 0) + SUB84(dVar22, 0);
                            bVar41 = fVar20 < SUB84(dVar22, 0);
                        } else {
                            fVar20 = SUB84(dVar29 + dVar22, 0);
                            bVar41 = dVar29 + dVar22 < dVar22;
                        }
                        if (cVar43 == '\0') {
                            dVar29 = (double)CONCAT44(*(u32 *)pdVar2, fVar20);
                        } else {
                            dVar29 = *pdVar2;
                        }
                        if (bVar41) {
                            if (cVar43 == '\0') {
                                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar30);
                            } else {
                                in_xd4 = (double)CONCAT44(psStack_50, uVar30);
                            }
                        }
                        if (cVar43 == '\0') {
                            *(int *)((int)pdStack_58 + 0x1c) = (int)((u64)dVar29 >> 0x20);
                            *(int *)(pdStack_58 + 3) = SUB84(dVar29, 0);
                            *(int *)((int)pdStack_58 + 0x14) = (int)in_dr8;
                            *(u32 *)(pdStack_58 + 2) = uVar39;
                            *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
                            *(int *)(pdStack_58 + 1) = (int)((u64)dVar28 >> 0x20);
                            *(int *)((int)pdStack_58 + 4) = SUB84(dVar28, 0);
                        } else {
                            *(double *)((int)pdStack_58 + 0x1c) = dVar29;
                            pdStack_58[3] = in_xd4;
                            *(double *)((int)pdStack_58 + 0x14) = in_xd8;
                            pdStack_58[2] = in_dr10;
                            *(u64 *)((int)pdStack_58 + 0xc) = in_dr8;
                            pdStack_58[1] = dVar28;
                            *(double *)((int)pdStack_58 + 4) = in_xd6;
                        }
                        *(u32 *)pdStack_58 = 0xe0000000;
                        pdStack_58 = pdStack_58 + 4;
                        iVar7 = 1;
                    }
                    if (cVar43 == '\0') {
                        in_dr8 = CONCAT44(*(u32 *)((int)pdVar12 + 4), (int)in_dr8);
                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar30);
                        dVar28 = (double)CONCAT44(*(u32 *)(pdVar12 + 1), *(u32 *)((int)pdVar12 + 0xc));
                        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(pdVar12 + 2));
                        pdVar2 = (double *)((int)pdVar12 + 0x14);
                    } else {
                        in_dr8 = *(u64 *)((int)pdVar12 + 4);
                        in_xd2 = (double)CONCAT44(psStack_50, uVar30);
                        dVar28 = *(double *)((int)pdVar12 + 0xc);
                        in_xd6 = *(double *)((int)pdVar12 + 0x14);
                        in_xd4 = *(double *)((int)pdVar12 + 0x1c);
                        pdVar2 = (double *)((int)pdVar12 + 0x24);
                    }
                    if (cVar42 == '\0') {
                        fVar20 = SUB84(dVar29, 0) + SUB84(dVar22, 0);
                        bVar41 = fVar20 < SUB84(dVar22, 0);
                    } else {
                        fVar20 = SUB84(dVar29 + dVar22, 0);
                        bVar41 = dVar29 + dVar22 < dVar22;
                    }
                    if (cVar43 == '\0') {
                        in_dr4 = (double)CONCAT44(*(u32 *)pdVar2, fVar20);
                    } else {
                        in_dr4 = *pdVar2;
                    }
                    if (bVar41) {
                        if (cVar43 == '\0') {
                            in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), uVar30);
                        } else {
                            in_xd4 = (double)CONCAT44(psStack_50, uVar30);
                        }
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdStack_58 + 0x1c) = (int)((u64)in_dr4 >> 0x20);
                        *(int *)(pdStack_58 + 3) = SUB84(in_dr4, 0);
                        *(u32 *)((int)pdStack_58 + 0x14) = uVar34;
                        *(u32 *)(pdStack_58 + 2) = uVar36;
                        *(int *)((int)pdStack_58 + 0xc) = SUB84(dVar28, 0);
                        *(int *)(pdStack_58 + 1) = (int)((u64)dVar28 >> 0x20);
                        *(int *)((int)pdStack_58 + 4) = (int)(in_dr8 >> 0x20);
                    } else {
                        *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
                        pdStack_58[3] = in_xd4;
                        *(double *)((int)pdStack_58 + 0x14) = dVar32;
                        pdStack_58[2] = dVar40;
                        *(double *)((int)pdStack_58 + 0xc) = in_xd6;
                        pdStack_58[1] = dVar28;
                        *(u64 *)((int)pdStack_58 + 4) = in_dr8;
                    }
                    *(u32 *)pdStack_58 = 0xe0000000;
                    pdStack_58 = pdStack_58 + 4;
                    iVar7 = iVar7 + 1;
                } else {
                    if (iVar7 != 0) {
                        if (cVar43 == '\0') {
                            dVar22 = (double)((u64)uVar30 << 0x20);
                            uVar31 = CONCAT44(*(u32 *)((int)pdVar12 + 4), *(u32 *)(pdVar12 + 1));
                            in_dr8 = CONCAT44(*(u32 *)((int)pdVar12 + 0xc), uVar35);
                            dVar29 = (double)CONCAT44(fVar20, *(u32 *)(pdVar12 + 2));
                            pdVar4 = (double *)((int)pdVar12 + 0x14);
                        } else {
                            uVar31 = *(u64 *)((int)pdVar12 + 4);
                            dVar22 = (double)CONCAT44(psStack_50, uVar30);
                            in_xd6 = *(double *)((int)pdVar12 + 0xc);
                            in_dr8 = *(u64 *)((int)pdVar12 + 0x14);
                            in_xd4 = *(double *)((int)pdVar12 + 0x1c);
                            pdVar4 = (double *)((int)pdVar12 + 0x24);
                        }
                        fVar20 = (float)((u64)dVar22 >> 0x20);
                        if (cVar42 == '\0') {
                            fVar26 = SUB84(dVar29, 0) + fVar20;
                            bVar41 = fVar26 < fVar20;
                        } else {
                            fVar26 = SUB84(dVar29 + dVar22, 0);
                            bVar41 = dVar29 + dVar22 < dVar22;
                        }
                        if (cVar43 == '\0') {
                            dVar29 = (double)CONCAT44(*(u32 *)pdVar4, fVar26);
                        } else {
                            dVar29 = *pdVar4;
                        }
                        if (bVar41) {
                            if (cVar43 == '\0') {
                                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar30);
                            } else {
                                in_xd4 = (double)CONCAT44(psStack_50, uVar30);
                            }
                        }
                        if (cVar43 == '\0') {
                            *(int *)((int)pdStack_58 + 0x1c) = (int)((u64)dVar29 >> 0x20);
                            *(int *)(pdStack_58 + 3) = SUB84(dVar29, 0);
                            *(u32 *)((int)pdStack_58 + 0x14) = uVar34;
                            *(u32 *)(pdStack_58 + 2) = uVar36;
                            *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
                            *(int *)(pdStack_58 + 1) = (int)uVar31;
                            *(int *)((int)pdStack_58 + 4) = (int)((u64)uVar31 >> 0x20);
                        } else {
                            *(double *)((int)pdStack_58 + 0x1c) = dVar29;
                            pdStack_58[3] = in_xd4;
                            *(double *)((int)pdStack_58 + 0x14) = dVar32;
                            pdStack_58[2] = dVar40;
                            *(u64 *)((int)pdStack_58 + 0xc) = in_dr8;
                            pdStack_58[1] = in_xd6;
                            *(u64 *)((int)pdStack_58 + 4) = uVar31;
                        }
                        *(u32 *)pdStack_58 = 0xf0000000;
                        iVar14 = iVar14 + iVar7 + 1;
                        pdStack_58 = pdStack_58 + 4;
                        iVar7 = 0;
                    }
                    if (iVar6 == 0) {
                        if (cVar43 == '\0') {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar30);
                            uVar31 = CONCAT44(*(u32 *)((int)pdVar2 + 4), *(u32 *)(pdVar2 + 1));
                            in_dr8 = CONCAT44(*(u32 *)((int)pdVar2 + 0xc), (int)in_dr8);
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar2 + 2));
                            pdVar2 = (double *)((int)pdVar2 + 0x14);
                            dVar28 = in_xd4;
                        } else {
                            uVar31 = *(u64 *)((int)pdVar2 + 4);
                            dVar28 = (double)CONCAT44(psStack_50, uVar30);
                            in_xd6 = *(double *)((int)pdVar2 + 0xc);
                            in_dr8 = *(u64 *)((int)pdVar2 + 0x14);
                            in_xd2 = *(double *)((int)pdVar2 + 0x1c);
                            pdVar2 = (double *)((int)pdVar2 + 0x24);
                        }
                        if (cVar42 == '\0') {
                            fVar20 = SUB84(dVar29, 0) - SUB84(dVar22, 0);
                        } else {
                            fVar20 = SUB84(dVar29 - dVar22, 0);
                        }
                        if (cVar43 == '\0') {
                            dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar30);
                            dVar29 = (double)CONCAT44(*(u32 *)pdVar2, fVar20);
                        } else {
                            in_xd2 = (double)CONCAT44(psStack_50, uVar30);
                            dVar29 = *pdVar2;
                        }
                        if (cVar42 == '\0') {
                            bVar41 = SUB84(dVar29, 0) < SUB84(dVar22, 0);
                            dVar29 = (double)CONCAT44(-(float)((u64)dVar29 >> 0x20), SUB84(dVar29, 0));
                        } else {
                            bVar41 = dVar29 < dVar22;
                            dVar29 = -dVar29;
                        }
                        in_xd4 = dVar28;
                        if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
                            dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar22, 0));
                            in_xd4 = dVar28;
                        }
                        if (cVar43 == '\0') {
                            *(int *)((int)pdStack_58 + 0x1c) = (int)((u64)dVar29 >> 0x20);
                            *(int *)(pdStack_58 + 3) = SUB84(dVar29, 0);
                            *(int *)((int)pdStack_58 + 0x14) = (int)in_dr8;
                            *(u32 *)(pdStack_58 + 2) = uVar39;
                            *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
                            *(int *)(pdStack_58 + 1) = (int)uVar31;
                            *(int *)((int)pdStack_58 + 4) = (int)((u64)uVar31 >> 0x20);
                        } else {
                            *(double *)((int)pdStack_58 + 0x1c) = dVar29;
                            pdStack_58[3] = in_xd4;
                            *(double *)((int)pdStack_58 + 0x14) = in_xd8;
                            pdStack_58[2] = in_dr10;
                            *(u64 *)((int)pdStack_58 + 0xc) = in_dr8;
                            pdStack_58[1] = in_xd6;
                            *(u64 *)((int)pdStack_58 + 4) = uVar31;
                        }
                        *(u32 *)pdStack_58 = 0xe0000000;
                        pdStack_58 = pdStack_58 + 4;
                        iVar6 = 1;
                    }
                    if (cVar43 == '\0') {
                        in_dr8 = CONCAT44(*(u32 *)((int)pdVar12 + 4), (int)in_dr8);
                        pdVar4 = pdVar12 + 1;
                        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar30);
                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar12 + 2));
                        pdVar2 = (double *)((int)pdVar12 + 0x14);
                        dVar28 = in_xd4;
                    } else {
                        in_dr8 = *(u64 *)((int)pdVar12 + 4);
                        dVar28 = (double)CONCAT44(psStack_50, uVar30);
                        in_xd6 = *(double *)((int)pdVar12 + 0xc);
                        pdVar4 = (double *)((int)pdVar12 + 0x14);
                        in_xd2 = *(double *)((int)pdVar12 + 0x1c);
                        pdVar2 = (double *)((int)pdVar12 + 0x24);
                    }
                    dVar37 = *pdVar4;
                    if (cVar42 == '\0') {
                        fVar20 = SUB84(dVar29, 0) - SUB84(dVar22, 0);
                    } else {
                        fVar20 = SUB84(dVar29 - dVar22, 0);
                    }
                    if (cVar43 == '\0') {
                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar30);
                        dVar29 = (double)CONCAT44(*(u32 *)pdVar2, fVar20);
                    } else {
                        in_xd2 = (double)CONCAT44(psStack_50, uVar30);
                        dVar29 = *pdVar2;
                    }
                    if (cVar42 == '\0') {
                        bVar41 = SUB84(dVar29, 0) < SUB84(dVar22, 0);
                        in_dr4 = (double)CONCAT44(-(float)((u64)dVar29 >> 0x20), SUB84(dVar29, 0));
                    } else {
                        bVar41 = dVar29 < dVar22;
                        in_dr4 = -dVar29;
                    }
                    in_xd4 = dVar28;
                    if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
                        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(dVar22, 0));
                        in_xd4 = dVar28;
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdStack_58 + 0x1c) = (int)((u64)in_dr4 >> 0x20);
                        *(int *)(pdStack_58 + 3) = SUB84(in_dr4, 0);
                        *(u32 *)((int)pdStack_58 + 0x14) = uVar34;
                        *(u32 *)(pdStack_58 + 2) = uVar36;
                        *(int *)((int)pdStack_58 + 0xc) = (int)((u64)dVar37 >> 0x20);
                        *(int *)(pdStack_58 + 1) = SUB84(dVar37, 0);
                        *(int *)((int)pdStack_58 + 4) = (int)(in_dr8 >> 0x20);
                    } else {
                        *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
                        pdStack_58[3] = in_xd4;
                        *(double *)((int)pdStack_58 + 0x14) = dVar32;
                        pdStack_58[2] = dVar40;
                        *(double *)((int)pdStack_58 + 0xc) = dVar37;
                        pdStack_58[1] = in_xd6;
                        *(u64 *)((int)pdStack_58 + 4) = in_dr8;
                    }
                    *(u32 *)pdStack_58 = 0xe0000000;
                    pdStack_58 = pdStack_58 + 4;
                    iVar6 = iVar6 + 1;
                }
            } else {
            LAB_8c231400:
                if (iVar6 != 0) {
                    if (cVar43 == '\0') {
                        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), uVar30);
                        uVar31 = CONCAT44(*(u32 *)((int)pdVar12 + 4), *(u32 *)(pdVar12 + 1));
                        in_dr8 = CONCAT44(*(u32 *)((int)pdVar12 + 0xc), uVar35);
                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar12 + 2));
                        pdVar4 = (double *)((int)pdVar12 + 0x14);
                        dVar29 = in_xd4;
                    } else {
                        uVar31 = *(u64 *)((int)pdVar12 + 4);
                        dVar29 = (double)CONCAT44(psStack_50, uVar30);
                        in_xd6 = *(double *)((int)pdVar12 + 0xc);
                        in_dr8 = *(u64 *)((int)pdVar12 + 0x14);
                        in_xd2 = *(double *)((int)pdVar12 + 0x1c);
                        pdVar4 = (double *)((int)pdVar12 + 0x24);
                    }
                    if (cVar42 == '\0') {
                        fVar20 = SUB84(in_dr4, 0) - SUB84(dVar22, 0);
                    } else {
                        fVar20 = SUB84(in_dr4 - dVar22, 0);
                    }
                    if (cVar43 == '\0') {
                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar30);
                        dVar28 = (double)CONCAT44(*(u32 *)pdVar4, fVar20);
                    } else {
                        in_xd2 = (double)CONCAT44(psStack_50, uVar30);
                        dVar28 = *pdVar4;
                    }
                    if (cVar42 == '\0') {
                        bVar41 = SUB84(dVar28, 0) < SUB84(dVar22, 0);
                        in_dr4 = (double)CONCAT44(-(float)((u64)dVar28 >> 0x20), SUB84(dVar28, 0));
                    } else {
                        bVar41 = dVar28 < dVar22;
                        in_dr4 = -dVar28;
                    }
                    in_xd4 = dVar29;
                    if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
                        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(dVar22, 0));
                        in_xd4 = dVar29;
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdStack_58 + 0x1c) = (int)((u64)in_dr4 >> 0x20);
                        *(int *)(pdStack_58 + 3) = SUB84(in_dr4, 0);
                        *(u32 *)((int)pdStack_58 + 0x14) = uVar34;
                        *(u32 *)(pdStack_58 + 2) = uVar36;
                        *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
                        *(int *)(pdStack_58 + 1) = (int)uVar31;
                        *(int *)((int)pdStack_58 + 4) = (int)((u64)uVar31 >> 0x20);
                    } else {
                        *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
                        pdStack_58[3] = in_xd4;
                        *(double *)((int)pdStack_58 + 0x14) = dVar32;
                        pdStack_58[2] = dVar40;
                        *(u64 *)((int)pdStack_58 + 0xc) = in_dr8;
                        pdStack_58[1] = in_xd6;
                        *(u64 *)((int)pdStack_58 + 4) = uVar31;
                    }
                    *(u32 *)pdStack_58 = 0xf0000000;
                    iVar14 = iVar14 + iVar6 + 1;
                    pdStack_58 = pdStack_58 + 4;
                    iVar6 = 0;
                }
                if (iVar7 != 0) {
                    pdVar4 = (double *)((int)pdVar12 + 4);
                    if (cVar43 == '\0') {
                        dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar30);
                        in_dr8 = CONCAT44(*(u32 *)((int)pdVar12 + 0xc), (int)in_dr8);
                        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(pdVar12 + 2));
                        pdVar5 = (double *)((int)pdVar12 + 0x14);
                    } else {
                        in_xd6 = *pdVar4;
                        pdVar4 = (double *)((int)pdVar12 + 0xc);
                        in_xd2 = (double)CONCAT44(psStack_50, uVar30);
                        in_dr8 = *(u64 *)((int)pdVar12 + 0x14);
                        in_xd4 = *(double *)((int)pdVar12 + 0x1c);
                        pdVar5 = (double *)((int)pdVar12 + 0x24);
                    }
                    dVar29 = *pdVar4;
                    if (cVar42 == '\0') {
                        fVar20 = SUB84(in_dr4, 0) + SUB84(dVar22, 0);
                        bVar41 = fVar20 < SUB84(dVar22, 0);
                    } else {
                        fVar20 = SUB84(in_dr4 + dVar22, 0);
                        bVar41 = in_dr4 + dVar22 < dVar22;
                    }
                    if (cVar43 == '\0') {
                        in_dr4 = (double)CONCAT44(*(u32 *)pdVar5, fVar20);
                    } else {
                        in_dr4 = *pdVar5;
                    }
                    if (bVar41) {
                        if (cVar43 == '\0') {
                            in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), uVar30);
                        } else {
                            in_xd4 = (double)CONCAT44(psStack_50, uVar30);
                        }
                    }
                    if (cVar43 == '\0') {
                        *(int *)((int)pdStack_58 + 0x1c) = (int)((u64)in_dr4 >> 0x20);
                        *(int *)(pdStack_58 + 3) = SUB84(in_dr4, 0);
                        *(u32 *)((int)pdStack_58 + 0x14) = uVar34;
                        *(u32 *)(pdStack_58 + 2) = uVar36;
                        *(int *)((int)pdStack_58 + 0xc) = (int)(in_dr8 >> 0x20);
                        *(int *)(pdStack_58 + 1) = (int)((u64)dVar29 >> 0x20);
                        *(int *)((int)pdStack_58 + 4) = SUB84(dVar29, 0);
                    } else {
                        *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
                        pdStack_58[3] = in_xd4;
                        *(double *)((int)pdStack_58 + 0x14) = dVar32;
                        pdStack_58[2] = dVar40;
                        *(u64 *)((int)pdStack_58 + 0xc) = in_dr8;
                        pdStack_58[1] = dVar29;
                        *(double *)((int)pdStack_58 + 4) = in_xd6;
                    }
                    *(u32 *)pdStack_58 = 0xf0000000;
                    iVar14 = iVar14 + iVar7 + 1;
                    pdStack_58 = pdStack_58 + 4;
                    iVar7 = 0;
                }
                if (cVar43 == '\0') {
                    fVar20 = *(float *)pdVar2;
                } else {
                    fVar20 = (float)((u64)*pdVar2 >> 0x20);
                }
                dVar22 = (double)CONCAT44(fVar20, 0x3f800000);
                if (cVar42 != '\0' || fVar20 <= 1.0) {
                    if (cVar43 == '\0') {
                        dVar22 = (double)CONCAT44(*(u32 *)pdVar12, 0x3f800000);
                    } else {
                        dVar22 = *pdVar12;
                    }
                    if (cVar42 != '\0' || (float)((u64)dVar22 >> 0x20) <= SUB84(dVar22, 0)) {
                        if (cVar43 == '\0') {
                            fVar20 = *(float *)pdVar10;
                        } else {
                            fVar20 = (float)((u64)*pdVar10 >> 0x20);
                        }
                        dVar22 = (double)CONCAT44(fVar20, 0x3f800000);
                        if (cVar42 != '\0' || fVar20 <= 1.0)
                            goto LAB_8c231518;
                    }
                }
                if (cVar43 == '\0') {
                    in_dr4 = (double)CONCAT44(uVar30, SUB84(dVar38, 0));
                } else {
                    in_dr4 = (double)CONCAT44(psStack_50, uVar30);
                    in_xd4 = in_xd12;
                }
                pdStack_58 = (double *)vram64_2319cc(pdVar2, pdVar12, pdVar10, pdStack_58);
            }
        LAB_8c231518:
            psStack_50 = (short *)((int)psStack_50 + iStack_38);
            if (cVar43 == '\0') {
                dVar29 = (double)CONCAT44((int)((u64)dVar32 >> 0x20), uStack_3c);
                in_xd14 = dVar40;
                in_dr10 = (double)CONCAT44(SUB84(dVar32, 0), SUB84(in_dr10, 0));
            } else {
                in_xd14 = (double)CONCAT44(iStack_38, uStack_3c);
                dVar29 = dVar32;
                in_dr10 = dVar40;
            }
            iVar9 = iVar9 + -1;
            dVar38 = (double)CONCAT44((int)((u64)dVar38 >> 0x20), -SUB84(dVar38, 0));
            if (cVar43 == '\0') {
                in_dr8 = (u64)dVar29 >> 0x20;
                dVar32 = (double)CONCAT44(uStack_40, SUB84(dVar29, 0));
            } else {
                dVar32 = (double)CONCAT44(uStack_3c, uStack_40);
                in_xd8 = dVar29;
            }
            pdVar2 = pdVar12;
            pdVar12 = pdVar10;
            dVar40 = in_xd14;
        } while (iVar9 != 0);
        if ((iVar7 != 0) || (iVar6 != 0)) {
            if (cVar43 == '\0') {
                in_dr8 = CONCAT44(*(u32 *)((int)pdVar10 + 4), (int)in_dr8);
                pdVar10 = pdVar10 + 1;
            } else {
                in_dr8 = *(u64 *)((int)pdVar10 + 4);
                pdVar10 = (double *)((int)pdVar10 + 0xc);
            }
            if (cVar43 == '\0') {
                dVar32 = (double)CONCAT44(*(u32 *)pdVar10, *(u32 *)((int)pdVar10 + 4));
                pdVar10 = pdVar10 + 1;
            } else {
                dVar32 = *pdVar10;
                in_xd6 = pdVar10[1];
                pdVar10 = pdVar10 + 2;
            }
            uVar35 = (u32)((u64)dVar22 >> 0x20);
            dVar40 = in_xd4;
            if (iVar7 == 0) {
                if (cVar43 == '\0') {
                    dVar22 = (double)CONCAT44(uVar35, *(u32 *)pdVar10);
                    dVar29 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), uVar30);
                } else {
                    in_xd2 = *pdVar10;
                    dVar40 = (double)CONCAT44(psStack_50, uVar30);
                    dVar29 = pdVar10[1];
                }
                iVar14 = iVar14 + iVar6 + 1;
                if (cVar42 == '\0') {
                    in_dr4 = (double)CONCAT44(-(float)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) - SUB84(dVar22, 0));
                } else {
                    in_dr4 = -(dVar29 - dVar22);
                }
            } else {
                if (cVar43 == '\0') {
                    dVar22 = (double)CONCAT44(uVar35, uVar30);
                } else {
                    dVar40 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                    in_xd2 = (double)CONCAT44(psStack_50, uVar30);
                }
                dVar29 = *pdVar10;
                if (cVar42 == '\0') {
                    in_dr4 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) + SUB84(dVar22, 0));
                } else {
                    in_dr4 = dVar29 + dVar22;
                }
                iVar14 = iVar14 + iVar7 + 1;
            }
            if (cVar43 == '\0') {
                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), uVar30);
            } else {
                in_xd2 = (double)CONCAT44(psStack_50, uVar30);
            }
            if (cVar42 == '\0') {
                bVar41 = SUB84(in_dr4, 0) < SUB84(dVar22, 0);
            } else {
                bVar41 = in_dr4 < dVar22;
            }
            in_xd4 = dVar40;
            if ((bVar41) && (in_xd4 = in_xd2, cVar43 == '\0')) {
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(dVar22, 0));
                in_xd4 = dVar40;
            }
            if (cVar43 == '\0') {
                *(int *)((int)pdStack_58 + 0x1c) = (int)((u64)in_dr4 >> 0x20);
                *(int *)(pdStack_58 + 3) = SUB84(in_dr4, 0);
                *(u32 *)((int)pdStack_58 + 0x14) = uStack_40;
                dVar22 = (double)(u64)uStack_3c;
                *(u32 *)(pdStack_58 + 2) = uStack_3c;
                *(int *)((int)pdStack_58 + 0xc) = SUB84(dVar32, 0);
                *(int *)(pdStack_58 + 1) = (int)((u64)dVar32 >> 0x20);
                *(int *)((int)pdStack_58 + 4) = (int)(in_dr8 >> 0x20);
            } else {
                *(double *)((int)pdStack_58 + 0x1c) = in_dr4;
                pdStack_58[3] = in_xd4;
                *(u64 *)((int)pdStack_58 + 0x14) = CONCAT44(uStack_3c, uStack_40);
                in_xd2 = (double)CONCAT44(iStack_38, uStack_3c);
                pdStack_58[2] = in_xd2;
                *(double *)((int)pdStack_58 + 0xc) = in_xd6;
                pdStack_58[1] = dVar32;
                *(u64 *)((int)pdStack_58 + 4) = in_dr8;
            }
            *(u32 *)pdStack_58 = 0xf0000000;
            pdStack_58 = pdStack_58 + 4;
        }
        uStack_44 = uStack_44 - 1;
        if (uStack_44 == 0) {
            g_8c4aa520 = g_8c4aa520 + iVar14;
            g_8c4aa51c = g_8c4aa51c + iVar15;
            return pdStack_58;
        }
    } while (true);
}

/*
 * gfxlib_uses_vram64_231624  0x8c231624
 * area name: in the gfxlib library code range; behaviour name: its main named callee is vram64_2319cc
 */
double *gfxlib_uses_vram64_231624(short *a0, int a1, u32 a2, double *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    short *psVar4;
    int iVar5;
    int iVar6;
    double *pdVar7;
    int iVar8;
    double *ar4_00;
    double *pdVar9;
    double *pdVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    u32 *puVar14;
    u32 *puVar15;
    u32 *puVar17;
    double in_dr0;
    double dVar18;
    double in_dr2;
    double dVar19;
    double dVar20;
    u64 in_dr4;
    double dVar21;
    double in_dr6;
    double dVar22;
    float fVar24;
    u32 uVar25;
    double dVar23;
    u32 uVar27;
    float fVar28;
    double dVar29;
    double in_dr10;
    double dVar30;
    double in_dr12;
    double dVar31;
    double in_dr14;
    u64 in_xd4;
    u64 in_xd8;
    u64 in_xd10;
    bool bVar32;
    char cVar33;
    char cVar34;
    u32 auStack_34[2];
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    double *pdVar16;
    u32 uVar26;

    cVar34 = '\0';
    cVar33 = '\0';
    uStack_20 = (int)((u64)in_dr12 >> 0x20);
    uStack_24 = SUB84(in_dr12, 0);
    uStack_28 = (int)((u64)in_dr14 >> 0x20);
    uStack_2c = SUB84(in_dr14, 0);
    puVar17 = auStack_34;
    auStack_34[0] = g_8c4aa4f0;
    uVar1 = a2 & 0x3fff;
    iVar2 = 0;
    iVar3 = 0;
    iVar5 = (a2 >> 0xe & 3) << 1;
    dVar21 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), 0x3f000000);
    do {
        iVar6 = (int)*a0;
        fVar28 = 1.0;
        if ((*puVar17 & 0x80000000) != 0) {
            fVar28 = -1.0;
        }
        pdVar7 = (double *)(a0[1] * 0x20 + a1);
        if (iVar6 < 0) {
            iVar6 = -iVar6;
            fVar28 = -fVar28;
        }
        iVar3 = iVar3 + iVar6;
        iVar6 = iVar6 + -2;
        iVar12 = 0;
        iVar13 = 0;
        pdVar9 = (double *)(a0[4] * 0x20 + a1);
        if (cVar34 == '\0') {
            dVar30 = (double)CONCAT44(*(u32 *)(pdVar7 + 3), SUB84(in_dr10, 0));
        } else {
            dVar30 = pdVar7[3];
        }
        fVar24 = SUB84(dVar21, 0);
        if (cVar33 == '\0') {
            dVar30 =
                (double)CONCAT44((float)((u64)dVar30 >> 0x20) * fVar24 + fVar24, SUB84(dVar30, 0) * fVar24 + fVar24);
        } else {
            dVar30 = dVar30 * dVar21 * dVar21 + dVar21 + dVar21;
        }
        a0 = a0 + 7;
        if (cVar34 == '\0') {
            dVar31 = (double)CONCAT44(*(u32 *)(pdVar9 + 3), SUB84(in_dr12, 0));
        } else {
            dVar31 = pdVar9[3];
        }
        if (cVar33 == '\0') {
            dVar31 =
                (double)CONCAT44((float)((u64)dVar31 >> 0x20) * fVar24 + fVar24, SUB84(dVar31, 0) * fVar24 + fVar24);
        } else {
            dVar31 = dVar31 * dVar21 * dVar21 + dVar21 + dVar21;
        }
        do {
            if (cVar34 == '\0') {
                dVar18 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(in_dr0, 0));
                dVar22 = (double)CONCAT44(*(u32 *)(pdVar7 + 1), SUB84(in_dr6, 0));
                iVar8 = (int)pdVar7 + 0xc;
            } else {
                dVar18 = *(double *)((int)pdVar7 + 4);
                dVar22 = *(double *)((int)pdVar7 + 0xc);
                iVar8 = (int)pdVar7 + 0x14;
            }
            if (cVar34 == '\0') {
                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), *(u32 *)((int)pdVar9 + 4));
                pdVar9 = pdVar9 + 1;
            } else {
                pdVar9 = (double *)((int)pdVar9 + 0xc);
            }
            iVar11 = *a0 * 0x20 + a1;
            if (cVar34 == '\0') {
                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)pdVar9);
                pdVar10 = (double *)((int)pdVar9 + 4);
            } else {
                pdVar10 = pdVar9 + 1;
            }
            ar4_00 = (double *)(iVar8 + -0xc);
            if (cVar33 == '\0') {
                dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) - SUB84(dVar18, 0), SUB84(dVar18, 0));
                dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar22, 0));
            } else {
                dVar18 = dVar18 - dVar18;
                dVar22 = dVar22 - dVar22;
            }
            pdVar7 = (double *)((int)pdVar10 + -0xc);
            if (cVar34 == '\0') {
                dVar19 = (double)CONCAT44(*(u32 *)(iVar11 + 4), SUB84(in_dr2, 0));
                dVar29 = (double)CONCAT44(*(u32 *)(iVar11 + 8), fVar28);
                iVar11 = iVar11 + 0xc;
            } else {
                dVar19 = *(double *)(iVar11 + 4);
                dVar29 = *(double *)(iVar11 + 0xc);
                iVar11 = iVar11 + 0x14;
            }
            if (cVar33 == '\0') {
                fVar28 = (float)((u64)dVar19 >> 0x20) - SUB84(dVar18, 0);
            } else {
                fVar28 = (float)((u64)(dVar19 - dVar18) >> 0x20);
            }
            psVar4 = a0 + 3;
            if (cVar34 == '\0') {
                dVar19 = (double)CONCAT44(*(u32 *)(iVar11 + 0xc), SUB84(in_dr14, 0));
            } else {
                dVar19 = *(double *)(iVar11 + 0xc);
            }
            pdVar9 = (double *)(iVar11 + -0xc);
            if (cVar33 == '\0') {
                dVar29 = (double)CONCAT44((float)((u64)dVar29 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar29, 0));
            } else {
                dVar29 = dVar29 - dVar22;
            }
            dVar20 = (double)CONCAT44(fVar28, 0x3f800000);
            if (cVar33 == '\0') {
                dVar29 =
                    (double)CONCAT44((float)((u64)dVar29 >> 0x20) * (float)((u64)dVar18 >> 0x20), SUB84(dVar29, 0));
            } else {
                dVar29 = dVar29 * dVar18;
            }
            if (cVar34 == '\0') {
                dVar18 = (double)CONCAT44(*(u32 *)ar4_00, SUB84(dVar18, 0));
            } else {
                dVar18 = *ar4_00;
            }
            if (cVar33 == '\0') {
                in_dr6 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * fVar28, SUB84(dVar22, 0));
                bVar32 = (float)((u64)dVar18 >> 0x20) < 1.0;
            } else {
                in_dr6 = dVar22 * dVar20;
                bVar32 = dVar18 < dVar20;
            }
            if (cVar34 == '\0') {
                dVar18 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar18, 0));
            } else {
                dVar18 = *pdVar7;
            }
            fVar28 = (float)((u64)dVar21 >> 0x20);
            uVar27 = (u32)((u64)dVar31 >> 0x20);
            uVar26 = (u32)((u64)dVar30 >> 0x20);
            if (bVar32) {
            LAB_8c23179c:
                if (iVar13 == 0) {
                    if (iVar12 != 0) {
                        if (cVar34 == '\0') {
                            dVar18 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar18, 0));
                            dVar20 = (double)CONCAT44(*(u32 *)(pdVar10 + -1), 0x3f800000);
                            dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -4), SUB84(in_dr6, 0));
                        } else {
                            dVar18 = *pdVar7;
                            dVar20 = *(double *)((int)pdVar10 + -4);
                            dVar22 = *(double *)((int)pdVar10 + 4);
                            pdVar10 = (double *)((int)pdVar10 + 0xc);
                        }
                        pdVar7 = pdVar10 + -3;
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)a3 + 0x14);
                            *(u32 *)pdVar10 = uVar27;
                        } else {
                            pdVar10 = a3 + 2;
                            *pdVar10 = dVar31;
                        }
                        if (cVar33 == '\0') {
                            dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + fVar28, SUB84(dVar22, 0));
                        } else {
                            dVar22 = dVar22 + dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar20 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar20;
                        }
                        if (cVar33 == '\0') {
                            bVar32 = (float)((u64)dVar22 >> 0x20) < fVar28;
                        } else {
                            bVar32 = dVar22 < dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar18 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar18;
                        }
                        in_dr6 = dVar22;
                        if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
                            in_dr6 = (double)CONCAT44(fVar28, SUB84(dVar22, 0));
                        }
                        iVar2 = iVar2 + iVar12 + 1;
                        *(u32 *)pdVar10 = 0xf0000000;
                        iVar12 = 0;
                        if (cVar34 == '\0') {
                            *(int *)(pdVar10 + 3) = (int)((u64)in_dr6 >> 0x20);
                        } else {
                            pdVar10[3] = in_dr6;
                        }
                        a3 = pdVar10 + 4;
                    }
                } else {
                    if (cVar34 == '\0') {
                        dVar18 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar18, 0));
                        dVar20 = (double)CONCAT44(*(u32 *)(pdVar10 + -1), 0x3f800000);
                        dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -4), SUB84(in_dr6, 0));
                    } else {
                        dVar18 = *pdVar7;
                        dVar20 = *(double *)((int)pdVar10 + -4);
                        dVar22 = *(double *)((int)pdVar10 + 4);
                        pdVar10 = (double *)((int)pdVar10 + 0xc);
                    }
                    pdVar7 = pdVar10 + -3;
                    if (cVar33 == '\0') {
                        dVar22 = (double)CONCAT44(-(float)((u64)dVar22 >> 0x20), SUB84(dVar22, 0));
                    } else {
                        dVar22 = -dVar22;
                    }
                    if (cVar34 == '\0') {
                        pdVar10 = (double *)((int)a3 + 0x14);
                        *(u32 *)pdVar10 = uVar27;
                    } else {
                        pdVar10 = a3 + 2;
                        *pdVar10 = dVar31;
                    }
                    if (cVar33 == '\0') {
                        dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + fVar28, SUB84(dVar22, 0));
                    } else {
                        dVar22 = dVar22 + dVar21;
                    }
                    if (cVar34 == '\0') {
                        pdVar10 = (double *)((int)pdVar10 + -4);
                        *(int *)pdVar10 = (int)((u64)dVar20 >> 0x20);
                    } else {
                        pdVar10 = pdVar10 + -1;
                        *pdVar10 = dVar20;
                    }
                    if (cVar33 == '\0') {
                        bVar32 = (float)((u64)dVar22 >> 0x20) < fVar28;
                    } else {
                        bVar32 = dVar22 < dVar21;
                    }
                    if (cVar34 == '\0') {
                        pdVar10 = (double *)((int)pdVar10 + -4);
                        *(int *)pdVar10 = (int)((u64)dVar18 >> 0x20);
                    } else {
                        pdVar10 = pdVar10 + -1;
                        *pdVar10 = dVar18;
                    }
                    dVar23 = dVar22;
                    if ((bVar32) && (dVar23 = dVar21, cVar34 == '\0')) {
                        dVar23 = (double)CONCAT44(fVar28, SUB84(dVar22, 0));
                    }
                    uVar27 = (u32)((u64)dVar23 >> 0x20);
                    in_dr6 = (double)CONCAT44(uVar27, -SUB84(dVar23, 0));
                    iVar2 = iVar2 + iVar13 + 1;
                    *(u32 *)pdVar10 = 0xf0000000;
                    iVar13 = 0;
                    if (cVar34 == '\0') {
                        *(u32 *)(pdVar10 + 3) = uVar27;
                    } else {
                        pdVar10[3] = in_dr6;
                    }
                    a3 = pdVar10 + 4;
                }
                if (cVar34 == '\0') {
                    dVar18 = (double)CONCAT44(*(u32 *)ar4_00, SUB84(dVar18, 0));
                } else {
                    dVar18 = *ar4_00;
                }
                in_dr2 = (double)CONCAT44(0x3f800000, SUB84(dVar20, 0));
                if (cVar33 == '\0') {
                    bVar32 = 1.0 < (float)((u64)dVar18 >> 0x20);
                } else {
                    bVar32 = in_dr2 < dVar18;
                }
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar18, 0));
                } else {
                    in_dr0 = *pdVar7;
                }
                if (!bVar32) {
                    if (cVar33 == '\0') {
                        bVar32 = 1.0 < (float)((u64)in_dr0 >> 0x20);
                    } else {
                        bVar32 = in_dr2 < in_dr0;
                    }
                    if (cVar34 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(in_dr0, 0));
                    } else {
                        in_dr0 = *pdVar9;
                    }
                    if (!bVar32) {
                        if (cVar33 == '\0') {
                            bVar32 = (float)((u64)in_dr0 >> 0x20) < 1.0;
                        } else {
                            bVar32 = in_dr0 < in_dr2;
                        }
                        if (bVar32)
                            goto LAB_8c2318f0;
                    }
                }
                *(u32 *)((int)puVar17 + -4) = uVar1;
                *(int *)((int)puVar17 + -8) = iVar2;
                *(int *)((int)puVar17 + -0xc) = iVar3;
                *(short **)((int)puVar17 + -0x10) = psVar4;
                *(int *)((int)puVar17 + -0x14) = a1;
                *(int *)((int)puVar17 + -0x18) = iVar5;
                if (cVar34 == '\0') {
                    *(float *)((int)puVar17 + -0x1c) = fVar28;
                    *(int *)((int)puVar17 + -0x20) = SUB84(dVar21, 0);
                    *(float *)((int)puVar17 + -0x24) = SUB84(dVar29, 0);
                    *(u32 *)((int)puVar17 + -0x28) = uVar26;
                    puVar14 = (u32 *)((int)puVar17 + -0x2c);
                    *(int *)((int)puVar17 + -0x2c) = SUB84(dVar30, 0);
                } else {
                    *(double *)((int)puVar17 + -0x20) = dVar21;
                    *(u64 *)((int)puVar17 + -0x28) = in_xd4;
                    *(u64 *)((int)puVar17 + -0x30) = in_xd8;
                    *(double *)((int)puVar17 + -0x38) = dVar30;
                    puVar14 = (u32 *)((int)puVar17 + -0x40);
                    *(u64 *)((int)puVar17 + -0x40) = in_xd10;
                    in_xd4 = in_xd8;
                }
                a3 = (double *)vram64_2319cc(ar4_00, pdVar7, pdVar9, a3);
                if (cVar34 == '\0') {
                    dVar30 = (double)(u64)*puVar14;
                    dVar29 = (double)(u64)puVar14[2];
                    pdVar16 = (double *)(puVar14 + 3);
                    puVar15 = puVar14 + 5;
                } else {
                    in_xd10 = *(u64 *)puVar14;
                    dVar30 = *(double *)(puVar14 + 2);
                    in_xd8 = *(u64 *)(puVar14 + 4);
                    in_xd4 = *(u64 *)(puVar14 + 6);
                    pdVar16 = (double *)(puVar14 + 8);
                    puVar15 = puVar14 + 10;
                }
                dVar21 = *pdVar16;
                iVar5 = *puVar15;
                a1 = puVar15[1];
                psVar4 = (short *)puVar15[2];
                iVar3 = puVar15[3];
                iVar2 = puVar15[4];
                uVar1 = puVar15[5];
                puVar17 = puVar15 + 6;
                if (cVar33 == '\0') {
                    puVar17 = puVar15 + 6;
                }
            } else {
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)dVar18 >> 0x20) < 1.0;
                } else {
                    bVar32 = dVar18 < dVar20;
                }
                if (cVar34 == '\0') {
                    dVar18 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar18, 0));
                } else {
                    dVar18 = *pdVar9;
                }
                if (bVar32)
                    goto LAB_8c23179c;
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)dVar18 >> 0x20) < 1.0;
                    fVar24 = (float)((u64)in_dr6 >> 0x20) - (float)((u64)dVar29 >> 0x20);
                } else {
                    bVar32 = dVar18 < dVar20;
                    fVar24 = (float)((u64)(in_dr6 - dVar29) >> 0x20);
                }
                if (cVar33 == '\0') {
                    in_dr6 = (double)((u64)(u32)(fVar24 * SUB84(dVar29, 0)) << 0x20);
                } else {
                    in_dr6 = (double)((u64)(u32)fVar24 << 0x20) * dVar29;
                }
                if (bVar32)
                    goto LAB_8c23179c;
                fVar24 = SUB84(in_dr6, 0);
                if (cVar33 != '\0' || fVar24 <= (float)((u64)in_dr6 >> 0x20)) {
                    if (iVar12 != 0) {
                        if (cVar34 == '\0') {
                            dVar18 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar18, 0));
                            dVar20 = (double)CONCAT44(*(u32 *)(pdVar10 + -1), 0x3f800000);
                            dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -4), fVar24);
                        } else {
                            dVar18 = *pdVar7;
                            dVar20 = *(double *)((int)pdVar10 + -4);
                            dVar22 = *(double *)((int)pdVar10 + 4);
                            pdVar10 = (double *)((int)pdVar10 + 0xc);
                        }
                        pdVar7 = pdVar10 + -3;
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)a3 + 0x14);
                            *(u32 *)pdVar10 = uVar27;
                        } else {
                            pdVar10 = a3 + 2;
                            *pdVar10 = dVar31;
                        }
                        if (cVar33 == '\0') {
                            dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + fVar28, SUB84(dVar22, 0));
                        } else {
                            dVar22 = dVar22 + dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar20 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar20;
                        }
                        if (cVar33 == '\0') {
                            bVar32 = (float)((u64)dVar22 >> 0x20) < fVar28;
                        } else {
                            bVar32 = dVar22 < dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar18 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar18;
                        }
                        in_dr6 = dVar22;
                        if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
                            in_dr6 = (double)CONCAT44(fVar28, SUB84(dVar22, 0));
                        }
                        iVar2 = iVar2 + iVar12 + 1;
                        *(u32 *)pdVar10 = 0xf0000000;
                        iVar12 = 0;
                        if (cVar34 == '\0') {
                            *(int *)(pdVar10 + 3) = (int)((u64)in_dr6 >> 0x20);
                        } else {
                            pdVar10[3] = in_dr6;
                        }
                        a3 = pdVar10 + 4;
                    }
                    if (iVar13 == 0) {
                        if (cVar34 == '\0') {
                            dVar18 = (double)CONCAT44(*(u32 *)ar4_00, SUB84(dVar18, 0));
                            dVar20 = (double)CONCAT44(*(u32 *)(iVar8 + -8), SUB84(dVar20, 0));
                            dVar22 = (double)CONCAT44(*(u32 *)(iVar8 + -4), SUB84(in_dr6, 0));
                        } else {
                            dVar18 = *ar4_00;
                            dVar20 = *(double *)(iVar8 + -4);
                            dVar22 = *(double *)(iVar8 + 4);
                        }
                        iVar13 = 1;
                        if (cVar33 == '\0') {
                            dVar22 = (double)CONCAT44(-(float)((u64)dVar22 >> 0x20), SUB84(dVar22, 0));
                        } else {
                            dVar22 = -dVar22;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)a3 + 0x14);
                            *(u32 *)pdVar10 = uVar26;
                        } else {
                            pdVar10 = a3 + 2;
                            *pdVar10 = dVar30;
                        }
                        if (cVar33 == '\0') {
                            dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + fVar28, SUB84(dVar22, 0));
                        } else {
                            dVar22 = dVar22 + dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar20 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar20;
                        }
                        if (cVar33 == '\0') {
                            bVar32 = (float)((u64)dVar22 >> 0x20) < fVar28;
                        } else {
                            bVar32 = dVar22 < dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar18 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar18;
                        }
                        dVar23 = dVar22;
                        if ((bVar32) && (dVar23 = dVar21, cVar34 == '\0')) {
                            dVar23 = (double)CONCAT44(fVar28, SUB84(dVar22, 0));
                        }
                        uVar26 = (u32)((u64)dVar23 >> 0x20);
                        in_dr6 = (double)CONCAT44(uVar26, -SUB84(dVar23, 0));
                        *(u32 *)pdVar10 = 0xe0000000;
                        if (cVar34 == '\0') {
                            *(u32 *)(pdVar10 + 3) = uVar26;
                        } else {
                            pdVar10[3] = in_dr6;
                        }
                        a3 = pdVar10 + 4;
                    }
                    if (cVar34 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar18, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(dVar20, 0));
                        dVar18 = (double)CONCAT44(*(u32 *)(pdVar7 + 1), SUB84(in_dr6, 0));
                        pdVar7 = (double *)((int)pdVar7 + 0xc);
                    } else {
                        in_dr0 = *pdVar7;
                        in_dr2 = pdVar7[1];
                        dVar18 = pdVar7[2];
                        pdVar7 = pdVar7 + 3;
                    }
                    iVar13 = iVar13 + 1;
                    pdVar7 = pdVar7 + -3;
                    if (cVar33 == '\0') {
                        dVar18 = (double)CONCAT44(-(float)((u64)dVar18 >> 0x20), SUB84(dVar18, 0));
                    } else {
                        dVar18 = -dVar18;
                    }
                    if (cVar34 == '\0') {
                        pdVar10 = (double *)((int)a3 + 0x14);
                        *(u32 *)pdVar10 = uVar27;
                    } else {
                        pdVar10 = a3 + 2;
                        *pdVar10 = dVar31;
                    }
                    if (cVar33 == '\0') {
                        dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) + fVar28, SUB84(dVar18, 0));
                    } else {
                        dVar18 = dVar18 + dVar21;
                    }
                    if (cVar34 == '\0') {
                        pdVar10 = (double *)((int)pdVar10 + -4);
                        *(int *)pdVar10 = (int)((u64)in_dr2 >> 0x20);
                    } else {
                        pdVar10 = pdVar10 + -1;
                        *pdVar10 = in_dr2;
                    }
                    if (cVar33 == '\0') {
                        bVar32 = (float)((u64)dVar18 >> 0x20) < fVar28;
                    } else {
                        bVar32 = dVar18 < dVar21;
                    }
                    if (cVar34 == '\0') {
                        pdVar10 = (double *)((int)pdVar10 + -4);
                        *(int *)pdVar10 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        pdVar10 = pdVar10 + -1;
                        *pdVar10 = in_dr0;
                    }
                    dVar22 = dVar18;
                    if ((bVar32) && (dVar22 = dVar21, cVar34 == '\0')) {
                        dVar22 = (double)CONCAT44(fVar28, SUB84(dVar18, 0));
                    }
                    uVar26 = (u32)((u64)dVar22 >> 0x20);
                    in_dr6 = (double)CONCAT44(uVar26, -SUB84(dVar22, 0));
                    *(u32 *)pdVar10 = 0xe0000000;
                    if (cVar34 == '\0') {
                        *(u32 *)(pdVar10 + 3) = uVar26;
                    } else {
                        pdVar10[3] = in_dr6;
                    }
                    a3 = pdVar10 + 4;
                } else {
                    if (iVar13 != 0) {
                        if (cVar34 == '\0') {
                            dVar18 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar18, 0));
                            dVar20 = (double)CONCAT44(*(u32 *)(pdVar10 + -1), 0x3f800000);
                            dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -4), fVar24);
                        } else {
                            dVar18 = *pdVar7;
                            dVar20 = *(double *)((int)pdVar10 + -4);
                            dVar22 = *(double *)((int)pdVar10 + 4);
                            pdVar10 = (double *)((int)pdVar10 + 0xc);
                        }
                        pdVar7 = pdVar10 + -3;
                        if (cVar33 == '\0') {
                            dVar22 = (double)CONCAT44(-(float)((u64)dVar22 >> 0x20), SUB84(dVar22, 0));
                        } else {
                            dVar22 = -dVar22;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)a3 + 0x14);
                            *(u32 *)pdVar10 = uVar27;
                        } else {
                            pdVar10 = a3 + 2;
                            *pdVar10 = dVar31;
                        }
                        if (cVar33 == '\0') {
                            dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + fVar28, SUB84(dVar22, 0));
                        } else {
                            dVar22 = dVar22 + dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar20 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar20;
                        }
                        if (cVar33 == '\0') {
                            bVar32 = (float)((u64)dVar22 >> 0x20) < fVar28;
                        } else {
                            bVar32 = dVar22 < dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar18 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar18;
                        }
                        dVar23 = dVar22;
                        if ((bVar32) && (dVar23 = dVar21, cVar34 == '\0')) {
                            dVar23 = (double)CONCAT44(fVar28, SUB84(dVar22, 0));
                        }
                        uVar25 = (u32)((u64)dVar23 >> 0x20);
                        in_dr6 = (double)CONCAT44(uVar25, -SUB84(dVar23, 0));
                        iVar2 = iVar2 + iVar13 + 1;
                        *(u32 *)pdVar10 = 0xf0000000;
                        iVar13 = 0;
                        if (cVar34 == '\0') {
                            *(u32 *)(pdVar10 + 3) = uVar25;
                        } else {
                            pdVar10[3] = in_dr6;
                        }
                        a3 = pdVar10 + 4;
                    }
                    if (iVar12 == 0) {
                        if (cVar34 == '\0') {
                            dVar18 = (double)CONCAT44(*(u32 *)ar4_00, SUB84(dVar18, 0));
                            dVar20 = (double)CONCAT44(*(u32 *)(iVar8 + -8), SUB84(dVar20, 0));
                            dVar22 = (double)CONCAT44(*(u32 *)(iVar8 + -4), SUB84(in_dr6, 0));
                            pdVar10 = (double *)((int)a3 + 0x14);
                            *(u32 *)pdVar10 = uVar26;
                        } else {
                            dVar18 = *ar4_00;
                            dVar20 = *(double *)(iVar8 + -4);
                            dVar22 = *(double *)(iVar8 + 4);
                            pdVar10 = a3 + 2;
                            *pdVar10 = dVar30;
                        }
                        iVar12 = 1;
                        if (cVar33 == '\0') {
                            dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) + fVar28, SUB84(dVar22, 0));
                        } else {
                            dVar22 = dVar22 + dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar20 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar20;
                        }
                        if (cVar33 == '\0') {
                            bVar32 = (float)((u64)dVar22 >> 0x20) < fVar28;
                        } else {
                            bVar32 = dVar22 < dVar21;
                        }
                        if (cVar34 == '\0') {
                            pdVar10 = (double *)((int)pdVar10 + -4);
                            *(int *)pdVar10 = (int)((u64)dVar18 >> 0x20);
                        } else {
                            pdVar10 = pdVar10 + -1;
                            *pdVar10 = dVar18;
                        }
                        in_dr6 = dVar22;
                        if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
                            in_dr6 = (double)CONCAT44(fVar28, SUB84(dVar22, 0));
                        }
                        *(u32 *)pdVar10 = 0xe0000000;
                        if (cVar34 == '\0') {
                            *(int *)(pdVar10 + 3) = (int)((u64)in_dr6 >> 0x20);
                        } else {
                            pdVar10[3] = in_dr6;
                        }
                        a3 = pdVar10 + 4;
                    }
                    if (cVar34 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar18, 0));
                        in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(dVar20, 0));
                        dVar18 = (double)CONCAT44(*(u32 *)(pdVar7 + 1), SUB84(in_dr6, 0));
                        pdVar7 = (double *)((int)pdVar7 + 0xc);
                    } else {
                        in_dr0 = *pdVar7;
                        in_dr2 = pdVar7[1];
                        dVar18 = pdVar7[2];
                        pdVar7 = pdVar7 + 3;
                    }
                    iVar12 = iVar12 + 1;
                    pdVar7 = pdVar7 + -3;
                    if (cVar34 == '\0') {
                        pdVar10 = (double *)((int)a3 + 0x14);
                        *(u32 *)pdVar10 = uVar27;
                    } else {
                        pdVar10 = a3 + 2;
                        *pdVar10 = dVar31;
                    }
                    if (cVar33 == '\0') {
                        dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) + fVar28, SUB84(dVar18, 0));
                    } else {
                        dVar18 = dVar18 + dVar21;
                    }
                    if (cVar34 == '\0') {
                        pdVar10 = (double *)((int)pdVar10 + -4);
                        *(int *)pdVar10 = (int)((u64)in_dr2 >> 0x20);
                    } else {
                        pdVar10 = pdVar10 + -1;
                        *pdVar10 = in_dr2;
                    }
                    if (cVar33 == '\0') {
                        bVar32 = (float)((u64)dVar18 >> 0x20) < fVar28;
                    } else {
                        bVar32 = dVar18 < dVar21;
                    }
                    if (cVar34 == '\0') {
                        pdVar10 = (double *)((int)pdVar10 + -4);
                        *(int *)pdVar10 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        pdVar10 = pdVar10 + -1;
                        *pdVar10 = in_dr0;
                    }
                    in_dr6 = dVar18;
                    if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
                        in_dr6 = (double)CONCAT44(fVar28, SUB84(dVar18, 0));
                    }
                    *(u32 *)pdVar10 = 0xe0000000;
                    if (cVar34 == '\0') {
                        *(int *)(pdVar10 + 3) = (int)((u64)in_dr6 >> 0x20);
                    } else {
                        pdVar10[3] = in_dr6;
                    }
                    a3 = pdVar10 + 4;
                }
            }
        LAB_8c2318f0:
            fVar28 = SUB84(dVar21, 0);
            if (cVar33 == '\0') {
                dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) * fVar28, SUB84(dVar19, 0));
            } else {
                dVar19 = dVar19 * dVar21;
            }
            a0 = (short *)((int)psVar4 + iVar5);
            if (cVar33 == '\0') {
                dVar18 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) + fVar28, SUB84(dVar19, 0) * fVar28);
            } else {
                dVar18 = dVar19 * dVar21 + dVar21;
            }
            iVar6 = iVar6 + -1;
            if (cVar33 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) + fVar28);
            } else {
                in_dr14 = dVar18 + dVar21;
            }
            in_dr10 = dVar31;
            if (cVar34 == '\0') {
                in_dr10 = (double)CONCAT44((int)((u64)dVar31 >> 0x20), SUB84(dVar30, 0));
            }
            fVar28 = -SUB84(dVar29, 0);
            uVar26 = (u32)((u64)in_dr14 >> 0x20);
            in_dr12 = in_dr14;
            if (cVar34 == '\0') {
                in_dr12 = (double)CONCAT44(uVar26, SUB84(dVar31, 0));
            }
            dVar30 = in_dr10;
            dVar31 = in_dr12;
        } while (iVar6 != 0);
        fVar28 = (float)((u64)dVar21 >> 0x20);
        if (iVar12 == 0) {
            if (iVar13 != 0) {
                if (cVar34 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(in_dr0, 0));
                    pdVar7 = (double *)(iVar11 + -8);
                } else {
                    in_dr0 = *pdVar9;
                    pdVar7 = (double *)(iVar11 + -4);
                }
                if (cVar34 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(in_dr2, 0));
                    dVar30 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(in_dr6, 0));
                } else {
                    in_dr2 = *pdVar7;
                    dVar30 = pdVar7[1];
                }
                if (cVar33 == '\0') {
                    dVar30 = (double)CONCAT44(-(float)((u64)dVar30 >> 0x20), SUB84(dVar30, 0));
                } else {
                    dVar30 = -dVar30;
                }
                if (cVar34 == '\0') {
                    pdVar7 = (double *)((int)a3 + 0x14);
                    *(u32 *)pdVar7 = uVar26;
                } else {
                    pdVar7 = a3 + 2;
                    *pdVar7 = in_dr14;
                }
                if (cVar33 == '\0') {
                    dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + fVar28, SUB84(dVar30, 0));
                } else {
                    dVar30 = dVar30 + dVar21;
                }
                if (cVar34 == '\0') {
                    pdVar7 = (double *)((int)pdVar7 + -4);
                    *(int *)pdVar7 = (int)((u64)in_dr2 >> 0x20);
                } else {
                    pdVar7 = pdVar7 + -1;
                    *pdVar7 = in_dr2;
                }
                if (cVar33 == '\0') {
                    bVar32 = (float)((u64)dVar30 >> 0x20) < fVar28;
                } else {
                    bVar32 = dVar30 < dVar21;
                }
                if (cVar34 == '\0') {
                    pdVar7 = (double *)((int)pdVar7 + -4);
                    *(int *)pdVar7 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    pdVar7 = pdVar7 + -1;
                    *pdVar7 = in_dr0;
                }
                dVar31 = dVar30;
                if ((bVar32) && (dVar31 = dVar21, cVar34 == '\0')) {
                    dVar31 = (double)CONCAT44(fVar28, SUB84(dVar30, 0));
                }
                uVar26 = (u32)((u64)dVar31 >> 0x20);
                in_dr6 = (double)CONCAT44(uVar26, -SUB84(dVar31, 0));
                iVar2 = iVar2 + iVar13 + 1;
                *(u32 *)pdVar7 = 0xf0000000;
                if (cVar34 == '\0') {
                    *(u32 *)(pdVar7 + 3) = uVar26;
                } else {
                    pdVar7[3] = in_dr6;
                }
                a3 = pdVar7 + 4;
            }
        } else {
            if (cVar34 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(in_dr0, 0));
                pdVar7 = (double *)(iVar11 + -8);
            } else {
                in_dr0 = *pdVar9;
                pdVar7 = (double *)(iVar11 + -4);
            }
            if (cVar34 == '\0') {
                in_dr2 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(in_dr2, 0));
                dVar30 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(in_dr6, 0));
                pdVar7 = (double *)((int)a3 + 0x14);
                *(u32 *)pdVar7 = uVar26;
            } else {
                in_dr2 = *pdVar7;
                dVar30 = pdVar7[1];
                pdVar7 = a3 + 2;
                *pdVar7 = in_dr14;
            }
            if (cVar33 == '\0') {
                dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) + fVar28, SUB84(dVar30, 0));
            } else {
                dVar30 = dVar30 + dVar21;
            }
            if (cVar34 == '\0') {
                pdVar7 = (double *)((int)pdVar7 + -4);
                *(int *)pdVar7 = (int)((u64)in_dr2 >> 0x20);
            } else {
                pdVar7 = pdVar7 + -1;
                *pdVar7 = in_dr2;
            }
            if (cVar33 == '\0') {
                bVar32 = (float)((u64)dVar30 >> 0x20) < fVar28;
            } else {
                bVar32 = dVar30 < dVar21;
            }
            if (cVar34 == '\0') {
                pdVar7 = (double *)((int)pdVar7 + -4);
                *(int *)pdVar7 = (int)((u64)in_dr0 >> 0x20);
            } else {
                pdVar7 = pdVar7 + -1;
                *pdVar7 = in_dr0;
            }
            in_dr6 = dVar30;
            if ((bVar32) && (in_dr6 = dVar21, cVar34 == '\0')) {
                in_dr6 = (double)CONCAT44(fVar28, SUB84(dVar30, 0));
            }
            iVar2 = iVar2 + iVar12 + 1;
            *(u32 *)pdVar7 = 0xf0000000;
            if (cVar34 == '\0') {
                *(int *)(pdVar7 + 3) = (int)((u64)in_dr6 >> 0x20);
            } else {
                pdVar7[3] = in_dr6;
            }
            a3 = pdVar7 + 4;
        }
        uVar1 = uVar1 - 1;
        if (uVar1 == 0) {
            g_8c4aa520 = g_8c4aa520 + iVar2;
            g_8c4aa51c = g_8c4aa51c + iVar3;
            return a3;
        }
    } while (true);
}

/*
 * vram64_2319cc  0x8c2319cc
 * called by: gfxlib_uses_vram64_22a828, gfxlib_uses_vram64_22aec8, gfxlib_uses_vram64_230f70, gfxlib_uses_vram64_231624
 */
u64 *vram64_2319cc(double *a0, double *a1, double *a2, u64 *a3) {
    int iVar1;
    int iVar2;
    double *pdVar3;
    u64 *puVar4;
    int iVar5;
    int iVar6;
    double *pdVar7;
    u64 *puVar8;
    u64 *puVar9;
    u32 in_fr1;
    double dVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    double dVar16;
    u64 uVar17;
    u64 uVar18;
    u64 uVar19;
    double in_dr4;
    u32 in_fr7;
    double dVar20;
    float fVar21;
    u32 in_fr9;
    double dVar22;
    float fVar23;
    double dVar24;
    float fVar25;
    u32 uVar26;
    double in_dr12;
    double dVar27;
    u32 uVar28;
    double dVar29;
    u32 uVar30;
    double in_xd0;
    double dVar31;
    double in_xd2;
    double dVar32;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd10;
    double in_xd12;
    bool bVar33;
    u8 auStack_ac[8];
    u8 auStack_a4[8];
    u8 auStack_9c[8];
    u8 auStack_94[8];
    u8 auStack_8c[88];
    u8 auStack_34[16];
    u64 auStack_24[2];

    uVar26 = (u32)((u64)in_dr12 >> 0x20);

    puVar9 = auStack_24;
    auStack_24[0] = CONCAT44(SUB84(in_dr12, 0), uVar26);

    if ((g_8c4aa4f0 & 0x10000) == 0) {

        in_dr12 = (double)CONCAT44(uVar26, 0x3f000000);

        fVar14 = SUB84(in_dr12, 0);
        if ((g_8c4aa4f0 & 0x20000) == 0) {
            dVar24 = in_xd12;
            dVar10 = in_xd12;

            dVar24 = (double)CONCAT44(fVar14, fVar14);
            dVar10 = in_xd10;

        } else {

            dVar24 = (double)CONCAT44(g_8c277af8, g_8c277afc);

            dVar10 = in_xd10;

            dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) + fVar14, SUB84(dVar24, 0) + fVar14);
        }

        dVar29 = (double)CONCAT44(g_8c4aa4e0, g_8c4aa4dc);
        dVar22 = (double)CONCAT44(g_8c4aa4a8, in_fr9);
        in_fr7 = g_8c4aa4a8;

        dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar29 >> 0x20), SUB84(dVar22, 0));

        dVar20 = in_xd6;

        dVar20 = (double)CONCAT44(in_fr7, in_fr7);

        dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * SUB84(dVar29, 0), SUB84(dVar20, 0));

        dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), g_8c4aa4b4);

        fVar23 = (float)((u64)dVar22 >> 0x20);
        fVar21 = (float)((u64)dVar20 >> 0x20);

        dVar29 = (double)CONCAT44(1.0 / fVar23, 1.0 / fVar21);

        dVar22 = (double)CONCAT44(fVar23, g_8c4aa4b8);
        *(u32 *)((int)puVar9 + -0x78) = *(u32 *)((int)a0 + 4);
        *(u32 *)((int)puVar9 + -0x74) = *(u32 *)(a0 + 1);
        *(u32 *)((int)puVar9 + -0x70) = *(u32 *)((int)a0 + 0xc);
        in_xd12 = (double)CONCAT44(fVar14, in_fr1);
        *(u32 *)((int)puVar9 + -100) = *(u32 *)a0;
        dVar16 = (double)CONCAT44(*(u32 *)a0, *(u32 *)((int)a0 + 4));

        fVar23 = SUB84(dVar20, 0);
        fVar14 = SUB84(dVar29, 0);

        fVar11 = (SUB84(dVar16, 0) - fVar23) * (float)((u64)dVar16 >> 0x20) * fVar14;

        *(float *)((int)puVar9 + -0x6c) = fVar11;
        dVar16 = (double)CONCAT44(*(u32 *)a0, *(u32 *)(a0 + 1));

        fVar11 = SUB84(dVar22, 0);
        fVar15 = (float)((u64)dVar29 >> 0x20);

        fVar12 = (SUB84(dVar16, 0) - fVar11) * (float)((u64)dVar16 >> 0x20) * fVar15;

        fVar25 = (float)((u64)dVar24 >> 0x20);

        *(float *)((int)puVar9 + -0x68) = fVar12;
        dVar16 = (double)CONCAT44(*(u32 *)(a0 + 3), fVar25);

        fVar12 = (float)((u64)in_xd12 >> 0x20);

        dVar16 = (double)(u64)(u32)(fVar12 * (float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0));

        uVar26 = SUB84(dVar24, 0);

        *(int *)((int)puVar9 + -0x60) = SUB84(dVar16, 0);
        uVar17 = CONCAT44(*(u32 *)((int)a0 + 0x1c), uVar26);

        uVar17 = (u64)(u32)(fVar12 * (float)(uVar17 >> 0x20) + (float)uVar17);

        *(int *)((int)puVar9 + -0x5c) = (int)uVar17;
        *(u32 *)((int)puVar9 + -0x50) = *(u32 *)((int)a1 + 4);
        *(u32 *)((int)puVar9 + -0x4c) = *(u32 *)(a1 + 1);
        *(u32 *)((int)puVar9 + -0x48) = *(u32 *)((int)a1 + 0xc);
        *(u32 *)((int)puVar9 + -0x3c) = *(u32 *)a1;
        dVar16 = (double)CONCAT44(*(u32 *)a1, *(u32 *)((int)a1 + 4));

        fVar13 = (SUB84(dVar16, 0) - fVar23) * (float)((u64)dVar16 >> 0x20) * fVar14;

        *(float *)((int)puVar9 + -0x44) = fVar13;
        dVar16 = (double)CONCAT44(*(u32 *)a1, *(u32 *)(a1 + 1));

        fVar13 = (SUB84(dVar16, 0) - fVar11) * (float)((u64)dVar16 >> 0x20) * fVar15;

        *(float *)((int)puVar9 + -0x40) = fVar13;
        dVar16 = (double)CONCAT44(*(u32 *)(a1 + 3), fVar25);

        dVar16 = (double)(u64)(u32)(fVar12 * (float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0));

        *(int *)((int)puVar9 + -0x38) = SUB84(dVar16, 0);
        uVar17 = CONCAT44(*(u32 *)((int)a1 + 0x1c), uVar26);

        uVar17 = (u64)(u32)(fVar12 * (float)(uVar17 >> 0x20) + (float)uVar17);

        *(int *)((int)puVar9 + -0x34) = (int)uVar17;
        *(u32 *)((int)puVar9 + -0x28) = *(u32 *)((int)a2 + 4);
        *(u32 *)((int)puVar9 + -0x24) = *(u32 *)(a2 + 1);
        *(u32 *)((int)puVar9 + -0x20) = *(u32 *)((int)a2 + 0xc);
        *(u32 *)((int)puVar9 + -0x14) = *(u32 *)a2;
        dVar16 = (double)CONCAT44(*(u32 *)a2, *(u32 *)((int)a2 + 4));

        fVar14 = (SUB84(dVar16, 0) - fVar23) * (float)((u64)dVar16 >> 0x20) * fVar14;

        *(float *)((int)puVar9 + -0x1c) = fVar14;
        dVar16 = (double)CONCAT44(*(u32 *)a2, *(u32 *)(a2 + 1));

        fVar14 = (float)((u64)dVar16 >> 0x20);
        dVar29 = (double)CONCAT44(fVar14, (SUB84(dVar16, 0) - fVar11) * fVar14 * fVar15);

        *(int *)((int)puVar9 + -0x18) = SUB84(dVar29, 0);
        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)(a2 + 3));

        dVar24 = (double)CONCAT44(fVar12 * SUB84(dVar29, 0) + fVar25, uVar26);

        *(int *)((int)puVar9 + -0x10) = (int)((u64)dVar24 >> 0x20);
        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), *(u32 *)((int)a2 + 0x1c));

        dVar24 = (double)(u64)(u32)(fVar12 * SUB84(dVar29, 0) + SUB84(dVar24, 0));

        *(int *)((int)puVar9 + -0xc) = SUB84(dVar24, 0);
        uVar26 = *(u32 *)((int)puVar9 + -0x3c);
        uVar30 = *(u32 *)((int)puVar9 + -0x40);
        in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), *(u32 *)((int)puVar9 + -100));
        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar30);
        dVar16 = (double)CONCAT44(uVar26, SUB84(in_xd12, 0));
        dVar10 = (double)CONCAT44(uVar30, *(u32 *)((int)puVar9 + -0x68));
        dVar24 = (double)CONCAT44(uVar26, SUB84(dVar24, 0));

        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) * SUB84(in_dr12, 0));
        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * SUB84(dVar10, 0), SUB84(dVar16, 0));

        dVar27 = (double)CONCAT44(*(u32 *)((int)puVar9 + -0x44), SUB84(in_dr12, 0));

        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar29, 0), SUB84(dVar16, 0));

        uVar28 = (u32)((u64)dVar27 >> 0x20);
        dVar32 = dVar27;

        dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar28);
        dVar32 = in_xd2;

        fVar14 = SUB84(dVar29, 0) * SUB84(dVar27, 0);

        dVar29 = dVar24;

        dVar24 = (double)CONCAT44(uVar26, fVar14);
        dVar29 = (double)CONCAT44(uVar26, *(u32 *)((int)puVar9 + -0x6c));

        dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) * SUB84(dVar29, 0), SUB84(dVar24, 0));

        dVar31 = dVar10;

        dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), uVar30);
        dVar31 = in_xd0;

        dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar16, 0) * SUB84(dVar29, 0));
        fVar14 = SUB84(dVar24, 0) - (float)((u64)dVar24 >> 0x20);

        dVar24 = (double)CONCAT44(*(u32 *)((int)puVar9 + -0x18), fVar14);

        dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) * SUB84(dVar24, 0), SUB84(dVar24, 0));

        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)((int)puVar9 + -0x1c));

        dVar24 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20),
                                  SUB84(dVar24, 0));

        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), uVar28);
        dVar27 = dVar32;

        fVar14 = SUB84(dVar24, 0) * SUB84(dVar10, 0);
        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), fVar14);
        fVar14 = SUB84(dVar16, 0) - fVar14;

        dVar10 = (double)CONCAT44(fVar14, *(u32 *)((int)puVar9 + -0x14));
        dVar16 = dVar31;

        fVar14 = (float)((u64)dVar10 >> 0x20);

        dVar24 =
            (double)((u64)(u32)((fVar14 * SUB84(dVar10, 0) + (float)((u64)dVar24 >> 0x20)) * SUB84(in_dr4, 0)) << 0x20);

        fVar15 = SUB84(dVar24, 0);
        fVar12 = (float)((u64)in_dr4 >> 0x20);
        if ((float)((u64)dVar24 >> 0x20) < fVar15) {

            dVar10 = (double)CONCAT44(fVar14, fVar12);
            dVar24 = (double)CONCAT44(*(u32 *)(a0 + 2), fVar15);

            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) + (float)((u64)dVar24 >> 0x20));

            *(int *)((int)puVar9 + -0x58) = SUB84(dVar10, 0);
            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), fVar12);

            *(u8 **)((int)puVar9 + -0x120) = (u8 *)((int)puVar9 + -0x50);

            dVar24 = (double)CONCAT44(*(u32 *)(a1 + 2), SUB84(dVar24, 0));

            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) + (float)((u64)dVar24 >> 0x20));

            *(int *)((int)puVar9 + -0x30) = SUB84(dVar10, 0);
            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), fVar12);

            *(u8 **)((int)puVar9 + -0x11c) = (u8 *)((int)puVar9 + -0x28);

            dVar24 = (double)CONCAT44(*(u32 *)(a2 + 2), SUB84(dVar24, 0));

            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) + (float)((u64)dVar24 >> 0x20));

            *(int *)((int)puVar9 + -8) = SUB84(dVar10, 0);
            *(u32 *)((int)puVar9 + -0x54) = *(u32 *)((int)a0 + 0x14);
            uVar18 = CONCAT44(*(u32 *)((int)a1 + 0x14), SUB84(dVar24, 0));

            *(int *)(*(int *)((int)puVar9 + -0x120) + 0x24) = (int)((u64)uVar18 >> 0x20);
            dVar24 = (double)CONCAT44(*(u32 *)((int)a2 + 0x14), (int)uVar18);

            *(int *)(*(int *)((int)puVar9 + -0x11c) + 0x24) = (int)((u64)dVar24 >> 0x20);

        } else {

            dVar10 = (double)CONCAT44(fVar14, fVar12);
            dVar24 = (double)CONCAT44(*(u32 *)(a0 + 2), fVar15);

            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) - (float)((u64)dVar24 >> 0x20));

            *(int *)((int)puVar9 + -0x58) = SUB84(dVar10, 0);
            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), fVar12);

            *(u8 **)((int)puVar9 + -0x120) = (u8 *)((int)puVar9 + -0x50);

            dVar24 = (double)CONCAT44(*(u32 *)(a1 + 2), SUB84(dVar24, 0));

            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) - (float)((u64)dVar24 >> 0x20));

            *(int *)((int)puVar9 + -0x30) = SUB84(dVar10, 0);
            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), fVar12);

            *(u8 **)((int)puVar9 + -0x11c) = (u8 *)((int)puVar9 + -0x28);

            dVar24 = (double)CONCAT44(*(u32 *)(a2 + 2), SUB84(dVar24, 0));

            dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) - (float)((u64)dVar24 >> 0x20));

            *(int *)((int)puVar9 + -8) = SUB84(dVar10, 0);
            dVar24 = (double)CONCAT44(*(u32 *)((int)a0 + 0x14), SUB84(dVar24, 0));

            dVar24 = (double)CONCAT44(-(float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

            *(int *)((int)puVar9 + -0x54) = (int)((u64)dVar24 >> 0x20);
            dVar24 = (double)CONCAT44(*(u32 *)((int)a1 + 0x14), SUB84(dVar24, 0));

            dVar24 = (double)CONCAT44(-(float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

            *(int *)(*(int *)((int)puVar9 + -0x120) + 0x24) = (int)((u64)dVar24 >> 0x20);
            dVar24 = (double)CONCAT44(*(u32 *)((int)a2 + 0x14), SUB84(dVar24, 0));

            dVar24 = (double)CONCAT44(-(float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

            *(int *)(*(int *)((int)puVar9 + -0x11c) + 0x24) = (int)((u64)dVar24 >> 0x20);
        }

        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)((int)puVar9 + -0x58));

        bVar33 = SUB84(dVar24, 0) < fVar12;

        if (bVar33) {

            *(float *)((int)puVar9 + -0x58) = fVar12;
        }

        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)((int)puVar9 + -0x30));

        bVar33 = SUB84(dVar24, 0) < fVar12;

        if (bVar33) {

            *(float *)((int)puVar9 + -0x30) = fVar12;
        }

        dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)((int)puVar9 + -8));

        bVar33 = SUB84(dVar24, 0) < fVar12;

        if (bVar33) {

            *(float *)((int)puVar9 + -8) = fVar12;
        }
        iVar1 = 0;
        puVar8 = (u64 *)((int)puVar9 + -0x118);
        iVar5 = 0;
        iVar6 = 2;
        while (iVar2 = iVar5, iVar2 < 3) {
            iVar6 = iVar6 * 0x28;

            uVar18 = CONCAT44(*(u32 *)((int)puVar9 + iVar6 + -100), 0x3f800000);

            iVar5 = iVar2 * 0x28;

            uVar19 = CONCAT44(*(u32 *)((int)puVar9 + iVar5 + -100), (float)uVar18);

            fVar14 = (float)uVar19;
            if (((1 && (float)uVar18 < (float)((u64)uVar18 >> 0x20)) ^ 1) !=
                -((1 && fVar14 < (float)((u64)uVar19 >> 0x20)) - 1)) {

                fVar14 = *(float *)((int)puVar9 + iVar6 + -100);
                dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), *(u32 *)((int)puVar9 + iVar5 + -100));
                fVar15 = fVar14;
                dVar24 = (double)CONCAT44(fVar14, SUB84(in_dr4, 0));

                dVar16 = (double)CONCAT44(0x3f800000, -fVar14);

                dVar16 = (double)CONCAT44(0x3f800000, -fVar14 + 1.0);
                dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), SUB84(dVar10, 0) - fVar15);

                dVar24 = (double)CONCAT44(SUB84(dVar16, 0), *(u32 *)((int)puVar9 + iVar6 + -0x6c));

                dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) / SUB84(dVar10, 0), SUB84(dVar24, 0));

                dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), *(u32 *)((int)puVar9 + iVar5 + -0x6c));
                dVar10 = (double)((u64)dVar24 & 0xffffffff);

                dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar16, 0) - SUB84(dVar24, 0));

                uVar26 = (u32)((u64)dVar24 >> 0x20);

                dVar32 = (double)CONCAT44(*(u32 *)((int)puVar9 + iVar6 + -0x68), SUB84(dVar29, 0));
                dVar24 = (double)CONCAT44(uVar26, SUB84(dVar10, 0));
                in_dr4 = (double)CONCAT44(uVar26, fVar23);

                dVar24 = (double)(u64)(u32)((float)((u64)dVar24 >> 0x20) * SUB84(dVar16, 0) + SUB84(dVar24, 0));

                dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), *(u32 *)((int)puVar9 + iVar5 + -0x68));
                dVar24 = (double)CONCAT44(fVar21, SUB84(dVar24, 0));

                fVar14 = (float)((u64)dVar32 >> 0x20);

                dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar16, 0) - fVar14);
                in_dr4 = (double)CONCAT44(uVar26, (float)((u64)dVar24 >> 0x20) * SUB84(dVar24, 0) + SUB84(in_dr4, 0));

                uVar26 = (u32)((u64)in_dr4 >> 0x20);
                dVar29 = in_xd8;
                dVar24 = in_dr4;

                dVar29 = (double)CONCAT44(fVar11, SUB84(dVar32, 0));
                dVar24 = (double)CONCAT44(uVar26, fVar14);

                dVar24 = (double)(u64)(u32)((float)((u64)dVar24 >> 0x20) * SUB84(dVar16, 0) + SUB84(dVar24, 0));

                dVar32 = dVar22;

                dVar32 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar24, 0));

                dVar29 = (double)CONCAT44(
                    (float)((u64)dVar32 >> 0x20) * SUB84(dVar32, 0) + (float)((u64)dVar29 >> 0x20), SUB84(dVar29, 0));

                dVar10 = in_dr4;

                dVar10 = (double)CONCAT44(uVar26, SUB84(dVar32, 0));

                pdVar7 = (double *)(puVar8 + iVar1 * 5);
                uVar30 = (u32)((u64)dVar16 >> 0x20);

                *(int *)pdVar7 = SUB84(in_dr4, 0);
                *(int *)((int)pdVar7 + 4) = (int)((u64)dVar29 >> 0x20);
                *(u32 *)(pdVar7 + 1) = uVar30;
                dVar16 = (double)CONCAT44(uVar30, *(u32 *)((int)puVar9 + iVar5 + -0x60));
                in_dr4 = (double)CONCAT44(uVar26, *(u32 *)((int)puVar9 + iVar6 + -0x60));

                fVar14 = SUB84(dVar16, 0) - SUB84(in_dr4, 0);

                dVar24 = in_xd4;

                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), fVar14);

                fVar14 = (float)((u64)dVar10 >> 0x20);

                dVar24 = (double)CONCAT44(fVar14 * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

                uVar26 = (u32)((u64)dVar24 >> 0x20);

                *(u32 *)(pdVar7 + 3) = uVar26;
                dVar24 = (double)CONCAT44(uVar26, *(u32 *)((int)puVar9 + iVar5 + -0x5c));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)((int)puVar9 + iVar6 + -0x5c));

                fVar15 = SUB84(dVar24, 0) - SUB84(in_dr4, 0);

                dVar24 = in_xd4;

                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), fVar15);

                dVar24 = (double)CONCAT44(fVar14 * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

                uVar26 = (u32)((u64)dVar24 >> 0x20);

                *(u32 *)((int)pdVar7 + 0x1c) = uVar26;
                dVar24 = (double)CONCAT44(uVar26, *(u32 *)((int)puVar9 + iVar5 + -0x58));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)((int)puVar9 + iVar6 + -0x58));

                fVar15 = SUB84(dVar24, 0) - SUB84(in_dr4, 0);

                dVar24 = in_xd4;

                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), fVar15);

                dVar24 = (double)CONCAT44(fVar14 * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

                uVar26 = (u32)((u64)dVar24 >> 0x20);

                *(u32 *)(pdVar7 + 4) = uVar26;
                dVar24 = (double)CONCAT44(uVar26, *(u32 *)((int)puVar9 + iVar5 + -0x54));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)((int)puVar9 + iVar6 + -0x54));

                iVar1 = iVar1 + 1;

                fVar15 = SUB84(dVar24, 0) - SUB84(in_dr4, 0);

                dVar24 = in_xd4;

                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), fVar15);

                dVar24 = (double)CONCAT44(fVar14 * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

                *(int *)((int)pdVar7 + 0x24) = (int)((u64)dVar24 >> 0x20);
            }
            pdVar7 = (double *)((int)puVar9 + iVar2 * 0x28 + -0x78);

            uVar18 = CONCAT44(*(u32 *)((int)pdVar7 + 0x14), 0x3f800000);

            if ((float)uVar18 < (float)((u64)uVar18 >> 0x20)) {

                in_dr4 = (double)CONCAT44(*(u32 *)pdVar7, *(u32 *)((int)pdVar7 + 4));

                pdVar3 = (double *)(puVar8 + iVar1 * 5);
                iVar1 = iVar1 + 1;

                *(int *)pdVar3 = (int)((u64)in_dr4 >> 0x20);
                *(int *)((int)pdVar3 + 4) = SUB84(in_dr4, 0);
                *(u32 *)(pdVar3 + 1) = *(u32 *)(pdVar7 + 1);
                *(u32 *)(pdVar3 + 3) = *(u32 *)(pdVar7 + 3);
                *(u32 *)((int)pdVar3 + 0x1c) = *(u32 *)((int)pdVar7 + 0x1c);
                *(u32 *)(pdVar3 + 4) = *(u32 *)(pdVar7 + 4);
                *(u32 *)((int)pdVar3 + 0x24) = *(u32 *)((int)pdVar7 + 0x24);
            }
            iVar6 = iVar2;
            iVar5 = iVar2 + 1;
        }

        *(u32 *)((int)a3 + 0x1c) = *(u32 *)((int)puVar9 + -0xf4);
        *(u32 *)(a3 + 3) = *(u32 *)((int)puVar9 + -0xf8);
        *(u32 *)((int)a3 + 0x14) = *(u32 *)((int)puVar9 + -0xfc);
        *(u32 *)(a3 + 2) = *(u32 *)((int)puVar9 + -0x100);
        *(u32 *)((int)a3 + 0xc) = *(u32 *)((int)puVar9 + -0x110);
        *(u32 *)(a3 + 1) = *(u32 *)((int)puVar9 + -0x114);
        puVar4 = (u64 *)((int)a3 + 4);
        *(u32 *)puVar4 = *(u32 *)puVar8;

        *(u32 *)((int)puVar4 + -4) = 0xe0000000;

        *(u32 *)(puVar4 + 7) = *(u32 *)((int)puVar9 + -0xcc);
        *(u32 *)((int)puVar4 + 0x34) = *(u32 *)((int)puVar9 + -0xd0);
        *(u32 *)(puVar4 + 6) = *(u32 *)((int)puVar9 + -0xd4);
        *(u32 *)((int)puVar4 + 0x2c) = *(u32 *)((int)puVar9 + -0xd8);
        *(u32 *)(puVar4 + 5) = *(u32 *)((int)puVar9 + -0xe8);
        *(u32 *)((int)puVar4 + 0x24) = *(u32 *)((int)puVar9 + -0xec);
        puVar4 = puVar4 + 4;
        *(u32 *)puVar4 = *(u32 *)((int)puVar9 + -0xf0);

        *(u32 *)((int)puVar4 + -4) = 0xe0000000;
        if (iVar1 != 3) {

            *(u32 *)(puVar4 + 7) = *(u32 *)((int)puVar9 + -0x7c);
            *(u32 *)((int)puVar4 + 0x34) = *(u32 *)((int)puVar9 + -0x80);
            *(u32 *)(puVar4 + 6) = *(u32 *)((int)puVar9 + -0x84);
            *(u32 *)((int)puVar4 + 0x2c) = *(u32 *)((int)puVar9 + -0x88);
            *(u32 *)(puVar4 + 5) = *(u32 *)((int)puVar9 + -0x98);
            *(u32 *)((int)puVar4 + 0x24) = *(u32 *)((int)puVar9 + -0x9c);
            puVar4 = puVar4 + 4;
            *(u32 *)puVar4 = *(u32 *)((int)puVar9 + -0xa0);

            *(u32 *)((int)puVar4 + -4) = 0xe0000000;
        }

        *(u32 *)(puVar4 + 7) = *(u32 *)((int)puVar9 + -0xa4);
        *(u32 *)((int)puVar4 + 0x34) = *(u32 *)((int)puVar9 + -0xa8);
        *(u32 *)(puVar4 + 6) = *(u32 *)((int)puVar9 + -0xac);
        *(u32 *)((int)puVar4 + 0x2c) = *(u32 *)((int)puVar9 + -0xb0);
        *(u32 *)(puVar4 + 5) = *(u32 *)((int)puVar9 + -0xc0);
        *(u32 *)((int)puVar4 + 0x24) = *(u32 *)((int)puVar9 + -0xc4);
        puVar4 = puVar4 + 4;
        *(u32 *)puVar4 = *(u32 *)((int)puVar9 + -200);

        *(u32 *)((int)puVar4 + -4) = 0xf0000000;
        a3 = (u64 *)((int)puVar4 + 0x1c);
        g_8c4aa520 = g_8c4aa520 + iVar1;
    }
    return a3;
}

/*
 * vram64_231eac  0x8c231eac
 * called by: gfxlib_uses_vram64_229c68, gfxlib_uses_vram64_229f74, gfxlib_uses_vram64_230384, gfxlib_uses_vram64_2306a0
 */
u64 *vram64_231eac(double *a0, double *a1, double *a2, u64 *a3) {
    int iVar1;
    int iVar2;
    double *pdVar3;
    double *pdVar4;
    u64 *puVar5;
    int iVar6;
    int iVar7;
    u64 *puVar8;
    u32 in_fr1;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    double dVar15;
    double dVar16;
    u64 uVar17;
    double dVar18;
    u64 uVar19;
    double in_dr4;
    u32 uVar20;
    u32 uVar21;
    u32 in_fr7;
    float fVar22;
    double dVar23;
    float fVar24;
    u32 in_fr9;
    double dVar25;
    u32 uVar26;
    double dVar27;
    float fVar28;
    double in_dr12;
    double dVar30;
    double in_xd0;
    double in_xd2;
    double dVar31;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd10;
    double dVar32;
    double in_xd12;
    bool bVar33;
    bool bVar34;
    u8 auStack_ac[8];
    u8 auStack_a4[8];
    u8 auStack_9c[8];
    u8 auStack_94[8];
    u8 auStack_8c[88];
    u8 auStack_34[16];
    u64 auStack_24[2];
    double dVar29;

    uVar26 = (u32)((u64)in_dr12 >> 0x20);

    puVar8 = auStack_24;
    auStack_24[0] = CONCAT44(SUB84(in_dr12, 0), uVar26);

    if ((g_8c4aa4f0 & 0x10000) == 0) {

        in_dr12 = (double)CONCAT44(uVar26, 0x3f000000);

        fVar28 = SUB84(in_dr12, 0);
        if ((g_8c4aa4f0 & 0x20000) == 0) {
            dVar27 = in_xd12;
            dVar32 = in_xd12;

            dVar27 = (double)CONCAT44(fVar28, fVar28);
            dVar32 = in_xd10;

        } else {

            dVar27 = (double)CONCAT44(g_8c277af8, g_8c277afc);

            dVar32 = in_xd10;

            dVar27 = (double)CONCAT44((float)((u64)dVar27 >> 0x20) + fVar28, SUB84(dVar27, 0) + fVar28);
        }

        dVar30 = (double)CONCAT44(g_8c4aa4e0, g_8c4aa4dc);
        dVar25 = (double)CONCAT44(g_8c4aa4a8, in_fr9);
        in_fr7 = g_8c4aa4a8;

        dVar25 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) * (float)((u64)dVar30 >> 0x20), SUB84(dVar25, 0));

        dVar23 = in_xd6;

        dVar23 = (double)CONCAT44(in_fr7, in_fr7);

        dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) * SUB84(dVar30, 0), SUB84(dVar23, 0));

        dVar29 = (double)CONCAT44(0x3f800000, fVar28);
        dVar30 = dVar29;

        dVar30 = 0.007812501848093234;

        fVar12 = (float)((u64)dVar25 >> 0x20);

        dVar30 = (double)CONCAT44((float)((u64)dVar30 >> 0x20) / fVar12, SUB84(dVar30, 0));

        dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), g_8c4aa4b4);

        fVar24 = (float)((u64)dVar23 >> 0x20);

        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) / fVar24);

        dVar25 = (double)CONCAT44(fVar12, g_8c4aa4b8);
        *(u32 *)((int)puVar8 + -0x78) = *(u32 *)((int)a0 + 4);
        *(u32 *)((int)puVar8 + -0x74) = *(u32 *)(a0 + 1);
        *(u32 *)((int)puVar8 + -0x70) = *(u32 *)((int)a0 + 0xc);
        *(u32 *)((int)puVar8 + -100) = *(u32 *)a0;
        dVar15 = (double)CONCAT44(*(u32 *)a0, *(u32 *)((int)a0 + 4));

        fVar22 = SUB84(dVar23, 0);
        fVar12 = SUB84(dVar30, 0);

        fVar9 = (SUB84(dVar15, 0) - fVar22) * (float)((u64)dVar15 >> 0x20) * fVar12;

        *(float *)((int)puVar8 + -0x6c) = fVar9;
        dVar15 = (double)CONCAT44(*(u32 *)a0, *(u32 *)(a0 + 1));

        fVar9 = SUB84(dVar25, 0);
        fVar14 = (float)((u64)dVar30 >> 0x20);

        fVar13 = (float)((u64)dVar15 >> 0x20);
        dVar15 = (double)CONCAT44(fVar13, (SUB84(dVar15, 0) - fVar9) * fVar13 * fVar14);

        *(int *)((int)puVar8 + -0x68) = SUB84(dVar15, 0);
        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)(a0 + 2));

        fVar13 = (float)((u64)in_dr4 >> 0x20);

        fVar10 = SUB84(dVar15, 0) + fVar13;
        bVar33 = fVar10 < fVar13;

        *(float *)((int)puVar8 + -0x58) = fVar10;

        if (bVar33) {

            *(float *)((int)puVar8 + -0x58) = fVar13;
        }
        fVar10 = (float)((u64)dVar27 >> 0x20);

        *(u32 *)((int)puVar8 + -0x54) = *(u32 *)((int)a0 + 0x14);
        dVar16 = (double)CONCAT44(*(u32 *)(a0 + 3), fVar10);
        dVar15 = (double)CONCAT44(fVar28, in_fr1);

        fVar11 = (float)((u64)dVar15 >> 0x20);

        dVar16 = (double)(u64)(u32)(fVar11 * (float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0));

        uVar26 = SUB84(dVar27, 0);

        *(int *)((int)puVar8 + -0x60) = SUB84(dVar16, 0);
        uVar17 = CONCAT44(*(u32 *)((int)a0 + 0x1c), uVar26);

        uVar17 = (u64)(u32)(fVar11 * (float)(uVar17 >> 0x20) + (float)uVar17);

        *(int *)((int)puVar8 + -0x5c) = (int)uVar17;
        *(u32 *)((int)puVar8 + -0x50) = *(u32 *)((int)a1 + 4);
        *(u32 *)((int)puVar8 + -0x4c) = *(u32 *)(a1 + 1);
        *(u32 *)((int)puVar8 + -0x48) = *(u32 *)((int)a1 + 0xc);
        *(u32 *)((int)puVar8 + -0x3c) = *(u32 *)a1;
        dVar16 = (double)CONCAT44(*(u32 *)a1, *(u32 *)((int)a1 + 4));

        fVar11 = (SUB84(dVar16, 0) - fVar22) * (float)((u64)dVar16 >> 0x20) * fVar12;

        *(float *)((int)puVar8 + -0x44) = fVar11;
        dVar16 = (double)CONCAT44(*(u32 *)a1, *(u32 *)(a1 + 1));

        fVar11 = (float)((u64)dVar16 >> 0x20);
        dVar16 = (double)CONCAT44(fVar11, (SUB84(dVar16, 0) - fVar9) * fVar11 * fVar14);

        *(int *)((int)puVar8 + -0x40) = SUB84(dVar16, 0);
        dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), *(u32 *)(a1 + 2));

        fVar11 = SUB84(dVar16, 0) + fVar13;
        bVar33 = fVar11 < fVar13;

        *(float *)((int)puVar8 + -0x30) = fVar11;

        if (bVar33) {

            *(float *)((int)puVar8 + -0x30) = fVar13;
        }

        *(u32 *)((int)puVar8 + -0x2c) = *(u32 *)((int)a1 + 0x14);
        dVar16 = (double)CONCAT44(*(u32 *)(a1 + 3), fVar10);
        dVar15 = (double)CONCAT44(fVar28, SUB84(dVar15, 0));

        fVar11 = (float)((u64)dVar15 >> 0x20);

        dVar16 = (double)(u64)(u32)(fVar11 * (float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0));

        *(int *)((int)puVar8 + -0x38) = SUB84(dVar16, 0);
        uVar17 = CONCAT44(*(u32 *)((int)a1 + 0x1c), uVar26);

        uVar17 = (u64)(u32)(fVar11 * (float)(uVar17 >> 0x20) + (float)uVar17);

        *(int *)((int)puVar8 + -0x34) = (int)uVar17;
        *(u32 *)((int)puVar8 + -0x28) = *(u32 *)((int)a2 + 4);
        *(u32 *)((int)puVar8 + -0x24) = *(u32 *)(a2 + 1);
        *(u32 *)((int)puVar8 + -0x20) = *(u32 *)((int)a2 + 0xc);
        *(u32 *)((int)puVar8 + -0x14) = *(u32 *)a2;
        dVar16 = (double)CONCAT44(*(u32 *)a2, *(u32 *)((int)a2 + 4));

        fVar12 = (SUB84(dVar16, 0) - fVar22) * (float)((u64)dVar16 >> 0x20) * fVar12;

        *(float *)((int)puVar8 + -0x1c) = fVar12;
        dVar16 = (double)CONCAT44(*(u32 *)a2, *(u32 *)(a2 + 1));

        fVar12 = (float)((u64)dVar16 >> 0x20);
        dVar30 = (double)CONCAT44(fVar12, (SUB84(dVar16, 0) - fVar9) * fVar12 * fVar14);

        *(int *)((int)puVar8 + -0x18) = SUB84(dVar30, 0);
        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)(a2 + 2));

        fVar12 = SUB84(dVar30, 0) + fVar13;
        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar12);
        bVar33 = fVar12 < fVar13;

        *(float *)((int)puVar8 + -8) = fVar12;

        if (bVar33) {

            *(float *)((int)puVar8 + -8) = fVar13;
        }

        *(u32 *)((int)puVar8 + -4) = *(u32 *)((int)a2 + 0x14);
        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)(a2 + 3));
        dVar15 = (double)CONCAT44(fVar28, SUB84(dVar15, 0));

        fVar12 = (float)((u64)dVar15 >> 0x20);

        dVar27 = (double)CONCAT44(fVar12 * SUB84(dVar30, 0) + fVar10, uVar26);

        *(int *)((int)puVar8 + -0x10) = (int)((u64)dVar27 >> 0x20);
        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), *(u32 *)((int)a2 + 0x1c));

        dVar27 = (double)(u64)(u32)(fVar12 * SUB84(dVar30, 0) + SUB84(dVar27, 0));

        uVar26 = SUB84(dVar27, 0);

        *(u32 *)((int)puVar8 + -0xc) = uVar26;
        uVar20 = *(u32 *)((int)puVar8 + -0x3c);
        fVar28 = *(float *)((int)puVar8 + -0x40);
        dVar29 = (double)CONCAT44(0x3f800000, fVar28);
        pdVar3 = (double *)((int)puVar8 + -0x68);
        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), fVar28);
        dVar15 = (double)CONCAT44(uVar20, SUB84(dVar15, 0));
        dVar27 = (double)CONCAT44(uVar20, SUB84(in_dr4, 0));

        dVar16 = *pdVar3;
        fVar12 = (float)((u64)dVar16 >> 0x20);

        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), SUB84(dVar30, 0) * fVar12);
        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) * SUB84(dVar16, 0), SUB84(dVar15, 0));

        uVar26 = *(u32 *)((int)puVar8 + -0x44);

        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - SUB84(dVar30, 0), SUB84(dVar15, 0));

        dVar31 = dVar32;

        dVar30 = (double)CONCAT44((int)((u64)dVar30 >> 0x20), uVar26);
        dVar31 = in_xd2;

        fVar12 = SUB84(dVar30, 0) * fVar12;

        dVar30 = (double)CONCAT44(*(u32 *)((int)puVar8 + -0x6c), uVar26);
        dVar18 = (double)CONCAT44(uVar20, fVar12);

        fVar12 = (float)((u64)dVar30 >> 0x20);

        dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) * fVar12, SUB84(dVar18, 0));

        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), fVar28);
        in_xd12 = in_xd0;

        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) * fVar12);
        fVar28 = SUB84(dVar18, 0) - (float)((u64)dVar18 >> 0x20);

        dVar18 = (double)CONCAT44(*(u32 *)((int)puVar8 + -0x18), fVar28);

        dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) * SUB84(dVar18, 0), SUB84(dVar18, 0));

        dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), *(u32 *)((int)puVar8 + -0x1c));

        dVar18 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) * SUB84(dVar18, 0) + (float)((u64)dVar18 >> 0x20),
                                  SUB84(dVar18, 0));

        dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar30, 0));
        dVar32 = dVar31;

        fVar28 = SUB84(dVar18, 0) * SUB84(dVar16, 0);
        dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), fVar28);
        fVar28 = SUB84(dVar15, 0) - fVar28;

        in_xd12 = (double)CONCAT44(fVar28, *(u32 *)((int)puVar8 + -0x14));

        dVar15 =
            (double)((u64)(u32)(((float)((u64)in_xd12 >> 0x20) * SUB84(in_xd12, 0) + (float)((u64)dVar18 >> 0x20)) *
                                SUB84(dVar27, 0))
                     << 0x20);

        if ((float)((u64)dVar15 >> 0x20) < SUB84(dVar15, 0)) {
            iVar1 = 0;
            iVar6 = 0;
            iVar7 = 2;
            while (iVar2 = iVar6, iVar2 < 3) {
                iVar7 = iVar7 * 0x28;

                dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)((int)puVar8 + iVar7 + -100));

                iVar6 = iVar2 * 0x28;
                fVar28 = (float)((u64)dVar29 >> 0x20);

                bVar33 = fVar28 < SUB84(dVar15, 0);

                dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)((int)puVar8 + iVar6 + -100));

                bVar34 = fVar28 < SUB84(dVar15, 0);

                if ((bVar33 ^ 1) != -(bVar34 - 1)) {

                    fVar12 = *(float *)((int)puVar8 + iVar7 + -100);
                    uVar19 = CONCAT44(*(u32 *)((int)puVar8 + iVar6 + -100), fVar12);
                    dVar15 = (double)CONCAT44(fVar12, SUB84(dVar27, 0));

                    fVar14 = (float)((u64)uVar19 >> 0x20);

                    dVar15 = (double)CONCAT44(fVar14 - fVar12, -(float)uVar19 + fVar28);

                    dVar27 = (double)CONCAT44(SUB84(dVar15, 0), *(u32 *)((int)puVar8 + iVar7 + -0x6c));

                    dVar27 =
                        (double)CONCAT44((float)((u64)dVar27 >> 0x20) / (float)((u64)dVar15 >> 0x20), SUB84(dVar27, 0));

                    dVar15 = (double)CONCAT44(SUB84(dVar27, 0), *(u32 *)((int)puVar8 + iVar6 + -0x6c));

                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) - SUB84(dVar27, 0));

                    fVar12 = (float)((u64)dVar27 >> 0x20);

                    dVar16 = (double)CONCAT44(*(u32 *)((int)puVar8 + iVar7 + -0x68), SUB84(dVar30, 0));
                    dVar27 = (double)CONCAT44(fVar12, fVar22);

                    dVar15 =
                        (double)CONCAT44(fVar12 * SUB84(dVar15, 0) + (float)((u64)dVar15 >> 0x20), SUB84(dVar15, 0));

                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)((int)puVar8 + iVar6 + -0x68));
                    dVar30 = (double)((u64)(u32)fVar24 << 0x20);

                    fVar14 = (float)((u64)dVar16 >> 0x20);

                    fVar13 = SUB84(dVar15, 0) - fVar14;
                    dVar27 = (double)CONCAT44(fVar12, (float)((u64)dVar30 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                          SUB84(dVar27, 0));

                    uVar21 = (u32)((u64)dVar27 >> 0x20);
                    dVar30 = in_xd8;
                    dVar15 = dVar27;

                    dVar30 = (double)CONCAT44(fVar9, SUB84(dVar16, 0));
                    dVar15 = (double)((u64)uVar21 << 0x20);
                    dVar16 = (double)CONCAT44(fVar14, fVar13);

                    fVar12 = (float)((u64)dVar16 >> 0x20);

                    fVar12 = (float)((u64)dVar15 >> 0x20) * SUB84(dVar16, 0) + fVar12;
                    dVar16 = (double)CONCAT44(fVar12, SUB84(dVar16, 0));
                    dVar30 = (double)CONCAT44((float)((u64)dVar25 >> 0x20) * fVar12 + (float)((u64)dVar30 >> 0x20),
                                              SUB84(dVar30, 0));

                    dVar15 = dVar27;

                    dVar15 = (double)((u64)uVar21 << 0x20);

                    pdVar3 = (double *)((int)puVar8 + iVar1 * 0x28 + -0x118);

                    *(int *)pdVar3 = SUB84(dVar27, 0);
                    *(int *)((int)pdVar3 + 4) = (int)((u64)dVar30 >> 0x20);
                    *(float *)(pdVar3 + 1) = fVar28;
                    dVar16 = (double)CONCAT44(fVar12, *(u32 *)((int)puVar8 + iVar6 + -0x60));
                    dVar27 = (double)CONCAT44(uVar21, *(u32 *)((int)puVar8 + iVar7 + -0x60));

                    fVar12 = SUB84(dVar16, 0) - SUB84(dVar27, 0);

                    dVar16 = in_xd4;

                    dVar16 = (double)CONCAT44(SUB84(dVar27, 0), fVar12);

                    fVar12 = (float)((u64)dVar15 >> 0x20);

                    dVar16 =
                        (double)CONCAT44(fVar12 * SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20), SUB84(dVar16, 0));

                    uVar26 = (u32)((u64)dVar16 >> 0x20);

                    *(u32 *)(pdVar3 + 3) = uVar26;
                    dVar16 = (double)CONCAT44(uVar26, *(u32 *)((int)puVar8 + iVar6 + -0x5c));
                    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), *(u32 *)((int)puVar8 + iVar7 + -0x5c));

                    fVar14 = SUB84(dVar16, 0) - SUB84(dVar27, 0);

                    dVar15 = in_xd4;

                    dVar15 = (double)CONCAT44(SUB84(dVar27, 0), fVar14);

                    dVar15 =
                        (double)CONCAT44(fVar12 * SUB84(dVar15, 0) + (float)((u64)dVar15 >> 0x20), SUB84(dVar15, 0));

                    uVar26 = (u32)((u64)dVar15 >> 0x20);

                    *(u32 *)((int)pdVar3 + 0x1c) = uVar26;
                    dVar15 = (double)CONCAT44(uVar26, *(u32 *)((int)puVar8 + iVar6 + -0x58));
                    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), *(u32 *)((int)puVar8 + iVar7 + -0x58));

                    fVar14 = SUB84(dVar15, 0) - SUB84(dVar27, 0);

                    dVar15 = in_xd4;

                    dVar15 = (double)CONCAT44(SUB84(dVar27, 0), fVar14);

                    dVar15 =
                        (double)CONCAT44(fVar12 * SUB84(dVar15, 0) + (float)((u64)dVar15 >> 0x20), SUB84(dVar15, 0));

                    uVar26 = (u32)((u64)dVar15 >> 0x20);

                    *(u32 *)(pdVar3 + 4) = uVar26;
                    dVar15 = (double)CONCAT44(uVar26, *(u32 *)((int)puVar8 + iVar6 + -0x54));
                    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), *(u32 *)((int)puVar8 + iVar7 + -0x54));

                    iVar1 = iVar1 + 1;

                    fVar14 = SUB84(dVar15, 0) - SUB84(dVar27, 0);

                    dVar15 = in_xd4;

                    dVar15 = (double)CONCAT44(SUB84(dVar27, 0), fVar14);

                    dVar15 =
                        (double)CONCAT44(fVar12 * SUB84(dVar15, 0) + (float)((u64)dVar15 >> 0x20), SUB84(dVar15, 0));

                    *(int *)((int)pdVar3 + 0x24) = (int)((u64)dVar15 >> 0x20);
                }
                pdVar3 = (double *)((int)puVar8 + iVar2 * 0x28 + -0x78);

                dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)((int)pdVar3 + 0x14));

                bVar33 = fVar28 < SUB84(dVar15, 0);

                if (bVar33) {

                    dVar27 = (double)CONCAT44(*(u32 *)pdVar3, SUB84(dVar27, 0));

                    dVar27 = (double)CONCAT44((int)((u64)dVar27 >> 0x20), *(u32 *)((int)pdVar3 + 4));

                    pdVar4 = (double *)((int)puVar8 + iVar1 * 0x28 + -0x118);
                    iVar1 = iVar1 + 1;

                    *(int *)pdVar4 = (int)((u64)dVar27 >> 0x20);
                    *(int *)((int)pdVar4 + 4) = SUB84(dVar27, 0);
                    *(u32 *)(pdVar4 + 1) = *(u32 *)(pdVar3 + 1);
                    *(u32 *)(pdVar4 + 3) = *(u32 *)(pdVar3 + 3);
                    *(u32 *)((int)pdVar4 + 0x1c) = *(u32 *)((int)pdVar3 + 0x1c);
                    *(u32 *)(pdVar4 + 4) = *(u32 *)(pdVar3 + 4);
                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)((int)pdVar3 + 0x24));
                    *(u32 *)((int)pdVar4 + 0x24) = *(u32 *)((int)pdVar3 + 0x24);
                }
                iVar7 = iVar2;
                iVar6 = iVar2 + 1;
            }

            *(u32 *)((int)a3 + 0x1c) = *(u32 *)((int)puVar8 + -0xf4);
            *(u32 *)(a3 + 3) = *(u32 *)((int)puVar8 + -0xf8);
            *(u32 *)((int)a3 + 0x14) = *(u32 *)((int)puVar8 + -0xfc);
            *(u32 *)(a3 + 2) = *(u32 *)((int)puVar8 + -0x100);
            *(u32 *)((int)a3 + 0xc) = *(u32 *)((int)puVar8 + -0x110);
            *(u32 *)(a3 + 1) = *(u32 *)((int)puVar8 + -0x114);
            puVar5 = (u64 *)((int)a3 + 4);
            *(u32 *)puVar5 = *(u32 *)((int)puVar8 + -0x118);

            *(u32 *)((int)puVar5 + -4) = 0xe0000000;

            *(u32 *)(puVar5 + 7) = *(u32 *)((int)puVar8 + -0xcc);
            *(u32 *)((int)puVar5 + 0x34) = *(u32 *)((int)puVar8 + -0xd0);
            *(u32 *)(puVar5 + 6) = *(u32 *)((int)puVar8 + -0xd4);
            *(u32 *)((int)puVar5 + 0x2c) = *(u32 *)((int)puVar8 + -0xd8);
            *(u32 *)(puVar5 + 5) = *(u32 *)((int)puVar8 + -0xe8);
            *(u32 *)((int)puVar5 + 0x24) = *(u32 *)((int)puVar8 + -0xec);
            puVar5 = puVar5 + 4;
            *(u32 *)puVar5 = *(u32 *)((int)puVar8 + -0xf0);

            *(u32 *)((int)puVar5 + -4) = 0xe0000000;
            if (iVar1 != 3) {

                *(u32 *)(puVar5 + 7) = *(u32 *)((int)puVar8 + -0x7c);
                *(u32 *)((int)puVar5 + 0x34) = *(u32 *)((int)puVar8 + -0x80);
                *(u32 *)(puVar5 + 6) = *(u32 *)((int)puVar8 + -0x84);
                *(u32 *)((int)puVar5 + 0x2c) = *(u32 *)((int)puVar8 + -0x88);
                *(u32 *)(puVar5 + 5) = *(u32 *)((int)puVar8 + -0x98);
                *(u32 *)((int)puVar5 + 0x24) = *(u32 *)((int)puVar8 + -0x9c);
                puVar5 = puVar5 + 4;
                *(u32 *)puVar5 = *(u32 *)((int)puVar8 + -0xa0);

                *(u32 *)((int)puVar5 + -4) = 0xe0000000;
            }

            *(u32 *)(puVar5 + 7) = *(u32 *)((int)puVar8 + -0xa4);
            *(u32 *)((int)puVar5 + 0x34) = *(u32 *)((int)puVar8 + -0xa8);
            *(u32 *)(puVar5 + 6) = *(u32 *)((int)puVar8 + -0xac);
            *(u32 *)((int)puVar5 + 0x2c) = *(u32 *)((int)puVar8 + -0xb0);
            *(u32 *)(puVar5 + 5) = *(u32 *)((int)puVar8 + -0xc0);
            *(u32 *)((int)puVar5 + 0x24) = *(u32 *)((int)puVar8 + -0xc4);
            puVar5 = puVar5 + 4;
            *(u32 *)puVar5 = *(u32 *)((int)puVar8 + -200);

            *(u32 *)((int)puVar5 + -4) = 0xf0000000;
            a3 = (u64 *)((int)puVar5 + 0x1c);
            g_8c4aa520 = g_8c4aa520 + iVar1;
        }
    }
    return a3;
}

/*
 * gfxlib_fill_loop_23231c  0x8c23231c
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_22c3f4
 */
u64 *gfxlib_fill_loop_23231c(double *a0, double *a1, double *a2, u64 *a3) {
    int iVar1;
    int iVar2;
    u64 *puVar3;
    int iVar4;
    int iVar5;
    double *pdVar6;
    double *pdVar7;
    int iVar8;
    u64 *puVar9;
    double *pdVar10;
    float *pfVar11;
    u8 *puVar12;
    float in_fr1;
    double dVar13;
    double dVar14;
    double dVar15;
    u32 in_fr3;
    u32 uVar16;
    float fVar17;
    float fVar18;
    double dVar19;
    float fVar22;
    u64 uVar20;
    u64 uVar21;
    u32 uVar23;
    double in_dr4;
    double in_dr6;
    double dVar24;
    double in_dr8;
    double dVar25;
    float in_fr11;
    float in_fr10;
    double in_dr12;
    double dVar26;
    float fVar27;
    double in_dr14;
    double dVar28;
    double in_xd0;
    double in_xd2;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd14;
    bool bVar29;
    u8 auStack_1c[4];
    float fStack_18;

    fVar27 = SUB84(in_dr14, 0);

    pfVar11 = &fStack_18;
    _auStack_1c = CONCAT44(fVar27, auStack_1c);

    iVar2 = (int)(int)0xfffffee0;
    uVar16 = (u32)((u64)in_dr12 >> 0x20);

    *(int *)((int)pfVar11 + -4) = SUB84(in_dr12, 0);
    puVar12 = (u8 *)((int)pfVar11 + -8);
    *(u32 *)((int)pfVar11 + -8) = uVar16;

    if ((g_8c4aa4f0 & 0x10000) == 0) {

        fVar27 = *(float *)0x8c4aa4a8;
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), fVar27);
        dVar19 = (double)CONCAT44(*(u32 *)0x8c4aa4e0, in_fr3);
        in_dr12 = (double)CONCAT44(uVar16, fVar27);

        fVar22 = (float)((u64)dVar19 >> 0x20);

        dVar28 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), fVar27 * fVar22);

        dVar19 = (double)CONCAT44(fVar22, *(u32 *)0x8c4aa4dc);

        dVar26 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr12, 0) * SUB84(dVar19, 0));

        dVar14 = in_xd14;

        dVar14 = in_xd0;
        in_fr1 = SUB84(dVar28, 0);

        *(float *)(puVar12 + iVar2 + 4) = SUB84(dVar28, 0);

        uVar16 = (u32)((u64)dVar28 >> 0x20);

        dVar28 = (double)CONCAT44(uVar16, 1.0 / in_fr1);
        dVar13 = (double)CONCAT44(1.0 / SUB84(dVar26, 0), in_fr1);

        dVar26 = (double)CONCAT44(*(u32 *)((int)0x8c4aa4a8 + 0xc), SUB84(dVar26, 0));
        dVar19 = (double)(u64) * (u32 *)(0x8c4aa4a8 + 2);

        uVar16 = SUB84(dVar19, 0);

        *(u32 *)(puVar12 + iVar2) = uVar16;
        uVar16 = *(u32 *)((int)a0 + 4);

        pdVar10 = (double *)(puVar12 + 0xa8 + iVar2);

        *(u32 *)pdVar10 = uVar16;
        *(u32 *)((int)pdVar10 + 4) = *(u32 *)(a0 + 1);
        *(u32 *)(pdVar10 + 1) = *(u32 *)((int)a0 + 0xc);
        *(u32 *)((int)pdVar10 + 0x14) = *(u32 *)a0;
        dVar19 = (double)CONCAT44(*(u32 *)a0, *(u32 *)((int)a0 + 4));

        fVar22 = (float)((u64)dVar26 >> 0x20);
        fVar27 = (float)((u64)dVar13 >> 0x20);

        fVar17 = (SUB84(dVar19, 0) - fVar22) * (float)((u64)dVar19 >> 0x20) * fVar27;

        *(float *)((int)pdVar10 + 0xc) = fVar17;
        dVar19 = (double)CONCAT44(*(u32 *)(a0 + 1), *(u32 *)(puVar12 + iVar2));

        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));

        dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), *(u32 *)a0);

        fVar17 = SUB84(dVar28, 0);

        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) * SUB84(dVar19, 0) * fVar17, SUB84(dVar19, 0));

        uVar16 = (u32)((u64)dVar19 >> 0x20);

        *(u32 *)(pdVar10 + 2) = uVar16;
        dVar19 = (double)CONCAT44(uVar16, *(u32 *)(a0 + 2));

        fVar18 = SUB84(dVar19, 0) + in_fr10;
        bVar29 = fVar18 < in_fr10;

        *(float *)(pdVar10 + 4) = fVar18;

        if (bVar29) {

            *(float *)(pdVar10 + 4) = in_fr10;
        }

        *(u32 *)((int)pdVar10 + 0x24) = *(u32 *)((int)a0 + 0x14);
        *(int *)(pdVar10 + 3) = (int)((u64)in_dr4 >> 0x20);
        *(int *)((int)pdVar10 + 0x1c) = SUB84(in_dr4, 0);
        *(u32 *)(pdVar10 + 5) = *(u32 *)((int)a1 + 4);
        *(u32 *)((int)pdVar10 + 0x2c) = *(u32 *)(a1 + 1);
        *(u32 *)(pdVar10 + 6) = *(u32 *)((int)a1 + 0xc);
        *(u32 *)((int)pdVar10 + 0x3c) = *(u32 *)a1;
        dVar19 = (double)CONCAT44(*(u32 *)a1, *(u32 *)((int)a1 + 4));

        fVar18 = (SUB84(dVar19, 0) - fVar22) * (float)((u64)dVar19 >> 0x20) * fVar27;

        *(float *)((int)pdVar10 + 0x34) = fVar18;
        dVar19 = (double)CONCAT44(*(u32 *)(a1 + 1), *(u32 *)(puVar12 + iVar2));

        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));

        dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), *(u32 *)a1);

        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) * SUB84(dVar19, 0) * fVar17, SUB84(dVar19, 0));

        uVar16 = (u32)((u64)dVar19 >> 0x20);

        *(u32 *)(pdVar10 + 7) = uVar16;
        dVar19 = (double)CONCAT44(uVar16, *(u32 *)(a1 + 2));

        fVar18 = SUB84(dVar19, 0) + in_fr10;
        bVar29 = fVar18 < in_fr10;

        *(float *)(pdVar10 + 9) = fVar18;

        if (bVar29) {

            *(float *)(pdVar10 + 9) = in_fr10;
        }

        *(u32 *)((int)pdVar10 + 0x4c) = *(u32 *)((int)a1 + 0x14);
        *(int *)(pdVar10 + 8) = (int)((u64)in_dr6 >> 0x20);
        *(int *)((int)pdVar10 + 0x44) = SUB84(in_dr6, 0);
        *(u32 *)(pdVar10 + 10) = *(u32 *)((int)a2 + 4);
        *(u32 *)((int)pdVar10 + 0x54) = *(u32 *)(a2 + 1);
        *(u32 *)(pdVar10 + 0xb) = *(u32 *)((int)a2 + 0xc);
        *(u32 *)((int)pdVar10 + 100) = *(u32 *)a2;
        dVar19 = (double)CONCAT44(*(u32 *)a2, *(u32 *)((int)a2 + 4));

        fVar27 = (SUB84(dVar19, 0) - fVar22) * (float)((u64)dVar19 >> 0x20) * fVar27;

        *(float *)((int)pdVar10 + 0x5c) = fVar27;
        dVar19 = (double)CONCAT44(*(u32 *)(a2 + 1), *(u32 *)(puVar12 + iVar2));

        dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) - SUB84(dVar19, 0), SUB84(dVar19, 0));

        dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), *(u32 *)a2);

        dVar28 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) * SUB84(dVar19, 0) * fVar17, SUB84(dVar19, 0));

        uVar16 = (u32)((u64)dVar28 >> 0x20);

        *(u32 *)(pdVar10 + 0xc) = uVar16;
        dVar28 = (double)CONCAT44(uVar16, *(u32 *)(a2 + 2));

        fVar27 = SUB84(dVar28, 0) + in_fr10;
        dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), fVar27);
        bVar29 = fVar27 < in_fr10;

        *(float *)(pdVar10 + 0xe) = fVar27;

        if (bVar29) {

            *(float *)(pdVar10 + 0xe) = in_fr10;
        }
        uVar16 = SUB84(in_dr8, 0);

        dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)((int)a2 + 0x14));
        *(u32 *)((int)pdVar10 + 0x74) = *(u32 *)((int)a2 + 0x14);
        *(int *)(pdVar10 + 0xd) = (int)((u64)in_dr8 >> 0x20);
        *(u32 *)((int)pdVar10 + 0x6c) = uVar16;
        uVar16 = *(u32 *)((int)pdVar10 + 0x3c);
        dVar19 = (double)CONCAT44(*(u32 *)(pdVar10 + 2), SUB84(in_dr4, 0));
        dVar13 = (double)CONCAT44(uVar16, SUB84(dVar13, 0));

        fVar27 = (float)((u64)dVar19 >> 0x20);

        dVar13 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) * fVar27, SUB84(dVar13, 0));

        dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)(pdVar10 + 7));
        dVar25 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 0x14), uVar16);
        dVar24 = *(double *)((int)pdVar10 + 0x34);

        fVar17 = (float)((u64)dVar25 >> 0x20);

        fVar18 = SUB84(dVar28, 0) * fVar17;

        dVar19 = (double)CONCAT44(fVar27, *(u32 *)((int)pdVar10 + 0xc));
        in_xd8 = (double)CONCAT44(SUB84(dVar25, 0), fVar18);

        dVar28 = (double)CONCAT44((float)((u64)in_xd8 >> 0x20) * SUB84(dVar19, 0), SUB84(in_xd8, 0));

        dVar15 = dVar24;

        dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), (int)((u64)dVar24 >> 0x20));
        dVar15 = dVar14;

        dVar14 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) - SUB84(dVar28, 0), SUB84(dVar13, 0) * SUB84(dVar19, 0));

        dVar13 = in_xd6;

        dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar24, 0));
        dVar13 = in_xd2;

        fVar27 = SUB84(dVar28, 0) * fVar17 - (float)((u64)dVar28 >> 0x20);

        dVar28 = (double)CONCAT44(*(u32 *)(pdVar10 + 0xc), fVar27);

        dVar28 = (double)CONCAT44((float)((u64)dVar28 >> 0x20) * SUB84(dVar28, 0), SUB84(dVar28, 0));

        dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)((int)pdVar10 + 0x5c));

        dVar28 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) * SUB84(dVar28, 0) + (float)((u64)dVar28 >> 0x20),
                                  SUB84(dVar28, 0));

        dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar24, 0));
        in_xd6 = dVar13;

        fVar27 = SUB84(dVar28, 0) * (float)((u64)dVar19 >> 0x20);
        dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), fVar27);
        fVar27 = SUB84(dVar14, 0) - fVar27;

        dVar15 = (double)CONCAT44(fVar27, *(u32 *)((int)pdVar10 + 100));

        dVar28 = (double)((u64)(u32)(((float)((u64)dVar15 >> 0x20) * SUB84(dVar15, 0) + (float)((u64)dVar28 >> 0x20)) *
                                     in_fr11)
                          << 0x20);

        if ((float)((u64)dVar28 >> 0x20) < SUB84(dVar28, 0)) {
            iVar4 = 0;
            puVar9 = (u64 *)(puVar12 + iVar2 + 8);
            iVar1 = 0;
            iVar8 = 2;
            while (iVar5 = iVar1, iVar5 < 3) {

                uVar20 = CONCAT44(*(u32 *)((int)pdVar10 + iVar8 * 0x28 + 0x14), 0x3f800000);

                puVar3 = (u64 *)((int)pdVar10 + iVar5 * 0x28 + 0x14);

                uVar21 = CONCAT44(*(u32 *)puVar3, (float)uVar20);

                fVar27 = (float)uVar21;
                if (((1 && (float)uVar20 < (float)((u64)uVar20 >> 0x20)) ^ 1) !=
                    -((1 && fVar27 < (float)((u64)uVar21 >> 0x20)) - 1)) {

                    fVar27 = *(float *)((int)pdVar10 + iVar8 * 0x28 + 0x14);
                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)((int)pdVar10 + iVar5 * 0x28 + 0x14));
                    fVar17 = fVar27;
                    dVar19 = (double)CONCAT44(fVar27, SUB84(dVar19, 0));

                    dVar28 = (double)CONCAT44(0x3f800000, -fVar27);

                    dVar28 = (double)CONCAT44(0x3f800000, -fVar27 + 1.0);
                    dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) - fVar17);

                    dVar14 = (double)CONCAT44(SUB84(dVar28, 0), *(u32 *)((int)pdVar10 + iVar8 * 0x28 + 0xc));

                    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) / SUB84(dVar15, 0), SUB84(dVar14, 0));

                    dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)((int)pdVar10 + iVar5 * 0x28 + 0xc));
                    dVar15 = (double)((u64)dVar14 & 0xffffffff);

                    dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) - SUB84(dVar14, 0));

                    uVar16 = (u32)((u64)dVar14 >> 0x20);

                    dVar13 = (double)CONCAT44(*(u32 *)(pdVar10 + iVar8 * 5 + 2), SUB84(dVar24, 0));
                    dVar14 = (double)CONCAT44(uVar16, SUB84(dVar15, 0));
                    dVar19 = (double)CONCAT44(uVar16, fVar22);

                    dVar14 = (double)(u64)(u32)((float)((u64)dVar14 >> 0x20) * SUB84(dVar28, 0) + SUB84(dVar14, 0));

                    dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), *(u32 *)(pdVar10 + iVar5 * 5 + 2));
                    dVar14 = (double)CONCAT44(SUB84(dVar26, 0), SUB84(dVar14, 0));

                    fVar27 = (float)((u64)dVar13 >> 0x20);

                    dVar28 = (double)CONCAT44((int)((u64)dVar28 >> 0x20), SUB84(dVar28, 0) - fVar27);
                    dVar19 =
                        (double)CONCAT44(uVar16, (float)((u64)dVar14 >> 0x20) * SUB84(dVar14, 0) + SUB84(dVar19, 0));

                    uVar16 = (u32)((u64)dVar19 >> 0x20);

                    dVar24 = (double)CONCAT44(*(u32 *)(puVar12 + iVar2), SUB84(dVar13, 0));
                    dVar14 = (double)CONCAT44(uVar16, fVar27);

                    dVar14 = (double)(u64)(u32)((float)((u64)dVar14 >> 0x20) * SUB84(dVar28, 0) + SUB84(dVar14, 0));

                    uVar20 = CONCAT44(*(u32 *)(puVar12 + iVar2 + 4), SUB84(dVar14, 0));

                    dVar24 = (double)CONCAT44(
                        (float)((u64)uVar20 >> 0x20) * (float)uVar20 + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));

                    dVar15 = dVar19;

                    dVar15 = (double)CONCAT44(uVar16, (float)uVar20);

                    pdVar6 = (double *)(puVar9 + iVar4 * 5);
                    uVar23 = (u32)((u64)dVar28 >> 0x20);

                    *(int *)pdVar6 = SUB84(dVar19, 0);
                    *(int *)((int)pdVar6 + 4) = (int)((u64)dVar24 >> 0x20);
                    *(u32 *)(pdVar6 + 1) = uVar23;
                    dVar28 = (double)CONCAT44(uVar23, *(u32 *)(pdVar10 + iVar5 * 5 + 3));
                    dVar19 = (double)CONCAT44(uVar16, *(u32 *)(pdVar10 + iVar8 * 5 + 3));

                    fVar27 = SUB84(dVar28, 0) - SUB84(dVar19, 0);

                    dVar28 = in_xd4;

                    dVar28 = (double)CONCAT44(SUB84(dVar19, 0), fVar27);

                    fVar27 = (float)((u64)dVar15 >> 0x20);

                    dVar28 =
                        (double)CONCAT44(fVar27 * SUB84(dVar28, 0) + (float)((u64)dVar28 >> 0x20), SUB84(dVar28, 0));

                    uVar16 = (u32)((u64)dVar28 >> 0x20);

                    *(u32 *)(pdVar6 + 3) = uVar16;
                    dVar28 = (double)CONCAT44(uVar16, *(u32 *)((int)pdVar10 + iVar5 * 0x28 + 0x1c));
                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), *(u32 *)((int)pdVar10 + iVar8 * 0x28 + 0x1c));

                    fVar17 = SUB84(dVar28, 0) - SUB84(dVar19, 0);

                    dVar28 = in_xd4;

                    dVar28 = (double)CONCAT44(SUB84(dVar19, 0), fVar17);

                    dVar28 =
                        (double)CONCAT44(fVar27 * SUB84(dVar28, 0) + (float)((u64)dVar28 >> 0x20), SUB84(dVar28, 0));

                    uVar16 = (u32)((u64)dVar28 >> 0x20);

                    *(u32 *)((int)pdVar6 + 0x1c) = uVar16;
                    dVar28 = (double)CONCAT44(uVar16, *(u32 *)(pdVar10 + iVar5 * 5 + 4));
                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), *(u32 *)(pdVar10 + iVar8 * 5 + 4));

                    fVar17 = SUB84(dVar28, 0) - SUB84(dVar19, 0);

                    dVar28 = in_xd4;

                    dVar28 = (double)CONCAT44(SUB84(dVar19, 0), fVar17);

                    dVar28 =
                        (double)CONCAT44(fVar27 * SUB84(dVar28, 0) + (float)((u64)dVar28 >> 0x20), SUB84(dVar28, 0));

                    uVar16 = (u32)((u64)dVar28 >> 0x20);

                    *(u32 *)(pdVar6 + 4) = uVar16;
                    dVar28 = (double)CONCAT44(uVar16, *(u32 *)((int)pdVar10 + iVar5 * 0x28 + 0x24));
                    dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), *(u32 *)((int)pdVar10 + iVar8 * 0x28 + 0x24));

                    iVar4 = iVar4 + 1;

                    fVar17 = SUB84(dVar28, 0) - SUB84(dVar19, 0);

                    dVar28 = in_xd4;

                    dVar28 = (double)CONCAT44(SUB84(dVar19, 0), fVar17);

                    dVar28 =
                        (double)CONCAT44(fVar27 * SUB84(dVar28, 0) + (float)((u64)dVar28 >> 0x20), SUB84(dVar28, 0));

                    *(int *)((int)pdVar6 + 0x24) = (int)((u64)dVar28 >> 0x20);
                }
                pdVar6 = pdVar10 + iVar5 * 5;

                uVar20 = CONCAT44(*(u32 *)((int)pdVar6 + 0x14), 0x3f800000);

                if ((float)uVar20 < (float)((u64)uVar20 >> 0x20)) {

                    dVar19 = (double)CONCAT44(*(u32 *)pdVar6, *(u32 *)((int)pdVar6 + 4));

                    pdVar7 = (double *)(puVar9 + iVar4 * 5);
                    iVar4 = iVar4 + 1;

                    *(int *)pdVar7 = (int)((u64)dVar19 >> 0x20);
                    *(int *)((int)pdVar7 + 4) = SUB84(dVar19, 0);
                    *(u32 *)(pdVar7 + 1) = *(u32 *)(pdVar6 + 1);
                    *(u32 *)(pdVar7 + 3) = *(u32 *)(pdVar6 + 3);
                    *(u32 *)((int)pdVar7 + 0x1c) = *(u32 *)((int)pdVar6 + 0x1c);
                    *(u32 *)(pdVar7 + 4) = *(u32 *)(pdVar6 + 4);
                    *(u32 *)((int)pdVar7 + 0x24) = *(u32 *)((int)pdVar6 + 0x24);
                }
                iVar8 = iVar5;
                iVar1 = iVar5 + 1;
            }

            *(u32 *)((int)a3 + 0x1c) = *(u32 *)(puVar12 + iVar2 + 0x2c);
            *(u32 *)(a3 + 3) = *(u32 *)(puVar12 + iVar2 + 0x28);
            *(u32 *)((int)a3 + 0x14) = *(u32 *)(puVar12 + iVar2 + 0x24);
            *(u32 *)(a3 + 2) = *(u32 *)(puVar12 + iVar2 + 0x20);
            *(u32 *)((int)a3 + 0xc) = *(u32 *)(puVar12 + iVar2 + 0x10);
            *(u32 *)(a3 + 1) = *(u32 *)(puVar12 + iVar2 + 0xc);
            uVar16 = 0xe0000000;
            puVar3 = (u64 *)((int)a3 + 4);
            *(u32 *)puVar3 = *(u32 *)puVar9;

            *(u32 *)((int)puVar3 + -4) = uVar16;

            *(u32 *)(puVar3 + 7) = *(u32 *)(puVar12 + iVar2 + 0x54);
            *(u32 *)((int)puVar3 + 0x34) = *(u32 *)(puVar12 + iVar2 + 0x50);
            *(u32 *)(puVar3 + 6) = *(u32 *)(puVar12 + iVar2 + 0x4c);
            *(u32 *)((int)puVar3 + 0x2c) = *(u32 *)(puVar12 + iVar2 + 0x48);
            *(u32 *)(puVar3 + 5) = *(u32 *)(puVar12 + iVar2 + 0x38);
            *(u32 *)((int)puVar3 + 0x24) = *(u32 *)(puVar12 + iVar2 + 0x34);
            puVar3 = puVar3 + 4;
            *(u32 *)puVar3 = *(u32 *)(puVar12 + iVar2 + 0x30);

            *(u32 *)((int)puVar3 + -4) = uVar16;
            if (iVar4 != 3) {

                *(u32 *)(puVar3 + 7) = *(u32 *)(puVar12 + iVar2 + 0xa4);
                *(u32 *)((int)puVar3 + 0x34) = *(u32 *)(puVar12 + iVar2 + 0xa0);
                *(u32 *)(puVar3 + 6) = *(u32 *)(puVar12 + iVar2 + 0x9c);
                *(u32 *)((int)puVar3 + 0x2c) = *(u32 *)(puVar12 + iVar2 + 0x98);
                *(u32 *)(puVar3 + 5) = *(u32 *)(puVar12 + iVar2 + 0x88);
                *(u32 *)((int)puVar3 + 0x24) = *(u32 *)(puVar12 + iVar2 + 0x84);
                puVar3 = puVar3 + 4;
                *(u32 *)puVar3 = *(u32 *)(puVar12 + iVar2 + 0x80);

                *(u32 *)((int)puVar3 + -4) = uVar16;
            }
            uVar16 = 0xf0000000;

            *(u32 *)(puVar3 + 7) = *(u32 *)(puVar12 + iVar2 + 0x7c);
            *(u32 *)((int)puVar3 + 0x34) = *(u32 *)(puVar12 + iVar2 + 0x78);
            *(u32 *)(puVar3 + 6) = *(u32 *)(puVar12 + iVar2 + 0x74);
            *(u32 *)((int)puVar3 + 0x2c) = *(u32 *)(puVar12 + iVar2 + 0x70);
            *(u32 *)(puVar3 + 5) = *(u32 *)(puVar12 + iVar2 + 0x60);
            *(u32 *)((int)puVar3 + 0x24) = *(u32 *)(puVar12 + iVar2 + 0x5c);
            puVar3 = puVar3 + 4;
            *(u32 *)puVar3 = *(u32 *)(puVar12 + iVar2 + 0x58);

            *(u32 *)((int)puVar3 + -4) = uVar16;
            a3 = (u64 *)((int)puVar3 + 0x1c);
            g_8c4aa520 = g_8c4aa520 + iVar4;
        }
    }
    return a3;
}

/*
 * gfxlib_fill_loop_232748  0x8c232748
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 */
int gfxlib_fill_loop_232748(int a0) {
    float fVar1;
    float fVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float in_fr5;
    float fVar12;
    float fVar13;
    u64 in_dr6;
    float fVar14;
    float fVar15;
    u64 in_xd0;
    u64 in_xd2;
    float in_xf4;
    float in_xf5;
    float in_xf6;
    float in_xf7;
    float in_xf8;
    float in_xf9;
    float in_xf10;
    float in_xf11;
    float in_xf12;
    float in_xf13;
    float in_xf14;
    float in_xf15;

    iVar3 = *(int *)(a0 + 0x14);
    pfVar5 = *(float **)(a0 + 0x18);
    iVar7 = *(int *)(a0 + 0x1c);
    pfVar4 = *(float **)(a0 + 0x20);
    fVar9 = *(float *)(a0 + 0x24);
    fVar8 = *(float *)(a0 + 0x28);
    fVar11 = *(float *)(a0 + 0x2c);
    fVar10 = *(float *)(a0 + 0x30);
    iVar6 = 0;
    do {
        fVar12 = *pfVar5;
        fVar15 = (float)in_dr6;
        fVar14 = pfVar5[1];
        in_dr6 = CONCAT44(fVar14, fVar15);
        pfVar5 = pfVar5 + 2;
        fVar1 = (float)in_xd0 * in_fr5 + in_xf4 * fVar12 + in_xf8 * fVar15 + in_xf12 * fVar14;
        fVar2 = (float)((u64)in_xd0 >> 0x20) * in_fr5 + in_xf5 * fVar12 + in_xf9 * fVar15 + in_xf13 * fVar14;
        fVar13 = (float)in_xd2 * in_fr5 + in_xf6 * fVar12 + in_xf10 * fVar15 + in_xf14 * fVar14;
        fVar12 = (float)((u64)in_xd2 >> 0x20) * in_fr5 + in_xf7 * fVar12 + in_xf11 * fVar15 + in_xf15 * fVar14;
        fVar12 = (float)((u64)in_dr6 >> 0x20);
        fVar15 = 1.0 / fVar12;
        pfVar4[7] = fVar1;
        pfVar4[6] = fVar2;
        pfVar4[5] = 0.0;
        pfVar4[4] = 1.0;
        if (fVar12 <= 1.0) {
            iVar6 = iVar6 + 1;
        }
        pfVar4[3] = fVar15;
        CacheBlockInvalidate(iVar7);
        in_fr5 = fVar1 * fVar8 * fVar15 + fVar10;
        pfVar4[2] = in_fr5;
        pfVar4[1] = fVar2 * fVar9 * fVar15 + fVar11;
        iVar7 = iVar7 + 0x20;
        iVar3 = iVar3 + -1;
        *pfVar4 = fVar12;
        pfVar4 = pfVar4 + 8;
    } while (iVar3 != 0);
    return iVar6;
}

/*
 * gfxlib_fill_loop_232cd0  0x8c232cd0
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_21982e
 */
int gfxlib_fill_loop_232cd0(int a0, u32 a1) {
    float fVar1;
    u32 uVar2;
    int iVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    int iVar7;
    int iVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    u64 in_xd0;
    float fVar20;
    u64 in_xd2;
    float fVar21;
    u64 in_xd4;
    float fVar22;
    u64 in_xd6;
    float fVar23;
    u64 in_xd8;
    float fVar24;
    u64 in_xd10;
    float fVar25;
    u64 in_xd12;
    float fVar26;
    u64 in_xd14;
    float fVar27;

    iVar3 = *(int *)(a0 + 0x14);
    pfVar4 = *(float **)(a0 + 0x18);
    iVar8 = *(int *)(a0 + 0x1c);
    fVar17 = *(float *)(a0 + 0x24);
    fVar16 = *(float *)(a0 + 0x28);
    fVar19 = *(float *)(a0 + 0x2c);
    fVar18 = *(float *)(a0 + 0x30);
    uVar2 = a1 >> 8 & 0xff;
    iVar7 = 0;
    do {
        fVar14 = *pfVar4;
        fVar13 = pfVar4[1];
        fVar15 = pfVar4[2];
        fVar21 = (float)((u64)in_xd2 >> 0x20);
        fVar22 = (float)((u64)in_xd4 >> 0x20);
        fVar23 = (float)((u64)in_xd6 >> 0x20);
        fVar24 = (float)((u64)in_xd8 >> 0x20);
        fVar25 = (float)((u64)in_xd10 >> 0x20);
        fVar26 = (float)((u64)in_xd12 >> 0x20);
        fVar27 = (float)((u64)in_xd14 >> 0x20);
        fVar11 = (float)in_xd0 * fVar13 + (float)in_xd4 * fVar14 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar15;
        fVar20 = (float)((u64)in_xd0 >> 0x20);
        fVar1 = fVar20 * fVar13 + fVar22 * fVar14 + fVar24 * 1.0 + fVar26 * fVar15;
        fVar15 = fVar21 * fVar13 + fVar23 * fVar14 + fVar25 * 1.0 + fVar27 * fVar15;
        fVar10 = pfVar4[3];
        fVar9 = pfVar4[4];
        fVar12 = pfVar4[5];
        pfVar5 = pfVar4 + 6;
        fVar13 = (float)in_xd0 * fVar9 + (float)in_xd4 * fVar10 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar12;
        fVar14 = fVar20 * fVar9 + fVar22 * fVar10 + fVar24 * 0.0 + fVar26 * fVar12;
        fVar9 = fVar21 * fVar9 + fVar23 * fVar10 + fVar25 * 0.0 + fVar27 * fVar12;
        pfVar4 = pfVar4 + 7;
        pfVar6 = (float *)(SUB42(*pfVar5, 0) * 0x20 + iVar8);
        fVar10 = (float)((u32)*pfVar5 >> 0x10) * 0.0039215684;
        if (uVar2 == 0) {
            *pfVar6 = 0.0;
            pfVar6[7] = fVar9 * fVar10;
            pfVar6[6] = fVar14 * fVar10;
            pfVar6[5] = fVar15 * fVar10;
            pfVar6[4] = fVar1 * fVar10;
        } else if (uVar2 == 1) {
            *pfVar6 = fVar10 * fVar1 + *pfVar6;
            pfVar6[1] = fVar10 * fVar11 + pfVar6[1];
            pfVar6[2] = fVar10 * fVar15 + pfVar6[2];
            pfVar6[4] = fVar10 * fVar14 + pfVar6[4];
            pfVar6[5] = fVar10 * fVar13 + pfVar6[5];
            pfVar6[6] = fVar10 * fVar9 + pfVar6[6];
        } else {
            fVar9 = *pfVar6;
            fVar15 = fVar10 * fVar15 + pfVar6[2];
            fVar14 = fVar10 * fVar14 + pfVar6[4];
            fVar12 = 1.0 / fVar15;
            *pfVar6 = fVar15;
            pfVar6[7] = fVar10 * fVar13 + pfVar6[5];
            pfVar6[6] = fVar14;
            pfVar6[4] = fVar14;
            if (fVar15 <= 1.0) {
                iVar7 = iVar7 + 1;
            }
            pfVar6[3] = fVar12;
            pfVar6[2] = (fVar10 * fVar11 + pfVar6[1]) * fVar16 * fVar12 + fVar18;
            fVar11 = fVar14 * fVar14 * fVar14 * fVar14;
            pfVar6[1] = (fVar10 * fVar1 + fVar9) * fVar17 * fVar12 + fVar19;
            fVar11 = fVar11 * fVar11;
            pfVar6[5] = fVar11 * fVar11 * fVar14;
        }
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return iVar7;
}

/*
 * gfxlib_uses_libgcc_movstr_i4_23340c  0x8c23340c
 * area name: in the gfxlib library code range; behaviour name: its main named callee is libgcc_movstr_i4
 * called by: Class_129938_m5_01745c
 */
u32 gfxlib_uses_libgcc_movstr_i4_23340c(int a0, int a1) {
    int iVar1;
    u32 uVar2;
    u64 *puVar3;
    int *ar4_00;
    int *piVar4;
    int *piVar5;
    u8 *ar5_00;
    u8 *ar6_00;
    u8 *ar7_00;
    int *piVar6;
    u32 uVar7;
    u64 uVar8;
    char cVar9;
    int *piVar10;
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
    int aiStack_b0[24];
    u8 auStack_50[12];
    u8 auStack_44[12];
    u8 auStack_38[12];
    u8 auStack_2c[16];

    cVar9 = '\0';
    uVar7 = 0;
    gfxlib_fill_loop_2360b0(a0, auStack_2c, auStack_38);
    gfxlib_fill_loop_2360b0(a1, auStack_44, auStack_50);
    ar6_00 = auStack_44;
    ar5_00 = auStack_38;
    ar7_00 = auStack_50;
    iVar1 = ninja_float_calc_212808(auStack_2c, ar5_00, ar6_00, ar7_00);
    if (iVar1 != 0) {
        ar4_00 = aiStack_b0;
        libgcc_movstr_i4(ar4_00, ar5_00, ar6_00, ar7_00);
        piVar6 = ar4_00 + 0x18;
        piVar10 = ar4_00;
        while (ar4_00 < piVar6) {
            puVar3 = (u64 *)(*ar4_00 * 0xc + a0);
            if (cVar9 == '\0') {
                uStack_e0 = *(u32 *)puVar3;
            } else {
                uStack_e0 = (u32)*puVar3;
            }
            iVar1 = *ar4_00 * 0xc + a0;
            if (cVar9 == '\0') {
                uStack_dc = *(u32 *)(iVar1 + 4);
            } else {
                uStack_dc = (u32) * (u64 *)(iVar1 + 4);
            }
            iVar1 = *ar4_00 * 0xc + a0;
            if (cVar9 == '\0') {
                uStack_d8 = *(u32 *)(iVar1 + 8);
            } else {
                uStack_d8 = (u32) * (u64 *)(iVar1 + 8);
            }
            piVar4 = ar4_00 + 1;
            puVar3 = (u64 *)(*piVar4 * 0xc + a0);
            if (cVar9 == '\0') {
                uStack_d4 = *(u32 *)puVar3;
            } else {
                uStack_d4 = (u32)*puVar3;
            }
            iVar1 = *piVar4 * 0xc + a0;
            if (cVar9 == '\0') {
                uStack_d0 = *(u32 *)(iVar1 + 4);
            } else {
                uStack_d0 = (u32) * (u64 *)(iVar1 + 4);
            }
            piVar5 = ar4_00 + 2;
            iVar1 = *piVar4 * 0xc + a0;
            if (cVar9 == '\0') {
                uStack_cc = *(u32 *)(iVar1 + 8);
            } else {
                uStack_cc = (u32) * (u64 *)(iVar1 + 8);
            }
            puVar3 = (u64 *)(*piVar5 * 0xc + a0);
            if (cVar9 == '\0') {
                uStack_c8 = *(u32 *)puVar3;
            } else {
                uStack_c8 = (u32)*puVar3;
            }
            iVar1 = *piVar5 * 0xc + a0;
            if (cVar9 == '\0') {
                uStack_c4 = *(u32 *)(iVar1 + 4);
            } else {
                uStack_c4 = (u32) * (u64 *)(iVar1 + 4);
            }
            piVar4 = ar4_00 + 3;
            iVar1 = *piVar5 * 0xc + a0;
            if (cVar9 == '\0') {
                uStack_c0 = *(u32 *)(iVar1 + 8);
            } else {
                uStack_c0 = (u32) * (u64 *)(iVar1 + 8);
            }
            puVar3 = (u64 *)(*piVar4 * 0xc + a0);
            if (cVar9 == '\0') {
                uStack_bc = *(u32 *)puVar3;
            } else {
                uStack_bc = (u32)*puVar3;
            }
            iVar1 = *piVar4 * 0xc + a0;
            if (cVar9 == '\0') {
                uStack_b8 = *(u32 *)(iVar1 + 4);
            } else {
                uStack_b8 = (u32) * (u64 *)(iVar1 + 4);
            }
            iVar1 = *piVar4 * 0xc + a0;
            if (cVar9 == '\0') {
                uStack_b4 = *(u32 *)(iVar1 + 8);
            } else {
                uVar8 = *(u64 *)(iVar1 + 8);
                uStack_b4 = (u32)uVar8;
                aiStack_b0[0] = (int)((u64)uVar8 >> 0x20);
            }
            ar4_00 = ar4_00 + 4;
            piVar4 = piVar10;
            while (piVar4 < piVar6) {
                piVar5 = piVar4 + 3;
                piVar4 = piVar4 + 4;
                if (cVar9 != '\0') {
                    uStack_e0 = (u32)((u64) * (u64 *)(*piVar5 * 0xc + a1 + 8) >> 0x20);
                }
                iVar1 = kamui_uses_noop_fr4_test_212a30(&uStack_e0, &stack0xfffffef0);
                if (iVar1 != 0) {
                    return 1;
                }
                uVar2 = kamui_uses_noop_fr4_test_2136b0(&uStack_e0, &stack0xfffffef0);
                uVar7 = uVar7 | uVar2;
                if (uVar7 == 7) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

/*
 * gfxlib_uses_noop_fr4_test_2336e8  0x8c2336e8
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_fr4_test
 * called by: Class_129938_m4_017428, game_uses_noop_fr4_test_016e98
 */
u32 gfxlib_uses_noop_fr4_test_2336e8(double *a0, double *a1) {
    bool bVar1;
    int iVar2;
    int iVar3;
    double *pdVar4;
    double *pdVar5;
    u8 *ar4_00;
    int *piVar6;
    u8 *ar5_00;
    double *pdVar7;
    int iVar8;
    double *pdVar9;
    double *pdVar10;
    double in_dr0;
    double dVar11;
    double dVar12;
    double dVar13;
    float fVar14;
    float fVar15;
    double in_dr2;
    double dVar16;
    u64 uVar17;
    u64 uVar18;
    int *piVar19;
    u32 uVar20;
    u32 uVar21;
    double in_dr4;
    double dVar22;
    double dVar23;
    u32 uVar24;
    double in_dr6;
    u32 uVar25;
    double in_dr8;
    double dVar26;
    float fVar27;
    double in_dr12;
    float fVar28;
    u64 in_dr14;
    double dVar29;
    double in_xd2;
    double in_xd4;
    double in_xd6;
    double in_xd12;
    double in_xd14;
    bool bVar30;
    bool bVar31;
    char cVar32;
    char cVar33;
    float *ain0;
    int iStack_1d8;
    double *pdStack_1d4;
    int *piStack_1b4;
    float fStack_1ac;
    float fStack_1a8;
    float fStack_1a4;
    float fStack_1a0;
    float fStack_19c;
    float fStack_198;
    int aiStack_194[4];
    int iStack_184;
    u32 uStack_180;
    u32 uStack_17c;
    u32 uStack_178;
    float fStack_174;
    float fStack_170;
    float fStack_16c;
    float afStack_168[24];
    u8 auStack_108[8];
    double adStack_100[8];
    double adStack_c0[12];
    double dStack_60;
    double dStack_54;
    u8 auStack_48[12];
    u8 auStack_3c[16];
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    cVar33 = '\0';
    cVar32 = '\0';
    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    uStack_28 = SUB84(in_dr12, 0);
    uStack_2c = (u32)((u64)in_dr12 >> 0x20);
    dVar29 = (double)CONCAT44(0x3f800000, uStack_20);
    gfxlib_fill_loop_2360b0(a0, auStack_3c, auStack_48);
    sphere_to_aabb(a1, &dStack_54, &dStack_60);
    pdVar4 = &dStack_54;
    ar5_00 = auStack_48;
    pdVar9 = &dStack_60;
    ar4_00 = auStack_3c;
    iVar2 = ninja_float_calc_212808(ar4_00, ar5_00, pdVar4, pdVar9);
    if (iVar2 != 0) {
        libgcc_movstr_i4(ar4_00, ar5_00, pdVar4, pdVar9);
        libgcc_movstr_i4(ar4_00, ar5_00, pdVar4, pdVar9);
        bVar1 = true;
        pdStack_1d4 = adStack_c0;
        for (pdVar10 = (double *)auStack_108; pdVar10 < adStack_c0; pdVar10 = (double *)((int)pdVar10 + 0xc)) {
            piVar6 = (int *)((int)pdStack_1d4 + 4);
            iVar3 = *piVar6;
            pdVar7 = pdStack_1d4 + 1;
            iVar2 = *(int *)pdStack_1d4;
            if (cVar33 == '\0') {
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)((int)a0 + iVar3 * 0xc + 4));
            } else {
                in_xd2 = *(double *)((int)a0 + iVar3 * 0xc + 4);
            }
            iVar8 = *(int *)pdVar7;
            if (cVar33 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)((int)a0 + iVar2 * 0xc + 4));
            } else {
                in_xd4 = *(double *)((int)a0 + iVar2 * 0xc + 4);
            }
            if (cVar32 == '\0') {
                fVar14 = SUB84(in_dr2, 0) - SUB84(in_dr4, 0);
            } else {
                fVar14 = SUB84(in_dr2 - in_dr4, 0);
            }
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(*(u32 *)((int)a0 + iVar2 * 0xc + 8), SUB84(in_dr4, 0));
                dVar16 = (double)CONCAT44(*(u32 *)((int)a0 + iVar8 * 0xc + 8), fVar14);
            } else {
                dVar22 = *(double *)((int)a0 + iVar2 * 0xc + 8);
                dVar16 = *(double *)((int)a0 + iVar8 * 0xc + 8);
            }
            fVar14 = (float)((u64)dVar22 >> 0x20);
            if (cVar32 == '\0') {
                fVar15 = SUB84(dVar16, 0) * ((float)((u64)dVar16 >> 0x20) - fVar14);
            } else {
                fVar15 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22), 0);
            }
            if (cVar33 == '\0') {
                dVar16 = (double)CONCAT44(*(u32 *)((int)a0 + iVar3 * 0xc + 8), fVar15);
                dVar11 = (double)CONCAT44(*(u32 *)((int)a0 + iVar8 * 0xc + 4), SUB84(in_dr0, 0));
            } else {
                dVar16 = *(double *)((int)a0 + iVar3 * 0xc + 8);
                dVar11 = *(double *)((int)a0 + iVar8 * 0xc + 4);
            }
            if (cVar32 == '\0') {
                dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - fVar14, SUB84(dVar16, 0));
                dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar11, 0));
            } else {
                dVar16 = dVar16 - dVar22;
                dVar11 = dVar11 - dVar22;
            }
            fVar27 = (float)((u64)dVar16 >> 0x20);
            fVar15 = -SUB84(dVar16, 0);
            if (cVar32 == '\0') {
                fVar15 = (float)((u64)dVar11 >> 0x20) * fVar27 + fVar15;
            }
            if (cVar33 == '\0') {
                *(float *)pdVar10 = fVar15;
            } else {
                *pdVar10 = in_xd2;
            }
            pdVar4 = (double *)(*piVar6 * 0xc + (int)a0);
            if (cVar33 == '\0') {
                fVar15 = *(float *)(pdVar4 + 1);
            } else {
                in_xd2 = pdVar4[1];
            }
            pdVar9 = (double *)(*(int *)pdStack_1d4 * 0xc + (int)a0);
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(fVar14, *(u32 *)(pdVar9 + 1));
            } else {
                in_xd4 = pdVar9[1];
            }
            if (cVar32 == '\0') {
                fVar15 = fVar15 - SUB84(dVar22, 0);
            } else {
                fVar15 = SUB84((double)CONCAT44(fVar27, fVar15) - dVar22, 0);
            }
            pdVar5 = (double *)(*(int *)pdVar7 * 0xc + (int)a0);
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar22, 0));
                dVar16 = (double)CONCAT44(*(u32 *)pdVar5, fVar15);
            } else {
                dVar22 = *pdVar9;
                dVar16 = *pdVar5;
            }
            fVar14 = (float)((u64)dVar22 >> 0x20);
            if (cVar32 == '\0') {
                fVar15 = SUB84(dVar16, 0) * ((float)((u64)dVar16 >> 0x20) - fVar14);
            } else {
                fVar15 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22), 0);
            }
            if (cVar33 == '\0') {
                dVar16 = (double)CONCAT44(*(u32 *)pdVar4, fVar15);
            } else {
                dVar16 = *pdVar4;
            }
            if (cVar32 == '\0') {
                dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - fVar14, SUB84(dVar16, 0));
            } else {
                dVar16 = dVar16 - dVar22;
            }
            if (cVar33 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)(pdVar5 + 1), SUB84(dVar11, 0));
            } else {
                dVar11 = pdVar5[1];
            }
            fVar15 = (float)((u64)dVar16 >> 0x20);
            fVar14 = -SUB84(dVar16, 0);
            if (cVar32 == '\0') {
                uVar25 = SUB84(dVar11, 0);
                fVar14 = ((float)((u64)dVar11 >> 0x20) - SUB84(dVar22, 0)) * fVar15 + fVar14;
            } else {
                uVar25 = SUB84(dVar11 - dVar22, 0);
            }
            if (cVar33 == '\0') {
                *(float *)((int)pdVar10 + 4) = fVar14;
            } else {
                *(double *)((int)pdVar10 + 4) = in_xd2;
            }
            pdVar4 = (double *)(*piVar6 * 0xc + (int)a0);
            if (cVar33 == '\0') {
                fVar14 = *(float *)pdVar4;
            } else {
                in_xd2 = *pdVar4;
            }
            pdVar9 = (double *)(*(int *)pdStack_1d4 * 0xc + (int)a0);
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(dVar22, 0));
            } else {
                dVar22 = *pdVar9;
            }
            pdVar5 = (double *)(*(int *)pdVar7 * 0xc + (int)a0);
            fVar27 = (float)((u64)dVar22 >> 0x20);
            if (cVar32 == '\0') {
                fVar14 = fVar14 - fVar27;
            } else {
                fVar14 = SUB84((double)CONCAT44(fVar15, fVar14) - dVar22, 0);
            }
            if (cVar33 == '\0') {
                dVar16 = (double)CONCAT44(*(u32 *)((int)pdVar5 + 4), fVar14);
                dVar22 = (double)CONCAT44(fVar27, *(u32 *)((int)pdVar9 + 4));
            } else {
                dVar16 = *(double *)((int)pdVar5 + 4);
                in_xd4 = *(double *)((int)pdVar9 + 4);
            }
            if (cVar32 == '\0') {
                fVar14 = SUB84(dVar16, 0) * ((float)((u64)dVar16 >> 0x20) - SUB84(dVar22, 0));
            } else {
                fVar14 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22), 0);
            }
            if (cVar33 == '\0') {
                dVar16 = (double)CONCAT44(*(u32 *)((int)pdVar4 + 4), fVar14);
            } else {
                dVar16 = *(double *)((int)pdVar4 + 4);
            }
            if (cVar32 == '\0') {
                dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar16, 0));
            } else {
                dVar16 = dVar16 - dVar22;
            }
            if (cVar33 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)pdVar5, uVar25);
            } else {
                dVar11 = *pdVar5;
            }
            fVar15 = (float)((u64)dVar16 >> 0x20);
            fVar14 = -SUB84(dVar16, 0);
            if (cVar32 == '\0') {
                uVar25 = SUB84(dVar11, 0);
                fVar14 = ((float)((u64)dVar11 >> 0x20) - (float)((u64)dVar22 >> 0x20)) * fVar15 + fVar14;
            } else {
                uVar25 = SUB84(dVar11 - dVar22, 0);
            }
            if (cVar33 == '\0') {
                *(float *)(pdVar10 + 1) = fVar14;
                fVar28 = *(float *)pdVar10;
                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), fVar28);
                fVar27 = *(float *)((int)pdVar10 + 4);
                in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), fVar27);
                dVar16 = (double)CONCAT44(fVar28, uVar25);
                fVar14 = fVar27;
            } else {
                pdVar10[1] = in_xd2;
                dVar16 = *pdVar10;
                in_xd2 = *(double *)((int)pdVar10 + 4);
                fVar28 = SUB84(dVar29, 0);
                fVar27 = SUB84(in_dr12, 0);
                in_xd12 = in_xd2;
                in_xd14 = dVar16;
            }
            if (cVar32 == '\0') {
                dVar11 = (double)CONCAT44(fVar15, fVar14 * fVar27);
            } else {
                dVar11 = (double)CONCAT44(fVar15, fVar14) * in_dr12;
            }
            if (cVar33 == '\0') {
                in_dr12 = (double)CONCAT44(*(u32 *)(pdVar10 + 1), fVar27);
            } else {
                in_dr12 = pdVar10[1];
            }
            if (cVar32 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20),
                                          (float)((u64)dVar16 >> 0x20) * fVar28 + SUB84(dVar11, 0));
            }
            fVar14 = (float)((u64)in_dr12 >> 0x20);
            in_dr0 = in_dr12;
            if (cVar33 == '\0') {
                in_dr0 = (double)CONCAT44(fVar14, SUB84(dVar16, 0));
            }
            if (cVar32 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20),
                                          (float)((u64)in_dr0 >> 0x20) * fVar14 + SUB84(dVar11, 0));
            }
            dVar16 = in_xd2;
            if (cVar33 == '\0') {
                dVar16 = (double)((u64)dVar22 & 0xffffffff);
            }
            uVar25 = SUB84(dVar16, 0);
            pdVar4 = a0;
            noop_fr4_test(piVar6, pdVar7, a0, pdVar9, pdVar5);
            in_dr4 = dVar29;
            if (cVar33 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar25);
            }
            if (cVar32 == '\0') {
                in_dr4 =
                    (double)CONCAT44((float)((u64)in_dr4 >> 0x20) / (float)((u64)in_dr0 >> 0x20), SUB84(in_dr4, 0));
            } else {
                in_dr4 = in_dr4 / in_dr0;
            }
            if (cVar33 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), *(u32 *)pdVar10);
            } else {
                in_xd2 = *pdVar10;
            }
            fVar14 = (float)((u64)in_dr4 >> 0x20);
            if (cVar32 == '\0') {
                fVar15 = SUB84(dVar11, 0) * fVar14;
            } else {
                fVar15 = SUB84(dVar11 * in_dr4, 0);
            }
            if (cVar33 == '\0') {
                *(float *)pdVar10 = fVar15;
                in_dr2 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), fVar15);
            } else {
                *pdVar10 = in_xd2;
                in_dr2 = *(double *)((int)pdVar10 + 4);
            }
            if (cVar32 == '\0') {
                in_dr2 = (double)CONCAT44((float)((u64)in_dr2 >> 0x20) * fVar14, SUB84(in_dr2, 0));
            } else {
                in_dr2 = in_dr2 * in_dr4;
            }
            uVar25 = (u32)((u64)in_dr2 >> 0x20);
            if (cVar33 == '\0') {
                *(u32 *)((int)pdVar10 + 4) = uVar25;
                in_dr2 = (double)CONCAT44(uVar25, *(u32 *)(pdVar10 + 1));
            } else {
                *(double *)((int)pdVar10 + 4) = in_dr2;
                in_xd2 = pdVar10[1];
            }
            if (cVar32 == '\0') {
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) * fVar14);
            } else {
                in_dr2 = in_dr2 * in_dr4;
            }
            if (cVar33 == '\0') {
                *(int *)(pdVar10 + 1) = SUB84(in_dr2, 0);
            } else {
                pdVar10[1] = in_xd2;
            }
            pdStack_1d4 = pdStack_1d4 + 2;
        }
        piStack_1b4 = aiStack_194;
        for (iStack_1d8 = 0; iStack_1d8 < 6; iStack_1d8 = iStack_1d8 + 1) {
            bVar31 = true;
            iVar2 = iStack_1d8 * 0xc;
            pdVar10 = (double *)(iVar2 + (int)auStack_108);
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr4, 0));
            } else {
                dVar22 = *pdVar10;
            }
            pdVar7 = (double *)(*(int *)(adStack_c0 + iStack_1d8 * 2) * 0xc + (int)a0);
            fVar14 = (float)((u64)dVar22 >> 0x20);
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(fVar14, *(u32 *)pdVar7);
                dVar16 = (double)CONCAT44(fVar14, *(u32 *)(auStack_108 + iVar2 + 4));
                dVar11 = in_xd4;
            } else {
                dVar11 = *(double *)(auStack_108 + iVar2 + 4);
                in_xd2 = *pdVar7;
                dVar16 = dVar22;
            }
            if (cVar32 == '\0') {
                dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar22, 0), SUB84(dVar22, 0));
            } else {
                dVar22 = dVar22 * dVar22;
            }
            fVar15 = SUB84(dVar16, 0);
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)((int)pdVar7 + 4));
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar15);
            } else {
                in_xd2 = *(double *)((int)pdVar7 + 4);
            }
            if (cVar32 == '\0') {
                dVar22 = (double)CONCAT44(-(float)((u64)dVar22 >> 0x20) - SUB84(in_dr0, 0) * SUB84(dVar22, 0),
                                          SUB84(dVar22, 0));
            } else {
                dVar22 = -dVar22 - in_dr0 * dVar22;
            }
            if (cVar33 == '\0') {
                uVar25 = *(u32 *)((int)adStack_100 + iVar2);
                in_dr6 = (double)CONCAT44(uVar25, SUB84(in_dr6, 0));
                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar7 + 1));
                dVar12 = (double)CONCAT44(*(u32 *)((int)a1 + 4), uVar25);
            } else {
                in_dr6 = *(double *)((int)adStack_100 + iVar2);
                in_xd2 = pdVar7[1];
                uVar25 = (u32)((u64)in_dr6 >> 0x20);
                dVar12 = *(double *)((int)a1 + 4);
            }
            if (cVar32 == '\0') {
                dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), SUB84(dVar12, 0) * SUB84(dVar22, 0));
            } else {
                dVar12 = dVar12 * dVar22;
            }
            dVar23 = dVar11;
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar15);
                dVar23 = in_xd2;
            }
            if (cVar32 == '\0') {
                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar22, 0) * (float)((u64)dVar12 >> 0x20));
            } else {
                dVar22 = dVar22 * dVar12;
            }
            if (cVar33 == '\0') {
                in_dr6 = (double)CONCAT44(uVar25, *(u32 *)a1);
                dVar26 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(in_dr8, 0));
                dVar12 = (double)CONCAT44(fVar14, SUB84(dVar12, 0));
            } else {
                in_xd6 = *a1;
                dVar26 = dVar22;
                dVar12 = dVar16;
            }
            if (cVar32 == '\0') {
                dVar26 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) - SUB84(dVar12, 0), SUB84(dVar26, 0));
            } else {
                dVar26 = dVar26 - dVar12;
            }
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(*(u32 *)(a1 + 1), SUB84(dVar22, 0));
            } else {
                dVar22 = a1[1];
            }
            if (cVar32 == '\0') {
                dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20),
                                          (float)((u64)dVar12 >> 0x20) * SUB84(in_dr6, 0) + SUB84(dVar22, 0));
            }
            fVar27 = (float)((u64)in_dr6 >> 0x20);
            dVar13 = in_dr6;
            if (cVar33 == '\0') {
                dVar13 = (double)CONCAT44(fVar27, SUB84(dVar12, 0));
            }
            if (cVar32 == '\0') {
                dVar22 =
                    (double)(u64)(u32)((float)((u64)dVar13 >> 0x20) * (float)((u64)dVar22 >> 0x20) + SUB84(dVar22, 0));
            }
            in_dr8 = dVar23;
            dVar12 = dVar16;
            if (cVar33 == '\0') {
                in_dr8 = (double)CONCAT44(SUB84(dVar22, 0), SUB84(dVar26, 0));
                dVar12 = (double)CONCAT44(fVar14, SUB84(dVar13, 0));
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20), SUB84(dVar22, 0));
            }
            fVar28 = (float)((u64)dVar26 >> 0x20);
            if (cVar32 == '\0') {
                in_dr8 = (double)CONCAT44((float)((u64)in_dr8 >> 0x20) + fVar28, SUB84(in_dr8, 0));
            } else {
                in_dr8 = in_dr8 + dVar26;
            }
            dVar22 = dVar11;
            if (cVar33 == '\0') {
                dVar26 = (double)CONCAT44(fVar28, fVar15);
                dVar22 = dVar23;
            }
            if (cVar32 == '\0') {
                in_dr8 = (double)CONCAT44(-(float)((u64)in_dr8 >> 0x20), SUB84(in_dr8, 0));
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20),
                                          (float)((u64)dVar12 >> 0x20) * fVar14 + SUB84(dVar26, 0) * fVar15);
            } else {
                dVar26 = dVar26 * dVar16;
                in_dr8 = -in_dr8;
            }
            in_xd4 = in_dr8;
            dVar23 = in_dr6;
            if (cVar33 == '\0') {
                dVar16 = (double)CONCAT44(fVar14, (int)((u64)in_dr8 >> 0x20));
                in_xd4 = dVar11;
                dVar23 = (double)CONCAT44(fVar27, SUB84(dVar12, 0));
            }
            if (cVar32 == '\0') {
                dVar26 = (double)CONCAT44((int)((u64)dVar26 >> 0x20),
                                          (float)((u64)dVar23 >> 0x20) * fVar27 + SUB84(dVar26, 0));
            }
            dVar11 = dVar16;
            if (cVar33 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar23, 0));
            }
            if (cVar32 == '\0') {
                fVar14 = SUB84(dVar16, 0) / SUB84(dVar26, 0);
                in_dr6 = (double)(u64)(u32)((float)((u64)dVar11 >> 0x20) * fVar14 + SUB84(in_dr6, 0));
            } else {
                fVar14 = SUB84(dVar16 / dVar26, 0);
            }
            if (cVar33 == '\0') {
                uStack_180 = SUB84(in_dr6, 0);
                uVar17 = CONCAT44(*(u32 *)((int)a1 + 4), *(u32 *)(auStack_108 + iVar2 + 4));
                dVar16 = (double)CONCAT44(fVar14, SUB84(dVar11, 0));
            } else {
                uStack_180 = SUB84(in_xd6, 0);
                dVar22 = *(double *)(auStack_108 + iVar2 + 4);
                uVar17 = *(u64 *)((int)a1 + 4);
                dVar16 = in_xd4;
            }
            fVar15 = (float)((u64)dVar16 >> 0x20);
            if (cVar32 == '\0') {
                uVar17 = CONCAT44(fVar15 * (float)uVar17 + (float)((u64)uVar17 >> 0x20), (float)uVar17);
            }
            if (cVar33 == '\0') {
                uStack_17c = (u32)((u64)uVar17 >> 0x20);
                uVar18 = CONCAT44(*(u32 *)((int)adStack_100 + iVar2), *(u32 *)(a1 + 1));
            } else {
                uStack_17c = (u32)uVar17;
                uVar18 = *(u64 *)((int)adStack_100 + iVar2);
                dVar22 = a1[1];
            }
            if (cVar32 == '\0') {
                uVar18 = (u64)(u32)(fVar15 * (float)(uVar18 >> 0x20) + (float)uVar18);
            }
            uStack_178 = (u32)uVar18;
            if (cVar33 == '\0') {
                dVar16 = (double)CONCAT44(*(u32 *)((int)a1 + 4), SUB84(dVar16, 0));
                in_xd2 = (double)CONCAT44(uStack_17c, SUB84(in_dr12, 0));
                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uStack_180);
            } else {
                uStack_178 = SUB84(dVar22, 0);
                fStack_174 = (float)((u64)dVar22 >> 0x20);
                dVar16 = *(double *)((int)a1 + 4);
                in_xd2 = (double)CONCAT44(uStack_178, uStack_17c);
                in_xd14 = (double)CONCAT44(uStack_17c, uStack_180);
            }
            if (cVar32 == '\0') {
                in_xd2 =
                    (double)CONCAT44((float)((u64)in_xd2 >> 0x20) - (float)((u64)dVar16 >> 0x20), SUB84(in_xd2, 0));
            } else {
                in_xd2 = in_xd2 - dVar16;
            }
            if (cVar33 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)(a1 + 1), *(u32 *)a1);
            } else {
                dVar22 = *a1;
                dVar11 = a1[1];
            }
            if (cVar32 == '\0') {
                dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), SUB84(dVar29, 0) - SUB84(dVar11, 0));
            } else {
                dVar29 = dVar29 - dVar11;
            }
            fVar15 = (float)((u64)in_xd2 >> 0x20);
            if (cVar33 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar15);
                in_xd2 = dVar22;
                dVar22 = (double)CONCAT44(fVar15, uStack_178);
            } else {
                in_xd12 = (double)CONCAT44(fStack_174, uStack_178);
                dVar22 = in_xd2;
            }
            if (cVar32 == '\0') {
                fVar27 = (float)((u64)dVar11 >> 0x20);
                dVar11 = (double)CONCAT44(fVar27, SUB84(dVar11, 0) * fVar15);
                fVar27 = SUB84(dVar22, 0) - fVar27;
            } else {
                dVar11 = dVar11 * dVar22;
                fVar27 = SUB84(dVar22 - dVar11, 0);
            }
            dVar22 = in_xd14;
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(SUB84(dVar29, 0), SUB84(dVar16, 0));
            }
            if (cVar32 == '\0') {
                dVar11 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * SUB84(dVar29, 0) + SUB84(dVar11, 0));
            }
            dVar16 = in_xd12;
            if (cVar33 == '\0') {
                dVar16 = (double)CONCAT44(fVar27, SUB84(dVar22, 0));
            }
            if (cVar32 == '\0') {
                dVar11 = (double)(u64)(u32)((float)((u64)dVar16 >> 0x20) * fVar27 + SUB84(dVar11, 0));
            }
            dVar22 = in_xd2;
            if (cVar33 == '\0') {
                dVar22 = (double)(u64)(u32)fVar14;
            }
            noop_fr4_test(pdVar10, pdVar7, pdVar4, pdVar9);
            pdStack_1d4 = (double *)piStack_1b4;
            dVar12 = dVar16;
            dVar23 = dVar16;
            if (cVar33 == '\0') {
                uVar25 = (u32)((u64)dVar16 >> 0x20);
                dVar12 = (double)CONCAT44(uVar25, uVar25);
                dVar23 = in_xd12;
            }
            in_xd12 = dVar23;
            ain0 = afStack_168 + iStack_1d8 * 4;
            iVar2 = iStack_1d8 * 0x10 + -0xc0;
            if (cVar32 == '\0') {
                dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) * SUB84(dVar12, 0), SUB84(dVar12, 0));
            } else {
                dVar12 = dVar12 * dVar12;
            }
            while (true) {
                uVar21 = SUB84(dVar22, 0);
                uVar24 = SUB84(in_dr6, 0);
                uVar25 = SUB84(dVar11, 0);
                if (cVar33 == '\0') {
                    dVar29 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), 0x3ccccccd);
                } else {
                    in_xd14 = -1.5763811764977282e-226;
                }
                if (&iStack_184 <= pdStack_1d4)
                    break;
                switch_jump_r0(0x14, aiStack_194, &g_8c26d940);
                iVar3 = *(int *)pdStack_1d4;
                pdVar10 = (double *)((int)adStack_c0 + iVar3 * 4 + iVar2 + 0xc0);
                piVar6 = (int *)((int)adStack_c0 + *(int *)((int)pdStack_1d4 + 4) * 4 + iVar2 + 0xc0);
                pdVar4 = (double *)(*(int *)pdVar10 * 0xc + (int)a0);
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)pdVar4, uVar25);
                } else {
                    dVar22 = *pdVar4;
                }
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(*piVar6 * 0xc + (int)a0));
                } else {
                    in_xd2 = *(double *)(*piVar6 * 0xc + (int)a0);
                }
                if (cVar32 == '\0') {
                    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar22, 0));
                } else {
                    dVar22 = dVar22 - dVar22;
                }
                fStack_1ac = SUB84(dVar22, 0);
                if (cVar33 == '\0') {
                    fStack_1ac = (float)((u64)dVar22 >> 0x20);
                }
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)((int)a0 + *(int *)pdVar10 * 0xc + 4),
                                              *(u32 *)((int)a0 + *piVar6 * 0xc + 4));
                } else {
                    dVar22 = *(double *)((int)a0 + *(int *)pdVar10 * 0xc + 4);
                    in_xd2 = *(double *)((int)a0 + *piVar6 * 0xc + 4);
                }
                if (cVar32 == '\0') {
                    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar22, 0));
                } else {
                    dVar22 = dVar22 - dVar22;
                }
                if (cVar33 == '\0') {
                    fStack_1a8 = (float)((u64)dVar22 >> 0x20);
                } else {
                    fStack_1a8 = SUB84(dVar22, 0);
                }
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)((int)a0 + *(int *)pdVar10 * 0xc + 8),
                                              *(u32 *)((int)a0 + *piVar6 * 0xc + 8));
                } else {
                    in_xd2 = *(double *)((int)a0 + *piVar6 * 0xc + 8);
                    dVar22 = *(double *)((int)a0 + *(int *)pdVar10 * 0xc + 8);
                }
                if (cVar32 == '\0') {
                    dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0), SUB84(dVar22, 0));
                } else {
                    dVar22 = dVar22 - dVar22;
                }
                fVar14 = (float)((u64)dVar22 >> 0x20);
                fStack_1a4 = fVar14;
                if (cVar33 != '\0') {
                    fStack_1a4 = SUB84(dVar22, 0);
                    fStack_1a0 = fVar14;
                }
                if (cVar33 == '\0') {
                    dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), uStack_17c);
                    in_dr6 = (double)CONCAT44(fStack_1a8, uVar24);
                } else {
                    in_dr6 = (double)CONCAT44(fStack_1a4, fStack_1a8);
                }
                if (cVar33 == '\0') {
                    dVar22 = (double)(u64)uStack_180;
                } else {
                    in_xd2 = (double)CONCAT44(uStack_17c, uStack_180);
                }
                pdVar7 = (double *)(*(int *)pdVar10 * 0xc + (int)a0);
                if (cVar33 == '\0') {
                    dVar11 = (double)CONCAT44(fStack_1ac, uVar21);
                    dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(dVar22, 0));
                    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), *(u32 *)pdVar7);
                } else {
                    dVar11 = (double)CONCAT44(fStack_1a8, fStack_1ac);
                    dVar22 = *(double *)((int)pdVar7 + 4);
                    in_xd6 = *pdVar7;
                }
                if (cVar32 == '\0') {
                    fVar14 = SUB84(dVar16, 0) - (float)((u64)dVar22 >> 0x20);
                } else {
                    fVar14 = SUB84(dVar16 - dVar22, 0);
                }
                fVar15 = (float)((u64)in_dr6 >> 0x20);
                dVar16 = in_dr6;
                if (cVar33 == '\0') {
                    dVar16 = (double)CONCAT44(fVar15, SUB84(dVar22, 0));
                }
                if (cVar32 == '\0') {
                    dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar16, 0) - SUB84(in_dr6, 0));
                } else {
                    dVar16 = dVar16 - in_dr6;
                }
                uVar25 = (u32)((u64)dVar11 >> 0x20);
                if (cVar33 == '\0') {
                    dVar11 = (double)CONCAT44(uVar25, fStack_1a4);
                    dVar22 = (double)CONCAT44(uVar25, fVar14);
                } else {
                    in_xd4 = (double)CONCAT44(fStack_1a0, fStack_1a4);
                    dVar22 = dVar11;
                }
                if (cVar32 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * SUB84(dVar22, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 * dVar22;
                }
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), *(u32 *)(pdVar7 + 1));
                }
                if (cVar32 == '\0') {
                    dVar16 =
                        (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20),
                                         SUB84(dVar16, 0));
                }
                fVar14 = SUB84(dVar11, 0);
                if (cVar33 == '\0') {
                    dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), uStack_178);
                    dVar22 = (double)CONCAT44(fVar14, SUB84(dVar22, 0));
                } else {
                    in_xd2 = (double)CONCAT44(fStack_174, uStack_178);
                    dVar22 = in_xd4;
                }
                if (cVar32 == '\0') {
                    dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar16, 0) - SUB84(dVar22, 0));
                } else {
                    dVar16 = dVar16 - dVar22;
                }
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), fVar15);
                }
                if (cVar32 == '\0') {
                    fVar15 = SUB84(dVar22, 0) * fVar15;
                    dVar16 =
                        (double)CONCAT44((float)((u64)dVar22 >> 0x20) * SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20),
                                         SUB84(dVar16, 0));
                } else {
                    fVar15 = SUB84(dVar22 * in_dr6, 0);
                }
                fVar27 = (float)((u64)dVar11 >> 0x20);
                dVar22 = dVar11;
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44(fVar27, fVar15);
                }
                if (cVar32 == '\0') {
                    dVar22 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * fVar27 + SUB84(dVar22, 0));
                }
                dVar23 = in_xd4;
                if (cVar33 == '\0') {
                    dVar23 = (double)CONCAT44(fVar14, SUB84(dVar22, 0));
                }
                if (cVar32 == '\0') {
                    dVar23 = (double)(u64)(u32)((float)((u64)dVar23 >> 0x20) * fVar14 + SUB84(dVar23, 0));
                }
                dVar22 = dVar11;
                if (cVar33 == '\0') {
                    dVar11 = (double)CONCAT44(fVar27, SUB84(dVar23, 0));
                    dVar22 = (double)CONCAT44(fVar27, (int)((u64)dVar16 >> 0x20));
                    dVar16 = in_xd4;
                }
                in_xd4 = dVar16;
                if (cVar32 == '\0') {
                    fVar14 = SUB84(dVar22, 0) / SUB84(dVar11, 0);
                    in_dr6 = (double)(u64)(u32)((float)((u64)dVar11 >> 0x20) * fVar14 + SUB84(in_dr6, 0));
                } else {
                    fVar14 = SUB84(dVar22 / dVar11, 0);
                }
                if (cVar33 == '\0') {
                    fStack_1a0 = SUB84(in_dr6, 0);
                    dVar22 = (double)CONCAT44(fVar14, SUB84(dVar11, 0));
                } else {
                    fStack_1a0 = SUB84(in_xd6, 0);
                    dVar22 = in_xd4;
                }
                if (cVar33 == '\0') {
                    fStack_19c = *(float *)((int)a0 + *(int *)pdVar10 * 0xc + 4);
                } else {
                    in_xd2 = *(double *)((int)a0 + *(int *)pdVar10 * 0xc + 4);
                    fStack_19c = fStack_1a8;
                    fStack_1a8 = fStack_1a4;
                }
                fVar15 = (float)((u64)dVar22 >> 0x20);
                if (cVar32 == '\0') {
                    fStack_19c = fVar15 * fStack_1a8 + fStack_19c;
                }
                if (cVar33 != '\0') {
                    fStack_19c = SUB84(in_xd2, 0);
                }
                if (cVar33 == '\0') {
                    fStack_198 = *(float *)((int)a0 + *(int *)pdVar10 * 0xc + 8);
                } else {
                    in_xd2 = *(double *)((int)a0 + *(int *)pdVar10 * 0xc + 8);
                    fStack_198 = fStack_1a4;
                    fStack_1a4 = fStack_1a0;
                }
                if (cVar32 == '\0') {
                    fStack_198 = fVar15 * fStack_1a4 + fStack_198;
                }
                if (cVar33 == '\0') {
                    dVar16 = (double)CONCAT44(fStack_1a0, uStack_180);
                } else {
                    fStack_198 = SUB84(in_xd2, 0);
                    aiStack_194[0] = (int)((u64)in_xd2 >> 0x20);
                    dVar16 = (double)CONCAT44(fStack_19c, fStack_1a0);
                    in_xd2 = (double)CONCAT44(uStack_17c, uStack_180);
                }
                if (cVar32 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                if (cVar33 == '\0') {
                    fStack_1ac = (float)((u64)dVar16 >> 0x20);
                    dVar16 = (double)CONCAT44(fStack_19c, uStack_17c);
                } else {
                    fStack_1ac = SUB84(dVar16, 0);
                    dVar16 = (double)CONCAT44(fStack_198, fStack_19c);
                    in_xd2 = (double)CONCAT44(uStack_178, uStack_17c);
                }
                if (cVar32 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                if (cVar33 == '\0') {
                    fStack_1a8 = (float)((u64)dVar16 >> 0x20);
                    dVar16 = (double)CONCAT44(fStack_198, uStack_178);
                } else {
                    fStack_1a8 = SUB84(dVar16, 0);
                    dVar16 = (double)CONCAT44(aiStack_194[0], fStack_198);
                    in_xd2 = (double)CONCAT44(fStack_174, uStack_178);
                }
                if (cVar32 == '\0') {
                    dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) - SUB84(dVar16, 0), SUB84(dVar16, 0));
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                fVar15 = (float)((u64)dVar16 >> 0x20);
                if (cVar33 == '\0') {
                    dVar16 = (double)CONCAT44(fStack_1a8, fStack_1a8);
                    fVar27 = fStack_1ac;
                    fStack_1a4 = fVar15;
                    fVar15 = SUB84(dVar22, 0);
                } else {
                    fStack_1a4 = SUB84(dVar16, 0);
                    dVar16 = (double)CONCAT44(fStack_1a4, fStack_1a8);
                    in_xd2 = dVar16;
                    fVar27 = fStack_1a8;
                    fStack_1a0 = fVar15;
                    fVar15 = fStack_1ac;
                }
                if (cVar32 == '\0') {
                    fVar28 = fStack_1a8 * (float)((u64)dVar16 >> 0x20);
                } else {
                    fVar28 = SUB84(dVar16 * dVar16, 0);
                }
                if (cVar33 == '\0') {
                    dVar11 = (double)CONCAT44(fStack_1a4, fVar28);
                    fVar15 = fStack_1ac;
                } else {
                    dVar11 = (double)CONCAT44(fStack_1a0, fStack_1a4);
                }
                if (cVar32 == '\0') {
                    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar27 * fVar15 + SUB84(dVar11, 0));
                }
                piVar19 = (int *)((u64)dVar11 >> 0x20);
                dVar16 = dVar11;
                piVar6 = piVar19;
                if (cVar33 == '\0') {
                    dVar16 = (double)CONCAT44(piVar19, piVar19);
                    piVar6 = piStack_1b4;
                }
                piStack_1b4 = piVar6;
                if (cVar32 == '\0') {
                    dVar11 =
                        (double)CONCAT44(piVar19, (float)((u64)dVar16 >> 0x20) * SUB84(dVar16, 0) + SUB84(dVar11, 0));
                }
                dVar22 = in_xd2;
                if (cVar33 == '\0') {
                    dVar22 = (double)(u64)(u32)fVar14;
                }
                uVar25 = SUB84(dVar22, 0);
                pdVar4 = a0;
                pdVar9 = a0;
                noop_fr4_test(pdVar10, pdVar7, a0, a0, ain0);
                dVar22 = dVar29;
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar25);
                }
                if (cVar32 == '\0') {
                    dVar22 =
                        (double)CONCAT44((float)((u64)dVar22 >> 0x20) / (float)((u64)dVar16 >> 0x20), SUB84(dVar22, 0));
                } else {
                    dVar22 = dVar22 / dVar16;
                }
                if (cVar33 == '\0') {
                    dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fStack_1ac);
                } else {
                    in_xd2 = (double)CONCAT44(fStack_1a8, fStack_1ac);
                }
                fVar14 = (float)((u64)dVar22 >> 0x20);
                if (cVar32 == '\0') {
                    fStack_1ac = SUB84(dVar11, 0) * fVar14;
                } else {
                    fStack_1ac = SUB84(dVar11 * dVar22, 0);
                }
                if (cVar33 == '\0') {
                    dVar11 = (double)CONCAT44(fStack_1a8, fStack_1ac);
                } else {
                    fStack_1ac = SUB84(in_xd2, 0);
                    fStack_1a8 = (float)((u64)in_xd2 >> 0x20);
                    dVar11 = (double)CONCAT44(fStack_1a4, fStack_1a8);
                }
                if (cVar32 == '\0') {
                    dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) * fVar14, SUB84(dVar11, 0));
                } else {
                    dVar11 = dVar11 * dVar22;
                }
                uVar20 = (u32)((u64)dVar11 >> 0x20);
                if (cVar33 == '\0') {
                    dVar11 = (double)CONCAT44(uVar20, fStack_1a4);
                    fStack_1a8 = (float)uVar20;
                } else {
                    fStack_1a8 = SUB84(dVar11, 0);
                    in_xd2 = (double)CONCAT44(fStack_1a0, uVar20);
                }
                if (cVar32 == '\0') {
                    fVar14 = SUB84(dVar11, 0) * fVar14;
                } else {
                    fVar14 = SUB84(dVar11 * dVar22, 0);
                }
                if (cVar33 != '\0') {
                    fStack_1a4 = SUB84(in_xd2, 0);
                    fStack_1a0 = (float)((u64)in_xd2 >> 0x20);
                    in_xd2 = (double)CONCAT44(fStack_1a8, fStack_1ac);
                    fStack_1ac = fVar14;
                    fVar14 = fStack_1a4;
                }
                pdVar5 = (double *)((int)ain0[iVar3] * 0xc + (int)auStack_108);
                if (cVar33 == '\0') {
                    dVar11 = (double)CONCAT44(*(u32 *)pdVar5, fStack_1ac);
                } else {
                    dVar11 = *pdVar5;
                }
                fVar15 = SUB84(dVar29, 0);
                if (cVar32 == '\0') {
                    fVar27 = ABS((float)((u64)dVar11 >> 0x20) - SUB84(dVar11, 0));
                    dVar11 = (double)CONCAT44(fVar27, SUB84(dVar11, 0));
                    bVar30 = fVar15 < fVar27;
                } else {
                    dVar11 = ABS(dVar11 - dVar11);
                    bVar30 = dVar29 < dVar11;
                }
                if (bVar30) {
                LAB_8c233baa:
                    if (cVar33 == '\0') {
                        dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), *(u32 *)((int)a1 + 0xc));
                    } else {
                        in_xd2 = *(double *)((int)a1 + 0xc);
                    }
                    if (cVar32 == '\0') {
                        bVar30 = SUB84(dVar11, 0) < SUB84(dVar12, 0);
                    } else {
                        bVar30 = dVar11 < dVar12;
                    }
                    if (!bVar30) {
                        if (cVar33 == '\0') {
                            fVar14 = *(float *)((int)a1 + 0xc);
                            dVar16 = (double)CONCAT44(fStack_19c, SUB84(dVar16, 0));
                            dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar14);
                            dVar22 = (double)CONCAT44(fVar14, SUB84(dVar22, 0));
                        } else {
                            in_xd2 = *(double *)((int)a1 + 0xc);
                            dVar16 = (double)CONCAT44(fStack_198, fStack_19c);
                            fVar14 = (float)((u64)in_xd2 >> 0x20);
                            dVar22 = in_xd2;
                        }
                        if (cVar32 == '\0') {
                            fVar14 = SUB84(dVar11, 0) * fVar14;
                        } else {
                            fVar14 = SUB84(dVar11 * dVar22, 0);
                        }
                        if (cVar33 == '\0') {
                            in_dr6 = (double)CONCAT44(uStack_180, uStack_17c);
                        } else {
                            in_xd6 = (double)CONCAT44(uStack_178, uStack_17c);
                            in_dr6 = (double)CONCAT44(uStack_17c, uStack_180);
                        }
                        if (cVar32 == '\0') {
                            in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20),
                                                      SUB84(in_dr6, 0) - (float)((u64)dVar16 >> 0x20));
                        } else {
                            in_dr6 = in_dr6 - dVar16;
                        }
                        if (cVar33 == '\0') {
                            dVar23 = (double)CONCAT44(uStack_178, fVar14);
                        } else {
                            dVar23 = (double)CONCAT44(fStack_174, uStack_178);
                            in_xd4 = in_xd2;
                        }
                        if (cVar32 == '\0') {
                            dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20),
                                                      SUB84(dVar23, 0) - (float)((u64)dVar12 >> 0x20));
                        } else {
                            dVar23 = dVar23 - dVar12;
                        }
                        if (cVar33 == '\0') {
                            dVar11 = (double)CONCAT44(fStack_198, fStack_1a0);
                            dVar22 = in_xd2;
                        } else {
                            dVar22 = (double)CONCAT44(fStack_19c, fStack_1a0);
                            dVar11 = (double)CONCAT44(aiStack_194[0], fStack_198);
                        }
                        if (cVar32 == '\0') {
                            in_dr6 =
                                (double)CONCAT44((float)((u64)in_dr6 >> 0x20) - SUB84(dVar11, 0), SUB84(in_dr6, 0));
                        } else {
                            in_dr6 = in_dr6 - dVar11;
                        }
                        in_xd2 = in_xd6;
                        if (cVar33 == '\0') {
                            dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(in_dr6, 0));
                            in_xd2 = dVar22;
                        }
                        if (cVar32 == '\0') {
                            fVar14 = (float)((u64)dVar11 >> 0x20);
                            dVar11 = (double)CONCAT44(fVar14, SUB84(dVar11, 0) * SUB84(in_dr6, 0));
                            dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) - fVar14, SUB84(dVar23, 0));
                        } else {
                            dVar11 = dVar11 * in_dr6;
                            dVar23 = dVar23 - dVar11;
                        }
                        fVar14 = (float)((u64)in_dr6 >> 0x20);
                        dVar22 = in_dr6;
                        if (cVar33 == '\0') {
                            dVar22 = (double)CONCAT44(fVar14, SUB84(dVar16, 0));
                        }
                        if (cVar32 == '\0') {
                            dVar11 = (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * fVar14 + SUB84(dVar11, 0));
                        }
                        fVar14 = (float)((u64)dVar23 >> 0x20);
                        dVar16 = dVar23;
                        if (cVar33 == '\0') {
                            dVar16 = (double)CONCAT44(fVar14, SUB84(dVar22, 0));
                        }
                        if (cVar32 == '\0') {
                            dVar11 = (double)(u64)(u32)((float)((u64)dVar16 >> 0x20) * fVar14 + SUB84(dVar11, 0));
                        }
                        dVar22 = in_xd2;
                        if (cVar33 == '\0') {
                            dVar22 = (double)CONCAT44(SUB84(dVar11, 0), SUB84(dVar23, 0));
                        }
                        if (cVar32 != '\0' || (float)((u64)dVar22 >> 0x20) <= SUB84(dVar22, 0))
                            goto LAB_8c233bf0;
                    }
                    bVar31 = false;
                } else {
                    if (cVar33 == '\0') {
                        dVar11 = (double)(u64)(u32)fStack_1a8;
                    } else {
                        in_xd2 = (double)CONCAT44(fVar14, fStack_1a8);
                    }
                    if (cVar33 == '\0') {
                        dVar11 = (double)CONCAT44(*(u32 *)(auStack_108 + (int)ain0[iVar3] * 0xc + 4), SUB84(dVar11, 0));
                    } else {
                        dVar11 = *(double *)(auStack_108 + (int)ain0[iVar3] * 0xc + 4);
                    }
                    if (cVar32 == '\0') {
                        fVar27 = ABS((float)((u64)dVar11 >> 0x20) - SUB84(dVar11, 0));
                        dVar11 = (double)CONCAT44(fVar27, SUB84(dVar11, 0));
                        bVar30 = fVar15 < fVar27;
                    } else {
                        dVar11 = ABS(dVar11 - dVar11);
                        bVar30 = dVar29 < dVar11;
                    }
                    if (bVar30)
                        goto LAB_8c233baa;
                    if (cVar33 == '\0') {
                        dVar11 = (double)(u64)(u32)fVar14;
                    } else {
                        in_xd2 = (double)CONCAT44(fStack_1a0, fVar14);
                    }
                    if (cVar33 == '\0') {
                        dVar11 =
                            (double)CONCAT44(*(u32 *)((int)adStack_100 + (int)ain0[iVar3] * 0xc), SUB84(dVar11, 0));
                    } else {
                        dVar11 = *(double *)((int)adStack_100 + (int)ain0[iVar3] * 0xc);
                    }
                    if (cVar32 == '\0') {
                        fVar14 = ABS((float)((u64)dVar11 >> 0x20) - SUB84(dVar11, 0));
                        dVar11 = (double)CONCAT44(fVar14, SUB84(dVar11, 0));
                        bVar30 = fVar15 < fVar14;
                    } else {
                        dVar11 = ABS(dVar11 - dVar11);
                        fVar14 = (float)((u64)dVar11 >> 0x20);
                        bVar30 = dVar29 < dVar11;
                    }
                    if (bVar30)
                        goto LAB_8c233baa;
                    if (cVar33 == '\0') {
                        dVar11 = (double)CONCAT44(fVar14, *(u32 *)((int)a1 + 0xc));
                    } else {
                        in_xd2 = *(double *)((int)a1 + 0xc);
                    }
                    if (cVar32 == '\0') {
                        bVar30 = SUB84(dVar11, 0) < SUB84(dVar12, 0);
                    } else {
                        bVar30 = dVar11 < dVar12;
                    }
                    if (bVar30)
                        goto LAB_8c233baa;
                }
            LAB_8c233bf0:
                pdStack_1d4 = (double *)((int)pdStack_1d4 + 4);
            }
            if (bVar31) {
                return 1;
            }
            if (cVar33 == '\0') {
                dVar11 = (double)CONCAT44(uStack_180, *(u32 *)a1);
            } else {
                in_xd2 = *a1;
                dVar11 = (double)CONCAT44(uStack_17c, uStack_180);
            }
            if (cVar32 == '\0') {
                dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - SUB84(dVar11, 0), SUB84(dVar11, 0));
            } else {
                dVar11 = dVar11 - dVar11;
            }
            if (cVar33 == '\0') {
                fStack_174 = (float)((u64)dVar11 >> 0x20);
                dVar11 = (double)CONCAT44(uStack_17c, *(u32 *)((int)a1 + 4));
            } else {
                fStack_174 = SUB84(dVar11, 0);
                dVar11 = (double)CONCAT44(uStack_178, uStack_17c);
                in_xd2 = *(double *)((int)a1 + 4);
            }
            if (cVar32 == '\0') {
                dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - SUB84(dVar11, 0), SUB84(dVar11, 0));
            } else {
                dVar11 = dVar11 - dVar11;
            }
            if (cVar33 == '\0') {
                fStack_170 = (float)((u64)dVar11 >> 0x20);
                dVar11 = (double)CONCAT44(uStack_178, *(u32 *)(a1 + 1));
            } else {
                fStack_170 = SUB84(dVar11, 0);
                dVar11 = (double)CONCAT44(fStack_174, uStack_178);
                in_xd2 = a1[1];
            }
            if (cVar32 == '\0') {
                dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - SUB84(dVar11, 0), SUB84(dVar11, 0));
            } else {
                dVar11 = dVar11 - dVar11;
            }
            fVar14 = (float)((u64)dVar11 >> 0x20);
            if (cVar33 == '\0') {
                dVar11 = (double)CONCAT44(fVar14, fStack_170);
                in_dr12 = (double)CONCAT44(fStack_174, SUB84(dVar12, 0));
                dVar16 = (double)CONCAT44(fStack_170, SUB84(dVar16, 0));
                fVar15 = fStack_170;
                fStack_16c = fVar14;
            } else {
                fStack_16c = SUB84(dVar11, 0);
                dVar16 = (double)CONCAT44(fStack_16c, fStack_170);
                in_dr12 = (double)CONCAT44(fStack_170, fStack_174);
                fVar15 = fStack_16c;
                in_xd2 = dVar16;
                afStack_168[0] = fVar14;
            }
            if (cVar32 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fVar15 * (float)((u64)dVar16 >> 0x20));
            } else {
                dVar11 = dVar11 * dVar16;
            }
            uVar25 = (u32)((u64)in_dr12 >> 0x20);
            if (cVar33 == '\0') {
                in_dr12 = (double)CONCAT44(uVar25, fStack_16c);
                dVar16 = (double)CONCAT44(uVar25, SUB84(dVar16, 0));
            } else {
                in_xd12 = (double)CONCAT44(afStack_168[0], fStack_16c);
                dVar16 = in_dr12;
            }
            if (cVar32 == '\0') {
                dVar11 =
                    (double)CONCAT44((int)((u64)dVar11 >> 0x20),
                                     (float)((u64)dVar16 >> 0x20) * (float)((u64)in_dr12 >> 0x20) + SUB84(dVar11, 0));
            }
            in_dr0 = in_xd12;
            if (cVar33 == '\0') {
                in_dr0 = (double)CONCAT44(SUB84(in_dr12, 0), SUB84(dVar16, 0));
            }
            if (cVar32 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20),
                                          (float)((u64)in_dr0 >> 0x20) * SUB84(in_dr12, 0) + SUB84(dVar11, 0));
            }
            dVar16 = in_xd2;
            if (cVar33 == '\0') {
                dVar16 = (double)((u64)dVar22 & 0xffffffff);
            }
            uVar25 = SUB84(dVar16, 0);
            noop_fr4_test(pdVar10, pdVar7, pdVar4, pdVar9);
            in_dr4 = dVar29;
            if (cVar33 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)dVar29 >> 0x20), uVar25);
            }
            if (cVar32 == '\0') {
                in_dr4 =
                    (double)CONCAT44((float)((u64)in_dr4 >> 0x20) / (float)((u64)in_dr0 >> 0x20), SUB84(in_dr4, 0));
            } else {
                in_dr4 = in_dr4 / in_dr0;
            }
            if (cVar33 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), fStack_174);
            } else {
                in_xd2 = (double)CONCAT44(fStack_170, fStack_174);
            }
            fVar14 = (float)((u64)in_dr4 >> 0x20);
            if (cVar32 == '\0') {
                fStack_174 = SUB84(dVar11, 0) * fVar14;
            } else {
                fStack_174 = SUB84(dVar11 * in_dr4, 0);
            }
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(fStack_170, fStack_174);
            } else {
                fStack_174 = SUB84(in_xd2, 0);
                fStack_170 = (float)((u64)in_xd2 >> 0x20);
                dVar22 = (double)CONCAT44(fStack_16c, fStack_170);
            }
            if (cVar32 == '\0') {
                dVar22 = (double)CONCAT44((float)((u64)dVar22 >> 0x20) * fVar14, SUB84(dVar22, 0));
            } else {
                dVar22 = dVar22 * in_dr4;
            }
            uVar25 = (u32)((u64)dVar22 >> 0x20);
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(uVar25, fStack_16c);
                fStack_170 = (float)uVar25;
            } else {
                fStack_170 = SUB84(dVar22, 0);
                in_xd2 = (double)CONCAT44(afStack_168[0], uVar25);
            }
            if (cVar32 == '\0') {
                fVar14 = SUB84(dVar22, 0) * fVar14;
            } else {
                fVar14 = SUB84(dVar22 * in_dr4, 0);
            }
            fVar15 = fStack_174;
            fStack_16c = fVar14;
            if (cVar33 != '\0') {
                fStack_16c = SUB84(in_xd2, 0);
                afStack_168[0] = (float)((u64)in_xd2 >> 0x20);
                in_xd2 = (double)CONCAT44(fStack_170, fStack_174);
                fVar15 = fVar14;
            }
            pdVar10 = (double *)(iStack_1d8 * 0xc + (int)auStack_108);
            if (cVar33 == '\0') {
                dVar22 = (double)CONCAT44(*(u32 *)pdVar10, fVar15);
            } else {
                dVar22 = *pdVar10;
            }
            fVar14 = SUB84(dVar29, 0);
            if (cVar32 == '\0') {
                fVar15 = ABS((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0));
                dVar22 = (double)CONCAT44(fVar15, SUB84(dVar22, 0));
                bVar31 = fVar14 < fVar15;
            } else {
                dVar22 = ABS(dVar22 - dVar22);
                bVar31 = dVar29 < dVar22;
            }
            if (bVar31) {
            LAB_8c233cbe:
                bVar1 = false;
            } else {
                fVar15 = fStack_170;
                if (cVar33 != '\0') {
                    in_xd2 = (double)CONCAT44(fStack_16c, fStack_170);
                    fVar15 = (float)SUB84(dVar22, 0);
                }
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)(auStack_108 + iStack_1d8 * 0xc + 4), fVar15);
                } else {
                    dVar22 = *(double *)(auStack_108 + iStack_1d8 * 0xc + 4);
                }
                if (cVar32 == '\0') {
                    fVar15 = ABS((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0));
                    dVar22 = (double)CONCAT44(fVar15, SUB84(dVar22, 0));
                    bVar31 = fVar14 < fVar15;
                } else {
                    dVar22 = ABS(dVar22 - dVar22);
                    bVar31 = dVar29 < dVar22;
                }
                if (bVar31)
                    goto LAB_8c233cbe;
                fVar15 = fStack_16c;
                if (cVar33 != '\0') {
                    in_xd2 = (double)CONCAT44(afStack_168[0], fStack_16c);
                    fVar15 = SUB84(dVar22, 0);
                }
                if (cVar33 == '\0') {
                    dVar22 = (double)CONCAT44(*(u32 *)((int)adStack_100 + iStack_1d8 * 0xc), fVar15);
                } else {
                    dVar22 = *(double *)((int)adStack_100 + iStack_1d8 * 0xc);
                }
                if (cVar32 == '\0') {
                    bVar31 = fVar14 < ABS((float)((u64)dVar22 >> 0x20) - SUB84(dVar22, 0));
                } else {
                    bVar31 = dVar29 < ABS(dVar22 - dVar22);
                }
                if (bVar31)
                    goto LAB_8c233cbe;
            }
        }
        if (bVar1) {
            return 1;
        }
    }
    return 0;
}

/*
 * gfxlib_uses_noop_fr4_test_233d14  0x8c233d14
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_fr4_test
 * called by: game_uses_noop_fr4_test_016e38
 */
u32 gfxlib_uses_noop_fr4_test_233d14(int a0, int a1) {
    u32 r6;
    u32 r7;
    u32 in_fr1;
    double dVar1;
    double dVar2;
    u32 in_fr5;
    bool bVar3;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    dVar1 = (double)CONCAT44(*(float *)(a0 + 8) - *(float *)(a1 + 8), in_fr1);
    noop_fr4_test(a0, a1, r6, r7, 8);
    if (cVar5 == '\0') {
        dVar1 = (double)CONCAT44((int)((u64)dVar1 >> 0x20), in_fr5);
        dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0xc), *(u32 *)(a1 + 0xc));
    } else {
        dVar2 = *(double *)(a0 + 0xc);
    }
    if (cVar4 == '\0') {
        bVar3 = (float)((u64)dVar1 >> 0x20) < (float)((u64)dVar2 >> 0x20) + SUB84(dVar2, 0);
    } else {
        bVar3 = dVar1 < dVar2 + dVar2;
    }
    return (u32)bVar3;
}

/*
 * alt_entry_233d20  0x8c233d20
 * probably an entry 12 bytes into 8c233d14: it reads registers that code sets before it
 */
u32 alt_entry_233d20(u32 a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
    double *unaff_r13;
    u32 *unaff_r14;
    u64 *puVar1;
    u32 in_fr1;
    double dVar2;
    double dVar3;
    u32 in_fr5;
    u32 uVar4;
    float fVar5;
    double in_dr12;
    u64 in_dr14;
    double dVar6;
    double in_xd2;
    double in_xd12;
    bool bVar7;
    u32 in_PR;
    u8 auStack_10[8];
    u64 uStack_8;

    uStack_8 = CONCAT44((int)((u64)in_dr14 >> 0x20), (u32)uStack_8);
    puVar1 = &uStack_8;
    uStack_8._0_4_ = SUB84(in_dr12, 0);

    *(u32 *)((int)puVar1 + -4) = in_PR;

    dVar2 = (double)CONCAT44(*(u32 *)(ain0 + (int)unaff_r13), in_fr1);
    dVar6 = (double)CONCAT44(*(u32 *)(ain0 + (int)unaff_r14), *unaff_r14);

    dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - (float)((u64)dVar2 >> 0x20), SUB84(dVar6, 0));

    dVar3 = (double)CONCAT44(*(u32 *)(unaff_r13 + 1), *(u32 *)unaff_r13);

    dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), SUB84(dVar6, 0) - SUB84(dVar3, 0));

    in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), unaff_r14[2]);
    dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), (int)((u64)dVar6 >> 0x20));

    uVar4 = SUB84(in_xd2, 0);

    fVar5 = SUB84(in_dr12, 0) - (float)((u64)dVar3 >> 0x20);

    in_xd12 = (double)CONCAT44(fVar5, SUB84(dVar2, 0));
    uVar4 = in_fr5;

    noop_fr4_test(a0, unused_a1, unused_a2, unused_a3, *(u32 *)((int)puVar1 + -4));

    in_xd12 = (double)CONCAT44((int)((u64)in_xd12 >> 0x20), uVar4);
    dVar2 = (double)CONCAT44(unaff_r14[3], *(u32 *)((int)unaff_r13 + 0xc));

    bVar7 = (float)((u64)in_xd12 >> 0x20) < (float)((u64)dVar2 >> 0x20) + SUB84(dVar2, 0);

    return (u32)bVar7;
}

/*
 * gfxlib_calc_233d6c  0x8c233d6c
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: game_init
 */
u32 gfxlib_calc_233d6c(u32 a0, u32 a1) {
    g_8c4aa510 = a0;
    g_8c4aa514 = a1;
    g_8c4aa4f0 = 0;
    g_8c4aa524 = 0xffffffff;
    g_8c4aa528 = 0;
    g_8c4aa52c = 0x437f0000;
    g_8c4aa530 = 0;
    g_8c4aa534 = 0;
    g_8c4aa538 = 0;
    return 0xc;
}

/*
 * gfxlib_calc_233d9c  0x8c233d9c
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: game_init
 */
u32 gfxlib_calc_233d9c(u32 a0) {
    u32 in_r0;

    g_8c4aa4f0 = a0;
    return in_r0;
}

/*
 * gfxlib_calc_233da2  0x8c233da2
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: game_init, game_uses_clear_3_words_0c9ee0
 */
u32 gfxlib_calc_233da2(u32 a0, u32 a1) {
    u32 *puVar1;
    u32 in_r0;

    puVar1 = 0x8c4aa528;
    g_8c4aa524 = a0;
    *puVar1 = a1;
    return in_r0;
}

/*
 * gfx_set_color4_4aa52c  0x8c233dac
 * copies four words (a colour) to 0x8c4aa52c
 * called by: CAnimal_uses_njGetMatrix_026968, CSquidLine_uses_matrix_push_0ad354,
 * Class_12ab2c_uses_get_field_1c_on_field_b0_09dec8, Class_12aeec_uses_gfx_set_color4_0a481c, Class_12b580_draw_0f7118,
 * Class_12b930_draw_0d7354, Class_12b930_draw_0d7410, Vec3_draw_0d5d28 (+6 more)
 */
u32 gfx_set_color4_4aa52c(u32 *a0) {
    g_8c4aa52c = *a0;
    g_8c4aa530 = a0[1];
    g_8c4aa534 = a0[2];
    g_8c4aa538 = a0[3];
    return 0xc;
}

/*
 * gfxlib_uses_ta_fifo_233e10  0x8c233e10
 * area name: in the gfxlib library code range; behaviour name: its main named callee is ta_fifo_2137c0
 * called by: ninja_uses_nj_seek_25af3c
 */
int gfxlib_uses_ta_fifo_233e10(u32 *a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = ta_fifo_2137c0(a0, a1, a2, a3);
    if (iVar1 == 0) {
        if ((*a0 & 0xffff) == 3) {
            iVar1 = shinobi_uses_rec4c_alloc_203a92(a0, a1, a2, a3);
        } else {
            iVar1 = shinobi_list_2038c0(a0[5], a0, a2, a3);
            a1 = a0;
        }
        if (iVar1 == 3) {
            callback_table_call(3);
        }
    }
    return iVar1;
}

/*
 * gfxlib_fill_loop_233e70  0x8c233e70
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_draw_234fd0
 */
u32 gfxlib_fill_loop_233e70(int *a0, int a1, int a2, u32 *a3) {
    float fVar1;
    short sVar2;
    short sVar3;
    u32 uVar4;
    float *pfVar5;
    u32 *puVar6;
    short *psVar7;
    u32 uVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float in_fr5;
    float in_fr4;
    float in_fr7;
    float in_fr6;
    u64 in_xd0;
    float in_xf2;
    float in_xf3;
    float in_xf4;
    float in_xf5;
    float in_xf6;
    float in_xf7;
    float in_xf8;
    float in_xf9;
    u64 in_xd10;
    float in_xf12;
    float in_xf13;
    float in_xf14;
    float in_xf15;
    bool bVar13;

    puVar6 = (u32 *)(a0[1] + a1 * 4);
    psVar7 = (short *)(a0[2] + a1 * 4);
    pfVar5 = (float *)(*a0 + a1 * 0xc);
    uVar4 = 0;
    do {
        fVar10 = *pfVar5;
        bVar13 = puVar6 == NULL;
        fVar9 = pfVar5[1];
        fVar12 = pfVar5[2];
        pfVar5 = pfVar5 + 3;
        fVar1 = in_xf3 * fVar9 + in_xf7 * fVar10 + (float)((u64)in_xd10 >> 0x20) * 1.0 + in_xf15 * fVar12;
        uVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        if (bVar13) {
            uVar8 = 0xffffffff;
        }
        fVar11 = (in_xf2 * fVar9 + in_xf6 * fVar10 + (float)in_xd10 * 1.0 + in_xf14 * fVar12) / fVar1;
        sVar2 = *psVar7;
        if (g_8c4aa4d8 < fVar1) {
            return 0xffffffff;
        }
        bVar13 = fVar1 <= g_8c4aa4d4;
        sVar3 = psVar7[1];
        psVar7 = psVar7 + 2;
        a3[5] = ((float)((u64)in_xd0 >> 0x20) * fVar9 + in_xf5 * fVar10 + in_xf9 * 1.0 + in_xf13 * fVar12) * in_fr4 *
                    fVar11 +
                in_fr6;
        a3[4] = ((float)in_xd0 * fVar9 + in_xf4 * fVar10 + in_xf8 * 1.0 + in_xf12 * fVar12) * in_fr5 * fVar11 + in_fr7;
        a3[3] = fVar11;
        a3[2] = (float)(int)sVar2 * 0.00390625;
        a3[1] = (float)(int)sVar3 * 0.00390625;
        *a3 = uVar8;
        if (bVar13) {
            uVar4 = 1;
        }
        a2 = a2 + -1;
        a3 = a3 + 6;
    } while (a2 != 0);
    return uVar4;
}

/*
 * gfxlib_fill_loop_233f1c  0x8c233f1c
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_draw_234fd0
 */
u32 gfxlib_fill_loop_233f1c(int *a0, int a1, int a2, u32 *a3) {
    float fVar1;
    u32 uVar2;
    float *pfVar3;
    u32 *puVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float in_fr5;
    float in_fr4;
    float in_fr7;
    float in_fr6;
    u32 uVar9;
    u64 in_xd0;
    float in_xf2;
    float in_xf3;
    float in_xf4;
    float in_xf5;
    float in_xf6;
    float in_xf7;
    u64 in_xd8;
    u64 in_xd10;
    float in_xf12;
    float in_xf13;
    float in_xf14;
    float in_xf15;
    bool bVar10;

    puVar4 = (u32 *)(a0[1] + a1 * 4);
    pfVar3 = (float *)(*a0 + a1 * 0xc);
    uVar2 = 0;
    do {
        fVar6 = *pfVar3;
        fVar5 = pfVar3[1];
        fVar8 = pfVar3[2];
        pfVar3 = pfVar3 + 3;
        fVar1 = in_xf3 * fVar5 + in_xf7 * fVar6 + (float)((u64)in_xd10 >> 0x20) * 1.0 + in_xf15 * fVar8;
        uVar9 = 0xffffffff;
        if (puVar4 != NULL) {
            uVar9 = *puVar4;
            puVar4 = puVar4 + 1;
        }
        fVar7 = (in_xf2 * fVar5 + in_xf6 * fVar6 + (float)in_xd10 * 1.0 + in_xf14 * fVar8) / fVar1;
        if (g_8c4aa4d8 < fVar1) {
            return 0xffffffff;
        }
        bVar10 = fVar1 <= g_8c4aa4d4;
        a3[3] = ((float)((u64)in_xd0 >> 0x20) * fVar5 + in_xf5 * fVar6 + (float)((u64)in_xd8 >> 0x20) * 1.0 +
                 in_xf13 * fVar8) *
                    in_fr4 * fVar7 +
                in_fr6;
        a3[2] =
            ((float)in_xd0 * fVar5 + in_xf4 * fVar6 + (float)in_xd8 * 1.0 + in_xf12 * fVar8) * in_fr5 * fVar7 + in_fr7;
        a3[1] = fVar7;
        *a3 = uVar9;
        if (bVar10) {
            uVar2 = 1;
        }
        a2 = a2 + -1;
        a3 = a3 + 4;
    } while (a2 != 0);
    return uVar2;
}

/*
 * gfxlib_uses_ta_fifo_233f98  0x8c233f98
 * area name: in the gfxlib library code range; behaviour name: its main named callee is ta_fifo_20f640
 * called by: game_init
 */
u32 gfxlib_uses_ta_fifo_233f98(int a0, u32 a1, u32 a2) {
    u32 ar6_00;
    u32 ar7_00;

    g_8c4aa390 = 0xffbfbfbf;
    g_8c4aa394 = 0x41000000;
    if (a0 == 0) {
        pvr_uses_ta_fifo_20c90c(0x8c4aa398, 0x80, 0x80, 0x300);
        ar7_00 = 0;
        ar6_00 = 0;
        kamui_uses_vram64_20cb5a(0x8c4aa398, &g_8c273be8, 0, 0);
    } else {
        pvr_uses_ta_fifo_20c90c(0x8c4aa398, a1, a1, a2);
        ar7_00 = 0;
        ar6_00 = 0;
        kamui_uses_vram64_20cb5a(0x8c4aa398, a0, 0, 0);
    }
    g_8c4aaa3c = 0xf00608;
    g_8c4aaa40 = 2;
    g_8c4aaa44 = 2;
    g_8c4aaa48 = 0;
    g_8c4aaa5c = 2;
    g_8c4aaaa8 = 0x8c4aa398;
    g_8c4aaa7c = 0;
    g_8c4aaa80 = 1;
    g_8c4aaa4c = 1;
    ta_fifo_20f640(&g_8c4aaa3c, 0, ar6_00, ar7_00);
    g_8c4aa3c8 = g_8c4aaacc;
    g_8c4aa3cc = g_8c4aaad0;
    g_8c4aa3c4 = g_8c4aaad4;
    g_8c4aa3c0 = g_8c4aaad8;
    return 0x9c;
}

/*
 * gfxlib_calc_23403e  0x8c23403e
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: game_shutdown_a
 */
u32 gfxlib_calc_23403e(void) {
    u32 uVar1;

    uVar1 = (g_8c20cf88)(0x8c4aa398);
    return uVar1;
}

/*
 * gfxlib_float_calc_2340a0  0x8c2340a0
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 * called by: gfxlib_calls_float_calc_2345c8, gfxlib_calls_float_calc_2346ce, gfxlib_uses_libgcc_divide_helper_234348,
 * gfxlib_uses_log_message_2341d6, gfxlib_uses_sprintf_234834
 */
u32 *gfxlib_float_calc_2340a0(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;
    u32 uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    fVar3 = (float)(int)(short)((u16)a2 & 0xf) * 0.0625 + 0.0009765625;
    fVar4 = (float)(int)(short)((u16)a2 >> 4 & 0xf) * 0.0625 + 0.0009765625;
    uVar1 = (u32)(fVar3 + 0.061523438) & 0xffff0000;
    g_8c4aa3d0 = (float *)((int)g_8c4aa3d0 + 0x1c);
    uVar2 = (u32)fVar4 >> 0x10;
    fVar6 = (float)(int)(short)a0;
    *g_8c4aa3d0 = fVar6 + g_8c4aa394;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = 9.0;
    fVar5 = (float)(int)(short)a1;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = fVar5;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = fVar6 + g_8c4aa394;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = 9.0;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = fVar5;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = fVar6;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = -1.5845633e+29;
    g_8c4aa3d0 = g_8c4aa3d0 + 0xf;
    *g_8c4aa3d0 = (float)((u32)(fVar4 + 0.061523438) >> 0x10 | uVar1);
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = (float)(uVar1 | uVar2);
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = (float)((u32)fVar3 & 0xffff0000 | uVar2);
    g_8c4aa3d0 = g_8c4aa3d0 + -2;
    *g_8c4aa3d0 = fVar5 + g_8c4aa394;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = fVar6;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = 9.0;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = fVar5 + g_8c4aa394;
    g_8c4aa3d0 = g_8c4aa3d0 + 8;
    return &g_8c234300;
}

/*
 * gfxlib_uses_log_message_2341d6  0x8c2341d6
 * area name: in the gfxlib library code range; behaviour name: its main named callee is log_message
 * called by: gfxlib_uses_log_message_234a1c
 */
u32 gfxlib_uses_log_message_2341d6(u32 a0, char *a1) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    short sVar4;
    float fVar5;
    float fVar6;
    int a4;
    int a5;
    double dVar7;

    g_8c277b10 = 0xfffffffe;
    g_8c4aa3d4 = *(u32 *)(g_8c4aabdc + 8);
    g_8c4aa3dc = g_8c4aa3d4 & 0xfc000000;
    g_8c4aa3d8 = g_8c4aa3d4 >> 0x18 & 0x1c;
    g_8c4aa3d0 = (u32 *)((g_8c4aa3d4 & 0x3ffffff | 0xe0000000) + 0x10);
    _DAT_ff000038 = g_8c4aa3d8;
    _DAT_ff00003c = g_8c4aa3d8;
    *g_8c4aa3d0 = g_8c4aa390;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c0;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c4;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3cc;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c8;
    g_8c4aa3d0 = g_8c4aa3d0 + 8;

    dVar7 = (double)CONCAT44(g_8c4aa394, (float)(int)(short)((u32)a0 >> 0x10));

    fVar6 = (float)((u64)dVar7 >> 0x20);
    fVar5 = SUB84(dVar7, 0) * fVar6;
    dVar7 = (double)CONCAT44(fVar6, fVar5);
    a4 = (int)fVar5;

    fVar5 = (float)((u64)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar5, (float)(int)(short)a0);

    fVar6 = (float)(int)(short)a0 * fVar5;
    dVar7 = (double)CONCAT44(fVar5, fVar6);
    a5 = (int)fVar6;

    uVar2 = log_message(a1, &g_8c4aa3d8, &g_8c4aa3d4);
    sVar4 = 0;
    if (0 < (short)uVar2) {
        do {
            fVar5 = SUB84(dVar7, 0);
            cVar1 = *a1;
            a1 = a1 + 1;
            gfxlib_float_calc_2340a0(a4, a5, (int)cVar1);

            fVar5 = g_8c4aa394;

            sVar4 = sVar4 + 1;

            fVar6 = (float)(int)(short)a4 + fVar5;
            dVar7 = (double)CONCAT44(fVar6, fVar5);
            a4 = (int)fVar6;

        } while (sVar4 < (short)uVar2);
    }
    uVar3 = (u32)g_8c4aa3d0 & 0x3ffffff | g_8c4aa3dc;
    *(u32 *)(g_8c4aabdc + 8) = uVar3;
    return uVar3;
}

/*
 * gfxlib_uses_libgcc_divide_helper_234348  0x8c234348
 * area name: in the gfxlib library code range; behaviour name: its main named callee is libgcc_divide_helper_010468
 */
u32 gfxlib_uses_libgcc_divide_helper_234348(u32 a0, int a1, int a2) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    short sVar7;
    int a4;
    double dVar6;

    g_8c277b10 = 0xfffffffe;
    g_8c4aa3d4 = *(u32 *)(g_8c4aabdc + 8);
    g_8c4aa3dc = g_8c4aa3d4 & 0xfc000000;
    g_8c4aa3d8 = g_8c4aa3d4 >> 0x18 & 0x1c;
    g_8c4aa3d0 = (u32 *)((g_8c4aa3d4 & 0x3ffffff | 0xe0000000) + 0x10);
    _DAT_ff000038 = g_8c4aa3d8;
    _DAT_ff00003c = g_8c4aa3d8;
    *g_8c4aa3d0 = g_8c4aa390;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c0;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c4;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3cc;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c8;
    g_8c4aa3d0 = g_8c4aa3d0 + 8;

    dVar6 = (double)CONCAT44(g_8c4aa394, (float)(int)(short)((u32)a0 >> 0x10));

    fVar5 = (float)((u64)dVar6 >> 0x20);
    fVar4 = SUB84(dVar6, 0) * fVar5;
    dVar6 = (double)CONCAT44(fVar5, fVar4);
    a4 = (int)fVar4;

    fVar4 = (float)((u64)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(fVar4, (float)(int)(short)a0);

    fVar5 = (float)(int)(short)a0 * fVar4;
    dVar6 = (double)CONCAT44(fVar4, fVar5);
    sVar7 = (short)(int)fVar5;

    fVar4 = SUB84(dVar6, 0);
    if (a1 < 0) {
        gfxlib_float_calc_2340a0(a4, (int)sVar7, 0x2d);
        a1 = -a1;

        fVar4 = g_8c4aa394;

        fVar5 = (float)(int)(short)a4 + fVar4;
        dVar6 = (double)CONCAT44(fVar5, fVar4);
        a4 = (int)fVar5;
    }
    do {
        if (a2 < 1) {
            uVar2 = (u32)g_8c4aa3d0 & 0x3ffffff | g_8c4aa3dc;
            *(u32 *)(g_8c4aabdc + 8) = uVar2;
            return uVar2;
        }
        fVar4 = SUB84(dVar6, 0);
        if (a2 == 1) {
            iVar1 = libgcc_divide_helper_010614(a1, 10);
        } else if (a2 == 2) {
            iVar1 = libgcc_divide_helper_010468(a1, 10);
            a1 = a1 + iVar1 * -10;
        } else {
            if (a2 == 3) {
                iVar1 = libgcc_divide_helper_010468(a1, 100);
                iVar3 = 100;
            LAB_8c234536:
                iVar3 = iVar1 * iVar3;
            } else {
                if (a2 == 4) {
                    iVar1 = libgcc_divide_helper_010468(a1, 1000);
                    iVar3 = 1000;
                LAB_8c23454a:
                    iVar3 = iVar1 * iVar3;
                LAB_8c23454c:
                    a1 = a1 - iVar3;
                    goto LAB_8c234550;
                }
                if (a2 == 5) {
                    iVar1 = libgcc_divide_helper_010468(a1, 10000);
                    iVar3 = 10000;
                    goto LAB_8c234536;
                }
                if (a2 == 6) {
                    iVar1 = libgcc_divide_helper_010468(a1, 100000);
                    iVar3 = 100000;
                    goto LAB_8c23454a;
                }
                if (a2 != 7) {
                    if (a2 != 8) {
                        if (a2 == 9) {
                            iVar1 = libgcc_divide_helper_010468(a1, 100000000);
                            iVar3 = 100000000;
                            goto LAB_8c234536;
                        }
                        iVar1 = libgcc_divide_helper_010468(a1, 1000000000);
                        iVar3 = 1000000000;
                        goto LAB_8c23454a;
                    }
                    iVar1 = libgcc_divide_helper_010468(a1, 10000000);
                    iVar3 = iVar1 * 10000000;
                    goto LAB_8c23454c;
                }
                iVar1 = libgcc_divide_helper_010468(a1, 1000000);
                iVar3 = iVar1 * 1000000;
            }
            a1 = a1 - iVar3;
        }
    LAB_8c234550:
        if (9 < iVar1) {
            iVar1 = 0;
        }
        gfxlib_float_calc_2340a0(a4, (int)sVar7, iVar1 + 0x30);
        a2 = a2 + -1;

        fVar4 = g_8c4aa394;

        fVar5 = (float)(int)(short)a4 + fVar4;
        dVar6 = (double)CONCAT44(fVar5, fVar4);
        a4 = (int)fVar5;

    } while (true);
}

/*
 * gfxlib_calls_float_calc_2345c8  0x8c2345c8
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: float_calc
 */
u32 gfxlib_calls_float_calc_2345c8(u32 a0, u32 a1, int a2) {
    u32 uVar1;
    u8 *a7;
    float fVar2;
    float fVar3;
    int a4;
    int a5;
    double dVar4;

    a7 = &g_8c4aa3d4;
    g_8c277b10 = 0xfffffffe;
    g_8c4aa3d4 = *(u32 *)(g_8c4aabdc + 8);
    g_8c4aa3dc = g_8c4aa3d4 & 0xfc000000;
    g_8c4aa3d8 = g_8c4aa3d4 >> 0x18 & 0x1c;
    g_8c4aa3d0 = (u32 *)((g_8c4aa3d4 & 0x3ffffff | 0xe0000000) + 0x10);
    _DAT_ff000038 = g_8c4aa3d8;
    _DAT_ff00003c = g_8c4aa3d8;
    *g_8c4aa3d0 = g_8c4aa390;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c0;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c4;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3cc;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c8;
    g_8c4aa3d0 = g_8c4aa3d0 + 8;

    dVar4 = (double)CONCAT44(g_8c4aa394, (float)(int)(short)((u32)a0 >> 0x10));

    fVar3 = (float)((u64)dVar4 >> 0x20);
    fVar2 = SUB84(dVar4, 0) * fVar3;
    dVar4 = (double)CONCAT44(fVar3, fVar2);
    a4 = (int)fVar2;

    fVar2 = (float)((u64)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar2, (float)(int)(short)a0);

    fVar3 = (float)(int)(short)a0 * fVar2;
    dVar4 = (double)CONCAT44(fVar2, fVar3);
    a5 = (int)fVar3;

    while (a2 = a2 + -1, -1 < a2) {
        fVar2 = SUB84(dVar4, 0);
        uVar1 = -a2;
        if ((int)uVar1 < 0) {
            uVar1 = a1 >> (~uVar1 & 0x1f) + 1;
        } else {
            uVar1 = a1 << (uVar1 & 0x1f);
        }
        gfxlib_float_calc_2340a0(a4, a5, (uVar1 & 1) + 0x30);

        fVar2 = g_8c4aa394;

        fVar3 = (float)(int)(short)a4 + fVar2;
        dVar4 = (double)CONCAT44(fVar3, fVar2);
        a4 = (int)fVar3;
    }
    uVar1 = (u32)g_8c4aa3d0 & 0x3ffffff | g_8c4aa3dc;
    *(u32 *)(g_8c4aabdc + 8) = uVar1;
    return uVar1;
}

/*
 * gfxlib_calls_float_calc_2346ce  0x8c2346ce
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: float_calc
 */
u32 gfxlib_calls_float_calc_2346ce(u32 a0, u32 a1, int a2) {
    u32 uVar1;
    u8 *a7;
    int iVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    short sVar7;
    int a4;
    double dVar6;

    a7 = &g_8c4aa3d4;
    g_8c277b10 = 0xfffffffe;
    g_8c4aa3d4 = *(u32 *)(g_8c4aabdc + 8);
    g_8c4aa3dc = g_8c4aa3d4 & 0xfc000000;
    g_8c4aa3d8 = g_8c4aa3d4 >> 0x18 & 0x1c;
    g_8c4aa3d0 = (u32 *)((g_8c4aa3d4 & 0x3ffffff | 0xe0000000) + 0x10);
    _DAT_ff000038 = g_8c4aa3d8;
    _DAT_ff00003c = g_8c4aa3d8;
    *g_8c4aa3d0 = g_8c4aa390;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c0;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c4;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3cc;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c8;
    g_8c4aa3d0 = g_8c4aa3d0 + 8;

    dVar6 = (double)CONCAT44(g_8c4aa394, (float)(int)(short)((u32)a0 >> 0x10));

    iVar2 = a2 + -1;
    iVar3 = iVar2 * 4;

    fVar5 = (float)((u64)dVar6 >> 0x20);
    fVar4 = SUB84(dVar6, 0) * fVar5;
    dVar6 = (double)CONCAT44(fVar5, fVar4);
    a4 = (int)fVar4;

    fVar4 = (float)((u64)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(fVar4, (float)(int)(short)a0);

    fVar5 = (float)(int)(short)a0 * fVar4;
    dVar6 = (double)CONCAT44(fVar4, fVar5);
    sVar7 = (short)(int)fVar5;

    while (-1 < iVar2) {
        fVar4 = SUB84(dVar6, 0);
        uVar1 = -iVar3;
        if ((int)uVar1 < 0) {
            uVar1 = a1 >> (~uVar1 & 0x1f) + 1;
        } else {
            uVar1 = a1 << (uVar1 & 0x1f);
        }
        gfxlib_float_calc_2340a0(a4, (int)sVar7, (int)(char)(&g_8c277a90)[uVar1 & 0xf]);

        fVar4 = g_8c4aa394;

        iVar2 = iVar2 + -1;

        fVar5 = (float)(int)(short)a4 + fVar4;
        dVar6 = (double)CONCAT44(fVar5, fVar4);
        a4 = (int)fVar5;

        iVar3 = iVar3 + -4;
    }
    uVar1 = (u32)g_8c4aa3d0 & 0x3ffffff | g_8c4aa3dc;
    *(u32 *)(g_8c4aabdc + 8) = uVar1;
    return uVar1;
}

/*
 * gfxlib_uses_sprintf_234834  0x8c234834
 * area name: in the gfxlib library code range; behaviour name: its main named callee is sprintf
 * strings: "%0.*f"
 */
u32 gfxlib_uses_sprintf_234834(u32 a0, u32 a1) {
    u32 r7;
    char cVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u8 *puVar5;
    u8 *puVar6;
    int iVar7;
    int iVar8;
    u8 *ar4_00;
    char *pcVar9;
    u64 *puVar10;
    u8 *puVar11;
    u64 in_dr0;
    u32 uVar12;
    float fVar13;
    float fVar15;
    u32 in_fr4;
    double in_dr14;
    bool bVar16;
    u32 in_PR;
    int a4;
    u8 *a5;
    int aiStack_50[11];
    u64 uStack_24;
    double dVar14;

    uVar12 = (u32)((u64)in_dr0 >> 0x20);

    puVar10 = (u64 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44(SUB84(in_dr14, 0), (u32)uStack_24);

    *(u32 *)((int)puVar10 + -4) = in_PR;
    puVar6 = &g_8c4aa3d4;
    *(u32 *)((int)puVar10 + -0x1c) = a1;
    g_8c277b10 = 0xfffffffe;
    g_8c4aa3d4 = *(u32 *)(g_8c4aabdc + 8);
    g_8c4aa3dc = g_8c4aa3d4 & 0xfc000000;
    puVar5 = &g_8c4aa3d8;
    g_8c4aa3d8 = g_8c4aa3d4 >> 0x18 & 0x1c;

    in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), in_fr4);

    g_8c4aa3d0 = (u32 *)((g_8c4aa3d4 & 0x3ffffff | 0xe0000000) + 0x10);
    _DAT_ff000038 = g_8c4aa3d8;
    _DAT_ff00003c = g_8c4aa3d8;
    *g_8c4aa3d0 = g_8c4aa390;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c0;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c4;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3cc;
    g_8c4aa3d0 = g_8c4aa3d0 + -1;
    *g_8c4aa3d0 = g_8c4aa3c8;
    g_8c4aa3d0 = g_8c4aa3d0 + 8;

    dVar14 = (double)CONCAT44(g_8c4aa394, (float)(int)(short)((u32)a0 >> 0x10));

    fVar15 = (float)((u64)dVar14 >> 0x20);
    fVar13 = SUB84(dVar14, 0) * fVar15;
    dVar14 = (double)CONCAT44(fVar15, fVar13);
    a4 = (int)fVar13;

    fVar13 = (float)((u64)dVar14 >> 0x20);
    dVar14 = (double)CONCAT44(fVar13, (float)(int)(short)a0);

    fVar13 = (float)(int)(short)a0 * fVar13;

    dVar14 = (double)(u64)(u32)fVar13;

    bVar16 = SUB84(in_dr14, 0) < 0.0;
    a5 = (u8 *)(int)fVar13;

    if (bVar16) {
        puVar6 = (u8 *)0x2d;
        puVar5 = a5;
        gfxlib_float_calc_2340a0(a4, a5, 0x2d);
        fVar13 = fRam8c4aa398;

        fVar13 = g_8c4aa394;

        dVar14 = (double)CONCAT44(fVar13, 0xbf800000);

        in_dr14 = (double)(u64)(u32)(SUB84(in_dr14, 0) * -1.0);

        a4 = (int)((float)(int)(short)a4 + fVar13);
    }
    ar4_00 = (u8 *)((int)puVar10 + -0x18);

    puVar11 = (u8 *)((int)puVar10 + -0x20);
    *(int *)((int)puVar10 + -0x20) = SUB84(in_dr14, 0);

    *(u32 *)(puVar11 + -4) = 5;
    *(char **)(puVar11 + -8) = "%0.*f";
    sprintf(ar4_00, puVar5, puVar6, r7, *(u32 *)(puVar11 + -8));
    iVar2 = log_message(ar4_00, puVar5, puVar6);
    iVar4 = 0;
    if (0 < iVar2) {
        do {
            if (ar4_00[iVar4] == '.')
                break;
            iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
    }
    iVar4 = *(int *)(puVar11 + 4) - iVar4;
    iVar8 = iVar2 + iVar4;
    puVar5 = ar4_00 + iVar8 + 1;
    for (iVar7 = iVar8; iVar4 <= iVar7; iVar7 = iVar7 + -1) {
        puVar6 = ar4_00 + iVar2;
        iVar2 = iVar2 + -1;
        puVar5 = puVar5 + -1;
        *puVar5 = *puVar6;
    }
    iVar2 = 0;
    *(u8 **)(puVar11 + 4) = ar4_00;
    if (0 < iVar4) {
        puVar5 = (u8 *)0x30;
        do {
            iVar2 = iVar2 + 1;
            *ar4_00 = 0x30;
            ar4_00 = ar4_00 + 1;
        } while (iVar2 < iVar4);
    }
    iVar2 = 0;
    pcVar9 = *(char **)(puVar11 + 4);
    if (0 < iVar8) {
        do {
            fVar13 = SUB84(dVar14, 0);
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            gfxlib_float_calc_2340a0(a4, a5, (int)cVar1);

            fVar13 = g_8c4aa394;

            iVar2 = iVar2 + 1;

            fVar15 = (float)(int)(short)a4 + fVar13;
            dVar14 = (double)CONCAT44(fVar15, fVar13);
            a4 = (int)fVar15;

        } while (iVar2 < iVar8);
    }
    uVar3 = (u32)g_8c4aa3d0 & 0x3ffffff | g_8c4aa3dc;
    *(u32 *)(g_8c4aabdc + 8) = uVar3;
    return uVar3;
}

/*
 * gfxlib_uses_log_message_234a1c  0x8c234a1c
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: uses_log_message
 */
u32 gfxlib_uses_log_message_234a1c(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 s0, u32 s4) {
    int iVar1;
    u32 uVar2;
    int ar6_00;
    u32 uStack_4;

    iVar1 = (int)(int)0xffffff7c;
    *(u32 *)((int)&uStack_4 + iVar1) = a0;
    if (((int)&s0 + 0x88 + iVar1 & 3U) == 0) {
        ar6_00 = (int)&s0 + 0x88 + iVar1;
    } else {
        ar6_00 = (int)&s4 + 0x88 + iVar1;
    }
    (*(code *)(&vsprintf_like))((int)&s0 + iVar1, *(u32 *)((int)&uStack_4 + 0x88 + iVar1), ar6_00, a3);
    uVar2 = gfxlib_uses_log_message_2341d6(*(u32 *)((int)&uStack_4 + iVar1), (int)&s0 + iVar1);
    return uVar2;
}

/*
 * line_closest_point  0x8c234a68
 * *a2 = the point on line a1 (origin, direction) closest to a0
 * called by: Class_129938_vec_017900, game_vec_0185a4
 */
u32 line_closest_point(float *a0, float *a1, float *a2) {
    u32 r7;
    u32 uVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    fVar4 = a1[3];
    fVar2 = a1[4];
    fVar3 = a1[5];
    if (a2 != NULL) {
        fVar2 = -(fVar3 * a0[2] + fVar4 * *a0 + fVar2 * a0[1] + ((-(fVar4 * *a1) - fVar2 * a1[1]) - fVar3 * a1[2])) /
                (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
        *a2 = fVar2 * a1[3] + *a0;
        a2[1] = fVar2 * a1[4] + a0[1];
        a2[2] = fVar2 * a1[5] + a0[2];
    }
    uVar1 = ninja_float_calc_258048(a0, a1, a2, r7, 8);
    return uVar1;
}

/*
 * gfxlib_calls_float_calc_234a6a  0x8c234a6a
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: float_calc
 */
u32 gfxlib_calls_float_calc_234a6a(double *a0, double *a1, double *a2, u32 unused_a3, int ain0) {
    u32 uVar1;
    u64 *puVar2;
    float fVar3;
    double in_dr0;
    double dVar4;
    u64 uVar5;
    float fVar6;
    float fVar7;
    double dVar8;
    double dVar9;
    u64 uVar10;
    u32 in_fr5;
    float fVar11;
    u32 in_fr7;
    double dVar12;
    float fVar14;
    double in_dr14;
    double in_xd2;
    double dVar15;
    double in_xd4;
    u64 in_xd6;
    double in_xd14;
    u32 in_PR;
    u8 auStack_10[8];
    u64 uStack_8;
    u32 uVar13;

    uVar1 = (u32)((u64)in_dr14 >> 0x20);

    uStack_8 = (double)CONCAT44(SUB84(in_dr14, 0), (u32)uStack_8);
    puVar2 = &uStack_8;
    uStack_8._0_4_ = uVar1;

    *(u32 *)((int)puVar2 + -4) = in_PR;

    uVar13 = *(u32 *)(ain0 + (int)a1);
    in_fr5 = *(u32 *)(a1 + 2);
    dVar12 = (double)CONCAT44(uVar13, *(u32 *)a1);
    dVar9 = (double)CONCAT44(uVar13, in_fr7);

    dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) * SUB84(dVar12, 0), SUB84(dVar12, 0));

    dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), *(u32 *)((int)a1 + 4));
    in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr5);

    fVar3 = SUB84(in_dr0, 0) * SUB84(dVar12, 0);

    dVar9 = (double)CONCAT44(uVar13, *(u32 *)((int)a1 + 0x14));

    dVar12 = (double)CONCAT44(-(float)((u64)dVar12 >> 0x20), SUB84(dVar12, 0));

    dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), *(u32 *)(a1 + 1));
    dVar4 = (double)CONCAT44(*(u32 *)((int)a0 + 4), fVar3);

    dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) - SUB84(dVar4, 0), SUB84(dVar12, 0));

    fVar3 = SUB84(dVar9, 0);

    dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), fVar3);

    dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), SUB84(dVar4, 0) * SUB84(dVar12, 0));

    dVar15 = in_xd4;

    dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), in_fr5);
    dVar15 = in_xd2;

    dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), SUB84(dVar12, 0) * (float)((u64)dVar4 >> 0x20));

    fVar7 = (float)((u64)dVar9 >> 0x20);

    dVar8 = (double)CONCAT44(*(u32 *)a0, SUB84(dVar12, 0));
    dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), in_fr5);
    dVar4 = (double)CONCAT44(fVar7, SUB84(dVar4, 0));

    dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) - SUB84(dVar4, 0), SUB84(dVar12, 0));
    fVar14 = (float)((u64)dVar8 >> 0x20);
    dVar8 = (double)CONCAT44(fVar14, (float)((u64)dVar4 >> 0x20) * fVar14 + SUB84(dVar8, 0));

    dVar4 = (double)(u64) * (u32 *)(a0 + 1);

    uVar5 = in_xd6;

    uVar5 = CONCAT44(fVar3, SUB84(dVar4, 0));

    dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), (float)((u64)uVar5 >> 0x20) * (float)uVar5 + SUB84(dVar8, 0));

    dVar4 = dVar15;

    dVar9 = (double)((u64)(u32)fVar7 << 0x20);
    in_dr14 = (double)CONCAT44(uVar1, SUB84(dVar8, 0));
    dVar4 = in_xd14;

    fVar14 = SUB84(in_dr14, 0) + (float)((u64)dVar12 >> 0x20);

    fVar11 = SUB84(dVar12, 0);

    dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), fVar11);
    in_xd4 = dVar15;

    fVar7 = (float)((u64)dVar9 >> 0x20) * fVar7 + SUB84(dVar8, 0) * fVar11;

    fVar6 = fVar3;

    fVar7 = fVar6 * fVar3 + fVar7;

    dVar9 = in_xd4;

    dVar9 = (double)CONCAT44(fVar7, fVar14);

    if (a2 != NULL) {

        fVar7 = SUB84(dVar9, 0);
        dVar4 = in_xd4;

        dVar12 = dVar4;

        dVar12 = (double)CONCAT44(-fVar7, fVar11);

        fVar3 = (float)((u64)dVar12 >> 0x20) / (float)((u64)dVar9 >> 0x20);

        dVar9 = (double)CONCAT44(*(u32 *)a0, *(u32 *)((int)a1 + 0xc));

        dVar9 = (double)CONCAT44(fVar3 * SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20), SUB84(dVar9, 0));

        *(int *)a2 = (int)((u64)dVar9 >> 0x20);
        dVar9 = (double)CONCAT44(*(u32 *)(a1 + 2), *(u32 *)((int)a0 + 4));

        dVar9 = (double)(u64)(u32)(fVar3 * (float)((u64)dVar9 >> 0x20) + SUB84(dVar9, 0));

        *(int *)((int)a2 + 4) = SUB84(dVar9, 0);
        uVar10 = CONCAT44(*(u32 *)((int)a1 + 0x14), *(u32 *)(a0 + 1));

        uVar10 = (u64)(u32)(fVar3 * (float)(uVar10 >> 0x20) + (float)uVar10);

        *(int *)(a2 + 1) = (int)uVar10;
    }
    uVar1 = ninja_float_calc_258048(a0, a1, a2, unused_a3, *(u32 *)((int)puVar2 + -4));
    return uVar1;
}

/*
 * gfxlib_draw_234b10  0x8c234b10
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_234b10(u32 *a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    iVar2 = a1;
    if (a2 == 0) {
        draw_state_save(a0, a1, 0, a3);
        uVar3 = 0x80002;
        ta_fifo_237124(0x80002, a1, a2, a3);
        iVar1 = ta_sq_write_header4_short();
    } else {
        draw_state_save(a0, a1, a2, a3);
        uVar3 = 0x2100002;
        ta_fifo_237124(0x2100002, a1, a2, a3);
        iVar1 = ta_sq_write_header5_short();
    }
    iVar1 = iVar1 + 0x1c;
    while (true) {
        uVar3 = *a0;
        ar5_00 = a0[1];
        ar6_00 = a0[2];
        ar7_00 = a0[3];
        a0 = a0 + 4;
        iVar2 = iVar2 + -1;
        if (iVar2 == 0)
            break;
        *(u32 *)(iVar1 + -4) = ar7_00;
        *(u32 *)(iVar1 + -0x10) = ar6_00;
        *(u32 *)(iVar1 + -0x14) = ar5_00;
        *(u32 *)(iVar1 + -0x18) = uVar3;
        *(u32 *)(iVar1 + -0x1c) = 0xe0000000;
        iVar1 = iVar1 + 0x20;
    }
    *(u32 *)(iVar1 + -4) = ar7_00;
    *(u32 *)(iVar1 + -0x10) = ar6_00;
    *(u32 *)(iVar1 + -0x14) = ar5_00;
    *(u32 *)(iVar1 + -0x18) = uVar3;
    *(u32 *)(iVar1 + -0x1c) = 0xf0000000;
    iVar1 = iVar1 + 4;
    ta_set_list_addr(iVar1);
    uVar3 = draw_state_restore(iVar1);
    return uVar3;
}

/*
 * gfxlib_draw_234bc0  0x8c234bc0
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: draw_debug_quad
 */
u32 gfxlib_draw_234bc0(u32 *a0, int a1, u32 a2, int a3) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 uVar4;

    if (a3 == 0) {
        iVar1 = a1;
        uVar3 = a2;
        draw_state_save(a0, a1, a2, 0);
        ta_fifo_237124(0x8000a, iVar1, a2, a3);
        ta_select_texture_cached(uVar3);
        iVar1 = ta_sq_write_header4();
    } else {
        iVar1 = a1;
        uVar3 = a2;
        draw_state_save(a0, a1, a2, a3);
        ta_fifo_237124(0x210000a, iVar1, a2, a3);
        ta_select_texture_cached(uVar3);
        iVar1 = ta_sq_write_header5();
    }
    iVar1 = iVar1 + 0x1c;
    while (true) {
        uVar3 = *a0;
        ar5_00 = a0[1];
        ar6_00 = a0[2];
        ar7_00 = a0[3];
        uVar4 = a0[4];
        puVar2 = a0 + 5;
        a0 = a0 + 6;
        a1 = a1 + -1;
        if (a1 == 0)
            break;
        *(u32 *)(iVar1 + -4) = *puVar2;
        *(u32 *)(iVar1 + -8) = uVar4;
        *(u32 *)(iVar1 + -0xc) = ar7_00;
        *(u32 *)(iVar1 + -0x10) = ar6_00;
        *(u32 *)(iVar1 + -0x14) = ar5_00;
        *(u32 *)(iVar1 + -0x18) = uVar3;
        *(u32 *)(iVar1 + -0x1c) = 0xe0000000;
        iVar1 = iVar1 + 0x20;
    }
    *(u32 *)(iVar1 + -4) = *puVar2;
    *(u32 *)(iVar1 + -8) = uVar4;
    *(u32 *)(iVar1 + -0xc) = ar7_00;
    *(u32 *)(iVar1 + -0x10) = ar6_00;
    *(u32 *)(iVar1 + -0x14) = ar5_00;
    *(u32 *)(iVar1 + -0x18) = uVar3;
    *(u32 *)(iVar1 + -0x1c) = 0xf0000000;
    iVar1 = iVar1 + 4;
    ta_set_list_addr(iVar1);
    uVar3 = draw_state_restore(iVar1);
    return uVar3;
}

/*
 * gfxlib_draw_234c94  0x8c234c94
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_234c94(u32 *a0, int a1, u32 a2, int a3) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 uVar4;

    if (a3 == 0) {
        iVar1 = a1;
        uVar3 = a2;
        draw_state_save(a0, a1, a2, 0);
        ta_fifo_237124(0x8000a, iVar1, a2, a3);
        ta_calc_23732a(uVar3);
        iVar1 = ta_sq_write_header4();
    } else {
        iVar1 = a1;
        uVar3 = a2;
        draw_state_save(a0, a1, a2, a3);
        ta_fifo_237124(0x210000a, iVar1, a2, a3);
        ta_calc_23732a(uVar3);
        iVar1 = ta_sq_write_header5();
    }
    iVar1 = iVar1 + 0x1c;
    while (true) {
        uVar3 = *a0;
        ar5_00 = a0[1];
        ar6_00 = a0[2];
        ar7_00 = a0[3];
        uVar4 = a0[4];
        puVar2 = a0 + 5;
        a0 = a0 + 6;
        a1 = a1 + -1;
        if (a1 == 0)
            break;
        *(u32 *)(iVar1 + -4) = *puVar2;
        *(u32 *)(iVar1 + -8) = uVar4;
        *(u32 *)(iVar1 + -0xc) = ar7_00;
        *(u32 *)(iVar1 + -0x10) = ar6_00;
        *(u32 *)(iVar1 + -0x14) = ar5_00;
        *(u32 *)(iVar1 + -0x18) = uVar3;
        *(u32 *)(iVar1 + -0x1c) = 0xe0000000;
        iVar1 = iVar1 + 0x20;
    }
    *(u32 *)(iVar1 + -4) = *puVar2;
    *(u32 *)(iVar1 + -8) = uVar4;
    *(u32 *)(iVar1 + -0xc) = ar7_00;
    *(u32 *)(iVar1 + -0x10) = ar6_00;
    *(u32 *)(iVar1 + -0x14) = ar5_00;
    *(u32 *)(iVar1 + -0x18) = uVar3;
    *(u32 *)(iVar1 + -0x1c) = 0xf0000000;
    iVar1 = iVar1 + 4;
    ta_set_list_addr(iVar1);
    uVar3 = draw_state_restore(iVar1);
    return uVar3;
}

/*
 * gfxlib_draw_234d68  0x8c234d68
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: draw_line_ray, game_draw_015098, ninja_uses_ta_fifo_2536a8, static_init_27def0
 * decompiler: Heritage AFTER dead removal. Example location: s0xffffff98 : 0x8c234e76
 */
u32 gfxlib_draw_234d68(u32 a0, int a1, u8 *a2, u8 *a3) {
    u8 *ar4_00;
    int iVar1;
    u8 *a7;
    int iVar2;
    u32 uVar3;
    u32 a5;
    u8 *a6;
    u8 *puVar4;
    code *pcVar5;
    u8 *puVar6;
    code *pcVar7;
    u64 in_dr12;
    u64 in_dr14;
    u32 uStack_80;
    int iStack_7c;
    int iStack_70;
    int aiStack_68[2];
    u8 auStack_60[52];
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    uStack_20 = (u32)in_dr14;
    uStack_24 = (u32)((u64)in_dr14 >> 0x20);
    uStack_28 = (u32)in_dr12;
    uStack_2c = (u32)((u64)in_dr12 >> 0x20);
    a5 = a1;
    a6 = a2;
    draw_state_save(&g_8c4aa4a8, a1, a2, a3);
    if (((u32)a2 & 0x80000000) == 0) {
        if (((u32)a2 & 0x40) == 0) {
            uVar3 = 0x80002;
            ta_fifo_237124(0x80002, a5, a6, a3);
            ar4_00 = (u8 *)ta_sq_write_header4_short();
        } else {
            uVar3 = 0x2100002;
            ta_fifo_237124(0x2100002, a5, a6, a3);
            ar4_00 = (u8 *)ta_sq_write_header5_short();
        }
        pcVar7 = gfxlib_fill_loop_233f1c;
        iVar2 = 0x10;
        pcVar5 = ninja_calls_float_calc_25c3a4;
    } else {
        if (((u32)a2 & 0x40) == 0) {
            uVar3 = 0x8000a;
            ta_fifo_237124(0x8000a, a5, a6, a3);
            ar4_00 = (u8 *)ta_sq_write_header4();
        } else {
            uVar3 = 0x210000a;
            ta_fifo_237124(0x210000a, a5, a6, a3);
            ar4_00 = (u8 *)ta_sq_write_header5();
        }
        pcVar7 = gfxlib_fill_loop_233e70;
        pcVar5 = ninja_calls_float_calc_25c868;
        iVar2 = 0x18;
    }
    if (((u32)a2 & 2) == 0) {
        if (((u32)a2 & 1) == 0) {
            iStack_7c = 0;
            uStack_80 = 0;
            puVar4 = ar4_00;
            if (0 < a1) {
                do {
                    a5 = uStack_80;
                    a3 = auStack_60;
                    puVar6 = (u8 *)(*pcVar7)(a0, uStack_80, 2, auStack_60);
                    a6 = puVar6;
                    ar4_00 = puVar4;
                    if (puVar6 != (u8 *)0xffffffff) {
                        a5 = 2;
                        ar4_00 = (u8 *)(*pcVar5)(auStack_60, 2, puVar4, puVar6);
                        a6 = puVar4;
                        a3 = puVar6;
                    }
                    iStack_7c = iStack_7c + 1;
                    uStack_80 = uStack_80 + 2;
                    puVar4 = ar4_00;
                } while (iStack_7c < a1);
            }
        } else {
            a6 = (u8 *)0x1;
            a5 = 0;
            a3 = auStack_60;
            iVar1 = (*pcVar7)(a0, 0, 1, auStack_60);
            if (iVar1 != -1) {
                iStack_7c = 0;
                uStack_80 = 1;
                puVar6 = auStack_60 + iVar2;
                puVar4 = ar4_00;
                if (0 < a1) {
                    do {
                        a5 = uStack_80;
                        a3 = puVar6;
                        a7 = (u8 *)(*pcVar7)(a0, uStack_80, 1, puVar6);
                        a6 = a7;
                        ar4_00 = puVar4;
                        if (a7 != (u8 *)0xffffffff) {
                            a5 = 2;
                            ar4_00 = (u8 *)(*pcVar5)(auStack_60, 2, puVar4, a7);
                            a6 = puVar4;
                            a3 = a7;
                        }
                        iStack_7c = iStack_7c + 1;
                        uStack_80 = uStack_80 + 1;
                        puVar4 = ar4_00;
                    } while (iStack_7c < a1);
                }
            }
        }
    } else {
        a6 = (u8 *)0x1;
        a5 = 0;
        a3 = auStack_60;
        aiStack_68[0] = (*pcVar7)(a0, 0, 1, auStack_60);
        uStack_80 = 1;
        iStack_70 = 0;
        iStack_7c = 1;
        puVar4 = ar4_00;
        if (0 < a1) {
            do {
                a6 = (u8 *)0x1;
                a3 = auStack_60 + uStack_80 * iVar2;
                a5 = iStack_7c;
                iVar1 = (*pcVar7)(a0, iStack_7c, 1, a3);
                aiStack_68[uStack_80] = iVar1;
                ar4_00 = puVar4;
                if ((aiStack_68[0] != -1) && (aiStack_68[1] != -1)) {
                    a5 = 2;
                    a3 = (u8 *)(aiStack_68[0] + aiStack_68[1]);
                    ar4_00 = (u8 *)(*pcVar5)(auStack_60, 2, puVar4, a3);
                    a6 = puVar4;
                }
                uStack_80 = uStack_80 ^ 1;
                iStack_70 = iStack_70 + 1;
                iStack_7c = iStack_7c + 1;
                puVar4 = ar4_00;
            } while (iStack_70 < a1);
        }
    }
    ta_set_list_addr(ar4_00);
    uVar3 = draw_state_restore(ar4_00);
    return uVar3;
}

/*
 * gfxlib_draw_234fd0  0x8c234fd0
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: game_draw_015054, game_draw_0d2c84, game_list_0a98cc, list_draw_node_points, static_init_27def0
 */
u32 gfxlib_draw_234fd0(u32 a0, int a1, u32 a2, u32 *a3) {
    u32 uVar1;
    double *pdVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    int a5;
    int iVar6;
    u32 *puVar7;
    u64 *puVar8;
    double dVar9;
    u32 uVar10;
    double dVar11;
    double dVar12;
    u32 uVar13;
    double in_dr6;
    u32 uVar14;
    u32 uVar15;
    double in_dr8;
    u32 uVar16;
    double in_dr10;
    double dVar17;
    u64 in_dr12;
    u64 in_dr14;
    float fVar19;
    double dVar18;
    double in_xd4;
    double in_xd6;
    double in_xd8;
    double in_xd12;
    u32 in_PR;
    u8 auStack_3c[16];
    u64 uStack_2c;
    u64 uStack_24;

    uStack_24 = CONCAT44((int)in_dr14, (u32)uStack_24);
    uStack_24._0_4_ = (int)((u64)in_dr14 >> 0x20);
    puVar8 = &uStack_2c;
    uStack_2c = CONCAT44((int)in_dr12, (int)((u64)in_dr12 >> 0x20));

    *(u32 *)((int)puVar8 + -4) = in_PR;
    *(u32 *)((int)puVar8 + -0x20) = a2;

    dVar9 = (double)CONCAT44(*(u32 *)0x8c4aa4e0, g_8c4aa4dc);
    dVar11 = (double)CONCAT44(*(u32 *)0x8c4aa4a8, (int)in_dr12);
    dVar18 = (double)CONCAT44(*(u32 *)0x8c4aa4a8, (int)in_dr14);

    fVar19 = (float)((u64)dVar18 >> 0x20) * (float)((u64)dVar9 >> 0x20);
    dVar11 = (double)((u64)dVar11 & 0xffffffff);

    *(u32 *)((int)puVar8 + -0x24) = *(u32 *)((int)0x8c4aa4a8 + 0xc);
    dVar11 = (double)(u64) * (u32 *)(0x8c4aa4a8 + 2);

    a5 = a1;
    draw_state_save(0x8c4aa4a8, a1, a2, a3);
    uVar1 = 0xe0000000;
    uVar4 = 0xf0000000;
    dVar18 = (double)CONCAT44(fVar19, 0x3f800000);
    if ((*(u32 *)((int)puVar8 + -0x20) & 0x80000000) == 0) {
        if ((*(u32 *)((int)puVar8 + -0x20) & 0x40) == 0) {
            uVar5 = 0x80002;
            ta_fifo_237124(0x80002, a5, a2, a3);
            pdVar2 = (double *)ta_sq_write_header4_short();
        } else {
            uVar5 = 0x2100002;
            ta_fifo_237124(0x2100002, a5, a2, a3);
            pdVar2 = (double *)ta_sq_write_header5_short();
        }
        puVar7 = (u32 *)((int)puVar8 + -0x1c);
        iVar6 = 0;
        if (0 < a1) {
            do {

                in_dr6 = (double)((u64)in_dr6 & 0xffffffff);

                a2 = 1;
                dVar12 = dVar18;
                dVar9 = in_xd12;

                in_dr6 = (double)((u64)dVar11 & 0xffffffff);
                dVar12 = in_xd4;
                dVar9 = in_xd6;

                in_xd4 = dVar12;
                a5 = iVar6;
                a3 = puVar7;
                iVar3 = gfxlib_fill_loop_233f1c(a0, iVar6, 1, puVar7);
                iVar6 = iVar6 + 1;
                in_xd6 = dVar9;
                if (iVar3 == 0) {
                    uVar5 = *puVar7;

                    dVar12 = (double)CONCAT44(*(u32 *)((int)puVar8 + -0x18), *(u32 *)((int)puVar8 + -0x14));
                    in_dr6 = (double)CONCAT44(*(u32 *)((int)puVar8 + -0x10), SUB84(in_dr6, 0));

                    *(u32 *)(pdVar2 + 3) = uVar5;
                    uVar13 = (u32)((u64)dVar12 >> 0x20);
                    uVar10 = SUB84(dVar12, 0);
                    uVar15 = (u32)((u64)in_dr6 >> 0x20);

                    *(u32 *)((int)pdVar2 + 0xc) = uVar13;
                    *(u32 *)(pdVar2 + 1) = uVar10;
                    pdVar2 = (double *)((int)pdVar2 + 4);
                    *(u32 *)pdVar2 = uVar15;

                    *(u32 *)((int)pdVar2 + -4) = uVar1;
                    in_xd6 = in_dr6;

                    in_dr6 = (double)CONCAT44(uVar15, uVar15);
                    in_xd6 = dVar9;

                    in_dr6 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0) + SUB84(dVar18, 0));

                    *(u32 *)((int)pdVar2 + 0x34) = uVar5;

                    *(u32 *)(pdVar2 + 5) = uVar13;
                    *(u32 *)((int)pdVar2 + 0x24) = uVar10;
                    pdVar2 = pdVar2 + 4;
                    *(int *)pdVar2 = SUB84(in_dr6, 0);

                    *(u32 *)((int)pdVar2 + -4) = uVar1;
                    dVar9 = in_xd4;

                    dVar9 = (double)CONCAT44(uVar10, SUB84(in_dr8, 0));

                    in_dr8 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) + SUB84(dVar18, 0), SUB84(dVar9, 0));

                    *(u32 *)((int)pdVar2 + 0x34) = uVar5;
                    uVar10 = (u32)((u64)in_dr8 >> 0x20);

                    *(u32 *)(pdVar2 + 5) = uVar13;
                    *(u32 *)((int)pdVar2 + 0x24) = uVar10;
                    pdVar2 = pdVar2 + 4;
                    *(int *)pdVar2 = (int)((u64)in_dr6 >> 0x20);

                    *(u32 *)((int)pdVar2 + -4) = uVar1;
                    *(u32 *)((int)pdVar2 + 0x34) = uVar5;

                    *(u32 *)(pdVar2 + 5) = uVar13;
                    *(u32 *)((int)pdVar2 + 0x24) = uVar10;
                    pdVar2 = pdVar2 + 4;
                    *(int *)pdVar2 = SUB84(in_dr6, 0);

                    *(u32 *)((int)pdVar2 + -4) = uVar4;
                    pdVar2 = (double *)((int)pdVar2 + 0x1c);
                }
            } while (iVar6 < a1);
        }
    } else {
        if ((*(u32 *)((int)puVar8 + -0x20) & 0x40) == 0) {
            uVar5 = 0x8000a;
            ta_fifo_237124(0x8000a, a5, a2, a3);
            pdVar2 = (double *)ta_sq_write_header4();
        } else {
            uVar5 = 0x210000a;
            ta_fifo_237124(0x210000a, a5, a2, a3);
            pdVar2 = (double *)ta_sq_write_header5();
        }
        puVar7 = (u32 *)((int)puVar8 + -0x1c);
        iVar6 = 0;
        if (0 < a1) {
            do {
                a2 = 1;
                dVar9 = dVar18;
                dVar11 = in_xd12;

                dVar9 = in_xd4;
                dVar11 = in_xd6;

                in_xd6 = dVar11;
                in_xd4 = dVar9;
                a5 = iVar6;
                a3 = puVar7;
                iVar3 = gfxlib_fill_loop_233e70(a0, iVar6, 1, puVar7);
                iVar6 = iVar6 + 1;
                dVar9 = in_xd8;
                if (iVar3 == 0) {
                    uVar5 = *puVar7;

                    dVar12 = (double)CONCAT44(*(u32 *)((int)puVar8 + -0x18), *(u32 *)((int)puVar8 + -0x14));
                    dVar11 = (double)CONCAT44(*(u32 *)((int)puVar8 + -0x10), *(u32 *)((int)puVar8 + -0xc));
                    in_dr8 = (double)CONCAT44(*(u32 *)((int)puVar8 + -8), SUB84(in_dr8, 0));

                    *(u32 *)(pdVar2 + 3) = uVar5;
                    uVar13 = (u32)((u64)dVar12 >> 0x20);
                    uVar10 = SUB84(dVar12, 0);
                    uVar14 = (u32)((u64)dVar11 >> 0x20);
                    uVar15 = SUB84(dVar11, 0);
                    uVar16 = (u32)((u64)in_dr8 >> 0x20);

                    *(u32 *)((int)pdVar2 + 0x14) = uVar13;
                    *(u32 *)(pdVar2 + 2) = uVar10;
                    *(u32 *)((int)pdVar2 + 0xc) = uVar14;
                    *(u32 *)(pdVar2 + 1) = uVar15;
                    pdVar2 = (double *)((int)pdVar2 + 4);
                    *(u32 *)pdVar2 = uVar16;

                    *(u32 *)((int)pdVar2 + -4) = uVar1;
                    dVar9 = in_dr8;

                    in_dr8 = (double)CONCAT44(uVar16, uVar16);
                    dVar9 = in_xd8;

                    *(u32 *)((int)pdVar2 + 0x34) = uVar5;

                    in_dr8 = (double)CONCAT44((int)((u64)in_dr8 >> 0x20), SUB84(in_dr8, 0) + SUB84(dVar18, 0));

                    *(u32 *)(pdVar2 + 6) = uVar13;
                    *(u32 *)((int)pdVar2 + 0x2c) = uVar10;
                    *(u32 *)(pdVar2 + 5) = uVar14;
                    *(u32 *)((int)pdVar2 + 0x24) = uVar15;
                    pdVar2 = pdVar2 + 4;
                    *(int *)pdVar2 = SUB84(in_dr8, 0);

                    *(u32 *)((int)pdVar2 + -4) = uVar1;
                    dVar17 = in_xd6;

                    dVar17 = (double)CONCAT44(uVar15, SUB84(in_dr10, 0));

                    in_dr10 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar18, 0), SUB84(dVar17, 0));

                    *(u32 *)((int)pdVar2 + 0x34) = uVar5;
                    uVar15 = (u32)((u64)in_dr10 >> 0x20);

                    *(u32 *)(pdVar2 + 6) = uVar13;
                    *(u32 *)((int)pdVar2 + 0x2c) = uVar10;
                    *(u32 *)(pdVar2 + 5) = uVar14;
                    *(u32 *)((int)pdVar2 + 0x24) = uVar15;
                    pdVar2 = pdVar2 + 4;
                    *(int *)pdVar2 = (int)((u64)in_dr8 >> 0x20);

                    *(u32 *)((int)pdVar2 + -4) = uVar1;
                    *(u32 *)((int)pdVar2 + 0x34) = uVar5;

                    *(u32 *)(pdVar2 + 6) = uVar13;
                    *(u32 *)((int)pdVar2 + 0x2c) = uVar10;
                    *(u32 *)(pdVar2 + 5) = uVar14;
                    *(u32 *)((int)pdVar2 + 0x24) = uVar15;
                    pdVar2 = pdVar2 + 4;
                    *(int *)pdVar2 = SUB84(in_dr8, 0);

                    *(u32 *)((int)pdVar2 + -4) = uVar4;
                    pdVar2 = (double *)((int)pdVar2 + 0x1c);
                }
                in_xd8 = dVar9;
            } while (iVar6 < a1);
        }
    }
    ta_set_list_addr(pdVar2);
    uVar4 = draw_state_restore(pdVar2);
    return uVar4;
}

/*
 * gfxlib_draw_2351fc  0x8c2351fc
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_2351fc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    float fVar2;
    double in_dr2;
    u32 uVar3;
    u64 in_dr4;
    u32 in_fr14;
    double in_xd2;
    bool bVar4;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    fVar2 = (float)((u64)in_dr4 >> 0x20);
    uVar1 = *(u32 *)(&g_8c277ab8 + a0 * 4);
    ta_fifo_237124(uVar1, a1, a2, a3);
    uVar3 = (u32)in_dr4;
    if (a0 == 0) {
        uVar1 = ta_sq_write_header4_short();
    } else {
        uVar1 = ta_sq_write_header5_short();
    }
    if (cVar5 == '\0') {
        g_8c4aa3e0 = (double)CONCAT44(0xbf800000, uVar3);
        uVar3 = 0xbf800000;
        bVar4 = fVar2 < -1.0;
    } else {
        g_8c4aa3e0 = -(double)CONCAT44(0x3f800000, uVar3);
        uVar3 = (u32)((u64)g_8c4aa3e0 >> 0x20);
        bVar4 = (double)CONCAT44(in_fr14, fVar2) < g_8c4aa3e0;
    }
    if (bVar4) {
        if (cVar6 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar3);
            g_8c4aa3e0 = in_xd2;
        }
        if (cVar5 == '\0') {
            fVar2 = SUB84(in_dr2, 0) / fVar2;
        } else {
            fVar2 = SUB84(in_dr2 / (double)CONCAT44(in_fr14, fVar2), 0);
        }
    } else {
        fVar2 = 1.0;
        g_8c4aa3e0 = in_xd2;
    }
    if (cVar6 == '\0') {
        g_8c4aa3e0 = (double)CONCAT44(uVar1, fVar2);
    }
    return uVar1;
}

/*
 * gfxlib_draw_235248  0x8c235248
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 */
u32 gfxlib_draw_235248(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *puVar2;
    double in_dr2;
    u32 uVar3;
    u64 in_dr4;
    float in_fr15;
    double in_xd2;
    bool bVar4;
    u32 in_PR;
    u8 auStack_8[4];
    u8 auStack_4[4];

    puVar2 = auStack_4;

    *(u32 *)(puVar2 + -4) = in_PR;
    *(int *)(puVar2 + -8) = a0;

    in_fr15 = (float)((u64)in_dr4 >> 0x20);

    uVar1 = *(u32 *)(&g_8c277ac0 + a0 * 4);
    ta_fifo_237124(uVar1, a1, a2, a3, *(u32 *)(puVar2 + -8));
    uVar3 = (u32)in_dr4;
    if (*(int *)(puVar2 + -8) == 0) {
        uVar1 = ta_sq_write_header4();
    } else {
        uVar1 = ta_sq_write_header5();
    }

    g_8c4aa3e0 = (double)CONCAT44(0xbf800000, uVar3);
    uVar3 = 0xbf800000;
    bVar4 = in_fr15 < -1.0;

    if (bVar4) {

        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), uVar3);
        g_8c4aa3e0 = in_xd2;

        in_fr15 = SUB84(in_dr2, 0) / in_fr15;

    } else {
        in_fr15 = 1.0;
        g_8c4aa3e0 = in_xd2;
    }

    g_8c4aa3e0 = (double)CONCAT44(uVar1, in_fr15);

    return uVar1;
}

/*
 * gfxlib_float_calc_235294  0x8c235294
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 * called by: alt_entry_2359ae, gfxlib_uses_switch_jump_23598e
 */
u32 gfxlib_float_calc_235294(int a0, int a1) {
    float fVar1;
    float fVar2;
    float fVar3;

    fVar1 = *(float *)(a1 + 4) - *(float *)(a0 + 4);
    fVar2 = *(float *)(a1 + 8) - *(float *)(a0 + 8);
    g_8c4aa3e4 = (float *)((int)g_8c4aa3e4 + 0x18);
    *g_8c4aa3e4 = (float)*(u32 *)(a0 + 0x18);
    fVar3 = 1.0 / SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    fVar2 = fVar2 * fVar3 * 0.525;
    fVar1 = -(fVar1 * fVar3 * 0.525);
    g_8c4aa3e4 = g_8c4aa3e4 + -3;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 8) + fVar1;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 4) + fVar2;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = -3.689349e+19;
    g_8c4aa3e4 = g_8c4aa3e4 + 0xe;
    *g_8c4aa3e4 = *(float *)(a0 + 0x18);
    g_8c4aa3e4 = g_8c4aa3e4 + -3;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 8) - fVar1;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 4) - fVar2;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = -3.689349e+19;
    g_8c4aa3e4 = g_8c4aa3e4 + 0xe;
    *g_8c4aa3e4 = *(float *)(a1 + 0x18);
    g_8c4aa3e4 = g_8c4aa3e4 + -3;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 8) + fVar1;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 4) + fVar2;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = -3.689349e+19;
    g_8c4aa3e4 = g_8c4aa3e4 + 0xe;
    *g_8c4aa3e4 = *(float *)(a1 + 0x18);
    g_8c4aa3e4 = g_8c4aa3e4 + -3;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 8) - fVar1;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 4) - fVar2;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = -1.5845633e+29;
    g_8c4aa3e4 = g_8c4aa3e4 + 8;
    return 4;
}

/*
 * gfxlib_float_calc_23541c  0x8c23541c
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 * called by: gfxlib_uses_switch_jump_235a80
 */
u32 gfxlib_float_calc_23541c(int a0, int a1) {
    float fVar1;
    float fVar2;
    float fVar3;

    fVar2 = *(float *)(a1 + 4) - *(float *)(a0 + 4);
    fVar1 = *(float *)(a1 + 8) - *(float *)(a0 + 8);
    g_8c4aa3e4 = (float *)((int)g_8c4aa3e4 + 0x18);
    *g_8c4aa3e4 = (float)*(u32 *)(a0 + 0x18);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    fVar3 = 1.0 / SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    fVar1 = fVar1 * fVar3 * 0.525;
    fVar2 = -(fVar2 * fVar3 * 0.525);
    *g_8c4aa3e4 = (float)*(u32 *)(a0 + 0x14);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = (float)*(u32 *)(a0 + 0x10);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 8) + fVar2;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 4) + fVar1;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = -3.689349e+19;
    g_8c4aa3e4 = g_8c4aa3e4 + 0xe;
    *g_8c4aa3e4 = *(float *)(a0 + 0x18);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 0x14);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 0x10);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 8) - fVar2;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a0 + 4) - fVar1;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = -3.689349e+19;
    g_8c4aa3e4 = g_8c4aa3e4 + 0xe;
    *g_8c4aa3e4 = *(float *)(a1 + 0x18);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 0x14);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 0x10);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 8) + fVar2;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 4) + fVar1;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = -3.689349e+19;
    g_8c4aa3e4 = g_8c4aa3e4 + 0xe;
    *g_8c4aa3e4 = *(float *)(a1 + 0x18);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 0x14);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 0x10);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 8) - fVar2;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(a1 + 4) - fVar1;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = -1.5845633e+29;
    g_8c4aa3e4 = g_8c4aa3e4 + 8;
    return 4;
}

/*
 * gfxlib_scan_loop_2355c4  0x8c2355c4
 * area name: in the gfxlib library code range; behaviour name: a loop that only reads
 * called by: gfxlib_uses_switch_jump_2358a0
 */
u32 gfxlib_scan_loop_2355c4(int *a0, int a1) {
    int iVar1;
    int iVar2;

    iVar1 = 0;
    if (0 < a1 + 1) {
        do {
            iVar2 = iVar1 * 4;
            g_8c4aa3e4 = g_8c4aa3e4 + 6;
            *g_8c4aa3e4 = *(float *)(a0[1] + iVar2);
            g_8c4aa3e4 = g_8c4aa3e4 + -1;
            *g_8c4aa3e4 = (float)(int)*(short *)(a0[2] + iVar2 + 2) * 0.00390625;
            g_8c4aa3e4 = g_8c4aa3e4 + -1;
            *g_8c4aa3e4 = (float)(int)*(short *)(iVar2 + a0[2]) * 0.00390625;
            g_8c4aa3e4 = g_8c4aa3e4 + -1;
            *g_8c4aa3e4 = g_8c4aa3e0;
            g_8c4aa3e4 = g_8c4aa3e4 + -1;
            *g_8c4aa3e4 = *(float *)(*a0 + iVar1 * 8 + 4);
            g_8c4aa3e4 = g_8c4aa3e4 + -1;
            *g_8c4aa3e4 = *(float *)(iVar1 * 8 + *a0);
            g_8c4aa3e4 = g_8c4aa3e4 + -1;
            *g_8c4aa3e4 = -3.689349e+19;
            iVar1 = iVar1 + 1;
            g_8c4aa3e4 = g_8c4aa3e4 + 8;
        } while (iVar1 < a1 + 1);
    }
    iVar2 = iVar1 * 4;
    g_8c4aa3e4 = g_8c4aa3e4 + 6;
    *g_8c4aa3e4 = *(float *)(a0[1] + iVar2);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = (float)(int)*(short *)(a0[2] + iVar2 + 2) * 0.00390625;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = (float)(int)*(short *)(iVar2 + a0[2]) * 0.00390625;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(*a0 + iVar1 * 8 + 4);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(float *)(iVar1 * 8 + *a0);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = -1.5845633e+29;
    g_8c4aa3e4 = g_8c4aa3e4 + 8;
    return 4;
}

/*
 * gfxlib_scan_loop_235704  0x8c235704
 * area name: in the gfxlib library code range; behaviour name: a loop that only reads
 * called by: gfxlib_uses_switch_jump_2357d8
 */
u32 gfxlib_scan_loop_235704(int *a0, int a1) {
    int iVar1;

    iVar1 = 0;
    if (0 < a1 + 1) {
        do {
            g_8c4aa3e4 = g_8c4aa3e4 + 6;
            *g_8c4aa3e4 = *(u32 *)(iVar1 * 4 + a0[1]);
            g_8c4aa3e4 = g_8c4aa3e4 + -3;
            *g_8c4aa3e4 = g_8c4aa3e0;
            g_8c4aa3e4 = g_8c4aa3e4 + -1;
            *g_8c4aa3e4 = *(u32 *)(*a0 + iVar1 * 8 + 4);
            g_8c4aa3e4 = g_8c4aa3e4 + -1;
            *g_8c4aa3e4 = *(u32 *)(iVar1 * 8 + *a0);
            g_8c4aa3e4 = g_8c4aa3e4 + -1;
            *g_8c4aa3e4 = 0xe0000000;
            iVar1 = iVar1 + 1;
            g_8c4aa3e4 = g_8c4aa3e4 + 8;
        } while (iVar1 < a1 + 1);
    }
    g_8c4aa3e4 = g_8c4aa3e4 + 6;
    *g_8c4aa3e4 = *(u32 *)(iVar1 * 4 + a0[1]);
    g_8c4aa3e4 = g_8c4aa3e4 + -3;
    *g_8c4aa3e4 = g_8c4aa3e0;
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(u32 *)(*a0 + iVar1 * 8 + 4);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = *(u32 *)(iVar1 * 8 + *a0);
    g_8c4aa3e4 = g_8c4aa3e4 + -1;
    *g_8c4aa3e4 = 0xf0000000;
    g_8c4aa3e4 = g_8c4aa3e4 + 8;
    return 4;
}

/*
 * gfxlib_uses_switch_jump_2357d8  0x8c2357d8
 * area name: in the gfxlib library code range; behaviour name: its main named callee is switch_jump
 */
u32 gfxlib_uses_switch_jump_2357d8(int a0, int a1) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int a6;
    u8 *puVar4;
    int iVar5;
    int iVar6;
    u8 auStack_1a4[128];
    u8 auStack_124[256];
    u8 *puStack_24;

    puVar4 = auStack_1a4;
    iVar2 = 0;
    a6 = 0;
    iVar5 = a1 + 1 >> 1;
    iVar6 = a1;
    if (0 < iVar5) {
        do {
            iVar6 = iVar6 + -1;
            switch_jump(8, auStack_124 + iVar2 * 8, a6 * 8 + *(int *)a0);
            *(u32 *)(puVar4 + iVar2 * 4) = *(u32 *)(a6 * 4 + *(int *)(a0 + 4));
            iVar3 = iVar2 + 1;
            a6 = a6 + 1;
            switch_jump(8, auStack_124 + iVar3 * 8, iVar6 * 8 + *(int *)a0);
            iVar2 = iVar3 + 1;
            *(u32 *)(puVar4 + iVar3 * 4) = *(u32 *)(iVar6 * 4 + *(int *)(a0 + 4));
        } while (a6 < iVar5);
    }
    puStack_24 = auStack_124;
    uVar1 = gfxlib_scan_loop_235704(&puStack_24, a1 + -2);
    return uVar1;
}

/*
 * gfxlib_uses_switch_jump_2358a0  0x8c2358a0
 * area name: in the gfxlib library code range; behaviour name: its main named callee is switch_jump
 */
u32 gfxlib_uses_switch_jump_2358a0(int a0, int a1) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int a6;
    u8 *a7;
    int iVar5;
    int iVar6;
    u16 auStack_22c[64];
    u8 auStack_1ac[128];
    u8 auStack_12c[256];
    u8 *puStack_2c;
    u8 *puStack_24;

    iVar3 = 0;
    iVar5 = a1 + 1 >> 1;
    a6 = 0;
    a7 = auStack_1ac;
    iVar6 = a1;
    if (0 < iVar5) {
        do {
            iVar6 = iVar6 + -1;
            switch_jump(8, auStack_12c + iVar3 * 8, a6 * 8 + *(int *)a0);
            auStack_22c[iVar3 * 2] = *(u16 *)(*(int *)(a0 + 8) + a6 * 4);
            iVar2 = a6 * 4;
            iVar4 = iVar3 + 1;
            auStack_22c[iVar3 * 2 + 1] = *(u16 *)(*(int *)(a0 + 8) + a6 * 4 + 2);
            a6 = a6 + 1;
            *(u32 *)(a7 + iVar3 * 4) = *(u32 *)(iVar2 + *(int *)(a0 + 4));
            switch_jump(8, auStack_12c + iVar4 * 8, iVar6 * 8 + *(int *)a0);
            auStack_22c[iVar4 * 2] = *(u16 *)(*(int *)(a0 + 8) + iVar6 * 4);
            iVar3 = iVar4 + 1;
            auStack_22c[iVar4 * 2 + 1] = *(u16 *)(*(int *)(a0 + 8) + iVar6 * 4 + 2);
            *(u32 *)(a7 + iVar4 * 4) = *(u32 *)(iVar6 * 4 + *(int *)(a0 + 4));
        } while (a6 < iVar5);
    }
    puStack_2c = auStack_12c;
    puStack_24 = (u8 *)auStack_22c;
    uVar1 = gfxlib_scan_loop_2355c4(&puStack_2c, a1 + -2);
    return uVar1;
}

/*
 * gfxlib_uses_switch_jump_23598e  0x8c23598e
 * area name: in the gfxlib library code range; behaviour name: its main named callee is switch_jump
 */
u32 gfxlib_uses_switch_jump_23598e(int *a0, int a1) {
    u32 uVar1;
    u64 *puVar2;
    u8 *puVar3;
    int iVar4;
    int iVar5;
    u32 uVar6;
    u32 uVar7;
    char cVar8;

    cVar8 = '\0';
    uVar6 = 0;
    puVar3 = &g_8c4aa3e8;
    g_8c4aa3ec = *(u32 *)*a0;
    g_8c4aa3f0 = *(u32 *)(*a0 + 4);
    g_8c4aa400 = *(u32 *)a0[1];
    g_8c4aa3e8 = 0xe0000000;
    switch_jump(0x20, 0x8c4aa428, &g_8c4aa3e8);
    uVar7 = 1;
    if (1 < a1) {
        do {
            if ((int)uVar7 < 0) {
                uVar6 = ~(~uVar7 + 1 & 1) + 1;
            } else {
                uVar6 = uVar7 & 1;
            }
            iVar4 = uVar6 * 0x20;
            puVar2 = (u64 *)(*a0 + uVar7 * 8);
            if (cVar8 == '\0') {
                *(u32 *)(&g_8c4aa3ec + iVar4) = *(u32 *)puVar2;
            } else {
                *(u64 *)(&g_8c4aa3ec + iVar4) = *puVar2;
            }
            iVar5 = uVar7 * 8 + *a0;
            if (cVar8 == '\0') {
                *(u32 *)(&g_8c4aa3f0 + iVar4) = *(u32 *)(iVar5 + 4);
            } else {
                *(u64 *)(&g_8c4aa3f0 + iVar4) = *(u64 *)(iVar5 + 4);
            }
            *(u32 *)(&g_8c4aa400 + iVar4) = *(u32 *)(uVar7 * 4 + a0[1]);
            *(u32 *)(&g_8c4aa3e8 + iVar4) = 0xe0000000;
            gfxlib_float_calc_235294(&g_8c4aa3e8, puVar3 + 0x20);
            uVar7 = uVar7 + 1;
        } while ((int)uVar7 < a1);
    }
    uVar1 = gfxlib_float_calc_235294(&g_8c4aa3e8 + uVar6 * 0x20, 0x8c4aa428);
    return uVar1;
}

/*
 * alt_entry_2359ae  0x8c2359ae
 * probably an entry 32 bytes into 8c23598e: it reads registers that code sets before it
 */
u32 alt_entry_2359ae(u32 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
    u32 in_r1;
    u64 *puVar1;
    u32 *puVar2;
    int iVar3;
    int unaff_r9;
    u32 unaff_r10;
    u32 unaff_r11;
    int *unaff_r12;
    int unaff_r13;
    u32 uVar4;
    u32 extraout_fr3;
    u32 uVar5;
    u32 extraout_fr3_00;

    *(u32 *)(ain0 + (int)a0) = *(u32 *)*unaff_r12;

    a0[2] = *(u32 *)(ain0 + *unaff_r12);

    a0[6] = *(u32 *)unaff_r12[1];
    *a0 = unaff_r10;
    switch_jump(0x20, in_r1, a0);
    uVar4 = 1;
    uVar5 = extraout_fr3;
    if (1 < unaff_r9) {
        do {
            if ((int)uVar4 < 0) {
                unaff_r11 = ~(~uVar4 + 1 & 1) + 1;
            } else {
                unaff_r11 = uVar4 & 1;
            }
            puVar1 = (u64 *)(*unaff_r12 + uVar4 * 8);

            uVar5 = *(u32 *)puVar1;

            puVar2 = (u32 *)(unaff_r11 * 0x20 + unaff_r13);

            puVar2[1] = uVar5;

            iVar3 = uVar4 * 8 + *unaff_r12;

            puVar2[2] = *(u32 *)(iVar3 + 4);

            puVar2[6] = *(u32 *)(uVar4 * 4 + unaff_r12[1]);
            *puVar2 = unaff_r10;
            gfxlib_float_calc_235294(unaff_r13, a0 + 8);
            uVar4 = uVar4 + 1;
            uVar5 = extraout_fr3_00;
        } while ((int)uVar4 < unaff_r9);
    }
    uVar5 = gfxlib_float_calc_235294(unaff_r11 * 0x20 + unaff_r13, unaff_r13 + 0x40);
    return uVar5;
}

/*
 * gfxlib_uses_switch_jump_235a80  0x8c235a80
 * area name: in the gfxlib library code range; behaviour name: its main named callee is switch_jump
 */
u32 gfxlib_uses_switch_jump_235a80(u32 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
    u32 uVar1;
    u64 *puVar2;
    u32 *puVar3;
    int iVar4;
    int unaff_r8;
    u32 unaff_r11;
    int unaff_r12;
    u32 uVar5;
    int *unaff_r14;
    float fVar6;
    u64 in_dr2;
    double dVar7;
    float fVar8;
    u32 in_fr14;
    u64 in_xd2;
    char cVar9;
    char cVar10;

    cVar10 = '\0';
    cVar9 = '\0';
    *(u32 *)(ain0 + (int)a0) = *(u32 *)*unaff_r14;
    a0[2] = *(u32 *)(ain0 + *unaff_r14);
    fVar8 = 0.00390625;
    a0[4] = (float)(int)*(short *)unaff_r14[2] * 0.00390625;
    fVar6 = (float)(int)*(short *)(unaff_r14[2] + 2) * 0.00390625;
    dVar7 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), fVar6);
    a0[5] = fVar6;
    a0[6] = *(u32 *)unaff_r14[1];
    *a0 = 0xe0000000;
    switch_jump(0x20, a0 + 0x10, a0);
    uVar5 = 1;
    if (1 < unaff_r8) {
        do {
            if ((int)uVar5 < 0) {
                unaff_r11 = ~(~uVar5 + 1 & 1) + 1;
            } else {
                unaff_r11 = uVar5 & 1;
            }
            puVar2 = (u64 *)(*unaff_r14 + uVar5 * 8);
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), *(u32 *)puVar2);
            } else {
                in_xd2 = *puVar2;
            }
            puVar3 = (u32 *)(unaff_r11 * 0x20 + unaff_r12);
            if (cVar10 == '\0') {
                puVar3[1] = SUB84(dVar7, 0);
            } else {
                *(u64 *)(puVar3 + 1) = in_xd2;
            }
            iVar4 = uVar5 * 8 + *unaff_r14;
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), *(u32 *)(iVar4 + 4));
            } else {
                in_xd2 = *(u64 *)(iVar4 + 4);
            }
            iVar4 = uVar5 * 4;
            if (cVar10 == '\0') {
                puVar3[2] = SUB84(dVar7, 0);
            } else {
                *(u64 *)(puVar3 + 2) = in_xd2;
            }
            uVar1 = (u32)((u64)dVar7 >> 0x20);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(uVar1, (float)(int)*(short *)(unaff_r14[2] + iVar4) * fVar8);
            } else {
                dVar7 = (double)CONCAT44(uVar1, (float)(int)*(short *)(unaff_r14[2] + iVar4)) *
                        (double)CONCAT44(in_fr14, fVar8);
            }
            if (cVar10 == '\0') {
                puVar3[4] = SUB84(dVar7, 0);
            } else {
                *(u64 *)(puVar3 + 4) = in_xd2;
            }
            uVar1 = (u32)((u64)dVar7 >> 0x20);
            fVar6 = (float)(int)*(short *)(unaff_r14[2] + iVar4 + 2);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(uVar1, fVar6 * fVar8);
            } else {
                dVar7 = (double)CONCAT44(uVar1, fVar6) * (double)CONCAT44(in_fr14, fVar8);
            }
            if (cVar10 == '\0') {
                puVar3[5] = SUB84(dVar7, 0);
            } else {
                *(u64 *)(puVar3 + 5) = in_xd2;
            }
            puVar3[6] = *(u32 *)(iVar4 + unaff_r14[1]);
            *puVar3 = 0xe0000000;
            gfxlib_float_calc_23541c(unaff_r12, a0 + 8);
            uVar5 = uVar5 + 1;
        } while ((int)uVar5 < unaff_r8);
    }
    uVar1 = gfxlib_float_calc_23541c(unaff_r11 * 0x20 + unaff_r12, unaff_r12 + 0x40);
    return uVar1;
}

/*
 * gfxlib_draw_235b6c  0x8c235b6c
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: Class_129808_draw_offset
 */
u32 gfxlib_draw_235b6c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar6_00;
    u32 uVar2;

    uVar1 = a1;
    ar6_00 = a2;
    draw_state_save(a0, a1, a2, a3);
    uVar2 = (u32)((a2 & 0x80000000) != 0);
    (*(code *)(&PTR_FUN_8c277aa0)[uVar2])((u32)((a2 & 0x40) != 0), uVar1, ar6_00, a3);
    (*(code *)(&PTR_FUN_8c277aa8)[uVar2 + (u32)((a2 & 0x20) != 0) * 2])(a0, a1, ar6_00, a3);
    uVar1 = g_8c4aa3e4;
    ta_set_list_addr(g_8c4aa3e4);
    uVar1 = draw_state_restore(uVar1);
    return uVar1;
}

/*
 * gfxlib_draw_235bfc  0x8c235bfc
 * area name: in the gfxlib library code range; behaviour name: mostly calls draw functions
 * called by: game_draw_0d2c84
 */
u32 gfxlib_draw_235bfc(u32 a0, u32 a1, u32 a2, u32 a3) {
    int ar7_00;
    u32 uVar1;
    u32 uVar2;
    u8 *ar6_00;
    u8 *ar6_01;
    u64 in_dr12;
    u64 in_dr14;
    u8 auStack_32c[772];
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;

    uStack_1c = (u32)in_dr14;
    uStack_20 = (u32)((u64)in_dr14 >> 0x20);
    uStack_24 = (u32)in_dr12;
    uStack_28 = (u32)((u64)in_dr12 >> 0x20);
    ar6_00 = auStack_32c;
    ar6_01 = auStack_32c;
    if ((a2 & 0x80000000) == 0) {
        uVar1 = a1;
        ar7_00 = gfxlib_fill_loop_235e1c(a0, a1, auStack_32c);
        if (ar7_00 == -1) {
            return 0xffffffff;
        }
        draw_state_save(a0, uVar1, ar6_01, a3);
        if ((a2 & 0x40) == 0) {
            uVar2 = 0x80002;
            ta_fifo_237124(0x80002, uVar1, ar6_01, a3);
            uVar1 = ta_sq_write_header4_short();
        } else {
            uVar2 = 0x2100002;
            ta_fifo_237124(0x2100002, uVar1, ar6_01, a3);
            uVar1 = ta_sq_write_header5_short();
        }
        if ((a2 & 0x20) == 0) {
            uVar2 = ninja_calls_float_calc_25c3a4(auStack_32c, a1, uVar1);
        } else {
            uVar2 = tex_calls_fill_loop_25b650(auStack_32c, a1, uVar1, ar7_00);
        }
    } else {
        uVar1 = a1;
        ar7_00 = gfxlib_fill_loop_235d8c(a0, a1, auStack_32c);
        if (ar7_00 == -1) {
            return 0xffffffff;
        }
        draw_state_save(a0, uVar1, ar6_00, a3);
        if ((a2 & 0x40) == 0) {
            uVar2 = 0x8000a;
            ta_fifo_237124(0x8000a, uVar1, ar6_00, a3);
            uVar1 = ta_sq_write_header4();
        } else {
            uVar2 = 0x210000a;
            ta_fifo_237124(0x210000a, uVar1, ar6_00, a3);
            uVar1 = ta_sq_write_header5();
        }
        if ((a2 & 0x20) == 0) {
            uVar2 = ninja_calls_float_calc_25c868(auStack_32c, a1, uVar1);
        } else {
            uVar2 = ninja_calls_fill_loop_25bc88(auStack_32c, a1, uVar1, ar7_00);
        }
    }
    ta_set_list_addr(uVar2);
    uVar1 = draw_state_restore(uVar2);
    return uVar1;
}

/*
 * gfxlib_fill_loop_235d8c  0x8c235d8c
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_draw_235bfc
 */
u32 gfxlib_fill_loop_235d8c(int *a0, int a1, u32 *a2) {
    float fVar1;
    short sVar2;
    short sVar3;
    u32 uVar4;
    float *pfVar5;
    u32 *puVar6;
    short *psVar7;
    u32 uVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float in_fr5;
    float in_fr4;
    float in_fr7;
    float in_fr6;
    u64 in_xd0;
    float in_xf2;
    float in_xf3;
    float in_xf4;
    float in_xf5;
    float in_xf6;
    float in_xf7;
    float in_xf8;
    float in_xf9;
    u64 in_xd10;
    float in_xf12;
    float in_xf13;
    float in_xf14;
    float in_xf15;
    bool bVar13;

    pfVar5 = (float *)*a0;
    puVar6 = (u32 *)a0[1];
    psVar7 = (short *)a0[2];
    uVar4 = 0;
    do {
        fVar10 = *pfVar5;
        bVar13 = puVar6 == NULL;
        fVar9 = pfVar5[1];
        fVar12 = pfVar5[2];
        pfVar5 = pfVar5 + 3;
        fVar1 = in_xf3 * fVar9 + in_xf7 * fVar10 + (float)((u64)in_xd10 >> 0x20) * 1.0 + in_xf15 * fVar12;
        uVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        if (bVar13) {
            uVar8 = 0xffffffff;
        }
        fVar11 = (in_xf2 * fVar9 + in_xf6 * fVar10 + (float)in_xd10 * 1.0 + in_xf14 * fVar12) / fVar1;
        sVar2 = *psVar7;
        if (g_8c4aa4d8 < fVar1) {
            return 0xffffffff;
        }
        bVar13 = fVar1 <= g_8c4aa4d4;
        sVar3 = psVar7[1];
        psVar7 = psVar7 + 2;
        a2[5] = ((float)((u64)in_xd0 >> 0x20) * fVar9 + in_xf5 * fVar10 + in_xf9 * 1.0 + in_xf13 * fVar12) * in_fr4 *
                    fVar11 +
                in_fr6;
        a2[4] = ((float)in_xd0 * fVar9 + in_xf4 * fVar10 + in_xf8 * 1.0 + in_xf12 * fVar12) * in_fr5 * fVar11 + in_fr7;
        a2[3] = fVar11;
        a2[2] = (float)(int)sVar2 * 0.00390625;
        a2[1] = (float)(int)sVar3 * 0.00390625;
        *a2 = uVar8;
        if (bVar13) {
            uVar4 = 1;
        }
        a1 = a1 + -1;
        a2 = a2 + 6;
    } while (a1 != 0);
    return uVar4;
}

/*
 * gfxlib_fill_loop_235e1c  0x8c235e1c
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_draw_235bfc
 */
u32 gfxlib_fill_loop_235e1c(int *a0, int a1, u32 *a2) {
    float fVar1;
    u32 uVar2;
    float *pfVar3;
    u32 *puVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float in_fr5;
    float in_fr4;
    float in_fr7;
    float in_fr6;
    u32 uVar9;
    u64 in_xd0;
    float in_xf2;
    float in_xf3;
    float in_xf4;
    float in_xf5;
    float in_xf6;
    float in_xf7;
    u64 in_xd8;
    u64 in_xd10;
    float in_xf12;
    float in_xf13;
    float in_xf14;
    float in_xf15;
    bool bVar10;

    pfVar3 = (float *)*a0;
    puVar4 = (u32 *)a0[1];
    uVar2 = 0;
    do {
        fVar6 = *pfVar3;
        fVar5 = pfVar3[1];
        fVar8 = pfVar3[2];
        pfVar3 = pfVar3 + 3;
        fVar1 = in_xf3 * fVar5 + in_xf7 * fVar6 + (float)((u64)in_xd10 >> 0x20) * 1.0 + in_xf15 * fVar8;
        uVar9 = 0xffffffff;
        if (puVar4 != NULL) {
            uVar9 = *puVar4;
            puVar4 = puVar4 + 1;
        }
        fVar7 = (in_xf2 * fVar5 + in_xf6 * fVar6 + (float)in_xd10 * 1.0 + in_xf14 * fVar8) / fVar1;
        if (g_8c4aa4d8 < fVar1) {
            return 0xffffffff;
        }
        bVar10 = fVar1 <= g_8c4aa4d4;
        a2[3] = ((float)((u64)in_xd0 >> 0x20) * fVar5 + in_xf5 * fVar6 + (float)((u64)in_xd8 >> 0x20) * 1.0 +
                 in_xf13 * fVar8) *
                    in_fr4 * fVar7 +
                in_fr6;
        a2[2] =
            ((float)in_xd0 * fVar5 + in_xf4 * fVar6 + (float)in_xd8 * 1.0 + in_xf12 * fVar8) * in_fr5 * fVar7 + in_fr7;
        a2[1] = fVar7;
        *a2 = uVar9;
        if (bVar10) {
            uVar2 = 1;
        }
        a1 = a1 + -1;
        a2 = a2 + 4;
    } while (a1 != 0);
    return uVar2;
}

/*
 * pvr_fill_fog_table_like  0x8c235e84
 * fills a 128-entry table with fr4 and loads it through pvr_sub_20a1d0
 * called by: game_uses_speech_is_playing_0bad68
 */
u32 pvr_fill_fog_table_like(void) {
    u32 uVar1;
    u32 *puVar2;
    u32 in_fr4;
    u32 auStack_208[128];
    u32 uStack_8;

    puVar2 = auStack_208;
    do {
        *puVar2 = in_fr4;
        puVar2 = puVar2 + 1;
    } while (puVar2 < &uStack_8);
    uVar1 = pvr_draw_20a1d0(auStack_208, &uStack_8);
    return uVar1;
}

/*
 * pvr_draw_235eb4  0x8c235eb4
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: CProlog_Ready
 */
u32 pvr_draw_235eb4(void) {
    int *piVar1;
    u32 uVar2;

    piVar1 = 0x8c4aabbc;
    *(int *)*0x8c4aabbc = (int)0x100;
    *(u32 *)(*piVar1 + 0x3c) = 0;
    ta_fifo_20f640(*piVar1);
    uVar2 = ta_load_texture_params(*piVar1);
    return uVar2;
}

/*
 * alt_entry_235eba  0x8c235eba
 * probably an entry 6 bytes into 8c235eb4: it reads registers that code sets before it
 */
u32 alt_entry_235eba(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_r2;
    int *unaff_r14;

    *(u32 *)*unaff_r14 = in_r2;
    *(u32 *)(*unaff_r14 + 0x3c) = 0;
    ta_fifo_20f640(*unaff_r14, a1, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * pvr_draw_235ee4  0x8c235ee4
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: CGame_draw_0ca458, Class_12b580_uses_pack_acquire_entry_handle_0d84e8, WATER_ELEMENT_release,
 * game_draw_0d8444, game_draw_0e14fc, game_draw_0e157c, game_draw_0e84f8, game_uses_set_timeout_120_mode6_0caac0 (+3
 * more)
 */
u32 pvr_draw_235ee4(void) {
    int *piVar1;
    u32 uVar2;

    piVar1 = 0x8c4aabbc;
    *(int *)*0x8c4aabbc = (int)0x100;
    *(u32 *)(*piVar1 + 0x3c) = 2;
    ta_fifo_20f640(*piVar1);
    uVar2 = ta_load_texture_params(*piVar1);
    return uVar2;
}

/*
 * alt_entry_235eea  0x8c235eea
 * probably an entry 6 bytes into 8c235ee4: it reads registers that code sets before it
 */
u32 alt_entry_235eea(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_r2;
    int *unaff_r14;

    *(u32 *)*unaff_r14 = in_r2;
    *(u32 *)(*unaff_r14 + 0x3c) = 2;
    ta_fifo_20f640(*unaff_r14, a1, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * pvr_draw_235f14  0x8c235f14
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: Class_12b580_uses_pack_acquire_entry_handle_0d84e8, game_draw_0e14fc, game_draw_0e157c,
 * se_play_bubble_mono
 */
u32 pvr_draw_235f14(void) {
    int *piVar1;
    u32 uVar2;

    piVar1 = 0x8c4aabbc;
    *(int *)*0x8c4aabbc = (int)0x100;
    *(u32 *)(*piVar1 + 0x3c) = 0;
    ta_fifo_20f640(*piVar1);
    uVar2 = ta_load_texture_params(*piVar1);
    return uVar2;
}

/*
 * alt_entry_235f1a  0x8c235f1a
 * probably an entry 6 bytes into 8c235f14: it reads registers that code sets before it
 */
u32 alt_entry_235f1a(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_r2;
    int *unaff_r14;

    *(u32 *)*unaff_r14 = in_r2;
    *(u32 *)(*unaff_r14 + 0x3c) = 0;
    ta_fifo_20f640(*unaff_r14, a1, a2, a3);
    uVar1 = ta_load_texture_params(*unaff_r14);
    return uVar1;
}

/*
 * move_pos_along_dir  0x8c235f44
 * moves position +0x40 of a0 (the object at 8c4c0cc0 when 0) by fr4 along its direction +0x4c
 * called by: Class_129a24_m1_019b68
 */
u32 move_pos_along_dir(int a0) {
    float in_fr4;

    if (a0 == 0) {
        a0 = g_8c4c0cc0;
    }
    *(float *)(a0 + 0x40) = in_fr4 * *(float *)(a0 + 0x4c) + *(float *)(a0 + 0x40);
    *(float *)(a0 + 0x44) = in_fr4 * *(float *)(a0 + 0x50) + *(float *)(a0 + 0x44);
    *(float *)(a0 + 0x48) = in_fr4 * *(float *)(a0 + 0x54) + *(float *)(a0 + 0x48);
    return 0x48;
}

/*
 * pvr_draw_235f84  0x8c235f84
 * area name: sits between pvr functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: Vec3_draw_0d5e2c, game_draw_0d82f0
 */
u8 *pvr_draw_235f84(double *a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    double *pdVar4;
    u32 uVar5;
    int iVar6;
    double in_dr0;
    float fVar7;
    float fVar8;
    double dVar9;
    u64 in_dr4;
    double dVar11;
    double dVar12;
    u32 in_fr7;
    double dVar13;
    u32 in_fr12;
    float fVar14;
    double dVar15;
    float fVar16;
    double in_xd0;
    double dVar17;
    double in_xd4;
    double in_xd14;
    bool bVar18;
    char cVar19;
    char cVar20;
    u32 in_stack_ffffffd8;
    float fVar10;

    cVar20 = '\0';
    cVar19 = '\0';
    fVar8 = (float)((u64)in_dr4 >> 0x20);
    iVar6 = 0;
    dVar15 = (double)CONCAT44(-(float)in_dr4, (float)in_dr4);
    if (-65535.0 <= fVar8) {
        frexpf_exponent(&stack0xffffffd8, r5, r6, r7, in_stack_ffffffd8);
        dVar12 = in_dr0;
        if (cVar20 == '\0') {
            dVar12 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), 0x47800000);
        }
        if (cVar19 == '\0') {
            dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) * SUB84(dVar12, 0), SUB84(dVar12, 0));
        } else {
            dVar12 = dVar12 * dVar12;
        }
        if (cVar19 == '\0') {
            uVar5 = (u32)(float)((u64)dVar12 >> 0x20);
        } else {
            uVar5 = (u32)dVar12;
        }
        uVar5 = uVar5 & 0xff00 | (int)(char)((char)in_stack_ffffffd8 + -1);
    } else {
        uVar5 = 0x8010;
    }
    pvr_wrap_20a238(uVar5);
    fVar14 = SUB84(dVar15, 0);
    if (cVar20 == '\0') {
        in_xd14 = (double)CONCAT44(fVar14, 0x43800000);
    }
    if (cVar19 == '\0') {
        bVar18 = fVar8 < (float)((u64)in_xd14 >> 0x20) / SUB84(in_xd14, 0);
    } else {
        bVar18 = (double)CONCAT44(in_fr12, fVar8) < in_xd14 / in_xd14;
    }
    fVar16 = (float)((u64)dVar15 >> 0x20);
    if (bVar18) {
        dVar12 = dVar15;
        if (cVar20 == '\0') {
            dVar12 = (double)CONCAT44(fVar16, in_fr7);
        }
    } else {
        dVar12 = in_xd4;
        if (cVar20 == '\0') {
            dVar12 = (double)CONCAT44(0x3f800000, in_fr7);
        }
    }
    puVar1 = &g_8c2360ac;
    if (cVar20 == '\0') {
        dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), fVar8);
        dVar11 = 33554439.9375;
    } else {
        dVar11 = 6.173528641380775e-78;
    }
    uVar5 = 0;
    fVar8 = (float)((u64)dVar12 >> 0x20);
    dVar13 = (double)CONCAT44(fVar8, -SUB84(dVar12, 0));
    pdVar4 = a0;
    do {
        uVar3 = (int)uVar5 >> 4;
        if ((int)uVar3 < 0) {
            iVar2 = 1 >> (~uVar3 & 0x1f) + 1;
        } else {
            iVar2 = 1 << (uVar3 & 0x1f);
        }
        dVar17 = dVar13;
        if (cVar20 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar8);
            dVar17 = in_xd0;
        }
        fVar7 = (float)((u64)dVar11 >> 0x20);
        if (cVar19 == '\0') {
            fVar10 = (float)(uVar5 & 0xf) + fVar7;
            fVar7 = ((float)iVar2 * fVar10) / fVar7;
            dVar9 = (double)CONCAT44(fVar10, fVar7);
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) / fVar7);
        } else {
            dVar9 = (double)(uVar5 & 0xf) + dVar11;
            dVar9 = (dVar9 * dVar9) / dVar11;
            in_dr0 = in_dr0 / dVar9;
        }
        if (cVar20 == '\0') {
            dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), SUB84(in_dr0, 0));
        }
        if (cVar19 == '\0') {
            bVar18 = -SUB84(dVar12, 0) < SUB84(dVar9, 0);
        } else {
            bVar18 = dVar13 < dVar9;
        }
        if (cVar20 == '\0') {
            *(int *)pdVar4 = SUB84(in_dr0, 0);
        } else {
            *pdVar4 = dVar17;
        }
        if (bVar18) {
            iVar6 = iVar6 + 1;
        }
        uVar5 = uVar5 + 1;
        pdVar4 = (double *)((int)pdVar4 + 4);
        in_xd0 = dVar17;
    } while ((int)uVar5 < 0x80);
    if (cVar19 == '\0') {
        bVar18 = fVar8 == fVar16;
    } else {
        bVar18 = dVar13 == dVar15;
    }
    if (bVar18) {
        puVar1 = (u8 *)(iVar6 * 4);
        if (cVar20 == '\0') {
            dVar12 = (double)CONCAT44(*(u32 *)(puVar1 + (int)a0), SUB84(dVar11, 0));
        } else {
            dVar12 = *(double *)(puVar1 + (int)a0);
        }
        iVar2 = 0;
        if (cVar19 == '\0') {
            dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) + fVar14, SUB84(dVar12, 0));
        } else {
            dVar12 = dVar12 + dVar15;
        }
        if (0 < iVar6) {
            do {
                dVar11 = in_xd4;
                if (cVar20 == '\0') {
                    dVar11 = (double)CONCAT44(SUB84(dVar12, 0), *(u32 *)a0);
                }
                iVar2 = iVar2 + 1;
                if (cVar19 == '\0') {
                    fVar8 = (SUB84(dVar11, 0) + fVar14) / (float)((u64)dVar12 >> 0x20);
                    dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - fVar8, fVar8);
                } else {
                    dVar11 = (dVar11 + dVar15) / dVar12;
                    dVar11 = dVar11 - dVar11;
                }
                if (cVar20 == '\0') {
                    *(int *)a0 = (int)((u64)dVar11 >> 0x20);
                } else {
                    *a0 = dVar11;
                }
                a0 = (double *)((int)a0 + 4);
            } while (iVar2 < iVar6);
        }
        while (iVar6 < 0x80) {
            iVar6 = iVar6 + 1;
            if (cVar20 == '\0') {
                *(u32 *)a0 = 0;
            } else {
                *a0 = (double)((u64)dVar12 & 0xffffffff);
            }
            a0 = (double *)((int)a0 + 4);
        }
    }
    return puVar1;
}

/*
 * gfxlib_fill_loop_2360b0  0x8c2360b0
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_uses_libgcc_movstr_i4_23340c, gfxlib_uses_noop_fr4_test_2336e8
 */
u32 gfxlib_fill_loop_2360b0(float *a0, float *a1, float *a2) {
    float *pfVar1;
    float *pfVar2;
    int iVar3;
    float *pfVar4;

    pfVar1 = a0 + 3;
    iVar3 = 1;
    *a1 = *a0;
    a1[1] = a0[1];
    a1[2] = a0[2];
    *a2 = *a0;
    a2[1] = a0[1];
    a2[2] = a0[2];
    pfVar2 = pfVar1;
    pfVar4 = pfVar1;
    do {
        if (a0[iVar3 * 3] < *a1) {
            *a1 = a0[iVar3 * 3];
        }
        if (a0[iVar3 * 3 + 1] < a1[1]) {
            a1[1] = a0[iVar3 * 3 + 1];
        }
        if (a0[iVar3 * 3 + 2] < a1[2]) {
            a1[2] = a0[iVar3 * 3 + 2];
        }
        if (*a2 < a0[iVar3 * 3]) {
            *a2 = a0[iVar3 * 3];
        }
        if (a2[1] < a0[iVar3 * 3 + 1]) {
            a2[1] = pfVar1[1];
        }
        iVar3 = iVar3 + 1;
        if (a2[2] < pfVar2[2]) {
            a2[2] = pfVar4[2];
        }
        pfVar2 = pfVar2 + 3;
        pfVar4 = pfVar4 + 3;
        pfVar1 = pfVar1 + 3;
    } while (iVar3 < 8);
    return 8;
}

/*
 * fpu_save_fr0_fr15  0x8c23617c
 * stores fr0..fr15 to a0[0..15]
 * called by: fpu_save_fr0_fr15_wrap
 */
u32 fpu_save_fr0_fr15(u32 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 in_fr1;
    u32 in_fr0;
    u32 in_fr3;
    u32 in_fr2;
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr7;
    u32 in_fr6;
    u32 in_fr9;
    u32 in_fr8;
    u32 in_fr11;
    u32 in_fr10;
    u32 in_fr13;
    u32 in_fr12;
    u32 in_fr15;
    u32 in_fr14;

    a0[0xf] = in_fr15;
    a0[0xe] = in_fr14;
    a0[0xd] = in_fr13;
    a0[0xc] = in_fr12;
    a0[0xb] = in_fr11;
    a0[10] = in_fr10;
    a0[9] = in_fr9;
    a0[8] = in_fr8;
    a0[7] = in_fr7;
    a0[6] = in_fr6;
    a0[5] = in_fr5;
    a0[4] = in_fr4;
    a0[3] = in_fr3;
    a0[2] = in_fr2;
    a0[1] = in_fr1;
    *a0 = in_fr0;
    return ain0;
}

/*
 * triangle_normal  0x8c2361a8
 * a3 = (a1 - a0) x (a2 - a0), not normalised
 * called by: gfxlib_uses_float_to_color_u8_24bdc8, gfxlib_uses_float_to_color_u8_24c6f0,
 * gfxlib_uses_float_to_color_u8_24df18, gfxlib_uses_float_to_color_u8_250144, vram_24d5a8, vram_250a54
 */
u32 triangle_normal(float *a0, float *a1, float *a2, float *a3) {
    *a3 = (a1[1] - a0[1]) * (a2[2] - a0[2]) - (a1[2] - a0[2]) * (a2[1] - a0[1]);
    a3[1] = (a1[2] - a0[2]) * (*a2 - *a0) - (*a1 - *a0) * (a2[2] - a0[2]);
    a3[2] = (*a1 - *a0) * (a2[1] - a0[1]) - (a1[1] - a0[1]) * (*a2 - *a0);
    return 8;
}

/*
 * sphere_to_aabb  0x8c23620c
 * a1 = centre - r and a2 = centre + r for the sphere a0 (x, y, z, r)
 * called by: gfxlib_uses_noop_fr4_test_2336e8
 */
u32 sphere_to_aabb(float *a0, float *a1, float *a2) {
    *a1 = *a0 - a0[3];
    a1[1] = a0[1] - a0[3];
    a1[2] = a0[2] - a0[3];
    *a2 = *a0 + a0[3];
    a2[1] = a0[1] + a0[3];
    a2[2] = a0[2] + a0[3];
    return 8;
}

/*
 * gfx_heap_init  0x8c236250
 * sets up the 0xa5-tagged free-block heap at 8c4ab210 with one free block a0 of a1 bytes
 * called by: game_init
 */
u32 gfx_heap_init(u16 *a0, u32 a1) {
    u16 uVar1;
    u16 *puVar2;
    u32 *puVar3;

    puVar2 = 0x8c4ab210;
    uVar1 = 0xa5;
    *(u32 *)(0x8c4ab210 + 2) = 0x24;
    puVar3 = 0x8c4ab234;
    *puVar2 = uVar1;
    puVar2[1] = 1;
    *(u16 **)(puVar2 + 6) = a0;
    *(u16 **)(puVar2 + 4) = a0;
    *(u32 *)(a0 + 2) = a1;
    *a0 = uVar1;
    a0[1] = 0;
    *(u16 **)(a0 + 6) = puVar2;
    *(u16 **)(a0 + 4) = puVar2;
    *puVar3 = *(u32 *)(puVar2 + 4);
    return 0;
}

/*
 * gfx_heap_alloc  0x8c236278
 * first-fit allocation of a0 bytes (32-byte aligned, plus a header) from the gfx_heap_init heap, splitting the free
 * block; 0 when none fits called by: tex_copy_to_alloc, tex_uses_gfx_heap_alloc_25a838
 */
u32 gfx_heap_alloc(int a0) {
    u16 uVar1;
    int iVar2;
    u16 *puVar3;
    u32 uVar4;

    uVar1 = 0xa5;
    uVar4 = a0 + 0x3fU & 0xffffffe0;
    iVar2 = g_8c4ab218;
    while (true) {
        if (iVar2 == 0x8c4ab210) {
            return 0;
        }
        if ((*(short *)(iVar2 + 2) == 0) && ((int)uVar4 <= *(int *)(iVar2 + 4)))
            break;
        iVar2 = *(int *)(iVar2 + 8);
    }
    if (0x40 < (int)(*(int *)(iVar2 + 4) - uVar4)) {
        puVar3 = (u16 *)(uVar4 + iVar2);
        *(u32 *)(puVar3 + 2) = *(int *)(iVar2 + 4) - uVar4;
        *puVar3 = uVar1;
        puVar3[1] = 0;
        *(u16 **)(*(int *)(iVar2 + 8) + 0xc) = puVar3;
        *(u32 *)(puVar3 + 4) = *(u32 *)(iVar2 + 8);
        *(u16 **)(iVar2 + 8) = puVar3;
        *(int *)(puVar3 + 6) = iVar2;
        *(u32 *)(iVar2 + 4) = uVar4;
    }
    *(u16 *)(iVar2 + 2) = 1;
    return iVar2 + 0x20;
}

/*
 * gfxlib_update_fields_2362de  0x8c2362de
 * area name: in the gfxlib library code range; behaviour name: conditionally writes members
 * called by: alt_entry_2565d8, ninja_uses_tex_is_palettized_2565c4
 */
u32 gfxlib_update_fields_2362de(int a0) {
    u32 in_r0;
    short *psVar1;

    psVar1 = (short *)(a0 + -0x20);
    if (*psVar1 == 0xa5) {
        if (*(short *)(*(int *)(a0 + -0x14) + 2) == 0) {
            *(u32 *)(*(int *)(a0 + -0x18) + 0xc) = *(u32 *)(a0 + -0x14);
            *(u32 *)(*(int *)(a0 + -0x14) + 8) = *(u32 *)(a0 + -0x18);
            *(int *)(*(int *)(a0 + -0x14) + 4) = *(int *)(*(int *)(a0 + -0x14) + 4) + *(int *)(a0 + -0x1c);
            psVar1 = *(short **)(a0 + -0x14);
        }
        if (*(short *)(*(int *)(psVar1 + 4) + 2) == 0) {
            *(short **)(*(int *)(*(int *)(psVar1 + 4) + 8) + 0xc) = psVar1;
            *(int *)(psVar1 + 2) = *(int *)(psVar1 + 2) + *(int *)(*(int *)(psVar1 + 4) + 4);
            *(u32 *)(psVar1 + 4) = *(u32 *)(*(int *)(psVar1 + 4) + 8);
        }
        in_r0 = 0;
        psVar1[1] = 0;
    }
    return in_r0;
}

/*
 * gfxlib_float_calc_23633c  0x8c23633c
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 * called by: game_init
 */
u32 gfxlib_float_calc_23633c(float *a0, u32 a1, u32 a2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar7 = g_8c278798;
    fVar6 = g_8c278794;
    fVar5 = g_8c278790;
    fVar4 = g_8c27878c;
    fVar3 = g_8c278788;
    fVar2 = g_8c278784;
    fVar1 = g_8c278780;
    g_8c4aa5a0 = 1;
    g_8c4aa4bc = a0;
    g_8c4aa4c0 = a0;
    g_8c4aa59c = a1;
    g_8c4ab148 = a2;
    a0[0xf] = g_8c27879c;
    a0[0xe] = fVar7;
    a0[0xd] = fVar6;
    a0[0xc] = fVar5;
    a0[0xb] = fVar4;
    a0[10] = fVar3;
    a0[9] = fVar2;
    a0[8] = fVar1;
    fVar7 = g_8c278778;
    fVar6 = g_8c278774;
    fVar5 = g_8c278770;
    fVar4 = g_8c27876c;
    fVar3 = g_8c278768;
    fVar2 = g_8c278760._4_4_;
    fVar1 = (float)g_8c278760;
    a0[7] = g_8c27877c;
    a0[6] = fVar7;
    a0[5] = fVar6;
    a0[4] = fVar5;
    a0[3] = fVar4;
    a0[2] = fVar3;
    a0[1] = fVar2;
    *a0 = fVar1;
    *a0 = -fVar1;
    a0[5] = -fVar6;
    return 0x14;
}

/*
 * gfxlib_float_calc_2363e8  0x8c2363e8
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 * called by: game_uses_matrix_push_0cc524, game_uses_touch_fields_30_3c_0ff928
 */
u32 gfxlib_float_calc_2363e8(u32 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u32 in_fr3;
    u32 in_fr5;
    u32 in_fr7;
    u32 in_fr9;
    u32 in_fr11;

    a0[0x1d] = 0;
    a0[0x1c] = 0xbf800000;
    a0[0x1b] = 0;
    a0[0x1a] = 0;
    a0[0x19] = 0;
    a0[0x18] = 0;
    a0[0x17] = 0;
    a0[0x16] = 0;
    a0[0x15] = 0xbf800000;
    a0[0x14] = 0;
    a0[0x13] = 0;
    a0[0x12] = 0;
    a0[0x11] = 0;
    a0[0x10] = 0;
    uVar6 = g_8c27878c;
    uVar5 = g_8c278788;
    uVar4 = g_8c278784;
    uVar3 = g_8c278780;
    uVar2 = g_8c278760._4_4_;
    uVar1 = (u32)g_8c278760;
    a0[0xf] = in_fr7;
    a0[0xe] = uVar6;
    a0[0xd] = in_fr5;
    a0[0xc] = uVar5;
    a0[0xb] = in_fr3;
    a0[10] = uVar4;
    a0[9] = 0xbf800000;
    a0[8] = uVar3;
    uVar4 = g_8c27876c;
    uVar3 = g_8c278768;
    a0[7] = in_fr5;
    a0[6] = uVar4;
    a0[5] = in_fr7;
    a0[4] = uVar3;
    a0[3] = in_fr11;
    a0[2] = uVar2;
    a0[1] = in_fr9;
    *a0 = uVar1;
    return ain0;
}

/*
 * draw_state_save  0x8c236454
 * saves the TA polygon state (0x8c4aabbc +0x90..) into 0x8c4ab238
 * called by: alt_entry_21af36, alt_entry_21ba6a, alt_entry_21bbba, gfxlib_draw_218f56, gfxlib_draw_218f96,
 * gfxlib_draw_219a86, gfxlib_draw_219a9a, gfxlib_draw_21a7ce (+27 more)
 */
int draw_state_save(u32 a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 *puVar2;
    int *piVar3;
    u32 *puVar4;
    int iVar5;
    int iVar6;
    u32 uVar7;

    puVar4 = 0x8c4aa4f0;
    puVar2 = 0x8c4ab238;
    piVar1 = 0x8c4aabbc;
    iVar5 = (int)0x90;
    g_8c4ab238 = *(u32 *)(iVar5 + g_8c4aabbc);
    puVar2[1] = *(u32 *)(iVar5 + 4 + *piVar1);
    iVar6 = iVar5 + 0xc;
    puVar2[2] = *(u32 *)(iVar5 + 8 + *piVar1);
    piVar3 = 0x8c4aabdc;
    puVar2[3] = *(u32 *)(iVar6 + *piVar1);
    puVar2[4] = *(u32 *)*piVar3;
    puVar2[7] = *(u32 *)(*piVar3 + 4);
    uVar7 = (u32)0x4000;
    puVar2[8] = *(u32 *)(*piVar3 + 0xc);
    if ((*puVar4 & uVar7) == 0) {
        iVar6 = *(int *)(*piVar3 + 8);
        puVar2[5] = iVar6;
        puVar2[6] = *(u32 *)(*piVar3 + 0x10);
    } else {
        puVar2[5] = *(u32 *)(*piVar3 + 0x10);
        puVar2[6] = *(u32 *)(*piVar3 + 8);
    }
    return iVar6;
}

/*
 * draw_state_restore  0x8c2364b2
 * restores the TA polygon state saved by draw_state_save
 * called by: alt_entry_21af36, alt_entry_21ba6a, alt_entry_21bbba, gfxlib_draw_218f56, gfxlib_draw_218f96,
 * gfxlib_draw_219a86, gfxlib_draw_219a9a, gfxlib_draw_21a7ce (+27 more)
 */
int draw_state_restore(u32 a0) {
    int *piVar1;
    u32 *puVar2;
    int *piVar3;
    u32 *puVar4;
    int iVar5;

    puVar4 = 0x8c4aa4f0;
    puVar2 = 0x8c4ab238;
    piVar1 = 0x8c4aabbc;
    iVar5 = (int)0x90;
    *(u32 *)(iVar5 + g_8c4aabbc) = g_8c4ab238;
    *(u32 *)(iVar5 + 4 + *piVar1) = puVar2[1];
    *(u32 *)(iVar5 + 8 + *piVar1) = puVar2[2];
    piVar3 = 0x8c4aabdc;
    *(u32 *)(iVar5 + 0xc + *piVar1) = puVar2[3];
    *(u32 *)*piVar3 = puVar2[4];
    *(u32 *)(*piVar3 + 4) = puVar2[7];
    *(u32 *)(*piVar3 + 0xc) = puVar2[8];
    if ((*puVar4 & (int)0x4000) == 0) {
        *(u32 *)(*piVar3 + 8) = puVar2[5];
        *(u32 *)(*piVar3 + 0x10) = puVar2[6];
    } else {
        *(u32 *)(*piVar3 + 0x10) = puVar2[5];
        *(u32 *)(*piVar3 + 8) = puVar2[6];
    }
    return iVar5 + 0xc;
}

/*
 * ta_sq_write_header4_short  0x8c236510
 * three-word variant of ta_sq_write_header4
 * called by: gfxlib_draw_234b10, gfxlib_draw_234d68, gfxlib_draw_234fd0, gfxlib_draw_2351fc, gfxlib_draw_235bfc,
 * ta_fifo_2595aa
 */
u32 *ta_sq_write_header4_short(void) {
    u32 *puVar1;
    u32 uVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 *puVar5;
    u32 uVar6;

    uVar2 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar6 = 0x8c4ab238 [4];
    uVar4 = 0x3ffffff & uVar6;
    g_8c4ab25c = 0xfc000000 & uVar6;
    puVar3 = 0xff000038;
    puVar5 = (u32 *)(uVar4 | uVar2);
    uVar4 = uVar6 >> 0x18 & 0x1c;
    *0xff00003c = uVar4;
    uVar2 = 0x3efffff;
    *puVar3 = uVar4;
    puVar5[2] = puVar1[2] & uVar2 | 0x20080000;
    puVar5[1] = puVar1[1];
    *puVar5 = *puVar1;
    g_8c4ab260 = (int)(puVar1 + 4);
    return puVar5 + 8;
}

/*
 * ta_sq_write_header5_short  0x8c2365e2
 * three-word variant of ta_sq_write_header5
 * called by: gfxlib_draw_234b10, gfxlib_draw_234d68, gfxlib_draw_234fd0, gfxlib_draw_2351fc, gfxlib_draw_235bfc,
 * ta_fifo_2595aa
 */
u32 *ta_sq_write_header5_short(void) {
    u32 *puVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar6 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar5 = 0x8c4ab238 [5];
    uVar3 = 0x3ffffff & uVar5;
    g_8c4ab25c = 0xfc000000 & uVar5;
    puVar2 = 0xff000038;
    puVar4 = (u32 *)(uVar3 | uVar6);
    uVar6 = uVar5 >> 0x18 & 0x1c;
    *0xff00003c = uVar6;
    *puVar2 = uVar6;
    puVar4[2] = puVar1[2];
    puVar4[1] = puVar1[1];
    *puVar4 = *puVar1;
    g_8c4ab260 = (int)(puVar1 + 5);
    return puVar4 + 8;
}

/*
 * ta_sq_write_header4  0x8c23666c
 * writes the saved polygon header (0x8c4ab238) to the TA through store queue 0 (list word 4)
 * called by: gfxlib_draw_217f12, gfxlib_draw_21908e, gfxlib_draw_219ad0, gfxlib_draw_234bc0, gfxlib_draw_234c94,
 * gfxlib_draw_234d68, gfxlib_draw_234fd0, gfxlib_draw_235248 (+1 more)
 */
u32 *ta_sq_write_header4(void) {
    u32 *puVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar6 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar5 = 0x8c4ab238 [4];
    uVar3 = 0x3ffffff & uVar5;
    g_8c4ab25c = 0xfc000000 & uVar5;
    puVar2 = 0xff000038;
    puVar4 = (u32 *)(uVar3 | uVar6);
    uVar6 = uVar5 >> 0x18 & 0x1c;
    *0xff00003c = uVar6;
    *puVar2 = uVar6;
    uVar6 = 0x20080000;
    puVar4[3] = puVar1[3];
    puVar4[2] = puVar1[2] & 0x3efffff | uVar6;
    puVar4[1] = puVar1[1];
    *puVar4 = *puVar1;
    g_8c4ab260 = (int)(puVar1 + 4);
    return puVar4 + 8;
}

/*
 * ta_sq_write_header5  0x8c236718
 * same as ta_sq_write_header4 for list word 5
 * called by: gfxlib_draw_217f12, gfxlib_draw_21908e, gfxlib_draw_219ad0, gfxlib_draw_234bc0, gfxlib_draw_234c94,
 * gfxlib_draw_234d68, gfxlib_draw_234fd0, gfxlib_draw_235248 (+1 more)
 */
u32 *ta_sq_write_header5(void) {
    u32 *puVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar6 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar5 = 0x8c4ab238 [5];
    uVar3 = 0x3ffffff & uVar5;
    g_8c4ab25c = 0xfc000000 & uVar5;
    puVar2 = 0xff000038;
    puVar4 = (u32 *)(uVar3 | uVar6);
    uVar6 = uVar5 >> 0x18 & 0x1c;
    *0xff00003c = uVar6;
    *puVar2 = uVar6;
    puVar4[3] = puVar1[3];
    puVar4[2] = puVar1[2];
    puVar4[1] = puVar1[1];
    *puVar4 = *puVar1;
    g_8c4ab260 = (int)(puVar1 + 5);
    return puVar4 + 8;
}

/*
 * ta_sq_write_vertex_slot4  0x8c236940
 * writes one 32-byte TA block through the store queue (setting QACR0/1) from header slot 4 and the four words at a0
 */
u32 *ta_sq_write_vertex_slot4(u32 *a0) {
    u32 *puVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar6 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar5 = 0x8c4ab238 [4];
    uVar3 = 0x3ffffff & uVar5;
    g_8c4ab25c = 0xfc000000 & uVar5;
    puVar2 = 0xff000038;
    puVar4 = (u32 *)(uVar3 | uVar6);
    uVar6 = uVar5 >> 0x18 & 0x1c;
    *0xff00003c = uVar6;
    *puVar2 = uVar6;
    puVar4[7] = a0[3];
    puVar4[6] = a0[2];
    puVar4[5] = a0[1];
    puVar4[4] = *a0;
    puVar4[2] = puVar1[2] & 0x3efffff | 0x20080000;
    puVar4[1] = puVar1[1];
    *puVar4 = *puVar1;
    g_8c4ab260 = (int)(puVar1 + 4);
    return puVar4 + 8;
}

/*
 * ta_sq_write_vertex_slot5  0x8c236a2a
 * writes one 32-byte TA block through the store queue (setting QACR0/1) from header slot 5 and the four words at a0
 */
u32 *ta_sq_write_vertex_slot5(u32 *a0) {
    u32 *puVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar6 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar5 = 0x8c4ab238 [5];
    uVar3 = 0x3ffffff & uVar5;
    g_8c4ab25c = 0xfc000000 & uVar5;
    puVar2 = 0xff000038;
    puVar4 = (u32 *)(uVar3 | uVar6);
    uVar6 = uVar5 >> 0x18 & 0x1c;
    *0xff00003c = uVar6;
    *puVar2 = uVar6;
    puVar4[7] = a0[3];
    puVar4[6] = a0[2];
    puVar4[5] = a0[1];
    puVar4[4] = *a0;
    puVar4[2] = puVar1[2];
    puVar4[1] = puVar1[1];
    *puVar4 = *puVar1;
    g_8c4ab260 = (int)(puVar1 + 5);
    return puVar4 + 8;
}

/*
 * ta_init_fields_236b3c  0x8c236b3c
 * area name: sits between ta functions (same compilation unit); behaviour name: writes 7 members
 * called by: gfxlib_draw_21908e
 */
u32 *ta_init_fields_236b3c(u32 *a0) {
    u32 *puVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar6 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar5 = 0x8c4ab238 [4];
    uVar3 = 0x3ffffff & uVar5;
    g_8c4ab25c = 0xfc000000 & uVar5;
    puVar2 = 0xff000038;
    puVar4 = (u32 *)(uVar3 | uVar6);
    uVar6 = uVar5 >> 0x18 & 0x1c;
    *0xff00003c = uVar6;
    *puVar2 = uVar6;
    puVar4[7] = a0[3];
    puVar4[6] = a0[2];
    puVar4[5] = a0[1];
    puVar4[4] = *a0;
    puVar4[3] = puVar1[3];
    puVar4[2] = puVar1[2] & 0x3efffff | 0x20080000;
    puVar4[1] = puVar1[1];
    *puVar4 = *puVar1;
    g_8c4ab260 = (int)(puVar1 + 4);
    return puVar4 + 8;
}

/*
 * ta_init_fields_236c38  0x8c236c38
 * area name: sits between ta functions (same compilation unit); behaviour name: writes 7 members
 * called by: gfxlib_draw_21908e
 */
u32 *ta_init_fields_236c38(u32 *a0) {
    u32 *puVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar6 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar5 = 0x8c4ab238 [5];
    uVar3 = 0x3ffffff & uVar5;
    g_8c4ab25c = 0xfc000000 & uVar5;
    puVar2 = 0xff000038;
    puVar4 = (u32 *)(uVar3 | uVar6);
    uVar6 = uVar5 >> 0x18 & 0x1c;
    *0xff00003c = uVar6;
    *puVar2 = uVar6;
    puVar4[7] = a0[3];
    puVar4[6] = a0[2];
    puVar4[5] = a0[1];
    puVar4[4] = *a0;
    puVar4[3] = puVar1[3];
    puVar4[2] = puVar1[2];
    puVar4[1] = puVar1[1];
    *puVar4 = *puVar1;
    g_8c4ab260 = (int)(puVar1 + 5);
    return puVar4 + 8;
}

/*
 * ta_init_fields_236d20  0x8c236d20
 * area name: sits between ta functions (same compilation unit); behaviour name: writes 11 members
 * called by: gfxlib_draw_21908e
 */
u32 *ta_init_fields_236d20(u32 *a0, u32 *a1) {
    u32 *puVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar6 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar5 = 0x8c4ab238 [4];
    uVar3 = 0x3ffffff & uVar5;
    g_8c4ab25c = 0xfc000000 & uVar5;
    puVar2 = 0xff000038;
    puVar4 = (u32 *)(uVar3 | uVar6);
    uVar6 = uVar5 >> 0x18 & 0x1c;
    *0xff00003c = uVar6;
    *puVar2 = uVar6;
    uVar6 = 0x20080000;
    puVar4[3] = puVar1[3];
    puVar4[2] = puVar1[2] & 0x3efffff | uVar6;
    puVar4[1] = puVar1[1];
    *puVar4 = *puVar1;
    puVar4[0xf] = a1[3];
    puVar4[0xe] = a1[2];
    puVar4[0xd] = a1[1];
    puVar4[0xc] = *a1;
    puVar4[0xb] = a0[3];
    puVar4[10] = a0[2];
    puVar4[9] = a0[1];
    puVar4[8] = *a0;
    g_8c4ab260 = (int)(puVar1 + 4);
    return puVar4 + 0x10;
}

/*
 * ta_init_fields_236dd8  0x8c236dd8
 * area name: sits between ta functions (same compilation unit); behaviour name: writes 11 members
 * called by: gfxlib_draw_21908e
 */
u32 *ta_init_fields_236dd8(u32 *a0, u32 *a1) {
    u32 *puVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    u32 uVar6;

    uVar6 = 0xe0000000;
    puVar1 = 0x8c4ab238;
    uVar5 = 0x8c4ab238 [5];
    uVar3 = 0x3ffffff & uVar5;
    g_8c4ab25c = 0xfc000000 & uVar5;
    puVar2 = 0xff000038;
    puVar4 = (u32 *)(uVar3 | uVar6);
    uVar6 = uVar5 >> 0x18 & 0x1c;
    *0xff00003c = uVar6;
    *puVar2 = uVar6;
    puVar4[3] = puVar1[3];
    puVar4[2] = puVar1[2];
    puVar4[1] = puVar1[1];
    *puVar4 = *puVar1;
    puVar4[0xf] = a1[3];
    puVar4[0xe] = a1[2];
    puVar4[0xd] = a1[1];
    puVar4[0xc] = *a1;
    puVar4[0xb] = a0[3];
    puVar4[10] = a0[2];
    puVar4[9] = a0[1];
    puVar4[8] = *a0;
    g_8c4ab260 = (int)(puVar1 + 5);
    return puVar4 + 0x10;
}

/*
 * ta_set_list_addr  0x8c2370dc
 * writes the TA list address a0 (26 bits) with the flags in 0x8c4ab25c
 * called by: gfxlib_draw_217f12, gfxlib_draw_21908e, gfxlib_draw_219ad0, gfxlib_draw_234b10, gfxlib_draw_234bc0,
 * gfxlib_draw_234c94, gfxlib_draw_234d68, gfxlib_draw_234fd0 (+7 more)
 */
u32 ta_set_list_addr(u32 a0) {
    u32 uVar1;

    uVar1 = g_8c4ab25c;
    *(u32 *)*0x8c4ab260 = a0 & 0x3ffffff | uVar1;
    return uVar1;
}

/*
 * ta_fifo_237124  0x8c237124
 * called by: gfxlib_draw_217f12, gfxlib_draw_21908e, gfxlib_draw_219ad0, gfxlib_draw_234b10, gfxlib_draw_234bc0,
 * gfxlib_draw_234c94, gfxlib_draw_234d68, gfxlib_draw_234fd0 (+8 more)
 */
u32 ta_fifo_237124(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    u32 in_r0;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;

    puVar3 = 0x8c4aabd8;
    puVar2 = 0x8c4ab238;
    uVar5 = g_8c4ab238 & 0xfdffff00 | 0x20000ff & a0;
    uVar4 = 0x180000 & a0;
    uVar6 = 0x8c4ab238 [2] & 0xffe7ffff;
    puVar1 = 0x8c4ab238 + 1;
    if ((((int)0x400 & g_8c4aa4f0) == 0) &&
        ((in_r0 = (u32)0x1000, (g_8c4aa4f0 & in_r0) == 0 || ((0x2100000 & a0) != 0)))) {
        uVar5 = uVar5 & (int)(int)0xffffff7f;
    } else {
        uVar5 = uVar5 | (int)0x80;
    }
    g_8c4ab238 = uVar5;
    puVar2[1] = *puVar1;
    puVar2[2] = uVar6 | uVar4;
    *(u32 *)*puVar3 = a0;
    return in_r0;
}

/*
 * ta_calc_2371be  0x8c2371be
 * area name: sits between ta functions (same compilation unit); behaviour name: integer arithmetic on its arguments
 * called by: ninja_draw_25748c, ninja_draw_25754c, ninja_uses_ta_fifo_2536a8
 */
u32 ta_calc_2371be(int a0) {
    int *piVar1;

    piVar1 = *(int **)(*g_8c277b04 + a0 * 0xc + 8);
    if ((*piVar1 != g_8c277b10) || (g_8c277b14 != piVar1[1])) {
        g_8c277b10 = *piVar1;
        g_8c277b14 = piVar1[1];
        g_8c4ab240 = g_8c4ab240 & 0xffffffc0 | piVar1[2] & 0x3fU;
        g_8c4ab244 = piVar1[3];
        g_8c277b1c = (u32)piVar1[6] >> 0x10;
    }
    return g_8c277b1c;
}

/*
 * ta_select_texture_cached  0x8c23728c
 * makes texture entry a0 current, refreshing the TSP/texture words only when the entry or its address changed; returns
 * its height field called by: gfxlib_draw_234bc0
 */
u32 ta_select_texture_cached(int a0) {
    bool bVar1;
    int iVar2;

    bVar1 = false;
    if (a0 == g_8c277b10) {
        iVar2 = tex_entry_find(g_8c277b08, g_8c277b0c, a0);
        if (g_8c277b14 != *(int *)(iVar2 * 0x44 + g_8c277b08 + 4)) {
            bVar1 = true;
        }
    } else {
        bVar1 = true;
        tex_entry_find(g_8c277b08, g_8c277b0c, a0);
    }
    if (bVar1) {
        iVar2 = tex_entry_find(g_8c277b08, g_8c277b0c, a0);
        iVar2 = iVar2 * 0x44 + g_8c277b08;
        g_8c277b14 = *(int *)(iVar2 + 4);
        g_8c4ab240 = g_8c4ab240 & 0xffffffc0 | *(u32 *)(iVar2 + 8) & 0x3f;
        g_8c4ab244 = *(u32 *)(iVar2 + 0xc);
        g_8c277b1c = *(u32 *)(iVar2 + 0x18) >> 0x10;
        g_8c277b10 = a0;
    }
    return g_8c277b1c;
}

/*
 * alt_entry_23729c  0x8c23729c
 * probably an entry 16 bytes into 8c23728c: it reads registers that code sets before it
 */
u32 alt_entry_23729c(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int *ain1) {
    int iVar1;
    u32 *in_r3;
    int unaff_r11;
    int unaff_r14;

    if (unaff_r11 == *ain1) {
        iVar1 = tex_entry_find(g_8c277b08, *in_r3, unaff_r11);
        if (g_8c277b14 != *(int *)(iVar1 * 0x44 + g_8c277b08 + 4)) {
            unaff_r14 = 1;
        }
    } else {
        unaff_r14 = 1;
        tex_entry_find(g_8c277b08, *in_r3, unaff_r11);
    }
    if (unaff_r14 != 0) {
        iVar1 = tex_entry_find(g_8c277b08, g_8c277b0c, unaff_r11);
        iVar1 = iVar1 * 0x44 + g_8c277b08;
        g_8c277b14 = *(int *)(iVar1 + 4);
        g_8c4ab240 = g_8c4ab240 & 0xffffffc0 | *(u32 *)(iVar1 + 8) & 0x3f;
        g_8c4ab244 = *(u32 *)(iVar1 + 0xc);
        g_8c277b1c = *(u32 *)(iVar1 + 0x18) >> 0x10;
        g_8c277b10 = unaff_r11;
    }
    return g_8c277b1c;
}

/*
 * ta_calc_23732a  0x8c23732a
 * area name: sits between ta functions (same compilation unit); behaviour name: integer arithmetic on its arguments
 * called by: gfxlib_draw_234c94
 */
u32 ta_calc_23732a(int a0) {
    u32 *puVar1;
    int iVar2;

    iVar2 = a0 * 0x44;
    puVar1 = (u32 *)(g_8c277b08 + iVar2);
    g_8c277b10 = *puVar1;
    g_8c277b14 = puVar1[1];
    g_8c4ab240 = g_8c4ab240 & 0xffffffc0 | puVar1[2] & 0x3f;
    g_8c4ab244 = *(u32 *)(g_8c277b08 + iVar2 + 0xc);
    g_8c277b1c = *(u32 *)(iVar2 + g_8c277b08 + 0x18) >> 0x10;
    return g_8c277b1c;
}

/*
 * ta_update_fields_237370  0x8c237370
 * area name: sits between ta functions (same compilation unit); behaviour name: conditionally writes members
 * called by: ninja_uses_ta_fifo_2536a8
 */
u32 ta_update_fields_237370(u32 a0) {
    u32 in_r0;

    *(u32 *)(0x8c4ab238 + 8) = *(u32 *)(0x8c4ab238 + 8) & 0x3f800ff | a0 & 0xfc07ff00;
    return in_r0;
}

/*
 * gfxlib_calc_23752c  0x8c23752c
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: gfxlib_draw_217f12, gfxlib_draw_21908e
 */
u32 gfxlib_calc_23752c(u32 a0, u32 a1) {
    int *piVar1;

    piVar1 = *(int **)(*g_8c277b04 + (a1 & 0x1fff) * 0xc + 8);
    if ((*piVar1 != g_8c277b10) || (g_8c277b14 != piVar1[1])) {
        g_8c277b10 = *piVar1;
        g_8c277b14 = piVar1[1];
        g_8c4ab240 = g_8c4ab240 & 0xffffffc0 | piVar1[2] & 0x3fU;
        g_8c4ab244 = piVar1[3];
        g_8c277b1c = (u32)piVar1[6] >> 0x10;
    }
    g_8c4ab240 = g_8c4ab240 & 0xfff800ff | (a0 & 0xf000) << 3 | a0 & 0xf00 | (a1 & 0x2000) >> 1 | (a1 & 0x4000) >> 1;
    return g_8c277b1c;
}

/*
 * gfxlib_calc_2375ae  0x8c2375ae
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: gfxlib_calls_calc_21d7d4, gfxlib_draw_217f12, gfxlib_draw_21908e
 */
u32 *gfxlib_calc_2375ae(int a0, u32 a1) {
    u32 *puVar1;

    puVar1 = 0x8c4aa4f0;
    if ((g_8c4aa4f0 & 0x8000) != 0) {
        a0 = g_8c4aa53c;
    }
    *(u32 *)(0x8c4ab238 + 8) = *(u32 *)(0x8c4ab238 + 8) & 0x3ffffff | a0 << 0x12 & 0xfc000000;
    return puVar1;
}

/*
 * gfxlib_fill_loop_237630  0x8c237630
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_247df4, ninja_calls_fill_loop_253cfc
 */
u32 gfxlib_fill_loop_237630(void) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    float fVar5;

    g_8c4c11d0 = 0x40c00000;
    uVar1 = 0x80;
    g_8c4c11cc = 0x3f000000;
    g_8c4c11c8 = 0x3f000000;
    g_8c4c11c4 = 0x3f000000;
    g_8c4c11c0 = 0x3f800000;
    g_8c4c11bc = 0x3f000000;
    g_8c4c11b8 = 0x3f000000;
    g_8c4c11b4 = 0x3f000000;
    g_8c4c11b0 = 0x3f800000;
    g_8c4c11ac = 0;
    g_8c4c11a8 = 0;
    g_8c4c11a4 = 0;
    g_8c4c11a0 = 0x3f800000;
    if (g_8c4c1300 != 0) {
        piVar4 = (int *)(g_8c4c1300 * 4 + 0x8c4c1280);
        iVar3 = g_8c4c1300;
        do {
            piVar4 = piVar4 + -1;
            iVar2 = *(int *)(*piVar4 * 4 + 0x8c4c11e0);
            uVar1 = 0x74;
            if ((*(int *)(iVar2 + 0x124) == 0x88) || (*(int *)(iVar2 + 0x124) == 200)) {
                uVar1 = 0x80;
                fVar5 = *(float *)(iVar2 + 0x70) - *(float *)(iVar2 + 0x74);
                *(float *)(iVar2 + 0x80) = 1.0 / SQRT(fVar5 * fVar5);
            }
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    return uVar1;
}

/*
 * gfxlib_uses_memcpy_words_n_2376c4  0x8c2376c4
 * area name: in the gfxlib library code range; behaviour name: its main named callee is memcpy_words_n
 * called by: gfxlib_calls_fill_loop_247df4, ninja_calls_fill_loop_253cfc
 */
int gfxlib_uses_memcpy_words_n_2376c4(void) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    int *piVar6;

    uVar3 = 0x8c4c13a0;
    iVar2 = 0x8c4c11e0;
    uVar1 = 0x8c4c0ce0;
    iVar4 = (int)0x80;
    iVar5 = *(int *)(iVar4 + 0x8c4c1280);
    if (iVar5 != 0) {
        piVar6 = (int *)(iVar5 * 4 + 0x8c4c1280);
        do {
            piVar6 = piVar6 + -1;
            iVar4 = *(int *)(*piVar6 * 4 + iVar2);
            memcpy_words_n(uVar3, uVar1, 0x10);
            ninja_update_fields_255d6c(uVar3, iVar4);
            point_transform_or_copy(uVar3, iVar4 + 0x40, 0x90 + iVar4);
            iVar4 = njCalcVector_like(uVar3, iVar4 + 0x4c, 0x9c + iVar4);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
    }
    return iVar4;
}

/*
 * alt_entry_2376d8  0x8c2376d8
 * probably an entry 20 bytes into 8c2376c4: it reads registers that code sets before it
 */
u32 alt_entry_2376d8(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3, u32 ain0) {
    int in_r2;
    u32 ar6_00;
    int ar5_00;
    int unaff_r13;
    int unaff_r14;
    int *piVar1;
    u32 in_PR;

    if (unaff_r13 != 0) {
        piVar1 = (int *)(unaff_r14 * 4 + in_r2);
        do {
            piVar1 = piVar1 + -1;
            ar6_00 = 0x10;
            ar5_00 = *(int *)(*piVar1 * 4 + 0x8c4c11e0);
            memcpy_words_n(0x8c4c13a0, 0x8c4c0ce0, 0x10);
            ninja_update_fields_255d6c(0x8c4c13a0, ar5_00, ar6_00, a3, in_PR);
            point_transform_or_copy(0x8c4c13a0, ar5_00 + 0x40, ar5_00 + 0x90, a3, in_PR);
            ain0 = njCalcVector_like(0x8c4c13a0, ar5_00 + 0x4c, ar5_00 + 0x9c, a3, in_PR);
            unaff_r13 = unaff_r13 + -1;
        } while (unaff_r13 != 0);
    }
    return ain0;
}

/*
 * gfxlib_calc_237760  0x8c237760
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: gfxlib_calls_fill_loop_247df4, ninja_calls_fill_loop_253cfc
 */
u32 gfxlib_calc_237760(void) {
    u32 in_r0;

    g_8c4c1300 = 0;
    return in_r0;
}

/*
 * gfx_light_globals_reset  0x8c237770
 * resets the global light colours and parameters and clears the 32-entry light index list
 * called by: ninja_draw_2588f8
 */
u32 gfx_light_globals_reset(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 *puVar1;
    u32 uVar2;

    g_8c4c1260 = 0;
    g_8c4c11b0 = 0x3f800000;
    g_8c4c11b4 = 0x3f000000;
    g_8c4c11b8 = 0x3f000000;
    g_8c4c11bc = 0x3f000000;
    g_8c4c11c0 = 0x3f800000;
    g_8c4c11c4 = 0x3f000000;
    g_8c4c11c8 = 0x3f000000;
    g_8c4c11cc = 0x3f000000;
    g_8c4c11a0 = 0x3f800000;
    g_8c4c11a4 = 0;
    g_8c4c11a8 = 0;
    g_8c4c11ac = 0;
    g_8c4c11d0 = 0x40c00000;
    uVar2 = 0;
    g_8c4c1300 = 0;
    do {
        puVar1 = (u32 *)(uVar2 + 0x8c4c1280);
        uVar2 = uVar2 + 4;
        *puVar1 = 0;
    } while (uVar2 < 0x80);
    return 0x80;
}

/*
 * gfxlib_uses_array44_index_of_2377e4  0x8c2377e4
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: uses_array44_index_of
 * called by: CTexture_LoadFromCache
 */
u32 gfxlib_uses_array44_index_of_2377e4(void) {
    int iVar1;
    u32 a4;

    a4 = 0;
    while (true) {
        if (*(u32 *)(g_8c277b04 + 4) <= a4) {
            return 1;
        }
        iVar1 = gfxlib_uses_array44_index_of_2378a6(a4);
        if (iVar1 < 0)
            break;
        a4 = a4 + 1;
    }
    g_8c4aa6ac = a4;
    return 0xffffffff;
}

/*
 * gfxlib_uses_tex_entry_set_flags_23782c  0x8c23782c
 * area name: in the gfxlib library code range; behaviour name: its main named callee is tex_entry_set_flags
 * called by: alt_entry_2378ba, gfxlib_uses_array44_index_of_2378a6
 */
u32 gfxlib_uses_tex_entry_set_flags_23782c(u32 *a0) {
    u8 *puVar1;
    int iVar2;

    if ((a0[4] & 2) == 0) {
        iVar2 = tex_calls_test_25a914(0, a0 + 5);
        puVar1 = (&tex_is_palettized);
        if (iVar2 < 0) {
            *(short *)((int)a0 + 0x42) = -(short)iVar2;
            return 0xffffffff;
        }
        *(u16 *)((int)a0 + 0x42) = 0;
        iVar2 = (*(code *)puVar1)((u32)a0[6] >> 0x10 & 0xff00);
        puVar1 = (&tex_uses_tex_size_to_index_2571fe);
        if (iVar2 == 0) {
            *(short *)(a0 + 0x10) = *(short *)(a0 + 0x10) + 1;
            a0[4] = a0[4] | 2;
            (*(code *)puVar1)(a0);
        } else {
            tex_entry_set_flags(*a0, 2, a0[5]);
            a0[4] = a0[4] | 8;
        }
    } else {
        *(short *)(a0 + 0x10) = *(short *)(a0 + 0x10) + 1;
    }
    return 1;
}

/*
 * alt_entry_237830  0x8c237830
 * probably an entry 4 bytes into 8c23782c: it reads registers that code sets before it
 */
u32 alt_entry_237830(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *ar5_00;
    u32 *unaff_r14;
    u32 in_PR;

    if ((unaff_r14[4] & 2) == 0) {
        ar5_00 = unaff_r14 + 5;
        iVar1 = tex_calls_test_25a914(0, ar5_00, a2, a3);
        if (iVar1 < 0) {
            *(short *)((int)unaff_r14 + 0x42) = -(short)iVar1;
            return 0xffffffff;
        }
        *(u16 *)((int)unaff_r14 + 0x42) = 0;
        iVar1 = tex_is_palettized((u32)unaff_r14[6] >> 0x10 & 0xff00);
        if (iVar1 == 0) {
            *(short *)(unaff_r14 + 0x10) = *(short *)(unaff_r14 + 0x10) + 1;
            unaff_r14[4] = unaff_r14[4] | 2;
            tex_uses_tex_size_to_index_2571fe(unaff_r14);
        } else {
            tex_entry_set_flags(*unaff_r14, 2, unaff_r14[5], a3, in_PR);
            unaff_r14[4] = unaff_r14[4] | 8;
        }
    } else {
        *(short *)(unaff_r14 + 0x10) = *(short *)(unaff_r14 + 0x10) + 1;
    }
    return 1;
}

/*
 * gfxlib_uses_array44_index_of_2378a6  0x8c2378a6
 * area name: in the gfxlib library code range; behaviour name: its main named callee is array44_index_of
 * called by: gfxlib_uses_array44_index_of_2377e4
 */
int gfxlib_uses_array44_index_of_2378a6(int a0) {
    int ain0;
    int iVar1;
    u32 ar6_00;

    ar6_00 = *(u32 *)(*g_8c277b04 + a0 * 0xc + 8);
    iVar1 = g_8c277b08;
    ain0 = array44_index_of(g_8c277b08, g_8c277b0c, ar6_00);
    tex_error_reset();
    if (ain0 < 0) {
        g_8c4aa6b4 = 1;
        iVar1 = -1;
        g_8c4aa6ac = a0;
    } else {
        iVar1 = gfxlib_uses_tex_entry_set_flags_23782c(ain0 * 0x44 + g_8c277b08);
        if (iVar1 < 0) {
            g_8c4aa6ac = a0;
        }
    }
    return iVar1;
}

/*
 * alt_entry_2378ba  0x8c2378ba
 * probably an entry 20 bytes into 8c2378a6: it reads registers that code sets before it
 */
int alt_entry_2378ba(void) {
    int iVar1;
    int iVar2;
    int in_r2;
    u32 *in_r3;
    u32 ar6_00;
    u32 unaff_r14;

    ar6_00 = *(u32 *)(*(int *)*in_r3 + in_r2 + 8);
    iVar2 = g_8c277b08;
    iVar1 = array44_index_of(g_8c277b08, g_8c277b0c, ar6_00);
    tex_error_reset();
    if (iVar1 < 0) {
        g_8c4aa6b4 = 1;
        iVar2 = -1;
        g_8c4aa6ac = unaff_r14;
    } else {
        iVar2 = gfxlib_uses_tex_entry_set_flags_23782c(iVar1 * 0x44 + g_8c277b08);
        if (iVar2 < 0) {
            g_8c4aa6ac = unaff_r14;
        }
    }
    return iVar2;
}

/*
 * gfxlib_uses_tex_entry_alloc_23793c  0x8c23793c
 * area name: in the gfxlib library code range; behaviour name: its main named callee is tex_entry_alloc
 * called by: njLoadTexture
 */
u32 gfxlib_uses_tex_entry_alloc_23793c(int *a0, int a1, u32 unused_a2, u32 a3) {
    int *ar5_00;
    int iVar1;
    u32 uVar2;
    int *ar6_00;
    int *piVar3;
    int *ar4_00;
    int iVar4;
    u8 *puVar5;
    int *piVar6;
    int **ar5_01;
    int ar5_02;
    int ar5_03;
    u8 *ar6_01;
    int *piVar7;
    u32 ar6_02;
    u32 ar6_03;
    u32 uVar8;
    u32 uVar9;
    u32 *ar4_01;
    u32 *ar5_04;
    u8 auStack_16c[4];
    u8 auStack_168[48];
    int iStack_138;
    u32 uStack_134;
    int *piStack_130;
    int iStack_12c;
    int iStack_128;
    int iStack_124;
    int aiStack_120[56];
    int *piStack_3c;
    int iStack_38;
    int iStack_34;
    u8 auStack_30[4];
    int iStack_2c;
    u32 uStack_28;
    u16 uStack_24;
    u16 uStack_22;
    int iStack_20;

    switch ((*(u32 *)(a1 * 0xc + *a0 + 4) & 0x40000000) != 0) {
    case false:
        iStack_12c = 0;
        uStack_134 = 0xffffffff;
        piVar3 = (int *)(a1 * 0xc + *a0);
        piVar7 = piVar3 + 2;
        if (((piVar3[1] & 0x10000U) != 0) && (a1 != 0)) {
            iVar1 = *a0;
            uStack_134 = (u32)piVar3[2] >> 0x1a;
            iStack_124 = tex_entry_find(g_8c277b08, g_8c277b0c, piStack_130);
            if ((*(u32 *)(iStack_124 * 0x44 + g_8c277b08 + 0x10) & 1) == 0) {
                uVar8 = 2;
            } else {
                uVar8 = 3;
            }
            iVar1 = (a1 + -1) * 0xc + iVar1 + 0x1c;
            tex_entry_alloc(piVar7, iVar1, piStack_130, uVar8, uStack_134);
            *(u16 *)(*piVar7 + 0x42) = 0;
            tex_uses_tex_size_to_index_2571fe(*piVar7);
            return 1;
        }
        ar6_01 = &g_8c26d960;
        iVar1 = *piVar3;
        filename_add_ext_if_missing(aiStack_120, iVar1, &g_8c26d960, a3);
        piVar6 = g_8c277b0c;
        if ((*(u32 *)(a1 * 0xc + *a0 + 4) & 0x800000) == 0) {
            if ((*(u32 *)(a1 * 0xc + *a0 + 4) & 0x1000000) == 0) {
                iStack_20 = nj_file_open(aiStack_120, iVar1, ar6_01, a3);
                if (iStack_20 < 0) {
                    memcpy_bytes(auStack_168, &g_8c4ab10c, 0x28);
                    tex_entry_alloc(piVar7, auStack_16c, piStack_130, 0, 0xffffffff);
                    *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                    *(u16 *)(*piVar7 + 0x40) = 0;
                    return 0xffffffff;
                }
                iStack_12c = tex_uses_nj_seek_25a216(&piStack_130, iVar1, ar6_01, a3);
                if (iStack_12c < 0) {
                    memcpy_bytes(auStack_168, &g_8c4ab10c, 0x28);
                    uVar8 = 0;
                    puVar5 = auStack_16c;
                    tex_entry_alloc(piVar7, puVar5, piStack_130, 0, 0xffffffff);
                    g_8c4aa6b4 = -iStack_12c;
                    ninja_close_file();
                    return 0xffffffff;
                }
                ar4_00 = (int *)g_8c277b08;
                piVar6 = g_8c277b0c;
                ar6_00 = piStack_130;
                iStack_124 = tex_entry_find(g_8c277b08, g_8c277b0c, piStack_130);
                if (iStack_12c == 1) {
                    uVar9 = (u32)piVar3[2] >> 0x1a;
                    uStack_134 = uVar9;
                    if (iStack_124 < 0) {
                        iStack_138 = 2;
                    } else {
                        ar4_00 = (int *)g_8c277b08;
                        piVar6 = g_8c277b0c;
                        ar6_00 = piStack_130;
                        iStack_128 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, piStack_130, uVar9);
                        a3 = uVar9;
                        if (iStack_128 < 0) {
                            iStack_138 = 0;
                        } else {
                            iStack_138 = 1;
                        }
                    }
                } else if (iStack_124 < 0) {
                    iStack_138 = 2;
                } else {
                    iStack_138 = 1;
                }
            } else {
                ar6_00 = (int *)(piVar3[2] & 0x3ffffff);
                uStack_134 = (u32)piVar3[2] >> 0x1a;
                piStack_130 = ar6_00;
                iStack_124 = tex_entry_find(g_8c277b08, g_8c277b0c, ar6_00);
                if (iStack_124 < 0) {
                    iStack_138 = 2;
                } else {
                    piVar6 = g_8c277b0c;
                    ar6_00 = piStack_130;
                    a3 = uStack_134;
                    iStack_128 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, piStack_130, uStack_134);
                    if (iStack_128 < 0) {
                        iStack_138 = 0;
                    } else {
                        iStack_138 = 1;
                    }
                }
                iStack_12c = 1;
                ar4_00 = aiStack_120;
                iStack_20 = nj_file_open(ar4_00, piVar6, ar6_00, a3);
                if (iStack_20 < 0) {
                    memcpy_bytes(auStack_168, &g_8c4ab10c, 0x28);
                    tex_entry_alloc(piVar7, auStack_16c, piStack_130, 0, uStack_134);
                    *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                    *(u16 *)(*piVar7 + 0x40) = 0;
                    return 0xffffffff;
                }
            }
        } else {
            ar6_00 = *(int **)(a1 * 0xc + *a0 + 8);
            piStack_130 = ar6_00;
            iStack_124 = tex_entry_find(g_8c277b08, g_8c277b0c, ar6_00);
            if (iStack_124 < 0) {
                iStack_138 = 2;
            } else {
                iStack_138 = 1;
            }
            ar4_00 = aiStack_120;
            iStack_20 = nj_file_open(ar4_00, piVar6, ar6_00, a3);
            if (iStack_20 < 0) {
                memcpy_bytes(auStack_168, &g_8c4ab10c, 0x28);
                tex_entry_alloc(piVar7, auStack_16c, piStack_130, 0, 0xffffffff);
                *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                *(u16 *)(*piVar7 + 0x40) = 0;
                return 0xffffffff;
            }
        }
        if (iStack_138 == 0) {
            iVar1 = iStack_124 * 0x44 + g_8c277b08;
            if ((*(u32 *)(iVar1 + 0x10) & 2) == 0) {
                uVar9 = piVar3[1] & 0xa0000000;
                if ((uVar9 == 0) || (uVar9 == 0x20000000)) {
                    iStack_20 = tex_calls_test_25a914(piVar3, iVar1 + 0x14, ar6_00, a3);
                    if (iStack_20 < 0) {
                        uVar8 = 1;
                        iVar1 = iVar1 + 0x14;
                        piVar3 = piVar7;
                        piVar6 = piStack_130;
                        tex_entry_alloc(piVar7, iVar1, piStack_130, 1, uStack_134);
                        *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                        g_8c4aa6b0 = piStack_130;
                        g_8c4aa6ac = a1;
                        ninja_close_file();
                        return 0xffffffff;
                    }
                    a3 = 1;
                    tex_entry_alloc(piVar7, iVar1 + 0x14, piStack_130, 1, uStack_134);
                    piVar6 = (int *)0x2;
                    *(u16 *)(*piVar7 + 0x42) = 0;
                    ar6_00 = *(int **)(*piVar7 + 0x14);
                    ar4_00 = piStack_130;
                    tex_entry_set_flags(piStack_130, 2, ar6_00, a3, 0x40);
                    *(u32 *)(iVar1 + 0x10) = *(u32 *)(iVar1 + 0x10) | 8;
                } else if (uVar9 == 0x80000000) {
                    a3 = 1;
                    piVar6 = (int *)(iVar1 + 0x14);
                    ar4_00 = piVar7;
                    ar6_00 = piStack_130;
                    tex_entry_alloc(piVar7, piVar6, piStack_130, 1, uStack_134);
                    *(u16 *)(*piVar7 + 0x42) = 0;
                }
            } else {
                uVar9 = piVar3[1] & 0xa0000000;
                if (uVar9 == 0) {
                    a3 = *(u32 *)(iVar1 + 0x10);
                    piVar6 = (int *)(iVar1 + 0x14);
                    ar6_00 = piStack_130;
                    tex_entry_alloc(piVar7, piVar6, piStack_130, a3, uStack_134);
                    *(u16 *)(*piVar7 + 0x40) = *(u16 *)(iVar1 + 0x40);
                    *(u16 *)(*piVar7 + 0x42) = 0;
                    ar4_00 = piStack_130;
                    tex_entry_addref(piStack_130, piVar6, ar6_00, a3, 0x40);
                } else if (uVar9 == 0x80000000) {
                    if ((*(u32 *)(iVar1 + 0x10) & 1) == 0) {
                        iStack_20 = tex_uses_gfx_heap_alloc_25a838(piVar3, iVar1 + 0x14, ar6_00, a3);
                        if (iStack_20 < 0) {
                            uVar8 = 2;
                            iVar4 = iVar1 + 0x14;
                            piVar3 = piVar7;
                            piVar6 = piStack_130;
                            tex_entry_alloc(piVar7, iVar4, piStack_130, 2, uStack_134);
                            *(u16 *)(*piVar7 + 0x40) = *(u16 *)(iVar1 + 0x40);
                            *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                            g_8c4aa6b0 = piStack_130;
                            g_8c4aa6ac = a1;
                            ninja_close_file();
                            return 0xffffffff;
                        }
                        a3 = 2;
                        tex_entry_alloc(piVar7, iVar1 + 0x14, piStack_130, 2, uStack_134);
                        piVar6 = (int *)0x1;
                        *(u16 *)(*piVar7 + 0x40) = *(u16 *)(iVar1 + 0x40);
                        *(u16 *)(*piVar7 + 0x42) = 0;
                        ar6_00 = *(int **)(*piVar7 + 0x14);
                        ar4_00 = piStack_130;
                        tex_entry_set_flags(piStack_130, 1, ar6_00, a3, 0x40);
                    } else {
                        a3 = 3;
                        piVar6 = (int *)(iVar1 + 0x14);
                        ar4_00 = piVar7;
                        ar6_00 = piStack_130;
                        tex_entry_alloc(piVar7, piVar6, piStack_130, 3, uStack_134);
                        *(u16 *)(*piVar7 + 0x40) = *(u16 *)(iVar1 + 0x40);
                        *(u16 *)(*piVar7 + 0x42) = 0;
                    }
                } else if (uVar9 == 0x20000000) {
                    if ((*(u32 *)(iVar1 + 0x10) & 1) == 0) {
                        iStack_20 = tex_uses_gfx_heap_alloc_25a838(piVar3, iVar1 + 0x14, ar6_00, a3);
                        if (iStack_20 < 0) {
                            uVar8 = 2;
                            iVar4 = iVar1 + 0x14;
                            piVar3 = piVar7;
                            piVar6 = piStack_130;
                            tex_entry_alloc(piVar7, iVar4, piStack_130, 2, uStack_134);
                            *(u16 *)(*piVar7 + 0x40) = *(u16 *)(iVar1 + 0x40);
                            *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                            g_8c4aa6b0 = piStack_130;
                            g_8c4aa6ac = a1;
                            ninja_close_file();
                            return 0xffffffff;
                        }
                        a3 = 2;
                        tex_entry_alloc(piVar7, iVar1 + 0x14, piStack_130, 2, uStack_134);
                        piVar6 = (int *)0x3;
                        *(u16 *)(*piVar7 + 0x40) = *(u16 *)(iVar1 + 0x40);
                        *(u16 *)(*piVar7 + 0x42) = 0;
                        ar6_00 = *(int **)(*piVar7 + 0x14);
                        ar4_00 = piStack_130;
                        tex_entry_set_flags(piStack_130, 3, ar6_00, a3, 0x40);
                    } else {
                        a3 = 3;
                        piVar6 = (int *)(iVar1 + 0x14);
                        ar6_00 = piStack_130;
                        tex_entry_alloc(piVar7, piVar6, piStack_130, 3, uStack_134);
                        *(u16 *)(*piVar7 + 0x40) = *(u16 *)(iVar1 + 0x40);
                        *(u16 *)(*piVar7 + 0x42) = 0;
                        ar4_00 = piStack_130;
                        tex_entry_addref(piStack_130, piVar6, ar6_00, a3, 0x40);
                    }
                }
            }
            ninja_close_file();
            return 1;
        }
        if (iStack_138 != 1) {
            if (iStack_138 != 2) {
                return 1;
            }
            ar4_00 = piStack_130;
            ar5_00 = (int *)tex_entry_next_free();
            uVar9 = piVar3[1] & 0xa0000000;
            if (uVar9 == 0) {
                iStack_20 = tex_uses_dcache_writeback_range_25a770(piVar3, ar5_00, ar6_00, a3);
                if (iStack_20 < 0) {
                    uVar8 = 0;
                    piVar3 = piVar7;
                    piVar6 = piStack_130;
                    tex_entry_alloc(piVar7, ar5_00, piStack_130, 0, uStack_134);
                    *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                    *(u16 *)(*piVar7 + 0x40) = 0;
                    g_8c4aa6b0 = piStack_130;
                    g_8c4aa6ac = a1;
                    ninja_close_file();
                    return 0xffffffff;
                }
                a3 = 2;
                ar4_00 = piVar7;
                ar6_00 = piStack_130;
                tex_entry_alloc(piVar7, ar5_00, piStack_130, 2, uStack_134);
                *(u16 *)(*piVar7 + 0x42) = 0;
                piVar6 = ar5_00;
                if (iStack_12c != 0) {
                    *(u32 *)(*piVar7 + 0x10) = *(u32 *)(*piVar7 + 0x10) | 8;
                }
            } else if (uVar9 == 0x80000000) {
                iStack_20 = tex_uses_gfx_heap_alloc_25a838(piVar3, ar5_00, ar6_00, a3);
                if (iStack_20 < 0) {
                    uVar8 = 0;
                    piVar3 = piVar7;
                    piVar6 = piStack_130;
                    tex_entry_alloc(piVar7, ar5_00, piStack_130, 0, uStack_134);
                    *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                    g_8c4aa6b0 = piStack_130;
                    g_8c4aa6ac = a1;
                    ninja_close_file();
                    return 0xffffffff;
                }
                a3 = 1;
                ar4_00 = piVar7;
                ar6_00 = piStack_130;
                tex_entry_alloc(piVar7, ar5_00, piStack_130, 1, uStack_134);
                *(u16 *)(*piVar7 + 0x42) = 0;
                piVar6 = ar5_00;
            } else if (uVar9 == 0x20000000) {
                iStack_20 = tex_uses_gfx_heap_alloc_25a838(piVar3, ar5_00, ar6_00, a3);
                if (iStack_20 < 0) {
                    uVar8 = 0;
                    puVar5 = auStack_16c;
                    piVar3 = piVar7;
                    piVar6 = piStack_130;
                    tex_entry_alloc(piVar7, puVar5, piStack_130, 0, uStack_134);
                    *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                    *(u16 *)(*piVar7 + 0x40) = 0;
                    g_8c4aa6b0 = piStack_130;
                    g_8c4aa6ac = a1;
                    ninja_close_file();
                    return 0xffffffff;
                }
                iStack_20 = tex_calls_test_25a914(piVar3, ar5_00, ar6_00, a3);
                if (iStack_20 < 0) {
                    uVar8 = 1;
                    piVar3 = piVar7;
                    piVar6 = piStack_130;
                    tex_entry_alloc(piVar7, ar5_00, piStack_130, 1, uStack_134);
                    *(short *)(*piVar7 + 0x42) = -(short)iStack_20;
                    g_8c4aa6b0 = piStack_130;
                    g_8c4aa6ac = a1;
                    ninja_close_file();
                    return 0xffffffff;
                }
                a3 = 3;
                ar4_00 = piVar7;
                ar6_00 = piStack_130;
                tex_entry_alloc(piVar7, ar5_00, piStack_130, 3, uStack_134);
                *(u16 *)(*piVar7 + 0x42) = 0;
                piVar6 = ar5_00;
                if (iStack_12c != 0) {
                    *(u32 *)(*piVar7 + 0x10) = *(u32 *)(*piVar7 + 0x10) | 8;
                }
            }
            goto LAB_8c23878e;
        }
        piVar7 = (int *)(iStack_124 * 0x44 + g_8c277b08);
        piVar3[2] = (int)piVar7;
        uVar9 = piVar3[1] & 0xa0000000;
        if (uVar9 == 0) {
            if ((piVar7[4] & 2U) == 0) {
                piVar6 = piVar7 + 5;
                iStack_20 = tex_calls_test_25a914(piVar3, piVar6, ar6_00, a3);
                if (iStack_20 < 0) {
                    *(short *)((int)piVar7 + 0x42) = -(short)iStack_20;
                    g_8c4aa6b0 = piStack_130;
                    g_8c4aa6ac = a1;
                    ninja_close_file();
                    return 0xffffffff;
                }
                *(u16 *)((int)piVar7 + 0x42) = 0;
                if (iStack_12c == 0) {
                    ar4_00 = piVar7;
                    tex_uses_tex_size_to_index_2571fe(piVar7);
                    piVar7[4] = piVar7[4] | 2;
                    *(short *)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
                } else {
                    piVar6 = (int *)0x2;
                    ar6_00 = (int *)piVar7[5];
                    ar4_00 = piStack_130;
                    tex_entry_set_flags(piStack_130, 2, ar6_00, a3, 0x40);
                    piVar7[4] = piVar7[4] | 8;
                }
                goto LAB_8c23878e;
            }
            if (iStack_12c == 0) {
                *(short *)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
                goto LAB_8c23878e;
            }
        LAB_8c238436:
            ar4_00 = piStack_130;
            tex_entry_addref(piStack_130, piVar6, ar6_00, a3, 0x40);
        } else {
            if (uVar9 == 0x80000000) {
                if ((piVar7[4] & 1U) != 0)
                    goto LAB_8c23878e;
                piVar6 = piVar7 + 5;
                iStack_20 = tex_uses_gfx_heap_alloc_25a838(piVar3, piVar6, ar6_00, a3);
                if (iStack_20 < 0) {
                    *(short *)((int)piVar7 + 0x42) = -(short)iStack_20;
                    g_8c4aa6b0 = piStack_130;
                    g_8c4aa6ac = a1;
                    ninja_close_file();
                    return 0xffffffff;
                }
                *(u16 *)((int)piVar7 + 0x42) = 0;
                if (iStack_12c == 0) {
                    piVar7[4] = piVar7[4] | 1;
                    ar4_00 = piVar3;
                    goto LAB_8c23878e;
                }
                ar6_00 = (int *)piVar7[5];
                piVar6 = (int *)0x1;
            } else {
                if (uVar9 != 0x20000000)
                    goto LAB_8c23878e;
                if ((piVar7[4] & 2U) == 0) {
                    piVar6 = piVar7 + 5;
                    iStack_20 = tex_calls_test_25a914(piVar3, piVar6, ar6_00, a3);
                    if (iStack_20 < 0) {
                        *(short *)((int)piVar7 + 0x42) = -(short)iStack_20;
                        g_8c4aa6b0 = piStack_130;
                        g_8c4aa6ac = a1;
                        ninja_close_file();
                        return 0xffffffff;
                    }
                    *(u16 *)((int)piVar7 + 0x42) = 0;
                    if (iStack_12c == 0) {
                        ar4_00 = piVar7;
                        tex_uses_tex_size_to_index_2571fe(piVar7);
                        piVar7[4] = piVar7[4] | 2;
                        *(u16 *)(piVar7 + 0x10) = 1;
                    } else {
                        piVar6 = (int *)0x2;
                        ar6_00 = (int *)piVar7[5];
                        ar4_00 = piStack_130;
                        tex_entry_set_flags(piStack_130, 2, ar6_00, a3, 0x40);
                        piVar7[4] = piVar7[4] | 8;
                    }
                    goto LAB_8c23878e;
                }
                if ((piVar7[4] & 1U) != 0) {
                    if (iStack_12c == 0) {
                        *(short *)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
                        goto LAB_8c23878e;
                    }
                    goto LAB_8c238436;
                }
                piVar6 = piVar7 + 5;
                iStack_20 = tex_uses_gfx_heap_alloc_25a838(piVar3, piVar6, ar6_00, a3);
                if (iStack_20 < 0) {
                    *(short *)((int)piVar7 + 0x42) = -(short)iStack_20;
                    g_8c4aa6b0 = piStack_130;
                    g_8c4aa6ac = a1;
                    ninja_close_file();
                    return 0xffffffff;
                }
                *(u16 *)((int)piVar7 + 0x42) = 0;
                if (iStack_12c == 0) {
                    piVar7[4] = piVar7[4] | 1;
                    *(short *)(piVar7 + 0x10) = (short)piVar7[0x10] + 1;
                    ar4_00 = piVar3;
                    goto LAB_8c23878e;
                }
                piVar6 = (int *)0x3;
                ar6_00 = (int *)piVar7[5];
            }
            ar4_00 = piStack_130;
            tex_entry_set_flags(piStack_130, piVar6, ar6_00, a3, 0x40);
        }
    LAB_8c23878e:
        ninja_close_file();
        return 1;
    }
    ar5_01 = &piStack_3c;
    ar4_01 = (u32 *)(*a0 + a1 * 0xc);
    uVar9 = 0xffffffff;
    piVar3 = ar4_01 + 2;
    iStack_34 = a1;
    if (((ar4_01[1] & 0x10000) != 0) && (a1 != 0)) {
        iVar4 = *a0;
        uVar9 = ar4_01[2];
        iVar1 = tex_entry_find(g_8c277b08, g_8c277b0c, piStack_3c);
        if ((*(u32 *)(iVar1 * 0x44 + g_8c277b08 + 0x10) & 1) == 0) {
            uVar8 = 2;
        } else {
            uVar8 = 3;
        }
        iVar1 = iVar4 + (a1 + -1) * 0xc + 0x1c;
        tex_entry_alloc(piVar3, iVar1, piStack_3c, uVar8, uVar9 >> 0x1a);
        *(u16 *)(*piVar3 + 0x42) = 0;
        tex_uses_tex_size_to_index_2571fe(*piVar3);
        goto LAB_8c238e44;
    }
    if ((ar4_01[1] & 0x800000) == 0) {
        if ((*(u32 *)(a1 * 0xc + *a0 + 4) & 0x1000000) != 0) {
            piStack_3c = (int *)(ar4_01[2] & 0x3ffffff);
            uVar9 = (u32)ar4_01[2] >> 0x1a;
            iStack_38 = tex_entry_find(g_8c277b08, g_8c277b0c, piStack_3c);
            ar5_04 = (u32 *)*ar4_01;
            piVar7 = (int *)*ar5_04;
            uVar2 = pvr_parse_header(&uStack_28, auStack_30, piVar7, a3);
            if (uVar2 != 0) {
                *ar5_04 = uVar2;
                ar5_04[4] = (u32)uStack_24;
                ar5_04[5] = (u32)uStack_22;
                ar5_04[1] = uStack_28 << 0x10;
            }
            if (iStack_38 < 0) {
                iVar1 = 2;
            } else {
                piVar7 = piStack_3c;
                a3 = uVar9;
                iVar1 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, piStack_3c, uVar9);
                if (iVar1 < 0) {
                    iVar1 = 0;
                } else {
                    iVar1 = 1;
                }
            }
            iVar4 = 1;
            goto LAB_8c238a34;
        }
        ar5_04 = (u32 *)*ar4_01;
        ar6_02 = *ar5_04;
        uVar2 = pvr_parse_header(&uStack_28, &piStack_3c, ar6_02, a3);
        if (uVar2 != 0) {
            *ar5_04 = uVar2;
            ar5_04[4] = (u32)uStack_24;
            ar5_04[5] = (u32)uStack_22;
            ar5_04[1] = uStack_28 << 0x10;
        }
        if (piStack_3c == (int *)0xffffffff) {
            while (piVar6 = g_8c277b0c, piVar7 = (int *)g_8c277b18,
                   iStack_38 = tex_entry_find(g_8c277b08, g_8c277b0c, g_8c277b18), iStack_38 != -1) {
                g_8c277b18 = g_8c277b18 - 1;
            }
            piStack_3c = (int *)g_8c277b18;
            iVar4 = tex_is_palettized(uStack_28 & 0xff00);
            if (iVar4 == 1) {
                uVar9 = (u32)ar4_01[2] >> 0x1a;
            }
        LAB_8c238a2e:
            iVar1 = 2;
            goto LAB_8c238a34;
        }
        iVar4 = tex_is_palettized(uStack_28 & 0xff00);
        piVar7 = piStack_3c;
        iStack_38 = tex_entry_find(g_8c277b08, g_8c277b0c, piStack_3c);
        if (iVar4 == 1) {
            uVar9 = (u32)ar4_01[2] >> 0x1a;
            if (iStack_38 < 0)
                goto LAB_8c238a2e;
            piVar7 = piStack_3c;
            a3 = uVar9;
            iVar1 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, piStack_3c, uVar9);
            if (-1 < iVar1)
                goto LAB_8c238a32;
            iVar1 = 0;
            goto LAB_8c238a34;
        }
        if (piStack_3c != (int *)0xffffffff) {
            if (iStack_38 < 0)
                goto LAB_8c238a2e;
        LAB_8c238a32:
            iVar1 = 1;
            goto LAB_8c238a34;
        }
        tex_entry_alloc(piVar3, ar5_04, 0xffffffff, 0, 0xffffffff);
        *(u16 *)(*piVar3 + 0x42) = 9;
        *(u16 *)(*piVar3 + 0x40) = 0;
        g_8c4aa6b4 = 9;
    LAB_8c238e20:
        uVar8 = 0xffffffff;
    } else {
        piStack_3c = (int *)ar4_01[2];
        ar5_04 = (u32 *)*ar4_01;
        uVar2 = pvr_parse_header(&uStack_28, auStack_30, *ar5_04, a3);
        if (uVar2 != 0) {
            *ar5_04 = uVar2;
            ar5_04[4] = (u32)uStack_24;
            ar5_04[5] = (u32)uStack_22;
            ar5_04[1] = uStack_28 << 0x10;
        }
        piVar7 = piStack_3c;
        iStack_38 = tex_entry_find(g_8c277b08, g_8c277b0c, piStack_3c);
        if (iStack_38 < 0) {
            iVar1 = 2;
        } else {
            iVar1 = 1;
        }
        iVar4 = 0;
    LAB_8c238a34:
        ar5_02 = iStack_38 * 0x44 + g_8c277b08;
        if (iVar1 == 0) {
            if ((*(u32 *)(ar5_02 + 0x10) & 2) == 0) {
                uVar2 = ar4_01[1] & 0xa0000000;
                if ((uVar2 != 0) && (uVar2 != 0x20000000)) {
                    if (uVar2 == 0x80000000) {
                        tex_entry_alloc(piVar3, ar5_02 + 0x14, piStack_3c, 1, uVar9);
                    LAB_8c238dc6:
                        *(u16 *)(*piVar3 + 0x42) = 0;
                    }
                    goto LAB_8c238e44;
                }
                iStack_2c = tex_calls_test_25a914(ar4_01, ar5_02 + 0x14, piVar7, a3);
                if (-1 < iStack_2c) {
                    a3 = 1;
                    tex_entry_alloc(piVar3, ar5_02 + 0x14, piStack_3c, 1, uVar9);
                    *(u16 *)(*piVar3 + 0x42) = 0;
                    goto LAB_8c238d18;
                }
                tex_entry_alloc(piVar3, ar5_02 + 0x14, piStack_3c, 1, uVar9);
            LAB_8c238e0a:
                *(short *)(*piVar3 + 0x42) = -(short)iStack_2c;
                g_8c4aa6ac = iStack_34;
                g_8c4aa6b0 = piStack_3c;
                goto LAB_8c238e20;
            }
            uVar2 = ar4_01[1] & 0xa0000000;
            if (uVar2 == 0) {
                a3 = *(u32 *)(ar5_02 + 0x10);
            LAB_8c238b9e:
                iVar1 = ar5_02 + 0x14;
                piVar7 = piStack_3c;
                tex_entry_alloc(piVar3, iVar1, piStack_3c, a3, uVar9);
                *(u16 *)(*piVar3 + 0x40) = *(u16 *)(ar5_02 + 0x40);
                uVar9 = 0x42;
                *(u16 *)(*piVar3 + 0x42) = 0;
            LAB_8c238cee:
                tex_entry_addref(piStack_3c, iVar1, piVar7, a3, uVar9);
            } else {
                if (uVar2 == 0x80000000) {
                    if ((*(u32 *)(ar5_02 + 0x10) & 1) != 0) {
                        tex_entry_alloc(piVar3, ar5_02 + 0x14, piStack_3c, 3, uVar9);
                        *(u16 *)(*piVar3 + 0x40) = *(u16 *)(ar5_02 + 0x40);
                        goto LAB_8c238dc6;
                    }
                    iStack_38 = tex_copy_to_alloc(ar4_01, ar5_02 + 0x14);
                    if (-1 < iStack_38) {
                        a3 = 2;
                        tex_entry_alloc(piVar3, ar5_02 + 0x14, piStack_3c, 2, uVar9);
                        *(u16 *)(*piVar3 + 0x40) = *(u16 *)(ar5_02 + 0x40);
                        *(u16 *)(*piVar3 + 0x42) = 0;
                        *(u32 *)(*piVar3 + 0x10) = *(u32 *)(*piVar3 + 0x10) & 0xfffffff7;
                    LAB_8c238c8e:
                        ar6_03 = *(u32 *)(ar5_02 + 0x14);
                        uVar8 = 1;
                        goto LAB_8c238cd8;
                    }
                    tex_entry_alloc(piVar3, ar5_02 + 0x14, piStack_3c, 2, uVar9);
                    *(u16 *)(*piVar3 + 0x40) = *(u16 *)(ar5_02 + 0x40);
                    *(short *)(*piVar3 + 0x42) = -(short)iStack_38;
                    *(u32 *)(*piVar3 + 0x10) = *(u32 *)(*piVar3 + 0x10) & 0xfffffff7;
                LAB_8c238d7e:
                    g_8c4aa6ac = iStack_34;
                    g_8c4aa6b0 = piStack_3c;
                    goto LAB_8c238e20;
                }
                if (uVar2 == 0x20000000) {
                    if ((*(u32 *)(ar5_02 + 0x10) & 1) != 0) {
                        a3 = 3;
                        goto LAB_8c238b9e;
                    }
                    iStack_2c = tex_copy_to_alloc(ar4_01, ar5_02 + 0x14);
                    if (iStack_2c < 0) {
                        tex_entry_alloc(piVar3, ar5_02 + 0x14, piStack_3c, 2, uVar9);
                        *(u16 *)(*piVar3 + 0x40) = *(u16 *)(ar5_02 + 0x40);
                        goto LAB_8c238e0a;
                    }
                    a3 = 2;
                    tex_entry_alloc(piVar3, ar5_02 + 0x14, piStack_3c, 2, uVar9);
                    *(u16 *)(*piVar3 + 0x40) = *(u16 *)(ar5_02 + 0x40);
                    *(u16 *)(*piVar3 + 0x42) = 0;
                LAB_8c238cd4:
                    ar6_03 = *(u32 *)(ar5_02 + 0x14);
                    uVar8 = 3;
                LAB_8c238cd8:
                    tex_entry_set_flags(piStack_3c, uVar8, ar6_03, a3, 0x42);
                }
            }
        } else if (iVar1 == 1) {
            ar4_01[2] = ar5_02;
            uVar9 = ar4_01[1] & 0xa0000000;
            if (uVar9 == 0) {
                uVar9 = *(u32 *)(ar5_02 + 0x10);
                if ((uVar9 & 2) == 0) {
                    ar5_03 = ar5_02 + 0x14;
                    iVar1 = tex_calls_test_25a914(ar4_01, ar5_03, piVar7, a3);
                    if (iVar1 < 0)
                        goto LAB_8c238d08;
                    *(u16 *)(ar5_02 + 0x42) = 0;
                    if (iVar4 != 0) {
                    LAB_8c238d18:
                        tex_entry_set_flags(piStack_3c, 2, *(u32 *)(ar5_02 + 0x14), a3, 0x42);
                        *(u32 *)(ar5_02 + 0x10) = *(u32 *)(ar5_02 + 0x10) | 8;
                        goto LAB_8c238e44;
                    }
                LAB_8c238d2a:
                    tex_uses_tex_size_to_index_2571fe(ar5_02);
                    *(u32 *)(ar5_02 + 0x10) = *(u32 *)(ar5_02 + 0x10) | 2;
                } else {
                joined_r0x8c238c46:
                    iVar1 = ar5_02;
                    if (iVar4 != 0)
                        goto LAB_8c238cee;
                }
            LAB_8c238d36:
                *(short *)(ar5_02 + 0x40) = *(short *)(ar5_02 + 0x40) + 1;
            } else if (uVar9 == 0x80000000) {
                if ((*(u32 *)(ar5_02 + 0x10) & 1) == 0) {
                    iVar1 = tex_copy_to_alloc(ar4_01, ar5_02 + 0x14);
                    if (iVar1 < 0)
                        goto LAB_8c238d08;
                    *(u16 *)(ar5_02 + 0x42) = 0;
                    if (iVar4 != 0)
                        goto LAB_8c238c8e;
                    *(u32 *)(ar5_02 + 0x10) = *(u32 *)(ar5_02 + 0x10) | 1;
                }
            } else if (uVar9 == 0x20000000) {
                if ((*(u32 *)(ar5_02 + 0x10) & 2) == 0) {
                    ar5_03 = ar5_02 + 0x14;
                    iVar1 = tex_calls_test_25a914(ar4_01, ar5_03, piVar7, a3);
                    if (-1 < iVar1) {
                        *(u16 *)(ar5_02 + 0x42) = 0;
                        if (iVar4 == 0)
                            goto LAB_8c238d2a;
                        goto LAB_8c238d18;
                    }
                } else {
                    uVar9 = *(u32 *)(ar5_02 + 0x10);
                    if ((uVar9 & 1) != 0)
                        goto joined_r0x8c238c46;
                    iVar1 = tex_copy_to_alloc(ar4_01, ar5_02 + 0x14);
                    if (-1 < iVar1) {
                        *(u16 *)(ar5_02 + 0x42) = 0;
                        if (iVar4 != 0)
                            goto LAB_8c238cd4;
                        *(u32 *)(ar5_02 + 0x10) = *(u32 *)(ar5_02 + 0x10) | 1;
                        goto LAB_8c238d36;
                    }
                }
            LAB_8c238d08:
                *(short *)(ar5_02 + 0x42) = -(short)iVar1;
                goto LAB_8c238d7e;
            }
        } else if (iVar1 == 2) {
            iStack_38 = tex_entry_next_free();
            uVar8 = 0x2c;
            memcpy_bytes(iStack_38, ar5_04, 0x2c);
            uVar2 = ar4_01[1] & 0xa0000000;
            if (uVar2 == 0) {
                iStack_2c = tex_calls_test_25a914(ar4_01, iStack_38, uVar8, a3);
                if (-1 < iStack_2c) {
                    tex_entry_alloc(piVar3, iStack_38, piStack_3c, 2, uVar9);
                    *(u16 *)(*piVar3 + 0x42) = 0;
                joined_r0x8c238da2:
                    if (iVar4 != 0) {
                        *(u32 *)(*piVar3 + 0x10) = *(u32 *)(*piVar3 + 0x10) | 8;
                    }
                    goto LAB_8c238e44;
                }
            } else if (uVar2 == 0x80000000) {
                iStack_2c = tex_copy_to_alloc(ar4_01, iStack_38);
                if (-1 < iStack_2c) {
                    tex_entry_alloc(piVar3, iStack_38, piStack_3c, 1, uVar9);
                    goto LAB_8c238dc6;
                }
            } else {
                if (uVar2 != 0x20000000)
                    goto LAB_8c238e44;
                iStack_2c = tex_copy_to_alloc(ar4_01, iStack_38);
                if (-1 < iStack_2c) {
                    iStack_2c = tex_calls_test_25a914(ar4_01, iStack_38, uVar8, a3);
                    if (iStack_2c < 0) {
                        tex_entry_alloc(piVar3, iStack_38, piStack_3c, 1, uVar9);
                        goto LAB_8c238e0a;
                    }
                    tex_entry_alloc(piVar3, iStack_38, piStack_3c, 3, uVar9);
                    *(u16 *)(*piVar3 + 0x42) = 0;
                    goto joined_r0x8c238da2;
                }
            }
            tex_entry_alloc(piVar3, iStack_38, piStack_3c, 0, uVar9);
            goto LAB_8c238e0a;
        }
    LAB_8c238e44:
        uVar8 = 1;
    }
    return uVar8;
}

/*
 * gfxlib_uses_tex_entry_alloc_237964  0x8c237964
 * area name: in the gfxlib library code range; behaviour name: its main named callee is tex_entry_alloc
 */
u32 gfxlib_uses_tex_entry_alloc_237964(int *a0, int a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int *ar5_00;
    int *piVar2;
    int *piVar3;
    int iVar4;
    u8 *puVar5;
    int *piVar6;
    u8 *ar6_00;
    u32 uVar7;
    u32 in_stack_fffffe90;
    u8 auStack_16c[4];
    u8 auStack_168[48];
    int iStack_138;
    u32 uStack_134;
    int *piStack_130;
    int iStack_12c;
    int iStack_128;
    int iStack_124;
    int aiStack_120[64];
    int iStack_20;
    int iStack_1c;
    int *piStack_18;
    int *piStack_14;
    int *piStack_10;
    int iStack_c;
    int *piStack_8;

    iStack_12c = 0;
    uStack_134 = 0xffffffff;
    piStack_18 = (int *)(a1 * 0xc + *a0);
    piStack_10 = piStack_18 + 2;
    iStack_c = a1;
    piStack_8 = a0;
    if (((piStack_18[1] & 0x10000U) != 0) && (a1 != 0)) {
        iStack_1c = (a1 + -1) * 0xc + *a0;
        piStack_14 = (int *)(iStack_1c + 8);
        uStack_134 = (u32)piStack_18[2] >> 0x1a;
        iStack_124 = tex_entry_find(g_8c277b08, g_8c277b0c, piStack_130);
        if ((g_8c277b08[iStack_124 * 0x11 + 4] & 1U) == 0) {
            uVar7 = 2;
        } else {
            uVar7 = 3;
        }
        iVar4 = (int)piStack_14 + 0x14;
        tex_entry_alloc(piStack_10, iVar4, piStack_130, uVar7, uStack_134);
        *(u16 *)(*piStack_10 + 0x42) = 0;
        tex_uses_tex_size_to_index_2571fe(*piStack_10);
        return 1;
    }
    ar6_00 = &g_8c26d960;
    iVar4 = *piStack_18;
    filename_add_ext_if_missing(aiStack_120, iVar4, &g_8c26d960, a3);
    piVar6 = g_8c277b0c;
    if ((*(u32 *)(iStack_c * 0xc + *piStack_8 + 4) & 0x800000) == 0) {
        if ((*(u32 *)(iStack_c * 0xc + *piStack_8 + 4) & 0x1000000) == 0) {
            iStack_20 = nj_file_open(aiStack_120, iVar4, ar6_00, a3);
            if (iStack_20 < 0) {
                memcpy_bytes(auStack_168, &g_8c4ab10c, 0x28);
                tex_entry_alloc(piStack_10, auStack_16c, piStack_130, 0, 0xffffffff);
                *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
                *(u16 *)(*piStack_10 + 0x40) = 0;
                return 0xffffffff;
            }
            iStack_12c = tex_uses_nj_seek_25a216(&piStack_130, iVar4, ar6_00, a3);
            if (iStack_12c < 0) {
                memcpy_bytes(auStack_168, &g_8c4ab10c, 0x28);
                uVar7 = 0;
                puVar5 = auStack_16c;
                piVar6 = piStack_10;
                tex_entry_alloc(piStack_10, puVar5, piStack_130, 0, 0xffffffff);
                g_8c4aa6b4 = -iStack_12c;
                ninja_close_file();
                return 0xffffffff;
            }
            piVar3 = g_8c277b08;
            piVar6 = g_8c277b0c;
            piVar2 = piStack_130;
            iStack_124 = tex_entry_find(g_8c277b08, g_8c277b0c, piStack_130);
            if (iStack_12c == 1) {
                uVar1 = (u32)piStack_18[2] >> 0x1a;
                uStack_134 = uVar1;
                if (iStack_124 < 0) {
                    iStack_138 = 2;
                } else {
                    piVar3 = g_8c277b08;
                    piVar6 = g_8c277b0c;
                    piVar2 = piStack_130;
                    iStack_128 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, piStack_130, uVar1);
                    a3 = uVar1;
                    if (iStack_128 < 0) {
                        iStack_138 = 0;
                    } else {
                        iStack_138 = 1;
                    }
                }
            } else if (iStack_124 < 0) {
                iStack_138 = 2;
            } else {
                iStack_138 = 1;
            }
        } else {
            piVar2 = (int *)(piStack_18[2] & 0x3ffffff);
            uStack_134 = (u32)piStack_18[2] >> 0x1a;
            piStack_130 = piVar2;
            iStack_124 = tex_entry_find(g_8c277b08, g_8c277b0c, piVar2);
            if (iStack_124 < 0) {
                iStack_138 = 2;
            } else {
                piVar6 = g_8c277b0c;
                piVar2 = piStack_130;
                a3 = uStack_134;
                iStack_128 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, piStack_130, uStack_134);
                if (iStack_128 < 0) {
                    iStack_138 = 0;
                } else {
                    iStack_138 = 1;
                }
            }
            iStack_12c = 1;
            piVar3 = aiStack_120;
            iStack_20 = nj_file_open(piVar3, piVar6, piVar2, a3);
            if (iStack_20 < 0) {
                memcpy_bytes(auStack_168, &g_8c4ab10c, 0x28);
                tex_entry_alloc(piStack_10, auStack_16c, piStack_130, 0, uStack_134);
                *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
                *(u16 *)(*piStack_10 + 0x40) = 0;
                return 0xffffffff;
            }
        }
    } else {
        piVar2 = *(int **)(iStack_c * 0xc + *piStack_8 + 8);
        piStack_130 = piVar2;
        iStack_124 = tex_entry_find(g_8c277b08, g_8c277b0c, piVar2);
        if (iStack_124 < 0) {
            iStack_138 = 2;
        } else {
            iStack_138 = 1;
        }
        piVar3 = aiStack_120;
        iStack_20 = nj_file_open(piVar3, piVar6, piVar2, a3);
        if (iStack_20 < 0) {
            memcpy_bytes(auStack_168, &g_8c4ab10c, 0x28);
            tex_entry_alloc(piStack_10, auStack_16c, piStack_130, 0, 0xffffffff);
            *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
            *(u16 *)(*piStack_10 + 0x40) = 0;
            return 0xffffffff;
        }
    }
    if (iStack_138 == 0) {
        piStack_14 = g_8c277b08 + iStack_124 * 0x11;
        if ((piStack_14[4] & 2U) == 0) {
            uVar1 = piStack_18[1] & 0xa0000000;
            if ((uVar1 == 0) || (uVar1 == 0x20000000)) {
                iStack_20 = tex_calls_test_25a914(piStack_18, piStack_14 + 5, piVar2, a3);
                if (iStack_20 < 0) {
                    uVar7 = 1;
                    piVar3 = piStack_14 + 5;
                    piVar6 = piStack_10;
                    piVar2 = piStack_130;
                    tex_entry_alloc(piStack_10, piVar3, piStack_130, 1, uStack_134);
                    *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
                    g_8c4aa6ac = iStack_c;
                    g_8c4aa6b0 = piStack_130;
                    ninja_close_file();
                    return 0xffffffff;
                }
                a3 = 1;
                tex_entry_alloc(piStack_10, piStack_14 + 5, piStack_130, 1, uStack_134);
                piVar6 = (int *)0x2;
                *(u16 *)(*piStack_10 + 0x42) = 0;
                piVar2 = *(int **)(*piStack_10 + 0x14);
                piVar3 = piStack_130;
                tex_entry_set_flags(piStack_130, 2, piVar2, a3, in_stack_fffffe90);
                piStack_14[4] = piStack_14[4] | 8;
            } else if (uVar1 == 0x80000000) {
                a3 = 1;
                piVar6 = piStack_14 + 5;
                piVar3 = piStack_10;
                piVar2 = piStack_130;
                tex_entry_alloc(piStack_10, piVar6, piStack_130, 1, uStack_134);
                *(u16 *)(*piStack_10 + 0x42) = 0;
            }
        } else {
            uVar1 = piStack_18[1] & 0xa0000000;
            if (uVar1 == 0) {
                a3 = piStack_14[4];
                piVar6 = piStack_14 + 5;
                piVar2 = piStack_130;
                tex_entry_alloc(piStack_10, piVar6, piStack_130, a3, uStack_134);
                *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
                *(u16 *)(*piStack_10 + 0x42) = 0;
                piVar3 = piStack_130;
                tex_entry_addref(piStack_130, piVar6, piVar2, a3, in_stack_fffffe90);
            } else if (uVar1 == 0x80000000) {
                if ((piStack_14[4] & 1U) == 0) {
                    iStack_20 = tex_uses_gfx_heap_alloc_25a838(piStack_18, piStack_14 + 5, piVar2, a3);
                    if (iStack_20 < 0) {
                        uVar7 = 2;
                        piVar3 = piStack_14 + 5;
                        piVar6 = piStack_10;
                        piVar2 = piStack_130;
                        tex_entry_alloc(piStack_10, piVar3, piStack_130, 2, uStack_134);
                        *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
                        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
                        g_8c4aa6ac = iStack_c;
                        g_8c4aa6b0 = piStack_130;
                        ninja_close_file();
                        return 0xffffffff;
                    }
                    a3 = 2;
                    tex_entry_alloc(piStack_10, piStack_14 + 5, piStack_130, 2, uStack_134);
                    piVar6 = (int *)0x1;
                    *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
                    *(u16 *)(*piStack_10 + 0x42) = 0;
                    piVar2 = *(int **)(*piStack_10 + 0x14);
                    piVar3 = piStack_130;
                    tex_entry_set_flags(piStack_130, 1, piVar2, a3, in_stack_fffffe90);
                } else {
                    a3 = 3;
                    piVar6 = piStack_14 + 5;
                    piVar3 = piStack_10;
                    piVar2 = piStack_130;
                    tex_entry_alloc(piStack_10, piVar6, piStack_130, 3, uStack_134);
                    *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
                    *(u16 *)(*piStack_10 + 0x42) = 0;
                }
            } else if (uVar1 == 0x20000000) {
                if ((piStack_14[4] & 1U) == 0) {
                    iStack_20 = tex_uses_gfx_heap_alloc_25a838(piStack_18, piStack_14 + 5, piVar2, a3);
                    if (iStack_20 < 0) {
                        uVar7 = 2;
                        piVar3 = piStack_14 + 5;
                        piVar6 = piStack_10;
                        piVar2 = piStack_130;
                        tex_entry_alloc(piStack_10, piVar3, piStack_130, 2, uStack_134);
                        *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
                        *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
                        g_8c4aa6ac = iStack_c;
                        g_8c4aa6b0 = piStack_130;
                        ninja_close_file();
                        return 0xffffffff;
                    }
                    a3 = 2;
                    tex_entry_alloc(piStack_10, piStack_14 + 5, piStack_130, 2, uStack_134);
                    piVar6 = (int *)0x3;
                    *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
                    *(u16 *)(*piStack_10 + 0x42) = 0;
                    piVar2 = *(int **)(*piStack_10 + 0x14);
                    piVar3 = piStack_130;
                    tex_entry_set_flags(piStack_130, 3, piVar2, a3, in_stack_fffffe90);
                } else {
                    a3 = 3;
                    piVar6 = piStack_14 + 5;
                    piVar2 = piStack_130;
                    tex_entry_alloc(piStack_10, piVar6, piStack_130, 3, uStack_134);
                    *(short *)(*piStack_10 + 0x40) = (short)piStack_14[0x10];
                    *(u16 *)(*piStack_10 + 0x42) = 0;
                    piVar3 = piStack_130;
                    tex_entry_addref(piStack_130, piVar6, piVar2, a3, in_stack_fffffe90);
                }
            }
        }
        ninja_close_file();
        return 1;
    }
    if (iStack_138 != 1) {
        if (iStack_138 != 2) {
            return 1;
        }
        piVar3 = piStack_130;
        ar5_00 = (int *)tex_entry_next_free();
        uVar1 = piStack_18[1] & 0xa0000000;
        if (uVar1 == 0) {
            piVar6 = ar5_00;
            iStack_20 = tex_uses_dcache_writeback_range_25a770(piStack_18, ar5_00, piVar2, a3);
            if (iStack_20 < 0) {
                uVar7 = 0;
                piVar2 = piStack_10;
                piVar3 = piStack_130;
                tex_entry_alloc(piStack_10, piVar6, piStack_130, 0, uStack_134);
                *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
                *(u16 *)(*piStack_10 + 0x40) = 0;
                g_8c4aa6ac = iStack_c;
                g_8c4aa6b0 = piStack_130;
                ninja_close_file();
                return 0xffffffff;
            }
            a3 = 2;
            piVar3 = piStack_10;
            piVar2 = piStack_130;
            tex_entry_alloc(piStack_10, piVar6, piStack_130, 2, uStack_134);
            *(u16 *)(*piStack_10 + 0x42) = 0;
            if (iStack_12c != 0) {
                *(u32 *)(*piStack_10 + 0x10) = *(u32 *)(*piStack_10 + 0x10) | 8;
            }
        } else if (uVar1 == 0x80000000) {
            piVar6 = ar5_00;
            iStack_20 = tex_uses_gfx_heap_alloc_25a838(piStack_18, ar5_00, piVar2, a3);
            if (iStack_20 < 0) {
                uVar7 = 0;
                piVar2 = piStack_10;
                piVar3 = piStack_130;
                tex_entry_alloc(piStack_10, piVar6, piStack_130, 0, uStack_134);
                *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
                g_8c4aa6ac = iStack_c;
                g_8c4aa6b0 = piStack_130;
                ninja_close_file();
                return 0xffffffff;
            }
            a3 = 1;
            piVar3 = piStack_10;
            piVar2 = piStack_130;
            tex_entry_alloc(piStack_10, piVar6, piStack_130, 1, uStack_134);
            *(u16 *)(*piStack_10 + 0x42) = 0;
        } else if (uVar1 == 0x20000000) {
            iStack_20 = tex_uses_gfx_heap_alloc_25a838(piStack_18, ar5_00, piVar2, a3);
            if (iStack_20 < 0) {
                uVar7 = 0;
                puVar5 = auStack_16c;
                piVar6 = piStack_10;
                piVar2 = piStack_130;
                tex_entry_alloc(piStack_10, puVar5, piStack_130, 0, uStack_134);
                *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
                *(u16 *)(*piStack_10 + 0x40) = 0;
                g_8c4aa6ac = iStack_c;
                g_8c4aa6b0 = piStack_130;
                ninja_close_file();
                return 0xffffffff;
            }
            piVar6 = ar5_00;
            iStack_20 = tex_calls_test_25a914(piStack_18, ar5_00, piVar2, a3);
            if (iStack_20 < 0) {
                uVar7 = 1;
                piVar2 = piStack_10;
                piVar3 = piStack_130;
                tex_entry_alloc(piStack_10, piVar6, piStack_130, 1, uStack_134);
                *(short *)(*piStack_10 + 0x42) = -(short)iStack_20;
                g_8c4aa6ac = iStack_c;
                g_8c4aa6b0 = piStack_130;
                ninja_close_file();
                return 0xffffffff;
            }
            a3 = 3;
            piVar3 = piStack_10;
            piVar2 = piStack_130;
            tex_entry_alloc(piStack_10, piVar6, piStack_130, 3, uStack_134);
            *(u16 *)(*piStack_10 + 0x42) = 0;
            if (iStack_12c != 0) {
                *(u32 *)(*piStack_10 + 0x10) = *(u32 *)(*piStack_10 + 0x10) | 8;
            }
        }
        goto LAB_8c23878e;
    }
    piStack_14 = g_8c277b08 + iStack_124 * 0x11;
    piStack_18[2] = (int)piStack_14;
    uVar1 = piStack_18[1] & 0xa0000000;
    if (uVar1 == 0) {
        if ((piStack_14[4] & 2U) == 0) {
            piVar6 = piStack_14 + 5;
            piVar3 = piStack_18;
            iStack_20 = tex_calls_test_25a914(piStack_18, piVar6, piVar2, a3);
            if (iStack_20 < 0) {
                *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
                g_8c4aa6ac = iStack_c;
                g_8c4aa6b0 = piStack_130;
                ninja_close_file();
                return 0xffffffff;
            }
            *(u16 *)((int)piStack_14 + 0x42) = 0;
            if (iStack_12c == 0) {
                piVar3 = piStack_14;
                tex_uses_tex_size_to_index_2571fe(piStack_14);
                piStack_14[4] = piStack_14[4] | 2;
                *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
            } else {
                piVar6 = (int *)0x2;
                piVar2 = (int *)piStack_14[5];
                piVar3 = piStack_130;
                tex_entry_set_flags(piStack_130, 2, piVar2, a3, in_stack_fffffe90);
                piStack_14[4] = piStack_14[4] | 8;
            }
            goto LAB_8c23878e;
        }
        if (iStack_12c == 0) {
            *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
            goto LAB_8c23878e;
        }
    LAB_8c238436:
        piVar3 = piStack_130;
        tex_entry_addref(piStack_130, piVar6, piVar2, a3, in_stack_fffffe90);
    } else {
        if (uVar1 == 0x80000000) {
            if ((piStack_14[4] & 1U) != 0)
                goto LAB_8c23878e;
            piVar6 = piStack_14 + 5;
            piVar3 = piStack_18;
            iStack_20 = tex_uses_gfx_heap_alloc_25a838(piStack_18, piVar6, piVar2, a3);
            if (iStack_20 < 0) {
                *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
                g_8c4aa6ac = iStack_c;
                g_8c4aa6b0 = piStack_130;
                ninja_close_file();
                return 0xffffffff;
            }
            *(u16 *)((int)piStack_14 + 0x42) = 0;
            if (iStack_12c == 0) {
                piStack_14[4] = piStack_14[4] | 1;
                goto LAB_8c23878e;
            }
            piVar2 = (int *)piStack_14[5];
            piVar6 = (int *)0x1;
        } else {
            if (uVar1 != 0x20000000)
                goto LAB_8c23878e;
            if ((piStack_14[4] & 2U) == 0) {
                piVar6 = piStack_14 + 5;
                piVar3 = piStack_18;
                iStack_20 = tex_calls_test_25a914(piStack_18, piVar6, piVar2, a3);
                if (iStack_20 < 0) {
                    *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
                    g_8c4aa6ac = iStack_c;
                    g_8c4aa6b0 = piStack_130;
                    ninja_close_file();
                    return 0xffffffff;
                }
                *(u16 *)((int)piStack_14 + 0x42) = 0;
                if (iStack_12c == 0) {
                    piVar3 = piStack_14;
                    tex_uses_tex_size_to_index_2571fe(piStack_14);
                    piStack_14[4] = piStack_14[4] | 2;
                    *(u16 *)(piStack_14 + 0x10) = 1;
                } else {
                    piVar6 = (int *)0x2;
                    piVar2 = (int *)piStack_14[5];
                    piVar3 = piStack_130;
                    tex_entry_set_flags(piStack_130, 2, piVar2, a3, in_stack_fffffe90);
                    piStack_14[4] = piStack_14[4] | 8;
                }
                goto LAB_8c23878e;
            }
            if ((piStack_14[4] & 1U) != 0) {
                if (iStack_12c == 0) {
                    *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
                    goto LAB_8c23878e;
                }
                goto LAB_8c238436;
            }
            piVar6 = piStack_14 + 5;
            piVar3 = piStack_18;
            iStack_20 = tex_uses_gfx_heap_alloc_25a838(piStack_18, piVar6, piVar2, a3);
            if (iStack_20 < 0) {
                *(short *)((int)piStack_14 + 0x42) = -(short)iStack_20;
                g_8c4aa6ac = iStack_c;
                g_8c4aa6b0 = piStack_130;
                ninja_close_file();
                return 0xffffffff;
            }
            *(u16 *)((int)piStack_14 + 0x42) = 0;
            if (iStack_12c == 0) {
                piStack_14[4] = piStack_14[4] | 1;
                *(short *)(piStack_14 + 0x10) = (short)piStack_14[0x10] + 1;
                goto LAB_8c23878e;
            }
            piVar6 = (int *)0x3;
            piVar2 = (int *)piStack_14[5];
        }
        piVar3 = piStack_130;
        tex_entry_set_flags(piStack_130, piVar6, piVar2, a3, in_stack_fffffe90);
    }
LAB_8c23878e:
    ninja_close_file();
    return 1;
}

/*
 * gfxlib_uses_tex_entry_alloc_2387a0  0x8c2387a0
 * area name: in the gfxlib library code range; behaviour name: its main named callee is tex_entry_alloc
 */
u32 gfxlib_uses_tex_entry_alloc_2387a0(int *a0, int a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    u8 *ar5_00;
    int ar5_01;
    int ar5_02;
    u32 uVar6;
    u32 uVar7;
    u32 *ar4_00;
    int *a4;
    u32 *a5;
    u32 in_stack_ffffffc4;
    int iStack_38;
    u8 auStack_30[4];
    int iStack_2c;
    u32 uStack_28;
    u16 uStack_24;
    u16 uStack_22;

    ar5_00 = &stack0xffffffc4;
    ar4_00 = (u32 *)(*a0 + a1 * 0xc);
    a4 = ar4_00 + 2;
    if (((ar4_00[1] & 0x10000) != 0) && (a1 != 0)) {
        iVar5 = *a0;
        iVar1 = tex_entry_find(g_8c277b08, g_8c277b0c, in_stack_ffffffc4);
        if ((*(u32 *)(iVar1 * 0x44 + g_8c277b08 + 0x10) & 1) == 0) {
            uVar7 = 2;
        } else {
            uVar7 = 3;
        }
        iVar1 = iVar5 + (a1 + -1) * 0xc + 0x1c;
        tex_entry_alloc(a4, iVar1, in_stack_ffffffc4, uVar7);
        *(u16 *)(*a4 + 0x42) = 0;
        tex_uses_tex_size_to_index_2571fe(*a4);
        goto LAB_8c238e44;
    }
    if ((ar4_00[1] & 0x800000) == 0) {
        if ((*(u32 *)(a1 * 0xc + *a0 + 4) & 0x1000000) != 0) {
            uVar4 = ar4_00[2] & 0x3ffffff;
            uVar2 = (u32)ar4_00[2] >> 0x1a;
            iStack_38 = tex_entry_find(g_8c277b08, g_8c277b0c, uVar4);
            a5 = (u32 *)*ar4_00;
            in_stack_ffffffc4 = *a5;
            uVar3 = pvr_parse_header(&uStack_28, auStack_30, in_stack_ffffffc4, a3);
            if (uVar3 != 0) {
                *a5 = uVar3;
                a5[4] = (u32)uStack_24;
                a5[5] = (u32)uStack_22;
                a5[1] = uStack_28 << 0x10;
            }
            uVar3 = uVar4;
            if (iStack_38 < 0) {
                iVar1 = 2;
                uVar2 = a3;
            } else {
                iVar1 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, uVar4, uVar2);
                in_stack_ffffffc4 = uVar4;
                if (iVar1 < 0) {
                    iVar1 = 0;
                } else {
                    iVar1 = 1;
                }
            }
            iVar5 = 1;
            a3 = uVar2;
            goto LAB_8c238a34;
        }
        a5 = (u32 *)*ar4_00;
        uVar4 = *a5;
        uVar2 = pvr_parse_header(&uStack_28, &stack0xffffffc4, uVar4, a3);
        if (uVar2 != 0) {
            *a5 = uVar2;
            a5[4] = (u32)uStack_24;
            a5[5] = (u32)uStack_22;
            a5[1] = uStack_28 << 0x10;
        }
        if (in_stack_ffffffc4 == 0xffffffff) {
            while (uVar7 = g_8c277b0c, in_stack_ffffffc4 = g_8c277b18,
                   iVar1 = tex_entry_find(g_8c277b08, g_8c277b0c, g_8c277b18), iVar1 != -1) {
                g_8c277b18 = g_8c277b18 - 1;
            }
            uVar3 = g_8c277b18;
            iVar5 = tex_is_palettized(uStack_28 & 0xff00);
            iStack_38 = -1;
        LAB_8c238a2e:
            iVar1 = 2;
            goto LAB_8c238a34;
        }
        iVar5 = tex_is_palettized(uStack_28 & 0xff00);
        uVar2 = in_stack_ffffffc4;
        iStack_38 = tex_entry_find(g_8c277b08, g_8c277b0c, in_stack_ffffffc4);
        uVar3 = uVar2;
        if (iVar5 == 1) {
            uVar4 = (u32)ar4_00[2] >> 0x1a;
            if (iStack_38 < 0)
                goto LAB_8c238a2e;
            iVar1 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, uVar2, uVar4);
            in_stack_ffffffc4 = uVar2;
            a3 = uVar4;
            if (-1 < iVar1)
                goto LAB_8c238a32;
            iVar1 = 0;
            goto LAB_8c238a34;
        }
        if (uVar2 != 0xffffffff) {
            if (iStack_38 < 0)
                goto LAB_8c238a2e;
        LAB_8c238a32:
            iVar1 = 1;
            goto LAB_8c238a34;
        }
        tex_entry_alloc(a4, a5, 0xffffffff, 0);
        *(u16 *)(*a4 + 0x42) = 9;
        *(u16 *)(*a4 + 0x40) = 0;
        g_8c4aa6b4 = 9;
    LAB_8c238e20:
        uVar7 = 0xffffffff;
    } else {
        in_stack_ffffffc4 = ar4_00[2];
        a5 = (u32 *)*ar4_00;
        uVar2 = pvr_parse_header(&uStack_28, auStack_30, *a5, a3);
        if (uVar2 != 0) {
            *a5 = uVar2;
            a5[4] = (u32)uStack_24;
            a5[5] = (u32)uStack_22;
            a5[1] = uStack_28 << 0x10;
        }
        uVar3 = in_stack_ffffffc4;
        iStack_38 = tex_entry_find(g_8c277b08, g_8c277b0c, in_stack_ffffffc4);
        if (iStack_38 < 0) {
            iVar1 = 2;
        } else {
            iVar1 = 1;
        }
        iVar5 = 0;
    LAB_8c238a34:
        ar5_01 = iStack_38 * 0x44 + g_8c277b08;
        uVar2 = uVar3;
        if (iVar1 == 0) {
            if ((*(u32 *)(ar5_01 + 0x10) & 2) == 0) {
                uVar2 = ar4_00[1] & 0xa0000000;
                if ((uVar2 != 0) && (uVar2 != 0x20000000)) {
                    if (uVar2 == 0x80000000) {
                        tex_entry_alloc(a4, ar5_01 + 0x14, uVar3, 1);
                    LAB_8c238dc6:
                        *(u16 *)(*a4 + 0x42) = 0;
                    }
                    goto LAB_8c238e44;
                }
                iStack_2c = tex_calls_test_25a914(ar4_00, ar5_01 + 0x14, in_stack_ffffffc4, a3);
                if (-1 < iStack_2c) {
                    a3 = 1;
                    tex_entry_alloc(a4, ar5_01 + 0x14, uVar3, 1);
                    *(u16 *)(*a4 + 0x42) = 0;
                    goto LAB_8c238d18;
                }
                tex_entry_alloc(a4, ar5_01 + 0x14, uVar3, 1);
                g_8c4aa6b0 = uVar3;
            LAB_8c238e0a:
                *(short *)(*a4 + 0x42) = -(short)iStack_2c;
                g_8c4aa6ac = a1;
                goto LAB_8c238e20;
            }
            uVar4 = ar4_00[1] & 0xa0000000;
            if (uVar4 == 0) {
                a3 = *(u32 *)(ar5_01 + 0x10);
            LAB_8c238b9e:
                iVar1 = ar5_01 + 0x14;
                tex_entry_alloc(a4, iVar1, uVar3, a3);
                *(u16 *)(*a4 + 0x40) = *(u16 *)(ar5_01 + 0x40);
                *(u16 *)(*a4 + 0x42) = 0;
                in_stack_ffffffc4 = uVar3;
            LAB_8c238cee:
                tex_entry_addref(uVar2, iVar1, in_stack_ffffffc4, a3, uVar2);
            } else {
                if (uVar4 == 0x80000000) {
                    if ((*(u32 *)(ar5_01 + 0x10) & 1) != 0) {
                        tex_entry_alloc(a4, ar5_01 + 0x14, uVar3, 3);
                        *(u16 *)(*a4 + 0x40) = *(u16 *)(ar5_01 + 0x40);
                        goto LAB_8c238dc6;
                    }
                    iVar1 = tex_copy_to_alloc(ar4_00, ar5_01 + 0x14);
                    if (iVar1 < 0) {
                        tex_entry_alloc(a4, ar5_01 + 0x14, uVar3, 2);
                        g_8c4aa6b0 = uVar3;
                        *(u16 *)(*a4 + 0x40) = *(u16 *)(ar5_01 + 0x40);
                        *(short *)(*a4 + 0x42) = -(short)iVar1;
                        *(u32 *)(*a4 + 0x10) = *(u32 *)(*a4 + 0x10) & 0xfffffff7;
                        g_8c4aa6ac = a1;
                        goto LAB_8c238e20;
                    }
                    a3 = 2;
                    tex_entry_alloc(a4, ar5_01 + 0x14, uVar3, 2);
                    *(u16 *)(*a4 + 0x40) = *(u16 *)(ar5_01 + 0x40);
                    *(u16 *)(*a4 + 0x42) = 0;
                    *(u32 *)(*a4 + 0x10) = *(u32 *)(*a4 + 0x10) & 0xfffffff7;
                LAB_8c238c8e:
                    uVar6 = *(u32 *)(ar5_01 + 0x14);
                    uVar7 = 1;
                } else {
                    if (uVar4 != 0x20000000)
                        goto LAB_8c238e44;
                    if ((*(u32 *)(ar5_01 + 0x10) & 1) != 0) {
                        a3 = 3;
                        goto LAB_8c238b9e;
                    }
                    iStack_2c = tex_copy_to_alloc(ar4_00, ar5_01 + 0x14);
                    if (iStack_2c < 0) {
                        tex_entry_alloc(a4, ar5_01 + 0x14, uVar3, 2);
                        *(u16 *)(*a4 + 0x40) = *(u16 *)(ar5_01 + 0x40);
                        g_8c4aa6b0 = uVar3;
                        goto LAB_8c238e0a;
                    }
                    a3 = 2;
                    tex_entry_alloc(a4, ar5_01 + 0x14, uVar3, 2);
                    *(u16 *)(*a4 + 0x40) = *(u16 *)(ar5_01 + 0x40);
                    *(u16 *)(*a4 + 0x42) = 0;
                LAB_8c238cd4:
                    uVar6 = *(u32 *)(ar5_01 + 0x14);
                    uVar7 = 3;
                }
                tex_entry_set_flags(uVar3, uVar7, uVar6, a3, uVar3);
            }
        } else if (iVar1 == 1) {
            ar4_00[2] = ar5_01;
            uVar4 = ar4_00[1] & 0xa0000000;
            if (uVar4 == 0) {
                if ((*(u32 *)(ar5_01 + 0x10) & 2) == 0) {
                    ar5_02 = ar5_01 + 0x14;
                    iVar1 = tex_calls_test_25a914(ar4_00, ar5_02, in_stack_ffffffc4, a3);
                    if (iVar1 < 0)
                        goto LAB_8c238d08;
                    *(u16 *)(ar5_01 + 0x42) = 0;
                    if (iVar5 != 0) {
                    LAB_8c238d18:
                        tex_entry_set_flags(uVar3, 2, *(u32 *)(ar5_01 + 0x14), a3, uVar3);
                        *(u32 *)(ar5_01 + 0x10) = *(u32 *)(ar5_01 + 0x10) | 8;
                        goto LAB_8c238e44;
                    }
                LAB_8c238d2a:
                    tex_uses_tex_size_to_index_2571fe(ar5_01);
                    *(u32 *)(ar5_01 + 0x10) = *(u32 *)(ar5_01 + 0x10) | 2;
                } else {
                joined_r0x8c238cec:
                    iVar1 = ar5_01;
                    if (iVar5 != 0)
                        goto LAB_8c238cee;
                }
            LAB_8c238d36:
                *(short *)(ar5_01 + 0x40) = *(short *)(ar5_01 + 0x40) + 1;
            } else if (uVar4 == 0x80000000) {
                if ((*(u32 *)(ar5_01 + 0x10) & 1) == 0) {
                    iVar1 = tex_copy_to_alloc(ar4_00, ar5_01 + 0x14);
                    if (iVar1 < 0)
                        goto LAB_8c238d08;
                    *(u16 *)(ar5_01 + 0x42) = 0;
                    if (iVar5 != 0)
                        goto LAB_8c238c8e;
                    *(u32 *)(ar5_01 + 0x10) = *(u32 *)(ar5_01 + 0x10) | 1;
                }
            } else if (uVar4 == 0x20000000) {
                if ((*(u32 *)(ar5_01 + 0x10) & 2) == 0) {
                    ar5_02 = ar5_01 + 0x14;
                    iVar1 = tex_calls_test_25a914(ar4_00, ar5_02, in_stack_ffffffc4, a3);
                    if (-1 < iVar1) {
                        *(u16 *)(ar5_01 + 0x42) = 0;
                        if (iVar5 == 0)
                            goto LAB_8c238d2a;
                        goto LAB_8c238d18;
                    }
                } else {
                    if ((*(u32 *)(ar5_01 + 0x10) & 1) != 0)
                        goto joined_r0x8c238cec;
                    iVar1 = tex_copy_to_alloc(ar4_00, ar5_01 + 0x14);
                    if (-1 < iVar1) {
                        *(u16 *)(ar5_01 + 0x42) = 0;
                        if (iVar5 != 0)
                            goto LAB_8c238cd4;
                        *(u32 *)(ar5_01 + 0x10) = *(u32 *)(ar5_01 + 0x10) | 1;
                        goto LAB_8c238d36;
                    }
                }
            LAB_8c238d08:
                g_8c4aa6b0 = uVar3;
                *(short *)(ar5_01 + 0x42) = -(short)iVar1;
                g_8c4aa6ac = a1;
                goto LAB_8c238e20;
            }
        } else if (iVar1 == 2) {
            uVar7 = tex_entry_next_free();
            uVar6 = 0x2c;
            memcpy_bytes(uVar7, a5, 0x2c);
            uVar2 = ar4_00[1] & 0xa0000000;
            if (uVar2 == 0) {
                iStack_2c = tex_calls_test_25a914(ar4_00, uVar7, uVar6, a3);
                if (-1 < iStack_2c) {
                    tex_entry_alloc(a4, uVar7, uVar3, 2);
                    *(u16 *)(*a4 + 0x42) = 0;
                joined_r0x8c238da2:
                    if (iVar5 != 0) {
                        *(u32 *)(*a4 + 0x10) = *(u32 *)(*a4 + 0x10) | 8;
                    }
                    goto LAB_8c238e44;
                }
            } else if (uVar2 == 0x80000000) {
                iStack_2c = tex_copy_to_alloc(ar4_00, uVar7);
                if (-1 < iStack_2c) {
                    tex_entry_alloc(a4, uVar7, uVar3, 1);
                    goto LAB_8c238dc6;
                }
            } else {
                if (uVar2 != 0x20000000)
                    goto LAB_8c238e44;
                iStack_2c = tex_copy_to_alloc(ar4_00, uVar7);
                if (-1 < iStack_2c) {
                    iStack_2c = tex_calls_test_25a914(ar4_00, uVar7, uVar6, a3);
                    if (iStack_2c < 0) {
                        tex_entry_alloc(a4, uVar7, uVar3, 1);
                        g_8c4aa6b0 = uVar3;
                        goto LAB_8c238e0a;
                    }
                    tex_entry_alloc(a4, uVar7, uVar3, 3);
                    *(u16 *)(*a4 + 0x42) = 0;
                    goto joined_r0x8c238da2;
                }
            }
            tex_entry_alloc(a4, uVar7, uVar3, 0);
            g_8c4aa6b0 = uVar3;
            goto LAB_8c238e0a;
        }
    LAB_8c238e44:
        uVar7 = 1;
    }
    return uVar7;
}

/*
 * gfxlib_calc_238e8c  0x8c238e8c
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 * called by: pvr_uses_tex_entry_alloc_23a29c
 */
u32 gfxlib_calc_238e8c(u32 a0) {
    u32 *puVar1;
    u32 in_r0;

    puVar1 = 0x8c4ab274;
    g_8c4ab270 = a0;
    *puVar1 = a0;
    return in_r0;
}

/*
 * gfx_stream_read  0x8c238e98
 * copies a1 bytes from the read pointer at 0x8c4ab274 to a0 and advances it
 * called by: gfxlib_copy_239f84, pvr_stream_find_pvrt, pvr_uses_tex_entry_alloc_23a29c, pvrt_gfx_stream_is_palettized,
 * ta_fifo_23a078
 */
u32 gfx_stream_read(u32 a0, int a1) {
    int *piVar1;
    u32 uVar2;

    piVar1 = 0x8c4ab274;
    uVar2 = memcpy_bytes(a0, g_8c4ab274, a1);
    *piVar1 = *piVar1 + a1;
    return uVar2;
}

/*
 * gfx_stream_seek  0x8c238eba
 * a1 = 0 sets the read pointer (0x8c4ab274) to base + a0, 1 moves it by a0
 * called by: pvr_stream_find_pvrt, pvr_uses_tex_entry_alloc_23a29c, pvrt_gfx_stream_is_palettized, ta_fifo_23a078
 */
int gfx_stream_seek(int a0, int a1) {
    if (a1 == 1) {
        g_8c4ab274 = g_8c4ab274 + a0;
    } else if (a1 == 0) {
        g_8c4ab274 = a0 + g_8c4ab270;
    }
    return a1;
}

/*
 * copy_2_bytes  0x8c238ede
 * a0[0..1] = a1[0..1]
 * called by: gfxlib_copy_238f2a, gfxlib_copy_239f84
 */
u32 copy_2_bytes(u8 *a0, u8 *a1) {
    u32 in_r0;

    *a0 = *a1;
    a0[1] = a1[1];
    return in_r0;
}

/*
 * copy_4_bytes  0x8c238eea
 * a0[0..3] = a1[0..3]
 * called by: gfxlib_copy_238f2a, gfxlib_copy_239f84
 */
u32 copy_4_bytes(u8 *a0, u8 *a1) {
    u32 in_r0;

    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    a0[3] = a1[3];
    return in_r0;
}

/*
 * gfxlib_vertex_size_from_flags  0x8c238f02
 * vertex size from format flag bits (base 2 or 0x1e, +2/+2/+4 for bits 1..3)
 * called by: gfxlib_uses_ninja_close_file_239212, pvr_uses_tex_entry_alloc_23a29c
 */
int gfxlib_vertex_size_from_flags(u32 a0) {
    int iVar1;

    iVar1 = 2;
    if ((a0 & 1) != 0) {
        iVar1 = 0x1e;
    }
    if ((a0 & 2) != 0) {
        iVar1 = iVar1 + 2;
    }
    if ((a0 & 4) != 0) {
        iVar1 = iVar1 + 2;
    }
    if ((a0 & 8) != 0) {
        iVar1 = iVar1 + 4;
    }
    return iVar1;
}

/*
 * gfxlib_copy_238f2a  0x8c238f2a
 * area name: in the gfxlib library code range; behaviour name: mostly calls copy functions
 * called by: gfxlib_uses_ninja_close_file_239212
 */
u32 gfxlib_copy_238f2a(u32 *a0, u32 a1, int a2, u32 a3) {
    u16 uVar1;
    short sVar2;
    int iVar3;
    u8 *puVar4;
    int iVar5;
    u32 *puVar6;
    u32 in_stack_ffffffa4;
    u8 auStack_48[44];

    uVar1 = *(u16 *)(a2 + 4);
    sVar2 = *(short *)(a2 + 6);
    iVar5 = 0;
    puVar6 = (u32 *)*a0;
    if (0 < sVar2) {
        do {
            iVar3 = ninja_uses_memcpy_bytes_259c48(auStack_48, a1, a2, a3);
            if (iVar3 < 0) {
                return 0xffffffff;
            }
            puVar4 = auStack_48;
            copy_2_bytes(&stack0xffffffa4, auStack_48);
            puVar6[1] = puVar6[1] & 0xffff0000 | in_stack_ffffffa4 & 0xffff;
            iVar3 = 2;
            if ((uVar1 & 1) != 0) {
                a2 = log_message(auStack_48 + 2, puVar4, a2);
                memcpy_bytes(*puVar6, auStack_48 + 2, a2);
                iVar3 = 0x1e;
            }
            if ((uVar1 & 2) != 0) {
                iVar3 = iVar3 + 2;
            }
            if ((uVar1 & 4) != 0) {
                iVar3 = iVar3 + 2;
            }
            puVar4 = auStack_48 + iVar3;
            if ((uVar1 & 0x400) == 0) {
                if ((uVar1 & 8) != 0) {
                    copy_4_bytes(puVar6 + 2, puVar4);
                }
            } else if ((uVar1 & 8) != 0) {
                copy_4_bytes(puVar6 + 2, puVar4);
                puVar6[1] = puVar6[1] | 0x1000000;
            }
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 3;
        } while (iVar5 < sVar2);
    }
    return 1;
}

/*
 * ta_fifo_239012  0x8c239012
 * called by: gfxlib_uses_ninja_close_file_239212
 */
u32 ta_fifo_239012(u32 unused_a0, u32 unused_a1, int a2, u32 a3, u32 s0) {
    u8 *puVar1;
    u8 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    u32 uVar7;
    u16 auStack_14[2];

    puVar1 = (&nj_seek);
    iVar3 = (int)(int)0xffffefe0;
    do {
        puVar2 = (&ninja_uses_memcpy_bytes_259c48);
        iVar4 = ninja_uses_memcpy_bytes_259c48(&stack0xfffffff0 + iVar3, 4, a2, a3);
        if (iVar4 < 0) {
            return 0xffffffff;
        }
        iVar4 = *(int *)(&stack0xfffffff0 + iVar3);
        if ((((iVar4 == 0x4e4c444d) || (iVar4 == 0x564e4f43)) || (iVar4 == 0x494d5650)) ||
            ((iVar4 == 0x43474d49 || (iVar4 == 0x4d4d4f43)))) {
        LAB_8c23911c:
            iVar4 = (*(code *)puVar2)((int)auStack_14 + iVar3, 4, a2, a3);
            if (iVar4 < 0) {
                return 0xffffffff;
            }
            uVar7 = *(u32 *)((int)auStack_14 + iVar3);
            iVar4 = a2;
        override_prt_8c23912e_7a4d7f16:
            (*(code *)puVar1)(uVar7, 1, iVar4, a3);
        } else {
            if (iVar4 != 0x4c505650) {
                if (iVar4 != 0x54525650)
                    goto LAB_8c23911c;
                uVar7 = 0xfffffffc;
                iVar4 = a2;
                goto override_prt_8c23912e_7a4d7f16;
            }
            uVar7 = 0xc;
            iVar4 = (*(code *)puVar2)((int)auStack_14 + 0x1014 + iVar3, 0xc, a2, a3);
            if (iVar4 != 1) {
                return 0xffffffff;
            }
            (*(code *)(&ninja_draw_255f88))((u32) * (u16 *)((int)auStack_14 + 0x1018 + iVar3), uVar7, a2, a3);
            if (*(short *)((int)auStack_14 + 0x1018 + iVar3) == 6) {
                iVar6 = 4;
            } else {
                iVar6 = 2;
            }
            iVar4 = (int)&s0 + iVar3;
            iVar5 = (*(code *)puVar2)(iVar4, *(short *)((int)auStack_14 + 0x101e + iVar3) * iVar6, a2, a3);
            if (iVar5 < 0) {
                return 0xffffffff;
            }
            uVar7 = 1;
            iVar6 =
                (*(int *)((int)auStack_14 + 0x1014 + iVar3) - *(short *)((int)auStack_14 + 0x101e + iVar3) * iVar6) +
                -8;
            *(int *)((int)auStack_14 + iVar3) = iVar6;
            (*(code *)puVar1)(iVar6, 1, a2, a3);
            (*(code *)(&ninja_set_palette_format))((u32) * (u16 *)((int)auStack_14 + 0x1018 + iVar3), uVar7, a2, a3);
            (*(code *)(&ninja_palette_load))((int)*(short *)((int)auStack_14 + 0x101c + iVar3) +
                                                 *(short *)((int)auStack_14 + 0x101a + iVar3) * 0x10,
                                             (int)*(short *)((int)auStack_14 + 0x101e + iVar3), iVar4, a3);
        }
        a2 = iVar4;
        if (*(int *)(&stack0xfffffff0 + iVar3) == 0x54525650) {
            return 1;
        }
    } while (true);
}

/*
 * find_entry_by_id  0x8c239150
 * index of the 12-byte entry in *a0 whose low 16 bits at +4 equal a1
 * called by: gfxlib_uses_ninja_close_file_239212, pvr_uses_tex_entry_alloc_23a29c
 */
int find_entry_by_id(int *a0, u32 a1) {
    int iVar1;
    int iVar2;

    iVar1 = 0;
    do {
        iVar2 = iVar1;
        iVar1 = iVar2 + 1;
    } while ((*(u32 *)(iVar2 * 0xc + *a0 + 4) & 0xffff) != a1);
    return iVar2;
}

/*
 * ptr_list_build_1c  0x8c239170
 * fills a1 with a3 pointers 0x1c bytes apart starting at a2 (stride 12) and stores a1 in *a0
 * called by: CGame_Init, CIncubater_Create, COutside_Create, CProlog_Ready, CSoilTank_Create, CSquid_Init,
 * CSysMessage_LoadMessage, CWaterTank_CreateStage (+6 more)
 */
int *ptr_list_build_1c(int *a0, int *a1, int a2, int a3) {
    int *piVar1;
    int iVar2;

    iVar2 = 0;
    piVar1 = a1;
    if (0 < a3) {
        do {
            iVar2 = iVar2 + 1;
            *piVar1 = a2;
            a2 = a2 + 0x1c;
            piVar1 = piVar1 + 3;
        } while (iVar2 < a3);
    }
    *a0 = (int)a1;
    return piVar1;
}

/*
 * pvrt_stream_is_palettized  0x8c2391a8
 * reads a PVRT header from the open stream; 1 for palettized pixel formats (types 5..8), 0 otherwise, -4 on a bad
 * header called by: gfxlib_uses_ninja_close_file_239212
 */
u32 pvrt_stream_is_palettized(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int iStack_14;
    u8 auStack_10[4];
    u32 uStack_c;

    iVar1 = ninja_uses_memcpy_bytes_259c48(&iStack_14, 4, unused_a2, a3);
    if (((iVar1 < 0) || (iStack_14 != 0x54525650)) ||
        (iVar1 = ninja_uses_memcpy_bytes_259c48(auStack_10, 0xc, unused_a2, a3), iVar1 < 0)) {
        return 0xfffffffc;
    }
    nj_seek(0xfffffff0, 1);
    uStack_c = 0xff00 & uStack_c;
    if (((uStack_c != (int)0x500) && (uStack_c != (int)0x600)) &&
        ((uStack_c != (int)0x700 && (uStack_c != (int)0x800)))) {
        return 0;
    }
    return 1;
}

/*
 * gfxlib_uses_ninja_close_file_239212  0x8c239212
 * area name: in the gfxlib library code range; behaviour name: its main named callee is ninja_close_file
 */
u32 gfxlib_uses_ninja_close_file_239212(u32 a0, int *a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *piVar3;
    int *piVar4;
    int **ppiVar5;
    u32 uVar6;
    int *piVar7;
    u8 *ar6_00;
    int *in_stack_fffffe78;
    int iStack_158;
    int iStack_154;
    u32 uStack_150;
    int *piStack_14c;
    u32 uStack_148;
    int iStack_144;
    int iStack_140;
    int iStack_13c;
    int *piStack_138;
    int iStack_134;
    int iStack_130;
    int *piStack_128;
    int *piStack_124;
    int *piStack_120;
    int iStack_11c;
    short sStack_118;
    short sStack_116;
    short sStack_112;
    int iStack_110;
    u8 auStack_10c[256];
    int *piStack_c;
    u32 uStack_8;

    uStack_150 = 0xffffffff;
    piStack_c = a1;
    uStack_8 = a0;
    tex_error_reset();
    ar6_00 = &g_8c26d968;
    uVar6 = uStack_8;
    filename_add_ext_if_missing(auStack_10c, uStack_8, &g_8c26d968, a3);
    iStack_13c = nj_file_open(auStack_10c, uVar6, ar6_00, a3);
    if (-1 < iStack_13c) {
        uVar6 = 4;
        piVar4 = &iStack_110;
        iVar1 = ninja_uses_memcpy_bytes_259c48(piVar4, 4, ar6_00, a3);
        if (iVar1 < 0) {
            ninja_close_file();
        } else if (iStack_110 == 0x484d5650) {
            uVar6 = 8;
            piVar4 = &iStack_11c;
            iVar1 = ninja_uses_memcpy_bytes_259c48(piVar4, 8, ar6_00, a3);
            if (iVar1 < 0) {
                ninja_close_file();
            } else {
                sStack_112 = sStack_116;
                piStack_c[1] = (int)sStack_116;
                uStack_148 = gfxlib_vertex_size_from_flags((int)sStack_118);
                piVar3 = &iStack_11c;
                gfxlib_copy_238f2a(piStack_c, uStack_148, piVar3, a3);
                nj_seek(0, 0);
                piVar7 = (int *)0x1;
                piVar4 = (int *)(iStack_11c + 8);
                nj_seek(piVar4, 1);
                iVar1 = ta_fifo_239012(piVar4, piVar7, piVar3, a3);
                if (iVar1 < 0) {
                    ninja_close_file();
                } else {
                    piStack_c[1] = (int)sStack_112;
                    iVar1 = 0;
                    while (true) {
                        iStack_140 = iVar1;
                        if (sStack_112 <= iVar1) {
                            ninja_close_file();
                            return 1;
                        }
                        piVar4 = piStack_c;
                        iStack_144 = find_entry_by_id(piStack_c, iVar1);
                        piStack_128 = (int *)(iStack_144 * 0xc + *piStack_c);
                        piStack_120 = piStack_128 + 2;
                        if ((piStack_128[1] & 0x1000000U) != 0) {
                            piVar3 = (int *)(piStack_128[2] & 0x3ffffff);
                            uStack_150 = (u32)piStack_128[2] >> 0x1a;
                            piVar4 = g_8c277b08;
                            piVar7 = g_8c277b0c;
                            piStack_138 = piVar3;
                            iStack_130 = tex_entry_find(g_8c277b08, g_8c277b0c, piVar3);
                            if (iStack_130 < 0) {
                                iStack_158 = 2;
                            } else {
                                piVar4 = g_8c277b08;
                                piVar7 = g_8c277b0c;
                                piVar3 = piStack_138;
                                a3 = uStack_150;
                                iStack_134 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, piStack_138, uStack_150);
                                if (iStack_134 < 0) {
                                    iStack_158 = 0;
                                } else {
                                    iStack_158 = 1;
                                }
                            }
                            iStack_154 = 1;
                            goto LAB_8c2394ac;
                        }
                        iStack_154 = pvrt_stream_is_palettized(piVar4, iVar1, piVar3, a3);
                        if (iStack_154 < 0)
                            break;
                        piVar4 = g_8c277b08;
                        piVar7 = g_8c277b0c;
                        if (iStack_154 == 1) {
                            piVar3 = (int *)(piStack_128[2] & 0x3ffffff);
                            uStack_150 = (u32)piStack_128[2] >> 0x1a;
                            piStack_138 = piVar3;
                            iStack_130 = tex_entry_find(g_8c277b08, g_8c277b0c, piVar3);
                            if (iStack_130 < 0) {
                            LAB_8c239438:
                                iStack_158 = 2;
                            } else {
                                piVar4 = g_8c277b08;
                                piVar7 = g_8c277b0c;
                                piVar3 = piStack_138;
                                a3 = uStack_150;
                                iStack_134 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, piStack_138, uStack_150);
                                if (iStack_134 < 0) {
                                    iStack_158 = 0;
                                } else {
                                    iStack_158 = 1;
                                }
                            }
                        } else {
                            piVar3 = (int *)piStack_128[2];
                            piStack_138 = piVar3;
                            iStack_130 = tex_entry_find(g_8c277b08, g_8c277b0c, piVar3);
                            if (iStack_130 < 0)
                                goto LAB_8c239438;
                            iStack_158 = 1;
                        }
                    LAB_8c2394ac:
                        if (iStack_158 == 0) {
                            piStack_124 = g_8c277b08 + iStack_130 * 0x11;
                            nj_seek(4, 1);
                            iVar1 = ninja_uses_memcpy_bytes_259c48(&piStack_14c, 4, piVar3, a3);
                            if (iVar1 < 0) {
                                uVar6 = 0;
                                piVar3 = piStack_124 + 5;
                                piVar4 = piStack_120;
                                piVar7 = piStack_138;
                                tex_entry_alloc(piStack_120, piVar3, piStack_138, 0, uStack_150);
                                *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                                g_8c4aa6ac = iStack_144;
                                g_8c4aa6b0 = piStack_138;
                                ninja_close_file();
                                return 0xffffffff;
                            }
                            piVar7 = (int *)0x1;
                            piVar4 = piStack_14c;
                            nj_seek(piStack_14c, 1);
                            if ((piStack_124[4] & 2U) == 0) {
                                uVar2 = piStack_128[1] & 0xa0000000;
                                if ((uVar2 == 0) || (uVar2 == 0x20000000)) {
                                    iStack_13c = tex_calls_test_25a914(piStack_128, piStack_124 + 5, piVar3, a3);
                                    if (iStack_13c < 0) {
                                        uVar6 = 1;
                                        piVar3 = piStack_124 + 5;
                                        piVar4 = piStack_120;
                                        piVar7 = piStack_138;
                                        tex_entry_alloc(piStack_120, piVar3, piStack_138, 1, uStack_150);
                                        *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                                        g_8c4aa6ac = iStack_144;
                                        g_8c4aa6b0 = piStack_138;
                                        ninja_close_file();
                                        return 0xffffffff;
                                    }
                                    a3 = 1;
                                    tex_entry_alloc(piStack_120, piStack_124 + 5, piStack_138, 1, uStack_150);
                                    piVar7 = (int *)0x2;
                                    *(u16 *)(*piStack_120 + 0x42) = 0;
                                    piVar3 = (int *)piStack_124[5];
                                    piVar4 = piStack_138;
                                    tex_entry_set_flags(piStack_138, 2, piVar3, a3, in_stack_fffffe78);
                                    piStack_124[4] = piStack_124[4] | 8;
                                } else if (uVar2 == 0x80000000) {
                                    a3 = 1;
                                    piVar7 = piStack_124 + 5;
                                    piVar4 = piStack_120;
                                    piVar3 = piStack_138;
                                    tex_entry_alloc(piStack_120, piVar7, piStack_138, 1, uStack_150);
                                    *(u16 *)(*piStack_120 + 0x42) = 0;
                                }
                            } else {
                                uVar2 = piStack_128[1] & 0xa0000000;
                                if (uVar2 == 0) {
                                    a3 = piStack_124[4];
                                    piVar7 = piStack_124 + 5;
                                    piVar3 = piStack_138;
                                    tex_entry_alloc(piStack_120, piVar7, piStack_138, a3, uStack_150);
                                    *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                                    *(u16 *)(*piStack_120 + 0x42) = 0;
                                LAB_8c239986:
                                    piVar4 = piStack_138;
                                    tex_entry_addref(piStack_138, piVar7, piVar3, a3, in_stack_fffffe78);
                                } else if (uVar2 == 0x80000000) {
                                    if ((piStack_124[4] & 1U) == 0) {
                                        iStack_13c =
                                            tex_uses_gfx_heap_alloc_25a838(piStack_128, piStack_124 + 5, piVar3, a3);
                                        if (iStack_13c < 0) {
                                            uVar6 = 2;
                                            piVar3 = piStack_124 + 5;
                                            piVar4 = piStack_120;
                                            piVar7 = piStack_138;
                                            tex_entry_alloc(piStack_120, piVar3, piStack_138, 2, uStack_150);
                                            *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                                            *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                                            g_8c4aa6ac = iStack_144;
                                            g_8c4aa6b0 = piStack_138;
                                            ninja_close_file();
                                            return 0xffffffff;
                                        }
                                        a3 = 2;
                                        tex_entry_alloc(piStack_120, piStack_124 + 5, piStack_138, 2, uStack_150);
                                        piVar7 = (int *)0x1;
                                        *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                                        *(u16 *)(*piStack_120 + 0x42) = 0;
                                        piVar3 = *(int **)(*piStack_120 + 0x14);
                                        piVar4 = piStack_138;
                                        tex_entry_set_flags(piStack_138, 1, piVar3, a3, in_stack_fffffe78);
                                    } else {
                                        a3 = 3;
                                        piVar7 = piStack_124 + 5;
                                        piVar4 = piStack_120;
                                        piVar3 = piStack_138;
                                        tex_entry_alloc(piStack_120, piVar7, piStack_138, 3, uStack_150);
                                        *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                                        *(u16 *)(*piStack_120 + 0x42) = 0;
                                    }
                                } else if (uVar2 == 0x20000000) {
                                    if ((piStack_124[4] & 1U) == 0) {
                                        iStack_13c =
                                            tex_uses_gfx_heap_alloc_25a838(piStack_128, piStack_124 + 5, piVar3, a3);
                                        if (iStack_13c < 0) {
                                            uVar6 = 2;
                                            piVar3 = piStack_124 + 5;
                                            piVar4 = piStack_120;
                                            piVar7 = piStack_138;
                                            tex_entry_alloc(piStack_120, piVar3, piStack_138, 2, uStack_150);
                                            *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                                            *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                                            g_8c4aa6ac = iStack_144;
                                            g_8c4aa6b0 = piStack_138;
                                            ninja_close_file();
                                            return 0xffffffff;
                                        }
                                        a3 = 2;
                                        tex_entry_alloc(piStack_120, piStack_124 + 5, piStack_138, 2, uStack_150);
                                        piVar7 = (int *)0x3;
                                        *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                                        *(u16 *)(*piStack_120 + 0x42) = 0;
                                        piVar3 = (int *)piStack_124[5];
                                        piVar4 = piStack_138;
                                        tex_entry_set_flags(piStack_138, 3, piVar3, a3, in_stack_fffffe78);
                                    } else {
                                        a3 = 3;
                                        piVar7 = piStack_124 + 5;
                                        piVar3 = piStack_138;
                                        tex_entry_alloc(piStack_120, piVar7, piStack_138, 3, uStack_150);
                                        *(short *)(*piStack_120 + 0x40) = (short)piStack_124[0x10];
                                        *(u16 *)(*piStack_120 + 0x42) = 0;
                                        piVar4 = piStack_138;
                                        tex_entry_addref(piStack_138, piVar7, piVar3, a3, in_stack_fffffe78);
                                    }
                                }
                            }
                        } else if (iStack_158 == 1) {
                            piStack_124 = g_8c277b08 + iStack_130 * 0x11;
                            piStack_128[2] = (int)piStack_124;
                            uVar2 = piStack_128[1] & 0xa0000000;
                            if (uVar2 == 0) {
                                nj_seek(4, 1);
                                uVar6 = 4;
                                ppiVar5 = &piStack_14c;
                                iVar1 = ninja_uses_memcpy_bytes_259c48(ppiVar5, 4, piVar3, a3);
                                if (iVar1 < 0) {
                                    g_8c4aa6ac = iStack_144;
                                    g_8c4aa6b0 = piStack_138;
                                    ninja_close_file();
                                    return 0xffffffff;
                                }
                                piVar7 = (int *)0x1;
                                piVar4 = piStack_14c;
                                nj_seek(piStack_14c, 1);
                                if ((piStack_124[4] & 2U) == 0) {
                                    piVar7 = piStack_124 + 5;
                                    piVar4 = piStack_128;
                                    iStack_13c = tex_calls_test_25a914(piStack_128, piVar7, piVar3, a3);
                                    if (iStack_13c < 0) {
                                        *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                                        g_8c4aa6ac = iStack_144;
                                        g_8c4aa6b0 = piStack_138;
                                        ninja_close_file();
                                        return 0xffffffff;
                                    }
                                    *(u16 *)((int)piStack_124 + 0x42) = 0;
                                    if (iStack_154 == 0) {
                                        piVar4 = piStack_124;
                                        tex_uses_tex_size_to_index_2571fe(piStack_124);
                                        piStack_124[4] = piStack_124[4] | 2;
                                        *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                                    } else {
                                        piVar7 = (int *)0x2;
                                        piVar3 = (int *)piStack_124[5];
                                        piVar4 = piStack_138;
                                        tex_entry_set_flags(piStack_138, 2, piVar3, a3, in_stack_fffffe78);
                                        piStack_124[4] = piStack_124[4] | 8;
                                    }
                                } else {
                                    if (iStack_154 != 0)
                                        goto LAB_8c239986;
                                    *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                                }
                            } else if (uVar2 == 0x80000000) {
                                if ((piStack_124[4] & 1U) == 0) {
                                    piVar7 = piStack_124 + 5;
                                    piVar4 = piStack_128;
                                    iStack_13c = tex_uses_gfx_heap_alloc_25a838(piStack_128, piVar7, piVar3, a3);
                                    if (iStack_13c < 0) {
                                        *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                                        g_8c4aa6ac = iStack_144;
                                        g_8c4aa6b0 = piStack_138;
                                        ninja_close_file();
                                        return 0xffffffff;
                                    }
                                    *(u16 *)((int)piStack_124 + 0x42) = 0;
                                    if (iStack_154 == 0) {
                                        piStack_124[4] = piStack_124[4] | 1;
                                    } else {
                                        piVar7 = (int *)0x1;
                                        piVar3 = (int *)piStack_124[5];
                                        piVar4 = piStack_138;
                                        tex_entry_set_flags(piStack_138, 1, piVar3, a3, in_stack_fffffe78);
                                    }
                                } else {
                                    nj_seek(4, 1);
                                    uVar6 = 4;
                                    ppiVar5 = &piStack_14c;
                                    iVar1 = ninja_uses_memcpy_bytes_259c48(ppiVar5, 4, piVar3, a3);
                                    if (iVar1 < 0) {
                                        g_8c4aa6ac = iStack_144;
                                        g_8c4aa6b0 = piStack_138;
                                        ninja_close_file();
                                        return 0xffffffff;
                                    }
                                    piVar7 = (int *)0x1;
                                    piVar4 = piStack_14c;
                                    nj_seek(piStack_14c, 1);
                                }
                            } else if (uVar2 == 0x20000000) {
                                if ((piStack_124[4] & 2U) == 0) {
                                    nj_seek(4, 1);
                                    uVar6 = 4;
                                    ppiVar5 = &piStack_14c;
                                    iVar1 = ninja_uses_memcpy_bytes_259c48(ppiVar5, 4, piVar3, a3);
                                    if (iVar1 < 0) {
                                        g_8c4aa6ac = iStack_144;
                                        g_8c4aa6b0 = piStack_138;
                                        ninja_close_file();
                                        return 0xffffffff;
                                    }
                                    nj_seek(piStack_14c, 1);
                                    piVar7 = piStack_124 + 5;
                                    piVar4 = piStack_128;
                                    iStack_13c = tex_calls_test_25a914(piStack_128, piVar7, piVar3, a3);
                                    if (iStack_13c < 0) {
                                        *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                                        g_8c4aa6ac = iStack_144;
                                        g_8c4aa6b0 = piStack_138;
                                        ninja_close_file();
                                        return 0xffffffff;
                                    }
                                    *(u16 *)((int)piStack_124 + 0x42) = 0;
                                    if (iStack_154 == 0) {
                                        piVar4 = piStack_124;
                                        tex_uses_tex_size_to_index_2571fe(piStack_124);
                                        piStack_124[4] = piStack_124[4] | 2;
                                        *(u16 *)(piStack_124 + 0x10) = 1;
                                    } else {
                                        piVar7 = (int *)0x2;
                                        piVar3 = (int *)piStack_124[5];
                                        piVar4 = piStack_138;
                                        tex_entry_set_flags(piStack_138, 2, piVar3, a3, in_stack_fffffe78);
                                        piStack_124[4] = piStack_124[4] | 8;
                                    }
                                } else if ((piStack_124[4] & 1U) == 0) {
                                    piVar7 = piStack_124 + 5;
                                    piVar4 = piStack_128;
                                    iStack_13c = tex_uses_gfx_heap_alloc_25a838(piStack_128, piVar7, piVar3, a3);
                                    if (iStack_13c < 0) {
                                        *(short *)((int)piStack_124 + 0x42) = -(short)iStack_13c;
                                        g_8c4aa6ac = iStack_144;
                                        g_8c4aa6b0 = piStack_138;
                                        ninja_close_file();
                                        return 0xffffffff;
                                    }
                                    *(u16 *)((int)piStack_124 + 0x42) = 0;
                                    if (iStack_154 == 0) {
                                        piStack_124[4] = piStack_124[4] | 1;
                                        *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                                    } else {
                                        piVar7 = (int *)0x3;
                                        piVar3 = (int *)piStack_124[5];
                                        piVar4 = piStack_138;
                                        tex_entry_set_flags(piStack_138, 3, piVar3, a3, in_stack_fffffe78);
                                    }
                                } else {
                                    if (iStack_154 == 0) {
                                        *(short *)(piStack_124 + 0x10) = (short)piStack_124[0x10] + 1;
                                    } else {
                                        tex_entry_addref(piStack_138, piVar7, piVar3, a3, in_stack_fffffe78);
                                    }
                                    nj_seek(4, 1);
                                    uVar6 = 4;
                                    ppiVar5 = &piStack_14c;
                                    iVar1 = ninja_uses_memcpy_bytes_259c48(ppiVar5, 4, piVar3, a3);
                                    if (iVar1 < 0) {
                                        g_8c4aa6ac = iStack_144;
                                        g_8c4aa6b0 = piStack_138;
                                        ninja_close_file();
                                        return 0xffffffff;
                                    }
                                    piVar7 = (int *)0x1;
                                    piVar4 = piStack_14c;
                                    nj_seek(piStack_14c, 1);
                                }
                            }
                        } else if (iStack_158 == 2) {
                            piVar4 = piStack_138;
                            in_stack_fffffe78 = (int *)tex_entry_next_free();
                            uVar2 = piStack_128[1] & 0xa0000000;
                            if (uVar2 == 0) {
                                piVar7 = in_stack_fffffe78;
                                iStack_13c =
                                    tex_uses_dcache_writeback_range_25a770(piStack_128, in_stack_fffffe78, piVar3, a3);
                                if (iStack_13c < 0) {
                                    uVar6 = 0;
                                    piVar4 = piStack_120;
                                    piVar3 = piStack_138;
                                    tex_entry_alloc(piStack_120, piVar7, piStack_138, 0, uStack_150);
                                    *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                                    g_8c4aa6ac = iStack_144;
                                    g_8c4aa6b0 = piStack_138;
                                    ninja_close_file();
                                    return 0xffffffff;
                                }
                                a3 = 2;
                                piVar4 = piStack_120;
                                piVar3 = piStack_138;
                                in_stack_fffffe78 = piVar7;
                                tex_entry_alloc(piStack_120, piVar7, piStack_138, 2, uStack_150);
                                *(u16 *)(*piStack_120 + 0x42) = 0;
                                if (iStack_154 != 0) {
                                    *(u32 *)(*piStack_120 + 0x10) = *(u32 *)(*piStack_120 + 0x10) | 8;
                                }
                            } else if (uVar2 == 0x80000000) {
                                piVar7 = in_stack_fffffe78;
                                iStack_13c = tex_uses_gfx_heap_alloc_25a838(piStack_128, in_stack_fffffe78, piVar3, a3);
                                if (iStack_13c < 0) {
                                    uVar6 = 0;
                                    piVar4 = piStack_120;
                                    piVar3 = piStack_138;
                                    tex_entry_alloc(piStack_120, piVar7, piStack_138, 0, uStack_150);
                                    *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                                    g_8c4aa6ac = iStack_144;
                                    g_8c4aa6b0 = piStack_138;
                                    ninja_close_file();
                                    return 0xffffffff;
                                }
                                a3 = 1;
                                piVar4 = piStack_120;
                                piVar3 = piStack_138;
                                in_stack_fffffe78 = piVar7;
                                tex_entry_alloc(piStack_120, piVar7, piStack_138, 1, uStack_150);
                                *(u16 *)(*piStack_120 + 0x42) = 0;
                            } else if (uVar2 == 0x20000000) {
                                iStack_13c = tex_uses_gfx_heap_alloc_25a838(piStack_128, in_stack_fffffe78, piVar3, a3);
                                if (iStack_13c < 0) {
                                    uVar6 = 0;
                                    piVar4 = piStack_120;
                                    piVar7 = piStack_138;
                                    tex_entry_alloc(piStack_120, in_stack_fffffe78, piStack_138, 0, uStack_150);
                                    *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                                    g_8c4aa6ac = iStack_144;
                                    g_8c4aa6b0 = piStack_138;
                                    ninja_close_file();
                                    return 0xffffffff;
                                }
                                piVar7 = in_stack_fffffe78;
                                iStack_13c = tex_calls_test_25a914(piStack_128, in_stack_fffffe78, piVar3, a3);
                                if (iStack_13c < 0) {
                                    uVar6 = 1;
                                    piVar4 = piStack_120;
                                    piVar3 = piStack_138;
                                    tex_entry_alloc(piStack_120, piVar7, piStack_138, 1, uStack_150);
                                    *(short *)(*piStack_120 + 0x42) = -(short)iStack_13c;
                                    g_8c4aa6ac = iStack_144;
                                    g_8c4aa6b0 = piStack_138;
                                    ninja_close_file();
                                    return 0xffffffff;
                                }
                                a3 = 3;
                                piVar4 = piStack_120;
                                piVar3 = piStack_138;
                                in_stack_fffffe78 = piVar7;
                                tex_entry_alloc(piStack_120, piVar7, piStack_138, 3, uStack_150);
                                *(u16 *)(*piStack_120 + 0x42) = 0;
                                if (iStack_154 != 0) {
                                    *(u32 *)(*piStack_120 + 0x10) = *(u32 *)(*piStack_120 + 0x10) | 8;
                                }
                            }
                        }
                        iVar1 = iStack_140 + 1;
                    }
                    g_8c4aa6ac = iStack_144;
                    ninja_close_file();
                }
            }
        } else {
            g_8c4aa6b4 = 4;
            ninja_close_file();
        }
    }
    return 0xffffffff;
}

/*
 * gfxlib_copy_239f84  0x8c239f84
 * area name: in the gfxlib library code range; behaviour name: mostly calls copy functions
 * called by: pvr_uses_tex_entry_alloc_23a29c
 */
u32 gfxlib_copy_239f84(u32 *a0, u32 a1, int a2) {
    u16 uVar1;
    u32 uVar2;
    int iVar3;
    u8 *puVar4;
    int iVar5;
    u32 *puVar6;
    u32 in_stack_ffffffa8;
    int iStack_54;
    u8 auStack_48[44];

    uVar1 = *(u16 *)(a2 + 4);
    uVar2 = (u32) * (short *)(a2 + 6);
    iStack_54 = 0;
    iVar5 = (int)*(short *)(a2 + 6);
    puVar6 = (u32 *)*a0;
    if (0 < iVar5) {
        do {
            gfx_stream_read(auStack_48, a1);
            puVar4 = auStack_48;
            uVar2 = copy_2_bytes(&stack0xffffffa8, auStack_48);
            puVar6[1] = puVar6[1] & 0xffff0000 | in_stack_ffffffa8 & 0xffff;
            iVar3 = 2;
            if ((uVar1 & 1) != 0) {
                a2 = log_message(auStack_48 + 2, puVar4, a2);
                uVar2 = memcpy_bytes(*puVar6, auStack_48 + 2, a2);
                iVar3 = 0x1e;
            }
            if ((uVar1 & 2) != 0) {
                iVar3 = iVar3 + 2;
            }
            if ((uVar1 & 4) != 0) {
                iVar3 = iVar3 + 2;
            }
            puVar4 = auStack_48 + iVar3;
            if ((uVar1 & 0x400) == 0) {
                uVar2 = (u32)uVar1;
                if ((uVar1 & 8) != 0) {
                    uVar2 = copy_4_bytes(puVar6 + 2, puVar4);
                }
            } else if ((uVar1 & 8) != 0) {
                uVar2 = copy_4_bytes(puVar6 + 2, puVar4);
                puVar6[1] = puVar6[1] | 0x1000000;
            }
            iStack_54 = iStack_54 + 1;
            puVar6 = puVar6 + 3;
        } while (iStack_54 < iVar5);
    }
    return uVar2;
}

/*
 * ta_fifo_23a078  0x8c23a078
 * called by: pvr_uses_tex_entry_alloc_23a29c
 */
u32 ta_fifo_23a078(u32 unused_a0, u32 unused_a1, u8 *a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u8 *ar4_00;
    u16 auStack_c[2];

    iVar1 = (int)(int)0xffffefec;
    do {
        gfx_stream_read(&stack0xfffffff8 + iVar1, 4);
        iVar2 = *(int *)(&stack0xfffffff8 + iVar1);
        if ((((iVar2 == 0x4e4c444d) || (iVar2 == 0x564e4f43)) || (iVar2 == 0x494d5650)) ||
            ((iVar2 == 0x43474d49 || (iVar2 == 0x4d4d4f43)))) {
            gfx_stream_read((int)auStack_c + iVar1, 4);
        LAB_8c23a190:
            uVar3 = gfx_stream_seek(*(u32 *)((int)auStack_c + iVar1), 1);
            ar4_00 = a2;
        } else if (iVar2 == 0x4c505650) {
            uVar3 = 0xc;
            gfx_stream_read((int)auStack_c + 0x1008 + iVar1, 0xc);
            (*(code *)(&ninja_draw_255f88))((u32) * (u16 *)((int)auStack_c + 0x100c + iVar1), uVar3, a2, a3);
            if (*(short *)((int)auStack_c + 0x100e + iVar1) == 6) {
                iVar2 = 4;
            } else {
                iVar2 = 2;
            }
            ar4_00 = &stack0xfffffffc + iVar1;
            (*(code *)(&gfx_stream_read))(ar4_00, *(short *)((int)auStack_c + 0x1012 + iVar1) * iVar2, a2, a3);
            uVar3 = 1;
            iVar2 =
                (*(int *)((int)auStack_c + 0x1008 + iVar1) - *(short *)((int)auStack_c + 0x1012 + iVar1) * iVar2) + -8;
            *(int *)((int)auStack_c + iVar1) = iVar2;
            gfx_stream_seek(iVar2, 1);
            (*(code *)(&ninja_set_palette_format))((u32) * (u16 *)((int)auStack_c + 0x100c + iVar1), uVar3, a2, a3);
            uVar3 = (*(code *)(&ninja_palette_load))((int)*(short *)((int)auStack_c + 0x1010 + iVar1) +
                                                         *(short *)((int)auStack_c + 0x100e + iVar1) * 0x10,
                                                     (int)*(short *)((int)auStack_c + 0x1012 + iVar1), ar4_00, a3);
        } else {
            if (iVar2 != 0x54525650) {
                gfx_stream_read((int)auStack_c + iVar1, 4);
                goto LAB_8c23a190;
            }
            uVar3 = gfx_stream_seek(0xfffffffc, 1);
            ar4_00 = a2;
        }
        a2 = ar4_00;
        if (*(int *)(&stack0xfffffff8 + iVar1) == 0x54525650) {
            return uVar3;
        }
    } while (true);
}

/*
 * pvr_stream_find_pvrt  0x8c23a1b0
 * skips chunks in the texture stream until 'PVRT' and reads the size and format
 * called by: pvr_uses_tex_entry_alloc_23a29c
 */
u32 pvr_stream_find_pvrt(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    int iStack_20;
    u32 uStack_1c;
    int iStack_18;
    int iStack_14;
    u16 uStack_10;
    u16 uStack_e;

    iVar2 = 0x54525650;
    do {
        gfx_stream_read(&iStack_20, 4);
        if (iStack_20 == 0x54525650) {
            gfx_stream_read(&iStack_18, 0xc);
            a0[4] = (u32)uStack_10;
            a0[5] = (u32)uStack_e;
            a0[1] = iStack_14 << 0x10;
        } else {
            gfx_stream_read(&uStack_1c, 4);
            gfx_stream_seek(uStack_1c, 1);
        }
        puVar1 = (&gfx_stream_seek);
    } while (iStack_20 != iVar2);
    *a0 = g_8c4ab274;
    uVar3 = (*(code *)puVar1)(iStack_18 + -8, 1, a2, a3);
    return uVar3;
}

/*
 * pvrt_gfx_stream_is_palettized  0x8c23a21c
 * reads a PVRT header from the graphics stream; 1 for palettized pixel formats (5..8), -4 on a bad header
 * called by: pvr_uses_tex_entry_alloc_23a29c
 */
u32 pvrt_gfx_stream_is_palettized(u32 unused_a0, u32 a1) {
    int iStack_14;
    u8 auStack_10[4];
    u32 uStack_c;

    gfx_stream_read(&iStack_14, 4);
    if (iStack_14 != 0x54525650) {
        return 0xfffffffc;
    }
    gfx_stream_read(auStack_10, 0xc);
    gfx_stream_seek(0xfffffff0, 1);
    uStack_c = 0xff00 & uStack_c;
    if ((((uStack_c != (int)0x500) && (uStack_c != (int)0x600)) && (uStack_c != (int)0x700)) &&
        (uStack_c != (int)0x800)) {
        return 0;
    }
    return 1;
}

/*
 * pvr_uses_tex_entry_alloc_23a29c  0x8c23a29c
 * area name: sits between pvr functions (same compilation unit); behaviour name: its main named callee is
 * tex_entry_alloc called by: CDCGD_ReadPVMFileReq
 */
u32 pvr_uses_tex_entry_alloc_23a29c(u32 a0, int *a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int ain0;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    int ar5_00;
    int *piVar6;
    u32 ar7_00;
    int ar4_00;
    int *ar4_01;
    int *ar6_00;
    int iStack_68;
    int iStack_5c;
    int iStack_58;
    u8 auStack_54[44];
    int iStack_28;
    short sStack_24;
    short sStack_22;

    ar7_00 = 0xffffffff;
    piVar6 = a1;
    tex_error_reset();
    gfxlib_calc_238e8c(a0);
    gfx_stream_read(&iStack_58, 4);
    if (iStack_58 == 0x484d5650) {
        uVar5 = 8;
        gfx_stream_read(&iStack_28, 8);
        iVar1 = (int)sStack_22;
        a1[1] = iVar1;
        uVar5 = gfxlib_vertex_size_from_flags((int)sStack_24);
        piVar6 = &iStack_28;
        gfxlib_copy_239f84(a1, uVar5, piVar6);
        gfx_stream_seek(0, 0);
        uVar5 = 1;
        iVar4 = iStack_28 + 8;
        gfx_stream_seek(iVar4, 1);
        ta_fifo_23a078(iVar4, uVar5, piVar6, a3);
        a1[1] = iVar1;
        iStack_5c = 0;
        if (0 < sStack_22) {
            do {
                iVar1 = find_entry_by_id(a1, iStack_5c);
                iVar4 = iVar1 * 0xc;
                ar4_00 = *a1 + iVar4;
                ar4_01 = (int *)(ar4_00 + 8);
                if ((*(u32 *)(ar4_00 + 4) & 0x1000000) == 0) {
                    ain0 = pvrt_gfx_stream_is_palettized(iVar4, 0x1000000);
                    iVar4 = g_8c277b0c;
                    if (ain0 == 1) {
                        ar6_00 = (int *)(*(u32 *)(ar4_00 + 8) & 0x3ffffff);
                        ar7_00 = *(u32 *)(ar4_00 + 8) >> 0x1a;
                        piVar6 = ar6_00;
                        iStack_68 = tex_entry_find(g_8c277b08, g_8c277b0c, ar6_00);
                        if (iStack_68 < 0) {
                        LAB_8c23a3b6:
                            iVar2 = 2;
                        } else {
                            iVar4 = g_8c277b0c;
                            piVar6 = ar6_00;
                            a3 = ar7_00;
                            iVar2 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, ar6_00, ar7_00);
                            if (-1 < iVar2)
                                goto LAB_8c23a3ba;
                            iVar2 = 0;
                        }
                    } else {
                        ar6_00 = *(int **)(ar4_00 + 8);
                        piVar6 = ar6_00;
                        iStack_68 = tex_entry_find(g_8c277b08, g_8c277b0c, ar6_00);
                        if (iStack_68 < 0)
                            goto LAB_8c23a3b6;
                    LAB_8c23a3ba:
                        iVar2 = 1;
                    }
                } else {
                    ar6_00 = (int *)(*(u32 *)(iVar4 + *a1 + 8) & 0x3ffffff);
                    ar7_00 = *(u32 *)(ar4_00 + 8) >> 0x1a;
                    iVar4 = g_8c277b0c;
                    piVar6 = ar6_00;
                    iStack_68 = tex_entry_find(g_8c277b08, g_8c277b0c, ar6_00);
                    if (iStack_68 < 0) {
                        iVar2 = 2;
                    } else {
                        iVar4 = g_8c277b0c;
                        piVar6 = ar6_00;
                        a3 = ar7_00;
                        iVar2 = tex_entry_find_pair(g_8c277b08, g_8c277b0c, ar6_00, ar7_00);
                        if (iVar2 < 0) {
                            iVar2 = 0;
                        } else {
                            iVar2 = 1;
                        }
                    }
                    ain0 = 1;
                }
                if (iVar2 == 0) {
                    iVar2 = iStack_68 * 0x44 + g_8c277b08;
                    pvr_stream_find_pvrt(auStack_54, iVar4, piVar6, a3);
                    if ((*(u32 *)(iVar2 + 0x10) & 2) == 0) {
                        uVar3 = *(u32 *)(ar4_00 + 4) & 0xa0000000;
                        if ((uVar3 != 0) && (uVar3 != 0x20000000)) {
                            if (uVar3 == 0x80000000) {
                                a3 = 1;
                                tex_entry_alloc(ar4_01, iVar2 + 0x14, ar6_00, 1, ar7_00);
                                piVar6 = ar6_00;
                            LAB_8c23a7c0:
                                *(u16 *)(*ar4_01 + 0x42) = 0;
                            }
                            goto LAB_8c23a852;
                        }
                        iStack_68 = tex_calls_test_25a914(ar4_00, iVar2 + 0x14, piVar6, a3);
                        if (-1 < iStack_68) {
                            a3 = 1;
                            tex_entry_alloc(ar4_01, iVar2 + 0x14, ar6_00, 1, ar7_00);
                            *(u16 *)(*ar4_01 + 0x42) = 0;
                            goto LAB_8c23a6f0;
                        }
                        tex_entry_alloc(ar4_01, iVar2 + 0x14, ar6_00, 1, ar7_00);
                    LAB_8c23a816:
                        *(short *)(*ar4_01 + 0x42) = -(short)iStack_68;
                        g_8c4aa6ac = iVar1;
                        g_8c4aa6b0 = ar6_00;
                        goto LAB_8c23a82a;
                    }
                    uVar3 = *(u32 *)(ar4_00 + 4) & 0xa0000000;
                    if (uVar3 == 0) {
                        iVar4 = iVar2 + 0x14;
                        a3 = *(u32 *)(iVar2 + 0x10);
                        piVar6 = ar6_00;
                        tex_entry_alloc(ar4_01, iVar4, ar6_00, a3, ar7_00);
                    LAB_8c23a578:
                        *(u16 *)(*ar4_01 + 0x40) = *(u16 *)(iVar2 + 0x40);
                        *(u16 *)(*ar4_01 + 0x42) = 0;
                    LAB_8c23a6c4:
                        tex_entry_addref(ar6_00, iVar4, piVar6, a3, ain0);
                    } else {
                        if (uVar3 == 0x80000000) {
                            if ((*(u32 *)(iVar2 + 0x10) & 1) != 0) {
                                a3 = 3;
                                tex_entry_alloc(ar4_01, iVar2 + 0x14, ar6_00, 3, ar7_00);
                                *(u16 *)(*ar4_01 + 0x40) = *(u16 *)(iVar2 + 0x40);
                                piVar6 = ar6_00;
                                goto LAB_8c23a7c0;
                            }
                            iStack_68 = tex_copy_to_alloc(ar4_00, iVar2 + 0x14);
                            if (iStack_68 < 0) {
                            LAB_8c23a52a:
                                tex_entry_alloc(ar4_01, iVar2 + 0x14, ar6_00, 2, ar7_00);
                                *(u16 *)(*ar4_01 + 0x40) = *(u16 *)(iVar2 + 0x40);
                                goto LAB_8c23a816;
                            }
                            a3 = 2;
                            tex_entry_alloc(ar4_01, iVar2 + 0x14, ar6_00, 2, ar7_00);
                            *(u16 *)(*ar4_01 + 0x40) = *(u16 *)(iVar2 + 0x40);
                            *(u16 *)(*ar4_01 + 0x42) = 0;
                        LAB_8c23a674:
                            piVar6 = *(int **)(iVar2 + 0x14);
                            uVar5 = 1;
                        } else {
                            if (uVar3 != 0x20000000)
                                goto LAB_8c23a852;
                            if ((*(u32 *)(iVar2 + 0x10) & 1) != 0) {
                                iVar4 = iVar2 + 0x14;
                                a3 = 3;
                                piVar6 = ar6_00;
                                tex_entry_alloc(ar4_01, iVar4, ar6_00, 3, ar7_00);
                                goto LAB_8c23a578;
                            }
                            iStack_68 = tex_copy_to_alloc(ar4_00, iVar2 + 0x14);
                            if (iStack_68 < 0)
                                goto LAB_8c23a52a;
                            a3 = 2;
                            tex_entry_alloc(ar4_01, iVar2 + 0x14, ar6_00, 2, ar7_00);
                            *(u16 *)(*ar4_01 + 0x40) = *(u16 *)(iVar2 + 0x40);
                            *(u16 *)(*ar4_01 + 0x42) = 0;
                        LAB_8c23a6a8:
                            piVar6 = *(int **)(iVar2 + 0x14);
                            uVar5 = 3;
                        }
                        tex_entry_set_flags(ar6_00, uVar5, piVar6, a3, ain0);
                    }
                } else if (iVar2 == 1) {
                    pvr_stream_find_pvrt(auStack_54, iVar4, piVar6, a3);
                    iVar2 = iStack_68 * 0x44 + g_8c277b08;
                    *(int *)(ar4_00 + 8) = iVar2;
                    uVar3 = *(u32 *)(ar4_00 + 4) & 0xa0000000;
                    if (uVar3 == 0) {
                        if ((*(u32 *)(iVar2 + 0x10) & 2) == 0) {
                            ar5_00 = iVar2 + 0x14;
                            iVar4 = tex_calls_test_25a914(ar4_00, ar5_00, piVar6, a3);
                            if (iVar4 < 0)
                                goto LAB_8c23a6de;
                            *(u16 *)(iVar2 + 0x42) = 0;
                            if (ain0 != 0) {
                            LAB_8c23a6f0:
                                piVar6 = *(int **)(iVar2 + 0x14);
                                tex_entry_set_flags(ar6_00, 2, piVar6, a3, ain0);
                                *(u32 *)(iVar2 + 0x10) = *(u32 *)(iVar2 + 0x10) | 8;
                                goto LAB_8c23a852;
                            }
                        LAB_8c23a728:
                            tex_uses_tex_size_to_index_2571fe(iVar2);
                            *(u32 *)(iVar2 + 0x10) = *(u32 *)(iVar2 + 0x10) | 2;
                        } else {
                        joined_r0x8c23a628:
                            if (ain0 != 0)
                                goto LAB_8c23a6c4;
                        }
                    LAB_8c23a734:
                        *(short *)(iVar2 + 0x40) = *(short *)(iVar2 + 0x40) + 1;
                    } else if (uVar3 == 0x80000000) {
                        if ((*(u32 *)(iVar2 + 0x10) & 1) == 0) {
                            iVar4 = tex_copy_to_alloc(ar4_00, iVar2 + 0x14);
                            if (iVar4 < 0)
                                goto LAB_8c23a6de;
                            *(u16 *)(iVar2 + 0x42) = 0;
                            if (ain0 != 0)
                                goto LAB_8c23a674;
                            *(u32 *)(iVar2 + 0x10) = *(u32 *)(iVar2 + 0x10) | 1;
                        }
                    } else if (uVar3 == 0x20000000) {
                        if ((*(u32 *)(iVar2 + 0x10) & 2) == 0) {
                            ar5_00 = iVar2 + 0x14;
                            iVar4 = tex_calls_test_25a914(ar4_00, ar5_00, piVar6, a3);
                            if (-1 < iVar4) {
                                *(u16 *)(iVar2 + 0x42) = 0;
                                if (ain0 == 0)
                                    goto LAB_8c23a728;
                                goto LAB_8c23a6f0;
                            }
                        } else {
                            if ((*(u32 *)(iVar2 + 0x10) & 1) != 0)
                                goto joined_r0x8c23a628;
                            iVar4 = tex_copy_to_alloc(ar4_00, iVar2 + 0x14);
                            if (-1 < iVar4) {
                                *(u16 *)(iVar2 + 0x42) = 0;
                                if (ain0 != 0)
                                    goto LAB_8c23a6a8;
                                *(u32 *)(iVar2 + 0x10) = *(u32 *)(iVar2 + 0x10) | 1;
                                goto LAB_8c23a734;
                            }
                        }
                    LAB_8c23a6de:
                        *(short *)(iVar2 + 0x42) = -(short)iVar4;
                        g_8c4aa6ac = iVar1;
                        g_8c4aa6b0 = ar6_00;
                        goto LAB_8c23a82a;
                    }
                } else if (iVar2 == 2) {
                    pvr_stream_find_pvrt(auStack_54, iVar4, piVar6, a3);
                    uVar5 = tex_entry_next_free();
                    piVar6 = (int *)0x2c;
                    memcpy_bytes(uVar5, auStack_54, 0x2c);
                    uVar3 = *(u32 *)(ar4_00 + 4) & 0xa0000000;
                    if (uVar3 == 0) {
                        iStack_68 = tex_calls_test_25a914(ar4_00, uVar5, piVar6, a3);
                        if (-1 < iStack_68) {
                            a3 = 2;
                            tex_entry_alloc(ar4_00 + 8, uVar5, ar6_00, 2, ar7_00);
                            *(u16 *)(*ar4_01 + 0x42) = 0;
                            piVar6 = ar6_00;
                        joined_r0x8c23a79c:
                            if (ain0 != 0) {
                                *(u32 *)(*ar4_01 + 0x10) = *(u32 *)(*ar4_01 + 0x10) | 8;
                            }
                            goto LAB_8c23a852;
                        }
                    } else if (uVar3 == 0x80000000) {
                        iStack_68 = tex_copy_to_alloc(ar4_00, uVar5);
                        if (-1 < iStack_68) {
                            a3 = 1;
                            tex_entry_alloc(ar4_01, uVar5, ar6_00, 1, ar7_00);
                            piVar6 = ar6_00;
                            goto LAB_8c23a7c0;
                        }
                    } else {
                        if (uVar3 != 0x20000000)
                            goto LAB_8c23a852;
                        iStack_68 = tex_calls_test_25a914(ar4_00, uVar5, piVar6, a3);
                        if (-1 < iStack_68) {
                            iStack_68 = tex_copy_to_alloc(ar4_00, uVar5);
                            if (iStack_68 < 0) {
                                tex_entry_alloc(ar4_01, uVar5, ar6_00, 2, ar7_00);
                                goto LAB_8c23a816;
                            }
                            a3 = 3;
                            tex_entry_alloc(ar4_01, uVar5, ar6_00, 3, ar7_00);
                            *(u16 *)(*ar4_01 + 0x42) = 0;
                            piVar6 = ar6_00;
                            goto joined_r0x8c23a79c;
                        }
                    }
                    tex_entry_alloc(ar4_01, uVar5, ar6_00, 0, ar7_00);
                    goto LAB_8c23a816;
                }
            LAB_8c23a852:
                iStack_5c = iStack_5c + 1;
            } while (iStack_5c < sStack_22);
        }
        uVar5 = 1;
    } else {
        g_8c4aa6b4 = 4;
    LAB_8c23a82a:
        uVar5 = 0xffffffff;
    }
    return uVar5;
}

/*
 * camera_set_direction_to  0x8c23a8a4
 * sets the camera's (a0, or the current one) unit direction (+0x4c..+0x54) toward the point in dr4/dr6 from its
 * position (+0x40) called by: Class_129a24_m3_01a230
 */
u32 camera_set_direction_to(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float fVar1;
    u64 in_dr4;
    float fVar2;
    u64 in_dr6;
    s64 lVar3;
    float fVar4;

    if (a0 == 0) {
        a0 = g_8c4c0cc0;
    }
    fVar2 = (float)((u64)in_dr4 >> 0x20) - *(float *)(a0 + 0x40);
    fVar1 = (float)in_dr4 - *(float *)(a0 + 0x44);
    fVar4 = (float)((u64)in_dr6 >> 0x20) - *(float *)(a0 + 0x48);
    lVar3 = (u64)(u32)fVar4 << 0x20;
    fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0 + fVar4 * fVar4;
    fVar4 = 1.0 / SQRT((float)lVar3);
    *(float *)(a0 + 0x54) = (float)((u64)lVar3 >> 0x20) * fVar4;
    *(float *)(a0 + 0x50) = fVar1 * fVar4;
    *(float *)(a0 + 0x4c) = fVar2 * fVar4;
    return ain0;
}

/*
 * gfxlib_state_switch_23a8d8  0x8c23a8d8
 * area name: in the gfxlib library code range; behaviour name: dispatches on a state or mode value (switch)
 * called by: alt_entry_23c4cc, gfxlib_state_switch_23ab90, gfxlib_state_switch_23ae70, gfxlib_state_switch_23affc,
 * gfxlib_state_switch_23b508, gfxlib_state_switch_23b6dc, gfxlib_state_switch_23c4ba
 */
int gfxlib_state_switch_23a8d8(u32 a0) {
    int in_r0;

    if (a0 < 0x11) {
        in_r0 = (int)(short)(&switchD_8c23a8e4::switchdataD_8c23a8e8)[a0];
        switch (a0) {
        case 0:
            return in_r0;
        case 1:
            return in_r0;
        case 2:
            return in_r0;
        case 3:
            return in_r0;
        case 4:
            return in_r0;
        case 5:
            return in_r0;
        case 6:
            return in_r0;
        case 7:
            return in_r0;
        case 8:
            return in_r0;
        case 9:
            return in_r0;
        case 10:
            return in_r0;
        case 0xb:
            return in_r0;
        case 0xc:
            return in_r0;
        case 0xd:
            return in_r0;
        case 0xe:
            return in_r0;
        case 0xf:
            return in_r0;
        }
    }
    return in_r0;
}

/*
 * global_vec4_add_104  0x8c23a982
 * adds the four floats at a0+0x104 to the vector that g_8c4ab278 points at
 */
u32 global_vec4_add_104(int a0) {
    *g_8c4ab278 = *g_8c4ab278 + *(float *)(a0 + 0x104);
    g_8c4ab278[1] = g_8c4ab278[1] + *(float *)(a0 + 0x108);
    g_8c4ab278[2] = g_8c4ab278[2] + *(float *)(a0 + 0x10c);
    g_8c4ab278[3] = g_8c4ab278[3] + *(float *)(a0 + 0x110);
    return 0xc;
}

/*
 * vec3_add_from_f8  0x8c23a9d0
 * adds the three floats at a0+0xf8 to the vector at a1+4
 */
u32 vec3_add_from_f8(int a0, int a1) {
    *(float *)(a1 + 4) = *(float *)(a1 + 4) + *(float *)(a0 + 0xf8);
    *(float *)(a1 + 8) = *(float *)(a1 + 8) + *(float *)(a0 + 0xfc);
    *(float *)(a1 + 0xc) = *(float *)(a1 + 0xc) + *(float *)(a0 + 0x100);
    return 0xc;
}

/*
 * gfxlib_float_calc_23a9fc  0x8c23a9fc
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23a9fc(int a0, int a1) {
    float fVar1;
    float fVar2;
    float in_fr11;
    float fVar3;

    fVar2 = *(float *)(a0 + 0x10c);
    fVar1 = *(float *)(a0 + 0x110);
    fVar3 = -in_fr11;
    if (0.0 < fVar3) {
        *(float *)(a1 + 4) = fVar3 * *(float *)(a0 + 0x108) + *(float *)(a1 + 4);
        *(float *)(a1 + 8) = fVar3 * fVar2 + *(float *)(a1 + 8);
        *(float *)(a1 + 0xc) = fVar3 * fVar1 + *(float *)(a1 + 0xc);
    }
    return 4;
}

/*
 * gfxlib_float_calc_23aa50  0x8c23aa50
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 *gfxlib_float_calc_23aa50(int a0, int a1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float in_fr11;

    fVar1 = (1.0 - in_fr11) * 0.5;
    fVar3 = *(float *)(a0 + 0x10c);
    fVar2 = *(float *)(a0 + 0x110);
    *(float *)(a1 + 4) = fVar1 * *(float *)(a0 + 0x108) + *(float *)(a1 + 4);
    *(float *)(a1 + 8) = fVar1 * fVar3 + *(float *)(a1 + 8);
    *(float *)(a1 + 0xc) = fVar1 * fVar2 + *(float *)(a1 + 0xc);
    return &g_8c23aaa0;
}

/*
 * gfxlib_float_calc_23aaa8  0x8c23aaa8
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23aaa8(int a0, int a1) {
    u32 uVar1;
    float fVar2;
    float in_fr3;
    float fVar3;
    float fVar4;
    float in_fr11;

    uVar1 = (u32)(in_fr11 < *(float *)(a0 + 0x6c)) << 1 | (u32)(0.0 < in_fr3);
    if (uVar1 == 3) {
        uVar1 = 4;
        if (*(float *)(a0 + 0x68) < in_fr11) {
            in_fr3 = (in_fr3 / in_fr11) * *(float *)(a0 + 0x68);
        }
        fVar2 = in_fr3 * (1.0 / SQRT(in_fr11));
        fVar4 = *(float *)(a0 + 0x10c);
        fVar3 = *(float *)(a0 + 0x110);
        *(float *)(a1 + 4) = fVar2 * *(float *)(a0 + 0x108) + *(float *)(a1 + 4);
        *(float *)(a1 + 8) = fVar2 * fVar4 + *(float *)(a1 + 8);
        *(float *)(a1 + 0xc) = fVar2 * fVar3 + *(float *)(a1 + 0xc);
    }
    return uVar1;
}

/*
 * gfxlib_float_calc_23ab30  0x8c23ab30
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23ab30(int a0, int a1) {
    u32 in_r0;
    float fVar1;
    float fVar2;
    float in_fr11;
    float fVar3;

    if (*(float *)(a0 + 0x60) != 0.0) {
        in_r0 = 4;
        fVar2 = *(float *)(a0 + 0x10c);
        fVar1 = *(float *)(a0 + 0x110);
        if (0.0 < in_fr11) {
            fVar3 = in_fr11 * *(float *)(a0 + 0x60);
            *(float *)(a1 + 4) = fVar3 * *(float *)(a0 + 0x108) + *(float *)(a1 + 4);
            *(float *)(a1 + 8) = fVar3 * fVar2 + *(float *)(a1 + 8);
            *(float *)(a1 + 0xc) = fVar3 * fVar1 + *(float *)(a1 + 0xc);
        }
    }
    return in_r0;
}

/*
 * gfxlib_state_switch_23ab90  0x8c23ab90
 * area name: in the gfxlib library code range; behaviour name: mostly calls state_switch functions
 * decompiler: Heritage AFTER dead removal. Example location: s0xfffffff4 : 0x8c23ac22
 */
u32 gfxlib_state_switch_23ab90(int a0, float *a1) {
    u32 uVar1;
    float *pfVar2;
    float *pfVar3;
    int *piVar4;
    float fVar6;
    double dVar5;
    float in_fr3;
    u64 uVar7;
    float fVar9;
    u64 uVar8;
    float fVar10;
    u64 uVar11;
    float fVar12;
    float in_fr11;
    u64 in_xd4;
    char cVar13;
    char cVar14;
    int iStack_c;
    u8 auStack_8[4];
    u8 auStack_4[4];

    cVar14 = '\0';
    cVar13 = '\0';
    fVar12 = 1.0 / in_fr11;
    fVar10 = 0.0;
    fVar6 = in_fr3 * in_fr3 * fVar12;
    fVar9 = in_fr3 * in_fr3 * fVar12;
    uVar1 = (((u32)(0.0 < in_fr3) << 1 | (u32)(in_fr11 < *(float *)(a0 + 0x6c))) << 1 | (u32)(0.0 < -in_fr3)) << 1 |
            (u32)(*(float *)(a0 + 0x74) < fVar9);
    if (uVar1 == 0xf) {
        if (*(float *)(a0 + 0x68) < in_fr11) {
            fVar6 = fVar6 * *(float *)(a0 + 0x68) * fVar12;
        }
        if (*(float *)(a0 + 0x70) <= fVar9) {
            fVar10 = *(float *)(a0 + 0x114);
            dVar5 = (double)CONCAT44(fVar6, *(float *)(a0 + 0x118));
            fVar12 = *(float *)(a0 + 0x11c);
            fVar9 = *(float *)(a0 + 0x120);
            a1[5] = fVar6 * *(float *)(a0 + 0x118) + a1[5];
            a1[6] = fVar6 * fVar12 + a1[6];
            a1[7] = fVar6 * fVar9 + a1[7];
            *a1 = fVar6 * fVar10 + *a1;
        } else {
            dVar5 = (double)CONCAT44(fVar6 * *(float *)(a0 + 0x80), *(u32 *)(a0 + 0xa0));
            gfxlib_state_switch_23a8d8(*(u32 *)(a0 + 0x88));
            if (cVar14 == '\0') {
                dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), iStack_c);
                piVar4 = (int *)auStack_8;
            } else {
                piVar4 = (int *)auStack_4;
            }
            a0 = *piVar4;
            if (cVar13 == '\0') {
                dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
            } else {
                dVar5 = dVar5 * dVar5;
            }
        }
        uVar1 = 4;
        pfVar3 = a1 + 1;
        if (cVar14 == '\0') {
            dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), *(u32 *)(a0 + 0x108));
            uVar7 = CONCAT44(*(u32 *)(a0 + 0x10c), *(u32 *)(a0 + 0x110));
            uVar8 = CONCAT44(*pfVar3, a1[2]);
            pfVar2 = a1 + 3;
            uVar11 = CONCAT44(*pfVar2, fVar10);
        } else {
            uVar7 = *(u64 *)(a0 + 0x110);
            uVar8 = *(u64 *)pfVar3;
            in_xd4 = *(u64 *)(a1 + 3);
            pfVar2 = a1 + 5;
            uVar11 = *(u64 *)pfVar2;
        }
        fVar6 = (float)((u64)dVar5 >> 0x20);
        if (cVar13 == '\0') {
            uVar8 = CONCAT44(fVar6 * SUB84(dVar5, 0) + (float)((u64)uVar8 >> 0x20),
                             fVar6 * (float)((u64)uVar7 >> 0x20) + (float)uVar8);
            uVar11 = CONCAT44(fVar6 * (float)uVar7 + (float)((u64)uVar11 >> 0x20), (int)uVar11);
        }
        if (cVar14 == '\0') {
            *pfVar3 = (float)((u64)uVar8 >> 0x20);
            a1[2] = (float)uVar8;
            *pfVar2 = (float)((u64)uVar11 >> 0x20);
        } else {
            *(u64 *)pfVar3 = uVar8;
            *(u64 *)(a1 + 2) = in_xd4;
            *(u64 *)pfVar2 = uVar11;
        }
    }
    return uVar1;
}

/*
 * gfxlib_float_calc_23ac12  0x8c23ac12
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23ac12(int a0, int a1, u32 a2, u32 a3, int ain0) {
    u64 *puVar1;
    code *in_r3;
    u64 *puVar2;
    int iVar3;
    int *piVar4;
    u64 in_dr0;
    float fVar6;
    double dVar5;
    u64 uVar7;
    u64 uVar8;
    u32 in_fr7;
    u64 uVar9;
    u64 in_xd4;
    char cVar10;
    char cVar11;
    int iStack_8;
    u8 auStack_4[4];

    cVar11 = '\0';
    cVar10 = '\0';
    fVar6 = (float)((u64)in_dr0 >> 0x20) * *(float *)(ain0 + a0);
    dVar5 = (double)CONCAT44(fVar6, (int)in_dr0);
    iStack_8 = a0;
    (*in_r3)(*(u32 *)(a0 + 0x88), a1, a2, a3, fVar6);
    if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), fVar6);
        piVar4 = &iStack_8;
    } else {
        piVar4 = (int *)auStack_4;
    }
    iVar3 = *piVar4;
    if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
    } else {
        dVar5 = dVar5 * dVar5;
    }
    puVar2 = (u64 *)(a1 + 4);
    if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), *(u32 *)(iVar3 + 0x108));
        uVar7 = CONCAT44(*(u32 *)(iVar3 + 0x10c), *(u32 *)(iVar3 + 0x110));
        uVar8 = CONCAT44(*(u32 *)puVar2, *(u32 *)(a1 + 8));
        puVar1 = (u64 *)(a1 + 0xc);
        uVar9 = CONCAT44(*(u32 *)puVar1, in_fr7);
    } else {
        uVar7 = *(u64 *)(iVar3 + 0x110);
        uVar8 = *puVar2;
        in_xd4 = *(u64 *)(a1 + 0xc);
        puVar1 = (u64 *)(a1 + 0x14);
        uVar9 = *puVar1;
    }
    fVar6 = (float)((u64)dVar5 >> 0x20);
    if (cVar10 == '\0') {
        uVar8 = CONCAT44(fVar6 * SUB84(dVar5, 0) + (float)((u64)uVar8 >> 0x20),
                         fVar6 * (float)((u64)uVar7 >> 0x20) + (float)uVar8);
        uVar9 = CONCAT44(fVar6 * (float)uVar7 + (float)((u64)uVar9 >> 0x20), (int)uVar9);
    }
    if (cVar11 == '\0') {
        *(int *)puVar2 = (int)((u64)uVar8 >> 0x20);
        *(int *)(a1 + 8) = (int)uVar8;
        *(int *)puVar1 = (int)((u64)uVar9 >> 0x20);
    } else {
        *puVar2 = uVar8;
        *(u64 *)(a1 + 8) = in_xd4;
        *puVar1 = uVar9;
    }
    return 4;
}

/*
 * gfxlib_float_calc_23aca8  0x8c23aca8
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23aca8(int a0, float *a1) {
    u32 uVar1;
    float fVar2;
    float in_fr3;
    float fVar3;
    float fVar4;
    float fVar5;
    float in_fr11;

    fVar5 = 1.0 / in_fr11;
    fVar2 = in_fr3 * in_fr3 * fVar5;
    fVar3 = in_fr3 * in_fr3 * fVar5;
    uVar1 = (((u32)(0.0 < in_fr3) << 1 | (u32)(in_fr11 < *(float *)(a0 + 0x6c))) << 1 | (u32)(0.0 < -in_fr3)) << 1 |
            (u32)(*(float *)(a0 + 0x74) < fVar3);
    if (uVar1 == 0xf) {
        if (*(float *)(a0 + 0x68) < in_fr11) {
            fVar2 = fVar2 * *(float *)(a0 + 0x68) * fVar5;
        }
        if (*(float *)(a0 + 0x70) <= fVar3) {
            fVar4 = *(float *)(a0 + 0x114);
            fVar5 = *(float *)(a0 + 0x11c);
            fVar3 = *(float *)(a0 + 0x120);
            a1[5] = fVar2 * *(float *)(a0 + 0x118) + a1[5];
            a1[6] = fVar2 * fVar5 + a1[6];
            a1[7] = fVar2 * fVar3 + a1[7];
            *a1 = fVar2 * fVar4 + *a1;
        } else {
            fVar2 = fVar2 * *(float *)(a0 + 0x80) * (fVar3 - *(float *)(a0 + 0x74));
        }
        uVar1 = 4;
        fVar5 = *(float *)(a0 + 0x10c);
        fVar3 = *(float *)(a0 + 0x110);
        a1[1] = fVar2 * *(float *)(a0 + 0x108) + a1[1];
        a1[2] = fVar2 * fVar5 + a1[2];
        a1[3] = fVar2 * fVar3 + a1[3];
    }
    return uVar1;
}

/*
 * gfxlib_float_calc_23ada8  0x8c23ada8
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23ada8(int a0, float *a1) {
    u32 in_r0;
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float in_fr11;

    if (*(float *)(a0 + 0x60) != 0.0) {
        in_r0 = 4;
        fVar1 = *(float *)(a0 + 0x60) * in_fr11 * in_fr11;
        if (0.0 < in_fr11) {
            if (*(float *)(a0 + 0x70) < *(float *)(a0 + 100)) {
                fVar4 = *(float *)(a0 + 0x114);
                fVar3 = *(float *)(a0 + 0x11c);
                fVar2 = *(float *)(a0 + 0x120);
                a1[5] = fVar1 * *(float *)(a0 + 0x118) + a1[5];
                a1[6] = fVar1 * fVar3 + a1[6];
                a1[7] = fVar1 * fVar2 + a1[7];
                *a1 = fVar1 * fVar4 + *a1;
            }
            fVar3 = *(float *)(a0 + 0x10c);
            fVar2 = *(float *)(a0 + 0x110);
            a1[1] = fVar1 * *(float *)(a0 + 0x108) + a1[1];
            a1[2] = fVar1 * fVar3 + a1[2];
            a1[3] = fVar1 * fVar2 + a1[3];
        }
    }
    return in_r0;
}

/*
 * gfxlib_calc_23ae48  0x8c23ae48
 * area name: in the gfxlib library code range; behaviour name: integer arithmetic on its arguments
 */
u32 gfxlib_calc_23ae48(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(0x13c + a0))(a1, a2, a3, a0);
    return uVar1;
}

/*
 * gfxlib_state_switch_23ae70  0x8c23ae70
 * area name: in the gfxlib library code range; behaviour name: mostly calls state_switch functions
 */
u32 gfxlib_state_switch_23ae70(int a0, u64 *a1) {
    u64 *puVar1;
    u64 *puVar2;
    float fVar3;
    float fVar5;
    double dVar4;
    float fVar6;
    float fVar8;
    u64 uVar7;
    u64 uVar9;
    u64 uVar10;
    float fVar11;
    float fVar13;
    u64 uVar12;
    float in_fr11;
    u64 in_xd4;
    char cVar14;
    char cVar15;

    cVar15 = '\0';
    cVar14 = '\0';
    if (in_fr11 < 0.0) {
        fVar13 = *(float *)(a0 + 0x70);
        fVar5 = -in_fr11;
        fVar11 = *(float *)(a0 + 0x74);
        fVar3 = *(float *)(a0 + 0x108);
        fVar8 = *(float *)(a0 + 0x10c);
        fVar6 = *(float *)(a0 + 0x110);
        *(float *)((int)a1 + 4) = fVar5 * fVar3 + *(float *)((int)a1 + 4);
        *(float *)(a1 + 1) = fVar5 * fVar8 + *(float *)(a1 + 1);
        *(float *)((int)a1 + 0xc) = fVar5 * fVar6 + *(float *)((int)a1 + 0xc);
        if (fVar11 < in_fr11 * in_fr11) {
            dVar4 = (double)CONCAT44(0x3f800000, fVar3);
            if (in_fr11 * in_fr11 < fVar13) {
                dVar4 = (double)CONCAT44(0x3f800000, *(u32 *)(a0 + 0x80));
                gfxlib_state_switch_23a8d8(*(u32 *)(a0 + 0x88));
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * SUB84(dVar4, 0), SUB84(dVar4, 0));
                } else {
                    dVar4 = dVar4 * dVar4;
                }
            }
            puVar2 = (u64 *)((int)a1 + 0x14);
            if (cVar15 == '\0') {
                uVar12 = CONCAT44(*(u32 *)a1, fVar11);
                dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), *(u32 *)(a0 + 0x118));
                uVar7 = CONCAT44(*(u32 *)(a0 + 0x11c), *(u32 *)(a0 + 0x120));
                uVar9 = CONCAT44(*(u32 *)puVar2, *(u32 *)(a1 + 3));
                puVar1 = (u64 *)((int)a1 + 0x1c);
                uVar10 = CONCAT44(*(u32 *)puVar1, *(u32 *)(a0 + 0x114));
            } else {
                uVar12 = *a1;
                uVar7 = *(u64 *)(a0 + 0x124);
                uVar9 = *puVar2;
                in_xd4 = *(u64 *)((int)a1 + 0x1c);
                puVar1 = (u64 *)((int)a1 + 0x24);
                uVar10 = *puVar1;
            }
            fVar3 = (float)((u64)dVar4 >> 0x20);
            if (cVar14 == '\0') {
                uVar9 = CONCAT44(fVar3 * SUB84(dVar4, 0) + (float)((u64)uVar9 >> 0x20),
                                 fVar3 * (float)((u64)uVar7 >> 0x20) + (float)uVar9);
                fVar5 = (float)uVar10;
                uVar10 = CONCAT44(fVar3 * (float)uVar7 + (float)((u64)uVar10 >> 0x20), fVar5);
                uVar12 = CONCAT44(fVar3 * fVar5 + (float)((u64)uVar12 >> 0x20), (int)uVar12);
            }
            if (cVar15 == '\0') {
                *(int *)puVar2 = (int)((u64)uVar9 >> 0x20);
                *(int *)(a1 + 3) = (int)uVar9;
                *(int *)puVar1 = (int)((u64)uVar10 >> 0x20);
                *(int *)a1 = (int)((u64)uVar12 >> 0x20);
            } else {
                *puVar2 = uVar9;
                a1[3] = in_xd4;
                *puVar1 = uVar10;
                *a1 = uVar12;
            }
        }
    }
    return 4;
}

/*
 * gfxlib_float_calc_23aece  0x8c23aece
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23aece(int a0, u64 *a1, u32 a2, u32 a3, int ain0) {
    u64 *puVar1;
    code *in_r3;
    u64 *puVar2;
    u64 in_dr0;
    double dVar3;
    float fVar4;
    u64 uVar5;
    u64 uVar6;
    float fVar7;
    u64 uVar8;
    u32 in_fr9;
    u64 uVar9;
    u64 in_xd4;
    char cVar10;
    char cVar11;

    cVar11 = '\0';
    cVar10 = '\0';
    dVar3 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(ain0 + a0));
    (*in_r3)(*(u32 *)(a0 + 0x88), a1, a2, a3, a0);
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) * SUB84(dVar3, 0), SUB84(dVar3, 0));
    } else {
        dVar3 = dVar3 * dVar3;
    }
    puVar2 = (u64 *)((int)a1 + 0x14);
    if (cVar11 == '\0') {
        uVar9 = CONCAT44(*(u32 *)a1, in_fr9);
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), *(u32 *)(a0 + 0x118));
        uVar5 = CONCAT44(*(u32 *)(a0 + 0x11c), *(u32 *)(a0 + 0x120));
        uVar6 = CONCAT44(*(u32 *)puVar2, *(u32 *)(a1 + 3));
        puVar1 = (u64 *)((int)a1 + 0x1c);
        uVar8 = CONCAT44(*(u32 *)puVar1, *(u32 *)(a0 + 0x114));
    } else {
        uVar9 = *a1;
        uVar5 = *(u64 *)(a0 + 0x124);
        uVar6 = *puVar2;
        in_xd4 = *(u64 *)((int)a1 + 0x1c);
        puVar1 = (u64 *)((int)a1 + 0x24);
        uVar8 = *puVar1;
    }
    fVar4 = (float)((u64)dVar3 >> 0x20);
    if (cVar10 == '\0') {
        uVar6 = CONCAT44(fVar4 * SUB84(dVar3, 0) + (float)((u64)uVar6 >> 0x20),
                         fVar4 * (float)((u64)uVar5 >> 0x20) + (float)uVar6);
        fVar7 = (float)uVar8;
        uVar8 = CONCAT44(fVar4 * (float)uVar5 + (float)((u64)uVar8 >> 0x20), fVar7);
        uVar9 = CONCAT44(fVar4 * fVar7 + (float)((u64)uVar9 >> 0x20), (int)uVar9);
    }
    if (cVar11 == '\0') {
        *(int *)puVar2 = (int)((u64)uVar6 >> 0x20);
        *(int *)(a1 + 3) = (int)uVar6;
        *(int *)puVar1 = (int)((u64)uVar8 >> 0x20);
        *(int *)a1 = (int)((u64)uVar9 >> 0x20);
    } else {
        *puVar2 = uVar6;
        a1[3] = in_xd4;
        *puVar1 = uVar8;
        *a1 = uVar9;
    }
    return 4;
}

/*
 * gfxlib_float_calc_23af2c  0x8c23af2c
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23af2c(int a0, float *a1) {
    u32 uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float in_fr11;
    float fVar7;

    uVar1 = 4;
    if (in_fr11 < 0.0) {
        fVar7 = in_fr11 * in_fr11;
        fVar6 = *(float *)(a0 + 0x70);
        fVar2 = -in_fr11;
        fVar5 = *(float *)(a0 + 0x74);
        fVar4 = *(float *)(a0 + 0x10c);
        fVar3 = *(float *)(a0 + 0x110);
        a1[1] = fVar2 * *(float *)(a0 + 0x108) + a1[1];
        a1[2] = fVar2 * fVar4 + a1[2];
        a1[3] = fVar2 * fVar3 + a1[3];
        if (fVar5 < fVar7) {
            fVar2 = 1.0;
            if (fVar7 < fVar6) {
                fVar2 = 1.0;
                uVar1 = 0x100;
                if ((int)(fVar7 * 256.0) < 0x100) {
                    fVar2 = *(float *)(&g_8c26d970 + (*(int *)(a0 + 0x88) * 0x100 + (int)(fVar7 * 256.0)) * 4) *
                            *(float *)(a0 + 0x80);
                }
            }
            fVar5 = *(float *)(a0 + 0x114);
            fVar4 = *(float *)(a0 + 0x11c);
            fVar3 = *(float *)(a0 + 0x120);
            a1[5] = fVar2 * *(float *)(a0 + 0x118) + a1[5];
            a1[6] = fVar2 * fVar4 + a1[6];
            a1[7] = fVar2 * fVar3 + a1[7];
            *a1 = fVar2 * fVar5 + *a1;
        }
    }
    return uVar1;
}

/*
 * gfxlib_state_switch_23affc  0x8c23affc
 * area name: in the gfxlib library code range; behaviour name: mostly calls state_switch functions
 */
u32 gfxlib_state_switch_23affc(int a0, u64 *a1) {
    u32 uVar1;
    u64 *puVar2;
    u64 *puVar3;
    float fVar4;
    double dVar5;
    float in_fr3;
    float fVar6;
    float fVar8;
    u64 uVar7;
    u64 uVar9;
    u64 uVar10;
    float fVar11;
    float fVar13;
    u64 uVar12;
    float in_fr11;
    float fVar14;
    float fVar15;
    u64 in_xd4;
    char cVar16;
    char cVar17;

    cVar17 = '\0';
    cVar16 = '\0';
    uVar1 = (u32)(in_fr11 < *(float *)(a0 + 0x6c)) << 1 | (u32)(0.0 < in_fr3);
    if (uVar1 == 3) {
        fVar14 = 1.0 / SQRT(in_fr11);
        uVar1 = 4;
        fVar15 = 1.0;
        if (*(float *)(a0 + 0x68) < in_fr11) {
            fVar15 = fVar14 * fVar14 * *(float *)(a0 + 0x68);
        }
        fVar13 = *(float *)(a0 + 0x70);
        fVar11 = *(float *)(a0 + 0x74);
        fVar4 = *(float *)(a0 + 0x108);
        fVar14 = in_fr3 * fVar14;
        fVar8 = *(float *)(a0 + 0x10c);
        fVar6 = *(float *)(a0 + 0x110);
        *(float *)((int)a1 + 4) = fVar14 * fVar4 + *(float *)((int)a1 + 4);
        *(float *)(a1 + 1) = fVar14 * fVar8 + *(float *)(a1 + 1);
        dVar5 = (double)CONCAT44(fVar15, fVar4);
        *(float *)((int)a1 + 0xc) = fVar14 * fVar6 + *(float *)((int)a1 + 0xc);
        if (fVar11 < fVar14 * fVar14) {
            if (fVar14 * fVar14 < fVar13) {
                dVar5 = (double)CONCAT44(fVar15, *(float *)(a0 + 0x80) * fVar15);
                gfxlib_state_switch_23a8d8(*(u32 *)(a0 + 0x88));
                if (cVar16 == '\0') {
                    dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
                } else {
                    dVar5 = dVar5 * dVar5;
                }
            }
            uVar1 = 4;
            puVar3 = (u64 *)((int)a1 + 0x14);
            if (cVar17 == '\0') {
                uVar12 = CONCAT44(*(u32 *)a1, fVar11);
                dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), *(u32 *)(a0 + 0x118));
                uVar7 = CONCAT44(*(u32 *)(a0 + 0x11c), *(u32 *)(a0 + 0x120));
                uVar9 = CONCAT44(*(u32 *)puVar3, *(u32 *)(a1 + 3));
                puVar2 = (u64 *)((int)a1 + 0x1c);
                uVar10 = CONCAT44(*(u32 *)puVar2, *(u32 *)(a0 + 0x114));
            } else {
                uVar12 = *a1;
                uVar7 = *(u64 *)(a0 + 0x124);
                uVar9 = *puVar3;
                in_xd4 = *(u64 *)((int)a1 + 0x1c);
                puVar2 = (u64 *)((int)a1 + 0x24);
                uVar10 = *puVar2;
            }
            fVar14 = (float)((u64)dVar5 >> 0x20);
            if (cVar16 == '\0') {
                uVar9 = CONCAT44(fVar14 * SUB84(dVar5, 0) + (float)((u64)uVar9 >> 0x20),
                                 fVar14 * (float)((u64)uVar7 >> 0x20) + (float)uVar9);
                fVar15 = (float)uVar10;
                uVar10 = CONCAT44(fVar14 * (float)uVar7 + (float)((u64)uVar10 >> 0x20), fVar15);
                uVar12 = CONCAT44(fVar14 * fVar15 + (float)((u64)uVar12 >> 0x20), (int)uVar12);
            }
            if (cVar17 == '\0') {
                *(int *)puVar3 = (int)((u64)uVar9 >> 0x20);
                *(int *)(a1 + 3) = (int)uVar9;
                *(int *)puVar2 = (int)((u64)uVar10 >> 0x20);
                *(int *)a1 = (int)((u64)uVar12 >> 0x20);
            } else {
                *puVar3 = uVar9;
                a1[3] = in_xd4;
                *puVar2 = uVar10;
                *a1 = uVar12;
            }
        }
    }
    return uVar1;
}

/*
 * gfxlib_float_calc_23b094  0x8c23b094
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b094(int a0, u64 *a1, u32 a2, u32 a3, int ain0) {
    u64 *puVar1;
    code *in_r3;
    u64 *puVar2;
    u64 in_dr0;
    float fVar4;
    double dVar3;
    u64 uVar5;
    u64 uVar6;
    float fVar7;
    u64 uVar8;
    u32 in_fr9;
    u64 uVar9;
    u64 in_xd4;
    char cVar10;
    char cVar11;

    cVar11 = '\0';
    cVar10 = '\0';
    fVar4 = (float)((u64)in_dr0 >> 0x20);
    dVar3 = (double)CONCAT44(fVar4, *(float *)(ain0 + a0) * fVar4);
    (*in_r3)(*(u32 *)(a0 + 0x88), a1, a2, a3, a0);
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) * SUB84(dVar3, 0), SUB84(dVar3, 0));
    } else {
        dVar3 = dVar3 * dVar3;
    }
    puVar2 = (u64 *)((int)a1 + 0x14);
    if (cVar11 == '\0') {
        uVar9 = CONCAT44(*(u32 *)a1, in_fr9);
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), *(u32 *)(a0 + 0x118));
        uVar5 = CONCAT44(*(u32 *)(a0 + 0x11c), *(u32 *)(a0 + 0x120));
        uVar6 = CONCAT44(*(u32 *)puVar2, *(u32 *)(a1 + 3));
        puVar1 = (u64 *)((int)a1 + 0x1c);
        uVar8 = CONCAT44(*(u32 *)puVar1, *(u32 *)(a0 + 0x114));
    } else {
        uVar9 = *a1;
        uVar5 = *(u64 *)(a0 + 0x124);
        uVar6 = *puVar2;
        in_xd4 = *(u64 *)((int)a1 + 0x1c);
        puVar1 = (u64 *)((int)a1 + 0x24);
        uVar8 = *puVar1;
    }
    fVar4 = (float)((u64)dVar3 >> 0x20);
    if (cVar10 == '\0') {
        uVar6 = CONCAT44(fVar4 * SUB84(dVar3, 0) + (float)((u64)uVar6 >> 0x20),
                         fVar4 * (float)((u64)uVar5 >> 0x20) + (float)uVar6);
        fVar7 = (float)uVar8;
        uVar8 = CONCAT44(fVar4 * (float)uVar5 + (float)((u64)uVar8 >> 0x20), fVar7);
        uVar9 = CONCAT44(fVar4 * fVar7 + (float)((u64)uVar9 >> 0x20), (int)uVar9);
    }
    if (cVar11 == '\0') {
        *(int *)puVar2 = (int)((u64)uVar6 >> 0x20);
        *(int *)(a1 + 3) = (int)uVar6;
        *(int *)puVar1 = (int)((u64)uVar8 >> 0x20);
        *(int *)a1 = (int)((u64)uVar9 >> 0x20);
    } else {
        *puVar2 = uVar6;
        a1[3] = in_xd4;
        *puVar1 = uVar8;
        *a1 = uVar9;
    }
    return 4;
}

/*
 * gfxlib_float_calc_23b0f8  0x8c23b0f8
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b0f8(int a0, float *a1) {
    u32 uVar1;
    float in_fr3;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float in_fr11;
    float fVar7;
    float fVar8;

    uVar1 = (u32)(in_fr11 < *(float *)(a0 + 0x6c)) << 1 | (u32)(0.0 < in_fr3);
    if (uVar1 == 3) {
        fVar7 = 1.0 / SQRT(in_fr11);
        uVar1 = 4;
        fVar8 = 1.0;
        if (*(float *)(a0 + 0x68) < in_fr11) {
            fVar8 = fVar7 * fVar7 * *(float *)(a0 + 0x68);
        }
        fVar6 = *(float *)(a0 + 0x70);
        fVar5 = *(float *)(a0 + 0x74);
        fVar7 = in_fr3 * fVar7;
        fVar3 = *(float *)(a0 + 0x10c);
        fVar2 = *(float *)(a0 + 0x110);
        fVar4 = fVar7 * fVar7;
        a1[1] = fVar7 * *(float *)(a0 + 0x108) + a1[1];
        a1[2] = fVar7 * fVar3 + a1[2];
        a1[3] = fVar7 * fVar2 + a1[3];
        if (fVar5 < fVar4) {
            if (fVar4 < fVar6) {
                if ((int)(fVar4 * 256.0) < 0x100) {
                    fVar8 = *(float *)(&g_8c26d970 + (*(int *)(a0 + 0x88) * 0x100 + (int)(fVar4 * 256.0)) * 4) *
                            *(float *)(a0 + 0x80) * fVar8;
                }
            }
            uVar1 = 4;
            fVar3 = *(float *)(a0 + 0x114);
            fVar2 = *(float *)(a0 + 0x11c);
            fVar7 = *(float *)(a0 + 0x120);
            a1[5] = fVar8 * *(float *)(a0 + 0x118) + a1[5];
            a1[6] = fVar8 * fVar2 + a1[6];
            a1[7] = fVar8 * fVar7 + a1[7];
            *a1 = fVar8 * fVar3 + *a1;
        }
    }
    return uVar1;
}

/*
 * gfxlib_float_calc_23b208  0x8c23b208
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b208(int a0, float *a1) {
    u32 in_r0;
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float in_fr11;
    float fVar6;

    fVar1 = *(float *)(a0 + 0x60);
    if (fVar1 != 0.0) {
        in_r0 = 4;
        if (0.0 < in_fr11) {
            fVar6 = in_fr11 * in_fr11;
            fVar5 = *(float *)(a0 + 0x70);
            fVar4 = *(float *)(a0 + 0x74);
            fVar3 = *(float *)(a0 + 0x10c);
            fVar2 = *(float *)(a0 + 0x110);
            a1[1] = in_fr11 * *(float *)(a0 + 0x108) + a1[1];
            a1[2] = in_fr11 * fVar3 + a1[2];
            a1[3] = in_fr11 * fVar2 + a1[3];
            if (fVar4 < fVar6) {
                if (fVar6 < fVar5) {
                    in_r0 = 0x100;
                    if ((int)(fVar6 * 256.0) < 0x100) {
                        fVar1 = *(float *)(&g_8c26d970 + (*(int *)(a0 + 0x88) * 0x100 + (int)(fVar6 * 256.0)) * 4) *
                                *(float *)(a0 + 0x80) * fVar1;
                    }
                }
                fVar4 = *(float *)(a0 + 0x114);
                fVar3 = *(float *)(a0 + 0x11c);
                fVar2 = *(float *)(a0 + 0x120);
                a1[5] = fVar1 * *(float *)(a0 + 0x118) + a1[5];
                a1[6] = fVar1 * fVar3 + a1[6];
                a1[7] = fVar1 * fVar2 + a1[7];
                *a1 = fVar1 * fVar4 + *a1;
            }
        }
    }
    return in_r0;
}

/*
 * gfxlib_float_calc_23b2e4  0x8c23b2e4
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b2e4(int a0, int a1) {
    float fVar1;
    float fVar2;
    float in_fr11;
    float fVar3;

    *(float *)(a1 + 4) = *(float *)(a1 + 4) + *(float *)(a0 + 0xf8);
    *(float *)(a1 + 8) = *(float *)(a1 + 8) + *(float *)(a0 + 0xfc);
    *(float *)(a1 + 0xc) = *(float *)(a1 + 0xc) + *(float *)(a0 + 0x100);
    fVar2 = *(float *)(a0 + 0x10c);
    fVar1 = *(float *)(a0 + 0x110);
    if (in_fr11 <= 0.0) {
        fVar3 = -in_fr11;
        *(float *)(a1 + 4) = fVar3 * *(float *)(a0 + 0x108) + *(float *)(a1 + 4);
        *(float *)(a1 + 8) = fVar3 * fVar2 + *(float *)(a1 + 8);
        *(float *)(a1 + 0xc) = fVar3 * fVar1 + *(float *)(a1 + 0xc);
    }
    return 4;
}

/*
 * gfxlib_float_calc_23b35c  0x8c23b35c
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 *gfxlib_float_calc_23b35c(int a0, int a1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float in_fr11;

    *(float *)(a1 + 4) = *(float *)(a1 + 4) + *(float *)(a0 + 0xf8);
    *(float *)(a1 + 8) = *(float *)(a1 + 8) + *(float *)(a0 + 0xfc);
    *(float *)(a1 + 0xc) = *(float *)(a1 + 0xc) + *(float *)(a0 + 0x100);
    fVar1 = (1.0 - in_fr11) * 0.5;
    fVar3 = *(float *)(a0 + 0x10c);
    fVar2 = *(float *)(a0 + 0x110);
    *(float *)(a1 + 4) = fVar1 * *(float *)(a0 + 0x108) + *(float *)(a1 + 4);
    *(float *)(a1 + 8) = fVar1 * fVar3 + *(float *)(a1 + 8);
    *(float *)(a1 + 0xc) = fVar1 * fVar2 + *(float *)(a1 + 0xc);
    return &g_8c23b3d0;
}

/*
 * gfxlib_float_calc_23b3d8  0x8c23b3d8
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b3d8(int a0, int a1) {
    u32 uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float in_fr11;

    *(float *)(a1 + 4) = *(float *)(a1 + 4) + *(float *)(a0 + 0xf8);
    fVar2 = *(float *)(a0 + 0xfc);
    *(float *)(a1 + 8) = *(float *)(a1 + 8) + fVar2;
    *(float *)(a1 + 0xc) = *(float *)(a1 + 0xc) + *(float *)(a0 + 0x100);
    uVar1 = (u32)(in_fr11 < *(float *)(a0 + 0x6c)) << 1 | (u32)(0.0 < fVar2);
    if (uVar1 == 3) {
        uVar1 = 4;
        if (*(float *)(a0 + 0x68) < in_fr11) {
            fVar2 = (fVar2 / in_fr11) * *(float *)(a0 + 0x68);
        }
        fVar2 = fVar2 * (1.0 / SQRT(in_fr11));
        fVar4 = *(float *)(a0 + 0x10c);
        fVar3 = *(float *)(a0 + 0x110);
        *(float *)(a1 + 4) = fVar2 * *(float *)(a0 + 0x108) + *(float *)(a1 + 4);
        *(float *)(a1 + 8) = fVar2 * fVar4 + *(float *)(a1 + 8);
        *(float *)(a1 + 0xc) = fVar2 * fVar3 + *(float *)(a1 + 0xc);
    }
    return uVar1;
}

/*
 * gfxlib_float_calc_23b484  0x8c23b484
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b484(int a0, int a1) {
    u32 uVar1;
    float fVar2;
    float fVar3;
    float in_fr11;
    float fVar4;

    *(float *)(a1 + 4) = *(float *)(a1 + 4) + *(float *)(a0 + 0xf8);
    *(float *)(a1 + 8) = *(float *)(a1 + 8) + *(float *)(a0 + 0xfc);
    uVar1 = 0xc;
    *(float *)(a1 + 0xc) = *(float *)(a1 + 0xc) + *(float *)(a0 + 0x100);
    if (*(float *)(a0 + 0x60) != 0.0) {
        uVar1 = 4;
        fVar3 = *(float *)(a0 + 0x10c);
        fVar2 = *(float *)(a0 + 0x110);
        if (0.0 < in_fr11) {
            fVar4 = in_fr11 * *(float *)(a0 + 0x60);
            *(float *)(a1 + 4) = fVar4 * *(float *)(a0 + 0x108) + *(float *)(a1 + 4);
            *(float *)(a1 + 8) = fVar4 * fVar3 + *(float *)(a1 + 8);
            *(float *)(a1 + 0xc) = fVar4 * fVar2 + *(float *)(a1 + 0xc);
        }
    }
    return uVar1;
}

/*
 * gfxlib_state_switch_23b508  0x8c23b508
 * area name: in the gfxlib library code range; behaviour name: mostly calls state_switch functions
 */
u32 gfxlib_state_switch_23b508(int a0, u64 *a1) {
    u64 *puVar1;
    u64 *puVar2;
    float fVar3;
    float fVar5;
    double dVar4;
    float fVar6;
    float fVar8;
    u64 uVar7;
    u64 uVar9;
    u64 uVar10;
    float fVar11;
    float fVar13;
    u64 uVar12;
    float in_fr11;
    u64 in_xd4;
    char cVar14;
    char cVar15;

    *(float *)((int)a1 + 4) = *(float *)((int)a1 + 4) + *(float *)(a0 + 0xf8);
    *(float *)(a1 + 1) = *(float *)(a1 + 1) + *(float *)(a0 + 0xfc);
    *(float *)((int)a1 + 0xc) = *(float *)((int)a1 + 0xc) + *(float *)(a0 + 0x100);
    cVar15 = '\0';
    cVar14 = '\0';
    if (in_fr11 < 0.0) {
        fVar13 = *(float *)(a0 + 0x70);
        fVar5 = -in_fr11;
        fVar11 = *(float *)(a0 + 0x74);
        fVar3 = *(float *)(a0 + 0x108);
        fVar8 = *(float *)(a0 + 0x10c);
        fVar6 = *(float *)(a0 + 0x110);
        *(float *)((int)a1 + 4) = fVar5 * fVar3 + *(float *)((int)a1 + 4);
        *(float *)(a1 + 1) = fVar5 * fVar8 + *(float *)(a1 + 1);
        *(float *)((int)a1 + 0xc) = fVar5 * fVar6 + *(float *)((int)a1 + 0xc);
        if (fVar11 < in_fr11 * in_fr11) {
            dVar4 = (double)CONCAT44(0x3f800000, fVar3);
            if (in_fr11 * in_fr11 < fVar13) {
                dVar4 = (double)CONCAT44(0x3f800000, *(u32 *)(a0 + 0x80));
                gfxlib_state_switch_23a8d8(*(u32 *)(a0 + 0x88));
                if (cVar14 == '\0') {
                    dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * SUB84(dVar4, 0), SUB84(dVar4, 0));
                } else {
                    dVar4 = dVar4 * dVar4;
                }
            }
            puVar2 = (u64 *)((int)a1 + 0x14);
            if (cVar15 == '\0') {
                uVar12 = CONCAT44(*(u32 *)a1, fVar11);
                dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), *(u32 *)(a0 + 0x118));
                uVar7 = CONCAT44(*(u32 *)(a0 + 0x11c), *(u32 *)(a0 + 0x120));
                uVar9 = CONCAT44(*(u32 *)puVar2, *(u32 *)(a1 + 3));
                puVar1 = (u64 *)((int)a1 + 0x1c);
                uVar10 = CONCAT44(*(u32 *)puVar1, *(u32 *)(a0 + 0x114));
            } else {
                uVar12 = *a1;
                uVar7 = *(u64 *)(a0 + 0x124);
                uVar9 = *puVar2;
                in_xd4 = *(u64 *)((int)a1 + 0x1c);
                puVar1 = (u64 *)((int)a1 + 0x24);
                uVar10 = *puVar1;
            }
            fVar3 = (float)((u64)dVar4 >> 0x20);
            if (cVar14 == '\0') {
                uVar9 = CONCAT44(fVar3 * SUB84(dVar4, 0) + (float)((u64)uVar9 >> 0x20),
                                 fVar3 * (float)((u64)uVar7 >> 0x20) + (float)uVar9);
                fVar5 = (float)uVar10;
                uVar10 = CONCAT44(fVar3 * (float)uVar7 + (float)((u64)uVar10 >> 0x20), fVar5);
                uVar12 = CONCAT44(fVar3 * fVar5 + (float)((u64)uVar12 >> 0x20), (int)uVar12);
            }
            if (cVar15 == '\0') {
                *(int *)puVar2 = (int)((u64)uVar9 >> 0x20);
                *(int *)(a1 + 3) = (int)uVar9;
                *(int *)puVar1 = (int)((u64)uVar10 >> 0x20);
                *(int *)a1 = (int)((u64)uVar12 >> 0x20);
            } else {
                *puVar2 = uVar9;
                a1[3] = in_xd4;
                *puVar1 = uVar10;
                *a1 = uVar12;
            }
        }
    }
    return 4;
}

/*
 * gfxlib_float_calc_23b588  0x8c23b588
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b588(int a0, u64 *a1, u32 a2, u32 a3, int ain0) {
    u64 *puVar1;
    code *in_r3;
    u64 *puVar2;
    u64 in_dr0;
    double dVar3;
    float fVar4;
    u64 uVar5;
    u64 uVar6;
    float fVar7;
    u64 uVar8;
    u32 in_fr9;
    u64 uVar9;
    u64 in_xd4;
    char cVar10;
    char cVar11;

    cVar11 = '\0';
    cVar10 = '\0';
    dVar3 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(ain0 + a0));
    (*in_r3)(*(u32 *)(a0 + 0x88), a1, a2, a3, a0);
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) * SUB84(dVar3, 0), SUB84(dVar3, 0));
    } else {
        dVar3 = dVar3 * dVar3;
    }
    puVar2 = (u64 *)((int)a1 + 0x14);
    if (cVar11 == '\0') {
        uVar9 = CONCAT44(*(u32 *)a1, in_fr9);
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), *(u32 *)(a0 + 0x118));
        uVar5 = CONCAT44(*(u32 *)(a0 + 0x11c), *(u32 *)(a0 + 0x120));
        uVar6 = CONCAT44(*(u32 *)puVar2, *(u32 *)(a1 + 3));
        puVar1 = (u64 *)((int)a1 + 0x1c);
        uVar8 = CONCAT44(*(u32 *)puVar1, *(u32 *)(a0 + 0x114));
    } else {
        uVar9 = *a1;
        uVar5 = *(u64 *)(a0 + 0x124);
        uVar6 = *puVar2;
        in_xd4 = *(u64 *)((int)a1 + 0x1c);
        puVar1 = (u64 *)((int)a1 + 0x24);
        uVar8 = *puVar1;
    }
    fVar4 = (float)((u64)dVar3 >> 0x20);
    if (cVar10 == '\0') {
        uVar6 = CONCAT44(fVar4 * SUB84(dVar3, 0) + (float)((u64)uVar6 >> 0x20),
                         fVar4 * (float)((u64)uVar5 >> 0x20) + (float)uVar6);
        fVar7 = (float)uVar8;
        uVar8 = CONCAT44(fVar4 * (float)uVar5 + (float)((u64)uVar8 >> 0x20), fVar7);
        uVar9 = CONCAT44(fVar4 * fVar7 + (float)((u64)uVar9 >> 0x20), (int)uVar9);
    }
    if (cVar11 == '\0') {
        *(int *)puVar2 = (int)((u64)uVar6 >> 0x20);
        *(int *)(a1 + 3) = (int)uVar6;
        *(int *)puVar1 = (int)((u64)uVar8 >> 0x20);
        *(int *)a1 = (int)((u64)uVar9 >> 0x20);
    } else {
        *puVar2 = uVar6;
        a1[3] = in_xd4;
        *puVar1 = uVar8;
        *a1 = uVar9;
    }
    return 4;
}

/*
 * gfxlib_float_calc_23b5e8  0x8c23b5e8
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b5e8(int a0, float *a1) {
    u32 uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float in_fr11;
    float fVar7;

    a1[1] = a1[1] + *(float *)(a0 + 0xf8);
    a1[2] = a1[2] + *(float *)(a0 + 0xfc);
    a1[3] = a1[3] + *(float *)(a0 + 0x100);
    uVar1 = 4;
    if (in_fr11 < 0.0) {
        fVar7 = in_fr11 * in_fr11;
        fVar6 = *(float *)(a0 + 0x70);
        fVar2 = -in_fr11;
        fVar5 = *(float *)(a0 + 0x74);
        fVar4 = *(float *)(a0 + 0x10c);
        fVar3 = *(float *)(a0 + 0x110);
        a1[1] = fVar2 * *(float *)(a0 + 0x108) + a1[1];
        a1[2] = fVar2 * fVar4 + a1[2];
        a1[3] = fVar2 * fVar3 + a1[3];
        if (fVar5 < fVar7) {
            fVar2 = 1.0;
            if (fVar7 < fVar6) {
                fVar2 = 1.0;
                uVar1 = 0x100;
                if ((int)(fVar7 * 256.0) < 0x100) {
                    fVar2 = *(float *)(&g_8c26d970 + (*(int *)(a0 + 0x88) * 0x100 + (int)(fVar7 * 256.0)) * 4) *
                            *(float *)(a0 + 0x80);
                }
            }
            fVar5 = *(float *)(a0 + 0x114);
            fVar4 = *(float *)(a0 + 0x11c);
            fVar3 = *(float *)(a0 + 0x120);
            a1[5] = fVar2 * *(float *)(a0 + 0x118) + a1[5];
            a1[6] = fVar2 * fVar4 + a1[6];
            a1[7] = fVar2 * fVar3 + a1[7];
            *a1 = fVar2 * fVar5 + *a1;
        }
    }
    return uVar1;
}

/*
 * gfxlib_state_switch_23b6dc  0x8c23b6dc
 * area name: in the gfxlib library code range; behaviour name: mostly calls state_switch functions
 */
u32 gfxlib_state_switch_23b6dc(int a0, u64 *a1) {
    u32 uVar1;
    u64 *puVar2;
    u64 *puVar3;
    float fVar4;
    double dVar5;
    float fVar6;
    float fVar8;
    u64 uVar7;
    u64 uVar9;
    u64 uVar10;
    float fVar11;
    float fVar13;
    u64 uVar12;
    float in_fr11;
    float fVar14;
    float fVar15;
    u64 in_xd4;
    char cVar16;
    char cVar17;

    *(float *)((int)a1 + 4) = *(float *)((int)a1 + 4) + *(float *)(a0 + 0xf8);
    fVar6 = *(float *)(a0 + 0xfc);
    *(float *)(a1 + 1) = *(float *)(a1 + 1) + fVar6;
    *(float *)((int)a1 + 0xc) = *(float *)((int)a1 + 0xc) + *(float *)(a0 + 0x100);
    cVar17 = '\0';
    cVar16 = '\0';
    uVar1 = (u32)(in_fr11 < *(float *)(a0 + 0x6c)) << 1 | (u32)(0.0 < fVar6);
    if (uVar1 == 3) {
        fVar14 = 1.0 / SQRT(in_fr11);
        uVar1 = 4;
        fVar15 = 1.0;
        if (*(float *)(a0 + 0x68) < in_fr11) {
            fVar15 = fVar14 * fVar14 * *(float *)(a0 + 0x68);
        }
        fVar13 = *(float *)(a0 + 0x70);
        fVar11 = *(float *)(a0 + 0x74);
        fVar4 = *(float *)(a0 + 0x108);
        fVar6 = fVar6 * fVar14;
        fVar8 = *(float *)(a0 + 0x10c);
        fVar14 = *(float *)(a0 + 0x110);
        *(float *)((int)a1 + 4) = fVar6 * fVar4 + *(float *)((int)a1 + 4);
        *(float *)(a1 + 1) = fVar6 * fVar8 + *(float *)(a1 + 1);
        dVar5 = (double)CONCAT44(fVar15, fVar4);
        *(float *)((int)a1 + 0xc) = fVar6 * fVar14 + *(float *)((int)a1 + 0xc);
        if (fVar11 < fVar6 * fVar6) {
            if (fVar6 * fVar6 < fVar13) {
                dVar5 = (double)CONCAT44(fVar15, *(float *)(a0 + 0x80) * fVar15);
                gfxlib_state_switch_23a8d8(*(u32 *)(a0 + 0x88));
                if (cVar16 == '\0') {
                    dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
                } else {
                    dVar5 = dVar5 * dVar5;
                }
            }
            uVar1 = 4;
            puVar3 = (u64 *)((int)a1 + 0x14);
            if (cVar17 == '\0') {
                uVar12 = CONCAT44(*(u32 *)a1, fVar11);
                dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), *(u32 *)(a0 + 0x118));
                uVar7 = CONCAT44(*(u32 *)(a0 + 0x11c), *(u32 *)(a0 + 0x120));
                uVar9 = CONCAT44(*(u32 *)puVar3, *(u32 *)(a1 + 3));
                puVar2 = (u64 *)((int)a1 + 0x1c);
                uVar10 = CONCAT44(*(u32 *)puVar2, *(u32 *)(a0 + 0x114));
            } else {
                uVar12 = *a1;
                uVar7 = *(u64 *)(a0 + 0x124);
                uVar9 = *puVar3;
                in_xd4 = *(u64 *)((int)a1 + 0x1c);
                puVar2 = (u64 *)((int)a1 + 0x24);
                uVar10 = *puVar2;
            }
            fVar6 = (float)((u64)dVar5 >> 0x20);
            if (cVar16 == '\0') {
                uVar9 = CONCAT44(fVar6 * SUB84(dVar5, 0) + (float)((u64)uVar9 >> 0x20),
                                 fVar6 * (float)((u64)uVar7 >> 0x20) + (float)uVar9);
                fVar14 = (float)uVar10;
                uVar10 = CONCAT44(fVar6 * (float)uVar7 + (float)((u64)uVar10 >> 0x20), fVar14);
                uVar12 = CONCAT44(fVar6 * fVar14 + (float)((u64)uVar12 >> 0x20), (int)uVar12);
            }
            if (cVar17 == '\0') {
                *(int *)puVar3 = (int)((u64)uVar9 >> 0x20);
                *(int *)(a1 + 3) = (int)uVar9;
                *(int *)puVar2 = (int)((u64)uVar10 >> 0x20);
                *(int *)a1 = (int)((u64)uVar12 >> 0x20);
            } else {
                *puVar3 = uVar9;
                a1[3] = in_xd4;
                *puVar2 = uVar10;
                *a1 = uVar12;
            }
        }
    }
    return uVar1;
}

/*
 * gfxlib_float_calc_23b796  0x8c23b796
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b796(int a0, u64 *a1, u32 a2, u32 a3, int ain0) {
    u64 *puVar1;
    code *in_r3;
    u64 *puVar2;
    u64 in_dr0;
    float fVar4;
    double dVar3;
    u64 uVar5;
    u64 uVar6;
    float fVar7;
    u64 uVar8;
    u32 in_fr9;
    u64 uVar9;
    u64 in_xd4;
    char cVar10;
    char cVar11;

    cVar11 = '\0';
    cVar10 = '\0';
    fVar4 = (float)((u64)in_dr0 >> 0x20);
    dVar3 = (double)CONCAT44(fVar4, *(float *)(ain0 + a0) * fVar4);
    (*in_r3)(*(u32 *)(a0 + 0x88), a1, a2, a3, a0);
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) * SUB84(dVar3, 0), SUB84(dVar3, 0));
    } else {
        dVar3 = dVar3 * dVar3;
    }
    puVar2 = (u64 *)((int)a1 + 0x14);
    if (cVar11 == '\0') {
        uVar9 = CONCAT44(*(u32 *)a1, in_fr9);
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), *(u32 *)(a0 + 0x118));
        uVar5 = CONCAT44(*(u32 *)(a0 + 0x11c), *(u32 *)(a0 + 0x120));
        uVar6 = CONCAT44(*(u32 *)puVar2, *(u32 *)(a1 + 3));
        puVar1 = (u64 *)((int)a1 + 0x1c);
        uVar8 = CONCAT44(*(u32 *)puVar1, *(u32 *)(a0 + 0x114));
    } else {
        uVar9 = *a1;
        uVar5 = *(u64 *)(a0 + 0x124);
        uVar6 = *puVar2;
        in_xd4 = *(u64 *)((int)a1 + 0x1c);
        puVar1 = (u64 *)((int)a1 + 0x24);
        uVar8 = *puVar1;
    }
    fVar4 = (float)((u64)dVar3 >> 0x20);
    if (cVar10 == '\0') {
        uVar6 = CONCAT44(fVar4 * SUB84(dVar3, 0) + (float)((u64)uVar6 >> 0x20),
                         fVar4 * (float)((u64)uVar5 >> 0x20) + (float)uVar6);
        fVar7 = (float)uVar8;
        uVar8 = CONCAT44(fVar4 * (float)uVar5 + (float)((u64)uVar8 >> 0x20), fVar7);
        uVar9 = CONCAT44(fVar4 * fVar7 + (float)((u64)uVar9 >> 0x20), (int)uVar9);
    }
    if (cVar11 == '\0') {
        *(int *)puVar2 = (int)((u64)uVar6 >> 0x20);
        *(int *)(a1 + 3) = (int)uVar6;
        *(int *)puVar1 = (int)((u64)uVar8 >> 0x20);
        *(int *)a1 = (int)((u64)uVar9 >> 0x20);
    } else {
        *puVar2 = uVar6;
        a1[3] = in_xd4;
        *puVar1 = uVar8;
        *a1 = uVar9;
    }
    return 4;
}

/*
 * gfxlib_float_calc_23b7fc  0x8c23b7fc
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b7fc(int a0, float *a1) {
    u32 uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float in_fr11;
    float fVar7;
    float fVar8;

    a1[1] = a1[1] + *(float *)(a0 + 0xf8);
    fVar2 = *(float *)(a0 + 0xfc);
    a1[2] = a1[2] + fVar2;
    a1[3] = a1[3] + *(float *)(a0 + 0x100);
    uVar1 = (u32)(in_fr11 < *(float *)(a0 + 0x6c)) << 1 | (u32)(0.0 < fVar2);
    if (uVar1 == 3) {
        fVar7 = 1.0 / SQRT(in_fr11);
        uVar1 = 4;
        fVar8 = 1.0;
        if (*(float *)(a0 + 0x68) < in_fr11) {
            fVar8 = fVar7 * fVar7 * *(float *)(a0 + 0x68);
        }
        fVar6 = *(float *)(a0 + 0x70);
        fVar5 = *(float *)(a0 + 0x74);
        fVar2 = fVar2 * fVar7;
        fVar3 = *(float *)(a0 + 0x10c);
        fVar7 = *(float *)(a0 + 0x110);
        fVar4 = fVar2 * fVar2;
        a1[1] = fVar2 * *(float *)(a0 + 0x108) + a1[1];
        a1[2] = fVar2 * fVar3 + a1[2];
        a1[3] = fVar2 * fVar7 + a1[3];
        if (fVar5 < fVar4) {
            if (fVar4 < fVar6) {
                if ((int)(fVar4 * 256.0) < 0x100) {
                    fVar8 = *(float *)(&g_8c26d970 + (*(int *)(a0 + 0x88) * 0x100 + (int)(fVar4 * 256.0)) * 4) *
                            *(float *)(a0 + 0x80) * fVar8;
                }
            }
            uVar1 = 4;
            fVar3 = *(float *)(a0 + 0x114);
            fVar7 = *(float *)(a0 + 0x11c);
            fVar2 = *(float *)(a0 + 0x120);
            a1[5] = fVar8 * *(float *)(a0 + 0x118) + a1[5];
            a1[6] = fVar8 * fVar7 + a1[6];
            a1[7] = fVar8 * fVar2 + a1[7];
            *a1 = fVar8 * fVar3 + *a1;
        }
    }
    return uVar1;
}

/*
 * gfxlib_float_calc_23b930  0x8c23b930
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 */
u32 gfxlib_float_calc_23b930(int a0, float *a1) {
    u32 uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float in_fr11;
    float fVar7;

    a1[1] = a1[1] + *(float *)(a0 + 0xf8);
    a1[2] = a1[2] + *(float *)(a0 + 0xfc);
    uVar1 = 0xc;
    a1[3] = a1[3] + *(float *)(a0 + 0x100);
    fVar2 = *(float *)(a0 + 0x60);
    if (fVar2 != 0.0) {
        uVar1 = 4;
        if (0.0 < in_fr11) {
            fVar7 = in_fr11 * in_fr11;
            fVar6 = *(float *)(a0 + 0x70);
            fVar5 = *(float *)(a0 + 0x74);
            fVar4 = *(float *)(a0 + 0x10c);
            fVar3 = *(float *)(a0 + 0x110);
            a1[1] = in_fr11 * *(float *)(a0 + 0x108) + a1[1];
            a1[2] = in_fr11 * fVar4 + a1[2];
            a1[3] = in_fr11 * fVar3 + a1[3];
            if (fVar5 < fVar7) {
                if (fVar7 < fVar6) {
                    uVar1 = 0x100;
                    if ((int)(fVar7 * 256.0) < 0x100) {
                        fVar2 = *(float *)(&g_8c26d970 + (*(int *)(a0 + 0x88) * 0x100 + (int)(fVar7 * 256.0)) * 4) *
                                *(float *)(a0 + 0x80) * fVar2;
                    }
                }
                fVar5 = *(float *)(a0 + 0x114);
                fVar4 = *(float *)(a0 + 0x11c);
                fVar3 = *(float *)(a0 + 0x120);
                a1[5] = fVar2 * *(float *)(a0 + 0x118) + a1[5];
                a1[6] = fVar2 * fVar4 + a1[6];
                a1[7] = fVar2 * fVar3 + a1[7];
                *a1 = fVar2 * fVar5 + *a1;
            }
        }
    }
    return uVar1;
}

/*
 * clear_4_words  0x8c23ba30
 * a0[0..3] = 0
 * called by: gfxlib_copy_23bbac, gfxlib_copy_23bcc8, gfxlib_copy_23be0c
 */
u32 clear_4_words(u32 *a0) {
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[3] = 0;
    return 0xc;
}

/*
 * gfxlib_scan_loop_23ba42  0x8c23ba42
 * area name: in the gfxlib library code range; behaviour name: a loop that only reads
 * called by: gfxlib_calls_scan_loop_23bae2, gfxlib_copy_23bbac, gfxlib_copy_23bcc8, gfxlib_copy_23be0c
 */
u8 *gfxlib_scan_loop_23ba42(void) {
    u8 *puVar1;
    u32 *puVar2;
    u32 *puVar3;
    int iVar4;
    u8 *puVar5;

    puVar1 = &g_8c4ab278;
    puVar5 = &g_8c4ab280;
    puVar3 = (u32 *)&g_8c4ab284;
    puVar2 = &g_8c277b40;
    for (iVar4 = g_8c4c1300; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = (u8 *)(*(code *)*puVar2)(0, *puVar3, puVar5);
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
    }
    return puVar1;
}

/*
 * alt_entry_23ba48  0x8c23ba48
 * probably an entry 6 bytes into 8c23ba42: it reads registers that code sets before it
 */
u32 *alt_entry_23ba48(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 *ain0, u32 *ain1) {
    u32 *in_r2;
    u32 a5;
    u32 a6;
    u32 a7;
    u32 *puVar1;
    u32 *puVar2;
    int iVar3;

    a5 = *ain0;
    a6 = *ain1;
    a7 = *in_r2;
    puVar2 = (u32 *)&g_8c4ab284;
    puVar1 = &g_8c277b40;
    for (iVar3 = g_8c4c1300; iVar3 != 0; iVar3 = iVar3 + -1) {
        ain0 = (u32 *)(*(code *)*puVar1)(*puVar2, a5, a6, a7);
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
    }
    return ain0;
}

/*
 * gfxlib_float_calc_23ba9c  0x8c23ba9c
 * area name: in the gfxlib library code range; behaviour name: floating-point arithmetic
 * called by: gfxlib_copy_23bbac, gfxlib_copy_23bcc8, gfxlib_copy_23be0c
 */
u32 gfxlib_float_calc_23ba9c(void) {
    u32 in_r0;
    int iVar1;
    double *pdVar2;
    float fVar3;
    double in_dr2;
    double dVar4;
    float fVar5;
    u32 in_fr5;
    double dVar6;
    double dVar7;
    double in_xd2;
    bool bVar8;

    if (g_8c4aa554 != 0) {
        in_r0 = 8;
        iVar1 = g_8c4ab27c;

        dVar6 = (double)CONCAT44(*(u32 *)0x8c4aa544, in_fr5);
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar1 + 8));

        fVar3 = (float)((u64)dVar6 >> 0x20);

        bVar8 = fVar3 < SUB84(in_dr2, 0);

        if (bVar8) {

            dVar4 = (double)CONCAT44(*(u32 *)(iVar1 + 8), *(u32 *)0x8c4aa548);

            fVar5 = (float)((u64)dVar4 >> 0x20);
            pdVar2 = (double *)*0x8c4ab278;
            if (SUB84(dVar4, 0) <= fVar5) {
                fVar3 = 0.0;
            } else {

                dVar4 = (double)CONCAT44(fVar5, *(u32 *)(iVar1 + 8));

                fVar3 = SUB84(dVar4, 0) - fVar3;

                dVar4 = (double)CONCAT44(*(u32 *)0x8c4aa54c, fVar3);

                fVar3 = (float)((u64)dVar4 >> 0x20);
                dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) * fVar3);

                fVar3 = -SUB84(dVar4, 0);
                dVar7 = in_xd2;

                dVar7 = (double)CONCAT44(fVar3, SUB84(dVar6, 0));

                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + 1.0, SUB84(dVar7, 0));

                fVar3 = *(float *)pdVar2;

                fVar3 = fVar3 * (float)((u64)dVar7 >> 0x20);
            }

            *(float *)pdVar2 = fVar3;
        }
    }
    return in_r0;
}

/*
 * gfxlib_calls_scan_loop_23bae2  0x8c23bae2
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: scan_loop
 * called by: gfxlib_calls_scan_loop_23e7a8, gfxlib_calls_scan_loop_247e16, gfxlib_calls_scan_loop_2485bc,
 * gfxlib_uses_float_to_color_u8_23d698, gfxlib_uses_float_to_color_u8_23dc42, gfxlib_uses_float_to_color_u8_23f35a,
 * gfxlib_uses_float_to_color_u8_23f5e2, gfxlib_uses_float_to_color_u8_23fac8 (+31 more)
 */
u32 gfxlib_calls_scan_loop_23bae2(double *a0, int a1, float *a2, int a3) {
    double *pdVar1;
    u32 uVar2;
    double *ar4_00;
    u32 extraout_fr0;
    float fVar3;
    double dVar4;
    float fVar5;
    u32 in_fr5;
    double dVar6;
    double dVar7;
    float fVar8;
    double in_xd2;
    double in_xd14;
    bool bVar9;
    char cVar10;
    char cVar11;
    float fStack_20;
    float fStack_1c;
    float fStack_18;

    cVar11 = '\0';
    cVar10 = '\0';
    fVar8 = 0.0;
    g_8c4ab278 = a0;
    g_8c4ab27c = a1;
    g_8c4ab280 = a2;
    *(float *)((int)a0 + 0xc) = 0.0;
    *(float *)(a0 + 1) = 0.0;
    *(float *)((int)a0 + 4) = 0.0;
    *(float *)a0 = 0.0;
    pdVar1 = g_8c4ab278;
    ar4_00 = g_8c4ab278 + 2;
    *(float *)((int)g_8c4ab278 + 0x1c) = 0.0;
    *(float *)(pdVar1 + 3) = 0.0;
    *(float *)((int)pdVar1 + 0x14) = 0.0;
    if (a3 != 0) {
        fStack_20 = -*g_8c4ab280;
        fStack_1c = -g_8c4ab280[1];
        fStack_18 = -g_8c4ab280[2];
        g_8c4ab280 = &fStack_20;
    }
    uVar2 = gfxlib_scan_loop_23ba42();
    if (cVar11 == '\0') {
        dVar4 = (double)CONCAT44(*(float *)g_8c4ab278, g_8c4c11b0);
    } else {
        in_xd2 = (double)CONCAT44(g_8c4c11b4, g_8c4c11b0);
        dVar4 = *g_8c4ab278;
    }
    if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + SUB84(dVar4, 0), SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 + dVar4;
    }
    fVar3 = (float)((u64)dVar4 >> 0x20);
    if (cVar11 == '\0') {
        *(float *)g_8c4ab278 = fVar3;
    } else {
        *g_8c4ab278 = dVar4;
    }
    if (g_8c4aa554 != 0) {
        uVar2 = 8;
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(g_8c4aa544, in_fr5);
            dVar4 = (double)CONCAT44(fVar3, *(u32 *)(g_8c4ab27c + 8));
        } else {
            dVar6 = (double)CONCAT44(g_8c4aa548, g_8c4aa544);
            in_xd2 = *(double *)(g_8c4ab27c + 8);
        }
        fVar3 = (float)((u64)dVar6 >> 0x20);
        if (cVar10 == '\0') {
            bVar9 = fVar3 < SUB84(dVar4, 0);
        } else {
            bVar9 = dVar6 < dVar4;
        }
        if (bVar9) {
            if (cVar11 == '\0') {
                dVar4 = (double)CONCAT44(*(u32 *)(g_8c4ab27c + 8), g_8c4aa548);
            } else {
                dVar4 = *(double *)(g_8c4ab27c + 8);
                in_xd2 = (double)CONCAT44(g_8c4aa54c, g_8c4aa548);
            }
            fVar5 = (float)((u64)dVar4 >> 0x20);
            if (cVar10 != '\0' || SUB84(dVar4, 0) <= fVar5) {
                if (cVar11 == '\0') {
                    *(float *)g_8c4ab278 = fVar8;
                } else {
                    *g_8c4ab278 = in_xd14;
                }
            } else {
                if (cVar11 == '\0') {
                    dVar4 = (double)CONCAT44(fVar5, *(u32 *)(g_8c4ab27c + 8));
                } else {
                    in_xd2 = *(double *)(g_8c4ab27c + 8);
                }
                if (cVar10 == '\0') {
                    fVar3 = SUB84(dVar4, 0) - fVar3;
                } else {
                    fVar3 = SUB84(dVar4 - dVar6, 0);
                }
                if (cVar11 == '\0') {
                    dVar4 = (double)CONCAT44(g_8c4aa54c, fVar3);
                } else {
                    dVar4 = (double)CONCAT44(g_8c4aa550, g_8c4aa54c);
                }
                if (cVar10 == '\0') {
                    fVar8 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar8, SUB84(dVar4, 0) * fVar8);
                } else {
                    dVar4 = dVar4 * dVar4;
                }
                fVar8 = -SUB84(dVar4, 0);
                dVar7 = in_xd2;
                if (cVar11 == '\0') {
                    dVar7 = (double)CONCAT44(fVar8, SUB84(dVar6, 0));
                }
                if (cVar10 == '\0') {
                    dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + 1.0, SUB84(dVar7, 0));
                } else {
                    dVar7 = dVar7 + (double)CONCAT44(extraout_fr0, 0x3f800000);
                }
                if (cVar11 == '\0') {
                    fVar8 = *(float *)g_8c4ab278;
                } else {
                    in_xd2 = *g_8c4ab278;
                }
                if (cVar10 == '\0') {
                    fVar8 = fVar8 * (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar8 = SUB84((double)CONCAT44((int)((u64)dVar4 >> 0x20), fVar8) * dVar7, 0);
                }
                if (cVar11 == '\0') {
                    *(float *)g_8c4ab278 = fVar8;
                } else {
                    *g_8c4ab278 = in_xd2;
                }
            }
        }
    }
    return uVar2;
}

/*
 * gfxlib_copy_23bbac  0x8c23bbac
 * area name: in the gfxlib library code range; behaviour name: mostly calls copy functions
 */
u32 gfxlib_copy_23bbac(double *a0, u32 a1, float *a2, int a3) {
    double *ar4_00;
    float in_fr3;
    float fVar1;
    double dVar2;
    double adStack_3c[4];
    float fStack_1c;
    float fStack_18;
    float fStack_14;

    g_8c4ab278 = adStack_3c;
    g_8c4ab27c = a1;
    g_8c4ab280 = a2;
    clear_4_words(g_8c4ab278);
    ar4_00 = g_8c4ab278 + 2;
    clear_4_words(ar4_00);
    if (a3 != 0) {

        in_fr3 = *g_8c4ab280;

        fVar1 = g_8c4ab280[1];
        fStack_1c = -in_fr3;

        fStack_14 = g_8c4ab280[2];
        fStack_18 = -fVar1;

        g_8c4ab280 = &fStack_1c;
        fStack_14 = -fStack_14;
    }
    gfxlib_scan_loop_23ba42();

    dVar2 = (double)CONCAT44(*(u32 *)g_8c4ab278, g_8c4c11b0);

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) + SUB84(dVar2, 0), SUB84(dVar2, 0));

    *(int *)g_8c4ab278 = (int)((u64)dVar2 >> 0x20);

    gfxlib_float_calc_23ba9c();

    dVar2 = (double)CONCAT44(*(u32 *)a0, *(u32 *)g_8c4ab278);

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));

    *(int *)a0 = (int)((u64)dVar2 >> 0x20);

    dVar2 = (double)CONCAT44(*(u32 *)((int)a0 + 4), *(u32 *)((int)g_8c4ab278 + 4));

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));

    *(int *)((int)a0 + 4) = (int)((u64)dVar2 >> 0x20);

    dVar2 = (double)CONCAT44(*(u32 *)(a0 + 1), *(u32 *)(g_8c4ab278 + 1));

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));

    *(int *)(a0 + 1) = (int)((u64)dVar2 >> 0x20);

    dVar2 = (double)CONCAT44(*(u32 *)((int)a0 + 0xc), *(u32 *)((int)g_8c4ab278 + 0xc));

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));

    *(int *)((int)a0 + 0xc) = (int)((u64)dVar2 >> 0x20);

    dVar2 = (double)CONCAT44(*(u32 *)((int)a0 + 0x14), *(u32 *)((int)g_8c4ab278 + 0x14));

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));

    *(int *)((int)a0 + 0x14) = (int)((u64)dVar2 >> 0x20);

    dVar2 = (double)CONCAT44(*(u32 *)(a0 + 3), *(u32 *)(g_8c4ab278 + 3));

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));

    *(int *)(a0 + 3) = (int)((u64)dVar2 >> 0x20);

    dVar2 = (double)CONCAT44(*(u32 *)((int)a0 + 0x1c), *(u32 *)((int)g_8c4ab278 + 0x1c));

    dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) * SUB84(dVar2, 0), SUB84(dVar2, 0));

    *(int *)((int)a0 + 0x1c) = (int)((u64)dVar2 >> 0x20);

    return 0xc;
}

/*
 * gfxlib_copy_23bcc8  0x8c23bcc8
 * area name: in the gfxlib library code range; behaviour name: mostly calls copy functions
 */
u32 gfxlib_copy_23bcc8(u32 *a0, u32 a1, float *a2, int a3) {
    double *ar4_00;
    float in_fr3;
    float fVar1;
    double dVar2;
    u32 in_fr5;
    double dVar3;
    float fVar4;
    u64 in_xd2;
    u32 in_PR;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;
    char cVar9;
    char cVar10;
    double adStack_38[4];
    float fStack_18;
    float fStack_14;
    float fStack_10;
    u32 uStack_c;

    cVar10 = '\0';
    cVar9 = '\0';
    g_8c4ab278 = adStack_38;
    g_8c4ab27c = a1;
    g_8c4ab280 = a2;
    uStack_c = in_PR;
    clear_4_words(g_8c4ab278);
    ar4_00 = g_8c4ab278 + 2;
    clear_4_words(ar4_00);
    if (a3 != 0) {
        if (cVar10 == '\0') {
            in_fr3 = *g_8c4ab280;
        } else {
            in_xd2 = *(u64 *)g_8c4ab280;
        }
        if (cVar10 == '\0') {
            fVar4 = g_8c4ab280[1];
            fStack_18 = -in_fr3;
        } else {
            fStack_18 = (float)in_xd2;
            in_xd2 = *(u64 *)(g_8c4ab280 + 1);
            fVar4 = -in_fr3;
        }
        if (cVar10 == '\0') {
            fStack_10 = g_8c4ab280[2];
            fStack_14 = -fVar4;
        } else {
            fStack_14 = (float)in_xd2;
            in_xd2 = *(u64 *)(g_8c4ab280 + 2);
            fStack_10 = -fVar4;
        }
        g_8c4ab280 = &fStack_18;
        fStack_10 = -fStack_10;
        if (cVar10 != '\0') {
            fStack_10 = (float)in_xd2;
            uStack_c = (u32)((u64)in_xd2 >> 0x20);
        }
    }
    gfxlib_scan_loop_23ba42();
    if (cVar10 == '\0') {
        dVar2 = (double)CONCAT44(*(u32 *)g_8c4ab278, g_8c4c11b0);
    } else {
        dVar2 = *g_8c4ab278;
    }
    if (cVar9 == '\0') {
        dVar2 = (double)CONCAT44((float)((u64)dVar2 >> 0x20) + SUB84(dVar2, 0), SUB84(dVar2, 0));
    } else {
        dVar2 = dVar2 + dVar2;
    }
    if (cVar10 == '\0') {
        *(int *)g_8c4ab278 = (int)((u64)dVar2 >> 0x20);
    } else {
        *g_8c4ab278 = dVar2;
    }
    gfxlib_float_calc_23ba9c();
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44(0x437f0000, in_fr5);
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), *(u32 *)g_8c4ab278);
    } else {
        dVar3 = -5.486125448238677e+303;
    }
    fVar4 = (float)((u64)dVar3 >> 0x20);
    if (cVar9 == '\0') {
        fVar1 = SUB84(dVar2, 0) * fVar4;
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), fVar1);
        uVar5 = (u32)fVar1;
    } else {
        dVar2 = dVar2 * dVar3;
        uVar5 = (u32)dVar2;
    }
    if (cVar10 == '\0') {
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), *(u32 *)((int)g_8c4ab278 + 4));
    }
    if (cVar9 == '\0') {
        fVar1 = SUB84(dVar2, 0) * fVar4;
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), fVar1);
        uVar6 = (u32)fVar1;
    } else {
        dVar2 = dVar2 * dVar3;
        uVar6 = (u32)dVar2;
    }
    if (cVar10 == '\0') {
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), *(u32 *)(g_8c4ab278 + 1));
    }
    if (cVar9 == '\0') {
        fVar1 = SUB84(dVar2, 0) * fVar4;
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), fVar1);
        uVar7 = (u32)fVar1;
    } else {
        dVar2 = dVar2 * dVar3;
        uVar7 = (u32)dVar2;
    }
    if (cVar10 == '\0') {
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), *(u32 *)((int)g_8c4ab278 + 0xc));
    }
    if (cVar9 == '\0') {
        fVar1 = SUB84(dVar2, 0) * fVar4;
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), fVar1);
        uVar8 = (u32)fVar1;
    } else {
        dVar2 = dVar2 * dVar3;
        uVar8 = (u32)dVar2;
    }
    if (0xff < uVar5) {
        uVar5 = 0xff;
    }
    if (0xff < uVar6) {
        uVar6 = 0xff;
    }
    if (0xff < uVar7) {
        uVar7 = 0xff;
    }
    if (0xff < uVar8) {
        uVar8 = 0xff;
    }
    *a0 = uVar5 << 0x18 | uVar6 << 0x10 | uVar7 << 8 | uVar8;
    if (cVar10 == '\0') {
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), *(u32 *)((int)g_8c4ab278 + 0x14));
    }
    if (cVar9 == '\0') {
        fVar1 = SUB84(dVar2, 0) * fVar4;
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), fVar1);
        uVar5 = (u32)fVar1;
    } else {
        dVar2 = dVar2 * dVar3;
        uVar5 = (u32)dVar2;
    }
    if (cVar10 == '\0') {
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), *(u32 *)(g_8c4ab278 + 3));
    }
    if (cVar9 == '\0') {
        fVar1 = SUB84(dVar2, 0) * fVar4;
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), fVar1);
        uVar6 = (u32)fVar1;
    } else {
        dVar2 = dVar2 * dVar3;
        uVar6 = (u32)dVar2;
    }
    if (cVar10 == '\0') {
        dVar2 = (double)CONCAT44((int)((u64)dVar2 >> 0x20), *(u32 *)((int)g_8c4ab278 + 0x1c));
    }
    if (cVar9 == '\0') {
        uVar7 = (u32)(SUB84(dVar2, 0) * fVar4);
    } else {
        uVar7 = (u32)(dVar2 * dVar3);
    }
    if (0xff < uVar5) {
        uVar5 = 0xff;
    }
    if (0xff < uVar6) {
        uVar6 = 0xff;
    }
    if (0xff < uVar7) {
        uVar7 = 0xff;
    }
    a0[1] = uVar5 << 0x10 | uVar6 << 8 | uVar7 | 0xff000000;
    return 0xc;
}

/*
 * gfxlib_copy_23be0c  0x8c23be0c
 * area name: in the gfxlib library code range; behaviour name: mostly calls copy functions
 */
u32 gfxlib_copy_23be0c(u32 *a0, u32 a1, float *a2, int a3) {
    double *ar4_00;
    u32 uVar1;
    double in_dr0;
    float in_fr3;
    float fVar2;
    double dVar3;
    u32 uVar4;
    u64 in_xd2;
    u32 in_PR;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    char cVar8;
    char cVar9;
    double adStack_40[4];
    float fStack_20;
    float fStack_1c;
    float fStack_18;
    u32 uStack_14;

    cVar9 = '\0';
    cVar8 = '\0';
    g_8c4ab278 = adStack_40;
    g_8c4ab27c = a1;
    g_8c4ab280 = a2;
    uVar4 = a1;
    uStack_14 = in_PR;
    clear_4_words(g_8c4ab278);
    ar4_00 = g_8c4ab278 + 2;
    clear_4_words(ar4_00);
    if (a3 != 0) {
        if (cVar9 == '\0') {
            in_fr3 = *g_8c4ab280;
        } else {
            in_xd2 = *(u64 *)g_8c4ab280;
        }
        if (cVar9 == '\0') {
            fVar2 = g_8c4ab280[1];
            fStack_20 = -in_fr3;
        } else {
            fStack_20 = (float)in_xd2;
            in_xd2 = *(u64 *)(g_8c4ab280 + 1);
            fVar2 = -in_fr3;
        }
        if (cVar9 == '\0') {
            fStack_18 = g_8c4ab280[2];
            fStack_1c = -fVar2;
        } else {
            fStack_1c = (float)in_xd2;
            in_xd2 = *(u64 *)(g_8c4ab280 + 2);
            fStack_18 = -fVar2;
        }
        g_8c4ab280 = &fStack_20;
        fStack_18 = -fStack_18;
        if (cVar9 != '\0') {
            fStack_18 = (float)in_xd2;
            uStack_14 = (u32)((u64)in_xd2 >> 0x20);
        }
    }
    gfxlib_scan_loop_23ba42();
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(*(u32 *)g_8c4ab278, g_8c4c11b0);
    } else {
        dVar3 = *g_8c4ab278;
    }
    if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) + SUB84(dVar3, 0), SUB84(dVar3, 0));
    } else {
        dVar3 = dVar3 + dVar3;
    }
    if (cVar9 == '\0') {
        *(int *)g_8c4ab278 = (int)((u64)dVar3 >> 0x20);
    } else {
        *g_8c4ab278 = dVar3;
    }
    gfxlib_float_calc_23ba9c();
    uVar1 = *a0;
    uVar4 = (u32)((u64)dVar3 >> 0x20);
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)g_8c4ab278);
    }
    if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) * (float)(uVar1 >> 0x18));
    } else {
        in_dr0 = in_dr0 * (double)CONCAT44(uVar4, (float)(uVar1 >> 0x18));
    }
    if (cVar8 == '\0') {
        uVar5 = (u32)SUB84(in_dr0, 0);
    } else {
        uVar5 = (u32)in_dr0;
    }
    fVar2 = (float)(uVar1 >> 0x10 & 0xff);
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)g_8c4ab278 + 4));
    }
    if (cVar8 == '\0') {
        fVar2 = SUB84(in_dr0, 0) * fVar2;
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar2);
        uVar6 = (u32)fVar2;
    } else {
        in_dr0 = in_dr0 * (double)CONCAT44(uVar4, fVar2);
        uVar6 = (u32)in_dr0;
    }
    fVar2 = (float)(uVar1 >> 8 & 0xff);
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(g_8c4ab278 + 1));
    }
    if (cVar8 == '\0') {
        fVar2 = SUB84(in_dr0, 0) * fVar2;
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar2);
        uVar7 = (u32)fVar2;
    } else {
        in_dr0 = in_dr0 * (double)CONCAT44(uVar4, fVar2);
        uVar7 = (u32)in_dr0;
    }
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)g_8c4ab278 + 0xc));
    }
    if (cVar8 == '\0') {
        fVar2 = SUB84(in_dr0, 0) * (float)(uVar1 & 0xff);
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar2);
        uVar1 = (u32)fVar2;
    } else {
        in_dr0 = in_dr0 * (double)CONCAT44(uVar4, (float)(uVar1 & 0xff));
        uVar1 = (u32)in_dr0;
    }
    if (0xff < uVar5) {
        uVar5 = 0xff;
    }
    if (0xff < uVar6) {
        uVar6 = 0xff;
    }
    if (0xff < uVar7) {
        uVar7 = 0xff;
    }
    if (0xff < uVar1) {
        uVar1 = 0xff;
    }
    *a0 = uVar5 << 0x18 | uVar6 << 0x10 | uVar7 << 8 | uVar1;
    uVar1 = a0[1];
    fVar2 = (float)(uVar1 >> 0x10 & 0xff);
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)g_8c4ab278 + 0x14));
    }
    if (cVar8 == '\0') {
        fVar2 = SUB84(in_dr0, 0) * fVar2;
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar2);
        uVar5 = (u32)fVar2;
    } else {
        in_dr0 = in_dr0 * (double)CONCAT44(uVar4, fVar2);
        uVar5 = (u32)in_dr0;
    }
    fVar2 = (float)(uVar1 >> 8 & 0xff);
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(g_8c4ab278 + 3));
    }
    if (cVar8 == '\0') {
        fVar2 = SUB84(in_dr0, 0) * fVar2;
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), fVar2);
        uVar6 = (u32)fVar2;
    } else {
        in_dr0 = in_dr0 * (double)CONCAT44(uVar4, fVar2);
        uVar6 = (u32)in_dr0;
    }
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)g_8c4ab278 + 0x1c));
    }
    if (cVar8 == '\0') {
        uVar1 = (u32)(SUB84(in_dr0, 0) * (float)(uVar1 & 0xff));
    } else {
        uVar1 = (u32)(in_dr0 * (double)CONCAT44(uVar4, (float)(uVar1 & 0xff)));
    }
    if (0xff < uVar5) {
        uVar5 = 0xff;
    }
    if (0xff < uVar6) {
        uVar6 = 0xff;
    }
    if (0xff < uVar1) {
        uVar1 = 0xff;
    }
    a0[1] = uVar5 << 0x10 | uVar6 << 8 | uVar1 | 0xff000000;
    return 0xc;
}

/*
 * gfxlib_fill_loop_23bfee  0x8c23bfee
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23c70c
 */
int gfxlib_fill_loop_23bfee(void) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = 0x80;
    iVar3 = g_8c4c1300;
    while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        iVar1 = iVar3 * 4;
        iVar2 = *(int *)(*(int *)(iVar1 + 0x8c4c1280) * 4 + 0x8c4c11e0);
        *(int *)(&g_8c4ab284 + iVar1) = iVar2;
        iVar2 = *(int *)(iVar2 + 0x124);
        if (iVar2 == 0) {
            (&g_8c277b40)[iVar3] = &LAB_8c23a982;
        } else if (iVar2 == 1) {
            (&g_8c277b40)[iVar3] = &LAB_8c23a9d0;
        } else if (iVar2 == 2) {
            (&g_8c277b40)[iVar3] = &LAB_8c23a9fc;
        } else if (iVar2 == 0x82) {
            (&g_8c277b40)[iVar3] = &LAB_8c23aa50;
        } else if ((iVar2 == 4) || (iVar2 == 0x84)) {
            (&g_8c277b40)[iVar3] = &LAB_8c23aaa8;
        } else if (iVar2 == 0xc4) {
            (&g_8c277b40)[iVar3] = &LAB_8c23ab30;
        } else if (iVar2 == 8) {
            (&g_8c277b40)[iVar3] = &LAB_8c23ab90;
        } else if (iVar2 == 0x88) {
            (&g_8c277b40)[iVar3] = &LAB_8c23aca8;
        } else if (iVar2 == 200) {
            (&g_8c277b40)[iVar3] = &LAB_8c23ada8;
        } else if (iVar2 == 0x40) {
            (&g_8c277b40)[iVar3] = gfxlib_calc_23ae48;
        } else if (iVar2 == 0x10) {
            (&g_8c277b40)[iVar3] = &LAB_8c23ae70;
        } else if (iVar2 == 0x90) {
            (&g_8c277b40)[iVar3] = &LAB_8c23af2c;
        } else if (iVar2 == 0x20) {
            (&g_8c277b40)[iVar3] = &LAB_8c23affc;
        } else if (iVar2 == 0xa0) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b0f8;
        } else if (iVar2 == 0xe0) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b208;
        } else if (iVar2 == 3) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b2e4;
        } else if (iVar2 == 0x83) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b35c;
        } else if ((iVar2 == 5) || (iVar2 == 0x85)) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b3d8;
        } else if (iVar2 == 0xc5) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b484;
        } else if (iVar2 == 0x13) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b508;
        } else if (iVar2 == 0x93) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b5e8;
        } else if (iVar2 == 0x25) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b6dc;
        } else if (iVar2 == 0xa5) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b7fc;
        } else if (iVar2 == 0xe5) {
            (&g_8c277b40)[iVar3] = &LAB_8c23b930;
        } else {
            (&g_8c277b40)[iVar3] = &LAB_8c23aa50;
        }
    }
    return iVar1;
}

/*
 * gfxlib_uses_noop_fr4_test_23c2a0  0x8c23c2a0
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_fr4_test
 * called by: ninja_uses_ta_fifo_2536a8
 */
int gfxlib_uses_noop_fr4_test_23c2a0(double *a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    int iVar1;
    int iVar2;
    int iVar3;
    double in_dr0;
    double dVar4;
    u64 uVar5;
    u32 uVar6;
    double in_dr2;
    float fVar9;
    double dVar7;
    u64 uVar8;
    float fVar10;
    float fVar11;
    double in_dr4;
    double dVar12;
    double in_dr6;
    double dVar13;
    double in_xd2;
    double in_xd4;
    double in_xd14;
    bool bVar14;
    char cVar15;
    char cVar16;

    cVar16 = '\0';
    cVar15 = '\0';
    iVar1 = 0x80;
    iVar2 = g_8c4c1300;
LAB_8c23c4a0:
    while (true) {
        if (iVar2 == 0) {
            return iVar1;
        }
        iVar2 = iVar2 + -1;
        iVar3 = *(int *)(*(int *)(iVar2 * 4 + 0x8c4c1280) * 4 + 0x8c4c11e0);
        iVar1 = *(int *)(iVar3 + 0x124);
        uVar6 = (u32)((u64)in_dr2 >> 0x20);
        if ((((iVar1 != 0xc4) && (iVar1 != 0xe0)) && (iVar1 != 0xc5)) && (iVar1 != 0xe5))
            goto code_r0x8c23c2f0;
        if (cVar16 == '\0') {
            in_dr2 = (double)CONCAT44(uVar6, *(u32 *)a0);
            dVar13 = (double)CONCAT44(*(u32 *)(iVar3 + 0x90), SUB84(in_dr6, 0));
            dVar4 = (double)CONCAT44(*(u32 *)((int)a0 + 4), SUB84(in_dr0, 0));
        } else {
            in_xd2 = *a0;
            dVar13 = *(double *)(iVar3 + 0x90);
            dVar4 = *(double *)((int)a0 + 4);
        }
        if (cVar15 == '\0') {
            in_dr6 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) - SUB84(in_dr2, 0), SUB84(dVar13, 0));
        } else {
            in_dr6 = dVar13 - in_dr2;
        }
        if (cVar16 == '\0') {
            dVar13 = (double)CONCAT44(*(u32 *)(iVar3 + 0x94), SUB84(in_dr4, 0));
            dVar12 = (double)CONCAT44(*(u32 *)(a0 + 1), SUB84(in_dr2, 0));
        } else {
            dVar13 = *(double *)(iVar3 + 0x94);
            dVar12 = a0[1];
        }
        if (cVar15 == '\0') {
            dVar13 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) - (float)((u64)dVar4 >> 0x20), SUB84(dVar13, 0));
        } else {
            dVar13 = dVar13 - dVar4;
        }
        fVar10 = (float)((u64)in_dr6 >> 0x20);
        fVar11 = (float)((u64)dVar13 >> 0x20);
        if (cVar16 == '\0') {
            dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), fVar11);
            dVar13 = in_xd2;
            dVar7 = (double)CONCAT44(fVar11, *(u32 *)(iVar3 + 0x98));
            dVar4 = (double)CONCAT44(fVar10, SUB84(dVar4, 0));
        } else {
            in_xd4 = *(double *)(iVar3 + 0x98);
            dVar7 = dVar13;
            dVar4 = in_dr6;
        }
        if (cVar15 == '\0') {
            fVar9 = (float)((u64)dVar12 >> 0x20);
            in_dr4 = (double)(u64)(u32)(SUB84(dVar7, 0) - fVar9);
            in_dr2 = (double)CONCAT44(fVar9, (float)((u64)dVar4 >> 0x20) * fVar10 + SUB84(dVar12, 0) * fVar11);
        } else {
            in_dr2 = dVar12 * dVar7;
            in_dr4 = dVar7 - in_dr2;
        }
        in_dr0 = in_xd4;
        if (cVar16 == '\0') {
            in_dr0 = (double)CONCAT44(SUB84(in_dr4, 0), SUB84(dVar4, 0));
        }
        if (cVar15 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20),
                                      (float)((u64)in_dr0 >> 0x20) * SUB84(in_dr4, 0) + SUB84(in_dr2, 0));
        }
        if (cVar16 == '\0') {
            uVar6 = SUB84(in_dr2, 0);
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x6c));
            in_xd2 = dVar13;
            dVar13 = (double)CONCAT44(uVar6, 0x3f800000);
        } else {
            in_xd2 = *(double *)(iVar3 + 0x6c);
        }
        if (cVar15 == '\0') {
            bVar14 = (float)((u64)dVar13 >> 0x20) < SUB84(in_dr2, 0);
        } else {
            bVar14 = dVar13 < in_dr2;
        }
        if (!bVar14)
            break;
        dVar4 = dVar13;
        if (cVar16 == '\0') {
            dVar4 = (double)((u64)in_dr4 & 0xffffffff);
        }
        uVar6 = SUB84(dVar4, 0);
        noop_fr4_test(0x8c4c11e0, r5, r6, r7, 0x6c);
        dVar4 = in_xd14;
        if (cVar16 == '\0') {
            dVar4 = (double)CONCAT44(SUB84(dVar13, 0), uVar6);
        }
        if (cVar15 == '\0') {
            in_dr4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / (float)((u64)in_dr0 >> 0x20), SUB84(dVar4, 0));
        } else {
            in_dr4 = dVar4 / in_dr0;
        }
        if (cVar16 == '\0') {
            dVar4 = (double)CONCAT44(*(u32 *)(iVar3 + 0x90), *(u32 *)a0);
        } else {
            in_xd2 = *a0;
            dVar4 = *(double *)(iVar3 + 0x90);
        }
        fVar11 = (float)((u64)in_dr4 >> 0x20);
        if (cVar15 == '\0') {
            dVar4 = (double)CONCAT44(((float)((u64)dVar4 >> 0x20) - SUB84(dVar4, 0)) * fVar11, SUB84(dVar4, 0));
        } else {
            dVar4 = (dVar4 - dVar4) * in_dr4;
        }
        if (cVar16 == '\0') {
            *(int *)(iVar3 + 0xa8) = (int)((u64)dVar4 >> 0x20);
            dVar4 = (double)CONCAT44(*(u32 *)(iVar3 + 0x94), *(u32 *)((int)a0 + 4));
        } else {
            *(double *)(iVar3 + 0xa8) = dVar4;
            in_xd2 = *(double *)((int)a0 + 4);
            dVar4 = *(double *)(iVar3 + 0x94);
        }
        if (cVar15 == '\0') {
            dVar4 = (double)CONCAT44(((float)((u64)dVar4 >> 0x20) - SUB84(dVar4, 0)) * fVar11, SUB84(dVar4, 0));
        } else {
            dVar4 = (dVar4 - dVar4) * in_dr4;
        }
        if (cVar16 == '\0') {
            *(int *)(iVar3 + 0xac) = (int)((u64)dVar4 >> 0x20);
            dVar4 = (double)CONCAT44(*(u32 *)(iVar3 + 0x98), *(u32 *)(a0 + 1));
        } else {
            *(double *)(iVar3 + 0xac) = dVar4;
            in_xd2 = a0[1];
            dVar4 = *(double *)(iVar3 + 0x98);
        }
        if (cVar15 == '\0') {
            in_dr2 = (double)CONCAT44(((float)((u64)dVar4 >> 0x20) - SUB84(dVar4, 0)) * fVar11, SUB84(dVar4, 0));
        } else {
            in_dr2 = (dVar4 - dVar4) * in_dr4;
        }
        uVar6 = (u32)((u64)in_dr2 >> 0x20);
        if (cVar16 == '\0') {
            *(u32 *)(iVar3 + 0xb0) = uVar6;
            in_dr2 = (double)CONCAT44(uVar6, *(u32 *)(iVar3 + 0x68));
        } else {
            *(double *)(iVar3 + 0xb0) = in_dr2;
            in_xd2 = *(double *)(iVar3 + 0x68);
        }
        fVar11 = (float)((u64)dVar13 >> 0x20);
        if (cVar15 == '\0') {
            bVar14 = SUB84(in_dr2, 0) < fVar11;
        } else {
            bVar14 = in_dr2 < dVar13;
        }
        if (bVar14) {
            if (cVar16 == '\0') {
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x68));
            } else {
                in_xd2 = *(double *)(iVar3 + 0x68);
            }
            iVar1 = 0x60;
            if (cVar15 == '\0') {
                in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) / fVar11);
            } else {
                in_dr2 = in_dr2 / dVar13;
            }
            if (cVar16 == '\0') {
                *(int *)(iVar3 + 0x60) = SUB84(in_dr2, 0);
            } else {
                *(double *)(iVar3 + 0x60) = in_xd2;
            }
        } else {
            iVar1 = 0x60;
            if (cVar16 == '\0') {
                *(int *)(iVar3 + 0x60) = SUB84(dVar13, 0);
            } else {
                *(double *)(iVar3 + 0x60) = in_xd14;
            }
        }
    }
    goto LAB_8c23c49a;
code_r0x8c23c2f0:
    if (iVar1 == 200) {
        if (cVar16 == '\0') {
            in_dr2 = (double)CONCAT44(uVar6, *(u32 *)a0);
            dVar13 = (double)CONCAT44(*(u32 *)(iVar3 + 0x90), SUB84(in_dr6, 0));
            dVar4 = (double)CONCAT44(*(u32 *)((int)a0 + 4), SUB84(in_dr0, 0));
        } else {
            in_xd2 = *a0;
            dVar13 = *(double *)(iVar3 + 0x90);
            dVar4 = *(double *)((int)a0 + 4);
        }
        if (cVar15 == '\0') {
            in_dr6 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) - SUB84(in_dr2, 0), SUB84(dVar13, 0));
        } else {
            in_dr6 = dVar13 - in_dr2;
        }
        if (cVar16 == '\0') {
            in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(iVar3 + 0x94));
            dVar13 = (double)CONCAT44(*(u32 *)(a0 + 1), SUB84(in_dr2, 0));
        } else {
            in_xd4 = *(double *)(iVar3 + 0x94);
            dVar13 = a0[1];
        }
        if (cVar15 == '\0') {
            fVar11 = SUB84(in_dr4, 0) - (float)((u64)dVar4 >> 0x20);
        } else {
            fVar11 = SUB84(in_dr4 - dVar4, 0);
        }
        fVar10 = (float)((u64)in_dr6 >> 0x20);
        if (cVar16 == '\0') {
            dVar12 = (double)CONCAT44(*(u32 *)(iVar3 + 0x98), fVar11);
            dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), fVar11);
            dVar4 = (double)CONCAT44(fVar10, SUB84(dVar4, 0));
        } else {
            dVar12 = *(double *)(iVar3 + 0x98);
            fVar11 = SUB84(dVar12, 0);
            in_xd2 = in_xd4;
            dVar4 = in_dr6;
        }
        if (cVar15 == '\0') {
            dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) - (float)((u64)dVar13 >> 0x20), fVar11);
            dVar13 = (double)(u64)(u32)((float)((u64)dVar4 >> 0x20) * fVar10 + SUB84(dVar13, 0) * fVar11);
        } else {
            dVar13 = dVar13 * dVar12;
            dVar12 = dVar12 - dVar13;
        }
        fVar11 = SUB84(dVar13, 0);
        fVar10 = (float)((u64)dVar12 >> 0x20);
        dVar13 = dVar12;
        if (cVar16 == '\0') {
            dVar13 = (double)CONCAT44(fVar10, SUB84(dVar4, 0));
        }
        if (cVar15 == '\0') {
            fVar11 = (float)((u64)dVar13 >> 0x20) * fVar10 + fVar11;
        }
        dVar7 = in_xd2;
        dVar4 = in_xd2;
        if (cVar16 == '\0') {
            dVar7 = (double)((u64)dVar12 & 0xffffffff);
            dVar4 = (double)CONCAT44(fVar11, 0x3f800000);
        }
        uVar6 = SUB84(dVar7, 0);
        noop_fr4_test(0x8c4c11e0, r5, r6, r7, 0x98);
        dVar12 = in_xd14;
        if (cVar16 == '\0') {
            dVar12 = (double)CONCAT44(SUB84(dVar4, 0), uVar6);
        }
        if (cVar15 == '\0') {
            dVar12 = (double)CONCAT44((float)((u64)dVar12 >> 0x20) / (float)((u64)dVar13 >> 0x20), SUB84(dVar12, 0));
        } else {
            dVar12 = dVar12 / dVar13;
        }
        if (cVar16 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)(iVar3 + 0x90), *(u32 *)a0);
        } else {
            in_xd2 = *a0;
            dVar7 = *(double *)(iVar3 + 0x90);
        }
        fVar11 = (float)((u64)dVar12 >> 0x20);
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(((float)((u64)dVar7 >> 0x20) - SUB84(dVar7, 0)) * fVar11, SUB84(dVar7, 0));
        } else {
            dVar7 = (dVar7 - dVar7) * dVar12;
        }
        if (cVar16 == '\0') {
            *(int *)(iVar3 + 0xa8) = (int)((u64)dVar7 >> 0x20);
            dVar7 = (double)CONCAT44(*(u32 *)(iVar3 + 0x94), *(u32 *)((int)a0 + 4));
        } else {
            *(double *)(iVar3 + 0xa8) = dVar7;
            in_xd2 = *(double *)((int)a0 + 4);
            dVar7 = *(double *)(iVar3 + 0x94);
        }
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(((float)((u64)dVar7 >> 0x20) - SUB84(dVar7, 0)) * fVar11, SUB84(dVar7, 0));
        } else {
            dVar7 = (dVar7 - dVar7) * dVar12;
        }
        if (cVar16 == '\0') {
            *(int *)(iVar3 + 0xac) = (int)((u64)dVar7 >> 0x20);
            dVar7 = (double)CONCAT44(*(u32 *)(iVar3 + 0x98), *(u32 *)(a0 + 1));
        } else {
            *(double *)(iVar3 + 0xac) = dVar7;
            in_xd2 = a0[1];
            dVar7 = *(double *)(iVar3 + 0x98);
        }
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(((float)((u64)dVar7 >> 0x20) - SUB84(dVar7, 0)) * fVar11, SUB84(dVar7, 0));
        } else {
            dVar7 = (dVar7 - dVar7) * dVar12;
        }
        uVar6 = (u32)((u64)dVar7 >> 0x20);
        if (cVar16 == '\0') {
            *(u32 *)(iVar3 + 0xb0) = uVar6;
            dVar13 = (double)CONCAT44(*(u32 *)(iVar3 + 0xa0), SUB84(dVar13, 0));
            dVar7 = (double)CONCAT44(uVar6, *(u32 *)(iVar3 + 0xac));
        } else {
            *(double *)(iVar3 + 0xb0) = dVar7;
            dVar13 = *(double *)(iVar3 + 0xa0);
            in_xd2 = *(double *)(iVar3 + 0xac);
        }
        if (cVar15 == '\0') {
            fVar11 = SUB84(dVar7, 0) * (float)((u64)dVar13 >> 0x20);
        } else {
            fVar11 = SUB84(dVar7 * dVar13, 0);
        }
        if (cVar16 == '\0') {
            uVar5 = CONCAT44(*(u32 *)(iVar3 + 0x9c), SUB84(dVar13, 0));
            uVar8 = CONCAT44(*(u32 *)(iVar3 + 0xa8), fVar11);
        } else {
            uVar5 = *(u64 *)(iVar3 + 0x9c);
            uVar8 = *(u64 *)(iVar3 + 0xa8);
        }
        if (cVar15 == '\0') {
            uVar8 = (u64)(u32)((float)((u64)uVar5 >> 0x20) * (float)(uVar8 >> 0x20) + (float)uVar8);
        }
        if (cVar16 == '\0') {
            in_dr0 = (double)CONCAT44(*(u32 *)(iVar3 + 0xa4), (int)uVar5);
            dVar13 = (double)CONCAT44(*(u32 *)(iVar3 + 0xb0), (int)uVar8);
        } else {
            in_dr0 = *(double *)(iVar3 + 0xa4);
            dVar13 = *(double *)(iVar3 + 0xb0);
        }
        fVar11 = (float)((u64)in_dr0 >> 0x20);
        if (cVar15 == '\0') {
            fVar10 = (float)((u64)dVar13 >> 0x20);
            dVar13 = (double)CONCAT44(fVar10, fVar11 * fVar10 + SUB84(dVar13, 0));
        }
        in_dr4 = in_xd2;
        if (cVar16 == '\0') {
            in_dr4 = (double)CONCAT44(SUB84(dVar13, 0), SUB84(dVar12, 0));
        }
        fVar10 = (float)((u64)in_dr4 >> 0x20);
        if (cVar15 == '\0') {
            in_dr2 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), SUB84(dVar13, 0) * fVar10);
        } else {
            in_dr2 = dVar13 * in_dr4;
        }
        if (cVar16 == '\0') {
            *(int *)(iVar3 + 100) = SUB84(in_dr2, 0);
            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x6c));
        } else {
            *(double *)(iVar3 + 100) = in_xd2;
            in_xd2 = *(double *)(iVar3 + 0x6c);
        }
        fVar9 = (float)((u64)dVar4 >> 0x20);
        if (cVar15 == '\0') {
            bVar14 = fVar9 < SUB84(in_dr2, 0);
        } else {
            bVar14 = dVar4 < in_dr2;
        }
        if (bVar14) {
            in_dr2 = (double)((u64)in_dr2 & 0xffffffff00000000);
            if (cVar15 == '\0') {
                bVar14 = fVar10 < 0.0;
            } else {
                bVar14 = in_dr4 < in_dr2;
            }
            if (bVar14) {
                if (cVar16 == '\0') {
                    in_dr2 = (double)((u64) * (u32 *)(iVar3 + 0x74) << 0x20);
                    in_dr0 = (double)CONCAT44(fVar11, *(u32 *)(iVar3 + 100));
                } else {
                    in_dr2 = *(double *)(iVar3 + 0x74);
                }
                fVar11 = (float)((u64)in_dr2 >> 0x20);
                if (cVar15 == '\0') {
                    bVar14 = fVar11 < SUB84(in_dr0, 0);
                } else {
                    bVar14 = in_dr2 < in_dr0;
                }
                if (bVar14) {
                    if (cVar16 == '\0') {
                        in_dr2 = (double)CONCAT44(fVar11, *(u32 *)(iVar3 + 0x68));
                    } else {
                        in_xd2 = *(double *)(iVar3 + 0x68);
                    }
                    if (cVar15 == '\0') {
                        bVar14 = SUB84(in_dr2, 0) < fVar9;
                    } else {
                        bVar14 = in_dr2 < dVar4;
                    }
                    if (bVar14) {
                        if (cVar16 == '\0') {
                            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar3 + 0x68));
                        } else {
                            in_xd2 = *(double *)(iVar3 + 0x68);
                        }
                        if (cVar15 == '\0') {
                            in_dr2 = (double)(u64)(u32)(SUB84(in_dr2, 0) / fVar9);
                        } else {
                            in_dr2 = in_dr2 / dVar4;
                        }
                        if (cVar16 == '\0') {
                            *(int *)(iVar3 + 0x60) = SUB84(in_dr2, 0);
                        } else {
                            *(double *)(iVar3 + 0x60) = in_xd2;
                        }
                    } else if (cVar16 == '\0') {
                        *(int *)(iVar3 + 0x60) = SUB84(dVar4, 0);
                    } else {
                        *(double *)(iVar3 + 0x60) = in_xd14;
                    }
                    uVar6 = SUB84(in_dr2, 0);
                    if (cVar16 == '\0') {
                        uVar6 = *(u32 *)(iVar3 + 0x70);
                    } else {
                        in_xd2 = *(double *)(iVar3 + 0x70);
                    }
                    iVar1 = 100;
                    if (cVar16 == '\0') {
                        in_dr2 = (double)CONCAT44(*(u32 *)(iVar3 + 100), uVar6);
                    } else {
                        in_dr2 = *(double *)(iVar3 + 100);
                    }
                    if (cVar15 == '\0' && (float)((u64)in_dr2 >> 0x20) < SUB84(in_dr2, 0)) {
                        if (cVar16 == '\0') {
                            dVar13 = (double)CONCAT44(*(u32 *)(iVar3 + 100), *(u32 *)(iVar3 + 0x74));
                        } else {
                            in_xd2 = *(double *)(iVar3 + 0x74);
                            dVar13 = *(double *)(iVar3 + 100);
                        }
                        iVar1 = 0x60;
                        if (cVar15 == '\0') {
                            dVar13 =
                                (double)CONCAT44((float)((u64)dVar13 >> 0x20) - SUB84(dVar13, 0), SUB84(dVar13, 0));
                        } else {
                            dVar13 = dVar13 - dVar13;
                        }
                        if (cVar16 == '\0') {
                            dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), *(u32 *)(iVar3 + 0x80));
                        } else {
                            in_xd2 = *(double *)(iVar3 + 0x80);
                        }
                        if (cVar15 == '\0') {
                            fVar11 = SUB84(dVar13, 0) * (float)((u64)dVar13 >> 0x20);
                        } else {
                            fVar11 = SUB84(dVar13 * dVar13, 0);
                        }
                        if (cVar16 == '\0') {
                            dVar13 = (double)CONCAT44(*(u32 *)(iVar3 + 0x60), fVar11);
                        } else {
                            dVar13 = *(double *)(iVar3 + 0x60);
                        }
                        if (cVar15 == '\0') {
                            in_dr2 =
                                (double)CONCAT44((float)((u64)dVar13 >> 0x20) * SUB84(dVar13, 0), SUB84(dVar13, 0));
                        } else {
                            in_dr2 = dVar13 * dVar13;
                        }
                        if (cVar16 == '\0') {
                            *(int *)(iVar3 + 0x60) = (int)((u64)in_dr2 >> 0x20);
                        } else {
                            *(double *)(iVar3 + 0x60) = in_dr2;
                        }
                    }
                    goto LAB_8c23c4a0;
                }
            }
        }
    LAB_8c23c49a:
        iVar1 = 0x60;
        in_dr4 = (double)((u64)in_dr4 & 0xffffffff);
        if (cVar16 == '\0') {
            *(u32 *)(iVar3 + 0x60) = 0;
        } else {
            *(double *)(iVar3 + 0x60) = in_dr4;
        }
    }
    goto LAB_8c23c4a0;
}

/*
 * alt_entry_23c2a6  0x8c23c2a6
 * probably an entry 6 bytes into 8c23c2a0: it reads registers that code sets before it
 */
int alt_entry_23c2a6(void) {
    u32 r5;
    u32 r6;
    u32 r7;
    int iVar1;
    int iVar2;
    int iVar3;
    double *unaff_r13;
    int iVar4;
    u64 *puVar5;
    double in_dr0;
    double dVar6;
    u64 uVar7;
    u32 uVar8;
    double in_dr2;
    float fVar11;
    double dVar9;
    u64 uVar10;
    float fVar12;
    float fVar13;
    double in_dr4;
    double dVar14;
    double in_dr6;
    double dVar15;
    u64 in_dr14;
    double in_xd2;
    double in_xd4;
    double in_xd14;
    bool bVar16;
    u32 in_PR;
    u8 auStack_1c[8];
    u64 uStack_14;

    iVar1 = 0x8c4c1280;

    uStack_14 = (double)CONCAT44((int)in_dr14, (u32)uStack_14);
    puVar5 = &uStack_14;
    uStack_14._0_4_ = (int)((u64)in_dr14 >> 0x20);

    *(u32 *)((int)puVar5 + -4) = in_PR;
    iVar2 = (int)0x80;
    iVar3 = *(int *)(iVar2 + 0x8c4c1280);
LAB_8c23c4a0:
    while (true) {
        if (iVar3 == 0) {
            return iVar2;
        }
        iVar3 = iVar3 + -1;
        iVar4 = *(int *)(*(int *)(iVar3 * 4 + iVar1) * 4 + 0x8c4c11e0);
        iVar2 = *(int *)(0x124 + iVar4);
        uVar8 = (u32)((u64)in_dr2 >> 0x20);
        if ((((iVar2 != 0xc4) && (iVar2 != 0xe0)) && (iVar2 != 0xc5)) && (iVar2 != 0xe5))
            goto code_r0x8c23c2f0;

        in_dr2 = (double)CONCAT44(uVar8, *(u32 *)unaff_r13);
        dVar15 = (double)CONCAT44(*(u32 *)(0x90 + iVar4), SUB84(in_dr6, 0));
        dVar6 = (double)CONCAT44(*(u32 *)((int)unaff_r13 + 4), SUB84(in_dr0, 0));

        in_dr6 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - SUB84(in_dr2, 0), SUB84(dVar15, 0));

        dVar15 = (double)CONCAT44(*(u32 *)(0x94 + iVar4), SUB84(in_dr4, 0));
        dVar14 = (double)CONCAT44(*(u32 *)(unaff_r13 + 1), SUB84(in_dr2, 0));

        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - (float)((u64)dVar6 >> 0x20), SUB84(dVar15, 0));

        fVar12 = (float)((u64)in_dr6 >> 0x20);
        fVar13 = (float)((u64)dVar15 >> 0x20);

        dVar14 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), fVar13);
        dVar15 = in_xd2;
        dVar9 = (double)CONCAT44(fVar13, *(u32 *)(0x98 + iVar4));
        dVar6 = (double)CONCAT44(fVar12, SUB84(dVar6, 0));

        fVar11 = (float)((u64)dVar14 >> 0x20);
        in_dr4 = (double)(u64)(u32)(SUB84(dVar9, 0) - fVar11);
        in_dr2 = (double)CONCAT44(fVar11, (float)((u64)dVar6 >> 0x20) * fVar12 + SUB84(dVar14, 0) * fVar13);

        in_dr0 = in_xd4;

        in_dr0 = (double)CONCAT44(SUB84(in_dr4, 0), SUB84(dVar6, 0));

        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20),
                                  (float)((u64)in_dr0 >> 0x20) * SUB84(in_dr4, 0) + SUB84(in_dr2, 0));

        uVar8 = SUB84(in_dr2, 0);
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x6c));
        in_xd2 = dVar15;
        dVar15 = (double)CONCAT44(uVar8, 0x3f800000);

        bVar16 = (float)((u64)dVar15 >> 0x20) < SUB84(in_dr2, 0);

        if (!bVar16)
            break;
        dVar6 = dVar15;

        dVar6 = (double)((u64)in_dr4 & 0xffffffff);

        uVar8 = SUB84(dVar6, 0);
        noop_fr4_test(0x8c4c11e0, r5, r6, r7);
        dVar6 = in_xd14;

        dVar6 = (double)CONCAT44(SUB84(dVar15, 0), uVar8);

        in_dr4 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) / (float)((u64)in_dr0 >> 0x20), SUB84(dVar6, 0));

        iVar2 = (int)0x90;

        dVar6 = (double)CONCAT44(*(u32 *)(iVar2 + iVar4), *(u32 *)unaff_r13);

        fVar13 = (float)((u64)in_dr4 >> 0x20);

        dVar6 = (double)CONCAT44(((float)((u64)dVar6 >> 0x20) - SUB84(dVar6, 0)) * fVar13, SUB84(dVar6, 0));

        *(int *)(iVar2 + 0x18 + iVar4) = (int)((u64)dVar6 >> 0x20);
        dVar6 = (double)(u64) * (u32 *)((int)unaff_r13 + 4);

        iVar2 = (int)0x94;

        dVar6 = (double)CONCAT44(*(u32 *)(iVar2 + iVar4), SUB84(dVar6, 0));

        dVar6 = (double)CONCAT44(((float)((u64)dVar6 >> 0x20) - SUB84(dVar6, 0)) * fVar13, SUB84(dVar6, 0));

        *(int *)(iVar2 + 0x18 + iVar4) = (int)((u64)dVar6 >> 0x20);
        dVar6 = (double)(u64) * (u32 *)(unaff_r13 + 1);

        iVar2 = (int)0x98;

        dVar6 = (double)CONCAT44(*(u32 *)(iVar2 + iVar4), SUB84(dVar6, 0));

        in_dr2 = (double)CONCAT44(((float)((u64)dVar6 >> 0x20) - SUB84(dVar6, 0)) * fVar13, SUB84(dVar6, 0));

        uVar8 = (u32)((u64)in_dr2 >> 0x20);

        *(u32 *)(iVar2 + 0x18 + iVar4) = uVar8;
        in_dr2 = (double)CONCAT44(uVar8, *(u32 *)(iVar4 + 0x68));

        fVar13 = (float)((u64)dVar15 >> 0x20);

        bVar16 = SUB84(in_dr2, 0) < fVar13;

        if (bVar16) {

            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x68));

            iVar2 = 0x60;

            in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0) / fVar13);

            *(int *)(iVar4 + 0x60) = SUB84(in_dr2, 0);

        } else {
            iVar2 = 0x60;

            *(int *)(iVar4 + 0x60) = SUB84(dVar15, 0);
        }
    }
    goto LAB_8c23c49a;
code_r0x8c23c2f0:
    if (iVar2 == 0xc8) {

        in_dr2 = (double)CONCAT44(uVar8, *(u32 *)unaff_r13);
        dVar15 = (double)CONCAT44(*(u32 *)(0x90 + iVar4), SUB84(in_dr6, 0));
        dVar6 = (double)CONCAT44(*(u32 *)((int)unaff_r13 + 4), SUB84(in_dr0, 0));

        in_dr6 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - SUB84(in_dr2, 0), SUB84(dVar15, 0));

        in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(0x94 + iVar4));
        dVar15 = (double)CONCAT44(*(u32 *)(unaff_r13 + 1), SUB84(in_dr2, 0));

        fVar13 = SUB84(in_dr4, 0) - (float)((u64)dVar6 >> 0x20);

        fVar12 = (float)((u64)in_dr6 >> 0x20);

        dVar14 = (double)CONCAT44(*(u32 *)(0x98 + iVar4), fVar13);
        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), fVar13);
        dVar6 = (double)CONCAT44(fVar12, SUB84(dVar6, 0));

        dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) - (float)((u64)dVar15 >> 0x20), fVar13);
        dVar15 = (double)(u64)(u32)((float)((u64)dVar6 >> 0x20) * fVar12 + SUB84(dVar15, 0) * fVar13);

        fVar13 = SUB84(dVar15, 0);
        fVar12 = (float)((u64)dVar14 >> 0x20);
        dVar15 = dVar14;

        dVar15 = (double)CONCAT44(fVar12, SUB84(dVar6, 0));

        fVar13 = (float)((u64)dVar15 >> 0x20) * fVar12 + fVar13;

        dVar9 = in_xd2;
        dVar6 = in_xd2;

        dVar9 = (double)((u64)dVar14 & 0xffffffff);
        dVar6 = (double)CONCAT44(fVar13, 0x3f800000);

        uVar8 = SUB84(dVar9, 0);
        noop_fr4_test(0x8c4c11e0, r5, r6, r7);
        dVar14 = in_xd14;

        dVar14 = (double)CONCAT44(SUB84(dVar6, 0), uVar8);

        dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) / (float)((u64)dVar15 >> 0x20), SUB84(dVar14, 0));

        iVar2 = (int)0x90;

        dVar9 = (double)CONCAT44(*(u32 *)(iVar2 + iVar4), *(u32 *)unaff_r13);

        fVar13 = (float)((u64)dVar14 >> 0x20);

        dVar9 = (double)CONCAT44(((float)((u64)dVar9 >> 0x20) - SUB84(dVar9, 0)) * fVar13, SUB84(dVar9, 0));

        *(int *)(iVar2 + 0x18 + iVar4) = (int)((u64)dVar9 >> 0x20);
        dVar9 = (double)(u64) * (u32 *)((int)unaff_r13 + 4);

        iVar2 = (int)0x94;

        dVar9 = (double)CONCAT44(*(u32 *)(iVar2 + iVar4), SUB84(dVar9, 0));

        dVar9 = (double)CONCAT44(((float)((u64)dVar9 >> 0x20) - SUB84(dVar9, 0)) * fVar13, SUB84(dVar9, 0));

        *(int *)(iVar2 + 0x18 + iVar4) = (int)((u64)dVar9 >> 0x20);
        dVar9 = (double)(u64) * (u32 *)(unaff_r13 + 1);

        iVar2 = (int)0x98;

        dVar9 = (double)CONCAT44(*(u32 *)(iVar2 + iVar4), SUB84(dVar9, 0));

        dVar9 = (double)CONCAT44(((float)((u64)dVar9 >> 0x20) - SUB84(dVar9, 0)) * fVar13, SUB84(dVar9, 0));

        uVar8 = (u32)((u64)dVar9 >> 0x20);

        *(u32 *)(iVar2 + 0x18 + iVar4) = uVar8;
        dVar15 = (double)CONCAT44(*(u32 *)(iVar2 + 8 + iVar4), SUB84(dVar15, 0));
        dVar9 = (double)CONCAT44(uVar8, *(u32 *)(iVar2 + 0x14 + iVar4));

        fVar13 = SUB84(dVar9, 0) * (float)((u64)dVar15 >> 0x20);

        uVar7 = CONCAT44(*(u32 *)(iVar2 + 4 + iVar4), SUB84(dVar15, 0));
        uVar10 = CONCAT44(*(u32 *)(iVar2 + 0x10 + iVar4), fVar13);

        uVar10 = (u64)(u32)((float)((u64)uVar7 >> 0x20) * (float)(uVar10 >> 0x20) + (float)uVar10);

        in_dr0 = (double)CONCAT44(*(u32 *)(iVar2 + 0xc + iVar4), (int)uVar7);
        dVar15 = (double)CONCAT44(*(u32 *)(iVar2 + 0x18 + iVar4), (int)uVar10);

        fVar13 = (float)((u64)in_dr0 >> 0x20);

        fVar12 = (float)((u64)dVar15 >> 0x20);
        dVar15 = (double)CONCAT44(fVar12, fVar13 * fVar12 + SUB84(dVar15, 0));

        in_dr4 = in_xd2;

        in_dr4 = (double)CONCAT44(SUB84(dVar15, 0), SUB84(dVar14, 0));

        fVar12 = (float)((u64)in_dr4 >> 0x20);

        in_dr2 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) * fVar12);

        *(int *)(iVar4 + 100) = SUB84(in_dr2, 0);
        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x6c));

        fVar11 = (float)((u64)dVar6 >> 0x20);

        bVar16 = fVar11 < SUB84(in_dr2, 0);

        if (bVar16) {
            in_dr2 = (double)((u64)in_dr2 & 0xffffffff00000000);

            bVar16 = fVar12 < 0.0;

            if (bVar16) {

                in_dr2 = (double)((u64) * (u32 *)(iVar4 + 0x74) << 0x20);
                in_dr0 = (double)CONCAT44(fVar13, *(u32 *)(iVar4 + 100));

                fVar13 = (float)((u64)in_dr2 >> 0x20);

                bVar16 = fVar13 < SUB84(in_dr0, 0);

                if (bVar16) {

                    in_dr2 = (double)CONCAT44(fVar13, *(u32 *)(iVar4 + 0x68));

                    bVar16 = SUB84(in_dr2, 0) < fVar11;

                    if (bVar16) {

                        in_dr2 = (double)CONCAT44((int)((u64)in_dr2 >> 0x20), *(u32 *)(iVar4 + 0x68));

                        in_dr2 = (double)(u64)(u32)(SUB84(in_dr2, 0) / fVar11);

                        *(int *)(iVar4 + 0x60) = SUB84(in_dr2, 0);

                    } else
                        *(int *)(iVar4 + 0x60) = SUB84(dVar6, 0);

                    uVar8 = SUB84(in_dr2, 0);

                    uVar8 = *(u32 *)(iVar4 + 0x70);

                    iVar2 = 100;

                    in_dr2 = (double)CONCAT44(*(u32 *)(iVar4 + 100), uVar8);

                    if ((float)((u64)in_dr2 >> 0x20) < SUB84(in_dr2, 0)) {

                        dVar15 = (double)CONCAT44(*(u32 *)(iVar4 + 100), *(u32 *)(iVar4 + 0x74));

                        iVar2 = 0x60;

                        dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - SUB84(dVar15, 0), SUB84(dVar15, 0));

                        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)(iVar4 + 0x80));

                        fVar13 = SUB84(dVar15, 0) * (float)((u64)dVar15 >> 0x20);

                        dVar15 = (double)CONCAT44(*(u32 *)(iVar4 + 0x60), fVar13);

                        in_dr2 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) * SUB84(dVar15, 0), SUB84(dVar15, 0));

                        *(int *)(iVar4 + 0x60) = (int)((u64)in_dr2 >> 0x20);
                    }
                    goto LAB_8c23c4a0;
                }
            }
        }
    LAB_8c23c49a:
        iVar2 = 0x60;
        in_dr4 = (double)((u64)in_dr4 & 0xffffffff);

        *(u32 *)(iVar4 + 0x60) = 0;
    }
    goto LAB_8c23c4a0;
}

/*
 * gfxlib_state_switch_23c4ba  0x8c23c4ba
 * area name: in the gfxlib library code range; behaviour name: mostly calls state_switch functions
 * called by: ninja_uses_ta_fifo_2536a8
 */
u32 gfxlib_state_switch_23c4ba(u32 a0) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 extraout_fr1;
    float extraout_fr0;
    float fVar4;
    double dVar5;
    u32 uVar6;
    u64 in_xd2;
    u64 uVar7;
    u64 in_xd14;
    int iVar8;
    char cVar9;
    char cVar10;

    cVar10 = '\0';
    cVar9 = '\0';
    uVar1 = 0x80;
    uVar6 = 0x3f800000;
    iVar2 = g_8c4c1300;
    while (iVar2 != 0) {
        iVar2 = iVar2 + -1;
        iVar3 = *(int *)(*(int *)(iVar2 * 4 + 0x8c4c1280) * 4 + 0x8c4c11e0);
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(g_8c4c11a4, *(u32 *)(iVar3 + 200));
        } else {
            in_xd2 = *(u64 *)(iVar3 + 200);
            dVar5 = (double)CONCAT44(g_8c4c11a8, g_8c4c11a4);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(iVar3 + 0xf8) = (int)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(g_8c4c11a8, *(u32 *)(iVar3 + 0xcc));
        } else {
            *(double *)(iVar3 + 0xf8) = dVar5;
            in_xd2 = *(u64 *)(iVar3 + 0xcc);
            dVar5 = (double)CONCAT44(g_8c4c11ac, g_8c4c11a8);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(iVar3 + 0xfc) = (int)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(g_8c4c11ac, *(u32 *)(iVar3 + 0xd0));
        } else {
            *(double *)(iVar3 + 0xfc) = dVar5;
            in_xd2 = *(u64 *)(iVar3 + 0xd0);
            dVar5 = (double)CONCAT44(g_8c4c11b0, g_8c4c11ac);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(iVar3 + 0x100) = (int)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(g_8c4c11b4, *(u32 *)(iVar3 + 0xd8));
        } else {
            *(double *)(iVar3 + 0x100) = dVar5;
            in_xd2 = *(u64 *)(iVar3 + 0xd8);
            dVar5 = (double)CONCAT44(g_8c4c11b8, g_8c4c11b4);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(iVar3 + 0x108) = (int)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(g_8c4c11b8, *(u32 *)(iVar3 + 0xdc));
        } else {
            *(double *)(iVar3 + 0x108) = dVar5;
            in_xd2 = *(u64 *)(iVar3 + 0xdc);
            dVar5 = (double)CONCAT44(g_8c4c11bc, g_8c4c11b8);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(iVar3 + 0x10c) = (int)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(g_8c4c11bc, *(u32 *)(iVar3 + 0xe0));
        } else {
            *(double *)(iVar3 + 0x10c) = dVar5;
            in_xd2 = *(u64 *)(iVar3 + 0xe0);
            dVar5 = (double)CONCAT44(g_8c4c11c0, g_8c4c11bc);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(iVar3 + 0x110) = (int)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(g_8c4c11c4, *(u32 *)(iVar3 + 0xe8));
        } else {
            *(double *)(iVar3 + 0x110) = dVar5;
            in_xd2 = *(u64 *)(iVar3 + 0xe8);
            dVar5 = (double)CONCAT44(g_8c4c11c8, g_8c4c11c4);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(iVar3 + 0x118) = (int)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(g_8c4c11c8, *(u32 *)(iVar3 + 0xec));
        } else {
            *(double *)(iVar3 + 0x118) = dVar5;
            in_xd2 = *(u64 *)(iVar3 + 0xec);
            dVar5 = (double)CONCAT44(g_8c4c11cc, g_8c4c11c8);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(iVar3 + 0x11c) = (int)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(g_8c4c11cc, *(u32 *)(iVar3 + 0xf0));
            uVar7 = in_xd2;
        } else {
            *(double *)(iVar3 + 0x11c) = dVar5;
            uVar7 = *(u64 *)(iVar3 + 0xf0);
            dVar5 = (double)CONCAT44(g_8c4c11d0, g_8c4c11cc);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 * dVar5;
        }
        uVar1 = (u32)((u64)dVar5 >> 0x20);
        if (cVar10 == '\0') {
            *(u32 *)(iVar3 + 0x120) = uVar1;
            *(u32 *)(iVar3 + 0x114) = *(u32 *)(iVar3 + 0xe4);
            dVar5 = (double)CONCAT44(uVar1, g_8c4c11d0);
        } else {
            *(double *)(iVar3 + 0x120) = dVar5;
            *(u64 *)(iVar3 + 0x114) = *(u64 *)(iVar3 + 0xe4);
            uVar7 = CONCAT44(uRam8c4c11d4, g_8c4c11d0);
        }
        if (cVar9 == '\0') {
            iVar8 = (int)SUB84(dVar5, 0);
        } else {
            iVar8 = (int)dVar5;
        }
        *(int *)(iVar3 + 0x88) = iVar8;
        uVar1 = 0x124;
        in_xd2 = uVar7;
        if ((*(u32 *)(iVar3 + 0x124) & 0x38) != 0) {
            gfxlib_state_switch_23a8d8(*(u32 *)(iVar3 + 0x88));
            in_xd2 = in_xd14;
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), uVar6);
                in_xd2 = uVar7;
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar5, 0) / extraout_fr0;
            } else {
                fVar4 = SUB84(dVar5 / (double)CONCAT44(extraout_fr0, extraout_fr1), 0);
            }
            uVar1 = 0x80;
            if (cVar10 == '\0') {
                *(float *)(iVar3 + 0x80) = fVar4;
            } else {
                *(u64 *)(iVar3 + 0x80) = in_xd2;
            }
        }
    }
    return uVar1;
}

/*
 * alt_entry_23c4cc  0x8c23c4cc
 * probably an entry 18 bytes into 8c23c4ba: it reads registers that code sets before it
 */
int alt_entry_23c4cc(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, int ain0) {
    u32 unaff_r10;
    int unaff_r11;
    int iVar1;
    int iVar2;
    u8 *puVar3;
    float extraout_fr0;
    float fVar4;
    double dVar5;
    u32 uVar6;
    u32 uVar7;
    u64 in_xd2;
    u64 uVar8;
    u64 in_xd14;
    u32 in_PR;
    int iVar9;
    u8 auStack_8[4];
    u8 auStack_4[4];

    puVar3 = auStack_4;

    *(u32 *)(puVar3 + -4) = in_PR;
    iVar1 = *(int *)(ain0 + unaff_r11);
    uVar7 = 0x3f800000;
    while (iVar1 != 0) {
        iVar1 = iVar1 + -1;
        iVar2 = *(int *)(*(int *)(iVar1 * 4 + unaff_r11) * 4 + 0x8c4c11e0);

        dVar5 = (double)CONCAT44(g_8c4c11a4, *(u32 *)(iVar2 + 200));

        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

        *(int *)(iVar2 + 0xf8) = (int)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(g_8c4c11a8, *(u32 *)(iVar2 + 0xcc));

        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

        *(int *)(iVar2 + 0xfc) = (int)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(g_8c4c11ac, *(u32 *)(iVar2 + 0xd0));

        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

        *(int *)(iVar2 + 0x100) = (int)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(g_8c4c11b4, *(u32 *)(iVar2 + 0xd8));

        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

        *(int *)(iVar2 + 0x108) = (int)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(g_8c4c11b8, *(u32 *)(iVar2 + 0xdc));

        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

        *(int *)(iVar2 + 0x10c) = (int)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(g_8c4c11bc, *(u32 *)(iVar2 + 0xe0));

        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

        *(int *)(iVar2 + 0x110) = (int)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(g_8c4c11c4, *(u32 *)(iVar2 + 0xe8));

        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

        *(int *)(iVar2 + 0x118) = (int)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(g_8c4c11c8, *(u32 *)(iVar2 + 0xec));

        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

        *(int *)(iVar2 + 0x11c) = (int)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(g_8c4c11cc, *(u32 *)(iVar2 + 0xf0));
        uVar8 = in_xd2;

        dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) * SUB84(dVar5, 0), SUB84(dVar5, 0));

        uVar6 = (u32)((u64)dVar5 >> 0x20);

        *(u32 *)(iVar2 + 0x120) = uVar6;
        *(u32 *)(iVar2 + 0x114) = *(u32 *)(iVar2 + 0xe4);
        dVar5 = (double)CONCAT44(uVar6, g_8c4c11d0);

        iVar9 = (int)SUB84(dVar5, 0);

        *(int *)(iVar2 + 0x88) = iVar9;
        ain0 = 0x124;
        in_xd2 = uVar8;
        if ((*(u32 *)(iVar2 + 0x124) & unaff_r10) != 0) {
            gfxlib_state_switch_23a8d8(*(u32 *)(iVar2 + 0x88), unused_a1, unused_a2, unused_a3, *(u32 *)(puVar3 + -4));
            in_xd2 = in_xd14;

            dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), uVar7);
            in_xd2 = uVar8;

            fVar4 = SUB84(dVar5, 0) / extraout_fr0;

            ain0 = 0x80;

            *(float *)(iVar2 + 0x80) = fVar4;
        }
    }
    return ain0;
}

/*
 * gfxlib_calls_fill_loop_23c70c  0x8c23c70c
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: fill_loop
 * called by: gfxlib_calls_fill_loop_247df4, ninja_calls_fill_loop_253cfc
 */
u32 gfxlib_calls_fill_loop_23c70c(void) {
    int ar7_00;
    int ar4_00;
    int iVar1;
    u32 uVar2;
    int ar5_00;
    int ar6_00;

    ar4_00 = 0x8c4c1280;
    ar7_00 = 0x8c4c11e0;
    ar6_00 = *(int *)(0x80 + 0x8c4c11e0);
    if (0 < ar6_00) {
        ar5_00 = 0;
        if (0 < ar6_00) {
            do {
                if (*(int *)(*(int *)(ar5_00 * 4 + ar7_00) + 0x58) == 1) {
                    iVar1 = (int)0x80;
                    *(int *)(*(int *)(iVar1 + ar4_00) * 4 + ar4_00) = ar5_00;
                    *(int *)(iVar1 + ar4_00) = *(int *)(iVar1 + ar4_00) + 1;
                }
                ar5_00 = ar5_00 + 1;
            } while (ar5_00 < ar6_00);
        }
        uVar2 = gfxlib_fill_loop_23bfee();
        return uVar2;
    }
    return (int)0x80;
}

/*
 * memcpy_words_n  0x8c23c7f4
 * copies a2 32-bit words from a1 to a0
 * called by: alt_entry_2376d8, flashrom_write_block_retry, gfxlib_uses_memcpy_words_n_2376c4, ninja_palette_load
 */
u32 memcpy_words_n(u32 *a0, u32 *a1, int a2) {
    u32 uVar1;

    do {
        uVar1 = *a1;
        a1 = a1 + 1;
        a2 = a2 + -1;
        *a0 = uVar1;
        a0 = a0 + 1;
    } while (a2 != 0);
    return uVar1;
}

/*
 * memcpy_bytes  0x8c23c814
 * copies a2 bytes (a2 > 0)
 * called by: common_load_eye_scsi, draw_copy_259a70, draw_state_copy_in, draw_state_copy_out, gdfs_uses_bswap32_2124d0,
 * gfx_stream_read, gfxlib_copy_238f2a, gfxlib_copy_239f84 (+8 more)
 */
int memcpy_bytes(char *a0, char *a1, int a2) {
    char cVar1;

    do {
        cVar1 = *a1;
        a1 = a1 + 1;
        a2 = a2 + -1;
        *a0 = cVar1;
        a0 = a0 + 1;
    } while (a2 != 0);
    return (int)cVar1;
}

/*
 * gfxlib_fill_loop_23c824  0x8c23c824
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23c824(int *a0, u32 a1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float *pfVar6;
    float *pfVar7;
    float *pfVar8;
    float *pfVar9;
    u32 *puVar10;
    u32 uVar11;
    int iVar12;
    int iVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar18;
    u64 uVar17;
    float fVar19;
    float fVar20;
    u64 in_xd0;
    float fVar21;
    u64 in_xd2;
    float fVar22;
    u64 in_xd4;
    float fVar23;
    u64 in_xd6;
    float fVar24;
    u64 in_xd8;
    float fVar25;
    float in_xf10;
    float in_xf11;
    u64 in_xd12;
    float fVar26;
    u64 in_xd14;
    float fVar27;

    fVar5 = g_8c4aa550;
    fVar4 = g_8c4aa4b8;
    fVar3 = g_8c4aa4b4;
    uVar11 = a0[1];
    pfVar7 = (float *)a0[2];
    pfVar6 = (float *)a0[3];
    fVar20 = (float)a0[4];
    fVar19 = (float)a0[5];
    _DAT_ff000038 = (uVar11 & 0x1c000000) >> 0x18;
    puVar10 = (u32 *)(uVar11 & 0x3ffffff | 0xe0000000);
    iVar12 = uVar11 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar13 = *a0; iVar13 != 0; iVar13 = iVar13 + -1) {
        fVar15 = *pfVar6;
        fVar14 = pfVar6[1];
        fVar18 = pfVar6[2];
        uVar17 = (u64)(u32)fVar18 << 0x20;
        pfVar6 = pfVar6 + 3;
        fVar21 = (float)((u64)in_xd0 >> 0x20);
        fVar24 = (float)((u64)in_xd6 >> 0x20);
        fVar25 = (float)((u64)in_xd8 >> 0x20);
        fVar26 = (float)((u64)in_xd12 >> 0x20);
        fVar27 = (float)((u64)in_xd14 >> 0x20);
        fVar1 = (float)in_xd0 * fVar14 + (float)in_xd4 * fVar15 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar18;
        fVar23 = (float)((u64)in_xd4 >> 0x20);
        fVar2 = fVar21 * fVar14 + fVar23 * fVar15 + fVar25 * 0.0 + fVar26 * fVar18;
        fVar22 = (float)((u64)in_xd2 >> 0x20);
        fVar16 = (float)in_xd2 * fVar14 + (float)in_xd6 * fVar15 + in_xf10 * 0.0 + (float)in_xd14 * fVar18;
        fVar16 = fVar22 * fVar14 + fVar24 * fVar15 + in_xf11 * 0.0 + fVar27 * fVar18;
        uVar17 = uVar17 & 0xffffffff00000000;
        fVar16 = (float)(uVar17 >> 0x20);
        fVar16 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0 + fVar16 * fVar16;
        fVar16 = 1.0 / SQRT((float)uVar17);
        CacheBlockInvalidate(iVar12);
        puVar10[0xf] = 0xffffffff;
        puVar10[0xe] = (float)(uVar17 >> 0x20) * fVar16;
        puVar10[0xd] = fVar1 * fVar16;
        puVar10[0xc] = fVar2 * fVar16;
        fVar16 = *pfVar7;
        pfVar8 = pfVar7 + 1;
        pfVar9 = pfVar7 + 2;
        pfVar7 = pfVar7 + 3;
        fVar16 = fVar15 * fVar5 + fVar16;
        fVar14 = fVar14 * fVar5 + *pfVar8;
        fVar15 = fVar18 * fVar5 + *pfVar9;
        fVar1 = (float)in_xd0 * fVar14 + (float)in_xd4 * fVar16 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar15;
        fVar2 = fVar21 * fVar14 + fVar23 * fVar16 + fVar25 * 1.0 + fVar26 * fVar15;
        fVar14 = fVar22 * fVar14 + fVar24 * fVar16 + in_xf11 * 1.0 + fVar27 * fVar15;
        fVar16 = 1.0 / fVar14;
        puVar10[6] = fVar14;
        puVar10[5] = fVar1;
        puVar10[4] = fVar2;
        CacheBlockInvalidate(iVar12 + -0x20);
        iVar12 = iVar12 + 0x40;
        puVar10[3] = fVar16;
        puVar10[2] = fVar1 * fVar19 * fVar16 + fVar4;
        puVar10[1] = fVar2 * fVar20 * fVar16 + fVar3;
        *puVar10 = 0;
        puVar10 = puVar10 + 0x10;
    }
    return 0x3ffffff;
}

/*
 * gfxlib_fill_loop_23c940  0x8c23c940
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23c940(int *a0, u32 a1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    float *pfVar7;
    u32 *puVar8;
    u32 uVar9;
    int iVar10;
    int iVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    u64 in_xd0;
    float fVar19;
    u64 in_xd2;
    float fVar20;
    u64 in_xd4;
    float fVar21;
    u64 in_xd6;
    float fVar22;
    u64 in_xd8;
    float fVar23;
    float in_xf11;
    u64 in_xd12;
    float fVar24;
    u64 in_xd14;
    float fVar25;

    fVar3 = g_8c4aa550;
    fVar2 = g_8c4aa4b8;
    fVar1 = g_8c4aa4b4;
    uVar9 = a0[1];
    pfVar5 = (float *)a0[2];
    pfVar4 = (float *)a0[3];
    fVar18 = (float)a0[4];
    fVar17 = (float)a0[5];
    _DAT_ff000038 = (uVar9 & 0x1c000000) >> 0x18;
    puVar8 = (u32 *)(uVar9 & 0x3ffffff | 0xe0000000);
    iVar10 = uVar9 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar11 = *a0; iVar11 != 0; iVar11 = iVar11 + -1) {
        fVar15 = *pfVar4;
        fVar14 = pfVar4[1];
        fVar16 = pfVar4[2];
        pfVar4 = pfVar4 + 3;
        fVar19 = (float)((u64)in_xd0 >> 0x20);
        fVar22 = (float)((u64)in_xd6 >> 0x20);
        fVar23 = (float)((u64)in_xd8 >> 0x20);
        fVar24 = (float)((u64)in_xd12 >> 0x20);
        fVar25 = (float)((u64)in_xd14 >> 0x20);
        fVar21 = (float)((u64)in_xd4 >> 0x20);
        fVar20 = (float)((u64)in_xd2 >> 0x20);
        CacheBlockInvalidate(iVar10);
        puVar8[0xf] = 0xffffffff;
        puVar8[0xe] = fVar20 * fVar14 + fVar22 * fVar15 + in_xf11 * 0.0 + fVar25 * fVar16;
        puVar8[0xd] = (float)in_xd0 * fVar14 + (float)in_xd4 * fVar15 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar16;
        puVar8[0xc] = fVar19 * fVar14 + fVar21 * fVar15 + fVar23 * 0.0 + fVar24 * fVar16;
        pfVar6 = pfVar5 + 1;
        pfVar7 = pfVar5 + 2;
        fVar13 = fVar15 * fVar3 + *pfVar5;
        pfVar5 = pfVar5 + 3;
        fVar12 = fVar14 * fVar3 + *pfVar6;
        fVar16 = fVar16 * fVar3 + *pfVar7;
        fVar14 = (float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar16;
        fVar15 = fVar19 * fVar12 + fVar21 * fVar13 + fVar23 * 1.0 + fVar24 * fVar16;
        fVar12 = fVar20 * fVar12 + fVar22 * fVar13 + in_xf11 * 1.0 + fVar25 * fVar16;
        fVar13 = 1.0 / fVar12;
        puVar8[6] = fVar12;
        puVar8[5] = fVar14;
        puVar8[4] = fVar15;
        CacheBlockInvalidate(iVar10 + -0x20);
        iVar10 = iVar10 + 0x40;
        puVar8[3] = fVar13;
        puVar8[2] = fVar14 * fVar17 * fVar13 + fVar2;
        puVar8[1] = fVar15 * fVar18 * fVar13 + fVar1;
        *puVar8 = 0;
        puVar8 = puVar8 + 0x10;
    }
    return 0x3ffffff;
}

/*
 * gfxlib_fill_loop_23ca50  0x8c23ca50
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23ca50(int *a0, u32 a1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float *pfVar4;
    float *pfVar5;
    u32 *puVar6;
    u32 uVar7;
    int iVar8;
    int iVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar17;
    u64 uVar16;
    float fVar18;
    float fVar19;
    u64 in_xd0;
    float fVar20;
    u64 in_xd2;
    float fVar21;
    u64 in_xd4;
    float fVar22;
    u64 in_xd6;
    float fVar23;
    u64 in_xd8;
    float fVar24;
    float in_xf10;
    float in_xf11;
    u64 in_xd12;
    float fVar25;
    u64 in_xd14;
    float fVar26;

    fVar3 = g_8c4aa4b8;
    fVar2 = g_8c4aa4b4;
    uVar7 = a0[1];
    pfVar5 = (float *)a0[2];
    pfVar4 = (float *)a0[3];
    fVar19 = (float)a0[4];
    fVar18 = (float)a0[5];
    _DAT_ff000038 = (uVar7 & 0x1c000000) >> 0x18;
    puVar6 = (u32 *)(uVar7 & 0x3ffffff | 0xe0000000);
    iVar8 = uVar7 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar9 = *a0; iVar9 != 0; iVar9 = iVar9 + -1) {
        fVar13 = *pfVar4;
        fVar12 = pfVar4[1];
        fVar17 = pfVar4[2];
        uVar16 = (u64)(u32)fVar17 << 0x20;
        pfVar4 = pfVar4 + 3;
        fVar21 = (float)((u64)in_xd2 >> 0x20);
        fVar22 = (float)((u64)in_xd4 >> 0x20);
        fVar23 = (float)((u64)in_xd6 >> 0x20);
        fVar24 = (float)((u64)in_xd8 >> 0x20);
        fVar25 = (float)((u64)in_xd12 >> 0x20);
        fVar26 = (float)((u64)in_xd14 >> 0x20);
        fVar10 = (float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar17;
        fVar20 = (float)((u64)in_xd0 >> 0x20);
        fVar1 = fVar20 * fVar12 + fVar22 * fVar13 + fVar24 * 0.0 + fVar25 * fVar17;
        fVar14 = (float)in_xd2 * fVar12 + (float)in_xd6 * fVar13 + in_xf10 * 0.0 + (float)in_xd14 * fVar17;
        fVar12 = fVar21 * fVar12 + fVar23 * fVar13 + in_xf11 * 0.0 + fVar26 * fVar17;
        fVar17 = *pfVar5;
        fVar14 = pfVar5[1];
        fVar11 = pfVar5[2];
        pfVar5 = pfVar5 + 3;
        CacheBlockInvalidate(iVar8);
        uVar16 = uVar16 & 0xffffffff00000000;
        fVar12 = (float)(uVar16 >> 0x20);
        fVar12 = fVar10 * fVar10 + fVar1 * fVar1 + 0.0 + fVar12 * fVar12;
        fVar15 = 1.0 / SQRT((float)uVar16);
        puVar6[0xf] = 0xffffffff;
        fVar12 = (float)in_xd0 * fVar14 + (float)in_xd4 * fVar17 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar11;
        fVar13 = fVar20 * fVar14 + fVar22 * fVar17 + fVar24 * 1.0 + fVar25 * fVar11;
        fVar14 = fVar21 * fVar14 + fVar23 * fVar17 + in_xf11 * 1.0 + fVar26 * fVar11;
        puVar6[0xe] = (float)(uVar16 >> 0x20) * fVar15;
        puVar6[0xd] = fVar10 * fVar15;
        puVar6[0xc] = fVar1 * fVar15;
        fVar10 = 1.0 / fVar14;
        puVar6[6] = fVar14;
        puVar6[5] = fVar12;
        puVar6[4] = fVar13;
        CacheBlockInvalidate(iVar8 + -0x20);
        iVar8 = iVar8 + 0x40;
        puVar6[3] = fVar10;
        puVar6[2] = fVar12 * fVar18 * fVar10 + fVar3;
        puVar6[1] = fVar13 * fVar19 * fVar10 + fVar2;
        *puVar6 = 0;
        puVar6 = puVar6 + 0x10;
    }
    return 0x3ffffff;
}

/*
 * gfxlib_fill_loop_23cb50  0x8c23cb50
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23cb50(int *a0, u32 a1) {
    float fVar1;
    float fVar2;
    float *pfVar3;
    float *pfVar4;
    u32 *puVar5;
    u32 uVar6;
    int iVar7;
    int iVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    u64 in_xd0;
    float fVar17;
    u64 in_xd2;
    float fVar18;
    u64 in_xd4;
    float fVar19;
    u64 in_xd6;
    float fVar20;
    u64 in_xd8;
    float fVar21;
    float in_xf11;
    u64 in_xd12;
    float fVar22;
    u64 in_xd14;
    float fVar23;

    fVar2 = g_8c4aa4b8;
    fVar1 = g_8c4aa4b4;
    uVar6 = a0[1];
    pfVar4 = (float *)a0[2];
    pfVar3 = (float *)a0[3];
    fVar16 = (float)a0[4];
    fVar15 = (float)a0[5];
    _DAT_ff000038 = (uVar6 & 0x1c000000) >> 0x18;
    puVar5 = (u32 *)(uVar6 & 0x3ffffff | 0xe0000000);
    iVar7 = uVar6 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar8 = *a0; iVar8 != 0; iVar8 = iVar8 + -1) {
        fVar13 = *pfVar3;
        fVar12 = pfVar3[1];
        fVar14 = pfVar3[2];
        pfVar3 = pfVar3 + 3;
        fVar18 = (float)((u64)in_xd2 >> 0x20);
        fVar19 = (float)((u64)in_xd4 >> 0x20);
        fVar20 = (float)((u64)in_xd6 >> 0x20);
        fVar21 = (float)((u64)in_xd8 >> 0x20);
        fVar22 = (float)((u64)in_xd12 >> 0x20);
        fVar23 = (float)((u64)in_xd14 >> 0x20);
        fVar17 = (float)((u64)in_xd0 >> 0x20);
        CacheBlockInvalidate(iVar7);
        fVar10 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar11 = pfVar4[2];
        pfVar4 = pfVar4 + 3;
        puVar5[0xf] = 0xffffffff;
        puVar5[0xe] = fVar18 * fVar12 + fVar20 * fVar13 + in_xf11 * 0.0 + fVar23 * fVar14;
        puVar5[0xd] = (float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar14;
        puVar5[0xc] = fVar17 * fVar12 + fVar19 * fVar13 + fVar21 * 0.0 + fVar22 * fVar14;
        fVar12 = (float)in_xd0 * fVar9 + (float)in_xd4 * fVar10 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar11;
        fVar13 = fVar17 * fVar9 + fVar19 * fVar10 + fVar21 * 1.0 + fVar22 * fVar11;
        fVar9 = fVar18 * fVar9 + fVar20 * fVar10 + in_xf11 * 1.0 + fVar23 * fVar11;
        fVar10 = 1.0 / fVar9;
        puVar5[6] = fVar9;
        puVar5[5] = fVar12;
        puVar5[4] = fVar13;
        CacheBlockInvalidate(iVar7 + -0x20);
        iVar7 = iVar7 + 0x40;
        puVar5[3] = fVar10;
        puVar5[2] = fVar12 * fVar15 * fVar10 + fVar2;
        puVar5[1] = fVar13 * fVar16 * fVar10 + fVar1;
        *puVar5 = 0;
        puVar5 = puVar5 + 0x10;
    }
    return 0x3ffffff;
}

/*
 * gfxlib_fill_loop_23cc40  0x8c23cc40
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23cc40(int *a0, u32 a1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float *pfVar5;
    u32 *puVar6;
    u32 uVar7;
    int iVar8;
    int iVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    u64 in_xd0;
    float in_xf3;
    float in_xf4;
    float in_xf5;
    u64 in_xd6;
    u64 in_xd8;
    float in_xf11;
    u64 in_xd12;
    u64 in_xd14;

    fVar4 = g_8c4aa4b8;
    fVar3 = g_8c4aa4b4;
    uVar7 = a0[1];
    pfVar5 = (float *)a0[2];
    fVar14 = (float)a0[4];
    fVar13 = (float)a0[5];
    _DAT_ff000038 = (uVar7 & 0x1c000000) >> 0x18;
    puVar6 = (u32 *)(uVar7 & 0x3ffffff | 0xe0000000);
    iVar8 = uVar7 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar9 = *a0; iVar9 != 0; iVar9 = iVar9 + -1) {
        CacheBlockInvalidate(iVar8);
        puVar6[0xf] = 0xffffffff;
        fVar11 = *pfVar5;
        fVar10 = pfVar5[1];
        fVar12 = pfVar5[2];
        pfVar5 = pfVar5 + 3;
        fVar1 = (float)in_xd0 * fVar10 + in_xf4 * fVar11 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar12;
        fVar2 = (float)((u64)in_xd0 >> 0x20) * fVar10 + in_xf5 * fVar11 + (float)((u64)in_xd8 >> 0x20) * 1.0 +
                (float)((u64)in_xd12 >> 0x20) * fVar12;
        fVar10 = in_xf3 * fVar10 + (float)((u64)in_xd6 >> 0x20) * fVar11 + in_xf11 * 1.0 +
                 (float)((u64)in_xd14 >> 0x20) * fVar12;
        fVar11 = 1.0 / fVar10;
        puVar6[6] = fVar10;
        puVar6[5] = fVar1;
        puVar6[4] = fVar2;
        CacheBlockInvalidate(iVar8 + -0x20);
        iVar8 = iVar8 + 0x40;
        puVar6[3] = fVar11;
        puVar6[2] = fVar1 * fVar13 * fVar11 + fVar4;
        puVar6[1] = fVar2 * fVar14 * fVar11 + fVar3;
        *puVar6 = 0;
        puVar6 = puVar6 + 0x10;
    }
    return 0x3ffffff;
}

/*
 * gfxlib_fill_loop_23cd0c  0x8c23cd0c
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23cd0c(int *a0, u32 a1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float *pfVar6;
    float *pfVar7;
    float *pfVar8;
    float *pfVar9;
    u32 *puVar10;
    u32 uVar11;
    int iVar12;
    int iVar13;
    u32 uVar14;
    u32 uVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar22;
    u64 uVar21;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    u64 in_xd0;
    float fVar29;
    u64 in_xd2;
    float fVar30;
    u64 in_xd4;
    float fVar31;
    u64 in_xd6;
    float fVar32;
    u64 in_xd8;
    float fVar33;
    u64 in_xd10;
    float fVar34;
    u64 in_xd12;
    float fVar35;
    u64 in_xd14;
    float fVar36;

    fVar5 = g_8c4aa550;
    fVar4 = g_8c4aa4d8;
    fVar3 = g_8c4aa4d4;
    fVar2 = g_8c4aa4b8;
    fVar1 = g_8c4aa4b4;
    uVar11 = a0[1];
    pfVar7 = (float *)a0[2];
    pfVar6 = (float *)a0[3];
    fVar24 = (float)a0[4];
    fVar23 = (float)a0[5];
    uVar14 = a0[6];
    uVar15 = a0[7];
    fVar27 = (float)a0[8];
    fVar28 = (float)a0[9];
    fVar25 = (float)a0[10];
    fVar26 = (float)a0[0xb];
    _DAT_ff000038 = (uVar11 & 0x1c000000) >> 0x18;
    puVar10 = (u32 *)(uVar11 & 0x3ffffff | 0xe0000000);
    iVar12 = uVar11 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar13 = *a0; iVar13 != 0; iVar13 = iVar13 + -1) {
        fVar19 = *pfVar6;
        fVar18 = pfVar6[1];
        fVar22 = pfVar6[2];
        uVar21 = (u64)(u32)fVar22 << 0x20;
        pfVar6 = pfVar6 + 3;
        fVar29 = (float)((u64)in_xd0 >> 0x20);
        fVar32 = (float)((u64)in_xd6 >> 0x20);
        fVar33 = (float)((u64)in_xd8 >> 0x20);
        fVar34 = (float)((u64)in_xd10 >> 0x20);
        fVar35 = (float)((u64)in_xd12 >> 0x20);
        fVar36 = (float)((u64)in_xd14 >> 0x20);
        fVar16 = (float)in_xd0 * fVar18 + (float)in_xd4 * fVar19 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar22;
        fVar31 = (float)((u64)in_xd4 >> 0x20);
        fVar17 = fVar29 * fVar18 + fVar31 * fVar19 + fVar33 * 0.0 + fVar35 * fVar22;
        fVar30 = (float)((u64)in_xd2 >> 0x20);
        fVar20 = (float)in_xd2 * fVar18 + (float)in_xd6 * fVar19 + (float)in_xd10 * 0.0 + (float)in_xd14 * fVar22;
        fVar20 = fVar30 * fVar18 + fVar32 * fVar19 + fVar34 * 0.0 + fVar36 * fVar22;
        uVar21 = uVar21 & 0xffffffff00000000;
        fVar20 = (float)(uVar21 >> 0x20);
        fVar20 = fVar16 * fVar16 + fVar17 * fVar17 + 0.0 + fVar20 * fVar20;
        fVar20 = 1.0 / SQRT((float)uVar21);
        CacheBlockInvalidate(iVar12);
        puVar10[0xf] = 0xffffffff;
        puVar10[0xe] = (u32)((float)(uVar21 >> 0x20) * fVar20);
        puVar10[0xd] = (u32)(fVar16 * fVar20);
        puVar10[0xc] = (u32)(fVar17 * fVar20);
        fVar20 = *pfVar7;
        pfVar8 = pfVar7 + 1;
        pfVar9 = pfVar7 + 2;
        pfVar7 = pfVar7 + 3;
        fVar20 = fVar19 * fVar5 + fVar20;
        fVar18 = fVar18 * fVar5 + *pfVar8;
        fVar19 = fVar22 * fVar5 + *pfVar9;
        fVar16 = (float)in_xd0 * fVar18 + (float)in_xd4 * fVar20 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar19;
        fVar17 = fVar29 * fVar18 + fVar31 * fVar20 + fVar33 * 1.0 + fVar35 * fVar19;
        fVar18 = fVar30 * fVar18 + fVar32 * fVar20 + fVar34 * 1.0 + fVar36 * fVar19;
        fVar20 = 1.0 / fVar18;
        puVar10[6] = (u32)fVar18;
        puVar10[5] = (u32)fVar16;
        puVar10[4] = (u32)fVar17;
        CacheBlockInvalidate(iVar12 + -0x20);
        iVar12 = iVar12 + 0x40;
        uVar11 = 0;
        fVar16 = fVar16 * fVar23 * fVar20 + fVar2;
        fVar17 = fVar17 * fVar24 * fVar20 + fVar1;
        if (fVar3 <= fVar18) {
            uVar11 = (((u32)(fVar26 < fVar16) << 1 | (u32)(fVar16 < fVar25)) << 1 | (u32)(fVar28 < fVar17)) << 1 |
                     (u32)(fVar17 < fVar27);
        }
        puVar10[3] = (u32)fVar20;
        puVar10[2] = (u32)fVar16;
        uVar11 = (uVar11 << 1 | (u32)(fVar4 < fVar18)) << 1 | (u32)(fVar18 < fVar3);
        puVar10[1] = (u32)fVar17;
        uVar14 = uVar14 & uVar11;
        *puVar10 = uVar11;
        uVar15 = uVar15 | uVar11;
        puVar10 = puVar10 + 0x10;
    }
    a0[6] = uVar14;
    a0[7] = uVar15;
    return 0x3ffffff;
}

/*
 * gfxlib_fill_loop_23ce74  0x8c23ce74
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23ce74(int *a0, u32 a1, u32 a2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float *pfVar6;
    float *pfVar7;
    float *pfVar8;
    float *pfVar9;
    u32 *puVar10;
    u32 uVar11;
    int iVar12;
    int iVar13;
    u32 uVar14;
    u32 uVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    u64 in_xd0;
    float fVar27;
    u64 in_xd2;
    float fVar28;
    u64 in_xd4;
    float fVar29;
    u64 in_xd6;
    float fVar30;
    u64 in_xd8;
    float fVar31;
    u64 in_xd10;
    float fVar32;
    u64 in_xd12;
    float fVar33;
    u64 in_xd14;
    float fVar34;

    fVar5 = g_8c4aa550;
    fVar2 = g_8c4aa4b8;
    fVar1 = g_8c4aa4b4;
    fVar3 = g_8c4aa4d4;
    fVar4 = g_8c4aa4d8;
    uVar11 = a0[1];
    pfVar7 = (float *)a0[2];
    pfVar6 = (float *)a0[3];
    fVar22 = (float)a0[4];
    fVar21 = (float)a0[5];
    uVar14 = a0[6];
    uVar15 = a0[7];
    fVar25 = (float)a0[8];
    fVar26 = (float)a0[9];
    fVar23 = (float)a0[10];
    fVar24 = (float)a0[0xb];
    _DAT_ff000038 = (uVar11 & 0x1c000000) >> 0x18;
    puVar10 = (u32 *)(uVar11 & 0x3ffffff | 0xe0000000);
    iVar12 = uVar11 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar13 = *a0; iVar13 != 0; iVar13 = iVar13 + -1) {
        fVar19 = *pfVar6;
        fVar18 = pfVar6[1];
        fVar20 = pfVar6[2];
        pfVar6 = pfVar6 + 3;
        fVar27 = (float)((u64)in_xd0 >> 0x20);
        fVar30 = (float)((u64)in_xd6 >> 0x20);
        fVar31 = (float)((u64)in_xd8 >> 0x20);
        fVar32 = (float)((u64)in_xd10 >> 0x20);
        fVar33 = (float)((u64)in_xd12 >> 0x20);
        fVar34 = (float)((u64)in_xd14 >> 0x20);
        fVar29 = (float)((u64)in_xd4 >> 0x20);
        fVar28 = (float)((u64)in_xd2 >> 0x20);
        CacheBlockInvalidate(iVar12);
        puVar10[0xf] = 0xffffffff;
        puVar10[0xe] = (u32)(fVar28 * fVar18 + fVar30 * fVar19 + fVar32 * 0.0 + fVar34 * fVar20);
        puVar10[0xd] =
            (u32)((float)in_xd0 * fVar18 + (float)in_xd4 * fVar19 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar20);
        puVar10[0xc] = (u32)(fVar27 * fVar18 + fVar29 * fVar19 + fVar31 * 0.0 + fVar33 * fVar20);
        pfVar8 = pfVar7 + 1;
        pfVar9 = pfVar7 + 2;
        fVar17 = fVar19 * fVar5 + *pfVar7;
        pfVar7 = pfVar7 + 3;
        fVar16 = fVar18 * fVar5 + *pfVar8;
        fVar20 = fVar20 * fVar5 + *pfVar9;
        fVar18 = (float)in_xd0 * fVar16 + (float)in_xd4 * fVar17 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar20;
        fVar19 = fVar27 * fVar16 + fVar29 * fVar17 + fVar31 * 1.0 + fVar33 * fVar20;
        fVar16 = fVar28 * fVar16 + fVar30 * fVar17 + fVar32 * 1.0 + fVar34 * fVar20;
        fVar17 = 1.0 / fVar16;
        puVar10[6] = (u32)fVar16;
        puVar10[5] = (u32)fVar18;
        puVar10[4] = (u32)fVar19;
        CacheBlockInvalidate(iVar12 + -0x20);
        iVar12 = iVar12 + 0x40;
        uVar11 = 0;
        fVar18 = fVar18 * fVar21 * fVar17 + fVar2;
        fVar19 = fVar19 * fVar22 * fVar17 + fVar1;
        if (fVar3 <= fVar16) {
            uVar11 = (((u32)(fVar24 < fVar18) << 1 | (u32)(fVar18 < fVar23)) << 1 | (u32)(fVar26 < fVar19)) << 1 |
                     (u32)(fVar19 < fVar25);
        }
        puVar10[3] = (u32)fVar17;
        puVar10[2] = (u32)fVar18;
        uVar11 = (uVar11 << 1 | (u32)(fVar4 < fVar16)) << 1 | (u32)(fVar16 < fVar3);
        puVar10[1] = (u32)fVar19;
        uVar14 = uVar14 & uVar11;
        *puVar10 = uVar11;
        uVar15 = uVar15 | uVar11;
        puVar10 = puVar10 + 0x10;
    }
    a0[6] = uVar14;
    a0[7] = uVar15;
    return 0x3ffffff;
}

/*
 * gfxlib_fill_loop_23cfd0  0x8c23cfd0
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23cfd0(int *a0, u32 a1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float *pfVar5;
    float *pfVar6;
    u32 *puVar7;
    u32 uVar8;
    int iVar9;
    int iVar10;
    u32 uVar11;
    u32 uVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar21;
    u64 uVar20;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    u64 in_xd0;
    float fVar28;
    u64 in_xd2;
    float fVar29;
    u64 in_xd4;
    float fVar30;
    u64 in_xd6;
    float fVar31;
    u64 in_xd8;
    float fVar32;
    u64 in_xd10;
    float fVar33;
    u64 in_xd12;
    float fVar34;
    u64 in_xd14;
    float fVar35;

    fVar2 = g_8c4aa4b8;
    fVar1 = g_8c4aa4b4;
    fVar3 = g_8c4aa4d4;
    fVar4 = g_8c4aa4d8;
    uVar8 = a0[1];
    pfVar6 = (float *)a0[2];
    pfVar5 = (float *)a0[3];
    fVar23 = (float)a0[4];
    fVar22 = (float)a0[5];
    uVar11 = a0[6];
    uVar12 = a0[7];
    fVar26 = (float)a0[8];
    fVar27 = (float)a0[9];
    fVar24 = (float)a0[10];
    fVar25 = (float)a0[0xb];
    _DAT_ff000038 = (uVar8 & 0x1c000000) >> 0x18;
    puVar7 = (u32 *)(uVar8 & 0x3ffffff | 0xe0000000);
    iVar9 = uVar8 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar10 = *a0; iVar10 != 0; iVar10 = iVar10 + -1) {
        fVar17 = *pfVar5;
        fVar16 = pfVar5[1];
        fVar21 = pfVar5[2];
        uVar20 = (u64)(u32)fVar21 << 0x20;
        pfVar5 = pfVar5 + 3;
        fVar29 = (float)((u64)in_xd2 >> 0x20);
        fVar30 = (float)((u64)in_xd4 >> 0x20);
        fVar31 = (float)((u64)in_xd6 >> 0x20);
        fVar32 = (float)((u64)in_xd8 >> 0x20);
        fVar33 = (float)((u64)in_xd10 >> 0x20);
        fVar34 = (float)((u64)in_xd12 >> 0x20);
        fVar35 = (float)((u64)in_xd14 >> 0x20);
        fVar13 = (float)in_xd0 * fVar16 + (float)in_xd4 * fVar17 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar21;
        fVar28 = (float)((u64)in_xd0 >> 0x20);
        fVar14 = fVar28 * fVar16 + fVar30 * fVar17 + fVar32 * 0.0 + fVar34 * fVar21;
        fVar18 = (float)in_xd2 * fVar16 + (float)in_xd6 * fVar17 + (float)in_xd10 * 0.0 + (float)in_xd14 * fVar21;
        fVar16 = fVar29 * fVar16 + fVar31 * fVar17 + fVar33 * 0.0 + fVar35 * fVar21;
        fVar21 = *pfVar6;
        fVar18 = pfVar6[1];
        fVar15 = pfVar6[2];
        pfVar6 = pfVar6 + 3;
        CacheBlockInvalidate(iVar9);
        uVar20 = uVar20 & 0xffffffff00000000;
        fVar16 = (float)(uVar20 >> 0x20);
        fVar16 = fVar13 * fVar13 + fVar14 * fVar14 + 0.0 + fVar16 * fVar16;
        fVar19 = 1.0 / SQRT((float)uVar20);
        puVar7[0xf] = 0xffffffff;
        fVar16 = (float)in_xd0 * fVar18 + (float)in_xd4 * fVar21 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar15;
        fVar17 = fVar28 * fVar18 + fVar30 * fVar21 + fVar32 * 1.0 + fVar34 * fVar15;
        fVar18 = fVar29 * fVar18 + fVar31 * fVar21 + fVar33 * 1.0 + fVar35 * fVar15;
        puVar7[0xe] = (u32)((float)(uVar20 >> 0x20) * fVar19);
        puVar7[0xd] = (u32)(fVar13 * fVar19);
        puVar7[0xc] = (u32)(fVar14 * fVar19);
        fVar14 = 1.0 / fVar18;
        puVar7[6] = (u32)fVar18;
        puVar7[5] = (u32)fVar16;
        puVar7[4] = (u32)fVar17;
        CacheBlockInvalidate(iVar9 + -0x20);
        iVar9 = iVar9 + 0x40;
        uVar8 = 0;
        fVar13 = fVar16 * fVar22 * fVar14 + fVar2;
        fVar16 = fVar17 * fVar23 * fVar14 + fVar1;
        if (fVar3 <= fVar18) {
            uVar8 = (((u32)(fVar25 < fVar13) << 1 | (u32)(fVar13 < fVar24)) << 1 | (u32)(fVar27 < fVar16)) << 1 |
                    (u32)(fVar16 < fVar26);
        }
        puVar7[3] = (u32)fVar14;
        puVar7[2] = (u32)fVar13;
        uVar8 = (uVar8 << 1 | (u32)(fVar4 < fVar18)) << 1 | (u32)(fVar18 < fVar3);
        puVar7[1] = (u32)fVar16;
        uVar11 = uVar11 & uVar8;
        *puVar7 = uVar8;
        uVar12 = uVar12 | uVar8;
        puVar7 = puVar7 + 0x10;
    }
    a0[6] = uVar11;
    a0[7] = uVar12;
    return 0x3ffffff;
}

/*
 * gfxlib_fill_loop_23d118  0x8c23d118
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23d118(int *a0, u32 a1, u32 a2) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float *pfVar5;
    float *pfVar6;
    u32 *puVar7;
    u32 uVar8;
    int iVar9;
    int iVar10;
    u32 uVar11;
    u32 uVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    u64 in_xd0;
    float fVar24;
    u64 in_xd2;
    float fVar25;
    u64 in_xd4;
    float fVar26;
    u64 in_xd6;
    float fVar27;
    u64 in_xd8;
    float fVar28;
    u64 in_xd10;
    float fVar29;
    u64 in_xd12;
    float fVar30;
    u64 in_xd14;
    float fVar31;

    fVar4 = g_8c4aa4d8;
    fVar3 = g_8c4aa4d4;
    fVar2 = g_8c4aa4b8;
    fVar1 = g_8c4aa4b4;
    uVar8 = a0[1];
    pfVar6 = (float *)a0[2];
    pfVar5 = (float *)a0[3];
    fVar19 = (float)a0[4];
    fVar18 = (float)a0[5];
    uVar11 = a0[6];
    uVar12 = a0[7];
    fVar22 = (float)a0[8];
    fVar23 = (float)a0[9];
    fVar20 = (float)a0[10];
    fVar21 = (float)a0[0xb];
    _DAT_ff000038 = (uVar8 & 0x1c000000) >> 0x18;
    puVar7 = (u32 *)(uVar8 & 0x3ffffff | 0xe0000000);
    iVar9 = uVar8 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar10 = *a0; iVar10 != 0; iVar10 = iVar10 + -1) {
        fVar16 = *pfVar5;
        fVar15 = pfVar5[1];
        fVar17 = pfVar5[2];
        pfVar5 = pfVar5 + 3;
        fVar25 = (float)((u64)in_xd2 >> 0x20);
        fVar26 = (float)((u64)in_xd4 >> 0x20);
        fVar27 = (float)((u64)in_xd6 >> 0x20);
        fVar28 = (float)((u64)in_xd8 >> 0x20);
        fVar29 = (float)((u64)in_xd10 >> 0x20);
        fVar30 = (float)((u64)in_xd12 >> 0x20);
        fVar31 = (float)((u64)in_xd14 >> 0x20);
        fVar24 = (float)((u64)in_xd0 >> 0x20);
        CacheBlockInvalidate(iVar9);
        puVar7[0xf] = 0xffffffff;
        puVar7[0xe] = (u32)(fVar25 * fVar15 + fVar27 * fVar16 + fVar29 * 0.0 + fVar31 * fVar17);
        puVar7[0xd] =
            (u32)((float)in_xd0 * fVar15 + (float)in_xd4 * fVar16 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar17);
        puVar7[0xc] = (u32)(fVar24 * fVar15 + fVar26 * fVar16 + fVar28 * 0.0 + fVar30 * fVar17);
        fVar13 = *pfVar6;
        fVar17 = pfVar6[1];
        fVar14 = pfVar6[2];
        pfVar6 = pfVar6 + 3;
        fVar15 = (float)in_xd0 * fVar17 + (float)in_xd4 * fVar13 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar14;
        fVar16 = fVar24 * fVar17 + fVar26 * fVar13 + fVar28 * 1.0 + fVar30 * fVar14;
        fVar17 = fVar25 * fVar17 + fVar27 * fVar13 + fVar29 * 1.0 + fVar31 * fVar14;
        fVar13 = 1.0 / fVar17;
        puVar7[6] = (u32)fVar17;
        puVar7[5] = (u32)fVar15;
        puVar7[4] = (u32)fVar16;
        CacheBlockInvalidate(iVar9 + -0x20);
        iVar9 = iVar9 + 0x40;
        uVar8 = 0;
        fVar15 = fVar15 * fVar18 * fVar13 + fVar2;
        fVar16 = fVar16 * fVar19 * fVar13 + fVar1;
        if (fVar3 <= fVar17) {
            uVar8 = (((u32)(fVar21 < fVar15) << 1 | (u32)(fVar15 < fVar20)) << 1 | (u32)(fVar23 < fVar16)) << 1 |
                    (u32)(fVar16 < fVar22);
        }
        puVar7[3] = (u32)fVar13;
        puVar7[2] = (u32)fVar15;
        uVar8 = (uVar8 << 1 | (u32)(fVar4 < fVar17)) << 1 | (u32)(fVar17 < fVar3);
        puVar7[1] = (u32)fVar16;
        uVar11 = uVar11 & uVar8;
        *puVar7 = uVar8;
        uVar12 = uVar12 | uVar8;
        puVar7 = puVar7 + 0x10;
    }
    a0[6] = uVar11;
    a0[7] = uVar12;
    return 0x3ffffff;
}

/*
 * gfxlib_fill_loop_23d254  0x8c23d254
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_23d386
 */
u32 gfxlib_fill_loop_23d254(int *a0, u32 a1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float *pfVar5;
    u32 *puVar6;
    u32 uVar7;
    int iVar8;
    int iVar9;
    u32 uVar10;
    u32 uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    u64 in_xd0;
    float in_xf3;
    float in_xf4;
    float in_xf5;
    u64 in_xd6;
    u64 in_xd8;
    u64 in_xd10;
    u64 in_xd12;
    u64 in_xd14;

    fVar4 = g_8c4aa4d8;
    fVar3 = g_8c4aa4d4;
    fVar2 = g_8c4aa4b8;
    fVar1 = g_8c4aa4b4;
    uVar7 = a0[1];
    pfVar5 = (float *)a0[2];
    fVar18 = (float)a0[4];
    fVar17 = (float)a0[5];
    uVar10 = a0[6];
    uVar11 = a0[7];
    fVar21 = (float)a0[8];
    fVar22 = (float)a0[9];
    fVar19 = (float)a0[10];
    fVar20 = (float)a0[0xb];
    _DAT_ff000038 = (uVar7 & 0x1c000000) >> 0x18;
    puVar6 = (u32 *)(uVar7 & 0x3ffffff | 0xe0000000);
    iVar8 = uVar7 + 0x20;
    _DAT_ff00003c = _DAT_ff000038;
    for (iVar9 = *a0; iVar9 != 0; iVar9 = iVar9 + -1) {
        CacheBlockInvalidate(iVar8);
        puVar6[0xf] = 0xffffffff;
        fVar14 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar16 = pfVar5[2];
        pfVar5 = pfVar5 + 3;
        fVar13 = (float)in_xd0 * fVar12 + in_xf4 * fVar14 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar16;
        fVar15 = (float)((u64)in_xd0 >> 0x20) * fVar12 + in_xf5 * fVar14 + (float)((u64)in_xd8 >> 0x20) * 1.0 +
                 (float)((u64)in_xd12 >> 0x20) * fVar16;
        fVar12 = in_xf3 * fVar12 + (float)((u64)in_xd6 >> 0x20) * fVar14 + (float)((u64)in_xd10 >> 0x20) * 1.0 +
                 (float)((u64)in_xd14 >> 0x20) * fVar16;
        fVar14 = 1.0 / fVar12;
        puVar6[6] = (u32)fVar12;
        puVar6[5] = (u32)fVar13;
        puVar6[4] = (u32)fVar15;
        CacheBlockInvalidate(iVar8 + -0x20);
        iVar8 = iVar8 + 0x40;
        uVar7 = 0;
        fVar13 = fVar13 * fVar17 * fVar14 + fVar2;
        fVar15 = fVar15 * fVar18 * fVar14 + fVar1;
        if (fVar3 <= fVar12) {
            uVar7 = (((u32)(fVar20 < fVar13) << 1 | (u32)(fVar13 < fVar19)) << 1 | (u32)(fVar22 < fVar15)) << 1 |
                    (u32)(fVar15 < fVar21);
        }
        puVar6[3] = (u32)fVar14;
        puVar6[2] = (u32)fVar13;
        uVar7 = (uVar7 << 1 | (u32)(fVar4 < fVar12)) << 1 | (u32)(fVar12 < fVar3);
        puVar6[1] = (u32)fVar15;
        uVar10 = uVar10 & uVar7;
        *puVar6 = uVar7;
        uVar11 = uVar11 | uVar7;
        puVar6 = puVar6 + 0x10;
    }
    a0[6] = uVar10;
    a0[7] = uVar11;
    return 0x3ffffff;
}

/*
 * gfxlib_calls_fill_loop_23d386  0x8c23d386
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: fill_loop
 * called by: ninja_calls_fill_loop_254006
 */
u32 gfxlib_calls_fill_loop_23d386(u32 *a0) {
    double *pdVar1;
    double *pdVar2;
    u64 *puVar3;
    double *pdVar4;
    u32 *puVar5;
    u32 *puVar6;
    double *pdVar7;
    u32 uVar8;
    u64 *puVar9;
    u32 uVar10;
    int iVar11;
    u8 *puVar12;
    float fVar13;
    double dVar14;
    float fVar15;
    float fVar16;
    double dVar17;
    float fVar19;
    u32 uVar20;
    double dVar18;
    float fVar21;
    double in_dr4;
    double dVar22;
    u32 in_fr7;
    double dVar23;
    u32 in_fr9;
    double dVar24;
    u32 uVar25;
    u32 in_fr11;
    float fVar26;
    u64 uVar27;
    float fVar28;
    u64 in_dr12;
    double dVar29;
    u64 in_dr14;
    double in_xd0;
    u64 in_xd2;
    u64 in_xd4;
    u64 in_xd6;
    double in_xd8;
    u64 in_xd10;
    float in_xf12;
    float in_xf13;
    double in_xd14;
    bool bVar30;
    u32 in_PR;
    u8 auStack_2c[8];
    u64 uStack_24;
    u64 uStack_1c;

    puVar9 = 0x8c4aa4e0;
    pdVar4 = 0x8c4ab324;
    puVar3 = 0x8c4aa4dc;
    pdVar2 = 0x8c4ab320;
    pdVar1 = 0x8c4aa4a8;
    uVar8 = (u32)((u64)in_dr14 >> 0x20);

    uStack_1c = (double)CONCAT44((int)in_dr14, (u32)uStack_1c);
    uStack_1c._0_4_ = uVar8;
    puVar12 = (u8 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44((int)((u64)in_dr12 >> 0x20), (u32)uStack_24);

    *(u32 *)(puVar12 + -4) = in_PR;
    *(u32 *)(puVar12 + -0x48) = 0xffffffff;
    *(u32 *)(puVar12 + -0x38) = 0;
    *(u32 *)(puVar12 + -0x40) = g_8c4aa510;
    *(u32 *)(puVar12 + -0x3c) = *a0;
    iVar11 = a0[1];
    g_8c4ab318 = 0;
    puVar5 = 0x8c4ab30c;

    dVar17 = (double)CONCAT44(*(u32 *)pdVar1, *(u32 *)puVar3);

    dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * SUB84(dVar17, 0), SUB84(dVar17, 0));

    *(int *)pdVar2 = (int)((u64)dVar17 >> 0x20);
    dVar17 = (double)CONCAT44(*(u32 *)pdVar1, *(u32 *)puVar9);

    dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) * SUB84(dVar17, 0), SUB84(dVar17, 0));

    *(int *)pdVar4 = (int)((u64)dVar17 >> 0x20);
    dVar17 = (double)CONCAT44(a0[6], a0[7]);
    fVar19 = (float)a0[8];

    dVar18 = (double)CONCAT44(fVar19, 0x3f800000);

    fVar15 = SUB84(dVar17, 0);
    fVar26 = (float)((u64)dVar17 >> 0x20);
    fVar13 = SUB84(in_xd0, 0) * fVar15 + (float)in_xd4 * fVar26 + SUB84(in_xd8, 0) * 1.0 + in_xf12 * fVar19;
    fVar13 = (float)((u64)in_xd0 >> 0x20) * fVar15 + (float)((u64)in_xd4 >> 0x20) * fVar26 +
             (float)((u64)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar19;
    fVar13 = (float)in_xd2 * fVar15 + (float)in_xd6 * fVar26 + (float)in_xd10 * 1.0 + SUB84(in_xd14, 0) * fVar19;
    fVar19 = (float)((u64)in_xd2 >> 0x20) * fVar15 + (float)((u64)in_xd6 >> 0x20) * fVar26 +
             (float)((u64)in_xd10 >> 0x20) * 1.0 + (float)((u64)in_xd14 >> 0x20) * fVar19;

    uVar20 = (u32)((u64)dVar18 >> 0x20);
    uVar25 = (u32)((u64)dVar17 >> 0x20);

    puVar5[2] = uVar20;
    puVar5[1] = SUB84(dVar17, 0);
    *puVar5 = uVar25;

    puVar6 = 0x8c4aa4f0;
    puVar3 = 0x8c4aa4c4;
    uVar10 = g_8c4aa4f0;
    dVar29 = (double)CONCAT44(uVar8, 0x3f800000);

    in_dr4 = (double)(u64) * (u32 *)(0x8c4ab30c + 1);

    if (((int)0x100 & uVar10) == 0) {
    LAB_8c23d4be:
        uVar8 = SUB84(dVar17, 0);
        if ((uVar10 & 0x40) != 0) {

            dVar17 = (double)CONCAT44(a0[9], SUB84(in_dr4, 0));
            dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), g_8c4aa544);

            bVar30 = SUB84(dVar18, 0) < SUB84(dVar17, 0) + (float)((u64)dVar17 >> 0x20);

            if (bVar30) {
                g_8c4aa554 = 1;
            }
        }
        uVar10 = (u32)0x80;
        g_8c4aa518 = g_8c4aa518 + a0[2];
        *(u32 *)(puVar12 + -0x34) = a0[2];
        *(u32 *)(puVar12 + -0x30) = *(u32 *)(puVar12 + -0x40);
        *(u32 *)(puVar12 + -0x2c) = *(u32 *)(puVar12 + -0x3c);

        *(u32 *)(puVar12 + -0x24) = *(u32 *)pdVar2;
        *(u32 *)(puVar12 + -0x20) = *(u32 *)pdVar4;

        if ((*puVar6 & 2) == 0) {
            *(u32 *)(puVar12 + -0x1c) = *(u32 *)(puVar12 + -0x48);
            puVar9 = puVar3 + 1;
            *(u32 *)(puVar12 + -0x18) = *(u32 *)(puVar12 + -0x38);
            *(u64 **)(puVar12 + -0x44) = puVar3;

            *(u32 *)(puVar12 + -0x14) = *(u32 *)puVar3;

            *(u64 **)(puVar12 + -0x48) = puVar9;

            *(u32 *)(puVar12 + -0x10) = *(u32 *)puVar9;

            *(u32 *)(puVar12 + -0xc) = *(u32 *)(*(int *)(puVar12 + -0x44) + 4);

            *(u32 *)(puVar12 + -8) = *(u32 *)(*(int *)(puVar12 + -0x48) + 4);

            if (iVar11 == 0) {
                gfxlib_fill_loop_23d254(puVar12 + -0x34, 0x8c4ab148);
            } else {
                *(int *)(puVar12 + -0x28) = iVar11;
                iVar11 = g_8c4ab148;
                if ((uVar10 & *puVar6) == 0) {
                    if (iVar11 == 0) {
                        gfxlib_fill_loop_23d118(puVar12 + -0x34, 0x8c4ab148, 0);
                    } else {
                        gfxlib_fill_loop_23cfd0(puVar12 + -0x34, 0x8c4ab148);
                    }
                } else if (iVar11 == 0) {
                    gfxlib_fill_loop_23ce74(puVar12 + -0x34, 0x8c4ab148, 0);
                } else {
                    gfxlib_fill_loop_23cd0c(puVar12 + -0x34, 0x8c4ab148);
                }
            }
            uVar10 = *(u32 *)(puVar12 + -0x1c);
            if ((((uVar10 & 0x3c) != 0) || ((uVar10 & 2) != 0)) || ((uVar10 & 1) != 0))
                goto LAB_8c23d61a;
            g_8c4ab318 = *(u32 *)(puVar12 + -0x18);
            pdVar7 = 0x8c4ab32c;
            pdVar1 = 0x8c4ab328;
            if ((*(u32 *)(puVar12 + -0x18) & 1) != 0) {
                fVar19 = SUB84(dVar29, 0);
                dVar18 = in_xd14;
                dVar17 = in_xd14;

                dVar18 = (double)CONCAT44(fVar19, uVar8);
                dVar17 = (double)CONCAT44(fVar19, g_8c4aa4d4);

                dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) / SUB84(dVar17, 0), SUB84(dVar17, 0));

                uVar8 = (u32)((u64)dVar17 >> 0x20);

                *(u32 *)0x8c4ab31c = uVar8;
                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), *(u32 *)pdVar2);

                dVar18 = (double)CONCAT44((float)((u64)dVar18 >> 0x20) / SUB84(dVar18, 0), SUB84(dVar18, 0));

                *(int *)pdVar1 = (int)((u64)dVar18 >> 0x20);
                dVar17 = (double)CONCAT44(uVar8, *(u32 *)pdVar4);

                fVar19 = fVar19 / SUB84(dVar17, 0);

                *(float *)pdVar7 = fVar19;
            }
        } else if (iVar11 == 0) {
            gfxlib_fill_loop_23cc40(puVar12 + -0x34, 0x8c4ab148);
        } else {
            *(int *)(puVar12 + -0x28) = iVar11;
            if ((uVar10 & *puVar6) == 0) {
                if (g_8c4ab148 == 0) {
                    gfxlib_fill_loop_23cb50(puVar12 + -0x34, 0x8c4ab148);
                } else {
                    gfxlib_fill_loop_23ca50(puVar12 + -0x34, 0x8c4ab148);
                }
            } else if (g_8c4ab148 == 0) {
                gfxlib_fill_loop_23c940(puVar12 + -0x34, 0x8c4ab148);
            } else {
                gfxlib_fill_loop_23c824(puVar12 + -0x34, 0x8c4ab148);
            }
        }
        uVar8 = 0;
    } else {

        dVar18 = (double)CONCAT44(uVar20, SUB84(in_dr4, 0));
        dVar22 = (double)CONCAT44(a0[9], SUB84(in_dr4, 0));

        fVar19 = (float)((u64)dVar22 >> 0x20);

        fVar13 = SUB84(dVar18, 0) + fVar19;

        dVar18 = (double)CONCAT44(*(u32 *)0x8c4aa4d4, fVar13);

        fVar13 = (float)((u64)dVar18 >> 0x20);
        if (fVar13 < SUB84(dVar18, 0)) {
            uVar8 = SUB84(dVar22, 0);

            dVar18 = (double)CONCAT44(fVar13, uVar8);

            fVar13 = SUB84(dVar18, 0) - fVar19;

            dVar18 = (double)CONCAT44(*(u32 *)0x8c4aa4d8, fVar13);

            fVar13 = (float)((u64)dVar18 >> 0x20);
            if (SUB84(dVar18, 0) <= fVar13) {

                dVar18 = (double)CONCAT44(fVar13, uVar8);

                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) + fVar19);

                dVar17 = (double)CONCAT44(uVar25, *(u32 *)0x8c4ab30c);
                dVar29 = (double)CONCAT44(*(u32 *)pdVar2, (int)in_dr12);
                dVar23 = (double)CONCAT44(0x3f800000, in_fr7);

                dVar23 = (double)CONCAT44((float)((u64)dVar23 >> 0x20) / SUB84(dVar18, 0), SUB84(dVar23, 0));

                in_xd0 = (double)CONCAT44(SUB84(dVar17, 0), SUB84(dVar18, 0));

                dVar18 = (double)CONCAT44((float)((u64)in_xd0 >> 0x20) - fVar19, SUB84(in_xd0, 0));

                fVar13 = (float)((u64)dVar29 >> 0x20);

                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), fVar13);
                dVar24 = (double)CONCAT44(*(u32 *)((int)pdVar1 + 0xc), in_fr9);
                uVar27 = CONCAT44(*(u32 *)((int)0x8c4ab30c + 4), in_fr11);

                dVar14 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) + fVar19);

                uVar25 = (u32)((u64)dVar24 >> 0x20);

                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), uVar25);

                fVar15 = SUB84(dVar18, 0) * (float)((u64)dVar18 >> 0x20);

                fVar26 = *(float *)pdVar4;
                uVar27 = CONCAT44((int)((u64)uVar27 >> 0x20), fVar26);
                dVar24 = (double)CONCAT44(uVar25, *(u32 *)(pdVar1 + 2));
                dVar18 = (double)CONCAT44(fVar26, fVar15);
                in_dr4 = in_xd8;

                fVar13 = fVar13 * SUB84(dVar14, 0);

                uVar25 = (u32)((u64)dVar23 >> 0x20);
                dVar17 = dVar23;
                dVar29 = in_dr4;

                dVar17 = (double)CONCAT44(uVar25, SUB84(dVar14, 0));
                dVar29 = (double)CONCAT44(SUB84(dVar24, 0), 0x3f800000);

                fVar15 = (float)((u64)dVar17 >> 0x20);

                dVar23 = (double)CONCAT44(uVar25, fVar15 * SUB84(dVar18, 0) + SUB84(dVar23, 0));

                fVar28 = (float)((u64)uVar27 >> 0x20);

                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), fVar28);

                fVar16 = SUB84(dVar18, 0) - fVar19;
                fVar21 = (float)((u64)dVar18 >> 0x20) * fVar16;
                dVar18 = (double)CONCAT44(fVar21, fVar16);
                dVar29 = (double)CONCAT44(fVar15 * fVar21 + (float)((u64)dVar29 >> 0x20), SUB84(dVar29, 0));
                dVar24 = (double)CONCAT44(fVar15 * fVar13 + (float)((u64)dVar24 >> 0x20),
                                          fVar15 * fVar26 * (fVar28 + fVar19) + SUB84(dVar24, 0));

                in_dr4 = (double)CONCAT44(SUB84(dVar24, 0), uVar8);

                *(u64 **)(puVar12 + -0x44) = 0x8c4aa4c4;

                dVar18 = (double)CONCAT44(fVar21, *(u32 *)0x8c4aa4c4);

                bVar30 = (float)((u64)dVar24 >> 0x20) < SUB84(dVar18, 0);

                if (!bVar30) {

                    dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), *(u32 *)(0x8c4aa4c4 + 1));

                    bVar30 = SUB84(dVar18, 0) < SUB84(dVar23, 0);

                    if (!bVar30) {

                        dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), *(u32 *)(*(int *)(puVar12 + -0x44) + 4));

                        bVar30 = (float)((u64)in_dr4 >> 0x20) < SUB84(dVar18, 0);

                        if (!bVar30) {

                            dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), *(u32 *)((int)0x8c4aa4c4 + 0xc));

                            bVar30 = SUB84(dVar18, 0) < (float)((u64)dVar29 >> 0x20);

                            if (!bVar30)
                                goto LAB_8c23d4be;
                        }
                    }
                }
            }
        }
    LAB_8c23d61a:
        uVar8 = 0xffffffff;
    }
    return uVar8;
}

/*
 * noop_23d694  0x8c23d694
 * called by: gfxlib_uses_float_to_color_u8_23f35a, gfxlib_uses_float_to_color_u8_23f5e2,
 * gfxlib_uses_float_to_color_u8_23fac8, gfxlib_uses_float_to_color_u8_23fd56, gfxlib_uses_float_to_color_u8_2407e2,
 * gfxlib_uses_float_to_color_u8_240a66, gfxlib_uses_float_to_color_u8_240f4c, gfxlib_uses_float_to_color_u8_241114 (+28
 * more)
 */
u32 noop_23d694(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * gfxlib_uses_float_to_color_u8_23d698  0x8c23d698
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 * called by: gfxlib_uses_float_to_color_u8_242d56, gfxlib_uses_float_to_color_u8_244ac2, vram_2499ec
 */
u32 gfxlib_uses_float_to_color_u8_23d698(int a0, u32 a1, int a2, u32 a3) {
    u64 uVar1;
    u64 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    u8 *puVar8;
    int iVar9;
    int *piVar10;
    u64 *unaff_r8;
    u64 *puVar11;
    int *piVar12;
    int *piVar13;
    int iVar14;
    double in_dr0;
    double dVar15;
    u32 uVar16;
    float fVar17;
    float fVar18;
    u32 uVar19;
    double in_dr2;
    double dVar20;
    u32 uVar22;
    u64 uVar21;
    float fVar23;
    double in_dr4;
    double dVar24;
    double in_dr6;
    double in_xd2;
    double in_xd4;
    char cVar25;
    char cVar26;
    u8 *puStack_44;
    u8 *puStack_40;
    int aiStack_28[4];

    cVar26 = '\0';
    cVar25 = '\0';
    iVar14 = 0;
    aiStack_28[0] = a0;
    aiStack_28[1] = a1;
    aiStack_28[2] = a2;
    puStack_44 = &g_8c4c2620;
    puStack_40 = &g_8c4c2620;
    piVar10 = aiStack_28;
    piVar13 = aiStack_28;
    do {
        if (*(u32 *)(aiStack_28[iVar14] + 0x3c) == (u32)(u16)a3) {
            argb_to_float4(*(u32 *)(*piVar13 + 0x28), puStack_44);
            puVar8 = *(u8 **)(*piVar13 + 0x2c);
            argb_to_float4(puVar8, puStack_44 + 0x10);
        } else {
            piVar12 = aiStack_28 + iVar14;
            a2 = *piVar12 + 0x30;
            iVar9 = *piVar12 + 0x10;
            puVar8 = puStack_40;
            piVar10 = (int *)((u16)a3 & 0x8000);
            gfxlib_calls_scan_loop_23bae2(puStack_40, iVar9, a2, (int *)((u16)a3 & 0x8000));
            iVar6 = *piVar12;
            if (cVar26 != '\0') {
                in_xd4 = *(double *)(puStack_40 + 4);
            }
            uVar3 = float_to_color_u8(puVar8, iVar9, a2, piVar10);
            *(u32 *)(iVar6 + 0x28) = uVar3;
            iVar6 = *piVar12;
            if (cVar26 == '\0') {
                in_dr6 = (double)(u64) * (u32 *)(puStack_40 + 0x1c);
                in_dr4 = (double)(u64) * (u32 *)(puStack_40 + 0x14);
            } else {
                in_dr6 = *(double *)(puStack_40 + 0x18);
                in_xd4 = *(double *)(puStack_40 + 0x14);
                in_dr4 = *(double *)(puStack_40 + 0x10);
            }
            uVar3 = float_to_color_u8(puVar8, iVar9, a2, piVar10);
            *(u32 *)(iVar6 + 0x2c) = uVar3;
            *(u32 *)(*piVar12 + 0x3c) = (u32)(u16)a3;
        }
        iVar14 = iVar14 + 1;
        puStack_44 = puStack_44 + 0x20;
        puStack_40 = puStack_40 + 0x20;
        piVar13 = piVar13 + 1;
    } while (iVar14 < 3);
    uVar3 = 1;
    puStack_44 = (u8 *)0x2;
    iVar14 = 0;
    iVar6 = 0;
    do {
        iVar9 = iVar14;
        iVar14 = iVar9 * 0x20;
        piVar10 = aiStack_28 + iVar9;
        piVar13 = aiStack_28 + (int)puStack_44;
        if ((*(u32 *)*piVar13 & 1 ^ *(u32 *)*piVar10 & 1) == 1) {
            iVar7 = *piVar13;
            iVar5 = *piVar10;
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44(*(u32 *)(iVar7 + 0x18), SUB84(in_dr4, 0));
                dVar20 = (double)CONCAT44(*(u32 *)(iVar5 + 0x18), g_8c4aa4d4);
                in_dr4 = in_xd2;
            } else {
                dVar24 = *(double *)(iVar7 + 0x18);
                in_dr4 = (double)CONCAT44(g_8c4aa4d8, g_8c4aa4d4);
                dVar20 = *(double *)(iVar5 + 0x18);
            }
            fVar23 = (float)((u64)dVar24 >> 0x20);
            if (cVar25 == '\0') {
                dVar24 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) - fVar23, SUB84(dVar20, 0) - fVar23);
            } else {
                dVar24 = (dVar20 - dVar24) - dVar24;
            }
            if (cVar26 == '\0') {
                uVar16 = SUB84(dVar24, 0);
                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)(iVar5 + 0x10));
                in_xd2 = in_dr4;
                in_dr4 = (double)CONCAT44(uVar16, *(u32 *)(iVar7 + 0x10));
            } else {
                in_xd4 = *(double *)(iVar7 + 0x10);
                in_xd2 = *(double *)(iVar5 + 0x10);
            }
            if (cVar25 == '\0') {
                in_dr4 =
                    (double)CONCAT44((float)((u64)in_dr4 >> 0x20) / (float)((u64)dVar24 >> 0x20), SUB84(in_dr4, 0));
            } else {
                in_dr4 = in_dr4 / dVar24;
            }
            fVar23 = SUB84(in_dr4, 0);
            dVar20 = in_xd4;
            if (cVar26 == '\0') {
                dVar20 = (double)CONCAT44(fVar23, SUB84(in_dr6, 0));
            }
            in_dr6 = dVar20;
            if (cVar25 == '\0') {
                fVar17 = SUB84(dVar24, 0) - fVar23;
            } else {
                fVar17 = SUB84(dVar24 - in_dr4, 0);
            }
            if (cVar26 == '\0') {
                fVar23 = *(float *)(iVar7 + 0x14);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar23);
                dVar24 = (double)CONCAT44(fVar23, fVar17);
            } else {
                dVar24 = *(double *)(iVar7 + 0x14);
                in_xd4 = dVar24;
            }
            iVar7 = iVar6 * 0x40;
            puVar8 = &g_8c4c2420 + iVar7;
            uVar16 = (u32)((u64)in_dr4 >> 0x20);
            dVar20 = in_dr4;
            if (cVar26 == '\0') {
                dVar20 = (double)CONCAT44(uVar16, SUB84(in_dr0, 0));
            }
            fVar17 = (float)((u64)dVar20 >> 0x20);
            if (cVar25 == '\0') {
                in_dr6 = (double)CONCAT44(fVar17 * SUB84(dVar24, 0) + (float)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0));
            }
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), *(u32 *)(iVar5 + 0x14));
            } else {
                in_xd2 = *(double *)(iVar5 + 0x14);
            }
            if (cVar25 == '\0') {
                fVar23 = SUB84(dVar24, 0) - fVar23;
                dVar24 = (double)CONCAT44(fVar17 * fVar23 + (float)((u64)dVar24 >> 0x20), fVar23);
            } else {
                dVar24 = dVar24 - in_dr4;
            }
            uVar22 = (u32)((u64)dVar24 >> 0x20);
            if (cVar26 == '\0') {
                in_dr4 = (double)CONCAT44(uVar16, uVar22);
                dVar24 = (double)CONCAT44(uVar22, g_8c4ab31c);
                dVar20 = (double)CONCAT44(g_8c4ab320, SUB84(dVar20, 0));
            } else {
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar20 = (double)CONCAT44(g_8c4ab324, g_8c4ab320);
                in_xd4 = dVar24;
            }
            if (cVar25 == '\0') {
                fVar23 = SUB84(dVar24, 0) * (float)((u64)dVar20 >> 0x20);
            } else {
                fVar23 = SUB84(dVar24 * dVar20, 0);
            }
            if (cVar26 == '\0') {
                uVar21 = CONCAT44(g_8c4aa4b4, fVar23);
                dVar24 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(dVar20, 0));
            } else {
                uVar21 = CONCAT44(g_8c4aa4b8, g_8c4aa4b4);
                dVar24 = in_dr6;
            }
            if (cVar25 == '\0') {
                uVar21 = CONCAT44((float)((u64)dVar24 >> 0x20) * (float)uVar21 + (float)((u64)uVar21 >> 0x20),
                                  (float)uVar21);
            }
            if (cVar26 == '\0') {
                *(int *)(&g_8c4c2424 + iVar7) = (int)((u64)uVar21 >> 0x20);
                dVar24 = (double)CONCAT44(g_8c4ab324, SUB84(dVar24, 0));
                dVar20 = (double)CONCAT44(g_8c4aa4b8, g_8c4ab31c);
            } else {
                *(u64 *)(&g_8c4c2424 + iVar7) = uVar21;
                dVar24 = (double)CONCAT44(g_8c4ab328, g_8c4ab324);
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar20 = (double)CONCAT44(g_8c4aa4bc, g_8c4aa4b8);
            }
            if (cVar25 == '\0') {
                dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) * (float)((u64)dVar24 >> 0x20));
            } else {
                dVar20 = dVar20 * dVar24;
            }
            dVar15 = in_xd4;
            if (cVar26 == '\0') {
                dVar15 = (double)CONCAT44(SUB84(in_dr4, 0), SUB84(dVar24, 0));
            }
            if (cVar25 == '\0') {
                dVar20 = (double)CONCAT44(
                    (float)((u64)dVar15 >> 0x20) * SUB84(dVar20, 0) + (float)((u64)dVar20 >> 0x20), SUB84(dVar20, 0));
            }
            uVar16 = (u32)((u64)in_dr4 >> 0x20);
            if (cVar26 == '\0') {
                *(int *)(&g_8c4c2428 + iVar7) = (int)((u64)dVar20 >> 0x20);
                *(u32 *)(&g_8c4c242c + iVar7) = g_8c4ab31c;
                in_dr0 = (double)CONCAT44(uVar16, SUB84(dVar15, 0));
            } else {
                *(double *)(&g_8c4c2428 + iVar7) = dVar20;
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                *(double *)(&g_8c4c242c + iVar7) = in_xd2;
                in_dr0 = in_dr4;
            }
            if (cVar26 == '\0') {
                in_dr4 = (double)CONCAT44(uVar16, *(u32 *)(*piVar13 + 0x20));
            } else {
                in_xd4 = *(double *)(*piVar13 + 0x20);
            }
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), *(u32 *)(*piVar10 + 0x20));
            } else {
                in_xd2 = *(double *)(*piVar10 + 0x20);
                dVar24 = in_xd4;
            }
            fVar23 = (float)((u64)in_dr0 >> 0x20);
            if (cVar25 == '\0') {
                fVar17 = SUB84(dVar24, 0) - SUB84(in_dr4, 0);
                dVar24 = (double)CONCAT44(fVar23 * fVar17 + (float)((u64)dVar24 >> 0x20), fVar17);
            } else {
                dVar24 = dVar24 - in_dr4;
            }
            if (cVar26 == '\0') {
                *(int *)(&g_8c4c2430 + iVar7) = (int)((u64)dVar24 >> 0x20);
            } else {
                *(double *)(&g_8c4c2430 + iVar7) = dVar24;
            }
            if (cVar26 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(*piVar13 + 0x24));
            } else {
                in_xd4 = *(double *)(*piVar13 + 0x24);
            }
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), *(u32 *)(*piVar10 + 0x24));
            } else {
                in_xd2 = *(double *)(*piVar10 + 0x24);
                dVar24 = in_xd4;
            }
            if (cVar25 == '\0') {
                fVar17 = SUB84(dVar24, 0) - SUB84(in_dr4, 0);
                dVar24 = (double)CONCAT44(fVar23 * fVar17 + (float)((u64)dVar24 >> 0x20), fVar17);
            } else {
                dVar24 = dVar24 - in_dr4;
            }
            uVar16 = (u32)((u64)dVar24 >> 0x20);
            if (cVar26 == '\0') {
                *(u32 *)(iVar7 + 0x8c4c2434) = uVar16;
            } else {
                *(double *)(iVar7 + 0x8c4c2434) = dVar24;
            }
            iVar5 = (int)puStack_44 * 0x20;
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44(uVar16, *(u32 *)(&g_8c4c2620 + iVar14));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(&g_8c4c2620 + iVar5));
            } else {
                in_xd2 = *(double *)(&g_8c4c2620 + iVar14);
                in_xd4 = *(double *)(&g_8c4c2620 + iVar5);
            }
            if (cVar25 == '\0') {
                fVar17 = SUB84(dVar24, 0) - SUB84(in_dr4, 0);
            } else {
                fVar17 = SUB84(dVar24 - in_dr4, 0);
            }
            dVar24 = in_xd4;
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), fVar17);
            }
            if (cVar25 == '\0') {
                dVar24 = (double)CONCAT44(fVar23 * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));
            }
            uVar16 = (u32)((u64)dVar24 >> 0x20);
            if (cVar26 == '\0') {
                *(u32 *)(&g_8c4c2440 + iVar7) = uVar16;
                dVar24 = (double)CONCAT44(uVar16, *(u32 *)(&g_8c4c2624 + iVar14));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(&g_8c4c2624 + iVar5));
            } else {
                *(double *)(&g_8c4c2440 + iVar7) = dVar24;
                in_xd2 = *(double *)(&g_8c4c2624 + iVar14);
                in_xd4 = *(double *)(&g_8c4c2624 + iVar5);
            }
            if (cVar25 == '\0') {
                fVar17 = SUB84(dVar24, 0) - SUB84(in_dr4, 0);
            } else {
                fVar17 = SUB84(dVar24 - in_dr4, 0);
            }
            dVar24 = in_xd4;
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), fVar17);
            }
            if (cVar25 == '\0') {
                dVar24 = (double)CONCAT44(fVar23 * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));
            }
            uVar16 = (u32)((u64)dVar24 >> 0x20);
            if (cVar26 == '\0') {
                *(u32 *)(&g_8c4c2444 + iVar7) = uVar16;
                dVar24 = (double)CONCAT44(uVar16, *(u32 *)(&g_8c4c2628 + iVar14));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(&g_8c4c2628 + iVar5));
            } else {
                *(double *)(&g_8c4c2444 + iVar7) = dVar24;
                in_xd2 = *(double *)(&g_8c4c2628 + iVar14);
                in_xd4 = *(double *)(&g_8c4c2628 + iVar5);
            }
            if (cVar25 == '\0') {
                fVar17 = SUB84(dVar24, 0) - SUB84(in_dr4, 0);
            } else {
                fVar17 = SUB84(dVar24 - in_dr4, 0);
            }
            dVar24 = in_xd4;
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), fVar17);
            }
            if (cVar25 == '\0') {
                dVar24 = (double)CONCAT44(fVar23 * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));
            }
            uVar16 = (u32)((u64)dVar24 >> 0x20);
            if (cVar26 == '\0') {
                *(u32 *)(&g_8c4c2448 + iVar7) = uVar16;
                dVar24 = (double)CONCAT44(uVar16, *(u32 *)(&g_8c4c262c + iVar14));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(&g_8c4c262c + iVar5));
            } else {
                *(double *)(&g_8c4c2448 + iVar7) = dVar24;
                in_xd2 = *(double *)(&g_8c4c262c + iVar14);
                in_xd4 = *(double *)(&g_8c4c262c + iVar5);
            }
            fVar17 = SUB84(in_dr4, 0);
            if (cVar25 == '\0') {
                fVar18 = SUB84(dVar24, 0) - fVar17;
            } else {
                fVar18 = SUB84(dVar24 - in_dr4, 0);
            }
            dVar24 = in_xd4;
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44(fVar17, fVar18);
            }
            if (cVar25 == '\0') {
                dVar24 = (double)CONCAT44(fVar23 * SUB84(dVar24, 0) + (float)((u64)dVar24 >> 0x20), SUB84(dVar24, 0));
            }
            if (cVar26 == '\0') {
                *(int *)(&g_8c4c244c + iVar7) = (int)((u64)dVar24 >> 0x20);
                fVar17 = *(float *)(&g_8c4c2630 + iVar5);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar17);
                dVar24 = (double)CONCAT44(fVar17, *(u32 *)(&g_8c4c2630 + iVar14));
            } else {
                *(double *)(&g_8c4c244c + iVar7) = dVar24;
                dVar24 = *(double *)(&g_8c4c2630 + iVar5);
                in_xd2 = *(double *)(&g_8c4c2630 + iVar14);
                in_xd4 = dVar24;
            }
            if (cVar25 == '\0') {
                fVar18 = SUB84(dVar24, 0) - fVar17;
                dVar24 = (double)CONCAT44(fVar23 * fVar18 + (float)((u64)dVar24 >> 0x20), fVar18);
            } else {
                dVar24 = dVar24 - in_dr4;
            }
            if (cVar26 == '\0') {
                *(int *)(&g_8c4c2450 + iVar7) = (int)((u64)dVar24 >> 0x20);
                fVar17 = *(float *)(&g_8c4c2634 + iVar5);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar17);
                dVar24 = (double)CONCAT44(fVar17, *(u32 *)(&g_8c4c2634 + iVar14));
            } else {
                *(double *)(&g_8c4c2450 + iVar7) = dVar24;
                dVar24 = *(double *)(&g_8c4c2634 + iVar5);
                in_xd2 = *(double *)(&g_8c4c2634 + iVar14);
                in_xd4 = dVar24;
            }
            if (cVar25 == '\0') {
                fVar17 = SUB84(dVar24, 0) - fVar17;
                dVar24 = (double)CONCAT44(fVar23 * fVar17 + (float)((u64)dVar24 >> 0x20), fVar17);
            } else {
                dVar24 = dVar24 - in_dr4;
            }
            if (cVar26 == '\0') {
                *(int *)(&g_8c4c2454 + iVar7) = (int)((u64)dVar24 >> 0x20);
                fVar17 = *(float *)(&g_8c4c2638 + iVar5);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar17);
                dVar24 = (double)CONCAT44(fVar17, *(u32 *)(&g_8c4c2638 + iVar14));
            } else {
                *(double *)(&g_8c4c2454 + iVar7) = dVar24;
                dVar24 = *(double *)(&g_8c4c2638 + iVar5);
                in_xd2 = *(double *)(&g_8c4c2638 + iVar14);
                fVar17 = SUB84(in_dr4, 0);
                in_xd4 = dVar24;
            }
            if (cVar25 == '\0') {
                fVar17 = SUB84(dVar24, 0) - fVar17;
                dVar24 = (double)CONCAT44(fVar23 * fVar17 + (float)((u64)dVar24 >> 0x20), fVar17);
            } else {
                dVar24 = dVar24 - in_dr4;
            }
            if (cVar26 == '\0') {
                *(int *)(&g_8c4c2458 + iVar7) = (int)((u64)dVar24 >> 0x20);
                fVar17 = *(float *)(&g_8c4c263c + iVar5);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar17);
                in_dr2 = (double)CONCAT44(fVar17, *(u32 *)(&g_8c4c263c + iVar14));
            } else {
                *(double *)(&g_8c4c2458 + iVar7) = dVar24;
                in_dr2 = *(double *)(&g_8c4c263c + iVar5);
                in_xd2 = *(double *)(&g_8c4c263c + iVar14);
                fVar17 = SUB84(in_dr4, 0);
                in_xd4 = in_dr2;
            }
            if (cVar25 == '\0') {
                fVar17 = SUB84(in_dr2, 0) - fVar17;
                in_dr2 = (double)CONCAT44(fVar23 * fVar17 + (float)((u64)in_dr2 >> 0x20), fVar17);
            } else {
                in_dr2 = in_dr2 - in_dr4;
            }
            iVar6 = iVar6 + 1;
            if (cVar26 == '\0') {
                *(int *)(&g_8c4c245c + iVar7) = (int)((u64)in_dr2 >> 0x20);
            } else {
                *(double *)(&g_8c4c245c + iVar7) = in_dr2;
            }
        }
        piVar10 = aiStack_28 + iVar9;
        iVar5 = iVar6;
        if ((*(u32 *)*piVar10 & 1) == 0) {
            if (cVar26 == '\0') {
                in_dr2 = (double)(u64) * (u32 *)(*piVar10 + 4);
            } else {
                in_xd2 = *(double *)(*piVar10 + 4);
            }
            iVar7 = iVar6 * 0x40;
            puVar8 = &g_8c4c2420 + iVar7;
            if (cVar26 == '\0') {
                *(int *)(&g_8c4c2424 + iVar7) = SUB84(in_dr2, 0);
            } else {
                *(double *)(&g_8c4c2424 + iVar7) = in_xd2;
            }
            if (cVar26 == '\0') {
                uVar19 = *(u32 *)(*piVar10 + 8);
                in_dr2 = (double)(u64)uVar19;
                *(u32 *)(&g_8c4c2428 + iVar7) = uVar19;
            } else {
                in_xd2 = *(double *)(*piVar10 + 8);
                *(double *)(&g_8c4c2428 + iVar7) = in_xd2;
            }
            if (cVar26 == '\0') {
                uVar19 = *(u32 *)(*piVar10 + 0xc);
                in_dr2 = (double)(u64)uVar19;
                *(u32 *)(&g_8c4c242c + iVar7) = uVar19;
            } else {
                in_xd2 = *(double *)(*piVar10 + 0xc);
                *(double *)(&g_8c4c242c + iVar7) = in_xd2;
            }
            if (cVar26 == '\0') {
                uVar19 = *(u32 *)(*piVar10 + 0x20);
                in_dr2 = (double)(u64)uVar19;
                *(u32 *)(&g_8c4c2430 + iVar7) = uVar19;
            } else {
                in_xd2 = *(double *)(*piVar10 + 0x20);
                *(double *)(&g_8c4c2430 + iVar7) = in_xd2;
            }
            iVar5 = iVar6 + 1;
            if (cVar26 == '\0') {
                *(u32 *)(iVar7 + 0x8c4c2434) = *(u32 *)(*piVar10 + 0x24);
                *(u32 *)(&g_8c4c2440 + iVar7) = *(u32 *)(&g_8c4c2620 + iVar14);
                *(u32 *)(&g_8c4c2444 + iVar7) = *(u32 *)(&g_8c4c2624 + iVar14);
                *(u32 *)(&g_8c4c2448 + iVar7) = *(u32 *)(&g_8c4c2628 + iVar14);
                *(u32 *)(&g_8c4c244c + iVar7) = *(u32 *)(&g_8c4c262c + iVar14);
                *(u32 *)(&g_8c4c2450 + iVar7) = *(u32 *)(&g_8c4c2630 + iVar14);
                *(u32 *)(&g_8c4c2454 + iVar7) = *(u32 *)(&g_8c4c2634 + iVar14);
                *(u32 *)(&g_8c4c2458 + iVar7) = *(u32 *)(&g_8c4c2638 + iVar14);
                in_dr2 = (double)(u64) * (u32 *)(&g_8c4c263c + iVar14);
                *(u32 *)(&g_8c4c245c + iVar7) = *(u32 *)(&g_8c4c263c + iVar14);
                iVar5 = iVar6 + 1;
            } else {
                *(u64 *)(iVar7 + 0x8c4c2434) = *(u64 *)(*piVar10 + 0x24);
                *(u64 *)(&g_8c4c2440 + iVar7) = *(u64 *)(&g_8c4c2620 + iVar14);
                *(u64 *)(&g_8c4c2444 + iVar7) = *(u64 *)(&g_8c4c2624 + iVar14);
                *(u64 *)(&g_8c4c2448 + iVar7) = *(u64 *)(&g_8c4c2628 + iVar14);
                *(u64 *)(&g_8c4c244c + iVar7) = *(u64 *)(&g_8c4c262c + iVar14);
                *(u64 *)(&g_8c4c2450 + iVar7) = *(u64 *)(&g_8c4c2630 + iVar14);
                *(u64 *)(&g_8c4c2454 + iVar7) = *(u64 *)(&g_8c4c2634 + iVar14);
                *(u64 *)(&g_8c4c2458 + iVar7) = *(u64 *)(&g_8c4c2638 + iVar14);
                in_xd2 = *(double *)(&g_8c4c263c + iVar14);
                *(double *)(&g_8c4c245c + iVar7) = in_xd2;
            }
        }
        iVar14 = iVar9 + 1;
        iVar6 = iVar5;
        puStack_44 = (u8 *)iVar9;
    } while (iVar14 < 3);
    if (iVar5 == 3) {
        g_8c4c2420 = 0xe0000000;
        g_8c4c2438 = float_to_color_u8(puVar8, iVar14, 1, 3);
        g_8c4c243c = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        uVar21 = g_8c4c2430;
        uVar4 = g_8c4c2428;
        uVar22 = g_8c4c2424;
        uVar16 = g_8c4c2420;
        if (cVar26 == '\0') {
            puVar8 = &g_8c4c2430;
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c242c;
            *(u32 *)(unaff_r8 + 3) = uVar4;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar22;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = uVar16;
        } else {
            uVar1 = CONCAT44(g_8c4c2424, g_8c4c2420);
            uVar2 = CONCAT44(g_8c4c242c, g_8c4c2428);
            puVar8 = &g_8c4c2440;
            unaff_r8[3] = CONCAT44(g_8c4c243c, g_8c4c2438);
            unaff_r8[2] = uVar21;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        g_8c4c2460 = 0xe0000000;
        g_8c4c2478 = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        g_8c4c247c = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        uVar21 = g_8c4c2470;
        uVar4 = g_8c4c2468;
        uVar22 = g_8c4c2464;
        uVar16 = g_8c4c2460;
        if (cVar26 == '\0') {
            puVar8 = &g_8c4c2470;
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c246c;
            *(u32 *)(unaff_r8 + 7) = uVar4;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar22;
            puVar11 = unaff_r8 + 6;
            *(u32 *)puVar11 = uVar16;
        } else {
            uVar1 = CONCAT44(g_8c4c2464, g_8c4c2460);
            uVar2 = CONCAT44(g_8c4c246c, g_8c4c2468);
            puVar8 = &g_8c4c2480;
            unaff_r8[7] = CONCAT44(g_8c4c247c, g_8c4c2478);
            unaff_r8[6] = uVar21;
            unaff_r8[5] = uVar2;
            puVar11 = unaff_r8 + 4;
            *puVar11 = uVar1;
        }
        g_8c4c24a0 = 0xf0000000;
        g_8c4c24b8 = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        uVar4 = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        uVar21 = g_8c4c24b0;
        uVar22 = g_8c4c24a8;
        uVar16 = g_8c4c24a4;
        uVar3 = g_8c4c24a0;
        g_8c4c24bc = uVar4;
        if (cVar26 == '\0') {
            *(u32 *)((int)puVar11 + 0x3c) = g_8c4c24ac;
            *(u32 *)(puVar11 + 7) = uVar22;
            *(u32 *)((int)puVar11 + 0x34) = uVar16;
            *(u32 *)(puVar11 + 6) = uVar3;
        } else {
            uVar1 = CONCAT44(g_8c4c24a4, g_8c4c24a0);
            uVar2 = CONCAT44(g_8c4c24ac, g_8c4c24a8);
            puVar11[7] = CONCAT44(uVar4, g_8c4c24b8);
            puVar11[6] = uVar21;
            puVar11[5] = uVar2;
            puVar11[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 3;
    } else {
        g_8c4c2420 = 0xe0000000;
        g_8c4c2438 = float_to_color_u8(puVar8, iVar14, 1, iVar5);
        g_8c4c243c = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        uVar21 = g_8c4c2430;
        uVar4 = g_8c4c2428;
        uVar22 = g_8c4c2424;
        uVar16 = g_8c4c2420;
        if (cVar26 == '\0') {
            puVar8 = &g_8c4c2430;
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c242c;
            *(u32 *)(unaff_r8 + 3) = uVar4;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar22;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = uVar16;
        } else {
            uVar1 = CONCAT44(g_8c4c2424, g_8c4c2420);
            uVar2 = CONCAT44(g_8c4c242c, g_8c4c2428);
            puVar8 = &g_8c4c2440;
            unaff_r8[3] = CONCAT44(g_8c4c243c, g_8c4c2438);
            unaff_r8[2] = uVar21;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        g_8c4c2460 = 0xe0000000;
        g_8c4c2478 = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        g_8c4c247c = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        uVar21 = g_8c4c2470;
        uVar4 = g_8c4c2468;
        uVar22 = g_8c4c2464;
        uVar16 = g_8c4c2460;
        if (cVar26 == '\0') {
            puVar8 = &g_8c4c2470;
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c246c;
            *(u32 *)(unaff_r8 + 7) = uVar4;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar22;
            puVar11 = unaff_r8 + 6;
            *(u32 *)puVar11 = uVar16;
        } else {
            uVar1 = CONCAT44(g_8c4c2464, g_8c4c2460);
            uVar2 = CONCAT44(g_8c4c246c, g_8c4c2468);
            puVar8 = &g_8c4c2480;
            unaff_r8[7] = CONCAT44(g_8c4c247c, g_8c4c2478);
            unaff_r8[6] = uVar21;
            unaff_r8[5] = uVar2;
            puVar11 = unaff_r8 + 4;
            *puVar11 = uVar1;
        }
        g_8c4c24e0 = 0xe0000000;
        g_8c4c24f8 = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        g_8c4c24fc = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        uVar21 = g_8c4c24f0;
        uVar4 = g_8c4c24e8;
        uVar22 = g_8c4c24e4;
        uVar16 = g_8c4c24e0;
        if (cVar26 == '\0') {
            puVar8 = &g_8c4c24f0;
            *(u32 *)((int)puVar11 + 0x3c) = g_8c4c24ec;
            *(u32 *)(puVar11 + 7) = uVar4;
            *(u32 *)((int)puVar11 + 0x34) = uVar22;
            puVar11 = puVar11 + 6;
            *(u32 *)puVar11 = uVar16;
        } else {
            uVar1 = CONCAT44(g_8c4c24e4, g_8c4c24e0);
            uVar2 = CONCAT44(g_8c4c24ec, g_8c4c24e8);
            puVar8 = &g_8c4c2500;
            puVar11[7] = CONCAT44(g_8c4c24fc, g_8c4c24f8);
            puVar11[6] = uVar21;
            puVar11[5] = uVar2;
            puVar11 = puVar11 + 4;
            *puVar11 = uVar1;
        }
        g_8c4c24a0 = 0xf0000000;
        g_8c4c24b8 = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        uVar4 = float_to_color_u8(puVar8, iVar14, uVar3, iVar5);
        uVar21 = g_8c4c24b0;
        uVar22 = g_8c4c24a8;
        uVar16 = g_8c4c24a4;
        uVar3 = g_8c4c24a0;
        g_8c4c24bc = uVar4;
        if (cVar26 == '\0') {
            *(u32 *)((int)puVar11 + 0x3c) = g_8c4c24ac;
            *(u32 *)(puVar11 + 7) = uVar22;
            *(u32 *)((int)puVar11 + 0x34) = uVar16;
            *(u32 *)(puVar11 + 6) = uVar3;
        } else {
            uVar1 = CONCAT44(g_8c4c24a4, g_8c4c24a0);
            uVar2 = CONCAT44(g_8c4c24ac, g_8c4c24a8);
            puVar11[7] = CONCAT44(uVar4, g_8c4c24b8);
            puVar11[6] = uVar21;
            puVar11[5] = uVar2;
            puVar11[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 4;
    }
    return uVar4;
}

/*
 * gfxlib_uses_float_to_color_u8_23dc42  0x8c23dc42
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 * called by: gfxlib_uses_float_to_color_u8_2437d6, gfxlib_uses_float_to_color_u8_245cc8,
 * gfxlib_uses_float_to_color_u8_24b154
 */
u32 gfxlib_uses_float_to_color_u8_23dc42(int a0, u32 a1, int a2, u32 a3) {
    u64 uVar1;
    u64 uVar2;
    double dVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *piVar8;
    u64 *unaff_r8;
    u64 *puVar9;
    int *piVar10;
    int iVar11;
    int iVar12;
    u8 *puVar13;
    u32 uVar14;
    double in_dr0;
    u32 uVar15;
    float fVar16;
    float fVar17;
    u32 uVar18;
    double in_dr2;
    u64 uVar19;
    double dVar20;
    u64 uVar21;
    float fVar22;
    double in_dr4;
    double dVar23;
    double dVar24;
    double in_dr6;
    u32 uVar25;
    double in_xd2;
    double in_xd4;
    double in_xd14;
    char cVar26;
    char cVar27;
    u8 *puStack_50;
    int *piStack_40;
    int aiStack_2c[5];

    cVar27 = '\0';
    cVar26 = '\0';
    aiStack_2c[0] = a0;
    iVar11 = 0;
    aiStack_2c[1] = a1;
    aiStack_2c[2] = a2;
    puStack_50 = &g_8c4c2620;
    uVar25 = 0x3f000000;
    uVar18 = a3;
    piVar10 = aiStack_2c;
    piStack_40 = aiStack_2c;
    do {
        uVar15 = SUB84(in_dr2, 0);
        uVar14 = SUB84(in_dr0, 0);
        if (*(u32 *)(aiStack_2c[iVar11] + 0x3c) == (a3 & 0xffff)) {
            argb_to_float4(*(u32 *)(*piVar10 + 0x28), puStack_50);
            argb_to_float4(*(u32 *)(*piVar10 + 0x2c), puStack_50 + 0x10);
        } else {
            piVar8 = aiStack_2c + iVar11;
            iVar12 = iVar11 * 0x20;
            puVar13 = &g_8c4c2620 + iVar12;
            a2 = *piVar8 + 0x30;
            iVar7 = *piVar8 + 0x10;
            uVar18 = a3 & 0x8000;
            gfxlib_calls_scan_loop_23bae2(puVar13, iVar7, a2, a3 & 0x8000);
            iVar5 = *piVar8;
            if (cVar27 != '\0') {
                in_xd4 = *(double *)(&g_8c4c2624 + iVar12);
            }
            uVar4 = float_to_color_u8(puVar13, iVar7, a2, uVar18);
            *(u32 *)(iVar5 + 0x28) = uVar4;
            iVar5 = *piVar8;
            if (cVar27 == '\0') {
                in_dr6 = (double)(u64) * (u32 *)(&g_8c4c263c + iVar12);
                in_dr4 = (double)(u64) * (u32 *)(&g_8c4c2634 + iVar12);
            } else {
                in_dr6 = *(double *)(&g_8c4c2638 + iVar12);
                in_xd4 = *(double *)(&g_8c4c2634 + iVar12);
                in_dr4 = *(double *)(&g_8c4c2630 + iVar12);
            }
            uVar4 = float_to_color_u8(puVar13, iVar7, a2, uVar18);
            *(u32 *)(iVar5 + 0x2c) = uVar4;
            *(u32 *)(*piVar8 + 0x3c) = a3 & 0xffff;
        }
        dVar23 = in_xd14;
        if (cVar27 == '\0') {
            dVar23 = in_xd2;
            uVar15 = uVar25;
        }
        iVar11 = iVar11 + 1;
        iVar5 = *piStack_40;
        if (cVar27 == '\0') {
            uVar19 = CONCAT44(*(u32 *)(iVar5 + 0x30), uVar15);
            dVar20 = (double)CONCAT44(uVar25, uVar14);
        } else {
            uVar19 = *(u64 *)(iVar5 + 0x30);
            dVar20 = in_xd14;
        }
        piVar10 = piVar10 + 1;
        if (cVar26 == '\0') {
            uVar19 = (u64)(u32)((float)((u64)dVar20 >> 0x20) * (float)(uVar19 >> 0x20) + (float)uVar19);
        }
        uVar15 = (u32)uVar19;
        if (cVar27 == '\0') {
            *(u32 *)(iVar5 + 0x20) = uVar15;
            in_xd2 = dVar23;
            uVar15 = uVar25;
            in_dr0 = (double)CONCAT44(uVar25, SUB84(dVar20, 0));
        } else {
            *(double *)(iVar5 + 0x20) = dVar23;
            in_xd2 = in_xd14;
            in_dr0 = in_xd14;
        }
        puVar13 = (u8 *)*piStack_40;
        if (cVar27 == '\0') {
            in_dr2 = (double)CONCAT44(*(u32 *)(puVar13 + 0x34), uVar15);
        } else {
            in_dr2 = *(double *)(puVar13 + 0x34);
        }
        if (cVar26 == '\0') {
            in_dr2 = (double)(u64)(u32)((float)((u64)in_dr0 >> 0x20) * (float)((u64)in_dr2 >> 0x20) + SUB84(in_dr2, 0));
        }
        if (cVar27 == '\0') {
            *(int *)(puVar13 + 0x24) = SUB84(in_dr2, 0);
        } else {
            *(double *)(puVar13 + 0x24) = in_xd2;
        }
        puStack_50 = puStack_50 + 0x20;
        piStack_40 = piStack_40 + 1;
    } while (iVar11 < 3);
    puStack_50 = (u8 *)0x2;
    uVar25 = 1;
    iVar11 = 0;
    iVar5 = 0;
    do {
        iVar7 = iVar11;
        iVar11 = iVar7 * 0x20;
        piVar8 = aiStack_2c + iVar7;
        piVar10 = aiStack_2c + (int)puStack_50;
        if ((*(u32 *)*piVar10 & 1 ^ *(u32 *)*piVar8 & 1) == 1) {
            iVar12 = *piVar10;
            iVar6 = *piVar8;
            if (cVar27 == '\0') {
                dVar23 = (double)CONCAT44(*(u32 *)(iVar12 + 0x18), SUB84(in_dr4, 0));
                dVar20 = (double)CONCAT44(*(u32 *)(iVar6 + 0x18), g_8c4aa4d4);
            } else {
                in_xd2 = (double)CONCAT44(g_8c4aa4d8, g_8c4aa4d4);
                dVar23 = *(double *)(iVar12 + 0x18);
                dVar20 = *(double *)(iVar6 + 0x18);
            }
            fVar22 = (float)((u64)dVar23 >> 0x20);
            if (cVar26 == '\0') {
                dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - fVar22);
            } else {
                dVar20 = dVar20 - dVar23;
            }
            if (cVar27 == '\0') {
                dVar23 = (double)CONCAT44(fVar22, *(u32 *)(iVar12 + 0x10));
            } else {
                in_xd4 = *(double *)(iVar12 + 0x10);
            }
            if (cVar26 == '\0') {
                dVar20 =
                    (double)CONCAT44((float)((u64)dVar20 >> 0x20) - (float)((u64)dVar23 >> 0x20), SUB84(dVar20, 0));
            } else {
                dVar20 = dVar20 - dVar23;
            }
            dVar24 = in_xd2;
            dVar3 = in_xd4;
            if (cVar27 == '\0') {
                dVar24 = (double)CONCAT44(SUB84(dVar20, 0), SUB84(dVar23, 0));
                dVar3 = (double)CONCAT44(SUB84(dVar23, 0), SUB84(in_dr6, 0));
            }
            in_dr6 = dVar3;
            fVar22 = (float)((u64)dVar20 >> 0x20);
            if (cVar26 == '\0') {
                dVar24 = (double)CONCAT44((float)((u64)dVar24 >> 0x20) / fVar22, SUB84(dVar24, 0));
            } else {
                dVar24 = dVar24 / dVar20;
            }
            if (cVar27 == '\0') {
                dVar20 = (double)CONCAT44(fVar22, *(u32 *)(iVar6 + 0x10));
            } else {
                in_xd2 = *(double *)(iVar6 + 0x10);
            }
            fVar22 = SUB84(dVar24, 0);
            if (cVar26 == '\0') {
                fVar16 = SUB84(dVar20, 0) - fVar22;
            } else {
                fVar16 = SUB84(dVar20 - dVar24, 0);
            }
            uVar15 = (u32)((u64)dVar24 >> 0x20);
            if (cVar27 == '\0') {
                fVar22 = *(float *)(iVar12 + 0x14);
                dVar23 = (double)CONCAT44(fVar22, fVar16);
                dVar24 = (double)CONCAT44(uVar15, SUB84(in_dr0, 0));
                in_dr4 = (double)CONCAT44(uVar15, fVar22);
            } else {
                dVar23 = *(double *)(iVar12 + 0x14);
                in_dr4 = dVar24;
                in_xd4 = dVar23;
            }
            fVar16 = (float)((u64)dVar24 >> 0x20);
            if (cVar26 == '\0') {
                in_dr6 = (double)CONCAT44(fVar16 * SUB84(dVar23, 0) + (float)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0));
            }
            if (cVar27 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)(iVar6 + 0x14));
            } else {
                in_xd2 = *(double *)(iVar6 + 0x14);
            }
            if (cVar26 == '\0') {
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar23, 0) - fVar22);
            } else {
                dVar23 = dVar23 - in_dr4;
            }
            iVar12 = iVar5 * 0x40;
            puVar13 = &g_8c4c2420 + iVar12;
            if (cVar26 == '\0') {
                dVar23 = (double)CONCAT44(fVar16 * SUB84(dVar23, 0) + (float)((u64)dVar23 >> 0x20), SUB84(dVar23, 0));
            }
            uVar14 = (u32)((u64)dVar23 >> 0x20);
            if (cVar27 == '\0') {
                in_dr4 = (double)CONCAT44(uVar15, uVar14);
                dVar20 = (double)CONCAT44(g_8c4ab320, SUB84(dVar24, 0));
                dVar23 = (double)CONCAT44(uVar14, g_8c4ab31c);
            } else {
                dVar20 = (double)CONCAT44(g_8c4ab324, g_8c4ab320);
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                in_xd4 = dVar23;
            }
            if (cVar26 == '\0') {
                fVar22 = SUB84(dVar23, 0) * (float)((u64)dVar20 >> 0x20);
            } else {
                fVar22 = SUB84(dVar23 * dVar20, 0);
            }
            if (cVar27 == '\0') {
                uVar21 = CONCAT44(g_8c4aa4b4, fVar22);
                dVar23 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(dVar20, 0));
            } else {
                uVar21 = CONCAT44(g_8c4aa4b8, g_8c4aa4b4);
                dVar23 = in_dr6;
            }
            if (cVar26 == '\0') {
                uVar21 = CONCAT44((float)((u64)dVar23 >> 0x20) * (float)uVar21 + (float)((u64)uVar21 >> 0x20),
                                  (float)uVar21);
            }
            if (cVar27 == '\0') {
                *(int *)(&g_8c4c2424 + iVar12) = (int)((u64)uVar21 >> 0x20);
                dVar23 = (double)CONCAT44(g_8c4ab324, SUB84(dVar23, 0));
                dVar20 = (double)CONCAT44(g_8c4aa4b8, g_8c4ab31c);
            } else {
                *(u64 *)(&g_8c4c2424 + iVar12) = uVar21;
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar23 = (double)CONCAT44(g_8c4ab328, g_8c4ab324);
                dVar20 = (double)CONCAT44(g_8c4aa4bc, g_8c4aa4b8);
            }
            if (cVar26 == '\0') {
                dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) * (float)((u64)dVar23 >> 0x20));
            } else {
                dVar20 = dVar20 * dVar23;
            }
            dVar24 = in_xd4;
            if (cVar27 == '\0') {
                dVar24 = (double)CONCAT44(SUB84(in_dr4, 0), SUB84(dVar23, 0));
            }
            if (cVar26 == '\0') {
                dVar20 = (double)CONCAT44(
                    (float)((u64)dVar24 >> 0x20) * SUB84(dVar20, 0) + (float)((u64)dVar20 >> 0x20), SUB84(dVar20, 0));
            }
            uVar14 = (u32)((u64)in_dr4 >> 0x20);
            uVar15 = (u32)((u64)dVar20 >> 0x20);
            if (cVar27 == '\0') {
                *(u32 *)(&g_8c4c2428 + iVar12) = uVar15;
                dVar20 = (double)CONCAT44(uVar15, g_8c4ab31c);
                *(u32 *)(&g_8c4c242c + iVar12) = g_8c4ab31c;
                in_dr0 = (double)CONCAT44(uVar14, SUB84(dVar24, 0));
            } else {
                *(double *)(&g_8c4c2428 + iVar12) = dVar20;
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                *(double *)(&g_8c4c242c + iVar12) = in_xd2;
                in_dr0 = in_dr4;
            }
            if (cVar27 == '\0') {
                in_dr4 = (double)CONCAT44(uVar14, *(u32 *)(*piVar10 + 0x20));
            } else {
                in_xd4 = *(double *)(*piVar10 + 0x20);
            }
            if (cVar27 == '\0') {
                dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(*piVar8 + 0x20));
            } else {
                in_xd2 = *(double *)(*piVar8 + 0x20);
            }
            if (cVar26 == '\0') {
                fVar22 = SUB84(dVar20, 0) - SUB84(in_dr4, 0);
            } else {
                fVar22 = SUB84(dVar20 - in_dr4, 0);
            }
            dVar23 = in_xd4;
            if (cVar27 == '\0') {
                dVar23 = (double)CONCAT44(SUB84(in_dr4, 0), fVar22);
            }
            fVar22 = (float)((u64)in_dr0 >> 0x20);
            if (cVar26 == '\0') {
                dVar23 = (double)CONCAT44(fVar22 * SUB84(dVar23, 0) + (float)((u64)dVar23 >> 0x20), SUB84(dVar23, 0));
            }
            if (cVar27 == '\0') {
                *(int *)(&g_8c4c2430 + iVar12) = (int)((u64)dVar23 >> 0x20);
            } else {
                *(double *)(&g_8c4c2430 + iVar12) = dVar23;
            }
            if (cVar27 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(*piVar10 + 0x24));
            } else {
                in_xd4 = *(double *)(*piVar10 + 0x24);
            }
            fVar16 = SUB84(in_dr4, 0);
            if (cVar27 == '\0') {
                dVar23 = (double)CONCAT44(fVar16, *(u32 *)(*piVar8 + 0x24));
            } else {
                in_xd2 = *(double *)(*piVar8 + 0x24);
                dVar23 = in_xd4;
            }
            if (cVar26 == '\0') {
                fVar17 = SUB84(dVar23, 0) - fVar16;
                dVar23 = (double)CONCAT44(fVar22 * fVar17 + (float)((u64)dVar23 >> 0x20), fVar17);
            } else {
                dVar23 = dVar23 - in_dr4;
            }
            if (cVar27 == '\0') {
                *(int *)(iVar12 + 0x8c4c2434) = (int)((u64)dVar23 >> 0x20);
            } else {
                *(double *)(iVar12 + 0x8c4c2434) = dVar23;
            }
            iVar6 = (int)puStack_50 * 0x20;
            if (cVar27 == '\0') {
                fVar16 = *(float *)(&g_8c4c2620 + iVar6);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar16);
                dVar23 = (double)CONCAT44(fVar16, *(u32 *)(&g_8c4c2620 + iVar11));
            } else {
                dVar23 = *(double *)(&g_8c4c2620 + iVar6);
                in_xd2 = *(double *)(&g_8c4c2620 + iVar11);
                in_xd4 = dVar23;
            }
            if (cVar26 == '\0') {
                fVar16 = SUB84(dVar23, 0) - fVar16;
                dVar23 = (double)CONCAT44(fVar22 * fVar16 + (float)((u64)dVar23 >> 0x20), fVar16);
            } else {
                dVar23 = dVar23 - in_dr4;
            }
            uVar15 = (u32)((u64)dVar23 >> 0x20);
            if (cVar27 == '\0') {
                *(u32 *)(&g_8c4c2440 + iVar12) = uVar15;
                dVar23 = (double)CONCAT44(uVar15, *(u32 *)(&g_8c4c2624 + iVar11));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(&g_8c4c2624 + iVar6));
            } else {
                *(double *)(&g_8c4c2440 + iVar12) = dVar23;
                in_xd2 = *(double *)(&g_8c4c2624 + iVar11);
                in_xd4 = *(double *)(&g_8c4c2624 + iVar6);
            }
            if (cVar26 == '\0') {
                fVar16 = SUB84(dVar23, 0) - SUB84(in_dr4, 0);
            } else {
                fVar16 = SUB84(dVar23 - in_dr4, 0);
            }
            dVar23 = in_xd4;
            if (cVar27 == '\0') {
                dVar23 = (double)CONCAT44(SUB84(in_dr4, 0), fVar16);
            }
            if (cVar26 == '\0') {
                dVar23 = (double)CONCAT44(fVar22 * SUB84(dVar23, 0) + (float)((u64)dVar23 >> 0x20), SUB84(dVar23, 0));
            }
            uVar15 = (u32)((u64)dVar23 >> 0x20);
            if (cVar27 == '\0') {
                *(u32 *)(&g_8c4c2444 + iVar12) = uVar15;
                dVar23 = (double)CONCAT44(uVar15, *(u32 *)(&g_8c4c2628 + iVar11));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(&g_8c4c2628 + iVar6));
            } else {
                *(double *)(&g_8c4c2444 + iVar12) = dVar23;
                in_xd2 = *(double *)(&g_8c4c2628 + iVar11);
                in_xd4 = *(double *)(&g_8c4c2628 + iVar6);
            }
            if (cVar26 == '\0') {
                fVar16 = SUB84(dVar23, 0) - SUB84(in_dr4, 0);
            } else {
                fVar16 = SUB84(dVar23 - in_dr4, 0);
            }
            dVar23 = in_xd4;
            if (cVar27 == '\0') {
                dVar23 = (double)CONCAT44(SUB84(in_dr4, 0), fVar16);
            }
            if (cVar26 == '\0') {
                dVar23 = (double)CONCAT44(fVar22 * SUB84(dVar23, 0) + (float)((u64)dVar23 >> 0x20), SUB84(dVar23, 0));
            }
            uVar15 = (u32)((u64)dVar23 >> 0x20);
            if (cVar27 == '\0') {
                *(u32 *)(&g_8c4c2448 + iVar12) = uVar15;
                dVar23 = (double)CONCAT44(uVar15, *(u32 *)(&g_8c4c262c + iVar11));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(&g_8c4c262c + iVar6));
            } else {
                *(double *)(&g_8c4c2448 + iVar12) = dVar23;
                in_xd2 = *(double *)(&g_8c4c262c + iVar11);
                in_xd4 = *(double *)(&g_8c4c262c + iVar6);
            }
            fVar16 = SUB84(in_dr4, 0);
            if (cVar26 == '\0') {
                fVar17 = SUB84(dVar23, 0) - fVar16;
            } else {
                fVar17 = SUB84(dVar23 - in_dr4, 0);
            }
            dVar23 = in_xd4;
            if (cVar27 == '\0') {
                dVar23 = (double)CONCAT44(fVar16, fVar17);
            }
            if (cVar26 == '\0') {
                dVar23 = (double)CONCAT44(fVar22 * SUB84(dVar23, 0) + (float)((u64)dVar23 >> 0x20), SUB84(dVar23, 0));
            }
            if (cVar27 == '\0') {
                *(int *)(&g_8c4c244c + iVar12) = (int)((u64)dVar23 >> 0x20);
                fVar16 = *(float *)(&g_8c4c2630 + iVar6);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar16);
                dVar23 = (double)CONCAT44(fVar16, *(u32 *)(&g_8c4c2630 + iVar11));
            } else {
                *(double *)(&g_8c4c244c + iVar12) = dVar23;
                dVar23 = *(double *)(&g_8c4c2630 + iVar6);
                in_xd2 = *(double *)(&g_8c4c2630 + iVar11);
                in_xd4 = dVar23;
            }
            if (cVar26 == '\0') {
                fVar17 = SUB84(dVar23, 0) - fVar16;
                dVar23 = (double)CONCAT44(fVar22 * fVar17 + (float)((u64)dVar23 >> 0x20), fVar17);
            } else {
                dVar23 = dVar23 - in_dr4;
            }
            if (cVar27 == '\0') {
                *(int *)(&g_8c4c2450 + iVar12) = (int)((u64)dVar23 >> 0x20);
                fVar16 = *(float *)(&g_8c4c2634 + iVar6);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar16);
                dVar23 = (double)CONCAT44(fVar16, *(u32 *)(&g_8c4c2634 + iVar11));
            } else {
                *(double *)(&g_8c4c2450 + iVar12) = dVar23;
                dVar23 = *(double *)(&g_8c4c2634 + iVar6);
                in_xd2 = *(double *)(&g_8c4c2634 + iVar11);
                in_xd4 = dVar23;
            }
            if (cVar26 == '\0') {
                fVar16 = SUB84(dVar23, 0) - fVar16;
                dVar23 = (double)CONCAT44(fVar22 * fVar16 + (float)((u64)dVar23 >> 0x20), fVar16);
            } else {
                dVar23 = dVar23 - in_dr4;
            }
            if (cVar27 == '\0') {
                *(int *)(&g_8c4c2454 + iVar12) = (int)((u64)dVar23 >> 0x20);
                fVar16 = *(float *)(&g_8c4c2638 + iVar6);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar16);
                dVar23 = (double)CONCAT44(fVar16, *(u32 *)(&g_8c4c2638 + iVar11));
            } else {
                *(double *)(&g_8c4c2454 + iVar12) = dVar23;
                dVar23 = *(double *)(&g_8c4c2638 + iVar6);
                in_xd2 = *(double *)(&g_8c4c2638 + iVar11);
                fVar16 = SUB84(in_dr4, 0);
                in_xd4 = dVar23;
            }
            if (cVar26 == '\0') {
                fVar16 = SUB84(dVar23, 0) - fVar16;
                dVar23 = (double)CONCAT44(fVar22 * fVar16 + (float)((u64)dVar23 >> 0x20), fVar16);
            } else {
                dVar23 = dVar23 - in_dr4;
            }
            if (cVar27 == '\0') {
                *(int *)(&g_8c4c2458 + iVar12) = (int)((u64)dVar23 >> 0x20);
                fVar16 = *(float *)(&g_8c4c263c + iVar6);
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), fVar16);
                dVar23 = (double)CONCAT44(fVar16, *(u32 *)(&g_8c4c263c + iVar11));
            } else {
                *(double *)(&g_8c4c2458 + iVar12) = dVar23;
                dVar23 = *(double *)(&g_8c4c263c + iVar6);
                in_xd2 = *(double *)(&g_8c4c263c + iVar11);
                fVar16 = SUB84(in_dr4, 0);
                in_xd4 = dVar23;
            }
            if (cVar26 == '\0') {
                fVar16 = SUB84(dVar23, 0) - fVar16;
                in_dr2 = (double)CONCAT44(fVar22 * fVar16 + (float)((u64)dVar23 >> 0x20), fVar16);
            } else {
                in_dr2 = dVar23 - in_dr4;
            }
            iVar5 = iVar5 + 1;
            if (cVar27 == '\0') {
                *(int *)(&g_8c4c245c + iVar12) = (int)((u64)in_dr2 >> 0x20);
            } else {
                *(double *)(&g_8c4c245c + iVar12) = in_dr2;
            }
        }
        piVar10 = aiStack_2c + iVar7;
        iVar12 = iVar5;
        if ((*(u32 *)*piVar10 & 1) == 0) {
            if (cVar27 == '\0') {
                in_dr2 = (double)(u64) * (u32 *)(*piVar10 + 4);
            } else {
                in_xd2 = *(double *)(*piVar10 + 4);
            }
            iVar6 = iVar5 * 0x40;
            puVar13 = &g_8c4c2420 + iVar6;
            if (cVar27 == '\0') {
                *(int *)(&g_8c4c2424 + iVar6) = SUB84(in_dr2, 0);
            } else {
                *(double *)(&g_8c4c2424 + iVar6) = in_xd2;
            }
            if (cVar27 == '\0') {
                uVar18 = *(u32 *)(*piVar10 + 8);
                in_dr2 = (double)(u64)uVar18;
                *(u32 *)(&g_8c4c2428 + iVar6) = uVar18;
            } else {
                in_xd2 = *(double *)(*piVar10 + 8);
                *(double *)(&g_8c4c2428 + iVar6) = in_xd2;
            }
            if (cVar27 == '\0') {
                uVar18 = *(u32 *)(*piVar10 + 0xc);
                in_dr2 = (double)(u64)uVar18;
                *(u32 *)(&g_8c4c242c + iVar6) = uVar18;
            } else {
                in_xd2 = *(double *)(*piVar10 + 0xc);
                *(double *)(&g_8c4c242c + iVar6) = in_xd2;
            }
            if (cVar27 == '\0') {
                uVar18 = *(u32 *)(*piVar10 + 0x20);
                in_dr2 = (double)(u64)uVar18;
                *(u32 *)(&g_8c4c2430 + iVar6) = uVar18;
            } else {
                in_xd2 = *(double *)(*piVar10 + 0x20);
                *(double *)(&g_8c4c2430 + iVar6) = in_xd2;
            }
            iVar12 = iVar5 + 1;
            if (cVar27 == '\0') {
                *(u32 *)(iVar6 + 0x8c4c2434) = *(u32 *)(*piVar10 + 0x24);
                *(u32 *)(&g_8c4c2440 + iVar6) = *(u32 *)(&g_8c4c2620 + iVar11);
                *(u32 *)(&g_8c4c2444 + iVar6) = *(u32 *)(&g_8c4c2624 + iVar11);
                *(u32 *)(&g_8c4c2448 + iVar6) = *(u32 *)(&g_8c4c2628 + iVar11);
                *(u32 *)(&g_8c4c244c + iVar6) = *(u32 *)(&g_8c4c262c + iVar11);
                *(u32 *)(&g_8c4c2450 + iVar6) = *(u32 *)(&g_8c4c2630 + iVar11);
                *(u32 *)(&g_8c4c2454 + iVar6) = *(u32 *)(&g_8c4c2634 + iVar11);
                *(u32 *)(&g_8c4c2458 + iVar6) = *(u32 *)(&g_8c4c2638 + iVar11);
                in_dr2 = (double)(u64) * (u32 *)(&g_8c4c263c + iVar11);
                *(u32 *)(&g_8c4c245c + iVar6) = *(u32 *)(&g_8c4c263c + iVar11);
                iVar12 = iVar5 + 1;
            } else {
                *(u64 *)(iVar6 + 0x8c4c2434) = *(u64 *)(*piVar10 + 0x24);
                *(u64 *)(&g_8c4c2440 + iVar6) = *(u64 *)(&g_8c4c2620 + iVar11);
                *(u64 *)(&g_8c4c2444 + iVar6) = *(u64 *)(&g_8c4c2624 + iVar11);
                *(u64 *)(&g_8c4c2448 + iVar6) = *(u64 *)(&g_8c4c2628 + iVar11);
                *(u64 *)(&g_8c4c244c + iVar6) = *(u64 *)(&g_8c4c262c + iVar11);
                *(u64 *)(&g_8c4c2450 + iVar6) = *(u64 *)(&g_8c4c2630 + iVar11);
                *(u64 *)(&g_8c4c2454 + iVar6) = *(u64 *)(&g_8c4c2634 + iVar11);
                *(u64 *)(&g_8c4c2458 + iVar6) = *(u64 *)(&g_8c4c2638 + iVar11);
                in_xd2 = *(double *)(&g_8c4c263c + iVar11);
                *(double *)(&g_8c4c245c + iVar6) = in_xd2;
            }
        }
        iVar11 = iVar7 + 1;
        iVar5 = iVar12;
        puStack_50 = (u8 *)iVar7;
    } while (iVar11 < 3);
    if (iVar12 == 3) {
        g_8c4c2420 = 0xe0000000;
        g_8c4c2438 = float_to_color_u8(puVar13, iVar11, 1, 3);
        g_8c4c243c = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        uVar21 = g_8c4c2430;
        uVar4 = g_8c4c2428;
        uVar14 = g_8c4c2424;
        uVar15 = g_8c4c2420;
        if (cVar27 == '\0') {
            puVar13 = &g_8c4c2430;
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c242c;
            *(u32 *)(unaff_r8 + 3) = uVar4;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar14;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = uVar15;
        } else {
            uVar1 = CONCAT44(g_8c4c2424, g_8c4c2420);
            uVar2 = CONCAT44(g_8c4c242c, g_8c4c2428);
            puVar13 = &g_8c4c2440;
            unaff_r8[3] = CONCAT44(g_8c4c243c, g_8c4c2438);
            unaff_r8[2] = uVar21;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        g_8c4c2460 = 0xe0000000;
        g_8c4c2478 = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        g_8c4c247c = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        uVar21 = g_8c4c2470;
        uVar4 = g_8c4c2468;
        uVar14 = g_8c4c2464;
        uVar15 = g_8c4c2460;
        if (cVar27 == '\0') {
            puVar13 = &g_8c4c2470;
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c246c;
            *(u32 *)(unaff_r8 + 7) = uVar4;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar14;
            puVar9 = unaff_r8 + 6;
            *(u32 *)puVar9 = uVar15;
        } else {
            uVar1 = CONCAT44(g_8c4c2464, g_8c4c2460);
            uVar2 = CONCAT44(g_8c4c246c, g_8c4c2468);
            puVar13 = &g_8c4c2480;
            unaff_r8[7] = CONCAT44(g_8c4c247c, g_8c4c2478);
            unaff_r8[6] = uVar21;
            unaff_r8[5] = uVar2;
            puVar9 = unaff_r8 + 4;
            *puVar9 = uVar1;
        }
        g_8c4c24a0 = 0xf0000000;
        g_8c4c24b8 = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        uVar4 = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        uVar21 = g_8c4c24b0;
        uVar14 = g_8c4c24a8;
        uVar15 = g_8c4c24a4;
        uVar25 = g_8c4c24a0;
        g_8c4c24bc = uVar4;
        if (cVar27 == '\0') {
            *(u32 *)((int)puVar9 + 0x3c) = g_8c4c24ac;
            *(u32 *)(puVar9 + 7) = uVar14;
            *(u32 *)((int)puVar9 + 0x34) = uVar15;
            *(u32 *)(puVar9 + 6) = uVar25;
        } else {
            uVar1 = CONCAT44(g_8c4c24a4, g_8c4c24a0);
            uVar2 = CONCAT44(g_8c4c24ac, g_8c4c24a8);
            puVar9[7] = CONCAT44(uVar4, g_8c4c24b8);
            puVar9[6] = uVar21;
            puVar9[5] = uVar2;
            puVar9[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 3;
    } else {
        g_8c4c2420 = 0xe0000000;
        g_8c4c2438 = float_to_color_u8(puVar13, iVar11, 1, iVar12);
        g_8c4c243c = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        uVar21 = g_8c4c2430;
        uVar4 = g_8c4c2428;
        uVar14 = g_8c4c2424;
        uVar15 = g_8c4c2420;
        if (cVar27 == '\0') {
            puVar13 = &g_8c4c2430;
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c242c;
            *(u32 *)(unaff_r8 + 3) = uVar4;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar14;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = uVar15;
        } else {
            uVar1 = CONCAT44(g_8c4c2424, g_8c4c2420);
            uVar2 = CONCAT44(g_8c4c242c, g_8c4c2428);
            puVar13 = &g_8c4c2440;
            unaff_r8[3] = CONCAT44(g_8c4c243c, g_8c4c2438);
            unaff_r8[2] = uVar21;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        g_8c4c2460 = 0xe0000000;
        g_8c4c2478 = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        g_8c4c247c = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        uVar21 = g_8c4c2470;
        uVar4 = g_8c4c2468;
        uVar14 = g_8c4c2464;
        uVar15 = g_8c4c2460;
        if (cVar27 == '\0') {
            puVar13 = &g_8c4c2470;
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c246c;
            *(u32 *)(unaff_r8 + 7) = uVar4;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar14;
            puVar9 = unaff_r8 + 6;
            *(u32 *)puVar9 = uVar15;
        } else {
            uVar1 = CONCAT44(g_8c4c2464, g_8c4c2460);
            uVar2 = CONCAT44(g_8c4c246c, g_8c4c2468);
            puVar13 = &g_8c4c2480;
            unaff_r8[7] = CONCAT44(g_8c4c247c, g_8c4c2478);
            unaff_r8[6] = uVar21;
            unaff_r8[5] = uVar2;
            puVar9 = unaff_r8 + 4;
            *puVar9 = uVar1;
        }
        g_8c4c24e0 = 0xe0000000;
        g_8c4c24f8 = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        g_8c4c24fc = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        uVar21 = g_8c4c24f0;
        uVar4 = g_8c4c24e8;
        uVar14 = g_8c4c24e4;
        uVar15 = g_8c4c24e0;
        if (cVar27 == '\0') {
            puVar13 = &g_8c4c24f0;
            *(u32 *)((int)puVar9 + 0x3c) = g_8c4c24ec;
            *(u32 *)(puVar9 + 7) = uVar4;
            *(u32 *)((int)puVar9 + 0x34) = uVar14;
            puVar9 = puVar9 + 6;
            *(u32 *)puVar9 = uVar15;
        } else {
            uVar1 = CONCAT44(g_8c4c24e4, g_8c4c24e0);
            uVar2 = CONCAT44(g_8c4c24ec, g_8c4c24e8);
            puVar13 = &g_8c4c2500;
            puVar9[7] = CONCAT44(g_8c4c24fc, g_8c4c24f8);
            puVar9[6] = uVar21;
            puVar9[5] = uVar2;
            puVar9 = puVar9 + 4;
            *puVar9 = uVar1;
        }
        g_8c4c24a0 = 0xf0000000;
        g_8c4c24b8 = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        uVar4 = float_to_color_u8(puVar13, iVar11, uVar25, iVar12);
        uVar21 = g_8c4c24b0;
        uVar14 = g_8c4c24a8;
        uVar15 = g_8c4c24a4;
        uVar25 = g_8c4c24a0;
        g_8c4c24bc = uVar4;
        if (cVar27 == '\0') {
            *(u32 *)((int)puVar9 + 0x3c) = g_8c4c24ac;
            *(u32 *)(puVar9 + 7) = uVar14;
            *(u32 *)((int)puVar9 + 0x34) = uVar15;
            *(u32 *)(puVar9 + 6) = uVar25;
        } else {
            uVar1 = CONCAT44(g_8c4c24a4, g_8c4c24a0);
            uVar2 = CONCAT44(g_8c4c24ac, g_8c4c24a8);
            puVar9[7] = CONCAT44(uVar4, g_8c4c24b8);
            puVar9[6] = uVar21;
            puVar9[5] = uVar2;
            puVar9[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 4;
    }
    return uVar4;
}

/*
 * gfxlib_uses_float_to_color_u8_23e228  0x8c23e228
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 * called by: gfxlib_uses_float_to_color_u8_24553e, vram_24f64c
 */
int gfxlib_uses_float_to_color_u8_23e228(int a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    u64 uVar2;
    u32 uVar3;
    u64 uVar4;
    u32 uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    u64 *unaff_r8;
    u64 *puVar10;
    int *piVar11;
    int *piVar12;
    double in_dr0;
    double dVar13;
    float fVar14;
    u32 uVar15;
    double in_dr2;
    double dVar16;
    double dVar17;
    double dVar18;
    float fVar20;
    double dVar19;
    u32 uVar21;
    double in_xd2;
    double in_xd4;
    double dVar22;
    char cVar23;
    char cVar24;
    int aiStack_28[4];

    cVar24 = '\0';
    cVar23 = '\0';
    dVar17 = (double)(u64)g_8c4c11bc;
    dVar19 = (double)(u64)g_8c4c11b4;
    aiStack_28[0] = a0;
    aiStack_28[1] = a1;
    aiStack_28[2] = a2;
    uVar5 = float_to_color_u8(a0, a1, a2, a3);
    iVar9 = 0;
    iVar6 = 0;
    iVar8 = 2;
    do {
        iVar7 = iVar6;
        piVar12 = aiStack_28 + iVar7;
        piVar11 = aiStack_28 + iVar8;
        if ((*(u32 *)*piVar11 & 1 ^ *(u32 *)*piVar12 & 1) == 1) {
            iVar6 = *piVar11;
            iVar8 = *piVar12;
            if (cVar24 == '\0') {
                dVar18 = (double)CONCAT44(*(u32 *)(iVar6 + 0x18), SUB84(dVar19, 0));
                dVar16 = (double)CONCAT44(*(u32 *)(iVar8 + 0x18), g_8c4aa4d4);
            } else {
                in_xd2 = (double)CONCAT44(g_8c4aa4d8, g_8c4aa4d4);
                dVar18 = *(double *)(iVar6 + 0x18);
                dVar16 = *(double *)(iVar8 + 0x18);
            }
            fVar20 = (float)((u64)dVar18 >> 0x20);
            if (cVar23 == '\0') {
                dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar16, 0) - fVar20);
            } else {
                dVar16 = dVar16 - dVar18;
            }
            if (cVar24 == '\0') {
                dVar18 = (double)CONCAT44(fVar20, *(u32 *)(iVar6 + 0x10));
                dVar22 = in_xd4;
            } else {
                dVar22 = *(double *)(iVar6 + 0x10);
            }
            if (cVar23 == '\0') {
                dVar16 =
                    (double)CONCAT44((float)((u64)dVar16 >> 0x20) - (float)((u64)dVar18 >> 0x20), SUB84(dVar16, 0));
            } else {
                dVar16 = dVar16 - dVar18;
            }
            dVar19 = in_xd2;
            if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44(SUB84(dVar16, 0), SUB84(dVar18, 0));
            }
            if (cVar23 == '\0') {
                dVar19 =
                    (double)CONCAT44((float)((u64)dVar19 >> 0x20) / (float)((u64)dVar16 >> 0x20), SUB84(dVar19, 0));
            } else {
                dVar19 = dVar19 / dVar16;
            }
            if (cVar24 == '\0') {
                dVar18 = (double)CONCAT44(SUB84(dVar19, 0), *(u32 *)(iVar8 + 0x10));
            } else {
                in_xd2 = *(double *)(iVar8 + 0x10);
                dVar18 = dVar22;
            }
            if (cVar23 == '\0') {
                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) - SUB84(dVar19, 0));
            } else {
                dVar18 = dVar18 - dVar19;
            }
            uVar21 = (u32)((u64)dVar19 >> 0x20);
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(*(u32 *)(iVar6 + 0x14), SUB84(dVar17, 0));
                dVar13 = (double)CONCAT44(uVar21, SUB84(in_dr0, 0));
            } else {
                dVar16 = *(double *)(iVar6 + 0x14);
                dVar13 = dVar19;
            }
            fVar20 = (float)((u64)dVar13 >> 0x20);
            if (cVar23 == '\0') {
                dVar18 = (double)CONCAT44(fVar20 * SUB84(dVar18, 0) + (float)((u64)dVar18 >> 0x20), SUB84(dVar18, 0));
            }
            if (cVar24 == '\0') {
                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), *(u32 *)(iVar8 + 0x14));
            } else {
                in_xd2 = *(double *)(iVar8 + 0x14);
            }
            fVar14 = (float)((u64)dVar16 >> 0x20);
            if (cVar23 == '\0') {
                dVar18 = (double)CONCAT44((int)((u64)dVar18 >> 0x20), SUB84(dVar18, 0) - fVar14);
            } else {
                dVar18 = dVar18 - dVar16;
            }
            in_xd4 = dVar18;
            if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44(uVar21, (int)((u64)dVar18 >> 0x20));
                in_xd4 = dVar22;
            }
            iVar6 = iVar9 * 0x40;
            dVar17 = dVar16;
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44(fVar14, SUB84(dVar18, 0));
            }
            if (cVar23 == '\0') {
                dVar17 = (double)CONCAT44(fVar20 * SUB84(dVar17, 0) + (float)((u64)dVar17 >> 0x20), SUB84(dVar17, 0));
            }
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar16, 0));
                dVar18 = (double)CONCAT44(g_8c4ab320, SUB84(dVar13, 0));
                dVar16 = (double)CONCAT44(g_8c4aa4b4, g_8c4ab31c);
            } else {
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar18 = (double)CONCAT44(g_8c4ab324, g_8c4ab320);
                dVar16 = (double)CONCAT44(g_8c4aa4b8, g_8c4aa4b4);
            }
            if (cVar23 == '\0') {
                dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar16, 0) * (float)((u64)dVar18 >> 0x20));
            } else {
                dVar16 = dVar16 * dVar18;
            }
            dVar22 = in_xd4;
            if (cVar24 == '\0') {
                dVar22 = (double)CONCAT44(SUB84(dVar19, 0), SUB84(dVar18, 0));
            }
            if (cVar23 == '\0') {
                dVar16 = (double)CONCAT44(
                    (float)((u64)dVar22 >> 0x20) * SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20), SUB84(dVar16, 0));
            }
            if (cVar24 == '\0') {
                *(int *)(&g_8c4c2424 + iVar6) = (int)((u64)dVar16 >> 0x20);
                dVar18 = (double)CONCAT44(g_8c4ab324, SUB84(dVar22, 0));
                dVar16 = (double)CONCAT44(g_8c4aa4b8, g_8c4ab31c);
            } else {
                *(double *)(&g_8c4c2424 + iVar6) = dVar16;
                dVar18 = (double)CONCAT44(g_8c4ab328, g_8c4ab324);
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar16 = (double)CONCAT44(g_8c4aa4bc, g_8c4aa4b8);
            }
            if (cVar23 == '\0') {
                dVar16 = (double)CONCAT44((int)((u64)dVar16 >> 0x20), SUB84(dVar16, 0) * (float)((u64)dVar18 >> 0x20));
            } else {
                dVar16 = dVar16 * dVar18;
            }
            dVar22 = dVar17;
            if (cVar24 == '\0') {
                dVar22 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar18, 0));
            }
            if (cVar23 == '\0') {
                dVar16 = (double)CONCAT44(
                    (float)((u64)dVar22 >> 0x20) * SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20), SUB84(dVar16, 0));
            }
            uVar21 = (u32)((u64)dVar19 >> 0x20);
            if (cVar24 == '\0') {
                *(int *)(&g_8c4c2428 + iVar6) = (int)((u64)dVar16 >> 0x20);
                *(u32 *)(&g_8c4c242c + iVar6) = g_8c4ab31c;
                in_dr0 = (double)CONCAT44(uVar21, SUB84(dVar22, 0));
            } else {
                *(double *)(&g_8c4c2428 + iVar6) = dVar16;
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                *(double *)(&g_8c4c242c + iVar6) = in_xd2;
                in_dr0 = dVar19;
            }
            if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44(uVar21, *(u32 *)(*piVar11 + 0x20));
            } else {
                in_xd4 = *(double *)(*piVar11 + 0x20);
            }
            if (cVar24 == '\0') {
                dVar18 = (double)CONCAT44(SUB84(dVar19, 0), *(u32 *)(*piVar12 + 0x20));
            } else {
                in_xd2 = *(double *)(*piVar12 + 0x20);
                dVar18 = in_xd4;
            }
            fVar20 = (float)((u64)in_dr0 >> 0x20);
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar18, 0) - SUB84(dVar19, 0);
                dVar18 = (double)CONCAT44(fVar20 * fVar14 + (float)((u64)dVar18 >> 0x20), fVar14);
            } else {
                dVar18 = dVar18 - dVar19;
            }
            iVar9 = iVar9 + 1;
            if (cVar24 == '\0') {
                *(int *)(&g_8c4c2430 + iVar6) = (int)((u64)dVar18 >> 0x20);
            } else {
                *(double *)(&g_8c4c2430 + iVar6) = dVar18;
            }
            if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), *(u32 *)(*piVar11 + 0x24));
            } else {
                in_xd4 = *(double *)(*piVar11 + 0x24);
            }
            if (cVar24 == '\0') {
                in_dr2 = (double)CONCAT44(SUB84(dVar19, 0), *(u32 *)(*piVar12 + 0x24));
            } else {
                in_xd2 = *(double *)(*piVar12 + 0x24);
                in_dr2 = in_xd4;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(in_dr2, 0) - SUB84(dVar19, 0);
                in_dr2 = (double)CONCAT44(fVar20 * fVar14 + (float)((u64)in_dr2 >> 0x20), fVar14);
            } else {
                in_dr2 = in_dr2 - dVar19;
            }
            if (cVar24 == '\0') {
                *(int *)(iVar6 + 0x8c4c2434) = (int)((u64)in_dr2 >> 0x20);
            } else {
                *(double *)(iVar6 + 0x8c4c2434) = in_dr2;
            }
            *(u32 *)(&g_8c4c2438 + iVar6) = uVar5;
        }
        piVar11 = aiStack_28 + iVar7;
        if ((*(u32 *)*piVar11 & 1) == 0) {
            if (cVar24 == '\0') {
                in_dr2 = (double)(u64) * (u32 *)(*piVar11 + 4);
            } else {
                in_xd2 = *(double *)(*piVar11 + 4);
            }
            iVar6 = iVar9 * 0x40;
            if (cVar24 == '\0') {
                *(int *)(&g_8c4c2424 + iVar6) = SUB84(in_dr2, 0);
            } else {
                *(double *)(&g_8c4c2424 + iVar6) = in_xd2;
            }
            iVar9 = iVar9 + 1;
            if (cVar24 == '\0') {
                uVar15 = *(u32 *)(*piVar11 + 8);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(&g_8c4c2428 + iVar6) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar11 + 8);
                *(double *)(&g_8c4c2428 + iVar6) = in_xd2;
            }
            if (cVar24 == '\0') {
                uVar15 = *(u32 *)(*piVar11 + 0xc);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(&g_8c4c242c + iVar6) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar11 + 0xc);
                *(double *)(&g_8c4c242c + iVar6) = in_xd2;
            }
            if (cVar24 == '\0') {
                uVar15 = *(u32 *)(*piVar11 + 0x20);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(&g_8c4c2430 + iVar6) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar11 + 0x20);
                *(double *)(&g_8c4c2430 + iVar6) = in_xd2;
            }
            if (cVar24 == '\0') {
                uVar15 = *(u32 *)(*piVar11 + 0x24);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(iVar6 + 0x8c4c2434) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar11 + 0x24);
                *(double *)(iVar6 + 0x8c4c2434) = in_xd2;
            }
            *(u32 *)(&g_8c4c2438 + iVar6) = uVar5;
        }
        uVar4 = g_8c4c2430;
        uVar3 = g_8c4c2428;
        uVar21 = g_8c4c2424;
        iVar6 = iVar7 + 1;
        iVar8 = iVar7;
    } while (iVar7 + 1 < 3);
    if (iVar9 == 3) {
        g_8c4c2420 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c242c;
            *(u32 *)(unaff_r8 + 3) = uVar3;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar21;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2424, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c242c, g_8c4c2428);
            unaff_r8[3] = g_8c4c2438;
            unaff_r8[2] = uVar4;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        uVar4 = g_8c4c2470;
        uVar21 = g_8c4c2468;
        uVar5 = g_8c4c2464;
        g_8c4c2460 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c246c;
            *(u32 *)(unaff_r8 + 7) = uVar21;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar5;
            puVar10 = unaff_r8 + 6;
            *(u32 *)puVar10 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2464, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c246c, g_8c4c2468);
            unaff_r8[7] = g_8c4c2478;
            unaff_r8[6] = uVar4;
            unaff_r8[5] = uVar2;
            puVar10 = unaff_r8 + 4;
            *puVar10 = uVar1;
        }
        uVar4 = g_8c4c24b0;
        uVar21 = g_8c4c24a8;
        uVar5 = g_8c4c24a4;
        g_8c4c24a0 = 0xf0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)puVar10 + 0x3c) = g_8c4c24ac;
            *(u32 *)(puVar10 + 7) = uVar21;
            *(u32 *)((int)puVar10 + 0x34) = uVar5;
            *(u32 *)(puVar10 + 6) = 0xf0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c24a4, 0xf0000000);
            uVar2 = CONCAT44(g_8c4c24ac, g_8c4c24a8);
            puVar10[7] = g_8c4c24b8;
            puVar10[6] = uVar4;
            puVar10[5] = uVar2;
            puVar10[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 3;
    } else {
        g_8c4c2420 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c242c;
            *(u32 *)(unaff_r8 + 3) = uVar3;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar21;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2424, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c242c, g_8c4c2428);
            unaff_r8[3] = g_8c4c2438;
            unaff_r8[2] = uVar4;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        uVar4 = g_8c4c2470;
        uVar21 = g_8c4c2468;
        uVar5 = g_8c4c2464;
        g_8c4c2460 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c246c;
            *(u32 *)(unaff_r8 + 7) = uVar21;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar5;
            puVar10 = unaff_r8 + 6;
            *(u32 *)puVar10 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2464, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c246c, g_8c4c2468);
            unaff_r8[7] = g_8c4c2478;
            unaff_r8[6] = uVar4;
            unaff_r8[5] = uVar2;
            puVar10 = unaff_r8 + 4;
            *puVar10 = uVar1;
        }
        uVar4 = g_8c4c24f0;
        uVar21 = g_8c4c24e8;
        uVar5 = g_8c4c24e4;
        g_8c4c24e0 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)puVar10 + 0x3c) = g_8c4c24ec;
            *(u32 *)(puVar10 + 7) = uVar21;
            *(u32 *)((int)puVar10 + 0x34) = uVar5;
            puVar10 = puVar10 + 6;
            *(u32 *)puVar10 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c24e4, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c24ec, g_8c4c24e8);
            puVar10[7] = g_8c4c24f8;
            puVar10[6] = uVar4;
            puVar10[5] = uVar2;
            puVar10 = puVar10 + 4;
            *puVar10 = uVar1;
        }
        uVar4 = g_8c4c24b0;
        uVar21 = g_8c4c24a8;
        uVar5 = g_8c4c24a4;
        g_8c4c24a0 = 0xf0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)puVar10 + 0x3c) = g_8c4c24ac;
            *(u32 *)(puVar10 + 7) = uVar21;
            *(u32 *)((int)puVar10 + 0x34) = uVar5;
            *(u32 *)(puVar10 + 6) = 0xf0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c24a4, 0xf0000000);
            uVar2 = CONCAT44(g_8c4c24ac, g_8c4c24a8);
            puVar10[7] = g_8c4c24b8;
            puVar10[6] = uVar4;
            puVar10[5] = uVar2;
            puVar10[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 4;
    }
    return iVar9;
}

/*
 * gfxlib_uses_float_to_color_u8_23e4c8  0x8c23e4c8
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 * called by: gfxlib_uses_float_to_color_u8_246756, gfxlib_uses_float_to_color_u8_251f78
 */
int gfxlib_uses_float_to_color_u8_23e4c8(int a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    u64 uVar2;
    u32 uVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    u64 *unaff_r8;
    u64 *puVar9;
    int *piVar10;
    double in_dr0;
    double dVar11;
    u32 uVar12;
    float fVar13;
    float fVar14;
    u32 uVar15;
    double in_dr2;
    u64 uVar16;
    double dVar17;
    u64 uVar18;
    double dVar19;
    double dVar20;
    u32 uVar21;
    double dVar22;
    double in_xd2;
    double in_xd4;
    char cVar23;
    char cVar24;
    int aiStack_28[4];

    cVar24 = '\0';
    cVar23 = '\0';
    dVar22 = (double)(u64)g_8c4c11bc;
    uVar12 = g_8c4c11b4;
    aiStack_28[0] = a0;
    aiStack_28[1] = a1;
    aiStack_28[2] = a2;
    uVar3 = float_to_color_u8(a0, a1, a2, a3);
    piVar5 = aiStack_28;
    if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(0x3f000000, uVar12);
    } else {
        dVar19 = -2.198282791852599e+155;
    }
    while (piVar5 < aiStack_28 + 3) {
        iVar4 = *piVar5;
        uVar12 = (u32)((u64)dVar19 >> 0x20);
        if (cVar24 == '\0') {
            uVar16 = CONCAT44(*(u32 *)(iVar4 + 0x30), uVar12);
            dVar20 = (double)CONCAT44(uVar12, SUB84(in_dr0, 0));
        } else {
            uVar16 = *(u64 *)(iVar4 + 0x30);
            in_xd2 = dVar19;
            dVar20 = dVar19;
        }
        if (cVar23 == '\0') {
            uVar16 = (u64)(u32)((float)((u64)dVar20 >> 0x20) * (float)(uVar16 >> 0x20) + (float)uVar16);
        }
        if (cVar24 == '\0') {
            *(int *)(iVar4 + 0x20) = (int)uVar16;
            in_dr0 = (double)CONCAT44(uVar12, SUB84(dVar20, 0));
        } else {
            *(double *)(iVar4 + 0x20) = in_xd2;
            in_dr0 = dVar19;
        }
        iVar4 = *piVar5;
        if (cVar24 == '\0') {
            in_dr2 = (double)CONCAT44(*(u32 *)(iVar4 + 0x34), uVar12);
        } else {
            in_dr2 = *(double *)(iVar4 + 0x34);
            in_xd2 = dVar19;
        }
        if (cVar23 == '\0') {
            in_dr2 = (double)(u64)(u32)((float)((u64)in_dr0 >> 0x20) * (float)((u64)in_dr2 >> 0x20) + SUB84(in_dr2, 0));
        }
        if (cVar24 == '\0') {
            *(int *)(iVar4 + 0x24) = SUB84(in_dr2, 0);
            piVar5 = piVar5 + 1;
        } else {
            *(double *)(iVar4 + 0x24) = in_xd2;
            piVar5 = piVar5 + 1;
        }
    }
    iVar8 = 0;
    iVar4 = 0;
    iVar7 = 2;
    do {
        iVar6 = iVar4;
        piVar10 = aiStack_28 + iVar6;
        piVar5 = aiStack_28 + iVar7;
        if ((*(u32 *)*piVar5 & 1 ^ *(u32 *)*piVar10 & 1) == 1) {
            iVar7 = *piVar5;
            iVar4 = *piVar10;
            if (cVar24 == '\0') {
                dVar20 = (double)CONCAT44(*(u32 *)(iVar7 + 0x18), SUB84(dVar19, 0));
                dVar17 = (double)CONCAT44(*(u32 *)(iVar4 + 0x18), g_8c4aa4d4);
                dVar19 = in_xd2;
            } else {
                dVar20 = *(double *)(iVar7 + 0x18);
                dVar19 = (double)CONCAT44(g_8c4aa4d8, g_8c4aa4d4);
                dVar17 = *(double *)(iVar4 + 0x18);
            }
            fVar13 = (float)((u64)dVar20 >> 0x20);
            if (cVar23 == '\0') {
                dVar20 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) - fVar13, SUB84(dVar17, 0) - fVar13);
            } else {
                dVar20 = (dVar17 - dVar20) - dVar20;
            }
            if (cVar24 == '\0') {
                uVar12 = SUB84(dVar20, 0);
                dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar4 + 0x10));
                in_xd2 = dVar19;
                dVar19 = (double)CONCAT44(uVar12, *(u32 *)(iVar7 + 0x10));
            } else {
                in_xd4 = *(double *)(iVar7 + 0x10);
                in_xd2 = *(double *)(iVar4 + 0x10);
            }
            if (cVar23 == '\0') {
                dVar19 =
                    (double)CONCAT44((float)((u64)dVar19 >> 0x20) / (float)((u64)dVar20 >> 0x20), SUB84(dVar19, 0));
            } else {
                dVar19 = dVar19 / dVar20;
            }
            dVar17 = in_xd4;
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44(SUB84(dVar19, 0), SUB84(dVar20, 0));
            }
            if (cVar23 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) - SUB84(dVar19, 0));
            } else {
                dVar17 = dVar17 - dVar19;
            }
            if (cVar24 == '\0') {
                dVar22 = (double)CONCAT44(*(u32 *)(iVar7 + 0x14), SUB84(dVar22, 0));
            } else {
                dVar22 = *(double *)(iVar7 + 0x14);
            }
            iVar7 = iVar8 * 0x40;
            uVar12 = (u32)((u64)dVar19 >> 0x20);
            dVar20 = dVar19;
            if (cVar24 == '\0') {
                dVar20 = (double)CONCAT44(uVar12, SUB84(in_dr0, 0));
            }
            fVar13 = (float)((u64)dVar20 >> 0x20);
            if (cVar23 == '\0') {
                dVar17 = (double)CONCAT44(fVar13 * SUB84(dVar17, 0) + (float)((u64)dVar17 >> 0x20), SUB84(dVar17, 0));
            }
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)(iVar4 + 0x14));
            } else {
                in_xd2 = *(double *)(iVar4 + 0x14);
            }
            fVar14 = (float)((u64)dVar22 >> 0x20);
            if (cVar23 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) - fVar14);
            } else {
                dVar17 = dVar17 - dVar22;
            }
            dVar11 = dVar22;
            if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44(uVar12, (int)((u64)dVar17 >> 0x20));
                dVar11 = (double)CONCAT44(fVar14, SUB84(dVar17, 0));
                dVar17 = in_xd4;
            }
            in_xd4 = dVar17;
            if (cVar23 == '\0') {
                dVar11 = (double)CONCAT44(fVar13 * SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20), SUB84(dVar11, 0));
            }
            uVar12 = (u32)((u64)dVar11 >> 0x20);
            if (cVar24 == '\0') {
                dVar11 = (double)CONCAT44(uVar12, g_8c4ab31c);
                dVar20 = (double)CONCAT44(g_8c4ab320, SUB84(dVar20, 0));
                dVar22 = (double)CONCAT44(uVar12, SUB84(dVar22, 0));
            } else {
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar20 = (double)CONCAT44(g_8c4ab324, g_8c4ab320);
                dVar22 = dVar11;
            }
            if (cVar23 == '\0') {
                fVar13 = SUB84(dVar11, 0) * (float)((u64)dVar20 >> 0x20);
            } else {
                fVar13 = SUB84(dVar11 * dVar20, 0);
            }
            if (cVar24 == '\0') {
                uVar18 = CONCAT44(g_8c4aa4b4, fVar13);
                dVar20 = (double)CONCAT44(SUB84(dVar19, 0), SUB84(dVar20, 0));
            } else {
                uVar18 = CONCAT44(g_8c4aa4b8, g_8c4aa4b4);
                dVar20 = in_xd4;
            }
            if (cVar23 == '\0') {
                uVar18 = CONCAT44((float)((u64)dVar20 >> 0x20) * (float)uVar18 + (float)((u64)uVar18 >> 0x20),
                                  (float)uVar18);
            }
            if (cVar24 == '\0') {
                *(int *)(&g_8c4c2424 + iVar7) = (int)((u64)uVar18 >> 0x20);
                dVar20 = (double)CONCAT44(g_8c4ab324, SUB84(dVar20, 0));
                dVar17 = (double)CONCAT44(g_8c4aa4b8, g_8c4ab31c);
            } else {
                *(u64 *)(&g_8c4c2424 + iVar7) = uVar18;
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar20 = (double)CONCAT44(g_8c4ab328, g_8c4ab324);
                dVar17 = (double)CONCAT44(g_8c4aa4bc, g_8c4aa4b8);
            }
            if (cVar23 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) * (float)((u64)dVar20 >> 0x20));
            } else {
                dVar17 = dVar17 * dVar20;
            }
            dVar11 = dVar22;
            if (cVar24 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), SUB84(dVar20, 0));
            }
            if (cVar23 == '\0') {
                dVar17 = (double)CONCAT44(
                    (float)((u64)dVar11 >> 0x20) * SUB84(dVar17, 0) + (float)((u64)dVar17 >> 0x20), SUB84(dVar17, 0));
            }
            uVar21 = (u32)((u64)dVar19 >> 0x20);
            uVar12 = (u32)((u64)dVar17 >> 0x20);
            if (cVar24 == '\0') {
                *(u32 *)(&g_8c4c2428 + iVar7) = uVar12;
                dVar17 = (double)CONCAT44(uVar12, g_8c4ab31c);
                *(u32 *)(&g_8c4c242c + iVar7) = g_8c4ab31c;
                in_dr0 = (double)CONCAT44(uVar21, SUB84(dVar11, 0));
            } else {
                *(double *)(&g_8c4c2428 + iVar7) = dVar17;
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                *(double *)(&g_8c4c242c + iVar7) = in_xd2;
                in_dr0 = dVar19;
            }
            if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44(uVar21, *(u32 *)(*piVar5 + 0x20));
            } else {
                in_xd4 = *(double *)(*piVar5 + 0x20);
            }
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)(*piVar10 + 0x20));
            } else {
                in_xd2 = *(double *)(*piVar10 + 0x20);
            }
            if (cVar23 == '\0') {
                fVar13 = SUB84(dVar17, 0) - SUB84(dVar19, 0);
            } else {
                fVar13 = SUB84(dVar17 - dVar19, 0);
            }
            dVar20 = in_xd4;
            if (cVar24 == '\0') {
                dVar20 = (double)CONCAT44(SUB84(dVar19, 0), fVar13);
            }
            fVar13 = (float)((u64)in_dr0 >> 0x20);
            if (cVar23 == '\0') {
                dVar20 = (double)CONCAT44(fVar13 * SUB84(dVar20, 0) + (float)((u64)dVar20 >> 0x20), SUB84(dVar20, 0));
            }
            iVar8 = iVar8 + 1;
            if (cVar24 == '\0') {
                *(int *)(&g_8c4c2430 + iVar7) = (int)((u64)dVar20 >> 0x20);
            } else {
                *(double *)(&g_8c4c2430 + iVar7) = dVar20;
            }
            if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44((int)((u64)dVar19 >> 0x20), *(u32 *)(*piVar5 + 0x24));
            } else {
                in_xd4 = *(double *)(*piVar5 + 0x24);
            }
            if (cVar24 == '\0') {
                in_dr2 = (double)CONCAT44(SUB84(dVar19, 0), *(u32 *)(*piVar10 + 0x24));
            } else {
                in_xd2 = *(double *)(*piVar10 + 0x24);
                in_dr2 = in_xd4;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(in_dr2, 0) - SUB84(dVar19, 0);
                in_dr2 = (double)CONCAT44(fVar13 * fVar14 + (float)((u64)in_dr2 >> 0x20), fVar14);
            } else {
                in_dr2 = in_dr2 - dVar19;
            }
            if (cVar24 == '\0') {
                *(int *)(iVar7 + 0x8c4c2434) = (int)((u64)in_dr2 >> 0x20);
            } else {
                *(double *)(iVar7 + 0x8c4c2434) = in_dr2;
            }
            *(u32 *)(&g_8c4c2438 + iVar7) = uVar3;
        }
        piVar5 = aiStack_28 + iVar6;
        if ((*(u32 *)*piVar5 & 1) == 0) {
            if (cVar24 == '\0') {
                in_dr2 = (double)(u64) * (u32 *)(*piVar5 + 4);
            } else {
                in_xd2 = *(double *)(*piVar5 + 4);
            }
            iVar4 = iVar8 * 0x40;
            if (cVar24 == '\0') {
                *(int *)(&g_8c4c2424 + iVar4) = SUB84(in_dr2, 0);
            } else {
                *(double *)(&g_8c4c2424 + iVar4) = in_xd2;
            }
            iVar8 = iVar8 + 1;
            if (cVar24 == '\0') {
                uVar15 = *(u32 *)(*piVar5 + 8);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(&g_8c4c2428 + iVar4) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar5 + 8);
                *(double *)(&g_8c4c2428 + iVar4) = in_xd2;
            }
            if (cVar24 == '\0') {
                uVar15 = *(u32 *)(*piVar5 + 0xc);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(&g_8c4c242c + iVar4) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar5 + 0xc);
                *(double *)(&g_8c4c242c + iVar4) = in_xd2;
            }
            if (cVar24 == '\0') {
                uVar15 = *(u32 *)(*piVar5 + 0x20);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(&g_8c4c2430 + iVar4) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar5 + 0x20);
                *(double *)(&g_8c4c2430 + iVar4) = in_xd2;
            }
            if (cVar24 == '\0') {
                uVar15 = *(u32 *)(*piVar5 + 0x24);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(iVar4 + 0x8c4c2434) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar5 + 0x24);
                *(double *)(iVar4 + 0x8c4c2434) = in_xd2;
            }
            *(u32 *)(&g_8c4c2438 + iVar4) = uVar3;
        }
        uVar18 = g_8c4c2430;
        uVar21 = g_8c4c2428;
        uVar12 = g_8c4c2424;
        iVar4 = iVar6 + 1;
        iVar7 = iVar6;
    } while (iVar6 + 1 < 3);
    if (iVar8 == 3) {
        g_8c4c2420 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c242c;
            *(u32 *)(unaff_r8 + 3) = uVar21;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar12;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2424, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c242c, g_8c4c2428);
            unaff_r8[3] = g_8c4c2438;
            unaff_r8[2] = uVar18;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        uVar18 = g_8c4c2470;
        uVar3 = g_8c4c2468;
        uVar12 = g_8c4c2464;
        g_8c4c2460 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c246c;
            *(u32 *)(unaff_r8 + 7) = uVar3;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar12;
            puVar9 = unaff_r8 + 6;
            *(u32 *)puVar9 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2464, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c246c, g_8c4c2468);
            unaff_r8[7] = g_8c4c2478;
            unaff_r8[6] = uVar18;
            unaff_r8[5] = uVar2;
            puVar9 = unaff_r8 + 4;
            *puVar9 = uVar1;
        }
        uVar18 = g_8c4c24b0;
        uVar3 = g_8c4c24a8;
        uVar12 = g_8c4c24a4;
        g_8c4c24a0 = 0xf0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)puVar9 + 0x3c) = g_8c4c24ac;
            *(u32 *)(puVar9 + 7) = uVar3;
            *(u32 *)((int)puVar9 + 0x34) = uVar12;
            *(u32 *)(puVar9 + 6) = 0xf0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c24a4, 0xf0000000);
            uVar2 = CONCAT44(g_8c4c24ac, g_8c4c24a8);
            puVar9[7] = g_8c4c24b8;
            puVar9[6] = uVar18;
            puVar9[5] = uVar2;
            puVar9[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 3;
    } else {
        g_8c4c2420 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c242c;
            *(u32 *)(unaff_r8 + 3) = uVar21;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar12;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2424, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c242c, g_8c4c2428);
            unaff_r8[3] = g_8c4c2438;
            unaff_r8[2] = uVar18;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        uVar18 = g_8c4c2470;
        uVar3 = g_8c4c2468;
        uVar12 = g_8c4c2464;
        g_8c4c2460 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c246c;
            *(u32 *)(unaff_r8 + 7) = uVar3;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar12;
            puVar9 = unaff_r8 + 6;
            *(u32 *)puVar9 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2464, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c246c, g_8c4c2468);
            unaff_r8[7] = g_8c4c2478;
            unaff_r8[6] = uVar18;
            unaff_r8[5] = uVar2;
            puVar9 = unaff_r8 + 4;
            *puVar9 = uVar1;
        }
        uVar18 = g_8c4c24f0;
        uVar3 = g_8c4c24e8;
        uVar12 = g_8c4c24e4;
        g_8c4c24e0 = 0xe0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)puVar9 + 0x3c) = g_8c4c24ec;
            *(u32 *)(puVar9 + 7) = uVar3;
            *(u32 *)((int)puVar9 + 0x34) = uVar12;
            puVar9 = puVar9 + 6;
            *(u32 *)puVar9 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c24e4, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c24ec, g_8c4c24e8);
            puVar9[7] = g_8c4c24f8;
            puVar9[6] = uVar18;
            puVar9[5] = uVar2;
            puVar9 = puVar9 + 4;
            *puVar9 = uVar1;
        }
        uVar18 = g_8c4c24b0;
        uVar3 = g_8c4c24a8;
        uVar12 = g_8c4c24a4;
        g_8c4c24a0 = 0xf0000000;
        if (cVar24 == '\0') {
            *(u32 *)((int)puVar9 + 0x3c) = g_8c4c24ac;
            *(u32 *)(puVar9 + 7) = uVar3;
            *(u32 *)((int)puVar9 + 0x34) = uVar12;
            *(u32 *)(puVar9 + 6) = 0xf0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c24a4, 0xf0000000);
            uVar2 = CONCAT44(g_8c4c24ac, g_8c4c24a8);
            puVar9[7] = g_8c4c24b8;
            puVar9[6] = uVar18;
            puVar9[5] = uVar2;
            puVar9[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 4;
    }
    return iVar8;
}

/*
 * gfxlib_calls_scan_loop_23e7a8  0x8c23e7a8
 * area name: in the gfxlib library code range; behaviour name: its callees mostly do: calls_scan_loop
 * called by: gfxlib_calls_scan_loop_2485bc, gfxlib_uses_noop_2424f6, gfxlib_uses_noop_244262
 */
int gfxlib_calls_scan_loop_23e7a8(int a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    u64 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    u64 *unaff_r8;
    u64 *puVar7;
    int iVar8;
    int *piVar9;
    int iVar10;
    int *piVar11;
    double in_dr0;
    double dVar12;
    u32 uVar13;
    float fVar14;
    u32 uVar15;
    double in_dr2;
    double dVar16;
    double dVar17;
    u32 uVar19;
    u64 uVar18;
    float fVar20;
    double in_dr4;
    double dVar21;
    double in_dr6;
    double in_xd2;
    double in_xd4;
    char cVar22;
    char cVar23;
    double *pdStack_40;
    double *pdStack_38;
    int aiStack_28[4];

    cVar23 = '\0';
    cVar22 = '\0';
    iVar8 = 0;
    aiStack_28[0] = a0;
    aiStack_28[1] = a1;
    aiStack_28[2] = a2;
    pdStack_40 = (double *)&g_8c4c2620;
    pdStack_38 = (double *)&g_8c4c2620;
    piVar11 = aiStack_28;
    do {
        uVar13 = SUB84(in_dr2, 0);
        if (*(u32 *)(aiStack_28[iVar8] + 0x3c) == (u32)(u16)a3) {
            if (cVar23 == '\0') {
                uVar15 = *(u32 *)(*piVar11 + 0x20);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)pdStack_40 = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar11 + 0x20);
                *pdStack_40 = in_xd2;
            }
            if (cVar23 == '\0') {
                uVar15 = *(u32 *)(*piVar11 + 0x24);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)((int)pdStack_40 + 4) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar11 + 0x24);
                *(double *)((int)pdStack_40 + 4) = in_xd2;
            }
            if (cVar23 == '\0') {
                uVar15 = *(u32 *)(*piVar11 + 0x28);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(pdStack_40 + 1) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar11 + 0x28);
                pdStack_40[1] = in_xd2;
            }
            if (cVar23 == '\0') {
                uVar15 = *(u32 *)(*piVar11 + 0x2c);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)((int)pdStack_40 + 0xc) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar11 + 0x2c);
                *(double *)((int)pdStack_40 + 0xc) = in_xd2;
            }
        } else {
            piVar9 = aiStack_28 + iVar8;
            gfxlib_calls_scan_loop_23bae2(pdStack_38, *piVar9 + 0x10, *piVar9 + 0x30, (u16)a3 & 0x8000);
            *(u32 *)(*piVar9 + 0x3c) = (u32)(u16)a3;
            if (cVar23 == '\0') {
                uVar13 = *(u32 *)pdStack_38;
            } else {
                in_xd2 = *pdStack_38;
            }
            if (cVar23 == '\0') {
                *(u32 *)(*piVar9 + 0x20) = uVar13;
                dVar16 = (double)CONCAT44(*(u32 *)((int)pdStack_38 + 4), *(u32 *)((int)pdStack_38 + 0x14));
            } else {
                *(double *)(*piVar9 + 0x20) = in_xd2;
                in_xd2 = *(double *)((int)pdStack_38 + 0x14);
                dVar16 = *(double *)((int)pdStack_38 + 4);
            }
            iVar4 = *piVar9;
            if (cVar22 == '\0') {
                dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0), SUB84(dVar16, 0));
            } else {
                dVar16 = dVar16 + dVar16;
            }
            uVar13 = (u32)((u64)dVar16 >> 0x20);
            if (cVar23 == '\0') {
                *(u32 *)((int)pdStack_38 + 4) = uVar13;
                *(u32 *)(iVar4 + 0x24) = uVar13;
                dVar16 = (double)CONCAT44(*(u32 *)(pdStack_38 + 1), *(u32 *)(pdStack_38 + 3));
            } else {
                *(double *)((int)pdStack_38 + 4) = dVar16;
                *(double *)(iVar4 + 0x24) = dVar16;
                dVar16 = pdStack_38[1];
                in_xd2 = pdStack_38[3];
            }
            iVar4 = *piVar9;
            if (cVar22 == '\0') {
                dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0), SUB84(dVar16, 0));
            } else {
                dVar16 = dVar16 + dVar16;
            }
            uVar13 = (u32)((u64)dVar16 >> 0x20);
            if (cVar23 == '\0') {
                *(u32 *)(pdStack_38 + 1) = uVar13;
                *(u32 *)(iVar4 + 0x28) = uVar13;
            } else {
                pdStack_38[1] = dVar16;
                *(double *)(iVar4 + 0x28) = dVar16;
            }
            iVar4 = *piVar9;
            if (cVar23 == '\0') {
                dVar16 = (double)CONCAT44(*(u32 *)((int)pdStack_38 + 0xc), *(u32 *)((int)pdStack_38 + 0x1c));
            } else {
                dVar16 = *(double *)((int)pdStack_38 + 0xc);
                in_xd2 = *(double *)((int)pdStack_38 + 0x1c);
            }
            if (cVar22 == '\0') {
                in_dr2 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0), SUB84(dVar16, 0));
            } else {
                in_dr2 = dVar16 + dVar16;
            }
            uVar13 = (u32)((u64)in_dr2 >> 0x20);
            if (cVar23 == '\0') {
                *(u32 *)((int)pdStack_38 + 0xc) = uVar13;
                *(u32 *)(iVar4 + 0x2c) = uVar13;
            } else {
                *(double *)((int)pdStack_38 + 0xc) = in_dr2;
                *(double *)(iVar4 + 0x2c) = in_dr2;
            }
        }
        iVar8 = iVar8 + 1;
        pdStack_40 = pdStack_40 + 4;
        piVar11 = piVar11 + 1;
        pdStack_38 = pdStack_38 + 4;
    } while (iVar8 < 3);
    iVar8 = 0;
    iVar4 = 0;
    iVar10 = 2;
    do {
        iVar6 = iVar8;
        piVar11 = aiStack_28 + iVar6;
        iVar8 = iVar6 * 0x20;
        piVar9 = aiStack_28 + iVar10;
        if ((*(u32 *)*piVar9 & 1 ^ *(u32 *)*piVar11 & 1) == 1) {
            iVar5 = *piVar9;
            iVar3 = *piVar11;
            if (cVar23 == '\0') {
                dVar21 = (double)CONCAT44(*(u32 *)(iVar5 + 0x18), SUB84(in_dr4, 0));
                dVar17 = (double)CONCAT44(*(u32 *)(iVar3 + 0x18), g_8c4aa4d4);
                dVar16 = in_xd2;
            } else {
                dVar21 = *(double *)(iVar5 + 0x18);
                dVar16 = (double)CONCAT44(g_8c4aa4d8, g_8c4aa4d4);
                dVar17 = *(double *)(iVar3 + 0x18);
            }
            fVar20 = (float)((u64)dVar21 >> 0x20);
            if (cVar22 == '\0') {
                dVar21 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) - fVar20, SUB84(dVar17, 0) - fVar20);
            } else {
                dVar21 = (dVar17 - dVar21) - dVar21;
            }
            if (cVar23 == '\0') {
                uVar13 = SUB84(dVar21, 0);
                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(iVar3 + 0x10));
                in_xd2 = dVar16;
                dVar16 = (double)CONCAT44(uVar13, *(u32 *)(iVar5 + 0x10));
            } else {
                in_xd4 = *(double *)(iVar5 + 0x10);
                in_xd2 = *(double *)(iVar3 + 0x10);
            }
            if (cVar22 == '\0') {
                dVar16 =
                    (double)CONCAT44((float)((u64)dVar16 >> 0x20) / (float)((u64)dVar21 >> 0x20), SUB84(dVar16, 0));
            } else {
                dVar16 = dVar16 / dVar21;
            }
            fVar20 = SUB84(dVar16, 0);
            dVar17 = in_xd4;
            if (cVar23 == '\0') {
                dVar17 = (double)CONCAT44(fVar20, SUB84(in_dr6, 0));
            }
            in_dr6 = dVar17;
            if (cVar22 == '\0') {
                fVar14 = SUB84(dVar21, 0) - fVar20;
            } else {
                fVar14 = SUB84(dVar21 - dVar16, 0);
            }
            uVar13 = (u32)((u64)dVar16 >> 0x20);
            if (cVar23 == '\0') {
                fVar20 = *(float *)(iVar5 + 0x14);
                dVar21 = (double)CONCAT44(fVar20, fVar14);
                dVar16 = (double)CONCAT44(uVar13, SUB84(in_dr0, 0));
                in_dr0 = (double)CONCAT44(uVar13, fVar20);
            } else {
                dVar21 = *(double *)(iVar5 + 0x14);
                in_dr0 = dVar16;
                in_xd4 = dVar21;
            }
            fVar14 = (float)((u64)dVar16 >> 0x20);
            if (cVar22 == '\0') {
                in_dr6 = (double)CONCAT44(fVar14 * SUB84(dVar21, 0) + (float)((u64)in_dr6 >> 0x20), SUB84(in_dr6, 0));
            }
            if (cVar23 == '\0') {
                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)(iVar3 + 0x14));
            } else {
                in_xd2 = *(double *)(iVar3 + 0x14);
            }
            if (cVar22 == '\0') {
                fVar20 = SUB84(dVar21, 0) - fVar20;
                dVar21 = (double)CONCAT44(fVar14 * fVar20 + (float)((u64)dVar21 >> 0x20), fVar20);
            } else {
                dVar21 = dVar21 - in_dr0;
            }
            uVar19 = (u32)((u64)dVar21 >> 0x20);
            dVar17 = dVar21;
            if (cVar23 == '\0') {
                in_dr0 = (double)CONCAT44(uVar13, uVar19);
                dVar17 = in_xd4;
            }
            iVar3 = iVar4 * 0x20;
            if (cVar23 == '\0') {
                dVar21 = (double)CONCAT44(uVar19, g_8c4ab31c);
                dVar16 = (double)CONCAT44(g_8c4ab320, SUB84(dVar16, 0));
            } else {
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar16 = (double)CONCAT44(g_8c4ab324, g_8c4ab320);
            }
            if (cVar22 == '\0') {
                fVar20 = SUB84(dVar21, 0) * (float)((u64)dVar16 >> 0x20);
            } else {
                fVar20 = SUB84(dVar21 * dVar16, 0);
            }
            if (cVar23 == '\0') {
                uVar18 = CONCAT44(g_8c4aa4b4, fVar20);
                dVar16 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), SUB84(dVar16, 0));
            } else {
                uVar18 = CONCAT44(g_8c4aa4b8, g_8c4aa4b4);
                dVar16 = in_dr6;
            }
            iVar10 = iVar10 * 0x20;
            if (cVar22 == '\0') {
                uVar18 = CONCAT44((float)((u64)dVar16 >> 0x20) * (float)uVar18 + (float)((u64)uVar18 >> 0x20),
                                  (float)uVar18);
            }
            if (cVar23 == '\0') {
                *(int *)(&g_8c4c2524 + iVar3) = (int)((u64)uVar18 >> 0x20);
                dVar16 = (double)CONCAT44(g_8c4ab324, SUB84(dVar16, 0));
                dVar21 = (double)CONCAT44(g_8c4aa4b8, g_8c4ab31c);
            } else {
                *(u64 *)(&g_8c4c2524 + iVar3) = uVar18;
                in_xd2 = (double)CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar16 = (double)CONCAT44(g_8c4ab328, g_8c4ab324);
                dVar21 = (double)CONCAT44(g_8c4aa4bc, g_8c4aa4b8);
            }
            if (cVar22 == '\0') {
                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(dVar21, 0) * (float)((u64)dVar16 >> 0x20));
            } else {
                dVar21 = dVar21 * dVar16;
            }
            fVar20 = SUB84(in_dr0, 0);
            dVar12 = dVar17;
            if (cVar23 == '\0') {
                dVar12 = (double)CONCAT44(fVar20, SUB84(dVar16, 0));
            }
            if (cVar22 == '\0') {
                dVar21 = (double)CONCAT44(
                    (float)((u64)dVar12 >> 0x20) * SUB84(dVar21, 0) + (float)((u64)dVar21 >> 0x20), SUB84(dVar21, 0));
            }
            uVar13 = (u32)((u64)in_dr0 >> 0x20);
            if (cVar23 == '\0') {
                *(int *)(&g_8c4c2528 + iVar3) = (int)((u64)dVar21 >> 0x20);
                *(u32 *)(&g_8c4c252c + iVar3) = g_8c4ab31c;
                fVar20 = *(float *)(&g_8c4c2620 + iVar10);
                dVar16 = (double)CONCAT44(fVar20, *(u32 *)(&g_8c4c2620 + iVar8));
                in_dr0 = (double)CONCAT44(uVar13, SUB84(dVar12, 0));
                in_dr4 = (double)CONCAT44(uVar13, fVar20);
                in_xd4 = dVar17;
            } else {
                *(double *)(&g_8c4c2528 + iVar3) = dVar21;
                *(u64 *)(&g_8c4c252c + iVar3) = CONCAT44(g_8c4ab320, g_8c4ab31c);
                dVar16 = *(double *)(&g_8c4c2620 + iVar10);
                in_xd2 = *(double *)(&g_8c4c2620 + iVar8);
                in_dr4 = in_dr0;
                in_xd4 = dVar16;
            }
            fVar14 = (float)((u64)in_dr0 >> 0x20);
            if (cVar22 == '\0') {
                fVar20 = SUB84(dVar16, 0) - fVar20;
                dVar16 = (double)CONCAT44(fVar14 * fVar20 + (float)((u64)dVar16 >> 0x20), fVar20);
            } else {
                dVar16 = dVar16 - in_dr4;
            }
            uVar19 = (u32)((u64)dVar16 >> 0x20);
            if (cVar23 == '\0') {
                *(u32 *)(&g_8c4c2530 + iVar3) = uVar19;
                dVar16 = (double)CONCAT44(uVar19, *(u32 *)(&g_8c4c2624 + iVar8));
                in_dr4 = (double)CONCAT44(uVar13, *(u32 *)(&g_8c4c2624 + iVar10));
            } else {
                *(double *)(&g_8c4c2530 + iVar3) = dVar16;
                in_xd2 = *(double *)(&g_8c4c2624 + iVar8);
                in_xd4 = *(double *)(&g_8c4c2624 + iVar10);
            }
            if (cVar22 == '\0') {
                fVar20 = SUB84(dVar16, 0) - SUB84(in_dr4, 0);
            } else {
                fVar20 = SUB84(dVar16 - in_dr4, 0);
            }
            dVar16 = in_xd4;
            if (cVar23 == '\0') {
                dVar16 = (double)CONCAT44(SUB84(in_dr4, 0), fVar20);
            }
            if (cVar22 == '\0') {
                dVar16 = (double)CONCAT44(fVar14 * SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20), SUB84(dVar16, 0));
            }
            uVar13 = (u32)((u64)dVar16 >> 0x20);
            if (cVar23 == '\0') {
                *(u32 *)(iVar3 + 0x8c4c2534) = uVar13;
                dVar16 = (double)CONCAT44(uVar13, *(u32 *)(&g_8c4c2628 + iVar8));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(&g_8c4c2628 + iVar10));
            } else {
                *(double *)(iVar3 + 0x8c4c2534) = dVar16;
                in_xd2 = *(double *)(&g_8c4c2628 + iVar8);
                in_xd4 = *(double *)(&g_8c4c2628 + iVar10);
            }
            if (cVar22 == '\0') {
                fVar20 = SUB84(dVar16, 0) - SUB84(in_dr4, 0);
            } else {
                fVar20 = SUB84(dVar16 - in_dr4, 0);
            }
            dVar16 = in_xd4;
            if (cVar23 == '\0') {
                dVar16 = (double)CONCAT44(SUB84(in_dr4, 0), fVar20);
            }
            if (cVar22 == '\0') {
                dVar16 = (double)CONCAT44(fVar14 * SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20), SUB84(dVar16, 0));
            }
            uVar13 = (u32)((u64)dVar16 >> 0x20);
            if (cVar23 == '\0') {
                *(u32 *)(&uRam8c4c2538 + iVar4 * 4) = uVar13;
                dVar16 = (double)CONCAT44(uVar13, *(u32 *)(&g_8c4c262c + iVar8));
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), *(u32 *)(&g_8c4c262c + iVar10));
            } else {
                (&uRam8c4c2538)[iVar4 * 4] = dVar16;
                in_xd2 = *(double *)(&g_8c4c262c + iVar8);
                in_xd4 = *(double *)(&g_8c4c262c + iVar10);
            }
            if (cVar22 == '\0') {
                fVar20 = SUB84(dVar16, 0) - SUB84(in_dr4, 0);
            } else {
                fVar20 = SUB84(dVar16 - in_dr4, 0);
            }
            in_dr2 = in_xd4;
            if (cVar23 == '\0') {
                in_dr2 = (double)CONCAT44(SUB84(in_dr4, 0), fVar20);
            }
            if (cVar22 == '\0') {
                in_dr2 = (double)CONCAT44(fVar14 * SUB84(in_dr2, 0) + (float)((u64)in_dr2 >> 0x20), SUB84(in_dr2, 0));
            }
            iVar4 = iVar4 + 1;
            if (cVar23 == '\0') {
                *(int *)((int)&uRam8c4c2538 + iVar3 + 4) = (int)((u64)in_dr2 >> 0x20);
            } else {
                *(double *)((int)&uRam8c4c2538 + iVar3 + 4) = in_dr2;
            }
        }
        piVar11 = aiStack_28 + iVar6;
        iVar3 = iVar4;
        if ((*(u32 *)*piVar11 & 1) == 0) {
            if (cVar23 == '\0') {
                in_dr2 = (double)(u64) * (u32 *)(*piVar11 + 4);
            } else {
                in_xd2 = *(double *)(*piVar11 + 4);
            }
            iVar10 = iVar4 * 0x20;
            if (cVar23 == '\0') {
                *(int *)(&g_8c4c2524 + iVar10) = SUB84(in_dr2, 0);
            } else {
                *(double *)(&g_8c4c2524 + iVar10) = in_xd2;
            }
            if (cVar23 == '\0') {
                uVar15 = *(u32 *)(*piVar11 + 8);
                in_dr2 = (double)(u64)uVar15;
                *(u32 *)(&g_8c4c2528 + iVar10) = uVar15;
            } else {
                in_xd2 = *(double *)(*piVar11 + 8);
                *(double *)(&g_8c4c2528 + iVar10) = in_xd2;
            }
            iVar3 = iVar4 + 1;
            if (cVar23 == '\0') {
                *(u32 *)(&g_8c4c252c + iVar10) = *(u32 *)(*piVar11 + 0xc);
                *(u32 *)(&g_8c4c2530 + iVar10) = *(u32 *)(&g_8c4c2620 + iVar8);
                *(u32 *)(iVar10 + 0x8c4c2534) = *(u32 *)(&g_8c4c2624 + iVar8);
                *(u32 *)(&uRam8c4c2538 + iVar4 * 4) = *(u32 *)(&g_8c4c2628 + iVar8);
                in_dr2 = (double)(u64) * (u32 *)(&g_8c4c262c + iVar8);
                *(u32 *)((int)&uRam8c4c2538 + iVar10 + 4) = *(u32 *)(&g_8c4c262c + iVar8);
                iVar3 = iVar4 + 1;
            } else {
                *(u64 *)(&g_8c4c252c + iVar10) = *(u64 *)(*piVar11 + 0xc);
                *(u64 *)(&g_8c4c2530 + iVar10) = *(u64 *)(&g_8c4c2620 + iVar8);
                *(u64 *)(iVar10 + 0x8c4c2534) = *(u64 *)(&g_8c4c2624 + iVar8);
                (&uRam8c4c2538)[iVar4 * 4] = *(u64 *)(&g_8c4c2628 + iVar8);
                in_xd2 = *(double *)(&g_8c4c262c + iVar8);
                *(double *)((int)&uRam8c4c2538 + iVar10 + 4) = in_xd2;
            }
        }
        uVar18 = g_8c4c2530;
        uVar19 = g_8c4c2528;
        uVar13 = g_8c4c2524;
        iVar8 = iVar6 + 1;
        iVar4 = iVar3;
        iVar10 = iVar6;
    } while (iVar6 + 1 < 3);
    if (iVar3 == 3) {
        g_8c4c2520 = 0xe0000000;
        if (cVar23 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c252c;
            *(u32 *)(unaff_r8 + 3) = uVar19;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar13;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2524, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c252c, g_8c4c2528);
            unaff_r8[3] = uRam8c4c2538;
            unaff_r8[2] = uVar18;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        uVar18 = g_8c4c2550;
        uVar19 = g_8c4c2548;
        uVar13 = g_8c4c2544;
        g_8c4c2540 = 0xe0000000;
        if (cVar23 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c254c;
            *(u32 *)(unaff_r8 + 7) = uVar19;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar13;
            puVar7 = unaff_r8 + 6;
            *(u32 *)puVar7 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2544, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c254c, g_8c4c2548);
            unaff_r8[7] = uRam8c4c2558;
            unaff_r8[6] = uVar18;
            unaff_r8[5] = uVar2;
            puVar7 = unaff_r8 + 4;
            *puVar7 = uVar1;
        }
        uVar18 = g_8c4c2570;
        uVar19 = g_8c4c2568;
        uVar13 = g_8c4c2564;
        g_8c4c2560 = 0xf0000000;
        if (cVar23 == '\0') {
            *(u32 *)((int)puVar7 + 0x3c) = g_8c4c256c;
            *(u32 *)(puVar7 + 7) = uVar19;
            *(u32 *)((int)puVar7 + 0x34) = uVar13;
            *(u32 *)(puVar7 + 6) = 0xf0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2564, 0xf0000000);
            uVar2 = CONCAT44(g_8c4c256c, g_8c4c2568);
            puVar7[7] = uRam8c4c2578;
            puVar7[6] = uVar18;
            puVar7[5] = uVar2;
            puVar7[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 3;
    } else {
        g_8c4c2520 = 0xe0000000;
        if (cVar23 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x1c) = g_8c4c252c;
            *(u32 *)(unaff_r8 + 3) = uVar19;
            *(u32 *)((int)unaff_r8 + 0x14) = uVar13;
            unaff_r8 = unaff_r8 + 2;
            *(u32 *)unaff_r8 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2524, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c252c, g_8c4c2528);
            unaff_r8[3] = uRam8c4c2538;
            unaff_r8[2] = uVar18;
            unaff_r8[1] = uVar2;
            *unaff_r8 = uVar1;
        }
        uVar18 = g_8c4c2550;
        uVar19 = g_8c4c2548;
        uVar13 = g_8c4c2544;
        g_8c4c2540 = 0xe0000000;
        if (cVar23 == '\0') {
            *(u32 *)((int)unaff_r8 + 0x3c) = g_8c4c254c;
            *(u32 *)(unaff_r8 + 7) = uVar19;
            *(u32 *)((int)unaff_r8 + 0x34) = uVar13;
            puVar7 = unaff_r8 + 6;
            *(u32 *)puVar7 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2544, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c254c, g_8c4c2548);
            unaff_r8[7] = uRam8c4c2558;
            unaff_r8[6] = uVar18;
            unaff_r8[5] = uVar2;
            puVar7 = unaff_r8 + 4;
            *puVar7 = uVar1;
        }
        uVar18 = g_8c4c2590;
        uVar19 = g_8c4c2588;
        uVar13 = g_8c4c2584;
        g_8c4c2580 = 0xe0000000;
        if (cVar23 == '\0') {
            *(u32 *)((int)puVar7 + 0x3c) = g_8c4c258c;
            *(u32 *)(puVar7 + 7) = uVar19;
            *(u32 *)((int)puVar7 + 0x34) = uVar13;
            puVar7 = puVar7 + 6;
            *(u32 *)puVar7 = 0xe0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2584, 0xe0000000);
            uVar2 = CONCAT44(g_8c4c258c, g_8c4c2588);
            puVar7[7] = uRam8c4c2598;
            puVar7[6] = uVar18;
            puVar7[5] = uVar2;
            puVar7 = puVar7 + 4;
            *puVar7 = uVar1;
        }
        uVar18 = g_8c4c2570;
        uVar19 = g_8c4c2568;
        uVar13 = g_8c4c2564;
        g_8c4c2560 = 0xf0000000;
        if (cVar23 == '\0') {
            *(u32 *)((int)puVar7 + 0x3c) = g_8c4c256c;
            *(u32 *)(puVar7 + 7) = uVar19;
            *(u32 *)((int)puVar7 + 0x34) = uVar13;
            *(u32 *)(puVar7 + 6) = 0xf0000000;
        } else {
            uVar1 = CONCAT44(g_8c4c2564, 0xf0000000);
            uVar2 = CONCAT44(g_8c4c256c, g_8c4c2568);
            puVar7[7] = uRam8c4c2578;
            puVar7[6] = uVar18;
            puVar7[5] = uVar2;
            puVar7[4] = uVar1;
        }
        g_8c4aa520 = g_8c4aa520 + 4;
    }
    return iVar3;
}

/*
 * gfxlib_fill_loop_23eb44  0x8c23eb44
 * area name: in the gfxlib library code range; behaviour name: a loop that writes memory
 * called by: gfxlib_calls_fill_loop_252e7c, gfxlib_uses_noop_246f1a
 */
int gfxlib_fill_loop_23eb44(int a0, u32 a1, u32 a2) {
    int iVar1;
    double *pdVar2;
    u64 *puVar3;
    int iVar4;
    double *pdVar5;
    u64 *puVar6;
    int iVar7;
    u64 *unaff_r8;
    u64 *puVar8;
    int iVar9;
    int *piVar10;
    int iVar11;
    int iVar12;
    double in_dr0;
    float fVar14;
    u32 uVar16;
    double dVar17;
    double in_dr4;
    double dVar20;
    float fVar23;
    double dVar21;
    double in_dr6;
    float fVar25;
    double in_xd2;
    double in_xd4;
    double dVar26;
    int aiStack_24[3];
    u32 uVar15;
    u32 uVar19;
    u32 uVar24;

    iVar4 = 0x8c4c11a0;
    puVar3 = 0x8c4c2520;
    pdVar2 = 0x8c4ab31c;
    iVar1 = 0x8c4aa4a8;
    aiStack_24[0] = a0;
    iVar11 = 0;
    aiStack_24[1] = a1;
    aiStack_24[2] = a2;
    iVar7 = 2;
    iVar12 = 0;
    do {
        pdVar5 = 0x8c4ab324;
        iVar9 = iVar11;
        if ((*(u32 *)aiStack_24[iVar7] & 1 ^ *(u32 *)aiStack_24[iVar12] & 1) == 1) {
            iVar9 = aiStack_24[iVar7];
            iVar7 = aiStack_24[iVar12];

            dVar20 = (double)CONCAT44(*(u32 *)(iVar9 + 0x18), SUB84(in_dr4, 0));
            dVar17 = (double)CONCAT44(*(u32 *)(iVar7 + 0x18), *(u32 *)0x8c4aa4d4);

            fVar23 = (float)((u64)dVar20 >> 0x20);

            dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) - fVar23);

            dVar20 = (double)CONCAT44(fVar23, *(u32 *)(iVar9 + 0x10));
            dVar26 = in_xd4;

            dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) - (float)((u64)dVar20 >> 0x20), SUB84(dVar17, 0));

            dVar21 = in_xd2;

            dVar21 = (double)CONCAT44(SUB84(dVar17, 0), SUB84(dVar20, 0));

            dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) / (float)((u64)dVar17 >> 0x20), SUB84(dVar21, 0));

            fVar23 = SUB84(dVar21, 0);

            dVar20 = (double)CONCAT44(fVar23, *(u32 *)(iVar7 + 0x10));

            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - fVar23);

            in_dr6 = (double)CONCAT44(*(u32 *)(iVar9 + 0x14), SUB84(in_dr6, 0));
            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), SUB84(in_dr0, 0));

            fVar14 = (float)((u64)dVar21 >> 0x20);

            dVar20 = (double)CONCAT44(fVar14 * SUB84(dVar20, 0) + (float)((u64)dVar20 >> 0x20), SUB84(dVar20, 0));

            fVar25 = (float)((u64)in_dr6 >> 0x20);

            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), *(u32 *)(iVar7 + 0x14));
            in_dr4 = (double)CONCAT44(fVar25, fVar23);

            dVar20 = (double)CONCAT44((int)((u64)dVar20 >> 0x20), SUB84(dVar20, 0) - fVar25);

            in_xd4 = dVar20;

            in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), (int)((u64)dVar20 >> 0x20));
            in_xd4 = dVar26;

            in_dr4 = (double)CONCAT44(fVar14 * SUB84(dVar20, 0) + (float)((u64)in_dr4 >> 0x20), SUB84(in_dr4, 0));

            dVar20 = (double)CONCAT44(*(u32 *)0x8c4ab320, SUB84(dVar21, 0));
            dVar17 = (double)CONCAT44(*(u32 *)(iVar1 + 0xc), *(u32 *)pdVar2);

            dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) * (float)((u64)dVar20 >> 0x20));

            dVar26 = in_xd4;

            dVar26 = (double)CONCAT44(SUB84(in_dr4, 0), SUB84(dVar20, 0));

            dVar17 = (double)CONCAT44((float)((u64)dVar26 >> 0x20) * SUB84(dVar17, 0) + (float)((u64)dVar17 >> 0x20),
                                      SUB84(dVar17, 0));

            *(int *)((int)puVar3 + iVar11 * 0x20 + 4) = (int)((u64)dVar17 >> 0x20);
            dVar20 = (double)CONCAT44(*(u32 *)pdVar5, SUB84(dVar26, 0));
            dVar17 = (double)CONCAT44(*(u32 *)(iVar1 + 0x10), *(u32 *)pdVar2);

            dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) * (float)((u64)dVar20 >> 0x20));

            in_dr0 = in_dr4;

            in_dr0 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), SUB84(dVar20, 0));

            dVar17 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) * SUB84(dVar17, 0) + (float)((u64)dVar17 >> 0x20),
                                      SUB84(dVar17, 0));

            iVar9 = iVar11 + 1;

            *(int *)(puVar3 + iVar11 * 4 + 1) = (int)((u64)dVar17 >> 0x20);
            *(u32 *)((int)puVar3 + iVar11 * 0x20 + 0xc) = *(u32 *)pdVar2;
            *(u32 *)(puVar3 + iVar11 * 4 + 2) = *(u32 *)(iVar4 + 0x10);
            *(u32 *)((int)puVar3 + iVar11 * 0x20 + 0x14) = *(u32 *)(iVar4 + 0x14);
            *(u32 *)(puVar3 + iVar11 * 4 + 3) = *(u32 *)(iVar4 + 0x18);
            *(u32 *)((int)puVar3 + iVar11 * 0x20 + 0x1c) = *(u32 *)(iVar4 + 0x1c);
            iVar9 = iVar11 + 1;
        }
        piVar10 = aiStack_24 + iVar12;
        iVar11 = iVar9;
        if ((*(u32 *)*piVar10 & 1) == 0) {

            *(u32 *)((int)puVar3 + iVar9 * 0x20 + 4) = *(u32 *)(*piVar10 + 4);

            iVar11 = iVar9 + 1;

            *(u32 *)(puVar3 + iVar9 * 4 + 1) = *(u32 *)(*piVar10 + 8);

            *(u32 *)((int)puVar3 + iVar9 * 0x20 + 0xc) = *(u32 *)(*piVar10 + 0xc);
            *(u32 *)(puVar3 + iVar9 * 4 + 2) = *(u32 *)(iVar4 + 0x10);
            *(u32 *)((int)puVar3 + iVar9 * 0x20 + 0x14) = *(u32 *)(iVar4 + 0x14);
            *(u32 *)(puVar3 + iVar9 * 4 + 3) = *(u32 *)(iVar4 + 0x18);
            *(u32 *)((int)puVar3 + iVar9 * 0x20 + 0x1c) = *(u32 *)(iVar4 + 0x1c);
        }
        uVar16 = 0xe0000000;
        piVar10 = 0x8c4aa520;
        iVar9 = iVar12 + 1;
        iVar7 = iVar12;
        iVar12 = iVar9;
    } while (iVar9 < 3);
    if (iVar11 == 3) {
        *(u32 *)puVar3 = 0xe0000000;

        uVar15 = *(u32 *)puVar3;
        uVar19 = *(u32 *)((int)puVar3 + 4);
        uVar24 = *(u32 *)(puVar3 + 1);
        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)puVar3 + 0xc);
        *(u32 *)(unaff_r8 + 3) = uVar24;
        *(u32 *)((int)unaff_r8 + 0x14) = uVar19;
        unaff_r8 = unaff_r8 + 2;
        *(u32 *)unaff_r8 = uVar15;

        puVar8 = puVar3 + 4;
        *(u32 *)puVar8 = uVar16;

        uVar16 = *(u32 *)puVar8;
        uVar15 = *(u32 *)((int)puVar3 + 0x24);
        uVar19 = *(u32 *)(puVar3 + 5);
        *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)puVar3 + 0x2c);
        *(u32 *)(unaff_r8 + 7) = uVar19;
        *(u32 *)((int)unaff_r8 + 0x34) = uVar15;
        puVar8 = unaff_r8 + 6;
        *(u32 *)puVar8 = uVar16;

        puVar6 = puVar3 + 8;
        *(u32 *)puVar6 = 0xf0000000;

        uVar16 = *(u32 *)puVar6;
        uVar15 = *(u32 *)((int)puVar3 + 0x44);
        uVar19 = *(u32 *)(puVar3 + 9);
        *(u32 *)((int)puVar8 + 0x3c) = *(u32 *)((int)puVar3 + 0x4c);
        *(u32 *)(puVar8 + 7) = uVar19;
        *(u32 *)((int)puVar8 + 0x34) = uVar15;
        *(u32 *)(puVar8 + 6) = uVar16;

        *piVar10 = *piVar10 + 3;
    } else {
        *(u32 *)puVar3 = 0xe0000000;

        uVar15 = *(u32 *)puVar3;
        uVar19 = *(u32 *)((int)puVar3 + 4);
        uVar24 = *(u32 *)(puVar3 + 1);
        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)puVar3 + 0xc);
        *(u32 *)(unaff_r8 + 3) = uVar24;
        *(u32 *)((int)unaff_r8 + 0x14) = uVar19;
        unaff_r8 = unaff_r8 + 2;
        *(u32 *)unaff_r8 = uVar15;

        puVar8 = puVar3 + 4;
        *(u32 *)puVar8 = uVar16;

        uVar15 = *(u32 *)puVar8;
        uVar19 = *(u32 *)((int)puVar3 + 0x24);
        uVar24 = *(u32 *)(puVar3 + 5);
        *(u32 *)((int)unaff_r8 + 0x3c) = *(u32 *)((int)puVar3 + 0x2c);
        *(u32 *)(unaff_r8 + 7) = uVar24;
        *(u32 *)((int)unaff_r8 + 0x34) = uVar19;
        puVar8 = unaff_r8 + 6;
        *(u32 *)puVar8 = uVar15;

        puVar6 = puVar3 + 0xc;
        *(u32 *)puVar6 = uVar16;

        uVar16 = *(u32 *)puVar6;
        uVar15 = *(u32 *)((int)puVar3 + 100);
        uVar19 = *(u32 *)(puVar3 + 0xd);
        *(u32 *)((int)puVar8 + 0x3c) = *(u32 *)((int)puVar3 + 0x6c);
        *(u32 *)(puVar8 + 7) = uVar19;
        *(u32 *)((int)puVar8 + 0x34) = uVar15;
        puVar8 = puVar8 + 6;
        *(u32 *)puVar8 = uVar16;

        puVar6 = puVar3 + 8;
        *(u32 *)puVar6 = 0xf0000000;

        uVar16 = *(u32 *)puVar6;
        uVar15 = *(u32 *)((int)puVar3 + 0x44);
        uVar19 = *(u32 *)(puVar3 + 9);
        *(u32 *)((int)puVar8 + 0x3c) = *(u32 *)((int)puVar3 + 0x4c);
        *(u32 *)(puVar8 + 7) = uVar19;
        *(u32 *)((int)puVar8 + 0x34) = uVar15;
        *(u32 *)(puVar8 + 6) = uVar16;

        *piVar10 = *piVar10 + 4;
    }
    return iVar11;
}

/*
 * gfxlib_uses_noop_23eda6  0x8c23eda6
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_23d694
 */
int gfxlib_uses_noop_23eda6(int a0, u32 a1) {
    int iVar1;
    int iVar2;
    double *pdVar3;
    double *pdVar4;
    double *pdVar5;
    u64 *unaff_r8;
    u32 uVar6;
    int iVar7;
    u16 *puVar8;
    u16 *puVar9;
    u64 *puVar10;
    u64 *puVar11;
    u64 uVar12;
    u64 uVar13;
    float fVar17;
    double dVar14;
    double dVar15;
    double dVar16;
    u64 uVar18;
    u32 uVar19;
    u64 in_dr6;
    u64 uVar20;
    float in_fr15;
    u32 in_fr14;
    double in_xd2;
    bool bVar21;
    char cVar22;
    char cVar23;
    int iVar24;
    u32 uStack_24;

    cVar23 = '\0';
    cVar22 = '\0';
    noop_23d694();
    iVar1 = g_8c4aa510;
    puVar8 = *(u16 **)(a0 + 4);
    uStack_24 = (u32) * (u16 *)(a0 + 2);
    iVar24 = 0;
    do {
        iVar24 = iVar24 + (*puVar8 & 0x7fff);
        iVar7 = (*puVar8 & 0x7fff) - 1;
        puVar9 = puVar8 + 1;
        do {
            puVar8 = puVar9;
            puVar9 = puVar8 + 1;
            puVar10 = (u64 *)((u32)*puVar8 * 0x40 + iVar1);
            iVar2 = (u32)*puVar9 * 0x40 + iVar1 + 0x20;
            if (cVar23 == '\0') {
                uVar12 = CONCAT44(*(u32 *)(puVar10 + 2), *(u32 *)((int)puVar10 + 0x14));
                uVar13 = (u64) * (u32 *)(puVar10 + 3) << 0x20;
                uVar18 = CONCAT44(*(u32 *)(puVar10 + 6), *(u32 *)((int)puVar10 + 0x34));
                uVar20 = CONCAT44(*(u32 *)(puVar10 + 7), (int)in_dr6);
            } else {
                uVar12 = puVar10[2];
                uVar13 = puVar10[4];
                uVar18 = puVar10[6];
                uVar20 = puVar10[8];
            }
            uVar13 = uVar13 & 0xffffffff00000000;
            if (cVar22 == '\0') {
                fVar17 = (float)uVar12 * (float)uVar18 + (float)((u64)uVar12 >> 0x20) * (float)((u64)uVar18 >> 0x20) +
                         (float)uVar20 * 0.0 + (float)(uVar13 >> 0x20) * (float)((u64)uVar20 >> 0x20);
            }
            dVar14 = in_xd2;
            if (cVar23 == '\0') {
                in_fr15 = (float)uVar13;
                dVar14 = (double)CONCAT44(in_fr15, (float)uVar12);
            }
            uVar19 = SUB84(dVar14, 0);
            dVar14 = (double)(uVar13 & 0xffffffff00000000);
            if (cVar22 == '\0') {
                bVar21 = 0.0 < in_fr15;
            } else {
                bVar21 = dVar14 < (double)CONCAT44(in_fr14, in_fr15);
            }
            uVar6 = 0x8000;
            if (!bVar21) {
                uVar6 = 0;
            }
            *(u32 *)puVar10 = 0xe0000000;
            CacheBlockWriteBack(puVar10);
            if (*(u32 *)((int)puVar10 + 0x3c) != (uVar6 | a1)) {
                *(u32 *)((int)puVar10 + 0x3c) = uVar6 | a1;
                iVar2 = gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar10 + 2, puVar10 + 6, uVar6);
                if (cVar23 == '\0') {
                    *(u32 *)(puVar10 + 4) = g_8c4c2620;
                    pdVar4 = (double *)&g_8c4c2638;
                    pdVar3 = (double *)&g_8c4c2628;
                    dVar14 = (double)CONCAT44(g_8c4c2624, g_8c4c2634);
                } else {
                    puVar10[4] = CONCAT44(g_8c4c2624, g_8c4c2620);
                    in_xd2 = (double)CONCAT44(g_8c4c2638, g_8c4c2634);
                    pdVar4 = (double *)&g_8c4c263c;
                    pdVar3 = (double *)&g_8c4c2630;
                    dVar14 = g_8c4c2628;
                }
                if (cVar22 == '\0') {
                    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) + SUB84(dVar14, 0), SUB84(dVar14, 0));
                } else {
                    dVar14 = dVar14 + dVar14;
                }
                if (cVar23 == '\0') {
                    *(int *)((int)puVar10 + 0x24) = (int)((u64)dVar14 >> 0x20);
                    pdVar5 = (double *)((int)pdVar4 + 4);
                    dVar14 = (double)CONCAT44(*(u32 *)pdVar3, *(u32 *)pdVar4);
                    pdVar3 = (double *)((int)pdVar3 + 4);
                } else {
                    *(double *)((int)puVar10 + 0x24) = dVar14;
                    in_xd2 = *pdVar4;
                    pdVar5 = pdVar4 + 1;
                    dVar14 = *pdVar3;
                    pdVar3 = pdVar3 + 1;
                }
                if (cVar22 == '\0') {
                    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) + SUB84(dVar14, 0), SUB84(dVar14, 0));
                } else {
                    dVar14 = dVar14 + dVar14;
                }
                if (cVar23 == '\0') {
                    *(int *)(puVar10 + 5) = (int)((u64)dVar14 >> 0x20);
                    dVar14 = (double)CONCAT44(*(u32 *)pdVar3, *(u32 *)pdVar5);
                } else {
                    puVar10[5] = dVar14;
                    dVar14 = *pdVar3;
                    in_xd2 = *pdVar5;
                }
                pdVar4 = (double *)((int)puVar10 + 0x2c);
                if (cVar22 == '\0') {
                    dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) + SUB84(dVar14, 0), SUB84(dVar14, 0));
                } else {
                    dVar14 = dVar14 + dVar14;
                }
                if (cVar23 == '\0') {
                    *(int *)pdVar4 = (int)((u64)dVar14 >> 0x20);
                } else {
                    *pdVar4 = dVar14;
                }
                CacheBlockWriteBack(pdVar4);
            }
            if (cVar23 == '\0') {
                uVar12 = CONCAT44(*(u32 *)puVar10, uVar19);
                uVar18 = CONCAT44(*(u32 *)((int)puVar10 + 4), SUB84(dVar14, 0));
                puVar10 = puVar10 + 1;
            } else {
                uVar12 = *puVar10;
                uVar18 = puVar10[1];
                puVar10 = puVar10 + 2;
            }
            if (cVar23 == '\0') {
                uVar19 = *(u32 *)(puVar10 + 2);
                in_dr6 = CONCAT44(*(u32 *)((int)puVar10 + 0x14), (int)uVar20);
                *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)puVar10 + 0x14);
                *(u32 *)(unaff_r8 + 3) = uVar19;
                *(int *)((int)unaff_r8 + 0x14) = (int)((u64)uVar18 >> 0x20);
                *(int *)(unaff_r8 + 2) = (int)((u64)uVar12 >> 0x20);
                puVar10 = unaff_r8 + 2;
            } else {
                uVar20 = puVar10[2];
                in_dr6 = puVar10[3];
                unaff_r8[3] = in_dr6;
                unaff_r8[2] = uVar20;
                unaff_r8[1] = uVar18;
                *unaff_r8 = uVar12;
                puVar10 = unaff_r8;
            }
            unaff_r8 = puVar10 + 4;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        puVar8 = puVar8 + 2;
        puVar11 = (u64 *)((u32)*puVar9 * 0x40 + iVar1);
        if (cVar23 == '\0') {
            uVar12 = CONCAT44(*(u32 *)(puVar11 + 2), *(u32 *)((int)puVar11 + 0x14));
            uVar13 = (u64) * (u32 *)(puVar11 + 3) << 0x20;
            uVar18 = CONCAT44(*(u32 *)(puVar11 + 6), *(u32 *)((int)puVar11 + 0x34));
            uVar20 = CONCAT44(*(u32 *)(puVar11 + 7), (int)in_dr6);
        } else {
            uVar12 = puVar11[2];
            uVar13 = puVar11[4];
            uVar18 = puVar11[6];
            uVar20 = puVar11[8];
        }
        uVar13 = uVar13 & 0xffffffff00000000;
        if (cVar22 == '\0') {
            fVar17 = (float)uVar12 * (float)uVar18 + (float)((u64)uVar12 >> 0x20) * (float)((u64)uVar18 >> 0x20) +
                     (float)uVar20 * 0.0 + (float)(uVar13 >> 0x20) * (float)((u64)uVar20 >> 0x20);
        }
        dVar14 = in_xd2;
        if (cVar23 == '\0') {
            dVar14 = (double)CONCAT44((int)uVar13, (float)uVar12);
        }
        dVar16 = (double)(uVar13 & 0xffffffff00000000);
        dVar15 = dVar14;
        if (cVar23 == '\0') {
            dVar15 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), (float)uVar18);
        }
        if (cVar22 == '\0') {
            bVar21 = 0.0 < (float)((u64)dVar15 >> 0x20);
        } else {
            bVar21 = dVar16 < dVar15;
        }
        uVar6 = 0x8000;
        if (!bVar21) {
            uVar6 = 0;
        }
        *(u32 *)puVar11 = 0xf0000000;
        CacheBlockWriteBack(puVar11);
        if (*(u32 *)((int)puVar11 + 0x3c) != (uVar6 | a1)) {
            *(u32 *)((int)puVar11 + 0x3c) = uVar6 | a1;
            iVar2 = gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar11 + 2, puVar11 + 6, uVar6);
            if (cVar23 == '\0') {
                *(u32 *)(puVar11 + 4) = g_8c4c2620;
                pdVar4 = (double *)&g_8c4c2628;
                pdVar3 = (double *)&g_8c4c2638;
                dVar15 = (double)CONCAT44(g_8c4c2624, g_8c4c2634);
            } else {
                puVar11[4] = CONCAT44(g_8c4c2624, g_8c4c2620);
                pdVar4 = (double *)&g_8c4c2630;
                in_xd2 = (double)CONCAT44(g_8c4c2638, g_8c4c2634);
                pdVar3 = (double *)&g_8c4c263c;
                dVar15 = g_8c4c2628;
            }
            if (cVar22 == '\0') {
                dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) + SUB84(dVar15, 0), SUB84(dVar15, 0));
            } else {
                dVar15 = dVar15 + dVar15;
            }
            if (cVar23 == '\0') {
                *(int *)((int)puVar11 + 0x24) = (int)((u64)dVar15 >> 0x20);
                pdVar5 = (double *)((int)pdVar4 + 4);
                dVar15 = (double)CONCAT44(*(u32 *)pdVar4, *(u32 *)pdVar3);
                pdVar3 = (double *)((int)pdVar3 + 4);
            } else {
                *(double *)((int)puVar11 + 0x24) = dVar15;
                dVar15 = *pdVar4;
                pdVar5 = pdVar4 + 1;
                in_xd2 = *pdVar3;
                pdVar3 = pdVar3 + 1;
            }
            if (cVar22 == '\0') {
                dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) + SUB84(dVar15, 0), SUB84(dVar15, 0));
            } else {
                dVar15 = dVar15 + dVar15;
            }
            if (cVar23 == '\0') {
                *(int *)(puVar11 + 5) = (int)((u64)dVar15 >> 0x20);
                dVar16 = (double)CONCAT44(*(u32 *)pdVar5, *(u32 *)pdVar3);
            } else {
                puVar11[5] = dVar15;
                dVar16 = *pdVar5;
                in_xd2 = *pdVar3;
            }
            pdVar4 = (double *)((int)puVar11 + 0x2c);
            if (cVar22 == '\0') {
                dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + SUB84(dVar16, 0), SUB84(dVar16, 0));
            } else {
                dVar16 = dVar16 + dVar16;
            }
            if (cVar23 == '\0') {
                *(int *)pdVar4 = (int)((u64)dVar16 >> 0x20);
            } else {
                *pdVar4 = dVar16;
            }
            CacheBlockWriteBack(pdVar4);
        }
        if (cVar23 == '\0') {
            uVar12 = CONCAT44(*(u32 *)puVar11, SUB84(dVar14, 0));
            uVar18 = CONCAT44(*(u32 *)((int)puVar11 + 4), SUB84(dVar16, 0));
            puVar11 = puVar11 + 1;
        } else {
            uVar12 = *puVar11;
            uVar18 = puVar11[1];
            puVar11 = puVar11 + 2;
        }
        if (cVar23 == '\0') {
            uVar19 = *(u32 *)(puVar11 + 2);
            in_dr6 = CONCAT44(*(u32 *)((int)puVar11 + 0x14), (int)uVar20);
            *(u32 *)((int)puVar10 + 0x3c) = *(u32 *)((int)puVar11 + 0x14);
            *(u32 *)(puVar10 + 7) = uVar19;
            *(int *)((int)puVar10 + 0x34) = (int)((u64)uVar18 >> 0x20);
            puVar10 = puVar10 + 6;
            *(int *)puVar10 = (int)((u64)uVar12 >> 0x20);
        } else {
            uVar20 = puVar11[2];
            in_dr6 = puVar11[3];
            puVar10[7] = in_dr6;
            puVar10[6] = uVar20;
            puVar10[5] = uVar18;
            puVar10 = puVar10 + 4;
            *puVar10 = uVar12;
        }
        unaff_r8 = puVar10 + 4;
        uStack_24 = uStack_24 - 1;
    } while (uStack_24 != 0);
    g_8c4aa51c = g_8c4aa51c + iVar24;
    g_8c4aa520 = g_8c4aa520 + iVar24;
    return iVar2;
}

/*
 * gfxlib_uses_noop_23efac  0x8c23efac
 * area name: in the gfxlib library code range; behaviour name: its main named callee is noop_23d694
 */
u32 gfxlib_uses_noop_23efac(int a0, int a1) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    double *pdVar6;
    double *pdVar7;
    double *pdVar8;
    double *unaff_r8;
    double *pdVar9;
    double *pdVar10;
    double *pdVar11;
    double *pdVar12;
    u16 *puVar13;
    u16 *puVar14;
    u16 *puVar15;
    double in_dr0;
    float fVar16;
    double dVar17;
    float fVar18;
    double in_dr4;
    double dVar19;
    u32 uVar20;
    float in_fr13;
    u32 in_fr12;
    double in_dr14;
    double dVar21;
    double in_xd2;
    double in_xd12;
    bool bVar22;
    char cVar23;
    char cVar24;
    u32 uStack_3c;
    int iStack_30;
    u32 uStack_2c;

    cVar24 = '\0';
    cVar23 = '\0';
    noop_23d694();
    iVar2 = g_8c4aa510;
    puVar13 = *(u16 **)(a0 + 4);
    uStack_2c = (u32) * (u16 *)(a0 + 2);
    uStack_3c = 0;
    iStack_30 = 0;
    do {
        uVar3 = SUB84(in_dr14, 0);
        puVar14 = puVar13 + 1;
        uVar5 = (u32)*puVar13;
        if (cVar24 == '\0') {
            uVar3 = 0x3f800000;
        }
        if ((*puVar13 & 0x8000) != 0) {
            uVar5 = uVar5 & 0x7fff;
            if (cVar23 == '\0') {
                uVar20 = 0xbf800000;
            } else {
                uVar20 = (u32)((u64) - (double)CONCAT44(0x3f800000, SUB84(in_dr4, 0)) >> 0x20);
            }
            if (cVar24 == '\0') {
                uVar3 = uVar20;
            }
        }
        iStack_30 = iStack_30 + uVar5;
        iVar4 = uVar5 - 2;
        puVar15 = puVar13 + 2;
        puVar13 = puVar13 + 3;
        pdVar9 = (double *)((u32)*puVar14 * 0x40 + iVar2);
        if (cVar24 == '\0') {
            in_dr4 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), *(u32 *)(pdVar9 + 1));
        } else {
            in_dr4 = *(double *)((int)pdVar9 + 4);
        }
        pdVar10 = (double *)((u32)*puVar15 * 0x40 + iVar2);
        pdVar11 = unaff_r8;
        if (cVar24 == '\0') {
            in_fr13 = *(float *)((int)pdVar10 + 4);
            in_dr14 = (double)CONCAT44(*(u32 *)(pdVar10 + 1), uVar3);
            dVar21 = in_xd12;
        } else {
            in_dr14 = pdVar10[1];
            dVar21 = *(double *)((int)pdVar10 + 4);
        }
        do {
            uVar1 = *puVar13;
            puVar13 = puVar13 + 1;
            pdVar12 = (double *)((u32)uVar1 * 0x40 + iVar2);
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44(*(u32 *)(pdVar12 + 1), in_fr13);
            } else {
                dVar17 = pdVar12[1];
                in_xd2 = dVar21;
            }
            if (cVar23 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), SUB84(dVar17, 0) - (float)((u64)in_dr4 >> 0x20));
            } else {
                dVar17 = dVar17 - in_dr4;
            }
            fVar18 = (float)((u64)in_dr14 >> 0x20);
            if (cVar23 == '\0') {
                dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) - fVar18, SUB84(dVar17, 0));
            } else {
                dVar17 = dVar17 - in_dr14;
            }
            if (cVar24 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)pdVar12 + 4));
            }
            if (cVar23 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - in_fr13);
                fVar16 = SUB84(dVar17, 0) * (float)((u64)dVar17 >> 0x20);
            } else {
                in_dr0 = in_dr0 - (double)CONCAT44(in_fr12, in_fr13);
                fVar16 = SUB84(dVar17 * dVar17, 0);
            }
            dVar17 = in_dr14;
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44(fVar18, fVar16);
            }
            if (cVar23 == '\0') {
                fVar18 = ((float)((u64)dVar17 >> 0x20) - SUB84(in_dr4, 0)) * SUB84(in_dr0, 0);
                dVar17 = (double)CONCAT44(fVar18, SUB84(dVar17, 0) - fVar18);
            } else {
                dVar17 = (dVar17 - in_dr4) * in_dr0;
                dVar17 = dVar17 - dVar17;
            }
            dVar19 = in_xd2;
            if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44(SUB84(dVar17, 0), SUB84(in_dr4, 0));
            }
            if (cVar23 == '\0') {
                dVar19 = (double)CONCAT44((float)((u64)dVar19 >> 0x20) * SUB84(in_dr14, 0), SUB84(dVar19, 0));
            } else {
                dVar19 = dVar19 * in_dr14;
            }
            uVar5 = (u32)((u64)dVar17 >> 0x20);
            fVar18 = (float)((u64)dVar19 >> 0x20);
            if (pdVar11 < unaff_r8) {
                dVar17 = (double)((u64)uVar5 << 0x20);
                if (cVar23 == '\0') {
                    bVar22 = fVar18 < 0.0;
                } else {
                    bVar22 = dVar19 < dVar17;
                }
                if (bVar22) {
                    *(u32 *)pdVar10 = 0xe0000000;
                    CacheBlockWriteBack(pdVar10);
                    if (*(int *)((int)pdVar10 + 0x3c) != a1) {
                        *(int *)((int)pdVar10 + 0x3c) = a1;
                        gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar10 + 2, pdVar10 + 6, 0);
                        if (cVar24 == '\0') {
                            *(u32 *)(pdVar10 + 4) = g_8c4c2620;
                            pdVar9 = (double *)&g_8c4c2638;
                            pdVar8 = (double *)&g_8c4c2628;
                            dVar17 = (double)CONCAT44(g_8c4c2624, g_8c4c2634);
                        } else {
                            pdVar10[4] = (double)CONCAT44(g_8c4c2624, g_8c4c2620);
                            in_xd2 = (double)CONCAT44(g_8c4c2638, g_8c4c2634);
                            pdVar9 = (double *)&g_8c4c263c;
                            pdVar8 = (double *)&g_8c4c2630;
                            dVar17 = g_8c4c2628;
                        }
                        if (cVar23 == '\0') {
                            dVar17 =
                                (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                        } else {
                            dVar17 = dVar17 + dVar17;
                        }
                        if (cVar24 == '\0') {
                            *(int *)((int)pdVar10 + 0x24) = (int)((u64)dVar17 >> 0x20);
                            pdVar6 = (double *)((int)pdVar9 + 4);
                            dVar17 = (double)CONCAT44(*(u32 *)pdVar8, *(u32 *)pdVar9);
                            pdVar8 = (double *)((int)pdVar8 + 4);
                        } else {
                            *(double *)((int)pdVar10 + 0x24) = dVar17;
                            in_xd2 = *pdVar9;
                            pdVar6 = pdVar9 + 1;
                            dVar17 = *pdVar8;
                            pdVar8 = pdVar8 + 1;
                        }
                        if (cVar23 == '\0') {
                            dVar17 =
                                (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                        } else {
                            dVar17 = dVar17 + dVar17;
                        }
                        if (cVar24 == '\0') {
                            *(int *)(pdVar10 + 5) = (int)((u64)dVar17 >> 0x20);
                            dVar17 = (double)CONCAT44(*(u32 *)pdVar8, *(u32 *)pdVar6);
                        } else {
                            pdVar10[5] = dVar17;
                            dVar17 = *pdVar8;
                            in_xd2 = *pdVar6;
                        }
                        pdVar9 = (double *)((int)pdVar10 + 0x2c);
                        if (cVar23 == '\0') {
                            dVar17 =
                                (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                        } else {
                            dVar17 = dVar17 + dVar17;
                        }
                        if (cVar24 == '\0') {
                            *(int *)pdVar9 = (int)((u64)dVar17 >> 0x20);
                        } else {
                            *pdVar9 = dVar17;
                        }
                        CacheBlockWriteBack(pdVar9);
                    }
                    goto LAB_8c23f25a;
                }
                *(u32 *)pdVar10 = 0xf0000000;
                CacheBlockWriteBack(pdVar10);
                if (*(int *)((int)pdVar10 + 0x3c) != a1) {
                    *(int *)((int)pdVar10 + 0x3c) = a1;
                    gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar10 + 2, pdVar10 + 6, 0);
                    if (cVar24 == '\0') {
                        *(u32 *)(pdVar10 + 4) = g_8c4c2620;
                        pdVar9 = (double *)&g_8c4c2638;
                        pdVar8 = (double *)&g_8c4c2628;
                        dVar17 = (double)CONCAT44(g_8c4c2624, g_8c4c2634);
                    } else {
                        pdVar10[4] = (double)CONCAT44(g_8c4c2624, g_8c4c2620);
                        in_xd2 = (double)CONCAT44(g_8c4c2638, g_8c4c2634);
                        pdVar9 = (double *)&g_8c4c263c;
                        pdVar8 = (double *)&g_8c4c2630;
                        dVar17 = g_8c4c2628;
                    }
                    if (cVar23 == '\0') {
                        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                    } else {
                        dVar17 = dVar17 + dVar17;
                    }
                    if (cVar24 == '\0') {
                        *(int *)((int)pdVar10 + 0x24) = (int)((u64)dVar17 >> 0x20);
                        pdVar6 = (double *)((int)pdVar9 + 4);
                        dVar17 = (double)CONCAT44(*(u32 *)pdVar8, *(u32 *)pdVar9);
                        pdVar8 = (double *)((int)pdVar8 + 4);
                    } else {
                        *(double *)((int)pdVar10 + 0x24) = dVar17;
                        in_xd2 = *pdVar9;
                        pdVar6 = pdVar9 + 1;
                        dVar17 = *pdVar8;
                        pdVar8 = pdVar8 + 1;
                    }
                    if (cVar23 == '\0') {
                        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                    } else {
                        dVar17 = dVar17 + dVar17;
                    }
                    if (cVar24 == '\0') {
                        *(int *)(pdVar10 + 5) = (int)((u64)dVar17 >> 0x20);
                        dVar17 = (double)CONCAT44(*(u32 *)pdVar8, *(u32 *)pdVar6);
                    } else {
                        pdVar10[5] = dVar17;
                        dVar17 = *pdVar8;
                        in_xd2 = *pdVar6;
                    }
                    pdVar9 = (double *)((int)pdVar10 + 0x2c);
                    if (cVar23 == '\0') {
                        dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                    } else {
                        dVar17 = dVar17 + dVar17;
                    }
                    if (cVar24 == '\0') {
                        *(int *)pdVar9 = (int)((u64)dVar17 >> 0x20);
                    } else {
                        *pdVar9 = dVar17;
                    }
                    CacheBlockWriteBack(pdVar9);
                }
                if (cVar24 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr0, 0));
                    dVar17 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), SUB84(dVar17, 0));
                    pdVar9 = pdVar10 + 1;
                } else {
                    in_dr0 = *pdVar10;
                    dVar17 = pdVar10[1];
                    pdVar9 = pdVar10 + 2;
                }
                if (cVar24 == '\0') {
                    uVar3 = *(u32 *)(pdVar9 + 2);
                    dVar19 = (double)CONCAT44(uVar3, SUB84(dVar19, 0));
                    *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar9 + 0x14);
                    *(u32 *)(unaff_r8 + 3) = uVar3;
                    *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar17 >> 0x20);
                    unaff_r8 = unaff_r8 + 2;
                    *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    dVar19 = pdVar9[2];
                    unaff_r8[3] = pdVar9[3];
                    unaff_r8[2] = dVar19;
                    unaff_r8[1] = dVar17;
                    *unaff_r8 = in_dr0;
                }
                unaff_r8 = unaff_r8 + 4;
                uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar11);
                pdVar11 = unaff_r8;
            } else {
                dVar17 = (double)((u64)uVar5 << 0x20);
                if (cVar23 == '\0') {
                    bVar22 = fVar18 < 0.0;
                } else {
                    bVar22 = dVar19 < dVar17;
                }
                if (bVar22) {
                    *(u32 *)pdVar9 = 0xe0000000;
                    CacheBlockWriteBack(pdVar9);
                    if (*(int *)((int)pdVar9 + 0x3c) != a1) {
                        *(int *)((int)pdVar9 + 0x3c) = a1;
                        gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar9 + 2, pdVar9 + 6, 0);
                        if (cVar24 == '\0') {
                            *(u32 *)(pdVar9 + 4) = g_8c4c2620;
                            pdVar8 = (double *)&g_8c4c2638;
                            pdVar6 = (double *)&g_8c4c2628;
                            dVar17 = (double)CONCAT44(g_8c4c2624, g_8c4c2634);
                        } else {
                            pdVar9[4] = (double)CONCAT44(g_8c4c2624, g_8c4c2620);
                            in_xd2 = (double)CONCAT44(g_8c4c2638, g_8c4c2634);
                            pdVar8 = (double *)&g_8c4c263c;
                            pdVar6 = (double *)&g_8c4c2630;
                            dVar17 = g_8c4c2628;
                        }
                        if (cVar23 == '\0') {
                            dVar17 =
                                (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                        } else {
                            dVar17 = dVar17 + dVar17;
                        }
                        if (cVar24 == '\0') {
                            *(int *)((int)pdVar9 + 0x24) = (int)((u64)dVar17 >> 0x20);
                            pdVar7 = (double *)((int)pdVar8 + 4);
                            dVar17 = (double)CONCAT44(*(u32 *)pdVar6, *(u32 *)pdVar8);
                            pdVar6 = (double *)((int)pdVar6 + 4);
                        } else {
                            *(double *)((int)pdVar9 + 0x24) = dVar17;
                            in_xd2 = *pdVar8;
                            pdVar7 = pdVar8 + 1;
                            dVar17 = *pdVar6;
                            pdVar6 = pdVar6 + 1;
                        }
                        if (cVar23 == '\0') {
                            dVar17 =
                                (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                        } else {
                            dVar17 = dVar17 + dVar17;
                        }
                        if (cVar24 == '\0') {
                            *(int *)(pdVar9 + 5) = (int)((u64)dVar17 >> 0x20);
                            dVar17 = (double)CONCAT44(*(u32 *)pdVar6, *(u32 *)pdVar7);
                        } else {
                            pdVar9[5] = dVar17;
                            dVar17 = *pdVar6;
                            in_xd2 = *pdVar7;
                        }
                        pdVar8 = (double *)((int)pdVar9 + 0x2c);
                        if (cVar23 == '\0') {
                            dVar17 =
                                (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                        } else {
                            dVar17 = dVar17 + dVar17;
                        }
                        if (cVar24 == '\0') {
                            *(int *)pdVar8 = (int)((u64)dVar17 >> 0x20);
                        } else {
                            *pdVar8 = dVar17;
                        }
                        CacheBlockWriteBack(pdVar8);
                    }
                    if (cVar24 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar9, SUB84(in_dr0, 0));
                        dVar17 = (double)CONCAT44(*(u32 *)((int)pdVar9 + 4), SUB84(dVar17, 0));
                        pdVar9 = pdVar9 + 1;
                    } else {
                        in_dr0 = *pdVar9;
                        dVar17 = pdVar9[1];
                        pdVar9 = pdVar9 + 2;
                    }
                    if (cVar24 == '\0') {
                        uVar3 = *(u32 *)(pdVar9 + 2);
                        dVar19 = (double)CONCAT44(uVar3, SUB84(dVar19, 0));
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar9 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar3;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar17 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        dVar19 = pdVar9[2];
                        unaff_r8[3] = pdVar9[3];
                        unaff_r8[2] = dVar19;
                        unaff_r8[1] = dVar17;
                        *unaff_r8 = in_dr0;
                    }
                    unaff_r8 = unaff_r8 + 4;
                    *(u32 *)pdVar10 = 0xe0000000;
                    CacheBlockWriteBack(pdVar10);
                    if (*(int *)((int)pdVar10 + 0x3c) != a1) {
                        *(int *)((int)pdVar10 + 0x3c) = a1;
                        gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar10 + 2, pdVar10 + 6, 0);
                        if (cVar24 == '\0') {
                            *(u32 *)(pdVar10 + 4) = g_8c4c2620;
                            pdVar9 = (double *)&g_8c4c2638;
                            pdVar8 = (double *)&g_8c4c2628;
                            dVar17 = (double)CONCAT44(g_8c4c2624, g_8c4c2634);
                        } else {
                            pdVar10[4] = (double)CONCAT44(g_8c4c2624, g_8c4c2620);
                            in_xd2 = (double)CONCAT44(g_8c4c2638, g_8c4c2634);
                            pdVar9 = (double *)&g_8c4c263c;
                            pdVar8 = (double *)&g_8c4c2630;
                            dVar17 = g_8c4c2628;
                        }
                        if (cVar23 == '\0') {
                            dVar17 =
                                (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                        } else {
                            dVar17 = dVar17 + dVar17;
                        }
                        if (cVar24 == '\0') {
                            *(int *)((int)pdVar10 + 0x24) = (int)((u64)dVar17 >> 0x20);
                            pdVar6 = (double *)((int)pdVar9 + 4);
                            dVar17 = (double)CONCAT44(*(u32 *)pdVar8, *(u32 *)pdVar9);
                            pdVar8 = (double *)((int)pdVar8 + 4);
                        } else {
                            *(double *)((int)pdVar10 + 0x24) = dVar17;
                            in_xd2 = *pdVar9;
                            pdVar6 = pdVar9 + 1;
                            dVar17 = *pdVar8;
                            pdVar8 = pdVar8 + 1;
                        }
                        if (cVar23 == '\0') {
                            dVar17 =
                                (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                        } else {
                            dVar17 = dVar17 + dVar17;
                        }
                        if (cVar24 == '\0') {
                            *(int *)(pdVar10 + 5) = (int)((u64)dVar17 >> 0x20);
                            dVar17 = (double)CONCAT44(*(u32 *)pdVar8, *(u32 *)pdVar6);
                        } else {
                            pdVar10[5] = dVar17;
                            dVar17 = *pdVar8;
                            in_xd2 = *pdVar6;
                        }
                        pdVar9 = (double *)((int)pdVar10 + 0x2c);
                        if (cVar23 == '\0') {
                            dVar17 =
                                (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                        } else {
                            dVar17 = dVar17 + dVar17;
                        }
                        if (cVar24 == '\0') {
                            *(int *)pdVar9 = (int)((u64)dVar17 >> 0x20);
                        } else {
                            *pdVar9 = dVar17;
                        }
                        CacheBlockWriteBack(pdVar9);
                    }
                LAB_8c23f25a:
                    if (cVar24 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr0, 0));
                        dVar17 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), SUB84(dVar17, 0));
                        pdVar9 = pdVar10 + 1;
                    } else {
                        in_dr0 = *pdVar10;
                        dVar17 = pdVar10[1];
                        pdVar9 = pdVar10 + 2;
                    }
                    if (cVar24 == '\0') {
                        uVar3 = *(u32 *)(pdVar9 + 2);
                        dVar19 = (double)CONCAT44(uVar3, SUB84(dVar19, 0));
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar9 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar3;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar17 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        dVar19 = pdVar9[2];
                        unaff_r8[3] = pdVar9[3];
                        unaff_r8[2] = dVar19;
                        unaff_r8[1] = dVar17;
                        *unaff_r8 = in_dr0;
                    }
                    unaff_r8 = unaff_r8 + 4;
                }
            }
            if (cVar24 == '\0') {
                in_dr4 = (double)CONCAT44(in_fr13, SUB84(dVar19, 0));
                in_fr13 = *(float *)((int)pdVar12 + 4);
                in_xd12 = dVar21;
            } else {
                in_xd12 = *(double *)((int)pdVar12 + 4);
                in_dr4 = dVar21;
            }
            uVar3 = 8;
            if (cVar24 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), (int)((u64)in_dr14 >> 0x20));
                dVar21 = (double)CONCAT44(*(u32 *)(pdVar12 + 1), SUB84(in_dr14, 0));
            } else {
                dVar21 = pdVar12[1];
            }
            iVar4 = iVar4 + -1;
            in_dr14 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), -SUB84(dVar21, 0));
            pdVar9 = pdVar10;
            pdVar10 = pdVar12;
            dVar21 = in_xd12;
        } while (iVar4 != 0);
        if (pdVar11 < unaff_r8) {
            *(u32 *)pdVar12 = 0xf0000000;
            CacheBlockWriteBack(pdVar12);
            if (*(int *)((int)pdVar12 + 0x3c) != a1) {
                *(int *)((int)pdVar12 + 0x3c) = a1;
                uVar3 = gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar12 + 2, pdVar12 + 6, 0);
                if (cVar24 == '\0') {
                    *(u32 *)(pdVar12 + 4) = g_8c4c2620;
                    pdVar9 = (double *)&g_8c4c2638;
                    pdVar10 = (double *)&g_8c4c2628;
                    dVar21 = (double)CONCAT44(g_8c4c2624, g_8c4c2634);
                } else {
                    pdVar12[4] = (double)CONCAT44(g_8c4c2624, g_8c4c2620);
                    in_xd2 = (double)CONCAT44(g_8c4c2638, g_8c4c2634);
                    pdVar9 = (double *)&g_8c4c263c;
                    pdVar10 = (double *)&g_8c4c2630;
                    dVar21 = g_8c4c2628;
                }
                if (cVar23 == '\0') {
                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));
                } else {
                    dVar21 = dVar21 + dVar21;
                }
                if (cVar24 == '\0') {
                    *(int *)((int)pdVar12 + 0x24) = (int)((u64)dVar21 >> 0x20);
                    pdVar8 = (double *)((int)pdVar9 + 4);
                    dVar21 = (double)CONCAT44(*(u32 *)pdVar10, *(u32 *)pdVar9);
                    pdVar10 = (double *)((int)pdVar10 + 4);
                } else {
                    *(double *)((int)pdVar12 + 0x24) = dVar21;
                    in_xd2 = *pdVar9;
                    pdVar8 = pdVar9 + 1;
                    dVar21 = *pdVar10;
                    pdVar10 = pdVar10 + 1;
                }
                if (cVar23 == '\0') {
                    dVar21 = (double)CONCAT44((float)((u64)dVar21 >> 0x20) + SUB84(dVar21, 0), SUB84(dVar21, 0));
                } else {
                    dVar21 = dVar21 + dVar21;
                }
                if (cVar24 == '\0') {
                    *(int *)(pdVar12 + 5) = (int)((u64)dVar21 >> 0x20);
                    dVar17 = (double)CONCAT44(*(u32 *)pdVar10, *(u32 *)pdVar8);
                } else {
                    pdVar12[5] = dVar21;
                    dVar17 = *pdVar10;
                    in_xd2 = *pdVar8;
                }
                pdVar9 = (double *)((int)pdVar12 + 0x2c);
                if (cVar23 == '\0') {
                    dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) + SUB84(dVar17, 0), SUB84(dVar17, 0));
                } else {
                    dVar17 = dVar17 + dVar17;
                }
                if (cVar24 == '\0') {
                    *(int *)pdVar9 = (int)((u64)dVar17 >> 0x20);
                } else {
                    *pdVar9 = dVar17;
                }
                CacheBlockWriteBack(pdVar9);
            }
            if (cVar24 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)pdVar12, SUB84(in_dr0, 0));
                dVar21 = (double)CONCAT44(*(u32 *)((int)pdVar12 + 4), SUB84(dVar17, 0));
                pdVar12 = pdVar12 + 1;
            } else {
                in_dr0 = *pdVar12;
                dVar21 = pdVar12[1];
                pdVar12 = pdVar12 + 2;
            }
            if (cVar24 == '\0') {
                uVar20 = *(u32 *)(pdVar12 + 2);
                in_dr4 = (double)CONCAT44(uVar20, SUB84(in_dr4, 0));
                *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar12 + 0x14);
                *(u32 *)(unaff_r8 + 3) = uVar20;
                *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar21 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
            } else {
                in_dr4 = pdVar12[2];
                unaff_r8[3] = pdVar12[3];
                unaff_r8[2] = in_dr4;
                unaff_r8[1] = dVar21;
                *unaff_r8 = in_dr0;
            }
            unaff_r8 = unaff_r8 + 4;
            uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar11);
        }
        uStack_2c = uStack_2c - 1;
        if (uStack_2c == 0) {
            g_8c4aa520 = g_8c4aa520 + (uStack_3c >> 5);
            g_8c4aa51c = g_8c4aa51c + iStack_30;
            return uVar3;
        }
    } while (true);
}

/*
 * gfxlib_uses_float_to_color_u8_23f35a  0x8c23f35a
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 */
u32 *gfxlib_uses_float_to_color_u8_23f35a(int a0, u32 a1) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    u8 *puVar4;
    u64 *puVar5;
    u64 *ar6_00;
    u64 *unaff_r8;
    u32 uVar6;
    int iVar7;
    short *psVar8;
    short *psVar9;
    u16 *puVar10;
    u16 *puVar11;
    u64 *puVar12;
    u64 *puVar13;
    u64 uVar14;
    double dVar15;
    float fVar16;
    u64 uVar17;
    float fVar20;
    double dVar18;
    double dVar19;
    u64 uVar21;
    u64 uVar22;
    double dVar23;
    u64 in_dr6;
    u64 uVar25;
    float in_fr15;
    u32 in_fr14;
    double in_xd2;
    double in_xd14;
    bool bVar26;
    char cVar27;
    char cVar28;
    int iVar29;
    u32 uStack_24;
    u32 uVar24;

    cVar28 = '\0';
    cVar27 = '\0';
    noop_23d694();
    iVar1 = g_8c4aa510;
    puVar10 = *(u16 **)(a0 + 4);
    uStack_24 = (u32) * (u16 *)(a0 + 2);
    psVar8 = *(short **)(a0 + 0x14);
    iVar29 = 0;
    do {
        iVar29 = iVar29 + (*puVar10 & 0x7fff);
        iVar7 = (*puVar10 & 0x7fff) - 1;
        puVar10 = puVar10 + 1;
        do {
            puVar11 = puVar10;
            psVar9 = psVar8;
            puVar12 = (u64 *)((u32)*puVar11 * 0x40 + iVar1);
            if (cVar28 == '\0') {
                uVar14 = CONCAT44(*(u32 *)(puVar12 + 2), *(u32 *)((int)puVar12 + 0x14));
                uVar17 = (u64) * (u32 *)(puVar12 + 3) << 0x20;
                uVar21 = CONCAT44(*(u32 *)(puVar12 + 6), *(u32 *)((int)puVar12 + 0x34));
                uVar25 = CONCAT44(*(u32 *)(puVar12 + 7), (int)in_dr6);
            } else {
                uVar14 = puVar12[2];
                uVar17 = puVar12[4];
                uVar21 = puVar12[6];
                uVar25 = puVar12[8];
            }
            fVar16 = (float)uVar21;
            uVar17 = uVar17 & 0xffffffff00000000;
            if (cVar27 == '\0') {
                fVar20 = (float)uVar14 * fVar16 + (float)((u64)uVar14 >> 0x20) * (float)((u64)uVar21 >> 0x20) +
                         (float)uVar25 * 0.0 + (float)(uVar17 >> 0x20) * (float)(uVar25 >> 0x20);
            }
            dVar18 = in_xd2;
            dVar15 = in_xd2;
            if (cVar28 == '\0') {
                in_fr15 = (float)uVar17;
                dVar18 = in_xd14;
                dVar15 = (double)CONCAT44(in_fr15, (float)uVar14);
            }
            in_xd14 = dVar18;
            uVar24 = SUB84(dVar15, 0);
            dVar15 = (double)(uVar17 & 0xffffffff00000000);
            if (cVar27 == '\0') {
                bVar26 = 0.0 < in_fr15;
            } else {
                bVar26 = dVar15 < (double)CONCAT44(in_fr14, in_fr15);
            }
            uVar6 = 0x8000;
            if (!bVar26) {
                uVar6 = 0;
            }
            *(u32 *)puVar12 = 0xe0000000;
            CacheBlockWriteBack(puVar12);
            if (*(u32 *)((int)puVar12 + 0x3c) != (a1 | uVar6)) {
                *(u32 *)((int)puVar12 + 0x3c) = a1 | uVar6;
                puVar4 = &g_8c4c2620;
                puVar5 = puVar12 + 6;
                puVar13 = puVar12 + 2;
                gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar13, puVar5, uVar6);
                uVar2 = float_to_color_u8(puVar4, puVar13, puVar5, uVar6);
                *(u32 *)(puVar12 + 5) = uVar2;
                if (cVar28 == '\0') {
                    uVar25 = (u64)g_8c4c263c;
                    fVar16 = g_8c4c2634;
                } else {
                    uVar25 = CONCAT44(g_8c4c263c, g_8c4c2638);
                    fVar16 = g_8c4c2630;
                }
                uVar2 = float_to_color_u8(puVar4, puVar13, puVar5, uVar6);
                *(u32 *)((int)puVar12 + 0x2c) = uVar2;
            }
            puVar3 = &g_8c23f504;
            if (cVar28 == '\0') {
                in_fr15 = 0.00390625;
            } else {
                in_xd14 = 7.572216732779312e-86;
            }
            uVar2 = (u32)((u64)dVar15 >> 0x20);
            dVar15 = in_xd14;
            if (cVar28 == '\0') {
                dVar15 = (double)CONCAT44(in_fr15, fVar16);
            }
            fVar16 = (float)((u64)dVar15 >> 0x20);
            if (cVar27 == '\0') {
                dVar18 = (double)CONCAT44(uVar2, (float)(int)*psVar9 * fVar16);
            } else {
                dVar18 = (double)CONCAT44(uVar2, (float)(int)*psVar9) * dVar15;
            }
            if (cVar28 == '\0') {
                *(int *)(puVar12 + 4) = SUB84(dVar18, 0);
            } else {
                puVar12[4] = in_xd2;
            }
            if (cVar27 == '\0') {
                fVar16 = (float)(int)psVar9[1] * fVar16;
            } else {
                fVar16 = SUB84((double)CONCAT44((int)((u64)dVar18 >> 0x20), (float)(int)psVar9[1]) * dVar15, 0);
            }
            if (cVar28 == '\0') {
                *(float *)((int)puVar12 + 0x24) = fVar16;
            } else {
                *(double *)((int)puVar12 + 0x24) = in_xd2;
            }
            CacheBlockWriteBack(puVar12 + 4);
            if (cVar28 == '\0') {
                uVar14 = CONCAT44(*(u32 *)puVar12, uVar24);
                uVar21 = CONCAT44(*(u32 *)((int)puVar12 + 4), fVar16);
                puVar12 = puVar12 + 1;
            } else {
                uVar14 = *puVar12;
                uVar21 = puVar12[1];
                puVar12 = puVar12 + 2;
            }
            if (cVar28 == '\0') {
                uVar24 = *(u32 *)(puVar12 + 2);
                in_dr6 = CONCAT44(*(u32 *)((int)puVar12 + 0x14), (int)uVar25);
                *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)puVar12 + 0x14);
                *(u32 *)(unaff_r8 + 3) = uVar24;
                *(int *)((int)unaff_r8 + 0x14) = (int)((u64)uVar21 >> 0x20);
                *(int *)(unaff_r8 + 2) = (int)((u64)uVar14 >> 0x20);
                puVar12 = unaff_r8 + 2;
            } else {
                uVar22 = puVar12[2];
                in_dr6 = puVar12[3];
                unaff_r8[3] = in_dr6;
                unaff_r8[2] = uVar22;
                unaff_r8[1] = uVar21;
                *unaff_r8 = uVar14;
                puVar12 = unaff_r8;
            }
            unaff_r8 = puVar12 + 4;
            iVar7 = iVar7 + -1;
            psVar8 = psVar9 + 2;
            puVar10 = puVar11 + 1;
        } while (iVar7 != 0);
        puVar10 = puVar11 + 2;
        puVar13 = (u64 *)((u32)puVar11[1] * 0x40 + iVar1);
        if (cVar28 == '\0') {
            uVar14 = CONCAT44(*(u32 *)(puVar13 + 2), *(u32 *)((int)puVar13 + 0x14));
            uVar17 = (u64) * (u32 *)(puVar13 + 3) << 0x20;
            uVar21 = CONCAT44(*(u32 *)(puVar13 + 6), *(u32 *)((int)puVar13 + 0x34));
            uVar25 = CONCAT44(*(u32 *)(puVar13 + 7), (int)in_dr6);
        } else {
            uVar14 = puVar13[2];
            uVar17 = puVar13[4];
            uVar21 = puVar13[6];
            uVar25 = puVar13[8];
        }
        uVar17 = uVar17 & 0xffffffff00000000;
        if (cVar27 == '\0') {
            fVar16 = (float)uVar14 * (float)uVar21 + (float)((u64)uVar14 >> 0x20) * (float)((u64)uVar21 >> 0x20) +
                     (float)uVar25 * 0.0 + (float)(uVar17 >> 0x20) * (float)(uVar25 >> 0x20);
        }
        dVar15 = in_xd2;
        if (cVar28 == '\0') {
            dVar15 = (double)CONCAT44((int)uVar17, (float)uVar14);
        }
        dVar19 = (double)(uVar17 & 0xffffffff00000000);
        dVar18 = dVar15;
        if (cVar28 == '\0') {
            dVar18 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), (float)uVar21);
        }
        if (cVar27 == '\0') {
            bVar26 = 0.0 < (float)((u64)dVar18 >> 0x20);
        } else {
            bVar26 = dVar19 < dVar18;
        }
        uVar6 = 0x8000;
        if (!bVar26) {
            uVar6 = 0;
        }
        *(u32 *)puVar13 = 0xf0000000;
        CacheBlockWriteBack(puVar13);
        if (*(u32 *)((int)puVar13 + 0x3c) != (a1 | uVar6)) {
            *(u32 *)((int)puVar13 + 0x3c) = a1 | uVar6;
            puVar4 = &g_8c4c2620;
            ar6_00 = puVar13 + 6;
            puVar5 = puVar13 + 2;
            gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar5, ar6_00, uVar6);
            uVar24 = float_to_color_u8(puVar4, puVar5, ar6_00, uVar6);
            *(u32 *)(puVar13 + 5) = uVar24;
            if (cVar28 == '\0') {
                uVar25 = (u64)g_8c4c263c;
                dVar18 = (double)(u64)(u32)g_8c4c2634;
            } else {
                uVar25 = CONCAT44(g_8c4c263c, g_8c4c2638);
                dVar18 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
            }
            puVar3 = (u32 *)float_to_color_u8(puVar4, puVar5, ar6_00, uVar6);
            *(u32 **)((int)puVar13 + 0x2c) = puVar3;
        }
        dVar23 = in_xd14;
        if (cVar28 == '\0') {
            dVar23 = (double)CONCAT44(in_fr15, SUB84(dVar18, 0));
        }
        psVar8 = psVar9 + 4;
        uVar24 = (u32)((u64)dVar19 >> 0x20);
        fVar16 = (float)(int)psVar9[2];
        fVar20 = (float)((u64)dVar23 >> 0x20);
        if (cVar27 == '\0') {
            dVar18 = (double)CONCAT44(uVar24, fVar16 * fVar20);
        } else {
            dVar18 = (double)CONCAT44(uVar24, fVar16) * dVar23;
        }
        if (cVar28 == '\0') {
            *(int *)(puVar13 + 4) = SUB84(dVar18, 0);
        } else {
            puVar13[4] = in_xd2;
        }
        if (cVar27 == '\0') {
            fVar20 = (float)(int)psVar9[3] * fVar20;
        } else {
            fVar20 = SUB84((double)CONCAT44((int)((u64)dVar18 >> 0x20), (float)(int)psVar9[3]) * dVar23, 0);
        }
        if (cVar28 == '\0') {
            *(float *)((int)puVar13 + 0x24) = fVar20;
        } else {
            *(double *)((int)puVar13 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(puVar13 + 4);
        if (cVar28 == '\0') {
            uVar14 = CONCAT44(*(u32 *)puVar13, SUB84(dVar15, 0));
            uVar21 = CONCAT44(*(u32 *)((int)puVar13 + 4), fVar20);
            puVar13 = puVar13 + 1;
        } else {
            uVar14 = *puVar13;
            uVar21 = puVar13[1];
            puVar13 = puVar13 + 2;
        }
        if (cVar28 == '\0') {
            uVar24 = *(u32 *)(puVar13 + 2);
            in_dr6 = CONCAT44(*(u32 *)((int)puVar13 + 0x14), (int)uVar25);
            *(u32 *)((int)puVar12 + 0x3c) = *(u32 *)((int)puVar13 + 0x14);
            *(u32 *)(puVar12 + 7) = uVar24;
            *(int *)((int)puVar12 + 0x34) = (int)((u64)uVar21 >> 0x20);
            puVar12 = puVar12 + 6;
            *(int *)puVar12 = (int)((u64)uVar14 >> 0x20);
        } else {
            uVar22 = puVar13[2];
            in_dr6 = puVar13[3];
            puVar12[7] = in_dr6;
            puVar12[6] = uVar22;
            puVar12[5] = uVar21;
            puVar12 = puVar12 + 4;
            *puVar12 = uVar14;
        }
        unaff_r8 = puVar12 + 4;
        uStack_24 = uStack_24 - 1;
    } while (uStack_24 != 0);
    g_8c4aa51c = g_8c4aa51c + iVar29;
    g_8c4aa520 = g_8c4aa520 + iVar29;
    return puVar3;
}

/*
 * gfxlib_uses_float_to_color_u8_23f5e2  0x8c23f5e2
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 */
u32 gfxlib_uses_float_to_color_u8_23f5e2(int a0, int a1) {
    short sVar1;
    u16 uVar2;
    int iVar3;
    u32 uVar4;
    u8 *puVar5;
    double *pdVar6;
    double *ar6_00;
    u32 ar7_00;
    double *unaff_r8;
    double *pdVar7;
    double *pdVar8;
    double *pdVar9;
    double *pdVar10;
    u16 *puVar11;
    u16 *puVar12;
    u16 *puVar13;
    short *psVar14;
    short *psVar15;
    double in_dr0;
    float fVar16;
    double dVar17;
    float fVar18;
    u32 uVar19;
    double in_dr4;
    double dVar20;
    double dVar21;
    u32 uVar22;
    u32 in_fr13;
    double dVar23;
    double in_dr14;
    double dVar24;
    double in_xd2;
    double in_xd12;
    bool bVar25;
    char cVar26;
    char cVar27;
    u32 uStack_4c;
    u32 uStack_3c;
    int iStack_34;
    u32 uStack_30;

    cVar27 = '\0';
    cVar26 = '\0';
    dVar23 = (double)CONCAT44(0x3b800000, in_fr13);
    noop_23d694();
    iVar3 = g_8c4aa510;
    psVar14 = *(short **)(a0 + 0x14);
    puVar11 = *(u16 **)(a0 + 4);
    uStack_30 = (u32) * (u16 *)(a0 + 2);
    uStack_3c = 0;
    iStack_34 = 0;
    do {
        uVar22 = SUB84(in_dr14, 0);
        puVar12 = puVar11 + 1;
        uStack_4c = (u32)*puVar11;
        if (cVar27 == '\0') {
            uVar22 = 0x3f800000;
        }
        if ((*puVar11 & 0x8000) != 0) {
            uStack_4c = uStack_4c & 0x7fff;
            if (cVar26 == '\0') {
                uVar4 = 0xbf800000;
            } else {
                uVar4 = (u32)((u64) - (double)CONCAT44(0x3f800000, SUB84(in_dr4, 0)) >> 0x20);
            }
            if (cVar27 == '\0') {
                uVar22 = uVar4;
            }
        }
        iStack_34 = iStack_34 + uStack_4c;
        uStack_4c = uStack_4c - 2;
        puVar13 = puVar11 + 2;
        puVar11 = puVar11 + 3;
        pdVar8 = (double *)((u32)*puVar13 * 0x40 + iVar3);
        pdVar7 = (double *)((u32)*puVar12 * 0x40 + iVar3);
        pdVar9 = unaff_r8;
        if (cVar27 == '\0') {
            dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)((int)pdVar8 + 4));
            in_dr14 = (double)CONCAT44(*(u32 *)(pdVar8 + 1), uVar22);
            in_dr4 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), *(u32 *)(pdVar7 + 1));
            dVar24 = in_xd12;
        } else {
            in_dr4 = *(double *)((int)pdVar7 + 4);
            in_dr14 = pdVar8[1];
            dVar24 = *(double *)((int)pdVar8 + 4);
        }
        do {
            uVar2 = *puVar11;
            puVar11 = puVar11 + 1;
            pdVar10 = (double *)((u32)uVar2 * 0x40 + iVar3);
            if (cVar27 == '\0') {
                dVar17 = (double)CONCAT44(*(u32 *)(pdVar10 + 1), SUB84(dVar23, 0));
            } else {
                dVar17 = pdVar10[1];
                in_xd2 = dVar24;
            }
            fVar18 = (float)((u64)in_dr14 >> 0x20);
            if (cVar26 == '\0') {
                dVar17 = (double)CONCAT44((float)((u64)dVar17 >> 0x20) - fVar18,
                                          SUB84(dVar17, 0) - (float)((u64)in_dr4 >> 0x20));
            } else {
                dVar17 = (dVar17 - in_dr4) - in_dr14;
            }
            if (cVar27 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)pdVar10 + 4));
            }
            if (cVar26 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar23, 0));
                fVar16 = SUB84(dVar17, 0) * (float)((u64)dVar17 >> 0x20);
            } else {
                in_dr0 = in_dr0 - dVar23;
                fVar16 = SUB84(dVar17 * dVar17, 0);
            }
            dVar17 = in_dr14;
            if (cVar27 == '\0') {
                dVar17 = (double)CONCAT44(fVar18, fVar16);
            }
            if (cVar26 == '\0') {
                fVar18 = ((float)((u64)dVar17 >> 0x20) - SUB84(in_dr4, 0)) * SUB84(in_dr0, 0);
                dVar17 = (double)CONCAT44(fVar18, SUB84(dVar17, 0) - fVar18);
            } else {
                dVar17 = (dVar17 - in_dr4) * in_dr0;
                dVar17 = dVar17 - dVar17;
            }
            dVar20 = in_xd2;
            if (cVar27 == '\0') {
                dVar20 = (double)CONCAT44(SUB84(dVar17, 0), SUB84(in_dr4, 0));
            }
            if (cVar26 == '\0') {
                dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * SUB84(in_dr14, 0), SUB84(dVar20, 0));
            } else {
                dVar20 = dVar20 * in_dr14;
            }
            uVar19 = (u32)((u64)dVar17 >> 0x20);
            fVar18 = (float)((u64)dVar20 >> 0x20);
            if (pdVar9 < unaff_r8) {
                dVar17 = (double)((u64)uVar19 << 0x20);
                if (cVar26 == '\0') {
                    bVar25 = fVar18 < 0.0;
                } else {
                    bVar25 = dVar20 < dVar17;
                }
                if (bVar25) {
                    *(u32 *)pdVar8 = 0xe0000000;
                    CacheBlockWriteBack(pdVar8);
                    if (*(int *)((int)pdVar8 + 0x3c) != a1) {
                        *(int *)((int)pdVar8 + 0x3c) = a1;
                        puVar5 = &g_8c4c2620;
                        uVar4 = 0;
                        pdVar6 = pdVar8 + 6;
                        pdVar7 = pdVar8 + 2;
                        gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar7, pdVar6, 0);
                        uVar22 = float_to_color_u8(puVar5, pdVar7, pdVar6, uVar4);
                        *(u32 *)(pdVar8 + 5) = uVar22;
                        if (cVar27 == '\0') {
                            dVar20 = (double)(u64)g_8c4c2634;
                        } else {
                            dVar20 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                        }
                        uVar22 = float_to_color_u8(puVar5, pdVar7, pdVar6, uVar4);
                        *(u32 *)((int)pdVar8 + 0x2c) = uVar22;
                    }
                    uVar22 = SUB84(in_dr0, 0);
                    dVar21 = dVar23;
                    if (cVar27 == '\0') {
                        dVar21 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar20, 0));
                    }
                    uVar4 = (u32)((u64)dVar17 >> 0x20);
                    if (cVar26 == '\0') {
                        dVar17 = (double)CONCAT44(uVar4, (float)(int)*psVar14 * (float)((u64)dVar21 >> 0x20));
                    } else {
                        dVar17 = (double)CONCAT44(uVar4, (float)(int)*psVar14) * dVar21;
                    }
                    if (cVar27 == '\0') {
                        *(int *)(pdVar8 + 4) = SUB84(dVar17, 0);
                    } else {
                        pdVar8[4] = in_xd2;
                    }
                    sVar1 = psVar14[1];
                    goto LAB_8c23f984;
                }
                *(u32 *)pdVar8 = 0xf0000000;
                CacheBlockWriteBack(pdVar8);
                if (*(int *)((int)pdVar8 + 0x3c) != a1) {
                    *(int *)((int)pdVar8 + 0x3c) = a1;
                    puVar5 = &g_8c4c2620;
                    uVar4 = 0;
                    pdVar6 = pdVar8 + 6;
                    pdVar7 = pdVar8 + 2;
                    gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar7, pdVar6, 0);
                    uVar22 = float_to_color_u8(puVar5, pdVar7, pdVar6, uVar4);
                    *(u32 *)(pdVar8 + 5) = uVar22;
                    if (cVar27 == '\0') {
                        dVar20 = (double)(u64)g_8c4c2634;
                    } else {
                        dVar20 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                    }
                    uVar22 = float_to_color_u8(puVar5, pdVar7, pdVar6, uVar4);
                    *(u32 *)((int)pdVar8 + 0x2c) = uVar22;
                }
                dVar21 = dVar23;
                if (cVar27 == '\0') {
                    dVar21 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar20, 0));
                }
                uVar22 = (u32)((u64)dVar17 >> 0x20);
                fVar18 = (float)((u64)dVar21 >> 0x20);
                if (cVar26 == '\0') {
                    dVar17 = (double)CONCAT44(uVar22, (float)(int)*psVar14 * fVar18);
                } else {
                    dVar17 = (double)CONCAT44(uVar22, (float)(int)*psVar14) * dVar21;
                }
                if (cVar27 == '\0') {
                    *(int *)(pdVar8 + 4) = SUB84(dVar17, 0);
                } else {
                    pdVar8[4] = in_xd2;
                }
                if (cVar26 == '\0') {
                    fVar18 = (float)(int)psVar14[1] * fVar18;
                } else {
                    fVar18 = SUB84((double)CONCAT44((int)((u64)dVar17 >> 0x20), (float)(int)psVar14[1]) * dVar21, 0);
                }
                if (cVar27 == '\0') {
                    *(float *)((int)pdVar8 + 0x24) = fVar18;
                } else {
                    *(double *)((int)pdVar8 + 0x24) = in_xd2;
                }
                CacheBlockWriteBack(pdVar8 + 4);
                if (cVar27 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(in_dr0, 0));
                    dVar17 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 4), fVar18);
                    pdVar7 = pdVar8 + 1;
                } else {
                    in_dr0 = *pdVar8;
                    dVar17 = pdVar8[1];
                    pdVar7 = pdVar8 + 2;
                }
                if (cVar27 == '\0') {
                    uVar22 = *(u32 *)(pdVar7 + 2);
                    dVar20 = (double)CONCAT44(uVar22, SUB84(dVar21, 0));
                    *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                    *(u32 *)(unaff_r8 + 3) = uVar22;
                    *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar17 >> 0x20);
                    unaff_r8 = unaff_r8 + 2;
                    *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    dVar20 = pdVar7[2];
                    unaff_r8[3] = pdVar7[3];
                    unaff_r8[2] = dVar20;
                    unaff_r8[1] = dVar17;
                    *unaff_r8 = in_dr0;
                }
                unaff_r8 = unaff_r8 + 4;
                uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar9);
                pdVar9 = unaff_r8;
                psVar15 = psVar14;
            } else {
                dVar17 = (double)((u64)uVar19 << 0x20);
                if (cVar26 == '\0') {
                    bVar25 = fVar18 < 0.0;
                } else {
                    bVar25 = dVar20 < dVar17;
                }
                psVar15 = psVar14 + 2;
                if (bVar25) {
                    *(u32 *)pdVar7 = 0xe0000000;
                    CacheBlockWriteBack(pdVar7);
                    if (*(int *)((int)pdVar7 + 0x3c) != a1) {
                        *(int *)((int)pdVar7 + 0x3c) = a1;
                        puVar5 = &g_8c4c2620;
                        uVar4 = 0;
                        ar6_00 = pdVar7 + 6;
                        pdVar6 = pdVar7 + 2;
                        gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar6, ar6_00, 0);
                        uVar22 = float_to_color_u8(puVar5, pdVar6, ar6_00, uVar4);
                        *(u32 *)(pdVar7 + 5) = uVar22;
                        if (cVar27 == '\0') {
                            dVar20 = (double)(u64)g_8c4c2634;
                        } else {
                            dVar20 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                        }
                        uVar22 = float_to_color_u8(puVar5, pdVar6, ar6_00, uVar4);
                        *(u32 *)((int)pdVar7 + 0x2c) = uVar22;
                    }
                    dVar21 = dVar23;
                    if (cVar27 == '\0') {
                        dVar21 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(dVar20, 0));
                    }
                    uVar22 = (u32)((u64)dVar17 >> 0x20);
                    fVar18 = (float)((u64)dVar21 >> 0x20);
                    if (cVar26 == '\0') {
                        dVar17 = (double)CONCAT44(uVar22, (float)(int)*psVar14 * fVar18);
                    } else {
                        dVar17 = (double)CONCAT44(uVar22, (float)(int)*psVar14) * dVar21;
                    }
                    if (cVar27 == '\0') {
                        *(int *)(pdVar7 + 4) = SUB84(dVar17, 0);
                    } else {
                        pdVar7[4] = in_xd2;
                    }
                    if (cVar26 == '\0') {
                        fVar18 = (float)(int)psVar14[1] * fVar18;
                    } else {
                        fVar18 =
                            SUB84((double)CONCAT44((int)((u64)dVar17 >> 0x20), (float)(int)psVar14[1]) * dVar21, 0);
                    }
                    if (cVar27 == '\0') {
                        *(float *)((int)pdVar7 + 0x24) = fVar18;
                    } else {
                        *(double *)((int)pdVar7 + 0x24) = in_xd2;
                    }
                    CacheBlockWriteBack(pdVar7 + 4);
                    if (cVar27 == '\0') {
                        dVar17 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(in_dr0, 0));
                        dVar20 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), fVar18);
                        pdVar7 = pdVar7 + 1;
                    } else {
                        dVar17 = *pdVar7;
                        dVar20 = pdVar7[1];
                        pdVar7 = pdVar7 + 2;
                    }
                    if (cVar27 == '\0') {
                        uVar22 = *(u32 *)(pdVar7 + 2);
                        dVar21 = (double)CONCAT44(uVar22, SUB84(dVar21, 0));
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar22;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar20 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)dVar17 >> 0x20);
                    } else {
                        dVar21 = pdVar7[2];
                        unaff_r8[3] = pdVar7[3];
                        unaff_r8[2] = dVar21;
                        unaff_r8[1] = dVar20;
                        *unaff_r8 = dVar17;
                    }
                    uVar19 = SUB84(dVar21, 0);
                    unaff_r8 = unaff_r8 + 4;
                    *(u32 *)pdVar8 = 0xe0000000;
                    CacheBlockWriteBack(pdVar8);
                    if (*(int *)((int)pdVar8 + 0x3c) != a1) {
                        *(int *)((int)pdVar8 + 0x3c) = a1;
                        puVar5 = &g_8c4c2620;
                        uVar4 = 0;
                        pdVar6 = pdVar8 + 6;
                        pdVar7 = pdVar8 + 2;
                        gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar7, pdVar6, 0);
                        uVar22 = float_to_color_u8(puVar5, pdVar7, pdVar6, uVar4);
                        *(u32 *)(pdVar8 + 5) = uVar22;
                        uVar19 = g_8c4c2630;
                        if (cVar27 == '\0') {
                            uVar19 = g_8c4c2634;
                        }
                        uVar22 = float_to_color_u8(puVar5, pdVar7, pdVar6, uVar4);
                        *(u32 *)((int)pdVar8 + 0x2c) = uVar22;
                    }
                    uVar22 = SUB84(dVar17, 0);
                    dVar21 = dVar23;
                    if (cVar27 == '\0') {
                        dVar21 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), uVar19);
                    }
                    uVar4 = (u32)((u64)dVar20 >> 0x20);
                    fVar18 = (float)(int)psVar14[2];
                    if (cVar26 == '\0') {
                        dVar17 = (double)CONCAT44(uVar4, fVar18 * (float)((u64)dVar21 >> 0x20));
                    } else {
                        dVar17 = (double)CONCAT44(uVar4, fVar18) * dVar21;
                    }
                    if (cVar27 == '\0') {
                        *(int *)(pdVar8 + 4) = SUB84(dVar17, 0);
                    } else {
                        pdVar8[4] = in_xd2;
                    }
                    sVar1 = psVar14[3];
                    psVar14 = psVar14 + 2;
                LAB_8c23f984:
                    if (cVar26 == '\0') {
                        fVar18 = (float)(int)sVar1 * (float)((u64)dVar21 >> 0x20);
                    } else {
                        fVar18 = SUB84((double)CONCAT44((int)((u64)dVar17 >> 0x20), (float)(int)sVar1) * dVar21, 0);
                    }
                    if (cVar27 == '\0') {
                        *(float *)((int)pdVar8 + 0x24) = fVar18;
                    } else {
                        *(double *)((int)pdVar8 + 0x24) = in_xd2;
                    }
                    CacheBlockWriteBack(pdVar8 + 4);
                    if (cVar27 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar8, uVar22);
                        dVar17 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 4), fVar18);
                        pdVar7 = pdVar8 + 1;
                    } else {
                        in_dr0 = *pdVar8;
                        dVar17 = pdVar8[1];
                        pdVar7 = pdVar8 + 2;
                    }
                    if (cVar27 == '\0') {
                        uVar22 = *(u32 *)(pdVar7 + 2);
                        dVar20 = (double)CONCAT44(uVar22, SUB84(dVar21, 0));
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar22;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar17 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        dVar20 = pdVar7[2];
                        unaff_r8[3] = pdVar7[3];
                        unaff_r8[2] = dVar20;
                        unaff_r8[1] = dVar17;
                        *unaff_r8 = in_dr0;
                    }
                    unaff_r8 = unaff_r8 + 4;
                    psVar15 = psVar14 + 2;
                }
            }
            uVar22 = (u32)((u64)dVar17 >> 0x20);
            if (cVar27 == '\0') {
                uVar4 = SUB84(dVar23, 0);
                dVar23 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), *(u32 *)((int)pdVar10 + 4));
                in_xd12 = dVar24;
                in_dr4 = (double)CONCAT44(uVar4, SUB84(dVar20, 0));
            } else {
                in_xd12 = *(double *)((int)pdVar10 + 4);
                in_dr4 = dVar24;
            }
            uVar4 = 8;
            if (cVar27 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), (int)((u64)in_dr14 >> 0x20));
                dVar24 = (double)CONCAT44(*(u32 *)(pdVar10 + 1), SUB84(in_dr14, 0));
            } else {
                dVar24 = pdVar10[1];
            }
            uStack_4c = uStack_4c + -1;
            in_dr14 = (double)CONCAT44((int)((u64)dVar24 >> 0x20), -SUB84(dVar24, 0));
            pdVar7 = pdVar8;
            pdVar8 = pdVar10;
            psVar14 = psVar15;
            dVar24 = in_xd12;
        } while (uStack_4c != 0);
        psVar14 = psVar15 + 4;
        if (pdVar9 < unaff_r8) {
            *(u32 *)pdVar10 = 0xf0000000;
            CacheBlockWriteBack(pdVar10);
            if (*(int *)((int)pdVar10 + 0x3c) != a1) {
                *(int *)((int)pdVar10 + 0x3c) = a1;
                puVar5 = &g_8c4c2620;
                ar7_00 = 0;
                pdVar8 = pdVar10 + 6;
                pdVar7 = pdVar10 + 2;
                gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar7, pdVar8, 0);
                uVar4 = float_to_color_u8(puVar5, pdVar7, pdVar8, ar7_00);
                *(u32 *)(pdVar10 + 5) = uVar4;
                if (cVar27 == '\0') {
                    in_dr4 = (double)(u64)g_8c4c2634;
                } else {
                    in_dr4 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                }
                uVar4 = float_to_color_u8(puVar5, pdVar7, pdVar8, ar7_00);
                *(u32 *)((int)pdVar10 + 0x2c) = uVar4;
            }
            dVar24 = dVar23;
            if (cVar27 == '\0') {
                dVar24 = (double)CONCAT44((int)((u64)dVar23 >> 0x20), SUB84(in_dr4, 0));
            }
            psVar14 = psVar15 + 2;
            fVar18 = (float)((u64)dVar24 >> 0x20);
            if (cVar26 == '\0') {
                dVar17 = (double)CONCAT44(uVar22, (float)(int)*psVar15 * fVar18);
            } else {
                dVar17 = (double)CONCAT44(uVar22, (float)(int)*psVar15) * dVar24;
            }
            if (cVar27 == '\0') {
                *(int *)(pdVar10 + 4) = SUB84(dVar17, 0);
            } else {
                pdVar10[4] = in_xd2;
            }
            if (cVar26 == '\0') {
                fVar18 = (float)(int)psVar15[1] * fVar18;
            } else {
                fVar18 = SUB84((double)CONCAT44((int)((u64)dVar17 >> 0x20), (float)(int)psVar15[1]) * dVar24, 0);
            }
            if (cVar27 == '\0') {
                *(float *)((int)pdVar10 + 0x24) = fVar18;
            } else {
                *(double *)((int)pdVar10 + 0x24) = in_xd2;
            }
            CacheBlockWriteBack(pdVar10 + 4);
            if (cVar27 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(in_dr0, 0));
                dVar17 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), fVar18);
                pdVar10 = pdVar10 + 1;
            } else {
                in_dr0 = *pdVar10;
                dVar17 = pdVar10[1];
                pdVar10 = pdVar10 + 2;
            }
            if (cVar27 == '\0') {
                uVar22 = *(u32 *)(pdVar10 + 2);
                in_dr4 = (double)CONCAT44(uVar22, SUB84(dVar24, 0));
                *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar10 + 0x14);
                *(u32 *)(unaff_r8 + 3) = uVar22;
                *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar17 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
            } else {
                in_dr4 = pdVar10[2];
                unaff_r8[3] = pdVar10[3];
                unaff_r8[2] = in_dr4;
                unaff_r8[1] = dVar17;
                *unaff_r8 = in_dr0;
            }
            unaff_r8 = unaff_r8 + 4;
            uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar9);
        }
        uStack_30 = uStack_30 - 1;
        if (uStack_30 == 0) {
            g_8c4aa520 = g_8c4aa520 + (uStack_3c >> 5);
            g_8c4aa51c = g_8c4aa51c + iStack_34;
            return uVar4;
        }
    } while (true);
}

/*
 * gfxlib_uses_float_to_color_u8_23fac8  0x8c23fac8
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 */
u32 *gfxlib_uses_float_to_color_u8_23fac8(int a0, u32 a1) {
    double *pdVar1;
    int iVar2;
    u32 uVar3;
    u32 *puVar4;
    u8 *puVar5;
    u64 *puVar6;
    u64 *puVar7;
    u64 *ar6_00;
    u64 *unaff_r8;
    u32 uVar8;
    int iVar9;
    u16 *puVar10;
    u16 *puVar11;
    u64 *puVar12;
    u64 uVar13;
    double dVar14;
    u64 uVar15;
    float fVar16;
    u64 uVar17;
    u64 uVar18;
    double dVar19;
    u64 in_dr6;
    u64 uVar21;
    float in_fr15;
    u32 in_fr14;
    double in_xd2;
    double in_xd14;
    bool bVar22;
    char cVar23;
    char cVar24;
    int iVar25;
    u32 uStack_24;
    u32 uVar20;

    cVar24 = '\0';
    cVar23 = '\0';
    noop_23d694();
    iVar2 = g_8c4aa510;
    puVar10 = *(u16 **)(a0 + 4);
    uStack_24 = (u32) * (u16 *)(a0 + 2);
    iVar25 = 0;
    do {
        iVar25 = iVar25 + (*puVar10 & 0x7fff);
        iVar9 = (*puVar10 & 0x7fff) - 1;
        puVar10 = puVar10 + 1;
        do {
            puVar11 = puVar10;
            puVar12 = (u64 *)((u32)*puVar11 * 0x40 + iVar2);
            if (cVar24 == '\0') {
                uVar13 = CONCAT44(*(u32 *)(puVar12 + 2), *(u32 *)((int)puVar12 + 0x14));
                uVar15 = (u64) * (u32 *)(puVar12 + 3) << 0x20;
                uVar17 = CONCAT44(*(u32 *)(puVar12 + 6), *(u32 *)((int)puVar12 + 0x34));
                uVar21 = CONCAT44(*(u32 *)(puVar12 + 7), (int)in_dr6);
            } else {
                uVar13 = puVar12[2];
                uVar15 = puVar12[4];
                uVar17 = puVar12[6];
                uVar21 = puVar12[8];
            }
            uVar15 = uVar15 & 0xffffffff00000000;
            if (cVar23 == '\0') {
                fVar16 = (float)uVar13 * (float)uVar17 + (float)((u64)uVar13 >> 0x20) * (float)((u64)uVar17 >> 0x20) +
                         (float)uVar21 * 0.0 + (float)(uVar15 >> 0x20) * (float)(uVar21 >> 0x20);
            }
            dVar19 = in_xd2;
            dVar14 = in_xd2;
            if (cVar24 == '\0') {
                in_fr15 = (float)uVar15;
                dVar19 = in_xd14;
                dVar14 = (double)CONCAT44(in_fr15, (float)uVar13);
            }
            uVar20 = SUB84(dVar14, 0);
            if (cVar23 == '\0') {
                bVar22 = 0.0 < in_fr15;
            } else {
                bVar22 = (double)(uVar15 & 0xffffffff00000000) < (double)CONCAT44(in_fr14, in_fr15);
            }
            uVar8 = 0x8000;
            if (!bVar22) {
                uVar8 = 0;
            }
            *(u32 *)puVar12 = 0xe0000000;
            CacheBlockWriteBack(puVar12);
            if (*(u32 *)((int)puVar12 + 0x3c) != (uVar8 | a1)) {
                *(u32 *)((int)puVar12 + 0x3c) = uVar8 | a1;
                puVar5 = &g_8c4c2620;
                puVar7 = puVar12 + 6;
                puVar6 = puVar12 + 2;
                gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar6, puVar7, uVar8);
                uVar3 = float_to_color_u8(puVar5, puVar6, puVar7, uVar8);
                *(u32 *)(puVar12 + 5) = uVar3;
                if (cVar24 == '\0') {
                    uVar21 = (u64)g_8c4c263c;
                } else {
                    uVar21 = CONCAT44(g_8c4c263c, g_8c4c2638);
                }
                uVar3 = float_to_color_u8(puVar5, puVar6, puVar7, uVar8);
                *(u32 *)((int)puVar12 + 0x2c) = uVar3;
            }
            puVar4 = &g_8c23fc7c;
            if (cVar24 == '\0') {
                in_fr15 = 0.5;
                puVar6 = (u64 *)((int)puVar12 + 0x34);
                uVar13 = CONCAT44(*(u32 *)(puVar12 + 6), 0x3f000000);
                dVar14 = (double)CONCAT44(0x3f000000, uVar20);
                in_xd14 = dVar19;
            } else {
                in_xd2 = 7.57221068030812e-86;
                uVar13 = puVar12[6];
                puVar6 = puVar12 + 7;
                dVar14 = in_xd2;
                in_xd14 = in_xd2;
            }
            if (cVar23 == '\0') {
                fVar16 = (float)((u64)uVar13 >> 0x20);
                uVar13 = CONCAT44(fVar16, (float)((u64)dVar14 >> 0x20) * fVar16 + (float)uVar13);
            }
            if (cVar24 == '\0') {
                *(int *)(puVar12 + 4) = (int)uVar13;
                uVar13 = CONCAT44(*(u32 *)puVar6, in_fr15);
                dVar14 = (double)CONCAT44(in_fr15, SUB84(dVar14, 0));
            } else {
                puVar12[4] = in_xd2;
                uVar13 = *puVar6;
                in_xd2 = in_xd14;
                dVar14 = in_xd14;
            }
            pdVar1 = (double *)((int)puVar12 + 0x24);
            if (cVar23 == '\0') {
                fVar16 = (float)((u64)uVar13 >> 0x20);
                uVar13 = CONCAT44(fVar16, (float)((u64)dVar14 >> 0x20) * fVar16 + (float)uVar13);
            }
            if (cVar24 == '\0') {
                *(int *)pdVar1 = (int)uVar13;
            } else {
                *pdVar1 = in_xd2;
            }
            CacheBlockWriteBack(pdVar1);
            if (cVar24 == '\0') {
                uVar17 = CONCAT44(*(u32 *)puVar12, SUB84(dVar14, 0));
                uVar13 = CONCAT44(*(u32 *)((int)puVar12 + 4), (int)uVar13);
                puVar12 = puVar12 + 1;
            } else {
                uVar17 = *puVar12;
                uVar13 = puVar12[1];
                puVar12 = puVar12 + 2;
            }
            if (cVar24 == '\0') {
                uVar20 = *(u32 *)(puVar12 + 2);
                in_dr6 = CONCAT44(*(u32 *)((int)puVar12 + 0x14), (int)uVar21);
                *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)puVar12 + 0x14);
                *(u32 *)(unaff_r8 + 3) = uVar20;
                *(int *)((int)unaff_r8 + 0x14) = (int)((u64)uVar13 >> 0x20);
                *(int *)(unaff_r8 + 2) = (int)((u64)uVar17 >> 0x20);
                puVar12 = unaff_r8 + 2;
            } else {
                uVar18 = puVar12[2];
                in_dr6 = puVar12[3];
                unaff_r8[3] = in_dr6;
                unaff_r8[2] = uVar18;
                unaff_r8[1] = uVar13;
                *unaff_r8 = uVar17;
                puVar12 = unaff_r8;
            }
            unaff_r8 = puVar12 + 4;
            iVar9 = iVar9 + -1;
            puVar10 = puVar11 + 1;
        } while (iVar9 != 0);
        puVar10 = puVar11 + 2;
        puVar6 = (u64 *)((u32)puVar11[1] * 0x40 + iVar2);
        if (cVar24 == '\0') {
            uVar13 = CONCAT44(*(u32 *)(puVar6 + 2), *(u32 *)((int)puVar6 + 0x14));
            uVar15 = (u64) * (u32 *)(puVar6 + 3) << 0x20;
            uVar17 = CONCAT44(*(u32 *)(puVar6 + 6), *(u32 *)((int)puVar6 + 0x34));
            uVar21 = CONCAT44(*(u32 *)(puVar6 + 7), (int)in_dr6);
        } else {
            uVar13 = puVar6[2];
            uVar15 = puVar6[4];
            uVar17 = puVar6[6];
            uVar21 = puVar6[8];
        }
        uVar15 = uVar15 & 0xffffffff00000000;
        if (cVar23 == '\0') {
            fVar16 = (float)uVar13 * (float)uVar17 + (float)((u64)uVar13 >> 0x20) * (float)((u64)uVar17 >> 0x20) +
                     (float)uVar21 * 0.0 + (float)(uVar15 >> 0x20) * (float)(uVar21 >> 0x20);
        }
        dVar14 = in_xd2;
        if (cVar24 == '\0') {
            dVar14 = (double)CONCAT44((int)uVar15, (float)uVar13);
        }
        dVar19 = dVar14;
        if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((int)((u64)dVar14 >> 0x20), (float)uVar17);
        }
        if (cVar23 == '\0') {
            bVar22 = 0.0 < (float)((u64)dVar19 >> 0x20);
        } else {
            bVar22 = (double)(uVar15 & 0xffffffff00000000) < dVar19;
        }
        uVar8 = 0x8000;
        if (!bVar22) {
            uVar8 = 0;
        }
        *(u32 *)puVar6 = 0xf0000000;
        CacheBlockWriteBack(puVar6);
        if (*(u32 *)((int)puVar6 + 0x3c) != (uVar8 | a1)) {
            *(u32 *)((int)puVar6 + 0x3c) = uVar8 | a1;
            puVar5 = &g_8c4c2620;
            ar6_00 = puVar6 + 6;
            puVar7 = puVar6 + 2;
            gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, puVar7, ar6_00, uVar8);
            uVar20 = float_to_color_u8(puVar5, puVar7, ar6_00, uVar8);
            *(u32 *)(puVar6 + 5) = uVar20;
            if (cVar24 == '\0') {
                uVar21 = (u64)g_8c4c263c;
            } else {
                uVar21 = CONCAT44(g_8c4c263c, g_8c4c2638);
            }
            puVar4 = (u32 *)float_to_color_u8(puVar5, puVar7, ar6_00, uVar8);
            *(u32 **)((int)puVar6 + 0x2c) = puVar4;
        }
        if (cVar24 == '\0') {
            puVar7 = (u64 *)((int)puVar6 + 0x34);
            uVar13 = CONCAT44(*(u32 *)(puVar6 + 6), in_fr15);
            dVar14 = (double)CONCAT44(in_fr15, SUB84(dVar14, 0));
        } else {
            uVar13 = puVar6[6];
            puVar7 = puVar6 + 7;
            dVar14 = in_xd14;
            in_xd2 = in_xd14;
        }
        if (cVar23 == '\0') {
            fVar16 = (float)((u64)uVar13 >> 0x20);
            uVar13 = CONCAT44(fVar16, (float)((u64)dVar14 >> 0x20) * fVar16 + (float)uVar13);
        }
        if (cVar24 == '\0') {
            *(int *)(puVar6 + 4) = (int)uVar13;
            uVar13 = CONCAT44(*(u32 *)puVar7, in_fr15);
            dVar14 = (double)CONCAT44(in_fr15, SUB84(dVar14, 0));
        } else {
            puVar6[4] = in_xd2;
            uVar13 = *puVar7;
            in_xd2 = in_xd14;
            dVar14 = in_xd14;
        }
        pdVar1 = (double *)((int)puVar6 + 0x24);
        if (cVar23 == '\0') {
            fVar16 = (float)((u64)uVar13 >> 0x20);
            uVar13 = CONCAT44(fVar16, (float)((u64)dVar14 >> 0x20) * fVar16 + (float)uVar13);
        }
        if (cVar24 == '\0') {
            *(int *)pdVar1 = (int)uVar13;
        } else {
            *pdVar1 = in_xd2;
        }
        CacheBlockWriteBack(pdVar1);
        if (cVar24 == '\0') {
            uVar17 = CONCAT44(*(u32 *)puVar6, SUB84(dVar14, 0));
            uVar13 = CONCAT44(*(u32 *)((int)puVar6 + 4), (int)uVar13);
            puVar6 = puVar6 + 1;
        } else {
            uVar17 = *puVar6;
            uVar13 = puVar6[1];
            puVar6 = puVar6 + 2;
        }
        if (cVar24 == '\0') {
            uVar20 = *(u32 *)(puVar6 + 2);
            in_dr6 = CONCAT44(*(u32 *)((int)puVar6 + 0x14), (int)uVar21);
            *(u32 *)((int)puVar12 + 0x3c) = *(u32 *)((int)puVar6 + 0x14);
            *(u32 *)(puVar12 + 7) = uVar20;
            *(int *)((int)puVar12 + 0x34) = (int)((u64)uVar13 >> 0x20);
            puVar12 = puVar12 + 6;
            *(int *)puVar12 = (int)((u64)uVar17 >> 0x20);
        } else {
            uVar18 = puVar6[2];
            in_dr6 = puVar6[3];
            puVar12[7] = in_dr6;
            puVar12[6] = uVar18;
            puVar12[5] = uVar13;
            puVar12 = puVar12 + 4;
            *puVar12 = uVar17;
        }
        unaff_r8 = puVar12 + 4;
        uStack_24 = uStack_24 - 1;
    } while (uStack_24 != 0);
    g_8c4aa51c = g_8c4aa51c + iVar25;
    g_8c4aa520 = g_8c4aa520 + iVar25;
    return puVar4;
}

/*
 * gfxlib_uses_float_to_color_u8_23fd56  0x8c23fd56
 * area name: in the gfxlib library code range; behaviour name: its main named callee is float_to_color_u8
 */
u32 gfxlib_uses_float_to_color_u8_23fd56(int a0, int a1) {
    u16 uVar1;
    int iVar2;
    u32 uVar3;
    u8 *puVar4;
    double *pdVar5;
    double *ar6_00;
    u32 uVar6;
    double *unaff_r8;
    double *pdVar7;
    double *pdVar8;
    double *pdVar9;
    double *pdVar10;
    u16 *puVar11;
    u16 *puVar12;
    u16 *puVar13;
    double in_dr0;
    float fVar14;
    double dVar15;
    float fVar18;
    u32 uVar19;
    double dVar16;
    double dVar17;
    double in_dr4;
    double dVar20;
    u32 in_fr13;
    double dVar21;
    double in_dr14;
    double dVar22;
    double in_xd2;
    double in_xd12;
    bool bVar23;
    char cVar24;
    char cVar25;
    u32 uStack_44;
    u32 uStack_40;
    int iStack_34;
    u32 uStack_30;

    cVar25 = '\0';
    cVar24 = '\0';
    dVar21 = (double)CONCAT44(0x3f000000, in_fr13);
    noop_23d694();
    iVar2 = g_8c4aa510;
    puVar11 = *(u16 **)(a0 + 4);
    uStack_30 = (u32) * (u16 *)(a0 + 2);
    uStack_40 = 0;
    iStack_34 = 0;
    do {
        uVar3 = SUB84(in_dr14, 0);
        puVar12 = puVar11 + 1;
        uStack_44 = (u32)*puVar11;
        if (cVar25 == '\0') {
            uVar3 = 0x3f800000;
        }
        if ((*puVar11 & 0x8000) != 0) {
            uStack_44 = uStack_44 & 0x7fff;
            if (cVar24 == '\0') {
                uVar6 = 0xbf800000;
            } else {
                uVar6 = (u32)((u64) - (double)CONCAT44(0x3f800000, SUB84(in_dr4, 0)) >> 0x20);
            }
            if (cVar25 == '\0') {
                uVar3 = uVar6;
            }
        }
        iStack_34 = iStack_34 + uStack_44;
        uStack_44 = uStack_44 - 2;
        puVar13 = puVar11 + 2;
        puVar11 = puVar11 + 3;
        pdVar8 = (double *)((u32)*puVar13 * 0x40 + iVar2);
        pdVar7 = (double *)((u32)*puVar12 * 0x40 + iVar2);
        pdVar9 = unaff_r8;
        if (cVar25 == '\0') {
            dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)((int)pdVar8 + 4));
            in_dr14 = (double)CONCAT44(*(u32 *)(pdVar8 + 1), uVar3);
            in_dr4 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), *(u32 *)(pdVar7 + 1));
            dVar22 = in_xd12;
        } else {
            in_dr4 = *(double *)((int)pdVar7 + 4);
            in_dr14 = pdVar8[1];
            dVar22 = *(double *)((int)pdVar8 + 4);
        }
        do {
            uVar1 = *puVar11;
            puVar11 = puVar11 + 1;
            pdVar10 = (double *)((u32)uVar1 * 0x40 + iVar2);
            if (cVar25 == '\0') {
                dVar15 = (double)CONCAT44(*(u32 *)(pdVar10 + 1), SUB84(dVar21, 0));
            } else {
                dVar15 = pdVar10[1];
                in_xd2 = dVar22;
            }
            if (cVar24 == '\0') {
                dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), SUB84(dVar15, 0) - (float)((u64)in_dr4 >> 0x20));
            } else {
                dVar15 = dVar15 - in_dr4;
            }
            fVar18 = (float)((u64)in_dr14 >> 0x20);
            if (cVar24 == '\0') {
                dVar15 = (double)CONCAT44((float)((u64)dVar15 >> 0x20) - fVar18, SUB84(dVar15, 0));
            } else {
                dVar15 = dVar15 - in_dr14;
            }
            if (cVar25 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)((int)pdVar10 + 4));
            }
            if (cVar24 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0) - SUB84(dVar21, 0));
                fVar14 = SUB84(dVar15, 0) * (float)((u64)dVar15 >> 0x20);
            } else {
                in_dr0 = in_dr0 - dVar21;
                fVar14 = SUB84(dVar15 * dVar15, 0);
            }
            dVar15 = in_dr14;
            if (cVar25 == '\0') {
                dVar15 = (double)CONCAT44(fVar18, fVar14);
            }
            if (cVar24 == '\0') {
                fVar18 = ((float)((u64)dVar15 >> 0x20) - SUB84(in_dr4, 0)) * SUB84(in_dr0, 0);
                dVar15 = (double)CONCAT44(fVar18, SUB84(dVar15, 0) - fVar18);
            } else {
                dVar15 = (dVar15 - in_dr4) * in_dr0;
                dVar15 = dVar15 - dVar15;
            }
            dVar20 = in_xd2;
            if (cVar25 == '\0') {
                dVar20 = (double)CONCAT44(SUB84(dVar15, 0), SUB84(in_dr4, 0));
            }
            if (cVar24 == '\0') {
                dVar20 = (double)CONCAT44((float)((u64)dVar20 >> 0x20) * SUB84(in_dr14, 0), SUB84(dVar20, 0));
            } else {
                dVar20 = dVar20 * in_dr14;
            }
            uVar19 = (u32)((u64)dVar15 >> 0x20);
            fVar18 = (float)((u64)dVar20 >> 0x20);
            if (pdVar9 < unaff_r8) {
                if (cVar24 == '\0') {
                    bVar23 = fVar18 < 0.0;
                } else {
                    bVar23 = dVar20 < (double)((u64)uVar19 << 0x20);
                }
                if (bVar23) {
                    *(u32 *)pdVar8 = 0xe0000000;
                    CacheBlockWriteBack(pdVar8);
                    if (*(int *)((int)pdVar8 + 0x3c) != a1) {
                        *(int *)((int)pdVar8 + 0x3c) = a1;
                        puVar4 = &g_8c4c2620;
                        uVar6 = 0;
                        pdVar5 = pdVar8 + 6;
                        pdVar7 = pdVar8 + 2;
                        gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar7, pdVar5, 0);
                        uVar3 = float_to_color_u8(puVar4, pdVar7, pdVar5, uVar6);
                        *(u32 *)(pdVar8 + 5) = uVar3;
                        if (cVar25 == '\0') {
                            dVar20 = (double)(u64)g_8c4c2634;
                        } else {
                            dVar20 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                        }
                        uVar3 = float_to_color_u8(puVar4, pdVar7, pdVar5, uVar6);
                        *(u32 *)((int)pdVar8 + 0x2c) = uVar3;
                    }
                    uVar3 = (u32)((u64)dVar21 >> 0x20);
                    if (cVar25 == '\0') {
                        pdVar7 = (double *)((int)pdVar8 + 0x34);
                        dVar15 = (double)CONCAT44(*(u32 *)(pdVar8 + 6), uVar3);
                        dVar17 = (double)CONCAT44(uVar3, SUB84(in_dr0, 0));
                    } else {
                        dVar15 = pdVar8[6];
                        pdVar7 = pdVar8 + 7;
                        dVar17 = dVar21;
                        in_xd2 = dVar21;
                    }
                    if (cVar24 == '\0') {
                        dVar15 = (double)(u64)(u32)((float)((u64)dVar17 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                    SUB84(dVar15, 0));
                    }
                    if (cVar25 == '\0') {
                        *(int *)(pdVar8 + 4) = SUB84(dVar15, 0);
                        dVar16 = (double)CONCAT44(*(u32 *)pdVar7, uVar3);
                        dVar15 = (double)CONCAT44(uVar3, SUB84(dVar17, 0));
                        dVar20 = (double)CONCAT44(uVar3, SUB84(dVar20, 0));
                    } else {
                        pdVar8[4] = in_xd2;
                        dVar16 = *pdVar7;
                        in_xd2 = dVar21;
                        dVar15 = dVar21;
                        dVar20 = dVar21;
                    }
                    uVar3 = SUB84(dVar20, 0);
                    pdVar7 = (double *)((int)pdVar8 + 0x24);
                    if (cVar24 == '\0') {
                        dVar16 = (double)(u64)(u32)((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar16 >> 0x20) +
                                                    SUB84(dVar16, 0));
                    }
                    uVar6 = SUB84(dVar16, 0);
                    if (cVar25 == '\0') {
                        *(u32 *)pdVar7 = uVar6;
                    } else {
                        *pdVar7 = in_xd2;
                    }
                    CacheBlockWriteBack(pdVar7);
                    goto LAB_8c2400f0;
                }
                *(u32 *)pdVar8 = 0xf0000000;
                CacheBlockWriteBack(pdVar8);
                if (*(int *)((int)pdVar8 + 0x3c) != a1) {
                    *(int *)((int)pdVar8 + 0x3c) = a1;
                    puVar4 = &g_8c4c2620;
                    uVar6 = 0;
                    pdVar5 = pdVar8 + 6;
                    pdVar7 = pdVar8 + 2;
                    gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar7, pdVar5, 0);
                    uVar3 = float_to_color_u8(puVar4, pdVar7, pdVar5, uVar6);
                    *(u32 *)(pdVar8 + 5) = uVar3;
                    if (cVar25 == '\0') {
                        dVar20 = (double)(u64)g_8c4c2634;
                    } else {
                        dVar20 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                    }
                    uVar3 = float_to_color_u8(puVar4, pdVar7, pdVar5, uVar6);
                    *(u32 *)((int)pdVar8 + 0x2c) = uVar3;
                }
                uVar3 = (u32)((u64)dVar21 >> 0x20);
                if (cVar25 == '\0') {
                    pdVar7 = (double *)((int)pdVar8 + 0x34);
                    dVar15 = (double)CONCAT44(*(u32 *)(pdVar8 + 6), uVar3);
                    dVar17 = (double)CONCAT44(uVar3, SUB84(in_dr0, 0));
                } else {
                    dVar15 = pdVar8[6];
                    pdVar7 = pdVar8 + 7;
                    dVar17 = dVar21;
                    in_xd2 = dVar21;
                }
                if (cVar24 == '\0') {
                    dVar15 = (double)(u64)(u32)((float)((u64)dVar17 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                SUB84(dVar15, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)(pdVar8 + 4) = SUB84(dVar15, 0);
                    dVar16 = (double)CONCAT44(*(u32 *)pdVar7, uVar3);
                    dVar15 = (double)CONCAT44(uVar3, SUB84(dVar17, 0));
                    dVar20 = (double)CONCAT44(uVar3, SUB84(dVar20, 0));
                } else {
                    pdVar8[4] = in_xd2;
                    dVar16 = *pdVar7;
                    in_xd2 = dVar21;
                    dVar15 = dVar21;
                    dVar20 = dVar21;
                }
                pdVar7 = (double *)((int)pdVar8 + 0x24);
                if (cVar24 == '\0') {
                    dVar16 = (double)(u64)(u32)((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar16 >> 0x20) +
                                                SUB84(dVar16, 0));
                }
                if (cVar25 == '\0') {
                    *(int *)pdVar7 = SUB84(dVar16, 0);
                } else {
                    *pdVar7 = in_xd2;
                }
                CacheBlockWriteBack(pdVar7);
                if (cVar25 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar15, 0));
                    dVar15 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 4), SUB84(dVar16, 0));
                    pdVar7 = pdVar8 + 1;
                } else {
                    in_dr0 = *pdVar8;
                    dVar15 = pdVar8[1];
                    pdVar7 = pdVar8 + 2;
                }
                if (cVar25 == '\0') {
                    uVar3 = *(u32 *)(pdVar7 + 2);
                    dVar20 = (double)CONCAT44(uVar3, SUB84(dVar20, 0));
                    *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                    *(u32 *)(unaff_r8 + 3) = uVar3;
                    *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar15 >> 0x20);
                    unaff_r8 = unaff_r8 + 2;
                    *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                } else {
                    dVar20 = pdVar7[2];
                    unaff_r8[3] = pdVar7[3];
                    unaff_r8[2] = dVar20;
                    unaff_r8[1] = dVar15;
                    *unaff_r8 = in_dr0;
                }
                unaff_r8 = unaff_r8 + 4;
                uStack_40 = (int)unaff_r8 + uStack_40 + (0x20 - (int)pdVar9);
                pdVar9 = unaff_r8;
            } else {
                if (cVar24 == '\0') {
                    bVar23 = fVar18 < 0.0;
                } else {
                    bVar23 = dVar20 < (double)((u64)uVar19 << 0x20);
                }
                if (bVar23) {
                    *(u32 *)pdVar7 = 0xe0000000;
                    CacheBlockWriteBack(pdVar7);
                    if (*(int *)((int)pdVar7 + 0x3c) != a1) {
                        *(int *)((int)pdVar7 + 0x3c) = a1;
                        puVar4 = &g_8c4c2620;
                        uVar6 = 0;
                        ar6_00 = pdVar7 + 6;
                        pdVar5 = pdVar7 + 2;
                        gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar5, ar6_00, 0);
                        uVar3 = float_to_color_u8(puVar4, pdVar5, ar6_00, uVar6);
                        *(u32 *)(pdVar7 + 5) = uVar3;
                        if (cVar25 == '\0') {
                            dVar20 = (double)(u64)g_8c4c2634;
                        } else {
                            dVar20 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                        }
                        uVar3 = float_to_color_u8(puVar4, pdVar5, ar6_00, uVar6);
                        *(u32 *)((int)pdVar7 + 0x2c) = uVar3;
                    }
                    uVar3 = (u32)((u64)dVar21 >> 0x20);
                    if (cVar25 == '\0') {
                        pdVar5 = (double *)((int)pdVar7 + 0x34);
                        dVar15 = (double)CONCAT44(*(u32 *)(pdVar7 + 6), uVar3);
                        dVar17 = (double)CONCAT44(uVar3, SUB84(in_dr0, 0));
                    } else {
                        dVar15 = pdVar7[6];
                        pdVar5 = pdVar7 + 7;
                        dVar17 = dVar21;
                        in_xd2 = dVar21;
                    }
                    if (cVar24 == '\0') {
                        dVar15 = (double)(u64)(u32)((float)((u64)dVar17 >> 0x20) * (float)((u64)dVar15 >> 0x20) +
                                                    SUB84(dVar15, 0));
                    }
                    if (cVar25 == '\0') {
                        *(int *)(pdVar7 + 4) = SUB84(dVar15, 0);
                        dVar16 = (double)CONCAT44(*(u32 *)pdVar5, uVar3);
                        dVar15 = (double)CONCAT44(uVar3, SUB84(dVar17, 0));
                        dVar20 = (double)CONCAT44(uVar3, SUB84(dVar20, 0));
                    } else {
                        pdVar7[4] = in_xd2;
                        dVar16 = *pdVar5;
                        in_xd2 = dVar21;
                        dVar15 = dVar21;
                        dVar20 = dVar21;
                    }
                    pdVar5 = (double *)((int)pdVar7 + 0x24);
                    if (cVar24 == '\0') {
                        dVar16 = (double)(u64)(u32)((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar16 >> 0x20) +
                                                    SUB84(dVar16, 0));
                    }
                    if (cVar25 == '\0') {
                        *(int *)pdVar5 = SUB84(dVar16, 0);
                    } else {
                        *pdVar5 = in_xd2;
                    }
                    CacheBlockWriteBack(pdVar5);
                    if (cVar25 == '\0') {
                        dVar15 = (double)CONCAT44(*(u32 *)pdVar7, SUB84(dVar15, 0));
                        dVar17 = (double)CONCAT44(*(u32 *)((int)pdVar7 + 4), SUB84(dVar16, 0));
                        pdVar7 = pdVar7 + 1;
                    } else {
                        dVar15 = *pdVar7;
                        dVar17 = pdVar7[1];
                        pdVar7 = pdVar7 + 2;
                    }
                    if (cVar25 == '\0') {
                        uVar3 = *(u32 *)(pdVar7 + 2);
                        dVar20 = (double)CONCAT44(uVar3, SUB84(dVar20, 0));
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar3;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar17 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)dVar15 >> 0x20);
                    } else {
                        dVar20 = pdVar7[2];
                        unaff_r8[3] = pdVar7[3];
                        unaff_r8[2] = dVar20;
                        unaff_r8[1] = dVar17;
                        *unaff_r8 = dVar15;
                    }
                    uVar19 = SUB84(dVar20, 0);
                    unaff_r8 = unaff_r8 + 4;
                    *(u32 *)pdVar8 = 0xe0000000;
                    CacheBlockWriteBack(pdVar8);
                    if (*(int *)((int)pdVar8 + 0x3c) != a1) {
                        *(int *)((int)pdVar8 + 0x3c) = a1;
                        puVar4 = &g_8c4c2620;
                        uVar6 = 0;
                        pdVar5 = pdVar8 + 6;
                        pdVar7 = pdVar8 + 2;
                        gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar7, pdVar5, 0);
                        uVar3 = float_to_color_u8(puVar4, pdVar7, pdVar5, uVar6);
                        *(u32 *)(pdVar8 + 5) = uVar3;
                        uVar19 = g_8c4c2630;
                        if (cVar25 == '\0') {
                            uVar19 = g_8c4c2634;
                        }
                        uVar3 = float_to_color_u8(puVar4, pdVar7, pdVar5, uVar6);
                        *(u32 *)((int)pdVar8 + 0x2c) = uVar3;
                    }
                    uVar3 = (u32)((u64)dVar21 >> 0x20);
                    if (cVar25 == '\0') {
                        pdVar7 = (double *)((int)pdVar8 + 0x34);
                        dVar20 = (double)CONCAT44(*(u32 *)(pdVar8 + 6), uVar3);
                        dVar15 = (double)CONCAT44(uVar3, SUB84(dVar15, 0));
                    } else {
                        dVar20 = pdVar8[6];
                        pdVar7 = pdVar8 + 7;
                        dVar15 = dVar21;
                        in_xd2 = dVar21;
                    }
                    if (cVar24 == '\0') {
                        dVar20 = (double)(u64)(u32)((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar20 >> 0x20) +
                                                    SUB84(dVar20, 0));
                    }
                    if (cVar25 == '\0') {
                        *(int *)(pdVar8 + 4) = SUB84(dVar20, 0);
                        dVar17 = (double)CONCAT44(*(u32 *)pdVar7, uVar3);
                        dVar15 = (double)CONCAT44(uVar3, SUB84(dVar15, 0));
                        dVar20 = (double)CONCAT44(uVar3, uVar19);
                    } else {
                        pdVar8[4] = in_xd2;
                        dVar17 = *pdVar7;
                        in_xd2 = dVar21;
                        dVar15 = dVar21;
                        dVar20 = dVar21;
                    }
                    uVar3 = SUB84(dVar20, 0);
                    pdVar7 = (double *)((int)pdVar8 + 0x24);
                    if (cVar24 == '\0') {
                        dVar17 = (double)(u64)(u32)((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar17 >> 0x20) +
                                                    SUB84(dVar17, 0));
                    }
                    uVar6 = SUB84(dVar17, 0);
                    if (cVar25 == '\0') {
                        *(u32 *)pdVar7 = uVar6;
                    } else {
                        *pdVar7 = in_xd2;
                    }
                    CacheBlockWriteBack(pdVar7);
                LAB_8c2400f0:
                    if (cVar25 == '\0') {
                        in_dr0 = (double)CONCAT44(*(u32 *)pdVar8, SUB84(dVar15, 0));
                        dVar15 = (double)CONCAT44(*(u32 *)((int)pdVar8 + 4), uVar6);
                        pdVar7 = pdVar8 + 1;
                    } else {
                        in_dr0 = *pdVar8;
                        dVar15 = pdVar8[1];
                        pdVar7 = pdVar8 + 2;
                    }
                    if (cVar25 == '\0') {
                        uVar6 = *(u32 *)(pdVar7 + 2);
                        dVar20 = (double)CONCAT44(uVar6, uVar3);
                        *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar7 + 0x14);
                        *(u32 *)(unaff_r8 + 3) = uVar6;
                        *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar15 >> 0x20);
                        unaff_r8 = unaff_r8 + 2;
                        *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        dVar20 = pdVar7[2];
                        unaff_r8[3] = pdVar7[3];
                        unaff_r8[2] = dVar20;
                        unaff_r8[1] = dVar15;
                        *unaff_r8 = in_dr0;
                    }
                    unaff_r8 = unaff_r8 + 4;
                }
            }
            if (cVar25 == '\0') {
                uVar3 = SUB84(dVar21, 0);
                dVar21 = (double)CONCAT44((int)((u64)dVar21 >> 0x20), *(u32 *)((int)pdVar10 + 4));
                in_xd12 = dVar22;
                in_dr4 = (double)CONCAT44(uVar3, SUB84(dVar20, 0));
            } else {
                in_xd12 = *(double *)((int)pdVar10 + 4);
                in_dr4 = dVar22;
            }
            uVar3 = 8;
            if (cVar25 == '\0') {
                in_dr4 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), (int)((u64)in_dr14 >> 0x20));
                dVar22 = (double)CONCAT44(*(u32 *)(pdVar10 + 1), SUB84(in_dr14, 0));
            } else {
                dVar22 = pdVar10[1];
            }
            uStack_44 = uStack_44 + -1;
            in_dr14 = (double)CONCAT44((int)((u64)dVar22 >> 0x20), -SUB84(dVar22, 0));
            pdVar7 = pdVar8;
            pdVar8 = pdVar10;
            dVar22 = in_xd12;
        } while (uStack_44 != 0);
        if (pdVar9 < unaff_r8) {
            *(u32 *)pdVar10 = 0xf0000000;
            CacheBlockWriteBack(pdVar10);
            if (*(int *)((int)pdVar10 + 0x3c) != a1) {
                *(int *)((int)pdVar10 + 0x3c) = a1;
                puVar4 = &g_8c4c2620;
                uVar6 = 0;
                pdVar8 = pdVar10 + 6;
                pdVar7 = pdVar10 + 2;
                gfxlib_calls_scan_loop_23bae2(&g_8c4c2620, pdVar7, pdVar8, 0);
                uVar3 = float_to_color_u8(puVar4, pdVar7, pdVar8, uVar6);
                *(u32 *)(pdVar10 + 5) = uVar3;
                if (cVar25 == '\0') {
                    in_dr4 = (double)(u64)g_8c4c2634;
                } else {
                    in_dr4 = (double)CONCAT44(g_8c4c2634, g_8c4c2630);
                }
                uVar3 = float_to_color_u8(puVar4, pdVar7, pdVar8, uVar6);
                *(u32 *)((int)pdVar10 + 0x2c) = uVar3;
            }
            uVar6 = (u32)((u64)dVar21 >> 0x20);
            if (cVar25 == '\0') {
                pdVar7 = (double *)((int)pdVar10 + 0x34);
                dVar22 = (double)CONCAT44(*(u32 *)(pdVar10 + 6), uVar6);
                dVar15 = (double)CONCAT44(uVar6, SUB84(in_dr0, 0));
            } else {
                dVar22 = pdVar10[6];
                pdVar7 = pdVar10 + 7;
                dVar15 = dVar21;
                in_xd2 = dVar21;
            }
            if (cVar24 == '\0') {
                dVar22 =
                    (double)(u64)(u32)((float)((u64)dVar15 >> 0x20) * (float)((u64)dVar22 >> 0x20) + SUB84(dVar22, 0));
            }
            if (cVar25 == '\0') {
                *(int *)(pdVar10 + 4) = SUB84(dVar22, 0);
                dVar20 = (double)CONCAT44(*(u32 *)pdVar7, uVar6);
                dVar22 = (double)CONCAT44(uVar6, SUB84(dVar15, 0));
                dVar15 = (double)CONCAT44(uVar6, SUB84(in_dr4, 0));
            } else {
                pdVar10[4] = in_xd2;
                dVar20 = *pdVar7;
                in_xd2 = dVar21;
                dVar22 = dVar21;
                dVar15 = dVar21;
            }
            pdVar7 = (double *)((int)pdVar10 + 0x24);
            if (cVar24 == '\0') {
                dVar20 =
                    (double)(u64)(u32)((float)((u64)dVar22 >> 0x20) * (float)((u64)dVar20 >> 0x20) + SUB84(dVar20, 0));
            }
            if (cVar25 == '\0') {
                *(int *)pdVar7 = SUB84(dVar20, 0);
            } else {
                *pdVar7 = in_xd2;
            }
            CacheBlockWriteBack(pdVar7);
            if (cVar25 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)pdVar10, SUB84(dVar22, 0));
                dVar22 = (double)CONCAT44(*(u32 *)((int)pdVar10 + 4), SUB84(dVar20, 0));
                pdVar10 = pdVar10 + 1;
            } else {
                in_dr0 = *pdVar10;
                dVar22 = pdVar10[1];
                pdVar10 = pdVar10 + 2;
            }
            if (cVar25 == '\0') {
                uVar6 = *(u32 *)(pdVar10 + 2);
                in_dr4 = (double)CONCAT44(uVar6, SUB84(dVar15, 0));
                *(u32 *)((int)unaff_r8 + 0x1c) = *(u32 *)((int)pdVar10 + 0x14);
                *(u32 *)(unaff_r8 + 3) = uVar6;
                *(int *)((int)unaff_r8 + 0x14) = (int)((u64)dVar22 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)unaff_r8 = (int)((u64)in_dr0 >> 0x20);
            } else {
                in_dr4 = pdVar10[2];
                unaff_r8[3] = pdVar10[3];
                unaff_r8[2] = in_dr4;
                unaff_r8[1] = dVar22;
                *unaff_r8 = in_dr0;
            }
            unaff_r8 = unaff_r8 + 4;
            uStack_40 = (int)unaff_r8 + uStack_40 + (0x20 - (int)pdVar9);
        }
        uStack_30 = uStack_30 - 1;
        if (uStack_30 == 0) {
            g_8c4aa520 = g_8c4aa520 + (uStack_40 >> 5);
            g_8c4aa51c = g_8c4aa51c + iStack_34;
            return uVar3;
        }
    } while (true);
}
