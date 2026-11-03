/* Seaman (USA) region 0x8c0f0000-0x8c100000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * copy_5_words  0x8c0f3df8
 * copies five 32-bit words
 * called by: static_init_vec3s_438478
 */
u32 *copy_5_words(u32 *a0, u32 *a1, u32 a2) {
    *a0 = *a1;
    a0[1] = a1[1];
    a0[2] = a1[2];
    a0[3] = a1[3];
    a0[4] = a1[4];
    return a0;
}

/*
 * game_vec_0f3e30  0x8c0f3e30
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_uses_clear_15_bytes_0243b0
 */
u8 *game_vec_0f3e30(u8 *a0, u32 a1, u32 a2) {
    Vec3_ctor_zero(a0 + 0x1c, a1, a2);
    Vec3_set_zero(a0 + 0x2c);
    Vec3_set_one(a0 + 0x38);
    *a0 = 0;
    *(u32 *)(a0 + 0x14) = 0;
    *(u32 *)(a0 + 0x18) = 0xffffffff;
    *(u32 *)(a0 + 0x44) = 0x32;
    *(u32 *)(a0 + 0x48) = 0;
    return a0;
}

/*
 * game_vec_0f3e84  0x8c0f3e84
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_uses_clear_15_bytes_0ba284
 */
u32 *game_vec_0f3e84(u32 *a0) {
    Vec3_set_zero(a0 + 1);
    Vec3_set_one(a0 + 4);
    *a0 = 0xffffffff;
    a0[7] = 0x32;
    a0[8] = 1;
    return a0;
}

/*
 * Class_12c1f0_ctor  0x8c0f3ebc
 * builds the base, stores the Class_12c1f0 vtable at +8 and builds its vectors
 * called by: named_list_ctor_170
 */
int Class_12c1f0_ctor(int a0, u32 a1, u32 a2) {
    set_fields_4_0(a0);
    *(u8 **)(a0 + 8) = (&DATA_8c12c1f0);
    Vec3_ctor_zero(a0 + 0x30, a1, a2);
    Vec3_ctor_zero(a0 + 0x40, a1, a2);
    Vec3_set_zero(a0 + 0x50);
    Vec3_set_one(a0 + 0x5c);
    color_set_white(a0 + 0x80);
    color_set_white(a0 + 0x90);
    Class_12c1f0_ctor_like(a0 + 0xa0, a1, a2);
    Class_12c1f0_init_fields_0f50b4(a0);
    return a0;
}

/*
 * Class_12c1f0_dtor_like  0x8c0f3f58
 * destroys what Class_12c1f0_ctor_like built, in reverse order, and frees a0 when asked
 * called by: Class_12c1f0_m0_0f4108
 */
int Class_12c1f0_dtor_like(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Vec3_dtor(a0 + 0xb0, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xa0, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x8c, 0xffffffff, a2, a3);
        vec_delete_array(a0 + 0x6c, free_if_nonnull_wrap_0f3ffc, 8, 3);
        ar7_00 = 3;
        ar6_00 = 8;
        vec_delete_array(a0 + 0x4c, free_if_nonnull_wrap_0f3ffc, 8, 3);
        ar5_00 = 0xffffffff;
        Class_129974_dtor(a0 + 8, 0xffffffff, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * free_if_nonnull_wrap_0f3ffc  0x8c0f3ffc
 */
int free_if_nonnull_wrap_0f3ffc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * set_fields_4_0  0x8c0f402c
 * stores +0x4, +0x0
 * called by: Class_12c1f0_ctor, Class_12c1f0_ctor_kind, game_uses_set_fields_4_0_0fddc4,
 * game_uses_set_fields_4_0_0fde34, game_vec_0fdde4
 */
u32 *set_fields_4_0(u32 *a0) {
    a0[1] = 0;
    *a0 = 0;
    return a0;
}

/*
 * Class_12c1f0_ctor_kind  0x8c0f4040
 * as Class_12c1f0_ctor, also taking the object kind (a1) used by the CAnimal subclasses
 * called by: CAnimal_ctor, Class_12a0c4_ctor, Class_12bec0_ctor, Class_12c058_ctor
 */
int Class_12c1f0_ctor_kind(int a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u32 ar5_00;
    u32 ar6_00;
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    ar5_00 = a1;
    ar6_00 = a2;
    set_fields_4_0(a0);
    *(u8 **)(a0 + 8) = &g_8c12c1f0;
    Vec3_ctor_zero(a0 + 0x30, ar5_00, ar6_00);
    Vec3_ctor_zero(a0 + 0x40, ar5_00, ar6_00);
    Vec3_set_zero(a0 + 0x50);
    Vec3_set_one(a0 + 0x5c);
    color_set_white(a0 + 0x80);
    color_set_white(a0 + 0x90);
    Class_12c1f0_ctor_like(a0 + 0xa0, ar5_00, ar6_00);
    Class_12c1f0_init_fields_0f50b4(a0);
    *(u32 *)(a0 + 0x24) = a1;
    *(u32 *)(a0 + 0x28) = a2;
    *(u32 *)(a0 + 0x20) = s0;
    *(u32 *)(a0 + 0x2c) = a3;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x78) = 0;
        *(u32 *)(a0 + 0x7c) = 0;
    } else {
        *(u64 *)(a0 + 0x78) = (u64)extraout_fr1;
        *(u64 *)(a0 + 0x7c) = (u64)extraout_fr1;
    }
    return a0;
}

/*
 * Class_12c1f0_m0_0f4108  0x8c0f4108
 * called by: CAnimal_m0_025688, Class_12a0c4_m0_0674c8, Class_12bb08_uses_Class_12c1f0_m0_0fdf18,
 * Class_12bec0_m0_0f5a48, Class_12c058_m0_0f55d8
 */
int Class_12c1f0_m0_0f4108(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12c1f0;
        Class_12c1f0_dtor_like(a0 + 0xa0, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_0d8168(a0 + 0x90, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_0d8168(a0 + 0x80, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016ac4(a0 + 0x5c, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x50, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x40, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x30, 0xffffffff, a2, a3);
        ar5_00 = 0;
        free_if_nonnull_wrap_0c0264(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * CAnimal_m1_0f41c8  0x8c0f41c8
 * called by: Class_12c058_m1_0f5660
 */
u32 CAnimal_m1_0f41c8(int a0, u32 a1) {
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 *puVar2;
    u64 in_dr4;
    u64 in_dr6;
    u64 in_dr8;
    u64 in_dr10;
    char cVar3;
    u32 in_stack_00000000;
    u32 in_stack_00000004;
    u64 uStack_34;
    u32 uStack_30;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    cVar3 = '\0';
    uStack_28 = (u32)((u64)in_dr4 >> 0x20);
    uStack_24 = (u32)in_dr4;
    uStack_20 = (u32)((u64)in_dr6 >> 0x20);
    uStack_1c = (u32)in_dr6;
    uStack_18 = (u32)((u64)in_dr8 >> 0x20);
    uStack_14 = (u32)in_dr8;
    uStack_10 = (u32)((u64)in_dr10 >> 0x20);
    uStack_c = (u32)in_dr10;
    uStack_34 = CONCAT44(a1, &g_8c1401fa);
    sprintf(a0 + 0xc, a1, r6, r7, &g_8c1401fa);
    if (cVar3 == '\0') {
        puVar2 = &uStack_30;
        uStack_34 = CONCAT44(in_stack_00000000, (u32)uStack_34);
    } else {
        uStack_34 = CONCAT44(in_stack_00000004, in_stack_00000000);
        puVar2 = (u32 *)&stack0xffffffcc;
    }
    uVar1 = CAnimal_float_calc_0f528c(a0, a1, r6, r7, *puVar2);
    return uVar1;
}

/*
 * noop_0f4250  0x8c0f4250
 */
u32 noop_0f4250(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0f4254  0x8c0f4254
 */
u32 noop_0f4254(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * CAnimal_uses_list_node_next_0f4258  0x8c0f4258
 * area name: sits between CAnimal functions (same compilation unit); behaviour name: its main named callee is
 * list_node_next called by: Class_12b930_m3_0de4b0, Class_12bb08_m1_0da338, Class_12bb08_m2_0da5a8
 */
u32 CAnimal_uses_list_node_next_0f4258(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int *ar5_00;
    u32 uVar2;
    int iVar3;
    int *a5;
    int iVar4;
    int iVar5;

    ar5_00 = a1;
    iVar1 = get_field_bb4_0e06e4(a1);
    iVar4 = 0;
    do {
        if (iVar1 <= iVar4) {
        LAB_8c0f42f4:
            iVar1 = (**(code **)(0x118 + *a1))(a1, ar5_00, a2, a3);
            uVar2 = 1;
            if (1 < iVar1) {
                iVar1 = a0;
                iVar4 = list_a4_count_after(a1, a0);
                uVar2 = list_node_next(a0);
                for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
                    iVar1 = get_field_a4_032154(uVar2);
                    iVar3 = (**(code **)(**(int **)(0xa4 + a0) + 0x14))(*(int **)(0xa4 + a0), iVar1, a2, a3);
                    if (iVar3 == 1) {
                        pair_queue3_push(a0, uVar2);
                        uVar2 = pair_queue3_push(uVar2, a0);
                        return uVar2;
                    }
                    uVar2 = list_node_next(uVar2);
                }
            }
            return uVar2;
        }
        ar5_00 = (int *)(**(code **)(0x104 + *a1))(a1, iVar4, a2, a3);
        iVar5 = (**(code **)(**(int **)(0xa4 + a0) + 0x14))(*(int **)(0xa4 + a0), (int)ar5_00 + 0xc4, a2, a3);
        if (iVar5 == 1) {
            set_field_108(a0, ar5_00);
            goto LAB_8c0f42f4;
        }
        a5 = (int *)((int)ar5_00 + 0xc4);
        iVar5 = (**(code **)(*(int *)(a0 + 0xa8) + 0x14))((int *)(a0 + 0xa8), a5, a2, a3);
        if (iVar5 == 1) {
            set_field_128_0f4e28(a0, ar5_00);
            goto LAB_8c0f42f4;
        }
        iVar4 = iVar4 + 1;
        ar5_00 = a5;
    } while (true);
}

/*
 * Class_12bb08_vec_0f43bc  0x8c0f43bc
 * area name: only called from Class_12bb08 methods; behaviour name: mostly calls vec functions
 * called by: Class_12bb08_m1_0da338
 */
u32 Class_12bb08_vec_0f43bc(int a0, int *a1, u32 a2, int a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int *ar5_00;
    float *a6;
    float *pfVar4;
    int iVar5;
    float fVar6;
    float fVar10;
    u64 uVar7;
    u64 uVar8;
    double dVar9;
    float fVar11;
    u32 in_fr14;
    u64 in_xd14;
    bool bVar12;
    char cVar13;
    char cVar14;
    float fStack_b0;
    float fStack_ac;
    float fStack_a8;
    u32 uStack_a4;
    float fStack_a0;
    float fStack_9c;
    u32 uStack_98;
    u32 uStack_94;
    u32 uStack_90;
    u32 uStack_8c;
    u32 uStack_88;
    u32 uStack_84;
    float afStack_80[25];

    cVar14 = '\0';
    cVar13 = '\0';
    ar5_00 = a1;
    Vec3_ctor_zero(&uStack_90, a1, a2);
    Vec3_ctor_zero(&fStack_a0, ar5_00, a2);
    Vec3_ctor_zero(&fStack_b0, ar5_00, a2);
    fVar11 = 0.0;
    uVar1 = (**(code **)(*a1 + 0x1d4))(a1, ar5_00, a2, a3);
    iVar2 = get_field_24_026024(a1, ar5_00, a2, a3);
    a6 = &fStack_a0;
    (**(code **)(*a1 + 0x124))(a1, &uStack_90, a6, a3);
    (**(code **)(**(int **)(a0 + 0xa4) + 0x38))(*(int **)(a0 + 0xa4), afStack_80, a6, a3);
    pfVar4 = afStack_80;
    iVar5 = 0;
    do {
        if (7 < iVar5) {
        LAB_8c0f4912:
            Vec3_dtor(&fStack_b0, 0xffffffff, a6, a3);
            Vec3_dtor(&fStack_a0, 0xffffffff, a6, a3);
            uVar1 = Vec3_dtor(&uStack_90, 0xffffffff, a6, a3);
            return uVar1;
        }
        if (cVar14 == '\0') {
            uVar7 = CONCAT44(uStack_90, *pfVar4);
        } else {
            uVar7 = CONCAT44(uStack_8c, uStack_90);
        }
        fVar6 = (float)uVar7;
        if (cVar13 == '\0' && fVar6 < (float)(uVar7 >> 0x20)) {
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x140) = 0x3f800000;
            } else {
                *(u64 *)(a0 + 0x140) = CONCAT44(0x3f800000, fVar6);
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x144) = 0;
            } else {
                *(u64 *)(a0 + 0x144) = uVar7 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x148) = 0;
                uVar7 = CONCAT44(uStack_90, fVar6);
                *(u32 *)(a0 + 0x150) = uStack_90;
            } else {
                *(u64 *)(a0 + 0x148) = uVar7 & 0xffffffff;
                uVar7 = CONCAT44(uStack_8c, uStack_90);
                *(u64 *)(a0 + 0x150) = uVar7;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x154) = 0;
            } else {
                *(u64 *)(a0 + 0x154) = uVar7 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x158) = 0;
            } else {
                *(u64 *)(a0 + 0x158) = uVar7 & 0xffffffff;
            }
            *(int *)(a0 + 0x13c) = iVar5;
            goto LAB_8c0f4912;
        }
        fVar6 = fStack_a0;
        fVar10 = fStack_9c;
        if (cVar14 == '\0') {
            fVar6 = *pfVar4;
            fVar10 = fStack_a0;
        }
        if (cVar13 == '\0' && fVar10 < fVar6) {
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x140) = 0xbf800000;
            } else {
                fVar6 = -1.0;
                *(u64 *)(a0 + 0x140) = 0x144bf800000;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x144) = 0;
            } else {
                *(u64 *)(a0 + 0x144) = (u64)(u32)fVar6;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x148) = 0;
                uVar7 = CONCAT44(fStack_a0, fVar6);
                *(float *)(a0 + 0x150) = fStack_a0;
            } else {
                *(u64 *)(a0 + 0x148) = (u64)(u32)fVar6;
                uVar7 = CONCAT44(fStack_9c, fStack_a0);
                *(u64 *)(a0 + 0x150) = uVar7;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x154) = 0;
            } else {
                *(u64 *)(a0 + 0x154) = uVar7 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x158) = 0;
            } else {
                *(u64 *)(a0 + 0x158) = uVar7 & 0xffffffff;
            }
            *(int *)(a0 + 0x13c) = iVar5;
            goto LAB_8c0f4912;
        }
        if (cVar14 == '\0') {
            uVar7 = CONCAT44(uStack_88, pfVar4[2]);
        } else {
            uVar7 = CONCAT44(uStack_84, uStack_88);
        }
        if (cVar13 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x140) = 0;
            } else {
                *(u64 *)(a0 + 0x140) = uVar7 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x144) = 0;
            } else {
                *(u64 *)(a0 + 0x144) = uVar7 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x148) = 0x3f800000;
            } else {
                *(u64 *)(a0 + 0x148) = CONCAT44(0x3f800000, (float)uVar7);
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x150) = 0;
            } else {
                *(u64 *)(a0 + 0x150) = uVar7 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x154) = 0;
                *(u32 *)(a0 + 0x158) = uStack_88;
            } else {
                *(u64 *)(a0 + 0x154) = uVar7 & 0xffffffff;
                *(u64 *)(a0 + 0x158) = CONCAT44(uStack_84, uStack_88);
            }
            *(int *)(a0 + 0x13c) = iVar5;
            goto LAB_8c0f4912;
        }
        if (cVar14 == '\0') {
            uVar7 = CONCAT44(uStack_98, pfVar4[2]);
        } else {
            uVar7 = CONCAT44(uStack_94, uStack_98);
        }
        if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < (float)uVar7) {
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x140) = 0;
            } else {
                *(u64 *)(a0 + 0x140) = uVar7 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x144) = 0;
                uVar7 = CONCAT44(0xbf800000, (float)uVar7);
                *(u32 *)(a0 + 0x148) = 0xbf800000;
            } else {
                *(u64 *)(a0 + 0x144) = uVar7 & 0xffffffff;
                uVar7 = 0x150bf800000;
                *(u64 *)(a0 + 0x148) = 0x150bf800000;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x150) = 0;
            } else {
                *(u64 *)(a0 + 0x150) = uVar7 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x154) = 0;
                *(u32 *)(a0 + 0x158) = uStack_98;
            } else {
                *(u64 *)(a0 + 0x154) = uVar7 & 0xffffffff;
                *(u64 *)(a0 + 0x158) = CONCAT44(uStack_94, uStack_98);
            }
            *(int *)(a0 + 0x13c) = iVar5;
            goto LAB_8c0f4912;
        }
        if (cVar14 == '\0') {
            uVar7 = CONCAT44(fStack_9c, pfVar4[1]);
        } else {
            uVar7 = CONCAT44(uStack_98, fStack_9c);
        }
        fVar6 = (float)uVar7;
        if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < fVar6) {
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x140) = 0;
                *(u32 *)(a0 + 0x144) = 0xbf800000;
            } else {
                *(u64 *)(a0 + 0x140) = uVar7 & 0xffffffff;
                fVar6 = -1.0;
                *(u64 *)(a0 + 0x144) = 0x148bf800000;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x148) = 0;
            } else {
                *(u64 *)(a0 + 0x148) = (u64)(u32)fVar6;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x150) = 0;
                uVar7 = CONCAT44(fStack_9c, fVar6);
                *(float *)(a0 + 0x154) = fStack_9c;
            } else {
                *(u64 *)(a0 + 0x150) = (u64)(u32)fVar6;
                uVar7 = CONCAT44(uStack_98, fStack_9c);
                *(u64 *)(a0 + 0x154) = uVar7;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x158) = 0;
            } else {
                *(u64 *)(a0 + 0x158) = uVar7 & 0xffffffff;
            }
            *(int *)(a0 + 0x13c) = iVar5;
            goto LAB_8c0f4912;
        }
        if (cVar14 == '\0') {
            fStack_b0 = *pfVar4;
            fStack_ac = pfVar4[1];
            fStack_a8 = pfVar4[2];
            uVar8 = CONCAT44(fStack_a8, fVar6);
        } else {
            fStack_b0 = (float)*(u64 *)pfVar4;
            fStack_ac = (float)*(u64 *)(pfVar4 + 1);
            uVar8 = *(u64 *)(pfVar4 + 2);
            fStack_a8 = (float)uVar8;
            uStack_a4 = (u32)((u64)uVar8 >> 0x20);
        }
        if (iVar2 == 0) {
            iVar3 = (**(code **)(*a1 + 0x130))(a1, &fStack_b0, a6, a3);
            if (iVar3 == 2) {
                a3 = a0 + 0x150;
                a6 = (float *)(a0 + 0x140);
                iVar3 = Class_129938_vec_017900(uVar1, &fStack_b0, a6, a3);
                if (iVar3 == 1) {
                    *(int *)(a0 + 0x13c) = iVar5;
                    goto LAB_8c0f4912;
                }
                *(u32 *)(a0 + 0x13c) = 0xffffffff;
            } else {
                (**(code **)(*a1 + 0x128))(a1, &fStack_b0, a6, a3);
                if (cVar14 == '\0') {
                    fVar11 = (float)((u64)uVar8 >> 0x20);
                    dVar9 = (double)CONCAT44(pfVar4[1], (int)uVar8);
                } else {
                    dVar9 = *(double *)(pfVar4 + 1);
                    in_xd14 = uVar8;
                }
                if (cVar13 == '\0') {
                    bVar12 = (float)((u64)dVar9 >> 0x20) < fVar11;
                } else {
                    bVar12 = dVar9 < (double)CONCAT44(in_fr14, fVar11);
                }
                if (bVar12) {
                    if (cVar14 == '\0') {
                        *(u32 *)(a0 + 0x140) = 0;
                    } else {
                        *(u64 *)(a0 + 0x140) = (u64)dVar9 & 0xffffffff;
                    }
                    if (cVar14 == '\0') {
                        *(u32 *)(a0 + 0x144) = 0x3f800000;
                    } else {
                        *(u64 *)(a0 + 0x144) = CONCAT44(0x3f800000, SUB84(dVar9, 0));
                    }
                    if (cVar14 == '\0') {
                        *(u32 *)(a0 + 0x148) = 0;
                    } else {
                        *(u64 *)(a0 + 0x148) = (u64)dVar9 & 0xffffffff;
                    }
                    if (cVar14 == '\0') {
                        *(u32 *)(a0 + 0x150) = 0;
                        *(float *)(a0 + 0x154) = fVar11;
                    } else {
                        *(u64 *)(a0 + 0x150) = (u64)dVar9 & 0xffffffff;
                        *(u64 *)(a0 + 0x154) = in_xd14;
                    }
                    if (cVar14 == '\0') {
                        *(u32 *)(a0 + 0x158) = 0;
                    } else {
                        *(u64 *)(a0 + 0x158) = (u64)dVar9 & 0xffffffff;
                    }
                    *(int *)(a0 + 0x13c) = iVar5;
                    goto LAB_8c0f4912;
                }
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x140) = 0;
                } else {
                    *(u64 *)(a0 + 0x140) = (u64)dVar9 & 0xffffffff;
                }
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x144) = 0;
                } else {
                    *(u64 *)(a0 + 0x144) = (u64)dVar9 & 0xffffffff;
                }
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x148) = 0;
                    *(u32 *)(a0 + 0x150) = 0xbf800000;
                    *(u32 *)(a0 + 0x154) = 0xbf800000;
                    *(u32 *)(a0 + 0x158) = 0xbf800000;
                } else {
                    *(u64 *)(a0 + 0x148) = (u64)dVar9 & 0xffffffff;
                    *(u64 *)(a0 + 0x150) = 0x154bf800000;
                    *(u64 *)(a0 + 0x154) = 0x154bf800000;
                    *(u64 *)(a0 + 0x158) = 0x154bf800000;
                }
                *(u32 *)(a0 + 0x13c) = 0xffffffff;
            }
        } else if ((iVar2 == 1) || (iVar2 == 2)) {
            (**(code **)(*a1 + 0x128))(a1, &fStack_b0, a6, a3);
            if (cVar14 == '\0') {
                fVar11 = (float)((u64)uVar8 >> 0x20);
                dVar9 = (double)CONCAT44(pfVar4[1], (int)uVar8);
            } else {
                dVar9 = *(double *)(pfVar4 + 1);
                in_xd14 = uVar8;
            }
            if (cVar13 == '\0') {
                bVar12 = (float)((u64)dVar9 >> 0x20) < fVar11;
            } else {
                bVar12 = dVar9 < (double)CONCAT44(in_fr14, fVar11);
            }
            if (bVar12) {
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x140) = 0;
                } else {
                    *(u64 *)(a0 + 0x140) = (u64)dVar9 & 0xffffffff;
                }
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x144) = 0x3f800000;
                } else {
                    *(u64 *)(a0 + 0x144) = CONCAT44(0x3f800000, SUB84(dVar9, 0));
                }
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x148) = 0;
                } else {
                    *(u64 *)(a0 + 0x148) = (u64)dVar9 & 0xffffffff;
                }
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x150) = 0;
                    *(float *)(a0 + 0x154) = fVar11;
                } else {
                    *(u64 *)(a0 + 0x150) = (u64)dVar9 & 0xffffffff;
                    *(u64 *)(a0 + 0x154) = in_xd14;
                }
                if (cVar14 == '\0') {
                    *(u32 *)(a0 + 0x158) = 0;
                } else {
                    *(u64 *)(a0 + 0x158) = (u64)dVar9 & 0xffffffff;
                }
                *(int *)(a0 + 0x13c) = iVar5;
                goto LAB_8c0f4912;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x140) = 0;
            } else {
                *(u64 *)(a0 + 0x140) = (u64)dVar9 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x144) = 0;
            } else {
                *(u64 *)(a0 + 0x144) = (u64)dVar9 & 0xffffffff;
            }
            if (cVar14 == '\0') {
                *(u32 *)(a0 + 0x148) = 0;
                *(u32 *)(a0 + 0x150) = 0xbf800000;
                *(u32 *)(a0 + 0x154) = 0xbf800000;
                *(u32 *)(a0 + 0x158) = 0xbf800000;
            } else {
                *(u64 *)(a0 + 0x148) = (u64)dVar9 & 0xffffffff;
                *(u64 *)(a0 + 0x150) = 0x154bf800000;
                *(u64 *)(a0 + 0x154) = 0x154bf800000;
                *(u64 *)(a0 + 0x158) = 0x154bf800000;
            }
            *(u32 *)(a0 + 0x13c) = 0xffffffff;
        }
        iVar5 = iVar5 + 1;
        pfVar4 = pfVar4 + 3;
    } while (true);
}

/*
 * CAnimal_vec_0f4974  0x8c0f4974
 * area name: sits between CAnimal functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: Class_12b930_m3_0de4b0, Class_12bb08_m1_0da338, Class_12bb08_m2_0da5a8
 */
u32 CAnimal_vec_0f4974(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int a5;

    a5 = a0 + 0xa0;
    (**(code **)(0x194 + *(int *)(a0 + 8)))(a0, a5, a1, a3);
    game_vec_0f79b8(a0 + 0xa0, a5, a1, a3);
    return 1;
}

/*
 * CAnimal_m7_0f49b8  0x8c0f49b8
 * called by: CAnimal_m7_088210
 */
u32 CAnimal_m7_0f49b8(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *ar5_00;
    u32 *a6;
    float fVar3;
    double in_dr0;
    double dVar4;
    double dVar5;
    float fVar6;
    double in_dr12;
    u32 in_fr15;
    double dVar7;
    double in_xd12;
    bool bVar8;
    char cVar9;
    char cVar10;
    u32 uStack_38;
    float fStack_34;
    float fStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;

    cVar10 = '\0';
    cVar9 = '\0';
    ar5_00 = a1;
    Vec3_ctor_zero(&uStack_28, a1, a2);
    Vec3_ctor_zero(&uStack_38, ar5_00, a2);
    (**(code **)(*(int *)(a0 + 8) + 0x170))(a0, ar5_00, a2, a3);
    uVar2 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar10 == '\0') {
        in_fr15 = uVar2;
        uVar2 = uStack_38;
    }
    uStack_38 = uVar2;
    (**(code **)(*(int *)(a0 + 8) + 0x174))(a0, ar5_00, a2, a3);
    dVar7 = in_dr0;
    if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr15);
    }
    iVar1 = (**(code **)(*(int *)(a0 + 8) + 0xb4))(a0, ar5_00, a2, a3);
    if (iVar1 == 0) {
        dVar7 = (double)CONCAT44(0x3f800000, SUB84(dVar7, 0));
    }
    a6 = &uStack_38;
    (**(code **)(*a1 + 0x124))(a1, &uStack_28, a6, a3);
    if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(a0 + 0x30));
    }
    fVar6 = SUB84(dVar7, 0);
    if (cVar9 == '\0') {
        fVar3 = SUB84(in_dr0, 0) - fVar6;
    } else {
        fVar3 = SUB84(in_dr0 - dVar7, 0);
    }
    if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(uStack_28, fVar3);
    } else {
        dVar4 = (double)CONCAT44(uStack_24, uStack_28);
    }
    fVar3 = (float)((u64)dVar4 >> 0x20);
    if (cVar9 == '\0' && fVar3 < SUB84(dVar4, 0)) {
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(fVar3, *(u32 *)(a0 + 0x30));
        }
        if (cVar9 == '\0') {
            fVar3 = SUB84(dVar4, 0) + fVar6;
        } else {
            fVar3 = SUB84(dVar4 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(uStack_38, fVar3);
        } else {
            dVar4 = (double)CONCAT44(fStack_34, uStack_38);
        }
        if (cVar9 != '\0' || (float)((u64)dVar4 >> 0x20) <= SUB84(dVar4, 0)) {
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(uStack_38, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(fStack_34, uStack_38);
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) - fVar6, SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 - dVar7;
            }
            if (cVar10 == '\0') {
                *(int *)(a0 + 0x30) = (int)((u64)dVar4 >> 0x20);
            } else {
                *(double *)(a0 + 0x30) = dVar4;
            }
        }
    } else {
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(uStack_28, SUB84(dVar4, 0));
        } else {
            dVar4 = (double)CONCAT44(uStack_24, uStack_28);
        }
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + fVar6, SUB84(dVar4, 0));
        } else {
            dVar4 = dVar4 + dVar7;
        }
        if (cVar10 == '\0') {
            *(int *)(a0 + 0x30) = (int)((u64)dVar4 >> 0x20);
        } else {
            *(double *)(a0 + 0x30) = dVar4;
        }
    }
    if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44((int)((u64)dVar4 >> 0x20), *(u32 *)(a0 + 0x38));
    }
    if (cVar9 == '\0') {
        fVar3 = SUB84(dVar4, 0) - fVar6;
    } else {
        fVar3 = SUB84(dVar4 - dVar7, 0);
    }
    if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(uStack_20, fVar3);
    } else {
        dVar4 = (double)CONCAT44(uStack_1c, uStack_20);
    }
    fVar3 = (float)((u64)dVar4 >> 0x20);
    if (cVar9 == '\0' && fVar3 < SUB84(dVar4, 0)) {
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(fVar3, *(u32 *)(a0 + 0x38));
        }
        if (cVar9 == '\0') {
            fVar3 = SUB84(dVar4, 0) + fVar6;
        } else {
            fVar3 = SUB84(dVar4 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(fStack_30, fVar3);
        } else {
            dVar4 = (double)CONCAT44(uStack_2c, fStack_30);
        }
        if (cVar9 != '\0' || (float)((u64)dVar4 >> 0x20) <= SUB84(dVar4, 0)) {
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(fStack_30, SUB84(dVar4, 0));
            } else {
                dVar4 = (double)CONCAT44(uStack_2c, fStack_30);
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) - fVar6, SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 - dVar7;
            }
            if (cVar10 == '\0') {
                *(int *)(a0 + 0x38) = (int)((u64)dVar4 >> 0x20);
            } else {
                *(double *)(a0 + 0x38) = dVar4;
            }
        }
    } else {
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(uStack_20, SUB84(dVar4, 0));
        } else {
            dVar4 = (double)CONCAT44(uStack_1c, uStack_20);
        }
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + fVar6, SUB84(dVar4, 0));
        } else {
            dVar4 = dVar4 + dVar7;
        }
        if (cVar10 == '\0') {
            *(int *)(a0 + 0x38) = (int)((u64)dVar4 >> 0x20);
        } else {
            *(double *)(a0 + 0x38) = dVar4;
        }
    }
    (**(code **)(*a1 + 0x128))(a1, a0 + 0x30, a6, a3);
    if (cVar10 == '\0') {
        in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), (int)((u64)dVar4 >> 0x20));
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar4, 0));
        dVar4 = in_xd12;
    } else {
        dVar5 = *(double *)(a0 + 0x34);
    }
    fVar6 = (float)((u64)dVar7 >> 0x20);
    if (cVar9 == '\0') {
        bVar8 = SUB84(in_dr12, 0) < (float)((u64)dVar5 >> 0x20) - fVar6;
    } else {
        bVar8 = in_dr12 < dVar5 - dVar7;
    }
    if (bVar8) {
        fVar6 = fStack_34;
        fVar3 = fStack_30;
        if (cVar10 == '\0') {
            fVar6 = *(float *)(a0 + 0x34);
            fVar3 = fStack_34;
        }
        if (cVar9 != '\0' || fVar3 <= fVar6) {
            if (cVar10 == '\0') {
                *(float *)(a0 + 0x34) = fStack_34;
            } else {
                *(u64 *)(a0 + 0x34) = CONCAT44(fStack_30, fStack_34);
            }
        }
    } else {
        if (cVar9 == '\0') {
            fVar6 = SUB84(in_dr12, 0) + fVar6;
        } else {
            fVar6 = SUB84(in_dr12 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            *(float *)(a0 + 0x34) = fVar6;
        } else {
            *(double *)(a0 + 0x34) = dVar4;
        }
    }
    Vec3_dtor(&uStack_38, 0xffffffff, a6, a3);
    uVar2 = Vec3_dtor(&uStack_28, 0xffffffff, a6, a3);
    return uVar2;
}

/*
 * game_calls_calc_0f4b44  0x8c0f4b44
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: calc
 * called by: CAnimal_draw_088288, Class_12b3b8_uses_object_dtor_delete_0e7a78,
 * Class_12b580_uses_list_node_next_wrap_0da754, game_draw_038b04, game_draw_09c930, game_uses_light_set_vec_0da88c,
 * game_uses_light_set_vec_0df8d0, game_uses_matrix_push_0cc524 (+1 more)
 */
u32 game_calls_calc_0f4b44(int a0) {
    u32 uVar1;
    u64 in_dr4;

    *(int *)(a0 + 0x78) = (int)((u64)in_dr4 >> 0x20);
    *(int *)(a0 + 0x7c) = (int)in_dr4;
    uVar1 = gfxlib_calc_219070();
    return uVar1;
}

/*
 * noop_0f4b94  0x8c0f4b94
 */
u32 noop_0f4b94(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_vec_0f4b98  0x8c0f4b98
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0f4b98(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;
    u8 auStack_14[16];

    ar5_00 = a0 + 0x5c;
    Vec3_assign_copy_023e24(auStack_14, ar5_00);
    Vec3_set_one_08a9b8(a0 + 0x5c);
    (**(code **)(*(int *)(a0 + 8) + 0x34))(a0, ar5_00, a2, a3);
    Vec3_assign_copy(a0 + 0x5c, auStack_14);
    uVar1 = free_if_nonnull_wrap_016ac4(auStack_14, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * noop_0f4bf0  0x8c0f4bf0
 */
u32 noop_0f4bf0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * vcall_field_8_slot13  0x8c0f4bf4
 * calls virtual slot 13 of the object at +0x8
 */
u32 vcall_field_8_slot13(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x34))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * set_state_flag_40_74  0x8c0f4c0c
 * clears bits 4, 5 and sets bit 6 of the flags at +0x74
 * called by: Class_12bec0_uses_set_state_flag_40_74_0f5de8, game_uses_set_state_flag_40_74_027394,
 * set_state_flag_40_74_wrap, set_state_flag_40_74_wrap_09c79c, set_state_flag_40_74_wrap_0a538c
 */
u32 set_state_flag_40_74(int a0) {
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    return 0x74;
}

/*
 * post_inc_70  0x8c0f4c5c
 * returns the counter at +0x70 and increments it
 */
int post_inc_70(int a0) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0x70);
    *(int *)(a0 + 0x70) = iVar1 + 1;
    return iVar1;
}

/*
 * CItem_BeNotReference  0x8c0f4c78
 * strings: "Reference count is under 0.."; "CItem::BeNotReference"
 */
u32 CItem_BeNotReference(int a0) {
    *(int *)(a0 + 0x70) = *(int *)(a0 + 0x70) + -1;
    if (*(int *)(a0 + 0x70) < 0) {
        (*(code *)(&report_error_message))("Reference count is under 0..", "CItem::BeNotReference", 1, 2);
        *(u32 *)(a0 + 0x70) = 0;
    }
    return *(u32 *)(a0 + 0x70);
}

/*
 * Vec3_add_assign_on_field_30  0x8c0f4cd0
 * calls Vec3_add_assign on the member at +0x30
 */
u32 Vec3_add_assign_on_field_30(int a0, u32 a1) {
    u32 uVar1;

    uVar1 = Vec3_add_assign(a0 + 0x30, a1);
    return uVar1;
}

/*
 * Vec3_add_to_50  0x8c0f4cf0
 * adds the vector a1 to the vector at +0x50
 */
float *Vec3_add_to_50(int a0, float *a1) {
    *(float *)(a0 + 0x50) = *(float *)(a0 + 0x50) + *a1;
    *(float *)(a0 + 0x54) = *(float *)(a0 + 0x54) + a1[1];
    *(float *)(a0 + 0x58) = *(float *)(a0 + 0x58) + a1[2];
    return (float *)(a0 + 0x58);
}

/*
 * flag_74_bit31  0x8c0f4d34
 * 1 when bit 31 of the flags at +0x74 is set
 * called by: item_list_remove_inactive
 */
u32 flag_74_bit31(int a0) {
    if ((*(u32 *)(a0 + 0x74) & 0x80000000) == 0x80000000) {
        return 1;
    }
    return 0;
}

/*
 * ret_const_1_0f4d54  0x8c0f4d54
 */
u32 ret_const_1_0f4d54(void) {
    return 1;
}

/*
 * ret_const_0_0f4d5c  0x8c0f4d5c
 */
u32 ret_const_0_0f4d5c(void) {
    return 0;
}

/*
 * ret_const_0_0f4d64  0x8c0f4d64
 */
u32 ret_const_0_0f4d64(void) {
    return 0;
}

/*
 * ret_const_0_0f4d6c  0x8c0f4d6c
 */
u32 ret_const_0_0f4d6c(void) {
    return 0;
}

/*
 * ret_const_1_0f4d74  0x8c0f4d74
 */
u32 ret_const_1_0f4d74(void) {
    return 1;
}

/*
 * ret_const_0_0f4d7c  0x8c0f4d7c
 */
u32 ret_const_0_0f4d7c(void) {
    return 0;
}

/*
 * mask_74_7fffffff  0x8c0f4d84
 * called by: CAnimal_m2_0386d0, CAnimal_m2_088094, CEnv_uses_mask_74_7fffffff_0daa34, Class_12a0c4_state_switch_0679cc,
 * Class_12a0c4_state_switch_068e64, Class_12a0c4_uses_libgcc_divide_helper_068a4c, Class_12a990_m2_09bc2c,
 * Class_12acc8_m1_09f470 (+4 more)
 */
u32 mask_74_7fffffff(int a0) {
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0x7fffffff;
    return 1;
}

/*
 * Vec3_assign_wrap_0f4da4  0x8c0f4da4
 * called by: CEnv_AddItem, game_list_0dbd80
 */
u32 Vec3_assign_wrap_0f4da4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = Vec3_assign(a0 + 0x40, a0 + 0x30, a2, a3);
    return uVar1;
}

/*
 * pair_queue3_push  0x8c0f4dc4
 * appends (1, a1) to a three-entry pair queue at +0xec, count at +0x104
 * called by: CAnimal_uses_list_node_next_0f4258
 */
int pair_queue3_push(int a0, u32 a1) {
    int iVar1;
    int iVar2;
    u32 *puVar3;

    iVar2 = *(int *)(0x104 + a0);
    if (*(int *)(0x104 + a0) != 3) {
        puVar3 = (u32 *)(a0 + *(int *)(0x104 + a0) * 8 + 0xec);
        *puVar3 = 1;
        puVar3[1] = a1;
        *(int *)(0x104 + a0) = *(int *)(0x104 + a0) + 1;
        iVar1 = 0x104;
        iVar2 = 3;
        if (3 < *(int *)(0x104 + a0)) {
            *(u32 *)(0x104 + a0) = 3;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * set_field_108  0x8c0f4e1c
 * called by: CAnimal_uses_list_node_next_0f4258
 */
int set_field_108(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x108;
    *(u32 *)(0x108 + a0) = a1;
    return iVar1;
}

/*
 * set_field_128_0f4e28  0x8c0f4e28
 * called by: CAnimal_uses_list_node_next_0f4258
 */
int set_field_128_0f4e28(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x128;
    *(u32 *)(0x128 + a0) = a1;
    return iVar1;
}

/*
 * obj_state_load  0x8c0f4e34
 * loads a saved object record (name, two words, three Vec3s, flags) from a1 into a0
 * called by: CAnimal_state_load, egg_load_record, egg_load_record_b, game_uses_libgcc_divide_helper_06c148,
 * load_state_record_08b694, load_state_record_09ad34, load_state_record_09c7c0, load_state_record_0a5614
 */
u32 obj_state_load(int a0, int a1, u32 a2, u32 a3) {
    (*(code *)(&sprintf))(a0 + 0xc, a1, a2, a3, "%s");
    *(u32 *)(a0 + 0x20) = *(u32 *)(a1 + 0x14);
    *(u32 *)(a0 + 0x24) = *(u32 *)(a1 + 0x18);
    Vec3_assign(a0 + 0x30, a1 + 0x1c, a2, a3);
    vec3_copy_8c023d8c(a0 + 0x50, a1 + 0x2c, a2, a3);
    Vec3_assign_copy(a0 + 0x5c, a1 + 0x38);
    *(u32 *)(a0 + 0x6c) = *(u32 *)(a1 + 0x44);
    *(u32 *)(a0 + 0x74) = *(u32 *)(a1 + 0x48);
    return 0x74;
}

/*
 * obj_pose_load  0x8c0f4ebc
 * loads a pose record (a word, two Vec3s, flags) from a1 into a0
 * called by: CAnimal_load_record, load_pose_record_08b720, load_pose_record_09ad94, load_pose_record_09c820,
 * load_pose_record_0a5674
 */
u32 obj_pose_load(int a0, u32 *a1, u32 a2, u32 a3) {
    *(u32 *)(a0 + 0x24) = *a1;
    vec3_copy_8c023d8c(a0 + 0x50, a1 + 1, a2, a3);
    Vec3_assign_copy(a0 + 0x5c, a1 + 4);
    *(u32 *)(a0 + 0x6c) = a1[7];
    *(u32 *)(a0 + 0x74) = a1[8];
    return 0x74;
}

/*
 * obj_state_save  0x8c0f4f0c
 * saves the object a0 into the record a1 (inverse of obj_state_load)
 * called by: CAnimal_state_save, egg_save_record, egg_save_record_b, obj_state_save_full, save_state_record_09adec,
 * save_state_record_09c878, save_state_record_0a56cc
 */
u32 obj_state_save(int a0, int a1, u32 a2, u32 a3) {
    sprintf(a1, a1, a2, a3, "%s");
    *(u32 *)(a1 + 0x14) = *(u32 *)(a0 + 0x20);
    *(u32 *)(a1 + 0x18) = *(u32 *)(a0 + 0x24);
    Vec3_assign(a1 + 0x1c, a0 + 0x30, a2, a3);
    vec3_copy_8c023d8c(a1 + 0x2c, a0 + 0x50, a2, a3);
    Vec3_assign_copy(a1 + 0x38, a0 + 0x5c);
    *(u32 *)(a1 + 0x44) = *(u32 *)(a0 + 0x6c);
    *(u32 *)(a1 + 0x48) = *(u32 *)(a0 + 0x74) & 0xfffffffd;
    return 0x48;
}

/*
 * obj_pose_save  0x8c0f4fa4
 * saves a0's pose into the record a1 (inverse of obj_pose_load)
 * called by: CAnimal_save_record, obj_pose_save_wrap, save_pose_record_09ae4c, save_pose_record_09c8d8,
 * save_pose_record_0a572c
 */
u32 obj_pose_save(int a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;

    *a1 = *(u32 *)(a0 + 0x24);
    vec3_copy_8c023d8c(a1 + 1, a0 + 0x50, a2, a3);
    Vec3_assign_copy(a1 + 4, a0 + 0x5c);
    a1[7] = *(u32 *)(a0 + 0x6c);
    uVar1 = *(u32 *)(a0 + 0x74) & 0xfffffffd;
    a1[8] = uVar1;
    return uVar1;
}

/*
 * debug_print_object  0x8c0f5004
 * prints an object's number, kind, category, food and reference count and its position (no-op print in the release
 * build) strings: "No:%2ld kind:%d cat:%d food:%d ref:%d"; " pos x:%lf y:%lf z:%lf"
 */
u32 debug_print_object(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u32 ar7_00;
    u32 *puVar2;
    char cVar3;
    u32 uStack_bc;
    u32 uStack_b8;
    u8 auStack_ac[164];

    cVar3 = '\0';
    _uStack_b8 = *(u64 *)(a0 + 0x6c);
    uStack_bc = *(u32 *)(a0 + 0x28);
    sprintf(auStack_ac, a1, a2, r7, "No:%2ld kind:%d cat:%d food:%d ref:%d");
    _uStack_b8 = CONCAT44(0xffffffff, uStack_b8);
    ar7_00 = 0xd;
    uVar1 = a2;
    noop_102824(auStack_ac, a1, a2, 0xd);
    if (cVar3 == '\0') {
        _uStack_b8 = CONCAT44(*(u32 *)(a0 + 0x38), uStack_b8);
        uStack_b8 = *(u32 *)(a0 + 0x34);
        uStack_bc = *(u32 *)(a0 + 0x30);
        puVar2 = &uStack_bc;
    } else {
        _uStack_b8 = *(u64 *)(a0 + 0x38);
        uStack_bc = (u32)((u64) * (u64 *)(a0 + 0x34) >> 0x20);
        puVar2 = (u32 *)&stack0xffffff38;
    }
    *(char **)((int)puVar2 + -4) = " pos x:%lf y:%lf z:%lf";
    sprintf((u8 *)((int)puVar2 + 0x10), a1, uVar1, ar7_00, *(u32 *)((int)puVar2 + -4));
    *(u32 *)((int)puVar2 + 8) = 0xffffffff;
    uVar1 = noop_102824((u8 *)((int)puVar2 + 0x10), 0xfa, a2, 0xd, *(u32 *)((int)puVar2 + 8));
    return uVar1;
}

/*
 * Class_12c1f0_init_fields_0f50b4  0x8c0f50b4
 * area name: only called from Class_12c1f0 methods; behaviour name: writes 12 members
 * called by: Class_12c1f0_ctor, Class_12c1f0_ctor_kind
 */
u32 Class_12c1f0_init_fields_0f50b4(int a0) {
    *(u8 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x20) = 0;
    *(u32 *)(a0 + 0x24) = 0xffffffff;
    *(u32 *)(a0 + 0x28) = 0xffffffff;
    *(u32 *)(a0 + 0x6c) = 0x32;
    *(u32 *)(a0 + 0x70) = 0;
    *(u32 *)(a0 + 0x74) = 0;
    *(u32 *)(a0 + 0x68) = 0;
    *(u32 *)(0x168 + a0) = 0;
    *(u32 *)(0x164 + a0) = 0;
    *(u32 *)(0x16c + a0) = 1;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x80000000;
    return 0x74;
}

/*
 * CAnimal_m8_0f511c  0x8c0f511c
 * called by: Class_12a990_m8_09d3f8
 */
double *CAnimal_m8_0f511c(int a0, int *a1, u32 a2, u32 a3) {
    double *pdVar1;
    int a5;
    u32 uVar2;
    double in_dr0;
    float fVar4;
    double dVar3;
    float in_fr13;
    u32 in_fr12;
    u32 in_fr15;
    float fVar5;
    float fVar6;
    bool bVar7;
    char cVar8;
    char cVar9;

    cVar9 = '\0';
    cVar8 = '\0';
    (**(code **)(*a1 + 0x184))(a1, a1, a2, a3);
    if (cVar9 == '\0') {
        in_fr13 = (float)((u64)in_dr0 >> 0x20);
    }
    a5 = a0 + 0x30;
    (**(code **)(*a1 + 0x128))(a1, a5, a2, a3);
    if (cVar9 == '\0') {
        in_fr15 = (int)((u64)in_dr0 >> 0x20);
    }
    (**(code **)(*(int *)(a0 + 8) + 0x174))(a0, a5, a2, a3);
    uVar2 = SUB84(in_dr0, 0);
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr15);
    }
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    if (cVar9 == '\0') {
        fVar4 = 1.1754944e-38;
    } else {
        uVar2 = 0x800000;
        fVar4 = -NAN;
    }
    fVar5 = SUB84(in_dr0, 0);
    fVar6 = (float)((u64)in_dr0 >> 0x20);
    if (in_fr13 == fVar4) {
        if (cVar8 == '\0') {
            in_dr0 = (double)CONCAT44(fVar6, fVar5 + fVar6);
        } else {
            in_dr0 = in_dr0 + in_dr0;
        }
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(*(u32 *)(a0 + 0x34), uVar2);
        } else {
            dVar3 = *(double *)(a0 + 0x34);
        }
        if (cVar8 == '\0') {
            bVar7 = SUB84(in_dr0, 0) < (float)((u64)dVar3 >> 0x20);
        } else {
            bVar7 = in_dr0 < dVar3;
        }
        if (bVar7) {
            pdVar1 = (double *)0x74;
            *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
        } else {
            pdVar1 = (double *)0x74;
            *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x20;
        }
    } else {
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(*(u32 *)(a0 + 0x34), uVar2);
        } else {
            dVar3 = *(double *)(a0 + 0x34);
        }
        if (cVar8 == '\0') {
            bVar7 = in_fr13 < (float)((u64)dVar3 >> 0x20);
        } else {
            bVar7 = (double)CONCAT44(in_fr12, in_fr13) < dVar3;
        }
        if (bVar7) {
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(fVar6, fVar5 + fVar6);
            } else {
                in_dr0 = in_dr0 + in_dr0;
            }
            if (cVar9 == '\0') {
                dVar3 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar3, 0));
            } else {
                dVar3 = *(double *)(a0 + 0x34);
            }
            if (cVar8 == '\0') {
                bVar7 = SUB84(in_dr0, 0) < (float)((u64)dVar3 >> 0x20);
            } else {
                bVar7 = in_dr0 < dVar3;
            }
            if (bVar7) {
                pdVar1 = (double *)0x74;
                *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
            } else {
                pdVar1 = (double *)0x74;
                *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x20;
            }
        } else {
            *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x10;
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(fVar6, fVar5 + fVar6);
            } else {
                in_dr0 = in_dr0 + in_dr0;
            }
            pdVar1 = (double *)(a0 + 0x34);
            if (cVar9 == '\0') {
                dVar3 = (double)CONCAT44(*(u32 *)pdVar1, SUB84(dVar3, 0));
            } else {
                dVar3 = *pdVar1;
            }
            if (cVar8 == '\0') {
                bVar7 = SUB84(in_dr0, 0) < (float)((u64)dVar3 >> 0x20);
            } else {
                bVar7 = in_dr0 < dVar3;
            }
            if (!bVar7) {
                pdVar1 = (double *)0x74;
                *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x20;
            }
        }
    }
    return pdVar1;
}

/*
 * CAnimal_float_calc_0f528c  0x8c0f528c
 * area name: only called from CAnimal methods; behaviour name: floating-point arithmetic
 * called by: CAnimal_m1_0f41c8
 */
u32 CAnimal_float_calc_0f528c(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 s0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr7;
    u32 in_fr6;
    u32 in_fr9;
    u32 in_fr8;
    u32 in_fr11;
    u32 in_fr10;

    *(u32 *)(a0 + 0x30) = in_fr4;
    *(u32 *)(a0 + 0x34) = in_fr5;
    *(u32 *)(a0 + 0x38) = in_fr6;
    *(u32 *)(a0 + 0x50) = in_fr7;
    *(u32 *)(a0 + 0x54) = in_fr8;
    *(u32 *)(a0 + 0x58) = in_fr9;
    *(u32 *)(a0 + 0x5c) = in_fr10;
    *(u32 *)(a0 + 0x60) = in_fr11;
    *(u32 *)(a0 + 100) = s0;
    return 0;
}

/*
 * CAnimal_calls_calc_0f52c8  0x8c0f52c8
 * area name: only called from CAnimal methods; behaviour name: its callees mostly do: calc
 * called by: CAnimal_draw_029dec, CAnimal_draw_model_b
 */
u32 CAnimal_calls_calc_0f52c8(void) {
    u32 uVar1;

    uVar1 = gfxlib_calc_219070();
    return uVar1;
}

/*
 * CAnimal_calls_calc_0f5308  0x8c0f5308
 * area name: only called from CAnimal methods; behaviour name: its callees mostly do: calc
 * called by: CAnimal_draw_029dec, CAnimal_draw_model_b
 */
u32 CAnimal_calls_calc_0f5308(void) {
    u32 uVar1;

    uVar1 = gfxlib_calc_219070();
    return uVar1;
}

/*
 * game_update_fields_0f532c  0x8c0f532c
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: CFrogManEgg_ctor, CFrogManLine_ctor, CHigyoEgg_ctor, CMothEgg_ctor, CMothLine_ctor, CMushroomerEgg_ctor,
 * CSpiderEgg_ctor, Class_12a0c4_uses_libgcc_divide_helper_067594 (+2 more)
 */
u32 game_update_fields_0f532c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(0xa0 + a0) = a1;
    *(u32 *)(0xa4 + a0) = a2;
    uVar1 = (**(code **)(**(int **)(0xa4 + a0) + 0x24))(*(int **)(0xa4 + a0), *(u32 *)(0xa0 + a0), a2, a3);
    return uVar1;
}

/*
 * Class_12bec0_calc_0f5368  0x8c0f5368
 * area name: only called from Class_12bec0 methods; behaviour name: integer arithmetic on its arguments
 * called by: Class_12bec0_m2_0f5ca8, Class_12bec0_m3_0f5d1c
 */
u32 Class_12bec0_calc_0f5368(int a0) {
    u32 uVar1;

    uVar1 = (**(code **)(**(int **)(0xa4 + a0) + 0xc))(*(int **)(0xa4 + a0), a0 + 0x30, a0 + 0x50, *(u32 *)(0xa0 + a0));
    return uVar1;
}

/*
 * game_uses_rand_0f5398  0x8c0f5398
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: game_vec_08a948
 */
u32 *game_uses_rand_0f5398(int a0, double *a1, int a2) {
    u32 uVar1;
    int iVar2;
    u32 *puVar3;
    u32 in_fr1;
    u32 uVar4;
    double dVar5;
    double in_dr12;
    double in_dr14;
    int iVar6;
    int iVar7;
    char cVar8;
    char cVar9;

    cVar9 = '\0';
    cVar8 = '\0';
    if (a2 == 0) {
        in_dr14 = 2.508760045925733e+21;
        in_dr12 = 3.062442976448328e+17;
    } else if (a2 == 1) {
        in_dr14 = 5.879900592671609e+19;
        in_dr12 = 1.1709360855239885e+17;
    } else if (a2 == 2) {
        in_dr14 = 1.9172811027428727e+24;
        in_dr12 = 1924145626640.0;
    }
    if (a2 == 3) {
        *(u32 *)a1 = 0;
        puVar3 = (u32 *)((int)a1 + 4);
        *puVar3 = 0;
        *(u32 *)(a1 + 1) = 0;
    } else {
        uVar1 = rand();
        if (cVar8 == '\0') {
            iVar6 = (int)SUB84(in_dr12, 0);
        } else {
            iVar6 = (int)in_dr12;
        }
        iVar2 = libgcc_divide_helper_01031c(uVar1, iVar6, a2);
        if (cVar8 == '\0') {
            iVar7 = (int)SUB84(in_dr14, 0);
        } else {
            iVar7 = (int)in_dr14;
        }
        if (cVar8 == '\0') {
            dVar5 = (double)CONCAT44((float)(iVar7 + iVar2), in_fr1);
        } else {
            dVar5 = (double)(iVar7 + iVar2);
        }
        if (cVar9 == '\0') {
            *(int *)a1 = (int)((u64)dVar5 >> 0x20);
        } else {
            *a1 = dVar5;
        }
        uVar1 = rand();
        uVar4 = SUB84(dVar5, 0);
        if (cVar8 == '\0') {
            iVar6 = (int)(float)((u64)in_dr12 >> 0x20);
        } else {
            iVar6 = (int)in_dr12;
        }
        iVar6 = libgcc_divide_helper_01031c(uVar1, iVar6, a2);
        if (cVar8 == '\0') {
            iVar2 = (int)(float)((u64)in_dr14 >> 0x20);
        } else {
            iVar2 = (int)in_dr14;
        }
        if (cVar8 == '\0') {
            dVar5 = (double)CONCAT44((float)(iVar2 + iVar6), uVar4);
        } else {
            dVar5 = (double)(iVar2 + iVar6);
        }
        if (cVar9 == '\0') {
            *(int *)(a1 + 1) = (int)((u64)dVar5 >> 0x20);
            *(u32 *)((int)a1 + 4) = *(u32 *)(a0 + 0x34);
        } else {
            a1[1] = dVar5;
            *(u64 *)((int)a1 + 4) = *(u64 *)(a0 + 0x34);
        }
        puVar3 = (u32 *)(a0 + 0x34);
    }
    return puVar3;
}

/*
 * game_calc_0f54b8  0x8c0f54b8
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 */
u32 *game_calc_0f54b8(u32 unused_a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = 0;
    *a2 = 0;
    *a3 = 0x42c80000;
    return &g_8c0f54cc;
}

/*
 * get_vec3_field_30_0f54d0  0x8c0f54d0
 * copies the three words at +0x30 to the pointers in a1..a3
 */
u32 *get_vec3_field_30_0f54d0(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0x30);
    *a2 = *(u32 *)(a0 + 0x34);
    *a3 = *(u32 *)(a0 + 0x38);
    return (u32 *)(a0 + 0x34);
}

/*
 * Class_12c058_ctor  0x8c0f54ec
 * builds the Class_129920 base, stores the Class_12c058 vtable at +8 and initialises the object
 * called by: CItemGLoader_create_creature_by_kind
 */
int Class_12c058_ctor(int a0, u32 a1, int a2, u32 unused_a3, u32 s0, u32 s4) {
    int ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 *puVar1;
    char cVar2;
    u32 uStackY_38;

    cVar2 = '\0';
    _uStackY_38 = (u64)uStackY_38;
    ar7_00 = 0xffffffff;
    ar6_00 = 2;
    ar5_00 = a2;
    Class_12c1f0_ctor_kind(a0, a2, 2, 0xffffffff, 0);
    *(u8 **)(a0 + 8) = &g_8c12c058;
    Class_129920_ctor(a0 + 0x170, ar5_00);
    clear_field_0_wrap_015ab8(a0 + 0x178);
    Class_129938_ctor(a0 + 0x17c, ar5_00, ar6_00);
    noop_0f58a0();
    if (cVar2 == '\0') {
        puVar1 = (u32 *)&stack0xffffffcc;
        _uStackY_38 = CONCAT44(s0, uStackY_38);
    } else {
        _uStackY_38 = CONCAT44(s4, s0);
        puVar1 = &uStackY_38;
    }
    Class_12c058_m1_0f5660(a0, *(u32 *)((int)puVar1 + 4), ar6_00, ar7_00);
    if (a2 == 0x10) {
        *(u32 *)(a0 + 0x16c) = 0;
    }
    return a0;
}

/*
 * Class_12c058_m0_0f55d8  0x8c0f55d8
 */
int Class_12c058_m0_0f55d8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12c058;
        Class_129938_dtor(a0 + 0x17c, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016bfc(a0 + 0x178, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x170, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_12c1f0_m0_0f4108(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12c058_m1_0f5660  0x8c0f5660
 * called by: Class_12c058_ctor
 */
u32 Class_12c058_m1_0f5660(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    CAnimal_m1_0f41c8(a0, a1);
    uVar1 = game_update_fields_0f532c(a0, 0x8c43b2a4, a0 + 0x17c, a3);
    return uVar1;
}

/*
 * sink_until_minus100  0x8c0f56e8
 * lowers +0x34 by 0.1 per call; at -100 clears the active bit 31 of +0x74
 */
u32 sink_until_minus100(int a0) {
    *(float *)(a0 + 0x34) = *(float *)(a0 + 0x34) - 0.1;
    if (*(float *)(a0 + 0x34) <= -100.0) {
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0x7fffffff;
    }
    return 1;
}

/*
 * vcall_field_170_slot2  0x8c0f5730
 * calls virtual slot 2 of the object at +0x170
 */
u32 vcall_field_170_slot2(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 0x170) + 8))((int *)(a0 + 0x170), a1, a2, a3);
    return uVar1;
}

/*
 * set_field_0_on_field_178  0x8c0f5754
 * calls set_field_0_015ad4 on the member at +0x178
 */
u32 set_field_0_on_field_178(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = set_field_0_015ad4(a0 + 0x178, a1, a2);
    return uVar1;
}

/*
 * Class_12c058_draw_0f577c  0x8c0f577c
 * area name: sits between Class_12c058 functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 Class_12c058_draw_0f577c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    uVar1 = 0;
    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c_wrap();
    rotate_xyz_degrees();
    game_draw_015adc(a0 + 0x178, a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_12c058_draw  0x8c0f57f0
 * binds the texlist at +0x170 and draws the model at +0x178 rotated by its XYZ angles, inside a matrix push/pop
 */
u32 Class_12c058_draw(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    obj_set_texlist(a0 + 0x170, a1, a2);
    uVar1 = 0;
    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c_wrap();
    rotate_xyz_degrees();
    game_draw_015adc(a0 + 0x178, a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * get_field_24_0f5878  0x8c0f5878
 */
u32 get_field_24_0f5878(int a0) {
    return *(u32 *)(a0 + 0x24);
}

/*
 * field_ptr_170  0x8c0f5880
 * returns the address of the member at +0x170
 */
int field_ptr_170(int a0) {
    return a0 + 0x170;
}

/*
 * field_ptr_178  0x8c0f5890
 * returns the address of the member at +0x178
 */
int field_ptr_178(int a0) {
    return a0 + 0x178;
}

/*
 * noop_0f58a0  0x8c0f58a0
 * called by: Class_12c058_ctor
 */
u32 noop_0f58a0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * Class_12bec0_ctor  0x8c0f58a4
 * builds the Class_129920 base, stores the Class_12bec0 vtable at +8 and initialises the object
 * called by: CItemGLoader_create_creature_by_kind
 */
int Class_12bec0_ctor(int a0, u32 a1, u32 a2) {
    u32 ar5_00;
    u32 ar6_00;

    ar6_00 = 3;
    ar5_00 = 0xf;
    Class_12c1f0_ctor_kind(a0, 0xf, 3, a1, a2);
    *(u8 **)(a0 + 8) = (&DATA_8c12bec0);
    Class_129808_copy_016410(a0 + 0x170);
    Class_129920_ctor(a0 + 0x1b4, ar5_00);
    Vec3_ctor_zero(a0 + 0x1bc, ar5_00, ar6_00);
    Class_129938_ctor(a0 + 0x1dc, ar5_00, ar6_00);
    *(u8 *)(0x1d8 + a0) = 0;
    g_8c43b338 = 0;
    0x8c43b338 [1] = 0;
    0x8c43b338 [2] = 0x7f;
    0x8c43b338 [3] = 0;
    0x8c43b338 [4] = 0x7f;
    0x8c43b338 [5] = 0x7f;
    0x8c43b338 [6] = 0;
    0x8c43b338 [7] = 0x7f;
    0x8c43b338 [8] = 0x7f;
    0x8c43b338 [9] = 0;
    0x8c43b338 [10] = (short)0xff;
    0x8c43b338 [0xb] = 0;
    0x8c43b338 [0xc] = (short)0xff;
    0x8c43b338 [0xd] = 0x7f;
    0x8c43b338 [0xe] = 0x7f;
    0x8c43b338 [0xf] = 0x7f;
    0x8c43b338 [0x10] = 0;
    0x8c43b338 [0x11] = (short)0x80;
    0x8c43b338 [0x12] = (short)0x80;
    0x8c43b338 [0x13] = (short)0x80;
    0x8c43b338 [0x14] = (short)0x80;
    0x8c43b338 [0x15] = (short)0xff;
    0x8c43b338 [0x16] = 0;
    0x8c43b338 [0x17] = (short)0xff;
    0x8c43b338 [0x18] = (short)0x80;
    0x8c43b338 [0x19] = (short)0x80;
    0x8c43b338 [0x1a] = (short)0xff;
    0x8c43b338 [0x1b] = (short)0x80;
    0x8c43b338 [0x1c] = (short)0xff;
    0x8c43b338 [0x1d] = (short)0xff;
    0x8c43b338 [0x1e] = (short)0x80;
    0x8c43b338 [0x1f] = (short)0xff;
    Class_12bec0_init_fields_0f5ad0(a0);
    game_update_fields_0f532c(a0, 0x8c43b47c, a0 + 0x1dc, a1);
    return a0;
}

/*
 * Class_12bec0_m0_0f5a48  0x8c0f5a48
 */
int Class_12bec0_m0_0f5a48(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12bec0;
        Class_129938_dtor(a0 + 0x1dc, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x1bc, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x1b4, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_12c1f0_m0_0f4108(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12bec0_init_fields_0f5ad0  0x8c0f5ad0
 * area name: only called from Class_12bec0 methods; behaviour name: writes 4 members
 * called by: Class_12bec0_ctor
 */
u32 Class_12bec0_init_fields_0f5ad0(int a0) {
    *(u32 *)(a0 + 0x1cc) = 0;
    *(u32 *)(a0 + 0x1d0) = 0;
    *(u32 *)(a0 + 0x1d4) = 0;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 1;
    return 0x74;
}

/*
 * Class_12bec0_uses_Class_129808_set_params_by_m_0f5b10  0x8c0f5b10
 * name hint from a string it uses: Failed to load textuer FOOD; area name: sits between Class_12bec0 functions (same
 * compilation unit); behaviour name: its main named callee is Class_129808_set_params_by_mode called by:
 * Class_12bec0_uses_Class_129808_set_params_by_m_0f5c88 strings: "@@GRAPHICS\\COMMON"; "Failed to load textuer.. FOOD!"
 */
int Class_12bec0_uses_Class_129808_set_params_by_m_0f5b10(int a0, u32 a1) {
    int iVar1;
    u8 *ar5_00;
    u8 *ar5_01;
    u8 **ar5_02;
    u8 *ar6_00;
    u32 ar6_01;
    u32 ar7_00;
    u32 uVar2;
    float fVar3;
    double dVar4;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    ar7_00 = 4;
    ar6_00 = &g_8c1401b4;
    ar5_00 = &g_8c140184;
    iVar1 = a0 + 0x170;
    Class_129808_set_params_by_mode(iVar1, &g_8c140184, &g_8c1401b4, 4);
    iVar1 = rand();
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar4 = 512.0001354217529;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x40800000, fVar3);
    } else {
        dVar4 = -1.3757563587465766e-249;
    }
    if (cVar5 == '\0') {
        iVar1 = (int)(SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20));
    } else {
        iVar1 = (int)(dVar4 * dVar4);
    }
    if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || (iVar1 == 3)) {
        ar6_01 = 4;
        ar5_01 = &g_8c43b338 + iVar1 * 0x10;
        Class_129808_update_fields_0164c8(a0 + 0x170, ar5_01, 4);
    } else {
        ar6_01 = 4;
        ar5_01 = &g_8c43b368;
        Class_129808_update_fields_0164c8(a0 + 0x170, &g_8c43b368, 4);
    }
    set_flag_14_20(a0 + 0x170);
    set_flags_14_60(a0 + 0x170);
    set_flag_14_bit31_and_20(a0 + 0x170);
    ar5_02 = &PTR_PTR_8c1401d0;
    (**(code **)(*(int *)(a0 + 0x1b4) + 8))((int *)(a0 + 0x1b4), &PTR_PTR_8c1401d0, ar6_01, ar7_00);
    iVar1 = get_field_4_0253e4(a0 + 0x1b4, ar5_02, ar6_01, ar7_00);
    for (uVar2 = 0; uVar2 < *(u32 *)(iVar1 + 4); uVar2 = uVar2 + 1) {
    }
    iVar1 = retry_until_done_020e80(a1, &g_8c14026d, "@@GRAPHICS\\COMMON" + 2, iVar1);
    if (iVar1 == -1) {
        iVar1 = report_error_message("Failed to load textuer.. FOOD!", &g_8c140291, 0, 2);
    }
    return iVar1;
}

/*
 * Class_12bec0_uses_Class_129808_set_params_by_m_0f5c88  0x8c0f5c88
 * name hint from a string it uses: Failed to load textuer FO wrap; area name: sits between Class_12bec0 functions (same
 * compilation unit); behaviour name: its callees mostly do: uses_Class_129808_set_params_by_m
 */
u32 Class_12bec0_uses_Class_129808_set_params_by_m_0f5c88(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = Class_12bec0_uses_Class_129808_set_params_by_m_0f5b10(a0, a1);
    return uVar1;
}

/*
 * Class_12bec0_m2_0f5ca8  0x8c0f5ca8
 */
u32 Class_12bec0_m2_0f5ca8(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar7_00;

    ar7_00 = a3;
    (**(code **)(*(int *)(a0 + 8) + 0x28))(a0, a3, a2, a3);
    Class_12bec0_uses_rand_0f5fdc(a0, a3, a2, ar7_00);
    iVar1 = get_field_6c_02f46c(a0);
    if (iVar1 == 0) {
        iVar1 = get_field_70_05f490(a0);
        if (iVar1 == 0) {
            mask_74_7fffffff(a0);
        }
    }
    Class_12bec0_calc_0f5368(a0);
    return 1;
}

/*
 * Class_12bec0_m3_0f5d1c  0x8c0f5d1c
 */
u32 Class_12bec0_m3_0f5d1c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    (**(code **)(*(int *)(a0 + 8) + 0x28))(a0, a3, a2, a3);
    iVar1 = get_field_6c_02f46c(a0);
    if (iVar1 == 0) {
        iVar1 = get_field_70_05f490(a0);
        if (iVar1 == 0) {
            mask_74_7fffffff(a0);
        }
    }
    Class_12bec0_calc_0f5368(a0);
    return 1;
}

/*
 * vcall_field_8_slot7_0f5d80  0x8c0f5d80
 * calls virtual slot 7 of the object at +0x8
 */
u32 vcall_field_8_slot7_0f5d80(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x1c))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * set_state_flag_40_only  0x8c0f5d98
 * clears state bits 0x10, 0x20, 0x40 of +0x74, then sets 0x40
 */
u32 set_state_flag_40_only(int a0) {
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    return 0x74;
}

/*
 * Class_12bec0_uses_set_state_flag_40_74_0f5de8  0x8c0f5de8
 * area name: sits between Class_12bec0 functions (same compilation unit); behaviour name: its main named callee is
 * set_state_flag_40_74
 */
int Class_12bec0_uses_set_state_flag_40_74_0f5de8(int a0) {
    int iVar1;

    set_state_flag_40_74(a0);
    iVar1 = 0x1cc;
    *(u32 *)(0x1cc + a0) = 0;
    return iVar1;
}

/*
 * Class_12bec0_draw_0f5e0c  0x8c0f5e0c
 * area name: sits between Class_12bec0 functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 Class_12bec0_draw_0f5e0c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    float fVar2;
    u64 in_dr0;
    double dVar3;
    int iVar4;
    char cVar5;
    char cVar6;
    u64 uStack_4c;
    u8 auStack_48[68];

    cVar6 = '\0';
    cVar5 = '\0';
    fpu_save_fr0_fr15_wrap((u8 *)((int)register0x0000003c + -0x48));
    matrix_push(0, unused_a1, a2, a3, (u32)uStack_4c);
    uVar1 = 0;
    touch_fields_30_3c(0, unused_a1, a2, a3, (u32)uStack_4c);
    libm_errno_wrap_013b3c();
    if (cVar6 == '\0') {
        uVar1 = (u32)((u64)in_dr0 >> 0x20);
        uStack_4c._0_4_ = uVar1;
        dVar3 = (double)CONCAT44(0x47800000, uVar1);
    } else {
        dVar3 = 12831.689682006836;
        uStack_4c = in_dr0;
    }
    if (cVar5 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar6 == '\0') {
        dVar3 = (double)CONCAT44(0x40c90fd8, fVar2);
    } else {
        dVar3 = 1.0382059669001045e+34;
    }
    if (cVar5 == '\0') {
        iVar4 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        iVar4 = (int)(dVar3 / dVar3);
    }
    if (cVar6 == '\0') {
        dVar3 = (double)CONCAT44(0x46fffe00, (float)iVar4);
    } else {
        dVar3 = -3.738952064572566e-250;
    }
    if (cVar5 == '\0') {
        iVar4 = (int)(SUB84(dVar3, 0) - (float)((u64)dVar3 >> 0x20));
    } else {
        iVar4 = (int)(dVar3 - dVar3);
    }
    njRotateX_like(0, iVar4, a2, a3, (u32)uStack_4c);
    matrix_scale(0, iVar4, a2, a3, (u32)uStack_4c);
    obj_set_texlist(a0 + 0x1b4, iVar4, a2);
    uVar1 = 0;
    obj_set_texture_num(a0 + 0x1b4, 0);
    Class_12bea8_calc_016524(a0 + 0x170, uVar1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_12bec0_draw_0f5f08  0x8c0f5f08
 * area name: sits between Class_12bec0 functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 Class_12bec0_draw_0f5f08(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_set_texlist(a0 + 0x1b4, a1, a2);
    uVar1 = 0;
    obj_set_texture_num(a0 + 0x1b4, 0);
    uVar1 = Class_12bea8_calc_016524(a0 + 0x170, uVar1, a2, a3);
    return uVar1;
}

/*
 * vcall_field_8_slot16  0x8c0f5f50
 * calls virtual slot 16 of the object at +0x8
 */
u32 vcall_field_8_slot16(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x40))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * vcall_field_8_slot16_0f5f6c  0x8c0f5f6c
 * calls virtual slot 16 of the object at +0x8
 */
u32 vcall_field_8_slot16_0f5f6c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x40))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * get_ptr_8c0f5f90  0x8c0f5f88
 * returns the address 0x8c0f5f90
 */
u32 *get_ptr_8c0f5f90(void) {
    return &g_8c0f5f90;
}

/*
 * get_ptr_8c0f5f9c  0x8c0f5f94
 * returns the address 0x8c0f5f9c
 */
u32 *get_ptr_8c0f5f9c(void) {
    return &g_8c0f5f9c;
}

/*
 * get_ptr_8c0f5fa8  0x8c0f5fa0
 * returns the address 0x8c0f5fa8
 */
u32 *get_ptr_8c0f5fa8(void) {
    return &g_8c0f5fa8;
}

/*
 * get_ptr_8c0f5fb4  0x8c0f5fac
 * returns the address 0x8c0f5fb4
 */
u32 *get_ptr_8c0f5fb4(void) {
    return &g_8c0f5fb4;
}

/*
 * noop_0f5fb8  0x8c0f5fb8
 */
u32 noop_0f5fb8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * obj_pose_save_wrap  0x8c0f5fbc
 * only calls obj_pose_save
 */
u32 obj_pose_save_wrap(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = obj_pose_save(a0, a1, a2, a3);
    return uVar1;
}

/*
 * Class_12bec0_uses_rand_0f5fdc  0x8c0f5fdc
 * area name: only called from Class_12bec0 methods; behaviour name: its main named callee is rand
 * called by: Class_12bec0_m2_0f5ca8
 */
u32 Class_12bec0_uses_rand_0f5fdc(int a0, float *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    float *pfVar5;
    int iVar6;
    float *ar5_00;
    u8 *puVar7;
    float *a6;
    u32 uVar8;
    float fVar9;
    float fVar12;
    double dVar10;
    u64 uVar11;
    double in_dr14;
    double dVar13;
    u64 in_xd0;
    char cVar14;
    char cVar15;
    u32 uStack_a4;
    u32 uStack_a0;
    u32 uStack_98;
    u32 uStack_94;
    u8 auStack_68[16];
    u8 auStack_58[16];
    float fStack_48;
    float fStack_44;
    u32 uStack_40;
    u32 uStack_3c;
    float fStack_38;
    float fStack_34;
    float fStack_30;
    float fStack_2c;
    u8 auStack_28[20];

    cVar15 = '\0';
    cVar14 = '\0';
    pfVar5 = a1;
    Vec3_ctor_zero(auStack_28, a1, a2);
    uVar8 = 0;
    Vec3_ctor_zero(&fStack_38, pfVar5, a2);
    Vec3_ctor_zero(&fStack_48, pfVar5, a2);
    a6 = &fStack_48;
    pfVar5 = a1;
    (**(code **)((int)*a1 + 0x124))(a1, &fStack_38, a6, a3);
    if (cVar15 == '\0') {
        fVar9 = *(float *)(a0 + 0x30);
        fVar12 = fStack_38;
    } else {
        in_xd0 = *(u64 *)(a0 + 0x30);
        fVar9 = fStack_38;
        fVar12 = fStack_34;
    }
    if (cVar14 == '\0' && fVar12 < fVar9) {
        pfVar5 = (float *)(a0 + 0x30);
        if (cVar15 == '\0') {
            fVar9 = *pfVar5;
            fVar12 = fStack_48;
        } else {
            in_xd0 = *(u64 *)pfVar5;
            fVar9 = fStack_48;
            fVar12 = fStack_44;
        }
        if (cVar14 != '\0' || fVar12 <= fVar9) {
            if (cVar15 != '\0') {
                in_xd0 = CONCAT44(fStack_44, fStack_48);
                fStack_48 = fVar9;
            }
            if (cVar14 == '\0') {
                fStack_48 = fStack_48 - 1.0;
            } else {
                fStack_48 = SUB84((double)CONCAT44(0x3f800000, fStack_48) - (double)CONCAT44(0x3f800000, fStack_48), 0);
            }
            if (cVar15 == '\0') {
                *(float *)(a0 + 0x30) = fStack_48;
            } else {
                *(u64 *)(a0 + 0x30) = in_xd0;
            }
        }
    } else {
        if (cVar15 != '\0') {
            in_xd0 = CONCAT44(fStack_34, fStack_38);
            fStack_38 = fVar9;
        }
        if (cVar14 == '\0') {
            fStack_38 = fStack_38 + 1.0;
        } else {
            fStack_38 = SUB84((double)CONCAT44(0x3f800000, fStack_38) + (double)CONCAT44(0x3f800000, fStack_38), 0);
        }
        if (cVar15 == '\0') {
            *(float *)(a0 + 0x30) = fStack_38;
        } else {
            *(u64 *)(a0 + 0x30) = in_xd0;
        }
    }
    ar5_00 = (float *)(a0 + 0x38);
    if (cVar15 == '\0') {
        fVar9 = *ar5_00;
        fVar12 = fStack_30;
    } else {
        in_xd0 = *(u64 *)ar5_00;
        fVar9 = fStack_30;
        fVar12 = fStack_2c;
    }
    if (cVar14 == '\0' && fVar12 < fVar9) {
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44(uStack_40, *(u32 *)(a0 + 0x38));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x38);
            dVar10 = (double)CONCAT44(uStack_3c, uStack_40);
        }
        if (cVar14 != '\0' || (float)((u64)dVar10 >> 0x20) <= SUB84(dVar10, 0)) {
            if (cVar15 == '\0') {
                dVar10 = (double)(u64)uStack_40;
            } else {
                in_xd0 = CONCAT44(uStack_3c, uStack_40);
            }
            dVar13 = (double)CONCAT44(0x3f800000, SUB84(dVar10, 0));
            if (cVar14 == '\0') {
                dVar10 = (double)CONCAT44(0x3f800000, SUB84(dVar10, 0) - 1.0);
            } else {
                dVar10 = dVar13 - dVar13;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x38) = SUB84(dVar10, 0);
            } else {
                *(u64 *)(a0 + 0x38) = in_xd0;
            }
        }
    } else {
        pfVar5 = (float *)(a0 + 0x38);
        if (cVar15 != '\0') {
            in_xd0 = CONCAT44(fStack_2c, fStack_30);
            fStack_30 = fVar9;
        }
        if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3f800000, fStack_30 + 1.0);
        } else {
            dVar10 = (double)CONCAT44(0x3f800000, fStack_30) + (double)CONCAT44(0x3f800000, fStack_30);
        }
        if (cVar15 == '\0') {
            *pfVar5 = SUB84(dVar10, 0);
        } else {
            *(u64 *)pfVar5 = in_xd0;
        }
    }
    iVar1 = *(int *)(a0 + 0x1cc);
    if (iVar1 == 0) {
        if ((*(u32 *)(a0 + 0x74) & 0x40) == 0x40) {
            uVar4 = rand();
            uVar3 = SUB84(in_dr14, 0);
            fVar9 = SUB84(dVar10, 0);
            uVar2 = rand();
            libgcc_divide_helper_01031c(uVar4, 0x14, a6);
            uVar4 = 0x14;
            libgcc_divide_helper_01031c(uVar2, 0x14, a6);
            Vec3_assign_f(a0 + 0x1bc, uVar4, a6, a3);
            puVar7 = &g_8c1401d8;
            iVar1 = a0 + 0x1bc;
            Vec3_div_scalar(iVar1, &g_8c1401d8);
            uVar4 = rand();
            uVar2 = 2;
            iVar1 = libgcc_divide_helper_01031c(uVar4, 2, a6);
            if (iVar1 == 0) {
                if (cVar15 == '\0') {
                    dVar10 = (double)CONCAT44(0xbf800000, *(u32 *)(a0 + 0x1bc));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x1bc);
                    dVar10 = 2.81690796727611e-312;
                }
                if (cVar14 == '\0') {
                    fVar9 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar9 = SUB84(dVar10 * dVar10, 0);
                }
                if (cVar15 == '\0') {
                    *(float *)(a0 + 0x1bc) = fVar9;
                } else {
                    *(u64 *)(a0 + 0x1bc) = in_xd0;
                }
            }
            uVar4 = rand();
            uVar2 = 2;
            iVar1 = libgcc_divide_helper_01031c(uVar4, 2, a6);
            if (iVar1 == 0) {
                if (cVar15 == '\0') {
                    dVar10 = (double)CONCAT44(0xbf800000, *(u32 *)(a0 + 0x1c4));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x1c4);
                    dVar10 = 2.81690796727611e-312;
                }
                if (cVar14 == '\0') {
                    fVar9 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar9 = SUB84(dVar10 * dVar10, 0);
                }
                if (cVar15 == '\0') {
                    *(float *)(a0 + 0x1c4) = fVar9;
                } else {
                    *(u64 *)(a0 + 0x1c4) = in_xd0;
                }
            }
            uVar11 = (u64)(u32)fVar9;
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x1d0) = 0;
            } else {
                *(u64 *)(a0 + 0x1d0) = uVar11;
            }
            uVar4 = rand();
            uVar2 = (u32)uVar11;
            iVar1 = libgcc_divide_helper_01031c(uVar4, 0x14, a6);
            if (cVar14 == '\0') {
                in_dr14 = (double)CONCAT44((float)iVar1, uVar3);
            } else {
                in_dr14 = (double)iVar1;
            }
            if (cVar15 == '\0') {
                dVar10 = (double)CONCAT44(0x41200000, uVar2);
            } else {
                dVar10 = 9.76657887968582e-312;
            }
            if (cVar14 == '\0') {
                in_dr14 =
                    (double)CONCAT44((float)((u64)in_dr14 >> 0x20) / (float)((u64)dVar10 >> 0x20), SUB84(in_dr14, 0));
            } else {
                in_dr14 = in_dr14 / dVar10;
            }
            dVar10 = (double)CONCAT44(0x3f800000, SUB84(dVar10, 0));
            if (cVar14 == '\0') {
                in_dr14 = (double)CONCAT44((float)((u64)in_dr14 >> 0x20) + 1.0, SUB84(in_dr14, 0));
            } else {
                in_dr14 = in_dr14 + dVar10;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x1d4) = (int)((u64)in_dr14 >> 0x20);
            } else {
                *(double *)(a0 + 0x1d4) = in_dr14;
            }
            *(int *)(a0 + 0x1cc) = *(int *)(a0 + 0x1cc) + 1;
        } else {
            uVar4 = rand();
            uVar3 = SUB84(in_dr14, 0);
            fVar9 = SUB84(dVar10, 0);
            uVar2 = rand();
            libgcc_divide_helper_01031c(uVar4, 0x32, a6);
            uVar4 = 0x32;
            libgcc_divide_helper_01031c(uVar2, 0x32, a6);
            Vec3_assign_f(a0 + 0x1bc, uVar4, a6, a3);
            puVar7 = &g_8c1401dc;
            iVar1 = a0 + 0x1bc;
            Vec3_div_scalar(iVar1, &g_8c1401dc);
            uVar4 = rand();
            uVar2 = 2;
            iVar1 = libgcc_divide_helper_01031c(uVar4, 2, a6);
            if (iVar1 == 0) {
                if (cVar15 == '\0') {
                    dVar10 = (double)CONCAT44(0xbf800000, *(u32 *)(a0 + 0x1bc));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x1bc);
                    dVar10 = 9.60729449836498e-312;
                }
                if (cVar14 == '\0') {
                    fVar9 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar9 = SUB84(dVar10 * dVar10, 0);
                }
                if (cVar15 == '\0') {
                    *(float *)(a0 + 0x1bc) = fVar9;
                } else {
                    *(u64 *)(a0 + 0x1bc) = in_xd0;
                }
            }
            uVar4 = rand();
            uVar2 = 2;
            iVar1 = libgcc_divide_helper_01031c(uVar4, 2, a6);
            if (iVar1 == 0) {
                if (cVar15 == '\0') {
                    dVar10 = (double)CONCAT44(0xbf800000, *(u32 *)(a0 + 0x1c4));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x1c4);
                    dVar10 = 9.60729449836498e-312;
                }
                if (cVar14 == '\0') {
                    fVar9 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar9 = SUB84(dVar10 * dVar10, 0);
                }
                if (cVar15 == '\0') {
                    *(float *)(a0 + 0x1c4) = fVar9;
                } else {
                    *(u64 *)(a0 + 0x1c4) = in_xd0;
                }
            }
            uVar11 = (u64)(u32)fVar9;
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x1d0) = 0;
            } else {
                *(u64 *)(a0 + 0x1d0) = uVar11;
            }
            uStack_94 = rand();
            uVar4 = (u32)uVar11;
            iVar1 = libgcc_divide_helper_01031c(uStack_94, 0x14, a6);
            if (cVar14 == '\0') {
                in_dr14 = (double)CONCAT44((float)iVar1, uVar3);
            } else {
                in_dr14 = (double)iVar1;
            }
            if (cVar15 == '\0') {
                dVar10 = (double)CONCAT44(0x41200000, uVar4);
            } else {
                dVar10 = 9.76657887968582e-312;
            }
            if (cVar14 == '\0') {
                in_dr14 =
                    (double)CONCAT44((float)((u64)in_dr14 >> 0x20) / (float)((u64)dVar10 >> 0x20), SUB84(in_dr14, 0));
            } else {
                in_dr14 = in_dr14 / dVar10;
            }
            dVar10 = (double)CONCAT44(0x3f800000, SUB84(dVar10, 0));
            if (cVar14 == '\0') {
                in_dr14 = (double)CONCAT44((float)((u64)in_dr14 >> 0x20) + 1.0, SUB84(in_dr14, 0));
            } else {
                in_dr14 = in_dr14 + dVar10;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x1d4) = (int)((u64)in_dr14 >> 0x20);
            } else {
                *(double *)(a0 + 0x1d4) = in_dr14;
            }
            *(u32 *)(a0 + 0x1cc) = 2;
        }
    } else if (iVar1 != 1) {
        if (iVar1 == 2) {
            iVar1 = a0 + 0x30;
            (**(code **)((int)*a1 + 0x128))(a1, iVar1, a6, a3);
            uVar2 = (u32)((u64)in_dr14 >> 0x20);
            uVar4 = (u32)((u64)dVar10 >> 0x20);
            uStack_a4 = uVar4;
            if (cVar15 != '\0') {
                uStack_a4 = SUB84(dVar10, 0);
                uStack_a0 = uVar4;
            }
            iVar6 = a0;
            (**(code **)(*(int *)(a0 + 8) + 0x174))(a0, iVar1, a6, a3);
            uVar4 = (u32)((u64)dVar10 >> 0x20);
            if (cVar15 == '\0') {
                dVar10 = (double)CONCAT44(uVar4, uStack_a4);
            } else {
                in_xd0 = CONCAT44(uStack_a0, uVar4);
            }
            if (cVar14 == '\0') {
                fVar9 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
            } else {
                fVar9 = SUB84(dVar10 + dVar10, 0);
            }
            if (cVar15 == '\0') {
                uVar11 = CONCAT44(*(u32 *)(a0 + 0x34), fVar9);
            } else {
                uVar11 = *(u64 *)(a0 + 0x34);
            }
            if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
                iVar6 = a0 + 0x1bc;
                Vec3_assign_f(iVar6, iVar1, a6, a3);
                if (cVar15 == '\0') {
                    *(u32 *)(a0 + 0x1d4) = 0;
                } else {
                    *(u64 *)(a0 + 0x1d4) = uVar11 & 0xffffffff;
                }
                uVar8 = 1;
                uVar11 = uVar11 & 0xffffffff;
                if (cVar15 == '\0') {
                    *(u32 *)(a0 + 0x1d0) = 0;
                } else {
                    *(u64 *)(a0 + 0x1d0) = uVar11;
                }
            }
            uVar3 = (u32)uVar11;
            uVar4 = rand();
            iVar1 = libgcc_divide_helper_01031c(uVar4, 100, a6);
            if (cVar15 == '\0') {
                dVar10 = (double)CONCAT44(0x461c4000, uVar3);
            } else {
                dVar10 = 3.23124508159998e-312;
            }
            if (cVar14 == '\0') {
                dVar13 = (double)CONCAT44(uVar2, (float)iVar1 / (float)((u64)dVar10 >> 0x20));
            } else {
                dVar13 = (double)CONCAT44(uVar2, (float)iVar1) / dVar10;
            }
            if (cVar15 == '\0') {
                dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x1d0), SUB84(dVar10, 0));
            } else {
                dVar10 = *(double *)(a0 + 0x1d0);
            }
            if (cVar14 == '\0') {
                dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) + SUB84(dVar13, 0), SUB84(dVar10, 0));
            } else {
                dVar10 = dVar10 + dVar13;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x1d0) = (int)((u64)dVar10 >> 0x20);
            } else {
                *(double *)(a0 + 0x1d0) = dVar10;
            }
            Vec3_scale(a0 + 0x1bc, a0 + 0x1d4, a6, a3, auStack_68);
            uVar4 = SUB84(dVar10, 0);
            Vec3_add_assign(a0 + 0x30, auStack_68);
            Vec3_dtor(auStack_68, 0xffffffff, a6, a3);
            if (cVar15 == '\0') {
                uVar4 = *(u32 *)(a0 + 0x34);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x34);
            }
            a6 = (float *)0x1d0;
            if (cVar15 == '\0') {
                dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x1d0), uVar4);
            } else {
                dVar10 = *(double *)(a0 + 0x1d0);
            }
            if (cVar14 == '\0') {
                fVar9 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
            } else {
                fVar9 = SUB84(dVar10 - dVar10, 0);
            }
            if (cVar15 == '\0') {
                *(float *)(a0 + 0x34) = fVar9;
            } else {
                *(u64 *)(a0 + 0x34) = in_xd0;
            }
        }
        goto LAB_8c0f6620;
    }
    uVar2 = (u32)((u64)in_dr14 >> 0x20);
    iVar1 = a0 + 0x30;
    (**(code **)((int)*a1 + 0x128))(a1, iVar1, a6, a3);
    uVar4 = (u32)((u64)dVar10 >> 0x20);
    uStack_98 = uVar4;
    if (cVar15 != '\0') {
        uStack_98 = SUB84(dVar10, 0);
        uStack_94 = uVar4;
    }
    iVar6 = a0;
    (**(code **)(*(int *)(a0 + 8) + 0x174))(a0, iVar1, a6, a3);
    uVar4 = (u32)((u64)dVar10 >> 0x20);
    if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(uVar4, uStack_98);
    } else {
        in_xd0 = CONCAT44(uStack_94, uVar4);
    }
    if (cVar14 == '\0') {
        fVar9 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
    } else {
        fVar9 = SUB84(dVar10 + dVar10, 0);
    }
    if (cVar15 == '\0') {
        uVar11 = CONCAT44(*(u32 *)(a0 + 0x34), fVar9);
    } else {
        uVar11 = *(u64 *)(a0 + 0x34);
    }
    if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
        iVar6 = a0 + 0x1bc;
        Vec3_assign_f(iVar6, iVar1, a6, a3);
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x1d4) = 0;
        } else {
            *(u64 *)(a0 + 0x1d4) = uVar11 & 0xffffffff;
        }
        uVar8 = 1;
        uVar11 = uVar11 & 0xffffffff;
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x1d0) = 0;
        } else {
            *(u64 *)(a0 + 0x1d0) = uVar11;
        }
    }
    uVar4 = (u32)uVar11;
    if ((*(u32 *)(a0 + 0x74) & 0x10) == 0x10) {
        *(u32 *)(a0 + 0x1cc) = 2;
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x1d4) = 0;
        } else {
            *(u64 *)(a0 + 0x1d4) = uVar11 & 0xffffffff;
        }
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x1d0) = 0;
        } else {
            *(u64 *)(a0 + 0x1d0) = uVar11 & 0xffffffff;
        }
        Vec3_scale_assign(a0 + 0x1bc, &g_8c1401e0);
    } else {
        uVar3 = rand();
        iVar1 = libgcc_divide_helper_01031c(uVar3, 100, a6);
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44(0x42c80000, uVar4);
        } else {
            dVar10 = 9.85159599864978e-312;
        }
        if (cVar14 == '\0') {
            dVar13 = (double)CONCAT44(uVar2, (float)iVar1 / (float)((u64)dVar10 >> 0x20));
        } else {
            dVar13 = (double)CONCAT44(uVar2, (float)iVar1) / dVar10;
        }
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x1d0), SUB84(dVar10, 0));
        } else {
            dVar10 = *(double *)(a0 + 0x1d0);
        }
        if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) + SUB84(dVar13, 0), SUB84(dVar10, 0));
        } else {
            dVar10 = dVar10 + dVar13;
        }
        if (cVar15 == '\0') {
            *(int *)(a0 + 0x1d0) = (int)((u64)dVar10 >> 0x20);
        } else {
            *(double *)(a0 + 0x1d0) = dVar10;
        }
        Vec3_scale(a0 + 0x1bc, a0 + 0x1d4, a6, a3, auStack_58);
        Vec3_add_assign(a0 + 0x30, auStack_58);
        Vec3_dtor(auStack_58, 0xffffffff, a6, a3);
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x1d0), *(u32 *)(a0 + 0x34));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x34);
            dVar10 = *(double *)(a0 + 0x1d0);
        }
        if (cVar14 == '\0') {
            fVar9 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
        } else {
            fVar9 = SUB84(dVar10 - dVar10, 0);
        }
        if (cVar15 == '\0') {
            *(float *)(a0 + 0x34) = fVar9;
        } else {
            *(u64 *)(a0 + 0x34) = in_xd0;
        }
    }
LAB_8c0f6620:
    Vec3_dtor(&fStack_48, 0xffffffff, a6, a3);
    Vec3_dtor(&fStack_38, 0xffffffff, a6, a3);
    Vec3_dtor(auStack_28, 0xffffffff, a6, a3);
    return uVar8;
}

/*
 * game_uses_rand_0f66ac  0x8c0f66ac
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 */
u32 *game_uses_rand_0f66ac(int a0, double *a1, int a2) {
    u32 uVar1;
    int iVar2;
    u32 *puVar3;
    u32 in_fr1;
    u32 uVar4;
    double dVar5;
    double in_dr12;
    double in_dr14;
    int iVar6;
    int iVar7;
    char cVar8;
    char cVar9;

    cVar9 = '\0';
    cVar8 = '\0';
    if (a2 == 0) {
        in_dr14 = 8.854438670043751e+20;
        in_dr12 = 5.879900608187177e+19;
    } else if (a2 == 1) {
        in_dr14 = 5.879900592671609e+19;
        in_dr12 = 1.1709360855239885e+17;
    } else if (a2 == 2) {
        in_dr14 = 1.9172811027428727e+24;
        in_dr12 = 1924145626640.0;
    }
    if (a2 == 3) {
        *(u32 *)a1 = 0;
        puVar3 = (u32 *)((int)a1 + 4);
        *puVar3 = 0;
        *(u32 *)(a1 + 1) = 0;
    } else {
        uVar1 = rand();
        if (cVar8 == '\0') {
            iVar6 = (int)SUB84(in_dr12, 0);
        } else {
            iVar6 = (int)in_dr12;
        }
        iVar2 = libgcc_divide_helper_01031c(uVar1, iVar6, a2);
        if (cVar8 == '\0') {
            iVar7 = (int)SUB84(in_dr14, 0);
        } else {
            iVar7 = (int)in_dr14;
        }
        if (cVar8 == '\0') {
            dVar5 = (double)CONCAT44((float)(iVar7 + iVar2), in_fr1);
        } else {
            dVar5 = (double)(iVar7 + iVar2);
        }
        if (cVar9 == '\0') {
            *(int *)a1 = (int)((u64)dVar5 >> 0x20);
        } else {
            *a1 = dVar5;
        }
        uVar1 = rand();
        uVar4 = SUB84(dVar5, 0);
        if (cVar8 == '\0') {
            iVar6 = (int)(float)((u64)in_dr12 >> 0x20);
        } else {
            iVar6 = (int)in_dr12;
        }
        iVar6 = libgcc_divide_helper_01031c(uVar1, iVar6, a2);
        if (cVar8 == '\0') {
            iVar2 = (int)(float)((u64)in_dr14 >> 0x20);
        } else {
            iVar2 = (int)in_dr14;
        }
        if (cVar8 == '\0') {
            dVar5 = (double)CONCAT44((float)(iVar2 + iVar6), uVar4);
        } else {
            dVar5 = (double)(iVar2 + iVar6);
        }
        if (cVar9 == '\0') {
            *(int *)(a1 + 1) = (int)((u64)dVar5 >> 0x20);
            *(u32 *)((int)a1 + 4) = *(u32 *)(a0 + 0x34);
        } else {
            a1[1] = dVar5;
            *(u64 *)((int)a1 + 4) = *(u64 *)(a0 + 0x34);
        }
        puVar3 = (u32 *)(a0 + 0x34);
    }
    return puVar3;
}

/*
 * get_ptr_8c0f67e8  0x8c0f67e0
 * returns the address 0x8c0f67e8
 */
u32 *get_ptr_8c0f67e8(void) {
    return &g_8c0f67e8;
}

/*
 * pos_add_random_offset  0x8c0f67ec
 * adds a random small offset vector (rand() % 3 based) to the position at +0x30
 */
u32 pos_add_random_offset(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 auStack_1c[20];

    uVar1 = rand();
    uVar2 = 3;
    libgcc_divide_helper_01031c(uVar1, 3, a2);
    uVar1 = rand();
    uVar2 = 3;
    libgcc_divide_helper_01031c(uVar1, 3, a2);
    Vec3_ctor_xyz(auStack_1c, uVar2, a2, a3);
    Vec3_add_assign(a0 + 0x30, auStack_1c);
    uVar1 = Vec3_dtor(auStack_1c, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * game_vec_0f6870  0x8c0f6870
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
int game_vec_0f6870(int a0, u32 a1, u32 a2, u32 a3) {
    Vec3_ctor_zero(a0, a1, a2);
    Vec3_set_zero(a0 + 0x10);
    Vec3_set_one(a0 + 0x1c);
    Vec3_ctor_zero(a0 + 0x34, a1, a2);
    game_vec_0f692c(a0, a1, a2, a3);
    return a0;
}

/*
 * game_release_0f68c0  0x8c0f68c0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 */
int game_release_0f68c0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Vec3_dtor(a0 + 0x34, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016ac4(a0 + 0x1c, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x10, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_vec_0f692c  0x8c0f692c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b580_vec_0f7204, game_vec_0f6870
 */
u32 game_vec_0f692c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    *(u32 *)(a0 + 0x28) = 0;
    *(u32 *)(a0 + 0x60) = 0x3f800000;
    *(u32 *)(a0 + 0x5c) = 0x3f800000;
    *(u32 *)(a0 + 0x58) = 0x3f800000;
    *(u32 *)(a0 + 0x54) = 0x3f800000;
    *(u32 *)(a0 + 0x2c) = 0;
    *(u32 *)(a0 + 0x30) = 0;
    *(u32 *)(a0 + 0x44) = 0;
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
        *(u32 *)(a0 + iVar1 * 4 + 0x48) = 0;
    }
    vec3_clear(a0, a1, a2, a3);
    clear_3_words(a0 + 0x10, a1, a2, a3);
    Vec3_set_one_08a9b8(a0 + 0x1c);
    *(u32 *)(a0 + 100) = 0;
    return 100;
}

/*
 * game_vec_0f69ec  0x8c0f69ec
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: start_free_entry_0c0c
 */
int game_vec_0f69ec(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar6_00;
    u32 in_fr1;
    u32 uVar3;
    u64 uVar4;
    double dVar5;
    u32 in_fr4;
    char cVar6;
    char cVar7;
    u32 uStack_24;

    cVar7 = '\0';
    cVar6 = '\0';
    ar6_00 = a2;
    Vec3_assign(a0, a1, a2, a3);
    if (cVar7 == '\0') {
        *(u32 *)(a0 + 0x24) = in_fr4;
        *(u32 *)(a0 + 0x20) = in_fr4;
        uVar4 = CONCAT44(in_fr4, in_fr1);
        *(u32 *)(a0 + 0x1c) = in_fr4;
    } else {
        *(u64 *)(a0 + 0x24) = CONCAT44(uStack_24, in_fr4);
        *(u64 *)(a0 + 0x20) = CONCAT44(uStack_24, in_fr4);
        uVar4 = CONCAT44(uStack_24, in_fr4);
        *(u64 *)(a0 + 0x1c) = uVar4;
    }
    Vec3_length_sq(a2, a1, ar6_00, a3);
    if (cVar7 == '\0') {
        *(int *)(a0 + 0x30) = (int)((u64)uVar4 >> 0x20);
    } else {
        *(u64 *)(a0 + 0x30) = uVar4;
    }
    uVar3 = (u32)uVar4;
    uVar1 = Vec3_length(a2, a1, ar6_00, a3);
    iVar2 = a0 + 0x34;
    Vec3_assign(iVar2, uVar1, ar6_00, a3);
    *(u32 *)(a0 + 0x2c) = 2;
    uVar1 = rand();
    iVar2 = libgcc_divide_helper_01031c(uVar1, 0x28, ar6_00);
    iVar2 = iVar2 + -0x14;
    if (cVar6 == '\0') {
        dVar5 = (double)CONCAT44((float)iVar2, uVar3);
    } else {
        dVar5 = (double)iVar2;
    }
    if (cVar7 == '\0') {
        *(int *)(a0 + 0x18) = (int)((u64)dVar5 >> 0x20);
    } else {
        *(double *)(a0 + 0x18) = dVar5;
    }
    return iVar2;
}

/*
 * has_field_2c  0x8c0f6ab0
 * 1 when +0x2c is non-zero
 * called by: Class_12b580_draw_with_children, Class_12b580_m1_0e634c, Class_12b580_m2_0e6548, Class_12bb08_m1_0da338,
 * Class_12bb08_m2_0da5a8, game_any_neighbor_within_range, game_draw_0df668, game_uses_matrix_apply_point_w1_wrap_0df250
 * (+4 more)
 */
u32 has_field_2c(int a0) {
    if (*(int *)(a0 + 0x2c) != 0) {
        return 1;
    }
    return 0;
}

/*
 * game_vec_0f6ac4  0x8c0f6ac4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b580_vec_0f7204
 */
u32 game_vec_0f6ac4(u64 *a0, int *a1, u32 a2) {
    u32 ar4_00;
    int iVar1;
    int *piVar2;
    u32 *a5;
    float *a6;
    float *a7;
    u32 uVar3;
    float fVar4;
    u64 in_dr0;
    double dVar5;
    float fVar9;
    u64 uVar6;
    u64 uVar7;
    double dVar8;
    u32 in_fr15;
    u64 in_xd0;
    u64 in_xd14;
    bool bVar10;
    u32 in_PR;
    char cVar11;
    char cVar12;
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[4];
    float fStack_30;
    float afStack_2c[2];
    u32 uStack_24;
    float fStack_20;
    float fStack_1c;
    u32 uStack_18;

    cVar12 = '\0';
    cVar11 = '\0';
    piVar2 = a1;
    uStack_18 = in_PR;
    clear_3_words_102748(&uStack_24);
    Vec3_ctor_zero(auStack_34, piVar2, a2);
    Vec3_ctor_zero(auStack_44, piVar2, a2);
    a7 = &fStack_1c;
    a6 = &fStack_20;
    a5 = &uStack_24;
    piVar2 = a1;
    (**(code **)(*a1 + 0x120))(a1, a5, a6, a7);
    dVar8 = (double)CONCAT44(0x3f800000, in_fr15);
    uVar3 = (u32)in_dr0;
    if (((u32)a0[9] == 0) && ((u32)a0[10] == 0)) {
        if (cVar12 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)((int)a0 + 0x44), uVar3);
        } else {
            dVar5 = *(double *)((int)a0 + 0x44);
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) + 1.0, SUB84(dVar5, 0));
        } else {
            dVar5 = dVar5 + dVar8;
        }
        if (cVar12 == '\0') {
            *(u32 *)((int)a0 + 0x44) = (u32)((u64)dVar5 >> 0x20);
        } else {
            *(double *)((int)a0 + 0x44) = dVar5;
        }
    } else {
        *(u32 *)(a0 + 5) = (u32)a0[5] + 1;
        if ((int)(u32)a0[5] < 0xb5) {
            if (cVar12 == '\0') {
                *(u32 *)((int)a0 + 0x44) = 0;
            } else {
                *(u64 *)((int)a0 + 0x44) = in_dr0 & 0xffffffff;
            }
        } else {
            ar4_00 = rand();
            iVar1 = libgcc_divide_helper_01031c(ar4_00, 10, a6);
            if ((iVar1 == 0) || (iVar1 = game_any_neighbor_within_range(a0, a1, a6, a7), iVar1 != 0)) {
                if (cVar12 == '\0') {
                    *(u32 *)((int)a0 + 0x44) = 0;
                } else {
                    *(u64 *)((int)a0 + 0x44) = (u64)uVar3;
                }
            } else {
                if (cVar12 == '\0') {
                    dVar5 = (double)CONCAT44(0x3dcccccd, *(u32 *)((int)a0 + 0x44));
                } else {
                    in_xd0 = *(u64 *)((int)a0 + 0x44);
                    dVar5 = 4.07935454911844e-312;
                }
                if (cVar11 == '\0') {
                    fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar5 + dVar5, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)((int)a0 + 0x44) = fVar4;
                } else {
                    *(u64 *)((int)a0 + 0x44) = in_xd0;
                }
            }
        }
        if (*(u32 *)((int)a0 + 100) == 0) {
            a7 = afStack_2c;
            a6 = &fStack_30;
            (**(code **)(*a1 + 0x13c))(a1, auStack_34, a6, a7);
            Vec3_sub(a0, auStack_34, a6, a7, auStack_54);
            Vec3_assign(auStack_44, auStack_54, a6, a7);
            Vec3_dtor(auStack_54, 0xffffffff, a6, a7);
            se_play_3d(0x8c2b59d0, 0x28, a6, a7);
            *(u32 *)((int)a0 + 100) = 1;
        }
    }
    Vec3_scale((u32 *)((int)a0 + 0x34), a0 + 6, a6, a7, auStack_64);
    Vec3_add_assign(a0, auStack_64);
    Vec3_dtor(auStack_64, 0xffffffff, a6, a7);
    if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)((int)a0 + 0x44), *(u32 *)((int)a0 + 4));
    } else {
        in_xd0 = *(u64 *)((int)a0 + 4);
        dVar5 = *(double *)((int)a0 + 0x44);
    }
    if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 - dVar5, 0);
    }
    if (cVar12 == '\0') {
        *(float *)((int)a0 + 4) = fVar4;
        uVar6 = CONCAT44(uStack_24, (u32)*a0);
    } else {
        *(u64 *)((int)a0 + 4) = in_xd0;
        in_xd0 = *a0;
        uVar6 = CONCAT44(fStack_20, uStack_24);
    }
    if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
        if (cVar12 == '\0') {
            uVar6 = (u64)(u32)*a0;
        } else {
            in_xd0 = *a0;
        }
        if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
            if (cVar12 == '\0') {
                *(u32 *)a0 = 0;
            } else {
                *a0 = uVar6 & 0xffffffff;
            }
            fVar4 = (float)(int)(u32)a0[9];
            if (cVar12 == '\0') {
                fVar9 = 3.0;
            } else {
                fVar4 = 3.0;
                fVar9 = 1.8;
            }
            if (cVar11 == '\0' && fVar4 < fVar9) {
                if (cVar12 == '\0') {
                    dVar5 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x1c));
                } else {
                    in_xd0 = *(u64 *)((int)a0 + 0x1c);
                    dVar5 = 4.41904794563714e-312;
                }
                if (cVar11 == '\0') {
                    fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar5 / dVar5, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)((int)a0 + 0x1c) = fVar4;
                    dVar5 = (double)CONCAT44(0x3fe66666, (u32)a0[4]);
                } else {
                    *(u64 *)((int)a0 + 0x1c) = in_xd0;
                    in_xd0 = a0[4];
                    dVar5 = 4.41904794563714e-312;
                }
                if (cVar11 == '\0') {
                    fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar5 * dVar5, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)(a0 + 4) = fVar4;
                    dVar5 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x24));
                } else {
                    a0[4] = in_xd0;
                    in_xd0 = *(u64 *)((int)a0 + 0x24);
                    dVar5 = 4.41904794563714e-312;
                }
                if (cVar11 == '\0') {
                    fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar5 * dVar5, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)((int)a0 + 0x24) = fVar4;
                } else {
                    *(u64 *)((int)a0 + 0x24) = in_xd0;
                }
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 6) = 0;
                } else {
                    a0[6] = (u64)(u32)fVar4;
                }
                *(u32 *)(a0 + 9) = (u32)a0[9] + 1;
                if (cVar12 == '\0') {
                    *(u32 *)((int)a0 + 0x44) = 0;
                } else {
                    *(u64 *)((int)a0 + 0x44) = (u64)(u32)fVar4;
                }
            }
        }
    } else {
        if (cVar12 == '\0') {
            *(u32 *)a0 = uStack_24;
        } else {
            *a0 = CONCAT44(fStack_20, uStack_24);
        }
        fVar4 = (float)(int)(u32)a0[9];
        if (cVar12 == '\0') {
            fVar9 = 3.0;
        } else {
            fVar4 = 3.0;
            fVar9 = 1.8;
        }
        if (cVar11 == '\0' && fVar4 < fVar9) {
            if (cVar12 == '\0') {
                dVar5 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x1c));
            } else {
                in_xd0 = *(u64 *)((int)a0 + 0x1c);
                dVar5 = -1.4876824575960095e+234;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 / dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)((int)a0 + 0x1c) = fVar4;
                dVar5 = (double)CONCAT44(0x3fe66666, (u32)a0[4]);
            } else {
                *(u64 *)((int)a0 + 0x1c) = in_xd0;
                in_xd0 = a0[4];
                dVar5 = -1.4876824575960095e+234;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 4) = fVar4;
                dVar5 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x24));
            } else {
                a0[4] = in_xd0;
                in_xd0 = *(u64 *)((int)a0 + 0x24);
                dVar5 = -1.4876824575960095e+234;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)((int)a0 + 0x24) = fVar4;
            } else {
                *(u64 *)((int)a0 + 0x24) = in_xd0;
            }
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 6) = 0;
            } else {
                a0[6] = (u64)(u32)fVar4;
            }
            *(u32 *)(a0 + 9) = (u32)a0[9] + 1;
            if (cVar12 == '\0') {
                *(u32 *)((int)a0 + 0x44) = 0;
            } else {
                *(u64 *)((int)a0 + 0x44) = (u64)(u32)fVar4;
            }
        }
    }
    if (cVar12 == '\0') {
        uVar6 = CONCAT44(fStack_1c, (u32)a0[1]);
    } else {
        in_xd0 = a0[1];
        uVar6 = CONCAT44(uStack_18, fStack_1c);
    }
    if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
        if (cVar12 == '\0') {
            uVar6 = (u64)(u32)a0[1];
        } else {
            in_xd0 = a0[1];
        }
        uVar7 = uVar6 & 0xffffffff;
        if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 1) = 0;
            } else {
                a0[1] = uVar6 & 0xffffffff;
            }
            if (cVar12 == '\0') {
                uVar7 = CONCAT44(0x40400000, (float)(int)(u32)a0[10]);
            } else {
                uVar7 = 0x3fe6666640400000;
            }
            if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
                if (cVar12 == '\0') {
                    dVar5 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x24));
                } else {
                    in_xd0 = *(u64 *)((int)a0 + 0x24);
                    dVar5 = 6.28640424168658e-312;
                }
                if (cVar11 == '\0') {
                    fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar5 / dVar5, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)((int)a0 + 0x24) = fVar4;
                    dVar5 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x1c));
                } else {
                    *(u64 *)((int)a0 + 0x24) = in_xd0;
                    in_xd0 = *(u64 *)((int)a0 + 0x1c);
                    dVar5 = 6.28640424168658e-312;
                }
                if (cVar11 == '\0') {
                    fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar5 * dVar5, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)((int)a0 + 0x1c) = fVar4;
                    dVar5 = (double)CONCAT44(0x3fe66666, (u32)a0[4]);
                } else {
                    *(u64 *)((int)a0 + 0x1c) = in_xd0;
                    in_xd0 = a0[4];
                    dVar5 = 6.28640424168658e-312;
                }
                if (cVar11 == '\0') {
                    fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar5 * dVar5, 0);
                }
                if (cVar12 == '\0') {
                    *(float *)(a0 + 4) = fVar4;
                } else {
                    a0[4] = in_xd0;
                }
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 6) = 0;
                } else {
                    a0[6] = (u64)(u32)fVar4;
                }
                *(u32 *)(a0 + 10) = (u32)a0[10] + 1;
                uVar7 = (u64)(u32)fVar4;
                if (cVar12 == '\0') {
                    *(u32 *)((int)a0 + 0x44) = 0;
                } else {
                    *(u64 *)((int)a0 + 0x44) = uVar7;
                }
            }
        }
    } else {
        if (cVar12 == '\0') {
            *(float *)(a0 + 1) = fStack_1c;
        } else {
            a0[1] = CONCAT44(uStack_18, fStack_1c);
        }
        if (cVar12 == '\0') {
            uVar7 = CONCAT44(0x40400000, (float)(int)(u32)a0[10]);
        } else {
            uVar7 = 0x3fe6666640400000;
        }
        if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
            if (cVar12 == '\0') {
                dVar5 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x24));
            } else {
                in_xd0 = *(u64 *)((int)a0 + 0x24);
                dVar5 = 4.41904794563714e-312;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 / dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)((int)a0 + 0x24) = fVar4;
                dVar5 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x1c));
            } else {
                *(u64 *)((int)a0 + 0x24) = in_xd0;
                in_xd0 = *(u64 *)((int)a0 + 0x1c);
                dVar5 = 4.41904794563714e-312;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)((int)a0 + 0x1c) = fVar4;
                dVar5 = (double)CONCAT44(0x3fe66666, (u32)a0[4]);
            } else {
                *(u64 *)((int)a0 + 0x1c) = in_xd0;
                in_xd0 = a0[4];
                dVar5 = 4.41904794563714e-312;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 4) = fVar4;
            } else {
                a0[4] = in_xd0;
            }
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 6) = 0;
            } else {
                a0[6] = (u64)(u32)fVar4;
            }
            *(u32 *)(a0 + 10) = (u32)a0[10] + 1;
            uVar7 = (u64)(u32)fVar4;
            if (cVar12 == '\0') {
                *(u32 *)((int)a0 + 0x44) = 0;
            } else {
                *(u64 *)((int)a0 + 0x44) = uVar7;
            }
        }
    }
    (**(code **)(*a1 + 0x128))(a1, a0, a6, a7);
    if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), (int)(uVar7 >> 0x20));
        uVar7 = in_xd14;
        fVar4 = *(float *)((int)a0 + 4);
        fVar9 = fStack_20;
    } else {
        in_xd0 = *(u64 *)((int)a0 + 4);
        fVar4 = fStack_20;
        fVar9 = fStack_1c;
    }
    if (cVar11 == '\0' && fVar4 < fVar9) {
        if (cVar12 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)((int)a0 + 4), fVar4);
        } else {
            dVar5 = *(double *)((int)a0 + 4);
        }
        if (cVar11 == '\0') {
            bVar10 = SUB84(dVar8, 0) < (float)((u64)dVar5 >> 0x20);
        } else {
            bVar10 = dVar8 < dVar5;
        }
        if (!bVar10) {
            if (cVar12 == '\0') {
                *(float *)((int)a0 + 4) = SUB84(dVar8, 0);
            } else {
                *(u64 *)((int)a0 + 4) = uVar7;
            }
            *(u32 *)((int)a0 + 0x2c) = *(u32 *)((int)a0 + 0x2c) + 1;
            if (((u32)a0[9] == 0) && ((u32)a0[10] == 0)) {
                fVar4 = (float)(int)*(u32 *)((int)a0 + 0x4c);
                if (cVar12 == '\0') {
                    fVar9 = 3.0;
                } else {
                    fVar4 = 3.0;
                    fVar9 = 1.8;
                }
                if (cVar11 == '\0' && fVar4 < fVar9) {
                    if (cVar12 == '\0') {
                        dVar8 = (double)CONCAT44(0x3fe66666, (u32)a0[4]);
                    } else {
                        in_xd0 = a0[4];
                        dVar8 = 2.80633114450354e-312;
                    }
                    if (cVar11 == '\0') {
                        fVar4 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
                    } else {
                        fVar4 = SUB84(dVar8 / dVar8, 0);
                    }
                    if (cVar12 == '\0') {
                        *(float *)(a0 + 4) = fVar4;
                        dVar8 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x1c));
                    } else {
                        a0[4] = in_xd0;
                        in_xd0 = *(u64 *)((int)a0 + 0x1c);
                        dVar8 = 2.80633114450354e-312;
                    }
                    if (cVar11 == '\0') {
                        fVar4 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
                    } else {
                        fVar4 = SUB84(dVar8 * dVar8, 0);
                    }
                    if (cVar12 == '\0') {
                        *(float *)((int)a0 + 0x1c) = fVar4;
                        dVar8 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x24));
                    } else {
                        *(u64 *)((int)a0 + 0x1c) = in_xd0;
                        in_xd0 = *(u64 *)((int)a0 + 0x24);
                        dVar8 = 2.80633114450354e-312;
                    }
                    if (cVar11 == '\0') {
                        fVar4 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
                    } else {
                        fVar4 = SUB84(dVar8 * dVar8, 0);
                    }
                    if (cVar12 == '\0') {
                        *(float *)((int)a0 + 0x24) = fVar4;
                    } else {
                        *(u64 *)((int)a0 + 0x24) = in_xd0;
                    }
                    if (cVar12 == '\0') {
                        *(u32 *)(a0 + 6) = 0;
                    } else {
                        a0[6] = (u64)(u32)fVar4;
                    }
                    *(u32 *)((int)a0 + 0x4c) = *(u32 *)((int)a0 + 0x4c) + 1;
                    if (cVar12 == '\0') {
                        *(u32 *)((int)a0 + 0x44) = 0;
                    } else {
                        *(u64 *)((int)a0 + 0x44) = (u64)(u32)fVar4;
                    }
                }
            }
        }
    } else {
        if (cVar12 == '\0') {
            *(float *)((int)a0 + 4) = fStack_20;
        } else {
            *(u64 *)((int)a0 + 4) = CONCAT44(fStack_1c, fStack_20);
        }
        fVar4 = (float)(int)*(u32 *)((int)a0 + 0x4c);
        if (cVar12 == '\0') {
            fVar9 = 3.0;
        } else {
            fVar4 = 3.0;
            fVar9 = 1.8;
        }
        if (cVar11 == '\0' && fVar4 < fVar9) {
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(0x3fe66666, (u32)a0[4]);
            } else {
                in_xd0 = a0[4];
                dVar8 = 6.28640424168658e-312;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
            } else {
                fVar4 = SUB84(dVar8 / dVar8, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 4) = fVar4;
                dVar8 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x1c));
            } else {
                a0[4] = in_xd0;
                in_xd0 = *(u64 *)((int)a0 + 0x1c);
                dVar8 = 6.28640424168658e-312;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
            } else {
                fVar4 = SUB84(dVar8 * dVar8, 0);
            }
            if (cVar12 == '\0') {
                *(float *)((int)a0 + 0x1c) = fVar4;
                dVar8 = (double)CONCAT44(0x3fe66666, *(u32 *)((int)a0 + 0x24));
            } else {
                *(u64 *)((int)a0 + 0x1c) = in_xd0;
                in_xd0 = *(u64 *)((int)a0 + 0x24);
                dVar8 = 6.28640424168658e-312;
            }
            if (cVar11 == '\0') {
                fVar4 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);
            } else {
                fVar4 = SUB84(dVar8 * dVar8, 0);
            }
            if (cVar12 == '\0') {
                *(float *)((int)a0 + 0x24) = fVar4;
            } else {
                *(u64 *)((int)a0 + 0x24) = in_xd0;
            }
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 6) = 0;
            } else {
                a0[6] = (u64)(u32)fVar4;
            }
            *(u32 *)((int)a0 + 0x4c) = *(u32 *)((int)a0 + 0x4c) + 1;
            if (cVar12 == '\0') {
                *(u32 *)((int)a0 + 0x44) = 0;
            } else {
                *(u64 *)((int)a0 + 0x44) = (u64)(u32)fVar4;
            }
        }
    }
    Vec3_dtor(auStack_44, 0xffffffff, a6, a7);
    Vec3_dtor(auStack_34, 0xffffffff, a6, a7);
    free_if_nonnull_wrap_102790(&uStack_24, 0xffffffff, a6, a7);
    return 0;
}

/*
 * Class_12b580_draw_0f7118  0x8c0f7118
 * area name: only called from Class_12b580 methods; behaviour name: mostly calls draw functions
 * called by: Class_12b580_draw_with_children, game_draw_0df668, game_uses_matrix_apply_point_w1_wrap_0df250,
 * game_uses_noop_0de6d0, game_uses_noop_0deb60, game_uses_noop_0def78
 */
u32 Class_12b580_draw_0f7118(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    float fVar2;
    double dVar3;
    int ar7_00;
    int ar6_00;
    int ar5_00;
    char cVar4;
    char cVar5;
    u32 ain0;

    cVar5 = '\0';
    cVar4 = '\0';
    uVar1 = a2;
    ain0 = a1;
    gfx_set_color4_4aa52c(a0 + 0x54);
    matrix_push(0, a1, uVar1, r7, ain0);
    touch_fields_30_3c(0, a1, uVar1, r7, ain0);
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x18));
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
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x14));
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
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x10));
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
    njRotateXYZ(0, ar5_00, ar6_00, ar7_00, ain0);
    matrix_scale(0, ar5_00, ar6_00, ar7_00, ain0);
    obj_set_texlist(a2, ar5_00, ar6_00);
    game_draw_015adc(ain0, ar5_00, ar6_00, ar7_00);
    matrix_pop_n(1);
    uVar1 = gfx_set_color4_4aa52c(&g_8c140174);
    return uVar1;
}

/*
 * Class_12b580_vec_0f7204  0x8c0f7204
 * area name: most of its named callers are Class_12b580; behaviour name: mostly calls vec functions
 * called by: Class_12b580_m1_0e634c, Class_12b580_m2_0e6548, Class_12bb08_m2_0da5a8, Class_12bb08_vec_0f7258
 */
int Class_12b580_vec_0f7204(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0x2c);
    if (iVar1 == 2) {
        iVar1 = game_vec_0f6ac4(a0, a1, a2);
    } else if (iVar1 == 3) {
        iVar1 = fade_out_90s_step(a0);
    } else if (iVar1 == 4) {
        iVar1 = game_vec_0f692c(a0, a1, a2, a3);
    }
    return iVar1;
}

/*
 * Class_12bb08_vec_0f7258  0x8c0f7258
 * area name: only called from Class_12bb08 methods; behaviour name: mostly calls vec functions
 * called by: Class_12bb08_m1_0da338
 */
u32 Class_12bb08_vec_0f7258(u32 a0, u32 a1, u32 a2, u32 a3) {
    Class_12b580_vec_0f7204(a0, a1, a2, a3);
    return 1;
}

/*
 * fade_out_90s_step  0x8c0f7278
 * lowers the float at +0x60 by 1/5400 (90 seconds at 60 fps) and copies it to +0x54..+0x5c; bumps the step +0x2c once
 * it reaches 0 called by: Class_12b580_vec_0f7204
 */
float *fade_out_90s_step(int a0) {
    float *pfVar1;
    float fVar2;

    fVar2 = *(float *)(a0 + 0x60) - 0.00018518518;
    *(float *)(a0 + 0x60) = fVar2;
    *(float *)(a0 + 0x5c) = fVar2;
    *(float *)(a0 + 0x58) = fVar2;
    *(float *)(a0 + 0x54) = fVar2;
    pfVar1 = (float *)(a0 + 0x60);
    if (*pfVar1 <= 0.0) {
        pfVar1 = (float *)(*(int *)(a0 + 0x2c) + 1);
        *(float **)(a0 + 0x2c) = pfVar1;
    }
    return pfVar1;
}

/*
 * game_any_neighbor_within_range  0x8c0f72ec
 * returns 1 when another of the eight 0x68-byte objects is within 1.5 times its radius of a0
 * called by: game_vec_0f6ac4
 */
u32 game_any_neighbor_within_range(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    double in_dr0;
    double in_dr14;
    bool bVar4;
    char cVar5;
    char cVar6;
    u8 auStack_2c[20];

    cVar6 = '\0';
    cVar5 = '\0';
    iVar1 = (**(code **)(*a1 + 0x1a0))(a1, a1, a2, a3);
    iVar3 = 0;
    do {
        if (7 < iVar3) {
            return 0;
        }
        iVar2 = has_field_2c(iVar1 + iVar3 * 0x68);
        if ((iVar2 == 1) && (iVar1 + iVar3 * 0x68 != a0)) {
            if (cVar6 == '\0') {
                in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(iVar1 + iVar3 * 0x68 + 0x1c));
                in_dr0 = (double)CONCAT44(0x3fc00000, SUB84(in_dr0, 0));
            } else {
                in_dr0 = -7.956826979325289e-251;
            }
            if (cVar5 == '\0') {
                in_dr14 =
                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) * (float)((u64)in_dr0 >> 0x20));
            } else {
                in_dr14 = in_dr14 * in_dr0;
            }
            iVar2 = iVar1 + iVar3 * 0x68;
            Vec3_sub(a0, iVar2, a2, a3, auStack_2c);
            Vec3_length_sq(auStack_2c, iVar2, a2, a3);
            if (cVar5 == '\0') {
                bVar4 = SUB84(in_dr14, 0) < (float)((u64)in_dr0 >> 0x20);
            } else {
                bVar4 = in_dr14 < in_dr0;
            }
            a1 = (int *)0xffffffff;
            Vec3_dtor(auStack_2c, 0xffffffff, a2, a3);
            if (!bVar4) {
                if (cVar6 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)(a0 + 4), *(u32 *)(iVar1 + iVar3 * 0x68 + 4));
                } else {
                    in_dr0 = *(double *)(a0 + 4);
                }
                if (cVar5 != '\0' || SUB84(in_dr0, 0) <= (float)((u64)in_dr0 >> 0x20)) {
                    return 1;
                }
            }
        }
        iVar3 = iVar3 + 1;
    } while (true);
}

/*
 * Vec3_ctor_copy_wrap_0f7408  0x8c0f7408
 * only calls Vec3_ctor_copy
 */
u32 Vec3_ctor_copy_wrap_0f7408(int a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_copy(s0, a0 + 0x1bc, a2, a3);
    return uVar1;
}

/*
 * noop_0f7430  0x8c0f7430
 */
u32 noop_0f7430(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0f7434  0x8c0f7434
 */
u32 noop_0f7434(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0f7438  0x8c0f7438
 */
u32 noop_0f7438(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * Vec3_uses_get_field_4_0f743c  0x8c0f743c
 * area name: sits between Vec3 functions (same compilation unit); behaviour name: its main named callee is
 * get_field_4_0253e4
 */
u32 Vec3_uses_get_field_4_0f743c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = get_field_4_0253e4(a0 + 0x170, a1, a2, a3);
    return (u32)(iVar1 != 0);
}

/*
 * Vec3_uses_get_field_0_0f7470  0x8c0f7470
 * area name: sits between Vec3 functions (same compilation unit); behaviour name: its main named callee is
 * get_field_0_015bb8
 */
u32 Vec3_uses_get_field_0_0f7470(int a0) {
    int iVar1;

    iVar1 = get_field_0_015bb8(a0 + 0x178);
    return (u32)(iVar1 != 0);
}

/*
 * static_init_vec3s_43b188  0x8c0f74a4
 * static initialiser: builds 20 global Vec3 constants (8c43b188..8c43b454) and registers their destructors
 */
u32 static_init_vec3s_43b188(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *puVar4;

    uVar1 = Vec3_ctor_xyz((&DATA_8c126548), a1, a2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b188;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b188, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126558), puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b194;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b194, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126568), puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b1a0;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b1a0, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126578), puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b1ac;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b1ac, a3);
    uVar1 = Vec3_ctor_xyz(0x8c43b1c4, puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b1b8;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b1b8, a3);
    uVar1 = Vec3_ctor_xyz(0x8c43b1e0, puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b1d4;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b1d4, a3);
    uVar1 = Vec3_ctor_xyz(0x8c43b1fc, puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b1f0;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b1f0, a3);
    uVar1 = Vec3_ctor_xyz(0x8c43b218, puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b20c;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b20c, a3);
    uVar1 = Vec3_ctor_xyz(0x8c43b234, puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b228;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b228, a3);
    uVar1 = Vec3_ctor_xyz(0x8c43b250, puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b244;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b244, a3);
    uVar1 = Vec3_ctor_xyz(0x8c43b26c, puVar4, uVar2, a3);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b260;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b260, a3);
    uVar2 = Vec3_ctor_xyz(0x8c43b288, puVar4, uVar2, a3);
    global_list_push(uVar2, (&Vec3_dtor), 0x8c43b27c, a3);
    uVar1 = 0x8c43b1fc;
    uVar3 = (*(code *)(&Class_129938_ctor_init))(0x8c43b2a4, 0x8c43b1c4, 0x8c43b1e0, 0x8c43b1fc, 0x8c43b218, 0x8c43b234,
                                                 0x8c43b250, 0x8c43b26c, 0x8c43b288);
    puVar4 = (&Class_129938_dtor);
    uVar2 = 0x8c43b298;
    (*(code *)(&global_list_push))(uVar3, (&Class_129938_dtor), 0x8c43b298, uVar1);
    uVar3 = Vec3_ctor_xyz(0x8c43b39c, puVar4, uVar2, uVar1);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b390;
    global_list_push(uVar3, (&Vec3_dtor), 0x8c43b390, uVar1);
    uVar3 = Vec3_ctor_xyz(0x8c43b3b8, puVar4, uVar2, uVar1);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b3ac;
    global_list_push(uVar3, (&Vec3_dtor), 0x8c43b3ac, uVar1);
    uVar3 = Vec3_ctor_xyz(0x8c43b3d4, puVar4, uVar2, uVar1);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b3c8;
    global_list_push(uVar3, (&Vec3_dtor), 0x8c43b3c8, uVar1);
    uVar3 = Vec3_ctor_xyz(0x8c43b3f0, puVar4, uVar2, uVar1);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b3e4;
    global_list_push(uVar3, (&Vec3_dtor), 0x8c43b3e4, uVar1);
    uVar3 = Vec3_ctor_xyz(0x8c43b40c, puVar4, uVar2, uVar1);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b400;
    global_list_push(uVar3, (&Vec3_dtor), 0x8c43b400, uVar1);
    uVar3 = Vec3_ctor_xyz(0x8c43b428, puVar4, uVar2, uVar1);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b41c;
    global_list_push(uVar3, (&Vec3_dtor), 0x8c43b41c, uVar1);
    uVar3 = Vec3_ctor_xyz(0x8c43b444, puVar4, uVar2, uVar1);
    puVar4 = (&Vec3_dtor);
    uVar2 = 0x8c43b438;
    global_list_push(uVar3, (&Vec3_dtor), 0x8c43b438, uVar1);
    uVar2 = Vec3_ctor_xyz(0x8c43b460, puVar4, uVar2, uVar1);
    global_list_push(uVar2, (&Vec3_dtor), 0x8c43b454, uVar1);
    uVar2 = 0x8c43b3d4;
    uVar1 = (*(code *)(&Class_129938_ctor_init))(0x8c43b47c, 0x8c43b39c, 0x8c43b3b8, 0x8c43b3d4, 0x8c43b3f0, 0x8c43b40c,
                                                 0x8c43b428, 0x8c43b444, 0x8c43b460);
    uVar2 = (*(code *)(&global_list_push))(uVar1, (&Class_129938_dtor), 0x8c43b470, uVar2);
    return uVar2;
}

/*
 * set_fields_0_4_wrap  0x8c0f78b0
 * only calls set_fields_0_4_0f78cc
 */
u32 set_fields_0_4_wrap(u32 a0) {
    set_fields_0_4_0f78cc(a0);
    return a0;
}

/*
 * set_fields_0_4_0f78cc  0x8c0f78cc
 * stores +0x0, +0x4
 * called by: game_vec_0f79b8, set_fields_0_4_wrap
 */
u32 set_fields_0_4_0f78cc(u32 *a0) {
    *a0 = 0;
    a0[1] = 0;
    return 0;
}

/*
 * Class_12c1f0_ctor_like  0x8c0f78d8
 * builds the base (+8), the two three-entry arrays (+0x4c, +0x6c) and the three vectors (+0x8c, +0xa0, +0xb0) and
 * clears the state called by: Class_12c1f0_ctor, Class_12c1f0_ctor_kind
 */
u32 *Class_12c1f0_ctor_like(u32 *a0, u32 a1, u32 a2) {
    u8 *ar5_00;
    u8 *ar6_00;
    u32 ar7_00;

    Class_129974_ctor_wrap(a0 + 2, a1, a2);
    (*(code *)(&vec_new_array))(a0 + 0x13, (&set_fields_0_4_wrap), (&free_if_nonnull_wrap_0f3ffc), 8, 3);
    ar7_00 = 8;
    ar5_00 = (&set_fields_0_4_wrap);
    ar6_00 = (&free_if_nonnull_wrap_0f3ffc);
    (*(code *)(&vec_new_array))(a0 + 0x1b, (&set_fields_0_4_wrap), (&free_if_nonnull_wrap_0f3ffc), 8, 3);
    Vec3_ctor_zero((int)a0 + 0x8c, ar5_00, ar6_00);
    Vec3_ctor_zero((int)a0 + 0xa0, ar5_00, ar6_00);
    Vec3_ctor_zero((int)a0 + 0xb0, ar5_00, ar6_00);
    a0[1] = 0;
    *a0 = 0;
    a0[0x19] = 0;
    a0[0x1a] = 0;
    vec3_clear((int)a0 + 0x8c, ar5_00, ar6_00, ar7_00);
    *(u32 *)(0x9c + (int)a0) = 0xffffffff;
    vec3_clear((int)a0 + 0xa0, ar5_00, ar6_00, ar7_00);
    *(u32 *)(0x84 + (int)a0) = 0;
    *(u32 *)(0x88 + (int)a0) = 0;
    return a0;
}

/*
 * game_vec_0f79b8  0x8c0f79b8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: CAnimal_m2_02573c, CAnimal_m2_0386d0, CAnimal_m2_088094, CAnimal_m3_026078, CAnimal_vec_0f4974,
 * Class_12a7f4_m2_09a060, Class_12a7f4_m3_09a558, Class_12a990_m2_09bc2c (+1 more)
 */
int game_vec_0f79b8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar1 = *(int *)(a0 + 100);
    for (iVar2 = a0 + 0x4c; iVar2 != a0 + iVar1 * 8 + 0x4c; iVar2 = iVar2 + 8) {
        set_fields_0_4_0f78cc(iVar2);
    }
    *(u32 *)(a0 + 100) = 0;
    *(u32 *)(a0 + 0x68) = 0;
    vec3_clear(a0 + 0x8c, a1, a2, a3);
    *(u32 *)(0x9c + a0) = 0xffffffff;
    vec3_clear(a0 + 0xa0, a1, a2, a3);
    iVar1 = *(int *)(0x84 + a0);
    for (iVar2 = a0 + 0x6c; iVar2 != a0 + iVar1 * 8 + 0x6c; iVar2 = iVar2 + 8) {
        set_fields_0_4_0f78cc(iVar2);
    }
    *(u32 *)(0x84 + a0) = 0;
    iVar1 = 0x88;
    *(u32 *)(0x88 + a0) = 0;
    return iVar1;
}

/*
 * static_init_vec3s_43b510  0x8c0f7a78
 * static initialiser: builds 4 global Vec3 constants (8c43b510..8c43b534) and registers their destructors
 */
u32 static_init_vec3s_43b510(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;

    uVar1 = Vec3_ctor_xyz((&DATA_8c126588), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c43b510;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b510, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126598), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c43b51c;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b51c, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c1265a8), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c43b528;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c43b528, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c1265b8), puVar3, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c43b534, a3);
    return uVar2;
}

/*
 * main  0x8c0f7b20
 * called by: crt0_start
 */
u32 main(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    game_init(unused_a0, a1, a2, a3);
    while (true) {
        uVar2 = 0x8c286ebc;
        iVar1 = game_poll_exit(0x8c286ebc, a1, a2, a3);
        if (iVar1 < 0)
            break;
        game_frame(uVar2, a1, a2, a3);
    }
    game_shutdown_a(uVar2, a1, a2, a3);
    uVar2 = game_shutdown_b();
    return uVar2;
}

/*
 * game_init  0x8c0f7b70
 * called by: main
 */
u32 game_init(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 ar7_00;
    u32 in_stack_ffffffc0;
    u32 uStack_28;
    uStack_28 = g_8c1402ac;
    (&DATA_8c1f5a2c) = (u8 *)((u32)(&DATA_8c1f5a2c) | 0xa0000000);
    iVar1 = shinobi_calls_calc_1f7ea8(&uStack_28);
    if (iVar1 == 0) {
        uVar3 = 2;
        uVar2 = 0;
        startup_init_hardware(0x31, 0, 2, a3);
    } else {
        uVar3 = 1;
        uVar2 = 0;
        startup_init_hardware(0x34, 0, 1, a3);
    }
    draw_draw_helper_259a1c(0);
    g_8c43b578 = malloc_thunk(0x2b000, uVar2, uVar3, a3);
    uVar2 = 0x2b000;
    ninja_calc_25b334(g_8c43b578, 0x2b000);
    g_8c43b57c = malloc_thunk(0x1db000, uVar2, uVar3, a3);
    gfx_heap_init(g_8c43b57c, 0x1db000);
    ar7_00 = 0;
    njInitVertexBuffer_like(0xfffaf6f0, 0, 0x4b320, 0);
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    gfxlib_uses_ta_fifo_233f98(0, 0, 0);
    ninja_float_calc_2570ec(uVar2, uVar3, uVar4, ar7_00, in_stack_ffffffc0);
    g_8c43b570 = malloc_thunk(0x1000, uVar3, uVar4, ar7_00);
    uVar4 = 0;
    uVar2 = 0x40;
    gfxlib_float_calc_23633c(g_8c43b570, 0x40, 0);
    ninja_calc_255bea(0x8c42d408);
    g_8c43b574 = malloc_thunk(0xabe00, uVar2, uVar4, ar7_00);
    gfxlib_calc_233d6c(g_8c43b574, 11000);
    uVar3 = 0x15e;
    uVar2 = 0x8c43b584;
    ninja_uses_tex_table_init_25b34a(0x8c43b584, 0x15e);
    ta_float_calc_213ee4();
    uVar4 = 0xff000000;
    uVar2 = 0xff000000;
    ninja_calls_calc_259046(0xff000000, 0xff000000, 0xff000000);
    gfxlib_calc_233d9c(0x820);
    uVar3 = 0x800;
    gfxlib_calc_233da2(0xffffffff, 0x800);
    gfx_set_color4_4aa52c(&uStack_28);
    ta_draw_259358(3);
    uVar2 = 1;
    ta_draw_2593ac(1);
    thunk_FUN_8c20a13a();
    ta_draw_259556(2);
    ta_fifo_259274(1);
    libc_update_fields_014370(5);
    g_8c43b580 = malloc_thunk(0x4000, uVar3, uVar4, ar7_00);
    shinobi_test_1f7ecc(g_8c43b580);
    uVar2 = game_init_sound_and_messages(0x8c286ebc, uVar3, uVar4, ar7_00);
    return uVar2;
}

/*
 * game_shutdown_a  0x8c0f7df8
 * called by: main, report_error_message
 */
u32 game_shutdown_a(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar4_00;

    ar4_00 = 0x8c286ebc;
    memcard_flush_and_close_8c3dd7dc(0x8c286ebc, a1, a2, a3);
    ninja_load_25b37c(ar4_00, a1, a2);
    gfxlib_calc_23403e();
    if (g_8c43b570 != 0) {
        ar4_00 = g_8c43b570;
        free_sys(ar4_00, a1, a2, a3);
    }
    if (g_8c43b574 != 0) {
        ar4_00 = g_8c43b574;
        free_sys(ar4_00, a1, a2, a3);
    }
    if (g_8c43b578 != 0) {
        ar4_00 = g_8c43b578;
        free_sys(ar4_00, a1, a2, a3);
    }
    if (g_8c43b57c != 0) {
        ar4_00 = g_8c43b57c;
        free_sys(ar4_00, a1, a2, a3);
    }
    if (g_8c43b580 != 0) {
        ar4_00 = g_8c43b580;
        free_sys(ar4_00, a1, a2, a3);
    }
    uVar1 = system_init_libs(ar4_00, a1, a2, a3);
    return uVar1;
}

/*
 * tex_list_build_control_words_wrap  0x8c0f7ea0
 * only calls tex_list_build_control_words
 * called by: Class_12b388_uses_Class_129808_draw_0c5cb4, game_draw_0d1c84
 */
u32 tex_list_build_control_words_wrap(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = tex_list_build_control_words(0x8c43b584, 0x15e, a2, a3);
    return uVar1;
}

/*
 * static_init_vec3s_43b540  0x8c0f7ec0
 * static initialiser: builds 4 global Vec3 constants (8c43b540..8c43b564) and registers their destructors
 */
u32 static_init_vec3s_43b540(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c1265c8, a1, a2, a3);
    uVar3 = 0x8c43b540;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c43b540, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1265d8, pcVar2, uVar3, a3);
    uVar3 = 0x8c43b54c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c43b54c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1265e8, pcVar2, uVar3, a3);
    uVar3 = 0x8c43b558;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c43b558, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1265f8, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c43b564, a3);
    if (cVar4 == '\0') {
        g_8c126608 = CONCAT44(_UNK_8c12660c, 0x800000);
        /* WARNING: Read-only address (ram,0x8c12660c) is written */
    } else {
        g_8c126608 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * tex_copy_0f7f78  0x8c0f7f78
 * area name: sits between tex functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: static_init_vec3s_286e20
 */
int tex_copy_0f7f78(int a0, u32 unused_a1, u32 a2, u32 a3) {
    game_copy_0fdc20(a0, unused_a1, a2, a3);
    identity_0fa804(a0 + 0x1054);
    return a0;
}

/*
 * tex_release_0f7fa8  0x8c0f7fa8
 * area name: sits between tex functions (same compilation unit); behaviour name: mostly calls release functions
 */
int tex_release_0f7fa8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_0fa80c(a0 + 0x1054, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * tex_uses_rtc_get_date_0f7ff0  0x8c0f7ff0
 * area name: sits between tex functions (same compilation unit); behaviour name: its callees mostly do:
 * uses_rtc_get_date called by: game_init_sound_and_messages
 */
u32 tex_uses_rtc_get_date_0f7ff0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(0x89134 + a0) = 0;
    *(u32 *)(0x8913c + a0) = 0;
    *(u32 *)(0x89140 + a0) = 0;
    *(u32 *)(0x1034 + a0) = 0;
    uVar1 = speech_uses_rtc_get_date_0fa83c(a0 + 0x1054, a1, a2, a3);
    return uVar1;
}

/*
 * game_uses_CProlog_classify_day_period_0f803c  0x8c0f803c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is
 * CProlog_classify_day_period called by: game_select_intro_or_ending
 */
u32 game_uses_CProlog_classify_day_period_0f803c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;

    *(u32 *)(0x89140 + a0) = a1;
    ar5_00 = 0;
    uVar1 = CProlog_classify_day_period(*(u32 *)(0x89140 + a0), 0, a2, a3);
    *(u32 *)(0x1028 + a0) = uVar1;
    uVar1 = (*(code *)(&get_field_c8_0bced0))(*(u32 *)(0x89140 + a0), ar5_00, a2, a3);
    *(u32 *)(0x1030 + a0) = uVar1;
    uVar1 = (*(code *)(&get_field_c4_0f8128))(*(u32 *)(0x89140 + a0), ar5_00, a2, a3);
    *(u32 *)(0x1038 + a0) = uVar1;
    if (*(int *)(0x1038 + a0) < 0xb2) {
        *(int *)(0x1038 + a0) = *(int *)(0x1038 + a0) + 1;
    } else {
        *(u32 *)(0x1038 + a0) = 0;
    }
    uVar1 = game_uses_flashrom_game_block_date_byt_0b951c(*(u32 *)(0x89140 + a0), ar5_00, a2, a3);
    *(u32 *)(0x103c + a0) = uVar1;
    *(u32 *)(0x1040 + a0) = 0;
    if (*(char *)(*(int *)(0x89140 + a0) + 0x2c) == '\x01') {
        *(u32 *)(0x1040 + a0) = 1;
    }
    uVar1 = (*(code *)(&game_init_fields_0bb158))(*(u32 *)(0x89140 + a0), a0 + 0x101c, a2, a3);
    return uVar1;
}

/*
 * get_field_c4_0f8128  0x8c0f8128
 */
u32 get_field_c4_0f8128(int a0) {
    return *(u32 *)(0xc4 + a0);
}

/*
 * game_release_0f8134  0x8c0f8134
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 * called by: Class_12b388_uses_Class_129808_draw_0c5cb4
 */
int game_release_0f8134(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    speech_uses_identity_0fa688(a0, a1, a2, a3);
    speech_release_0fa910(a0 + 0x1054, a1, a2, a3);
    iVar1 = 0x1014;
    *(u32 *)(0x1014 + a0) = 0;
    return iVar1;
}

/*
 * game_talk_0f816c  0x8c0f816c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls talk functions
 * called by: game_poll_exit
 */
int game_talk_0f816c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;

    speech_update(a0 + 0x1054, a1, a2, a3);
    iVar4 = 0;
    if (*(int *)(0x89134 + a0) != 0) {
        uVar2 = talk_pick_request_keyword(a0, a1, a2, a3);
        *(u32 *)(0x89134 + a0) = uVar2;
        iVar4 = 0;
        if (*(int *)(0x89140 + a0) != 0) {
            uVar3 = get_field_a2_s16(*(u32 *)(0x89140 + a0), a1);
            *(u32 *)(0x102c + a0) = uVar3 & 0xffff;
            *(u32 *)(0x1034 + a0) = 0;
            uVar2 = (*(code *)(&get_field_18e_div30))(*(u32 *)(0x7cc + *(int *)(0x89140 + a0)), a1, a2, a3);
            iVar1 = 0x1034;
            iVar4 = 0x3c;
            if ((u16)uVar2 < 0x3d) {
                *(u32 *)(0x1034 + a0) = 1;
                iVar4 = iVar1;
            }
        }
    }
    return iVar4;
}

/*
 * speech_stop  0x8c0f8214
 * stops the current speech and clears its active flag (+0x89134)
 * called by: Class_12a078_m2_05eee0, Class_12a078_m5_0671f4, Class_12c3c4_m2_104264, Class_12c3c4_m5_10a0dc,
 * FrogMan_update_sleep_light, Higyo_update_sleep_light, game_uses_get_field_d0_0c6e74, game_uses_get_word_8_0bf22c (+4
 * more)
 */
int speech_stop(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    speech_release_0fa9fc(a0 + 0x1054, a1, a2, a3);
    speech_calls_test_0fa70c(a0, a1, a2, a3);
    iVar1 = 0x89134;
    *(u32 *)(0x89134 + a0) = 0;
    return iVar1;
}

/*
 * speech_update_fields_0f824c  0x8c0f824c
 * area name: sits between speech functions (same compilation unit); behaviour name: conditionally writes members
 * called by: speech_start, talk_pick_request_keyword
 */
u32 speech_update_fields_0f824c(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = (*(code *)(&speech_copy_0fa944))(a0 + 0x1054, a0 + 0x1010, *(u32 *)(0x89138 + a0), a3);
    if (iVar1 == 0) {
        *(u32 *)(0x89138 + a0) = 0;
        *(u32 *)(0x89134 + a0) = 0;
    }
    return (u32)(iVar1 != 0);
}

/*
 * speech_restart  0x8c0f82a4
 * stops the current speech if one is running, then speech_start
 * called by: talk_start_line
 */
u32 speech_restart(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar6_00;

    if (*(int *)(0x1014 + a0) != 0) {
        if (*(int *)(0x1014 + a0) != 1) {
            return 0;
        }
        uVar1 = a1;
        ar6_00 = a2;
        speech_stop(a0, a1, a2, a3);
        if (*(int *)(0x8913c + a0) == 1) {
            speech_uses_identity_0fa6c8(a0, uVar1, ar6_00, a3);
        }
    }
    *(u32 *)(0x89138 + a0) = 2;
    uVar1 = speech_start(a0, a1, a2, a3);
    return uVar1;
}

/*
 * speech_request  0x8c0f8320
 * speech_start when the player is idle (+0x1014 == 0); 0 otherwise
 * called by: FrogMan_gratification_events, FrogMan_jump_events, FrogMan_react_tap, FrogMan_react_touch,
 * FrogMan_update_sleep_light, Higyo_attention_events, Higyo_update_sleep_light, game_uses_speech_is_playing_0bad68 (+6
 * more)
 */
u32 speech_request(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (*(int *)(0x1014 + a0) == 0) {
        *(u32 *)(0x89138 + a0) = 1;
        uVar1 = speech_start(a0, a1, a2, a3);
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * speech_start  0x8c0f8368
 * starts speech mode a1 on the speech player (0x8c35468c); for mode 1, a2 names the line ("HIGYOLINE0", "FROGMANLINE0",
 * ...) called by: speech_request, speech_restart strings: "HIGYOLINE0"; "HIGYOLINE1"; "HIGYOLINE2"; "HIGYOLINE3" ...
 */
u32 speech_start(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    char *pcVar3;
    u8 *ar5_00;
    int ar6_00;
    u8 auStack_74[32];
    u8 auStack_54[32];
    u8 auStack_34[36];

    ar6_00 = a2;
    memset_on_field_d0(a0 + 0x1054, 0x1054, a2, a3);
    *(int *)(a0 + 0x89130) = a1;
    *(int *)(a0 + 0x104c) = a0;
    *(int *)(a0 + 0x1050) = a2;
    *(u32 *)(a0 + 0x89134) = 1;
    strcpy(auStack_34, &g_8c1408e4);
    strcpy(auStack_54, &g_8c1408e9);
    strcpy(auStack_74, &g_8c1408e9);
    if (a1 == 1) {
        iVar1 = strcmp(a2, "HIGYOLINE0");
        if (iVar1 == 0) {
            *(u32 *)(a0 + 0x1044) = 0;
        } else {
            iVar1 = strcmp(a2, "HIGYOLINE1");
            if (iVar1 == 0) {
                *(u32 *)(a0 + 0x1044) = 1;
            } else {
                iVar1 = strcmp(a2, "HIGYOLINE2");
                if (iVar1 == 0) {
                    *(u32 *)(a0 + 0x1044) = 2;
                } else {
                    iVar1 = strcmp(a2, "HIGYOLINE3");
                    if ((((iVar1 == 0) || (iVar1 = strcmp(a2, "HIGYOLINE4"), iVar1 == 0)) ||
                         (iVar1 = strcmp(a2, "HIGYOLINE5"), iVar1 == 0)) ||
                        ((iVar1 = strcmp(a2, "HIGYOLINE6"),
                          iVar1 == 0 || (iVar1 = strcmp(a2, "HIGYOLINE7"), iVar1 == 0)))) {
                        *(u32 *)(a0 + 0x1044) = 3;
                    } else {
                        iVar1 = strcmp(a2, "FROGMANLINE0");
                        if (((iVar1 == 0) || (iVar1 = strcmp(a2, "FROGMANLINE1"), iVar1 == 0)) ||
                            (iVar1 = strcmp(a2, "FROGMANLINE2"), iVar1 == 0)) {
                            *(u32 *)(a0 + 0x1044) = 4;
                        } else {
                            iVar1 = strcmp(a2, "FROGMANLINE3");
                            if ((iVar1 == 0) || (iVar1 = strcmp(a2, "FROGMANLINE4"), iVar1 == 0)) {
                                *(u32 *)(a0 + 0x1044) = 5;
                            } else {
                                iVar1 = strcmp(a2, "JUNGLE");
                                if (iVar1 != 0) {
                                    return 0;
                                }
                                *(u32 *)(a0 + 0x1044) = 6;
                            }
                        }
                    }
                }
            }
        }
        iVar1 = strcmp(a2, "HIGYOLINE0");
        if (((iVar1 == 0) || (iVar1 = strcmp(a2, "HIGYOLINE1"), iVar1 == 0)) ||
            (iVar1 = strcmp(a2, "HIGYOLINE2"), iVar1 == 0)) {
            *(u32 *)(a0 + 0x1048) = 0;
        } else {
            iVar1 = strcmp(a2, "HIGYOLINE3");
            if (iVar1 == 0) {
                *(u32 *)(a0 + 0x1048) = 1;
            } else {
                iVar1 = strcmp(a2, "HIGYOLINE4");
                if (iVar1 == 0) {
                    *(u32 *)(a0 + 0x1048) = 2;
                } else {
                    iVar1 = strcmp(a2, "HIGYOLINE5");
                    if (iVar1 == 0) {
                        *(u32 *)(a0 + 0x1048) = 3;
                    } else {
                        iVar1 = strcmp(a2, "HIGYOLINE6");
                        if (iVar1 == 0) {
                            *(u32 *)(a0 + 0x1048) = 4;
                        } else {
                            iVar1 = strcmp(a2, "HIGYOLINE7");
                            if (iVar1 == 0) {
                                iVar1 = speech_get_index_plus1(a0, 0);
                                if (iVar1 == 5) {
                                    *(u32 *)(a0 + 0x1048) = 5;
                                    *(u32 *)(*(int *)(a0 + 0x104c) + 8) = *(u32 *)(a0 + 0x102c);
                                } else if ((iVar1 == 6) &&
                                           (*(u32 *)(a0 + 0x1048) = 5,
                                            *(int *)(*(int *)(a0 + 0x104c) + 8) < *(int *)(a0 + 0x102c))) {
                                    *(u32 *)(a0 + 0x1048) = 6;
                                }
                            } else {
                                iVar1 = strcmp(a2, "FROGMANLINE0");
                                if (iVar1 == 0) {
                                    *(u32 *)(a0 + 0x1048) = 7;
                                } else {
                                    iVar1 = strcmp(a2, "FROGMANLINE1");
                                    if (iVar1 == 0) {
                                        *(u32 *)(a0 + 0x1048) = 8;
                                    } else {
                                        iVar1 = strcmp(a2, "FROGMANLINE2");
                                        if (iVar1 == 0) {
                                            *(u32 *)(a0 + 0x1048) = 10;
                                        } else {
                                            iVar1 = strcmp(a2, "FROGMANLINE3");
                                            if (iVar1 == 0) {
                                                *(u32 *)(a0 + 0x1048) = 0xc;
                                            } else {
                                                pcVar3 = "FROGMANLINE4";
                                                iVar1 = strcmp(a2, "FROGMANLINE4");
                                                if (iVar1 == 0) {
                                                    iVar1 = speech_get_index_plus1(a0, pcVar3);
                                                    if ((iVar1 < 0x13) && (0xc < iVar1)) {
                                                        switch (iVar1) {
                                                        default:
                                                            *(u32 *)(a0 + 0x1048) = 0xe;
                                                            *(u32 *)(*(int *)(a0 + 0x104c) + 8) = *(u32 *)(a0 + 0x102c);
                                                            break;
                                                        case 0xf:
                                                        case 0x10:
                                                            *(u32 *)(a0 + 0x1048) = 0xe;
                                                            if (*(int *)(*(int *)(a0 + 0x104c) + 8) + 1 <
                                                                *(int *)(a0 + 0x102c)) {
                                                                *(u32 *)(a0 + 0x1048) = 0x10;
                                                            }
                                                            break;
                                                        case 0x11:
                                                            *(u32 *)(a0 + 0x1048) = 0x10;
                                                            if (*(int *)(*(int *)(a0 + 0x104c) + 8) + 2 <
                                                                *(int *)(a0 + 0x102c)) {
                                                                *(u32 *)(a0 + 0x1048) = 0x12;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    iVar1 = strcmp(a2, "JUNGLE");
                                                    if (iVar1 != 0) {
                                                        return 0;
                                                    }
                                                    *(u32 *)(a0 + 0x1048) = 0x12;
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
        }
        iVar1 = *(int *)(a0 + 0x1044);
        if ((iVar1 < 7) && (-1 < iVar1)) {
            switch (iVar1) {
            case 0:
                strcpy(auStack_34, "B_LEARNING0");
                strcpy(auStack_54, &g_8c1409fa);
                break;
            case 1:
                strcpy(auStack_34, "B_LEARNING1");
                strcpy(auStack_54, &g_8c140a0a);
                break;
            case 2:
                strcpy(auStack_34, "B_LEARNING2");
                strcpy(auStack_54, &g_8c140a1a);
                break;
            case 3:
                strcpy(auStack_34, "A_LEARNING0");
                strcpy(auStack_54, &g_8c140a2a);
                break;
            case 4:
                strcpy(auStack_34, "A_LEARNING1");
                strcpy(auStack_54, &g_8c140a3a);
                break;
            case 5:
                strcpy(auStack_34, "A_LEARNING2");
                strcpy(auStack_54, &g_8c140a4a);
                break;
            case 6:
                strcpy(auStack_34, "A_LEARNINGJ");
                strcpy(auStack_54, &g_8c140a5a);
            }
        }
        if (*(int *)(*(int *)(a0 + 0x1050) + 0x94) == 1) {
            strcat(auStack_54, &g_8c140a5e);
        } else if (*(int *)(*(int *)(a0 + 0x1050) + 0x68) < 2) {
            strcat(auStack_54, &g_8c140a63);
        } else {
            iVar1 = *(int *)(*(int *)(a0 + 0x1050) + 0x7c);
            if ((9 < iVar1) || (iVar1 < 0)) {
            switchD_8c0f933e_caseD_6:
                strcpy(auStack_54, &g_8c1408e9);
                return 0;
            }
            switch (iVar1) {
            case 0:
                if (*(int *)(*(int *)(a0 + 0x1050) + 0x60) < 1) {
                    strcat(auStack_54, "NORMAL");
                } else {
                    strcat(auStack_54, &g_8c140a68);
                }
                break;
            case 1:
                if (*(int *)(*(int *)(a0 + 0x1050) + 0x60) < 1) {
                    strcat(auStack_54, "NORMAL");
                } else {
                    strcat(auStack_54, &g_8c140a73);
                }
                break;
            case 2:
                if (*(int *)(*(int *)(a0 + 0x1050) + 0x60) < 1) {
                    strcat(auStack_54, "NORMAL");
                } else {
                    strcat(auStack_54, "OXYGEN");
                }
                break;
            case 3:
                if (*(int *)(*(int *)(a0 + 0x1050) + 0x60) < 1) {
                    strcat(auStack_54, "NORMAL");
                } else {
                    strcat(auStack_54, "HUMIDITY");
                }
                break;
            case 4:
                if (*(int *)(*(int *)(a0 + 0x1050) + 0x60) < 1) {
                    strcat(auStack_54, "NORMAL");
                } else {
                    strcat(auStack_54, "HUNGRY");
                }
                break;
            case 5:
                strcat(auStack_54, &g_8c140a5e);
                break;
            case 6:
                goto switchD_8c0f933e_caseD_6;
            case 7:
                pcVar3 = "NORMAL";
                strcat(auStack_54, "NORMAL");
                iVar1 = speech_get_index_plus1(a0, pcVar3);
                if ((1 < iVar1) && (*(u32 *)(a0 + 0x1040) = 0, *(int *)(a0 + 0xc) == 0)) {
                    strcpy(auStack_34, "CALENDAR");
                    strcpy(auStack_54, &g_8c140a98);
                }
                break;
            case 8:
                strcat(auStack_54, "SLEEPY");
                break;
            case 9:
                strcat(auStack_54, "SLEEP");
            }
        }
    } else if (a1 == 4) {
        iVar1 = strcmp(a2, "HIGYOLINE0");
        if ((iVar1 == 0) || (iVar1 = strcmp(a2, "HIGYOLINE1"), iVar1 == 0)) {
            strcpy(auStack_34, "BIO_0");
            strcpy(auStack_54, a2 + 0x20);
        } else {
            iVar1 = strcmp(a2, "HIGYOLINE2");
            if (iVar1 == 0) {
                strcpy(auStack_34, "BIO_1");
                strcpy(auStack_54, a2 + 0x20);
            } else {
                iVar1 = strcmp(a2, "HIGYOLINE3");
                if ((((iVar1 == 0) || (iVar1 = strcmp(a2, "HIGYOLINE4"), iVar1 == 0)) ||
                     (iVar1 = strcmp(a2, "HIGYOLINE5"), iVar1 == 0)) ||
                    ((iVar1 = strcmp(a2, "HIGYOLINE6"),
                      iVar1 == 0 || (iVar1 = strcmp(a2, "HIGYOLINE7"), iVar1 == 0)))) {
                    strcpy(auStack_34, "BIO_2");
                    strcpy(auStack_54, a2 + 0x20);
                } else {
                    iVar1 = strcmp(a2, "FROGMANLINE0");
                    if (((iVar1 == 0) || (iVar1 = strcmp(a2, "FROGMANLINE1"), iVar1 == 0)) ||
                        (iVar1 = strcmp(a2, "FROGMANLINE2"), iVar1 == 0)) {
                        strcpy(auStack_34, "BIO_3");
                        strcpy(auStack_54, a2 + 0x20);
                    } else {
                        iVar1 = strcmp(a2, "FROGMANLINE3");
                        if ((iVar1 == 0) || (iVar1 = strcmp(a2, "FROGMANLINE4"), iVar1 == 0)) {
                            strcpy(auStack_34, "BIO_4");
                            strcpy(auStack_54, a2 + 0x20);
                        }
                    }
                }
            }
        }
    } else if (a1 == 5) {
        iVar1 = strcmp(a2, "HIGYOLINE0");
        if ((iVar1 == 0) || (iVar1 = strcmp(a2, "HIGYOLINE1"), iVar1 == 0)) {
            strcpy(auStack_34, "BIO_0_EVENT");
            strcpy(auStack_54, a2 + 0x20);
        } else {
            iVar1 = strcmp(a2, "HIGYOLINE2");
            if (iVar1 == 0) {
                strcpy(auStack_34, "BIO_1_EVENT");
                strcpy(auStack_54, a2 + 0x20);
            } else {
                iVar1 = strcmp(a2, "HIGYOLINE3");
                if ((((iVar1 == 0) || (iVar1 = strcmp(a2, "HIGYOLINE4"), iVar1 == 0)) ||
                     (iVar1 = strcmp(a2, "HIGYOLINE5"), iVar1 == 0)) ||
                    ((iVar1 = strcmp(a2, "HIGYOLINE6"),
                      iVar1 == 0 || (iVar1 = strcmp(a2, "HIGYOLINE7"), iVar1 == 0)))) {
                    strcpy(auStack_34, "BIO_2_EVENT");
                    strcpy(auStack_54, a2 + 0x20);
                } else {
                    iVar1 = strcmp(a2, "FROGMANLINE0");
                    if (((iVar1 == 0) || (iVar1 = strcmp(a2, "FROGMANLINE1"), iVar1 == 0)) ||
                        (iVar1 = strcmp(a2, "FROGMANLINE2"), iVar1 == 0)) {
                        strcpy(auStack_34, "BIO_3_EVENT");
                        strcpy(auStack_54, a2 + 0x20);
                    } else {
                        iVar1 = strcmp(a2, "FROGMANLINE3");
                        if ((iVar1 == 0) || (iVar1 = strcmp(a2, "FROGMANLINE4"), iVar1 == 0)) {
                            strcpy(auStack_34, "BIO_4_EVENT");
                            strcpy(auStack_54, a2 + 0x20);
                        }
                    }
                }
            }
        }
    } else if (a1 == 6) {
        strcpy(auStack_34, "NARRATION");
        strcpy(auStack_54, a2 + 0x20);
        strcpy(auStack_74, a2 + 0x40);
    }
    strcpy(*(u32 *)(a0 + 0x1050), auStack_34);
    strcpy(*(int *)(a0 + 0x1050) + 0x20, auStack_54);
    ar5_00 = auStack_74;
    strcpy(*(int *)(a0 + 0x1050) + 0x40, ar5_00);
    uVar2 = speech_update_fields_0f824c(a0, ar5_00, ar6_00, a3);
    return uVar2;
}

/*
 * strcmp  0x8c0f970c
 * called by: speech_start, talk_pick_request_keyword
 */
u32 strcmp(u8 *a0, u8 *a1) {
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
 * talk_pick_request_keyword  0x8c0f9774
 * picks the talk keyword for the current need (ESCAPE, REQUEST_*, STATUS_SICK/SNORE)
 * called by: game_talk_0f816c
 * strings: "ESCAPE"; "ESCAPE"; "REQUEST_HOT"; "REQUEST_HOT" ...
 */
u32 talk_pick_request_keyword(int a0, u32 unused_a1, code *a2, u32 a3) {
    int iVar1;
    code *pcVar2;
    code *ar5_00;
    char *pcVar3;
    u32 uVar4;
    int ar4_00;
    u32 uVar5;
    bool bVar6;
    u32 uStack_2c;
    u16 auStack_28[8];

    if (0 < *(int *)(a0 + 0x1014)) {
        return 1;
    }
    uVar5 = *(u32 *)(a0 + 0x1050);
    ar4_00 = *(int *)(a0 + 0x1050) + 0x20;
    ar5_00 = (code *)&g_8c1408e9;
    strcpy(*(int *)(a0 + 0x1050) + 0x40, &g_8c1408e9);
    uVar4 = 0;
    iVar1 = *(int *)(a0 + 0x89130);
    if (iVar1 == 0)
        goto LAB_8c0fa1a8;
    if ((iVar1 != 1) && (iVar1 != 2)) {
        if (iVar1 == 3) {
            pcVar3 = (char *)0x1050;
            bVar6 = *(int *)(*(int *)(a0 + 0x1050) + 0x70) == 0x11;
            if (bVar6) {
                pcVar3 = "ESCAPE";
                strcpy(ar4_00, "ESCAPE");
                *(u32 *)(*(int *)(a0 + 0x1050) + 0x70) = 0;
            }
            uVar4 = (u32)bVar6;
            pcVar2 = (code *)speech_get_index_plus1(a0, pcVar3);
            ar5_00 = (code *)pcVar3;
            if ((((int)pcVar2 < 0x13) && (ar5_00 = (code *)0x1, *(int *)(*(int *)(a0 + 0x1050) + 0x78) != 1)) &&
                (ar5_00 = *(code **)(a0 + 0x1048), (int)pcVar2 <= (int)*(code **)(a0 + 0x1048))) {
                a2 = (code *)&g_8c140ba6;
                speech_start_chapter(a0, pcVar2, &g_8c140ba6, a3);
                uVar4 = 1;
                ar5_00 = pcVar2;
            }
        }
        goto LAB_8c0fa1a8;
    }
    if (*(int *)(*(int *)(a0 + 0x1050) + 0x70) == 0xb) {
        *(u32 *)(*(int *)(a0 + 0x1050) + 0x70) = 0;
        if (*(int *)(*(int *)(a0 + 0x1050) + 0x7c) != 7) {
            pcVar2 = *(code **)(*(int *)(a0 + 0x1050) + 0x7c);
            ar5_00 = pcVar2;
            if (((int)pcVar2 < 10) && (-1 < (int)pcVar2)) {
                ar5_00 = (code *)(&switchD_8c0f9836::switchdataD_8c0f9840)[(int)pcVar2];
                switch (pcVar2) {
                case NULL:
                    pcVar3 = "REQUEST_HOT";
                    strcpy(ar4_00, "REQUEST_HOT");
                    ar5_00 = (code *)pcVar3;
                    break;
                case (code *)0x1:
                    pcVar3 = "REQUEST_COLD";
                    strcpy(ar4_00, "REQUEST_COLD");
                    ar5_00 = (code *)pcVar3;
                    break;
                case (code *)0x2:
                    pcVar3 = "REQUEST_OXYGEN";
                    strcpy(ar4_00, "REQUEST_OXYGEN");
                    ar5_00 = (code *)pcVar3;
                    break;
                case (code *)0x3:
                    pcVar3 = "REQUEST_HUMIDITY";
                    strcpy(ar4_00, "REQUEST_HUMIDITY");
                    ar5_00 = (code *)pcVar3;
                    break;
                case (code *)0x4:
                    pcVar3 = "REQUEST_HUNGRY";
                    strcpy(ar4_00, "REQUEST_HUNGRY");
                    ar5_00 = (code *)pcVar3;
                    break;
                case (code *)0x5:
                    pcVar3 = "STATUS_SICK";
                    strcpy(ar4_00, "STATUS_SICK");
                    ar5_00 = (code *)pcVar3;
                    break;
                case (code *)0x8:
                    pcVar3 = "REQUEST_SLEEP";
                    strcpy(ar4_00, "REQUEST_SLEEP");
                    ar5_00 = (code *)pcVar3;
                    break;
                case (code *)0x9:
                    pcVar3 = "STATUS_SNORE";
                    a2 = strcpy;
                    strcpy(ar4_00, "STATUS_SNORE");
                    ar5_00 = (code *)pcVar3;
                }
            }
            iVar1 = *(int *)(a0 + 0x1044);
            if ((iVar1 < 7) && (-1 < iVar1)) {
                switch (iVar1) {
                case 0:
                    pcVar3 = "BIO_0";
                    strcpy(uVar5, "BIO_0");
                    ar5_00 = (code *)pcVar3;
                    break;
                case 1:
                    pcVar3 = "BIO_0";
                    strcpy(uVar5, "BIO_0");
                    ar5_00 = (code *)pcVar3;
                    break;
                case 2:
                    pcVar3 = "BIO_1";
                    strcpy(uVar5, "BIO_1");
                    ar5_00 = (code *)pcVar3;
                    break;
                case 3:
                    pcVar3 = "BIO_2";
                    strcpy(uVar5, "BIO_2");
                    ar5_00 = (code *)pcVar3;
                    break;
                case 4:
                    pcVar3 = "BIO_2";
                    strcpy(uVar5, "BIO_2");
                    ar5_00 = (code *)pcVar3;
                    break;
                case 5:
                    pcVar3 = "BIO_2";
                    strcpy(uVar5, "BIO_2");
                    ar5_00 = (code *)pcVar3;
                    break;
                case 6:
                    pcVar3 = "BIO_2";
                    strcpy(uVar5, "BIO_2");
                    ar5_00 = (code *)pcVar3;
                }
            }
            uVar4 = 1;
        }
        goto LAB_8c0fa1a8;
    }
    if (((*(int *)(*(int *)(a0 + 0x1050) + 0x7c) != 7) && (0 < *(int *)(*(int *)(a0 + 0x1050) + 0x60))) ||
        (*(int *)(*(int *)(a0 + 0x1050) + 0x68) < 2))
        goto LAB_8c0fa1a8;
    iVar1 = speech_get_index_plus1(a0, ar5_00);
    if ((*(int *)(a0 + 0xc) == 0) && (1 < iVar1)) {
        iVar1 = strcmp(uVar5, "CALENDAR");
        if (iVar1 == 0) {
            ar5_00 = (code *)&g_8c140a98;
            iVar1 = strcmp(ar4_00, &g_8c140a98);
            if (iVar1 == 0) {
                if ((*(int *)(*(int *)(a0 + 0x1050) + 0x74) == 1) || (*(int *)(a0 + 0x1034) == 1)) {
                    pcVar3 = "GREETING";
                    strcpy(ar4_00, "GREETING");
                    uVar4 = 1;
                    ar5_00 = (code *)pcVar3;
                } else {
                    *(u32 *)(a0 + 0xc) = 1;
                    *(u32 *)(a0 + 0x1018) = 1;
                }
                goto LAB_8c0fa1a8;
            }
        }
        iVar1 = strcmp(uVar5, "CALENDAR");
        if (iVar1 == 0) {
            pcVar3 = "GREETING";
            iVar1 = strcmp(ar4_00, "GREETING");
            if (iVar1 == 0) {
                rtc_get_date(auStack_28, pcVar3, a2, a3);
                if ((auStack_28[0] < 0x7d5) && (0x7ce < auStack_28[0])) {
                    switch (auStack_28[0]) {
                    case 1999:
                        pcVar3 = "CALENDAR1999";
                        strcpy(uVar5, "CALENDAR1999");
                        ar5_00 = (code *)pcVar3;
                        break;
                    case 2000:
                        pcVar3 = "CALENDAR2000";
                        a2 = strcpy;
                        strcpy(uVar5, "CALENDAR2000");
                        ar5_00 = (code *)pcVar3;
                        break;
                    case 0x7d1:
                        pcVar3 = "CALENDAR2001";
                        strcpy(uVar5, "CALENDAR2001");
                        ar5_00 = (code *)pcVar3;
                        break;
                    case 0x7d2:
                        pcVar3 = "CALENDAR2002";
                        strcpy(uVar5, "CALENDAR2002");
                        ar5_00 = (code *)pcVar3;
                        break;
                    case 0x7d3:
                        pcVar3 = "CALENDAR2003";
                        strcpy(uVar5, "CALENDAR2003");
                        ar5_00 = (code *)pcVar3;
                        break;
                    case 0x7d4:
                        pcVar3 = "CALENDAR2004";
                        strcpy(uVar5, "CALENDAR2004");
                        ar5_00 = (code *)pcVar3;
                    }
                } else {
                    pcVar3 = "CALENDARXXXX";
                    strcpy(uVar5, "CALENDARXXXX");
                    ar5_00 = (code *)pcVar3;
                }
                sprintf(ar4_00, ar5_00, a2, a3, &g_8c140b7d);
                uVar4 = 1;
                goto LAB_8c0fa1a8;
            }
        }
        iVar1 = strcmp(uVar5, "CALENDAR1999");
        if (((((iVar1 == 0) || (iVar1 = strcmp(uVar5, "CALENDAR2000"), iVar1 == 0)) ||
              (iVar1 = strcmp(uVar5, "CALENDAR2001"), iVar1 == 0)) ||
             ((iVar1 = strcmp(uVar5, "CALENDAR2002"),
               iVar1 == 0 || (iVar1 = strcmp(uVar5, "CALENDAR2003"), iVar1 == 0)))) ||
            ((iVar1 = strcmp(uVar5, "CALENDAR2004"),
              iVar1 == 0 || (iVar1 = strcmp(uVar5, "CALENDARXXXX"), iVar1 == 0)))) {
            strcpy(uVar5, "CALENDAR");
            pcVar3 = "USER_SPECIAL_DAY";
            strcpy(ar4_00, "USER_SPECIAL_DAY");
            *(u32 *)(a0 + 0xc) = 1;
            *(u32 *)(a0 + 0x1018) = 1;
            uVar4 = 1;
            ar5_00 = (code *)pcVar3;
        } else {
            strcpy(uVar5, "CALENDAR");
            ar5_00 = (code *)&g_8c140a98;
            strcpy(ar4_00, &g_8c140a98);
            uVar4 = 1;
        }
        goto LAB_8c0fa1a8;
    }
    if (*(int *)(*(int *)(a0 + 0x1050) + 0x7c) != 7)
        goto LAB_8c0fa1a8;
    iVar1 = *(int *)(*(int *)(a0 + 0x1050) + 0x70);
    if ((iVar1 < 0x12) && (8 < iVar1)) {
        switch (iVar1) {
        case 9:
            *(u32 *)(*(int *)(a0 + 0x1050) + 0x70) = 0;
            ar5_00 = (code *)0x1048;
            if (0 < *(int *)(a0 + 0x1048)) {
                ar5_00 = (code *)speech_get_index_plus1(a0, speech_get_index_plus1);
                if (*(int *)(a0 + 0x1048) < (int)ar5_00) {
                    ar5_00 = *(code **)(a0 + 0x1048);
                }
                a2 = (code *)&g_8c140ba6;
                speech_start_chapter(a0, ar5_00, &g_8c140ba6, a3);
                uVar4 = 1;
            }
            break;
        case 10:
            *(u32 *)(*(int *)(a0 + 0x1050) + 0x70) = 0;
            strcpy(uVar5, "TRAINING");
            ar5_00 = (code *)&g_8c1408e9;
            strcpy(ar4_00, &g_8c1408e9);
            uVar4 = 1;
            break;
        default:
            goto switchD_8c0f9e5a_caseD_b;
        case 0xc:
            *(u32 *)(*(int *)(a0 + 0x1050) + 0x70) = 0;
            strcpy(uVar5, "Worry");
            ar5_00 = (code *)&g_8c1408e9;
            strcpy(ar4_00, &g_8c1408e9);
            uVar4 = 1;
            break;
        case 0xd:
            *(u32 *)(*(int *)(a0 + 0x1050) + 0x70) = 0;
            strcpy(uVar5, "Civilization");
            ar5_00 = (code *)&g_8c1408e9;
            strcpy(ar4_00, &g_8c1408e9);
            uVar4 = 1;
            break;
        case 0x11:
            *(u32 *)(*(int *)(a0 + 0x1050) + 0x70) = 0;
            pcVar3 = "ESCAPE";
            strcpy(ar4_00, "ESCAPE");
            uVar4 = 1;
            ar5_00 = (code *)pcVar3;
        }
    } else {
    switchD_8c0f9e5a_caseD_b:
        ar5_00 = *(code **)(a0 + 0x1048);
        if (0 < (int)ar5_00) {
            ar5_00 = speech_get_index_plus1;
            iVar1 = a0;
            pcVar2 = (code *)speech_get_index_plus1(a0, speech_get_index_plus1);
            if ((int)pcVar2 <= *(int *)(a0 + 0x1048)) {
                if (*(int *)(*(int *)(a0 + 0x1050) + 0x74) == 1) {
                    uVar5 = rand();
                    ar5_00 = (code *)0x4;
                    iVar1 = libgcc_divide_helper_01031c(uVar5, 4, a2);
                    if (iVar1 == 0) {
                        a2 = (code *)&g_8c140bb9;
                        speech_start_chapter(a0, pcVar2, &g_8c140bb9, a3);
                        uVar4 = 1;
                        ar5_00 = pcVar2;
                    }
                } else {
                    rtc_get_date(auStack_28, auStack_28, a2, a3);
                    date_to_rtc_seconds(auStack_28, &uStack_2c, a2);
                    ar5_00 = (code *)get_field_c8_0fc440(a0 + 0x1054, a0 + 0x1054, a2, a3);
                    uStack_2c = uStack_2c - (int)ar5_00;
                    if (600 < uStack_2c) {
                        if (*(int *)(a0 + 0x1034) == 1) {
                            a2 = (code *)&g_8c140bb9;
                            speech_start_chapter(a0, pcVar2, &g_8c140bb9, a3);
                        } else {
                            a2 = (code *)&g_8c140a98;
                            speech_start_chapter(a0, pcVar2, &g_8c140a98, a3);
                        }
                        ar5_00 = store_rtc_now_c8;
                        store_rtc_now_c8(a0 + 0x1054, store_rtc_now_c8, a2, a3);
                        uVar4 = 1;
                    }
                }
            }
        }
    }
LAB_8c0fa1a8:
    if (uVar4 == 1) {
        speech_update_fields_0f824c(a0, ar5_00, a2, a3);
    } else {
        speech_calls_test_0fa70c(a0, ar5_00, a2, a3);
    }
    return uVar4;
}

/*
 * speech_start_chapter  0x8c0fa204
 * sets up the speech player for "CHAPTER%02d" (a1) with the line a2
 * called by: talk_pick_request_keyword
 * strings: "CHAPTER%02d"
 */
u32 speech_start_chapter(int a0, u32 unused_a1, u32 a2, u32 a3) {
    sprintf(*(u32 *)(a0 + 0x1050), unused_a1, a2, a3, "CHAPTER%02d");
    strcpy(*(int *)(a0 + 0x1050) + 0x20, *(u32 *)(a0 + 0x1050));
    strcat(*(int *)(a0 + 0x1050) + 0x20, &g_8c140bc9);
    strcat(*(int *)(a0 + 0x1050) + 0x20, a2);
    strcpy(*(int *)(a0 + 0x1050) + 0x40, &g_8c1408e9);
    *(u32 *)(*(int *)(a0 + 0x1050) + 0x70) = 0;
    save_clear_entries_from(a0 + 0x1054, 0);
    *(u32 *)(a0 + 0x89130) = 3;
    return 0x89130;
}

/*
 * speech_is_playing  0x8c0fa2b8
 * the player's active flag (+0x89134) while speech is set up (+0x1014)
 * called by: Class_12a078_m2_05eee0, Class_12c3c4_m2_104264, FrogMan_ending_event, game_select_intro_or_ending,
 * game_uses_Vec3_dtor_1089e4, game_uses_get_word_8_0bf22c, game_uses_speech_is_playing_0bad68, react_catch_object (+3
 * more)
 */
u32 speech_is_playing(int a0, u32 a1) {
    if (*(int *)(0x1014 + a0) == 0) {
        return 0;
    }
    return *(u32 *)(0x89134 + a0);
}

/*
 * speech_test_0fa2d8  0x8c0fa2d8
 * area name: sits between speech functions (same compilation unit); behaviour name: returns the result of a comparison
 * called by: Class_12a078_m6_0670f0, Class_12c3c4_m6_109d98
 */
u32 speech_test_0fa2d8(int a0) {
    if (*(int *)(0x1014 + a0) == 0) {
        return 0;
    }
    return 0;
}

/*
 * speech_copy_0fa2f0  0x8c0fa2f0
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: game_save_state_init
 */
u32 speech_copy_0fa2f0(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = memmove_wrap_0fa310(a0, a1);
    return uVar1;
}

/*
 * memmove_wrap_0fa310  0x8c0fa310
 * only calls memmove
 * called by: CGame_GetUserGameInfo, speech_copy_0fa2f0
 */
u32 memmove_wrap_0fa310(u32 a0, u32 a1) {
    u32 uVar1;

    uVar1 = memmove(a1, a0, 0x1010);
    return uVar1;
}

/*
 * speech_state_copy  0x8c0fa334
 * copies the 0x1010-byte speech state from a1 into a0, then clears the ready flag (+0xc) when mode +0x1040 is 1 and the
 * next index is past 1 called by: CGame_uses_libgcc_divide_helper_0cc784, CProlog_uses_libgcc_divide_helper_0cd3c8
 */
int speech_state_copy(int a0, u32 a1) {
    int iVar1;
    int iVar2;
    u32 ar6_00;

    ar6_00 = 0x1010;
    memmove(a0, a1, 0x1010);
    *(u32 *)(a0 + 0xc) = 1;
    iVar1 = *(int *)(0x1040 + a0);
    if (iVar1 == 1) {
        iVar2 = speech_get_index_plus1(a0, a1);
        iVar1 = 1;
        if (1 < iVar2) {
            iVar1 = 0;
            *(u32 *)(a0 + 0xc) = 0;
        }
    }
    return iVar1;
}

/*
 * speech_talk_0fa388  0x8c0fa388
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls talk functions
 * called by: game_uses_Vec3_dtor_1089e4, game_uses_get_field_138_0274bc, game_uses_get_field_1_s8_0355cc,
 * game_uses_set_field_144_u8_027270
 */
u32 speech_talk_0fa388(u32 a0, int a1, u32 a2, u32 a3) {
    int iVar1;

    if ((a1 < 0xd) && (-1 < a1)) {
        switch (a1) {
        case 0:
            iVar1 = speech_copy_0fa538(a0, a1, a2, a3);
            if (0 < iVar1) {
                return 1;
            }
            break;
        case 1:
            iVar1 = speech_copy_0fa538(a0, a1, a2, a3);
            if (1 < iVar1) {
                return 1;
            }
            break;
        case 2:
            iVar1 = speech_copy_0fa538(a0, a1, a2, a3);
            if (2 < iVar1) {
                return 1;
            }
            break;
        case 3:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (1 < iVar1) {
                return 1;
            }
            break;
        case 4:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (2 < iVar1) {
                return 1;
            }
            break;
        case 5:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (3 < iVar1) {
                return 1;
            }
            break;
        case 6:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (4 < iVar1) {
                return 1;
            }
            break;
        case 7:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (6 < iVar1) {
                return 1;
            }
            break;
        case 8:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (7 < iVar1) {
                return 1;
            }
            break;
        case 9:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (8 < iVar1) {
                return 1;
            }
            break;
        case 10:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (10 < iVar1) {
                return 1;
            }
            break;
        case 0xb:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (0xc < iVar1) {
                return 1;
            }
            break;
        case 0xc:
            iVar1 = speech_get_index_plus1(a0, a1);
            if (0x12 < iVar1) {
                return 1;
            }
        }
    }
    return 0;
}

/*
 * speech_copy_0fa538  0x8c0fa538
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: speech_talk_0fa388
 */
int speech_copy_0fa538(int a0, u8 *unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int ain0;

    iVar2 = 0;
    for (ain0 = 8; ain0 < 0x26; ain0 = ain0 + 1) {
        iVar1 = atoi(a0 + ain0 * 4 + 0x10);
        if (99 < iVar1) {
            unused_a1 = &g_8c140bcb;
            strcpy(a0 + ain0 * 4 + 0x10, &g_8c140bcb);
        }
        if (2 < iVar1) {
            iVar2 = iVar2 + 1;
        }
    }
    return iVar2;
}

/*
 * get_field_0_0fa5b4  0x8c0fa5b4
 * called by: game_uses_get_field_0_0276f4, game_uses_get_field_138_0274bc
 */
u32 get_field_0_0fa5b4(u32 *a0) {
    return *a0;
}

/*
 * format_int_at_10  0x8c0fa5bc
 * sprintf(a0 + 0x10, "%d", a1)
 * called by: FrogMan_choose_status_event, FrogMan_update_sleep_light, Higyo_attention_events,
 * Higyo_choose_status_event, Higyo_gratification_events, game_select_intro_or_ending
 */
u32 format_int_at_10(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&sprintf))(a0 + 0x10, a1, a2, a3, "%d");
    return uVar1;
}

/*
 * format_int_at_14  0x8c0fa5f0
 * sprintf(a0 + 0x14, "%d", a1)
 * called by: Higyo_gratification_events, game_select_intro_or_ending
 */
u32 format_int_at_14(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&sprintf))(a0 + 0x14, a1, a2, a3, "%d");
    return uVar1;
}

/*
 * format_int_18  0x8c0fa624
 * sprintf "%d" of a1 into +0x18
 * called by: game_select_intro_or_ending
 */
u32 format_int_18(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&sprintf))(a0 + 0x18, a1, a2, a3, "%d");
    return uVar1;
}

/*
 * speech_get_index_plus1  0x8c0fa658
 * atoi of the player's number string at +0x4ac, plus 1
 * called by: speech_start, speech_state_copy, speech_talk_0fa388, talk_pick_request_keyword
 */
int speech_get_index_plus1(int a0, u32 a1) {
    int iVar1;

    iVar1 = atoi(a0 + 0x4ac);
    return iVar1 + 1;
}

/*
 * speech_uses_identity_0fa688  0x8c0fa688
 * area name: sits between speech functions (same compilation unit); behaviour name: its main named callee is identity
 * called by: FrogMan_gratification_events, Higyo_gratification_events, game_release_0f8134
 */
int speech_uses_identity_0fa688(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar4_00;
    int iVar1;

    ar4_00 = identity(0x8c3dd7dc, unused_a1, a2, a3);
    set_fields_24_20_wrap(ar4_00);
    iVar1 = 0x8913c;
    *(u32 *)(0x8913c + a0) = 0;
    return iVar1;
}

/*
 * speech_uses_identity_0fa6c8  0x8c0fa6c8
 * area name: sits between speech functions (same compilation unit); behaviour name: its main named callee is identity
 * called by: FrogMan_jump_events, Higyo_update_sleep_light, game_uses_Vec3_dtor_1089e4, speech_restart
 */
int speech_uses_identity_0fa6c8(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 ar4_00;
    int iVar1;

    ar4_00 = identity(0x8c3dd7dc, a1, unused_a2, a3);
    set_fields_24_20(ar4_00, (&DATA_8c1402d0));
    iVar1 = 0x8913c;
    *(u32 *)(0x8913c + a0) = 1;
    return iVar1;
}

/*
 * speech_calls_test_0fa70c  0x8c0fa70c
 * area name: sits between speech functions (same compilation unit); behaviour name: its callees mostly do: calls_test
 * called by: speech_stop, talk_pick_request_keyword
 */
int speech_calls_test_0fa70c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = *(int *)(0x1018 + a0);
    if (iVar1 == 1) {
        game_calls_test_0c4e2c(a0, a1, a2, a3);
        *(u32 *)(0x1018 + a0) = 0;
        iVar1 = 0x89130;
        *(u32 *)(0x89130 + a0) = 0;
    }
    return iVar1;
}

/*
 * get_field_89130_0fa740  0x8c0fa740
 * called by: FrogMan_ending_event, game_uses_Vec3_dtor_1089e4
 */
u32 get_field_89130_0fa740(int a0) {
    return *(u32 *)(0x89130 + a0);
}

/*
 * static_init_vec3s_441280  0x8c0fa74c
 * static initialiser: builds 4 global Vec3 constants (8c441280..8c4412a4) and registers their destructors
 */
u32 static_init_vec3s_441280(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126610, a1, a2, a3);
    uVar3 = 0x8c441280;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c441280, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126620, pcVar2, uVar3, a3);
    uVar3 = 0x8c44128c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c44128c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126630, pcVar2, uVar3, a3);
    uVar3 = 0x8c441298;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c441298, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126640, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c4412a4, a3);
    if (cVar4 == '\0') {
        g_8c126650 = CONCAT44(_UNK_8c126654, 0x800000);
        /* WARNING: Read-only address (ram,0x8c126654) is written */
    } else {
        g_8c126650 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * identity_0fa804  0x8c0fa804
 * returns a0
 * called by: tex_copy_0f7f78
 */
u32 identity_0fa804(u32 a0) {
    return a0;
}

/*
 * free_if_nonnull_wrap_0fa80c  0x8c0fa80c
 * called by: tex_release_0f7fa8
 */
int free_if_nonnull_wrap_0fa80c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * speech_uses_rtc_get_date_0fa83c  0x8c0fa83c
 * area name: sits between speech functions (same compilation unit); behaviour name: its main named callee is
 * rtc_get_date called by: tex_uses_rtc_get_date_0f7ff0
 */
u32 speech_uses_rtc_get_date_0fa83c(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ar5_00;
    u8 auStack_14[16];

    *(u8 *)(a0 + 5) = 0;
    *(u8 *)(a0 + 0xf) = 0;
    a0[0xe] = 0;
    a0[0xd] = 0;
    *(u8 *)(a0 + 0x17) = 0;
    *(u32 *)(0x84 + (int)a0) = 0;
    *(u32 *)(0x88 + (int)a0) = 0;
    *(u8 *)(0x90 + (int)a0) = 0;
    *(u32 *)(0xb4 + (int)a0) = 0;
    *(u32 *)(0xb0 + (int)a0) = 0;
    rtc_get_date(auStack_14, a1, a2, a3);
    ar5_00 = (int)a0 + 0xc8;
    date_to_rtc_seconds(auStack_14, ar5_00, a2);
    uVar1 = field_ptr_384c(0x8c3dd7dc);
    a0[2] = uVar1;
    uVar1 = identity(0x8c3dd7dc, ar5_00, a2, a3);
    a0[3] = uVar1;
    *a0 = 1;
    memset_on_field_d0(a0, ar5_00, a2, a3);
    game_calc_01c970(a0[3], (int)a0 + 0xc4);
    return 1;
}

/*
 * speech_release_0fa910  0x8c0fa910
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls release functions
 * called by: game_release_0f8134
 */
u32 speech_release_0fa910(int *a0, u32 a1, u32 a2, u32 a3) {
    speech_release_0fa9fc(a0, a1, a2, a3);
    while (*a0 != 1) {
        speech_update(a0, a1, a2, a3);
    }
    *a0 = 1;
    return 1;
}

/*
 * speech_copy_0fa944  0x8c0fa944
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls copy functions
 */
u32 speech_copy_0fa944(int *a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (*a0 == 1) {
        a0[4] = a1;
        uVar1 = a2;
        iVar2 = game_copy_0fae24(a0, a1, a2, a3);
        if (iVar2 == 0) {
            uVar1 = 0;
        } else {
            *(u32 *)(a0[4] + 4) = a2;
            *(u32 *)(a0[4] + 8) = 0;
            *(u32 *)(*(int *)(a0[4] + 0x3c) + 4) = 0;
            *(u8 *)(*(int *)(a0[4] + 0x3c) + 0x28) = 0;
            *(u8 *)(*(int *)(a0[4] + 0x3c) + 0x2c) = 0;
            *(u32 *)(*(int *)(a0[4] + 0x40) + 0x70) = 0;
            *(u32 *)(*(int *)(a0[4] + 0x40) + 0x74) = 0;
            *(u32 *)(*(int *)(a0[4] + 0x40) + 0x78) = 0;
            *(u32 *)(0x880d4 + (int)a0) = 0;
            *(u32 *)(0x880d8 + (int)a0) = 0;
            game_calc_01c970(a0[3], (int)a0 + 0xc4);
            uVar1 = 1;
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * speech_release_0fa9fc  0x8c0fa9fc
 * area name: sits between speech functions (same compilation unit); behaviour name: mostly calls release functions
 * called by: speech_release_0fa910, speech_stop
 */
u32 speech_release_0fa9fc(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 1;
    if ((1 < *a0) && (uVar1 = 1, *(int *)(0xb0 + (int)a0) != 1)) {
        speech_release_pack_entry(a0, a1, a2, a3);
        *a0 = 1;
        *(u32 *)(a0[4] + 4) = 0;
        uVar1 = game_calc_0fda5c(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * speech_release_pack_entry  0x8c0faa40
 * in state 7 releases the pack entry handle (+0xb4) and drops to state 6, then clears +0xc0 and resets the request
 * fields called by: speech_release_0fa9fc
 */
u32 speech_release_pack_entry(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 1;
    if (1 < *a0) {
        if (*a0 == 7) {
            a1 = *(u32 *)(0xb4 + (int)a0);
            pack_release_entry_handle(0x8c2b59d0, a1, a2, a3);
            *a0 = 6;
        }
        *(u32 *)(0xc0 + (int)a0) = 0;
        uVar1 = game_uses_set_fields_24_20_0fd8d0(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * speech_update  0x8c0faa94
 * per-frame speech recognition and reply logic (SPEECH)
 * called by: game_talk_0f816c, speech_release_0fa910
 * strings: "SPEECH"; "SPEECH"; "SPEECH"
 */
u8 *speech_update(int *a0, u32 a1, char *a2, int *a3) {
    u8 *puVar1;
    int iVar2;
    int *ar7_00;
    int in_stack_ffffffb4;
    char acStack_2c[36];

    if (0 < a0[0x2e]) {
        a0[0x2e] = a0[0x2e] + -1;
    }
    if (0 < a0[0x2f]) {
        a0[0x2f] = a0[0x2f] + -1;
    }
    if ((a0[0x22035] == 0) && (0 < a0[0x22036])) {
        a0[0x22036] = a0[0x22036] + -1;
    }
    iVar2 = *a0;
    if (8 < iVar2) {
        return (u8 *)8;
    }
    if (iVar2 < 1) {
        return (u8 *)1;
    }
    puVar1 = (&switchD_8c0fab12::switchdataD_8c0fab28)[iVar2 + -1];
    switch (iVar2) {
    case 1:
        break;
    case 2:
        *a0 = 1;
        a0[0x2c] = 0;
        game_calc_0fda5c(a0, a1, a2, a3);
        puVar1 = NULL;
        if (a0[4] != 0) {
            *(u32 *)(a0[4] + 4) = 0;
            puVar1 = (u8 *)game_state_switch_0fb7d0(a0);
        }
        break;
    case 3:
        if (a0[0x2c] == 1) {
            *a0 = 2;
            return (u8 *)2;
        }
        a3 = a0 + 0xe;
        a2 = "SPEECH";
        iVar2 = CDCGD_request_type_10(0x8c3eb334, a0 + 5, "SPEECH", a3);
        if (iVar2 == 2) {
            return (u8 *)2;
        }
        if (iVar2 == 0) {
            *(u8 *)(a0 + 5) = 0;
            *a0 = 2;
            return (u8 *)2;
        }
        a0[0xd] = 0;
        while (in_stack_ffffffb4 = a0[0xd], *(char *)(a0[0xe] + in_stack_ffffffb4 * 0x28) != '\0') {
            a0[0xd] = a0[0xd] + 1;
        }
        *a0 = 4;
    case 4:
        if (a0[0x2c] == 1) {
            puVar1 = (u8 *)0x2;
            *a0 = 2;
        } else {
            iVar2 = game_copy_0faf98(a0, *(int *)(a0[4] + 0x40) + 0x20, a2, a3);
            if (iVar2 == 0) {
                puVar1 = (u8 *)0x2;
                *a0 = 2;
            } else {
                *a0 = 5;
            switchD_8c0fab12_caseD_5:
                if (a0[0x2c] == 1) {
                    puVar1 = (u8 *)0x2;
                    *a0 = 2;
                } else {
                    ar7_00 = a0 + 0x21;
                    iVar2 = CDCGD_request_type_10(0x8c3eb334, a0 + 0xf, "SPEECH", ar7_00);
                    if (iVar2 == 2) {
                        puVar1 = (u8 *)0x2;
                    } else if (iVar2 == 0) {
                        *(u8 *)(a0 + 0x17) = 0;
                        puVar1 = (u8 *)0x2;
                        *a0 = 2;
                    } else {
                        *a0 = 6;
                        strcpy(acStack_2c, *(int *)(a0[4] + 0x40) + 0x40);
                        if (acStack_2c[0] == '\0') {
                            strcpy(acStack_2c, &g_8c141dd7);
                        }
                        puVar1 = (u8 *)game_uses_strcmp_0fb0d4(a0, acStack_2c);
                    }
                }
            }
        }
        break;
    case 5:
        goto switchD_8c0fab12_caseD_5;
    case 6:
        if (a0[0x2c] == 1) {
            puVar1 = (u8 *)0x2;
            *a0 = 2;
        } else {
            iVar2 = *(int *)(a0[0x22] + 0x20);
            if ((iVar2 < 9) && (0 < iVar2)) {
                switch (iVar2) {
                case 1:
                    puVar1 = (u8 *)game_uses_strcmp_0fb1d4(a0);
                    break;
                case 2:
                    puVar1 = (u8 *)game_copy_0fb20c(a0, a1, a2, a3);
                    break;
                case 3:
                    game_calc_0fda5c(a0, a1, a2, a3);
                    puVar1 = (u8 *)talk_pick_grunt(a0, a1, a2, a3);
                    break;
                case 4:
                    puVar1 = (u8 *)asr_switch_vocab(a0, a1, a2, a3);
                    break;
                case 5:
                    puVar1 = (u8 *)game_uses_rand_0fc5ac(a0, a1, a2, a3);
                    break;
                case 6:
                    puVar1 = (u8 *)game_uses_script_get_var_value_0fc608(a0, a1, a2, a3);
                    break;
                case 7:
                    puVar1 = (u8 *)script_cmd_if_compare(a0, a1, a2, a3);
                    break;
                case 8:
                    puVar1 = (u8 *)script_cmd_set_vars(a0, a1, a2, a3);
                }
            } else {
                puVar1 = (u8 *)0x2;
                *a0 = 2;
            }
        }
        break;
    case 7:
        puVar1 = (u8 *)script_cmd_load_pack_wait(a0, a1, a2, a3);
        break;
    case 8:
        puVar1 = (u8 *)asr_uses_strcpy_0fbf28(a0, a1, a2, a3);
    }
    return puVar1;
}

/*
 * game_copy_0fae24  0x8c0fae24
 * name hint from a string it uses: SPEECH; area name: game code; nothing names its area yet; behaviour name: mostly
 * calls copy functions called by: speech_copy_0fa944 strings: "SPEECH"; "SPEECH"; "SPEECH"; "SPEECH"
 */
u32 game_copy_0fae24(u32 *a0, u32 unused_a1, char *a2, u32 a3) {
    int iVar1;
    u8 auStack_48[32];
    u8 auStack_28[36];

    a0[0x2e] = 0;
    strcpy(auStack_28, *(u32 *)(a0[4] + 0x40));
    strcat(auStack_28, &g_8c141dd9);
    strcpy(auStack_48, *(u32 *)(a0[4] + 0x40));
    strcat(auStack_48, &g_8c141dde);
    iVar1 = strcmp_0faf30(a0 + 5, auStack_28);
    if (iVar1 != 0) {
        if (*(char *)(a0 + 5) != '\0') {
            CDCGD_release_type10(0x8c3eb334, a0 + 5, "SPEECH", 1);
            a3 = 1;
            a2 = "SPEECH";
            CDCGD_release_type10(0x8c3eb334, a0 + 0xf, "SPEECH", 1);
        }
        strcpy(a0 + 5, auStack_28);
        strcpy(a0 + 0xf, auStack_48);
        iVar1 = CDCGD_request_type_10(0x8c3eb334, a0 + 5, "SPEECH", a0 + 0xe);
        if (iVar1 == 0) {
            *(u8 *)(a0 + 5) = 0;
            return 0;
        }
    }
    *a0 = 3;
    return 1;
}

/*
 * strcmp_0faf30  0x8c0faf30
 * called by: asr_switch_vocab, asr_uses_strcpy_0fbf28, game_copy_0fae24, game_copy_0faf98, game_uses_strcmp_0fb0d4,
 * game_uses_strcmp_0fc4fc, save_slot_store_if_changed, script_get_var_value (+1 more)
 */
u32 strcmp_0faf30(u8 *a0, u8 *a1) {
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
 * game_copy_0faf98  0x8c0faf98
 * name hint from a string it uses: SPEECH; area name: game code; nothing names its area yet; behaviour name: mostly
 * calls copy functions called by: speech_update strings: "SPEECH"; "SPEECH"
 */
u32 game_copy_0faf98(int a0, char *a1, char *a2, u32 a3) {
    int iVar1;
    int iVar2;
    u8 auStack_30[36];

    if (*(int *)(a0 + 0x38) == 0) {
        return 0;
    }
    if (*a1 == '\0') {
        strcpy(auStack_30, *(u32 *)(a0 + 0x38));
        iVar2 = 0;
    } else {
        strcpy(auStack_30, a1);
        iVar2 = 0;
        while ((iVar2 < *(int *)(a0 + 0x34) &&
                (iVar1 = strcmp_0faf30(iVar2 * 0x28 + *(int *)(a0 + 0x38), auStack_30), iVar1 != 0))) {
            iVar2 = iVar2 + 1;
        }
        if (*(int *)(a0 + 0x34) <= iVar2) {
            return 0;
        }
    }
    if ((*(char *)(a0 + 0x5c) != '\0') &&
        ((*(int *)(iVar2 * 0x28 + *(int *)(a0 + 0x38) + 0x20) != *(int *)(a0 + 0x7c) ||
          (iVar1 = strcmp_0faf30(auStack_30, a0 + 0x5c), iVar1 != 0)))) {
        a3 = 1;
        a2 = "SPEECH";
        CDCGD_release_type10(0x8c3eb334, a0 + 0x3c, "SPEECH", 1);
        *(u8 *)(a0 + 0x5c) = 0;
    }
    strcpy(a0 + 0x5c, auStack_30);
    *(u32 *)(a0 + 0x7c) = *(u32 *)(iVar2 * 0x28 + *(int *)(a0 + 0x38) + 0x20);
    *(u32 *)(a0 + 0x80) = *(u32 *)(iVar2 * 0x28 + *(int *)(a0 + 0x38) + 0x24);
    return 1;
}

/*
 * game_uses_strcmp_0fb0d4  0x8c0fb0d4
 * name hint from a string it uses: ERROR; area name: game code; nothing names its area yet; behaviour name: its main
 * named callee is strcmp_0faf30 called by: asr_uses_strcpy_0fbf28, game_uses_rand_0fc5ac, game_uses_strcmp_0fb1d4,
 * script_cmd_if_compare, script_cmd_load_pack_wait, script_cmd_set_vars, speech_update, talk_pick_grunt strings:
 * "@ERROR"
 */
u32 game_uses_strcmp_0fb0d4(u32 *a0, char *a1) {
    u32 uVar1;
    int iVar2;
    char *ar4_00;

    if (*a1 == '\0') {
        uVar1 = 2;
        *a0 = 2;
    } else if (**(char **)(0x84 + (int)a0) == '\0') {
        uVar1 = 2;
        *a0 = 2;
    } else {
        iVar2 = strcmp_0faf30(a1, "@ERROR");
        if (iVar2 == 0) {
            uVar1 = 2;
            *a0 = 2;
        } else if (*a1 == '#') {
            *(u32 *)(0x88 + (int)a0) = *(u32 *)(0x84 + (int)a0);
            uVar1 = 6;
            *a0 = 6;
        } else if (*a1 == '$') {
            iVar2 = *(int *)(0x88 + (int)a0) + *(int *)(*(int *)(0x88 + (int)a0) + 0x24) + 0x28;
            if (*(int *)(iVar2 + 0x20) == 0) {
                uVar1 = 2;
                *a0 = 2;
            } else {
                *(int *)(0x88 + (int)a0) = iVar2;
                uVar1 = 6;
                *a0 = 6;
            }
        } else {
            for (ar4_00 = *(char **)(0x84 + (int)a0); (*(int *)(ar4_00 + 0x20) != 0 && (*ar4_00 != '\0'));
                 ar4_00 = ar4_00 + *(int *)(ar4_00 + 0x24) + 0x28) {
                iVar2 = strcmp_0faf30(ar4_00, a1);
                if (iVar2 == 0) {
                    *(char **)(0x88 + (int)a0) = ar4_00;
                    *a0 = 6;
                    return 6;
                }
            }
            uVar1 = 2;
            *a0 = 2;
        }
    }
    return uVar1;
}

/*
 * game_uses_strcmp_0fb1d4  0x8c0fb1d4
 * name hint from a string it uses: ERR wrap; area name: game code; nothing names its area yet; behaviour name: its
 * callees mostly do: uses_strcmp called by: speech_update
 */
u32 game_uses_strcmp_0fb1d4(u32 *a0) {
    u32 uVar1;

    if (*(int *)(0xb0 + (int)a0) == 1) {
        uVar1 = 2;
        *a0 = 2;
    } else {
        uVar1 = game_uses_strcmp_0fb0d4(a0, (&DATA_8c141dd0) + 0x1a);
    }
    return uVar1;
}

/*
 * game_copy_0fb20c  0x8c0fb20c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: speech_update
 */
u32 game_copy_0fb20c(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    if (a0[0x2c] == 1) {
        uVar1 = 2;
        *a0 = 2;
    } else {
        iVar2 = a0[0x22];
        strcpy(*(int *)(a0[4] + 0x40) + 0x20, iVar2 + 0x28);
        strcpy(*(int *)(a0[4] + 0x40) + 0x40, iVar2 + 0x48);
        uVar1 = 4;
        *a0 = 4;
    }
    return uVar1;
}

/*
 * talk_pick_grunt  0x8c0fb268
 * picks a random grunt reply (GU_02..GU_09) when nothing matched (@NONE)
 * called by: speech_update
 * strings: "@NONE"; "GU_02"; "GU_04"; "GU_06" ...
 */
u32 talk_pick_grunt(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar4_00;
    int iVar3;

    iVar3 = a0[0x22];
    a0[0x2d] = 0xffffffff;
    *(u32 *)(*(int *)(a0[4] + 0x40) + 0x78) = 1;
    if (*(char *)(iVar3 + 0x48) == '#') {
        a0[0x23] = 0;
    } else if (*(char *)(iVar3 + 0x48) == '@') {
        uVar1 = rand();
        uVar1 = libgcc_divide_helper_01031c(uVar1, *(u32 *)(iVar3 + 0x4c), a2);
        a0[0x23] = uVar1;
    } else {
        uVar1 = script_get_var_value(a0, iVar3 + 0x48, a2, a3);
        a0[0x23] = uVar1;
        if ((int)a0[0x23] < 0) {
            a0[0x23] = 0;
        }
        if (*(int *)(iVar3 + 0x4c) <= (int)a0[0x23]) {
            a0[0x23] = *(int *)(iVar3 + 0x4c) + -1;
        }
    }
    iVar2 = strcmp_0faf30(a0[0x23] * 0x24 + iVar3 + 0x54, "@NONE");
    if (iVar2 == 0) {
        uVar1 = game_uses_strcmp_0fb0d4(a0, iVar3 + 0x28);
        return uVar1;
    }
    iVar3 = a0[0x23] * 0x24 + iVar3 + 0x54;
    ar4_00 = 0x8c2b59d0;
    uVar1 = pack_acquire_entry_handle(0x8c2b59d0, iVar3, a2, a3);
    a0[0x2d] = uVar1;
    if (-1 < (int)a0[0x2d])
        goto LAB_8c0fb436;
    uVar1 = rand();
    iVar3 = libgcc_divide_helper_01031c(uVar1, 5, a2);
    if ((iVar3 < 5) && (-1 < iVar3)) {
        switch (iVar3) {
        case 0:
            uVar1 = pack_acquire_entry_handle(0x8c2b59d0, "GU_02", a2, a3);
            a0[0x2d] = uVar1;
            break;
        case 1:
            uVar1 = pack_acquire_entry_handle(0x8c2b59d0, "GU_04", a2, a3);
            a0[0x2d] = uVar1;
            break;
        case 2:
            uVar1 = pack_acquire_entry_handle(0x8c2b59d0, "GU_06", a2, a3);
            a0[0x2d] = uVar1;
            break;
        case 3:
            uVar1 = pack_acquire_entry_handle(0x8c2b59d0, "GU_07", a2, a3);
            a0[0x2d] = uVar1;
            break;
        case 4:
            goto switchD_8c0fb390_caseD_4;
        }
    } else {
    switchD_8c0fb390_caseD_4:
        uVar1 = pack_acquire_entry_handle(0x8c2b59d0, "GU_09", a2, a3);
        a0[0x2d] = uVar1;
    }
    if ((int)a0[0x2d] < 0) {
        uVar1 = game_uses_strcmp_0fb0d4(a0, a0[0x22] + 0x28);
        return uVar1;
    }
LAB_8c0fb436:
    pack_sound_021d90(0x8c2b59d0, a0[0x2d], *(u32 *)(*(int *)(a0[4] + 0x40) + 0xc0), 0);
    *a0 = 7;
    return 7;
}

/*
 * script_cmd_load_pack_wait  0x8c0fb494
 * waits for the command's pack entry to finish loading, then releases it and jumps to the next label
 * called by: speech_update
 */
u8 *script_cmd_load_pack_wait(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u8 *puVar1;
    int ar5_00;
    u8 *ar5_01;
    u32 *ar6_00;
    u32 *puVar2;
    u32 ar6_01;
    int *ar7_00;
    u32 ar7_01;
    int iVar3;
    u32 auStack_50[2];
    int iStack_48;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    int iStack_1c;
    int iStack_18;
    u32 auStack_14[2];

    puVar2 = auStack_50;
    if (a0[0x2c] == 1) {
        pack_release_entry_handle(0x8c2b59d0, a0[0x2d], a2, a3);
        puVar1 = (u8 *)0x2;
        *a0 = 2;
    } else {
        iVar3 = a0[0x22];
        ar7_00 = &iStack_18;
        ar6_00 = auStack_14;
        ar5_01 = (u8 *)a0[0x2d];
        ar5_00 = pack_entry_poll_status(0x8c2b59d0, ar5_01, ar6_00, ar7_00, &iStack_1c);
        puVar1 = (u8 *)0x8;
        if ((ar5_00 < 9) && (-1 < ar5_00)) {
            puVar1 = (&switchD_8c0fb4fa::switchdataD_8c0fb500)[ar5_00];
            switch (ar5_00) {
            default:
                break;
            case 2:
                pack_release_entry_handle(0x8c2b59d0, a0[0x2d], ar6_00, ar7_00);
            case 1:
                game_calc_0fb780(a0, 4, ar6_00, ar7_00);
                puVar1 = (u8 *)game_uses_strcmp_0fb0d4(a0, a0[0x22] + 0x28);
                break;
            case 4:
                break;
            case 5:
                if ((auStack_14[0] < 0xb) && (-1 < (int)auStack_14[0])) {
                    switch (auStack_14[0]) {
                    case 1:
                        iStack_24 = a0[0x23];
                        *(u32 *)(iStack_24 * 0x24 + iVar3 + 0x50) = 0x4e;
                        break;
                    case 2:
                        iStack_28 = a0[0x23];
                        *(u32 *)(iStack_28 * 0x24 + iVar3 + 0x50) = 0x41;
                        break;
                    case 3:
                        iStack_2c = a0[0x23];
                        *(u32 *)(iStack_2c * 0x24 + iVar3 + 0x50) = 0x4c;
                        break;
                    case 4:
                        iStack_30 = a0[0x23];
                        *(u32 *)(iStack_30 * 0x24 + iVar3 + 0x50) = 0x50;
                        break;
                    case 5:
                        iStack_34 = a0[0x23];
                        *(u32 *)(iStack_34 * 0x24 + iVar3 + 0x50) = 0x43;
                        break;
                    case 6:
                        iStack_38 = a0[0x23];
                        *(u32 *)(iStack_38 * 0x24 + iVar3 + 0x50) = 0x46;
                        break;
                    case 7:
                        iStack_3c = a0[0x23];
                        *(u32 *)(iStack_3c * 0x24 + iVar3 + 0x50) = 0x53;
                        break;
                    case 8:
                        iStack_40 = a0[0x23];
                        *(u32 *)(iStack_40 * 0x24 + iVar3 + 0x50) = 0x49;
                        break;
                    case 9:
                        iStack_44 = a0[0x23];
                        *(u32 *)(iStack_44 * 0x24 + iVar3 + 0x50) = 0x48;
                        break;
                    case 10:
                        iStack_48 = a0[0x23];
                        *(u32 *)(iStack_48 * 0x24 + iVar3 + 0x50) = 0x55;
                    }
                }
                if (iStack_18 != 0) {
                    sprintf(auStack_50, ar5_01, ar6_00, ar7_00, &g_8c141e10);
                    ar5_01 = &g_8c141e13;
                    script_set_var_value(a0, &g_8c141e13, auStack_50, ar7_00);
                    ar6_00 = puVar2;
                }
                if (iStack_1c != 0) {
                    sprintf(auStack_50, ar5_01, ar6_00, ar7_00, &g_8c141e10);
                    script_set_var_value(a0, &g_8c141e15, auStack_50, ar7_00);
                }
                ar7_01 = 0;
                ar6_01 = *(u32 *)(*(int *)(a0[4] + 0x40) + 0xc0);
                pack_sound_021d90(0x8c2b59d0, a0[0x2d], ar6_01, 0);
                puVar1 = (u8 *)game_calc_0fb780(a0, ar5_00, ar6_01, ar7_01);
            }
        }
    }
    return puVar1;
}

/*
 * game_calc_0fb780  0x8c0fb780
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 * called by: script_cmd_load_pack_wait
 */
u32 game_calc_0fb780(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&game_update_fields_0fb83c))(
        a0, *(u32 *)(*(int *)(0x8c + a0) * 0x24 + *(int *)(0x88 + a0) + 0x50), a1, a3);
    return uVar1;
}

/*
 * game_state_switch_0fb7d0  0x8c0fb7d0
 * area name: game code; nothing names its area yet; behaviour name: dispatches on a state or mode value (switch)
 * called by: speech_update
 */
u32 game_state_switch_0fb7d0(int a0) {
    int iVar1;
    u32 uVar2;

    iVar1 = *(int *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x68);
    if ((iVar1 < 5) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            uVar2 = 0x43;
            break;
        case 1:
            uVar2 = 0x55;
            break;
        default:
            goto switchD_8c0fb7f2_caseD_2;
        case 4:
            uVar2 = 0x53;
        }
    } else {
    switchD_8c0fb7f2_caseD_2:
        uVar2 = 0x4e;
    }
    uVar2 = game_update_fields_0fb83c(a0, uVar2, 4);
    return uVar2;
}

/*
 * game_update_fields_0fb83c  0x8c0fb83c
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: game_state_switch_0fb7d0
 */
u32 game_update_fields_0fb83c(int a0, int a1, int a2) {
    u32 uVar1;

    uVar1 = 8;
    if ((a2 < 9) && (3 < a2)) {
        switch (a2) {
        case 4:
            if ((a1 < 0x56) && (0x40 < a1)) {
                switch (a1) {
                case 0x41:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 5;
                    return 0xb8;
                case 0x43:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x14;
                    return 0xb8;
                case 0x46:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x19;
                    return 0xb8;
                case 0x48:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x28;
                    return 0xb8;
                case 0x49:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x23;
                    return 0xb8;
                case 0x4c:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 10;
                    return 0xb8;
                case 0x50:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0xf;
                    return 0xb8;
                case 0x53:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x1e;
                    return 0xb8;
                case 0x55:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x2d;
                    return 0xb8;
                }
            }
            *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0;
            return 0xb8;
        case 5:
            if ((a1 < 0x56) && (0x40 < a1)) {
                switch (a1) {
                case 0x41:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 6;
                    return 0xb8;
                case 0x43:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x15;
                    return 0xb8;
                case 0x46:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x1a;
                    return 0xb8;
                case 0x48:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x29;
                    return 0xb8;
                case 0x49:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x24;
                    return 0xb8;
                case 0x4c:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0xb;
                    return 0xb8;
                case 0x50:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x10;
                    return 0xb8;
                case 0x53:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x1f;
                    return 0xb8;
                case 0x55:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x2e;
                    return 0xb8;
                }
            }
            *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 1;
            return 0xb8;
        case 6:
            if ((a1 < 0x56) && (0x40 < a1)) {
                switch (a1) {
                case 0x41:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 7;
                    return 0xb8;
                case 0x43:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x16;
                    return 0xb8;
                case 0x46:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x1b;
                    return 0xb8;
                case 0x48:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x2a;
                    return 0xb8;
                case 0x49:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x25;
                    return 0xb8;
                case 0x4c:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0xc;
                    return 0xb8;
                case 0x50:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x11;
                    return 0xb8;
                case 0x53:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x20;
                    return 0xb8;
                case 0x55:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x2f;
                    return 0xb8;
                }
            }
            *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 2;
            return 0xb8;
        case 7:
            if ((a1 < 0x56) && (0x40 < a1)) {
                switch (a1) {
                case 0x41:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 8;
                    return 0xb8;
                case 0x43:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x17;
                    return 0xb8;
                case 0x46:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x1c;
                    return 0xb8;
                case 0x48:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x2b;
                    return 0xb8;
                case 0x49:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x26;
                    return 0xb8;
                case 0x4c:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0xd;
                    return 0xb8;
                case 0x50:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x12;
                    return 0xb8;
                case 0x53:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x21;
                    return 0xb8;
                case 0x55:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x30;
                    return 0xb8;
                }
            }
            *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 3;
            return 0xb8;
        case 8:
            if ((a1 < 0x56) && (0x40 < a1)) {
                switch (a1) {
                case 0x41:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 9;
                    return 0xb8;
                case 0x43:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x18;
                    return 0xb8;
                case 0x46:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x1d;
                    return 0xb8;
                case 0x48:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x2c;
                    return 0xb8;
                case 0x49:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x27;
                    return 0xb8;
                case 0x4c:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0xe;
                    return 0xb8;
                case 0x50:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x13;
                    return 0xb8;
                case 0x53:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x22;
                    return 0xb8;
                case 0x55:
                    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 0x31;
                    return 0xb8;
                }
            }
            uVar1 = 0xb8;
            *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb8) = 4;
        }
    }
    return uVar1;
}

/*
 * asr_switch_vocab  0x8c0fbdfc
 * unregisters the previous SPEECH vocabulary and registers the one named at (+0x88)->+0x2c
 * called by: speech_update
 * strings: "SPEECH"; "SPEECH"; "SPEECH"
 */
u32 asr_switch_vocab(u32 *a0, u32 unused_a1, char *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *ar5_00;
    int ar5_01;

    ar5_01 = a0[0x22];
    iVar1 = strcmp_0faf30(ar5_01 + 0x2c, a0 + 0x24);
    if (iVar1 != 0) {
        if (*(char *)(a0 + 0x24) != '\0') {
            a2 = "SPEECH";
            speech_request_queue_add_wrap(a0[2], a0 + 0x24, "SPEECH");
        }
        strcpy(a0 + 0x24, ar5_01 + 0x2c);
    }
    ar5_00 = a0 + 0x24;
    iVar1 = asr_register_strings(a0[2], ar5_00, "SPEECH");
    if (iVar1 == 0) {
        game_calc_01d868(a0[2]);
        uVar2 = 2;
        *a0 = 2;
    } else {
        iVar1 = asr_calc_01d71c(a0[2]);
        if (iVar1 == 0) {
            uVar2 = 2;
            *a0 = 2;
        } else {
            a0[0x2e] = 0x96;
            a0[0x33] = 0;
            iVar1 = game_uses_strcmp_0fc4fc(a0, ar5_01);
            if ((iVar1 == 1) || (*(int *)(ar5_01 + 0x28) == 4)) {
                a0[0x2e] = 300;
                a0[0x33] = 1;
            } else if (*(int *)(ar5_01 + 0x28) == 1) {
                a0[0x2e] = 0x96;
            } else if (*(int *)(ar5_01 + 0x28) == 2) {
                a0[0x2e] = 0x5a;
            }
            uVar2 = 8;
            *a0 = 8;
        }
    }
    return uVar2;
}

/*
 * asr_uses_strcpy_0fbf28  0x8c0fbf28
 * name hint from a string it uses: SPEECH; area name: sits between asr functions (same compilation unit); behaviour
 * name: its main named callee is strcpy called by: speech_update strings: "SPEECH"; "SPEECH"; "SPEECH"; "SPEECH" ...
 */
u32 asr_uses_strcpy_0fbf28(u32 *a0, u32 unused_a1, char *a2, u8 *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u32 *ar5_00;
    char *ar5_01;
    u8 *ar5_02;
    char *ar5_03;
    u8 auStack_120[4];
    u8 auStack_11c[128];
    int aiStack_9c[3];
    char acStack_90[132];

    if (a0[0x2c] == 1) {
        game_calc_01d868(a0[2]);
        uVar1 = 2;
        *a0 = 2;
    } else {
        if (a0[0x22035] == 1) {
            a0[0x2e] = 0;
            a0[0x22035] = 0;
        }
        if (a0[0x33] == 1) {
            strcpy(auStack_11c, a0 + 0x24);
            strcat(auStack_11c, &g_8c141e17);
            a3 = auStack_120;
            a2 = "SPEECH";
            iVar2 = CDCGD_request_type_10(0x8c3eb334, auStack_11c, "SPEECH", a3);
            if (iVar2 == 1) {
                a3 = (u8 *)0x1;
                a2 = "SPEECH";
                ar5_00 = a0 + 0x24;
                CDCGD_release_type10(0x8c3eb334, ar5_00, "SPEECH", 1);
                if (a0[0x22035] == 0) {
                    game_save_01bcf4(a0[3], ar5_00, a2, a3);
                }
                if (a0[0x22035] == 0) {
                    game_save_01bd88(a0[3], ar5_00, a2, a3);
                }
                set_fields_24_20(a0[3], &g_8c140bd0);
                a0[0x33] = 0;
            }
        }
        ar5_03 = (char *)a0[0x22];
        acStack_90[0] = '\0';
        aiStack_9c[0] = 0;
        if ((int)a0[0x2e] < 1) {
            strcpy(acStack_90, &g_8c141e1c);
            aiStack_9c[0] = 1;
        } else {
            game_copy_01d684(a0[2], aiStack_9c, a2, a3);
            if (aiStack_9c[0] != 0) {
                *(int *)(*(int *)(a0[4] + 0x3c) + 4) = *(int *)(*(int *)(a0[4] + 0x3c) + 4) + 1;
            }
        }
        if (aiStack_9c[0] == 0) {
            uVar1 = 0;
        } else {
            ar5_01 = "@NAME";
            iVar2 = strcmp_0faf30(acStack_90, "@NAME");
            if (((iVar2 == 0) && (0 < **(int **)(a0[4] + 0x3c))) &&
                (*(int *)(*(int *)(a0[4] + 0x40) + 100) != **(int **)(a0[4] + 0x3c))) {
                game_calc_01d868(a0[2]);
                uVar1 = 2;
                *a0 = 2;
            } else {
                for (iVar2 = 0; iVar2 < *(int *)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
                    ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
                    iVar3 = strcmp_0faf30(acStack_90, ar5_01);
                    if (iVar3 == 0)
                        break;
                }
                if (*(int *)(ar5_03 + 0x6c) <= iVar2) {
                    ar5_01 = &g_8c141e26;
                    strcpy(acStack_90, &g_8c141e26);
                    for (iVar2 = 0; iVar2 < *(int *)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
                        ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
                        iVar3 = strcmp_0faf30(acStack_90, ar5_01);
                        if (iVar3 == 0)
                            break;
                    }
                }
                if (acStack_90[0] != '-') {
                    if (acStack_90[0] == '?') {
                        ar5_01 = &g_8c1417d0;
                        set_fields_28_1c(a0[3], &g_8c1417d0);
                        save_mark_time(a0, ar5_01, a2, a3);
                    } else {
                        ar5_02 = &g_8c1411d0;
                        set_fields_28_1c(a0[3], &g_8c1411d0);
                        save_mark_time(a0, ar5_02, a2, a3);
                        ar5_01 = ar5_03;
                        iVar3 = game_uses_strcmp_0fc4fc(a0, ar5_03);
                        if (iVar3 == 1) {
                            ar5_01 = ar5_03;
                            save_slot_store_if_changed(a0, ar5_03, a2, a3);
                        }
                    }
                }
                if (iVar2 < *(int *)(ar5_03 + 0x6c)) {
                    if (ar5_03[iVar2 * 0x68 + 0xb0] == '\0') {
                        history_push_string(a0, ar5_03 + iVar2 * 0x68 + 0x70, a2, a3);
                    } else if (ar5_03[iVar2 * 0x68 + 0x90] == '\0') {
                        a2 = ar5_03 + iVar2 * 0x68 + 0x70;
                        script_set_var_value(a0, ar5_03 + iVar2 * 0x68 + 0xb0, a2, a3);
                        history_push_string(a0, ar5_03 + iVar2 * 0x68 + 0x70, a2, a3);
                    } else {
                        a2 = ar5_03 + iVar2 * 0x68 + 0x90;
                        script_set_var_value(a0, ar5_03 + iVar2 * 0x68 + 0xb0, a2, a3);
                        history_push_string(a0, ar5_03 + iVar2 * 0x68 + 0x90, a2, a3);
                    }
                    ar5_01 = *(char **)(ar5_03 + iVar2 * 0x68 + 0xd4);
                    set_field_68_clamp_0_4_wrap(*(u32 *)(a0[4] + 0x40), ar5_01);
                }
                game_calc_01d868(a0[2]);
                if (acStack_90[0] == '!') {
                    a2 = "SPEECH";
                    asr_register_strings(a0[2], a0 + 0x24, "SPEECH");
                }
                if (*(int *)(*(int *)(a0[4] + 0x40) + 0x70) == 0x11) {
                    uVar1 = 2;
                    *a0 = 2;
                } else {
                    uVar1 = game_uses_strcmp_0fb0d4(a0, ar5_03 + iVar2 * 0x68 + 0xb4);
                }
            }
        }
    }
    return uVar1;
}

/*
 * save_mark_time  0x8c0fc3e4
 * sets +0x74 of the save record and stores the current RTC time
 * called by: asr_uses_strcpy_0fbf28
 */
u32 save_mark_time(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x74) = 1;
    uVar1 = store_rtc_now_c8(a0, a1, a2, a3);
    return uVar1;
}

/*
 * store_rtc_now_c8  0x8c0fc40c
 * stores the current RTC date as seconds at +0xc8
 * called by: save_mark_time, talk_pick_request_keyword
 */
u32 store_rtc_now_c8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_10[16];

    rtc_get_date(auStack_10, a1, a2, a3);
    uVar1 = date_to_rtc_seconds(auStack_10, a0 + 0xc8, a2);
    return uVar1;
}

/*
 * get_field_c8_0fc440  0x8c0fc440
 * called by: talk_pick_request_keyword
 */
u32 get_field_c8_0fc440(int a0) {
    return *(u32 *)(0xc8 + a0);
}

/*
 * history_push_string  0x8c0fc44c
 * shifts the 16 0x20-byte strings at (+0x10)->+0x40 + 200 down and copies a1 into the first
 * called by: asr_uses_strcpy_0fbf28
 */
u32 history_push_string(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    for (iVar2 = 0xf; 0 < iVar2; iVar2 = iVar2 + -1) {
        strcpy(*(int *)(*(int *)(a0 + 0x10) + 0x40) + iVar2 * 0x20 + 200,
               *(int *)(*(int *)(a0 + 0x10) + 0x40) + (iVar2 + -1) * 0x20 + 200);
    }
    uVar1 = strcpy(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 200, a1);
    return uVar1;
}

/*
 * game_uses_get_field_a510_0fc4c4  0x8c0fc4c4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_a510_01f538
 * called by: script_get_var_value
 */
u32 game_uses_get_field_a510_0fc4c4(void) {
    int iVar1;
    u32 uVar2;

    iVar1 = get_field_a510_01f538(0x8c3dd7dc);
    if (((iVar1 == 1) || (iVar1 == 4)) || (iVar1 == 5)) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    return uVar2;
}

/*
 * game_uses_strcmp_0fc4fc  0x8c0fc4fc
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is strcmp_0faf30
 * called by: asr_switch_vocab, asr_uses_strcpy_0fbf28
 * strings: "---"
 */
u32 game_uses_strcmp_0fc4fc(u32 unused_a0, int a1) {
    u32 r6;
    u32 r7;
    int iVar1;
    int ar5_00;
    int iVar2;
    u8 auStack_18[16];

    if ((*(int *)(a1 + 0x28) != 1) && (*(int *)(a1 + 0x28) != 2)) {
        for (iVar2 = 0; iVar2 < *(int *)(a1 + 0x6c); iVar2 = iVar2 + 1) {
            ar5_00 = a1 + iVar2 * 0x68 + 0x70;
            iVar1 = strcmp_0faf30("---", ar5_00);
            if (iVar1 == 0) {
                sprintf(auStack_18, ar5_00, r6, r7, "%d");
                iVar1 = strcmp_0faf30(auStack_18, a1 + iVar2 * 0x68 + 0xb0);
                if (iVar1 == 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

/*
 * game_uses_rand_0fc5ac  0x8c0fc5ac
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: speech_update
 */
u32 game_uses_rand_0fc5ac(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;

    iVar3 = *(int *)(0x88 + a0);
    uVar1 = rand();
    iVar2 = (*(code *)(&libgcc_divide_helper_01031c))(uVar1, *(u32 *)(iVar3 + 0x28), a2, a3);
    uVar1 = game_uses_strcmp_0fb0d4(a0, iVar3 + iVar2 * 0x20 + 0x2c);
    return uVar1;
}

/*
 * game_uses_script_get_var_value_0fc608  0x8c0fc608
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is script_get_var_value
 * called by: speech_update
 */
u32 game_uses_script_get_var_value_0fc608(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;

    iVar4 = *(int *)(0x88 + a0);
    iVar1 = script_get_var_value(a0, iVar4 + 0x28, a2, a3);
    if (iVar1 < 0) {
        iVar1 = 0;
    }
    if (*(int *)(iVar4 + 0x30) <= iVar1) {
        iVar1 = *(int *)(iVar4 + 0x30) + -1;
    }
    iVar2 = script_get_var_value(a0, iVar4 + 0x2c, a2, a3);
    if (iVar2 < 0) {
        iVar2 = 0;
    }
    if (*(int *)(iVar4 + 0x34) <= iVar2) {
        iVar2 = *(int *)(iVar4 + 0x34) + -1;
    }
    uVar3 = (*(code *)(&game_uses_strcmp_0fb0d4))(a0, iVar4 + (iVar2 * *(int *)(iVar4 + 0x30) + iVar1) * 0x20 + 0x38,
                                                  a2, a3);
    return uVar3;
}

/*
 * script_cmd_if_compare  0x8c0fc69c
 * evaluates the command's comparisons (==, !=, <, <=, >, >=) and jumps to its then or else label
 * called by: speech_update
 */
u32 script_cmd_if_compare(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int unaff_r14;

    iVar4 = *(int *)(a0 + 0x88);
    for (iVar5 = 0; iVar5 < *(int *)(iVar4 + 0x68); iVar5 = iVar5 + 1) {
        unaff_r14 = 0;
        iVar6 = iVar4 + iVar5 * 0x2c;
        iVar3 = iVar6 + 0x70;
        iVar1 = script_get_var_value(a0, iVar3, a2, a3);
        if (*(char *)(iVar6 + 0x74) < '\x01') {
            iVar3 = atoi(iVar6 + 0x78);
        } else {
            iVar3 = script_get_var_value(a0, iVar6 + 0x74, a2, a3);
        }
        iVar6 = *(int *)(iVar6 + 0x6c);
        if ((iVar6 < 6) && (-1 < iVar6)) {
            switch (iVar6) {
            case 0:
                if (iVar1 == iVar3) {
                    unaff_r14 = 1;
                }
                break;
            case 1:
                if (iVar1 != iVar3) {
                    unaff_r14 = 1;
                }
                break;
            case 2:
                if (iVar1 < iVar3) {
                    unaff_r14 = 1;
                }
                break;
            case 3:
                if (iVar1 <= iVar3) {
                    unaff_r14 = 1;
                }
                break;
            case 4:
                if (iVar3 < iVar1) {
                    unaff_r14 = 1;
                }
                break;
            case 5:
                if (iVar3 <= iVar1) {
                    unaff_r14 = 1;
                }
            }
        }
        if (unaff_r14 == 0)
            break;
    }
    if (unaff_r14 == 1) {
        uVar2 = game_uses_strcmp_0fb0d4(a0, iVar4 + 0x28);
    } else {
        uVar2 = game_uses_strcmp_0fb0d4(a0, iVar4 + 0x48);
    }
    return uVar2;
}

/*
 * script_cmd_set_vars  0x8c0fc7c4
 * evaluates each assignment of the command (plain, or divided or modulo) into its variable and jumps on
 * called by: speech_update
 */
u32 script_cmd_set_vars(int a0, u32 unused_a1, u8 *a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int ar5_00;
    int ar5_01;

    iVar3 = *(int *)(a0 + 0x88);
    for (iVar4 = 0; iVar4 < *(int *)(iVar3 + 0x48); iVar4 = iVar4 + 1) {
        iVar5 = iVar3 + iVar4 * 0x2c;
        ar5_00 = iVar5 + 0x4c;
        if (*(char *)(iVar5 + 0x74) == '\0') {
            strcpy(&stack0xffffffc8, iVar5 + 0x54);
        } else {
            a2 = &stack0xffffffc8;
            game_copy_0fd764(a0, iVar5 + 0x74, &stack0xffffffc8, a3);
        }
        if (*(int *)(iVar5 + 0x50) == 0) {
            a2 = &stack0xffffffc8;
            script_set_var_value(a0, ar5_00, &stack0xffffffc8, a3);
        } else {
            ar5_01 = ar5_00;
            uVar1 = script_get_var_value(a0, ar5_00, a2, a3);
            iVar2 = atoi(&stack0xffffffc8);
            iVar5 = *(int *)(iVar5 + 0x50);
            if ((iVar5 < 6) && (0 < iVar5)) {
                switch (iVar5) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    ar5_01 = iVar2;
                    if (iVar2 < 0) {
                        ar5_01 = 1;
                    }
                    libgcc_divide_helper_0101e4(uVar1, ar5_01);
                    break;
                case 5:
                    ar5_01 = iVar2;
                    if (iVar2 < 0) {
                        ar5_01 = 1;
                    }
                    libgcc_divide_helper_01031c(uVar1, ar5_01, a2);
                }
            }
            sprintf(&stack0xffffffc8, ar5_01, a2, a3, &g_8c141e10);
            a2 = &stack0xffffffc8;
            script_set_var_value(a0, ar5_00, &stack0xffffffc8, a3);
        }
    }
    uVar1 = game_uses_strcmp_0fb0d4(a0, iVar3 + 0x28);
    return uVar1;
}

/*
 * script_set_var_value  0x8c0fc94c
 * stores string value a2 into the script variable named by the letter at a1, clamping or applying it to game state
 * called by: asr_uses_strcpy_0fbf28, script_cmd_load_pack_wait, script_cmd_set_vars
 */
u32 script_set_var_value(int a0, char *a1, char *a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;
    u8 *ar5_00;
    char *ar6_00;
    u8 auStack_34[2];
    u8 uStack_32;
    u8 uStack_31;
    u8 uStack_30;
    u8 uStack_2f;
    u8 uStack_2e;
    u8 auStack_2a[4];
    u8 uStack_26;
    u8 uStack_25;
    u8 uStack_24;

    iVar4 = (int)*a1;
    if (iVar4 < 0x4a) {
        if (0x48 < iVar4) {
            *(u32 *)(*(int *)(a0 + 0x10) + 8) = 1;
            return 1;
        }
        if ((iVar4 < 0x44) && (0x40 < iVar4)) {
            if (iVar4 == 0x41) {
                return 0x41;
            }
            if (iVar4 == 0x43) {
                iVar4 = atoi(a2);
                if (8 < iVar4) {
                    return 8;
                }
                if (iVar4 < 1) {
                    return 1;
                }
                switch (iVar4) {
                case 1:
                    *(int *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb4) = iVar4;
                    return 0xb4;
                }
                *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb0) = 1;
                iVar4 = *(int *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb0);
                if (iVar4 != 1) {
                    return iVar4;
                }
                *(u32 *)(a0 + 0xbc) = 600;
                uVar3 = game_calc_0fda5c(a0, a1, a2, a3);
                return uVar3;
            }
        }
    } else if (iVar4 < 0x57) {
        if (0x4a < iVar4) {
            switch (iVar4) {
            case 0x4b:
                uVar3 = atoi(a2);
                uVar3 = set_field_68_clamp_0_4(*(u32 *)(*(int *)(a0 + 0x10) + 0x40), uVar3);
                return uVar3;
            case 0x50:
                return (&switchD_8c0fc9ba::switchdataD_8c0fc9c0)[iVar4 + -0x4b];
            case 0x52:
                uVar3 = atoi(a2);
                uVar3 = save_clear_entries_from(a0, uVar3);
                return uVar3;
            case 0x55:
                uVar3 = atoi(a2);
                *(u32 *)(a0 + 0xc0) = uVar3;
                uVar3 = game_uses_set_fields_24_20_0fd8d0(a0, a1, a2, a3);
                return uVar3;
            case 0x56:
                uVar3 = atoi(a2);
                *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x70) = uVar3;
                return 0x70;
            }
        }
    } else if (iVar4 == 100) {
        rtc_get_date(auStack_2a, a1, a2, a3);
        uStack_26 = 0;
        uStack_25 = 0;
        uStack_24 = 0;
        rtc_get_date(auStack_34, a1, a2, a3);
        uVar3 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0xc0);
        uStack_32 = (u8)uVar3;
        uVar3 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0xc4);
        uStack_31 = (u8)uVar3;
        uStack_30 = 0;
        uStack_2f = 0;
        uStack_2e = 0;
        atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0xbc);
        ar5_00 = auStack_34;
        rtc_date_compare(auStack_2a, ar5_00, a2);
        uVar3 = sprintf(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0x1c4, ar5_00, a2, a3, &g_8c141e10);
        return uVar3;
    }
    ar6_00 = a2;
    iVar4 = atoi(a1);
    iVar1 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + iVar4 * 4 + 0x10);
    if (*a2 == '+') {
        iVar2 = atoi(a2 + 1);
        iVar1 = iVar1 + iVar2;
    } else if (*a2 == '-') {
        iVar2 = atoi(a2 + 1);
        iVar1 = iVar1 - iVar2;
    } else {
        iVar1 = atoi(a2);
    }
    if (999 < iVar1) {
        iVar1 = 999;
    }
    if (iVar1 < 0) {
        iVar1 = 0;
    }
    if (((iVar4 == 6) && (iVar2 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0x28), iVar2 == iVar1)) && (0 < iVar2)) {
        *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x70) = 0x11;
    }
    uVar3 = sprintf(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + iVar4 * 4 + 0x10, a1, ar6_00, a3, &g_8c141e10);
    return uVar3;
}

/*
 * script_get_var_value  0x8c0fcd2c
 * returns the value of the script variable named by the letter at a1 ('A'..'s'), some computed from the clock or game
 * state called by: game_copy_0fd764, game_uses_script_get_var_value_0fc608, script_cmd_if_compare, script_cmd_set_vars,
 * talk_pick_grunt
 */
u32 script_get_var_value(int a0, char *a1, u32 a2, u32 a3) {
    char cVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    int iVar6;
    u8 *ar5_00;
    u32 uVar7;
    int iStack_30;
    u8 auStack_2c[2];
    u8 bStack_2a;
    u8 bStack_29;
    u8 uStack_28;
    u8 uStack_27;
    u8 uStack_26;
    u16 uStack_22;
    u8 bStack_20;
    u8 bStack_1f;
    u8 bStack_1e;
    u8 bStack_1d;
    u8 uStack_1c;
    u8 bStack_1b;
    u8 bStack_1a;

    uVar7 = 0;
    iVar6 = (int)*a1;
    if ((iVar6 < 0x74) && (0x40 < iVar6)) {
        switch (iVar6) {
        case 0x41:
        case 0x4f:
        case 0x50:
        case 0x67:
        case 0x68:
            break;
        case 0x42:
            uVar7 = *(u32 *)(*(int *)(a0 + 0x10) + 0x18);
            break;
        case 0x43:
            if ((*(int *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb0) == 1) && (*(int *)(a0 + 0xbc) < 1)) {
                *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb0) = 0;
            }
            iVar6 = *(int *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xb0);
            if (iVar6 == 0) {
                uVar7 = 0;
                *(u32 *)(a0 + 0xbc) = 0;
            } else if (iVar6 == 1) {
                uVar7 = 2;
            }
            break;
        case 0x44:
            rtc_get_date(&uStack_22, a1, a2, a3);
            uVar7 = (u32)bStack_1f;
            break;
        case 0x45:
            uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x7c);
            break;
        case 0x46:
            uVar7 = *(u32 *)(*(int *)(a0 + 0x10) + 0x1c);
            break;
        case 0x47:
            rtc_get_date(&uStack_22, a1, a2, a3);
            uVar7 = (u32)bStack_1a;
            break;
        case 0x48:
            rtc_get_date(&uStack_22, a1, a2, a3);
            uVar7 = (u32)bStack_1e;
            break;
        default:
            goto switchD_8c0fcd62_caseD_49;
        case 0x4b:
            uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x68);
            break;
        case 0x4c:
            uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x60);
            break;
        case 0x4d:
            rtc_get_date(&uStack_22, a1, a2, a3);
            uVar7 = (u32)bStack_20;
            break;
        case 0x4e:
            rtc_get_date(&uStack_22, a1, a2, a3);
            uVar7 = (u32)bStack_1d;
            break;
        case 0x51:
            rtc_get_date(&uStack_22, a1, a2, a3);
            iVar6 = libgcc_divide_helper_01031c(uStack_22 - 0x7a8, 0xc, a2);
            if ((iVar6 < 0xc) && (-1 < iVar6)) {
                switch (iVar6) {
                case 0:
                    uVar7 = 0;
                    break;
                case 1:
                    uVar7 = 0xb;
                    break;
                case 2:
                    uVar7 = 10;
                    break;
                case 3:
                    uVar7 = 9;
                    break;
                case 4:
                    uVar7 = 8;
                    break;
                case 5:
                    uVar7 = 7;
                    break;
                case 6:
                    uVar7 = 6;
                    break;
                case 7:
                    uVar7 = 5;
                    break;
                case 8:
                    uVar7 = 4;
                    break;
                case 9:
                    uVar7 = 3;
                    break;
                case 10:
                    uVar7 = 2;
                    break;
                case 0xb:
                    uVar7 = 1;
                }
            }
            break;
        case 0x52:
            if (*(char *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 200) != '\0') {
                iVar6 = 1;
                while (
                    (iVar6 < 0x10 && (iVar2 = strcmp_0faf30(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 200,
                                                            *(int *)(*(int *)(a0 + 0x10) + 0x40) + iVar6 * 0x20 + 200),
                                      iVar2 == 0))) {
                    uVar7 = uVar7 + 1;
                    iVar6 = iVar6 + 1;
                }
            }
            break;
        case 0x53:
            rtc_get_date(&uStack_22, rtc_get_date, a2, a3);
            uVar3 = (u32)uStack_22;
            iVar6 = libgcc_divide_helper_01031c(uVar3, 4, a2);
            if (iVar6 == 0) {
                uVar7 = 1;
                iVar6 = libgcc_divide_helper_01031c(uVar3, 100, a2);
                if (iVar6 == 0) {
                    uVar5 = libgcc_divide_helper_0101e4(uVar3, 100);
                    iVar6 = libgcc_divide_helper_01031c(uVar5, 4, a2);
                    if (iVar6 != 0) {
                        uVar7 = 0;
                    }
                }
            }
            break;
        case 0x54:
            if (*(char *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 200) != '\0') {
                for (iVar6 = 1; iVar6 < 0x10; iVar6 = iVar6 + 1) {
                    iVar2 = strcmp_0faf30(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 200,
                                          *(int *)(*(int *)(a0 + 0x10) + 0x40) + iVar6 * 0x20 + 200);
                    if (iVar2 == 0) {
                        uVar7 = uVar7 + 1;
                    }
                }
            }
            break;
        case 0x55:
            game_uses_set_fields_24_20_0fd8d0(a0, a1, a2, a3);
            uVar7 = *(u32 *)(a0 + 0xc0);
            break;
        case 0x57:
            rtc_get_date(&uStack_22, a1, a2, a3);
            uVar7 = (u32)bStack_1b;
            break;
        case 0x58:
            rtc_get_date(&uStack_22, a1, a2, a3);
            if (*(char *)(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0xac) != '\0') {
                uVar3 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0xac);
                if (uVar3 == bStack_1b) {
                    return 2;
                }
                uVar4 = bStack_1b + 1;
                if (6 < uVar4) {
                    uVar4 = 0;
                }
                if (uVar3 == uVar4) {
                    uVar7 = 1;
                }
            }
            if (*(char *)(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0xb0) != '\0') {
                uVar3 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0xb0);
                if (uVar3 == bStack_1b) {
                    return 2;
                }
                uVar4 = bStack_1b + 1;
                if (6 < uVar4) {
                    uVar4 = 0;
                }
                if (uVar3 == uVar4) {
                    uVar7 = 1;
                }
            }
            break;
        case 0x59:
            rtc_get_date(&uStack_22, a1, a2, a3);
            uVar7 = uStack_22 - 0x7ce;
            if ((int)uVar7 < 0) {
                uVar7 = 0;
            }
            break;
        case 0x5a:
            uVar7 = *(u32 *)(*(int *)(a0 + 0x10) + 0x20);
            break;
        case 0x61:
            uVar7 = *(u32 *)(*(int *)(a0 + 0x10) + 0x28);
            break;
        case 0x62:
            uVar7 = *(u32 *)(*(int *)(a0 + 0x10) + 0x2c);
            break;
        case 99:
            uVar7 = *(u32 *)(*(int *)(a0 + 0x10) + 0x24);
            break;
        case 100:
            rtc_get_date(&uStack_22, a1, a2, a3);
            bStack_1e = 0;
            bStack_1d = 0;
            uStack_1c = 0;
            rtc_get_date(auStack_2c, a1, a2, a3);
            uVar5 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0xc0);
            bStack_2a = (u8)uVar5;
            uVar5 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0xc4);
            bStack_29 = (u8)uVar5;
            uStack_28 = 0;
            uStack_27 = 0;
            uStack_26 = 0;
            ar5_00 = auStack_2c;
            rtc_date_compare(&uStack_22, ar5_00, a2);
            if ((bStack_2a != '\0') && (bStack_29 != '\0')) {
                atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0x1c4);
                ar5_00 = *(u8 **)(*(int *)(a0 + 0x10) + 0x3c);
                sprintf(ar5_00 + 0xbc, ar5_00, a2, a3, &g_8c141e10);
            }
            rtc_get_date(&uStack_22, ar5_00, a2, a3);
            bStack_1e = 0xc;
            bStack_1d = 0;
            uStack_1c = 0;
            rtc_get_date(auStack_2c, ar5_00, a2, a3);
            uVar5 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0x10);
            bStack_2a = (u8)uVar5;
            uVar5 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0x14);
            bStack_29 = (u8)uVar5;
            uStack_28 = 0xc;
            uStack_27 = 0;
            uStack_26 = 0;
            if ((bStack_2a == 0) || (bStack_29 == 0)) {
                return 0;
            }
            iVar6 = rtc_date_compare(&uStack_22, auStack_2c, a2);
            if (iVar6 == 0) {
                return 2;
            }
            date_to_rtc_seconds(&uStack_22, &iStack_30, a2);
            iStack_30 = iStack_30 + 0x15180;
            rtc_seconds_to_date(iStack_30, &uStack_22);
            if ((bStack_2a == bStack_20) && (bStack_29 == bStack_1f)) {
                return 1;
            }
            break;
        case 0x65:
            iVar6 = (int)a1[1];
            if ((iVar6 < 0x6a) && (0x60 < iVar6)) {
                switch (iVar6) {
                case 0x61:
                    uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x80);
                    break;
                case 0x62:
                    uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x84);
                    break;
                case 99:
                    uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x88);
                    break;
                case 100:
                    uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x8c);
                    break;
                case 0x65:
                    uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x90);
                    break;
                case 0x66:
                    uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0x94);
                    break;
                case 0x67:
                    uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xa0);
                    break;
                case 0x68:
                    uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xa4);
                    break;
                case 0x69:
                    uVar7 = *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xac);
                }
            }
            break;
        case 0x69:
            if (*(int *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 100) < 1) {
                if (*(int *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 0xc0) < 900) {
                    uVar7 = 0;
                } else {
                    uVar7 = 2;
                }
            } else {
                uVar7 = 1;
            }
            break;
        case 0x6c:
            uVar7 = *(u32 *)(*(int *)(a0 + 0x10) + 0x34);
            break;
        case 0x6d:
            uVar7 = game_uses_get_field_a510_0fc4c4();
            break;
        case 0x6e:
            uVar7 = 0;
            if ((0 < **(int **)(*(int *)(a0 + 0x10) + 0x3c)) &&
                (*(int *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 100) == **(int **)(*(int *)(a0 + 0x10) + 0x3c))) {
                uVar7 = 1;
            }
            break;
        case 0x73:
            cVar1 = a1[1];
            if (cVar1 == 'd') {
                uVar7 = (u32) * (u8 *)(*(int *)(a0 + 0x10) + 0xf);
            } else if (cVar1 == 'm') {
                uVar7 = (u32) * (u8 *)(*(int *)(a0 + 0x10) + 0xe);
            } else if (cVar1 == 'y') {
                uVar7 = *(u16 *)(*(int *)(a0 + 0x10) + 0xc) - 1999;
                if ((int)uVar7 < 0) {
                    uVar7 = 0;
                }
                if (6 < (int)uVar7) {
                    uVar7 = 0;
                }
            }
        }
    } else {
    switchD_8c0fcd62_caseD_49:
        iVar6 = atoi(a1);
        if (iVar6 < 0) {
            iVar6 = 0;
        }
        uVar7 = atoi(*(int *)(*(int *)(a0 + 0x10) + 0x3c) + iVar6 * 4 + 0x10);
    }
    return uVar7;
}

/*
 * game_copy_0fd764  0x8c0fd764
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: script_cmd_set_vars
 */
u32 game_copy_0fd764(int a0, char *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    iVar2 = (int)*a1;
    if ((iVar2 < 0x74) && (0x40 < iVar2)) {
        switch (iVar2) {
        default:
            uVar1 = a2;
            script_get_var_value(a0, a1, a2, a3);
            uVar1 = sprintf(a2, a1, uVar1, a3, &g_8c141e10);
            return uVar1;
        case 0x49:
            break;
        }
    }
    uVar1 = a2;
    iVar2 = atoi(a1);
    uVar1 = strcpy(a2, *(int *)(*(int *)(a0 + 0x10) + 0x3c) + iVar2 * 4 + 0x10);
    return uVar1;
}

/*
 * game_uses_set_fields_24_20_0fd8d0  0x8c0fd8d0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_fields_24_20
 * called by: script_get_var_value, script_set_var_value, speech_release_pack_entry
 */
int game_uses_set_fields_24_20_0fd8d0(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    u8 auStack_94[8];
    int iStack_8c;

    if ((*(int *)(0xb0 + a0) == 1) || (*(int *)(0xc0 + a0) == 0)) {
        if (*(int *)(a0 + 4) == 0) {
            return 0;
        }
        *(u32 *)(a0 + 4) = 3;
    }
    iVar1 = *(int *)(a0 + 4);
    if (iVar1 == 0) {
        iVar2 = game_calc_01d754(*(u32 *)(a0 + 8));
        iVar1 = 0xc0;
        if (iVar2 == 0) {
            *(u32 *)(0xc0 + a0) = 0;
        } else {
            iVar1 = 1;
            *(u32 *)(a0 + 4) = 1;
        }
    } else if (iVar1 == 1) {
        *(u32 *)(0xc0 + a0) = 2;
        game_save_01bcf4(*(u32 *)(a0 + 0xc), unused_a1, a2, a3);
        game_save_01bd88(*(u32 *)(a0 + 0xc), unused_a1, a2, a3);
        set_fields_24_20(*(u32 *)(a0 + 0xc), (&DATA_8c140bd0));
        *(u32 *)(0xb8 + a0) = 0x12c;
        iVar1 = 2;
        *(u32 *)(a0 + 4) = 2;
    } else if (iVar1 == 2) {
        game_copy_01d684(*(u32 *)(a0 + 8), auStack_94, a2, a3);
        if (iStack_8c != 0) {
            if (iStack_8c == 2) {
                *(u32 *)(0xc0 + a0) = 3;
                *(u32 *)(a0 + 4) = 1;
                return 1;
            }
            if (iStack_8c != 3) {
                *(u32 *)(0xc0 + a0) = 4;
                if (0 < *(int *)(0xb8 + a0)) {
                    return *(int *)(0xb8 + a0);
                }
                *(u32 *)(0xc0 + a0) = 5;
                *(u32 *)(a0 + 4) = 1;
                return 1;
            }
            *(u32 *)(0xc0 + a0) = 6;
            piVar3 = *(int **)(*(int *)(a0 + 0x10) + 0x3c);
            *piVar3 = *piVar3 + 1;
            *(u32 *)(*(int *)(*(int *)(a0 + 0x10) + 0x40) + 100) = **(u32 **)(*(int *)(a0 + 0x10) + 0x3c);
        }
        iVar1 = 3;
        *(u32 *)(a0 + 4) = 3;
    } else if (iVar1 == 3) {
        *(u32 *)(0xc0 + a0) = 0;
        game_calc_01d8a0(*(u32 *)(a0 + 8));
        game_calc_0fda5c(a0, unused_a1, a2, a3);
        iVar1 = 0;
        *(u32 *)(a0 + 4) = 0;
    }
    return iVar1;
}

/*
 * save_clear_entries_from  0x8c0fda28
 * clears byte +0xc8 of save-record entries a1..15 (0x20 bytes each)
 * called by: script_set_var_value, speech_start_chapter
 */
u32 save_clear_entries_from(int a0, int a1) {
    for (; a1 < 0x10; a1 = a1 + 1) {
        *(u8 *)(0xc8 + *(int *)(*(int *)(a0 + 0x10) + 0x40) + a1 * 0x20) = 0;
    }
    return 0x10;
}

/*
 * game_calc_0fda5c  0x8c0fda5c
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 * called by: game_uses_set_fields_24_20_0fd8d0, script_set_var_value, speech_release_0fa9fc, speech_update
 */
u32 game_calc_0fda5c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&set_fields_24_20))(*(u32 *)(a0 + 0xc), *(u32 *)(0xc4 + a0), a2, a3);
    return uVar1;
}

/*
 * memset_on_field_d0  0x8c0fda80
 * calls memset on the member at +0xd0
 * called by: speech_start, speech_uses_rtc_get_date_0fa83c
 */
u32 memset_on_field_d0(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;

    uVar1 = memset(a0 + 0xd0, 0, 0x88001);
    return uVar1;
}

/*
 * save_slot_store_if_changed  0x8c0fdaac
 * when the current names (+0x14, +0x5c, a1) differ from the selected 0x880-byte slot's, copies the four names and the
 * 0x800-byte data block into it called by: asr_uses_strcpy_0fbf28
 */
u32 save_slot_store_if_changed(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 uVar3;

    uVar1 = (u32) * (u8 *)(a0 + 0xd0);
    iVar2 = strcmp_0faf30(uVar1 * 0x880 + a0 + 0x8d1, a0 + 0x14);
    if (((iVar2 != 0) || (iVar2 = strcmp_0faf30(uVar1 * 0x880 + a0 + 0x911, a0 + 0x5c), iVar2 != 0)) ||
        (iVar2 = strcmp_0faf30(uVar1 * 0x880 + a0 + 0x931, a1), uVar3 = 0, iVar2 != 0)) {
        uVar1 = (u32) * (u8 *)(a0 + 0xd0);
        strcpy(uVar1 * 0x880 + a0 + 0x8d1, a0 + 0x14);
        strcpy(uVar1 * 0x880 + a0 + 0x8f1, a0 + 0x3c);
        strcpy(uVar1 * 0x880 + a0 + 0x911, a0 + 0x5c);
        strcpy(uVar1 * 0x880 + a0 + 0x931, a1);
        uVar3 = memmove_bytes(uVar1 * 0x880 + a0 + 0xd1, *(int *)(*(int *)(a0 + 0x10) + 0x3c) + 0x10, 0x800);
    }
    return uVar3;
}

/*
 * game_copy_0fdc20  0x8c0fdc20
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: SaveData_ctor, tex_copy_0f7f78
 */
u32 *game_copy_0fdc20(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    *a0 = 0;
    a0[1] = 0;
    a0[2] = 0xffffffff;
    iVar1 = 0;
    while (iVar2 = iVar1, iVar2 < 0x400) {
        *(u8 *)(a0 + iVar2 + 4) = 0;
        iVar1 = iVar2 + 1;
    }
    strcpy(a0 + 0x2b, &g_8c141e2a);
    strcpy(a0 + 0x2c, &g_8c141e2c);
    return a0;
}

/*
 * game_fill_loop_0fdc98  0x8c0fdc98
 * area name: game code; nothing names its area yet; behaviour name: a loop that writes memory
 * called by: static_init_vec3s_286e20, talk_history_reset
 */
u8 *game_fill_loop_0fdc98(u8 *a0) {
    int iVar1;

    *a0 = 0;
    a0[0x20] = 0;
    a0[0x40] = 0;
    *(u32 *)(a0 + 0x60) = 0;
    *(u32 *)(a0 + 100) = 0;
    *(u32 *)(a0 + 0x68) = 0;
    *(u32 *)(a0 + 0x6c) = 0;
    *(u32 *)(a0 + 0x70) = 0;
    *(u32 *)(a0 + 0x74) = 0;
    *(u32 *)(a0 + 0x78) = 0;
    *(u32 *)(a0 + 0x7c) = 7;
    for (iVar1 = 0; iVar1 < 0xc; iVar1 = iVar1 + 1) {
        *(u32 *)(a0 + 0x80 + iVar1 * 4) = 0;
    }
    *(u32 *)(a0 + 0xb0) = 0;
    *(u32 *)(a0 + 0xb4) = 0;
    *(u32 *)(a0 + 0xb8) = 0;
    *(u32 *)(a0 + 0xbc) = 0;
    *(u32 *)(a0 + 0xc0) = 0;
    *(u32 *)(a0 + 0xc4) = 0;
    for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
        a0[0xc8 + iVar1 * 0x20] = 0;
    }
    return a0;
}

/*
 * set_field_68_clamp_0_4_wrap  0x8c0fdd68
 * only calls set_field_68_clamp_0_4
 * called by: FrogMan_react_touch, Higyo_react_touch, asr_uses_strcpy_0fbf28
 */
u32 set_field_68_clamp_0_4_wrap(int a0, int a1) {
    u32 uVar1;

    uVar1 = set_field_68_clamp_0_4(a0, *(int *)(a0 + 0x68) + a1);
    return uVar1;
}

/*
 * set_field_68_clamp_0_4  0x8c0fdd98
 * stores a1 at +0x68, clamped to 0..4
 * called by: script_set_var_value, set_field_68_clamp_0_4_wrap
 */
u32 set_field_68_clamp_0_4(int a0, u32 a1) {
    u32 uVar1;

    *(u32 *)(a0 + 0x68) = a1;
    if (*(int *)(a0 + 0x68) < 0) {
        *(u32 *)(a0 + 0x68) = 0;
    }
    uVar1 = 4;
    if (4 < *(int *)(a0 + 0x68)) {
        uVar1 = 0x68;
        *(u32 *)(a0 + 0x68) = 4;
    }
    return uVar1;
}

/*
 * game_uses_set_fields_4_0_0fddc4  0x8c0fddc4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_fields_4_0
 * called by: game_uses_set_fields_4_0_0feaec, named_list_ctor_0c
 */
int game_uses_set_fields_4_0_0fddc4(int a0) {
    set_fields_4_0(a0);
    *(u32 *)(a0 + 8) = 0;
    return a0;
}

/*
 * game_vec_0fdde4  0x8c0fdde4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_vec_0feb98, named_list_ctor_58
 */
int game_vec_0fdde4(int a0, u32 a1, u32 a2) {
    char cVar1;

    cVar1 = '\0';
    set_fields_4_0(a0);
    Vec3_ctor_zero(a0 + 8, a1, a2);
    Vec3_ctor_zero(a0 + 0x18, a1, a2);
    Class_12984c_ctor(a0 + 0x2c);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x28) = 0x40400000;
    } else {
        *(u64 *)(a0 + 0x28) = 0x4f222fe640400000;
    }
    return a0;
}

/*
 * game_uses_set_fields_4_0_0fde34  0x8c0fde34
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_fields_4_0
 * called by: game_uses_set_fields_4_0_0fec60, named_list_ctor_14
 */
int game_uses_set_fields_4_0_0fde34(int a0) {
    set_fields_4_0(a0);
    *(u32 *)(a0 + 8) = 0;
    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    return a0;
}

/*
 * named_list_ctor_170  0x8c0fde5c
 * sets up the head nodes at +0 and +0x170 as an empty list, copies up to 29 characters of the name a1 to +0x2e0 and
 * zeroes the count (+0x300) called by: named_list_ctor_170_wrap
 */
int named_list_ctor_170(int a0, u32 a1, u32 a2) {
    u32 ar6_00;
    u32 ar5_00;
    int ar5_01;

    ar5_00 = a1;
    Class_12c1f0_ctor(a0, a1, a2);
    Class_12c1f0_ctor(a0 + 0x170, ar5_00, a2);
    set_field_0_0fdf10(a0, a0 + 0x170);
    ar5_01 = a0;
    set_field_4_0fdf08(a0 + 0x170, a0);
    ar6_00 = log_message(a1, ar5_01, a2);
    if (0x1d < ar6_00) {
        ar6_00 = 0x1d;
    }
    strncpy(a0 + 0x2e0, a1, ar6_00);
    *(u8 *)(a0 + ar6_00 + 0x2e1) = 0;
    *(u32 *)(a0 + 0x300) = 0;
    return a0;
}

/*
 * set_field_4_0fdf08  0x8c0fdf08
 * called by: CItemGLoadRequestList_TakeOu, CItemGLoader_uses_set_field_0_0feab8, CItemList_TakeOutItem,
 * CNodePtrList_TakeOutItem, CWaterSnowList_TakeOut, game_uses_set_field_0_0fe4c4, game_uses_set_field_0_0fe7f4,
 * list_append_58 (+7 more)
 */
u32 set_field_4_0fdf08(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 4) = a1;
    return in_r0;
}

/*
 * set_field_0_0fdf10  0x8c0fdf10
 * called by: CItemGLoadRequestList_TakeOu, CItemGLoader_uses_set_field_0_0feab8, CItemList_TakeOutItem,
 * CNodePtrList_TakeOutItem, CWaterSnowList_TakeOut, game_uses_set_field_0_0fe4c4, game_uses_set_field_0_0fe7f4,
 * list_append_58 (+7 more)
 */
u32 set_field_0_0fdf10(u32 *a0, u32 a1) {
    u32 in_r0;

    *a0 = a1;
    return in_r0;
}

/*
 * Class_12bb08_uses_Class_12c1f0_m0_0fdf18  0x8c0fdf18
 * area name: only called from Class_12bb08 methods; behaviour name: its main named callee is Class_12c1f0_m0_0f4108
 * called by: Class_12bb08_dtor
 */
int Class_12bb08_uses_Class_12c1f0_m0_0fdf18(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 *)(a0 + 0x2e0) = 0;
        Class_12c1f0_m0_0f4108(a0 + 0x170, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Class_12c1f0_m0_0f4108(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * list_append_at_170  0x8c0fdf74
 * links node a1 in at the tail of the list at a0+0x170 and bumps the count at +0x300
 * called by: CEnv_AddItem
 */
int list_append_at_170(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    uVar1 = get_field_4_0dac48(a0 + 0x170);
    set_field_4_0fdf08(a1, uVar1);
    uVar2 = get_field_4_0dac48(a1);
    uVar1 = list_node_next(uVar2);
    set_field_0_0fdf10(a1, uVar1);
    uVar2 = get_field_4_0dac48(a1);
    uVar1 = a1;
    set_field_0_0fdf10(uVar2, a1);
    uVar1 = list_node_next(a1);
    set_field_4_0fdf08(uVar1, a1);
    *(int *)(a0 + 0x300) = *(int *)(a0 + 0x300) + 1;
    return a0;
}

/*
 * CItemList_TakeOutItem  0x8c0fe018
 * called by: CEnv_take_out_item
 * strings: "Item pointer is NULL:CItemList::TakeOutIte&"; "Item pointer is NULL.."; "CItemList::TakeOutItem()"
 */
int CItemList_TakeOutItem(int a0, int a1) {
    u32 uVar1;
    u32 uVar2;

    if (*(int *)(a0 + 0x300) != 0) {
        if (a1 == 0) {
            noop_102824("Item pointer is NULL:CItemList::TakeOutIte&", 0, 0, 0xd);
            report_error_message("Item pointer is NULL..", "CItemList::TakeOutItem()", 1, 2);
        } else {
            uVar1 = list_node_next(a1);
            uVar2 = get_field_4_0dac48(a1);
            set_field_4_0fdf08(uVar1, uVar2);
            uVar1 = get_field_4_0dac48(a1);
            uVar2 = list_node_next(a1);
            set_field_0_0fdf10(uVar1, uVar2);
            set_field_4_0fdf08(a1, 0);
            set_field_0_0fdf10(a1, 0);
            *(int *)(a0 + 0x300) = *(int *)(a0 + 0x300) + -1;
        }
    }
    return a0;
}

/*
 * CItemList_DeleteItem  0x8c0fe108
 * strings: "Invalid Item number :CItemList::GetImtePtr()"; "Invalid Item number"; "CItemList::DeleteItem()"
 */
u32 CItemList_DeleteItem(int a0, int a1) {
    u32 ar4_00;
    int iVar1;
    ar4_00 = list_node_next(a0);
    if ((a1 < 0) || (*(int *)(a0 + 0x300) < a1)) {
        noop_102824("Invalid Item number :CItemList::GetImtePtr()", 0, 0, 0xd);
        report_error_message("Invalid Item number", "CItemList::DeleteItem()", 1, 2);
        ar4_00 = 0;
    } else {
        for (iVar1 = 0; iVar1 < a1; iVar1 = iVar1 + 1) {
            ar4_00 = list_node_next(ar4_00);
        }
    }
    return ar4_00;
}

/*
 * named_list_ctor_0c  0x8c0fe1b8
 * sets up the head nodes at +0 and +0xc as an empty list, copies up to 29 characters of the name a1 to +0x18 and zeroes
 * the count (+0x38) called by: named_list_ctor_0c_wrap
 */
int named_list_ctor_0c(int a0, u32 a1, u32 a2) {
    u32 ar6_00;
    int ar5_01;
    game_uses_set_fields_4_0_0fddc4(a0);
    game_uses_set_fields_4_0_0fddc4(a0 + 0xc);
    set_field_0_0fdf10(a0, a0 + 0xc);
    ar5_01 = a0;
    set_field_4_0fdf08(a0 + 0xc, a0);
    ar6_00 = log_message(a1, ar5_01, a2);
    if (0x1d < ar6_00) {
        ar6_00 = 0x1d;
    }
    strncpy(a0 + 0x18, a1, ar6_00);
    *(u8 *)(a0 + ar6_00 + 0x19) = 0;
    *(u32 *)(a0 + 0x38) = 0;
    return a0;
}

/*
 * game_release_0fe250  0x8c0fe250
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 */
int game_release_0fe250(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 *)(a0 + 0x18) = 0;
        Class_12bb08_release_0da170(a0 + 0xc, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Class_12bb08_release_0da170(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * list_append_at_0c  0x8c0fe2a0
 * links node a1 in before the head sentinel of the list at a0+0xc (tail insert) and bumps the count at +0x38
 * called by: CEnv_AddItem
 */
int list_append_at_0c(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    uVar1 = get_field_4_0dac48(a0 + 0xc);
    set_field_4_0fdf08(a1, uVar1);
    uVar2 = get_field_4_0dac48(a1);
    uVar1 = list_node_next(uVar2);
    set_field_0_0fdf10(a1, uVar1);
    uVar2 = get_field_4_0dac48(a1);
    uVar1 = a1;
    set_field_0_0fdf10(uVar2, a1);
    uVar1 = list_node_next(a1);
    set_field_4_0fdf08(uVar1, a1);
    *(int *)(a0 + 0x38) = *(int *)(a0 + 0x38) + 1;
    return a0;
}

/*
 * CNodePtrList_TakeOutItem  0x8c0fe334
 * strings: "Item pointer is NULL:CNodePtrList::TakeOutIte&"; "Item pointer is NULL.."; "CNodePtrList::TakeOutItem()"
 */
int CNodePtrList_TakeOutItem(int a0, int a1) {
    u32 uVar1;
    u32 uVar2;

    if (*(int *)(a0 + 0x38) != 0) {
        if (a1 == 0) {
            noop_102824("Item pointer is NULL:CNodePtrList::TakeOutIte&", 0, 0, 0xd);
            report_error_message("Item pointer is NULL..", "CNodePtrList::TakeOutItem()", 1, 2);
        } else {
            uVar1 = list_node_next(a1);
            uVar2 = get_field_4_0dac48(a1);
            set_field_4_0fdf08(uVar1, uVar2);
            uVar1 = get_field_4_0dac48(a1);
            uVar2 = list_node_next(a1);
            set_field_0_0fdf10(uVar1, uVar2);
            set_field_4_0fdf08(a1, 0);
            set_field_0_0fdf10(a1, 0);
            *(int *)(a0 + 0x38) = *(int *)(a0 + 0x38) + -1;
        }
    }
    return a0;
}

/*
 * CNodePtrList_DeleteItem  0x8c0fe41c
 * strings: "Invalid Item number :CNodePtrList::GetImtePtr()"; "Invalid Item number"; "CNodePtrList::DeleteItem()"
 */
u32 CNodePtrList_DeleteItem(int a0, int a1) {
    u32 ar4_00;
    int iVar1;
    ar4_00 = list_node_next(a0);
    if ((a1 < 0) || (*(int *)(a0 + 0x38) < a1)) {
        noop_102824("Invalid Item number :CNodePtrList::GetImtePtr()", 0, 0, 0xd);
        report_error_message("Invalid Item number", "CNodePtrList::DeleteItem()", 1, 2);
        ar4_00 = 0;
    } else {
        for (iVar1 = 0; iVar1 < a1; iVar1 = iVar1 + 1) {
            ar4_00 = list_node_next(ar4_00);
        }
    }
    return ar4_00;
}

/*
 * game_uses_set_field_0_0fe4c4  0x8c0fe4c4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_field_0_0fdf10
 * called by: game_clear_node_and_item_lists
 */
u32 game_uses_set_field_0_0fe4c4(int a0) {

    set_field_0_0fdf10(a0, a0 + 0xc);
    set_field_4_0fdf08(a0 + 0xc, a0);
    *(u32 *)(a0 + 0x38) = 0;
    return 0;
}

/*
 * named_list_ctor_58  0x8c0fe4f8
 * sets up two 0x58-apart list nodes as an empty circular list, copies up to 29 characters of the name a1 to +0xb0 and
 * zeroes the count (+0xd0) called by: named_list_ctor_58_wrap
 */
int named_list_ctor_58(int a0, u32 a1, u32 a2) {
    u32 ar6_00;
    u32 ar5_00;
    int ar5_01;

    ar5_00 = a1;
    game_vec_0fdde4(a0, a1, a2);
    game_vec_0fdde4(a0 + 0x58, ar5_00, a2);
    set_field_0_0fdf10(a0, a0 + 0x58);
    ar5_01 = a0;
    set_field_4_0fdf08(a0 + 0x58, a0);
    ar6_00 = log_message(a1, ar5_01, a2);
    if (0x1d < ar6_00) {
        ar6_00 = 0x1d;
    }
    strncpy(a0 + 0xb0, a1, ar6_00);
    *(u8 *)(a0 + ar6_00 + 0xb1) = 0;
    *(u32 *)(a0 + 0xd0) = 0;
    return a0;
}

/*
 * Class_12b930_release_0fe59c  0x8c0fe59c
 * area name: only called from Class_12b930 methods; behaviour name: mostly calls release functions
 * called by: Class_12b930_destroy
 */
int Class_12b930_release_0fe59c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 *)(a0 + 0xb0) = 0;
        game_release_0c4ad0(a0 + 0x58, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        game_release_0c4ad0(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * list_append_58  0x8c0fe5f0
 * links node a1 at the tail of the ring list at +0x58 and counts it in +0xd0
 * called by: WATER_ELEMENT_CreateStage0, WATER_ELEMENT_release, WATER_ELEMETNT_Create
 */
int list_append_58(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    uVar1 = get_field_4_0dac48(a0 + 0x58);
    set_field_4_0fdf08(a1, uVar1);
    uVar2 = get_field_4_0dac48(a1);
    uVar1 = list_node_next(uVar2);
    set_field_0_0fdf10(a1, uVar1);
    uVar2 = get_field_4_0dac48(a1);
    uVar1 = a1;
    set_field_0_0fdf10(uVar2, a1);
    uVar1 = list_node_next(a1);
    set_field_4_0fdf08(uVar1, a1);
    *(int *)(a0 + 0xd0) = *(int *)(a0 + 0xd0) + 1;
    return a0;
}

/*
 * CWaterSnowList_TakeOut  0x8c0fe690
 * called by: CWaterTank_uses_CDCGD_release_type0_0d57e8, WATER_ELEMENT_release
 * strings: "POne pointer is NULL.."; "CWaterSnowList::TakeOut()"
 */
int CWaterSnowList_TakeOut(int a0, int a1) {
    u32 uVar1;
    u32 uVar2;

    if (*(int *)(a0 + 0xd0) != 0) {
        if (a1 == 0) {
            report_error_message("POne pointer is NULL..", "CWaterSnowList::TakeOut()", 1, 2);
        } else {
            uVar1 = list_node_next(a1);
            uVar2 = get_field_4_0dac48(a1);
            set_field_4_0fdf08(uVar1, uVar2);
            uVar1 = get_field_4_0dac48(a1);
            uVar2 = list_node_next(a1);
            set_field_0_0fdf10(uVar1, uVar2);
            set_field_4_0fdf08(a1, 0);
            set_field_0_0fdf10(a1, 0);
            *(int *)(a0 + 0xd0) = *(int *)(a0 + 0xd0) + -1;
        }
    }
    return a0;
}

/*
 * CWaterSnowList_GetWaterSnowO  0x8c0fe764
 * called by: CWaterTank_uses_CDCGD_release_type0_0d57e8, WATER_ELEMENT_release
 * strings: "Invalid POne number"; "CWaterSnowList::GetWaterSnowOnePtr()"
 */
u32 CWaterSnowList_GetWaterSnowO(int a0, int a1) {
    u32 ar4_00;
    int iVar1;
    ar4_00 = list_node_next(a0);
    if ((a1 < 0) || (*(int *)(0xd0 + a0) < a1)) {
        (*(code *)(&report_error_message))("Invalid POne number", "CWaterSnowList::GetWaterSnowOnePtr()", 1, 2);
        ar4_00 = 0;
    } else {
        for (iVar1 = 0; iVar1 < a1; iVar1 = iVar1 + 1) {
            ar4_00 = list_node_next(ar4_00);
        }
    }
    return ar4_00;
}

/*
 * game_uses_set_field_0_0fe7f4  0x8c0fe7f4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_field_0_0fdf10
 * called by: CWaterTank_uses_CDCGD_release_type0_0d57e8, WATER_ELEMENT_release
 */
u32 game_uses_set_field_0_0fe7f4(int a0) {

    set_field_0_0fdf10(a0, a0 + 0x58);
    set_field_4_0fdf08(a0 + 0x58, a0);
    *(u32 *)(a0 + 0xd0) = 0;
    return 0xd0;
}

/*
 * named_list_ctor_14  0x8c0fe82c
 * sets up the head nodes at +0 and +0x14 as an empty list, copies up to 29 characters of the name a1 to +0x28 and
 * zeroes the count (+0x48) called by: named_list_ctor_14_wrap
 */
int named_list_ctor_14(int a0, u32 a1, u32 a2) {
    u32 ar6_00;
    int ar5_01;
    game_uses_set_fields_4_0_0fde34(a0);
    game_uses_set_fields_4_0_0fde34(a0 + 0x14);
    set_field_0_0fdf10(a0, a0 + 0x14);
    ar5_01 = a0;
    set_field_4_0fdf08(a0 + 0x14, a0);
    ar6_00 = log_message(a1, ar5_01, a2);
    if (0x1d < ar6_00) {
        ar6_00 = 0x1d;
    }
    strncpy(a0 + 0x28, a1, ar6_00);
    *(u8 *)(a0 + ar6_00 + 0x29) = 0;
    *(u32 *)(a0 + 0x48) = 0;
    return a0;
}

/*
 * list_append_at_14  0x8c0fe8c4
 * links node a1 in at the tail of the list at a0+0x14 and bumps the count at +0x48
 * called by: CItemGLoader_RegistToLoad
 */
int list_append_at_14(int a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    uVar1 = get_field_4_0dac48(a0 + 0x14);
    set_field_4_0fdf08(a1, uVar1);
    uVar2 = get_field_4_0dac48(a1);
    uVar1 = list_node_next(uVar2);
    set_field_0_0fdf10(a1, uVar1);
    uVar2 = get_field_4_0dac48(a1);
    uVar1 = a1;
    set_field_0_0fdf10(uVar2, a1);
    uVar1 = list_node_next(a1);
    set_field_4_0fdf08(uVar1, a1);
    *(int *)(a0 + 0x48) = *(int *)(a0 + 0x48) + 1;
    return a0;
}

/*
 * CItemGLoadRequestList_TakeOu  0x8c0fe95c
 * called by: CItemGLoader_clear_requests, CItemGLoader_list_0feeb0
 * strings: "GLoad_Unit pointer is NULL.."; "CItemGLoadRequestList::TakeOut()"
 */
int CItemGLoadRequestList_TakeOu(int a0, int a1) {
    u32 uVar1;
    u32 uVar2;

    if (*(int *)(a0 + 0x48) != 0) {
        if (a1 == 0) {
            report_error_message("GLoad_Unit pointer is NULL..", "CItemGLoadRequestList::TakeOut()", 1, 2);
        } else {
            uVar1 = list_node_next(a1);
            uVar2 = get_field_4_0dac48(a1);
            set_field_4_0fdf08(uVar1, uVar2);
            uVar1 = get_field_4_0dac48(a1);
            uVar2 = list_node_next(a1);
            set_field_0_0fdf10(uVar1, uVar2);
            set_field_4_0fdf08(a1, 0);
            set_field_0_0fdf10(a1, 0);
            *(int *)(a0 + 0x48) = *(int *)(a0 + 0x48) + -1;
        }
    }
    return a0;
}

/*
 * CItemGLoadRequestList_GetPtr  0x8c0fea2c
 * strings: "Invalid Unit number"; "CItemGLoadRequestList::GetPtrOfItem()"
 */
u32 CItemGLoadRequestList_GetPtr(int a0, int a1) {
    u32 ar4_00;
    int iVar1;
    ar4_00 = list_node_next(a0);
    if ((a1 < 0) || (*(int *)(a0 + 0x48) < a1)) {
        (*(code *)(&report_error_message))("Invalid Unit number", "CItemGLoadRequestList::GetPtrOfItem()", 1, 2);
        ar4_00 = 0;
    } else {
        for (iVar1 = 0; iVar1 < a1; iVar1 = iVar1 + 1) {
            ar4_00 = list_node_next(ar4_00);
        }
    }
    return ar4_00;
}

/*
 * CItemGLoader_uses_set_field_0_0feab8  0x8c0feab8
 * area name: only called from CItemGLoader methods; behaviour name: its main named callee is set_field_0_0fdf10
 * called by: CItemGLoader_clear_requests
 */
u32 CItemGLoader_uses_set_field_0_0feab8(int a0) {

    set_field_0_0fdf10(a0, a0 + 0x14);
    set_field_4_0fdf08(a0 + 0x14, a0);
    *(u32 *)(a0 + 0x48) = 0;
    return 0x48;
}

/*
 * game_uses_set_fields_4_0_0feaec  0x8c0feaec
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: uses_set_fields_4_0
 */
int game_uses_set_fields_4_0_0feaec(int a0) {
    game_uses_set_fields_4_0_0fddc4(a0);
    *(u32 *)(a0 + 0xc) = 0;
    return a0;
}

/*
 * vec_new_array_wrap_0feb0c  0x8c0feb0c
 * only calls vec_new_array
 * called by: Class_12bb08_ctor
 */
u32 vec_new_array_wrap_0feb0c(u32 a0) {
    vec_new_array(a0, (&game_uses_set_fields_4_0_0feaec), (&Class_12bb08_release_0da130), 0x10, 0x23);
    return a0;
}

/*
 * CEnv_take_free_slot  0x8c0feb3c
 * first of 35 16-byte slots whose in-use word (+0xc) is 0; marks it used and returns it, 0 when full
 * called by: CEnv_AddItem
 */
u32 CEnv_take_free_slot(int a0) {
    int iVar1;

    iVar1 = 0;
    while (true) {
        if (0x22 < iVar1) {
            return 0;
        }
        if (*(int *)(a0 + iVar1 * 0x10 + 0xc) == 0)
            break;
        iVar1 = iVar1 + 1;
    }
    *(u32 *)(a0 + iVar1 * 0x10 + 0xc) = 1;
    return a0 + iVar1 * 0x10;
}

/*
 * game_update_fields_0feb88  0x8c0feb88
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 * called by: CEnv_take_out_item, game_clear_node_and_item_lists, item_list_remove_inactive
 */
u32 game_update_fields_0feb88(u32 unused_a0, int *a1) {
    *(u32 *)(*a1 + 0xc) = 0;
    *a1 = 0;
    return 0;
}

/*
 * game_vec_0feb98  0x8c0feb98
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
int game_vec_0feb98(int a0, u32 a1, u32 a2) {
    game_vec_0fdde4(a0, a1, a2);
    *(u32 *)(a0 + 0x58) = 0;
    return a0;
}

/*
 * vec_new_array_wrap_0febbc  0x8c0febbc
 * only calls vec_new_array
 * called by: static_init_vec3s_286e20
 */
u32 vec_new_array_wrap_0febbc(u32 a0) {
    vec_new_array(a0, (&game_vec_0feb98), (&game_release_0c4a90), 0x5c, 0x96);
    return a0;
}

/*
 * pool_5c_alloc  0x8c0febf0
 * claims a free entry of the 150 0x5c-byte entries at a0 (flag at +0x58); 0 when full
 * called by: WATER_ELEMENT_CreateStage0, WATER_ELEMENT_release, WATER_ELEMETNT_Create
 */
u32 pool_5c_alloc(int a0) {
    int iVar1;

    iVar1 = 0;
    while (true) {
        if (0x96 <= iVar1) {
            return 0;
        }
        if (*(int *)(a0 + iVar1 * 0x5c + 0x58) == 0)
            break;
        iVar1 = iVar1 + 1;
    }
    *(u32 *)(a0 + iVar1 * 0x5c + 0x58) = 1;
    return a0 + iVar1 * 0x5c;
}

/*
 * clear_link_58  0x8c0fec4c
 * clears field +0x58 of *a1, then *a1
 * called by: CWaterTank_uses_CDCGD_release_type0_0d57e8, WATER_ELEMENT_release
 */
u32 clear_link_58(u32 a0, int *a1) {
    *(u32 *)(*a1 + 0x58) = 0;
    *a1 = 0;
    return 0;
}

/*
 * game_uses_set_fields_4_0_0fec60  0x8c0fec60
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: uses_set_fields_4_0
 */
int game_uses_set_fields_4_0_0fec60(int a0) {
    game_uses_set_fields_4_0_0fde34(a0);
    *(u32 *)(a0 + 0x14) = 0;
    return a0;
}

/*
 * vec_new_array_wrap_0fec80  0x8c0fec80
 * only calls vec_new_array
 * called by: CItemGLoader_list_0fed18
 */
u32 vec_new_array_wrap_0fec80(u32 a0) {
    vec_new_array(a0, (&game_uses_set_fields_4_0_0fec60), (&game_release_0c02e8), 0x18, 0x19);
    return a0;
}

/*
 * CItemGLoader_take_free_slot  0x8c0fecb0
 * first of 25 0x18-byte slots whose in-use word (+0x14) is 0; marks it used and returns it, 0 when full
 * called by: CItemGLoader_RegistToLoad
 */
u32 CItemGLoader_take_free_slot(int a0) {
    int iVar1;

    iVar1 = 0;
    while (true) {
        if (0x18 < iVar1) {
            return 0;
        }
        if (*(int *)(iVar1 * 0x18 + a0 + 0x14) == 0)
            break;
        iVar1 = iVar1 + 1;
    }
    *(u32 *)(iVar1 * 0x18 + a0 + 0x14) = 1;
    return iVar1 * 0x18 + a0;
}

/*
 * clear_link_14  0x8c0fed08
 * clears field +0x14 of *a1, then *a1
 * called by: CItemGLoader_clear_requests, CItemGLoader_list_0feeb0
 */
u32 clear_link_14(u32 unused_a0, int *a1) {
    *(u32 *)(*a1 + 0x14) = 0;
    *a1 = 0;
    return 0;
}

/*
 * CItemGLoader_list_0fed18  0x8c0fed18
 * area name: sits between CItemGLoader functions (same compilation unit); behaviour name: mostly calls list functions
 * called by: game_uses_Class_12b350_ctor_0bff8c
 */
int CItemGLoader_list_0fed18(int a0, u32 unused_a1, u32 a2) {
    named_list_ctor_14_wrap(a0, unused_a1, a2);
    vec_new_array_wrap_0fec80(a0 + 0x4c);
    return a0;
}

/*
 * named_list_ctor_14_wrap  0x8c0fed44
 * only calls named_list_ctor_14
 * called by: CItemGLoader_list_0fed18
 */
u32 named_list_ctor_14_wrap(u32 a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    uVar1 = named_list_ctor_14(a0, (&DATA_8c141e34) + 0x2c8, a2);
    return uVar1;
}

/*
 * CItemGLoader_RegistToLoad  0x8c0fed70
 * strings: "Sorry! over request"; "CItemGLoader::RegistToLoad()"
 */
int CItemGLoader_RegistToLoad(int a0, u32 a1, u32 a2) {
    int ar5_00;
    ar5_00 = CItemGLoader_take_free_slot(a0 + 0x4c);
    if (ar5_00 == 0) {
        (*(code *)(&report_error_message))("Sorry! over request", "CItemGLoader::RegistToLoad()", 1, 2);
    } else {
        *(u32 *)(ar5_00 + 8) = a1;
        *(u32 *)(ar5_00 + 0xc) = a2;
        *(u32 *)(ar5_00 + 0x10) = 1;
        list_append_at_14(a0, ar5_00);
    }
    return ar5_00;
}

/*
 * CItemGLoader_poll_requests  0x8c0fedf4
 * calls the load method (0xdc) of each item whose request is not done and marks it done (2) when it returns 1
 * called by: game_uses_get_field_d0_0c6e74
 */
int CItemGLoader_poll_requests(u32 a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int ar4_00;
    int iVar2;
    int iVar3;
    iVar1 = get_field_48_0feea8(a0);
    ar4_00 = 0;
    if (iVar1 != 0) {
        ar4_00 = list_node_next_wrap_0fee88(a0);
        for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
            if (*(int *)(ar4_00 + 0x10) != 2) {
                a2 = *(u32 *)(ar4_00 + 0xc);
                iVar2 = (**(code **)(0xdc + *(int *)(*(int *)(ar4_00 + 8) + 8)))(*(int *)(ar4_00 + 8), a1, a2, a3);
                if (iVar2 == 1) {
                    *(u32 *)(ar4_00 + 0x10) = 2;
                }
            }
            ar4_00 = list_node_next(ar4_00);
        }
    }
    return ar4_00;
}

/*
 * list_node_next_wrap_0fee88  0x8c0fee88
 * only calls list_node_next
 * called by: CItemGLoader_poll_requests
 */
u32 list_node_next_wrap_0fee88(u32 a0) {
    u32 uVar1;

    uVar1 = list_node_next(a0);
    return uVar1;
}

/*
 * get_field_48_0feea8  0x8c0feea8
 * called by: CItemGLoader_clear_requests, CItemGLoader_poll_requests
 */
u32 get_field_48_0feea8(int a0) {
    return *(u32 *)(a0 + 0x48);
}

/*
 * CItemGLoader_list_0feeb0  0x8c0feeb0
 * area name: sits between CItemGLoader functions (same compilation unit); behaviour name: mostly calls list functions
 * called by: CAnimal_poll_eight_part_loads, CAnimal_poll_part_loads, Class_12a5d0_poll_part_loads
 */
u32 CItemGLoader_list_0feeb0(int a0, int *a1) {
    u32 uVar1;
    int aiStack_14[2];

    aiStack_14[0] = *a1;
    uVar1 = *(u32 *)(aiStack_14[0] + 8);
    *a1 = 0;
    CItemGLoadRequestList_TakeOu(a0, aiStack_14[0]);
    clear_link_14(a0 + 0x4c, aiStack_14);
    return uVar1;
}

/*
 * CItemGLoader_is_done  0x8c0feef8
 * 1 when the load request a1 has finished (+0x10 == 2)
 * called by: CAnimal_poll_eight_part_loads, CAnimal_poll_part_loads, Class_12a5d0_poll_part_loads
 */
u32 CItemGLoader_is_done(u32 unused_a0, int a1) {
    return (u32)(*(int *)(a1 + 0x10) == 2);
}

/*
 * CItemGLoader_clear_requests  0x8c0fef10
 * takes every request out of the load request list, then resets the loader
 * called by: Class_12b388_uses_Class_129808_draw_0c5cb4
 */
u32 CItemGLoader_clear_requests(int a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 auStack_c[2];

    auStack_c[0] = 0;
    while (true) {
        iVar1 = get_field_48_0feea8(a0);
        if (iVar1 == 0)
            break;
        iVar1 = get_field_48_0feea8(a0);
        auStack_c[0] = (*(code *)(&CItemGLoadRequestList_GetPtr))(a0, iVar1 + -1, a2, a3);
        CItemGLoadRequestList_TakeOu(a0, auStack_c[0]);
        a1 = auStack_c;
        clear_link_14(a0 + 0x4c, a1);
    }
    uVar2 = CItemGLoader_uses_set_field_0_0feab8(a0);
    return uVar2;
}

/*
 * CItemGLoader_calc_0fef8c  0x8c0fef8c
 * area name: sits between CItemGLoader functions (same compilation unit); behaviour name: integer arithmetic on its
 * arguments called by: static_init_vec3s_286e20
 */
u32 CItemGLoader_calc_0fef8c(u32 a0) {
    return a0;
}

/*
 * CItemGLoader_create_creature_by_kind  0x8c0fef94
 * creates the creature object for kind a1 (0..16: Mushroomer egg and line, Squid, Higyo, FrogMan, Moth, ...) and
 * initialises it with a0 called by: CAnimal_uses_CItemGLoader_create_creature_0366f0, CFrogManEgg_NewChild,
 * CGame_uses_libgcc_divide_helper_0cc784, CProlog_uses_libgcc_divide_helper_0cd3c8, CSquidLine_load_8, bugbox_3_screen,
 * draw_uses_CItemGLoader_create_creature_09cbb8, game_uses_CItemGLoader_create_creature_0884a0 (+8 more) strings:
 * "Shell"; "Shell"; "Invalid item no"; "CHeapForItem::NewMemory()" ...
 */
int CItemGLoader_create_creature_by_kind(u32 a0, char *a1, u32 a2, u32 a3) {
    char *a5;
    int a4;
    u64 *puVar1;
    u32 *puVar2;
    int *piVar3;
    u32 extraout_fr1;
    char cVar4;
    u64 uStack_cc;
    u8 auStack_c4[8];
    int iStack_bc;
    int iStack_b8;
    int iStack_a0;
    int iStack_9c;
    int iStack_98;
    int iStack_94;
    int iStack_88;
    int iStack_4c;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    int iStack_1c;
    int iStack_18;

    cVar4 = '\0';
    puVar2 = (u32 *)auStack_c4;
    if (((int)a1 < 0x11) && (-1 < (int)a1)) {
        switch (a1) {
        case NULL:
            iStack_88 = operator_new(0x9d8, a1, a2, a3);
            iStack_18 = iStack_88;
            if (iStack_88 != 0) {
                CMushroomerEgg_ctor(iStack_88, 0);
            }
            a4 = iStack_18;
            (**(code **)(*(int *)(iStack_18 + 8) + 0x54))(iStack_18, a0, a2, a3);
            piVar3 = (int *)auStack_c4;
            break;
        case (char *)0x1:
            a4 = operator_new(0xfd4, a1, a2, a3);
            piVar3 = (int *)auStack_c4;
            iStack_1c = a4;
            if (a4 != 0) {
                CMushroomerLine_ctor(a4, 0);
                a4 = iStack_1c;
                piVar3 = (int *)auStack_c4;
            }
            break;
        case (char *)0x2:
            a4 = operator_new(0x1718, a1, a2, a3);
            piVar3 = (int *)auStack_c4;
            iStack_20 = a4;
            if (a4 != 0) {
                CSquid_Init(a4, 0);
                a4 = iStack_20;
                piVar3 = (int *)auStack_c4;
            }
            break;
        case (char *)0x3:
            a4 = operator_new(0x10dc, a1, a2, a3);
            piVar3 = (int *)auStack_c4;
            iStack_3c = a4;
            if (a4 != 0) {
                CHigyoLine_ctor(a4, 0, a2);
                a4 = iStack_3c;
                piVar3 = (int *)auStack_c4;
            }
            break;
        case (char *)0x4:
            iStack_94 = operator_new(0x7e4, a1, a2, a3);
            iStack_24 = iStack_94;
            if (iStack_94 != 0) {
                CHigyoEgg_ctor(iStack_94, 0);
            }
            a4 = iStack_24;
            (**(code **)(*(int *)(iStack_24 + 8) + 0x54))(iStack_24, a0, a2, a3);
            piVar3 = (int *)auStack_c4;
            break;
        case (char *)0x5:
            a4 = operator_new(0x1150, a1, a2, a3);
            piVar3 = (int *)auStack_c4;
            iStack_40 = a4;
            if (a4 != 0) {
                CFrogManLine_ctor(a4, 0, a2);
                a4 = iStack_40;
                piVar3 = (int *)auStack_c4;
            }
            break;
        case (char *)0x6:
            iStack_98 = operator_new(0x7e4, a1, a2, a3);
            iStack_28 = iStack_98;
            if (iStack_98 != 0) {
                CFrogManEgg_ctor(iStack_98, 0);
            }
            a4 = iStack_28;
            (**(code **)(*(int *)(iStack_28 + 8) + 0x54))(iStack_28, a0, a2, a3);
            piVar3 = (int *)auStack_c4;
            break;
        default:
            goto switchD_8c0fefc4_caseD_7;
        case (char *)0xa:
            a4 = operator_new(0x92c, a1, a2, a3);
            piVar3 = (int *)auStack_c4;
            iStack_44 = a4;
            if (a4 != 0) {
                CMothLine_ctor(a4, 0, a2);
                a4 = iStack_44;
                piVar3 = (int *)auStack_c4;
            }
            break;
        case (char *)0xb:
            iStack_9c = operator_new(0x7ec, a1, a2, a3);
            iStack_2c = iStack_9c;
            if (iStack_9c != 0) {
                CMothEgg_ctor(iStack_9c, 0);
            }
            a4 = iStack_2c;
            (**(code **)(*(int *)(iStack_2c + 8) + 0x54))(iStack_2c, a0, a2, a3);
            piVar3 = (int *)auStack_c4;
            break;
        case (char *)0xc:
            iStack_a0 = operator_new(0x7ec, a1, a2, a3);
            iStack_30 = iStack_a0;
            if (iStack_a0 != 0) {
                CSpiderEgg_ctor(iStack_a0, 0);
            }
            a4 = iStack_30;
            (**(code **)(*(int *)(iStack_30 + 8) + 0x54))(iStack_30, a0, a2, a3);
            piVar3 = (int *)auStack_c4;
            break;
        case (char *)0xd:
            a4 = operator_new(0x2790, a1, a2, a3);
            piVar3 = (int *)auStack_c4;
            iStack_34 = a4;
            if (a4 != 0) {
                CSpiderLine_ctor(a4, 0);
                a4 = iStack_34;
                piVar3 = (int *)auStack_c4;
            }
            break;
        case (char *)0xe:
            a4 = operator_new(0x294, a1, a2, a3);
            piVar3 = (int *)auStack_c4;
            iStack_38 = a4;
            if (a4 != 0) {
                Class_12a0c4_ctor(a4, 0);
                a4 = iStack_38;
                piVar3 = (int *)auStack_c4;
            }
            break;
        case (char *)0xf:
            iStack_bc = operator_new(0x270, a1, a2, a3);
            iStack_4c = iStack_bc;
            a4 = iStack_4c;
            piVar3 = (int *)auStack_c4;
            if (iStack_bc != 0) {
                Class_12bec0_ctor(iStack_bc, 0, 0);
                a4 = iStack_4c;
                piVar3 = (int *)auStack_c4;
            }
            break;
        case (char *)0x10:
            a5 = a1;
            iStack_b8 = operator_new(0x210, a1, a2, a3);
            if (iStack_b8 != 0) {
                if (cVar4 == '\0') {
                    puVar1 = (u64 *)((int)&uStack_cc + 4);
                    uStack_cc = CONCAT44(0x3f800000, (u32)uStack_cc);
                } else {
                    puVar1 = &uStack_cc;
                    uStack_cc = CONCAT44(0x3f800000, extraout_fr1);
                }
                a2 = 0x10;
                a5 = "Shell";
                Class_12c058_ctor(*(u32 *)((int)puVar1 + 0x80), "Shell", 0x10, a3, *(u32 *)puVar1,
                                  *(u32 *)((int)puVar1 + 4));
                puVar2 = (u32 *)((int)puVar1 + 4);
            }
            a4 = *(int *)((int)puVar2 + 0x7c);
            (**(code **)(*(int *)(a4 + 8) + 0xf8))(a4, a5, a2, a3);
            piVar3 = puVar2;
        }
    } else {
    switchD_8c0fefc4_caseD_7:
        uStack_cc = CONCAT44(5, (u32)uStack_cc);
        report_error_message("Invalid item no", "CHeapForItem::NewMemory()", 1, 2);
        a4 = 0;
        piVar3 = (int *)auStack_c4;
    }
    if (a4 == 0) {
        piVar3[-1] = 5;
        report_error_message("Luck of memory!!", "CHeapForItem::NewItemMemory()", 1, 2);
    }
    *piVar3 = (int)a1;
    piVar3[1] = *piVar3 * 4 + 0x8c441348;
    *(int *)piVar3[1] = *(int *)piVar3[1] + 1;
    return a4;
}

/*
 * game_uses_get_field_24_0ff500  0x8c0ff500
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_24_05c284
 * called by: child_330_release_038d18, child_330_release_0884f8, child_330_release_09ad00, child_330_release_0a55e0,
 * game_uses_get_field_24_09cc4c, game_uses_get_field_24_0d1b90
 */
u32 game_uses_get_field_24_0ff500(u32 a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int *piVar2;

    iVar1 = get_field_24_05c284(*a1, a1);
    piVar2 = (int *)(iVar1 * 4 + 0x8c441348);
    *piVar2 = *piVar2 + -1;
    iVar1 = *a1;
    if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1, 1, a2, a3);
    }
    *a1 = 0;
    return 0;
}

/*
 * static_init_vec3s_4412b8  0x8c0ff558
 * static initialiser: builds 4 global Vec3 constants (8c4412b8..8c4412dc) and registers their destructors
 */
u32 static_init_vec3s_4412b8(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126658, a1, a2, a3);
    uVar3 = 0x8c4412b8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4412b8, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126668, pcVar2, uVar3, a3);
    uVar3 = 0x8c4412c4;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4412c4, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126678, pcVar2, uVar3, a3);
    uVar3 = 0x8c4412d0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4412d0, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126688, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c4412dc, a3);
    uVar1 = 4;
    vec_new_array(0x8c4412f4, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 9);
    global_list_push(0, destroy_array_8c4412f4, 0x8c4412e8, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c441324, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 9);
    global_list_push(0, destroy_array_8c441324, 0x8c441318, uVar1);
    if (cVar4 == '\0') {
        g_8c126698 = CONCAT44(_UNK_8c12669c, 0x800000);
        /* WARNING: Read-only address (ram,0x8c12669c) is written */
    } else {
        g_8c126698 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * destroy_array_8c441324  0x8c0ff67c
 * destroys the global array at 0x8c441324
 */
u32 destroy_array_8c441324(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c441324, free_if_nonnull_wrap_03a3dc, 4, 9);
    return uVar1;
}

/*
 * destroy_array_8c4412f4  0x8c0ff6a0
 * destroys the global array at 0x8c4412f4
 */
u32 destroy_array_8c4412f4(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c4412f4, free_if_nonnull_wrap_0247b0, 4, 9);
    return uVar1;
}

/*
 * game_copy_0ff6c4  0x8c0ff6c4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: game_vec_0ffb98
 */
int game_copy_0ff6c4(int a0, u32 a1, u32 unused_a2, u32 a3) {
    clear_5_words(a0 + 0xc, a1, unused_a2, a3);
    ret_const_1_0ffb90();
    return a0;
}

/*
 * game_release_0ff6f0  0x8c0ff6f0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 * called by: game_release_0ffc1c
 */
int game_release_0ff6f0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_0151a0(a0 + 0xc, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * fullscreen_quad_init  0x8c0ff730
 * sets a 640x480 quad's corners and four opaque black colours, then builds its vertex data
 * called by: game_uses_fullscreen_quad_init_0ffd7c
 */
u32 fullscreen_quad_init(int a0) {
    int ar6_00;
    u32 uVar1;

    *(u32 *)(a0 + 0x20) = 0;
    *(u32 *)(a0 + 0x24) = 0x43f00000;
    *(u32 *)(a0 + 0x28) = 0;
    *(u32 *)(a0 + 0x2c) = 0;
    *(u32 *)(a0 + 0x30) = 0x44200000;
    *(u32 *)(a0 + 0x34) = 0;
    *(u32 *)(a0 + 0x38) = 0x44200000;
    *(u32 *)(a0 + 0x3c) = 0x43f00000;
    *(u32 *)(a0 + 0x40) = 0xff000000;
    *(u32 *)(a0 + 0x44) = 0xff000000;
    *(u32 *)(a0 + 0x48) = 0xff000000;
    *(u32 *)(a0 + 0x4c) = 0xff000000;
    uVar1 = 4;
    ar6_00 = a0 + 0x40;
    set_fields_0_4_c(a0 + 0xc, a0 + 0x20, ar6_00, 4);
    uVar1 = set_field_10(a0 + 0xc, 0x20);
    return uVar1;
}

/*
 * game_uses_Vec3_ctor_zero_0ff7d4  0x8c0ff7d4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Vec3_ctor_zero
 * called by: game_uses_Vec3_ctor_zero_0fff28
 */
int game_uses_Vec3_ctor_zero_0ff7d4(int *a0, u8 *a1, u32 a2, u32 a3) {
    int iVar1;
    int *piVar2;
    u8 *ar5_00;
    float fVar3;
    code *pcVar5;
    double dVar4;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u8 auStack_2c[16];
    u8 auStack_1c[20];

    cVar7 = '\0';
    cVar6 = '\0';
    ar5_00 = a1;
    Vec3_ctor_zero(auStack_1c, a1, a2);
    iVar1 = *a0;
    if (iVar1 == 0) {
        piVar2 = a0 + 2;
        if (cVar7 == '\0') {
            *piVar2 = -0x3de00000;
        } else {
            piVar2[0] = -0x3de00000;
            piVar2[1] = 0x8c036988;
        }
        set_vec3_field_30(a0[1], ar5_00, a2);
        set_fields_50_54_58(a0[1]);
        (**(code **)(*(int *)(a0[1] + 8) + 0x6c))(a0[1], ar5_00, a2, a3);
        *a0 = 1;
    } else if (iVar1 == 1) {
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(0x41200000, a0[2]);
        } else {
            in_xd0 = *(u64 *)(a0 + 2);
            dVar4 = -1.3973411959191777e-250;
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 + dVar4, 0);
        }
        if (cVar7 == '\0') {
            a0[2] = (int)fVar3;
        } else {
            *(u64 *)(a0 + 2) = in_xd0;
        }
        iVar1 = input_input_helper_1001e0(a1);
        if (iVar1 == 1) {
            *a0 = 3;
        }
        if (cVar7 == '\0') {
            fVar3 = (float)a0[2];
            pcVar5 = (code *)0x41700000;
        } else {
            fVar3 = 15.0;
            pcVar5 = ta_fifo_2595aa;
        }
        if (cVar6 != '\0' || (float)pcVar5 <= fVar3) {
            piVar2 = a0 + 2;
            if (cVar7 == '\0') {
                *piVar2 = 0x41700000;
            } else {
                piVar2[0] = 0x41700000;
                piVar2[1] = 0x8c2595aa;
            }
            *a0 = 2;
        }
    } else if (iVar1 == 2) {
        iVar1 = input_input_helper_1001e0(a1);
        if (iVar1 == 1) {
            *a0 = 3;
        }
    } else if (iVar1 == 3) {
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(0x41200000, a0[2]);
        } else {
            in_xd0 = *(u64 *)(a0 + 2);
            dVar4 = -1.3973411959191777e-250;
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 - dVar4, 0);
        }
        if (cVar7 == '\0') {
            a0[2] = (int)fVar3;
            fVar3 = (float)a0[2];
            pcVar5 = (code *)0xc2200000;
        } else {
            *(u64 *)(a0 + 2) = in_xd0;
            fVar3 = -40.0;
            pcVar5 = set_vec3_field_30;
        }
        if (cVar6 != '\0' || fVar3 <= (float)pcVar5) {
            (**(code **)(*(int *)(a0[1] + 8) + 0x6c))(a0[1], ar5_00, a2, a3);
            *a0 = 4;
            ar5_00 = auStack_2c;
            ta_fifo_2595aa(0, ar5_00, a2, a3);
        }
    }
    (**(code **)(*(int *)(a0[1] + 8) + 0x1c))(a0[1], ar5_00, a2, a3);
    iVar1 = *a0;
    Vec3_dtor(auStack_1c, 0xffffffff, a2, a3);
    return iVar1;
}

/*
 * game_uses_touch_fields_30_3c_0ff928  0x8c0ff928
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is touch_fields_30_3c
 * called by: game_uses_touch_fields_30_3c_0fff54
 */
u32 game_uses_touch_fields_30_3c_0ff928(int a0, u64 *a1, u64 *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *ar4_00;
    u64 *a5;
    u32 uVar4;
    u64 *a6;
    u32 in_fr1;
    u64 uVar5;
    char cVar6;
    u32 in_stack_ffffff50;
    u16 uVar7;
    u32 uStack_a4;
    u32 uStack_a0;
    u32 uStack_9c;
    u32 uStack_98;
    u32 uStack_94;
    u32 auStack_90[18];
    u64 uStack_48;

    cVar6 = '\0';
    if (g_8c4413c8 == '\0') {
        g_8c4413c4 = 0xc1700000;
        g_8c4413c8 = CONCAT31(DAT_8c4413c8_1, 1);
    }
    if (g_8c4413d0 == '\0') {
        g_8c4413cc = 0xc1400000;
        g_8c4413d0 = CONCAT31(DAT_8c4413d0_1, 1);
    }
    a5 = a1;
    a6 = a2;
    uVar3 = a3;
    gfxlib_float_calc_2363e8(auStack_90, a1, a2, a3, in_stack_ffffff50);
    if (cVar6 == '\0') {
        uStack_a0 = *(u32 *)a1;
        uStack_9c = *(u32 *)((int)a1 + 4);
        uStack_98 = *(u32 *)a2;
        uStack_94 = *(u32 *)((int)a2 + 4);
        uVar5 = CONCAT44(uStack_94, in_fr1);
    } else {
        uStack_a0 = (u32)*a1;
        uStack_9c = (u32) * (u64 *)((int)a1 + 4);
        uStack_98 = (u32)*a2;
        uVar5 = *(u64 *)((int)a2 + 4);
        uStack_94 = (u32)uVar5;
        auStack_90[0] = (u32)((u64)uVar5 >> 0x20);
    }
    uStack_a4 = 0x42c80000;
    (**(code **)(*(int *)(*(int *)(a0 + 4) + 8) + 0x120))(*(int *)(a0 + 4), a5, a6, uVar3);
    uVar4 = (u32)((u64)uVar5 >> 0x20);
    if (cVar6 == '\0') {
        uStack_48 = CONCAT44(uStack_48._4_4_, uVar4);
        uVar4 = uStack_a4;
        uVar5 = uStack_48;
    }
    uStack_48 = uVar5;
    uStack_a4 = uVar4;
    ninja_calc_257170(&uStack_a4);
    uVar4 = a3;
    ta_fifo_2595aa(2, a3, a6, uVar3);
    ninja_uses_ninja_angle_sincos_257148(0x2e38);
    ar4_00 = auStack_90;
    nj_camera_view_matrix(ar4_00);
    gfxlib_float_calc_219038();
    gfxlib_calc_219070();
    set_vec3_g_278744();
    game_calls_calc_0f4b44(*(u32 *)(a0 + 4));
    matrix_push(0, uVar4, a6, uVar3, in_stack_ffffff50);
    touch_fields_30_3c(0, uVar4, a6, uVar3, in_stack_ffffff50);
    iVar1 = get_field_24_05c284(*(u32 *)(a0 + 4), uVar4);
    if (iVar1 == 0xd) {
        touch_fields_30_3c(0, uVar4, a6, uVar3, in_stack_ffffff50);
    }
    uVar7 = (u16)((u32)in_stack_ffffff50 >> 0x10);
    if (iVar1 == 10) {
        uVar2 = (**(code **)(*(int *)(*(int *)(a0 + 4) + 8) + 0x148))(*(int *)(a0 + 4), uVar4, a6, uVar3);
        if ((short)uVar2 != 3) {
            touch_fields_30_3c(0, uVar4, a6, uVar3, CONCAT22(uVar7, (short)uVar2));
        }
    }
    (**(code **)(*(int *)(*(int *)(a0 + 4) + 8) + 0x38))(*(int *)(a0 + 4), uVar4, a6, uVar3);
    matrix_pop_n(1);
    Class_129808_draw(a0 + 0xc, uVar4, a6, uVar3);
    if (cVar6 != '\0') {
        auStack_90[0] = 0xff000000;
    }
    uStack_94 = 0x43700000;
    uStack_98 = 0x43a00000;
    uStack_9c = 0x43f00000;
    uStack_a0 = 0x44200000;
    uStack_a4 = 0x43fa0000;
    ninja_calc_257170(&uStack_a4);
    ta_fifo_2595aa(0, a3, a6, uVar3);
    uVar3 = ninja_calls_calc_259046(0xff000000, 0xff000000, 0xff000000);
    return uVar3;
}

/*
 * set_fields_4_0_0ffb84  0x8c0ffb84
 * stores +0x4, +0x0
 * called by: set_fields_4_0_on_field_d8
 */
u32 set_fields_4_0_0ffb84(u32 *a0, u32 a1) {
    a0[1] = a1;
    *a0 = 0;
    return 0;
}

/*
 * ret_const_1_0ffb90  0x8c0ffb90
 * called by: CGame_uses_cursor_reset_center_1011e0, game_copy_0ff6c4
 */
u32 ret_const_1_0ffb90(void) {
    return 1;
}

/*
 * game_vec_0ffb98  0x8c0ffb98
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_uses_Class_12b350_ctor_0bff8c
 */
int game_vec_0ffb98(int a0, u32 a1, u32 a2, u32 a3) {
    game_copy_0ff6c4(a0 + 0xd8, a1, a2, a3);
    Vec3_ctor_zero(a0 + 0x12c, a1, a2);
    Vec3_ctor_zero(a0 + 0x13c, a1, a2);
    Vec3_ctor_zero(a0 + 0x14c, a1, a2);
    Class_12988c_ctor(a0 + 0x15c);
    cursor_reset_center(a0, a1, a2, a3);
    *(u32 *)(0xcc + a0) = 0;
    return a0;
}

/*
 * game_release_0ffc1c  0x8c0ffc1c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 * called by: game_release_0c0368
 */
int game_release_0ffc1c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Class_12988c_dtor(a0 + 0x15c, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x14c, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x13c, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 300, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        game_release_0ff6f0(a0 + 0xd8, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * UsrPointer_LoadTexture  0x8c0ffcb4
 * loads UsrPointer.pvm (the pointer cursor) from GRAPHICS
 * called by: game_init_sound_and_messages
 * strings: "UsrPointer.pvm"; "GRAPHICS"; "Failed to load user pointer textuer.."
 */
u32 UsrPointer_LoadTexture(int a0, u32 a1) {
    int iVar1;
    u32 uVar2;
    u32 ar7_00;

    ar7_00 = 2;
    uVar2 = 0x8c4413f4;
    ptr_list_build_1c(0x8c4413d4, 0x8c4413dc, 0x8c4413f4, 2);
    set_field_1c(a0 + 0x15c, 0x8c4413d4);
    set_field_20(a0 + 0x15c, u____8c1421cc);
    set_flag_28_20(a0 + 0x15c);
    uVar2 = get_field_1c_0ffd74(a0 + 0x15c);
    iVar1 = retry_until_done_020f90(a1, "UsrPointer.pvm", "GRAPHICS", uVar2);
    if (iVar1 == -1) {
        report_error_message("Failed to load user pointer textuer..", &g_8c142292, 1, 2);
    }
    return 1;
}

/*
 * get_field_1c_0ffd74  0x8c0ffd74
 * called by: UsrPointer_LoadTexture
 */
u32 get_field_1c_0ffd74(int a0) {
    return *(u32 *)(a0 + 0x1c);
}

/*
 * game_uses_fullscreen_quad_init_0ffd7c  0x8c0ffd7c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is fullscreen_quad_init
 * called by: game_init_sound_and_messages
 */
u32 game_uses_fullscreen_quad_init_0ffd7c(int a0, u32 a1) {
    u32 uVar1;

    *(u32 *)(0xcc + a0) = a1;
    uVar1 = fullscreen_quad_init(a0 + 0xd8);
    return uVar1;
}

/*
 * game_input_0ffdb0  0x8c0ffdb0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls input functions
 * called by: static_init_437218, static_init_43724c, static_init_4372a8, static_init_4372f4
 */
u32 game_input_0ffdb0(int a0) {
    int iVar1;
    int iVar2;
    float fVar3;
    double dVar4;
    u64 in_xd0;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    iVar1 = input_r_held(*(u32 *)(a0 + 0xcc));
    if ((((iVar1 == 0) && (iVar1 = input_x_held(*(u32 *)(a0 + 0xcc)), iVar1 == 0)) && (*(int *)(a0 + 0x59c) == 0)) &&
        (*(int *)(a0 + 0x188) != 6)) {
        *(u32 *)(a0 + 0x188) = 0;
    }
    if (((-1 < *(short *)(a0 + 0x18c)) && (*(int *)(a0 + 0x188) == 0)) &&
        ((*(short *)(a0 + 0x18c) = *(short *)(a0 + 0x18c) + -1,
          *(int *)(a0 + 0x188) == 0 && (*(short *)(a0 + 0x18c) < 1)))) {
        *(u32 *)(a0 + 0x188) = 6;
    }
    iVar1 = input_get_word_a538(*(u32 *)(a0 + 0xcc));
    iVar2 = input_get_word_a53c(*(u32 *)(a0 + 0xcc));
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x42fe0000, (float)iVar1);
    } else {
        dVar4 = 7.13545887092076e-312;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
    }
    if (cVar6 == '\0') {
        *(float *)(a0 + 0x14c) = fVar3;
    } else {
        *(u64 *)(a0 + 0x14c) = in_xd0;
    }
    if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(0x42fe0000, (float)iVar2);
    } else {
        dVar4 = 7.13545887092076e-312;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
    }
    if (cVar6 == '\0') {
        *(float *)(a0 + 0x150) = fVar3;
        dVar4 = (double)CONCAT44(0x41000000, *(u32 *)(a0 + 0x14c));
    } else {
        *(u64 *)(a0 + 0x150) = in_xd0;
        in_xd0 = *(u64 *)(a0 + 0x14c);
        dVar4 = 6.79577441102687e-312;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 == '\0') {
        *(float *)(a0 + 0x13c) = fVar3;
        dVar4 = (double)CONCAT44(0x41000000, *(u32 *)(a0 + 0x150));
    } else {
        *(u64 *)(a0 + 0x13c) = in_xd0;
        in_xd0 = *(u64 *)(a0 + 0x150);
        dVar4 = 6.79577441102687e-312;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar6 == '\0') {
        *(float *)(a0 + 0x140) = fVar3;
    } else {
        *(u64 *)(a0 + 0x140) = in_xd0;
    }
    iVar1 = input_test_01f398(*(u32 *)(a0 + 0xcc));
    if (iVar1 == 0) {
        *(short *)(a0 + 0x18e) = *(short *)(a0 + 0x18e) + 1;
    } else {
        *(u16 *)(a0 + 0x18e) = 0;
    }
    input_history_push(a0);
    return 1;
}

/*
 * game_uses_Vec3_ctor_zero_0fff28  0x8c0fff28
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: uses_Vec3_ctor_zero
 * called by: static_init_437218, static_init_43724c, static_init_4372a8, static_init_4372f4
 */
u32 game_uses_Vec3_ctor_zero_0fff28(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = game_uses_Vec3_ctor_zero_0ff7d4(a0 + 0xd8, a0, a2, a3);
    return uVar1;
}

/*
 * game_uses_touch_fields_30_3c_0fff54  0x8c0fff54
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: uses_touch_fields_30_3c
 * called by: Vec3_uses_clear_3_words_0c84f4, game_uses_clear_3_words_0c9588, game_uses_clear_3_words_0c9ee0,
 * game_uses_clear_3_words_0ca88c, game_uses_clear_3_words_0cb9c8
 */
u32 game_uses_touch_fields_30_3c_0fff54(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = game_uses_touch_fields_30_3c_0ff928(a0 + 0xd8, a1, a2, a3);
    return uVar1;
}

/*
 * game_uses_set_field_24_0fff84  0x8c0fff84
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_field_24_0fffec
 * called by: Vec3_uses_clear_3_words_0c84f4, game_uses_clear_3_words_0c9588, game_uses_clear_3_words_0ca88c,
 * game_uses_clear_3_words_0cb9c8
 */
u32 game_uses_set_field_24_0fff84(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar5_00;

    if (*(int *)(a0 + 0x188) != 6) {
        ar5_00 = *(u32 *)(a0 + 0x188);
        set_field_24_0fffec(a0 + 0x15c, ar5_00);
        (**(code **)(*(int *)(a0 + 0x15c) + 0x14))((int *)(a0 + 0x15c), ar5_00, a2, a3);
    }
    return 1;
}

/*
 * set_field_24_0fffec  0x8c0fffec
 * called by: cursor_reset_center, game_uses_set_field_24_0fff84
 */
u32 set_field_24_0fffec(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x24) = a1;
    return in_r0;
}

/*
 * input_reset_combo_held  0x8c0ffff4
 * 1 when A, B, X, Y and Start (0x60e) are all held on the controller at +0xcc (the Dreamcast soft-reset combination)
 * called by: Class_12b388_m1_0c5c08, game_uses_speech_is_playing_0bad68, static_init_4367d4
 */
u32 input_reset_combo_held(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&input_get_held_bits))(*(u32 *)(0xcc + a0), a1, a2, a3);
    return (u32)((uVar1 & 0x60e) == 0x60e);
}
