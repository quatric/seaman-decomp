/* Seaman (USA) region 0x8c0b0000-0x8c0c0000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * Class_12b2ac_vec_0b0784  0x8c0b0784
 * area name: only called from Class_12b2ac methods; behaviour name: mostly calls vec functions
 * called by: Class_12b2ac_m1_0aff3c
 */
int Class_12b2ac_vec_0b0784(int a0, u32 a1, int *a2, int *a3) {
    int iVar1;
    u32 uVar2;
    int *piVar3;
    int *piVar4;
    int iVar5;
    float fVar6;
    double dVar7;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    int *in_stack_00000000;
    int *in_stack_00000004;
    u8 auStack_38[16];
    int aiStack_28[5];

    cVar9 = '\0';
    cVar8 = '\0';
    iVar5 = 1;
    piVar3 = a2;
    piVar4 = a3;
    Vec3_ctor_copy_wrap_03f480(a1, a1, a2, a3, auStack_38);
    Vec3_ctor_copy(aiStack_28, auStack_38, piVar3, piVar4);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, piVar3, piVar4);
    iVar1 = *(int *)(a0 + 0x124);
    if ((iVar1 < 9) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            if (*(int *)(a0 + 0x348) == 1) {
                piVar3 = aiStack_28;
                iVar5 = game_vec_0b3604(a0, in_stack_00000000, piVar3, a2);
                piVar4 = a2;
            } else if (*(int *)(a0 + 0x324) == 0) {
                iVar5 = game_vec_0b0ad4(a0, uVar2, piVar3, piVar4);
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x3f7d70a4, *(u32 *)(a0 + 0x28));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x28);
                    dVar7 = -8.36519102553774e-251;
                }
                if (cVar8 == '\0') {
                    fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar7 * dVar7, 0);
                }
                if (cVar9 == '\0') {
                    *(float *)(a0 + 0x28) = fVar6;
                } else {
                    *(u64 *)(a0 + 0x28) = in_xd0;
                }
            } else {
                piVar3 = aiStack_28;
                iVar5 = game_vec_0b3604(a0, in_stack_00000000, piVar3, a2);
                piVar4 = a2;
            }
            if (iVar5 == 0) {
                *(u32 *)(a0 + 0x348) = 0;
                piVar3 = (int *)0x64;
                iVar1 = rand_range(a0, 0, 100);
                if (iVar1 < 0x50) {
                    *(u32 *)(a0 + 0x324) = 0;
                } else {
                    *(u32 *)(a0 + 0x324) = 1;
                }
            }
            break;
        case 1:
            (**(code **)(*a3 + 0x128))(a3, in_stack_00000000, piVar3, piVar4);
            piVar3 = aiStack_28;
            iVar5 = game_vec_0b3184(a0, in_stack_00000000, piVar3, a2);
            piVar4 = a2;
            break;
        case 2:
            *(u32 *)(a0 + 0x214) = 0;
            iVar5 = game_vec_0b5098(a0, in_stack_00000000, a1, piVar4);
            timer_vec_031c74(a0, aiStack_28, in_stack_00000000, piVar4);
            piVar3 = in_stack_00000000;
            break;
        case 3:
            if (0 < *(int *)(a0 + 0x314)) {
                *(u32 *)(a0 + 0x214) = 0;
            }
            iVar5 = game_vec_0b1ac0(a0, in_stack_00000000, in_stack_00000004, a2);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(0x3f7d70a4, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar7 = -8.36519102553774e-251;
            }
            if (cVar8 == '\0') {
                fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 * dVar7, 0);
            }
            piVar3 = in_stack_00000004;
            piVar4 = a2;
            if (cVar9 == '\0') {
                *(float *)(a0 + 0x28) = fVar6;
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
            break;
        case 4:
            iVar5 = game_uses_Vec3_dtor_0b4d14(a0, a1, in_stack_00000000, in_stack_00000004);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(0x3f7d70a4, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar7 = -8.36519102553774e-251;
            }
            if (cVar8 == '\0') {
                fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 * dVar7, 0);
            }
            piVar4 = in_stack_00000004;
            if (cVar9 == '\0') {
                *(float *)(a0 + 0x28) = fVar6;
                piVar3 = in_stack_00000000;
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
                piVar3 = in_stack_00000000;
            }
            break;
        case 5:
            *(u32 *)(a0 + 0x214) = 0;
            iVar5 = game_uses_CAnimBody_PlayToEnd_0b4c7c(a0, uVar2, piVar3, piVar4);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(0x3f7d70a4, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x28);
                dVar7 = -8.36519102553774e-251;
            }
            if (cVar8 == '\0') {
                fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 * dVar7, 0);
            }
            if (cVar9 == '\0') {
                *(float *)(a0 + 0x28) = fVar6;
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
            break;
        case 6:
            *(u32 *)(a0 + 0x214) = 0;
            iVar5 = obj_play_anim_17_then_idle(a0, uVar2, piVar3, piVar4);
            break;
        case 7:
            *(u32 *)(a0 + 0x214) = 0;
            if (*(int *)(a0 + 0x314) < 2) {
                iVar5 = game_vec_0b0eec(a0, in_stack_00000000, in_stack_00000004, a3);
                piVar3 = in_stack_00000004;
                piVar4 = a3;
            } else {
                iVar5 = 0;
            }
            break;
        case 8:
            *(u32 *)(a0 + 0x214) = 0;
            piVar4 = NULL;
            piVar3 = (int *)0xffffffff;
            uVar2 = 5;
            CAnimBody_SetAnimation(a0 + 0xb0, 5, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar2, piVar3, piVar4);
        }
    }
    Vec3_dtor(aiStack_28, 0xffffffff, piVar3, piVar4);
    return iVar5;
}

/*
 * game_vec_0b0ad4  0x8c0b0ad4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b2ac_vec_0b0784
 */
u32 game_vec_0b0ad4(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    float in_fr1;
    float fVar3;
    double dVar4;
    u64 in_xd0;
    char cVar5;
    char cVar6;
    u64 uStack_90;
    float fStack_58;
    float fStack_54;
    u32 auStack_50[4];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u8 auStack_20[20];

    cVar6 = '\0';
    cVar5 = '\0';
    uVar2 = 1;
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        a2 = 100;
        iVar1 = rand_range(a0, 0, 100);
        if (iVar1 < 0x1e) {
            *(u32 *)(a0 + 0x330) = 0;
        } else if (iVar1 < 0x3c) {
            *(u32 *)(a0 + 0x330) = 1;
        } else if (iVar1 < 0x46) {
            *(u32 *)(a0 + 0x330) = 2;
        } else if (iVar1 < 0x5a) {
            *(u32 *)(a0 + 0x330) = 4;
        } else {
            *(u32 *)(a0 + 0x330) = 3;
        }
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    LAB_8c0b0b7c:
        uVar2 = *(u32 *)(a0 + 0x330);
        iVar1 = CAnimBody_PlayToEnd(a0 + 0xb0, uVar2, a2, a3);
        if (iVar1 != 1) {
            if (iVar1 != 2) {
                return 1;
            }
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, a2, a3);
        }
        if (cVar6 == '\0') {
            *(u32 *)(a0 + 0xa0) = 0x3d4ccccd;
        } else {
            in_fr1 = 0.05;
            *(u64 *)(a0 + 0xa0) = 0x8c03c3143d4ccccd;
        }
        timer_start_94(a0, uVar2, a2);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        if (cVar6 == '\0') {
            *(u32 *)(a0 + 0x2d0) = 0x3f800000;
            *(u32 *)(a0 + 0x2cc) = 0x45bb8000;
        } else {
            *(u64 *)(a0 + 0x2d0) = CONCAT44(0x3f800000, in_fr1);
            *(u64 *)(a0 + 0x2cc) = 0x8045bb8000;
        }
        Vec3_make(a0 + 0x80, uVar2, a2, a3, auStack_20);
        uVar2 = Vec3_length(auStack_20, uVar2, a2, a3);
        Vec3_assign(a0 + 700, uVar2, a2, a3);
        Vec3_dtor(auStack_20, 0xffffffff, a2, a3);
        return 1;
    }
    if (iVar1 == 1)
        goto LAB_8c0b0b7c;
    if (iVar1 != 2) {
        return 1;
    }
    iVar1 = get_field_1c_026dd8(a0 + 0xb0, a1, a2);
    if ((iVar1 < 9) && (2 < iVar1)) {
        switch (iVar1) {
        default:
            iVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, a1, a2, a3);
            if (iVar1 == 7) {
                uVar2 = 0;
                *(u32 *)(a0 + 300) = 0;
            }
            goto LAB_8c0b0dd2;
        case 5:
            break;
        }
    }
    iVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, a1, a2, a3);
    if (iVar1 == 7) {
        uVar2 = 0;
        *(u32 *)(a0 + 300) = 0;
    }
LAB_8c0b0dd2:
    iVar1 = Vec3_not_equal(a0 + 0x80, a0 + 700);
    if (iVar1 == 0) {
        return uVar2;
    }
    if (cVar6 == '\0') {
        in_fr1 = *(float *)(a0 + 0x2d0);
    } else {
        in_xd0 = *(u64 *)(a0 + 0x2d0);
    }
    if (cVar5 == '\0') {
        in_fr1 = in_fr1 + 1.0;
    } else {
        in_fr1 = SUB84((double)CONCAT44(0x3f800000, in_fr1) + (double)CONCAT44(0x3f800000, in_fr1), 0);
    }
    uStack_90 = in_xd0;
    if (cVar6 == '\0') {
        uStack_90 = CONCAT44(a0, in_fr1);
    }
    if (cVar6 == '\0') {
        *(u32 *)(uStack_90._4_4_ + 0x2d0) = (u32)uStack_90;
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x2cc), (u32)uStack_90);
    } else {
        *(u64 *)(uStack_90._4_4_ + 0x2d0) = uStack_90;
        dVar4 = *(double *)(a0 + 0x2cc);
        in_xd0 = uStack_90;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
    }
    fStack_54 = fVar3;
    if (cVar6 != '\0') {
        fStack_54 = (float)in_xd0;
        auStack_50[0] = (u32)((u64)in_xd0 >> 0x20);
    }
    if (cVar5 == '\0') {
        dVar4 = (double)CONCAT44(1.0 - fVar3, fVar3);
    } else {
        dVar4 = (double)CONCAT44(0x3f800000, fVar3) - (double)CONCAT44(0x3f800000, fVar3);
    }
    fVar3 = (float)((u64)dVar4 >> 0x20);
    fStack_58 = fVar3;
    if (cVar6 != '\0') {
        fStack_58 = SUB84(dVar4, 0);
        fStack_54 = fVar3;
    }
    Vec3_scale(a0 + 0x80, &fStack_58, a2, a3, auStack_30);
    Vec3_scale(a0 + 700, &fStack_54, a2, a3, auStack_40);
    Vec3_add(auStack_30, auStack_40, a2, a3, auStack_50);
    Vec3_assign(a0 + 0x80, auStack_50, a2, a3);
    Vec3_dtor(auStack_50, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_40, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * game_vec_0b0eec  0x8c0b0eec
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b2ac_vec_0b0784
 */
u32 game_vec_0b0eec(int a0, float *a1, float *a2, u32 a3) {
    double dVar1;
    u64 uVar2;
    u32 uVar3;
    int *ar5_00;
    int iVar4;
    u32 uVar5;
    float *pfVar6;
    code *ar5_01;
    u8 *puVar7;
    u32 uVar8;
    u32 uVar9;
    u32 uVar10;
    float fVar11;
    u64 in_dr0;
    float fVar13;
    double dVar12;
    u64 in_xd0;
    char cVar14;
    char cVar15;
    float *ain0;
    u64 uStack_204;
    u64 uStack_188;
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
    u8 auStack_30[20];

    cVar15 = '\0';
    cVar14 = '\0';
    uVar10 = 1;
    pfVar6 = a1;
    uVar9 = a3;
    ain0 = a2;
    Vec3_ctor_zero(auStack_30, a1, a2);
    Vec3_ctor_zero(auStack_40, pfVar6, a2);
    Vec3_ctor_zero(auStack_50, pfVar6, a2);
    iVar4 = *(int *)(a0 + 300);
    if ((iVar4 < 9) && (-1 < iVar4)) {
        switch (iVar4) {
        case 0:
            uVar8 = 0xc;
            iVar4 = CAnimBody_PlayToEnd(a0 + 0xb0, 0xc, a2, uVar9);
            if (iVar4 != 1) {
                if (iVar4 != 2)
                    break;
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar8, a2, uVar9);
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            Vec3_assign(a0 + 0x14, a0 + 0x80, a2, uVar9);
            break;
        case 1:
            if (cVar15 == '\0') {
                fVar11 = *a1;
                fVar13 = 1500.0;
            } else {
                in_xd0 = *(u64 *)a1;
                fVar11 = 1500.0;
                fVar13 = 1000.0;
            }
            if (cVar14 == '\0' && fVar13 < fVar11) {
                Vec3_ctor_xyz(auStack_70, Vec3_ctor_xyz, a2, uVar9);
                Vec3_assign(a0 + 0x2e4, auStack_70, a2, uVar9);
                Vec3_dtor(auStack_70, 0xffffffff, a2, uVar9);
            } else {
                Vec3_ctor_xyz(auStack_60, pfVar6, a2, uVar9);
                Vec3_assign(a0 + 0x2e4, auStack_60, a2, uVar9);
                Vec3_dtor(auStack_60, 0xffffffff, a2, uVar9);
            }
            copy6_to_fields(a0, 0x8c286dbc, a2, uVar9);
            *(u32 *)(a0 + 0x40) = 3;
            in_dr0 = (u64)(u32)fVar11;
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0;
            } else {
                *(u64 *)(a0 + 0x2c) = in_dr0;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 2:
            if (cVar15 == '\0') {
                uVar8 = (u32)in_dr0;
                uVar5 = 0x3f000000;
                *(u32 *)(a0 + 0x28) = 0x3f000000;
            } else {
                uVar8 = 0x3f000000;
                uVar5 = 0xb0;
                *(u64 *)(a0 + 0x28) = 0xb03f000000;
            }
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, CAnimBody_AdvanceFrame_wrapper, a2, uVar9);
            pfVar6 = a1;
            Vec3_sub(a0 + 0x2e4, a1, a2, uVar9, auStack_80);
            uVar3 = Vec3_length(auStack_80, pfVar6, a2, uVar9);
            Vec3_assign(auStack_50, uVar3, a2, uVar9);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_80, 0xffffffff, a2, uVar9);
            Vec3_make(a0 + 0x14, uVar3, a2, uVar9, auStack_90);
            Vec3_make(auStack_50, uVar3, a2, uVar9, auStack_a0);
            Vec3_cos_angle(auStack_90, auStack_a0, a2, uVar9);
            Vec3_dtor(auStack_a0, 0xffffffff, a2, uVar9);
            Vec3_dtor(auStack_90, 0xffffffff, a2, uVar9);
            Vec3_distance_sq(a1, a0 + 0x2e4, a2, uVar9);
            if (cVar15 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)(a0 + 0x28), uVar5);
            } else {
                in_xd0 = CONCAT44(uVar5, uVar8);
                dVar12 = *(double *)(a0 + 0x28);
            }
            if (cVar14 == '\0') {
                fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 / dVar12, 0);
            }
            if (cVar15 == '\0') {
                *(float *)(a0 + 0x30) = fVar11;
            } else {
                *(u64 *)(a0 + 0x30) = in_xd0;
            }
            iVar4 = CMushroomerBody_vec_031764(a0, a0 + 0x2e4, a1, uVar9);
            if (iVar4 == 0) {
                uVar9 = 300;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 0x40) = 0;
            }
            a2 = (float *)0x1e;
            iVar4 = rand_range(a0, 0, 0x1e);
            if (iVar4 == 0) {
                *(u32 *)(a0 + 0x240) = 1;
                se_play_at_object(a0, 0xb, a1, a3);
                a2 = a1;
                uVar9 = a3;
            }
            Vec3_assign(a0 + 0x80, a0 + 0x14, a2, uVar9);
            break;
        case 3:
            if (cVar15 == '\0') {
                fVar11 = *a1;
                fVar13 = 1500.0;
            } else {
                in_xd0 = *(u64 *)a1;
                fVar11 = 1500.0;
                fVar13 = 1200.0;
            }
            if (cVar14 == '\0' && fVar13 < fVar11) {
                Vec3_ctor_xyz(auStack_c0, pfVar6, a2, uVar9);
                Vec3_assign(a0 + 0x2e4, auStack_c0, a2, uVar9);
                Vec3_dtor(auStack_c0, 0xffffffff, a2, uVar9);
            } else {
                Vec3_ctor_xyz(auStack_b0, Vec3_ctor_xyz, a2, uVar9);
                Vec3_assign(a0 + 0x2e4, auStack_b0, a2, uVar9);
                Vec3_dtor(auStack_b0, 0xffffffff, a2, uVar9);
            }
            copy6_to_fields(a0, 0x8c286dbc, a2, uVar9);
            *(u32 *)(a0 + 0x40) = 3;
            pfVar6 = (float *)(a0 + 0x2c);
            in_dr0 = (u64)(u32)fVar11;
            if (cVar15 == '\0') {
                *pfVar6 = 0.0;
            } else {
                *(u64 *)pfVar6 = in_dr0;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 4:
            if (cVar15 == '\0') {
                uVar8 = (u32)in_dr0;
                uVar5 = 0x3f000000;
                *(u32 *)(a0 + 0x28) = 0x3f000000;
            } else {
                uVar8 = 0x3f000000;
                uVar5 = 0xb0;
                *(u64 *)(a0 + 0x28) = 0xb03f000000;
            }
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, pfVar6, a2, uVar9);
            pfVar6 = a1;
            Vec3_sub(a0 + 0x2e4, a1, a2, uVar9, auStack_d0);
            uVar3 = Vec3_length(auStack_d0, pfVar6, a2, uVar9);
            Vec3_assign(auStack_50, uVar3, a2, uVar9);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_d0, 0xffffffff, a2, uVar9);
            Vec3_make(a0 + 0x14, uVar3, a2, uVar9, auStack_e0);
            Vec3_make(auStack_50, uVar3, a2, uVar9, auStack_f0);
            Vec3_cos_angle(auStack_e0, auStack_f0, a2, uVar9);
            Vec3_dtor(auStack_f0, 0xffffffff, a2, uVar9);
            Vec3_dtor(auStack_e0, 0xffffffff, a2, uVar9);
            Vec3_distance_sq(a1, a0 + 0x2e4, a2, uVar9);
            if (cVar15 == '\0') {
                dVar12 = (double)CONCAT44(*(u32 *)(a0 + 0x28), uVar5);
            } else {
                in_xd0 = CONCAT44(uVar5, uVar8);
                dVar12 = *(double *)(a0 + 0x28);
            }
            if (cVar14 == '\0') {
                fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 / dVar12, 0);
            }
            if (cVar15 == '\0') {
                *(float *)(a0 + 0x30) = fVar11;
            } else {
                *(u64 *)(a0 + 0x30) = in_xd0;
            }
            iVar4 = CMushroomerBody_vec_031764(a0, a0 + 0x2e4, a1, uVar9);
            if (iVar4 == 0) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 0x40) = 0;
            }
            a2 = (float *)0x1e;
            iVar4 = rand_range(a0, 0, 0x1e);
            if (iVar4 == 0) {
                *(u32 *)(a0 + 0x240) = 1;
                se_play_at_object(a0, 0xb, a1, a3);
                a2 = a1;
                uVar9 = a3;
            }
            Vec3_assign(a0 + 0x80, a0 + 0x14, a2, uVar9);
            break;
        case 5:
            *(u32 *)(a0 + 0x240) = 1;
            uVar9 = 0xb;
            se_play_at_object(a0, 0xb, a1, a3);
            uVar8 = (u32)in_dr0;
            vec3_clear(a0 + 0x54, uVar9, a1, a3);
            a2 = a1;
            uVar9 = a3;
            if (g_8c286db8 == 0) {
                uVar5 = 0xd;
                uVar9 = array_at_field_14(a0 + 0xb0, 0xd, a1, a3);
                ar5_00 = (int *)deref_u32(uVar9);
                a2 = (float *)0x1;
                iVar4 = motion_entry_get_0(a0 + 0xb0, ar5_00, 1);
                if (iVar4 != 0) {
                    g_8c286db8 = iVar4;
                }
                *(u32 *)(*ar5_00 + 0x18) = 0;
                uVar9 = a3;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x2d0) = 0x3f800000;
                in_dr0 = CONCAT44(0x42f00000, uVar8);
                *(u32 *)(a0 + 0x2cc) = 0x42f00000;
            } else {
                *(u64 *)(a0 + 0x2d0) = CONCAT44(0x3f800000, uVar8);
                in_dr0 = 0x11042f00000;
                *(u64 *)(a0 + 0x2cc) = 0x11042f00000;
            }
            iVar4 = a0 + 0x80;
            Vec3_make(iVar4, iVar4, a2, uVar9, auStack_100);
            uVar8 = Vec3_length(auStack_100, iVar4, a2, uVar9);
            Vec3_assign(a0 + 700, uVar8, a2, uVar9);
            pfVar6 = (float *)0xffffffff;
            Vec3_dtor(auStack_100, 0xffffffff, a2, uVar9);
        case 6:
            fVar11 = (float)in_dr0;
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, pfVar6, a2, uVar9);
            if (cVar15 == '\0') {
                fVar11 = *(float *)(a0 + 0x2d0);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x2d0);
            }
            if (cVar14 == '\0') {
                fVar11 = fVar11 + 1.0;
            } else {
                fVar11 = SUB84((double)CONCAT44(0x3f800000, fVar11) + (double)CONCAT44(0x3f800000, fVar11), 0);
            }
            uStack_204 = in_xd0;
            if (cVar15 == '\0') {
                uStack_204 = CONCAT44(a0, fVar11);
            }
            if (cVar15 == '\0') {
                *(u32 *)(uStack_204._4_4_ + 0x2d0) = (u32)uStack_204;
                dVar12 = (double)CONCAT44(*(u32 *)(a0 + 0x2cc), (u32)uStack_204);
            } else {
                *(u64 *)(uStack_204._4_4_ + 0x2d0) = uStack_204;
                dVar12 = *(double *)(a0 + 0x2cc);
                in_xd0 = uStack_204;
            }
            if (cVar14 == '\0') {
                fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 / dVar12, 0);
            }
            uVar2 = in_xd0;
            if (cVar15 == '\0') {
                uStack_180 = CONCAT44(uStack_180._4_4_, fVar11);
                uVar2 = uStack_180;
            }
            uStack_180 = uVar2;
            if (cVar14 == '\0') {
                dVar12 = (double)CONCAT44(1.0 - fVar11, fVar11);
            } else {
                dVar12 = (double)CONCAT44(0x3f800000, fVar11) - (double)CONCAT44(0x3f800000, fVar11);
            }
            dVar1 = dVar12;
            if (cVar15 == '\0') {
                uStack_188 = (double)CONCAT44(uStack_188._4_4_, (int)((u64)dVar12 >> 0x20));
                dVar1 = uStack_188;
            }
            uStack_188 = dVar1;
            Vec3_scale(a0 + 0x80, &uStack_188, a2, uVar9, auStack_110);
            Vec3_scale(a0 + 700, &uStack_180, a2, uVar9, auStack_120);
            Vec3_add(auStack_110, auStack_120, a2, uVar9, auStack_130);
            Vec3_assign(a0 + 0x80, auStack_130, a2, uVar9);
            Vec3_dtor(auStack_130, 0xffffffff, a2, uVar9);
            Vec3_dtor(auStack_120, 0xffffffff, a2, uVar9);
            Vec3_dtor(auStack_110, 0xffffffff, a2, uVar9);
            Vec3_cos_angle(a0 + 0x80, a0 + 700, a2, uVar9);
            if (cVar15 == '\0') {
                dVar12 = (double)((u64)dVar12 >> 0x20);
            }
            if (cVar14 != '\0' || SUB84(dVar12, 0) <= 0.0) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            break;
        case 7:
            uVar8 = 0xd;
            iVar4 = CAnimBody_PlayToEnd(a0 + 0xb0, 0xd, a2, uVar9);
            if (iVar4 != 1) {
                if (iVar4 != 2)
                    break;
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar8, a2, uVar9);
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            *(u32 *)(a0 + 0x314) = 1;
            break;
        case 8:
            iVar4 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, pfVar6, a2, uVar9);
            if (iVar4 == 1) {
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar15 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = in_dr0;
                }
                vec3_clear(a0 + 0x54, 1, a2, uVar9);
                uVar10 = 0;
                *(u32 *)(a0 + 300) = 0;
                *(u32 *)(a0 + 0x314) = 2;
                uVar9 = 0;
                CAnimBody_SetAnimation(a0 + 0xb0, 0xe, 0xffffffff, 0);
                a2 = (float *)(a0 + 0xb0);
                ar5_01 = CAnimBody_SetFrame;
                CAnimBody_SetFrame(a2, CAnimBody_SetFrame, a2, uVar9);
                Vec3_assign_f(a0 + 0x304, ar5_01, a2, uVar9);
            }
            CAnimBody_GetCurFrame(a0 + 0xb0, CAnimBody_GetCurFrame, a2, uVar9);
            CAnimBody_vec_034384(a0 + 0xb0, g_8c286db8, a2, uVar9);
            Vec3_assign(auStack_30, auStack_140, a2, uVar9);
            Vec3_dtor(auStack_140, 0xffffffff, a2, uVar9);
            Vec3_sub(auStack_30, a0 + 0x54, a2, uVar9, auStack_150);
            Vec3_assign(auStack_40, auStack_150, a2, uVar9);
            Vec3_dtor(auStack_150, 0xffffffff, a2, uVar9);
            puVar7 = auStack_30;
            Vec3_assign(a0 + 0x54, puVar7, a2, uVar9);
            Vec3_ctor_xyz(auStack_160, puVar7, a2, uVar9);
            iVar4 = Vec3_not_equal(auStack_40, auStack_160);
            uVar8 = 0xffffffff;
            Vec3_dtor(auStack_160, 0xffffffff, a2, uVar9);
            if (iVar4 != 0) {
                vec3_copy_8c02b5fc(auStack_16c, ain0, a2);
                puVar7 = auStack_16c;
                Vec3_vec_023484(auStack_40, puVar7, a2, uVar9, (int)&uStack_180 + 4);
                uVar8 = Vec3_length((int)&uStack_180 + 4, puVar7, a2, uVar9);
                Vec3_assign(a0 + 0x14, uVar8, a2, uVar9);
                Vec3_dtor((int)&uStack_180 + 4, 0xffffffff, a2, uVar9);
                uVar8 = 0xffffffff;
                object_dtor_delete(auStack_16c, 0xffffffff, a2, uVar9);
            }
            Vec3_length_sq(auStack_40, uVar8, a2, uVar9);
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x28) = (int)(in_dr0 >> 0x20);
            } else {
                *(u64 *)(a0 + 0x28) = in_dr0;
            }
        }
    }
    uStack_188._4_4_ = uVar10;
    Vec3_dtor(auStack_50, 0xffffffff, a2, uVar9);
    Vec3_dtor(auStack_40, 0xffffffff, a2, uVar9);
    Vec3_dtor(auStack_30, 0xffffffff, a2, uVar9);
    return uStack_188._4_4_;
}

/*
 * game_vec_0b1ac0  0x8c0b1ac0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b2ac_vec_0b0784
 */
u32 game_vec_0b1ac0(double *a0, double *a1, code *a2, double *a3) {
    int iVar1;
    int iVar2;
    u32 ar5_00;
    u32 ar4_00;
    int *piVar3;
    int iVar4;
    u32 uVar5;
    u8 *puVar6;
    u8 *puVar7;
    code *pcVar8;
    code *ar5_01;
    code *ar6_00;
    u32 uVar9;
    int iVar10;
    float fVar11;
    double in_dr0;
    double dVar12;
    int iVar14;
    float fVar15;
    double dVar13;
    u32 in_fr3;
    double dVar16;
    float in_fr15;
    double in_xd0;
    bool bVar17;
    char cVar18;
    char cVar19;
    double *in_stack_00000000;
    double *ain0;
    u64 uStack_3c0;
    int iStack_368;
    int iStack_360;
    int iStack_328;
    int iStack_324;
    int iStack_320;
    int iStack_31c;
    u32 uStack_318;
    u32 uStack_314;
    double *pdStack_310;
    int iStack_30c;
    u64 uStack_308;
    double adStack_2f4[2];
    u8 auStack_2e4[16];
    u8 auStack_2d4[16];
    u8 auStack_2c4[16];
    u8 auStack_2b4[16];
    u8 auStack_2a4[16];
    u8 auStack_294[16];
    u8 auStack_284[16];
    u8 auStack_274[16];
    u8 auStack_264[16];
    u8 auStack_254[16];
    u8 auStack_244[16];
    u8 auStack_234[16];
    u8 auStack_224[12];
    double adStack_218[2];
    u8 auStack_208[16];
    u8 auStack_1f8[16];
    u8 auStack_1e8[16];
    u8 auStack_1d8[16];
    u8 auStack_1c8[16];
    u8 auStack_1b8[16];
    u8 auStack_1a8[16];
    u8 auStack_198[16];
    u8 auStack_188[16];
    u8 auStack_178[16];
    double adStack_168[2];
    u8 auStack_158[12];
    u8 auStack_14c[16];
    u8 auStack_13c[12];
    u8 auStack_130[16];
    u8 auStack_120[12];
    u8 auStack_114[16];
    u8 auStack_104[16];
    u8 auStack_f4[16];
    u8 auStack_e4[16];
    double adStack_d4[2];
    u8 auStack_c4[16];
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[8];
    double dStack_4c;
    double adStack_44[2];
    double adStack_34[2];

    cVar19 = '\0';
    cVar18 = '\0';
    uVar5 = 1;
    uVar9 = 1;
    pcVar8 = (code *)a3;
    ain0 = (double *)a2;
    Vec3_ctor_zero(adStack_34, 1, a2);
    Vec3_ctor_zero(adStack_44, uVar5, a2);
    Vec3_ctor_zero(auStack_54, uVar5, a2);
    if (*(int *)((int)a0 + 0x314) < 2) {
        puVar6 = (u8 *)0xc;
        iVar10 = 0xc;
    } else {
        if (cVar19 == '\0') {
            dVar12 = (double)CONCAT44(0x43020000, (float)g_8c286dec);
        } else {
            dVar12 = 52776566916096.0;
        }
        if (cVar18 == '\0') {
            fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
        } else {
            fVar11 = SUB84(dVar12 / dVar12, 0);
        }
        if (cVar19 == '\0') {
            in_dr0 = (double)CONCAT44(0x42c80000, fVar11);
        } else {
            in_dr0 = 3.91000778394702e-312;
        }
        if (cVar18 == '\0') {
            fVar15 = (float)((u64)in_dr0 >> 0x20);
            fVar11 = SUB84(in_dr0, 0) * fVar15;
            in_dr0 = (double)CONCAT44(fVar15, fVar11);
            iVar10 = (int)fVar11;
        } else {
            in_dr0 = in_dr0 * in_dr0;
            iVar10 = (int)in_dr0;
        }
        pdStack_310 = (double *)(100 - iVar10);
        if ((int)pdStack_310 < 0) {
            pdStack_310 = NULL;
        }
        a2 = (code *)0x6;
        puVar6 = NULL;
        pcVar8 = (code *)pdStack_310;
        iStack_30c = game_uses_rand_range_032af8(a0, 0, 6, pdStack_310);
        if (iStack_30c == 0) {
            iVar10 = 0x13;
        } else if ((iStack_30c == 1) || (iStack_30c == 2)) {
            iVar10 = 0x14;
        } else if (iStack_30c == 3) {
            iVar10 = 0xf;
        } else {
            puVar6 = (u8 *)0xe;
            iVar10 = 0xe;
        }
    }
    iVar2 = *(int *)((int)a0 + 300);
    if (iVar2 == 0) {
        iVar2 = CAnimBody_PlayToEnd(a0 + 0x16, iVar10, a2, pcVar8);
        if (iVar2 != 1) {
            if (iVar2 != 2)
                goto LAB_8c0b30ba;
            CAnimBody_AdvanceFrame_wrapper(a0 + 0x16, iVar10, a2, pcVar8);
        }
        if (cVar19 == '\0') {
            *(int *)(a0 + 0x14) = 0x3d4ccccd;
        } else {
            a0[0x14] = -8.625516725343968e-251;
        }
        timer_start_94(a0, iVar10, a2);
        vec3_clear((code *)((int)a0 + 0x54), (code *)((int)a0 + 0x54), a2, pcVar8);
        *(int *)((int)a0 + 300) = *(int *)((int)a0 + 300) + 1;
        goto LAB_8c0b30ba;
    }
    if (iVar2 != 1) {
        if (iVar2 == 2) {
            Vec3_assign((code *)((int)a0 + 0x14), a0 + 0x10, a2, pcVar8);
            iVar10 = CAnimBody_PlayToEnd(a0 + 0x16, 9, a2, pcVar8);
            if ((iVar10 != 1) && (iVar10 != 2)) {
                uStack_314 = 1;
                Vec3_dtor(auStack_54, 0xffffffff, a2, pcVar8);
                Vec3_dtor(adStack_44, 0xffffffff, a2, pcVar8);
                Vec3_dtor(adStack_34, 0xffffffff, a2, pcVar8);
                return uStack_314;
            }
            if (cVar19 == '\0') {
                *(int *)((int)a0 + 0x24) = 0x41700000;
            } else {
                *(u64 *)((int)a0 + 0x24) = 0x8c13babc41700000;
            }
            Vec3_scale_assign((code *)((int)a0 + 0x14), &g_8c13babc);
            *(int *)(a0 + 100) = 0;
            CMushroomerBody_vec_032518(a0, a1, a3, in_stack_00000000);
            Vec3_assign((code *)((int)a0 + 0x2e4), auStack_244, a3, in_stack_00000000);
            Vec3_dtor(auStack_244, 0xffffffff, a3, in_stack_00000000);
            if (cVar19 == '\0') {
                dVar12 = (double)CONCAT44(0x43fa0000, *(int *)(a0 + 0x5d));
            } else {
                in_xd0 = a0[0x5d];
                dVar12 = 1.1709360855895245e+17;
            }
            if (cVar18 == '\0') {
                fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
            } else {
                fVar11 = SUB84(dVar12 + dVar12, 0);
            }
            if (cVar19 == '\0') {
                *(float *)(a0 + 0x5d) = fVar11;
            } else {
                a0[0x5d] = in_xd0;
            }
            Vec3_sub((code *)((int)a0 + 0x2e4), a1, a3, in_stack_00000000, auStack_254);
            Vec3_assign((code *)((int)a0 + 0x2d4), auStack_254, a3, in_stack_00000000);
            Vec3_dtor(auStack_254, 0xffffffff, a3, in_stack_00000000);
            uVar5 = 0x8c286dd4;
            copy6_to_fields(a0, 0x8c286dd4, a3, in_stack_00000000);
            timer_stop_94(a0, uVar5, a3, in_stack_00000000);
            pcVar8 = (code *)((int)a0 + 0x2c);
            if (cVar19 == '\0') {
                *(int *)pcVar8 = 0;
            } else {
                *(u64 *)pcVar8 = (u64)(u32)fVar11;
            }
            timer_start_24(a0);
            *(int *)(a0 + 8) = 3;
            *(int *)((int)a0 + 0x44) = 0;
            *(int *)(a0 + 99) = 0;
            *(int *)((int)a0 + 300) = *(int *)((int)a0 + 300) + 1;
            a2 = (code *)a3;
            pcVar8 = (code *)in_stack_00000000;
        } else if (iVar2 == 3) {
            if (cVar19 == '\0') {
                iVar2 = SUB84(in_dr0, 0);
                iVar14 = 0x3fc00000;
            } else {
                iVar2 = 0x3fc00000;
                iVar14 = 0x164;
            }
            Vec3_ctor_xyz(auStack_264, puVar6, a2, pcVar8);
            puVar7 = auStack_264;
            Vec3_add((code *)((int)a0 + 0x2d4), puVar7, a2, pcVar8, auStack_274);
            iVar4 = Vec3_length(auStack_274, puVar7, a2, pcVar8);
            Vec3_length_sq((code *)((int)a0 + 0x2d4), (code *)((int)a0 + 0x2d4), a2, pcVar8);
            iStack_360 = iVar14;
            iStack_320 = iVar2;
            iVar1 = iVar14;
            if (cVar19 == '\0') {
                iStack_360 = iVar4;
                iStack_320 = iVar14;
                iVar1 = iStack_31c;
            }
            iStack_31c = iVar1;
            dVar12 = (double)CONCAT44(iVar14, iVar2);
            Vec3_scale(iStack_360, &iStack_320, a2, pcVar8, auStack_284);
            Vec3_assign((code *)((int)a0 + 0x2d4), auStack_284, a2, pcVar8);
            Vec3_dtor(auStack_284, 0xffffffff, a2, pcVar8);
            Vec3_dtor(auStack_274, 0xffffffff, a2, pcVar8);
            Vec3_dtor(auStack_264, 0xffffffff, a2, pcVar8);
            Vec3_add((code *)((int)a0 + 0x2d4), a1, a2, pcVar8, auStack_294);
            pcVar8 = (code *)adStack_34;
            ar6_00 = Vec3_assign;
            Vec3_assign(pcVar8, auStack_294, Vec3_assign, pcVar8);
            Vec3_dtor(auStack_294, 0xffffffff, ar6_00, pcVar8);
            Vec3_assign((code *)((int)a0 + 0x2e4), adStack_34, ar6_00, pcVar8);
            Vec3_scale((code *)((int)a0 + 0x14), &g_8c13bac0, ar6_00, pcVar8, auStack_2a4);
            Vec3_assign(a0 + 0x10, auStack_2a4, ar6_00, pcVar8);
            Vec3_dtor(auStack_2a4, 0xffffffff, ar6_00, pcVar8);
            iVar2 = *(int *)(a0 + 100);
            if (iVar2 == 0) {
                Vec3_length_sq((code *)((int)a0 + 0x2d4), Vec3_length_sq, ar6_00, pcVar8);
                iVar10 = (int)((u64)dVar12 >> 0x20);
                iStack_324 = iVar10;
                if (cVar19 != '\0') {
                    iStack_368 = SUB84(dVar12, 0);
                    iStack_324 = iStack_368;
                    iStack_320 = iVar10;
                }
                Vec3_scale((code *)((int)a0 + 0x14), &iStack_324, ar6_00, pcVar8, auStack_2b4);
                Vec3_add(a1, auStack_2b4, ar6_00, pcVar8, auStack_2c4);
                Vec3_assign(adStack_34, auStack_2c4, ar6_00, pcVar8);
                Vec3_dtor(auStack_2c4, 0xffffffff, ar6_00, pcVar8);
                uVar5 = 0xffffffff;
                Vec3_dtor(auStack_2b4, 0xffffffff, ar6_00, pcVar8);
                ar6_00 = (code *)(a0 + 5);
                if (cVar19 == '\0') {
                    dVar13 = (double)CONCAT44(0x3f7d70a4, *(int *)(a0 + 5));
                } else {
                    in_xd0 = a0[5];
                    dVar13 = 3.73997530744218e-312;
                }
                if (cVar18 == '\0') {
                    fVar11 = (float)((u64)dVar13 >> 0x20);
                    dVar13 = (double)CONCAT44(fVar11, SUB84(dVar13, 0) * fVar11);
                } else {
                    dVar13 = dVar13 * dVar13;
                }
                if (cVar19 == '\0') {
                    *(int *)ar6_00 = SUB84(dVar13, 0);
                } else {
                    *(double *)ar6_00 = in_xd0;
                }
                pcVar8 = (code *)a0;
                CAnimBody_AdvanceFrame_wrapper(a0 + 0x16, uVar5, ar6_00, a0);
                CAnimBody_GetCurFrame(a0 + 0x16, uVar5, ar6_00, pcVar8);
                if (cVar19 == '\0') {
                    dVar12 = (double)CONCAT44(0x41a00000, SUB84(dVar13, 0));
                    in_fr15 = (float)((u64)dVar13 >> 0x20);
                } else {
                    dVar12 = 1.6981406014198e-311;
                }
                if (in_fr15 == (float)((u64)dVar12 >> 0x20)) {
                    *(int *)((int)a0 + 0x44) = 1;
                    ar6_00 = (code *)0x320;
                    *(int *)(a0 + 100) = *(int *)(a0 + 100) + 1;
                    if (cVar19 == '\0') {
                        dVar12 = (double)CONCAT44(0x3eb33333, SUB84(dVar12, 0));
                        *(int *)(a0 + 0x14) = 0x3eb33333;
                    } else {
                        dVar12 = -8.625516761765798e-251;
                        a0[0x14] = -8.625516761765798e-251;
                    }
                    *(int *)((int)a0 + 0xa4) = 1;
                    timer_start_94(a0, timer_start_94, 800);
                    if (*(int *)((int)a0 + 0x314) == 0) {
                        *(int *)(a0 + 0x48) = 1;
                        ar6_00 = (code *)a1;
                        se_play_at_object(a0, 0xb, a1, in_stack_00000000);
                        pcVar8 = (code *)in_stack_00000000;
                    }
                }
            } else if (iVar2 == 1) {
                if (cVar19 == '\0') {
                    dVar12 = (double)CONCAT44(0x3e19999a, *(int *)(a0 + 5));
                } else {
                    in_xd0 = a0[5];
                    dVar12 = 32.000007402896884;
                }
                if (cVar18 == '\0') {
                    fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                } else {
                    fVar11 = SUB84(dVar12 - dVar12, 0);
                }
                if (cVar19 == '\0') {
                    *(float *)(a0 + 5) = fVar11;
                    dVar12 = (double)CONCAT44(0x40400000, *(int *)(a0 + 5));
                } else {
                    a0[5] = in_xd0;
                    in_xd0 = a0[5];
                    dVar12 = 3.74003830419144e-312;
                }
                if (cVar18 == '\0' && SUB84(dVar12, 0) < (float)((u64)dVar12 >> 0x20)) {
                    if (cVar19 == '\0') {
                        dVar12 = (double)CONCAT44(0x40400000, SUB84(dVar12, 0));
                        *(int *)(a0 + 5) = 0x40400000;
                    } else {
                        dVar12 = 3.74003830419144e-312;
                        a0[5] = 3.74003830419144e-312;
                    }
                }
                iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0x16, CAnimBody_AdvanceFrame_wrapper, ar6_00, pcVar8);
                if (iVar2 == 1) {
                    *(int *)(a0 + 100) = *(int *)(a0 + 100) + 1;
                    pcVar8 = NULL;
                    ar6_00 = (code *)0xffffffff;
                    CAnimBody_SetAnimation(a0 + 0x16, iVar10, 0xffffffff, 0);
                }
            } else if (iVar2 == 2) {
                if (cVar19 == '\0') {
                    dVar12 = (double)CONCAT44(0x3e19999a, *(int *)(a0 + 5));
                } else {
                    in_xd0 = a0[5];
                    dVar12 = 32.000007402896884;
                }
                if (cVar18 == '\0') {
                    fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                } else {
                    fVar11 = SUB84(dVar12 - dVar12, 0);
                }
                if (cVar19 == '\0') {
                    *(float *)(a0 + 5) = fVar11;
                    dVar13 = (double)CONCAT44(0x40400000, *(int *)(a0 + 5));
                } else {
                    a0[5] = in_xd0;
                    in_xd0 = a0[5];
                    dVar13 = 1099511890944.0;
                }
                if (cVar18 == '\0' && SUB84(dVar13, 0) < (float)((u64)dVar13 >> 0x20)) {
                    if (cVar19 == '\0') {
                        dVar13 = (double)CONCAT44(0x40400000, SUB84(dVar13, 0));
                        *(int *)(a0 + 5) = 0x40400000;
                    } else {
                        dVar13 = 1099511890944.0;
                        a0[5] = 1099511890944.0;
                    }
                }
                if (iVar10 == 0xc) {
                    CAnimBody_AdvanceFrame_033d88(a0 + 0x16, 0xb0, ar6_00, pcVar8);
                } else {
                    CAnimBody_AdvanceFrame_wrapper(a0 + 0x16, 0xb0, ar6_00, pcVar8);
                    ar6_00 = (code *)0x1e;
                    iVar10 = rand_range(a0, 0, 0x1e);
                    if (iVar10 == 0) {
                        *(int *)(a0 + 0x48) = 1;
                        ar6_00 = (code *)a1;
                        pcVar8 = (code *)in_stack_00000000;
                        se_play_at_object(a0, 0xb, a1, in_stack_00000000);
                    }
                }
                (**(code **)(*(int *)in_stack_00000000 + 0x128))(in_stack_00000000, a1, ar6_00, pcVar8);
                if (cVar19 == '\0') {
                    dVar16 = (double)CONCAT44(*(int *)((int)a1 + 4), in_fr3);
                    dVar12 = (double)CONCAT44(0x42100000, (int)((u64)dVar13 >> 0x20));
                } else {
                    dVar16 = *(double *)((int)a1 + 4);
                    dVar12 = 1.52838456460023e-311;
                    in_xd0 = dVar13;
                }
                if (cVar18 == '\0') {
                    fVar15 = (float)((u64)dVar12 >> 0x20);
                    fVar11 = SUB84(dVar12, 0) + fVar15;
                    dVar12 = (double)CONCAT44(fVar15, fVar11);
                    bVar17 = fVar11 < (float)((u64)dVar16 >> 0x20);
                } else {
                    dVar12 = dVar12 + dVar12;
                    fVar11 = SUB84(dVar12, 0);
                    bVar17 = dVar12 < dVar16;
                }
                if (!bVar17) {
                    if (cVar19 == '\0') {
                        *(int *)(a0 + 0x5a) = 0x3f800000;
                        dVar12 = (double)CONCAT44(0x42f00000, fVar11);
                        *(int *)((int)a0 + 0x2cc) = 0x42f00000;
                    } else {
                        a0[0x5a] = (double)CONCAT44(0x3f800000, fVar11);
                        dVar12 = 5.18321821016064e-312;
                        *(u64 *)((int)a0 + 0x2cc) = 0xf442f00000;
                    }
                    ar5_01 = Vec3_make;
                    Vec3_make(a0 + 0x10, Vec3_make, ar6_00, pcVar8, auStack_2d4);
                    uVar5 = Vec3_length(auStack_2d4, ar5_01, ar6_00, pcVar8);
                    Vec3_assign((code *)((int)a0 + 700), uVar5, ar6_00, pcVar8);
                    Vec3_dtor(auStack_2d4, 0xffffffff, ar6_00, pcVar8);
                    *(int *)(a0 + 100) = *(int *)(a0 + 100) + 1;
                }
            } else if (iVar2 == 3) {
                if (cVar19 == '\0') {
                    dVar12 = (double)CONCAT44(0x3e19999a, *(int *)(a0 + 5));
                } else {
                    in_xd0 = a0[5];
                    dVar12 = 21990236625305.6;
                }
                if (cVar18 == '\0') {
                    fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                } else {
                    fVar11 = SUB84(dVar12 - dVar12, 0);
                }
                if (cVar19 == '\0') {
                    *(float *)(a0 + 5) = fVar11;
                    fVar11 = *(float *)(a0 + 5);
                } else {
                    a0[5] = in_xd0;
                    in_xd0 = a0[5];
                }
                if (cVar18 != '\0' || fVar11 <= 0.0) {
                    if (cVar19 == '\0') {
                        *(int *)(a0 + 5) = 0;
                    } else {
                        a0[5] = (double)(u64)(u32)fVar11;
                    }
                }
                CAnimBody_AdvanceFrame_033d88(a0 + 0x16, 0xb0, ar6_00, pcVar8);
                if (cVar19 == '\0') {
                    fVar11 = *(float *)(a0 + 0x5a);
                } else {
                    in_xd0 = a0[0x5a];
                }
                if (cVar18 == '\0') {
                    fVar11 = fVar11 + 1.0;
                } else {
                    fVar11 = SUB84((double)CONCAT44(0x3f800000, fVar11) + (double)CONCAT44(0x3f800000, fVar11), 0);
                }
                uStack_3c0 = in_xd0;
                if (cVar19 == '\0') {
                    uStack_3c0 = (double)CONCAT44(a0, fVar11);
                }
                if (cVar19 == '\0') {
                    *(u32 *)(uStack_3c0._4_4_ + 0x2d0) = (u32)uStack_3c0;
                    dVar12 = (double)CONCAT44(*(int *)((int)a0 + 0x2cc), (u32)uStack_3c0);
                    uStack_3c0 = in_xd0;
                } else {
                    *(double *)(uStack_3c0._4_4_ + 0x2d0) = uStack_3c0;
                    dVar12 = *(double *)((int)a0 + 0x2cc);
                }
                if (cVar18 == '\0') {
                    fVar11 = SUB84(dVar12, 0) / (float)((u64)dVar12 >> 0x20);
                } else {
                    fVar11 = SUB84(dVar12 / dVar12, 0);
                }
                dVar12 = uStack_3c0;
                if (cVar19 == '\0') {
                    uStack_308 = (double)CONCAT44(uStack_308._4_4_, fVar11);
                    dVar12 = uStack_308;
                }
                uStack_308 = dVar12;
                if (cVar18 == '\0') {
                    dVar13 = (double)CONCAT44(1.0 - fVar11, fVar11);
                } else {
                    dVar13 = (double)CONCAT44(0x3f800000, fVar11) - (double)CONCAT44(0x3f800000, fVar11);
                }
                iVar10 = (int)((u64)dVar13 >> 0x20);
                iStack_328 = iVar10;
                if (cVar19 != '\0') {
                    iStack_328 = SUB84(dVar13, 0);
                    iStack_324 = iVar10;
                }
                Vec3_scale(a0 + 0x10, &iStack_328, ar6_00, pcVar8, auStack_2e4);
                ar6_00 = (code *)adStack_2f4;
                Vec3_scale((code *)((int)a0 + 700), &uStack_308, ar6_00, pcVar8, ar6_00);
                Vec3_add(auStack_2e4, adStack_2f4, ar6_00, pcVar8, (int)&uStack_308 + 4);
                Vec3_assign(a0 + 0x10, (int)&uStack_308 + 4, ar6_00, pcVar8);
                Vec3_dtor((int)&uStack_308 + 4, 0xffffffff, ar6_00, pcVar8);
                Vec3_dtor(adStack_2f4, 0xffffffff, ar6_00, pcVar8);
                Vec3_dtor(auStack_2e4, 0xffffffff, ar6_00, pcVar8);
                Vec3_cos_angle(a0 + 0x10, (code *)((int)a0 + 700), ar6_00, pcVar8);
                in_xd0 = dVar13;
                if (cVar19 == '\0') {
                    dVar13 = (double)((u64)dVar13 >> 0x20);
                    in_xd0 = uStack_3c0;
                }
                dVar12 = (double)((u64)dVar13 & 0xffffffff);
                if (cVar18 != '\0' || SUB84(dVar13, 0) <= 0.0) {
                    *(int *)(a0 + 8) = 5;
                    *(int *)((int)a0 + 300) = 0;
                    uVar9 = 0;
                    timer_stop_94(a0, 0, ar6_00, pcVar8);
                }
            }
            Vec3_distance_sq(a1, adStack_34, ar6_00, pcVar8);
            if (cVar19 == '\0') {
                dVar13 = (double)CONCAT44(*(int *)(a0 + 5), (int)((u64)dVar12 >> 0x20));
                dVar12 = in_xd0;
            } else {
                dVar13 = a0[5];
            }
            if (cVar18 == '\0') {
                fVar11 = SUB84(dVar13, 0) / (float)((u64)dVar13 >> 0x20);
            } else {
                fVar11 = SUB84(dVar13 / dVar13, 0);
            }
            if (cVar19 == '\0') {
                *(float *)(a0 + 6) = fVar11;
            } else {
                a0[6] = dVar12;
            }
            CMushroomerBody_vec_031764(a0, adStack_34, a1, pcVar8);
            a2 = (code *)a1;
        }
        goto LAB_8c0b30ba;
    }
    if (*(int *)((int)a0 + 0x314) < 2) {
        iVar10 = CAnimBody_AdvanceFrame_033d88(a0 + 0x16, puVar6, a2, pcVar8);
        if (iVar10 == 7) {
            pcVar8 = (code *)0x12c;
            *(int *)((int)a0 + 300) = *(int *)((int)a0 + 300) + 1;
            a2 = (code *)a0;
        }
        goto LAB_8c0b30ba;
    }
    vec3_clear(auStack_54, puVar6, a2, pcVar8);
    iVar10 = get_field_1c_026dd8(a0 + 0x16, puVar6, a2);
    if (((iVar10 == 0x12) || (iVar10 == 0x13)) || (iVar10 == 0x14)) {
        ar5_00 = get_field_1c_on_field_b0(a0, puVar6, a2);
        uVar5 = ar5_00;
        ar4_00 = array_at_field_14(a0 + 0x16, ar5_00, ar5_00, pcVar8);
        piVar3 = (int *)deref_u32(ar4_00);
        iVar2 = piVar3[1];
        *(int *)((int)a0 + 0xb4) = *piVar3;
        *(int *)(a0 + 0x17) = iVar2;
        *(int *)((int)a0 + 0xbc) = piVar3[2];
        *(u8 **)((int)a0 + 0xb4) = &g_8c13ba4c + (iVar10 + -0x12) * 0x18;
        CAnimBody_GetCurFrame(a0 + 0x16, 0xb0, uVar5, pcVar8);
        pcVar8 = CAnimBody_vec_034384;
        CAnimBody_vec_034384(a0 + 0x16, **(u32 **)((int)a0 + 0xb4), uVar5, CAnimBody_vec_034384);
        Vec3_assign(adStack_44, auStack_64, uVar5, pcVar8);
        Vec3_dtor(auStack_64, 0xffffffff, uVar5, pcVar8);
        Vec3_sub(adStack_44, (code *)((int)a0 + 0x54), uVar5, pcVar8, auStack_74);
        Vec3_assign(auStack_54, auStack_74, uVar5, pcVar8);
        Vec3_dtor(auStack_74, 0xffffffff, uVar5, pcVar8);
        a2 = (code *)adStack_44;
        Vec3_assign((code *)((int)a0 + 0x54), a2, a2, pcVar8);
        puVar6 = &g_8c13ba98;
        Vec3_scale_assign(auStack_54, &g_8c13ba98);
    } else {
        if (cVar19 == '\0') {
            in_dr0 = (double)CONCAT44(0x3f666666, *(int *)(a0 + 5));
        } else {
            in_xd0 = a0[5];
            in_dr0 = 3.73996784729797e-312;
        }
        if (cVar18 == '\0') {
            fVar11 = (float)((u64)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar11, SUB84(in_dr0, 0) * fVar11);
        } else {
            in_dr0 = in_dr0 * in_dr0;
        }
        if (cVar19 == '\0') {
            *(int *)(a0 + 5) = SUB84(in_dr0, 0);
        } else {
            a0[5] = in_xd0;
        }
    }
    CAnimBody_GetCurFrame(a0 + 0x16, puVar6, a2, pcVar8);
    if (cVar18 == '\0') {
        iVar2 = (int)(float)((u64)in_dr0 >> 0x20);
    } else {
        iVar2 = (int)in_dr0;
    }
    if (iVar10 == 0x12) {
        if ((iVar2 == 0x1e) || (iVar2 == 0x54)) {
            *(int *)(a0 + 0x48) = 1;
            se_play_at_object(a0, 0xb, a1, in_stack_00000000);
            a2 = (code *)a1;
            pcVar8 = (code *)in_stack_00000000;
        }
        fVar11 = (float)iVar2;
        if (cVar19 == '\0') {
            fVar15 = 18.0;
        } else {
            fVar11 = 18.0;
            fVar15 = 23.0;
        }
        if (cVar18 == '\0' && fVar15 < fVar11) {
            fVar11 = (float)iVar2;
            if (cVar19 == '\0') {
                fVar15 = 23.0;
            } else {
                fVar11 = 23.0;
                fVar15 = 1.24996e-42;
            }
            if (cVar18 == '\0' && fVar11 < fVar15) {
                if (cVar19 == '\0') {
                    dVar12 = (double)CONCAT44(0x40c00000, dStack_4c._0_4_);
                } else {
                    dVar12 = -1.4906861505776066e+237;
                    in_xd0 = dStack_4c;
                }
                if (cVar18 == '\0') {
                    fVar11 = SUB84(dVar12, 0) - (float)((u64)dVar12 >> 0x20);
                } else {
                    fVar11 = SUB84(dVar12 - dVar12, 0);
                }
                dVar12 = in_xd0;
                if (cVar19 == '\0') {
                    dStack_4c = (double)CONCAT44(dStack_4c._4_4_, fVar11);
                    dVar12 = dStack_4c;
                }
                goto LAB_8c0b262a;
            }
        }
        fVar11 = (float)iVar2;
        if (cVar19 == '\0') {
            fVar15 = 39.0;
        } else {
            fVar11 = 39.0;
            fVar15 = 63.0;
        }
        if (cVar18 == '\0' && fVar15 < fVar11) {
            fVar11 = (float)iVar2;
            if (cVar19 == '\0') {
                fVar15 = 63.0;
            } else {
                fVar11 = 63.0;
                fVar15 = 1.24996e-42;
            }
            if (cVar18 == '\0' && fVar11 < fVar15) {
                if (cVar19 == '\0') {
                    dVar12 = (double)CONCAT44(0x3f3851ec, dStack_4c._0_4_);
                } else {
                    dVar12 = 1.0192310304781727e-72;
                    in_xd0 = dStack_4c;
                }
                if (cVar18 == '\0') {
                    fVar11 = SUB84(dVar12, 0) + (float)((u64)dVar12 >> 0x20);
                } else {
                    fVar11 = SUB84(dVar12 + dVar12, 0);
                }
                dVar12 = in_xd0;
                if (cVar19 == '\0') {
                    dStack_4c = (double)CONCAT44(dStack_4c._4_4_, fVar11);
                    dVar12 = dStack_4c;
                }
                goto LAB_8c0b262a;
            }
        }
        puVar6 = &g_8c13ba9c;
        Vec3_scale((code *)((int)a0 + 0x14), &g_8c13ba9c, a2, pcVar8, auStack_84);
        Vec3_make((code *)((int)a0 + 0x14), puVar6, a2, pcVar8, auStack_94);
        Vec3_scale(auStack_94, &g_8c13baa0, a2, pcVar8, auStack_a4);
        puVar7 = auStack_a4;
        Vec3_add(auStack_84, puVar7, a2, pcVar8, auStack_b4);
        Vec3_normalize(auStack_b4, puVar7, a2, pcVar8);
        Vec3_assign((code *)((int)a0 + 0x14), auStack_c4, a2, pcVar8);
        Vec3_dtor(auStack_c4, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_b4, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_a4, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_94, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_84, 0xffffffff, a2, pcVar8);
        dVar12 = dStack_4c;
    } else if (iVar10 == 0x13) {
        if ((iVar2 == 0x26) || (iVar2 == 0x3c)) {
            *(int *)(a0 + 0x48) = 1;
            se_play_at_object(a0, 0xb, a1, in_stack_00000000);
            pcVar8 = (code *)in_stack_00000000;
        }
        fVar11 = SUB84(in_dr0, 0);
        a2 = (code *)adStack_d4;
        Vec3_scale((code *)((int)a0 + 0x14), &g_8c13baa4, a2, pcVar8, a2);
        Vec3_make((code *)((int)a0 + 0x14), Vec3_make, a2, pcVar8, auStack_e4);
        Vec3_scale(auStack_e4, &g_8c13baa8, a2, pcVar8, auStack_f4);
        puVar7 = auStack_f4;
        Vec3_add(adStack_d4, puVar7, a2, pcVar8, auStack_104);
        Vec3_normalize(auStack_104, puVar7, a2, pcVar8);
        Vec3_assign((code *)((int)a0 + 0x14), auStack_114, a2, pcVar8);
        Vec3_dtor(auStack_114, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_104, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_f4, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_e4, 0xffffffff, a2, pcVar8);
        Vec3_dtor(adStack_d4, 0xffffffff, a2, pcVar8);
        dVar12 = dStack_4c;
    } else if (iVar10 == 0x14) {
        if ((iVar2 == 0x10) || (iVar2 == 0x47)) {
            *(int *)(a0 + 0x48) = 1;
            puVar6 = (u8 *)0xb;
            se_play_at_object(a0, 0xb, a1, in_stack_00000000);
            a2 = (code *)a1;
            pcVar8 = (code *)in_stack_00000000;
        }
        fVar11 = (float)iVar2;
        if (cVar19 == '\0') {
            fVar15 = 35.0;
        } else {
            fVar11 = 35.0;
            fVar15 = 60.0;
        }
        if (cVar18 == '\0' && fVar15 < fVar11) {
            fVar11 = (float)iVar2;
            if (cVar19 == '\0') {
                fVar15 = 60.0;
            } else {
                fVar11 = 60.0;
                fVar15 = 5.0;
            }
            if (cVar18 == '\0' && fVar11 < fVar15) {
                Vec3_set_xyz(auStack_120, puVar6, a2, pcVar8);
                Vec3_vec_023484((code *)((int)a0 + 0x14), auStack_120, a2, pcVar8, auStack_130);
                Vec3_assign((code *)((int)a0 + 0x14), auStack_130, a2, pcVar8);
                Vec3_dtor(auStack_130, 0xffffffff, a2, pcVar8);
                object_dtor_delete(auStack_120, 0xffffffff, a2, pcVar8);
                dVar12 = dStack_4c;
                goto LAB_8c0b262a;
            }
        }
        fVar11 = (float)iVar2;
        if (cVar19 == '\0') {
            fVar15 = 72.0;
        } else {
            fVar11 = 72.0;
            fVar15 = 100.0;
        }
        if (cVar18 == '\0' && fVar15 < fVar11) {
            fVar11 = (float)iVar2;
            if (cVar19 == '\0') {
                fVar15 = 100.0;
            } else {
                fVar11 = 100.0;
                fVar15 = 5.0;
            }
            if (cVar18 == '\0' && fVar11 < fVar15) {
                Vec3_set_xyz(auStack_13c, puVar6, a2, pcVar8);
                Vec3_vec_023484((code *)((int)a0 + 0x14), auStack_13c, a2, pcVar8, auStack_14c);
                Vec3_assign((code *)((int)a0 + 0x14), auStack_14c, a2, pcVar8);
                Vec3_dtor(auStack_14c, 0xffffffff, a2, pcVar8);
                object_dtor_delete(auStack_13c, 0xffffffff, a2, pcVar8);
                dVar12 = dStack_4c;
                goto LAB_8c0b262a;
            }
        }
        fVar11 = (float)iVar2;
        if (cVar18 == '\0' && 0.0 < fVar11) {
            fVar11 = (float)iVar2;
            if (cVar19 == '\0') {
                fVar15 = 18.0;
            } else {
                fVar11 = 18.0;
                fVar15 = -2.0;
            }
            if (cVar18 == '\0' && fVar11 < fVar15) {
                Vec3_set_xyz(auStack_158, Vec3_set_xyz, a2, pcVar8);
                Vec3_vec_023484((code *)((int)a0 + 0x14), auStack_158, a2, pcVar8, adStack_168);
                Vec3_assign((code *)((int)a0 + 0x14), adStack_168, a2, pcVar8);
                uVar5 = 0xffffffff;
                a2 = (code *)adStack_168;
                Vec3_dtor(a2, 0xffffffff, a2, 0xffffffff);
                object_dtor_delete(auStack_158, 0xffffffff, a2, uVar5);
                dVar12 = dStack_4c;
                goto LAB_8c0b262a;
            }
        }
        Vec3_scale((code *)((int)a0 + 0x14), &g_8c13baac, a2, pcVar8, auStack_178);
        Vec3_make((code *)((int)a0 + 0x14), auStack_188, a2, pcVar8, auStack_188);
        Vec3_scale(auStack_188, &g_8c13bab0, a2, pcVar8, auStack_198);
        puVar7 = auStack_198;
        Vec3_add(auStack_178, puVar7, a2, pcVar8, auStack_1a8);
        Vec3_normalize(auStack_1a8, puVar7, a2, pcVar8);
        Vec3_assign((code *)((int)a0 + 0x14), auStack_1b8, a2, pcVar8);
        Vec3_dtor(auStack_1b8, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_1a8, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_198, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_188, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_178, 0xffffffff, a2, Vec3_dtor);
        dVar12 = dStack_4c;
    } else {
        iVar10 = rand_range(a0, 0, 0x1e);
        fVar11 = SUB84(in_dr0, 0);
        if (iVar10 == 0) {
            *(int *)(a0 + 0x48) = 1;
            se_play_at_object(a0, 0xb, a1, in_stack_00000000);
            pcVar8 = (code *)in_stack_00000000;
        }
        a2 = Vec3_scale;
        Vec3_scale((code *)((int)a0 + 0x14), &g_8c13bab4, Vec3_scale, pcVar8, auStack_1c8);
        Vec3_make((code *)((int)a0 + 0x14), auStack_1d8, a2, pcVar8, auStack_1d8);
        Vec3_scale(auStack_1d8, &g_8c13bab8, a2, pcVar8, auStack_1e8);
        Vec3_add(auStack_1c8, auStack_1e8, a2, pcVar8, auStack_1f8);
        Vec3_normalize(auStack_1f8, Vec3_normalize, a2, pcVar8);
        Vec3_assign((code *)((int)a0 + 0x14), auStack_208, a2, pcVar8);
        Vec3_dtor(auStack_208, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_1f8, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_1e8, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_1d8, 0xffffffff, a2, pcVar8);
        Vec3_dtor(auStack_1c8, 0xffffffff, a2, pcVar8);
        dVar12 = dStack_4c;
    }
LAB_8c0b262a:
    dStack_4c = dVar12;
    pcVar8 = (code *)adStack_218;
    Vec3_ctor_xyz(pcVar8, Vec3_ctor_xyz, a2, pcVar8);
    iStack_31c = Vec3_not_equal(auStack_54, adStack_218);
    Vec3_dtor(adStack_218, 0xffffffff, a2, pcVar8);
    if (iStack_31c != 0) {
        vec3_copy_8c02b5fc(auStack_224, ain0, a2);
        a2 = Vec3_vec_023484;
        Vec3_vec_023484(auStack_54, auStack_224, Vec3_vec_023484, pcVar8, auStack_234);
        Vec3_assign(a0 + 0x67, auStack_234, a2, pcVar8);
        Vec3_dtor(auStack_234, 0xffffffff, a2, pcVar8);
        object_dtor_delete(auStack_224, 0xffffffff, a2, pcVar8);
    }
    Vec3_assign(a0 + 0x10, (code *)((int)a0 + 0x14), a2, pcVar8);
    iVar10 = CAnimBody_AdvanceFrame_wrapper(a0 + 0x16, a0 + 0x16, a2, pcVar8);
    if (iVar10 == 1) {
        g_8c286dec = g_8c286dec + 1;
        uVar9 = 0;
        *(int *)((int)a0 + 300) = 0;
        if (cVar19 == '\0') {
            *(int *)((int)a0 + 0x334) = 0;
        } else {
            *(u64 *)((int)a0 + 0x334) = (u64)(u32)fVar11;
        }
    }
LAB_8c0b30ba:
    uStack_318 = uVar9;
    Vec3_dtor(auStack_54, 0xffffffff, a2, pcVar8);
    Vec3_dtor(adStack_44, 0xffffffff, a2, pcVar8);
    Vec3_dtor(adStack_34, 0xffffffff, a2, pcVar8);
    return uStack_318;
}

/*
 * game_vec_0b3184  0x8c0b3184
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b2ac_vec_0b0784
 */
u32 game_vec_0b3184(int a0, u64 *a1, u64 *a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u64 *puVar4;
    u64 *ar6_00;
    u32 uVar5;
    float in_fr1;
    float fVar6;
    u64 uVar7;
    u64 uVar8;
    double dVar9;
    double dVar10;
    double in_xd0;
    char cVar11;
    char cVar12;
    u64 uStack_8c;
    u8 auStack_78[16];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[20];

    cVar12 = '\0';
    cVar11 = '\0';
    uVar5 = 1;
    puVar4 = a1;
    ar6_00 = a2;
    Vec3_sub(a2, a1, a2, a3, auStack_38);
    uVar1 = Vec3_length(auStack_38, puVar4, ar6_00, a3);
    Vec3_ctor_copy(auStack_28, uVar1, ar6_00, a3);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, ar6_00, a3);
    Vec3_make(a0 + 0x14, uVar1, ar6_00, a3, auStack_48);
    Vec3_make(auStack_28, uVar1, ar6_00, a3, auStack_58);
    Vec3_cos_angle(auStack_48, auStack_58, ar6_00, a3);
    Vec3_dtor(auStack_58, 0xffffffff, ar6_00, a3);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_48, 0xffffffff, ar6_00, a3);
    iVar3 = *(int *)(a0 + 0x40);
    if ((iVar3 < 6) && (-1 < iVar3)) {
        switch (iVar3) {
        case 0:
            uVar1 = 0;
            iVar3 = CAnimBody_PlayToEnd(a0 + 0xb0, 0, ar6_00, a3);
            if ((iVar3 != 1) && (iVar3 != 2)) {
                Vec3_dtor(auStack_28, 0xffffffff, ar6_00, a3);
                return 1;
            }
            timer_stop_94(a0, uVar1, ar6_00, a3);
            Vec3_assign(a0 + 0x14, a0 + 0x80, ar6_00, a3);
            ar6_00 = (u64 *)0x3;
            iVar3 = rand_range(a0, 0, 3);
            if (cVar11 == '\0') {
                dVar9 = (double)CONCAT44((float)(iVar3 + 1), in_fr1);
            } else {
                dVar9 = (double)(iVar3 + 1);
            }
            if (cVar12 == '\0') {
                *(int *)(a0 + 0x24) = (int)((u64)dVar9 >> 0x20);
            } else {
                *(double *)(a0 + 0x24) = dVar9;
            }
            uVar1 = 0x8c286dbc;
            copy6_to_fields(a0, 0x8c286dbc, ar6_00, a3);
            uVar7 = (u64)dVar9 & 0xffffffff;
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0;
            } else {
                *(u64 *)(a0 + 0x2c) = uVar7;
            }
            timer_start_24(a0);
            in_fr1 = (float)uVar7;
            *(u32 *)(a0 + 0x40) = 3;
            *(u32 *)(a0 + 0x44) = 0;
            *(u32 *)(a0 + 0x318) = 0;
        default:
            iVar3 = a0 + 0x14;
            Vec3_assign(a0 + 0x80, iVar3, ar6_00, a3);
            CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, iVar3, ar6_00, a3);
            if (cVar12 == '\0') {
                in_fr1 = *(float *)(a0 + 0x28);
            } else {
                in_xd0 = *(double *)(a0 + 0x28);
            }
            if (cVar11 == '\0' && 1.0 < in_fr1) {
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(0x3e19999a, *(u32 *)(a0 + 0x28));
                } else {
                    in_xd0 = *(double *)(a0 + 0x28);
                    dVar9 = 3.73986008970316e-312;
                }
                if (cVar11 == '\0') {
                    fVar6 = (float)((u64)dVar9 >> 0x20);
                    dVar9 = (double)CONCAT44(fVar6, SUB84(dVar9, 0) - fVar6);
                } else {
                    dVar9 = dVar9 - dVar9;
                }
                if (cVar12 == '\0') {
                    *(int *)(a0 + 0x28) = SUB84(dVar9, 0);
                } else {
                    *(double *)(a0 + 0x28) = in_xd0;
                }
            } else {
                uVar8 = CONCAT44(0x3f800000, in_fr1);
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0x3f800000;
                } else {
                    *(u64 *)(a0 + 0x28) = uVar8;
                }
                ar6_00 = (u64 *)0x3;
                iVar3 = 0;
                iVar2 = rand_range(a0, 0, 3);
                if (cVar11 == '\0') {
                    dVar9 = (double)CONCAT44((float)(iVar2 + 1), (int)uVar8);
                } else {
                    dVar9 = (double)(iVar2 + 1);
                }
                if (cVar12 == '\0') {
                    *(int *)(a0 + 0x24) = (int)((u64)dVar9 >> 0x20);
                } else {
                    *(double *)(a0 + 0x24) = dVar9;
                }
            }
            CAnimBody_GetCurFrame(a0 + 0xb0, iVar3, ar6_00, a3);
            dVar10 = dVar9;
            if (cVar12 == '\0') {
                uStack_8c = (double)CONCAT44(uStack_8c._4_4_, (int)((u64)dVar9 >> 0x20));
                dVar10 = uStack_8c;
            }
            uStack_8c = dVar10;
            *(u32 *)(a0 + 0x44) = 1;
            puVar4 = a1;
            Vec3_sub(a2, a1, ar6_00, a3, auStack_68);
            uVar1 = Vec3_length(auStack_68, puVar4, ar6_00, a3);
            Vec3_assign(auStack_28, uVar1, ar6_00, a3);
            uVar1 = 0xffffffff;
            Vec3_dtor(auStack_68, 0xffffffff, ar6_00, a3);
            Vec3_make(a0 + 0x14, uVar1, ar6_00, a3, auStack_78);
            Vec3_make(auStack_28, uVar1, ar6_00, a3, (int)&uStack_8c + 4);
            Vec3_cos_angle(auStack_78, (int)&uStack_8c + 4, ar6_00, a3);
            Vec3_dtor((int)&uStack_8c + 4, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_78, 0xffffffff, ar6_00, a3);
            Vec3_distance_sq(a1, a2, ar6_00, a3);
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x28), (int)((u64)dVar9 >> 0x20));
                dVar9 = in_xd0;
            } else {
                dVar10 = *(double *)(a0 + 0x28);
            }
            if (cVar11 == '\0') {
                fVar6 = SUB84(dVar10, 0) / (float)((u64)dVar10 >> 0x20);
            } else {
                fVar6 = SUB84(dVar10 / dVar10, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x30) = fVar6;
            } else {
                *(double *)(a0 + 0x30) = dVar9;
            }
            ar6_00 = a1;
            uVar5 = CMushroomerBody_vec_031764(a0, a2, a1, a3);
            if (*(int *)(a0 + 0x1b8) == 1) {
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x18c) = *(u32 *)a1;
                    *(u32 *)(a0 + 400) = *(u32 *)((int)a1 + 4);
                    *(u32 *)(a0 + 0x194) = *(u32 *)(a1 + 1);
                    *(u32 *)(a0 + 0x198) = *(u32 *)a2;
                    *(u32 *)(a0 + 0x19c) = *(u32 *)((int)a2 + 4);
                    *(u32 *)(a0 + 0x1a0) = *(u32 *)(a2 + 1);
                } else {
                    *(u64 *)(a0 + 0x18c) = *a1;
                    *(u64 *)(a0 + 400) = *(u64 *)((int)a1 + 4);
                    *(u64 *)(a0 + 0x194) = a1[1];
                    *(u64 *)(a0 + 0x198) = *a2;
                    *(u64 *)(a0 + 0x19c) = *(u64 *)((int)a2 + 4);
                    *(u64 *)(a0 + 0x1a0) = a2[1];
                }
            }
            break;
        case 2:
            break;
        case 4:
            iVar3 = get_field_1c_026dd8(a0 + 0xb0, uVar1, ar6_00);
            if (iVar3 == 0) {
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar1, ar6_00, a3);
            } else {
                iVar3 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar1, ar6_00, a3);
                if (iVar3 == 1) {
                    a3 = 0;
                    uVar5 = 0xffffffff;
                    uVar1 = 0;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar1, uVar5, a3);
                }
            }
            uVar5 = CMushroomerBody_vec_031764(a0, a2, a1, a3);
            ar6_00 = a1;
        }
    }
    Vec3_dtor(auStack_28, 0xffffffff, ar6_00, a3);
    return uVar5;
}

/*
 * game_vec_0b3604  0x8c0b3604
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b2ac_vec_0b0784
 */
u32 game_vec_0b3604(int a0, double *a1, double *a2, int *a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    double *pdVar5;
    u8 *puVar6;
    code *pcVar7;
    u32 uVar8;
    float fVar9;
    double in_dr0;
    u64 uVar10;
    u32 uVar12;
    double dVar11;
    float fVar13;
    u32 uVar14;
    double in_dr2;
    double dVar15;
    float in_fr15;
    u32 in_fr14;
    double in_xd0;
    bool bVar16;
    char cVar17;
    char cVar18;
    int *in_stack_00000000;
    u64 uStack_2d4;
    u32 uStack_280;
    u32 uStack_278;
    u32 uStack_228;
    u32 uStack_224;
    u32 uStack_220;
    u32 uStack_21c;
    u32 uStack_218;
    u32 uStack_214;
    u32 uStack_210;
    u32 uStack_20c;
    u32 uStack_208;
    u32 uStack_204;
    u32 uStack_200;
    u64 uStack_1fc;
    u8 auStack_1e8[16];
    u8 auStack_1d8[16];
    u8 auStack_1c8[16];
    u8 auStack_1b8[16];
    u8 auStack_1a8[16];
    u8 auStack_198[16];
    u8 auStack_188[16];
    u8 auStack_178[16];
    u8 auStack_168[16];
    u8 auStack_158[16];
    u8 auStack_148[16];
    u8 auStack_138[16];
    u8 auStack_128[16];
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
    double dStack_38;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    cVar18 = '\0';
    cVar17 = '\0';
    pdVar5 = a1;
    Vec3_ctor_zero(&uStack_2c, a1, a2);
    uVar8 = 1;
    Vec3_assign_f_10277c(&dStack_38);
    uVar14 = SUB84(in_dr2, 0);
    iVar4 = *(int *)(a0 + 0x40);
    if ((5 < iVar4) || (iVar4 < 0))
        goto override_jmp_8c0b3676_case_2;
    switch (iVar4) {
    case 0:
        if (*(int *)(a0 + 0x348) == 1) {
            *(u32 *)(a0 + 0x31c) = 2;
        } else {
            a2 = (double *)0x64;
            iVar4 = rand_range(a0, 0, 100);
            uVar8 = SUB84(in_dr2, 0);
            if (iVar4 < 0x50) {
                *(u32 *)(a0 + 0x31c) = 0;
                (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000, a1, a2, a3);
                if (cVar18 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)((int)a1 + 4), uVar8);
                    dVar11 = (double)CONCAT44(0x42100000, (int)((u64)in_dr0 >> 0x20));
                } else {
                    in_dr2 = *(double *)((int)a1 + 4);
                    dVar11 = -2.066327991859925e+159;
                    in_xd0 = in_dr0;
                }
                if (cVar17 == '\0') {
                    fVar13 = (float)((u64)dVar11 >> 0x20);
                    fVar9 = SUB84(dVar11, 0) + fVar13;
                    in_dr0 = (double)CONCAT44(fVar13, fVar9);
                    bVar16 = fVar9 < (float)((u64)in_dr2 >> 0x20);
                } else {
                    in_dr0 = dVar11 + dVar11;
                    bVar16 = in_dr0 < in_dr2;
                }
                if (!bVar16) {
                    *(u32 *)(a0 + 0x31c) = 1;
                }
            } else {
                *(u32 *)(a0 + 0x31c) = 2;
            }
        }
        uVar14 = SUB84(in_dr2, 0);
        *(u32 *)(a0 + 0x40) = 1;
        break;
    case 2:
        goto override_jmp_8c0b3676_case_2;
    case 3:
        goto override_jmp_8c0b3676_case_3;
    case 4:
        pcVar7 = get_field_1c_026dd8;
        iVar4 = get_field_1c_026dd8(a0 + 0xb0, get_field_1c_026dd8, a2);
        if (iVar4 == 0) {
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, pcVar7, a2, a3);
        } else {
            CAnimBody_PlayToEnd(a0 + 0xb0, 0, a2, a3);
        }
        uVar8 = CMushroomerBody_vec_031764(a0, &uStack_2c, a1, a3);
        a2 = a1;
        goto override_jmp_8c0b3676_case_2;
    }
    fVar9 = SUB84(in_dr0, 0);
    Vec3_assign(a0 + 0x14, a0 + 0x80, a2, a3);
    iVar4 = *(int *)(a0 + 0x31c);
    if (iVar4 == 0) {
        iVar4 = CAnimBody_PlayToEnd(a0 + 0xb0, 0, a2, a3);
        if ((iVar4 != 1) && (iVar4 != 2)) {
            uStack_200 = 1;
            free_if_nonnull_wrap_102790(&dStack_38, 0xffffffff, a2, a3);
            Vec3_dtor(&uStack_2c, 0xffffffff, a2, a3);
            return uStack_200;
        }
        iVar4 = rand_range(a0, 0, 3);
        if (cVar17 == '\0') {
            dVar11 = (double)CONCAT44((float)(iVar4 + 1), fVar9);
        } else {
            dVar11 = (double)(iVar4 + 1);
        }
        if (cVar18 == '\0') {
            *(int *)(a0 + 0x24) = (int)((u64)dVar11 >> 0x20);
        } else {
            *(double *)(a0 + 0x24) = dVar11;
        }
        puVar6 = auStack_58;
        uVar8 = 0x80;
        Vec3_make(a0 + 0x80, 0x80, puVar6, a3, puVar6);
        uVar8 = Vec3_length(auStack_58, uVar8, puVar6, a3);
        game_vec_03263c(a0, uVar8, puVar6, a3);
        Vec3_add(auStack_68, a1, puVar6, a3, auStack_78);
        Vec3_assign(a0 + 0x2e4, auStack_78, puVar6, a3);
        Vec3_dtor(auStack_78, 0xffffffff, puVar6, a3);
        Vec3_dtor(auStack_68, 0xffffffff, puVar6, a3);
        Vec3_dtor(auStack_58, 0xffffffff, puVar6, a3);
        if (cVar18 == '\0') {
            fVar9 = *(float *)a1;
            fVar13 = 1000.0;
        } else {
            in_xd0 = *a1;
            fVar9 = 1000.0;
            fVar13 = -1.1275111e-31;
        }
        if (cVar17 != '\0' || fVar9 <= fVar13) {
            if (cVar18 != '\0') {
                fVar9 = 2.0;
            }
            a2 = &dStack_38;
            a3 = in_stack_00000000;
            game_float_calc_032788(a0, a0 + 0x2e4, a2, in_stack_00000000);
        } else {
            if (cVar18 != '\0') {
                fVar9 = 2.0;
            }
            a2 = (double *)&g_8c125c0c;
            a3 = in_stack_00000000;
            game_float_calc_032788(a0, a0 + 0x2e4, &g_8c125c0c, in_stack_00000000);
        }
        iVar4 = 0x8c286dbc;
        copy6_to_fields(a0, 0x8c286dbc, a2, a3);
    } else if (iVar4 == 1) {
        iVar4 = CAnimBody_PlayToEnd(a0 + 0xb0, 10, a2, a3);
        if ((iVar4 != 1) && (iVar4 != 2)) {
            uStack_204 = 1;
            pcVar7 = free_if_nonnull_wrap_102790;
            free_if_nonnull_wrap_102790(&dStack_38, 0xffffffff, free_if_nonnull_wrap_102790, a3);
            Vec3_dtor(&uStack_2c, 0xffffffff, pcVar7, a3);
            return uStack_204;
        }
        if (cVar18 == '\0') {
            *(u32 *)(a0 + 0x24) = 0x3e800000;
        } else {
            *(u64 *)(a0 + 0x24) = 0x24c3e800000;
        }
        uVar8 = 0x80;
        Vec3_make(a0 + 0x80, 0x80, a2, a3, auStack_88);
        uVar8 = Vec3_length(auStack_88, uVar8, a2, a3);
        game_vec_03263c(a0, uVar8, a2, a3);
        Vec3_add(auStack_98, a1, a2, a3, auStack_a8);
        Vec3_assign(a0 + 0x2e4, auStack_a8, a2, a3);
        Vec3_dtor(auStack_a8, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_98, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_88, 0xffffffff, a2, a3);
        if (cVar18 == '\0') {
            fVar9 = *(float *)a1;
            fVar13 = 1000.0;
        } else {
            in_xd0 = *a1;
            fVar9 = 1000.0;
            fVar13 = -1.1275111e-31;
        }
        if (cVar17 != '\0' || fVar9 <= fVar13) {
            if (cVar18 == '\0') {
                dVar11 = (double)CONCAT44(0x40000000, fVar9);
            } else {
                dVar11 = 1.4265116704764e-311;
            }
            a2 = &dStack_38;
            a3 = in_stack_00000000;
            game_float_calc_032788(a0, a0 + 0x2e4, a2, in_stack_00000000);
        } else {
            if (cVar18 == '\0') {
                dVar11 = (double)CONCAT44(0x40000000, fVar9);
            } else {
                dVar11 = -1.6026767271217265e-250;
            }
            a2 = (double *)&g_8c125c0c;
            a3 = in_stack_00000000;
            game_float_calc_032788(a0, a0 + 0x2e4, &g_8c125c0c, in_stack_00000000);
        }
        (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000, a0 + 0x2e4, a2, a3);
        if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44(0x42100000, (int)((u64)dVar11 >> 0x20));
        } else {
            dVar15 = -4.264942176124392e-250;
            in_xd0 = dVar11;
        }
        if (cVar17 == '\0') {
            fVar9 = SUB84(dVar15, 0) + (float)((u64)dVar15 >> 0x20);
        } else {
            fVar9 = SUB84(dVar15 + dVar15, 0);
        }
        if (cVar18 == '\0') {
            *(float *)(a0 + 0x2e8) = fVar9;
        } else {
            *(double *)(a0 + 0x2e8) = in_xd0;
        }
        iVar4 = 0x8c286dbc;
        copy6_to_fields(a0, 0x8c286dbc, a2, a3);
    } else if (iVar4 == 2) {
        iVar4 = CAnimBody_PlayToEnd(a0 + 0xb0, 9, a2, a3);
        if ((iVar4 != 1) && (iVar4 != 2)) {
            uStack_208 = 1;
            free_if_nonnull_wrap_102790(&dStack_38, 0xffffffff, a2, a3);
            Vec3_dtor(&uStack_2c, 0xffffffff, a2, a3);
            return uStack_208;
        }
        if (cVar18 == '\0') {
            *(u32 *)(a0 + 0x24) = 0x41700000;
        } else {
            *(u64 *)(a0 + 0x24) = 0x8c13bac441700000;
        }
        Vec3_scale_assign(a0 + 0x14, &g_8c13bac4);
        *(u32 *)(a0 + 800) = 0;
        game_vec_03263c(a0, a0 + 0x14, a2, a3);
        Vec3_add(auStack_b8, a1, a2, a3, auStack_c8);
        Vec3_assign(a0 + 0x2e4, auStack_c8, a2, a3);
        Vec3_dtor(auStack_c8, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_b8, 0xffffffff, a2, a3);
        if (cVar18 == '\0') {
            dVar11 = (double)CONCAT44(0x43fa0000, *(u32 *)(a0 + 0x2e8));
        } else {
            in_xd0 = *(double *)(a0 + 0x2e8);
            dVar11 = 1.1709360855895245e+17;
        }
        if (cVar17 == '\0') {
            fVar9 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
        } else {
            fVar9 = SUB84(dVar11 + dVar11, 0);
        }
        if (cVar18 == '\0') {
            *(float *)(a0 + 0x2e8) = fVar9;
        } else {
            *(double *)(a0 + 0x2e8) = in_xd0;
        }
        Vec3_sub(a0 + 0x2e4, a1, a2, a3, auStack_d8);
        Vec3_assign(a0 + 0x2d4, auStack_d8, a2, a3);
        Vec3_dtor(auStack_d8, 0xffffffff, a2, a3);
        iVar4 = 0x8c286dd4;
        copy6_to_fields(a0, 0x8c286dd4, a2, a3);
    }
    timer_stop_94(a0, iVar4, a2, a3);
    pdVar5 = (double *)(a0 + 0x2c);
    in_dr0 = (double)(u64)(u32)fVar9;
    if (cVar18 == '\0') {
        *(u32 *)pdVar5 = 0;
    } else {
        *pdVar5 = in_dr0;
    }
    timer_start_24(a0);
    *(u32 *)(a0 + 0x40) = 3;
    *(u32 *)(a0 + 0x44) = 0;
    *(u32 *)(a0 + 0x318) = 0;
override_jmp_8c0b3676_case_3:
    if ((0 < *(int *)(a0 + 0x1d4)) && (*(int *)(a0 + 0x31c) != 2)) {
        pdVar5 = a1;
        Vec3_sub(a0 + 0x2e4, a1, a2, a3, auStack_e8);
        uVar8 = Vec3_length(auStack_e8, pdVar5, a2, a3);
        Vec3_ctor_copy(auStack_48, uVar8, a2, a3);
        Vec3_dtor(auStack_e8, 0xffffffff, a2, a3);
        if (*(int *)(a0 + 0x1d4) == 2) {
            iVar4 = a0 + 0x14;
            Vec3_cos_angle(auStack_48, iVar4, a2, a3);
            if (cVar18 == '\0') {
                dVar11 = (double)CONCAT44(0x42b40000, (int)((u64)in_dr0 >> 0x20));
            } else {
                dVar11 = 1.01062290177484e-311;
                in_xd0 = in_dr0;
            }
            if (cVar17 == '\0' && SUB84(dVar11, 0) < (float)((u64)dVar11 >> 0x20)) {
                if (cVar18 == '\0') {
                    dVar15 = (double)(u64) * (u32 *)(a0 + 0x14);
                } else {
                    in_xd0 = *(double *)(a0 + 0x14);
                    dVar15 = dVar11;
                }
                dVar11 = (double)((u64)dVar15 & 0xffffffff);
                if (cVar17 == '\0' && SUB84(dVar15, 0) < 0.0) {
                    Vec3_vec_0238b4(auStack_48, Vec3_vec_0238b4, a2, a3);
                    Vec3_distance_sq(a1, a0 + 0x2e4, a2, a3);
                    uStack_218 = SUB84(dVar11, 0);
                    uVar8 = (u32)((u64)dVar11 >> 0x20);
                    if (cVar18 == '\0') {
                        uStack_218 = uVar8;
                        uVar8 = uStack_214;
                    }
                    uStack_214 = uVar8;
                    Vec3_scale(auStack_f8, &uStack_218, a2, a3, auStack_108);
                    puVar6 = auStack_108;
                    Vec3_add(puVar6, a1, puVar6, a3, auStack_118);
                    Vec3_assign(a0 + 0x2e4, auStack_118, puVar6, a3);
                    Vec3_dtor(auStack_118, 0xffffffff, puVar6, a3);
                    Vec3_dtor(auStack_108, 0xffffffff, puVar6, a3);
                    Vec3_dtor(auStack_f8, 0xffffffff, puVar6, a3);
                } else {
                    Vec3_vec_0238b4(auStack_48, iVar4, a2, a3);
                    Vec3_distance_sq(a1, a0 + 0x2e4, a2, a3);
                    uStack_21c = SUB84(dVar11, 0);
                    uVar8 = (u32)((u64)dVar11 >> 0x20);
                    if (cVar18 == '\0') {
                        uStack_21c = uVar8;
                        uVar8 = uStack_218;
                    }
                    uStack_218 = uVar8;
                    Vec3_scale(auStack_128, &uStack_21c, a2, a3, auStack_138);
                    Vec3_add(auStack_138, a1, a2, a3, auStack_148);
                    Vec3_assign(a0 + 0x2e4, auStack_148, a2, a3);
                    Vec3_dtor(auStack_148, 0xffffffff, a2, a3);
                    puVar6 = auStack_138;
                    Vec3_dtor(puVar6, 0xffffffff, puVar6, a3);
                    Vec3_dtor(auStack_128, 0xffffffff, puVar6, a3);
                }
                a2 = &dStack_38;
                a3 = in_stack_00000000;
                game_float_calc_032788(a0, a0 + 0x2e4, a2, in_stack_00000000);
                if (*(int *)(a0 + 0x31c) == 1) {
                    (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000, a0 + 0x2e4, a2, a3);
                    if (cVar18 == '\0') {
                        dVar15 = (double)CONCAT44(0x42100000, (int)((u64)dVar11 >> 0x20));
                    } else {
                        dVar15 = 7.909484942708294e+231;
                        in_xd0 = dVar11;
                    }
                    if (cVar17 == '\0') {
                        fVar9 = (float)((u64)dVar15 >> 0x20);
                        dVar11 = (double)CONCAT44(fVar9, SUB84(dVar15, 0) + fVar9);
                    } else {
                        dVar11 = dVar15 + dVar15;
                    }
                    if (cVar18 == '\0') {
                        *(int *)(a0 + 0x2e8) = SUB84(dVar11, 0);
                    } else {
                        *(double *)(a0 + 0x2e8) = in_xd0;
                    }
                }
            }
        } else {
            Vec3_cos_angle(auStack_48, a0 + 0x14, a2, a3);
            if (cVar18 == '\0') {
                dVar11 = (double)CONCAT44(0x42b40000, (int)((u64)in_dr0 >> 0x20));
            } else {
                dVar11 = 1.68966155488372e-311;
                in_xd0 = in_dr0;
            }
            if (cVar17 == '\0' && SUB84(dVar11, 0) < (float)((u64)dVar11 >> 0x20)) {
                *(u32 *)(a0 + 0x31c) = 2;
                *(u32 *)(a0 + 0x40) = 1;
                uStack_20c = 1;
                Vec3_dtor(auStack_48, 0xffffffff, a2, a3);
                free_if_nonnull_wrap_102790(&dStack_38, 0xffffffff, a2, a3);
                Vec3_dtor(&uStack_2c, 0xffffffff, Vec3_dtor, a3);
                return uStack_20c;
            }
        }
        Vec3_dtor(auStack_48, 0xffffffff, a2, a3);
        in_dr0 = dVar11;
    }
    pcVar7 = *(code **)(a0 + 0x31c);
    if ((double *)pcVar7 == NULL) {
        Vec3_assign(&uStack_2c, a0 + 0x2e4, 0, a3);
        fVar9 = SUB84(in_dr0, 0);
        iVar4 = a0 + 0x14;
        Vec3_assign(a0 + 0x80, iVar4, pcVar7, a3);
        CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, iVar4, pcVar7, a3);
        if (cVar18 == '\0') {
            fVar9 = *(float *)(a0 + 0x28);
        } else {
            in_xd0 = *(double *)(a0 + 0x28);
        }
        if (cVar17 == '\0' && 1.0 < fVar9) {
            if (cVar18 == '\0') {
                in_dr0 = (double)CONCAT44(0x3e19999a, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(double *)(a0 + 0x28);
                in_dr0 = 3.73986008970316e-312;
            }
            if (cVar17 == '\0') {
                fVar9 = (float)((u64)in_dr0 >> 0x20);
                in_dr0 = (double)CONCAT44(fVar9, SUB84(in_dr0, 0) - fVar9);
            } else {
                in_dr0 = in_dr0 - in_dr0;
            }
            iVar4 = a0;
            if (cVar18 == '\0') {
                *(int *)(a0 + 0x28) = SUB84(in_dr0, 0);
            } else {
                *(double *)(a0 + 0x28) = in_xd0;
            }
        } else {
            uVar10 = CONCAT44(0x3f800000, fVar9);
            if (cVar18 == '\0') {
                *(u32 *)(a0 + 0x28) = 0x3f800000;
            } else {
                *(u64 *)(a0 + 0x28) = uVar10;
            }
            pcVar7 = (code *)0x3;
            iVar4 = 0;
            iVar2 = rand_range(a0, 0, 3);
            if (cVar17 == '\0') {
                in_dr0 = (double)CONCAT44((float)(iVar2 + 1), (int)uVar10);
            } else {
                in_dr0 = (double)(iVar2 + 1);
            }
            if (cVar18 == '\0') {
                *(int *)(a0 + 0x24) = (int)((u64)in_dr0 >> 0x20);
            } else {
                *(double *)(a0 + 0x24) = in_dr0;
            }
        }
        CAnimBody_GetCurFrame(a0 + 0xb0, iVar4, pcVar7, a3);
        *(u32 *)(a0 + 0x44) = 1;
    } else if ((double *)pcVar7 == (double *)0x1) {
        Vec3_assign(&uStack_2c, a0 + 0x2e4, 1, a3);
        Vec3_assign(a0 + 0x80, a0 + 0x14, pcVar7, a3);
        CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, CAnimBody_AdvanceFrame_033d88, pcVar7, a3);
        CAnimBody_GetCurFrame(a0 + 0xb0, CAnimBody_GetCurFrame, pcVar7, a3);
        if (cVar18 == '\0') {
            dVar11 = (double)CONCAT44(0x41f00000, SUB84(in_dr0, 0));
            in_fr15 = (float)((u64)in_dr0 >> 0x20);
        } else {
            dVar11 = 3.74017818184368e-312;
        }
        if (cVar17 == '\0') {
            bVar16 = in_fr15 < (float)((u64)dVar11 >> 0x20);
        } else {
            bVar16 = (double)CONCAT44(in_fr14, in_fr15) < dVar11;
        }
        if (bVar16) {
        LAB_8c0b42c2:
            if (cVar18 == '\0') {
                in_dr0 = (double)CONCAT44(0x3f7d70a4, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(double *)(a0 + 0x28);
                in_dr0 = -1.1562114664300326e+79;
            }
            if (cVar17 == '\0') {
                fVar9 = (float)((u64)in_dr0 >> 0x20);
                in_dr0 = (double)CONCAT44(fVar9, SUB84(in_dr0, 0) * fVar9);
            } else {
                in_dr0 = in_dr0 * in_dr0;
            }
            if (cVar18 == '\0') {
                *(int *)(a0 + 0x28) = SUB84(in_dr0, 0);
            } else {
                *(double *)(a0 + 0x28) = in_xd0;
            }
        } else {
            if (cVar18 == '\0') {
                in_dr0 = (double)CONCAT44(0x42700000, SUB84(dVar11, 0));
            } else {
                in_dr0 = 0.007187501562839316;
            }
            if (cVar17 == '\0') {
                bVar16 = (float)((u64)in_dr0 >> 0x20) < in_fr15;
            } else {
                bVar16 = in_dr0 < (double)CONCAT44(in_fr14, in_fr15);
            }
            if (bVar16)
                goto LAB_8c0b42c2;
        }
        pcVar7 = (code *)0xb0;
        CAnimBody_GetCurFrame(a0 + 0xb0, CAnimBody_GetCurFrame, 0xb0, a3);
        *(u32 *)(a0 + 0x44) = 1;
    } else if ((double *)pcVar7 == (double *)0x2) {
        pcVar7 = (code *)(a0 + 0x94);
        if (cVar18 == '\0') {
            uVar8 = SUB84(in_dr0, 0);
            uVar12 = 0x3fc00000;
        } else {
            uVar8 = 0x3fc00000;
            uVar12 = 0x17c;
        }
        Vec3_ctor_xyz(auStack_158, Vec3_ctor_xyz, pcVar7, a3);
        puVar6 = auStack_158;
        Vec3_add(a0 + 0x2d4, puVar6, pcVar7, a3, auStack_168);
        uVar3 = Vec3_length(auStack_168, puVar6, pcVar7, a3);
        Vec3_length_sq(a0 + 0x2d4, a0 + 0x2d4, pcVar7, a3);
        uStack_278 = uVar12;
        uStack_220 = uVar8;
        uVar1 = uVar12;
        if (cVar18 == '\0') {
            uStack_278 = uVar3;
            uStack_220 = uVar12;
            uVar1 = uStack_21c;
        }
        uStack_21c = uVar1;
        in_dr0 = (double)CONCAT44(uVar12, uVar8);
        Vec3_scale(uStack_278, &uStack_220, pcVar7, a3, auStack_178);
        Vec3_assign(a0 + 0x2d4, auStack_178, pcVar7, a3);
        Vec3_dtor(auStack_178, 0xffffffff, pcVar7, a3);
        Vec3_dtor(auStack_168, 0xffffffff, pcVar7, a3);
        Vec3_dtor(auStack_158, 0xffffffff, pcVar7, a3);
        Vec3_add(a0 + 0x2d4, a1, pcVar7, a3, auStack_188);
        Vec3_assign(&uStack_2c, auStack_188, pcVar7, a3);
        Vec3_dtor(auStack_188, 0xffffffff, pcVar7, a3);
        Vec3_assign(a0 + 0x2e4, &uStack_2c, pcVar7, a3);
        Vec3_scale(a0 + 0x14, &g_8c13bac8, pcVar7, a3, auStack_198);
        Vec3_assign(a0 + 0x80, auStack_198, pcVar7, a3);
        Vec3_dtor(auStack_198, 0xffffffff, pcVar7, a3);
        iVar4 = *(int *)(a0 + 800);
        if (iVar4 == 0) {
            Vec3_length_sq(a0 + 0x2d4, 0, pcVar7, a3);
            uVar8 = (u32)((u64)in_dr0 >> 0x20);
            uStack_224 = uVar8;
            if (cVar18 != '\0') {
                uStack_280 = SUB84(in_dr0, 0);
                uStack_224 = uStack_280;
                uStack_220 = uVar8;
            }
            Vec3_scale(a0 + 0x14, &uStack_224, pcVar7, a3, auStack_1a8);
            Vec3_add(a1, auStack_1a8, pcVar7, a3, auStack_1b8);
            Vec3_assign(&uStack_2c, auStack_1b8, pcVar7, a3);
            Vec3_dtor(auStack_1b8, 0xffffffff, pcVar7, a3);
            uVar8 = 0xffffffff;
            Vec3_dtor(auStack_1a8, 0xffffffff, pcVar7, a3);
            if (cVar18 == '\0') {
                dVar11 = (double)CONCAT44(0x3f7d70a4, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(double *)(a0 + 0x28);
                dVar11 = -8.034349276309792e-251;
            }
            if (cVar17 == '\0') {
                fVar9 = (float)((u64)dVar11 >> 0x20);
                dVar11 = (double)CONCAT44(fVar9, SUB84(dVar11, 0) * fVar9);
            } else {
                dVar11 = dVar11 * dVar11;
            }
            if (cVar18 == '\0') {
                *(int *)(a0 + 0x28) = SUB84(dVar11, 0);
            } else {
                *(double *)(a0 + 0x28) = in_xd0;
            }
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar8, pcVar7, a3);
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar8, pcVar7, a3);
            if (cVar18 == '\0') {
                in_dr0 = (double)CONCAT44(0x41a00000, SUB84(dVar11, 0));
                in_fr15 = (float)((u64)dVar11 >> 0x20);
            } else {
                in_dr0 = 1.6981406014198e-311;
            }
            if (in_fr15 == (float)((u64)in_dr0 >> 0x20)) {
                *(u32 *)(a0 + 0x44) = 1;
                *(int *)(a0 + 800) = *(int *)(a0 + 800) + 1;
                if (cVar18 == '\0') {
                    in_dr0 = (double)CONCAT44(0x3eb33333, SUB84(in_dr0, 0));
                    *(u32 *)(a0 + 0xa0) = 0x3eb33333;
                } else {
                    in_dr0 = 3.48527032906071e-312;
                    *(u64 *)(a0 + 0xa0) = 0xa43eb33333;
                }
                *(u32 *)(a0 + 0xa4) = 1;
                timer_start_94(a0, a0, pcVar7);
                if (*(int *)(a0 + 0x348) == 1) {
                    *(u32 *)(a0 + 0x240) = 1;
                    pcVar7 = (code *)a1;
                    se_play_at_object(a0, 0xb, a1, in_stack_00000000);
                    a3 = in_stack_00000000;
                }
            }
        } else if (iVar4 == 1) {
            if (cVar18 == '\0') {
                dVar11 = (double)CONCAT44(0x3e19999a, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(double *)(a0 + 0x28);
                dVar11 = 32.000007402896884;
            }
            if (cVar17 == '\0') {
                fVar9 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
            } else {
                fVar9 = SUB84(dVar11 - dVar11, 0);
            }
            if (cVar18 == '\0') {
                *(float *)(a0 + 0x28) = fVar9;
                in_dr0 = (double)CONCAT44(0x40400000, *(u32 *)(a0 + 0x28));
            } else {
                *(double *)(a0 + 0x28) = in_xd0;
                in_xd0 = *(double *)(a0 + 0x28);
                in_dr0 = 3.74003830419144e-312;
            }
            if (cVar17 == '\0' && SUB84(in_dr0, 0) < (float)((u64)in_dr0 >> 0x20)) {
                if (cVar18 == '\0') {
                    in_dr0 = (double)CONCAT44(0x40400000, SUB84(in_dr0, 0));
                    *(u32 *)(a0 + 0x28) = 0x40400000;
                } else {
                    in_dr0 = 3.74003830419144e-312;
                    *(u64 *)(a0 + 0x28) = 0xb040400000;
                }
            }
            pcVar7 = (code *)0xb0;
            iVar4 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, 1, 0xb0, a3);
            if (iVar4 == 1) {
                *(int *)(a0 + 800) = *(int *)(a0 + 800) + 1;
                a3 = NULL;
                pcVar7 = (code *)0xffffffff;
                CAnimBody_SetAnimation(a0 + 0xb0, 1, 0xffffffff, 0);
            }
        } else if (iVar4 == 2) {
            if (cVar18 == '\0') {
                dVar11 = (double)CONCAT44(0x3e19999a, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(double *)(a0 + 0x28);
                dVar11 = 32.000007402896884;
            }
            if (cVar17 == '\0') {
                fVar9 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
            } else {
                fVar9 = SUB84(dVar11 - dVar11, 0);
            }
            if (cVar18 == '\0') {
                *(float *)(a0 + 0x28) = fVar9;
                dVar11 = (double)CONCAT44(0x40400000, *(u32 *)(a0 + 0x28));
            } else {
                *(double *)(a0 + 0x28) = in_xd0;
                in_xd0 = *(double *)(a0 + 0x28);
                dVar11 = 21990236766208.0;
            }
            if (cVar17 == '\0' && SUB84(dVar11, 0) < (float)((u64)dVar11 >> 0x20)) {
                if (cVar18 == '\0') {
                    dVar11 = (double)CONCAT44(0x40400000, SUB84(dVar11, 0));
                    *(u32 *)(a0 + 0x28) = 0x40400000;
                } else {
                    dVar11 = 21990236766208.0;
                    *(u64 *)(a0 + 0x28) = 0x42b4000040400000;
                }
            }
            CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, a0 + 0x28, pcVar7, a3);
            (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000, a1, pcVar7, a3);
            if (cVar18 == '\0') {
                dVar15 = (double)CONCAT44(*(u32 *)((int)a1 + 4), uVar14);
                in_dr0 = (double)CONCAT44(0x42100000, (int)((u64)dVar11 >> 0x20));
            } else {
                dVar15 = *(double *)((int)a1 + 4);
                in_dr0 = 1.52838456460023e-311;
                in_xd0 = dVar11;
            }
            if (cVar17 == '\0') {
                fVar13 = (float)((u64)in_dr0 >> 0x20);
                fVar9 = SUB84(in_dr0, 0) + fVar13;
                in_dr0 = (double)CONCAT44(fVar13, fVar9);
                bVar16 = fVar9 < (float)((u64)dVar15 >> 0x20);
            } else {
                in_dr0 = in_dr0 + in_dr0;
                fVar9 = SUB84(in_dr0, 0);
                bVar16 = in_dr0 < dVar15;
            }
            if (!bVar16) {
                if (cVar18 == '\0') {
                    *(u32 *)(a0 + 0x2d0) = 0x3f800000;
                    in_dr0 = (double)CONCAT44(0x42f00000, fVar9);
                    *(u32 *)(a0 + 0x2cc) = 0x42f00000;
                } else {
                    *(u64 *)(a0 + 0x2d0) = CONCAT44(0x3f800000, fVar9);
                    in_dr0 = 5.69249719999231e-312;
                    *(u64 *)(a0 + 0x2cc) = 0x10c42f00000;
                }
                iVar4 = a0 + 0x2cc;
                pcVar7 = Vec3_make;
                Vec3_make(a0 + 0x80, iVar4, Vec3_make, a3, auStack_1c8);
                uVar8 = Vec3_length(auStack_1c8, iVar4, pcVar7, a3);
                pcVar7 = Vec3_assign;
                Vec3_assign(a0 + 700, uVar8, Vec3_assign, a3);
                Vec3_dtor(auStack_1c8, 0xffffffff, pcVar7, a3);
                *(int *)(a0 + 800) = *(int *)(a0 + 800) + 1;
            }
        } else if (iVar4 == 3) {
            if (cVar18 == '\0') {
                dVar11 = (double)CONCAT44(0x3e19999a, *(u32 *)(a0 + 0x28));
            } else {
                in_xd0 = *(double *)(a0 + 0x28);
                dVar11 = 21990236625305.6;
            }
            if (cVar17 == '\0') {
                fVar9 = SUB84(dVar11, 0) - (float)((u64)dVar11 >> 0x20);
            } else {
                fVar9 = SUB84(dVar11 - dVar11, 0);
            }
            if (cVar18 == '\0') {
                *(float *)(a0 + 0x28) = fVar9;
                fVar9 = *(float *)(a0 + 0x28);
            } else {
                *(double *)(a0 + 0x28) = in_xd0;
                in_xd0 = *(double *)(a0 + 0x28);
            }
            if (cVar17 != '\0' || fVar9 <= 0.0) {
                if (cVar18 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = (u64)(u32)fVar9;
                }
            }
            CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, a0 + 0xb0, pcVar7, a3);
            if (cVar18 == '\0') {
                fVar9 = *(float *)(a0 + 0x2d0);
            } else {
                in_xd0 = *(double *)(a0 + 0x2d0);
            }
            if (cVar17 == '\0') {
                fVar9 = fVar9 + 1.0;
            } else {
                fVar9 = SUB84((double)CONCAT44(0x3f800000, fVar9) + (double)CONCAT44(0x3f800000, fVar9), 0);
            }
            uStack_2d4 = in_xd0;
            if (cVar18 == '\0') {
                uStack_2d4 = (double)CONCAT44(a0, fVar9);
            }
            if (cVar18 == '\0') {
                *(u32 *)(uStack_2d4._4_4_ + 0x2d0) = (u32)uStack_2d4;
                dVar11 = (double)CONCAT44(*(u32 *)(a0 + 0x2cc), (u32)uStack_2d4);
                uStack_2d4 = in_xd0;
            } else {
                *(double *)(uStack_2d4._4_4_ + 0x2d0) = uStack_2d4;
                dVar11 = *(double *)(a0 + 0x2cc);
            }
            if (cVar17 == '\0') {
                fVar9 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
            } else {
                fVar9 = SUB84(dVar11 / dVar11, 0);
            }
            dVar11 = uStack_2d4;
            if (cVar18 == '\0') {
                uStack_1fc = (double)CONCAT44(uStack_1fc._4_4_, fVar9);
                dVar11 = uStack_1fc;
            }
            uStack_1fc = dVar11;
            if (cVar17 == '\0') {
                dVar11 = (double)CONCAT44(1.0 - fVar9, fVar9);
            } else {
                dVar11 = (double)CONCAT44(0x3f800000, fVar9) - (double)CONCAT44(0x3f800000, fVar9);
            }
            uVar8 = (u32)((u64)dVar11 >> 0x20);
            uStack_228 = uVar8;
            if (cVar18 != '\0') {
                uStack_228 = SUB84(dVar11, 0);
                uStack_224 = uVar8;
            }
            Vec3_scale(a0 + 0x80, &uStack_228, &uStack_228, a3, auStack_1d8);
            uVar8 = 700;
            Vec3_scale(a0 + 700, &uStack_1fc, 700, a3, auStack_1e8);
            Vec3_add(auStack_1d8, auStack_1e8, uVar8, a3, (int)&uStack_1fc + 4);
            Vec3_assign(a0 + 0x80, (int)&uStack_1fc + 4, uVar8, a3);
            Vec3_dtor((int)&uStack_1fc + 4, 0xffffffff, uVar8, a3);
            pcVar7 = (code *)0xffffffff;
            Vec3_dtor(auStack_1e8, 0xffffffff, 0xffffffff, a3);
            Vec3_dtor(auStack_1d8, 0xffffffff, pcVar7, a3);
            Vec3_cos_angle(a0 + 0x80, a0 + 700, pcVar7, a3);
            in_xd0 = dVar11;
            if (cVar18 == '\0') {
                dVar11 = (double)((u64)dVar11 >> 0x20);
                in_xd0 = uStack_2d4;
            }
            in_dr0 = (double)((u64)dVar11 & 0xffffffff);
            if (cVar17 != '\0' || SUB84(dVar11, 0) <= 0.0) {
                *(u32 *)(a0 + 0x40) = 5;
                *(u32 *)(a0 + 0x31c) = 0;
                timer_stop_94(a0, 0, pcVar7, a3);
                *(u32 *)(a0 + 800) = 0;
                uStack_210 = 0;
                free_if_nonnull_wrap_102790(&dStack_38, 0xffffffff, pcVar7, a3);
                Vec3_dtor(&uStack_2c, 0xffffffff, pcVar7, a3);
                return uStack_210;
            }
        }
    }
    Vec3_distance_sq(a1, &uStack_2c, pcVar7, a3);
    if (cVar18 == '\0') {
        dVar11 = (double)CONCAT44(*(u32 *)(a0 + 0x28), (int)((u64)in_dr0 >> 0x20));
        in_dr0 = in_xd0;
    } else {
        dVar11 = *(double *)(a0 + 0x28);
    }
    if (cVar17 == '\0') {
        fVar9 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
    } else {
        fVar9 = SUB84(dVar11 / dVar11, 0);
    }
    if (cVar18 == '\0') {
        *(float *)(a0 + 0x30) = fVar9;
    } else {
        *(double *)(a0 + 0x30) = in_dr0;
    }
    uVar8 = CMushroomerBody_vec_031764(a0, &uStack_2c, a1, a3);
    a2 = (double *)0x1b8;
    if (*(int *)(a0 + 0x1b8) == 1) {
        if (cVar18 == '\0') {
            *(u32 *)(a0 + 0x18c) = *(u32 *)a1;
            *(u32 *)(a0 + 400) = *(u32 *)((int)a1 + 4);
            *(u32 *)(a0 + 0x194) = *(u32 *)(a1 + 1);
            *(u32 *)(a0 + 0x198) = uStack_2c;
            *(u32 *)(a0 + 0x19c) = uStack_28;
            *(u32 *)(a0 + 0x1a0) = uStack_24;
        } else {
            *(double *)(a0 + 0x18c) = *a1;
            *(u64 *)(a0 + 400) = *(u64 *)((int)a1 + 4);
            *(double *)(a0 + 0x194) = a1[1];
            *(u64 *)(a0 + 0x198) = CONCAT44(uStack_28, uStack_2c);
            *(u64 *)(a0 + 0x19c) = CONCAT44(uStack_24, uStack_28);
            *(u64 *)(a0 + 0x1a0) = CONCAT44(uStack_20, uStack_24);
        }
        a2 = (double *)((int)a1 + 4);
    }
override_jmp_8c0b3676_case_2:
    uStack_214 = uVar8;
    free_if_nonnull_wrap_102790(&dStack_38, 0xffffffff, a2, a3);
    Vec3_dtor(&uStack_2c, 0xffffffff, a2, a3);
    return uStack_214;
}

/*
 * obj_play_anim_17_then_idle  0x8c0b4ba0
 * plays animation 0x17 to its end, runs it out at half speed and then returns to animation 0
 * called by: Class_12b2ac_vec_0b0784
 */
u32 obj_play_anim_17_then_idle(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar7_00;
    u32 uVar3;
    u32 in_fr1;
    u64 uVar4;
    char cVar5;

    cVar5 = '\0';
    uVar3 = 1;
    if (*(int *)(a0 + 300) == 0) {
        uVar2 = 0x17;
        iVar1 = CAnimBody_PlayToEnd(a0 + 0xb0, 0x17, a2, a3);
        if (iVar1 != 1) {
            if (iVar1 != 2) {
                return 1;
            }
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, a2, a3);
        }
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else if (*(int *)(a0 + 300) == 1) {
        uVar4 = CONCAT44(0x3f000000, in_fr1);
        *(u32 *)(a0 + 0x28) = 0x3f000000;
        iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
        if (iVar1 == 1) {
            if (cVar5 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = uVar4 & 0xffffffff;
            }
            ar7_00 = 0;
            uVar2 = 0xffffffff;
            uVar3 = 0;
            CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar3, uVar2, ar7_00);
            uVar3 = 0;
            *(u32 *)(a0 + 300) = 0;
        }
    }
    return uVar3;
}

/*
 * game_uses_CAnimBody_PlayToEnd_0b4c7c  0x8c0b4c7c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is CAnimBody_PlayToEnd
 * called by: Class_12b2ac_vec_0b0784
 */
u32 game_uses_CAnimBody_PlayToEnd_0b4c7c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 uVar2;

    uVar2 = 1;
    if (*(int *)(0x12c + a0) == 0) {
        ar5_00 = 5;
        iVar1 = CAnimBody_PlayToEnd(a0 + 0xb0, 5, a2, a3);
        if (iVar1 != 1) {
            if (iVar1 != 2) {
                return 1;
            }
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, a2, a3);
        }
        *(int *)(0x12c + a0) = *(int *)(0x12c + a0) + 1;
    } else if ((*(int *)(0x12c + a0) == 1) &&
               (iVar1 = (*(code *)(&CAnimBody_AdvanceFrame_wrapper))(a0 + 0xb0, a1, a2, a3), iVar1 == 1)) {
        uVar2 = 0;
        *(u32 *)(0x12c + a0) = 0;
    }
    return uVar2;
}

/*
 * game_uses_Vec3_dtor_0b4d14  0x8c0b4d14
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Vec3_dtor
 * called by: Class_12b2ac_vec_0b0784
 */
u32 game_uses_Vec3_dtor_0b4d14(int a0, u32 a1, u32 a2, u32 a3) {
    double dVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u32 *puVar5;
    u32 ar5_00;
    u32 ar6_00;
    u32 uVar6;
    float fVar7;
    u64 in_dr0;
    float fVar9;
    double dVar8;
    u32 uVar10;
    double in_dr14;
    bool bVar11;
    char cVar12;
    char cVar13;
    u32 in_stack_00000000;
    u32 ain0;
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[12];
    u8 auStack_48[16];
    u8 auStack_38[12];
    u8 auStack_2c[8];
    double dStack_24;

    cVar13 = '\0';
    cVar12 = '\0';
    uVar6 = 1;
    uVar4 = a1;
    ar6_00 = a2;
    ain0 = a3;
    Vec3_ctor_zero(auStack_2c, a1, a2);
    Vec3_set_zero(auStack_38);
    iVar2 = get_field_6c_028cc4(a1, uVar4);
    if (iVar2 == 0) {
        object_dtor_delete(auStack_38, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, a3);
        return 2;
    }
    iVar3 = *(int *)(a0 + 300);
    if (iVar3 == 0) {
        a3 = 0;
        ar6_00 = 0xffffffff;
        uVar4 = 0xb;
        CAnimBody_SetAnimation(a0 + 0xb0, 0xb, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar4, ar6_00, a3);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else if (iVar3 != 1) {
        if (iVar3 == 2) {
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar4, ar6_00, a3);
            if (cVar13 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)in_dr0 >> 0x20));
            }
            if (cVar12 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + 1.0);
            } else {
                in_dr14 = in_dr14 + (double)CONCAT44(0x3f800000, (int)in_dr0);
            }
            iVar3 = get_motion_data(a0 + 0xb0, 0x16, ar6_00, a3);
            fVar7 = (float)iVar3;
            dVar8 = (double)(u64)(u32)fVar7;
            if (cVar12 == '\0' && fVar7 < 0.0) {
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0x4f800000, fVar7);
                } else {
                    dVar8 = -8.62186752335918e-251;
                }
                if (cVar12 == '\0') {
                    fVar7 = (float)((u64)dVar8 >> 0x20);
                    dVar8 = (double)CONCAT44(fVar7, SUB84(dVar8, 0) + fVar7);
                } else {
                    dVar8 = dVar8 + dVar8;
                }
            }
            if (cVar12 == '\0') {
                bVar11 = SUB84(in_dr14, 0) < SUB84(dVar8, 0);
            } else {
                bVar11 = in_dr14 < dVar8;
            }
            if (!bVar11) {
                iVar3 = get_motion_data(a0 + 0xb0, 0x16, ar6_00, a3);
                dVar8 = (double)((u64)dVar8 & 0xffffffff);
                if (cVar12 == '\0') {
                    bVar11 = (float)iVar3 < 0.0;
                } else {
                    bVar11 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (float)iVar3) < dVar8;
                }
                if (bVar11) {
                    if (cVar13 == '\0') {
                        dVar8 = 9.046256971665328e+74;
                    } else {
                        dVar8 = -8.62186752335918e-251;
                    }
                }
            }
            uVar10 = (u32)((u64)dVar8 >> 0x20);
            ar5_00 = 0x16;
            uVar4 = array_at_field_14(a0 + 0xb0, 0x16, ar6_00, a3);
            puVar5 = (u32 *)deref_u32(uVar4);
            CAnimBody_vec_034384(a0 + 0xb0, *(u32 *)*puVar5, ar6_00, a3);
            Vec3_assign(auStack_2c, auStack_48, ar6_00, a3);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_48, 0xffffffff, ar6_00, a3);
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar4, ar6_00, a3);
            if (cVar13 == '\0') {
                dVar8 = (double)CONCAT44(0x41a00000, uVar10);
            } else {
                dVar8 = 3.14599345710447e-312;
            }
            dVar1 = dStack_24;
            if ((cVar12 != '\0' || (float)((u64)dVar8 >> 0x20) <= SUB84(dVar8, 0)) &&
                (dVar8 = (double)((u64)dVar8 & 0xffffffff), dVar1 = dVar8, cVar13 == '\0')) {
                dStack_24 = (double)((u64)dStack_24 & 0xffffffff00000000);
                dVar1 = dStack_24;
            }
            dStack_24 = dVar1;
            vec3_copy_8c02b5fc(auStack_54, ain0, ar6_00);
            Vec3_vec_023484(auStack_2c, auStack_54, ar6_00, a3, auStack_64);
            Vec3_add(auStack_64, a2, ar6_00, a3, auStack_74);
            Vec3_assign(auStack_2c, auStack_74, ar6_00, a3);
            Vec3_dtor(auStack_74, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_64, 0xffffffff, ar6_00, a3);
            uVar4 = 0xffffffff;
            object_dtor_delete(auStack_54, 0xffffffff, ar6_00, a3);
            set_vec3_field_30(iVar2, uVar4, ar6_00);
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar4, ar6_00, a3);
            if (cVar12 == '\0') {
                iVar2 = (int)(float)((u64)dVar8 >> 0x20);
            } else {
                iVar2 = (int)dVar8;
            }
            if (iVar2 == 0x28) {
                set_field_88_to_1(a1, uVar4, ar6_00);
                *(u32 *)(a0 + 0x348) = 1;
            }
            iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar4, ar6_00, a3);
            if (iVar2 == 1) {
                uVar6 = 0;
                *(u8 *)(a0 + 0x1fc) = *(u8 *)(a0 + 0x1fc) & 0xfb | 4;
                *(u32 *)(a0 + 300) = 0;
            }
        }
        goto LAB_8c0b4fe2;
    }
    fVar7 = (float)((u64)in_dr0 >> 0x20);
    CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar4, ar6_00, a3);
    CAnimBody_GetCurFrame(a0 + 0xb0, uVar4, ar6_00, a3);
    if (cVar13 == '\0') {
        fVar9 = 15.0;
    } else {
        fVar7 = 15.0;
        fVar9 = 2.57839e-43;
    }
    if (cVar12 != '\0' || fVar9 <= fVar7) {
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        se_play_at_object(a0, 0xc, a2, in_stack_00000000);
        *(u8 *)(a0 + 0x1fc) = *(u8 *)(a0 + 0x1fc) & 0xfb;
        ar6_00 = a2;
        a3 = in_stack_00000000;
    }
LAB_8c0b4fe2:
    object_dtor_delete(auStack_38, 0xffffffff, ar6_00, a3);
    Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, a3);
    return uVar6;
}

/*
 * game_vec_0b5098  0x8c0b5098
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b2ac_vec_0b0784
 */
u32 game_vec_0b5098(int a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    float fVar6;
    double in_dr0;
    double dVar7;
    double dVar8;
    u32 in_fr5;
    u64 in_xd0;
    bool bVar9;
    char cVar10;
    char cVar11;
    u64 uStack_94;
    double dStack_74;
    u64 uStack_60;
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[16];
    u8 auStack_1c[20];

    cVar11 = '\0';
    cVar10 = '\0';
    uVar4 = 1;
    uVar3 = a2;
    Vec3_ctor_zero(auStack_1c, a1, a2);
    *(u32 *)(a0 + 0x328) = 0xffffffff;
    iVar2 = *(int *)(a0 + 300);
    if (iVar2 != 0) {
        if (iVar2 == 1) {
            iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
            if (iVar2 == 1) {
                a1 = 0x15;
                iVar2 = get_motion_data(a0 + 0xb0, 0x15, a2, a3);
                if (cVar10 == '\0') {
                    dVar8 = (double)CONCAT44((float)iVar2, in_fr5);
                } else {
                    dVar8 = (double)iVar2;
                }
                dVar7 = (double)((u64)in_dr0 & 0xffffffff);
                if (cVar10 == '\0') {
                    bVar9 = (float)((u64)dVar8 >> 0x20) < 0.0;
                } else {
                    bVar9 = dVar8 < dVar7;
                }
                if (bVar9) {
                    if (cVar11 == '\0') {
                        dVar7 = (double)((u64)in_dr0 & 0xffffffff);
                    } else {
                        dVar7 = -8.399317239676898e-251;
                    }
                }
                in_dr0 = (double)((u64)dVar7 & 0xffffffff);
                CAnimBody_SetFrame(a0 + 0xb0, a1, a2, a3);
                *(u32 *)(a0 + 300) = 2;
                *(u32 *)(a0 + 0x32c) = 0;
                uVar4 = 0;
                set_field_8c_to_1(uVar3, a1, a2, a3);
            } else {
                CAnimBody_GetCurFrame(a0 + 0xb0, a1, a2, a3);
                dVar8 = in_dr0;
                if (cVar11 == '\0') {
                    dStack_74 = (double)CONCAT44(dStack_74._4_4_, (int)((u64)in_dr0 >> 0x20));
                    dVar8 = dStack_74;
                }
                dStack_74 = dVar8;
                iVar2 = get_motion_data(a0 + 0xb0, 0x15, a2, a3);
                uVar3 = SUB84(in_dr0, 0);
                a1 = libgcc_divide_helper_0101e4(iVar2 + -1, 8);
                in_dr0 = dStack_74;
                if (cVar11 == '\0') {
                    in_dr0 = (double)CONCAT44(dStack_74._0_4_, uVar3);
                }
                if (cVar10 == '\0') {
                    iVar2 = (int)(float)((u64)in_dr0 >> 0x20);
                } else {
                    iVar2 = (int)in_dr0;
                }
                iVar2 = libgcc_divide_helper_01031c(iVar2, a1, a2);
                if (iVar2 == 0) {
                    iVar2 = *(int *)(a0 + 0x32c);
                    *(int *)(a0 + 0x32c) = iVar2 + 1;
                    *(int *)(a0 + 0x328) = iVar2;
                }
            }
        } else if (iVar2 == 2) {
            uVar4 = 0;
        }
        goto LAB_8c0b51e6;
    }
    a1 = 0x15;
    iVar2 = CAnimBody_PlayToEnd(a0 + 0xb0, 0x15, a2, a3);
    uVar5 = SUB84(in_dr0, 0);
    if (iVar2 == 1) {
    LAB_8c0b50fa:
        *(u32 *)(a0 + 0x32c) = 0;
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else if (iVar2 == 2) {
        CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
        goto LAB_8c0b50fa;
    }
    in_dr0 = (double)(u64)uVar5;
    if (cVar11 == '\0') {
        *(u32 *)(a0 + 0x2c) = 0;
    } else {
        *(double *)(a0 + 0x2c) = in_dr0;
    }
LAB_8c0b51e6:
    fVar6 = SUB84(in_dr0, 0);
    Vec3_make(a0 + 0x14, a1, a2, a3, auStack_2c);
    Vec3_normalize(auStack_2c, a1, a2, a3);
    Vec3_assign(auStack_1c, auStack_3c, a2, a3);
    Vec3_dtor(auStack_3c, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_2c, 0xffffffff, a2, a3);
    if (cVar11 == '\0') {
        fVar6 = *(float *)(a0 + 0x2c);
    } else {
        in_xd0 = *(u64 *)(a0 + 0x2c);
    }
    if (cVar10 == '\0') {
        fVar6 = fVar6 + 1.0;
    } else {
        fVar6 = SUB84((double)CONCAT44(0x3f800000, fVar6) + (double)CONCAT44(0x3f800000, fVar6), 0);
    }
    uStack_94 = in_xd0;
    if (cVar11 == '\0') {
        uStack_94 = CONCAT44(a0, fVar6);
    }
    if (cVar11 == '\0') {
        *(u32 *)(uStack_94._4_4_ + 0x2c) = (u32)uStack_94;
        dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x38), (u32)uStack_94);
    } else {
        *(u64 *)(uStack_94._4_4_ + 0x2c) = uStack_94;
        dVar8 = *(double *)(a0 + 0x38);
        in_xd0 = uStack_94;
    }
    if (cVar10 == '\0') {
        fVar6 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
    } else {
        fVar6 = SUB84(dVar8 / dVar8, 0);
    }
    if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44(0x3dcccccd, fVar6);
    } else {
        dVar8 = 2.72127724290066e-312;
    }
    if (cVar10 == '\0') {
        fVar6 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
    } else {
        fVar6 = SUB84(dVar8 * dVar8, 0);
    }
    uVar1 = in_xd0;
    if (cVar11 == '\0') {
        uStack_60 = CONCAT44(uStack_60._4_4_, fVar6);
        uVar1 = uStack_60;
    }
    uStack_60 = uVar1;
    Vec3_scale(auStack_1c, &uStack_60, a2, a3, auStack_4c);
    Vec3_add_assign(a0 + 0x14, auStack_4c);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_4c, 0xffffffff, a2, a3);
    Vec3_normalize(a0 + 0x14, uVar3, a2, a3);
    Vec3_assign(a0 + 0x14, (int)&uStack_60 + 4, a2, a3);
    Vec3_dtor((int)&uStack_60 + 4, 0xffffffff, a2, a3);
    Vec3_assign(a0 + 0x80, a0 + 0x14, a2, a3);
    Vec3_dtor(auStack_1c, 0xffffffff, a2, a3);
    return uVar4;
}

/*
 * Class_12b2ac_uses_timer_stop_94_0b5344  0x8c0b5344
 * area name: only called from Class_12b2ac methods; behaviour name: its main named callee is timer_stop_94
 * called by: Class_12b2ac_m1_0aff3c
 */
int Class_12b2ac_uses_timer_stop_94_0b5344(int *a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int ar5_00;
    int *piVar3;
    u32 uVar4;
    float fVar5;
    double in_dr0;
    double dVar6;
    u64 uVar7;
    u64 in_xd0;
    char cVar8;
    char cVar9;

    cVar9 = '\0';
    cVar8 = '\0';
    iVar1 = a0[0x1a];
    if (iVar1 == 0) {
        a3 = 0;
        a2 = 0xffffffff;
        ar5_00 = 0;
        CAnimBody_SetAnimation(a0 + 0x2c, 0, 0xffffffff, 0);
        uVar4 = SUB84(in_dr0, 0);
        CAnimBody_SetFrame(a0 + 0x2c, ar5_00, a2, a3);
        uVar7 = (u64)uVar4;
        if (cVar9 == '\0') {
            a0[10] = 0;
        } else {
            *(u64 *)(a0 + 10) = uVar7;
        }
        Vec3_assign_f(a0 + 5, ar5_00, a2, a3);
        piVar3 = a0 + 0x28;
        if (cVar9 == '\0') {
            in_dr0 = (double)CONCAT44(0x41100000, (int)uVar7);
            *piVar3 = 0x41100000;
        } else {
            in_dr0 = -8.625516823227636e-251;
            piVar3[0] = 0x41100000;
            piVar3[1] = 0x8c03c314;
        }
        timer_start_94(a0, ar5_00, a2);
        a0[0x1a] = a0[0x1a] + 1;
    } else {
        ar5_00 = a1;
        if (iVar1 != 1) {
            if (iVar1 != 2) {
                return iVar1;
            }
            rand_float(a0, a1, a2);
            if (cVar9 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), a0[10]);
            } else {
                in_xd0 = *(u64 *)(a0 + 10);
            }
            if (cVar8 == '\0') {
                fVar5 = SUB84(in_dr0, 0) * (float)((u64)in_dr0 >> 0x20);
            } else {
                fVar5 = SUB84(in_dr0 * in_dr0, 0);
            }
            if (cVar9 == '\0') {
                a0[10] = (int)fVar5;
                fVar5 = (float)a0[10];
            } else {
                *(u64 *)(a0 + 10) = in_xd0;
            }
            if (cVar9 == '\0') {
                uVar7 = CONCAT44(0x3dcccccd, fVar5);
            } else {
                uVar7 = 0x803dcccccd;
            }
            if (cVar8 != '\0' || (float)(uVar7 >> 0x20) <= (float)uVar7) {
                return (int)&g_8c0b54e8;
            }
            if (cVar9 == '\0') {
                a0[10] = 0;
            } else {
                *(u64 *)(a0 + 10) = uVar7 & 0xffffffff;
            }
            piVar3 = a0 + 0x20;
            Vec3_assign(a0 + 5, piVar3, a2, a3);
            a0[0x1a] = 0;
            uVar2 = (**(code **)(*a0 + 0x2c))(a0, piVar3, a2, a3);
            return uVar2;
        }
    }
    uVar4 = SUB84(in_dr0, 0);
    if (a1 == 0) {
        timer_stop_94(a0, ar5_00, a2, a3);
        uVar7 = (u64)uVar4;
        if (cVar9 == '\0') {
            a0[0x28] = 0;
        } else {
            *(u64 *)(a0 + 0x28) = uVar7;
        }
        Vec3_length_sq(a0 + 1, ar5_00, a2, a3);
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(0x3f4ccccd, (int)(uVar7 >> 0x20));
            uVar7 = in_xd0;
        } else {
            dVar6 = 0.0046875001760781744;
        }
        if (cVar8 == '\0') {
            fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 * dVar6, 0);
        }
        if (cVar9 == '\0') {
            a0[10] = (int)fVar5;
        } else {
            *(u64 *)(a0 + 10) = uVar7;
        }
        a1 = 0x68;
        a0[0x1a] = a0[0x1a] + 1;
    } else if ((a1 == 1) || (a1 == 2)) {
        a0[0x1a] = 0;
        if (cVar9 == '\0') {
            a0[10] = 0;
        } else {
            *(u64 *)(a0 + 10) = (u64)in_dr0 & 0xffffffff;
        }
        if (cVar9 == '\0') {
            a0[0x28] = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)in_dr0 & 0xffffffff;
        }
        a1 = timer_stop_94(a0, ar5_00, a2, a3);
    }
    return a1;
}

/*
 * game_vec_0b54f4  0x8c0b54f4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0b54f4(int a0, u32 a1, int a2, u32 a3) {
    double dVar1;
    u32 uVar2;
    u8 *ar5_00;
    int ar6_00;
    float in_fr1;
    double dVar3;
    float fVar5;
    u64 uVar4;
    float fVar6;
    u32 in_fr14;
    u64 in_xd0;
    char cVar7;
    char cVar8;
    float fStack_e0;
    float fStack_dc;
    u32 auStack_d8[4];
    u8 auStack_c8[16];
    u8 auStack_b8[12];
    u8 auStack_ac[16];
    u8 auStack_9c[12];
    u8 auStack_90[16];
    u8 auStack_80[12];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[4];
    double dStack_20;

    cVar8 = '\0';
    cVar7 = '\0';
    uVar2 = a1;
    ar6_00 = a2;
    Vec3_assign_f(a0 + 0x200, a1, a2, a3);
    if (cVar8 == '\0') {
        fStack_dc = 0.0;
    } else {
        auStack_d8[0] = 0;
        fStack_dc = in_fr1;
    }
    fVar6 = 1.0;
    Vec3_ctor_zero(auStack_24, uVar2, ar6_00);
    Vec3_ctor_zero(auStack_34, uVar2, ar6_00);
    Vec3_ctor_zero(auStack_44, uVar2, ar6_00);
    Vec3_ctor_zero(auStack_54, uVar2, ar6_00);
    if ((*(int *)(a2 + 0x68) == 0) || (-1 < (int)((u32) * (u8 *)(a0 + 0x1fc) << 0x1e))) {
        if ((*(int *)(a2 + 0x88) != 0) && ((int)((u32) * (u8 *)(a0 + 0x1fc) << 0x1b) < 0)) {
            *(u32 *)(a0 + 0x1d4) = 2;
        }
        Vec3_dtor(auStack_54, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_44, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
        uVar2 = Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
    } else {
        *(u32 *)(a0 + 0x1d4) = 1;
        if (cVar8 == '\0') {
            fVar6 = *(float *)(*(int *)(a2 + 0x68) + 0x158);
        }
        Vec3_assign(auStack_24, *(int *)(a2 + 0x68) + 4, ar6_00, a3);
        dVar3 = dStack_20;
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44(dStack_20._0_4_, in_fr1);
        }
        if (cVar7 == '\0') {
            dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) + fVar6, SUB84(dVar3, 0));
        } else {
            dVar3 = dVar3 + (double)CONCAT44(in_fr14, fVar6);
        }
        dVar1 = dVar3;
        if (cVar8 == '\0') {
            dStack_20 = (double)CONCAT44(dStack_20._4_4_, (int)((u64)dVar3 >> 0x20));
            dVar1 = dStack_20;
        }
        dStack_20 = dVar1;
        Vec3_sub(a1, auStack_24, ar6_00, a3, auStack_64);
        Vec3_assign(a0 + 0x200, auStack_64, ar6_00, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_64, 0xffffffff, ar6_00, a3);
        Vec3_length_sq(a0 + 0x200, uVar2, ar6_00, a3);
        fVar5 = (float)((u64)dVar3 >> 0x20);
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44(fVar5, *(u32 *)(a0 + 0x48));
            fStack_e0 = fVar5;
        } else {
            fStack_e0 = SUB84(dVar3, 0);
            in_xd0 = *(u64 *)(a0 + 0x48);
            fStack_dc = fVar5;
        }
        if (cVar7 == '\0') {
            fVar6 = SUB84(dVar3, 0) + fVar6;
        } else {
            fVar6 = SUB84(dVar3 + (double)CONCAT44(in_fr14, fVar6), 0);
        }
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44(fStack_e0, fVar6);
        } else {
            dVar3 = (double)CONCAT44(fStack_dc, fStack_e0);
        }
        if (cVar7 == '\0') {
            fVar6 = SUB84(dVar3, 0) - (float)((u64)dVar3 >> 0x20);
        } else {
            fVar6 = SUB84(dVar3 - dVar3, 0);
        }
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44(0x3dcccccd, fVar6);
        } else {
            dVar3 = -7.93713999303812e-251;
        }
        if (cVar7 == '\0') {
            fVar6 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
        } else {
            fVar6 = SUB84(dVar3 * dVar3, 0);
        }
        fStack_dc = fVar6;
        if (cVar8 != '\0') {
            fStack_dc = (float)in_xd0;
            auStack_d8[0] = (u32)((u64)in_xd0 >> 0x20);
        }
        if (cVar7 == '\0' && fVar6 < 0.0) {
            if (cVar8 == '\0') {
                fStack_dc = 0.0;
            } else {
                auStack_d8[0] = 0;
                fStack_dc = fVar6;
            }
        }
        uVar4 = (u64)(u32)fVar6;
        Vec3_length(a0 + 0x200, uVar2, ar6_00, a3);
        Vec3_scale_assign(a0 + 0x200, &fStack_dc);
        Vec3_assign(auStack_34, a1, ar6_00, a3);
        Vec3_assign(auStack_44, *(int *)(a2 + 0x68) + 4, ar6_00, a3);
        Vec3_sub(auStack_44, auStack_34, ar6_00, a3, auStack_74);
        Vec3_assign(auStack_54, auStack_74, ar6_00, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_74, 0xffffffff, ar6_00, a3);
        Vec3_set_xyz(auStack_80, uVar2, ar6_00, a3);
        Vec3_vec_023484(auStack_54, auStack_80, ar6_00, a3, auStack_90);
        Vec3_assign(auStack_54, auStack_90, ar6_00, a3);
        Vec3_dtor(auStack_90, 0xffffffff, ar6_00, a3);
        object_dtor_delete(auStack_80, 0xffffffff, ar6_00, a3);
        ar5_00 = auStack_54;
        Vec3_calc_022d14(a0 + 0x14, ar5_00);
        if (cVar8 == '\0') {
            uVar4 = uVar4 >> 0x20;
        }
        if (cVar7 == '\0' && 0.0 < (float)uVar4) {
            Vec3_set_xyz(auStack_b8, ar5_00, ar6_00, a3);
            Vec3_vec_023484(a0 + 0x14, auStack_b8, ar6_00, a3, auStack_c8);
            Vec3_assign(a0 + 0x14, auStack_c8, ar6_00, a3);
            Vec3_dtor(auStack_c8, 0xffffffff, ar6_00, a3);
            object_dtor_delete(auStack_b8, 0xffffffff, ar6_00, a3);
        } else {
            Vec3_set_xyz(auStack_9c, ar5_00, ar6_00, a3);
            Vec3_vec_023484(a0 + 0x14, auStack_9c, ar6_00, a3, auStack_ac);
            Vec3_assign(a0 + 0x14, auStack_ac, ar6_00, a3);
            Vec3_dtor(auStack_ac, 0xffffffff, ar6_00, a3);
            object_dtor_delete(auStack_9c, 0xffffffff, ar6_00, a3);
            Vec3_scale_assign(auStack_54, &g_8c13bacc);
        }
        Vec3_scale(auStack_54, &g_8c13bad0, ar6_00, a3, auStack_d8);
        Vec3_add_assign(a0 + 0x200, auStack_d8);
        Vec3_dtor(auStack_d8, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_54, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_44, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
        uVar2 = Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
    }
    return uVar2;
}

/*
 * get_field_314_0b58d0  0x8c0b58d0
 * called by: game_uses_get_field_314_0ae270, game_uses_rand_0ae84c
 */
u32 get_field_314_0b58d0(int a0) {
    return *(u32 *)(0x314 + a0);
}

/*
 * set_field_314  0x8c0b58dc
 * called by: game_load_0ae2b8
 */
int set_field_314(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x314;
    *(u32 *)(0x314 + a0) = a1;
    return iVar1;
}

/*
 * Class_12b2ac_m7_0b58e8  0x8c0b58e8
 */
int Class_12b2ac_m7_0b58e8(int a0) {
    int iVar1;

    game_uses_CAnimBody_SetAnimation_031684(a0);
    iVar1 = 0x348;
    *(u32 *)(0x348 + a0) = 0;
    return iVar1;
}

/*
 * static_init_vec3s_286d88  0x8c0b590c
 * static initialiser: builds 4 global Vec3 constants (8c286d88..8c286dac) and registers their destructors, then more
 * set-up
 */
u32 static_init_vec3s_286d88(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;
    u8 auStack_34[24];
    u8 auStack_1c[28];

    uVar1 = Vec3_ctor_xyz((&DATA_8c126318), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c286d88;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c286d88, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126328), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c286d94;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c286d94, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126338), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c286da0;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c286da0, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126348), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c286dac;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c286dac, a3);
    uVar1 = set_6_floats(auStack_1c);
    copy_6_words(0x8c286dbc, uVar1);
    uVar1 = set_6_floats(auStack_34);
    uVar2 = copy_6_words(0x8c286dbc + 0x18, uVar1);
    return uVar2;
}

/*
 * Class_12b2e8_ctor  0x8c0b5a30
 * Class_129c70_ctor with vtable 8c12b2e8 (Squid state)
 * called by: CSquid_Init
 */
u32 *Class_12b2e8_ctor(u32 *a0, u32 a1, u32 a2) {
    Class_129c70_ctor(a0, a1, a2);
    *a0 = (&DATA_8c12b2e8);
    *(u8 *)(0x9c + (int)a0) = 0;
    *(u8 *)(0xa4 + (int)a0) = 0;
    *(u8 *)(0x9d + (int)a0) = 0;
    *(u32 *)(0xa8 + (int)a0) = 0;
    *(u32 *)(0xa0 + (int)a0) = 0;
    return a0;
}

/*
 * Class_12b2e8_dtor  0x8c0b5a88
 * stores the vtable 0x8c12b2e8
 * called by: CAnimal_m0_0aca4c
 */
u32 *Class_12b2e8_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b2e8;
        ar5_00 = 0;
        Class_129c70_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b2e8_m1_0b5ad0  0x8c0b5ad0
 */
u32 Class_12b2e8_m1_0b5ad0(int a0, int *a1, int *a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    u8 *puVar5;
    u8 *puVar6;
    int iVar7;
    u8 *puVar8;
    int *piVar9;
    int *piVar10;
    int *a6;
    int in_stack_ffffff6c;
    u16 uVar11;
    u8 auStack_48[32];
    u8 auStack_28[20];

    Vec3_ctor_zero(auStack_28, Vec3_ctor_zero, a2);
    puVar8 = auStack_48;
    puVar5 = &g_8c13bbf4;
    iVar7 = 0x10;
    do {
        puVar6 = puVar5 + 1;
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar8[1] = *puVar6;
        puVar8 = puVar8 + 2;
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = 0;
    piVar9 = a1;
    piVar10 = a2;
    Class_12b2e8_sequence_step(a0, a1, a2, a3);
    uVar11 = (u16)((u32)in_stack_ffffff6c >> 0x10);
    if (*(int *)(a0 + 0x40) != 2) {
        uVar1 = get_field_a4_s16(a2[6], piVar9);
        piVar9 = (int *)0xf;
        iVar3 = libgcc_divide_helper_01031c(uVar1 & 0xffff, 0xf, piVar10);
        if ((iVar3 == 0) && (*(int *)(a0 + 0x40) == 0)) {
            uVar1 = get_field_a4_s16(a2[6], piVar9);
            in_stack_ffffff6c = uVar1 << 0x10;
            if (*(u32 *)(a0 + 0xa8) != (uVar1 & 0xffff)) {
                *(u32 *)(a0 + 0xa0) = 1;
            }
        }
        if ((((*(int *)(a0 + 0x6c) == 0) && (*(int *)(a0 + 0x40) == 0)) && (*(char *)(a0 + 0x98) == '\x03')) &&
            ((piVar9 = a2, iVar3 = game_target_in_view_box(a0, a2, piVar10, a3),
              iVar3 == 1 && (*(int *)(a0 + 0xa0) == 1)))) {
            piVar9 = a1;
            piVar10 = a2;
            uVar2 = Class_12b2e8_vec_0b67cc(a0, a1, a2, a3);
            *(u32 *)(a0 + 0x6c) = uVar2;
        }
        uVar11 = (u16)((u32)in_stack_ffffff6c >> 0x10);
        if (*(int *)(a0 + 0xa0) == 1) {
            a6 = NULL;
            while (true) {
                piVar9 = (int *)0x1;
                iVar3 = (**(code **)(*a1 + 0x11c))(a1, 1, piVar10, a3);
                uVar11 = (u16)((u32)in_stack_ffffff6c >> 0x10);
                if (iVar3 <= (int)a6)
                    break;
                uVar2 = 1;
                piVar10 = a6;
                iVar3 = (**(code **)(*a1 + 0x100))(a1, 1, a6, a3);
                iVar3 = (**(code **)(*(int *)(iVar3 + 8) + 0xb4))(iVar3, uVar2, piVar10, a3);
                if (iVar3 == 1) {
                    iVar7 = iVar7 + 1;
                }
                a6 = (int *)((int)a6 + 1);
            }
            if (((iVar7 == 0) && (*(char *)(a0 + 0x9c) < '\x04')) && ('\x01' < *(char *)(a0 + 0x98))) {
                *(u8 *)(a0 + 0x98) = 1;
            }
        }
        if ((*(int *)(a0 + 0x6c) != 0) && (*(int *)(a0 + 4) != 6)) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x74))(*(int *)(a0 + 0x6c), piVar9, piVar10, a3);
            *(u32 *)(a0 + 0x40) = 4;
            *(u32 *)(a0 + 4) = 6;
            *(u32 *)(a0 + 0xc) = 0;
            piVar9 = (int *)0x2bb;
            list5_push(a0, 699);
            *(u32 *)(a0 + 0xa0) = 0;
        }
    }
    uVar1 = get_field_a4_s16(a2[6], piVar9);
    uVar4 = CONCAT22(uVar11, (short)uVar1);
    *(u32 *)(a0 + 0xa8) = uVar1 & 0xffff;
    piVar9 = a2;
    Class_129c70_uses_get_field_4_02f20c(a0, a2, piVar10, a3);
    uVar2 = get_field_4_05eed8(a0);
    piVar9 = a1;
    piVar10 = a2;
    Class_12b2e8_uses_set_field_38_0b61bc(a0, a1, a2, uVar2);
    iVar7 = (int)*(char *)(a0 + 0x98);
    if ((iVar7 < 8) && (-1 < iVar7)) {
        switch (iVar7) {
        default:
            piVar10 = a2;
            iVar7 = Class_12b2e8_vec_0b67cc(a0, a1, a2, uVar2);
            piVar9 = a1;
            if ((iVar7 == 0) || (piVar9 = a2, iVar7 = game_target_in_view_box(a0, a2, piVar10, uVar2), iVar7 != 1)) {
                if (*(int *)(a0 + 0x40) != 5) {
                    *(u32 *)(a0 + 8) = 0x5f;
                    *(u32 *)(a0 + 0xc) = 0;
                    *(u32 *)(a0 + 4) = 0xd;
                    *(u32 *)(a0 + 0x40) = 8;
                    g_8c13bbe8 = 8;
                }
            } else {
                *(u32 *)(a0 + 8) = 0x5f;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 4) = 0xd;
                *(u32 *)(a0 + 0x40) = 5;
                g_8c13bbe8 = 5;
                piVar10 = (int *)0x1b;
                piVar9 = (int *)0x6;
                recent5_push_unique(a2[6], 6, 0x1b);
                if ('\0' < *(char *)(a0 + 0x9d)) {
                    *(u8 *)(a0 + 0x98) = 2;
                }
            }
            break;
        case 2:
            if (*(char *)(a0 + 0x9d) < '\x01') {
                *(u8 *)(a0 + 0x9d) = 1;
            }
            piVar10 = a2;
            iVar7 = Class_12b2e8_vec_0b67cc(a0, a1, a2, uVar2);
            if (((iVar7 == 0) || (*(int *)(a0 + 0x40) == 6)) ||
                (a1 = a2, iVar7 = game_target_in_view_box(a0, a2, piVar10, uVar2), iVar7 != 1)) {
                piVar9 = a1;
                if (*(int *)(a0 + 0x40) != 6) {
                    *(u32 *)(a0 + 8) = 0x5f;
                    *(u32 *)(a0 + 0xc) = 0;
                    *(u32 *)(a0 + 4) = 0xd;
                    *(u32 *)(a0 + 0x40) = 8;
                    g_8c13bbe8 = 8;
                }
            } else {
                *(u32 *)(a0 + 0x40) = 6;
                g_8c13bbe8 = 6;
                *(u32 *)(a0 + 8) = 0x5f;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 4) = 0xd;
                *(char *)(a0 + 0x9d) = *(char *)(a0 + 0x9d) + '\x01';
                piVar9 = a1;
            }
            break;
        case 3:
            break;
        case 4:
        case 6:
            *(u32 *)(a0 + 0x40) = 3;
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 4) = 0xd;
            g_8c13bbe8 = 3;
            iVar7 = (**(code **)(*a1 + 0x11c))(a1, 1, piVar10, uVar2);
            if (iVar7 == 0) {
                piVar10 = (int *)0x1b;
                recent5_push_unique(a2[6], 8, 0x1b);
            }
            piVar9 = (int *)0x1;
            set_field_18(a2[1] + 0xa8, 1);
            break;
        case 5:
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 0x40) = 7;
            g_8c13bbe8 = 7;
            piVar9 = (int *)0x1;
            set_field_18(a2[1] + 0xa8, 1);
            break;
        case 7:
            *(u32 *)(a0 + 8) = 0x5f;
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 4) = 0xd;
            *(u32 *)(a0 + 0x40) = 2;
            g_8c13bbe8 = 2;
            piVar10 = (int *)0x1b;
            piVar9 = (int *)0x9;
            recent5_push_unique(a2[6], 9, 0x1b);
        }
    }
    Class_12b2e8_uses_get_field_8_0b65b0(a0);
    set_field_130(a2[2]);
    iVar7 = get_field_124_027930(a2[2], piVar9, piVar10, uVar2);
    iVar3 = get_field_40_05eea0(a0);
    if (iVar7 != iVar3) {
        uVar4 = get_field_40_05eea0(a0);
        piVar10 = (int *)0x1;
        timer_uses_reset_fields_2c_6c_031b08(a2[2], uVar4, 1, uVar2);
    }
    uVar2 = Vec3_dtor(auStack_28, 0xffffffff, piVar10, uVar2);
    return uVar2;
}

/*
 * Class_12b2e8_m2_0b6028  0x8c0b6028
 */
u32 Class_12b2e8_m2_0b6028(int a0, u32 a1, int a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u8 *puVar4;
    u8 *puVar5;
    u8 *puVar6;
    int iVar7;
    u8 auStack_44[32];
    u8 auStack_24[20];

    uVar2 = a1;
    iVar7 = a2;
    Vec3_ctor_zero(auStack_24, a1, a2);
    puVar6 = auStack_44;
    puVar4 = &g_8c13bc14;
    iVar3 = 0x10;
    do {
        puVar5 = puVar4 + 1;
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 2;
        puVar6[1] = *puVar5;
        puVar6 = puVar6 + 2;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar1 = get_field_a4_s16(*(u32 *)(a2 + 0x18), uVar2);
    *(u32 *)(a0 + 0xa8) = uVar1 & 0xffff;
    iVar3 = a2;
    Class_12b2e8_sequence_step(a0, a1, a2, a3);
    iVar7 = a2;
    Class_129c70_uses_get_field_4_02f20c(a0, a2, iVar3, a3);
    uVar2 = get_field_4_05eed8(a0);
    iVar7 = a2;
    Class_12b2e8_uses_set_field_38_0b61bc(a0, a1, a2, uVar2);
    iVar3 = (int)*(char *)(a0 + 0x98);
    if ((iVar3 < 8) && (-1 < iVar3)) {
        switch (iVar3) {
        case 0:
            *(u32 *)(a0 + 0x40) = 8;
            g_8c13bbe8 = 8;
            break;
        case 4:
        case 6:
            *(u32 *)(a0 + 0x40) = 3;
            g_8c13bbe8 = 3;
            break;
        case 5:
            *(u32 *)(a0 + 0x40) = 7;
            g_8c13bbe8 = 7;
            break;
        case 7:
            *(u32 *)(a0 + 0x40) = 2;
            g_8c13bbe8 = 2;
        }
    }
    Class_12b2e8_uses_get_field_8_0b65b0(a0);
    set_field_130(*(u32 *)(a2 + 8));
    iVar3 = get_field_124_027930(*(u32 *)(a2 + 8), a1, iVar7, uVar2);
    if (*(int *)(a0 + 0x40) != iVar3) {
        iVar7 = 1;
        timer_uses_reset_fields_2c_6c_031b08(*(u32 *)(a2 + 8), *(u32 *)(a0 + 0x40), 1, uVar2);
    }
    uVar2 = Vec3_dtor(auStack_24, 0xffffffff, iVar7, uVar2);
    return uVar2;
}

/*
 * Class_12b2e8_uses_set_field_38_0b61bc  0x8c0b61bc
 * area name: only called from Class_12b2e8 methods; behaviour name: its main named callee is set_field_38_02f404
 * called by: Class_12b2e8_m1_0b5ad0, Class_12b2e8_m2_0b6028
 */
u32 Class_12b2e8_uses_set_field_38_0b61bc(int a0, u32 a1, int *a2, int a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    int *ar6_00;
    u32 ar6_01;

    uVar3 = a1;
    ar6_00 = a2;
    iVar2 = a3;
    if (*(int *)(a0 + 0x38) == 2) {
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13bb4c + *(int *)(a0 + 0xc) * 4 + a3 * 0xc);
        Class_12b2e8_uses_set_field_38_0b63e0(a0, a1, a2);
        uVar3 = 1;
        set_field_38_02f404(a0, 1);
    }
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 != 0) {
        if (iVar1 == 1) {
            set_field_38_02f404(a0, 3);
            game_float_calc_02fdd8(a0, a1);
        } else if (iVar1 == 2) {
            iVar2 = (**(code **)(*(int *)(*a2 + 8) + 0xb4))(*a2, uVar3, ar6_00, a3);
            if (iVar2 == 1) {
                mask_74_fffffffe(*a2);
            }
        } else if (iVar1 == 4) {
            iVar2 = Class_129c70_uses_get_field_6c_02f414(a0, uVar3, ar6_00, a3);
            if (iVar2 == 1) {
                if (*(int *)(a0 + 0x88) == 1) {
                    ar6_01 = 0x1b;
                    uVar3 = 7;
                    recent5_push_unique(a2[6], 7, 0x1b);
                    uVar3 = get_field_6c_02f46c(*(u32 *)(a0 + 0x6c));
                    take_from_field_6c(*(u32 *)(a0 + 0x6c), uVar3, ar6_01, a3);
                    *(char *)(a0 + 0x9c) = *(char *)(a0 + 0x9c) + '\x01';
                    if (*(int *)(a0 + 0x6c) != 0) {
                        (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), uVar3, ar6_01, a3);
                        *(u32 *)(a0 + 0x6c) = 0;
                    }
                    *(u32 *)(a0 + 0x88) = 0;
                }
            } else {
                *(u32 *)(a0 + 0x38) = 2;
            }
        }
    }
    return 1;
}

/*
 * Class_12b2e8_sequence_step  0x8c0b6328
 * at the end of a step advances the three-step sequence from the table at 8c13bb4c (row +4); step value 9 or the third
 * step ends it called by: Class_12b2e8_m1_0b5ad0, Class_12b2e8_m2_0b6028
 */
int Class_12b2e8_sequence_step(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar6_00;
    int in_stack_ffffffe4;

    if (*(int *)(a0 + 0x3c) == 0) {
        ar6_00 = a2;
        Class_12b2e8_state_switch_0b6440(a0, a1, a2, a3);
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + 1;
        in_stack_ffffffe4 = *(int *)(a0 + 0xc);
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13bb4c + in_stack_ffffffe4 * 4 + *(int *)(a0 + 4) * 0xc);
        if ((*(int *)(a0 + 0x40) == 9) || (*(int *)(a0 + 0xc) == 3)) {
            *(u32 *)(a0 + 0xc) = 0;
            set_field_38_02f404(a0, 0);
            a2 = ar6_00;
        } else {
            set_field_38_02f404(a0, 3);
            Class_12b2e8_uses_set_field_38_0b63e0(a0, a1, a2);
        }
    }
    iVar1 = *(int *)(a0 + 0x3c);
    if (iVar1 == 2) {
        iVar1 = set_field_38_02f404(a0, 2);
    }
    return iVar1;
}

/*
 * Class_12b2e8_uses_set_field_38_0b63e0  0x8c0b63e0
 * area name: only called from Class_12b2e8 methods; behaviour name: its main named callee is set_field_38_02f404
 * called by: Class_12b2e8_sequence_step, Class_12b2e8_uses_set_field_38_0b61bc
 */
int Class_12b2e8_uses_set_field_38_0b63e0(int a0, u32 a1, u32 a2) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 1) {
        iVar1 = game_uses_rand_0b6604(a0, a1, a2);
    } else if (((iVar1 != 2) && (iVar1 == 4)) && (iVar1 = *(int *)(a0 + 0x6c), iVar1 == 0)) {
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + -1;
        iVar1 = set_field_38_02f404(a0, 2);
    }
    return iVar1;
}

/*
 * Class_12b2e8_state_switch_0b6440  0x8c0b6440
 * area name: only called from Class_12b2e8 methods; behaviour name: dispatches on a state or mode value (switch)
 * called by: Class_12b2e8_sequence_step
 */
u8 *Class_12b2e8_state_switch_0b6440(int a0, u32 a1, int a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 uVar3;
    u32 ar6_00;

    iVar2 = *(int *)(a0 + 0x40);
    puVar1 = (u8 *)0x7;
    if ((iVar2 < 8) && (puVar1 = (u8 *)0x2, 1 < iVar2)) {
        puVar1 = (&switchD_8c0b646e::switchdataD_8c0b6474)[iVar2 + -2];
        switch (iVar2) {
        case 2:
            puVar1 = *(u8 **)(a0 + 0x8c);
            if (puVar1 == (u8 *)0x1) {
                puVar1 = (u8 *)0x8c;
                *(u32 *)(a0 + 0x8c) = 0;
            }
            break;
        case 4:
            puVar1 = (u8 *)Class_129c70_uses_get_field_6c_02f414(a0, a1, a2, a3);
            if ((puVar1 == (u8 *)0x1) && (puVar1 = *(u8 **)(a0 + 0x88), puVar1 == (u8 *)0x1)) {
                ar6_00 = 0x1b;
                uVar3 = 7;
                recent5_push_unique(*(u32 *)(a2 + 0x18), 7, 0x1b);
                uVar3 = get_field_6c_02f46c(*(u32 *)(a0 + 0x6c));
                take_from_field_6c(*(u32 *)(a0 + 0x6c), uVar3, ar6_00, a3);
                *(char *)(a0 + 0x9c) = *(char *)(a0 + 0x9c) + '\x01';
                if (*(char *)(a0 + 0x9c) == '\b') {
                    uVar3 = 1;
                    set_field_18(*(int *)(a2 + 4) + 0xa8, 1);
                }
                if (*(int *)(a0 + 0x6c) != 0) {
                    (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), uVar3, ar6_00, a3);
                    *(u32 *)(a0 + 0x6c) = 0;
                }
                puVar1 = (u8 *)0x88;
                *(u32 *)(a0 + 0x88) = 0;
            }
            break;
        case 5:
            puVar1 = (u8 *)0x9d;
            *(char *)(a0 + 0x9d) = *(char *)(a0 + 0x9d) + '\x01';
            break;
        case 6:
            puVar1 = (u8 *)0x2;
            if ('\x01' < *(char *)(a0 + 0x9d)) {
                *(u8 *)(a0 + 0x98) = 3;
                puVar1 = (u8 *)CAnimal_calls_test_0c4e2c(a0, a1, a2, a3);
            }
            break;
        case 7:
            *(u8 *)(a0 + 0x98) = 6;
            puVar1 = (u8 *)CAnimal_calls_test_0c4e2c(a0, a1, a2, a3);
        }
    }
    return puVar1;
}

/*
 * Class_12b2e8_uses_get_field_8_0b65b0  0x8c0b65b0
 * area name: only called from Class_12b2e8 methods; behaviour name: its main named callee is get_field_8_066620
 * called by: Class_12b2e8_m1_0b5ad0, Class_12b2e8_m2_0b6028
 */
u32 *Class_12b2e8_uses_get_field_8_0b65b0(int a0) {
    u32 *puVar1;

    if (*(int *)(a0 + 4) == 2) {
        get_field_8_066620(a0);
        puVar1 = &g_8c0b65fc;
    } else {
        get_field_8_066620(a0);
        puVar1 = &g_8c0b6600;
    }
    return puVar1;
}

/*
 * game_uses_rand_0b6604  0x8c0b6604
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: Class_12b2e8_uses_set_field_38_0b63e0
 */
u32 game_uses_rand_0b6604(int a0, int *a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *a5;
    u32 *a6;
    u32 *a7;
    float fVar4;
    double in_dr0;
    double dVar5;
    float fVar6;
    u32 in_fr3;
    u32 uVar7;
    double dVar8;
    int iVar9;
    char cVar10;
    char cVar11;
    u64 uStack_3c;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u8 auStack_1c[20];

    cVar11 = '\0';
    cVar10 = '\0';
    Vec3_ctor_zero(auStack_1c, a1, a2);
    uStack_20 = 0;
    a7 = &uStack_2c;
    a6 = &uStack_28;
    a5 = &uStack_24;
    (**(code **)(*a1 + 0x120))(a1, a5, a6, a7);
    iVar9 = a0;
    iVar1 = get_field_4_05eed8(a0);
    if ((iVar1 != 1) && (iVar1 == 8)) {
        if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(uStack_24, in_fr3);
            dVar5 = (double)CONCAT44(0x3dcccccd, uStack_24);
        } else {
            dVar8 = (double)CONCAT44(uStack_20, uStack_24);
            dVar5 = 1.3411048210842936e-08;
        }
        if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20),
                                     SUB84(dVar8, 0));
        } else {
            dVar8 = dVar8 - dVar5 * dVar5;
        }
        uStack_24 = SUB84(dVar8, 0);
        uVar3 = (u32)((u64)dVar8 >> 0x20);
        if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(uStack_28, uStack_24);
            dVar5 = (double)CONCAT44(0x3e4ccccd, uStack_28);
            uStack_24 = uVar3;
        } else {
            dVar8 = (double)CONCAT44(uStack_24, uStack_28);
            dVar5 = -7.532505548438758e-251;
            uStack_20 = uVar3;
        }
        if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20),
                                     SUB84(dVar8, 0));
        } else {
            dVar8 = dVar8 - dVar5 * dVar5;
        }
        uStack_28 = SUB84(dVar8, 0);
        uVar3 = (u32)((u64)dVar8 >> 0x20);
        if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(uStack_2c, uStack_28);
            dVar5 = (double)CONCAT44(0x3dcccccd, uStack_2c);
            uStack_28 = uVar3;
        } else {
            dVar8 = (double)CONCAT44(uStack_28, uStack_2c);
            dVar5 = 1.3411048210842936e-08;
            uStack_24 = uVar3;
        }
        if (cVar10 == '\0') {
            fVar6 = (float)((u64)dVar5 >> 0x20);
            fVar4 = SUB84(dVar5, 0) * fVar6;
            dVar5 = (double)CONCAT44(fVar6, fVar4);
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - fVar4, SUB84(dVar8, 0));
        } else {
            dVar5 = dVar5 * dVar5;
            dVar8 = dVar8 - dVar5;
        }
        uVar3 = SUB84(dVar5, 0);
        uVar2 = (u32)((u64)dVar8 >> 0x20);
        uStack_2c = uVar2;
        if (cVar11 != '\0') {
            uStack_2c = SUB84(dVar8, 0);
            uStack_28 = uVar2;
        }
        uVar2 = rand();
        uVar7 = SUB84(dVar8, 0);
        if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(uStack_24, uVar3);
        } else {
            dVar8 = (double)CONCAT44(uStack_20, uStack_24);
        }
        if (cVar10 == '\0') {
            iVar9 = (int)(float)((u64)dVar8 >> 0x20);
        } else {
            iVar9 = (int)dVar8;
        }
        iVar1 = libgcc_divide_helper_01031c(uVar2, iVar9, a6);
        if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44((float)iVar1, uVar7);
        } else {
            dVar8 = (double)iVar1;
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(0x40000000, uStack_24);
        } else {
            dVar5 = 8.15376882678406e-312;
        }
        if (cVar10 == '\0') {
            fVar6 = (float)((u64)dVar5 >> 0x20);
            fVar4 = SUB84(dVar5, 0) / fVar6;
            dVar5 = (double)CONCAT44(fVar6, fVar4);
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - fVar4, SUB84(dVar8, 0));
        } else {
            dVar5 = dVar5 / dVar5;
            dVar8 = dVar8 - dVar5;
        }
        if (cVar11 == '\0') {
            *(int *)(a0 + 0x28) = (int)((u64)dVar8 >> 0x20);
        } else {
            *(double *)(a0 + 0x28) = dVar8;
        }
        uVar3 = rand();
        uVar2 = SUB84(dVar8, 0);
        (**(code **)(*a1 + 0x180))(a1, iVar9, a6, a7);
        if (cVar11 == '\0') {
            uStack_3c = (double)CONCAT44(uVar3, (int)((u64)dVar5 >> 0x20));
            dVar8 = (double)CONCAT44(uStack_28, SUB84(dVar5, 0));
        } else {
            dVar8 = (double)CONCAT44(uStack_24, uStack_28);
            uStack_3c = dVar5;
        }
        if (cVar10 == '\0') {
            iVar9 = (int)(float)((u64)dVar8 >> 0x20);
        } else {
            iVar9 = (int)dVar8;
        }
        uVar3 = uStack_3c._4_4_;
        iVar1 = libgcc_divide_helper_01031c(uStack_3c._4_4_, iVar9, a6);
        if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44((float)iVar1, uVar2);
        } else {
            dVar8 = (double)iVar1;
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(0x42c80000, (u32)uStack_3c);
        } else {
            dVar5 = 6.28664306982812e-312;
        }
        if (cVar10 == '\0') {
            fVar6 = (float)((u64)dVar5 >> 0x20);
            fVar4 = SUB84(dVar5, 0) / fVar6;
            dVar5 = (double)CONCAT44(fVar6, fVar4);
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) * fVar4, SUB84(dVar8, 0));
        } else {
            dVar5 = dVar5 / dVar5;
            dVar8 = dVar8 * dVar5;
        }
        uVar2 = SUB84(dVar5, 0);
        if (cVar11 == '\0') {
            *(int *)(a0 + 0x2c) = (int)((u64)dVar8 >> 0x20);
        } else {
            *(double *)(a0 + 0x2c) = dVar8;
        }
        uVar3 = rand();
        uVar7 = SUB84(dVar8, 0);
        if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(uStack_2c, uVar2);
        } else {
            dVar8 = (double)CONCAT44(uStack_28, uStack_2c);
        }
        if (cVar10 == '\0') {
            iVar9 = (int)(float)((u64)dVar8 >> 0x20);
        } else {
            iVar9 = (int)dVar8;
        }
        iVar9 = libgcc_divide_helper_01031c(uVar3, iVar9, a6);
        if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44((float)iVar9, uVar7);
        } else {
            dVar8 = (double)iVar9;
        }
        if (cVar11 == '\0') {
            in_dr0 = (double)CONCAT44(0x40000000, uStack_2c);
        } else {
            in_dr0 = 8.15376882678406e-312;
        }
        if (cVar10 == '\0') {
            fVar6 = (float)((u64)in_dr0 >> 0x20);
            fVar4 = SUB84(in_dr0, 0) / fVar6;
            in_dr0 = (double)CONCAT44(fVar6, fVar4);
            dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - fVar4, SUB84(dVar8, 0));
        } else {
            in_dr0 = in_dr0 / in_dr0;
            dVar8 = dVar8 - in_dr0;
        }
        if (cVar11 == '\0') {
            *(int *)(a0 + 0x30) = (int)((u64)dVar8 >> 0x20);
        } else {
            *(double *)(a0 + 0x30) = dVar8;
        }
    }
    (**(code **)(*a1 + 0x128))(a1, a0 + 0x28, a6, a7);
    if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(a0 + 0x2c));
    }
    if (cVar10 != '\0' || SUB84(in_dr0, 0) <= (float)((u64)in_dr0 >> 0x20)) {
        (**(code **)(*a1 + 0x128))(a1, a0 + 0x28, a6, a7);
        if (cVar11 == '\0') {
            *(int *)(a0 + 0x2c) = (int)((u64)in_dr0 >> 0x20);
        } else {
            *(double *)(a0 + 0x2c) = in_dr0;
        }
    }
    uVar3 = Vec3_dtor(auStack_1c, 0xffffffff, a6, a7);
    return uVar3;
}

/*
 * Class_12b2e8_vec_0b67cc  0x8c0b67cc
 * area name: only called from Class_12b2e8 methods; behaviour name: mostly calls vec functions
 * called by: Class_12b2e8_m1_0b5ad0
 */
u32 Class_12b2e8_vec_0b67cc(int a0, int *a1, u32 *a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int *ar5_00;
    u32 uVar3;
    u32 *ar6_00;
    u8 *ar6_01;
    u8 *ar7_00;
    u8 *puVar4;
    u32 in_fr1;
    double dVar5;
    float in_fr15;
    u32 in_fr14;
    bool bVar6;
    char cVar7;
    char cVar8;
    u8 auStack_c0[4];
    u8 auStack_bc[4];
    u8 auStack_b8[4];
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[12];
    u8 auStack_58[16];
    u8 auStack_48[12];
    u8 auStack_3c[16];
    u32 auStack_2c[5];

    cVar8 = '\0';
    cVar7 = '\0';
    ar5_00 = a1;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_2c, a1, a2);
    if (cVar8 == '\0') {
        in_fr15 = 50.0;
    }
    Vec3_ctor_xyz(auStack_3c, ar5_00, ar6_00, a3);
    if (cVar8 == '\0') {
        auStack_2c[0] = 0;
    } else {
        auStack_2c[3] = 0;
        auStack_2c[0] = in_fr1;
    }
    dVar5 = (double)(u64)in_fr1;
    auStack_2c[2] = 0;
    auStack_2c[1] = 0;
    ar7_00 = auStack_c0;
    ar6_01 = auStack_bc;
    puVar4 = auStack_b8;
    get_vec3_field_50(*a2, puVar4, ar6_01, ar7_00);
    Vec3_set_xyz(auStack_48, puVar4, ar6_01, ar7_00);
    vec3_copy_8c02b5fc(auStack_64, auStack_48, ar6_01);
    Vec3_vec_023484(auStack_3c, auStack_64, ar6_01, ar7_00, auStack_74);
    Vec3_ctor_copy(auStack_58, auStack_74, ar6_01, ar7_00);
    Vec3_dtor(auStack_74, 0xffffffff, ar6_01, ar7_00);
    object_dtor_delete(auStack_64, 0xffffffff, ar6_01, ar7_00);
    if (*(int *)(a0 + 0x6c) == 0) {
        for (puVar4 = NULL; iVar2 = (**(code **)(*a1 + 0x11c))(a1, 1, ar6_01, ar7_00), (int)puVar4 < iVar2;
             puVar4 = puVar4 + 1) {
            uVar3 = 1;
            ar6_01 = puVar4;
            uVar1 = (**(code **)(*a1 + 0x100))(a1, 1, puVar4, ar7_00);
            iVar2 = get_field_6c_02f46c(uVar1);
            if (iVar2 != 0) {
                Vec3_ctor_copy_wrap_02f670(*a2, uVar3, ar6_01, ar7_00, auStack_84);
                Vec3_add(auStack_84, auStack_58, ar6_01, ar7_00, auStack_94);
                uVar3 = 1;
                ar6_01 = puVar4;
                uVar1 = (**(code **)(*a1 + 0x100))(a1, 1, puVar4, ar7_00);
                Vec3_ctor_copy_wrap_02f670(uVar1, uVar3, ar6_01, ar7_00, auStack_a4);
                Vec3_sub(auStack_94, auStack_a4, ar6_01, ar7_00, auStack_b4);
                Vec3_assign(auStack_2c, auStack_b4, ar6_01, ar7_00);
                Vec3_dtor(auStack_b4, 0xffffffff, ar6_01, ar7_00);
                Vec3_dtor(auStack_a4, 0xffffffff, ar6_01, ar7_00);
                Vec3_dtor(auStack_94, 0xffffffff, ar6_01, ar7_00);
                uVar1 = 0xffffffff;
                Vec3_dtor(auStack_84, 0xffffffff, ar6_01, ar7_00);
                Vec3_length_sq(auStack_2c, uVar1, ar6_01, ar7_00);
                if (cVar7 == '\0') {
                    bVar6 = (float)((u64)dVar5 >> 0x20) < in_fr15;
                } else {
                    bVar6 = dVar5 < (double)CONCAT44(in_fr14, in_fr15);
                }
                if (bVar6) {
                    uVar1 = (**(code **)(*a1 + 0x100))(a1, 1, puVar4, ar7_00);
                    Vec3_dtor(auStack_58, 0xffffffff, puVar4, ar7_00);
                    object_dtor_delete(auStack_48, 0xffffffff, puVar4, ar7_00);
                    Vec3_dtor(auStack_3c, 0xffffffff, puVar4, ar7_00);
                    Vec3_dtor(auStack_2c, 0xffffffff, puVar4, ar7_00);
                    return uVar1;
                }
            }
        }
        Vec3_dtor(auStack_58, 0xffffffff, ar6_01, ar7_00);
        object_dtor_delete(auStack_48, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_3c, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_2c, 0xffffffff, ar6_01, ar7_00);
        uVar1 = 0;
    } else {
        uVar1 = *(u32 *)(a0 + 0x6c);
        Vec3_dtor(auStack_58, 0xffffffff, ar6_01, ar7_00);
        object_dtor_delete(auStack_48, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_3c, 0xffffffff, ar6_01, ar7_00);
        Vec3_dtor(auStack_2c, 0xffffffff, ar6_01, ar7_00);
    }
    return uVar1;
}

/*
 * game_update_fields_0b6af8  0x8c0b6af8
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 */
int game_update_fields_0b6af8(int a0, u8 *a1) {
    int iVar1;

    *(u8 *)(0x98 + a0) = *a1;
    iVar1 = 0x9c;
    *(char *)(0x9c + a0) = (char)*(u32 *)(a1 + 4);
    return iVar1;
}

/*
 * game_update_fields_0b6b10  0x8c0b6b10
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 */
int game_update_fields_0b6b10(int a0, u8 *a1) {
    char cVar1;

    *a1 = *(u8 *)(0x98 + a0);
    cVar1 = *(char *)(0x9c + a0);
    *(int *)(a1 + 4) = (int)cVar1;
    return (int)cVar1;
}

/*
 * get_field_9c_s8  0x8c0b6b2c
 */
int get_field_9c_s8(int a0) {
    return (int)*(char *)(0x9c + a0);
}

/*
 * static_init_vec3s_286df0  0x8c0b6b3c
 * static initialiser: builds 4 global Vec3 constants (8c286df0..8c286e14) and registers their destructors
 */
u32 static_init_vec3s_286df0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126358, a1, a2, a3);
    uVar3 = 0x8c286df0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286df0, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126368, pcVar2, uVar3, a3);
    uVar3 = 0x8c286dfc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286dfc, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126378, pcVar2, uVar3, a3);
    uVar3 = 0x8c286e08;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286e08, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126388, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c286e14, a3);
    if (cVar4 == '\0') {
        g_8c126398 = CONCAT44(_UNK_8c12639c, 0x800000);
        /* WARNING: Read-only address (ram,0x8c12639c) is written */
    } else {
        g_8c126398 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * vblank_hook_check_lid  0x8c0b6bf4
 * the event-0x900 hook installed at start-up: gd_check_lid_open
 */
u32 vblank_hook_check_lid(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = gd_check_lid_open(a0, a1, a2, a3);
    return uVar1;
}

/*
 * game_uses_memcard_flush_and_close_8c3d_0b6c10  0x8c0b6c10
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is
 * memcard_flush_and_close_8c3dd7dc
 */
u32 game_uses_memcard_flush_and_close_8c3d_0b6c10(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0x8c286ebc;
    memcard_flush_and_close_8c3dd7dc(0x8c286ebc, a1, a2, a3);
    system_init_libs(uVar1, a1, a2, a3);
    uVar1 = game_shutdown_b();
    return uVar1;
}

/*
 * save_write_step  0x8c0b6c3c
 * one state of the save sequence: starts writing SM2000US.USR or SM2000US.INC (as SM2000US._VM)
 * called by: game_uses_get_field_d0_0c6e74, static_init_437218, static_init_43724c, static_init_4372a8,
 * static_init_4372f4 strings: "SM2000US.USR"; "SM2000US.INC"; "SM2000US._VM"
 */
u32 save_write_step(u32 a0, u8 *a1, u8 *a2, u8 *a3) {
    int iVar1;
    u8 *ar6_00;
    u8 *ar5_00;
    u32 uVar2;
    u8 auStack_30[24];

    ar5_00 = a1;
    ar6_00 = a2;
    iVar1 = get_field_a510_01f538(0x8c3dd7dc);
    uVar2 = 1;
    clear_5_words(auStack_30, ar5_00, ar6_00, a3);
    if ((iVar1 < 6) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            a3 = &g_8c13c025;
            ar6_00 = NULL;
            uVar2 = 0xb;
            startup_warning_check(&g_8c2b5628, 0xb, 0, &g_8c13c025);
            uVar2 = identity(0x8c3dd7dc, uVar2, ar6_00, a3);
            iVar1 = strcmp_0b6e04(a0, "SM2000US.USR");
            if (iVar1 == 0) {
                g_8c431a58 = memcard_save_start(uVar2, a0, a1, a2);
                ar6_00 = a1;
                a3 = a2;
            } else {
                iVar1 = strcmp_0b6e04(a0, "SM2000US.INC");
                if (iVar1 == 0) {
                    g_8c431a58 = memcard_save_vm_start(uVar2, "SM2000US._VM", a1, a2);
                    ar6_00 = a1;
                    a3 = a2;
                }
            }
            uVar2 = 0;
            break;
        case 1:
            a3 = &g_8c13c025;
            ar6_00 = NULL;
            startup_warning_check(&g_8c2b5628, 1, 0, &g_8c13c025);
            break;
        case 3:
            ar6_00 = (u8 *)get_field_a524_01f514(0x8c3dd7dc, ar5_00, ar6_00);
            a3 = &g_8c13c025;
            startup_warning_check(&g_8c2b5628, 2, ar6_00, &g_8c13c025);
            break;
        case 4:
            ar6_00 = (u8 *)get_field_a524_01f514(0x8c3dd7dc, ar5_00, ar6_00);
            a3 = &g_8c13c025;
            startup_warning_check(&g_8c2b5628, 4, ar6_00, &g_8c13c025);
        }
    }
    game_draw_0c412c(&g_8c2b5628, 1, ar6_00);
    free_if_nonnull_wrap_0151a0(auStack_30, 0xffffffff, ar6_00, a3);
    return uVar2;
}

/*
 * strcmp_0b6e04  0x8c0b6e04
 * called by: game_uses_speech_is_playing_0bad68, save_check_files, save_files_check, save_write_step,
 * static_init_4367d4
 */
u32 strcmp_0b6e04(u8 *a0, u8 *a1) {
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
 * save_check_files  0x8c0b6e6c
 * checks the SM2000US.USR/.INC/._VM save files on the card and writes the VM file when needed
 * strings: "SM2000US._VM"; "SM2000US._VM"; "SM2000US.USR"; "SM2000US.USR" ...
 */
u32 save_check_files(u8 *a0, u8 *a1, u8 *a2, u8 *a3) {
    int iVar1;
    u8 *ar6_00;
    u8 *ar5_00;
    u32 uVar2;
    u8 *ar6_01;
    u8 *ar7_00;
    u32 ar7_01;
    u32 uVar3;
    u8 *in_stack_00000000;
    int in_stack_00000004;
    u8 auStack_48[20];
    u8 auStack_34[24];

    ar5_00 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    iVar1 = get_field_a510_01f538(0x8c3dd7dc);
    uVar3 = 1;
    clear_5_words(auStack_34, ar5_00, ar6_00, ar7_00);
    if ((iVar1 < 6) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            ar7_00 = &g_8c13c025;
            ar6_00 = NULL;
            uVar2 = 0xb;
            startup_warning_check(&g_8c2b5628, 0xb, 0, &g_8c13c025);
            uVar2 = identity(0x8c3dd7dc, uVar2, ar6_00, ar7_00);
            if (in_stack_00000004 == 1) {
                iVar1 = strcmp_0b6e04(a0, "SM2000US._VM");
                if (iVar1 == 0) {
                    ar6_00 = auStack_48;
                    iVar1 = memcard_stat_file_wait(uVar2, "SM2000US._VM", ar6_00, ar7_00);
                    if (iVar1 == 1) {
                        iVar1 = game_release_01b0a8(uVar2, a0, a3, in_stack_00000000);
                        ar6_00 = a3;
                        ar7_00 = in_stack_00000000;
                        if (iVar1 == 1) {
                            uVar3 = 0;
                        }
                        break;
                    }
                }
                iVar1 = strcmp_0b6e04(a0, "SM2000US.USR");
                if ((iVar1 == 0) &&
                    (iVar1 = memcard_check_file_wait(uVar2, "SM2000US.USR", ar6_00, ar7_00), iVar1 == 1)) {
                    iVar1 = game_uses_memcard_save_start_01ae98(uVar2, a0, a1, a2);
                    ar6_00 = a1;
                    ar7_00 = a2;
                    if (iVar1 == 1) {
                        uVar3 = 0;
                        ar6_00 = a1;
                        ar7_00 = a2;
                    }
                } else {
                    iVar1 = strcmp_0b6e04(a0, "SM2000US.INC");
                    if ((iVar1 == 0) &&
                        (iVar1 = memcard_stat_file_wait(uVar2, "SM2000US._VM", auStack_48, ar7_00), iVar1 == 1)) {
                        iVar1 = memcard_save_vm_wait(uVar2, "SM2000US._VM", a1, a2);
                        ar6_00 = a1;
                        ar7_00 = a2;
                        if (iVar1 == 1) {
                            uVar3 = 0;
                            ar6_00 = a1;
                            ar7_00 = a2;
                        }
                    } else {
                        ar7_01 = 4;
                        ar6_01 = &g_8c4365bc;
                        set_fields_0_4_c(auStack_34, &g_8c43659c, &g_8c4365bc, 4);
                        uVar2 = 0x60;
                        set_field_10(auStack_34, 0x60);
                        Class_129808_draw(auStack_34, uVar2, ar6_01, ar7_01);
                        ar6_00 = NULL;
                        startup_warning_check(&g_8c2b5628, 3, 0, a0);
                        ar7_00 = a0;
                    }
                }
            } else {
                iVar1 = strcmp_0b6e04(a0, "SM2000US._VM");
                if (iVar1 == 0) {
                    iVar1 = game_release_01b0a8(uVar2, a0, a3, in_stack_00000000);
                    ar6_00 = a3;
                    ar7_00 = in_stack_00000000;
                    if (iVar1 == 1) {
                        uVar3 = 0;
                    }
                } else {
                    iVar1 = strcmp_0b6e04(a0, "SM2000US.USR");
                    if (iVar1 == 0) {
                        iVar1 = game_uses_memcard_save_start_01ae98(uVar2, a0, a1, a2);
                        ar6_00 = a1;
                        ar7_00 = a2;
                        if (iVar1 == 1) {
                            uVar3 = 0;
                            ar6_00 = a1;
                            ar7_00 = a2;
                        }
                    } else {
                        iVar1 = strcmp_0b6e04(a0, "SM2000US.INC");
                        if ((iVar1 == 0) && (iVar1 = memcard_save_vm_wait(uVar2, "SM2000US._VM", a1, a2), ar6_00 = a1,
                                             ar7_00 = a2, iVar1 == 1)) {
                            uVar3 = 0;
                            ar6_00 = a1;
                            ar7_00 = a2;
                        }
                    }
                }
            }
            break;
        case 1:
            ar7_00 = &g_8c13c025;
            ar6_00 = NULL;
            startup_warning_check(&g_8c2b5628, 1, 0, &g_8c13c025);
            break;
        case 3:
            ar6_00 = (u8 *)get_field_a524_01f514(0x8c3dd7dc, ar5_00, ar6_00);
            ar7_00 = &g_8c13c025;
            startup_warning_check(&g_8c2b5628, 2, ar6_00, &g_8c13c025);
            break;
        case 4:
            ar6_00 = (u8 *)get_field_a524_01f514(0x8c3dd7dc, ar5_00, ar6_00);
            ar7_00 = &g_8c13c025;
            startup_warning_check(&g_8c2b5628, 4, ar6_00, &g_8c13c025);
        }
    }
    free_if_nonnull_wrap_0151a0(auStack_34, 0xffffffff, ar6_00, ar7_00);
    return uVar3;
}

/*
 * game_uses_identity_0b726c  0x8c0b726c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is identity
 * strings: "SM2000US._VM"; "SM2000US._VM"; "SM2000US.USR"; "SM2000US.USR" ...
 */
u32 game_uses_identity_0b726c(u32 a0, u32 a1, u8 *a2, u32 a3, u32 s0, int s4) {
    u32 ar4_00;
    int iVar1;
    u8 *ar6_00;
    u32 ar7_00;
    u32 uVar2;
    u8 auStack_34[24];

    uVar2 = 1;
    ar6_00 = a2;
    ar7_00 = a3;
    ar4_00 = identity(0x8c3dd7dc, a1, a2, a3);
    if (s4 == 1) {
        iVar1 = (*(code *)(&strcmp_0b6e04))(a0, "SM2000US._VM", ar6_00, ar7_00);
        if (iVar1 == 0) {
            ar6_00 = auStack_34;
            iVar1 = (*(code *)(&memcard_stat_file_wait))(ar4_00, "SM2000US._VM", ar6_00, ar7_00);
            if (iVar1 == 1) {
                iVar1 = game_release_01b0a8(ar4_00, a0, a3, s0);
                if (iVar1 != 1) {
                    return 1;
                }
                return 0;
            }
        }
        iVar1 = (*(code *)(&strcmp_0b6e04))(a0, "SM2000US.USR", ar6_00, ar7_00);
        if ((iVar1 == 0) &&
            (iVar1 = (*(code *)(&memcard_check_file_wait))(ar4_00, "SM2000US.USR", ar6_00, ar7_00), iVar1 == 1)) {
            iVar1 = game_uses_memcard_save_start_01ae98(ar4_00, a0, a1, a2);
            if (iVar1 == 1) {
                uVar2 = 0;
            }
        } else {
            iVar1 = (*(code *)(&strcmp_0b6e04))(a0, "SM2000US.INC", ar6_00, ar7_00);
            if ((iVar1 == 0) &&
                ((iVar1 = (*(code *)(&memcard_stat_file_wait))(ar4_00, "SM2000US._VM", auStack_34, ar7_00),
                  iVar1 == 1 &&
                      (iVar1 = (*(code *)(&memcard_save_vm_wait))(ar4_00, "SM2000US._VM", a1, a2), iVar1 == 1)))) {
                uVar2 = 0;
            }
        }
    } else {
        iVar1 = (*(code *)(&strcmp_0b6e04))(a0, "SM2000US._VM", ar6_00, ar7_00);
        if (iVar1 == 0) {
            iVar1 = game_release_01b0a8(ar4_00, a0, a3, s0);
            if (iVar1 == 1) {
                uVar2 = 0;
            }
        } else {
            iVar1 = (*(code *)(&strcmp_0b6e04))(a0, "SM2000US.USR", ar6_00, ar7_00);
            if (iVar1 == 0) {
                iVar1 = game_uses_memcard_save_start_01ae98(ar4_00, a0, a1, a2);
                if (iVar1 == 1) {
                    uVar2 = 0;
                }
            } else {
                iVar1 = (*(code *)(&strcmp_0b6e04))(a0, "SM2000US.INC", ar6_00, ar7_00);
                if ((iVar1 == 0) &&
                    (iVar1 = (*(code *)(&memcard_save_vm_wait))(ar4_00, "SM2000US._VM", a1, a2), iVar1 == 1)) {
                    uVar2 = 0;
                }
            }
        }
    }
    return uVar2;
}

/*
 * save_files_check  0x8c0b7454
 * checks the memory-card files SM2000US.USR / SM2000US._VM / SM2000US.INC
 * called by: CGame_Initial, CProlog_Ready, static_init_4367d4
 * strings: "SM2000US.USR"; "SM2000US._VM"; "SM2000US.INC"; "SM2000US._VM"
 */
u32 save_files_check(u32 a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *ar6_00;
    u8 *ar7_00;
    u32 uVar4;
    u8 auStack_30[24];

    uVar2 = a1;
    uVar3 = a2;
    iVar1 = get_field_a510_01f538(0x8c3dd7dc);
    uVar4 = 1;
    if ((iVar1 < 6) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            ar7_00 = &g_8c13c025;
            uVar3 = 0;
            uVar2 = 0xb;
            startup_warning_check(&g_8c2b5628, 0xb, 0, &g_8c13c025);
            uVar2 = identity(0x8c3dd7dc, uVar2, uVar3, ar7_00);
            iVar1 = memcard_check_file_wait(uVar2, a0, uVar3, ar7_00);
            if (iVar1 == 1) {
                iVar1 = strcmp_0b6e04(a0, "SM2000US.USR");
                if ((iVar1 == 0) && (iVar1 = memcard_load_wait(uVar2, a0, a1, a2), iVar1 == 1)) {
                    uVar4 = 0;
                }
            } else {
                ar6_00 = auStack_30;
                iVar1 = memcard_stat_file_wait(uVar2, "SM2000US._VM", ar6_00, ar7_00);
                if (iVar1 == 1) {
                    iVar1 = strcmp_0b6e04(a0, "SM2000US.INC");
                    if ((iVar1 == 0) && (iVar1 = memcard_load_raw_wait(uVar2, "SM2000US._VM", a1, a2), iVar1 == 1)) {
                        uVar4 = 0;
                    }
                } else {
                    startup_warning_check(&g_8c2b5628, 3, 0, a0);
                }
            }
            break;
        case 1:
            startup_warning_check(&g_8c2b5628, 1, 0, &g_8c13c025);
            break;
        case 3:
            uVar2 = get_field_a524_01f514(0x8c3dd7dc, uVar2, uVar3);
            startup_warning_check(&g_8c2b5628, 2, uVar2, &g_8c13c025);
            break;
        case 4:
            uVar2 = get_field_a524_01f514(0x8c3dd7dc, uVar2, uVar3);
            startup_warning_check(&g_8c2b5628, 4, uVar2, &g_8c13c025);
        }
    }
    return uVar4;
}

/*
 * save_file_load  0x8c0b7628
 * loads SM2000US.USR, or SM2000US.INC from SM2000US._VM, into a1; 0 on success
 * strings: "SM2000US.USR"; "SM2000US.INC"; "SM2000US._VM"
 */
u32 save_file_load(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 ar4_00;
    int iVar1;
    u32 ar6_00;
    u32 uVar2;

    uVar2 = 1;
    ar6_00 = a2;
    ar4_00 = identity(0x8c3dd7dc, a1, a2, a3);
    iVar1 = (*(code *)(&strcmp_0b6e04))(a0, "SM2000US.USR", ar6_00, a3);
    if (iVar1 == 0) {
        iVar1 = memcard_load_wait(ar4_00, a0, a1, a2);
        if (iVar1 == 1) {
            uVar2 = 0;
        }
    } else {
        iVar1 = (*(code *)(&strcmp_0b6e04))(a0, "SM2000US.INC", ar6_00, a3);
        if (iVar1 == 0) {
            iVar1 = (*(code *)(&memcard_load_raw_wait))(ar4_00, "SM2000US._VM", a1, a2);
            if (iVar1 == 1) {
                uVar2 = 0;
            }
        }
    }
    return uVar2;
}

/*
 * save_files_presence  0x8c0b76d8
 * bit flags for which save files exist: 1 USR, 2 and 4 _VM states, 8 SEAMANDC.USR, 0x10 SEAMANDC._VM
 * called by: CGame_Initial, game_uses_get_field_d0_0c6e74, game_uses_speech_is_playing_0bad68,
 * save_check_presence_and_date, static_init_4367d4 strings: "SM2000US._VM"; "SEAMANDC.USR"; "SEAMANDC._VM";
 * "SM2000US.USR" ...
 */
u32 save_files_presence(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 ar4_00;
    int iVar1;
    u8 *puVar2;
    u32 uVar3;
    u8 auStack_20[24];

    ar4_00 = identity(0x8c3dd7dc, unused_a1, unused_a2, a3);
    uVar3 = 0;
    puVar2 = auStack_20;
    iVar1 = (*(code *)(&memcard_stat_file_wait))(ar4_00, "SM2000US._VM", puVar2, a3);
    if (iVar1 == 5) {
        uVar3 = 4;
    }
    iVar1 = (*(code *)(&memcard_check_file_wait))(ar4_00, "SEAMANDC.USR", puVar2, a3);
    if (iVar1 == 1) {
        uVar3 = uVar3 | 8;
    }
    puVar2 = auStack_20;
    iVar1 = (*(code *)(&memcard_stat_file_wait))(ar4_00, "SEAMANDC._VM", puVar2, a3);
    if (iVar1 == 1) {
        uVar3 = uVar3 | 0x10;
    }
    iVar1 = (*(code *)(&memcard_check_file_wait))(ar4_00, "SM2000US.USR", puVar2, a3);
    if (iVar1 == 0) {
        uVar3 = uVar3 | 1;
    }
    iVar1 = (*(code *)(&memcard_stat_file_wait))(ar4_00, "SM2000US._VM", auStack_20, a3);
    if (iVar1 == 4) {
        uVar3 = uVar3 | 2;
    }
    return uVar3;
}

/*
 * save_file_date_matches  0x8c0b77a0
 * reads SM2000US.USR and compares its saved date with a0
 * called by: game_uses_get_field_d0_0c6e74, game_uses_speech_is_playing_0bad68, save_check_presence_and_date
 * strings: "SM2000US.USR"
 */
u32 save_file_date_matches(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 ar6_00;
    int iStack_c;
    int aiStack_8[2];

    aiStack_8[0] = 0;
    iStack_c = 0;
    ar6_00 = 0x4208;
    (*(code *)(&save_files_check))("SM2000US.USR", 0x8c431a68, 0x4208, a3);
    date_to_rtc_seconds(a0, aiStack_8, ar6_00);
    date_to_rtc_seconds(0x8c431a68 + 0x1e, &iStack_c, ar6_00);
    return (u32)(aiStack_8[0] == iStack_c);
}

/*
 * save_usr_date_matches  0x8c0b7804
 * loads SM2000US.USR and compares its saved date with a0
 * called by: save_user_file_check
 * strings: "SM2000US.USR"
 */
u32 save_usr_date_matches(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iStack_10;
    int aiStack_c[2];

    aiStack_c[0] = 0;
    iStack_10 = 0;
    uVar2 = 0x4208;
    iVar1 = (*(code *)(&save_file_load))("SM2000US.USR", 0x8c431a68, 0x4208, a3);
    if (iVar1 == 1) {
        uVar2 = 0;
    } else {
        date_to_rtc_seconds(a0, aiStack_c, uVar2);
        date_to_rtc_seconds(0x8c431a68 + 0x1e, &iStack_10, uVar2);
        if (aiStack_c[0] == iStack_10) {
            uVar2 = 1;
        } else {
            uVar2 = 0;
        }
    }
    return uVar2;
}

/*
 * save_show_file_message  0x8c0b787c
 * shows the message for the save file chosen by flags a0
 * called by: CGame_Initial, game_uses_get_field_d0_0c6e74, game_uses_speech_is_playing_0bad68
 * strings: "SM2000US.USR"; "SM2000US.INC"; "SM2000US.INC"
 */
u32 save_show_file_message(u32 a0) {
    if ((a0 & 1) == 1) {
        startup_warning_check(&g_8c2b5628, 3, 0, "SM2000US.USR");
    } else if ((a0 & 2) == 2) {
        startup_warning_check(&g_8c2b5628, 3, 0, "SM2000US.INC");
    } else {
        if ((a0 & 4) != 4) {
            startup_warning_check(&g_8c2b5628, 0xb, 0, &g_8c13c025);
            return 1;
        }
        startup_warning_check(&g_8c2b5628, 3, 0, "SM2000US.INC");
    }
    return 0;
}

/*
 * startup_warning_show_for_state  0x8c0b7920
 * remembers state a0 (unless 2) and shows the matching startup warning page (0xb, 1, 4 or 2)
 * called by: CGame_Initial, game_uses_get_field_d0_0c6e74, game_uses_speech_is_playing_0bad68
 */
u32 startup_warning_show_for_state(int a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    if (a0 != 2) {
        g_8c4365ec = a0;
    }
    if (a0 == 0) {
        startup_warning_check(&g_8c2b5628, 0xb, 0, &g_8c13c025);
        return 1;
    }
    if (g_8c4365ec == 1) {
        startup_warning_check(&g_8c2b5628, 1, 0, &g_8c13c025);
        return 0;
    }
    if (g_8c4365ec != 3) {
        if (g_8c4365ec == 4) {
            uVar1 = get_field_a524_01f514(0x8c3dd7dc, unused_a1, a2);
            startup_warning_check(&g_8c2b5628, 4, uVar1, &g_8c13c025);
            return 0;
        }
        if (g_8c4365ec != 5) {
            return 0;
        }
    }
    uVar1 = get_field_a524_01f514(0x8c3dd7dc, unused_a1, a2);
    startup_warning_check(&g_8c2b5628, 2, uVar1, &g_8c13c025);
    return 0;
}

/*
 * game_uses_clear_5_words_0b79f0  0x8c0b79f0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is clear_5_words
 * called by: game_uses_get_field_d0_0c6e74, game_uses_speech_is_playing_0bad68, save_user_file_check
 */
u32 game_uses_clear_5_words_0b79f0(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u8 *ar6_00;
    u32 ar7_00;

    clear_5_words(&stack0xffffffe8, a1, unused_a2, a3);
    ar7_00 = 4;
    ar6_00 = &g_8c4365bc;
    set_fields_0_4_c(&stack0xffffffe8, &g_8c43659c, &g_8c4365bc, 4);
    uVar1 = 0x60;
    set_field_10(&stack0xffffffe8, 0x60);
    Class_129808_draw(&stack0xffffffe8, uVar1, ar6_00, ar7_00);
    uVar1 = free_if_nonnull_wrap_0151a0(&stack0xffffffe8, 0xffffffff, ar6_00, ar7_00);
    return uVar1;
}

/*
 * game_copy_0b7a54  0x8c0b7a54
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: Class_12a7f4_m5_09aa48, Class_12a990_m5_09c738, Class_12ad50_m5_0a5328, game_copy_0ba2cc
 */
int game_copy_0b7a54(int a0) {
    clear_record_10(a0 + 0xac);
    *(u8 *)(0xa0 + a0) = g_8c436548;
    *(u16 *)(0xa2 + a0) = 0;
    *(u16 *)(0xac + a0) = 0;
    *(u16 *)(0xae + a0) = 0;
    *(u16 *)(0xb0 + a0) = 0;
    *(u16 *)(0xb2 + a0) = 0;
    *(u8 *)(0xb4 + a0) = 0;
    game_init_fields_0b936c(a0);
    return a0;
}

/*
 * disc_product_id_index  0x8c0b7ad0
 * matches the disc's product number against the HDR-000x list
 * called by: game_init_sound_and_messages
 * strings: "6107055   "; "HDR-0001  "; "HDR0010   "; "T38801M   " ...
 */
u32 disc_product_id_index(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    sh4_tmu_1f8b34(0);
    (*(code *)(&memmove))(a0 + 0xcc, "6107055   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0xd6, "HDR-0001  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0xe0, "HDR0010   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0xea, "T38801M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0xf4, "HDR-0007  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0xfe, "HDR-0011  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x108, "HDR-0023  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x112, "HDR-0020  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x11c, "HDR-0019  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x126, "HDR-0009  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x130, "HDR-0022  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x13a, "HDR-0015  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x144, "HDR-0028  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x14e, "HDR-0026  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x158, "HDR-0027  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x162, "HDR-0004  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x16c, "HDR-0002  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x176, "HDR-0017  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x180, "HDR-0013  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x18a, "HDR-0003  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x194, "HDR-0005  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x19e, "T15001M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x1a8, "T15002M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x1b2, "T15003M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x1bc, "T36901M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x1c6, "T3101M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x1d0, "T38701M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x1da, "T1201M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x1e4, "T1202M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x1ee, "T1203M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x1f8, "T30801M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x202, "T7601M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x20c, "T7602M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x216, "T7603M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x220, "T9501M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x22a, "T9502M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x234, "T6802M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x23e, "T37001M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x248, "T17001M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x252, "T1101M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x25c, "T39701M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x266, "T28201M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x270, "T1401M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x27a, "T38802M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x284, "T14301M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x28e, "T14305M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x298, "T39601M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2a2, "T13301M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2ac, "T20801M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2b6, "T35401M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2c0, "T34201M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2ca, "T39501M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2d4, "T17701M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2de, "T39101M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2e8, "T30001M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2f2, "T16601M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x2fc, "T7604M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x306, "T6801M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x310, "T5301M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x31a, "T9503M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x324, "HDR-0021  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x32e, "T2201M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x338, "T14306M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x342, "T13302M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x34c, "T27901M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x356, "T28202M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x360, "T9504M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x36a, "T9590M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x374, "T38804M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x37e, "T5702M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x388, "T5703M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x392, "T20101M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x39c, "T9505M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x3a6, "HDR-0033  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x3b0, "T37901M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x3ba, "T5201M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x3c4, "HDR-0043  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x3ce, "T40101M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x3d8, "T1301M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x3e2, "T2501M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x3ec, "T1208M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x3f6, "T22001M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x400, "T14303M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x40a, "HDR-0039  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x414, "HDR-0048  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x41e, "T18701M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x428, "T39801M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x432, "T17702M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x43c, "T41001M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x446, "T41002M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x450, "T40801M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x464, "T3001M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x46e, "T23201M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x478, "T1205M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x482, "HDR-0034  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x48c, "T41101M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x496, "T32801M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4a0, "T5302M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4aa, "T40901M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4b4, "HDR-0042  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4be, "HDR-0045  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4c8, "T38702M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4d2, "T40902M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4dc, "T1204M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4e6, "HDR-0040  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4f0, "HDR-0051  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x4fa, "T38704M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x504, "T7605M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x50e, "T1211M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x518, "T2101M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x522, "T6601M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x52c, "HDR-0029  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x536, "HDR-0046  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x540, "HDR-0047  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x54a, "T27801M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x554, "T2102M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x55e, "T38703M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x568, "T38805M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x572, "T1214M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x57c, "T9902M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x586, "T9901M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x590, "T30003M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x59a, "T30004M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5a4, "T30005M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5ae, "T30006M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5b8, "T35402M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5c2, "HDR-0050  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5cc, "HDR-0052  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5d6, "HDR-0031  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5e0, "HDR-0016  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5ea, "T1206M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5f4, "T1102M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x5fe, "T6803M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x608, "HDR-0058  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x612, "T39001M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x61c, "HDR-0053  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x626, "HDR-0044  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x630, "T19701M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x63a, "T1210M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x644, "T1207M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x64e, "T30802M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x658, "T9591M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x662, "T9506M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x66c, "HDR-0054  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x676, "T41501M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x680, "T6804M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x68a, "T27902M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x694, "T5701M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x69e, "HDR-0057  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x6a8, "HDR-0061  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x6b2, "T1213M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x6bc, "T42301M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x6c6, "T17703M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x6d0, "T20104M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x6da, "T1215M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x6e4, "T36501M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x6ee, "T42401M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x6f8, "T3103M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x702, "HDR-0069  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x70c, "T16801M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x716, "T5303M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x720, "T3102M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x72a, "T9507M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x734, "T7606M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x73e, "HDR-0071  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x748, "HDR-0070  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x752, "T15006M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x75c, "T7607M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x766, "T40802M   ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x770, "T9102M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x77a, "T9103M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x784, "T3104M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x78e, "T9508M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x798, "T1218M    ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x7a2, "HDR-0055  ", 10, a3);
    (*(code *)(&memmove))(a0 + 0x7ac, "HDR-0035  ", 10, a3);
    uVar1 = (*(code *)(&memmove))(a0 + 0x7b6, "HDR-0036  ", 10, a3);
    return uVar1;
}

/*
 * sh4_tmu_wrap  0x8c0b9230
 * only calls sh4_tmu_1f8a64
 * called by: CGame_Initial
 */
u32 sh4_tmu_wrap(void) {
    u32 uVar1;

    uVar1 = sh4_tmu_1f8a64();
    return uVar1;
}

/*
 * creature_age_clock_tick  0x8c0b9244
 * adds each elapsed second from the timer to the clock and, every 14,400 seconds (4 hours), raises the age counter at
 * +0xa2 (capped at 0xfffa) called by: static_init_437218, static_init_43724c, static_init_4372a8, static_init_4372f4
 */
u32 creature_age_clock_tick(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 ar5_00;

    uVar1 = sh4_tmu_1f8b88();
    ar5_00 = 0;
    uVar2 = shinobi_uses_libgcc_divide_helper_1f8b92(uVar1, 0);
    if (0xf4240 <= uVar2) {
        *(int *)(0xa8 + a0) = *(int *)(0xa8 + a0) + 1;
        *(short *)(0xa4 + a0) = *(short *)(0xa4 + a0) + 1;
        sh4_tmu_1f8b6e(0);
        *(u32 *)(0xb8 + a0) = *(int *)(0xb8 + a0) + uVar2 + 0xfff0bdc0;
        if (0xf4240 <= *(u32 *)(0xb8 + a0)) {
            *(int *)(0xa8 + a0) = *(int *)(0xa8 + a0) + 1;
            *(short *)(0xa4 + a0) = *(short *)(0xa4 + a0) + 1;
            *(u32 *)(0xb8 + a0) = 0;
        }
    }
    if (*(u16 *)(0xa4 + a0) < 0x3840) {
        uVar1 = 0;
    } else {
        *(short *)(0xa2 + a0) = *(short *)(0xa2 + a0) + 1;
        if (0xfffa <= *(u16 *)(0xa2 + a0)) {
            *(short *)(0xa2 + a0) = (short)0xfffa;
        }
        *(u16 *)(0xa4 + a0) = 0;
        CAnimal_calls_test_0c4e2c(a0, ar5_00, a2, a3);
        uVar1 = 1;
    }
    return uVar1;
}

/*
 * game_init_fields_0b936c  0x8c0b936c
 * area name: game code; nothing names its area yet; behaviour name: writes 6 members
 * called by: Class_12b388_uses_Class_129808_draw_0c5cb4, game_copy_0b7a54
 */
int game_init_fields_0b936c(u32 *a0) {
    int iVar1;

    *(u8 *)(0xa1 + (int)a0) = g_8c436548;
    *(u16 *)(0xa4 + (int)a0) = 0;
    *(u32 *)(0xa8 + (int)a0) = 0;
    *(u32 *)(0xb8 + (int)a0) = 0;
    *a0 = 0;
    *(u32 *)(0x88 + (int)a0) = 0;
    iVar1 = 0x84;
    *(u32 *)(0x84 + (int)a0) = 0;
    return iVar1;
}

/*
 * CProlog_classify_day_period  0x8c0b93c0
 * sums eight counters, finds the largest, compares it and the day periods of two stored times with the period at +0xbc
 * and returns a class 0..4 called by: CProlog_Ready, game_uses_CProlog_classify_day_period_0f803c
 */
int CProlog_classify_day_period(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u8 bVar5;
    int iVar6;
    int iStack_2c;

    iVar3 = 0;
    iVar4 = 0;
    bVar5 = 0;
    iVar2 = 4;
    for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
        iVar3 = (u32) * (u8 *)(a0 + iVar6 + 4) + iVar3;
    }
    if (iVar3 < 5) {
        iVar2 = 3;
    } else {
        for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
            if (bVar5 < *(u8 *)(a0 + iVar3 + 4)) {
                bVar5 = *(u8 *)(a0 + iVar3 + 4);
                iVar4 = iVar3;
            }
        }
        iVar6 = (*(code *)(&hour_to_day_period))(a0, a1, a2, a3, *(u32 *)(a0 + 0x16), *(u32 *)(a0 + 0x1a));
        iVar1 = (*(code *)(&hour_to_day_period))(a0, a1, a2, a3, *(u32 *)(a0 + 0x20), *(u32 *)(a0 + 0x24));
        iVar3 = iVar6;
        if (((iVar6 != iVar1) &&
             (((iVar3 = iVar4, iVar6 != iVar4 || (iVar1 != iVar4)) && (iVar2 = 3, *(int *)(0xbc + a0) != iVar6)))) &&
            (*(int *)(0xbc + a0) != iVar1)) {
            iVar2 = 0;
        }
        iStack_2c = abs(iVar3 - *(int *)(0xbc + a0));
        if (4 < iStack_2c) {
            iStack_2c = 8 - iStack_2c;
        }
        if (iVar2 == 4) {
            if (iStack_2c == 0) {
                iVar2 = 1;
            } else if (iStack_2c == 1) {
                iVar2 = 3;
            } else {
                iVar2 = 2;
            }
        }
    }
    return iVar2;
}

/*
 * game_uses_flashrom_game_block_date_byt_0b951c  0x8c0b951c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is
 * flashrom_game_block_date_byte called by: game_uses_CProlog_classify_day_period_0f803c strings: "T39403M   "; "T39404M
 * "
 */
u32 game_uses_flashrom_game_block_date_byt_0b951c(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 auStack_18[16];

    uVar2 = 10;
    (*(code *)(&memmove))(auStack_18, "T39403M   ", 10, a3);
    iVar1 = flashrom_game_block_date_byte(unused_a0, auStack_18, uVar2, a3);
    if (iVar1 < 1) {
        uVar2 = 10;
        (*(code *)(&memmove))(auStack_18, "T39404M   ", 10, a3);
        iVar1 = flashrom_game_block_date_byte(unused_a0, auStack_18, uVar2, a3);
        if (iVar1 < 1) {
            uVar2 = 0;
        } else {
            uVar2 = 1;
        }
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * flashrom_game_block_date_byte  0x8c0b95a0
 * opens the flash game partition, reads the block with the 10-byte key a1 and returns one byte of its stored date (0
 * when missing) called by: game_uses_flashrom_game_block_date_byt_0b951c
 */
u32 flashrom_game_block_date_byte(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *puVar2;
    int iVar3;
    int iVar4;
    u8 *ar5_00;
    u32 uVar5;
    u32 ar7_00;
    u8 *ain0;
    u8 *puStack_120;
    int iStack_11c;
    u8 auStack_118[2];
    u8 bStack_116;
    u8 auStack_10c[2];
    u8 auStack_10a[106];
    int iStack_a0;
    u8 auStack_1c[20];

    uVar5 = a1;
    iStack_11c = malloc_thunk_wrap_10287c(0x10000, a1, a2, a3);
    if (iStack_11c == 0) {
        uVar1 = 0;
    } else {
        puVar2 = (u8 *)malloc_thunk_wrap_10287c(0x3c, uVar5, a2, a3);
        puStack_120 = puVar2;
        if (puVar2 == NULL) {
            free_ptr_and_clear(&iStack_11c, uVar5, a2, a3);
            uVar1 = 0;
        } else {
            uVar1 = 0;
            ar7_00 = 0;
            uVar5 = 0;
            iVar4 = iStack_11c;
            ain0 = puVar2;
            iVar3 = flashrom_open_game_partition(iStack_11c, puVar2, 0, 0);
            if (iVar3 != 0) {
                memset(auStack_10c, 0, 0xf0);
                uVar5 = 10;
                memmove(auStack_1c, a1, 10);
                flashrom_read_game_block(auStack_1c, auStack_10c, uVar5, ar7_00);
                uVar5 = 10;
                ar5_00 = auStack_10a;
                puVar2 = auStack_1c;
                iVar4 = memcmp(puVar2, ar5_00, 10);
                if (iVar4 != 0) {
                    flashrom_calc_1f710c(puVar2, ar5_00, uVar5, ar7_00, ain0);
                    free_ptr_and_clear(&iStack_11c, ar5_00, uVar5, ar7_00);
                    free_ptr_and_clear(&puStack_120, ar5_00, uVar5, ar7_00);
                    return 0;
                }
                puVar2 = auStack_118;
                rtc_seconds_to_date(iStack_a0, puVar2);
                uVar1 = (u32)bStack_116;
                iVar4 = iStack_a0;
            }
            flashrom_calc_1f710c(iVar4, puVar2, uVar5, ar7_00, ain0);
            free_ptr_and_clear(&iStack_11c, puVar2, uVar5, ar7_00);
            free_ptr_and_clear(&puStack_120, puVar2, uVar5, ar7_00);
        }
    }
    return uVar1;
}

/*
 * CProlog_uses_free_sys_0b96e4  0x8c0b96e4
 * area name: only called from CProlog methods; behaviour name: its main named callee is free_sys
 * called by: CProlog_Ready
 * strings: "T39401M   "; "T39401M   "; "T30003M   "; "T30003M   " ...
 */
int CProlog_uses_free_sys_0b96e4(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    char *ar4_00;
    int iVar2;
    int iVar3;
    char *ar4_01;
    u32 *ar5_00;
    char *ar5_01;
    u32 ar6_00;
    u32 ar7_00;
    u16 uVar4;
    u32 unaff_r12;
    u32 uStack_128;
    u32 uStack_124;
    char acStack_120[2];
    char acStack_11e[102];
    u32 uStack_b8;
    u32 uStack_a8;
    u16 uStack_a4;
    char acStack_30[24];

    rtc_get_date(acStack_30 + 10, a1, a2, a3);
    date_to_rtc_seconds(acStack_30 + 10, &uStack_124, a2);
    ar5_00 = &uStack_128;
    date_to_rtc_seconds(a1, ar5_00, a2);
    if (uStack_128 < uStack_124) {
        g_8c4365f0 = (char *)malloc_thunk(0x10000, ar5_00, a2, a3);
        if (g_8c4365f0 == NULL) {
            iVar1 = 0xb6;
        } else {
            g_8c4365f4 = (char *)malloc_thunk(0x3c, ar5_00, a2, a3);
            if (g_8c4365f4 == NULL) {
                free_sys(g_8c4365f0, ar5_00, a2, a3);
                iVar1 = 0xb6;
            } else {
                ar4_00 = (char *)malloc_thunk(0x44c, ar5_00, a2, a3);
                if (ar4_00 == NULL) {
                    free_sys(g_8c4365f0, ar5_00, a2, a3);
                    free_sys(g_8c4365f4, ar5_00, a2, a3);
                    iVar1 = 0xb6;
                } else {
                    iVar1 = 0xb6;
                    ar7_00 = 0;
                    ar6_00 = 0;
                    ar4_01 = g_8c4365f0;
                    ar5_01 = g_8c4365f4;
                    iVar2 = flashrom_open_game_partition(g_8c4365f0, g_8c4365f4, 0, 0);
                    if (iVar2 != 0) {
                        for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
                            acStack_30[iVar2] = ' ';
                        }
                        uVar4 = 0;
                        ar4_01 = ar4_00;
                        iVar2 = flashrom_uses_flashrom_select_partition_1f7c40(ar4_00, ar5_01, ar6_00, ar7_00);
                        if (iVar2 != 0) {
                            for (iVar2 = 0; iVar2 < 100; iVar2 = iVar2 + 1) {
                                if (ar4_00[iVar2 * 0xb] != -1) {
                                    ar5_01 = acStack_120;
                                    ar4_01 = ar4_00 + iVar2 * 0xb;
                                    iVar3 = flashrom_read_game_block(ar4_01, ar5_01, ar6_00, ar7_00);
                                    if (iVar3 != 0) {
                                        ar6_00 = 10;
                                        ar5_01 = acStack_11e;
                                        ar4_01 = "T39401M   ";
                                        iVar3 = memcmp("T39401M   ", ar5_01, 10);
                                        if (iVar3 != 0) {
                                            ar6_00 = 10;
                                            ar5_01 = acStack_11e;
                                            ar4_01 = "T30003M   ";
                                            iVar3 = memcmp("T30003M   ", ar5_01, 10);
                                            if (iVar3 != 0) {
                                                ar6_00 = 10;
                                                ar5_01 = acStack_11e;
                                                ar4_01 = "T30004M   ";
                                                iVar3 = memcmp("T30004M   ", ar5_01, 10);
                                                if (iVar3 != 0) {
                                                    ar6_00 = 10;
                                                    ar5_01 = acStack_11e;
                                                    ar4_01 = "T30005M   ";
                                                    iVar3 = memcmp("T30005M   ", ar5_01, 10);
                                                    if (iVar3 != 0) {
                                                        ar6_00 = 10;
                                                        ar5_01 = acStack_11e;
                                                        ar4_01 = "T30006M   ";
                                                        iVar3 = memcmp("T30006M   ", ar5_01, 10);
                                                        if ((((iVar3 != 0) && (uStack_a8 < uStack_124)) &&
                                                             (uStack_128 < uStack_a8)) &&
                                                            (uVar4 < uStack_a4)) {
                                                            ar6_00 = 10;
                                                            ar5_01 = acStack_11e;
                                                            ar4_01 = acStack_30;
                                                            memmove(ar4_01, ar5_01, 10);
                                                            unaff_r12 = uStack_b8;
                                                            uVar4 = uStack_a4;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            for (iVar2 = 0; iVar2 < 0xb2; iVar2 = iVar2 + 1) {
                                ar6_00 = 10;
                                ar5_01 = acStack_30;
                                ar4_01 = (char *)(iVar2 * 10 + a0 + 0xcc);
                                iVar3 = memcmp(ar4_01, ar5_01, 10);
                                if (iVar3 == 0) {
                                    iVar1 = iVar2;
                                }
                            }
                            if (iVar1 == 0xb6) {
                                if ((unaff_r12 & 0x400) != 0) {
                                    iVar1 = 0xb3;
                                }
                                if ((unaff_r12 & 0x200) != 0) {
                                    iVar1 = 0xb4;
                                }
                                if ((unaff_r12 & 0x100) != 0) {
                                    iVar1 = 0xb5;
                                }
                                if ((unaff_r12 & 0x80) != 0) {
                                    iVar1 = 0xb6;
                                }
                                if ((unaff_r12 & 0x40) != 0) {
                                    iVar1 = 0xb7;
                                }
                                if ((unaff_r12 & 0x20) != 0) {
                                    iVar1 = 0xb8;
                                }
                                if ((unaff_r12 & 0x10) != 0) {
                                    iVar1 = 0xb9;
                                }
                                if ((unaff_r12 & 8) != 0) {
                                    iVar1 = 0xba;
                                }
                                if ((unaff_r12 & 4) != 0) {
                                    iVar1 = 0xbb;
                                }
                                if ((unaff_r12 & 2) != 0) {
                                    iVar1 = 0xbc;
                                }
                                if ((unaff_r12 & 1) != 0) {
                                    iVar1 = 0xbd;
                                }
                            }
                        }
                    }
                    flashrom_calc_1f710c(ar4_01, ar5_01, ar6_00, ar7_00, a1);
                    free_sys(g_8c4365f0, ar5_01, ar6_00, ar7_00);
                    free_sys(g_8c4365f4, ar5_01, ar6_00, ar7_00);
                    free_sys(ar4_00, ar5_01, ar6_00, ar7_00);
                }
            }
        }
    } else {
        iVar1 = 0xb6;
    }
    return iVar1;
}

/*
 * hour_to_day_period  0x8c0b9afc
 * maps the hour in s4 (0-23) to a time-of-day period index
 * called by: game_select_intro_or_ending
 */
u32 hour_to_day_period(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0, u32 s4) {
    if (0x17 < (u8)s4) {
        return 8;
    }
    switch ((u8)s4) {
    case 0:
    case 1:
        return 6;
    default:
        return 7;
    case 5:
    case 6:
    case 7:
        return 0;
    case 8:
    case 9:
    case 10:
        return 1;
    case 0xb:
    case 0xc:
    case 0xd:
        return 2;
    case 0xe:
    case 0xf:
    case 0x10:
        return 3;
    case 0x11:
    case 0x12:
    case 0x13:
        return 4;
    case 0x14:
        return 5;
    }
}

/*
 * CProlog_record_visit_date  0x8c0b9bb0
 * shifts the last two RTC dates back, reads the new one, counts the visit in its time-of-day period and tracks visits
 * on the same day called by: CProlog_Ready
 */
u32 CProlog_record_visit_date(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u8 auStack_1c[16];

    rtc_get_date_wrap(a0, auStack_1c, a2, a3);
    *(u16 *)(a0 + 0x20) = *(u16 *)(a0 + 0x16);
    *(u16 *)(a0 + 0x22) = *(u16 *)(a0 + 0x18);
    *(u16 *)(a0 + 0x24) = *(u16 *)(a0 + 0x1a);
    *(u16 *)(a0 + 0x26) = *(u16 *)(a0 + 0x1c);
    *(u16 *)(a0 + 0x28) = *(u16 *)(a0 + 0x1e);
    *(u16 *)(a0 + 0x16) = *(u16 *)(a0 + 0xc);
    *(u16 *)(a0 + 0x18) = *(u16 *)(a0 + 0xe);
    *(u16 *)(a0 + 0x1a) = *(u16 *)(a0 + 0x10);
    *(u16 *)(a0 + 0x1c) = *(u16 *)(a0 + 0x12);
    *(u16 *)(a0 + 0x1e) = *(u16 *)(a0 + 0x14);
    iVar3 = a0 + 0xc;
    rtc_get_date_wrap(a0, iVar3, a2, a3);
    uVar1 = (*(code *)(&hour_to_day_period))(a0, iVar3, a2, a3, *(u32 *)(a0 + 0xc), *(u32 *)(a0 + 0x10));
    *(u32 *)(0xbc + a0) = uVar1;
    iVar3 = a0 + *(int *)(0xbc + a0);
    *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + '\x01';
    uVar1 = CProlog_uses_libgcc_divide_helper_0b9d30(a0, auStack_1c, 0x8c431a68 + 0x14);
    *(u32 *)(0xc8 + a0) = uVar1;
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
        iVar3 = (u32) * (u8 *)(a0 + iVar4 + 4) + iVar3;
    }
    if (((*(short *)(a0 + 0xc) == *(short *)(a0 + 0x16)) && (*(char *)(a0 + 0xe) == *(char *)(a0 + 0x18))) &&
        (*(char *)(a0 + 0xf) == *(char *)(a0 + 0x19))) {
        *(char *)(a0 + 0x2c) = *(char *)(a0 + 0x2c) + '\x01';
    } else {
        *(u8 *)(a0 + 0x2c) = 1;
    }
    uVar2 = *(u32 *)(0xc8 + a0);
    if (((uVar2 == 0) && (uVar2 = (u32) * (u8 *)(a0 + 0x2c), uVar2 == 1)) && (uVar2 = 1, iVar3 != 1)) {
        uVar2 = 0x2c;
        *(u8 *)(a0 + 0x2c) = 2;
    }
    return uVar2;
}

/*
 * rtc_get_date_wrap  0x8c0b9d14
 * only calls rtc_get_date
 * called by: CGame_GetUserGameInfo, CGame_uses_libgcc_divide_helper_0cc784, CProlog_record_visit_date,
 * CProlog_uses_libgcc_divide_helper_0cd3c8, ambient_sound_update, game_copy_0c67f4, game_select_intro_or_ending,
 * game_uses_rand_0d8890 (+1 more)
 */
u32 rtc_get_date_wrap(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = rtc_get_date(a1, a1, unused_a2, a3);
    return uVar1;
}

/*
 * CProlog_uses_libgcc_divide_helper_0b9d30  0x8c0b9d30
 * area name: only called from CProlog methods; behaviour name: its main named callee is libgcc_divide_helper_01031c
 * called by: CProlog_record_visit_date
 */
int CProlog_uses_libgcc_divide_helper_0b9d30(u32 unused_a0, u16 *a1, u16 *a2) {
    u8 bVar1;
    int iVar2;
    u16 *ar6_00;
    int iVar3;
    u32 uVar4;
    int iVar5;
    u32 uVar6;
    int iVar7;

    iVar5 = 0;
    iVar3 = 0;
    ar6_00 = a2;
    for (iVar7 = 0x79e; iVar7 < (int)(u32)*a1; iVar7 = iVar7 + 1) {
        iVar2 = libgcc_divide_helper_01031c(iVar7, 4, ar6_00);
        if (iVar2 == 0) {
            iVar5 = iVar5 + 0x16e;
        } else {
            iVar5 = iVar5 + 0x16d;
        }
    }
    bVar1 = (u8)a1[1];
    if ((bVar1 < 0xd) && (1 < bVar1)) {
        iVar7 = iVar5;
        switch (bVar1) {
        case 0xc:
            iVar5 = iVar5 + 0x1e;
        case 0xb:
            iVar5 = iVar5 + 0x1f;
        case 10:
            iVar5 = iVar5 + 0x1e;
        case 9:
            iVar5 = iVar5 + 0x1f;
        case 8:
            iVar5 = iVar5 + 0x1f;
        case 7:
            iVar5 = iVar5 + 0x1e;
        case 6:
            iVar5 = iVar5 + 0x1f;
        case 5:
            iVar5 = iVar5 + 0x1e;
        case 4:
            iVar7 = iVar5 + 0x1f;
        case 3:
            iVar5 = iVar7 + 0x1c;
            iVar2 = libgcc_divide_helper_01031c((u32)*a1, 4, ar6_00);
            if (iVar2 == 0) {
                iVar5 = iVar7 + 0x1d;
            }
        case 2:
            iVar5 = iVar5 + 0x1f;
        }
    }
    uVar6 = iVar5 + (u32) * (u8 *)((int)a1 + 3);
    for (iVar5 = 0x79e; iVar5 < (int)(u32)*a2; iVar5 = iVar5 + 1) {
        iVar7 = libgcc_divide_helper_01031c(iVar5, 4, ar6_00);
        if (iVar7 == 0) {
            iVar3 = iVar3 + 0x16e;
        } else {
            iVar3 = iVar3 + 0x16d;
        }
    }
    bVar1 = (u8)a2[1];
    if ((bVar1 < 0xd) && (1 < bVar1)) {
        iVar5 = iVar3;
        switch (bVar1) {
        case 0xc:
            iVar3 = iVar3 + 0x1e;
        case 0xb:
            iVar3 = iVar3 + 0x1f;
        case 10:
            iVar3 = iVar3 + 0x1e;
        case 9:
            iVar3 = iVar3 + 0x1f;
        case 8:
            iVar3 = iVar3 + 0x1f;
        case 7:
            iVar3 = iVar3 + 0x1e;
        case 6:
            iVar3 = iVar3 + 0x1f;
        case 5:
            iVar3 = iVar3 + 0x1e;
        case 4:
            iVar5 = iVar3 + 0x1f;
        case 3:
            iVar3 = iVar5 + 0x1c;
            iVar7 = libgcc_divide_helper_01031c((u32)*a2, 4, ar6_00);
            if (iVar7 == 0) {
                iVar3 = iVar5 + 0x1d;
            }
        case 2:
            iVar3 = iVar3 + 0x1f;
        }
    }
    uVar4 = iVar3 + (u32) * (u8 *)((int)a2 + 3);
    if (uVar6 < uVar4) {
        iVar3 = 0xffff;
    } else {
        iVar3 = uVar6 - uVar4;
    }
    return iVar3;
}

/*
 * recent5_push_unique  0x8c0b9ed4
 * pushes a1 onto the five-entry recent list at +0x30 unless it is already there
 * called by: CAnimal_m2_0386d0, CAnimal_m2_088094, Class_12a078_m2_05eee0, Class_12a078_m4_067284,
 * Class_12a7a8_m1_098d14, Class_12a7a8_state_switch_0999ac, Class_12a990_m2_09bc2c, Class_12b2e8_m1_0b5ad0 (+12 more)
 */
u32 recent5_push_unique(int a0, int a1, u32 a2) {
    u32 uVar1;
    int iVar2;

    if (*(char *)(a0 + a1 + 0x44) == '\0') {
        for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            if (*(int *)(a0 + iVar2 * 4 + 0x30) == a1) {
                return 0;
            }
        }
        iVar2 = a0 + *(int *)(a0 + 0x40);
        *(char *)(iVar2 + 0x44) = *(char *)(iVar2 + 0x44) + '\x01';
        for (iVar2 = 4; 0 < iVar2; iVar2 = iVar2 + -1) {
            *(u32 *)(a0 + iVar2 * 4 + 0x30) = *(u32 *)(a0 + (iVar2 + -1) * 4 + 0x30);
        }
        *(int *)(a0 + 0x30) = a1;
        uVar1 = 1;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * copy_record_56  0x8c0b9f5c
 * copies a 0x56-byte record: one byte, five words, 0x3e bytes
 * called by: CGame_GetUserGameInfo, CProlog_Ready
 */
u8 *copy_record_56(u8 *a0, u8 *a1) {
    int iVar1;

    *a0 = *a1;
    for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
        *(u32 *)(a0 + iVar1 * 4 + 4) = *(u32 *)(a1 + iVar1 * 4 + 4);
    }
    for (iVar1 = 0; iVar1 < 0x3e; iVar1 = iVar1 + 1) {
        a0[iVar1 + 0x18] = a1[iVar1 + 0x18];
    }
    return a0;
}

/*
 * SaveData_ctor  0x8c0b9fb4
 * the save-data block: tables of 0xf0-byte entries and the "SM2000US.USR" name
 * called by: static_init_vec3s_286e20
 * strings: "SM2000US.USR"
 */
int SaveData_ctor(int a0, u32 a1, u32 a2) {
    code *pcVar1;
    code *pcVar2;
    u32 uVar3;
    u32 in_fr1;
    char cVar4;

    cVar4 = '\0';
    Class_1299f8_uses_clear_15_bytes_0243b0(a0 + 0xb0, a1, a2);
    vec_new_array(a0 + 0x1bc, Vec3_ctor_zero, Vec3_dtor, 0x10, 3);
    uVar3 = 0xf0;
    pcVar2 = game_release_0ba180;
    pcVar1 = Class_1299f8_uses_clear_15_bytes_0243b0;
    vec_new_array(a0 + 0x1ec, Class_1299f8_uses_clear_15_bytes_0243b0, game_release_0ba180, 0xf0, 0x14);
    clear_5_bytes(a0 + 0x14ac);
    uVar3 = 0xf0;
    pcVar2 = game_release_0ba180;
    pcVar1 = Class_1299f8_uses_clear_15_bytes_0243b0;
    vec_new_array(a0 + 0x14c4, Class_1299f8_uses_clear_15_bytes_0243b0, game_release_0ba180, 0xf0, 0x14);
    clear_5_bytes(a0 + 0x2784);
    uVar3 = 0xf0;
    pcVar2 = game_release_0ba180;
    pcVar1 = Class_1299f8_uses_clear_15_bytes_0243b0;
    vec_new_array(a0 + 0x2794, Class_1299f8_uses_clear_15_bytes_0243b0, game_release_0ba180, 0xf0, 10);
    game_copy_0fdc20(a0 + 0x30f4, pcVar1, pcVar2, uVar3);
    buf256_clear_b(a0 + 0x4104);
    sprintf(a0, pcVar1, pcVar2, uVar3, "SM2000US.USR");
    *(u16 *)(a0 + 0x28) = 0;
    *(u8 *)(a0 + 0xa8) = g_8c436548;
    *(u32 *)(a0 + 0xac) = 0;
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x1b0) = 0;
        *(u32 *)(a0 + 0x1a0) = 0;
    } else {
        *(u64 *)(a0 + 0x1b0) = (u64)in_fr1;
        *(u64 *)(a0 + 0x1a0) = (u64)in_fr1;
    }
    *(u32 *)(a0 + 0x1ac) = 0;
    *(u32 *)(a0 + 0x1a8) = 0;
    *(u8 *)(a0 + 0x1b4) = 0;
    *(u32 *)(a0 + 0x1b8) = 0;
    *(u32 *)(a0 + 0x14b8) = 0;
    *(u32 *)(a0 + 0x14b4) = 0;
    if (cVar4 == '\0') {
        *(u32 *)(a0 + 0x14bc) = 0;
    } else {
        *(u64 *)(a0 + 0x14bc) = (u64)in_fr1;
    }
    *(u8 *)(a0 + 0x14c0) = 0;
    *(u32 *)(a0 + 0x278c) = 0;
    *(u8 *)(a0 + 0x2790) = 0;
    return a0;
}

/*
 * game_release_0ba180  0x8c0ba180
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 * called by: game_release_0c4968
 */
int game_release_0ba180(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        game_release_02441c(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * vec_new_array_wrap  0x8c0ba1c0
 * only calls vec_new_array
 * called by: static_init_vec3s_286e20
 */
u32 vec_new_array_wrap(u32 a0) {
    vec_new_array(a0, (&game_uses_clear_15_bytes_0ba284), (&game_release_0ba1f4), 0x80, 0xc);
    return a0;
}

/*
 * game_release_0ba1f4  0x8c0ba1f4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 */
int game_release_0ba1f4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        game_release_0ba234(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_release_0ba234  0x8c0ba234
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 * called by: game_release_0ba1f4
 */
int game_release_0ba234(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_016ac4(a0 + 0x10, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        object_dtor_delete(a0 + 4, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_uses_clear_15_bytes_0ba284  0x8c0ba284
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is clear_15_bytes
 */
int game_uses_clear_15_bytes_0ba284(int a0) {
    game_vec_0f3e84(a0);
    game_init_fields_02d5b8(a0 + 0x24);
    game_uses_set_fields_0_1_4_02ff40(a0 + 0x48);
    clear_15_bytes(a0 + 0x58);
    return a0;
}

/*
 * game_copy_0ba2cc  0x8c0ba2cc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: game_uses_Class_12b350_ctor_0bff8c
 */
int game_copy_0ba2cc(int a0) {
    game_copy_0b7a54(a0);
    *(u32 *)(0x7cc + a0) = 0;
    *(u32 *)(0x7d0 + a0) = 0;
    *(u32 *)(0x7d8 + a0) = 0;
    *(u32 *)(0x7d4 + a0) = 0;
    *(u32 *)(0x7dc + a0) = 0;
    *(u32 *)(0x7e0 + a0) = 0;
    return a0;
}

/*
 * set_2_words_wrap  0x8c0ba324
 * only calls set_2_words
 * called by: input_uses_set_2_words_wrap_0c1d1c
 */
u32 set_2_words_wrap(u32 a0, u32 a1, u32 a2) {
    set_2_words(a0, a1, a2);
    return a0;
}

/*
 * set_2_words  0x8c0ba34c
 * a0[0] = a1, a0[1] = a2
 * called by: set_2_words_wrap, static_init_4367d4
 */
u32 set_2_words(u32 *a0, u32 a1, u32 a2) {
    u32 in_r0;

    *a0 = a1;
    a0[1] = a2;
    return in_r0;
}

/*
 * Class_12b350_vec_0ba354  0x8c0ba354
 * area name: only called from Class_12b350 methods; behaviour name: mostly calls vec functions
 * called by: Class_12b350_ctor
 */
u32 Class_12b350_vec_0ba354(u32 a0, u32 a1, u32 a2) {
    Vec3_ctor_zero(a0, a1, a2);
    game_init_fields_0ba5bc(a0);
    return a0;
}

/*
 * CProlog_calls_init_fields_0ba37c  0x8c0ba37c
 * area name: only called from CProlog methods; behaviour name: its callees mostly do: init_fields
 * called by: CProlog_Ready
 */
u32 CProlog_calls_init_fields_0ba37c(u32 a0) {
    u32 uVar1;

    game_init_fields_0ba5bc(a0);
    uVar1 = (*(code *)(&set_4_colors_154))(0x8c2b5628, 0xff000000, 0xff000000, 0xff000000, 0xff000000);
    return uVar1;
}

/*
 * set_4_colors_154  0x8c0ba3b8
 * stores colours a1, a2, a3, s0 at +0x154..+0x160
 * called by: game_uses_sprintf_0d1858
 */
int set_4_colors_154(int a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    int iVar1;

    *(u32 *)(0x154 + a0) = a1;
    *(u32 *)(0x158 + a0) = a2;
    *(u32 *)(0x15c + a0) = a3;
    iVar1 = 0x160;
    *(u32 *)(0x160 + a0) = s0;
    return iVar1;
}

/*
 * game_uses_libgcc_divide_helper_0ba3e0  0x8c0ba3e0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is
 * libgcc_divide_helper_0103d0 called by: game_uses_speech_is_playing_0bad68
 */
u32 *game_uses_libgcc_divide_helper_0ba3e0(int a0, u32 *a1) {
    u32 *puVar1;
    u32 ar5_00;
    float fVar2;

    if (g_8c4365fc == '\0') {
        g_8c4365f8 = (u32 *)0x1;
        g_8c4365fc = '\x01';
    }
    if (*(int *)(a0 + 0x10) == 0) {
        fVar2 = *(float *)(a0 + 4) - 0.7;
        *(float *)(a0 + 4) = fVar2;
        puVar1 = &g_8c0ba480;
        if (fVar2 < 339.0) {
            puVar1 = (u32 *)game_update_fields_0ba870(a0);
        }
    } else {
        ar5_00 = 0x104;
        puVar1 = (u32 *)libgcc_divide_helper_0103d0(*a1, 0x104);
        if ((puVar1 == NULL) && (puVar1 = g_8c4365f8, g_8c4365f8 == (u32 *)0x1)) {
            g_8c4365f8 = NULL;
            puVar1 = (u32 *)game_update_fields_0ba844(a0);
        }
    }
    return puVar1;
}

/*
 * date_time_message_draw  0x8c0ba494
 * draws the date/time message and clears its five words in the order set by +0x10 and +0x14, between two TA FIFO calls
 * called by: ambient_sound_update
 */
u32 date_time_message_draw(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    uStack_1c = *(u32 *)(&DATA_8c13bd0c);
    uStack_18 = *(u32 *)((&DATA_8c13bd0c) + 4);
    uStack_14 = *(u32 *)((&DATA_8c13bd0c) + 8);
    uStack_10 = *(u32 *)((&DATA_8c13bd0c) + 0xc);
    uStack_2c = *(u32 *)(&DATA_8c13bd1c);
    uStack_28 = *(u32 *)((&DATA_8c13bd1c) + 4);
    uStack_24 = *(u32 *)((&DATA_8c13bd1c) + 8);
    uStack_20 = *(u32 *)((&DATA_8c13bd1c) + 0xc);
    ta_fifo_2595aa(2, &uStack_1c, a2, a3);
    if (*(int *)(a0 + 0x10) == 0) {
        if (*(int *)(a0 + 0x14) == 1) {
            game_uses_clear_5_words_0ba5e0(a0, a1, a2, a3);
            show_date_time_message(a0, a1, a2, a3);
        } else {
            show_date_time_message(a0, a1, a2, a3);
            game_uses_clear_5_words_0ba5e0(a0, a1, a2, a3);
        }
    } else if (*(int *)(a0 + 0x14) == 1) {
        game_uses_clear_5_words_0ba5e0(a0, a1, a2, a3);
    } else {
        show_date_time_message(a0, a1, a2, a3);
    }
    uVar1 = ta_fifo_2595aa(0, &uStack_2c, a2, a3);
    return uVar1;
}

/*
 * game_init_fields_0ba5bc  0x8c0ba5bc
 * area name: game code; nothing names its area yet; behaviour name: writes 3 members
 * called by: CProlog_calls_init_fields_0ba37c, Class_12b350_vec_0ba354, game_uses_get_word_8_0bf22c
 */
u32 game_init_fields_0ba5bc(u32 *a0) {
    *a0 = 0x43200000;
    a0[1] = 0x43a98000;
    a0[4] = 1;
    a0[5] = 1;
    return 1;
}

/*
 * game_uses_clear_5_words_0ba5e0  0x8c0ba5e0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is clear_5_words
 * called by: date_time_message_draw
 */
u32 game_uses_clear_5_words_0ba5e0(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar6_00;
    u32 ar7_00;
    u64 in_dr4;
    u32 ain0;
    u8 auStack_3c[20];
    u32 uStack_28;

    ain0 = (u32)((u64)in_dr4 >> 0x20);
    uStack_28 = g_8c13bd2c;
    uVar1 = a1;
    clear_5_words(auStack_3c, a1, a2, a3);
    obj_set_texlist(a1, uVar1, a2);
    obj_set_texture_num(a1, 0xf);
    ar7_00 = 4;
    ar6_00 = 0x8c43654c;
    set_fields_0_4_c(auStack_3c, &uStack_28, 0x8c43654c, 4);
    Class_129808_set_model(auStack_3c, &g_8c43655c, ar6_00);
    uVar1 = 0x80000060;
    set_field_10(auStack_3c, 0x80000060);
    Class_129808_draw_offset(auStack_3c, uVar1, ar6_00, ar7_00);
    uVar1 = free_if_nonnull_wrap_0151a0(auStack_3c, 0xffffffff, ar6_00, ar7_00);
    return uVar1;
}

/*
 * show_date_time_message  0x8c0ba6bc
 * formats the RTC date as "<month>.dd,hh:mm AM/PM" and shows it as a message
 * called by: date_time_message_draw
 * strings: "%s.%2d,%2d:%02d AM"; "%s.%2d,%2d:%02d PM"
 */
u32 show_date_time_message(u32 unused_a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    char cVar2;
    u8 auStack_24[20];
    u8 auStack_10[4];
    u8 bStack_c;

    cVar2 = '\0';
    if (g_8c43660c == '\0') {
        g_8c436608 = (u8 **)0x3f866666;
        g_8c43660c = CONCAT31(g_8c43660d, 1);
    }
    rtc_get_date(auStack_10, a1, unused_a2, a3);
    if (cVar2 != '\0') {
        g_8c436608 = &PTR_DAT_8c13bd4c;
    }
    g_8c436604 = 0x41980000;
    g_8c436600 = 0x42480000;
    if (bStack_c < 0xc) {
        if (bStack_c == 0) {
            bStack_c = 0xc;
        }
        sprintf(auStack_24, a1, unused_a2, a3, "%s.%2d,%2d:%02d AM");
    } else {
        if (bStack_c != 0xc) {
            bStack_c = bStack_c - 0xc;
        }
        sprintf(auStack_24, a1, unused_a2, a3, "%s.%2d,%2d:%02d PM");
    }
    uVar1 = game_uses_obj_set_texlist_0c4370(&g_8c2b5628, auStack_24, 0, 0xe);
    return uVar1;
}

/*
 * game_update_fields_0ba844  0x8c0ba844
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: game_uses_libgcc_divide_helper_0ba3e0
 */
u32 game_update_fields_0ba844(int a0) {
    if (*(int *)(a0 + 0x14) == 0) {
        *(u32 *)(a0 + 4) = 0x43ca0000;
    } else {
        *(u32 *)(a0 + 4) = 0x43ca0000;
    }
    *(u32 *)(a0 + 0x10) = 0;
    return 0;
}

/*
 * game_update_fields_0ba870  0x8c0ba870
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: game_uses_libgcc_divide_helper_0ba3e0
 */
u32 game_update_fields_0ba870(int a0) {
    if (*(int *)(a0 + 0x14) == 0) {
        *(u32 *)(a0 + 0x14) = 1;
    } else {
        *(u32 *)(a0 + 0x14) = 0;
    }
    *(u32 *)(a0 + 4) = 0x43a98000;
    *(u32 *)(a0 + 0x10) = 1;
    return 1;
}

/*
 * Class_12b36c_ctor  0x8c0ba898
 * vtable 0x8c12b36c, +4 = 0
 * called by: Class_12b334_ctor, Class_12b350_ctor, Class_12b388_ctor
 */
u32 *Class_12b36c_ctor(u32 *a0) {
    *a0 = (&DATA_8c12b36c);
    a0[1] = 0;
    return a0;
}

/*
 * Class_12b36c_dtor  0x8c0ba8ac
 * stores the vtable 0x8c12b36c
 * called by: Class_12b334_dtor, Class_12b350_dtor, Class_12b388_dtor
 */
u32 *Class_12b36c_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c12b36c, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_12b350_ctor  0x8c0ba8e4
 * stores the vtable 0x8c12b350
 * called by: game_uses_Class_12b350_ctor_0bff8c
 */
u32 *Class_12b350_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 extraout_fr1;
    char cVar2;

    cVar2 = '\0';
    Class_12b36c_ctor(a0);
    *a0 = &g_8c12b350;
    Class_129920_ctor(a0 + 0x12, a1);
    clear_5_words(a0 + 0x14, a1, a2, a3);
    Class_12b350_vec_0ba354(a0 + 0x56, a1, a2);
    a0[2] = 0;
    a0[0xc] = 2;
    *(u16 *)(a0 + 0xe) = 0xff;
    a0[0xf] = 1;
    a0[0x10] = 0;
    a0[0x11] = 0;
    if (cVar2 == '\0') {
        a0[0xd] = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0xd) = CONCAT44(0x3f800000, extraout_fr1);
    }
    uVar1 = g_8c13bd80;
    a0[3] = g_8c13bd7c;
    a0[4] = uVar1;
    a0[5] = PTR_s_GRAPHICS_0baac0_8c13bd84;
    uVar1 = g_8c13bd8c;
    a0[6] = g_8c13bd88;
    a0[7] = uVar1;
    a0[8] = PTR_FUN_8c13bd90;
    uVar1 = g_8c13bd98;
    a0[9] = g_8c13bd94;
    a0[10] = uVar1;
    a0[0xb] = PTR_FUN_8c13bd9c;
    a0[0x53] = 0;
    a0[0x54] = 1;
    a0[0x55] = 0xffffff;
    return a0;
}

/*
 * vec3_member_dtor_0ba9c8  0x8c0ba9c8
 * destroys the vector and frees the object when a1 > 0
 * called by: Class_12b350_dtor
 */
int vec3_member_dtor_0ba9c8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b350_dtor  0x8c0baa08
 * restores the Class_12b350 vtable, destroys its members (+0x158, +0x50, +0x48) and the Class_12b36c base, and frees a0
 * when asked called by: game_release_0c0368
 */
u32 *Class_12b350_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b350;
        vec3_member_dtor_0ba9c8(a0 + 0x56, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_0151a0(a0 + 0x14, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x12, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_12b36c_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b350_m1_0baa84  0x8c0baa84
 */
u32 Class_12b350_m1_0baa84(void) {
    u32 uVar1;

    uVar1 = pure_virtual_stub();
    return uVar1;
}

/*
 * CProlog_Ready  0x8c0baab8
 * strings: "TITLE.pvm"; "GRAPHICS"; "Failed to load Title pvm.."; "CProlog::Ready" ...
 */
u32 CProlog_Ready(int a0, u32 *a1) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    u32 extraout_fr1;
    char cVar6;

    cVar6 = '\0';
    *a1 = 0;
    *(u32 *)(a0 + 0x30) = 0;
    uVar2 = 0;
    ninja_draw_257104(0);
    pvr_draw_235eb4();
    if (cVar6 == '\0') {
        *(u32 *)(a0 + 0x34) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x34) = CONCAT44(0x3f800000, extraout_fr1);
    }
    for (iVar5 = 0; iVar5 < 0x12; iVar5 = iVar5 + 1) {
        *(u32 *)(iVar5 * 0xc + a0 + 0x68) = 0;
    }
    uVar4 = 0x12;
    uVar2 = 0x8c4312a8;
    ptr_list_build_1c(a0 + 0x13c, a0 + 100, 0x8c4312a8, 0x12);
    iVar5 = a0 + 0x13c;
    (**(code **)(*(int *)(a0 + 0x48) + 8))((int *)(a0 + 0x48), iVar5, uVar2, uVar4);
    uVar2 = get_field_4_0253e4(a0 + 0x48, iVar5, uVar2, uVar4);
    iVar5 = retry_until_done_020f90(0x8c3eb334, "TITLE.pvm", "GRAPHICS", uVar2);
    if (iVar5 == 0) {
        uVar2 = 2;
        report_error_message("Failed to load Title pvm..", "CProlog::Ready", 0, 2);
    }
    *(u16 *)(a0 + 0x38) = 0xff;
    *(u32 *)(a0 + 0x3c) = 1;
    *(u32 *)(a0 + 0x40) = 0;
    uVar4 = 0x4208;
    save_files_check("SM2000US.USR", 0x8c431a68, 0x4208);
    *(u16 *)((int)a1 + 0x96) = g_8c431a86;
    *(u16 *)(a1 + 0x26) = g_8c431a88;
    *(u16 *)((int)a1 + 0x9a) = g_8c431a8a;
    *(u16 *)(a1 + 0x27) = g_8c431a8c;
    *(u16 *)((int)a1 + 0x9e) = g_8c431a8e;
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
        *(u8 *)((int)a1 + iVar5 + 4) = *(u8 *)(iVar5 + 0x8c431a92);
    }
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
        iVar1 = iVar5 * 10;
        *(u16 *)((int)a1 + iVar5 * 10 + 0xc) = *(u16 *)(iVar1 + 0x8c431a9a);
        *(u16 *)((int)a1 + iVar5 * 10 + 0xe) = *(u16 *)(iVar1 + 0x8c431a9c);
        *(u16 *)((int)a1 + iVar5 * 10 + 0x10) = *(u16 *)(iVar1 + 0x8c431a9e);
        *(u16 *)((int)a1 + iVar5 * 10 + 0x12) = *(u16 *)(iVar1 + 0x8c431aa0);
        *(u16 *)((int)a1 + iVar5 * 10 + 0x14) = *(u16 *)(iVar1 + 0x8c431aa2);
    }
    uVar3 = 0x8c431ab8;
    copy_record_56(a1 + 0xb, 0x8c431ab8);
    CProlog_record_visit_date(a1, uVar3, uVar4, uVar2);
    uVar3 = CProlog_classify_day_period(a1, 0, uVar4, uVar2);
    a1[0x30] = uVar3;
    uVar4 = CProlog_uses_free_sys_0b96e4(a1, &g_8c431a7c, uVar4, uVar2);
    a1[0x31] = uVar4;
    *(int *)(a0 + 0x150) = *(int *)(a0 + 0x150) + 1;
    uVar4 = 0x4208;
    iVar5 = save_files_check("SM2000US.USR", 0x8c431a68, 0x4208);
    if (iVar5 == 0) {
        uVar4 = 0x8c431a68;
        CProlog_uses_libgcc_divide_helper_0cd3c8(a1[0x1f6], a1, 0x8c431a68, uVar2);
    }
    uVar3 = pack_acquire_entry_handle(0x8c2b59d0, "AMB_FOREST", uVar4, uVar2);
    *(u32 *)(a0 + 0x144) = uVar3;
    uVar3 = pack_acquire_entry_handle(0x8c2b59d0, "AMB_RAIN", uVar4, uVar2);
    *(u32 *)(a0 + 0x148) = uVar3;
    CProlog_calls_init_fields_0ba37c(a0 + 0x158);
    *(u32 *)(a0 + 8) = 1;
    return 1;
}

/*
 * game_uses_speech_is_playing_0bad68  0x8c0bad68
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is speech_is_playing
 */
u32 game_uses_speech_is_playing_0bad68(int a0, u8 *a1, u32 a2, u8 *a3) {
    u32 ar4_00;
    int iVar1;
    u8 *ar4_01;
    u32 ar4_02;
    u8 *ar5_00;
    int iVar2;
    int iVar3;
    float fVar4;
    double dVar5;
    float fVar6;
    u64 in_xd0;
    char cVar7;
    char cVar8;
    u8 auStack_4c[12];
    u8 auStack_40[20];
    u8 auStack_2c[24];

    cVar8 = '\0';
    cVar7 = '\0';
    ar5_00 = a1;
    ar4_00 = get_field_a510_01f538(0x8c3dd7dc);
    iVar3 = 0;
    ar4_01 = auStack_40;
    clear_5_words(ar4_01, ar5_00, a2, a3);
    iVar2 = 1;
    if (g_8c43660e == '\0') {
        g_8c43660d = '\0';
        g_8c43660e = '\x01';
    }
    if (*(int *)(a0 + 0x30) == 0) {
        if (cVar8 == '\0') {
            dVar5 = (double)CONCAT44(0x3ca3d70a, *(u32 *)(a0 + 0x34));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x34);
            dVar5 = -3.3816247524205755e-250;
        }
        if (cVar7 == '\0') {
            fVar4 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
        } else {
            fVar4 = SUB84(dVar5 - dVar5, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x34) = fVar4;
        } else {
            *(u64 *)(a0 + 0x34) = in_xd0;
        }
        pvr_fill_fog_table_like();
        if (cVar8 == '\0') {
            fVar4 = *(float *)(a0 + 0x34);
            fVar6 = 0.2;
        } else {
            fVar4 = 0.2;
            fVar6 = 2.79699e-42;
        }
        if (cVar7 != '\0' || fVar4 <= fVar6) {
            *(u32 *)(a0 + 0x30) = 2;
        }
    }
    ar4_02 = *(u32 *)(a1 + 0x7cc);
    iVar1 = input_no_buttons_held(ar4_02, ar5_00, a2, a3);
    if (iVar1 == 1) {
        *(u32 *)(a0 + 0x40) = 1;
    }
    if (*(int *)(a0 + 0x40) == 1) {
        ar4_02 = *(u32 *)(a1 + 0x7cc);
        iVar1 = input_reset_combo_held(ar4_02, ar5_00, a2, a3);
        if (iVar1 == 1) {
            pack_release_entry_handle(0x8c2b59d0, *(u32 *)(a0 + 0x144), a2, a3);
            ar5_00 = *(u8 **)(a0 + 0x148);
            pack_release_entry_handle(0x8c2b59d0, ar5_00, a2, a3);
            ar4_02 = 0x8c35468c;
            iVar1 = speech_is_playing(0x8c35468c, ar5_00);
            if (iVar1 == 1) {
                ar4_02 = 0x8c35468c;
                speech_stop(0x8c35468c, ar5_00, a2, a3);
            }
            *(u32 *)(a1 + 0x7dc) = 4;
        }
    }
    if (*(int *)(a0 + 0x30) == 2) {
        iVar2 = startup_warning_show_for_state(ar4_00, ar5_00, a2);
        iVar3 = save_files_presence(ar4_00, ar5_00, a2, a3);
        ar4_02 = ar4_00;
    }
    if (iVar2 == 1) {
        if (g_8c43660d == '\0') {
            if (iVar3 == 0) {
                if (*(int *)(a0 + 0x30) != 1) {
                    ar5_00 = a1;
                    game_select_intro_or_ending(a0, a1, a2, a3);
                }
                if ((*(int *)(a0 + 0x14c) == 0) || (*(int *)(a0 + 0x14c) == 1)) {
                    ar5_00 = a1;
                    game_uses_libgcc_divide_helper_0ba3e0(a0 + 0x158, a1);
                }
                if (((*(int *)(a0 + 0x14c) != 0) &&
                     (iVar2 = input_start_pressed_wrap(*(u32 *)(a1 + 0x7cc)), iVar2 == 1)) &&
                    (*(int *)(a0 + 0x30) == 2)) {
                    ar5_00 = auStack_4c;
                    game_init_fields_0bb158(a1, ar5_00);
                    iVar2 = save_file_date_matches(auStack_4c, ar5_00, a2, a3);
                    if (iVar2 == 0) {
                        g_8c43660d = '\x01';
                    } else {
                        *(u32 *)(a0 + 0x30) = 1;
                        iVar2 = speech_is_playing(0x8c35468c, ar5_00);
                        if (iVar2 == 1) {
                            speech_stop(0x8c35468c, ar5_00, a2, a3);
                            strcpy(auStack_2c, &g_8c13c8e2);
                            strcpy(0x8c4362a0, auStack_2c);
                            ar5_00 = a1;
                            game_fill_loop_0bf1c8(a0, a1);
                        }
                    }
                }
            } else {
                save_show_file_message(iVar3);
                game_uses_clear_5_words_0b79f0(iVar3, ar5_00, a2, a3);
            }
        } else {
            game_uses_clear_5_words_0b79f0(ar4_02, ar5_00, a2, a3);
            a3 = &g_8c13c025;
            a2 = 0;
            ar5_00 = (u8 *)0x5;
            startup_warning_check(&g_8c2b5628, 5, 0, &g_8c13c025);
        }
    } else {
        game_uses_clear_5_words_0b79f0(ar4_02, ar5_00, a2, a3);
        g_8c43660d = '\0';
    }
    if (*(int *)(a0 + 0x30) == 1) {
        *(int *)(a0 + 0x154) = *(int *)(a0 + 0x154) + 0x5000000;
        if (((*(u32 *)(a0 + 0x154) < 0x20000001) &&
             (iVar2 = a0, iVar3 = speech_is_playing(0x8c35468c, ar5_00), iVar3 == 0)) &&
            ((iVar3 = strcmp_0b6e04(&g_8c13c8e2, 0x8c4362a0), iVar3 == 0 && (*(int *)(a0 + 0x14c) != 4)))) {
            strcpy(0x8c4362c0, &g_8c13c025);
            a2 = 0x8c436280;
            g_8c43627c = speech_request(0x8c35468c, 6, 0x8c436280, a3);
        }
        if (0xfeffffff < *(u32 *)(a0 + 0x154)) {
            *(u32 *)(a0 + 8) = 2;
        }
    }
    ambient_sound_update(a0, a1, a2, a3);
    free_if_nonnull_wrap_0151a0(auStack_40, 0xffffffff, a2, a3);
    return 1;
}

/*
 * game_init_fields_0bb158  0x8c0bb158
 * area name: game code; nothing names its area yet; behaviour name: writes 7 members
 * called by: game_uses_speech_is_playing_0bad68
 */
u32 game_init_fields_0bb158(int a0, u16 *a1) {
    u8 bVar1;

    *a1 = *(u16 *)(0x96 + a0);
    *(u8 *)(a1 + 1) = *(u8 *)(0x98 + a0);
    *(u8 *)((int)a1 + 3) = *(u8 *)(0x99 + a0);
    *(u8 *)(a1 + 2) = *(u8 *)(0x9a + a0);
    *(u8 *)((int)a1 + 5) = *(u8 *)(0x9b + a0);
    *(u8 *)(a1 + 3) = *(u8 *)(0x9c + a0);
    *(u8 *)((int)a1 + 7) = *(u8 *)(0x9d + a0);
    bVar1 = *(u8 *)(0x9e + a0);
    *(u8 *)(a1 + 4) = bVar1;
    return (u32)bVar1;
}

/*
 * input_start_pressed_wrap  0x8c0bb1bc
 * only calls input_start_pressed
 * called by: Class_12b334_m1_0bf3d4, game_uses_speech_is_playing_0bad68
 */
u32 input_start_pressed_wrap(int a0) {
    u32 uVar1;

    uVar1 = input_start_pressed(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * ambient_sound_update  0x8c0bb1e4
 * plays and switches the forest and rain ambience (AMB_FOREST, AMB_RAIN)
 * called by: game_uses_speech_is_playing_0bad68
 * strings: "AMB_FOREST"; "AMB_FOREST"; "AMB_FOREST"; "AMB_FOREST" ...
 */
u32 ambient_sound_update(int a0, int a1, u8 *a2, u8 *a3) {
    u32 uVar1;
    int iVar2;
    u8 *ar4_00;
    u8 *puVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    u8 *puVar7;
    u32 uVar8;
    code *pcVar9;
    char *ar6_00;
    code *ar6_01;
    u8 *puVar10;
    float fVar11;
    u8 *puVar12;
    int iVar13;
    float fVar14;
    u64 in_dr0;
    double dVar15;
    double dVar16;
    float fVar18;
    double dVar17;
    double in_dr2;
    double in_xd0;
    bool bVar19;
    int iVar20;
    int iVar21;
    int iVar22;
    char cVar23;
    char cVar24;
    int iStack_88;
    u8 auStack_84[4];
    u8 bStack_80;
    u8 bStack_7f;
    u8 bStack_7e;
    u8 auStack_78[20];
    u16 uStack_64;
    u16 uStack_62;
    u16 uStack_60;
    u16 uStack_5e;
    u16 uStack_5c;
    u16 uStack_5a;
    u16 uStack_58;
    u16 uStack_56;
    u32 uStack_54;
    u8 auStack_34[24];

    cVar24 = '\0';
    cVar23 = '\0';
    if (g_8c436610 == '\0') {
        g_8c43660f = '\0';
        g_8c436610 = '\x01';
    }
    if (g_8c436618 == '\0') {
        a2 = &g_8c436614;
        in_dr0 = in_dr0 & 0xffffffff;
        g_8c436614 = (double)CONCAT35((s32)((u64)g_8c436614 >> 0x28), 0x100000000);
    }
    uStack_54 = g_8c13be00;
    uVar1 = g_8c13be18;
    clear_5_words(auStack_78, g_8c13be18, a2, a3);
    if (g_8c4366c4 == '\0') {
        uVar1 = rand();
        g_8c4366c0 = (float)libgcc_divide_helper_01031c(uVar1, 0x2e, a2);
        uVar1 = 1;
        g_8c4366c4 = '\x01';
    }
    if (g_8c4366d0 == '\0') {
        g_8c4366cc = 0;
        g_8c4366d0 = '\x01';
    }
    if (g_8c4366d8 == '\0') {
        g_8c4366d4 = 0;
        a3 = &g_8c4366d8;
        uVar1 = 1;
        g_8c4366d8 = '\x01';
    }
    if (g_8c4366e0 == '\0') {
        g_8c4366dc = 1;
        g_8c4366e0 = '\x01';
    }
    uVar1 = get_field_a510_01f538(0x8c3dd7dc);
    if (g_8c4366ec == '\0') {
        g_8c4366e8 = 0;
        g_8c4366ec = '\x01';
    }
    puVar10 = (u8 *)0x4;
    uVar8 = 0x8c43661c;
    set_fields_0_4_c(auStack_78, &uStack_54, 0x8c43661c, 4);
    Class_129808_set_model(auStack_78, &uStack_64, uVar8);
    set_field_10(auStack_78, 0x80000060);
    if (*(int *)(a0 + 0x150) != g_8c4366d4) {
        g_8c43660f = '\0';
        puVar10 = &g_8c4366d4;
        uVar8 = 0x150;
        g_8c4366d4 = *(int *)(a0 + 0x150);
    }
    rtc_get_date_wrap(a1, auStack_84, uVar8, puVar10);
    pcVar9 = (code *)&g_8c43660f;
    if (g_8c43660f == '\0') {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
            *(u32 *)(&g_8c43663c + iVar2 * 4) = 0xffffff;
            *(u32 *)(iVar2 * 4 + 0x8c43664c) = 0xffffff;
            *(u32 *)(iVar2 * 4 + 0x8c43667c) = 0xffffff;
            *(u32 *)(&g_8c43668c + iVar2 * 4) = 0xffffffff;
            *(u32 *)(iVar2 * 4 + 0x8c43669c) = 0xffffff;
        }
        g_8c43662c = 0;
        g_8c43662e = 0xff;
        g_8c436630 = 0;
        g_8c436632 = 0;
        g_8c436634 = 0xff;
        g_8c436636 = 0;
        g_8c436638 = 0xff;
        g_8c43663a = 0xff;
        puVar10 = (u8 *)0x4;
        pcVar9 = (code *)0x8c43661c;
        set_fields_0_4_c(a0 + 0x50, 0, 0x8c43661c, 4);
        set_field_10(a0 + 0x50, 0x80000060);
        iVar2 = 0;
        for (iVar20 = 0; iVar20 < 8; iVar20 = iVar20 + 1) {
            puVar10 = (u8 *)(a1 + iVar20);
            iVar2 = (u32)(u8)puVar10[4] + iVar2;
        }
        puVar3 = auStack_84;
        rtc_get_date_wrap(a1, puVar3, pcVar9, puVar10);
        g_8c4366ac = get_field_c8_0bced0(a1);
        ar4_00 = &g_8c4366ac;
        for (puVar12 = NULL; (int)puVar12 < 0x14; puVar12 = puVar12 + 1) {
            puVar3 = puVar12;
        }
        for (iVar20 = 0; iVar20 < (int)(u32)bStack_7e; iVar20 = iVar20 + 1) {
            pcVar9 = rand;
            rand();
        }
        if (cVar23 == '\0') {
            dVar16 = (double)CONCAT44((float)bStack_80, SUB84(in_dr2, 0));
        } else {
            dVar16 = (double)bStack_80;
        }
        if (cVar24 == '\0') {
            dVar17 = (double)CONCAT44(0x42700000, (int)in_dr0);
        } else {
            dVar17 = 6.64735386069639e-312;
        }
        if (cVar23 == '\0') {
            dVar15 = (double)CONCAT44((float)bStack_7f, SUB84(dVar17, 0));
            in_dr2 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * (float)((u64)dVar17 >> 0x20) + (float)bStack_7f,
                                      SUB84(dVar16, 0));
        } else {
            dVar15 = (double)bStack_7f;
            in_dr2 = dVar16 * dVar17 + dVar15;
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x40200000, SUB84(dVar15, 0));
        } else {
            dVar16 = 7.63971638255348e-311;
        }
        if (cVar23 == '\0') {
            in_dr2 = (double)CONCAT44((float)((u64)in_dr2 >> 0x20) * (float)((u64)dVar16 >> 0x20), SUB84(in_dr2, 0));
        } else {
            in_dr2 = in_dr2 * dVar16;
        }
        fVar11 = (float)bStack_7f;
        if (cVar24 == '\0') {
            fVar14 = 60.0;
        } else {
            fVar11 = 60.0;
            fVar14 = 4.38606e-43;
        }
        if (cVar23 == '\0') {
            fVar11 = fVar11 * fVar14 + (float)bStack_7e;
            dVar16 = (double)CONCAT44((float)bStack_7e, fVar11);
            fVar11 = (float)((u64)in_dr2 >> 0x20) - fVar11;
            in_dr2 = (double)CONCAT44(fVar11, SUB84(in_dr2, 0));
            g_8c4366b0 = (u8 *)(int)fVar11;
        } else {
            dVar16 = (double)bStack_7e + (double)bStack_7e;
            in_dr2 = in_dr2 - dVar16;
            g_8c4366b0 = (u8 *)(int)in_dr2;
        }
        uVar8 = SUB84(dVar16, 0);
        if ((int)g_8c4366b0 < 0) {
            g_8c4366b0 = g_8c4366b0 + 0xe10;
        }
        uVar6 = rand();
        uVar4 = 0x3c;
        g_8c4366b4 = libgcc_divide_helper_01031c(uVar6, 0x3c, pcVar9);
        uVar6 = rand();
        uVar4 = 0x41;
        iVar20 = libgcc_divide_helper_01031c(uVar6, 0x41, pcVar9);
        if (cVar23 == '\0') {
            dVar16 = (double)CONCAT44((float)iVar20, uVar8);
        } else {
            dVar16 = (double)iVar20;
        }
        fVar11 = (float)((u64)dVar16 >> 0x20);
        g_8c4366b8 = fVar11;
        if (cVar24 != '\0') {
            g_8c4366b8 = SUB84(dVar16, 0);
            g_8c4366bc = fVar11;
        }
        uVar8 = rand();
        uVar6 = SUB84(dVar16, 0);
        iVar20 = libgcc_divide_helper_01031c(uVar8, 0x46, pcVar9);
        if (cVar23 == '\0') {
            dVar16 = (double)CONCAT44((float)iVar20, uVar6);
        } else {
            dVar16 = (double)iVar20;
        }
        fVar11 = (float)((u64)dVar16 >> 0x20);
        g_8c4366bc = SUB84(dVar16, 0);
        if (cVar24 == '\0') {
            g_8c4366bc = fVar11;
            fVar11 = g_8c4366c0;
        }
        g_8c4366c0 = fVar11;
        if (iVar2 == 1) {
            if (cVar24 == '\0') {
                g_8c4366b8 = 0.0;
            } else {
                g_8c4366c0 = 0.0;
                g_8c4366b8 = SUB84(dVar16, 0);
            }
            g_8c4366bc = 0.0;
            dVar16 = (double)((u64)dVar16 & 0xffffffff);
            iVar2 = -((u32)bStack_7f * 0x3c + (u32)bStack_7e);
            g_8c4366b0 = (u8 *)(iVar2 + 0x708);
            if ((int)g_8c4366b0 < 0) {
                g_8c4366b0 = (u8 *)(iVar2 + 0x1518);
            }
        }
        fVar11 = SUB84(dVar16, 0);
        if (4 < g_8c4366ac) {
            pcVar9 = (code *)&g_8c4366b8;
            if (cVar24 == '\0') {
                g_8c4366b8 = 60.0;
                g_8c4366bc = 70.0;
            } else {
                g_8c4366b8 = 60.0;
                fVar11 = 70.0;
                g_8c4366bc = 70.0;
                g_8c4366c0 = 90.0;
            }
        }
        if (10 < g_8c4366ac) {
            if (cVar24 == '\0') {
                g_8c4366b8 = 60.0;
                g_8c4366bc = 90.0;
            } else {
                g_8c4366b8 = 60.0;
                fVar11 = 90.0;
                g_8c4366bc = 90.0;
                g_8c4366c0 = 1.1911e-42;
            }
        }
        if ((((*(int *)(a1 + 0x30) == 0x25) || (*(int *)(a1 + 0x34) == 0x25)) || (*(int *)(a1 + 0x38) == 0x25)) &&
            (*(char *)(a1 + 0x69) == '\0')) {
            if (cVar24 == '\0') {
                g_8c4366bc = 0.0;
            } else {
                g_8c4366c0 = 0.0;
                g_8c4366bc = fVar11;
            }
            iVar2 = -((u32)bStack_7f * 0x3c + (u32)bStack_7e);
            g_8c4366b0 = (u8 *)(iVar2 + 0x352);
            if ((int)g_8c4366b0 < 0) {
                puVar10 = (u8 *)(iVar2 + 0x1162);
                g_8c4366b0 = puVar10;
            }
        }
        g_8c4366c8 = 0;
        g_8c43660f = '\x01';
    }
    ar6_00 = (char *)pcVar9;
    if (g_8c4366e8 != 0) {
        if (cVar24 == '\0') {
            fVar14 = 72.0;
            fVar11 = g_8c4366b8;
        } else {
            in_xd0 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
            fVar11 = 72.0;
            fVar14 = 4.54021e-43;
        }
        if (cVar23 == '\0' && fVar11 < fVar14) {
            pack_release_entry_handle(0x8c2b59d0, *(u32 *)(a0 + 0x144), pcVar9, puVar10);
            ar6_00 = (char *)pcVar9;
        }
        pack_release_entry_handle(0x8c2b59d0, *(u32 *)(a0 + 0x148), ar6_00, puVar10);
    }
    if (cVar24 == '\0') {
        fVar14 = 30.0;
        fVar11 = g_8c4366b8;
    } else {
        in_xd0 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
        fVar11 = 30.0;
        fVar14 = -1.6662342e+14;
    }
    g_8c4366e8 = uVar1;
    if (cVar23 == '\0' && fVar11 < fVar14) {
        puVar10 = (u8 *)0x898;
        ar6_00 = NULL;
        pack_sound_021d90(0x8c2b59d0, *(u32 *)(a0 + 0x144), 0, 0x898);
    }
    iVar2 = pack_entry_poll_status_wrap(0x8c2b59d0, *(u32 *)(a0 + 0x144), ar6_00);
    if (iVar2 == 2) {
        ar6_00 = (char *)pack_acquire_entry_handle(0x8c2b59d0, "AMB_FOREST", ar6_00, puVar10);
        puVar10 = (u8 *)0x144;
        *(char **)(a0 + 0x144) = ar6_00;
    } else {
        if (cVar24 == '\0') {
            fVar14 = 65.0;
            fVar11 = g_8c4366b8;
        } else {
            in_xd0 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
            fVar11 = 65.0;
            fVar14 = 30.0;
        }
        if (cVar23 != '\0' || fVar14 <= fVar11) {
            if (cVar24 == '\0') {
                fVar14 = 72.0;
                fVar11 = g_8c4366b8;
            } else {
                in_xd0 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
                fVar11 = 72.0;
                fVar14 = 4.54021e-43;
            }
            if (cVar23 == '\0' && fVar11 < fVar14) {
                pack_release_entry_handle(0x8c2b59d0, *(u32 *)(a0 + 0x144), ar6_00, puVar10);
            }
        } else {
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x41f00000, g_8c4366b8);
            } else {
                in_xd0 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
                dVar16 = 1.7021678581004447e+27;
            }
            if (cVar23 == '\0') {
                fVar11 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
            } else {
                fVar11 = SUB84(dVar16 - dVar16, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x45960000, fVar11);
            } else {
                dVar16 = 15032387762.75;
            }
            if (cVar23 == '\0') {
                fVar11 = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);
            } else {
                fVar11 = SUB84(dVar16 * dVar16, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x420c0000, fVar11);
            } else {
                dVar16 = 3.853451644918994e+24;
            }
            if (cVar23 == '\0') {
                fVar11 = SUB84(dVar16, 0) / (float)((u64)dVar16 >> 0x20);
            } else {
                fVar11 = SUB84(dVar16 / dVar16, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x45098000, fVar11);
            } else {
                dVar16 = 6.880988880521e-312;
            }
            if (cVar23 == '\0') {
                puVar10 = (u8 *)(int)(SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20));
            } else {
                puVar10 = (u8 *)(int)(dVar16 + dVar16);
            }
            ar6_00 = NULL;
            pack_sound_021d90(0x8c2b59d0, *(u32 *)(a0 + 0x144), 0, puVar10);
            iVar2 = pack_entry_poll_status_wrap(0x8c2b59d0, *(u32 *)(a0 + 0x144), ar6_00);
            if (iVar2 == 2) {
                puVar10 = (u8 *)0x8ea;
                ar6_00 = "AMB_FOREST";
                uVar1 = pack_acquire_entry_handle(0x8c2b59d0, "AMB_FOREST", "AMB_FOREST", 0x8ea);
                *(u32 *)(a0 + 0x144) = uVar1;
            }
        }
    }
    iVar2 = pack_entry_poll_status_wrap(0x8c2b59d0, *(u32 *)(a0 + 0x148), ar6_00);
    if (iVar2 == 2) {
        uVar1 = pack_acquire_entry_handle(0x8c2b59d0, "AMB_RAIN", ar6_00, puVar10);
        *(u32 *)(a0 + 0x148) = uVar1;
    }
    if (cVar24 == '\0') {
        fVar14 = 50.0;
        fVar11 = g_8c4366b8;
    } else {
        in_xd0 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
        fVar11 = 50.0;
        fVar14 = 9.80909e-42;
    }
    if (cVar23 != '\0' || fVar14 <= fVar11) {
        if (cVar24 == '\0') {
            fVar14 = 75.0;
            fVar11 = g_8c4366b8;
        } else {
            in_xd0 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
            fVar11 = 75.0;
            fVar14 = 5300.0;
        }
        if (cVar23 != '\0' || fVar14 <= fVar11) {
            fVar11 = 2.38221e-42;
            iVar2 = 0;
            pack_sound_021d90(0x8c2b59d0, *(u32 *)(a0 + 0x148), 0, 0x6a4);
        } else {
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(g_8c4366b8, 0x42960000);
            } else {
                dVar16 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
                in_xd0 = 3.3463072828401675e+27;
            }
            if (cVar23 == '\0') {
                fVar11 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
            } else {
                fVar11 = SUB84(dVar16 - dVar16, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x45a5a000, fVar11);
            } else {
                dVar16 = 805306507.2939453;
            }
            if (cVar23 == '\0') {
                fVar11 = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);
            } else {
                fVar11 = SUB84(dVar16 * dVar16, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x41c80000, fVar11);
            } else {
                dVar16 = 3.8723412565841415e+23;
            }
            if (cVar23 == '\0') {
                fVar11 = SUB84(dVar16, 0) / (float)((u64)dVar16 >> 0x20);
            } else {
                fVar11 = SUB84(dVar16 / dVar16, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x44d48000, fVar11);
            } else {
                dVar16 = 6.96585155124395e-312;
            }
            if (cVar23 == '\0') {
                fVar11 = (float)(int)(SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20));
            } else {
                fVar11 = (float)(int)(dVar16 + dVar16);
            }
            iVar2 = 0;
            pack_sound_021d90(0x8c2b59d0, *(u32 *)(a0 + 0x148), 0, fVar11);
        }
    } else {
        fVar11 = 9.80909e-42;
        iVar2 = 0;
        pack_sound_021d90(0x8c2b59d0, *(u32 *)(a0 + 0x148), 0, 7000);
    }
    g_8c4366c8 = g_8c4366c8 + 1;
    if (2 < g_8c4366c8) {
        g_8c4366c8 = 0;
    }
    if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x3dcccccd, g_8c436614);
    } else {
        dVar16 = 1.4411521461875377e+18;
        in_xd0 = g_8c436614;
    }
    if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20);
    } else {
        fVar14 = SUB84(dVar16 + dVar16, 0);
    }
    if (cVar24 == '\0') {
        g_8c436614 = (double)CONCAT44(g_8c436618, fVar14);
        dVar16 = (double)CONCAT44(0x43b40000, fVar14);
    } else {
        dVar16 = 6.64745876893557e-312;
        g_8c436614 = in_xd0;
    }
    dVar17 = g_8c436614;
    if ((cVar23 != '\0' || (float)((u64)dVar16 >> 0x20) <= SUB84(dVar16, 0)) &&
        (dVar16 = (double)((u64)dVar16 & 0xffffffff), dVar17 = dVar16, cVar24 == '\0')) {
        g_8c436614 = (double)((u64)g_8c436614 & 0xffffffff00000000);
        dVar17 = g_8c436614;
    }
    g_8c436614 = dVar17;
    puVar10 = g_8c4366b0 + (u32)bStack_7f * 0x3c + (u32)bStack_7e;
    if ((u8 *)0xe10 < puVar10) {
        puVar10 = puVar10 + -0xe10;
    }
    if ((puVar10 < (u8 *)0x272) || (iVar2 = 0x47e, (u8 *)0x47d < puVar10)) {
        if ((puVar10 < (u8 *)0xaf1) || ((u8 *)0xbe9 < puVar10)) {
            if ((puVar10 < (u8 *)0x47e) || ((u8 *)0xaf0 < puVar10)) {
                iVar20 = 0;
            } else {
                iVar20 = 0xaf;
            }
        } else {
            if (cVar23 == '\0') {
                in_dr2 = (double)CONCAT44((float)(int)puVar10, SUB84(in_dr2, 0));
            } else {
                in_dr2 = (double)(int)puVar10;
            }
            dVar17 = (double)((u64)dVar16 & 0xffffffff);
            fVar14 = (float)((u64)in_dr2 >> 0x20);
            if (cVar23 == '\0') {
                bVar19 = fVar14 < 0.0;
            } else {
                bVar19 = in_dr2 < dVar17;
            }
            if (bVar19) {
                if (cVar24 == '\0') {
                    dVar17 = (double)CONCAT44(0x4f800000, SUB84(dVar16, 0));
                } else {
                    dVar17 = 3.7023358954276744e+25;
                }
                if (cVar23 == '\0') {
                    in_dr2 = (double)CONCAT44(fVar14 + (float)((u64)dVar17 >> 0x20), SUB84(in_dr2, 0));
                } else {
                    in_dr2 = in_dr2 + dVar17;
                }
            }
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), 0x453ea000);
            } else {
                in_xd0 = 1.1709360889934643e+17;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar17, 0) - (float)((u64)in_dr2 >> 0x20);
            } else {
                fVar14 = SUB84(dVar17 - in_dr2, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x437a0000, fVar14);
            } else {
                dVar16 = 4.3628627050496e+15;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar16, 0) / (float)((u64)dVar16 >> 0x20);
            } else {
                fVar14 = SUB84(dVar16 / dVar16, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x432f0000, fVar14);
            } else {
                dVar16 = 1.274788992873159e-19;
            }
            if (cVar23 == '\0') {
                fVar18 = (float)((u64)dVar16 >> 0x20);
                fVar14 = SUB84(dVar16, 0) * fVar18;
                dVar16 = (double)CONCAT44(fVar18, fVar14);
                iVar20 = (int)fVar14;
            } else {
                dVar16 = dVar16 * dVar16;
                iVar20 = (int)dVar16;
            }
        }
    } else {
        fVar14 = (float)(int)puVar10;
        if (cVar23 == '\0' && fVar14 < 0.0) {
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x4f800000, fVar14);
            } else {
                dVar16 = 1.3028015187336731e+20;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20);
            } else {
                fVar14 = SUB84(dVar16 + dVar16, 0);
            }
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x441c4000, fVar14);
        } else {
            dVar16 = 4.438748728837905e+19;
        }
        if (cVar23 == '\0') {
            fVar14 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
        } else {
            fVar14 = SUB84(dVar16 - dVar16, 0);
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x44034000, fVar14);
        } else {
            dVar16 = 4362862709547008.0;
        }
        if (cVar23 == '\0') {
            fVar14 = SUB84(dVar16, 0) / (float)((u64)dVar16 >> 0x20);
        } else {
            fVar14 = SUB84(dVar16 / dVar16, 0);
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x432f0000, fVar14);
        } else {
            dVar16 = 1.5458488417764263e-19;
        }
        if (cVar23 == '\0') {
            fVar18 = (float)((u64)dVar16 >> 0x20);
            fVar14 = SUB84(dVar16, 0) * fVar18;
            dVar16 = (double)CONCAT44(fVar18, fVar14);
            iVar20 = (int)fVar14;
        } else {
            dVar16 = dVar16 * dVar16;
            iVar20 = (int)dVar16;
        }
    }
    if ((puVar10 < (u8 *)0x2ef) || ((u8 *)0x47d < puVar10)) {
        if ((puVar10 < (u8 *)0xa8d) || ((u8 *)0xbb7 < puVar10)) {
            if ((puVar10 < (u8 *)0x47e) || ((u8 *)0xa8c < puVar10)) {
                iVar21 = 0;
            } else {
                iVar21 = 0xaf;
            }
        } else {
            if (cVar23 == '\0') {
                in_dr2 = (double)CONCAT44((float)(int)puVar10, SUB84(in_dr2, 0));
            } else {
                in_dr2 = (double)(int)puVar10;
            }
            dVar17 = (double)((u64)dVar16 & 0xffffffff);
            fVar14 = (float)((u64)in_dr2 >> 0x20);
            if (cVar23 == '\0') {
                bVar19 = fVar14 < 0.0;
            } else {
                bVar19 = in_dr2 < dVar17;
            }
            if (bVar19) {
                if (cVar24 == '\0') {
                    dVar17 = (double)CONCAT44(0x4f800000, SUB84(dVar16, 0));
                } else {
                    dVar17 = 3.324546576798103e+25;
                }
                if (cVar23 == '\0') {
                    in_dr2 = (double)CONCAT44(fVar14 + (float)((u64)dVar17 >> 0x20), SUB84(in_dr2, 0));
                } else {
                    in_dr2 = in_dr2 + dVar17;
                }
            }
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), 0x453b8000);
            } else {
                in_xd0 = 3.963168415463506e+17;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar17, 0) - (float)((u64)in_dr2 >> 0x20);
            } else {
                fVar14 = SUB84(dVar17 - in_dr2, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x43960000, fVar14);
            } else {
                dVar16 = 4362862705967104.0;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar16, 0) / (float)((u64)dVar16 >> 0x20);
            } else {
                fVar14 = SUB84(dVar16 / dVar16, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x432f0000, fVar14);
            } else {
                dVar16 = 2.041356454491563e-18;
            }
            if (cVar23 == '\0') {
                fVar18 = (float)((u64)dVar16 >> 0x20);
                fVar14 = SUB84(dVar16, 0) * fVar18;
                dVar16 = (double)CONCAT44(fVar18, fVar14);
                iVar21 = (int)fVar14;
            } else {
                dVar16 = dVar16 * dVar16;
                iVar21 = (int)dVar16;
            }
        }
    } else {
        fVar14 = (float)(int)puVar10;
        if (cVar23 == '\0' && fVar14 < 0.0) {
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x4f800000, fVar14);
            } else {
                dVar16 = 5.072855494381871e+20;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20);
            } else {
                fVar14 = SUB84(dVar16 + dVar16, 0);
            }
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x443b8000, fVar14);
        } else {
            dVar16 = 3.458765099932582e+18;
        }
        if (cVar23 == '\0') {
            fVar14 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
        } else {
            fVar14 = SUB84(dVar16 - dVar16, 0);
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x43c80000, fVar14);
        } else {
            dVar16 = 4362862707605504.0;
        }
        if (cVar23 == '\0') {
            fVar14 = SUB84(dVar16, 0) / (float)((u64)dVar16 >> 0x20);
        } else {
            fVar14 = SUB84(dVar16 / dVar16, 0);
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x432f0000, fVar14);
        } else {
            dVar16 = 1.5458488417764263e-19;
        }
        if (cVar23 == '\0') {
            fVar18 = (float)((u64)dVar16 >> 0x20);
            fVar14 = SUB84(dVar16, 0) * fVar18;
            dVar16 = (double)CONCAT44(fVar18, fVar14);
            iVar21 = (int)fVar14;
        } else {
            dVar16 = dVar16 * dVar16;
            iVar21 = (int)dVar16;
        }
    }
    if ((puVar10 < (u8 *)0x272) || ((u8 *)0x44b < puVar10)) {
        if ((puVar10 < (u8 *)0x9c5) || ((u8 *)0xabd < puVar10)) {
            if ((puVar10 < (u8 *)0x44c) || ((u8 *)0x9c4 < puVar10)) {
                iStack_88 = 0;
            } else {
                iStack_88 = 0x87;
            }
        } else {
            if (cVar23 == '\0') {
                in_dr2 = (double)CONCAT44((float)(int)puVar10, SUB84(in_dr2, 0));
            } else {
                in_dr2 = (double)(int)puVar10;
            }
            dVar17 = (double)((u64)dVar16 & 0xffffffff);
            fVar14 = (float)((u64)in_dr2 >> 0x20);
            if (cVar23 == '\0') {
                bVar19 = fVar14 < 0.0;
            } else {
                bVar19 = in_dr2 < dVar17;
            }
            if (bVar19) {
                if (cVar24 == '\0') {
                    dVar17 = (double)CONCAT44(0x4f800000, SUB84(dVar16, 0));
                } else {
                    dVar17 = 1.6849406475168257e+25;
                }
                if (cVar23 == '\0') {
                    in_dr2 = (double)CONCAT44(fVar14 + (float)((u64)dVar17 >> 0x20), SUB84(in_dr2, 0));
                } else {
                    in_dr2 = in_dr2 + dVar17;
                }
            }
            if (cVar24 == '\0') {
                dVar17 = (double)CONCAT44((int)((u64)dVar17 >> 0x20), 0x452be000);
            } else {
                in_xd0 = 1.1709360887968563e+17;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar17, 0) - (float)((u64)in_dr2 >> 0x20);
            } else {
                fVar14 = SUB84(dVar17 - in_dr2, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x437a0000, fVar14);
            } else {
                dVar16 = 809240699551744.0;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar16, 0) / (float)((u64)dVar16 >> 0x20);
            } else {
                fVar14 = SUB84(dVar16 / dVar16, 0);
            }
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x43070000, fVar14);
            } else {
                dVar16 = 6.45642313192963e-312;
            }
            if (cVar23 == '\0') {
                iStack_88 = (int)(SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20));
            } else {
                iStack_88 = (int)(dVar16 * dVar16);
            }
        }
    } else {
        fVar14 = (float)(int)puVar10;
        if (cVar23 == '\0' && fVar14 < 0.0) {
            if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44(0x4f800000, fVar14);
            } else {
                dVar16 = 1.3028015187336731e+20;
            }
            if (cVar23 == '\0') {
                fVar14 = SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20);
            } else {
                fVar14 = SUB84(dVar16 + dVar16, 0);
            }
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x441c4000, fVar14);
        } else {
            dVar16 = 1.7005594533204853e+19;
        }
        if (cVar23 == '\0') {
            fVar14 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
        } else {
            fVar14 = SUB84(dVar16 - dVar16, 0);
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x43ed8000, fVar14);
        } else {
            dVar16 = 809240700497920.0;
        }
        if (cVar23 == '\0') {
            fVar14 = SUB84(dVar16, 0) / (float)((u64)dVar16 >> 0x20);
        } else {
            fVar14 = SUB84(dVar16 / dVar16, 0);
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x43070000, fVar14);
        } else {
            dVar16 = 6.45642313192963e-312;
        }
        if (cVar23 == '\0') {
            iStack_88 = (int)(SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20));
        } else {
            iStack_88 = (int)(dVar16 * dVar16);
        }
    }
    if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((float)iVar20, SUB84(in_dr2, 0));
    } else {
        dVar16 = (double)iVar20;
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(g_8c4366b8, 0x42c80000);
    } else {
        dVar17 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
        in_xd0 = 8796095210496.0;
    }
    if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17, 0) - (float)((u64)dVar17 >> 0x20);
    } else {
        fVar14 = SUB84(dVar17 - dVar17, 0);
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x42c80000, fVar14);
    } else {
        dVar17 = 8796095210496.0;
    }
    if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17, 0) / (float)((u64)dVar17 >> 0x20);
        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * fVar14, SUB84(dVar16, 0));
    } else {
        fVar14 = SUB84(dVar17 / dVar17, 0);
        dVar16 = dVar16 * (dVar17 / dVar17);
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x42a00000, fVar14);
    } else {
        dVar17 = 281475046572032.0;
    }
    if (cVar23 == '\0') {
        iVar20 = (int)((float)((u64)dVar16 >> 0x20) + (float)((u64)dVar17 >> 0x20));
        dVar16 = (double)CONCAT44((float)iVar21, SUB84(dVar16, 0));
    } else {
        iVar20 = (int)(dVar16 + dVar17);
        dVar16 = (double)iVar21;
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(g_8c4366b8, 0x42c80000);
    } else {
        dVar17 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
        in_xd0 = 8796095210496.0;
    }
    if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17, 0) - (float)((u64)dVar17 >> 0x20);
    } else {
        fVar14 = SUB84(dVar17 - dVar17, 0);
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x42c80000, fVar14);
    } else {
        dVar17 = 8796095210496.0;
    }
    if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17, 0) / (float)((u64)dVar17 >> 0x20);
        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * fVar14, SUB84(dVar16, 0));
    } else {
        fVar14 = SUB84(dVar17 / dVar17, 0);
        dVar16 = dVar16 * (dVar17 / dVar17);
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x42a00000, fVar14);
    } else {
        dVar17 = 281475046572032.0;
    }
    if (cVar23 == '\0') {
        iVar21 = (int)((float)((u64)dVar16 >> 0x20) + (float)((u64)dVar17 >> 0x20));
        dVar16 = (double)CONCAT44((float)iStack_88, SUB84(dVar16, 0));
    } else {
        iVar21 = (int)(dVar16 + dVar17);
        dVar16 = (double)iStack_88;
    }
    puVar10 = &g_8c4366b8;
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(g_8c4366b8, 0x42c80000);
    } else {
        dVar17 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
        in_xd0 = 8796095210496.0;
    }
    if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17, 0) - (float)((u64)dVar17 >> 0x20);
    } else {
        fVar14 = SUB84(dVar17 - dVar17, 0);
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x42c80000, fVar14);
    } else {
        dVar17 = 8796095210496.0;
    }
    if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17, 0) / (float)((u64)dVar17 >> 0x20);
        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) * fVar14, SUB84(dVar16, 0));
    } else {
        fVar14 = SUB84(dVar17 / dVar17, 0);
        dVar16 = dVar16 * (dVar17 / dVar17);
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x42f00000, fVar14);
    } else {
        dVar17 = -5.48612543682247e+303;
    }
    if (cVar23 == '\0') {
        fVar14 = (float)((u64)dVar16 >> 0x20) + (float)((u64)dVar17 >> 0x20);
        dVar16 = (double)CONCAT44(fVar14, SUB84(dVar16, 0));
        iVar22 = (int)fVar14;
    } else {
        dVar16 = dVar16 + dVar17;
        iVar22 = (int)dVar16;
    }
    uVar1 = SUB84(dVar16, 0);
    for (iVar13 = 0; iVar13 < 4; iVar13 = iVar13 + 1) {
        puVar10 = (u8 *)(iVar13 * 4);
        *(int *)(puVar10 + 0x8c43661c) = iVar20 * 0x10000 + -0x1000000 + iVar21 * 0x100 + iVar22;
    }
    uVar5 = (u32)bStack_7f;
    if (g_8c4366b4 == uVar5) {
        uVar8 = rand();
        uVar6 = 0x3c;
        g_8c4366b4 = libgcc_divide_helper_01031c(uVar8, 0x3c, iVar2);
        uVar8 = rand();
        uVar5 = 0xb;
        iVar2 = libgcc_divide_helper_01031c(uVar8, 0xb, iVar2);
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x41200000, (float)iVar2);
        } else {
            dVar16 = 5.330973659922055e-35;
        }
        if (cVar23 == '\0') {
            g_8c4366bc = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);
        } else {
            g_8c4366bc = SUB84(dVar16 * dVar16, 0);
        }
        if (cVar24 != '\0') {
            g_8c4366bc = SUB84(in_xd0, 0);
            g_8c4366c0 = (float)((u64)in_xd0 >> 0x20);
        }
    }
    if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(g_8c4366b8, g_8c4366bc);
    } else {
        in_xd0 = (double)CONCAT44(g_8c4366c0, g_8c4366bc);
        dVar16 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
    }
    if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
    } else {
        fVar14 = SUB84(dVar16 - dVar16, 0);
    }
    if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x38d1b717, fVar14);
    } else {
        dVar16 = 85899360465.7152;
    }
    if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);
    } else {
        fVar14 = SUB84(dVar16 * dVar16, 0);
    }
    if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(g_8c4366b8, fVar14);
    } else {
        dVar16 = (double)CONCAT44(g_8c4366bc, g_8c4366b8);
    }
    if (cVar23 == '\0') {
        g_8c4366b8 = SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20);
    } else {
        g_8c4366b8 = SUB84(dVar16 + dVar16, 0);
    }
    if (cVar24 == '\0') {
        fVar18 = 45.0;
        fVar14 = g_8c4366b8;
    } else {
        g_8c4366b8 = SUB84(in_xd0, 0);
        g_8c4366bc = (float)((u64)in_xd0 >> 0x20);
        fVar14 = 45.0;
        fVar18 = 0.8;
    }
    if (cVar23 != '\0' || fVar14 <= fVar18) {
        uVar8 = rand();
        iVar20 = 0x1e;
        fVar11 = (float)libgcc_divide_helper_01031c(uVar8, 0x1e, iVar2);
        g_8c4366c0 = fVar11;
    } else {
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x42340000, g_8c4366b8);
        } else {
            dVar16 = 0.0008789064635550403;
        }
        if (cVar23 == '\0') {
            fVar14 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
        } else {
            fVar14 = SUB84(dVar16 - dVar16, 0);
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x3f4ccccd, fVar14);
        } else {
            dVar16 = 7.2911194025414286e-304;
        }
        if (cVar23 == '\0') {
            iVar20 = (int)(SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20));
        } else {
            iVar20 = (int)(dVar16 * dVar16);
        }
        for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
            *(int *)(iVar21 * 4 + 0x8c43664c) = iVar20 * 0x1000000 + 0xffffff;
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x42340000, g_8c4366b8);
        } else {
            dVar16 = 0.02500000981399353;
        }
        if (cVar23 == '\0') {
            fVar14 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
        } else {
            fVar14 = SUB84(dVar16 - dVar16, 0);
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x3f99999a, fVar14);
        } else {
            dVar16 = 7.291119406615661e-304;
        }
        if (cVar23 == '\0') {
            iVar21 = (int)(SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20));
        } else {
            iVar21 = (int)(dVar16 * dVar16);
        }
        uVar8 = 0xffffff;
        iVar20 = 0;
        for (iVar22 = 0; iVar22 < 4; iVar22 = iVar22 + 1) {
            iVar20 = iVar22 * 4;
            *(int *)(iVar20 + 0x8c43667c) = iVar21 * 0x1000000 + 0xffffff;
        }
    }
    uVar8 = rand();
    iVar2 = libgcc_divide_helper_01031c(uVar8, 100, iVar2);
    if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((float)(iVar2 + 0x69), uVar1);
    } else {
        dVar16 = (double)(iVar2 + 0x69);
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x40000000, g_8c4366b8);
    } else {
        dVar17 = 3.533694972055102e+72;
    }
    if (cVar23 == '\0') {
        fVar11 = SUB84(dVar17, 0) / (float)((u64)dVar17 >> 0x20);
        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + fVar11, SUB84(dVar16, 0));
    } else {
        fVar11 = SUB84(dVar17 / dVar17, 0);
        dVar16 = dVar16 + dVar17 / dVar17;
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x4f000000, fVar11);
    } else {
        dVar17 = -9.046259633960061e+74;
    }
    fVar11 = (float)((u64)dVar16 >> 0x20);
    if (cVar23 == '\0') {
        bVar19 = (float)((u64)dVar17 >> 0x20) < fVar11;
    } else {
        bVar19 = dVar17 < dVar16;
    }
    if (bVar19) {
        if (cVar24 == '\0') {
            dVar17 = (double)CONCAT44(0xcf800000, SUB84(dVar17, 0));
        } else {
            dVar17 = -1.3547902344155491e-249;
        }
        if (cVar23 == '\0') {
            dVar16 = (double)CONCAT44(fVar11 + (float)((u64)dVar17 >> 0x20), SUB84(dVar16, 0));
        } else {
            dVar16 = dVar16 + dVar17;
        }
    }
    if (cVar23 == '\0') {
        iVar20 = (int)(float)((u64)dVar16 >> 0x20);
    } else {
        iVar20 = (int)dVar16;
    }
    g_8c436660 = (short)iVar2;
    g_8c43665c = g_8c436660 + SUB42(g_8c4366c0, 0);
    g_8c43665e = (u16)iVar20;
    iVar20 = iVar20 - (int)g_8c4366c0;
    g_8c436664 = (u16)iVar20;
    puVar10 = &g_8c43665c;
    g_8c436662 = g_8c436660;
    g_8c436666 = g_8c436660;
    g_8c436668 = g_8c43665e;
    g_8c43666a = g_8c43665e;
    uVar1 = rand();
    uVar8 = SUB84(dVar16, 0);
    iVar2 = libgcc_divide_helper_01031c(uVar1, 0x32, puVar10);
    if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((float)(iVar2 + 0x9b), uVar8);
    } else {
        dVar16 = (double)(iVar2 + 0x9b);
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x40000000, g_8c4366b8);
    } else {
        dVar17 = 3.533694972055102e+72;
    }
    if (cVar23 == '\0') {
        fVar11 = SUB84(dVar17, 0) / (float)((u64)dVar17 >> 0x20);
        dVar16 = (double)CONCAT44((float)((u64)dVar16 >> 0x20) + fVar11, SUB84(dVar16, 0));
    } else {
        fVar11 = SUB84(dVar17 / dVar17, 0);
        dVar16 = dVar16 + dVar17 / dVar17;
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x4f000000, fVar11);
    } else {
        dVar17 = -9.046259633960061e+74;
    }
    fVar11 = (float)((u64)dVar16 >> 0x20);
    if (cVar23 == '\0') {
        bVar19 = (float)((u64)dVar17 >> 0x20) < fVar11;
    } else {
        bVar19 = dVar17 < dVar16;
    }
    if (bVar19) {
        if (cVar24 == '\0') {
            dVar17 = (double)CONCAT44(0xcf800000, SUB84(dVar17, 0));
        } else {
            dVar17 = -1.3547902344155491e-249;
        }
        if (cVar23 == '\0') {
            dVar16 = (double)CONCAT44(fVar11 + (float)((u64)dVar17 >> 0x20), SUB84(dVar16, 0));
        } else {
            dVar16 = dVar16 + dVar17;
        }
    }
    if (cVar23 == '\0') {
        iVar20 = (int)(float)((u64)dVar16 >> 0x20);
        dVar16 = (double)CONCAT44((float)iVar2, SUB84(dVar16, 0));
    } else {
        iVar20 = (int)dVar16;
        dVar16 = (double)iVar2;
    }
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x3fc00000, (float)(int)g_8c4366c0);
    } else {
        dVar17 = 9.046259120036078e+74;
    }
    g_8c436670 = (u16)iVar2;
    g_8c43666e = (u16)iVar20;
    if (cVar23 == '\0') {
        fVar14 = (float)((u64)dVar17 >> 0x20);
        fVar11 = SUB84(dVar17, 0) * fVar14;
        dVar17 = (double)CONCAT44(fVar14, fVar11);
        pcVar9 = (code *)(int)((float)((u64)dVar16 >> 0x20) + fVar11);
        g_8c43666c = SUB42(pcVar9, 0);
        dVar16 = (double)CONCAT44((float)iVar20, SUB84(dVar16, 0));
    } else {
        dVar17 = dVar17 * dVar17;
        fVar11 = SUB84(dVar17, 0);
        pcVar9 = (code *)(int)(dVar16 + dVar17);
        g_8c43666c = SUB42(pcVar9, 0);
        dVar16 = (double)iVar20;
    }
    fVar14 = (float)((u64)dVar16 >> 0x20);
    if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
    } else {
        bVar19 = dVar16 < (double)((u64)dVar17 & 0xffffffff);
    }
    if (bVar19) {
        if (cVar24 == '\0') {
            dVar17 = (double)CONCAT44(0x4f800000, fVar11);
        } else {
            dVar17 = -1.354755602458548e-249;
        }
        if (cVar23 == '\0') {
            dVar16 = (double)CONCAT44(fVar14 + (float)((u64)dVar17 >> 0x20), SUB84(dVar16, 0));
        } else {
            dVar16 = dVar16 + dVar17;
        }
    }
    ar6_01 = (code *)&g_8c4366c0;
    if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(0x3fc00000, (float)(int)g_8c4366c0);
    } else {
        dVar17 = 9.046259120036078e+74;
    }
    if (cVar23 == '\0') {
        iVar2 = (int)((float)((u64)dVar16 >> 0x20) - SUB84(dVar17, 0) * (float)((u64)dVar17 >> 0x20));
    } else {
        iVar2 = (int)(dVar16 - dVar17 * dVar17);
    }
    g_8c436674 = (u16)iVar2;
    iVar20 = g_8c43663c;
    g_8c436672 = g_8c436670;
    g_8c436676 = g_8c436670;
    g_8c436678 = g_8c43666e;
    g_8c43667a = g_8c43666e;
    if (g_8c43663c != 0xffffff) {
        for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
            pcVar9 = (code *)&g_8c43663c;
            ar6_01 = (code *)(&g_8c43663c + iVar21 * 4);
            iVar20 = *(int *)ar6_01 + -0x11000000;
            *(int *)ar6_01 = iVar20;
        }
    }
    uVar1 = rand();
    puVar10 = (u8 *)0x190;
    iVar2 = libgcc_divide_helper_01031c(uVar1, 400, ar6_01);
    if (iVar2 == 0) {
        if (cVar24 == '\0') {
            fVar14 = 75.0;
            fVar11 = g_8c4366b8;
        } else {
            fVar11 = 75.0;
            fVar14 = 3.3705384e+10;
        }
        if (cVar23 == '\0' && fVar14 < fVar11) {
            for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                *(u32 *)(&g_8c43663c + iVar2 * 4) = 0xffffffff;
            }
            iVar2 = 0x8c2b59d0;
            pcVar9 = pack_entry_poll_status_wrap;
            puVar10 = (u8 *)pack_entry_poll_status_wrap(0x8c2b59d0, *(u32 *)(a0 + 0x144), ar6_01);
            if (puVar10 == (u8 *)0x2) {
                uVar1 = rand();
                uVar1 = libgcc_divide_helper_01031c(uVar1, 2, ar6_01);
                pcVar9 = (code *)auStack_34;
                sprintf(pcVar9, uVar1, ar6_01, pcVar9, "AMB_THUNDER_%d");
                uVar8 = 0x8c2b59d0;
                uVar1 = pack_acquire_entry_handle(0x8c2b59d0, auStack_34, ar6_01, pcVar9);
                *(u32 *)(a0 + 0x144) = uVar1;
                iVar2 = rand();
                iVar20 = libgcc_divide_helper_01031c(iVar2, 5999, ar6_01);
                puVar10 = &g_8c4366e4;
                g_8c4366e4 = (code *)(iVar20 + -2999);
            }
        }
    }
    uVar1 = rand();
    iVar2 = libgcc_divide_helper_01031c(uVar1, 300, ar6_01);
    if (iVar2 == 0) {
        if (cVar24 == '\0') {
            fVar14 = 72.0;
            fVar11 = g_8c4366b8;
        } else {
            fVar11 = 72.0;
            fVar14 = 2.69049e-43;
        }
        if (cVar23 == '\0' && fVar14 < fVar11) {
            uVar1 = *(u32 *)(a0 + 0x144);
            uVar8 = 0x8c2b59d0;
            iVar2 = pack_entry_poll_status_wrap(0x8c2b59d0, uVar1, ar6_01);
            if (iVar2 == 2) {
                uVar1 = rand();
                uVar8 = 2;
                ar6_01 = libgcc_divide_helper_01031c;
                libgcc_divide_helper_01031c(uVar1, 2, libgcc_divide_helper_01031c);
                sprintf(auStack_34, uVar8, ar6_01, pcVar9, "AMB_THUNDER_%d");
                puVar10 = auStack_34;
                uVar1 = pack_acquire_entry_handle(0x8c2b59d0, puVar10, ar6_01, pcVar9);
                *(u32 *)(a0 + 0x144) = uVar1;
                uVar1 = rand();
                iVar2 = libgcc_divide_helper_01031c(uVar1, 4000, ar6_01);
                g_8c4366e4 = (code *)(iVar2 + -2000);
            }
        }
    }
    iVar2 = pack_entry_poll_status_wrap(0x8c2b59d0, *(u32 *)(a0 + 0x144), ar6_01);
    if (iVar2 != 2) {
        if (cVar24 == '\0') {
            fVar14 = 72.0;
            fVar11 = g_8c4366b8;
        } else {
            fVar11 = 72.0;
            fVar14 = 2.69049e-43;
        }
        if (cVar23 == '\0' && fVar14 < fVar11) {
            pcVar9 = (code *)0x258;
            ar6_01 = g_8c4366e4;
            pack_sound_021d90(0x8c2b59d0, *(u32 *)(a0 + 0x144), g_8c4366e4, 600);
        }
    }
    iVar2 = pack_entry_poll_status_wrap(0x8c2b59d0, *(u32 *)(a0 + 0x144), ar6_01);
    if (iVar2 == 2) {
        pack_release_entry_handle(0x8c2b59d0, *(u32 *)(a0 + 0x144), ar6_01, pcVar9);
    }
    if (((g_8c4366dc == 0) || (uVar5 = g_8c4366dc, g_8c4366dc == 1)) && (uVar5 = 0x14c, *(int *)(a0 + 0x14c) == 2)) {
        g_8c4366cc = 1;
    }
    if (*(int *)(a0 + 0x14c) == 3) {
        for (iVar2 = 0; ar6_01 = (code *)0x4, iVar2 < 4; iVar2 = iVar2 + 1) {
            *(u32 *)(&g_8c43668c + iVar2 * 4) = 0xffffff;
            *(u32 *)(iVar2 * 4 + 0x8c43669c) = 0xffffffff;
        }
        g_8c4366cc = 2;
        *(u32 *)(a0 + 0x14c) = 2;
    }
    if (g_8c4366cc == 1) {
        uVar5 = g_8c43668c;
        if (g_8c43668c < 0x1000000) {
            g_8c4366cc = 2;
        } else {
            iVar2 = 0;
            while (iVar20 = iVar2, iVar20 < 4) {
                *(int *)(&g_8c43668c + iVar20 * 4) = *(int *)(&g_8c43668c + iVar20 * 4) + -0x3000000;
                uVar5 = 0x3000000;
                *(int *)(iVar20 * 4 + 0x8c43669c) = *(int *)(iVar20 * 4 + 0x8c43669c) + 0x3000000;
                iVar2 = iVar20 + 1;
            }
        }
    }
    obj_set_texlist(a0 + 0x48, uVar5, ar6_01);
    obj_set_texture_num(a0 + 0x48, 0);
    Class_129808_set_model(a0 + 0x50, &g_8c43662c, ar6_01);
    uVar8 = 4;
    uVar1 = 0x8c43661c;
    pcVar9 = (code *)&g_8c13bda0;
    set_fields_0_4_c(a0 + 0x50, &g_8c13bda0, 0x8c43661c, 4);
    Class_129808_draw(a0 + 0x50, pcVar9, uVar1, uVar8);
    if (cVar24 == '\0') {
        puVar10 = (u8 *)0x42340000;
        fVar11 = g_8c4366b8;
    } else {
        fVar11 = 45.0;
        puVar10 = &g_8c4366c8;
    }
    if (cVar23 == '\0' && (float)puVar10 < fVar11) {
        obj_set_texlist(a0 + 0x48, pcVar9, uVar1);
        obj_set_texture_num(a0 + 0x48, g_8c4366c8 + 10);
        Class_129808_set_model(a0 + 0x50, &g_8c43666c, uVar1);
        uVar8 = 4;
        uVar1 = 0x8c43664c;
        set_fields_0_4_c(a0 + 0x50, &g_8c13bda0, 0x8c43664c, 4);
        pcVar9 = Class_129808_draw;
        Class_129808_draw(a0 + 0x50, Class_129808_draw, uVar1, uVar8);
    }
    if (g_8c4366ac < 2) {
        obj_set_texlist(a0 + 0x48, pcVar9, uVar1);
        obj_set_texture_num(a0 + 0x48, 1);
        Class_129808_set_model(a0 + 0x50, &g_8c43662c, uVar1);
        uVar1 = 4;
        puVar7 = &g_8c13bda0;
        set_fields_0_4_c(a0 + 0x50, &g_8c13bda0, 0x8c43661c, 4);
        iVar21 = a0 + 0x50;
        Class_129808_draw(iVar21, puVar7, iVar21, uVar1);
        iVar20 = a0 + 0x48;
        iVar2 = iVar20;
        obj_set_texlist(iVar20, iVar20, iVar21);
        libm_errno_wrap_014294(iVar20, iVar2, iVar21, uVar1);
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x3ff33333, puVar10);
        } else {
            dVar16 = 32768.00780639648;
        }
        if (cVar23 == '\0') {
            fVar11 = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);
        } else {
            fVar11 = SUB84(dVar16 * dVar16, 0);
        }
        if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0x40e00000, fVar11);
        } else {
            dVar16 = -33554440.109375;
        }
        if (cVar23 == '\0') {
            iVar2 = (int)(SUB84(dVar16, 0) + (float)((u64)dVar16 >> 0x20));
        } else {
            iVar2 = (int)(dVar16 + dVar16);
        }
        obj_set_texture_num(a0 + 0x48, iVar2);
        Class_129808_set_model(a0 + 0x50, &g_8c43662c, Class_129808_set_model);
        uVar1 = 4;
        puVar10 = (u8 *)0x8c43661c;
        puVar7 = &g_8c13bdc0;
        set_fields_0_4_c(a0 + 0x50, &g_8c13bdc0, 0x8c43661c, 4);
        Class_129808_draw(a0 + 0x50, puVar7, puVar10, uVar1);
        uStack_64 = 0;
        uStack_62 = 0x7f;
        uStack_60 = 0;
        uStack_5e = 0;
        uStack_5c = 0x7f;
        uStack_5a = 0;
        uStack_58 = 0x7f;
        uStack_56 = 0x7f;
    } else if (g_8c4366ac < 4) {
        obj_set_texlist(a0 + 0x48, pcVar9, uVar1);
        obj_set_texture_num(a0 + 0x48, 2);
        Class_129808_set_model(a0 + 0x50, &g_8c43662c, uVar1);
        uVar1 = 4;
        puVar10 = (u8 *)0x8c43661c;
        puVar7 = &g_8c13bda0;
        set_fields_0_4_c(a0 + 0x50, &g_8c13bda0, 0x8c43661c, 4);
        Class_129808_draw(a0 + 0x50, puVar7, puVar10, uVar1);
        uStack_64 = 0x80;
        uStack_62 = 0x7f;
        puVar7 = (u8 *)0x80;
        uStack_60 = 0x80;
        uStack_5e = 0;
        uStack_5c = 0xff;
        uStack_5a = 0;
        uStack_58 = 0xff;
        uVar1 = 0x7f;
        uStack_56 = 0x7f;
    } else if (g_8c4366ac < 7) {
        obj_set_texlist(a0 + 0x48, pcVar9, uVar1);
        obj_set_texture_num(a0 + 0x48, 3);
        Class_129808_set_model(a0 + 0x50, &g_8c43662c, uVar1);
        uVar1 = 4;
        puVar10 = (u8 *)0x8c43661c;
        puVar7 = &g_8c13bda0;
        set_fields_0_4_c(a0 + 0x50, &g_8c13bda0, 0x8c43661c, 4);
        Class_129808_draw(a0 + 0x50, puVar7, puVar10, uVar1);
        uStack_64 = 0;
        uStack_62 = 0xff;
        uStack_60 = 0;
        uStack_5e = 0x80;
        uStack_5c = 0x7f;
        uStack_5a = 0x80;
        uStack_58 = 0x7f;
        uStack_56 = 0xff;
    } else {
        obj_set_texlist(a0 + 0x48, pcVar9, uVar1);
        obj_set_texture_num(a0 + 0x48, 4);
        Class_129808_set_model(a0 + 0x50, &g_8c43662c, uVar1);
        uVar1 = 4;
        puVar10 = (u8 *)0x8c43661c;
        puVar7 = &g_8c13bda0;
        set_fields_0_4_c(a0 + 0x50, &g_8c13bda0, 0x8c43661c, 4);
        Class_129808_draw(a0 + 0x50, puVar7, puVar10, uVar1);
        uStack_64 = 0x80;
        uStack_62 = 0xff;
        uStack_60 = 0x80;
        uStack_5e = 0x80;
        uStack_5c = 0xff;
        uStack_5a = 0x80;
        uStack_58 = 0xff;
        uStack_56 = 0xff;
    }
    if (cVar24 == '\0') {
        puVar3 = (u8 *)0x42340000;
        fVar11 = g_8c4366b8;
    } else {
        fVar11 = 45.0;
        puVar3 = &g_8c4366c8;
    }
    if (cVar23 == '\0' && (float)puVar3 < fVar11) {
        obj_set_texlist(a0 + 0x48, puVar7, puVar10);
        obj_set_texture_num(a0 + 0x48, g_8c4366c8 + 10);
        Class_129808_set_model(a0 + 0x50, &g_8c43665c, puVar10);
        uVar8 = 4;
        uVar1 = 0x8c43664c;
        puVar7 = &g_8c13bda0;
        set_fields_0_4_c(a0 + 0x50, &g_8c13bda0, 0x8c43664c, 4);
        Class_129808_draw(a0 + 0x50, puVar7, uVar1, uVar8);
        obj_set_texlist(a0 + 0x48, obj_set_texlist, uVar1);
        obj_set_texture_num(a0 + 0x48, 0xd);
        Class_129808_set_model(a0 + 0x50, &g_8c43662c, uVar1);
        uVar1 = 4;
        puVar10 = (u8 *)0x8c43667c;
        puVar7 = &g_8c13bda0;
        set_fields_0_4_c(a0 + 0x50, &g_8c13bda0, 0x8c43667c, 4);
        Class_129808_draw(a0 + 0x50, puVar7, puVar10, uVar1);
    }
    if (cVar24 == '\0') {
        puVar3 = (u8 *)0x42960000;
        fVar11 = g_8c4366b8;
    } else {
        fVar11 = 75.0;
        puVar3 = &g_8c43663c;
    }
    if (cVar23 == '\0' && (float)puVar3 < fVar11) {
        obj_set_texlist(a0 + 0x48, puVar7, puVar10);
        obj_set_texture_num(a0 + 0x48, 9);
        Class_129808_set_model(a0 + 0x50, &g_8c43662c, puVar10);
        uVar1 = 4;
        puVar10 = &g_8c43663c;
        puVar7 = &g_8c13bda0;
        set_fields_0_4_c(a0 + 0x50, &g_8c13bda0, &g_8c43663c, 4);
        Class_129808_draw(a0 + 0x50, puVar7, puVar10, uVar1);
    }
    obj_set_texlist(a0 + 0x48, puVar7, puVar10);
    uVar8 = 0x11;
    obj_set_texture_num(a0 + 0x48, 0x11);
    Class_129808_draw(auStack_78, uVar8, puVar10, uVar1);
    if (*(int *)(a0 + 0x30) == 1) {
        puVar10 = NULL;
        CGame_draw_0c3e78(&g_8c2b5628, *(u32 *)(a0 + 0x154), 0);
    }
    iVar2 = *(int *)(a0 + 0x14c);
    if ((iVar2 < 5) && (-1 < iVar2)) {
        switch (iVar2) {
        default:
            date_time_message_draw(a0 + 0x158, a0 + 0x48, puVar10, uVar1);
            break;
        case 2:
        case 3:
            obj_set_texlist(a0 + 0x48, 4, puVar10);
            obj_set_texture_num(a0 + 0x48, 0xe);
            Class_129808_set_model(a0 + 0x50, &g_8c43662c, puVar10);
            uVar1 = 4;
            puVar10 = (u8 *)0x8c43669c;
            puVar7 = &g_8c13bde0;
            set_fields_0_4_c(a0 + 0x50, &g_8c13bde0, 0x8c43669c, 4);
            Class_129808_draw(a0 + 0x50, puVar7, puVar10, uVar1);
            break;
        case 4:
            obj_set_texlist(a0 + 0x48, 4, puVar10);
            obj_set_texture_num(a0 + 0x48, 0x10);
            Class_129808_set_model(a0 + 0x50, &g_8c43662c, puVar10, a0 + 0x50);
            uVar1 = 4;
            puVar10 = (u8 *)0x8c43661c;
            puVar7 = &g_8c13bde0;
            set_fields_0_4_c(a0 + 0x50, &g_8c13bde0, 0x8c43661c, 4);
            Class_129808_draw(a0 + 0x50, puVar7, puVar10, uVar1);
        }
    }
    free_if_nonnull_wrap_0151a0(auStack_78, 0xffffffff, puVar10, uVar1);
    return 1;
}

/*
 * get_field_c8_0bced0  0x8c0bced0
 * called by: ambient_sound_update, game_select_intro_or_ending
 */
u32 get_field_c8_0bced0(int a0) {
    return *(u32 *)(0xc8 + a0);
}

/*
 * game_select_intro_or_ending  0x8c0bcedc
 * chooses INTRO_FIRST, INTRO_NORMAL, ENDING or an event sequence
 * called by: game_uses_speech_is_playing_0bad68
 * strings: "INTRO_FIRST"; "ENDING"; "NOACTION"; "INTRO_NORMAL" ...
 */
u32 game_select_intro_or_ending(int a0, int a1, u32 unused_a2, char *a3) {
    u32 uVar1;
    int iVar2;
    u32 ar4_00;
    u8 *puVar3;
    u32 a5;
    u8 *puVar4;
    int iVar5;
    code *pcVar6;
    u32 unaff_r8;
    u32 unaff_r9;
    u32 unaff_r10;
    u32 unaff_r11;
    u32 unaff_r12;
    u32 unaff_r13;
    u32 unaff_r14;
    u8 *puVar7;
    double in_dr0;
    double dVar8;
    float in_fr13;
    u64 in_dr14;
    double dVar9;
    float fVar10;
    bool bVar11;
    u32 in_PR;
    char acStack_1e8[464];
    u8 auStack_18[12];
    u8 auStack_c[4];
    u64 uStack_8;

    uStack_8 = CONCAT44((int)in_dr14, (u32)uStack_8);
    uStack_8._0_4_ = (int)((u64)in_dr14 >> 0x20);
    puVar7 = auStack_c;

    *(u32 *)(puVar7 + -4) = unaff_r14;
    *(u32 *)(puVar7 + -8) = unaff_r13;
    *(u32 *)(puVar7 + -0xc) = unaff_r12;
    *(u32 *)(puVar7 + -0x10) = unaff_r11;
    *(u32 *)(puVar7 + -0x14) = unaff_r10;
    *(u32 *)(puVar7 + -0x18) = unaff_r9;
    *(u32 *)(puVar7 + -0x1c) = unaff_r8;
    *(u32 *)(puVar7 + -0x20) = in_PR;
    if (*(int *)(a0 + 0x44) == 0x12) {
        return 1;
    }
    uVar1 = speech_is_playing(0x8c35468c, a1);
    *(u32 *)(puVar7 + -0x2c) = uVar1;
    if (*(int *)(puVar7 + -0x2c) == 1) {
        return 1;
    }
    iVar2 = *(int *)(a0 + 0x44);
    puVar4 = (u8 *)0x14;
    if (0x14 < iVar2) {
        return 1;
    }
    if (iVar2 < 0) {
        return 1;
    }
    switch (iVar2) {
    case 0:
        g_8c4366f8 = 0;
        g_8c43670c = 0;
        g_8c436734 = 9;
        g_8c436730 = 6;
        puVar4 = &g_8c43676c;
        g_8c43676c = '\0';
        g_8c43676d = '\0';
        g_8c43676e = '\0';
        g_8c43676f = '\0';
        g_8c436770 = '\0';
        g_8c436771 = '\0';
        game_uses_CProlog_classify_day_period_0f803c(0x8c35468c, a1, &g_8c43676c, a3);
        for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
            puVar4 = &g_8c43670c;
            g_8c43670c = (u32) * (u8 *)(a1 + iVar2 + 4) + g_8c43670c;
        }
        g_8c436710 = (u32) * (u8 *)(a1 + 0x2c);
        puVar3 = &g_8c436714;
        rtc_get_date_wrap(a1, &g_8c436714, puVar4, a3);
        uVar1 = get_field_c8_0bced0(a1);
        *(u32 *)(puVar7 + -0x30) = uVar1;
        g_8c436720 = *(u32 *)(puVar7 + -0x30);
        g_8c436728 = *(u32 *)(a1 + 0xc0);
        g_8c436724 = *(u32 *)(a1 + 0xc4);
        *(u16 *)(puVar7 + -0x1dc) = g_8c436714;
        *(u16 *)(puVar7 + -0x1da) = g_8c436716;
        *(u16 *)(puVar7 + -0x1d8) = g_8c436718;
        *(u16 *)(puVar7 + -0x1d6) = g_8c43671a;
        *(u16 *)(puVar7 + -0x1d4) = g_8c43671c;
        uVar1 = hour_to_day_period(a1, hour_to_day_period, puVar4, a3, *(u32 *)(puVar7 + -0x1dc),
                                   *(u32 *)(puVar7 + -0x1d8));
        *(u32 *)(puVar7 + -0x34) = uVar1;
        g_8c43672c = *(u32 *)(puVar7 + -0x34);
        g_8c4366f0 = (int *)(a1 + 0x30);
        g_8c4366f4 = a1 + 0x44;
        *(u32 *)(a0 + 0x44) = 1;
    case 1:
        if (*(char *)(g_8c4366f4 + 0x25) < '\x01') {
            if (g_8c43670c == 1) {
                speech_request_pair(a0, "INTRO_FIRST", &g_8c13c025, a3);
                *(u32 *)(a0 + 0x44) = 0x13;
                *(u32 *)(a0 + 0x14c) = 0;
            } else {
                *(u32 *)(a0 + 0x14c) = 1;
                *(u32 *)(a0 + 0x44) = 2;
            override_jmp_8c0bcf7a_case_2:
                date_to_rtc_seconds(&g_8c436714, puVar7 + -0x24, puVar4);
                puVar4 = (u8 *)0x8c431a68;
                date_to_rtc_seconds(&g_8c431a7c, puVar7 + -0x28, 0x8c431a68);
                uVar1 = libgcc_divide_helper_010284(*(int *)(puVar7 + -0x24) - *(int *)(puVar7 + -0x28), 0xe10, puVar4);
                *(u32 *)(puVar7 + -0x8c) = uVar1;
                ar4_00 = *(u32 *)(puVar7 + -0x8c) & 0xffff;
                if ((((((g_8c436714 != g_8c431a7c) || (g_8c436716 != g_8c431a7e)) || (g_8c436717 != g_8c431a7f)) ||
                      (ar4_00 < 8)) &&
                     ((puVar4 = (u8 *)0x18,
                       0x17 < ar4_00 || (((puVar4 = &g_8c431a7f,
                                           g_8c436717 <= g_8c431a7f && (a3 = &g_8c436714, g_8c436716 <= g_8c431a7e)) &&
                                          (g_8c436714 <= g_8c431a7c)))))) &&
                    (0x17 < ar4_00)) {
                    uVar1 = libgcc_divide_helper_010284(ar4_00, 0x18, puVar4);
                    *(u32 *)(puVar7 + -0x90) = uVar1;
                }
                for (iVar2 = 0; iVar2 < 0xb; iVar2 = iVar2 + 1) {
                    *(int *)(puVar7 + -0x94) = iVar2;
                    puVar4 = NULL;
                    *(u32 *)(&g_8c436738 + *(int *)(puVar7 + -0x94) * 4) = 0;
                }
                a5 = 0;
                uVar1 = get_word_8(*(u32 *)(a1 + 0x7d8), 0);
                *(u32 *)(puVar7 + -0x38) = uVar1;
                g_8c436704 = *(int **)(puVar7 + -0x38);
                puVar3 = (u8 *)(**(code **)(*g_8c436704 + 0x118))(g_8c436704, a5, uVar1, a3);
                *(u8 **)(puVar7 + -0x3c) = puVar3;
                pcVar6 = (code *)&g_8c4366f8;
                g_8c4366f8 = *(int *)(puVar7 + -0x3c);
                puVar4 = NULL;
                while (uVar1 = (u32)in_dr14, (int)puVar4 < g_8c4366f8) {
                    pcVar6 = (code *)(**(code **)(*g_8c436704 + 0xfc))(g_8c436704, puVar4, pcVar6, a3);
                    *(code **)(puVar7 + -0x40) = pcVar6;
                    g_8c4366fc = *(int *)(puVar7 + -0x40);
                    uVar1 = get_field_28_0bf124(g_8c4366fc, &g_8c4366fc);
                    *(u32 *)(puVar7 + -0x44) = uVar1;
                    if (*(int *)(puVar7 + -0x44) == 1) {
                        uVar1 = (**(code **)(*(int *)(g_8c4366fc + 8) + 0x164))(g_8c4366fc, uVar1, pcVar6, a3);
                        *(u32 *)(puVar7 + -0x48) = uVar1;
                        iVar2 = *(int *)(puVar7 + -0x48);
                        g_8c436700 = iVar2;
                        pcVar6 = (code *)get_field_13c_028d9c(iVar2, iVar2, pcVar6);
                        *(code **)(puVar7 + -0x4c) = pcVar6;
                        switch (*(u32 *)(puVar7 + -0x4c)) {
                        case 1:
                            pcVar6 = talk_pick_due_topic;
                            uVar1 = talk_pick_due_topic(g_8c436700);
                            *(u32 *)(puVar7 + -0x50) = uVar1;
                            if (*(int *)(puVar7 + -0x50) == -1) {
                                g_8c436738 = g_8c436738 + 1;
                            }
                            break;
                        case 2:
                            uVar1 = talk_pick_due_topic(g_8c436700);
                            *(u32 *)(puVar7 + -0x54) = uVar1;
                            if (*(int *)(puVar7 + -0x54) == -1) {
                                *(u8 **)(puVar7 + -0x98) = &g_8c436738;
                                pcVar6 = *(code **)(*(int *)(puVar7 + -0x98) + 4);
                                *(code **)(*(int *)(puVar7 + -0x98) + 4) = pcVar6 + 1;
                            }
                            break;
                        case 3:
                            uVar1 = talk_pick_due_topic(g_8c436700);
                            *(u32 *)(puVar7 + -0x58) = uVar1;
                            if (*(int *)(puVar7 + -0x58) == -1) {
                                *(u8 **)(puVar7 + -0x9c) = &g_8c436738;
                                *(int *)(*(int *)(puVar7 + -0x9c) + 8) = *(int *)(*(int *)(puVar7 + -0x9c) + 8) + 1;
                                uVar1 = percent_field_4_of_c_on_field_90(g_8c436700, iVar2, pcVar6, a3);
                                *(u32 *)(puVar7 + -0x5c) = uVar1;
                                iVar2 = *(int *)(puVar7 + -0x5c);
                                if (iVar2 < 0x5a) {
                                    if ((iVar2 < 0x46) || ('\x01' < g_8c436771)) {
                                        if ((0x31 < iVar2) && (g_8c436771 < '\x01')) {
                                            g_8c436771 = '\x01';
                                        }
                                    } else {
                                        g_8c436771 = '\x02';
                                    }
                                } else {
                                    g_8c436771 = '\x03';
                                }
                                pcVar6 = (code *)&g_8c436700;
                                uVar1 = talk_uses_table13019c_find_row_02bef8(
                                    g_8c436700, talk_uses_table13019c_find_row_02bef8, &g_8c436700);
                                *(short *)(puVar7 + -0x1ca) = (short)uVar1;
                                if (*(short *)(puVar7 + -0x1ca) == 3) {
                                    g_8c43676d = g_8c43676d + '\x01';
                                }
                            }
                            break;
                        case 4:
                            uVar1 = talk_pick_due_topic(g_8c436700);
                            *(u32 *)(puVar7 + -0x60) = uVar1;
                            if (*(int *)(puVar7 + -0x60) == -1) {
                                pcVar6 = (code *)&g_8c436738;
                                *(u8 **)(puVar7 + -0xa0) = &g_8c436738;
                                *(int *)(*(int *)(puVar7 + -0xa0) + 0xc) = *(int *)(*(int *)(puVar7 + -0xa0) + 0xc) + 1;
                                uVar1 = percent_field_4_of_c_on_field_90(g_8c436700, &g_8c436700, &g_8c436738, a3);
                                *(u32 *)(puVar7 + -100) = uVar1;
                                iVar2 = *(int *)(puVar7 + -100);
                                if (iVar2 < 0x5a) {
                                    if ((iVar2 < 0x46) || ('\x01' < g_8c436771)) {
                                        if ((0x31 < iVar2) && (g_8c436771 < '\x01')) {
                                            g_8c436771 = '\x01';
                                        }
                                    } else {
                                        g_8c436771 = '\x02';
                                    }
                                } else {
                                    g_8c436771 = '\x03';
                                }
                                uVar1 = talk_uses_get_field_16_s16_02bf8c(g_8c436700, &g_8c436700);
                                *(short *)(puVar7 + -0x1cc) = (short)uVar1;
                                if (*(short *)(puVar7 + -0x1cc) == 0) {
                                    *(u8 **)(puVar7 + -0xa4) = &g_8c436738;
                                    *(int *)(*(int *)(puVar7 + -0xa4) + 0xc) =
                                        *(int *)(*(int *)(puVar7 + -0xa4) + 0xc) + -1;
                                    *(u8 **)(puVar7 + -0xa8) = &g_8c436738;
                                    *(int *)(*(int *)(puVar7 + -0xa8) + 8) = *(int *)(*(int *)(puVar7 + -0xa8) + 8) + 1;
                                    pcVar6 = (code *)(int)g_8c43676e;
                                    g_8c43676e = g_8c43676e + '\x01';
                                }
                            }
                            break;
                        case 6:
                            uVar1 = talk_pick_due_topic(g_8c436700);
                            *(u32 *)(puVar7 + -0x68) = uVar1;
                            if (*(int *)(puVar7 + -0x68) == -1) {
                                *(u8 **)(puVar7 + -0xac) = &g_8c436738;
                                *(int *)(*(int *)(puVar7 + -0xac) + 0x10) =
                                    *(int *)(*(int *)(puVar7 + -0xac) + 0x10) + 1;
                            }
                            break;
                        case 7:
                            uVar1 = talk_pick_due_topic(g_8c436700);
                            *(u32 *)(puVar7 + -0x6c) = uVar1;
                            if (*(int *)(puVar7 + -0x6c) == -1) {
                                *(u8 **)(puVar7 + -0xb0) = &g_8c436738;
                                iVar2 = *(int *)(*(int *)(puVar7 + -0xb0) + 0x14);
                                pcVar6 = (code *)(iVar2 + 1);
                                *(code **)(*(int *)(puVar7 + -0xb0) + 0x14) = pcVar6;
                                uVar1 = percent_field_4_of_c_on_field_90(g_8c436700, iVar2, pcVar6, a3);
                                *(u32 *)(puVar7 + -0x70) = uVar1;
                                iVar5 = *(int *)(puVar7 + -0x70);
                                if (iVar5 < 0x5a) {
                                    if ((iVar5 < 0x46) || ('\x01' < g_8c436771)) {
                                        if ((0x31 < iVar5) && (iVar2 = (int)g_8c436771, iVar2 < 1)) {
                                            g_8c436771 = '\x01';
                                        }
                                    } else {
                                        g_8c436771 = '\x02';
                                    }
                                } else {
                                    g_8c436771 = '\x03';
                                }
                                uVar1 = talk_uses_get_field_16_s16_02bf8c(g_8c436700, iVar2);
                                *(short *)(puVar7 + -0x1ce) = (short)uVar1;
                                if (*(short *)(puVar7 + -0x1ce) == 1) {
                                    uVar1 = get_field_18_on_field_a8(g_8c436700);
                                    *(u32 *)(puVar7 + -0x74) = uVar1;
                                    pcVar6 = *(code **)(puVar7 + -0x74);
                                    if (pcVar6 == (code *)0x3) {
                                        pcVar6 = (code *)&g_8c43676f;
                                        iVar2 = g_8c43676f + 1;
                                        g_8c43676f = (char)iVar2;
                                    }
                                }
                                uVar1 = get_field_0_s8(g_8c436700 + 0x78);
                                puVar7[-0x1d0] = (char)uVar1;
                                if (puVar7[-0x1d0] == '\x01') {
                                    a3 = &g_8c436770;
                                    g_8c436770 = g_8c436770 + '\x01';
                                }
                            }
                            break;
                        case 0xc:
                        case 0xd:
                            uVar1 = (**(code **)(*(int *)(g_8c4366fc + 8) + 0x168))(
                                g_8c4366fc, *(int *)(g_8c4366fc + 8), pcVar6, a3);
                            *(u32 *)(puVar7 + -0x78) = uVar1;
                            g_8c436708 = *(int **)(puVar7 + -0x78);
                            uVar1 = (**(code **)(*g_8c436708 + 0x44))(g_8c436708, g_8c436708, pcVar6, a3);
                            *(u32 *)(puVar7 + -0x7c) = uVar1;
                            g_8c43676c = (char)*(u32 *)(puVar7 + -0x7c);
                        case 0:
                        case 5:
                            *(u8 **)(puVar7 + -0xb4) = &g_8c436738;
                            pcVar6 = *(code **)(puVar7 + -0xb4);
                            *(int *)(*(int *)(puVar7 + -0xb4) + 0x18) = *(int *)(pcVar6 + 0x18) + 1;
                        }
                    }
                    puVar3 = puVar4 + 1;
                    puVar4 = puVar3;
                }
                g_8c436754 = 0;
                for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
                    *(u8 **)(puVar7 + -0xb8) = &g_8c436738;
                    *(int *)(puVar7 + -0xbc) = iVar2;
                    puVar3 = (u8 *)(*(int *)(puVar7 + -0xbc) * 4);
                    *(int *)(*(int *)(puVar7 + -0xb8) + 0x1c) =
                        *(int *)(*(int *)(puVar7 + -0xb8) + 0x1c) + *(int *)(&g_8c436738 + (int)puVar3);
                }
                g_8c43675c = 0;
                for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
                    *(int *)(puVar7 + -0xc0) = iVar2;
                    puVar3 = (u8 *)0x8c431a68;
                    if (*(int *)((*(int *)(puVar7 + -0xc0) * 0x10 - *(int *)(puVar7 + -0xc0)) * 0x10 + 0x8c432f44) !=
                        -1) {
                        *(u8 **)(puVar7 + -0xc4) = &g_8c436738;
                        puVar3 = (u8 *)(*(int *)(*(int *)(puVar7 + -0xc4) + 0x24) + 1);
                        *(u8 **)(*(int *)(puVar7 + -0xc4) + 0x24) = puVar3;
                    }
                }
                g_8c436758 = 0;
                for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
                    *(int *)(puVar7 + -200) = iVar2;
                    puVar3 = (u8 *)0x27ac;
                    if (*(int *)((*(int *)(puVar7 + -200) * 0x10 - *(int *)(puVar7 + -200)) * 0x10 + 0x8c434214) !=
                        -1) {
                        puVar3 = &g_8c436738;
                        *(u8 **)(puVar7 + -0xcc) = &g_8c436738;
                        *(int *)(*(int *)(puVar7 + -0xcc) + 0x20) = *(int *)(*(int *)(puVar7 + -0xcc) + 0x20) + 1;
                    }
                }
                iVar2 = g_8c436754 + g_8c436750;
                g_8c436760 = iVar2 + g_8c436758;
                (**(code **)(*g_8c436704 + 0x17c))(g_8c436704, puVar3, iVar2, a3);

                *(int *)(puVar7 + -0x80) = (int)((u64)in_dr0 >> 0x20);
                in_fr13 = *(float *)(puVar7 + -0x80);

                (**(code **)(*g_8c436704 + 0x178))(g_8c436704, puVar3, iVar2, a3);

                *(int *)(puVar7 + -0x84) = (int)((u64)in_dr0 >> 0x20);
                dVar9 = (double)CONCAT44(*(u32 *)(puVar7 + -0x84), uVar1);

                (**(code **)(*g_8c436704 + 0x188))(g_8c436704, puVar3, iVar2, a3);

                *(int *)(puVar7 + -0x88) = (int)((u64)in_dr0 >> 0x20);
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), *(u32 *)(puVar7 + -0x88));

                uVar1 = (u32)((u64)dVar9 >> 0x20);
                if (g_8c431b10 == '\0') {

                    dVar9 = (double)CONCAT44(uVar1, 0x42c80000);

                } else if (g_8c431b10 == '\x01') {

                    dVar9 = (double)CONCAT44(uVar1, 0x42c80000);

                } else if ((g_8c431b10 == '\x02')) {
                    in_fr13 = 100.0;
                }
                if (((g_8c436754 - g_8c436738) - g_8c43673c != g_8c436748) &&
                    ((*g_8c4366f0 < 0x18 || (0x1e < *g_8c4366f0)))) {
                    if (g_8c436771 == '\x01') {
                        g_8c436730 = 4;
                        g_8c436734 = 3;
                    } else if (g_8c436771 == '\x02') {
                        g_8c436730 = 4;
                        g_8c436734 = 2;
                    } else if (g_8c436771 == '\x03') {
                        g_8c436730 = 4;
                        g_8c436734 = 1;
                    }
                }
                for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
                    *(int *)(puVar7 + -0xd0) = iVar2;
                    if ((0x1f < g_8c4366f0[*(int *)(puVar7 + -0xd0)]) &&
                        (*(int *)(puVar7 + -0xd4) = iVar2, g_8c4366f0[*(int *)(puVar7 + -0xd4)] < 0x25)) {

                        in_dr0 = (double)CONCAT44(0x42200000, SUB84(in_dr0, 0));

                        bVar11 = SUB84(dVar9, 0) < (float)((u64)in_dr0 >> 0x20);

                        if ((bVar11) && (3 < g_8c436734)) {
                            g_8c436730 = 3;
                            g_8c436734 = 3;
                        }
                    }
                }

                dVar8 = (double)CONCAT44(0x42840000, SUB84(in_dr0, 0));

                bVar11 = in_fr13 < (float)((u64)dVar8 >> 0x20);

                if ((bVar11) && (2 < g_8c436734)) {
                    g_8c436730 = 2;

                    dVar8 = (double)CONCAT44(0x41f00000, SUB84(dVar8, 0));

                    bVar11 = in_fr13 < (float)((u64)dVar8 >> 0x20);

                    if (bVar11) {
                        g_8c436734 = 2;
                    } else {
                        g_8c436734 = 3;
                    }
                }
                fVar10 = (float)((u64)dVar9 >> 0x20);
                if ((g_8c436748 < 1) && (g_8c43674c < 1)) {

                    dVar8 = (double)CONCAT44(0x41700000, SUB84(dVar8, 0));

                    bVar11 = fVar10 < (float)((u64)dVar8 >> 0x20);

                    if ((bVar11) && (2 < g_8c436734)) {
                        g_8c436734 = 2;
                        g_8c436730 = 1;
                    }

                    dVar8 = (double)CONCAT44(0x41a00000, SUB84(dVar8, 0));

                    bVar11 = fVar10 < (float)((u64)dVar8 >> 0x20);

                    if ((!bVar11) && (2 < g_8c436734)) {
                        g_8c436734 = 2;
                        g_8c436730 = 0;
                    }
                } else {

                    dVar8 = (double)CONCAT44(0x41a00000, SUB84(dVar8, 0));

                    bVar11 = fVar10 < (float)((u64)dVar8 >> 0x20);

                    if ((bVar11) && (2 < g_8c436734)) {
                        g_8c436734 = 2;
                        g_8c436730 = 1;
                    }

                    dVar8 = (double)CONCAT44(0x41c80000, SUB84(dVar8, 0));

                    bVar11 = fVar10 < (float)((u64)dVar8 >> 0x20);

                    if ((!bVar11) && (2 < g_8c436734)) {
                        g_8c436734 = 2;
                        g_8c436730 = 0;
                    }
                }

                bVar11 = fVar10 < 1.0;

                if ((bVar11) && (1 < g_8c436734)) {
                    g_8c436730 = 1;
                    g_8c436734 = 1;
                }
                if ('\0' < g_8c436770) {
                    g_8c436730 = 5;
                    g_8c436734 = 2;
                }
                *(u32 *)(a0 + 0x44) = 3;
            override_jmp_8c0bcf7a_case_3:
                if ((((*g_8c4366f0 == 5) || (*g_8c4366f0 == 6)) || (*g_8c4366f0 == 7)) &&
                    ((g_8c43676c < '\x04' && (g_8c436738 == 0)))) {
                    speech_request_pair(a0, &g_8c13c902, &g_8c13c907, a3);
                    *(int *)(puVar7 + -0xd8) = g_8c4366f4;
                    *(char *)(*(int *)(puVar7 + -0xd8) + 0x25) = *(char *)(*(int *)(puVar7 + -0xd8) + 0x25) + '\x01';
                    *(u32 *)(a0 + 0x44) = 0x13;
                } else if (((*g_8c4366f0 == 0x25) || ((g_8c4366f0[1] == 0x25 || (g_8c4366f0[2] == 0x25)))) &&
                           (*(char *)(g_8c4366f4 + 0x25) == '\0')) {
                    speech_request_pair(a0, "ENDING", &g_8c13c025, a3);
                    *(int *)(puVar7 + -0xdc) = g_8c4366f4;
                    *(char *)(*(int *)(puVar7 + -0xdc) + 0x25) = *(char *)(*(int *)(puVar7 + -0xdc) + 0x25) + '\x01';
                    *(u32 *)(a0 + 0x44) = 0x13;
                } else if ((*g_8c4366f0 < 4) && (g_8c43670c == 2)) {
                    speech_request_pair(a0, "NOACTION", &g_8c13c025, a3);
                    *(u32 *)(a0 + 0x44) = 0x10;
                } else if (g_8c436760 == 0) {
                    speech_request_pair(a0, &g_8c13c902, &g_8c13c91c, a3);
                    *(int *)(puVar7 + -0xe0) = g_8c4366f4;
                    *(char *)(*(int *)(puVar7 + -0xe0) + 0x25) = *(char *)(*(int *)(puVar7 + -0xe0) + 0x25) + '\x01';
                    *(u32 *)(a0 + 0x44) = 0x13;
                } else {
                    puVar4 = (u8 *)0x44;
                    *(u32 *)(a0 + 0x44) = 4;
                override_jmp_8c0bcf7a_case_4:
                    format_int_at_10(0x8c35468c, g_8c436720, puVar4, a3);
                    format_int_at_14(0x8c35468c, g_8c436710, puVar4, a3);
                    format_int_18(0x8c35468c, g_8c43672c, 0x8c35468c, a3);
                    speech_request_pair(a0, "INTRO_NORMAL", &g_8c13c025, a3);
                    *(u32 *)(a0 + 0x44) = 5;
                }
            }
        } else {
            *(u32 *)(a0 + 0x44) = 0x13;
            *(u32 *)(a0 + 0x14c) = 3;
        }
        break;
    case 2:
        goto override_jmp_8c0bcf7a_case_2;
    case 3:
        goto override_jmp_8c0bcf7a_case_3;
    case 4:
        goto override_jmp_8c0bcf7a_case_4;
    case 5:
        *(u32 *)(a0 + 0x44) = 6;
        g_8c436764 = 4;
        g_8c436768 = 0;
        for (iVar2 = 4; -1 < iVar2; iVar2 = iVar2 + -1) {
            *(int *)(puVar7 + -0xe4) = iVar2;
            if (0x29 < g_8c4366f0[*(int *)(puVar7 + -0xe4)]) {
                *(int *)(puVar7 + -0xe8) = iVar2;
                if (g_8c4366f0[*(int *)(puVar7 + -0xe8)] < 0x30) {
                    *(int *)(puVar7 + -0xec) = iVar2;
                    format_int_at_10(0x8c35468c, g_8c4366f0[*(int *)(puVar7 + -0xec)], *(int *)(puVar7 + -0xe8), a3);
                    speech_request_pair(a0, "REVIEW", &g_8c13c902, a3);
                    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
                        *(int *)(puVar7 + -0xf0) = iVar2;
                        if ((g_8c4366f0[*(int *)(puVar7 + -0xf0)] < 0x2a) ||
                            (*(int *)(puVar7 + -0xf4) = iVar2, 0x2f < g_8c4366f0[*(int *)(puVar7 + -0xf4)])) {
                            *(int *)(puVar7 + -0x100) = iVar2;
                            *(int *)(puVar7 + -0xfc) = g_8c4366f0[*(int *)(puVar7 + -0x100)] + g_8c4366f4;
                            **(char **)(puVar7 + -0xfc) = **(char **)(puVar7 + -0xfc) + '\x01';
                        } else {
                            *(int *)(puVar7 + -0xf8) = iVar2;
                            g_8c4366f0[*(int *)(puVar7 + -0xf8)] = 0;
                        }
                    }
                    *(u32 *)(a0 + 0x44) = 0x10;
                    return 1;
                }
            }
        }
        break;
    case 6:
        for (; iVar2 = g_8c436764, -1 < g_8c436764; g_8c436764 = g_8c436764 + -1) {
            *(int *)(puVar7 + -0x104) = g_8c436764;
            if ((4 < g_8c4366f0[*(int *)(puVar7 + -0x104)]) &&
                (*(int *)(puVar7 + -0x108) = g_8c436764,
                 *(char *)(g_8c4366f4 + g_8c4366f0[*(int *)(puVar7 + -0x108)]) == '\0')) {
                *(int *)(puVar7 + -0x10c) = g_8c436764;
                if (((g_8c4366f0[*(int *)(puVar7 + -0x10c)] == 6) ||
                     ((*(int *)(puVar7 + -0x110) = g_8c436764,
                       g_8c4366f0[*(int *)(puVar7 + -0x110)] == 7 ||
                           (*(int *)(puVar7 + -0x114) = g_8c436764, g_8c4366f0[*(int *)(puVar7 + -0x114)] == 8)))) ||
                    (*(int *)(puVar7 + -0x118) = g_8c436764, g_8c4366f0[*(int *)(puVar7 + -0x118)] == 10)) {
                    iVar5 = 1;
                    if (g_8c436764 != 1) {
                        if (g_8c436764 != 2) {
                            if (g_8c436764 != 3) {
                                if (g_8c436764 != 4)
                                    goto LAB_8c0be428;
                                *(u32 *)(puVar7 + -0x11c) = 4;
                                *(u32 *)(puVar7 + -0x120) = 3;
                                if (g_8c4366f0[*(int *)(puVar7 + -0x11c)] + 1 ==
                                    g_8c4366f0[*(int *)(puVar7 + -0x120)]) {
                                    *(u32 *)(puVar7 + -0x128) = 4;
                                    *(int *)(puVar7 + -0x124) = g_8c4366f0[*(int *)(puVar7 + -0x128)] + g_8c4366f4;
                                    **(char **)(puVar7 + -0x124) = **(char **)(puVar7 + -0x124) + '\x01';
                                    goto LAB_8c0be818;
                                }
                                iVar5 = 2;
                            }
                            *(int *)(puVar7 + -300) = g_8c436764;
                            *(int *)(puVar7 + -0x130) = g_8c436764 - iVar5;
                            if (g_8c4366f0[*(int *)(puVar7 + -300)] + 1 == g_8c4366f0[*(int *)(puVar7 + -0x130)]) {
                                *(int *)(puVar7 + -0x138) = g_8c436764;
                                *(int *)(puVar7 + -0x134) = g_8c4366f0[*(int *)(puVar7 + -0x138)] + g_8c4366f4;
                                a3 = *(char **)(puVar7 + -0x134);
                                **(char **)(puVar7 + -0x134) = *a3 + '\x01';
                                goto LAB_8c0be818;
                            }
                            iVar5 = iVar5 + 1;
                        }
                        *(int *)(puVar7 + -0x13c) = g_8c436764;
                        *(int *)(puVar7 + -0x140) = g_8c436764 - iVar5;
                        if (g_8c4366f0[*(int *)(puVar7 + -0x13c)] + 1 == g_8c4366f0[*(int *)(puVar7 + -0x140)]) {
                            *(int *)(puVar7 + -0x148) = g_8c436764;
                            *(int *)(puVar7 + -0x144) = g_8c4366f0[*(int *)(puVar7 + -0x148)] + g_8c4366f4;
                            **(char **)(puVar7 + -0x144) = **(char **)(puVar7 + -0x144) + '\x01';
                            goto LAB_8c0be818;
                        }
                        iVar5 = iVar5 + 1;
                    }
                    *(int *)(puVar7 + -0x14c) = g_8c436764;
                    *(int *)(puVar7 + -0x150) = g_8c436764 - iVar5;
                    if (g_8c4366f0[*(int *)(puVar7 + -0x14c)] + 1 == g_8c4366f0[*(int *)(puVar7 + -0x150)]) {
                        *(int *)(puVar7 + -0x158) = g_8c436764;
                        *(int *)(puVar7 + -0x154) = g_8c4366f0[*(int *)(puVar7 + -0x158)] + g_8c4366f4;
                        **(char **)(puVar7 + -0x154) = **(char **)(puVar7 + -0x154) + '\x01';
                        goto LAB_8c0be818;
                    }
                }
            LAB_8c0be428:
                *(int *)(puVar7 + -0x15c) = g_8c436764;
                if (((g_8c4366f0[*(int *)(puVar7 + -0x15c)] == 5) && (2 < g_8c436764)) &&
                    ((*g_8c4366f0 == 8 || (((g_8c4366f0[1] == 8 || (*g_8c4366f0 == 9)) || (g_8c4366f0[1] == 9)))))) {
                    *(int *)(puVar7 + -0x164) = g_8c436764;
                    *(int *)(puVar7 + -0x160) = g_8c4366f0[*(int *)(puVar7 + -0x164)] + g_8c4366f4;
                    **(char **)(puVar7 + -0x160) = **(char **)(puVar7 + -0x160) + '\x01';
                } else {
                    *(int *)(puVar7 + -0x168) = g_8c436764;
                    if (((g_8c4366f0[*(int *)(puVar7 + -0x168)] == 7) && (0 < g_8c436764)) &&
                        (*(int *)(puVar7 + -0x16c) = g_8c436764 + -1, g_8c4366f0[*(int *)(puVar7 + -0x16c)] == 9)) {
                        *(int *)(puVar7 + -0x174) = g_8c436764;
                        *(int *)(puVar7 + -0x170) = g_8c4366f0[*(int *)(puVar7 + -0x174)] + g_8c4366f4;
                        **(char **)(puVar7 + -0x170) = **(char **)(puVar7 + -0x170) + '\x01';
                    } else {
                        *(int *)(puVar7 + -0x178) = g_8c436764;
                        if ((g_8c4366f0[*(int *)(puVar7 + -0x178)] == 0xe) && ('\0' < *(char *)(g_8c4366f4 + 0xf))) {
                            *(int *)(puVar7 + -0x180) = g_8c436764;
                            *(int *)(puVar7 + -0x17c) = g_8c4366f0[*(int *)(puVar7 + -0x180)] + g_8c4366f4;
                            **(char **)(puVar7 + -0x17c) = **(char **)(puVar7 + -0x17c) + '\x01';
                        } else {
                            *(int *)(puVar7 + -0x184) = g_8c436764;
                            if ((g_8c4366f0[*(int *)(puVar7 + -0x184)] == 0xd) && (g_8c436740 == 0)) {
                                *(int *)(puVar7 + -0x18c) = g_8c436764;
                                *(int *)(puVar7 + -0x188) = g_8c4366f0[*(int *)(puVar7 + -0x18c)] + g_8c4366f4;
                                **(char **)(puVar7 + -0x188) = **(char **)(puVar7 + -0x188) + '\x01';
                            } else {
                                *(int *)(puVar7 + -400) = g_8c436764;
                                if ((g_8c4366f0[*(int *)(puVar7 + -400)] == 0xf) && (2 < g_8c43673c)) {
                                    *(int *)(puVar7 + -0x198) = g_8c436764;
                                    *(int *)(puVar7 + -0x194) = g_8c4366f0[*(int *)(puVar7 + -0x198)] + g_8c4366f4;
                                    **(char **)(puVar7 + -0x194) = **(char **)(puVar7 + -0x194) + '\x01';
                                } else {
                                    *(int *)(puVar7 + -0x19c) = g_8c436764;
                                    if ((g_8c4366f0[*(int *)(puVar7 + -0x19c)] == 0x10) &&
                                        (*(char *)(g_8c4366f4 + 0xc) == '\0')) {
                                        *(int *)(puVar7 + -0x1a4) = g_8c436764;
                                        *(int *)(puVar7 + -0x1a0) = g_8c4366f0[*(int *)(puVar7 + -0x1a4)] + g_8c4366f4;
                                        **(char **)(puVar7 + -0x1a0) = **(char **)(puVar7 + -0x1a0) + '\x01';
                                    } else {
                                        *(int *)(puVar7 + -0x1a8) = g_8c436764;
                                        if ((g_8c4366f0[*(int *)(puVar7 + -0x1a8)] != 0x12) || (g_8c43676e < '\x01')) {
                                            *(int *)(puVar7 + -0x1ac) = g_8c436764;
                                            iVar5 = *(int *)(puVar7 + -0x1ac);
                                            format_int_at_10(0x8c35468c, g_8c4366f0[iVar5], iVar5, a3);
                                            *(int *)(puVar7 + -0x1b0) = iVar2;
                                            if (g_8c4366f0[*(int *)(puVar7 + -0x1b0)] == 0x23) {
                                                *(int *)(puVar7 + -0x1b4) = iVar2 + -1;
                                                if ((g_8c4366f0[*(int *)(puVar7 + -0x1b4)] == 0x22) ||
                                                    (*(int *)(puVar7 + -0x1b8) = iVar2 + -2,
                                                     g_8c4366f0[*(int *)(puVar7 + -0x1b8)] == 0x22)) {
                                                    format_int_at_10(0x8c35468c, 0x23, iVar5, a3);
                                                    *(int *)(puVar7 + -0x1bc) = g_8c4366f4;
                                                    *(char *)(*(int *)(puVar7 + -0x1bc) + 0x23) =
                                                        *(char *)(*(int *)(puVar7 + -0x1bc) + 0x23) + '\x01';
                                                } else {
                                                    format_int_at_10(0x8c35468c, 0x16, 0x8c35468c, a3);
                                                }
                                            }
                                            if (g_8c436768 == 0) {
                                                speech_request_pair(a0, "REVIEW", "GREET", speech_request_pair);
                                            } else {
                                                speech_request_pair(a0, "REVIEW", "EVENT", a3);
                                            }
                                            *(int *)(puVar7 + -0x1c4) = iVar2;
                                            *(int *)(puVar7 + -0x1c0) =
                                                g_8c4366f0[*(int *)(puVar7 + -0x1c4)] + g_8c4366f4;
                                            **(char **)(puVar7 + -0x1c0) = **(char **)(puVar7 + -0x1c0) + '\x01';
                                            g_8c436764 = g_8c436764 + -1;
                                            g_8c436768 = 1;
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        LAB_8c0be818:
        }
        *(u32 *)(a0 + 0x44) = 7;
        break;
    case 7:
        if (g_8c436754 == 0) {
            *(u32 *)(a0 + 0x44) = 0xf;
        } else if (*(char *)(g_8c4366f4 + 5) == '\0') {
            *(u32 *)(a0 + 0x44) = 0xf;
        } else {
            if ((((0 < g_8c43674c) && (*(char *)(g_8c4366f4 + 0x1e) == '\0')) &&
                 (*(char *)(g_8c4366f4 + 0x1f) == '\0')) &&
                (*(char *)(g_8c4366f4 + 0x20) == '\0')) {
                g_8c436748 = g_8c43674c;
                g_8c43674c = 0;
            }
            speech_request_pair(a0, "STATE_INTRO", &g_8c13c025, a3);
            *(u32 *)(a0 + 0x44) = 8;
        }
        break;
    case 8:
        if (0 < g_8c436738) {
            format_int_at_10(0x8c35468c, 0, 0x14, a3);
            format_int_at_14(0x8c35468c, g_8c436738, format_int_at_14, a3);
            speech_request_pair(a0, "STATE_CHARA", &g_8c13c025, a3);
        }
        *(u32 *)(a0 + 0x44) = 9;
        break;
    case 9:
        if (0 < g_8c436740 + g_8c43673c) {
            format_int_at_10(0x8c35468c, 1, 0x14, a3);
            format_int_at_14(0x8c35468c, g_8c436740 + g_8c43673c, puVar4, a3);
            speech_request_pair(a0, "STATE_CHARA", &g_8c13c025, a3);
        }
        *(u32 *)(a0 + 0x44) = 10;
        break;
    case 10:
        if (0 < g_8c436744) {
            pcVar6 = format_int_at_10;
            format_int_at_10(0x8c35468c, 2, format_int_at_10, a3);
            format_int_at_14(0x8c35468c, g_8c436744, pcVar6, a3);
            speech_request_pair(a0, "STATE_CHARA", &g_8c13c025, a3);
        }
        *(u32 *)(a0 + 0x44) = 0xb;
        break;
    case 0xb:
        if (0 < g_8c436748) {
            puVar4 = &g_8c4366f4;
            if (*(char *)(g_8c4366f4 + 0x1e) == '\0') {
                format_int_at_10(0x8c35468c, 3, &g_8c4366f4, a3);
                format_int_at_14(0x8c35468c, g_8c436748, puVar4, a3);
                speech_request_pair(a0, "STATE_CHARA", &g_8c13c025, a3);
            } else {
                g_8c43674c = g_8c436748;
                g_8c436748 = 0;
            }
        }
        *(u32 *)(a0 + 0x44) = 0xc;
        break;
    case 0xc:
        if (0 < g_8c43674c) {
            format_int_at_10(0x8c35468c, 4, 0x14, a3);
            format_int_at_14(0x8c35468c, g_8c43674c, puVar4, a3);
            speech_request_pair(a0, "STATE_CHARA", &g_8c13c025, a3);
        }
        *(u32 *)(a0 + 0x44) = 0xd;
        break;
    case 0xd:
        if (0 < g_8c436754) {
            speech_request_pair(a0, "STATE_ALL", &g_8c13c025, a3);
        }
        *(u32 *)(a0 + 0x44) = 0xe;
        break;
    case 0xe:
        if ((g_8c436734 < 1) || (7 < g_8c436734)) {
            format_int_at_10(0x8c35468c, 0, 0x14, a3);

            puVar3 = (u8 *)0x42840000;
            fVar10 = g_8c431c18;

            if (((0 || (float)puVar3 <= fVar10) || (*g_8c4366f0 < 5)) || (0x17 < *g_8c4366f0)) {
                if (((g_8c43675c < 3) && (0xf < *g_8c4366f0)) &&
                    ((*g_8c4366f0 < 0x25 &&
                      (puVar4 = (u8 *)(int)*(char *)(g_8c4366f4 + 0xc), '\0' < *(char *)(g_8c4366f4 + 0xc))))) {
                    format_int_at_10(0x8c35468c, 2, puVar4, a3);
                } else {

                    puVar3 = (u8 *)0x42200000;
                    fVar10 = g_8c432f24;

                    if (((1 && fVar10 < (float)puVar3) && (a3 = (char *)*g_8c4366f0, 0xf < (int)a3)) &&
                        ((*g_8c4366f0 < 0x25 && ('\0' < *(char *)(g_8c4366f4 + 0xc))))) {
                        format_int_at_10(0x8c35468c, 3, puVar4, a3);
                    }
                }
            } else {
                format_int_at_10(0x8c35468c, 1, puVar4, a3);
            }
            speech_request_pair(a0, "STATE_GOOD", &g_8c13c025, a3);
        } else {
            format_int_at_10(0x8c35468c, g_8c436730, 0x14, a3);
            format_int_at_14(0x8c35468c, g_8c436734, puVar4, a3);
            speech_request_pair(a0, "STATE_DAMAGE", &g_8c13c025, a3);
        }
        *(u32 *)(a0 + 0x44) = 0xf;
        break;
    case 0xf:
        *(u32 *)(a0 + 0x44) = 0x10;
        pcVar6 = format_int_at_10;
        format_int_at_10(0x8c35468c, *g_8c4366f0, format_int_at_10, a3);
        switch (*g_8c4366f0) {
        case 4:
        case 5:
        case 6:
        case 7:
            if ('\x03' < g_8c43676c) {
                format_int_at_10(0x8c35468c, 8, &g_8c43676c, a3);
            }
            break;
        case 8:
        case 9:
        case 0xc:
        case 0x14:
        case 0x18:
        case 0x19:
        case 0x21:
            break;
        default:
            if ((g_8c43676e < '\x01') || (*(char *)(g_8c4366f4 + 0x12) != '\0')) {
                if (g_8c43676f < '\x01') {
                    return 1;
                }
                if (g_8c436770 != '\0') {
                    return 1;
                }
                if (*(char *)(g_8c4366f4 + 0x21) != '\0') {
                    return 1;
                }
                if (g_8c43674c == 1) {
                    return 1;
                }
                format_int_at_10(0x8c35468c, 0x33, (char *)(g_8c4366f4 + 0x21), a3);
            } else {
                format_int_at_10(0x8c35468c, 0x32, pcVar6, a3);
            }
            break;
        case 0xf:
            if (g_8c43676d < '\x01') {
                return 1;
            }
            if (*(char *)(g_8c4366f4 + 0xc) != '\0') {
                return 1;
            }
            break;
        case 0x10:
        case 0x11:
            if ('\x01' < *(char *)(g_8c4366f4 + 0x43)) {
                return 1;
            }
            if (g_8c436740 != 2) {
                return 1;
            }
            if (*(char *)(g_8c4366f4 + 0xd) != '\0') {
                return 1;
            }
            *(int *)(puVar7 + -0x1c8) = g_8c4366f4;
            *(char *)(*(int *)(puVar7 + -0x1c8) + 0x43) = *(char *)(*(int *)(puVar7 + -0x1c8) + 0x43) + '\x01';
            break;
        case 0x13:
            if ('\0' < *(char *)(g_8c4366f4 + 0x14)) {
                return 1;
            }
            if (g_8c436744 == 1) {
                return 1;
            }
            break;
        case 0x1f:
            if ('\0' < *(char *)(g_8c4366f4 + 0x20)) {
                return 1;
            }
        }
        speech_request_pair(a0, "HIGHLIGHT", &g_8c13c025, a3);
        break;
    case 0x10:
        speech_request_pair(a0, "FINISH", &g_8c13c025, a3);
        *(u32 *)(a0 + 0x44) = 0x13;
        *(u32 *)(a0 + 0x14c) = 2;
        break;
    case 0x13:
        if ((*(int *)(a0 + 0x14c) == 0) && (g_8c4362f0 != 0xe)) {
            *(u32 *)(a0 + 0x44) = 1;
        } else {
            speech_request_pair(a0, &g_8c13c98b, &g_8c13c025, a3);
            *(u32 *)(a0 + 0x44) = 0x14;
            *(u32 *)(a0 + 0x14c) = 2;
        }
        break;
    case 0x14:
        *(u32 *)(a0 + 0x44) = 0x12;
        *(u32 *)(a0 + 0x14c) = 2;
    }
    return 1;
}

/*
 * game_uses_ret_const_eb40_0bf064  0x8c0bf064
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is ret_const_eb40
 */
u64 *game_uses_ret_const_eb40_0bf064(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u64 *puVar1;

    if (*(int *)(0x226f4 + a0) == 0) {
        puVar1 = &g_8c0bf0a0;
    } else {
        ret_const_eb40(a0 + 0x13b8c, r5, r6, r7);
        puVar1 = NULL;
    }
    return puVar1;
}

/*
 * ret_const_eb40  0x8c0bf0ac
 * called by: game_uses_matrix_apply_point_w1_wrap_0df250, game_uses_ret_const_eb40_0bf064
 */
u32 ret_const_eb40(void) {
    return 0xeb40;
}

/*
 * noop_0bf0bc  0x8c0bf0bc
 * only calls noop_0bf0e8, which does nothing
 */
u32 noop_0bf0bc(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    noop_0bf0e8(a0 + 0x13b24, r5, r6, r7, a0);
    return 4;
}

/*
 * noop_0bf0e8  0x8c0bf0e8
 * does nothing
 * called by: game_draw_0e4198, game_uses_matrix_apply_point_w1_wrap_0df250, game_uses_noop_0de6d0,
 * game_uses_noop_0deb60, game_uses_noop_0def78, noop_0bf0bc
 */
u32 noop_0bf0e8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0bf0f0  0x8c0bf0f0
 * only calls noop_0bf11c, which does nothing
 */
u32 noop_0bf0f0(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    noop_0bf11c(a0 + 0x13b70, r5, r6, r7, a0);
    return 4;
}

/*
 * noop_0bf11c  0x8c0bf11c
 * does nothing
 * called by: game_uses_CWaterTank_CreateStage_0de07c, game_uses_noop_0de6d0, game_uses_noop_0deb60,
 * game_uses_noop_0def78, noop_0bf0f0
 */
u32 noop_0bf11c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * get_field_28_0bf124  0x8c0bf124
 * called by: game_select_intro_or_ending
 */
u32 get_field_28_0bf124(int a0, u32 a1) {
    return *(u32 *)(a0 + 0x28);
}

/*
 * get_field_300_on_field_a4  0x8c0bf12c
 * calls get_field_300_0bf154 on the member at +0xa4
 */
u32 get_field_300_on_field_a4(int a0) {
    u32 uVar1;

    uVar1 = get_field_300_0bf154(a0 + 0xa4);
    return uVar1;
}

/*
 * get_field_300_0bf154  0x8c0bf154
 * called by: CEnv_item_cursor_next, CWaterTank_uses_get_field_300_0e0f48, Class_129974_vec_0db3bc,
 * Class_12b580_uses_get_field_300_0e6718, Class_12b580_uses_list_node_next_wrap_0da754, Class_12b930_m3_0de4b0,
 * Class_12bb08_m1_0da338, Class_12bb08_m2_0da5a8 (+20 more)
 */
u32 get_field_300_0bf154(int a0) {
    return *(u32 *)(0x300 + a0);
}

/*
 * get_word_8  0x8c0bf160
 * word a1 of the array at +8
 * called by: game_select_intro_or_ending, game_uses_get_word_8_0bf22c
 */
u32 get_word_8(int a0, int a1) {
    return *(u32 *)(a0 + a1 * 4 + 8);
}

/*
 * speech_request_pair  0x8c0bf170
 * copies two names to 0x8c4362a0/0x8c4362c0 and requests speech mode 6 with them
 * called by: game_select_intro_or_ending
 */
u32 speech_request_pair(u32 unused_a0, u32 a1, u32 a2, u32 a3) {

    g_8c4362f0 = 0;
    strcpy(0x8c4362a0, a1);
    strcpy(0x8c4362c0, a2);
    g_8c43627c = speech_request(0x8c35468c, 6, 0x8c436280, a3);
    return g_8c43627c;
}

/*
 * game_fill_loop_0bf1c8  0x8c0bf1c8
 * area name: game code; nothing names its area yet; behaviour name: a loop that writes memory
 * called by: game_uses_speech_is_playing_0bad68
 */
int game_fill_loop_0bf1c8(u32 unused_a0, int a1) {
    int in_r0;
    char *pcVar1;
    int iVar2;
    int iVar3;

    iVar2 = a1 + 0x30;
    for (iVar3 = 4; -1 < iVar3; iVar3 = iVar3 + -1) {
        if ((0x29 < *(int *)(iVar3 * 4 + iVar2)) && (*(int *)(iVar3 * 4 + iVar2) < 0x30)) {
            *(u32 *)(iVar3 * 4 + iVar2) = 0;
        }
        pcVar1 = (char *)(*(int *)(iVar3 * 4 + iVar2) + a1 + 0x44);
        in_r0 = *pcVar1 + 1;
        *pcVar1 = (char)in_r0;
    }
    return in_r0;
}

/*
 * game_uses_get_word_8_0bf22c  0x8c0bf22c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_word_8
 */
u32 game_uses_get_word_8_0bf22c(int a0, int a1, u32 a2, u32 a3) {
    int *a4;
    u32 uVar1;
    u32 ar6_00;
    int iVar2;

    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
        a4 = (int *)get_word_8(*(u32 *)(0x7d8 + a1), iVar2);
        (**(code **)(0x1b0 + *a4))(a4, 0, a2, a3);
    }
    (*(code *)(&pack_release_entry_handle))(0x8c2b59d0, *(u32 *)(0x144 + a0), a2, a3);
    uVar1 = *(u32 *)(0x148 + a0);
    pack_release_entry_handle(0x8c2b59d0, uVar1, a2, a3);
    iVar2 = speech_is_playing(0x8c35468c, uVar1);
    if (iVar2 == 1) {
        speech_stop(0x8c35468c, uVar1, a2, a3);
    }
    *(u32 *)(0x154 + a0) = 0xffffff;
    ar6_00 = 0;
    uVar1 = 0xffffffff;
    CGame_draw_0c3e78(0x8c2b5628, 0xffffffff, 0);
    CTexture_ReleaseFromVRAM(a0 + 0x48, uVar1, ar6_00, a3);
    *(u32 *)(0x14c + a0) = 4;
    *(u32 *)(a0 + 0x44) = 0x12;
    game_init_fields_0ba5bc(a0 + 0x158);
    *(u32 *)(a0 + 8) = 0;
    *(u32 *)(0x7dc + a1) = 1;
    return 1;
}

/*
 * Class_12b334_ctor  0x8c0bf338
 * Class_12b36c base constructor, Class_12b334 vtable, and two vectors copied from the constants at 8c13be20/8c13be2c
 * called by: game_uses_Class_12b350_ctor_0bff8c
 */
u32 *Class_12b334_ctor(u32 *a0) {
    u8 *puVar1;
    u32 uVar2;

    Class_12b36c_ctor(a0);
    *a0 = (&DATA_8c12b334);
    a0[2] = 0;
    puVar1 = (&DATA_8c13be20);
    uVar2 = *(u32 *)((&DATA_8c13be20) + 4);
    a0[3] = *(u32 *)(&DATA_8c13be20);
    a0[4] = uVar2;
    a0[5] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13be2c);
    uVar2 = *(u32 *)((&DATA_8c13be2c) + 4);
    a0[6] = *(u32 *)(&DATA_8c13be2c);
    a0[7] = uVar2;
    a0[8] = *(u32 *)(puVar1 + 8);
    return a0;
}

/*
 * Class_12b334_dtor  0x8c0bf38c
 * stores the vtable 0x8c12b334
 * called by: game_release_0c0368
 */
u32 *Class_12b334_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b334;
        ar5_00 = 0;
        Class_12b36c_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b334_m1_0bf3d4  0x8c0bf3d4
 */
int Class_12b334_m1_0bf3d4(int a0, int a1) {
    int iVar1;

    iVar1 = a1;
    pure_virtual_stub();
    iVar1 = input_start_pressed_wrap(*(u32 *)(0x7cc + a1));
    if (iVar1 == 1) {
        *(u32 *)(a0 + 8) = 0;
        iVar1 = 0x7dc;
        *(u32 *)(0x7dc + a1) = 0;
    }
    return iVar1;
}

/*
 * noop_0bf440  0x8c0bf440
 * only calls noop_102824, which does nothing
 * strings: "EPILOG...."
 */
u32 noop_0bf440(void) {
    noop_102824("EPILOG....", 300, 0x1d6, 0xd);
    return 1;
}

/*
 * game_copy_0bf478  0x8c0bf478
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: game_uses_Class_12b350_ctor_0bff8c
 */
int game_copy_0bf478(int a0) {
    clear_2_words(a0 + 0x28);
    input_init_fields_0bf7a8(a0);
    return a0;
}

/*
 * slide_offset_step_660  0x8c0bf4a4
 * slides the offset at +0x2c by 15 per call: down to 0 (mode 1) or up to 660 (mode 2), then ends the mode
 * called by: static_init_4367d4
 */
u8 *slide_offset_step_660(int a0) {
    u8 *puVar1;
    float fVar2;

    puVar1 = *(u8 **)(a0 + 4);
    if (puVar1 == (u8 *)0x1) {
        fVar2 = *(float *)(a0 + 0x2c) - 15.0;
        *(float *)(a0 + 0x2c) = fVar2;
        puVar1 = (u8 *)0x8;
        if (fVar2 <= 0.0) {
            *(u32 *)(a0 + 0x2c) = 0;
            puVar1 = NULL;
            *(u32 *)(a0 + 4) = 0;
        }
    } else if (puVar1 == (u8 *)0x2) {
        fVar2 = *(float *)(a0 + 0x2c) + 15.0;
        *(float *)(a0 + 0x2c) = fVar2;
        puVar1 = &g_8c0bf540;
        if (660.0 <= fVar2) {
            *(u32 *)(a0 + 0x2c) = 0x44250000;
            *(u32 *)(a0 + 4) = 0;
            puVar1 = (u8 *)clear_field_0_0bf548(a0);
        }
    }
    return puVar1;
}

/*
 * clear_field_0_0bf548  0x8c0bf548
 * called by: slide_offset_step_660
 */
u32 clear_field_0_0bf548(u32 *a0) {
    *a0 = 0;
    return 0;
}

/*
 * game_uses_set_fields_0_4_c_0bf550  0x8c0bf550
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: uses_set_fields_0_4_c
 * called by: static_init_4367d4
 */
u32 game_uses_set_fields_0_4_c_0bf550(int *a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    if (*a0 != 0) {
        input_uses_set_fields_0_4_c_0bf804(a0, a1, unused_a2, a3);
        uVar1 = game_uses_Class_129808_set_model_0bfa78(a0, a1, unused_a2, a3);
    }
    return uVar1;
}

/*
 * menu_yes_no_select  0x8c0bf588
 * moves the yes/no cursor with next/prev and returns 1 for yes, 0 for no or 2 while nothing is chosen
 * called by: static_init_4367d4
 */
u32 menu_yes_no_select(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 uVar2;

    uVar2 = 2;
    if (*(int *)(a0 + 4) == 0) {
        ar5_00 = a1;
        iVar1 = menu_next_pressed(a1, a1, a2, a3);
        if ((iVar1 == 1) && (*(int *)(a0 + 0x24) == 1)) {
            *(u32 *)(a0 + 0x24) = 0;
        } else {
            iVar1 = menu_prev_pressed(a1, ar5_00, a2, a3);
            if ((iVar1 == 1) && (*(int *)(a0 + 0x24) == 0)) {
                *(u32 *)(a0 + 0x24) = 1;
            }
        }
        iVar1 = input_a_or_start_pressed(a1, ar5_00, a2, a3);
        if (iVar1 == 1) {
            if (*(int *)(a0 + 0x24) == 0) {
                uVar2 = 1;
            } else {
                uVar2 = 0;
            }
        }
    } else {
        uVar2 = 2;
    }
    return uVar2;
}

/*
 * input_a_or_start_pressed  0x8c0bf618
 * 1 when A or Start was just pressed on the pad at +0xcc and the pad is connected
 * called by: menu_yes_no_select, save_menu_update
 */
u32 input_a_or_start_pressed(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = (*(code *)(&get_field_a510_01f538))(*(u32 *)(0xcc + a0), a1, a2, a3);
    if ((iVar1 == 1) || (iVar1 = (*(code *)(&get_field_a510_01f538))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 == 2)) {
        return 0;
    }
    iVar1 = input_a_pressed(*(u32 *)(0xcc + a0));
    if ((iVar1 == 0) && (iVar1 = input_start_pressed(*(u32 *)(0xcc + a0)), iVar1 == 0)) {
        return 0;
    }
    return 1;
}

/*
 * menu_prev_pressed  0x8c0bf690
 * Left or L pressed on the controller at +0xcc (ignored during demo input)
 * called by: confirm_exit_save, menu_yes_no_select, save_menu_update
 */
u32 menu_prev_pressed(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = (*(code *)(&get_field_a510_01f538))(*(u32 *)(0xcc + a0), a1, a2, a3);
    if ((iVar1 == 1) || (iVar1 = (*(code *)(&get_field_a510_01f538))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 == 2)) {
        return 0;
    }
    iVar1 = input_left_pressed(*(u32 *)(0xcc + a0));
    if ((iVar1 == 0) && (iVar1 = input_l_pressed(*(u32 *)(0xcc + a0)), iVar1 == 0)) {
        return 0;
    }
    return 1;
}

/*
 * menu_next_pressed  0x8c0bf708
 * Right or R pressed on the controller at +0xcc (ignored during demo input)
 * called by: confirm_exit_save, menu_yes_no_select, save_menu_update
 */
u32 menu_next_pressed(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = (*(code *)(&get_field_a510_01f538))(*(u32 *)(0xcc + a0), a1, a2, a3);
    if ((iVar1 == 1) || (iVar1 = (*(code *)(&get_field_a510_01f538))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 == 2)) {
        return 0;
    }
    iVar1 = input_right_pressed(*(u32 *)(0xcc + a0));
    if ((iVar1 == 0) && (iVar1 = input_r_pressed(*(u32 *)(0xcc + a0)), iVar1 == 0)) {
        return 0;
    }
    return 1;
}

/*
 * input_start_pressed_wrap_0bf780  0x8c0bf780
 * only calls input_start_pressed
 * called by: game_uses_set_field_0_to_1_0c23fc, save_menu_update, static_init_4367d4
 */
u32 input_start_pressed_wrap_0bf780(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = input_start_pressed(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * input_init_fields_0bf7a8  0x8c0bf7a8
 * area name: sits between input functions (same compilation unit); behaviour name: writes 5 members
 * called by: game_copy_0bf478
 */
u32 input_init_fields_0bf7a8(u32 *a0) {
    *a0 = 0;
    a0[1] = 0;
    a0[2] = 2;
    a0[3] = 1;
    a0[9] = 0;
    a0[0xb] = 0;
    return 0;
}

/*
 * set_field_0_to_1  0x8c0bf7c8
 * called by: game_uses_set_field_0_to_1_0c23fc, static_init_4367d4
 */
u32 set_field_0_to_1(u32 *a0) {
    *a0 = 1;
    return 1;
}

/*
 * set_name_10  0x8c0bf7d0
 * copies string a1 into +0x10 (sprintf "%s")
 * called by: static_init_4367d4
 */
u32 set_name_10(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&sprintf))(a0 + 0x10, a1, a2, a3, "%s");
    return uVar1;
}

/*
 * input_uses_set_fields_0_4_c_0bf804  0x8c0bf804
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * set_fields_0_4_c called by: game_uses_set_fields_0_4_c_0bf550
 */
u32 input_uses_set_fields_0_4_c_0bf804(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    double dVar5;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u8 auStack_60[20];
    u32 uStack_4c;
    u32 uStack_2c;

    cVar7 = '\0';
    cVar6 = '\0';
    uStack_2c = g_8c13be38;
    uStack_4c = g_8c13be58;
    clear_5_words(auStack_60, a1, unused_a2, a3);
    uVar4 = 4;
    uVar3 = 0x8c43654c;
    set_fields_0_4_c(auStack_60, &uStack_2c, 0x8c43654c, 4);
    Class_129808_set_model(auStack_60, &g_8c43655c, uVar3);
    uVar2 = 0x80000060;
    set_field_10(auStack_60, 0x80000060);
    game_uses_clear_5_words_0c453c(&g_8c2b5628, uVar2, uVar3, uVar4);
    obj_set_texlist(a1, uVar2, uVar3);
    uVar2 = *(u32 *)(a0 + 8);
    obj_set_texture_num(a1, uVar2);
    Class_129808_draw_offset(auStack_60, uVar2, uVar3, uVar4);
    uVar4 = 4;
    uVar3 = 0x8c43654c;
    set_fields_0_4_c(auStack_60, &uStack_4c, 0x8c43654c, 4);
    uVar2 = 1;
    obj_set_texture_num(a1, 1);
    Class_129808_draw_offset(auStack_60, uVar2, uVar3, uVar4);
    iVar1 = *(int *)(a0 + 8);
    if (iVar1 == 3) {
        if (cVar7 == '\0') {
            dVar5 = (double)CONCAT44(0x42e20000, *(u32 *)(a0 + 0x2c));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x2c);
            dVar5 = -1.3340701484224984e-249;
        }
        g_8c436774 = 0x43360000;
        if (cVar6 == '\0') {
            g_8c436778 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
        } else {
            g_8c436778 = SUB84(dVar5 + dVar5, 0);
        }
        if (cVar7 != '\0') {
            g_8c436778 = (float)in_xd0;
            uRam8c43677c = (u32)((u64)in_xd0 >> 0x20);
        }
        pack_draw_number_digits(&g_8c2b5628, uVar2, uVar3);
    } else if (iVar1 == 5) {
        rtc_get_date(&stack0xffffff94, uVar2, uVar3, uVar4);
        if (cVar7 == '\0') {
            dVar5 = (double)CONCAT44(0x42c60000, *(u32 *)(a0 + 0x2c));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x2c);
            dVar5 = 9.367488658879283e+17;
        }
        g_8c436774 = 0x43360000;
        if (cVar6 == '\0') {
            g_8c436778 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
        } else {
            g_8c436778 = SUB84(dVar5 + dVar5, 0);
        }
        if (cVar7 != '\0') {
            g_8c436778 = (float)in_xd0;
            uRam8c43677c = (u32)((u64)in_xd0 >> 0x20);
        }
        pack_draw_number_digits(&g_8c2b5628, uVar2, uVar3);
    } else if (iVar1 == 9) {
        if (cVar7 != '\0') {
            uRam8c43677c = 0x3f19999a;
        }
        g_8c436778 = 145.0;
        g_8c436774 = 0x43aa0000;
        uVar4 = 0x10;
        uVar3 = 0;
        game_uses_obj_set_texlist_0c4370(&g_8c2b5628, a0 + 0x10, 0, 0x10);
    }
    uVar2 = free_if_nonnull_wrap_0151a0(auStack_60, 0xffffffff, uVar3, uVar4);
    return uVar2;
}

/*
 * game_uses_Class_129808_set_model_0bfa78  0x8c0bfa78
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Class_129808_set_model
 * called by: game_uses_set_fields_0_4_c_0bf550
 */
u32 game_uses_Class_129808_set_model_0bfa78(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u16 *puVar2;
    u32 *puVar3;
    u32 uVar4;
    double dVar5;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u32 uStack_8c;
    u16 uStack_7c;
    u16 uStack_7a;
    u16 uStack_78;
    u16 uStack_76;
    u16 uStack_74;
    u16 uStack_72;
    u16 uStack_70;
    u16 uStack_6e;
    float fStack_6c;
    float fStack_68;
    float fStack_64;
    float fStack_60;
    float fStack_5c;
    float fStack_58;
    float fStack_54;
    float fStack_50;
    float fStack_4c;
    float fStack_48;
    float fStack_44;
    float fStack_40;
    float fStack_3c;
    float fStack_38;
    float fStack_34;
    float fStack_30;
    u32 uStack_2c;

    cVar7 = '\0';
    cVar6 = '\0';
    uStack_2c = g_8c13be78;
    fStack_4c = g_8c13be98;
    fStack_48 = g_8c13be9c;
    fStack_44 = g_8c13bea0;
    fStack_40 = g_8c13bea4;
    fStack_3c = g_8c13bea8;
    fStack_38 = g_8c13beac;
    fStack_34 = g_8c13beb0;
    fStack_30 = g_8c13beb4;
    fStack_6c = g_8c13beb8;
    fStack_68 = g_8c13bebc;
    fStack_64 = g_8c13bec0;
    fStack_60 = g_8c13bec4;
    fStack_5c = g_8c13bec8;
    fStack_58 = g_8c13becc;
    fStack_54 = g_8c13bed0;
    fStack_50 = g_8c13bed4;
    uStack_8c = g_8c13bed8;
    clear_5_words(&stack0xffffff60, a1, unused_a2, a3);
    uStack_7c = 0;
    uStack_7a = 0xff;
    uStack_78 = 0;
    uStack_76 = 0x80;
    uStack_74 = 0xff;
    uStack_72 = 0x80;
    uStack_70 = 0xff;
    uStack_6e = 0xff;
    uVar4 = 4;
    puVar3 = (u32 *)0x8c43654c;
    set_fields_0_4_c(&stack0xffffff60, &uStack_2c, 0x8c43654c, 4);
    Class_129808_set_model(&stack0xffffff60, &uStack_7c, puVar3);
    uVar1 = 0x80000060;
    set_field_10(&stack0xffffff60, 0x80000060);
    obj_set_texlist(a1, uVar1, puVar3);
    uVar1 = 0xc;
    obj_set_texture_num(a1, 0xc);
    Class_129808_draw_offset(&stack0xffffff60, uVar1, puVar3, uVar4);
    if (*(int *)(a0 + 0xc) == 0) {
        obj_set_texture_num(a1, 0xc);
        if (*(int *)(a0 + 0x24) == 1) {
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_4c);
            } else {
                in_xd0 = CONCAT44(fStack_48, fStack_4c);
                dVar5 = -7.588929071877633e-251;
            }
            if (cVar6 == '\0') {
                fStack_4c = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_4c = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_48);
            } else {
                fStack_4c = (float)in_xd0;
                fStack_48 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_44, fStack_48);
                dVar5 = -7.588929071877633e-251;
            }
            if (cVar6 == '\0') {
                fStack_48 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_48 = SUB84(dVar5 + dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_44);
            } else {
                fStack_48 = (float)in_xd0;
                fStack_44 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_40, fStack_44);
                dVar5 = -7.588929071877633e-251;
            }
            if (cVar6 == '\0') {
                fStack_44 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_44 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_40);
            } else {
                fStack_44 = (float)in_xd0;
                fStack_40 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_3c, fStack_40);
                dVar5 = -7.588929071877633e-251;
            }
            if (cVar6 == '\0') {
                fStack_40 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_40 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_3c);
            } else {
                fStack_40 = (float)in_xd0;
                fStack_3c = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_38, fStack_3c);
                dVar5 = -7.588929071877633e-251;
            }
            if (cVar6 == '\0') {
                fStack_3c = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_3c = SUB84(dVar5 + dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_38);
            } else {
                fStack_3c = (float)in_xd0;
                fStack_38 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_34, fStack_38);
                dVar5 = -7.588929071877633e-251;
            }
            if (cVar6 == '\0') {
                fStack_38 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_38 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_34);
            } else {
                fStack_38 = (float)in_xd0;
                fStack_34 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_30, fStack_34);
                dVar5 = -7.588929071877633e-251;
            }
            if (cVar6 == '\0') {
                fStack_34 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_34 = SUB84(dVar5 + dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_30);
            } else {
                fStack_34 = (float)in_xd0;
                fStack_30 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(uStack_2c, fStack_30);
                dVar5 = -7.588929071877633e-251;
            }
            if (cVar6 == '\0') {
                fStack_30 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_30 = SUB84(dVar5 + dVar5, 0);
            }
            if (cVar7 != '\0') {
                fStack_30 = (float)in_xd0;
                uStack_2c = (u32)((u64)in_xd0 >> 0x20);
            }
            uStack_7c = 0;
            uStack_7a = 0x7f;
            uStack_78 = 0;
            uStack_76 = 0;
            uStack_74 = 0x7f;
            uStack_72 = 0;
            uStack_70 = 0x7f;
            uStack_6e = 0x7f;
            uVar1 = 4;
            puVar3 = &uStack_8c;
            set_fields_0_4_c(&stack0xffffff60, &fStack_4c, puVar3, 4);
            puVar2 = &uStack_7c;
            Class_129808_set_model(&stack0xffffff60, puVar2, puVar3);
            Class_129808_draw_offset(&stack0xffffff60, puVar2, puVar3, uVar1);
            uStack_7c = 0x80;
            uStack_7a = 0x7f;
            uStack_78 = 0x80;
            uStack_76 = 0;
            uStack_74 = 0xff;
            uStack_72 = 0;
            uStack_70 = 0xff;
            uStack_6e = 0x7f;
            uVar4 = 4;
            puVar3 = (u32 *)0x8c43654c;
            set_fields_0_4_c(&stack0xffffff60, &fStack_6c, 0x8c43654c, 4);
            puVar2 = &uStack_7c;
            Class_129808_set_model(&stack0xffffff60, puVar2, puVar3);
            Class_129808_draw_offset(&stack0xffffff60, puVar2, puVar3, uVar4);
        } else {
            uStack_7c = 0;
            uStack_7a = 0x7f;
            uStack_78 = 0;
            uStack_76 = 0;
            uStack_74 = 0x7f;
            uStack_72 = 0;
            uStack_70 = 0x7f;
            uStack_6e = 0x7f;
            uVar4 = 4;
            uVar1 = 0x8c43654c;
            set_fields_0_4_c(&stack0xffffff60, &fStack_4c, 0x8c43654c, 4);
            puVar2 = &uStack_7c;
            Class_129808_set_model(&stack0xffffff60, puVar2, uVar1);
            Class_129808_draw_offset(&stack0xffffff60, puVar2, uVar1, uVar4);
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_6c);
            } else {
                in_xd0 = CONCAT44(fStack_68, fStack_6c);
                dVar5 = 2.72155285368112e-312;
            }
            if (cVar6 == '\0') {
                fStack_6c = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_6c = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_68);
            } else {
                fStack_6c = (float)in_xd0;
                fStack_68 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_64, fStack_68);
                dVar5 = 2.72155285368112e-312;
            }
            if (cVar6 == '\0') {
                fStack_68 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_68 = SUB84(dVar5 + dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_64);
            } else {
                fStack_68 = (float)in_xd0;
                fStack_64 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_60, fStack_64);
                dVar5 = 2.72155285368112e-312;
            }
            if (cVar6 == '\0') {
                fStack_64 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_64 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_60);
            } else {
                fStack_64 = (float)in_xd0;
                fStack_60 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_5c, fStack_60);
                dVar5 = 2.72155285368112e-312;
            }
            if (cVar6 == '\0') {
                fStack_60 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_60 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_5c);
            } else {
                fStack_60 = (float)in_xd0;
                fStack_5c = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_58, fStack_5c);
                dVar5 = 2.72155285368112e-312;
            }
            if (cVar6 == '\0') {
                fStack_5c = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_5c = SUB84(dVar5 + dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_58);
            } else {
                fStack_5c = (float)in_xd0;
                fStack_58 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_54, fStack_58);
                dVar5 = 2.72155285368112e-312;
            }
            if (cVar6 == '\0') {
                fStack_58 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_58 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_54);
            } else {
                fStack_58 = (float)in_xd0;
                fStack_54 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_50, fStack_54);
                dVar5 = 2.72155285368112e-312;
            }
            if (cVar6 == '\0') {
                fStack_54 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_54 = SUB84(dVar5 + dVar5, 0);
            }
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x41200000, fStack_50);
            } else {
                fStack_54 = (float)in_xd0;
                fStack_50 = (float)((u64)in_xd0 >> 0x20);
                in_xd0 = CONCAT44(fStack_4c, fStack_50);
                dVar5 = 2.72155285368112e-312;
            }
            if (cVar6 == '\0') {
                fStack_50 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_50 = SUB84(dVar5 + dVar5, 0);
            }
            if (cVar7 != '\0') {
                fStack_50 = (float)in_xd0;
                fStack_4c = (float)((u64)in_xd0 >> 0x20);
            }
            uStack_7c = 0x80;
            uStack_7a = 0x7f;
            uStack_78 = 0x80;
            uStack_76 = 0;
            uStack_74 = 0xff;
            uStack_72 = 0;
            uStack_70 = 0xff;
            uStack_6e = 0x7f;
            uVar4 = 4;
            puVar3 = &uStack_8c;
            set_fields_0_4_c(&stack0xffffff60, &fStack_6c, puVar3, 4);
            puVar2 = &uStack_7c;
            Class_129808_set_model(&stack0xffffff60, puVar2, puVar3);
            Class_129808_draw_offset(&stack0xffffff60, puVar2, puVar3, uVar4);
        }
    } else if (*(int *)(a0 + 0xc) == 1) {
        obj_set_texture_num(a1, 0xb);
        uStack_7c = 0;
        uStack_7a = 0xff;
        uStack_78 = 0;
        uStack_76 = 0;
        uStack_74 = 0xff;
        uStack_72 = 0;
        uStack_70 = 0xff;
        uStack_6e = 0xff;
        puVar2 = &uStack_7c;
        Class_129808_set_model(&stack0xffffff60, puVar2, puVar3);
        Class_129808_draw_offset(&stack0xffffff60, puVar2, puVar3, uVar4);
    }
    uVar1 = free_if_nonnull_wrap_0151a0(&stack0xffffff60, 0xffffffff, puVar3, uVar4);
    return uVar1;
}

/*
 * game_uses_Class_12b350_ctor_0bff8c  0x8c0bff8c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Class_12b350_ctor
 * called by: static_init_vec3s_286e20
 */
int *game_uses_Class_12b350_ctor_0bff8c(int *a0, u32 a1, u32 a2, u32 a3) {
    u8 *puVar1;
    u32 uVar2;
    u32 *puVar3;

    Class_12b350_ctor(a0 + 3, a1, a2, a3);
    Class_12b388_ctor((int)a0 + 0x17c, a1);
    Class_12b334_ctor((int)a0 + 0x2d578);
    game_copy_0ba2cc((int)a0 + 0x2d59c);
    Class_129808_copy_016410((int)a0 + 0x2ddc4);
    game_vec_0ffb98((int)a0 + 0x2de08, a1, a2, a3);
    CItemGLoader_list_0fed18((int)a0 + 0x2e3a8, a1, a2);
    Class_129920_ctor((int)a0 + 0x2e64c, a1);
    game_copy_0bf478((int)a0 + 0x2e710);
    puVar1 = (&DATA_8c13bee8);
    puVar3 = (u32 *)((int)a0 + 0x2dd88);
    uVar2 = *(u32 *)((&DATA_8c13bee8) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13bee8);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13bef4);
    puVar3 = (u32 *)((int)a0 + 0x2dd94);
    uVar2 = *(u32 *)((&DATA_8c13bef4) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13bef4);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13bf00);
    puVar3 = (u32 *)((int)a0 + 0x2dda0);
    uVar2 = *(u32 *)((&DATA_8c13bf00) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13bf00);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13bf0c);
    puVar3 = (u32 *)((int)a0 + 0x2ddac);
    uVar2 = *(u32 *)((&DATA_8c13bf0c) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13bf0c);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13bf18);
    puVar3 = (u32 *)((int)a0 + 0x2ddb8);
    uVar2 = *(u32 *)((&DATA_8c13bf18) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13bf18);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    *a0 = (int)(a0 + 3);
    a0[1] = (int)a0 + 0x17c;
    a0[2] = (int)a0 + 0x2d578;
    *(int *)(0x2dd68 + (int)a0) = (int)a0 + 0x2de08;
    *(int *)(0x2dd6c + (int)a0) = (int)a0 + 0x2e3a8;
    *(int *)(0x2dd74 + (int)a0) = (int)a0 + 0x17c;
    *(u32 *)(0x2dd7c + (int)a0) = 0;
    *(u32 *)(0x2e75c + (int)a0) = 0;
    *(u32 *)(0x2dd84 + (int)a0) = 0;
    *(u32 *)(0x2dd78 + (int)a0) = 0;
    *(u32 *)(0x2dd80 + (int)a0) = 0;
    return a0;
}
