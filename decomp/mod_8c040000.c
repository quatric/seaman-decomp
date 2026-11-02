/* Seaman (USA) region 0x8c040000-0x8c050000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * ret_const_0_046674  0x8c046674
 */
u32 ret_const_0_046674(void) {
    return 0;
}

/*
 * ret_const_0_04667c  0x8c04667c
 */
u32 ret_const_0_04667c(void) {
    return 0;
}

/*
 * game_sub_046684  0x8c046684
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4
 */
u32 game_sub_046684(int a0, u8 **a1, u32 a2, code *a3) {
    u32 uVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;
    code *pcVar7;
    u8 **ppuVar8;
    int *a4;
    u8 *puVar9;
    u32 *puVar10;
    u32 uVar11;
    u32 unaff_r8;
    u32 *ar5_00;
    u32 unaff_r9;
    code *pcVar12;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 uVar13;
    u32 unaff_r12;
    u32 unaff_r13;
    u32 unaff_r14;
    u64 *puVar14;
    float fVar15;
    double dVar16;
    u64 uVar17;
    double in_dr14;
    bool bVar18;
    u32 in_PR;
    u64 uStack_8;

    puVar14 = (u64 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14, 0), (u32)uStack_8);

    *(u32 *)((int)puVar14 + -4) = unaff_r14;
    *(u32 *)((int)puVar14 + -8) = unaff_r13;
    *(u32 *)((int)puVar14 + -0xc) = unaff_r12;
    *(u32 *)((int)puVar14 + -0x10) = unaff_r11;
    *(u32 *)((int)puVar14 + -0x14) = unaff_r10;
    *(u32 *)((int)puVar14 + -0x18) = unaff_r9;
    *(u32 *)((int)puVar14 + -0x1c) = unaff_r8;
    *(u32 *)((int)puVar14 + -0x20) = in_PR;
    *(u32 *)((int)puVar14 + -0x28c) = a2;
    ar5_00 = *(u32 **)((int)puVar14 + 4);
    pcVar12 = *(code **)((int)puVar14 + 8);
    uVar13 = 1;
    *(u32 *)((int)puVar14 + -0xf0) = 1;
    puVar10 = ar5_00 + 2;

    dVar16 = (double)CONCAT44(0x43c80000, *(u32 *)(a0 + 0x48));

    iVar4 = a0 + 0x48;

    fVar15 = SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20);

    pcVar2 = a3;
    Vec3_assign_f_10277c((u8 *)((int)puVar14 + -0x2c));
    Vec3_assign_f_10277c((u8 *)((int)puVar14 + -0x38));
    clear_3_words_102748((u8 *)((int)puVar14 + -0x44));

    *(u32 *)((int)puVar14 + -0xf4) = 0;

    uVar17 = (u64)(u32)fVar15;

    *(u32 *)((int)puVar14 + -0xf8) = 0;

    iVar4 = a0 + 0x14;
    pcVar7 = Vec3_assign;
    Vec3_assign(a0 + 0x80, iVar4, Vec3_assign, pcVar2);
    if (*(int *)(a0 + 0x31c) < 1) {
        if (*(int *)(a0 + 0x324) == 0) {
            *(u32 *)(a0 + 0x2ec) = 0;
        LAB_8c046822:
            do {
                iVar3 = *(int *)(a0 + 0x134);
                if ((0x17 < iVar3) || (iVar3 < 0))
                    goto override_jmp_8c046852_case_6;
                switch (iVar3) {
                case 0:
                    pcVar7 = (code *)0x128;
                    if ((*(int *)(a0 + 0x128) < 3) || (*(int *)((int)puVar14 + 0x38) != 1)) {
                        if (a3 == (code *)0x1) {
                            uVar1 = game_sub_057164(a0, a1, 0x128, pcVar2);
                            *(u32 *)((int)puVar14 + -0x11c) = uVar1;
                            *(u32 *)((int)puVar14 + -0x290) = *(u32 *)((int)puVar14 + -0x11c);
                            if (*(int *)((int)puVar14 + -0x290) == 0) {
                                *(int *)((int)puVar14 + -0x230) = a0;
                                *(u32 *)((int)puVar14 + -0x298) = *(u32 *)((int)puVar14 + -0x230);
                                pcVar2 = *(code **)((int)puVar14 + -0x230);
                                *(int *)(*(int *)((int)puVar14 + -0x298) + 0x134) = *(int *)(pcVar2 + 0x134) + 1;
                            }
                        } else {
                            uVar1 = Vec3_sub_05c28c(a0, iVar4, 0x128, pcVar2);
                            *(u32 *)((int)puVar14 + -0x118) = uVar1;
                            pcVar2 = *(code **)((int)puVar14 + -0x118);
                            if (pcVar2 == NULL) {
                                *(int *)((int)puVar14 + -0x22c) = a0;
                                pcVar7 = *(code **)((int)puVar14 + -0x22c);
                                *(u8 **)((int)pcVar7 + 0x134) =
                                    (u8 *)(*(int *)(*(int *)((int)puVar14 + -0x22c) + 0x134) + 1);
                            }
                        }
                        goto override_jmp_8c046852_case_6;
                    }
                    pcVar7 = (code *)0x134;
                    *(u32 *)(a0 + 0x134) = 0x17;
                    goto LAB_8c046822;
                case 1:
                    *(int *)((int)puVar14 + -0x234) = a0;
                    *(u32 *)((int)puVar14 + -0x294) = *(u32 *)((int)puVar14 + -0x234);
                    pcVar2 = (code *)0x2f8;
                    iVar4 = *(int *)(*(int *)((int)puVar14 + -0x234) + 0x2f8);
                    *(int *)(*(int *)((int)puVar14 + -0x294) + 0x2f8) = iVar4 + -1;
                    uVar1 = get_field_24_026024(pcVar12, iVar4, get_field_24_026024, 0x2f8);
                    *(u32 *)((int)puVar14 + -0x120) = uVar1;
                    if (*(int *)((int)puVar14 + -0x120) == 2) {
                        iVar4 = 0;
                        uVar1 = rand_range(a0, 0, 100);
                        *(u32 *)((int)puVar14 + -0x124) = uVar1;
                        iVar3 = *(int *)((int)puVar14 + -0x124);
                        if (iVar3 < 0x28) {
                            iVar3 = 1;
                        } else if (iVar3 < 0x5a) {
                            iVar3 = 0;
                        } else if (iVar3 < 0x5f) {
                            iVar3 = 3;
                        } else {
                            iVar3 = 6;
                        }
                    } else {
                        if (a3 == (code *)0x1) {
                            if (*(int *)(a0 + 0x128) == 3) {
                                iVar4 = 0;
                                uVar1 = rand_range(a0, 0, 100);
                                *(u32 *)((int)puVar14 + -300) = uVar1;
                                pcVar7 = *(code **)((int)puVar14 + -300);
                                pcVar2 = pcVar7;
                                if ((int)pcVar7 < 0x37) {
                                    iVar3 = 0;
                                } else if ((int)pcVar7 < 0x55) {
                                    iVar3 = 1;
                                } else {
                                    pcVar2 = (code *)0x5f;
                                    if ((int)pcVar7 < 0x5f) {
                                        iVar3 = 3;
                                    } else {
                                        iVar3 = 2;
                                    }
                                }
                            } else {
                                iVar4 = 0;
                                uVar1 = rand_range(a0, 0, 100);
                                *(u32 *)((int)puVar14 + -0x130) = uVar1;
                                iVar3 = *(int *)((int)puVar14 + -0x130);
                                if (iVar3 < 0x32) {
                                    iVar3 = 0;
                                } else if (iVar3 < 0x46) {
                                    iVar3 = 1;
                                } else if (iVar3 < 0x50) {
                                    iVar3 = 2;
                                } else if (iVar3 < 0x61) {
                                    iVar3 = 3;
                                } else {
                                    iVar3 = 4;
                                }
                                if (*(int *)(a0 + 0x324) != 0) {
                                    iVar3 = 0;
                                }
                            }
                        } else {
                            iVar4 = 0;
                            uVar1 = rand_range(a0, 0, 0x14);
                            *(u32 *)((int)puVar14 + -0x128) = uVar1;
                            if (*(int *)((int)puVar14 + -0x128) < 0xb) {
                                iVar3 = 0;
                            } else if (*(int *)((int)puVar14 + -0x128) < 0x13) {
                                iVar4 = 1;
                                iVar3 = 1;
                            } else {
                                iVar3 = 2;
                            }
                        }
                        if ((iVar3 == 2) && (0 < *(int *)(a0 + 0x2f8))) {
                            iVar3 = 0;
                        }
                    }
                    if (*(int *)(a0 + 0x31c) == -1) {
                        iVar3 = 6;
                    }
                    break;
                case 2:
                    if (a3 == (code *)0x1) {
                        uVar1 = rand_range(a0, 0, 100);
                        *(u32 *)((int)puVar14 + -0x148) = uVar1;
                        if (*(int *)((int)puVar14 + -0x148) < 0x1e) {
                            uVar11 = 0x28;
                            uVar6 = 0;
                            uVar1 = rand_range(a0, 0, 0x28);
                            *(u32 *)((int)puVar14 + -0x14c) = uVar1;
                            iVar4 = *(int *)((int)puVar14 + -0x14c);
                            if (iVar4 < 0x1e) {
                                if (iVar4 < 0xf) {
                                    if (8 < iVar4) {
                                        iVar4 = 2;
                                    }
                                } else {
                                    iVar4 = 1;
                                }
                            } else {
                                iVar4 = 0;
                            }
                            if (iVar4 == 6) {
                                uVar1 = get_field_24_026024(pcVar12, uVar6, uVar11, pcVar2);
                                *(u32 *)((int)puVar14 + -0x150) = uVar1;
                                if (*(int *)((int)puVar14 + -0x150) == 0) {
                                    a4 = *(int **)(a0 + 0x244);
                                    (**(code **)(*a4 + 0x178))(a4, uVar1, a4, pcVar2);

                                    *(int *)((int)puVar14 + -0x154) = (int)(uVar17 >> 0x20);
                                    uVar17 = CONCAT44(0x41700000, *(u32 *)((int)puVar14 + -0x154));

                                    if ((float)uVar17 < (float)(uVar17 >> 0x20)) {
                                        iVar4 = 6;
                                        goto LAB_8c046f7a;
                                    }
                                }
                                iVar4 = 0;
                            } else if (iVar4 == 3) {
                                iVar4 = 0;
                            }
                        LAB_8c046f7a:
                            fVar15 = (float)uVar17;

                            fVar15 = *(float *)(a0 + 0x1c);

                            if (0.0 < fVar15) {
                                uVar11 = 100;
                                uVar6 = 0;
                                uVar1 = rand_range(a0, 0, 100);
                                *(u32 *)((int)puVar14 + -0x158) = uVar1;
                                if (*(int *)((int)puVar14 + -0x158) < 5) {
                                    uVar1 = get_field_94_02aaa4(*(u32 *)((int)puVar14 + 0xc));
                                    *(u32 *)((int)puVar14 + -0x15c) = uVar1;
                                    uVar1 = libgcc_divide_helper_0101e4(*(u32 *)((int)puVar14 + -0x15c), 5);
                                    *(u32 *)((int)puVar14 + -0x238) = uVar1;
                                    *(u32 *)((int)puVar14 + -0xfc) = *(u32 *)((int)puVar14 + -0x238);
                                    if ((*(int *)((int)puVar14 + -0xfc) == 3) ||
                                        (*(int *)((int)puVar14 + -0xfc) == 8)) {
                                        uVar5 = 4;
                                        *(u32 *)(a0 + 0x218) = 0xd;
                                    } else {
                                        uVar1 = rand_range(a0, 0, 100);
                                        *(u32 *)((int)puVar14 + -0x160) = uVar1;
                                        if (*(int *)((int)puVar14 + -0x160) < 0x32) {
                                            uVar5 = 2;
                                            *(u32 *)(a0 + 0x218) = 0xb;
                                        } else {
                                            uVar5 = 3;
                                            *(u32 *)(a0 + 0x218) = 0xc;
                                        }
                                    }
                                    pcVar2 = NULL;
                                    pcVar7 = (code *)0xffffffff;
                                    CAnimBody_SetAnimation(a0 + 0xb0, uVar5, 0xffffffff, 0);
                                    goto LAB_8c04718e;
                                }
                            }
                            pcVar7 = (code *)0xffffffff;
                            CAnimBody_SetAnimation(a0 + 0xb0, iVar4 + 0x1a, 0xffffffff, 0);
                            *(int *)((int)puVar14 + -0x23c) = *(int *)(a0 + 0x128) + -3;
                            *(int *)((int)puVar14 + -0x240) = iVar4;
                            *(u32 *)((int)puVar14 + -0x290) = 0x218;
                            *(u32 *)((int)puVar14 + -0x298) = *(u32 *)((int)puVar14 + -0x23c);
                            *(int *)((int)puVar14 + -0x294) =
                                (*(int *)((int)puVar14 + -0x298) * 4 + *(int *)((int)puVar14 + -0x23c)) * 8;
                            *(u8 **)((int)puVar14 + -0x294) = &g_8c13639c + *(int *)((int)puVar14 + -0x294);
                            pcVar2 = *(code **)(*(int *)((int)puVar14 + -0x240) * 4 + *(int *)((int)puVar14 + -0x294));
                            *(code **)(*(int *)((int)puVar14 + -0x290) + a0) = pcVar2;
                            uVar5 = 0x218;
                            if (*(int *)(a0 + 0x218) == 1) {
                                uVar1 = rand_range(a0, 0xe, 0x14);
                                *(u32 *)((int)puVar14 + -0x164) = uVar1;
                                pcVar2 = *(code **)(a0 + 0x244);
                                uVar5 = *(u32 *)((int)puVar14 + -0x164);
                                pcVar7 = (code *)a1;
                                se_play_at_object(a0, uVar5, a1, pcVar2);
                            }
                        } else {
                            *(u32 *)(a0 + 0x218) = 0xffffffff;
                            uVar1 = rand_range(a0, 0, 3);
                            fVar15 = (float)uVar17;
                            *(u32 *)((int)puVar14 + -0x168) = uVar1;
                            pcVar2 = NULL;
                            pcVar7 = (code *)0xffffffff;
                            uVar5 = *(int *)((int)puVar14 + -0x168) + 0x60;
                            CAnimBody_SetAnimation(a0 + 0xb0, uVar5, 0xffffffff, 0);
                        }
                    LAB_8c04718e:

                        *(u32 *)((int)puVar14 + -0x244) = 0;
                        *(u32 *)(a0 + 0x24) = *(u32 *)((int)puVar14 + -0x244);
                        uVar17 = CONCAT44(*(u32 *)((int)puVar14 + -0x244), fVar15);
                        *(u32 *)(a0 + 0x28) = *(u32 *)((int)puVar14 + -0x244);

                    } else if ((a3 == NULL) || (a3 == (code *)0x2)) {
                        uVar1 = rand_range(a0, 0, 100);
                        *(u32 *)((int)puVar14 + -0x16c) = uVar1;
                        uVar5 = (u32)(0x32 < *(int *)((int)puVar14 + -0x16c));
                        pcVar2 = NULL;
                        pcVar7 = (code *)0xffffffff;
                        CAnimBody_SetAnimation(a0 + 0xb0, uVar5, 0xffffffff, 0);
                    } else {
                        pcVar2 = NULL;
                        pcVar7 = (code *)0xffffffff;
                        uVar5 = 0;
                        CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                    }
                    CAnimBody_SetFrame(a0 + 0xb0, uVar5, pcVar7, pcVar2);
                    *(u32 *)(a0 + 0x2b8) = 3;
                    uVar1 = get_field_1c_026dd8(a0 + 0xb0, uVar5, pcVar7);
                    *(u32 *)((int)puVar14 + -0x170) = uVar1;
                    iVar4 = *(int *)((int)puVar14 + -0x170);
                    rand_float(a0, uVar5, pcVar7);

                    *(int *)((int)puVar14 + -0x174) = (int)(uVar17 >> 0x20);
                    uVar17 = CONCAT44(*(u32 *)((int)puVar14 + -0x174), (int)uVar17);
                    *(u32 *)(a0 + 0x340) = *(u32 *)((int)puVar14 + -0x174);

                    uVar5 = (u32)uVar17;
                    if (iVar4 == 0x21) {
                        *(u32 *)(a0 + 0x284) = 0;
                        pcVar7 = (code *)0x32;
                        uVar1 = rand_range(a0, 0x1e, 0x32);
                        *(u32 *)((int)puVar14 + -0x178) = uVar1;
                        *(u32 *)(a0 + 0x280) = *(u32 *)((int)puVar14 + -0x178);
                        *(u32 *)(a0 + 0x218) = 6;
                    } else if (iVar4 == 0x23) {
                        uVar11 = 4;
                        uVar6 = 0;
                        uVar1 = rand_range(a0, 0, 4);
                        *(u32 *)((int)puVar14 + -0x17c) = uVar1;

                        uVar17 = (u64)uVar5;

                        Vec3_assign_f(a0 + 0x54, uVar6, uVar11, pcVar2);
                        *(u32 *)(a0 + 0x218) = 0;
                        *(u32 *)(a0 + 0x280) = 1;
                        pcVar2 = (code *)(a0 + 0xb0);
                        pcVar7 = CAnimBody_SetFrame;
                        CAnimBody_SetFrame(pcVar2, 0x280, CAnimBody_SetFrame, pcVar2);
                    } else if (iVar4 == 0x22) {
                        pcVar7 = (code *)0x7d00;
                        uVar1 = rand_range(a0, 9000, 32000);
                        *(u32 *)((int)puVar14 + -0x180) = uVar1;
                        *(u32 *)(a0 + 0x280) = *(u32 *)((int)puVar14 + -0x180);
                        *(u32 *)(a0 + 0x218) = 7;
                    } else if (((iVar4 == 0x60) || (iVar4 == 0x61)) || (iVar4 == 0x62)) {
                        pcVar7 = (code *)0xc;
                        uVar1 = rand_range(a0, 8, 0xc);
                        *(u32 *)((int)puVar14 + -0x184) = uVar1;
                        *(u32 *)(a0 + 0x280) = *(u32 *)((int)puVar14 + -0x184);
                    } else if ((iVar4 == 2) || (iVar4 == 4)) {
                        pcVar7 = (code *)0x4;
                        uVar1 = rand_range(a0, 2, 4);
                        *(u32 *)((int)puVar14 + -0x188) = uVar1;
                        *(u32 *)(a0 + 0x280) = *(u32 *)((int)puVar14 + -0x188);
                    } else {
                        pcVar2 = NULL;
                        *(u32 *)(a0 + 0x280) = 0;
                    }

                    *(u32 *)(a0 + 0x2c) = 0;

                    *(int *)((int)puVar14 + -0x248) = a0;
                    iVar4 = 0x134;
                    *(int *)(*(int *)((int)puVar14 + -0x248) + 0x134) =
                        *(int *)(*(int *)((int)puVar14 + -0x248) + 0x134) + 1;
                case 3:
                    if (a3 != (code *)0x1) {
                        *(u8 **)((int)puVar14 + -0x29c) = (u8 *)((int)puVar14 + -100);
                        iVar4 = a0 + 0x14;
                        pcVar12 = Vec3_make;
                        Vec3_make(iVar4, iVar4, pcVar7, Vec3_make, *(u32 *)((int)puVar14 + -0x29c));
                        puVar9 = (u8 *)((int)puVar14 + -0x74);
                        *(u8 **)((int)puVar14 + -0x29c) = puVar9;
                        Vec3_normalize((u8 *)((int)puVar14 + -100), iVar4, puVar9, pcVar12);
                        *(u8 **)((int)puVar14 + -0x29c) = (u8 *)((int)puVar14 + -0x84);
                        Vec3_scale((u8 *)((int)puVar14 + -0x74), &g_8c136584, puVar9, pcVar12,
                                   *(u32 *)((int)puVar14 + -0x29c));
                        timer_sub_031c74(a0, (u8 *)((int)puVar14 + -0x84), a1, pcVar12);
                        pcVar2 = (code *)0xffffffff;
                        pcVar7 = (code *)((int)puVar14 + -0x84);
                        Vec3_dtor(pcVar7, 0xffffffff, pcVar7, 0xffffffff);
                        Vec3_dtor((u8 *)((int)puVar14 + -0x74), 0xffffffff, pcVar7, pcVar2);
                        iVar4 = -1;
                        Vec3_dtor((u8 *)((int)puVar14 + -100), 0xffffffff, pcVar7, pcVar2);
                        *(int *)((int)puVar14 + -0x24c) = a0;

                        dVar16 = (double)CONCAT44(0x3f7fbe77, *(u32 *)(*(int *)((int)puVar14 + -0x24c) + 0x28));

                        fVar15 = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);

                        *(float *)(*(int *)((int)puVar14 + -0x24c) + 0x28) = fVar15;

                        game_sub_05ae54(a0, iVar4, pcVar7, pcVar2);
                    }
                    if (*(int *)(a0 + 0x128) == 4) {
                        if (*(int *)(a0 + 0x280) < 1) {
                            pcVar7 = (code *)(a0 + 0xb0);
                            uVar1 = CAnimBody_AdvanceFrame_wrapper(pcVar7, iVar4, pcVar7, pcVar2);
                            *(u32 *)((int)puVar14 + -0x1bc) = uVar1;
                            if (*(int *)((int)puVar14 + -0x1bc) == 1) {
                                uVar13 = 0;
                                *(u32 *)(a0 + 0x134) = 0;
                                pcVar7 = (code *)0x2;
                                *(u32 *)(a0 + 0x2b8) = 2;
                                *(u32 *)(a0 + 0x218) = 0xffffffff;
                            }
                            goto override_jmp_8c046852_case_6;
                        }
                        uVar1 = get_field_1c_026dd8(a0 + 0xb0, get_field_1c_026dd8, pcVar7);
                        *(u32 *)((int)puVar14 + -0x18c) = uVar1;
                        iVar4 = *(int *)((int)puVar14 + -0x18c);
                        if (iVar4 < 0x26) {
                            pcVar7 = (code *)0x22;
                            if (iVar4 < 0x22) {
                                if (iVar4 < 5) {
                                    if ((1 < iVar4) && ((iVar4 == 2 || (iVar4 == 4)))) {
                                        pcVar2 = (code *)0x340;
                                        uVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, 0x25, 0x22, 0x340);
                                        *(u32 *)((int)puVar14 + -0x1b8) = uVar1;
                                        if (*(int *)((int)puVar14 + -0x1b8) == 7) {
                                            *(int *)((int)puVar14 + -0x264) = a0;
                                            *(int *)(*(int *)((int)puVar14 + -0x264) + 0x280) =
                                                *(int *)(*(int *)((int)puVar14 + -0x264) + 0x280) + -1;
                                        }
                                        goto override_jmp_8c046852_case_6;
                                    }
                                } else if (iVar4 == 0x21) {
                                    uVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, 0x25, 0x22, pcVar2);
                                    *(u32 *)((int)puVar14 + -0x194) = uVar1;
                                    if (*(int *)((int)puVar14 + -0x194) == 7) {
                                        *(int *)((int)puVar14 + -0x250) = a0;
                                        pcVar7 = (code *)(*(int *)(*(int *)((int)puVar14 + -0x250) + 0x280) + -1);
                                        *(code **)(*(int *)((int)puVar14 + -0x250) + 0x280) = pcVar7;
                                        *(u32 *)(a0 + 0x218) = 6;
                                    }
                                    goto override_jmp_8c046852_case_6;
                                }
                            } else {
                                if (iVar4 == 0x22) {
                                    uVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, CAnimBody_AdvanceFrame_033d88,
                                                                          0x22, pcVar2);
                                    *(u32 *)((int)puVar14 + -0x198) = uVar1;
                                    if (*(int *)((int)puVar14 + -0x198) == 7) {
                                        *(int *)((int)puVar14 + -0x254) = a0;
                                        *(int *)(*(int *)((int)puVar14 + -0x254) + 0x280) =
                                            *(int *)(*(int *)((int)puVar14 + -0x254) + 0x280) + -1;
                                        *(u32 *)(a0 + 0x218) = 7;
                                    }
                                    if (*(int *)(a0 + 0x318) != 0) {
                                        CAnimBody_SetFrame(a0 + 0xb0, 0xb0, pcVar7, pcVar2);
                                        *(u32 *)(a0 + 0x280) = 0;
                                    }
                                    goto override_jmp_8c046852_case_6;
                                }
                                if (iVar4 == 0x23) {
                                    uVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, 0x25, 0xb0, pcVar2);
                                    *(u32 *)((int)puVar14 + -400) = uVar1;
                                    pcVar7 = *(code **)((int)puVar14 + -400);
                                    if ((u8 **)pcVar7 == (u8 **)0x7) {
                                        pcVar2 = NULL;
                                        uVar1 = 0x1a;
                                        CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                                        pcVar7 = CAnimBody_SetFrame;
                                        CAnimBody_SetFrame(a0 + 0xb0, uVar1, CAnimBody_SetFrame, pcVar2);
                                        *(u32 *)(a0 + 0x280) = 0;
                                    }
                                    goto override_jmp_8c046852_case_6;
                                }
                                if ((iVar4 == 0x24) || (iVar4 == 0x25)) {
                                    pcVar7 = (code *)(a0 + 0x340);
                                    uVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, 0x25, pcVar7, pcVar2);
                                    *(u32 *)((int)puVar14 + -0x19c) = uVar1;
                                    if (*(int *)((int)puVar14 + -0x19c) == 7) {
                                        *(int *)((int)puVar14 + -600) = a0;
                                        pcVar7 = (code *)0x280;
                                        *(int *)(*(int *)((int)puVar14 + -600) + 0x280) =
                                            *(int *)(*(int *)((int)puVar14 + -600) + 0x280) + -1;
                                    }
                                    goto override_jmp_8c046852_case_6;
                                }
                            }
                        } else if (iVar4 < 0x62) {
                            if ((0x60 < iVar4) || (iVar4 == 0x60)) {
                                pcVar2 = (code *)CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, 0x25, a0 + 0x340, pcVar2);
                                *(code **)((int)puVar14 + -0x1a0) = pcVar2;
                                pcVar7 = *(code **)((int)puVar14 + -0x1a0);
                                if ((u8 **)pcVar7 == (u8 **)0x7) {
                                    uVar1 = rand_range(a0, 0, 0x1e);
                                    *(u32 *)((int)puVar14 + -0x1a4) = uVar1;
                                    if (*(int *)((int)puVar14 + -0x1a4) < 10) {
                                        *(u32 *)((int)puVar14 + -0x290) = 0;
                                        *(code **)((int)puVar14 + -0x298) = rand_range;
                                        uVar1 = (**(code **)((int)puVar14 + -0x298))(
                                            a0, *(u32 *)((int)puVar14 + -0x290), 3, pcVar2);
                                        *(u32 *)((int)puVar14 + -0x1a8) = uVar1;
                                        *(u32 *)((int)puVar14 + -0x294) = 0xb0;
                                        CAnimBody_SetAnimation(a0 + *(int *)((int)puVar14 + -0x294),
                                                               *(int *)((int)puVar14 + -0x1a8) + 0x60, 0xffffffff, 0);
                                    }
                                    *(int *)((int)puVar14 + -0x25c) = a0;
                                    pcVar2 = *(code **)((int)puVar14 + -0x25c);
                                    pcVar7 = (code *)0x280;
                                    *(int *)(pcVar2 + 0x280) = *(int *)(*(int *)((int)puVar14 + -0x25c) + 0x280) + -1;
                                }
                                goto override_jmp_8c046852_case_6;
                            }
                        } else if (iVar4 == 0x62) {
                            pcVar7 = (code *)0x340;
                            uVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, a0 + 0x340, 0x340, pcVar2);
                            *(u32 *)((int)puVar14 + -0x1ac) = uVar1;
                            if (*(int *)((int)puVar14 + -0x1ac) == 7) {
                                uVar1 = rand_range(a0, 0, 0x1e);
                                *(u32 *)((int)puVar14 + -0x1b0) = uVar1;
                                if (*(int *)((int)puVar14 + -0x1b0) < 10) {
                                    uVar1 = rand_range(a0, 0, 3);
                                    *(u32 *)((int)puVar14 + -0x1b4) = uVar1;
                                    uVar6 = 0;
                                    uVar1 = 0xffffffff;
                                    iVar4 = *(int *)((int)puVar14 + -0x1b4) + 0x60;
                                    CAnimBody_SetAnimation(a0 + 0xb0, iVar4, 0xffffffff, 0);
                                    CAnimBody_SetFrame(a0 + 0xb0, iVar4, uVar1, uVar6);
                                }
                                *(int *)((int)puVar14 + -0x260) = a0;
                                pcVar7 = *(code **)((int)puVar14 + -0x260);
                                *(u8 **)(*(int *)((int)puVar14 + -0x260) + 0x280) = *(u8 **)((int)pcVar7 + 0x280) + -1;
                                pcVar2 = (code *)0x280;
                            }
                            goto override_jmp_8c046852_case_6;
                        }
                        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0x25, pcVar7, pcVar2);
                        *(u32 *)(a0 + 0x280) = 0;
                        goto override_jmp_8c046852_case_6;
                    }
                    if (*(int *)(a0 + 0x128) != 3)
                        goto override_jmp_8c046852_case_6;
                    if (*(int *)(a0 + 0x280) < 1) {
                        uVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar4, pcVar7, pcVar2);
                        *(u32 *)((int)puVar14 + -0x1e0) = uVar1;
                        if (*(int *)((int)puVar14 + -0x1e0) == 1) {
                            uVar13 = 0;
                            *(u32 *)(a0 + 0x134) = 0;
                            pcVar7 = (code *)0x2b8;
                            *(u32 *)(a0 + 0x2b8) = 2;
                            *(u32 *)(a0 + 0x218) = 0xffffffff;
                        }
                        goto override_jmp_8c046852_case_6;
                    }
                    iVar3 = a0 + 0xb0;
                    pcVar12 = get_field_1c_026dd8;
                    uVar1 = get_field_1c_026dd8(iVar3, get_field_1c_026dd8, iVar3);
                    *(u32 *)((int)puVar14 + -0x1c0) = uVar1;
                    iVar4 = *(int *)((int)puVar14 + -0x1c0);
                    pcVar2 = (code *)0x60;
                    if (iVar4 < 0x61) {
                        if (0x5f < iVar4) {
                        code_r0x8c047be0:
                            pcVar7 = CAnimBody_AdvanceFrame_033d88;
                            uVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, a0 + 0xb0, CAnimBody_AdvanceFrame_033d88,
                                                                  0x60);
                            *(u32 *)((int)puVar14 + -0x1c4) = uVar1;
                            if (*(int *)((int)puVar14 + -0x1c4) == 7) {
                                uVar1 = rand_range(a0, 0, 0x1e);
                                *(u32 *)((int)puVar14 + -0x1c8) = uVar1;
                                if (*(int *)((int)puVar14 + -0x1c8) < 10) {
                                    uVar1 = rand_range(a0, 0, 3);
                                    *(u32 *)((int)puVar14 + -0x1cc) = uVar1;
                                    uVar6 = 0;
                                    uVar1 = 0xffffffff;
                                    CAnimBody_SetAnimation(a0 + 0xb0, *(int *)((int)puVar14 + -0x1cc) + 0x60,
                                                           0xffffffff, 0);
                                    CAnimBody_SetFrame(a0 + 0xb0, CAnimBody_SetFrame, uVar1, uVar6);
                                }
                                *(int *)((int)puVar14 + -0x268) = a0;
                                pcVar2 = *(code **)((int)puVar14 + -0x268);
                                pcVar7 = (code *)0x280;
                                *(int *)(pcVar2 + 0x280) = *(int *)(*(int *)((int)puVar14 + -0x268) + 0x280) + -1;
                            }
                            goto override_jmp_8c046852_case_6;
                        }
                        if (((iVar4 < 5) && (1 < iVar4)) && ((iVar4 == 2 || (iVar4 == 4)))) {
                            pcVar7 = CAnimBody_AdvanceFrame_033d88;
                            uVar1 =
                                CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, pcVar12, CAnimBody_AdvanceFrame_033d88, 0x60);
                            *(u32 *)((int)puVar14 + -0x1dc) = uVar1;
                            if (*(int *)((int)puVar14 + -0x1dc) == 7) {
                                *(int *)((int)puVar14 + -0x270) = a0;
                                pcVar7 = (code *)0x280;
                                *(int *)(*(int *)((int)puVar14 + -0x270) + 0x280) =
                                    *(int *)(*(int *)((int)puVar14 + -0x270) + 0x280) + -1;
                            }
                        override_jmp_8c046852_case_6:
                            *(u32 *)((int)puVar14 + -0x10c) = uVar13;
                            *(code **)((int)puVar14 + -0x290) = free_if_nonnull_wrap_102790;
                            (**(code **)((int)puVar14 + -0x290))((u8 *)((int)puVar14 + -0x44), 0xffffffff, pcVar7,
                                                                 pcVar2);
                            *(u32 *)((int)puVar14 + -0x298) = 0xffffffff;
                            pcVar12 = free_if_nonnull_wrap_102790;
                            free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x38), *(u32 *)((int)puVar14 + -0x298),
                                                        pcVar7, free_if_nonnull_wrap_102790);
                            free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x2c), 0xffffffff, pcVar7, pcVar12);
                            *(u32 *)((int)puVar14 + -0x294) = *(u32 *)((int)puVar14 + -0x10c);
                            return *(u32 *)((int)puVar14 + -0x294);
                        }
                    } else if ((iVar4 < 99) && (0x60 < iVar4)) {
                        if (iVar4 == 0x61)
                            goto code_r0x8c047be0;
                        if (iVar4 == 0x62) {
                            pcVar2 = CAnimBody_AdvanceFrame_033d88;
                            pcVar7 = (code *)CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, pcVar12, iVar3,
                                                                           CAnimBody_AdvanceFrame_033d88);
                            *(code **)((int)puVar14 + -0x1d0) = pcVar7;
                            if (*(int *)((int)puVar14 + -0x1d0) == 7) {
                                uVar1 = rand_range(a0, 0, 0x1e);
                                *(u32 *)((int)puVar14 + -0x1d4) = uVar1;
                                if (*(int *)((int)puVar14 + -0x1d4) < 10) {
                                    uVar1 = rand_range(a0, 0, 3);
                                    *(u32 *)((int)puVar14 + -0x1d8) = uVar1;
                                    pcVar2 = NULL;
                                    uVar1 = 0xffffffff;
                                    CAnimBody_SetAnimation(a0 + 0xb0, *(int *)((int)puVar14 + -0x1d8) + 0x60,
                                                           0xffffffff, 0);
                                    CAnimBody_SetFrame(a0 + 0xb0, 0xb0, uVar1, pcVar2);
                                }
                                *(int *)((int)puVar14 + -0x26c) = a0;
                                pcVar7 = (code *)0x280;
                                *(int *)(*(int *)((int)puVar14 + -0x26c) + 0x280) =
                                    *(int *)(*(int *)((int)puVar14 + -0x26c) + 0x280) + -1;
                            }
                            goto override_jmp_8c046852_case_6;
                        }
                    }
                    pcVar7 = (code *)0xb0;
                    CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a0 + 0xb0, 0xb0, 0x60);
                    *(u32 *)(a0 + 0x280) = 0;
                    goto override_jmp_8c046852_case_6;
                case 4:
                    *(u32 **)((int)puVar14 + -0x29c) = &g_8c125be0;
                    *(u8 **)((int)puVar14 + -0x2a0) = (u8 *)((int)puVar14 + -0x94);
                    puVar10 = &g_8c125bf0;
                    CMushroomerBody_sub_032518(a0, a1, &g_8c125bf0, pcVar12);
                    Vec3_assign(a0 + 0x54, (u8 *)((int)puVar14 + -0x94), puVar10, pcVar12);
                    Vec3_dtor((u8 *)((int)puVar14 + -0x94), 0xffffffff, puVar10, pcVar12);
                    CMushroomerBody_sub_031bb4(a0, a1, a0 + 0x54, pcVar12);
                    *(int *)((int)puVar14 + -0x274) = a0;
                    *(int *)(*(int *)((int)puVar14 + -0x274) + 0x134) =
                        *(int *)(*(int *)((int)puVar14 + -0x274) + 0x134) + 1;
                    *(u32 *)(a0 + 0x40) = 0;
                    pcVar2 = pcVar12;
                case 5:
                    pcVar7 = (code *)(a0 + 0x54);
                    uVar1 = pure_virtual_stub();
                    *(u32 *)((int)puVar14 + -0x1e4) = uVar1;
                    if (*(int *)((int)puVar14 + -0x1e4) == 0) {
                        uVar13 = 0;
                        pcVar7 = NULL;
                        *(u32 *)(a0 + 0x134) = 0;
                        *(u32 *)(a0 + 0x40) = 5;
                    }
                default:
                    goto override_jmp_8c046852_case_6;
                case 7:
                    uVar1 = get_field_24_026024(pcVar12, iVar4, pcVar7, pcVar2);
                    *(u32 *)((int)puVar14 + -0x1e8) = uVar1;
                    if (*(int *)((int)puVar14 + -0x1e8) == 0) {
                        Vec3_ctor_xyz((u8 *)((int)puVar14 + -0xa4), iVar4, uVar1, Vec3_ctor_xyz);
                        *(u8 **)((int)puVar14 + -0x29c) = (u8 *)((int)puVar14 + -0xa4);
                        *(u8 **)((int)puVar14 + -0x2a0) = (u8 *)((int)puVar14 + -0xb4);
                        puVar9 = (u8 *)((int)puVar14 + -0x2c);
                        CMushroomerBody_sub_032518(a0, a1, puVar9, pcVar12);
                        *(int *)((int)puVar14 + -0x290) = a0;
                        *(int *)((int)puVar14 + -0x290) = *(int *)((int)puVar14 + -0x290) + 0x54;
                        *(code **)((int)puVar14 + -0x298) = Vec3_assign;
                        (**(code **)((int)puVar14 + -0x298))(*(u32 *)((int)puVar14 + -0x290),
                                                             (u8 *)((int)puVar14 + -0xb4), puVar9, pcVar12);
                        pcVar12 = (code *)((int)puVar14 + -0xb4);
                        Vec3_dtor(pcVar12, 0xffffffff, puVar9, pcVar12);
                        *(code **)((int)puVar14 + -0x294) = Vec3_dtor;
                        (**(code **)((int)puVar14 + -0x294))((u8 *)((int)puVar14 + -0xa4), 0xffffffff, puVar9, pcVar12);
                    } else {
                        uVar6 = ar5_00[1];
                        *(u32 *)((int)puVar14 + -0x44) = *ar5_00;
                        *(u32 *)((int)puVar14 + -0x40) = uVar6;
                        uVar1 = ar5_00[2];
                        *(u32 *)((int)puVar14 + -0x3c) = uVar1;
                        Vec3_ctor_xyz((u8 *)((int)puVar14 + -0xc4), uVar1, Vec3_ctor_xyz, uVar6);
                        *(u8 **)((int)puVar14 + -0x29c) = (u8 *)((int)puVar14 + -0xc4);
                        *(u8 **)((int)puVar14 + -0x2a0) = (u8 *)((int)puVar14 + -0xd4);
                        CMushroomerBody_sub_032518(a0, a1, (u8 *)((int)puVar14 + -0x44), pcVar12);
                        pcVar2 = Vec3_assign;
                        Vec3_assign(a0 + 0x54, (u8 *)((int)puVar14 + -0xd4), Vec3_assign, pcVar12);
                        Vec3_dtor((u8 *)((int)puVar14 + -0xd4), 0xffffffff, pcVar2, pcVar12);
                        Vec3_dtor((u8 *)((int)puVar14 + -0xc4), 0xffffffff, (u8 *)((int)puVar14 + -0xc4), pcVar12);
                    }

                    *(u32 *)(a0 + 0x58) = 0x43340000;

                    CMushroomerBody_sub_031bb4(a0, a1, a0 + 0x54, pcVar12);
                    *(int *)((int)puVar14 + -0x278) = a0;
                    *(int *)(*(int *)((int)puVar14 + -0x278) + 0x134) =
                        *(int *)(*(int *)((int)puVar14 + -0x278) + 0x134) + 1;
                    uVar1 = rand_range(a0, 0, 10);
                    *(u32 *)((int)puVar14 + -0x1ec) = uVar1;
                    if (8 < *(int *)((int)puVar14 + -0x1ec)) {
                        *(u32 *)(a0 + 700) = 1;
                    }
                    *(u32 *)(a0 + 0x40) = 5;
                case 8:
                    pcVar2 = (code *)(a0 + 0x48);
                    pcVar7 = (code *)(a0 + 0x54);
                    uVar1 = game_sub_04c314(a0, a1, pcVar7);
                    *(u32 *)((int)puVar14 + -0x1f0) = uVar1;
                    *(u32 *)((int)puVar14 + -0xf0) = *(u32 *)((int)puVar14 + -0x1f0);
                    if ((*(int *)(a0 + 0x2b8) == 7) && (*(int *)(a0 + 0x318) != 0)) {
                        *(u32 *)((int)puVar14 + -0xf0) = 0;
                        *(u32 *)(a0 + 0x318) = 0;
                    }
                    if (*(int *)((int)puVar14 + -0xf0) == 0) {
                        uVar13 = 0;
                        *(u32 *)(a0 + 0x134) = 0;
                        *(u32 *)(a0 + 700) = 0;
                    }
                    goto override_jmp_8c046852_case_6;
                case 10:
                    *(u32 *)(a0 + 700) = 1;
                    pcVar7 = (code *)(a0 + 0x34c);
                    uVar1 = game_sub_0564c4(a0, a1, pcVar7, a3);
                    *(u32 *)((int)puVar14 + -500) = uVar1;
                    pcVar2 = a3;
                    if (*(int *)((int)puVar14 + -500) == 0) {
                        *(u32 *)(a0 + 0x178) = 0;
                        *(u32 *)(a0 + 700) = 0;
                        pcVar7 = (code *)0x134;
                        *(u32 *)(a0 + 0x134) = 0;
                        uVar13 = 0;
                    }
                    goto override_jmp_8c046852_case_6;
                case 0xb:
                    pcVar7 = (code *)(a0 + 0x34c);
                    uVar1 = game_sub_055c38(a0, a1, pcVar7, a3);
                    *(u32 *)((int)puVar14 + -0x1f8) = uVar1;
                    pcVar2 = a3;
                    if (*(int *)((int)puVar14 + -0x1f8) == 0) {
                        pcVar7 = (code *)0x178;
                        *(u32 *)(a0 + 0x178) = 0;
                        *(u32 *)(a0 + 0x134) = 0;
                        uVar13 = 0;
                        pcVar2 = NULL;
                    }
                    goto override_jmp_8c046852_case_6;
                case 0xc:
                    Vec3_copy_assign((u8 *)((int)puVar14 + -0xe0), ar5_00, (u8 *)((int)puVar14 + -0xe0), pcVar2);
                    *(u32 *)((int)puVar14 + -0x29c) = 0xffffffff;
                    pcVar2 = (code *)((int)puVar14 + -0xe0);
                    uVar1 = game_sub_059fc4(a0, a1, *(u32 *)((int)puVar14 + -0x28c), pcVar2);
                    *(u32 *)((int)puVar14 + -0x1fc) = uVar1;
                    *(u32 *)((int)puVar14 + -0x110) = (u32)(*(int *)((int)puVar14 + -0x1fc) == 0);
                    pcVar7 = (code *)0xffffffff;
                    free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0xe0), 0xffffffff, 0xffffffff, pcVar2);
                    if (*(int *)((int)puVar14 + -0x110) != 0) {
                        *(u32 *)(a0 + 0x134) = 0;
                        uVar13 = 0;
                    }
                    goto override_jmp_8c046852_case_6;
                case 0xd:
                    Vec3_copy_assign((u8 *)((int)puVar14 + -0xec), ar5_00);
                    *(u32 *)((int)puVar14 + -0x29c) = 0xffffffff;
                    pcVar7 = *(code **)((int)puVar14 + -0x28c);
                    pcVar2 = (code *)game_sub_059fc4(a0, a1, pcVar7, (u8 *)((int)puVar14 + -0xec));
                    *(code **)((int)puVar14 + -0x200) = pcVar2;
                    *(u32 *)((int)puVar14 + -0x114) = (u32)(*(int *)((int)puVar14 + -0x200) == 0);
                    free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0xec), 0xffffffff, pcVar7, pcVar2);
                    if (*(int *)((int)puVar14 + -0x114) != 0) {
                        *(u32 *)(a0 + 0x134) = 0;
                        uVar13 = 0;
                    }
                    goto override_jmp_8c046852_case_6;
                case 0x12:
                    pcVar2 = NULL;
                    uVar11 = 0xffffffff;
                    uVar6 = 0x1a;
                    uVar1 = CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    *(u32 *)((int)puVar14 + -0x204) = uVar1;
                    if (*(int *)((int)puVar14 + -0x204) != 6) {
                        pcVar2 = CAnimBody_SetFrame;
                        CAnimBody_SetFrame(a0 + 0xb0, uVar6, uVar11, CAnimBody_SetFrame);
                    }
                    pcVar7 = (code *)0xb0;
                    uVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar6, 0xb0, pcVar2);
                    *(u32 *)((int)puVar14 + -0x208) = uVar1;
                    if (*(int *)((int)puVar14 + -0x208) == 1) {
                        *(int *)((int)puVar14 + -0x27c) = a0;
                        *(int *)(*(int *)((int)puVar14 + -0x27c) + 0x134) =
                            *(int *)(*(int *)((int)puVar14 + -0x27c) + 0x134) + 1;
                    }
                    goto override_jmp_8c046852_case_6;
                case 0x13:
                    ppuVar8 = a1;
                    Vec3_assign(a0 + 0x54, a1, pcVar7, pcVar2);
                    uVar1 = get_field_24_026024(pcVar12, ppuVar8, pcVar7, pcVar2);
                    *(u32 *)((int)puVar14 + -0x20c) = uVar1;
                    if (*(int *)((int)puVar14 + -0x20c) == 0) {

                        *(u32 *)(a0 + 0x5c) = 0xc4e10000;

                    } else {

                        dVar16 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));

                        fVar15 = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);

                        *(float *)(a0 + 0x5c) = fVar15;
                    }
                    *(u32 *)(a0 + 0x40) = 5;
                    *(u32 *)(a0 + 0x290) = 0;
                    *(int *)((int)puVar14 + -0x280) = a0;
                    *(int *)(*(int *)((int)puVar14 + -0x280) + 0x134) =
                        *(int *)(*(int *)((int)puVar14 + -0x280) + 0x134) + 1;
                case 0x14:
                    *(u32 *)(a0 + 700) = 1;
                    pcVar7 = (code *)(a0 + 0x54);
                    uVar1 = game_sub_04c314(a0, a1, pcVar7);
                    *(u32 *)((int)puVar14 + -0x210) = uVar1;
                    if (*(int *)((int)puVar14 + -0x210) == 0) {
                        *(u32 *)(a0 + 0x40) = 5;
                        *(int *)((int)puVar14 + -0x284) = a0;
                        pcVar7 = *(code **)((int)puVar14 + -0x284);
                        *(u8 **)(*(int *)((int)puVar14 + -0x284) + 0x134) = *(u8 **)((int)pcVar7 + 0x134) + 1;
                        Vec3_assign(a0 + 0x54, a1, pcVar7, pcVar2);
                        uVar1 = get_field_24_026024(pcVar12, a1, pcVar7, pcVar2);
                        *(u32 *)((int)puVar14 + -0x214) = uVar1;
                        if (*(int *)((int)puVar14 + -0x214) == 0) {

                            *(u32 *)(a0 + 0x54) = 0xc4fa0000;

                        } else {

                            dVar16 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));

                            fVar15 = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);

                            *(float *)(a0 + 0x54) = fVar15;
                        }
                    }
                    goto override_jmp_8c046852_case_6;
                case 0x15:
                    *(u32 *)(a0 + 700) = 1;
                    pcVar7 = (code *)(a0 + 0x54);
                    uVar1 = game_sub_04c314(a0, a1, pcVar7);
                    *(u32 *)((int)puVar14 + -0x218) = uVar1;
                    if (*(int *)((int)puVar14 + -0x218) == 0) {
                        *(u32 *)(a0 + 0x40) = 5;
                        *(int *)((int)puVar14 + -0x288) = a0;
                        uVar6 = 0x134;
                        *(int *)(*(int *)((int)puVar14 + -0x288) + 0x134) =
                            *(int *)(*(int *)((int)puVar14 + -0x288) + 0x134) + 1;
                        uVar1 = get_field_24_026024(pcVar12, 0x134, pcVar7, pcVar2);
                        *(u32 *)((int)puVar14 + -0x21c) = uVar1;
                        if (*(int *)((int)puVar14 + -0x21c) == 0) {
                            Vec3_assign_f(a0 + 0x54, a0 + 0x54, pcVar7, pcVar2);
                        } else {
                            Vec3_assign_f(a0 + 0x54, uVar6, pcVar7, pcVar2);
                        }
                    }
                    goto override_jmp_8c046852_case_6;
                case 0x16:
                    *(u32 *)(a0 + 700) = 1;
                    *(u32 *)(a0 + 800) = 1;
                    pcVar7 = (code *)(a0 + 0x54);
                    uVar1 = game_sub_04c314(a0, a1, pcVar7);
                    *(u32 *)((int)puVar14 + -0x220) = uVar1;
                    if (*(int *)((int)puVar14 + -0x220) == 0) {
                        *(u32 *)(a0 + 0x40) = 5;
                        *(u32 *)(a0 + 0x134) = 0;
                        uVar13 = rand_range(a0, 0x78, 0x96);
                        *(u32 *)((int)puVar14 + -0x224) = uVar13;
                        pcVar7 = (code *)0x31c;
                        *(u32 *)(a0 + 0x31c) = *(u32 *)((int)puVar14 + -0x224);
                        uVar13 = 0;
                    }
                    goto override_jmp_8c046852_case_6;
                case 0x17:
                    pcVar2 = (code *)game_sub_05c640(a0, a1, a3, pcVar12);
                    *(code **)((int)puVar14 + -0x228) = pcVar2;
                    pcVar7 = *(code **)((int)puVar14 + -0x228);
                    if ((u8 **)pcVar7 == NULL) {
                        *(u32 *)(a0 + 0x40) = 5;
                        *(u32 *)(a0 + 0x134) = 0;
                        uVar13 = 0;
                    }
                    goto override_jmp_8c046852_case_6;
                }
                ppuVar8 = &(&DATA_8c046ba0);
                pcVar7 = (code *)ppuVar8;
                switch (iVar3) {
                case 0:
                    iVar4 = 0x134;
                    *(u32 *)(a0 + 0x134) = 2;
                    uVar17 = uVar17 & 0xffffffff;

                    *(u32 *)(a0 + 0x2c) = 0;

                    break;
                case 1:
                    if (a3 != NULL) {
                        if (a3 == (code *)0x1) {
                            *(u32 *)(a0 + 0x134) = 7;
                            break;
                        }
                        if (a3 != (code *)0x2) {
                            uVar13 = rand_range(a0, 0, 2);
                            *(u32 *)((int)puVar14 + -0x134) = uVar13;
                            uVar13 = 0;
                            CAnimBody_SetAnimation(a0 + 0xb0, *(u32 *)((int)puVar14 + -0x134), 0xffffffff, 0);
                            *(u32 *)(a0 + 0x134) = 0;
                            *(u32 *)((int)puVar14 + -0x108) = 0;
                            puVar9 = (u8 *)((int)puVar14 + -0x44);
                            free_if_nonnull_wrap_102790(puVar9, 0xffffffff, puVar9, uVar13);
                            free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x38), 0xffffffff, puVar9, uVar13);
                            free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x2c), 0xffffffff, puVar9, uVar13);
                            return *(u32 *)((int)puVar14 + -0x108);
                        }
                    }
                    *(u32 *)(a0 + 0x134) = 4;
                    break;
                case 2:
                    if (a3 == (code *)0x1) {
                        iVar4 = 10;
                        *(u32 *)(a0 + 0x134) = 10;
                    } else {
                        *(u32 *)(a0 + 0x134) = 0xb;
                    }
                    break;
                case 3:
                    pcVar2 = (code *)((int)puVar14 + -0x54);
                    *(code **)((int)puVar14 + -0x29c) = pcVar2;
                    Vec3_make(a0 + 0x14, iVar4, &(&DATA_8c046ba0), pcVar2, *(u32 *)((int)puVar14 + -0x29c));
                    Vec3_cos_angle((u8 *)((int)puVar14 + -0x54), &g_8c125d48, ppuVar8, pcVar2);

                    *(int *)((int)puVar14 + -0x138) = (int)(uVar17 >> 0x20);
                    in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)puVar14 + -0x138));

                    iVar4 = -1;
                    Vec3_dtor((u8 *)((int)puVar14 + -0x54), 0xffffffff, ppuVar8, pcVar2);

                    dVar16 = (double)CONCAT44(0x41c80000, (int)uVar17);

                    bVar18 = (float)((u64)dVar16 >> 0x20) < SUB84(in_dr14, 0);

                    if (bVar18) {

                        dVar16 = (double)CONCAT44(0x42820000, SUB84(dVar16, 0));

                        bVar18 = (float)((u64)dVar16 >> 0x20) < SUB84(in_dr14, 0);

                        if (!bVar18) {
                            pcVar2 = (code *)(a0 + 0x14);
                            uVar1 = Vec3_sub_023334(pcVar2, &g_8c125d48, Vec3_sub_023334, pcVar2);
                            *(u32 *)((int)puVar14 + -0x13c) = uVar1;
                            if (*(int *)((int)puVar14 + -0x13c) == 3) {
                                pcVar2 = NULL;
                                CAnimBody_SetAnimation(a0 + 0xb0, 0x24, 0xffffffff, 0);
                            } else if (*(int *)((int)puVar14 + -0x13c) == 4) {
                                pcVar2 = NULL;
                                CAnimBody_SetAnimation(a0 + 0xb0, 0x25, 0xffffffff, 0);
                            }
                            *(u32 *)(a0 + 0x2b8) = 3;
                            *(u32 *)(a0 + 0x134) = 3;
                            uVar6 = 10;
                            uVar1 = rand_range(a0, 3, 10);
                            *(u32 *)((int)puVar14 + -0x140) = uVar1;
                            *(u32 *)(a0 + 0x280) = *(u32 *)((int)puVar14 + -0x140);
                            if (*(int *)(a0 + 0x128) == 3) {
                                *(u32 *)(a0 + 0x280) = 0;
                            }
                            game_sub_032be0(a0, 0x50, uVar6);

                            *(int *)((int)puVar14 + -0x144) = (int)((u64)dVar16 >> 0x20);
                            uVar17 = CONCAT44(*(u32 *)((int)puVar14 + -0x144), SUB84(dVar16, 0));
                            *(u32 *)(a0 + 0x340) = *(u32 *)((int)puVar14 + -0x144);

                            iVar4 = a0 + 0x340;
                            pcVar7 = (code *)0xb0;
                            CAnimBody_SetFrame(a0 + 0xb0, iVar4, 0xb0, pcVar2);
                            break;
                        }
                    }
                    *(u32 *)(a0 + 0x134) = 2;
                    uVar17 = (u64)dVar16 & 0xffffffff;
                    pcVar7 = (code *)ppuVar8;

                    *(u32 *)(a0 + 0x2c) = 0;

                    break;
                case 4:
                    *(u32 *)(a0 + 0x134) = 0xd;
                    break;
                default:
                    *(u32 *)(a0 + 0x134) = 2;
                    uVar17 = uVar17 & 0xffffffff;

                    *(u32 *)(a0 + 0x2c) = 0;

                    break;
                case 6:
                    goto LAB_8c046e6c;
                }
            } while (true);
        }
        *(u32 *)((int)puVar14 + -0x104) = 0;
        free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x44), 0xffffffff, pcVar7, pcVar2);
        free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x38), 0xffffffff, pcVar7, pcVar2);
        free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x2c), 0xffffffff, pcVar7, pcVar2);
        uVar13 = *(u32 *)((int)puVar14 + -0x104);
    } else {
        *(u32 *)((int)puVar14 + -0x100) = 0;
        free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x44), 0xffffffff, pcVar7, pcVar2);
        free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x38), 0xffffffff, pcVar7, pcVar2);
        free_if_nonnull_wrap_102790((u8 *)((int)puVar14 + -0x2c), 0xffffffff, pcVar7, pcVar2);
        uVar13 = *(u32 *)((int)puVar14 + -0x100);
    }
    return uVar13;
LAB_8c046e6c:
    pcVar7 = (code *)0x12;
    *(u32 *)(a0 + 0x134) = 0x12;
    goto LAB_8c046822;
}

/*
 * game_sub_048868  0x8c048868
 * area name: game code; nothing names its area yet
 * called by: game_sub_03c94c
 */
u32 game_sub_048868(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 ar6_00;
    u32 *puVar4;
    u32 uVar5;
    float fVar6;
    u64 in_dr0;
    u64 uVar7;
    double dVar8;
    u32 in_stack_00000004;
    u32 in_stack_00000008;
    u32 *in_stack_0000000c;
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[16];

    uVar5 = 1;
    Vec3_assign_f_10277c(auStack_2c);
    iVar2 = a0 + 0x14;
    Vec3_assign(a0 + 0x80, iVar2, a2, a3);
LAB_8c0488bc:
    fVar6 = (float)in_dr0;
    iVar1 = *(int *)(a0 + 0x134);
    if ((iVar1 < 7) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            iVar2 = Vec3_sub_05c28c(a0, iVar2, a2, a3);
            if (iVar2 == 0) {
                *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
            }
            break;
        case 1:
            iVar1 = get_field_1c_026dd8(a0 + 0xb0, iVar2, a2);
            if ((iVar1 != 0x15) && (iVar2 = get_field_1c_026dd8(a0 + 0xb0, iVar2, a2), iVar2 != 0x16))
                goto LAB_8c04899c;
            *(u32 *)(a0 + 0x134) = 0;
            uVar5 = 0;
            break;
        case 2:

            fVar6 = *(float *)(a0 + 0x1c);

            uVar7 = (u64)(u32)fVar6;
            if (fVar6 <= 0.0) {
            LAB_8c048a88:
                iVar2 = rand_range(a0, 0, 100);
                if (iVar2 < 0x33) {
                    iVar2 = 0;
                } else {
                    iVar2 = 1;
                }
            } else {
                ar6_00 = 100;
                uVar3 = 0;
                iVar2 = rand_range(a0, 0, 100);
                if (2 < iVar2)
                    goto LAB_8c048a88;
                uVar3 = get_field_94_02aaa4(in_stack_00000008);
                iVar2 = libgcc_divide_helper_0101e4(uVar3, 5);
                if ((iVar2 == 3) || (iVar2 == 8)) {
                    iVar2 = 4;
                    *(u32 *)(a0 + 0x218) = 0xd;
                } else {
                    iVar2 = 2;
                    *(u32 *)(a0 + 0x218) = 0xb;
                }
            }
            a3 = 0;
            a2 = -1;
            CAnimBody_SetAnimation(a0 + 0xb0, iVar2, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, iVar2, a2, a3);
            *(u32 *)(a0 + 0x2b8) = 3;
            rand_float(a0, iVar2, a2);

            *(int *)(a0 + 0x340) = (int)(uVar7 >> 0x20);

            *(u32 *)(a0 + 0x2c) = 0;

            iVar1 = get_field_1c_026dd8(a0 + 0xb0, iVar2, a2);
            if ((iVar1 == 2) || (iVar1 == 4)) {
                a2 = 4;
                iVar2 = 2;
                uVar3 = rand_range(a0, 2, 4);
                *(u32 *)(a0 + 0x280) = uVar3;
            } else {
                *(u32 *)(a0 + 0x280) = 0;
            }
            *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
        case 3:
            Vec3_make(a0 + 0x14, iVar2, a2, a3, auStack_3c);
            Vec3_normalize(auStack_3c, iVar2, a2, a3);
            Vec3_scale(auStack_4c, &g_8c136588, a2, a3, auStack_5c);
            timer_sub_031c74(a0, auStack_5c, a1, a3);
            Vec3_dtor(auStack_5c, 0xffffffff, a1, a3);
            Vec3_dtor(auStack_4c, 0xffffffff, a1, a3);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_3c, 0xffffffff, a1, a3);

            dVar8 = (double)CONCAT44(0x3f7fbe77, *(u32 *)(a0 + 0x28));

            fVar6 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);

            *(float *)(a0 + 0x28) = fVar6;

            game_sub_05ae54(a0, uVar3, a1, a3);
            if (*(int *)(a0 + 0x280) < 1) {
                iVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar3, a1, a3);
                a2 = a1;
                if (iVar2 == 1) {
                    uVar5 = 0;
                    *(u32 *)(a0 + 0x134) = 0;
                    *(u32 *)(a0 + 0x2b8) = 2;
                    *(u32 *)(a0 + 0x218) = 0xffffffff;
                }
            } else {
                iVar2 = get_field_1c_026dd8(a0 + 0xb0, uVar3, a1);
                if ((iVar2 == 2) || (iVar2 = get_field_1c_026dd8(a0 + 0xb0, uVar3, a1), iVar2 == 4)) {
                    timer_stop_94(a0, uVar3, a1, a3);
                    iVar2 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, uVar3, a1, a3);
                    a2 = a1;
                    if (iVar2 == 7) {
                        *(int *)(a0 + 0x280) = *(int *)(a0 + 0x280) + -1;
                    }
                } else {
                    iVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar3, a1, a3);
                    a2 = a1;
                    if (iVar2 == 1) {
                        *(u32 *)(a0 + 0x280) = 0;
                    }
                }
            }
            break;
        case 4:
            if (*(int *)(a0 + 0x128) == 0) {
                puVar4 = &g_8c125bf0;
                CMushroomerBody_sub_032518(a0, a1, &g_8c125bf0, in_stack_00000004);
                Vec3_assign(a0 + 0x54, auStack_6c, puVar4, in_stack_00000004);
                Vec3_dtor(auStack_6c, 0xffffffff, puVar4, in_stack_00000004);
            } else {
                puVar4 = &g_8c125bf0;
                CMushroomerBody_sub_032518(a0, a1, &g_8c125bf0, in_stack_00000004);
                Vec3_assign(a0 + 0x54, auStack_7c, puVar4, in_stack_00000004);
                Vec3_dtor(auStack_7c, 0xffffffff, puVar4, in_stack_00000004);
            }
            CMushroomerBody_sub_031bb4(a0, a1, a0 + 0x54, in_stack_00000004);
            *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
            *(u32 *)(a0 + 0x40) = 0;
            a3 = in_stack_00000004;
        case 5:
            a2 = a0 + 0x54;
            iVar2 = pure_virtual_stub();
            if (iVar2 == 0) {
                uVar5 = 0;
                *(u32 *)(a0 + 0x134) = 0;
                *(u32 *)(a0 + 0x40) = 5;
            }
            break;
        case 6:
            a2 = in_stack_0000000c[1];
            iVar2 = game_sub_05c9fc(a0, *in_stack_0000000c, a2, a3);
            if (iVar2 == 0) {
                *(u32 *)(a0 + 0x178) = 0;
                *(u32 *)(a0 + 0x40) = 5;
                *(u32 *)(a0 + 0x134) = 0;
                uVar5 = 0;
            }
        }
    }
    free_if_nonnull_wrap_102790(auStack_2c, 0xffffffff, a2, a3);
    return uVar5;
LAB_8c04899c:
    a2 = 200;
    iVar2 = 0;
    iVar1 = rand_range(a0, 0, 200);
    if (iVar1 < 100) {
        *(u32 *)(a0 + 0x134) = 2;
        in_dr0 = in_dr0 & 0xffffffff;

        *(u32 *)(a0 + 0x2c) = 0;

    } else if (iVar1 < 0xc5) {
        *(u32 *)(a0 + 0x134) = 4;
    } else {
        *(u32 *)(a0 + 0x134) = 6;
    }
    goto LAB_8c0488bc;
}

/*
 * game_sub_048f8c  0x8c048f8c
 * area name: game code; nothing names its area yet
 */
u32 game_sub_048f8c(u64 *a0, u32 a1, int a2, u64 *a3) {
    int iVar1;
    int iVar2;
    u64 *puVar3;
    u32 uVar4;
    u32 *ar5_00;
    u32 uVar5;
    u32 uVar6;
    float fVar7;
    double in_dr0;
    u64 uVar8;
    float fVar11;
    u64 uVar9;
    double dVar10;
    u64 in_dr6;
    double in_dr14;
    u64 in_xd0;
    bool bVar12;
    char cVar13;
    char cVar14;
    u64 uStack_12c;
    float fStack_e4;
    float fStack_e0;
    float afStack_dc[4];
    u8 auStack_cc[12];
    u8 auStack_c0[16];
    u8 auStack_b0[12];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[20];

    cVar14 = '\0';
    cVar13 = '\0';
    uVar5 = (u32)((u64)in_dr6 >> 0x20);
    uVar6 = 1;
    uVar4 = a1;
    iVar2 = a2;
    Vec3_sub(a2, a1, a2, a3, auStack_54);
    Vec3_normalize(auStack_54, uVar4, iVar2, a3);
    Vec3_ctor_copy(auStack_34, auStack_64, iVar2, a3);
    Vec3_dtor(auStack_64, 0xffffffff, iVar2, a3);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_54, 0xffffffff, iVar2, a3);
    Vec3_make((u32 *)((int)a0 + 0x14), uVar4, iVar2, a3, auStack_74);
    Vec3_make(auStack_34, uVar4, iVar2, a3, auStack_84);
    Vec3_cos_angle(auStack_74, auStack_84, iVar2, a3);
    fStack_e0 = SUB84(in_dr0, 0);
    fVar7 = (float)((u64)in_dr0 >> 0x20);
    if (cVar14 == '\0') {
        fStack_e0 = fVar7;
        fVar7 = afStack_dc[0];
    }
    afStack_dc[0] = fVar7;
    Vec3_dtor(auStack_84, 0xffffffff, iVar2, a3);
    Vec3_dtor(auStack_74, 0xffffffff, iVar2, a3);
    Vec3_ctor_copy(auStack_44, a1, iVar2, a3);
    ar5_00 = (u32 *)((int)a0 + 0x14);
    Vec3_assign(a0 + 0x10, ar5_00, iVar2, a3);
    iVar1 = get_field_1c_026dd8(a0 + 0x16, ar5_00, iVar2);
    fVar7 = SUB84(in_dr0, 0);
    if (iVar1 == 5) {
        if (cVar14 == '\0') {
            in_dr14 = 402653249.1875;
            in_dr0 = (double)CONCAT44(0x40a00000, fVar7);
        } else {
            in_dr14 = 2048.000501394272;
            in_dr0 = 2.97615090336666e-312;
            fStack_e0 = 1.96182e-43;
        }
        fStack_e4 = 5.0;
    } else if (iVar1 == 6) {
        in_dr0 = (double)CONCAT44(0x3f800000, fVar7);
        if (cVar14 == '\0') {
            fStack_e4 = 1.0;
            in_dr14 = 402653249.1875;
        } else {
            fStack_e0 = 1.0;
            in_dr14 = 2.97624156480792e-312;
            fStack_e4 = fVar7;
        }
    } else if (iVar1 == 10) {
        if (cVar14 == '\0') {
            in_dr14 = 33554440.1484375;
        } else {
            in_dr14 = -8.977643917409603e-251;
        }
    }
    iVar1 = (int)a0[8];
    if ((iVar1 < 6) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            iVar1 = Vec3_sub_05c28c(a0, ar5_00, iVar2, a3);
            if (iVar1 != 0) {
                Vec3_dtor(auStack_44, 0xffffffff, iVar2, a3);
                Vec3_dtor(auStack_34, 0xffffffff, iVar2, a3);
                return 1;
            }
            if (cVar14 == '\0') {
                fVar7 = SUB84(in_dr0, 0);
                *(u32 *)(a0 + 0x44) = 0x455ac000;
            } else {
                fVar7 = 3500.0;
                a0[0x44] = 0x8c031bb4455ac000;
            }
            iVar1 = a2;
            CMushroomerBody_sub_031bb4(a0, a1, a2, a3);
            uVar4 = 0x8c2803f4;
            iVar2 = (int)a0[0x25] * 0x18 + 0x8c2803f4;
            copy6_to_fields(a0, iVar2, iVar1, 0x8c2803f4);
            timer_start_94(a0, iVar2, iVar1);
            if (cVar14 == '\0') {
                fVar7 = *(float *)((int)a0 + 0x24);
            } else {
                in_xd0 = *(u64 *)((int)a0 + 0x24);
            }
            uVar8 = (u64)(u32)fVar7;
            if (fVar7 == 0.0) {
                if (cVar14 == '\0') {
                    dVar10 = (double)CONCAT44(0x41a00000, fVar7);
                    *(u32 *)(a0 + 6) = 0x41a00000;
                } else {
                    dVar10 = 4.67383042659946e-312;
                    a0[6] = 0xdc41a00000;
                }
            } else {
                iVar2 = a2;
                Vec3_distance_sq(a1, a2, iVar1, uVar4);
                if (cVar14 == '\0') {
                    dVar10 = (double)CONCAT44(*(u32 *)((int)a0 + 0x24), (int)(uVar8 >> 0x20));
                } else {
                    dVar10 = *(double *)((int)a0 + 0x24);
                    in_xd0 = uVar8;
                }
                if (cVar13 == '\0') {
                    dVar10 = (double)(u64)(u32)(SUB84(dVar10, 0) / (float)((u64)dVar10 >> 0x20));
                } else {
                    dVar10 = dVar10 / dVar10;
                }
                if (cVar14 == '\0') {
                    *(int *)(a0 + 6) = SUB84(dVar10, 0);
                } else {
                    a0[6] = in_xd0;
                }
            }
            uVar8 = (u64)dVar10 & 0xffffffff;
            if (cVar14 == '\0') {
                *(u32 *)((int)a0 + 0x2c) = 0;
            } else {
                *(u64 *)((int)a0 + 0x2c) = uVar8;
            }
            Vec3_make((u32 *)((int)a0 + 0x14), iVar2, iVar1, uVar4, auStack_94);
            Vec3_make(auStack_34, iVar2, iVar1, uVar4, auStack_a4);
            Vec3_cos_angle(auStack_94, auStack_a4, iVar1, uVar4);
            if (cVar14 == '\0') {
                *(int *)((int)a0 + 0x224) = (int)(uVar8 >> 0x20);
            } else {
                *(u64 *)((int)a0 + 0x224) = uVar8;
            }
            Vec3_dtor(auStack_a4, 0xffffffff, iVar1, uVar4);
            Vec3_dtor(auStack_94, 0xffffffff, iVar1, uVar4);
            if (cVar14 == '\0') {
                uVar8 = CONCAT44((int)a0[0x44], *(u32 *)((int)a0 + 0x24));
            } else {
                in_xd0 = *(u64 *)((int)a0 + 0x24);
                uVar8 = a0[0x44];
            }
            if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
                iVar2 = rand_range(a0, 0, 2);
                a3 = NULL;
                uVar4 = 0xffffffff;
                iVar2 = iVar2 + 5;
                CAnimBody_SetAnimation(a0 + 0x16, iVar2, 0xffffffff, 0);
            } else {
                a3 = NULL;
                uVar4 = 0xffffffff;
                iVar2 = 10;
                CAnimBody_SetAnimation(a0 + 0x16, 10, 0xffffffff, 0);
            }
            iVar1 = get_field_1c_026dd8(a0 + 0x16, iVar2, uVar4);
            if (iVar1 == 5) {
                if (cVar14 != '\0') {
                    fStack_e0 = 1.96182e-43;
                }
            } else if ((iVar1 == 6) && (cVar14 != '\0')) {
                fStack_e0 = 1.0;
            }
            if (*(int *)((int)a0 + 0x124) == 0x11) {
                if (cVar14 == '\0') {
                    *(u32 *)((int)a0 + 0x24) = 0x40c00000;
                } else {
                    *(u64 *)((int)a0 + 0x24) = 0xb040c00000;
                }
            }
            puVar3 = a0 + 0x16;
            CAnimBody_SetFrame(puVar3, iVar2, uVar4, a3);
            *(u32 *)(a0 + 8) = 1;
            if (cVar14 == '\0') {
                uVar8 = CONCAT44(0x42340000, fStack_e0);
            } else {
                in_xd0 = CONCAT44(afStack_dc[0], fStack_e0);
                uVar8 = 0x8c01420042340000;
            }
            if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
                uVar5 = rand();
                iVar2 = libgcc_divide_helper_01031c(uVar5, 8, uVar4);
                *(int *)(a0 + 0x50) = iVar2 + 8;
                *(u32 *)(a0 + 8) = 3;
                break;
            }
            if (cVar14 == '\0') {
                *(u32 *)((int)a0 + 0x2c) = 0;
            } else {
                *(u64 *)((int)a0 + 0x2c) = uVar8 & 0xffffffff;
            }
            a3 = NULL;
            iVar2 = -1;
            ar5_00 = (u32 *)0x6;
            CAnimBody_SetAnimation(a0 + 0x16, 6, 0xffffffff, 0);
            *(u32 *)(a0 + 0x50) = 0;
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x4f) = 0x3f000000;
            } else {
                a0[0x4f] = 0x2b83f000000;
            }
            *(u32 *)(a0 + 8) = 1;
            *(u32 *)(a0 + 0x57) = 3;
        case 1:
            if (cVar14 == '\0') {
                fVar7 = 90.0;
            } else {
                in_xd0 = CONCAT44(afStack_dc[0], fStack_e0);
                fStack_e0 = 90.0;
                fVar7 = 3.0;
            }
            if (cVar13 == '\0' && fVar7 < fStack_e0) {
                if (cVar14 == '\0') {
                    fVar7 = *(float *)(a0 + 5);
                    fVar11 = 3.0;
                } else {
                    in_xd0 = a0[5];
                    fVar7 = 3.0;
                    fVar11 = 0.05;
                }
                if (cVar13 != '\0' || fVar7 <= fVar11) {
                    if (cVar14 == '\0') {
                        dVar10 = (double)CONCAT44(0x3d4ccccd, (int)a0[5]);
                    } else {
                        in_xd0 = a0[5];
                        dVar10 = 6.20130889485342e-312;
                    }
                    if (cVar13 == '\0') {
                        fVar7 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar10 + dVar10, 0);
                    }
                    if (cVar14 == '\0') {
                        *(float *)(a0 + 5) = fVar7;
                    } else {
                        a0[5] = in_xd0;
                    }
                } else {
                    if (cVar14 == '\0') {
                        dVar10 = (double)CONCAT44(0x3d4ccccd, (int)a0[5]);
                    } else {
                        in_xd0 = a0[5];
                        dVar10 = 8.741916293825089e+86;
                    }
                    if (cVar13 == '\0') {
                        fVar7 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar10 - dVar10, 0);
                    }
                    if (cVar14 == '\0') {
                        *(float *)(a0 + 5) = fVar7;
                    } else {
                        a0[5] = in_xd0;
                    }
                }
                iVar1 = a2;
                if (*(int *)((int)a0 + 0x124) == 0x11) {
                    Vec3_set_xyz(auStack_b0, ar5_00, iVar2, a3);
                    a3 = (u64 *)((int)a0 + 0x14);
                    game_sub_031eb0(a0, a1, a2, a3, auStack_c0);
                    Vec3_assign((u32 *)((int)a0 + 0x14), auStack_c0, iVar1, a3);
                    Vec3_dtor(auStack_c0, 0xffffffff, iVar1, a3);
                    uVar4 = 0xffffffff;
                    object_dtor_delete(auStack_b0, 0xffffffff, iVar1, a3);
                } else {
                    Vec3_set_xyz(auStack_cc, ar5_00, iVar2, a3);
                    a3 = (u64 *)((int)a0 + 0x14);
                    game_sub_031eb0(a0, a1, a2, a3, afStack_dc);
                    Vec3_assign((u32 *)((int)a0 + 0x14), afStack_dc, iVar1, a3);
                    Vec3_dtor(afStack_dc, 0xffffffff, iVar1, a3);
                    uVar4 = 0xffffffff;
                    object_dtor_delete(auStack_cc, 0xffffffff, iVar1, a3);
                }
                if (cVar14 == '\0') {
                    dVar10 = (double)CONCAT44(0x3e99999a, (int)a0[0x4f]);
                } else {
                    in_xd0 = a0[0x4f];
                    dVar10 = 8192.001910400391;
                }
                if (cVar13 == '\0') {
                    fVar7 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar10 + dVar10, 0);
                }
                if (cVar14 == '\0') {
                    *(float *)(a0 + 0x4f) = fVar7;
                    fVar7 = *(float *)(a0 + 0x4f);
                    fVar11 = 6.0;
                } else {
                    a0[0x4f] = in_xd0;
                    fVar7 = 6.0;
                    fVar11 = 24.0;
                }
                if (cVar13 == '\0' && fVar11 < fVar7) {
                    if (cVar14 == '\0') {
                        *(u32 *)(a0 + 0x4f) = 0x40c00000;
                    } else {
                        a0[0x4f] = 0x41c0000040c00000;
                    }
                }
                CAnimBody_AdvanceFrame_033d88(a0 + 0x16, uVar4, iVar1, a3);
            } else {
                a3 = NULL;
                uVar5 = 0xffffffff;
                uVar4 = 5;
                puVar3 = a0 + 0x16;
                iVar2 = CAnimBody_SetAnimation(puVar3, 5, 0xffffffff, 0);
                if (iVar2 != 6) {
                    puVar3 = a0 + 0x16;
                    CAnimBody_SetFrame(puVar3, uVar4, uVar5, a3);
                }
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x12) = 0;
                } else {
                    a0[0x12] = (u64)(u32)fStack_e0;
                }
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x13) = 0;
                } else {
                    a0[0x13] = (u64)(u32)fStack_e0;
                }
                *(u32 *)(a0 + 8) = 3;
                uVar4 = rand();
                iVar2 = libgcc_divide_helper_01031c(uVar4, 8, uVar5);
                *(int *)(a0 + 0x50) = iVar2 + 8;
            }
            break;
        case 3:
            if (*(int *)((int)a0 + 0x124) == 0x11) {
                if (cVar14 == '\0') {
                    in_dr0 = (double)(u64)(u32)a0[0x4f];
                } else {
                    in_xd0 = a0[0x4f];
                }
                dVar10 = (double)CONCAT44(0x3f800000, SUB84(in_dr0, 0));
                if (cVar13 == '\0') {
                    fVar7 = SUB84(in_dr0, 0) + 1.0;
                } else {
                    fVar7 = SUB84(dVar10 + dVar10, 0);
                }
                if (cVar14 == '\0') {
                    *(float *)(a0 + 0x4f) = fVar7;
                    dVar10 = (double)CONCAT44(0x3f000000, (int)a0[5]);
                } else {
                    a0[0x4f] = in_xd0;
                    in_xd0 = a0[5];
                    dVar10 = 3.73993469111571e-312;
                }
                if (cVar13 == '\0') {
                    fVar7 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar10 + dVar10, 0);
                }
                if (cVar14 == '\0') {
                    *(float *)(a0 + 5) = fVar7;
                    in_dr0 = (double)CONCAT44(*(u32 *)((int)a0 + 0x24), (int)a0[5]);
                } else {
                    a0[5] = in_xd0;
                    in_xd0 = a0[5];
                    in_dr0 = *(double *)((int)a0 + 0x24);
                }
                if (cVar13 == '\0' && (float)((u64)in_dr0 >> 0x20) < SUB84(in_dr0, 0)) {
                    if (cVar14 == '\0') {
                        uVar4 = *(u32 *)((int)a0 + 0x24);
                        in_dr0 = (double)CONCAT44(uVar4, SUB84(in_dr0, 0));
                        *(u32 *)(a0 + 5) = uVar4;
                    } else {
                        in_dr0 = *(double *)((int)a0 + 0x24);
                        a0[5] = (u64)in_dr0;
                    }
                }
            }
            iVar1 = get_field_1c_026dd8(a0 + 0x16, a0 + 0x16, iVar2);
            if ((iVar1 == 5) || (iVar1 == 6)) {
                CAnimBody_GetCurFrame(a0 + 0x16, iVar1, iVar2, a3);
                if (cVar13 == '\0') {
                    bVar12 = SUB84(in_dr14, 0) < (float)((u64)in_dr0 >> 0x20);
                } else {
                    bVar12 = in_dr14 < in_dr0;
                }
                if (bVar12) {
                    if (cVar14 == '\0') {
                        dVar10 = (double)CONCAT44(0x3d4ccccd, (int)a0[5]);
                    } else {
                        in_xd0 = a0[5];
                        dVar10 = 1.268568884059579e+106;
                    }
                    if (cVar13 == '\0') {
                        fVar7 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar10 + dVar10, 0);
                    }
                    if (cVar14 == '\0') {
                        *(float *)(a0 + 5) = fVar7;
                        uVar9 = CONCAT44(*(u32 *)((int)a0 + 0x24), (int)a0[5]);
                    } else {
                        a0[5] = in_xd0;
                        in_xd0 = a0[5];
                        uVar9 = *(u64 *)((int)a0 + 0x24);
                    }
                    puVar3 = (u64 *)((int)a0 + 0x24);
                    if (cVar13 == '\0' && (float)((u64)uVar9 >> 0x20) < (float)uVar9) {
                        if (cVar14 == '\0') {
                            *(u32 *)(a0 + 5) = *(u32 *)((int)a0 + 0x24);
                        } else {
                            a0[5] = *(u64 *)((int)a0 + 0x24);
                        }
                    }
                } else {
                    puVar3 = a0 + 5;
                    if (cVar14 == '\0') {
                        dVar10 = (double)CONCAT44(0x3d4ccccd, (int)*puVar3);
                    } else {
                        in_xd0 = *puVar3;
                        dVar10 = 1.34160945841353e-311;
                    }
                    if (cVar13 == '\0') {
                        fVar7 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar10 - dVar10, 0);
                    }
                    if (cVar14 == '\0') {
                        *(float *)(a0 + 5) = fVar7;
                        fVar7 = *(float *)(a0 + 5);
                    } else {
                        a0[5] = in_xd0;
                        in_xd0 = a0[5];
                    }
                    if (cVar13 == '\0' && fVar7 < 0.0) {
                        if (cVar14 == '\0') {
                            *(u32 *)(a0 + 5) = 0;
                        } else {
                            a0[5] = (u64)(u32)fVar7;
                        }
                    }
                }
                if (cVar14 == '\0') {
                    fVar7 = *(float *)(a0 + 0x4f);
                } else {
                    in_xd0 = a0[0x4f];
                    fVar7 = fStack_e4;
                    fStack_e4 = fStack_e0;
                }
                if (cVar13 != '\0' || fVar7 <= fStack_e4) {
                    if (cVar14 == '\0') {
                        in_dr0 = (double)CONCAT44(0x3e19999a, (int)a0[0x4f]);
                    } else {
                        in_xd0 = a0[0x4f];
                        in_dr0 = 1.3585920559782e-311;
                    }
                    if (cVar13 == '\0') {
                        fVar7 = (float)((u64)in_dr0 >> 0x20);
                        in_dr0 = (double)CONCAT44(fVar7, SUB84(in_dr0, 0) + fVar7);
                    } else {
                        in_dr0 = in_dr0 + in_dr0;
                    }
                    if (cVar14 == '\0') {
                        *(int *)(a0 + 0x4f) = SUB84(in_dr0, 0);
                    } else {
                        a0[0x4f] = in_xd0;
                    }
                } else {
                    if (cVar14 == '\0') {
                        in_dr0 = (double)CONCAT44(0x3e19999a, (int)a0[0x4f]);
                    } else {
                        in_xd0 = a0[0x4f];
                        in_dr0 = 2.6866146507523e+96;
                    }
                    if (cVar13 == '\0') {
                        fVar7 = (float)((u64)in_dr0 >> 0x20);
                        in_dr0 = (double)CONCAT44(fVar7, SUB84(in_dr0, 0) - fVar7);
                    } else {
                        in_dr0 = in_dr0 - in_dr0;
                    }
                    puVar3 = a0;
                    if (cVar14 == '\0') {
                        *(int *)(a0 + 0x4f) = SUB84(in_dr0, 0);
                    } else {
                        a0[0x4f] = in_xd0;
                    }
                }
                if ((int)a0[0x50] < 1) {
                    iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0x16, puVar3, iVar2, a3);
                    if (iVar1 == 1) {
                        *(u32 *)(a0 + 0x57) = 2;
                        a3 = NULL;
                        iVar2 = -1;
                        uVar4 = 0;
                        CAnimBody_SetAnimation(a0 + 0x16, 0, 0xffffffff, 0);
                        CAnimBody_SetFrame(a0 + 0x16, uVar4, iVar2, a3);
                        *(u32 *)(a0 + 0x50) = 0;
                    }
                } else {
                    iVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0x16, puVar3, iVar2, a3);
                    if (iVar1 == 1) {
                        *(int *)(a0 + 0x50) = (int)a0[0x50] + -1;
                    }
                }
            } else {
                uStack_12c._4_4_ = CAnimBody_AdvanceFrame_033b98(a0 + 0x16, iVar1, iVar2, a3);
                if (uStack_12c._4_4_ == 1) {
                    *(u32 *)(a0 + 0x57) = 2;
                    *(u32 *)(a0 + 8) = 5;
                }
            }
            Vec3_distance_sq(a1, a2, iVar2, a3);
            if (cVar14 == '\0') {
                uStack_12c = (double)CONCAT44(uStack_12c._4_4_, (int)((u64)in_dr0 >> 0x20));
                dVar10 = (double)CONCAT44((int)a0[9], (int)a0[5]);
            } else {
                in_xd0 = a0[5];
                dVar10 = (double)a0[9];
                uStack_12c = in_dr0;
            }
            if (cVar13 == '\0') {
                fVar7 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
            } else {
                fVar7 = SUB84(dVar10 + dVar10, 0);
            }
            if (cVar14 == '\0') {
                uStack_12c = (double)CONCAT44((u32)uStack_12c, fVar7);
            }
            if (cVar13 != '\0' || (float)((u64)uStack_12c >> 0x20) <= SUB84(uStack_12c, 0)) {
                uVar8 = (u64)uStack_12c & 0xffffffff;
                if (cVar14 == '\0') {
                    *(u32 *)((int)a0 + 0x2c) = 0;
                    uVar8 = (u64)(u32)a0[7];
                } else {
                    *(u64 *)((int)a0 + 0x2c) = uVar8;
                    in_xd0 = a0[7];
                }
                if ((float)uVar8 == 0.0) {
                    if (cVar14 == '\0') {
                        dVar10 = (double)CONCAT44(0x41a00000, (int)a0[5]);
                    } else {
                        in_xd0 = a0[5];
                        dVar10 = 1.0392155376404425e+106;
                    }
                    if (cVar13 == '\0') {
                        fVar7 = SUB84(dVar10, 0) / (float)((u64)dVar10 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar10 / dVar10, 0);
                    }
                    if (cVar14 == '\0') {
                        *(float *)((int)a0 + 0x3c) = fVar7;
                    } else {
                        *(u64 *)((int)a0 + 0x3c) = in_xd0;
                    }
                } else {
                    if (cVar14 == '\0') {
                        dVar10 = (double)CONCAT44((int)a0[7], (int)a0[5]);
                    } else {
                        in_xd0 = a0[5];
                        dVar10 = (double)a0[7];
                    }
                    if (cVar13 == '\0') {
                        fVar7 = SUB84(dVar10, 0) / (float)((u64)dVar10 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar10 / dVar10, 0);
                    }
                    if (cVar14 == '\0') {
                        *(float *)((int)a0 + 0x3c) = fVar7;
                    } else {
                        *(u64 *)((int)a0 + 0x3c) = in_xd0;
                    }
                }
                a3 = (u64 *)0x40;
                *(u32 *)(a0 + 8) = 4;
            }
            break;
        case 4:
            if (cVar14 == '\0') {
                dVar10 = (double)CONCAT44(*(u32 *)((int)a0 + 0x3c), (int)a0[5]);
            } else {
                in_xd0 = a0[5];
                dVar10 = *(double *)((int)a0 + 0x3c);
            }
            if (cVar13 == '\0') {
                fVar7 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
            } else {
                fVar7 = SUB84(dVar10 - dVar10, 0);
            }
            if (cVar14 == '\0') {
                *(float *)(a0 + 5) = fVar7;
                fVar7 = *(float *)(a0 + 5);
            } else {
                a0[5] = in_xd0;
            }
            if (cVar13 == '\0' && fVar7 < 0.0) {
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 5) = 0;
                } else {
                    a0[5] = (u64)(u32)fVar7;
                }
            }
            a3 = a0 + 0x4f;
            iVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0x16, CAnimBody_AdvanceFrame_033b98, 0xb0, a3);
            if (iVar2 == 1) {
                *(u32 *)(a0 + 0x57) = 2;
                uVar6 = 0;
            }
        }
    }
    game_sub_051a68(a0, a2, a1, a3);
    Vec3_dtor(auStack_44, 0xffffffff, a1, a3);
    Vec3_dtor(auStack_34, 0xffffffff, a1, a3);
    return uVar6;
}

/*
 * game_sub_049b68  0x8c049b68
 * area name: game code; nothing names its area yet
 */
u32 game_sub_049b68(int a0, u64 *a1, code *a2, code *a3) {
    u32 uVar1;
    u32 uVar2;
    u32 *puVar3;
    int iVar4;
    code *pcVar5;
    u64 *puVar6;
    u32 uVar7;
    u8 *puVar8;
    double *ar6_00;
    code *pcVar9;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 uVar10;
    u32 unaff_r12;
    u32 unaff_r13;
    u32 unaff_r14;
    double *pdVar11;
    u32 uVar12;
    float fVar13;
    u64 in_dr0;
    double dVar14;
    double dVar15;
    u64 uVar16;
    u64 uVar17;
    u32 in_fr3;
    u64 in_dr4;
    u64 in_dr6;
    double in_dr12;
    float fVar18;
    double in_dr14;
    float fVar19;
    bool bVar20;
    u32 in_PR;
    u8 auStack_20[16];
    double dStack_10;
    u64 uStack_8;

    uStack_8 = CONCAT44(SUB84(in_dr14, 0), (u32)uStack_8);
    uStack_8._0_4_ = (int)((u64)in_dr14 >> 0x20);
    pdVar11 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12, 0), (int)((u64)in_dr12 >> 0x20));

    *(u32 *)((int)pdVar11 + -4) = unaff_r14;
    *(u32 *)((int)pdVar11 + -8) = unaff_r13;
    *(u32 *)((int)pdVar11 + -0xc) = unaff_r12;
    *(u32 *)((int)pdVar11 + -0x10) = unaff_r11;
    *(u32 *)((int)pdVar11 + -0x14) = unaff_r10;
    *(u32 *)((int)pdVar11 + -0x18) = in_PR;

    *(int *)((int)pdVar11 + -0x268) = (int)((u64)in_dr4 >> 0x20);
    *(int *)((int)pdVar11 + -0x264) = (int)in_dr4;
    *(int *)((int)pdVar11 + -0x260) = (int)((u64)in_dr6 >> 0x20);
    *(int *)((int)pdVar11 + -0x25c) = (int)in_dr6;

    uVar10 = 1;
    pcVar5 = Vec3_set_zero;
    pcVar9 = a2;
    Vec3_set_zero((u8 *)((int)pdVar11 + -0x24));
    Vec3_set_zero((u8 *)((int)pdVar11 + -0x30));
    Vec3_ctor_copy((u8 *)((int)pdVar11 + -0x40), a2, pcVar9, a3);
    Vec3_distance_sq(a1, (u8 *)((int)pdVar11 + -0x40), pcVar9, a3);

    *(int *)((int)pdVar11 + -0x158) = (int)((u64)in_dr0 >> 0x20);
    dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x158), (int)in_dr0);
    *(u32 *)((int)pdVar11 + -0x140) = *(u32 *)((int)pdVar11 + -0x158);

    *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -0x70);
    puVar6 = a1;
    Vec3_sub((u8 *)((int)pdVar11 + -0x40), a1, pcVar9, a3, *(u32 *)((int)pdVar11 + -0x26c));
    *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -0x80);
    Vec3_normalize((u8 *)((int)pdVar11 + -0x70), puVar6, pcVar9, a3);
    Vec3_ctor_copy((u8 *)((int)pdVar11 + -0x50), (u8 *)((int)pdVar11 + -0x80), pcVar9, a3);
    Vec3_dtor((u8 *)((int)pdVar11 + -0x80), 0xffffffff, pcVar9, a3);
    Vec3_dtor((u8 *)((int)pdVar11 + -0x70), 0xffffffff, pcVar9, a3);
    Vec3_ctor_copy((u8 *)((int)pdVar11 + -0x60), a1, pcVar9, a3);
    pcVar5 = (code *)(a0 + 0x14);
    Vec3_assign(a0 + 0x80, pcVar5, pcVar9, a3);
    uVar2 = SUB84(dVar14, 0);
    if (*(int *)(a0 + 0x128) == 1) {

        *(u32 *)(a0 + 0x220) = 0x40d00000;

        uVar1 = get_field_1c_026dd8(a0 + 0xb0, pcVar5, pcVar9);
        *(u32 *)((int)pdVar11 + -0x15c) = uVar1;
        iVar4 = *(int *)((int)pdVar11 + -0x15c);
        uVar1 = SUB84(in_dr14, 0);
        if (iVar4 == 5) {

            *(u32 *)((int)pdVar11 + -0x144) = 0x42000000;
            in_dr14 = (double)CONCAT44(0x41980000, uVar1);
            in_dr12 = 524288.1283569336;

        } else if (iVar4 == 6) {

            *(u32 *)((int)pdVar11 + -0x144) = 0x42200000;
            in_dr14 = (double)CONCAT44(0x41800000, uVar1);
            in_dr12 = 536871043.6875;

        } else if (iVar4 == 10) {

            in_dr14 = (double)CONCAT44(0x41200000, uVar1);
            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), 0x41800000);
        }

        dVar14 = (double)CONCAT44(0x3f333333, uVar2);
        *(u32 *)((int)pdVar11 + -0x148) = 0x3f333333;

    } else if (*(int *)(a0 + 0x128) == 2) {

        *(u32 *)(a0 + 0x220) = 0x40d00000;

        pcVar5 = get_field_1c_026dd8;
        uVar1 = get_field_1c_026dd8(a0 + 0xb0, get_field_1c_026dd8, pcVar9);
        *(u32 *)((int)pdVar11 + -0x160) = uVar1;
        iVar4 = *(int *)((int)pdVar11 + -0x160);
        uVar1 = SUB84(in_dr14, 0);
        if (iVar4 == 5) {
            in_dr12 = (double)((u64)in_dr12 & 0xffffffff);

            *(u32 *)((int)pdVar11 + -0x144) = 0x42440000;
            in_dr14 = (double)CONCAT44(0x41300000, uVar1);
            in_dr12 = 5.44745745654293e-315;

        } else if (iVar4 == 6) {

            *(u32 *)((int)pdVar11 + -0x144) = 0x421c0000;
            in_dr14 = (double)CONCAT44(0x41300000, uVar1);
            in_dr12 = 536871043.4375;

        } else if (iVar4 == 10) {

            in_dr14 = (double)CONCAT44(0x40e00000, uVar1);
            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), 0x41300000);
        }

        dVar14 = (double)CONCAT44(0x3f000000, uVar2);
        *(u32 *)((int)pdVar11 + -0x148) = 0x3f000000;
    }
    iVar4 = *(int *)(a0 + 0x40);
    if ((5 < iVar4) || (iVar4 < 0))
        goto override_jmp_8c049e5a_case_2;
    switch (iVar4) {
    case 0:
        if (*(int *)(a0 + 0x124) == 0x11) {
            uVar2 = Vec3_sub_05c28c(a0, pcVar5, pcVar9, a3);
            *(u32 *)((int)pdVar11 + -0x164) = uVar2;
            iVar4 = *(int *)((int)pdVar11 + -0x164);
        } else {
            uVar2 = Vec3_sub_05c28c(a0, pcVar5, pcVar9, a3);
            *(u32 *)((int)pdVar11 + -0x168) = uVar2;
            iVar4 = *(int *)((int)pdVar11 + -0x168);
        }
        if (iVar4 != 0) {
            *(u32 *)((int)pdVar11 + -0x150) = 1;
            Vec3_dtor((u8 *)((int)pdVar11 + -0x60), 0xffffffff, pcVar9, a3);
            Vec3_dtor((u8 *)((int)pdVar11 + -0x50), 0xffffffff, pcVar9, a3);
            Vec3_dtor((u8 *)((int)pdVar11 + -0x40), 0xffffffff, pcVar9, a3);
            object_dtor_delete((u8 *)((int)pdVar11 + -0x30), 0xffffffff, pcVar9, a3);
            object_dtor_delete((u8 *)((int)pdVar11 + -0x24), 0xffffffff, pcVar9, a3);
            return *(u32 *)((int)pdVar11 + -0x150);
        }
        if (*(int *)(a0 + 0x1b8) == 1) {

            *(u32 *)(a0 + 0x18c) = *(u32 *)a1;
            *(u32 *)(a0 + 400) = *(u32 *)((int)a1 + 4);
            *(u32 *)(a0 + 0x194) = *(u32 *)(a1 + 1);
            *(u32 *)(a0 + 0x198) = *(u32 *)((int)pdVar11 + -0x40);
            *(u32 *)(a0 + 0x19c) = *(u32 *)((int)pdVar11 + -0x3c);
            dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x38), SUB84(dVar14, 0));
            *(u32 *)(a0 + 0x1a0) = *(u32 *)((int)pdVar11 + -0x38);
        }
        uVar12 = SUB84(dVar14, 0);
        *(u32 *)((int)pdVar11 + -0x220) = *(u32 *)(a0 + 0x128);
        iVar4 = (*(int *)((int)pdVar11 + -0x220) * 2 + *(int *)((int)pdVar11 + -0x220)) * 8 + 0x8c2803f4;
        copy6_to_fields(a0, iVar4, pcVar9, a3);
        timer_start_94(a0, iVar4, pcVar9);
        puVar8 = (u8 *)((int)pdVar11 + -0x40);
        puVar6 = a1;
        CMushroomerBody_sub_031bb4(a0, a1, puVar8, a3);
        uVar16 = (u64)uVar12;

        *(u32 *)(a0 + 0x2c) = 0;

        Vec3_sub_0231c8((u8 *)((int)pdVar11 + -0x50), puVar6, puVar8, a3);

        *(int *)((int)pdVar11 + -0x16c) = (int)(uVar16 >> 0x20);

        Vec3_sub_0231c8(a0 + 0x14, puVar6, puVar8, a3);

        *(int *)((int)pdVar11 + -0x170) = (int)(uVar16 >> 0x20);
        uVar17 = CONCAT44(*(u32 *)((int)pdVar11 + -0x170), (int)uVar16);

        float_check_errno(float_check_errno, puVar6, puVar8, a3);

        *(int *)((int)pdVar11 + -0x174) = (int)((u64)uVar17 >> 0x20);
        uVar17 = CONCAT44(*(u32 *)((int)pdVar11 + -0x174), (int)uVar17);
        *(u32 *)(a0 + 0x228) = *(u32 *)((int)pdVar11 + -0x174);

        *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -0x90);
        Vec3_make(a0 + 0x14, a0 + 0x228, puVar8, a3, *(u32 *)((int)pdVar11 + -0x26c));
        *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -0xa0);
        Vec3_make((u8 *)((int)pdVar11 + -0x50), (u8 *)((int)pdVar11 + -0xa0), puVar8, a3,
                  *(u32 *)((int)pdVar11 + -0x26c));
        Vec3_cos_angle((u8 *)((int)pdVar11 + -0x90), (u8 *)((int)pdVar11 + -0xa0), puVar8, a3);

        *(int *)((int)pdVar11 + -0x178) = (int)((u64)uVar17 >> 0x20);
        *(u32 *)(a0 + 0x224) = *(u32 *)((int)pdVar11 + -0x178);

        Vec3_dtor((u8 *)((int)pdVar11 + -0xa0), 0xffffffff, puVar8, a3);
        Vec3_dtor((u8 *)((int)pdVar11 + -0x90), 0xffffffff, puVar8, a3);

        *(u32 *)(a0 + 0x278) = 0x3f4ccccd;
        uVar17 = CONCAT44(*(u32 *)(a0 + 0x220), *(u32 *)(a0 + 0x24));

        if ((float)uVar17 < (float)((u64)uVar17 >> 0x20)) {
            uVar2 = rand_range(a0, 0, 2, a0 + 0x220);
            *(u32 *)((int)pdVar11 + -0x17c) = uVar2;
            a3 = NULL;
            uVar1 = 0xffffffff;
            iVar4 = *(int *)((int)pdVar11 + -0x17c) + 5;
            uVar2 = CAnimBody_SetAnimation(a0 + 0xb0, iVar4, 0xffffffff, 0);
            *(u32 *)((int)pdVar11 + -0x180) = uVar2;
            if (*(int *)((int)pdVar11 + -0x180) != 6) {
                CAnimBody_SetFrame(a0 + 0xb0, iVar4, uVar1, a3);
            }
        } else {
            a3 = NULL;
            uVar1 = 0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 10, 0xffffffff, 0);
        }

        uVar17 = CONCAT44(0x42340000, *(u32 *)(a0 + 0x224));

        if ((float)((u64)uVar17 >> 0x20) < (float)uVar17) {
            uVar2 = Vec3_sub_023334(a0 + 0x14, (u8 *)((int)pdVar11 + -0x50), uVar1, a3);
            *(u32 *)((int)pdVar11 + -0x184) = uVar2;
            *(u32 *)(a0 + 0x27c) = *(u32 *)((int)pdVar11 + -0x184);
            if (*(int *)(a0 + 0x27c) == 3) {
                a3 = NULL;
                uVar7 = 0xffffffff;
                uVar2 = 7;
                CAnimBody_SetAnimation(a0 + 0xb0, 7, 0xffffffff, 0);
                uVar2 = get_field_1c_on_field_b0(a0, uVar2, uVar7);
                *(u32 *)((int)pdVar11 + -0x188) = uVar2;
                uVar1 = *(u32 *)((int)pdVar11 + -0x188);
                uVar2 = array_at_field_14(a0 + 0xb0, uVar1, uVar7, a3);
                *(u32 *)((int)pdVar11 + -0x18c) = uVar2;
                uVar2 = deref_u32(*(u32 *)((int)pdVar11 + -0x18c));
                *(u32 *)((int)pdVar11 + -400) = uVar2;
                puVar3 = *(u32 **)((int)pdVar11 + -400);
                uVar2 = puVar3[1];
                *(u32 *)(a0 + 0xb4) = *puVar3;
                *(u32 *)(a0 + 0xb8) = uVar2;
                *(u32 *)(a0 + 0xbc) = puVar3[2];
                if (*(int *)(a0 + 0x128) == 1) {
                    *(u8 **)(a0 + 0xb4) = &g_8c13630c;
                } else {
                    a3 = (code *)&g_8c136354;
                    *(u8 **)(a0 + 0xb4) = &g_8c136354;
                }
            } else {
                a3 = NULL;
                uVar7 = 0xffffffff;
                uVar2 = 8;
                CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
                uVar2 = get_field_1c_on_field_b0(a0, uVar2, uVar7);
                *(u32 *)((int)pdVar11 + -0x194) = uVar2;
                uVar1 = *(u32 *)((int)pdVar11 + -0x194);
                uVar2 = array_at_field_14(a0 + 0xb0, uVar1, uVar7, a3);
                *(u32 *)((int)pdVar11 + -0x198) = uVar2;
                uVar2 = deref_u32(*(u32 *)((int)pdVar11 + -0x198));
                *(u32 *)((int)pdVar11 + -0x19c) = uVar2;
                puVar3 = *(u32 **)((int)pdVar11 + -0x19c);
                uVar2 = puVar3[1];
                *(u32 *)(a0 + 0xb4) = *puVar3;
                *(u32 *)(a0 + 0xb8) = uVar2;
                *(u32 *)(a0 + 0xbc) = puVar3[2];
                if (*(int *)(a0 + 0x128) == 1) {
                    *(u8 **)(a0 + 0xb4) = &g_8c136324;
                } else {
                    *(u8 **)(a0 + 0xb4) = &g_8c13636c;
                }
            }
            rand_float(a0, uVar1, uVar7);

            *(int *)((int)pdVar11 + -0x1a0) = (int)((u64)uVar17 >> 0x20);
            dVar14 = (double)CONCAT44(0x42700000, *(u32 *)(a0 + 0x224));

            fVar13 = SUB84(dVar14, 0) / (float)((u64)dVar14 >> 0x20);

            dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x1a0), fVar13);

            fVar13 = SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20);

            *(float *)(a0 + 0x2c0) = fVar13;

            CAnimBody_SetFrame(a0 + 0xb0, uVar1, uVar7, a3);
            uVar2 = get_field_1c_026dd8(a0 + 0xb0, uVar1, uVar7);
            *(u32 *)((int)pdVar11 + -0x1a4) = uVar2;
            uVar1 = 0xb0;
            uVar2 = get_motion_data(a0 + 0xb0, *(u32 *)((int)pdVar11 + -0x1a4), 0xb0, a3);
            *(u32 *)((int)pdVar11 + -0x1a8) = uVar2;
            if (*(int *)((int)pdVar11 + -0x1a8) == 0) {

                *(u32 *)(a0 + 0x228) = 0x3f800000;

            } else {
                uVar2 = get_field_1c_026dd8(a0 + 0xb0, get_field_1c_026dd8, uVar1);
                *(u32 *)((int)pdVar11 + -0x1ac) = uVar2;
                uVar2 = get_motion_data(a0 + 0xb0, *(u32 *)((int)pdVar11 + -0x1ac), uVar1, a3);
                *(u32 *)((int)pdVar11 + -0x1b0) = uVar2;
                *(int *)((int)pdVar11 + -0x224) = a0;

                dVar14 = (double)CONCAT44(*(u32 *)(*(int *)((int)pdVar11 + -0x224) + 0x228), in_fr3);

                fVar13 = (float)*(int *)((int)pdVar11 + -0x1b0);
                dVar15 = (double)(u64)(u32)fVar13;
                if (fVar13 < 0.0) {

                    dVar15 = (double)CONCAT44(0x4f800000, fVar13);

                    fVar13 = (float)((u64)dVar15 >> 0x20);
                    dVar15 = (double)CONCAT44(fVar13, SUB84(dVar15, 0) + fVar13);
                }

                dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) / SUB84(dVar15, 0), SUB84(dVar14, 0));

                *(int *)(*(int *)((int)pdVar11 + -0x224) + 0x228) = (int)((u64)dVar14 >> 0x20);
            }
        }
        *(u32 *)(a0 + 0x2b8) = 3;
        *(u32 *)(a0 + 0x40) = 1;
        uVar2 = rand();
        *(u32 *)((int)pdVar11 + -0x1b4) = uVar2;
        uVar7 = 3;
        uVar2 = libgcc_divide_helper_01031c(*(u32 *)((int)pdVar11 + -0x1b4), 3, uVar1);
        *(u32 *)((int)pdVar11 + -0x228) = uVar2;
        *(int *)(a0 + 0x280) = *(int *)((int)pdVar11 + -0x228) + 1;
        clear_3_words(a0 + 0x2c8, uVar7, uVar1, a3);
        break;
    case 1:
        *(u32 *)(a0 + 0x40) = 3;
    case 3:
        uVar2 = get_field_1c_026dd8(a0 + 0xb0, pcVar5, pcVar9);
        *(u32 *)((int)pdVar11 + -0x1b8) = uVar2;
        iVar4 = *(int *)((int)pdVar11 + -0x1b8);
        if ((iVar4 < 0xb) && (-1 < iVar4)) {
            pcVar5 = (code *)(&switchD_8c04a56e::switchdataD_8c04a57c)[iVar4];
            switch (iVar4) {
            case 0:
            case 1:
                uVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, pcVar5, pcVar9, a3);
                *(u32 *)((int)pdVar11 + -0x1bc) = uVar2;
                if (*(int *)((int)pdVar11 + -0x1bc) == 1) {
                    *(u32 *)(a0 + 0x40) = 5;
                    *(u32 *)(a0 + 0x2b8) = 2;
                }
                *(int *)((int)pdVar11 + -0x22c) = a0;

                dVar14 = (double)CONCAT44(0x3dcccccd, *(u32 *)(*(int *)((int)pdVar11 + -0x22c) + 0x28));

                fVar13 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);

                *(float *)(*(int *)((int)pdVar11 + -0x22c) + 0x28) = fVar13;
                fVar13 = *(float *)(a0 + 0x28);

                dVar14 = (double)(u64)(u32)fVar13;
                if (fVar13 < 0.0) {
                    dVar14 = (double)(u64)(u32)fVar13;

                    *(u32 *)(a0 + 0x28) = 0;
                }
                break;
            default:
                goto switchD_8c04a56e_caseD_2;
            case 5:
                CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, pcVar5, pcVar9, a3);
                CAnimBody_GetCurFrame(a0 + 0xb0, pcVar5, pcVar9, a3);

                *(int *)((int)pdVar11 + -0x1ec) = (int)((u64)dVar14 >> 0x20);
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)pdVar11 + -0x1ec));

                if ((float)((u64)in_dr14 >> 0x20) < SUB84(in_dr14, 0)) {

                    bVar20 = SUB84(in_dr14, 0) < SUB84(in_dr12, 0);

                    if (bVar20) {
                        uVar2 = get_field_1c_026dd8(a0 + 0xb0, pcVar5, pcVar9);
                        *(u32 *)((int)pdVar11 + -0x1f0) = uVar2;
                        uVar2 = *(u32 *)((int)pdVar11 + -0x1f0);
                        uVar1 = get_motion_data(a0 + 0xb0, uVar2, pcVar9, a3);
                        *(u32 *)((int)pdVar11 + -500) = uVar1;
                        Vec3_set_xyz((u8 *)((int)pdVar11 + -0x110), uVar2, pcVar9, a3);
                        *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -0x110);
                        *(u8 **)((int)pdVar11 + -0x270) = (u8 *)((int)pdVar11 + -0x120);
                        a3 = (code *)(a0 + 0x14);
                        pcVar9 = (code *)((int)pdVar11 + -0x40);
                        game_sub_031eb0(a0, a1, pcVar9, a3, *(u32 *)((int)pdVar11 + -0x270));
                        Vec3_assign(a0 + 0x14, (u8 *)((int)pdVar11 + -0x120), pcVar9, a3);
                        Vec3_dtor((u8 *)((int)pdVar11 + -0x120), 0xffffffff, pcVar9, a3);
                        object_dtor_delete((u8 *)((int)pdVar11 + -0x110), 0xffffffff, pcVar9, a3);
                        *(int *)((int)pdVar11 + -0x240) = a0;

                        dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x264),
                                                  *(u32 *)(*(int *)((int)pdVar11 + -0x240) + 0x28));

                        fVar13 = SUB84(dVar14, 0) + (float)((u64)dVar14 >> 0x20);

                        *(float *)(*(int *)((int)pdVar11 + -0x240) + 0x28) = fVar13;
                        dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));

                        if ((float)((u64)dVar14 >> 0x20) < SUB84(dVar14, 0)) {

                            uVar2 = *(u32 *)(a0 + 0x24);
                            dVar14 = (double)CONCAT44(uVar2, SUB84(dVar14, 0));
                            *(u32 *)(a0 + 0x28) = uVar2;
                        }
                        break;
                    }
                }
                rand_float(a0, pcVar5, pcVar9);

                *(int *)((int)pdVar11 + -0x1f8) = (int)((u64)dVar14 >> 0x20);

                *(int *)((int)pdVar11 + -0x244) = a0;

                dVar14 =
                    (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x1f8), *(u32 *)(*(int *)((int)pdVar11 + -0x244) + 0x28));

                fVar13 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);

                *(float *)(*(int *)((int)pdVar11 + -0x244) + 0x28) = fVar13;
                fVar13 = *(float *)(a0 + 0x28);

                dVar14 = (double)(u64)(u32)fVar13;
                if (fVar13 < 0.0) {
                    dVar14 = (double)(u64)(u32)fVar13;

                    *(u32 *)(a0 + 0x28) = 0;
                }
                break;
            case 6:

                uVar17 = CONCAT44(0x40400000, *(u32 *)(a0 + 0x28));

                if ((float)((u64)uVar17 >> 0x20) < (float)uVar17) {
                    CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, pcVar5, pcVar9, a3);
                } else {
                    uVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, pcVar5, pcVar9, a3);
                    *(u32 *)((int)pdVar11 + -0x1fc) = uVar2;
                    if (*(int *)((int)pdVar11 + -0x1fc) == 1) {
                        *(u32 *)(a0 + 0x40) = 5;
                        *(u32 *)(a0 + 0x2b8) = 2;
                    }
                }
                CAnimBody_GetCurFrame(a0 + 0xb0, pcVar5, pcVar9, a3);

                *(int *)((int)pdVar11 + -0x200) = (int)((u64)uVar17 >> 0x20);
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)pdVar11 + -0x200));

                if ((float)((u64)in_dr14 >> 0x20) < SUB84(in_dr14, 0)) {

                    bVar20 = SUB84(in_dr14, 0) < SUB84(in_dr12, 0);

                    if (bVar20) {
                        uVar1 = 6;
                        uVar2 = get_motion_data(a0 + 0xb0, 6, pcVar9, a3);
                        *(u32 *)((int)pdVar11 + -0x204) = uVar2;
                        Vec3_set_xyz((u8 *)((int)pdVar11 + -300), uVar1, pcVar9, a3);
                        *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -300);
                        *(u8 **)((int)pdVar11 + -0x270) = (u8 *)((int)pdVar11 + -0x13c);
                        a3 = (code *)(a0 + 0x14);
                        pcVar9 = (code *)((int)pdVar11 + -0x40);
                        game_sub_031eb0(a0, a1, pcVar9, a3, *(u32 *)((int)pdVar11 + -0x270));
                        Vec3_assign(a0 + 0x14, (u8 *)((int)pdVar11 + -0x13c), pcVar9, a3);
                        Vec3_dtor((u8 *)((int)pdVar11 + -0x13c), 0xffffffff, pcVar9, a3);
                        object_dtor_delete((u8 *)((int)pdVar11 + -300), 0xffffffff, pcVar9, a3);
                        *(int *)((int)pdVar11 + -0x248) = a0;

                        dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x264),
                                                  *(u32 *)(*(int *)((int)pdVar11 + -0x248) + 0x28));

                        fVar13 = SUB84(dVar14, 0) + (float)((u64)dVar14 >> 0x20);

                        *(float *)(*(int *)((int)pdVar11 + -0x248) + 0x28) = fVar13;
                        dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));

                        if ((float)((u64)dVar14 >> 0x20) < SUB84(dVar14, 0)) {

                            uVar2 = *(u32 *)(a0 + 0x24);
                            dVar14 = (double)CONCAT44(uVar2, SUB84(dVar14, 0));
                            *(u32 *)(a0 + 0x28) = uVar2;
                        }
                        break;
                    }
                }
                rand_float(a0, pcVar5, pcVar9);

                *(int *)((int)pdVar11 + -0x208) = (int)((u64)uVar17 >> 0x20);

                *(int *)((int)pdVar11 + -0x24c) = a0;

                dVar14 =
                    (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x208), *(u32 *)(*(int *)((int)pdVar11 + -0x24c) + 0x28));

                fVar13 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);

                *(float *)(*(int *)((int)pdVar11 + -0x24c) + 0x28) = fVar13;
                fVar13 = *(float *)(a0 + 0x28);

                dVar14 = (double)(u64)(u32)fVar13;
                if (fVar13 < 0.0) {
                    dVar14 = (double)(u64)(u32)fVar13;

                    *(u32 *)(a0 + 0x28) = 0;
                }
                break;
            case 7:
            case 8:

                *(u32 *)(a0 + 0x2c) = 0;

                *(int *)((int)pdVar11 + -0x230) = a0;

                dVar14 = (double)CONCAT44(0x3d4ccccd, *(u32 *)(*(int *)((int)pdVar11 + -0x230) + 0x28));

                fVar13 = SUB84(dVar14, 0) + (float)((u64)dVar14 >> 0x20);

                *(float *)(*(int *)((int)pdVar11 + -0x230) + 0x28) = fVar13;
                fVar13 = *(float *)(a0 + 0x28);

                dVar14 = (double)CONCAT44(0x3f800000, fVar13);
                if (1.0 < fVar13) {
                    *(int *)((int)pdVar11 + -0x234) = a0;

                    dVar14 = (double)CONCAT44(0x3dcccccd, *(u32 *)(*(int *)((int)pdVar11 + -0x234) + 0x28));

                    fVar13 = (float)((u64)dVar14 >> 0x20);
                    dVar14 = (double)CONCAT44(fVar13, SUB84(dVar14, 0) - fVar13);

                    *(int *)(*(int *)((int)pdVar11 + -0x234) + 0x28) = SUB84(dVar14, 0);
                }
                CAnimBody_GetCurFrame(a0 + 0xb0, 0xb0, pcVar9, a3);

                *(int *)((int)pdVar11 + -0x1c0) = (int)((u64)dVar14 >> 0x20);

                *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -0xac);
                game_sub_034650(a0 + 0xb0, *(u32 *)(*(int *)(a0 + 0xb4) + 4), pcVar9, a3);
                vec3_copy_8c023d8c((u8 *)((int)pdVar11 + -0x24), (u8 *)((int)pdVar11 + -0xac), pcVar9, a3);
                uVar2 = 0xffffffff;
                object_dtor_delete((u8 *)((int)pdVar11 + -0xac), 0xffffffff, pcVar9, a3);
                CAnimBody_GetCurFrame(a0 + 0xb0, uVar2, pcVar9, a3);

                *(int *)((int)pdVar11 + -0x1c4) = (int)((u64)dVar14 >> 0x20);

                uVar2 = get_field_1c_026dd8(a0 + 0xb0, uVar2, pcVar9);
                *(u32 *)((int)pdVar11 + -0x1c8) = uVar2;
                uVar2 = get_motion_data(a0 + 0xb0, *(u32 *)((int)pdVar11 + -0x1c8), pcVar9, a3);
                *(u32 *)((int)pdVar11 + -0x1cc) = uVar2;

                dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x1c4), in_fr3);

                fVar13 = (float)*(int *)((int)pdVar11 + -0x1cc);
                dVar15 = (double)(u64)(u32)fVar13;
                if (fVar13 < 0.0) {

                    dVar15 = (double)CONCAT44(0x4f800000, fVar13);

                    fVar13 = (float)((u64)dVar15 >> 0x20);
                    dVar15 = (double)CONCAT44(fVar13, SUB84(dVar15, 0) + fVar13);
                }

                dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) / SUB84(dVar15, 0), SUB84(dVar14, 0));

                fVar13 = 1.0 - (float)((u64)dVar14 >> 0x20);

                dVar14 = (double)CONCAT44(0x40000000, fVar13);

                fVar13 = SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20);

                *(float *)((int)pdVar11 + -0x14c) = fVar13;
                dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x2c8), *(u32 *)((int)pdVar11 + -0x24));

                fVar13 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);

                dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x2c0), fVar13);

                fVar13 = SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20);

                dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x14c), fVar13);

                fVar13 = SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20);

                *(float *)((int)pdVar11 + -0x30) = fVar13;
                dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x2cc), *(u32 *)((int)pdVar11 + -0x20));

                fVar13 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);

                ar6_00 = (double *)(a0 + 0x2c0);

                dVar14 = (double)CONCAT44(*(u32 *)ar6_00, fVar13);

                fVar13 = SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20);

                dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x14c), fVar13);

                fVar13 = SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20);

                *(float *)((int)pdVar11 + -0x2c) = fVar13;
                dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x2d0), *(u32 *)((int)pdVar11 + -0x1c));

                fVar13 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);

                dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x2c0), fVar13);

                fVar13 = SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20);

                dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x14c), fVar13);

                fVar13 = (float)((u64)dVar14 >> 0x20);
                dVar14 = (double)CONCAT44(fVar13, SUB84(dVar14, 0) * fVar13);

                *(int *)((int)pdVar11 + -0x28) = SUB84(dVar14, 0);

                vec3_copy_8c023d8c(a0 + 0x2c8, (u8 *)((int)pdVar11 + -0x24), ar6_00, a3);
                vec3_copy_8c02b5fc((u8 *)((int)pdVar11 + -0xb8), (u8 *)((int)pdVar11 + -0x30), ar6_00);
                *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -200);
                Vec3_sub_023484(a0 + 0x14, (u8 *)((int)pdVar11 + -0xb8), ar6_00, a3, *(u32 *)((int)pdVar11 + -0x26c));
                Vec3_assign(a0 + 0x14, (u8 *)((int)pdVar11 + -200), ar6_00, a3);
                Vec3_dtor((u8 *)((int)pdVar11 + -200), 0xffffffff, ar6_00, a3);
                uVar2 = 0xffffffff;
                object_dtor_delete((u8 *)((int)pdVar11 + -0xb8), 0xffffffff, ar6_00, a3);
                Vec3_set_xyz((u8 *)((int)pdVar11 + -0xd4), uVar2, ar6_00, a3);
                *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -0xd4);
                *(u8 **)((int)pdVar11 + -0x270) = (u8 *)((int)pdVar11 + -0xe4);
                iVar4 = a0 + 0x14;
                puVar8 = (u8 *)((int)pdVar11 + -0x40);
                game_sub_031eb0(a0, a1, puVar8, iVar4, *(u32 *)((int)pdVar11 + -0x270));
                Vec3_assign(a0 + 0x14, (u8 *)((int)pdVar11 + -0xe4), puVar8, iVar4);
                puVar8 = (u8 *)((int)pdVar11 + -0xe4);
                Vec3_dtor(puVar8, 0xffffffff, puVar8, iVar4);
                uVar1 = 0xffffffff;
                a3 = object_dtor_delete;
                object_dtor_delete((u8 *)((int)pdVar11 + -0xd4), 0xffffffff, puVar8, object_dtor_delete);
                pcVar9 = (code *)(a0 + 0x14);
                Vec3_length(pcVar9, uVar1, pcVar9, a3);
                uVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar1, pcVar9, a3);
                *(u32 *)((int)pdVar11 + -0x1d0) = uVar2;
                if (*(int *)((int)pdVar11 + -0x1d0) == 1) {
                    Vec3_sub_0231c8((u8 *)((int)pdVar11 + -0x50), uVar1, pcVar9, a3);

                    *(int *)((int)pdVar11 + -0x1d4) = (int)((u64)dVar14 >> 0x20);

                    iVar4 = a0 + 0x14;
                    Vec3_sub_0231c8(iVar4, uVar1, pcVar9, a3);

                    *(int *)((int)pdVar11 + -0x1d8) = (int)((u64)dVar14 >> 0x20);
                    uVar17 = CONCAT44(*(u32 *)((int)pdVar11 + -0x1d8), SUB84(dVar14, 0));

                    float_check_errno(iVar4, uVar1, pcVar9, a3);

                    *(int *)((int)pdVar11 + -0x1dc) = (int)((u64)uVar17 >> 0x20);

                    uVar2 = 0x228;

                    uVar17 = CONCAT44(*(u32 *)((int)pdVar11 + -0x1dc), (int)uVar17);
                    *(u32 *)(a0 + 0x228) = *(u32 *)((int)pdVar11 + -0x1dc);

                    *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -0xf4);
                    Vec3_make(a0 + 0x14, 0x228, pcVar9, a3, *(u32 *)((int)pdVar11 + -0x26c));
                    *(u8 **)((int)pdVar11 + -0x26c) = (u8 *)((int)pdVar11 + -0x104);
                    Vec3_make((u8 *)((int)pdVar11 + -0x50), uVar2, pcVar9, a3, *(u32 *)((int)pdVar11 + -0x26c));
                    a3 = (code *)((int)pdVar11 + -0xf4);
                    pcVar9 = Vec3_cos_angle;
                    Vec3_cos_angle(a3, (u8 *)((int)pdVar11 + -0x104), Vec3_cos_angle, a3);

                    *(int *)((int)pdVar11 + -0x1e0) = (int)((u64)uVar17 >> 0x20);
                    dVar14 = (double)CONCAT44(*(u32 *)((int)pdVar11 + -0x1e0), (int)uVar17);
                    *(u32 *)(a0 + 0x224) = *(u32 *)((int)pdVar11 + -0x1e0);

                    Vec3_dtor((u8 *)((int)pdVar11 + -0x104), 0xffffffff, pcVar9, a3);
                    Vec3_dtor((u8 *)((int)pdVar11 + -0xf4), 0xffffffff, pcVar9, a3);
                    *(u32 *)(a0 + 0x290) = 0;
                    *(u32 *)(a0 + 0x40) = 5;
                    *(u32 *)(a0 + 0x2b8) = 2;
                }
                break;
            case 10:
                CAnimBody_GetCurFrame(a0 + 0xb0, pcVar5, pcVar9, a3);

                *(int *)((int)pdVar11 + -0x1e4) = (int)((u64)dVar14 >> 0x20);
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)pdVar11 + -0x1e4));

                if (SUB84(in_dr14, 0) <= (float)((u64)in_dr14 >> 0x20)) {
                LAB_8c04aa78:
                    *(int *)((int)pdVar11 + -0x23c) = a0;
                    a3 = (code *)(*(int *)((int)pdVar11 + -0x23c) + 0x28);
                    pcVar9 = *(code **)((int)pdVar11 + -0x23c);
                    pcVar5 = pcVar9 + 0x28;

                    dVar14 = (double)CONCAT44(0x3c23d70a, *(float *)pcVar5);

                    fVar13 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);

                    *(float *)a3 = fVar13;
                    fVar13 = *(float *)(a0 + 0x28);

                    dVar14 = (double)(u64)(u32)fVar13;
                    if (fVar13 < 0.0) {
                        dVar14 = (double)(u64)(u32)fVar13;

                        *(u32 *)(a0 + 0x28) = 0;
                    }
                } else {

                    bVar20 = SUB84(in_dr14, 0) < SUB84(in_dr12, 0);

                    if (!bVar20)
                        goto LAB_8c04aa78;
                    *(int *)((int)pdVar11 + -0x238) = a0;

                    dVar14 = (double)CONCAT44(0x40000000, *(u32 *)(*(int *)((int)pdVar11 + -0x238) + 0x28));

                    fVar13 = SUB84(dVar14, 0) + (float)((u64)dVar14 >> 0x20);

                    *(float *)(*(int *)((int)pdVar11 + -0x238) + 0x28) = fVar13;
                    dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));

                    if ((float)((u64)dVar14 >> 0x20) < SUB84(dVar14, 0)) {

                        uVar2 = *(u32 *)(a0 + 0x24);
                        dVar14 = (double)CONCAT44(uVar2, SUB84(dVar14, 0));
                        *(u32 *)(a0 + 0x28) = uVar2;
                    }
                }
                uVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, pcVar5, pcVar9, a3);
                *(u32 *)((int)pdVar11 + -0x1e8) = uVar2;
                if (*(int *)((int)pdVar11 + -0x1e8) == 1) {
                    *(u32 *)(a0 + 0x2b8) = 2;
                    *(u32 *)(a0 + 0x40) = 5;
                }
            }
        } else {
        switchD_8c04a56e_caseD_2:
            *(u32 *)(a0 + 0x2b8) = 3;
            uVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, pcVar5, pcVar9, a3);
            *(u32 *)((int)pdVar11 + -0x20c) = uVar2;
            if (*(int *)((int)pdVar11 + -0x20c) == 1) {
                *(u32 *)(a0 + 0x2b8) = 2;
            }
        }
        Vec3_distance_sq(a1, a2, pcVar9, a3);

        *(int *)((int)pdVar11 + -0x210) = (int)((u64)dVar14 >> 0x20);
        dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x48), *(u32 *)(a0 + 0x28));

        fVar13 = SUB84(dVar14, 0) + (float)((u64)dVar14 >> 0x20);

        uVar16 = CONCAT44(*(u32 *)((int)pdVar11 + -0x210), fVar13);

        if ((float)(uVar16 >> 0x20) <= (float)uVar16) {
            *(u32 *)(a0 + 0x40) = 4;

            *(u32 *)(a0 + 0x2c) = 0;
            dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x38), *(u32 *)(a0 + 0x28));

            fVar13 = SUB84(dVar14, 0) / (float)((u64)dVar14 >> 0x20);

            *(float *)(a0 + 0x3c) = fVar13;

            *(u32 *)(a0 + 0x40) = 4;
        }
        break;
    case 4:
        pcVar9 = CAnimBody_GetCurFrame;
        CAnimBody_GetCurFrame(a0 + 0xb0, pcVar5, CAnimBody_GetCurFrame, a3);

        *(int *)((int)pdVar11 + -0x214) = (int)((u64)dVar14 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)pdVar11 + -0x214));

        uVar2 = get_field_1c_026dd8(a0 + 0xb0, pcVar5, pcVar9);
        fVar13 = SUB84(dVar14, 0);
        *(u32 *)((int)pdVar11 + -0x218) = uVar2;
        fVar19 = (float)((u64)in_dr14 >> 0x20);
        fVar18 = SUB84(in_dr14, 0);
        if (*(int *)((int)pdVar11 + -0x218) == 5) {
            if (fVar19 < fVar18) {

                bVar20 = fVar18 < SUB84(in_dr12, 0);

                if (bVar20) {
                    *(int *)((int)pdVar11 + -0x250) = a0;
                    pcVar5 = (code *)(*(int *)((int)pdVar11 + -0x250) + 0x28);

                    fVar13 = *(float *)pcVar5;

                    fVar13 = fVar13 + 1.0;

                    *(float *)(*(int *)((int)pdVar11 + -0x250) + 0x28) = fVar13;
                    uVar17 = CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));

                    if ((float)((u64)uVar17 >> 0x20) < (float)uVar17) {
                        pcVar5 = (code *)(a0 + 0x24);

                        *(float *)(a0 + 0x28) = *(float *)pcVar5;
                    }
                }
            }
        } else if ((*(int *)((int)pdVar11 + -0x218) == 6) && (1 && fVar19 < fVar18)) {

            bVar20 = fVar18 < SUB84(in_dr12, 0);

            if (bVar20) {
                *(int *)((int)pdVar11 + -0x254) = a0;

                fVar13 = *(float *)(*(int *)((int)pdVar11 + -0x254) + 0x28);

                fVar13 = fVar13 + 1.0;

                *(float *)(*(int *)((int)pdVar11 + -0x254) + 0x28) = fVar13;
                uVar17 = CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));

                pcVar5 = (code *)(a0 + 0x24);
                if ((float)((u64)uVar17 >> 0x20) < (float)uVar17) {

                    *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
                }
            }
        }
        *(int *)((int)pdVar11 + -600) = a0;

        dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x3c), *(u32 *)(*(int *)((int)pdVar11 + -600) + 0x28));

        fVar13 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);

        *(float *)(*(int *)((int)pdVar11 + -600) + 0x28) = fVar13;
        fVar13 = *(float *)(a0 + 0x28);

        if (fVar13 < 0.0) {

            *(u32 *)(a0 + 0x28) = 0;
        }
        a3 = (code *)0xb0;
        uVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, pcVar5, a0 + 0xb0, 0xb0);
        *(u32 *)((int)pdVar11 + -0x21c) = uVar2;
        if (*(int *)((int)pdVar11 + -0x21c) == 1) {
            clear_3_words(a0 + 0x2c8, uVar2, clear_3_words, a3);
            uVar10 = 0;
            *(u32 *)(a0 + 0x2b8) = 2;
            a3 = (code *)(a0 + 0x2c);

            *(float *)a3 = 0.0;
        }
    }
override_jmp_8c049e5a_case_2:
    Vec3_assign(a0 + 0x80, a0 + 0x14, a0 + 0x14, a3);
    game_sub_051a68(a0, (u8 *)((int)pdVar11 + -0x40), a1, a3);
    *(u32 *)((int)pdVar11 + -0x154) = uVar10;
    Vec3_dtor((u8 *)((int)pdVar11 + -0x60), 0xffffffff, a1, a3);
    Vec3_dtor((u8 *)((int)pdVar11 + -0x50), 0xffffffff, a1, a3);
    Vec3_dtor((u8 *)((int)pdVar11 + -0x40), 0xffffffff, a1, a3);
    object_dtor_delete((u8 *)((int)pdVar11 + -0x30), 0xffffffff, a1, a3);
    object_dtor_delete((u8 *)((int)pdVar11 + -0x24), 0xffffffff, a1, a3);
    return *(u32 *)((int)pdVar11 + -0x154);
}

/*
 * game_sub_04b168  0x8c04b168
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4, game_sub_04e2d0
 */
u32 game_sub_04b168(int a0, u64 *a1, code *a2, code *a3) {
    int iVar1;
    u32 *puVar2;
    u8 *ar4_00;
    u64 *puVar3;
    u32 uVar4;
    u32 uVar5;
    float *ar5_00;
    u8 *puVar6;
    code *pcVar7;
    u32 uVar8;
    u32 ar7_00;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 uVar9;
    u32 unaff_r12;
    u32 unaff_r13;
    u32 unaff_r14;
    double *pdVar10;
    u32 uVar11;
    float fVar12;
    u64 in_dr0;
    double dVar13;
    u64 uVar14;
    float fVar16;
    u64 uVar15;
    u32 in_fr3;
    u64 in_dr6;
    double in_dr12;
    double in_dr14;
    double dVar17;
    bool bVar18;
    u32 in_PR;
    u8 auStack_20[16];
    double dStack_10;
    u64 uStack_8;

    uStack_8 = CONCAT44(SUB84(in_dr14, 0), (u32)uStack_8);
    uStack_8._0_4_ = (int)((u64)in_dr14 >> 0x20);
    pdVar10 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12, 0), (int)((u64)in_dr12 >> 0x20));

    *(u32 *)((int)pdVar10 + -4) = unaff_r14;
    *(u32 *)((int)pdVar10 + -8) = unaff_r13;
    *(u32 *)((int)pdVar10 + -0xc) = unaff_r12;
    *(u32 *)((int)pdVar10 + -0x10) = unaff_r11;
    *(u32 *)((int)pdVar10 + -0x14) = unaff_r10;
    *(u32 *)((int)pdVar10 + -0x18) = in_PR;

    *(int *)((int)pdVar10 + -0x228) = (int)((u64)in_dr6 >> 0x20);
    *(int *)((int)pdVar10 + -0x224) = (int)in_dr6;

    uVar9 = 1;
    pcVar7 = a2;
    Vec3_ctor_zero((u8 *)((int)pdVar10 + -0x28), a1, a2);
    Vec3_ctor_copy((u8 *)((int)pdVar10 + -0x38), a2, pcVar7, a3);
    Vec3_distance_sq(a1, (u8 *)((int)pdVar10 + -0x38), pcVar7, a3);

    *(int *)((int)pdVar10 + -0x160) = (int)((u64)in_dr0 >> 0x20);
    dVar13 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -0x160), (int)in_dr0);
    *(u32 *)((int)pdVar10 + -0x134) = *(u32 *)((int)pdVar10 + -0x160);

    *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0x80);
    puVar3 = a1;
    Vec3_sub((u8 *)((int)pdVar10 + -0x38), a1, pcVar7, a3, *(u32 *)((int)pdVar10 + -0x22c));
    *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0x90);
    Vec3_normalize((u8 *)((int)pdVar10 + -0x80), puVar3, pcVar7, a3);
    Vec3_ctor_copy((u8 *)((int)pdVar10 + -0x48), (u8 *)((int)pdVar10 + -0x90), pcVar7, a3);
    Vec3_dtor((u8 *)((int)pdVar10 + -0x90), 0xffffffff, pcVar7, a3);
    Vec3_dtor((u8 *)((int)pdVar10 + -0x80), 0xffffffff, pcVar7, a3);
    puVar3 = a1;
    Vec3_ctor_copy((u8 *)((int)pdVar10 + -0x58), a1, pcVar7, a3);
    Vec3_set_zero((u8 *)((int)pdVar10 + -100));
    Vec3_set_zero((u8 *)((int)pdVar10 + -0x70));
    if (*(int *)(a0 + 0x128) == 3) {

        in_dr14 = (double)CONCAT44(0x40800000, SUB84(in_dr14, 0));
        *(u32 *)((int)pdVar10 + -0x138) = 0x41c80000;
        *(u32 *)((int)pdVar10 + -0x13c) = 0x42040000;
        *(u32 *)((int)pdVar10 + -0x140) = 0x41200000;
        *(u32 *)((int)pdVar10 + -0x144) = 0x429e0000;
        in_dr12 = 16777220.078125;
        *(u32 *)((int)pdVar10 + -0x150) = 0x41c80000;
        *(u32 *)((int)pdVar10 + -0x148) = 0x41f00000;
        *(u32 *)((int)pdVar10 + -0x14c) = 0x42200000;
        dVar13 = (double)CONCAT44(0x41700000, SUB84(dVar13, 0));
        *(u32 *)((int)pdVar10 + -0x154) = 0x41700000;

    } else if (*(int *)(a0 + 0x128) == 4) {

        in_dr14 = (double)CONCAT44(0x41700000, SUB84(in_dr14, 0));
        *(u32 *)((int)pdVar10 + -0x138) = 0x420c0000;
        *(u32 *)((int)pdVar10 + -0x13c) = 0x42280000;
        *(u32 *)((int)pdVar10 + -0x140) = 0x41200000;
        *(u32 *)((int)pdVar10 + -0x144) = 0x429e0000;
        in_dr12 = 8388610.052734375;
        *(u32 *)((int)pdVar10 + -0x150) = 0x41c80000;
        *(u32 *)((int)pdVar10 + -0x148) = 0x420c0000;
        *(u32 *)((int)pdVar10 + -0x14c) = 0x42280000;
        dVar13 = (double)CONCAT44(0x41700000, SUB84(dVar13, 0));
        *(u32 *)((int)pdVar10 + -0x154) = 0x41700000;
    }
    iVar1 = *(int *)(a0 + 0x40);
    if ((5 < iVar1) || (iVar1 < 0))
        goto switchD_8c04b39c_caseD_2;
    switch (iVar1) {
    case 0:
        uVar5 = Vec3_sub_05c28c(a0, iVar1 * 4, pcVar7, a3);
        *(u32 *)((int)pdVar10 + -0x164) = uVar5;
        if (*(int *)((int)pdVar10 + -0x164) != 0) {
            *(u32 *)((int)pdVar10 + -0x158) = 1;
            object_dtor_delete((u8 *)((int)pdVar10 + -0x70), 0xffffffff, pcVar7, a3);
            object_dtor_delete((u8 *)((int)pdVar10 + -100), 0xffffffff, pcVar7, a3);
            Vec3_dtor((u8 *)((int)pdVar10 + -0x58), 0xffffffff, pcVar7, a3);
            Vec3_dtor((u8 *)((int)pdVar10 + -0x48), 0xffffffff, pcVar7, a3);
            Vec3_dtor((u8 *)((int)pdVar10 + -0x38), 0xffffffff, pcVar7, a3);
            Vec3_dtor((u8 *)((int)pdVar10 + -0x28), 0xffffffff, pcVar7, a3);
            return *(u32 *)((int)pdVar10 + -0x158);
        }
        if (*(int *)(a0 + 0x1b8) == 1) {

            *(u32 *)(a0 + 0x18c) = *(u32 *)a1;
            *(u32 *)(a0 + 400) = *(u32 *)((int)a1 + 4);
            *(u32 *)(a0 + 0x194) = *(u32 *)(a1 + 1);
            *(u32 *)(a0 + 0x198) = *(u32 *)((int)pdVar10 + -0x38);
            *(u32 *)(a0 + 0x19c) = *(u32 *)((int)pdVar10 + -0x34);
            dVar13 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -0x30), SUB84(dVar13, 0));
            *(u32 *)(a0 + 0x1a0) = *(u32 *)((int)pdVar10 + -0x30);
        }
        uVar11 = SUB84(dVar13, 0);
        timer_start_94(a0, timer_start_94, pcVar7);
        uVar14 = (u64)uVar11;

        *(u32 *)(a0 + 0xa0) = 0;

        *(u32 *)((int)pdVar10 + -0x1fc) = *(u32 *)(a0 + 0x128);
        copy6_to_fields(a0, (*(int *)((int)pdVar10 + -0x1fc) * 2 + *(int *)((int)pdVar10 + -0x1fc)) * 8 + 0x8c2803f4,
                        pcVar7, a3);
        uVar11 = (u32)uVar14;
        puVar6 = (u8 *)((int)pdVar10 + -0x38);
        puVar3 = a1;
        CMushroomerBody_sub_031bb4(a0, a1, puVar6, a3);
        uVar14 = (u64)uVar11;

        *(u32 *)(a0 + 0x2c) = 0;

        Vec3_sub_0231c8((u8 *)((int)pdVar10 + -0x48), puVar3, puVar6, a3);

        *(int *)((int)pdVar10 + -0x168) = (int)(uVar14 >> 0x20);

        iVar1 = a0 + 0x14;
        Vec3_sub_0231c8(iVar1, puVar3, puVar6, a3);

        *(int *)((int)pdVar10 + -0x16c) = (int)(uVar14 >> 0x20);
        uVar15 = CONCAT44(*(u32 *)((int)pdVar10 + -0x16c), (int)uVar14);

        float_check_errno(iVar1, puVar3, puVar6, a3, *(u32 *)((int)pdVar10 + -0x228));

        *(int *)((int)pdVar10 + -0x170) = (int)((u64)uVar15 >> 0x20);

        uVar5 = 0x228;

        uVar4 = *(u32 *)((int)pdVar10 + -0x170);
        uVar15 = CONCAT44(uVar4, (int)uVar15);
        *(u32 *)(a0 + 0x228) = uVar4;

        *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0xa0);
        Vec3_make(a0 + 0x14, 0x228, puVar6, a3, *(u32 *)((int)pdVar10 + -0x22c));
        *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0xb0);
        Vec3_make((u8 *)((int)pdVar10 + -0x48), uVar5, puVar6, a3, *(u32 *)((int)pdVar10 + -0x22c));
        Vec3_cos_angle((u8 *)((int)pdVar10 + -0xa0), (u8 *)((int)pdVar10 + -0xb0), puVar6, a3);

        *(int *)((int)pdVar10 + -0x174) = (int)((u64)uVar15 >> 0x20);
        uVar15 = CONCAT44(*(u32 *)((int)pdVar10 + -0x174), (int)uVar15);
        *(u32 *)(a0 + 0x224) = *(u32 *)((int)pdVar10 + -0x174);

        uVar5 = (u32)uVar15;
        pcVar7 = Vec3_dtor;
        Vec3_dtor((u8 *)((int)pdVar10 + -0xb0), 0xffffffff, Vec3_dtor, a3);
        Vec3_dtor((u8 *)((int)pdVar10 + -0xa0), 0xffffffff, pcVar7, a3);

        *(u32 *)(a0 + 0x278) = 0x3f800000;
        uVar15 = CONCAT44(*(u32 *)(a0 + 0x220), *(u32 *)(a0 + 0x24));

        if ((float)uVar15 < (float)((u64)uVar15 >> 0x20)) {
            a3 = NULL;
            pcVar7 = (code *)0xffffffff;
            uVar4 = 6;
            ar4_00 = (u8 *)(a0 + 0xb0);
            uVar5 = CAnimBody_SetAnimation(ar4_00, 6, 0xffffffff, 0);
            *(u32 *)((int)pdVar10 + -0x178) = uVar5;
            if (*(int *)((int)pdVar10 + -0x178) != 6) {
                ar4_00 = (u8 *)(a0 + 0xb0);
                CAnimBody_SetFrame(ar4_00, uVar4, pcVar7, a3);
            }
        } else {
            a3 = NULL;
            pcVar7 = (code *)0xffffffff;
            uVar4 = 10;
            ar4_00 = (u8 *)(a0 + 0xb0);
            CAnimBody_SetAnimation(ar4_00, 10, 0xffffffff, 0);
        }

        fVar12 = *(float *)(a0 + 0x224);
        fVar16 = 45.0;

        if (fVar16 < fVar12) {

            dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x38), *(u32 *)(a0 + 0x28));

            fVar12 = SUB84(dVar13, 0) / (float)((u64)dVar13 >> 0x20);

            *(float *)(a0 + 0x3c) = fVar12;

            uVar5 = Vec3_sub_023334(a0 + 0x14, (u8 *)((int)pdVar10 + -0x48), pcVar7, a3);
            *(u32 *)((int)pdVar10 + -0x17c) = uVar5;
            *(u32 *)(a0 + 0x27c) = *(u32 *)((int)pdVar10 + -0x17c);
            if (*(int *)(a0 + 0x27c) == 3) {
                ar7_00 = 0;
                uVar8 = 0xffffffff;
                uVar4 = 7;
                uVar5 = CAnimBody_SetAnimation(a0 + 0xb0, 7, 0xffffffff, 0);
                *(u32 *)((int)pdVar10 + -0x180) = uVar5;
                iVar1 = *(int *)((int)pdVar10 + -0x180);
                uVar5 = get_field_1c_on_field_b0(a0, uVar4, uVar8);
                *(u32 *)((int)pdVar10 + -0x184) = uVar5;
                uVar4 = *(u32 *)((int)pdVar10 + -0x184);
                uVar5 = array_at_field_14(a0 + 0xb0, uVar4, uVar8, ar7_00);
                *(u32 *)((int)pdVar10 + -0x188) = uVar5;
                uVar5 = deref_u32(*(u32 *)((int)pdVar10 + -0x188));
                *(u32 *)((int)pdVar10 + -0x18c) = uVar5;
                a3 = (code *)(a0 + 0xb4);
                pcVar7 = *(code **)((int)pdVar10 + -0x18c);
                uVar4 = *(u32 *)(pcVar7 + 4);
                *(u32 *)a3 = *(u32 *)pcVar7;
                *(u32 *)(a0 + 0xb8) = uVar4;
                ar4_00 = *(u8 **)(pcVar7 + 8);
                *(u8 **)(a0 + 0xbc) = ar4_00;
                if (*(int *)(a0 + 0x128) == 3) {
                    *(u8 **)(a0 + 0xb4) = &g_8c135fdc;
                } else {
                    ar4_00 = &g_8c1362c4;
                    *(u8 **)(a0 + 0xb4) = &g_8c1362c4;
                }

                *(u32 *)(a0 + 0x2c0) = *(u32 *)(a0 + 0x224);

            } else {
                a3 = NULL;
                pcVar7 = (code *)0xffffffff;
                uVar4 = 8;
                uVar5 = CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
                *(u32 *)((int)pdVar10 + -400) = uVar5;
                iVar1 = *(int *)((int)pdVar10 + -400);
                uVar5 = get_field_1c_on_field_b0(a0, uVar4, pcVar7);
                *(u32 *)((int)pdVar10 + -0x194) = uVar5;
                uVar4 = *(u32 *)((int)pdVar10 + -0x194);
                uVar5 = array_at_field_14(a0 + 0xb0, uVar4, pcVar7, a3);
                *(u32 *)((int)pdVar10 + -0x198) = uVar5;
                uVar5 = deref_u32(*(u32 *)((int)pdVar10 + -0x198));
                *(u32 *)((int)pdVar10 + -0x19c) = uVar5;
                puVar2 = *(u32 **)((int)pdVar10 + -0x19c);
                uVar4 = puVar2[1];
                *(u32 *)(a0 + 0xb4) = *puVar2;
                *(u32 *)(a0 + 0xb8) = uVar4;
                ar4_00 = (u8 *)puVar2[2];
                *(u8 **)(a0 + 0xbc) = ar4_00;
                if (*(int *)(a0 + 0x128) == 3) {
                    *(u8 **)(a0 + 0xb4) = &g_8c135ff4;
                } else {
                    *(u8 **)(a0 + 0xb4) = &g_8c1362dc;
                }

                *(u32 *)(a0 + 0x2c0) = *(u32 *)(a0 + 0x224);
            }
            if (iVar1 != 6) {
                ar4_00 = (u8 *)(a0 + 0xb0);
                CAnimBody_SetFrame(ar4_00, uVar4, pcVar7, a3);
            }

            *(u32 *)(a0 + 0x278) = 0x3f333333;
        }
        *(u32 *)(a0 + 0x2b8) = 3;
        *(u32 *)(a0 + 0x40) = 1;
        uVar5 = rand();
        *(u32 *)((int)pdVar10 + -0x1a0) = uVar5;
        uVar4 = 3;
        uVar5 = libgcc_divide_helper_01031c(*(u32 *)((int)pdVar10 + -0x1a0), 3, pcVar7);
        *(u32 *)((int)pdVar10 + -0x200) = uVar5;
        *(int *)(a0 + 0x280) = *(int *)((int)pdVar10 + -0x200) + 1;
        clear_3_words(a0 + 0x2c8, uVar4, pcVar7, a3);
        break;
    case 1:
        *(u32 *)(a0 + 0x40) = 3;
        *(u32 *)(a0 + 0x290) = 0;
    case 3:
        uVar5 = get_field_1c_026dd8(a0 + 0xb0, iVar1 * 4, pcVar7);
        uVar4 = (u32)((u64)in_dr14 >> 0x20);
        *(u32 *)((int)pdVar10 + -0x1a4) = uVar5;
        iVar1 = *(int *)((int)pdVar10 + -0x1a4);
        if (iVar1 == 5) {
            uVar5 = get_field_1c_026dd8(a0 + 0xb0, uVar5, pcVar7);
            uVar11 = SUB84(dVar13, 0);
            *(u32 *)((int)pdVar10 + -0x1c0) = uVar5;
            uVar5 = get_motion_data(a0 + 0xb0, *(u32 *)((int)pdVar10 + -0x1c0), pcVar7, a3);
            *(u32 *)((int)pdVar10 + -0x1c4) = uVar5;
            fVar12 = (float)*(int *)((int)pdVar10 + -0x1c4);
            dVar17 = (double)CONCAT44(uVar4, fVar12);
            dVar13 = (double)(u64)uVar11;

            bVar18 = fVar12 < 0.0;

            if (bVar18) {

                dVar13 = (double)CONCAT44(0x4f800000, uVar11);

                dVar17 = (double)CONCAT44(uVar4, fVar12 + (float)((u64)dVar13 >> 0x20));
            }
            Vec3_set_xyz((u8 *)((int)pdVar10 + -0x104), 0x228, pcVar7, a3);
            *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0x104);
            *(u8 **)((int)pdVar10 + -0x230) = (u8 *)((int)pdVar10 + -0x114);
            iVar1 = a0 + 0x14;
            puVar6 = (u8 *)((int)pdVar10 + -0x38);
            game_sub_031eb0(a0, a1, puVar6, iVar1, *(u32 *)((int)pdVar10 + -0x230));
            Vec3_assign(a0 + 0x14, (u8 *)((int)pdVar10 + -0x114), puVar6, iVar1);
            Vec3_dtor((u8 *)((int)pdVar10 + -0x114), 0xffffffff, puVar6, iVar1);
            pcVar7 = object_dtor_delete;
            object_dtor_delete((u8 *)((int)pdVar10 + -0x104), 0xffffffff, object_dtor_delete,
                               (u8 *)((int)pdVar10 + -0x104));
            a3 = CAnimBody_AdvanceFrame_033b98;
            pcVar7 = (code *)CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0x278, pcVar7, CAnimBody_AdvanceFrame_033b98);
            *(code **)((int)pdVar10 + -0x1c8) = pcVar7;
            iVar1 = *(int *)((int)pdVar10 + -0x1c8);
            if (iVar1 == 1) {
                *(u32 *)(a0 + 0x2b8) = 2;
                *(u32 *)(a0 + 0x40) = 5;
            }
            CAnimBody_GetCurFrame(a0 + 0xb0, iVar1, pcVar7, a3, *(u32 *)((int)pdVar10 + -0x228));

            *(int *)((int)pdVar10 + -0x1cc) = (int)((u64)dVar13 >> 0x20);
            dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)((int)pdVar10 + -0x1cc));

            if ((float)((u64)dVar17 >> 0x20) < SUB84(dVar17, 0)) {

                bVar18 = SUB84(dVar17, 0) < SUB84(in_dr12, 0);

                if (bVar18) {
                    *(int *)((int)pdVar10 + -0x208) = a0;

                    dVar13 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(*(int *)((int)pdVar10 + -0x208) + 0x28));

                    fVar12 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);

                    *(float *)(*(int *)((int)pdVar10 + -0x208) + 0x28) = fVar12;
                    dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));

                    if ((float)((u64)dVar13 >> 0x20) < SUB84(dVar13, 0)) {

                        uVar5 = *(u32 *)(a0 + 0x24);
                        dVar13 = (double)CONCAT44(uVar5, SUB84(dVar13, 0));
                        *(u32 *)(a0 + 0x28) = uVar5;
                    }
                    goto LAB_8c04c060;
                }
            }
            rand_float(a0, iVar1, pcVar7);

            *(int *)((int)pdVar10 + -0x1d0) = (int)((u64)dVar13 >> 0x20);

            *(int *)((int)pdVar10 + -0x20c) = a0;

            dVar13 =
                (double)CONCAT44(*(u32 *)((int)pdVar10 + -0x1d0), *(u32 *)(*(int *)((int)pdVar10 + -0x20c) + 0x28));

            fVar12 = SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20);

            *(float *)(*(int *)((int)pdVar10 + -0x20c) + 0x28) = fVar12;
            fVar12 = *(float *)(a0 + 0x28);

            dVar13 = (double)(u64)(u32)fVar12;
            if (fVar12 < 0.0) {
                a3 = (code *)(a0 + 0x28);
                dVar13 = (double)(u64)(u32)fVar12;

                *(u32 *)a3 = 0;
            }
        } else if (iVar1 == 6) {
            uVar8 = 0xb0;
            uVar5 = get_field_1c_026dd8(a0 + 0xb0, a0 + 0xb0, 0xb0);
            uVar11 = SUB84(dVar13, 0);
            *(u32 *)((int)pdVar10 + -0x1d4) = uVar5;
            uVar5 = get_motion_data(a0 + 0xb0, *(u32 *)((int)pdVar10 + -0x1d4), uVar8, a3);
            *(u32 *)((int)pdVar10 + -0x1d8) = uVar5;
            fVar12 = (float)*(int *)((int)pdVar10 + -0x1d8);
            dVar17 = (double)CONCAT44(uVar4, fVar12);
            dVar13 = (double)(u64)uVar11;

            bVar18 = fVar12 < 0.0;

            if (bVar18) {

                dVar13 = (double)CONCAT44(0x4f800000, uVar11);

                dVar17 = (double)CONCAT44(uVar4, fVar12 + (float)((u64)dVar13 >> 0x20));
            }
            Vec3_set_xyz((u8 *)((int)pdVar10 + -0x120), *(int *)((int)pdVar10 + -0x1d8), uVar8, a3);
            *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0x120);
            *(u8 **)((int)pdVar10 + -0x230) = (u8 *)((int)pdVar10 + -0x130);
            iVar1 = a0 + 0x14;
            puVar6 = (u8 *)((int)pdVar10 + -0x38);
            game_sub_031eb0(a0, a1, puVar6, iVar1, *(u32 *)((int)pdVar10 + -0x230));
            Vec3_assign(a0 + 0x14, (u8 *)((int)pdVar10 + -0x130), puVar6, iVar1);
            Vec3_dtor((u8 *)((int)pdVar10 + -0x130), 0xffffffff, puVar6, iVar1);
            uVar5 = 0xffffffff;
            object_dtor_delete((u8 *)((int)pdVar10 + -0x120), 0xffffffff, puVar6, iVar1);
            a3 = (code *)(a0 + 0xb0);
            pcVar7 = CAnimBody_AdvanceFrame_033d88;
            CAnimBody_AdvanceFrame_033d88(a3, uVar5, CAnimBody_AdvanceFrame_033d88, a3);
            uVar5 = 0xb0;
            CAnimBody_GetCurFrame(a0 + 0xb0, 0xb0, pcVar7, a3, *(u32 *)((int)pdVar10 + -0x228));

            *(int *)((int)pdVar10 + -0x1dc) = (int)((u64)dVar13 >> 0x20);
            dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), *(u32 *)((int)pdVar10 + -0x1dc));

            bVar18 = (float)((u64)in_dr12 >> 0x20) < SUB84(dVar17, 0);

            if (bVar18) {

                dVar13 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -0x150), SUB84(dVar13, 0));

                bVar18 = SUB84(dVar17, 0) < (float)((u64)dVar13 >> 0x20);

                if (bVar18) {
                    *(int *)((int)pdVar10 + -0x210) = a0;

                    dVar13 = (double)CONCAT44(0x3f19999a, *(u32 *)(*(int *)((int)pdVar10 + -0x210) + 0x28));

                    fVar12 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);

                    *(float *)(*(int *)((int)pdVar10 + -0x210) + 0x28) = fVar12;
                    dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));

                    if ((float)((u64)dVar13 >> 0x20) < SUB84(dVar13, 0)) {

                        uVar5 = *(u32 *)(a0 + 0x24);
                        dVar13 = (double)CONCAT44(uVar5, SUB84(dVar13, 0));
                        *(u32 *)(a0 + 0x28) = uVar5;
                    }
                    goto LAB_8c04c060;
                }
            }
            rand_float(a0, uVar5, pcVar7);

            *(int *)((int)pdVar10 + -0x1e0) = (int)((u64)dVar13 >> 0x20);

            *(int *)((int)pdVar10 + -0x214) = a0;

            dVar13 =
                (double)CONCAT44(*(u32 *)((int)pdVar10 + -0x1e0), *(u32 *)(*(int *)((int)pdVar10 + -0x214) + 0x28));

            fVar12 = SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20);

            *(float *)(*(int *)((int)pdVar10 + -0x214) + 0x28) = fVar12;
            fVar12 = *(float *)(a0 + 0x28);

            dVar13 = (double)(u64)(u32)fVar12;
            if (fVar12 < 0.0) {
                dVar13 = (double)(u64)(u32)fVar12;

                *(u32 *)(a0 + 0x28) = 0;
            }
        } else if ((iVar1 == 7) || (iVar1 == 8)) {

            *(u32 *)(a0 + 0x2c) = 0;

            *(int *)((int)pdVar10 + -0x204) = a0;

            dVar13 = (double)CONCAT44(0x3f666666, *(u32 *)(*(int *)((int)pdVar10 + -0x204) + 0x28));

            fVar12 = (float)((u64)dVar13 >> 0x20);
            dVar13 = (double)CONCAT44(fVar12, SUB84(dVar13, 0) * fVar12);

            *(int *)(*(int *)((int)pdVar10 + -0x204) + 0x28) = SUB84(dVar13, 0);

            CAnimBody_GetCurFrame(a0 + 0xb0, a0 + 0xb0, pcVar7, a3, *(u32 *)((int)pdVar10 + -0x228));

            *(int *)((int)pdVar10 + -0x1a8) = (int)((u64)dVar13 >> 0x20);

            *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0xbc);
            game_sub_034650(a0 + 0xb0, *(u32 *)(*(int *)(a0 + 0xb4) + 4), pcVar7, a3);
            vec3_copy_8c023d8c((u8 *)((int)pdVar10 + -100), (u8 *)((int)pdVar10 + -0xbc), pcVar7, a3);
            object_dtor_delete((u8 *)((int)pdVar10 + -0xbc), 0xffffffff, pcVar7, a3);

            dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x2c8), *(u32 *)((int)pdVar10 + -100));

            fVar12 = SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20);

            *(float *)((int)pdVar10 + -0x70) = fVar12;
            dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x2cc), *(u32 *)((int)pdVar10 + -0x60));

            fVar12 = SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20);

            *(float *)((int)pdVar10 + -0x6c) = fVar12;
            dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x2d0), *(u32 *)((int)pdVar10 + -0x5c));

            fVar12 = (float)((u64)dVar13 >> 0x20);
            dVar13 = (double)CONCAT44(fVar12, SUB84(dVar13, 0) - fVar12);

            *(int *)((int)pdVar10 + -0x68) = SUB84(dVar13, 0);

            vec3_copy_8c023d8c(a0 + 0x2c8, (u8 *)((int)pdVar10 + -100), pcVar7, a3);
            vec3_copy_8c02b5fc((u8 *)((int)pdVar10 + -200), (u8 *)((int)pdVar10 + -0x70), pcVar7);
            *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0xd8);
            Vec3_sub_023484(a0 + 0x14, (u8 *)((int)pdVar10 + -200), pcVar7, a3, *(u32 *)((int)pdVar10 + -0x22c));
            Vec3_assign(a0 + 0x14, (u8 *)((int)pdVar10 + -0xd8), pcVar7, a3);
            Vec3_dtor((u8 *)((int)pdVar10 + -0xd8), 0xffffffff, pcVar7, a3);
            uVar5 = 0xffffffff;
            object_dtor_delete((u8 *)((int)pdVar10 + -200), 0xffffffff, pcVar7, a3);
            Vec3_length(a0 + 0x14, uVar5, pcVar7, a3);
            uVar4 = 0x278;
            uVar5 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0x278, pcVar7, a3);
            *(u32 *)((int)pdVar10 + -0x1ac) = uVar5;
            if (*(int *)((int)pdVar10 + -0x1ac) == 1) {
                Vec3_sub_0231c8((u8 *)((int)pdVar10 + -0x48), uVar4, pcVar7, a3);

                *(int *)((int)pdVar10 + -0x1b0) = (int)((u64)dVar13 >> 0x20);

                iVar1 = a0 + 0x14;
                Vec3_sub_0231c8(iVar1, uVar4, pcVar7, a3);

                *(int *)((int)pdVar10 + -0x1b4) = (int)((u64)dVar13 >> 0x20);
                uVar15 = CONCAT44(*(u32 *)((int)pdVar10 + -0x1b4), SUB84(dVar13, 0));

                float_check_errno(iVar1, uVar4, pcVar7, a3, *(u32 *)((int)pdVar10 + -0x228));

                *(int *)((int)pdVar10 + -0x1b8) = (int)((u64)uVar15 >> 0x20);
                uVar15 = CONCAT44(*(u32 *)((int)pdVar10 + -0x1b8), (int)uVar15);
                *(u32 *)(a0 + 0x228) = *(u32 *)((int)pdVar10 + -0x1b8);

                *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0xe8);
                Vec3_make(a0 + 0x14, uVar4, pcVar7, a3, *(u32 *)((int)pdVar10 + -0x22c));
                *(u8 **)((int)pdVar10 + -0x22c) = (u8 *)((int)pdVar10 + -0xf8);
                Vec3_make((u8 *)((int)pdVar10 + -0x48), uVar4, pcVar7, a3, *(u32 *)((int)pdVar10 + -0x22c));
                Vec3_cos_angle((u8 *)((int)pdVar10 + -0xe8), (u8 *)((int)pdVar10 + -0xf8), pcVar7, a3);

                *(int *)((int)pdVar10 + -0x1bc) = (int)((u64)uVar15 >> 0x20);
                dVar13 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -0x1bc), (int)uVar15);
                *(u32 *)(a0 + 0x224) = *(u32 *)((int)pdVar10 + -0x1bc);

                Vec3_dtor((u8 *)((int)pdVar10 + -0xf8), 0xffffffff, pcVar7, a3);
                Vec3_dtor((u8 *)((int)pdVar10 + -0xe8), 0xffffffff, pcVar7, a3);
                *(u32 *)(a0 + 0x290) = 0;
                pcVar7 = (code *)0x2b8;
                *(u32 *)(a0 + 0x2b8) = 2;
                *(u32 *)(a0 + 0x40) = 5;
            }
        } else {
            *(u32 *)(a0 + 0x2b8) = 3;
            uVar5 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, 0xb0, pcVar7, a3);
            *(u32 *)((int)pdVar10 + -0x1e4) = uVar5;
            if (*(int *)((int)pdVar10 + -0x1e4) == 1) {
                *(u32 *)(a0 + 0x2b8) = 2;
            }
        }
    LAB_8c04c060:
        Vec3_distance_sq(a1, a2, pcVar7, a3);

        *(int *)((int)pdVar10 + -0x1e8) = (int)((u64)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x48), in_fr3);
        dVar17 = (double)CONCAT44(0x40400000, *(u32 *)(a0 + 0x28));

        fVar12 = SUB84(dVar17, 0) * (float)((u64)dVar17 >> 0x20);
        dVar13 = (double)CONCAT44((float)((u64)dVar13 >> 0x20) + fVar12, SUB84(dVar13, 0));

        dVar17 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -0x1e8), fVar12);

        bVar18 = (float)((u64)dVar13 >> 0x20) < (float)((u64)dVar17 >> 0x20);

        if (!bVar18) {

            *(u32 *)(a0 + 0x2c) = 0;
            dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x38), *(u32 *)(a0 + 0x28));

            fVar12 = SUB84(dVar13, 0) / (float)((u64)dVar13 >> 0x20);

            *(float *)(a0 + 0x3c) = fVar12;
            fVar12 = *(float *)(a0 + 0x28);

            uVar14 = (u64)(u32)fVar12;
            if (0.0 < fVar12) {
                Vec3_distance_sq(a1, a2, pcVar7, a3);

                *(int *)((int)pdVar10 + -0x1ec) = (int)(uVar14 >> 0x20);
                dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x28), *(u32 *)((int)pdVar10 + -0x1ec));

                fVar12 = SUB84(dVar13, 0) / (float)((u64)dVar13 >> 0x20);

                dVar13 = (double)CONCAT44(0x40000000, fVar12);

                fVar12 = SUB84(dVar13, 0) * (float)((u64)dVar13 >> 0x20);

                *(float *)(a0 + 0x38) = fVar12;
                dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x38), *(u32 *)(a0 + 0x28));

                fVar12 = SUB84(dVar13, 0) / (float)((u64)dVar13 >> 0x20);

                *(float *)(a0 + 0x3c) = fVar12;
            }
            *(u32 *)(a0 + 0x40) = 4;
        }
        break;
    case 4:
        uVar5 = 0xb0;
        CAnimBody_GetCurFrame(a0 + 0xb0, 0xb0, pcVar7, a3, *(u32 *)((int)pdVar10 + -0x228));

        *(int *)((int)pdVar10 + -0x1f0) = (int)((u64)dVar13 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)pdVar10 + -0x1f0));

        uVar5 = get_field_1c_026dd8(a0 + 0xb0, uVar5, pcVar7);
        *(u32 *)((int)pdVar10 + -500) = uVar5;
        fVar12 = SUB84(in_dr14, 0);
        if (*(int *)((int)pdVar10 + -500) == 5) {
            if ((float)((u64)in_dr14 >> 0x20) < fVar12) {

                bVar18 = fVar12 < SUB84(in_dr12, 0);

                if (bVar18) {
                    *(int *)((int)pdVar10 + -0x218) = a0;

                    dVar13 = (double)CONCAT44(0x3d4ccccd, *(u32 *)(*(int *)((int)pdVar10 + -0x218) + 0x28));

                    fVar12 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);

                    *(float *)(*(int *)((int)pdVar10 + -0x218) + 0x28) = fVar12;
                    uVar15 = CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));

                    if ((float)((u64)uVar15 >> 0x20) < (float)uVar15) {

                        *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
                    }
                }
            }
        } else if (*(int *)((int)pdVar10 + -500) == 6) {

            bVar18 = (float)((u64)in_dr12 >> 0x20) < fVar12;

            if (bVar18) {

                dVar13 = (double)CONCAT44(*(u32 *)((int)pdVar10 + -0x150), SUB84(dVar13, 0));

                bVar18 = fVar12 < (float)((u64)dVar13 >> 0x20);

                if (bVar18) {
                    *(int *)((int)pdVar10 + -0x21c) = a0;

                    dVar13 = (double)CONCAT44(0x3dcccccd, *(u32 *)(*(int *)((int)pdVar10 + -0x21c) + 0x28));

                    fVar12 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);

                    *(float *)(*(int *)((int)pdVar10 + -0x21c) + 0x28) = fVar12;
                    uVar15 = CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));

                    if ((float)((u64)uVar15 >> 0x20) < (float)uVar15) {

                        *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
                    }
                }
            }
        }
        *(int *)((int)pdVar10 + -0x220) = a0;
        ar5_00 = (float *)(*(int *)((int)pdVar10 + -0x220) + 0x28);

        dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x3c), *(u32 *)(*(int *)((int)pdVar10 + -0x220) + 0x28));

        fVar12 = SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20);

        *ar5_00 = fVar12;
        fVar12 = *(float *)(a0 + 0x28);

        if (fVar12 < 0.0) {

            *(u32 *)(a0 + 0x28) = 0;
        }
        uVar5 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, ar5_00, pcVar7, a3);
        *(u32 *)((int)pdVar10 + -0x1f8) = uVar5;
        if (*(int *)((int)pdVar10 + -0x1f8) == 1) {
            uVar9 = 0;
            *(u32 *)(a0 + 0x2b8) = 2;
        }
    }
switchD_8c04b39c_caseD_2:
    Vec3_assign(a0 + 0x80, a0 + 0x14, pcVar7, a3);
    game_sub_051a68(a0, (u8 *)((int)pdVar10 + -0x38), a1, a3);
    *(u32 *)((int)pdVar10 + -0x15c) = uVar9;
    object_dtor_delete((u8 *)((int)pdVar10 + -0x70), 0xffffffff, a1, a3);
    object_dtor_delete((u8 *)((int)pdVar10 + -100), 0xffffffff, a1, a3);
    Vec3_dtor((u8 *)((int)pdVar10 + -0x58), 0xffffffff, a1, a3);
    Vec3_dtor((u8 *)((int)pdVar10 + -0x48), 0xffffffff, a1, a3);
    Vec3_dtor((u8 *)((int)pdVar10 + -0x38), 0xffffffff, a1, a3);
    Vec3_dtor((u8 *)((int)pdVar10 + -0x28), 0xffffffff, a1, a3);
    return *(u32 *)((int)pdVar10 + -0x15c);
}

/*
 * game_sub_04c314  0x8c04c314
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4, Vec3_sub_04e0e0, game_sub_046684, game_sub_04f034, game_sub_054b74, game_sub_055750,
 * game_sub_057164, game_sub_05c640
 */
u32 game_sub_04c314(int a0, code *a1, code *a2) {
    double dVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    u32 *puVar5;
    int iVar6;
    u32 uVar7;
    u8 *puVar8;
    code *ar6_00;
    code *pcVar9;
    code *pcVar10;
    u32 uVar11;
    u32 uVar12;
    u64 in_dr0;
    double dVar13;
    float fVar16;
    u64 uVar14;
    float fVar17;
    float fVar18;
    double dVar15;
    u64 in_dr2;
    u64 in_dr4;
    double in_dr12;
    double in_dr14;
    double in_xd0;
    double in_xd12;
    bool bVar19;
    char cVar20;
    char cVar21;
    u32 uStack_1cc;
    float fStack_1bc;
    float fStack_1b8;
    u32 uStack_1b4;
    u8 auStack_1b0[16];
    u8 auStack_1a0[12];
    u8 auStack_194[16];
    u8 auStack_184[12];
    u8 auStack_178[16];
    double dStack_168;
    u8 auStack_15c[16];
    u8 auStack_14c[12];
    u8 auStack_140[16];
    u8 auStack_130[16];
    u8 auStack_120[16];
    u8 auStack_110[16];
    u8 auStack_100[16];
    u8 auStack_f0[16];
    u8 auStack_e0[16];
    u8 auStack_d0[16];
    u8 auStack_c0[16];
    u8 auStack_b0[16];
    u8 auStack_a0[16];
    u8 auStack_90[16];
    u8 auStack_80[16];
    u8 auStack_70[12];
    u8 auStack_64[12];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[8];
    double dStack_30;

    cVar21 = '\0';
    cVar20 = '\0';
    fVar17 = (float)((u64)in_dr4 >> 0x20);
    uVar11 = 1;
    pcVar9 = Vec3_ctor_zero;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_38, a1, a2);
    Vec3_ctor_zero(auStack_48, Vec3_ctor_zero, ar6_00);
    if (g_8c280478 == '\0') {
        g_8c280474 = 0;
        g_8c280478 = '\x01';
    }
    if (*(int *)(a0 + 0x324) != 1) {
        *(u32 *)(a0 + 0x2e8) = 2;
    }
    pcVar10 = a1;
    Vec3_sub(a2, a1, ar6_00, pcVar9, auStack_90);
    Vec3_normalize(auStack_90, pcVar10, ar6_00, pcVar9);
    pcVar9 = Vec3_ctor_copy;
    Vec3_ctor_copy(auStack_58, auStack_a0, ar6_00, Vec3_ctor_copy);
    Vec3_dtor(auStack_a0, 0xffffffff, ar6_00, pcVar9);
    Vec3_dtor(auStack_90, 0xffffffff, ar6_00, pcVar9);
    uStack_1b4 = 0xffffffff;
    puVar8 = auStack_58;
    uVar2 = Vec3_sub_023334(a0 + 0x14, puVar8, ar6_00, pcVar9);
    *(u32 *)(a0 + 0x27c) = uVar2;
    pcVar10 = Vec3_set_zero;
    Vec3_set_zero(auStack_64);
    pcVar9 = Vec3_set_zero;
    Vec3_set_zero(auStack_70);
    Vec3_make(a0 + 0x14, pcVar9, ar6_00, pcVar10, auStack_b0);
    Vec3_make(auStack_58, pcVar9, ar6_00, pcVar10, auStack_c0);
    Vec3_cos_angle(auStack_b0, auStack_c0, ar6_00, pcVar10);
    if (cVar21 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)in_dr0 >> 0x20));
    }
    Vec3_dtor(auStack_c0, 0xffffffff, ar6_00, pcVar10);
    uVar2 = (u32)in_dr0;
    Vec3_dtor(auStack_b0, 0xffffffff, ar6_00, pcVar10);
    if (cVar21 == '\0') {
        fStack_1b8 = 30.0;
        fStack_1bc = 60.0;
        dVar13 = (double)CONCAT44(0x41200000, uVar2);
    } else {
        uStack_1b4 = 0xc4;
        fStack_1b8 = 2.69049e-43;
        dVar13 = 3.99475032826028e-312;
        fStack_1bc = 2.63444e-43;
    }
    Vec3_ctor_copy(auStack_80, a2, ar6_00, pcVar10);
    if (*(int *)(a0 + 0x128) == 3) {
        if (cVar21 == '\0') {
            dVar13 = (double)CONCAT44(0x42fff3ba, SUB84(dVar13, 0));
            in_dr12 = 34144997571.25;
        } else {
            in_dr12 = 562106598554828.8;
            dVar13 = 3.7402662374345e-312;
            in_xd12 = -4.8084574610579776e+231;
        }
        uStack_1cc = 0x42fff3ba;
    } else if (*(int *)(a0 + 0x128) == 4) {
        if (cVar21 == '\0') {
            dVar13 = (double)CONCAT44(0x4302f7fa, SUB84(dVar13, 0));
            uStack_1cc = 0x4302f7fa;
            in_dr12 = 26070880467.71875;
        } else {
            in_dr12 = 667400475445497.0;
            dVar13 = 3.74026721418252e-312;
            uStack_1cc = 0x4302f7fa;
            in_xd12 = -9.066781293775917e-251;
        }
    }
LAB_8c04c588:
    iVar6 = *(int *)(a0 + 0x40);
    if ((iVar6 < 6) && (-1 < iVar6)) {
        switch (iVar6) {
        case 0:
            if (*(int *)(a0 + 0x2b8) != 2)
                goto code_r0x8c04c5ee;
            puVar8 = auStack_80;
            Vec3_distance_sq(a1, puVar8, ar6_00, pcVar10);
            dVar15 = dVar13;
            fVar18 = fVar17;
            fVar16 = (float)in_dr4;
            if (cVar21 == '\0') {
                dVar15 = in_xd0;
                fVar18 = (float)((u64)dVar13 >> 0x20);
                fVar16 = fVar17;
            }
            in_xd0 = dVar15;
            if (cVar20 == '\0' && fVar16 < fVar18) {
                Vec3_make(a0 + 0x14, puVar8, ar6_00, pcVar10, auStack_d0);
                Vec3_length(auStack_d0, puVar8, ar6_00, pcVar10);
                uVar2 = 0xffffffff;
                Vec3_dtor(auStack_d0, 0xffffffff, ar6_00, pcVar10);
                uVar14 = (u64)(u32)fVar18;
                if (cVar21 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(u64 *)(a0 + 0x2c) = uVar14;
                }
                timer_stop_94(a0, uVar2, ar6_00, pcVar10);
                Vec3_make(a0 + 0x14, uVar2, ar6_00, pcVar10, auStack_e0);
                Vec3_make(auStack_58, uVar2, ar6_00, pcVar10, auStack_f0);
                Vec3_cos_angle(auStack_e0, auStack_f0, ar6_00, pcVar10);
                uVar2 = (u32)uVar14;
                if (cVar21 == '\0') {
                    *(int *)(a0 + 0x224) = (int)(uVar14 >> 0x20);
                } else {
                    *(u64 *)(a0 + 0x224) = uVar14;
                }
                Vec3_dtor(auStack_f0, 0xffffffff, ar6_00, pcVar10);
                pcVar10 = Vec3_dtor;
                Vec3_dtor(auStack_e0, 0xffffffff, ar6_00, Vec3_dtor);
                uVar7 = 0x278;
                dVar13 = (double)CONCAT44(0x3f800000, uVar2);
                if (cVar21 == '\0') {
                    *(u32 *)(a0 + 0x278) = 0x3f800000;
                } else {
                    *(double *)(a0 + 0x278) = dVar13;
                }
                *(u32 *)(a0 + 0x40) = 1;
                clear_3_words(a0 + 0x2c8, 0x278, ar6_00, pcVar10);
                CAnimBody_SetFrame(a0 + 0xb0, uVar7, ar6_00, pcVar10);
                *(u32 *)(a0 + 0x290) = 0;
                goto switchD_8c04c5a8_caseD_1;
            }
            uVar11 = 0;
            *(u32 *)(a0 + 0x330) = 0;
            break;
        case 1:
        switchD_8c04c5a8_caseD_1:
            *(u32 *)(a0 + 0x40) = 3;
        case 3:
            pcVar9 = (code *)auStack_80;
            Vec3_distance_sq(a1, pcVar9, ar6_00, pcVar10);
            if (cVar21 == '\0') {
                dVar15 = (double)CONCAT44(fVar17, (int)((u64)dVar13 >> 0x20));
                dVar13 = in_xd0;
            } else {
                dVar15 = (double)CONCAT44((float)in_dr4, fVar17);
            }
            if (cVar20 != '\0' || SUB84(dVar15, 0) <= (float)((u64)dVar15 >> 0x20)) {
                pcVar9 = (code *)0x1;
                *(u32 *)(a0 + 0x290) = 1;
            }
            goto LAB_8c04c728;
        case 4:
            *(u32 *)(a0 + 0x40) = 5;
        }
    }
    goto switchD_8c04c5a8_caseD_2;
code_r0x8c04c5ee:
    *(u32 *)(a0 + 0x40) = 3;
    goto LAB_8c04c588;
LAB_8c04c728:
    do {
        switch (*(u32 *)(a0 + 0x2b8)) {
        case 1:
        case 7:
            goto switchD_8c04c74a_caseD_1;
        case 2:
            *(u32 *)(a0 + 0x330) = 0;
            *(u32 *)(a0 + 800) = 0;
            if (*(int *)(a0 + 0x290) == 1) {
                *(u32 *)(a0 + 0x290) = 0;
                *(u32 *)(a0 + 0x330) = 0;
                Vec3_dtor(auStack_80, 0xffffffff, ar6_00, pcVar10);
                object_dtor_delete(auStack_70, 0xffffffff, ar6_00, pcVar10);
                object_dtor_delete(auStack_64, 0xffffffff, ar6_00, pcVar10);
                Vec3_dtor(auStack_58, 0xffffffff, ar6_00, pcVar10);
                Vec3_dtor(auStack_48, 0xffffffff, ar6_00, pcVar10);
                Vec3_dtor(auStack_38, 0xffffffff, ar6_00, pcVar10);
                return 0;
            }
            uVar2 = 100;
            iVar6 = a0;
            iVar3 = rand_range(a0, 0, 100);
            uVar7 = (u32)in_dr2;
            fVar18 = fStack_1bc;
            fVar16 = fStack_1b8;
            if (cVar21 == '\0') {
                fVar18 = (float)iVar3;
                fVar16 = fStack_1bc;
            }
            if ((cVar20 != '\0' || fVar16 <= fVar18) || (iVar6 = *(int *)(a0 + 700), iVar6 != 0)) {
                if (cVar21 == '\0') {
                    dVar15 = (double)CONCAT44(0x41200000, fVar18);
                } else {
                    dVar15 = 1.07851368593492e-311;
                }
                if (cVar20 == '\0') {
                    bVar19 = (float)((u64)dVar15 >> 0x20) < SUB84(in_dr14, 0);
                } else {
                    bVar19 = dVar15 < in_dr14;
                }
                if (bVar19) {
                    ar6_00 = (code *)auStack_80;
                    game_sub_057b6c(a0, a1, ar6_00, pcVar10);
                } else if (*(int *)(a0 + 700) == -1) {
                LAB_8c04ca6c:
                    uVar2 = SUB84(dVar15, 0);
                    *(u32 *)(a0 + 0x2b8) = 7;
                    pcVar9 = NULL;
                    ar6_00 = (code *)0xffffffff;
                    iVar3 = 0x12;
                    iVar6 = CAnimBody_SetAnimation(a0 + 0xb0, 0x12, 0xffffffff, 0);
                    if (iVar6 == 6) {
                        if (cVar21 == '\0') {
                            *(int *)(a0 + 0x2dc) = (int)((u64)in_dr12 >> 0x20);
                        } else {
                            *(double *)(a0 + 0x2dc) = in_dr12;
                        }
                    } else {
                        pcVar9 = vec3_clear;
                        vec3_clear(a0 + 0x2d4, iVar3, ar6_00, vec3_clear);
                        iVar3 = a0 + 0xb0;
                        CAnimBody_SetFrame(iVar3, iVar3, ar6_00, pcVar9);
                    }
                    uVar7 = get_field_1c_on_field_b0(a0, iVar3, ar6_00);
                    uVar4 = array_at_field_14(a0 + 0xb0, uVar7, ar6_00, pcVar9);
                    puVar5 = (u32 *)deref_u32(uVar4);
                    uVar7 = puVar5[1];
                    *(u32 *)(a0 + 0xb4) = *puVar5;
                    *(u32 *)(a0 + 0xb8) = uVar7;
                    pcVar10 = (code *)puVar5[2];
                    *(code **)(a0 + 0xbc) = pcVar10;
                    if (*(int *)(a0 + 0x128) == 3) {
                        *(u8 **)(a0 + 0xb4) = &g_8c135fac;
                    } else {
                        *(u8 **)(a0 + 0xb4) = &g_8c13624c;
                    }
                    Vec3_distance_sq(a1, auStack_80, ar6_00, pcVar10);
                    if (cVar21 == '\0') {
                        uStack_1cc = uVar2;
                    }
                    dVar15 = (double)CONCAT44(0x3f800000, uStack_1cc);
                    if (cVar21 == '\0') {
                        *(u32 *)(a0 + 0x2c0) = 0x3f800000;
                    } else {
                        *(double *)(a0 + 0x2c0) = dVar15;
                    }
                } else {
                    if (*(int *)(a0 + 700) == 0) {
                        uVar4 = rand();
                        iVar6 = libgcc_divide_helper_01031c(uVar4, 100, uVar2);
                        if (cVar21 == '\0') {
                            dVar15 = (double)CONCAT44(fStack_1b8, (float)iVar6);
                        } else {
                            dVar15 = (double)CONCAT44(uStack_1b4, fStack_1b8);
                        }
                        if (cVar20 == '\0' && SUB84(dVar15, 0) < (float)((u64)dVar15 >> 0x20)) {
                            Vec3_distance_sq(a1, auStack_80, uVar2, pcVar10);
                            if (cVar21 == '\0') {
                                dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), uVar7);
                                in_xd12 = (double)CONCAT44(SUB84(in_dr12, 0), 0x40400000);
                            }
                            if (cVar20 == '\0') {
                                fVar17 = (float)((u64)in_xd12 >> 0x20) * SUB84(in_xd12, 0);
                                bVar19 = (float)((u64)dVar15 >> 0x20) < fVar17;
                                dVar15 = (double)CONCAT44(fVar17, SUB84(in_xd12, 0));
                            } else {
                                bVar19 = dVar15 < in_xd12 * in_xd12;
                                dVar15 = in_xd12 * in_xd12;
                            }
                            if (bVar19)
                                goto LAB_8c04ca6c;
                        }
                    }
                    uVar4 = SUB84(in_dr14, 0);
                    *(u32 *)(a0 + 0x2b8) = 5;
                    pcVar10 = NULL;
                    ar6_00 = (code *)0xffffffff;
                    uVar2 = 0x18;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x18, 0xffffffff, 0);
                    vec3_clear(a0 + 0x2d4, uVar2, ar6_00, pcVar10);
                    CAnimBody_SetFrame(a0 + 0xb0, 0xb0, ar6_00, pcVar10);
                    uVar2 = get_field_1c_on_field_b0(a0, get_field_1c_on_field_b0, ar6_00);
                    uVar7 = array_at_field_14(a0 + 0xb0, uVar2, ar6_00, pcVar10);
                    puVar5 = (u32 *)deref_u32(uVar7);
                    uVar2 = puVar5[1];
                    *(u32 *)(a0 + 0xb4) = *puVar5;
                    *(u32 *)(a0 + 0xb8) = uVar2;
                    *(u32 *)(a0 + 0xbc) = puVar5[2];
                    if (*(int *)(a0 + 0x128) == 3) {
                        *(u8 **)(a0 + 0xb4) = &g_8c135fc4;
                    } else {
                        *(u8 **)(a0 + 0xb4) = &g_8c136264;
                    }
                    Vec3_distance_sq(a1, auStack_80, ar6_00, pcVar10);
                    fVar17 = (float)((u64)dVar15 >> 0x20);
                    dVar13 = dVar15;
                    if (cVar21 == '\0') {
                        dVar13 = (double)CONCAT44(fVar17, uVar4);
                    }
                    if (cVar20 == '\0') {
                        fVar18 = fVar17 / SUB84(in_dr12, 0);
                        dVar15 = (double)CONCAT44(fVar18, SUB84(dVar15, 0));
                        iVar6 = (int)fVar18;
                    } else {
                        dVar15 = dVar15 / in_dr12;
                        iVar6 = (int)dVar15;
                    }
                    if (cVar20 == '\0') {
                        fVar18 = (float)(iVar6 + 1);
                        dVar15 = (double)CONCAT44(fVar18, SUB84(dVar15, 0));
                        in_dr12 = (double)CONCAT44((fVar17 / fVar18) / SUB84(in_dr12, 0), SUB84(dVar13, 0));
                    } else {
                        dVar15 = (double)(iVar6 + 1);
                        in_dr12 = (dVar13 / dVar15) / in_dr12;
                    }
                    if (cVar21 == '\0') {
                        *(int *)(a0 + 0x2c0) = (int)((u64)in_dr12 >> 0x20);
                    } else {
                        *(double *)(a0 + 0x2c0) = in_dr12;
                    }
                }
                goto switchD_8c04c74a_default;
            }
            iVar6 = rand_range(a0, 0, 3);
            uVar2 = 0;
            ar6_00 = (code *)0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, iVar6 + 0x1a, 0xffffffff, 0);
            pcVar9 = get_field_1c_026dd8;
            iVar6 = get_field_1c_026dd8(a0 + 0xb0, get_field_1c_026dd8, ar6_00);
            if (iVar6 == 0x20) {
                uVar2 = 0;
                ar6_00 = (code *)0xffffffff;
                pcVar9 = (code *)0x1a;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
            }
            CAnimBody_SetFrame(a0 + 0xb0, pcVar9, ar6_00, uVar2);
            pcVar9 = get_field_1c_026dd8;
            iVar6 = get_field_1c_026dd8(a0 + 0xb0, get_field_1c_026dd8, ar6_00);
            *(u32 *)(a0 + 0x218) = *(u32 *)(&g_8c13639c + (iVar6 + -0x1a) * 4 + (*(int *)(a0 + 0x128) + -3) * 0x28);
            if (cVar21 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = (u64)(u32)fVar18;
            }
            dVar15 = (double)CONCAT44(0x3f800000, fVar18);
            if (cVar21 == '\0') {
                *(u32 *)(a0 + 0x278) = 0x3f800000;
            } else {
                *(double *)(a0 + 0x278) = dVar15;
            }
            *(u32 *)(a0 + 0x2b8) = 3;
            pcVar10 = (code *)0x2c8;
            clear_3_words(a0 + 0x2c8, pcVar9, ar6_00, 0x2c8);
            break;
        case 3:
            iVar6 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, pcVar9, ar6_00, pcVar10);
            if (iVar6 == 1) {
                *(u32 *)(a0 + 0x2b8) = 2;
            }
            if (cVar21 == '\0') {
                *(u32 *)(a0 + 0x24) = 0;
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x24) = (u64)dVar15 & 0xffffffff;
                *(u64 *)(a0 + 0x28) = (u64)dVar15 & 0xffffffff;
            }
            dVar15 = (double)((u64)dVar15 & 0xffffffff);
            goto switchD_8c04c74a_default;
        case 4:
            iVar6 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0xb0, ar6_00, pcVar10);
            if (iVar6 == 1) {
                *(u32 *)(a0 + 0x2b8) = 3;
                *(u32 *)(a0 + 0x290) = 0;
            }
            goto switchD_8c04c74a_default;
        case 5:
            *(u32 *)(a0 + 0x330) = 1;
            pcVar9 = CAnimBody_GetCurFrame;
            CAnimBody_GetCurFrame(a0 + 0xb0, CAnimBody_GetCurFrame, ar6_00, pcVar10);
            if (cVar21 == '\0') {
                dVar1 = (double)CONCAT44(0x40e00000, (int)((u64)dVar15 >> 0x20));
            } else {
                dVar1 = 1.69813438463526e-311;
                dVar13 = dVar15;
            }
            dVar15 = dVar1;
            if ((cVar20 != '\0' || (float)((u64)dVar15 >> 0x20) <= SUB84(dVar15, 0)) && (*(int *)(a0 + 800) == 0)) {
                *(int *)(a0 + 800) = *(int *)(a0 + 800) + 1;
                pcVar10 = *(code **)(a0 + 0x244);
                pcVar9 = (code *)0xd;
                ar6_00 = a1;
                se_play_at_object(a0, 0xd, a1, pcVar10);
            }
            goto switchD_8c04c74a_caseD_1;
        case 6:
            iVar6 = game_sub_057e58(a0, pcVar9, ar6_00, pcVar10);
            if (iVar6 == 0) {
                *(u32 *)(a0 + 0x330) = 0;
                *(u32 *)(a0 + 0x2b8) = 0;
                *(u32 *)(a0 + 0x40) = 5;
            }
        default:
            goto switchD_8c04c74a_default;
        }
    } while (true);
switchD_8c04c74a_caseD_1:
    *(u32 *)(a0 + 0x330) = 1;
    CAnimBody_GetCurFrame(a0 + 0xb0, pcVar9, ar6_00, pcVar10);
    game_sub_034384(a0 + 0xb0, **(u32 **)(a0 + 0xb4), ar6_00, pcVar10);
    Vec3_assign(auStack_38, auStack_100, ar6_00, pcVar10);
    Vec3_dtor(auStack_100, 0xffffffff, ar6_00, pcVar10);
    dVar1 = dStack_30;
    if ((*(int *)(a0 + 0x128) == 3) && (*(int *)(a0 + 0x2b8) == 5)) {
        if (cVar21 == '\0') {
            dVar15 = (double)CONCAT44(0x41100000, dStack_30._0_4_);
        } else {
            dVar15 = 7.72945773970538e-312;
            dVar13 = dStack_30;
        }
        if (cVar20 == '\0') {
            fVar17 = (float)((u64)dVar15 >> 0x20);
            dVar15 = (double)CONCAT44(fVar17, SUB84(dVar15, 0) + fVar17);
        } else {
            dVar15 = dVar15 + dVar15;
        }
        dVar1 = dVar13;
        if (cVar21 == '\0') {
            dStack_30 = (double)CONCAT44(dStack_30._4_4_, SUB84(dVar15, 0));
            dVar1 = dStack_30;
        }
    }
    dStack_30 = dVar1;
    Vec3_sub(auStack_38, a0 + 0x2d4, ar6_00, pcVar10, auStack_110);
    Vec3_assign(auStack_48, auStack_110, ar6_00, pcVar10);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_110, 0xffffffff, ar6_00, pcVar10);
    Vec3_make(a0 + 0x14, uVar2, ar6_00, pcVar10, auStack_120);
    Vec3_ctor_xyz(auStack_130, uVar2, ar6_00, pcVar10);
    Vec3_cos_angle(auStack_120, auStack_130, ar6_00, pcVar10);
    Vec3_dtor(auStack_130, 0xffffffff, ar6_00, pcVar10);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_120, 0xffffffff, ar6_00, pcVar10);
    Vec3_ctor_xyz(auStack_140, uVar2, ar6_00, pcVar10);
    pcVar9 = (code *)Vec3_sub_023334(a0 + 0x14, auStack_140, ar6_00, pcVar10);
    uVar2 = 0xffffffff;
    ar6_00 = pcVar9;
    Vec3_dtor(auStack_140, 0xffffffff, pcVar9, pcVar10);
    if (pcVar9 == (code *)0x3) {
        Vec3_set_xyz(auStack_14c, uVar2, Vec3_set_xyz, pcVar10);
        pcVar10 = (code *)(a0 + 0x2a8);
        ar6_00 = Vec3_sub_023484;
        Vec3_sub_023484(pcVar10, auStack_14c, Vec3_sub_023484, pcVar10, auStack_15c);
        Vec3_assign(a0 + 0x2a8, auStack_15c, ar6_00, pcVar10);
        Vec3_dtor(auStack_15c, 0xffffffff, ar6_00, pcVar10);
        object_dtor_delete(auStack_14c, 0xffffffff, ar6_00, pcVar10);
    } else if (pcVar9 == (code *)0x4) {
        pcVar10 = (code *)&dStack_168;
        ar6_00 = Vec3_set_xyz;
        Vec3_set_xyz(pcVar10, uVar2, Vec3_set_xyz, pcVar10);
        Vec3_sub_023484(a0 + 0x2a8, &dStack_168, ar6_00, pcVar10, auStack_178);
        Vec3_assign(a0 + 0x2a8, auStack_178, ar6_00, pcVar10);
        Vec3_dtor(auStack_178, 0xffffffff, ar6_00, pcVar10);
        object_dtor_delete(&dStack_168, 0xffffffff, ar6_00, pcVar10);
    }
    puVar8 = auStack_38;
    Vec3_assign(a0 + 0x2d4, puVar8, ar6_00, pcVar10);
    Vec3_length_sq(auStack_48, puVar8, ar6_00, pcVar10);
    if (cVar21 == '\0') {
        dVar15 = (double)CONCAT44((int)((u64)dVar15 >> 0x20), *(u32 *)(a0 + 0x2c0));
    } else {
        dVar13 = *(double *)(a0 + 0x2c0);
    }
    if (cVar20 == '\0') {
        dVar15 = (double)(u64)(u32)(SUB84(dVar15, 0) * (float)((u64)dVar15 >> 0x20));
    } else {
        dVar15 = dVar15 * dVar15;
    }
    if (cVar21 == '\0') {
        *(int *)(a0 + 0x28) = SUB84(dVar15, 0);
    } else {
        *(double *)(a0 + 0x28) = dVar13;
    }
    iVar6 = *(int *)(a0 + 0x2b8);
    if (iVar6 == 1) {
        pcVar10 = (code *)(a0 + 0x2b0);
        dVar15 = (double)((u64)dVar15 & 0xffffffff);
        if (cVar21 == '\0') {
            *(u32 *)pcVar10 = 0;
        } else {
            *(double *)pcVar10 = dVar15;
        }
    } else {
        if (iVar6 == 5) {
            if (*(int *)(a0 + 0x290) != 1) {
                Vec3_set_xyz(auStack_184, puVar8, ar6_00, pcVar10);
                pcVar10 = (code *)(a0 + 0x14);
                game_sub_031eb0(a0, a1, auStack_80, pcVar10, auStack_194);
                ar6_00 = (code *)auStack_194;
                Vec3_assign(a0 + 0x14, ar6_00, ar6_00, pcVar10);
                Vec3_dtor(auStack_194, 0xffffffff, ar6_00, pcVar10);
                puVar8 = (u8 *)0xffffffff;
                object_dtor_delete(auStack_184, 0xffffffff, ar6_00, pcVar10);
            }
            iVar6 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, puVar8, ar6_00, pcVar10);
            if (iVar6 == 1) {
                *(u32 *)(a0 + 0x2b8) = 0;
            }
            goto switchD_8c04c74a_default;
        }
        if (iVar6 != 7)
            goto switchD_8c04c74a_default;
    }
    ar6_00 = (code *)0x290;
    pcVar9 = *(code **)(a0 + 0x290);
    if ((double *)pcVar9 == (double *)0x1) {
        iVar6 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 1, 0x290, pcVar10);
        if (iVar6 == 1) {
            *(u32 *)(a0 + 0x2b8) = 0;
            pcVar10 = NULL;
            ar6_00 = (code *)0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
            pcVar9 = CAnimBody_SetFrame;
            CAnimBody_SetFrame(a0 + 0xb0, CAnimBody_SetFrame, ar6_00, pcVar10);
        }
    } else if (*(int *)(a0 + 0x2b8) == 1) {
        iVar6 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, pcVar9, 0x290, pcVar10);
        if (iVar6 == 1) {
            *(u32 *)(a0 + 0x2b8) = 2;
            vec3_clear(a0 + 0x2d4, a0 + 0x2d4, ar6_00, pcVar10);
            pcVar10 = NULL;
            ar6_00 = (code *)0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
            pcVar9 = (code *)(a0 + 0xb0);
            CAnimBody_SetFrame(pcVar9, pcVar9, ar6_00, pcVar10);
        }
    } else {
        iVar6 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, pcVar9, 0x290, pcVar10);
        if (iVar6 == 7) {
            pcVar10 = (code *)0x1;
            *(u32 *)(a0 + 0x2b8) = 1;
            pcVar9 = (code *)(a0 + 0x2dc);
            if (cVar21 == '\0') {
                *(int *)pcVar9 = (int)((u64)in_dr12 >> 0x20);
            } else {
                *(double *)pcVar9 = in_dr12;
            }
        }
    }
    if (*(int *)(a0 + 0x290) != 1) {
        Vec3_set_xyz(auStack_1a0, pcVar9, ar6_00, pcVar10);
        pcVar10 = (code *)(a0 + 0x14);
        ar6_00 = (code *)auStack_80;
        game_sub_031eb0(a0, a1, ar6_00, pcVar10, auStack_1b0);
        Vec3_assign(a0 + 0x14, auStack_1b0, ar6_00, pcVar10);
        Vec3_dtor(auStack_1b0, 0xffffffff, ar6_00, pcVar10);
        object_dtor_delete(auStack_1a0, 0xffffffff, ar6_00, pcVar10);
    }
switchD_8c04c74a_default:
    uVar12 = SUB84(dVar15, 0);
    if (*(int *)(a0 + 0x290) == 1) {
        if (*(int *)(a0 + 0x2b8) == 0) {
            *(u32 *)(a0 + 0x330) = 0;
            *(u32 *)(a0 + 0x290) = 0;
            if (cVar21 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = (u64)dVar15 & 0xffffffff;
            }
            uVar11 = 0;
            *(u32 *)(a0 + 0x2b8) = 2;
            *(u32 *)(a0 + 0x40) = 0;
            Vec3_assign_f(a0 + 0x2d4, a0 + 0x2d4, ar6_00, pcVar10);
            *(u32 *)(a0 + 800) = 0;
        } else {
            pcVar10 = *(code **)(a0 + 0x2b8);
            if ((double *)pcVar10 == (double *)0x1) {
                uVar2 = 0x278;
                iVar6 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0x278, ar6_00, 1);
                if (iVar6 == 1) {
                    *(u32 *)(a0 + 0x330) = 0;
                    Vec3_assign_f(a0 + 0x2d4, uVar2, ar6_00, pcVar10);
                    Vec3_assign_f(a0 + 0x2a8, Vec3_assign_f, ar6_00, pcVar10);
                    *(u32 *)(a0 + 0x2b8) = 2;
                    *(u32 *)(a0 + 0x290) = 0;
                    if (cVar21 == '\0') {
                        *(u32 *)(a0 + 0x28) = 0;
                    } else {
                        *(u64 *)(a0 + 0x28) = (u64)uVar12;
                    }
                    uVar11 = 0;
                    *(u32 *)(a0 + 0x40) = 0;
                }
            }
        }
    } else if (*(int *)(a0 + 0x2b8) == 0) {
        *(u32 *)(a0 + 0x2b8) = 2;
    }
switchD_8c04c5a8_caseD_2:
    Vec3_assign(a0 + 0x80, a0 + 0x14, ar6_00, pcVar10);
    Vec3_dtor(auStack_80, 0xffffffff, ar6_00, pcVar10);
    object_dtor_delete(auStack_70, 0xffffffff, ar6_00, pcVar10);
    object_dtor_delete(auStack_64, 0xffffffff, ar6_00, pcVar10);
    Vec3_dtor(auStack_58, 0xffffffff, ar6_00, pcVar10);
    Vec3_dtor(auStack_48, 0xffffffff, ar6_00, pcVar10);
    Vec3_dtor(auStack_38, 0xffffffff, ar6_00, pcVar10);
    return uVar11;
}

/*
 * game_sub_04d62c  0x8c04d62c
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4, game_sub_03c94c
 */
u32 game_sub_04d62c(int a0, int a1, int *a2, u32 a3) {
    int iVar1;
    int ar5_00;
    u32 uVar2;
    int *ar6_00;
    u32 uVar3;
    float fVar4;
    u32 uVar5;
    float fVar6;
    double in_dr0;
    u32 uVar10;
    double dVar7;
    double dVar8;
    u64 uVar9;
    u32 in_fr3;
    u32 in_fr5;
    u64 in_dr14;
    bool bVar11;
    char cVar12;
    char cVar13;
    u32 uStack_3c;
    u32 uStack_38;

    cVar13 = '\0';
    cVar12 = '\0';
    uVar3 = 1;
    dVar8 = (double)(in_dr14 & 0xffffffff00000000);
    if (2 < *(int *)(a0 + 0x128)) {
        in_dr0 = (double)CONCAT44(0x3ecccccd, SUB84(in_dr0, 0));
        dVar8 = (double)CONCAT44((int)(in_dr14 >> 0x20), *(float *)(a0 + 0x48) * 0.4);
    }
    iVar1 = *(int *)(a0 + 300);
    if ((iVar1 < 7) && (-1 < iVar1)) {
        ar5_00 = a1;
        ar6_00 = a2;
        switch (iVar1) {
        case 0:
            iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
            if (iVar1 == 1) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(u64 *)(a0 + 0x2c) = (u64)in_dr0 & 0xffffffff;
                }
                *(u32 *)(a0 + 0x2e8) = 1;
                Vec3_assign_f(a0 + 0x2d4, a1, a2, a3);
                Vec3_assign_f(a0 + 0x2a8, a1, a2, a3);
            }
            break;
        case 1:
            a3 = 0;
            ar6_00 = (int *)0xffffffff;
            ar5_00 = 9;
            CAnimBody_SetAnimation(a0 + 0xb0, 9, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, ar5_00, ar6_00, a3);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            if (cVar13 == '\0') {
                in_fr5 = 0x3f99999a;
            } else {
                in_fr5 = 0x3f4ccccd;
            }
            rand_float(a0, ar5_00, ar6_00);
            if (cVar13 == '\0') {
                *(int *)(a0 + 0x278) = (int)((u64)in_dr0 >> 0x20);
            } else {
                *(double *)(a0 + 0x278) = in_dr0;
            }
        case 2:
            uVar2 = SUB84(in_dr0, 0);
            if (cVar13 != '\0') {
                in_fr5 = (u32) * (u64 *)(a0 + 0x94);
            }
            timer_start_94(a0, ar5_00, ar6_00);
            if (cVar13 == '\0') {
                fVar6 = -0.005;
                *(u32 *)(a0 + 0xa0) = 0xbba3d70a;
            } else {
                uVar2 = 0xbba3d70a;
                fVar6 = 5.43704e-43;
                *(u64 *)(a0 + 0xa0) = 0x184bba3d70a;
            }
            (**(code **)(*a2 + 0x184))(a2, ar5_00, ar6_00, a3);
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x48));
                uVar2 = in_fr3;
            } else {
                dVar7 = -8.332610302023455e-251;
            }
            if (cVar12 == '\0') {
                fVar4 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
                dVar8 = (double)CONCAT44((fVar6 - fVar4) - SUB84(dVar8, 0), uVar2);
            } else {
                fVar4 = SUB84(dVar7 * dVar7, 0);
                dVar8 = ((double)CONCAT44(fVar6, uVar2) - dVar7 * dVar7) - dVar8;
            }
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a1 + 4), fVar4);
            } else {
                dVar7 = *(double *)(a1 + 4);
            }
            if (cVar12 == '\0') {
                bVar11 = (float)((u64)dVar8 >> 0x20) < (float)((u64)dVar7 >> 0x20);
            } else {
                bVar11 = dVar8 < dVar7;
            }
            if (bVar11) {
                timer_stop_94(a0, ar5_00, ar6_00, a3);
                dVar7 = (double)((u64)dVar7 & 0xffffffff);
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0xa0) = 0;
                } else {
                    *(double *)(a0 + 0xa0) = dVar7;
                }
                vec3_clear(a0 + 0x90, ar5_00, ar6_00, a3);
            }
            uVar5 = SUB84(dVar7, 0);
            if (cVar13 != '\0') {
                in_fr5 = 0x42c80000;
            }
            game_sub_05ae54(a0, ar5_00, ar6_00, a3);
            if (cVar13 != '\0') {
                in_fr5 = (u32) * (u64 *)(a0 + 0x278);
            }
            iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, ar5_00, ar6_00, a3);
            if (iVar1 == 1) {
                uVar2 = 9;
                iVar1 = get_motion_data(a0 + 0xb0, 9, ar6_00, a3);
                if (cVar12 == '\0') {
                    dVar8 = (double)CONCAT44((float)iVar1, in_fr5);
                } else {
                    dVar8 = (double)iVar1;
                }
                if (cVar12 == '\0') {
                    bVar11 = (float)((u64)dVar8 >> 0x20) < 0.0;
                } else {
                    bVar11 = dVar8 < (double)(u64)uVar5;
                }
                if ((bVar11) && (cVar13 != '\0')) {
                    uVar5 = 0x4f800000;
                }
                uVar10 = 0x3f800000;
                CAnimBody_SetFrame(a0 + 0xb0, uVar2, ar6_00, a3);
                timer_start_94(a0, uVar2, ar6_00);
                rand_float(a0, uVar2, ar6_00);
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0xa0) = uVar10;
                } else {
                    *(u64 *)(a0 + 0xa0) = CONCAT44(uVar10, uVar5);
                }
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            break;
        case 3:
            iVar1 = a1;
            (**(code **)(*a2 + 0x184))(a2, a1, a2, a3);
            if (cVar13 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr3);
                dVar7 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x48));
            } else {
                dVar7 = 1.53683721570537e-311;
            }
            if (cVar12 == '\0') {
                fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
                dVar8 = (double)CONCAT44(((float)((u64)in_dr0 >> 0x20) - fVar6) - SUB84(dVar8, 0), SUB84(in_dr0, 0));
            } else {
                fVar6 = SUB84(dVar7 * dVar7, 0);
                dVar8 = (in_dr0 - dVar7 * dVar7) - dVar8;
            }
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a1 + 4), fVar6);
            } else {
                dVar7 = *(double *)(a1 + 4);
            }
            if (cVar12 == '\0') {
                bVar11 = (float)((u64)dVar8 >> 0x20) < (float)((u64)dVar7 >> 0x20);
            } else {
                bVar11 = dVar8 < dVar7;
            }
            if (bVar11) {
                Vec3_assign_f(a0 + 0x2d4, iVar1, a2, a3);
                uVar5 = SUB84(dVar7, 0);
                Vec3_assign_f(a0 + 0x2a8, iVar1, a2, a3);
                Vec3_assign_f(a0 + 0x90, iVar1, a2, a3);
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0xa0) = 0;
                } else {
                    *(u64 *)(a0 + 0xa0) = (u64)uVar5;
                }
                iVar1 = a0 + 0x14;
                Vec3_assign(a0 + 0x80, iVar1, a2, a3);
                timer_stop_94(a0, iVar1, a2, a3);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 0x280) = 0x1518;
            }
            break;
        case 4:
            timer_stop_94(a0, a1, a2, a3);
            iVar1 = *(int *)(a0 + 0x280);
            *(int *)(a0 + 0x280) = iVar1 + -1;
            if (iVar1 < 1) {
                uVar9 = (u64)in_dr0 & 0xffffffff;
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = uVar9;
                }
                timer_start_94(a0, a1, a2);
                rand_float(a0, a1, a2);
                if (cVar13 == '\0') {
                    *(int *)(a0 + 0xa0) = (int)(uVar9 >> 0x20);
                } else {
                    *(u64 *)(a0 + 0xa0) = uVar9;
                }
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                Class_12b2ac_sub_031700(a0, a1, a2, a3);
                *(u32 *)(a0 + 0x280) = 0;
            }
            break;
        case 5:
            iVar1 = a1;
            (**(code **)(*a2 + 0x128))(a2, a1, a2, a3);
            uVar2 = (u32)((u64)in_dr0 >> 0x20);
            if (cVar13 == '\0') {
                dVar8 = (double)CONCAT44(0x3da3d70a, *(u32 *)(a0 + 0x48));
                uStack_3c = uVar2;
            } else {
                uStack_3c = SUB84(in_dr0, 0);
                dVar8 = -8.332610297860959e-251;
                uStack_38 = uVar2;
            }
            if (cVar12 == '\0') {
                fVar6 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
            } else {
                fVar6 = SUB84(dVar8 * dVar8, 0);
            }
            if (cVar13 == '\0') {
                dVar8 = (double)CONCAT44(uStack_3c, fVar6);
            } else {
                dVar8 = (double)CONCAT44(uStack_38, uStack_3c);
            }
            if (cVar12 == '\0') {
                fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
            } else {
                fVar6 = SUB84(dVar8 + dVar8, 0);
            }
            if (cVar13 == '\0') {
                uVar9 = CONCAT44(*(u32 *)(a1 + 4), fVar6);
            } else {
                uVar9 = *(u64 *)(a1 + 4);
            }
            if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
                uVar9 = uVar9 & 0xffffffff;
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0x70) = 0;
                } else {
                    *(u64 *)(a0 + 0x70) = uVar9;
                }
                timer_stop_94(a0, iVar1, a2, a3);
                uVar5 = (u32)uVar9;
                copy6_to_fields(a0, *(int *)(a0 + 0x128) * 0x18 + 0x8c2803f4, a2, a3);
                *(u32 *)(a0 + 0x280) = 0;
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0xa0) = 0;
                } else {
                    *(u64 *)(a0 + 0xa0) = (u64)uVar5;
                }
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 0x2e8) = 0;
            }
            break;
        case 6:
            *(u32 *)(a0 + 0x70) = 0;
            uVar3 = 0;
        }
    }
    return uVar3;
}

/*
 * game_sub_04db38  0x8c04db38
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4
 */
u32 game_sub_04db38(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 in_fr1;
    char cVar2;
    u8 auStack_28[16];
    u8 auStack_18[16];

    cVar2 = '\0';
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        vec3_clear(a0 + 0x2a8, a1, a2, a3);
        vec3_clear(a0 + 0x6c, a1, a2, a3);
        vec3_clear(a0 + 0x90, a1, a2, a3);
        if (cVar2 == '\0') {
            *(u32 *)(a0 + 0xa0) = 0;
        } else {
            *(u64 *)(a0 + 0xa0) = (u64)in_fr1;
        }
        if (*(int *)(a0 + 0x128) == 4) {
            Vec3_set_xyz(auStack_18, a1, a2, a3);
            Vec3_sub_023484(a0 + 0x14, auStack_18, a2, a3, auStack_28);
            Vec3_assign(a0 + 0x14, auStack_28, a2, a3);
            Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
            a1 = 0xffffffff;
            object_dtor_delete(auStack_18, 0xffffffff, a2, a3);
        }
        Vec3_length(a0 + 0x14, a1, a2, a3);
        Vec3_assign(a0 + 0x80, a0 + 0x14, a2, a3);
        a3 = 0;
        a2 = 0xffffffff;
        a1 = 0x49;
        CAnimBody_SetAnimation(a0 + 0xb0, 0x49, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, a1, a2, a3);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else if (iVar1 != 1) {
        if (iVar1 == 2) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            *(u32 *)(a0 + 0x280) = 0;
            return 0;
        }
        if (iVar1 != 3) {
            return 1;
        }
        return 0;
    }
    iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a1, a2, a3);
    if (iVar1 == 1) {
        ar5_00 = get_field_1c_026dd8(a0 + 0xb0, a1, a2);
        get_motion_data(a0 + 0xb0, ar5_00, a2, a3);
        CAnimBody_SetFrame(a0 + 0xb0, ar5_00, a2, a3);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        *(u32 *)(a0 + 0x280) = 0;
    }
    return 1;
}

/*
 * game_sub_04dd34  0x8c04dd34
 * area name: game code; nothing names its area yet
 * called by: game_sub_0507c0
 */
u32 game_sub_04dd34(int a0, u64 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    float fVar2;
    u64 in_dr0;
    double dVar3;
    double in_dr14;
    u64 in_xd14;
    char cVar4;
    char cVar5;
    u32 uStack_28;
    u32 uStack_24;
    u32 auStack_20[5];

    cVar5 = '\0';
    cVar4 = '\0';
    Vec3_make(a0 + 0x80, a1, a2, a3, auStack_20);
    Vec3_cos_angle(a0 + 0x80, auStack_20, a2, a3);
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar5 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), uVar1);
        uStack_24 = uVar1;
    } else {
        uStack_24 = (u32)in_dr0;
        in_xd14 = in_dr0;
        auStack_20[0] = uVar1;
    }
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_20, 0xffffffff, a2, a3);
    fVar2 = (float)in_dr0;
    if (cVar5 == '\0') {
        fVar2 = *(float *)(a0 + 0x84);
    }
    dVar3 = (double)(u64)(u32)fVar2;
    if (cVar4 == '\0' && 0.0 < fVar2) {
        if (cVar5 == '\0') {
            dVar3 = (double)CONCAT44(0xbf800000, fVar2);
        } else {
            dVar3 = -7.94252464057912e-251;
        }
        if (cVar4 == '\0') {
            in_dr14 = (double)(u64)(u32)(SUB84(in_dr14, 0) * (float)((u64)dVar3 >> 0x20));
        } else {
            in_dr14 = in_dr14 * dVar3;
        }
    }
    if (cVar5 == '\0') {
        *(int *)a1 = SUB84(in_dr14, 0);
    } else {
        *a1 = in_xd14;
    }
    Vec3_sub_02327c(a0 + 0x80, uVar1, a2, a3);
    uVar1 = (u32)((u64)dVar3 >> 0x20);
    uStack_28 = uVar1;
    if (cVar5 != '\0') {
        uStack_28 = SUB84(dVar3, 0);
        uStack_24 = uVar1;
    }
    if (cVar5 == '\0') {
        *(u32 *)((int)a1 + 4) = uStack_28;
    } else {
        *(u64 *)((int)a1 + 4) = CONCAT44(uStack_24, uStack_28);
    }
    return 0;
}

/*
 * game_sub_04ddd4  0x8c04ddd4
 * area name: game code; nothing names its area yet
 * called by: game_sub_03c94c
 */
u32 game_sub_04ddd4(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u64 in_dr0;
    double dVar5;
    float fVar6;
    double in_dr14;
    u64 in_xd14;
    bool bVar7;
    char cVar8;
    char cVar9;
    u32 in_stack_00000000;
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar4 = 1;
    uVar3 = a3;
    Vec3_sub(a2, a1, a2, a3, auStack_3c);
    Vec3_ctor_copy(auStack_2c, auStack_3c, a2, uVar3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_3c, 0xffffffff, a2, uVar3);
    iVar1 = get_field_6c_028cc4(a3, uVar2);
    if (iVar1 == 0) {
        Vec3_dtor(auStack_2c, 0xffffffff, a2, uVar3);
        return 2;
    }
    *(u8 *)(a0 + 0x1fc) = *(u8 *)(a0 + 0x1fc) & 0xfb;
    Vec3_length_sq(auStack_2c, uVar2, a2, uVar3);
    if (cVar9 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)in_dr0 >> 0x20));
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x28), (int)in_dr0);
        in_dr0 = in_xd14;
    } else {
        dVar5 = *(double *)(a0 + 0x28);
    }
    fVar6 = SUB84(in_dr14, 0);
    if (cVar8 == '\0') {
        bVar7 = fVar6 < (float)((u64)dVar5 >> 0x20);
    } else {
        bVar7 = in_dr14 < dVar5;
    }
    if (bVar7) {
        if (cVar9 == '\0') {
            *(float *)(a0 + 0x28) = fVar6;
        } else {
            *(u64 *)(a0 + 0x28) = in_dr0;
        }
    } else {
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar5, 0));
        } else {
            dVar5 = *(double *)(a0 + 0x34);
        }
        if (cVar8 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), fVar6 / (float)((u64)dVar5 >> 0x20));
        } else {
            in_dr14 = in_dr14 / dVar5;
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(dVar5, 0));
        } else {
            dVar5 = *(double *)(a0 + 0x28);
        }
        if (cVar8 == '\0') {
            fVar6 = SUB84(in_dr14, 0) + (float)((u64)dVar5 >> 0x20);
        } else {
            fVar6 = SUB84(in_dr14 + dVar5, 0);
        }
        if (cVar9 == '\0') {
            *(float *)(a0 + 0x28) = fVar6;
        } else {
            *(u64 *)(a0 + 0x28) = in_dr0;
        }
    }
    timer_stop_94(a0, uVar2, a2, uVar3);
    Class_12b2ac_sub_031700(a0, uVar2, a2, uVar3);
    uVar2 = Vec3_length(auStack_2c, uVar2, a2, uVar3);
    Vec3_assign(a0 + 0x14, uVar2, a2, uVar3);
    (**(code **)(*(int *)(iVar1 + 8) + 0x140))(iVar1, uVar2, a2, uVar3);
    Vec3_assign(a0 + 0x80, auStack_4c, a2, uVar3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_4c, 0xffffffff, a2, uVar3);
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        *(u32 *)(a0 + 0x178) = 1;
        uVar3 = 0;
        a2 = 0xffffffff;
        uVar2 = 0x12;
        CAnimBody_SetAnimation(a0 + 0xb0, 0x12, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar2, a2, uVar3);
        *(u32 *)(a0 + 0x280) = 0;
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else if (iVar1 != 1) {
        if ((iVar1 == 2) && (iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, a2, uVar3), iVar1 == 1)) {
            *(u32 *)(a0 + 0x2b8) = 2;
            *(u32 *)(a0 + 300) = 0;
            flags6_set_all(a0 + 0x1fc, uVar2, a2);
            uVar4 = 0;
            iVar1 = a0 + 0x80;
            Vec3_assign(a0 + 0x14, iVar1, a2, uVar3);
            *(u32 *)(a0 + 0x178) = 0;
            timer_start_94(a0, iVar1, a2);
        }
        goto LAB_8c04e01e;
    }
    iVar1 = CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, uVar2, a2, uVar3);
    if (iVar1 == 7) {
        iVar1 = *(int *)(a0 + 0x280);
        *(int *)(a0 + 0x280) = iVar1 + 1;
        if (4 < iVar1 + 1) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        }
    } else {
        CAnimBody_GetCurFrame(a0 + 0xb0, uVar2, a2, uVar3);
        if (cVar8 == '\0') {
            iVar1 = (int)(float)((u64)dVar5 >> 0x20);
        } else {
            iVar1 = (int)dVar5;
        }
        if (iVar1 == 0x4c) {
            uVar3 = 5;
            se_play_at_object(a0, 5, a1, in_stack_00000000);
            set_field_8c_to_1(a3, uVar3, a1, in_stack_00000000);
            a2 = a1;
            uVar3 = in_stack_00000000;
        }
    }
LAB_8c04e01e:
    Vec3_dtor(auStack_2c, 0xffffffff, a2, uVar3);
    return uVar4;
}

/*
 * Vec3_ctor_xyz_wrap_04e0bc  0x8c04e0bc
 * only calls Vec3_ctor_xyz
 */
u32 Vec3_ctor_xyz_wrap_04e0bc(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_xyz(s0, a1, a2, a3);
    return uVar1;
}

/*
 * Vec3_sub_04e0e0  0x8c04e0e0
 * area name: sits between Vec3 functions (same compilation unit)
 * called by: Vec3_sub_03f4a4, game_sub_04f034, game_sub_0564c4, game_sub_058d60, game_sub_059fc4
 */
u32 Vec3_sub_04e0e0(int a0, u32 a1, u8 *a2, int a3) {
    int iVar1;
    u32 uVar2;
    u8 *ar6_00;
    int ar7_00;
    u32 uVar3;
    u32 uVar4;
    u64 in_dr0;
    double dVar5;
    float in_fr15;
    u32 in_fr14;
    bool bVar6;
    char cVar7;
    char cVar8;
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[20];

    cVar8 = '\0';
    cVar7 = '\0';
    uVar3 = 1;
    uVar2 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_28, a1, a2);
    iVar1 = *(int *)(a0 + 0x298);
    if (iVar1 == 0) {
        *(u32 *)(a0 + 0x40) = 5;
        *(int *)(a0 + 0x298) = *(int *)(a0 + 0x298) + 1;
    } else if (iVar1 == 1) {
        iVar1 = game_sub_04c314(a0, a1, a2);
        ar6_00 = a2;
        if (iVar1 == 0) {
            *(u32 *)(a0 + 0x40) = 5;
            *(int *)(a0 + 0x298) = *(int *)(a0 + 0x298) + 1;
        }
    } else if (iVar1 == 2) {
        Vec3_make(a0 + 0x14, uVar2, ar6_00, ar7_00, auStack_38);
        Vec3_make(a3, uVar2, ar6_00, ar7_00, auStack_48);
        Vec3_cos_angle(auStack_38, auStack_48, ar6_00, ar7_00);
        if (cVar8 == '\0') {
            in_fr15 = (float)((u64)in_dr0 >> 0x20);
        }
        Vec3_dtor(auStack_48, 0xffffffff, ar6_00, ar7_00);
        uVar4 = (u32)in_dr0;
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_38, 0xffffffff, ar6_00, ar7_00);
        if (cVar8 == '\0') {
            dVar5 = (double)CONCAT44(0x40400000, uVar4);
        } else {
            dVar5 = -7.937140056776321e-251;
        }
        if (cVar7 == '\0') {
            bVar6 = (float)((u64)dVar5 >> 0x20) < in_fr15;
        } else {
            bVar6 = dVar5 < (double)CONCAT44(in_fr14, in_fr15);
        }
        if (bVar6) {
            Vec3_length(a3, uVar2, ar6_00, ar7_00);
            if (cVar8 == '\0') {
                *(u32 *)(a3 + 4) = 0;
            } else {
                *(u64 *)(a3 + 4) = (u64)dVar5 & 0xffffffff;
            }
            Vec3_scale(a3, &g_8c13658c, ar6_00, ar7_00, auStack_58);
            Vec3_add(a1, auStack_58, ar6_00, ar7_00, auStack_68);
            ar6_00 = auStack_68;
            game_sub_057b6c(a0, a1, ar6_00, ar7_00);
            Vec3_dtor(auStack_68, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_58, 0xffffffff, ar6_00, ar7_00);
            *(int *)(a0 + 0x298) = *(int *)(a0 + 0x298) + 1;
        } else {
            uVar3 = 0;
            *(u32 *)(a0 + 0x298) = 0;
        }
    } else if ((iVar1 == 3) && (iVar1 = game_sub_057e58(a0, uVar2, ar6_00, ar7_00), iVar1 == 0)) {
        *(u32 *)(a0 + 0x298) = 2;
    }
    Vec3_dtor(auStack_28, 0xffffffff, ar6_00, ar7_00);
    return uVar3;
}

/*
 * game_sub_04e2d0  0x8c04e2d0
 * area name: game code; nothing names its area yet
 * called by: game_sub_053730, game_sub_055c38
 */
u32 game_sub_04e2d0(int a0, u32 a1, u8 *a2, int a3) {
    int iVar1;
    u32 uVar2;
    u8 *puVar3;
    u8 *ar6_00;
    int ar7_00;
    u32 uVar4;
    float fVar5;
    u64 in_dr0;
    float fVar7;
    double dVar6;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    u32 in_stack_ffffff00;
    u32 auStack_a4[4];
    u8 auStack_94[12];
    u8 auStack_88[16];
    u8 auStack_78[16];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar4 = 1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_28, a1, a2);
    iVar1 = *(int *)(a0 + 0x298);
    if (iVar1 == 0) {
        uVar2 = a1;
        ar6_00 = a2;
        iVar1 = game_sub_04b168(a0, a1, a2, ar7_00);
        if (iVar1 == 0) {
            *(int *)(a0 + 0x298) = *(int *)(a0 + 0x298) + 1;
            *(u32 *)(a0 + 0x40) = 5;
            timer_stop_94(a0, uVar2, ar6_00, ar7_00);
        }
    } else if (iVar1 == 1) {
        iVar1 = a3;
        uVar2 = Vec3_sub_023334(a0 + 0x14, a3, ar6_00, ar7_00);
        *(u32 *)(a0 + 0x27c) = uVar2;
        Vec3_make(a0 + 0x14, iVar1, ar6_00, ar7_00, auStack_38);
        Vec3_make(a3, iVar1, ar6_00, ar7_00, auStack_48);
        Vec3_cos_angle(auStack_38, auStack_48, ar6_00, ar7_00);
        if (cVar9 == '\0') {
            *(int *)(a0 + 0x224) = (int)((u64)in_dr0 >> 0x20);
        } else {
            *(u64 *)(a0 + 0x224) = in_dr0;
        }
        Vec3_dtor(auStack_48, 0xffffffff, ar6_00, ar7_00);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_38, 0xffffffff, ar6_00, ar7_00);
        Vec3_sub_0231c8(a3, uVar2, ar6_00, ar7_00);
        iVar1 = a0 + 0x14;
        Vec3_sub_0231c8(iVar1, uVar2, ar6_00, ar7_00);
        float_check_errno(iVar1, uVar2, ar6_00, ar7_00, in_stack_ffffff00);
        fVar5 = (float)in_dr0;
        if (cVar9 == '\0') {
            *(int *)(a0 + 0x228) = (int)((u64)in_dr0 >> 0x20);
        } else {
            *(u64 *)(a0 + 0x228) = in_dr0;
        }
        *(u32 *)(a0 + 0x40) = 1;
        if (cVar9 == '\0') {
            fVar5 = *(float *)(a0 + 0x224);
        }
        if (cVar8 == '\0' && 1.0 < fVar5) {
            uVar2 = Vec3_sub_023334(a0 + 0x14, a3, ar6_00, ar7_00);
            *(u32 *)(a0 + 0x27c) = uVar2;
            if (*(int *)(a0 + 0x27c) == 3) {
                ar7_00 = 0;
                ar6_00 = (u8 *)0xffffffff;
                uVar2 = 7;
                iVar1 = CAnimBody_SetAnimation(a0 + 0xb0, 7, 0xffffffff, 0);
                if (iVar1 != 6) {
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, ar6_00, ar7_00);
                }
            } else {
                ar7_00 = 0;
                ar6_00 = (u8 *)0xffffffff;
                uVar2 = 8;
                iVar1 = CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
                if (iVar1 != 6) {
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, ar6_00, ar7_00);
                }
            }
            if (cVar9 == '\0') {
                fVar5 = *(float *)(a0 + 0x224);
                fVar7 = 45.0;
            } else {
                fVar5 = 45.0;
                fVar7 = 9.30462e-43;
            }
            if (cVar8 == '\0' && fVar7 < fVar5) {
                if (cVar9 == '\0') {
                    *(u32 *)(a0 + 0x224) = 0x42340000;
                } else {
                    *(u64 *)(a0 + 0x224) = 0x29842340000;
                }
            }
            *(int *)(a0 + 0x298) = *(int *)(a0 + 0x298) + 1;
        } else {
            *(u32 *)(a0 + 0x280) = 0;
            *(u32 *)(a0 + 0x298) = 0;
            uVar4 = 0;
        }
    } else if (iVar1 == 2) {
        Vec3_sub(a2, a1, ar6_00, ar7_00, auStack_58);
        Vec3_scale(auStack_58, &g_8c136590, ar6_00, ar7_00, auStack_68);
        Vec3_assign(auStack_28, auStack_68, ar6_00, ar7_00);
        Vec3_dtor(auStack_68, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(auStack_58, 0xffffffff, ar6_00, ar7_00);
        puVar3 = auStack_28;
        Vec3_assign(a0 + 0x2a8, puVar3, ar6_00, ar7_00);
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x28));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x28);
            dVar6 = 1.34162686540996e-311;
        }
        if (cVar8 == '\0') {
            fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 * dVar6, 0);
        }
        if (cVar9 == '\0') {
            *(float *)(a0 + 0x28) = fVar5;
            uVar2 = 0x3f333333;
            *(u32 *)(a0 + 0x278) = 0x3f333333;
        } else {
            *(u64 *)(a0 + 0x28) = in_xd0;
            uVar2 = 0xb0;
            *(u64 *)(a0 + 0x278) = 0xb03f333333;
        }
        CAnimBody_GetCurFrame(a0 + 0xb0, puVar3, ar6_00, ar7_00);
        if (cVar9 == '\0') {
            uVar2 = auStack_a4[0];
        }
        auStack_a4[0] = uVar2;
        Vec3_make(a3, puVar3, ar6_00, ar7_00, auStack_78);
        puVar3 = auStack_78;
        Vec3_add(a1, puVar3, ar6_00, ar7_00, auStack_88);
        uVar2 = get_field_1c_026dd8(a0 + 0xb0, puVar3, ar6_00);
        get_motion_data(a0 + 0xb0, uVar2, ar6_00, ar7_00);
        uVar2 = get_field_1c_026dd8(a0 + 0xb0, uVar2, ar6_00);
        get_motion_data(a0 + 0xb0, uVar2, ar6_00, ar7_00);
        Vec3_set_xyz(auStack_94, uVar2, ar6_00, ar7_00);
        ar7_00 = a0 + 0x14;
        ar6_00 = auStack_88;
        game_sub_031eb0(a0, a1, ar6_00, ar7_00, auStack_a4);
        Vec3_assign(a0 + 0x14, auStack_a4, ar6_00, ar7_00);
        Vec3_dtor(auStack_a4, 0xffffffff, ar6_00, ar7_00);
        object_dtor_delete(auStack_94, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(auStack_88, 0xffffffff, ar6_00, ar7_00);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_78, 0xffffffff, ar6_00, ar7_00);
        iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar2, ar6_00, ar7_00);
        if (iVar1 == 1) {
            *(int *)(a0 + 0x298) = *(int *)(a0 + 0x298) + -1;
        }
    }
    Vec3_distance_sq(a1, a2, ar6_00, ar7_00);
    Vec3_dtor(auStack_28, 0xffffffff, ar6_00, ar7_00);
    return uVar4;
}

/*
 * game_sub_04e7e0  0x8c04e7e0
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4, game_sub_03c94c
 */
u32 game_sub_04e7e0(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 in_fr1;
    u32 uVar5;
    double dVar6;
    double dVar7;
    double in_xd0;
    char cVar8;
    char cVar9;
    int *in_stack_00000000;
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar4 = 1;
    dVar7 = (double)CONCAT44(0x41200000, in_fr1);
    iVar1 = a1;
    Vec3_ctor_zero(auStack_24, a1, a2);
    do {
        iVar2 = *(int *)(a0 + 300);
        if ((0xc < iVar2) || (iVar2 < 0))
            goto switchD_8c04e828_caseD_4;
        switch (iVar2) {
        case 0:
            (**(code **)(*in_stack_00000000 + 0x178))(in_stack_00000000, iVar1, a2, a3);
            if (cVar9 == '\0') {
                dVar6 = (double)CONCAT44(0x41a00000, (int)((u64)dVar7 >> 0x20));
            } else {
                dVar6 = -0.007812501909938874;
                in_xd0 = dVar7;
            }
            dVar7 = dVar6;
            if (cVar8 != '\0' || (float)((u64)dVar6 >> 0x20) <= SUB84(dVar6, 0)) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            } else {
                *(u32 *)(a0 + 300) = 10;
            }
            break;
        case 1:
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 2:
            a3 = 0;
            a2 = -1;
            uVar3 = 0x10;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x10, 0xffffffff, 0);
            uVar5 = SUB84(dVar7, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar3, a2, a3);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            if (cVar9 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0;
            } else {
                *(u64 *)(a0 + 0x2c) = (u64)uVar5;
            }
            *(u32 *)(a0 + 0x2b8) = 3;
            goto switchD_8c04e828_caseD_4;
        case 3:
            Vec3_make(a0 + 0x14, iVar1, a2, a3, auStack_34);
            Vec3_normalize(auStack_34, iVar1, a2, a3);
            Vec3_scale(auStack_44, &g_8c136594, a2, a3, auStack_54);
            timer_sub_031c74(a0, auStack_54, a1, a3);
            Vec3_dtor(auStack_54, 0xffffffff, a1, a3);
            Vec3_dtor(auStack_44, 0xffffffff, a1, a3);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_34, 0xffffffff, a1, a3);
            game_sub_05ae54(a0, uVar3, a1, a3);
            iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar3, a1, a3);
            a2 = a1;
            if (iVar1 == 1) {
                uVar4 = 0;
                *(u32 *)(a0 + 300) = 0;
                *(u32 *)(a0 + 0x2b8) = 2;
            }
        default:
            goto switchD_8c04e828_caseD_4;
        case 10:
            Vec3_assign(a0 + 0x54, &g_8c125be0, a2, a3);
            if (cVar9 == '\0') {
                *(u32 *)(a0 + 0x54) = 0x450fc000;
                dVar7 = (double)CONCAT44(0x44688000, SUB84(dVar7, 0));
                *(u32 *)(a0 + 0x5c) = 0x44688000;
            } else {
                *(u64 *)(a0 + 0x54) = 0x44688000450fc000;
                dVar7 = 6.286777928722e-312;
                *(u64 *)(a0 + 0x5c) = 0x12844688000;
            }
            (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000, a0 + 0x54, a2, a3);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), *(u32 *)(a0 + 0x48));
            } else {
                in_xd0 = *(double *)(a0 + 0x48);
            }
            if (cVar8 == '\0') {
                dVar7 = (double)(u64)(u32)(SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20));
            } else {
                dVar7 = dVar7 + dVar7;
            }
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x58) = SUB84(dVar7, 0);
            } else {
                *(double *)(a0 + 0x58) = in_xd0;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 0xb:
            uVar5 = SUB84(dVar7, 0);
            a2 = a0 + 0x54;
            iVar1 = pure_virtual_stub();
            if (iVar1 == 0) {
                a3 = 0;
                a2 = -1;
                uVar3 = 0x10;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x10, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar3, a2, a3);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                if (cVar9 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(u64 *)(a0 + 0x2c) = (u64)uVar5;
                }
            }
        switchD_8c04e828_caseD_4:
            Vec3_dtor(auStack_24, 0xffffffff, a2, a3);
            return uVar4;
        case 0xc:
            game_sub_05ae54(a0, iVar1, a2, a3);
            iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, iVar1, a2, a3);
            if (iVar1 == 1) {
                uVar4 = 0;
                *(u32 *)(a0 + 300) = 0;
            }
            goto switchD_8c04e828_caseD_4;
        }
    } while (true);
}

/*
 * game_sub_04eb14  0x8c04eb14
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4
 */
u32 game_sub_04eb14(int a0, u32 a1, u32 a2, u8 *a3) {
    int iVar1;
    u32 uVar2;
    u32 ar6_00;
    u32 ar7_00;
    u8 *ar7_01;
    u32 uVar3;
    u32 in_fr1;
    u32 uVar4;
    u64 uVar5;
    char cVar6;
    char cVar7;
    int *in_stack_00000000;
    u8 auStack_2c[12];
    u8 auStack_20[20];

    cVar7 = '\0';
    cVar6 = '\0';
    uVar3 = 1;
    uVar5 = CONCAT44(0x41200000, in_fr1);
    uVar2 = a1;
    ar7_01 = a3;
    Vec3_ctor_zero(auStack_20, a1, a2);
    do {
        uVar4 = (u32)uVar5;
        iVar1 = *(int *)(a0 + 0x134);
        if ((0xe < iVar1) || (iVar1 < 0))
            goto switchD_8c04eb5c_caseD_4;
        switch (iVar1) {
        case 0:
            iVar1 = game_sub_057164(a0, a1, a2, ar7_01);
            if (iVar1 == 0) {
                *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
            }
            goto switchD_8c04eb5c_caseD_4;
        case 1:
            uVar5 = uVar5 & 0xffffffff;
            if (cVar7 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = uVar5;
            }
            (**(code **)(*in_stack_00000000 + 0x178))(in_stack_00000000, uVar2, a2, ar7_01);
            if (cVar7 == '\0') {
                uVar5 = CONCAT44(0x41a00000, (int)(uVar5 >> 0x20));
            } else {
                uVar5 = 0x13441a00000;
            }
            if (cVar6 != '\0' || (float)(uVar5 >> 0x20) <= (float)uVar5) {
                *(u32 *)(a0 + 0x134) = 10;
            } else {
                *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
            }
            break;
        case 2:
            if ((*(int *)(a0 + 0x128) == 4) && (iVar1 = rand_range(a0, 0, 100), 0x46 < iVar1)) {
                ar7_01 = NULL;
                a2 = 0xffffffff;
                uVar2 = 0x20;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x20, 0xffffffff, 0);
                *(u32 *)(a0 + 0x218) = 5;
            } else {
                iVar1 = rand_range(a0, 0, 100);
                if (iVar1 < 0x47) {
                    ar7_01 = NULL;
                    a2 = 0xffffffff;
                    uVar2 = 0x1a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                } else {
                    ar7_01 = NULL;
                    a2 = 0xffffffff;
                    uVar2 = 0x11;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x11, 0xffffffff, 0);
                }
            }
            CAnimBody_SetFrame(a0 + 0xb0, uVar2, a2, ar7_01);
            *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
            *(u32 *)(a0 + 0x2b8) = 3;
        case 3:
            iVar1 = get_field_1c_026dd8(a0 + 0xb0, uVar2, a2);
            if (iVar1 == 0x11) {
                iVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, uVar2, a2, ar7_01);
                if (iVar1 == 7) {
                    *(u32 *)(a0 + 0x134) = 0;
                    uVar3 = 0;
                }
            } else if (iVar1 == 0x20) {
                *(u32 *)(a0 + 0x218) = 5;
                iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, a2, ar7_01);
                if (iVar1 == 1) {
                    *(u32 *)(a0 + 0x134) = 0;
                    *(u32 *)(a0 + 0x2b8) = 2;
                    uVar3 = 0;
                }
            } else {
                iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, a2, ar7_01);
                if (iVar1 == 1) {
                    *(u32 *)(a0 + 0x134) = 0;
                    *(u32 *)(a0 + 0x2b8) = 2;
                    uVar3 = 0;
                }
            }
        switchD_8c04eb5c_caseD_4:
            Vec3_dtor(auStack_20, 0xffffffff, a2, ar7_01);
            return uVar3;
        default:
            goto switchD_8c04eb5c_caseD_4;
        case 10:
            if (*(int *)(a0 + 0x128) != 4) {
            LAB_8c04ee58:
                ar7_01 = NULL;
                a2 = 0xffffffff;
                uVar2 = 0x47;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x47, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar2, a2, ar7_01);
                *(u32 *)(a0 + 0x2b8) = 3;
                *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
                goto switchD_8c04eb5c_caseD_b;
            }
            a2 = 100;
            uVar2 = 0;
            iVar1 = rand_range(a0, 0, 100);
            if (iVar1 < 0x5b)
                goto LAB_8c04ee58;
            *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 2;
            break;
        case 0xb:
        switchD_8c04eb5c_caseD_b:
            iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, a2, ar7_01);
            if (iVar1 == 1) {
                *(u32 *)(a0 + 0x134) = 0;
                uVar3 = 0;
                *(u32 *)(a0 + 0x2b8) = 2;
            }
            goto switchD_8c04eb5c_caseD_4;
        case 0xc:
            Vec3_copy_assign(auStack_2c, a3);
            ar7_01 = auStack_2c;
            iVar1 = game_sub_059fc4(a0, a1, a1, ar7_01);
            free_if_nonnull_wrap_102790(auStack_2c, 0xffffffff, a1, ar7_01);
            a2 = a1;
            if (iVar1 == 0) {
                uVar3 = 0;
                *(u32 *)(a0 + 300) = 0;
            }
            goto switchD_8c04eb5c_caseD_4;
        case 0xd:
            ar7_00 = 0;
            ar6_00 = 0xffffffff;
            uVar2 = 0x55;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x55, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar2, ar6_00, ar7_00);
            vec3_clear(a0 + 0x2d4, uVar2, ar6_00, ar7_00);
            vec3_clear(a0 + 0x2a8, uVar2, ar6_00, ar7_00);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            *(u32 *)(a0 + 0x29c) = 0;
        case 0xe:
            ar7_01 = (u8 *)0x1c;
            a2 = a1;
            iVar1 = game_sub_058024(a0, a1, a1, 0x1c);
            if (iVar1 == 0) {
                *(u32 *)(a0 + 300) = 0;
                vec3_clear(a0 + 0x2d4, a1, a2, ar7_01);
                vec3_clear(a0 + 0x2a8, a1, a2, ar7_01);
            }
            uVar3 = (u32)(iVar1 != 0);
            if (cVar7 == '\0') {
                *(u32 *)(a0 + 0x2ac) = 0;
            } else {
                *(u64 *)(a0 + 0x2ac) = (u64)uVar4;
            }
            goto switchD_8c04eb5c_caseD_4;
        }
    } while (true);
}

/*
 * game_sub_04f034  0x8c04f034
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_03f4a4
 */
u32 game_sub_04f034(code *a0, u32 a1, code *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    int *piVar4;
    code *pcVar5;
    code *pcVar6;
    u32 uVar7;
    u32 uVar8;
    code *pcVar9;
    u32 ar7_00;
    u8 *ar4_00;
    u32 uVar10;
    float fVar11;
    double in_dr0;
    double dVar12;
    float fVar13;
    u64 in_dr14;
    double in_xd0;
    bool bVar14;
    char cVar15;
    char cVar16;
    u32 in_stack_00000000;
    code *in_stack_00000004;
    u64 uStack_1a0;
    u32 uStack_198;
    u32 uStack_194;
    u8 auStack_190[16];
    u8 auStack_180[16];
    u8 auStack_170[16];
    u8 auStack_160[16];
    u8 auStack_150[16];
    u8 auStack_140[16];
    u8 auStack_130[16];
    u8 auStack_120[12];
    u8 auStack_114[12];
    u8 auStack_108[16];
    u8 auStack_f8[12];
    u8 auStack_ec[16];
    u8 auStack_dc[12];
    u8 auStack_d0[16];
    u8 auStack_c0[12];
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[12];
    u8 auStack_78[12];
    u32 uStack_6c;
    u32 uStack_68;
    double dStack_64;
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[20];

    cVar16 = '\0';
    cVar15 = '\0';
    uVar10 = 1;
    pcVar9 = a2;
    uVar7 = a3;
    uVar8 = a3;
    Vec3_ctor_copy(auStack_2c, a3, a2, a3);
    Vec3_ctor_zero(auStack_3c, a3, pcVar9);
    Vec3_ctor_zero(auStack_4c, a3, pcVar9);
    Vec3_ctor_zero(auStack_5c, a3, pcVar9);
    pcVar5 = Vec3_ctor_zero;
    Vec3_ctor_zero(&uStack_6c, Vec3_ctor_zero, pcVar9);
    Vec3_set_one(auStack_78);
    Vec3_set_one(auStack_84);
    iVar1 = get_field_6c_028cc4(a1, pcVar5);
    if (iVar1 == 0) {
        uStack_194 = 2;
        free_if_nonnull_wrap_016ac4(auStack_84, 0xffffffff, pcVar9, uVar7);
        free_if_nonnull_wrap_016ac4(auStack_78, 0xffffffff, pcVar9, uVar7);
        Vec3_dtor(&uStack_6c, 0xffffffff, pcVar9, uVar7);
        Vec3_dtor(auStack_5c, 0xffffffff, pcVar9, uVar7);
        Vec3_dtor(auStack_4c, 0xffffffff, pcVar9, uVar7);
        Vec3_dtor(auStack_3c, 0xffffffff, pcVar9, uVar7);
        Vec3_dtor(auStack_2c, 0xffffffff, pcVar9, uVar7);
        return uStack_194;
    }
    pcVar5 = get_field_6c_028cc4;
    uVar2 = get_field_6c_028cc4(a1, get_field_6c_028cc4);
    Vec3_ctor_copy_wrap_02f670(uVar2, pcVar5, pcVar9, uVar7, auStack_94);
    Vec3_assign(auStack_3c, auStack_94, pcVar9, uVar7);
    Vec3_dtor(auStack_94, 0xffffffff, pcVar9, uVar7);
    pcVar5 = get_field_6c_028cc4;
    iVar1 = get_field_6c_028cc4(a1, get_field_6c_028cc4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, pcVar5, pcVar9, uVar7);
    dVar12 = in_dr0;
    if (iVar1 != 0x13) {
        iVar1 = get_field_6c_028cc4(a1, pcVar5);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, pcVar5, pcVar9, uVar7);
        dVar12 = in_dr0;
        if (iVar1 != 0x18)
            goto LAB_8c04f31c;
    }
    (**(code **)(**(int **)(a0 + 0x244) + 0x128))(*(int **)(a0 + 0x244), auStack_3c, pcVar9, uVar7);
    if (cVar16 == '\0') {
        in_dr0 = (double)CONCAT44(0x43340000, (int)((u64)dVar12 >> 0x20));
    } else {
        in_dr0 = 4.84372090138479e-312;
        in_xd0 = dVar12;
    }
    if (cVar15 == '\0' && SUB84(in_dr0, 0) < (float)((u64)in_dr0 >> 0x20)) {
        uStack_198 = 2;
        free_if_nonnull_wrap_016ac4(auStack_84, 0xffffffff, pcVar9, uVar7);
        free_if_nonnull_wrap_016ac4(auStack_78, 0xffffffff, pcVar9, uVar7);
        Vec3_dtor(&uStack_6c, 0xffffffff, pcVar9, uVar7);
        Vec3_dtor(auStack_5c, 0xffffffff, pcVar9, uVar7);
        uVar8 = 0xffffffff;
        Vec3_dtor(auStack_4c, 0xffffffff, 0xffffffff, uVar7);
        Vec3_dtor(auStack_3c, 0xffffffff, uVar8, uVar7);
        Vec3_dtor(auStack_2c, 0xffffffff, uVar8, uVar7);
        return uStack_198;
    }
LAB_8c04f31c:
    uVar2 = get_field_6c_028cc4(a1, get_field_6c_028cc4);
    Vec3_ctor_copy_wrap_02f670(uVar2, Vec3_ctor_copy_wrap_02f670, pcVar9, uVar7, auStack_a4);
    pcVar5 = (code *)auStack_4c;
    pcVar9 = Vec3_assign;
    Vec3_assign(pcVar5, auStack_a4, Vec3_assign, pcVar5);
    Vec3_dtor(auStack_a4, 0xffffffff, pcVar9, pcVar5);
    iVar1 = (**(code **)(**(int **)(a0 + 0x244) + 0x104))(*(int **)(a0 + 0x244), 2, pcVar9, pcVar5);
    Vec3_assign(auStack_5c, iVar1 + 4, pcVar9, pcVar5);
    do {
        uVar7 = (u32)in_dr14;
        iVar1 = *(int *)(a0 + 300);
        if ((9 < iVar1) || (iVar1 < 0))
            goto switchD_8c04f3ac_default;
        pcVar6 = (code *)(&switchD_8c04f3ac::switchdataD_8c04f3e4)[iVar1];
        switch (iVar1) {
        case 0:
            *(u32 *)(a0 + 0x178) = 1;
            pcVar9 = a0 + 0x34c;
            iVar1 = game_sub_055c38(a0, a2, pcVar9, in_stack_00000004);
            pcVar5 = in_stack_00000004;
            if (iVar1 == 0) {
                vec3_clear(a0 + 0x2a8, a2, pcVar9, in_stack_00000004);
                *(u32 *)(a0 + 0x178) = 0;
                pcVar9 = (code *)0x12c;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                pcVar5 = in_stack_00000004;
            }
            goto switchD_8c04f3ac_default;
        case 1:
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 2:
            pcVar5 = (code *)(*(int *)(a0 + 300) + 1);
            *(code **)(a0 + 300) = pcVar5;
            break;
        case 4:
            goto switchD_8c04f3ac_caseD_4;
        case 5:
            CAnimBody_GetCurFrame(a0 + 0xb0, pcVar6, pcVar9, pcVar5);
            iVar1 = get_field_1c_026dd8(a0 + 0xb0, pcVar6, pcVar9);
            iVar1 = *(int *)(a0 + 0x128) + (iVar1 + -0x16) * 2;
            if (iVar1 == 3) {
                uVar8 = 0x5e;
                uVar7 = array_at_field_14(a0 + 0xb0, 0x5e, pcVar9, pcVar5);
                puVar3 = (u32 *)deref_u32(uVar7);
                game_sub_034384(a0 + 0xb0, *(u32 *)*puVar3, pcVar9, pcVar5);
                Vec3_assign(auStack_3c, auStack_b4, pcVar9, pcVar5);
                Vec3_dtor(auStack_b4, 0xffffffff, pcVar9, pcVar5);
                uVar8 = 0x5e;
                uVar7 = array_at_field_14(a0 + 0xb0, 0x5e, pcVar9, pcVar5);
                piVar4 = (int *)deref_u32(uVar7);
                game_sub_0348ac(a0 + 0xb0, *(u32 *)(*piVar4 + 8), pcVar9, pcVar5);
                Vec3_assign_copy(auStack_84, auStack_c0);
                free_if_nonnull_wrap_016ac4(auStack_c0, 0xffffffff, pcVar9, pcVar5);
            } else if (iVar1 == 4) {
                uVar7 = array_at_field_14(a0 + 0xb0, 0x5f, pcVar9, pcVar5);
                puVar3 = (u32 *)deref_u32(uVar7);
                game_sub_034384(a0 + 0xb0, *(u32 *)*puVar3, pcVar9, pcVar5);
                Vec3_assign(auStack_3c, auStack_d0, pcVar9, pcVar5);
                Vec3_dtor(auStack_d0, 0xffffffff, pcVar9, pcVar5);
                uVar7 = array_at_field_14(a0 + 0xb0, 0x5f, pcVar9, pcVar5);
                piVar4 = (int *)deref_u32(uVar7);
                game_sub_0348ac(a0 + 0xb0, *(u32 *)(*piVar4 + 8), pcVar9, pcVar5);
                Vec3_assign_copy(auStack_84, auStack_dc);
                free_if_nonnull_wrap_016ac4(auStack_dc, 0xffffffff, pcVar9, pcVar5);
            } else if (iVar1 == 5) {
                uVar7 = array_at_field_14(a0 + 0xb0, 0x5e, pcVar9, pcVar5);
                puVar3 = (u32 *)deref_u32(uVar7);
                game_sub_034384(a0 + 0xb0, *(u32 *)*puVar3, pcVar9, pcVar5);
                Vec3_assign(auStack_3c, auStack_ec, pcVar9, pcVar5);
                Vec3_dtor(auStack_ec, 0xffffffff, pcVar9, pcVar5);
                uVar8 = 0xb0;
                uVar7 = array_at_field_14(a0 + 0xb0, 0x5e, 0xb0, pcVar5);
                piVar4 = (int *)deref_u32(uVar7);
                game_sub_0348ac(a0 + 0xb0, *(u32 *)(*piVar4 + 8), uVar8, pcVar5);
                pcVar5 = Vec3_assign_copy;
                Vec3_assign_copy(auStack_84, auStack_f8);
                pcVar9 = (code *)0xffffffff;
                free_if_nonnull_wrap_016ac4(auStack_f8, 0xffffffff, 0xffffffff, pcVar5);
            } else if (iVar1 == 6) {
                uVar8 = 0x5f;
                uVar7 = array_at_field_14(a0 + 0xb0, 0x5f, pcVar9, pcVar5);
                puVar3 = (u32 *)deref_u32(uVar7);
                game_sub_034384(a0 + 0xb0, *(u32 *)*puVar3, pcVar9, pcVar5);
                Vec3_assign(auStack_3c, auStack_108, pcVar9, pcVar5);
                Vec3_dtor(auStack_108, 0xffffffff, pcVar9, pcVar5);
                uVar8 = 0x5f;
                uVar7 = array_at_field_14(a0 + 0xb0, 0x5f, pcVar9, pcVar5);
                puVar3 = (u32 *)deref_u32(uVar7);
                pcVar9 = (code *)*puVar3;
                game_sub_0348ac(a0 + 0xb0, *(u32 *)(pcVar9 + 8), pcVar9, pcVar5);
                Vec3_assign_copy(auStack_84, auStack_114);
                free_if_nonnull_wrap_016ac4(auStack_114, 0xffffffff, pcVar9, pcVar5);
            }
            vec3_copy_8c02b5fc(auStack_120, in_stack_00000000, pcVar9);
            ar4_00 = auStack_3c;
            pcVar9 = Vec3_sub_023484;
            Vec3_sub_023484(ar4_00, auStack_120, Vec3_sub_023484, ar4_00, auStack_130);
            Vec3_assign(auStack_3c, auStack_130, pcVar9, ar4_00);
            Vec3_dtor(auStack_130, 0xffffffff, pcVar9, ar4_00);
            pcVar5 = object_dtor_delete;
            object_dtor_delete(auStack_120, 0xffffffff, pcVar9, object_dtor_delete);
            pcVar9 = (code *)auStack_3c;
            Vec3_add_assign(pcVar9, a2);
            uVar7 = get_field_6c_028cc4(a1, a2);
            set_vec3_field_30(uVar7, a2, pcVar9);
            uVar7 = get_field_6c_028cc4(a1, a2);
            set_fields_5c_60_64(uVar7);
            uVar7 = 0xb0;
            iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0xb0, pcVar9, pcVar5);
            if (iVar1 == 1) {
                set_field_88_to_1(a1, uVar7, pcVar9);
                flags6_set_all(a0 + 0x1fc, 0x1fc, pcVar9);
                *(u32 *)(a0 + 0x2b8) = 2;
                uVar10 = 0;
                *(u32 *)(a0 + 300) = 0;
                uVar8 = 0xffffffff;
                uVar7 = 0x1a;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                pcVar5 = CAnimBody_SetFrame;
                CAnimBody_SetFrame(a0 + 0xb0, uVar7, uVar8, CAnimBody_SetFrame);
                pcVar9 = (code *)0xa;
                iVar1 = rand_range(a0, 0, 10);
                if (iVar1 < 6) {
                    pcVar5 = NULL;
                    pcVar9 = (code *)0xffffffff;
                    uVar7 = 0x1e;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1e, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar7, pcVar9, pcVar5);
                    *(u32 *)(a0 + 0x2b8) = 3;
                }
            }
            goto switchD_8c04f3ac_default;
        case 6:
            iVar1 = get_field_6c_028cc4(a1, pcVar6);
            iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, pcVar6, pcVar9, pcVar5);
            if (iVar1 == 0x13) {
                Vec3_assign(&uStack_6c, auStack_5c, pcVar9, pcVar5);
            } else {
                Vec3_assign(&uStack_6c, auStack_4c, pcVar9, pcVar5);
            }
            Vec3_assign(a0 + 0x248, a2, pcVar9, pcVar5);
            if (cVar16 == '\0') {
                dVar12 = (double)CONCAT44(0x43480000, dStack_64._0_4_);
            } else {
                dVar12 = 6.37156434669702e-312;
                in_xd0 = dStack_64;
            }
            if (cVar15 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            if (cVar16 == '\0') {
                *(float *)(a0 + 0x250) = fVar11;
                in_dr0 = (double)CONCAT44(0x43480000, uStack_6c);
            } else {
                *(double *)(a0 + 0x250) = in_xd0;
                in_xd0 = (double)CONCAT44(uStack_68, uStack_6c);
                in_dr0 = 6.37156434669702e-312;
            }
            if (cVar15 == '\0') {
                in_dr0 = (double)(u64)(u32)(SUB84(in_dr0, 0) - (float)((u64)in_dr0 >> 0x20));
            } else {
                in_dr0 = in_dr0 - in_dr0;
            }
            if (cVar16 == '\0') {
                *(int *)(a0 + 0x248) = SUB84(in_dr0, 0);
            } else {
                *(double *)(a0 + 0x248) = in_xd0;
            }
            *(u32 *)(a0 + 0x40) = 5;
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            *(u32 *)(a0 + 700) = 1;
            pcVar6 = a2;
            Vec3_sub(&uStack_6c, a2, pcVar9, pcVar5, auStack_140);
            Vec3_normalize(auStack_140, pcVar6, pcVar9, pcVar5);
            Vec3_assign(a0 + 0x54, auStack_150, pcVar9, pcVar5);
            Vec3_dtor(auStack_150, 0xffffffff, pcVar9, pcVar5);
            Vec3_dtor(auStack_140, 0xffffffff, pcVar9, pcVar5);
        case 7:
            fVar11 = SUB84(in_dr0, 0);
            pcVar9 = a0 + 0x248;
            pcVar6 = a2;
            iVar1 = game_sub_04c314(a0, a2, pcVar9);
            if (iVar1 == 0) {
                iVar1 = get_field_6c_028cc4(a1, pcVar6);
                iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, *(int *)(iVar1 + 8), pcVar9, pcVar5);
                if (iVar1 == 0x13) {
                    Vec3_assign(&uStack_6c, auStack_5c, pcVar9, pcVar5);
                    if (cVar16 == '\0') {
                        dVar12 = (double)CONCAT44(0x42a00000, dStack_64._0_4_);
                    } else {
                        dVar12 = 1.881185915789446e-53;
                        in_xd0 = dStack_64;
                    }
                    if (cVar15 == '\0') {
                        fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
                    } else {
                        fVar11 = SUB84(dVar12 + dVar12, 0);
                    }
                    dVar12 = in_xd0;
                    if (cVar16 == '\0') {
                        dStack_64 = (double)CONCAT44(dStack_64._4_4_, fVar11);
                        dVar12 = dStack_64;
                    }
                } else {
                    Vec3_assign(&uStack_6c, auStack_4c, pcVar9, pcVar5);
                    dVar12 = dStack_64;
                }
                dStack_64 = dVar12;
                Vec3_sub(&uStack_6c, a2, pcVar9, pcVar5, auStack_160);
                Vec3_assign(a0 + 0x54, auStack_160, pcVar9, pcVar5);
                Vec3_dtor(auStack_160, 0xffffffff, pcVar9, pcVar5);
                if (cVar16 == '\0') {
                    *(u32 *)(a0 + 0x58) = 0;
                } else {
                    *(u64 *)(a0 + 0x58) = (u64)(u32)fVar11;
                }
                Vec3_length(a0 + 0x54, Vec3_length, pcVar9, pcVar5);
                if (cVar16 == '\0') {
                    dVar12 = (double)CONCAT44(0x42480000, *(u32 *)(a0 + 0x48));
                } else {
                    in_xd0 = *(double *)(a0 + 0x48);
                    dVar12 = 4.67388482346422e-312;
                }
                if (cVar15 == '\0') {
                    fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
                } else {
                    fVar11 = SUB84(dVar12 + dVar12, 0);
                }
                dVar12 = in_xd0;
                if (cVar16 == '\0') {
                    uStack_1a0 = (double)CONCAT44(uStack_1a0._4_4_, fVar11);
                    dVar12 = uStack_1a0;
                }
                uStack_1a0 = dVar12;
                Vec3_scale(a0 + 0x54, &uStack_1a0, pcVar9, pcVar5, auStack_170);
                Vec3_sub(&uStack_6c, auStack_170, pcVar9, pcVar5, auStack_180);
                Vec3_assign(a0 + 0x248, auStack_180, pcVar9, pcVar5);
                Vec3_dtor(auStack_180, 0xffffffff, pcVar9, pcVar5);
                Vec3_dtor(auStack_170, 0xffffffff, pcVar9, pcVar5);
                if (cVar16 == '\0') {
                    *(u32 *)(a0 + 0x24c) = 0x43340000;
                } else {
                    *(u64 *)(a0 + 0x24c) = 0x12c43340000;
                }
                *(u32 *)(a0 + 0x40) = 5;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 700) = 1;
            }
        switchD_8c04f3ac_default:
            uStack_1a0._4_4_ = uVar10;
            free_if_nonnull_wrap_016ac4(auStack_84, 0xffffffff, pcVar9, pcVar5);
            free_if_nonnull_wrap_016ac4(auStack_78, 0xffffffff, pcVar9, pcVar5);
            Vec3_dtor(&uStack_6c, 0xffffffff, pcVar9, pcVar5);
            Vec3_dtor(auStack_5c, 0xffffffff, pcVar9, pcVar5);
            Vec3_dtor(auStack_4c, 0xffffffff, pcVar9, pcVar5);
            pcVar5 = Vec3_dtor;
            Vec3_dtor(auStack_3c, 0xffffffff, pcVar9, Vec3_dtor);
            Vec3_dtor(auStack_2c, 0xffffffff, 0xffffffff, pcVar5);
            return uStack_1a0._4_4_;
        case 8:
            Vec3_ctor_copy(auStack_190, a0 + 0x54, pcVar9, pcVar5);
            pcVar5 = (code *)auStack_190;
            pcVar9 = a0 + 0x248;
            iVar1 = Vec3_sub_04e0e0(a0, a2, pcVar9, pcVar5);
            uVar7 = 0xffffffff;
            Vec3_dtor(auStack_190, 0xffffffff, pcVar9, pcVar5);
            if (iVar1 == 0) {
                iVar1 = get_field_6c_028cc4(a1, uVar7);
                iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, iVar1, pcVar9, pcVar5);
                if (iVar1 == 0x13) {
                    pcVar5 = NULL;
                    pcVar9 = (code *)0xffffffff;
                    uVar7 = 0x1a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar7, pcVar9, pcVar5);
                    *(u32 *)(a0 + 0x2b8) = 3;
                    *(u32 *)(a0 + 700) = 0;
                    flags6_clear_all(a0 + 0x1fc, 0, pcVar9, pcVar5);
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                } else {
                    pcVar5 = NULL;
                    uVar8 = 0xffffffff;
                    uVar7 = 0x17;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x17, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar7, uVar8, pcVar5);
                    *(u32 *)(a0 + 0x2b8) = 3;
                    *(u32 *)(a0 + 700) = 0;
                    pcVar9 = (code *)0x1fc;
                    flags6_clear_all(a0 + 0x1fc, a0 + 0x1fc, 0x1fc, pcVar5);
                    *(u32 *)(a0 + 300) = 4;
                }
            }
            if (*(int *)(a0 + 0x298) == 1) {
                flags6_clear_all(a0 + 0x1fc, 0x298, pcVar9, pcVar5);
            }
            goto switchD_8c04f3ac_default;
        case 9:
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a0 + 0xb0, pcVar9, pcVar5);
            fVar11 = (float)((u64)in_dr0 >> 0x20);
            pcVar5 = Vec3_distance_sq;
            Vec3_distance_sq(auStack_4c, auStack_5c, pcVar9, Vec3_distance_sq);
            if (cVar16 == '\0') {
                fVar13 = 150.0;
            } else {
                fVar11 = 150.0;
                fVar13 = -1.0;
            }
            if (cVar15 == '\0' && fVar11 < fVar13) {
                uVar2 = 0;
                uVar8 = 0xffffffff;
                uVar7 = 0x16;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x16, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar7, uVar8, uVar2);
                pcVar5 = (code *)0x3;
                *(u32 *)(a0 + 0x2b8) = 3;
                pcVar9 = (code *)0x2bc;
                *(u32 *)(a0 + 700) = 0;
                flags6_clear_all(a0 + 0x1fc, uVar7, 700, 3);
                *(u32 *)(a0 + 300) = 4;
            }
            goto switchD_8c04f3ac_default;
        }
        pcVar9 = (code *)auStack_78;
        pcVar6 = Vec3_sub_023df4;
        Vec3_sub_023df4(pcVar9);
        iVar1 = get_field_6c_028cc4(a1, pcVar6);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, pcVar6, pcVar9, pcVar5);
        uVar7 = (u32)in_dr14;
        if (iVar1 == 0x18) {
            ar7_00 = 0;
            uVar2 = 0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x17, 0xffffffff, 0);
            *(u32 *)(a0 + 0x2b8) = 3;
            CAnimBody_SetFrame(a0 + 0xb0, 3, uVar2, ar7_00);
            flags6_clear_all(a0 + 0x1fc, flags6_clear_all, uVar2, ar7_00);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            pcVar6 = a0;
        switchD_8c04f3ac_caseD_4:
            pcVar5 = a0 + 0xb0;
            pcVar9 = CAnimBody_AdvanceFrame_033b98;
            CAnimBody_AdvanceFrame_033b98(pcVar5, pcVar6, CAnimBody_AdvanceFrame_033b98, pcVar5);
            CAnimBody_GetCurFrame(a0 + 0xb0, pcVar6, pcVar9, pcVar5);
            uVar8 = SUB84(in_dr0, 0);
            if (cVar16 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), uVar7);
                dVar12 = (double)CONCAT44(0x41a00000, uVar8);
            } else {
                dVar12 = 1.6981406014198e-311;
            }
            if (cVar15 == '\0') {
                bVar14 = (float)((u64)in_dr0 >> 0x20) < (float)((u64)dVar12 >> 0x20);
            } else {
                bVar14 = in_dr0 < dVar12;
            }
            if ((!bVar14) && (*(int *)(a0 + 800) == 0)) {
                pcVar5 = *(code **)(a0 + 0x244);
                se_play_at_object(a0, 0x1a, a2, pcVar5);
                *(u32 *)(a0 + 800) = 1;
                pcVar9 = a2;
            }
            if (cVar16 == '\0') {
                dVar12 = (double)CONCAT44(0x41b00000, SUB84(dVar12, 0));
            } else {
                dVar12 = 5.444735897974836e+158;
            }
            if (cVar15 == '\0') {
                bVar14 = (float)((u64)in_dr0 >> 0x20) < (float)((u64)dVar12 >> 0x20);
            } else {
                bVar14 = in_dr0 < dVar12;
            }
            if (!bVar14) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                pcVar5 = a0;
            }
            goto switchD_8c04f3ac_default;
        }
        *(u32 *)(a0 + 0x40) = 5;
        *(u32 *)(a0 + 300) = 6;
    } while (true);
}
