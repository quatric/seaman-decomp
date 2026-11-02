/* Seaman (USA) region 0x8c090000-0x8c0a0000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * game_sub_090bc4  0x8c090bc4
 * area name: game code; nothing names its area yet
 * called by: game_sub_08e6e8
 */
u32 game_sub_090bc4(int a0, u8 *a1, u8 *a2, u8 *a3) {
    u64 uVar1;
    int iVar2;
    u8 *ar5_00;
    u8 *ar6_00;
    u32 ar7_00;
    u32 uVar3;
    u32 in_fr1;
    float fVar4;
    double dVar5;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u8 *in_stack_00000000;
    u64 uStack_114;
    u32 uStack_10c;
    u8 auStack_108[16];
    u8 auStack_f8[16];
    u8 auStack_e8[16];
    u8 auStack_d8[12];
    u8 auStack_cc[16];
    u8 auStack_bc[16];
    u8 auStack_ac[16];
    u8 auStack_9c[12];
    u8 auStack_90[16];
    u8 auStack_80[16];
    u8 auStack_70[4];
    u32 uStack_6c;
    u32 uStack_68;
    u32 uStack_64;
    u8 auStack_60[16];
    u8 auStack_50[16];
    u32 uStack_40;
    u32 uStack_3c;
    u32 uStack_38;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;

    cVar7 = '\0';
    cVar6 = '\0';
    ar5_00 = a1;
    ar6_00 = a2;
    game_sub_08e9b0(auStack_70, a1, a2);
    Vec3_ctor_zero(auStack_80, ar5_00, ar6_00);
    uVar3 = 1;
    iVar2 = *(int *)(a0 + 300);
    if ((iVar2 < 7) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            iVar2 = get_field_24_026024(in_stack_00000000, ar5_00, ar6_00, a3);
            if (iVar2 != 1) {
            LAB_8c090c8a:
                if (cVar7 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = (u64)in_fr1;
                }
                *(u32 *)(a0 + 300) = 6;
                CAnimBody_SetFrame(a0 + 0xb0, ar5_00, ar6_00, a3);
                ar7_00 = 0;
                uVar3 = 0xffffffff;
                CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                uStack_10c = 1;
                Vec3_dtor(auStack_80, 0xffffffff, uVar3, ar7_00);
                game_sub_08e93c(auStack_70, 0xffffffff, uVar3, ar7_00);
                return uStack_10c;
            }
            ar5_00 = (u8 *)get_field_24_026024(in_stack_00000000, ar5_00, ar6_00, a3);
            ar6_00 = (u8 *)0x1;
            iVar2 = game_sub_069c24(auStack_70, ar5_00, 1, a3);
            if ((iVar2 == 0) ||
                (ar5_00 = in_stack_00000000, iVar2 = game_sub_091854(a0, in_stack_00000000, ar6_00, a3), iVar2 == 1))
                goto LAB_8c090c8a;
            Vec3_assign(a0 + 0x28c, auStack_60, ar6_00, a3);
            Vec3_scale(auStack_50, &uStack_28, ar6_00, a3, auStack_90);
            Vec3_assign(a0 + 0x2a8, auStack_90, ar6_00, a3);
            ar5_00 = (u8 *)0xffffffff;
            Vec3_dtor(auStack_90, 0xffffffff, ar6_00, a3);
            if (cVar7 == '\0') {
                *(u32 *)(a0 + 0x29c) = uStack_40;
                *(u32 *)(a0 + 0x2a0) = uStack_3c;
                *(u32 *)(a0 + 0x2a4) = uStack_38;
                *(u32 *)(a0 + 0x2b8) = uStack_34;
                *(u32 *)(a0 + 700) = uStack_30;
                *(u32 *)(a0 + 0x2c0) = uStack_2c;
                *(u32 *)(a0 + 0x2c4) = uStack_28;
            } else {
                *(u64 *)(a0 + 0x29c) = CONCAT44(uStack_3c, uStack_40);
                *(u64 *)(a0 + 0x2a0) = CONCAT44(uStack_38, uStack_3c);
                *(u64 *)(a0 + 0x2a4) = CONCAT44(uStack_34, uStack_38);
                *(u64 *)(a0 + 0x2b8) = CONCAT44(uStack_30, uStack_34);
                *(u64 *)(a0 + 700) = CONCAT44(uStack_2c, uStack_30);
                *(u64 *)(a0 + 0x2c0) = CONCAT44(uStack_28, uStack_2c);
                *(u64 *)(a0 + 0x2c4) = CONCAT44(uStack_24, uStack_28);
            }
            *(u32 *)(a0 + 0x2c8) = uStack_6c;
            *(u32 *)(a0 + 0x2f4) = uStack_68;
            *(u32 *)(a0 + 0x2f8) = uStack_64;
            Vec3_assign_f(a0 + 0x2e0, ar5_00, ar6_00, a3);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 1:
            Vec3_set_xyz(auStack_9c, ar5_00, ar6_00, a3);
            Vec3_sub_023484(a0 + 0x2a8, auStack_9c, ar6_00, a3, auStack_ac);
            iVar2 = a0 + 0x28c;
            Vec3_add(auStack_ac, iVar2, ar6_00, a3, auStack_bc);
            Vec3_ctor_xyz(auStack_cc, iVar2, ar6_00, a3);
            Vec3_set_xyz(auStack_d8, iVar2, ar6_00, a3);
            Vec3_sub_023484(auStack_cc, auStack_d8, ar6_00, a3, auStack_e8);
            if (cVar7 == '\0') {
                dVar5 = (double)CONCAT44(0x42000000, *(u32 *)(a0 + 0x2c4));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x2c4);
                dVar5 = 3.14602454102719e-312;
            }
            if (cVar6 == '\0') {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 * dVar5, 0);
            }
            uVar1 = in_xd0;
            if (cVar7 == '\0') {
                uStack_114 = CONCAT44(uStack_114._4_4_, fVar4);
                uVar1 = uStack_114;
            }
            uStack_114 = uVar1;
            Vec3_scale(auStack_e8, &uStack_114, ar6_00, a3, auStack_f8);
            Vec3_sub(auStack_bc, auStack_f8, ar6_00, a3, auStack_108);
            Vec3_assign(auStack_80, auStack_108, ar6_00, a3);
            Vec3_dtor(auStack_108, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_f8, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_e8, 0xffffffff, ar6_00, a3);
            object_dtor_delete(auStack_d8, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_cc, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_bc, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_ac, 0xffffffff, ar6_00, a3);
            object_dtor_delete(auStack_9c, 0xffffffff, ar6_00, a3);
            ar6_00 = auStack_80;
            iVar2 = game_sub_08e9fc(a0, a1, ar6_00, a2);
            ar5_00 = a1;
            a3 = a2;
            if (iVar2 == 0) {
                if (cVar7 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = (u64)(u32)fVar4;
                }
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            break;
        case 2:
            iVar2 = game_sub_08eb8c(a0, a2, ar6_00, a3);
            ar5_00 = a2;
            if (iVar2 == 0) {
                if (cVar7 == '\0') {
                    *(u32 *)(a0 + 0x2cc) = 0;
                } else {
                    *(u64 *)(a0 + 0x2cc) = (u64)in_fr1;
                }
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 0x240) = 1;
                *(u32 *)(a0 + 0x244) = 1;
            }
            break;
        case 3:
            ar5_00 = *(u8 **)(a0 + 0x2c8);
            game_sub_0911f0(a0, ar5_00, a2, a3);
            ar6_00 = a2;
            break;
        case 4:
            ar5_00 = *(u8 **)(a0 + 0x2c8);
            iVar2 = game_sub_091570(a0, ar5_00, a2, a3);
            ar6_00 = a2;
            if (iVar2 == 0) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            break;
        case 5:
            uVar3 = 0;
            break;
        case 6:
            CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, ar5_00, ar6_00, a3);
            uVar3 = 0;
        }
    }
    if (((-1 < *(int *)(a0 + 0x2f4)) && (-1 < *(int *)(a0 + 0x2f8))) &&
        ((iVar2 = game_sub_06b054(*(u32 *)(a0 + 0x2f4)),
          iVar2 == 0 || (iVar2 = game_sub_091854(a0, in_stack_00000000, ar6_00, a3), iVar2 == 1)))) {
        game_sub_06b1d8(*(u32 *)(a0 + 0x2f4), *(u32 *)(a0 + 0x2f8), ar6_00, a3);
        uVar3 = 0;
        *(u32 *)(a0 + 0x240) = 0;
        *(u32 *)(a0 + 0x2f4) = 0xffffffff;
        *(u32 *)(a0 + 0x2f8) = 0xffffffff;
        *(u32 *)(a0 + 0x134) = 0;
        *(u32 *)(a0 + 300) = 0;
    }
    uStack_114._4_4_ = uVar3;
    Vec3_dtor(auStack_80, 0xffffffff, ar6_00, a3);
    game_sub_08e93c(auStack_70, 0xffffffff, ar6_00, a3);
    return uStack_114._4_4_;
}

/*
 * game_sub_0911f0  0x8c0911f0
 * area name: game code; nothing names its area yet
 * called by: game_sub_090bc4
 */
u32 game_sub_0911f0(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 ar5_00;
    u32 ar5_01;
    int iVar3;
    u32 uVar4;
    u32 ar6_00;
    float in_fr1;
    float fVar5;
    float fVar7;
    double dVar6;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    u8 auStack_84[12];
    u8 auStack_78[16];
    u8 auStack_68[12];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[12];
    u8 auStack_30[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar4 = a1;
    iVar3 = a2;
    Vec3_ctor_zero(auStack_30, a1, a2);
    Vec3_set_zero(auStack_3c);
    iVar1 = libgcc_divide_helper_01031c(a1, 3, iVar3);
    iVar1 = iVar1 + 0x11;
    uVar4 = 10;
    iVar2 = CAnimBody_PlayToEnd(a0 + 0xb0, 10, iVar3, a3);
    if ((iVar2 == 1) || (iVar2 == 2)) {
        CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar4, iVar3, a3);
        if (cVar9 == '\0') {
            in_fr1 = *(float *)(a0 + 0x2cc);
        } else {
            in_xd0 = *(u64 *)(a0 + 0x2cc);
        }
        if (cVar8 == '\0') {
            in_fr1 = in_fr1 + 1.0;
        } else {
            in_fr1 = SUB84((double)CONCAT44(0x3f800000, in_fr1) + (double)CONCAT44(0x3f800000, in_fr1), 0);
        }
        if (cVar9 == '\0') {
            *(float *)(a0 + 0x2cc) = in_fr1;
        } else {
            *(u64 *)(a0 + 0x2cc) = in_xd0;
        }
        uVar4 = array_at_field_14(a0 + 0xb0, iVar1, iVar3, a3);
        uVar4 = deref_u32(uVar4);
        ar5_00 = motion_entry_get_0(a0 + 0xb0, uVar4, 0);
        ar6_00 = 0;
        ar5_01 = motion_entry_get_4(a0 + 0xb0, uVar4, 0);
        if (cVar9 == '\0') {
            fVar5 = *(float *)(a0 + 0x2cc);
            fVar7 = 319.0;
        } else {
            in_xd0 = *(u64 *)(a0 + 0x2cc);
            fVar5 = 319.0;
            fVar7 = 4.2039e-43;
        }
        if (fVar5 == fVar7) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            CAnimBody_SetFrame(a0 + 0xb0, uVar4, ar6_00, a3);
            a3 = 0;
            ar6_00 = 0xffffffff;
            uVar4 = 0;
            iVar3 = a0 + 0xb0;
            CAnimBody_SetAnimation(iVar3, 0, 0xffffffff, 0);
            uVar4 = rand();
            iVar3 = libgcc_divide_helper_01031c(uVar4, 0x4c4, ar6_00);
            *(int *)(a0 + 0x284) = iVar3 + 0x9c4;
        }
        game_sub_034384(a0 + 0xb0, ar5_00, ar6_00, a3);
        Vec3_assign(a0 + 0x2d0, auStack_4c, ar6_00, a3);
        Vec3_dtor(auStack_4c, 0xffffffff, ar6_00, a3);
        Vec3_sub_assign(a0 + 0x2d0, a0 + 0x2e0);
        Vec3_scale_assign(a0 + 0x2d0, a0 + 0x2c4);
        game_sub_034384(a0 + 0xb0, ar5_00, ar6_00, a3);
        Vec3_assign(a0 + 0x2e0, auStack_5c, ar6_00, a3);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_5c, 0xffffffff, ar6_00, a3);
        Vec3_set_xyz(auStack_68, uVar4, ar6_00, a3);
        Vec3_sub_023484(a0 + 0x2d0, auStack_68, ar6_00, a3, auStack_78);
        Vec3_assign(a0 + 0x2d0, auStack_78, ar6_00, a3);
        Vec3_dtor(auStack_78, 0xffffffff, ar6_00, a3);
        object_dtor_delete(auStack_68, 0xffffffff, ar6_00, a3);
        game_sub_034650(a0 + 0xb0, ar5_01, ar6_00, a3);
        vec3_copy_8c023d8c(a2, auStack_84, ar6_00, a3);
        object_dtor_delete(auStack_84, 0xffffffff, ar6_00, a3);
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x2a0), *(u32 *)(a2 + 4));
        } else {
            in_xd0 = *(u64 *)(a2 + 4);
            dVar6 = *(double *)(a0 + 0x2a0);
        }
        if (cVar8 == '\0') {
            fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 + dVar6, 0);
        }
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(*(u32 *)(a0 + 700), fVar5);
        } else {
            dVar6 = *(double *)(a0 + 700);
        }
        if (cVar8 == '\0') {
            fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 + dVar6, 0);
        }
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(0x43340000, fVar5);
        } else {
            dVar6 = 1.4180502381632e-311;
        }
        if (cVar8 == '\0') {
            fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 + dVar6, 0);
        }
        if (cVar9 == '\0') {
            *(float *)(a2 + 4) = fVar5;
        } else {
            *(u64 *)(a2 + 4) = in_xd0;
        }
        object_dtor_delete(auStack_3c, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_30, 0xffffffff, ar6_00, a3);
    } else {
        object_dtor_delete(auStack_3c, 0xffffffff, iVar3, a3);
        Vec3_dtor(auStack_30, 0xffffffff, iVar3, a3);
    }
    return 1;
}

/*
 * game_sub_091570  0x8c091570
 * area name: game code; nothing names its area yet
 * called by: game_sub_090bc4
 */
u32 game_sub_091570(int a0, u32 a1, int a2, u32 a3) {
    bool bVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int ar6_00;
    u32 ar6_01;
    float in_fr1;
    float fVar5;
    double dVar6;
    u64 in_xd0;
    bool bVar7;
    char cVar8;
    char cVar9;
    u8 auStack_84[12];
    u8 auStack_78[16];
    u8 auStack_68[12];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[12];
    u8 auStack_30[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar4 = a1;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_30, a1, a2);
    Vec3_set_zero(auStack_3c);
    uVar4 = 3;
    iVar2 = libgcc_divide_helper_01031c(a1, 3, ar6_00);
    iVar2 = iVar2 + 0x11;
    CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, uVar4, ar6_00, a3);
    if (cVar9 == '\0') {
        in_fr1 = *(float *)(a0 + 0x2cc);
    } else {
        in_xd0 = *(u64 *)(a0 + 0x2cc);
    }
    if (cVar8 == '\0') {
        in_fr1 = in_fr1 + 1.0;
    } else {
        in_fr1 = SUB84((double)CONCAT44(0x3f800000, in_fr1) + (double)CONCAT44(0x3f800000, in_fr1), 0);
    }
    if (cVar9 == '\0') {
        *(float *)(a0 + 0x2cc) = in_fr1;
    } else {
        *(u64 *)(a0 + 0x2cc) = in_xd0;
    }
    uVar4 = array_at_field_14(a0 + 0xb0, iVar2, ar6_00, a3);
    uVar4 = deref_u32(uVar4);
    uVar3 = motion_entry_get_0(a0 + 0xb0, uVar4, 0);
    ar6_01 = 0;
    uVar4 = motion_entry_get_4(a0 + 0xb0, uVar4, 0);
    if (cVar9 == '\0') {
        in_fr1 = *(float *)(a0 + 0x2cc);
    } else {
        in_xd0 = *(u64 *)(a0 + 0x2cc);
    }
    if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44((float)*(int *)(a0 + 0x284), in_fr1);
    } else {
        dVar6 = (double)*(int *)(a0 + 0x284);
    }
    bVar1 = cVar8 == '\0';
    bVar7 = SUB84(dVar6, 0) < (float)((u64)dVar6 >> 0x20);
    if (!bVar1 || !bVar7) {
        *(u32 *)(a0 + 0x214) = 0;
    }
    game_sub_034384(a0 + 0xb0, uVar3, ar6_01, a3);
    Vec3_assign(a0 + 0x2d0, auStack_4c, ar6_01, a3);
    Vec3_dtor(auStack_4c, 0xffffffff, ar6_01, a3);
    Vec3_sub_assign(a0 + 0x2d0, a0 + 0x2e0);
    Vec3_scale_assign(a0 + 0x2d0, a0 + 0x2c4);
    game_sub_034384(a0 + 0xb0, uVar3, ar6_01, a3);
    Vec3_assign(a0 + 0x2e0, auStack_5c, ar6_01, a3);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_5c, 0xffffffff, ar6_01, a3);
    Vec3_set_xyz(auStack_68, uVar3, ar6_01, a3);
    Vec3_sub_023484(a0 + 0x2d0, auStack_68, ar6_01, a3, auStack_78);
    Vec3_assign(a0 + 0x2d0, auStack_78, ar6_01, a3);
    Vec3_dtor(auStack_78, 0xffffffff, ar6_01, a3);
    object_dtor_delete(auStack_68, 0xffffffff, ar6_01, a3);
    game_sub_034650(a0 + 0xb0, uVar4, ar6_01, a3);
    vec3_copy_8c023d8c(a2, auStack_84, ar6_01, a3);
    object_dtor_delete(auStack_84, 0xffffffff, ar6_01, a3);
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x2a0), *(u32 *)(a2 + 4));
    } else {
        in_xd0 = *(u64 *)(a2 + 4);
        dVar6 = *(double *)(a0 + 0x2a0);
    }
    if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 + dVar6, 0);
    }
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(*(u32 *)(a0 + 700), fVar5);
    } else {
        dVar6 = *(double *)(a0 + 700);
    }
    if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 + dVar6, 0);
    }
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x43340000, fVar5);
    } else {
        dVar6 = 1.4180502381632e-311;
    }
    if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 + dVar6, 0);
    }
    if (cVar9 == '\0') {
        *(float *)(a2 + 4) = fVar5;
    } else {
        *(u64 *)(a2 + 4) = in_xd0;
    }
    object_dtor_delete(auStack_3c, 0xffffffff, ar6_01, a3);
    Vec3_dtor(auStack_30, 0xffffffff, ar6_01, a3);
    return (u32)(bVar1 && bVar7);
}

/*
 * game_sub_091854  0x8c091854
 * area name: game code; nothing names its area yet
 * called by: game_sub_090bc4
 */
int game_sub_091854(u32 unused_a0, int *a1, float *a2, u8 *a3) {
    int iVar1;
    int ar4_00;
    u32 uVar2;
    u8 *ar5_00;
    int iVar3;
    int a6;
    float fVar4;
    code *pcVar5;
    char cVar6;
    char cVar7;
    u8 auStack_28[4];
    float fStack_24;
    u8 auStack_20[12];

    cVar7 = '\0';
    cVar6 = '\0';
    iVar3 = 0;
    a6 = 0;
    Vec3_ctor_zero(auStack_28, a1, a2);
    iVar1 = (**(code **)(*a1 + 0x11c))(a1, 10, a2, a3);
    while ((a6 < iVar1 && (iVar3 == 0))) {
        ar4_00 = (**(code **)(*a1 + 0x100))(a1, 10, a6, a3);
        a3 = auStack_20;
        a2 = &fStack_24;
        ar5_00 = auStack_28;
        get_vec3_field_30(ar4_00, ar5_00, a2, a3);
        uVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 0x148))(ar4_00, ar5_00, a2, a3);
        if ((short)uVar2 == 2) {
            if (cVar7 == '\0') {
                pcVar5 = (code *)0x42dc0000;
                fVar4 = fStack_24;
            } else {
                fVar4 = 110.0;
                pcVar5 = Vec3_dtor;
            }
            if (cVar6 != '\0' || (float)pcVar5 <= fVar4) {
                iVar3 = 1;
            }
        }
        a6 = a6 + 1;
    }
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    return iVar3;
}

/*
 * game_sub_091924  0x8c091924
 * area name: game code; nothing names its area yet
 * called by: game_sub_08e6e8, game_sub_08fd38
 */
u32 game_sub_091924(int a0, u32 a1, u32 a2, int a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 ar7_00;
    u32 uVar4;
    float fVar5;
    float fVar8;
    double dVar6;
    u64 uVar7;
    u64 in_xd0;
    char cVar9;
    char cVar10;
    u8 auStack_74[16];
    u8 auStack_64[12];
    u8 auStack_58[16];
    u8 auStack_48[12];
    u8 auStack_3c[12];
    u8 auStack_30[16];
    u8 auStack_20[4];
    float fStack_1c;
    u32 uStack_18;

    cVar10 = '\0';
    cVar9 = '\0';
    uVar4 = 1;
    uVar2 = a1;
    uVar3 = a2;
    Vec3_set_zero(auStack_20);
    iVar1 = *(int *)(a0 + 0x40);
    if ((5 < iVar1) || (iVar1 < 0))
        goto switchD_8c091960_caseD_2;
    switch (iVar1) {
    case 0:
        Vec3_make(a0 + 0x14, uVar2, uVar3, a3, auStack_30);
        Vec3_assign(a0 + 0x14, auStack_30, uVar3, a3);
        Vec3_dtor(auStack_30, 0xffffffff, uVar3, a3);
        copy6_to_fields(a0, 0x8c2846d0, uVar3, a3);
        uVar2 = a1;
        uVar3 = a2;
        CMushroomerBody_sub_031bb4(a0, a1, a2, a3);
        if (cVar10 == '\0') {
            *(u32 *)(a0 + 0x28) = 0x3d4ccccd;
            *(u32 *)(a0 + 0x24) = 0x3d4ccccd;
        } else {
            *(u64 *)(a0 + 0x28) = 0xb03d4ccccd;
            *(u64 *)(a0 + 0x24) = 0xb03d4ccccd;
        }
        iVar1 = get_field_1c_026dd8(a0 + 0xb0, uVar2, uVar3);
        if (iVar1 != 0) {
            ar7_00 = 0;
            uVar3 = 0xffffffff;
            uVar2 = 0;
            CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar3, ar7_00);
        }
        a3 = a0 + 0x14;
        game_sub_092884(a0, a1, a2, a3);
        vec3_copy_8c023d8c(auStack_20, auStack_3c, a2, a3);
        uVar2 = 0xffffffff;
        object_dtor_delete(auStack_3c, 0xffffffff, a2, a3);
        if (cVar10 == '\0') {
            fVar8 = 90.0;
            fVar5 = fStack_1c;
        } else {
            in_xd0 = CONCAT44(uStack_18, fStack_1c);
            fVar5 = 90.0;
            fVar8 = -90.0;
        }
        if (cVar9 != '\0' || fVar8 <= fVar5) {
        LAB_8c091a60:
            if (cVar10 == '\0') {
                fVar5 = 90.0;
            } else {
                in_xd0 = CONCAT44(uStack_18, fStack_1c);
                fStack_1c = 90.0;
                fVar5 = -90.0;
            }
            if (cVar9 == '\0' && fStack_1c < fVar5) {
                *(u32 *)(a0 + 0x22c) = 2;
                a3 = 0;
                a2 = 0xffffffff;
                uVar2 = 9;
                CAnimBody_SetAnimation(a0 + 0xb0, 9, 0xffffffff, 0);
            } else {
                *(u32 *)(a0 + 0x22c) = 1;
                a3 = 0;
                a2 = 0xffffffff;
                uVar2 = 8;
                CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
            }
            CAnimBody_SetFrame(a0 + 0xb0, uVar2, a2, a3);
        } else {
            if (cVar10 == '\0') {
                fVar8 = -90.0;
                fVar5 = fStack_1c;
            } else {
                in_xd0 = CONCAT44(uStack_18, fStack_1c);
                fVar5 = -90.0;
                fVar8 = 7.79122e-43;
            }
            if (cVar9 != '\0' || fVar5 <= fVar8)
                goto LAB_8c091a60;
        }
        *(u32 *)(a0 + 0x40) = 1;
        uVar3 = a2;
    case 1:
        if (*(int *)(a0 + 0x22c) == 0) {
            *(u32 *)(a0 + 0x40) = 3;
        } else {
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x220));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x220);
                dVar6 = 21990236605644.8;
            }
            if (cVar9 == '\0') {
                fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 + dVar6, 0);
            }
            if (cVar10 == '\0') {
                *(float *)(a0 + 0x220) = fVar5;
                uVar7 = CONCAT44(0x42b40000, *(u32 *)(a0 + 0x220));
            } else {
                *(u64 *)(a0 + 0x220) = in_xd0;
                uVar7 = 0x42f0000042b40000;
            }
            if (cVar9 != '\0' || (float)uVar7 <= (float)(uVar7 >> 0x20)) {
                CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, uVar2, uVar3, a3);
                if (*(int *)(a0 + 0x22c) == 1) {
                    Vec3_set_xyz(auStack_48, uVar2, uVar3, a3);
                    Vec3_sub_023484(a0 + 0x14, auStack_48, uVar3, a3, auStack_58);
                    Vec3_assign(a0 + 0x14, auStack_58, uVar3, a3);
                    Vec3_dtor(auStack_58, 0xffffffff, uVar3, a3);
                    object_dtor_delete(auStack_48, 0xffffffff, uVar3, a3);
                } else if (*(int *)(a0 + 0x22c) == 2) {
                    Vec3_set_xyz(auStack_64, uVar2, uVar3, a3);
                    Vec3_sub_023484(a0 + 0x14, auStack_64, uVar3, a3, auStack_74);
                    Vec3_assign(a0 + 0x14, auStack_74, uVar3, a3);
                    Vec3_dtor(auStack_74, 0xffffffff, uVar3, a3);
                    object_dtor_delete(auStack_64, 0xffffffff, uVar3, a3);
                }
            } else {
                iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, uVar3, a3);
                if (iVar1 == 1) {
                    *(u32 *)(a0 + 0x40) = 3;
                    *(u32 *)(a0 + 0x22c) = 0;
                    *(u32 *)(a0 + 0x40) = 3;
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x220) = 0;
                    } else {
                        *(u64 *)(a0 + 0x220) = uVar7 & 0xffffffff;
                    }
                    a3 = 0;
                    uVar3 = 0xffffffff;
                    uVar2 = 0;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar3, a3);
                }
            }
        }
        break;
    case 3:
        CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, uVar2, uVar3, a3);
        uVar4 = CMushroomerBody_sub_031764(a0, a2, a1, a3);
        uVar3 = a1;
    }
switchD_8c091960_caseD_2:
    object_dtor_delete(auStack_20, 0xffffffff, uVar3, a3);
    return uVar4;
}

/*
 * game_sub_091d40  0x8c091d40
 * area name: game code; nothing names its area yet
 * called by: game_sub_08e6e8
 */
u32 game_sub_091d40(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;

    iVar1 = *(int *)(0x12c + a0);
    if (iVar1 == 0) {
        flags6_clear_all(a0 + 0x1fc, a1, a2, a3);
        uVar4 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 5;
        CAnimBody_SetAnimation(a0 + 0xb0, 5, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar3, uVar4);
        *(int *)(0x12c + a0) = *(int *)(0x12c + a0) + 1;
    } else if (iVar1 != 1) {
        uVar2 = a1;
        if (iVar1 != 2) {
            if (iVar1 != 3) {
                return 1;
            }
            return 0;
        }
        goto LAB_8c091dca;
    }
    *(int *)(0x12c + a0) = *(int *)(0x12c + a0) + 1;
    uVar2 = 0x21;
    a3 = a2;
    se_play_at_object(a0, 0x21, a1, a2);
    a2 = a1;
LAB_8c091dca:
    iVar1 = (*(code *)(&CAnimBody_AdvanceFrame_wrapper))(a0 + 0xb0, uVar2, a2, a3);
    if (iVar1 == 1) {
        flags6_set_all(a0 + 0x1fc, uVar2, a2);
        uVar4 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 0;
        CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar3, uVar4);
        *(int *)(0x12c + a0) = *(int *)(0x12c + a0) + 1;
    }
    return (u32)(iVar1 != 1);
}

/*
 * game_sub_091e60  0x8c091e60
 * area name: game code; nothing names its area yet
 */
u32 game_sub_091e60(u64 *a0, u64 *a1, int *a2, u64 *a3) {
    int iVar1;
    int *piVar2;
    u32 uVar3;
    u32 *ar5_00;
    u64 *ar5_01;
    int *ar6_00;
    u64 *ar7_00;
    u32 uVar4;
    float fVar5;
    u64 in_dr0;
    float fVar9;
    u64 uVar6;
    double dVar7;
    u64 uVar8;
    u64 in_xd0;
    char cVar10;
    char cVar11;
    char in_stack_00000000;
    int iStack_11c;
    int iStack_118;
    int iStack_114;
    int iStack_110;
    int iStack_10c;
    u32 uStack_108;
    u32 uStack_104;
    u32 uStack_100;
    u8 auStack_fc[16];
    u8 auStack_ec[16];
    u8 auStack_dc[16];
    u8 auStack_cc[16];
    u8 auStack_bc[16];
    u8 auStack_ac[16];
    u8 auStack_9c[16];
    u8 auStack_8c[12];
    u8 auStack_80[16];
    u8 auStack_70[12];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[4];
    u64 uStack_20;

    cVar11 = '\0';
    cVar10 = '\0';
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_24, a1, a2);
    uVar4 = (u32)in_dr0;
    uStack_100 = 1;
    ar5_01 = a0 + 0xd;
    iVar1 = (int)*ar5_01;
    if ((4 < iVar1) || (iVar1 < 0))
        goto switchD_8c091ea8_default;
    switch (iVar1) {
    case 0:
        while (true) {
            uVar4 = (u32)in_dr0;
            uVar3 = 0x8c2846d0;
            copy6_to_fields(a0, 0x8c2846d0, ar6_00, ar7_00);
            timer_start_94(a0, uVar3, ar6_00);
            ar7_00 = NULL;
            ar6_00 = (int *)0xffffffff;
            uVar3 = 1;
            CAnimBody_SetAnimation(a0 + 0x16, 1, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0x16, uVar3, ar6_00, ar7_00);
            uVar8 = (u64)uVar4;
            if (cVar11 == '\0') {
                *(int *)((int)a0 + 0x224) = 0;
            } else {
                *(u64 *)((int)a0 + 0x224) = uVar8;
            }
            Vec3_assign(a0 + 0x46, (int *)((int)a0 + 0x14), ar6_00, ar7_00);
            uVar8 = uVar8 & 0xffffffff;
            if (cVar11 == '\0') {
                *(int *)(a0 + 0x44) = 0;
            } else {
                a0[0x44] = uVar8;
            }
            Vec3_assign((int *)((int)a0 + 0x54), a1, ar6_00, ar7_00);
            ar5_01 = a1;
            (**(code **)((int)*a3 + 0x128))(a3, a1, ar6_00, ar7_00);
            iVar1 = (int)(uVar8 >> 0x20);
            if (cVar11 == '\0') {
                *(int *)(a0 + 0xb) = iVar1;
                dVar7 = (double)CONCAT44(0x3a83126f, *(int *)((int)a0 + 0x54));
            } else {
                a0[0xb] = uVar8;
                in_xd0 = *(u64 *)((int)a0 + 0x54);
                dVar7 = 6.577018791706446e+182;
                iStack_11c = iVar1;
            }
            if (cVar10 == '\0') {
                fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
            } else {
                fVar5 = SUB84(dVar7 + dVar7, 0);
            }
            if (cVar11 == '\0') {
                *(float *)((int)a0 + 0x54) = fVar5;
            } else {
                *(u64 *)((int)a0 + 0x54) = in_xd0;
            }
            if (a2 != NULL) {
                if (a2 == (int *)0x3) {
                    if (cVar11 == '\0') {
                        uVar8 = CONCAT44(0x3e4ccccd, fVar5);
                        *(int *)(a0 + 0x14) = 0x3e4ccccd;
                    } else {
                        uVar8 = 0xb03e4ccccd;
                        a0[0x14] = 0xb03e4ccccd;
                    }
                    ar5_01 = a0 + 5;
                    if (cVar11 == '\0') {
                        *(int *)ar5_01 = 0;
                    } else {
                        *ar5_01 = uVar8 & 0xffffffff;
                    }
                    *(int *)(a0 + 0xd) = (int)a0[0xd] + 1;
                }
                goto switchD_8c091ea8_caseD_1;
            }
            if (cVar11 == '\0') {
                in_dr0 = CONCAT44(0x3ba3d70a, fVar5);
                *(int *)(a0 + 0x14) = 0x3ba3d70a;
            } else {
                in_dr0 = 0x61e3d41b3ba3d70a;
                a0[0x14] = 0x61e3d41b3ba3d70a;
            }
            in_dr0 = in_dr0 & 0xffffffff;
            if (cVar11 == '\0') {
                *(int *)(a0 + 5) = 0;
            } else {
                a0[5] = in_dr0;
            }
            ar5_01 = (u64 *)0x2;
            *(int *)(a0 + 0xd) = 2;
        switchD_8c091ea8_caseD_2:
            iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0x16, ar5_01, ar6_00, ar7_00);
            if (iVar1 == 1) {
                iVar1 = rand_range(a0, 0, 100);
                if (iVar1 < 0x32) {
                    ar7_00 = NULL;
                    ar6_00 = (int *)0xffffffff;
                    ar5_01 = (u64 *)0x1;
                    CAnimBody_SetAnimation(a0 + 0x16, 1, 0xffffffff, 0);
                } else {
                    ar7_00 = NULL;
                    ar6_00 = (int *)0xffffffff;
                    ar5_01 = (u64 *)0x7;
                    CAnimBody_SetAnimation(a0 + 0x16, 7, 0xffffffff, 0);
                }
                CAnimBody_SetFrame(a0 + 0x16, ar5_01, ar6_00, ar7_00);
            }
            fVar5 = (float)in_dr0;
            if (a2 != (int *)0x3)
                break;
            *(int *)(a0 + 0xd) = 0;
            *(int *)(a0 + 0x45) = 0;
            if (cVar11 == '\0') {
                *(int *)(a0 + 3) = 0;
            } else {
                a0[3] = in_dr0 & 0xffffffff;
            }
            in_dr0 = in_dr0 & 0xffffffff;
            if (cVar11 == '\0') {
                *(int *)(a0 + 0x44) = 0;
            } else {
                a0[0x44] = in_dr0;
            }
        }
        Vec3_set_xyz(auStack_70, ar5_01, ar6_00, ar7_00);
        ar7_00 = (u64 *)((int)a0 + 0x14);
        ar6_00 = (int *)((int)a0 + 0x54);
        game_sub_031eb0(a0, a1, ar6_00, ar7_00, auStack_80);
        Vec3_assign((int *)((int)a0 + 0x14), auStack_80, ar6_00, ar7_00);
        Vec3_dtor(auStack_80, 0xffffffff, ar6_00, ar7_00);
        uVar3 = 0xffffffff;
        object_dtor_delete(auStack_70, 0xffffffff, ar6_00, ar7_00);
        if (cVar11 == '\0') {
            fVar5 = *(float *)((int)a0 + 0x224);
        } else {
            in_xd0 = *(u64 *)((int)a0 + 0x224);
        }
        if (cVar10 != '\0' || fVar5 <= 1.0) {
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44(0x3c23d70a, *(int *)((int)a0 + 0x224));
            } else {
                in_xd0 = *(u64 *)((int)a0 + 0x224);
                dVar7 = 4.1640967825903e-312;
            }
            if (cVar10 == '\0') {
                fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
            } else {
                fVar5 = SUB84(dVar7 + dVar7, 0);
            }
            if (cVar11 == '\0') {
                *(float *)((int)a0 + 0x224) = fVar5;
            } else {
                *(u64 *)((int)a0 + 0x224) = in_xd0;
            }
        }
        Vec3_set_xyz(auStack_8c, uVar3, ar6_00, ar7_00);
        Vec3_sub_023484((int *)((int)a0 + 0x14), auStack_8c, ar6_00, ar7_00, auStack_9c);
        Vec3_assign((int *)((int)a0 + 0x14), auStack_9c, ar6_00, ar7_00);
        Vec3_dtor(auStack_9c, 0xffffffff, ar6_00, ar7_00);
        uVar3 = 0xffffffff;
        object_dtor_delete(auStack_8c, 0xffffffff, ar6_00, ar7_00);
        if ((a2 != (int *)0x1) && (a2 != (int *)0x2)) {
            game_sub_0324ac(a0);
            break;
        }
        *(int *)(a0 + 0xd) = 4;
        *(int *)(a0 + 0x45) = 0;
        uVar8 = (u64)(u32)fVar5;
        if (cVar11 == '\0') {
            *(int *)(a0 + 0x44) = 0;
        } else {
            a0[0x44] = uVar8;
        }
        ar5_01 = (u64 *)((int)a0 + 0x14);
        Vec3_assign(a0 + 0x46, ar5_01, ar6_00, ar7_00);
        uVar4 = (u32)uVar8;
        *(int *)((int)a0 + 0x244) = 0;
    case 4:
        uVar8 = (u64)uVar4;
        if (cVar11 == '\0') {
            *(int *)(a0 + 0x14) = 0;
        } else {
            a0[0x14] = uVar8;
        }
        clear_field_94(a0, ar5_01);
        uVar6 = uVar8 & 0xffffffff;
        if (cVar11 == '\0') {
            *(int *)(a0 + 5) = 0;
        } else {
            a0[5] = uVar6;
        }
        if ((a2 == (int *)0x1) || (a2 == (int *)0x2)) {
            ar6_00 = (int *)0xb0;
            CAnimBody_AdvanceFrame_wrapper(a0 + 0x16, a0 + 0x16, 0xb0, ar7_00);
            fVar5 = (float)uVar6;
            if (cVar11 == '\0') {
                fVar5 = *(float *)(a0 + 3);
            } else {
                in_xd0 = a0[3];
            }
            uVar8 = (u64)(u32)fVar5;
            if (fVar5 != 0.0) {
                piVar2 = (int *)((int)a0 + 0x14);
                Vec3_assign(auStack_24, piVar2, ar6_00, ar7_00);
                uVar8 = uVar8 & 0xffffffff;
                if (cVar11 == '\0') {
                    uStack_20 = uStack_20 & 0xffffffff00000000;
                    uVar8 = uStack_20;
                }
                uStack_20 = uVar8;
                uVar3 = Vec3_length(auStack_24, piVar2, ar6_00, ar7_00);
                Vec3_assign(auStack_24, uVar3, ar6_00, ar7_00);
                if (cVar11 == '\0') {
                    dVar7 = (double)CONCAT44(0x3d4ccccd, (int)a0[0x44]);
                } else {
                    in_xd0 = a0[0x44];
                    dVar7 = 1.18882576146403e-311;
                }
                if (cVar10 == '\0') {
                    fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar5 = SUB84(dVar7 + dVar7, 0);
                }
                if (cVar11 == '\0') {
                    *(float *)(a0 + 0x44) = fVar5;
                    fVar5 = *(float *)(a0 + 0x44);
                } else {
                    a0[0x44] = in_xd0;
                }
                if (cVar10 != '\0' || 1.0 <= fVar5) {
                    if (cVar11 == '\0') {
                        *(int *)(a0 + 0x44) = 0x3f800000;
                    } else {
                        a0[0x44] = CONCAT44(0x3f800000, fVar5);
                    }
                }
                if (cVar11 == '\0') {
                    fVar5 = *(float *)(a0 + 0x44);
                }
                if (cVar10 == '\0') {
                    dVar7 = (double)CONCAT44(1.0 - fVar5, fVar5);
                } else {
                    dVar7 = (double)CONCAT44(0x3f800000, fVar5) - (double)CONCAT44(0x3f800000, fVar5);
                }
                iVar1 = (int)((u64)dVar7 >> 0x20);
                iStack_118 = iVar1;
                if (cVar11 != '\0') {
                    iStack_118 = SUB84(dVar7, 0);
                    iStack_114 = iVar1;
                }
                Vec3_scale(a0 + 0x46, &iStack_118, ar6_00, ar7_00, auStack_dc);
                if (cVar11 == '\0') {
                    iStack_11c = (int)a0[0x44];
                    uVar8 = CONCAT44(iStack_11c, SUB84(dVar7, 0));
                } else {
                    uVar8 = a0[0x44];
                    iStack_11c = (int)uVar8;
                    iStack_118 = (int)(uVar8 >> 0x20);
                }
                fVar5 = (float)uVar8;
                Vec3_scale(auStack_24, &iStack_11c, ar6_00, ar7_00, auStack_ec);
                Vec3_add(auStack_dc, auStack_ec, ar6_00, ar7_00, auStack_fc);
                Vec3_assign((int *)((int)a0 + 0x14), auStack_fc, ar6_00, ar7_00);
                Vec3_dtor(auStack_fc, 0xffffffff, ar6_00, ar7_00);
                Vec3_dtor(auStack_ec, 0xffffffff, ar6_00, ar7_00);
                Vec3_dtor(auStack_dc, 0xffffffff, ar6_00, ar7_00);
                if (cVar11 == '\0') {
                    fVar5 = *(float *)(a0 + 0x44);
                }
                if (fVar5 == 1.0) {
                    if (cVar11 == '\0') {
                        *(int *)(a0 + 0x44) = 0;
                    } else {
                        a0[0x44] = (u64)(u32)fVar5;
                    }
                }
            }
        } else {
            ar6_00 = NULL;
            *(int *)(a0 + 0xd) = 0;
            *(int *)(a0 + 0x45) = 0;
            if (cVar11 == '\0') {
                *(int *)(a0 + 3) = 0;
            } else {
                a0[3] = uVar8 & 0xffffffff;
            }
            ar7_00 = a0 + 0x44;
            if (cVar11 == '\0') {
                *(int *)ar7_00 = 0;
            } else {
                *ar7_00 = uVar8 & 0xffffffff;
            }
        }
        break;
    case 1:
    switchD_8c091ea8_caseD_1:
        iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0x16, ar5_01, ar6_00, ar7_00);
        if (iVar1 == 1) {
            iVar1 = rand_range(a0, 0, 100);
            if (iVar1 < 0x32) {
                ar7_00 = NULL;
                ar6_00 = (int *)0xffffffff;
                ar5_01 = (u64 *)0x1;
                CAnimBody_SetAnimation(a0 + 0x16, 1, 0xffffffff, 0);
            } else {
                ar7_00 = NULL;
                ar6_00 = (int *)0xffffffff;
                ar5_01 = (u64 *)0x7;
                CAnimBody_SetAnimation(a0 + 0x16, 7, 0xffffffff, 0);
            }
            CAnimBody_SetFrame(a0 + 0x16, ar5_01, ar6_00, ar7_00);
        }
        if (a2 == NULL) {
            clear_field_94(a0, ar5_01);
            *(int *)(a0 + 0xd) = 0;
            break;
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x3c4ccccd, (int)a0[0x44]);
        } else {
            in_xd0 = a0[0x44];
            dVar7 = 0.007750001682143193;
        }
        if (cVar10 == '\0') {
            fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
        } else {
            fVar5 = SUB84(dVar7 + dVar7, 0);
        }
        if (cVar11 == '\0') {
            *(float *)(a0 + 0x44) = fVar5;
            fVar5 = *(float *)(a0 + 0x44);
            fVar9 = 0.999;
        } else {
            a0[0x44] = in_xd0;
            in_xd0 = a0[0x44];
            fVar5 = 0.999;
            fVar9 = 3.97969e-43;
        }
        if (cVar10 != '\0' || fVar9 <= fVar5) {
            if (cVar11 == '\0') {
                *(int *)(a0 + 0x44) = 0x3f7fbe77;
            } else {
                a0[0x44] = 0x11c3f7fbe77;
            }
        }
        if (cVar11 == '\0') {
            uVar8 = CONCAT44(0x3f7fbe77, (int)a0[0x44]);
        } else {
            in_xd0 = a0[0x44];
            uVar8 = 0x11c3f7fbe77;
        }
        if ((float)uVar8 != (float)(uVar8 >> 0x20)) {
            if (cVar11 == '\0') {
                uVar8 = (u64)(u32)a0[0x44];
            } else {
                in_xd0 = a0[0x44];
            }
            fVar5 = (float)uVar8;
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(1.0 - fVar5, fVar5);
            } else {
                dVar7 = (double)CONCAT44(0x3f800000, fVar5) - (double)CONCAT44(0x3f800000, fVar5);
            }
            uVar3 = (u32)((u64)dVar7 >> 0x20);
            uStack_108 = uVar3;
            if (cVar11 != '\0') {
                uStack_108 = SUB84(dVar7, 0);
                uStack_104 = uVar3;
            }
            ar5_00 = &uStack_108;
            Vec3_scale(a0 + 0x46, ar5_00, ar6_00, ar7_00, auStack_34);
            uVar3 = SUB84(dVar7, 0);
            Vec3_ctor_xyz(auStack_44, ar5_00, ar6_00, ar7_00);
            if (cVar11 == '\0') {
                iStack_10c = (int)a0[0x44];
                uVar8 = CONCAT44(iStack_10c, uVar3);
            } else {
                uVar8 = a0[0x44];
                iStack_10c = (int)uVar8;
                uStack_108 = (u32)(uVar8 >> 0x20);
            }
            Vec3_scale(auStack_44, &iStack_10c, ar6_00, ar7_00, auStack_54);
            Vec3_add(auStack_34, auStack_54, ar6_00, ar7_00, auStack_64);
            Vec3_assign((int *)((int)a0 + 0x14), auStack_64, ar6_00, ar7_00);
            Vec3_dtor(auStack_64, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_54, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_44, 0xffffffff, ar6_00, ar7_00);
            ar5_01 = (u64 *)0xffffffff;
            Vec3_dtor(auStack_34, 0xffffffff, ar6_00, ar7_00);
        }
        if ((a2 != (int *)0x1) && (a2 != (int *)0x2)) {
            game_sub_0324ac(a0);
            break;
        }
        *(int *)(a0 + 0xd) = 3;
        uVar8 = uVar8 & 0xffffffff;
        if (cVar11 == '\0') {
            *(int *)(a0 + 0x44) = 0;
        } else {
            a0[0x44] = uVar8;
        }
        ar5_01 = (u64 *)((int)a0 + 0x14);
        Vec3_assign(a0 + 0x46, ar5_01, ar6_00, ar7_00);
        uVar4 = (u32)uVar8;
        *(int *)((int)a0 + 0x244) = 0;
        if ((a2 == (int *)0x1) && (in_stack_00000000 == '\x01')) {
            ar7_00 = (u64 *)0xa;
            ar6_00 = (int *)0x1;
            (**(code **)((int)*a3 + 0xd0))(a3, a1, 1, 10);
            ar5_01 = a1;
        }
    case 3:
        uVar8 = (u64)uVar4;
        if (cVar11 == '\0') {
            *(int *)(a0 + 0x14) = 0;
        } else {
            a0[0x14] = uVar8;
        }
        clear_field_94(a0, ar5_01);
        uVar6 = uVar8 & 0xffffffff;
        if (cVar11 == '\0') {
            *(int *)(a0 + 5) = 0;
        } else {
            a0[5] = uVar6;
        }
        if ((a2 == (int *)0x1) || (a2 == (int *)0x2)) {
            CAnimBody_AdvanceFrame_wrapper(a0 + 0x16, ar5_01, ar6_00, ar7_00);
            uVar4 = (u32)uVar6;
            piVar2 = (int *)((int)a0 + 0x14);
            Vec3_assign(auStack_24, piVar2, ar6_00, ar7_00);
            uVar8 = (u64)uVar4;
            if (cVar11 == '\0') {
                uStack_20 = (u64)uStack_20._4_4_ << 0x20;
                uVar8 = uStack_20;
            }
            uStack_20 = uVar8;
            uVar3 = Vec3_length(auStack_24, piVar2, ar6_00, ar7_00);
            Vec3_assign(auStack_24, uVar3, ar6_00, ar7_00);
            ar6_00 = (int *)0x220;
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44(0x3e4ccccd, (int)a0[0x44]);
            } else {
                in_xd0 = a0[0x44];
                dVar7 = 3.48523717287845e-312;
            }
            if (cVar10 == '\0') {
                fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
            } else {
                fVar5 = SUB84(dVar7 + dVar7, 0);
            }
            if (cVar11 == '\0') {
                *(float *)(a0 + 0x44) = fVar5;
                fVar5 = *(float *)(a0 + 0x44);
            } else {
                a0[0x44] = in_xd0;
            }
            if (cVar10 != '\0' || 1.0 <= fVar5) {
                if (cVar11 == '\0') {
                    *(int *)(a0 + 0x44) = 0x3f800000;
                } else {
                    a0[0x44] = CONCAT44(0x3f800000, fVar5);
                }
            }
            if (cVar11 == '\0') {
                fVar5 = *(float *)(a0 + 0x44);
            }
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(1.0 - fVar5, fVar5);
            } else {
                dVar7 = (double)CONCAT44(0x3f800000, fVar5) - (double)CONCAT44(0x3f800000, fVar5);
            }
            iVar1 = (int)((u64)dVar7 >> 0x20);
            iStack_110 = iVar1;
            if (cVar11 != '\0') {
                iStack_110 = SUB84(dVar7, 0);
                iStack_10c = iVar1;
            }
            ar7_00 = a0;
            Vec3_scale(a0 + 0x46, &iStack_110, 0x220, a0, auStack_ac);
            if (cVar11 == '\0') {
                iStack_114 = (int)a0[0x44];
                uVar8 = CONCAT44(iStack_114, SUB84(dVar7, 0));
            } else {
                uVar8 = a0[0x44];
                iStack_114 = (int)uVar8;
                iStack_110 = (int)(uVar8 >> 0x20);
            }
            fVar5 = (float)uVar8;
            Vec3_scale(auStack_24, &iStack_114, ar6_00, ar7_00, auStack_bc);
            Vec3_add(auStack_ac, auStack_bc, ar6_00, ar7_00, auStack_cc);
            Vec3_assign((int *)((int)a0 + 0x14), auStack_cc, ar6_00, ar7_00);
            Vec3_dtor(auStack_cc, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_bc, 0xffffffff, ar6_00, ar7_00);
            Vec3_dtor(auStack_ac, 0xffffffff, ar6_00, ar7_00);
            if (cVar11 == '\0') {
                fVar5 = *(float *)(a0 + 0x44);
            }
            if (fVar5 == 1.0) {
                if (cVar11 == '\0') {
                    *(int *)(a0 + 0x44) = 0;
                } else {
                    a0[0x44] = (u64)(u32)fVar5;
                }
                *(int *)(a0 + 0x45) = 1;
                ar6_00 = (int *)0x40;
                *(int *)(a0 + 8) = 5;
            }
        } else {
            *(int *)(a0 + 0xd) = 0;
            *(int *)(a0 + 0x45) = 0;
            if (cVar11 == '\0') {
                *(int *)(a0 + 3) = 0;
            } else {
                a0[3] = uVar8 & 0xffffffff;
            }
            if (cVar11 == '\0') {
                *(int *)(a0 + 0x44) = 0;
            } else {
                a0[0x44] = uVar8 & 0xffffffff;
            }
        }
        break;
    case 2:
        goto switchD_8c091ea8_caseD_2;
    }
switchD_8c091ea8_default:
    uStack_104 = 0;
    Vec3_dtor(auStack_24, 0xffffffff, ar6_00, ar7_00);
    return uStack_104;
}

/*
 * game_sub_092884  0x8c092884
 * area name: game code; nothing names its area yet
 * called by: game_sub_091924
 */
u32 game_sub_092884(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 *ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    float fVar3;
    double in_dr0;
    double dVar4;
    u64 in_xd0;
    char cVar5;
    char cVar6;
    u32 in_stack_00000000;
    int iStack_70;
    int iStack_6c;
    u64 uStack_68;
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[16];
    float fStack_14;
    u32 uStack_10;
    u32 uStack_c;

    cVar6 = '\0';
    cVar5 = '\0';
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_set_zero(&fStack_14);
    Vec3_sub(a2, a1, ar6_00, ar7_00, auStack_34);
    Vec3_normalize(auStack_34, a1, ar6_00, ar7_00);
    Vec3_ctor_copy(auStack_24, auStack_44, ar6_00, ar7_00);
    Vec3_dtor(auStack_44, 0xffffffff, ar6_00, ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_34, 0xffffffff, ar6_00, ar7_00);
    Vec3_make(a3, uVar2, ar6_00, ar7_00, auStack_54);
    Vec3_make(auStack_24, uVar2, ar6_00, ar7_00, (int)&uStack_68 + 4);
    Vec3_cos_angle(auStack_54, (int)&uStack_68 + 4, ar6_00, ar7_00);
    uStack_10 = SUB84(in_dr0, 0);
    uVar2 = (u32)((u64)in_dr0 >> 0x20);
    dVar4 = in_dr0;
    if (cVar6 == '\0') {
        uStack_68 = (double)CONCAT44(uStack_68._4_4_, uVar2);
        dVar4 = uStack_68;
        uStack_10 = uVar2;
        uVar2 = uStack_c;
    }
    uStack_c = uVar2;
    uStack_68 = dVar4;
    Vec3_dtor((int)&uStack_68 + 4, 0xffffffff, ar6_00, ar7_00);
    Vec3_dtor(auStack_54, 0xffffffff, ar6_00, ar7_00);
    ar5_00 = auStack_24;
    iStack_6c = Vec3_sub_023334(a3, ar5_00, ar6_00, ar7_00);
    if (iStack_6c == 4) {
        if (cVar6 == '\0') {
            in_dr0 = (double)CONCAT44(0xbf800000, uStack_10);
        } else {
            in_xd0 = CONCAT44(uStack_c, uStack_10);
            in_dr0 = -7.941325842067545e-251;
        }
        if (cVar5 == '\0') {
            fVar3 = (float)((u64)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar3, SUB84(in_dr0, 0) * fVar3);
        } else {
            in_dr0 = in_dr0 * in_dr0;
        }
        if (cVar6 == '\0') {
            uStack_10 = SUB84(in_dr0, 0);
        } else {
            uStack_10 = (u32)in_xd0;
            uStack_c = (u32)((u64)in_xd0 >> 0x20);
        }
    }
    Vec3_sub_0231c8(auStack_24, ar5_00, ar6_00, ar7_00);
    iVar1 = (int)((u64)in_dr0 >> 0x20);
    iStack_70 = iVar1;
    if (cVar6 != '\0') {
        iStack_70 = SUB84(in_dr0, 0);
        iStack_6c = iVar1;
    }
    Vec3_sub_0231c8(a3, ar5_00, ar6_00, ar7_00);
    uVar2 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar6 == '\0') {
        in_dr0 = (double)CONCAT44(uVar2, iStack_70);
    } else {
        in_xd0 = CONCAT44(iStack_6c, uVar2);
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(in_dr0, 0) - (float)((u64)in_dr0 >> 0x20);
    } else {
        fVar3 = SUB84(in_dr0 - in_dr0, 0);
    }
    fStack_14 = fVar3;
    if (cVar6 != '\0') {
        fStack_14 = (float)in_xd0;
        uStack_10 = (u32)((u64)in_xd0 >> 0x20);
    }
    if (cVar5 == '\0' && fVar3 < 0.0) {
        if (cVar6 == '\0') {
            dVar4 = (double)CONCAT44(0xbf800000, fStack_14);
        } else {
            in_xd0 = CONCAT44(uStack_10, fStack_14);
            dVar4 = -7.941325842067545e-251;
        }
        if (cVar5 == '\0') {
            fStack_14 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fStack_14 = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar6 != '\0') {
            fStack_14 = (float)in_xd0;
            uStack_10 = (u32)((u64)in_xd0 >> 0x20);
        }
    }
    iVar1 = Vec3_sub_0232e8(a3, auStack_24, ar6_00, ar7_00);
    if (iVar1 == 1) {
        if (cVar6 == '\0') {
            dVar4 = (double)CONCAT44(0xbf800000, fStack_14);
        } else {
            in_xd0 = CONCAT44(uStack_10, fStack_14);
            dVar4 = -7.941325842067545e-251;
        }
        if (cVar5 == '\0') {
            fStack_14 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fStack_14 = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar6 != '\0') {
            fStack_14 = (float)in_xd0;
            uStack_10 = (u32)((u64)in_xd0 >> 0x20);
        }
    }
    vec3_copy_8c02b5fc(in_stack_00000000, &fStack_14, ar6_00);
    Vec3_dtor(auStack_24, 0xffffffff, ar6_00, ar7_00);
    object_dtor_delete(&fStack_14, 0xffffffff, ar6_00, ar7_00);
    return 0;
}

/*
 * game_sub_092a28  0x8c092a28
 * area name: game code; nothing names its area yet
 */
u32 game_sub_092a28(code *a0, u32 a1, code *a2, code *a3) {
    int iVar1;
    u32 uVar2;
    code *pcVar3;
    code *ar6_00;
    code *ar7_00;
    u32 uVar4;
    float fVar5;
    double in_dr0;
    u64 uVar6;
    double dVar7;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    code *in_stack_00000000;
    code *in_stack_fffffedc;
    u8 auStack_88[16];
    u8 auStack_78[16];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u32 uStack_38;
    float fStack_34;
    float fStack_30;
    u32 uStack_2c;
    u8 auStack_28[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar4 = 1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_copy_wrap_03f480(a1, a1, a2, a3, auStack_48);
    Vec3_ctor_copy(auStack_28, auStack_48, ar6_00, ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_48, 0xffffffff, ar6_00, ar7_00);
    Vec3_ctor_zero(&uStack_38, uVar2, ar6_00);
    iVar1 = *(int *)(a0 + 0x124);
    if ((iVar1 < 0xc) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            uVar4 = 0;
            break;
        default:
            goto switchD_8c092a98_caseD_1;
        case 2:
        case 7:
            uVar4 = game_sub_09344c(a0, auStack_28, a2, a3);
            ar6_00 = a2;
            ar7_00 = a3;
            break;
        case 4:
            iVar1 = get_field_24_026024(a3, 0xb, ar6_00, ar7_00);
            if (iVar1 != 0) {
                ar6_00 = (code *)auStack_28;
                uVar4 = game_sub_093e80(a0, in_stack_00000000, ar6_00, a2);
                ar7_00 = a2;
                break;
            }
            iVar1 = *(int *)(a0 + 300);
            if (iVar1 == 0) {
                iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
                if (cVar9 == '\0') {
                    *(int *)(a0 + 0x2e0) = *(int *)(iVar1 + 4);
                } else {
                    *(u64 *)(a0 + 0x2e0) = *(u64 *)(iVar1 + 4);
                }
                iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
                if (cVar9 == '\0') {
                    *(int *)(a0 + 0x2e4) = *(int *)(iVar1 + 8);
                } else {
                    *(u64 *)(a0 + 0x2e4) = *(u64 *)(iVar1 + 8);
                }
                iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
                if (cVar9 == '\0') {
                    *(int *)(a0 + 0x2e8) = *(int *)(iVar1 + 0xc);
                } else {
                    *(u64 *)(a0 + 0x2e8) = *(u64 *)(iVar1 + 0xc);
                }
                ar7_00 = (code *)0x5;
                *(int *)(a0 + 0x40) = 5;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                ar6_00 = a0;
            LAB_8c092c4e:
                iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
                if (cVar9 == '\0') {
                    uStack_38 = *(u32 *)(iVar1 + 4);
                } else {
                    uVar6 = *(u64 *)(iVar1 + 4);
                    uStack_38 = (u32)uVar6;
                    fStack_34 = (float)((u64)uVar6 >> 0x20);
                }
                iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x42a00000, *(u32 *)(iVar1 + 8));
                } else {
                    in_xd0 = *(u64 *)(iVar1 + 8);
                    dVar7 = 5.0983124752531e-312;
                }
                if (cVar8 == '\0') {
                    fStack_34 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                } else {
                    fStack_34 = SUB84(dVar7 + dVar7, 0);
                }
                if (cVar9 != '\0') {
                    fStack_34 = (float)in_xd0;
                    fStack_30 = (float)((u64)in_xd0 >> 0x20);
                }
                iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x41f00000, *(u32 *)(iVar1 + 0xc));
                } else {
                    in_xd0 = *(u64 *)(iVar1 + 0xc);
                    dVar7 = 262144.06439208984;
                }
                if (cVar8 == '\0') {
                    fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar5 = SUB84(dVar7 + dVar7, 0);
                }
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x41100000, fVar5);
                } else {
                    dVar7 = 5.18306279054705e-312;
                }
                if (cVar8 == '\0') {
                    fStack_30 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                } else {
                    fStack_30 = SUB84(dVar7 + dVar7, 0);
                }
                if (cVar9 != '\0') {
                    fStack_30 = (float)in_xd0;
                    uStack_2c = (u32)((u64)in_xd0 >> 0x20);
                }
                if (0 < *(int *)(a0 + 0x260)) {
                    Vec3_assign(a0 + 0x264, &uStack_38, ar6_00, ar7_00);
                }
                pcVar3 = Vec3_ctor_xyz;
                Vec3_ctor_xyz(auStack_68, Vec3_ctor_xyz, ar6_00, ar7_00);
                Vec3_normalize(auStack_68, pcVar3, ar6_00, ar7_00);
                ar7_00 = (code *)auStack_78;
                iVar1 = game_sub_095548(a0, in_stack_00000000, &uStack_38, ar7_00);
                Vec3_dtor(auStack_78, 0xffffffff, Vec3_dtor, ar7_00);
                ar6_00 = Vec3_dtor;
                Vec3_dtor(auStack_68, 0xffffffff, Vec3_dtor, ar7_00);
                if (iVar1 == 0) {
                    *(int *)(a0 + 0x40) = 5;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                }
            } else {
                if (iVar1 == 1)
                    goto LAB_8c092c4e;
                if (iVar1 == 2) {
                    if (cVar9 == '\0') {
                        *(int *)(a0 + 0x28) = 0;
                    } else {
                        *(u64 *)(a0 + 0x28) = (u64)in_dr0 & 0xffffffff;
                    }
                    iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
                    if (cVar9 == '\0') {
                        uStack_38 = *(u32 *)(iVar1 + 4);
                    } else {
                        uVar6 = *(u64 *)(iVar1 + 4);
                        uStack_38 = (u32)uVar6;
                        fStack_34 = (float)((u64)uVar6 >> 0x20);
                    }
                    iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
                    if (cVar9 == '\0') {
                        dVar7 = (double)CONCAT44(0x42a00000, *(u32 *)(iVar1 + 8));
                    } else {
                        in_xd0 = *(u64 *)(iVar1 + 8);
                        dVar7 = 5.0983124752531e-312;
                    }
                    if (cVar8 == '\0') {
                        fStack_34 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                    } else {
                        fStack_34 = SUB84(dVar7 + dVar7, 0);
                    }
                    if (cVar9 != '\0') {
                        fStack_34 = (float)in_xd0;
                        fStack_30 = (float)((u64)in_xd0 >> 0x20);
                    }
                    iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
                    if (cVar9 == '\0') {
                        dVar7 = (double)CONCAT44(0x41f00000, *(u32 *)(iVar1 + 0xc));
                    } else {
                        in_xd0 = *(u64 *)(iVar1 + 0xc);
                        dVar7 = 262144.06439208984;
                    }
                    if (cVar8 == '\0') {
                        fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                    } else {
                        fVar5 = SUB84(dVar7 + dVar7, 0);
                    }
                    if (cVar9 == '\0') {
                        dVar7 = (double)CONCAT44(0x41100000, fVar5);
                    } else {
                        dVar7 = 5.18306279054705e-312;
                    }
                    if (cVar8 == '\0') {
                        fStack_30 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                    } else {
                        fStack_30 = SUB84(dVar7 + dVar7, 0);
                    }
                    if (cVar9 != '\0') {
                        fStack_30 = (float)in_xd0;
                        uStack_2c = (u32)((u64)in_xd0 >> 0x20);
                    }
                    timer_sub_031de8(a0, 1, ar6_00, ar7_00);
                    uVar4 = 0;
                } else {
                    *(int *)(a0 + 300) = 0;
                }
            }
            iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(*(int *)(a0 + 0x2e0), *(u32 *)(iVar1 + 4));
            } else {
                in_xd0 = *(u64 *)(iVar1 + 4);
                dVar7 = *(double *)(a0 + 0x2e0);
            }
            if (cVar8 == '\0') {
                fVar5 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
            } else {
                fVar5 = SUB84(dVar7 - dVar7, 0);
            }
            if (cVar9 == '\0') {
                *(float *)(a0 + 0x2d0) = fVar5;
            } else {
                *(u64 *)(a0 + 0x2d0) = in_xd0;
            }
            iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(*(int *)(a0 + 0x2e4), *(u32 *)(iVar1 + 8));
            } else {
                in_xd0 = *(u64 *)(iVar1 + 8);
                dVar7 = *(double *)(a0 + 0x2e4);
            }
            if (cVar8 == '\0') {
                fVar5 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
            } else {
                fVar5 = SUB84(dVar7 - dVar7, 0);
            }
            if (cVar9 == '\0') {
                *(float *)(a0 + 0x2d4) = fVar5;
            } else {
                *(u64 *)(a0 + 0x2d4) = in_xd0;
            }
            iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(*(int *)(a0 + 0x2e8), *(u32 *)(iVar1 + 0xc));
            } else {
                in_xd0 = *(u64 *)(iVar1 + 0xc);
                dVar7 = *(double *)(a0 + 0x2e8);
            }
            if (cVar8 == '\0') {
                fVar5 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
            } else {
                fVar5 = SUB84(dVar7 - dVar7, 0);
            }
            if (cVar9 == '\0') {
                *(float *)(a0 + 0x2d8) = fVar5;
            } else {
                *(u64 *)(a0 + 0x2d8) = in_xd0;
            }
            iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x2e0) = *(int *)(iVar1 + 4);
            } else {
                *(u64 *)(a0 + 0x2e0) = *(u64 *)(iVar1 + 4);
            }
            iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x2e4) = *(int *)(iVar1 + 8);
            } else {
                *(u64 *)(a0 + 0x2e4) = *(u64 *)(iVar1 + 8);
            }
            iVar1 = (**(code **)(*(int *)a3 + 0x104))(a3, 2, ar6_00, ar7_00);
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x2e8) = *(int *)(iVar1 + 0xc);
            } else {
                *(u64 *)(a0 + 0x2e8) = *(u64 *)(iVar1 + 0xc);
            }
            break;
        case 6:
            ar6_00 = (code *)auStack_28;
            uVar4 = game_sub_093e80(a0, in_stack_00000000, ar6_00, a2);
            ar7_00 = a2;
            break;
        case 8:
            game_sub_0988a4(a0, in_stack_00000000, a3, ar7_00);
            ar6_00 = a3;
            break;
        case 9:
            *(int *)(a0 + 0x214) = 0;
            if (*(int *)(a0 + 300) == 0) {
                ar7_00 = NULL;
                ar6_00 = (code *)0xffffffff;
                CAnimBody_SetAnimation(a0 + 0xb0, 5, 0xffffffff, 0);
                pcVar3 = a0 + 0xb0;
                CAnimBody_SetFrame(pcVar3, pcVar3, ar6_00, ar7_00);
                set_field_68(a0 + 0xb0, pcVar3, ar6_00, ar7_00, in_stack_fffffedc);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                in_stack_fffffedc = a0;
            }
            uVar2 = 5;
            iVar1 = timer_sub_031de8(a0, 5, ar6_00, ar7_00);
            if (iVar1 == 0) {
                *(int *)(a0 + 300) = 0;
                set_field_68(a0 + 0xb0, uVar2, ar6_00, ar7_00, in_stack_fffffedc);
                uVar4 = 0;
                if ((-1 < *(int *)(a0 + 0x2f4)) && (-1 < *(int *)(a0 + 0x2f8))) {
                    game_sub_06b1d8(*(int *)(a0 + 0x2f4), *(int *)(a0 + 0x2f8), ar6_00, ar7_00);
                    ar7_00 = (code *)0x2f4;
                    *(int *)(a0 + 0x2f4) = -1;
                    *(int *)(a0 + 0x2f8) = -1;
                }
            } else {
                CAnimBody_GetCurFrame(a0 + 0xb0, uVar2, ar6_00, ar7_00);
                if (cVar9 == '\0') {
                    *(int *)(a0 + 0x2fc) = (int)((u64)in_dr0 >> 0x20);
                } else {
                    *(double *)(a0 + 0x2fc) = in_dr0;
                }
            }
            timer_sub_031c74(a0, auStack_28, in_stack_00000000, ar7_00);
            ar6_00 = in_stack_00000000;
            break;
        case 10:
            *(int *)(a0 + 0x214) = 0;
            *(int *)(a0 + 0x25c) = -1;
            iVar1 = *(int *)(a0 + 300);
            if (iVar1 == 0) {
                iVar1 = game_sub_093aec(a0, in_stack_00000000, a2, a3);
                ar6_00 = a2;
                ar7_00 = a3;
                if (iVar1 == 0) {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    ar7_00 = a3;
                }
            } else if (iVar1 == 1) {
                ar6_00 = (code *)auStack_28;
                iVar1 = game_sub_0967d8(a0, in_stack_00000000, ar6_00, a2);
                ar7_00 = a2;
                if (iVar1 == 0) {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                }
            } else if (iVar1 == 2) {
                iVar1 = CAnimBody_PlayToEnd(a0 + 0xb0, 6, ar6_00, ar7_00);
                if (0 < iVar1) {
                    uVar2 = 300;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    Vec3_make(a0 + 0x14, 300, ar6_00, ar7_00, auStack_88);
                    uVar2 = Vec3_length(auStack_88, uVar2, ar6_00, ar7_00);
                    Vec3_assign(a0 + 0x14, uVar2, ar6_00, ar7_00);
                    uVar2 = 0xffffffff;
                    Vec3_dtor(auStack_88, 0xffffffff, ar6_00, ar7_00);
                    timer_stop_94(a0, uVar2, ar6_00, ar7_00);
                    *(int *)(a0 + 0x284) = 0;
                    ar6_00 = set_field_68;
                    set_field_68(a0 + 0xb0, 0, set_field_68, ar7_00);
                }
            } else if (iVar1 == 3) {
                iVar1 = timer_sub_031de8(a0, 6, ar6_00, ar7_00);
                if (iVar1 == 0) {
                    iVar1 = *(int *)(a0 + 0x284);
                    *(int *)(a0 + 0x284) = iVar1 + 1;
                    if (1 < iVar1 + 1) {
                        *(int *)(a0 + 0x284) = 0;
                        *(int *)(a0 + 300) = 0;
                        uVar4 = 0;
                        *(int *)(a0 + 0x248) = 0;
                        *(int *)(a0 + 0x40) = 5;
                    }
                } else {
                    CAnimBody_GetCurFrame(a0 + 0xb0, CAnimBody_GetCurFrame, ar6_00, ar7_00);
                    if (cVar8 == '\0') {
                        iVar1 = (int)(float)((u64)in_dr0 >> 0x20);
                    } else {
                        iVar1 = (int)in_dr0;
                    }
                    if (iVar1 == 0x38) {
                        *(int *)(a0 + 0x25c) = *(int *)(a0 + 0x284);
                    }
                }
            }
            break;
        case 0xb:
            Vec3_ctor_xyz(auStack_58, 0xb, ar6_00, ar7_00);
            Vec3_assign(auStack_28, auStack_58, ar6_00, ar7_00);
            Vec3_dtor(auStack_58, 0xffffffff, ar6_00, ar7_00);
            ar6_00 = (code *)auStack_28;
            uVar4 = game_sub_097fcc(a0, in_stack_00000000, ar6_00, a2);
            ar7_00 = a2;
        }
    } else {
    switchD_8c092a98_caseD_1:
        uVar4 = 0;
    }
    Vec3_dtor(&uStack_38, 0xffffffff, ar6_00, ar7_00);
    Vec3_dtor(auStack_28, 0xffffffff, ar6_00, ar7_00);
    return uVar4;
}

/*
 * game_sub_09344c  0x8c09344c
 * area name: game code; nothing names its area yet
 * called by: game_sub_092a28
 */
int game_sub_09344c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *puVar4;
    u8 *puVar5;
    int iVar6;
    u32 in_stack_00000000;
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
    u8 auStack_38[20];

    iVar6 = 1;
    iVar1 = *(int *)(a0 + 0x248);
    if (iVar1 == 0) {
        iVar1 = a0;
        iVar6 = game_sub_093aec(a0, in_stack_00000000, a2, a3);
        if (iVar6 == 0) {
            uVar3 = rand();
            uVar2 = 100;
            iVar1 = libgcc_divide_helper_01031c(uVar3, 100, a2);
            if (iVar1 < 0xf) {
                *(u32 *)(a0 + 0x248) = 2;
                *(u32 *)(a0 + 0x40) = 5;
                uVar3 = rand();
                uVar3 = libgcc_divide_helper_01031c(uVar3, 10, a2);
                *(u32 *)(a0 + 0x2f0) = uVar3;
            }
        }
    } else if (iVar1 == 2) {
        if (*(char *)(a0 + 0x280) == '\x01') {
            *(u32 *)(a0 + 0x288) = 1;
            Vec3_make(a0 + 0x80, a1, a2, a3, auStack_f8);
            Vec3_assign(a0 + 0x14, auStack_f8, a2, a3);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_f8, 0xffffffff, a2, a3);
            *(u32 *)(a0 + 0x248) = 0;
            *(u32 *)(a0 + 0x40) = 5;
            CAnimBody_SetFrame(a0 + 0xb0, uVar3, a2, a3);
        } else {
            uVar3 = a1;
            uVar2 = a2;
            iVar1 = get_field_24_026024(a3, a1, a2, a3);
            if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 == 2)) {
                *(u32 *)(a0 + 0x2f0) = 10;
            }
            iVar1 = *(int *)(a0 + 0x2f0);
            if (iVar1 == 0) {
                rand_float(a0, uVar3, uVar2);
                rand_float(a0, uVar3, uVar2);
                Vec3_ctor_xyz(auStack_38, uVar3, uVar2, a3);
                Vec3_ctor_xyz(auStack_48, uVar3, uVar2, a3);
                Vec3_normalize(auStack_48, uVar3, uVar2, a3);
                puVar5 = auStack_58;
                puVar4 = auStack_38;
                iVar6 = game_sub_095548(a0, in_stack_00000000, puVar4, puVar5);
                Vec3_dtor(auStack_58, 0xffffffff, puVar4, puVar5);
                Vec3_dtor(auStack_48, 0xffffffff, puVar4, puVar5);
                Vec3_dtor(auStack_38, 0xffffffff, puVar4, puVar5);
            } else if (iVar1 == 1) {
                rand_float(a0, uVar3, uVar2);
                rand_float(a0, uVar3, uVar2);
                Vec3_ctor_xyz(auStack_68, uVar3, uVar2, a3);
                Vec3_ctor_xyz(auStack_78, uVar3, uVar2, a3);
                Vec3_normalize(auStack_78, uVar3, uVar2, a3);
                puVar5 = auStack_88;
                puVar4 = auStack_68;
                iVar6 = game_sub_095548(a0, in_stack_00000000, puVar4, puVar5);
                Vec3_dtor(auStack_88, 0xffffffff, puVar4, puVar5);
                Vec3_dtor(auStack_78, 0xffffffff, puVar4, puVar5);
                Vec3_dtor(auStack_68, 0xffffffff, puVar4, puVar5);
            } else if (iVar1 == 2) {
                rand_float(a0, uVar3, uVar2);
                rand_float(a0, uVar3, uVar2);
                Vec3_ctor_xyz(auStack_98, uVar3, uVar2, a3);
                Vec3_ctor_xyz(auStack_a8, uVar3, uVar2, a3);
                Vec3_normalize(auStack_a8, uVar3, uVar2, a3);
                puVar5 = auStack_b8;
                puVar4 = auStack_98;
                iVar6 = game_sub_095548(a0, in_stack_00000000, puVar4, puVar5);
                Vec3_dtor(auStack_b8, 0xffffffff, puVar4, puVar5);
                Vec3_dtor(auStack_a8, 0xffffffff, puVar4, puVar5);
                Vec3_dtor(auStack_98, 0xffffffff, puVar4, puVar5);
            } else if (iVar1 == 3) {
                rand_float(a0, uVar3, uVar2);
                rand_float(a0, uVar3, uVar2);
                Vec3_ctor_xyz(auStack_c8, uVar3, uVar2, a3);
                Vec3_ctor_xyz(auStack_d8, uVar3, uVar2, a3);
                Vec3_normalize(auStack_d8, uVar3, uVar2, a3);
                puVar5 = auStack_e8;
                puVar4 = auStack_c8;
                iVar6 = game_sub_095548(a0, in_stack_00000000, puVar4, puVar5);
                Vec3_dtor(auStack_e8, 0xffffffff, puVar4, puVar5);
                Vec3_dtor(auStack_d8, 0xffffffff, puVar4, puVar5);
                Vec3_dtor(auStack_c8, 0xffffffff, puVar4, puVar5);
            } else {
                iVar6 = game_sub_094514(a0, in_stack_00000000, a1, a2);
            }
        }
    } else if (iVar1 == 3) {
        if (*(char *)(a0 + 0x280) == '\x01') {
            Vec3_make(a0 + 0x80, a1, a2, a3, auStack_108);
            Vec3_assign(a0 + 0x14, auStack_108, a2, a3);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_108, 0xffffffff, a2, a3);
            *(u32 *)(a0 + 0x248) = 0;
            *(u32 *)(a0 + 0x40) = 5;
            CAnimBody_SetFrame(a0 + 0xb0, uVar3, a2, a3);
        } else {
            game_sub_097888(a0, in_stack_00000000, a1, a2);
        }
    }
    return iVar6;
}

/*
 * game_sub_093aec  0x8c093aec
 * area name: game code; nothing names its area yet
 * called by: game_sub_092a28, game_sub_09344c
 */
u32 game_sub_093aec(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int ar5_00;
    u32 uVar3;
    u32 uVar4;
    float fVar5;
    double in_dr0;
    double dVar6;
    float in_fr15;
    u32 in_fr14;
    double in_xd0;
    bool bVar7;
    char cVar8;
    char cVar9;
    u64 uStack_a0;
    u8 auStack_8c[16];
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar2 = a2;
    uVar4 = a3;
    Vec3_ctor_zero(auStack_2c, a1, a2);
    ar5_00 = a0 + 0x24c;
    Vec3_assign(auStack_2c, ar5_00, uVar2, uVar4);
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 0) {
    LAB_8c093b3c:
        if (*(char *)(a0 + 0x280) == '\x01') {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            uVar3 = 0;
            CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar3, uVar2, uVar4);
            *(u8 *)(a0 + 0x280) = 0;
        } else {
            iVar1 = CAnimBody_PlayToEnd(a0 + 0xb0, 0, uVar2, uVar4);
            if ((iVar1 != 1) && (iVar1 != 2)) {
                Vec3_dtor(auStack_2c, 0xffffffff, uVar2, uVar4);
                return 1;
            }
        }
        Vec3_distance_sq(a1, auStack_2c, uVar2, uVar4);
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x24), (int)((u64)in_dr0 >> 0x20));
            in_dr0 = in_xd0;
        } else {
            dVar6 = *(double *)(a0 + 0x24);
        }
        if (cVar8 == '\0') {
            fVar5 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 / dVar6, 0);
        }
        if (cVar9 == '\0') {
            *(float *)(a0 + 0x30) = fVar5;
        } else {
            *(double *)(a0 + 0x30) = in_dr0;
            fVar5 = 2.0;
        }
        uVar2 = a2;
        uVar4 = a3;
        CMushroomerBody_sub_032518(a0, a1, a2, a3);
        Vec3_assign(a0 + 0x24c, auStack_4c, uVar2, uVar4);
        Vec3_dtor(auStack_4c, 0xffffffff, uVar2, uVar4);
        if (cVar9 == '\0') {
            in_dr0 = (double)CONCAT44(0x40a00000, fVar5);
        } else {
            in_dr0 = -8.360315941118363e-251;
        }
        uVar2 = a3;
        uVar4 = game_sub_032788(a0, a0 + 0x24c, a2, a3);
        Vec3_assign(a0 + 0x24c, uVar4, a2, uVar2);
        Vec3_assign(auStack_2c, a0 + 0x24c, a2, uVar2);
        uVar4 = 0x8c2846e8;
        copy6_to_fields(a0, 0x8c2846e8, a2, uVar2);
        timer_start_24(a0);
        *(u32 *)(a0 + 0x40) = 3;
        ar5_00 = 0x24;
        uVar2 = a1;
        se_play_at_object(a0, 0x24, a1, a3);
        uVar4 = a3;
    } else if (iVar1 != 3) {
        if (iVar1 != 5)
            goto LAB_8c093cfc;
        goto LAB_8c093b3c;
    }
    CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, ar5_00, uVar2, uVar4);
    Vec3_sub_0231c8(a0 + 0x14, ar5_00, uVar2, uVar4);
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0xc1700000, SUB84(in_dr0, 0));
        in_fr15 = (float)((u64)in_dr0 >> 0x20);
    } else {
        dVar6 = 16777228.08984375;
    }
    if (cVar8 == '\0') {
        bVar7 = in_fr15 < (float)((u64)dVar6 >> 0x20);
    } else {
        bVar7 = (double)CONCAT44(in_fr14, in_fr15) < dVar6;
    }
    if (bVar7) {
        if (cVar9 == '\0') {
            in_dr0 = (double)CONCAT44(0xc1700000, SUB84(dVar6, 0));
        } else {
            in_dr0 = 16777228.08984375;
        }
        if (cVar8 == '\0') {
            in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) - in_fr15, SUB84(in_dr0, 0));
        } else {
            in_dr0 = in_dr0 - (double)CONCAT44(in_fr14, in_fr15);
        }
    } else {
        if (cVar9 == '\0') {
            in_dr0 = (double)CONCAT44(0x41700000, SUB84(dVar6, 0));
        } else {
            in_dr0 = -7.950726470801028e-251;
        }
        if (cVar8 == '\0') {
            bVar7 = (float)((u64)in_dr0 >> 0x20) < in_fr15;
        } else {
            bVar7 = in_dr0 < (double)CONCAT44(in_fr14, in_fr15);
        }
        if (bVar7) {
            if (cVar9 == '\0') {
                in_dr0 = (double)CONCAT44(0x41700000, SUB84(in_dr0, 0));
            } else {
                in_dr0 = -7.950726470801028e-251;
            }
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) - in_fr15, SUB84(in_dr0, 0));
            } else {
                in_dr0 = in_dr0 - (double)CONCAT44(in_fr14, in_fr15);
            }
        }
    }
    Vec3_sub_02374c(a0 + 0x14, ar5_00, uVar2, uVar4);
    Vec3_assign(a0 + 0x80, auStack_5c, uVar2, uVar4);
    Vec3_dtor(auStack_5c, 0xffffffff, uVar2, uVar4);
LAB_8c093cfc:
    uVar3 = a1;
    Vec3_sub(auStack_2c, a1, uVar2, uVar4, auStack_6c);
    Vec3_normalize(auStack_6c, uVar3, uVar2, uVar4);
    Vec3_ctor_copy(auStack_3c, auStack_7c, uVar2, uVar4);
    Vec3_dtor(auStack_7c, 0xffffffff, uVar2, uVar4);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_6c, 0xffffffff, uVar2, uVar4);
    Vec3_make(a0 + 0x14, uVar3, uVar2, uVar4, auStack_8c);
    Vec3_make(auStack_3c, uVar3, uVar2, uVar4, (int)&uStack_a0 + 4);
    Vec3_cos_angle(auStack_8c, (int)&uStack_a0 + 4, uVar2, uVar4);
    dVar6 = in_dr0;
    if (cVar9 == '\0') {
        uStack_a0 = (double)CONCAT44(uStack_a0._4_4_, (int)((u64)in_dr0 >> 0x20));
        dVar6 = uStack_a0;
    }
    uStack_a0 = dVar6;
    Vec3_dtor((int)&uStack_a0 + 4, 0xffffffff, uVar2, uVar4);
    Vec3_dtor(auStack_8c, 0xffffffff, uVar2, uVar4);
    uVar2 = game_sub_097ba4(a0, auStack_2c, a1, uVar4);
    Vec3_dtor(auStack_3c, 0xffffffff, a1, uVar4);
    Vec3_dtor(auStack_2c, 0xffffffff, a1, uVar4);
    return uVar2;
}

/*
 * game_sub_093e80  0x8c093e80
 * area name: game code; nothing names its area yet
 * called by: game_sub_092a28, game_sub_097fcc
 */
int game_sub_093e80(int a0, u32 a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 ar5_00;
    u8 *ar5_01;
    u32 uVar4;
    int iVar5;
    float fVar6;
    double in_dr0;
    double dVar7;
    float fVar9;
    double dVar8;
    u32 in_fr3;
    float in_fr15;
    u32 in_fr14;
    double in_xd0;
    bool bVar10;
    char cVar11;
    char cVar12;
    int in_stack_00000000;
    float fStack_198;
    float fStack_194;
    u32 uStack_184;
    int iStack_170;
    int iStack_16c;
    int iStack_168;
    int iStack_164;
    u32 uStack_160;
    u32 uStack_15c;
    u32 uStack_158;
    u32 auStack_154[4];
    u8 auStack_144[16];
    u8 auStack_134[16];
    u8 auStack_124[16];
    u8 auStack_114[16];
    u8 auStack_104[16];
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
    u8 auStack_44[16];
    u8 auStack_34[20];

    cVar12 = '\0';
    cVar11 = '\0';
    uVar4 = a1;
    iVar3 = a2;
    iVar5 = a3;
    Vec3_ctor_zero(auStack_34, a1, a2);
    Vec3_ctor_zero(auStack_44, uVar4, iVar3);
    uVar4 = a1;
    Vec3_sub(a2, a1, iVar3, iVar5, auStack_64);
    Vec3_length_sq(auStack_64, uVar4, iVar3, iVar5);
    iVar2 = (int)((u64)in_dr0 >> 0x20);
    if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44(iVar2, in_fr3);
        dVar7 = (double)CONCAT44(0x41200000, *(u32 *)(a0 + 0x48));
    } else {
        in_xd0 = *(double *)(a0 + 0x48);
        dVar7 = -7.932637925129825e-251;
        iStack_170 = iVar2;
    }
    if (cVar11 == '\0') {
        fVar9 = (float)((u64)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7, 0) * fVar9;
        dVar7 = (double)CONCAT44(fVar9, fVar6);
        bVar10 = fVar6 < (float)((u64)in_dr0 >> 0x20);
    } else {
        dVar7 = dVar7 * dVar7;
        bVar10 = dVar7 < in_dr0;
    }
    iStack_168 = 1 - (u32)bVar10;
    Vec3_dtor(auStack_64, 0xffffffff, iVar3, iVar5);
    uVar4 = SUB84(in_dr0, 0);
    if (iStack_168 == 0) {
        iVar2 = a0 + 0x24c;
        Vec3_assign(auStack_34, iVar2, iVar3, iVar5);
    } else {
        iVar2 = a2;
        Vec3_assign(auStack_34, a2, iVar3, iVar5);
    }
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 0) {
    LAB_8c093f74:
        iVar2 = CAnimBody_PlayToEnd(a0 + 0xb0, 0, iVar3, iVar5);
        if ((iVar2 != 1) && (iVar2 != 2)) {
            uStack_160 = 1;
            Vec3_dtor(auStack_44, 0xffffffff, iVar3, iVar5);
            Vec3_dtor(auStack_34, 0xffffffff, iVar3, iVar5);
            return uStack_160;
        }
        ar5_00 = a1;
        Vec3_sub(a2, a1, iVar3, iVar5, auStack_74);
        Vec3_length_sq(auStack_74, ar5_00, iVar3, iVar5);
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), uVar4);
            dVar8 = (double)CONCAT44(0x41200000, *(u32 *)(a0 + 0x48));
        } else {
            in_xd0 = *(double *)(a0 + 0x48);
            dVar8 = -7.932637925129825e-251;
        }
        if (cVar11 == '\0') {
            fVar9 = (float)((u64)dVar8 >> 0x20);
            fVar6 = SUB84(dVar8, 0) * fVar9;
            dVar8 = (double)CONCAT44(fVar9, fVar6);
            bVar10 = fVar6 < (float)((u64)dVar7 >> 0x20);
        } else {
            dVar8 = dVar8 * dVar8;
            bVar10 = dVar8 < dVar7;
        }
        iStack_16c = 1 - (u32)bVar10;
        Vec3_dtor(auStack_74, 0xffffffff, iVar3, iVar5);
        if (iStack_16c == 0) {
            Vec3_sub(a2, a1, iVar3, iVar5, auStack_84);
            Vec3_assign(auStack_44, auStack_84, iVar3, iVar5);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_84, 0xffffffff, iVar3, iVar5);
            Vec3_length_sq(auStack_44, uVar4, iVar3, iVar5);
            uVar4 = (u32)((u64)dVar8 >> 0x20);
            uStack_158 = uVar4;
            if (cVar12 != '\0') {
                uStack_184 = SUB84(dVar8, 0);
                uStack_158 = uStack_184;
                auStack_154[0] = uVar4;
            }
            Vec3_scale(auStack_44, a0 + 0x48, iVar3, iVar5, auStack_94);
            Vec3_scale(auStack_94, &g_8c13a768, iVar3, iVar5, auStack_a4);
            Class_1299f8_sub_023c30(auStack_a4, &uStack_158, iVar3, iVar5, auStack_b4);
            iVar3 = a3;
            iVar5 = in_stack_00000000;
            CMushroomerBody_sub_032518(a0, a1, a3, in_stack_00000000);
            Vec3_sub(auStack_c4, a1, iVar3, iVar5, auStack_d4);
            if (cVar12 == '\0') {
                dVar7 = (double)CONCAT44(uStack_158, 0x43480000);
            } else {
                dVar7 = (double)CONCAT44(auStack_154[0], uStack_158);
                in_xd0 = 1548112654106624.0;
            }
            if (cVar11 == '\0') {
                fVar6 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 / dVar7, 0);
            }
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44(1.0 - fVar6, fVar6);
            } else {
                dVar7 = (double)CONCAT44(0x3f800000, fVar6) - (double)CONCAT44(0x3f800000, fVar6);
            }
            iVar2 = (int)((u64)dVar7 >> 0x20);
            iStack_170 = iVar2;
            if (cVar12 != '\0') {
                iStack_170 = SUB84(dVar7, 0);
                iStack_16c = iVar2;
            }
            Vec3_scale(auStack_d4, &iStack_170, iVar3, iVar5, auStack_e4);
            uVar4 = SUB84(dVar7, 0);
            Vec3_add(auStack_b4, auStack_e4, iVar3, iVar5, auStack_f4);
            Class_1299f8_sub_023c30(auStack_f4, &g_8c13a76c, iVar3, iVar5, auStack_104);
            Vec3_assign(a0 + 0x24c, auStack_104, iVar3, iVar5);
            Vec3_dtor(auStack_104, 0xffffffff, iVar3, iVar5);
            Vec3_dtor(auStack_f4, 0xffffffff, iVar3, iVar5);
            Vec3_dtor(auStack_e4, 0xffffffff, iVar3, iVar5);
            Vec3_dtor(auStack_d4, 0xffffffff, iVar3, iVar5);
            Vec3_dtor(auStack_c4, 0xffffffff, iVar3, iVar5);
            Vec3_dtor(auStack_b4, 0xffffffff, iVar3, iVar5);
            Vec3_dtor(auStack_a4, 0xffffffff, iVar3, iVar5);
            Vec3_dtor(auStack_94, 0xffffffff, iVar3, iVar5);
            Vec3_add_assign(a0 + 0x24c, a1);
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(0x40000000, uVar4);
            } else {
                dVar8 = 13510801029595136.0;
            }
            game_sub_032788(a0, a0 + 0x24c, a3, in_stack_00000000);
            Vec3_assign(auStack_34, a0 + 0x24c, a3, in_stack_00000000);
        } else {
            uVar4 = Vec3_assign(a0 + 0x24c, a2, iVar3, iVar5);
            Vec3_assign(auStack_34, uVar4, iVar3, iVar5);
            a3 = iVar3;
            in_stack_00000000 = iVar5;
        }
        ar5_01 = auStack_34;
        Vec3_distance_sq(a1, ar5_01, a3, in_stack_00000000);
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x24), (int)((u64)dVar8 >> 0x20));
            dVar8 = in_xd0;
        } else {
            dVar7 = *(double *)(a0 + 0x24);
        }
        if (cVar11 == '\0') {
            fVar6 = (float)((u64)dVar7 >> 0x20);
            dVar7 = (double)CONCAT44(fVar6, SUB84(dVar7, 0) / fVar6);
        } else {
            dVar7 = dVar7 / dVar7;
        }
        if (cVar12 == '\0') {
            *(int *)(a0 + 0x30) = SUB84(dVar7, 0);
        } else {
            *(double *)(a0 + 0x30) = dVar8;
        }
        timer_start_24(a0);
        iVar2 = 0x8c2846e8;
        copy6_to_fields(a0, 0x8c2846e8, a3, in_stack_00000000);
        *(u32 *)(a0 + 0x40) = 3;
        iVar3 = a3;
        iVar5 = in_stack_00000000;
    } else if (iVar1 != 3) {
        if (iVar1 != 5)
            goto LAB_8c094390;
        goto LAB_8c093f74;
    }
    CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar2, iVar3, iVar5);
    Vec3_sub_0231c8(a0 + 0x14, iVar2, iVar3, iVar5);
    if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0xc1700000, SUB84(dVar7, 0));
        in_fr15 = (float)((u64)dVar7 >> 0x20);
    } else {
        dVar8 = -4.808686934874603e+231;
    }
    if (cVar11 == '\0') {
        bVar10 = in_fr15 < (float)((u64)dVar8 >> 0x20);
    } else {
        bVar10 = (double)CONCAT44(in_fr14, in_fr15) < dVar8;
    }
    if (bVar10) {
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0xc1700000, SUB84(dVar8, 0));
        } else {
            dVar7 = -4.808686934874603e+231;
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) - in_fr15, SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 - (double)CONCAT44(in_fr14, in_fr15);
        }
    } else {
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0x41700000, SUB84(dVar8, 0));
        } else {
            dVar7 = 2.97621825186588e-312;
        }
        if (cVar11 == '\0') {
            bVar10 = (float)((u64)dVar7 >> 0x20) < in_fr15;
        } else {
            bVar10 = dVar7 < (double)CONCAT44(in_fr14, in_fr15);
        }
        if (bVar10) {
            if (cVar12 == '\0') {
                dVar7 = (double)CONCAT44(0x41700000, SUB84(dVar7, 0));
            } else {
                dVar7 = 2.97621825186588e-312;
            }
            if (cVar11 == '\0') {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) - in_fr15, SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 - (double)CONCAT44(in_fr14, in_fr15);
            }
        }
    }
    Vec3_sub_02374c(a0 + 0x14, iVar2, iVar3, iVar5);
    Vec3_assign(a0 + 0x80, auStack_114, iVar3, iVar5);
    Vec3_dtor(auStack_114, 0xffffffff, iVar3, iVar5);
LAB_8c094390:
    uVar4 = a1;
    Vec3_sub(auStack_34, a1, iVar3, iVar5, auStack_124);
    Vec3_normalize(auStack_124, uVar4, iVar3, iVar5);
    Vec3_ctor_copy(auStack_54, auStack_134, iVar3, iVar5);
    Vec3_dtor(auStack_134, 0xffffffff, iVar3, iVar5);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_124, 0xffffffff, iVar3, iVar5);
    Vec3_make(a0 + 0x14, uVar4, iVar3, iVar5, auStack_144);
    Vec3_make(auStack_54, uVar4, iVar3, iVar5, auStack_154);
    Vec3_cos_angle(auStack_144, auStack_154, iVar3, iVar5);
    uVar4 = (u32)((u64)dVar7 >> 0x20);
    uStack_15c = uVar4;
    if (cVar12 != '\0') {
        uStack_15c = SUB84(dVar7, 0);
        uStack_158 = uVar4;
    }
    Vec3_dtor(auStack_154, 0xffffffff, iVar3, iVar5);
    Vec3_dtor(auStack_144, 0xffffffff, iVar3, iVar5);
    uVar4 = a1;
    iVar3 = game_sub_097ba4(a0, auStack_34, a1, iVar5);
    if (iVar3 == 0) {
        Vec3_distance_sq(a1, a2, uVar4, iVar5);
        fStack_194 = (float)((u64)dVar7 >> 0x20);
        if (cVar12 == '\0') {
            fStack_198 = fStack_194;
            fStack_194 = 0.0;
        } else {
            fStack_198 = SUB84(dVar7, 0);
        }
        Vec3_length_sq(a0 + 4, a2, uVar4, iVar5);
        fVar6 = (float)((u64)dVar7 >> 0x20);
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(fVar6, *(u32 *)(a0 + 0x48));
            fVar6 = fStack_198;
        }
        fStack_198 = fVar6;
        if (cVar11 == '\0') {
            fVar6 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 + dVar7, 0);
        }
        fVar9 = fStack_198;
        if (cVar12 == '\0') {
            fVar9 = fVar6;
            fStack_194 = fStack_198;
        }
        if (cVar11 == '\0' && fVar9 < fStack_194) {
            iVar3 = 1;
            *(u32 *)(a0 + 0x40) = 5;
        }
    }
    iStack_164 = iVar3;
    Vec3_dtor(auStack_54, 0xffffffff, uVar4, iVar5);
    Vec3_dtor(auStack_44, 0xffffffff, uVar4, iVar5);
    Vec3_dtor(auStack_34, 0xffffffff, uVar4, iVar5);
    return iStack_164;
}

/*
 * game_sub_094514  0x8c094514
 * area name: game code; nothing names its area yet
 * called by: game_sub_09344c
 */
int game_sub_094514(int a0, code *a1, code *a2, code *a3) {
    double dVar1;
    int iVar2;
    u32 ar5_00;
    code *pcVar3;
    int *ar5_01;
    u8 *puVar4;
    u32 uVar5;
    code *ar6_00;
    code *pcVar6;
    int ar5_02;
    float fVar7;
    double in_dr0;
    float fVar10;
    double dVar8;
    double dVar9;
    u32 in_fr3;
    double in_xd0;
    bool bVar11;
    char cVar12;
    char cVar13;
    code *in_stack_00000000;
    u64 uStack_2bc;
    u64 uStack_2b4;
    u32 uStack_2ac;
    u64 uStack_2a8;
    u8 auStack_294[16];
    u8 auStack_284[16];
    u8 auStack_274[16];
    u8 auStack_264[16];
    u8 auStack_254[16];
    u8 auStack_244[16];
    u8 auStack_234[16];
    u8 auStack_224[16];
    u8 auStack_214[16];
    u8 auStack_204[16];
    u8 auStack_1f4[16];
    u8 auStack_1e4[16];
    u8 auStack_1d4[16];
    u8 auStack_1c4[16];
    u8 auStack_1b4[16];
    u8 auStack_1a4[16];
    u8 auStack_194[16];
    u8 auStack_184[16];
    u8 auStack_174[16];
    u8 auStack_164[16];
    u8 auStack_154[16];
    u8 auStack_144[16];
    u8 auStack_134[16];
    u8 auStack_124[16];
    u8 auStack_114[16];
    u8 auStack_104[16];
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
    u8 auStack_44[16];
    u8 auStack_34[20];

    cVar13 = '\0';
    cVar12 = '\0';
    pcVar3 = a1;
    pcVar6 = a3;
    Vec3_ctor_zero(auStack_34, a1, a2);
    Vec3_ctor_zero(auStack_44, pcVar3, a2);
    Vec3_ctor_zero(auStack_54, pcVar3, a2);
    ar5_02 = 1;
    ar5_01 = (int *)(a0 + 0x40);
    iVar2 = *ar5_01;
    if (iVar2 == 0) {
    LAB_8c09458c:
        iVar2 = CAnimBody_PlayToEnd(a0 + 0xb0, 0, a2, pcVar6);
        if ((iVar2 != 1) && (iVar2 != 2)) {
            uStack_2ac = 1;
            Vec3_dtor(auStack_54, 0xffffffff, a2, pcVar6);
            Vec3_dtor(auStack_44, 0xffffffff, a2, pcVar6);
            Vec3_dtor(auStack_34, 0xffffffff, Vec3_dtor, pcVar6);
            return uStack_2ac;
        }
        *(u32 *)(a0 + 0x260) = 0;
        if (cVar13 == '\0') {
            uVar5 = SUB84(in_dr0, 0);
            pcVar3 = (code *)0x40000000;
        } else {
            uVar5 = 0x40000000;
            pcVar3 = timer_sub_031ce8;
        }
        ar6_00 = in_stack_00000000;
        timer_sub_031ce8(a0, a3, in_stack_00000000, pcVar6);
        Vec3_assign(a0 + 0x264, auStack_64, ar6_00, pcVar6);
        Vec3_dtor(auStack_64, 0xffffffff, ar6_00, pcVar6);
        a2 = a3;
        pcVar6 = in_stack_00000000;
        ar5_00 = game_sub_032788(a0, a0 + 0x264, a3, in_stack_00000000);
        Vec3_assign(a0 + 0x264, ar5_00, a2, pcVar6);
        (**(code **)(*(int *)in_stack_00000000 + 0x128))(in_stack_00000000, a0 + 0x264, a2, pcVar6);
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(0x41100000, pcVar3);
        } else {
            in_xd0 = (double)CONCAT44(pcVar3, uVar5);
            dVar8 = 1.46047241024329e-311;
        }
        if (cVar12 == '\0') {
            fVar7 = (float)((u64)dVar8 >> 0x20);
            dVar8 = (double)CONCAT44(fVar7, SUB84(dVar8, 0) + fVar7);
        } else {
            dVar8 = dVar8 + dVar8;
        }
        if (cVar13 == '\0') {
            *(int *)(a0 + 0x268) = SUB84(dVar8, 0);
        } else {
            *(double *)(a0 + 0x268) = in_xd0;
        }
        Vec3_sub(a0 + 0x264, a1, a2, pcVar6, auStack_74);
        Vec3_assign(auStack_54, auStack_74, a2, pcVar6);
        uVar5 = 0xffffffff;
        Vec3_dtor(auStack_74, 0xffffffff, a2, pcVar6);
        Vec3_length_sq(auStack_54, uVar5, a2, pcVar6);
        fVar7 = (float)((u64)dVar8 >> 0x20);
        if (cVar13 == '\0') {
            uStack_2a8 = (double)CONCAT44(uStack_2a8._4_4_, fVar7);
            pcVar3 = (code *)0x43960000;
            dVar8 = in_xd0;
        } else {
            fVar7 = 300.0;
            pcVar3 = (code *)0x2a0;
            uStack_2a8 = dVar8;
        }
        if (cVar12 == '\0' && (float)pcVar3 < fVar7) {
            Vec3_scale(auStack_54, a0 + 0x48, a2, pcVar6, auStack_84);
            Vec3_scale(auStack_84, &g_8c13a770, a2, pcVar6, auStack_94);
            Class_1299f8_sub_023c30(auStack_94, &uStack_2a8, a2, pcVar6, auStack_a4);
            pcVar3 = a3;
            pcVar6 = in_stack_00000000;
            CMushroomerBody_sub_032518(a0, a1, a3, in_stack_00000000);
            Vec3_sub(auStack_b4, a1, pcVar3, pcVar6, auStack_c4);
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44((u32)uStack_2a8, 0x43960000);
            } else {
                dVar8 = 1.4265413944775e-311;
                dVar9 = uStack_2a8;
            }
            if (cVar12 == '\0') {
                fVar7 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
            } else {
                fVar7 = SUB84(dVar9 / dVar9, 0);
            }
            if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44(1.0 - fVar7, fVar7);
            } else {
                dVar9 = (double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7);
            }
            dVar1 = dVar9;
            if (cVar13 == '\0') {
                uStack_2b4 = (double)CONCAT44(uStack_2b4._4_4_, (int)((u64)dVar9 >> 0x20));
                dVar1 = uStack_2b4;
            }
            uStack_2b4 = dVar1;
            Vec3_scale(auStack_c4, &uStack_2b4, pcVar3, pcVar6, auStack_d4);
            fVar7 = SUB84(dVar9, 0);
            Vec3_add(auStack_a4, auStack_d4, pcVar3, pcVar6, auStack_e4);
            Class_1299f8_sub_023c30(auStack_e4, &g_8c13a774, pcVar3, pcVar6, auStack_f4);
            Vec3_assign(a0 + 0x24c, auStack_f4, pcVar3, pcVar6);
            Vec3_dtor(auStack_f4, 0xffffffff, pcVar3, pcVar6);
            Vec3_dtor(auStack_e4, 0xffffffff, pcVar3, pcVar6);
            Vec3_dtor(auStack_d4, 0xffffffff, pcVar3, pcVar6);
            Vec3_dtor(auStack_c4, 0xffffffff, pcVar3, pcVar6);
            Vec3_dtor(auStack_b4, 0xffffffff, pcVar3, pcVar6);
            Vec3_dtor(auStack_a4, 0xffffffff, pcVar3, pcVar6);
            Vec3_dtor(auStack_94, 0xffffffff, pcVar3, pcVar6);
            Vec3_dtor(auStack_84, 0xffffffff, pcVar3, pcVar6);
            Vec3_add_assign(a0 + 0x24c, a1);
            if (cVar13 == '\0') {
                pcVar3 = (code *)0x40000000;
            } else {
                fVar7 = 2.0;
                pcVar3 = timer_sub_031ce8;
            }
            a2 = a3;
            pcVar6 = in_stack_00000000;
            game_sub_032788(a0, a0 + 0x24c, a3, in_stack_00000000);
            Vec3_assign(auStack_34, a0 + 0x24c, a2, pcVar6);
        } else {
            Vec3_assign(auStack_34, a0 + 0x264, a2, pcVar6);
        }
        Vec3_distance_sq(a1, auStack_34, a2, pcVar6);
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x24), pcVar3);
            in_xd0 = dVar8;
        } else {
            in_xd0 = (double)CONCAT44(pcVar3, fVar7);
            dVar9 = *(double *)(a0 + 0x24);
        }
        if (cVar12 == '\0') {
            fVar7 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
        } else {
            fVar7 = SUB84(dVar9 / dVar9, 0);
        }
        if (cVar13 == '\0') {
            *(float *)(a0 + 0x30) = fVar7;
            in_dr0 = (double)CONCAT44(0x40a00000, fVar7);
            *(u32 *)(a0 + 0x30) = 0x40a00000;
        } else {
            *(double *)(a0 + 0x30) = in_xd0;
            in_dr0 = -8.34132164470162e-251;
            *(u64 *)(a0 + 0x30) = 0x8c031c6440a00000;
        }
        timer_start_24(a0, a0 + 0x24, a2, pcVar6);
        ar5_01 = (int *)0x8c2846e8;
        copy6_to_fields(a0, 0x8c2846e8, a2, pcVar6);
        *(u32 *)(a0 + 0x40) = 3;
    } else if (iVar2 != 3) {
        if (iVar2 != 5)
            goto LAB_8c0954c6;
        goto LAB_8c09458c;
    }
    iVar2 = *(int *)(a0 + 0x260);
    if (iVar2 == 0) {
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, CAnimBody_AdvanceFrame_033b98, a2, pcVar6);
        Vec3_sub(a0 + 0x264, a1, a2, pcVar6, auStack_104);
        Vec3_assign(auStack_54, auStack_104, a2, pcVar6);
        uVar5 = 0xffffffff;
        Vec3_dtor(auStack_104, 0xffffffff, a2, pcVar6);
        Vec3_length_sq(auStack_54, uVar5, a2, pcVar6);
        fVar7 = (float)((u64)in_dr0 >> 0x20);
        if (cVar13 == '\0') {
            uStack_2a8 = (double)CONCAT44(uStack_2a8._4_4_, fVar7);
            fVar10 = 300.0;
            in_dr0 = in_xd0;
        } else {
            fVar7 = 300.0;
            fVar10 = 8.23963e-43;
            uStack_2a8 = in_dr0;
        }
        if (cVar12 != '\0' || fVar7 <= fVar10) {
            Vec3_assign(auStack_34, a0 + 0x264, a2, pcVar6);
        } else {
            Vec3_assign(auStack_34, a0 + 0x24c, a2, pcVar6);
        }
        Vec3_distance_sq(a0 + 0x264, a1, a2, pcVar6);
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(0x43960000, fVar10);
        } else {
            in_dr0 = (double)CONCAT44(fVar10, fVar7);
            dVar8 = 1.12097400057851e-311;
        }
        if (cVar12 != '\0' || SUB84(dVar8, 0) <= (float)((u64)dVar8 >> 0x20)) {
            Vec3_sub(a0 + 0x264, a1, a2, pcVar6, auStack_114);
            Vec3_cos_angle(a0 + 0x14, auStack_114, a2, pcVar6);
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(0x41200000, (int)((u64)dVar8 >> 0x20));
            } else {
                dVar9 = -7.932637925129825e-251;
                in_dr0 = dVar8;
            }
            dVar8 = dVar9;
            uStack_2bc = (double)(u64)CONCAT14(cVar12 != '\0' || SUB84(dVar8, 0) <= (float)((u64)dVar8 >> 0x20),
                                               (u32)uStack_2bc);
            Vec3_dtor(auStack_114, 0xffffffff, a2, pcVar6);
            if (uStack_2bc._4_4_ != 0) {
                Vec3_distance_sq(auStack_34, a1, a2, pcVar6);
                if (cVar13 == '\0') {
                    *(int *)(a0 + 0x274) = (int)((u64)dVar8 >> 0x20);
                    dVar8 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x274));
                } else {
                    *(double *)(a0 + 0x274) = dVar8;
                    in_dr0 = *(double *)(a0 + 0x274);
                    dVar8 = 1.35011982200165e-311;
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar8 * dVar8, 0);
                }
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x28), fVar7);
                } else {
                    dVar8 = *(double *)(a0 + 0x28);
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar8 / dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)(a0 + 0x278) = fVar7;
                    dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x278), *(u32 *)(a0 + 0x28));
                } else {
                    *(double *)(a0 + 0x278) = in_dr0;
                    in_dr0 = *(double *)(a0 + 0x28);
                    dVar8 = *(double *)(a0 + 0x278);
                }
                if (cVar12 == '\0') {
                    fVar7 = (float)((u64)dVar8 >> 0x20);
                    dVar8 = (double)CONCAT44(fVar7, SUB84(dVar8, 0) / fVar7);
                } else {
                    dVar8 = dVar8 / dVar8;
                }
                if (cVar13 == '\0') {
                    *(int *)(a0 + 0x27c) = SUB84(dVar8, 0);
                } else {
                    *(double *)(a0 + 0x27c) = in_dr0;
                }
                *(int *)(a0 + 0x260) = *(int *)(a0 + 0x260) + 1;
            }
        }
        pcVar3 = a1;
        Vec3_sub(auStack_34, a1, a2, pcVar6, auStack_124);
        Vec3_normalize(auStack_124, pcVar3, a2, pcVar6);
        Vec3_assign(auStack_44, auStack_134, a2, pcVar6);
        Vec3_dtor(auStack_134, 0xffffffff, a2, pcVar6);
        uVar5 = 0xffffffff;
        Vec3_dtor(auStack_124, 0xffffffff, a2, pcVar6);
        pcVar6 = Vec3_make;
        Vec3_make(a0 + 0x14, uVar5, a2, Vec3_make, auStack_144);
        puVar4 = auStack_154;
        Vec3_make(auStack_44, uVar5, puVar4, pcVar6, puVar4);
        Vec3_cos_angle(auStack_144, auStack_154, puVar4, pcVar6);
        Vec3_dtor(auStack_154, 0xffffffff, puVar4, pcVar6);
        Vec3_dtor(auStack_144, 0xffffffff, puVar4, pcVar6);
        puVar4 = auStack_34;
        a2 = a1;
        iVar2 = game_sub_097ba4(a0, puVar4, a1, pcVar6);
        if (iVar2 == 0) {
            *(u32 *)(a0 + 0x40) = 3;
            Vec3_sub(a0 + 0x264, a1, a2, pcVar6, auStack_164);
            Vec3_assign(auStack_54, auStack_164, a2, pcVar6);
            uVar5 = 0xffffffff;
            Vec3_dtor(auStack_164, 0xffffffff, a2, pcVar6);
            Vec3_length_sq(auStack_54, uVar5, a2, pcVar6);
            fVar7 = (float)((u64)dVar8 >> 0x20);
            if (cVar13 == '\0') {
                uStack_2a8 = (double)CONCAT44(uStack_2a8._4_4_, fVar7);
                fVar10 = 300.0;
            } else {
                fVar7 = 300.0;
                fVar10 = 7.39886e-43;
                uStack_2a8 = dVar8;
            }
            if (cVar12 == '\0' && fVar10 < fVar7) {
                Vec3_scale(auStack_54, a0 + 0x48, a2, pcVar6, auStack_174);
                Vec3_scale(auStack_174, &g_8c13a778, a2, pcVar6, auStack_184);
                Class_1299f8_sub_023c30(auStack_184, &uStack_2a8, auStack_194, pcVar6, auStack_194);
                pcVar3 = a3;
                pcVar6 = in_stack_00000000;
                CMushroomerBody_sub_032518(a0, a1, a3, in_stack_00000000);
                Vec3_sub(auStack_1a4, a1, pcVar3, pcVar6, auStack_1b4);
                dVar8 = uStack_2a8;
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44((u32)uStack_2a8, 0x43960000);
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar8 / dVar8, 0);
                }
                if (cVar12 == '\0') {
                    dVar8 = (double)CONCAT44(1.0 - fVar7, fVar7);
                } else {
                    dVar8 = (double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7);
                }
                if (cVar13 == '\0') {
                    uStack_2bc = (double)CONCAT44(uStack_2bc._4_4_, (int)((u64)dVar8 >> 0x20));
                    dVar8 = uStack_2bc;
                }
                uStack_2bc = dVar8;
                Vec3_scale(auStack_1b4, &uStack_2bc, pcVar3, pcVar6, auStack_1c4);
                Vec3_add(auStack_194, auStack_1c4, pcVar3, pcVar6, auStack_1d4);
                Class_1299f8_sub_023c30(auStack_1d4, &g_8c13a77c, pcVar3, pcVar6, auStack_1e4);
                Vec3_assign(a0 + 0x24c, auStack_1e4, pcVar3, pcVar6);
                Vec3_dtor(auStack_1e4, 0xffffffff, pcVar3, pcVar6);
                Vec3_dtor(auStack_1d4, 0xffffffff, pcVar3, pcVar6);
                Vec3_dtor(auStack_1c4, 0xffffffff, pcVar3, pcVar6);
                Vec3_dtor(auStack_1b4, 0xffffffff, pcVar3, pcVar6);
                Vec3_dtor(auStack_1a4, 0xffffffff, pcVar3, pcVar6);
                Vec3_dtor(auStack_194, 0xffffffff, pcVar3, pcVar6);
                Vec3_dtor(auStack_184, 0xffffffff, pcVar3, pcVar6);
                Vec3_dtor(auStack_174, 0xffffffff, pcVar3, pcVar6);
                Vec3_add_assign(a0 + 0x24c, a1);
                game_sub_032788(a0, a0 + 0x24c, a3, in_stack_00000000);
                puVar4 = (u8 *)(a0 + 0x24c);
                Vec3_assign(auStack_34, puVar4, a3, in_stack_00000000);
                a2 = a3;
                pcVar6 = in_stack_00000000;
            } else {
                puVar4 = (u8 *)(a0 + 0x264);
                Vec3_assign(auStack_34, puVar4, a2, pcVar6);
            }
        }
        Vec3_sub_0231c8(a0 + 0x14, puVar4, a2, pcVar6);
        Vec3_sub_02374c(a0 + 0x14, auStack_1f4, a2, pcVar6);
        Vec3_assign(a0 + 0x80, auStack_1f4, a2, pcVar6);
        Vec3_dtor(auStack_1f4, 0xffffffff, a2, pcVar6);
    } else if (iVar2 == 1) {
        Vec3_assign(auStack_34, a0 + 0x264, a2, pcVar6);
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, CAnimBody_AdvanceFrame_033b98, a2, pcVar6);
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x27c), *(u32 *)(a0 + 0x28));
        } else {
            in_xd0 = *(double *)(a0 + 0x28);
            dVar8 = *(double *)(a0 + 0x27c);
        }
        if (cVar12 == '\0') {
            fVar7 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
        } else {
            fVar7 = SUB84(dVar8 - dVar8, 0);
        }
        if (cVar13 == '\0') {
            *(float *)(a0 + 0x28) = fVar7;
            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x28), in_fr3);
            dVar9 = (double)CONCAT44(0x42700000, *(u32 *)(a0 + 0x27c));
        } else {
            *(double *)(a0 + 0x28) = in_xd0;
            dVar8 = *(double *)(a0 + 0x28);
            dVar9 = 1.29072414440439e-311;
        }
        if (cVar12 == '\0') {
            fVar7 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar7 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x40000000, fVar7);
        } else {
            dVar9 = 3.74001758157629e-312;
        }
        if (cVar12 == '\0') {
            bVar11 = (float)((u64)dVar8 >> 0x20) < SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
        } else {
            bVar11 = dVar8 < dVar9 / dVar9;
        }
        if (bVar11) {
            *(int *)(a0 + 0x260) = *(int *)(a0 + 0x260) + 1;
            pcVar6 = NULL;
            a2 = NULL;
            CAnimBody_SetAnimation(a0 + 0xb0, 3, 0, 0);
        }
        pcVar3 = a1;
        Vec3_sub(auStack_34, a1, a2, pcVar6, auStack_204);
        Vec3_normalize(auStack_204, pcVar3, a2, pcVar6);
        Vec3_assign(auStack_44, auStack_214, a2, pcVar6);
        Vec3_dtor(auStack_214, 0xffffffff, a2, pcVar6);
        Vec3_dtor(auStack_204, 0xffffffff, a2, pcVar6);
        iVar2 = a0 + 0x14;
        Vec3_make(iVar2, iVar2, a2, pcVar6, auStack_224);
        Vec3_make(auStack_44, iVar2, a2, pcVar6, auStack_234);
        Vec3_cos_angle(auStack_224, auStack_234, a2, pcVar6);
        Vec3_dtor(auStack_234, 0xffffffff, a2, pcVar6);
        Vec3_dtor(auStack_224, 0xffffffff, a2, pcVar6);
        ar5_02 = game_sub_097ba4(a0, auStack_34, a1, pcVar6);
        Vec3_make(a0 + 0x14, ar5_02, a1, pcVar6, auStack_244);
        Vec3_assign(a0 + 0x80, auStack_244, a1, pcVar6);
        Vec3_dtor(auStack_244, 0xffffffff, a1, pcVar6);
        a2 = a1;
    } else if (iVar2 == 2) {
        iVar2 = a0 + 0x264;
        Vec3_assign(auStack_34, iVar2, a2, pcVar6);
        uVar5 = SUB84(in_dr0, 0);
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar2, a2, pcVar6);
        if (cVar13 == '\0') {
            *(u32 *)(a0 + 0x48) = 0x3f800000;
            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x27c), *(u32 *)(a0 + 0x28));
        } else {
            *(u64 *)(a0 + 0x48) = CONCAT44(0x3f800000, uVar5);
            in_xd0 = *(double *)(a0 + 0x28);
            dVar8 = *(double *)(a0 + 0x27c);
        }
        if (cVar12 == '\0') {
            fVar7 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
        } else {
            fVar7 = SUB84(dVar8 - dVar8, 0);
        }
        if (cVar13 == '\0') {
            *(float *)(a0 + 0x28) = fVar7;
            fVar7 = *(float *)(a0 + 0x28);
            fVar10 = 0.5;
        } else {
            *(double *)(a0 + 0x28) = in_xd0;
            fVar7 = 0.5;
            fVar10 = 2.9147e-43;
        }
        if (cVar12 == '\0' && fVar7 < fVar10) {
            if (cVar13 == '\0') {
                *(u32 *)(a0 + 0x28) = 0x3f000000;
            } else {
                fVar7 = 0.5;
                *(u64 *)(a0 + 0x28) = 0xd03f000000;
            }
        }
        pcVar3 = a1;
        Vec3_sub(auStack_34, a1, a2, pcVar6, auStack_254);
        Vec3_normalize(auStack_254, pcVar3, a2, pcVar6);
        Vec3_assign(auStack_44, auStack_264, a2, pcVar6);
        Vec3_dtor(auStack_264, 0xffffffff, a2, pcVar6);
        uVar5 = 0xffffffff;
        Vec3_dtor(auStack_254, 0xffffffff, a2, pcVar6);
        Vec3_make(a0 + 0x14, uVar5, a2, pcVar6, auStack_274);
        Vec3_make(auStack_44, uVar5, a2, pcVar6, auStack_284);
        Vec3_cos_angle(auStack_274, auStack_284, a2, pcVar6);
        Vec3_dtor(auStack_284, 0xffffffff, a2, pcVar6);
        Vec3_dtor(auStack_274, 0xffffffff, a2, pcVar6);
        ar5_02 = game_sub_097ba4(a0, auStack_34, a1, pcVar6);
        a2 = a1;
        if (ar5_02 == 0) {
            ar5_02 = 1;
            *(u32 *)(a0 + 0x40) = 3;
            pcVar6 = NULL;
            a2 = NULL;
            iVar2 = a0 + 0xb0;
            CAnimBody_SetAnimation(iVar2, 1, 0, 0);
            if (cVar13 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = (u64)(u32)fVar7;
            }
            uVar5 = rand();
            iVar2 = libgcc_divide_helper_01031c(uVar5, 10, a2);
            *(int *)(a0 + 0x284) = iVar2 + 0xf;
            *(int *)(a0 + 0x260) = *(int *)(a0 + 0x260) + 1;
        }
        Vec3_make(a0 + 0x14, a0 + 0x14, a2, pcVar6, auStack_294);
        Vec3_assign(a0 + 0x80, auStack_294, a2, pcVar6);
        Vec3_dtor(auStack_294, 0xffffffff, a2, pcVar6);
    } else if (iVar2 == 3) {
        if (cVar13 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)in_dr0 & 0xffffffff;
        }
        iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_01, a2, pcVar6);
        if (iVar2 == 1) {
            a2 = (code *)0x284;
            *(int *)(a0 + 0x284) = *(int *)(a0 + 0x284) + -1;
            if (*(int *)(a0 + 0x284) < 1) {
                *(u32 *)(a0 + 0x248) = 3;
                *(u32 *)(a0 + 0x40) = 5;
            }
        }
        Vec3_make(a0 + 0x14, (int)&uStack_2a8 + 4, a2, pcVar6, (int)&uStack_2a8 + 4);
        Vec3_assign(a0 + 0x80, (int)&uStack_2a8 + 4, a2, pcVar6);
        Vec3_dtor((int)&uStack_2a8 + 4, 0xffffffff, a2, pcVar6);
    }
LAB_8c0954c6:
    uStack_2b4._4_4_ = ar5_02;
    Vec3_dtor(auStack_54, 0xffffffff, a2, pcVar6);
    Vec3_dtor(auStack_44, 0xffffffff, a2, pcVar6);
    Vec3_dtor(auStack_34, 0xffffffff, a2, pcVar6);
    return uStack_2b4._4_4_;
}

/*
 * game_sub_095548  0x8c095548
 * area name: game code; nothing names its area yet
 * called by: game_sub_092a28, game_sub_09344c
 */
int game_sub_095548(int a0, code *a1, u32 a2, u32 a3) {
    int iVar1;
    code *pcVar2;
    u8 *puVar3;
    u32 uVar4;
    code *pcVar5;
    u32 uVar6;
    int iVar7;
    float fVar8;
    double in_dr0;
    double dVar9;
    double dVar10;
    float fVar11;
    u32 uVar12;
    u32 in_fr3;
    double in_xd0;
    bool bVar13;
    char cVar14;
    char cVar15;
    code *in_stack_00000000;
    u32 in_stack_00000004;
    u32 uStack_32c;
    u32 uStack_328;
    u32 uStack_324;
    u64 uStack_320;
    u64 uStack_318;
    u32 uStack_310;
    u64 uStack_30c;
    u8 auStack_2f8[16];
    u8 auStack_2e8[16];
    u8 auStack_2d8[16];
    u8 auStack_2c8[16];
    u8 auStack_2b8[16];
    u8 auStack_2a8[16];
    u8 auStack_298[16];
    u8 auStack_288[16];
    u8 auStack_278[16];
    u8 auStack_268[16];
    u8 auStack_258[16];
    u8 auStack_248[16];
    u8 auStack_238[16];
    u8 auStack_228[16];
    u8 auStack_218[16];
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
    u8 auStack_38[20];

    cVar15 = '\0';
    cVar14 = '\0';
    pcVar2 = Vec3_ctor_zero;
    uVar6 = a3;
    Vec3_ctor_zero(auStack_38, Vec3_ctor_zero, a2);
    pcVar5 = Vec3_ctor_zero;
    Vec3_ctor_zero(auStack_48, pcVar2, Vec3_ctor_zero);
    Vec3_ctor_zero(auStack_58, pcVar2, pcVar5);
    iVar7 = 1;
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 0) {
    LAB_8c0955d0:
        iVar1 = CAnimBody_PlayToEnd(a0 + 0xb0, 0, pcVar5, uVar6);
        if ((iVar1 != 1) && (iVar1 != 2)) {
            uStack_310 = 1;
            Vec3_dtor(auStack_58, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_48, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_38, 0xffffffff, pcVar5, uVar6);
            return uStack_310;
        }
        *(u32 *)(a0 + 0x260) = 0;
        Vec3_assign(a0 + 0x264, a2, pcVar5, uVar6);
        Vec3_sub(a0 + 0x264, a1, pcVar5, uVar6, auStack_68);
        Vec3_assign(auStack_58, auStack_68, pcVar5, uVar6);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_68, 0xffffffff, pcVar5, uVar6);
        Vec3_length_sq(auStack_58, uVar4, pcVar5, uVar6);
        fVar8 = (float)((u64)in_dr0 >> 0x20);
        if (cVar15 == '\0') {
            uStack_30c = (double)CONCAT44(uStack_30c._4_4_, fVar8);
            fVar11 = 300.0;
            in_dr0 = in_xd0;
        } else {
            fVar8 = 300.0;
            fVar11 = 1.13225e-42;
            uStack_30c = in_dr0;
        }
        if (cVar14 == '\0' && fVar11 < fVar8) {
            Vec3_scale(auStack_58, a0 + 0x48, pcVar5, uVar6, auStack_78);
            Vec3_scale(auStack_78, &g_8c13a780, pcVar5, uVar6, auStack_88);
            Class_1299f8_sub_023c30(auStack_88, &uStack_30c, pcVar5, uVar6, auStack_98);
            pcVar5 = in_stack_00000000;
            uVar6 = in_stack_00000004;
            CMushroomerBody_sub_032518(a0, a1, in_stack_00000000, in_stack_00000004);
            Vec3_sub(auStack_a8, a1, pcVar5, uVar6, auStack_b8);
            if (cVar15 == '\0') {
                dVar9 = (double)CONCAT44((u32)uStack_30c, 0x43960000);
            } else {
                in_dr0 = 1.71513282204878e-311;
                dVar9 = uStack_30c;
            }
            if (cVar14 == '\0') {
                fVar8 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
            } else {
                fVar8 = SUB84(dVar9 / dVar9, 0);
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(1.0 - fVar8, fVar8);
            } else {
                dVar9 = (double)CONCAT44(0x3f800000, fVar8) - (double)CONCAT44(0x3f800000, fVar8);
            }
            dVar10 = dVar9;
            if (cVar15 == '\0') {
                uStack_318 = (double)CONCAT44(uStack_318._4_4_, (int)((u64)dVar9 >> 0x20));
                dVar10 = uStack_318;
            }
            uStack_318 = dVar10;
            Vec3_scale(auStack_b8, &uStack_318, pcVar5, uVar6, auStack_c8);
            fVar8 = SUB84(dVar9, 0);
            Vec3_add(auStack_98, auStack_c8, pcVar5, uVar6, auStack_d8);
            Class_1299f8_sub_023c30(auStack_d8, &g_8c13a784, pcVar5, uVar6, auStack_e8);
            Vec3_assign(a0 + 0x24c, auStack_e8, pcVar5, uVar6);
            Vec3_dtor(auStack_e8, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_d8, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_c8, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_b8, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_a8, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_98, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_88, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_78, 0xffffffff, pcVar5, uVar6);
            Vec3_add_assign(a0 + 0x24c, a1);
            if (cVar15 == '\0') {
                fVar11 = 2.0;
            } else {
                fVar8 = 2.0;
                fVar11 = 200.0;
            }
            pcVar5 = in_stack_00000000;
            uVar6 = in_stack_00000004;
            game_sub_032788(a0, a0 + 0x24c, in_stack_00000000, in_stack_00000004);
            Vec3_assign(auStack_38, a0 + 0x24c, pcVar5, uVar6);
        } else {
            Vec3_assign(auStack_38, a0 + 0x264, pcVar5, uVar6);
        }
        puVar3 = auStack_38;
        Vec3_distance_sq(a1, puVar3, pcVar5, uVar6);
        if (cVar15 == '\0') {
            dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x24), fVar11);
            in_xd0 = in_dr0;
        } else {
            in_xd0 = (double)CONCAT44(fVar11, fVar8);
            dVar9 = *(double *)(a0 + 0x24);
        }
        if (cVar14 == '\0') {
            fVar8 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 / dVar9, 0);
        }
        if (cVar15 == '\0') {
            *(float *)(a0 + 0x30) = fVar8;
            in_dr0 = (double)CONCAT44(0x40a00000, fVar8);
            *(u32 *)(a0 + 0x30) = 0x40a00000;
        } else {
            *(double *)(a0 + 0x30) = in_xd0;
            in_dr0 = -8.34132164470162e-251;
            *(u64 *)(a0 + 0x30) = 0x8c031c6440a00000;
        }
        timer_start_24(a0);
        pcVar2 = (code *)0x8c2846e8;
        copy6_to_fields(a0, 0x8c2846e8, pcVar5, uVar6);
        *(u32 *)(a0 + 0x40) = 3;
    } else if (iVar1 != 3) {
        if (iVar1 != 5)
            goto LAB_8c096760;
        goto LAB_8c0955d0;
    }
    iVar1 = *(int *)(a0 + 0x260);
    if (iVar1 == 0) {
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, pcVar2, pcVar5, uVar6);
        Vec3_sub(a0 + 0x264, a1, pcVar5, uVar6, auStack_f8);
        Vec3_assign(auStack_58, auStack_f8, pcVar5, uVar6);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_f8, 0xffffffff, pcVar5, uVar6);
        Vec3_length_sq(auStack_58, uVar4, pcVar5, uVar6);
        fVar8 = (float)((u64)in_dr0 >> 0x20);
        if (cVar15 == '\0') {
            uStack_30c = (double)CONCAT44(uStack_30c._4_4_, fVar8);
            fVar11 = 300.0;
            in_dr0 = in_xd0;
        } else {
            fVar8 = 300.0;
            fVar11 = 8.23963e-43;
            uStack_30c = in_dr0;
        }
        if (cVar14 != '\0' || fVar8 <= fVar11) {
            Vec3_assign(auStack_38, a0 + 0x264, pcVar5, uVar6);
        } else {
            Vec3_assign(auStack_38, a0 + 0x24c, pcVar5, uVar6);
        }
        Vec3_distance_sq(a0 + 0x264, a1, pcVar5, uVar6);
        if (cVar15 == '\0') {
            dVar9 = (double)CONCAT44(0x43960000, fVar11);
        } else {
            in_dr0 = (double)CONCAT44(fVar11, fVar8);
            dVar9 = 1.40956542814978e-311;
        }
        if (cVar14 != '\0' || SUB84(dVar9, 0) <= (float)((u64)dVar9 >> 0x20)) {
            Vec3_sub(a0 + 0x264, a1, pcVar5, uVar6, auStack_108);
            Vec3_cos_angle(a0 + 0x14, auStack_108, pcVar5, uVar6);
            if (cVar15 == '\0') {
                dVar10 = (double)CONCAT44(0x41200000, (int)((u64)dVar9 >> 0x20));
            } else {
                dVar10 = 2.80643268531973e-312;
                in_dr0 = dVar9;
            }
            dVar9 = dVar10;
            uStack_320 = (double)(u64)CONCAT14(cVar14 != '\0' || SUB84(dVar9, 0) <= (float)((u64)dVar9 >> 0x20),
                                               (u32)uStack_320);
            Vec3_dtor(auStack_108, 0xffffffff, pcVar5, uVar6);
            if (uStack_320._4_4_ != 0) {
                Vec3_distance_sq(auStack_38, a1, pcVar5, uVar6);
                if (cVar15 == '\0') {
                    *(int *)(a0 + 0x274) = (int)((u64)dVar9 >> 0x20);
                    dVar9 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x274));
                } else {
                    *(double *)(a0 + 0x274) = dVar9;
                    in_dr0 = *(double *)(a0 + 0x274);
                    dVar9 = 1.35011982200165e-311;
                }
                if (cVar14 == '\0') {
                    fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar8 = SUB84(dVar9 * dVar9, 0);
                }
                if (cVar15 == '\0') {
                    dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x28), fVar8);
                } else {
                    dVar9 = *(double *)(a0 + 0x28);
                }
                if (cVar14 == '\0') {
                    fVar8 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar8 = SUB84(dVar9 / dVar9, 0);
                }
                if (cVar15 == '\0') {
                    *(float *)(a0 + 0x278) = fVar8;
                    dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x278), *(u32 *)(a0 + 0x28));
                } else {
                    *(double *)(a0 + 0x278) = in_dr0;
                    in_dr0 = *(double *)(a0 + 0x28);
                    dVar9 = *(double *)(a0 + 0x278);
                }
                if (cVar14 == '\0') {
                    fVar8 = (float)((u64)dVar9 >> 0x20);
                    dVar9 = (double)CONCAT44(fVar8, SUB84(dVar9, 0) / fVar8);
                } else {
                    dVar9 = dVar9 / dVar9;
                }
                if (cVar15 == '\0') {
                    *(int *)(a0 + 0x27c) = SUB84(dVar9, 0);
                } else {
                    *(double *)(a0 + 0x27c) = in_dr0;
                }
                *(int *)(a0 + 0x260) = *(int *)(a0 + 0x260) + 1;
            }
        }
        pcVar2 = a1;
        Vec3_sub(auStack_38, a1, pcVar5, uVar6, auStack_118);
        Vec3_normalize(auStack_118, pcVar2, pcVar5, uVar6);
        Vec3_assign(auStack_48, auStack_128, pcVar5, uVar6);
        Vec3_dtor(auStack_128, 0xffffffff, pcVar5, uVar6);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_118, 0xffffffff, pcVar5, uVar6);
        Vec3_make(a0 + 0x14, uVar4, pcVar5, uVar6, auStack_138);
        Vec3_make(auStack_48, uVar4, pcVar5, uVar6, auStack_148);
        Vec3_cos_angle(auStack_138, auStack_148, pcVar5, uVar6);
        Vec3_dtor(auStack_148, 0xffffffff, pcVar5, uVar6);
        Vec3_dtor(auStack_138, 0xffffffff, pcVar5, uVar6);
        pcVar5 = a1;
        iVar1 = game_sub_097ba4(a0, auStack_38, a1, uVar6);
        if (iVar1 == 0) {
            *(u32 *)(a0 + 0x40) = 3;
            Vec3_sub(a0 + 0x264, a1, pcVar5, uVar6, auStack_158);
            Vec3_assign(auStack_58, auStack_158, pcVar5, uVar6);
            Vec3_dtor(auStack_158, 0xffffffff, pcVar5, uVar6);
            Vec3_length_sq(auStack_58, Vec3_length_sq, pcVar5, uVar6);
            fVar8 = (float)((u64)dVar9 >> 0x20);
            if (cVar15 == '\0') {
                uStack_30c = (double)CONCAT44(uStack_30c._4_4_, fVar8);
                fVar11 = 300.0;
            } else {
                fVar8 = 300.0;
                fVar11 = 9.30462e-43;
                uStack_30c = dVar9;
            }
            if (cVar14 == '\0' && fVar11 < fVar8) {
                Vec3_scale(auStack_58, a0 + 0x48, pcVar5, uVar6, auStack_168);
                pcVar5 = Vec3_scale;
                Vec3_scale(auStack_168, &g_8c13a788, Vec3_scale, uVar6, auStack_178);
                Class_1299f8_sub_023c30(auStack_178, &uStack_30c, pcVar5, uVar6, auStack_188);
                pcVar5 = in_stack_00000000;
                uVar6 = in_stack_00000004;
                CMushroomerBody_sub_032518(a0, a1, in_stack_00000000, in_stack_00000004);
                Vec3_sub(auStack_198, a1, pcVar5, uVar6, auStack_1a8);
                dVar9 = uStack_30c;
                if (cVar15 == '\0') {
                    dVar9 = (double)CONCAT44((u32)uStack_30c, 0x43960000);
                }
                if (cVar14 == '\0') {
                    fVar8 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar8 = SUB84(dVar9 / dVar9, 0);
                }
                if (cVar14 == '\0') {
                    dVar9 = (double)CONCAT44(1.0 - fVar8, fVar8);
                } else {
                    dVar9 = (double)CONCAT44(0x3f800000, fVar8) - (double)CONCAT44(0x3f800000, fVar8);
                }
                if (cVar15 == '\0') {
                    uStack_320 = (double)CONCAT44(uStack_320._4_4_, (int)((u64)dVar9 >> 0x20));
                    dVar9 = uStack_320;
                }
                uStack_320 = dVar9;
                Vec3_scale(auStack_1a8, &uStack_320, pcVar5, uVar6, auStack_1b8);
                Vec3_add(auStack_188, auStack_1b8, pcVar5, uVar6, auStack_1c8);
                Class_1299f8_sub_023c30(auStack_1c8, &g_8c13a78c, pcVar5, uVar6, auStack_1d8);
                Vec3_assign(a0 + 0x24c, auStack_1d8, pcVar5, uVar6);
                Vec3_dtor(auStack_1d8, 0xffffffff, pcVar5, uVar6);
                Vec3_dtor(auStack_1c8, 0xffffffff, pcVar5, uVar6);
                Vec3_dtor(auStack_1b8, 0xffffffff, pcVar5, uVar6);
                Vec3_dtor(auStack_1a8, 0xffffffff, pcVar5, uVar6);
                Vec3_dtor(auStack_198, 0xffffffff, pcVar5, uVar6);
                Vec3_dtor(auStack_188, 0xffffffff, pcVar5, uVar6);
                Vec3_dtor(auStack_178, 0xffffffff, pcVar5, uVar6);
                Vec3_dtor(auStack_168, 0xffffffff, pcVar5, uVar6);
                Vec3_add_assign(a0 + 0x24c, a1);
                game_sub_032788(a0, a0 + 0x24c, in_stack_00000000, in_stack_00000004);
                Vec3_assign(auStack_38, a0 + 0x24c, in_stack_00000000, in_stack_00000004);
                pcVar5 = in_stack_00000000;
                uVar6 = in_stack_00000004;
            } else {
                Vec3_assign(auStack_38, a0 + 0x264, pcVar5, uVar6);
            }
        }
        Vec3_sub_0231c8(a0 + 0x14, a0 + 0x14, pcVar5, uVar6);
        Vec3_sub_02374c(a0 + 0x14, a0 + 0x14, pcVar5, uVar6);
        Vec3_assign(a0 + 0x80, auStack_1e8, pcVar5, uVar6);
        Vec3_dtor(auStack_1e8, 0xffffffff, pcVar5, uVar6);
    } else if (iVar1 == 1) {
        Vec3_assign(auStack_38, a0 + 0x264, pcVar5, uVar6);
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, 0xb0, pcVar5, uVar6);
        if (cVar15 == '\0') {
            dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x27c), *(u32 *)(a0 + 0x28));
        } else {
            in_xd0 = *(double *)(a0 + 0x28);
            dVar9 = *(double *)(a0 + 0x27c);
        }
        if (cVar14 == '\0') {
            fVar8 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 - dVar9, 0);
        }
        if (cVar15 == '\0') {
            *(float *)(a0 + 0x28) = fVar8;
            dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x28), in_fr3);
            dVar10 = (double)CONCAT44(0x42700000, *(u32 *)(a0 + 0x27c));
        } else {
            *(double *)(a0 + 0x28) = in_xd0;
            dVar9 = *(double *)(a0 + 0x28);
            dVar10 = 1.29072414440439e-311;
        }
        if (cVar14 == '\0') {
            fVar8 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
        } else {
            fVar8 = SUB84(dVar10 * dVar10, 0);
        }
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44(0x40000000, fVar8);
        } else {
            dVar10 = 3.74001758157629e-312;
        }
        if (cVar14 == '\0') {
            fVar11 = (float)((u64)dVar10 >> 0x20);
            fVar8 = SUB84(dVar10, 0) / fVar11;
            dVar10 = (double)CONCAT44(fVar11, fVar8);
            bVar13 = (float)((u64)dVar9 >> 0x20) < fVar8;
        } else {
            dVar10 = dVar10 / dVar10;
            bVar13 = dVar9 < dVar10;
        }
        fVar8 = (float)((u64)dVar10 >> 0x20);
        if (bVar13) {
            *(int *)(a0 + 0x260) = *(int *)(a0 + 0x260) + 1;
            uVar6 = 0;
            pcVar5 = NULL;
            uVar4 = 3;
            CAnimBody_SetAnimation(a0 + 0xb0, 3, 0, 0);
            *(u32 *)(a0 + 0x288) = 0;
            Vec3_make(a3, uVar4, pcVar5, uVar6, auStack_1f8);
            Vec3_normalize(auStack_1f8, uVar4, pcVar5, uVar6);
            Vec3_make(a0 + 0x80, uVar4, pcVar5, uVar6, auStack_218);
            Vec3_normalize(auStack_218, uVar4, pcVar5, uVar6);
            Vec3_cos_angle(auStack_208, auStack_228, pcVar5, uVar6);
            if (cVar15 == '\0') {
                pcVar2 = (code *)0x42340000;
            } else {
                fVar8 = 45.0;
                pcVar2 = Vec3_dtor;
            }
            uStack_324 = (u32)(cVar14 == '\0' && fVar8 < (float)pcVar2);
            Vec3_dtor(auStack_228, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_218, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_208, 0xffffffff, pcVar5, uVar6);
            Vec3_dtor(auStack_1f8, 0xffffffff, pcVar5, uVar6);
            if (uStack_324 == 0) {
                *(u32 *)(a0 + 0x284) = 0;
            } else {
                *(u32 *)(a0 + 0x284) = 0x1e;
            }
        }
        Vec3_sub(auStack_38, a1, pcVar5, uVar6, auStack_238);
        Vec3_normalize(auStack_238, Vec3_normalize, pcVar5, uVar6);
        Vec3_assign(auStack_48, auStack_248, pcVar5, uVar6);
        Vec3_dtor(auStack_248, 0xffffffff, pcVar5, uVar6);
        Vec3_dtor(auStack_238, 0xffffffff, pcVar5, uVar6);
        Vec3_make(a0 + 0x14, auStack_258, pcVar5, uVar6, auStack_258);
        Vec3_make(auStack_48, auStack_48, pcVar5, uVar6, auStack_268);
        Vec3_cos_angle(auStack_258, auStack_268, pcVar5, uVar6);
        Vec3_dtor(auStack_268, 0xffffffff, pcVar5, uVar6);
        Vec3_dtor(auStack_258, 0xffffffff, pcVar5, uVar6);
        puVar3 = auStack_38;
        iVar7 = game_sub_097ba4(a0, puVar3, a1, uVar6);
        Vec3_make(a0 + 0x14, puVar3, a1, uVar6, auStack_278);
        Vec3_assign(a0 + 0x80, auStack_278, a1, uVar6);
        Vec3_dtor(auStack_278, 0xffffffff, a1, uVar6);
        pcVar5 = a1;
    } else if (iVar1 == 2) {
        Vec3_assign(auStack_38, a0 + 0x264, pcVar5, uVar6);
        uVar4 = SUB84(in_dr0, 0);
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a0 + 0xb0, pcVar5, uVar6);
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x48) = 0x3f800000;
            dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x27c), *(u32 *)(a0 + 0x28));
        } else {
            *(u64 *)(a0 + 0x48) = CONCAT44(0x3f800000, uVar4);
            in_xd0 = *(double *)(a0 + 0x28);
            dVar9 = *(double *)(a0 + 0x27c);
        }
        if (cVar14 == '\0') {
            fVar8 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 - dVar9, 0);
        }
        if (cVar15 == '\0') {
            *(float *)(a0 + 0x28) = fVar8;
            fVar8 = *(float *)(a0 + 0x28);
            fVar11 = 0.5;
        } else {
            *(double *)(a0 + 0x28) = in_xd0;
            fVar8 = 0.5;
            fVar11 = 3.92364e-43;
        }
        if (cVar14 == '\0' && fVar8 < fVar11) {
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x28) = 0x3f000000;
            } else {
                fVar8 = 0.5;
                *(u64 *)(a0 + 0x28) = 0x1183f000000;
            }
        }
        Vec3_sub(auStack_38, a1, pcVar5, uVar6, auStack_288);
        Vec3_normalize(auStack_288, auStack_288, pcVar5, uVar6);
        Vec3_assign(auStack_48, auStack_298, pcVar5, uVar6);
        Vec3_dtor(auStack_298, 0xffffffff, pcVar5, uVar6);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_288, 0xffffffff, pcVar5, uVar6);
        Vec3_make(a0 + 0x14, uVar4, pcVar5, uVar6, auStack_2a8);
        Vec3_make(auStack_48, uVar4, pcVar5, uVar6, auStack_2b8);
        Vec3_cos_angle(auStack_2a8, auStack_2b8, pcVar5, uVar6);
        Vec3_dtor(auStack_2b8, 0xffffffff, pcVar5, uVar6);
        Vec3_dtor(auStack_2a8, 0xffffffff, pcVar5, uVar6);
        iVar7 = game_sub_097ba4(a0, auStack_38, a1, uVar6);
        if (iVar7 == 0) {
            iVar7 = 1;
            *(u32 *)(a0 + 0x40) = 3;
            uVar6 = 0;
            pcVar5 = NULL;
            iVar1 = a0 + 0xb0;
            CAnimBody_SetAnimation(iVar1, 1, 0, 0);
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = (u64)(u32)fVar8;
            }
            uVar4 = rand();
            iVar1 = libgcc_divide_helper_01031c(uVar4, 10, pcVar5);
            *(int *)(a0 + 0x284) = iVar1 + 0xf;
            *(int *)(a0 + 0x260) = *(int *)(a0 + 0x260) + 1;
            Vec3_assign(a0 + 0x80, a3, pcVar5, uVar6);
        } else {
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44((float)*(int *)(a0 + 0x284), fVar8);
            } else {
                dVar9 = (double)*(int *)(a0 + 0x284);
            }
            uVar12 = (u32)((u64)dVar9 >> 0x20);
            uStack_328 = uVar12;
            if (cVar15 != '\0') {
                uStack_328 = SUB84(dVar9, 0);
                uStack_324 = uVar12;
            }
            Vec3_scale(a0 + 0x80, &uStack_328, a1, uVar6, auStack_2c8);
            Class_1299f8_sub_023c30(auStack_2c8, &g_8c13a790, a1, uVar6, auStack_2d8);
            if (cVar15 == '\0') {
                dVar9 = (double)CONCAT44(0x41f00000, (float)*(int *)(a0 + 0x284));
            } else {
                dVar9 = 3.9099378451209e-312;
            }
            if (cVar14 == '\0') {
                fVar8 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
            } else {
                fVar8 = SUB84(dVar9 / dVar9, 0);
            }
            if (cVar14 == '\0') {
                dVar9 = (double)CONCAT44(1.0 - fVar8, fVar8);
            } else {
                dVar9 = (double)CONCAT44(0x3f800000, fVar8) - (double)CONCAT44(0x3f800000, fVar8);
            }
            uVar12 = (u32)((u64)dVar9 >> 0x20);
            uStack_32c = uVar12;
            if (cVar15 != '\0') {
                uStack_32c = SUB84(dVar9, 0);
                uStack_328 = uVar12;
            }
            Vec3_scale(a3, &uStack_32c, a1, uVar6, auStack_2e8);
            puVar3 = auStack_2e8;
            Vec3_add(auStack_2d8, puVar3, a1, uVar6, auStack_2f8);
            Vec3_normalize(auStack_2f8, puVar3, a1, uVar6);
            Vec3_assign(a0 + 0x80, (int)&uStack_30c + 4, a1, uVar6);
            Vec3_dtor((int)&uStack_30c + 4, 0xffffffff, a1, uVar6);
            Vec3_dtor(auStack_2f8, 0xffffffff, a1, uVar6);
            Vec3_dtor(auStack_2e8, 0xffffffff, a1, uVar6);
            Vec3_dtor(auStack_2d8, 0xffffffff, a1, uVar6);
            Vec3_dtor(auStack_2c8, 0xffffffff, a1, uVar6);
            *(int *)(a0 + 0x284) = *(int *)(a0 + 0x284) + -1;
            pcVar5 = a1;
            if (*(int *)(a0 + 0x284) < 0) {
                *(u32 *)(a0 + 0x284) = 0;
            }
        }
    } else if (iVar1 == 3) {
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)in_dr0 & 0xffffffff;
        }
        iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, pcVar2, pcVar5, uVar6);
        if (iVar1 == 1) {
            *(int *)(a0 + 0x284) = *(int *)(a0 + 0x284) + -1;
            if (*(int *)(a0 + 0x284) < 1) {
                iVar7 = 0;
                *(u32 *)(a0 + 0x40) = 5;
                iVar1 = a0 + 0x80;
                Vec3_assign(a0 + 0x14, iVar1, pcVar5, uVar6);
                *(u32 *)(a0 + 0x288) = 1;
                uVar6 = rand();
                pcVar5 = libgcc_divide_helper_01031c;
                uVar4 = libgcc_divide_helper_01031c(uVar6, 10, libgcc_divide_helper_01031c);
                *(u32 *)(a0 + 0x2f0) = uVar4;
            } else {
                Vec3_assign(a0 + 0x80, a3, pcVar5, uVar6);
            }
        }
    }
LAB_8c096760:
    uStack_318._4_4_ = iVar7;
    Vec3_dtor(auStack_58, 0xffffffff, pcVar5, uVar6);
    Vec3_dtor(auStack_48, 0xffffffff, pcVar5, uVar6);
    Vec3_dtor(auStack_38, 0xffffffff, pcVar5, uVar6);
    return uStack_318._4_4_;
}

/*
 * game_sub_0967d8  0x8c0967d8
 * area name: game code; nothing names its area yet
 * called by: game_sub_092a28
 */
int game_sub_0967d8(int a0, int *a1, int *a2, int *a3) {
    int iVar1;
    u64 *ar4_00;
    code *pcVar2;
    int *piVar3;
    u32 uVar4;
    u8 *ar5_00;
    int ar5_01;
    int *piVar5;
    int iVar6;
    float fVar7;
    double in_dr0;
    float fVar10;
    double dVar8;
    double dVar9;
    u32 in_fr3;
    double in_xd0;
    bool bVar11;
    char cVar12;
    char cVar13;
    int *in_stack_00000000;
    u64 uStack_2c8;
    u64 uStack_2c0;
    u32 uStack_2b8;
    u64 uStack_2b4;
    u8 auStack_2a0[16];
    u8 auStack_290[16];
    u8 auStack_280[16];
    u8 auStack_270[16];
    u8 auStack_260[16];
    u8 auStack_250[16];
    u8 auStack_240[16];
    u8 auStack_230[16];
    u8 auStack_220[16];
    u8 auStack_210[16];
    u8 auStack_200[16];
    u8 auStack_1f0[16];
    u8 auStack_1e0[16];
    u8 auStack_1d0[16];
    u8 auStack_1c0[16];
    u8 auStack_1b0[16];
    u8 auStack_1a0[16];
    u8 auStack_190[16];
    u8 auStack_180[16];
    u8 auStack_170[16];
    u8 auStack_160[16];
    int aiStack_150[4];
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
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 auStack_54[4];
    u8 auStack_44[16];
    u8 auStack_34[20];

    cVar13 = '\0';
    cVar12 = '\0';
    piVar5 = a3;
    Vec3_ctor_zero(auStack_34, a1, a2);
    pcVar2 = Vec3_ctor_zero;
    Vec3_ctor_zero(auStack_44, Vec3_ctor_zero, a2);
    Vec3_ctor_zero(auStack_54, pcVar2, a2);
    clear_3_words_102748(&uStack_60);
    iVar6 = 1;
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 0) {
    LAB_8c096864:
        iVar1 = CAnimBody_PlayToEnd(a0 + 0xb0, 0, a2, piVar5);
        if ((iVar1 != 1) && (iVar1 != 2)) {
            uStack_2b8 = 1;
            free_if_nonnull_wrap_102790(&uStack_60, 0xffffffff, a2, piVar5);
            Vec3_dtor(auStack_54, 0xffffffff, a2, piVar5);
            Vec3_dtor(auStack_44, 0xffffffff, a2, piVar5);
            Vec3_dtor(auStack_34, 0xffffffff, a2, piVar5);
            return uStack_2b8;
        }
        *(u32 *)(a0 + 0x260) = 0;
        if (cVar13 != '\0') {
            auStack_54[0] = 0x2dc;
        }
        uStack_58 = 0x43480000;
        uStack_5c = 0x44098000;
        uStack_60 = 0x443b8000;
        piVar3 = in_stack_00000000;
        timer_sub_031ce8(a0, &uStack_60, in_stack_00000000, piVar5);
        Vec3_assign(a0 + 0x264, auStack_70, piVar3, piVar5);
        Vec3_dtor(auStack_70, 0xffffffff, piVar3, piVar5);
        a2 = a3;
        piVar5 = in_stack_00000000;
        uVar4 = game_sub_032788(a0, a0 + 0x264, a3, in_stack_00000000);
        Vec3_assign(a0 + 0x264, uVar4, a2, piVar5);
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(0x442f0000, *(u32 *)(a0 + 0x26c));
        } else {
            in_xd0 = *(double *)(a0 + 0x26c);
            dVar8 = 6.28675931074746e-312;
        }
        if (cVar12 == '\0') {
            fVar7 = (float)((u64)dVar8 >> 0x20);
            dVar8 = (double)CONCAT44(fVar7, SUB84(dVar8, 0) + fVar7);
        } else {
            dVar8 = dVar8 + dVar8;
        }
        if (cVar13 == '\0') {
            *(int *)(a0 + 0x26c) = SUB84(dVar8, 0);
        } else {
            *(double *)(a0 + 0x26c) = in_xd0;
        }
        (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000, a0 + 0x264, a2, piVar5);
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x41100000, (int)((u64)dVar8 >> 0x20));
            dVar8 = in_xd0;
        } else {
            dVar9 = 1.46896039340715e-311;
        }
        if (cVar12 == '\0') {
            fVar7 = (float)((u64)dVar9 >> 0x20);
            in_xd0 = (double)CONCAT44(fVar7, SUB84(dVar9, 0) + fVar7);
        } else {
            in_xd0 = dVar9 + dVar9;
        }
        if (cVar13 == '\0') {
            *(int *)(a0 + 0x268) = SUB84(in_xd0, 0);
        } else {
            *(double *)(a0 + 0x268) = dVar8;
        }
        Vec3_sub(a0 + 0x264, a1, a2, piVar5, auStack_80);
        Vec3_assign(auStack_54, auStack_80, a2, piVar5);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_80, 0xffffffff, a2, piVar5);
        Vec3_length_sq(auStack_54, uVar4, a2, piVar5);
        fVar7 = (float)((u64)in_xd0 >> 0x20);
        if (cVar13 == '\0') {
            uStack_2b4 = (double)CONCAT44(uStack_2b4._4_4_, fVar7);
            pcVar2 = (code *)0x43960000;
            in_xd0 = dVar8;
        } else {
            fVar7 = 300.0;
            pcVar2 = (code *)0x2a4;
            uStack_2b4 = in_xd0;
        }
        if (cVar12 == '\0' && (float)pcVar2 < fVar7) {
            Vec3_scale(auStack_54, a0 + 0x48, a2, piVar5, auStack_90);
            Vec3_scale(auStack_90, &g_8c13a794, a2, piVar5, auStack_a0);
            Class_1299f8_sub_023c30(auStack_a0, &uStack_2b4, a2, piVar5, auStack_b0);
            piVar5 = a3;
            piVar3 = in_stack_00000000;
            CMushroomerBody_sub_032518(a0, a1, a3, in_stack_00000000);
            Vec3_sub(auStack_c0, a1, piVar5, piVar3, auStack_d0);
            if (cVar13 == '\0') {
                dVar8 = (double)CONCAT44((u32)uStack_2b4, 0x43960000);
            } else {
                in_xd0 = 1.43502937764137e-311;
                dVar8 = uStack_2b4;
            }
            if (cVar12 == '\0') {
                fVar7 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
            } else {
                fVar7 = SUB84(dVar8 / dVar8, 0);
            }
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(1.0 - fVar7, fVar7);
            } else {
                dVar8 = (double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7);
            }
            dVar9 = dVar8;
            if (cVar13 == '\0') {
                uStack_2c0 = (double)CONCAT44(uStack_2c0._4_4_, (int)((u64)dVar8 >> 0x20));
                dVar9 = uStack_2c0;
            }
            uStack_2c0 = dVar9;
            Vec3_scale(auStack_d0, &uStack_2c0, piVar5, piVar3, auStack_e0);
            fVar7 = SUB84(dVar8, 0);
            Vec3_add(auStack_b0, auStack_e0, piVar5, piVar3, auStack_f0);
            Class_1299f8_sub_023c30(auStack_f0, &g_8c13a798, piVar5, piVar3, auStack_100);
            Vec3_assign(a0 + 0x24c, auStack_100, piVar5, piVar3);
            Vec3_dtor(auStack_100, 0xffffffff, piVar5, piVar3);
            Vec3_dtor(auStack_f0, 0xffffffff, piVar5, piVar3);
            Vec3_dtor(auStack_e0, 0xffffffff, piVar5, piVar3);
            Vec3_dtor(auStack_d0, 0xffffffff, piVar5, piVar3);
            Vec3_dtor(auStack_c0, 0xffffffff, piVar5, piVar3);
            Vec3_dtor(auStack_b0, 0xffffffff, piVar5, piVar3);
            Vec3_dtor(auStack_a0, 0xffffffff, piVar5, piVar3);
            Vec3_dtor(auStack_90, 0xffffffff, piVar5, piVar3);
            Vec3_add_assign(a0 + 0x24c, a1);
            if (cVar13 == '\0') {
                pcVar2 = (code *)0x40000000;
            } else {
                fVar7 = 2.0;
                pcVar2 = timer_sub_031ce8;
            }
            a2 = a3;
            piVar5 = in_stack_00000000;
            game_sub_032788(a0, a0 + 0x24c, a3, in_stack_00000000);
            Vec3_assign(auStack_34, a0 + 0x24c, a2, piVar5);
        } else {
            Vec3_assign(auStack_34, a0 + 0x264, a2, piVar5);
        }
        Vec3_distance_sq(a1, auStack_34, a2, piVar5);
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x24), pcVar2);
        } else {
            in_xd0 = (double)CONCAT44(pcVar2, fVar7);
            dVar8 = *(double *)(a0 + 0x24);
        }
        if (cVar12 == '\0') {
            fVar7 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
        } else {
            fVar7 = SUB84(dVar8 / dVar8, 0);
        }
        if (cVar13 == '\0') {
            *(float *)(a0 + 0x30) = fVar7;
            in_dr0 = (double)CONCAT44(0x40a00000, fVar7);
            *(u32 *)(a0 + 0x30) = 0x40a00000;
        } else {
            *(double *)(a0 + 0x30) = in_xd0;
            in_dr0 = -8.34132164470162e-251;
            *(u64 *)(a0 + 0x30) = 0x8c031c6440a00000;
        }
        timer_start_24(a0, a0 + 0x24, a2, piVar5);
        copy6_to_fields(a0, 0x8c2846e8, a2, piVar5);
        *(u32 *)(a0 + 0x40) = 3;
    } else if (iVar1 != 3) {
        if (iVar1 != 5)
            goto LAB_8c0977f2;
        goto LAB_8c096864;
    }
    iVar1 = *(int *)(a0 + 0x260);
    if (iVar1 == 0) {
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, CAnimBody_AdvanceFrame_033b98, a2, piVar5);
        Vec3_sub(a0 + 0x264, a1, a2, piVar5, auStack_110);
        Vec3_assign(auStack_54, auStack_110, a2, piVar5);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_110, 0xffffffff, a2, piVar5);
        Vec3_length_sq(auStack_54, uVar4, a2, piVar5);
        fVar7 = (float)((u64)in_dr0 >> 0x20);
        if (cVar13 == '\0') {
            uStack_2b4 = (double)CONCAT44(uStack_2b4._4_4_, fVar7);
            fVar10 = 300.0;
            in_dr0 = in_xd0;
        } else {
            fVar7 = 300.0;
            fVar10 = 8.23963e-43;
            uStack_2b4 = in_dr0;
        }
        if (cVar12 != '\0' || fVar7 <= fVar10) {
            Vec3_assign(auStack_34, a0 + 0x264, a2, piVar5);
        } else {
            Vec3_assign(auStack_34, a0 + 0x24c, a2, piVar5);
        }
        Vec3_distance_sq(a0 + 0x264, a1, a2, piVar5);
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(0x43960000, fVar10);
        } else {
            in_dr0 = (double)CONCAT44(fVar10, fVar7);
            dVar8 = 1.12946198374237e-311;
        }
        if (cVar12 != '\0' || SUB84(dVar8, 0) <= (float)((u64)dVar8 >> 0x20)) {
            Vec3_sub(a0 + 0x264, a1, a2, piVar5, auStack_120);
            Vec3_cos_angle(a0 + 0x14, auStack_120, a2, piVar5);
            if (cVar13 == '\0') {
                dVar9 = (double)CONCAT44(0x41200000, (int)((u64)dVar8 >> 0x20));
            } else {
                dVar9 = -7.932637925129825e-251;
                in_dr0 = dVar8;
            }
            dVar8 = dVar9;
            uStack_2c8 = (double)(u64)CONCAT14(cVar12 != '\0' || SUB84(dVar8, 0) <= (float)((u64)dVar8 >> 0x20),
                                               (u32)uStack_2c8);
            Vec3_dtor(auStack_120, 0xffffffff, a2, piVar5);
            if (uStack_2c8._4_4_ != 0) {
                Vec3_distance_sq(auStack_34, a1, a2, piVar5);
                if (cVar13 == '\0') {
                    *(int *)(a0 + 0x274) = (int)((u64)dVar8 >> 0x20);
                    dVar8 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x274));
                } else {
                    *(double *)(a0 + 0x274) = dVar8;
                    in_dr0 = *(double *)(a0 + 0x274);
                    dVar8 = 1.35011982200165e-311;
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar8 * dVar8, 0);
                }
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x28), fVar7);
                } else {
                    dVar8 = *(double *)(a0 + 0x28);
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar8 / dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)(a0 + 0x278) = fVar7;
                    dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x278), *(u32 *)(a0 + 0x28));
                } else {
                    *(double *)(a0 + 0x278) = in_dr0;
                    in_dr0 = *(double *)(a0 + 0x28);
                    dVar8 = *(double *)(a0 + 0x278);
                }
                if (cVar12 == '\0') {
                    fVar7 = (float)((u64)dVar8 >> 0x20);
                    dVar8 = (double)CONCAT44(fVar7, SUB84(dVar8, 0) / fVar7);
                } else {
                    dVar8 = dVar8 / dVar8;
                }
                if (cVar13 == '\0') {
                    *(int *)(a0 + 0x27c) = SUB84(dVar8, 0);
                } else {
                    *(double *)(a0 + 0x27c) = in_dr0;
                }
                *(int *)(a0 + 0x260) = *(int *)(a0 + 0x260) + 1;
            }
        }
        Vec3_sub(auStack_34, a1, a2, piVar5, auStack_130);
        Vec3_normalize(auStack_130, Vec3_normalize, a2, piVar5);
        Vec3_assign(auStack_44, auStack_140, a2, piVar5);
        Vec3_dtor(auStack_140, 0xffffffff, a2, piVar5);
        Vec3_dtor(auStack_130, 0xffffffff, a2, piVar5);
        piVar5 = aiStack_150;
        pcVar2 = Vec3_make;
        Vec3_make(a0 + 0x14, Vec3_make, a2, piVar5, piVar5);
        Vec3_make(auStack_44, pcVar2, a2, piVar5, auStack_160);
        Vec3_cos_angle(aiStack_150, auStack_160, a2, piVar5);
        Vec3_dtor(auStack_160, 0xffffffff, a2, piVar5);
        Vec3_dtor(aiStack_150, 0xffffffff, a2, piVar5);
        a2 = a1;
        iVar1 = game_sub_097ba4(a0, auStack_34, a1, piVar5);
        if (iVar1 == 0) {
            *(u32 *)(a0 + 0x40) = 3;
            Vec3_sub(a0 + 0x264, a1, a2, piVar5, auStack_170);
            Vec3_assign(auStack_54, auStack_170, a2, piVar5);
            Vec3_dtor(auStack_170, 0xffffffff, a2, piVar5);
            Vec3_length_sq(auStack_54, Vec3_length_sq, a2, piVar5);
            fVar7 = (float)((u64)dVar8 >> 0x20);
            if (cVar13 == '\0') {
                uStack_2b4 = (double)CONCAT44(uStack_2b4._4_4_, fVar7);
                fVar10 = 300.0;
            } else {
                fVar7 = 300.0;
                fVar10 = 7.45491e-43;
                uStack_2b4 = dVar8;
            }
            if (cVar12 == '\0' && fVar10 < fVar7) {
                Vec3_scale(auStack_54, a0 + 0x48, a2, piVar5, auStack_180);
                Vec3_scale(auStack_180, &g_8c13a79c, a2, piVar5, auStack_190);
                Class_1299f8_sub_023c30(auStack_190, &uStack_2b4, a2, piVar5, auStack_1a0);
                piVar5 = a3;
                piVar3 = in_stack_00000000;
                CMushroomerBody_sub_032518(a0, a1, a3, in_stack_00000000);
                Vec3_sub(auStack_1b0, a1, piVar5, piVar3, auStack_1c0);
                dVar8 = uStack_2b4;
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44((u32)uStack_2b4, 0x43960000);
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar8 / dVar8, 0);
                }
                if (cVar12 == '\0') {
                    dVar8 = (double)CONCAT44(1.0 - fVar7, fVar7);
                } else {
                    dVar8 = (double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7);
                }
                if (cVar13 == '\0') {
                    uStack_2c8 = (double)CONCAT44(uStack_2c8._4_4_, (int)((u64)dVar8 >> 0x20));
                    dVar8 = uStack_2c8;
                }
                uStack_2c8 = dVar8;
                Vec3_scale(auStack_1c0, &uStack_2c8, piVar5, piVar3, auStack_1d0);
                Vec3_add(auStack_1a0, auStack_1d0, piVar5, piVar3, auStack_1e0);
                Class_1299f8_sub_023c30(auStack_1e0, &g_8c13a7a0, piVar5, piVar3, auStack_1f0);
                Vec3_assign(a0 + 0x24c, auStack_1f0, piVar5, piVar3);
                Vec3_dtor(auStack_1f0, 0xffffffff, piVar5, piVar3);
                Vec3_dtor(auStack_1e0, 0xffffffff, piVar5, piVar3);
                Vec3_dtor(auStack_1d0, 0xffffffff, piVar5, piVar3);
                Vec3_dtor(auStack_1c0, 0xffffffff, piVar5, piVar3);
                Vec3_dtor(auStack_1b0, 0xffffffff, piVar5, piVar3);
                Vec3_dtor(auStack_1a0, 0xffffffff, piVar5, piVar3);
                Vec3_dtor(auStack_190, 0xffffffff, piVar5, piVar3);
                Vec3_dtor(auStack_180, 0xffffffff, piVar5, piVar3);
                Vec3_add_assign(a0 + 0x24c, a1);
                game_sub_032788(a0, a0 + 0x24c, a3, in_stack_00000000);
                iVar1 = a0 + 0x24c;
                Vec3_assign(auStack_34, iVar1, a3, in_stack_00000000);
                a2 = a3;
                piVar5 = in_stack_00000000;
            } else {
                iVar1 = a0 + 0x264;
                Vec3_assign(auStack_34, iVar1, a2, piVar5);
            }
        }
        Vec3_sub_0231c8(a0 + 0x14, iVar1, a2, piVar5);
        Vec3_sub_02374c(a0 + 0x14, auStack_200, a2, piVar5);
        Vec3_assign(a0 + 0x80, auStack_200, a2, piVar5);
        Vec3_dtor(auStack_200, 0xffffffff, a2, piVar5);
    } else if (iVar1 == 1) {
        Vec3_assign(auStack_34, a0 + 0x264, a2, piVar5);
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, CAnimBody_AdvanceFrame_033b98, a2, piVar5);
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x27c), *(u32 *)(a0 + 0x28));
        } else {
            in_xd0 = *(double *)(a0 + 0x28);
            dVar8 = *(double *)(a0 + 0x27c);
        }
        if (cVar12 == '\0') {
            fVar7 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
        } else {
            fVar7 = SUB84(dVar8 - dVar8, 0);
        }
        if (cVar13 == '\0') {
            *(float *)(a0 + 0x28) = fVar7;
            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x28), in_fr3);
            dVar9 = (double)CONCAT44(0x42700000, *(u32 *)(a0 + 0x27c));
        } else {
            *(double *)(a0 + 0x28) = in_xd0;
            dVar8 = *(double *)(a0 + 0x28);
            dVar9 = 1.29072414440439e-311;
        }
        if (cVar12 == '\0') {
            fVar7 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar7 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x40000000, fVar7);
        } else {
            dVar9 = 3.74001758157629e-312;
        }
        if (cVar12 == '\0') {
            bVar11 = (float)((u64)dVar8 >> 0x20) < SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
        } else {
            bVar11 = dVar8 < dVar9 / dVar9;
        }
        if (bVar11) {
            *(int *)(a0 + 0x260) = *(int *)(a0 + 0x260) + 1;
            piVar5 = NULL;
            a2 = NULL;
            CAnimBody_SetAnimation(a0 + 0xb0, 3, 0, 0);
        }
        piVar3 = a1;
        Vec3_sub(auStack_34, a1, a2, piVar5, auStack_210);
        Vec3_normalize(auStack_210, piVar3, a2, piVar5);
        Vec3_assign(auStack_44, auStack_220, a2, piVar5);
        Vec3_dtor(auStack_220, 0xffffffff, a2, piVar5);
        Vec3_dtor(auStack_210, 0xffffffff, a2, piVar5);
        iVar6 = a0 + 0x14;
        Vec3_make(iVar6, iVar6, a2, piVar5, auStack_230);
        Vec3_make(auStack_44, iVar6, a2, piVar5, auStack_240);
        Vec3_cos_angle(auStack_230, auStack_240, a2, piVar5);
        Vec3_dtor(auStack_240, 0xffffffff, a2, piVar5);
        Vec3_dtor(auStack_230, 0xffffffff, a2, piVar5);
        iVar6 = game_sub_097ba4(a0, auStack_34, a1, piVar5);
        Vec3_make(a0 + 0x14, iVar6, a1, piVar5, auStack_250);
        Vec3_assign(a0 + 0x80, auStack_250, a1, piVar5);
        Vec3_dtor(auStack_250, 0xffffffff, a1, piVar5);
        a2 = a1;
    } else if (iVar1 == 2) {
        iVar6 = a0 + 0x264;
        Vec3_assign(auStack_34, iVar6, a2, piVar5);
        uVar4 = SUB84(in_dr0, 0);
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar6, a2, piVar5);
        if (cVar13 == '\0') {
            *(u32 *)(a0 + 0x48) = 0x3f800000;
            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x27c), *(u32 *)(a0 + 0x28));
        } else {
            *(u64 *)(a0 + 0x48) = CONCAT44(0x3f800000, uVar4);
            in_xd0 = *(double *)(a0 + 0x28);
            dVar8 = *(double *)(a0 + 0x27c);
        }
        if (cVar12 == '\0') {
            fVar7 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
        } else {
            fVar7 = SUB84(dVar8 - dVar8, 0);
        }
        if (cVar13 == '\0') {
            *(float *)(a0 + 0x28) = fVar7;
        } else {
            *(double *)(a0 + 0x28) = in_xd0;
        }
        piVar3 = a1;
        Vec3_sub(auStack_34, a1, a2, piVar5, auStack_260);
        Vec3_normalize(auStack_260, piVar3, a2, piVar5);
        Vec3_assign(auStack_44, auStack_270, a2, piVar5);
        Vec3_dtor(auStack_270, 0xffffffff, a2, piVar5);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_260, 0xffffffff, a2, piVar5);
        Vec3_make(a0 + 0x14, uVar4, a2, piVar5, auStack_280);
        Vec3_make(auStack_44, Vec3_make, a2, piVar5, auStack_290);
        Vec3_cos_angle(auStack_280, auStack_290, a2, piVar5);
        Vec3_dtor(auStack_290, 0xffffffff, a2, piVar5);
        Vec3_dtor(auStack_280, 0xffffffff, a2, piVar5);
        ar5_00 = auStack_34;
        iVar6 = game_sub_097ba4(a0, ar5_00, a1, piVar5);
        a2 = a1;
        if (iVar6 == 0) {
            iVar6 = 1;
            *(u32 *)(a0 + 0x40) = 3;
            piVar5 = NULL;
            a2 = NULL;
            uVar4 = 1;
            CAnimBody_SetAnimation(a0 + 0xb0, 1, 0, 0);
            ar4_00 = (u64 *)(a0 + 0x28);
            if (cVar13 == '\0') {
                *(u32 *)ar4_00 = 0;
            } else {
                *ar4_00 = (u64)(u32)fVar7;
            }
            uVar4 = rand();
            iVar1 = libgcc_divide_helper_01031c(uVar4, 10, a2);
            *(int *)(a0 + 0x284) = iVar1 + 0xf;
            ar5_00 = (u8 *)0x260;
            *(int *)(a0 + 0x260) = *(int *)(a0 + 0x260) + 1;
        }
        Vec3_make(a0 + 0x14, ar5_00, a2, piVar5, auStack_2a0);
        Vec3_assign(a0 + 0x80, auStack_2a0, a2, piVar5);
        Vec3_dtor(auStack_2a0, 0xffffffff, a2, piVar5);
    } else if (iVar1 == 3) {
        ar5_01 = 0xb0;
        iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, 0xb0, a2, piVar5);
        if (iVar1 == 1) {
            ar5_01 = *(int *)(a0 + 0x284) + -1;
            *(int *)(a0 + 0x284) = ar5_01;
            if (*(int *)(a0 + 0x284) < 1) {
                iVar6 = 0;
                ar5_01 = 0x40;
                *(u32 *)(a0 + 0x40) = 0;
            }
        }
        Vec3_make(a0 + 0x14, ar5_01, a2, piVar5, (int)&uStack_2b4 + 4);
        Vec3_assign(a0 + 0x80, (int)&uStack_2b4 + 4, a2, piVar5);
        Vec3_dtor((int)&uStack_2b4 + 4, 0xffffffff, a2, piVar5);
    }
LAB_8c0977f2:
    uStack_2c0._4_4_ = iVar6;
    free_if_nonnull_wrap_102790(&uStack_60, 0xffffffff, a2, piVar5);
    Vec3_dtor(auStack_54, 0xffffffff, a2, piVar5);
    Vec3_dtor(auStack_44, 0xffffffff, a2, piVar5);
    Vec3_dtor(auStack_34, 0xffffffff, a2, piVar5);
    return uStack_2c0._4_4_;
}

/*
 * game_sub_097888  0x8c097888
 * area name: game code; nothing names its area yet
 * called by: game_sub_09344c
 */
u32 game_sub_097888(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u8 *ar5_00;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    float fVar5;
    u64 in_dr0;
    code *pcVar7;
    double dVar6;
    float in_fr15;
    u32 in_fr14;
    u64 in_xd0;
    bool bVar8;
    char cVar9;
    char cVar10;
    u32 in_stack_00000000;
    u32 ain0;
    u64 uStack_98;
    u8 auStack_84[16];
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar10 = '\0';
    cVar9 = '\0';
    uVar2 = a1;
    ain0 = a3;
    Vec3_ctor_zero(auStack_24, a1, a2);
    Vec3_ctor_zero(auStack_34, uVar2, a2);
    uVar3 = 1;
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 0) {
    LAB_8c0978d0:
        iVar1 = CAnimBody_PlayToEnd(a0 + 0xb0, 4, a2, a3);
        uVar4 = (u32)in_dr0;
        if ((iVar1 != 1) && (iVar1 != 2)) {
            Vec3_dtor(auStack_34, 0xffffffff, a2, a3);
            Vec3_dtor(auStack_24, 0xffffffff, a2, a3);
            return 1;
        }
        uVar2 = 0x8c2846e8;
        copy6_to_fields(a0, 0x8c2846e8, a2, a3);
        in_dr0 = CONCAT44(0x3f800000, uVar4);
        if (cVar10 == '\0') {
            *(u32 *)(a0 + 0x48) = 0x3f800000;
        } else {
            *(u64 *)(a0 + 0x48) = in_dr0;
        }
        *(u32 *)(a0 + 0x40) = 1;
    } else if (iVar1 != 1) {
        if (iVar1 == 3) {
            iVar1 = a0 + 0x24c;
            Vec3_assign(auStack_24, iVar1, a2, a3);
            CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, iVar1, a2, a3);
            CAnimBody_GetCurFrame(a0 + 0xb0, iVar1, a2, a3);
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x42920000, (int)in_dr0);
                in_fr15 = (float)((u64)in_dr0 >> 0x20);
            } else {
                dVar6 = 1.23979734631016e-311;
            }
            if (cVar9 == '\0') {
                bVar8 = in_fr15 < (float)((u64)dVar6 >> 0x20);
            } else {
                bVar8 = (double)CONCAT44(in_fr14, in_fr15) < dVar6;
            }
            if (!bVar8) {
                *(u32 *)(a0 + 0x248) = 0;
                *(u32 *)(a0 + 0x40) = 5;
            }
            Vec3_make(a0 + 0x14, iVar1, a2, a3, auStack_54);
            Vec3_assign(a0 + 0x80, auStack_54, a2, a3);
            Vec3_dtor(auStack_54, 0xffffffff, a2, a3);
            uVar2 = a1;
            Vec3_sub(auStack_24, a1, a2, a3, auStack_64);
            Vec3_normalize(auStack_64, uVar2, a2, a3);
            Vec3_assign(auStack_34, auStack_74, a2, a3);
            Vec3_dtor(auStack_74, 0xffffffff, a2, a3);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_64, 0xffffffff, a2, a3);
            Vec3_make(a0 + 0x14, uVar2, a2, a3, auStack_84);
            Vec3_make(auStack_34, uVar2, a2, a3, (int)&uStack_98 + 4);
            Vec3_cos_angle(auStack_84, (int)&uStack_98 + 4, a2, a3);
            if (cVar10 == '\0') {
                uStack_98 = (double)CONCAT44(uStack_98._4_4_, (int)((u64)dVar6 >> 0x20));
                dVar6 = uStack_98;
            }
            uStack_98 = dVar6;
            Vec3_dtor((int)&uStack_98 + 4, 0xffffffff, a2, a3);
            Vec3_dtor(auStack_84, 0xffffffff, a2, a3);
            uVar3 = game_sub_097ba4(a0, auStack_24, a1, a3);
            a2 = a1;
            goto LAB_8c097b04;
        }
        if (iVar1 != 5)
            goto LAB_8c097b04;
        goto LAB_8c0978d0;
    }
    CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar2, a2, a3);
    CAnimBody_GetCurFrame(a0 + 0xb0, uVar2, a2, a3);
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x42200000, (int)in_dr0);
        in_fr15 = (float)((u64)in_dr0 >> 0x20);
    } else {
        dVar6 = 2.7216357441417e-312;
    }
    if (cVar9 == '\0') {
        bVar8 = (float)((u64)dVar6 >> 0x20) < in_fr15;
    } else {
        bVar8 = dVar6 < (double)CONCAT44(in_fr14, in_fr15);
    }
    if (bVar8) {
        Vec3_assign(a0 + 0x14, a0 + 0x80, a2, a3);
        if (cVar10 == '\0') {
            uVar2 = SUB84(dVar6, 0);
            pcVar7 = (code *)0x40000000;
        } else {
            uVar2 = 0x40000000;
            pcVar7 = CAnimBody_AdvanceFrame_033b98;
        }
        timer_sub_031ce8(a0, ain0, in_stack_00000000, a3);
        Vec3_assign(a0 + 0x24c, auStack_44, in_stack_00000000, a3);
        Vec3_dtor(auStack_44, 0xffffffff, in_stack_00000000, a3);
        ar5_00 = auStack_24;
        Vec3_distance_sq(a1, ar5_00, in_stack_00000000, a3);
        if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x24), pcVar7);
        } else {
            in_xd0 = CONCAT44(pcVar7, uVar2);
            dVar6 = *(double *)(a0 + 0x24);
        }
        if (cVar9 == '\0') {
            fVar5 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 / dVar6, 0);
        }
        if (cVar10 == '\0') {
            *(float *)(a0 + 0x30) = fVar5;
        } else {
            *(u64 *)(a0 + 0x30) = in_xd0;
        }
        timer_start_24(a0);
        *(u32 *)(a0 + 0x40) = 3;
        a2 = in_stack_00000000;
    }
LAB_8c097b04:
    Vec3_dtor(auStack_34, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_24, 0xffffffff, a2, a3);
    return uVar3;
}

/*
 * game_sub_097ba4  0x8c097ba4
 * area name: game code; nothing names its area yet
 * called by: game_sub_08e9fc, game_sub_093aec, game_sub_093e80, game_sub_094514, game_sub_095548, game_sub_0967d8,
 * game_sub_097888
 */
u32 game_sub_097ba4(int a0, u32 a1, u32 a2, u32 a3) {
    double *pdVar1;
    u32 uVar2;
    u32 ar6_00;
    u32 uVar3;
    float fVar4;
    double dVar5;
    u64 uVar6;
    double dVar7;
    double in_xd0;
    char cVar8;
    char cVar9;
    u32 uStack_94;
    u32 uStack_90;
    u64 uStack_88;
    u8 auStack_74[16];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar3 = a2;
    ar6_00 = a2;
    Vec3_sub(a1, a2, a2, a3, auStack_34);
    Vec3_normalize(auStack_34, uVar3, ar6_00, a3);
    Vec3_ctor_copy(auStack_24, auStack_44, ar6_00, a3);
    Vec3_dtor(auStack_44, 0xffffffff, ar6_00, a3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
    uVar3 = 1;
    if (*(int *)(a0 + 0x40) == 0) {
        Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
        uVar3 = 0;
    } else {
        if ((*(int *)(a0 + 0x40) == 1) || (*(int *)(a0 + 0x40) == 3)) {
            if (*(int *)(a0 + 0x44) == 1) {
                game_sub_031fc4(a0);
            }
            pdVar1 = (double *)(a0 + 0x2c);
            if (cVar9 != '\0') {
                in_xd0 = *pdVar1;
                pdVar1 = (double *)(a0 + 0x30);
            }
            dVar5 = *pdVar1;
            if (cVar8 == '\0') {
                fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 / dVar5, 0);
            }
            dVar5 = in_xd0;
            if (cVar9 == '\0') {
                uStack_88 = (double)CONCAT44(uStack_88._4_4_, fVar4);
                dVar5 = uStack_88;
            }
            uStack_88 = dVar5;
            Vec3_scale(auStack_24, &uStack_88, ar6_00, a3, auStack_54);
            Vec3_add(a0 + 0x14, auStack_54, ar6_00, a3, auStack_64);
            Vec3_add_assign(a0 + 0x14, auStack_64);
            Vec3_dtor(auStack_64, 0xffffffff, ar6_00, a3);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_54, 0xffffffff, ar6_00, a3);
            Vec3_normalize(a0 + 0x14, uVar2, ar6_00, a3);
            Vec3_assign(a0 + 0x14, auStack_74, ar6_00, a3);
            Vec3_dtor(auStack_74, 0xffffffff, ar6_00, a3);
            pdVar1 = (double *)(a0 + 0x2c);
            if (cVar9 != '\0') {
                in_xd0 = *pdVar1;
                pdVar1 = (double *)(a0 + 0x30);
            }
            dVar5 = *pdVar1;
            if (SUB84(dVar5, 0) != (float)((u64)dVar5 >> 0x20)) {
                if (cVar9 == '\0') {
                    dVar5 = (double)(u64) * (u32 *)(a0 + 0x28);
                } else {
                    in_xd0 = *(double *)(a0 + 0x28);
                }
                if (cVar8 == '\0' && 0.0 < SUB84(dVar5, 0)) {
                    if (cVar9 == '\0') {
                        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x24), *(u32 *)(a0 + 0x28));
                    } else {
                        in_xd0 = *(double *)(a0 + 0x28);
                        dVar5 = *(double *)(a0 + 0x24);
                    }
                    if (cVar8 == '\0') {
                        fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
                    } else {
                        fVar4 = SUB84(dVar5 / dVar5, 0);
                    }
                    if (cVar9 == '\0') {
                        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x2c), fVar4);
                    } else {
                        dVar5 = *(double *)(a0 + 0x2c);
                    }
                    if (cVar8 == '\0') {
                        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
                    } else {
                        fVar4 = SUB84(dVar5 + dVar5, 0);
                    }
                    if (cVar9 == '\0') {
                        *(float *)(a0 + 0x2c) = fVar4;
                    } else {
                        *(double *)(a0 + 0x2c) = in_xd0;
                    }
                }
                pdVar1 = (double *)(a0 + 0x2c);
                if (cVar9 != '\0') {
                    in_xd0 = *pdVar1;
                    pdVar1 = (double *)(a0 + 0x30);
                }
                dVar5 = *pdVar1;
                if (cVar8 == '\0' && (float)((u64)dVar5 >> 0x20) < SUB84(dVar5, 0)) {
                    if (cVar9 == '\0') {
                        uVar2 = *(u32 *)(a0 + 0x30);
                        dVar5 = (double)CONCAT44(uVar2, SUB84(dVar5, 0));
                        *(u32 *)(a0 + 0x2c) = uVar2;
                    } else {
                        dVar5 = *(double *)(a0 + 0x30);
                        *(double *)(a0 + 0x2c) = dVar5;
                    }
                }
            }
            Vec3_distance_sq(a2, a1, ar6_00, a3);
            uVar2 = (u32)((u64)dVar5 >> 0x20);
            if (cVar9 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x48), *(u32 *)(a0 + 0x28));
                uStack_94 = uVar2;
            } else {
                uStack_94 = SUB84(dVar5, 0);
                in_xd0 = *(double *)(a0 + 0x28);
                dVar5 = *(double *)(a0 + 0x48);
                uStack_90 = uVar2;
            }
            if (cVar8 == '\0') {
                fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 + dVar5, 0);
            }
            if (cVar9 == '\0') {
                uVar6 = CONCAT44(uStack_94, fVar4);
            } else {
                uVar6 = CONCAT44(uStack_90, uStack_94);
            }
            if (cVar8 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
                dVar5 = (double)(uVar6 & 0xffffffff);
                if (cVar9 == '\0') {
                    *(u32 *)(a0 + 0x2c) = 0;
                } else {
                    *(double *)(a0 + 0x2c) = dVar5;
                }
                Vec3_make(a0 + 0x14, a1, ar6_00, a3, (int)&uStack_88 + 4);
                Vec3_cos_angle(a0 + 0x14, (int)&uStack_88 + 4, ar6_00, a3);
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x42340000, (int)((u64)dVar5 >> 0x20));
                    dVar5 = in_xd0;
                } else {
                    dVar7 = 2.993931213754161e-78;
                }
                if (cVar8 == '\0') {
                    fVar4 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar7 + dVar7, 0);
                }
                if (cVar9 == '\0') {
                    *(float *)(a0 + 0x38) = fVar4;
                } else {
                    *(double *)(a0 + 0x38) = dVar5;
                }
                Vec3_dtor((int)&uStack_88 + 4, 0xffffffff, ar6_00, a3);
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x38), *(u32 *)(a0 + 0x28));
                } else {
                    dVar5 = *(double *)(a0 + 0x28);
                    dVar7 = *(double *)(a0 + 0x38);
                }
                if (cVar8 == '\0') {
                    fVar4 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar7 / dVar7, 0);
                }
                if (cVar9 == '\0') {
                    *(float *)(a0 + 0x3c) = fVar4;
                } else {
                    *(double *)(a0 + 0x3c) = dVar5;
                }
                *(u32 *)(a0 + 0x40) = 0;
                uVar3 = 0;
            }
        }
        Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
    }
    return uVar3;
}

/*
 * game_sub_097e0c  0x8c097e0c
 * area name: game code; nothing names its area yet
 * called by: game_sub_08e6e8
 */
u32 game_sub_097e0c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;

    iVar1 = *(int *)(0x12c + a0);
    if (iVar1 == 0) {
        a3 = 0;
        a2 = 0xffffffff;
        a1 = 2;
        CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, a1, a2, a3);
        *(int *)(0x12c + a0) = *(int *)(0x12c + a0) + 1;
    } else if (iVar1 != 1) {
        if (iVar1 != 2) {
            return 1;
        }
        return 0;
    }
    iVar1 = (*(code *)(&CAnimBody_AdvanceFrame_wrapper))(a0 + 0xb0, a1, a2, a3);
    if (iVar1 == 1) {
        ar5_00 = 2;
        get_motion_data(a0 + 0xb0, 2, a2, a3);
        CAnimBody_SetFrame(a0 + 0xb0, ar5_00, a2, a3);
        *(int *)(0x12c + a0) = *(int *)(0x12c + a0) + 1;
    }
    return (u32)(iVar1 != 1);
}

/*
 * game_sub_097ef0  0x8c097ef0
 * area name: game code; nothing names its area yet
 */
u32 game_sub_097ef0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_PR;

    *(u32 *)(a0 + 300) = 0;
    *(u32 *)(a0 + 0x40) = 5;
    *(u32 *)(a0 + 0x134) = 0;
    reset_fields_2c_6c(a0 + 0xb0, a1, a2);
    set_field_68(a0 + 0xb0, a1, a2, a3, in_PR);
    ar5_00 = 1;
    set_field_24(a0 + 0xb0, 1);
    *(u32 *)(a0 + 0x138) = 0;
    *(u32 *)(a0 + 0x1e8) = 0;
    flags6_set_all(a0 + 0x1fc, ar5_00, a2);
    *(u32 *)(a0 + 0x214) = 1;
    if ((-1 < *(int *)(a0 + 0x2f4)) && (-1 < *(int *)(a0 + 0x2f8))) {
        game_sub_06b1d8(*(u32 *)(a0 + 0x2f4), *(u32 *)(a0 + 0x2f8), a2, a3);
        *(u32 *)(a0 + 0x2f4) = 0xffffffff;
        *(u32 *)(a0 + 0x2f8) = 0xffffffff;
    }
    *(u32 *)(a0 + 0x240) = 0;
    *(u32 *)(a0 + 0x244) = 0;
    return 0x244;
}

/*
 * game_sub_097fcc  0x8c097fcc
 * area name: game code; nothing names its area yet
 * called by: game_sub_092a28
 */
u32 game_sub_097fcc(int a0, u32 a1, u8 *a2, u32 a3) {
    double dVar1;
    int iVar2;
    u8 *puVar3;
    u32 uVar4;
    u32 ar5_00;
    u8 *ar6_00;
    u32 ar7_00;
    u32 uVar5;
    u32 uVar6;
    float fVar7;
    u64 in_dr0;
    double dVar8;
    float fVar10;
    u64 uVar9;
    u64 in_xd0;
    char cVar11;
    char cVar12;
    u32 in_stack_00000004;
    u64 uStack_70;
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[12];
    u8 auStack_1c[20];

    cVar12 = '\0';
    cVar11 = '\0';
    uVar4 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_1c, a1, a2);
    uVar5 = (u32)in_dr0;
    if (*(int *)(a0 + 300) == 0) {
        Vec3_assign_f(auStack_1c, uVar4, ar6_00, ar7_00);
        Vec3_set_xyz(auStack_28, uVar4, ar6_00, ar7_00);
        Vec3_sub_023484(auStack_1c, auStack_28, ar6_00, ar7_00, auStack_38);
        Vec3_assign(auStack_1c, auStack_38, ar6_00, ar7_00);
        Vec3_dtor(auStack_38, 0xffffffff, ar6_00, ar7_00);
        uVar4 = 0xffffffff;
        puVar3 = auStack_28;
        object_dtor_delete(puVar3, 0xffffffff, ar6_00, ar7_00);
        uVar4 = rand();
        ar5_00 = 0x168;
        libgcc_divide_helper_01031c(uVar4, 0x168, ar6_00);
        Vec3_sub_0238b4(auStack_1c, ar5_00, ar6_00, ar7_00);
        Vec3_assign(auStack_1c, auStack_48, ar6_00, ar7_00);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_48, 0xffffffff, ar6_00, ar7_00);
        Vec3_normalize(auStack_1c, uVar4, ar6_00, ar7_00);
        Vec3_assign(auStack_1c, auStack_58, ar6_00, ar7_00);
        uVar4 = 0xffffffff;
        puVar3 = auStack_58;
        Vec3_dtor(puVar3, 0xffffffff, ar6_00, ar7_00);
        uVar4 = rand();
        iVar2 = libgcc_divide_helper_01031c(uVar4, 0x50, ar6_00);
        if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44((float)iVar2, uVar5);
        } else {
            dVar8 = (double)iVar2;
        }
        dVar1 = dVar8;
        if (cVar12 == '\0') {
            uStack_70 = (double)CONCAT44(uStack_70._4_4_, (int)((u64)dVar8 >> 0x20));
            dVar1 = uStack_70;
        }
        uStack_70 = dVar1;
        Vec3_scale_assign(auStack_1c, &uStack_70);
        uVar6 = SUB84(dVar8, 0);
        Vec3_add(a2, auStack_1c, ar6_00, ar7_00, auStack_68);
        ar6_00 = auStack_68;
        iVar2 = game_sub_093e80(a0, a1, ar6_00, a3);
        Vec3_dtor(auStack_68, 0xffffffff, ar6_00, a3);
        ar7_00 = a3;
        if (iVar2 == 0) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            ar7_00 = 0;
            ar6_00 = NULL;
            uVar4 = 0;
            CAnimBody_SetAnimation(a0 + 0xb0, 0, 0, 0);
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 0x220) = 0;
            } else {
                *(u64 *)(a0 + 0x220) = (u64)uVar6;
            }
            flags6_clear_all(a0 + 0x1fc, uVar4, ar6_00, ar7_00);
            set_field_8c_to_1(in_stack_00000004, uVar4, ar6_00, ar7_00);
        }
    } else if (*(int *)(a0 + 300) == 1) {
        if (cVar12 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
            fVar7 = *(float *)(a0 + 0x220);
            fVar10 = 30.0;
        } else {
            *(u64 *)(a0 + 0x28) = in_dr0 & 0xffffffff;
            in_xd0 = *(u64 *)(a0 + 0x220);
            fVar7 = 30.0;
            fVar10 = 2.0;
        }
        if (cVar11 != '\0' || fVar10 <= fVar7) {
            CAnimBody_SetFrame(a0 + 0xb0, uVar4, ar6_00, ar7_00);
            if (cVar12 == '\0') {
                fVar7 = *(float *)(a0 + 0x220);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x220);
            }
            if (cVar11 == '\0') {
                fVar7 = fVar7 + 1.0;
            } else {
                fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x220) = fVar7;
                uVar9 = CONCAT44(0x42f00000, *(u32 *)(a0 + 0x220));
            } else {
                *(u64 *)(a0 + 0x220) = in_xd0;
                uVar9 = 0x454d00142f00000;
            }
            if (cVar11 == '\0' && (float)(uVar9 >> 0x20) < (float)uVar9) {
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x220) = 0;
                } else {
                    *(u64 *)(a0 + 0x220) = uVar9 & 0xffffffff;
                }
            }
        } else {
            CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, uVar4, ar6_00, ar7_00);
            if (cVar12 == '\0') {
                fVar7 = *(float *)(a0 + 0x220);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x220);
            }
            if (cVar11 == '\0') {
                fVar7 = fVar7 + 1.0;
            } else {
                fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x220) = fVar7;
            } else {
                *(u64 *)(a0 + 0x220) = in_xd0;
            }
        }
    }
    uStack_70._4_4_ = 1;
    Vec3_dtor(auStack_1c, 0xffffffff, ar6_00, ar7_00);
    return uStack_70._4_4_;
}

/*
 * set_field_280_u8  0x8c0982b8
 * called by: set_field_280_u8_on_field_538
 */
int set_field_280_u8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x280;
    *(u8 *)(0x280 + a0) = (u8)a1;
    return iVar1;
}

/*
 * alt_entry_0982c4  0x8c0982c4
 * probably an entry 12 bytes into 8c0982b8: it reads registers that code sets before it
 */
u32 alt_entry_0982c4(int *a0, float *a1, int a2, u32 a3) {
    u32 uVar1;
    float *pfVar2;
    u8 *puVar3;
    int ar6_00;
    u32 unaff_r12;
    u32 unaff_r13;
    u32 unaff_r14;
    u64 *puVar4;
    float fVar5;
    double in_dr0;
    u32 uVar8;
    u64 uVar6;
    double dVar7;
    double in_dr14;
    double dVar9;
    u32 in_PR;
    u64 uStack_8;

    puVar4 = (u64 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14, 0), (u32)uStack_8);

    *(u32 *)((int)puVar4 + -4) = unaff_r14;
    *(u32 *)((int)puVar4 + -8) = unaff_r13;
    *(u32 *)((int)puVar4 + -0xc) = unaff_r12;
    *(u32 *)((int)puVar4 + -0x10) = in_PR;
    *(u32 *)((int)puVar4 + -0xf4) = a3;
    pfVar2 = a1;
    ar6_00 = a2;
    Vec3_assign_f((int)a0 + 0x200, a1, a2, a3);
    (*(code *)(&Vec3_ctor_zero))((u8 *)((int)puVar4 + 0xd4 + -0xf4), pfVar2, ar6_00, a3);
    (*(code *)(&Vec3_ctor_zero))((u8 *)((int)puVar4 + 0xc4 + -0xf4), pfVar2, ar6_00, a3);
    (*(code *)(&Vec3_ctor_zero))((u8 *)((int)puVar4 + 0xb4 + -0xf4), pfVar2, ar6_00, a3);
    if ((*(int *)(a2 + 0x68) != 0) && ((int)((u32) * (u8 *)(0x1fc + (int)a0) << 0x1e) < 0)) {
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar4 + 0xc4 + -0xf4), a1, ar6_00, a3);
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar4 + 0xb4 + -0xf4), *(int *)(a2 + 0x68) + 4, ar6_00, a3);

        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(*(int *)(a2 + 0x68) + 0x158));

        *(u8 **)((int)puVar4 + -0xf8) = (u8 *)((int)puVar4 + 0xa4 + -0xf4);
        (*(code *)(&Vec3_sub))((u8 *)((int)puVar4 + 0xc8 + -0xf8), (u8 *)((int)puVar4 + 0xb8 + -0xf8), ar6_00, a3,
                               *(u32 *)((int)puVar4 + -0xf8));
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar4 + 0xd4 + -0xf4), (u8 *)((int)puVar4 + 0xa4 + -0xf4), ar6_00, a3);
        uVar1 = 0xffffffff;
        (*(code *)(&Vec3_dtor))((u8 *)((int)puVar4 + 0xa4 + -0xf4), 0xffffffff, ar6_00, a3);
        (*(code *)(&Vec3_length_sq))((u8 *)((int)puVar4 + 0xd4 + -0xf4), uVar1, ar6_00, a3);
        uVar8 = (u32)((u64)in_dr0 >> 0x20);

        *(u32 *)((int)puVar4 + -200) = uVar8;
        in_dr0 = (double)CONCAT44(uVar8, a0[0x12]);

        fVar5 = SUB84(in_dr0, 0) + SUB84(in_dr14, 0);

        dVar7 = (double)CONCAT44(*(u32 *)((int)puVar4 + -200), fVar5);

        fVar5 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);

        *(float *)((int)puVar4 + -0xc4) = fVar5;
        fVar5 = *(float *)((int)puVar4 + -0xc4);

        uVar6 = (u64)(u32)fVar5;
        if (fVar5 <= 0.0) {

            uVar6 = CONCAT44(g_8c098500, fVar5);
            *(u32 *)((int)puVar4 + -0xc4) = g_8c098500;
        }
        (*(code *)(&Vec3_length))((u8 *)((int)puVar4 + 0xd4 + -0xf4), uVar1, ar6_00, a3);
        Vec3_length_sq(a0 + 1, uVar1, ar6_00, a3);

        *(int *)((int)puVar4 + -0xcc) = (int)(uVar6 >> 0x20);
        uVar6 = (u64) * (u32 *)((int)puVar4 + -0xcc);

        fVar5 = (float)uVar6;
        if (0.0 < fVar5) {
            *(u8 **)((int)puVar4 + -0xf8) = (u8 *)((int)puVar4 + 0x94 + -0xf4);
            (*(code *)(&Vec3_scale))(a0 + 5, (&DATA_8c13a7a4), ar6_00, a3, *(u32 *)((int)puVar4 + -0xf8));
            *(u8 **)((int)puVar4 + -0xf8) = (u8 *)((int)puVar4 + 0x84 + -0xf4);
            puVar3 = (u8 *)((int)puVar4 + 0x98 + -0xf8);
            (*(code *)(&Vec3_add))((u8 *)((int)puVar4 + 0xd8 + -0xf8), puVar3, ar6_00, a3,
                                   *(u32 *)((int)puVar4 + -0xf8));
            uVar1 = (*(code *)(&Vec3_length))((u8 *)((int)puVar4 + 0x84 + -0xf4), puVar3, ar6_00, a3);
            *(u32 *)((int)puVar4 + -0xd0) = uVar1;
            (*(code *)(&Vec3_assign))((u8 *)((int)puVar4 + 0xd4 + -0xf4), *(u32 *)((int)puVar4 + -0xd0), ar6_00, a3);
            (*(code *)(&Vec3_dtor))((u8 *)((int)puVar4 + 0x84 + -0xf4), 0xffffffff, ar6_00, a3);
            (*(code *)(&Vec3_dtor))((u8 *)((int)puVar4 + 0x94 + -0xf4), 0xffffffff, ar6_00, a3);
        }
        (*(code *)(&Vec3_scale_assign))((u8 *)((int)puVar4 + 0xd4 + -0xf4), (u8 *)((int)puVar4 + -0xc4), ar6_00, a3);
        in_dr0 = (double)(u64)(u32)fVar5;

        *(u32 *)((int)puVar4 + 0xd8 + -0xf4) = 0;

        pfVar2 = (float *)((int)puVar4 + 0xd4 + -0xf4);
        Vec3_assign((int)a0 + 0x200, pfVar2, ar6_00, a3);
    }
    if ((*(int *)(a2 + 100) != 0) && ((int)((u32) * (u8 *)(0x1fc + (int)a0) << 0x1d) < 0)) {
        if ((-1 < *(int *)(0x2f4 + (int)a0)) && (-1 < *(int *)(0x2f8 + (int)a0))) {
            uVar1 = (**(code **)(0x114 + *(int *)(*(int *)(a2 + 0x50) + 8)))(*(int *)(a2 + 0x50), pfVar2, ar6_00, a3);
            *(u32 *)((int)puVar4 + -0xd4) = uVar1;
            if (*(int *)((int)puVar4 + -0xd4) == 0x12) {
                (**(code **)(*a0 + 0x2c))(a0, pfVar2, ar6_00, a3);
            } else {
                uVar1 =
                    (**(code **)(0x114 + *(int *)(*(int *)(a2 + 0x50) + 8)))(*(int *)(a2 + 0x50), pfVar2, ar6_00, a3);
                *(u32 *)((int)puVar4 + -0xd8) = uVar1;
                if (*(int *)((int)puVar4 + -0xd8) == 0x13) {
                    uVar1 = (**(code **)(0x180 + *(int *)(*(int *)(a2 + 0x50) + 8)))(*(int *)(a2 + 0x50), pfVar2,
                                                                                     ar6_00, a3);
                    *(u32 *)((int)puVar4 + -0xdc) = uVar1;
                    if (*(int *)((int)puVar4 + -0xdc) == 9) {
                        (**(code **)(*a0 + 0x2c))(a0, pfVar2, ar6_00, a3);
                    }
                }
            }
            (*(code *)(&Vec3_dtor))((u8 *)((int)puVar4 + 0xb4 + -0xf4), 0xffffffff, ar6_00, a3);
            (*(code *)(&Vec3_dtor))((u8 *)((int)puVar4 + 0xc4 + -0xf4), 0xffffffff, ar6_00, a3);
            uVar1 = (*(code *)(&Vec3_dtor))((u8 *)((int)puVar4 + 0xd4 + -0xf4), 0xffffffff, ar6_00, a3);
            return uVar1;
        }
        (**(code **)(0x170 + *(int *)(*(int *)(a2 + 0x50) + 8)))(*(int *)(a2 + 0x50), pfVar2, ar6_00, a3);

        *(int *)((int)puVar4 + -0xe0) = (int)((u64)in_dr0 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)puVar4 + -0xe0));
        dVar7 = (double)CONCAT44(g_8c09873c, SUB84(in_dr0, 0));

        dVar9 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar7 >> 0x20));

        pfVar2 = a1;
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar4 + 0xc4 + -0xf4), a1, ar6_00, a3);
        *(u8 **)((int)puVar4 + -0xf8) = (u8 *)((int)puVar4 + -0x80);
        (*(code *)(&Vec3_ctor_copy_wrap_02f670))(*(u32 *)(a2 + 0x50), pfVar2, ar6_00, a3,
                                                 *(u32 *)((int)puVar4 + -0xf8));
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar4 + 0xb4 + -0xf4), (u8 *)((int)puVar4 + -0x80), ar6_00, a3);
        Vec3_dtor((u8 *)((int)puVar4 + -0x80), 0xffffffff, ar6_00, a3);
        *(u8 **)((int)puVar4 + -0xf8) = (u8 *)((int)puVar4 + -0x90);
        (*(code *)(&Vec3_sub))((u8 *)((int)puVar4 + 0xc8 + -0xf8), (u8 *)((int)puVar4 + 0xb8 + -0xf8), ar6_00, a3,
                               *(u32 *)((int)puVar4 + -0xf8));
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar4 + 0xd4 + -0xf4), (u8 *)((int)puVar4 + -0x90), ar6_00, a3);
        uVar1 = 0xffffffff;
        Vec3_dtor((u8 *)((int)puVar4 + -0x90), 0xffffffff, ar6_00, a3);
        (*(code *)(&Vec3_length_sq))((u8 *)((int)puVar4 + 0xd4 + -0xf4), uVar1, ar6_00, a3);
        uVar8 = (u32)((u64)dVar7 >> 0x20);

        *(u32 *)((int)puVar4 + -0xe4) = uVar8;
        dVar7 = (double)CONCAT44(uVar8, a0[0x12]);

        fVar5 = SUB84(dVar7, 0) + SUB84(dVar9, 0);

        dVar7 = (double)CONCAT44(*(u32 *)((int)puVar4 + -0xe4), fVar5);

        fVar5 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);

        dVar7 = (double)CONCAT44(g_8c098768, fVar5);

        fVar5 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);

        *(float *)((int)puVar4 + -0xc4) = fVar5;
        fVar5 = *(float *)((int)puVar4 + -0xc4);

        uVar6 = (u64)(u32)fVar5;
        if (fVar5 <= 0.0) {

            uVar6 = CONCAT44(g_8c09876c, fVar5);
            *(u32 *)((int)puVar4 + -0xc4) = g_8c09876c;
        }
        (*(code *)(&Vec3_length))((u8 *)((int)puVar4 + 0xd4 + -0xf4), uVar1, ar6_00, a3);
        Vec3_length_sq(a0 + 1, uVar1, ar6_00, a3);

        *(int *)((int)puVar4 + -0xe8) = (int)(uVar6 >> 0x20);
        uVar6 = (u64) * (u32 *)((int)puVar4 + -0xe8);

        fVar5 = (float)uVar6;
        if (0.0 < fVar5) {
            *(u8 **)((int)puVar4 + -0xf8) = (u8 *)((int)puVar4 + -0xa0);
            (*(code *)(&Vec3_scale))(a0 + 5, (&DATA_8c13a7a8), ar6_00, a3, *(u32 *)((int)puVar4 + -0xf8));
            *(u8 **)((int)puVar4 + -0xf8) = (u8 *)((int)puVar4 + -0xb0);
            puVar3 = (u8 *)((int)puVar4 + -0xa0);
            (*(code *)(&Vec3_add))((u8 *)((int)puVar4 + 0xd8 + -0xf8), puVar3, ar6_00, a3,
                                   *(u32 *)((int)puVar4 + -0xf8));
            uVar1 = (*(code *)(&Vec3_length))((u8 *)((int)puVar4 + -0xb0), puVar3, ar6_00, a3);
            *(u32 *)((int)puVar4 + -0xec) = uVar1;
            (*(code *)(&Vec3_assign))((u8 *)((int)puVar4 + 0xd4 + -0xf4), *(u32 *)((int)puVar4 + -0xec), ar6_00, a3);
            Vec3_dtor((u8 *)((int)puVar4 + -0xb0), 0xffffffff, ar6_00, a3);
            Vec3_dtor((u8 *)((int)puVar4 + -0xa0), 0xffffffff, ar6_00, a3);
        }
        (*(code *)(&Vec3_scale_assign))((u8 *)((int)puVar4 + 0xd4 + -0xf4), (u8 *)((int)puVar4 + -0xc4), ar6_00, a3);
        puVar3 = (u8 *)((int)puVar4 + 0xd4 + -0xf4);
        Vec3_add_assign((int)a0 + 0x200, puVar3);
        if (*(int *)(0x128 + (int)a0) == 3) {
            if ((*(int *)(0x124 + (int)a0) == 10) && (*(int *)(0x12c + (int)a0) < 2)) {
                *(u32 *)(0x12c + (int)a0) = 0;
                a0[0x10] = 5;
            } else if ((*(int *)(0x248 + (int)a0) == 2) && (*(int *)(0x124 + (int)a0) != 10)) {
                *(u32 *)(0x288 + (int)a0) = 1;
                *(u8 **)((int)puVar4 + -0xf8) = (u8 *)((int)puVar4 + -0xc0);
                (*(code *)(&Vec3_make))((int)a0 + 0x80, puVar3, ar6_00, a3, *(u32 *)((int)puVar4 + -0xf8));
                Vec3_assign(a0 + 5, (u8 *)((int)puVar4 + -0xc0), ar6_00, a3);
                uVar1 = 0xffffffff;
                Vec3_dtor((u8 *)((int)puVar4 + -0xc0), 0xffffffff, ar6_00, a3);
                *(u32 *)(0x248 + (int)a0) = 0;
                a0[0x10] = 5;
                (*(code *)(&CAnimBody_SetFrame))((int)a0 + 0xb0, uVar1, ar6_00, a3);
            }
        } else {
            uVar1 = (*(code *)(&get_field_24_026024))(*(u32 *)((int)puVar4 + -0xf4), puVar3, ar6_00, a3);
            *(u32 *)((int)puVar4 + -0xf0) = uVar1;
            if (*(int *)((int)puVar4 + -0xf0) == 0) {

                fVar5 = *a1;

                dVar7 = (double)CONCAT44(*(u32 *)((int)a0 + 0x200), fVar5);

                fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);

                uVar6 = CONCAT44(g_8c098890, fVar5);

                if ((float)(uVar6 >> 0x20) < (float)uVar6) {

                    *(u32 *)((int)a0 + 0x200) = 0;
                }
            }
        }
    }
    (*(code *)(&Vec3_dtor))((u8 *)((int)puVar4 + 0xb4 + -0xf4), 0xffffffff, ar6_00, a3);
    (*(code *)(&Vec3_dtor))((u8 *)((int)puVar4 + 0xc4 + -0xf4), 0xffffffff, ar6_00, a3);
    uVar1 = (*(code *)(&Vec3_dtor))((u8 *)((int)puVar4 + 0xd4 + -0xf4), 0xffffffff, ar6_00, a3);
    return uVar1;
}

/*
 * game_sub_0988a4  0x8c0988a4
 * area name: game code; nothing names its area yet
 * called by: game_sub_092a28
 */
u32 game_sub_0988a4(int a0, int a1, int *a2, u32 a3) {
    int iVar1;
    int *a6;
    float fVar2;
    u64 in_dr0;
    double dVar3;
    u64 in_xd0;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        flags6_clear_all(a0 + 0x1fc, a1, a2, a3);
        *(u32 *)(a0 + 0x214) = 0;
        if (cVar5 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = in_dr0 & 0xffffffff;
        }
        *(u32 *)(a0 + 0x300) = 0;
        if (cVar5 == '\0') {
            *(u32 *)(a0 + 0xa0) = 0;
        } else {
            *(u64 *)(a0 + 0xa0) = in_dr0 & 0xffffffff;
        }
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        timer_start_94(a0, a1, a2);
    } else if (iVar1 != 1) {
        if (iVar1 != 2) {
            return 1;
        }
        a6 = a2;
        game_sub_0324ac(a0);
        iVar1 = a1;
        (**(code **)(*a2 + 0x128))(a2, a1, a6, a3);
        if (cVar5 == '\0') {
            in_dr0 = CONCAT44((int)(in_dr0 >> 0x20), *(u32 *)(a1 + 4));
        } else {
            in_xd0 = *(u64 *)(a1 + 4);
        }
        if (cVar4 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
            *(u32 *)(a0 + 300) = 0;
            *(u32 *)(a0 + 0x300) = 0;
            if (cVar5 == '\0') {
                *(u32 *)(a0 + 0xa0) = 0;
            } else {
                *(u64 *)(a0 + 0xa0) = in_dr0 & 0xffffffff;
            }
            clear_field_94(a0, iVar1);
            return 0;
        }
        if (cVar5 == '\0') {
            dVar3 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0xa0));
        } else {
            in_xd0 = *(u64 *)(a0 + 0xa0);
            dVar3 = 1.6066918270171573e+73;
        }
        if (cVar4 == '\0') {
            fVar2 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
        } else {
            fVar2 = SUB84(dVar3 + dVar3, 0);
        }
        if (cVar5 == '\0') {
            *(float *)(a0 + 0xa0) = fVar2;
            return 1;
        }
        *(u64 *)(a0 + 0xa0) = in_xd0;
        return 1;
    }
    iVar1 = *(int *)(a0 + 0x300);
    *(int *)(a0 + 0x300) = iVar1 + 1;
    if (0x95 < iVar1 + 1) {
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    }
    return 1;
}

/*
 * game_sub_0989f0  0x8c0989f0
 * area name: game code; nothing names its area yet
 */
int game_sub_0989f0(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 ar7_00;
    u64 in_dr0;
    char cVar4;
    u32 uStack_18;
    int iStack_14;
    int iStack_10;

    cVar4 = '\0';
    if (*(int *)(a0 + 0x128) == 3) {
        iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a1, a2, a3);
        if (iVar1 == 1) {
            uVar3 = 100;
            uVar2 = 0;
            iStack_10 = rand_range(a0, 0, 100);
            if (iStack_10 < 0x3c) {
                rand_float(a0, uVar2, uVar3);
                iVar1 = (int)((u64)in_dr0 >> 0x20);
                iStack_14 = iVar1;
                if (cVar4 != '\0') {
                    iStack_14 = (int)in_dr0;
                    iStack_10 = iVar1;
                }
                iVar1 = 0x14;
                if (cVar4 == '\0') {
                    *(int *)(a0 + 0x304) = iStack_14;
                } else {
                    *(u64 *)(a0 + 0x304) = CONCAT44(iStack_10, iStack_14);
                }
            } else {
                rand_float(a0, uVar2, uVar3);
                uVar2 = (u32)((u64)in_dr0 >> 0x20);
                uStack_18 = uVar2;
                if (cVar4 != '\0') {
                    uStack_18 = (u32)in_dr0;
                    iStack_14 = uVar2;
                }
                iVar1 = 0x10;
                if (cVar4 == '\0') {
                    *(u32 *)(a0 + 0x304) = uStack_18;
                } else {
                    *(u64 *)(a0 + 0x304) = CONCAT44(iStack_14, uStack_18);
                }
            }
        }
    } else {
        iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a1, a2, a3);
        if (iVar1 == 1) {
            iVar1 = rand_range(a0, 0, 100);
            if (iVar1 < 0x50) {
                ar7_00 = 0;
                uVar3 = 0xffffffff;
                uVar2 = 1;
                CAnimBody_SetAnimation(a0 + 0xb0, 1, 0xffffffff, 0);
                rand_float(a0, uVar2, uVar3);
                if (cVar4 == '\0') {
                    *(int *)(a0 + 0x304) = (int)((u64)in_dr0 >> 0x20);
                } else {
                    *(u64 *)(a0 + 0x304) = in_dr0;
                }
            } else {
                ar7_00 = 0;
                uVar3 = 0xffffffff;
                uVar2 = 7;
                CAnimBody_SetAnimation(a0 + 0xb0, 7, 0xffffffff, 0);
                rand_float(a0, uVar2, uVar3);
                if (cVar4 == '\0') {
                    *(int *)(a0 + 0x304) = (int)((u64)in_dr0 >> 0x20);
                } else {
                    *(u64 *)(a0 + 0x304) = in_dr0;
                }
            }
            iVar1 = CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar3, ar7_00);
        }
    }
    return iVar1;
}

/*
 * game_sub_098b6c  0x8c098b6c
 * area name: game code; nothing names its area yet
 */
u32 game_sub_098b6c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;
    u8 auStack_34[24];
    u8 auStack_1c[28];

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c125ff0, a1, a2, a3);
    uVar3 = 0x8c2846a0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2846a0, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126000, pcVar2, uVar3, a3);
    uVar3 = 0x8c2846ac;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2846ac, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126010, pcVar2, uVar3, a3);
    uVar3 = 0x8c2846b8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2846b8, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126020, pcVar2, uVar3, a3);
    uVar3 = 0x8c2846c4;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2846c4, a3);
    if (cVar4 == '\0') {
        g_8c126030 = CONCAT44(_UNK_8c126034, 0x800000);
    } else {
        /* WARNING: Read-only address (ram,0x8c126034) is written */
        g_8c126030 = 0xffffffff00800000;
    }
    uVar1 = set_6_floats(auStack_1c);
    copy_6_words(0x8c2846d0, uVar1);
    uVar1 = set_6_floats(auStack_34);
    uVar1 = copy_6_words(0x8c2846e8, uVar1);
    return uVar1;
}

/*
 * Class_12a7a8_ctor  0x8c098ca8
 * Class_129c70_ctor with vtable 8c12a7a8 (MothLine state)
 * called by: CMothLine_ctor
 */
u32 *Class_12a7a8_ctor(u32 *a0, u32 a1, u32 a2) {
    Class_129c70_ctor(a0, a1, a2);
    *a0 = (&DATA_8c12a7a8);
    return a0;
}

/*
 * Class_12a7a8_dtor  0x8c098ccc
 * stores the vtable 0x8c12a7a8
 * called by: Class_12a5d0_m0_08a3a4
 */
u32 *Class_12a7a8_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12a7a8;
        ar5_00 = 0;
        Class_129c70_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12a7a8_m1_098d14  0x8c098d14
 * decompiler: Switch with 1 destination removed at 0x8c0990c8
 */
int Class_12a7a8_m1_098d14(int a0, int *a1, int *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    int *piVar5;
    int *ar6_00;
    int iVar6;
    int iVar7;

    iVar7 = 0;
    iVar6 = 0;
    g_8c13a920 = *(u32 *)(a0 + 0x9c);
    g_8c13a924 = *(u32 *)(a0 + 0xa0);
    g_8c13a928 = *(u32 *)(a0 + 0xa4);
    piVar5 = a1;
    ar6_00 = a2;
    Class_12a7a8_sub_099858(a0, a1, a2, a3);
    iVar1 = get_field_24_026024(a1, piVar5, ar6_00, a3);
    if (iVar1 == 0) {
        iVar4 = a2[1];
        iVar1 = get_field_13c_028d9c(iVar4, piVar5, ar6_00);
        if (iVar1 == 0x13) {
            uVar2 = rand();
            piVar5 = (int *)0x64;
            iVar1 = libgcc_divide_helper_01031c(uVar2, 100, ar6_00);
            if ((iVar1 < 1) && (*(int *)(a0 + 4) != 0xb)) {
                *(u32 *)(a0 + 4) = 0xb;
                *(u32 *)(a0 + 8) = 0x55;
                *(u32 *)(a0 + 0xc) = 0;
                Class_12a7a8_sub_099b0c(a0, a1, ar6_00, a3);
                piVar5 = (int *)0x4a6;
                list5_push(a0, 0x4a6);
            }
        }
    }
    iVar1 = get_field_24_026024(a1, piVar5, ar6_00, a3);
    if (iVar1 == 1) {
        iVar4 = a2[1];
        iVar1 = get_field_13c_028d9c(iVar4, piVar5, ar6_00);
        if (iVar1 == 0x13) {
            uVar2 = rand();
            iVar1 = libgcc_divide_helper_01031c(uVar2, 10000, ar6_00);
            if (iVar1 < 1) {
                piVar5 = NULL;
                while (true) {
                    uVar2 = 10;
                    iVar1 = (**(code **)(*a1 + 0x11c))(a1, 10, ar6_00, a3);
                    if (iVar1 <= (int)piVar5)
                        break;
                    uVar2 = 10;
                    ar6_00 = piVar5;
                    iVar1 = (**(code **)(*a1 + 0x100))(a1, 10, piVar5, a3);
                    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1, uVar2, ar6_00, a3);
                    if (iVar1 == 0x13) {
                        uVar2 = 10;
                        ar6_00 = piVar5;
                        iVar1 = (**(code **)(*a1 + 0x100))(a1, 10, piVar5, a3);
                        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1, uVar2, ar6_00, a3);
                        if (iVar1 == 1) {
                            iVar6 = iVar6 + 1;
                            uVar2 = 10;
                            ar6_00 = piVar5;
                            iVar1 = (**(code **)(*a1 + 0x100))(a1, 10, piVar5, a3);
                            iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x180))(iVar1, uVar2, ar6_00, a3);
                            if (iVar1 == 0xb) {
                                iVar7 = iVar7 + 1;
                            }
                        }
                    }
                    piVar5 = (int *)((int)piVar5 + 1);
                }
                if ((((iVar7 == 0) && (3 < iVar6)) && (*(int *)(a0 + 4) == 0)) &&
                    (iVar1 = (**(code **)(*a1 + 0x1a8))(a1, uVar2, ar6_00, a3), iVar1 == 1)) {
                    set_field_48_0996e4(a2[3], *a2);
                    *(u32 *)(a0 + 4) = 0xd;
                    *(u32 *)(a0 + 8) = 0x5f;
                    *(u32 *)(a0 + 0xc) = 0;
                    *(u32 *)(a0 + 0x40) = 0xb;
                    *(u32 *)(a0 + 0x9c) = 0xb;
                    g_8c13a920 = 0xb;
                    *(u32 *)(a0 + 0xa0) = 0xc;
                    g_8c13a924 = 0xc;
                    *(u32 *)(a0 + 0xa4) = 0xc;
                    g_8c13a928 = 0xc;
                }
            }
        }
    }
    piVar5 = a2;
    Class_129c70_sub_02f20c(a0, a2, ar6_00, a3);
    uVar2 = get_field_4_05eed8(a0);
    piVar5 = a2;
    Class_12a7a8_sub_099714(a0, a1, a2, uVar2);
    uVar3 = talk_sub_02bef8(a2[1], a1, piVar5);
    if ((((short)uVar3 == 1) && (uVar3 = get_field_4f_s8(a2[3]), (char)uVar3 == '\0')) &&
        (iVar1 = get_field_13c_028d9c(a2[1], a1, piVar5), iVar1 == 0x11)) {
        *(u8 *)(a0 + 0x98) = 3;
    }
    iVar1 = (**(code **)(*(int *)(*a2 + 8) + 0xb8))(*a2, a1, piVar5, uVar2);
    if ((iVar1 == 1) && (*(char *)(a0 + 0x98) < '\t')) {
        *(u8 *)(a0 + 0x98) = 8;
    }
    if ((*(char *)(a0 + 0x98) < '\n') && (-1 < *(char *)(a0 + 0x98))) {
        *(u32 *)(a0 + 8) = 0x5f;
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 4) = 0xd;
        *(u32 *)(a0 + 0x9c) = 1;
        *(u32 *)(a0 + 0x40) = 1;
        g_8c13a920 = 1;
        *(u32 *)(a0 + 0xa0) = 0xc;
        g_8c13a924 = 0xc;
        *(u32 *)(a0 + 0xa4) = 0xc;
        g_8c13a928 = 0xc;
        piVar5 = (int *)0x1b;
        a1 = (int *)0x26;
        recent5_push_unique(a2[6], 0x26, 0x1b);
    }
    Class_12a7a8_sub_099ab8(a0);
    set_field_130(a2[2]);
    iVar1 = get_field_124_027930(a2[2], a1, piVar5, uVar2);
    iVar6 = get_field_40_05eea0(a0);
    if (iVar1 != iVar6) {
        uVar3 = get_field_40_05eea0(a0);
        iVar6 = timer_sub_031b08(a2[2], uVar3, 1, uVar2);
    }
    return iVar6;
}

/*
 * dec_counter_50  0x8c0996c4
 * decrements the byte counter at +0x50
 * called by: game_sub_0c4dd0
 */
u32 dec_counter_50(int a0) {
    *(char *)(a0 + 0x50) = *(char *)(a0 + 0x50) + -1;
    return 0x50;
}

/*
 * set_field_4c_u8_0996dc  0x8c0996dc
 * called by: game_sub_0999ac
 */
u32 set_field_4c_u8_0996dc(int a0, u32 a1) {
    *(u8 *)(a0 + 0x4c) = (u8)a1;
    return 0x4c;
}

/*
 * set_field_48_0996e4  0x8c0996e4
 * called by: Class_12a7a8_m1_098d14, Class_12b0c4_m1_0ab7f4
 */
u32 set_field_48_0996e4(int a0, u32 a1) {
    *(u32 *)(a0 + 0x48) = a1;
    return 0x48;
}

/*
 * ret_const_0_0996ec  0x8c0996ec
 */
u32 ret_const_0_0996ec(void) {
    return 0;
}

/*
 * Class_12a7a8_m2_0996f4  0x8c0996f4
 */
u32 Class_12a7a8_m2_0996f4(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*a0 + 0xc))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * Class_12a7a8_sub_099714  0x8c099714
 * area name: only called from Class_12a7a8 methods
 * called by: Class_12a7a8_m1_098d14
 */
u32 Class_12a7a8_sub_099714(int a0, u32 a1, int *a2, int a3) {
    int iVar1;
    u32 a5;
    int *piVar2;
    int in_stack_ffffffd8;

    piVar2 = a2;
    if (*(int *)(a0 + 0x38) == 2) {
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13a884 + *(int *)(a0 + 0xc) * 4 + a3 * 0xc);
        game_sub_099914(a0, a1, a2, a3);
        a5 = 1;
        set_field_38_02f404(a0, 1);
    } else {
        in_stack_ffffffd8 = *(int *)(a0 + 0xc);
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13a884 + in_stack_ffffffd8 * 4 + a3 * 0xc);
        a5 = a1;
    }
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 2) {
        set_field_38_02f404(a0, 3);
    } else if (iVar1 == 4) {
        if (*(int *)(a0 + 0x8c) == 1) {
            *(u8 *)(a0 + 0x98) = 7;
            *(u32 *)(a0 + 0x8c) = 0;
        }
        Class_12a7a8_sub_099b0c(a0, a1, piVar2, a3);
    } else if (iVar1 == 8) {
        iVar1 = (**(code **)(*(int *)(*a2 + 8) + 0xb4))(*a2, a5, piVar2, a3);
        if (iVar1 == 1) {
            iVar1 = *a2;
            mask_74_fffffffe(iVar1);
            CAnimal_sub_0c4e2c(iVar1, a5, piVar2, a3);
        }
    } else if ((iVar1 == 0xb) && (*(int *)(a0 + 0x8c) == 1)) {
        set_field_45_u8(a2[3], 1);
        *(u32 *)(a0 + 0x8c) = 0;
    }
    return 1;
}

/*
 * set_field_45_u8  0x8c099850
 * called by: Class_12a7a8_sub_099714, game_sub_0ac124
 */
u32 set_field_45_u8(int a0, u32 a1) {
    *(u8 *)(a0 + 0x45) = (u8)a1;
    return 0x45;
}

/*
 * Class_12a7a8_sub_099858  0x8c099858
 * area name: only called from Class_12a7a8 methods
 * called by: Class_12a7a8_m1_098d14
 */
int Class_12a7a8_sub_099858(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar6_00;
    int in_stack_ffffffe4;

    if (*(int *)(a0 + 0x3c) == 0) {
        ar6_00 = a2;
        game_sub_0999ac(a0, a1, a2, a3);
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + 1;
        in_stack_ffffffe4 = *(int *)(a0 + 0xc);
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13a884 + in_stack_ffffffe4 * 4 + *(int *)(a0 + 4) * 0xc);
        if ((*(int *)(a0 + 0x40) == 0xc) || (*(int *)(a0 + 0xc) == 3)) {
            *(u32 *)(a0 + 0xc) = 0;
            *(u32 *)(a0 + 0x40) = 2;
            set_field_38_02f404(a0, 0);
            a2 = ar6_00;
        } else {
            set_field_38_02f404(a0, 3);
            game_sub_099914(a0, a1, a2, a3);
        }
    }
    iVar1 = *(int *)(a0 + 0x3c);
    if (iVar1 == 2) {
        iVar1 = set_field_38_02f404(a0, 2);
    }
    return iVar1;
}

/*
 * game_sub_099914  0x8c099914
 * area name: game code; nothing names its area yet
 * called by: Class_12a7a8_sub_099714, Class_12a7a8_sub_099858
 */
int game_sub_099914(int a0, u32 a1, int *a2, u32 a3) {
    int iVar1;
    u32 a5;
    int *ar6_00;

    a5 = a1;
    ar6_00 = a2;
    if ((*(int *)(a0 + 0x38) == 2) && (*(int *)(a0 + 0x6c) != 0)) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, a2, a3);
        *(u32 *)(a0 + 0x6c) = 0;
    }
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 4) {
        iVar1 = Class_12a7a8_sub_099b0c(a0, a1, ar6_00, a3);
    } else if ((iVar1 == 8) && (iVar1 = (**(code **)(0xb4 + *(int *)(*a2 + 8)))(*a2, a5, ar6_00, a3), iVar1 == 1)) {
        iVar1 = *a2;
        mask_74_fffffffe(iVar1);
        iVar1 = CAnimal_sub_0c4e2c(iVar1, a5, ar6_00, a3);
    }
    return iVar1;
}

/*
 * game_sub_0999ac  0x8c0999ac
 * area name: game code; nothing names its area yet
 * called by: Class_12a7a8_sub_099858
 */
u8 *game_sub_0999ac(int a0, u32 a1, int *a2, u32 a3) {
    u8 *puVar1;
    int iVar2;
    u32 ar5_00;
    int *ar6_00;
    u32 ar6_01;

    iVar2 = *(int *)(a0 + 0x40);
    puVar1 = (u8 *)0xa;
    if ((iVar2 < 0xb) && (puVar1 = (u8 *)0x1, 0 < iVar2)) {
        puVar1 = (&switchD_8c0999d2::switchdataD_8c0999d8)[iVar2 + -1];
        switch (iVar2) {
        case 1:
            *(u8 *)(a0 + 0x98) = 2;
            puVar1 = (u8 *)CAnimal_sub_0c4e2c(a0, a1, a2, a3);
            break;
        case 3:
            puVar1 = (u8 *)get_field_13c_028d9c(a2[1], a1, a2);
            if (puVar1 == (u8 *)0x12) {
                ar6_01 = 0x1b;
                ar5_00 = 0x27;
                iVar2 = a2[6];
                recent5_push_unique(iVar2, 0x27, 0x1b);
                *(u8 *)(a0 + 0x98) = 5;
                puVar1 = (u8 *)CAnimal_sub_0c4e2c(iVar2, ar5_00, ar6_01, a3);
            }
            break;
        case 4:
            puVar1 = (u8 *)set_field_4c_u8_0996dc(a2[3], 1);
            break;
        case 8:
            ar6_00 = a2;
            puVar1 = (u8 *)(**(code **)(*(int *)(*a2 + 8) + 0xb4))(*a2, a1, a2, a3);
            if (puVar1 == (u8 *)0x1) {
                iVar2 = *a2;
                mask_74_fffffffe(iVar2);
                puVar1 = (u8 *)CAnimal_sub_0c4e2c(iVar2, a1, ar6_00, a3);
            }
            break;
        case 9:
            *(u8 *)(a0 + 0x98) = 5;
            puVar1 = (u8 *)CAnimal_sub_0c4e2c(a0, a1, a2, a3);
            break;
        case 10:
            CAnimal_sub_0c4e2c(a0, a1, a2, a3);
            puVar1 = (u8 *)0x98;
            *(u8 *)(a0 + 0x98) = 5;
        }
    }
    return puVar1;
}

/*
 * Class_12a7a8_sub_099ab8  0x8c099ab8
 * area name: only called from Class_12a7a8 methods
 * called by: Class_12a7a8_m1_098d14
 */
u32 *Class_12a7a8_sub_099ab8(int a0) {
    u32 *puVar1;

    if (*(int *)(a0 + 4) == 2) {
        get_field_8_066620(a0);
        puVar1 = &g_8c099b04;
    } else {
        get_field_8_066620(a0);
        puVar1 = &g_8c099b08;
    }
    return puVar1;
}

/*
 * Class_12a7a8_sub_099b0c  0x8c099b0c
 * area name: only called from Class_12a7a8 methods
 * called by: Class_12a7a8_m1_098d14, Class_12a7a8_sub_099714, game_sub_099914
 */
u32 Class_12a7a8_sub_099b0c(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *ar5_00;
    u8 *puVar3;
    u32 ar5_01;
    u8 *ar6_00;
    u8 *a7;
    u8 *puVar4;
    char cVar5;
    u8 auStack_b0[4];
    u8 auStack_ac[4];
    u8 auStack_a8[4];
    u8 auStack_a4[4];
    u8 auStack_a0[4];
    u8 auStack_9c[4];
    u8 auStack_98[16];
    u8 auStack_88[16];
    u8 auStack_78[16];
    u8 auStack_68[12];
    u8 auStack_5c[16];
    u8 auStack_4c[12];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;

    cVar5 = '\0';
    ar5_00 = a1;
    Vec3_ctor_zero(&uStack_20, a1, a2);
    Vec3_ctor_xyz(auStack_30, ar5_00, a2, a3);
    Vec3_ctor_xyz(auStack_40, ar5_00, a2, a3);
    a7 = auStack_a4;
    puVar3 = auStack_a0;
    puVar4 = auStack_9c;
    (**(code **)(*a1 + 0x120))(a1, puVar4, puVar3, a7);
    iVar1 = get_field_4_05eed8(a0);
    if (((iVar1 != 1) && (iVar1 != 8)) && (iVar1 == 0xb)) {
        iVar1 = (**(code **)(*a1 + 0x11c))(a1, 5, puVar3, a7);
        if (iVar1 == 0) {
            set_field_38_02f404(a0, 2);
            if (cVar5 == '\0') {
                *(u32 *)(a0 + 0x28) = 0x43fa0000;
                *(u32 *)(a0 + 0x2c) = 0x43fa0000;
                *(u32 *)(a0 + 0x30) = 0x43fa0000;
            } else {
                *(u64 *)(a0 + 0x28) = 0x10043fa0000;
                *(u64 *)(a0 + 0x2c) = 0x10043fa0000;
                *(u64 *)(a0 + 0x30) = 0x10043fa0000;
            }
        } else {
            for (puVar4 = NULL; iVar1 = (**(code **)(*a1 + 0x11c))(a1, 5, puVar3, a7), (int)puVar4 < iVar1;
                 puVar4 = puVar4 + 1) {
                uVar2 = (**(code **)(*a1 + 0x100))(a1, 5, puVar4, a7);
                a7 = auStack_b0;
                ar6_00 = auStack_ac;
                puVar3 = auStack_a8;
                get_vec3_field_50(uVar2, puVar3, ar6_00, a7);
                Vec3_set_xyz(auStack_4c, puVar3, ar6_00, a7);
                vec3_copy_8c02b5fc(auStack_68, auStack_4c, ar6_00);
                Vec3_sub_023484(auStack_30, auStack_68, ar6_00, a7, auStack_78);
                Vec3_ctor_copy(auStack_5c, auStack_78, ar6_00, a7);
                Vec3_dtor(auStack_78, 0xffffffff, ar6_00, a7);
                object_dtor_delete(auStack_68, 0xffffffff, ar6_00, a7);
                ar5_01 = 5;
                puVar3 = puVar4;
                uVar2 = (**(code **)(*a1 + 0x100))(a1, 5, puVar4, a7);
                Vec3_ctor_copy_wrap_02f670(uVar2, ar5_01, puVar3, a7, auStack_88);
                Vec3_add(auStack_88, auStack_5c, puVar3, a7, auStack_98);
                Vec3_assign(&uStack_20, auStack_98, puVar3, a7);
                Vec3_dtor(auStack_98, 0xffffffff, puVar3, a7);
                Vec3_dtor(auStack_88, 0xffffffff, puVar3, a7);
                if (cVar5 == '\0') {
                    *(u32 *)(a0 + 0x28) = uStack_20;
                    *(u32 *)(a0 + 0x2c) = uStack_1c;
                    *(u32 *)(a0 + 0x30) = uStack_18;
                } else {
                    *(u64 *)(a0 + 0x28) = CONCAT44(uStack_1c, uStack_20);
                    *(u64 *)(a0 + 0x2c) = CONCAT44(uStack_18, uStack_1c);
                    *(u64 *)(a0 + 0x30) = CONCAT44(uStack_14, uStack_18);
                }
                Vec3_dtor(auStack_5c, 0xffffffff, puVar3, a7);
                object_dtor_delete(auStack_4c, 0xffffffff, puVar3, a7);
            }
        }
    }
    Vec3_dtor(auStack_40, 0xffffffff, puVar3, a7);
    Vec3_dtor(auStack_30, 0xffffffff, puVar3, a7);
    uVar2 = Vec3_dtor(&uStack_20, 0xffffffff, puVar3, a7);
    return uVar2;
}

/*
 * game_sub_099dbc  0x8c099dbc
 * area name: game code; nothing names its area yet
 */
u32 game_sub_099dbc(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126038, a1, a2, a3);
    uVar3 = 0x8c284700;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284700, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126048, pcVar2, uVar3, a3);
    uVar3 = 0x8c28470c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28470c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126058, pcVar2, uVar3, a3);
    uVar3 = 0x8c284718;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284718, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126068, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c284724, a3);
    if (cVar4 == '\0') {
        g_8c126078 = CONCAT44(_UNK_8c12607c, 0x800000);
        /* WARNING: Read-only address (ram,0x8c12607c) is written */
    } else {
        g_8c126078 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * CMothEgg_ctor  0x8c099e74
 * "MothEgg": CAnimal_ctor(kind 11), vtable 0x8c12a7f4
 * called by: CItemGLoader_sub_0fef94
 * strings: "MothEgg"
 */
int CMothEgg_ctor(int a0, u32 a1) {
    u32 uVar1;
    u32 ar6_00;
    int ar6_01;
    u32 ar7_00;
    u32 in_fr1;
    char cVar2;

    cVar2 = '\0';
    ar7_00 = 0x17;
    ar6_00 = 1;
    uVar1 = 0xb;
    CAnimal_ctor(a0, 0xb, 1, 0x17, 1, a1, 0x8c28476c, 0x8c28489c, PTR_s_GRAPHICS_MOTHLINE_8c13a9bc);
    *(u8 **)(a0 + 8) = &g_8c12a7f4;
    Class_129938_ctor(a0 + 0x490, uVar1, ar6_00);
    Class_129c24_ctor(a0 + 0x530, uVar1, ar6_00);
    Class_129cbc_ctor(a0 + 0x5cc, uVar1, ar6_00, ar7_00);
    sprintf(a0 + 0xc, uVar1, ar6_00, ar7_00, "MothEgg");
    *(int *)(a0 + 0x308) = a0 + 0x530;
    *(int *)(a0 + 0x30c) = a0 + 0x5cc;
    *(u8 *)(a0 + 0x524) = 0xff;
    ar6_01 = a0 + 0x490;
    uVar1 = *(u32 *)(*(int *)(a0 + 0x328) + 0xb4);
    game_sub_0f532c(a0, uVar1, ar6_01, ar7_00);
    noop_027224(a0 + 0x5cc, uVar1, ar6_01, ar7_00, a1);
    if (cVar2 != '\0') {
        in_fr1 = 0x40000000;
    }
    (**(code **)(*(int *)(a0 + 0xa8) + 0x28))((int *)(a0 + 0xa8), a0 + 0x30, ar6_01, ar7_00);
    *(u32 *)(a0 + 0x330) = 0;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x528) = 0;
    } else {
        *(u64 *)(a0 + 0x528) = (u64)in_fr1;
    }
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x52c) = 0;
    } else {
        *(u64 *)(a0 + 0x52c) = (u64)in_fr1;
    }
    return a0;
}

/*
 * Class_12a7f4_m0_099fd8  0x8c099fd8
 */
int Class_12a7f4_m0_099fd8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12a7f4;
        Class_129cbc_dtor(a0 + 0x5cc, 0xffffffff, a2, a3);
        Class_129c24_dtor(a0 + 0x530, 0xffffffff, a2, a3);
        Class_129938_dtor(a0 + 0x490, 0xffffffff, a2, a3);
        ar5_00 = 0;
        CAnimal_m0_025688(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12a7f4_m2_09a060  0x8c09a060
 */
u32 Class_12a7f4_m2_09a060(int a0, u32 a1, u32 a2, int *a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    int *a7;
    float fVar6;
    u64 in_dr0;
    float fVar8;
    double dVar7;
    u32 in_fr3;
    double dVar9;
    u64 in_xd0;
    bool bVar10;
    char cVar11;
    char cVar12;

    cVar12 = '\0';
    cVar11 = '\0';
    if ((*(u32 *)(a0 + 0x74) & 0x40) == 0x40) {
        *(float *)(a0 + 0x34) = *(float *)(a0 + 0x34) - *(float *)(a0 + 0x52c);
        *(float *)(a0 + 0x52c) = *(float *)(a0 + 0x52c) + 0.5;
        fVar6 = *(float *)(a0 + 0x52c);
        in_dr0 = CONCAT44(0x41200000, fVar6);
        if (10.0 < fVar6) {
            in_dr0 = CONCAT44(0x41200000, fVar6);
            *(u32 *)(a0 + 0x52c) = 0x41200000;
        }
    }
    iVar4 = (int)*(char *)(a0 + 0x524);
    a7 = a3;
    if ((iVar4 < 4) && (-2 < iVar4)) {
        switch (iVar4) {
        case 0:
            uVar5 = a1;
            uVar3 = a2;
            uVar1 = get_field_a4_s16(a1, a1);
            fVar6 = (float)((u64)in_dr0 >> 0x20);
            iVar4 = get_field_c_02d1b8(a0 + 0x21c);
            if (*(int *)(a0 + 0x330) != 0) {
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10c))(*(int *)(a0 + 0x330), a1, a2, a7);
                uVar5 = 1;
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 1, a2, a7);
                set_vec3_field_30(*(u32 *)(a0 + 0x330), uVar5, a2);
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x144))(*(int *)(a0 + 0x330), uVar5, a2, a7);
                set_fields_5c_60_64(*(u32 *)(a0 + 0x330));
            }
            (**(code **)(*a3 + 0x188))(a3, uVar5, a2, a7);
            if (cVar12 == '\0') {
                fVar8 = 40.0;
            } else {
                fVar6 = 40.0;
                fVar8 = 4.59626e-43;
            }
            if (cVar11 != '\0' || fVar8 <= fVar6) {
                uVar2 = (**(code **)(*a3 + 0x148))(a3, uVar5, a2, a7);
                uVar2 = get_field_4e_s8(uVar2);
                if ((char)uVar2 < '\x04') {
                    a1 = 0x3c;
                    iVar4 = libgcc_divide_helper_0101e4((uVar1 & 0xffff) - iVar4, 0x3c);
                    if (0 < iVar4) {
                        *(u8 *)(a0 + 0x524) = 1;
                        uVar3 = (**(code **)(*a3 + 0x148))(a3, a1, a2, a7);
                        inc_field_4e_s8(uVar3);
                    }
                    break;
                }
            }
            uVar5 = get_field_a2_s16(a1, uVar5);
            uVar5 = uVar5 & 0xffff;
            set_field_8(a0 + 0x21c, uVar5);
            uVar5 = get_field_a4_s16(a1, uVar5);
            a1 = uVar5 & 0xffff;
            set_field_c(a0 + 0x21c, a1);
            break;
        case 1:
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10))(*(int *)(a0 + 0x330), a1, a2, a3);
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 0, a2, a7);
            a1 = *(u32 *)(a0 + 0x330);
            (**(code **)(*a3 + 0x4c))(a3, a1, a2, a7);
            mask_74_fffffffe(a0);
            *(u32 *)(a0 + 0x330) = 0;
            *(u8 *)(a0 + 0x524) = 2;
        case 2:
            fVar6 = (float)in_dr0;
            if (cVar12 == '\0') {
                fVar6 = *(float *)(a0 + 0x528);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x528);
            }
            if (cVar11 == '\0') {
                fVar6 = fVar6 + 1.0;
            } else {
                fVar6 = SUB84((double)CONCAT44(0x3f800000, fVar6) + (double)CONCAT44(0x3f800000, fVar6), 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x528) = fVar6;
            } else {
                *(u64 *)(a0 + 0x528) = in_xd0;
            }
            iVar4 = get_field_4_of_field_0(*(u32 *)(*(int *)(a0 + 0x328) + 0xa0));
            if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x528), in_fr3);
            } else {
                dVar9 = *(double *)(a0 + 0x528);
            }
            fVar6 = (float)(iVar4 + -1);
            dVar7 = (double)(u64)(u32)fVar6;
            if (cVar11 == '\0' && fVar6 < 0.0) {
                if (cVar12 == '\0') {
                    dVar7 = (double)CONCAT44(0x4f800000, fVar6);
                } else {
                    dVar7 = -8.508938065399998e+77;
                }
                if (cVar11 == '\0') {
                    fVar6 = (float)((u64)dVar7 >> 0x20);
                    dVar7 = (double)CONCAT44(fVar6, SUB84(dVar7, 0) + fVar6);
                } else {
                    dVar7 = dVar7 + dVar7;
                }
            }
            if (cVar11 == '\0') {
                bVar10 = (float)((u64)dVar9 >> 0x20) < SUB84(dVar7, 0);
            } else {
                bVar10 = dVar9 < dVar7;
            }
            if (!bVar10) {
                *(u8 *)(a0 + 0x524) = 3;
            }
            break;
        case -1:
            uVar3 = a2;
            uVar5 = get_field_a2_s16(a1, a1);
            uVar5 = uVar5 & 0xffff;
            set_field_8(a0 + 0x21c, uVar5);
            uVar5 = get_field_a4_s16(a1, uVar5);
            uVar5 = uVar5 & 0xffff;
            set_field_c(a0 + 0x21c, uVar5);
            if (*(int *)(a0 + 0x330) != 0) {
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10c))(*(int *)(a0 + 0x330), a1, a2, a3);
                uVar5 = 1;
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 1, a2, a3);
                set_vec3_field_30(*(u32 *)(a0 + 0x330), uVar5, a2);
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x144))(*(int *)(a0 + 0x330), uVar5, a2, a3);
                set_fields_5c_60_64(*(u32 *)(a0 + 0x330));
            }
            uVar3 = get_field_a4_s16(a1, uVar5);
            a1 = uVar5;
            a7 = a3;
            if ((u16)uVar3 < 5) {
                *(u8 *)(a0 + 0x524) = 0;
            }
        }
    }
    (**(code **)(*(int *)(a0 + 8) + 0xf8))(a0, a1, a2, a7);
    game_sub_0f79b8(a0 + 0xa0, a1, a2, a7);
    return 1;
}

/*
 * dec_counter_4d  0x8c09a528
 * decrements the byte counter at +0x4d
 */
u32 dec_counter_4d(int a0) {
    *(char *)(a0 + 0x4d) = *(char *)(a0 + 0x4d) + -1;
    return 0x4d;
}

/*
 * inc_field_4e_s8  0x8c09a540
 * called by: Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, game_sub_0cdf50
 */
u32 inc_field_4e_s8(int a0) {
    *(char *)(a0 + 0x4e) = *(char *)(a0 + 0x4e) + '\x01';
    return 0x4e;
}

/*
 * Class_12a7f4_m3_09a558  0x8c09a558
 */
u32 Class_12a7f4_m3_09a558(int a0, u32 a1, u32 a2, int *a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    int *a7;
    float fVar6;
    u64 in_dr0;
    float fVar8;
    double dVar7;
    u32 in_fr3;
    double dVar9;
    u64 in_xd0;
    bool bVar10;
    char cVar11;
    char cVar12;

    cVar12 = '\0';
    cVar11 = '\0';
    if ((*(u32 *)(a0 + 0x74) & 0x40) == 0x40) {
        *(float *)(a0 + 0x34) = *(float *)(a0 + 0x34) - *(float *)(a0 + 0x52c);
        *(float *)(a0 + 0x52c) = *(float *)(a0 + 0x52c) + 0.5;
        fVar6 = *(float *)(a0 + 0x52c);
        in_dr0 = CONCAT44(0x41200000, fVar6);
        if (10.0 < fVar6) {
            in_dr0 = CONCAT44(0x41200000, fVar6);
            *(u32 *)(a0 + 0x52c) = 0x41200000;
        }
    }
    iVar4 = (int)*(char *)(a0 + 0x524);
    a7 = a3;
    if ((iVar4 < 4) && (-2 < iVar4)) {
        switch (iVar4) {
        case 0:
            uVar5 = a1;
            uVar3 = a2;
            uVar1 = get_field_a4_s16(a1, a1);
            fVar6 = (float)((u64)in_dr0 >> 0x20);
            iVar4 = get_field_c_02d1b8(a0 + 0x21c);
            if (*(int *)(a0 + 0x330) != 0) {
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10c))(*(int *)(a0 + 0x330), a1, a2, a7);
                uVar5 = 1;
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 1, a2, a7);
                set_vec3_field_30(*(u32 *)(a0 + 0x330), uVar5, a2);
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x144))(*(int *)(a0 + 0x330), uVar5, a2, a7);
                set_fields_5c_60_64(*(u32 *)(a0 + 0x330));
            }
            (**(code **)(*a3 + 0x188))(a3, uVar5, a2, a7);
            if (cVar12 == '\0') {
                fVar8 = 40.0;
            } else {
                fVar6 = 40.0;
                fVar8 = 4.59626e-43;
            }
            if (cVar11 != '\0' || fVar8 <= fVar6) {
                uVar2 = (**(code **)(*a3 + 0x148))(a3, uVar5, a2, a7);
                uVar2 = get_field_4e_s8(uVar2);
                if ((char)uVar2 < '\x04') {
                    a1 = 0x3c;
                    iVar4 = libgcc_divide_helper_0101e4((uVar1 & 0xffff) - iVar4, 0x3c);
                    if (0 < iVar4) {
                        *(u8 *)(a0 + 0x524) = 1;
                        uVar3 = (**(code **)(*a3 + 0x148))(a3, a1, a2, a7);
                        inc_field_4e_s8(uVar3);
                    }
                    break;
                }
            }
            uVar5 = get_field_a2_s16(a1, uVar5);
            uVar5 = uVar5 & 0xffff;
            set_field_8(a0 + 0x21c, uVar5);
            uVar5 = get_field_a4_s16(a1, uVar5);
            a1 = uVar5 & 0xffff;
            set_field_c(a0 + 0x21c, a1);
            break;
        case 1:
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x14))(*(int *)(a0 + 0x330), a1, a2, a3);
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 0, a2, a7);
            a1 = *(u32 *)(a0 + 0x330);
            (**(code **)(*a3 + 0x4c))(a3, a1, a2, a7);
            mask_74_fffffffe(a0);
            *(u32 *)(a0 + 0x330) = 0;
            *(u8 *)(a0 + 0x524) = 2;
        case 2:
            fVar6 = (float)in_dr0;
            if (cVar12 == '\0') {
                fVar6 = *(float *)(a0 + 0x528);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x528);
            }
            if (cVar11 == '\0') {
                fVar6 = fVar6 + 1.0;
            } else {
                fVar6 = SUB84((double)CONCAT44(0x3f800000, fVar6) + (double)CONCAT44(0x3f800000, fVar6), 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x528) = fVar6;
            } else {
                *(u64 *)(a0 + 0x528) = in_xd0;
            }
            iVar4 = get_field_4_of_field_0(*(u32 *)(*(int *)(a0 + 0x328) + 0xa0));
            if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x528), in_fr3);
            } else {
                dVar9 = *(double *)(a0 + 0x528);
            }
            fVar6 = (float)(iVar4 + -1);
            dVar7 = (double)(u64)(u32)fVar6;
            if (cVar11 == '\0' && fVar6 < 0.0) {
                if (cVar12 == '\0') {
                    dVar7 = (double)CONCAT44(0x4f800000, fVar6);
                } else {
                    dVar7 = -8.508938065399998e+77;
                }
                if (cVar11 == '\0') {
                    fVar6 = (float)((u64)dVar7 >> 0x20);
                    dVar7 = (double)CONCAT44(fVar6, SUB84(dVar7, 0) + fVar6);
                } else {
                    dVar7 = dVar7 + dVar7;
                }
            }
            if (cVar11 == '\0') {
                bVar10 = (float)((u64)dVar9 >> 0x20) < SUB84(dVar7, 0);
            } else {
                bVar10 = dVar9 < dVar7;
            }
            if (!bVar10) {
                *(u8 *)(a0 + 0x524) = 3;
            }
            break;
        case -1:
            uVar3 = a2;
            uVar5 = get_field_a2_s16(a1, a1);
            uVar5 = uVar5 & 0xffff;
            set_field_8(a0 + 0x21c, uVar5);
            uVar5 = get_field_a4_s16(a1, uVar5);
            uVar5 = uVar5 & 0xffff;
            set_field_c(a0 + 0x21c, uVar5);
            if (*(int *)(a0 + 0x330) != 0) {
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10c))(*(int *)(a0 + 0x330), a1, a2, a3);
                uVar5 = 1;
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 1, a2, a3);
                set_vec3_field_30(*(u32 *)(a0 + 0x330), uVar5, a2);
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x144))(*(int *)(a0 + 0x330), uVar5, a2, a3);
                set_fields_5c_60_64(*(u32 *)(a0 + 0x330));
            }
            uVar3 = get_field_a4_s16(a1, uVar5);
            a1 = uVar5;
            a7 = a3;
            if ((u16)uVar3 < 5) {
                *(u8 *)(a0 + 0x524) = 0;
            }
        }
    }
    (**(code **)(*(int *)(a0 + 8) + 0xf8))(a0, a1, a2, a7);
    game_sub_0f79b8(a0 + 0xa0, a1, a2, a7);
    return 1;
}

/*
 * ret_const_1_09aa20  0x8c09aa20
 */
u32 ret_const_1_09aa20(void) {
    return 1;
}

/*
 * Class_12a7f4_m6_09aa28  0x8c09aa28
 */
u32 Class_12a7f4_m6_09aa28(u32 a0) {
    u32 uVar1;

    uVar1 = CAnimal_set_state_flag_40(a0);
    return uVar1;
}

/*
 * Class_12a7f4_m5_09aa48  0x8c09aa48
 */
u32 Class_12a7f4_m5_09aa48(u32 a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    int iVar1;
    u32 uVar2;
    u32 uStack_4;

    iVar1 = -0x7d0;
    *(u32 *)((int)&uStack_4 + iVar1) = a0;
    game_sub_0b7a54((int)&s0 + iVar1);
    CAnimal_set_state_flag_40(*(u32 *)((int)&uStack_4 + iVar1), (int)&s0 + iVar1, a2, a3);
    uVar2 = dtor_delete_with_ac((int)&s0 + iVar1, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * Class_12a7f4_m4_09aa8c  0x8c09aa8c
 */
u32 Class_12a7f4_m4_09aa8c(u32 a0) {
    u32 uVar1;

    uVar1 = CAnimal_set_state_flag_40(a0);
    return uVar1;
}

/*
 * set_state_flag_40_74_wrap  0x8c09aaac
 * only calls set_state_flag_40_74
 */
u32 set_state_flag_40_74_wrap(u32 a0) {
    u32 uVar1;

    uVar1 = set_state_flag_40_74(a0);
    return uVar1;
}

/*
 * noop_09aac8  0x8c09aac8
 */
u32 noop_09aac8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_09aacc  0x8c09aacc
 */
u32 noop_09aacc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * Class_12a7f4_sub_09aad0  0x8c09aad0
 * area name: sits between Class_12a7f4 functions (same compilation unit)
 */
u32 Class_12a7f4_sub_09aad0(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u32 ar5_00;
    u32 ar6_00;
    float fVar2;
    double dVar3;
    int ar7_00;
    int ar6_01;
    int ar5_01;
    char cVar4;
    char cVar5;
    u32 in_stack_ffffffec;

    cVar5 = '\0';
    cVar4 = '\0';
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, a1, a2);
    matrix_push(0, a1, a2, r7, in_stack_ffffffec);
    touch_fields_30_3c(0, a1, a2, r7, in_stack_ffffffec);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar3 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x43b40000, fVar2);
    } else {
        dVar3 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar7_00 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        ar7_00 = (int)(dVar3 / dVar3);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar3 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x43b40000, fVar2);
    } else {
        dVar3 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar6_01 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        ar6_01 = (int)(dVar3 / dVar3);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar3 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x43b40000, fVar2);
    } else {
        dVar3 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar5_01 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        ar5_01 = (int)(dVar3 / dVar3);
    }
    njRotateXYZ(0, ar5_01, ar6_01, ar7_00, in_stack_ffffffec);
    matrix_scale(0, ar5_01, ar6_01, ar7_00, in_stack_ffffffec);
    uVar1 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
    ar5_00 = deref_u32(*(u32 *)(*(int *)(a0 + 0x328) + 0xa0));
    ar6_00 = get_field_0_026d74(*(u32 *)(*(int *)(a0 + 0x328) + 0xa8));
    gfxlib_sub_21bbb0(uVar1, ar5_00, ar6_00, ar7_00, ar6_00);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_12a7f4_sub_09abfc  0x8c09abfc
 * area name: sits between Class_12a7f4 functions (same compilation unit)
 */
u32 Class_12a7f4_sub_09abfc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_set_texlist(*(int *)(0x328 + a0) + 0x78, a1, a2);
    uVar1 = get_field_0_015bb8(*(int *)(0x328 + a0) + 0x70);
    gfxlib_sub_219a9a(uVar1, a1, a2, a3);
    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = (**(code **)(*(int *)(*(int *)(0x330 + a0) + 8) + 0x3c))(*(int *)(0x330 + a0), a1, a2, a3);
    }
    return uVar1;
}

/*
 * vcall_field_8_slot15  0x8c09ac58
 * calls virtual slot 15 of the object at +0x8
 */
u32 vcall_field_8_slot15(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x3c))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * child_330_tick_09ac70  0x8c09ac70
 * calls slot 0x5c of the child object at +0x330 when there is one
 */
u32 child_330_tick_09ac70(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    noop_038c8c();
    uVar1 = 0;
    if (*(int *)(a0 + 0x330) != 0) {
        uVar1 = (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x5c))(*(int *)(a0 + 0x330), a1, a2, a3);
    }
    return uVar1;
}

/*
 * game_sub_09aca8  0x8c09aca8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_09aca8(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int a6;
    u32 uVar1;

    a6 = CItemGLoader_sub_0fef94(a1, 10, 0x11, a3);
    uVar1 = 0;
    if (a6 != 0) {
        uVar1 = (**(code **)(0x100 + *(int *)(a0 + 8)))(a0, 0, a6, a3);
    }
    return uVar1;
}

/*
 * game_sub_09acf4  0x8c09acf4
 * area name: game code; nothing names its area yet
 */
int game_sub_09acf4(int a0, u32 unused_a1, u32 a2) {
    int iVar1;

    iVar1 = 0x330;
    *(u32 *)(0x330 + a0) = a2;
    return iVar1;
}

/*
 * child_330_release_09ad00  0x8c09ad00
 * releases the child object at +0x330 through the item loader
 */
u32 child_330_release_09ad00(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = game_sub_0ff500(a1, a0 + 0x330, a2, a3);
    }
    return uVar1;
}

/*
 * load_state_record_09ad34  0x8c09ad34
 * restores object state, status and the 15 bytes at +0x2dc from save record a1
 */
u32 load_state_record_09ad34(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_state_load(a0, a1, a2, a3);
    game_sub_02cbe4(a0 + 0x174, a1 + 0x4c, a2, a3);
    uVar1 = copy15_in_normalize(a0 + 0x2dc, a1 + 0xd8);
    return uVar1;
}

/*
 * load_pose_record_09ad94  0x8c09ad94
 * restores pose, status and the 15 bytes at +0x2dc from save record a1
 */
u32 load_pose_record_09ad94(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_pose_load(a0, a1, a2, a3);
    status_load_record(a0 + 0x174, a1 + 0x24);
    uVar1 = copy15_in_normalize(a0 + 0x2dc, a1 + 0x58);
    return uVar1;
}

/*
 * save_state_record_09adec  0x8c09adec
 * stores object state, status and the 15 bytes at +0x2dc into save record a1
 */
u32 save_state_record_09adec(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_state_save(a0, a1, a2, a3);
    game_sub_02cf20(a0 + 0x174, a1 + 0x4c, a2);
    uVar1 = copy15_out(a0 + 0x2dc, a1 + 0xd8);
    return uVar1;
}

/*
 * save_pose_record_09ae4c  0x8c09ae4c
 * stores pose, status and the 15 bytes at +0x2dc into save record a1
 */
u32 save_pose_record_09ae4c(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_pose_save(a0, a1, a2, a3);
    CAnimal_sub_02d1f4(a0 + 0x174, a1 + 0x24, a2);
    uVar1 = copy15_out(a0 + 0x2dc, a1 + 0x58);
    return uVar1;
}

/*
 * CMothEgg_LoadGRReq  0x8c09aea4
 * strings: "Kidsptr is null.."; "CMothEgg::LoadGRReq()"
 */
u32 CMothEgg_LoadGRReq(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = 0;
    if (*(int *)(0x420 + a0) == 0) {
        iVar1 = CAnimal_LoadGRReq(a0, a1, a2);
        if (iVar1 == 1) {
            *(u32 *)(0x420 + a0) = 1;
        }
    } else if (*(int *)(0x420 + a0) == 1) {
        if (*(int *)(0x330 + a0) == 0) {
            (*(code *)(&report_error_message))("Kidsptr is null..", "CMothEgg::LoadGRReq()", 0, 2);
            *(u32 *)(0x420 + a0) = 0;
            uVar2 = 1;
        } else {
            iVar1 = (**(code **)(0xdc + *(int *)(*(int *)(0x330 + a0) + 8)))(*(int *)(0x330 + a0), a1, 0, a3);
            if (iVar1 == 1) {
                *(u16 *)(0x41c + a0) = 0;
                *(u32 *)(0x420 + a0) = 0;
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}

/*
 * egg_load_gr_wait_09af68  0x8c09af68
 * CAnimal_LoadGRWait, then the same for the child object at +0x330
 */
u32 egg_load_gr_wait_09af68(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CAnimal_LoadGRWait(a0, a1, a2, a3);
    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = (**(code **)(0xe0 + *(int *)(*(int *)(0x330 + a0) + 8)))(*(int *)(0x330 + a0), a1, 0, a3);
    }
    return uVar1;
}

/*
 * CMothEgg_sub_09afb8  0x8c09afb8
 * area name: sits between CMothEgg functions (same compilation unit)
 */
u32 CMothEgg_sub_09afb8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CMothLine_sub_028afc(a0, a1, a2);
    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = (**(code **)(0xec + *(int *)(*(int *)(0x330 + a0) + 8)))(*(int *)(0x330 + a0), a1, 0, a3);
    }
    return uVar1;
}

/*
 * MothEgg_asset_table_init  0x8c09b008
 * fills the moth egg asset table (Cpe_Home.nj, Cpe_BeCatapillar, MOTH_EGG)
 * called by: game_init_sound_and_messages
 */
u32 MothEgg_asset_table_init(void) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u8 ***)(iVar1 * 0x124 + 0x8c284770) = &PTR_s_Cpe_BeCatapillar_njm_8c13a9c8;
        *(u8 ***)(iVar1 * 0x124 + 0x8c284774) = &PTR_s_Cpe_BeCatapillar_njs_8c13a9cc;
        *(u8 **)(iVar1 * 0x124 + 0x8c284778) = PTR_s_Cpe_Home_nj_8c13a9c0;
        *(u32 *)(iVar1 * 0x124 + 0x8c28477c) = 0;
        *(u8 **)(iVar1 * 0x124 + 0x8c284780) = PTR_s_MOTH_EGG_8c13a9c4;
        *(u32 *)(iVar1 * 0x124 + 0x8c284784) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c28480c) = 0x8c2848b8;
        *(u16 *)(iVar1 * 0x124 + 0x8c284810) = 1;
        *(u32 *)(iVar1 * 0x124 + 0x8c284814) = 0x8c2848c8;
        *(u16 *)(iVar1 * 0x124 + 0x8c284818) = 1;
        *(u32 *)(iVar1 * 0x124 + 0x8c284820) = 0x8c2849b8;
        *(u32 *)(iVar1 * 0x124 + 0x8c284828) = 0x3f800000;
        *(u32 *)(iVar1 * 0x124 + 0x8c284838) = 0x3ca3d70a;
        *(u32 *)(iVar1 * 0x124 + 0x8c28483c) = 0x3f4ccccd;
        *(u32 *)(iVar1 * 0x124 + 0x8c284840) = 0x42c80000;
    }
    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u16 *)(iVar1 * 0x10 + 0x8c28489c) = 0xffff;
        *(u32 *)(iVar1 * 0x10 + 0x8c2848a0) = 0;
        *(u32 *)(iVar1 * 0x10 + 0x8c2848a4) = 1;
        *(u32 *)(iVar1 * 0x10 + 0x8c2848a8) = 0;
    }
    return 1;
}

/*
 * ret_const_1_09b208  0x8c09b208
 */
u32 ret_const_1_09b208(void) {
    return 1;
}

/*
 * game_sub_09b210  0x8c09b210
 * area name: game code; nothing names its area yet
 */
u32 game_sub_09b210(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126080, a1, a2, a3);
    uVar3 = 0x8c284730;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284730, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126090, pcVar2, uVar3, a3);
    uVar3 = 0x8c28473c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28473c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1260a0, pcVar2, uVar3, a3);
    uVar3 = 0x8c284748;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284748, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1260b0, pcVar2, uVar3, a3);
    uVar3 = 0x8c284754;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284754, a3);
    if (cVar4 == '\0') {
        g_8c1260c0 = CONCAT44(_UNK_8c1260c4, 0x800000);
        /* WARNING: Read-only address (ram,0x8c1260c4) is written */
    } else {
        g_8c1260c0 = 0xffffffff00800000;
    }
    uVar1 = game_sub_02452c(0x8c28476c, pcVar2);
    uVar3 = 0x8c284760;
    pcVar2 = game_sub_03a4ac;
    global_list_push(uVar1, game_sub_03a4ac, 0x8c284760, a3);
    uVar1 = game_sub_024824(0x8c28489c);
    uVar3 = 0x8c284890;
    pcVar2 = free_if_nonnull_wrap_03a454;
    global_list_push(uVar1, free_if_nonnull_wrap_03a454, 0x8c284890, a3);
    uVar1 = clear_field_0_wrap_015b94(0x8c2848b8, pcVar2);
    uVar3 = 0x8c2848ac;
    pcVar2 = free_if_nonnull_wrap_0247b0;
    global_list_push(uVar1, free_if_nonnull_wrap_0247b0, 0x8c2848ac, a3);
    uVar1 = clear_field_0_wrap_015bc8(0x8c2848c8);
    uVar3 = 0x8c2848bc;
    pcVar2 = free_if_nonnull_wrap_03a3dc;
    global_list_push(uVar1, free_if_nonnull_wrap_03a3dc, 0x8c2848bc, a3);
    uVar1 = Vec3_ctor_xyz(0x8c2848d8, pcVar2, uVar3, a3);
    uVar3 = 0x8c2848cc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2848cc, a3);
    uVar1 = Vec3_ctor_xyz(0x8c2848f4, pcVar2, uVar3, a3);
    uVar3 = 0x8c2848e8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2848e8, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284910, pcVar2, uVar3, a3);
    uVar3 = 0x8c284904;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284904, a3);
    uVar1 = Vec3_ctor_xyz(0x8c28492c, pcVar2, uVar3, a3);
    uVar3 = 0x8c284920;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284920, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284948, pcVar2, uVar3, a3);
    uVar3 = 0x8c28493c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28493c, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284964, pcVar2, uVar3, a3);
    uVar3 = 0x8c284958;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284958, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284980, pcVar2, uVar3, a3);
    uVar3 = 0x8c284974;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284974, a3);
    uVar1 = Vec3_ctor_xyz(0x8c28499c, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c284990, a3);
    uVar3 = 0x8c284910;
    uVar1 = Class_129938_ctor_init(0x8c2849b8, 0x8c2848d8, 0x8c2848f4, 0x8c284910, 0x8c28492c, 0x8c284948, 0x8c284964,
                                   0x8c284980, 0x8c28499c);
    uVar1 = global_list_push(uVar1, Class_129938_dtor, 0x8c2849ac, uVar3);
    return uVar1;
}

/*
 * CMushroomerEgg_sub_09b508  0x8c09b508
 * area name: only called from CMushroomerEgg methods
 * called by: CMushroomerEgg_ctor
 */
int CMushroomerEgg_sub_09b508(int a0) {
    Vec3_set_one(a0);
    Vec3_set_one(a0 + 0xc);
    Vec3_set_one(a0 + 0x18);
    game_sub_09b844(a0);
    return a0;
}

/*
 * Class_12a990_sub_09b544  0x8c09b544
 * area name: only called from Class_12a990 methods
 * called by: Class_12a990_m6_09c6a4
 */
float *Class_12a990_sub_09b544(u64 *a0, u32 a1, u32 a2) {
    float *pfVar1;
    int iVar2;
    float fVar3;
    double dVar4;
    float fVar7;
    u64 uVar5;
    u64 uVar6;
    u64 in_xd0;
    char cVar8;
    char cVar9;

    cVar9 = '\0';
    cVar8 = '\0';
    pfVar1 = *(float **)((int)a0 + 0x24);
    if ((int)pfVar1 <= *(int *)((int)a0 + 0x2c) - *(int *)(a0 + 5)) {
        *(u32 *)(a0 + 5) = *(u32 *)((int)a0 + 0x2c);
        iVar2 = rand();
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
        } else {
            dVar4 = 2.0716562097687757e+17;
        }
        if (cVar8 == '\0') {
            fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 / dVar4, 0);
        }
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(0x43870000, fVar3);
        } else {
            dVar4 = 85899363207.0;
        }
        if (cVar8 == '\0') {
            fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(0x42340000, fVar3);
        } else {
            dVar4 = 3.051758565142393e-05;
        }
        if (cVar8 == '\0') {
            fVar7 = (float)((u64)dVar4 >> 0x20);
            fVar3 = SUB84(dVar4, 0) + fVar7;
            dVar4 = (double)CONCAT44(fVar7, fVar3);
            iVar2 = (int)fVar3;
        } else {
            dVar4 = dVar4 + dVar4;
            iVar2 = (int)dVar4;
        }
        *(int *)((int)a0 + 0x24) = iVar2;
        if (cVar9 == '\0') {
            dVar4 = (double)(u64) * (u32 *)(a0 + 3);
        } else {
            in_xd0 = a0[3];
        }
        uVar5 = (u64)dVar4 & 0xffffffff;
        if (SUB84(dVar4, 0) == 0.0) {
            iVar2 = rand();
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
            } else {
                dVar4 = 2.0716562097687757e+17;
            }
            if (cVar8 == '\0') {
                fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 / dVar4, 0);
            }
            if (cVar9 == '\0') {
                uVar5 = CONCAT44(0x3f000000, fVar3);
            } else {
                uVar5 = 0x3e0f5c293f000000;
            }
            if (cVar8 == '\0' && (float)uVar5 < (float)(uVar5 >> 0x20)) {
                iVar2 = rand();
                if (cVar9 == '\0') {
                    dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
                } else {
                    dVar4 = 2.0716562097687757e+17;
                }
                if (cVar8 == '\0') {
                    fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 / dVar4, 0);
                }
                if (cVar9 == '\0') {
                    dVar4 = (double)CONCAT44(0x3e0f5c29, fVar3);
                } else {
                    dVar4 = 0.0036718756750633475;
                }
                if (cVar8 == '\0') {
                    fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 * dVar4, 0);
                }
                if (cVar9 == '\0') {
                    dVar4 = (double)CONCAT44(0x3f6e147b, fVar3);
                } else {
                    dVar4 = 1.971999614954473e-24;
                }
                if (cVar8 == '\0') {
                    fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 + dVar4, 0);
                }
                if (cVar9 == '\0') {
                    *(float *)((int)a0 + 0xc) = fVar3;
                    fVar3 = *(float *)((int)a0 + 0xc);
                } else {
                    *(u64 *)((int)a0 + 0xc) = in_xd0;
                    in_xd0 = *(u64 *)((int)a0 + 0xc);
                }
                if (fVar3 == 1.0) {
                    if (cVar9 == '\0') {
                        *(u32 *)((int)a0 + 0xc) = 0x3f6e147b;
                    } else {
                        *(u64 *)((int)a0 + 0xc) = 0x3b03126f3f6e147b;
                    }
                }
                if (cVar9 == '\0') {
                    uVar6 = CONCAT44(*(u32 *)a0, *(u32 *)((int)a0 + 0xc));
                } else {
                    in_xd0 = *(u64 *)((int)a0 + 0xc);
                    uVar6 = *a0;
                }
                fVar3 = (float)uVar6;
                if (cVar8 != '\0' || fVar3 <= (float)((u64)uVar6 >> 0x20)) {
                    if (cVar9 == '\0') {
                        uVar5 = CONCAT44(0xbb03126f, fVar3);
                        *(u32 *)(a0 + 3) = 0xbb03126f;
                    } else {
                        uVar5 = 0x4f222fe6bb03126f;
                        a0[3] = 0x4f222fe6bb03126f;
                    }
                } else if (cVar9 == '\0') {
                    uVar5 = CONCAT44(0x3b03126f, fVar3);
                    *(u32 *)(a0 + 3) = 0x3b03126f;
                } else {
                    uVar5 = 0xbb03126f3b03126f;
                    a0[3] = 0xbb03126f3b03126f;
                }
            }
        }
        fVar3 = (float)uVar5;
        pfVar1 = (float *)((int)a0 + 0x1c);
        if (cVar9 == '\0') {
            fVar3 = *pfVar1;
        } else {
            in_xd0 = *(u64 *)pfVar1;
        }
        if (fVar3 == 0.0) {
            iVar2 = rand();
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
            } else {
                dVar4 = 2.0716562097687757e+17;
            }
            if (cVar8 == '\0') {
                fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 / dVar4, 0);
            }
            pfVar1 = (float *)&g_8c09b6b0;
            if (cVar9 == '\0') {
                fVar7 = 0.5;
            } else {
                fVar3 = 0.5;
                fVar7 = 0.14;
            }
            if (cVar8 == '\0' && fVar3 < fVar7) {
                iVar2 = rand();
                if (cVar9 == '\0') {
                    dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
                } else {
                    dVar4 = 2.0716562097687757e+17;
                }
                if (cVar8 == '\0') {
                    fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 / dVar4, 0);
                }
                if (cVar9 == '\0') {
                    dVar4 = (double)CONCAT44(0x3e0f5c29, fVar3);
                } else {
                    dVar4 = 0.0036718756750633475;
                }
                if (cVar8 == '\0') {
                    fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 * dVar4, 0);
                }
                if (cVar9 == '\0') {
                    dVar4 = (double)CONCAT44(0x3f6e147b, fVar3);
                } else {
                    dVar4 = 1.971999614954473e-24;
                }
                if (cVar8 == '\0') {
                    fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 + dVar4, 0);
                }
                if (cVar9 == '\0') {
                    *(float *)(a0 + 2) = fVar3;
                    fVar3 = *(float *)(a0 + 2);
                } else {
                    a0[2] = in_xd0;
                }
                if (fVar3 == 1.0) {
                    if (cVar9 == '\0') {
                        *(u32 *)(a0 + 2) = 0x3f6e147b;
                    } else {
                        a0[2] = 0x3b03126f3f6e147b;
                    }
                }
                if (cVar9 == '\0') {
                    uVar6 = CONCAT44(*(u32 *)((int)a0 + 4), *(u32 *)(a0 + 2));
                } else {
                    uVar6 = *(u64 *)((int)a0 + 4);
                }
                if (cVar8 != '\0' || (float)uVar6 <= (float)((u64)uVar6 >> 0x20)) {
                    pfVar1 = (float *)&g_8c09b6c0;
                    if (cVar9 == '\0') {
                        *(u32 *)((int)a0 + 0x1c) = 0xbb03126f;
                    } else {
                        *(u64 *)((int)a0 + 0x1c) = 0x4f222fe6bb03126f;
                    }
                } else {
                    pfVar1 = (float *)&g_8c09b6bc;
                    if (cVar9 == '\0') {
                        *(u32 *)((int)a0 + 0x1c) = 0x3b03126f;
                    } else {
                        *(u64 *)((int)a0 + 0x1c) = 0xbb03126f3b03126f;
                    }
                }
            }
        }
    }
    return pfVar1;
}

/*
 * Class_12a990_sub_09b6c4  0x8c09b6c4
 * area name: only called from Class_12a990 methods
 * called by: Class_12a990_m6_09c6a4
 */
float Class_12a990_sub_09b6c4(float *a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    float *ar4_00;
    float fVar1;
    u64 in_dr0;
    u64 uVar2;
    double dVar3;
    float fVar4;
    u64 in_xd0;
    char cVar5;
    char cVar6;
    u32 in_stack_ffffffdc;

    cVar6 = '\0';
    cVar5 = '\0';
    ar4_00 = a0;
    float_check_errno(a0, r5, r6, r7, in_stack_ffffffdc);
    if (cVar6 == '\0') {
        uVar2 = CONCAT44(0x3b03126f, (int)(in_dr0 >> 0x20));
        in_dr0 = in_xd0;
    } else {
        uVar2 = 0x4f222fe63b03126f;
    }
    if (cVar5 != '\0' || (float)(uVar2 >> 0x20) <= (float)uVar2) {
        if (cVar6 == '\0') {
            dVar3 = (double)CONCAT44(a0[6], *a0);
        } else {
            in_dr0 = *(u64 *)a0;
            dVar3 = *(double *)(a0 + 6);
        }
        if (cVar5 == '\0') {
            fVar1 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
        } else {
            fVar1 = SUB84(dVar3 + dVar3, 0);
        }
        if (cVar6 == '\0') {
            *a0 = fVar1;
            fVar1 = a0[6];
        } else {
            *(u64 *)a0 = in_dr0;
            in_dr0 = *(u64 *)(a0 + 6);
        }
        uVar2 = (u64)(u32)fVar1;
        if (cVar5 == '\0' && fVar1 < 0.0) {
        LAB_8c09b712:
            fVar1 = (float)uVar2;
            if (cVar6 == '\0') {
                fVar1 = a0[6];
            } else {
                in_dr0 = *(u64 *)(a0 + 6);
            }
            uVar2 = (u64)(u32)fVar1;
            if (cVar5 == '\0' && fVar1 < 0.0) {
                if (cVar6 == '\0') {
                    uVar2 = CONCAT44(a0[3], *a0);
                } else {
                    in_dr0 = *(u64 *)a0;
                    uVar2 = *(u64 *)(a0 + 3);
                }
                if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20))
                    goto LAB_8c09b72a;
            }
        } else {
            if (cVar6 == '\0') {
                uVar2 = CONCAT44(a0[3], *a0);
            } else {
                in_dr0 = *(u64 *)a0;
                uVar2 = *(u64 *)(a0 + 3);
            }
            if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20))
                goto LAB_8c09b712;
        LAB_8c09b72a:
            fVar1 = (float)uVar2;
            if (cVar6 == '\0') {
                fVar1 = a0[3];
            } else {
                in_dr0 = *(u64 *)(a0 + 3);
            }
            if (fVar1 == 1.0) {
                if (cVar6 == '\0') {
                    a0[3] = 1.0;
                    *a0 = 1.0;
                } else {
                    *(u64 *)(a0 + 3) = CONCAT44(0x3f800000, fVar1);
                    *(u64 *)a0 = CONCAT44(0x3f800000, fVar1);
                }
                uVar2 = (u64)(u32)fVar1;
                if (cVar6 == '\0') {
                    a0[6] = 0.0;
                } else {
                    *(u64 *)(a0 + 6) = uVar2;
                }
            } else {
                if (cVar6 == '\0') {
                    dVar3 = (double)CONCAT44(a0[6], fVar1);
                } else {
                    dVar3 = *(double *)(a0 + 6);
                }
                if (cVar5 == '\0') {
                    dVar3 = (double)CONCAT44(-(float)((u64)dVar3 >> 0x20), SUB84(dVar3, 0));
                } else {
                    dVar3 = -dVar3;
                }
                if (cVar6 == '\0') {
                    a0[6] = (float)((u64)dVar3 >> 0x20);
                } else {
                    *(double *)(a0 + 6) = dVar3;
                }
                uVar2 = CONCAT44(0x3f800000, SUB84(dVar3, 0));
                if (cVar6 == '\0') {
                    a0[3] = 1.0;
                } else {
                    *(u64 *)(a0 + 3) = uVar2;
                }
            }
        }
    }
    float_check_errno(ar4_00, r5, r6, r7, in_stack_ffffffdc);
    fVar1 = (float)(uVar2 >> 0x20);
    if (cVar6 == '\0') {
        fVar4 = 0.002;
        uVar2 = in_dr0;
    } else {
        fVar1 = 0.002;
        fVar4 = 2.721048e+09;
    }
    if (cVar5 == '\0' && fVar1 < fVar4)
        goto LAB_8c09b826;
    if (cVar6 == '\0') {
        dVar3 = (double)CONCAT44(a0[7], a0[1]);
    } else {
        uVar2 = *(u64 *)(a0 + 1);
        dVar3 = *(double *)(a0 + 7);
    }
    if (cVar5 == '\0') {
        fVar1 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
    } else {
        fVar1 = SUB84(dVar3 + dVar3, 0);
    }
    if (cVar6 == '\0') {
        a0[1] = fVar1;
        fVar1 = a0[7];
    } else {
        *(u64 *)(a0 + 1) = uVar2;
    }
    uVar2 = (u64)(u32)fVar1;
    if (cVar5 == '\0' && fVar1 < 0.0) {
    LAB_8c09b7be:
        fVar1 = (float)uVar2;
        if (cVar6 == '\0') {
            fVar1 = a0[7];
        }
        if (cVar5 != '\0' || 0.0 <= fVar1)
            goto LAB_8c09b826;
        if (cVar6 == '\0') {
            uVar2 = CONCAT44(a0[4], a0[1]);
        } else {
            uVar2 = *(u64 *)(a0 + 4);
        }
        if (cVar5 != '\0' || (float)(uVar2 >> 0x20) <= (float)uVar2)
            goto LAB_8c09b826;
    } else {
        if (cVar6 == '\0') {
            uVar2 = CONCAT44(a0[4], a0[1]);
        } else {
            uVar2 = *(u64 *)(a0 + 4);
        }
        if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20))
            goto LAB_8c09b7be;
    }
    fVar1 = (float)uVar2;
    if (cVar6 == '\0') {
        fVar1 = a0[4];
    }
    if (fVar1 == 1.0) {
        if (cVar6 == '\0') {
            a0[4] = 1.0;
            a0[1] = 1.0;
        } else {
            *(u64 *)(a0 + 4) = CONCAT44(0x3f800000, fVar1);
            *(u64 *)(a0 + 1) = CONCAT44(0x3f800000, fVar1);
        }
        if (cVar6 == '\0') {
            a0[7] = 0.0;
        } else {
            *(u64 *)(a0 + 7) = (u64)(u32)fVar1;
        }
    } else {
        if (cVar6 == '\0') {
            dVar3 = (double)CONCAT44(a0[7], fVar1);
        } else {
            dVar3 = *(double *)(a0 + 7);
        }
        if (cVar5 == '\0') {
            dVar3 = (double)CONCAT44(-(float)((u64)dVar3 >> 0x20), SUB84(dVar3, 0));
        } else {
            dVar3 = -dVar3;
        }
        if (cVar6 == '\0') {
            a0[7] = (float)((u64)dVar3 >> 0x20);
        } else {
            *(double *)(a0 + 7) = dVar3;
        }
        if (cVar6 == '\0') {
            a0[4] = 1.0;
        } else {
            *(u64 *)(a0 + 4) = CONCAT44(0x3f800000, SUB84(dVar3, 0));
        }
    }
LAB_8c09b826:
    fVar1 = a0[0xb];
    a0[0xb] = (float)((int)fVar1 + 1);
    return (float)((int)fVar1 + 1);
}

/*
 * game_sub_09b844  0x8c09b844
 * area name: game code; nothing names its area yet
 * called by: CMushroomerEgg_sub_09b508
 */
u32 game_sub_09b844(int a0) {
    Vec3_set_one_08a9b8(a0);
    Vec3_set_one_08a9b8(a0 + 0xc);
    set_fields_8_4_0(a0 + 0x18);
    *(u32 *)(a0 + 0x24) = 0x2d;
    *(u32 *)(a0 + 0x28) = 0;
    *(u32 *)(a0 + 0x2c) = 0;
    return 0;
}

/*
 * Class_12a990_sub_09b88c  0x8c09b88c
 * area name: only called from Class_12a990 methods
 * called by: Class_12a990_m0_09bb44
 */
int Class_12a990_sub_09b88c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_016ac4(a0 + 0x18, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016ac4(a0 + 0xc, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_016ac4(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * CMushroomerEgg_ctor  0x8c09b8e4
 * "MushroomerEgg": CAnimal_ctor(kind 0) with GRAPHICS\MUSHROOMERLINE, vtable 0x8c12a990
 * called by: CItemGLoader_sub_0fef94
 * strings: "MushroomerEgg"
 */
int CMushroomerEgg_ctor(int a0, u32 a1) {
    u32 uVar1;
    code *ar5_00;
    u32 uVar2;
    code *ar6_00;
    int iVar3;
    u32 ar7_00;
    u32 in_fr1;
    u64 uVar4;
    char cVar5;

    cVar5 = '\0';
    ar7_00 = 0;
    uVar2 = 1;
    uVar1 = 0;
    CAnimal_ctor(a0, 0, 1, 0, 0, a1, 0x8c284a8c, 0x8c284bbc, PTR_s_GRAPHICS_MUSHROOMERLINE_8c13aa6c);
    *(u8 **)(a0 + 8) = &g_8c12a990;
    Class_129938_ctor(a0 + 0x490, uVar1, uVar2);
    vec_new_array(a0 + 0x544, Vec3_ctor_zero, Vec3_dtor, 0x10, 8);
    vec_new_array(a0 + 0x5c4, Vec3_ctor_zero, Vec3_dtor, 0x10, 8);
    uVar2 = 0x10;
    ar6_00 = Vec3_dtor;
    ar5_00 = Vec3_ctor_zero;
    vec_new_array(a0 + 0x644, Vec3_ctor_zero, Vec3_dtor, 0x10, 8);
    Class_129c24_ctor(a0 + 0x6e4, ar5_00, ar6_00);
    Class_129cbc_ctor(a0 + 0x780, ar5_00, ar6_00, uVar2);
    CMushroomerEgg_sub_09b508(a0 + 0x9a4);
    sprintf(a0 + 0xc, ar5_00, ar6_00, uVar2, "MushroomerEgg");
    *(u8 *)(a0 + 0x6e0) = 0xff;
    iVar3 = a0 + 0x490;
    uVar1 = *(u32 *)(*(int *)(a0 + 0x328) + 0xb4);
    game_sub_0f532c(a0, uVar1, iVar3, uVar2);
    noop_027224(a0 + 0x780, uVar1, iVar3, uVar2, a1);
    if (cVar5 != '\0') {
        in_fr1 = 0x40000000;
    }
    (**(code **)(*(int *)(a0 + 0xa8) + 0x28))((int *)(a0 + 0xa8), a0 + 0x30, iVar3, uVar2);
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        *(u32 *)(a0 + iVar3 * 4 + 0x524) = 0;
    }
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    *(int *)(a0 + 0x308) = a0 + 0x6e4;
    *(int *)(a0 + 0x30c) = a0 + 0x780;
    if (cVar5 == '\0') {
        *(u32 *)(a0 + 0x6c4) = 0;
    } else {
        *(u64 *)(a0 + 0x6c4) = (u64)in_fr1;
    }
    *(u8 *)(a0 + 0x9a0) = 0;
    if (cVar5 == '\0') {
        *(u32 *)(a0 + 0x6c8) = 0;
        *(u32 *)(a0 + 0x6cc) = 0x3e4ccccd;
        uVar4 = CONCAT44(0x3dcccccd, in_fr1);
        *(u32 *)(a0 + 0x6d0) = 0x3dcccccd;
    } else {
        *(u64 *)(a0 + 0x6c8) = (u64)in_fr1;
        *(u64 *)(a0 + 0x6cc) = 0x6d03e4ccccd;
        uVar4 = 0x6d43dcccccd;
        *(u64 *)(a0 + 0x6d0) = 0x6d43dcccccd;
    }
    if (cVar5 == '\0') {
        *(u32 *)(a0 + 0x6d4) = 0;
        *(u32 *)(a0 + 0x6d8) = 0x3e4ccccd;
        *(u32 *)(a0 + 0x6dc) = 0x3dcccccd;
    } else {
        *(u64 *)(a0 + 0x6d4) = uVar4 & 0xffffffff;
        *(u64 *)(a0 + 0x6d8) = 0x6d03e4ccccd;
        *(u64 *)(a0 + 0x6dc) = 0x6d43dcccccd;
    }
    *(u32 *)(a0 + 0x9d4) = 0;
    return a0;
}

/*
 * Class_12a990_m0_09bb44  0x8c09bb44
 */
int Class_12a990_m0_09bb44(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12a990;
        Class_12a990_sub_09b88c(a0 + 0x9a4, 0xffffffff, a2, a3);
        Class_129cbc_dtor(a0 + 0x780, 0xffffffff, a2, a3);
        Class_129c24_dtor(a0 + 0x6e4, 0xffffffff, a2, a3);
        vec_delete_array(a0 + 0x644, Vec3_dtor, 0x10, 8);
        vec_delete_array(a0 + 0x5c4, Vec3_dtor, 0x10, 8);
        ar7_00 = 8;
        ar6_00 = 0x10;
        vec_delete_array(a0 + 0x544, Vec3_dtor, 0x10, 8);
        Class_129938_dtor(a0 + 0x490, 0xffffffff, ar6_00, ar7_00);
        ar5_00 = 0;
        CAnimal_m0_025688(a0, 0, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12a990_m2_09bc2c  0x8c09bc2c
 */
u32 Class_12a990_m2_09bc2c(int a0, float *a1, code *a2, code *a3) {
    char cVar1;
    u32 uVar2;
    float *pfVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    float *pfVar7;
    code *pcVar8;
    code *pcVar9;
    int iVar10;
    float fVar11;
    u64 uVar12;
    double dVar13;
    float fVar14;
    u64 in_dr2;
    double dVar15;
    u64 in_xd0;
    bool bVar16;
    char cVar17;
    char cVar18;
    u16 uVar19;
    u32 in_stack_ffffff20;

    cVar18 = '\0';
    cVar17 = '\0';
    pfVar7 = NULL;
    cVar1 = *(char *)(a0 + 0x6e0);
    pcVar9 = a3;
    if (cVar1 == -1) {
        pcVar8 = a2;
        uVar2 = get_field_a2_s16(a1, 0);
        uVar2 = uVar2 & 0xffff;
        set_field_8(a0 + 0x21c, uVar2);
        uVar2 = get_field_a4_s16(a1, uVar2);
        set_field_c(a0 + 0x21c, uVar2 & 0xffff);
        pcVar8 = NULL;
        pfVar7 = (float *)0x4;
        recent5_push_unique(a1, 4, 0);
        for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
            if (*(int *)(a0 + iVar5 * 4 + 0x524) != 0) {
                iVar10 = *(int *)(a0 + iVar5 * 4 + 0x524);
                pfVar7 = a1;
                (**(code **)(*(int *)(iVar10 + 8) + 0x10c))(iVar10, a1, pcVar8, pcVar9);
            }
        }
        if (cVar18 == '\0') {
            *(u32 *)(a0 + 0x6cc) = 0x3e4ccccd;
            *(u32 *)(a0 + 0x6d0) = 0x3dcccccd;
        } else {
            *(u64 *)(a0 + 0x6cc) = 0x6d03e4ccccd;
            *(u64 *)(a0 + 0x6d0) = 0x6e03dcccccd;
        }
        *(u8 *)(a0 + 0x6e0) = 0;
    } else {
        pcVar8 = a2;
        if (cVar1 != '\0') {
            if (cVar1 == '\x01') {
                uVar4 = get_field_a4_s16(a1, 0);
                uVar2 = CONCAT22((short)((u32)in_stack_ffffff20 >> 0x10), (short)uVar4);
                iVar5 = get_field_c_02d1b8(a0 + 0x21c);
                iVar5 = (uVar2 & 0xffff) - iVar5;
                for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
                    if (*(int *)(a0 + iVar10 * 4 + 0x524) != 0) {
                        iVar6 = *(int *)(a0 + iVar10 * 4 + 0x524);
                        (**(code **)(*(int *)(iVar6 + 8) + 0x110))(iVar6, 1, pcVar8, pcVar9);
                        iVar6 = *(int *)(a0 + iVar10 * 4 + 0x524);
                        pfVar7 = a1;
                        pcVar8 = a2;
                        pcVar9 = a3;
                        (**(code **)(*(int *)(iVar6 + 8) + 0x10))(iVar6, a1, a2, a3);
                    }
                }
                a2 = *(code **)(*(int *)(a0 + 8) + 0xb4);
                iVar6 = (*a2)(a0, pfVar7, a2, pcVar9);
                iVar10 = 0;
                if (iVar6 != 0) {
                    iVar10 = iVar5;
                    talk_sub_02c030(a0 + 0x174, iVar5, a3, pcVar9);
                    a2 = a3;
                }
                if (*(char *)(a0 + 0x9a0) == '\x01') {
                    if (cVar18 == '\0') {
                        dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x6dc), *(u32 *)(a0 + 0x6d4));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x6d4);
                        dVar13 = *(double *)(a0 + 0x6dc);
                    }
                    if (cVar17 == '\0') {
                        fVar11 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);
                    } else {
                        fVar11 = SUB84(dVar13 + dVar13, 0);
                    }
                    if (cVar18 == '\0') {
                        *(float *)(a0 + 0x6d4) = fVar11;
                        dVar13 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x6d4));
                    } else {
                        *(u64 *)(a0 + 0x6d4) = in_xd0;
                        in_xd0 = *(u64 *)(a0 + 0x6d4);
                        dVar13 = 12831.689682006836;
                    }
                    if (cVar17 == '\0') {
                        fVar11 = SUB84(dVar13, 0) * (float)((u64)dVar13 >> 0x20);
                    } else {
                        fVar11 = SUB84(dVar13 * dVar13, 0);
                    }
                    if (cVar18 == '\0') {
                        dVar13 = (double)CONCAT44(0x40c90fd8, fVar11);
                    } else {
                        dVar13 = -3.74578248742155e-250;
                    }
                    if (cVar17 == '\0') {
                        fVar14 = (float)((u64)dVar13 >> 0x20);
                        fVar11 = SUB84(dVar13, 0) / fVar14;
                        dVar13 = (double)CONCAT44(fVar14, fVar11);
                        iVar6 = (int)fVar11;
                    } else {
                        dVar13 = dVar13 / dVar13;
                        iVar6 = (int)dVar13;
                    }
                    njSinCos(iVar6, iVar10, a2, pcVar9, uVar2);
                    if (cVar18 == '\0') {
                        dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), *(u32 *)(a0 + 0x6d8));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x6d8);
                    }
                    if (cVar17 == '\0') {
                        fVar11 = SUB84(dVar13, 0) * (float)((u64)dVar13 >> 0x20);
                    } else {
                        fVar11 = SUB84(dVar13 * dVar13, 0);
                    }
                    if (cVar18 == '\0') {
                        dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x30), fVar11);
                    } else {
                        dVar13 = *(double *)(a0 + 0x30);
                    }
                    if (cVar17 == '\0') {
                        fVar11 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);
                    } else {
                        fVar11 = SUB84(dVar13 + dVar13, 0);
                    }
                    if (cVar18 == '\0') {
                        *(float *)(a0 + 0x30) = fVar11;
                        fVar11 = *(float *)(a0 + 0x6d4);
                        fVar14 = 18.84;
                    } else {
                        *(u64 *)(a0 + 0x30) = in_xd0;
                        fVar11 = 18.84;
                        fVar14 = 1.3589516e+11;
                    }
                    if (cVar17 != '\0' || fVar14 <= fVar11) {
                        *(u8 *)(a0 + 0x9a0) = 0;
                    }
                } else {
                    if (cVar18 == '\0') {
                        dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x6d0), *(u32 *)(a0 + 0x6c8));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x6c8);
                        dVar13 = *(double *)(a0 + 0x6d0);
                    }
                    a2 = (code *)(a0 + 0x6d0);
                    if (cVar17 == '\0') {
                        fVar11 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);
                    } else {
                        fVar11 = SUB84(dVar13 + dVar13, 0);
                    }
                    if (cVar18 == '\0') {
                        *(float *)(a0 + 0x6c8) = fVar11;
                        dVar13 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x6c8));
                    } else {
                        *(u64 *)(a0 + 0x6c8) = in_xd0;
                        in_xd0 = *(u64 *)(a0 + 0x6c8);
                        dVar13 = 12831.689682006836;
                    }
                    if (cVar17 == '\0') {
                        fVar11 = SUB84(dVar13, 0) * (float)((u64)dVar13 >> 0x20);
                    } else {
                        fVar11 = SUB84(dVar13 * dVar13, 0);
                    }
                    if (cVar18 == '\0') {
                        dVar13 = (double)CONCAT44(0x40c90fd8, fVar11);
                    } else {
                        dVar13 = -3.74578248742155e-250;
                    }
                    if (cVar17 == '\0') {
                        fVar14 = (float)((u64)dVar13 >> 0x20);
                        fVar11 = SUB84(dVar13, 0) / fVar14;
                        dVar13 = (double)CONCAT44(fVar14, fVar11);
                        iVar10 = (int)fVar11;
                    } else {
                        dVar13 = dVar13 / dVar13;
                        iVar10 = (int)dVar13;
                    }
                    njSinCos(iVar10, 0x6c8, a2, pcVar9, uVar2);
                    if (cVar18 == '\0') {
                        dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), *(u32 *)(a0 + 0x6cc));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x6cc);
                    }
                    if (cVar17 == '\0') {
                        fVar11 = SUB84(dVar13, 0) * (float)((u64)dVar13 >> 0x20);
                    } else {
                        fVar11 = SUB84(dVar13 * dVar13, 0);
                    }
                    if (cVar18 == '\0') {
                        dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x34), fVar11);
                    } else {
                        dVar13 = *(double *)(a0 + 0x34);
                    }
                    if (cVar17 == '\0') {
                        fVar11 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);
                    } else {
                        fVar11 = SUB84(dVar13 + dVar13, 0);
                    }
                    if (cVar18 == '\0') {
                        *(float *)(a0 + 0x34) = fVar11;
                    } else {
                        *(u64 *)(a0 + 0x34) = in_xd0;
                    }
                }
                *(int *)(a0 + 0x9d4) = *(int *)(a0 + 0x9d4) + 1;
                for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
                    Class_12a990_sub_09cdf4(a0, iVar10);
                    set_vec3_field_30(*(u32 *)(a0 + iVar10 * 4 + 0x524), iVar10, a2);
                }
                pfVar7 = (float *)0x3c;
                iVar5 = libgcc_divide_helper_0101e4(iVar5, 0x3c);
                if (2 < iVar5) {
                    *(u8 *)(a0 + 0x6e0) = 2;
                }
                if ((*(char *)(a0 + 0x9a0) == '\0') && (iVar5 = game_sub_02c518(a0 + 0x174, pfVar7, a2), iVar5 != -1)) {
                    *(u8 *)(a0 + 0x6e0) = 0xff;
                    *(u32 *)(a0 + 0x9d4) = 0;
                }
            } else if (cVar1 == '\x02') {
                a2 = (code *)0x1b;
                pfVar7 = (float *)0x5;
                recent5_push_unique(a1, 5, 0x1b);
                for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
                    iVar10 = *(int *)(a0 + iVar5 * 4 + 0x524);
                    (**(code **)(*(int *)(iVar10 + 8) + 0x110))(iVar10, 0, a2, pcVar9);
                    pfVar7 = *(float **)(a0 + iVar5 * 4 + 0x524);
                    (**(code **)(*(int *)a3 + 0x4c))(a3, pfVar7, a2, pcVar9);
                    *(u32 *)(a0 + iVar5 * 4 + 0x524) = 0;
                }
                mask_74_7fffffff(a0);
            }
            goto LAB_8c09c65a;
        }
    }
    uVar2 = get_field_a2_s16(a1, pfVar7);
    uVar2 = uVar2 & 0xffff;
    set_field_8(a0 + 0x21c, uVar2);
    uVar2 = get_field_a4_s16(a1, uVar2);
    set_field_c(a0 + 0x21c, uVar2 & 0xffff);
    pcVar8 = NULL;
    pfVar7 = (float *)0x4;
    recent5_push_unique(a1, 4, 0);
    for (iVar5 = 0; uVar19 = (u16)in_stack_ffffff20, iVar5 < 8; iVar5 = iVar5 + 1) {
        if (*(int *)(a0 + iVar5 * 4 + 0x524) != 0) {
            iVar10 = *(int *)(a0 + iVar5 * 4 + 0x524);
            pfVar7 = a1;
            (**(code **)(*(int *)(iVar10 + 8) + 0x10c))(iVar10, a1, pcVar8, pcVar9);
        }
    }
    if (cVar18 == '\0') {
        dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x6d0), *(u32 *)(a0 + 0x6c8));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x6c8);
        dVar13 = *(double *)(a0 + 0x6d0);
    }
    if (cVar17 == '\0') {
        fVar11 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);
    } else {
        fVar11 = SUB84(dVar13 + dVar13, 0);
    }
    if (cVar18 == '\0') {
        *(float *)(a0 + 0x6c8) = fVar11;
    } else {
        *(u64 *)(a0 + 0x6c8) = in_xd0;
    }
    uVar4 = get_field_a4_s16(a1, pfVar7);
    uVar2 = CONCAT22((short)uVar4, uVar19);
    iVar5 = get_field_c_02d1b8(a0 + 0x21c);
    pfVar3 = (float *)((uVar2 >> 0x10) - iVar5);
    for (iVar5 = 0; uVar4 = (u32)in_dr2, iVar5 < 8; iVar5 = iVar5 + 1) {
        if (*(int *)(a0 + iVar5 * 4 + 0x524) != 0) {
            iVar10 = *(int *)(a0 + iVar5 * 4 + 0x524);
            (**(code **)(*(int *)(iVar10 + 8) + 0x110))(iVar10, 1, pcVar8, pcVar9);
            iVar10 = *(int *)(a0 + iVar5 * 4 + 0x524);
            pfVar7 = a1;
            pcVar8 = a2;
            pcVar9 = a3;
            (**(code **)(*(int *)(iVar10 + 8) + 0x10))(iVar10, a1, a2, a3);
        }
    }
    iVar5 = (**(code **)(*(int *)(a0 + 8) + 0xb4))(a0, pfVar7, pcVar8, pcVar9);
    a2 = pcVar8;
    if (iVar5 != 0) {
        a2 = a3;
        talk_sub_02c030(a0 + 0x174, pfVar3, a3, pcVar9);
        pfVar7 = pfVar3;
    }
    iVar5 = flag_74_bit40(a0);
    if (iVar5 == 1) {
        pfVar7 = (float *)(a0 + 0x34);
        if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x6c4), *(u32 *)(a0 + 0x34));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x34);
            dVar13 = *(double *)(a0 + 0x6c4);
        }
        if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20);
        } else {
            fVar11 = SUB84(dVar13 - dVar13, 0);
        }
        if (cVar18 == '\0') {
            *pfVar7 = fVar11;
            dVar13 = (double)CONCAT44(0x3f000000, *(u32 *)(a0 + 0x6c4));
        } else {
            *(u64 *)pfVar7 = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x6c4);
            dVar13 = 524288.123046875;
        }
        if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13, 0) + (float)((u64)dVar13 >> 0x20);
        } else {
            fVar11 = SUB84(dVar13 + dVar13, 0);
        }
        if (cVar18 == '\0') {
            *(float *)(a0 + 0x6c4) = fVar11;
            fVar11 = *(float *)(a0 + 0x6c4);
            fVar14 = 10.0;
        } else {
            *(u64 *)(a0 + 0x6c4) = in_xd0;
            fVar11 = 10.0;
            fVar14 = 2.1188467e-29;
        }
        if (cVar17 == '\0' && fVar14 < fVar11) {
            if (cVar18 == '\0') {
                *(u32 *)(a0 + 0x6c4) = 0x41200000;
            } else {
                *(u64 *)(a0 + 0x6c4) = 0xfd6e06841200000;
            }
        }
    } else {
        if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x6c4), *(u32 *)(a0 + 0x34));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x34);
            dVar13 = *(double *)(a0 + 0x6c4);
        }
        if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13, 0) - (float)((u64)dVar13 >> 0x20);
        } else {
            fVar11 = SUB84(dVar13 - dVar13, 0);
        }
        if (cVar18 == '\0') {
            *(float *)(a0 + 0x34) = fVar11;
            dVar13 = (double)CONCAT44(0x3f6b851f, *(u32 *)(a0 + 0x6c4));
        } else {
            *(u64 *)(a0 + 0x34) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x6c4);
            dVar13 = 1.3411048255806968e-08;
        }
        if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13, 0) * (float)((u64)dVar13 >> 0x20);
        } else {
            fVar11 = SUB84(dVar13 * dVar13, 0);
        }
        if (cVar18 == '\0') {
            *(float *)(a0 + 0x6c4) = fVar11;
            fVar11 = *(float *)(a0 + 0x6c4);
            fVar14 = 0.2;
        } else {
            *(u64 *)(a0 + 0x6c4) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x6c4);
            fVar11 = 0.2;
            fVar14 = 2.43265e-42;
        }
        if (cVar17 == '\0' && fVar11 < fVar14) {
            if (cVar18 == '\0') {
                *(u32 *)(a0 + 0x6c4) = 0x3e4ccccd;
            } else {
                *(u64 *)(a0 + 0x6c4) = 0x6c83e4ccccd;
            }
        }
        if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x6c8));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x6c8);
            dVar13 = 12831.689682006836;
        }
        if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13, 0) * (float)((u64)dVar13 >> 0x20);
        } else {
            fVar11 = SUB84(dVar13 * dVar13, 0);
        }
        if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(0x40c90fd8, fVar11);
        } else {
            dVar13 = -3.74578248742155e-250;
        }
        if (cVar17 == '\0') {
            fVar14 = (float)((u64)dVar13 >> 0x20);
            fVar11 = SUB84(dVar13, 0) / fVar14;
            dVar13 = (double)CONCAT44(fVar14, fVar11);
            iVar5 = (int)fVar11;
        } else {
            dVar13 = dVar13 / dVar13;
            iVar5 = (int)dVar13;
        }
        njSinCos(iVar5, pfVar7, a2, pcVar9, uVar2);
        if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44((int)((u64)dVar13 >> 0x20), *(u32 *)(a0 + 0x6cc));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x6cc);
        }
        if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13, 0) * (float)((u64)dVar13 >> 0x20);
        } else {
            fVar11 = SUB84(dVar13 * dVar13, 0);
        }
        if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(u32 *)(a0 + 0x34), fVar11);
        } else {
            dVar13 = *(double *)(a0 + 0x34);
        }
        if (cVar17 == '\0') {
            fVar11 = (float)((u64)dVar13 >> 0x20);
            dVar13 = (double)CONCAT44(fVar11, SUB84(dVar13, 0) + fVar11);
        } else {
            dVar13 = dVar13 + dVar13;
        }
        if (cVar18 == '\0') {
            *(int *)(a0 + 0x34) = SUB84(dVar13, 0);
        } else {
            *(u64 *)(a0 + 0x34) = in_xd0;
        }
        pfVar7 = (float *)(a0 + 0x30);
        (**(code **)(*(int *)a3 + 0x128))(a3, pfVar7, a2, pcVar9);
        if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44(*(u32 *)(a0 + 0x34), uVar4);
            dVar13 = (double)CONCAT44(0x435c0000, (int)((u64)dVar13 >> 0x20));
        } else {
            dVar15 = *(double *)(a0 + 0x34);
            dVar13 = 7.89940779200925e-312;
        }
        if (cVar17 == '\0') {
            fVar14 = (float)((u64)dVar13 >> 0x20);
            fVar11 = SUB84(dVar13, 0) + fVar14;
            dVar13 = (double)CONCAT44(fVar14, fVar11);
            bVar16 = fVar11 < (float)((u64)dVar15 >> 0x20);
        } else {
            dVar13 = dVar13 + dVar13;
            bVar16 = dVar13 < dVar15;
        }
        if (!bVar16) {
            uVar12 = (u64)dVar13 & 0xffffffff;
            if (cVar18 == '\0') {
                *(u32 *)(a0 + 0x6c4) = 0;
            } else {
                *(u64 *)(a0 + 0x6c4) = uVar12;
            }
            iVar5 = game_sub_02c518(a0 + 0x174, pfVar7, a2);
            if (iVar5 == -1) {
                if (cVar18 == '\0') {
                    *(u32 *)(a0 + 0x6cc) = 0x3f99999a;
                    uVar12 = CONCAT44(0x3d23d70a, (int)uVar12);
                    *(u32 *)(a0 + 0x6d0) = 0x3d23d70a;
                } else {
                    *(u64 *)(a0 + 0x6cc) = 0x6d03f99999a;
                    uVar12 = 0x6e03d23d70a;
                    *(u64 *)(a0 + 0x6d0) = 0x6e03d23d70a;
                }
                if (cVar18 == '\0') {
                    *(u32 *)(a0 + 0x6c8) = 0;
                } else {
                    *(u64 *)(a0 + 0x6c8) = uVar12 & 0xffffffff;
                }
                *(u8 *)(a0 + 0x6e0) = 1;
            }
        }
    }
    *(int *)(a0 + 0x9d4) = *(int *)(a0 + 0x9d4) + -5;
    if (*(int *)(a0 + 0x9d4) < 0) {
        *(u32 *)(a0 + 0x9d4) = 0;
    }
    for (pfVar3 = NULL; (int)pfVar3 < 8; pfVar3 = (float *)((int)pfVar3 + 1)) {
        pfVar7 = pfVar3;
        Class_12a990_sub_09cdf4(a0, pfVar3);
        set_vec3_field_30(*(u32 *)(a0 + (int)pfVar3 * 4 + 0x524), pfVar7, a2);
    }
LAB_8c09c65a:
    (**(code **)(*(int *)(a0 + 8) + 0xf8))(a0, pfVar7, a2, pcVar9);
    game_sub_0f79b8(a0 + 0xa0, pfVar7, a2, pcVar9);
    return 1;
}

/*
 * Class_12a990_m6_09c6a4  0x8c09c6a4
 */
int Class_12a990_m6_09c6a4(int a0, u32 a1, u32 a2, u32 a3) {
    int a4;
    u32 ar5_00;
    int iVar1;

    ar5_00 = a1;
    CAnimal_set_state_flag_40(a0);
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        if (*(int *)(0x524 + a0 + iVar1 * 4) != 0) {
            a4 = *(int *)(0x524 + a0 + iVar1 * 4);
            ar5_00 = a1;
            (**(code **)(*(int *)(a4 + 8) + 0x20))(a4, a1, a2, a3);
        }
    }
    Class_12a990_sub_09b544(a0 + 0x9a4, ar5_00, a2);
    Class_12a990_sub_09b6c4(a0 + 0x9a4);
    iVar1 = 0x6e0;
    *(u8 *)(0x6e0 + a0) = 0xff;
    return iVar1;
}

/*
 * Class_12a990_m5_09c738  0x8c09c738
 */
u32 Class_12a990_m5_09c738(u32 a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    int iVar1;
    u32 uVar2;
    int iStack_4;

    iVar1 = -0x7d0;
    *(u32 *)((int)&iStack_4 + iVar1) = a0;
    game_sub_0b7a54((int)&s0 + iVar1);
    (**(code **)(*(int *)(*(int *)((int)&iStack_4 + iVar1) + 8) + 0x20))(*(int *)((int)&iStack_4 + iVar1),
                                                                         (int)&s0 + iVar1, a2, a3);
    uVar2 = dtor_delete_with_ac((int)&s0 + iVar1, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * Class_12a990_m4_09c77c  0x8c09c77c
 */
u32 Class_12a990_m4_09c77c(u32 a0) {
    u32 uVar1;

    uVar1 = CAnimal_set_state_flag_40(a0);
    return uVar1;
}

/*
 * set_state_flag_40_74_wrap_09c79c  0x8c09c79c
 * only calls set_state_flag_40_74
 */
u32 set_state_flag_40_74_wrap_09c79c(u32 a0) {
    u32 uVar1;

    uVar1 = set_state_flag_40_74(a0);
    return uVar1;
}

/*
 * noop_09c7b8  0x8c09c7b8
 */
u32 noop_09c7b8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_09c7bc  0x8c09c7bc
 */
u32 noop_09c7bc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * load_state_record_09c7c0  0x8c09c7c0
 * restores object state, status and the 15 bytes at +0x2dc from save record a1
 */
u32 load_state_record_09c7c0(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_state_load(a0, a1, a2, a3);
    game_sub_02cbe4(a0 + 0x174, a1 + 0x4c, a2, a3);
    uVar1 = copy15_in_normalize(a0 + 0x2dc, a1 + 0xd8);
    return uVar1;
}

/*
 * load_pose_record_09c820  0x8c09c820
 * restores pose, status and the 15 bytes at +0x2dc from save record a1
 */
u32 load_pose_record_09c820(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_pose_load(a0, a1, a2, a3);
    status_load_record(a0 + 0x174, a1 + 0x24);
    uVar1 = copy15_in_normalize(a0 + 0x2dc, a1 + 0x58);
    return uVar1;
}

/*
 * save_state_record_09c878  0x8c09c878
 * stores object state, status and the 15 bytes at +0x2dc into save record a1
 */
u32 save_state_record_09c878(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_state_save(a0, a1, a2, a3);
    game_sub_02cf20(a0 + 0x174, a1 + 0x4c, a2);
    uVar1 = copy15_out(a0 + 0x2dc, a1 + 0xd8);
    return uVar1;
}

/*
 * save_pose_record_09c8d8  0x8c09c8d8
 * stores pose, status and the 15 bytes at +0x2dc into save record a1
 */
u32 save_pose_record_09c8d8(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_pose_save(a0, a1, a2, a3);
    CAnimal_sub_02d1f4(a0 + 0x174, a1 + 0x24, a2);
    uVar1 = copy15_out(a0 + 0x2dc, a1 + 0x58);
    return uVar1;
}

/*
 * Class_12a990_sub_09c930  0x8c09c930
 * area name: sits between Class_12a990 functions (same compilation unit)
 */
u32 Class_12a990_sub_09c930(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 ar4_00;
    int a4;
    int iVar1;
    float fVar2;
    double dVar3;
    int ar7_00;
    int ar6_00;
    int ar5_00;
    char cVar4;
    char cVar5;
    u32 in_stack_ffffffe4;

    cVar5 = '\0';
    cVar4 = '\0';
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, a1, a2);
    matrix_push(0, a1, a2, r7, in_stack_ffffffe4);
    touch_fields_30_3c(0, a1, a2, r7, in_stack_ffffffe4);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar3 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x43b40000, fVar2);
    } else {
        dVar3 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar7_00 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        ar7_00 = (int)(dVar3 / dVar3);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar3 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x43b40000, fVar2);
    } else {
        dVar3 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar6_00 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        ar6_00 = (int)(dVar3 / dVar3);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar3 = 1.4411521878487204e+18;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x43b40000, fVar2);
    } else {
        dVar3 = -3.739346301775294e-250;
    }
    if (cVar4 == '\0') {
        ar5_00 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        ar5_00 = (int)(dVar3 / dVar3);
    }
    njRotateXYZ(0, ar5_00, ar6_00, ar7_00, in_stack_ffffffe4);
    matrix_scale(0, ar5_00, ar6_00, ar7_00, in_stack_ffffffe4);
    ar4_00 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
    gfxlib_sub_21a80e(ar4_00, ar5_00, ar6_00, ar7_00);
    matrix_pop_n(1);
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        if (*(int *)(a0 + iVar1 * 4 + 0x524) != 0) {
            game_sub_0f4b44(*(u32 *)(a0 + iVar1 * 4 + 0x524));
            a4 = *(int *)(a0 + iVar1 * 4 + 0x524);
            (**(code **)(*(int *)(a4 + 8) + 0x34))(a4, ar5_00, ar6_00, ar7_00);
        }
    }
    return 8;
}

/*
 * game_sub_09ca80  0x8c09ca80
 * area name: game code; nothing names its area yet
 */
u32 game_sub_09ca80(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int a4;
    int iVar2;
    u32 in_stack_ffffffe8;

    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, a1, a2);
    uVar1 = 0;
    matrix_push(0, a1, a2, a3, in_stack_ffffffe8);
    matrix_scale_wrap(uVar1, a1);
    uVar1 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
    gfxlib_sub_219a9a(uVar1, a1, a2, a3);
    for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
        if (*(int *)(a0 + iVar2 * 4 + 0x524) != 0) {
            a4 = *(int *)(a0 + iVar2 * 4 + 0x524);
            (**(code **)(*(int *)(a4 + 8) + 0x3c))(a4, a1, a2, a3);
        }
    }
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * vcall_field_8_slot15_09cb40  0x8c09cb40
 * calls virtual slot 15 of the object at +0x8
 */
u32 vcall_field_8_slot15_09cb40(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x3c))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * game_sub_09cb58  0x8c09cb58
 * area name: game code; nothing names its area yet
 */
u32 game_sub_09cb58(int a0, u32 a1, u32 a2, u32 a3) {
    int a4;
    int iVar1;

    noop_038c8c();
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        if (*(int *)(a0 + iVar1 * 4 + 0x524) != 0) {
            a4 = *(int *)(a0 + iVar1 * 4 + 0x524);
            (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4, a1, a2, a3);
        }
    }
    return 8;
}

/*
 * game_sub_09cbb8  0x8c09cbb8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_09cbb8(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int a6;
    int a5;

    for (a5 = 0; a5 < 8; a5 = a5 + 1) {
        a6 = CItemGLoader_sub_0fef94(a1, 1, 1, a3);
        if (a6 != 0) {
            (**(code **)(0x100 + *(int *)(a0 + 8)))(a0, a5, a6, a3);
            Class_12a990_sub_09cca8(a0, a5, a6);
        }
    }
    return 8;
}

/*
 * Class_12a990_sub_09cc34  0x8c09cc34
 * area name: sits between Class_12a990 functions (same compilation unit)
 */
int Class_12a990_sub_09cc34(int a0, int a1, u32 a2) {
    int iVar1;

    iVar1 = 0x524;
    *(u32 *)(0x524 + a0 + a1 * 4) = a2;
    return iVar1;
}

/*
 * Class_12a990_sub_09cc4c  0x8c09cc4c
 * area name: sits between Class_12a990 functions (same compilation unit)
 */
u32 Class_12a990_sub_09cc4c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        if (*(int *)(0x524 + a0 + iVar1 * 4) != 0) {
            game_sub_0ff500(a1, a0 + iVar1 * 4 + 0x524, a2, a3);
        }
    }
    return 8;
}

/*
 * Class_12a990_sub_09cca8  0x8c09cca8
 * area name: sits between Class_12a990 functions (same compilation unit)
 * called by: game_sub_09cbb8
 */
u32 Class_12a990_sub_09cca8(int a0, int a1, u32 a2) {
    u32 uVar1;
    int iVar2;
    double *pdVar3;
    float *pfVar4;
    u64 *puVar5;
    u32 in_fr1;
    float fVar6;
    u32 uVar7;
    double dVar8;
    float fVar9;
    u32 in_fr3;
    u32 uVar10;
    double dVar11;
    u32 in_fr4;
    u64 in_dr14;
    double dVar12;
    u64 in_xd0;
    u64 in_xd14;
    int iVar13;
    char cVar14;
    char cVar15;

    cVar15 = '\0';
    cVar14 = '\0';
    dVar12 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), in_fr4);
    uVar1 = rand();
    if (cVar14 == '\0') {
        iVar13 = (int)SUB84(dVar12, 0);
    } else {
        iVar13 = (int)dVar12;
    }
    iVar2 = libgcc_divide_helper_01031c(uVar1, iVar13, a2);
    pdVar3 = (double *)(a0 + a1 * 0x10 + 0x5c4);
    if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((float)iVar2, in_fr3);
    } else {
        dVar11 = (double)iVar2;
    }
    if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(0x42c80000, in_fr1);
    } else {
        dVar8 = 2.0000004975590855;
    }
    if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) / (float)((u64)dVar8 >> 0x20), SUB84(dVar11, 0));
    } else {
        dVar11 = dVar11 / dVar8;
    }
    if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(0x42c80000, SUB84(dVar12, 0));
    } else {
        dVar8 = 2.0000004975590855;
        in_xd0 = in_xd14;
    }
    if (cVar14 == '\0') {
        fVar6 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
    } else {
        fVar6 = SUB84(dVar8 / dVar8, 0);
    }
    if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(0x40000000, fVar6);
    } else {
        dVar8 = 3.14108426957634e-311;
    }
    if (cVar14 == '\0') {
        fVar9 = (float)((u64)dVar8 >> 0x20);
        fVar6 = SUB84(dVar8, 0) / fVar9;
        dVar8 = (double)CONCAT44(fVar9, fVar6);
        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - fVar6, SUB84(dVar11, 0));
    } else {
        dVar8 = dVar8 / dVar8;
        dVar11 = dVar11 - dVar8;
    }
    uVar7 = SUB84(dVar8, 0);
    if (cVar15 == '\0') {
        *(int *)pdVar3 = (int)((u64)dVar11 >> 0x20);
    } else {
        *pdVar3 = dVar11;
    }
    uVar1 = rand();
    uVar10 = SUB84(dVar11, 0);
    if (cVar14 == '\0') {
        iVar13 = (int)SUB84(dVar12, 0);
    } else {
        iVar13 = (int)dVar12;
    }
    iVar2 = libgcc_divide_helper_01031c(uVar1, iVar13, a2);
    pdVar3 = (double *)(a0 + a1 * 0x10 + 0x5c8);
    if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((float)iVar2, uVar10);
    } else {
        dVar11 = (double)iVar2;
    }
    if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(0x42c80000, uVar7);
    } else {
        dVar8 = 2.0000004975590855;
    }
    if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) / (float)((u64)dVar8 >> 0x20), SUB84(dVar11, 0));
    } else {
        dVar11 = dVar11 / dVar8;
    }
    if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(0x42c80000, SUB84(dVar12, 0));
        in_xd14 = in_xd0;
    } else {
        dVar8 = 2.0000004975590855;
    }
    if (cVar14 == '\0') {
        fVar6 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
    } else {
        fVar6 = SUB84(dVar8 / dVar8, 0);
    }
    if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(0x40000000, fVar6);
    } else {
        dVar8 = 3.14108426957634e-311;
    }
    if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) - SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20),
                                  SUB84(dVar11, 0));
    } else {
        dVar11 = dVar11 - dVar8 / dVar8;
    }
    if (cVar15 == '\0') {
        *(int *)pdVar3 = (int)((u64)dVar11 >> 0x20);
    } else {
        *pdVar3 = dVar11;
    }
    uVar1 = rand();
    if (cVar14 == '\0') {
        iVar13 = (int)SUB84(dVar12, 0);
    } else {
        iVar13 = (int)dVar12;
    }
    iVar13 = libgcc_divide_helper_01031c(uVar1, iVar13, a2);
    pfVar4 = (float *)(a0 + a1 * 0x10 + 0x5cc);
    if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44(0x42c80000, (float)iVar13);
    } else {
        dVar11 = 2.0000004975590855;
    }
    if (cVar14 == '\0') {
        fVar6 = SUB84(dVar11, 0) / (float)((u64)dVar11 >> 0x20);
    } else {
        fVar6 = SUB84(dVar11 / dVar11, 0);
    }
    if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44(0x42c80000, fVar6);
    } else {
        dVar11 = 2.0000004975590855;
    }
    if (cVar14 == '\0') {
        dVar12 = (double)CONCAT44((int)((u64)dVar12 >> 0x20), SUB84(dVar12, 0) / (float)((u64)dVar11 >> 0x20));
    } else {
        dVar12 = dVar12 / dVar11;
    }
    if (cVar15 == '\0') {
        dVar11 = (double)CONCAT44(0x40000000, SUB84(dVar11, 0));
    } else {
        dVar11 = 3.14108426957634e-311;
    }
    if (cVar14 == '\0') {
        fVar6 = SUB84(dVar11, 0) - SUB84(dVar12, 0) / (float)((u64)dVar11 >> 0x20);
    } else {
        fVar6 = SUB84(dVar11 - dVar12 / dVar11, 0);
    }
    if (cVar15 == '\0') {
        *pfVar4 = fVar6;
    } else {
        *(u64 *)pfVar4 = in_xd14;
    }
    puVar5 = (u64 *)(a0 + a1 * 0x10 + 0x644);
    if (cVar15 == '\0') {
        *(u32 *)puVar5 = 0;
    } else {
        *puVar5 = (u64)(u32)fVar6;
    }
    puVar5 = (u64 *)(a0 + a1 * 0x10 + 0x648);
    if (cVar15 == '\0') {
        *(u32 *)puVar5 = 0;
    } else {
        *puVar5 = (u64)(u32)fVar6;
    }
    puVar5 = (u64 *)(a0 + a1 * 0x10 + 0x64c);
    if (cVar15 == '\0') {
        *(u32 *)puVar5 = 0;
    } else {
        *puVar5 = (u64)(u32)fVar6;
    }
    return 0x64c;
}

/*
 * Class_12a990_sub_09cdf4  0x8c09cdf4
 * area name: only called from Class_12a990 methods
 * called by: Class_12a990_m2_09bc2c
 */
u32 *Class_12a990_sub_09cdf4(int a0, int a1) {
    int iVar1;
    u32 *puVar2;
    u64 in_dr4;
    float fVar3;

    iVar1 = a0 + a1 * 0x10;
    fVar3 = (float)((u64)in_dr4 >> 0x20);
    *(float *)(iVar1 + 0x644) =
        (*(float *)(a0 + a1 * 0x10 + 0x5c4) - *(float *)(a0 + a1 * 0x10 + 0x644)) / fVar3 + *(float *)(iVar1 + 0x644);
    iVar1 = a0 + a1 * 0x10;
    *(float *)(iVar1 + 0x648) =
        (*(float *)(a0 + a1 * 0x10 + 0x5c8) - *(float *)(a0 + a1 * 0x10 + 0x648)) / fVar3 + *(float *)(iVar1 + 0x648);
    iVar1 = a0 + a1 * 0x10;
    *(float *)(iVar1 + 0x64c) =
        (*(float *)(a0 + a1 * 0x10 + 0x5cc) - *(float *)(a0 + a1 * 0x10 + 0x64c)) / fVar3 + *(float *)(iVar1 + 0x64c);
    iVar1 = a0 + a1 * 0x10;
    *(float *)(iVar1 + 0x544) = *(float *)(a0 + a1 * 0x10 + 0x644) + *(float *)(iVar1 + 0x544);
    iVar1 = a0 + a1 * 0x10;
    *(float *)(iVar1 + 0x548) = *(float *)(a0 + a1 * 0x10 + 0x648) + *(float *)(iVar1 + 0x548);
    iVar1 = a0 + a1 * 0x10;
    *(float *)(iVar1 + 0x54c) = *(float *)(a0 + a1 * 0x10 + 0x64c) + *(float *)(iVar1 + 0x54c);
    if ((fVar3 / 3.0 < *(float *)(a0 + a1 * 0x10 + 0x544)) && (0.0 < *(float *)(a0 + a1 * 0x10 + 0x5c4))) {
        iVar1 = a0 + a1 * 0x10;
        *(float *)(iVar1 + 0x5c4) = *(float *)(iVar1 + 0x5c4) * -1.0;
    }
    if ((fVar3 / 3.0 < *(float *)(a0 + a1 * 0x10 + 0x548)) && (0.0 < *(float *)(a0 + a1 * 0x10 + 0x5c8))) {
        iVar1 = a0 + a1 * 0x10;
        *(float *)(iVar1 + 0x5c8) = *(float *)(iVar1 + 0x5c8) * -1.0;
    }
    if ((fVar3 / 3.0 < *(float *)(a0 + a1 * 0x10 + 0x54c)) && (0.0 < *(float *)(a0 + a1 * 0x10 + 0x5cc))) {
        iVar1 = a0 + a1 * 0x10;
        *(float *)(iVar1 + 0x5cc) = *(float *)(iVar1 + 0x5cc) * -1.0;
    }
    if ((*(float *)(a0 + a1 * 0x10 + 0x544) < fVar3 / -3.0) && (*(float *)(a0 + a1 * 0x10 + 0x5c4) < 0.0)) {
        iVar1 = a0 + a1 * 0x10;
        *(float *)(iVar1 + 0x5c4) = *(float *)(iVar1 + 0x5c4) * -1.0;
    }
    if ((*(float *)(a0 + a1 * 0x10 + 0x548) < fVar3 / -3.0) && (*(float *)(a0 + a1 * 0x10 + 0x5c8) < 0.0)) {
        iVar1 = a0 + a1 * 0x10;
        *(float *)(iVar1 + 0x5c8) = *(float *)(iVar1 + 0x5c8) * -1.0;
    }
    puVar2 = &g_8c09d2a4;
    if ((*(float *)(a0 + a1 * 0x10 + 0x54c) < fVar3 / -3.0) &&
        (puVar2 = (u32 *)0x5cc, *(float *)(a0 + a1 * 0x10 + 0x5cc) < 0.0)) {
        iVar1 = a0 + a1 * 0x10;
        puVar2 = &g_8c09d29c;
        *(float *)(iVar1 + 0x5cc) = *(float *)(iVar1 + 0x5cc) * -1.0;
    }
    return puVar2;
}

/*
 * game_sub_09d2b4  0x8c09d2b4
 * area name: game code; nothing names its area yet
 */
int game_sub_09d2b4(int a0) {
    int iVar1;

    iVar1 = 1;
    if ((*(char *)(a0 + 0x9a0) != '\x01') && (iVar1 = (int)*(char *)(a0 + 0x6e0), iVar1 == 1)) {
        *(u8 *)(a0 + 0x9a0) = 1;
        *(u32 *)(a0 + 0x6d8) = 0x3f8ccccd;
        *(u32 *)(a0 + 0x6dc) = 0x3e2e147b;
        iVar1 = 0x6d4;
        *(u32 *)(a0 + 0x6d4) = 0;
    }
    return iVar1;
}

/*
 * game_sub_09d310  0x8c09d310
 * area name: game code; nothing names its area yet
 */
u32 game_sub_09d310(int a0, u32 a1, u32 a2, u32 a3) {
    int a4;
    int iVar1;

    CAnimal_LoadGRWait(a0, a1, a2, a3);
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        if (*(int *)(0x524 + a0 + iVar1 * 4) != 0) {
            a4 = *(int *)(0x524 + a0 + iVar1 * 4);
            (**(code **)(0xe0 + *(int *)(a4 + 8)))(a4, a1, 0, a3);
        }
    }
    return 8;
}

/*
 * game_sub_09d384  0x8c09d384
 * area name: game code; nothing names its area yet
 */
u32 game_sub_09d384(int a0, u32 a1, u32 a2, u32 a3) {
    int a4;
    int iVar1;

    CMothLine_sub_028afc(a0, a1, a2);
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        if (*(int *)(0x524 + a0 + iVar1 * 4) != 0) {
            a4 = *(int *)(0x524 + a0 + iVar1 * 4);
            (**(code **)(0xec + *(int *)(a4 + 8)))(a4, a1, 0, a3);
        }
    }
    return 8;
}

/*
 * Class_12a990_m8_09d3f8  0x8c09d3f8
 */
u32 Class_12a990_m8_09d3f8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    CAnimal_m8_0f511c(a0, a1, a2, a3);
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        if (*(int *)(0x524 + a0 + iVar1 * 4) != 0) {
            a1 = get_field_74_09d474(a0);
            set_field_74(*(u32 *)(0x524 + a0 + iVar1 * 4), a1);
        }
    }
    return 8;
}

/*
 * set_field_74  0x8c09d46c
 * called by: Class_12a990_m8_09d3f8
 */
u32 set_field_74(int a0, u32 a1) {
    *(u32 *)(a0 + 0x74) = a1;
    return 0x74;
}

/*
 * get_field_74_09d474  0x8c09d474
 * called by: Class_12a990_m8_09d3f8
 */
u32 get_field_74_09d474(int a0) {
    return *(u32 *)(a0 + 0x74);
}

/*
 * MushroomerEgg_asset_table_init  0x8c09d47c
 * fills the Mushroomer egg asset table (MrEgg_Home.nj, MUSHROOMER_EGG)
 * called by: game_init_sound_and_messages
 */
u32 MushroomerEgg_asset_table_init(void) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u32 *)(iVar1 * 0x124 + 0x8c284a90) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c284a94) = 0;
        *(u8 **)(iVar1 * 0x124 + 0x8c284a98) = PTR_s_MrEgg_Home_nj_8c13aa70;
        *(u32 *)(iVar1 * 0x124 + 0x8c284a9c) = 0;
        *(u8 **)(iVar1 * 0x124 + 0x8c284aa0) = PTR_s_MUSHROOMER_EGG_8c13aa74;
        *(u32 *)(iVar1 * 0x124 + 0x8c284aa4) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c284b40) = 0x8c284cb8;
        *(u32 *)(iVar1 * 0x124 + 0x8c284b48) = 0x3f800000;
        *(u32 *)(iVar1 * 0x124 + 0x8c284b58) = 0x3ca3d70a;
        *(u32 *)(iVar1 * 0x124 + 0x8c284b5c) = 0x3ecccccd;
        *(u32 *)(iVar1 * 0x124 + 0x8c284b60) = 0x43480000;
        *(u32 *)(iVar1 * 0x124 + 0x8c284b54) = 0x3eb33333;
        *(u32 *)(iVar1 * 0x124 + 0x8c284bac) = 0x43898000;
    }
    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u16 *)(iVar1 * 0x10 + 0x8c284bbc) = 0xffff;
        *(u32 *)(iVar1 * 0x10 + 0x8c284bc0) = 1;
        *(u32 *)(iVar1 * 0x10 + 0x8c284bc4) = 0;
        *(u32 *)(iVar1 * 0x10 + 0x8c284bc8) = 0;
    }
    return 1;
}

/*
 * Class_12a990_sub_09d644  0x8c09d644
 * area name: sits between Class_12a990 functions (same compilation unit)
 * called by: game_sub_0c6a4c
 */
u32 Class_12a990_sub_09d644(u32 *a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;

    *a0 = 0;
    clear_3_words(a0 + 1, a1, unused_a2, a3);
    Vec3_set_one_08a9b8(a0 + 4);
    a0[7] = 10;
    a0[8] = a0[8] | 0x80000001;
    Class_12a990_sub_09d6b8(a0 + 9);
    for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
        *(u8 *)((int)a0 + iVar1 + 0x58) = 0;
    }
    return 0xf;
}

/*
 * Class_12a990_sub_09d6b8  0x8c09d6b8
 * area name: sits between Class_12a990 functions (same compilation unit)
 * called by: Class_12a990_sub_09d644
 */
u32 Class_12a990_sub_09d6b8(int a0) {
    *(u32 *)(a0 + 4) = 0;
    *(u32 *)(a0 + 8) = 0;
    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x14) = 0;
    *(u32 *)(a0 + 0x18) = 0;
    *(u16 *)(a0 + 0x1c) = 0;
    *(u16 *)(a0 + 0x1e) = 0;
    *(u32 *)(a0 + 0x20) = 0;
    return 0;
}

/*
 * Class_12a990_m3_09d6e8  0x8c09d6e8
 */
u32 Class_12a990_m3_09d6e8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x10))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * ret_const_1_09d710  0x8c09d710
 */
u32 ret_const_1_09d710(void) {
    return 1;
}

/*
 * Class_12a990_sub_09d718  0x8c09d718
 * area name: sits between Class_12a990 functions (same compilation unit)
 */
u32 Class_12a990_sub_09d718(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c1260c8, a1, a2, a3);
    uVar3 = 0x8c284a50;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284a50, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1260d8, pcVar2, uVar3, a3);
    uVar3 = 0x8c284a5c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284a5c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1260e8, pcVar2, uVar3, a3);
    uVar3 = 0x8c284a68;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284a68, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1260f8, pcVar2, uVar3, a3);
    uVar3 = 0x8c284a74;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284a74, a3);
    if (cVar4 == '\0') {
        g_8c126108 = CONCAT44(_UNK_8c12610c, 0x800000);
        /* WARNING: Read-only address (ram,0x8c12610c) is written */
    } else {
        g_8c126108 = 0xffffffff00800000;
    }
    uVar1 = game_sub_02452c(0x8c284a8c, pcVar2);
    uVar3 = 0x8c284a80;
    pcVar2 = game_sub_03a4ac;
    global_list_push(uVar1, game_sub_03a4ac, 0x8c284a80, a3);
    uVar1 = game_sub_024824(0x8c284bbc);
    uVar3 = 0x8c284bb0;
    pcVar2 = free_if_nonnull_wrap_03a454;
    global_list_push(uVar1, free_if_nonnull_wrap_03a454, 0x8c284bb0, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284bd8, pcVar2, uVar3, a3);
    uVar3 = 0x8c284bcc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284bcc, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284bf4, pcVar2, uVar3, a3);
    uVar3 = 0x8c284be8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284be8, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284c10, pcVar2, uVar3, a3);
    uVar3 = 0x8c284c04;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284c04, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284c2c, pcVar2, uVar3, a3);
    uVar3 = 0x8c284c20;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284c20, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284c48, pcVar2, uVar3, a3);
    uVar3 = 0x8c284c3c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284c3c, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284c64, pcVar2, uVar3, a3);
    uVar3 = 0x8c284c58;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284c58, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284c80, pcVar2, uVar3, a3);
    uVar3 = 0x8c284c74;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284c74, a3);
    uVar1 = Vec3_ctor_xyz(0x8c284c9c, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c284c90, a3);
    uVar3 = 0x8c284c10;
    uVar1 = Class_129938_ctor_init(0x8c284cb8, 0x8c284bd8, 0x8c284bf4, 0x8c284c10, 0x8c284c2c, 0x8c284c48, 0x8c284c64,
                                   0x8c284c80, 0x8c284c9c);
    uVar1 = global_list_push(uVar1, Class_129938_dtor, 0x8c284cac, uVar3);
    return uVar1;
}

/*
 * CMushroomerLine_ctor  0x8c09d9c0
 * "MushroomerLine": CAnimal_ctor(kind 1), vtable 0x8c12ab2c
 * called by: CItemGLoader_sub_0fef94
 * strings: "MushroomerLine"
 */
int CMushroomerLine_ctor(int a0, u32 a1) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    ar7_00 = 1;
    ar6_00 = 1;
    ar5_00 = 1;
    (*(code *)(&CAnimal_ctor))(a0, 1, 1, 1, 0, a1, 0x8c284d90, 0x8c284ec0, *(u32 *)(&DATA_8c13aafc));
    *(u8 **)(a0 + 8) = (&DATA_8c12ab2c);
    Class_12acc8_ctor(a0 + 0x490, ar5_00, ar6_00);
    Class_12ad14_ctor(a0 + 0xcc4, ar5_00, ar6_00, ar7_00);
    Class_129938_ctor(a0 + 0xf3c, ar5_00, ar6_00);
    (*(code *)(&sprintf))(a0 + 0xc, ar5_00, ar6_00, ar7_00, "MushroomerLine");
    *(int *)(0x308 + a0) = a0 + 0x490;
    *(int *)(0x30c + a0) = a0 + 0xcc4;
    (*(code *)(&game_sub_0f532c))(a0, *(u32 *)(0xb4 + *(int *)(0x328 + a0)), a0 + 0xf3c, ar7_00);
    *(u32 *)(0xfd0 + a0) = 0;
    return a0;
}

/*
 * Class_12ab2c_m0_09dab8  0x8c09dab8
 */
int Class_12ab2c_m0_09dab8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12ab2c;
        Class_12ab2c_sub_09efb4(a0);
        Class_129938_dtor(a0 + 0xf3c, 0xffffffff, a2, a3);
        Class_12ad14_dtor(a0 + 0xcc4, 0xffffffff, a2, a3);
        Class_12acc8_dtor(a0 + 0x490, 0xffffffff, a2, a3);
        ar5_00 = 0;
        CAnimal_m0_025688(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12ab2c_m2_09db4c  0x8c09db4c
 */
u32 Class_12ab2c_m2_09db4c(int a0, u32 a1, u32 a2, int *a3) {
    int iVar1;
    int *a7;
    float extraout_fr1;
    float fVar2;
    float extraout_fr1_00;
    char cVar3;
    u8 bStack_10;

    cVar3 = '\0';
    a7 = a3;
    CAnimal_m2_02573c(a0, a1, a2, a3);
    (**(code **)(*a3 + 0x198))(a3, a1, a2, a7);
    if (((bStack_10 & 3) >> 1) - ((int)((u32)bStack_10 << 0x1f) >> 0x1f) == 2) {
        if (0 < *(int *)(a0 + 0xfd0)) {
            fVar2 = extraout_fr1;
            if (cVar3 == '\0') {
                fVar2 = *(float *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4);
            }
            if (fVar2 != 0.0) {
                Class_12ab2c_sub_09edf0(a0);
            }
        }
    } else {
        iVar1 = get_field_124_027930(a0 + 0xcc4, a1, a2, a7);
        if ((iVar1 == 2) || (iVar1 = get_field_124_027930(a0 + 0xcc4, a1, a2, a7), iVar1 == 9)) {
            Class_12ab2c_sub_09ea78(a0, a1, a2, a7);
        } else if (0 < *(int *)(a0 + 0xfd0)) {
            fVar2 = extraout_fr1_00;
            if (cVar3 == '\0') {
                fVar2 = *(float *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4);
            }
            if (fVar2 != 0.0) {
                Class_12ab2c_sub_09edf0(a0);
            }
        }
    }
    return 1;
}

/*
 * set_field_83_u8_wrap_09dc64  0x8c09dc64
 * only calls set_field_83_u8
 */
u32 set_field_83_u8_wrap_09dc64(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = set_field_83_u8(*(u32 *)(0x308 + a0), a1);
    return uVar1;
}

/*
 * Class_12ab2c_m4_09dc8c  0x8c09dc8c
 */
u32 Class_12ab2c_m4_09dc8c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    uVar1 = (**(code **)(**(int **)(0x30c + a0) + 0x14))(*(int **)(0x30c + a0), a1, a2, a3);
    return uVar1;
}

/*
 * Class_12ab2c_m5_09dcf8  0x8c09dcf8
 */
u32 Class_12ab2c_m5_09dcf8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    uVar1 = (**(code **)(**(int **)(0x30c + a0) + 0x14))(*(int **)(0x30c + a0), a1, a2, a3);
    return uVar1;
}

/*
 * Class_12ab2c_m6_09dd64  0x8c09dd64
 */
u32 Class_12ab2c_m6_09dd64(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    clear_field_144_u8(a0 + 0x174);
    uVar1 = (**(code **)(**(int **)(0x30c + a0) + 0x14))(*(int **)(0x30c + a0), a1, a2, a3);
    return uVar1;
}

/*
 * Class_12ab2c_sub_09dde4  0x8c09dde4
 * area name: sits between Class_12ab2c functions (same compilation unit)
 */
u32 Class_12ab2c_sub_09dde4(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 in_PR;

    if (*(int *)(a0 + 0xfd0) != 0) {
        r5 = 1;
        flags_4c0ed0_set(*(int *)(a0 + 0xfd0) + 1, 1);
    }
    gfxlib_sub_2219de(2, r5, r6, r7, in_PR);
    gfxlib_sub_2219de(3, r5, r6, r7, in_PR);
    gfxlib_sub_2219de(4, r5, r6, r7, in_PR);
    kamui_sub_21418e(2, r5, r6, r7, in_PR);
    kamui_sub_21418e(3, r5, r6, r7, in_PR);
    uVar1 = kamui_sub_21418e(4, r5, r6, r7, in_PR);
    return uVar1;
}

/*
 * lights_2_to_4_off  0x8c09de7c
 * clears light flags 2..4 in both light tables (8c4c0ed0, 8c4c0db0)
 */
u32 lights_2_to_4_off(void) {
    u32 uVar1;

    flags_4c0ed0_set(2, 0);
    flags_4c0ed0_set(3, 0);
    flags_4c0ed0_set(4, 0);
    flags_4c0db0_set(2, 0);
    flags_4c0db0_set(3, 0);
    uVar1 = flags_4c0db0_set(4, 0);
    return uVar1;
}

/*
 * Class_12ab2c_sub_09dec8  0x8c09dec8
 * area name: sits between Class_12ab2c functions (same compilation unit)
 */
int Class_12ab2c_sub_09dec8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int *piVar2;
    int iVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    float fVar7;
    double dVar8;
    float fVar9;
    int iVar10;
    int ar5_00;
    char cVar11;
    char cVar12;
    u32 in_stack_ffffff8c;
    u32 uStack_4c;
    u32 uStack_34;

    cVar12 = '\0';
    cVar11 = '\0';
    iVar1 = (**(code **)(*(int *)(a0 + 8) + 0xb4))(a0, a1, a2, a3);
    if (iVar1 == 0) {
        gfx_set_color4_4aa52c(a0 + 0x438);
    }
    g_8c284fb4 = get_field_24c_09e1f8(a0 + 0xcc4);
    piVar2 = (int *)get_field_4_0253e4(*(int *)(a0 + 0x328) + 0x78, a1, a2, a3);
    uVar6 = *(u32 *)(*piVar2 + 8);
    *(u32 *)(*piVar2 + 8) = *(u32 *)(g_8c284fb4 * 0xc + *piVar2 + 8);
    *(u32 *)(g_8c284fb4 * 0xc + *piVar2 + 8) = uVar6;
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, a1, a2);
    matrix_push(0, a1, a2, a3, in_stack_ffffff8c);
    touch_fields_30_3c(0, a1, a2, a3, in_stack_ffffff8c);
    if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar8 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
    } else {
        fVar7 = SUB84(dVar8 * dVar8, 0);
    }
    if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x43b40000, fVar7);
    } else {
        dVar8 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
        iVar1 = (int)(SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20));
    } else {
        iVar1 = (int)(dVar8 / dVar8);
    }
    if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar8 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
    } else {
        fVar7 = SUB84(dVar8 * dVar8, 0);
    }
    if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x43b40000, fVar7);
    } else {
        dVar8 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
        iVar10 = (int)(SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20));
    } else {
        iVar10 = (int)(dVar8 / dVar8);
    }
    if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar8 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
    } else {
        fVar7 = SUB84(dVar8 * dVar8, 0);
    }
    if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x43b40000, fVar7);
    } else {
        dVar8 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
        fVar9 = (float)((u64)dVar8 >> 0x20);
        fVar7 = SUB84(dVar8, 0) / fVar9;
        dVar8 = (double)CONCAT44(fVar9, fVar7);
        ar5_00 = (int)fVar7;
    } else {
        dVar8 = dVar8 / dVar8;
        ar5_00 = (int)dVar8;
    }
    uStack_4c = (u32)((u64)dVar8 >> 0x20);
    njRotateXYZ(0, ar5_00, iVar10, iVar1, in_stack_ffffff8c);
    matrix_scale(0, ar5_00, iVar10, iVar1, in_stack_ffffff8c);
    iVar3 = (**(code **)(*(int *)(a0 + 8) + 0xb4))(a0, ar5_00, iVar10, iVar1);
    if (iVar3 == 0) {
        uStack_34 = uStack_4c;
        uVar4 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
        iVar3 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_00, iVar10);
        uVar6 = deref_u32(*(int *)(*(int *)(a0 + 0x328) + 0xa0) + iVar3 * 4);
        iVar3 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_00, iVar10);
        uVar5 = get_field_0_026d74(*(int *)(*(int *)(a0 + 0x328) + 0xa8) + iVar3 * 4);
        CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_00, iVar10, iVar1);
        if (cVar12 == '\0') {
            uStack_34 = uVar5;
        }
        gfxlib_sub_21bbb0(uVar4, uVar6, uStack_34, iVar1, in_stack_ffffff8c);
    } else {
        uVar4 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
        iVar3 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_00, iVar10);
        uVar6 = deref_u32(*(int *)(*(int *)(a0 + 0x328) + 0xa0) + iVar3 * 4);
        iVar3 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_00, iVar10);
        uVar5 = get_field_0_026d74(*(int *)(*(int *)(a0 + 0x328) + 0xa8) + iVar3 * 4);
        CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_00, iVar10, iVar1);
        if (cVar12 == '\0') {
            uStack_4c = uVar5;
        }
        gfxlib_sub_21af26(uVar4, uVar6, uStack_4c);
        uStack_34 = uStack_4c;
    }
    matrix_pop_n(1);
    uVar4 = *(u32 *)(g_8c284fb4 * 0xc + *piVar2 + 8);
    *(u32 *)(g_8c284fb4 * 0xc + *piVar2 + 8) = *(u32 *)(*piVar2 + 8);
    *(u32 *)(*piVar2 + 8) = uVar4;
    iVar10 = (**(code **)(*(int *)(a0 + 8) + 0xb4))(a0, uVar6, uStack_34, iVar1);
    if (iVar10 == 0) {
        iVar10 = gfx_set_color4_4aa52c(&g_8c13aad4);
    }
    return iVar10;
}

/*
 * get_field_24c_09e1f8  0x8c09e1f8
 * called by: Class_12ab2c_sub_09dec8, game_sub_09e2e8
 */
u32 get_field_24c_09e1f8(int a0) {
    return *(u32 *)(0x24c + a0);
}

/*
 * game_sub_09e204  0x8c09e204
 * area name: game code; nothing names its area yet
 */
u32 game_sub_09e204(int a0) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    int iVar2;
    float fVar3;
    double dVar4;
    int ar6_00;
    int ar5_00;
    char cVar5;
    char cVar6;
    u32 in_stack_ffffffec;

    cVar6 = '\0';
    cVar5 = '\0';
    iVar2 = a0 + 0x5c;
    Vec3_assign_copy_023e24(&stack0xffffffec, iVar2);
    Vec3_set_one_08a9b8(a0 + 0x5c);
    matrix_push(0, iVar2, r6, r7, in_stack_ffffffec);
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar4 = 1.4411521878487204e+18;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar4 = -3.739346301775294e-250;
    }
    if (cVar5 == '\0') {
        iVar2 = (int)(SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20));
    } else {
        iVar2 = (int)(dVar4 / dVar4);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar4 = 1.4411521878487204e+18;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar4 = -3.739346301775294e-250;
    }
    if (cVar5 == '\0') {
        ar6_00 = (int)(SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20));
    } else {
        ar6_00 = (int)(dVar4 / dVar4);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar4 = 1.4411521878487204e+18;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar4 = -3.739346301775294e-250;
    }
    if (cVar5 == '\0') {
        ar5_00 = (int)(SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20));
    } else {
        ar5_00 = (int)(dVar4 / dVar4);
    }
    njRotateXYZ(0, ar5_00, ar6_00, iVar2, in_stack_ffffffec);
    matrix_scale(0, ar5_00, ar6_00, iVar2, in_stack_ffffffec);
    (**(code **)(*(int *)(a0 + 8) + 0x3c))(a0, ar5_00, ar6_00, iVar2);
    matrix_pop_n(1);
    Vec3_assign_copy(a0 + 0x5c, &stack0xffffffec);
    uVar1 = free_if_nonnull_wrap_016ac4(&stack0xffffffec, 0xffffffff, ar6_00, iVar2);
    return uVar1;
}

/*
 * game_sub_09e2e8  0x8c09e2e8
 * area name: game code; nothing names its area yet
 */
int game_sub_09e2e8(int a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    int iVar2;
    u32 ar5_00;
    u32 uVar3;
    u32 uVar4;
    float fVar5;
    double dVar6;
    float fVar7;
    int iVar8;
    int ar6_00;
    int ar5_01;
    char cVar9;
    char cVar10;
    u32 in_stack_ffffffb8;
    u32 uStack_2c;

    cVar10 = '\0';
    cVar9 = '\0';
    g_8c284fb8 = get_field_24c_09e1f8(a0 + 0xcc4);
    piVar1 = (int *)get_field_4_0253e4(*(int *)(a0 + 0x328) + 0x78, a1, a2, a3);
    uVar4 = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = *(u32 *)(g_8c284fb8 * 0xc + *piVar1 + 8);
    *(u32 *)(g_8c284fb8 * 0xc + *piVar1 + 8) = uVar4;
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, a1, a2);
    matrix_push(0, a1, a2, a3, in_stack_ffffffb8);
    touch_fields_30_3c(0, a1, a2, a3, in_stack_ffffffb8);
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar6 = 1.4411521878487204e+18;
    }
    if (cVar9 == '\0') {
        fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000, fVar5);
    } else {
        dVar6 = -3.739346301775294e-250;
    }
    if (cVar9 == '\0') {
        iVar8 = (int)(SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20));
    } else {
        iVar8 = (int)(dVar6 / dVar6);
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar6 = 1.4411521878487204e+18;
    }
    if (cVar9 == '\0') {
        fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000, fVar5);
    } else {
        dVar6 = -3.739346301775294e-250;
    }
    if (cVar9 == '\0') {
        ar6_00 = (int)(SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20));
    } else {
        ar6_00 = (int)(dVar6 / dVar6);
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar6 = 1.4411521878487204e+18;
    }
    if (cVar9 == '\0') {
        fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000, fVar5);
    } else {
        dVar6 = -3.739346301775294e-250;
    }
    if (cVar9 == '\0') {
        fVar7 = (float)((u64)dVar6 >> 0x20);
        fVar5 = SUB84(dVar6, 0) / fVar7;
        dVar6 = (double)CONCAT44(fVar7, fVar5);
        ar5_01 = (int)fVar5;
    } else {
        dVar6 = dVar6 / dVar6;
        ar5_01 = (int)dVar6;
    }
    uStack_2c = (u32)((u64)dVar6 >> 0x20);
    njRotateXYZ(0, ar5_01, ar6_00, iVar8, in_stack_ffffffb8);
    matrix_scale(0, ar5_01, ar6_00, iVar8, in_stack_ffffffb8);
    uVar4 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_01, ar6_00);
    ar5_00 = deref_u32(*(int *)(*(int *)(a0 + 0x328) + 0xa0) + iVar2 * 4);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_01, ar6_00);
    uVar3 = get_field_0_026d74(*(int *)(*(int *)(a0 + 0x328) + 0xa8) + iVar2 * 4);
    CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_01, ar6_00, iVar8);
    if (cVar10 == '\0') {
        uStack_2c = uVar3;
    }
    gfxlib_sub_21bbb0(uVar4, ar5_00, uStack_2c, iVar8, in_stack_ffffffb8);
    matrix_pop_n(1);
    uVar4 = *(u32 *)(g_8c284fb8 * 0xc + *piVar1 + 8);
    *(u32 *)(g_8c284fb8 * 0xc + *piVar1 + 8) = *(u32 *)(*piVar1 + 8);
    iVar8 = *piVar1;
    *(u32 *)(iVar8 + 8) = uVar4;
    return iVar8;
}

/*
 * game_sub_09e4fc  0x8c09e4fc
 * area name: game code; nothing names its area yet
 */
u32 game_sub_09e4fc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar5_00;
    u32 uVar3;
    u32 extraout_fr0;
    char cVar4;
    u32 uStack_1c;

    cVar4 = '\0';
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, a1, a2);
    uVar1 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2);
    ar5_00 = deref_u32(*(int *)(*(int *)(a0 + 0x328) + 0xa0) + iVar2 * 4);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2);
    uVar3 = get_field_0_026d74(*(int *)(*(int *)(a0 + 0x328) + 0xa8) + iVar2 * 4);
    CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2, a3);
    uStack_1c = extraout_fr0;
    if (cVar4 == '\0') {
        uStack_1c = uVar3;
    }
    uVar1 = gfxlib_sub_21bbb0(uVar1, ar5_00, uStack_1c, a3, iVar2);
    return uVar1;
}

/*
 * MushroomerLine_asset_tables_init  0x8c09e5c0
 * fills the Mushroomer line asset tables (Mr3, MUSHROOMER_LINE_BODY)
 * called by: game_init_sound_and_messages
 */
u32 MushroomerLine_asset_tables_init(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u64 *puVar1;
    float *pfVar2;
    u32 uVar3;
    int iVar4;
    float in_fr1;
    double dVar5;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u8 auStack_2c[12];
    u8 auStack_20[12];
    u8 auStack_14[16];

    cVar7 = '\0';
    cVar6 = '\0';
    for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
        *(u32 *)(iVar4 * 0x124 + 0x8c284d90) = 0;
        *(u32 *)(iVar4 * 0x124 + 0x8c284e30) = 0;
        *(u32 *)(iVar4 * 0x124 + 0x8c284e44) = 0;
        *(u16 *)(iVar4 * 0x124 + 0x8c284e34) = 0;
        *(u16 *)(iVar4 * 0x124 + 0x8c284e3c) = 0;
    }
    for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
        *(u8 ***)(iVar4 * 0x124 + 0x8c284d94) = &PTR_s_Mr3_Breathe_njm_8c13ab18;
        *(u8 ***)(iVar4 * 0x124 + 0x8c284d98) = &PTR_s_Mr3_Breathe_njs_8c13ab54;
        *(u8 **)(iVar4 * 0x124 + 0x8c284d9c) = PTR_s_Mr3_Home_njd_8c13ab04;
        *(u32 *)(iVar4 * 0x124 + 0x8c284da0) = 0;
        *(u8 **)(iVar4 * 0x124 + 0x8c284da4) = PTR_s_MUSHROOMER_LINE_BODY_8c13ab10;
        *(u8 **)(iVar4 * 0x124 + 0x8c284da8) = PTR_s_mr_MotionPack_npd_8c13ab08;
        *(u8 **)(iVar4 * 0x124 + 0x8c284dac) = PTR_s_Hand_for_mr3_njm_8c13ab14;
        *(u8 **)(iVar4 * 0x124 + 0x8c284db0) = PTR_s_Mush_pvm_8c13ab0c;
        *(u32 *)(iVar4 * 0x124 + 0x8c284db4) = 7;
        *(u32 *)(iVar4 * 0x124 + 0x8c284dc0) = 0x8c284ed0;
        *(u32 *)(iVar4 * 0x124 + 0x8c284e44) = 0x8c2850a8;
        puVar1 = (u64 *)(iVar4 * 0x124 + 0x8c284e4c);
        if (cVar7 == '\0') {
            *(u32 *)puVar1 = 0x3f800000;
        } else {
            *puVar1 = CONCAT44(0x3f800000, in_fr1);
        }
        puVar1 = (u64 *)(iVar4 * 0x124 + 0x8c284e5c);
        if (cVar7 == '\0') {
            *(u32 *)puVar1 = 0x3f800000;
        } else {
            *puVar1 = CONCAT44(0x3f800000, in_fr1);
        }
        puVar1 = (u64 *)(iVar4 * 0x124 + 0x8c284e60);
        if (cVar7 == '\0') {
            *(u32 *)puVar1 = 0x3f800000;
        } else {
            *puVar1 = CONCAT44(0x3f800000, in_fr1);
        }
        puVar1 = (u64 *)(iVar4 * 0x124 + 0x8c284e64);
        if (cVar7 == '\0') {
            *(u32 *)puVar1 = 0x43340000;
        } else {
            *puVar1 = 0xa043340000;
        }
        *(u32 *)(iVar4 * 0x124 + 0x8c284e30) = 0x8c284f30;
        *(u16 *)(iVar4 * 0x124 + 0x8c284e34) = 0xf;
        *(u32 *)(iVar4 * 0x124 + 0x8c284e38) = 0x8c284f78;
        *(u16 *)(iVar4 * 0x124 + 0x8c284e3c) = 0xf;
        Vec3_set_xyz(auStack_14, a1, a2, a3);
        vec3_copy_8c023d8c(iVar4 * 0x124 + 0x8c284e88, auStack_14, a2, a3);
        uVar3 = 0xffffffff;
        object_dtor_delete(auStack_14, 0xffffffff, a2, a3);
        Vec3_set_xyz(auStack_20, uVar3, a2, a3);
        vec3_copy_8c023d8c(iVar4 * 0x124 + 0x8c284e94, auStack_20, a2, a3);
        uVar3 = 0xffffffff;
        object_dtor_delete(auStack_20, 0xffffffff, a2, a3);
        Vec3_set_xyz(auStack_2c, uVar3, a2, a3);
        vec3_copy_8c023d8c(iVar4 * 0x124 + 0x8c284ea0, auStack_2c, a2, a3);
        a1 = 0xffffffff;
        object_dtor_delete(auStack_2c, 0xffffffff, a2, a3);
        puVar1 = (u64 *)(iVar4 * 0x124 + 0x8c284eb0);
        if (cVar7 == '\0') {
            *(u32 *)puVar1 = 0x43160000;
        } else {
            *puVar1 = 0xec43160000;
        }
        puVar1 = (u64 *)(iVar4 * 0x124 + 0x8c284e7c);
        if (cVar7 == '\0') {
            *(u32 *)puVar1 = 0x41100000;
        } else {
            *puVar1 = 0xc841100000;
        }
        pfVar2 = (float *)(iVar4 * 0x124 + 0x8c284e58);
        puVar1 = (u64 *)(iVar4 * 0x124 + 0x8c284e58);
        if (cVar7 == '\0') {
            dVar5 = (double)CONCAT44(0x3e4ccccd, *(u32 *)puVar1);
        } else {
            in_xd0 = *puVar1;
            dVar5 = 4.92819431073484e-312;
        }
        if (cVar6 == '\0') {
            in_fr1 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
        } else {
            in_fr1 = SUB84(dVar5 * dVar5, 0);
        }
        if (cVar7 == '\0') {
            *pfVar2 = in_fr1;
        } else {
            *(u64 *)pfVar2 = in_xd0;
        }
        puVar1 = (u64 *)(iVar4 * 0x124 + 0x8c284e78);
        if (cVar7 == '\0') {
            *(u32 *)puVar1 = 0x41e80000;
        } else {
            in_fr1 = 29.0;
            *puVar1 = 0x54f31fe341e80000;
        }
    }
    for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
        *(u16 *)(iVar4 * 0x10 + 0x8c284ec0) = 0xffff;
        *(u32 *)(iVar4 * 0x10 + 0x8c284ec4) = 1;
        *(u32 *)(iVar4 * 0x10 + 0x8c284ec8) = 0;
        *(u32 *)(iVar4 * 0x10 + 0x8c284ecc) = 0;
    }
    return 1;
}

/*
 * Class_12ab2c_sub_09ea78  0x8c09ea78
 * area name: only called from Class_12ab2c methods
 * called by: Class_12ab2c_m2_09db4c
 */
u32 Class_12ab2c_sub_09ea78(int a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    u32 uVar2;
    int iVar3;
    float *pfVar4;
    u8 *ar4_00;
    int ar5_00;
    u32 ar5_01;
    float fVar5;
    u64 in_dr0;
    double dVar6;
    code *pcVar7;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    u32 in_stack_ffffff88;
    u8 auStack_1c[8];
    u64 uStack_14;

    cVar9 = '\0';
    cVar8 = '\0';
    ar4_00 = auStack_1c;
    Vec3_ctor_zero(ar4_00, a1, a2);
    if (g_8c284d80 < 3) {
        uVar2 = rand();
        a1 = 5;
        iVar3 = libgcc_divide_helper_01031c(uVar2, 5, a2);
        if (iVar3 == 0) {
            for (iVar3 = 0; fVar5 = (float)in_dr0, iVar3 < 3; iVar3 = iVar3 + 1) {
                if (cVar9 == '\0') {
                    fVar5 = *(float *)(&g_8c13aae4 + iVar3 * 4);
                } else {
                    in_xd0 = *(u64 *)(&g_8c13aae4 + iVar3 * 4);
                }
                in_dr0 = (u64)(u32)fVar5;
                if ((fVar5 == 0.0) && (*(int *)(a0 + 0xfd0) == 0)) {
                    light_set_vec_4c0ef4(iVar3 + 2, a1, a2, a3, in_stack_ffffff88);
                    ar5_00 = a0 + 0x30;
                    Vec3_assign(auStack_1c, ar5_00, a2, a3);
                    if (cVar9 == '\0') {
                        dVar6 = (double)CONCAT44(0x41700000, (u32)uStack_14);
                    } else {
                        dVar6 = -3.1600868374053233e-250;
                        in_xd0 = uStack_14;
                    }
                    if (cVar8 == '\0') {
                        fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
                    } else {
                        fVar5 = SUB84(dVar6 + dVar6, 0);
                    }
                    uVar1 = in_xd0;
                    if (cVar9 == '\0') {
                        uStack_14 = CONCAT44(uStack_14._4_4_, fVar5);
                        uVar1 = uStack_14;
                    }
                    uStack_14 = uVar1;
                    light_set_vector(iVar3 + 2, ar5_00, a2, a3, in_stack_ffffff88);
                    if (cVar9 == '\0') {
                        *(u32 *)(&g_8c13aae4 + iVar3 * 4) = 0x3dcccccd;
                    } else {
                        *(u64 *)(&g_8c13aae4 + iVar3 * 4) = 0x8c22195c3dcccccd;
                    }
                    *(u32 *)(&g_8c13aaf0 + iVar3 * 4) = 1;
                    g_8c284d80 = g_8c284d80 + 1;
                    *(int *)(a0 + 0xfd0) = iVar3 + 1;
                    a1 = 1;
                    flags_4c0ed0_set(*(int *)(a0 + 0xfd0) + 1, 1);
                    break;
                }
            }
        }
    }
    if (*(int *)(a0 + 0xfd0) != 0) {
        light_set_vec_4c0ef4(*(int *)(a0 + 0xfd0) + 1, a1, a2, a3, in_stack_ffffff88);
        light_set_vec_4c0dd4(*(int *)(a0 + 0xfd0) + 1, a1, a2, a3, in_stack_ffffff88);
        light_set_vector(*(int *)(a0 + 0xfd0) + 1, a1, a2, a3, in_stack_ffffff88);
        iVar3 = *(int *)(a0 + 0xfd0) + 1;
        light_set_vector_b(iVar3, a1, a2, a3, in_stack_ffffff88);
        if (*(int *)(&g_8c13aaf0 + (*(int *)(a0 + 0xfd0) + -1) * 4) == 1) {
            pfVar4 = (float *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4);
            if (cVar9 == '\0') {
                dVar6 = (double)CONCAT44(0x3c23d70a, *pfVar4);
            } else {
                in_xd0 = *(u64 *)pfVar4;
                dVar6 = -3.01216570193662e-250;
            }
            if (cVar8 == '\0') {
                fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 + dVar6, 0);
            }
            if (cVar9 == '\0') {
                *pfVar4 = fVar5;
            } else {
                *(u64 *)pfVar4 = in_xd0;
            }
            if (cVar9 == '\0') {
                fVar5 = *(float *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4);
            }
            if (cVar8 != '\0' || 1.0 <= fVar5) {
                *(u32 *)(&g_8c13aaf0 + (*(int *)(a0 + 0xfd0) + -1) * 4) = 0;
            }
        } else {
            pfVar4 = (float *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4);
            if (cVar9 == '\0') {
                dVar6 = (double)CONCAT44(0x3c23d70a, *pfVar4);
            } else {
                in_xd0 = *(u64 *)pfVar4;
                dVar6 = -3.01216570193662e-250;
            }
            if (cVar8 == '\0') {
                fVar5 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 - dVar6, 0);
            }
            if (cVar9 == '\0') {
                *pfVar4 = fVar5;
            } else {
                *(u64 *)pfVar4 = in_xd0;
            }
            if (cVar9 == '\0') {
                fVar5 = *(float *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4);
                pcVar7 = (code *)0x3dcccccd;
            } else {
                fVar5 = 0.1;
                pcVar7 = light_set_vec_4c0ef4;
            }
            if (cVar8 != '\0' || fVar5 <= (float)pcVar7) {
                uVar2 = rand();
                ar5_01 = 10;
                iVar3 = libgcc_divide_helper_01031c(uVar2, 10, a2);
                if (iVar3 == 0) {
                    if (cVar9 == '\0') {
                        *(u32 *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4) = 0;
                    } else {
                        *(u64 *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4) = (u64)(u32)fVar5;
                    }
                    light_set_vec_4c0ef4(*(int *)(a0 + 0xfd0) + 1, ar5_01, a2, a3, in_stack_ffffff88);
                    light_set_vec_4c0dd4(*(int *)(a0 + 0xfd0) + 1, ar5_01, a2, a3, in_stack_ffffff88);
                    g_8c284d80 = g_8c284d80 + -1;
                    flags_4c0ed0_set(*(int *)(a0 + 0xfd0) + 1, 0);
                    flags_4c0db0_set(*(int *)(a0 + 0xfd0) + 1, 0);
                    *(u32 *)(a0 + 0xfd0) = 0;
                } else {
                    *(u32 *)(&g_8c13aaf0 + (*(int *)(a0 + 0xfd0) + -1) * 4) = 1;
                }
            }
        }
    }
    uVar2 = Vec3_dtor(auStack_1c, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * Class_12ab2c_sub_09edf0  0x8c09edf0
 * area name: only called from Class_12ab2c methods
 * called by: Class_12ab2c_m2_09db4c
 */
u32 *Class_12ab2c_sub_09edf0(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 *puVar1;
    float *pfVar2;
    float fVar3;
    double dVar4;
    code *pcVar5;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u32 in_stack_ffffffcc;

    cVar7 = '\0';
    cVar6 = '\0';
    light_set_vector(*(int *)(a0 + 0xfd0) + 1, r5, r6, r7, in_stack_ffffffcc);
    light_set_vec_4c0ef4(*(int *)(a0 + 0xfd0) + 1, r5, r6, r7, in_stack_ffffffcc);
    light_set_vector_b(*(int *)(a0 + 0xfd0) + 1, r5, r6, r7, in_stack_ffffffcc);
    light_set_vec_4c0dd4(*(int *)(a0 + 0xfd0) + 1, r5, r6, r7, in_stack_ffffffcc);
    pfVar2 = (float *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4);
    if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(0x3c23d70a, *pfVar2);
    } else {
        in_xd0 = *(u64 *)pfVar2;
        dVar4 = 5.2386906893627653e-11;
    }
    if (cVar6 == '\0') {
        fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 - dVar4, 0);
    }
    if (cVar7 == '\0') {
        *pfVar2 = fVar3;
    } else {
        *(u64 *)pfVar2 = in_xd0;
    }
    if (cVar7 == '\0') {
        fVar3 = *(float *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4);
    }
    puVar1 = &g_8c09efa0;
    if (cVar7 == '\0') {
        pcVar5 = (code *)0x3dcccccd;
    } else {
        fVar3 = 0.1;
        pcVar5 = flags_4c0ed0_set;
    }
    if (cVar6 != '\0' || fVar3 <= (float)pcVar5) {
        light_set_vec_4c0ef4(*(int *)(a0 + 0xfd0) + 1, r5, r6, r7, in_stack_ffffffcc);
        light_set_vec_4c0dd4(*(int *)(a0 + 0xfd0) + 1, r5, r6, r7, in_stack_ffffffcc);
        flags_4c0ed0_set(*(int *)(a0 + 0xfd0) + 1, 0);
        flags_4c0db0_set(*(int *)(a0 + 0xfd0) + 1, 0);
        g_8c284d80 = g_8c284d80 + -1;
        *(u32 *)(&g_8c13aaf0 + (*(int *)(a0 + 0xfd0) + -1) * 4) = 0;
        if (cVar7 == '\0') {
            *(u32 *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4) = 0;
        } else {
            *(u64 *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4) = (u64)(u32)fVar3;
        }
        puVar1 = (u32 *)0xfd0;
        *(u32 *)(a0 + 0xfd0) = 0;
    }
    return puVar1;
}

/*
 * Class_12ab2c_sub_09efb4  0x8c09efb4
 * area name: only called from Class_12ab2c methods
 * called by: Class_12ab2c_m0_09dab8
 */
u32 Class_12ab2c_sub_09efb4(int a0) {
    u32 uVar1;

    uVar1 = 0;
    if (*(int *)(a0 + 0xfd0) != 0) {
        g_8c284d80 = g_8c284d80 + -1;
        *(u32 *)(&g_8c13aae4 + (*(int *)(a0 + 0xfd0) + -1) * 4) = 0;
        *(u32 *)(&g_8c13aaf0 + (*(int *)(a0 + 0xfd0) + -1) * 4) = 0;
        flags_4c0ed0_set(*(int *)(a0 + 0xfd0) + 1, 1);
        flags_4c0db0_set(*(int *)(a0 + 0xfd0) + 1, 1);
        uVar1 = 0xfd0;
        *(u32 *)(a0 + 0xfd0) = 0;
    }
    return uVar1;
}

/*
 * Class_12ab2c_m3_09f038  0x8c09f038
 */
u32 Class_12ab2c_m3_09f038(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x10))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * Class_12ab2c_sub_09f060  0x8c09f060
 * area name: sits between Class_12ab2c functions (same compilation unit)
 */
u32 Class_12ab2c_sub_09f060(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    u32 ar7_00;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126110, a1, a2, a3);
    uVar3 = 0x8c284d50;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284d50, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126120, pcVar2, uVar3, a3);
    uVar3 = 0x8c284d5c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284d5c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126130, pcVar2, uVar3, a3);
    uVar3 = 0x8c284d68;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284d68, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126140, pcVar2, uVar3, a3);
    uVar3 = 0x8c284d74;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284d74, a3);
    if (cVar4 == '\0') {
        g_8c126150 = CONCAT44(_UNK_8c126154, 0x800000);
        /* WARNING: Read-only address (ram,0x8c126154) is written */
    } else {
        g_8c126150 = 0xffffffff00800000;
    }
    uVar1 = game_sub_02452c(0x8c284d90, pcVar2);
    uVar3 = 0x8c284d84;
    pcVar2 = game_sub_03a4ac;
    global_list_push(uVar1, game_sub_03a4ac, 0x8c284d84, a3);
    uVar1 = game_sub_024824(0x8c284ec0);
    global_list_push(uVar1, free_if_nonnull_wrap_03a454, 0x8c284eb4, a3);
    uVar1 = 4;
    vec_new_array(0x8c284f30, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 0xf);
    global_list_push(0, destroy_array_8c284f30, 0x8c284f24, uVar1);
    ar7_00 = 4;
    vec_new_array(0x8c284f78, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 0xf);
    uVar1 = 0x8c284f6c;
    pcVar2 = destroy_array_8c284f78;
    global_list_push(0, destroy_array_8c284f78, 0x8c284f6c, ar7_00);
    uVar1 = Vec3_ctor_xyz(0x8c284fc8, pcVar2, uVar1, ar7_00);
    uVar3 = 0x8c284fbc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284fbc, ar7_00);
    uVar1 = Vec3_ctor_xyz(0x8c284fe4, pcVar2, uVar3, ar7_00);
    uVar3 = 0x8c284fd8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284fd8, ar7_00);
    uVar1 = Vec3_ctor_xyz(0x8c285000, pcVar2, uVar3, ar7_00);
    uVar3 = 0x8c284ff4;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c284ff4, ar7_00);
    uVar1 = Vec3_ctor_xyz(0x8c28501c, pcVar2, uVar3, ar7_00);
    uVar3 = 0x8c285010;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285010, ar7_00);
    uVar1 = Vec3_ctor_xyz(0x8c285038, pcVar2, uVar3, ar7_00);
    uVar3 = 0x8c28502c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28502c, ar7_00);
    uVar1 = Vec3_ctor_xyz(0x8c285054, pcVar2, uVar3, ar7_00);
    uVar3 = 0x8c285048;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285048, ar7_00);
    uVar1 = Vec3_ctor_xyz(0x8c285070, pcVar2, uVar3, ar7_00);
    uVar3 = 0x8c285064;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285064, ar7_00);
    uVar1 = Vec3_ctor_xyz(0x8c28508c, pcVar2, uVar3, ar7_00);
    global_list_push(uVar1, Vec3_dtor, 0x8c285080, ar7_00);
    uVar3 = 0x8c285000;
    uVar1 = Class_129938_ctor_init(0x8c2850a8, 0x8c284fc8, 0x8c284fe4, 0x8c285000, 0x8c28501c, 0x8c285038, 0x8c285054,
                                   0x8c285070, 0x8c28508c);
    uVar1 = global_list_push(uVar1, Class_129938_dtor, 0x8c28509c, uVar3);
    return uVar1;
}

/*
 * destroy_array_8c284f78  0x8c09f36c
 * destroys the global array at 0x8c284f78
 */
u32 destroy_array_8c284f78(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c284f78, free_if_nonnull_wrap_03a3dc, 4, 0xf);
    return uVar1;
}

/*
 * destroy_array_8c284f30  0x8c09f390
 * destroys the global array at 0x8c284f30
 */
u32 destroy_array_8c284f30(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c284f30, free_if_nonnull_wrap_0247b0, 4, 0xf);
    return uVar1;
}

/*
 * Class_12acc8_ctor  0x8c09f3b4
 * Class_129c70_ctor with vtable 8c12acc8 (MushroomerLine state)
 * called by: CMushroomerLine_ctor
 */
u32 *Class_12acc8_ctor(u32 *a0, u32 a1, u32 a2) {
    Class_129c70_ctor(a0, a1, a2);
    *a0 = (&DATA_8c12acc8);
    Class_129c24_sub_0300a4((int)a0 + 0xa8);
    *(u32 *)(0x9c + (int)a0) = 0;
    *(u32 *)(0x828 + (int)a0) = 0xf;
    *(u32 *)(0x82c + (int)a0) = 0xf;
    *(u32 *)(0x830 + (int)a0) = 0xf;
    *(u8 *)(0xa4 + (int)a0) = 0;
    *(u32 *)(0xa0 + (int)a0) = 0;
    return a0;
}

/*
 * Class_12acc8_dtor  0x8c09f428
 * stores the vtable 0x8c12acc8
 * called by: Class_12ab2c_m0_09dab8
 */
u32 *Class_12acc8_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12acc8;
        ar5_00 = 0;
        Class_129c70_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12acc8_m1_09f470  0x8c09f470
 */
u32 Class_12acc8_m1_09f470(int *a0, int *a1, code *a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u8 *puVar5;
    u8 *puVar6;
    int *piVar7;
    u8 *puVar8;
    code *pcVar9;
    int *a5;
    u32 uVar10;
    code *pcVar11;
    u32 ar6_00;
    u32 *ar6_01;
    u32 in_fr1;
    float fVar12;
    float fVar13;
    double dVar14;
    u64 uVar15;
    double dVar16;
    double in_dr14;
    double in_xd0;
    char cVar17;
    char cVar18;
    u32 in_stack_fffffeb8;
    u16 uVar19;
    u64 uStack_108;
    float fStack_100;
    float fStack_fc;
    u32 uStack_c0;
    u32 uStack_bc;
    u32 uStack_b8;
    u32 uStack_b4;
    u32 auStack_b0[4];
    u8 auStack_a0[16];
    u8 auStack_90[16];
    u8 auStack_80[16];
    u8 auStack_70[16];
    u8 auStack_60[12];
    u8 auStack_54[32];
    float fStack_34;
    float fStack_30;
    u32 uStack_2c;
    int iStack_24;
    int iStack_20;
    int iStack_1c;
    u32 uStack_18;

    uVar19 = (u16)((u32)in_stack_fffffeb8 >> 0x10);
    cVar18 = '\0';
    cVar17 = '\0';
    piVar7 = a1;
    pcVar11 = a2;
    Vec3_ctor_zero(&iStack_24, a1, a2);
    Vec3_ctor_zero(&fStack_34, piVar7, pcVar11);
    puVar8 = auStack_54;
    puVar5 = &g_8c13aea4;
    iVar4 = 0x10;
    do {
        puVar6 = puVar5 + 1;
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar8[1] = *puVar6;
        puVar8 = puVar8 + 2;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (cVar18 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), 0xbf800000);
        uStack_b8 = 0;
    } else {
        auStack_b0[0] = 0;
        uStack_b8 = in_fr1;
    }
    uStack_b4 = 0;
    g_8c13ae98 = a0[0x20a];
    g_8c13ae9c = a0[0x20b];
    g_8c13aea0 = a0[0x20c];
    uVar1 = get_field_18e_div30(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc), 0xa0, pcVar11, a3);
    uVar3 = CONCAT22(uVar19, (u16)uVar1);
    if (0x78 < (u16)uVar1) {
        a0[0x27] = 0;
    }
    iVar4 = (**(code **)(*a1 + 0x11c))(a1, 2, pcVar11, a3);
    if (iVar4 == 1) {
        uVar10 = 0;
        uVar1 = (**(code **)(*a1 + 0x100))(a1, 2, 0, a3);
        Vec3_ctor_copy_wrap_02f670(uVar1, Vec3_ctor_copy_wrap_02f670, uVar10, a3, auStack_80);
        Vec3_assign(&iStack_24, auStack_80, uVar10, a3);
        Vec3_dtor(auStack_80, 0xffffffff, uVar10, a3);
        if (cVar18 == '\0') {
            a0[0x1c] = iStack_24;
            a0[0x1d] = iStack_20;
            dVar16 = (double)CONCAT44(iStack_1c, in_fr1);
            a0[0x1e] = iStack_1c;
        } else {
            *(u64 *)(a0 + 0x1c) = CONCAT44(iStack_20, iStack_24);
            *(u64 *)(a0 + 0x1d) = CONCAT44(iStack_1c, iStack_20);
            dVar16 = (double)CONCAT44(uStack_18, iStack_1c);
            *(double *)(a0 + 0x1e) = dVar16;
        }
        pcVar11 = (code *)(a0 + 0x1d);
    } else if (cVar18 == '\0') {
        a0[0x1e] = -0x383cb000;
        a0[0x1d] = -0x383cb000;
        dVar16 = (double)CONCAT44(0xc7c35000, in_fr1);
        a0[0x1c] = -0x383cb000;
    } else {
        a0[0x1e] = -0x383cb000;
        a0[0x1f] = 0x11c;
        a0[0x1d] = -0x383cb000;
        a0[0x1e] = 0x11c;
        dVar16 = 6.04302648840037e-312;
        a0[0x1c] = -0x383cb000;
        a0[0x1d] = 0x11c;
    }
    iVar4 = (**(code **)(*a1 + 0x11c))(a1, 3, pcVar11, a3);
    if (0 < iVar4) {
        set_field_10_02cbd4(*(int *)(a2 + 4) + 0xa8, 999);
    }
    pcVar11 = a2;
    Class_12acc8_sub_0a0040(a0, a1, a2, a3);
    iVar4 = (int)*(char *)((int)a0 + 0x82);
    dVar14 = dVar16;
    if ((*(char *)((int)a0 + 0x82) == '\x01') && (a0[1] != 1)) {
        (**(code **)(*a1 + 0x178))(a1, 1, pcVar11, a3);
        if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44(0x41200000, (int)((u64)dVar16 >> 0x20));
        } else {
            dVar14 = 3.48547133842862e-312;
            in_xd0 = dVar16;
        }
        if (cVar17 == '\0' && (float)((u64)dVar14 >> 0x20) < SUB84(dVar14, 0)) {
            if ((char)a0[0x29] == '\0') {
                *(u8 *)(a0 + 0x29) = 1;
                a0[1] = 0xc;
                a0[0x10] = 4;
                a0[2] = 0x55;
                a0[3] = 0;
                iVar4 = 0x505;
                list5_push(a0, 0x505);
            } else {
                uVar1 = rand();
                iVar4 = 3000;
                iVar2 = libgcc_divide_helper_01031c(uVar1, 3000, pcVar11);
                if (iVar2 == 1) {
                    a0[1] = 0xc;
                    a0[0x10] = 4;
                    a0[2] = 0x55;
                    a0[3] = 0;
                    iVar4 = 0x505;
                    list5_push(a0, 0x505);
                }
            }
            *(u8 *)((int)a0 + 0x82) = 0;
            goto LAB_8c09f768;
        }
    }
    *(u8 *)(a0 + 0x29) = 0;
LAB_8c09f768:
    iVar2 = (**(code **)(*(int *)(*(int *)a2 + 8) + 0xb8))(*(int *)a2, iVar4, pcVar11, a3);
    if ((iVar2 == 1) && (a0[1] != 1)) {
        a0[1] = 0xb;
        a0[2] = 99;
        if (a0[0x1b] != 0) {
            (**(code **)(*(int *)(a0[0x1b] + 8) + 0x78))(a0[0x1b], iVar4, pcVar11, a3);
            a0[0x1b] = 0;
        }
        pcVar11 = get_field_6c_02f46c;
        iVar2 = get_field_6c_02f46c(*(int *)a2);
        if ((iVar2 == 0) && (iVar4 = get_field_70_05f490(*(int *)a2), iVar4 == 0)) {
            mask_74_7fffffff(*(int *)a2);
        }
    }
    pcVar9 = a2;
    Class_129c70_sub_02f20c(a0, a2, pcVar11, a3);
    uVar1 = get_field_4_05eed8(a0);
    piVar7 = a0;
    a5 = a1;
    pcVar11 = a2;
    Class_12acc8_sub_09ff1c(a0, a1, a2, uVar1);
    if (a0[1] != 1) {
        piVar7 = a1;
        (**(code **)(*a1 + 0x178))(a1, a5, pcVar11, uVar1);
        if (cVar18 == '\0') {
            dVar16 = (double)CONCAT44(0x41200000, (int)((u64)dVar14 >> 0x20));
        } else {
            dVar16 = 2.74277281159077e-312;
            in_xd0 = dVar14;
        }
        dVar14 = dVar16;
        if ((cVar17 == '\0' && (float)((u64)dVar14 >> 0x20) < SUB84(dVar14, 0)) &&
            (((*(char *)((int)a0 + 0x81) == '\x01' || (*(char *)((int)a0 + 0x83) == '\x02')) ||
              (*(char *)((int)a0 + 0x83) == '\x03')))) {
            pcVar11 = (code *)0x2;
            a5 = NULL;
            Class_12acc8_sub_09fef8(*(int *)(a2 + 0xc), 0, 2);
            iVar4 = a0[0x27];
            if ((iVar4 < 7) && (-1 < iVar4)) {
                switch (iVar4) {
                default:
                    a0[0x20a] = 8;
                    a0[0x10] = 8;
                    g_8c13ae98 = 8;
                    a0[1] = 0xd;
                    a0[2] = 0x5f;
                    a0[3] = 0;
                    break;
                case 4:
                case 5:
                    iVar4 = (**(code **)(*a1 + 0x11c))(a1, 2, pcVar11, uVar1);
                    uVar3 = SUB84(dVar14, 0);
                    if (iVar4 == 1) {
                        Vec3_assign(&fStack_34, *(int *)(a2 + 0x14) + 0x10, pcVar11, uVar1);
                        ar6_00 = 0;
                        uVar10 = 2;
                        uVar3 = (**(code **)(*a1 + 0x100))(a1, 2, 0, uVar1);
                        Vec3_ctor_copy_wrap_02f670(uVar3, uVar10, ar6_00, uVar1, auStack_90);
                        Vec3_assign(&iStack_24, auStack_90, ar6_00, uVar1);
                        Vec3_dtor(auStack_90, 0xffffffff, ar6_00, uVar1);
                        ar6_01 = &uStack_c0;
                        puVar5 = auStack_60;
                        matrix_sub_256294(0, puVar5, ar6_01);
                        Vec3_ctor_zero(auStack_70, puVar5, ar6_01);
                        pcVar11 = (code *)&uStack_b8;
                        Class_12acc8_sub_101210(*(u32 *)(*(int *)(a2 + 0x18) + 0x7cc), &uStack_b4, pcVar11);
                        if (cVar18 == '\0') {
                            dVar16 = (double)CONCAT44(uStack_c0, uStack_b4);
                        } else {
                            in_xd0 = (double)CONCAT44(auStack_b0[0], uStack_b4);
                            dVar16 = (double)CONCAT44(uStack_bc, uStack_c0);
                        }
                        if (cVar17 == '\0') {
                            fStack_34 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
                        } else {
                            fStack_34 = SUB84(dVar16 - dVar16, 0);
                        }
                        if (cVar18 == '\0') {
                            dVar16 = (double)CONCAT44(uStack_bc, uStack_b8);
                        } else {
                            fStack_34 = SUB84(in_xd0, 0);
                            in_xd0 = (double)CONCAT44(uStack_b4, uStack_b8);
                            dVar16 = (double)CONCAT44(uStack_b8, uStack_bc);
                        }
                        if (cVar17 == '\0') {
                            fVar13 = SUB84(dVar16, 0) - (float)((u64)dVar16 >> 0x20);
                        } else {
                            fVar13 = SUB84(dVar16 - dVar16, 0);
                        }
                        fVar12 = fStack_34;
                        fStack_30 = fVar13;
                        if (cVar18 != '\0') {
                            fStack_30 = SUB84(in_xd0, 0);
                            uStack_2c = (u32)((u64)in_xd0 >> 0x20);
                            in_xd0 = (double)CONCAT44(fStack_30, fStack_34);
                            fVar12 = fVar13;
                        }
                        if (cVar17 == '\0' && fVar12 < 0.0) {
                            if (cVar18 == '\0') {
                                dVar16 = (double)CONCAT44(0xbf800000, fStack_34);
                            } else {
                                in_xd0 = (double)CONCAT44(fStack_30, fStack_34);
                                dVar16 = 52776583233536.0;
                            }
                            if (cVar17 == '\0') {
                                fVar12 = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);
                            } else {
                                fVar12 = SUB84(dVar16 * dVar16, 0);
                            }
                            fStack_34 = fVar12;
                            if (cVar18 != '\0') {
                                fStack_34 = SUB84(in_xd0, 0);
                                fStack_30 = (float)((u64)in_xd0 >> 0x20);
                            }
                        }
                        fVar13 = fStack_30;
                        if (cVar18 != '\0') {
                            in_xd0 = (double)CONCAT44(uStack_2c, fStack_30);
                            fVar13 = fVar12;
                        }
                        if (cVar17 == '\0' && fVar13 < 0.0) {
                            if (cVar18 == '\0') {
                                dVar16 = (double)CONCAT44(0xbf800000, fStack_30);
                            } else {
                                in_xd0 = (double)CONCAT44(uStack_2c, fStack_30);
                                dVar16 = 52776583233536.0;
                            }
                            if (cVar17 == '\0') {
                                fStack_30 = SUB84(dVar16, 0) * (float)((u64)dVar16 >> 0x20);
                            } else {
                                fStack_30 = SUB84(dVar16 * dVar16, 0);
                            }
                            if (cVar18 != '\0') {
                                fStack_30 = SUB84(in_xd0, 0);
                                uStack_2c = (u32)((u64)in_xd0 >> 0x20);
                            }
                        }
                        if (cVar18 == '\0') {
                            dVar16 = (double)CONCAT44(0x42c80000, fStack_34);
                        } else {
                            in_xd0 = (double)CONCAT44(fStack_30, fStack_34);
                            dVar16 = -1.1352410522239538e-250;
                        }
                        if (cVar17 == '\0' && SUB84(dVar16, 0) < (float)((u64)dVar16 >> 0x20)) {
                            if (cVar18 == '\0') {
                                dVar16 = (double)CONCAT44(0x42c80000, fStack_30);
                            } else {
                                in_xd0 = (double)CONCAT44(uStack_2c, fStack_30);
                                dVar16 = -1.1352410522239538e-250;
                            }
                            if (cVar17 == '\0' && SUB84(dVar16, 0) < (float)((u64)dVar16 >> 0x20)) {
                                if (cVar18 == '\0') {
                                    in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), fStack_34);
                                    dVar16 = (double)CONCAT44(fStack_30, SUB84(dVar16, 0));
                                } else {
                                    dVar16 = (double)CONCAT44(uStack_2c, fStack_30);
                                }
                                if (cVar17 == '\0') {
                                    in_dr14 = (double)(u64)(u32)(SUB84(in_dr14, 0) + (float)((u64)dVar16 >> 0x20));
                                } else {
                                    in_dr14 = in_dr14 + dVar16;
                                }
                            }
                        }
                        uVar3 = SUB84(dVar16, 0);
                        Vec3_dtor(auStack_70, 0xffffffff, pcVar11, uVar1);
                    }
                    if (cVar18 == '\0') {
                        dVar14 = (double)CONCAT44(0xbf800000, uVar3);
                    } else {
                        dVar14 = 52776583233536.0;
                    }
                    if (SUB84(in_dr14, 0) == (float)((u64)dVar14 >> 0x20)) {
                        Vec3_ctor_copy(auStack_a0, *(int *)(a2 + 0x14) + 0x10, pcVar11, uVar1);
                        uVar3 = SUB84(dVar14, 0);
                        Vec3_assign_wrap_063818(a0, auStack_a0, pcVar11, uVar1);
                        Vec3_dtor(auStack_a0, 0xffffffff, pcVar11, uVar1);
                        Vec3_ctor_copy(auStack_b0, *(int *)(a2 + 0x14) + 0x10, pcVar11, uVar1);
                        Vec3_assign_wrap_05f640(a0, auStack_b0, pcVar11, uVar1);
                        a5 = (int *)0xffffffff;
                        Vec3_dtor(auStack_b0, 0xffffffff, pcVar11, uVar1);
                        piVar7 = a0 + 0xc;
                        if (cVar18 == '\0') {
                            *piVar7 = 0x44960000;
                            dVar14 = (double)CONCAT44(0x44af0000, uVar3);
                            a0[0x1e] = 0x44af0000;
                        } else {
                            piVar7[0] = 0x44960000;
                            piVar7[1] = 0x44af0000;
                            dVar14 = 3.1118736849719273e-159;
                            a0[0x1e] = 0x44af0000;
                            a0[0x1f] = 0x1f05e005;
                        }
                        a0[1] = 8;
                        a0[0x10] = 3;
                        a0[2] = 0x55;
                        a0[3] = 0;
                    } else {
                        a0[1] = 0xb;
                        a0[0x10] = 3;
                        a0[2] = 0x55;
                        a0[3] = 0;
                        Class_12acc8_sub_0a0278(a0, a1, pcVar11);
                        a5 = (int *)0x4a6;
                        list5_push(a0, 0x4a6);
                    }
                    break;
                case 6:
                    a0[0x20a] = 5;
                    a0[0x10] = 5;
                    g_8c13ae98 = 5;
                    a0[1] = 0xd;
                    a0[2] = 0x5f;
                    a5 = NULL;
                    a0[3] = 0;
                }
            }
            piVar7 = NULL;
            *(u8 *)((int)a0 + 0x81) = 0;
        }
    }
    if ((a0[1] == 0) && (a0[1] != 1)) {
        uVar3 = rand();
        iVar4 = libgcc_divide_helper_01031c(uVar3, 300, pcVar11);
        if (iVar4 < 1) {
            a0[0x20a] = 9;
            a0[0x10] = 9;
            g_8c13ae98 = 9;
            a0[1] = 0xd;
            a0[2] = 0x4b;
            a0[3] = 0;
            uVar3 = 2;
            Class_12acc8_sub_09fed4(*(int *)(a2 + 0xc), 0, 2);
            if (cVar18 == '\0') {
                uVar15 = CONCAT44(0x47c35000, (int)((u64)dVar14 >> 0x20));
                dVar14 = in_xd0;
            } else {
                uVar15 = 0x8c0a027847c35000;
            }
            if ((float)uVar15 == (float)((u64)uVar15 >> 0x20)) {
                Class_12acc8_sub_0a0278(a0, a1, uVar3);
                Class_12acc8_sub_09fef8(*(int *)(a2 + 0xc), 0, 0);
                Class_12acc8_sub_09fef8(*(int *)(a2 + 0xc), 0, 1);
                pcVar11 = (code *)0x2;
                Class_12acc8_sub_09fef8(*(int *)(a2 + 0xc), 0, 2);
            } else {
                Class_12acc8_sub_09fed4(*(int *)(a2 + 0xc), 0, 0);
                fStack_fc = (float)uVar15;
                fVar13 = (float)((u64)uVar15 >> 0x20);
                if (cVar18 == '\0') {
                    a0[10] = (int)fVar13;
                    fStack_fc = fVar13;
                } else {
                    *(u64 *)(a0 + 10) = uVar15;
                }
                uVar10 = 1;
                uVar3 = 0;
                iVar4 = *(int *)(a2 + 0xc);
                Class_12acc8_sub_09fed4(iVar4, 0, 1);
                fVar13 = (float)((u64)uVar15 >> 0x20);
                fStack_100 = fVar13;
                if (cVar18 != '\0') {
                    fStack_100 = (float)uVar15;
                    fStack_fc = fVar13;
                }
                uVar3 = rand();
                fVar13 = (float)uVar15;
                iVar4 = libgcc_divide_helper_01031c(uVar3, 400, uVar10);
                if (cVar18 != '\0') {
                    dVar14 = (double)CONCAT44(fStack_fc, fStack_100);
                    fStack_100 = fVar13;
                }
                if (cVar17 == '\0') {
                    fStack_100 = fStack_100 + (float)iVar4;
                } else {
                    fStack_100 = SUB84((double)iVar4 + (double)iVar4, 0);
                }
                if (cVar18 == '\0') {
                    dVar16 = (double)CONCAT44(0x43480000, fStack_100);
                } else {
                    dVar16 = 3.23101057606842e-312;
                }
                if (cVar17 == '\0') {
                    fVar13 = (float)((u64)dVar16 >> 0x20);
                    dVar16 = (double)CONCAT44(fVar13, SUB84(dVar16, 0) - fVar13);
                } else {
                    dVar16 = dVar16 - dVar16;
                }
                if (cVar18 == '\0') {
                    a0[0xb] = SUB84(dVar16, 0);
                } else {
                    *(double *)(a0 + 0xb) = dVar14;
                }
                pcVar11 = (code *)0x2;
                uVar10 = 0;
                iVar4 = *(int *)(a2 + 0xc);
                Class_12acc8_sub_09fed4(iVar4, 0, 2);
                uStack_108 = dVar16;
                if (cVar18 == '\0') {
                    uStack_108 = (double)CONCAT44(uVar3, (int)((u64)dVar16 >> 0x20));
                }
                uVar3 = rand();
                fVar13 = SUB84(dVar16, 0);
                iVar4 = libgcc_divide_helper_01031c(uVar3, 400, pcVar11);
                dVar16 = uStack_108;
                if (cVar18 == '\0') {
                    dVar16 = dVar14;
                    fVar13 = (float)uStack_108;
                }
                if (cVar17 == '\0') {
                    fVar13 = fVar13 + (float)iVar4;
                } else {
                    fVar13 = SUB84((double)iVar4 + (double)iVar4, 0);
                }
                if (cVar18 == '\0') {
                    dVar14 = (double)CONCAT44(0x43480000, fVar13);
                } else {
                    dVar14 = 3.23101057606842e-312;
                }
                if (cVar17 == '\0') {
                    fVar13 = SUB84(dVar14, 0) - (float)((u64)dVar14 >> 0x20);
                } else {
                    fVar13 = SUB84(dVar14 - dVar14, 0);
                }
                if (cVar18 == '\0') {
                    a0[0xc] = (int)fVar13;
                } else {
                    *(double *)(a0 + 0xc) = dVar16;
                }
            }
        }
    }
    if ((char)a0[0x26] == '\0') {
        iVar4 = *(int *)(*(int *)a2 + 8);
        iVar4 = (**(code **)(iVar4 + 0x18c))(*(int *)a2, iVar4, pcVar11, uVar1);
        if (iVar4 == 1) {
            a0[0x10] = 0xb;
            g_8c13ae98 = 0xb;
            a0[1] = 0xd;
            a0[2] = 0x5f;
            a0[3] = 0;
        } else {
            *(u8 *)(a0 + 0x26) = 1;
        }
    } else if ((char)a0[0x26] == '\x01') {
        a0[0x10] = 0xc;
        g_8c13ae98 = 0xc;
        a0[1] = 0xd;
        a0[2] = 0x5f;
        a0[3] = 0;
    }
    pcVar9 = a2;
    Class_12acc8_sub_0a0224(a0);
    set_field_130(*(int *)(a2 + 8));
    iVar4 = get_field_124_027930(*(int *)(a2 + 8), pcVar9, pcVar11, uVar1);
    iVar2 = get_field_40_05eea0(a0);
    if (iVar4 != iVar2) {
        uVar3 = get_field_40_05eea0(a0);
        pcVar11 = (code *)0x1;
        timer_sub_031b08(*(int *)(a2 + 8), uVar3, 1, uVar1);
    }
    *(u8 *)((int)a0 + 0x83) = 4;
    *(u8 *)((int)a0 + 0x81) = 0;
    Vec3_dtor(&fStack_34, 0xffffffff, pcVar11, uVar1);
    uVar1 = Vec3_dtor(&iStack_24, 0xffffffff, pcVar11, &iStack_24);
    return uVar1;
}

/*
 * Class_12acc8_sub_09fed4  0x8c09fed4
 * area name: only called from Class_12acc8 methods
 * called by: Class_12acc8_m1_09f470
 */
int Class_12acc8_sub_09fed4(u32 unused_a0, u32 a1, u32 a2) {
    return (int)(short)a2 << 2;
}

/*
 * Class_12acc8_sub_09fef8  0x8c09fef8
 * area name: only called from Class_12acc8 methods
 * called by: Class_12acc8_m1_09f470
 */
int Class_12acc8_sub_09fef8(int a0, u32 a1, u32 a2) {
    u32 in_fr4;

    *(u32 *)((short)a1 * 0xc + a0 + (short)a2 * 4 + 0x14) = in_fr4;
    return (short)a2 * 4;
}

/*
 * Class_12acc8_sub_09ff1c  0x8c09ff1c
 * area name: only called from Class_12acc8 methods
 * called by: Class_12acc8_m1_09f470
 */
u32 Class_12acc8_sub_09ff1c(int a0, u32 a1, int *a2, int a3) {
    int iVar1;
    int iVar2;
    u32 a5;
    int *ar6_00;

    a5 = a1;
    ar6_00 = a2;
    iVar2 = a3;
    if (*(int *)(a0 + 0x38) == 2) {
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13adfc + *(int *)(a0 + 0xc) * 4 + a3 * 0xc);
        game_sub_0a00f8(a0, a1, a2, a3);
        a5 = 1;
        set_field_38_02f404(a0, 1);
    }
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 2) {
        set_field_38_02f404(a0, 3);
    } else if (iVar1 == 3) {
        if (*(int *)(a0 + 4) == 0xb) {
            Class_12acc8_sub_0a0278(a0, a1, ar6_00);
        } else {
            set_field_38_02f404(a0, 3);
            game_sub_02fdd8(a0, a1);
        }
    } else if (iVar1 == 6) {
        iVar2 = (**(code **)(*(int *)(*a2 + 8) + 0xb4))(*a2, a5, ar6_00, a3);
        if (iVar2 == 1) {
            iVar2 = *a2;
            mask_74_fffffffe(iVar2);
            CAnimal_sub_0c4e2c(iVar2, a5, ar6_00, a3);
        }
    } else if (((iVar1 == 10) && (iVar2 = game_sub_02c518(a2[1], a5, ar6_00), iVar2 != 0)) && (iVar2 == 1)) {
        *(u32 *)(a0 + 0x40) = 0xe;
    }
    return 1;
}
