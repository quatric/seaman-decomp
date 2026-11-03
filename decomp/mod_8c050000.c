/* Seaman (USA) region 0x8c050000-0x8c060000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * ret_const_0_0502f8  0x8c0502f8
 */
u32 ret_const_0_0502f8(void) {
    return 0;
}

/*
 * game_vec_050300  0x8c050300
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_vec_03c94c
 */
u32 game_vec_050300(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 *ar5_00;
    u32 uVar3;
    u32 *ar6_00;
    u32 ar7_00;
    u8 *ar7_01;
    u32 uVar4;
    u32 in_fr1;
    float fVar5;
    double dVar6;
    u64 in_xd0;
    char cVar7;
    char cVar8;
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u32 uStack_44;
    u32 uStack_40;
    u8 auStack_3c[8];
    u8 auStack_34[12];
    u8 auStack_28[20];

    cVar8 = '\0';
    cVar7 = '\0';
    uVar4 = 1;
    uVar3 = a2;
    ar7_00 = a3;
    Vec3_ctor_copy(auStack_28, a3, a2, a3);
    Vec3_set_xyz(auStack_34, a3, uVar3, ar7_00);
    iVar1 = get_field_6c_028cc4(a1, a3);
    Vec3_ctor_zero(&uStack_44, a3, uVar3);
    if (iVar1 == 0) {
        Vec3_dtor(&uStack_44, 0xffffffff, uVar3, ar7_00);
        object_dtor_delete(auStack_34, 0xffffffff, uVar3, ar7_00);
        Vec3_dtor(auStack_28, 0xffffffff, uVar3, ar7_00);
        uVar4 = 2;
    } else {
        ar7_01 = auStack_3c;
        ar6_00 = &uStack_40;
        ar5_00 = &uStack_44;
        get_vec3_field_30(iVar1, ar5_00, ar6_00, ar7_01);
        iVar2 = *(int *)(a0 + 300);
        if (iVar2 == 0) {
            iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, ar5_00, ar6_00, ar7_01);
            if (iVar1 == 1) {
                ar7_01 = NULL;
                ar6_00 = (u32 *)0xffffffff;
                ar5_00 = NULL;
                CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, ar5_00, ar6_00, ar7_01);
                *(u32 *)(a0 + 0x2b8) = 3;
            }
            game_vec_05ae54(a0, ar5_00, ar6_00, ar7_01);
            if (cVar8 == '\0') {
                dVar6 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar6 = 1.23128308427977e-311;
            }
            if (cVar7 == '\0') {
                fVar5 = (float)((u64)dVar6 >> 0x20);
                dVar6 = (double)CONCAT44(fVar5, SUB84(dVar6, 0) * fVar5);
            } else {
                dVar6 = dVar6 * dVar6;
            }
            if (cVar8 == '\0') {
                *(int *)(a0 + 0x28) = SUB84(dVar6, 0);
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
            (**(code **)(**(int **)(a0 + 0x244) + 0x184))(*(int **)(a0 + 0x244), ar5_00, ar6_00, ar7_01);
            if (cVar8 == '\0') {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), uStack_40);
            }
            if (cVar7 != '\0' || SUB84(dVar6, 0) <= (float)((u64)dVar6 >> 0x20)) {
                *(u32 *)(a0 + 0x40) = 5;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                if (cVar8 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(u64 *)(a0 + 0x2c) = (u64)dVar6 & 0xffffffff;
                }
            }
        } else if (iVar2 == 1) {
            ar6_00 = &uStack_44;
            iVar1 = pure_virtual_stub();
            if ((iVar1 == 0) || (*(int *)(a0 + 0x40) == 4)) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 0x280) = 0;
                *(u32 *)(a0 + 0x2b8) = 3;
                ar7_01 = NULL;
                ar6_00 = (u32 *)0xffffffff;
                uVar3 = 0x10;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x10, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar3, ar6_00, ar7_01);
                *(u32 *)(a0 + 0x40) = 5;
                if (cVar8 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(u64 *)(a0 + 0x2c) = (u64)in_fr1;
                }
            }
        } else if (iVar2 == 2) {
            game_vec_05ae54(a0, ar5_00, ar6_00, ar7_01);
            *(u32 *)(a0 + 0x214) = 0;
            ar7_01 = auStack_3c;
            ar6_00 = &uStack_40;
            get_vec3_field_30(iVar1, &uStack_44, ar6_00, ar7_01);
            Vec3_scale(a0 + 0x14, a0 + 0x48, ar6_00, ar7_01, auStack_54);
            Vec3_scale(auStack_54, &g_8c136598, ar6_00, ar7_01, auStack_64);
            Vec3_add(auStack_64, a2, ar6_00, ar7_01, auStack_74);
            Vec3_sub(auStack_74, &uStack_44, ar6_00, ar7_01, auStack_84);
            Vec3_scale(auStack_84, &g_8c13659c, ar6_00, ar7_01, auStack_94);
            Vec3_add_assign(&uStack_44, auStack_94);
            Vec3_dtor(auStack_94, 0xffffffff, ar6_00, ar7_01);
            Vec3_dtor(auStack_84, 0xffffffff, ar6_00, ar7_01);
            Vec3_dtor(auStack_74, 0xffffffff, ar6_00, ar7_01);
            Vec3_dtor(auStack_64, 0xffffffff, ar6_00, ar7_01);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_54, 0xffffffff, ar6_00, ar7_01);
            set_vec3_field_30(iVar1, uVar3, ar6_00);
            if (cVar8 == '\0') {
                dVar6 = (double)CONCAT44(0x3f59999a, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar6 = 3.73996370277889e-312;
            }
            if (cVar7 == '\0') {
                fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 * dVar6, 0);
            }
            if (cVar8 == '\0') {
                *(float *)(a0 + 0x28) = fVar5;
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
            iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar3, ar6_00, ar7_01);
            if (iVar1 == 1) {
                *(u32 *)(a0 + 300) = 0;
                uVar4 = 0;
                *(u32 *)(a0 + 0x280) = 0;
                *(u8 *)(a0 + 0x1fc) = *(u8 *)(a0 + 0x1fc) & 0xfb | 4;
                set_field_88_to_1(a1, uVar3, ar6_00);
                ar7_01 = NULL;
                ar6_00 = (u32 *)0xffffffff;
                uVar3 = 0;
                CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar3, ar6_00, ar7_01);
                *(u32 *)(a0 + 0x2b8) = 2;
                *(u32 *)(a0 + 0x214) = 1;
                if (cVar8 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(u64 *)(a0 + 0x2c) = (u64)(u32)fVar5;
                }
            }
        }
        Vec3_dtor(&uStack_44, 0xffffffff, ar6_00, ar7_01);
        object_dtor_delete(auStack_34, 0xffffffff, ar6_00, ar7_01);
        Vec3_dtor(auStack_28, 0xffffffff, ar6_00, ar7_01);
    }
    return uVar4;
}

/*
 * get_vec3_field_30  0x8c0507a4
 * copies x, y, z at +0x30 to three out pointers
 * called by: CHerb_kind10_state2_above_110, CWaterTank_uses_get_field_300_0e0f48, Class_12a25c_vec_06f93c,
 * Class_12b580_uses_list_node_next_wrap_0da754, game_uses_Vec3_ctor_zero_0cac08, game_vec_050300, game_vec_077a38,
 * game_vec_0aa11c (+3 more)
 */
u32 *get_vec3_field_30(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0x30);
    *a2 = *(u32 *)(a0 + 0x34);
    *a3 = *(u32 *)(a0 + 0x38);
    return (u32 *)(a0 + 0x34);
}

/*
 * game_vec_0507c0  0x8c0507c0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4, game_vec_03c94c
 */
u32 game_vec_0507c0(int *a0, float *a1, code *a2, code *a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    float *pfVar4;
    code *pcVar5;
    u32 uVar6;
    code *ar6_00;
    u32 ar6_01;
    u8 *ar5_00;
    float fVar7;
    u32 uVar8;
    u64 in_dr0;
    u64 uVar9;
    float fVar13;
    double dVar10;
    double dVar11;
    u64 uVar12;
    u32 in_fr3;
    u64 in_dr4;
    u32 in_fr15;
    float fVar14;
    u64 in_xd0;
    char cVar15;
    char cVar16;
    u32 in_stack_00000000;
    int *in_stack_00000004;
    int in_stack_00000008;
    code *ain0;
    u64 uStack_258;
    u64 uStack_248;
    u64 uStack_240;
    u64 uStack_234;
    float fStack_1f8;
    float fStack_1f4;
    float fStack_1ec;
    float fStack_1e8;
    float fStack_1e4;
    float fStack_1e0;
    u32 auStack_1dc[4];
    u8 auStack_1cc[12];
    u8 auStack_1c0[16];
    u8 auStack_1b0[16];
    u8 auStack_1a0[16];
    u8 auStack_190[16];
    u8 auStack_180[16];
    u8 auStack_170[16];
    u8 auStack_160[16];
    u8 auStack_150[16];
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
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[20];

    cVar16 = '\0';
    cVar15 = '\0';
    dVar11 = (double)CONCAT44((int)((u64)in_dr4 >> 0x20), in_fr15);
    pcVar5 = (code *)a1;
    ar6_00 = a2;
    ain0 = a3;
    Vec3_ctor_zero(auStack_34, a1, a2);
    Vec3_ctor_zero(auStack_44, pcVar5, ar6_00);
    Class_12b2ac_vec_031700(a0, pcVar5, ar6_00, a3);
    iVar1 = a0[0x1a];
    if (iVar1 == 0) {
        Vec3_make(a0 + 0x20, auStack_54, ar6_00, a3, auStack_54);
        fStack_1f8 = (float)in_dr0;
        Vec3_assign(a0 + 0x20, auStack_54, ar6_00, a3);
        Vec3_dtor(auStack_54, 0xffffffff, ar6_00, a3);
        if (a0[0x4a] < 3) {
            a3 = NULL;
            ar6_00 = (code *)0xffffffff;
            uVar6 = 0;
            CAnimBody_SetAnimation(a0 + 0x2c, 0, 0xffffffff, 0);
            Vec3_assign_f(a0 + 5, uVar6, ar6_00, a3);
            if (a0[0x49] != 0x2e) {
                if (cVar16 == '\0') {
                    fVar7 = a1[2];
                } else {
                    in_xd0 = *(u64 *)(a1 + 2);
                    fVar7 = 0.0;
                }
                if (cVar15 == '\0' && fVar7 < 0.0) {
                    pfVar4 = a1 + 2;
                    if (cVar16 == '\0') {
                        *pfVar4 = 0.0;
                    } else {
                        pfVar4[0] = 0.0;
                        pfVar4[1] = 0.0;
                    }
                }
                if (cVar16 == '\0') {
                    fStack_1f8 = *a1;
                } else {
                    in_xd0 = *(u64 *)a1;
                    fStack_1f8 = 0.0;
                }
                if (cVar15 == '\0' && fStack_1f8 < 0.0) {
                    if (cVar16 == '\0') {
                        *a1 = 0.0;
                    } else {
                        fStack_1f8 = 0.0;
                        a1[0] = 0.0;
                        a1[1] = 0.0;
                    }
                }
            }
        } else {
            if (cVar16 == '\0') {
                fStack_1f8 = *a1;
            } else {
                in_xd0 = *(u64 *)a1;
                fStack_1f8 = 0.0;
            }
            if (cVar15 == '\0' && 0.0 < fStack_1f8) {
                if (cVar16 == '\0') {
                    fStack_1f8 = a1[2];
                } else {
                    in_xd0 = *(u64 *)(a1 + 2);
                    fStack_1f8 = 0.0;
                }
                if (cVar15 == '\0' && fStack_1f8 < 0.0) {
                    pfVar4 = a1 + 2;
                    if (cVar16 == '\0') {
                        *pfVar4 = 0.0;
                    } else {
                        fStack_1f8 = 0.0;
                        pfVar4[0] = 0.0;
                        pfVar4[1] = 0.0;
                    }
                }
            }
            piVar3 = in_stack_00000004;
            pfVar4 = a1;
            iVar1 = (**(code **)(*in_stack_00000004 + 0x130))(in_stack_00000004, a1, ar6_00, a3);
            if (iVar1 == 0) {
                Vec3_length(a0 + 0x20, pfVar4, ar6_00, a3);
                pfVar4 = (float *)(a0 + 0x22);
                if (cVar16 == '\0') {
                    fStack_1f8 = *pfVar4;
                } else {
                    in_xd0 = *(u64 *)pfVar4;
                }
                if (fStack_1f8 == 0.0) {
                    if (cVar16 == '\0') {
                        fStack_1f8 = (float)a0[0x20];
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x20);
                    }
                    if (fStack_1f8 == 0.0) {
                        ar6_00 = Vec3_assign_f;
                        Vec3_assign_f(a0 + 0x20, pfVar4, Vec3_assign_f, a3);
                    }
                }
                Vec3_vec_02374c(a0 + 0x20, pfVar4, ar6_00, a3);
                Vec3_assign(a0 + 0x20, auStack_64, ar6_00, a3);
                Vec3_dtor(auStack_64, 0xffffffff, ar6_00, a3);
                if (in_stack_00000008 == 1) {
                    iVar1 = 10;
                } else {
                    iVar1 = 2;
                }
                uVar6 = 100;
                iVar2 = rand_range(a0, 0, 100);
                if ((iVar1 < iVar2) || (a0[0x4a] != 4)) {
                    a3 = NULL;
                    ar6_00 = (code *)0xffffffff;
                    CAnimBody_SetAnimation(a0 + 0x2c, 99, 0xffffffff, 0);
                } else {
                    Vec3_set_xyz(auStack_70, Vec3_set_xyz, uVar6, a3);
                    Vec3_vec_023484(a0 + 0x20, auStack_70, uVar6, a3, auStack_80);
                    Vec3_assign(a0 + 0x20, auStack_80, uVar6, a3);
                    Vec3_dtor(auStack_80, 0xffffffff, uVar6, a3);
                    object_dtor_delete(auStack_70, 0xffffffff, uVar6, a3);
                    a3 = NULL;
                    ar6_00 = (code *)0xffffffff;
                    CAnimBody_SetAnimation(a0 + 0x2c, 0x49, 0xffffffff, 0);
                }
            } else if (iVar1 == 1) {
                a3 = NULL;
                ar6_00 = (code *)0xffffffff;
                CAnimBody_SetAnimation(a0 + 0x2c, 0, 0xffffffff, 0);
            } else if (iVar1 == 2) {
                if (cVar16 == '\0') {
                    uVar9 = CONCAT44(*a1, fStack_1f8);
                } else {
                    uVar9 = *(u64 *)a1;
                }
                float_check_errno(piVar3, pfVar4, ar6_00, a3, ain0);
                fVar7 = (float)((u64)uVar9 >> 0x20);
                if (cVar16 == '\0') {
                    fVar13 = 1100.0;
                    fStack_1f8 = fVar7;
                    fVar14 = (float)uVar9;
                } else {
                    fVar14 = 1100.0;
                    fVar13 = -1.0;
                    fStack_1f8 = (float)uVar9;
                    fStack_1f4 = fVar7;
                }
                float_check_errno(piVar3, pfVar4, ar6_00, a3, ain0);
                if (cVar16 != '\0') {
                    in_xd0 = CONCAT44(fStack_1f4, fVar13);
                    fStack_1f8 = fVar14;
                }
                if (cVar15 != '\0' || fVar13 <= fStack_1f8) {
                    pcVar5 = Vec3_length;
                    Vec3_length(a0 + 0x20, pfVar4, ar6_00, Vec3_length);
                    uVar6 = 0x88;
                    if (cVar16 == '\0') {
                        fStack_1f8 = (float)a0[0x22];
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x22);
                    }
                    if (fStack_1f8 == 0.0) {
                        if (cVar16 == '\0') {
                            fStack_1f8 = (float)a0[0x20];
                        } else {
                            in_xd0 = *(u64 *)(a0 + 0x20);
                        }
                        if (fStack_1f8 == 0.0) {
                            Vec3_assign_f(a0 + 0x20, pfVar4, 0x88, pcVar5);
                        }
                    }
                    Vec3_vec_02374c(a0 + 0x20, pfVar4, uVar6, pcVar5);
                    Vec3_assign(a0 + 0x20, auStack_90, uVar6, pcVar5);
                    Vec3_dtor(auStack_90, 0xffffffff, uVar6, pcVar5);
                    if (cVar16 == '\0') {
                        *a1 = 1100.0;
                    } else {
                        fStack_1f8 = 1100.0;
                        a1[0] = 1100.0;
                        a1[1] = -1.0;
                    }
                    a3 = NULL;
                    ar6_00 = (code *)0xffffffff;
                    CAnimBody_SetAnimation(a0 + 0x2c, 99, 0xffffffff, 0);
                } else {
                    if (cVar16 == '\0') {
                        *a1 = 1600.0;
                    } else {
                        fStack_1f8 = 1600.0;
                        a1[0] = 1600.0;
                        a1[1] = -9.942077e-32;
                    }
                    a3 = NULL;
                    ar6_00 = (code *)0xffffffff;
                    CAnimBody_SetAnimation(a0 + 0x2c, 0, 0xffffffff, 0);
                }
            }
        }
        Vec3_assign(a0 + 0x15, a0 + 0x20, ar6_00, a3);
        Vec3_length(a0 + 5, Vec3_length, ar6_00, a3);
        CAnimBody_SetFrame(a0 + 0x2c, CAnimBody_SetFrame, ar6_00, a3);
        a0[0xae] = 2;
        if (cVar16 == '\0') {
            a0[10] = 0;
        } else {
            *(u64 *)(a0 + 10) = (u64)(u32)fStack_1f8;
        }
        copy6_to_fields(a0, a0[0x4a] * 0x18 + 0x8c2803f4, ar6_00, a3);
        if (cVar16 == '\0') {
            dVar10 = (double)CONCAT44(0x43a00000, (int)*(u64 *)(a0 + 0x28));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x28);
            dVar10 = -8.625516889892592e-251;
        }
        if (cVar15 == '\0') {
            fVar7 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
        } else {
            fVar7 = SUB84(dVar10 * dVar10, 0);
        }
        if (cVar16 == '\0') {
            a0[0x28] = (int)fVar7;
        } else {
            *(u64 *)(a0 + 0x28) = in_xd0;
        }
        pcVar5 = timer_start_94;
        timer_start_94(a0, timer_start_94, ar6_00);
        in_dr0 = (u64)(u32)fVar7;
        if (cVar16 == '\0') {
            a0[0xb] = 0;
        } else {
            *(u64 *)(a0 + 0xb) = in_dr0;
        }
        a0[0x1a] = a0[0x1a] + 1;
    } else if (iVar1 != 1) {
        if (iVar1 == 2) {
            if (a0[0x4a] == 0) {
                pcVar5 = Vec3_make;
                Vec3_make(a0 + 0x20, Vec3_make, ar6_00, a3, auStack_160);
                fVar7 = (float)in_dr0;
                Vec3_normalize(auStack_160, pcVar5, ar6_00, a3);
                Vec3_assign(auStack_34, auStack_170, ar6_00, a3);
                Vec3_dtor(auStack_170, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_160, 0xffffffff, ar6_00, a3);
                if (cVar16 == '\0') {
                    fVar7 = (float)a0[0xb];
                } else {
                    in_xd0 = *(u64 *)(a0 + 0xb);
                }
                if (cVar15 == '\0') {
                    fVar7 = fVar7 + 1.0;
                } else {
                    fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
                }
                uStack_240 = in_xd0;
                if (cVar16 == '\0') {
                    uStack_240 = CONCAT44(a0, fVar7);
                }
                if (cVar16 == '\0') {
                    *(u32 *)(uStack_240._4_4_ + 0x2c) = (u32)uStack_240;
                    dVar11 = (double)CONCAT44(0x42c80000, (u32)uStack_240);
                } else {
                    *(u64 *)(uStack_240._4_4_ + 0x2c) = uStack_240;
                    dVar11 = 2.89144980428368e-312;
                    in_xd0 = uStack_240;
                }
                if (cVar15 == '\0') {
                    fStack_1e0 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
                } else {
                    fStack_1e0 = SUB84(dVar11 / dVar11, 0);
                }
                if (cVar16 != '\0') {
                    fStack_1e0 = (float)in_xd0;
                    auStack_1dc[0] = (u32)(in_xd0 >> 0x20);
                }
            } else {
                piVar3 = a0 + 0x20;
                Vec3_make(piVar3, piVar3, ar6_00, a3, auStack_180);
                fVar7 = (float)in_dr0;
                Vec3_normalize(auStack_180, piVar3, ar6_00, a3);
                Vec3_assign(auStack_34, auStack_190, ar6_00, a3);
                Vec3_dtor(auStack_190, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_180, 0xffffffff, ar6_00, a3);
                if (cVar16 == '\0') {
                    fVar7 = (float)a0[0xb];
                } else {
                    in_xd0 = *(u64 *)(a0 + 0xb);
                }
                if (cVar15 == '\0') {
                    fVar7 = fVar7 + 1.0;
                } else {
                    fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
                }
                uStack_248 = in_xd0;
                if (cVar16 == '\0') {
                    uStack_248 = CONCAT44(a0, fVar7);
                }
                if (cVar16 == '\0') {
                    *(u32 *)(uStack_248._4_4_ + 0x2c) = (u32)uStack_248;
                    dVar11 = (double)CONCAT44(0x43fa0000, (u32)uStack_248);
                } else {
                    *(u64 *)(uStack_248._4_4_ + 0x2c) = uStack_248;
                    dVar11 = 2.89154888428735e-312;
                    in_xd0 = uStack_248;
                }
                if (cVar15 == '\0') {
                    fStack_1e0 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
                } else {
                    fStack_1e0 = SUB84(dVar11 / dVar11, 0);
                }
                if (cVar16 != '\0') {
                    fStack_1e0 = (float)in_xd0;
                    auStack_1dc[0] = (u32)(in_xd0 >> 0x20);
                }
            }
            Vec3_scale(auStack_34, &fStack_1e0, ar6_00, a3, auStack_1a0);
            Vec3_add_assign(a0 + 0x20, auStack_1a0);
            uVar6 = 0xffffffff;
            Vec3_dtor(auStack_1a0, 0xffffffff, ar6_00, a3);
            Vec3_length(a0 + 0x20, uVar6, ar6_00, a3);
            if (cVar16 == '\0') {
                dVar11 = (double)CONCAT44(0x3f70a3d7, (int)*(u64 *)(a0 + 10));
            } else {
                in_xd0 = *(u64 *)(a0 + 10);
                dVar11 = -9.106528023795323e-251;
            }
            if (cVar15 == '\0') {
                fVar7 = SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20);
            } else {
                fVar7 = SUB84(dVar11 * dVar11, 0);
            }
            if (cVar16 == '\0') {
                a0[10] = (int)fVar7;
            } else {
                *(u64 *)(a0 + 10) = in_xd0;
            }
            game_vec_04dd34(a0, *(int *)(a2 + 4), ar6_00, a3);
            iVar1 = timer_uses_CAnimBody_PlayToEnd_031de8(a0, 0, ar6_00, a3);
            if (iVar1 == 0) {
                (**(code **)(*a0 + 0x2c))(a0, *a0, ar6_00, a3);
                copy6_to_fields(a0, a0[0x4a] * 0x18 + 0x8c2803f4, ar6_00, a3);
                a0[0x1a] = 0;
                Vec3_assign(a0 + 5, a0 + 0x20, ar6_00, a3);
                game_vec_04dd34(a0, *(int *)(a2 + 4), ar6_00, a3);
            }
        } else if (iVar1 == 3) {
            pcVar5 = timer_stop_94;
            timer_stop_94(a0, timer_stop_94, ar6_00, a3);
            fVar7 = (float)in_dr0;
            Vec3_make(a0 + 0x20, pcVar5, ar6_00, a3, auStack_1b0);
            Vec3_assign(auStack_34, auStack_1b0, ar6_00, a3);
            Vec3_dtor(auStack_1b0, 0xffffffff, ar6_00, a3);
            if (cVar16 == '\0') {
                fVar7 = (float)a0[0xb];
            } else {
                in_xd0 = *(u64 *)(a0 + 0xb);
            }
            if (cVar15 == '\0') {
                fVar7 = fVar7 + 1.0;
            } else {
                fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
            }
            uStack_258 = in_xd0;
            if (cVar16 == '\0') {
                uStack_258 = CONCAT44(a0, fVar7);
            }
            if (cVar16 == '\0') {
                *(u32 *)(uStack_258._4_4_ + 0x2c) = (u32)uStack_258;
                dVar11 = (double)CONCAT44(0x43fa0000, (u32)uStack_258);
            } else {
                *(u64 *)(uStack_258._4_4_ + 0x2c) = uStack_258;
                dVar11 = 2.89154888428735e-312;
                in_xd0 = uStack_258;
            }
            if (cVar15 == '\0') {
                fVar7 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
            } else {
                fVar7 = SUB84(dVar11 / dVar11, 0);
            }
            fStack_1e0 = fVar7;
            if (cVar16 != '\0') {
                fStack_1e0 = (float)in_xd0;
                auStack_1dc[0] = (u32)(in_xd0 >> 0x20);
            }
            Vec3_scale(auStack_34, &fStack_1e0, ar6_00, a3, auStack_1c0);
            Vec3_add_assign(a0 + 0x20, auStack_1c0);
            Vec3_dtor(auStack_1c0, 0xffffffff, ar6_00, a3);
            Vec3_length(a0 + 0x20, a0 + 0x20, ar6_00, a3);
            a3 = (code *)(a0 + 10);
            uVar12 = (u64)(u32)fVar7;
            if (cVar16 == '\0') {
                *(int *)a3 = 0;
            } else {
                *(u64 *)a3 = uVar12;
            }
            ar6_01 = 0x128;
            copy6_to_fields(a0, a0[0x4a] * 0x18 + 0x8c2803f4, 0x128, a3);
            uVar6 = 0xb0;
            iVar1 = get_field_1c_026dd8(a0 + 0x2c, 0xb0, ar6_01);
            if (iVar1 == 99) {
                iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0x2c, uVar6, ar6_01, a3);
                uVar8 = (u32)uVar12;
                if (iVar1 == 1) {
                    a0[0x1a] = 0;
                    copy6_to_fields(a0, a0[0x4a] * 0x18 + 0x8c2803f4, ar6_01, a3);
                    Vec3_assign(a0 + 5, a0 + 0x20, ar6_01, a3);
                    a3 = NULL;
                    uVar6 = 0xffffffff;
                    CAnimBody_SetAnimation(a0 + 0x2c, 0x1a, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0x2c, 0xb0, uVar6, a3);
                    a0[0xae] = 2;
                    a0[0xba] = 2;
                    if (cVar16 == '\0') {
                        a0[0xb] = 0;
                    } else {
                        *(u64 *)(a0 + 0xb) = (u64)uVar8;
                    }
                }
            } else {
                a0[0x86] = 0x12;
                uVar6 = 0xb0;
                piVar3 = a0 + 0x2c;
                CAnimBody_AdvanceFrame_033b98(piVar3, piVar3, 0xb0, a3);
                CAnimBody_GetCurFrame(a0 + 0x2c, piVar3, uVar6, a3);
                if (cVar16 == '\0') {
                    uVar12 = uVar12 >> 0x20;
                }
                fVar7 = (float)uVar12;
                if (cVar15 != '\0' || fVar7 <= 0.0) {
                    a0[0x1a] = 0;
                    copy6_to_fields(a0, a0[0x4a] * 0x18 + 0x8c2803f4, uVar6, a3);
                    Vec3_set_xyz(auStack_1cc, auStack_1cc, uVar6, a3);
                    pcVar5 = Vec3_vec_023484;
                    Vec3_vec_023484(a0 + 0x20, auStack_1cc, uVar6, Vec3_vec_023484, auStack_1dc);
                    uVar6 = Vec3_assign(a0 + 0x20, auStack_1dc, auStack_1dc, pcVar5);
                    piVar3 = a0 + 5;
                    Vec3_assign(piVar3, uVar6, piVar3, uVar6);
                    Vec3_dtor(auStack_1dc, 0xffffffff, piVar3, uVar6);
                    object_dtor_delete(auStack_1cc, 0xffffffff, auStack_1cc, 0xffffffff);
                    uVar6 = 0;
                    CAnimBody_SetAnimation(a0 + 0x2c, 0x1a, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0x2c, a0 + 0x2c, 0xb0, uVar6);
                    a0[0xae] = 2;
                    a0[0xba] = 2;
                    a3 = (code *)(a0 + 0xb);
                    if (cVar16 == '\0') {
                        *(int *)a3 = 0;
                    } else {
                        *(u64 *)a3 = (u64)(u32)fVar7;
                    }
                }
            }
        }
        goto LAB_8c0519c6;
    }
    if (ain0 != NULL) {
        if (ain0 == (code *)0x1) {
            if ((char)a0[0x84] == '\x01') {
                a3 = (code *)0x5;
                ar6_00 = (code *)0x1;
                pcVar5 = (code *)a1;
                (**(code **)(*(int *)a0[0x91] + 0xd0))((int *)a0[0x91], a1, 1, 5);
            }
            uVar8 = (u32)in_dr0;
            vec3_clear(a0 + 0xaa, pcVar5, ar6_00, a3);
            vec3_clear(a0 + 0x24, pcVar5, ar6_00, a3);
            if (cVar16 == '\0') {
                a0[0x28] = 0;
                dVar11 = (double)CONCAT44(a1[1], 0x43340000);
            } else {
                *(u64 *)(a0 + 0x28) = (u64)uVar8;
                dVar11 = *(double *)(a1 + 1);
                in_xd0 = 0x4120000043340000;
            }
            if (cVar15 == '\0') {
                fVar7 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
            } else {
                fVar7 = SUB84(dVar11 - dVar11, 0);
            }
            if (cVar16 == '\0') {
                dVar11 = (double)CONCAT44(0x41200000, fVar7);
            } else {
                dVar11 = 1.063644295445812e+156;
            }
            if (cVar15 == '\0') {
                fVar7 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
            } else {
                fVar7 = SUB84(dVar11 - dVar11, 0);
            }
            if (cVar16 == '\0') {
                a0[0xab] = (int)fVar7;
            } else {
                *(u64 *)(a0 + 0xab) = in_xd0;
            }
            if (cVar16 == '\0') {
                a0[0xb] = 0;
            } else {
                *(u64 *)(a0 + 0xb) = (u64)(u32)fVar7;
            }
            a3 = (code *)0x3;
            a0[0x1a] = 3;
            if (cVar16 == '\0') {
                a0[0xb] = 0;
            } else {
                *(u64 *)(a0 + 0xb) = (u64)(u32)fVar7;
            }
            goto LAB_8c0519c6;
        }
        if (ain0 != (code *)0x2) {
            if (ain0 == (code *)0x3) {
                CAnimBody_AdvanceFrame_033b98(a0 + 0x2c, CAnimBody_AdvanceFrame_033b98, ar6_00, a3);
                fVar7 = (float)in_dr0;
                pcVar5 = get_field_1c_026dd8;
                iVar1 = get_field_1c_026dd8(a0 + 0x2c, get_field_1c_026dd8, ar6_00);
                fVar14 = (float)((u64)dVar11 >> 0x20);
                if (iVar1 == 99) {
                    if (cVar16 == '\0') {
                        dVar10 = (double)CONCAT44(0x43340000, fVar7);
                    } else {
                        dVar10 = 2.80660494205813e-312;
                    }
                    if (cVar15 == '\0') {
                        dVar11 = (double)CONCAT44(fVar14 - (float)((u64)dVar10 >> 0x20), SUB84(dVar11, 0));
                    } else {
                        dVar11 = dVar11 - dVar10;
                    }
                    fVar7 = (float)((u64)dVar11 >> 0x20);
                    fStack_1e4 = fVar7;
                    if (cVar16 != '\0') {
                        fStack_1e4 = SUB84(dVar11, 0);
                        fStack_1e0 = fVar7;
                    }
                    CAnimBody_SetFrame(a0 + 0x2c, pcVar5, ar6_00, a3);
                    if (cVar16 == '\0') {
                        dVar11 = (double)CONCAT44(fStack_1e4, in_fr3);
                        dVar10 = (double)CONCAT44(0x43340000, a1[1]);
                    } else {
                        dVar11 = (double)CONCAT44(fStack_1e0, fStack_1e4);
                        dVar10 = 4294968371.25;
                    }
                    if (cVar15 == '\0') {
                        fVar7 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
                        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - fVar7, SUB84(dVar11, 0));
                    } else {
                        fVar7 = SUB84(dVar10 - dVar10, 0);
                        dVar11 = dVar11 - (dVar10 - dVar10);
                    }
                    if (cVar16 == '\0') {
                        dVar10 = (double)CONCAT44(fStack_1e4, fVar7);
                    } else {
                        dVar10 = (double)CONCAT44(fStack_1e0, fStack_1e4);
                    }
                    if (cVar15 == '\0') {
                        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) / (float)((u64)dVar10 >> 0x20),
                                                  SUB84(dVar11, 0));
                    } else {
                        dVar11 = dVar11 / dVar10;
                    }
                    if (cVar16 == '\0') {
                        dVar10 = (double)CONCAT44(0x38d1b717, SUB84(dVar10, 0));
                    } else {
                        dVar10 = 2.72086438209188e-312;
                    }
                    if (cVar15 == '\0') {
                        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - (float)((u64)dVar10 >> 0x20),
                                                  SUB84(dVar11, 0));
                    } else {
                        dVar11 = dVar11 - dVar10;
                    }
                    fVar7 = (float)((u64)dVar11 >> 0x20);
                    if (cVar16 == '\0') {
                        dVar10 = (double)(u64)(u32)fVar7;
                        fStack_1e4 = fVar7;
                    } else {
                        fStack_1e4 = SUB84(dVar11, 0);
                        fStack_1e0 = fVar7;
                    }
                    fVar7 = SUB84(dVar10, 0);
                    if (cVar15 == '\0') {
                        dVar11 = (double)CONCAT44(1.0 - fVar7, fVar7);
                    } else {
                        dVar11 = (double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7);
                    }
                    fVar7 = (float)((u64)dVar11 >> 0x20);
                    fStack_1e8 = fVar7;
                    if (cVar16 != '\0') {
                        fStack_1e8 = SUB84(dVar11, 0);
                        fStack_1e4 = fVar7;
                    }
                    Vec3_scale(a0 + 0x15, &fStack_1e8, ar6_00, a3, auStack_a0);
                    Vec3_make(a0 + 0x20, 0x80, ar6_00, a3, auStack_b0);
                    Vec3_scale(auStack_b0, &fStack_1e4, ar6_00, a3, auStack_c0);
                    Vec3_add(auStack_a0, auStack_c0, ar6_00, a3, auStack_d0);
                    Vec3_assign(a0 + 0x20, auStack_d0, ar6_00, a3);
                    Vec3_dtor(auStack_d0, 0xffffffff, ar6_00, a3);
                    Vec3_dtor(auStack_c0, 0xffffffff, ar6_00, a3);
                    Vec3_dtor(auStack_b0, 0xffffffff, ar6_00, a3);
                    Vec3_dtor(auStack_a0, 0xffffffff, ar6_00, a3);
                    Vec3_length(a0 + 0x20, Vec3_length, ar6_00, a3);
                } else if (iVar1 == 0x49) {
                    if (cVar16 == '\0') {
                        dVar10 = (double)CONCAT44(0x43340000, fVar7);
                    } else {
                        dVar10 = 2.80660494205813e-312;
                    }
                    if (cVar15 == '\0') {
                        dVar11 = (double)CONCAT44(fVar14 - (float)((u64)dVar10 >> 0x20), SUB84(dVar11, 0));
                    } else {
                        dVar11 = dVar11 - dVar10;
                    }
                    fVar7 = (float)((u64)dVar11 >> 0x20);
                    fStack_1e4 = fVar7;
                    if (cVar16 != '\0') {
                        fStack_1e4 = SUB84(dVar11, 0);
                        fStack_1e0 = fVar7;
                    }
                    uVar6 = 0x49;
                    get_motion_data(a0 + 0x2c, 0x49, ar6_00, a3);
                    CAnimBody_SetFrame(a0 + 0x2c, uVar6, ar6_00, a3);
                    if (cVar16 == '\0') {
                        dVar11 = (double)CONCAT44(fStack_1e4, in_fr3);
                        dVar10 = (double)CONCAT44(0x43340000, a1[1]);
                    } else {
                        dVar11 = (double)CONCAT44(fStack_1e0, fStack_1e4);
                        dVar10 = 2.80660494205813e-312;
                    }
                    if (cVar15 == '\0') {
                        fVar7 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
                        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - fVar7, SUB84(dVar11, 0));
                    } else {
                        fVar7 = SUB84(dVar10 - dVar10, 0);
                        dVar11 = dVar11 - (dVar10 - dVar10);
                    }
                    if (cVar16 == '\0') {
                        dVar10 = (double)CONCAT44(fStack_1e4, fVar7);
                    } else {
                        dVar10 = (double)CONCAT44(fStack_1e0, fStack_1e4);
                    }
                    if (cVar15 == '\0') {
                        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) / (float)((u64)dVar10 >> 0x20),
                                                  SUB84(dVar11, 0));
                    } else {
                        dVar11 = dVar11 / dVar10;
                    }
                    if (cVar16 == '\0') {
                        dVar10 = (double)CONCAT44(0x38d1b717, SUB84(dVar10, 0));
                    } else {
                        dVar10 = 8.3229332702402e-312;
                    }
                    if (cVar15 == '\0') {
                        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - (float)((u64)dVar10 >> 0x20),
                                                  SUB84(dVar11, 0));
                    } else {
                        dVar11 = dVar11 - dVar10;
                    }
                    fVar7 = (float)((u64)dVar11 >> 0x20);
                    if (cVar16 == '\0') {
                        dVar10 = (double)(u64)(u32)fVar7;
                        fStack_1e4 = fVar7;
                    } else {
                        fStack_1e4 = SUB84(dVar11, 0);
                        fStack_1e0 = fVar7;
                    }
                    fVar7 = SUB84(dVar10, 0);
                    if (cVar15 == '\0') {
                        dVar11 = (double)CONCAT44(1.0 - fVar7, fVar7);
                    } else {
                        dVar11 = (double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7);
                    }
                    fVar7 = (float)((u64)dVar11 >> 0x20);
                    fStack_1ec = fVar7;
                    if (cVar16 != '\0') {
                        fStack_1ec = SUB84(dVar11, 0);
                        fStack_1e8 = fVar7;
                    }
                    Vec3_scale(a0 + 0x15, &fStack_1ec, ar6_00, a3, auStack_e0);
                    Vec3_make(a0 + 0x20, 0x80, ar6_00, a3, auStack_f0);
                    Vec3_scale(auStack_f0, &fStack_1e4, ar6_00, a3, auStack_100);
                    a3 = Vec3_add;
                    Vec3_add(auStack_e0, auStack_100, ar6_00, Vec3_add, auStack_110);
                    ar6_00 = (code *)auStack_110;
                    Vec3_assign(a0 + 0x20, ar6_00, ar6_00, a3);
                    Vec3_dtor(auStack_110, 0xffffffff, ar6_00, a3);
                    Vec3_dtor(auStack_100, 0xffffffff, ar6_00, a3);
                    Vec3_dtor(auStack_f0, 0xffffffff, ar6_00, a3);
                    uVar6 = 0xffffffff;
                    Vec3_dtor(auStack_e0, 0xffffffff, ar6_00, a3);
                    Vec3_length(a0 + 0x20, uVar6, ar6_00, a3);
                } else {
                    Vec3_ctor_xyz(auStack_120, pcVar5, ar6_00, a3);
                    Vec3_assign(auStack_34, auStack_120, ar6_00, a3);
                    Vec3_dtor(auStack_120, 0xffffffff, ar6_00, a3);
                    if (cVar16 == '\0') {
                        fVar7 = (float)a0[0xb];
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0xb);
                    }
                    if (cVar15 == '\0') {
                        fVar7 = fVar7 + 1.0;
                    } else {
                        fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
                    }
                    uStack_234 = in_xd0;
                    if (cVar16 == '\0') {
                        uStack_234 = CONCAT44(a0, fVar7);
                    }
                    if (cVar16 == '\0') {
                        *(u32 *)(uStack_234._4_4_ + 0x2c) = (u32)uStack_234;
                        dVar11 = (double)CONCAT44(0x43480000, (u32)uStack_234);
                    } else {
                        *(u64 *)(uStack_234._4_4_ + 0x2c) = uStack_234;
                        dVar11 = 2.89149124951398e-312;
                        in_xd0 = uStack_234;
                    }
                    if (cVar15 == '\0') {
                        fStack_1e0 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
                    } else {
                        fStack_1e0 = SUB84(dVar11 / dVar11, 0);
                    }
                    if (cVar16 != '\0') {
                        fStack_1e0 = (float)in_xd0;
                        auStack_1dc[0] = (u32)(in_xd0 >> 0x20);
                    }
                    Vec3_scale(auStack_34, &fStack_1e0, ar6_00, a3, auStack_130);
                    ar6_00 = (code *)(a0 + 0x20);
                    Vec3_add_assign(ar6_00, auStack_130);
                    Vec3_dtor(auStack_130, 0xffffffff, ar6_00, a3);
                    Vec3_length(a0 + 0x20, 0x80, ar6_00, a3);
                }
                Vec3_dtor(auStack_44, 0xffffffff, ar6_00, a3);
                uVar6 = Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
                return uVar6;
            }
            goto LAB_8c0519c6;
        }
    }
    piVar3 = a0 + 0x2c;
    pcVar5 = CAnimBody_AdvanceFrame_033b98;
    CAnimBody_AdvanceFrame_033b98(piVar3, CAnimBody_AdvanceFrame_033b98, piVar3, a3);
    Vec3_length_sq(a0 + 1, pcVar5, piVar3, a3);
    if (cVar16 == '\0') {
        dVar11 = (double)CONCAT44(0x3dcccccd, (int)(in_dr0 >> 0x20));
        in_dr0 = in_xd0;
    } else {
        dVar11 = 6.28623017172232e-312;
    }
    if (cVar15 == '\0') {
        fVar7 = SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20);
    } else {
        fVar7 = SUB84(dVar11 * dVar11, 0);
    }
    if (cVar16 == '\0') {
        a0[10] = (int)fVar7;
    } else {
        *(u64 *)(a0 + 10) = in_dr0;
    }
    Vec3_normalize(a0 + 1, pcVar5, piVar3, a3);
    Vec3_assign(a0 + 5, auStack_140, piVar3, a3);
    Vec3_dtor(auStack_140, 0xffffffff, piVar3, a3);
    copy6_to_fields(a0, a0[0x4a] * 0x18 + 0x8c2803f4, piVar3, a3);
    if (cVar16 == '\0') {
        iVar1 = 0x41200000;
    } else {
        fVar7 = 10.0;
        iVar1 = 0x270;
    }
    CMushroomerBody_vec_032518(a0, a1, in_stack_00000000, in_stack_00000004);
    ar5_00 = auStack_150;
    piVar3 = a0 + 0x15;
    Vec3_assign(piVar3, ar5_00, piVar3, ar5_00);
    uVar6 = 0xffffffff;
    Vec3_dtor(auStack_150, 0xffffffff, piVar3, ar5_00);
    a3 = (code *)(a0 + 0x14);
    rand_float(a0, uVar6, a0 + 0x13);
    if (cVar16 == '\0') {
        a0[9] = iVar1;
    } else {
        *(u64 *)(a0 + 9) = CONCAT44(iVar1, fVar7);
    }
    a0[0x11] = 1;
    if (cVar16 == '\0') {
        a0[0xb] = 0;
    } else {
        *(u64 *)(a0 + 0xb) = (u64)(u32)fVar7;
    }
    a0[0x10] = 5;
    a0[0xa0] = 0;
    a0[0x1a] = 2;
LAB_8c0519c6:
    uVar6 = 0xffffffff;
    Vec3_dtor(auStack_44, 0xffffffff, 0xffffffff, a3);
    uVar6 = Vec3_dtor(auStack_34, 0xffffffff, uVar6, a3);
    return uVar6;
}

/*
 * game_vec_051a68  0x8c051a68
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_state_switch_049b68, game_state_switch_04b168, game_vec_048f8c
 */
u32 game_vec_051a68(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    double *pdVar3;
    u64 *puVar4;
    u32 uVar5;
    float fVar6;
    double dVar7;
    double in_xd0;
    char cVar8;
    char cVar9;
    u64 uStack_70;
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[16];
    u8 auStack_1c[20];

    cVar9 = '\0';
    cVar8 = '\0';
    if (*(int *)(a0 + 0x40) == 0) {
        uVar1 = 0;
    } else {
        uVar1 = a2;
        Vec3_sub(a1, a2, a2, a3, auStack_3c);
        Vec3_normalize(auStack_3c, a2, uVar1, a3);
        Vec3_ctor_copy(auStack_1c, auStack_4c, uVar1, a3);
        Vec3_dtor(auStack_4c, 0xffffffff, uVar1, a3);
        uVar5 = 0xffffffff;
        Vec3_dtor(auStack_3c, 0xffffffff, uVar1, a3);
        Vec3_ctor_zero(auStack_2c, uVar5, uVar1);
        iVar2 = *(int *)(a0 + 0x40);
        if ((iVar2 == 1) || (iVar2 == 3)) {
            pdVar3 = (double *)(a0 + 0x2c);
            if (cVar9 != '\0') {
                in_xd0 = *pdVar3;
                pdVar3 = (double *)(a0 + 0x30);
            }
            dVar7 = *pdVar3;
            if (cVar8 == '\0') {
                fVar6 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 / dVar7, 0);
            }
            dVar7 = in_xd0;
            if (cVar9 == '\0') {
                uStack_70 = (double)CONCAT44(uStack_70._4_4_, fVar6);
                dVar7 = uStack_70;
            }
            uStack_70 = dVar7;
            Vec3_scale(auStack_1c, &uStack_70, uVar1, a3, auStack_5c);
            Vec3_add_assign(a0 + 0x14, auStack_5c);
            uVar5 = 0xffffffff;
            Vec3_dtor(auStack_5c, 0xffffffff, uVar1, a3);
            Vec3_normalize(a0 + 0x14, uVar5, uVar1, a3);
            Vec3_assign(a0 + 0x14, (int)&uStack_70 + 4, uVar1, a3);
            Vec3_dtor((int)&uStack_70 + 4, 0xffffffff, uVar1, a3);
            pdVar3 = (double *)(a0 + 0x2c);
            if (cVar9 != '\0') {
                in_xd0 = *pdVar3;
                pdVar3 = (double *)(a0 + 0x30);
            }
            dVar7 = *pdVar3;
            if (SUB84(dVar7, 0) != (float)((u64)dVar7 >> 0x20)) {
                if (cVar9 == '\0') {
                    dVar7 = (double)(u64) * (u32 *)(a0 + 0x28);
                } else {
                    in_xd0 = *(double *)(a0 + 0x28);
                }
                if (cVar8 == '\0' && 0.0 < SUB84(dVar7, 0)) {
                    if (cVar9 == '\0') {
                        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));
                    } else {
                        in_xd0 = *(double *)(a0 + 0x28);
                        dVar7 = *(double *)(a0 + 0x24);
                    }
                    if (cVar8 == '\0') {
                        fVar6 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
                    } else {
                        fVar6 = SUB84(dVar7 / dVar7, 0);
                    }
                    if (cVar9 == '\0') {
                        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x2c), fVar6);
                    } else {
                        dVar7 = *(double *)(a0 + 0x2c);
                    }
                    if (cVar8 == '\0') {
                        fVar6 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                    } else {
                        fVar6 = SUB84(dVar7 + dVar7, 0);
                    }
                    puVar4 = (u64 *)(a0 + 0x30);
                    if (cVar9 == '\0') {
                        *(float *)(a0 + 0x2c) = fVar6;
                        puVar4 = (u64 *)(a0 + 0x2c);
                    } else {
                        *(double *)(a0 + 0x2c) = in_xd0;
                    }
                    if (cVar8 == '\0' && (float)((u64)*puVar4 >> 0x20) < (float)*puVar4) {
                        if (cVar9 == '\0') {
                            *(u32 *)(a0 + 0x2c) = *(u32 *)(a0 + 0x30);
                        } else {
                            *(u64 *)(a0 + 0x2c) = *(u64 *)(a0 + 0x30);
                        }
                    }
                }
            }
        } else if (iVar2 == 4) {
            game_vec_05ae54(a0, uVar5, uVar1, a3);
        }
        Vec3_dtor(auStack_2c, 0xffffffff, uVar1, a3);
        Vec3_dtor(auStack_1c, 0xffffffff, uVar1, a3);
        uVar1 = 1;
    }
    return uVar1;
}

/*
 * game_vec_051c14  0x8c051c14
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_vec_03c94c, game_vec_0530e0
 */
u32 game_vec_051c14(int a0, u32 a1, u8 *a2, code *a3) {
    int iVar1;
    u32 *puVar2;
    u8 *puVar3;
    u8 *ar5_00;
    u32 uVar4;
    code *ar5_01;
    u32 uVar5;
    u8 *ar6_00;
    u32 uVar6;
    float fVar7;
    float fVar8;
    double in_dr0;
    double dVar9;
    u32 uVar10;
    u32 in_fr3;
    double dVar11;
    u32 in_fr15;
    u64 in_xd0;
    bool bVar12;
    char cVar13;
    char cVar14;
    int in_stack_fffffe58;
    u32 uStack_184;
    u32 uStack_180;
    u8 auStack_128[16];
    u8 auStack_118[16];
    u8 auStack_108[12];
    u8 auStack_fc[12];
    u8 auStack_f0[16];
    u8 auStack_e0[16];
    u8 auStack_d0[12];
    u8 auStack_c4[16];
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    float fStack_48;
    float fStack_44;
    u32 uStack_40;
    u32 auStack_3c[4];
    u8 auStack_2c[20];

    cVar14 = '\0';
    cVar13 = '\0';
    uVar6 = 1;
    uVar5 = a1;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_2c, a1, a2);
    Vec3_ctor_zero(auStack_3c, uVar5, ar6_00);
    Vec3_make(a0 + 0x14, uVar5, ar6_00, a3, auStack_74);
    Vec3_make(a2, uVar5, ar6_00, a3, auStack_84);
    Vec3_cos_angle(auStack_74, auStack_84, ar6_00, a3);
    dVar11 = in_dr0;
    if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr15);
    }
    Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
    puVar3 = (u8 *)0xffffffff;
    Vec3_dtor(auStack_74, 0xffffffff, ar6_00, a3);
    Vec3_set_zero(&fStack_48);
    Vec3_set_zero(&uStack_54);
    Vec3_ctor_zero(auStack_64, puVar3, ar6_00);
    iVar1 = *(int *)(a0 + 0x28c);
    if (iVar1 == 0) {
        iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, puVar3, ar6_00, a3);
        if (iVar1 == 1) {
            clear_3_words(a0 + 0x2c8, puVar3, ar6_00, a3);
            *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 1;
        }
    } else {
        if (iVar1 == 1) {
            Vec3_make(a0 + 0x14, puVar3, ar6_00, a3, auStack_94);
            Vec3_cos_angle(auStack_94, a2, ar6_00, a3);
            if (cVar14 == '\0') {
                *(int *)(a0 + 0x224) = (int)((u64)in_dr0 >> 0x20);
            } else {
                *(double *)(a0 + 0x224) = in_dr0;
            }
            uVar5 = 0xffffffff;
            Vec3_dtor(auStack_94, 0xffffffff, ar6_00, a3);
            Vec3_vec_0231c8(a2, uVar5, ar6_00, a3);
            iVar1 = a0 + 0x14;
            Vec3_vec_0231c8(iVar1, uVar5, ar6_00, a3);
            float_check_errno(iVar1, float_check_errno, ar6_00, a3, in_stack_fffffe58);
            if (cVar14 == '\0') {
                *(int *)(a0 + 0x228) = (int)((u64)in_dr0 >> 0x20);
                fVar7 = *(float *)(a0 + 0x224);
                fVar8 = 3.0;
            } else {
                *(double *)(a0 + 0x228) = in_dr0;
                in_xd0 = *(u64 *)(a0 + 0x224);
                fVar7 = 3.0;
                fVar8 = 3.64338e-43;
            }
            if (cVar13 == '\0' && fVar7 < fVar8) {
                uVar6 = 0;
                Vec3_make(a0 + 0x14, auStack_a4, ar6_00, a3, auStack_a4);
                Vec3_cos_angle(auStack_a4, &g_8c125d48, ar6_00, a3);
                if (cVar14 == '\0') {
                    fVar7 = 45.0;
                } else {
                    fVar8 = 45.0;
                    fVar7 = 8.91226e-43;
                }
                Vec3_dtor(auStack_a4, 0xffffffff, ar6_00, a3);
                if (cVar13 != '\0' || fVar7 <= fVar8) {
                    uVar5 = Vec3_angle_code_90(a0 + 0x14, &g_8c125d48, ar6_00, a3);
                    *(u32 *)(a0 + 0x27c) = uVar5;
                } else {
                    *(u32 *)(a0 + 0x27c) = 0;
                }
                *(u32 *)(a0 + 0x28c) = 0;
                goto LAB_8c0525f2;
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(0x40400000, *(u32 *)(a0 + 0x224));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x224);
                dVar9 = 6.28643325334977e-312;
            }
            if (cVar13 == '\0') {
                fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                fVar7 = SUB84(dVar9 - dVar9, 0);
            }
            if (cVar14 == '\0') {
                *(float *)(a0 + 0x224) = fVar7;
            } else {
                *(u64 *)(a0 + 0x224) = in_xd0;
            }
            if (*(int *)(a0 + 0x128) == 0) {
                a3 = NULL;
                ar6_00 = (u8 *)0xffffffff;
                puVar3 = (u8 *)0x5;
                CAnimBody_SetAnimation(a0 + 0xb0, 5, 0xffffffff, 0);
            } else {
                puVar3 = a2;
                uVar5 = Vec3_angle_code_90(a0 + 0x14, a2, ar6_00, a3);
                *(u32 *)(a0 + 0x27c) = uVar5;
                if (*(int *)(a0 + 0x27c) == 3) {
                    a3 = NULL;
                    ar6_00 = (u8 *)0xffffffff;
                    uVar5 = 7;
                    CAnimBody_SetAnimation(a0 + 0xb0, 7, 0xffffffff, 0);
                    uVar5 = get_field_1c_on_field_b0(a0, uVar5, ar6_00);
                    uVar4 = array_at_field_14(a0 + 0xb0, uVar5, ar6_00, a3);
                    puVar2 = (u32 *)deref_u32(uVar4);
                    uVar5 = puVar2[1];
                    *(u32 *)(a0 + 0xb4) = *puVar2;
                    *(u32 *)(a0 + 0xb8) = uVar5;
                    puVar3 = (u8 *)puVar2[2];
                    *(u8 **)(a0 + 0xbc) = puVar3;
                    if (*(int *)(a0 + 0x128) == 1) {
                        *(u8 **)(a0 + 0xb4) = &g_8c13630c;
                    } else {
                        *(u8 **)(a0 + 0xb4) = &g_8c136354;
                    }
                    if (cVar14 == '\0') {
                        dVar9 = (double)CONCAT44(0x42700000, *(u32 *)(a0 + 0x224));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x224);
                        dVar9 = -3.102702123153873e+34;
                    }
                    if (cVar13 == '\0') {
                        fVar7 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar9 / dVar9, 0);
                    }
                    if (cVar14 == '\0') {
                        *(float *)(a0 + 0x2c0) = fVar7;
                    } else {
                        *(u64 *)(a0 + 0x2c0) = in_xd0;
                    }
                } else if (*(int *)(a0 + 0x27c) == 4) {
                    a3 = NULL;
                    ar6_00 = (u8 *)0xffffffff;
                    uVar5 = 8;
                    CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
                    puVar3 = (u8 *)get_field_1c_on_field_b0(a0, uVar5, ar6_00);
                    uVar5 = array_at_field_14(a0 + 0xb0, puVar3, ar6_00, a3);
                    puVar2 = (u32 *)deref_u32(uVar5);
                    uVar5 = puVar2[1];
                    *(u32 *)(a0 + 0xb4) = *puVar2;
                    *(u32 *)(a0 + 0xb8) = uVar5;
                    *(u32 *)(a0 + 0xbc) = puVar2[2];
                    if (*(int *)(a0 + 0x128) == 1) {
                        *(u8 **)(a0 + 0xb4) = &g_8c136324;
                    } else {
                        *(u8 **)(a0 + 0xb4) = &g_8c13636c;
                    }
                    if (cVar14 == '\0') {
                        dVar9 = (double)CONCAT44(0x42700000, *(u32 *)(a0 + 0x224));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x224);
                        dVar9 = 1.53687565615637e-311;
                    }
                    if (cVar13 == '\0') {
                        fVar7 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
                    } else {
                        fVar7 = SUB84(dVar9 / dVar9, 0);
                    }
                    if (cVar14 == '\0') {
                        *(float *)(a0 + 0x2c0) = fVar7;
                    } else {
                        *(u64 *)(a0 + 0x2c0) = in_xd0;
                    }
                }
            }
            vec3_clear(a0 + 0x2d4, puVar3, ar6_00, a3);
            vec3_clear(a0 + 0x2a8, puVar3, ar6_00, a3);
            CAnimBody_SetFrame(a0 + 0xb0, puVar3, ar6_00, a3);
            in_dr0 = (double)(u64)(u32)fVar7;
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0;
            } else {
                *(double *)(a0 + 0x2c) = in_dr0;
            }
            *(u32 *)(a0 + 0x2b8) = 3;
            *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 1;
        } else if (iVar1 != 2)
            goto LAB_8c0525f2;
        uVar5 = SUB84(in_dr0, 0);
        game_vec_05ae54(a0, puVar3, ar6_00, a3);
        if (*(int *)(a0 + 0x128) == 0) {
            Vec3_scale(a2, &g_8c1365a0, ar6_00, a3, auStack_b4);
            ar5_00 = auStack_b4;
            Vec3_add(a1, ar5_00, ar6_00, a3, auStack_c4);
            Vec3_set_xyz(auStack_d0, ar5_00, ar6_00, a3);
            a3 = (code *)(a0 + 0x14);
            ar6_00 = auStack_c4;
            game_vec_031eb0(a0, a1, ar6_00, a3, auStack_e0);
            Vec3_assign(a0 + 0x14, auStack_e0, ar6_00, a3);
            Vec3_dtor(auStack_e0, 0xffffffff, ar6_00, a3);
            object_dtor_delete(auStack_d0, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_c4, 0xffffffff, ar6_00, a3);
            puVar3 = (u8 *)0xffffffff;
            Vec3_dtor(auStack_b4, 0xffffffff, ar6_00, a3);
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(0x40400000, uVar5);
            } else {
                dVar9 = 4.58883662057755e-312;
            }
            if (cVar13 == '\0') {
                bVar12 = (float)((u64)dVar9 >> 0x20) < (float)((u64)dVar11 >> 0x20);
            } else {
                bVar12 = dVar9 < dVar11;
            }
            if (!bVar12) {
                *(u32 *)(a0 + 0x28c) = 0;
                uVar6 = 0;
                Vec3_make(a0 + 0x14, puVar3, ar6_00, a3, auStack_f0);
                fVar7 = (float)((u64)dVar9 >> 0x20);
                Vec3_cos_angle(auStack_f0, &g_8c125d48, ar6_00, a3);
                if (cVar14 == '\0') {
                    fVar8 = 45.0;
                } else {
                    fVar7 = 45.0;
                    fVar8 = 8.91226e-43;
                }
                puVar3 = (u8 *)0xffffffff;
                Vec3_dtor(auStack_f0, 0xffffffff, ar6_00, a3);
                if (cVar13 != '\0' || fVar8 <= fVar7) {
                    puVar3 = &g_8c125d48;
                    uVar5 = Vec3_angle_code_90(a0 + 0x14, &g_8c125d48, ar6_00, a3);
                    *(u32 *)(a0 + 0x27c) = uVar5;
                } else {
                    *(u32 *)(a0 + 0x27c) = 0;
                }
            }
            CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, puVar3, ar6_00, a3);
        } else {
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(0x3d4ccccd, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar9 = 5.238690701939511e-11;
            }
            if (cVar13 == '\0') {
                fVar7 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
            } else {
                fVar7 = SUB84(dVar9 + dVar9, 0);
            }
            if (cVar14 == '\0') {
                *(float *)(a0 + 0x28) = fVar7;
                fVar7 = *(float *)(a0 + 0x28);
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
                in_xd0 = *(u64 *)(a0 + 0x28);
            }
            dVar9 = (double)CONCAT44(0x3f800000, fVar7);
            if (cVar13 == '\0' && 1.0 < fVar7) {
                if (cVar14 == '\0') {
                    dVar9 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x28));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x28);
                    dVar9 = 3.73983522256399e-312;
                }
                if (cVar13 == '\0') {
                    fVar7 = (float)((u64)dVar9 >> 0x20);
                    dVar9 = (double)CONCAT44(fVar7, SUB84(dVar9, 0) - fVar7);
                } else {
                    dVar9 = dVar9 - dVar9;
                }
                in_stack_fffffe58 = a0;
                if (cVar14 == '\0') {
                    *(int *)(a0 + 0x28) = SUB84(dVar9, 0);
                } else {
                    *(u64 *)(a0 + 0x28) = in_xd0;
                }
            }
            CAnimBody_GetCurFrame(a0 + 0xb0, puVar3, ar6_00, a3);
            uVar5 = (u32)((u64)dVar11 >> 0x20);
            uStack_180 = (u32)((u64)dVar9 >> 0x20);
            if (cVar14 != '\0') {
                uStack_180 = SUB84(dVar9, 0);
            }
            game_vec_034650(a0 + 0xb0, *(u32 *)(*(int *)(a0 + 0xb4) + 4), ar6_00, a3);
            vec3_copy_8c023d8c(&uStack_54, auStack_fc, ar6_00, a3);
            uVar4 = 0xffffffff;
            object_dtor_delete(auStack_fc, 0xffffffff, ar6_00, a3);
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar4, ar6_00, a3);
            uVar10 = (u32)((u64)dVar9 >> 0x20);
            uStack_184 = uVar10;
            if (cVar14 != '\0') {
                uStack_184 = SUB84(dVar9, 0);
                uStack_180 = uVar10;
            }
            uVar4 = get_field_1c_026dd8(a0 + 0xb0, uVar4, ar6_00);
            iVar1 = get_motion_data(a0 + 0xb0, uVar4, ar6_00, a3);
            if (cVar14 == '\0') {
                dVar11 = (double)CONCAT44(uStack_184, in_fr3);
            } else {
                dVar11 = (double)CONCAT44(uStack_180, uStack_184);
            }
            fVar7 = (float)iVar1;
            dVar9 = (double)(u64)(u32)fVar7;
            if (cVar13 == '\0' && fVar7 < 0.0) {
                if (cVar14 == '\0') {
                    dVar9 = (double)CONCAT44(0x4f800000, fVar7);
                } else {
                    dVar9 = 2.0000005923211575;
                }
                if (cVar13 == '\0') {
                    fVar7 = (float)((u64)dVar9 >> 0x20);
                    dVar9 = (double)CONCAT44(fVar7, SUB84(dVar9, 0) + fVar7);
                } else {
                    dVar9 = dVar9 + dVar9;
                }
            }
            if (cVar13 == '\0') {
                dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) / SUB84(dVar9, 0), SUB84(dVar11, 0));
            } else {
                dVar11 = dVar11 / dVar9;
            }
            if (cVar13 == '\0') {
                dVar11 = (double)CONCAT44(uVar5, 1.0 - (float)((u64)dVar11 >> 0x20));
            } else {
                dVar11 = (double)CONCAT44(uVar5, 0x3f800000) - dVar11;
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(0x40000000, SUB84(dVar9, 0));
            } else {
                dVar9 = 1.51139150211502e-311;
            }
            if (cVar13 == '\0') {
                dVar11 = (double)CONCAT44((int)((u64)dVar11 >> 0x20), SUB84(dVar11, 0) * (float)((u64)dVar9 >> 0x20));
            } else {
                dVar11 = dVar11 * dVar9;
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x2c8), uStack_54);
            } else {
                in_xd0 = CONCAT44(uStack_50, uStack_54);
                dVar9 = *(double *)(a0 + 0x2c8);
            }
            if (cVar13 == '\0') {
                fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                fVar7 = SUB84(dVar9 - dVar9, 0);
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x2c0), fVar7);
            } else {
                dVar9 = *(double *)(a0 + 0x2c0);
            }
            fVar7 = SUB84(dVar11, 0);
            if (cVar13 == '\0') {
                fStack_48 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20) * fVar7;
            } else {
                fStack_48 = SUB84(dVar9 * dVar9 * dVar11, 0);
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x2cc), uStack_50);
            } else {
                fStack_48 = (float)in_xd0;
                in_xd0 = CONCAT44(uStack_4c, uStack_50);
                dVar9 = *(double *)(a0 + 0x2cc);
            }
            if (cVar13 == '\0') {
                fVar8 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                fVar8 = SUB84(dVar9 - dVar9, 0);
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x2c0), fVar8);
            } else {
                dVar9 = *(double *)(a0 + 0x2c0);
            }
            if (cVar13 == '\0') {
                fStack_44 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20) * fVar7;
            } else {
                fStack_44 = SUB84(dVar9 * dVar9 * dVar11, 0);
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x2d0), uStack_4c);
            } else {
                fStack_44 = (float)in_xd0;
                in_xd0 = CONCAT44(fStack_48, uStack_4c);
                dVar9 = *(double *)(a0 + 0x2d0);
            }
            if (cVar13 == '\0') {
                fVar8 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                fVar8 = SUB84(dVar9 - dVar9, 0);
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x2c0), fVar8);
            } else {
                dVar9 = *(double *)(a0 + 0x2c0);
            }
            if (cVar13 == '\0') {
                fVar8 = (float)((u64)dVar9 >> 0x20);
                dVar11 = (double)CONCAT44(fVar8, SUB84(dVar9, 0) * fVar8 * fVar7);
            } else {
                dVar11 = dVar9 * dVar9 * dVar11;
            }
            if (cVar14 == '\0') {
                uStack_40 = SUB84(dVar11, 0);
            } else {
                uStack_40 = (u32)in_xd0;
                auStack_3c[0] = (u32)((u64)in_xd0 >> 0x20);
            }
            vec3_copy_8c023d8c(a0 + 0x2c8, &uStack_54, ar6_00, a3);
            fVar7 = (float)((u64)dVar11 >> 0x20);
            vec3_copy_8c02b5fc(auStack_108, &fStack_48, ar6_00);
            Vec3_vec_023484(a0 + 0x14, auStack_108, ar6_00, a3, auStack_118);
            Vec3_assign(a0 + 0x14, auStack_118, ar6_00, a3);
            Vec3_dtor(auStack_118, 0xffffffff, ar6_00, a3);
            object_dtor_delete(auStack_108, 0xffffffff, ar6_00, a3);
            ar5_01 = Vec3_length;
            Vec3_length(a0 + 0x14, Vec3_length, ar6_00, a3);
            iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, ar5_01, ar6_00, a3);
            if (iVar1 == 1) {
                uVar6 = 0;
                uVar4 = 0xffffffff;
                uVar5 = 0;
                CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar5, uVar4, uVar6);
                *(u32 *)(a0 + 0x28c) = 0;
                uVar6 = 0;
                a3 = Vec3_make;
                Vec3_make(a0 + 0x14, uVar5, uVar4, Vec3_make, auStack_128);
                ar6_00 = &g_8c125d48;
                Vec3_cos_angle(auStack_128, &g_8c125d48, &g_8c125d48, a3);
                if (cVar14 == '\0') {
                    fVar8 = 45.0;
                } else {
                    fVar7 = 45.0;
                    fVar8 = 8.91226e-43;
                }
                Vec3_dtor(auStack_128, 0xffffffff, ar6_00, a3);
                if (cVar13 != '\0' || fVar8 <= fVar7) {
                    a3 = Vec3_angle_code_90;
                    ar6_00 = (u8 *)Vec3_angle_code_90(a0 + 0x14, &g_8c125d48, ar6_00, Vec3_angle_code_90);
                    *(u8 **)(a0 + 0x27c) = ar6_00;
                } else {
                    *(u32 *)(a0 + 0x27c) = 0;
                }
                *(u32 *)(a0 + 0x40) = 5;
                *(u32 *)(a0 + 0x2b8) = 2;
            }
        }
    }
LAB_8c0525f2:
    Vec3_assign(a0 + 0x80, a0 + 0x14, ar6_00, a3);
    Vec3_dtor(auStack_64, 0xffffffff, ar6_00, a3);
    object_dtor_delete(&uStack_54, 0xffffffff, ar6_00, a3);
    object_dtor_delete(&fStack_48, 0xffffffff, ar6_00, a3);
    Vec3_dtor(auStack_3c, 0xffffffff, ar6_00, a3);
    Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, a3);
    return uVar6;
}

/*
 * game_state_switch_0526a0  0x8c0526a0
 * area name: game code; nothing names its area yet; behaviour name: dispatches on a state or mode value (switch)
 * called by: Vec3_state_switch_03f4a4
 */
u32 game_state_switch_0526a0(code *a0, code *a1, code *a2, u32 a3) {
    u64 uVar1;
    int iVar2;
    code *pcVar3;
    u32 uVar4;
    int iVar5;
    u8 *puVar6;
    code *ar6_00;
    code *ar7_00;
    u32 ar7_01;
    u32 uVar7;
    u32 uVar8;
    float fVar9;
    u64 in_dr0;
    float fVar12;
    double dVar10;
    u64 uVar11;
    u64 in_xd0;
    char cVar13;
    char cVar14;
    u64 uStack_180;
    u8 auStack_16c[12];
    u8 auStack_160[16];
    u8 auStack_150[16];
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
    u8 auStack_70[16];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u8 auStack_20[20];

    cVar14 = '\0';
    cVar13 = '\0';
    uVar4 = 1;
    uVar8 = 1;
    pcVar3 = a2;
    Vec3_ctor_zero(auStack_20, 1, a2);
    Vec3_ctor_zero(auStack_30, uVar4, pcVar3);
    Vec3_make(a0 + 0x14, uVar4, pcVar3, a3, auStack_40);
    Vec3_ctor_xyz(auStack_50, uVar4, pcVar3, a3);
    Vec3_make(auStack_50, uVar4, pcVar3, a3, auStack_60);
    Vec3_cos_angle(auStack_40, auStack_60, pcVar3, a3);
    uVar1 = in_dr0;
    if (cVar14 == '\0') {
        uStack_180 = CONCAT44(uStack_180._4_4_, (int)((u64)in_dr0 >> 0x20));
        uVar1 = uStack_180;
    }
    uStack_180 = uVar1;
    Vec3_dtor(auStack_60, 0xffffffff, pcVar3, a3);
    ar7_00 = Vec3_dtor;
    Vec3_dtor(auStack_50, 0xffffffff, pcVar3, Vec3_dtor);
    Vec3_dtor(auStack_40, 0xffffffff, pcVar3, ar7_00);
    if (a2 != NULL) {
        if (a2 == (code *)0x1) {
            pcVar3 = *(code **)(a0 + 0x28c);
            uVar4 = 5;
            if (((int)pcVar3 < 6) && (-1 < (int)pcVar3)) {
                ar6_00 = (code *)((int)pcVar3 * 4);
                switch (pcVar3) {
                case NULL:
                    if (*(int *)(a0 + 0x324) == 1) {
                        Vec3_dtor(auStack_30, 0xffffffff, ar6_00, ar7_00);
                        Vec3_dtor(auStack_20, 0xffffffff, ar6_00, ar7_00);
                        return 0;
                    }
                    *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 1;
                    ar6_00 = a0;
                case (code *)0x1:
                    pcVar3 = ar6_00;
                    iVar5 = game_uses_get_field_1c_057164(a0, a1, pcVar3, ar7_00);
                    if (iVar5 == 0) {
                        *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 1;
                    }
                    break;
                case (code *)0x2:
                    Vec3_ctor_xyz(auStack_70, 5, ar6_00, ar7_00);
                    uVar4 = Vec3_angle_code_90(a0 + 0x14, auStack_70, ar6_00, ar7_00);
                    *(u32 *)(a0 + 0x27c) = uVar4;
                    uVar4 = 0xffffffff;
                    Vec3_dtor(auStack_70, 0xffffffff, ar6_00, ar7_00);
                    Vec3_make(a0 + 0x14, uVar4, ar6_00, ar7_00, auStack_80);
                    ar6_00 = Vec3_ctor_xyz;
                    Vec3_ctor_xyz(auStack_90, uVar4, Vec3_ctor_xyz, ar7_00);
                    Vec3_cos_angle(auStack_80, auStack_90, ar6_00, ar7_00);
                    if (cVar14 == '\0') {
                        *(int *)(a0 + 0x224) = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        *(u64 *)(a0 + 0x224) = in_dr0;
                    }
                    Vec3_dtor(auStack_90, 0xffffffff, ar6_00, ar7_00);
                    uVar4 = 0xffffffff;
                    Vec3_dtor(auStack_80, 0xffffffff, ar6_00, ar7_00);
                    if (cVar14 == '\0') {
                        fVar9 = *(float *)(a0 + 0x224);
                        fVar12 = 30.0;
                    } else {
                        fVar9 = 30.0;
                        fVar12 = -1.0;
                    }
                    if (cVar13 == '\0' && fVar9 < fVar12) {
                        ar7_01 = 0;
                        uVar7 = 0xffffffff;
                        uVar4 = 0x1a;
                        CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                        CAnimBody_SetFrame(a0 + 0xb0, uVar4, uVar7, ar7_01);
                        *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 3;
                        *(u32 *)(a0 + 0x27c) = 0;
                        pcVar3 = (code *)0x28c;
                        ar7_00 = a0;
                        break;
                    }
                    if (cVar14 == '\0') {
                        fVar9 = *(float *)(a0 + 0x224);
                        fVar12 = 70.0;
                    } else {
                        fVar9 = 70.0;
                        fVar12 = -1.0;
                    }
                    if (cVar13 == '\0' && fVar9 < fVar12) {
                        ar7_00 = NULL;
                        pcVar3 = (code *)0xffffffff;
                        uVar4 = 0x1a;
                        CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                        CAnimBody_SetFrame(a0 + 0xb0, uVar4, pcVar3, ar7_00);
                        *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 3;
                        break;
                    }
                    if (*(int *)(a0 + 0x27c) == 3) {
                        rand_float(a0, uVar4, ar6_00);
                        rand_float(a0, uVar4, ar6_00);
                        Vec3_ctor_xyz(auStack_c0, uVar4, ar6_00, ar7_00);
                        Vec3_add(a1, auStack_c0, ar6_00, ar7_00, auStack_d0);
                        ar6_00 = (code *)auStack_d0;
                        game_vec_057b6c(a0, a1, ar6_00, ar7_00);
                        Vec3_dtor(auStack_d0, 0xffffffff, ar6_00, ar7_00);
                        uVar4 = 0xffffffff;
                        Vec3_dtor(auStack_c0, 0xffffffff, ar6_00, ar7_00);
                    } else if (*(int *)(a0 + 0x27c) == 4) {
                        rand_float(a0, uVar4, ar6_00);
                        rand_float(a0, uVar4, ar6_00);
                        Vec3_ctor_xyz(auStack_a0, uVar4, ar6_00, ar7_00);
                        Vec3_add(a1, auStack_a0, ar6_00, ar7_00, auStack_b0);
                        ar6_00 = (code *)auStack_b0;
                        game_vec_057b6c(a0, a1, ar6_00, ar7_00);
                        Vec3_dtor(auStack_b0, 0xffffffff, ar6_00, ar7_00);
                        uVar4 = 0xffffffff;
                        Vec3_dtor(auStack_a0, 0xffffffff, ar6_00, ar7_00);
                    }
                    CAnimBody_SetFrame(a0 + 0xb0, uVar4, ar6_00, ar7_00);
                    *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 1;
                case (code *)0x3:
                    iVar5 = game_vec_057e58(a0, uVar4, ar6_00, ar7_00);
                    pcVar3 = ar6_00;
                    if (iVar5 == 0) {
                        *(u32 *)(a0 + 0x28c) = 1;
                    }
                    break;
                case (code *)0x4:
                    iVar5 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 5, ar6_00, ar7_00);
                    pcVar3 = ar6_00;
                    if (iVar5 == 1) {
                        *(u32 *)(a0 + 0x28c) = 0;
                        *(u32 *)(a0 + 0x290) = 0;
                        uVar8 = 0;
                    }
                    break;
                case (code *)0x5:
                    *(u32 *)(a0 + 0x28c) = 0;
                    *(u32 *)(a0 + 0x290) = 0;
                    uVar8 = 0;
                    pcVar3 = ar6_00;
                }
            }
            goto switchD_8c0527a4_default;
        }
        if (a2 != (code *)0x2)
            goto switchD_8c0527a4_default;
    }
    Vec3_scale(a0 + 0x14, &g_8c1365a4, pcVar3, ar7_00, auStack_e0);
    Vec3_add(a1, auStack_e0, pcVar3, ar7_00, auStack_f0);
    pcVar3 = a1;
    timer_vec_031c74(a0, auStack_f0, a1, ar7_00);
    Vec3_dtor(auStack_f0, 0xffffffff, pcVar3, ar7_00);
    iVar5 = -1;
    Vec3_dtor(auStack_e0, 0xffffffff, pcVar3, ar7_00);
    if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(0x3f7d70a4, *(u32 *)(a0 + 0x28));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x28);
        dVar10 = 1.38406752724369e-311;
    }
    if (cVar13 == '\0') {
        fVar9 = (float)((u64)dVar10 >> 0x20);
        dVar10 = (double)CONCAT44(fVar9, SUB84(dVar10, 0) * fVar9);
    } else {
        dVar10 = dVar10 * dVar10;
    }
    if (cVar14 == '\0') {
        *(int *)(a0 + 0x28) = SUB84(dVar10, 0);
    } else {
        *(u64 *)(a0 + 0x28) = in_xd0;
    }
    iVar2 = *(int *)(a0 + 0x28c);
    if (iVar2 == 0) {
        iVar5 = Vec3_uses_get_field_1c_05c28c(a0, iVar5, pcVar3, ar7_00);
        if (iVar5 == 0) {
            *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 1;
        }
        goto switchD_8c0527a4_default;
    }
    if (iVar2 == 1) {
        Vec3_ctor_xyz(auStack_100, iVar5, pcVar3, ar7_00);
        uVar4 = Vec3_angle_code_90(a0 + 0x14, auStack_100, pcVar3, ar7_00);
        *(u32 *)(a0 + 0x27c) = uVar4;
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_100, 0xffffffff, pcVar3, ar7_00);
        Vec3_make(a0 + 0x14, uVar4, pcVar3, ar7_00, auStack_110);
        Vec3_ctor_xyz(auStack_120, uVar4, pcVar3, ar7_00);
        Vec3_make(auStack_120, uVar4, pcVar3, ar7_00, auStack_130);
        Vec3_cos_angle(auStack_110, auStack_130, pcVar3, ar7_00);
        if (cVar14 == '\0') {
            *(int *)(a0 + 0x224) = (int)((u64)dVar10 >> 0x20);
        } else {
            *(double *)(a0 + 0x224) = dVar10;
        }
        Vec3_dtor(auStack_130, 0xffffffff, pcVar3, ar7_00);
        Vec3_dtor(auStack_120, 0xffffffff, pcVar3, ar7_00);
        Vec3_dtor(auStack_110, 0xffffffff, pcVar3, ar7_00);
        if (cVar14 == '\0') {
            uVar11 = CONCAT44(0x420c0000, *(u32 *)(a0 + 0x224));
        } else {
            uVar11 = 0x28c420c0000;
        }
        if (cVar13 == '\0' && (float)uVar11 < (float)(uVar11 >> 0x20)) {
            *(u32 *)(a0 + 0x27c) = 0;
            uVar8 = 0;
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0;
            } else {
                *(u64 *)(a0 + 0x2c) = uVar11 & 0xffffffff;
            }
            *(u32 *)(a0 + 0x28c) = 0;
            goto switchD_8c0527a4_default;
        }
        if (cVar14 == '\0') {
            uVar11 = CONCAT44(0x425c0000, *(u32 *)(a0 + 0x224));
        } else {
            uVar11 = 0x28c425c0000;
        }
        fVar9 = (float)uVar11;
        if (cVar13 == '\0' && fVar9 < (float)(uVar11 >> 0x20)) {
            uVar8 = 0;
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0;
            } else {
                *(u64 *)(a0 + 0x2c) = uVar11 & 0xffffffff;
            }
            *(u32 *)(a0 + 0x28c) = 0;
            goto switchD_8c0527a4_default;
        }
        if (cVar14 == '\0') {
            *(u32 *)(a0 + 0x224) = 0x42340000;
        } else {
            fVar9 = 45.0;
            *(u64 *)(a0 + 0x224) = 0x27c42340000;
        }
        if (*(int *)(a0 + 0x27c) == 3) {
            ar7_00 = NULL;
            pcVar3 = (code *)0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 7, 0xffffffff, 0);
        } else if (*(int *)(a0 + 0x27c) == 4) {
            ar7_00 = NULL;
            pcVar3 = (code *)0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
        }
        *(u32 *)(a0 + 0x2b8) = 3;
        CAnimBody_SetFrame(a0 + 0xb0, 0xb0, pcVar3, ar7_00);
        if (cVar14 == '\0') {
            *(u32 *)(a0 + 0x2c) = 0;
        } else {
            *(u64 *)(a0 + 0x2c) = (u64)(u32)fVar9;
        }
        pcVar3 = (code *)0x28c;
        iVar5 = *(int *)(a0 + 0x28c);
        *(int *)(a0 + 0x28c) = iVar5 + 1;
    } else if (iVar2 != 2) {
        if (iVar2 == 3) {
            uVar8 = 0;
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0;
            } else {
                *(u64 *)(a0 + 0x2c) = (u64)dVar10 & 0xffffffff;
            }
            *(u32 *)(a0 + 0x28c) = 0;
            pcVar3 = NULL;
            ar7_00 = (code *)0x28c;
        }
        goto switchD_8c0527a4_default;
    }
    game_vec_05ae54(a0, iVar5, pcVar3, ar7_00);
    Vec3_ctor_xyz(auStack_140, iVar5, pcVar3, ar7_00);
    Vec3_scale(auStack_140, &g_8c1365a8, pcVar3, ar7_00, auStack_150);
    puVar6 = auStack_150;
    Vec3_add(a1, puVar6, pcVar3, ar7_00, auStack_160);
    uVar4 = get_field_1c_026dd8(a0 + 0xb0, puVar6, pcVar3);
    get_motion_data(a0 + 0xb0, uVar4, pcVar3, ar7_00);
    Vec3_set_xyz(auStack_16c, a0 + 0x224, pcVar3, ar7_00);
    pcVar3 = a0 + 0x14;
    puVar6 = auStack_160;
    game_vec_031eb0(a0, a1, puVar6, pcVar3, (int)&uStack_180 + 4);
    Vec3_assign(a0 + 0x14, (int)&uStack_180 + 4, puVar6, pcVar3);
    Vec3_dtor((int)&uStack_180 + 4, 0xffffffff, puVar6, pcVar3);
    object_dtor_delete(auStack_16c, 0xffffffff, puVar6, pcVar3);
    Vec3_dtor(auStack_160, 0xffffffff, puVar6, pcVar3);
    uVar7 = 0xffffffff;
    puVar6 = auStack_150;
    Vec3_dtor(puVar6, 0xffffffff, puVar6, 0xffffffff);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_140, 0xffffffff, puVar6, uVar7);
    pcVar3 = (code *)CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar4, puVar6, uVar7);
    ar7_00 = pcVar3;
    if (pcVar3 == (code *)0x1) {
        *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + -1;
    }
switchD_8c0527a4_default:
    Vec3_dtor(auStack_30, 0xffffffff, pcVar3, ar7_00);
    Vec3_dtor(auStack_20, 0xffffffff, pcVar3, ar7_00);
    return uVar8;
}

/*
 * game_vec_0530e0  0x8c0530e0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_vec_03c94c
 */
u32 game_vec_0530e0(int a0, int *a1, u8 *a2, u32 a3) {
    u64 uVar1;
    u32 uVar2;
    int iVar3;
    u8 *ar5_00;
    int *ar5_01;
    u8 *ar6_00;
    u32 uVar4;
    double dVar5;
    float fVar6;
    u32 uVar7;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar4 = 1;
    ar5_01 = a1;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_24, a1, a2);
    timer_stop_94(a0, ar5_01, ar6_00, a3);
    if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x28));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x28);
        dVar5 = 4294968310.4;
    }
    if (cVar8 == '\0') {
        fVar6 = (float)((u64)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar6, SUB84(dVar5, 0) * fVar6);
    } else {
        dVar5 = dVar5 * dVar5;
    }
    if (cVar9 == '\0') {
        *(int *)(a0 + 0x28) = SUB84(dVar5, 0);
    } else {
        *(u64 *)(a0 + 0x28) = in_xd0;
    }
    game_vec_05ae54(a0, ar5_01, ar6_00, a3);
    uVar2 = get_field_80_s8(a1);
    if ((char)uVar2 == '\0') {
        iVar3 = (**(code **)(*a1 + 0x34))(a1, ar5_01, ar6_00, a3);
        if (iVar3 != 0) {
            uVar2 = (**(code **)(*a1 + 0x34))(a1, ar5_01, ar6_00, a3);
            uVar7 = (u32)((u64)dVar5 >> 0x20);
            *(u32 *)(a0 + 0x348) = uVar2;
            ar5_00 = &g_8c125d48;
            Vec3_assign(auStack_24, &g_8c125d48, ar6_00, a3);
            if (*(int *)(a0 + 0x348) == 3) {
                Vec3_ctor_xyz(auStack_34, ar5_00, ar6_00, a3);
                Vec3_assign(auStack_24, auStack_34, ar6_00, a3);
                ar5_00 = (u8 *)0xffffffff;
                Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
            } else if (*(int *)(a0 + 0x348) == 4) {
                Vec3_ctor_xyz(auStack_44, ar5_00, ar6_00, a3);
                Vec3_assign(auStack_24, auStack_44, ar6_00, a3);
                ar5_00 = (u8 *)0xffffffff;
                Vec3_dtor(auStack_44, 0xffffffff, ar6_00, a3);
            } else {
                *(u32 *)(a0 + 0x348) = 0;
            }
            Vec3_make(a0 + 0x14, ar5_00, ar6_00, a3, auStack_54);
            Vec3_cos_angle(auStack_54, auStack_24, ar6_00, a3);
            if (cVar9 == '\0') {
                dVar5 = (double)CONCAT44(0x40a00000, uVar7);
            } else {
                dVar5 = -7.932637912122029e-251;
            }
            fVar6 = SUB84(dVar5, 0);
            uVar1 = (u64)dVar5 >> 0x20;
            Vec3_dtor(auStack_54, 0xffffffff, ar6_00, a3);
            if (cVar8 == '\0' && fVar6 < (float)uVar1) {
                *(u32 *)(a0 + 0x348) = 0;
            }
            ar5_01 = NULL;
            (**(code **)(*a1 + 0x38))(a1, 0, ar6_00, a3);
            if ((*(int *)(a0 + 0x348) != *(int *)(a0 + 0x344)) && (*(int *)(a0 + 0x344) == 0)) {
                *(u32 *)(a0 + 0x344) = *(u32 *)(a0 + 0x348);
                *(u32 *)(a0 + 0x284) = 0;
                *(u32 *)(a0 + 300) = 0;
                *(u32 *)(a0 + 0x28c) = 0;
            }
        }
        iVar3 = *(int *)(a0 + 0x344);
        if (iVar3 == 0) {
            iVar3 = *(int *)(a0 + 300);
            if (iVar3 == 0) {
                CAnimBody_SetFrame(a0 + 0xb0, ar5_01, ar6_00, a3);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            } else if (iVar3 != 1) {
                if (iVar3 == 2) {
                    if (*(int *)(a0 + 0x27c) == 0) {
                        iVar3 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, ar5_01, ar6_00, a3);
                    } else {
                        iVar3 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, ar5_01, ar6_00, a3);
                    }
                    if ((iVar3 == 7) || (iVar3 == 1)) {
                        *(u32 *)(a0 + 300) = 1;
                    }
                }
                goto LAB_8c0536da;
            }
            iVar3 = *(int *)(a0 + 0x27c);
            if (iVar3 == 0) {
                iVar3 = rand_range(a0, 0, 100);
                if (iVar3 == 0) {
                    a3 = 0;
                    ar6_00 = (u8 *)0xffffffff;
                    ar5_01 = (int *)0x2;
                    CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
                } else {
                    ar5_01 = (int *)game_uses_rand_range_032af8(a0, 0, 2, 10);
                    a3 = 0;
                    ar6_00 = (u8 *)0xffffffff;
                    CAnimBody_SetAnimation(a0 + 0xb0, ar5_01, 0xffffffff, 0);
                }
                CAnimBody_SetFrame(a0 + 0xb0, ar5_01, ar6_00, a3);
            } else if (iVar3 == 3) {
                a3 = 0;
                ar6_00 = (u8 *)0xffffffff;
                ar5_01 = (int *)0xb;
                CAnimBody_SetAnimation(a0 + 0xb0, 0xb, 0xffffffff, 0);
            } else if (iVar3 == 4) {
                a3 = 0;
                ar6_00 = (u8 *)0xffffffff;
                ar5_01 = (int *)0xc;
                CAnimBody_SetAnimation(a0 + 0xb0, 0xc, 0xffffffff, 0);
            }
            rand_float(a0, ar5_01, ar6_00);
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x340) = (int)((u64)dVar5 >> 0x20);
            } else {
                *(double *)(a0 + 0x340) = dVar5;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            *(u32 *)(a0 + 0x2b8) = 3;
        } else if ((iVar3 == 3) || (iVar3 == 4)) {
            if (*(int *)(a0 + 300) == 0) {
                if (*(int *)(a0 + 0x344) == 3) {
                    Vec3_ctor_xyz(auStack_64, ar5_01, ar6_00, a3);
                    Vec3_assign(a0 + 0x54, auStack_64, ar6_00, a3);
                    uVar2 = 0xffffffff;
                    Vec3_dtor(auStack_64, 0xffffffff, ar6_00, a3);
                } else {
                    Vec3_ctor_xyz(auStack_74, ar5_01, ar6_00, a3);
                    Vec3_assign(a0 + 0x54, auStack_74, ar6_00, a3);
                    uVar2 = 0xffffffff;
                    Vec3_dtor(auStack_74, 0xffffffff, ar6_00, a3);
                }
                if (*(int *)(a0 + 0x128) == 0) {
                    if (cVar9 == '\0') {
                        *(u32 *)(a0 + 0x5c) = 0x3f000000;
                    } else {
                        *(u64 *)(a0 + 0x5c) = 0x8c022f543f000000;
                    }
                }
                Vec3_length(a0 + 0x54, uVar2, ar6_00, a3);
                if (*(int *)(a0 + 0x27c) == 0) {
                    *(u32 *)(a0 + 0x28c) = 1;
                    clear_3_words(a0 + 0x2c8, uVar2, ar6_00, a3);
                }
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            } else if (*(int *)(a0 + 300) != 1)
                goto LAB_8c0536da;
            Vec3_ctor_copy(auStack_84, a0 + 0x54, ar6_00, a3);
            ar6_00 = auStack_84;
            iVar3 = game_vec_051c14(a0, a2, ar6_00, a3);
            Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
            if (iVar3 == 0) {
                *(u32 *)(a0 + 300) = 0;
                if (*(int *)(a0 + 0x344) == 3) {
                    *(u32 *)(a0 + 0x27c) = 4;
                } else {
                    *(u32 *)(a0 + 0x27c) = 3;
                }
                *(u32 *)(a0 + 0x344) = 0;
            }
        }
    } else {
        iVar3 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, ar5_01, ar6_00, a3);
        if (iVar3 == 1) {
            *(u32 *)(a0 + 300) = 0;
            if (cVar9 == '\0') {
                *(u32 *)(a0 + 0x340) = 0x3f800000;
            } else {
                *(u64 *)(a0 + 0x340) = CONCAT44(0x3f800000, SUB84(dVar5, 0));
            }
            uVar4 = 0;
            *(u32 *)(a0 + 0x2b8) = 2;
            *(u32 *)(a0 + 0x284) = 0;
        }
    }
LAB_8c0536da:
    Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
    return uVar4;
}

/*
 * get_field_80_s8  0x8c053724
 * called by: game_state_switch_076994, game_uses_CAnimBody_AdvanceFrame_wrap_076750, game_vec_0530e0, game_vec_053730,
 * game_vec_053f24
 */
int get_field_80_s8(int a0) {
    return (int)*(char *)(0x80 + a0);
}

/*
 * game_vec_053730  0x8c053730
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4
 */
u32 game_vec_053730(int a0, int *a1, u32 a2, u8 *a3) {
    u64 uVar1;
    u32 uVar2;
    int iVar3;
    code *ar5_00;
    u32 uVar4;
    u8 *ar5_01;
    u8 *puVar5;
    u8 *ar7_00;
    u32 uVar6;
    double dVar7;
    float fVar9;
    u64 uVar8;
    float in_fr15;
    u32 in_fr14;
    u64 in_xd0;
    bool bVar10;
    char cVar11;
    char cVar12;
    u32 in_stack_fffffed4;
    u32 ain0;
    u8 auStack_c8[16];
    u8 auStack_b8[16];
    u8 auStack_a8[16];
    u8 auStack_98[16];
    u8 auStack_88[16];
    u8 auStack_78[16];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[20];

    cVar12 = '\0';
    cVar11 = '\0';
    uVar6 = 1;
    ar5_00 = Vec3_ctor_zero;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_28, Vec3_ctor_zero, a2);
    timer_stop_94(a0, ar5_00, a2, ar7_00);
    Vec3_assign_f(a0 + 0x90, ar5_00, a2, ar7_00);
    puVar5 = auStack_38;
    Vec3_scale(a0 + 0x14, &g_8c1365ac, puVar5, ar7_00, puVar5);
    Vec3_add(a3, auStack_38, puVar5, ar7_00, auStack_48);
    puVar5 = a3;
    timer_vec_031c74(a0, auStack_48, a3, ar7_00);
    Vec3_dtor(auStack_48, 0xffffffff, puVar5, ar7_00);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, puVar5, ar7_00);
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x28));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x28);
        dVar7 = 52776566443212.8;
    }
    if (cVar11 == '\0') {
        fVar9 = (float)((u64)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar9, SUB84(dVar7, 0) * fVar9);
    } else {
        dVar7 = dVar7 * dVar7;
    }
    if (cVar12 == '\0') {
        *(int *)(a0 + 0x28) = SUB84(dVar7, 0);
    } else {
        *(u64 *)(a0 + 0x28) = in_xd0;
    }
    game_vec_05ae54(a0, uVar4, puVar5, ar7_00);
    uVar2 = get_field_80_s8(a1);
    ain0 = CONCAT31((s32)((u32)in_stack_fffffed4 >> 8), (char)uVar2);
    if ((char)uVar2 == '\0') {
        iVar3 = (**(code **)(*a1 + 0x34))(a1, uVar4, puVar5, ar7_00);
        if (iVar3 != 0) {
            uVar4 = (**(code **)(*a1 + 0x34))(a1, uVar4, puVar5, ar7_00);
            uVar2 = (u32)((u64)dVar7 >> 0x20);
            *(u32 *)(a0 + 0x348) = uVar4;
            ar5_01 = &g_8c125d48;
            Vec3_assign(auStack_28, &g_8c125d48, puVar5, ar7_00);
            if (*(int *)(a0 + 0x348) == 3) {
                Vec3_ctor_xyz(auStack_58, ar5_01, puVar5, ar7_00);
                Vec3_assign(auStack_28, auStack_58, puVar5, ar7_00);
                ar5_01 = (u8 *)0xffffffff;
                Vec3_dtor(auStack_58, 0xffffffff, puVar5, ar7_00);
            } else if (*(int *)(a0 + 0x348) == 4) {
                Vec3_ctor_xyz(auStack_68, ar5_01, puVar5, ar7_00);
                Vec3_assign(auStack_28, auStack_68, puVar5, ar7_00);
                ar5_01 = (u8 *)0xffffffff;
                Vec3_dtor(auStack_68, 0xffffffff, puVar5, ar7_00);
            } else {
                *(u32 *)(a0 + 0x348) = 0;
            }
            Vec3_make(a0 + 0x14, ar5_01, puVar5, ar7_00, auStack_78);
            Vec3_cos_angle(auStack_78, auStack_28, puVar5, ar7_00);
            if (cVar12 == '\0') {
                dVar7 = (double)CONCAT44(0x41200000, uVar2);
            } else {
                dVar7 = -7.932637925129825e-251;
            }
            bVar10 = cVar11 == '\0';
            fVar9 = SUB84(dVar7, 0);
            uVar1 = (u64)dVar7 >> 0x20;
            Vec3_dtor(auStack_78, 0xffffffff, puVar5, ar7_00);
            if (bVar10 && fVar9 < (float)uVar1) {
                *(u32 *)(a0 + 0x348) = 0;
            }
            uVar4 = 0;
            (**(code **)(*a1 + 0x38))(a1, 0, puVar5, ar7_00);
            if ((*(int *)(a0 + 0x348) != *(int *)(a0 + 0x344)) && (*(int *)(a0 + 0x344) == 0)) {
                *(u32 *)(a0 + 0x344) = *(u32 *)(a0 + 0x348);
                *(u32 *)(a0 + 0x284) = 0;
                *(u32 *)(a0 + 300) = 0;
            }
        }
        iVar3 = *(int *)(a0 + 0x344);
        if (iVar3 == 0) {
            iVar3 = *(int *)(a0 + 300);
            if (iVar3 == 0) {
                CAnimBody_SetFrame(a0 + 0xb0, uVar4, puVar5, ar7_00);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            } else if (iVar3 != 1) {
                if (iVar3 == 2) {
                    CAnimBody_GetCurFrame(a0 + 0xb0, uVar4, puVar5, ar7_00);
                    if (cVar12 == '\0') {
                        uVar8 = CONCAT44(*(u32 *)(a0 + 0x24c), (int)((u64)dVar7 >> 0x20));
                    } else {
                        uVar8 = *(u64 *)(a0 + 0x24c);
                    }
                    if (cVar11 != '\0' || (float)((u64)uVar8 >> 0x20) <= (float)uVar8) {
                        iVar3 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, uVar4, puVar5, ar7_00);
                        if (iVar3 == 7) {
                            rand_float(a0, uVar4, puVar5);
                            if (cVar12 == '\0') {
                                *(int *)(a0 + 0x248) = (int)((u64)uVar8 >> 0x20);
                            } else {
                                *(u64 *)(a0 + 0x248) = uVar8;
                            }
                            *(u32 *)(a0 + 300) = 1;
                        }
                    } else {
                        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar4, puVar5, ar7_00);
                    }
                }
                goto LAB_8c053eda;
            }
            iVar3 = *(int *)(a0 + 0x27c);
            if (iVar3 == 0) {
                ar7_00 = NULL;
                puVar5 = (u8 *)0xffffffff;
                uVar4 = 0;
                CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
            } else if (iVar3 == 3) {
                ar7_00 = NULL;
                puVar5 = (u8 *)0xffffffff;
                uVar4 = 0xb;
                CAnimBody_SetAnimation(a0 + 0xb0, 0xb, 0xffffffff, 0);
            } else if (iVar3 == 4) {
                ar7_00 = NULL;
                puVar5 = (u8 *)0xffffffff;
                uVar4 = 0xc;
                CAnimBody_SetAnimation(a0 + 0xb0, 0xc, 0xffffffff, 0);
            }
            Vec3_assign_f(a0 + 0x248, uVar4, puVar5, ar7_00);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            *(u32 *)(a0 + 0x2b8) = 3;
            rand_float(a0, uVar4, puVar5);
            if (cVar12 == '\0') {
                *(int *)(a0 + 0x248) = (int)((u64)dVar7 >> 0x20);
            } else {
                *(double *)(a0 + 0x248) = dVar7;
            }
        } else if ((iVar3 == 3) || (iVar3 == 4)) {
            iVar3 = *(int *)(a0 + 300);
            if (iVar3 == 0) {
                iVar3 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar4, puVar5, ar7_00);
                if (iVar3 == 1) {
                    if (*(int *)(a0 + 0x344) == 3) {
                        rand_float(a0, uVar4, puVar5);
                        rand_float(a0, uVar4, puVar5);
                        Vec3_ctor_xyz(auStack_88, uVar4, puVar5, ar7_00);
                        Vec3_assign(a0 + 0x54, auStack_88, puVar5, ar7_00);
                        Vec3_dtor(auStack_88, 0xffffffff, puVar5, ar7_00);
                    } else {
                        rand_float(a0, uVar4, puVar5);
                        rand_float(a0, uVar4, puVar5);
                        Vec3_ctor_xyz(auStack_98, uVar4, puVar5, ar7_00);
                        Vec3_assign(a0 + 0x54, auStack_98, puVar5, ar7_00);
                        Vec3_dtor(auStack_98, 0xffffffff, puVar5, ar7_00);
                    }
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                }
            } else if (iVar3 == 1) {
                Vec3_make(a0 + 0x14, uVar4, puVar5, ar7_00, auStack_a8);
                Vec3_make(a0 + 0x54, uVar4, puVar5, ar7_00, auStack_b8);
                Vec3_cos_angle(auStack_a8, auStack_b8, puVar5, ar7_00);
                if (cVar12 == '\0') {
                    in_fr15 = (float)((u64)dVar7 >> 0x20);
                }
                Vec3_dtor(auStack_b8, 0xffffffff, puVar5, ar7_00);
                uVar2 = SUB84(dVar7, 0);
                uVar4 = 0xffffffff;
                Vec3_dtor(auStack_a8, 0xffffffff, puVar5, ar7_00);
                if (cVar12 == '\0') {
                    dVar7 = (double)CONCAT44(0x41200000, uVar2);
                } else {
                    dVar7 = 6.37138561414139e-312;
                }
                if (cVar11 == '\0') {
                    bVar10 = (float)((u64)dVar7 >> 0x20) < in_fr15;
                } else {
                    bVar10 = dVar7 < (double)CONCAT44(in_fr14, in_fr15);
                }
                if (bVar10) {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    *(u32 *)(a0 + 0x298) = 1;
                } else {
                    *(u32 *)(a0 + 300) = 0;
                    if (*(int *)(a0 + 0x344) == 3) {
                        *(u32 *)(a0 + 0x27c) = 4;
                    } else {
                        *(u32 *)(a0 + 0x27c) = 3;
                    }
                    *(u32 *)(a0 + 0x344) = 0;
                }
                CAnimBody_SetFrame(a0 + 0xb0, uVar4, puVar5, ar7_00);
            } else if (iVar3 == 2) {
                Vec3_ctor_copy(auStack_c8, a0 + 0x54, puVar5, ar7_00);
                ar7_00 = auStack_c8;
                iVar3 = game_vec_04e2d0(a0, a3, a3, ar7_00);
                Vec3_dtor(auStack_c8, 0xffffffff, a3, ar7_00);
                puVar5 = a3;
                if (iVar3 == 0) {
                    puVar5 = (u8 *)0x12c;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + -1;
                }
            }
        }
    } else {
        iVar3 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, CAnimBody_AdvanceFrame_wrapper, puVar5, ar7_00);
        if (iVar3 == 1) {
            *(u32 *)(a0 + 300) = 0;
            uVar6 = 0;
            *(u32 *)(a0 + 0x2b8) = 2;
            *(u32 *)(a0 + 0x284) = 0;
        }
    }
LAB_8c053eda:
    Vec3_dtor(auStack_28, 0xffffffff, puVar5, ar7_00);
    return uVar6;
}

/*
 * game_vec_053f24  0x8c053f24
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4
 */
u32 game_vec_053f24(int a0, int *a1, u32 a2, u32 a3) {
    u64 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u8 *ar5_00;
    u32 uVar6;
    code *ar5_01;
    code *ar6_00;
    u32 *ar7_00;
    u32 uVar7;
    float fVar8;
    u64 in_dr0;
    u64 uVar9;
    double dVar10;
    float in_fr15;
    u32 in_fr14;
    bool bVar11;
    char cVar12;
    char cVar13;
    u32 in_stack_fffffe78;
    u32 ain0;
    u8 auStack_f4[16];
    u8 auStack_e4[16];
    u8 auStack_d4[16];
    u8 auStack_c4[16];
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u32 auStack_44[4];

    cVar13 = '\0';
    cVar12 = '\0';
    uVar7 = 1;
    ar7_00 = auStack_44;
    ar6_00 = (code *)&g_8c1365b0;
    auStack_44[0] = g_8c1365b0;
    auStack_44[1] = g_8c1365b4;
    auStack_44[2] = g_8c1365b8;
    auStack_44[3] = g_8c1365bc;
    uVar6 = g_8c1365cc;
    Vec3_ctor_zero(auStack_54, g_8c1365cc, &g_8c1365b0);
    Vec3_assign_f(a0 + 0x90, uVar6, ar6_00, ar7_00);
    uVar2 = get_field_80_s8(a1);
    ain0 = CONCAT31((s32)((u32)in_stack_fffffe78 >> 8), (char)uVar2);
    if ((char)uVar2 == '\0') {
        iVar5 = (**(code **)(*a1 + 0x34))(a1, uVar6, ar6_00, ar7_00);
        if (iVar5 != 0) {
            uVar6 = (**(code **)(*a1 + 0x34))(a1, uVar6, ar6_00, ar7_00);
            uVar2 = (u32)((u64)in_dr0 >> 0x20);
            *(u32 *)(a0 + 0x348) = uVar6;
            ar5_00 = &g_8c125d48;
            Vec3_assign(auStack_54, &g_8c125d48, ar6_00, ar7_00);
            if (*(int *)(a0 + 0x348) == 3) {
                Vec3_ctor_xyz(auStack_64, Vec3_ctor_xyz, ar6_00, ar7_00);
                Vec3_assign(auStack_54, auStack_64, ar6_00, ar7_00);
                Vec3_dtor(auStack_64, 0xffffffff, ar6_00, ar7_00);
            } else if (*(int *)(a0 + 0x348) == 4) {
                Vec3_ctor_xyz(auStack_74, ar5_00, ar6_00, ar7_00);
                Vec3_assign(auStack_54, auStack_74, ar6_00, ar7_00);
                Vec3_dtor(auStack_74, 0xffffffff, ar6_00, ar7_00);
            } else {
                *(u32 *)(a0 + 0x348) = 0;
            }
            Vec3_make(a0 + 0x14, Vec3_make, ar6_00, ar7_00, auStack_84);
            Vec3_cos_angle(auStack_84, auStack_54, ar6_00, ar7_00);
            if (cVar13 == '\0') {
                in_dr0 = CONCAT44(0x41200000, uVar2);
            } else {
                in_dr0 = 0x8841200000;
            }
            bVar11 = cVar12 == '\0';
            fVar8 = (float)in_dr0;
            uVar1 = (u64)in_dr0 >> 0x20;
            Vec3_dtor(auStack_84, 0xffffffff, ar6_00, ar7_00);
            if (bVar11 && fVar8 < (float)uVar1) {
                *(u32 *)(a0 + 0x348) = 0;
            }
            uVar6 = 0;
            (**(code **)(*a1 + 0x38))(a1, 0, ar6_00, ar7_00);
            if ((*(int *)(a0 + 0x348) != *(int *)(a0 + 0x344)) && (*(int *)(a0 + 0x344) == 0)) {
                *(u32 *)(a0 + 0x344) = *(u32 *)(a0 + 0x348);
                uVar6 = 0;
                *(u32 *)(a0 + 0x284) = 0;
                *(u32 *)(a0 + 300) = 0;
            }
        }
        if (*(int *)(a0 + 0x324) == 1) {
            uVar6 = 0;
            *(u32 *)(a0 + 0x344) = 0;
            *(u32 *)(a0 + 0x27c) = 3;
        }
        iVar5 = *(int *)(a0 + 0x344);
        if (iVar5 == 0) {
            iVar5 = *(int *)(a0 + 300);
            if ((iVar5 < 5) && (-1 < iVar5)) {
                switch (iVar5) {
                case 0:
                    CAnimBody_SetFrame(a0 + 0xb0, iVar5, ar6_00, ar7_00);
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                case 1:
                    if (*(int *)(a0 + 0x324) == 1) {
                        *(u32 *)(a0 + 0x27c) = 3;
                    }
                    ar6_00 = (code *)0x64;
                    iVar5 = 0;
                    iVar4 = rand_range(a0, 0, 100);
                    if (iVar4 < 0x33) {
                        iVar4 = 0;
                    } else {
                        ar6_00 = (code *)0x9;
                        uVar6 = 1;
                        iVar4 = rand_range(a0, 1, 9);
                        uVar6 = get_field_94_02aaa4(a1);
                        iVar5 = 5;
                        iVar3 = libgcc_divide_helper_0101e4(uVar6, 5);
                        if (iVar3 == 1) {
                            iVar4 = 7;
                        } else if (iVar3 == 4) {
                            iVar4 = 7;
                        }
                    }
                    if (*(int *)(a0 + 0x128) == 3) {
                        Vec3_assign_f(a0 + 0x248, iVar5, ar6_00, ar7_00);
                    } else {
                        Vec3_assign_f(a0 + 0x248, iVar5, ar6_00, ar7_00);
                    }
                    iVar3 = *(int *)(a0 + 0x27c);
                    if (iVar3 == 0) {
                        ar7_00 = NULL;
                        ar6_00 = (code *)0xffffffff;
                        iVar5 = iVar4 + 0x38;
                        CAnimBody_SetAnimation(a0 + 0xb0, iVar5, 0xffffffff, 0);
                    } else if (iVar3 == 3) {
                        ar7_00 = NULL;
                        ar6_00 = (code *)0xffffffff;
                        iVar5 = iVar4 + 0x26;
                        CAnimBody_SetAnimation(a0 + 0xb0, iVar5, 0xffffffff, 0);
                    } else if (iVar3 == 4) {
                        ar7_00 = NULL;
                        ar6_00 = (code *)0xffffffff;
                        iVar5 = iVar4 + 0x2f;
                        CAnimBody_SetAnimation(a0 + 0xb0, iVar5, 0xffffffff, 0);
                    }
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    *(u32 *)(a0 + 0x2b8) = 3;
                    *(u32 *)(a0 + 0x280) = auStack_44[iVar4];
                    rand_float(a0, iVar5, ar6_00);
                    if (cVar13 == '\0') {
                        *(int *)(a0 + 0x248) = (int)((u64)in_dr0 >> 0x20);
                    } else {
                        *(u64 *)(a0 + 0x248) = in_dr0;
                    }
                case 2:
                    uVar6 = (u32)((u64)in_dr0 >> 0x20);
                    CAnimBody_GetCurFrame(a0 + 0xb0, iVar5, ar6_00, ar7_00);
                    if (cVar13 == '\0') {
                        uVar9 = CONCAT44(*(u32 *)(a0 + 0x24c), uVar6);
                    } else {
                        uVar9 = *(u64 *)(a0 + 0x24c);
                    }
                    if (cVar12 != '\0' || (float)((u64)uVar9 >> 0x20) <= (float)uVar9) {
                        if (*(int *)(a0 + 0x324) == 0) {
                            iVar4 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, iVar5, ar6_00, ar7_00);
                            if (iVar4 == 7) {
                                rand_float(a0, iVar5, ar6_00);
                                if (cVar13 == '\0') {
                                    *(int *)(a0 + 0x248) = (int)((u64)uVar9 >> 0x20);
                                } else {
                                    *(u64 *)(a0 + 0x248) = uVar9;
                                }
                                iVar5 = *(int *)(a0 + 0x280) + -1;
                                *(int *)(a0 + 0x280) = iVar5;
                                if (iVar5 < 0) {
                                    ar6_00 = (code *)0x64;
                                    iVar5 = rand_range(a0, 0, 100);
                                    if (iVar5 < 5) {
                                        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                                    } else {
                                        *(u32 *)(a0 + 300) = 1;
                                    }
                                    *(u32 *)(a0 + 0x280) = 0;
                                }
                            }
                        } else {
                            iVar5 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar5, ar6_00, ar7_00);
                            if (iVar5 == 1) {
                                *(u32 *)(a0 + 300) = 0;
                                Vec3_dtor(auStack_54, 0xffffffff, ar6_00, ar7_00);
                                return 0;
                            }
                        }
                    } else {
                        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar5, ar6_00, ar7_00);
                    }
                    break;
                case 3:
                    iVar5 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, iVar5, ar6_00, ar7_00);
                    if (iVar5 == 1) {
                        ar7_00 = NULL;
                        ar6_00 = (code *)0xffffffff;
                        uVar6 = 2;
                        CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
                        CAnimBody_SetFrame(a0 + 0xb0, uVar6, ar6_00, ar7_00);
                        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    }
                    break;
                case 4:
                    iVar5 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, iVar5, ar6_00, ar7_00);
                    if (iVar5 == 1) {
                        *(u32 *)(a0 + 300) = 0;
                    }
                }
            }
        } else if ((iVar5 == 3) || (iVar5 == 4)) {
            iVar5 = *(int *)(a0 + 300);
            if (iVar5 == 0) {
                iVar5 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar6, ar6_00, ar7_00);
                if (iVar5 == 1) {
                    iVar5 = *(int *)(a0 + 0x344);
                    if (iVar5 == 3) {
                        rand_float(a0, 3, ar6_00);
                        rand_float(a0, iVar5, ar6_00);
                        Vec3_ctor_xyz(auStack_94, iVar5, ar6_00, ar7_00);
                        Vec3_add(a3, auStack_94, ar6_00, ar7_00, auStack_a4);
                        Vec3_assign(a0 + 0x54, auStack_a4, ar6_00, ar7_00);
                        Vec3_dtor(auStack_a4, 0xffffffff, ar6_00, ar7_00);
                        Vec3_dtor(auStack_94, 0xffffffff, ar6_00, ar7_00);
                    } else {
                        ar5_01 = rand_float;
                        rand_float(a0, rand_float, ar6_00);
                        rand_float(a0, ar5_01, ar6_00);
                        Vec3_ctor_xyz(auStack_b4, Vec3_ctor_xyz, ar6_00, ar7_00);
                        Vec3_add(a3, auStack_b4, ar6_00, ar7_00, auStack_c4);
                        Vec3_assign(a0 + 0x54, auStack_c4, ar6_00, ar7_00);
                        Vec3_dtor(auStack_c4, 0xffffffff, ar6_00, ar7_00);
                        Vec3_dtor(auStack_b4, 0xffffffff, ar6_00, ar7_00);
                    }
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                }
            } else if (iVar5 == 1) {
                Vec3_make(a0 + 0x14, uVar6, ar6_00, ar7_00, auStack_d4);
                uVar6 = a3;
                Vec3_sub(a0 + 0x54, a3, ar6_00, ar7_00, auStack_e4);
                Vec3_make(auStack_e4, uVar6, ar6_00, ar7_00, auStack_f4);
                Vec3_cos_angle(auStack_d4, auStack_f4, ar6_00, ar7_00);
                if (cVar13 == '\0') {
                    in_fr15 = (float)((u64)in_dr0 >> 0x20);
                }
                Vec3_dtor(auStack_f4, 0xffffffff, ar6_00, ar7_00);
                uVar2 = (u32)in_dr0;
                Vec3_dtor(auStack_e4, 0xffffffff, ar6_00, ar7_00);
                uVar6 = 0xffffffff;
                Vec3_dtor(auStack_d4, 0xffffffff, ar6_00, ar7_00);
                if (cVar13 == '\0') {
                    dVar10 = (double)CONCAT44(0x41200000, uVar2);
                } else {
                    dVar10 = -9.376284372703036e-251;
                }
                if (cVar12 == '\0') {
                    bVar11 = (float)((u64)dVar10 >> 0x20) < in_fr15;
                } else {
                    bVar11 = dVar10 < (double)CONCAT44(in_fr14, in_fr15);
                }
                if (bVar11) {
                    ar6_00 = (code *)(a0 + 0x54);
                    game_vec_057b6c(a0, a3, ar6_00, ar7_00);
                    uVar6 = 300;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                } else {
                    *(u32 *)(a0 + 300) = 0;
                    if (*(int *)(a0 + 0x344) == 3) {
                        *(u32 *)(a0 + 0x27c) = 4;
                    } else {
                        *(u32 *)(a0 + 0x27c) = 3;
                    }
                    *(u32 *)(a0 + 0x344) = 0;
                }
                CAnimBody_SetFrame(a0 + 0xb0, uVar6, ar6_00, ar7_00);
            } else if (iVar5 == 2) {
                ar6_00 = game_vec_057e58;
                iVar5 = game_vec_057e58(a0, uVar6, game_vec_057e58, ar7_00);
                if (iVar5 == 0) {
                    ar6_00 = (code *)0x12c;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + -1;
                }
            }
        }
    } else {
        iVar5 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar6, ar6_00, ar7_00);
        if (iVar5 == 1) {
            *(u32 *)(a0 + 300) = 0;
            uVar7 = 0;
            *(u32 *)(a0 + 0x2b8) = 2;
            *(u32 *)(a0 + 0x284) = 0;
        }
    }
    Vec3_dtor(auStack_54, 0xffffffff, ar6_00, ar7_00);
    return uVar7;
}

/*
 * creature_action_motion4e_step  0x8c054a14
 * action step: starts motion 0x4e, then advances it, playing a random sound 0x19..0x1b at six points through it;
 * returns 0 when it ends called by: Vec3_state_switch_03f4a4
 */
u32 creature_action_motion4e_step(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    double in_dr0;
    char cVar5;
    char cVar6;
    u64 uStack_14;

    cVar6 = '\0';
    cVar5 = '\0';
    uVar3 = 1;
    *(u32 *)(a0 + 0x2f0) = 0xffffffff;
    if (*(int *)(a0 + 300) == 0) {
        a3 = 0;
        a2 = 0xffffffff;
        uVar2 = 0x4e;
        CAnimBody_SetAnimation(a0 + 0xb0, 0x4e, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar2, a2, a3);
        *(u32 *)(a0 + 0x280) = 0;
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else {
        uVar2 = a1;
        if (*(int *)(a0 + 300) != 1) {
            return 1;
        }
    }
    iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, a2, a3);
    if (iVar1 == 1) {
        flags6_set_all(a0 + 0x1fc, uVar2, a2);
        uVar3 = 0;
        *(u32 *)(a0 + 300) = 0;
    } else {
        CAnimBody_GetCurFrame(a0 + 0xb0, uVar2, a2, a3);
        uStack_14 = in_dr0;
        if (cVar6 == '\0') {
            uStack_14 = (double)CONCAT44(iVar1, (int)((u64)in_dr0 >> 0x20));
        }
        iVar1 = get_motion_data(a0 + 0xb0, 0x4e, a2, a3);
        uVar4 = SUB84(in_dr0, 0);
        uVar2 = libgcc_divide_helper_0101e4(iVar1 + -1, 6);
        if (cVar6 == '\0') {
            uStack_14 = (double)CONCAT44((u32)uStack_14, uVar4);
        }
        if (cVar5 == '\0') {
            iVar1 = (int)(float)((u64)uStack_14 >> 0x20);
        } else {
            iVar1 = (int)uStack_14;
        }
        iVar1 = libgcc_divide_helper_01031c(iVar1, uVar2, a2);
        if (iVar1 == 0) {
            uVar2 = rand_range(a0, 0x19, 0x1b);
            se_play_at_object(a0, uVar2, a1, *(u32 *)(a0 + 0x244));
            iVar1 = *(int *)(a0 + 0x280);
            *(int *)(a0 + 0x280) = iVar1 + 1;
            *(int *)(a0 + 0x2f0) = iVar1;
        }
    }
    return uVar3;
}

/*
 * game_vec_054b74  0x8c054b74
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4
 */
u32 game_vec_054b74(int a0, u32 a1, u32 a2, int a3) {
    int iVar1;
    u32 uVar2;
    u32 in_fr1;
    double dVar3;
    u64 in_dr14;
    double dVar4;
    bool bVar5;
    char cVar6;

    cVar6 = '\0';
    dVar3 = (double)CONCAT44(0x40200000, in_fr1);
    dVar4 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(float *)(a0 + 0x48) * 2.5);
    if (*(int *)(a0 + 0x31c) != 0) {
        return 0;
    }
    while (true) {
        iVar1 = *(int *)(a0 + 300);
        if (4 < iVar1) {
            return 1;
        }
        if (iVar1 < 0)
            break;
        switch (iVar1) {
        case 0:
            if (a3 == 1) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            } else {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 2;
            }
            break;
        case 1:
            iVar1 = game_uses_get_field_1c_057164(a0, a1, a2, a3);
            if (iVar1 != 0) {
                return 1;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 2;
            *(u32 *)(a0 + 0x40) = 5;
            return 1;
        case 2:
            iVar1 = game_vec_055c38(a0, a1, a0 + 0x34c, a3);
            if (iVar1 != 0) {
                return 1;
            }
            *(u32 *)(a0 + 0x178) = 0;
            *(u32 *)(a0 + 0x40) = 5;
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            return 1;
        case 3:
            uVar2 = a2;
            iVar1 = game_state_switch_04c314(a0, a1, a2);
            if (iVar1 == 0) {
                *(u32 *)(a0 + 300) = 4;
            } else {
                Vec3_distance_sq(a1, a2, uVar2, a3);
                if (cVar6 == '\0') {
                    bVar5 = (float)((u64)dVar3 >> 0x20) < SUB84(dVar4, 0);
                } else {
                    bVar5 = dVar3 < dVar4;
                }
                if ((bVar5) && (*(int *)(a0 + 0x304) == 1)) {
                    *(u32 *)(a0 + 300) = 4;
                }
            }
            if (*(int *)(a0 + 0x21c) != 1) {
                return 1;
            }
            *(u32 *)(a0 + 300) = 4;
            return 1;
        case 4:
            uVar2 = a2;
            iVar1 = game_uses_get_field_1c_057164(a0, a1, a2, a3);
            if (iVar1 != 0) {
                return 1;
            }
            Vec3_assign(a0 + 600, a2, uVar2, a3);
            *(u32 *)(a0 + 300) = 0;
            *(u32 *)(a0 + 0x290) = 0;
            *(u32 *)(a0 + 0x2b8) = 2;
            *(u32 *)(a0 + 0x280) = 0;
            return 0;
        }
    }
    return 1;
}

/*
 * game_vec_054d6c  0x8c054d6c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4, game_vec_03c94c
 */
u32 game_vec_054d6c(int a0, u32 a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    int ar6_00;
    int ar7_00;
    u32 uVar3;
    u32 in_fr1;
    double dVar4;
    double in_dr14;
    bool bVar5;
    char cVar6;
    char cVar7;
    u8 auStack_2c[20];

    cVar7 = '\0';
    cVar6 = '\0';
    uVar3 = 1;
    iVar2 = a2;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_copy(auStack_2c, a2, a2, a3);
    if (cVar7 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(a0 + 0x48));
        dVar4 = (double)CONCAT44(0x40200000, in_fr1);
    } else {
        dVar4 = 6.3713027236808e-312;
    }
    if (cVar6 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) * (float)((u64)dVar4 >> 0x20));
    } else {
        in_dr14 = in_dr14 * dVar4;
    }
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        *(u32 *)(a0 + 0x40) = 5;
        CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, iVar2, ar6_00, ar7_00);
        if (*(int *)(a0 + 0x128) < 3) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 2;
        } else if (a3 == 1) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        } else {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 2;
        }
    } else if (iVar1 == 1) {
        ar6_00 = a0 + 0x34c;
        iVar2 = game_state_switch_0564c4(a0, a1, ar6_00, a3);
        if (iVar2 == 0) {
            *(u32 *)(a0 + 0x178) = 0;
            *(u32 *)(a0 + 0x40) = 5;
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        }
        ar7_00 = a3;
        if ((*(int *)(a0 + 0x2b8) == 2) && (*(int *)(a0 + 0x21c) == 1)) {
            *(u32 *)(a0 + 300) = 3;
        }
    } else if (iVar1 == 2) {
        ar6_00 = a2;
        iVar2 = pure_virtual_stub();
        if (iVar2 == 0) {
            *(u32 *)(a0 + 300) = 3;
        } else {
            Vec3_distance_sq(a1, a2, ar6_00, ar7_00);
            if (cVar6 == '\0') {
                bVar5 = (float)((u64)dVar4 >> 0x20) < SUB84(in_dr14, 0);
            } else {
                bVar5 = dVar4 < in_dr14;
            }
            if ((bVar5) && (*(int *)(a0 + 0x304) == 1)) {
                *(u32 *)(a0 + 300) = 3;
            }
        }
        if (*(int *)(a0 + 0x21c) == 1) {
            *(u32 *)(a0 + 300) = 3;
        }
    } else if (iVar1 == 3) {
        uVar3 = 0;
        *(u32 *)(a0 + 300) = 0;
        Vec3_assign(a0 + 600, a2, ar6_00, ar7_00);
        *(u32 *)(a0 + 0x290) = 0;
        *(u32 *)(a0 + 0x40) = 5;
        *(u32 *)(a0 + 0x280) = 0;
    }
    Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, ar7_00);
    return uVar3;
}

/*
 * game_vec_054f7c  0x8c054f7c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_vec_03c94c
 */
u32 game_vec_054f7c(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u8 *ar5_00;
    u32 uVar2;
    int ar6_00;
    u32 uVar3;
    u32 uVar4;
    u64 in_dr0;
    u64 uVar5;
    double dVar6;
    float in_fr15;
    u32 in_fr14;
    char cVar7;
    char cVar8;
    int in_stack_00000000;
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[12];
    u8 auStack_38[16];
    u8 auStack_28[4];
    u32 uStack_24;
    u32 uStack_20;

    cVar8 = '\0';
    cVar7 = '\0';
    uVar3 = 1;
    uVar2 = a1;
    ar6_00 = a2;
    Vec3_ctor_xyz(auStack_28, a1, a2, a3);
    if (cVar8 == '\0') {
        in_fr15 = 1.5;
    }
    Vec3_ctor_zero(auStack_38, uVar2, ar6_00);
    clear_3_words_102748(auStack_44);
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        if ((in_stack_00000000 == 0) || (in_stack_00000000 == 2)) {
            free_if_nonnull_wrap_102790(auStack_44, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_38, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_28, 0xffffffff, ar6_00, a3);
            return 0;
        }
        se_play_at_object(a0, 7, a1, *(u32 *)(a0 + 0x244));
        uVar4 = (u32)in_dr0;
        a3 = 0;
        ar6_00 = -1;
        uVar2 = 5;
        CAnimBody_SetAnimation(a0 + 0xb0, 5, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar2, ar6_00, a3);
        Vec3_sub(a2, a1, ar6_00, a3, auStack_54);
        Vec3_normalize(auStack_54, a1, ar6_00, a3);
        Vec3_assign(a0 + 0x2a8, auStack_64, ar6_00, a3);
        Vec3_dtor(auStack_64, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_54, 0xffffffff, ar6_00, a3);
        ar5_00 = &g_8c1365d4;
        Vec3_scale_assign(a0 + 0x2a8, &g_8c1365d4);
        if (cVar8 == '\0') {
            uVar5 = CONCAT44(uStack_24, uVar4);
            *(u32 *)(a0 + 0x2ac) = uStack_24;
        } else {
            uVar5 = CONCAT44(uStack_20, uStack_24);
            *(u64 *)(a0 + 0x2ac) = uVar5;
        }
        timer_stop_94(a0, ar5_00, ar6_00, a3);
        if (cVar8 == '\0') {
            *(u32 *)(a0 + 0xa0) = 0;
        } else {
            *(u64 *)(a0 + 0xa0) = uVar5 & 0xffffffff;
        }
        *(u32 *)(a0 + 0x2e8) = 1;
        *(u32 *)(a0 + 0x280) = 0;
        if (cVar8 == '\0') {
            *(u32 *)(a0 + 0x2c) = 0;
        } else {
            *(u64 *)(a0 + 0x2c) = uVar5 & 0xffffffff;
        }
        Vec3_assign(a0 + 0x2d4, a0 + 0x2a8, ar6_00, a3);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else if (iVar1 == 1) {
        iVar1 = a0 + 0x2d4;
        Vec3_assign(a0 + 0x2a8, iVar1, ar6_00, a3);
        uVar2 = (u32)in_dr0;
        *(u32 *)(a0 + 0x2e8) = 1;
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar1, ar6_00, a3);
        if (cVar8 == '\0') {
            dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x2ac), uVar2);
        } else {
            dVar6 = *(double *)(a0 + 0x2ac);
        }
        if (cVar7 == '\0') {
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - in_fr15, SUB84(dVar6, 0));
        } else {
            dVar6 = dVar6 - (double)CONCAT44(in_fr14, in_fr15);
        }
        if (cVar8 == '\0') {
            *(int *)(a0 + 0x2ac) = (int)((u64)dVar6 >> 0x20);
        } else {
            *(double *)(a0 + 0x2ac) = dVar6;
        }
        Vec3_normalize(a0 + 0x2a8, iVar1, ar6_00, a3);
        Vec3_assign(a0 + 0x14, auStack_74, ar6_00, a3);
        Vec3_dtor(auStack_74, 0xffffffff, ar6_00, a3);
        Vec3_assign(a0 + 0x80, a0 + 0x14, ar6_00, a3);
        Vec3_assign(auStack_38, a0 + 0x2a8, ar6_00, a3);
        if ((in_stack_00000000 == 0) || (in_stack_00000000 == 2)) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            Vec3_scale_assign(a0 + 0x2a8, &g_8c1365d8);
        }
        Vec3_assign(a0 + 0x2d4, a0 + 0x2a8, ar6_00, a3);
    } else {
        if (iVar1 == 2) {
            game_vec_05ae54(a0, uVar2, ar6_00, a3);
            Vec3_length_sq(a0 + 0x2d4, uVar2, ar6_00, a3);
            if (cVar8 == '\0') {
                *(int *)(a0 + 0x28) = (int)((u64)in_dr0 >> 0x20);
            } else {
                *(u64 *)(a0 + 0x28) = in_dr0;
            }
            Vec3_normalize(a0 + 0x2d4, uVar2, ar6_00, a3);
            Vec3_assign(a0 + 0x14, auStack_84, ar6_00, a3);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
            vec3_clear(a0 + 0x2d4, uVar2, ar6_00, a3);
            vec3_clear(a0 + 0x2a8, uVar2, ar6_00, a3);
            Vec3_assign(a0 + 0x80, a0 + 0x14, ar6_00, a3);
            Vec3_scale(auStack_38, a0 + 0x48, ar6_00, a3, auStack_94);
            Vec3_scale(auStack_94, &g_8c1365dc, ar6_00, a3, auStack_a4);
            Vec3_add(auStack_a4, a1, ar6_00, a3, auStack_b4);
            Vec3_assign(a0 + 0x54, auStack_b4, ar6_00, a3);
            Vec3_dtor(auStack_b4, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_a4, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_94, 0xffffffff, ar6_00, a3);
            *(u32 *)(a0 + 0x40) = 1;
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        } else if (iVar1 != 3)
            goto LAB_8c0553ee;
        ar6_00 = a0 + 0x54;
        iVar1 = pure_virtual_stub();
        if (iVar1 == 0) {
            uVar3 = 0;
            *(u32 *)(a0 + 300) = 0;
            *(u32 *)(a0 + 0x2e8) = 0;
            *(u32 *)(a0 + 0x40) = 1;
        }
    }
LAB_8c0553ee:
    free_if_nonnull_wrap_102790(auStack_44, 0xffffffff, ar6_00, a3);
    Vec3_dtor(auStack_38, 0xffffffff, ar6_00, a3);
    Vec3_dtor(auStack_28, 0xffffffff, ar6_00, a3);
    return uVar3;
}

/*
 * game_vec_055490  0x8c055490
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4, game_vec_03c94c
 */
u32 game_vec_055490(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 *ar5_00;
    u32 uVar3;
    u32 *ar6_00;
    u32 uVar4;
    u32 in_fr1;
    u64 uVar5;
    code *pcVar6;
    char cVar7;
    u32 in_stack_00000000;
    u64 uStack_84;
    u8 auStack_70[16];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u8 auStack_20[20];

    cVar7 = '\0';
    uVar4 = 1;
    uVar2 = a1;
    Vec3_ctor_zero(auStack_20, a1, a2);
    Vec3_ctor_zero(auStack_30, uVar2, a2);
    if (*(int *)(a0 + 300) == 0) {
        uVar5 = (u64)in_fr1;
        if (cVar7 == '\0') {
            *(u32 *)(a0 + 0x2c) = 0;
        } else {
            *(u64 *)(a0 + 0x2c) = uVar5;
        }
        iVar1 = a0 + 0x14;
        Vec3_assign(auStack_30, iVar1, a2, a3);
        uVar2 = (u32)uVar5;
        Vec3_assign_f(a0 + 0x14, iVar1, a2, a3);
        ar6_00 = &g_8c125bf0;
        if (cVar7 == '\0') {
            uVar5 = CONCAT44(0x40400000, uVar2);
        } else {
            uVar5 = 0x41a0000040400000;
        }
        CMushroomerBody_vec_032518(a0, a1, &g_8c125bf0, in_stack_00000000);
        Vec3_assign(a0 + 0x54, auStack_40, ar6_00, in_stack_00000000);
        Vec3_dtor(auStack_40, 0xffffffff, ar6_00, in_stack_00000000);
        ar5_00 = auStack_30;
        Vec3_assign(a0 + 0x14, ar5_00, ar6_00, in_stack_00000000);
        rand_float(a0, ar5_00, ar6_00);
        iVar1 = a0 + 0x54;
        CMushroomerBody_uses_rand_float_031bb4(a0, a1, iVar1, in_stack_00000000);
        *(u32 *)(a0 + 0x40) = 5;
        if (cVar7 == '\0') {
            *(u32 *)(a0 + 0x90) = 0;
        } else {
            *(u64 *)(a0 + 0x90) = uVar5 & 0xffffffff;
        }
        if (cVar7 == '\0') {
            *(u32 *)(a0 + 0x98) = 0;
            uVar2 = (u32)uVar5;
            pcVar6 = (code *)0x3f333333;
            *(u32 *)(a0 + 0x278) = 0x3f333333;
        } else {
            *(u64 *)(a0 + 0x98) = uVar5 & 0xffffffff;
            uVar2 = 0x3f333333;
            pcVar6 = Vec3_sub;
            *(u64 *)(a0 + 0x278) = 0x8c023ae03f333333;
        }
        uVar3 = a1;
        Vec3_sub(a0 + 0x54, a1, iVar1, in_stack_00000000, auStack_50);
        Vec3_normalize(auStack_50, uVar3, iVar1, in_stack_00000000);
        Vec3_assign(auStack_20, auStack_60, iVar1, in_stack_00000000);
        Vec3_dtor(auStack_60, 0xffffffff, iVar1, in_stack_00000000);
        uVar3 = 0xffffffff;
        Vec3_dtor(auStack_50, 0xffffffff, iVar1, in_stack_00000000);
        Vec3_make(a0 + 0x14, uVar3, iVar1, in_stack_00000000, auStack_70);
        Vec3_make(auStack_20, uVar3, iVar1, in_stack_00000000, (int)&uStack_84 + 4);
        Vec3_cos_angle(auStack_70, (int)&uStack_84 + 4, iVar1, in_stack_00000000);
        if (cVar7 == '\0') {
            uStack_84 = CONCAT44(uStack_84._4_4_, pcVar6);
        } else {
            uStack_84 = CONCAT44(pcVar6, uVar2);
        }
        Vec3_dtor((int)&uStack_84 + 4, 0xffffffff, iVar1, in_stack_00000000);
        Vec3_dtor(auStack_70, 0xffffffff, iVar1, in_stack_00000000);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        if (*(int *)(a0 + 0x128) == 0) {
            *(u32 *)(a0 + 0x2b8) = 2;
        }
    } else {
        in_stack_00000000 = a3;
        if (*(int *)(a0 + 300) != 1)
            goto LAB_8c0556a8;
    }
    a2 = a0 + 0x54;
    iVar1 = pure_virtual_stub();
    if (iVar1 == 0) {
        uVar4 = 0;
        *(u32 *)(a0 + 300) = 0;
        *(u32 *)(a0 + 700) = 0;
    }
LAB_8c0556a8:
    Vec3_dtor(auStack_30, 0xffffffff, a2, in_stack_00000000);
    Vec3_dtor(auStack_20, 0xffffffff, a2, in_stack_00000000);
    return uVar4;
}

/*
 * game_vec_055750  0x8c055750
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_055750(int a0, u32 a1, int a2, int a3) {
    int iVar1;
    u32 uVar2;
    int ar6_00;
    int ar7_00;
    u32 uVar3;
    u32 uVar4;
    float fVar5;
    u64 in_dr0;
    u64 uVar6;
    double dVar7;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    int in_stack_00000000;
    u8 auStack_d4[16];
    u8 auStack_c4[16];
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[12];
    u8 auStack_28[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar3 = 1;
    uVar2 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_28, a1, a2);
    Vec3_assign_f_10277c(auStack_34);
    uVar4 = (u32)in_dr0;
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        iVar1 = game_uses_get_field_1c_057164(a0, a1, ar6_00, ar7_00);
        if (iVar1 == 0) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        }
    } else {
        if (iVar1 == 1) {
            if (cVar9 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0;
            } else {
                *(u64 *)(a0 + 0x2c) = in_dr0 & 0xffffffff;
                uVar4 = 0x40a00000;
            }
            game_vec_03263c(a0, a2, ar6_00, ar7_00);
            Vec3_add(auStack_44, a1, ar6_00, ar7_00, auStack_54);
            Vec3_assign(a0 + 0x54, auStack_54, ar6_00, ar7_00);
            Vec3_dtor(auStack_54, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_44, 0xffffffff, ar6_00, ar7_00);
            if (cVar9 != '\0') {
                uVar4 = 0x40400000;
            }
            game_float_calc_032788(a0, a0 + 0x54, a3, in_stack_00000000);
            *(u32 *)(a0 + 0x40) = 0;
            uVar2 = a1;
            Vec3_sub(a0 + 0x54, a1, a3, in_stack_00000000, auStack_64);
            Vec3_normalize(auStack_64, uVar2, a3, in_stack_00000000);
            Vec3_assign(auStack_28, auStack_74, a3, in_stack_00000000);
            Vec3_dtor(auStack_74, 0xffffffff, a3, in_stack_00000000);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_64, 0xffffffff, a3, in_stack_00000000);
            Vec3_make(a0 + 0x14, uVar2, a3, in_stack_00000000, auStack_84);
            Vec3_make(auStack_28, uVar2, a3, in_stack_00000000, auStack_94);
            Vec3_cos_angle(auStack_84, auStack_94, a3, in_stack_00000000);
            Vec3_dtor(auStack_94, 0xffffffff, a3, in_stack_00000000);
            Vec3_dtor(auStack_84, 0xffffffff, a3, in_stack_00000000);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            ar6_00 = a3;
            ar7_00 = in_stack_00000000;
        } else if (iVar1 != 2) {
            if (iVar1 == 3) {
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x28));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x28);
                    dVar7 = -8.394521626779552e-251;
                }
                if (cVar8 == '\0') {
                    fVar5 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar5 = SUB84(dVar7 * dVar7, 0);
                }
                if (cVar9 == '\0') {
                    *(float *)(a0 + 0x28) = fVar5;
                } else {
                    *(u64 *)(a0 + 0x28) = in_xd0;
                }
                iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar2, ar6_00, ar7_00);
                if (iVar1 == 1) {
                    *(u32 *)(a0 + 700) = 0;
                    uVar3 = 0;
                    *(u32 *)(a0 + 300) = 0;
                }
            }
            goto LAB_8c055a78;
        }
        uVar2 = a1;
        Vec3_sub(a0 + 0x54, a1, ar6_00, ar7_00, auStack_a4);
        Vec3_normalize(auStack_a4, uVar2, ar6_00, ar7_00);
        Vec3_assign(auStack_28, auStack_b4, ar6_00, ar7_00);
        Vec3_dtor(auStack_b4, 0xffffffff, ar6_00, ar7_00);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_a4, 0xffffffff, ar6_00, ar7_00);
        Vec3_make(a0 + 0x14, uVar2, ar6_00, ar7_00, auStack_c4);
        Vec3_make(auStack_28, uVar2, ar6_00, ar7_00, auStack_d4);
        Vec3_cos_angle(auStack_c4, auStack_d4, ar6_00, ar7_00);
        Vec3_dtor(auStack_d4, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(auStack_c4, 0xffffffff, ar6_00, ar7_00);
        uVar6 = (u64)uVar4;
        if (cVar9 == '\0') {
            *(u32 *)(a0 + 0x58) = 0;
        } else {
            *(u64 *)(a0 + 0x58) = uVar6;
        }
        ar6_00 = a0 + 0x54;
        iVar1 = game_state_switch_04c314(a0, a1, ar6_00);
        if (iVar1 == 0) {
            if (cVar9 == '\0') {
                *(u32 *)(a0 + 0x278) = 0x3f800000;
            } else {
                *(u64 *)(a0 + 0x278) = CONCAT44(0x3f800000, (int)uVar6);
            }
            ar7_00 = 0;
            ar6_00 = -1;
            uVar2 = 0x1a;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
            *(u32 *)(a0 + 0x218) = 0;
            CAnimBody_SetFrame(a0 + 0xb0, uVar2, ar6_00, ar7_00);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        }
    }
LAB_8c055a78:
    free_if_nonnull_wrap_102790(auStack_34, 0xffffffff, ar6_00, ar7_00);
    Vec3_dtor(auStack_28, 0xffffffff, ar6_00, ar7_00);
    return uVar3;
}

/*
 * game_uses_Vec3_assign_f_055b50  0x8c055b50
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Vec3_assign_f
 */
u32 game_uses_Vec3_assign_f_055b50(int a0, u32 a1, u32 a2, u32 a3) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    game_uses_reset_fields_2c_6c_032160(a0, a1, a2, a3);
    *(u32 *)(a0 + 0x2a4) = 0;
    *(u32 *)(a0 + 0x298) = 0;
    Vec3_assign_f(a0 + 0x2a8, a1, a2, a3);
    *(u32 *)(a0 + 0x29c) = 0;
    *(u32 *)(a0 + 0x2a0) = 0;
    *(u32 *)(a0 + 0x294) = 0;
    *(u32 *)(a0 + 0x28c) = 0;
    *(u32 *)(a0 + 0x134) = 0;
    *(u32 *)(a0 + 0x284) = 0;
    *(u32 *)(a0 + 0x288) = 0;
    *(u32 *)(a0 + 0x280) = 0;
    *(u32 *)(a0 + 700) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x2c) = 0;
    } else {
        *(u64 *)(a0 + 0x2c) = (u64)extraout_fr1;
    }
    flags6_set_all(a0 + 0x1fc, a1, a2);
    if (*(int *)(a0 + 0x324) == 1) {
        *(u32 *)(a0 + 0x214) = 0;
        *(u32 *)(a0 + 0x2e8) = 1;
    }
    *(u32 *)(a0 + 0x334) = 0;
    return 0x334;
}

/*
 * game_vec_055c38  0x8c055c38
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4, alt_entry_046684, game_state_switch_04f034, game_uses_rand_float_05c640,
 * game_vec_054b74, game_vec_058d60
 */
u32 game_vec_055c38(int a0, int a1, float *a2, u8 *a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    float *ar5_00;
    u32 uVar4;
    u8 *ar5_01;
    u8 *ar7_00;
    u32 *puVar5;
    u32 uVar6;
    float fVar7;
    u32 uVar8;
    double dVar9;
    float fVar10;
    u32 in_fr3;
    double dVar11;
    u64 in_xd0;
    char cVar12;
    char cVar13;
    u8 auStack_114[16];
    u8 auStack_104[16];
    u8 auStack_f4[16];
    u8 auStack_e4[12];
    u8 auStack_d8[16];
    u8 auStack_c8[12];
    u8 auStack_bc[16];
    u8 auStack_ac[16];
    u8 auStack_9c[16];
    u8 auStack_8c[16];
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    float fStack_4c;
    float fStack_48;
    u32 uStack_44;
    u8 auStack_3c[4];
    u32 uStack_38;
    u32 uStack_34;
    u8 auStack_2c[4];
    u32 uStack_28;
    u32 uStack_24;

    cVar13 = '\0';
    cVar12 = '\0';
    uVar6 = 1;
    ar7_00 = a3;
    ar5_00 = a2;
    Vec3_ctor_zero(auStack_2c, 1, a2);
    Vec3_ctor_zero(auStack_3c, Vec3_ctor_zero, a2);
    Vec3_ctor_copy(&fStack_4c, ar5_00, a2, ar7_00);
    iVar1 = get_field_24_026024(*(u32 *)(a0 + 0x244), ar5_00, a2, ar7_00);
    if (iVar1 != 0) {
        *(u32 *)(a0 + 0x2a4) = 0;
        *(u32 *)(a0 + 0x2e8) = 2;
        *(u32 *)(a0 + 0x214) = 1;
        Vec3_dtor(&fStack_4c, 0xffffffff, a2, ar7_00);
        Vec3_dtor(auStack_3c, 0xffffffff, a2, ar7_00);
        Vec3_dtor(auStack_2c, 0xffffffff, a2, ar7_00);
        return 0;
    }
    timer_stop_94(a0, timer_stop_94, a2, ar7_00);
    if (*(int *)(a0 + 0x128) == 3) {
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x42e6c234, fStack_48);
        } else {
            in_xd0 = CONCAT44(uStack_44, fStack_48);
            dVar9 = 6.20177319754504e-312;
        }
        if (cVar12 == '\0') {
            fStack_48 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
        } else {
            fStack_48 = SUB84(dVar9 - dVar9, 0);
        }
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x438a051f, fStack_4c);
        } else {
            fStack_48 = (float)in_xd0;
            uStack_44 = (u32)((u64)in_xd0 >> 0x20);
            in_xd0 = CONCAT44(fStack_48, fStack_4c);
            dVar9 = -9.507220658418769e+240;
        }
        if (cVar12 == '\0') {
            fStack_4c = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
        } else {
            fStack_4c = SUB84(dVar9 + dVar9, 0);
        }
        if (cVar13 != '\0') {
            fStack_4c = (float)in_xd0;
            fStack_48 = (float)((u64)in_xd0 >> 0x20);
        }
    } else {
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x42e6c234, fStack_48);
        } else {
            in_xd0 = CONCAT44(uStack_44, fStack_48);
            dVar9 = 6.20177319754504e-312;
        }
        if (cVar12 == '\0') {
            fStack_48 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
        } else {
            fStack_48 = SUB84(dVar9 - dVar9, 0);
        }
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x43938ccd, fStack_4c);
        } else {
            fStack_48 = (float)in_xd0;
            uStack_44 = (u32)((u64)in_xd0 >> 0x20);
            in_xd0 = CONCAT44(fStack_48, fStack_4c);
            dVar9 = 1.74908467537556e-311;
        }
        if (cVar12 == '\0') {
            fStack_4c = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
        } else {
            fStack_4c = SUB84(dVar9 + dVar9, 0);
        }
        if (cVar13 != '\0') {
            fStack_4c = (float)in_xd0;
            fStack_48 = (float)((u64)in_xd0 >> 0x20);
        }
    }
    uVar4 = 1;
    *(u32 *)(a0 + 0x338) = 1;
    iVar1 = *(int *)(a0 + 0x2a4);
    if (iVar1 == 0) {
        if (a3 == (u8 *)0x1) {
            *(u32 *)(a0 + 0x214) = 1;
            uVar6 = 0;
            goto LAB_8c0563fa;
        }
        uVar4 = 0;
        iVar1 = rand_range(a0, 0, 0x1e);
        *(int *)(a0 + 0x2f8) = iVar1 + 0x14;
        ar7_00 = (u8 *)0x5;
        *(u32 *)(a0 + 0x40) = 5;
        a2 = (float *)0x2d4;
        vec3_clear(a0 + 0x2d4, uVar4, 0x2d4, 5);
        vec3_clear(a0 + 0x2a8, uVar4, a2, ar7_00);
        vec3_clear(a0 + 0x90, uVar4, a2, ar7_00);
        vec3_clear(a0 + 0x6c, uVar4, a2, ar7_00);
        *(int *)(a0 + 0x2a4) = *(int *)(a0 + 0x2a4) + 1;
    } else if (iVar1 != 1) {
        if (iVar1 == 2) {
            *(u32 *)(a0 + 0x334) = 1;
            *(u32 *)(a0 + 0x214) = 0;
            *(u32 *)(a0 + 0x178) = 1;
            uVar4 = get_field_1c_on_field_b0(a0, 1, a2);
            uVar2 = array_at_field_14(a0 + 0xb0, uVar4, a2, ar7_00);
            puVar3 = (u32 *)deref_u32(uVar2);
            uVar2 = puVar3[1];
            *(u32 *)(a0 + 0xb4) = *puVar3;
            *(u32 *)(a0 + 0xb8) = uVar2;
            *(u32 *)(a0 + 0xbc) = puVar3[2];
            if (*(int *)(a0 + 0x128) == 3) {
                puVar5 = &g_8c135f7c;
                puVar3 = &g_8c135f94;
            } else {
                puVar5 = (u32 *)&g_8c13621c;
                puVar3 = (u32 *)&g_8c136234;
            }
            vec3_clear(auStack_3c, uVar4, a2, ar7_00);
            *(u32 **)(a0 + 0xb4) = puVar5;
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar4, a2, ar7_00);
            CAnimBody_vec_034384(a0 + 0xb0, **(u32 **)(a0 + 0xb4), a2, ar7_00);
            Vec3_assign(auStack_2c, auStack_6c, a2, ar7_00);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_6c, 0xffffffff, a2, ar7_00);
            uStack_38 = uStack_28;
            *(u32 **)(a0 + 0xb4) = puVar3;
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar4, a2, ar7_00);
            CAnimBody_vec_034384(a0 + 0xb0, **(u32 **)(a0 + 0xb4), a2, ar7_00);
            Vec3_assign(auStack_2c, auStack_7c, a2, ar7_00);
            Vec3_dtor(auStack_7c, 0xffffffff, a2, ar7_00);
            uStack_34 = uStack_24;
            Vec3_sub(auStack_3c, a0 + 0x2d4, a2, ar7_00, auStack_8c);
            Vec3_assign(a0 + 0x2a8, auStack_8c, a2, ar7_00);
            Vec3_dtor(auStack_8c, 0xffffffff, a2, ar7_00);
            ar5_01 = auStack_3c;
            Vec3_assign(a0 + 0x2d4, ar5_01, a2, ar7_00);
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(uStack_38, fStack_48);
            } else {
                in_xd0 = CONCAT44(uStack_44, fStack_48);
                dVar9 = (double)CONCAT44(uStack_34, uStack_38);
            }
            if (cVar12 == '\0') {
                fVar7 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
            } else {
                fVar7 = SUB84(dVar9 + dVar9, 0);
            }
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a1 + 4), fVar7);
            } else {
                dVar9 = *(double *)(a1 + 4);
            }
            if (cVar12 == '\0') {
                fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                fVar7 = SUB84(dVar9 - dVar9, 0);
            }
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(0x3dcccccd, fVar7);
            } else {
                dVar9 = 4.50375370731149e-312;
            }
            if (cVar12 == '\0') {
                fVar7 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
            } else {
                fVar7 = SUB84(dVar9 * dVar9, 0);
            }
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x2ac), fVar7);
            } else {
                dVar9 = *(double *)(a0 + 0x2ac);
            }
            if (cVar12 == '\0') {
                fVar7 = (float)((u64)dVar9 >> 0x20);
                dVar9 = (double)CONCAT44(fVar7, SUB84(dVar9, 0) + fVar7);
            } else {
                dVar9 = dVar9 + dVar9;
            }
            if (cVar13 == '\0') {
                *(int *)(a0 + 0x2ac) = SUB84(dVar9, 0);
            } else {
                *(u64 *)(a0 + 0x2ac) = in_xd0;
            }
            Vec3_make(a0 + 0x14, ar5_01, a2, ar7_00, auStack_9c);
            uVar2 = (u32)((u64)dVar9 >> 0x20);
            Vec3_ctor_xyz(auStack_ac, ar5_01, a2, ar7_00);
            Vec3_cos_angle(auStack_9c, auStack_ac, a2, ar7_00);
            Vec3_dtor(auStack_ac, 0xffffffff, a2, ar7_00);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_9c, 0xffffffff, a2, ar7_00);
            Vec3_ctor_xyz(auStack_bc, uVar4, a2, ar7_00);
            iVar1 = Vec3_angle_code_90(a0 + 0x14, auStack_bc, a2, ar7_00);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_bc, 0xffffffff, a2, ar7_00);
            if (iVar1 == 3) {
                Vec3_set_xyz(auStack_c8, uVar4, a2, ar7_00);
                Vec3_vec_023484(a0 + 0x2a8, auStack_c8, a2, ar7_00, auStack_d8);
                Vec3_assign(a0 + 0x2a8, auStack_d8, a2, ar7_00);
                Vec3_dtor(auStack_d8, 0xffffffff, a2, ar7_00);
                uVar4 = 0xffffffff;
                object_dtor_delete(auStack_c8, 0xffffffff, a2, ar7_00);
            } else if (iVar1 == 4) {
                Vec3_set_xyz(auStack_e4, uVar4, a2, ar7_00);
                Vec3_vec_023484(a0 + 0x2a8, auStack_e4, a2, ar7_00, auStack_f4);
                Vec3_assign(a0 + 0x2a8, auStack_f4, a2, ar7_00);
                Vec3_dtor(auStack_f4, 0xffffffff, a2, ar7_00);
                uVar4 = 0xffffffff;
                object_dtor_delete(auStack_e4, 0xffffffff, a2, ar7_00);
            }
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar4, a2, ar7_00);
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(0x43660000, uVar2);
            } else {
                dVar9 = 1.45200378977295e-311;
            }
            if (cVar12 == '\0' && (float)((u64)dVar9 >> 0x20) < SUB84(dVar9, 0)) {
                if (cVar13 == '\0') {
                    dVar11 = (double)CONCAT44(*(u32 *)(a0 + 0x2ac), in_fr3);
                    dVar9 = (double)CONCAT44(*(u32 *)(a1 + 4), 0x43340000);
                } else {
                    dVar11 = *(double *)(a0 + 0x2ac);
                    dVar9 = *(double *)(a1 + 4);
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar9 - dVar9, 0);
                }
                if (cVar13 == '\0') {
                    dVar9 = (double)CONCAT44(0x3e99999a, fVar7);
                } else {
                    dVar9 = 1.57928376276162e-311;
                }
                if (cVar12 == '\0') {
                    fVar10 = (float)((u64)dVar9 >> 0x20);
                    fVar7 = SUB84(dVar9, 0) * fVar10;
                    dVar9 = (double)CONCAT44(fVar10, fVar7);
                    dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) + fVar7, SUB84(dVar11, 0));
                } else {
                    dVar9 = dVar9 * dVar9;
                    dVar11 = dVar11 + dVar9;
                }
                if (cVar13 == '\0') {
                    *(int *)(a0 + 0x2ac) = (int)((u64)dVar11 >> 0x20);
                } else {
                    *(double *)(a0 + 0x2ac) = dVar11;
                }
            }
            uVar8 = SUB84(dVar9, 0);
            *(u32 *)(a0 + 0x2e8) = 1;
            Vec3_make(a0 + 0x14, auStack_104, a2, ar7_00, auStack_104);
            Vec3_normalize(auStack_104, auStack_114, a2, ar7_00);
            uVar4 = Vec3_assign(a0 + 0x14, auStack_114, a2, ar7_00);
            Vec3_assign(a0 + 0x80, uVar4, a2, ar7_00);
            Vec3_dtor(auStack_114, 0xffffffff, a2, ar7_00);
            Vec3_dtor(auStack_104, 0xffffffff, a2, ar7_00);
            a2 = (float *)(a0 + 0xb0);
            iVar1 = CAnimBody_AdvanceFrame_033b98(a2, CAnimBody_AdvanceFrame_033b98, a2, ar7_00);
            if (iVar1 == 1) {
                Vec3_assign(a0 + 0x80, a0 + 0x14, a2, ar7_00);
                uVar2 = 0;
                uVar4 = 0xffffffff;
                uVar6 = 0x1a;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar6, uVar4, uVar2);
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = (u64)uVar8;
                }
                Class_12b2ac_vec_031700(a0, uVar6, uVar4, uVar2);
                *(u32 *)(a0 + 0x40) = 5;
                *(u32 *)(a0 + 0x2e8) = 2;
                flags6_set_all(a0 + 0x1fc, uVar6, uVar4);
                *(u32 *)(a0 + 0x334) = 0;
                *(u32 *)(a0 + 0x214) = 1;
                ar7_00 = NULL;
                uVar6 = 0;
                a2 = (float *)0x2a4;
                *(u32 *)(a0 + 0x2a4) = 0;
            }
        }
        goto LAB_8c0563fa;
    }
    *(u32 *)(a0 + 0x334) = 1;
    Vec3_ctor_xyz(auStack_5c, uVar4, a2, ar7_00);
    ar7_00 = auStack_5c;
    a2 = &fStack_4c;
    iVar1 = game_vec_04e2d0(a0, a1, a2, ar7_00);
    Vec3_dtor(auStack_5c, 0xffffffff, a2, ar7_00);
    uVar4 = 0;
    if (iVar1 == 0) {
        ar7_00 = NULL;
        a2 = (float *)0xffffffff;
        uVar4 = 0x48;
        CAnimBody_SetAnimation(a0 + 0xb0, 0x48, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar4, a2, ar7_00);
        *(int *)(a0 + 0x2a4) = *(int *)(a0 + 0x2a4) + 1;
        *(u32 *)(a0 + 0x2e8) = 1;
    }
    if (*(int *)(a0 + 0x298) == 1) {
        flags6_clear_all(a0 + 0x1fc, uVar4, a2, ar7_00);
    }
LAB_8c0563fa:
    Vec3_dtor(&fStack_4c, 0xffffffff, a2, ar7_00);
    Vec3_dtor(auStack_3c, 0xffffffff, a2, ar7_00);
    Vec3_dtor(auStack_2c, 0xffffffff, Vec3_dtor, auStack_2c);
    return uVar6;
}

/*
 * game_state_switch_0564c4  0x8c0564c4
 * area name: game code; nothing names its area yet; behaviour name: dispatches on a state or mode value (switch)
 * called by: Vec3_state_switch_03f4a4, alt_entry_046684, game_vec_054d6c
 */
u32 game_state_switch_0564c4(int a0, u32 a1, int a2, u8 *a3) {
    int iVar1;
    u8 *puVar2;
    u32 uVar3;
    u8 *ar5_00;
    code *ar5_01;
    u32 uVar4;
    u32 unaff_r9;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 *puVar5;
    u32 *puVar6;
    u32 unaff_r13;
    u32 uVar7;
    u32 unaff_r14;
    u64 *puVar8;
    float fVar9;
    u64 in_dr0;
    float fVar12;
    double dVar10;
    u64 uVar11;
    u64 in_dr14;
    double dVar13;
    u32 in_PR;
    u8 auStack_10[8];
    u64 uStack_8;

    uStack_8 = CONCAT44((int)in_dr14, (u32)uStack_8);
    puVar8 = &uStack_8;
    uStack_8._0_4_ = (int)(in_dr14 >> 0x20);

    *(u32 *)((int)puVar8 + -4) = unaff_r14;
    *(u32 *)((int)puVar8 + -8) = unaff_r13;
    *(u32 *)((int)puVar8 + -0xc) = 1;
    *(u32 *)((int)puVar8 + -0x10) = unaff_r11;
    *(u32 *)((int)puVar8 + -0x14) = unaff_r10;
    *(u32 *)((int)puVar8 + -0x18) = unaff_r9;
    *(u32 *)((int)puVar8 + -0x1c) = in_PR;
    uVar7 = 1;
    uVar3 = a1;
    Vec3_ctor_zero((u8 *)((int)puVar8 + -0x2c), a1, a2);
    Vec3_ctor_zero((u8 *)((int)puVar8 + -0x3c), uVar3, a2);
    Vec3_ctor_zero((u8 *)((int)puVar8 + -0x4c), uVar3, a2);
    *(u32 *)((int)puVar8 + -0x1a8) = 0;
    Vec3_ctor_xyz((u8 *)((int)puVar8 + -0x7c), uVar3, a2, a3);
    Vec3_ctor_copy((u8 *)((int)puVar8 + -0x5c), (u8 *)((int)puVar8 + -0x7c), a2, a3);
    uVar3 = 0xffffffff;
    Vec3_dtor((u8 *)((int)puVar8 + -0x7c), 0xffffffff, a2, a3);
    Vec3_ctor_zero((u8 *)((int)puVar8 + -0x6c), uVar3, a2);
    uVar3 = get_field_24_026024(*(u32 *)(a0 + 0x244), uVar3, a2, a3);
    *(u32 *)((int)puVar8 + -0x1c0) = uVar3;
    if (*(int *)((int)puVar8 + -0x1c0) == 0) {
        iVar1 = *(int *)(a0 + 0x2a4);
        if ((iVar1 < 5) && (-1 < iVar1)) {
            ar5_00 = (&switchD_8c05663a::switchdataD_8c056644)[iVar1];
            switch (iVar1) {
            case 0:
                a2 = 0x14;
                uVar3 = rand_range(a0, 0, 0x14);
                *(u32 *)((int)puVar8 + -0x1c4) = uVar3;
                *(int *)(a0 + 0x2f8) = *(int *)((int)puVar8 + -0x1c4) + 5;
                *(int *)((int)puVar8 + -0x1fc) = a0;
                *(int *)(*(int *)((int)puVar8 + -0x1fc) + 0x2a4) = *(int *)(*(int *)((int)puVar8 + -0x1fc) + 0x2a4) + 1;
            case 1:
                uVar3 = game_uses_get_field_1c_057164(a0, a1, a2, a3);
                *(u32 *)((int)puVar8 + -0x1c8) = uVar3;
                iVar1 = *(int *)((int)puVar8 + -0x1c8);
                if (iVar1 == 0) {
                    *(u32 *)(a0 + 700) = 1;
                    Vec3_assign_f(a0 + 0x54, 0, a2, a3);
                    Vec3_assign_f(a0 + 0x2d4, iVar1, a2, a3);
                    Vec3_assign_f(a0 + 0x2a8, iVar1, a2, a3);
                    *(int *)((int)puVar8 + -0x200) = a0;
                    *(int *)(*(int *)((int)puVar8 + -0x200) + 0x2a4) =
                        *(int *)(*(int *)((int)puVar8 + -0x200) + 0x2a4) + 1;
                    *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0x8c);
                    puVar2 = (u8 *)((int)puVar8 + -0x5c);
                    Vec3_sub(a1, puVar2, a2, a3, *(u32 *)((int)puVar8 + -0x214));
                    *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0x9c);
                    Vec3_normalize((u8 *)((int)puVar8 + -0x8c), puVar2, a2, a3);
                    Vec3_assign(a0 + 0x54, (u8 *)((int)puVar8 + -0x9c), a2, a3);
                    Vec3_dtor((u8 *)((int)puVar8 + -0x9c), 0xffffffff, a2, a3);
                    Vec3_dtor((u8 *)((int)puVar8 + -0x8c), 0xffffffff, a2, a3);
                    Vec3_distance_sq(a0 + 0x34c, (u8 *)((int)puVar8 + -0x5c), a2, a3);

                    *(int *)((int)puVar8 + -0x1cc) = (int)((u64)in_dr0 >> 0x20);
                    *(u32 *)((int)puVar8 + -0x1b4) = *(u32 *)((int)puVar8 + -0x1cc);

                    *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0xac);
                    Vec3_scale(a0 + 0x54, (u8 *)((int)puVar8 + -0x1b4), a2, a3, *(u32 *)((int)puVar8 + -0x214));
                    *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0xbc);
                    Vec3_add((u8 *)((int)puVar8 + -0xac), (u8 *)((int)puVar8 + -0x5c), a2, a3,
                             *(u32 *)((int)puVar8 + -0x214));
                    Vec3_assign(a0 + 0x268, (u8 *)((int)puVar8 + -0xbc), a2, a3);
                    Vec3_dtor((u8 *)((int)puVar8 + -0xbc), 0xffffffff, a2, a3);
                    Vec3_dtor((u8 *)((int)puVar8 + -0xac), 0xffffffff, a2, a3);

                    *(u32 *)(a0 + 0x26c) = 0x43340000;
                    fVar9 = *(float *)(a0 + 0x270);
                    fVar12 = 1200.0;

                    if (fVar12 < fVar9) {

                        *(u32 *)(a0 + 0x270) = 0x44960000;

                        *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0xcc);
                        puVar2 = (u8 *)((int)puVar8 + -0x5c);
                        Vec3_sub(a0 + 0x268, puVar2, a2, a3, *(u32 *)((int)puVar8 + -0x214));
                        *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0xdc);
                        Vec3_normalize((u8 *)((int)puVar8 + -0xcc), puVar2, a2, a3);
                        Vec3_assign(a0 + 0x54, (u8 *)((int)puVar8 + -0xdc), a2, a3);
                        Vec3_dtor((u8 *)((int)puVar8 + -0xdc), 0xffffffff, a2, a3);
                        Vec3_dtor((u8 *)((int)puVar8 + -0xcc), 0xffffffff, a2, a3);
                    }
                    Vec3_scale_assign(a0 + 0x54, &g_8c1365e0);
                    a3 = NULL;
                    a2 = -1;
                    uVar3 = 0x1a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar3, a2, a3);
                }
                break;
            case 2:
                *(int *)((int)puVar8 + -0x204) = a0;
                *(int *)(*(int *)((int)puVar8 + -0x204) + 0x2a4) = *(int *)(*(int *)((int)puVar8 + -0x204) + 0x2a4) + 1;
            case 3:
                Vec3_ctor_copy((u8 *)((int)puVar8 + -0xec), a0 + 0x54, a2, Vec3_ctor_copy);
                a3 = (u8 *)((int)puVar8 + -0xec);
                a2 = a0 + 0x268;
                uVar3 = Vec3_vec_04e0e0(a0, a1, a2, a3);
                *(u32 *)((int)puVar8 + -0x1d0) = uVar3;
                *(u32 *)((int)puVar8 + -0x1b8) = (u32)(*(int *)((int)puVar8 + -0x1d0) == 0);
                Vec3_dtor((u8 *)((int)puVar8 + -0xec), 0xffffffff, a2, a3);
                if (*(int *)((int)puVar8 + -0x1b8) != 0) {
                    a3 = NULL;
                    a2 = -1;
                    uVar3 = 0x4a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x4a, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar3, a2, a3);
                    *(int *)((int)puVar8 + -0x208) = a0;
                    iVar1 = *(int *)((int)puVar8 + -0x208);
                    *(int *)(*(int *)((int)puVar8 + -0x208) + 0x2a4) = *(int *)(iVar1 + 0x2a4) + 1;
                    Vec3_assign_f(a0 + 0x2d4, iVar1, a2, a3);
                    ar5_01 = Vec3_assign_f;
                    Vec3_assign_f(a0 + 0x2a8, Vec3_assign_f, a2, a3);
                    *(u32 *)(a0 + 0x2b8) = 3;
                    *(u32 *)(a0 + 0x2e8) = 1;
                    flags6_clear_all(a0 + 0x1fc, ar5_01, a2, a3);
                    uVar3 = get_field_1c_on_field_b0(a0, ar5_01, a2);
                    *(u32 *)((int)puVar8 + -0x1d4) = uVar3;
                    uVar4 = *(u32 *)((int)puVar8 + -0x1d4);
                    uVar3 = array_at_field_14(a0 + 0xb0, uVar4, a2, a3);
                    *(u32 *)((int)puVar8 + -0x1d8) = uVar3;
                    uVar3 = deref_u32(*(u32 *)((int)puVar8 + -0x1d8));
                    *(u32 *)((int)puVar8 + -0x1dc) = uVar3;
                    puVar5 = *(u32 **)((int)puVar8 + -0x1dc);
                    uVar3 = puVar5[1];
                    *(u32 *)(a0 + 0xb4) = *puVar5;
                    *(u32 *)(a0 + 0xb8) = uVar3;
                    *(u32 *)(a0 + 0xbc) = puVar5[2];
                }
                break;
            case 4:
                *(u32 *)(a0 + 0x334) = 1;
                *(u32 *)(a0 + 0x214) = 0;
                *(u32 *)(a0 + 0x178) = 1;
                timer_stop_94(a0, ar5_00, a2, a3);
                Vec3_assign_f(a0 + 0x90, ar5_00, a2, a3);
                Vec3_assign((u8 *)((int)puVar8 + -0x6c), a1, a2, a3);
                if (*(int *)(a0 + 0x128) == 3) {
                    puVar6 = &g_8c135f64;
                    puVar5 = &g_8c135f64;

                    dVar13 = (double)CONCAT44(0xc1100000, (int)in_dr14);
                    dVar10 = (double)CONCAT44(0x43fa0000, *(u32 *)((int)puVar8 + -0x6c));

                    fVar9 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);

                    *(float *)((int)puVar8 + -0x6c) = fVar9;

                    uVar11 = CONCAT44(0x3f800000, fVar9);

                    *(u32 *)(a0 + 0x2c4) = 0x3f800000;

                } else {
                    puVar6 = (u32 *)&g_8c136204;
                    puVar5 = (u32 *)&g_8c136204;
                    dVar13 = (double)(in_dr14 & 0xffffffff);

                    dVar10 = (double)CONCAT44(0x43fa0000, *(u32 *)((int)puVar8 + -0x6c));

                    fVar9 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);

                    *(float *)((int)puVar8 + -0x6c) = fVar9;

                    uVar11 = CONCAT44(0x3f800000, fVar9);

                    *(u32 *)(a0 + 0x2c4) = 0x3f800000;
                }
                Vec3_assign_f((u8 *)((int)puVar8 + -0x4c), a1, a2, a3);
                *(u32 **)(a0 + 0xb4) = puVar6;
                CAnimBody_GetCurFrame(a0 + 0xb0, CAnimBody_GetCurFrame, a2, a3, *(u32 *)((int)puVar8 + -0x210));

                *(int *)((int)puVar8 + -0x1e0) = (int)((u64)uVar11 >> 0x20);

                *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0xfc);
                CAnimBody_vec_034384(a0 + 0xb0, **(u32 **)(a0 + 0xb4), a2, a3);
                uVar4 = (u32)uVar11;
                Vec3_assign((u8 *)((int)puVar8 + -0x2c), (u8 *)((int)puVar8 + -0xfc), a2, a3);
                uVar3 = 0xffffffff;
                Vec3_dtor((u8 *)((int)puVar8 + -0xfc), 0xffffffff, a2, a3);

                uVar11 = CONCAT44(*(u32 *)((int)puVar8 + -0x28), uVar4);
                *(u32 *)((int)puVar8 + -0x48) = *(u32 *)((int)puVar8 + -0x28);

                *(u32 **)(a0 + 0xb4) = puVar5;
                CAnimBody_GetCurFrame(a0 + 0xb0, uVar3, a2, a3, *(u32 *)((int)puVar8 + -0x210));

                *(int *)((int)puVar8 + -0x1e4) = (int)((u64)uVar11 >> 0x20);

                *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0x10c);
                CAnimBody_vec_034384(a0 + 0xb0, **(u32 **)(a0 + 0xb4), a2, a3);
                uVar3 = (u32)uVar11;
                Vec3_assign((u8 *)((int)puVar8 + -0x2c), (u8 *)((int)puVar8 + -0x10c), a2, a3);
                Vec3_dtor((u8 *)((int)puVar8 + -0x10c), 0xffffffff, a2, a3);

                dVar10 = (double)CONCAT44(*(u32 *)((int)puVar8 + -0x24), uVar3);

                dVar10 =
                    (double)CONCAT44((float)((u64)dVar10 >> 0x20) - (float)((u64)dVar13 >> 0x20), SUB84(dVar10, 0));

                *(int *)((int)puVar8 + -0x44) = (int)((u64)dVar10 >> 0x20);

                *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0x11c);
                Vec3_sub((u8 *)((int)puVar8 + -0x4c), a0 + 0x2d4, a2, a3, *(u32 *)((int)puVar8 + -0x214));
                uVar3 = SUB84(dVar10, 0);
                Vec3_assign(a0 + 0x2a8, (u8 *)((int)puVar8 + -0x11c), a2, a3);
                Vec3_dtor((u8 *)((int)puVar8 + -0x11c), 0xffffffff, a2, a3);
                a2 = a0 + 0x2d4;
                Vec3_assign(a2, (u8 *)((int)puVar8 + -0x4c), a2, a3);
                *(int *)((int)puVar8 + -0x20c) = a0;

                uVar3 = *(u32 *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0);

                uVar4 = 0x2c4;

                dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x2c4), uVar3);

                fVar9 = (float)((u64)dVar13 >> 0x20);
                dVar13 = (double)CONCAT44(fVar9, SUB84(dVar13, 0) * fVar9);

                *(int *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0) = SUB84(dVar13, 0);

                *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -300);
                Vec3_make(a0 + 0x14, 0x2c4, a2, a3, *(u32 *)((int)puVar8 + -0x214));
                Vec3_ctor_xyz((u8 *)((int)puVar8 + -0x13c), uVar4, a2, a3);
                Vec3_cos_angle((u8 *)((int)puVar8 + -300), (u8 *)((int)puVar8 + -0x13c), a2, a3);

                *(int *)((int)puVar8 + -0x1e8) = (int)((u64)dVar13 >> 0x20);

                Vec3_dtor((u8 *)((int)puVar8 + -0x13c), 0xffffffff, a2, a3);
                uVar3 = 0xffffffff;
                Vec3_dtor((u8 *)((int)puVar8 + -300), 0xffffffff, a2, a3);
                Vec3_ctor_xyz((u8 *)((int)puVar8 + -0x14c), uVar3, a2, a3);
                uVar3 = Vec3_angle_code_90(a0 + 0x14, (u8 *)((int)puVar8 + -0x14c), a2, a3);
                *(u32 *)((int)puVar8 + -0x1ec) = uVar3;
                *(u32 *)((int)puVar8 + -0x1bc) = *(u32 *)((int)puVar8 + -0x1ec);
                uVar3 = 0xffffffff;
                Vec3_dtor((u8 *)((int)puVar8 + -0x14c), 0xffffffff, a2, a3);
                if (*(int *)((int)puVar8 + -0x1bc) == 3) {
                    Vec3_set_xyz((u8 *)((int)puVar8 + -0x158), uVar3, a2, a3);
                    *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0x168);
                    Vec3_vec_023484(a0 + 0x2a8, (u8 *)((int)puVar8 + -0x158), a2, a3, *(u32 *)((int)puVar8 + -0x214));
                    Vec3_assign(a0 + 0x2a8, (u8 *)((int)puVar8 + -0x168), a2, a3);
                    Vec3_dtor((u8 *)((int)puVar8 + -0x168), 0xffffffff, a2, a3);
                    uVar3 = 0xffffffff;
                    object_dtor_delete((u8 *)((int)puVar8 + -0x158), 0xffffffff, a2, a3);
                } else if (*(int *)((int)puVar8 + -0x1bc) == 4) {
                    Vec3_set_xyz((u8 *)((int)puVar8 + -0x174), (u8 *)((int)puVar8 + -0x174), a2, a3);
                    *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0x184);
                    Vec3_vec_023484(a0 + 0x2a8, (u8 *)((int)puVar8 + -0x174), a2, a3, *(u32 *)((int)puVar8 + -0x214));
                    Vec3_assign(a0 + 0x2a8, (u8 *)((int)puVar8 + -0x184), a2, a3);
                    Vec3_dtor((u8 *)((int)puVar8 + -0x184), 0xffffffff, a2, a3);
                    uVar3 = 0xffffffff;
                    object_dtor_delete((u8 *)((int)puVar8 + -0x174), 0xffffffff, a2, a3);
                }
                *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0x194);
                Vec3_make(a0 + 0x14, uVar3, a2, a3, *(u32 *)((int)puVar8 + -0x214));
                *(u8 **)((int)puVar8 + -0x214) = (u8 *)((int)puVar8 + -0x1a4);
                Vec3_normalize((u8 *)((int)puVar8 + -0x194), uVar3, a2, a3);
                uVar3 = Vec3_assign(a0 + 0x14, (u8 *)((int)puVar8 + -0x1a4), a2, a3);
                *(u32 *)((int)puVar8 + -0x1f0) = uVar3;
                Vec3_assign(a0 + 0x80, *(u32 *)((int)puVar8 + -0x1f0), a2, a3);
                Vec3_dtor((u8 *)((int)puVar8 + -0x1a4), 0xffffffff, a2, a3);
                Vec3_dtor((u8 *)((int)puVar8 + -0x194), 0xffffffff, a2, a3);
                *(u32 *)(a0 + 0x2e8) = 1;
                uVar3 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a0 + 0xb0, a2, a3);
                *(u32 *)((int)puVar8 + -500) = uVar3;
                a3 = *(u8 **)((int)puVar8 + -500);
                if (a3 == (u8 *)0x1) {
                    *(u32 *)(a0 + 0x40) = 5;
                    *(u32 *)((int)puVar8 + -0x210) = *(u32 *)(a0 + 0x128);
                    copy6_to_fields(
                        a0, (*(int *)((int)puVar8 + -0x210) * 2 + *(int *)((int)puVar8 + -0x210)) * 8 + 0x8c2803f4,
                        0x40, 1);
                    *(u32 *)(a0 + 700) = 0;
                    *(u32 *)(a0 + 0x2e8) = 0;
                    uVar4 = 0;
                    uVar7 = 0xffffffff;
                    uVar3 = 0;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar3, uVar7, uVar4);
                    *(u32 *)(a0 + 0x2b8) = 2;
                    *(u32 *)(a0 + 0x2a4) = 0;
                    a3 = (u8 *)0x40;
                    a2 = 5;
                    *(u32 *)(a0 + 0x40) = 5;
                    uVar3 = 0x2a8;
                    Vec3_length_sq(a0 + 0x2a8, 0x2a8, 5, 0x40);

                    *(int *)((int)puVar8 + -0x1f8) = (int)((u64)dVar13 >> 0x20);
                    *(u32 *)(a0 + 0x28) = *(u32 *)((int)puVar8 + -0x1f8);

                    flags6_set_all(a0 + 0x1fc, uVar3, a2);
                    *(u32 *)(a0 + 0x334) = 1;
                    *(u32 *)(a0 + 0x214) = 0;
                    *(u32 *)(a0 + 0x178) = 1;
                    uVar7 = 0;
                }
            }
        }
        Vec3_assign(a0 + 0x80, a0 + 0x14, a2, a3);
        *(u32 *)((int)puVar8 + -0x1b0) = uVar7;
        Vec3_dtor((u8 *)((int)puVar8 + -0x6c), 0xffffffff, a2, a3);
        Vec3_dtor((u8 *)((int)puVar8 + -0x5c), 0xffffffff, a2, a3);
        Vec3_dtor((u8 *)((int)puVar8 + -0x4c), 0xffffffff, a2, a3);
        Vec3_dtor((u8 *)((int)puVar8 + -0x3c), 0xffffffff, a2, a3);
        Vec3_dtor((u8 *)((int)puVar8 + -0x2c), 0xffffffff, a2, a3);
        uVar3 = *(u32 *)((int)puVar8 + -0x1b0);
    } else {
        *(u32 *)(a0 + 0x2a4) = 0;
        *(u32 *)(a0 + 0x2e8) = 2;
        *(u32 *)(a0 + 0x214) = 1;
        *(u32 *)((int)puVar8 + -0x1ac) = 0;
        Vec3_dtor((u8 *)((int)puVar8 + -0x6c), 0xffffffff, a2, a3);
        Vec3_dtor((u8 *)((int)puVar8 + -0x5c), 0xffffffff, a2, a3);
        Vec3_dtor((u8 *)((int)puVar8 + -0x4c), 0xffffffff, a2, a3);
        Vec3_dtor((u8 *)((int)puVar8 + -0x3c), 0xffffffff, a2, a3);
        Vec3_dtor((u8 *)((int)puVar8 + -0x2c), 0xffffffff, a2, a3);
        uVar3 = *(u32 *)((int)puVar8 + -0x1ac);
    }
    return uVar3;
}

/*
 * game_uses_CAnimBody_SetFrame_0570cc  0x8c0570cc
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is CAnimBody_SetFrame
 * called by: Vec3_state_switch_03f4a4
 */
u32 game_uses_CAnimBody_SetFrame_0570cc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    if (*(int *)(0x2a0 + a0) == 0) {
        *(int *)(0x2a0 + a0) = *(int *)(0x2a0 + a0) + 1;
        a3 = 0;
        a2 = 0xffffffff;
        (*(code *)(&CAnimBody_SetAnimation))(a0 + 0xb0, a1, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, a1, a2, a3);
    } else if (*(int *)(0x2a0 + a0) != 1) {
        return 1;
    }
    iVar1 = (*(code *)(&CAnimBody_AdvanceFrame_033b98))(a0 + 0xb0, a1, a2, a3);
    if (iVar1 == 1) {
        *(u32 *)(0x2a0 + a0) = 0;
    }
    return (u32)(iVar1 != 1);
}

/*
 * game_uses_get_field_1c_057164  0x8c057164
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_1c_026dd8
 * called by: Vec3_state_switch_03f4a4, alt_entry_046684, game_state_switch_04eb14, game_state_switch_0526a0,
 * game_state_switch_0564c4, game_uses_rand_float_05c640, game_vec_054b74, game_vec_055750 (+2 more)
 */
u32 game_uses_get_field_1c_057164(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u64 in_dr0;
    u64 uVar4;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    uVar3 = 1;
    *(u32 *)(a0 + 700) = 0;
    *(u32 *)(a0 + 0x40) = 3;
    if ((*(int *)(a0 + 0x128) == 4) && (*(int *)(a0 + 0x2b8) == 3)) {
        uVar2 = a1;
        iVar1 = get_field_1c_026dd8(a0 + 0xb0, a1, a2);
        if (iVar1 == 0x22) {
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar2, a2, a3);
            if (cVar6 == '\0') {
                in_dr0 = CONCAT44(0x436b0000, (int)(in_dr0 >> 0x20));
            } else {
                in_dr0 = 0x8c033e68436b0000;
            }
            if (cVar5 == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20)) {
                CAnimBody_GetCurFrame(a0 + 0xb0, uVar2, a2, a3);
                uVar4 = in_dr0;
                if (cVar6 == '\0') {
                    uVar4 = in_dr0 >> 0x20;
                }
                in_dr0 = uVar4 & 0xffffffff;
                if ((float)uVar4 != 0.0) {
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, a2, a3);
                }
            }
        } else {
            iVar1 = get_field_1c_026dd8(a0 + 0xb0, uVar2, a2);
            if (iVar1 == 0x20) {
                *(u32 *)(a0 + 0x218) = 5;
            }
        }
    }
    if (cVar6 == '\0') {
        uVar2 = (u32)in_dr0;
        *(u32 *)(a0 + 0x278) = 0x3fe66666;
    } else {
        uVar2 = 0x3fe66666;
        *(u64 *)(a0 + 0x278) = 0x8c04c3143fe66666;
    }
    if (*(int *)(a0 + 0x2b8) == 2) {
        if (cVar6 == '\0') {
            *(u32 *)(a0 + 0x278) = 0x3f800000;
        } else {
            *(u64 *)(a0 + 0x278) = CONCAT44(0x3f800000, uVar2);
        }
        uVar3 = 0;
    } else {
        game_state_switch_04c314(a0, a1, a1);
    }
    return uVar3;
}

/*
 * game_state_switch_057280  0x8c057280
 * area name: game code; nothing names its area yet; behaviour name: dispatches on a state or mode value (switch)
 * called by: Vec3_state_switch_03f4a4, game_vec_03c94c
 */
u32 game_state_switch_057280(u8 **a0, u8 **a1, u8 **a2, code *a3) {
    int iVar1;
    u8 *puVar2;
    u32 uVar3;
    u8 **ppuVar4;
    u8 **ppuVar5;
    code *pcVar6;
    u32 uVar7;
    u32 in_fr1;
    char cVar8;
    u8 auStack_104[16];
    u8 auStack_f4[16];
    u8 auStack_e4[16];
    u8 auStack_d4[16];
    u8 auStack_c4[16];
    u8 auStack_b4[12];
    u8 auStack_a8[16];
    u8 auStack_98[12];
    u8 auStack_8c[16];
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[12];
    u8 auStack_40[16];
    u8 auStack_30[12];
    u8 auStack_24[20];

    cVar8 = '\0';
    uVar7 = 1;
    ppuVar5 = a1;
    ppuVar4 = a2;
    do {
        puVar2 = a0[0x4b];
        if ((0xc < (int)puVar2) || ((int)puVar2 < 0))
            goto switchD_8c0572ba_caseD_5;
        ppuVar4 = &switchD_8c0572ba::switchdataD_8c0572c4;
        switch (puVar2) {
        case NULL:
            a0[0xb] = NULL;
            if (a2 == (u8 **)0x1) {
                a0[0x4b] = a0[0x4b] + 1;
                ppuVar5 = a0;
                ppuVar4 = &switchD_8c0572ba::switchdataD_8c0572c4;
            } else {
                a0[0x4b] = (u8 *)0xa;
            }
            break;
        case (u8 *)0x1:
            a0[0xae] = (u8 *)0x2;
            vec3_clear(a0 + 0xaa, vec3_clear, &switchD_8c0572ba::switchdataD_8c0572c4, a3);
            pcVar6 = vec3_clear;
            vec3_clear(a0 + 0xb5, vec3_clear, ppuVar4, a3);
            clear_3_words(a0 + 0xb2, pcVar6, ppuVar4, a3);
            if (cVar8 == '\0') {
                a0[10] = NULL;
            } else {
                *(u64 *)(a0 + 10) = (u64)in_fr1;
            }
            a0[0x4b] = a0[0x4b] + 1;
            goto switchD_8c0572ba_caseD_5;
        case (u8 *)0x2:
            a3 = (code *)a0[0x91];
            uVar3 = 0x1e;
            se_play_at_object(a0, 0x1e, a1, a3);
            Vec3_ctor_xyz(auStack_24, uVar3, a1, a3);
            iVar1 = Vec3_angle_code_90(a0 + 5, auStack_24, a1, a3);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_24, 0xffffffff, a1, a3);
            if (iVar1 == 3) {
                Vec3_set_xyz(auStack_30, uVar3, a1, a3);
                Vec3_vec_023484(a0 + 5, auStack_30, a1, a3, auStack_40);
                Vec3_assign(a0 + 5, auStack_40, a1, a3);
                Vec3_dtor(auStack_40, 0xffffffff, a1, a3);
                object_dtor_delete(auStack_30, 0xffffffff, a1, a3);
                a3 = NULL;
                a1 = (u8 **)0xffffffff;
                CAnimBody_SetAnimation(a0 + 0x2c, 0x2f, 0xffffffff, 0);
            } else if (iVar1 == 4) {
                Vec3_set_xyz(auStack_4c, uVar3, a1, a3);
                Vec3_vec_023484(a0 + 5, auStack_4c, a1, a3, auStack_5c);
                Vec3_assign(a0 + 5, auStack_5c, a1, a3);
                Vec3_dtor(auStack_5c, 0xffffffff, a1, a3);
                object_dtor_delete(auStack_4c, 0xffffffff, a1, a3);
                a3 = NULL;
                a1 = (u8 **)0xffffffff;
                CAnimBody_SetAnimation(a0 + 0x2c, 0x26, 0xffffffff, 0);
            }
            a0[0xae] = (u8 *)0x3;
            ppuVar5 = a0 + 5;
            Vec3_assign(a0 + 0x20, ppuVar5, a1, a3);
            if (a0[0x4a] == (u8 *)0x3) {
                CAnimBody_SetFrame(a0 + 0x2c, ppuVar5, a1, a3);
            } else {
                CAnimBody_SetFrame(a0 + 0x2c, ppuVar5, a1, a3);
            }
            a0[0x4b] = a0[0x4b] + 1;
            ppuVar4 = a1;
        case (u8 *)0x3:
            iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0x2c, ppuVar5, ppuVar4, a3);
            if (iVar1 == 1) {
                ppuVar4 = (u8 **)0x64;
                iVar1 = rand_range(a0, 0, 100);
                if (iVar1 < 0x32) {
                    a0[0x4b] = NULL;
                    a0[0xae] = (u8 *)0x2;
                    uVar7 = 0;
                } else {
                    a3 = NULL;
                    ppuVar4 = (u8 **)0xffffffff;
                    uVar3 = 3;
                    CAnimBody_SetAnimation(a0 + 0x2c, 3, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0x2c, uVar3, ppuVar4, a3);
                    a0[0xae] = (u8 *)0x3;
                    a0[0x4b] = a0[0x4b] + 1;
                }
            }
            goto switchD_8c0572ba_caseD_5;
        case (u8 *)0x4:
            iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0x2c, ppuVar5, &switchD_8c0572ba::switchdataD_8c0572c4, a3);
            if (iVar1 == 1) {
                a0[0x4b] = NULL;
                a0[0xae] = (u8 *)0x2;
                uVar7 = 0;
            }
        default:
            goto switchD_8c0572ba_caseD_5;
        case (u8 *)0xa:
            Vec3_scale(a0 + 5, &g_8c1365e4, &switchD_8c0572ba::switchdataD_8c0572c4, a3, auStack_6c);
            Vec3_add(a1, auStack_6c, ppuVar4, a3, auStack_7c);
            ppuVar5 = a1;
            timer_vec_031c74(a0, auStack_7c, a1, a3);
            Vec3_dtor(auStack_7c, 0xffffffff, ppuVar5, a3);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_6c, 0xffffffff, ppuVar5, a3);
            game_vec_05ae54(a0, uVar3, ppuVar5, a3);
            timer_stop_94(a0, uVar3, ppuVar5, a3);
            a3 = (code *)a0[0x91];
            uVar3 = 0x1e;
            ppuVar5 = a1;
            se_play_at_object(a0, 0x1e, a1, a3);
            rand_float(a0, uVar3, ppuVar5);
            Vec3_ctor_xyz(auStack_8c, uVar3, ppuVar5, a3);
            iVar1 = Vec3_angle_code_90(a0 + 5, auStack_8c, ppuVar5, a3);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_8c, 0xffffffff, ppuVar5, a3);
            if (iVar1 == 3) {
                Vec3_set_xyz(auStack_98, uVar3, ppuVar5, a3);
                Vec3_vec_023484(a0 + 5, auStack_98, ppuVar5, a3, auStack_a8);
                Vec3_assign(a0 + 5, auStack_a8, ppuVar5, a3);
                Vec3_dtor(auStack_a8, 0xffffffff, ppuVar5, a3);
                object_dtor_delete(auStack_98, 0xffffffff, ppuVar5, a3);
                ppuVar5 = a0 + 0x9e;
                if (cVar8 == '\0') {
                    *ppuVar5 = (u8 *)0x3f333333;
                } else {
                    ppuVar5[0] = (u8 *)0x3f333333;
                    ppuVar5[1] = (u8 *)0xbf800000;
                }
                a3 = NULL;
                ppuVar5 = (u8 **)0xffffffff;
                CAnimBody_SetAnimation(a0 + 0x2c, 0xc, 0xffffffff, 0);
            } else if (iVar1 == 4) {
                Vec3_set_xyz(auStack_b4, uVar3, ppuVar5, a3);
                Vec3_vec_023484(a0 + 5, auStack_b4, ppuVar5, a3, auStack_c4);
                Vec3_assign(a0 + 5, auStack_c4, ppuVar5, a3);
                Vec3_dtor(auStack_c4, 0xffffffff, ppuVar5, a3);
                object_dtor_delete(auStack_b4, 0xffffffff, ppuVar5, a3);
                ppuVar5 = a0 + 0x9e;
                if (cVar8 == '\0') {
                    *ppuVar5 = (u8 *)0x3f333333;
                } else {
                    ppuVar5[0] = (u8 *)0x3f333333;
                    ppuVar5[1] = (u8 *)0xbf800000;
                }
                a3 = NULL;
                ppuVar5 = (u8 **)0xffffffff;
                CAnimBody_SetAnimation(a0 + 0x2c, 0xb, 0xffffffff, 0);
            }
            ppuVar4 = a0 + 5;
            Vec3_assign(a0 + 0x20, ppuVar4, ppuVar5, a3);
            if ((int)a0[0x4a] < 3) {
                CAnimBody_SetFrame(a0 + 0x2c, ppuVar4, ppuVar5, a3);
            } else {
                CAnimBody_SetFrame(a0 + 0x2c, ppuVar4, ppuVar5, a3);
            }
            a0[0x4b] = a0[0x4b] + 1;
            ppuVar4 = a0;
        case (u8 *)0xb:
            Vec3_scale(a0 + 5, &g_8c1365e8, ppuVar4, a3, auStack_d4);
            Vec3_add(a1, auStack_d4, ppuVar4, a3, auStack_e4);
            timer_vec_031c74(a0, auStack_e4, a1, a3);
            Vec3_dtor(auStack_e4, 0xffffffff, a1, a3);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_d4, 0xffffffff, a1, a3);
            game_vec_05ae54(a0, uVar3, a1, a3);
            iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0x2c, a0 + 0x9e, a1, a3);
            ppuVar4 = a1;
            if (iVar1 == 1) {
                a3 = NULL;
                ppuVar4 = (u8 **)0xffffffff;
                CAnimBody_SetAnimation(a0 + 0x2c, 0, 0xffffffff, 0);
                uVar3 = 0xb0;
                CAnimBody_SetFrame(a0 + 0x2c, 0xb0, ppuVar4, a3);
                timer_start_94(a0, uVar3, ppuVar4);
                a0[0x4b] = a0[0x4b] + 1;
            }
        switchD_8c0572ba_caseD_5:
            Vec3_assign(a0 + 0x20, a0 + 5, ppuVar4, a3);
            return uVar7;
        case (u8 *)0xc:
            Vec3_scale(a0 + 5, &g_8c1365ec, &switchD_8c0572ba::switchdataD_8c0572c4, a3, auStack_f4);
            Vec3_add(a1, auStack_f4, ppuVar4, a3, auStack_104);
            timer_vec_031c74(a0, auStack_104, a1, a3);
            Vec3_dtor(auStack_104, 0xffffffff, a1, a3);
            uVar3 = 0xffffffff;
            a3 = Vec3_dtor;
            Vec3_dtor(auStack_f4, 0xffffffff, a1, Vec3_dtor);
            pcVar6 = game_vec_05ae54;
            game_vec_05ae54(a0, uVar3, game_vec_05ae54, a3);
            iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0x2c, 0xb0, pcVar6, a3);
            ppuVar4 = (u8 **)pcVar6;
            if (iVar1 == 1) {
                uVar7 = 0;
                a0[0x4b] = NULL;
                ppuVar4 = (u8 **)pcVar6;
            }
            goto switchD_8c0572ba_caseD_5;
        }
    } while (true);
}

/*
 * game_vec_057b6c  0x8c057b6c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4, Vec3_vec_04e0e0, game_state_switch_04c314, game_state_switch_0526a0,
 * game_vec_053f24, game_vec_058d60, game_vec_0593cc
 */
u32 game_vec_057b6c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 *puVar2;
    u32 uVar3;
    int iVar4;
    u32 ar6_00;
    u32 ar7_00;
    int iVar5;
    u32 uVar6;
    u64 in_dr0;
    u64 uVar7;
    double dVar8;
    float fVar9;
    double in_dr14;
    u64 in_xd14;
    u64 uVar10;
    bool bVar11;
    char cVar12;
    char cVar13;
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[20];
    u32 uStack_10;

    cVar13 = '\0';
    cVar12 = '\0';
    uStack_10 = 1;
    Vec3_sub(a2, a1, a2, a3, auStack_34);
    Vec3_normalize(auStack_34, a1, a2, a3);
    Vec3_ctor_copy(auStack_24, auStack_44, a2, a3);
    Vec3_dtor(auStack_44, 0xffffffff, a2, a3);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_34, 0xffffffff, a2, a3);
    Vec3_make(a0 + 0x14, uVar3, a2, a3, auStack_54);
    Vec3_make(auStack_24, uVar3, a2, a3, auStack_64);
    Vec3_cos_angle(auStack_54, auStack_64, a2, a3);
    uVar10 = in_dr0;
    if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)in_dr0 >> 0x20));
        uVar10 = in_xd14;
    }
    Vec3_dtor(auStack_64, 0xffffffff, a2, a3);
    uVar6 = (u32)in_dr0;
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_54, 0xffffffff, a2, a3);
    clear_3_words(a0 + 0x2c8, uVar3, a2, a3);
    uVar7 = (u64)uVar6;
    if (cVar13 == '\0') {
        *(u32 *)(a0 + 0x28) = 0;
    } else {
        *(u64 *)(a0 + 0x28) = uVar7;
    }
    *(u32 *)(a0 + 0x2b8) = 6;
    uVar3 = Vec3_angle_code_90(a0 + 0x14, auStack_24, a2, a3);
    *(u32 *)(a0 + 0x27c) = uVar3;
    if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(0x420c0000, (int)uVar7);
    } else {
        dVar8 = 1.49443250242844e-311;
    }
    fVar9 = SUB84(in_dr14, 0);
    if (cVar12 == '\0') {
        bVar11 = (float)((u64)dVar8 >> 0x20) < fVar9;
    } else {
        bVar11 = dVar8 < in_dr14;
    }
    if (bVar11) {
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(0x42870000, SUB84(dVar8, 0));
        } else {
            dVar8 = 85899362951.0;
        }
        if (cVar12 == '\0') {
            bVar11 = (float)((u64)dVar8 >> 0x20) < fVar9;
        } else {
            bVar11 = dVar8 < in_dr14;
        }
        if (bVar11) {
            if (cVar13 == '\0') {
                *(u32 *)(a0 + 0x2c0) = 0x3f800000;
            } else {
                *(u64 *)(a0 + 0x2c0) = CONCAT44(0x3f800000, SUB84(dVar8, 0));
            }
            iVar5 = 1;
        } else {
            if (cVar13 == '\0') {
                dVar8 = (double)CONCAT44(0x42340000, SUB84(dVar8, 0));
            } else {
                dVar8 = -0.007812501926764526;
            }
            if (cVar12 == '\0') {
                fVar9 = fVar9 / (float)((u64)dVar8 >> 0x20);
            } else {
                fVar9 = SUB84(in_dr14 / dVar8, 0);
            }
            if (cVar13 == '\0') {
                *(float *)(a0 + 0x2c0) = fVar9;
            } else {
                *(u64 *)(a0 + 0x2c0) = uVar10;
            }
            iVar5 = 1;
        }
    } else {
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(0x41a00000, SUB84(dVar8, 0));
        } else {
            dVar8 = 3161096467456.0;
        }
        if (cVar12 == '\0') {
            fVar9 = fVar9 / (float)((u64)dVar8 >> 0x20);
        } else {
            fVar9 = SUB84(in_dr14 / dVar8, 0);
        }
        if (cVar13 == '\0') {
            *(float *)(a0 + 0x2c0) = fVar9;
        } else {
            *(u64 *)(a0 + 0x2c0) = uVar10;
        }
        iVar5 = 0;
    }
    if (*(int *)(a0 + 0x27c) == 3) {
        ar7_00 = 0;
        ar6_00 = 0xffffffff;
        iVar4 = iVar5 + 0x41;
        CAnimBody_SetAnimation(a0 + 0xb0, iVar4, 0xffffffff, 0);
        uVar3 = get_field_1c_on_field_b0(a0, iVar4, ar6_00);
        uVar1 = array_at_field_14(a0 + 0xb0, uVar3, ar6_00, ar7_00);
        puVar2 = (u32 *)deref_u32(uVar1);
        uVar1 = puVar2[1];
        *(u32 *)(a0 + 0xb4) = *puVar2;
        *(u32 *)(a0 + 0xb8) = uVar1;
        *(u32 *)(a0 + 0xbc) = puVar2[2];
        if (*(int *)(a0 + 0x128) == 3) {
            *(u8 **)(a0 + 0xb4) = &g_8c135ebc + iVar5 * 0x18;
        } else {
            *(u8 **)(a0 + 0xb4) = &g_8c13600c + iVar5 * 0x18;
        }
    } else {
        ar7_00 = 0;
        ar6_00 = 0xffffffff;
        iVar4 = iVar5 + 0x44;
        CAnimBody_SetAnimation(a0 + 0xb0, iVar4, 0xffffffff, 0);
        uVar3 = get_field_1c_on_field_b0(a0, iVar4, ar6_00);
        uVar1 = array_at_field_14(a0 + 0xb0, uVar3, ar6_00, ar7_00);
        puVar2 = (u32 *)deref_u32(uVar1);
        uVar1 = puVar2[1];
        *(u32 *)(a0 + 0xb4) = *puVar2;
        *(u32 *)(a0 + 0xb8) = uVar1;
        *(u32 *)(a0 + 0xbc) = puVar2[2];
        if (*(int *)(a0 + 0x128) == 3) {
            *(u8 **)(a0 + 0xb4) = &g_8c135f04 + iVar5 * 0x18;
        } else {
            *(u8 **)(a0 + 0xb4) = &g_8c136054 + iVar5 * 0x18;
        }
    }
    CAnimBody_SetFrame(a0 + 0xb0, uVar3, ar6_00, ar7_00);
    Vec3_dtor(auStack_24, 0xffffffff, ar6_00, ar7_00);
    return 1;
}

/*
 * game_vec_057e58  0x8c057e58
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_vec_04e0e0, game_state_switch_04c314, game_state_switch_0526a0, game_vec_053f24, game_vec_058d60,
 * game_vec_0593cc
 */
u32 game_vec_057e58(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    float fVar3;
    double dVar4;
    u64 in_dr4;
    u64 in_xd0;
    u32 in_PR;
    char cVar5;
    char cVar6;
    u32 uStack_50;
    u8 auStack_4c[16];
    u8 auStack_3c[12];
    u8 auStack_30[12];
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    float fStack_18;
    float fStack_14;
    float fStack_10;
    u32 uStack_c;

    cVar6 = '\0';
    cVar5 = '\0';
    uVar2 = (u32)((u64)in_dr4 >> 0x20);
    uStack_c = in_PR;
    Vec3_set_zero(&fStack_18);
    Vec3_set_zero(&uStack_24);
    CAnimBody_GetCurFrame(a0 + 0xb0, a1, a2, a3);
    game_vec_034650(a0 + 0xb0, *(u32 *)(*(int *)(a0 + 0xb4) + 4), a2, a3);
    vec3_copy_8c023d8c(&uStack_24, auStack_30, a2, a3);
    object_dtor_delete(auStack_30, 0xffffffff, a2, a3);
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x2c8), uStack_24);
    } else {
        in_xd0 = CONCAT44(uStack_20, uStack_24);
        dVar4 = *(double *)(a0 + 0x2c8);
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 - dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x2c0), fVar3);
    } else {
        dVar4 = *(double *)(a0 + 0x2c0);
    }
    if (cVar5 == '\0') {
        fStack_18 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fStack_18 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x2cc), uStack_20);
    } else {
        fStack_18 = (float)in_xd0;
        in_xd0 = CONCAT44(uStack_1c, uStack_20);
        dVar4 = *(double *)(a0 + 0x2cc);
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 - dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x2c0), fVar3);
    } else {
        dVar4 = *(double *)(a0 + 0x2c0);
    }
    if (cVar5 == '\0') {
        fStack_14 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fStack_14 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x2d0), uStack_1c);
    } else {
        fStack_14 = (float)in_xd0;
        in_xd0 = CONCAT44(fStack_18, uStack_1c);
        dVar4 = *(double *)(a0 + 0x2d0);
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 - dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x2c0), fVar3);
    } else {
        dVar4 = *(double *)(a0 + 0x2c0);
    }
    if (cVar5 == '\0') {
        fStack_10 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fStack_10 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 != '\0') {
        fStack_10 = (float)in_xd0;
        uStack_c = (u32)((u64)in_xd0 >> 0x20);
    }
    vec3_copy_8c023d8c(a0 + 0x2c8, &uStack_24, a2, a3);
    vec3_copy_8c02b5fc(auStack_3c, &fStack_18, a2);
    Vec3_vec_023484(a0 + 0x14, auStack_3c, a2, a3, auStack_4c);
    Vec3_assign(a0 + 0x14, auStack_4c, a2, a3);
    Vec3_dtor(auStack_4c, 0xffffffff, a2, a3);
    uVar2 = 0xffffffff;
    object_dtor_delete(auStack_3c, 0xffffffff, a2, a3);
    Vec3_length(a0 + 0x14, uVar2, a2, a3);
    iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar2, a2, a3);
    if (iVar1 == 1) {
        *(u32 *)(a0 + 0x2b8) = 0;
        Vec3_assign_f_023d7c(a0 + 0x2c8, uVar2);
    }
    object_dtor_delete(&uStack_24, 0xffffffff, a2, a3);
    object_dtor_delete(&fStack_18, 0xffffffff, a2, a3);
    uStack_50 = (u32)(iVar1 != 1);
    return uStack_50;
}

/*
 * game_vec_058024  0x8c058024
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_state_switch_04eb14, game_vec_058d60, game_vec_0593cc, game_vec_059fc4
 */
u32 game_vec_058024(int a0, code *a1, u32 a2, code *a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 *puVar5;
    double *ar5_00;
    int iVar6;
    u8 *puVar7;
    code *pcVar8;
    code *ar7_00;
    u8 *puVar9;
    u8 *puVar10;
    u32 uVar11;
    u32 uVar12;
    u32 uVar13;
    double in_dr0;
    double dVar14;
    double dVar15;
    u64 uVar16;
    u32 in_fr3;
    float fVar17;
    u32 in_fr12;
    double in_dr14;
    double in_xd0;
    u64 in_xd14;
    u64 uVar18;
    char cVar19;
    char cVar20;
    int in_stack_00000000;
    u8 auStack_150[16];
    u8 auStack_140[12];
    u8 auStack_134[16];
    u8 auStack_124[12];
    u8 auStack_118[16];
    u8 auStack_108[12];
    u8 auStack_fc[16];
    u8 auStack_ec[16];
    u8 auStack_dc[16];
    u8 auStack_cc[16];
    u8 auStack_bc[16];
    u8 auStack_ac[16];
    u8 auStack_9c[16];
    u8 auStack_8c[16];
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[4];
    float fStack_48;
    u32 uStack_44;
    u8 auStack_3c[4];

    cVar20 = '\0';
    cVar19 = '\0';
    uVar11 = 1;
    pcVar8 = a1;
    ar7_00 = a3;
    uVar13 = a2;
    Vec3_ctor_zero(auStack_3c, a1, a2);
    Vec3_ctor_zero(auStack_4c, pcVar8, a2);
    Vec3_ctor_zero(auStack_5c, pcVar8, a2);
    puVar10 = NULL;
    puVar9 = NULL;
    if (*(int *)(a0 + 0x29c) == 0) {
        vec3_clear(a0 + 0x2d4, 0x2d4, a2, ar7_00);
        uVar12 = SUB84(in_dr0, 0);
        uVar3 = 0x2a8;
        vec3_clear(a0 + 0x2a8, 0x2a8, a2, ar7_00);
        vec3_clear(a0 + 0x90, uVar3, a2, ar7_00);
        pcVar8 = vec3_clear;
        vec3_clear(a0 + 0x6c, vec3_clear, a2, ar7_00);
        Vec3_make(a0 + 0x14, pcVar8, a2, ar7_00, auStack_6c);
        Vec3_normalize(auStack_6c, pcVar8, a2, ar7_00);
        Vec3_assign(a0 + 0x14, auStack_7c, a2, ar7_00);
        Vec3_dtor(auStack_7c, 0xffffffff, a2, ar7_00);
        Vec3_dtor(auStack_6c, 0xffffffff, a2, ar7_00);
        if (cVar20 == '\0') {
            *(u32 *)(a0 + 0xa0) = 0;
            uVar16 = CONCAT44(*(u32 *)(a1 + 4), uVar12);
            *(u32 *)(a0 + 0x2e4) = *(u32 *)(a1 + 4);
        } else {
            *(u64 *)(a0 + 0xa0) = (u64)uVar12;
            uVar16 = *(u64 *)(a1 + 4);
            *(u64 *)(a0 + 0x2e4) = uVar16;
        }
        if (in_stack_00000000 == -1) {
            uVar3 = 3;
            iVar6 = 0;
            iVar2 = rand_range(a0, 0, 3);
            if (a3 == (code *)0x1b) {
                ar7_00 = NULL;
                uVar3 = 0xffffffff;
                iVar6 = iVar2 + 0x50;
                CAnimBody_SetAnimation(a0 + 0xb0, iVar6, 0xffffffff, 0);
            } else if (a3 == (code *)0x1c) {
                ar7_00 = NULL;
                uVar3 = 0xffffffff;
                iVar6 = iVar2 + 0x53;
                CAnimBody_SetAnimation(a0 + 0xb0, iVar6, 0xffffffff, 0);
            } else if (a3 == (code *)0x1d) {
                ar7_00 = NULL;
                uVar3 = 0xffffffff;
                iVar6 = 0x53;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x53, 0xffffffff, 0);
            } else if (a3 == (code *)0x1e) {
                ar7_00 = NULL;
                uVar3 = 0xffffffff;
                iVar6 = 0x58;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x58, 0xffffffff, 0);
            }
            CAnimBody_SetFrame(a0 + 0xb0, iVar6, uVar3, ar7_00);
        } else if (in_stack_00000000 == -2) {
            ar7_00 = NULL;
            uVar3 = 0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x55, 0xffffffff, 0);
        } else {
            ar7_00 = NULL;
            uVar3 = 0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, in_stack_00000000, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, in_stack_00000000, uVar3, ar7_00);
        }
        *(u32 *)(a0 + 0x2e8) = 1;
        Vec3_make(a1, 1, uVar3, ar7_00, auStack_8c);
        Vec3_make(uVar13, Vec3_make, uVar3, ar7_00, auStack_9c);
        Vec3_distance_sq(auStack_8c, auStack_9c, uVar3, ar7_00);
        uVar18 = uVar16;
        if (cVar20 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)uVar16 >> 0x20));
            uVar18 = in_xd14;
        }
        Vec3_dtor(auStack_9c, 0xffffffff, uVar3, ar7_00);
        uVar4 = (u32)uVar16;
        Vec3_dtor(auStack_8c, 0xffffffff, uVar3, ar7_00);
        if (cVar20 == '\0') {
            *(u32 *)(a0 + 0x2c0) = 0x3f800000;
        } else {
            *(u64 *)(a0 + 0x2c0) = CONCAT44(0x3f800000, uVar4);
        }
        in_dr0 = (double)CONCAT44(0x3f800000, uVar4);
        if (cVar20 == '\0') {
            *(u32 *)(a0 + 0x2c4) = 0x3f800000;
        } else {
            *(double *)(a0 + 0x2c4) = in_dr0;
        }
        pcVar8 = get_field_1c_026dd8;
        iVar2 = get_field_1c_026dd8(a0 + 0xb0, get_field_1c_026dd8, uVar3);
        if (iVar2 == 0x50) {
            if (cVar20 == '\0') {
                in_dr0 = (double)CONCAT44(0x43a07481, SUB84(in_dr0, 0));
            } else {
                in_dr0 = 3.5683445164698805e+163;
            }
            if (cVar19 == '\0') {
                fVar17 = SUB84(in_dr14, 0) / (float)((u64)in_dr0 >> 0x20);
            } else {
                fVar17 = SUB84(in_dr14 / in_dr0, 0);
            }
            if (cVar20 == '\0') {
                *(float *)(a0 + 0x2c0) = fVar17;
            } else {
                *(u64 *)(a0 + 0x2c0) = uVar18;
            }
        } else if (iVar2 == 0x52) {
            if (cVar20 == '\0') {
                in_dr0 = (double)CONCAT44(0x43a5a000, SUB84(in_dr0, 0));
            } else {
                in_dr0 = 1.44351786672845e-311;
            }
            if (cVar19 == '\0') {
                fVar17 = SUB84(in_dr14, 0) / (float)((u64)in_dr0 >> 0x20);
            } else {
                fVar17 = SUB84(in_dr14 / in_dr0, 0);
            }
            if (cVar20 == '\0') {
                *(float *)(a0 + 0x2c0) = fVar17;
            } else {
                *(u64 *)(a0 + 0x2c0) = uVar18;
            }
        } else if (iVar2 == 0x58) {
            rand_float(a0, pcVar8, uVar3);
            if (cVar20 == '\0') {
                *(int *)(a0 + 0x2c4) = (int)((u64)in_dr0 >> 0x20);
                dVar14 = (double)CONCAT44(0x42080000, SUB84(in_dr0, 0));
            } else {
                *(double *)(a0 + 0x2c4) = in_dr0;
                dVar14 = 4.323456351280824e+17;
            }
            pcVar8 = (code *)(a0 + 0x2c0);
            if (cVar19 == '\0') {
                in_dr14 =
                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) - (float)((u64)dVar14 >> 0x20));
            } else {
                in_dr14 = in_dr14 - dVar14;
            }
            if (cVar20 == '\0') {
                in_dr0 = (double)CONCAT44(0x43980000, SUB84(dVar14, 0));
            } else {
                in_dr0 = 3.5682127120005427e+163;
            }
            if (cVar19 == '\0') {
                fVar17 = SUB84(in_dr14, 0) / (float)((u64)in_dr0 >> 0x20);
            } else {
                fVar17 = SUB84(in_dr14 / in_dr0, 0);
            }
            if (cVar20 == '\0') {
                *(float *)pcVar8 = fVar17;
            } else {
                *(u64 *)pcVar8 = uVar18;
            }
        }
        Vec3_assign_f(a0 + 0x2a8, pcVar8, uVar3, ar7_00);
        pcVar8 = Vec3_assign_f;
        Vec3_assign_f(a0 + 0x2d4, Vec3_assign_f, uVar3, ar7_00);
        uVar4 = get_field_1c_on_field_b0(a0, pcVar8, uVar3);
        uVar1 = array_at_field_14(a0 + 0xb0, uVar4, uVar3, ar7_00);
        puVar5 = (u32 *)deref_u32(uVar1);
        uVar3 = puVar5[1];
        *(u32 *)(a0 + 0xb4) = *puVar5;
        *(u32 *)(a0 + 0xb8) = uVar3;
        pcVar8 = (code *)puVar5[2];
        *(code **)(a0 + 0xbc) = pcVar8;
        a2 = 0x29c;
        *(int *)(a0 + 0x29c) = *(int *)(a0 + 0x29c) + 1;
        *(u32 *)(a0 + 800) = 0;
    } else if (*(int *)(a0 + 0x29c) != 1)
        goto LAB_8c058cde;
    fVar17 = 0.0;
    iVar2 = get_field_1c_026dd8(a0 + 0xb0, pcVar8, a2);
    if ((iVar2 < 0x59) && (0x4f < iVar2)) {
        switch (iVar2) {
        case 0x52:
            CAnimBody_GetCurFrame(a0 + 0xb0, pcVar8, a2, ar7_00);
            if (cVar20 == '\0') {
                dVar14 = (double)CONCAT44(0x42100000, (int)((u64)in_dr0 >> 0x20));
            } else {
                dVar14 = 1.69814422787745e-311;
                in_xd0 = in_dr0;
            }
            in_dr0 = dVar14;
            if (((cVar19 != '\0' || (float)((u64)in_dr0 >> 0x20) <= SUB84(in_dr0, 0)) && (*(int *)(a0 + 800) == 0)) &&
                (pcVar8 = a1, Vec3_assign(auStack_3c, a1, a2, ar7_00), *(char *)(a0 + 0x210) == '\x01')) {
                ar7_00 = (code *)0x5;
                a2 = 1;
                pcVar8 = (code *)auStack_3c;
                (**(code **)(**(int **)(a0 + 0x244) + 0xd0))(*(int **)(a0 + 0x244), pcVar8, 1, 5);
            }
        case 0x50:
        case 0x51:
            iVar2 = get_field_1c_026dd8(a0 + 0xb0, pcVar8, a2);
            puVar9 = &g_8c13612c + (iVar2 + -0x50) * 0x18;
            puVar10 = &g_8c13612c + (iVar2 + -0x50) * 0x18;
            break;
        default:
            pcVar8 = get_field_1c_026dd8;
            iVar2 = get_field_1c_026dd8(a0 + 0xb0, get_field_1c_026dd8, a2);
            puVar9 = &g_8c13609c + (iVar2 + -0x53) * 0x18;
            puVar10 = &g_8c13609c + (iVar2 + -0x53) * 0x18;
            break;
        case 0x56:
        case 0x57:
            break;
        case 0x58:
            CAnimBody_GetCurFrame(a0 + 0xb0, pcVar8, a2, ar7_00);
            if (cVar20 == '\0') {
                dVar14 = (double)CONCAT44(0x42a20000, (int)((u64)in_dr0 >> 0x20));
            } else {
                dVar14 = 1.49443735929137e-311;
                in_xd0 = in_dr0;
            }
            in_dr0 = dVar14;
            if (cVar19 == '\0' && (float)((u64)in_dr0 >> 0x20) < SUB84(in_dr0, 0)) {
                in_dr0 = (double)CONCAT44(0x3f800000, SUB84(in_dr0, 0));
                if (cVar20 == '\0') {
                    *(u32 *)(a0 + 0x2c0) = 0x3f800000;
                } else {
                    *(double *)(a0 + 0x2c0) = in_dr0;
                }
            }
            puVar9 = &g_8c1361d4;
            puVar10 = &g_8c1361d4;
            fVar17 = 0.0;
        }
    }
    uVar1 = SUB84(in_dr0, 0);
    uVar3 = get_field_1c_026dd8(a0 + 0xb0, pcVar8, a2);
    uVar4 = array_at_field_14(a0 + 0xb0, uVar3, a2, ar7_00);
    puVar5 = (u32 *)deref_u32(uVar4);
    uVar4 = puVar5[1];
    *(u32 *)(a0 + 0xb4) = *puVar5;
    *(u32 *)(a0 + 0xb8) = uVar4;
    *(u32 *)(a0 + 0xbc) = puVar5[2];
    *(u8 **)(a0 + 0xb4) = puVar10;
    CAnimBody_GetCurFrame(a0 + 0xb0, uVar3, a2, ar7_00);
    CAnimBody_vec_034384(a0 + 0xb0, **(u32 **)(a0 + 0xb4), a2, ar7_00);
    Vec3_assign(auStack_4c, auStack_ac, a2, ar7_00);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_ac, 0xffffffff, a2, ar7_00);
    if (cVar20 == '\0') {
        dVar14 = (double)CONCAT44(fStack_48, uVar1);
    } else {
        dVar14 = (double)CONCAT44(uStack_44, fStack_48);
    }
    if (cVar19 == '\0') {
        fVar17 = (float)((u64)dVar14 >> 0x20) - fVar17;
    } else {
        fVar17 = (float)((u64)(dVar14 - (double)CONCAT44(in_fr12, fVar17)) >> 0x20);
    }
    if (cVar20 != '\0') {
    }
    uVar3 = get_field_1c_026dd8(a0 + 0xb0, uVar3, a2);
    uVar4 = array_at_field_14(a0 + 0xb0, uVar3, a2, ar7_00);
    puVar5 = (u32 *)deref_u32(uVar4);
    uVar3 = puVar5[1];
    *(u32 *)(a0 + 0xb4) = *puVar5;
    *(u32 *)(a0 + 0xb8) = uVar3;
    uVar3 = puVar5[2];
    *(u32 *)(a0 + 0xbc) = uVar3;
    *(u8 **)(a0 + 0xb4) = puVar9;
    CAnimBody_GetCurFrame(a0 + 0xb0, uVar3, a2, ar7_00);
    uVar3 = **(u32 **)(a0 + 0xb4);
    CAnimBody_vec_034384(a0 + 0xb0, uVar3, uVar3, ar7_00);
    pcVar8 = Vec3_assign;
    Vec3_assign(auStack_4c, auStack_bc, uVar3, Vec3_assign);
    Vec3_dtor(auStack_bc, 0xffffffff, 0xffffffff, pcVar8);
    puVar7 = auStack_3c;
    Vec3_sub(puVar7, a0 + 0x2d4, puVar7, a0 + 0x2d4, auStack_cc);
    pcVar8 = Vec3_assign;
    Vec3_assign(a0 + 0x2a8, auStack_cc, puVar7, Vec3_assign);
    Vec3_dtor(auStack_cc, 0xffffffff, 0xffffffff, pcVar8);
    if (cVar20 == '\0') {
        dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x2c0), *(u32 *)(a0 + 0x2b0));
    } else {
        in_xd0 = *(double *)(a0 + 0x2b0);
        dVar14 = *(double *)(a0 + 0x2c0);
    }
    if (cVar19 == '\0') {
        fVar17 = SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20);
    } else {
        fVar17 = SUB84(dVar14 * dVar14, 0);
    }
    if (cVar20 == '\0') {
        *(float *)(a0 + 0x2b0) = fVar17;
        fVar17 = *(float *)(a0 + 0x2ac);
    } else {
        *(double *)(a0 + 0x2b0) = in_xd0;
        in_xd0 = *(double *)(a0 + 0x2ac);
    }
    uVar3 = 0x2c4;
    if (cVar20 == '\0') {
        dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x2c4), fVar17);
    } else {
        dVar14 = *(double *)(a0 + 0x2c4);
    }
    if (cVar19 == '\0') {
        fVar17 = SUB84(dVar14, 0) * (float)((u64)dVar14 >> 0x20);
    } else {
        fVar17 = SUB84(dVar14 * dVar14, 0);
    }
    if (cVar20 == '\0') {
        *(float *)(a0 + 0x2ac) = fVar17;
    } else {
        *(double *)(a0 + 0x2ac) = in_xd0;
    }
    ar7_00 = Vec3_make;
    Vec3_make(a0 + 0x14, 0x2c4, a0 + 0x2ac, Vec3_make, auStack_dc);
    puVar7 = auStack_ec;
    Vec3_ctor_xyz(puVar7, uVar3, puVar7, ar7_00);
    Vec3_cos_angle(auStack_dc, auStack_ec, puVar7, ar7_00);
    Vec3_dtor(auStack_ec, 0xffffffff, puVar7, ar7_00);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_dc, 0xffffffff, puVar7, ar7_00);
    Vec3_ctor_xyz(auStack_fc, uVar3, puVar7, ar7_00);
    iVar2 = Vec3_angle_code_90(a0 + 0x14, auStack_fc, puVar7, ar7_00);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_fc, 0xffffffff, puVar7, ar7_00);
    if (iVar2 == 3) {
        Vec3_set_xyz(auStack_108, uVar3, puVar7, ar7_00);
        Vec3_vec_023484(a0 + 0x2a8, auStack_108, puVar7, ar7_00, auStack_118);
        Vec3_assign(a0 + 0x2a8, auStack_118, puVar7, ar7_00);
        Vec3_dtor(auStack_118, 0xffffffff, puVar7, ar7_00);
        object_dtor_delete(auStack_108, 0xffffffff, puVar7, ar7_00);
    } else if (iVar2 == 4) {
        Vec3_set_xyz(auStack_124, uVar3, puVar7, ar7_00);
        Vec3_vec_023484(a0 + 0x2a8, auStack_124, puVar7, ar7_00, auStack_134);
        Vec3_assign(a0 + 0x2a8, auStack_134, puVar7, ar7_00);
        Vec3_dtor(auStack_134, 0xffffffff, puVar7, ar7_00);
        object_dtor_delete(auStack_124, 0xffffffff, puVar7, ar7_00);
    }
    Vec3_assign(a0 + 0x2d4, auStack_3c, puVar7, ar7_00);
    ar5_00 = (double *)(a0 + 0x2e4);
    uVar3 = 0x2e4;
    if (cVar20 == '\0') {
        dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x2ac), *(u32 *)(a0 + 0x2e4));
    } else {
        in_xd0 = *(double *)(a0 + 0x2e4);
        dVar14 = *(double *)(a0 + 0x2ac);
    }
    if (cVar19 == '\0') {
        fVar17 = SUB84(dVar14, 0) + (float)((u64)dVar14 >> 0x20);
    } else {
        fVar17 = SUB84(dVar14 + dVar14, 0);
    }
    if (cVar20 == '\0') {
        *(float *)ar5_00 = fVar17;
        dVar14 = (double)CONCAT44(*(u32 *)(a1 + 4), in_fr3);
        dVar15 = (double)CONCAT44(*(u32 *)(a0 + 0x2ac), fVar17);
    } else {
        *ar5_00 = in_xd0;
        dVar14 = *(double *)(a1 + 4);
        dVar15 = *(double *)(a0 + 0x2ac);
    }
    fVar17 = (float)((u64)dVar15 >> 0x20);
    if (cVar19 == '\0') {
        dVar14 = (double)CONCAT44((float)((u64)dVar14 >> 0x20) + fVar17, SUB84(dVar14, 0));
    } else {
        dVar14 = dVar14 + dVar15;
    }
    if (cVar20 == '\0') {
        dVar15 = (double)CONCAT44(fVar17, *(u32 *)(a0 + 0x2e4));
    } else {
        in_xd0 = *(double *)(a0 + 0x2e4);
    }
    if (cVar19 == '\0') {
        fVar17 = SUB84(dVar15, 0) - (float)((u64)dVar14 >> 0x20);
    } else {
        fVar17 = SUB84(dVar15 - dVar14, 0);
    }
    if (cVar20 == '\0') {
        dVar14 = (double)CONCAT44(*(u32 *)(a0 + 0x2ac), fVar17);
    } else {
        dVar14 = *(double *)(a0 + 0x2ac);
    }
    if (cVar19 == '\0') {
        fVar17 = SUB84(dVar14, 0) + (float)((u64)dVar14 >> 0x20);
    } else {
        fVar17 = SUB84(dVar14 + dVar14, 0);
    }
    if (cVar20 == '\0') {
        *(float *)(a0 + 0x2ac) = fVar17;
    } else {
        *(double *)(a0 + 0x2ac) = in_xd0;
    }
    uVar16 = CONCAT44(0x3f800000, fVar17);
    if (cVar20 == '\0') {
        *(u32 *)(a0 + 0x278) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x278) = uVar16;
    }
    iVar2 = get_field_1c_026dd8(a0 + 0xb0, ar5_00, 0x2e4);
    if (iVar2 == 0x55) {
        CAnimBody_GetCurFrame(a0 + 0xb0, ar5_00, uVar3, ar7_00);
        if (cVar20 == '\0') {
            uVar16 = CONCAT44(0x42100000, (int)((u64)uVar16 >> 0x20));
        } else {
            uVar16 = 0x3e99999a42100000;
        }
        if (cVar19 == '\0' && (float)((u64)uVar16 >> 0x20) < (float)uVar16) {
            ar7_00 = (code *)(a0 + 0x278);
            if (cVar20 == '\0') {
                uVar16 = CONCAT44(0x3e99999a, (float)uVar16);
                *(u32 *)ar7_00 = 0x3e99999a;
            } else {
                uVar16 = 0x8c033b983e99999a;
                *(u64 *)ar7_00 = 0x8c033b983e99999a;
            }
        }
    }
    uVar13 = (u32)uVar16;
    a2 = 0x278;
    iVar6 = a0 + 0x278;
    iVar2 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar6, 0x278, ar7_00);
    if (iVar2 != 1)
        goto LAB_8c058cde;
    iVar2 = get_field_1c_026dd8(a0 + 0xb0, iVar6, a2);
    if (iVar2 == 0x50) {
        *(u32 *)(a0 + 0x2e8) = 1;
        *(u32 *)(a0 + 0x29c) = 0;
    } else {
        if (iVar2 != 0x51) {
            if (iVar2 != 0x52) {
                *(u32 *)(a0 + 0x2e8) = 2;
                *(u32 *)(a0 + 0x29c) = 0;
                goto LAB_8c058cae;
            }
            *(u32 *)(a0 + 0x2e8) = 2;
            Vec3_set_xyz(auStack_140, iVar6, a2, ar7_00);
            Vec3_vec_023484(a0 + 0x14, auStack_140, a2, ar7_00, auStack_150);
            Vec3_assign(a0 + 0x14, auStack_150, a2, ar7_00);
            Vec3_dtor(auStack_150, 0xffffffff, a2, ar7_00);
            uVar11 = 0xffffffff;
            object_dtor_delete(auStack_140, 0xffffffff, a2, ar7_00);
            Vec3_length(a0 + 0x14, uVar11, a2, ar7_00);
            iVar6 = a0 + 0x14;
            Vec3_assign(a0 + 0x80, iVar6, a2, ar7_00);
        }
        *(u32 *)(a0 + 0x2e8) = 2;
        *(u32 *)(a0 + 0x29c) = 0;
    }
LAB_8c058cae:
    uVar11 = 0;
    Vec3_assign_f(a0 + 0x2a8, iVar6, a2, ar7_00);
    Vec3_assign_f(a0 + 0x2d4, iVar6, a2, ar7_00);
    if (cVar20 == '\0') {
        *(u32 *)(a0 + 0x278) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x278) = CONCAT44(0x3f800000, uVar13);
    }
LAB_8c058cde:
    Vec3_dtor(auStack_5c, 0xffffffff, a2, ar7_00);
    Vec3_dtor(auStack_4c, 0xffffffff, a2, ar7_00);
    Vec3_dtor(auStack_3c, 0xffffffff, a2, ar7_00);
    return uVar11;
}

/*
 * game_vec_058d60  0x8c058d60
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4
 */
u32 game_vec_058d60(int a0, u32 a1, u8 *a2, u8 *a3) {
    int iVar1;
    code *ar5_00;
    u8 *puVar2;
    u32 uVar3;
    u8 *ar6_00;
    u8 *ar7_00;
    u32 uVar4;
    float fVar5;
    u64 in_dr0;
    double dVar6;
    float fVar7;
    char cVar8;
    char cVar9;
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
    u8 auStack_70[16];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u8 auStack_20[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar4 = 1;
    ar5_00 = Vec3_ctor_zero;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_20, Vec3_ctor_zero, a2);
    Vec3_ctor_zero(auStack_30, ar5_00, ar6_00);
    Vec3_assign(auStack_30, a2, ar6_00, ar7_00);
    *(u32 *)(a0 + 0x178) = 1;
    iVar1 = *(int *)(a0 + 300);
    if ((iVar1 < 7) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            *(u32 *)(a0 + 0x214) = 0;
            ar6_00 = (u8 *)(a0 + 0x34c);
            iVar1 = game_vec_055c38(a0, a1, ar6_00, a3);
            ar7_00 = a3;
            if (iVar1 == 0) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 0x40) = 5;
            }
            break;
        case 1:
            uVar3 = a1;
            iVar1 = game_uses_get_field_1c_057164(a0, a1, ar6_00, ar7_00);
            if (iVar1 == 0) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 0x40) = 5;
                Vec3_make(auStack_30, uVar3, ar6_00, ar7_00, auStack_40);
                Vec3_make(a1, uVar3, ar6_00, ar7_00, auStack_50);
                puVar2 = auStack_50;
                Vec3_sub(auStack_40, puVar2, ar6_00, ar7_00, auStack_60);
                Vec3_normalize(auStack_60, puVar2, ar6_00, ar7_00);
                Vec3_assign(a0 + 0x54, auStack_70, ar6_00, ar7_00);
                Vec3_dtor(auStack_70, 0xffffffff, ar6_00, ar7_00);
                Vec3_dtor(auStack_60, 0xffffffff, ar6_00, ar7_00);
                Vec3_dtor(auStack_50, 0xffffffff, ar6_00, ar7_00);
                Vec3_dtor(auStack_40, 0xffffffff, ar6_00, ar7_00);
                Vec3_scale(a0 + 0x54, &g_8c1365f0, ar6_00, ar7_00, auStack_80);
                Vec3_sub(auStack_30, auStack_80, ar6_00, ar7_00, auStack_90);
                Vec3_assign(a0 + 0x248, auStack_90, ar6_00, ar7_00);
                Vec3_dtor(auStack_90, 0xffffffff, ar6_00, ar7_00);
                Vec3_dtor(auStack_80, 0xffffffff, ar6_00, ar7_00);
                if (cVar9 == '\0') {
                    dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x48), *(u32 *)(a0 + 0x250));
                } else {
                    dVar6 = *(double *)(a0 + 0x48);
                }
                if (cVar8 == '\0') {
                    fVar5 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
                } else {
                    fVar5 = SUB84(dVar6 - dVar6, 0);
                }
                if (cVar8 != '\0' || fVar5 <= 0.0) {
                    Vec3_assign(a0 + 0x248, a1, ar6_00, ar7_00);
                }
                *(u32 *)(a0 + 700) = 1;
            }
            break;
        case 2:
            Vec3_make(auStack_30, a2, ar6_00, ar7_00, auStack_a0);
            Vec3_make(a1, a2, ar6_00, ar7_00, auStack_b0);
            puVar2 = auStack_b0;
            Vec3_sub(auStack_a0, puVar2, ar6_00, ar7_00, auStack_c0);
            Vec3_normalize(auStack_c0, puVar2, ar6_00, ar7_00);
            Vec3_assign(a0 + 0x54, auStack_d0, ar6_00, ar7_00);
            Vec3_dtor(auStack_d0, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_c0, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_b0, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_a0, 0xffffffff, ar6_00, ar7_00);
            Vec3_ctor_copy(auStack_e0, a0 + 0x54, ar6_00, ar7_00);
            ar7_00 = auStack_e0;
            ar6_00 = (u8 *)(a0 + 0x248);
            iVar1 = Vec3_vec_04e0e0(a0, a1, ar6_00, ar7_00);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_e0, 0xffffffff, ar6_00, ar7_00);
            if (iVar1 == 0) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                flags6_clear_all(a0 + 0x1fc, uVar3, ar6_00, ar7_00);
                *(u32 *)(a0 + 0x2e8) = 1;
            }
            break;
        case 3:
            ar7_00 = (u8 *)0x1d;
            ar6_00 = auStack_30;
            iVar1 = game_vec_058024(a0, a1, ar6_00, 0x1d);
            if (iVar1 == 0) {
                Vec3_assign_f(a0 + 0x2a8, a1, ar6_00, ar7_00);
                Vec3_assign_f(a0 + 0x2d4, a1, ar6_00, ar7_00);
                *(u32 *)(a0 + 700) = 0;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            *(u32 *)(a0 + 0x2e8) = 1;
            break;
        case 4:
            Vec3_ctor_xyz(auStack_f0, a2, ar6_00, ar7_00);
            Vec3_add(a1, auStack_f0, ar6_00, ar7_00, auStack_100);
            ar6_00 = auStack_100;
            game_vec_057b6c(a0, a1, ar6_00, ar7_00);
            Vec3_dtor(auStack_100, 0xffffffff, ar6_00, ar7_00);
            a2 = (u8 *)0xffffffff;
            Vec3_dtor(auStack_f0, 0xffffffff, ar6_00, ar7_00);
            rand_float(a0, a2, ar6_00);
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x278) = (int)((u64)in_dr0 >> 0x20);
            } else {
                *(u64 *)(a0 + 0x278) = in_dr0;
            }
            *(u32 *)(a0 + 800) = 0;
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 5:
            fVar5 = (float)((u64)in_dr0 >> 0x20);
            iVar1 = game_vec_057e58(a0, a2, ar6_00, ar7_00);
            if (iVar1 == 0) {
                ar7_00 = NULL;
                ar6_00 = (u8 *)0xffffffff;
                uVar3 = 0x1a;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar3, ar6_00, ar7_00);
                Vec3_make(a0 + 0x14, uVar3, ar6_00, ar7_00, auStack_110);
                Vec3_ctor_xyz(auStack_120, uVar3, ar6_00, ar7_00);
                Vec3_cos_angle(auStack_110, auStack_120, ar6_00, ar7_00);
                if (cVar9 == '\0') {
                    fVar7 = 2.0;
                } else {
                    fVar5 = 2.0;
                    fVar7 = 8.319336e+12;
                }
                Vec3_dtor(auStack_120, 0xffffffff, ar6_00, ar7_00);
                Vec3_dtor(auStack_110, 0xffffffff, ar6_00, ar7_00);
                if (cVar8 != '\0' || fVar5 <= fVar7) {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                } else {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + -1;
                }
            }
            break;
        case 6:
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a2, ar6_00, ar7_00);
            *(u32 *)(a0 + 0x2e8) = 1;
            uVar4 = 0;
        }
    }
    Vec3_dtor(auStack_30, 0xffffffff, ar6_00, ar7_00);
    Vec3_dtor(auStack_20, 0xffffffff, ar6_00, ar7_00);
    return uVar4;
}

/*
 * game_vec_0593cc  0x8c0593cc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4
 */
u32 game_vec_0593cc(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    code *pcVar4;
    u32 uVar5;
    u32 uVar6;
    code *ar6_00;
    u8 *puVar7;
    u32 ar7_00;
    u32 ar7_01;
    u32 ar7_02;
    u32 uVar8;
    float fVar9;
    u64 in_dr0;
    u64 uVar10;
    double dVar11;
    float fVar12;
    u64 in_xd0;
    char cVar13;
    char cVar14;
    u32 in_stack_00000000;
    int in_stack_00000004;
    u32 uStack_100;
    u8 auStack_f0[16];
    u8 auStack_e0[16];
    u8 auStack_d0[16];
    u8 auStack_c0[16];
    u8 auStack_b0[16];
    u8 auStack_a0[16];
    u8 auStack_90[16];
    u8 auStack_80[16];
    u8 auStack_70[16];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[20];

    cVar14 = '\0';
    cVar13 = '\0';
    uVar8 = 1;
    ar7_00 = a3;
    Vec3_ctor_copy(auStack_30, in_stack_00000000, a2, a3);
    *(u32 *)(a0 + 0x178) = 1;
    uVar5 = 1;
    *(u32 *)(a0 + 0x2e8) = 1;
    iVar1 = *(int *)(a0 + 300);
    if ((iVar1 < 7) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            flags6_clear_all(a0 + 0x1fc, in_stack_00000000, 1, ar7_00);
            Vec3_ctor_xyz(auStack_40, in_stack_00000000, uVar5, ar7_00);
            Vec3_add(a3, auStack_40, uVar5, ar7_00, auStack_50);
            puVar7 = auStack_50;
            game_vec_057b6c(a0, a3, puVar7, ar7_00);
            Vec3_dtor(auStack_50, 0xffffffff, puVar7, ar7_00);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_40, 0xffffffff, puVar7, ar7_00);
            rand_float(a0, uVar2, puVar7);
            if (cVar14 == '\0') {
                *(int *)(a0 + 0x278) = (int)((u64)in_dr0 >> 0x20);
            } else {
                *(u64 *)(a0 + 0x278) = in_dr0;
            }
            uVar5 = 0;
            *(u32 *)(a0 + 800) = 0;
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            if (in_stack_00000004 == 0x1c) {
                uVar5 = 0x100;
                uVar2 = 0;
                iVar1 = rand_range(a0, 0, 0x100);
                if (iVar1 == 0) {
                    Vec3_assign_f(a0 + 0x2a8, uVar2, uVar5, ar7_00);
                    Vec3_assign_f(a0 + 0x2d4, uVar2, uVar5, ar7_00);
                    *(u32 *)(a0 + 300) = 5;
                    uVar6 = 0;
                    uVar2 = 0xffffffff;
                    uVar5 = 0x20;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x20, 0xffffffff, 0);
                    *(u32 *)(a0 + 0x218) = 5;
                    CAnimBody_SetFrame(a0 + 0xb0, uVar5, uVar2, uVar6);
                    break;
                }
            }
            uVar6 = (u32)((u64)in_dr0 >> 0x20);
            Vec3_make(a0 + 0x14, uVar2, uVar5, ar7_00, auStack_60);
            Vec3_ctor_xyz(auStack_70, uVar2, uVar5, ar7_00);
            Vec3_cos_angle(auStack_60, auStack_70, uVar5, ar7_00);
            if (cVar14 == '\0') {
                in_dr0 = CONCAT44(0x40000000, uVar6);
            } else {
                in_dr0 = 0x8c022cb040000000;
            }
            ar7_01 = (u32)(cVar13 == '\0' && (float)in_dr0 < (float)((u64)in_dr0 >> 0x20));
            ar7_00 = ar7_01;
            Vec3_dtor(auStack_70, 0xffffffff, uVar5, ar7_01);
            in_stack_00000000 = 0xffffffff;
            Vec3_dtor(auStack_60, 0xffffffff, uVar5, ar7_00);
            if (ar7_01 != 0) {
                *(u32 *)(a0 + 0x2b8) = 2;
                *(u32 *)(a0 + 300) = 2;
                vec3_clear(a0 + 0x2a8, in_stack_00000000, uVar5, ar7_00);
                pcVar4 = vec3_clear;
                vec3_clear(a0 + 0x2d4, vec3_clear, uVar5, ar7_00);
                if (in_stack_00000004 == 0x1d) {
                    uVar2 = (**(code **)(*a1 + 0x10c))(a1, pcVar4, uVar5, ar7_00);
                    set_fields_10_14_0d98d4(uVar2);
                }
                break;
            }
        case 1:
            fVar9 = (float)((u64)in_dr0 >> 0x20);
            iVar1 = game_vec_057e58(a0, in_stack_00000000, uVar5, ar7_00);
            if (iVar1 == 0) {
                Vec3_make(a0 + 0x14, in_stack_00000000, uVar5, ar7_00, auStack_80);
                Vec3_ctor_xyz(auStack_90, in_stack_00000000, uVar5, ar7_00);
                Vec3_cos_angle(auStack_80, auStack_90, uVar5, ar7_00);
                if (cVar14 == '\0') {
                    pcVar4 = (code *)0x40000000;
                } else {
                    fVar9 = 2.0;
                    pcVar4 = Vec3_dtor;
                }
                Vec3_dtor(auStack_90, 0xffffffff, uVar5, ar7_00);
                Vec3_dtor(auStack_80, 0xffffffff, uVar5, ar7_00);
                if (cVar13 != '\0' || fVar9 <= (float)pcVar4) {
                    *(u32 *)(a0 + 0x2b8) = 2;
                    uVar5 = 300;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    iVar1 = a0;
                    vec3_clear(a0 + 0x2a8, 300, a0, ar7_00);
                    vec3_clear(a0 + 0x2d4, uVar5, iVar1, ar7_00);
                    if (in_stack_00000004 == 0x1d) {
                        uVar2 = (**(code **)(*a1 + 0x10c))(a1, uVar5, iVar1, ar7_00);
                        set_fields_10_14_0d98d4(uVar2);
                    }
                } else {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + -1;
                }
            }
            break;
        case 2:
            if (in_stack_00000004 == 0x1c) {
                uVar5 = 0x1c;
                puVar7 = auStack_30;
                iVar1 = game_vec_058024(a0, a3, puVar7, 0x1c);
                if (iVar1 == 0) {
                    timer_start_94(a0, a3, puVar7);
                    Vec3_assign_f(a0 + 0x2a8, a3, puVar7, uVar5);
                    *(u32 *)(a0 + 0x2e8) = 0;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    uVar6 = 0;
                    uVar2 = 0xffffffff;
                    uVar5 = 0x1a;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar5, uVar2, uVar6);
                    *(u32 *)(a0 + 0x2b8) = 2;
                    set_field_8c_to_1(a2, uVar5, uVar2, uVar6);
                }
            } else if (in_stack_00000004 == 0x1d) {
                uVar5 = 0x1d;
                iVar1 = game_vec_058024(a0, a3, auStack_30, 0x1d);
                if (iVar1 == 0) {
                    if (cVar14 == '\0') {
                        uVar10 = CONCAT44(*(u32 *)(a3 + 4), (int)in_dr0);
                    } else {
                        uVar10 = *(u64 *)(a3 + 4);
                    }
                    uVar2 = 0x2a8;
                    Vec3_assign_f(a0 + 0x2a8, Vec3_assign_f, 0x2a8, uVar5);
                    (**(code **)(*a1 + 0x128))(a1, a3, uVar2, uVar5);
                    if (cVar14 == '\0') {
                        dVar11 = (double)CONCAT44(*(u32 *)(a3 + 4), (int)((u64)uVar10 >> 0x20));
                        uVar10 = in_xd0;
                    } else {
                        dVar11 = *(double *)(a3 + 4);
                    }
                    if (cVar13 == '\0') {
                        fVar9 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
                    } else {
                        fVar9 = SUB84(dVar11 - dVar11, 0);
                    }
                    if (cVar14 == '\0') {
                        *(float *)(a0 + 0x2ac) = fVar9;
                    } else {
                        *(u64 *)(a0 + 0x2ac) = uVar10;
                    }
                    uVar6 = 0;
                    uVar2 = 0xffffffff;
                    uVar5 = 0x25;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x25, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar5, uVar2, uVar6);
                    *(u32 *)(a0 + 0x2e8) = 2;
                    *(u32 *)(a0 + 300) = 6;
                    Vec3_ctor_xyz(auStack_a0, uVar5, uVar2, uVar6);
                    Vec3_add(a3, auStack_a0, uVar2, uVar6, auStack_b0);
                    puVar7 = auStack_b0;
                    game_vec_057b6c(a0, a3, puVar7, uVar6);
                    Vec3_dtor(auStack_b0, 0xffffffff, puVar7, uVar6);
                    uVar5 = 0xffffffff;
                    Vec3_dtor(auStack_a0, 0xffffffff, puVar7, uVar6);
                    flags6_set_all(a0 + 0x1fc, uVar5, puVar7);
                }
            } else if (in_stack_00000004 == 0x31) {
                uVar5 = 0x1c;
                puVar7 = auStack_30;
                iVar1 = game_vec_058024(a0, a3, puVar7, 0x1c);
                if (iVar1 == 0) {
                    timer_start_94(a0, a3, puVar7);
                    Vec3_assign_f(a0 + 0x2a8, a3, puVar7, uVar5);
                    *(u32 *)(a0 + 0x2e8) = 0;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    uVar2 = 0;
                    uVar5 = 0xffffffff;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                    iVar1 = a0 + 0xb0;
                    CAnimBody_SetFrame(iVar1, iVar1, uVar5, uVar2);
                    *(u32 *)(a0 + 0x2b8) = 2;
                    set_field_8c_to_1(a2, iVar1, uVar5, uVar2);
                }
            }
            break;
        case 3:
            uVar5 = 0;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x26, 0xffffffff, 0);
            *(u32 *)(a0 + 0x2b8) = 3;
            *(u32 *)(a0 + 0x178) = 0;
            *(u32 *)(a0 + 700) = 0;
            *(u32 *)(a0 + 300) = 0;
            pcVar4 = Vec3_assign_f;
            Vec3_assign_f(a0 + 0x2d4, 0x2d4, Vec3_assign_f, uVar5);
            Vec3_assign_f(a0 + 0x2a8, a0 + 0x2a8, pcVar4, uVar5);
            uVar8 = 0;
            *(u32 *)(a0 + 0x2e8) = 2;
            break;
        case 4:
            flags6_set_all(a0 + 0x1fc, in_stack_00000000, 1);
            uVar5 = 0x1c;
            iVar1 = game_vec_058024(a0, a3, auStack_30, 0x1c);
            if (iVar1 == 0) {
                *(u32 *)(a0 + 0x2e8) = 2;
                *(u32 *)(a0 + 700) = 0;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + -1;
                Vec3_assign_f(a0 + 0x2a8, a0, 0, uVar5);
                uVar6 = 0;
                uVar2 = 0xffffffff;
                uVar5 = 0x1a;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x1a, 0xffffffff, 0);
                *(u32 *)(a0 + 0x218) = 4;
                CAnimBody_SetFrame(a0 + 0xb0, uVar5, uVar2, uVar6);
                *(u32 *)(a0 + 0x2b8) = 2;
            }
            break;
        case 5:
            CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, in_stack_00000000, 1, ar7_00);
            fVar9 = (float)((u64)in_dr0 >> 0x20);
            CAnimBody_GetCurFrame(a0 + 0xb0, CAnimBody_GetCurFrame, uVar5, ar7_00);
            if (cVar14 == '\0') {
                fVar12 = 113.0;
            } else {
                fVar9 = 113.0;
                fVar12 = 1.04257e-42;
            }
            if (cVar13 != '\0' || fVar12 <= fVar9) {
                *(u32 *)(a0 + 0x2e8) = 1;
                ar7_02 = 0;
                uVar6 = 0xffffffff;
                uVar5 = 0x55;
                CAnimBody_SetAnimation(a0 + 0xb0, 0x55, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar5, uVar6, ar7_02);
                Vec3_assign_f(a0 + 0x2d4, uVar5, uVar6, ar7_02);
                Vec3_assign_f(a0 + 0x2a8, uVar5, uVar6, ar7_02);
                uVar5 = get_field_1c_on_field_b0(a0, uVar5, uVar6);
                uVar2 = array_at_field_14(a0 + 0xb0, uVar5, uVar6, ar7_02);
                puVar3 = (u32 *)deref_u32(uVar2);
                uVar5 = puVar3[1];
                *(u32 *)(a0 + 0xb4) = *puVar3;
                *(u32 *)(a0 + 0xb8) = uVar5;
                *(u32 *)(a0 + 0xbc) = puVar3[2];
                *(u32 *)(a0 + 0x29c) = 1;
                *(u32 *)(a0 + 300) = 4;
            }
            break;
        case 6:
            iVar1 = game_vec_057e58(a0, in_stack_00000000, 1, ar7_00);
            fVar9 = (float)((u64)in_dr0 >> 0x20);
            if (iVar1 == 0) {
                pcVar4 = Vec3_make;
                Vec3_make(a0 + 0x14, Vec3_make, uVar5, ar7_00, auStack_c0);
                Vec3_ctor_xyz(auStack_d0, pcVar4, uVar5, ar7_00);
                Vec3_cos_angle(auStack_c0, auStack_d0, uVar5, ar7_00);
                if (cVar14 == '\0') {
                    pcVar4 = (code *)0x40000000;
                } else {
                    fVar9 = 2.0;
                    pcVar4 = Vec3_dtor;
                }
                Vec3_dtor(auStack_d0, 0xffffffff, uVar5, ar7_00);
                ar6_00 = Vec3_dtor;
                Vec3_dtor(auStack_c0, 0xffffffff, Vec3_dtor, ar7_00);
                uStack_100 = (u32)(cVar13 == '\0' && fVar9 < (float)pcVar4);
                if (uStack_100 == 0) {
                    puVar7 = auStack_e0;
                    Vec3_ctor_xyz(puVar7, 0, puVar7, ar7_00);
                    Vec3_add(a3, auStack_e0, puVar7, ar7_00, auStack_f0);
                    puVar7 = auStack_f0;
                    game_vec_057b6c(a0, a3, puVar7, ar7_00);
                    Vec3_dtor(auStack_f0, 0xffffffff, puVar7, ar7_00);
                    Vec3_dtor(auStack_e0, 0xffffffff, puVar7, ar7_00);
                } else {
                    *(u32 *)(a0 + 800) = 0;
                    Vec3_assign_f(a0 + 0x2d4, uStack_100, ar6_00, ar7_00);
                    Vec3_assign_f(a0 + 0x2a8, uStack_100, ar6_00, ar7_00);
                    *(u32 *)(a0 + 700) = 0;
                    *(u32 *)(a0 + 300) = 0;
                    *(u32 *)(a0 + 0x178) = 0;
                    uVar8 = 0;
                    *(u32 *)(a0 + 0x2b8) = 2;
                }
            }
        }
    }
    Vec3_dtor(auStack_30, 0xffffffff, auStack_30, 0xffffffff);
    return uVar8;
}

/*
 * ret_const_0_059fbc  0x8c059fbc
 */
u32 ret_const_0_059fbc(void) {
    return 0;
}

/*
 * game_vec_059fc4  0x8c059fc4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4, alt_entry_046684, game_state_switch_04eb14
 */
u32 game_vec_059fc4(int a0, u32 *a1, int a2, u8 *a3) {
    int iVar1;
    u32 *puVar2;
    u32 uVar3;
    u8 *ar7_00;
    u32 uVar4;
    float fVar5;
    u64 in_dr0;
    double dVar6;
    double dVar7;
    float fVar8;
    u32 in_fr3;
    u64 in_dr4;
    float in_fr15;
    u32 in_fr14;
    double in_xd14;
    bool bVar9;
    char cVar10;
    char cVar11;
    int in_stack_00000000;
    u8 auStack_3c[16];
    u8 auStack_2c[20];

    fVar5 = (float)((u64)in_dr0 >> 0x20);
    cVar11 = '\0';
    cVar10 = '\0';
    uVar3 = (u32)((u64)in_dr4 >> 0x20);
    uVar4 = 1;
    puVar2 = a1;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_2c, a1, a2);
    if (cVar11 == '\0') {
        in_fr15 = 338.375;
    } else {
        in_xd14 = 1.63025361168389e-311;
    }
    *(u32 *)(a0 + 0x300) = 0;
    iVar1 = *(int *)(a0 + 0x28c);
    if (iVar1 == 0) {
        iVar1 = game_uses_get_field_1c_057164(a0, a1, a2, ar7_00);
        if (iVar1 == 0) {
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(0x43330000, a1[1]);
            } else {
                dVar6 = -7.95546843074564e-251;
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - SUB84(dVar6, 0), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 - dVar6;
            }
            if (cVar11 == '\0') {
                *(int *)(a0 + 0x2ac) = (int)((u64)dVar6 >> 0x20);
            } else {
                *(double *)(a0 + 0x2ac) = dVar6;
            }
            Vec3_assign(a0 + 0x54, a1, a2, ar7_00);
            if (in_stack_00000000 == -1) {
                a2 = 3;
                in_stack_00000000 = rand_range(a0, 0, 3);
            }
            Vec3_assign(auStack_2c, a1, a2, ar7_00);
            puVar2 = a1;
            Vec3_assign(a0 + 0x268, a1, a2, ar7_00);
            if (in_stack_00000000 == 1) {
                if (cVar11 == '\0') {
                    dVar6 = (double)CONCAT44(0x43fa0000, *a1);
                } else {
                    dVar6 = 1.1551152330547935e+238;
                }
                if (cVar10 == '\0' && (float)((u64)dVar6 >> 0x20) < SUB84(dVar6, 0)) {
                    in_stack_00000000 = 0;
                }
            }
            if (in_stack_00000000 == 0) {
                if (cVar11 == '\0') {
                    dVar6 = (double)CONCAT44(*(u32 *)(a3 + 8), SUB84(dVar6, 0));
                } else {
                    dVar6 = *(double *)(a3 + 8);
                }
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - in_fr15, SUB84(dVar6, 0));
                } else {
                    dVar6 = dVar6 - (double)CONCAT44(in_fr14, in_fr15);
                }
                if (cVar11 == '\0') {
                    *(int *)(a0 + 0x5c) = (int)((u64)dVar6 >> 0x20);
                    dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x48), *(u32 *)(a0 + 0x54));
                } else {
                    *(double *)(a0 + 0x5c) = dVar6;
                    dVar6 = *(double *)(a0 + 0x48);
                }
                if (cVar10 == '\0') {
                    fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
                } else {
                    fVar5 = SUB84(dVar6 + dVar6, 0);
                }
                if (cVar11 != '\0') {
                    fVar5 = 0.0;
                }
                if (cVar10 != '\0' || 0.0 <= fVar5) {
                    if (cVar11 == '\0') {
                        dVar6 = (double)(u64)in_fr3;
                        dVar7 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
                    } else {
                        dVar6 = 0.0;
                        dVar7 = 1.23977604087146e-311;
                    }
                    if (cVar10 == '\0') {
                        fVar8 = (float)((u64)dVar7 >> 0x20);
                        fVar5 = SUB84(dVar7, 0) * fVar8;
                        dVar7 = (double)CONCAT44(fVar8, fVar5);
                        dVar6 = (double)CONCAT44(0.0 - fVar5, SUB84(dVar6, 0));
                    } else {
                        dVar7 = dVar7 * dVar7;
                        dVar6 = dVar6 - dVar7;
                    }
                    fVar5 = SUB84(dVar7, 0);
                    if (cVar11 == '\0') {
                        *(int *)(a0 + 0x54) = (int)((u64)dVar6 >> 0x20);
                    } else {
                        *(double *)(a0 + 0x54) = dVar6;
                    }
                }
                Vec3_assign_f(a0 + 0x248, puVar2, a2, ar7_00);
                if (cVar11 == '\0') {
                    uVar3 = *(u32 *)(a3 + 8);
                    dVar6 = (double)CONCAT44(uVar3, fVar5);
                    *(u32 *)(a0 + 0x270) = uVar3;
                } else {
                    dVar6 = *(double *)(a3 + 8);
                    *(double *)(a0 + 0x270) = dVar6;
                }
            } else if (in_stack_00000000 == 1) {
                if (cVar11 == '\0') {
                    in_xd14 = (double)CONCAT44(in_fr15, 0x41a00000);
                }
                if (cVar10 == '\0') {
                    in_xd14 = (double)CONCAT44((float)((u64)in_xd14 >> 0x20) + SUB84(in_xd14, 0), SUB84(in_xd14, 0));
                } else {
                    in_xd14 = in_xd14 + in_xd14;
                }
                if (cVar11 == '\0') {
                    *(int *)(a0 + 0x5c) = (int)((u64)in_xd14 >> 0x20);
                } else {
                    *(double *)(a0 + 0x5c) = in_xd14;
                }
                Vec3_assign_f(a0 + 0x248, puVar2, a2, ar7_00);
                dVar6 = (double)((u64)in_xd14 & 0xffffffff);
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x270) = 0;
                } else {
                    *(double *)(a0 + 0x270) = dVar6;
                }
            } else if ((in_stack_00000000 == 2) || (in_stack_00000000 == 3)) {
                if (cVar11 == '\0') {
                    in_xd14 = (double)CONCAT44(in_fr15, 0x42200000);
                }
                if (cVar10 == '\0') {
                    in_xd14 = (double)CONCAT44((float)((u64)in_xd14 >> 0x20) + SUB84(in_xd14, 0), SUB84(in_xd14, 0));
                } else {
                    in_xd14 = in_xd14 + in_xd14;
                }
                if (cVar11 == '\0') {
                    *(int *)(a0 + 0x54) = (int)((u64)in_xd14 >> 0x20);
                } else {
                    *(double *)(a0 + 0x54) = in_xd14;
                }
                Vec3_assign_f(a0 + 0x248, puVar2, a2, ar7_00);
                dVar6 = (double)((u64)in_xd14 & 0xffffffff);
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x268) = 0;
                } else {
                    *(double *)(a0 + 0x268) = dVar6;
                }
            }
            Vec3_distance_sq(a1, a0 + 0x268, a2, ar7_00);
            if (cVar10 == '\0') {
                bVar9 = in_fr15 < (float)((u64)dVar6 >> 0x20);
            } else {
                bVar9 = (double)CONCAT44(in_fr14, in_fr15) < dVar6;
            }
            if (!bVar9) {
                Vec3_assign(a0 + 0x54, a1, a2, ar7_00);
            }
            *(u32 *)(a0 + 0x40) = 5;
            *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 1;
        }
    } else {
        if (iVar1 == 1) {
            *(u32 *)(a0 + 700) = 1;
            if ((*(int *)(a0 + 0x290) == 1) && (*(int *)(a0 + 0x124) != 0x10)) {
                *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 1;
            }
        } else if (iVar1 != 2) {
            if (iVar1 == 3) {
                iVar1 = *(int *)(a0 + 800);
                if (iVar1 == 0) {
                    CAnimBody_GetCurFrame(a0 + 0xb0, puVar2, a2, ar7_00);
                    if (cVar11 == '\0') {
                        fVar8 = 25.0;
                    } else {
                        fVar5 = 25.0;
                        fVar8 = 8.12753e-43;
                    }
                    if (cVar10 == '\0' && fVar8 < fVar5) {
                        se_play_at_object(a0, 0x1c, a1, *(u32 *)(a0 + 0x244));
                        *(int *)(a0 + 800) = *(int *)(a0 + 800) + 1;
                    }
                } else if (iVar1 == 1) {
                    CAnimBody_GetCurFrame(a0 + 0xb0, puVar2, a2, ar7_00);
                    if (cVar11 == '\0') {
                        fVar8 = 78.0;
                    } else {
                        fVar5 = 78.0;
                        fVar8 = 8.12753e-43;
                    }
                    if (cVar10 == '\0' && fVar8 < fVar5) {
                        se_play_at_object(a0, 0x1d, a1, *(u32 *)(a0 + 0x244));
                        *(int *)(a0 + 800) = *(int *)(a0 + 800) + 1;
                    }
                } else if (iVar1 == 2) {
                    CAnimBody_GetCurFrame(a0 + 0xb0, puVar2, a2, ar7_00);
                    if (cVar11 == '\0') {
                        fVar8 = 150.0;
                    } else {
                        fVar5 = 150.0;
                        fVar8 = 7.39886e-43;
                    }
                    if (cVar10 == '\0' && fVar8 < fVar5) {
                        if (*(char *)(a0 + 0x210) == '\x01') {
                            Vec3_assign(auStack_2c, a1, a2, ar7_00);
                            (**(code **)(**(int **)(a0 + 0x244) + 0xd0))(*(int **)(a0 + 0x244), auStack_2c, 1, 5);
                        }
                        *(int *)(a0 + 800) = *(int *)(a0 + 800) + 1;
                    }
                }
                *(u32 *)(a0 + 0x178) = 1;
                ar7_00 = (u8 *)0x1e;
                a2 = a0 + 0x268;
                iVar1 = game_vec_058024(a0, a1, a2, 0x1e);
                if (iVar1 == 0) {
                    Vec3_assign_f(a0 + 0x2d4, a1, a2, ar7_00);
                    Vec3_assign_f(a0 + 0x2a8, a1, a2, ar7_00);
                    *(u32 *)(a0 + 700) = 0;
                    *(u32 *)(a0 + 0x178) = 0;
                    uVar4 = 0;
                    *(u32 *)(a0 + 0x28c) = 0;
                    *(u32 *)(a0 + 0x68) = 0;
                    timer_start_94(a0, a1, a2);
                    flags6_set_all(a0 + 0x1fc, a1, a2);
                    *(u32 *)(a0 + 0x2e8) = 2;
                }
            }
            goto LAB_8c05a4c4;
        }
        Vec3_ctor_copy(auStack_3c, a0 + 0x248, a2, ar7_00);
        ar7_00 = auStack_3c;
        a2 = a0 + 0x54;
        iVar1 = Vec3_vec_04e0e0(a0, a1, a2, ar7_00);
        uVar3 = 0xffffffff;
        Vec3_dtor(auStack_3c, 0xffffffff, a2, ar7_00);
        if (iVar1 == 0) {
            *(u32 *)(a0 + 0x218) = 9;
            *(int *)(a0 + 0x28c) = *(int *)(a0 + 0x28c) + 1;
            *(u32 *)(a0 + 800) = 0;
            flags6_clear_all(a0 + 0x1fc, uVar3, a2, ar7_00);
        }
    }
LAB_8c05a4c4:
    Vec3_dtor(auStack_2c, 0xffffffff, a2, ar7_00);
    return uVar4;
}

/*
 * game_uses_CAnimBody_SetAnimation_05a54c  0x8c05a54c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is CAnimBody_SetAnimation
 * called by: Vec3_state_switch_03f4a4
 */
u32 game_uses_CAnimBody_SetAnimation_05a54c(int a0, u32 a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    double in_dr0;
    double dVar7;
    u32 uVar9;
    double dVar8;
    float fVar10;
    u32 in_fr3;
    float fVar11;
    u64 in_dr12;
    double dVar12;
    u32 in_fr15;
    u64 in_xd0;
    double in_xd12;
    bool bVar13;
    char cVar14;
    char cVar15;
    u8 auStack_7c[16];
    u8 auStack_6c[12];
    u8 auStack_60[16];
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[20];

    uVar4 = (u32)((u64)in_dr12 >> 0x20);
    cVar15 = '\0';
    cVar14 = '\0';
    iVar3 = 1;
    iVar2 = *(int *)(a0 + 300);
    if ((iVar2 < 0xb) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            *(u32 *)(a0 + 0x2b8) = 3;
            if (*(int *)(a0 + 0x2ec) < 5) {
                *(u32 *)(a0 + 0x32c) = 6;
            } else {
                iVar3 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x2ec), 8, a2);
                if (iVar3 == 0) {
                    *(u32 *)(a0 + 0x32c) = 2;
                } else {
                    *(u32 *)(a0 + 0x32c) = 1;
                }
            }
            *(int *)(a0 + 0x2ec) = *(int *)(a0 + 0x2ec) + 1;
            iVar3 = *(int *)(a0 + 0x32c);
            if ((iVar3 < 7) && (-1 < iVar3)) {
                switch (iVar3) {
                default:
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    break;
                case 2:
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 3;
                    break;
                case 3:
                    break;
                case 4:
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 5;
                    break;
                case 5:
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 7;
                    break;
                case 6:
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 9;
                }
            }
            break;
        case 1:
            iVar3 = rand_range(a0, 0, 0x10);
            if (iVar3 == 0) {
                a3 = *(int *)(a0 + 0x244);
                se_play_at_object(a0, 0xe, a1, a3);
            }
            *(u32 *)(a0 + 0x2f4) = *(u32 *)(a0 + 0x2f4) ^ 1;
            if (*(int *)(a0 + 0x2f4) == 0) {
                iVar3 = a0;
                uVar4 = libgcc_divide_helper_0101e4(*(u32 *)(a0 + 0x2ec), 4);
                iVar3 = libgcc_divide_helper_01031c(uVar4, 9, iVar3);
                a3 = 0;
                a2 = -1;
                iVar3 = iVar3 + 0x2f;
                CAnimBody_SetAnimation(a0 + 0xb0, iVar3, 0xffffffff, 0);
            } else {
                iVar3 = a0;
                uVar4 = libgcc_divide_helper_0101e4(*(u32 *)(a0 + 0x2ec), 4);
                iVar3 = libgcc_divide_helper_01031c(uVar4, 9, iVar3);
                a3 = 0;
                a2 = -1;
                iVar3 = iVar3 + 0x26;
                CAnimBody_SetAnimation(a0 + 0xb0, iVar3, 0xffffffff, 0);
            }
            CAnimBody_SetFrame(a0 + 0xb0, iVar3, a2, a3);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 2:
            iVar3 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar3, a2, a3);
            if (iVar3 == 1) {
                *(u32 *)(a0 + 300) = 0;
            }
            break;
        case 3:
            uVar5 = 0x10;
            uVar6 = 0;
            iVar3 = rand_range(a0, 0, 0x10);
            if (iVar3 == 0) {
                a3 = *(int *)(a0 + 0x244);
                uVar6 = 0xe;
                se_play_at_object(a0, 0xe, a1, a3);
                uVar5 = a1;
            }
            *(u32 *)(a0 + 0x2f4) = *(u32 *)(a0 + 0x2f4) ^ 1;
            if (cVar15 == '\0') {
                dVar7 = (double)CONCAT44(0xbf800000, *(u32 *)(a0 + 0x2e4));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x2e4);
                dVar7 = 4.51450460004832e-312;
            }
            if (cVar14 == '\0') {
                fVar11 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
            } else {
                fVar11 = SUB84(dVar7 * dVar7, 0);
            }
            if (cVar15 == '\0') {
                *(float *)(a0 + 0x2e4) = fVar11;
                fVar11 = *(float *)(a0 + 0x2e4);
            } else {
                *(u64 *)(a0 + 0x2e4) = in_xd0;
            }
            uVar9 = 0x3f800000;
            if (fVar11 == 1.0) {
                Vec3_make(a0 + 0x14, uVar6, uVar5, a3, auStack_30);
                Vec3_ctor_xyz(auStack_40, uVar6, uVar5, a3);
                Vec3_cos_angle(auStack_30, auStack_40, uVar5, a3);
                if (cVar15 == '\0') {
                    *(u32 *)(a0 + 0x224) = uVar9;
                } else {
                    *(u64 *)(a0 + 0x224) = CONCAT44(uVar9, fVar11);
                }
                Vec3_dtor(auStack_40, 0xffffffff, uVar5, a3);
                Vec3_dtor(auStack_30, 0xffffffff, uVar5, a3);
            } else {
                Vec3_make(a0 + 0x14, uVar6, uVar5, a3, auStack_50);
                Vec3_ctor_xyz(auStack_60, uVar6, uVar5, a3);
                Vec3_cos_angle(auStack_50, auStack_60, uVar5, a3);
                if (cVar15 == '\0') {
                    *(u32 *)(a0 + 0x224) = uVar9;
                } else {
                    *(u64 *)(a0 + 0x224) = CONCAT44(uVar9, fVar11);
                }
                Vec3_dtor(auStack_60, 0xffffffff, uVar5, a3);
                Vec3_dtor(auStack_50, 0xffffffff, uVar5, a3);
            }
            a3 = 0;
            a2 = -1;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x18, 0xffffffff, 0);
            iVar2 = get_motion_data(a0 + 0xb0, 0x18, a2, a3);
            iVar3 = 0x31;
            iVar1 = get_motion_data(a0 + 0xb0, 0x31, a2, a3);
            if (cVar14 == '\0') {
                dVar7 = (double)CONCAT44((float)iVar2, in_fr3);
            } else {
                dVar7 = (double)iVar2;
            }
            fVar10 = (float)((u64)dVar7 >> 0x20);
            if (cVar14 == '\0') {
                bVar13 = fVar10 < 0.0;
            } else {
                bVar13 = dVar7 < (double)(u64)(u32)fVar11;
            }
            if (bVar13) {
                if (cVar15 == '\0') {
                    dVar8 = (double)CONCAT44(0x4f800000, fVar11);
                } else {
                    dVar8 = 8192.002426147461;
                }
                if (cVar14 == '\0') {
                    dVar7 = (double)CONCAT44(fVar10 + (float)((u64)dVar8 >> 0x20), SUB84(dVar7, 0));
                } else {
                    dVar7 = dVar7 + dVar8;
                }
            }
            fVar11 = (float)iVar1;
            dVar8 = (double)(u64)(u32)fVar11;
            if (cVar14 == '\0' && fVar11 < 0.0) {
                if (cVar15 == '\0') {
                    dVar8 = (double)CONCAT44(0x4f800000, fVar11);
                } else {
                    dVar8 = 8192.002426147461;
                }
                if (cVar14 == '\0') {
                    fVar11 = (float)((u64)dVar8 >> 0x20);
                    dVar8 = (double)CONCAT44(fVar11, SUB84(dVar8, 0) + fVar11);
                } else {
                    dVar8 = dVar8 + dVar8;
                }
            }
            if (cVar14 == '\0') {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) / SUB84(dVar8, 0), SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 / dVar8;
            }
            if (cVar15 == '\0') {
                in_dr0 = (double)CONCAT44(0x40c00000, SUB84(dVar8, 0));
            } else {
                in_dr0 = -8.399316855946905e-251;
            }
            if (cVar14 == '\0') {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) * (float)((u64)in_dr0 >> 0x20), SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 * in_dr0;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x278) = (int)((u64)dVar7 >> 0x20);
            } else {
                *(double *)(a0 + 0x278) = dVar7;
            }
            CAnimBody_SetFrame(a0 + 0xb0, iVar3, a2, a3);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 4:
            CAnimBody_GetCurFrame(a0 + 0xb0, iVar3, a2, a3);
            dVar7 = in_dr0;
            if (cVar15 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr15);
            }
            uVar5 = 0x18;
            iVar3 = get_motion_data(a0 + 0xb0, 0x18, a2, a3);
            fVar11 = (float)iVar3;
            dVar12 = (double)CONCAT44(uVar4, fVar11);
            dVar8 = (double)((u64)in_dr0 & 0xffffffff);
            if (cVar14 == '\0') {
                bVar13 = fVar11 < 0.0;
            } else {
                bVar13 = dVar12 < dVar8;
            }
            if (bVar13) {
                if (cVar15 == '\0') {
                    dVar8 = (double)CONCAT44(0x4f800000, SUB84(in_dr0, 0));
                } else {
                    dVar8 = 8192.002426147461;
                }
                if (cVar14 == '\0') {
                    dVar12 = (double)CONCAT44(uVar4, fVar11 + (float)((u64)dVar8 >> 0x20));
                } else {
                    dVar12 = dVar12 + dVar8;
                }
            }
            if (cVar15 == '\0') {
                dVar8 = (double)CONCAT44(0x3f000000, SUB84(dVar8, 0));
            } else {
                dVar8 = 524288.123046875;
            }
            if (cVar14 == '\0') {
                dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), SUB84(dVar12, 0) * (float)((u64)dVar8 >> 0x20));
            } else {
                dVar12 = dVar12 * dVar8;
            }
            if (cVar15 == '\0') {
                in_xd12 = (double)CONCAT44(SUB84(dVar12, 0), 0x41200000);
            }
            fVar11 = (float)((u64)dVar7 >> 0x20);
            if (cVar14 == '\0') {
                fVar10 = (float)((u64)in_xd12 >> 0x20) - SUB84(in_xd12, 0);
                in_xd12 = (double)CONCAT44(fVar10, SUB84(in_xd12, 0));
                bVar13 = fVar11 < fVar10;
            } else {
                in_xd12 = in_xd12 - in_xd12;
                bVar13 = dVar7 < in_xd12;
            }
            if (!bVar13) {
                if (cVar15 == '\0') {
                    in_xd12 = (double)CONCAT44(0x41200000, SUB84(in_xd12, 0));
                } else {
                    in_xd12 = 134217760.5625;
                }
                if (cVar14 == '\0') {
                    bVar13 = fVar11 < SUB84(dVar12, 0) + (float)((u64)in_xd12 >> 0x20);
                } else {
                    bVar13 = dVar7 < dVar12 + in_xd12;
                }
                if (bVar13) {
                    if (cVar15 == '\0') {
                        in_xd12 = (double)((u64)in_xd12 & 0xffffffff);
                    } else {
                        in_xd12 = *(double *)(a0 + 0x278);
                    }
                    Vec3_set_xyz(auStack_6c, uVar5, a2, a3);
                    Vec3_vec_023484(a0 + 0x14, auStack_6c, a2, a3, auStack_7c);
                    Vec3_assign(a0 + 0x14, auStack_7c, a2, a3);
                    Vec3_dtor(auStack_7c, 0xffffffff, a2, a3);
                    object_dtor_delete(auStack_6c, 0xffffffff, a2, a3);
                    Vec3_assign(a0 + 0x80, a0 + 0x14, a2, a3);
                }
            }
            uVar4 = SUB84(in_xd12, 0);
            iVar3 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a0 + 0x278, a2, a3);
            if (iVar3 == 1) {
                if (cVar15 == '\0') {
                    *(u32 *)(a0 + 0x278) = 0x3f800000;
                } else {
                    *(u64 *)(a0 + 0x278) = CONCAT44(0x3f800000, uVar4);
                }
                *(u32 *)(a0 + 300) = 0;
            }
            break;
        case 5:
            a3 = 0;
            a2 = -1;
            uVar4 = 0x1e;
            iVar3 = CAnimBody_SetAnimation(a0 + 0xb0, 0x1e, 0xffffffff, 0);
            if (iVar3 != 6) {
                CAnimBody_SetFrame(a0 + 0xb0, uVar4, a2, a3);
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            iVar3 = a0;
        case 6:
            uVar4 = SUB84(in_dr0, 0);
            iVar3 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar3, a2, a3);
            if (iVar3 == 1) {
                if (cVar15 == '\0') {
                    *(u32 *)(a0 + 0x278) = 0x3f800000;
                } else {
                    *(u64 *)(a0 + 0x278) = CONCAT44(0x3f800000, uVar4);
                }
                *(u32 *)(a0 + 300) = 0;
            }
            break;
        case 7:
            a3 = 0;
            uVar4 = 0xffffffff;
            iVar3 = CAnimBody_SetAnimation(a0 + 0xb0, 0x1f, 0xffffffff, 0);
            if (iVar3 != 6) {
                CAnimBody_SetFrame(a0 + 0xb0, CAnimBody_SetFrame, uVar4, a3);
            }
            a2 = *(int *)(a0 + 300) + 1;
            *(int *)(a0 + 300) = a2;
        case 8:
            iVar3 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0xb0, a2, a3);
            if (iVar3 == 1) {
                *(u32 *)(a0 + 300) = 0;
            }
            break;
        case 9:
            uVar6 = 0;
            uVar5 = 0xffffffff;
            uVar4 = 0x3f;
            CAnimBody_SetAnimation(a0 + 0xb0, 0x3f, 0xffffffff, 0);
            if (*(int *)(a0 + 0x128) == 3) {
                CAnimBody_SetFrame(a0 + 0xb0, a0 + 0xb0, uVar5, uVar6);
            } else {
                CAnimBody_SetFrame(a0 + 0xb0, uVar4, uVar5, uVar6);
            }
            a3 = *(int *)(a0 + 300);
            a2 = a3 + 1;
            *(int *)(a0 + 300) = a2;
        case 10:
            iVar3 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a0 + 0x278, a2, a3);
            if (iVar3 == 1) {
                *(u32 *)(a0 + 300) = 0;
            }
        }
    }
    return 1;
}

/*
 * game_vec_05ae54  0x8c05ae54
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Vec3_state_switch_03f4a4, alt_entry_046684, game_state_switch_04e7e0, game_state_switch_0526a0,
 * game_state_switch_057280, game_uses_Vec3_assign_f_04d62c, game_uses_get_field_1c_048868, game_vec_03c94c (+7 more)
 */
u32 game_vec_05ae54(int a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    u32 uVar2;
    float in_fr1;
    float fVar3;
    double dVar4;
    u32 in_fr4;
    u64 in_xd0;
    char cVar5;
    char cVar6;
    float fStack_58;
    int iStack_54;
    u64 uStack_4c;
    u8 auStack_38[16];
    u8 auStack_28[16];
    u8 auStack_18[20];

    cVar6 = '\0';
    cVar5 = '\0';
    Vec3_ctor_zero(auStack_18, a1, a2);
    Vec3_make(a0 + 0x14, a1, a2, a3, auStack_28);
    uVar2 = Vec3_length(auStack_28, a1, a2, a3);
    Vec3_assign(auStack_18, uVar2, a2, a3);
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    if (cVar6 == '\0') {
        in_fr1 = *(float *)(a0 + 0x2c);
    } else {
        in_xd0 = *(u64 *)(a0 + 0x2c);
    }
    if (cVar5 == '\0') {
        fStack_58 = in_fr1 + 1.0;
    } else {
        fStack_58 = SUB84((double)CONCAT44(0x3f800000, in_fr1) + (double)CONCAT44(0x3f800000, in_fr1), 0);
    }
    iStack_54 = a0;
    if (cVar6 != '\0') {
        fStack_58 = (float)in_xd0;
        iStack_54 = (int)((u64)in_xd0 >> 0x20);
    }
    if (cVar6 == '\0') {
        *(float *)(iStack_54 + 0x2c) = fStack_58;
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x38), fStack_58);
    } else {
        *(u64 *)(iStack_54 + 0x2c) = CONCAT44(iStack_54, fStack_58);
        in_xd0 = CONCAT44(iStack_54, fStack_58);
        dVar4 = *(double *)(a0 + 0x38);
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(in_fr4, fVar3);
    } else {
        dVar4 = (double)CONCAT44(fStack_58, in_fr4);
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
    }
    uVar1 = in_xd0;
    if (cVar6 == '\0') {
        uStack_4c = CONCAT44(uStack_4c._4_4_, fVar3);
        uVar1 = uStack_4c;
    }
    uStack_4c = uVar1;
    Vec3_scale(auStack_18, &uStack_4c, a2, a3, auStack_38);
    Vec3_add_assign(a0 + 0x14, auStack_38);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, a2, a3);
    Vec3_normalize(a0 + 0x14, uVar2, a2, a3);
    Vec3_assign(a0 + 0x14, (int)&uStack_4c + 4, a2, a3);
    Vec3_dtor((int)&uStack_4c + 4, 0xffffffff, a2, a3);
    Vec3_assign(a0 + 0x80, a0 + 0x14, a2, a3);
    uVar2 = Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * game_vec_05af78  0x8c05af78
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_05af78(int a0, double *a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    code *ar5_00;
    double *pdVar3;
    u64 *ar5_01;
    u8 *puVar4;
    int ar6_00;
    float fVar5;
    float fVar6;
    double in_dr0;
    u32 uVar8;
    double dVar7;
    float fVar9;
    double in_dr14;
    double dVar10;
    double in_xd0;
    bool bVar11;
    bool bVar12;
    char cVar13;
    char cVar14;
    float fStack_39c;
    float fStack_398;
    u32 uStack_380;
    u32 uStack_37c;
    u32 uStack_364;
    u32 uStack_360;
    u64 uStack_34c;
    u8 auStack_338[16];
    u8 auStack_328[16];
    u8 auStack_318[12];
    u8 auStack_30c[16];
    u8 auStack_2fc[16];
    u8 auStack_2ec[16];
    u8 auStack_2dc[16];
    u8 auStack_2cc[16];
    u8 auStack_2bc[16];
    u8 auStack_2ac[16];
    u8 auStack_29c[16];
    u8 auStack_28c[16];
    u8 auStack_27c[16];
    u8 auStack_26c[12];
    u8 auStack_260[16];
    u8 auStack_250[12];
    u8 auStack_244[16];
    u8 auStack_234[12];
    u8 auStack_228[16];
    u8 auStack_218[16];
    u8 auStack_208[12];
    u8 auStack_1fc[16];
    u8 auStack_1ec[16];
    u8 auStack_1dc[16];
    u8 auStack_1cc[16];
    u8 auStack_1bc[16];
    u8 auStack_1ac[16];
    u8 auStack_19c[16];
    u8 auStack_18c[16];
    u8 auStack_17c[16];
    u8 auStack_16c[16];
    u8 auStack_15c[12];
    u8 auStack_150[16];
    u8 auStack_140[12];
    u8 auStack_134[16];
    u8 auStack_124[12];
    u8 auStack_118[16];
    u8 auStack_108[16];
    u8 auStack_f8[16];
    u8 auStack_e8[16];
    u8 auStack_d8[16];
    u8 auStack_c8[16];
    u8 auStack_b8[16];
    u8 auStack_a8[16];
    u8 auStack_98[16];
    u8 auStack_88[16];
    u8 auStack_78[16];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[4];
    u64 uStack_24;

    cVar14 = '\0';
    cVar13 = '\0';
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_28, a1, a2);
    ar5_00 = Vec3_ctor_zero;
    Vec3_ctor_zero(auStack_38, Vec3_ctor_zero, ar6_00);
    Vec3_ctor_zero(auStack_48, ar5_00, ar6_00);
    Vec3_ctor_zero(auStack_58, ar5_00, ar6_00);
    pdVar3 = a1;
    Vec3_ctor_copy(auStack_68, a1, ar6_00, a3);
    vec3_clear(a0 + 0x200, pdVar3, ar6_00, a3);
    *(u32 *)(a0 + 0x304) = 0;
    ar5_01 = *(u64 **)(a2 + 0x84);
    if ((ar5_01 != NULL) && ((*(u8 *)(a0 + 0x1fc) & 0x3f) >> 5 != 0)) {
        Vec3_ctor_copy_wrap_02f670(*(u32 *)(a2 + 0x70), auStack_98, ar6_00, a3, auStack_98);
        Vec3_assign(a0 + 0x308, auStack_98, ar6_00, a3);
        ar5_01 = (u64 *)0xffffffff;
        Vec3_dtor(auStack_98, 0xffffffff, ar6_00, a3);
        *(u32 *)(a0 + 0x318) = 1;
    }
    if ((*(int *)(a2 + 0x68) != 0) && ((int)((u32) * (u8 *)(a0 + 0x1fc) << 0x1e) < 0)) {
        Vec3_assign(auStack_48, a1, ar6_00, a3);
        Vec3_assign(auStack_58, *(int *)(a2 + 0x68) + 4, ar6_00, a3);
        if (cVar14 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(*(int *)(a2 + 0x68) + 0x158));
        }
        Vec3_sub(auStack_48, auStack_58, ar6_00, a3, auStack_a8);
        Vec3_assign(auStack_28, auStack_a8, ar6_00, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_a8, 0xffffffff, ar6_00, a3);
        Vec3_length_sq(auStack_28, uVar2, ar6_00, a3);
        uVar2 = (u32)((u64)in_dr0 >> 0x20);
        if (cVar14 == '\0') {
            in_dr0 = (double)CONCAT44(uVar2, *(u32 *)(a0 + 0x48));
            dVar7 = in_xd0;
            uStack_364 = uVar2;
        } else {
            uStack_364 = SUB84(in_dr0, 0);
            dVar7 = *(double *)(a0 + 0x48);
            uStack_360 = uVar2;
        }
        if (cVar13 == '\0') {
            fVar5 = SUB84(in_dr0, 0) + SUB84(in_dr14, 0);
        } else {
            fVar5 = SUB84(in_dr0 + in_dr14, 0);
        }
        if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(uStack_364, fVar5);
        } else {
            dVar10 = (double)CONCAT44(uStack_360, uStack_364);
        }
        if (cVar13 == '\0') {
            fVar5 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
        } else {
            fVar5 = SUB84(dVar10 - dVar10, 0);
        }
        if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3dcccccd, fVar5);
        } else {
            dVar10 = -7.93713999303812e-251;
        }
        if (cVar13 == '\0') {
            fVar5 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
        } else {
            fVar5 = SUB84(dVar10 * dVar10, 0);
        }
        dVar10 = dVar7;
        if (cVar14 == '\0') {
            uStack_34c = (double)CONCAT44(uStack_34c._4_4_, fVar5);
            dVar10 = uStack_34c;
        }
        uStack_34c = dVar10;
        dVar10 = uStack_34c;
        if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar10 = (double)(u64)(u32)fVar5, cVar14 == '\0')) {
            uStack_34c = (double)((u64)uStack_34c & 0xffffffff00000000);
            dVar10 = uStack_34c;
        }
        uStack_34c = dVar10;
        dVar10 = (double)(u64)(u32)fVar5;
        Vec3_length(auStack_28, a0 + 0x48, ar6_00, a3);
        Vec3_length_sq(a0 + 4, Vec3_length_sq, ar6_00, a3);
        in_xd0 = dVar10;
        if (cVar14 == '\0') {
            dVar10 = (double)((u64)dVar10 >> 0x20);
            in_xd0 = dVar7;
        }
        fVar5 = SUB84(dVar10, 0);
        if (cVar13 == '\0' && 0.0 < fVar5) {
            if (*(int *)(a0 + 0x2b8) == 7) {
                Vec3_scale(a0 + 0x14, &g_8c1365f4, ar6_00, a3, auStack_b8);
                puVar4 = auStack_b8;
                Vec3_add(auStack_28, puVar4, ar6_00, a3, auStack_c8);
                Vec3_normalize(auStack_c8, puVar4, ar6_00, a3);
                Vec3_assign(auStack_28, auStack_d8, ar6_00, a3);
                Vec3_dtor(auStack_d8, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_c8, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_b8, 0xffffffff, ar6_00, a3);
            } else {
                Vec3_scale(a0 + 0x14, &g_8c1365f8, ar6_00, a3, auStack_e8);
                puVar4 = auStack_e8;
                Vec3_add(auStack_28, puVar4, ar6_00, a3, auStack_f8);
                Vec3_normalize(auStack_f8, puVar4, ar6_00, a3);
                Vec3_assign(auStack_28, auStack_108, ar6_00, a3);
                Vec3_dtor(auStack_108, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_f8, 0xffffffff, ar6_00, a3);
                Vec3_dtor(auStack_e8, 0xffffffff, ar6_00, a3);
            }
        }
        Vec3_scale_assign(auStack_28, &uStack_34c);
        in_dr0 = (double)(u64)(u32)fVar5;
        dVar7 = in_dr0;
        if (cVar14 == '\0') {
            uStack_24 = (double)((u64)uStack_24._4_4_ << 0x20);
            dVar7 = uStack_24;
        }
        uStack_24 = dVar7;
        Vec3_assign(a0 + 0x200, auStack_28, ar6_00, a3);
        if ((2 < *(int *)(a0 + 0x128)) && (*(int *)(a0 + 0x330) == 1)) {
            Vec3_sub(auStack_58, auStack_48, ar6_00, a3, auStack_118);
            Vec3_ctor_copy(auStack_78, auStack_118, ar6_00, a3);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_118, 0xffffffff, ar6_00, a3);
            Vec3_set_xyz(auStack_124, uVar2, ar6_00, a3);
            Vec3_vec_023484(auStack_78, auStack_124, ar6_00, a3, auStack_134);
            Vec3_assign(auStack_78, auStack_134, ar6_00, a3);
            Vec3_dtor(auStack_134, 0xffffffff, ar6_00, a3);
            object_dtor_delete(auStack_124, 0xffffffff, ar6_00, a3);
            puVar4 = auStack_78;
            Vec3_calc_022d14(a0 + 0x14, puVar4);
            dVar7 = in_dr0;
            if (cVar14 == '\0') {
                dVar7 = (double)((u64)in_dr0 >> 0x20);
                in_dr0 = in_xd0;
            }
            in_xd0 = in_dr0;
            in_dr0 = (double)((u64)dVar7 & 0xffffffff);
            if (cVar13 == '\0' && 0.0 < SUB84(dVar7, 0)) {
                Vec3_set_xyz(auStack_15c, puVar4, ar6_00, a3);
                Vec3_vec_023484(a0 + 0x14, auStack_15c, ar6_00, a3, auStack_16c);
                Vec3_assign(a0 + 0x14, auStack_16c, ar6_00, a3);
                Vec3_dtor(auStack_16c, 0xffffffff, ar6_00, a3);
                object_dtor_delete(auStack_15c, 0xffffffff, ar6_00, a3);
            } else {
                Vec3_set_xyz(auStack_140, puVar4, ar6_00, a3);
                Vec3_vec_023484(a0 + 0x14, auStack_140, ar6_00, a3, auStack_150);
                Vec3_assign(a0 + 0x14, auStack_150, ar6_00, a3);
                Vec3_dtor(auStack_150, 0xffffffff, ar6_00, a3);
                object_dtor_delete(auStack_140, 0xffffffff, ar6_00, a3);
                Vec3_scale_assign(auStack_78, &g_8c1365fc);
            }
            Vec3_scale_assign(a0 + 0x200, &g_8c136600);
            Vec3_scale(auStack_78, &g_8c136604, ar6_00, a3, auStack_17c);
            Vec3_add_assign(a0 + 0x200, auStack_17c);
            Vec3_dtor(auStack_17c, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_78, 0xffffffff, ar6_00, a3);
        }
        ar5_01 = (u64 *)0x1;
        *(u32 *)(a0 + 0x304) = 1;
    }
    if ((*(int *)(a2 + 100) != 0) && ((int)((u32) * (u8 *)(a0 + 0x1fc) << 0x1d) < 0)) {
        iVar1 = get_field_24_05c284(*(u32 *)(a2 + 0x50), ar5_01);
        if ((iVar1 == 0xf) ||
            ((iVar1 = get_field_24_05c284(*(u32 *)(a2 + 0x50), ar5_01),
              iVar1 == 10 || (iVar1 = get_field_24_05c284(*(u32 *)(a2 + 0x50), ar5_01), iVar1 == 0xd)))) {
            Vec3_dtor(auStack_68, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_58, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_48, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_38, 0xffffffff, ar6_00, a3);
            uVar2 = Vec3_dtor(auStack_28, 0xffffffff, ar6_00, a3);
            return uVar2;
        }
        (**(code **)(*(int *)(*(int *)(a2 + 0x50) + 8) + 0x170))(*(int *)(a2 + 0x50), ar5_01, ar6_00, a3);
        uStack_37c = SUB84(in_dr0, 0);
        uVar2 = (u32)((u64)in_dr0 >> 0x20);
        if (cVar14 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), uVar2);
            dVar7 = (double)CONCAT44(0x3a83126f, uStack_37c);
            uStack_37c = uVar2;
        } else {
            dVar7 = 1.85086533838489e-311;
        }
        if (cVar13 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar7 >> 0x20));
        } else {
            in_dr14 = in_dr14 + dVar7;
        }
        pdVar3 = a1;
        Vec3_assign(auStack_48, a1, ar6_00, a3);
        Vec3_ctor_copy_wrap_02f670(*(u32 *)(a2 + 0x50), pdVar3, ar6_00, a3, auStack_18c);
        Vec3_assign(auStack_58, auStack_18c, ar6_00, a3);
        Vec3_dtor(auStack_18c, 0xffffffff, ar6_00, a3);
        Vec3_sub(auStack_48, auStack_58, ar6_00, a3, auStack_19c);
        Vec3_assign(auStack_28, auStack_19c, ar6_00, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_19c, 0xffffffff, ar6_00, a3);
        Vec3_length_sq(auStack_28, uVar2, ar6_00, a3);
        uVar8 = (u32)((u64)dVar7 >> 0x20);
        if (cVar14 == '\0') {
            dVar7 = (double)CONCAT44(uVar8, *(u32 *)(a0 + 0x48));
            uStack_380 = uVar8;
        } else {
            uStack_380 = SUB84(dVar7, 0);
            in_xd0 = *(double *)(a0 + 0x48);
            uStack_37c = uVar8;
        }
        if (cVar13 == '\0') {
            fVar5 = SUB84(dVar7, 0) + SUB84(in_dr14, 0);
        } else {
            fVar5 = SUB84(dVar7 + in_dr14, 0);
        }
        if (cVar14 == '\0') {
            dVar7 = (double)CONCAT44(uStack_380, fVar5);
        } else {
            dVar7 = (double)CONCAT44(uStack_37c, uStack_380);
        }
        if (cVar13 == '\0') {
            fVar5 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar5 = SUB84(dVar7 - dVar7, 0);
        }
        if (cVar14 == '\0') {
            dVar7 = (double)CONCAT44(0x3dcccccd, fVar5);
        } else {
            dVar7 = -7.93713999303812e-251;
        }
        if (cVar13 == '\0') {
            fVar5 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar5 = SUB84(dVar7 * dVar7, 0);
        }
        dVar7 = in_xd0;
        if (cVar14 == '\0') {
            uStack_34c = (double)CONCAT44(uStack_34c._4_4_, fVar5);
            dVar7 = uStack_34c;
        }
        uStack_34c = dVar7;
        dVar7 = uStack_34c;
        if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(u64)(u32)fVar5, cVar14 == '\0')) {
            uStack_34c = (double)((u64)uStack_34c & 0xffffffff00000000);
            dVar7 = uStack_34c;
        }
        uStack_34c = dVar7;
        dVar7 = (double)(u64)(u32)fVar5;
        Vec3_length(auStack_28, uVar2, ar6_00, a3);
        Vec3_scale_assign(auStack_28, &uStack_34c);
        dVar10 = uStack_24;
        if (((*(int *)(a0 + 0x124) != 0xf) && (*(int *)(a0 + 0x124) != 0xf)) &&
            (dVar7 = (double)((u64)dVar7 & 0xffffffff), dVar10 = dVar7, cVar14 == '\0')) {
            uStack_24 = (double)((u64)uStack_24 & 0xffffffff00000000);
            dVar10 = uStack_24;
        }
        uStack_24 = dVar10;
        puVar4 = auStack_28;
        Vec3_add_assign(a0 + 0x200, puVar4);
        (**(code **)(*(int *)(*(int *)(a2 + 0x50) + 8) + 0x13c))(*(int *)(a2 + 0x50), puVar4, ar6_00, a3);
        Vec3_assign(auStack_38, auStack_1ac, ar6_00, a3);
        Vec3_dtor(auStack_1ac, 0xffffffff, ar6_00, a3);
        Vec3_make(a0 + 0x200, 0x200, ar6_00, a3, auStack_1bc);
        Vec3_make(auStack_38, Vec3_make, ar6_00, a3, auStack_1cc);
        Vec3_cos_angle(auStack_1bc, auStack_1cc, ar6_00, a3);
        fStack_398 = (float)((u64)dVar7 >> 0x20);
        if (cVar14 == '\0') {
            fVar5 = 5.0;
            dVar7 = in_xd0;
        } else {
            fStack_398 = 5.0;
            fVar5 = 6.55808e-43;
        }
        bVar12 = cVar13 == '\0';
        bVar11 = fStack_398 < fVar5;
        Vec3_dtor(auStack_1cc, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_1bc, 0xffffffff, ar6_00, a3);
        if (bVar12 && bVar11) {
            Vec3_sub(auStack_48, auStack_58, ar6_00, a3, auStack_1dc);
            Vec3_assign(auStack_28, auStack_1dc, ar6_00, a3);
            Vec3_dtor(auStack_1dc, 0xffffffff, ar6_00, a3);
            Vec3_make(a0 + 0x200, a0 + 0x200, ar6_00, a3, auStack_1ec);
            Vec3_make(auStack_28, auStack_28, ar6_00, a3, auStack_1fc);
            fVar6 = fStack_398;
            fStack_398 = fVar5;
            Vec3_cos_angle(auStack_1ec, auStack_1fc, ar6_00, a3);
            if (cVar14 == '\0') {
                fVar5 = 5.0;
            } else {
                dVar7 = (double)CONCAT44(fStack_398, fVar6);
                fStack_398 = 5.0;
                fVar5 = 6.55808e-43;
            }
            bVar12 = cVar13 == '\0';
            bVar11 = fStack_398 < fVar5;
            Vec3_dtor(auStack_1fc, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_1ec, 0xffffffff, ar6_00, a3);
            if (bVar12 && bVar11) {
                Vec3_set_xyz(auStack_208, Vec3_set_xyz, ar6_00, a3);
                Vec3_vec_023484(a0 + 0x200, auStack_208, ar6_00, a3, auStack_218);
                Vec3_assign(a0 + 0x200, auStack_218, ar6_00, a3);
                Vec3_dtor(auStack_218, 0xffffffff, ar6_00, a3);
                object_dtor_delete(auStack_208, 0xffffffff, ar6_00, a3);
            }
        }
        if ((2 < *(int *)(a0 + 0x128)) && (*(int *)(a0 + 0x330) == 1)) {
            Vec3_sub(auStack_58, auStack_48, ar6_00, a3, auStack_228);
            fVar6 = fStack_398;
            fStack_398 = fVar5;
            Vec3_ctor_copy(auStack_88, auStack_228, ar6_00, a3);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_228, 0xffffffff, ar6_00, a3);
            Vec3_set_xyz(auStack_234, uVar2, ar6_00, a3);
            Vec3_vec_023484(auStack_88, auStack_234, ar6_00, a3, auStack_244);
            Vec3_assign(auStack_88, auStack_244, ar6_00, a3);
            Vec3_dtor(auStack_244, 0xffffffff, ar6_00, a3);
            object_dtor_delete(auStack_234, 0xffffffff, ar6_00, a3);
            Vec3_calc_022d14(a0 + 0x14, auStack_88);
            if (cVar14 != '\0') {
                dVar7 = (double)CONCAT44(fStack_398, fVar6);
                fStack_398 = fVar6;
            }
            fVar5 = 0.0;
            if (cVar13 == '\0' && 0.0 < fStack_398) {
                Vec3_set_xyz(auStack_26c, auStack_26c, ar6_00, a3);
                Vec3_vec_023484(a0 + 0x14, auStack_26c, ar6_00, a3, auStack_27c);
                Vec3_assign(a0 + 0x14, auStack_27c, ar6_00, a3);
                Vec3_dtor(auStack_27c, 0xffffffff, ar6_00, a3);
                object_dtor_delete(auStack_26c, 0xffffffff, ar6_00, a3);
            } else {
                Vec3_set_xyz(auStack_250, auStack_250, ar6_00, a3);
                Vec3_vec_023484(a0 + 0x14, auStack_250, ar6_00, a3, auStack_260);
                Vec3_assign(a0 + 0x14, auStack_260, ar6_00, a3);
                Vec3_dtor(auStack_260, 0xffffffff, ar6_00, a3);
                object_dtor_delete(auStack_250, 0xffffffff, ar6_00, a3);
                Vec3_scale_assign(auStack_88, &g_8c136608);
            }
            Vec3_scale_assign(a0 + 0x200, &g_8c13660c);
            Vec3_scale(auStack_88, &g_8c136610, ar6_00, a3, auStack_28c);
            Vec3_add_assign(a0 + 0x200, auStack_28c);
            Vec3_dtor(auStack_28c, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_88, 0xffffffff, ar6_00, a3);
        }
        uVar2 = 0x304;
        *(u32 *)(a0 + 0x304) = 1;
        if (*(int *)(a2 + 0x58) == 0) {
            Vec3_dtor(auStack_68, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_58, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_48, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_38, 0xffffffff, ar6_00, a3);
            uVar2 = Vec3_dtor(auStack_28, 0xffffffff, ar6_00, a3);
            return uVar2;
        }
        iVar1 = get_field_24_05c284(*(u32 *)(a2 + 0x58), 0x304);
        if ((iVar1 == 0xf) || (iVar1 = get_field_24_05c284(*(u32 *)(a2 + 0x58), uVar2), iVar1 == 10)) {
            Vec3_dtor(auStack_68, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_58, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_48, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_38, 0xffffffff, ar6_00, a3);
            uVar2 = Vec3_dtor(auStack_28, 0xffffffff, ar6_00, a3);
            return uVar2;
        }
        (**(code **)(*(int *)(*(int *)(a2 + 0x58) + 8) + 0x170))(*(int *)(a2 + 0x58), iVar1, ar6_00, a3);
        if (cVar14 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), fVar5);
            dVar10 = (double)CONCAT44(0x3a83126f, fStack_398);
            fStack_398 = fVar5;
        } else {
            dVar10 = 1.85086533838489e-311;
        }
        if (cVar13 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar10 >> 0x20));
        } else {
            in_dr14 = in_dr14 + dVar10;
        }
        Vec3_assign(auStack_48, a1, ar6_00, a3);
        Vec3_ctor_copy_wrap_02f670(*(u32 *)(a2 + 0x58), (u32 *)(a2 + 0x58), ar6_00, a3, auStack_29c);
        Vec3_assign(auStack_58, auStack_29c, ar6_00, a3);
        Vec3_dtor(auStack_29c, 0xffffffff, ar6_00, a3);
        Vec3_sub(auStack_48, auStack_58, ar6_00, a3, auStack_2ac);
        Vec3_assign(auStack_28, auStack_2ac, ar6_00, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_2ac, 0xffffffff, ar6_00, a3);
        Vec3_length_sq(auStack_28, uVar2, ar6_00, a3);
        fVar5 = (float)((u64)dVar10 >> 0x20);
        if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(fVar5, *(u32 *)(a0 + 0x48));
            fStack_39c = fVar5;
        } else {
            fStack_39c = SUB84(dVar10, 0);
            dVar7 = *(double *)(a0 + 0x48);
            fStack_398 = fVar5;
        }
        if (cVar13 == '\0') {
            fVar5 = SUB84(dVar10, 0) + SUB84(in_dr14, 0);
        } else {
            fVar5 = SUB84(dVar10 + in_dr14, 0);
        }
        if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(fStack_39c, fVar5);
        } else {
            dVar10 = (double)CONCAT44(fStack_398, fStack_39c);
        }
        if (cVar13 == '\0') {
            fVar5 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
        } else {
            fVar5 = SUB84(dVar10 - dVar10, 0);
        }
        if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3dcccccd, fVar5);
        } else {
            dVar10 = -7.93713999303812e-251;
        }
        if (cVar13 == '\0') {
            fVar5 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
        } else {
            fVar5 = SUB84(dVar10 * dVar10, 0);
        }
        if (cVar14 == '\0') {
            uStack_34c = (double)CONCAT44(uStack_34c._4_4_, fVar5);
            dVar7 = uStack_34c;
        }
        uStack_34c = dVar7;
        dVar7 = uStack_34c;
        if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(u64)(u32)fVar5, cVar14 == '\0')) {
            uStack_34c = (double)((u64)uStack_34c & 0xffffffff00000000);
            dVar7 = uStack_34c;
        }
        uStack_34c = dVar7;
        Vec3_length(auStack_28, uVar2, ar6_00, a3);
        Vec3_scale_assign(auStack_28, &uStack_34c);
        dVar10 = (double)(u64)(u32)fVar5;
        dVar7 = dVar10;
        if (cVar14 == '\0') {
            uStack_24 = (double)((u64)uStack_24 & 0xffffffff00000000);
            dVar7 = uStack_24;
        }
        uStack_24 = dVar7;
        puVar4 = auStack_28;
        Vec3_add_assign(a0 + 0x200, puVar4);
        fVar5 = (float)((u64)dVar10 >> 0x20);
        (**(code **)(*(int *)(*(int *)(a2 + 0x50) + 8) + 0x13c))(*(int *)(a2 + 0x50), puVar4, ar6_00, a3);
        Vec3_assign(auStack_38, auStack_2bc, ar6_00, a3);
        Vec3_dtor(auStack_2bc, 0xffffffff, ar6_00, a3);
        iVar1 = a0 + 0x200;
        Vec3_make(iVar1, iVar1, ar6_00, a3, auStack_2cc);
        Vec3_make(auStack_38, iVar1, ar6_00, a3, auStack_2dc);
        Vec3_cos_angle(auStack_2cc, auStack_2dc, ar6_00, a3);
        if (cVar14 == '\0') {
            fVar6 = 5.0;
        } else {
            fVar5 = 5.0;
            fVar6 = 2.74654e-43;
        }
        bVar12 = cVar13 == '\0';
        bVar11 = fVar5 < fVar6;
        Vec3_dtor(auStack_2dc, 0xffffffff, ar6_00, a3);
        ar5_01 = (u64 *)0xffffffff;
        Vec3_dtor(auStack_2cc, 0xffffffff, ar6_00, a3);
        if (bVar12 && bVar11) {
            Vec3_sub(auStack_48, auStack_58, ar6_00, a3, auStack_2ec);
            Vec3_assign(auStack_28, auStack_2ec, ar6_00, a3);
            Vec3_dtor(auStack_2ec, 0xffffffff, ar6_00, a3);
            Vec3_make(a0 + 0x200, Vec3_make, ar6_00, a3, auStack_2fc);
            Vec3_make(auStack_28, Vec3_make, ar6_00, a3, auStack_30c);
            Vec3_cos_angle(auStack_2fc, auStack_30c, ar6_00, a3);
            if (cVar14 == '\0') {
                fVar5 = 5.0;
            } else {
                fVar6 = 5.0;
                fVar5 = 2.74654e-43;
            }
            bVar12 = cVar13 == '\0';
            Vec3_dtor(auStack_30c, 0xffffffff, ar6_00, a3);
            ar5_01 = (u64 *)0xffffffff;
            Vec3_dtor(auStack_2fc, 0xffffffff, ar6_00, a3);
            if (bVar12 && fVar6 < fVar5) {
                Vec3_set_xyz(auStack_318, ar5_01, ar6_00, a3);
                Vec3_vec_023484(a0 + 0x200, auStack_318, ar6_00, a3, auStack_328);
                Vec3_assign(a0 + 0x200, auStack_328, ar6_00, a3);
                Vec3_dtor(auStack_328, 0xffffffff, ar6_00, a3);
                ar5_01 = (u64 *)0xffffffff;
                object_dtor_delete(auStack_318, 0xffffffff, ar6_00, a3);
            }
        }
        *(u32 *)(a0 + 0x304) = 1;
    }
    if (2 < *(int *)(a0 + 0x128)) {
        if (cVar14 == '\0') {
            dVar7 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
        } else {
            dVar7 = 7.67384666056308e+21;
        }
        if (cVar13 == '\0') {
            fVar5 = (float)((u64)dVar7 >> 0x20);
            dVar7 = (double)CONCAT44(fVar5, SUB84(dVar7, 0) * fVar5);
        } else {
            dVar7 = dVar7 * dVar7;
        }
        if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x447a0000, SUB84(in_dr14, 0));
        } else {
            dVar10 = -7.933010971859645e-251;
        }
        if (cVar13 == '\0') {
            dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) - SUB84(dVar7, 0), SUB84(dVar10, 0));
        } else {
            dVar10 = dVar10 - dVar7;
        }
        if (cVar14 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)a1, SUB84(dVar7, 0));
        } else {
            dVar7 = *a1;
        }
        fVar5 = (float)((u64)dVar10 >> 0x20);
        if (cVar13 == '\0') {
            bVar12 = fVar5 < (float)((u64)dVar7 >> 0x20);
        } else {
            bVar12 = dVar10 < dVar7;
        }
        if (!bVar12) {
            if (cVar14 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x200), *(u32 *)a1);
            } else {
                dVar7 = *(double *)(a0 + 0x200);
            }
            if (cVar13 == '\0') {
                fVar6 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 + dVar7, 0);
            }
            if (cVar14 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x48), fVar6);
            } else {
                dVar7 = *(double *)(a0 + 0x48);
            }
            if (cVar13 == '\0') {
                fVar9 = (float)((u64)dVar7 >> 0x20);
                fVar6 = SUB84(dVar7, 0) + fVar9;
                dVar7 = (double)CONCAT44(fVar9, fVar6);
                bVar12 = fVar6 < fVar5;
            } else {
                dVar7 = dVar7 + dVar7;
                bVar12 = dVar7 < dVar10;
            }
            if (!bVar12) {
                ar5_01 = (u64 *)(a0 + 0x200);
                if (cVar14 == '\0') {
                    *(u32 *)ar5_01 = 0;
                } else {
                    *ar5_01 = (u64)dVar7 & 0xffffffff;
                }
            }
        }
    }
    Vec3_ctor_xyz(auStack_338, ar5_01, ar6_00, a3);
    iVar1 = Vec3_not_equal(a0 + 0x200, auStack_338);
    Vec3_dtor(auStack_338, 0xffffffff, ar6_00, a3);
    if (iVar1 != 0) {
        rand_float(a0, iVar1, ar6_00);
        rand_float(a0, iVar1, ar6_00);
        Vec3_ctor_xyz((int)&uStack_34c + 4, (int)&uStack_34c + 4, ar6_00, a3);
        Vec3_add_assign(a0 + 0x200, (int)&uStack_34c + 4);
        Vec3_dtor((int)&uStack_34c + 4, 0xffffffff, ar6_00, a3);
    }
    Vec3_dtor(auStack_68, 0xffffffff, ar6_00, a3);
    Vec3_dtor(auStack_58, 0xffffffff, ar6_00, a3);
    Vec3_dtor(auStack_48, 0xffffffff, ar6_00, a3);
    Vec3_dtor(auStack_38, 0xffffffff, ar6_00, a3);
    uVar2 = Vec3_dtor(auStack_28, 0xffffffff, ar6_00, a3);
    return uVar2;
}

/*
 * Vec3_ctor_xyz_wrap_05c258  0x8c05c258
 * only calls Vec3_ctor_xyz
 */
u32 Vec3_ctor_xyz_wrap_05c258(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_xyz(s0, a1, a2, a3);
    return uVar1;
}

/*
 * ret_const_3f800000_05c27c  0x8c05c27c
 */
u32 ret_const_3f800000_05c27c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * get_field_24_05c284  0x8c05c284
 * called by: CEnv_AddItem, CEnv_take_out_item, CEnv_vec_0dac50, CGame_GetUserGameInfo, CGame_uses_get_field_24_0c4c84,
 * Class_12b3b8_uses_object_dtor_delete_0e7a78, Class_12b580_uses_list_node_next_wrap_0da754, Higyo_gratification_events
 * (+19 more)
 */
u32 get_field_24_05c284(int a0, u32 a1) {
    return *(u32 *)(a0 + 0x24);
}

/*
 * Vec3_uses_get_field_1c_05c28c  0x8c05c28c
 * area name: sits between Vec3 functions (same compilation unit); behaviour name: its main named callee is
 * get_field_1c_026dd8 called by: alt_entry_046684, game_state_switch_049b68, game_state_switch_04b168,
 * game_state_switch_0526a0, game_uses_get_field_1c_048868, game_uses_rand_float_05c640, game_vec_03c94c,
 * game_vec_048f8c (+1 more)
 */
u32 Vec3_uses_get_field_1c_05c28c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    float fVar3;
    float fVar4;
    u64 in_dr0;
    double dVar5;
    u64 uVar6;
    u32 uVar8;
    u64 uVar7;
    double in_dr12;
    u32 uVar9;
    double in_dr14;
    u64 in_xd0;
    bool bVar10;
    char cVar11;
    char cVar12;
    u64 uStack_30;

    cVar12 = '\0';
    cVar11 = '\0';
    uVar2 = 1;
    Vec3_ctor_xyz((int)&uStack_30 + 4, a1, a2, a3);
    if (*(int *)(a0 + 0x2b8) == 2) {
        uVar2 = 0;
        goto LAB_8c05c608;
    }
    CAnimBody_GetCurFrame(a0 + 0xb0, a1, a2, a3);
    if (cVar12 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)in_dr0 >> 0x20));
    }
    iVar1 = *(int *)(a0 + 0x128);
    uVar8 = (u32)in_dr0;
    uVar9 = SUB84(in_dr14, 0);
    if (iVar1 == 1) {
        if (cVar12 == '\0') {
            in_dr14 = (double)CONCAT44(0x41980000, uVar9);
            in_dr12 = 33554440.21484375;
            in_dr0 = CONCAT44(0x41d80000, uVar8);
            uStack_30 = (double)CONCAT44(uStack_30._4_4_, 0x41d80000);
        } else {
            in_dr14 = 402653249.59375;
            in_dr12 = 1610612998.0;
            in_dr0 = 0xfe08c70541d80000;
            uStack_30 = -1.296348781552367e+299;
        }
    } else if (iVar1 == 2) {
        if (cVar12 == '\0') {
            in_dr14 = (double)CONCAT44(0x41300000, uVar9);
            in_dr12 = 1048576.2567138672;
            in_dr0 = CONCAT44(0x41b80000, uVar8);
            uStack_30 = (double)CONCAT44(uStack_30._4_4_, 0x41b80000);
        } else {
            in_dr14 = 402653249.1875;
            in_dr12 = 402653249.1875;
            in_dr0 = 0xfe08c70541b80000;
            uStack_30 = -1.2963487811625545e+299;
        }
    } else if (iVar1 == 3) {
        if (cVar12 == '\0') {
            in_dr14 = (double)CONCAT44(0x41700000, uVar9);
            in_dr12 = 4294968348.5;
            in_dr0 = CONCAT44(0x42200000, uVar8);
            uStack_30 = (double)CONCAT44(uStack_30._4_4_, 0x42200000);
        } else {
            in_dr14 = 805306498.875;
            in_dr12 = 34359746808.0;
            in_dr0 = 0xfe08c70f42200000;
            uStack_30 = -1.2963567657906834e+299;
        }
    } else if (iVar1 == 4) {
        if (cVar12 == '\0') {
            in_dr14 = (double)CONCAT44(0x41600000, uVar9);
            in_dr12 = 15032387641.0;
            in_dr0 = CONCAT44(0x42280000, uVar8);
            uStack_30 = (double)CONCAT44(uStack_30._4_4_, 0x42280000);
        } else {
            in_dr14 = 805306498.75;
            in_dr12 = 51539616006.0;
            in_dr0 = 0x12842280000;
            uStack_30 = 6.28659126329025e-312;
        }
    }
    uVar8 = (u32)in_dr0;
    if (*(int *)(a0 + 0x128) < 3) {
        iVar1 = get_field_1c_026dd8(a0 + 0xb0, a1, a2);
        fVar4 = SUB84(in_dr14, 0);
        if (iVar1 == 5) {
            if (cVar11 == '\0' && (float)((u64)in_dr14 >> 0x20) < fVar4) {
                if (cVar11 == '\0') {
                    bVar10 = fVar4 < SUB84(in_dr12, 0);
                } else {
                    bVar10 = in_dr14 < in_dr12;
                }
                if (bVar10) {
                    if (cVar12 == '\0') {
                        dVar5 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(a0 + 0x28));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x28);
                        dVar5 = 7.498589249951456e+86;
                    }
                    if (cVar11 == '\0') {
                        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
                    } else {
                        fVar4 = SUB84(dVar5 + dVar5, 0);
                    }
                    if (cVar12 == '\0') {
                        *(float *)(a0 + 0x28) = fVar4;
                        uVar7 = CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));
                    } else {
                        *(u64 *)(a0 + 0x28) = in_xd0;
                        uVar7 = *(u64 *)(a0 + 0x24);
                    }
                    if (cVar11 == '\0' && (float)((u64)uVar7 >> 0x20) < (float)uVar7) {
                        if (cVar12 == '\0') {
                            *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
                        } else {
                            *(u64 *)(a0 + 0x28) = *(u64 *)(a0 + 0x24);
                        }
                    }
                    goto LAB_8c05c5ec;
                }
            }
            if (cVar12 == '\0') {
                dVar5 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar5 = -4.794955196358332e-255;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x28) = fVar4;
                fVar4 = *(float *)(a0 + 0x28);
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
            if (cVar11 == '\0' && fVar4 < 0.0) {
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = (u64)(u32)fVar4;
                }
            }
        } else if (iVar1 == 6) {
            if (cVar11 == '\0') {
                bVar10 = (float)((u64)in_dr12 >> 0x20) < fVar4;
            } else {
                bVar10 = in_dr12 < in_dr14;
            }
            if (bVar10) {
                dVar5 = uStack_30;
                if (cVar12 == '\0') {
                    dVar5 = (double)CONCAT44((u32)uStack_30, uVar8);
                }
                if (cVar11 == '\0') {
                    bVar10 = fVar4 < (float)((u64)dVar5 >> 0x20);
                } else {
                    bVar10 = in_dr14 < dVar5;
                }
                if (bVar10) {
                    if (cVar12 == '\0') {
                        dVar5 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(a0 + 0x28));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x28);
                        dVar5 = 6.876925718751272e+86;
                    }
                    if (cVar11 == '\0') {
                        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
                    } else {
                        fVar4 = SUB84(dVar5 + dVar5, 0);
                    }
                    if (cVar12 == '\0') {
                        *(float *)(a0 + 0x28) = fVar4;
                        uVar7 = CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));
                    } else {
                        *(u64 *)(a0 + 0x28) = in_xd0;
                        uVar7 = *(u64 *)(a0 + 0x24);
                    }
                    if (cVar11 == '\0' && (float)((u64)uVar7 >> 0x20) < (float)uVar7) {
                        if (cVar12 == '\0') {
                            *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
                        } else {
                            *(u64 *)(a0 + 0x28) = *(u64 *)(a0 + 0x24);
                        }
                    }
                    goto LAB_8c05c5ec;
                }
            }
            if (cVar12 == '\0') {
                dVar5 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar5 = 6.566093943887814e+86;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x28) = fVar4;
                fVar4 = *(float *)(a0 + 0x28);
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
            if (cVar11 == '\0' && fVar4 < 0.0) {
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = (u64)(u32)fVar4;
                }
            }
        } else {
            if (cVar12 == '\0') {
                dVar5 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar5 = 1.0035827136752305e+178;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x28) = fVar4;
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
        }
    } else {
        iVar1 = get_field_1c_026dd8(a0 + 0xb0, a1, a2);
        if (iVar1 == 6) {
            fVar4 = SUB84(in_dr14, 0);
            if (cVar11 != '\0' || fVar4 <= (float)((u64)in_dr14 >> 0x20)) {
            LAB_8c05c538:
                if (cVar12 == '\0') {
                    dVar5 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x28));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x28);
                    dVar5 = 1.3411048210842936e-08;
                }
                if (cVar11 == '\0') {
                    fVar3 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar5 - dVar5, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)(a0 + 0x28) = fVar3;
                    fVar3 = *(float *)(a0 + 0x28);
                } else {
                    *(u64 *)(a0 + 0x28) = in_xd0;
                    in_xd0 = *(u64 *)(a0 + 0x28);
                }
                uVar6 = (u64)(u32)fVar3;
                if (cVar11 == '\0' && fVar3 < 0.0) {
                    uVar6 = (u64)(u32)fVar3;
                    if (cVar12 == '\0') {
                        *(u32 *)(a0 + 0x28) = 0;
                    } else {
                        *(u64 *)(a0 + 0x28) = uVar6;
                    }
                }
            } else {
                if (cVar11 == '\0') {
                    bVar10 = fVar4 < SUB84(in_dr12, 0);
                } else {
                    bVar10 = in_dr14 < in_dr12;
                }
                if (!bVar10)
                    goto LAB_8c05c538;
                if (cVar12 == '\0') {
                    dVar5 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(a0 + 0x28));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x28);
                    dVar5 = 5.944430421950997e+86;
                }
                if (cVar11 == '\0') {
                    fVar3 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar5 + dVar5, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)(a0 + 0x28) = fVar3;
                    uVar6 = CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));
                } else {
                    *(u64 *)(a0 + 0x28) = in_xd0;
                    in_xd0 = *(u64 *)(a0 + 0x28);
                    uVar6 = *(u64 *)(a0 + 0x24);
                }
                if (cVar11 == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
                    if (cVar12 == '\0') {
                        uVar8 = *(u32 *)(a0 + 0x24);
                        uVar6 = CONCAT44(uVar8, (float)uVar6);
                        *(u32 *)(a0 + 0x28) = uVar8;
                    } else {
                        uVar6 = *(u64 *)(a0 + 0x24);
                        *(u64 *)(a0 + 0x28) = uVar6;
                    }
                }
            }
            if (cVar11 == '\0') {
                bVar10 = (float)((u64)in_dr12 >> 0x20) < fVar4;
            } else {
                bVar10 = in_dr12 < in_dr14;
            }
            if (bVar10) {
                dVar5 = uStack_30;
                if (cVar12 == '\0') {
                    dVar5 = (double)CONCAT44((u32)uStack_30, (int)uVar6);
                }
                if (cVar11 == '\0') {
                    bVar10 = fVar4 < (float)((u64)dVar5 >> 0x20);
                } else {
                    bVar10 = in_dr14 < dVar5;
                }
                if (bVar10) {
                    if (cVar12 == '\0') {
                        dVar5 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(a0 + 0x28));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x28);
                        dVar5 = 5.322766890750813e+86;
                    }
                    if (cVar11 == '\0') {
                        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
                    } else {
                        fVar4 = SUB84(dVar5 + dVar5, 0);
                    }
                    if (cVar12 == '\0') {
                        *(float *)(a0 + 0x28) = fVar4;
                        uVar7 = CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));
                    } else {
                        *(u64 *)(a0 + 0x28) = in_xd0;
                        uVar7 = *(u64 *)(a0 + 0x24);
                    }
                    if (cVar11 == '\0' && (float)((u64)uVar7 >> 0x20) < (float)uVar7) {
                        if (cVar12 == '\0') {
                            *(u32 *)(a0 + 0x28) = *(u32 *)(a0 + 0x24);
                        } else {
                            *(u64 *)(a0 + 0x28) = *(u64 *)(a0 + 0x24);
                        }
                    }
                    goto LAB_8c05c5ec;
                }
            }
            if (cVar12 == '\0') {
                dVar5 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar5 = 6.545756141680556e+163;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x28) = fVar4;
                fVar4 = *(float *)(a0 + 0x28);
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
            if (cVar11 == '\0' && fVar4 < 0.0) {
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = (u64)(u32)fVar4;
                }
            }
        } else {
            if (cVar12 == '\0') {
                dVar5 = (double)CONCAT44(0x3f666666, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar5 = 3.73996784729797e-312;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x28) = fVar4;
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
        }
    }
LAB_8c05c5ec:
    iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
    if (iVar1 == 1) {
        *(u32 *)(a0 + 0x2b8) = 2;
        uVar2 = 0;
    }
LAB_8c05c608:
    Vec3_dtor((int)&uStack_30 + 4, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * game_uses_rand_float_05c640  0x8c05c640
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand_float
 * called by: alt_entry_046684
 */
u32 game_uses_rand_float_05c640(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    float fVar7;
    double in_dr0;
    float fVar9;
    double dVar8;
    u64 in_xd0;
    char cVar10;
    char cVar11;

    cVar11 = '\0';
    cVar10 = '\0';
    uVar6 = 1;
    if (*(int *)(a0 + 0x31c) < 1) {
        if (*(int *)(a0 + 0x324) == 0) {
            iVar1 = *(int *)(a0 + 300);
            if ((iVar1 < 5) && (-1 < iVar1)) {
                switch (iVar1) {
                case 0:
                    uVar2 = a1;
                    iVar1 = a2;
                    iVar3 = get_field_1c_026dd8(a0 + 0xb0, a1, a2);
                    fVar7 = (float)((u64)in_dr0 >> 0x20);
                    if (iVar3 == 0x11) {
                        CAnimBody_GetCurFrame(a0 + 0xb0, uVar2, iVar1, a3);
                        if (cVar11 == '\0') {
                            fVar9 = 190.0;
                        } else {
                            fVar7 = 190.0;
                            fVar9 = 9.75304e-43;
                        }
                        if (cVar10 != '\0' || fVar7 <= fVar9) {
                            *(u32 *)(a0 + 0x2b8) = 3;
                            *(u32 *)(a0 + 300) = 3;
                            return 1;
                        }
                    }
                    if (a2 == 1) {
                        iVar1 = game_uses_get_field_1c_057164(a0, a1, iVar1, a3);
                        if (iVar1 == 0) {
                            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                        }
                    } else {
                        iVar1 = Vec3_uses_get_field_1c_05c28c(a0, uVar2, iVar1, a3);
                        if (iVar1 == 0) {
                            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                        }
                    }
                    break;
                case 1:
                    *(u32 *)(a0 + 0x214) = 0;
                    *(u32 *)(a0 + 0x178) = 1;
                    iVar3 = a0 + 0x34c;
                    iVar1 = game_vec_055c38(a0, a1, iVar3, a2);
                    if (iVar1 == 0) {
                        *(u32 *)(a0 + 0x178) = 0;
                        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                        *(u32 *)(a0 + 0x40) = 5;
                        Vec3_assign(a0 + 0x248, a1, iVar3, a2);
                        rand_float(a0, a1, iVar3);
                        if (cVar11 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(a0 + 0x48));
                        } else {
                            in_xd0 = *(u64 *)(a0 + 0x48);
                        }
                        if (cVar10 == '\0') {
                            fVar7 = (float)((u64)in_dr0 >> 0x20);
                            in_dr0 = (double)CONCAT44(fVar7, SUB84(in_dr0, 0) * fVar7);
                        } else {
                            in_dr0 = in_dr0 * in_dr0;
                        }
                        if (cVar11 == '\0') {
                            *(int *)(a0 + 0x248) = SUB84(in_dr0, 0);
                        } else {
                            *(u64 *)(a0 + 0x248) = in_xd0;
                        }
                        rand_float(a0, a1, iVar3);
                        if (cVar11 == '\0') {
                            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(a0 + 0x48));
                        }
                        if (cVar10 == '\0') {
                            fVar7 = SUB84(in_dr0, 0) * (float)((u64)in_dr0 >> 0x20);
                        } else {
                            fVar7 = SUB84(in_dr0 * in_dr0, 0);
                        }
                        if (cVar11 == '\0') {
                            dVar8 = (double)CONCAT44(0x44bb8000, fVar7);
                        } else {
                            dVar8 = -1.1449929295928696e+164;
                        }
                        if (cVar10 == '\0') {
                            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - SUB84(dVar8, 0), SUB84(dVar8, 0));
                        } else {
                            dVar8 = dVar8 - dVar8;
                        }
                        if (cVar11 == '\0') {
                            *(int *)(a0 + 0x250) = (int)((u64)dVar8 >> 0x20);
                        } else {
                            *(double *)(a0 + 0x250) = dVar8;
                        }
                    }
                    break;
                case 2:
                    *(u32 *)(a0 + 700) = 0xffffffff;
                    iVar1 = game_state_switch_04c314(a0, a1, a0 + 0x248);
                    if (iVar1 == 0) {
                        *(u32 *)(a0 + 700) = 0;
                        iVar1 = rand_range(a0, 0, 10);
                        if (iVar1 < 5) {
                            uVar5 = 0;
                            uVar4 = 0xffffffff;
                            uVar2 = 0x1e;
                            iVar1 = CAnimBody_SetAnimation(a0 + 0xb0, 0x1e, 0xffffffff, 0);
                            if (iVar1 != 6) {
                                CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar4, uVar5);
                            }
                            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 2;
                        } else {
                            uVar5 = 0;
                            uVar4 = 0xffffffff;
                            uVar2 = 0x11;
                            iVar1 = CAnimBody_SetAnimation(a0 + 0xb0, 0x11, 0xffffffff, 0);
                            if (iVar1 != 6) {
                                CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar4, uVar5);
                            }
                            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                        }
                        *(u32 *)(a0 + 0x2b8) = 3;
                    }
                    break;
                case 3:
                    iVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, a1, a2, a3);
                    if (iVar1 == 7) {
                        *(u32 *)(a0 + 300) = 0;
                        uVar6 = 0;
                    }
                    break;
                case 4:
                    iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a1, a2, a3);
                    if (iVar1 == 1) {
                        *(u32 *)(a0 + 300) = 0;
                        *(u32 *)(a0 + 0x2b8) = 2;
                        uVar6 = 0;
                    }
                }
            }
        } else {
            uVar6 = 0;
        }
    } else {
        uVar6 = 0;
    }
    return uVar6;
}

/*
 * game_vec_05c9fc  0x8c05c9fc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_uses_get_field_1c_048868
 */
u32 game_vec_05c9fc(int a0, u8 *a1, u8 *a2, code *a3) {
    int iVar1;
    u32 uVar2;
    u8 *puVar3;
    code *ar5_00;
    u32 *puVar4;
    u32 a5;
    u32 uVar5;
    u8 *puVar6;
    u32 uVar7;
    float fVar8;
    u32 uVar9;
    double dVar10;
    u32 uVar12;
    double dVar11;
    float fVar13;
    u32 in_fr3;
    u64 in_xd0;
    char cVar14;
    char cVar15;
    u8 auStack_11c[16];
    u8 auStack_10c[12];
    u8 auStack_100[16];
    u8 auStack_f0[16];
    u8 auStack_e0[16];
    u8 auStack_d0[16];
    u8 auStack_c0[16];
    u8 auStack_b0[16];
    u8 auStack_a0[16];
    u8 auStack_90[16];
    u8 auStack_80[16];
    u8 auStack_70[16];
    u8 auStack_60[16];
    u8 auStack_50[8];
    u64 uStack_48;
    u8 auStack_34[16];
    u8 auStack_24[20];
    u32 uStack_10;

    cVar15 = '\0';
    cVar14 = '\0';
    uStack_10 = 1;
    uVar7 = 1;
    ar5_00 = Vec3_ctor_zero;
    puVar6 = a2;
    Vec3_ctor_zero(auStack_24, Vec3_ctor_zero, a2);
    Vec3_ctor_zero(auStack_34, ar5_00, a2);
    Vec3_ctor_zero((int)&uStack_48 + 4, ar5_00, a2);
    puVar4 = &g_8c125bf0;
    Vec3_copy_assign(auStack_50, &g_8c125bf0);
    if (cVar15 == '\0') {
        dVar10 = 2.597301565578305e+22;
    } else {
        in_xd0 = 0;
        dVar10 = 6.62631198776065e-312;
    }
    if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) - SUB84(dVar10, 0), SUB84(dVar10, 0));
    } else {
        dVar10 = dVar10 - dVar10;
    }
    dVar11 = dVar10;
    if (cVar15 == '\0') {
        uStack_48 = (double)CONCAT44(uStack_48._4_4_, (int)((u64)dVar10 >> 0x20));
        dVar11 = uStack_48;
    }
    uStack_48 = dVar11;
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        iVar1 = Vec3_uses_get_field_1c_05c28c(a0, Vec3_uses_get_field_1c_05c28c, a2, a3);
        if (iVar1 == 0) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            *(u32 *)(a0 + 0x40) = 5;
            uVar5 = *(u32 *)(a0 + 0x244);
            if (cVar15 == '\0') {
                uVar2 = SUB84(dVar10, 0);
                uVar12 = 0x40000000;
            } else {
                uVar2 = 0x40000000;
                uVar12 = 0x43b40000;
            }
            a2 = auStack_50;
            CMushroomerBody_vec_032518(a0, a1, a2, uVar5);
            Vec3_assign(a0 + 0x54, auStack_60, a2, uVar5);
            a5 = 0xffffffff;
            Vec3_dtor(auStack_60, 0xffffffff, a2, uVar5);
            (**(code **)(**(int **)(a0 + 0x244) + 0x184))(*(int **)(a0 + 0x244), a5, a2, uVar5);
            if (cVar15 == '\0') {
                dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x48), uVar12);
            } else {
                in_xd0 = CONCAT44(uVar12, uVar2);
                dVar10 = *(double *)(a0 + 0x48);
            }
            if (cVar14 == '\0') {
                fVar8 = (float)((u64)dVar10 >> 0x20);
                dVar10 = (double)CONCAT44(fVar8, SUB84(dVar10, 0) - fVar8);
            } else {
                dVar10 = dVar10 - dVar10;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x58) = SUB84(dVar10, 0);
            } else {
                *(u64 *)(a0 + 0x58) = in_xd0;
            }
            Vec3_sub(a0 + 0x54, a1, a2, uVar5, auStack_70);
            Vec3_normalize(auStack_70, Vec3_normalize, a2, uVar5);
            Vec3_scale(auStack_80, a0 + 0x48, a2, uVar5, auStack_90);
            Vec3_scale(auStack_90, &g_8c136614, a2, uVar5, auStack_a0);
            Vec3_add(a1, auStack_a0, a2, uVar5, auStack_b0);
            Vec3_assign(a0 + 0x248, auStack_b0, a2, uVar5);
            Vec3_dtor(auStack_b0, 0xffffffff, a2, uVar5);
            a3 = Vec3_dtor;
            Vec3_dtor(auStack_a0, 0xffffffff, a2, Vec3_dtor);
            Vec3_dtor(auStack_90, 0xffffffff, a2, a3);
            Vec3_dtor(auStack_80, 0xffffffff, a2, a3);
            uVar5 = 0xffffffff;
            Vec3_dtor(auStack_70, 0xffffffff, a2, a3);
            (**(code **)(**(int **)(a0 + 0x244) + 0x184))(*(int **)(a0 + 0x244), uVar5, a2, a3);
            if (cVar15 == '\0') {
                dVar10 = (double)CONCAT44((int)((u64)dVar10 >> 0x20), in_fr3);
                dVar11 = (double)CONCAT44(0x3f000000, *(u32 *)(a0 + 0x48));
            } else {
                dVar11 = -2.4967168957076204e+265;
            }
            if (cVar14 == '\0') {
                dVar10 = (double)CONCAT44(
                    (float)((u64)dVar10 >> 0x20) - SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20), SUB84(dVar10, 0));
            } else {
                dVar10 = dVar10 - dVar11 * dVar11;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x24c) = (int)((u64)dVar10 >> 0x20);
            } else {
                *(double *)(a0 + 0x24c) = dVar10;
            }
        }
    } else if (iVar1 == 1) {
        a2 = (u8 *)(a0 + 0x248);
        iVar1 = pure_virtual_stub();
        if (iVar1 == 0) {
            *(u32 *)(a0 + 0x40) = 5;
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0;
            } else {
                *(u64 *)(a0 + 0x2c) = (u64)dVar10 & 0xffffffff;
            }
            a3 = NULL;
            a2 = (u8 *)0xffffffff;
            uVar5 = 0;
            CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar5, a2, a3);
        }
    } else if (iVar1 == 2) {
        game_vec_05ae54(a0, puVar4, a2, a3);
        Vec3_scale(a0 + 0x14, &g_8c136618, a2, a3, auStack_c0);
        Vec3_add(a1, auStack_c0, a2, a3, auStack_d0);
        timer_vec_031c74(a0, auStack_d0, a1, a3);
        Vec3_dtor(auStack_d0, 0xffffffff, a1, a3);
        uVar5 = 0xffffffff;
        Vec3_dtor(auStack_c0, 0xffffffff, a1, a3);
        iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar5, a1, a3);
        a2 = a1;
        if (iVar1 == 1) {
            if (cVar15 == '\0') {
                fVar8 = *(float *)(a0 + 0x18);
                fVar13 = 0.03;
            } else {
                fVar8 = 0.03;
                fVar13 = 4.14784e-43;
            }
            if (cVar14 != '\0' || fVar8 <= fVar13) {
                if (*(int *)(a0 + 0x128) == 0) {
                    a3 = NULL;
                    a2 = (u8 *)0xffffffff;
                    uVar5 = 0x14;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x14, 0xffffffff, 0);
                    uVar5 = get_field_1c_on_field_b0(a0, uVar5, a2);
                    uVar2 = array_at_field_14(a0 + 0xb0, uVar5, a2, a3);
                    puVar4 = (u32 *)deref_u32(uVar2);
                    uVar2 = puVar4[1];
                    *(u32 *)(a0 + 0xb4) = *puVar4;
                    *(u32 *)(a0 + 0xb8) = uVar2;
                    *(u32 *)(a0 + 0xbc) = puVar4[2];
                    *(u8 **)(a0 + 0xb4) = &g_8c1362f4;
                } else if (*(int *)(a0 + 0x128) == 1) {
                    a3 = NULL;
                    a2 = (u8 *)0xffffffff;
                    uVar5 = 0x14;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x14, 0xffffffff, 0);
                    uVar5 = get_field_1c_on_field_b0(a0, uVar5, a2);
                    uVar2 = array_at_field_14(a0 + 0xb0, uVar5, a2, a3);
                    puVar4 = (u32 *)deref_u32(uVar2);
                    uVar2 = puVar4[1];
                    *(u32 *)(a0 + 0xb4) = *puVar4;
                    *(u32 *)(a0 + 0xb8) = uVar2;
                    *(u32 *)(a0 + 0xbc) = puVar4[2];
                    *(u8 **)(a0 + 0xb4) = &g_8c13633c;
                } else {
                    a3 = NULL;
                    a2 = (u8 *)0xffffffff;
                    uVar5 = 0x15;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0x15, 0xffffffff, 0);
                    uVar5 = get_field_1c_on_field_b0(a0, uVar5, a2);
                    uVar2 = array_at_field_14(a0 + 0xb0, uVar5, a2, a3);
                    puVar4 = (u32 *)deref_u32(uVar2);
                    uVar2 = puVar4[1];
                    *(u32 *)(a0 + 0xb4) = *puVar4;
                    *(u32 *)(a0 + 0xb8) = uVar2;
                    *(u32 *)(a0 + 0xbc) = puVar4[2];
                    *(u8 **)(a0 + 0xb4) = &g_8c136384;
                }
                CAnimBody_SetFrame(a0 + 0xb0, uVar5, a2, a3);
                vec3_clear(a0 + 0x2d4, uVar5, a2, a3);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
        }
    } else if (iVar1 == 3) {
        *(u32 *)(a0 + 0x178) = 1;
        *(u32 *)(a0 + 0x334) = 1;
        *(u32 *)(a0 + 0x2e8) = 1;
        CAnimBody_GetCurFrame(a0 + 0xb0, puVar4, a2, a3);
        uVar9 = SUB84(dVar10, 0);
        CAnimBody_vec_034384(a0 + 0xb0, **(u32 **)(a0 + 0xb4), a2, a3);
        Vec3_assign(auStack_34, auStack_e0, a2, a3);
        Vec3_dtor(auStack_e0, 0xffffffff, a2, a3);
        Vec3_sub(auStack_34, a0 + 0x2d4, a2, a3, auStack_f0);
        Vec3_assign(a0 + 0x2a8, auStack_f0, a2, a3);
        Vec3_dtor(auStack_f0, 0xffffffff, a2, a3);
        puVar3 = auStack_34;
        Vec3_assign(a0 + 0x2d4, puVar3, a2, a3);
        CAnimBody_GetCurFrame(a0 + 0xb0, puVar3, a2, a3);
        Vec3_ctor_xyz(auStack_100, puVar3, a2, a3);
        a3 = (code *)(a0 + 0x2a8);
        puVar3 = (u8 *)Vec3_not_equal(a3, auStack_100);
        uVar5 = 0xffffffff;
        a2 = puVar3;
        Vec3_dtor(auStack_100, 0xffffffff, puVar3, a3);
        if (puVar3 != NULL) {
            vec3_copy_8c02b5fc(auStack_10c, puVar6, a2);
            Vec3_vec_023484(a0 + 0x2a8, auStack_10c, a2, a3, auStack_11c);
            Vec3_assign(a0 + 0x2a8, auStack_11c, a2, a3);
            Vec3_dtor(auStack_11c, 0xffffffff, a2, a3);
            uVar5 = 0xffffffff;
            object_dtor_delete(auStack_10c, 0xffffffff, a2, a3);
        }
        iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar5, a2, a3);
        if (iVar1 == 1) {
            uVar7 = 0;
            *(u32 *)(a0 + 300) = 0;
            *(u32 *)(a0 + 0x334) = 0;
            *(u32 *)(a0 + 0x2e8) = 0;
            *(u32 *)(a0 + 0x178) = 0;
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = (u64)uVar9;
            }
            vec3_clear(a0 + 0x2a8, a0 + 0x2a8, a2, a3);
            a3 = NULL;
            a2 = (u8 *)0xffffffff;
            CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, a0 + 0xb0, a2, a3);
            *(u32 *)(a0 + 0x2b8) = 3;
        }
    }
    free_if_nonnull_wrap_102790(auStack_50, 0xffffffff, a2, a3);
    Vec3_dtor((int)&uStack_48 + 4, 0xffffffff, a2, a3);
    puVar6 = auStack_34;
    Vec3_dtor(puVar6, 0xffffffff, puVar6, a3);
    Vec3_dtor(auStack_24, 0xffffffff, puVar6, a3);
    return uVar7;
}

/*
 * game_test_05d2a4  0x8c05d2a4
 * area name: game code; nothing names its area yet; behaviour name: returns the result of a comparison
 */
u32 game_test_05d2a4(int a0) {
    if (0 < *(int *)(0x31c + a0)) {
        return 1;
    }
    return 0;
}

/*
 * static_init_vec3s_280330  0x8c05d2bc
 * static initialiser: builds 12 global Vec3 constants (8c280330..8c2803c8) and registers their destructors, then more
 * set-up
 */
u32 static_init_vec3s_280330(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;
    u32 uStack_c0;
    u32 uStack_ac;
    u32 uStack_a8;
    u32 uStack_a4;
    u32 uStack_a0;
    u32 uStack_9c;
    u32 uStack_98;
    u32 uStack_94;
    u32 uStack_90;
    u32 uStack_8c;
    u32 uStack_88;
    u32 uStack_84;
    u32 uStack_80;
    u8 auStack_7c[24];
    u8 auStack_64[24];
    u8 auStack_4c[76];

    uStack_80 = Vec3_ctor_xyz((&DATA_8c125d28), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c280330;
    global_list_push(uStack_80, (&Vec3_dtor), 0x8c280330, a3);
    uStack_84 = Vec3_ctor_xyz((&DATA_8c125d38), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c28033c;
    global_list_push(uStack_84, (&Vec3_dtor), 0x8c28033c, a3);
    uStack_88 = Vec3_ctor_xyz((&DATA_8c125d48), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c280348;
    global_list_push(uStack_88, (&Vec3_dtor), 0x8c280348, a3);
    uStack_8c = Vec3_ctor_xyz((&DATA_8c125d58), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c280354;
    global_list_push(uStack_8c, (&Vec3_dtor), 0x8c280354, a3);
    uStack_90 = Vec3_ctor_xyz((&DATA_8c125d68), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c280360;
    global_list_push(uStack_90, (&Vec3_dtor), 0x8c280360, a3);
    uStack_94 = Vec3_ctor_xyz((&DATA_8c125d78), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c28036c;
    global_list_push(uStack_94, (&Vec3_dtor), 0x8c28036c, a3);
    uStack_98 = Vec3_ctor_xyz((&DATA_8c125d88), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c280378;
    global_list_push(uStack_98, (&Vec3_dtor), 0x8c280378, a3);
    uStack_9c = Vec3_ctor_xyz((&DATA_8c125d98), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c280384;
    global_list_push(uStack_9c, (&Vec3_dtor), 0x8c280384, a3);
    uStack_a0 = Vec3_ctor_xyz((&DATA_8c125da8), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c280390;
    global_list_push(uStack_a0, (&Vec3_dtor), 0x8c280390, a3);
    uStack_a4 = Vec3_ctor_xyz(0x8c2803a8, puVar3, uVar2, a3);
    uVar2 = 0x8c28039c;
    global_list_push(uStack_a4, (&Vec3_dtor), 0x8c28039c, a3);
    uStack_a8 = Vec3_ctor_copy(0x8c2803d4, (&DATA_8c125d78), uVar2, a3);
    uVar2 = 0x8c2803bc;
    global_list_push(uStack_a8, (&Vec3_dtor), 0x8c2803bc, a3);
    uStack_ac = Vec3_ctor_copy(0x8c2803d4 + 0x10, (&DATA_8c125d68), uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c2803c8;
    global_list_push(uStack_ac, (&Vec3_dtor), 0x8c2803c8, a3);
    uVar1 = set_6_floats((int)&uStack_c0 + 0xa4);
    copy_6_words(0x8c2803f4, uVar1);
    uVar1 = set_6_floats((int)&uStack_c0 + 0x8c);
    copy_6_words(0x8c2803f4 + 0x18, uVar1);
    uVar1 = set_6_floats(auStack_4c);
    copy_6_words(0x8c2803f4 + 0x30, uVar1);
    uVar1 = set_6_floats(auStack_64);
    copy_6_words(0x8c2803f4 + 0x48, uVar1);
    uStack_c0 = set_6_floats(auStack_7c);
    uVar2 = copy_6_words(0x8c2803f4 + 0x60, uStack_c0);
    return uVar2;
}

/*
 * copy_6_words  0x8c05d608
 * a0[0..5] = a1[0..5]
 * called by: static_init_vec3s_280330, static_init_vec3s_280e00, static_init_vec3s_2846a0, static_init_vec3s_285180,
 * static_init_vec3s_285840, static_init_vec3s_286d88
 */
u32 *copy_6_words(u32 *a0, u32 *a1) {
    u32 uVar1;

    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    a0[3] = a1[3];
    uVar1 = a1[5];
    a0[4] = a1[4];
    a0[5] = uVar1;
    return a0;
}

/*
 * Class_12a078_ctor  0x8c05d644
 * stores the vtable 0x8c12a078
 * called by: CFrogManLine_ctor
 * strings: "FROGMANLINE"; "FROGMANLINE1"; "STATUS_FORMAT"
 */
u32 *Class_12a078_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {

    Class_129c70_ctor(a0, a1, a2);
    *a0 = &g_8c12a078;
    talk_history_reset(a0 + 0x27);
    clear_fields_0_to_20(a0 + 0x207, a1);
    *(u8 *)(a0 + 0x20) = 0;
    a0[0xe1] = 0xffffffff;
    a0[0x214] = 0;
    a0[0x215] = 0;
    *(u8 *)(a0 + 0x21e) = 0;
    *(u8 *)((int)a0 + 0x879) = 0;
    a0[0x21b] = 0;
    *(u8 *)(a0 + 0x21c) = 0;
    *(u8 *)((int)a0 + 0x871) = 0;
    a0[0x216] = 0;
    *(u8 *)(a0 + 0x217) = 0;
    a0[0x219] = 0;
    a0[0x21a] = 0;
    a0[0x21f] = 0;
    a0[0x220] = 0;
    strcpy(a0 + 0xd9, "FROGMANLINE");
    strcpy(a0 + 0x27, "FROGMANLINE1");
    strcpy(a0 + 0x2f, "STATUS_FORMAT");
    strcpy(a0 + 0x37, &g_8c1369bf);
    a0[0xe2] = 4;
    set_field_778(a0 + 0x27, 1);
    *(u8 *)((int)a0 + 0x9a) = 2;
    a0[0x222] = 1;
    a0[0x221] = 1;
    a0[0x218] = 0;
    a0[0x21d] = 0x1b;
    a0[0x223] = 0;
    a0[0x224] = 0;
    a0[0x225] = 0;
    a0[0x226] = 0;
    return a0;
}

/*
 * set_field_778  0x8c05d7f8
 * called by: Class_12a078_ctor, FrogMan_update_sleep_light
 */
int set_field_778(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x778;
    *(u32 *)(0x778 + a0) = a1;
    return iVar1;
}

/*
 * Class_12a078_dtor  0x8c05d804
 * stores the vtable 0x8c12a078
 * called by: CAnimal_m0_0361d8
 */
u32 *Class_12a078_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12a078;
        free_if_nonnull_wrap_02eaec(a0 + 0x207, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_129c70_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * FrogMan_update_sleep_light  0x8c05d860
 * FrogMan line: sleep, wake-up and light requests (REQUEST_SLEEP/WAKE_UP/WANT_LIGHT, STATUS_LIGHT/LIGHT_OFF/SICK)
 * strings: "STATUS_SICK"; "STATUS_SICK"; "REQUEST_SLEEP"; "REQUEST_SLEEP" ...
 */
u32 FrogMan_update_sleep_light(int *a0, code *a1, code *a2) {
    char cVar1;
    u32 uVar2;
    u32 uVar3;
    code *pcVar4;
    u32 uVar5;
    u32 uVar6;
    u8 *puVar7;
    u8 *puVar8;
    int iVar9;
    u8 *puVar10;
    code *pcVar11;
    int *ar5_00;
    u8 *ar6_00;
    int iVar12;
    code *pcVar13;
    char *pcVar14;
    int ar7_00;
    u32 in_stack_fffffe88;
    u8 auStack_50[32];
    u8 auStack_30[20];

    pcVar4 = a1;
    pcVar11 = a2;
    Vec3_ctor_zero(auStack_30, a1, a2);
    puVar10 = auStack_50;
    puVar7 = &g_8c136948;
    iVar9 = 0x10;
    do {
        puVar8 = puVar7 + 1;
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 2;
        puVar10[1] = *puVar8;
        puVar10 = puVar10 + 2;
        iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    pcVar13 = get_field_a4_s16;
    uVar2 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar4);
    if ((uVar2 & 0xffff) == 3) {
        uVar3 = talk_uses_table13019c_find_row_02bef8(*(int *)(a2 + 4), 3, pcVar11);
        (**(code **)(*a0 + 0x18))(a0, *(int *)(a2 + 0x18), (int)(short)uVar3, pcVar13);
    }
    g_8c136908 = a0[0x210];
    pcVar14 = (char *)a0[0x211];
    ar6_00 = &g_8c13686c;
    uVar3 = 0xa4;
    g_8c136910 = a0[0x212];
    g_8c13690c = pcVar14;
    iVar9 = get_field_13c_028d9c(*(int *)(a2 + 4), 0xa4, &g_8c13686c);
    a0[0x21d] = iVar9;
    uVar3 = talk_uses_table13019c_find_row_02bef8(*(int *)(a2 + 4), uVar3, ar6_00);
    set_field_728_u8(a0 + 0x27, (int)(short)uVar3);
    if ('\x01' < (char)a0[0x26]) {
        set_field_778(a0 + 0x27, 0);
    }
    Class_12a078_uses_set_field_38_05ff40(a0, a1, a2, pcVar14);
    FrogMan_react_feed_full(a0, a1, a2, pcVar14);
    pcVar4 = a2;
    talk_check_status_lastone(a0, a1, a2, pcVar14);
    pcVar11 = get_field_13c_028d9c;
    iVar9 = get_field_13c_028d9c(*(int *)(a2 + 4), get_field_13c_028d9c, pcVar4);
    if ((((iVar9 == 7) && (uVar3 = get_field_0_s8(*(int *)(a2 + 4) + 0x78), (char)uVar3 == '\x01')) &&
         (iVar9 = get_field_40_03598c(*(int *)(a2 + 0xc), pcVar11), iVar9 == 0)) &&
        (a0[0xe1] == -1)) {
        uVar2 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar11);
        uVar3 = 0x43;
        iVar9 = libgcc_divide_helper_01031c(uVar2 & 0xffff, 0x43, pcVar4);
        if ((iVar9 == 0x16) && (a0[1] == 0)) {
            uVar3 = get_field_8_s8(*(int *)(a2 + 4) + 0x78, uVar3);
            format_int_at_10(0x8c35468c, (int)(char)uVar3, pcVar4, pcVar14);
            pcVar14 = "STATUS_SICK";
            talk_queue_mode1(a0 + 0x27, 0x12, 0, "STATUS_SICK", &g_8c1369bf);
        }
    }
    pcVar4 = a1;
    pcVar11 = a2;
    FrogMan_pick_idle_action(a0, a1, a2, pcVar14);
    iVar9 = get_field_124_027930(*(int *)(a2 + 8), pcVar4, pcVar11, pcVar14);
    if (((iVar9 != 2) && (iVar9 = get_field_40_03598c(*(int *)(a2 + 0xc), pcVar4), iVar9 == 0)) &&
        ((a0[1] == 0 && (iVar9 = get_field_178_035734(*(int *)(a2 + 8), pcVar4, pcVar11), iVar9 == 0)))) {
        pcVar4 = a1;
        pcVar11 = a2;
        game_uses_get_word_array_a4_0620d4(a0, a1, a2, pcVar14);
    }
    iVar9 = get_field_124_027930(*(int *)(a2 + 8), pcVar4, pcVar11, pcVar14);
    if (iVar9 != 2) {
        pcVar4 = a2;
        Class_129c70_uses_get_field_4_02f20c(a0, a2, pcVar11, pcVar14);
    }
    pcVar14 = (char *)get_field_4_05eed8(a0);
    pcVar4 = a1;
    pcVar11 = a2;
    FrogMan_choose_status_event(a0, a1, a2, pcVar14);
    iVar9 = get_field_124_027930(*(int *)(a2 + 8), pcVar4, pcVar11, pcVar14);
    if (iVar9 != 2) {
        pcVar13 = FrogMan_jump_events;
        pcVar4 = a1;
        pcVar11 = a2;
        FrogMan_jump_events(a0, a1, a2, FrogMan_jump_events);
        iVar9 = get_field_178_035734(*(int *)(a2 + 8), pcVar4, pcVar11);
        pcVar14 = (char *)pcVar13;
        if ((iVar9 == 0) &&
            (iVar9 = get_field_40_03598c(*(int *)(a2 + 0xc), pcVar4), pcVar14 = (char *)pcVar13, iVar9 == 0)) {
            pcVar4 = a1;
            pcVar11 = a2;
            FrogMan_react_touch(a0, a1, a2, pcVar13);
            pcVar14 = (char *)pcVar13;
        }
        pcVar4 = (code *)get_field_40_03598c(*(int *)(a2 + 0xc), pcVar4);
        if ((pcVar4 == NULL) && (a0[1] != 0xd)) {
            talk_complain_tank_env(a0, a1, a2);
            pcVar4 = a1;
            pcVar11 = a2;
            FrogMan_react_environment(a0, a1, a2, pcVar14);
        }
        iVar9 = get_field_40_03598c(*(int *)(a2 + 0xc), pcVar4);
        if (iVar9 == 0) {
            timers_tick_and_clear(a0 + 0x207, 1);
            pcVar4 = a1;
            pcVar11 = a2;
            FrogMan_react_tap(a0, a1, a2, pcVar14);
        }
    }
    iVar9 = get_field_124_027930(*(int *)(a2 + 8), pcVar4, pcVar11, pcVar14);
    if (iVar9 == 0) {
        iVar9 = get_field_40_03598c(*(int *)(a2 + 0xc), pcVar4);
        if (iVar9 == 0) {
            uVar2 = get_field_a0_035724(*(int *)(a2 + 0x18), pcVar4);
            pcVar4 = (code *)(uVar2 & 0xff);
            if ((pcVar4 == (code *)0x2) && (a0[1] == 0)) {
                iVar9 = get_field_24_05eed0(*(int *)(a2 + 4) + 0xf8, 2);
                if (iVar9 == 1) {
                    uVar2 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar4);
                    pcVar4 = (code *)0x7;
                    iVar9 = libgcc_divide_helper_01031c(uVar2 & 0xffff, 7, pcVar11);
                    if ((iVar9 == 1) && (a0[0xe1] == -1)) {
                        pcVar14 = "REQUEST_SLEEP";
                        pcVar11 = NULL;
                        pcVar4 = NULL;
                        talk_start_line(a0 + 0x27, 0, 0, "REQUEST_SLEEP");
                    }
                }
                uVar3 = get_field_bc_s8(*(int *)(a2 + 0xc), pcVar4, pcVar11, pcVar14);
                if ((char)uVar3 == '\0') {
                    uVar2 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar4);
                    pcVar4 = (code *)0x7;
                    iVar9 = libgcc_divide_helper_01031c(uVar2 & 0xffff, 7, pcVar11);
                    if ((iVar9 == 1) && (a0[0xe1] == -1)) {
                        if (a0[0x226] == 1) {
                            pcVar14 = "REQUEST_WAKE_UP";
                            pcVar11 = NULL;
                            pcVar4 = (code *)0x21;
                            talk_start_line(a0 + 0x27, 0x21, 0, "REQUEST_WAKE_UP");
                        } else {
                            pcVar14 = "REQUEST_WANT_LIGHT";
                            pcVar11 = NULL;
                            pcVar4 = (code *)0x21;
                            talk_start_line(a0 + 0x27, 0x21, 0, "REQUEST_WANT_LIGHT");
                        }
                        a0[0x226] = 0;
                    }
                }
                uVar3 = get_field_bc_s8(*(int *)(a2 + 0xc), pcVar4, pcVar11, pcVar14);
                if ((*(char *)((int)a0 + 0x9a) != (char)uVar3) &&
                    (uVar3 = get_field_a4_s16(*(int *)(a2 + 0x18), pcVar4), 3 < (u16)uVar3)) {
                    uVar3 = get_field_bc_s8(*(int *)(a2 + 0xc), pcVar4, pcVar11, pcVar14);
                    if ((char)uVar3 == '\0') {
                        pcVar14 = "STATUS_LIGHT_OFF";
                        pcVar11 = NULL;
                        pcVar4 = (code *)0xa;
                        talk_start_line(a0 + 0x27, 10, 0, "STATUS_LIGHT_OFF");
                    } else {
                        pcVar4 = (code *)get_field_bc_s8(*(int *)(a2 + 0xc), pcVar4, pcVar11, pcVar14);
                        if (*(char *)((int)a0 + 0x9a) < (char)pcVar4) {
                            pcVar14 = "STATUS_LIGHT";
                            pcVar11 = NULL;
                            pcVar4 = NULL;
                            talk_start_line(a0 + 0x27, 0, 0, "STATUS_LIGHT");
                        }
                    }
                }
            }
        }
        iVar9 = get_field_124_027930(*(int *)(a2 + 8), pcVar4, pcVar11, pcVar14);
        if (iVar9 != 2) {
            if ((((a0[1] != 7) && (iVar9 = get_field_40_03598c(*(int *)(a2 + 0xc), pcVar4), iVar9 == 0)) &&
                 ('\x01' < (char)a0[0x26])) &&
                (iVar9 = get_field_770_05eeb8(a0 + 0x27), iVar9 == 1)) {
                if (a0[0xe1] == -1) {
                    pcVar11 = (code *)(a0 + 0x27);
                    pcVar4 = (code *)a0[0xe2];
                    iVar9 = speech_request(0x8c35468c, pcVar4, pcVar11, pcVar14);
                    a0[0xe1] = iVar9;
                } else {
                    pcVar4 = (code *)0x2;
                    set_field_770(a0 + 0x27, 2, pcVar11, pcVar14);
                }
            }
            uVar3 = get_field_4_s8(*(int *)(a2 + 4) + 0xa8);
            if ((char)uVar3 == '\x01') {
                pcVar4 = get_field_140_025f70;
                iVar9 = get_field_140_025f70(*(int *)(a2 + 4), get_field_140_025f70);
                if (iVar9 == 0) {
                    *(u8 *)(a0 + 0x26) = 4;
                }
            }
        }
    }
    if (((a0[0x10] == 0) || (a0[0x10] == 3)) &&
        ((a0[1] != 7 && ((pcVar4 = (code *)get_field_40_03598c(*(int *)(a2 + 0xc), pcVar4),
                          pcVar4 == NULL && (pcVar14 = (char *)0x1, '\x01' < (char)a0[0x26])))))) {
        pcVar14 = (char *)0x83;
        pcVar11 = (code *)(int)*(char *)((int)a0 + 0x83);
        pcVar4 = (code *)(int)*(char *)((int)a0 + 0x83);
        if ((pcVar4 == NULL) || (pcVar4 == (code *)0x1)) {
            pcVar4 = a1;
            pcVar11 = a2;
            talk_uses_get_field_8_s8_0652f4(a0, a1, a2, 0x83);
        }
    }
    if (((a0[1] != 1) && (iVar9 = (int)(char)a0[0x26], iVar9 < 10)) && (-1 < iVar9)) {
        switch (iVar9) {
        case 0:
            a0[2] = 0x5f;
            a0[3] = 0;
            a0[1] = 0xd;
            a0[0x210] = 0x2e;
            a0[0x10] = 0x2e;
            g_8c136908 = 0x2e;
            a0[0x211] = 0x36;
            g_8c13690c = (char *)0x36;
            a0[0x212] = 0x36;
            g_8c136910 = 0x36;
            iVar9 = (**(code **)(*(int *)(*(int *)a2 + 8) + 0x18c))(*(int *)a2, pcVar4, pcVar11, 0x36);
            if (iVar9 == 0) {
                *(u8 *)(a0 + 0x26) = 1;
            }
            break;
        case 1:
            if (a0[0x10] != 0x18) {
                uVar3 = get_field_0_s8_05eea8(*(int *)(a2 + 0xc));
                *(char *)((int)a0 + 0x99) = (char)uVar3;
                a0[3] = 0;
                a0[1] = 0xd;
                a0[2] = 99;
                a0[0x210] = 0x18;
                a0[0x10] = 0x18;
                g_8c136908 = 0x18;
                a0[0x211] = 0x36;
                g_8c13690c = (char *)0x36;
                a0[0x212] = 0x36;
                pcVar4 = (code *)0x36;
                g_8c136910 = 0x36;
                game_calls_test_0c4e2c(game_calls_test_0c4e2c, 0x36, pcVar11, pcVar14);
            }
            break;
        case 2:
            uVar3 = get_field_0_s8_05eea8(*(int *)(a2 + 0xc));
            *(char *)((int)a0 + 0x99) = (char)uVar3;
            iVar9 = get_field_40_03598c(*(int *)(a2 + 0xc), pcVar4);
            if (iVar9 == 7) {
                pcVar4 = (code *)a0[0x21f];
                if (pcVar4 == (code *)0x1) {
                    *(u8 *)(a0 + 0x26) = 8;
                }
                if (a0[0x10] != 0x17) {
                    a0[1] = 0xd;
                    a0[2] = 99;
                    a0[3] = 0;
                    a0[0x10] = 0x17;
                    pcVar11 = (code *)0x17;
                    a0[0x210] = 0x17;
                    g_8c136908 = 0x17;
                    a0[0x211] = 0x36;
                    g_8c13690c = (char *)0x36;
                    a0[0x212] = 0x36;
                    pcVar4 = (code *)&g_8c13686c;
                    g_8c136910 = 0x36;
                }
            }
            break;
        case 3:
            break;
        case 4:
            set_field_0_u8_02cb7c(*(int *)(a2 + 4) + 0xa8, 0, pcVar11, pcVar14);
            if (((a0[1] == 7) || (a0[0x10] == 8)) || (pcVar13 = (code *)a0[0x10], pcVar13 == (code *)0x9)) {
                a0[1] = 0;
                a0[2] = 0x4b;
                a0[3] = 0;
                a0[0x10] = 0;
                pcVar13 = set_field_0_u8_02cb7c;
                set_field_0_u8_02cb7c(*(int *)(a2 + 4) + 0xa8, 0, 0x4b, set_field_0_u8_02cb7c);
            }
            pcVar11 = *(code **)(a2 + 0xc);
            pcVar4 = get_field_40_03598c;
            iVar9 = get_field_40_03598c(pcVar11, get_field_40_03598c);
            if ((iVar9 == 7) && (a0[0x10] != 0x17)) {
                if (a0[0x21f] == 1) {
                    *(u8 *)(a0 + 0x26) = 8;
                }
                counter_set_clamped(*(int *)(a2 + 4) + 0x90, 1, pcVar11);
                a0[1] = 0xd;
                a0[2] = 99;
                a0[3] = 0;
                a0[0x10] = 0x17;
                a0[0x210] = 0x17;
                g_8c136908 = 0x17;
                a0[0x211] = 0x36;
                g_8c13690c = (char *)0x36;
                a0[0x212] = 0x36;
                pcVar4 = (code *)0x36;
                g_8c136910 = 0x36;
            }
            break;
        default:
            pcVar4 = NULL;
            set_field_0_u8_02cb7c(*(int *)(a2 + 4) + 0xa8, 0, pcVar11, pcVar14);
            break;
        case 7:
            pcVar13 = set_field_0_u8_02cb7c;
            set_field_0_u8_02cb7c(*(int *)(a2 + 4) + 0xa8, 0, pcVar11, set_field_0_u8_02cb7c);
            pcVar11 = (code *)(a0 + 0x10);
            pcVar4 = *(code **)pcVar11;
            if ((pcVar4 != (code *)0x2) || (a0[1] != 1)) {
                a0[3] = 0;
                a0[1] = 1;
                a0[2] = 99;
                a0[0x10] = 2;
                if (a0[0x1b] != 0) {
                    (**(code **)(*(int *)(a0[0x1b] + 8) + 0x78))(a0[0x1b], pcVar4, pcVar11, pcVar13);
                    a0[0x1b] = 0;
                }
            }
            break;
        case 8:
            set_field_0_u8_02cb7c(*(int *)(a2 + 4) + 0xa8, 0, pcVar11, pcVar14);
            set_field_0_u8(*(int *)(a2 + 4), 0);
            set_field_0_u8(*(int *)(a2 + 4) + 0x18, 0);
            set_field_0_u8(*(int *)(a2 + 4) + 0x60, 0);
            pcVar4 = NULL;
            set_field_0_u8(*(int *)(a2 + 4) + 0x48, 0);
            if (a0[0x21f] == 1) {
                *(u8 *)(a0 + 0x26) = 9;
            }
            uVar3 = get_field_a0_035724(*(int *)(a2 + 0x18), pcVar4);
            if ((char)uVar3 == '\x03') {
                pcVar4 = (code *)0x9;
                *(u8 *)(a0 + 0x26) = 9;
            }
            if (*(char *)((int)a0 + 0x879) == '\x02') {
                if ((a0[0x10] == 0x30) || (a0[0x21f] == 1)) {
                    a0[1] = 0;
                    a0[2] = 0x4b;
                    a0[3] = 0;
                    a0[0x10] = 0;
                    a0[0x210] = 0;
                    g_8c136908 = 0;
                    a0[0x211] = 0x36;
                    g_8c13690c = (char *)0x36;
                    a0[0x212] = 0x36;
                    g_8c136910 = 0x36;
                } else {
                    a0[0x10] = 0x30;
                    a0[1] = 0xd;
                    a0[2] = 99;
                    a0[3] = 0;
                    a0[0x10] = 0x30;
                    a0[0x210] = 0x30;
                    pcVar11 = (code *)0x9c;
                    pcVar4 = (code *)0x30;
                    g_8c136908 = 0x30;
                    a0[0x211] = 0x36;
                    g_8c13690c = (char *)0x36;
                    a0[0x212] = 0x36;
                    g_8c136910 = 0x36;
                }
            } else {
                *(u8 *)(a0 + 0x26) = 9;
                if (*(char *)((int)a0 + 0x879) != '\x02') {
                    talk_set_status_format(a0 + 0x27, pcVar4, pcVar11, pcVar14);
                }
                counter_set_clamped(*(int *)(a2 + 4) + 0x90, 1, pcVar11);
                counter_set_clamped_4(*(int *)(a2 + 4) + 0x90, 1);
                set_field_0_u8(*(int *)(a2 + 4) + 0x60, 0);
                a0[0x10] = 0x2c;
                a0[1] = 0xd;
                a0[2] = 99;
                a0[3] = 0;
                a0[0x10] = 0x2c;
                a0[0x210] = 0x2c;
                g_8c136908 = 0x2c;
                a0[0x211] = 0x36;
                g_8c13690c = (char *)0x36;
                a0[0x212] = 0x36;
                pcVar4 = (code *)0xa4;
                g_8c136910 = 0x36;
            }
            break;
        case 9:
            set_field_0_u8_02cb7c(*(int *)(a2 + 4) + 0xa8, 0, pcVar11, pcVar14);
            set_field_0_u8(*(int *)(a2 + 4) + 0x78, 0);
            pcVar4 = NULL;
            pcVar11 = *(code **)(a2 + 4);
            set_field_4_02ce00(pcVar11 + 0x78, 0, pcVar11, 0);
            if (((a0[0x10] == 0x30) || (a0[0x10] == 0x17)) || (a0[0x10] == 0x2c)) {
                a0[1] = 0;
                a0[2] = 0x4b;
                a0[3] = 0;
                a0[0x10] = 0;
                a0[0x210] = 0;
                g_8c136908 = 0;
                a0[0x211] = 0x36;
                g_8c13690c = (char *)0x36;
                pcVar11 = (code *)0x848;
                pcVar4 = (code *)0x36;
                a0[0x212] = 0x36;
                g_8c136910 = 0x36;
            }
        }
    }
    talk_history_tick(a0 + 0x27, pcVar4, pcVar11, talk_history_tick);
    ar7_00 = 0x91;
    iVar12 = (int)*(char *)((int)a0 + 0x91);
    iVar9 = (int)*(char *)((int)a0 + 0x91);
    get_field_124_027930(*(int *)(a2 + 8), iVar9, iVar12, 0x91);
    get_field_40_05eea0(a0);
    FrogMan_ending_event(a0, a1, a2, ar7_00);
    pcVar4 = a2;
    game_uses_get_field_0_s8_065cb0(a0, a1, a2);
    iVar9 = get_field_124_027930(*(int *)(a2 + 8), a1, pcVar4, ar7_00);
    if (iVar9 != 2) {
        pcVar11 = a2;
        Class_12a078_uses_get_field_8_0665a0(a0, a2, pcVar4);
        set_field_130(*(int *)(a2 + 8));
        if (a0[1] == 2) {
            iVar9 = talk_pick_highest_active(*(int *)(a2 + 4), pcVar11, pcVar4);
            if (iVar9 == 0) {
                if (a0[0xe1] == -1) {
                    a0[0x10] = 0;
                }
            } else if (iVar9 == 1) {
                ar7_00 = a0[0xe1];
                if (ar7_00 == -1) {
                    a0[0x10] = 0;
                }
            } else if (iVar9 == 3) {
                if (a0[0xe1] == -1) {
                    ar7_00 = 0x40;
                    pcVar4 = NULL;
                    a0[0x10] = 0;
                }
            } else if (iVar9 == 4) {
                if (a0[0xe1] == -1) {
                    a0[0x10] = 0;
                }
                uVar3 = get_field_8_s8(*(int *)(a2 + 4) + 0x60, *(int *)(a2 + 4) + 0x60);
                in_stack_fffffe88 = CONCAT13((char)uVar3, (s32)in_stack_fffffe88);
                if ((char)uVar3 < '\x04') {
                    a0[0x10] = 0;
                }
            }
        }
        a1 = (code *)(a0 + 0x10);
        if (0x35 < *(int *)a1) {
            a0[0x10] = 0;
            a0[1] = 0;
            a0[0xe] = 2;
        }
        if ((*(char *)((int)a0 + 0x91) == '\x01') ||
            (iVar9 = get_field_124_027930(*(int *)(a2 + 8), a1, pcVar4, ar7_00), a0[0x10] != iVar9)) {
            pcVar4 = (code *)0x1;
            a1 = (code *)a0[0x10];
            timer_uses_reset_fields_2c_6c_031b08(*(int *)(a2 + 8), a1, 1, ar7_00);
        }
    }
    *(u8 *)((int)a0 + 0x83) = 4;
    uVar3 = get_field_0_s8(*(int *)(a2 + 4) + 0x78);
    cVar1 = (char)uVar3;
    uVar3 = CONCAT13((char)((u32)in_stack_fffffe88 >> 0x18), CONCAT12(cVar1, (short)in_stack_fffffe88));
    iVar9 = (int)cVar1;
    if (cVar1 == '\x01') {
        iVar9 = 1;
        set_field_c0(*(int *)(a2 + 0xc), 1);
    }
    iVar12 = talk_pick_highest_active(*(int *)(a2 + 4), iVar9, pcVar4);
    if (iVar12 != -1) {
        iVar9 = 0;
        set_field_d0(*(int *)(a2 + 0xc), 0);
    }
    uVar2 = get_field_a4_s16(*(int *)(a2 + 0x18), iVar9);
    uVar2 = uVar2 & 0xffff;
    if (a0[0x219] != uVar2) {
        uVar5 = get_field_a4_s16(*(int *)(a2 + 0x18), uVar2);
        a0[0x219] = uVar5 & 0xffff;
        uVar6 = get_field_0_s8(*(int *)(a2 + 4) + 0x78);
        uVar3 = CONCAT22((short)((u32)uVar3 >> 0x10), CONCAT11((char)uVar6, (char)uVar3));
        iVar9 = (int)(char)uVar6;
        if (iVar9 == 1) {
            iVar9 = 0;
            counter_set_clamped_4(*(int *)(a2 + 4) + 0x90, 0);
        }
        iVar12 = *(int *)(a2 + 0xc);
        pcVar4 = get_field_d0_05ee6c;
        uVar2 = get_field_d0_05ee6c(iVar12);
        if (uVar2 == 0) {
            uVar2 = 0;
            set_field_18_05ee64(*(int *)(a2 + 4) + 0xf8, 0);
        }
        iVar9 = percent_field_4_of_c(*(int *)(a2 + 4) + 0x90, uVar2, pcVar4, iVar12);
        if (iVar9 < 0x31) {
            inc_counter_be_max2(*(int *)(a2 + 0xc));
        } else {
            dec_counter_be(*(int *)(a2 + 0xc));
        }
    }
    if (((a0[0x10] != 0x23) || (a0[0x10] != 0x16)) || (a0[0x10] != 0x27)) {
        a0[0x23] = 0;
    }
    *(u8 *)((int)a0 + 0x82) = 0;
    *(u8 *)(a0 + 0x21) = 0;
    *(u8 *)((int)a0 + 0x85) = 0;
    uVar6 = 0x87;
    *(u8 *)((int)a0 + 0x87) = 0;
    uVar3 = get_field_bc_s8(*(int *)(a2 + 0xc), uVar2, pcVar4, 0x87);
    *(char *)((int)a0 + 0x9a) = (char)uVar3;
    iVar9 = get_field_124_027930(*(int *)(a2 + 8), uVar2, pcVar4, uVar6);
    if ((iVar9 == 2) && (a0[0x25] = 0x36, a0[0xe1] != -1)) {
        ar5_00 = a0 + 0x37;
        iVar9 = strcmp_05edfc("start", ar5_00);
        if (iVar9 == 0) {
            speech_stop(0x8c35468c, ar5_00, pcVar4, uVar6);
            set_field_770(a0 + 0x27, 3, pcVar4, uVar6);
            a0[2] = 0;
            a0[3] = 0;
            *(u8 *)(a0 + 0x20) = 1;
            a0[0xe1] = -1;
            a0[0x3f] = 0;
        }
    }
    uVar3 = Vec3_dtor(auStack_30, 0xffffffff, pcVar4, uVar6);
    return uVar3;
}

/*
 * strcmp_05edfc  0x8c05edfc
 * called by: FrogMan_ending_event, FrogMan_update_sleep_light
 */
u32 strcmp_05edfc(u8 *a0, u8 *a1) {
    u8 bVar1;

    do {
        bVar1 = *a0;
        if (bVar1 != *a1) {
            return (u32)bVar1 - (u32)*a1;
        }
        a1 = a1 + 1;
        a0 = a0 + 1;
    } while (bVar1 != 0);
    return 0;
}

/*
 * set_field_18_05ee64  0x8c05ee64
 * called by: FrogMan_update_sleep_light, Higyo_update_sleep_light
 */
u32 set_field_18_05ee64(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x18) = a1;
    return in_r0;
}

/*
 * get_field_d0_05ee6c  0x8c05ee6c
 * called by: FrogMan_update_sleep_light
 */
u32 get_field_d0_05ee6c(int a0) {
    return *(u32 *)(0xd0 + a0);
}

/*
 * set_field_d0  0x8c05ee78
 * called by: FrogMan_update_sleep_light
 */
int set_field_d0(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xd0;
    *(u32 *)(0xd0 + a0) = a1;
    return iVar1;
}

/*
 * set_field_c0  0x8c05ee84
 * called by: FrogMan_update_sleep_light
 */
int set_field_c0(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xc0;
    *(u32 *)(0xc0 + a0) = a1;
    return iVar1;
}

/*
 * set_field_130  0x8c05ee90
 * called by: Class_12a078_m2_05eee0, Class_12a7a8_m1_098d14, Class_12acc8_m1_09f470, Class_12b0c4_m1_0ab7f4,
 * Class_12b0c4_m2_0abc38, Class_12b2e8_m1_0b5ad0, Class_12b2e8_m2_0b6028, Class_12c3c4_m2_104264 (+2 more)
 */
u32 set_field_130(int a0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x130) = in_fr4;
    return 0x130;
}

/*
 * get_field_40_05eea0  0x8c05eea0
 * called by: Class_12a078_m2_05eee0, Class_12a7a8_m1_098d14, Class_12acc8_m1_09f470, Class_12b0c4_m1_0ab7f4,
 * Class_12b0c4_m2_0abc38, Class_12b2e8_m1_0b5ad0, Class_12c3c4_m2_104264, FrogMan_update_sleep_light
 */
u32 get_field_40_05eea0(int a0) {
    return *(u32 *)(a0 + 0x40);
}

/*
 * get_field_0_s8_05eea8  0x8c05eea8
 * called by: Class_12a078_m2_05eee0, Class_12c3c4_m2_104264, FrogMan_update_sleep_light, Higyo_update_sleep_light
 */
int get_field_0_s8_05eea8(char *a0) {
    return (int)*a0;
}

/*
 * get_field_4_s8  0x8c05eeb0
 * called by: FrogMan_update_sleep_light, Higyo_update_sleep_light
 */
int get_field_4_s8(int a0) {
    return (int)*(char *)(a0 + 4);
}

/*
 * get_field_770_05eeb8  0x8c05eeb8
 * called by: FrogMan_ending_event, FrogMan_update_sleep_light, Higyo_update_sleep_light, game_uses_Vec3_dtor_1089e4,
 * talk_state_switch_10862c, talk_uses_get_field_8_s8_0652f4
 */
u32 get_field_770_05eeb8(int a0) {
    return *(u32 *)(0x770 + a0);
}

/*
 * get_field_bc_s8  0x8c05eec4
 * called by: FrogMan_jump_events, FrogMan_react_tap, FrogMan_update_sleep_light, Higyo_attention_events,
 * Higyo_update_sleep_light
 */
int get_field_bc_s8(int a0, u32 unused_a1, u32 a2, u32 a3) {
    return (int)*(char *)(0xbc + a0);
}

/*
 * get_field_24_05eed0  0x8c05eed0
 * called by: FrogMan_update_sleep_light, Higyo_update_sleep_light, talk_state_switch_10862c,
 * talk_uses_get_field_8_s8_0652f4
 */
u32 get_field_24_05eed0(int a0, u32 a1) {
    return *(u32 *)(a0 + 0x24);
}

/*
 * get_field_4_05eed8  0x8c05eed8
 * called by: Class_12a078_m2_05eee0, Class_12a7a8_m1_098d14, Class_12a7a8_vec_099b0c, Class_12acc8_m1_09f470,
 * Class_12acc8_uses_rand_0a0278, Class_12b0c4_m1_0ab7f4, Class_12b0c4_m2_0abc38, Class_12b0c4_vec_0ac1f0 (+8 more)
 */
u32 get_field_4_05eed8(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * Class_12a078_m2_05eee0  0x8c05eee0
 */
u32 Class_12a078_m2_05eee0(int *a0, u32 a1, int *a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    u32 in_stack_ffffffa0;

    uVar2 = a1;
    piVar3 = a2;
    uVar1 = get_field_a4_s16(a2[6], a1);
    if ((short)uVar1 == 3) {
        uVar2 = talk_uses_table13019c_find_row_02bef8(a2[1], uVar2, piVar3);
        in_stack_ffffffa0 = CONCAT22((short)uVar2, (short)in_stack_ffffffa0);
        piVar3 = (int *)(int)(short)uVar2;
        (**(code **)(*a0 + 0x18))(a0, a2[6], piVar3, a3);
    }
    iVar4 = get_field_40_03598c(a2[3], get_field_40_03598c);
    if (iVar4 == 2) {
        set_field_40_05f498(a2[3], 0);
    }
    g_8c136908 = a0[0x210];
    g_8c13690c = a0[0x211];
    g_8c136910 = a0[0x212];
    uVar2 = a1;
    piVar3 = a2;
    Class_12a078_uses_set_field_38_05ff40(a0, a1, a2, a3);
    iVar4 = (**(code **)(*(int *)(*a2 + 8) + 0xb8))(*a2, uVar2, piVar3, a3);
    if ((iVar4 == 1) && (a0[1] != 1)) {
        iVar4 = get_field_6c_02f46c(*a2);
        if ((iVar4 == 0) && (iVar4 = get_field_70_05f490(*a2), iVar4 == 0)) {
            piVar3 = (int *)0x1b;
            recent5_push_unique(a2[6], 0x1b, 0x1b);
            a0[0x10] = 2;
            a0[0xe] = 2;
            a0[1] = 1;
            a0[3] = 0;
            a0[2] = 99;
            list5_push(a0, 199);
        } else {
            a0[0xe] = 2;
            a0[1] = 0xb;
            a0[2] = 99;
            a0[0x10] = 0xe;
            uVar2 = 0x577;
            list5_push(a0, 0x577);
            if (a0[0x1b] != 0) {
                (**(code **)(*(int *)(a0[0x1b] + 8) + 0x78))(a0[0x1b], uVar2, piVar3, a3);
                a0[0x1b] = 0;
            }
        }
        if (((char)a0[0x21e] == '\x01') && (a0[1] == 0)) {
            *(u8 *)(a0 + 0x21e) = 0;
        }
    }
    Class_129c70_uses_get_field_4_02f20c(a0, a2, piVar3, a3);
    uVar2 = get_field_4_05eed8(a0);
    piVar3 = a2;
    FrogMan_choose_status_event(a0, a1, a2, uVar2);
    if (((a0[1] != 1) && (iVar4 = (int)(char)a0[0x26], iVar4 < 10)) && (-1 < iVar4)) {
        switch (iVar4) {
        case 0:
            a0[2] = 0x5f;
            a0[3] = 0;
            a0[1] = 0xd;
            a0[0x210] = 0x2e;
            a0[0x10] = 0x2e;
            g_8c136908 = 0x2e;
            break;
        case 1:
            a0[3] = 0;
            a0[1] = 0xd;
            a0[2] = 99;
            a0[0x210] = 0x18;
            a0[0x10] = 0x18;
            g_8c136908 = 0x18;
            break;
        case 2:
            uVar1 = get_field_0_s8_05eea8(a2[3]);
            *(char *)((int)a0 + 0x99) = (char)uVar1;
            break;
        case 4:
            a1 = 0;
            set_field_0_u8_02cb7c(a2[1] + 0xa8, 0, piVar3, uVar2);
            break;
        case 7:
            a1 = 0;
            set_field_0_u8_02cb7c(a2[1] + 0xa8, 0, piVar3, uVar2);
            if ((a0[0x10] != 2) || (a0[1] != 1)) {
                a0[3] = 0;
                a0[1] = 1;
                a0[2] = 99;
                a0[0x10] = 2;
                if (a0[0x1b] != 0) {
                    (**(code **)(*(int *)(a0[0x1b] + 8) + 0x78))(a0[0x1b], a1, piVar3, uVar2);
                    a0[0x1b] = 0;
                }
            }
            break;
        case 8:
            a1 = 0;
            set_field_0_u8_02cb7c(a2[1] + 0xa8, 0, piVar3, uVar2);
            if (a0[0x21f] == 1) {
                *(u8 *)(a0 + 0x26) = 9;
            }
            if (a0[0x10] != 0x2c) {
                talk_set_status_format(a0 + 0x27, a1, piVar3, uVar2);
                counter_set_clamped(a2[1] + 0x90, 1, piVar3);
                counter_set_clamped_4(a2[1] + 0x90, 1);
                a1 = 0;
                set_field_0_u8(a2[1] + 0x60, 0);
                a0[0x10] = 0x2c;
            }
            break;
        case 9:
            if (a0[0x10] == 0x2c) {
                a0[1] = 0;
                a0[2] = 0x4b;
                a0[3] = 0;
                a0[0x10] = 0;
                a0[0x210] = 0;
                g_8c136908 = 0;
                a0[0x211] = 0x36;
                g_8c13690c = 0x36;
                a0[0x212] = 0x36;
                g_8c136910 = 0x36;
            }
        }
    }
    if (a0[0xe1] != -1) {
        iVar4 = speech_is_playing(0x8c35468c, a1);
        if (iVar4 == 0) {
            a0[0x25] = 0;
            set_field_770(a0 + 0x27, 3, piVar3, uVar2);
            a0[1] = 0;
            a0[0x10] = 0;
            a0[2] = 0x19;
            *(u8 *)((int)a0 + 0x91) = 1;
            a0[3] = 0;
            *(u8 *)(a0 + 0x20) = 1;
            a0[0xe1] = -1;
        } else {
            speech_stop(0x8c35468c, a1, piVar3, uVar2);
        }
        a0[0x25] = a0[0x55];
    }
    if (a0[0x22] == 1) {
        a0[0x22] = 0;
    }
    Class_12a078_uses_get_field_8_0665a0(a0, a2, piVar3);
    set_field_130(a2[2]);
    iVar4 = get_field_4_05eed8(a0);
    iVar4 = *(int *)(&g_8c13686c + a0[3] * 4 + iVar4 * 0xc);
    set_field_40(a0, iVar4);
    if (*(char *)((int)a0 + 0x91) != '\x01') {
        iVar5 = get_field_124_027930(a2[2], iVar4, piVar3, uVar2);
        iVar4 = get_field_40_05eea0(a0);
        if (iVar5 == iVar4) {
            return iVar5;
        }
    }
    uVar1 = get_field_40_05eea0(a0);
    uVar2 = timer_uses_reset_fields_2c_6c_031b08(a2[2], uVar1, 1, uVar2);
    return uVar2;
}

/*
 * set_field_40  0x8c05f488
 * called by: Class_12a078_m2_05eee0, Higyo_update_sleep_light
 */
u32 set_field_40(int a0, u32 a1) {
    *(u32 *)(a0 + 0x40) = a1;
    return 0x40;
}

/*
 * get_field_70_05f490  0x8c05f490
 * called by: Class_12a078_m2_05eee0, Class_12acc8_m1_09f470, Class_12b0c4_m1_0ab7f4, Class_12b0c4_m2_0abc38,
 * Class_12bec0_m2_0f5ca8, Class_12bec0_m3_0f5d1c, Class_12c3c4_m2_104264, FrogMan_react_feed_full (+1 more)
 */
u32 get_field_70_05f490(int a0) {
    return *(u32 *)(a0 + 0x70);
}

/*
 * set_field_40_05f498  0x8c05f498
 * called by: Class_12a078_m2_05eee0, FrogMan_ending_event, FrogMan_gratification_events, FrogMan_jump_events
 */
u32 set_field_40_05f498(int a0, u32 a1) {
    *(u32 *)(a0 + 0x40) = a1;
    return 0x40;
}

/*
 * react_catch_object  0x8c05f4a0
 * drops what +0x6c holds, moves to the caught object, waits for speech to end, then queues the REACTION_CATCH line
 * strings: "REACTION_CATCH"; "REACTION_CATCH"; "REACTION_CATCH"
 */
int react_catch_object(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    char *ar7_00;
    u8 auStack_18[20];

    if (*(int *)(a0 + 0x6c) != 0) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, a2, a3);
        *(u32 *)(a0 + 0x6c) = 0;
    }
    Vec3_ctor_copy(auStack_18, a1 + 0x10, a2, a3);
    Vec3_assign_wrap_05f640(a0, auStack_18, a2, a3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    *(u32 *)(a0 + 0x94) = 0x15;
    if (*(int *)(a0 + 900) != -1) {
        *(u32 *)(a0 + 0x94) = *(u32 *)(a0 + 0x154);
        iVar1 = speech_is_playing(0x8c35468c, uVar2);
        if (iVar1 == 0) {
            *(u32 *)(a0 + 0x94) = 0;
            set_field_770(a0 + 0x9c, 3, a2, a3);
            *(u32 *)(a0 + 4) = 2;
            *(u32 *)(a0 + 0x40) = 0x10;
            *(u32 *)(a0 + 8) = 0x19;
            *(u8 *)(a0 + 0x91) = 1;
            *(u32 *)(a0 + 0xc) = 0;
            *(u8 *)(a0 + 0x80) = 1;
            *(u32 *)(a0 + 900) = 0xffffffff;
        }
    }
    iVar1 = *(int *)(a0 + 900);
    if (iVar1 == -1) {
        set_field_770(a0 + 0x9c, 0, a2, a3);
        ar7_00 = "REACTION_CATCH";
        uVar2 = 0;
        talk_queue_mode2(a0 + 0x9c, 0x25, 0, "REACTION_CATCH", &g_8c1369bf);
        strcpy(a0 + 0xbc, "REACTION_CATCH");
        strcpy(a0 + 0xdc, &g_8c1369bf);
        *(u32 *)(a0 + 0xfc) = 0;
        iVar1 = a0 + 0x9c;
        uVar2 = speech_request(0x8c35468c, *(u32 *)(a0 + 0x388), iVar1, ar7_00);
        *(u32 *)(a0 + 900) = uVar2;
        *(u32 *)(a0 + 0x14c) = 0;
        iVar1 = set_field_770(a0 + 0x9c, 2, iVar1, ar7_00);
    }
    return iVar1;
}

/*
 * Vec3_assign_wrap_05f640  0x8c05f640
 * called by: Class_12acc8_m1_09f470, FrogMan_choose_status_event, FrogMan_ending_event, FrogMan_gratification_events,
 * FrogMan_jump_events, FrogMan_react_tap, FrogMan_react_touch, Higyo_attention_events (+7 more)
 */
u32 Vec3_assign_wrap_05f640(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = Vec3_assign(a0 + 0x70, a1, a2, a3);
    return uVar1;
}

/*
 * FrogMan_choose_status_event  0x8c05f660
 * FrogMan line: picks a request or status (cold, hot, humidity, hungry, fight, binta, coupling, sniffing, sick)
 * called by: Class_12a078_m2_05eee0, FrogMan_update_sleep_light
 * strings: "STATUS_SNORE"; "STATUS_UNCONSIDERED"; "STATUS_COUPLING"; "REQUEST_HOT" ...
 */
u32 FrogMan_choose_status_event(int a0, u32 a1, int *a2, int a3) {
    u32 uVar1;
    u8 *ar5_00;
    int a5;
    u32 uVar2;
    int *piVar3;
    int iVar4;
    char cVar5;
    u8 auStack_24[20];

    cVar5 = '\0';
    piVar3 = a2;
    if (*(int *)(a0 + 0x38) == 2) {
        *(u32 *)(a0 + 0xc) = 0;
        iVar4 = 0x40;
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13686c + *(int *)(a0 + 0xc) * 4 + a3 * 0xc);
        game_update_fields_060044(a0, a1, a2, 0x40);
        ar5_00 = (u8 *)0x1;
        set_field_38_02f404(a0, 1);
        a3 = iVar4;
    } else {
        ar5_00 = &g_8c13686c + a3 * 0xc;
        *(u32 *)(a0 + 0x40) = *(u32 *)(ar5_00 + *(int *)(a0 + 0xc) * 4);
    }
    iVar4 = *(int *)(a0 + 0x40);
    if (iVar4 < 0x28) {
        if (-1 < iVar4) {
            switch (iVar4) {
            case 0:
                set_field_38_02f404(a0, 3);
                break;
            case 1:
                set_field_38_02f404(a0, 3);
                iVar4 = Class_129c70_uses_get_field_6c_02f414(a0, Class_129c70_uses_get_field_6c_02f414, piVar3, a3);
                if (iVar4 == 1) {
                    talk_vec_066628(a0, a1, piVar3);
                } else {
                    *(u32 *)(a0 + 0x6c) = 0;
                    *(u32 *)(a0 + 0x38) = 2;
                }
                game_float_calc_02fdd8(a0, a1);
                break;
            case 2:
                a5 = *(int *)(*a2 + 8);
                iVar4 = (**(code **)(a5 + 0xb4))(*a2, a5, piVar3, a3);
                if (iVar4 == 1) {
                    iVar4 = *a2;
                    mask_74_fffffffe(iVar4);
                    game_calls_test_0c4e2c(iVar4, a5, piVar3, a3);
                }
                break;
            case 3:
                uVar1 = get_field_a4_s16(a2[6], ar5_00);
                iVar4 = libgcc_divide_helper_01031c(uVar1 & 0xffff, 0x25, libgcc_divide_helper_01031c);
                if (iVar4 == 0xe) {
                    talk_start_line(a0 + 0x9c, 0x11, 0, "STATUS_SNORE");
                    set_field_38_02f404(a0, 3);
                }
                break;
            case 4:
                set_field_38_02f404(a0, 3);
                break;
            case 6:
                iVar4 = Class_129c70_uses_get_field_6c_02f414(a0, ar5_00, piVar3, a3);
                if (iVar4 == 1) {
                    if (*(int *)(a0 + 0x88) == 1) {
                        uVar2 = get_field_6c_02f46c(*(u32 *)(a0 + 0x6c));
                        uVar2 = take_from_field_6c(*(u32 *)(a0 + 0x6c), uVar2, piVar3, a3);
                        game_calls_update_fields_05fec4(a2[1]);
                        if (*(int *)(a0 + 0x6c) != 0) {
                            (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), uVar2, piVar3,
                                                                                    a3);
                            a3 = 0;
                            *(u32 *)(a0 + 0x6c) = 0;
                        }
                    }
                    talk_vec_066628(a0, a1, talk_vec_066628);
                } else {
                    *(u32 *)(a0 + 0x38) = 2;
                }
                break;
            case 9:
                uVar1 = get_field_a4_s16(a2[6], ar5_00);
                uVar2 = 10;
                iVar4 = libgcc_divide_helper_01031c(uVar1 & 0xffff, 10, piVar3);
                if (((iVar4 == 5) && (*(char *)(a0 + 0x870) == '\0')) &&
                    (iVar4 = get_field_140_025f70(a2[1], uVar2), iVar4 == 0)) {
                    format_int_at_10(0x8c35468c, (int)*(char *)(a0 + 0x870), piVar3, a3);
                    iVar4 = game_target_in_view_box(a0, a2, piVar3, a3);
                    if (iVar4 == 0) {
                        talk_start_line(a0 + 0x9c, 10, 0, "STATUS_UNCONSIDERED");
                    } else {
                        talk_start_line(a0 + 0x9c, 10, 0, "STATUS_COUPLING");
                    }
                    *(u8 *)(a0 + 0x870) = 1;
                }
                break;
            case 0xc:
            case 0x12:
                Vec3_ctor_copy(auStack_24, a2[5] + 0x10, piVar3, a3);
                Vec3_assign_wrap_05f640(a0, auStack_24, piVar3, a3);
                Vec3_dtor(auStack_24, 0xffffffff, piVar3, a3);
                if (cVar5 == '\0') {
                    *(u32 *)(a0 + 0x78) = 0x44af0000;
                } else {
                    *(u64 *)(a0 + 0x78) = 0x64e3e50344af0000;
                }
                break;
            case 0xf:
                iVar4 = Class_129c70_uses_get_field_6c_02f414(a0, ar5_00, piVar3, a3);
                if (iVar4 == 1) {
                    if (*(int *)(a0 + 0x88) == 1) {
                        take_from_field_6c(*(u32 *)(a0 + 0x6c), 1, piVar3, a3);
                        *(u32 *)(a0 + 0x88) = 0;
                    }
                    talk_vec_066628(a0, a1, piVar3);
                    game_float_calc_02fdd8(a0, a1);
                } else {
                    *(u32 *)(a0 + 0x38) = 2;
                    set_field_38_u8(a2[3], 0);
                }
                break;
            case 0x10:
                if (((*(int *)(a0 + 4) != 0xd) &&
                     (iVar4 = talk_pick_highest_active(a2[1], ar5_00, piVar3), iVar4 < 6)) &&
                    (-1 < iVar4)) {
                    switch (iVar4) {
                    case 0:
                        uVar2 = get_field_8_s8(a2[1], ar5_00);
                        talk_queue_mode1(a0 + 0x9c, 4, (int)(char)uVar2, "REQUEST_HOT", &g_8c1369bf);
                        break;
                    case 1:
                        uVar2 = get_field_8_s8(a2[1] + 0x18, ar5_00);
                        talk_queue_mode1(a0 + 0x9c, 5, (int)(char)uVar2, "REQUEST_COLD", &g_8c1369bf);
                        break;
                    case 3:
                        uVar2 = get_field_8_s8(a2[1] + 0x48, ar5_00);
                        talk_queue_mode1(a0 + 0x9c, 0x10, (int)(char)uVar2, "REQUEST_HUMIDITY", &g_8c1369bf);
                        break;
                    case 4:
                        uVar2 = get_field_8_s8(a2[1] + 0x60, ar5_00);
                        talk_queue_mode1(a0 + 0x9c, 0xd, (int)(char)uVar2, "REQUEST_HUNGRY", &g_8c1369bf);
                        break;
                    case 5:
                        uVar2 = get_field_8_s8(a2[1] + 0x78, ar5_00);
                        talk_queue_mode1(a0 + 0x9c, 0x12, (int)(char)uVar2, "STATUS_SICK", &g_8c1369bf);
                    }
                }
                break;
            case 0x16:
                if (*(int *)(a0 + 0x8c) == 1) {
                    talk_start_line(a0 + 0x9c, 0x2a, 0, "REACTION_GURUGURU");
                    *(u32 *)(a0 + 0x8c) = 0;
                }
                break;
            case 0x22:
                if (*(int *)(a0 + 0x8c) == 1) {
                    talk_start_line(a0 + 0x9c, 0x2c, 0, "STATUS_AFTER_BINTA");
                    *(u32 *)(a0 + 0x8c) = 0;
                }
                break;
            case 0x23:
                if (*(int *)(a0 + 0x8c) == 1) {
                    talk_start_line(a0 + 0x9c, 0x2c, 0, "STATUS_BEFORE_BINTA");
                    *(u32 *)(a0 + 0x8c) = 0;
                }
                break;
            case 0x26:
                if (*(int *)(a0 + 0x8c) == 1) {
                    talk_start_line(a0 + 0x9c, 0x2c, 0, "STATUS_AFTER_FIGHT");
                    *(u32 *)(a0 + 0x8c) = 0;
                }
                break;
            case 0x27:
                if (*(int *)(a0 + 0x8c) == 1) {
                    talk_start_line(a0 + 0x9c, 0x2c, 0, "STATUS_BEFORE_FIGHT");
                    *(u32 *)(a0 + 0x8c) = 0;
                }
            }
        }
    } else if ((iVar4 == 0x34) && (*(int *)(a0 + 0x8c) == 1)) {
        talk_start_line(a0 + 0x9c, 0x2c, 0, "STATUS_SNIFFING");
        *(u32 *)(a0 + 0x8c) = 0;
    }
    return 1;
}

/*
 * set_field_38_u8  0x8c05febc
 * called by: Class_12c3c4_m2_104264, FrogMan_choose_status_event, FrogMan_gratification_events,
 * Higyo_choose_status_event, Higyo_gratification_events
 */
u32 set_field_38_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x38) = (u8)a1;
    return 0x38;
}

/*
 * game_calls_update_fields_05fec4  0x8c05fec4
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: update_fields
 * called by: FrogMan_choose_status_event, FrogMan_gratification_events, Higyo_gratification_events
 */
u32 game_calls_update_fields_05fec4(int a0) {
    u32 uVar1;

    uVar1 = game_update_fields_02d930(a0 + 0x90);
    return uVar1;
}

/*
 * take_from_field_6c  0x8c05feec
 * takes up to a1 from the amount at +0x6c and flags +0x74 bit 1; returns what was taken
 * called by: Class_12b0c4_uses_set_field_38_0abe84, Class_12b2e8_state_switch_0b6440,
 * Class_12b2e8_uses_set_field_38_0b61bc, FrogMan_choose_status_event, FrogMan_gratification_events,
 * Higyo_choose_status_event, Higyo_gratification_events
 */
int take_from_field_6c(int a0, int a1, u32 unused_a2, u32 a3) {
    int iStack_8;

    iStack_8 = a1;
    if (*(int *)(a0 + 0x6c) <= a1) {
        iStack_8 = *(int *)(a0 + 0x6c);
    }
    *(int *)(a0 + 0x6c) = *(int *)(a0 + 0x6c) - iStack_8;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 2;
    return iStack_8;
}

/*
 * Class_12a078_uses_set_field_38_05ff40  0x8c05ff40
 * area name: only called from Class_12a078 methods; behaviour name: its main named callee is set_field_38_02f404
 * called by: Class_12a078_m2_05eee0, FrogMan_update_sleep_light
 */
int Class_12a078_uses_set_field_38_05ff40(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar6_00;
    char cVar3;

    cVar3 = '\0';
    if (*(int *)(a0 + 0x3c) == 0) {
        uVar2 = a1;
        ar6_00 = a2;
        FrogMan_gratification_events(a0, a1, a2, a3);
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + 1;
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13686c + *(int *)(a0 + 0xc) * 4 + *(int *)(a0 + 4) * 0xc);
        if ((*(int *)(a0 + 0x40) == 0x36) || (*(int *)(a0 + 0xc) == 3)) {
            *(u32 *)(a0 + 0x40) = 0;
            *(u32 *)(a0 + 8) = 0;
            if (*(int *)(a0 + 4) == 1) {
                *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + -1;
                a1 = uVar2;
                a2 = ar6_00;
            } else {
                if (cVar3 == '\0') {
                    *(u32 *)(a0 + 0x70) = 0xc7c35000;
                } else {
                    *(u64 *)(a0 + 0x70) = 0x8c02f404c7c35000;
                }
                *(u32 *)(a0 + 0xc) = 0;
                a1 = 0;
                set_field_38_02f404(a0, 0);
                a2 = ar6_00;
            }
        } else {
            game_update_fields_060044(a0, a1, a2, a3);
        }
    }
    if (*(int *)(a0 + 0x3c) == 2) {
        a1 = 2;
        set_field_38_02f404(a0, 2);
    }
    iVar1 = *(int *)(a0 + 0x38);
    if ((iVar1 == 2) && (iVar1 = 0, *(int *)(a0 + 0x6c) != 0)) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, a2, a3);
        iVar1 = 0x6c;
        *(u32 *)(a0 + 0x6c) = 0;
    }
    return iVar1;
}
