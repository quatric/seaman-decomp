/* Seaman (USA) region 0x8c0a0000-0x8c0b0000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * Class_12acc8_sequence_step  0x8c0a0040
 * at the end of a step advances the three-step sequence from the table at 8c13adfc (row +4); step value 0xf or the
 * third step ends it called by: Class_12acc8_m1_09f470
 */
int Class_12acc8_sequence_step(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar6_00;
    int in_stack_ffffffe4;

    if (*(int *)(a0 + 0x3c) == 0) {
        ar6_00 = a2;
        Class_12acc8_state_switch_0a0184(a0);
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + 1;
        in_stack_ffffffe4 = *(int *)(a0 + 0xc);
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13adfc + in_stack_ffffffe4 * 4 + *(int *)(a0 + 4) * 0xc);
        if ((*(int *)(a0 + 0x40) == 0xf) || (*(int *)(a0 + 0xc) == 3)) {
            *(u32 *)(a0 + 0xc) = 0;
            set_field_38_02f404(a0, 0);
            a2 = ar6_00;
        } else {
            set_field_38_02f404(a0, 3);
            Class_12acc8_talk_0a00f8(a0, a1, a2, a3);
        }
    }
    iVar1 = *(int *)(a0 + 0x3c);
    if (iVar1 == 2) {
        iVar1 = set_field_38_02f404(a0, 2);
    }
    return iVar1;
}

/*
 * Class_12acc8_talk_0a00f8  0x8c0a00f8
 * area name: only called from Class_12acc8 methods; behaviour name: mostly calls talk functions
 * called by: Class_12acc8_sequence_step, Class_12acc8_uses_set_field_38_09ff1c
 */
int Class_12acc8_talk_0a00f8(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    int ar6_00;

    ar5_00 = a1;
    ar6_00 = a2;
    if ((*(int *)(a0 + 0x38) == 2) && (*(int *)(a0 + 0x6c) != 0)) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, a2, a3);
        *(u32 *)(a0 + 0x6c) = 0;
    }
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 3) {
        iVar1 = Class_12acc8_uses_rand_0a0278(a0, a1, ar6_00);
    } else if ((((iVar1 != 6) && (iVar1 == 10)) &&
                (iVar1 = talk_pick_highest_active(*(u32 *)(a2 + 4), ar5_00, ar6_00), iVar1 != 0)) &&
               (iVar1 == 1)) {
        iVar1 = 0x40;
        *(u32 *)(a0 + 0x40) = 0xe;
    }
    return iVar1;
}

/*
 * Class_12acc8_state_switch_0a0184  0x8c0a0184
 * area name: only called from Class_12acc8 methods; behaviour name: dispatches on a state or mode value (switch)
 * called by: Class_12acc8_sequence_step
 */
u8 *Class_12acc8_state_switch_0a0184(int a0) {
    u8 *puVar1;
    int iVar2;

    iVar2 = *(int *)(a0 + 0x40);
    puVar1 = (u8 *)0xc;
    if ((iVar2 < 0xd) && (puVar1 = (u8 *)0x5, 4 < iVar2)) {
        puVar1 = (&switchD_8c0a01a0::switchdataD_8c0a01a4)[iVar2 + -5];
        switch (iVar2) {
        case 5:
            *(u32 *)(a0 + 0x40) = 2;
            *(u32 *)(a0 + 4) = 0;
            puVar1 = (u8 *)0x1e;
            *(u32 *)(a0 + 8) = 0x1e;
            break;
        case 8:
            *(u32 *)(a0 + 0x40) = 2;
            *(u32 *)(a0 + 4) = 0;
            *(u32 *)(a0 + 8) = 0x1e;
            puVar1 = (u8 *)0x9c;
            *(int *)(a0 + 0x9c) = *(int *)(a0 + 0x9c) + 1;
            break;
        case 9:
            *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + -1;
            puVar1 = (u8 *)0xf;
            *(u32 *)(a0 + 8) = 0xf;
            break;
        case 0xc:
            *(u8 *)(a0 + 0x98) = 2;
            puVar1 = (u8 *)0xf;
            *(u32 *)(a0 + 8) = 0xf;
        }
    }
    return puVar1;
}

/*
 * Class_12acc8_uses_get_field_8_0a0224  0x8c0a0224
 * area name: only called from Class_12acc8 methods; behaviour name: its main named callee is get_field_8_066620
 * called by: Class_12acc8_m1_09f470
 */
u32 *Class_12acc8_uses_get_field_8_0a0224(int a0) {
    u32 *puVar1;

    if (*(int *)(a0 + 4) == 2) {
        get_field_8_066620(a0);
        puVar1 = &g_8c0a0270;
    } else {
        get_field_8_066620(a0);
        puVar1 = &g_8c0a0274;
    }
    return puVar1;
}

/*
 * Class_12acc8_uses_rand_0a0278  0x8c0a0278
 * area name: only called from Class_12acc8 methods; behaviour name: its main named callee is rand
 * called by: Class_12acc8_m1_09f470, Class_12acc8_talk_0a00f8, Class_12acc8_uses_set_field_38_09ff1c
 */
u32 Class_12acc8_uses_rand_0a0278(int a0, int *a1, u32 a2) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u8 *ar5_00;
    u32 uVar4;
    u32 *a6;
    u8 *ar6_00;
    u32 *a7;
    u32 *puVar5;
    float fVar6;
    u64 in_dr0;
    double dVar7;
    float fVar9;
    double dVar8;
    u32 in_fr3;
    u32 uVar10;
    u64 in_xd0;
    char cVar11;
    char cVar12;
    u64 uStack_a0;
    u32 uStack_90;
    u8 auStack_8c[4];
    u8 auStack_88[4];
    u32 uStack_84;
    u32 uStack_80;
    u32 uStack_7c;
    u32 auStack_78[4];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[12];
    u8 auStack_3c[16];
    u8 auStack_2c[12];
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;

    cVar12 = '\0';
    cVar11 = '\0';
    Vec3_ctor_zero(&uStack_20, a1, a2);
    a7 = &uStack_84;
    a6 = &uStack_80;
    puVar5 = &uStack_7c;
    (**(code **)(*a1 + 0x120))(a1, puVar5, a6, a7);
    iVar2 = a0;
    iVar1 = get_field_4_05eed8(a0);
    if (iVar1 != 1) {
        if (iVar1 == 8) {
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(uStack_7c, in_fr3);
                dVar7 = (double)CONCAT44(0x3dcccccd, uStack_7c);
            } else {
                dVar8 = (double)CONCAT44(auStack_78[0], uStack_7c);
                dVar7 = 1.3411048210842936e-08;
            }
            if (cVar11 == '\0') {
                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20),
                                         SUB84(dVar8, 0));
            } else {
                dVar8 = dVar8 - dVar7 * dVar7;
            }
            uStack_7c = SUB84(dVar8, 0);
            uVar3 = (u32)((u64)dVar8 >> 0x20);
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(uStack_80, uStack_7c);
                dVar7 = (double)CONCAT44(0x3e4ccccd, uStack_80);
                uStack_7c = uVar3;
            } else {
                dVar8 = (double)CONCAT44(uStack_7c, uStack_80);
                dVar7 = -7.532505548438758e-251;
                auStack_78[0] = uVar3;
            }
            if (cVar11 == '\0') {
                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20),
                                         SUB84(dVar8, 0));
            } else {
                dVar8 = dVar8 - dVar7 * dVar7;
            }
            uStack_80 = SUB84(dVar8, 0);
            uVar3 = (u32)((u64)dVar8 >> 0x20);
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(uStack_84, uStack_80);
                dVar7 = (double)CONCAT44(0x3dcccccd, uStack_84);
                uStack_80 = uVar3;
            } else {
                dVar8 = (double)CONCAT44(uStack_80, uStack_84);
                dVar7 = 1.3411048210842936e-08;
                uStack_7c = uVar3;
            }
            if (cVar11 == '\0') {
                fVar9 = (float)((u64)dVar7 >> 0x20);
                fVar6 = SUB84(dVar7, 0) * fVar9;
                dVar7 = (double)CONCAT44(fVar9, fVar6);
                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - fVar6, SUB84(dVar8, 0));
            } else {
                dVar7 = dVar7 * dVar7;
                dVar8 = dVar8 - dVar7;
            }
            uVar3 = SUB84(dVar7, 0);
            uVar4 = (u32)((u64)dVar8 >> 0x20);
            uStack_84 = uVar4;
            if (cVar12 != '\0') {
                uStack_84 = SUB84(dVar8, 0);
                uStack_80 = uVar4;
            }
            uVar4 = rand();
            uVar10 = SUB84(dVar8, 0);
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(uStack_7c, uVar3);
            } else {
                dVar8 = (double)CONCAT44(auStack_78[0], uStack_7c);
            }
            if (cVar11 == '\0') {
                iVar2 = (int)(float)((u64)dVar8 >> 0x20);
            } else {
                iVar2 = (int)dVar8;
            }
            iVar1 = libgcc_divide_helper_01031c(uVar4, iVar2, a6);
            if (cVar11 == '\0') {
                dVar8 = (double)CONCAT44((float)iVar1, SUB84(dVar8, 0));
            } else {
                dVar8 = (double)iVar1;
            }
            if (cVar12 == '\0') {
                *(int *)(a0 + 0x28) = (int)((u64)dVar8 >> 0x20);
            } else {
                *(double *)(a0 + 0x28) = dVar8;
            }
            uVar3 = rand();
            (**(code **)(*a1 + 0x180))(a1, iVar2, a6, a7);
            if (cVar12 == '\0') {
                uStack_a0 = (double)CONCAT44(uVar3, (int)((u64)dVar8 >> 0x20));
                dVar7 = (double)CONCAT44(uStack_80, SUB84(dVar8, 0));
            } else {
                dVar7 = (double)CONCAT44(uStack_7c, uStack_80);
                uStack_a0 = dVar8;
            }
            if (cVar11 == '\0') {
                iVar2 = (int)(float)((u64)dVar7 >> 0x20);
            } else {
                iVar2 = (int)dVar7;
            }
            uVar3 = uStack_a0._4_4_;
            iVar1 = libgcc_divide_helper_01031c(uStack_a0._4_4_, iVar2, a6);
            if (cVar11 == '\0') {
                dVar8 = (double)CONCAT44((float)iVar1, uVar10);
            } else {
                dVar8 = (double)iVar1;
            }
            if (cVar12 == '\0') {
                dVar7 = (double)CONCAT44(0x42c80000, (u32)uStack_a0);
            } else {
                dVar7 = 5.085573493628304e+232;
            }
            if (cVar11 == '\0') {
                fVar9 = (float)((u64)dVar7 >> 0x20);
                fVar6 = SUB84(dVar7, 0) / fVar9;
                dVar7 = (double)CONCAT44(fVar9, fVar6);
                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) * fVar6, SUB84(dVar8, 0));
            } else {
                dVar7 = dVar7 / dVar7;
                dVar8 = dVar8 * dVar7;
            }
            uVar4 = SUB84(dVar7, 0);
            if (cVar12 == '\0') {
                *(int *)(a0 + 0x2c) = (int)((u64)dVar8 >> 0x20);
            } else {
                *(double *)(a0 + 0x2c) = dVar8;
            }
            uVar3 = rand();
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(uStack_84, uVar4);
            } else {
                dVar8 = (double)CONCAT44(uStack_80, uStack_84);
            }
            if (cVar11 == '\0') {
                iVar2 = (int)(float)((u64)dVar8 >> 0x20);
            } else {
                iVar2 = (int)dVar8;
            }
            iVar2 = libgcc_divide_helper_01031c(uVar3, iVar2, a6);
            if (cVar11 == '\0') {
                dVar8 = (double)CONCAT44((float)iVar2, SUB84(dVar8, 0));
            } else {
                dVar8 = (double)iVar2;
            }
            if (cVar12 == '\0') {
                *(int *)(a0 + 0x30) = (int)((u64)dVar8 >> 0x20);
            } else {
                *(double *)(a0 + 0x30) = dVar8;
            }
        } else if (iVar1 == 0xb) {
            iVar2 = (**(code **)(*a1 + 0x11c))(a1, 2, a6, a7);
            if (iVar2 == 0) {
                set_field_38_02f404(a0, 2);
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0x43960000;
                    *(u32 *)(a0 + 0x2c) = 0x43960000;
                    *(u32 *)(a0 + 0x30) = 0x43960000;
                } else {
                    *(u64 *)(a0 + 0x28) = 0xa092ed0043960000;
                    *(u64 *)(a0 + 0x2c) = 0xa092ed0043960000;
                    *(u64 *)(a0 + 0x30) = 0xa092ed0043960000;
                }
            } else {
                for (puVar5 = NULL; iVar2 = (**(code **)(*a1 + 0x11c))(a1, 2, a6, a7), (int)puVar5 < iVar2;
                     puVar5 = (u32 *)((int)puVar5 + 1)) {
                    uVar3 = (**(code **)(*a1 + 0x100))(a1, 2, puVar5, a7);
                    a7 = &uStack_90;
                    ar6_00 = auStack_8c;
                    ar5_00 = auStack_88;
                    get_vec3_field_50(uVar3, ar5_00, ar6_00, a7);
                    Vec3_set_xyz(auStack_2c, ar5_00, ar6_00, a7);
                    vec3_copy_8c02b5fc(auStack_48, auStack_2c, ar6_00);
                    Vec3_rotate_euler_deg(&g_8c12619c, auStack_48, ar6_00, a7, auStack_58);
                    Vec3_ctor_copy(auStack_3c, auStack_58, ar6_00, a7);
                    Vec3_dtor(auStack_58, 0xffffffff, ar6_00, a7);
                    object_dtor_delete(auStack_48, 0xffffffff, ar6_00, a7);
                    uVar4 = 2;
                    a6 = puVar5;
                    uVar3 = (**(code **)(*a1 + 0x100))(a1, 2, puVar5, a7);
                    Vec3_ctor_copy_wrap_02f670(uVar3, uVar4, a6, a7, auStack_68);
                    Vec3_add(auStack_68, auStack_3c, a6, a7, auStack_78);
                    Vec3_assign(&uStack_20, auStack_78, a6, a7);
                    Vec3_dtor(auStack_78, 0xffffffff, a6, a7);
                    Vec3_dtor(auStack_68, 0xffffffff, a6, a7);
                    if (cVar12 == '\0') {
                        *(u32 *)(a0 + 0x28) = uStack_20;
                        *(u32 *)(a0 + 0x2c) = uStack_1c;
                        *(u32 *)(a0 + 0x30) = uStack_18;
                    } else {
                        *(u64 *)(a0 + 0x28) = CONCAT44(uStack_1c, uStack_20);
                        *(u64 *)(a0 + 0x2c) = CONCAT44(uStack_18, uStack_1c);
                        *(u64 *)(a0 + 0x30) = CONCAT44(uStack_14, uStack_18);
                    }
                    Vec3_dtor(auStack_3c, 0xffffffff, a6, a7);
                    object_dtor_delete(auStack_2c, 0xffffffff, a6, a7);
                }
            }
        } else if ((iVar1 == 0xd) && (*(int *)(a0 + 0x40) == 9)) {
            uVar3 = rand();
            uVar4 = 2;
            iVar2 = libgcc_divide_helper_01031c(uVar3, 2, a6);
            if (iVar2 == 0) {
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = in_dr0 & 0xffffffff;
                }
            } else if (cVar12 == '\0') {
                *(u32 *)(a0 + 0x28) = uStack_7c;
            } else {
                *(u64 *)(a0 + 0x28) = CONCAT44(auStack_78[0], uStack_7c);
            }
            uVar3 = rand();
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(0x442f0000, uStack_80);
            } else {
                in_xd0 = CONCAT44(uStack_7c, uStack_80);
                dVar8 = -7.425279834635228e-251;
            }
            if (cVar11 == '\0') {
                iVar2 = (int)(SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20));
            } else {
                iVar2 = (int)(dVar8 - dVar8);
            }
            iVar1 = libgcc_divide_helper_01031c(uVar3, iVar2, a6);
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(0x43af0000, (float)iVar1);
            } else {
                dVar8 = 3.458765095218184e+18;
            }
            if (cVar11 == '\0') {
                fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
            } else {
                fVar6 = SUB84(dVar8 + dVar8, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x2c) = fVar6;
            } else {
                *(u64 *)(a0 + 0x2c) = in_xd0;
            }
            uVar3 = rand();
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(0x43c80000, uStack_84);
            } else {
                in_xd0 = CONCAT44(uStack_80, uStack_84);
                dVar8 = 13510801156472832.0;
            }
            if (cVar11 == '\0') {
                iVar2 = (int)(SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20));
            } else {
                iVar2 = (int)(dVar8 - dVar8);
            }
            iVar2 = libgcc_divide_helper_01031c(uVar3, iVar2, a6);
            if (cVar12 == '\0') {
                dVar8 = (double)CONCAT44(0x43480000, (float)iVar2);
            } else {
                dVar8 = 2.5193118417763846e+177;
            }
            if (cVar11 == '\0') {
                fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
            } else {
                fVar6 = SUB84(dVar8 + dVar8, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x30) = fVar6;
            } else {
                *(u64 *)(a0 + 0x30) = in_xd0;
            }
        }
    }
    uVar3 = Vec3_dtor(&uStack_20, 0xffffffff, a6, a7);
    return uVar3;
}

/*
 * game_load_0a06c0  0x8c0a06c0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls load functions
 */
u32 game_load_0a06c0(int a0, u8 *a1) {
    u32 uVar1;

    *(u8 *)(0x98 + a0) = *a1;
    uVar1 = Class_12c3c4_load_record(a0 + 0xa8, a1 + 8);
    return uVar1;
}

/*
 * game_uses_Class_12c3c4_save_record_0a06f8  0x8c0a06f8
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Class_12c3c4_save_record
 */
u32 game_uses_Class_12c3c4_save_record_0a06f8(int a0, u8 *a1) {
    u32 uVar1;

    *a1 = *(u8 *)(0x98 + a0);
    uVar1 = Class_12c3c4_save_record(a0 + 0xa8, a1 + 8);
    return uVar1;
}

/*
 * static_init_vec3s_285140  0x8c0a0730
 * static initialiser: builds 5 global Vec3 constants (8c285140..8c285170) and registers their destructors
 */
u32 static_init_vec3s_285140(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126158, a1, a2, a3);
    uVar3 = 0x8c285140;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285140, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126168, pcVar2, uVar3, a3);
    uVar3 = 0x8c28514c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28514c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126178, pcVar2, uVar3, a3);
    uVar3 = 0x8c285158;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285158, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126188, pcVar2, uVar3, a3);
    uVar3 = 0x8c285164;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285164, a3);
    if (cVar4 == '\0') {
        g_8c126198 = CONCAT44(g_8c12619c, 0x800000);
    } else {
        /* WARNING: Read-only address (ram,0x8c12619c) is written */
        g_8c126198 = 0xffffffff00800000;
    }
    uVar1 = Vec3_ctor_xyz(&g_8c12619c, pcVar2, uVar3, a3);
    uVar1 = global_list_push(uVar1, Vec3_dtor, 0x8c285170, a3);
    return uVar1;
}

/*
 * Class_12ad14_ctor  0x8c0a0818
 * Class_129cbc_ctor with vtable 8c12ad14 and four vectors (MushroomerLine)
 * called by: CMushroomerLine_ctor
 */
u32 *Class_12ad14_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    Class_129cbc_ctor(a0, a1, a2, a3);
    *a0 = (&DATA_8c12ad14);
    Vec3_ctor_zero((int)a0 + 0x224, a1, a2);
    Vec3_set_zero((int)a0 + 0x238);
    Vec3_ctor_zero((int)a0 + 0x250, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x260, a1, a2);
    Class_12ad14_init_begin_iya(a0, a1, a2, a3);
    return a0;
}

/*
 * Class_12ad14_init_begin_iya  0x8c0a0890
 * sets the state name to "Begin_iya" (0xf), places the object at (a1, a2, a3) and clears its timers
 * called by: Class_12ad14_ctor
 */
u32 Class_12ad14_init_begin_iya(int a0, u32 a1, u32 a2, u32 a3) {
    u32 extraout_fr1;
    u32 extraout_fr1_00;
    char cVar1;
    u8 auStack_14[16];

    cVar1 = '\0';
    *(u8 ***)(a0 + 0x1c8) = &PTR_s_Begin_iya__8c13af50;
    *(u32 *)(a0 + 0x1cc) = 0xf;
    Vec3_set_xyz(auStack_14, a1, a2, a3);
    vec3_copy_8c023d8c(a0 + 0x238, auStack_14, a2, a3);
    object_dtor_delete(auStack_14, 0xffffffff, a2, a3);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x244) = 0;
    } else {
        *(u64 *)(a0 + 0x244) = (u64)extraout_fr1;
    }
    *(u32 *)(a0 + 0x248) = 0;
    copy6_to_fields(a0, 0x8c2851b0, a2, a3);
    *(u32 *)(a0 + 0x24c) = 0;
    *(u32 *)(a0 + 0x270) = 0;
    *(u32 *)(a0 + 0x1d0) = 1;
    *(u32 *)(a0 + 0x274) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x234) = 0;
    } else {
        *(u64 *)(a0 + 0x234) = (u64)extraout_fr1_00;
    }
    return 0x234;
}

/*
 * Class_12ad14_dtor  0x8c0a0950
 * stores the vtable 0x8c12ad14
 * called by: Class_12ab2c_m0_09dab8
 */
u32 *Class_12ad14_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12ad14;
        Vec3_dtor(a0 + 0x98, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x94, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x8e, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x89, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_129cbc_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12ad14_m1_0a09e8  0x8c0a09e8
 */
u32 Class_12ad14_m1_0a09e8(int a0, u32 *a1, u32 a2, u8 *a3) {
    u64 uVar1;
    int iVar2;
    u32 uVar3;
    float fVar4;
    u64 in_dr0;
    double dVar5;
    float fVar6;
    u32 in_fr3;
    double dVar7;
    u64 in_xd0;
    bool bVar8;
    char cVar9;
    char cVar10;
    u64 uStack_78;
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[12];
    u8 auStack_1c[16];

    cVar10 = '\0';
    cVar9 = '\0';
    Class_129cbc_m1_031598(a0, a1, a2, a3);
    uVar3 = 1;
    *(u32 *)(a0 + 0x128) = 1;
    if ((*(int *)(a0 + 0x124) == 0xb) || (*(int *)(a0 + 0x124) == 0xc)) {
        Vec3_copy_assign(auStack_1c, a1[3]);
        a3 = auStack_1c;
        a2 = a1[6];
        uVar3 = Class_12ad14_vec_0a0c88(a0, *a1, a2, a3);
        free_if_nonnull_wrap_102790(auStack_1c, 0xffffffff, a2, a3);
    } else {
        iVar2 = Class_12ad14_uses_rand_float_0a37c8(a0, a1, a2, a3);
        if (iVar2 != 3) {
            Vec3_copy_assign(auStack_28, a1[3]);
            a3 = auStack_28;
            a2 = a1[6];
            uVar3 = Class_12ad14_vec_0a0c88(a0, *a1, a2, a3);
            free_if_nonnull_wrap_102790(auStack_28, 0xffffffff, a2, a3);
            uStack_78._4_4_ = uVar3;
        }
    }
    set_field_3c_02f2c0(*a1, uVar3);
    if (*(int *)(a0 + 0x178) == 1) {
        uVar3 = 1;
        set_field_3c_02f2c0(*a1, 1);
    }
    if ((*(int *)(a0 + 0x124) != 6) && (*(int *)(a0 + 0x124) != 0xb)) {
        uVar3 = *(u32 *)(a1[1] + 4);
        timer_vec_031ab4(a0, uVar3, a2, a3);
    }
    (**(code **)(*(int *)a1[6] + 0x184))((int *)a1[6], uVar3, a2, a3);
    uVar1 = in_dr0;
    if (cVar10 == '\0') {
        uStack_78 = CONCAT44(uStack_78._4_4_, (int)((u64)in_dr0 >> 0x20));
        uVar1 = uStack_78;
    }
    uStack_78 = uVar1;
    if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(u32 *)(*(int *)a1[1] + 4), in_fr3);
        dVar5 = (double)CONCAT44(0x41200000, (int)uStack_78);
    } else {
        dVar7 = *(double *)(*(int *)a1[1] + 4);
        dVar5 = -3.051758552885531e-05;
        in_xd0 = uStack_78;
    }
    if (cVar9 == '\0') {
        fVar6 = (float)((u64)dVar5 >> 0x20);
        fVar4 = SUB84(dVar5, 0) - fVar6;
        dVar5 = (double)CONCAT44(fVar6, fVar4);
        bVar8 = (float)((u64)dVar7 >> 0x20) < fVar4;
    } else {
        dVar5 = dVar5 - dVar5;
        bVar8 = dVar7 < dVar5;
    }
    fVar4 = SUB84(dVar5, 0);
    if (!bVar8) {
        if (cVar10 == '\0') {
            fVar4 = *(float *)(a0 + 0x18);
        } else {
            in_xd0 = *(u64 *)(a0 + 0x18);
        }
        if (cVar9 == '\0' && 0.0 < fVar4) {
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(0xbf000000, *(u32 *)(a0 + 0x18));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x18);
                dVar7 = -7.937143354252696e-251;
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
            } else {
                fVar4 = SUB84(dVar7 * dVar7, 0);
            }
            if (cVar10 == '\0') {
                *(float *)(a0 + 0x18) = fVar4;
            } else {
                *(u64 *)(a0 + 0x18) = in_xd0;
            }
            Vec3_length(a0 + 0x14, uVar3, a2, a3);
        }
    }
    Vec3_scale(a0 + 0x14, a0 + 0x28, a2, a3, auStack_38);
    Vec3_add(auStack_38, a0 + 0x224, a2, a3, auStack_48);
    Vec3_add(auStack_48, a0 + 0x90, a2, a3, auStack_58);
    Vec3_add(auStack_58, a0 + 0x13c, a2, a3, auStack_68);
    Vec3_assign(a0 + 4, auStack_68, a2, a3);
    Vec3_dtor(auStack_68, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_58, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_48, 0xffffffff, a2, a3);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, a2, a3);
    vec3_clear(a0 + 0x13c, uVar3, a2, a3);
    *(u32 *)(a0 + 0x1d4) = 0;
    return 0x1d4;
}

/*
 * game_uses_reset_fields_2c_6c_0a0c4c  0x8c0a0c4c
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: uses_reset_fields_2c_6c
 */
u32 game_uses_reset_fields_2c_6c_0a0c4c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    game_uses_reset_fields_2c_6c_032160(a0, a1, a2, a3);
    *(u32 *)(a0 + 0x24c) = 0;
    *(u32 *)(a0 + 0x214) = 1;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x234) = 0;
    } else {
        *(u64 *)(a0 + 0x234) = (u64)extraout_fr1;
    }
    return 0x234;
}

/*
 * Class_12ad14_vec_0a0c88  0x8c0a0c88
 * area name: only called from Class_12ad14 methods; behaviour name: mostly calls vec functions
 * called by: Class_12ad14_m1_0a09e8
 */
int Class_12ad14_vec_0a0c88(int a0, u32 a1, u8 *a2, u8 *a3) {
    int iVar1;
    u32 ar5_00;
    u8 *puVar2;
    u8 *puVar3;
    int iVar4;
    u32 in_stack_00000000;
    u8 auStack_c8[108];
    u8 auStack_5c[12];
    u8 auStack_50[12];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[20];

    iVar4 = 1;
    puVar2 = a2;
    puVar3 = a3;
    Vec3_ctor_copy_wrap_03f480(a1, Vec3_ctor_copy_wrap_03f480, a2, a3, auStack_44);
    Vec3_ctor_copy(auStack_24, auStack_44, puVar2, puVar3);
    ar5_00 = 0xffffffff;
    Vec3_dtor(auStack_44, 0xffffffff, puVar2, puVar3);
    Vec3_ctor_zero(auStack_34, ar5_00, puVar2);
    if (*(int *)(a0 + 0x178) == 1) {
        Vec3_assign(auStack_24, a0 + 0x168, puVar2, puVar3);
    }
    *(u32 *)(a0 + 0x128) = 1;
    iVar1 = *(int *)(a0 + 0x124);
    if ((iVar1 < 0xf) && (1 < iVar1)) {
        switch (iVar1) {
        case 2:
            Vec3_copy_assign(auStack_5c, a3);
            puVar2 = auStack_5c;
            puVar3 = a2;
            iVar4 = game_vec_0a14d8(a0, in_stack_00000000, puVar2, a2);
            free_if_nonnull_wrap_102790(auStack_5c, 0xffffffff, puVar2, puVar3);
            break;
        case 3:
            puVar2 = a3;
            puVar3 = a2;
            iVar4 = point_inside_box_margin(a0, auStack_24, a3, a2);
            if (iVar4 == 0) {
                puVar2 = a3;
                puVar3 = a2;
                game_float_calc_032788(a0, auStack_24, a3, a2);
            }
            Vec3_copy_assign(auStack_50, a3);
            puVar3 = auStack_50;
            puVar2 = auStack_24;
            iVar4 = game_uses_CAnimBody_SetAnimation_0a1828(a0, in_stack_00000000, puVar2, puVar3);
            free_if_nonnull_wrap_102790(auStack_50, 0xffffffff, puVar2, puVar3);
        }
    }
    if ((*(int *)(a0 + 0x178) == 1) && (iVar4 == 0)) {
        timer_vec_031ce8(a0, a3, a2, puVar3);
        Vec3_assign(a0 + 0x168, auStack_c8, a2, puVar3);
        Vec3_dtor(auStack_c8, 0xffffffff, a2, puVar3);
        puVar2 = a2;
    }
    Vec3_dtor(auStack_34, 0xffffffff, puVar2, puVar3);
    Vec3_dtor(auStack_24, 0xffffffff, puVar2, puVar3);
    return iVar4;
}

/*
 * game_vec_0a14d8  0x8c0a14d8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12ad14_vec_0a0c88
 */
u32 game_vec_0a14d8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 ar6_00;
    int ar6_01;
    u32 uVar5;
    u8 *ar7_00;
    float fVar6;
    u64 in_dr0;
    float fVar7;
    char cVar8;
    char cVar9;
    u8 auStack_74[12];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[20];

    fVar6 = (float)((u64)in_dr0 >> 0x20);
    cVar9 = '\0';
    cVar8 = '\0';
    iVar1 = *(int *)(a0 + 0x134);
    uVar4 = a2;
    uVar3 = a3;
    uVar5 = a3;
    if (iVar1 == 0) {
        ar6_00 = 100;
        uVar2 = rand_range(a0, 0, 100);
        *(u32 *)(a0 + 0x220) = uVar2;
        *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
    } else {
        ar6_00 = a2;
        if (iVar1 != 1) {
            uVar3 = a1;
            if (iVar1 == 2)
                goto LAB_8c0a15f4;
            if (iVar1 != 3) {
                return 1;
            }
            goto LAB_8c0a165a;
        }
    }
    if (*(int *)(a0 + 0x220) < 0x2d) {
        iVar1 = game_state_switch_0a2bf4(a0, a1, ar6_00, uVar3);
        if (iVar1 != 0) {
            return 1;
        }
        *(u32 *)(a0 + 0x134) = 0;
        *(u32 *)(a0 + 0x40) = 5;
        return 0;
    }
    if (0x59 < *(int *)(a0 + 0x220)) {
        a3 = 0;
        a2 = 0;
        uVar3 = 0;
        CAnimBody_SetAnimation(a0 + 0xb0, 0, 0, 0);
        *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
    LAB_8c0a15f4:
        Vec3_ctor_xyz(auStack_48, uVar3, a2, a3);
        timer_vec_031c74(a0, auStack_48, a1, a3);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_48, 0xffffffff, a1, a3);
        game_vec_03207c(a0, uVar4);
        iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar4, a1, a3);
        if (iVar1 != 1) {
            return 1;
        }
        *(u32 *)(a0 + 0x134) = 0;
        return 0;
    }
    if (cVar9 == '\0') {
        fVar6 = 3.0;
    } else {
        fVar6 = 500.0;
    }
    CMushroomerBody_vec_032518(a0, a1, a2, a3);
    Vec3_assign(a0 + 0x54, auStack_38, uVar4, uVar5);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, uVar4, uVar5);
    *(u32 *)(a0 + 0x134) = 3;
LAB_8c0a165a:
    if (*(int *)(a0 + 0x1d4) == 1) {
        uVar3 = Vec3_length(a0 + 0x200, uVar3, uVar4, uVar5);
        Vec3_ctor_copy(auStack_28, uVar3, uVar4, uVar5);
        Vec3_cos_angle(auStack_28, a0 + 0x14, uVar4, uVar5);
        if (cVar9 == '\0') {
            fVar7 = 90.0;
        } else {
            fVar6 = 90.0;
            fVar7 = 2.0;
        }
        if (cVar8 == '\0' && fVar7 < fVar6) {
            game_vec_03263c(a0, auStack_28, uVar4, uVar5);
            Vec3_add(auStack_58, a1, uVar4, uVar5, auStack_68);
            Vec3_assign(a0 + 0x54, auStack_68, uVar4, uVar5);
            Vec3_dtor(auStack_68, 0xffffffff, uVar4, uVar5);
            Vec3_dtor(auStack_58, 0xffffffff, uVar4, uVar5);
            uVar4 = a2;
            game_float_calc_032788(a0, a0 + 0x54, a2, a3);
            *(u32 *)(a0 + 0x40) = 5;
            uVar5 = a3;
        }
        Vec3_dtor(auStack_28, 0xffffffff, uVar4, uVar5);
    }
    Vec3_copy_assign(auStack_74, a2);
    ar7_00 = auStack_74;
    ar6_01 = a0 + 0x54;
    iVar1 = game_uses_CAnimBody_SetAnimation_0a1828(a0, a1, ar6_01, ar7_00);
    free_if_nonnull_wrap_102790(auStack_74, 0xffffffff, ar6_01, ar7_00);
    if (iVar1 == 0) {
        *(u32 *)(a0 + 0x134) = 0;
    }
    return (u32)(iVar1 != 0);
}

/*
 * game_uses_CAnimBody_SetAnimation_0a1828  0x8c0a1828
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is CAnimBody_SetAnimation
 * called by: Class_12ad14_vec_0a0c88, game_vec_0a14d8, game_vec_0a3d08
 */
u32 game_uses_CAnimBody_SetAnimation_0a1828(int a0, u32 *a1, u32 *a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 *ar5_00;
    u32 *ar6_00;
    float fVar4;
    u64 in_dr0;
    float fVar7;
    double dVar5;
    u64 uVar6;
    u32 in_fr3;
    double dVar8;
    char cVar9;
    char cVar10;
    u8 auStack_24[20];

    fVar4 = (float)((u64)in_dr0 >> 0x20);
    cVar10 = '\0';
    cVar9 = '\0';
    iVar3 = *(int *)(a0 + 0x40);
    if ((iVar3 < 6) && (-1 < iVar3)) {
        ar5_00 = a1;
        ar6_00 = a2;
        switch (iVar3) {
        case 0:
            if (*(int *)(a0 + 0x270) == 1) {
                *(u32 *)(a0 + 0x270) = 0;
            }
            if (*(int *)(a0 + 0x1b8) == 1) {
                *(u32 *)(a0 + 0x18c) = *a1;
                *(u32 *)(a0 + 400) = a1[1];
                *(u32 *)(a0 + 0x194) = a1[2];
                *(u32 *)(a0 + 0x198) = *a2;
                *(u32 *)(a0 + 0x19c) = a2[1];
                *(u32 *)(a0 + 0x1a0) = a2[2];
            }
            if (3.0 <= *(float *)(a0 + 0x28)) {
                *(u32 *)(a0 + 0x28) = 0x40400000;
            }
            if (*(int *)(a0 + 0x124) == 2) {
                copy6_to_fields(a0, 0x8c2851b0, a2, a3);
            } else {
                copy6_to_fields(a0, 0x8c2851c8, a2, a3);
            }
            CMushroomerBody_uses_rand_float_031bb4(a0, a1, a2, a3);
            if (cVar10 == '\0') {
                uVar6 = CONCAT44(a1[1], a2[1]);
            } else {
                uVar6 = *(u64 *)(a1 + 1);
            }
            if (cVar9 != '\0' || (float)uVar6 <= (float)((u64)uVar6 >> 0x20)) {
                iVar3 = get_field_1c_026dd8(a0 + 0xb0, ar5_00, ar6_00);
                fVar4 = (float)((u64)uVar6 >> 0x20);
                if (iVar3 != 9) {
                    a3 = 0;
                    ar6_00 = (u32 *)0xffffffff;
                    ar5_00 = (u32 *)0x9;
                    CAnimBody_SetAnimation(a0 + 0xb0, 9, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, ar5_00, ar6_00, a3);
                }
            } else {
                a3 = 0;
                ar6_00 = NULL;
                ar5_00 = (u32 *)0x1;
                CAnimBody_SetAnimation(a0 + 0xb0, 1, 0, 0);
                fVar4 = (float)((u64)uVar6 >> 0x20);
            }
            vec3_clear(a0 + 0x90, ar5_00, ar6_00, a3);
            vec3_clear(a0 + 0x224, ar5_00, ar6_00, a3);
        case 1:
            *(u32 *)(a0 + 0x40) = 3;
        case 3:
            iVar3 = get_field_1c_026dd8(a0 + 0xb0, ar5_00, ar6_00);
            if (iVar3 == 1) {
                iVar3 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, ar6_00, a3);
                if (iVar3 == 1) {
                    if (cVar10 == '\0') {
                        uVar6 = CONCAT44(a1[1], a2[1]);
                    } else {
                        uVar6 = *(u64 *)(a1 + 1);
                    }
                    if (cVar9 == '\0' && (float)uVar6 < (float)((u64)uVar6 >> 0x20)) {
                        vec3_clear(a0 + 0x224, ar5_00, ar6_00, a3);
                        a3 = 0;
                        CAnimBody_SetAnimation(a0 + 0xb0, 9, 0, 0);
                    }
                } else {
                    CAnimBody_GetCurFrame(a0 + 0xb0, ar5_00, ar6_00, a3);
                    if (cVar10 == '\0') {
                        fVar7 = 15.0;
                    } else {
                        fVar4 = 15.0;
                        fVar7 = 35.0;
                    }
                    if (cVar9 != '\0' || fVar7 <= fVar4) {
                        CAnimBody_GetCurFrame(a0 + 0xb0, ar5_00, ar6_00, a3);
                        if (cVar10 == '\0') {
                            fVar4 = 35.0;
                        } else {
                            fVar7 = 35.0;
                            fVar4 = 7.73517e-43;
                        }
                        if (cVar9 == '\0' && fVar7 < fVar4) {
                            if (cVar10 == '\0') {
                                dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x228), in_fr3);
                                dVar5 = (double)CONCAT44(0x41a00000, g_8c13af4c);
                            } else {
                                dVar8 = *(double *)(a0 + 0x228);
                                dVar5 = 3.954695087201342e+231;
                            }
                            if (cVar9 == '\0') {
                                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) +
                                                             SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20),
                                                         SUB84(dVar8, 0));
                            } else {
                                dVar8 = dVar8 + dVar5 / dVar5;
                            }
                            if (cVar10 == '\0') {
                                *(int *)(a0 + 0x228) = (int)((u64)dVar8 >> 0x20);
                            } else {
                                *(double *)(a0 + 0x228) = dVar8;
                            }
                        } else {
                            if (cVar10 == '\0') {
                                dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x228), in_fr3);
                                dVar5 = (double)CONCAT44(0x41c80000, g_8c13af4c);
                            } else {
                                dVar8 = *(double *)(a0 + 0x228);
                                dVar5 = 2.8113808922932564e+173;
                            }
                            if (cVar9 == '\0') {
                                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) -
                                                             SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20),
                                                         SUB84(dVar8, 0));
                            } else {
                                dVar8 = dVar8 - dVar5 / dVar5;
                            }
                            if (cVar10 == '\0') {
                                *(int *)(a0 + 0x228) = (int)((u64)dVar8 >> 0x20);
                            } else {
                                *(double *)(a0 + 0x228) = dVar8;
                            }
                        }
                    }
                }
            } else if (iVar3 == 9) {
                if (cVar10 == '\0') {
                    uVar6 = CONCAT44(a1[1], a2[1]);
                } else {
                    uVar6 = *(u64 *)(a1 + 1);
                }
                if (cVar9 != '\0' || (float)uVar6 <= (float)((u64)uVar6 >> 0x20)) {
                    CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, ar5_00, ar6_00, a3);
                } else {
                    CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, ar6_00, a3);
                    a3 = 0;
                    uVar2 = 0;
                    uVar1 = 1;
                    CAnimBody_SetAnimation(a0 + 0xb0, 1, 0, 0);
                    vec3_clear(a0 + 0x224, uVar1, uVar2, a3);
                }
            } else {
                iVar3 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, ar6_00, a3);
                if (iVar3 == 1) {
                    if (cVar10 == '\0') {
                        uVar6 = CONCAT44(a1[1], a2[1]);
                    } else {
                        uVar6 = *(u64 *)(a1 + 1);
                    }
                    if (cVar9 != '\0' || (float)uVar6 <= (float)((u64)uVar6 >> 0x20)) {
                        a3 = 0;
                        CAnimBody_SetAnimation(a0 + 0xb0, 9, 0, 0);
                    } else {
                        a3 = 0;
                        CAnimBody_SetAnimation(a0 + 0xb0, 1, 0, 0);
                    }
                }
            }
            break;
        case 4:
            CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, a1, a2, a3);
        }
    }
    uVar1 = CMushroomerBody_vec_031764(a0, a2, a1, a3);
    Vec3_make(a0 + 0x14, a2, a1, a3, auStack_24);
    uVar2 = Vec3_length(auStack_24, a2, a1, a3);
    Vec3_assign(a0 + 0x80, uVar2, a1, a3);
    Vec3_dtor(auStack_24, 0xffffffff, a1, a3);
    return uVar1;
}

/*
 * game_uses_CAnimBody_SetFrame_0a1cdc  0x8c0a1cdc
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is CAnimBody_SetFrame
 */
u32 game_uses_CAnimBody_SetFrame_0a1cdc(int a0, int a1, int *a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    float fVar4;
    double dVar5;
    float fVar6;
    u32 in_fr3;
    double dVar7;
    bool bVar8;
    char cVar9;
    char cVar10;

    cVar10 = '\0';
    cVar9 = '\0';
    uVar3 = 1;
    iVar1 = *(int *)(a0 + 300);
    if ((iVar1 < 5) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            a3 = 0;
            a2 = (int *)0xffffffff;
            a1 = 3;
            CAnimBody_SetAnimation(a0 + 0xb0, 3, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, a1, a2, a3);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            Vec3_assign_f(a0 + 0x14, a1, a2, a3);
        case 1:
            iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
            if (iVar1 == 1) {
                uVar2 = 3;
                get_motion_data(a0 + 0xb0, 3, a2, a3);
                CAnimBody_SetFrame(a0 + 0xb0, uVar2, a2, a3);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            break;
        case 2:
            uVar2 = 0x3c23d70a;
            *(float *)(a0 + 0x94) = *(float *)(a0 + 0x94) + 0.01;
            (**(code **)(*a2 + 0x184))(a2, a1, a2, a3);
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a1 + 4), in_fr3);
                dVar5 = (double)CONCAT44(0x41200000, uVar2);
            } else {
                dVar7 = *(double *)(a1 + 4);
                dVar5 = 6.28650578250278e-312;
            }
            if (cVar9 == '\0') {
                fVar6 = (float)((u64)dVar5 >> 0x20);
                fVar4 = SUB84(dVar5, 0) - fVar6;
                dVar5 = (double)CONCAT44(fVar6, fVar4);
                bVar8 = fVar4 < (float)((u64)dVar7 >> 0x20);
            } else {
                dVar5 = dVar5 - dVar5;
                bVar8 = dVar5 < dVar7;
            }
            if (bVar8) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x94) = 0;
                } else {
                    *(u64 *)(a0 + 0x94) = (u64)dVar5 & 0xffffffff;
                }
            }
            break;
        case 3:
            uVar2 = 0x3c23d70a;
            *(float *)(a0 + 0x94) = *(float *)(a0 + 0x94) - 0.01;
            (**(code **)(*a2 + 0x128))(a2, a1, a2, a3);
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a1 + 4), in_fr3);
                dVar5 = (double)CONCAT44(0x41200000, uVar2);
            } else {
                dVar7 = *(double *)(a1 + 4);
                dVar5 = 6.28650578250278e-312;
            }
            if (cVar9 == '\0') {
                fVar6 = (float)((u64)dVar5 >> 0x20);
                fVar4 = SUB84(dVar5, 0) + fVar6;
                dVar5 = (double)CONCAT44(fVar6, fVar4);
                bVar8 = fVar4 < (float)((u64)dVar7 >> 0x20);
            } else {
                dVar5 = dVar5 + dVar5;
                bVar8 = dVar5 < dVar7;
            }
            if (!bVar8) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x94) = 0;
                } else {
                    *(u64 *)(a0 + 0x94) = (u64)dVar5 & 0xffffffff;
                }
                uVar3 = 0;
            }
        }
    }
    return uVar3;
}

/*
 * CMushroomerBody_AwayFrom  0x8c0a1ec4
 * called by: Class_12ad14_uses_rand_float_0a37c8
 * strings: "Invalid Flag Number.."; "CMushroomerBody::AwayFrom()"
 */
u32 CMushroomerBody_AwayFrom(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    int ar6_00;
    u32 ar7_00;
    u32 uVar5;
    u32 in_fr1;
    double dVar6;
    char cVar7;
    char cVar8;
    u32 in_stack_00000000;
    u32 in_stack_00000004;
    u8 auStack_8c[16];
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[20];

    cVar8 = '\0';
    cVar7 = '\0';
    uVar5 = 1;
    iVar1 = *(int *)(a0 + 300);
    iVar3 = a1;
    if (iVar1 == 0) {
        if (*(int *)(a0 + 0x270) == 1) {
            se_play_at_object(a0, 1, a1, in_stack_00000000);
            *(u32 *)(a0 + 0x270) = 0;
        }
        ar7_00 = 0;
        uVar4 = 0xffffffff;
        uVar2 = 5;
        CAnimBody_SetAnimation(a0 + 0xb0, 5, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar2, uVar4, ar7_00);
        if (a2 == 0) {
        LAB_8c0a1f82:
            Vec3_sub(a1, a3, uVar4, ar7_00, auStack_2c);
            uVar2 = Vec3_length(auStack_2c, a3, uVar4, ar7_00);
            Vec3_assign(a0 + 0x14, uVar2, uVar4, ar7_00);
            Vec3_dtor(auStack_2c, 0xffffffff, uVar4, ar7_00);
            if (cVar8 != '\0') {
                in_fr1 = 0x40400000;
            }
            CMushroomerBody_vec_032518(a0, a1, in_stack_00000004, in_stack_00000000);
            Vec3_assign(a0 + 0x260, auStack_3c, in_stack_00000004, in_stack_00000000);
            Vec3_dtor(auStack_3c, 0xffffffff, in_stack_00000004, in_stack_00000000);
            a3 = in_stack_00000000;
        } else {
            if (a2 != 1) {
                ar7_00 = 2;
                uVar4 = 1;
                report_error_message("Invalid Flag Number..", "CMushroomerBody::AwayFrom()", 1, 2);
                goto LAB_8c0a1f82;
            }
            Vec3_scale(a3, &g_8c13af90, uVar4, ar7_00, auStack_4c);
            Vec3_assign(a0 + 0x14, auStack_4c, uVar4, ar7_00);
            Vec3_dtor(auStack_4c, 0xffffffff, uVar4, ar7_00);
            if (cVar8 != '\0') {
                in_fr1 = 0x40400000;
            }
            CMushroomerBody_vec_032518(a0, a1, in_stack_00000004, in_stack_00000000);
            Vec3_assign(a0 + 0x260, auStack_5c, in_stack_00000004, in_stack_00000000);
            Vec3_dtor(auStack_5c, 0xffffffff, in_stack_00000004, in_stack_00000000);
            a3 = in_stack_00000000;
        }
        iVar1 = a1;
        Vec3_sub(a0 + 0x260, a1, in_stack_00000004, a3, auStack_6c);
        uVar2 = Vec3_length(auStack_6c, iVar1, in_stack_00000004, a3);
        Vec3_assign(a0 + 0x14, uVar2, in_stack_00000004, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_6c, 0xffffffff, in_stack_00000004, a3);
        vec3_clear(a0 + 0x224, uVar2, in_stack_00000004, a3);
        copy6_to_fields(a0, 0x8c2851b0, in_stack_00000004, a3);
        if (cVar8 == '\0') {
            *(u32 *)(a0 + 0x34) = 0x40000000;
        } else {
            in_fr1 = 0x40000000;
            *(u64 *)(a0 + 0x34) = 0x8c032a6440000000;
        }
        uVar4 = 0x5a;
        uVar2 = 0x1e;
        iVar1 = rand_range(a0, 0x1e, 0x5a);
        if (cVar7 == '\0') {
            dVar6 = (double)CONCAT44((float)iVar1, in_fr1);
        } else {
            dVar6 = (double)iVar1;
        }
        if (cVar8 == '\0') {
            *(int *)(a0 + 0x38) = (int)((u64)dVar6 >> 0x20);
        } else {
            *(double *)(a0 + 0x38) = dVar6;
        }
        rand_float(a0, uVar2, uVar4);
        a2 = a0 + 0x260;
        CMushroomerBody_uses_rand_float_031bb4(a0, a1, a2, a3);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else if (iVar1 != 1) {
        if (iVar1 == 2) {
            iVar3 = a0 + 0x260;
            CMushroomerBody_vec_031764(a0, iVar3, a1, a3);
            iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, iVar3, a1, a3);
            ar6_00 = a1;
            if (iVar1 == 1) {
                a3 = 0;
                ar6_00 = -1;
                iVar3 = 0;
                CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, iVar3, ar6_00, a3);
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
        } else {
            ar6_00 = a2;
            if (iVar1 == 3) {
                iVar3 = a0 + 0x260;
                CMushroomerBody_vec_031764(a0, iVar3, a1, a3);
                iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, iVar3, a1, a3);
                ar6_00 = a1;
                if (iVar1 == 1) {
                    iVar3 = 0x8c2851b0;
                    copy6_to_fields(a0, 0x8c2851b0, a1, a3);
                    uVar5 = 0;
                    *(u32 *)(a0 + 300) = 0;
                    ar6_00 = a1;
                }
            }
        }
        goto LAB_8c0a231a;
    }
    CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, iVar3, a2, a3);
    iVar3 = a0 + 0x260;
    CMushroomerBody_vec_031764(a0, iVar3, a1, a3);
    ar6_00 = a1;
    if (*(int *)(a0 + 0x40) == 4) {
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    }
LAB_8c0a231a:
    Vec3_make(a0 + 0x14, iVar3, ar6_00, a3, auStack_7c);
    uVar2 = Vec3_length(auStack_7c, iVar3, ar6_00, a3);
    Vec3_scale(uVar2, &g_8c13af94, ar6_00, a3, auStack_8c);
    Vec3_assign(a0 + 0x80, auStack_8c, ar6_00, a3);
    Vec3_dtor(auStack_8c, 0xffffffff, ar6_00, a3);
    Vec3_dtor(auStack_7c, 0xffffffff, ar6_00, a3);
    return uVar5;
}

/*
 * static_init_285204  0x8c0a23c4
 * static initialiser: constructs 1 global object (8c285204..8c285204) and registers object_dtor_delete for exit
 */
u32 static_init_285204(int a0, double *a1, double *a2, double *a3) {
    u32 uVar1;
    int iVar2;
    double *pdVar3;
    code *ar5_00;
    double *ar6_00;
    u32 ar6_01;
    float *ar6_02;
    double *ar7_00;
    u32 uVar4;
    float fVar5;
    double in_dr0;
    u64 uVar6;
    double dVar7;
    u64 uVar8;
    float fVar10;
    double dVar9;
    u32 in_fr3;
    double in_dr14;
    double in_xd0;
    char cVar11;
    char cVar12;
    u8 auStack_98[12];
    u8 auStack_8c[16];
    u8 auStack_7c[12];
    u8 auStack_70[12];
    u8 auStack_64[16];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[12];
    float fStack_28;
    u32 uStack_24;
    float fStack_20;
    u32 uStack_1c;

    cVar12 = '\0';
    cVar11 = '\0';
    pdVar3 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    if (g_8c285210 == '\0') {
        uVar1 = Vec3_set_zero(0x8c285214);
        ar6_00 = (double *)0x8c285204;
        global_list_push(uVar1, object_dtor_delete, 0x8c285204, ar7_00);
        pdVar3 = (double *)&g_8c285210;
        g_8c285210 = '\x01';
    }
    Vec3_ctor_zero(&fStack_28, pdVar3, ar6_00);
    iVar2 = *(int *)(a0 + 300);
    if ((5 < iVar2) || (iVar2 < 0))
        goto switchD_8c0a242e_default;
    switch (iVar2) {
    case 0:
        ar7_00 = NULL;
        ar6_01 = 0xffffffff;
        uVar1 = 9;
        CAnimBody_SetAnimation(a0 + 0xb0, 9, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar1, ar6_01, ar7_00);
        vec3_clear(a0 + 0x224, uVar1, ar6_01, ar7_00);
        copy6_to_fields(a0, 0x8c2851b0, ar6_01, ar7_00);
        pdVar3 = a1;
        ar6_00 = a2;
        CMushroomerBody_uses_rand_float_031bb4(a0, a1, a2, ar7_00);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        break;
    case 2:
        goto switchD_8c0a242e_caseD_2;
    case 3:
        goto switchD_8c0a242e_caseD_3;
    case 4:
        goto switchD_8c0a242e_caseD_4;
    case 5:
        goto switchD_8c0a242e_caseD_5;
    }
    CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, pdVar3, ar6_00, ar7_00);
    pdVar3 = a2;
    ar6_00 = a1;
    iVar2 = CMushroomerBody_vec_031764(a0, a2, a1, ar7_00);
    if (iVar2 == 0) {
        *(u32 *)(a0 + 0x40) = 3;
        CAnimBody_GetCurFrame(a0 + 0xb0, pdVar3, ar6_00, ar7_00);
        if (cVar12 == '\0') {
            *(int *)(a0 + 0x244) = (int)((u64)in_dr0 >> 0x20);
        } else {
            *(double *)(a0 + 0x244) = in_dr0;
        }
        if (cVar12 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)in_dr0 & 0xffffffff;
        }
        *(u32 *)(a0 + 300) = 3;
    switchD_8c0a242e_caseD_3:
        Vec3_assign(&fStack_28, a1, ar6_00, ar7_00);
        if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(*(u32 *)(a2 + 1), in_fr3);
            dVar7 = (double)CONCAT44(0x41c80000, *(float *)(a3 + 1));
        } else {
            dVar9 = a2[1];
            in_xd0 = a3[1];
            dVar7 = 4.24944422004087e-312;
        }
        if (cVar11 == '\0') {
            fVar5 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar5 = SUB84(dVar7 - dVar7, 0);
        }
        if ((float)((u64)dVar9 >> 0x20) == fVar5) {
            if (cVar12 == '\0') {
                fStack_20 = *(float *)(a3 + 1);
                dVar7 = (double)CONCAT44(fStack_20, fVar5);
            } else {
                dVar7 = a3[1];
                fStack_20 = SUB84(dVar7, 0);
                uStack_1c = (u32)((u64)dVar7 >> 0x20);
            }
        } else {
            if (cVar12 == '\0') {
                uVar8 = CONCAT44(0x41c80000, *(u32 *)a2);
            } else {
                in_xd0 = *a2;
                uVar8 = 0xc041c80000;
            }
            if ((float)uVar8 == (float)(uVar8 >> 0x20)) {
                dVar7 = (double)(uVar8 & 0xffffffff);
                if (cVar12 == '\0') {
                    fStack_28 = 0.0;
                } else {
                    uStack_24 = 0;
                    fStack_28 = (float)uVar8;
                }
            } else {
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(*(u32 *)a2, SUB84(dVar9, 0));
                    dVar7 = (double)CONCAT44(0x41c80000, *(float *)a3);
                } else {
                    dVar9 = *a2;
                    in_xd0 = *a3;
                    dVar7 = 4.07968455676365e-312;
                }
                if (cVar11 == '\0') {
                    fVar5 = (float)((u64)dVar7 >> 0x20);
                    dVar7 = (double)CONCAT44(fVar5, SUB84(dVar7, 0) - fVar5);
                } else {
                    dVar7 = dVar7 - dVar7;
                }
                if ((float)((u64)dVar9 >> 0x20) == SUB84(dVar7, 0)) {
                    if (cVar12 == '\0') {
                        dVar7 = (double)CONCAT44(*(float *)a3, SUB84(dVar7, 0));
                        fStack_28 = *(float *)a3;
                    } else {
                        dVar7 = *a3;
                        fStack_28 = SUB84(dVar7, 0);
                        uStack_24 = (u32)((u64)dVar7 >> 0x20);
                    }
                }
            }
        }
        uVar1 = SUB84(dVar9, 0);
        uVar4 = SUB84(dVar7, 0);
        iVar2 = a0 + 0x14;
        ar6_02 = &fStack_28;
        game_vec_0a3dc0(a0, a1, ar6_02, iVar2, auStack_70);
        vec3_copy_8c023d8c(a0 + 0x238, auStack_70, ar6_02, iVar2);
        object_dtor_delete(auStack_70, 0xffffffff, ar6_02, iVar2);
        if (cVar12 == '\0') {
            *(u32 *)(a0 + 0x238) = 0;
            dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x23c), uVar1);
            in_dr0 = (double)CONCAT44(0x41f00000, *(u32 *)(a0 + 0x244));
        } else {
            *(u64 *)(a0 + 0x238) = (u64)uVar4;
            dVar9 = *(double *)(a0 + 0x23c);
            in_xd0 = *(double *)(a0 + 0x244);
            in_dr0 = 1.22281613457048e-311;
        }
        if (cVar11 == '\0') {
            fVar10 = (float)((u64)in_dr0 >> 0x20);
            fVar5 = SUB84(in_dr0, 0) + fVar10;
            in_dr0 = (double)CONCAT44(fVar10, fVar5);
            dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) / fVar5, SUB84(dVar9, 0));
        } else {
            in_dr0 = in_dr0 + in_dr0;
            dVar9 = dVar9 / in_dr0;
        }
        if (cVar12 == '\0') {
            *(int *)(a0 + 0x23c) = (int)((u64)dVar9 >> 0x20);
        } else {
            *(double *)(a0 + 0x23c) = dVar9;
        }
        in_dr0 = (double)((u64)in_dr0 & 0xffffffff);
        if (cVar12 == '\0') {
            *(u32 *)(a0 + 0x240) = 0;
        } else {
            *(double *)(a0 + 0x240) = in_dr0;
        }
        ar7_00 = NULL;
        ar6_00 = NULL;
        CAnimBody_SetAnimation(a0 + 0xb0, 7, 0, 0);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    switchD_8c0a242e_caseD_4:
        fVar5 = SUB84(in_dr0, 0);
        if (cVar12 == '\0') {
            fVar5 = *(float *)(a0 + 0x28);
        } else {
            in_xd0 = *(double *)(a0 + 0x28);
        }
        if (cVar11 != '\0' || 0.0 <= fVar5) {
            vec3_copy_8c02b5fc(auStack_7c, a0 + 0x238, ar6_00);
            Vec3_rotate_euler_deg(a0 + 0x80, auStack_7c, ar6_00, ar7_00, auStack_8c);
            Vec3_assign(a0 + 0x80, auStack_8c, ar6_00, ar7_00);
            Vec3_dtor(auStack_8c, 0xffffffff, ar6_00, ar7_00);
            object_dtor_delete(auStack_7c, 0xffffffff, ar6_00, ar7_00);
        }
        CMushroomerBody_vec_031764(a0, a2, a1, ar7_00);
        *(u32 *)(a0 + 0x40) = 3;
        if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x234), *(u32 *)(a0 + 0x28));
        } else {
            in_xd0 = *(double *)(a0 + 0x28);
            dVar9 = *(double *)(a0 + 0x234);
        }
        if (cVar11 == '\0') {
            fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
        } else {
            fVar5 = SUB84(dVar9 - dVar9, 0);
        }
        if (cVar12 == '\0') {
            *(float *)(a0 + 0x28) = fVar5;
            fVar5 = *(float *)(a0 + 0x28);
        } else {
            *(double *)(a0 + 0x28) = in_xd0;
        }
        if (cVar11 != '\0' || fVar5 <= 0.0) {
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = (u64)(u32)fVar5;
            }
        }
        fVar5 = 0.0;
        CAnimBody_GetCurFrame(a0 + 0xb0, a2, a1, ar7_00);
        if (cVar12 == '\0') {
            fVar10 = 30.0;
        } else {
            fVar5 = 30.0;
            fVar10 = 8.07148e-43;
        }
        if ((cVar11 != '\0' || fVar10 <= fVar5) && (iVar2 = get_field_1c_026dd8(a0 + 0xb0, a2, a1), iVar2 == 7)) {
            if (cVar12 == '\0') {
                fVar5 = *(float *)(a0 + 0x28);
            }
            in_dr0 = (double)(u64)(u32)fVar5;
            if (fVar5 == 0.0) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            switchD_8c0a242e_caseD_5:
                uVar4 = SUB84(in_dr0, 0);
                *(u32 *)(a0 + 0x270) = 1;
                iVar2 = a0 + 0xb0;
                ar5_00 = CAnimBody_AdvanceFrame_wrap;
                CAnimBody_AdvanceFrame_wrap(iVar2, CAnimBody_AdvanceFrame_wrap, iVar2, ar7_00);
                Vec3_set_xyz(auStack_98, ar5_00, iVar2, ar7_00);
                vec3_copy_8c023d8c(a0 + 0x238, auStack_98, iVar2, ar7_00);
                object_dtor_delete(auStack_98, 0xffffffff, iVar2, ar7_00);
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = (u64)uVar4;
                }
                goto switchD_8c0a242e_default;
            }
        }
        CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a2, a1, ar7_00);
    } else {
        Vec3_set_xyz(auStack_34, pdVar3, ar6_00, ar7_00);
        ar7_00 = (double *)(a0 + 0x14);
        ar6_00 = a2;
        game_vec_031eb0(a0, a1, a2, ar7_00, auStack_44);
        Vec3_assign(&fStack_28, auStack_44, ar6_00, ar7_00);
        Vec3_dtor(auStack_44, 0xffffffff, ar6_00, ar7_00);
        object_dtor_delete(auStack_34, 0xffffffff, ar6_00, ar7_00);
        pdVar3 = a2;
        Vec3_distance_sq(a1, a2, ar6_00, ar7_00);
        fVar5 = (float)((u64)in_dr0 >> 0x20);
        if (cVar12 == '\0') {
            fVar10 = 200.0;
            in_dr0 = in_xd0;
        } else {
            fVar5 = 200.0;
            fVar10 = 0.01;
        }
        if (cVar11 == '\0' && fVar5 < fVar10) {
            if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x14), fStack_28);
            } else {
                in_dr0 = (double)CONCAT44(uStack_24, fStack_28);
                dVar9 = *(double *)(a0 + 0x14);
            }
            if (cVar11 == '\0') {
                fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                fVar5 = SUB84(dVar9 - dVar9, 0);
            }
            if (cVar12 == '\0') {
                fVar10 = 0.01;
            } else {
                fVar5 = 0.01;
                fVar10 = -0.01;
            }
            if (cVar11 == '\0' && fVar5 < fVar10) {
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x14), fStack_28);
                } else {
                    in_dr0 = (double)CONCAT44(uStack_24, fStack_28);
                    dVar9 = *(double *)(a0 + 0x14);
                }
                if (cVar11 == '\0') {
                    fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar5 = SUB84(dVar9 - dVar9, 0);
                }
                if (cVar12 == '\0') {
                    fVar10 = -0.01;
                } else {
                    fVar5 = -0.01;
                    fVar10 = 2.74654e-43;
                }
                if (cVar11 == '\0' && fVar10 < fVar5) {
                    if (cVar12 == '\0') {
                        dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x18), uStack_24);
                    } else {
                        in_dr0 = (double)CONCAT44(fStack_20, uStack_24);
                        dVar9 = *(double *)(a0 + 0x18);
                    }
                    if (cVar11 == '\0') {
                        fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                    } else {
                        fVar5 = SUB84(dVar9 - dVar9, 0);
                    }
                    if (cVar12 == '\0') {
                        fVar10 = 0.01;
                    } else {
                        fVar5 = 0.01;
                        fVar10 = -0.01;
                    }
                    if (cVar11 == '\0' && fVar5 < fVar10) {
                        if (cVar12 == '\0') {
                            dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x18), uStack_24);
                        } else {
                            in_dr0 = (double)CONCAT44(fStack_20, uStack_24);
                            dVar9 = *(double *)(a0 + 0x18);
                        }
                        if (cVar11 == '\0') {
                            fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                        } else {
                            fVar5 = SUB84(dVar9 - dVar9, 0);
                        }
                        if (cVar12 == '\0') {
                            fVar10 = -0.01;
                        } else {
                            fVar5 = -0.01;
                            fVar10 = 2.74654e-43;
                        }
                        if (cVar11 == '\0' && fVar10 < fVar5) {
                            if (cVar12 == '\0') {
                                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x1c), fStack_20);
                            } else {
                                in_dr0 = (double)CONCAT44(uStack_1c, fStack_20);
                                dVar9 = *(double *)(a0 + 0x1c);
                            }
                            if (cVar11 == '\0') {
                                fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                            } else {
                                fVar5 = SUB84(dVar9 - dVar9, 0);
                            }
                            if (cVar12 == '\0') {
                                fVar10 = 0.01;
                            } else {
                                fVar5 = 0.01;
                                fVar10 = -0.01;
                            }
                            if (cVar11 == '\0' && fVar5 < fVar10) {
                                if (cVar12 == '\0') {
                                    dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x1c), fStack_20);
                                    in_xd0 = in_dr0;
                                } else {
                                    in_xd0 = (double)CONCAT44(uStack_1c, fStack_20);
                                    dVar9 = *(double *)(a0 + 0x1c);
                                }
                                if (cVar11 == '\0') {
                                    fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                                } else {
                                    fVar5 = SUB84(dVar9 - dVar9, 0);
                                }
                                if (cVar12 == '\0') {
                                    fVar10 = -0.01;
                                } else {
                                    fVar5 = -0.01;
                                    fVar10 = 2.74654e-43;
                                }
                                if (cVar11 == '\0' && fVar10 < fVar5) {
                                    if (cVar12 == '\0') {
                                        uVar1 = *(u32 *)(a0 + 0x28);
                                        uVar6 = CONCAT44(uVar1, fVar5);
                                        *(u32 *)(a0 + 0x24) = uVar1;
                                    } else {
                                        uVar6 = *(u64 *)(a0 + 0x28);
                                        *(u64 *)(a0 + 0x24) = uVar6;
                                    }
                                    pdVar3 = a1;
                                    Vec3_distance_sq(a2, a1, ar6_00, ar7_00);
                                    if (cVar12 == '\0') {
                                        in_dr14 =
                                            (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)uVar6 >> 0x20));
                                        dVar9 = (double)CONCAT44(0x40000000, (int)uVar6);
                                    } else {
                                        dVar9 = 1.19733612505215e-311;
                                    }
                                    if (cVar11 == '\0') {
                                        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                                                   SUB84(in_dr14, 0) * (float)((u64)dVar9 >> 0x20));
                                    } else {
                                        in_dr14 = in_dr14 * dVar9;
                                    }
                                    if (cVar12 == '\0') {
                                        dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(dVar9, 0));
                                    } else {
                                        dVar9 = *(double *)(a0 + 0x28);
                                    }
                                    if (cVar11 == '\0') {
                                        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20),
                                                                   SUB84(in_dr14, 0) / (float)((u64)dVar9 >> 0x20));
                                    } else {
                                        in_dr14 = in_dr14 / dVar9;
                                    }
                                    if (cVar12 == '\0') {
                                        in_dr0 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(dVar9, 0));
                                    } else {
                                        in_dr0 = *(double *)(a0 + 0x28);
                                    }
                                    if (cVar11 == '\0') {
                                        in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) / SUB84(in_dr14, 0),
                                                                  SUB84(in_dr0, 0));
                                    } else {
                                        in_dr0 = in_dr0 / in_dr14;
                                    }
                                    if (cVar12 == '\0') {
                                        *(int *)(a0 + 0x234) = (int)((u64)in_dr0 >> 0x20);
                                    } else {
                                        *(double *)(a0 + 0x234) = in_dr0;
                                    }
                                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                                switchD_8c0a242e_caseD_2:
                                    fVar5 = SUB84(in_dr0, 0);
                                    if (cVar12 == '\0') {
                                        fVar5 = *(float *)(a0 + 0x28);
                                    } else {
                                        in_xd0 = *(double *)(a0 + 0x28);
                                    }
                                    uVar8 = (u64)(u32)fVar5;
                                    if (cVar11 == '\0' && 0.0 < fVar5) {
                                        if (cVar12 == '\0') {
                                            dVar9 = (double)CONCAT44(0x41f00000, *(u32 *)(a0 + 0x244));
                                        } else {
                                            in_xd0 = *(double *)(a0 + 0x244);
                                            dVar9 = 1.19735218507889e-311;
                                        }
                                        if (cVar11 == '\0') {
                                            fVar5 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
                                        } else {
                                            fVar5 = SUB84(dVar9 + dVar9, 0);
                                        }
                                        if (cVar12 == '\0') {
                                            dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x234), fVar5);
                                        } else {
                                            dVar9 = *(double *)(a0 + 0x234);
                                        }
                                        if (cVar11 == '\0') {
                                            fVar5 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
                                        } else {
                                            fVar5 = SUB84(dVar9 * dVar9, 0);
                                        }
                                        if (cVar12 == '\0') {
                                            uVar6 = CONCAT44(*(u32 *)(a0 + 0x28), fVar5);
                                        } else {
                                            uVar6 = *(u64 *)(a0 + 0x28);
                                        }
                                        if (cVar11 == '\0' && (float)uVar6 < (float)((u64)uVar6 >> 0x20)) {
                                            CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, pdVar3, ar6_00, ar7_00);
                                            CMushroomerBody_vec_031764(a0, a2, a1, ar7_00);
                                            *(u32 *)(a0 + 0x40) = 3;
                                            if (cVar12 == '\0') {
                                                dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x234), *(u32 *)(a0 + 0x28));
                                            } else {
                                                in_xd0 = *(double *)(a0 + 0x28);
                                                dVar9 = *(double *)(a0 + 0x234);
                                            }
                                            if (cVar11 == '\0') {
                                                fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
                                            } else {
                                                fVar5 = SUB84(dVar9 - dVar9, 0);
                                            }
                                            if (cVar12 == '\0') {
                                                *(float *)(a0 + 0x28) = fVar5;
                                                fVar5 = *(float *)(a0 + 0x28);
                                            } else {
                                                *(double *)(a0 + 0x28) = in_xd0;
                                            }
                                            if (cVar11 != '\0' || fVar5 <= 0.0) {
                                                if (cVar12 == '\0') {
                                                    *(u32 *)(a0 + 0x28) = 0;
                                                } else {
                                                    *(u64 *)(a0 + 0x28) = (u64)(u32)fVar5;
                                                }
                                            }
                                            uVar8 = (u64)(u32)fVar5;
                                            Vec3_make(a0 + 0x14, a2, a1, ar7_00, auStack_64);
                                            uVar1 = Vec3_length(auStack_64, a2, a1, ar7_00);
                                            Vec3_assign(a0 + 0x80, uVar1, a1, ar7_00);
                                            uVar1 = 0xffffffff;
                                            Vec3_dtor(auStack_64, 0xffffffff, a1, ar7_00);
                                            CAnimBody_GetCurFrame(a0 + 0xb0, uVar1, a1, ar7_00);
                                            if (cVar12 == '\0') {
                                                *(int *)(a0 + 0x244) = (int)(uVar8 >> 0x20);
                                            } else {
                                                *(u64 *)(a0 + 0x244) = uVar8;
                                            }
                                            goto switchD_8c0a242e_default;
                                        }
                                        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                                    } else {
                                        CAnimBody_GetCurFrame(a0 + 0xb0, pdVar3, ar6_00, ar7_00);
                                        if (cVar12 == '\0') {
                                            *(int *)(a0 + 0x244) = (int)(uVar8 >> 0x20);
                                        } else {
                                            *(u64 *)(a0 + 0x244) = uVar8;
                                        }
                                        if (cVar12 == '\0') {
                                            *(u32 *)(a0 + 0x28) = 0;
                                        } else {
                                            *(u64 *)(a0 + 0x28) = uVar8 & 0xffffffff;
                                        }
                                        *(u32 *)(a0 + 300) = 3;
                                    }
                                    goto switchD_8c0a242e_caseD_3;
                                }
                            }
                        }
                    }
                }
            }
        }
        Vec3_make(a0 + 0x14, pdVar3, ar6_00, ar7_00, auStack_54);
        uVar1 = Vec3_length(auStack_54, pdVar3, ar6_00, ar7_00);
        Vec3_assign(a0 + 0x80, uVar1, ar6_00, ar7_00);
        Vec3_dtor(auStack_54, 0xffffffff, ar6_00, ar7_00);
    }
switchD_8c0a242e_default:
    Vec3_dtor(&fStack_28, 0xffffffff, Vec3_dtor, &fStack_28);
    return 1;
}

/*
 * game_state_switch_0a2bf4  0x8c0a2bf4
 * area name: game code; nothing names its area yet; behaviour name: dispatches on a state or mode value (switch)
 * called by: game_vec_0a14d8
 */
u32 game_state_switch_0a2bf4(int a0, double *a1, double *a2, u32 a3) {
    int iVar1;
    int iVar2;
    double *ar5_00;
    u32 uVar3;
    u32 uVar4;
    char cVar5;
    float fVar6;
    double in_dr0;
    float fVar10;
    double dVar7;
    double dVar8;
    u64 uVar9;
    double in_dr2;
    double dVar11;
    u64 in_dr4;
    u32 uVar12;
    u64 in_dr14;
    double in_xd0;
    double in_xd14;
    bool bVar13;
    char cVar14;
    char cVar15;

    uVar3 = SUB84(in_dr2, 0);
    cVar15 = '\0';
    cVar14 = '\0';
    dVar8 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)in_dr4 >> 0x20));
    ar5_00 = (double *)0x1;
    iVar2 = *(int *)(a0 + 300);
    if (7 < iVar2) {
        return 1;
    }
    if (iVar2 < 0) {
        return 1;
    }
    switch (iVar2) {
    case 0:
        vec3_clear(a0 + 0x224, 1, a2, a3);
        Vec3_assign(a0 + 0x54, a1, a2, a3);
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(SUB84(dVar8, 0), 0x41700000);
        } else {
            in_xd0 = -4.2458146733691317e-250;
            dVar7 = in_xd14;
        }
        if (cVar14 == '\0') {
            dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) - SUB84(dVar7, 0), SUB84(dVar7, 0));
        } else {
            dVar7 = dVar7 - dVar7;
        }
        if (cVar15 == '\0') {
            *(int *)(a0 + 0x58) = (int)((u64)dVar7 >> 0x20);
        } else {
            *(double *)(a0 + 0x58) = dVar7;
        }
        copy6_to_fields(a0, 0x8c2851b0, a2, a3);
        iVar2 = a0 + 0x54;
        CMushroomerBody_uses_rand_float_031bb4(a0, a1, iVar2, a3);
        Vec3_distance_sq(a1, a0 + 0x54, iVar2, Vec3_distance_sq);
        uVar3 = SUB84(in_dr2, 0);
        fVar6 = (float)((u64)dVar7 >> 0x20);
        if (cVar15 == '\0') {
            fVar10 = 300.0;
        } else {
            fVar6 = 300.0;
            fVar10 = 2.46629e-43;
            in_xd0 = dVar7;
        }
        if (cVar14 != '\0' || fVar10 <= fVar6) {
            a3 = 0;
            uVar4 = 1;
            CAnimBody_SetAnimation(a0 + 0xb0, 1, 0xffffffff, 0);
            a2 = (double *)0xb0;
            CAnimBody_SetFrame(a0 + 0xb0, uVar4, 0xb0, a3);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            goto switchD_8c0a2c2e_caseD_1;
        }
        a3 = 0;
        a2 = NULL;
        ar5_00 = (double *)0x2;
        CAnimBody_SetAnimation(a0 + 0xb0, 2, 0, 0);
        if (cVar15 == '\0') {
            fVar6 = *(float *)(a0 + 0x28);
        } else {
            in_xd0 = *(double *)(a0 + 0x28);
        }
        in_dr0 = (double)(u64)(u32)fVar6;
        if (fVar6 == 0.0) {
            in_dr0 = (double)CONCAT44(0x3f800000, fVar6);
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x28) = 0x3f800000;
            } else {
                *(double *)(a0 + 0x28) = in_dr0;
            }
        }
        *(u32 *)(a0 + 300) = 3;
    case 3:
    switchD_8c0a2c2e_caseD_3:
        fVar6 = SUB84(in_dr0, 0);
        iVar2 = get_field_1c_026dd8(a0 + 0xb0, ar5_00, a2);
        if (iVar2 == 2) {
            CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, ar5_00, a2, a3);
        } else {
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, a2, a3);
        }
        if (cVar15 == '\0') {
            fVar6 = *(float *)(a0 + 0x18);
        } else {
            in_xd0 = *(double *)(a0 + 0x18);
        }
        cVar5 = cVar14 == '\0' && 0.0 < fVar6;
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)a1, *(u32 *)(a0 + 0x54));
        } else {
            in_xd0 = *(double *)(a0 + 0x54);
            dVar7 = *a1;
        }
        if (cVar14 == '\0') {
            fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 - dVar7, 0);
        }
        if (cVar14 != '\0' || 0.0 <= fVar6) {
            if (cVar15 == '\0') {
                fVar6 = *(float *)(a0 + 0x14);
            } else {
                in_xd0 = *(double *)(a0 + 0x14);
            }
            if (cVar14 != '\0' || 0.0 <= fVar6) {
                cVar5 = cVar5 + '\x01';
            }
        }
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)a1, *(u32 *)(a0 + 0x54));
        } else {
            in_xd0 = *(double *)(a0 + 0x54);
            dVar7 = *a1;
        }
        if (cVar14 == '\0') {
            fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 - dVar7, 0);
        }
        if (cVar14 == '\0' && fVar6 < 0.0) {
            if (cVar15 == '\0') {
                fVar6 = *(float *)(a0 + 0x14);
            } else {
                in_xd0 = *(double *)(a0 + 0x14);
            }
            if (cVar14 == '\0' && fVar6 < 0.0) {
                cVar5 = cVar5 + '\x01';
            }
        }
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)(a1 + 1), *(u32 *)(a0 + 0x5c));
        } else {
            in_xd0 = *(double *)(a0 + 0x5c);
            dVar7 = a1[1];
        }
        if (cVar14 == '\0') {
            fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 - dVar7, 0);
        }
        if (cVar14 != '\0' || 0.0 <= fVar6) {
            if (cVar15 == '\0') {
                fVar6 = *(float *)(a0 + 0x1c);
            } else {
                in_xd0 = *(double *)(a0 + 0x1c);
            }
            if (cVar14 != '\0' || 0.0 <= fVar6) {
                cVar5 = cVar5 + '\x01';
            }
        }
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)(a1 + 1), *(u32 *)(a0 + 0x5c));
        } else {
            in_xd0 = *(double *)(a0 + 0x5c);
            dVar7 = a1[1];
        }
        if (cVar14 == '\0') {
            fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 - dVar7, 0);
        }
        dVar7 = (double)(u64)(u32)fVar6;
        if (cVar14 == '\0' && fVar6 < 0.0) {
            if (cVar15 == '\0') {
                fVar6 = *(float *)(a0 + 0x1c);
            } else {
                in_xd0 = *(double *)(a0 + 0x1c);
            }
            dVar7 = (double)(u64)(u32)fVar6;
            if (cVar14 == '\0' && fVar6 < 0.0) {
                cVar5 = cVar5 + '\x01';
            }
        }
        if (cVar5 == '\x03') {
            if (cVar15 == '\0') {
                uVar3 = *(u32 *)(a0 + 0x28);
                dVar7 = (double)CONCAT44(uVar3, SUB84(dVar7, 0));
                *(u32 *)(a0 + 0x24) = uVar3;
            } else {
                dVar7 = *(double *)(a0 + 0x28);
                *(double *)(a0 + 0x24) = dVar7;
            }
            ar5_00 = (double *)(a0 + 0x54);
            Vec3_distance_sq(a1, ar5_00, a2, a3);
            if (cVar15 == '\0') {
                dVar11 = (double)CONCAT44(0x40000000, SUB84(dVar7, 0));
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar8, 0));
            } else {
                dVar11 = 1.19733612505215e-311;
            }
            if (cVar14 == '\0') {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) * (float)((u64)dVar11 >> 0x20), SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 * dVar11;
            }
            if (cVar15 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(dVar11, 0));
            } else {
                dVar11 = *(double *)(a0 + 0x28);
            }
            if (cVar14 == '\0') {
                dVar8 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) / (float)((u64)dVar11 >> 0x20), SUB84(dVar7, 0));
            } else {
                dVar8 = dVar7 / dVar11;
            }
            if (cVar15 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(dVar11, 0));
            } else {
                dVar7 = *(double *)(a0 + 0x28);
            }
            if (cVar14 == '\0') {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) / (float)((u64)dVar8 >> 0x20), SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 / dVar8;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x234) = (int)((u64)dVar7 >> 0x20);
            } else {
                *(double *)(a0 + 0x234) = dVar7;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        } else {
            ar5_00 = (double *)(a0 + 0x54);
            a2 = a1;
            iVar2 = CMushroomerBody_vec_031764(a0, ar5_00, a1, a3);
            if (iVar2 != 0) {
                if (cVar15 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)((int)a1 + 4), SUB84(in_dr2, 0));
                    dVar7 = (double)CONCAT44(SUB84(dVar8, 0), 0x41700000);
                } else {
                    in_dr2 = *(double *)((int)a1 + 4);
                    in_xd0 = 1.19734804055586e-311;
                    dVar7 = in_xd14;
                }
                if (cVar14 == '\0') {
                    fVar6 = (float)((u64)dVar7 >> 0x20) - SUB84(dVar7, 0);
                    dVar7 = (double)CONCAT44(fVar6, SUB84(dVar7, 0));
                    bVar13 = (float)((u64)in_dr2 >> 0x20) < fVar6;
                } else {
                    dVar7 = dVar7 - dVar7;
                    bVar13 = in_dr2 < dVar7;
                }
                if (bVar13) {
                    if (cVar15 == '\0') {
                        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x234), *(u32 *)(a0 + 0x28));
                    } else {
                        in_xd0 = *(double *)(a0 + 0x28);
                        dVar7 = *(double *)(a0 + 0x234);
                    }
                    if (cVar14 == '\0') {
                        fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
                    } else {
                        fVar6 = SUB84(dVar7 - dVar7, 0);
                    }
                    if (cVar15 == '\0') {
                        *(float *)(a0 + 0x28) = fVar6;
                        fVar6 = *(float *)(a0 + 0x28);
                    } else {
                        *(double *)(a0 + 0x28) = in_xd0;
                        in_xd0 = *(double *)(a0 + 0x28);
                    }
                    if (cVar14 == '\0' && 0.0 < fVar6) {
                        return 1;
                    }
                    if (cVar15 == '\0') {
                        *(u32 *)(a0 + 0x28) = 0;
                    } else {
                        *(u64 *)(a0 + 0x28) = (u64)(u32)fVar6;
                    }
                    if (cVar15 == '\0') {
                        *(u32 *)(a0 + 0x234) = 0;
                    } else {
                        *(u64 *)(a0 + 0x234) = (u64)(u32)fVar6;
                    }
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    break;
                }
            }
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = (u64)dVar7 & 0xffffffff;
            }
            if (cVar15 == '\0') {
                *(u32 *)(a0 + 0x234) = 0;
            } else {
                *(u64 *)(a0 + 0x234) = (u64)dVar7 & 0xffffffff;
            }
            *(u32 *)(a0 + 300) = 4;
        }
        break;
    case 1:
    switchD_8c0a2c2e_caseD_1:
        ar5_00 = (double *)((int)a1 + 4);
        if (cVar15 == '\0') {
            in_dr2 = (double)CONCAT44(*(u32 *)ar5_00, uVar3);
            dVar7 = (double)CONCAT44(SUB84(dVar8, 0), 0x41700000);
        } else {
            in_dr2 = *ar5_00;
            in_xd0 = 1.19734804055586e-311;
            dVar7 = in_xd14;
        }
        if (cVar14 == '\0') {
            fVar6 = (float)((u64)dVar7 >> 0x20) - SUB84(dVar7, 0);
            dVar7 = (double)CONCAT44(fVar6, SUB84(dVar7, 0));
            bVar13 = (float)((u64)in_dr2 >> 0x20) < fVar6;
        } else {
            dVar7 = dVar7 - dVar7;
            bVar13 = in_dr2 < dVar7;
        }
        if (bVar13) {
            ar5_00 = (double *)(a0 + 0x54);
            Vec3_distance_sq(a1, ar5_00, a2, a3);
            if (cVar15 == '\0') {
                in_dr0 = (double)CONCAT44(0x43960000, (int)((u64)dVar7 >> 0x20));
            } else {
                in_dr0 = 6.37158960238423e-312;
                in_xd0 = dVar7;
            }
            if (cVar14 != '\0' || (float)((u64)in_dr0 >> 0x20) <= SUB84(in_dr0, 0)) {
            LAB_8c0a2e1c:
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, a2, a3);
                CAnimBody_GetCurFrame(a0 + 0xb0, ar5_00, a2, a3);
                fVar6 = (float)((u64)in_dr0 >> 0x20);
                if (cVar15 == '\0') {
                    fVar10 = 15.0;
                    in_dr0 = in_xd0;
                } else {
                    fVar6 = 15.0;
                    fVar10 = 1.79366e-43;
                }
                if (cVar14 == '\0' && fVar6 < fVar10) {
                    return 1;
                }
                CAnimBody_GetCurFrame(a0 + 0xb0, ar5_00, a2, a3);
                if (cVar15 == '\0') {
                    fVar6 = 35.0;
                } else {
                    in_dr0 = (double)CONCAT44(fVar10, fVar6);
                    fVar10 = 35.0;
                    fVar6 = 7.73517e-43;
                }
                if (cVar14 == '\0' && fVar10 < fVar6) {
                    if (cVar15 == '\0') {
                        dVar8 = (double)CONCAT44(0x3e19999a, *(u32 *)(a0 + 0x228));
                    } else {
                        in_dr0 = *(double *)(a0 + 0x228);
                        dVar8 = -8.3327967895966e-251;
                    }
                    if (cVar14 == '\0') {
                        fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
                    } else {
                        fVar6 = SUB84(dVar8 + dVar8, 0);
                    }
                    if (cVar15 == '\0') {
                        *(float *)(a0 + 0x228) = fVar6;
                    } else {
                        *(double *)(a0 + 0x228) = in_dr0;
                    }
                } else {
                    if (cVar15 == '\0') {
                        dVar8 = (double)CONCAT44(0x3df5c28f, *(u32 *)(a0 + 0x228));
                    } else {
                        in_dr0 = *(double *)(a0 + 0x228);
                        dVar8 = 9.363579837252917e+86;
                    }
                    if (cVar14 == '\0') {
                        fVar6 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
                    } else {
                        fVar6 = SUB84(dVar8 - dVar8, 0);
                    }
                    if (cVar15 == '\0') {
                        *(float *)(a0 + 0x228) = fVar6;
                    } else {
                        *(double *)(a0 + 0x228) = in_dr0;
                    }
                }
                CMushroomerBody_vec_031764(a0, a0 + 0x54, a1, a3);
                return 1;
            }
            if (cVar15 == '\0') {
                dVar7 = (double)(u64) * (u32 *)(a0 + 0x18);
            } else {
                in_xd0 = *(double *)(a0 + 0x18);
                dVar7 = in_dr0;
            }
            in_dr0 = (double)((u64)dVar7 & 0xffffffff);
            if (cVar14 != '\0' || SUB84(dVar7, 0) <= 0.0)
                goto LAB_8c0a2e1c;
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            goto switchD_8c0a2c2e_caseD_2;
        }
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)dVar7 & 0xffffffff;
        }
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x234) = 0;
        } else {
            *(u64 *)(a0 + 0x234) = (u64)dVar7 & 0xffffffff;
        }
        *(u32 *)(a0 + 300) = 4;
        vec3_clear(a0 + 0x224, ar5_00, a2, a3);
        break;
    case 2:
    switchD_8c0a2c2e_caseD_2:
        iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, a2, a3);
        if (iVar2 == 1) {
            vec3_clear(a0 + 0x224, ar5_00, a2, a3);
            uVar12 = SUB84(dVar8, 0);
            uVar4 = SUB84(in_dr0, 0);
            a3 = 0;
            a2 = (double *)0xffffffff;
            uVar3 = 2;
            CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar3, a2, a3);
            if (cVar15 == '\0') {
                uVar3 = *(u32 *)(a0 + 0x28);
                dVar8 = (double)CONCAT44(uVar3, uVar4);
                *(u32 *)(a0 + 0x24) = uVar3;
            } else {
                dVar8 = *(double *)(a0 + 0x28);
                *(double *)(a0 + 0x24) = dVar8;
            }
            ar5_00 = (double *)(a0 + 0x54);
            Vec3_distance_sq(a1, ar5_00, a2, a3);
            uVar3 = SUB84(dVar8, 0);
            if (cVar15 == '\0') {
                dVar8 = (double)CONCAT44((int)((u64)dVar8 >> 0x20), uVar12);
                dVar7 = (double)CONCAT44(0x40000000, uVar3);
            } else {
                dVar7 = 1.19733612505215e-311;
            }
            if (cVar14 == '\0') {
                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) * (float)((u64)dVar7 >> 0x20), SUB84(dVar8, 0));
            } else {
                dVar8 = dVar8 * dVar7;
            }
            if (cVar15 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(dVar7, 0));
            } else {
                dVar7 = *(double *)(a0 + 0x28);
            }
            if (cVar14 == '\0') {
                dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) / (float)((u64)dVar7 >> 0x20), SUB84(dVar8, 0));
            } else {
                dVar8 = dVar8 / dVar7;
            }
            if (cVar15 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(dVar7, 0));
            } else {
                dVar7 = *(double *)(a0 + 0x28);
            }
            if (cVar14 == '\0') {
                in_dr0 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) / (float)((u64)dVar8 >> 0x20), SUB84(dVar7, 0));
            } else {
                in_dr0 = dVar7 / dVar8;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x234) = (int)((u64)in_dr0 >> 0x20);
            } else {
                *(double *)(a0 + 0x234) = in_dr0;
            }
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, a2, a3);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            goto switchD_8c0a2c2e_caseD_3;
        }
        CAnimBody_GetCurFrame(a0 + 0xb0, ar5_00, a2, a3);
        fVar6 = (float)((u64)in_dr0 >> 0x20);
        if (cVar15 == '\0') {
            fVar10 = 15.0;
            in_dr0 = in_xd0;
        } else {
            fVar6 = 15.0;
            fVar10 = 35.0;
        }
        if (cVar14 == '\0' && fVar6 < fVar10) {
            return 1;
        }
        CAnimBody_GetCurFrame(a0 + 0xb0, ar5_00, a2, a3);
        if (cVar15 == '\0') {
            fVar6 = 35.0;
        } else {
            in_dr0 = (double)CONCAT44(fVar10, fVar6);
            fVar10 = 35.0;
            fVar6 = 7.73517e-43;
        }
        in_xd0 = in_dr0;
        if (cVar14 == '\0' && fVar10 < fVar6) {
            if (cVar15 == '\0') {
                dVar7 = (double)CONCAT44(0x3e19999a, *(u32 *)(a0 + 0x228));
            } else {
                in_xd0 = *(double *)(a0 + 0x228);
                dVar7 = -8.3327967895966e-251;
            }
            if (cVar14 == '\0') {
                dVar7 = (double)(u64)(u32)(SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20));
            } else {
                dVar7 = dVar7 + dVar7;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x228) = SUB84(dVar7, 0);
            } else {
                *(double *)(a0 + 0x228) = in_xd0;
            }
        } else {
            if (cVar15 == '\0') {
                dVar7 = (double)CONCAT44(0x3df5c28f, *(u32 *)(a0 + 0x228));
            } else {
                in_xd0 = *(double *)(a0 + 0x228);
                dVar7 = 3.6211232371055283e+96;
            }
            if (cVar14 == '\0') {
                dVar7 = (double)(u64)(u32)(SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20));
            } else {
                dVar7 = dVar7 - dVar7;
            }
            if (cVar15 == '\0') {
                *(int *)(a0 + 0x228) = SUB84(dVar7, 0);
            } else {
                *(double *)(a0 + 0x228) = in_xd0;
            }
        }
        ar5_00 = (double *)(a0 + 0x54);
        a2 = a1;
        iVar2 = CMushroomerBody_vec_031764(a0, ar5_00, a1, a3);
        if (iVar2 != 0) {
            if (cVar15 == '\0') {
                in_dr2 = (double)CONCAT44(*(u32 *)((int)a1 + 4), SUB84(in_dr2, 0));
                dVar7 = (double)CONCAT44(SUB84(dVar8, 0), 0x41700000);
            } else {
                in_dr2 = *(double *)((int)a1 + 4);
                in_xd0 = 1.19734804055586e-311;
                dVar7 = in_xd14;
            }
            if (cVar14 == '\0') {
                fVar6 = (float)((u64)dVar7 >> 0x20) - SUB84(dVar7, 0);
                dVar7 = (double)CONCAT44(fVar6, SUB84(dVar7, 0));
                bVar13 = (float)((u64)in_dr2 >> 0x20) < fVar6;
            } else {
                dVar7 = dVar7 - dVar7;
                bVar13 = in_dr2 < dVar7;
            }
            if (bVar13) {
                return 1;
            }
        }
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)dVar7 & 0xffffffff;
        }
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x234) = 0;
        } else {
            *(u64 *)(a0 + 0x234) = (u64)dVar7 & 0xffffffff;
        }
        *(u32 *)(a0 + 300) = 4;
        break;
    case 5:
        goto switchD_8c0a2c2e_caseD_5;
    case 6:
        goto switchD_8c0a2c2e_caseD_6;
    case 7:
        if (*(int *)(a0 + 0x248) < 0x12d) {
            CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, 1, a2, a3);
            *(int *)(a0 + 0x248) = *(int *)(a0 + 0x248) + 1;
            return 1;
        }
        iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, 1, a2, a3);
        if (iVar2 != 1) {
            return 1;
        }
        *(u32 *)(a0 + 300) = 0;
        *(u32 *)(a0 + 0x248) = 0;
        return 0;
    }
    uVar3 = SUB84(in_dr2, 0);
    iVar2 = get_field_1c_026dd8(a0 + 0xb0, ar5_00, a2);
    if (iVar2 == 2) {
        CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, ar5_00, a2, a3);
    } else {
        CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, a2, a3);
    }
    if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x234), *(u32 *)(a0 + 0x28));
    } else {
        in_xd0 = *(double *)(a0 + 0x28);
        dVar7 = *(double *)(a0 + 0x234);
    }
    if (cVar14 == '\0') {
        fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 - dVar7, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x28) = fVar6;
        fVar6 = *(float *)(a0 + 0x28);
    } else {
        *(double *)(a0 + 0x28) = in_xd0;
        in_xd0 = *(double *)(a0 + 0x28);
    }
    dVar7 = (double)(u64)(u32)fVar6;
    if (cVar14 == '\0' && 0.0 < fVar6) {
        iVar2 = CMushroomerBody_vec_031764(a0, a0 + 0x54, a1, a3);
        if (iVar2 != 0) {
            if (cVar15 == '\0') {
                dVar11 = (double)CONCAT44(*(u32 *)((int)a1 + 4), uVar3);
                in_xd14 = (double)CONCAT44(SUB84(dVar8, 0), 0x41700000);
            } else {
                dVar11 = *(double *)((int)a1 + 4);
                in_xd0 = 1.19734804055586e-311;
            }
            if (cVar14 == '\0') {
                fVar6 = (float)((u64)in_xd14 >> 0x20) - SUB84(in_xd14, 0);
                dVar7 = (double)CONCAT44(fVar6, SUB84(in_xd14, 0));
                bVar13 = (float)((u64)dVar11 >> 0x20) < fVar6;
            } else {
                dVar7 = in_xd14 - in_xd14;
                bVar13 = dVar11 < dVar7;
            }
            if (bVar13) {
                if (cVar15 == '\0') {
                    dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x28), SUB84(dVar11, 0));
                    dVar7 = (double)CONCAT44(0x41f80000, *(u32 *)(a0 + 0x234));
                } else {
                    dVar8 = *(double *)(a0 + 0x28);
                    dVar7 = 6.37145555296751e-312;
                }
                if (cVar14 == '\0') {
                    bVar13 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20) < (float)((u64)dVar8 >> 0x20);
                } else {
                    bVar13 = dVar7 * dVar7 < dVar8;
                }
                if (bVar13) {
                    return 1;
                }
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                return 1;
            }
        }
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)dVar7 & 0xffffffff;
        }
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x234) = 0;
        } else {
            *(u64 *)(a0 + 0x234) = (u64)dVar7 & 0xffffffff;
        }
        *(u32 *)(a0 + 300) = 5;
    } else {
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)(u32)fVar6;
        }
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x234) = 0;
        } else {
            *(u64 *)(a0 + 0x234) = (u64)(u32)fVar6;
        }
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    }
switchD_8c0a2c2e_caseD_5:
    if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x234), *(u32 *)(a0 + 0x28));
    } else {
        in_xd0 = *(double *)(a0 + 0x28);
        dVar7 = *(double *)(a0 + 0x234);
    }
    if (cVar14 == '\0') {
        fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 - dVar7, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x28) = fVar6;
        fVar6 = *(float *)(a0 + 0x28);
    } else {
        *(double *)(a0 + 0x28) = in_xd0;
        in_xd0 = *(double *)(a0 + 0x28);
    }
    dVar7 = (double)(u64)(u32)fVar6;
    if (cVar14 != '\0' || fVar6 <= 0.0) {
    LAB_8c0a3432:
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)dVar7 & 0xffffffff;
        }
        dVar7 = (double)((u64)dVar7 & 0xffffffff);
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x234) = 0;
        } else {
            *(double *)(a0 + 0x234) = dVar7;
        }
    } else {
        if (cVar15 == '\0') {
            dVar7 = (double)CONCAT44(0x41700000, *(u32 *)((int)a1 + 4));
        } else {
            in_xd0 = *(double *)((int)a1 + 4);
            dVar7 = -8.33279687642364e-251;
        }
        if (cVar14 == '\0') {
            bVar13 = SUB84(dVar7, 0) < SUB84(dVar8, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            bVar13 = dVar7 < dVar8 - dVar7;
        }
        if (!bVar13)
            goto LAB_8c0a3432;
    }
    iVar2 = CMushroomerBody_vec_031764(a0, a0 + 0x54, a1, a0 + 0x54);
    if (iVar2 == 0) {
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)dVar7 & 0xffffffff;
        }
    }
    a3 = 0;
    uVar4 = 0xffffffff;
    uVar3 = 8;
    CAnimBody_SetAnimation(a0 + 0xb0, 8, 0xffffffff, 0);
    CAnimBody_SetFrame(a0 + 0xb0, uVar3, uVar4, a3);
    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
switchD_8c0a2c2e_caseD_6:
    if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x234), *(u32 *)(a0 + 0x28));
    } else {
        in_xd0 = *(double *)(a0 + 0x28);
        dVar8 = *(double *)(a0 + 0x234);
    }
    if (cVar14 == '\0') {
        fVar6 = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
    } else {
        fVar6 = SUB84(dVar8 - dVar8, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x28) = fVar6;
        fVar6 = *(float *)(a0 + 0x28);
    } else {
        *(double *)(a0 + 0x28) = in_xd0;
    }
    if (cVar14 != '\0' || fVar6 <= 0.0) {
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)(u32)fVar6;
        }
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x234) = 0;
        } else {
            *(u64 *)(a0 + 0x234) = (u64)(u32)fVar6;
        }
    }
    uVar9 = (u64)(u32)fVar6;
    iVar2 = a0 + 0x54;
    iVar1 = CMushroomerBody_vec_031764(a0, iVar2, a1, a3);
    if (iVar1 == 0) {
        uVar9 = uVar9 & 0xffffffff;
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = uVar9;
        }
    }
    uVar3 = (u32)(uVar9 >> 0x20);
    CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, iVar2, a1, a3);
    CAnimBody_GetCurFrame(a0 + 0xb0, iVar2, a1, a3);
    if (cVar15 == '\0') {
        uVar9 = CONCAT44(0x41f00000, uVar3);
    } else {
        uVar9 = 0x6013d10d41f00000;
    }
    if (cVar14 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = uVar9 & 0xffffffff;
        }
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    }
    return 1;
}

/*
 * game_vec_0a3624  0x8c0a3624
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0a3624(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    u32 uVar2;
    u32 ar6_00;
    u32 uVar3;
    float in_fr1;
    float extraout_fr1;
    char cVar4;
    char cVar5;
    u8 auStack_20[20];

    cVar5 = '\0';
    cVar4 = '\0';
    uVar3 = 1;
    uVar2 = a1;
    if (*(int *)(a0 + 300) == 0) {
        CMushroomerBody_vec_032518(a0, a1, a2, a3);
        Vec3_assign(a0 + 0x54, auStack_20, a2, a3);
        Vec3_dtor(auStack_20, 0xffffffff, a2, a3);
        a3 = 0;
        ar6_00 = 0xffffffff;
        ar5_00 = 1;
        CAnimBody_SetAnimation(a0 + 0xb0, 1, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, ar5_00, ar6_00, a3);
        copy6_to_fields(a0, 0x8c2851b0, ar6_00, a3);
        a2 = a0 + 0x54;
        CMushroomerBody_uses_rand_float_031bb4(a0, a1, a2, a3);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        in_fr1 = extraout_fr1;
    } else if (*(int *)(a0 + 300) != 1) {
        return 1;
    }
    if (cVar5 == '\0') {
        in_fr1 = *(float *)(a0 + 0x130);
    }
    if (cVar4 == '\0' && in_fr1 < 0.0) {
        vec3_clear(a0 + 0x224, uVar2, a2, a3);
        uVar2 = a1;
        timer_vec_031c74(a0, a1, a1, a3);
        iVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, uVar2, a3);
        if (iVar1 == 1) {
            *(u32 *)(a0 + 300) = 0;
            uVar3 = 0;
        }
    } else {
        CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, uVar2, a2, a3);
        iVar1 = CMushroomerBody_vec_031764(a0, a0 + 0x54, a1, a3);
        if (iVar1 == 0) {
            *(u32 *)(a0 + 300) = 0;
            uVar3 = 0;
        }
    }
    return uVar3;
}

/*
 * Class_12ad14_uses_rand_float_0a37c8  0x8c0a37c8
 * area name: only called from Class_12ad14 methods; behaviour name: its main named callee is rand_float
 * called by: Class_12ad14_m1_0a09e8
 */
u32 Class_12ad14_uses_rand_float_0a37c8(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    float fVar4;
    u64 in_dr0;
    double dVar5;
    u64 uVar6;
    u64 in_xd0;
    char cVar7;
    char cVar8;
    u8 auStack_3c[12];
    u8 auStack_30[16];
    u8 auStack_20[20];
    u32 uStack_c;

    cVar8 = '\0';
    cVar7 = '\0';
    uStack_c = 1;
    iVar3 = *(int *)(a1 + 0x10);
    iVar1 = *(int *)(a0 + 0x68);
    if (iVar1 == 0) {
        if (iVar3 != 3) {
            return iVar3;
        }
        rand_float(a0, a1, a2);
        if (cVar8 == '\0') {
            *(int *)(a0 + 0xa0) = (int)(in_dr0 >> 0x20);
        } else {
            *(u64 *)(a0 + 0xa0) = in_dr0;
        }
        vec3_clear(a0 + 0x224, a1, a2, a3);
        if (cVar8 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = in_dr0 & 0xffffffff;
        }
        if (cVar8 == '\0') {
            *(u32 *)(a0 + 0x234) = 0;
        } else {
            *(u64 *)(a0 + 0x234) = in_dr0 & 0xffffffff;
        }
        timer_start_94(a0, a1, a2);
        a3 = 0;
        a2 = 0xffffffff;
        a1 = 2;
        CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, a1, a2, a3);
        *(int *)(a0 + 0x68) = *(int *)(a0 + 0x68) + 1;
    } else if (iVar1 != 1) {
        if (iVar1 != 2) {
            if (iVar1 != 3) {
                return iVar3;
            }
            Vec3_copy_assign(auStack_3c, *(u32 *)(a1 + 0xc));
            iVar3 = a0 + 0x54;
            uVar2 = 1;
            iVar1 = CMushroomerBody_AwayFrom(a0, **(u32 **)(a1 + 4), 1, iVar3);
            free_if_nonnull_wrap_102790(auStack_3c, 0xffffffff, uVar2, iVar3);
            if (iVar1 == 0) {
                *(u32 *)(a0 + 0x68) = 0;
                *(u32 *)(a0 + 0x40) = 5;
                return 3;
            }
            return 3;
        }
        goto LAB_8c0a38c6;
    }
    CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
    game_float_calc_0324ac(a0);
    if (iVar3 == 3) {
        return 3;
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x3e99999a, *(u32 *)(a0 + 0x94));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x94);
        dVar5 = 1.3411048233047396e-08;
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x94) = fVar4;
    } else {
        *(u64 *)(a0 + 0x94) = in_xd0;
    }
    *(int *)(a0 + 0x68) = *(int *)(a0 + 0x68) + 1;
LAB_8c0a38c6:
    CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(a0 + 0x94));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x94);
        dVar5 = -1.0142130068337341e-250;
    }
    if (cVar7 == '\0') {
        fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
    } else {
        fVar4 = SUB84(dVar5 + dVar5, 0);
    }
    if (cVar8 == '\0') {
        *(float *)(a0 + 0x94) = fVar4;
    } else {
        *(u64 *)(a0 + 0x94) = in_xd0;
    }
    if (cVar8 == '\0') {
        *(u32 *)(a0 + 0xa0) = 0;
        uVar6 = CONCAT44(0xbf800000, *(u32 *)(a0 + 0x94));
    } else {
        *(u64 *)(a0 + 0xa0) = (u64)(u32)fVar4;
        uVar6 = 0xb0bf800000;
    }
    if (cVar7 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
        clear_field_94(a0, a1);
        if (cVar8 == '\0') {
            *(u32 *)(a0 + 0x94) = 0;
        } else {
            *(u64 *)(a0 + 0x94) = uVar6 & 0xffffffff;
        }
        *(int *)(a0 + 0x68) = *(int *)(a0 + 0x68) + 1;
        *(u32 *)(a0 + 0x40) = 5;
        *(u32 *)(a0 + 300) = 0;
        rand_float(a0, a1, a2);
        rand_float(a0, a1, a2);
        rand_float(a0, a1, a2);
        Vec3_ctor_xyz(auStack_20, a1, a2, a3);
        Vec3_assign(a0 + 0x54, auStack_20, a2, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_20, 0xffffffff, a2, a3);
        Vec3_normalize(a0 + 0x54, uVar2, a2, a3);
        Vec3_assign(a0 + 0x54, auStack_30, a2, a3);
        Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
    }
    return 3;
}

/*
 * game_uses_CAnimBody_GetCurFrame_0a3aac  0x8c0a3aac
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is CAnimBody_GetCurFrame
 */
u32 game_uses_CAnimBody_GetCurFrame_0a3aac(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    u32 ar6_00;
    u32 uVar4;
    float fVar5;
    code *pcVar6;
    u64 in_dr0;
    code *pcVar7;
    float fVar8;
    char cVar9;
    char cVar10;
    u8 auStack_28[16];
    u8 auStack_18[16];

    fVar5 = (float)((u64)in_dr0 >> 0x20);
    cVar10 = '\0';
    cVar9 = '\0';
    uVar4 = 1;
    if (*(int *)(a0 + 300) == 0) {
        a3 = 0;
        ar6_00 = 0;
        uVar3 = 4;
        CAnimBody_SetAnimation(a0 + 0xb0, 4, 0, 0);
        *(u32 *)(a0 + 0x274) = 1;
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else {
        uVar3 = a1;
        ar6_00 = a2;
        if (*(int *)(a0 + 300) != 1) {
            return 1;
        }
    }
    iVar1 = get_field_1c_026dd8(a0 + 0xb0, uVar3, ar6_00);
    if (iVar1 == 4) {
        Vec3_set_xyz(auStack_18, uVar3, ar6_00, a3);
        iVar1 = a0 + 0x80;
        game_vec_031eb0(a0, a1, a2, iVar1, auStack_28);
        Vec3_assign(a0 + 0x80, auStack_28, a2, iVar1);
        Vec3_dtor(auStack_28, 0xffffffff, a2, iVar1);
        uVar3 = 0xffffffff;
        object_dtor_delete(auStack_18, 0xffffffff, a2, iVar1);
        CAnimBody_GetCurFrame(a0 + 0xb0, uVar3, a2, iVar1);
        if (cVar10 == '\0') {
            pcVar7 = (code *)0x41200000;
        } else {
            fVar5 = 10.0;
            pcVar7 = Vec3_set_xyz;
        }
        if (cVar9 != '\0' || (float)pcVar7 <= fVar5) {
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar3, a2, iVar1);
            if (cVar10 == '\0') {
                pcVar6 = pcVar7;
                pcVar7 = (code *)0x42200000;
            } else {
                pcVar6 = (code *)0x42200000;
                pcVar7 = (code *)0x24c;
            }
            if (cVar9 == '\0' && (float)pcVar6 < (float)pcVar7) {
                iVar2 = *(int *)(a0 + 0x24c);
                *(int *)(a0 + 0x24c) = iVar2 + 1;
                *(int *)(a0 + 0x24c) = iVar2 + 2;
                if (4 < *(int *)(a0 + 0x24c)) {
                    *(u32 *)(a0 + 0x24c) = 5;
                }
            }
        }
        CAnimBody_GetCurFrame(a0 + 0xb0, uVar3, a2, iVar1);
        if (cVar10 == '\0') {
            fVar5 = 40.0;
        } else {
            pcVar7 = (code *)0x42200000;
            fVar5 = 8.23963e-43;
        }
        if ((cVar9 != '\0' || fVar5 <= (float)pcVar7) &&
            (*(int *)(a0 + 0x24c) = *(int *)(a0 + 0x24c) + -1, *(int *)(a0 + 0x24c) < 3)) {
            *(u32 *)(a0 + 0x24c) = 0;
        }
        iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar3, a2, iVar1);
        if (iVar2 == 1) {
            uVar4 = 0;
            *(u32 *)(a0 + 300) = 0;
            *(u32 *)(a0 + 0x24c) = 0;
        } else if (*(int *)(a0 + 0x274) != 0) {
            CAnimBody_GetCurFrame(a0 + 0xb0, uVar3, a2, iVar1);
            if (cVar10 == '\0') {
                fVar8 = 35.0;
            } else {
                fVar5 = 35.0;
                fVar8 = 6.50202e-43;
            }
            if (cVar9 != '\0' || fVar8 <= fVar5) {
                *(int *)(a0 + 0x1d0) = *(int *)(a0 + 0x1d0) + *(int *)(a0 + 0x274);
                if (*(int *)(a0 + 0x1d0) < 7) {
                    if (*(int *)(a0 + 0x1d0) < 2) {
                        *(u32 *)(a0 + 0x274) = 0;
                    }
                } else {
                    *(int *)(a0 + 0x274) = -*(int *)(a0 + 0x274);
                }
            }
        }
    } else {
        CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar3, ar6_00, a3);
    }
    return uVar4;
}

/*
 * game_vec_0a3d08  0x8c0a3d08
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0a3d08(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 ar7_00;
    u8 *ar7_01;
    u8 auStack_1c[16];

    uVar3 = a2;
    ar7_00 = a3;
    iVar1 = Vec3_equal(a0 + 0x250, a2);
    if (iVar1 == 0) {
        Vec3_copy_assign(auStack_1c, a3);
        ar7_01 = auStack_1c;
        uVar3 = a2;
        iVar1 = game_uses_CAnimBody_SetAnimation_0a1828(a0, a1, a2, ar7_01);
        free_if_nonnull_wrap_102790(auStack_1c, 0xffffffff, uVar3, ar7_01);
        if (iVar1 == 0) {
            Vec3_assign(a0 + 0x250, a2, uVar3, ar7_01);
        }
        uVar2 = (u32)(iVar1 != 0);
    } else {
        uVar2 = timer_uses_CAnimBody_PlayToEnd_031de8(a0, 0, uVar3, ar7_00);
    }
    return uVar2;
}

/*
 * game_vec_0a3dc0  0x8c0a3dc0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: static_init_285204
 */
u32 game_vec_0a3dc0(u32 unused_a0, u32 a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;
    int iVar2;
    u8 *ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    float fVar3;
    double in_dr0;
    double dVar4;
    u64 in_xd0;
    char cVar5;
    char cVar6;
    int iStack_64;
    int iStack_60;
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
    uVar1 = Vec3_length(auStack_34, a1, ar6_00, ar7_00);
    Vec3_ctor_copy(auStack_24, uVar1, ar6_00, ar7_00);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_34, 0xffffffff, ar6_00, ar7_00);
    Vec3_make(a3, uVar1, ar6_00, ar7_00, auStack_44);
    Vec3_make(auStack_24, uVar1, ar6_00, ar7_00, auStack_54);
    Vec3_cos_angle(auStack_44, auStack_54, ar6_00, ar7_00);
    uStack_10 = SUB84(in_dr0, 0);
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar6 == '\0') {
        uStack_10 = uVar1;
        uVar1 = uStack_c;
    }
    uStack_c = uVar1;
    Vec3_dtor(auStack_54, 0xffffffff, ar6_00, ar7_00);
    Vec3_dtor(auStack_44, 0xffffffff, ar6_00, ar7_00);
    ar5_00 = auStack_24;
    iStack_60 = Vec3_angle_code_90(a3, ar5_00, ar6_00, ar7_00);
    if (iStack_60 == 4) {
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
    Vec3_vec_0231c8(auStack_24, ar5_00, ar6_00, ar7_00);
    iVar2 = (int)((u64)in_dr0 >> 0x20);
    iStack_64 = iVar2;
    if (cVar6 != '\0') {
        iStack_64 = SUB84(in_dr0, 0);
        iStack_60 = iVar2;
    }
    Vec3_vec_0231c8(a3, ar5_00, ar6_00, ar7_00);
    uVar1 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar6 == '\0') {
        in_dr0 = (double)CONCAT44(uVar1, iStack_64);
    } else {
        in_xd0 = CONCAT44(iStack_60, uVar1);
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
    iVar2 = Vec3_vec_0232e8(a3, auStack_24, ar6_00, ar7_00);
    if (iVar2 == 1) {
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
    vec3_copy_8c02b5fc(s0, &fStack_14, ar6_00);
    Vec3_dtor(auStack_24, 0xffffffff, ar6_00, ar7_00);
    object_dtor_delete(&fStack_14, 0xffffffff, ar6_00, ar7_00);
    return 0;
}

/*
 * game_vec_0a3f4c  0x8c0a3f4c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0a3f4c(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int ar6_00;
    u32 ar6_01;
    u32 ar7_00;
    float in_fr1;
    float fVar3;
    double dVar4;
    code *pcVar6;
    double dVar5;
    float fVar7;
    u32 in_fr14;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    float fStack_70;
    float fStack_6c;
    float fStack_5c;
    float fStack_58;
    code *apcStack_54[4];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u8 auStack_24[4];
    double dStack_20;

    cVar9 = '\0';
    cVar8 = '\0';
    uVar2 = a1;
    ar6_00 = a2;
    Vec3_assign_f(a0 + 0x200, a1, a2, a3);
    dVar5 = (double)(u64)(u32)in_fr1;
    if (cVar9 == '\0') {
        fStack_58 = 0.0;
    } else {
        apcStack_54[0] = NULL;
        fStack_58 = in_fr1;
    }
    fVar7 = 1.0;
    Vec3_ctor_zero(auStack_24, uVar2, ar6_00);
    if ((*(int *)(a2 + 0x68) == 0) || (-1 < (int)((u32) * (u8 *)(a0 + 0x1fc) << 0x1e))) {
        if ((*(int *)(a2 + 100) == 0) || (-1 < (int)((u32) * (u8 *)(a0 + 0x1fc) << 0x1d))) {
            uVar2 = Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
        } else if ((*(int *)(a0 + 0x124) == 0xb) || (*(int *)(a0 + 0x124) == 0xc)) {
            uVar2 = Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
        } else {
            iVar1 = get_field_24_05c284(*(u32 *)(a2 + 0x50), uVar2);
            if ((iVar1 == 2) && (iVar1 = (**(code **)(*(int *)(*(int *)(a2 + 0x50) + 8) + 0x180))(*(int *)(a2 + 0x50),
                                                                                                  uVar2, ar6_00, a3),
                                 iVar1 == 4)) {
                *(u32 *)(a0 + 0x214) = 0;
                ar7_00 = 0;
                ar6_01 = 0xffffffff;
                CAnimBody_SetAnimation(a0 + 0xb0, 3, 0xffffffff, 0);
                uVar2 = 3;
                get_motion_data(a0 + 0xb0, 3, ar6_01, ar7_00);
                CAnimBody_SetFrame(a0 + 0xb0, uVar2, ar6_01, ar7_00);
                uVar2 = Vec3_dtor(auStack_24, 0xffffffff, ar6_01, ar7_00);
            } else {
                (**(code **)(*(int *)(*(int *)(a2 + 0x50) + 8) + 0x170))(*(int *)(a2 + 0x50), uVar2, ar6_00, a3);
                fVar3 = (float)((u64)dVar5 >> 0x20);
                fStack_6c = fVar3;
                if (cVar9 != '\0') {
                    fStack_6c = SUB84(dVar5, 0);
                    fVar3 = fVar7;
                }
                Vec3_ctor_copy_wrap_02f670(*(u32 *)(a2 + 0x50), uVar2, ar6_00, a3, auStack_44);
                Vec3_sub(a1, auStack_44, ar6_00, a3, apcStack_54);
                Vec3_assign(a0 + 0x200, apcStack_54, ar6_00, a3);
                Vec3_dtor(apcStack_54, 0xffffffff, ar6_00, a3);
                uVar2 = 0xffffffff;
                Vec3_dtor(auStack_44, 0xffffffff, ar6_00, a3);
                Vec3_length_sq(a0 + 0x200, uVar2, ar6_00, a3);
                fVar7 = (float)((u64)dVar5 >> 0x20);
                if (cVar9 == '\0') {
                    dVar5 = (double)CONCAT44(fVar7, *(u32 *)(a0 + 0x48));
                    fStack_70 = fVar7;
                } else {
                    fStack_70 = SUB84(dVar5, 0);
                    in_xd0 = *(u64 *)(a0 + 0x48);
                    fStack_6c = fVar7;
                }
                if (cVar8 == '\0') {
                    fVar3 = SUB84(dVar5, 0) + fVar3;
                } else {
                    fVar3 = SUB84(dVar5 + (double)CONCAT44(in_fr14, fVar3), 0);
                }
                if (cVar9 == '\0') {
                    dVar5 = (double)CONCAT44(fStack_70, fVar3);
                } else {
                    dVar5 = (double)CONCAT44(fStack_6c, fStack_70);
                }
                if (cVar8 == '\0') {
                    fVar7 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar5 - dVar5, 0);
                }
                if (cVar9 == '\0') {
                    pcVar6 = (code *)0x3f000000;
                    fStack_58 = fVar7;
                } else {
                    fStack_58 = (float)in_xd0;
                    apcStack_54[0] = (code *)((u64)in_xd0 >> 0x20);
                    fVar7 = 0.5;
                    pcVar6 = Vec3_length;
                }
                if (cVar8 == '\0' && fVar7 < (float)pcVar6) {
                    if (cVar9 == '\0') {
                        fStack_58 = 0.5;
                    } else {
                        fStack_58 = 0.5;
                        apcStack_54[0] = Vec3_length;
                    }
                }
                Vec3_length(a0 + 0x200, uVar2, ar6_00, a3);
                Vec3_scale_assign(a0 + 0x200, &fStack_58);
                uVar2 = Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
            }
        }
    } else {
        *(u32 *)(a0 + 0x1d4) = 1;
        if (cVar9 == '\0') {
            fVar7 = *(float *)(*(int *)(a2 + 0x68) + 0x158);
        }
        Vec3_assign(auStack_24, *(int *)(a2 + 0x68) + 4, ar6_00, a3);
        dVar4 = dStack_20;
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(dStack_20._0_4_, SUB84(dVar5, 0));
        }
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + fVar7, SUB84(dVar4, 0));
        } else {
            dVar4 = dVar4 + (double)CONCAT44(in_fr14, fVar7);
        }
        dVar5 = dVar4;
        if (cVar9 == '\0') {
            dStack_20 = (double)CONCAT44(dStack_20._4_4_, (int)((u64)dVar4 >> 0x20));
            dVar5 = dStack_20;
        }
        dStack_20 = dVar5;
        Vec3_sub(a1, auStack_24, ar6_00, a3, auStack_34);
        Vec3_assign(a0 + 0x200, auStack_34, ar6_00, a3);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
        Vec3_length_sq(a0 + 0x200, uVar2, ar6_00, a3);
        fVar3 = (float)((u64)dVar4 >> 0x20);
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(fVar3, *(u32 *)(a0 + 0x48));
            fStack_5c = fVar3;
        } else {
            fStack_5c = SUB84(dVar4, 0);
            in_xd0 = *(u64 *)(a0 + 0x48);
            fStack_58 = fVar3;
        }
        if (cVar8 == '\0') {
            fVar7 = SUB84(dVar4, 0) + fVar7;
        } else {
            fVar7 = SUB84(dVar4 + (double)CONCAT44(in_fr14, fVar7), 0);
        }
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44(fStack_5c, fVar7);
        } else {
            dVar5 = (double)CONCAT44(fStack_58, fStack_5c);
        }
        if (cVar8 == '\0') {
            fVar7 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
        } else {
            fVar7 = SUB84(dVar5 - dVar5, 0);
        }
        if (cVar9 == '\0') {
            pcVar6 = (code *)0x3f000000;
            fStack_58 = fVar7;
        } else {
            fStack_58 = (float)in_xd0;
            apcStack_54[0] = (code *)((u64)in_xd0 >> 0x20);
            fVar7 = 0.5;
            pcVar6 = Vec3_length;
        }
        if (cVar8 == '\0' && fVar7 < (float)pcVar6) {
            if (cVar9 == '\0') {
                fStack_58 = 0.5;
            } else {
                fStack_58 = 0.5;
                apcStack_54[0] = Vec3_length;
            }
        }
        Vec3_length(a0 + 0x200, uVar2, ar6_00, a3);
        Vec3_scale_assign(a0 + 0x200, &fStack_58);
        uVar2 = Vec3_dtor(auStack_24, 0xffffffff, ar6_00, a3);
    }
    return uVar2;
}

/*
 * Class_12ad14_m3_0a427c  0x8c0a427c
 */
int Class_12ad14_m3_0a427c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;

    if (*(int *)(0x128 + a0) == 0) {
        uVar4 = 0;
        uVar3 = 0xffffffff;
        CAnimBody_SetAnimation(a0 + 0xb0, 3, 0xffffffff, 0);
        uVar2 = 3;
        get_motion_data(a0 + 0xb0, 3, uVar3, uVar4);
        iVar1 = (*(code *)(&CAnimBody_SetFrame))(a0 + 0xb0, uVar2, uVar3, uVar4);
    } else {
        iVar1 = get_field_1c_026dd8(a0 + 0xb0, a1, a2);
        if ((iVar1 == 0xd) || (iVar1 = get_field_1c_026dd8(a0 + 0xb0, a1, a2), iVar1 == 0xe)) {
            iVar1 = CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, a1, a2, a3);
            if (iVar1 == 7) {
                iVar1 = rand_range(a0, 0, 100);
                if (iVar1 < 0x50) {
                    iVar1 = (*(code *)(&CAnimBody_SetAnimation))(a0 + 0xb0, 0xd, 0xffffffff, 0);
                } else {
                    iVar1 = (*(code *)(&CAnimBody_SetAnimation))(a0 + 0xb0, 0xe, 0xffffffff, 0);
                }
            }
        } else {
            uVar4 = 0;
            uVar3 = 0xffffffff;
            uVar2 = 0xe;
            (*(code *)(&CAnimBody_SetAnimation))(a0 + 0xb0, 0xe, 0xffffffff, 0);
            iVar1 = (*(code *)(&CAnimBody_SetFrame))(a0 + 0xb0, uVar2, uVar3, uVar4);
        }
    }
    return iVar1;
}

/*
 * Class_12ad14_m4_0a43d4  0x8c0a43d4
 */
u32 Class_12ad14_m4_0a43d4(int a0) {
    u32 uVar1;
    u32 ar6_00;
    u32 ar7_00;

    ar7_00 = 0;
    ar6_00 = 0xffffffff;
    CAnimBody_SetAnimation(a0 + 0xb0, 3, 0xffffffff, 0);
    uVar1 = 3;
    get_motion_data(a0 + 0xb0, 3, ar6_00, ar7_00);
    uVar1 = (*(code *)(&CAnimBody_SetFrame))(a0 + 0xb0, uVar1, ar6_00, ar7_00);
    return uVar1;
}

/*
 * static_init_vec3s_285180  0x8c0a4448
 * static initialiser: builds 5 global Vec3 constants (8c285180..8c2851e0) and registers their destructors, then more
 * set-up
 */
u32 static_init_vec3s_285180(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;
    u8 auStack_34[24];
    u8 auStack_1c[28];

    uVar1 = Vec3_ctor_xyz((&DATA_8c1261b0), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c285180;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c285180, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c1261c0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c28518c;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c28518c, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c1261d0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c285198;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c285198, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c1261e0), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c2851a4;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c2851a4, a3);
    uVar1 = set_6_floats(auStack_1c);
    copy_6_words(0x8c2851b0, uVar1);
    uVar1 = set_6_floats(auStack_34);
    copy_6_words(0x8c2851b0 + 0x18, uVar1);
    uVar2 = Vec3_ctor_xyz(0x8c2851ec, uVar1, uVar2, a3);
    uVar2 = global_list_push(uVar2, (&Vec3_dtor), 0x8c2851e0, a3);
    return uVar2;
}

/*
 * CSpiderLine_ctor  0x8c0a4590
 * "SpiderLine": CAnimal_ctor(kind 13), vtable 0x8c12aeec
 * called by: CItemGLoader_create_creature_by_kind
 * strings: "SpiderLine"
 */
int CSpiderLine_ctor(int a0, u32 a1) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;

    ar7_00 = 0x18;
    ar6_00 = 1;
    ar5_00 = 0xd;
    (*(code *)(&CAnimal_ctor))(a0, 0xd, 1, 0x18, 1, a1, 0x8c285370, 0x8c2854a0, *(u32 *)(&DATA_8c13b08c));
    *(u8 **)(a0 + 8) = (&DATA_8c12aeec);
    Class_12b0c4_ctor(a0 + 0x490, ar5_00, ar6_00);
    Class_12b088_ctor(a0 + 0x53c, ar5_00, ar6_00, ar7_00);
    Class_129938_ctor(a0 + 0x26fc, ar5_00, ar6_00);
    (*(code *)(&sprintf))(a0 + 0xc, ar5_00, ar6_00, ar7_00, "SpiderLine");
    *(int *)(0x308 + a0) = a0 + 0x490;
    *(int *)(0x30c + a0) = a0 + 0x53c;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    (*(code *)(&game_update_fields_0f532c))(a0, *(u32 *)(0xb4 + *(int *)(0x328 + a0)), a0 + 0x26fc, ar7_00);
    return a0;
}

/*
 * Class_12aeec_m0_0a4694  0x8c0a4694
 */
int Class_12aeec_m0_0a4694(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12aeec;
        Class_129938_dtor(a0 + 0x26fc, 0xffffffff, a2, a3);
        Class_12b088_dtor(a0 + 0x53c, 0xffffffff, a2, a3);
        Class_12b0c4_dtor(a0 + 0x490, 0xffffffff, a2, a3);
        ar5_00 = 0;
        CAnimal_m0_025688(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12aeec_m2_0a471c  0x8c0a471c
 */
u32 Class_12aeec_m2_0a471c(u32 a0, u32 a1, u32 a2, u32 a3) {
    CAnimal_m2_02573c(a0, a1, a2, a3);
    return 1;
}

/*
 * Class_12aeec_m3_0a4744  0x8c0a4744
 */
u32 Class_12aeec_m3_0a4744(u32 a0, u32 a1, u32 a2, u32 a3) {
    CAnimal_m3_026078(a0, a1, a2, a3);
    return 1;
}

/*
 * Class_12aeec_m4_0a476c  0x8c0a476c
 */
u32 Class_12aeec_m4_0a476c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x1c))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * Class_12aeec_m5_0a4784  0x8c0a4784
 */
u32 Class_12aeec_m5_0a4784(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    uVar1 = (**(code **)(**(int **)(0x30c + a0) + 0x14))(*(int **)(0x30c + a0), a1, a2, a3);
    return uVar1;
}

/*
 * Class_12aeec_m6_0a47f0  0x8c0a47f0
 */
u32 Class_12aeec_m6_0a47f0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    (**(code **)(*(int *)(a0 + 8) + 0x1c))(a0, a1, a2, a3);
    uVar1 = clear_field_144_u8(a0 + 0x174);
    return uVar1;
}

/*
 * Class_12aeec_uses_gfx_set_color4_0a481c  0x8c0a481c
 * area name: sits between Class_12aeec functions (same compilation unit); behaviour name: its main named callee is
 * gfx_set_color4_4aa52c
 */
u32 Class_12aeec_uses_gfx_set_color4_0a481c(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    int ain0;
    u32 uVar2;
    float fVar3;
    double dVar4;
    float fVar5;
    int ar7_00;
    int ar6_00;
    int iVar6;
    char cVar7;
    char cVar8;
    u32 in_stack_ffffffcc;
    int s12;
    u32 in_stack_ffffffe0;
    u32 in_stack_ffffffe4;
    u32 in_stack_ffffffe8;
    u32 in_stack_ffffffec;
    u32 uStack_10;
    u32 uStack_c;

    cVar8 = '\0';
    cVar7 = '\0';
    gfx_set_color4_4aa52c(a0 + 0x438);
    matrix_push(0, r5, r6, r7, in_stack_ffffffcc);
    touch_fields_30_3c(0, r5, r6, r7, in_stack_ffffffcc);
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar4 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar4 = -3.739346301775294e-250;
    }
    if (cVar7 == '\0') {
        ar7_00 = (int)(SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20));
    } else {
        ar7_00 = (int)(dVar4 / dVar4);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar4 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar4 = -3.739346301775294e-250;
    }
    if (cVar7 == '\0') {
        ar6_00 = (int)(SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20));
    } else {
        ar6_00 = (int)(dVar4 / dVar4);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar4 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar4 = -3.739346301775294e-250;
    }
    if (cVar7 == '\0') {
        iVar6 = (int)(SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20));
    } else {
        iVar6 = (int)(dVar4 / dVar4);
    }
    njRotateXYZ(0, iVar6, ar6_00, ar7_00, in_stack_ffffffcc);
    vec3_copy_wrap_0a4a34(a0 + 0x53c, iVar6, ar6_00, ar7_00, &stack0xffffffe0);
    vec3_copy_8c02b5fc(&stack0xffffffec, &stack0xffffffe0, ar6_00);
    object_dtor_delete(&stack0xffffffe0, 0xffffffff, ar6_00, ar7_00);
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, uStack_10);
    } else {
        dVar4 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar4 = -3.739346301775294e-250;
    }
    if (cVar7 == '\0') {
        iVar6 = (int)(SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20));
    } else {
        iVar6 = (int)(dVar4 / dVar4);
    }
    njRotateY(0, iVar6, ar6_00, ar7_00, in_stack_ffffffcc);
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, in_stack_ffffffec);
    } else {
        dVar4 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar4 = -3.739346301775294e-250;
    }
    if (cVar7 == '\0') {
        iVar6 = (int)(SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20));
    } else {
        iVar6 = (int)(dVar4 / dVar4);
    }
    njRotateX_like(0, iVar6, ar6_00, ar7_00, in_stack_ffffffcc);
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47800000, uStack_c);
    } else {
        dVar4 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar4 = -3.739346301775294e-250;
    }
    if (cVar7 == '\0') {
        fVar5 = (float)((u64)dVar4 >> 0x20);
        fVar3 = SUB84(dVar4, 0) / fVar5;
        dVar4 = (double)CONCAT44(fVar5, fVar3);
        iVar6 = (int)fVar3;
    } else {
        dVar4 = dVar4 / dVar4;
        iVar6 = (int)dVar4;
    }
    njRotateZ(0, iVar6, ar6_00, ar7_00, in_stack_ffffffcc);
    matrix_scale(0, iVar6, ar6_00, ar7_00, in_stack_ffffffcc);
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, iVar6, ar6_00);
    uVar1 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
    ain0 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), iVar6, ar6_00);
    s12 = ain0;
    uVar2 = deref_u32(*(int *)(*(int *)(a0 + 0x328) + 0xa0) + ain0 * 4);
    CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), iVar6, ar6_00, ar7_00);
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(uVar2, (int)((u64)dVar4 >> 0x20));
    }
    uVar2 = (u32)((u64)dVar4 >> 0x20);
    gfx_draw_motion(uVar1, uVar2, ar6_00, ar7_00, ain0);
    matrix_pop_n(1);
    gfx_set_color4_4aa52c(&g_8c13b07c);
    game_draw_point_list(a0 + 0x53c, uVar2, ar6_00, ar7_00, ain0, SUB84(dVar4, 0), (int)((u64)dVar4 >> 0x20), s12,
                         uVar1, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec);
    uVar1 = object_dtor_delete(&stack0xffffffec, 0xffffffff, ar6_00, ar7_00);
    return uVar1;
}

/*
 * vec3_copy_wrap_0a4a34  0x8c0a4a34
 * only calls vec3_copy_8c02b5fc
 * called by: Class_12aeec_uses_gfx_set_color4_0a481c
 */
u32 vec3_copy_wrap_0a4a34(int a0, u32 unused_a1, u32 a2, u32 unused_a3, u32 s0) {
    u32 uVar1;

    uVar1 = vec3_copy_8c02b5fc(s0, a0 + 0x21a8, a2);
    return uVar1;
}

/*
 * Vec3_uses_obj_set_texlist_0a4a5c  0x8c0a4a5c
 * area name: sits between Vec3 functions (same compilation unit); behaviour name: its main named callee is
 * obj_set_texlist
 */
u32 Vec3_uses_obj_set_texlist_0a4a5c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int ain0;
    u32 uVar2;
    u32 extraout_fr0;
    char cVar3;
    u32 uStack_14;

    cVar3 = '\0';
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, a1, a2);
    uVar1 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
    ain0 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2);
    uVar2 = deref_u32(*(int *)(*(int *)(a0 + 0x328) + 0xa0) + ain0 * 4);
    CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2, a3);
    uStack_14 = extraout_fr0;
    if (cVar3 == '\0') {
        uStack_14 = uVar2;
    }
    uVar1 = gfx_draw_motion(uVar1, uStack_14, a2, a3, ain0);
    return uVar1;
}

/*
 * Spider_asset_table_init  0x8c0a4af0
 * fills the spider asset table (Sp_Home, Sp_Creep, SPIDER_BODY, SP_PVM)
 * called by: game_init_sound_and_messages
 */
u32 Spider_asset_table_init(void) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u8 ***)(iVar1 * 0x124 + 0x8c285374) = &PTR_s_Sp_Creep_njm_8c13b0a4;
        *(u8 ***)(iVar1 * 0x124 + 0x8c285378) = &PTR_DAT_8c13b0c8;
        *(u8 **)(iVar1 * 0x124 + 0x8c28537c) = PTR_s_Sp_Home_njd_8c13b094;
        *(u32 *)(iVar1 * 0x124 + 0x8c285380) = 0;
        *(u8 **)(iVar1 * 0x124 + 0x8c285384) = PTR_s_SPIDER_BODY_8c13b09c;
        *(u8 **)(iVar1 * 0x124 + 0x8c285388) = PTR_s_Sp_MotionPack_npd_8c13b098;
        *(u8 **)(iVar1 * 0x124 + 0x8c285390) = PTR_s_SP_PVM_8c13b0a0;
        *(u32 *)(iVar1 * 0x124 + 0x8c285394) = 7;
        *(u32 *)(iVar1 * 0x124 + 0x8c2853a0) = 0x8c2852b0;
        *(u32 *)(iVar1 * 0x124 + 0x8c285424) = 0x8c28559c;
        *(u32 *)(iVar1 * 0x124 + 0x8c285428) = 0x3f000000;
        *(u32 *)(iVar1 * 0x124 + 0x8c28542c) = 0x3f800000;
        *(u32 *)(iVar1 * 0x124 + 0x8c28543c) = 0x3ca3d70a;
        *(u32 *)(iVar1 * 0x124 + 0x8c285440) = 0x3f4ccccd;
        *(u32 *)(iVar1 * 0x124 + 0x8c285444) = 0x43e10000;
        *(u32 *)(iVar1 * 0x124 + 0x8c285410) = 0x8c285310;
        *(u16 *)(iVar1 * 0x124 + 0x8c285414) = 9;
        *(u32 *)(iVar1 * 0x124 + 0x8c285418) = 0x8c285340;
        *(u16 *)(iVar1 * 0x124 + 0x8c28541c) = 9;
        *(u32 *)(iVar1 * 0x124 + 0x8c285460) = 0x43430000;
        *(u32 *)(iVar1 * 0x124 + 0x8c285464) = 0x43480000;
        *(float *)(iVar1 * 0x124 + 0x8c285438) = *(float *)(iVar1 * 0x124 + 0x8c285438) * 0.7;
        *(u32 *)(iVar1 * 0x124 + 0x8c28545c) = 0x41700000;
        *(u32 *)(iVar1 * 0x124 + 0x8c285490) = 0x433e0000;
    }
    g_8c2854a0 = 0xffff;
    g_8c2854a4 = 1;
    g_8c2854a8 = 1;
    g_8c2854ac = 0;
    return 0;
}

/*
 * CSpiderEgg_ctor  0x8c0a4de8
 * "SpiderEgg": CAnimal_ctor(kind 12), vtable 0x8c12ad50
 * called by: CItemGLoader_create_creature_by_kind
 * strings: "SpiderEgg"
 */
int CSpiderEgg_ctor(int a0, u32 a1) {
    u32 uVar1;
    u32 ar6_00;
    int ar6_01;
    u32 ar7_00;
    u32 in_fr1;
    char cVar2;

    cVar2 = '\0';
    ar7_00 = 0x19;
    ar6_00 = 1;
    uVar1 = 0xc;
    CAnimal_ctor(a0, 0xc, 1, 0x19, 1, a1, 0x8c28563c, 0x8c28576c, PTR_s_GRAPHICS_MOTHLINE_8c13b0ec);
    *(u8 **)(a0 + 8) = &g_8c12ad50;
    Class_129938_ctor(a0 + 0x490, uVar1, ar6_00);
    Class_129c24_ctor(a0 + 0x530, uVar1, ar6_00);
    Class_129cbc_ctor(a0 + 0x5cc, uVar1, ar6_00, ar7_00);
    sprintf(a0 + 0xc, uVar1, ar6_00, ar7_00, "SpiderEgg");
    *(int *)(a0 + 0x308) = a0 + 0x530;
    *(int *)(a0 + 0x30c) = a0 + 0x5cc;
    *(u8 *)(a0 + 0x524) = 0xff;
    ar6_01 = a0 + 0x490;
    uVar1 = *(u32 *)(*(int *)(a0 + 0x328) + 0xb4);
    game_update_fields_0f532c(a0, uVar1, ar6_01, ar7_00);
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
 * Class_12ad50_m0_0a4f54  0x8c0a4f54
 */
int Class_12ad50_m0_0a4f54(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12ad50;
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
 * Class_12ad50_m2_0a4fdc  0x8c0a4fdc
 */
u32 Class_12ad50_m2_0a4fdc(int a0, u32 a1, u32 a2, int *a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    int *a7;
    float in_fr1;
    float fVar5;
    double dVar6;
    u32 in_fr3;
    double dVar7;
    u64 in_xd0;
    bool bVar8;
    char cVar9;
    char cVar10;

    cVar10 = '\0';
    cVar9 = '\0';
    if ((*(u32 *)(a0 + 0x74) & 0x40) == 0x40) {
        *(float *)(a0 + 0x34) = *(float *)(a0 + 0x34) - *(float *)(a0 + 0x52c);
        *(float *)(a0 + 0x52c) = *(float *)(a0 + 0x52c) + 0.5;
        in_fr1 = *(float *)(a0 + 0x52c);
        if (10.0 < in_fr1) {
            *(u32 *)(a0 + 0x52c) = 0x41200000;
        }
    }
    iVar3 = (int)*(char *)(a0 + 0x524);
    uVar4 = a1;
    a7 = a3;
    if ((iVar3 < 4) && (-2 < iVar3)) {
        switch (iVar3) {
        case 0:
            uVar1 = a2;
            uVar2 = get_field_a4_s16(a1, a1);
            iVar3 = get_field_c_02d1b8(a0 + 0x21c);
            uVar4 = 0x3c;
            iVar3 = libgcc_divide_helper_0101e4((uVar2 & 0xffff) - iVar3, 0x3c);
            if (0 < iVar3) {
                *(u8 *)(a0 + 0x524) = 1;
            }
            if (*(int *)(a0 + 0x330) != 0) {
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 1, a2, a7);
                a2 = uVar1;
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10))(*(int *)(a0 + 0x330), a1, a2, a3);
                set_vec3_field_30(*(u32 *)(a0 + 0x330), a1, a2);
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x144))(*(int *)(a0 + 0x330), a1, a2, a3);
                set_fields_5c_60_64(*(u32 *)(a0 + 0x330));
                uVar4 = a1;
                a7 = a3;
            }
            break;
        case 1:
            (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x110))(*(int *)(a0 + 0x330), 0, a2, a3);
            a1 = *(u32 *)(a0 + 0x330);
            (**(code **)(*a3 + 0x4c))(a3, a1, a2, a7);
            mask_74_fffffffe(a0);
            *(u32 *)(a0 + 0x330) = 0;
            *(u8 *)(a0 + 0x524) = 2;
        case 2:
            if (cVar10 == '\0') {
                in_fr1 = *(float *)(a0 + 0x528);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x528);
            }
            if (cVar9 == '\0') {
                fVar5 = in_fr1 + 1.0;
            } else {
                fVar5 = SUB84((double)CONCAT44(0x3f800000, in_fr1) + (double)CONCAT44(0x3f800000, in_fr1), 0);
            }
            if (cVar10 == '\0') {
                *(float *)(a0 + 0x528) = fVar5;
            } else {
                *(u64 *)(a0 + 0x528) = in_xd0;
            }
            iVar3 = get_field_4_of_field_0(*(u32 *)(*(int *)(a0 + 0x328) + 0xa0));
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x528), in_fr3);
            } else {
                dVar7 = *(double *)(a0 + 0x528);
            }
            fVar5 = (float)(iVar3 + -1);
            dVar6 = (double)(u64)(u32)fVar5;
            if (cVar9 == '\0' && fVar5 < 0.0) {
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44(0x4f800000, fVar5);
                } else {
                    dVar6 = -7.425280129038244e-251;
                }
                if (cVar9 == '\0') {
                    fVar5 = (float)((u64)dVar6 >> 0x20);
                    dVar6 = (double)CONCAT44(fVar5, SUB84(dVar6, 0) + fVar5);
                } else {
                    dVar6 = dVar6 + dVar6;
                }
            }
            if (cVar9 == '\0') {
                bVar8 = (float)((u64)dVar7 >> 0x20) < SUB84(dVar6, 0);
            } else {
                bVar8 = dVar7 < dVar6;
            }
            uVar4 = a1;
            if (!bVar8) {
                *(u8 *)(a0 + 0x524) = 3;
            }
            break;
        case -1:
            uVar1 = a2;
            uVar4 = get_field_a2_s16(a1, a1);
            uVar4 = uVar4 & 0xffff;
            set_field_8(a0 + 0x21c, uVar4);
            uVar4 = get_field_a4_s16(a1, uVar4);
            uVar4 = uVar4 & 0xffff;
            set_field_c(a0 + 0x21c, uVar4);
            if (*(int *)(a0 + 0x330) != 0) {
                uVar4 = a1;
                (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x10c))(*(int *)(a0 + 0x330), a1, a2, a3);
            }
            uVar1 = get_field_a4_s16(a1, uVar4);
            a7 = a3;
            if ((u16)uVar1 < 5) {
                *(u8 *)(a0 + 0x524) = 0;
            }
        }
    }
    (**(code **)(*(int *)(a0 + 8) + 0xf8))(a0, uVar4, a2, a7);
    game_vec_0f79b8(a0 + 0xa0, uVar4, a2, a7);
    return 1;
}

/*
 * Class_12ad50_m6_0a5308  0x8c0a5308
 */
u32 Class_12ad50_m6_0a5308(u32 a0) {
    u32 uVar1;

    uVar1 = CAnimal_set_state_flag_40(a0);
    return uVar1;
}

/*
 * Class_12ad50_m5_0a5328  0x8c0a5328
 */
u32 Class_12ad50_m5_0a5328(u32 a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    int iVar1;
    u32 uVar2;
    u32 uStack_4;

    iVar1 = -0x7d0;
    *(u32 *)((int)&uStack_4 + iVar1) = a0;
    game_copy_0b7a54((int)&s0 + iVar1);
    CAnimal_set_state_flag_40(*(u32 *)((int)&uStack_4 + iVar1), (int)&s0 + iVar1, a2, a3);
    uVar2 = dtor_delete_with_ac((int)&s0 + iVar1, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * Class_12ad50_m4_0a536c  0x8c0a536c
 */
u32 Class_12ad50_m4_0a536c(u32 a0) {
    u32 uVar1;

    uVar1 = CAnimal_set_state_flag_40(a0);
    return uVar1;
}

/*
 * set_state_flag_40_74_wrap_0a538c  0x8c0a538c
 * only calls set_state_flag_40_74
 */
u32 set_state_flag_40_74_wrap_0a538c(u32 a0) {
    u32 uVar1;

    uVar1 = set_state_flag_40_74(a0);
    return uVar1;
}

/*
 * noop_0a53a8  0x8c0a53a8
 */
u32 noop_0a53a8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0a53ac  0x8c0a53ac
 */
u32 noop_0a53ac(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * Class_12ad50_draw_0a53b0  0x8c0a53b0
 * area name: sits between Class_12ad50 functions (same compilation unit); behaviour name: mostly calls draw functions
 */
u32 Class_12ad50_draw_0a53b0(int a0, u32 a1, u32 a2) {
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
    gfx_draw_motion_link_alt_a(uVar1, ar5_00, ar6_00, ar7_00, ar6_00);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * Class_12ad50_draw  0x8c0a54dc
 * binds the model's texlist (+0x328 +0x78), draws its model (+0x70) and then the attached object at +0x330
 */
u32 Class_12ad50_draw(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_set_texlist(*(int *)(0x328 + a0) + 0x78, a1, a2);
    uVar1 = get_field_0_015bb8(*(int *)(0x328 + a0) + 0x70);
    gfxlib_draw_219a9a(uVar1, a1, a2, a3);
    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = (**(code **)(*(int *)(*(int *)(0x330 + a0) + 8) + 0x3c))(*(int *)(0x330 + a0), a1, a2, a3);
    }
    return uVar1;
}

/*
 * vcall_field_8_slot15_0a5538  0x8c0a5538
 * calls virtual slot 15 of the object at +0x8
 */
u32 vcall_field_8_slot15_0a5538(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x3c))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * child_330_tick_0a5550  0x8c0a5550
 * calls slot 0x5c of the child object at +0x330 when there is one
 */
u32 child_330_tick_0a5550(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    noop_038c8c();
    uVar1 = 0;
    if (*(int *)(a0 + 0x330) != 0) {
        uVar1 = (**(code **)(*(int *)(*(int *)(a0 + 0x330) + 8) + 0x5c))(*(int *)(a0 + 0x330), a1, a2, a3);
    }
    return uVar1;
}

/*
 * game_uses_CItemGLoader_create_creature_0a5588  0x8c0a5588
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is
 * CItemGLoader_create_creature_by_kind
 */
u32 game_uses_CItemGLoader_create_creature_0a5588(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int a6;
    u32 uVar1;

    a6 = CItemGLoader_create_creature_by_kind(a1, 0xd, 0x18, a3);
    uVar1 = 0;
    if (a6 != 0) {
        uVar1 = (**(code **)(0x100 + *(int *)(a0 + 8)))(a0, 0, a6, a3);
    }
    return uVar1;
}

/*
 * game_update_fields_0a55d4  0x8c0a55d4
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 */
int game_update_fields_0a55d4(int a0, u32 unused_a1, u32 a2) {
    int iVar1;

    iVar1 = 0x330;
    *(u32 *)(0x330 + a0) = a2;
    return iVar1;
}

/*
 * child_330_release_0a55e0  0x8c0a55e0
 * releases the child object at +0x330 through the item loader
 */
u32 child_330_release_0a55e0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = game_uses_get_field_24_0ff500(a1, a0 + 0x330, a2, a3);
    }
    return uVar1;
}

/*
 * load_state_record_0a5614  0x8c0a5614
 * restores object state, status and the 15 bytes at +0x2dc from save record a1
 */
u32 load_state_record_0a5614(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_state_load(a0, a1, a2, a3);
    talk_state_load_fields(a0 + 0x174, a1 + 0x4c, a2, a3);
    uVar1 = copy15_in_normalize(a0 + 0x2dc, a1 + 0xd8);
    return uVar1;
}

/*
 * load_pose_record_0a5674  0x8c0a5674
 * restores pose, status and the 15 bytes at +0x2dc from save record a1
 */
u32 load_pose_record_0a5674(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_pose_load(a0, a1, a2, a3);
    status_load_record(a0 + 0x174, a1 + 0x24);
    uVar1 = copy15_in_normalize(a0 + 0x2dc, a1 + 0x58);
    return uVar1;
}

/*
 * save_state_record_0a56cc  0x8c0a56cc
 * stores object state, status and the 15 bytes at +0x2dc into save record a1
 */
u32 save_state_record_0a56cc(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_state_save(a0, a1, a2, a3);
    talk_state_get_info(a0 + 0x174, a1 + 0x4c, a2);
    uVar1 = copy15_out(a0 + 0x2dc, a1 + 0xd8);
    return uVar1;
}

/*
 * save_pose_record_0a572c  0x8c0a572c
 * stores pose, status and the 15 bytes at +0x2dc into save record a1
 */
u32 save_pose_record_0a572c(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_pose_save(a0, a1, a2, a3);
    talk_state_save_fields(a0 + 0x174, a1 + 0x24, a2);
    uVar1 = copy15_out(a0 + 0x2dc, a1 + 0x58);
    return uVar1;
}

/*
 * CSpiderEgg_LoadGRReq  0x8c0a5784
 * strings: "Kidsptr is null.."; "CSpiderEgg::LoadGRReq()"
 */
u32 CSpiderEgg_LoadGRReq(int a0, u32 a1, u32 a2, u32 a3) {
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
            (*(code *)(&report_error_message))("Kidsptr is null..", "CSpiderEgg::LoadGRReq()", 0, 2);
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
 * egg_load_gr_wait_0a5854  0x8c0a5854
 * CAnimal_LoadGRWait, then the same for the child object at +0x330
 */
u32 egg_load_gr_wait_0a5854(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CAnimal_LoadGRWait(a0, a1, a2, a3);
    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = (**(code **)(0xe0 + *(int *)(*(int *)(0x330 + a0) + 8)))(*(int *)(0x330 + a0), a1, 0, a3);
    }
    return uVar1;
}

/*
 * CSpiderEgg_release_0a58a4  0x8c0a58a4
 * area name: sits between CSpiderEgg functions (same compilation unit); behaviour name: mostly calls release functions
 */
u32 CSpiderEgg_release_0a58a4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CAnimal_release_part_requests(a0, a1, a2);
    uVar1 = 0;
    if (*(int *)(0x330 + a0) != 0) {
        uVar1 = (**(code **)(0xec + *(int *)(*(int *)(0x330 + a0) + 8)))(*(int *)(0x330 + a0), a1, 0, a3);
    }
    return uVar1;
}

/*
 * SpiderEgg_asset_table_init  0x8c0a58f4
 * fills the spider egg asset table (uses the moth egg assets)
 * called by: game_init_sound_and_messages
 */
u32 SpiderEgg_asset_table_init(void) {
    int iVar1;

    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u8 ***)(iVar1 * 0x124 + 0x8c285640) = &PTR_s_Cpe_BeCatapillar_njm_8c13b0f8;
        *(u8 ***)(iVar1 * 0x124 + 0x8c285644) = &PTR_s_Cpe_BeCatapillar_njs_8c13b0fc;
        *(u8 **)(iVar1 * 0x124 + 0x8c285648) = PTR_s_Cpe_Home_nj_8c13b0f0;
        *(u32 *)(iVar1 * 0x124 + 0x8c28564c) = 0;
        *(u8 **)(iVar1 * 0x124 + 0x8c285650) = PTR_s_MOTH_EGG_8c13b0f4;
        *(u32 *)(iVar1 * 0x124 + 0x8c285654) = 0;
        *(u32 *)(iVar1 * 0x124 + 0x8c2856dc) = 0x8c285788;
        *(u16 *)(iVar1 * 0x124 + 0x8c2856e0) = 1;
        *(u32 *)(iVar1 * 0x124 + 0x8c2856e4) = 0x8c285798;
        *(u16 *)(iVar1 * 0x124 + 0x8c2856e8) = 1;
        *(u32 *)(iVar1 * 0x124 + 0x8c2856f0) = 0x8c2857a8;
        *(u32 *)(iVar1 * 0x124 + 0x8c2856f8) = 0x3f800000;
        *(u32 *)(iVar1 * 0x124 + 0x8c285708) = 0x3ca3d70a;
        *(u32 *)(iVar1 * 0x124 + 0x8c28570c) = 0x3f4ccccd;
        *(u32 *)(iVar1 * 0x124 + 0x8c285710) = 0x42c80000;
    }
    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u16 *)(iVar1 * 0x10 + 0x8c28576c) = 0xffff;
        *(u32 *)(iVar1 * 0x10 + 0x8c285770) = 0;
        *(u32 *)(iVar1 * 0x10 + 0x8c285774) = 1;
        *(u32 *)(iVar1 * 0x10 + 0x8c285778) = 0;
    }
    return 1;
}

/*
 * Class_12aeec_m7_0a5af4  0x8c0a5af4
 */
u32 Class_12aeec_m7_0a5af4(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int *ar5_00;
    u32 *a6;
    float fVar2;
    double in_dr0;
    double dVar3;
    u32 uVar5;
    double dVar4;
    float fVar6;
    u64 in_dr14;
    bool bVar7;
    char cVar8;
    char cVar9;
    u32 uStack_34;
    float fStack_30;
    float fStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;

    uVar1 = (u32)((u64)in_dr14 >> 0x20);
    cVar9 = '\0';
    cVar8 = '\0';
    ar5_00 = a1;
    Vec3_ctor_zero(&uStack_24, a1, a2);
    Vec3_ctor_zero(&uStack_34, ar5_00, a2);
    dVar4 = (double)CONCAT44(uVar1, 0x3f800000);
    a6 = &uStack_34;
    (**(code **)(*a1 + 0x124))(a1, &uStack_24, a6, a3);
    if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(a0 + 0x30));
    }
    fVar6 = SUB84(dVar4, 0);
    if (cVar8 == '\0') {
        fVar2 = SUB84(in_dr0, 0) - fVar6;
    } else {
        fVar2 = SUB84(in_dr0 - dVar4, 0);
    }
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(uStack_24, fVar2);
    } else {
        dVar3 = (double)CONCAT44(uStack_20, uStack_24);
    }
    fVar2 = (float)((u64)dVar3 >> 0x20);
    if (cVar8 == '\0' && fVar2 < SUB84(dVar3, 0)) {
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(fVar2, *(u32 *)(a0 + 0x30));
        }
        if (cVar8 == '\0') {
            fVar2 = SUB84(dVar3, 0) + fVar6;
        } else {
            fVar2 = SUB84(dVar3 + dVar4, 0);
        }
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(uStack_34, fVar2);
        } else {
            dVar3 = (double)CONCAT44(fStack_30, uStack_34);
        }
        if (cVar8 != '\0' || (float)((u64)dVar3 >> 0x20) <= SUB84(dVar3, 0)) {
            if (cVar9 == '\0') {
                dVar3 = (double)CONCAT44(uStack_34, SUB84(dVar3, 0));
            } else {
                dVar3 = (double)CONCAT44(fStack_30, uStack_34);
            }
            if (cVar8 == '\0') {
                dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) - fVar6, SUB84(dVar3, 0));
            } else {
                dVar3 = dVar3 - dVar4;
            }
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x30) = (int)((u64)dVar3 >> 0x20);
            } else {
                *(double *)(a0 + 0x30) = dVar3;
            }
        }
    } else {
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(uStack_24, SUB84(dVar3, 0));
        } else {
            dVar3 = (double)CONCAT44(uStack_20, uStack_24);
        }
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) + fVar6, SUB84(dVar3, 0));
        } else {
            dVar3 = dVar3 + dVar4;
        }
        if (cVar9 == '\0') {
            *(int *)(a0 + 0x30) = (int)((u64)dVar3 >> 0x20);
        } else {
            *(double *)(a0 + 0x30) = dVar3;
        }
    }
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), *(u32 *)(a0 + 0x38));
    }
    if (cVar8 == '\0') {
        fVar2 = SUB84(dVar3, 0) - fVar6;
    } else {
        fVar2 = SUB84(dVar3 - dVar4, 0);
    }
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(uStack_1c, fVar2);
    } else {
        dVar3 = (double)CONCAT44(uStack_18, uStack_1c);
    }
    fVar2 = (float)((u64)dVar3 >> 0x20);
    if (cVar8 == '\0' && fVar2 < SUB84(dVar3, 0)) {
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(fVar2, *(u32 *)(a0 + 0x38));
        }
        if (cVar8 == '\0') {
            fVar2 = SUB84(dVar3, 0) + fVar6;
        } else {
            fVar2 = SUB84(dVar3 + dVar4, 0);
        }
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(fStack_2c, fVar2);
        } else {
            dVar3 = (double)CONCAT44(uStack_28, fStack_2c);
        }
        if (cVar8 != '\0' || (float)((u64)dVar3 >> 0x20) <= SUB84(dVar3, 0)) {
            if (cVar9 == '\0') {
                dVar3 = (double)CONCAT44(fStack_2c, SUB84(dVar3, 0));
            } else {
                dVar3 = (double)CONCAT44(uStack_28, fStack_2c);
            }
            if (cVar8 == '\0') {
                dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) - fVar6, SUB84(dVar3, 0));
            } else {
                dVar3 = dVar3 - dVar4;
            }
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x38) = (int)((u64)dVar3 >> 0x20);
            } else {
                *(double *)(a0 + 0x38) = dVar3;
            }
        }
    } else {
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(uStack_1c, SUB84(dVar3, 0));
        } else {
            dVar3 = (double)CONCAT44(uStack_18, uStack_1c);
        }
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) + fVar6, SUB84(dVar3, 0));
        } else {
            dVar3 = dVar3 + dVar4;
        }
        if (cVar9 == '\0') {
            *(int *)(a0 + 0x38) = (int)((u64)dVar3 >> 0x20);
        } else {
            *(double *)(a0 + 0x38) = dVar3;
        }
    }
    (**(code **)(*a1 + 0x128))(a1, a0 + 0x30, a6, a3);
    uVar1 = SUB84(dVar3, 0);
    uVar5 = (u32)((u64)dVar3 >> 0x20);
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(uVar5, SUB84(dVar4, 0));
        dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x34), uVar1);
    } else {
        dVar4 = *(double *)(a0 + 0x34);
        uStack_34 = uVar5;
    }
    fVar6 = (float)((u64)dVar3 >> 0x20);
    if (cVar8 == '\0') {
        bVar7 = fVar6 < (float)((u64)dVar4 >> 0x20);
    } else {
        bVar7 = dVar3 < dVar4;
    }
    if (bVar7) {
        fVar6 = fStack_30;
        fVar2 = fStack_2c;
        if (cVar9 == '\0') {
            fVar6 = *(float *)(a0 + 0x34);
            fVar2 = fStack_30;
        }
        if (cVar8 != '\0' || fVar2 <= fVar6) {
            if (cVar9 == '\0') {
                *(float *)(a0 + 0x34) = fStack_30;
            } else {
                *(u64 *)(a0 + 0x34) = CONCAT44(fStack_2c, fStack_30);
            }
        }
    } else if (cVar9 == '\0') {
        *(float *)(a0 + 0x34) = fVar6;
    } else {
        *(double *)(a0 + 0x34) = dVar3;
    }
    Vec3_dtor(&uStack_34, 0xffffffff, a6, a3);
    uVar1 = Vec3_dtor(&uStack_24, 0xffffffff, a6, a3);
    return uVar1;
}

/*
 * game_uses_release_child_6c_0a5c2c  0x8c0a5c2c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is release_child_6c
 */
u32 game_uses_release_child_6c_0a5c2c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = release_child_6c(*(u32 *)(0x308 + a0), a1, a2, a3);
    return (u32)(iVar1 == 1);
}

/*
 * Class_12ad50_m3_0a5c60  0x8c0a5c60
 */
u32 Class_12ad50_m3_0a5c60(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 8) + 0x10))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * ret_const_1_0a5c88  0x8c0a5c88
 */
u32 ret_const_1_0a5c88(void) {
    return 1;
}

/*
 * static_init_vec3s_285220  0x8c0a5c90
 * static initialiser: builds 12 global Vec3 constants (8c285220..8c285574) and registers their destructors
 */
u32 static_init_vec3s_285220(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    u32 uVar4;
    char cVar5;

    cVar5 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c1261f0, a1, a2, a3);
    uVar3 = 0x8c285220;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285220, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126200, pcVar2, uVar3, a3);
    uVar3 = 0x8c28522c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28522c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126210, pcVar2, uVar3, a3);
    uVar3 = 0x8c285238;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285238, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126220, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c285244, a3);
    uVar1 = 4;
    vec_new_array(0x8c28525c, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 9);
    global_list_push(0, destroy_array_8c28525c, 0x8c285250, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c28528c, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 9);
    global_list_push(0, destroy_array_8c28528c, 0x8c285280, uVar1);
    if (cVar5 == '\0') {
        g_8c126230 = CONCAT44(_UNK_8c126234, 0x800000);
        /* WARNING: Read-only address (ram,0x8c126234) is written */
    } else {
        g_8c126230 = 0xffffffff00800000;
    }
    uVar1 = 4;
    vec_new_array(0x8c285310, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 9);
    global_list_push(0, destroy_array_8c285310, 0x8c285304, uVar1);
    uVar4 = 4;
    vec_new_array(0x8c285340, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 9);
    uVar1 = 0x8c285334;
    pcVar2 = destroy_array_8c285340;
    global_list_push(0, destroy_array_8c285340, 0x8c285334, uVar4);
    uVar1 = game_struct_02452c_ctor(0x8c285370, pcVar2);
    uVar3 = 0x8c285364;
    pcVar2 = game_release_03a4ac;
    global_list_push(uVar1, game_release_03a4ac, 0x8c285364, uVar4);
    uVar1 = game_uses_set_fields_0_4_8_024824(&g_8c2854a0);
    uVar3 = 0x8c285494;
    pcVar2 = free_if_nonnull_wrap_03a454;
    global_list_push(uVar1, free_if_nonnull_wrap_03a454, 0x8c285494, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c2854bc, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c2854b0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2854b0, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c2854d8, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c2854cc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2854cc, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c2854f4, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c2854e8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2854e8, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c285510, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c285504;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285504, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c28552c, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c285520;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285520, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c285548, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c28553c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28553c, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c285564, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c285558;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285558, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c285580, pcVar2, uVar3, uVar4);
    global_list_push(uVar1, Vec3_dtor, 0x8c285574, uVar4);
    uVar4 = 0x8c2854f4;
    uVar1 = Class_129938_ctor_init(0x8c28559c, 0x8c2854bc, 0x8c2854d8, 0x8c2854f4, 0x8c285510, 0x8c28552c, 0x8c285548,
                                   0x8c285564, 0x8c285580);
    uVar3 = 0x8c285590;
    pcVar2 = Class_129938_dtor;
    global_list_push(uVar1, Class_129938_dtor, 0x8c285590, uVar4);
    uVar1 = game_struct_02452c_ctor(0x8c28563c, pcVar2);
    uVar3 = 0x8c285630;
    pcVar2 = game_release_03a4ac;
    global_list_push(uVar1, game_release_03a4ac, 0x8c285630, uVar4);
    uVar1 = game_uses_set_fields_0_4_8_024824(0x8c28576c);
    uVar3 = 0x8c285760;
    pcVar2 = free_if_nonnull_wrap_03a454;
    global_list_push(uVar1, free_if_nonnull_wrap_03a454, 0x8c285760, uVar4);
    uVar1 = clear_field_0_wrap_015b94(0x8c285788, pcVar2);
    uVar3 = 0x8c28577c;
    pcVar2 = free_if_nonnull_wrap_0247b0;
    global_list_push(uVar1, free_if_nonnull_wrap_0247b0, 0x8c28577c, uVar4);
    uVar1 = clear_field_0_wrap_015bc8(0x8c285798);
    global_list_push(uVar1, free_if_nonnull_wrap_03a3dc, 0x8c28578c, uVar4);
    uVar3 = 0x8c2854f4;
    uVar1 = Class_129938_ctor_init(0x8c2857a8, 0x8c2854bc, 0x8c2854d8, 0x8c2854f4, 0x8c285510, 0x8c28552c, 0x8c285548,
                                   0x8c285564, 0x8c285580);
    uVar1 = global_list_push(uVar1, Class_129938_dtor, 0x8c28579c, uVar3);
    return uVar1;
}

/*
 * destroy_array_8c285340  0x8c0a60d4
 * destroys the global array at 0x8c285340
 */
u32 destroy_array_8c285340(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c285340, free_if_nonnull_wrap_03a3dc, 4, 9);
    return uVar1;
}

/*
 * destroy_array_8c285310  0x8c0a60f8
 * destroys the global array at 0x8c285310
 */
u32 destroy_array_8c285310(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c285310, free_if_nonnull_wrap_0247b0, 4, 9);
    return uVar1;
}

/*
 * destroy_array_8c28528c  0x8c0a611c
 * destroys the global array at 0x8c28528c
 */
u32 destroy_array_8c28528c(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c28528c, free_if_nonnull_wrap_03a3dc, 4, 9);
    return uVar1;
}

/*
 * destroy_array_8c28525c  0x8c0a6140
 * destroys the global array at 0x8c28525c
 */
u32 destroy_array_8c28525c(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c28525c, free_if_nonnull_wrap_0247b0, 4, 9);
    return uVar1;
}

/*
 * Class_12b088_ctor  0x8c0a6164
 * Class_129cbc base constructor, Class_12b088 vtable, a 500-entry vector array (+0x234) and three vectors, then the
 * state reset called by: CSpiderLine_ctor
 */
u32 *Class_12b088_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u8 *ar5_00;
    u8 *ar6_00;
    u32 ar7_00;

    Class_129cbc_ctor(a0, a1, a2, a3);
    *a0 = (&DATA_8c12b088);
    ar7_00 = 0x10;
    ar5_00 = (&Vec3_ctor_zero);
    ar6_00 = (&Vec3_dtor);
    (*(code *)(&vec_new_array))((int)a0 + 0x234, (&Vec3_ctor_zero), (&Vec3_dtor), 0x10, 0x1f4);
    Vec3_ctor_zero((int)a0 + 0x2174, ar5_00, ar6_00);
    Vec3_ctor_zero((int)a0 + 0x2184, ar5_00, ar6_00);
    Vec3_set_zero((int)a0 + 0x21a8);
    Class_12b088_reset(a0, 0, ar6_00, ar7_00);
    return a0;
}

/*
 * Class_12b088_reset  0x8c0a61f8
 * sets the action table (Moveto, 6 entries) and clears the motion state
 * called by: Class_12b088_ctor
 */
u32 Class_12b088_reset(int a0, u32 a1, u32 a2, u32 a3) {
    u8 auStack_14[16];

    *(u8 ***)(a0 + 0x1c8) = &PTR_s_Moveto_8c13b27c;
    *(u32 *)(a0 + 0x1cc) = 6;
    *(u32 *)(a0 + 0x230) = 0;
    *(u32 *)(a0 + 0x220) = 2;
    *(u32 *)(a0 + 0x224) = 2;
    *(u32 *)(a0 + 0x2194) = 0;
    *(u32 *)(a0 + 0x219c) = 0;
    *(u32 *)(a0 + 0x2198) = 0;
    Vec3_set_xyz(auStack_14, a1, a2, a3);
    vec3_copy_8c023d8c(a0 + 0x21a8, auStack_14, a2, a3);
    object_dtor_delete(auStack_14, 0xffffffff, a2, a3);
    *(u32 *)(a0 + 0x21a4) = 0;
    *(u32 *)(a0 + 0x21b8) = 0;
    *(u32 *)(a0 + 0x21bc) = 0;
    *(u32 *)(a0 + 0x21b4) = 0;
    *(u32 *)(a0 + 0x1d0) = 1;
    return 0x1d0;
}

/*
 * Class_12b088_dtor  0x8c0a62cc
 * stores the vtable 0x8c12b088
 * called by: Class_12aeec_m0_0a4694
 */
u32 *Class_12b088_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b088;
        object_dtor_delete(a0 + 0x86a, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x861, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x85d, 0xffffffff, a2, a3);
        ar7_00 = 500;
        ar6_00 = 0x10;
        vec_delete_array(a0 + 0x8d, Vec3_dtor, 0x10, 500);
        ar5_00 = 0;
        Class_129cbc_dtor(a0, 0, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b088_vec_0a6370  0x8c0a6370
 * area name: sits between Class_12b088 functions (same compilation unit); behaviour name: mostly calls vec functions
 */
u32 Class_12b088_vec_0a6370(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_28[16];
    u8 auStack_18[20];

    game_uses_CAnimBody_SetAnimation_031684(a0);
    *(u32 *)(0x21a4 + a0) = 0;
    *(u32 *)(0x2198 + a0) = 0;
    *(u32 *)(0x219c + a0) = 0;
    *(u32 *)(0x230 + a0) = 0;
    Vec3_ctor_xyz(auStack_18, a1, a2, a3);
    Vec3_assign(a0 + 0x80, auStack_18, a2, a3);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    Vec3_ctor_xyz(auStack_28, uVar1, a2, a3);
    Vec3_assign(a0 + 0x14, auStack_28, a2, a3);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    uVar1 = Vec3_assign_f_023d7c(a0 + 0x21a8, uVar1);
    return uVar1;
}

/*
 * Class_12b088_uses_reset_fields_2c_6c_0a6430  0x8c0a6430
 * area name: sits between Class_12b088 functions (same compilation unit); behaviour name: its callees mostly do:
 * uses_reset_fields_2c_6c
 */
int Class_12b088_uses_reset_fields_2c_6c_0a6430(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    game_uses_reset_fields_2c_6c_032160(a0, a1, a2, a3);
    *(u32 *)(0x21b8 + a0) = 0;
    *(u32 *)(0x21bc + a0) = 0;
    iVar1 = 0x21b4;
    *(u32 *)(0x21b4 + a0) = 0;
    return iVar1;
}

/*
 * Class_12b088_m1_0a6468  0x8c0a6468
 */
u32 Class_12b088_m1_0a6468(int a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *a5;
    u8 *ar6_00;
    u32 uVar2;
    u8 auStack_50[16];
    u8 auStack_40[16];
    u8 auStack_30[16];
    u8 auStack_20[20];

    a5 = a1;
    Class_129cbc_m1_031598(a0, a1, a2, a3);
    uVar2 = 1;
    if ((*(int *)(a0 + 0x21a4) == 2) || (*(int *)(a0 + 0x2198) != 0)) {
        if (*(int *)(a0 + 0x2198) != 8) {
            iVar1 = (**(code **)(*(int *)a1[6] + 0x1a8))((int *)a1[6], a5, a2, a3);
            if ((iVar1 == 1) && (*(int *)(a0 + 0x124) != 4)) {
                a3 = *(u32 *)(a1[1] + 4);
                a2 = a1[6];
                Class_12b088_vec_0aa70c(a0, *(u32 *)a1[1], a2, a3);
                goto LAB_8c0a64f8;
            }
        }
        uVar2 = Class_12b088_vec_0a6628(a0, a1, a2, a3);
    } else {
        a3 = *(u32 *)(a1[1] + 4);
        a2 = a1[4];
        Class_12b088_state_switch_0a99c4(a0, *(u32 *)a1[1], a2, a3);
    }
LAB_8c0a64f8:
    set_field_3c_02f2c0(*a1, uVar2);
    if (*(int *)(a0 + 0x178) == 1) {
        set_field_3c_02f2c0(*a1, 1);
    }
    if ((*(int *)(a0 + 0x2198) == 0) && (*(int *)(a0 + 0x2198) != 8)) {
        timer_vec_031ab4(a0, *(u32 *)(a1[1] + 4), a2, a3);
    }
    Vec3_scale(a0 + 0x14, a0 + 0x28, a2, a3, auStack_20);
    Vec3_add(auStack_20, a0 + 0x90, a2, a3, auStack_30);
    Vec3_add(auStack_30, a0 + 0x6c, a2, a3, auStack_40);
    Vec3_assign(a0 + 4, auStack_40, a2, a3);
    Vec3_dtor(auStack_40, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_20, 0xffffffff, a2, a3);
    Vec3_ctor_copy_wrap_03f480(*a1, uVar2, a2, a3, auStack_50);
    ar6_00 = auStack_50;
    static_init_27def0(a0, a1[1], ar6_00, a3);
    uVar2 = Vec3_dtor(auStack_50, 0xffffffff, ar6_00, a3);
    return uVar2;
}

/*
 * Class_12b088_vec_0a6628  0x8c0a6628
 * area name: only called from Class_12b088 methods; behaviour name: mostly calls vec functions
 * called by: Class_12b088_m1_0a6468
 */
int Class_12b088_vec_0a6628(int a0, int *a1, u8 *a2, u32 a3) {
    int iVar1;
    int ar5_00;
    u32 ar5_01;
    int iVar2;
    u64 in_dr0;
    float fVar3;
    code *pcVar4;
    char cVar5;
    char cVar6;
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[12];
    u8 auStack_30[16];
    float fStack_20;
    u64 uStack_1c;
    u32 uStack_c;

    fVar3 = (float)((u64)in_dr0 >> 0x20);
    cVar6 = '\0';
    cVar5 = '\0';
    uStack_c = 1;
    iVar2 = 1;
    Vec3_ctor_copy_wrap_03f480(*a1, a1, a2, a3, auStack_30);
    Vec3_ctor_copy(&fStack_20, auStack_30, a2, a3);
    ar5_00 = -1;
    Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
    if (g_8c2858ec == '\0') {
        g_8c2858e8 = 0;
        g_8c2858ec = '\x01';
    }
    if (g_8c2858f4 == '\0') {
        g_8c2858f0 = 0;
        g_8c2858f4 = '\x01';
    }
    if (*(int *)(a0 + 0x178) == 1) {
        ar5_00 = a0 + 0x168;
        Vec3_assign(&fStack_20, ar5_00, a2, a3);
    }
    iVar1 = *(int *)(a0 + 0x124);
    if ((iVar1 < 6) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            iVar2 = get_field_24_026024(a1[6], ar5_00, a2, a3);
            if (iVar2 == 0) {
                if (cVar6 == '\0') {
                    fVar3 = 1000.0;
                } else {
                    fStack_20 = 1000.0;
                    fVar3 = 180.0;
                }
                if (cVar5 == '\0' && fVar3 < fStack_20) {
                    Vec3_dtor(&fStack_20, 0xffffffff, a2, a3);
                    return 2;
                }
                if (cVar6 == '\0') {
                    uStack_1c = CONCAT44(uStack_1c._4_4_, 0x43340000);
                } else {
                    uStack_1c = 0x8843340000;
                }
            }
            Vec3_ctor_copy(auStack_4c, *(u32 *)a1[1], a2, a3);
            Vec3_ctor_copy(auStack_5c, &fStack_20, a2, a3);
            a2 = auStack_5c;
            iVar2 = game_state_switch_0a72b4(a0, auStack_4c, a2, a3);
            Vec3_dtor(auStack_5c, 0xffffffff, a2, a3);
            Vec3_dtor(auStack_4c, 0xffffffff, a2, a3);
            Vec3_assign(a0 + 0x80, a0 + 0x14, a2, a3);
            break;
        case 1:
            Vec3_copy_assign(auStack_3c, a1[3]);
            a3 = *(u32 *)(a1[1] + 4);
            a2 = auStack_3c;
            iVar2 = game_state_switch_0a6974(a0, *(u32 *)a1[1], a2, a3);
            free_if_nonnull_wrap_102790(auStack_3c, 0xffffffff, a2, a3);
            break;
        case 2:
            iVar2 = 0;
            break;
        case 3:
            iVar2 = (**(code **)(*(int *)a1[6] + 0x1a8))((int *)a1[6], ar5_00, a2, a3);
            if (iVar2 == 1) {
                a2 = (u8 *)*a1;
                iVar2 = game_vec_0aa11c(a0, *(u32 *)a1[1], a2);
            } else {
                iVar2 = 2;
            }
            break;
        case 4:
            *(u32 *)(a0 + 0x214) = 0;
            Vec3_ctor_xyz(auStack_6c, ar5_00, a2, a3);
            Vec3_assign(a0 + 0x80, auStack_6c, a2, a3);
            Vec3_dtor(auStack_6c, 0xffffffff, a2, a3);
            if (*(int *)(a0 + 300) == 0) {
                ar5_01 = 6;
                timer_uses_CAnimBody_PlayToEnd_031de8(a0, 6, a2, a3);
                CAnimBody_GetCurFrame(a0 + 0xb0, ar5_01, a2, a3);
                if (cVar6 == '\0') {
                    pcVar4 = (code *)0x42b40000;
                } else {
                    fVar3 = 90.0;
                    pcVar4 = CAnimBody_SetFrame;
                }
                if (cVar5 != '\0' || (float)pcVar4 <= fVar3) {
                    CAnimBody_SetFrame(a0 + 0xb0, ar5_01, a2, a3);
                    iVar2 = 0;
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                }
            }
            break;
        case 5:
            iVar2 = timer_uses_CAnimBody_PlayToEnd_031de8(a0, 8, a2, a3);
        }
    }
    if ((*(int *)(a0 + 0x178) == 1) && (iVar2 == 0)) {
        a2 = (u8 *)a1[6];
        timer_vec_031ce8(a0, a1[3], a2, a3);
        Vec3_assign(a0 + 0x168, auStack_7c, a2, a3);
        Vec3_dtor(auStack_7c, 0xffffffff, a2, a3);
    }
    Vec3_dtor(&fStack_20, 0xffffffff, a2, a3);
    return iVar2;
}

/*
 * game_state_switch_0a6974  0x8c0a6974
 * area name: game code; nothing names its area yet; behaviour name: dispatches on a state or mode value (switch)
 * called by: Class_12b088_vec_0a6628
 */
int game_state_switch_0a6974(int a0, u64 *a1, u64 *a2, u64 *a3) {
    u64 *puVar1;
    int iVar2;
    u32 uVar3;
    u64 *ar5_00;
    u32 ar6_00;
    u64 *ar6_01;
    u8 *puVar4;
    u32 ar7_00;
    u64 *ar7_01;
    int iVar5;
    u64 in_dr0;
    char cVar6;
    u64 *in_stack_00000000;
    u8 auStack_b4[12];
    u8 auStack_a8[12];
    u8 auStack_9c[12];
    u8 auStack_90[12];
    u8 auStack_84[12];
    u8 auStack_78[16];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u64 auStack_28[2];

    cVar6 = '\0';
    iVar5 = 1;
    iVar2 = *(int *)(a0 + 0x134);
    if ((8 < iVar2) || (iVar2 < 0))
        goto switchD_8c0a69b0_default;
    ar5_00 = a1;
    puVar1 = a2;
    ar7_01 = a3;
    switch (iVar2) {
    case 0:
        iVar2 = (**(code **)((int)*in_stack_00000000 + 0x1a8))(in_stack_00000000, a1, a2, a3);
        if (iVar2 == 1) {
            *(u32 *)(a0 + 0x134) = 8;
            if (cVar6 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = in_dr0 & 0xffffffff;
            }
            ar7_00 = 0;
            ar6_00 = 0xffffffff;
            uVar3 = 2;
            CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar3, ar6_00, ar7_00);
            goto switchD_8c0a69b0_default;
        }
        ar5_00 = NULL;
        puVar1 = (u64 *)rand_range(a0, 0, 7);
        if (((int)puVar1 < 7) && (-1 < (int)puVar1)) {
            ar6_01 = (u64 *)((int)puVar1 * 4);
            switch (puVar1) {
            case NULL:
                ar5_00 = (u64 *)(a0 + 0x28);
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar6 == '\0') {
                    *(u32 *)ar5_00 = 0;
                } else {
                    *ar5_00 = in_dr0;
                }
                if (*(int *)(a0 + 0x2198) == 6) {
                    *(u32 *)(a0 + 0x134) = 5;
                    goto switchD_8c0a6a7a_caseD_5;
                }
                *(u32 *)(a0 + 0x228) = 0;
                puVar1 = ar6_01;
                break;
            case (u64 *)0x1:
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar6 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = in_dr0;
                }
                if (*(int *)(a0 + 0x2198) == 6) {
                    *(u32 *)(a0 + 0x134) = 5;
                    goto switchD_8c0a6a7a_caseD_5;
                }
                *(u32 *)(a0 + 0x228) = 1;
                puVar1 = ar6_01;
                break;
            case (u64 *)0x2:
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar6 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = in_dr0;
                }
                if (*(int *)(a0 + 0x2198) == 6) {
                    *(u32 *)(a0 + 0x134) = 5;
                    goto switchD_8c0a6a7a_caseD_5;
                }
                *(u32 *)(a0 + 0x228) = 2;
                puVar1 = ar6_01;
                break;
            case (u64 *)0x3:
                ar6_01 = (u64 *)(a0 + 0x28);
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar6 == '\0') {
                    *(int *)ar6_01 = 0;
                } else {
                    *ar6_01 = in_dr0;
                }
                if (*(int *)(a0 + 0x2198) == 6) {
                    *(u32 *)(a0 + 0x134) = 5;
                    goto switchD_8c0a6a7a_caseD_5;
                }
                ar5_00 = (u64 *)0x3;
                *(u32 *)(a0 + 0x228) = 3;
                puVar1 = ar6_01;
                break;
            case (u64 *)0x4:
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar6 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = in_dr0;
                }
                if (*(int *)(a0 + 0x2198) == 6) {
                    *(u32 *)(a0 + 0x134) = 5;
                    goto switchD_8c0a6a7a_caseD_5;
                }
                *(u32 *)(a0 + 0x228) = 4;
                puVar1 = ar6_01;
                break;
            case (u64 *)0x5:
            switchD_8c0a6a7a_caseD_5:
                puVar1 = ar6_01;
                if (*(int *)(a0 + 0x2198) == 6) {
                    *(u32 *)(a0 + 0x228) = 8;
                } else {
                    *(u32 *)(a0 + 0x228) = 5;
                }
                break;
            case (u64 *)0x6:
                if (*(int *)(a0 + 0x2198) == 0) {
                    iVar2 = get_field_24_026024(in_stack_00000000, ar5_00, ar6_01, ar7_01);
                    puVar1 = ar6_01;
                    if (iVar2 == 1) {
                        *(u32 *)(a0 + 0x228) = 6;
                    } else {
                        *(u32 *)(a0 + 0x228) = 5;
                    }
                } else if ((*(int *)(a0 + 0x2198) == 5) || (*(int *)(a0 + 0x2198) == 6)) {
                    *(u32 *)(a0 + 0x228) = 8;
                    puVar1 = ar6_01;
                } else {
                    puVar1 = (u64 *)0x2;
                    ar5_00 = NULL;
                    iVar2 = rand_range(a0, 0, 2);
                    if (iVar2 == 0) {
                        *(u32 *)(a0 + 0x228) = 7;
                    } else {
                        *(u32 *)(a0 + 0x228) = 9;
                    }
                }
            }
        }
        *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
        break;
    case 2:
        goto switchD_8c0a69b0_caseD_2;
    case 3:
        goto switchD_8c0a69b0_caseD_3;
    case 4:
        goto switchD_8c0a69b0_caseD_4;
    case 5:
        goto switchD_8c0a69b0_caseD_5;
    case 6:
        goto switchD_8c0a69b0_caseD_6;
    case 7:
        goto switchD_8c0a69b0_caseD_7;
    case 8:
        CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
        goto switchD_8c0a69b0_default;
    }
    uVar3 = (u32)in_dr0;
    iVar2 = *(int *)(a0 + 0x228);
    if ((9 < iVar2) || (iVar2 < 0))
        goto switchD_8c0a6c88_default;
    switch (iVar2) {
    case 0:
        ar7_01 = NULL;
        puVar1 = (u64 *)0xffffffff;
        ar5_00 = (u64 *)0x2;
        CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, ar5_00, puVar1, ar7_01);
        break;
    case 1:
        ar7_01 = NULL;
        puVar1 = (u64 *)0xffffffff;
        ar5_00 = (u64 *)0x3;
        CAnimBody_SetAnimation(a0 + 0xb0, 3, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, ar5_00, puVar1, ar7_01);
        break;
    case 2:
        ar7_01 = NULL;
        puVar1 = (u64 *)0xffffffff;
        ar5_00 = (u64 *)0x4;
        CAnimBody_SetAnimation(a0 + 0xb0, 4, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, ar5_00, puVar1, ar7_01);
        break;
    case 3:
        ar7_01 = NULL;
        puVar1 = (u64 *)0xffffffff;
        ar5_00 = (u64 *)0x5;
        CAnimBody_SetAnimation(a0 + 0xb0, 5, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, ar5_00, puVar1, ar7_01);
        break;
    case 4:
        ar7_01 = NULL;
        puVar1 = (u64 *)0xffffffff;
        ar5_00 = (u64 *)0x6;
        CAnimBody_SetAnimation(a0 + 0xb0, 6, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, ar5_00, puVar1, ar7_01);
        break;
    case 5:
        iVar5 = get_field_24_026024(in_stack_00000000, ar5_00, puVar1, ar7_01);
        if (iVar5 == 0) {
            Vec3_assign_f_10277c(auStack_28);
            Vec3_ctor_xyz(auStack_38, ar5_00, puVar1, ar7_01);
            if (cVar6 == '\0') {
                in_dr0 = CONCAT44(0x40000000, uVar3);
            } else {
                in_dr0 = 0x42c8000040000000;
            }
            puVar1 = auStack_28;
            ar7_01 = in_stack_00000000;
            CMushroomerBody_vec_032518(a0, a1, puVar1, in_stack_00000000);
            Vec3_assign(a0 + 0x54, auStack_48, puVar1, ar7_01);
            Vec3_dtor(auStack_48, 0xffffffff, puVar1, ar7_01);
            Vec3_dtor(auStack_38, 0xffffffff, puVar1, ar7_01);
            free_if_nonnull_wrap_102790(auStack_28, 0xffffffff, puVar1, ar7_01);
        } else {
            if (cVar6 == '\0') {
                in_dr0 = CONCAT44(0x40400000, uVar3);
            } else {
                in_dr0 = 0x8c031ce840400000;
            }
            puVar1 = in_stack_00000000;
            timer_vec_031ce8(a0, a2, in_stack_00000000, ar7_01);
            Vec3_assign(a0 + 0x54, auStack_58, puVar1, ar7_01);
            Vec3_dtor(auStack_58, 0xffffffff, puVar1, ar7_01);
        }
        *(u32 *)(a0 + 0x134) = 3;
    switchD_8c0a69b0_caseD_3:
        if (*(int *)(a0 + 0x2198) == 0) {
            (**(code **)((int)*in_stack_00000000 + 0x128))(in_stack_00000000, a0 + 0x54, puVar1, ar7_01);
            if (cVar6 == '\0') {
                *(int *)(a0 + 0x58) = (int)(in_dr0 >> 0x20);
            } else {
                *(u64 *)(a0 + 0x58) = in_dr0;
            }
            Vec3_ctor_copy(auStack_68, a1, puVar1, ar7_01);
            Vec3_ctor_copy(auStack_78, a0 + 0x54, puVar1, ar7_01);
            puVar4 = auStack_78;
            iVar5 = game_state_switch_0a72b4(a0, auStack_68, puVar4, ar7_01);
            Vec3_dtor(auStack_78, 0xffffffff, puVar4, ar7_01);
            Vec3_dtor(auStack_68, 0xffffffff, puVar4, ar7_01);
            Vec3_assign(a0 + 0x80, a0 + 0x14, puVar4, ar7_01);
        } else {
            switch (*(u32 *)(a0 + 0x2198)) {
            case 1:
                if (cVar6 == '\0') {
                    *(int *)(a0 + 0x5c) = (int)a2[1];
                } else {
                    *(u64 *)(a0 + 0x5c) = a2[1];
                }
                break;
            case 2:
                if (cVar6 == '\0') {
                    *(u32 *)(a0 + 0x5c) = 0;
                } else {
                    *(u64 *)(a0 + 0x5c) = in_dr0 & 0xffffffff;
                }
                break;
            case 3:
                if (cVar6 == '\0') {
                    *(int *)(a0 + 0x54) = (int)*a2;
                } else {
                    *(u64 *)(a0 + 0x54) = *a2;
                }
                break;
            case 4:
                if (cVar6 == '\0') {
                    *(u32 *)(a0 + 0x54) = 0;
                } else {
                    *(u64 *)(a0 + 0x54) = in_dr0 & 0xffffffff;
                }
                break;
            case 5:
                if (cVar6 == '\0') {
                    *(int *)(a0 + 0x58) = *(int *)((int)a2 + 4);
                } else {
                    *(u64 *)(a0 + 0x58) = *(u64 *)((int)a2 + 4);
                }
            }
            Vec3_copy_assign(auStack_84, a2);
            iVar5 = game_vec_0a8f94(a0, a1, a0 + 0x54, auStack_84);
            free_if_nonnull_wrap_102790(auStack_84, 0xffffffff, auStack_84, 0xffffffff);
        }
        goto switchD_8c0a69b0_default;
    case 6:
        *(u32 *)(a0 + 0x134) = 4;
    switchD_8c0a69b0_caseD_4:
        Vec3_copy_assign(auStack_90, a2);
        iVar5 = game_vec_0a861c(a0, a1, auStack_90, ar7_01);
        free_if_nonnull_wrap_102790(auStack_90, 0xffffffff, 0xffffffff, ar7_01);
        goto switchD_8c0a69b0_default;
    case 7:
        *(u32 *)(a0 + 0x134) = 5;
    switchD_8c0a69b0_caseD_5:
        Vec3_copy_assign(auStack_9c, a2);
        puVar4 = auStack_9c;
        iVar5 = game_vec_0a8c0c(a0, a1, puVar4, a3);
        free_if_nonnull_wrap_102790(auStack_9c, 0xffffffff, puVar4, a3);
        goto switchD_8c0a69b0_default;
    case 8:
        *(u32 *)(a0 + 0x134) = 6;
    switchD_8c0a69b0_caseD_6:
        if (*(int *)(a0 + 0x2198) == 6) {
            Vec3_copy_assign(auStack_a8, a2);
            puVar4 = auStack_a8;
            iVar5 = game_vec_0a8464(a0, a1, puVar4, ar7_01);
            free_if_nonnull_wrap_102790(auStack_a8, 0xffffffff, puVar4, ar7_01);
        } else {
            (**(code **)((int)*in_stack_00000000 + 0x128))(in_stack_00000000, a1, puVar1, ar7_01);
            iVar5 = game_vec_0a77c8(a0, a1, a3, ar7_01);
        }
        goto switchD_8c0a69b0_default;
    case 9:
        *(u32 *)(a0 + 0x134) = 7;
    switchD_8c0a69b0_caseD_7:
        Vec3_copy_assign(auStack_b4, a2);
        puVar4 = auStack_b4;
        iVar5 = game_vec_0a9578(a0, a1, puVar4, a3);
        free_if_nonnull_wrap_102790(auStack_b4, 0xffffffff, puVar4, a3);
        goto switchD_8c0a69b0_default;
    }
switchD_8c0a6c88_default:
    *(int *)(a0 + 0x134) = *(int *)(a0 + 0x134) + 1;
switchD_8c0a69b0_caseD_2:
    iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, puVar1, ar7_01);
    if (iVar2 == 1) {
        iVar5 = 0;
    }
switchD_8c0a69b0_default:
    if (iVar5 == 0) {
        *(u32 *)(a0 + 0x134) = 0;
    }
    return iVar5;
}

/*
 * game_state_switch_0a72b4  0x8c0a72b4
 * area name: game code; nothing names its area yet; behaviour name: dispatches on a state or mode value (switch)
 * called by: Class_12b088_vec_0a6628, game_state_switch_0a6974, game_vec_0a861c, game_vec_0a8f94
 */
u32 game_state_switch_0a72b4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar6_00;
    u32 unaff_r11;
    u32 uVar3;
    u32 unaff_r13;
    u32 unaff_r14;
    u64 *puVar4;
    u32 uVar5;
    float fVar6;
    u64 in_dr0;
    u64 uVar7;
    double dVar8;
    u64 uVar9;
    u32 uVar10;
    u64 in_dr14;
    u32 in_PR;
    u8 auStack_10[8];
    u64 uStack_8;

    uStack_8 = CONCAT44((int)in_dr14, (u32)uStack_8);
    puVar4 = &uStack_8;
    uStack_8._0_4_ = (int)((u64)in_dr14 >> 0x20);

    *(u32 *)((int)puVar4 + -4) = unaff_r14;
    *(u32 *)((int)puVar4 + -8) = unaff_r13;
    *(u32 *)((int)puVar4 + -0xc) = 1;
    *(u32 *)((int)puVar4 + -0x10) = unaff_r11;
    *(u32 *)((int)puVar4 + -0x14) = in_PR;
    uVar3 = 1;
    uVar1 = a1;
    ar6_00 = a2;
    Vec3_set_zero((u8 *)((int)puVar4 + -0x20));
    uVar10 = (u32)in_dr14;
    iVar2 = *(int *)(a0 + 0x40);
    if ((5 < iVar2) || (iVar2 < 0))
        goto switchD_8c0a72f4_caseD_2;
    switch (iVar2) {
    case 0:
        uVar1 = rand_range(a0, 0, 2);
        uVar5 = (u32)in_dr0;
        *(u32 *)((int)puVar4 + -0x28) = uVar1;
        if (*(int *)((int)puVar4 + -0x28) == 1) {
            a3 = 0;
            ar6_00 = 0xffffffff;
            uVar1 = 0;
            CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
            *(u32 *)(a0 + 0x220) = 0;
        } else {
            a3 = 0;
            ar6_00 = 0xffffffff;
            uVar1 = 1;
            CAnimBody_SetAnimation(a0 + 0xb0, 1, 0xffffffff, 0);
            *(u32 *)(a0 + 0x220) = 1;
        }
        CAnimBody_SetFrame(a0 + 0xb0, uVar1, ar6_00, a3);
        *(u32 *)(a0 + 0x40) = 1;

        in_dr0 = CONCAT44(0xbf800000, uVar5);
        *(u32 *)(a0 + 0x30) = 0xbf800000;

        *(u32 *)(a0 + 0x224) = 2;
        break;
    case 2:
        goto switchD_8c0a72f4_caseD_2;
    case 3:
        goto switchD_8c0a72f4_caseD_3;
    case 4:
        *(int *)((int)puVar4 + -0x50) = a0;

        dVar8 = (double)CONCAT44(g_8c2858d8, *(u32 *)(a0 + 0x22c));

        fVar6 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);

        dVar8 = (double)CONCAT44(*(u32 *)(*(int *)((int)puVar4 + -0x50) + 0x28), fVar6);

        dVar8 = (double)CONCAT44((float)((u64)dVar8 >> 0x20) - SUB84(dVar8, 0), SUB84(dVar8, 0));

        *(int *)(*(int *)((int)puVar4 + -0x50) + 0x28) = (int)((u64)dVar8 >> 0x20);
        dVar8 = (double)(u64) * (u32 *)(a0 + 0x28);

        if (SUB84(dVar8, 0) <= 0.0) {

            *(u32 *)(a0 + 0x28) = 0;
        }
        uVar9 = (u64)dVar8 & 0xffffffff;
        uVar1 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar1, ar6_00, a3);
        *(u32 *)((int)puVar4 + -0x48) = uVar1;
        if (*(int *)((int)puVar4 + -0x48) == 1) {
            Vec3_distance_sq(a1, a2, ar6_00, a3);

            *(int *)((int)puVar4 + -0x4c) = (int)(uVar9 >> 0x20);
            dVar8 = (double)CONCAT44(0x40000000, g_8c2858dc);

            fVar6 = SUB84(dVar8, 0) * (float)((u64)dVar8 >> 0x20);

            dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x28), fVar6);

            fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);

            uVar9 = CONCAT44(*(u32 *)((int)puVar4 + -0x4c), fVar6);

            if ((float)uVar9 < (float)(uVar9 >> 0x20)) {

                *(u32 *)(a0 + 0x28) = 0;

                *(u32 *)(a0 + 0x220) = *(u32 *)(a0 + 0x224);
                *(u32 *)(a0 + 0x40) = 1;
                if (*(int *)(a0 + 0x220) == 0) {
                    a3 = 0;
                    ar6_00 = 0xffffffff;
                    a2 = 0;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                } else if (*(int *)(a0 + 0x220) == 1) {
                    a3 = 0;
                    ar6_00 = 0xffffffff;
                    a2 = 1;
                    CAnimBody_SetAnimation(a0 + 0xb0, 1, 0xffffffff, 0);
                }
                CAnimBody_SetFrame(a0 + 0xb0, a2, ar6_00, a3);
            } else {

                *(u32 *)(a0 + 0x28) = 0;

                uVar3 = 0;
            }
        }
        goto switchD_8c0a72f4_caseD_2;
    }
    fVar6 = (float)in_dr0;
    if (*(int *)(a0 + 0x220) == 0) {

        g_8c2858d4 = 1.0;

        g_8c2858e4 = 0.7;
        g_8c2858e0 = 0.7;
        g_8c2858d8 = 0x41300000;
    } else if (*(int *)(a0 + 0x220) == 1) {

        g_8c2858d8 = 0x40e00000;
        g_8c2858d4 = 10.0;

        g_8c2858e0 = 1.0;
        g_8c2858e4 = 1.0;
    }
    copy6_to_fields(a0, 0x8c2858d0, ar6_00, a3);

    fVar6 = *(float *)(a0 + 0x30);

    in_dr0 = (u64)(u32)fVar6;
    if (0.0 <= fVar6) {

        uVar10 = *(u32 *)(a0 + 0x30);
    }
    uVar1 = a1;
    ar6_00 = a2;
    CMushroomerBody_uses_rand_float_031bb4(a0, a1, a2, a3);
    if (*(int *)(a0 + 0x224) != 2) {

        *(u32 *)(a0 + 0x30) = uVar10;
    }
    *(u32 *)(a0 + 0x40) = 3;
switchD_8c0a72f4_caseD_3:
    if (*(int *)(a0 + 0x220) == 0) {
        CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, uVar1, ar6_00, a3);
        CAnimBody_GetCurFrame(a0 + 0xb0, uVar1, ar6_00, a3, *(u32 *)((int)puVar4 + -0x50));

        *(int *)((int)puVar4 + -0x2c) = (int)(in_dr0 >> 0x20);
        uVar7 = CONCAT44(0x41e80000, *(u32 *)((int)puVar4 + -0x2c));

        if ((float)((u64)uVar7 >> 0x20) <= (float)uVar7) {
            ar6_00 = 5;
            uVar1 = rand_range(a0, 0, 5);
            *(u32 *)((int)puVar4 + -0x30) = uVar1;
            if (*(int *)((int)puVar4 + -0x30) != 1) {
                Vec3_distance_sq(a1, a2, ar6_00, a3);

                *(int *)((int)puVar4 + -0x34) = (int)((u64)uVar7 >> 0x20);
                dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x28), g_8c2858dc);

                fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);

                uVar7 = CONCAT44(*(u32 *)((int)puVar4 + -0x34), fVar6);

                if ((float)uVar7 < (float)((u64)uVar7 >> 0x20))
                    goto LAB_8c0a761e;
            }
            *(u32 *)(a0 + 0x224) = 1;
            *(u32 *)(a0 + 0x220) = 2;
            *(u32 *)(a0 + 0x40) = 4;

            *(u32 *)(a0 + 0x22c) = *(u32 *)(a0 + 0x28);
        }
    } else if (*(int *)(a0 + 0x220) == 1) {
        CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, uVar1, ar6_00, a3);
        CAnimBody_GetCurFrame(a0 + 0xb0, uVar1, ar6_00, a3, *(u32 *)((int)puVar4 + -0x50));

        *(int *)((int)puVar4 + -0x38) = (int)(in_dr0 >> 0x20);
        uVar7 = CONCAT44(0x41200000, *(u32 *)((int)puVar4 + -0x38));

        if ((float)((u64)uVar7 >> 0x20) <= (float)uVar7) {

            *(u32 *)(a0 + 0x28) = 0x40a00000;
            uVar7 = CONCAT44(*(u32 *)(a0 + 0x28), (float)uVar7);
            *(u32 *)(a0 + 0x24) = *(u32 *)(a0 + 0x28);
        }
        CAnimBody_GetCurFrame(a0 + 0xb0, uVar1, ar6_00, a3, *(u32 *)((int)puVar4 + -0x50));

        *(int *)((int)puVar4 + -0x3c) = (int)((u64)uVar7 >> 0x20);
        uVar7 = CONCAT44(0x41400000, *(u32 *)((int)puVar4 + -0x3c));

        if ((float)((u64)uVar7 >> 0x20) <= (float)uVar7) {
            ar6_00 = 2;
            uVar1 = rand_range(a0, 0, 2);
            *(u32 *)((int)puVar4 + -0x40) = uVar1;
            if (*(int *)((int)puVar4 + -0x40) != 1) {
                Vec3_distance_sq(a1, a2, ar6_00, a3);

                *(int *)((int)puVar4 + -0x44) = (int)((u64)uVar7 >> 0x20);
                dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x28), g_8c2858dc);

                fVar6 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);

                uVar7 = CONCAT44(*(u32 *)((int)puVar4 + -0x44), fVar6);

                if ((float)uVar7 < (float)((u64)uVar7 >> 0x20))
                    goto LAB_8c0a761e;
            }
            *(u32 *)(a0 + 0x224) = 0;
            *(u32 *)(a0 + 0x220) = 2;
            *(u32 *)(a0 + 0x40) = 4;

            *(u32 *)(a0 + 0x22c) = *(u32 *)(a0 + 0x28);
        }
    }
LAB_8c0a761e:
    if (*(int *)(a0 + 0x40) != 4) {
        CMushroomerBody_vec_031764(a0, a2, a1, a3);
        *(u32 *)(a0 + 0x40) = 3;
        ar6_00 = a1;
    }
switchD_8c0a72f4_caseD_2:
    *(u32 *)((int)puVar4 + -0x24) = uVar3;
    object_dtor_delete((u8 *)((int)puVar4 + -0x20), 0xffffffff, ar6_00, a3);
    return *(u32 *)((int)puVar4 + -0x24);
}

/*
 * game_vec_0a77c8  0x8c0a77c8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_state_switch_0a6974
 */
u32 game_vec_0a77c8(int a0, code *a1, double *a2, u32 a3) {
    int iVar1;
    int iVar2;
    double *pdVar3;
    u32 uVar4;
    double *ar6_00;
    u32 uVar5;
    u32 uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    double in_dr0;
    code *pcVar12;
    float fVar13;
    double dVar10;
    u64 uVar11;
    u64 in_dr4;
    u64 in_dr6;
    u32 in_fr14;
    double in_xd0;
    bool bVar14;
    char cVar15;
    char cVar16;
    u64 uStack_60;
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[20];

    cVar16 = '\0';
    cVar15 = '\0';
    fVar7 = (float)((u64)in_dr4 >> 0x20);
    fVar9 = (float)((u64)in_dr6 >> 0x20);
    uVar6 = 1;
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        a3 = 0;
        pdVar3 = (double *)0xffffffff;
        a1 = NULL;
        CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
        fVar7 = SUB84(in_dr0, 0);
        CAnimBody_SetFrame(a0 + 0xb0, a1, pdVar3, a3);
        if (cVar16 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = (u64)(u32)fVar7;
        }
        if (cVar16 == '\0') {
            *(u32 *)(a0 + 0x94) = 0;
            fVar7 = *(float *)(a0 + 0x21ac);
        } else {
            *(u64 *)(a0 + 0x94) = (u64)(u32)fVar7;
            in_xd0 = *(double *)(a0 + 0x21ac);
        }
        dVar10 = (double)(u64)(u32)fVar7;
        if (cVar15 == '\0' && fVar7 < 0.0) {
            while (true) {
                fVar7 = SUB84(dVar10, 0);
                if (cVar16 == '\0') {
                    fVar7 = *(float *)(a0 + 0x21ac);
                } else {
                    in_xd0 = *(double *)(a0 + 0x21ac);
                }
                if (cVar15 == '\0' && 0.0 < fVar7)
                    break;
                a1 = (code *)(a0 + 0x21ac);
                if (cVar16 == '\0') {
                    dVar10 = (double)CONCAT44(0x43b40000, *(u32 *)(a0 + 0x21ac));
                } else {
                    in_xd0 = *(double *)(a0 + 0x21ac);
                    dVar10 = -5629500670083072.0;
                }
                if (cVar15 == '\0') {
                    dVar10 = (double)(u64)(u32)(SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20));
                } else {
                    dVar10 = dVar10 + dVar10;
                }
                if (cVar16 == '\0') {
                    *(float *)a1 = SUB84(dVar10, 0);
                } else {
                    *(double *)a1 = in_xd0;
                }
            }
            if (cVar16 == '\0') {
                dVar10 = (double)CONCAT44(0x43b40000, *(u32 *)(a0 + 0x21ac));
            } else {
                in_xd0 = *(double *)(a0 + 0x21ac);
                dVar10 = -5629500670083072.0;
            }
            if (cVar15 == '\0') {
                fVar7 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
            } else {
                fVar7 = SUB84(dVar10 - dVar10, 0);
            }
            if (cVar16 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
                fVar7 = *(float *)(a0 + 0x21ac);
                fVar9 = -180.0;
            } else {
                *(double *)(a0 + 0x21ac) = in_xd0;
                in_xd0 = *(double *)(a0 + 0x21ac);
                fVar7 = -180.0;
                fVar9 = 4.2039e-43;
            }
            if (cVar15 == '\0' && fVar7 < fVar9) {
                if (cVar16 == '\0') {
                    dVar10 = (double)CONCAT44(0x43b40000, *(u32 *)(a0 + 0x21ac));
                } else {
                    in_xd0 = *(double *)(a0 + 0x21ac);
                    dVar10 = -5629500670083072.0;
                }
                if (cVar15 == '\0') {
                    fVar7 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar10 + dVar10, 0);
                }
                if (cVar16 == '\0') {
                    *(float *)(a0 + 0x21ac) = fVar7;
                } else {
                    *(double *)(a0 + 0x21ac) = in_xd0;
                }
            }
        } else {
            while (true) {
                fVar7 = SUB84(dVar10, 0);
                if (cVar16 == '\0') {
                    fVar7 = *(float *)(a0 + 0x21ac);
                } else {
                    in_xd0 = *(double *)(a0 + 0x21ac);
                }
                if (cVar15 == '\0' && fVar7 < 0.0)
                    break;
                if (cVar16 == '\0') {
                    dVar10 = (double)CONCAT44(0x43b40000, *(u32 *)(a0 + 0x21ac));
                } else {
                    in_xd0 = *(double *)(a0 + 0x21ac);
                    dVar10 = 5629500670083072.0;
                }
                if (cVar15 == '\0') {
                    dVar10 = (double)(u64)(u32)(SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20));
                } else {
                    dVar10 = dVar10 - dVar10;
                }
                if (cVar16 == '\0') {
                    *(int *)(a0 + 0x21ac) = SUB84(dVar10, 0);
                } else {
                    *(double *)(a0 + 0x21ac) = in_xd0;
                }
            }
            if (cVar16 == '\0') {
                dVar10 = (double)CONCAT44(0x43b40000, *(u32 *)(a0 + 0x21ac));
            } else {
                in_xd0 = *(double *)(a0 + 0x21ac);
                dVar10 = 5629500670083072.0;
            }
            if (cVar15 == '\0') {
                fVar7 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
            } else {
                fVar7 = SUB84(dVar10 + dVar10, 0);
            }
            if (cVar16 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
                fVar7 = *(float *)(a0 + 0x21ac);
                fVar9 = 180.0;
            } else {
                *(double *)(a0 + 0x21ac) = in_xd0;
                in_xd0 = *(double *)(a0 + 0x21ac);
                fVar7 = 180.0;
                fVar9 = -1.0;
            }
            if (cVar15 == '\0' && fVar9 < fVar7) {
                pdVar3 = (double *)(a0 + 0x21ac);
                if (cVar16 == '\0') {
                    dVar10 = (double)CONCAT44(*(float *)pdVar3, 0x43b40000);
                } else {
                    dVar10 = *pdVar3;
                    in_xd0 = 5629500670083072.0;
                }
                if (cVar15 == '\0') {
                    fVar7 = SUB84(dVar10, 0) - (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar10 - dVar10, 0);
                }
                if (cVar16 == '\0') {
                    dVar10 = (double)CONCAT44(0xbf800000, fVar7);
                } else {
                    dVar10 = 4.6047243762097055e-232;
                }
                if (cVar15 == '\0') {
                    fVar7 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar10 * dVar10, 0);
                }
                if (cVar16 == '\0') {
                    *(float *)(a0 + 0x21ac) = fVar7;
                } else {
                    *(double *)(a0 + 0x21ac) = in_xd0;
                }
            }
        }
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else {
        pdVar3 = a2;
        if (iVar1 != 1) {
            if (iVar1 == 2) {
                *(float *)(a0 + 0x21a8) = *(float *)(a0 + 0x21a8) - 6.0;
                *(float *)(a0 + 0x2194) = *(float *)(a0 + 0x2194) + 6.0;
                fVar8 = *(float *)(a0 + 0x2194);
                if (fVar8 < 90.0) {
                    return 1;
                }
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                *(u32 *)(a0 + 0x2194) = 0;
                fVar13 = -fVar9;
                in_dr0 = (double)CONCAT44(fVar13, fVar8);
                *(float *)(a0 + 0x94) = fVar13;
            } else if (iVar1 != 3) {
                return 1;
            }
            pdVar3 = (double *)a1;
            ar6_00 = a2;
            Vec3_distance_sq(a0 + 0x54, a1, a2, a3);
            fVar8 = (float)((u64)in_dr0 >> 0x20);
            dVar10 = in_dr0;
            if (cVar16 == '\0') {
                uStack_60 = (double)CONCAT44(uStack_60._4_4_, fVar8);
                dVar10 = uStack_60;
            }
            uStack_60 = dVar10;
            if (cVar15 == '\0') {
                bVar14 = fVar8 < fVar7;
            } else {
                bVar14 = in_dr0 < (double)CONCAT44(in_fr14, fVar7);
            }
            if (bVar14)
                goto LAB_8c0a82ca;
            *(u32 *)(a0 + 300) = 0;
            if (cVar16 == '\0') {
                *(u32 *)(a0 + 0x94) = 0;
            } else {
                *(u64 *)(a0 + 0x94) = (u64)in_dr0 & 0xffffffff;
            }
            uVar6 = 0;
            ar6_00 = (double *)0x2;
            pdVar3 = (double *)rand_range(a0, 0, 2);
            if ((pdVar3 != NULL) || (*(int *)(a0 + 0x2198) == 7)) {
                *(u32 *)(a0 + 0x2198) = 6;
                goto LAB_8c0a82ca;
            }
            Vec3_assign(a0 + 0x54, a1, ar6_00, a3);
            if (cVar16 == '\0') {
                *(int *)(a0 + 0x58) = (int)in_dr4;
            } else {
                *(u64 *)(a0 + 0x58) = CONCAT44(fVar9, (int)in_dr4);
            }
            *(u32 *)(a0 + 0x2198) = 0;
            *(u32 *)(a0 + 0x21a4) = 0;
            *(u32 *)(a0 + 0x230) = 0;
            if (cVar16 == '\0') {
                fVar9 = *(float *)((int)a2 + 4);
                fVar8 = 90.0;
            } else {
                in_xd0 = *(double *)((int)a2 + 4);
                fVar9 = 90.0;
                fVar8 = 4.2039e-43;
            }
            if (fVar9 == fVar8) {
                if (cVar16 == '\0') {
                    fVar9 = *(float *)(a0 + 0x21ac);
                    fVar8 = 90.0;
                } else {
                    in_xd0 = *(double *)(a0 + 0x21ac);
                    fVar9 = 90.0;
                    fVar8 = 4.2039e-43;
                }
                if (fVar9 != fVar8)
                    goto LAB_8c0a80fe;
            LAB_8c0a8154:
                if (cVar16 == '\0') {
                    dVar10 = (double)CONCAT44(0x3dcccccd, *(u32 *)(a0 + 0x5c));
                } else {
                    in_xd0 = *(double *)(a0 + 0x5c);
                    dVar10 = 3.73983522256399e-312;
                }
                if (cVar15 == '\0') {
                    fVar9 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar9 = SUB84(dVar10 + dVar10, 0);
                }
                if (cVar16 == '\0') {
                    *(float *)(a0 + 0x5c) = fVar9;
                } else {
                    *(double *)(a0 + 0x5c) = in_xd0;
                }
                Vec3_sub(a0 + 0x54, a1, ar6_00, a3, auStack_2c);
                uVar4 = Vec3_length(auStack_2c, Vec3_length, ar6_00, a3);
                Vec3_assign(a0 + 0x80, uVar4, ar6_00, a3);
                Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, a3);
            } else {
            LAB_8c0a80fe:
                if (cVar16 == '\0') {
                    fVar9 = *(float *)((int)a2 + 4);
                    fVar8 = -90.0;
                } else {
                    in_xd0 = *(double *)((int)a2 + 4);
                    fVar9 = -90.0;
                    fVar8 = 180.0;
                }
                if (fVar9 == fVar8) {
                    if (cVar16 == '\0') {
                        fVar9 = *(float *)(a0 + 0x21ac);
                        fVar8 = -90.0;
                    } else {
                        in_xd0 = *(double *)(a0 + 0x21ac);
                        fVar9 = -90.0;
                        fVar8 = 180.0;
                    }
                    if (fVar9 == fVar8)
                        goto LAB_8c0a8154;
                }
                if (cVar16 == '\0') {
                    fVar9 = *(float *)((int)a2 + 4);
                } else {
                    in_xd0 = *(double *)((int)a2 + 4);
                }
                if (fVar9 == 0.0) {
                    if (cVar16 == '\0') {
                        fVar9 = *(float *)(a0 + 0x21ac);
                    } else {
                        in_xd0 = *(double *)(a0 + 0x21ac);
                    }
                    if (fVar9 == 0.0)
                        goto LAB_8c0a8154;
                }
                if (cVar16 == '\0') {
                    fVar9 = *(float *)((int)a2 + 4);
                    fVar8 = 180.0;
                } else {
                    in_xd0 = *(double *)((int)a2 + 4);
                    fVar9 = 180.0;
                    fVar8 = 0.1;
                }
                if (fVar9 == fVar8) {
                    if (cVar16 == '\0') {
                        fVar9 = *(float *)(a0 + 0x21ac);
                        fVar8 = 180.0;
                    } else {
                        in_xd0 = *(double *)(a0 + 0x21ac);
                        fVar9 = 180.0;
                        fVar8 = 0.1;
                    }
                    if (fVar9 == fVar8)
                        goto LAB_8c0a8154;
                }
                if (cVar16 == '\0') {
                    dVar10 = (double)CONCAT44(0xbdcccccd, *(u32 *)(a0 + 0x5c));
                } else {
                    in_xd0 = *(double *)(a0 + 0x5c);
                    dVar10 = 3.41092587496438e-312;
                }
                if (cVar15 == '\0') {
                    fVar9 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar9 = SUB84(dVar10 + dVar10, 0);
                }
                if (cVar16 == '\0') {
                    *(float *)(a0 + 0x5c) = fVar9;
                } else {
                    *(double *)(a0 + 0x5c) = in_xd0;
                }
                Vec3_sub(a0 + 0x54, a1, ar6_00, a3, auStack_3c);
                uVar4 = Vec3_length(auStack_3c, Vec3_length, ar6_00, a3);
                Vec3_assign(a0 + 0x80, uVar4, ar6_00, a3);
                Vec3_dtor(auStack_3c, 0xffffffff, ar6_00, a3);
            }
            iVar1 = a0 + 0x80;
            Vec3_assign(a0 + 0x14, iVar1, ar6_00, a3);
            Vec3_assign_f_023d7c(a0 + 0x21a8, iVar1);
            Vec3_assign_f_023d7c(a2, iVar1);
            timer_vec_031ab4(a0, a2, ar6_00, a3);
            pdVar3 = a2;
        LAB_8c0a82ca:
            if (499 < *(int *)(a0 + 0x230)) {
                return uVar6;
            }
            if (cVar16 == '\0') {
                fVar9 = *(float *)(a0 + 0x94);
                fVar8 = -3.0;
            } else {
                fVar9 = -3.0;
                fVar8 = 2.2959944e+08;
            }
            if (cVar15 != '\0' || fVar9 <= fVar8) {
                iVar1 = 0;
                while (true) {
                    if (cVar16 == '\0') {
                        uVar11 = CONCAT44(*(u32 *)(a0 + 0x94), (float)iVar1);
                    } else {
                        uVar11 = *(u64 *)(a0 + 0x94);
                    }
                    if (cVar15 == '\0' && (float)uVar11 < (float)((u64)uVar11 >> 0x20))
                        break;
                    Vec3_ctor_xyz(auStack_4c, pdVar3, ar6_00, a3);
                    Vec3_add(a1, auStack_4c, ar6_00, a3, (int)&uStack_60 + 4);
                    Vec3_assign(a0 + *(int *)(a0 + 0x230) * 0x10 + 0x234, (int)&uStack_60 + 4, ar6_00, a3);
                    Vec3_dtor((int)&uStack_60 + 4, 0xffffffff, ar6_00, a3);
                    pdVar3 = (double *)0xffffffff;
                    Vec3_dtor(auStack_4c, 0xffffffff, ar6_00, a3);
                    iVar2 = *(int *)(a0 + 0x230);
                    *(int *)(a0 + 0x230) = iVar2 + 1;
                    if (499 < iVar2 + 1) {
                        *(u32 *)(a0 + 0x230) = 500;
                    }
                    if (cVar15 == '\0') {
                        bVar14 = (float)*(int *)(a0 + 0x230) < fVar7;
                    } else {
                        bVar14 = (double)*(int *)(a0 + 0x230) < (double)CONCAT44(in_fr14, fVar7);
                    }
                    if (!bVar14) {
                        if (cVar15 == '\0') {
                            iVar2 = (int)fVar7;
                        } else {
                            iVar2 = (int)(double)CONCAT44(in_fr14, fVar7);
                        }
                        *(int *)(a0 + 0x230) = iVar2;
                    }
                    iVar1 = iVar1 + -2;
                }
                return uVar6;
            }
            Vec3_assign(a0 + *(int *)(a0 + 0x230) * 0x10 + 0x234, a1, ar6_00, a3);
            iVar1 = *(int *)(a0 + 0x230);
            *(int *)(a0 + 0x230) = iVar1 + 1;
            if (499 < iVar1 + 1) {
                *(u32 *)(a0 + 0x230) = 500;
            }
            if (cVar15 == '\0') {
                bVar14 = (float)*(int *)(a0 + 0x230) < fVar7;
            } else {
                bVar14 = (double)*(int *)(a0 + 0x230) < (double)CONCAT44(in_fr14, fVar7);
            }
            if (bVar14) {
                return uVar6;
            }
            if (cVar15 == '\0') {
                iVar1 = (int)fVar7;
            } else {
                iVar1 = (int)(double)CONCAT44(in_fr14, fVar7);
            }
            *(int *)(a0 + 0x230) = iVar1;
            return uVar6;
        }
    }
    if (cVar16 == '\0') {
        fVar7 = *(float *)((int)a2 + 4);
        fVar9 = 90.0;
    } else {
        in_xd0 = *(double *)((int)a2 + 4);
        fVar7 = 90.0;
        fVar9 = -90.0;
    }
    if (fVar7 != fVar9) {
        if (cVar16 == '\0') {
            fVar7 = *(float *)((int)a2 + 4);
            fVar9 = -90.0;
        } else {
            in_xd0 = *(double *)((int)a2 + 4);
            fVar7 = -90.0;
            fVar9 = -1.0;
        }
        if (fVar7 != fVar9) {
            if (cVar16 == '\0') {
                fVar7 = *(float *)(a0 + 0x21ac);
            } else {
                in_xd0 = *(double *)(a0 + 0x21ac);
            }
            if (cVar15 != '\0' || 0.0 <= fVar7) {
                if (cVar16 == '\0') {
                    fVar7 = *(float *)(a0 + 0x21ac);
                    fVar9 = 90.0;
                } else {
                    in_xd0 = *(double *)(a0 + 0x21ac);
                    fVar7 = 90.0;
                    fVar9 = 180.0;
                }
                if (cVar15 == '\0' && fVar7 < fVar9) {
                    if (cVar16 == '\0') {
                        fVar7 = *(float *)(a0 + 0x21ac);
                    } else {
                        in_xd0 = *(double *)(a0 + 0x21ac);
                    }
                    if (cVar15 == '\0') {
                        fVar7 = fVar7 - 1.0;
                    } else {
                        fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7), 0);
                    }
                    if (cVar16 == '\0') {
                        *(float *)(a0 + 0x21ac) = fVar7;
                        fVar7 = *(float *)(a0 + 0x21ac);
                    } else {
                        *(double *)(a0 + 0x21ac) = in_xd0;
                    }
                    if (cVar15 != '\0' || fVar7 <= 0.0) {
                        if (cVar16 == '\0') {
                            fVar7 = *(float *)((int)a2 + 4);
                        }
                        if (fVar7 == 0.0) {
                            Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                        } else {
                            Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                        }
                        if (cVar16 == '\0') {
                            *(u32 *)(a0 + 0x21ac) = 0;
                        } else {
                            *(u64 *)(a0 + 0x21ac) = (u64)(u32)fVar7;
                        }
                    }
                } else {
                    if (cVar16 == '\0') {
                        fVar7 = *(float *)(a0 + 0x21ac);
                    } else {
                        in_xd0 = *(double *)(a0 + 0x21ac);
                    }
                    if (cVar15 == '\0') {
                        fVar7 = fVar7 + 1.0;
                    } else {
                        fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
                    }
                    if (cVar16 == '\0') {
                        *(float *)(a0 + 0x21ac) = fVar7;
                        fVar7 = *(float *)(a0 + 0x21ac);
                        pcVar12 = (code *)0x43340000;
                    } else {
                        *(double *)(a0 + 0x21ac) = in_xd0;
                        fVar7 = 180.0;
                        pcVar12 = Vec3_assign_f;
                    }
                    if (cVar15 != '\0' || (float)pcVar12 <= fVar7) {
                        if (cVar16 == '\0') {
                            fVar7 = *(float *)((int)a2 + 4);
                        }
                        if (fVar7 == 0.0) {
                            Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                        } else {
                            Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                        }
                        if (cVar16 == '\0') {
                            *(u32 *)(a0 + 0x21ac) = 0x43340000;
                        } else {
                            *(u64 *)(a0 + 0x21ac) = 0xfe6e04443340000;
                        }
                    }
                }
            } else {
                if (cVar16 == '\0') {
                    fVar7 = *(float *)(a0 + 0x21ac);
                    fVar9 = -90.0;
                } else {
                    in_xd0 = *(double *)(a0 + 0x21ac);
                    fVar7 = -90.0;
                    fVar9 = -180.0;
                }
                if (cVar15 == '\0' && fVar9 < fVar7) {
                    if (cVar16 == '\0') {
                        fVar7 = *(float *)(a0 + 0x21ac);
                    } else {
                        in_xd0 = *(double *)(a0 + 0x21ac);
                    }
                    if (cVar15 == '\0') {
                        fVar7 = fVar7 + 1.0;
                    } else {
                        fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
                    }
                    if (cVar16 == '\0') {
                        *(float *)(a0 + 0x21ac) = fVar7;
                        fVar7 = *(float *)(a0 + 0x21ac);
                    } else {
                        *(double *)(a0 + 0x21ac) = in_xd0;
                    }
                    if (cVar15 != '\0' || 0.0 <= fVar7) {
                        if (cVar16 == '\0') {
                            fVar7 = *(float *)((int)a2 + 4);
                        }
                        if (fVar7 == 0.0) {
                            Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                        } else {
                            Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                        }
                        if (cVar16 == '\0') {
                            *(u32 *)(a0 + 0x21ac) = 0;
                        } else {
                            *(u64 *)(a0 + 0x21ac) = (u64)(u32)fVar7;
                        }
                    }
                } else {
                    if (cVar16 == '\0') {
                        fVar7 = *(float *)(a0 + 0x21ac);
                    } else {
                        in_xd0 = *(double *)(a0 + 0x21ac);
                    }
                    if (cVar15 == '\0') {
                        fVar7 = fVar7 - 1.0;
                    } else {
                        fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7), 0);
                    }
                    if (cVar16 == '\0') {
                        *(float *)(a0 + 0x21ac) = fVar7;
                        fVar7 = *(float *)(a0 + 0x21ac);
                        pcVar12 = (code *)0xc3340000;
                    } else {
                        *(double *)(a0 + 0x21ac) = in_xd0;
                        fVar7 = -180.0;
                        pcVar12 = Vec3_assign_f;
                    }
                    if (cVar15 != '\0' || fVar7 <= (float)pcVar12) {
                        if (cVar16 == '\0') {
                            fVar7 = *(float *)((int)a2 + 4);
                        }
                        if (fVar7 == 0.0) {
                            Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                        } else {
                            Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                        }
                        if (cVar16 == '\0') {
                            *(u32 *)(a0 + 0x21ac) = 0x43340000;
                        } else {
                            *(u64 *)(a0 + 0x21ac) = 0x53ff1fef43340000;
                        }
                    }
                }
            }
            goto LAB_8c0a7e8a;
        }
    }
    if (cVar16 == '\0') {
        fVar7 = *(float *)(a0 + 0x21ac);
    } else {
        in_xd0 = *(double *)(a0 + 0x21ac);
    }
    if (cVar15 == '\0' && 0.0 < fVar7) {
        if (cVar16 == '\0') {
            fVar7 = *(float *)(a0 + 0x21ac);
            fVar9 = 90.0;
        } else {
            in_xd0 = *(double *)(a0 + 0x21ac);
            fVar7 = 90.0;
            fVar9 = -90.0;
        }
        if (cVar15 != '\0' || fVar9 <= fVar7) {
            a1 = (code *)(a0 + 0x21ac);
            if (cVar16 == '\0') {
                fVar7 = *(float *)a1;
            } else {
                in_xd0 = *(double *)a1;
            }
            if (cVar15 == '\0') {
                fVar7 = fVar7 - 1.0;
            } else {
                fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7), 0);
            }
            if (cVar16 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
                fVar7 = *(float *)(a0 + 0x21ac);
                fVar9 = 90.0;
            } else {
                *(double *)(a0 + 0x21ac) = in_xd0;
                in_xd0 = *(double *)(a0 + 0x21ac);
                fVar7 = 90.0;
                fVar9 = -90.0;
            }
            if (cVar15 != '\0' || fVar7 <= fVar9) {
                a1 = (code *)(a0 + 0x21ac);
                if (cVar16 == '\0') {
                    *(float *)a1 = 90.0;
                    fVar7 = *(float *)((int)a2 + 4);
                    fVar9 = 90.0;
                } else {
                    *(double *)a1 = -21990236926976.0;
                    in_xd0 = *(double *)((int)a2 + 4);
                    fVar7 = 90.0;
                    fVar9 = -90.0;
                }
                if (fVar7 == fVar9) {
                    Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                } else {
                    Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                }
            }
        }
        if (cVar16 == '\0') {
            fVar7 = *(float *)(a0 + 0x21ac);
            fVar9 = 90.0;
        } else {
            in_xd0 = *(double *)(a0 + 0x21ac);
            fVar7 = 90.0;
            fVar9 = -1.0;
        }
        if (cVar15 == '\0' && fVar7 < fVar9) {
            a1 = (code *)(a0 + 0x21ac);
            if (cVar16 == '\0') {
                fVar7 = *(float *)a1;
            } else {
                in_xd0 = *(double *)a1;
            }
            if (cVar15 == '\0') {
                fVar7 = fVar7 + 1.0;
            } else {
                fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
            }
            if (cVar16 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
                fVar7 = *(float *)(a0 + 0x21ac);
                fVar9 = 90.0;
            } else {
                *(double *)(a0 + 0x21ac) = in_xd0;
                fVar7 = 90.0;
                fVar9 = -1.0;
            }
            if (cVar15 != '\0' || fVar9 <= fVar7) {
                a1 = (code *)(a0 + 0x21ac);
                if (cVar16 == '\0') {
                    *(float *)a1 = 90.0;
                    fVar7 = *(float *)((int)a2 + 4);
                    fVar9 = 90.0;
                } else {
                    *(double *)a1 = -0.007812501941316441;
                    fVar7 = 90.0;
                    fVar9 = -1.0;
                }
                if (fVar7 == fVar9) {
                    Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                } else {
                    Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                }
            }
        }
    } else {
        if (cVar16 == '\0') {
            fVar7 = *(float *)(a0 + 0x21ac);
            fVar9 = -90.0;
        } else {
            in_xd0 = *(double *)(a0 + 0x21ac);
            fVar7 = -90.0;
            fVar9 = 90.0;
        }
        if (cVar15 == '\0' && fVar7 < fVar9) {
            if (cVar16 == '\0') {
                fVar7 = *(float *)(a0 + 0x21ac);
            } else {
                in_xd0 = *(double *)(a0 + 0x21ac);
            }
            if (cVar15 == '\0') {
                fVar7 = fVar7 + 1.0;
            } else {
                fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
            }
            if (cVar16 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
                fVar7 = *(float *)(a0 + 0x21ac);
                fVar9 = -90.0;
            } else {
                *(double *)(a0 + 0x21ac) = in_xd0;
                in_xd0 = *(double *)(a0 + 0x21ac);
                fVar7 = -90.0;
                fVar9 = 90.0;
            }
            if (cVar15 != '\0' || fVar9 <= fVar7) {
                if (cVar16 == '\0') {
                    *(u32 *)(a0 + 0x21ac) = 0xc2b40000;
                    fVar7 = *(float *)((int)a2 + 4);
                    pcVar12 = (code *)0x42b40000;
                } else {
                    *(u64 *)(a0 + 0x21ac) = 0x42b40000c2b40000;
                    in_xd0 = *(double *)((int)a2 + 4);
                    fVar7 = 90.0;
                    pcVar12 = Vec3_assign_f;
                }
                if (fVar7 == (float)pcVar12) {
                    Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                } else {
                    Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                }
            }
        }
        a1 = (code *)0x21ac;
        if (cVar16 == '\0') {
            fVar7 = *(float *)(a0 + 0x21ac);
            fVar9 = -90.0;
        } else {
            in_xd0 = *(double *)(a0 + 0x21ac);
            fVar7 = -90.0;
            fVar9 = 90.0;
        }
        if (cVar15 == '\0' && fVar9 < fVar7) {
            if (cVar16 == '\0') {
                fVar7 = *(float *)(a0 + 0x21ac);
            } else {
                in_xd0 = *(double *)(a0 + 0x21ac);
            }
            if (cVar15 == '\0') {
                fVar7 = fVar7 - 1.0;
            } else {
                fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7), 0);
            }
            if (cVar16 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
                fVar7 = *(float *)(a0 + 0x21ac);
                fVar9 = -90.0;
            } else {
                *(double *)(a0 + 0x21ac) = in_xd0;
                fVar7 = -90.0;
                fVar9 = 90.0;
            }
            if (cVar15 != '\0' || fVar7 <= fVar9) {
                a1 = (code *)(a0 + 0x21ac);
                if (cVar16 == '\0') {
                    *(float *)a1 = -90.0;
                    fVar7 = *(float *)((int)a2 + 4);
                    fVar9 = 90.0;
                } else {
                    *(double *)a1 = 21990245315584.0;
                    fVar7 = 90.0;
                    fVar9 = -6.935439e+32;
                }
                if (fVar7 == fVar9) {
                    a1 = Vec3_assign_f;
                    Vec3_assign_f(a0 + 0x14, Vec3_assign_f, pdVar3, a3);
                } else {
                    Vec3_assign_f(a0 + 0x14, a1, pdVar3, a3);
                }
            }
        }
    }
LAB_8c0a7e8a:
    CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, a1, pdVar3, a3);
    if (cVar16 == '\0') {
        fVar7 = *(float *)((int)a2 + 4);
        fVar9 = 90.0;
    } else {
        fVar7 = 90.0;
        fVar9 = -90.0;
    }
    if (fVar7 != fVar9) {
        if (cVar16 == '\0') {
            fVar7 = *(float *)((int)a2 + 4);
            fVar9 = -90.0;
        } else {
            fVar7 = -90.0;
            fVar9 = 4.2039e-43;
        }
        if (fVar7 != fVar9) {
            if (cVar16 == '\0') {
                fVar7 = *(float *)(a0 + 0x21ac);
            }
            if (fVar7 != 0.0) {
                if (cVar16 == '\0') {
                    fVar7 = *(float *)(a0 + 0x21ac);
                    fVar9 = 180.0;
                } else {
                    fVar7 = 180.0;
                    fVar9 = 4.2039e-43;
                }
                if (fVar7 != fVar9) {
                    return 1;
                }
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            uVar5 = 0;
            uVar4 = 0xffffffff;
            uVar6 = 2;
            CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
            CAnimBody_SetFrame(a0 + 0xb0, uVar6, uVar4, uVar5);
            if (cVar16 == '\0') {
                *(u32 *)(a0 + 0x94) = 0xc0000000;
                return 1;
            }
            *(u64 *)(a0 + 0x94) = 0x55fc1fecc0000000;
            return 1;
        }
    }
    if (cVar16 == '\0') {
        fVar7 = *(float *)(a0 + 0x21ac);
        fVar9 = 90.0;
    } else {
        fVar7 = 90.0;
        fVar9 = -90.0;
    }
    if (fVar7 != fVar9) {
        if (cVar16 == '\0') {
            fVar7 = *(float *)(a0 + 0x21ac);
            fVar9 = -90.0;
        } else {
            fVar7 = -90.0;
            fVar9 = 4.2039e-43;
        }
        if (fVar7 != fVar9) {
            return 1;
        }
    }
    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    uVar5 = 0;
    uVar4 = 0xffffffff;
    uVar6 = 2;
    CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
    CAnimBody_SetFrame(a0 + 0xb0, uVar6, uVar4, uVar5);
    if (cVar16 == '\0') {
        *(u32 *)(a0 + 0x94) = 0xc0000000;
    } else {
        *(u64 *)(a0 + 0x94) = 0x60e3d11ac0000000;
    }
    return 1;
}

/*
 * game_vec_0a8464  0x8c0a8464
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_state_switch_0a6974
 */
u32 game_vec_0a8464(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    u64 uVar3;
    u64 uVar4;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    iVar1 = *(int *)(a0 + 300);
    iVar2 = a2;
    if (iVar1 == 0) {
        *(u32 *)(a0 + 0x94) = 0x40400000;
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        Vec3_assign(a0 + 0x54, a1, a2, a3);
        if (cVar6 == '\0') {
            *(u32 *)(a0 + 0x58) = *(u32 *)(a2 + 4);
        } else {
            *(u64 *)(a0 + 0x58) = *(u64 *)(a2 + 4);
        }
    } else if (iVar1 != 1) {
        if (iVar1 == 2) {
            *(u32 *)(a0 + 0x94) = 0x40000000;
            *(float *)(a0 + 0x21a8) = *(float *)(a0 + 0x21a8) + 6.0;
            *(float *)(a0 + 0x2194) = *(float *)(a0 + 0x2194) + 6.0;
            if (*(float *)(a0 + 0x2194) < 90.0) {
                return 1;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            *(u32 *)(a0 + 0x2194) = 0;
            return 1;
        }
        if (iVar1 != 3) {
            return 1;
        }
        if (*(float *)(a1 + 4) < *(float *)(a2 + 4)) {
            return 1;
        }
        *(u32 *)(a0 + 300) = 0;
        *(u32 *)(a0 + 0x94) = 0;
        *(u32 *)(a0 + 0x2198) = 5;
        return 0;
    }
    while (true) {
        if (cVar6 == '\0') {
            uVar3 = CONCAT44(*(u32 *)(a1 + 4), *(u32 *)(a0 + *(int *)(a0 + 0x230) * 0x10 + 0x238));
        } else {
            uVar3 = *(u64 *)(a1 + 4);
        }
        if (cVar5 == '\0' && (float)((u64)uVar3 >> 0x20) < (float)uVar3)
            break;
        *(int *)(a0 + 0x230) = *(int *)(a0 + 0x230) + -1;
    }
    if (*(int *)(a0 + 0x230) < 1) {
        Vec3_distance_sq(a1, a0 + 0x54, iVar2, a3);
        if (cVar6 == '\0') {
            uVar4 = CONCAT44(0x42b40000, (int)((u64)uVar3 >> 0x20));
        } else {
            uVar4 = 0x219442b40000;
        }
        if (cVar5 != '\0' || (float)uVar4 <= (float)(uVar4 >> 0x20)) {
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            *(u32 *)(a0 + 0x230) = 0;
            if (cVar6 == '\0') {
                *(u32 *)(a0 + 0x2194) = 0;
            } else {
                *(u64 *)(a0 + 0x2194) = uVar4 & 0xffffffff;
            }
        }
    }
    return 1;
}

/*
 * game_vec_0a861c  0x8c0a861c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b088_vec_0aa70c, game_state_switch_0a6974
 */
u32 game_vec_0a861c(int a0, u64 *a1, u64 *a2, u32 a3) {
    u64 uVar1;
    int iVar2;
    u8 *ar5_00;
    u32 uVar3;
    u32 *ar5_01;
    u64 *ar6_00;
    u32 uVar4;
    float fVar5;
    u64 in_dr0;
    double dVar6;
    u32 uVar8;
    u64 uVar7;
    u64 in_xd0;
    char cVar9;
    char cVar10;
    u32 uStack_dc;
    u32 uStack_d8;
    u32 uStack_d4;
    u32 uStack_d0;
    u32 uStack_cc;
    u32 uStack_c8;
    u32 uStack_c4;
    int iStack_c0;
    u32 uStack_bc;
    u32 uStack_b8;
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[16];
    u8 auStack_74[16];
    u64 auStack_64[2];
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[16];
    u64 uStack_24;
    u64 uStack_1c;

    cVar10 = '\0';
    cVar9 = '\0';
    uVar4 = 1;
    ar6_00 = a2;
    Vec3_ctor_zero(&uStack_24, a1, a2);
    uStack_b8 = 1;
    iVar2 = *(int *)(a0 + 300);
    if ((iVar2 < 5) && (-1 < iVar2)) {
        uVar3 = (u32)in_dr0;
        switch (iVar2) {
        case 0:
            ar6_00 = (u64 *)0x2;
            iVar2 = rand_range(a0, 0, 2);
            if (iVar2 == 0) {
                Vec3_assign(&uStack_24, a1, ar6_00, a3);
                if (cVar10 == '\0') {
                } else {
                    uStack_24._4_4_ = 0x219c;
                }
                uStack_24._0_4_ = 0x42c80000;
                Vec3_assign(a0 + 0x54, &uStack_24, ar6_00, a3);
                Vec3_assign(&uStack_24, a1, ar6_00, a3);
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44(0x42c80000, (int)*a2);
                } else {
                    in_xd0 = *a2;
                    dVar6 = 1.82582053383223e-310;
                }
                if (cVar9 == '\0') {
                    fVar5 = (float)((u64)dVar6 >> 0x20);
                    dVar6 = (double)CONCAT44(fVar5, SUB84(dVar6, 0) - fVar5);
                } else {
                    dVar6 = dVar6 - dVar6;
                }
                uVar1 = in_xd0;
                if (cVar10 == '\0') {
                    uStack_24 = CONCAT44(uStack_24._4_4_, SUB84(dVar6, 0));
                    uVar1 = uStack_24;
                }
                uStack_24 = uVar1;
                *(u32 *)(a0 + 0x219c) = 4;
                Vec3_distance_sq(a1, a0 + 0x54, ar6_00, a3);
                uStack_d0 = (u32)((u64)dVar6 >> 0x20);
                if (cVar10 == '\0') {
                    uStack_d4 = uStack_d0;
                    uStack_d0 = 0;
                } else {
                    uStack_d4 = SUB84(dVar6, 0);
                }
                Vec3_distance_sq(a1, &uStack_24, ar6_00, a3);
                uVar3 = (u32)((u64)dVar6 >> 0x20);
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44(uVar3, uStack_d4);
                } else {
                    in_xd0 = CONCAT44(uStack_d0, uVar3);
                }
                if (cVar9 != '\0' || SUB84(dVar6, 0) <= (float)((u64)dVar6 >> 0x20)) {
                    Vec3_assign(a0 + 0x54, &uStack_24, ar6_00, a3);
                    *(u32 *)(a0 + 0x219c) = 3;
                }
            } else {
                Vec3_assign(&uStack_24, a1, ar6_00, a3);
                if (cVar10 == '\0') {
                } else {
                    uStack_1c._4_4_ = 0xf0;
                }
                uStack_1c._0_4_ = 0x42c80000;
                Vec3_assign(a0 + 0x54, &uStack_24, ar6_00, a3);
                Vec3_assign(&uStack_24, a1, ar6_00, a3);
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44(0x42c80000, (int)a2[1]);
                } else {
                    in_xd0 = a2[1];
                    dVar6 = 5.09832542688757e-312;
                }
                if (cVar9 == '\0') {
                    fVar5 = (float)((u64)dVar6 >> 0x20);
                    dVar6 = (double)CONCAT44(fVar5, SUB84(dVar6, 0) - fVar5);
                } else {
                    dVar6 = dVar6 - dVar6;
                }
                uVar1 = in_xd0;
                if (cVar10 == '\0') {
                    uStack_1c = CONCAT44(uStack_1c._4_4_, SUB84(dVar6, 0));
                    uVar1 = uStack_1c;
                }
                uStack_1c = uVar1;
                *(u32 *)(a0 + 0x219c) = 2;
                Vec3_distance_sq(a1, a0 + 0x54, ar6_00, a3);
                uVar3 = (u32)((u64)dVar6 >> 0x20);
                uStack_dc = uVar3;
                if (cVar10 != '\0') {
                    uStack_dc = SUB84(dVar6, 0);
                    uStack_d8 = uVar3;
                }
                Vec3_distance_sq(a1, &uStack_24, ar6_00, a3);
                uVar3 = (u32)((u64)dVar6 >> 0x20);
                if (cVar10 == '\0') {
                    dVar6 = (double)CONCAT44(uVar3, uStack_dc);
                } else {
                    in_xd0 = CONCAT44(uStack_d8, uVar3);
                }
                if (cVar9 != '\0' || SUB84(dVar6, 0) <= (float)((u64)dVar6 >> 0x20)) {
                    Vec3_assign(a0 + 0x54, &uStack_24, ar6_00, a3);
                    *(u32 *)(a0 + 0x219c) = 1;
                }
            }
            fVar5 = SUB84(dVar6, 0);
            Vec3_sub(a0 + 0x54, a1, ar6_00, a3, auStack_34);
            ar5_00 = &g_8c13b298;
            Vec3_scale(a0 + 0x14, &g_8c13b298, ar6_00, a3, auStack_44);
            uVar3 = Vec3_length(auStack_34, ar5_00, ar6_00, a3);
            iStack_c0 = Vec3_equal(uVar3, auStack_44);
            Vec3_dtor(auStack_44, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
            if (iStack_c0 != 0) {
                if (cVar10 == '\0') {
                    fVar5 = *(float *)(a0 + 0x54);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x54);
                }
                if (cVar9 == '\0') {
                    fVar5 = fVar5 + 1.0;
                } else {
                    fVar5 = SUB84((double)CONCAT44(0x3f800000, fVar5) + (double)CONCAT44(0x3f800000, fVar5), 0);
                }
                if (cVar10 == '\0') {
                    *(float *)(a0 + 0x54) = fVar5;
                    fVar5 = *(float *)(a0 + 0x5c);
                } else {
                    *(u64 *)(a0 + 0x54) = in_xd0;
                    in_xd0 = *(u64 *)(a0 + 0x5c);
                }
                if (cVar9 == '\0') {
                    fVar5 = fVar5 + 1.0;
                } else {
                    fVar5 = SUB84((double)CONCAT44(0x3f800000, fVar5) + (double)CONCAT44(0x3f800000, fVar5), 0);
                }
                if (cVar10 == '\0') {
                    *(float *)(a0 + 0x5c) = fVar5;
                } else {
                    *(u64 *)(a0 + 0x5c) = in_xd0;
                }
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 1:
            Vec3_ctor_copy(auStack_54, a1, ar6_00, a3);
            Vec3_ctor_copy(auStack_64, a0 + 0x54, ar6_00, a3);
            ar6_00 = auStack_64;
            iVar2 = game_state_switch_0a72b4(a0, auStack_54, ar6_00, a3);
            uStack_c4 = (u32)(iVar2 == 0);
            Vec3_dtor(auStack_64, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_54, 0xffffffff, ar6_00, a3);
            if (uStack_c4 != 0) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            Vec3_assign(a0 + 0x80, a0 + 0x14, ar6_00, a3);
            break;
        case 2:
            iVar2 = *(int *)(a0 + 0x219c);
            if (iVar2 == 1) {
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x54) = *(u32 *)a1;
                    *(u32 *)(a0 + 0x58) = 0x43480000;
                    in_dr0 = CONCAT44((int)a2[1], uVar3);
                    *(int *)(a0 + 0x5c) = (int)a2[1];
                } else {
                    *(u64 *)(a0 + 0x54) = *a1;
                    *(u64 *)(a0 + 0x58) = 0x9843480000;
                    in_dr0 = a2[1];
                    *(u64 *)(a0 + 0x5c) = in_dr0;
                }
            } else if (iVar2 == 2) {
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x54) = *(u32 *)a1;
                    in_dr0 = CONCAT44(0x43480000, uVar3);
                    *(u32 *)(a0 + 0x58) = 0x43480000;
                } else {
                    *(u64 *)(a0 + 0x54) = *a1;
                    in_dr0 = 0x705460e343480000;
                    *(u64 *)(a0 + 0x58) = 0x705460e343480000;
                }
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x5c) = 0;
                } else {
                    *(u64 *)(a0 + 0x5c) = in_dr0;
                }
            } else if (iVar2 == 3) {
                if (cVar10 == '\0') {
                    *(int *)(a0 + 0x54) = (int)*a2;
                    *(u32 *)(a0 + 0x58) = 0x43480000;
                    in_dr0 = CONCAT44(*(u32 *)(a1 + 1), uVar3);
                    *(u32 *)(a0 + 0x5c) = *(u32 *)(a1 + 1);
                } else {
                    *(u64 *)(a0 + 0x54) = *a2;
                    *(u64 *)(a0 + 0x58) = 0x705460e343480000;
                    in_dr0 = a1[1];
                    *(u64 *)(a0 + 0x5c) = in_dr0;
                }
            } else if (iVar2 == 4) {
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x54) = 0;
                    *(u32 *)(a0 + 0x58) = 0x43480000;
                    in_dr0 = CONCAT44(*(u32 *)(a1 + 1), uVar3);
                    *(u32 *)(a0 + 0x5c) = *(u32 *)(a1 + 1);
                } else {
                    *(u64 *)(a0 + 0x54) = in_dr0 & 0xffffffff;
                    *(u64 *)(a0 + 0x58) = 0x705460e343480000;
                    in_dr0 = a1[1];
                    *(u64 *)(a0 + 0x5c) = in_dr0;
                }
            }
            Vec3_sub(a0 + 0x54, a1, ar6_00, a3, auStack_74);
            Vec3_assign(a0 + 0x14, auStack_74, ar6_00, a3);
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_74, 0xffffffff, ar6_00, a3);
            Vec3_length(a0 + 0x14, uVar3, ar6_00, a3);
            Vec3_distance_sq(a1, a0 + 0x54, ar6_00, a3);
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x40a00000, (int)(in_dr0 >> 0x20));
            } else {
                dVar6 = 2.72151140845083e-312;
                in_xd0 = in_dr0;
            }
            if (cVar9 == '\0') {
                fVar5 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 / dVar6, 0);
            }
            if (cVar10 == '\0') {
                *(float *)(a0 + 0x28) = fVar5;
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
            Vec3_assign(a0 + 0x2174, a0 + 0x80, ar6_00, a3);
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 3:
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(a0 + 0x2194));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x2194);
                dVar6 = 0.007811875057814177;
            }
            if (cVar9 == '\0') {
                fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 + dVar6, 0);
            }
            if (cVar10 == '\0') {
                *(float *)(a0 + 0x2194) = fVar5;
                fVar5 = *(float *)(a0 + 0x2194);
            } else {
                *(u64 *)(a0 + 0x2194) = in_xd0;
            }
            if (cVar9 != '\0' || 1.0 <= fVar5) {
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x2194) = 0x3f7fff58;
                } else {
                    fVar5 = 0.99999;
                    *(u64 *)(a0 + 0x2194) = 0x883f7fff58;
                }
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            if (cVar10 == '\0') {
                fVar5 = *(float *)(a0 + 0x2194);
            }
            if (cVar9 == '\0') {
                dVar6 = (double)CONCAT44(1.0 - fVar5, fVar5);
            } else {
                dVar6 = (double)CONCAT44(0x3f800000, fVar5) - (double)CONCAT44(0x3f800000, fVar5);
            }
            uVar8 = (u32)((u64)dVar6 >> 0x20);
            uStack_c8 = uVar8;
            if (cVar10 != '\0') {
                uStack_c8 = SUB84(dVar6, 0);
                uStack_c4 = uVar8;
            }
            ar5_01 = &uStack_c8;
            Vec3_scale(a0 + 0x2174, ar5_01, ar6_00, a3, auStack_84);
            Vec3_ctor_xyz(auStack_94, ar5_01, ar6_00, a3);
            if (cVar10 == '\0') {
                uStack_cc = *(u32 *)(a0 + 0x2194);
            } else {
                uVar7 = *(u64 *)(a0 + 0x2194);
                uStack_cc = (u32)uVar7;
                uStack_c8 = (u32)((u64)uVar7 >> 0x20);
            }
            Vec3_scale(auStack_94, &uStack_cc, ar6_00, a3, auStack_a4);
            Vec3_add(auStack_84, auStack_a4, ar6_00, a3, auStack_b4);
            Vec3_assign(a0 + 0x80, auStack_b4, ar6_00, a3);
            Vec3_dtor(auStack_b4, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_a4, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_94, 0xffffffff, ar6_00, a3);
            Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
            break;
        case 4:
            in_dr0 = in_dr0 & 0xffffffff;
            if (cVar10 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = in_dr0;
            }
            Vec3_assign(a0 + 0x14, a0 + 0x80, ar6_00, a3);
            uVar4 = 0;
            *(u32 *)(a0 + 300) = 0;
            if (cVar10 == '\0') {
                *(u32 *)(a0 + 0x2194) = 0;
            } else {
                *(u64 *)(a0 + 0x2194) = in_dr0 & 0xffffffff;
            }
            *(u32 *)(a0 + 0x2198) = *(u32 *)(a0 + 0x219c);
        }
    }
    uStack_bc = uVar4;
    Vec3_dtor(&uStack_24, 0xffffffff, ar6_00, a3);
    return uStack_bc;
}

/*
 * game_vec_0a8c0c  0x8c0a8c0c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b088_vec_0aa70c, game_state_switch_0a6974
 */
u32 game_vec_0a8c0c(int a0, u32 a1, u64 *a2, float *a3) {
    u32 uVar1;
    int iVar2;
    int ar6_00;
    u64 *puVar3;
    u8 *ar7_00;
    float *pfVar4;
    u32 uVar5;
    float fVar6;
    u64 in_dr0;
    double dVar7;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    u8 auStack_34[16];
    u8 auStack_24[16];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar5 = 1;
    iVar2 = *(int *)(a0 + 300);
    if ((iVar2 < 5) && (-1 < iVar2)) {
        puVar3 = a2;
        switch (iVar2) {
        case 0:
            *(u32 *)(a0 + 0x230) = 0;
            Vec3_assign(a0 + 0x54, a1, a2, a3);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(0x42480000, *(u32 *)((int)a2 + 4));
            } else {
                in_xd0 = *(u64 *)((int)a2 + 4);
                dVar7 = 6.37148145623644e-312;
            }
            if (cVar8 == '\0') {
                fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 - dVar7, 0);
            }
            if (cVar9 == '\0') {
                *(float *)(a0 + 0x58) = fVar6;
            } else {
                *(u64 *)(a0 + 0x58) = in_xd0;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 1:
            Vec3_copy_assign(auStack_24, a2);
            ar7_00 = auStack_24;
            ar6_00 = a0 + 0x54;
            iVar2 = game_vec_0a8f94(a0, a1, ar6_00, ar7_00);
            free_if_nonnull_wrap_102790(auStack_24, 0xffffffff, ar6_00, ar7_00);
            if (iVar2 == 0) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            break;
        case 2:
            iVar2 = *(int *)(a0 + 0x2198);
            pfVar4 = a3;
            if (iVar2 == 1) {
                Vec3_assign(a0 + 0x54, a1, a2, a3);
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x42480000, *(u32 *)(a2 + 1));
                } else {
                    in_xd0 = a2[1];
                    dVar7 = -7.956827045177258e-251;
                }
                if (cVar8 == '\0') {
                    fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar7 - dVar7, 0);
                }
                if (cVar9 == '\0') {
                    *(float *)(a0 + 0x5c) = fVar6;
                    in_dr0 = CONCAT44(*(u32 *)((int)a2 + 4), fVar6);
                    *(u32 *)(a0 + 0x58) = *(u32 *)((int)a2 + 4);
                    a2 = puVar3;
                } else {
                    *(u64 *)(a0 + 0x5c) = in_xd0;
                    in_dr0 = *(u64 *)((int)a2 + 4);
                    *(u64 *)(a0 + 0x58) = in_dr0;
                    a2 = puVar3;
                }
            } else if (iVar2 == 2) {
                Vec3_assign(a0 + 0x54, a1, a2, a3);
                if (cVar9 == '\0') {
                    *(u32 *)(a0 + 0x5c) = 0x42480000;
                    in_dr0 = CONCAT44(*(u32 *)((int)a2 + 4), (int)in_dr0);
                    *(u32 *)(a0 + 0x58) = *(u32 *)((int)a2 + 4);
                    a2 = puVar3;
                } else {
                    *(u64 *)(a0 + 0x5c) = 0x64e365c342480000;
                    in_dr0 = *(u64 *)((int)a2 + 4);
                    *(u64 *)(a0 + 0x58) = in_dr0;
                    a2 = puVar3;
                }
            } else if (iVar2 == 3) {
                Vec3_assign(a0 + 0x54, a1, a2, a3);
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x42480000, *(u32 *)a2);
                } else {
                    in_xd0 = *a2;
                    dVar7 = 9.825472717289265e+177;
                }
                if (cVar8 == '\0') {
                    fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar7 - dVar7, 0);
                }
                if (cVar9 == '\0') {
                    *(float *)(a0 + 0x54) = fVar6;
                    in_dr0 = CONCAT44(*(u32 *)((int)a2 + 4), fVar6);
                    *(u32 *)(a0 + 0x58) = *(u32 *)((int)a2 + 4);
                    a2 = puVar3;
                } else {
                    *(u64 *)(a0 + 0x54) = in_xd0;
                    in_dr0 = *(u64 *)((int)a2 + 4);
                    *(u64 *)(a0 + 0x58) = in_dr0;
                    a2 = puVar3;
                }
            } else if (iVar2 == 4) {
                Vec3_assign(a0 + 0x54, a1, a2, a3);
                if (cVar9 == '\0') {
                    *(u32 *)(a0 + 0x54) = 0x42480000;
                    in_dr0 = CONCAT44(*(u32 *)((int)a2 + 4), (int)in_dr0);
                    *(u32 *)(a0 + 0x58) = *(u32 *)((int)a2 + 4);
                    a2 = puVar3;
                } else {
                    *(u64 *)(a0 + 0x54) = 0x64e365c342480000;
                    in_dr0 = *(u64 *)((int)a2 + 4);
                    *(u64 *)(a0 + 0x58) = in_dr0;
                    a2 = puVar3;
                }
            }
            uVar1 = a1;
            Vec3_sub(a0 + 0x54, a1, a2, pfVar4, auStack_34);
            uVar1 = Vec3_length(auStack_34, uVar1, a2, pfVar4);
            Vec3_assign(a0 + 0x14, uVar1, a2, pfVar4);
            Vec3_dtor(auStack_34, 0xffffffff, a2, pfVar4);
            Vec3_distance_sq(a1, a0 + 0x54, a2, pfVar4);
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(0x40a00000, (int)((u64)in_dr0 >> 0x20));
            } else {
                dVar7 = 6.3713441689111e-312;
                in_xd0 = in_dr0;
            }
            if (cVar8 == '\0') {
                fVar6 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
            } else {
                fVar6 = SUB84(dVar7 / dVar7, 0);
            }
            if (cVar9 == '\0') {
                *(float *)(a0 + 0x28) = fVar6;
            } else {
                *(u64 *)(a0 + 0x28) = in_xd0;
            }
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        case 3:
            iVar2 = *(int *)(a0 + 0x2198);
            if (iVar2 == 1) {
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x41900000, *a3);
                } else {
                    in_xd0 = *(u64 *)a3;
                    dVar7 = 1.18886109352276e-311;
                }
                if (cVar8 == '\0') {
                    fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar7 - dVar7, 0);
                }
                if (cVar9 == '\0') {
                    *a3 = fVar6;
                } else {
                    *(u64 *)a3 = in_xd0;
                }
            } else if (iVar2 == 2) {
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x41900000, *a3);
                } else {
                    in_xd0 = *(u64 *)a3;
                    dVar7 = 5.633371060283568e+86;
                }
                if (cVar8 == '\0') {
                    fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar7 - dVar7, 0);
                }
                if (cVar9 == '\0') {
                    *a3 = fVar6;
                } else {
                    *(u64 *)a3 = in_xd0;
                }
            } else if (iVar2 == 3) {
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x41900000, a3[2]);
                } else {
                    in_xd0 = *(u64 *)(a3 + 2);
                    dVar7 = 5.94420282588366e+86;
                }
                if (cVar8 == '\0') {
                    fVar6 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar7 + dVar7, 0);
                }
                if (cVar9 == '\0') {
                    a3[2] = fVar6;
                } else {
                    *(u64 *)(a3 + 2) = in_xd0;
                }
            } else if (iVar2 == 4) {
                if (cVar9 == '\0') {
                    dVar7 = (double)CONCAT44(0x41900000, a3[2]);
                } else {
                    in_xd0 = *(u64 *)(a3 + 2);
                    dVar7 = 6.255034591483752e+86;
                }
                if (cVar8 == '\0') {
                    fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar7 - dVar7, 0);
                }
                if (cVar9 == '\0') {
                    a3[2] = fVar6;
                } else {
                    *(u64 *)(a3 + 2) = in_xd0;
                }
            }
            *(int *)(a0 + 0x230) = *(int *)(a0 + 0x230) + 1;
            if (4 < *(int *)(a0 + 0x230)) {
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            }
            break;
        case 4:
            *(u32 *)(a0 + 0x28) = 0;
            *(u32 *)(a0 + 0x18) = 0;
            Vec3_length(a0 + 0x14, a1, a2, a3);
            Vec3_assign_f_023d7c(a0 + 0x21a8, a1);
            *(u32 *)(a0 + 0x230) = 0;
            *(u32 *)(a0 + 300) = 0;
            uVar5 = 0;
            *(u32 *)(a0 + 0x2198) = 5;
            *(u32 *)(a0 + 0x219c) = 0;
        }
    }
    return uVar5;
}

/*
 * game_vec_0a8f94  0x8c0a8f94
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b088_vec_0aa70c, game_state_switch_0a6974, game_vec_0a8c0c
 */
u32 game_vec_0a8f94(int a0, u32 a1, u8 *a2, u32 a3) {
    bool bVar1;
    u64 uVar2;
    int iVar3;
    u32 uVar4;
    u8 *ar6_00;
    u32 uVar5;
    float fVar6;
    double in_dr0;
    u32 uVar8;
    double dVar7;
    double in_dr14;
    char cVar9;
    char cVar10;
    u32 in_stack_00000000;
    u8 auStack_15c[16];
    u8 auStack_14c[12];
    u8 auStack_140[16];
    u8 auStack_130[16];
    u8 auStack_120[16];
    u8 auStack_110[16];
    u8 auStack_100[16];
    u8 auStack_f0[12];
    u8 auStack_e4[16];
    u8 auStack_d4[16];
    u8 auStack_c4[16];
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[12];
    u8 auStack_88[16];
    u8 auStack_78[16];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[20];

    cVar10 = '\0';
    cVar9 = '\0';
    uVar5 = 1;
    uVar4 = a1;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_28, a1, a2);
    if (*(int *)(a0 + 0x21b8) == 0) {
        switch (*(u32 *)(a0 + 0x2198)) {
        case 1:
            Vec3_assign_f_023d7c(in_stack_00000000, uVar4);
            break;
        case 2:
            Vec3_assign_f_023d7c(in_stack_00000000, uVar4);
            break;
        case 3:
            Vec3_assign_f_023d7c(in_stack_00000000, uVar4);
            break;
        case 4:
            Vec3_assign_f_023d7c(in_stack_00000000, uVar4);
        }
        *(int *)(a0 + 0x21b8) = *(int *)(a0 + 0x21b8) + 1;
    } else if (*(int *)(a0 + 0x21b8) != 1)
        goto LAB_8c0a951a;
    Vec3_assign(auStack_28, a0 + 0x14, ar6_00, a3);
    Vec3_ctor_copy(auStack_38, a1, ar6_00, a3);
    Vec3_ctor_copy(auStack_48, a2, ar6_00, a3);
    ar6_00 = auStack_48;
    iVar3 = game_state_switch_0a72b4(a0, auStack_38, ar6_00, a3);
    Vec3_dtor(auStack_48, 0xffffffff, ar6_00, a3);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_38, 0xffffffff, ar6_00, a3);
    if (iVar3 == 0) {
        *(u32 *)(a0 + 0x21b8) = 0;
    }
    uVar5 = (u32)(iVar3 != 0);
    switch (*(u32 *)(a0 + 0x2198)) {
    case 1:
    case 2:
        Vec3_return_xyz(auStack_28, uVar4, ar6_00, a3, auStack_b4);
        uVar8 = (u32)((u64)in_dr0 >> 0x20);
        Vec3_return_xyz(a0 + 0x14, uVar4, ar6_00, a3, auStack_c4);
        Vec3_cos_angle(auStack_b4, auStack_c4, ar6_00, a3);
        if (cVar10 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), uVar8);
        }
        Vec3_dtor(auStack_c4, 0xffffffff, ar6_00, a3);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_b4, 0xffffffff, ar6_00, a3);
        Vec3_return_xyz(a0 + 0x14, uVar4, ar6_00, a3, auStack_d4);
        Vec3_return_xyz(auStack_28, uVar4, ar6_00, a3, auStack_e4);
        Vec3_set_xyz(auStack_f0, uVar4, ar6_00, a3);
        Vec3_rotate_euler_deg(auStack_e4, auStack_f0, ar6_00, a3, auStack_100);
        Vec3_cos_angle(auStack_d4, auStack_100, ar6_00, a3);
        if (cVar10 == '\0') {
            in_dr0 = (double)CONCAT44(0x42b40000, uVar8);
        } else {
            in_dr0 = 3.65536181321395e-312;
        }
        bVar1 = cVar9 != '\0';
        fVar6 = SUB84(in_dr0, 0);
        uVar2 = (u64)in_dr0 >> 0x20;
        Vec3_dtor(auStack_100, 0xffffffff, ar6_00, a3);
        object_dtor_delete(auStack_f0, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_e4, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_d4, 0xffffffff, ar6_00, a3);
        if (bVar1 || fVar6 <= (float)uVar2) {
            if (cVar10 == '\0') {
                in_dr0 = (double)CONCAT44(0xbf800000, SUB84(in_dr0, 0));
            } else {
                in_dr0 = 1.0192512720885868e-72;
            }
            if (cVar9 == '\0') {
                in_dr14 =
                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) * (float)((u64)in_dr0 >> 0x20));
            } else {
                in_dr14 = in_dr14 * in_dr0;
            }
        }
        break;
    case 3:
    case 4:
        Vec3_return_xyz_023180(auStack_28, uVar4, ar6_00, a3, auStack_58);
        uVar8 = (u32)((u64)in_dr0 >> 0x20);
        Vec3_return_xyz_023180(a0 + 0x14, uVar4, ar6_00, a3, auStack_68);
        Vec3_cos_angle(auStack_58, auStack_68, ar6_00, a3);
        if (cVar10 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), uVar8);
        }
        Vec3_dtor(auStack_68, 0xffffffff, ar6_00, a3);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_58, 0xffffffff, ar6_00, a3);
        Vec3_return_xyz_023180(a0 + 0x14, uVar4, ar6_00, a3, auStack_78);
        Vec3_return_xyz_023180(auStack_28, uVar4, ar6_00, a3, auStack_88);
        Vec3_set_xyz(auStack_94, uVar4, ar6_00, a3);
        Vec3_rotate_euler_deg(auStack_88, auStack_94, ar6_00, a3, auStack_a4);
        Vec3_cos_angle(auStack_78, auStack_a4, ar6_00, a3);
        if (cVar10 == '\0') {
            in_dr0 = (double)CONCAT44(0x42b40000, uVar8);
        } else {
            in_dr0 = 5.607597940902e-312;
        }
        bVar1 = cVar9 != '\0';
        fVar6 = SUB84(in_dr0, 0);
        uVar2 = (u64)in_dr0 >> 0x20;
        Vec3_dtor(auStack_a4, 0xffffffff, ar6_00, a3);
        object_dtor_delete(auStack_94, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_88, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_78, 0xffffffff, ar6_00, a3);
        if (bVar1 || fVar6 <= (float)uVar2) {
            if (cVar10 == '\0') {
                in_dr0 = (double)CONCAT44(0xbf800000, SUB84(in_dr0, 0));
            } else {
                in_dr0 = 1.0192410166384276e-72;
            }
            if (cVar9 == '\0') {
                in_dr14 =
                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) * (float)((u64)in_dr0 >> 0x20));
            } else {
                in_dr14 = in_dr14 * in_dr0;
            }
        }
        break;
    case 5:
        Vec3_make(auStack_28, uVar4, ar6_00, a3, auStack_110);
        uVar8 = (u32)((u64)in_dr0 >> 0x20);
        Vec3_make(a0 + 0x14, uVar4, ar6_00, a3, auStack_120);
        Vec3_cos_angle(auStack_110, auStack_120, ar6_00, a3);
        if (cVar10 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), uVar8);
        }
        Vec3_dtor(auStack_120, 0xffffffff, ar6_00, a3);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_110, 0xffffffff, ar6_00, a3);
        Vec3_make(a0 + 0x14, uVar4, ar6_00, a3, auStack_130);
        Vec3_make(auStack_28, uVar4, ar6_00, a3, auStack_140);
        Vec3_set_xyz(auStack_14c, uVar4, ar6_00, a3);
        Vec3_rotate_euler_deg(auStack_140, auStack_14c, ar6_00, a3, auStack_15c);
        Vec3_cos_angle(auStack_130, auStack_15c, ar6_00, a3);
        if (cVar10 == '\0') {
            in_dr0 = (double)CONCAT44(0x42b40000, uVar8);
        } else {
            in_dr0 = -7.961142730794258e-251;
        }
        bVar1 = cVar9 != '\0';
        fVar6 = SUB84(in_dr0, 0);
        uVar2 = (u64)in_dr0 >> 0x20;
        Vec3_dtor(auStack_15c, 0xffffffff, ar6_00, a3);
        object_dtor_delete(auStack_14c, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_140, 0xffffffff, ar6_00, a3);
        Vec3_dtor(auStack_130, 0xffffffff, ar6_00, a3);
        if (bVar1 || fVar6 <= (float)uVar2) {
            if (cVar10 == '\0') {
                in_dr0 = (double)CONCAT44(0xbf800000, SUB84(in_dr0, 0));
            } else {
                in_dr0 = 1.82507511546215e-310;
            }
            if (cVar9 == '\0') {
                in_dr14 =
                    (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) * (float)((u64)in_dr0 >> 0x20));
            } else {
                in_dr14 = in_dr14 * in_dr0;
            }
        }
    }
    if ((*(int *)(a0 + 0x2198) == 4) || (*(int *)(a0 + 0x2198) == 2)) {
        if (cVar10 == '\0') {
            in_dr0 = (double)CONCAT44(0xbf800000, SUB84(in_dr0, 0));
        } else {
            in_dr0 = 1.82507511546215e-310;
        }
        if (cVar9 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) * (float)((u64)in_dr0 >> 0x20));
        } else {
            in_dr14 = in_dr14 * in_dr0;
        }
    }
    if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x21ac), SUB84(in_dr0, 0));
    } else {
        dVar7 = *(double *)(a0 + 0x21ac);
    }
    if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + SUB84(in_dr14, 0), SUB84(dVar7, 0));
    } else {
        dVar7 = dVar7 + in_dr14;
    }
    if (cVar10 == '\0') {
        *(int *)(a0 + 0x21ac) = (int)((u64)dVar7 >> 0x20);
    } else {
        *(double *)(a0 + 0x21ac) = dVar7;
    }
LAB_8c0a951a:
    Vec3_dtor(auStack_28, 0xffffffff, ar6_00, a3);
    return uVar5;
}

/*
 * game_vec_0a9578  0x8c0a9578
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_state_switch_0a6974
 */
u32 game_vec_0a9578(int a0, u32 a1, double *a2, u32 a3) {
    int iVar1;
    int ar5_00;
    u32 uVar2;
    double *ar6_00;
    u32 ar7_00;
    u32 uVar3;
    u32 uVar4;
    float fVar5;
    u64 in_dr0;
    double dVar6;
    double dVar7;
    double in_xd0;
    char cVar8;
    char cVar9;
    int *in_stack_00000000;
    u32 uStack_70;
    u32 uStack_6c;
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[20];

    cVar9 = '\0';
    cVar8 = '\0';
    uVar3 = 1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_28, a1, a2);
    uVar4 = (u32)in_dr0;
    iVar1 = *(int *)(a0 + 300);
    if (iVar1 == 0) {
        Vec3_assign(a0 + 0x2174, a0 + 0x80, ar6_00, ar7_00);
        dVar7 = (double)(u64)uVar4;
        if (cVar9 == '\0') {
            *(u32 *)(a0 + 0x2194) = 0;
        } else {
            *(double *)(a0 + 0x2194) = dVar7;
        }
        Vec3_assign(a0 + 0x54, a1, ar6_00, ar7_00);
        ar5_00 = a0 + 0x14;
        Vec3_assign(a0 + 0x80, ar5_00, ar6_00, ar7_00);
        Vec3_assign_f_023d7c(a0 + 0x21a8, ar5_00);
        Vec3_assign_f_023d7c(a3, ar5_00);
        iVar1 = *(int *)(a0 + 0x2198);
        if (iVar1 == 1) {
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(0x42c80000, *(u32 *)(a2 + 1));
            } else {
                in_xd0 = a2[1];
                dVar7 = 1.82072774393391e-310;
            }
            if (cVar8 == '\0') {
                fVar5 = (float)((u64)dVar7 >> 0x20);
                dVar7 = (double)CONCAT44(fVar5, SUB84(dVar7, 0) - fVar5);
            } else {
                dVar7 = dVar7 - dVar7;
            }
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x5c) = SUB84(dVar7, 0);
            } else {
                *(double *)(a0 + 0x5c) = in_xd0;
            }
            Vec3_assign_f(a0 + 0x2184, ar5_00, ar6_00, ar7_00);
        } else if (iVar1 == 2) {
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(0x42c80000, SUB84(dVar7, 0));
                *(u32 *)(a0 + 0x5c) = 0x42c80000;
            } else {
                dVar7 = 1.82072774393391e-310;
                *(u64 *)(a0 + 0x5c) = 0x218442c80000;
            }
            Vec3_assign_f(a0 + 0x2184, ar5_00, ar6_00, ar7_00);
        } else if (iVar1 == 3) {
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(0x42c80000, *(u32 *)a2);
            } else {
                in_xd0 = *a2;
                dVar7 = 1.82072774393391e-310;
            }
            if (cVar8 == '\0') {
                fVar5 = (float)((u64)dVar7 >> 0x20);
                dVar7 = (double)CONCAT44(fVar5, SUB84(dVar7, 0) - fVar5);
            } else {
                dVar7 = dVar7 - dVar7;
            }
            if (cVar9 == '\0') {
                *(int *)(a0 + 0x54) = SUB84(dVar7, 0);
            } else {
                *(double *)(a0 + 0x54) = in_xd0;
            }
            Vec3_assign_f(a0 + 0x2184, ar5_00, ar6_00, ar7_00);
        } else if (iVar1 == 4) {
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44(0x42c80000, SUB84(dVar7, 0));
                *(u32 *)(a0 + 0x54) = 0x42c80000;
            } else {
                dVar7 = 1.82072774393391e-310;
                *(u64 *)(a0 + 0x54) = 0x218442c80000;
            }
            Vec3_assign_f(a0 + 0x2184, ar5_00, ar6_00, ar7_00);
        }
        (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000, a0 + 0x54, ar6_00, ar7_00);
        uVar2 = (u32)((u64)dVar7 >> 0x20);
        if (cVar9 == '\0') {
            *(u32 *)(a0 + 0x58) = uVar2;
        } else {
            *(double *)(a0 + 0x58) = dVar7;
            uStack_70 = uVar2;
        }
        Vec3_distance_sq(a1, a0 + 0x54, ar6_00, ar7_00);
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(0x40a00000, (int)((u64)dVar7 >> 0x20));
        } else {
            dVar6 = -7.956827002088933e-251;
            in_xd0 = dVar7;
        }
        if (cVar8 == '\0') {
            fVar5 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 / dVar6, 0);
        }
        if (cVar9 == '\0') {
            *(float *)(a0 + 0x28) = fVar5;
        } else {
            *(double *)(a0 + 0x28) = in_xd0;
        }
        Vec3_sub(a0 + 0x54, a1, ar6_00, ar7_00, auStack_38);
        Vec3_assign(a0 + 0x14, auStack_38, ar6_00, ar7_00);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_38, 0xffffffff, ar6_00, ar7_00);
        Vec3_length(a0 + 0x14, uVar2, ar6_00, ar7_00);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
    } else if (iVar1 != 1) {
        if (iVar1 == 2) {
            if (cVar9 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = in_dr0 & 0xffffffff;
            }
            if (cVar9 == '\0') {
                *(u32 *)(a0 + 0x2194) = 0;
            } else {
                *(u64 *)(a0 + 0x2194) = in_dr0 & 0xffffffff;
            }
            uVar3 = 0;
            Vec3_assign(a0 + 0x14, a0 + 0x80, ar6_00, ar7_00);
            *(u32 *)(a0 + 0x2198) = 0;
            *(u32 *)(a0 + 300) = 0;
        }
        goto LAB_8c0a984a;
    }
    if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(a0 + 0x2194));
    } else {
        in_xd0 = *(double *)(a0 + 0x2194);
        dVar7 = -7.957972460180408e-251;
    }
    if (cVar8 == '\0') {
        fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
    } else {
        fVar5 = SUB84(dVar7 + dVar7, 0);
    }
    if (cVar9 == '\0') {
        *(float *)(a0 + 0x2194) = fVar5;
        fVar5 = *(float *)(a0 + 0x2194);
    } else {
        *(double *)(a0 + 0x2194) = in_xd0;
    }
    if (cVar8 != '\0' || 1.0 <= fVar5) {
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        if (cVar9 == '\0') {
            *(u32 *)(a0 + 0x2194) = 0x3f800000;
        } else {
            *(u64 *)(a0 + 0x2194) = CONCAT44(0x3f800000, fVar5);
        }
    }
    if (cVar9 == '\0') {
        fVar5 = *(float *)(a0 + 0x2194);
    }
    if (cVar8 == '\0') {
        dVar7 = (double)CONCAT44(1.0 - fVar5, fVar5);
    } else {
        dVar7 = (double)CONCAT44(0x3f800000, fVar5) - (double)CONCAT44(0x3f800000, fVar5);
    }
    uVar2 = (u32)((u64)dVar7 >> 0x20);
    uStack_70 = uVar2;
    if (cVar9 != '\0') {
        uStack_70 = SUB84(dVar7, 0);
        uStack_6c = uVar2;
    }
    Vec3_scale(a0 + 0x80, &uStack_70, ar6_00, ar7_00, auStack_48);
    Vec3_scale(a0 + 0x2184, a0 + 0x2194, ar6_00, ar7_00, auStack_58);
    Vec3_add(auStack_48, auStack_58, ar6_00, ar7_00, auStack_68);
    Vec3_assign(a0 + 0x80, auStack_68, ar6_00, ar7_00);
    Vec3_dtor(auStack_68, 0xffffffff, ar6_00, ar7_00);
    Vec3_dtor(auStack_58, 0xffffffff, ar6_00, ar7_00);
    Vec3_dtor(auStack_48, 0xffffffff, ar6_00, ar7_00);
    timer_vec_031ab4(a0, a3, ar6_00, ar7_00);
LAB_8c0a984a:
    uStack_6c = uVar3;
    Vec3_dtor(auStack_28, 0xffffffff, ar6_00, ar7_00);
    return uStack_6c;
}

/*
 * game_draw_point_list  0x8c0a98cc
 * draws each of the a0+0x230 points stored at a0+0x234 (16 bytes apart) through gfxlib_draw_234fd0
 * called by: Class_12aeec_uses_gfx_set_color4_0a481c
 */
u32 game_draw_point_list(int a0) {
    u64 *puVar1;
    u32 uVar2;
    int iVar3;
    float fVar4;
    double dVar5;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u32 uStack_1f6c;
    u64 uStack_1f68;
    u64 *puStack_1f5c;
    u32 *puStack_1f58;
    u32 uStack_1f54;
    u32 uStack_1f50;
    u8 auStack_1f4c[8004];

    cVar7 = '\0';
    cVar6 = '\0';
    uVar2 = 0x10;
    vec_new_array(auStack_1f4c, Vec3_ctor_zero, Vec3_dtor, 0x10, 500);
    uStack_1f6c = 0xffffffff;
    puStack_1f5c = &uStack_1f68;
    puStack_1f58 = &uStack_1f6c;
    uStack_1f54 = 0;
    uStack_1f50 = 1;
    for (iVar3 = 0; iVar3 < *(int *)(a0 + 0x230) + -1; iVar3 = iVar3 + 1) {
        puVar1 = (u64 *)(a0 + iVar3 * 0x10 + 0x234);
        if (cVar7 == '\0') {
            *(u32 *)puStack_1f5c = *(u32 *)puVar1;
        } else {
            *puStack_1f5c = *puVar1;
        }
        puVar1 = (u64 *)(a0 + iVar3 * 0x10 + 0x238);
        if (cVar7 == '\0') {
            dVar5 = (double)CONCAT44(0x41700000, *(u32 *)puVar1);
        } else {
            in_xd0 = *puVar1;
            dVar5 = 1.21432400688359e-311;
        }
        if (cVar6 == '\0') {
            fVar4 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20);
        } else {
            fVar4 = SUB84(dVar5 + dVar5, 0);
        }
        if (cVar7 == '\0') {
            *(float *)((int)puStack_1f5c + 4) = fVar4;
        } else {
            *(u64 *)((int)puStack_1f5c + 4) = in_xd0;
        }
        puVar1 = (u64 *)(a0 + iVar3 * 0x10 + 0x23c);
        if (cVar7 == '\0') {
            *(u32 *)(puStack_1f5c + 1) = *(u32 *)puVar1;
        } else {
            puStack_1f5c[1] = *puVar1;
        }
        gfx_draw_3d_line_segments_like(&puStack_1f5c, uStack_1f50, 0, uVar2);
    }
    uVar2 = vec_delete_array(auStack_1f4c, Vec3_dtor, 0x10, 500);
    return uVar2;
}

/*
 * Class_12b088_state_switch_0a99c4  0x8c0a99c4
 * area name: only called from Class_12b088 methods; behaviour name: dispatches on a state or mode value (switch)
 * called by: Class_12b088_m1_0a6468
 */
u32 Class_12b088_state_switch_0a99c4(int a0, u32 a1, int a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int ar6_00;
    u32 ar7_00;
    u32 uVar3;
    u32 uVar4;
    float fVar5;
    u64 in_dr0;
    u64 uVar6;
    u64 uVar7;
    double dVar8;
    u64 uVar9;
    u64 in_xd0;
    char cVar10;
    char cVar11;
    int *in_stack_00000000;
    u32 uStack_b4;
    u32 uStack_b0;
    u32 uStack_ac;
    u32 uStack_a8;
    u32 uStack_a4;
    u32 uStack_a0;
    u8 auStack_9c[16];
    u8 auStack_8c[16];
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[12];
    u8 auStack_20[4];
    u64 uStack_1c;
    u32 uStack_c;

    cVar11 = '\0';
    cVar10 = '\0';
    uStack_c = 1;
    ar6_00 = a2;
    ar7_00 = a3;
    Vec3_ctor_zero(auStack_20, Vec3_ctor_zero, a2);
    uStack_a0 = 1;
    if (*(int *)(a0 + 0x2198) == 0) {
        Vec3_assign_f_023d7c(a3, 0);
    }
    uVar3 = (u32)in_dr0;
    iVar1 = *(int *)(a0 + 0x68);
    uVar2 = 5;
    if ((iVar1 < 6) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            while (true) {
                uVar3 = (u32)in_dr0;
                timer_start_94(a0, timer_start_94, ar6_00);
                in_dr0 = (u64)uVar3;
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x21a0) = 0;
                } else {
                    *(u64 *)(a0 + 0x21a0) = in_dr0;
                }
                Vec3_assign(a0 + 0x2174, a0 + 0x14, ar6_00, ar7_00);
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x2194) = 0;
                } else {
                    *(u64 *)(a0 + 0x2194) = in_dr0;
                }
                uVar2 = a1;
                Vec3_assign(a0 + 0x54, a1, ar6_00, ar7_00);
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x58) = 0;
                } else {
                    *(u64 *)(a0 + 0x58) = in_dr0;
                }
                Vec3_assign_f_023d7c(a0 + 0x21a8, uVar2);
                uVar4 = (u32)in_dr0;
                if (a2 != 0) {
                    if (a2 == 3) {
                        ar7_00 = 0;
                        ar6_00 = -1;
                        uVar2 = 2;
                        CAnimBody_SetAnimation(a0 + 0xb0, 2, 0xffffffff, 0);
                        if (cVar11 == '\0') {
                            in_dr0 = CONCAT44(0x3dcccccd, uVar4);
                            *(u32 *)(a0 + 0xa0) = 0x3dcccccd;
                        } else {
                            in_dr0 = 0x8c0268583dcccccd;
                            *(u64 *)(a0 + 0xa0) = 0x8c0268583dcccccd;
                        }
                        in_dr0 = in_dr0 & 0xffffffff;
                        if (cVar11 == '\0') {
                            *(u32 *)(a0 + 0x28) = 0;
                        } else {
                            *(u64 *)(a0 + 0x28) = in_dr0;
                        }
                        *(int *)(a0 + 0x68) = *(int *)(a0 + 0x68) + 1;
                    }
                    goto switchD_8c0a9a1a_caseD_1;
                }
                ar7_00 = 0;
                ar6_00 = -1;
                uVar2 = 7;
                CAnimBody_SetAnimation(a0 + 0xb0, 7, 0xffffffff, 0);
                CAnimBody_SetFrame(a0 + 0xb0, uVar2, ar6_00, ar7_00);
                if (cVar11 == '\0') {
                    in_dr0 = CONCAT44(0x3a83126f, uVar4);
                    *(u32 *)(a0 + 0xa0) = 0x3a83126f;
                } else {
                    in_dr0 = 0xc716e7003a83126f;
                    *(u64 *)(a0 + 0xa0) = 0xc716e7003a83126f;
                }
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = in_dr0;
                }
                *(u32 *)(a0 + 0x68) = 2;
            switchD_8c0a9a1a_caseD_2:
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, ar6_00, ar7_00);
                uVar3 = (u32)in_dr0;
                if (a2 != 3)
                    break;
                *(u32 *)(a0 + 0x68) = 0;
                *(u32 *)(a0 + 0x21a4) = 0;
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x18) = 0;
                } else {
                    *(u64 *)(a0 + 0x18) = in_dr0 & 0xffffffff;
                }
                in_dr0 = in_dr0 & 0xffffffff;
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x2194) = 0;
                } else {
                    *(u64 *)(a0 + 0x2194) = in_dr0;
                }
            }
            Vec3_set_xyz(auStack_2c, uVar2, ar6_00, ar7_00);
            Vec3_rotate_euler_deg(a0 + 0x14, auStack_2c, ar6_00, ar7_00, auStack_3c);
            Vec3_assign(a0 + 0x14, auStack_3c, ar6_00, ar7_00);
            Vec3_dtor(auStack_3c, 0xffffffff, ar6_00, ar7_00);
            uVar2 = 0xffffffff;
            object_dtor_delete(auStack_2c, 0xffffffff, ar6_00, ar7_00);
            if ((a2 != 1) && (a2 != 2)) {
                game_vec_03207c(a0, uVar2);
                game_float_calc_0324ac(a0);
                break;
            }
            *(u32 *)(a0 + 0x68) = 5;
            if (cVar11 == '\0') {
                *(u32 *)(a0 + 0x2194) = 0;
            } else {
                *(u64 *)(a0 + 0x2194) = (u64)uVar3;
            }
            iVar1 = a0 + 0x14;
            Vec3_assign(a0 + 0x2174, iVar1, ar6_00, ar7_00);
            Class_12b2ac_vec_031700(a0, iVar1, ar6_00, ar7_00);
        case 5:
            *(u32 *)(a0 + 0x21a4) = 2;
            break;
        case 1:
        switchD_8c0a9a1a_caseD_1:
            uVar3 = (u32)in_dr0;
            CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, ar6_00, ar7_00);
            if (a2 == 0) {
                clear_field_94(a0, uVar2);
                *(u32 *)(a0 + 0x68) = 0;
                break;
            }
            if (a2 != 1) {
                game_float_calc_0324ac(a0);
                break;
            }
            *(u32 *)(a0 + 0x68) = 3;
            if (cVar11 == '\0') {
                *(u32 *)(a0 + 0x2194) = 0;
            } else {
                *(u64 *)(a0 + 0x2194) = (u64)uVar3;
            }
            if (cVar11 == '\0') {
                *(u32 *)(a0 + 0x94) = 0;
            } else {
                *(u64 *)(a0 + 0x94) = (u64)uVar3;
            }
            uVar6 = (u64)uVar3;
            if (cVar11 == '\0') {
                *(u32 *)(a0 + 0xa0) = 0;
            } else {
                *(u64 *)(a0 + 0xa0) = uVar6;
            }
            *(u32 *)(a0 + 0x21a4) = 1;
            if (*(char *)(a0 + 0x210) == '\x01') {
                ar7_00 = 0xd;
                ar6_00 = 1;
                (**(code **)(*in_stack_00000000 + 0xd0))(in_stack_00000000, a1, 1, 0xd);
                uVar3 = (u32)uVar6;
                uVar2 = a1;
            }
        case 3:
            uVar6 = (u64)uVar3;
            if (cVar11 == '\0') {
                *(u32 *)(a0 + 0xa0) = 0;
            } else {
                *(u64 *)(a0 + 0xa0) = uVar6;
            }
            clear_field_94(a0, uVar2);
            uVar7 = uVar6 & 0xffffffff;
            if (cVar11 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = uVar7;
            }
            if (a2 == 1) {
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, ar6_00, ar7_00);
                uVar3 = (u32)uVar7;
                iVar1 = a0 + 0x14;
                Vec3_assign(auStack_20, iVar1, ar6_00, ar7_00);
                uVar6 = (u64)uVar3;
                if (cVar11 == '\0') {
                    uStack_1c = (u64)uStack_1c._4_4_ << 0x20;
                    uVar6 = uStack_1c;
                }
                uStack_1c = uVar6;
                Vec3_length(auStack_20, iVar1, ar6_00, ar7_00);
                if (cVar11 == '\0') {
                    dVar8 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(a0 + 0x2194));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x2194);
                    dVar8 = 1.81732883613961e-310;
                }
                if (cVar10 == '\0') {
                    fVar5 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar5 = SUB84(dVar8 + dVar8, 0);
                }
                if (cVar11 == '\0') {
                    *(float *)(a0 + 0x2194) = fVar5;
                    fVar5 = *(float *)(a0 + 0x2194);
                } else {
                    *(u64 *)(a0 + 0x2194) = in_xd0;
                }
                if (cVar10 != '\0' || 1.0 <= fVar5) {
                    if (cVar11 == '\0') {
                        *(u32 *)(a0 + 0x2194) = 0x3f800000;
                    } else {
                        *(u64 *)(a0 + 0x2194) = CONCAT44(0x3f800000, fVar5);
                    }
                }
                if (cVar11 == '\0') {
                    fVar5 = *(float *)(a0 + 0x2194);
                }
                if (cVar10 == '\0') {
                    dVar8 = (double)CONCAT44(1.0 - fVar5, fVar5);
                } else {
                    dVar8 = (double)CONCAT44(0x3f800000, fVar5) - (double)CONCAT44(0x3f800000, fVar5);
                }
                uVar2 = (u32)((u64)dVar8 >> 0x20);
                uStack_a8 = uVar2;
                if (cVar11 != '\0') {
                    uStack_a8 = SUB84(dVar8, 0);
                    uStack_a4 = uVar2;
                }
                Vec3_scale(a0 + 0x2174, &uStack_a8, ar6_00, ar7_00, auStack_4c);
                if (cVar11 == '\0') {
                    uStack_ac = *(u32 *)(a0 + 0x2194);
                    uVar9 = CONCAT44(uStack_ac, SUB84(dVar8, 0));
                } else {
                    uVar9 = *(u64 *)(a0 + 0x2194);
                    uStack_ac = (u32)uVar9;
                    uStack_a8 = (u32)((u64)uVar9 >> 0x20);
                }
                fVar5 = (float)uVar9;
                Vec3_scale(auStack_20, &uStack_ac, ar6_00, ar7_00, auStack_5c);
                Vec3_add(auStack_4c, auStack_5c, ar6_00, ar7_00, auStack_6c);
                Vec3_assign(a0 + 0x14, auStack_6c, ar6_00, ar7_00);
                Vec3_dtor(auStack_6c, 0xffffffff, ar6_00, ar7_00);
                Vec3_dtor(auStack_5c, 0xffffffff, ar6_00, ar7_00);
                Vec3_dtor(auStack_4c, 0xffffffff, ar6_00, ar7_00);
                if (cVar11 == '\0') {
                    fVar5 = *(float *)(a0 + 0x2194);
                }
                if (fVar5 == 1.0) {
                    if (cVar11 == '\0') {
                        *(u32 *)(a0 + 0x2194) = 0;
                    } else {
                        *(u64 *)(a0 + 0x2194) = (u64)(u32)fVar5;
                    }
                    *(u32 *)(a0 + 0x21a4) = 2;
                    *(u32 *)(a0 + 0x40) = 5;
                    if (cVar11 == '\0') {
                        *(u32 *)(a0 + 0x94) = 0;
                    } else {
                        *(u64 *)(a0 + 0x94) = (u64)(u32)fVar5;
                    }
                    if (cVar11 == '\0') {
                        *(u32 *)(a0 + 0xa0) = 0;
                    } else {
                        *(u64 *)(a0 + 0xa0) = (u64)(u32)fVar5;
                    }
                    *(u32 *)(a0 + 0x68) = 0;
                }
                Vec3_assign(a0 + 0x80, a0 + 0x14, ar6_00, ar7_00);
            } else {
                *(u32 *)(a0 + 0x68) = 0;
                *(u32 *)(a0 + 0x21a4) = 0;
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x18) = 0;
                } else {
                    *(u64 *)(a0 + 0x18) = uVar6 & 0xffffffff;
                }
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x2194) = 0;
                } else {
                    *(u64 *)(a0 + 0x2194) = uVar6 & 0xffffffff;
                }
            }
            break;
        case 2:
            goto switchD_8c0a9a1a_caseD_2;
        case 4:
            in_dr0 = in_dr0 & 0xffffffff;
            if (cVar11 == '\0') {
                *(u32 *)(a0 + 0xa0) = 0;
            } else {
                *(u64 *)(a0 + 0xa0) = in_dr0;
            }
            clear_field_94(a0, 5);
            in_dr0 = in_dr0 & 0xffffffff;
            if (cVar11 == '\0') {
                *(u32 *)(a0 + 0x28) = 0;
            } else {
                *(u64 *)(a0 + 0x28) = in_dr0;
            }
            Vec3_assign_f(a0 + 0x6c, uVar2, ar6_00, ar7_00);
            fVar5 = (float)in_dr0;
            if (a2 == 1) {
                CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, uVar2, ar6_00, ar7_00);
                if (cVar11 == '\0') {
                    fVar5 = *(float *)(a0 + 0x18);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x18);
                }
                uVar6 = (u64)(u32)fVar5;
                if (fVar5 != 0.0) {
                    iVar1 = a0 + 0x14;
                    Vec3_assign(auStack_20, iVar1, ar6_00, ar7_00);
                    uVar6 = uVar6 & 0xffffffff;
                    if (cVar11 == '\0') {
                        uStack_1c = uStack_1c & 0xffffffff00000000;
                        uVar6 = uStack_1c;
                    }
                    uStack_1c = uVar6;
                    Vec3_length(auStack_20, iVar1, ar6_00, ar7_00);
                    if (cVar11 == '\0') {
                        dVar8 = (double)CONCAT44(0x3d4ccccd, *(u32 *)(a0 + 0x2194));
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x2194);
                        dVar8 = 1.81732800723501e-310;
                    }
                    if (cVar10 == '\0') {
                        fVar5 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
                    } else {
                        fVar5 = SUB84(dVar8 + dVar8, 0);
                    }
                    if (cVar11 == '\0') {
                        *(float *)(a0 + 0x2194) = fVar5;
                        fVar5 = *(float *)(a0 + 0x2194);
                    } else {
                        *(u64 *)(a0 + 0x2194) = in_xd0;
                    }
                    if (cVar10 != '\0' || 1.0 <= fVar5) {
                        if (cVar11 == '\0') {
                            *(u32 *)(a0 + 0x2194) = 0x3f800000;
                        } else {
                            *(u64 *)(a0 + 0x2194) = CONCAT44(0x3f800000, fVar5);
                        }
                    }
                    if (cVar11 == '\0') {
                        fVar5 = *(float *)(a0 + 0x2194);
                    }
                    if (cVar10 == '\0') {
                        dVar8 = (double)CONCAT44(1.0 - fVar5, fVar5);
                    } else {
                        dVar8 = (double)CONCAT44(0x3f800000, fVar5) - (double)CONCAT44(0x3f800000, fVar5);
                    }
                    uVar2 = (u32)((u64)dVar8 >> 0x20);
                    uStack_b0 = uVar2;
                    if (cVar11 != '\0') {
                        uStack_b0 = SUB84(dVar8, 0);
                        uStack_ac = uVar2;
                    }
                    Vec3_scale(a0 + 0x2174, &uStack_b0, ar6_00, ar7_00, auStack_7c);
                    if (cVar11 == '\0') {
                        uStack_b4 = *(u32 *)(a0 + 0x2194);
                        uVar9 = CONCAT44(uStack_b4, SUB84(dVar8, 0));
                    } else {
                        uVar9 = *(u64 *)(a0 + 0x2194);
                        uStack_b4 = (u32)uVar9;
                        uStack_b0 = (u32)((u64)uVar9 >> 0x20);
                    }
                    fVar5 = (float)uVar9;
                    Vec3_scale(auStack_20, &uStack_b4, ar6_00, ar7_00, auStack_8c);
                    Vec3_add(auStack_7c, auStack_8c, ar6_00, ar7_00, auStack_9c);
                    Vec3_assign(a0 + 0x14, auStack_9c, ar6_00, ar7_00);
                    Vec3_dtor(auStack_9c, 0xffffffff, ar6_00, ar7_00);
                    Vec3_dtor(auStack_8c, 0xffffffff, ar6_00, ar7_00);
                    Vec3_dtor(auStack_7c, 0xffffffff, ar6_00, ar7_00);
                    if (cVar11 == '\0') {
                        fVar5 = *(float *)(a0 + 0x2194);
                    }
                    if (fVar5 == 1.0) {
                        if (cVar11 == '\0') {
                            *(u32 *)(a0 + 0x2194) = 0;
                        } else {
                            *(u64 *)(a0 + 0x2194) = (u64)(u32)fVar5;
                        }
                    }
                }
            } else {
                *(u32 *)(a0 + 0x68) = 0;
                *(u32 *)(a0 + 0x21a4) = 0;
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x18) = 0;
                } else {
                    *(u64 *)(a0 + 0x18) = in_dr0 & 0xffffffff;
                }
                if (cVar11 == '\0') {
                    *(u32 *)(a0 + 0x2194) = 0;
                } else {
                    *(u64 *)(a0 + 0x2194) = in_dr0 & 0xffffffff;
                }
            }
        }
    }
    uStack_a4 = 0;
    Vec3_dtor(auStack_20, 0xffffffff, ar6_00, ar7_00);
    return uStack_a4;
}

/*
 * game_vec_0aa11c  0x8c0aa11c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b088_vec_0a6628
 */
u32 game_vec_0aa11c(int a0, u32 a1, u32 a2) {
    bool bVar1;
    int iVar2;
    u32 uVar3;
    u8 *ar5_00;
    u32 uVar4;
    u8 *ar6_00;
    u8 *ar7_00;
    u32 uVar5;
    float in_fr1;
    float fVar6;
    code *pcVar9;
    double dVar7;
    u64 uVar8;
    u64 in_xd0;
    char cVar10;
    char cVar11;
    u64 uStack_f8;
    u8 auStack_b8[16];
    u8 auStack_a8[12];
    u8 auStack_9c[16];
    u8 auStack_8c[16];
    u8 auStack_7c[16];
    u8 auStack_6c[16];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[4];
    u8 auStack_28[4];
    u8 auStack_24[12];

    cVar11 = '\0';
    cVar10 = '\0';
    uVar5 = 1;
    uVar4 = a1;
    uVar3 = a2;
    Vec3_ctor_zero(auStack_2c, a1, a2);
    iVar2 = get_field_6c_028cc4(a2, uVar4);
    ar7_00 = auStack_24;
    ar6_00 = auStack_28;
    ar5_00 = auStack_2c;
    get_vec3_field_30(iVar2, ar5_00, ar6_00, ar7_00);
    if (iVar2 == 0) {
        Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, ar7_00);
        uVar5 = 2;
    } else {
        iVar2 = *(int *)(a0 + 300);
        if ((iVar2 < 6) && (-1 < iVar2)) {
            switch (iVar2) {
            case 0:
                *(u32 *)(a0 + 0x21bc) = 0;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                flags6_clear_all(a0 + 0x1fc, ar5_00, ar6_00, ar7_00);
            case 1:
                ar6_00 = auStack_2c;
                iVar2 = game_vec_0ab0d8(a0, a1, ar6_00, ar7_00);
                if (iVar2 == 0) {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    if (cVar11 == '\0') {
                        *(u32 *)(a0 + 0x2194) = 0;
                    } else {
                        *(u64 *)(a0 + 0x2194) = (u64)(u32)in_fr1;
                    }
                    set_field_88_to_1(a2, a1, ar6_00);
                }
                break;
            case 2:
                if (cVar11 == '\0') {
                    in_fr1 = *(float *)(a0 + 0x2194);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x2194);
                }
                if (cVar10 == '\0') {
                    in_fr1 = in_fr1 + 1.0;
                } else {
                    in_fr1 = SUB84((double)CONCAT44(0x3f800000, in_fr1) + (double)CONCAT44(0x3f800000, in_fr1), 0);
                }
                uStack_f8 = in_xd0;
                if (cVar11 == '\0') {
                    uStack_f8 = CONCAT44(a0, in_fr1);
                }
                if (cVar11 == '\0') {
                    *(u32 *)(uStack_f8._4_4_ + 0x2194) = (u32)uStack_f8;
                    uVar8 = CONCAT44(0x43160000, (u32)uStack_f8);
                } else {
                    *(u64 *)(uStack_f8._4_4_ + 0x2194) = uStack_f8;
                    uVar8 = 0x12c43160000;
                }
                if (cVar10 != '\0' || (float)(uVar8 >> 0x20) <= (float)uVar8) {
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    if (cVar11 == '\0') {
                        *(u32 *)(a0 + 0x2194) = 0;
                    } else {
                        *(u64 *)(a0 + 0x2194) = uVar8 & 0xffffffff;
                    }
                }
                break;
            case 3:
                Vec3_ctor_xyz(auStack_3c, ar5_00, ar6_00, ar7_00);
                ar6_00 = auStack_3c;
                iVar2 = game_vec_0ab0d8(a0, a1, ar6_00, ar7_00);
                Vec3_dtor(auStack_3c, 0xffffffff, ar6_00, ar7_00);
                if (iVar2 == 0) {
                    ar7_00 = NULL;
                    ar6_00 = (u8 *)0xffffffff;
                    uVar4 = 0;
                    CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
                    CAnimBody_SetFrame(a0 + 0xb0, uVar4, ar6_00, ar7_00);
                    *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                    uVar8 = (u64)(u32)in_fr1;
                    if (cVar11 == '\0') {
                        *(u32 *)(a0 + 0x22c) = 0;
                    } else {
                        *(u64 *)(a0 + 0x22c) = uVar8;
                    }
                    Vec3_ctor_xyz(auStack_4c, uVar4, ar6_00, ar7_00);
                    uVar3 = Vec3_length(auStack_4c, uVar4, ar6_00, ar7_00);
                    Vec3_return_xyz(uVar3, uVar4, ar6_00, ar7_00, auStack_5c);
                    Vec3_return_xyz(a0 + 0x14, uVar4, ar6_00, ar7_00, auStack_6c);
                    Vec3_cos_angle(auStack_5c, auStack_6c, ar6_00, ar7_00);
                    if (cVar11 == '\0') {
                        *(int *)(a0 + 0x2194) = (int)(uVar8 >> 0x20);
                    } else {
                        *(u64 *)(a0 + 0x2194) = uVar8;
                    }
                    Vec3_dtor(auStack_6c, 0xffffffff, ar6_00, ar7_00);
                    Vec3_dtor(auStack_5c, 0xffffffff, ar6_00, ar7_00);
                    uVar3 = 0xffffffff;
                    Vec3_dtor(auStack_4c, 0xffffffff, ar6_00, ar7_00);
                    Vec3_return_xyz(a0 + 0x14, uVar3, ar6_00, ar7_00, auStack_7c);
                    Vec3_ctor_xyz(auStack_8c, uVar3, ar6_00, ar7_00);
                    uVar4 = Vec3_length(auStack_8c, uVar3, ar6_00, ar7_00);
                    Vec3_return_xyz(uVar4, uVar3, ar6_00, ar7_00, auStack_9c);
                    Vec3_set_xyz(auStack_a8, uVar3, ar6_00, ar7_00);
                    Vec3_rotate_euler_deg(auStack_9c, auStack_a8, ar6_00, ar7_00, auStack_b8);
                    Vec3_cos_angle(auStack_7c, auStack_b8, ar6_00, ar7_00);
                    if (cVar11 == '\0') {
                        fVar6 = (float)(uVar8 >> 0x20);
                        pcVar9 = (code *)0x42b40000;
                        uVar8 = in_xd0;
                    } else {
                        fVar6 = 90.0;
                        pcVar9 = Vec3_set_xyz;
                    }
                    bVar1 = cVar10 != '\0';
                    Vec3_dtor(auStack_b8, 0xffffffff, ar6_00, ar7_00);
                    object_dtor_delete(auStack_a8, 0xffffffff, ar6_00, ar7_00);
                    Vec3_dtor(auStack_9c, 0xffffffff, ar6_00, ar7_00);
                    Vec3_dtor(auStack_8c, 0xffffffff, ar6_00, ar7_00);
                    Vec3_dtor(auStack_7c, 0xffffffff, ar6_00, ar7_00);
                    if (bVar1 || fVar6 <= (float)pcVar9) {
                        if (cVar11 == '\0') {
                            dVar7 = (double)CONCAT44(0xbf800000, *(u32 *)(a0 + 0x2194));
                        } else {
                            uVar8 = *(u64 *)(a0 + 0x2194);
                            dVar7 = 3.75058611530083e-312;
                        }
                        if (cVar10 == '\0') {
                            fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
                        } else {
                            fVar6 = SUB84(dVar7 * dVar7, 0);
                        }
                        if (cVar11 == '\0') {
                            *(float *)(a0 + 0x2194) = fVar6;
                        } else {
                            *(u64 *)(a0 + 0x2194) = uVar8;
                        }
                    }
                }
                break;
            case 4:
                if (cVar11 == '\0') {
                    in_fr1 = *(float *)(a0 + 0x2194);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x2194);
                }
                if (cVar10 != '\0' || in_fr1 <= 0.0) {
                    if (cVar11 == '\0') {
                        in_fr1 = *(float *)(a0 + 0x22c);
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x22c);
                    }
                    if (cVar10 == '\0') {
                        in_fr1 = in_fr1 - 1.0;
                    } else {
                        in_fr1 = SUB84((double)CONCAT44(0x3f800000, in_fr1) - (double)CONCAT44(0x3f800000, in_fr1), 0);
                    }
                    if (cVar11 == '\0') {
                        *(float *)(a0 + 0x22c) = in_fr1;
                        uVar8 = CONCAT44(*(u32 *)(a0 + 0x2194), *(u32 *)(a0 + 0x22c));
                    } else {
                        *(u64 *)(a0 + 0x22c) = in_xd0;
                        in_xd0 = *(u64 *)(a0 + 0x22c);
                        uVar8 = *(u64 *)(a0 + 0x2194);
                    }
                    if (cVar10 == '\0' && (float)(uVar8 >> 0x20) < (float)uVar8) {
                        if (cVar11 == '\0') {
                            uVar8 = (u64) * (u32 *)(a0 + 0x21ac);
                        } else {
                            in_xd0 = *(u64 *)(a0 + 0x21ac);
                        }
                        dVar7 = (double)CONCAT44(0x3f800000, (float)uVar8);
                        if (cVar10 == '\0') {
                            fVar6 = (float)uVar8 - 1.0;
                        } else {
                            fVar6 = SUB84(dVar7 - dVar7, 0);
                        }
                        if (cVar11 == '\0') {
                            *(float *)(a0 + 0x21ac) = fVar6;
                        } else {
                            *(u64 *)(a0 + 0x21ac) = in_xd0;
                        }
                    } else {
                        if (cVar11 == '\0') {
                            *(u32 *)(a0 + 0x21ac) = 0;
                        } else {
                            *(u64 *)(a0 + 0x21ac) = uVar8 & 0xffffffff;
                        }
                        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                        Vec3_assign_f(a0 + 0x14, ar5_00, ar6_00, ar7_00);
                    }
                } else {
                    if (cVar11 == '\0') {
                        in_fr1 = *(float *)(a0 + 0x22c);
                    } else {
                        in_xd0 = *(u64 *)(a0 + 0x22c);
                    }
                    if (cVar10 == '\0') {
                        in_fr1 = in_fr1 + 1.0;
                    } else {
                        in_fr1 = SUB84((double)CONCAT44(0x3f800000, in_fr1) + (double)CONCAT44(0x3f800000, in_fr1), 0);
                    }
                    if (cVar11 == '\0') {
                        *(float *)(a0 + 0x22c) = in_fr1;
                        uVar8 = CONCAT44(*(u32 *)(a0 + 0x2194), *(u32 *)(a0 + 0x22c));
                    } else {
                        *(u64 *)(a0 + 0x22c) = in_xd0;
                        in_xd0 = *(u64 *)(a0 + 0x22c);
                        uVar8 = *(u64 *)(a0 + 0x2194);
                    }
                    if (cVar10 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
                        if (cVar11 == '\0') {
                            uVar8 = (u64) * (u32 *)(a0 + 0x21ac);
                        } else {
                            in_xd0 = *(u64 *)(a0 + 0x21ac);
                        }
                        dVar7 = (double)CONCAT44(0x3f800000, (float)uVar8);
                        if (cVar10 == '\0') {
                            fVar6 = (float)uVar8 + 1.0;
                        } else {
                            fVar6 = SUB84(dVar7 + dVar7, 0);
                        }
                        if (cVar11 == '\0') {
                            *(float *)(a0 + 0x21ac) = fVar6;
                        } else {
                            *(u64 *)(a0 + 0x21ac) = in_xd0;
                        }
                    } else {
                        if (cVar11 == '\0') {
                            *(u32 *)(a0 + 0x21ac) = 0;
                        } else {
                            *(u64 *)(a0 + 0x21ac) = uVar8 & 0xffffffff;
                        }
                        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
                        Vec3_assign_f(a0 + 0x14, ar5_00, ar6_00, ar7_00);
                    }
                }
                CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, ar5_00, ar6_00, ar7_00);
                break;
            case 5:
                iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, ar5_00, ar6_00, ar7_00);
                if (iVar2 == 1) {
                    flags6_set_all(a0 + 0x1fc, ar5_00, ar6_00);
                    *(u32 *)(a0 + 300) = 0;
                    uVar5 = 0;
                }
            }
        }
        Vec3_dtor(auStack_2c, 0xffffffff, ar6_00, ar7_00);
    }
    return uVar5;
}

/*
 * Class_12b088_vec_0aa70c  0x8c0aa70c
 * area name: only called from Class_12b088 methods; behaviour name: mostly calls vec functions
 * called by: Class_12b088_m1_0a6468
 */
u32 Class_12b088_vec_0aa70c(int a0, u32 a1, int *a2, u64 *a3) {
    int iVar1;
    u32 ar4_00;
    u32 *a5;
    int iVar2;
    u32 uVar3;
    float *a6;
    u64 *puVar4;
    u32 uVar5;
    u32 uVar6;
    float fVar7;
    double dVar8;
    float fVar11;
    u64 uVar9;
    double dVar10;
    u32 in_fr3;
    u64 in_xd0;
    char cVar12;
    char cVar13;
    u8 auStack_e8[16];
    u8 auStack_d8[16];
    u8 auStack_c8[16];
    u8 auStack_b8[16];
    u8 auStack_a8[16];
    u8 auStack_98[16];
    u8 auStack_88[16];
    u8 auStack_78[16];
    u64 uStack_68;
    float afStack_5c[3];
    float afStack_50[3];
    float afStack_44[2];
    u32 uStack_3c;
    u32 uStack_38;
    u8 auStack_34[16];
    u32 uStack_24;
    float fStack_20;
    u32 auStack_1c[2];

    cVar13 = '\0';
    cVar12 = '\0';
    uVar5 = 1;
    clear_3_words_102748(&uStack_24);
    puVar4 = (u64 *)auStack_1c;
    a6 = &fStack_20;
    a5 = &uStack_24;
    (**(code **)(*a2 + 0x120))(a2, a5, a6, puVar4);
    Vec3_ctor_zero(auStack_34, a5, a6);
    Vec3_ctor_zero(afStack_44, a5, a6);
    iVar2 = a0 + 0x14;
    Vec3_assign(auStack_34, iVar2, a6, puVar4);
    if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(0x42c80000, uStack_24);
    } else {
        in_xd0 = CONCAT44(fStack_20, uStack_24);
        dVar8 = 4.92856576361035e-312;
    }
    if (cVar12 == '\0') {
        afStack_44[0] = SUB84(dVar8, 0) - (float)((u64)dVar8 >> 0x20);
    } else {
        afStack_44[0] = SUB84(dVar8 - dVar8, 0);
    }
    fVar7 = afStack_44[0];
    if (cVar13 != '\0') {
        afStack_44[0] = (float)in_xd0;
        uStack_38 = 0xe8;
        fVar7 = 100.0;
    }
    uStack_3c = 0x42c80000;
    iVar1 = *(int *)(a0 + 0x21b4);
    if (iVar1 == 0) {
        if (*(int *)(a0 + 0x2198) == 0) {
            Vec3_copy_assign(afStack_50, &uStack_24);
            a6 = afStack_50;
            game_vec_0a861c(a0, a1, a6, puVar4);
            free_if_nonnull_wrap_102790(afStack_50, 0xffffffff, a6, puVar4);
            goto LAB_8c0aacb4;
        }
        if (*(int *)(a0 + 0x2198) != 5) {
            Vec3_copy_assign(afStack_5c, &uStack_24);
            a6 = afStack_5c;
            iVar2 = game_vec_0a8c0c(a0, a1, a6, a3);
            uVar3 = 0xffffffff;
            free_if_nonnull_wrap_102790(afStack_5c, 0xffffffff, a6, a3);
            puVar4 = a3;
            if (iVar2 == 0) {
                *(int *)(a0 + 0x21b4) = *(int *)(a0 + 0x21b4) + 1;
                Vec3_assign_f(a0 + 0x54, uVar3, a6, a3);
                puVar4 = a3;
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0x54) = uStack_24;
                    *(float *)(a0 + 0x58) = fStack_20;
                } else {
                    *(u64 *)(a0 + 0x54) = CONCAT44(fStack_20, uStack_24);
                    *(u64 *)(a0 + 0x58) = CONCAT44(auStack_1c[0], fStack_20);
                }
            }
            goto LAB_8c0aacb4;
        }
        *(u32 *)(a0 + 0x21b4) = 1;
    } else if (iVar1 != 1) {
        if (iVar1 == 2) {
            if (cVar13 == '\0') {
                fVar7 = *(float *)(a0 + 0x2194);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x2194);
            }
            if (cVar12 == '\0') {
                fVar7 = fVar7 + 1.0;
            } else {
                fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
            }
            if (cVar13 == '\0') {
                *(float *)(a0 + 0x2194) = fVar7;
                fVar7 = *(float *)(a0 + 0x2194);
                fVar11 = 15.0;
            } else {
                *(u64 *)(a0 + 0x2194) = in_xd0;
                in_xd0 = *(u64 *)(a0 + 0x2194);
                fVar7 = 15.0;
                fVar11 = 108.7;
            }
            if (cVar12 != '\0' || fVar7 <= fVar11) {
                if (cVar13 == '\0') {
                    dVar8 = (double)CONCAT44(0xc0981b4f, *(u32 *)(a0 + 0x21a8));
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x21a8);
                    dVar8 = 1.8293200140039e-310;
                }
                if (cVar12 == '\0') {
                    fVar7 = SUB84(dVar8, 0) + (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar8 + dVar8, 0);
                }
                if (cVar13 == '\0') {
                    *(float *)(a0 + 0x21a8) = fVar7;
                    dVar8 = (double)CONCAT44(*(u32 *)(a0 + 0x21ac), in_fr3);
                    dVar10 = (double)CONCAT44(0x41700000, *(u32 *)(a0 + 0x22c));
                } else {
                    *(u64 *)(a0 + 0x21a8) = in_xd0;
                    dVar8 = *(double *)(a0 + 0x21ac);
                    dVar10 = 1.82412182335889e-310;
                }
                if (cVar12 == '\0') {
                    dVar8 = (double)CONCAT44(
                        (float)((u64)dVar8 >> 0x20) + SUB84(dVar10, 0) / (float)((u64)dVar10 >> 0x20), SUB84(dVar8, 0));
                } else {
                    dVar8 = dVar8 + dVar10 / dVar10;
                }
                if (cVar13 == '\0') {
                    *(int *)(a0 + 0x21ac) = (int)((u64)dVar8 >> 0x20);
                } else {
                    *(double *)(a0 + 0x21ac) = dVar8;
                }
            } else {
                if (cVar13 == '\0') {
                    *(u32 *)a3 = 0x42d96666;
                    uVar9 = CONCAT44(0xc1c9999a, fVar7);
                    *(u32 *)((int)a3 + 4) = 0xc1c9999a;
                } else {
                    *a3 = 0xc1c9999a42d96666;
                    uVar9 = 0x21a8c1c9999a;
                    *(u64 *)((int)a3 + 4) = 0x21a8c1c9999a;
                }
                if (cVar13 == '\0') {
                    *(u32 *)(a3 + 1) = 0;
                } else {
                    a3[1] = uVar9 & 0xffffffff;
                }
                Vec3_assign_f_023d7c(a0 + 0x21a8, iVar2);
            }
            if (cVar13 == '\0') {
                uVar9 = CONCAT44(0x43480000, *(u32 *)(a0 + 0x2194));
            } else {
                uVar9 = 0xbf80000043480000;
            }
            if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
                if (cVar13 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0;
                } else {
                    *(u64 *)(a0 + 0x28) = uVar9 & 0xffffffff;
                }
                Vec3_assign_f(a0 + 0x14, iVar2, a6, puVar4);
                *(int *)(a0 + 0x21b4) = *(int *)(a0 + 0x21b4) + 1;
            }
            CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, iVar2, a6, puVar4);
        } else if ((iVar1 == 3) && (iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, iVar2, a6, puVar4), iVar2 == 1)) {
            *(u32 *)(a0 + 0x2198) = 8;
            uVar5 = 0;
            *(u32 *)(a0 + 0x134) = 0;
            *(u32 *)(a0 + 0x21b4) = 0;
        }
        goto LAB_8c0aacb4;
    }
    Vec3_copy_assign(&uStack_68, &uStack_24);
    puVar4 = &uStack_68;
    a6 = afStack_44;
    iVar2 = game_vec_0a8f94(a0, a1, a6, puVar4);
    uVar3 = 0xffffffff;
    free_if_nonnull_wrap_102790(&uStack_68, 0xffffffff, a6, puVar4);
    if (iVar2 == 0) {
        *(int *)(a0 + 0x21b4) = *(int *)(a0 + 0x21b4) + 1;
        uVar9 = (u64)(u32)fVar7;
        if (cVar13 == '\0') {
            *(u32 *)(a0 + 0x28) = 0;
        } else {
            *(u64 *)(a0 + 0x28) = uVar9;
        }
        Vec3_make(a0 + 0x14, uVar3, a6, puVar4, auStack_78);
        Vec3_ctor_xyz(auStack_88, uVar3, a6, puVar4);
        uVar3 = a1;
        Vec3_sub(auStack_88, a1, a6, puVar4, auStack_98);
        ar4_00 = Vec3_length(auStack_98, uVar3, a6, puVar4);
        Vec3_make(ar4_00, uVar3, a6, puVar4, auStack_a8);
        Vec3_cos_angle(auStack_78, auStack_a8, a6, puVar4);
        if (cVar13 == '\0') {
            *(int *)(a0 + 0x22c) = (int)(uVar9 >> 0x20);
        } else {
            *(u64 *)(a0 + 0x22c) = uVar9;
        }
        uVar6 = (u32)uVar9;
        Vec3_dtor(auStack_a8, 0xffffffff, a6, puVar4);
        Vec3_dtor(auStack_98, 0xffffffff, a6, puVar4);
        Vec3_dtor(auStack_88, 0xffffffff, a6, puVar4);
        uVar3 = 0xffffffff;
        Vec3_dtor(auStack_78, 0xffffffff, a6, puVar4);
        Vec3_ctor_xyz(auStack_b8, uVar3, a6, puVar4);
        uVar3 = a1;
        Vec3_sub(auStack_b8, a1, a6, puVar4, auStack_c8);
        uVar3 = Vec3_length(auStack_c8, uVar3, a6, puVar4);
        Vec3_assign(a0 + 0x14, uVar3, a6, puVar4);
        Vec3_dtor(auStack_c8, 0xffffffff, a6, puVar4);
        Vec3_dtor(auStack_b8, 0xffffffff, a6, puVar4);
        uVar9 = (u64)uVar6;
        if (cVar13 == '\0') {
            *(u32 *)(a0 + 0x21a8) = 0;
        } else {
            *(u64 *)(a0 + 0x21a8) = uVar9;
        }
        Vec3_assign(a0 + 0x54, a1, a6, puVar4);
        uVar9 = uVar9 & 0xffffffff;
        if (cVar13 == '\0') {
            *(u32 *)(a0 + 0x2194) = 0;
        } else {
            *(u64 *)(a0 + 0x2194) = uVar9;
        }
        Vec3_ctor_xyz(auStack_d8, a1, a6, puVar4);
        iVar2 = a0 + 0x54;
        Vec3_sub(auStack_d8, iVar2, a6, puVar4, auStack_e8);
        Vec3_length_sq(auStack_e8, iVar2, a6, puVar4);
        if (cVar13 == '\0') {
            dVar8 = (double)CONCAT44(0x43480000, (int)(uVar9 >> 0x20));
            uVar9 = in_xd0;
        } else {
            dVar8 = -0.007812501958142093;
        }
        if (cVar12 == '\0') {
            fVar7 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
        } else {
            fVar7 = SUB84(dVar8 / dVar8, 0);
        }
        if (cVar13 == '\0') {
            *(float *)(a0 + 0x28) = fVar7;
        } else {
            *(u64 *)(a0 + 0x28) = uVar9;
        }
        Vec3_dtor(auStack_e8, 0xffffffff, a6, puVar4);
        Vec3_dtor(auStack_d8, 0xffffffff, a6, puVar4);
        puVar4 = NULL;
        a6 = (float *)0xffffffff;
        uVar3 = 0;
        CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar3, a6, puVar4);
    }
LAB_8c0aacb4:
    Vec3_dtor(afStack_44, 0xffffffff, a6, puVar4);
    Vec3_dtor(auStack_34, 0xffffffff, a6, puVar4);
    free_if_nonnull_wrap_102790(&uStack_24, 0xffffffff, a6, puVar4);
    return uVar5;
}

/*
 * game_vec_0aad1c  0x8c0aad1c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0aad1c(int a0, u8 *a1, int a2, u32 a3) {
    u32 uVar1;
    u8 *puVar2;
    int ar6_00;
    u32 unaff_r12;
    u32 unaff_r13;
    u32 unaff_r14;
    u64 *puVar3;
    float fVar4;
    double in_dr0;
    u32 uVar7;
    u64 uVar5;
    double dVar6;
    double in_dr14;
    double dVar8;
    u32 in_PR;
    u64 uStack_8;

    puVar3 = (u64 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14, 0), (u32)uStack_8);

    *(u32 *)((int)puVar3 + -4) = unaff_r14;
    *(u32 *)((int)puVar3 + -8) = unaff_r13;
    *(u32 *)((int)puVar3 + -0xc) = unaff_r12;
    *(u32 *)((int)puVar3 + -0x10) = in_PR;
    puVar2 = a1;
    ar6_00 = a2;
    Vec3_assign_f(a0 + 0x200, a1, a2, a3);
    (*(code *)(&Vec3_ctor_zero))((u8 *)((int)puVar3 + 0xb0 + -0xd0), puVar2, ar6_00, a3);
    (*(code *)(&Vec3_ctor_zero))((u8 *)((int)puVar3 + 0xa0 + -0xd0), puVar2, ar6_00, a3);
    (*(code *)(&Vec3_ctor_zero))((u8 *)((int)puVar3 + 0x90 + -0xd0), puVar2, ar6_00, a3);
    if ((*(int *)(a2 + 0x68) != 0) && ((int)((u32) * (u8 *)(0x1fc + a0) << 0x1e) < 0)) {
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar3 + 0xa0 + -0xd0), a1, ar6_00, a3);
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar3 + 0x90 + -0xd0), *(int *)(a2 + 0x68) + 4, ar6_00, a3);

        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)(*(int *)(a2 + 0x68) + 0x158));

        *(u8 **)((int)puVar3 + -0xd4) = (u8 *)((int)puVar3 + 0x80 + -0xd0);
        (*(code *)(&Vec3_sub))((u8 *)((int)puVar3 + 0xa4 + -0xd4), (u8 *)((int)puVar3 + 0x94 + -0xd4), ar6_00, a3,
                               *(u32 *)((int)puVar3 + -0xd4));
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar3 + 0xb0 + -0xd0), (u8 *)((int)puVar3 + 0x80 + -0xd0), ar6_00, a3);
        uVar1 = 0xffffffff;
        (*(code *)(&Vec3_dtor))((u8 *)((int)puVar3 + 0x80 + -0xd0), 0xffffffff, ar6_00, a3);
        (*(code *)(&Vec3_length_sq))((u8 *)((int)puVar3 + 0xb0 + -0xd0), uVar1, ar6_00, a3);
        uVar7 = (u32)((u64)in_dr0 >> 0x20);

        *(u32 *)((int)puVar3 + -0xb8) = uVar7;
        in_dr0 = (double)CONCAT44(uVar7, *(u32 *)(a0 + 0x48));

        fVar4 = SUB84(in_dr0, 0) + SUB84(in_dr14, 0);

        dVar6 = (double)CONCAT44(*(u32 *)((int)puVar3 + -0xb8), fVar4);

        fVar4 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);

        *(float *)((int)puVar3 + -0xb4) = fVar4;
        fVar4 = *(float *)((int)puVar3 + -0xb4);

        uVar5 = (u64)(u32)fVar4;
        if (fVar4 < 0.0) {

            uVar5 = CONCAT44(g_8c0ab0a4, fVar4);
            *(u32 *)((int)puVar3 + -0xb4) = g_8c0ab0a4;
        }
        (*(code *)(&Vec3_length))((u8 *)((int)puVar3 + 0xb0 + -0xd0), uVar1, ar6_00, a3);
        Vec3_length_sq(a0 + 4, uVar1, ar6_00, a3);

        *(int *)((int)puVar3 + -0xbc) = (int)(uVar5 >> 0x20);
        uVar5 = (u64) * (u32 *)((int)puVar3 + -0xbc);

        fVar4 = (float)uVar5;
        if (0.0 < fVar4) {
            *(u8 **)((int)puVar3 + -0xd4) = (u8 *)((int)puVar3 + -0x60);
            (*(code *)(&Vec3_scale))(a0 + 0x14, (&DATA_8c13b29c), ar6_00, a3, *(u32 *)((int)puVar3 + -0xd4));
            *(u8 **)((int)puVar3 + -0xd4) = (u8 *)((int)puVar3 + -0x70);
            puVar2 = (u8 *)((int)puVar3 + -0x60);
            (*(code *)(&Vec3_add))((u8 *)((int)puVar3 + 0xb4 + -0xd4), puVar2, ar6_00, a3,
                                   *(u32 *)((int)puVar3 + -0xd4));
            uVar1 = (*(code *)(&Vec3_length))((u8 *)((int)puVar3 + -0x70), puVar2, ar6_00, a3);
            *(u32 *)((int)puVar3 + -0xc0) = uVar1;
            (*(code *)(&Vec3_assign))((u8 *)((int)puVar3 + 0xb0 + -0xd0), *(u32 *)((int)puVar3 + -0xc0), ar6_00, a3);
            Vec3_dtor((u8 *)((int)puVar3 + -0x70), 0xffffffff, ar6_00, a3);
            Vec3_dtor((u8 *)((int)puVar3 + -0x60), 0xffffffff, ar6_00, a3);
        }
        (*(code *)(&Vec3_scale_assign))((u8 *)((int)puVar3 + 0xb0 + -0xd0), (u8 *)((int)puVar3 + -0xb4), ar6_00, a3);
        in_dr0 = (double)(u64)(u32)fVar4;

        *(u32 *)((int)puVar3 + 0xb4 + -0xd0) = 0;

        puVar2 = (u8 *)((int)puVar3 + 0xb0 + -0xd0);
        Vec3_assign(a0 + 0x200, puVar2, ar6_00, a3);
    }
    if ((*(int *)(a2 + 100) != 0) && ((int)((u32) * (u8 *)(0x1fc + a0) << 0x1d) < 0)) {
        (**(code **)(0x170 + *(int *)(*(int *)(a2 + 0x50) + 8)))(*(int *)(a2 + 0x50), puVar2, ar6_00, a3);

        *(int *)((int)puVar3 + -0xc4) = (int)((u64)in_dr0 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), *(u32 *)((int)puVar3 + -0xc4));
        dVar6 = (double)CONCAT44(g_8c0ab0c4, SUB84(in_dr0, 0));

        dVar8 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar6 >> 0x20));

        (*(code *)(&Vec3_assign))((u8 *)((int)puVar3 + 0xa0 + -0xd0), a1, ar6_00, a3);
        *(u8 **)((int)puVar3 + -0xd4) = (u8 *)((int)puVar3 + -0x80);
        (*(code *)(&Vec3_ctor_copy_wrap_02f670))(*(u32 *)(a2 + 0x50), a1, ar6_00, a3, *(u32 *)((int)puVar3 + -0xd4));
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar3 + 0x90 + -0xd0), (u8 *)((int)puVar3 + -0x80), ar6_00, a3);
        Vec3_dtor((u8 *)((int)puVar3 + -0x80), 0xffffffff, ar6_00, a3);
        *(u8 **)((int)puVar3 + -0xd4) = (u8 *)((int)puVar3 + -0x90);
        (*(code *)(&Vec3_sub))((u8 *)((int)puVar3 + 0xa4 + -0xd4), (u8 *)((int)puVar3 + 0x94 + -0xd4), ar6_00, a3,
                               *(u32 *)((int)puVar3 + -0xd4));
        (*(code *)(&Vec3_assign))((u8 *)((int)puVar3 + 0xb0 + -0xd0), (u8 *)((int)puVar3 + -0x90), ar6_00, a3);
        uVar1 = 0xffffffff;
        Vec3_dtor((u8 *)((int)puVar3 + -0x90), 0xffffffff, ar6_00, a3);
        (*(code *)(&Vec3_length_sq))((u8 *)((int)puVar3 + 0xb0 + -0xd0), uVar1, ar6_00, a3);
        uVar7 = (u32)((u64)dVar6 >> 0x20);

        *(u32 *)((int)puVar3 + -200) = uVar7;
        dVar6 = (double)CONCAT44(uVar7, *(u32 *)(a0 + 0x48));

        fVar4 = SUB84(dVar6, 0) + SUB84(dVar8, 0);

        dVar6 = (double)CONCAT44(*(u32 *)((int)puVar3 + -200), fVar4);

        fVar4 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);

        dVar6 = (double)CONCAT44(g_8c0ab0cc, fVar4);

        fVar4 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);

        *(float *)((int)puVar3 + -0xb4) = fVar4;
        fVar4 = *(float *)((int)puVar3 + -0xb4);

        uVar5 = (u64)(u32)fVar4;
        if (fVar4 < 0.0) {

            uVar5 = CONCAT44(g_8c0ab0a4, fVar4);
            *(u32 *)((int)puVar3 + -0xb4) = g_8c0ab0a4;
        }
        (*(code *)(&Vec3_length))((u8 *)((int)puVar3 + 0xb0 + -0xd0), uVar1, ar6_00, a3);
        Vec3_length_sq(a0 + 4, uVar1, ar6_00, a3);

        *(int *)((int)puVar3 + -0xcc) = (int)(uVar5 >> 0x20);
        uVar5 = (u64) * (u32 *)((int)puVar3 + -0xcc);

        if (0.0 < (float)uVar5) {
            *(u8 **)((int)puVar3 + -0xd4) = (u8 *)((int)puVar3 + -0xa0);
            (*(code *)(&Vec3_scale))(a0 + 0x14, (&DATA_8c13b2a0), ar6_00, a3, *(u32 *)((int)puVar3 + -0xd4));
            *(u8 **)((int)puVar3 + -0xd4) = (u8 *)((int)puVar3 + -0xb0);
            puVar2 = (u8 *)((int)puVar3 + -0xa0);
            (*(code *)(&Vec3_add))((u8 *)((int)puVar3 + 0xb4 + -0xd4), puVar2, ar6_00, a3,
                                   *(u32 *)((int)puVar3 + -0xd4));
            uVar1 = (*(code *)(&Vec3_length))((u8 *)((int)puVar3 + -0xb0), puVar2, ar6_00, a3);
            *(u32 *)((int)puVar3 + -0xd0) = uVar1;
            (*(code *)(&Vec3_assign))((u8 *)((int)puVar3 + 0xb0 + -0xd0), *(u32 *)((int)puVar3 + -0xd0), ar6_00, a3);
            Vec3_dtor((u8 *)((int)puVar3 + -0xb0), 0xffffffff, ar6_00, a3);
            Vec3_dtor((u8 *)((int)puVar3 + -0xa0), 0xffffffff, ar6_00, a3);
        }
        (*(code *)(&Vec3_scale_assign))((u8 *)((int)puVar3 + 0xb0 + -0xd0), (u8 *)((int)puVar3 + -0xb4), ar6_00, a3);
        (*(code *)(&Vec3_add_assign))(a0 + 0x200, (u8 *)((int)puVar3 + 0xb0 + -0xd0), ar6_00, a3);
    }
    (*(code *)(&Vec3_dtor))((u8 *)((int)puVar3 + 0x90 + -0xd0), 0xffffffff, ar6_00, a3);
    (*(code *)(&Vec3_dtor))((u8 *)((int)puVar3 + 0xa0 + -0xd0), 0xffffffff, ar6_00, a3);
    uVar1 = (*(code *)(&Vec3_dtor))((u8 *)((int)puVar3 + 0xb0 + -0xd0), 0xffffffff, ar6_00, a3);
    return uVar1;
}

/*
 * game_vec_0ab0d8  0x8c0ab0d8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_vec_0aa11c
 */
u32 game_vec_0ab0d8(int a0, u32 a1, u32 a2, u32 a3) {
    bool bVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    float fVar7;
    double in_dr0;
    u64 uVar8;
    u64 uVar9;
    double dVar10;
    u64 in_xd0;
    char cVar11;
    char cVar12;
    u8 auStack_b4[16];
    u8 auStack_a4[16];
    u8 auStack_94[16];
    u8 auStack_84[12];
    u8 auStack_78[16];
    u8 auStack_68[16];
    u8 auStack_58[16];
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[20];

    cVar12 = '\0';
    cVar11 = '\0';
    iVar2 = *(int *)(a0 + 0x21bc);
    if (iVar2 == 0) {
        a3 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0;
        CAnimBody_SetAnimation(a0 + 0xb0, 0, 0xffffffff, 0);
        uVar6 = SUB84(in_dr0, 0);
        CAnimBody_SetFrame(a0 + 0xb0, uVar4, uVar5, a3);
        if (cVar12 == '\0') {
            *(u32 *)(a0 + 0x22c) = 0;
            uVar8 = CONCAT44(*(u32 *)(a0 + 0x21ac), uVar6);
            *(u32 *)(a0 + 0x21a0) = *(u32 *)(a0 + 0x21ac);
        } else {
            *(u64 *)(a0 + 0x22c) = (u64)uVar6;
            uVar8 = *(u64 *)(a0 + 0x21ac);
            *(u64 *)(a0 + 0x21a0) = uVar8;
        }
        uVar4 = a1;
        Vec3_sub(a2, a1, uVar5, a3, auStack_28);
        uVar3 = Vec3_length(auStack_28, uVar4, uVar5, a3);
        Vec3_return_xyz(uVar3, uVar4, uVar5, a3, auStack_38);
        Vec3_return_xyz(a0 + 0x14, uVar4, uVar5, a3, auStack_48);
        Vec3_cos_angle(auStack_38, auStack_48, uVar5, a3);
        if (cVar12 == '\0') {
            *(int *)(a0 + 0x2194) = (int)((u64)uVar8 >> 0x20);
        } else {
            *(u64 *)(a0 + 0x2194) = uVar8;
        }
        Vec3_dtor(auStack_48, 0xffffffff, uVar5, a3);
        Vec3_dtor(auStack_38, 0xffffffff, uVar5, a3);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_28, 0xffffffff, uVar5, a3);
        Vec3_return_xyz(a0 + 0x14, uVar4, uVar5, a3, auStack_58);
        uVar4 = a1;
        Vec3_sub(a2, a1, uVar5, a3, auStack_68);
        uVar3 = Vec3_length(auStack_68, uVar4, uVar5, a3);
        Vec3_return_xyz(uVar3, uVar4, uVar5, a3, auStack_78);
        Vec3_set_xyz(auStack_84, uVar4, uVar5, a3);
        Vec3_rotate_euler_deg(auStack_78, auStack_84, uVar5, a3, auStack_94);
        Vec3_cos_angle(auStack_58, auStack_94, uVar5, a3);
        if (cVar12 == '\0') {
            in_dr0 = (double)CONCAT44(0x42b40000, (int)((u64)uVar8 >> 0x20));
        } else {
            in_dr0 = -7.961142730794258e-251;
            in_xd0 = uVar8;
        }
        bVar1 = cVar11 != '\0';
        fVar7 = SUB84(in_dr0, 0);
        uVar9 = (u64)in_dr0 >> 0x20;
        Vec3_dtor(auStack_94, 0xffffffff, uVar5, a3);
        object_dtor_delete(auStack_84, 0xffffffff, uVar5, a3);
        Vec3_dtor(auStack_78, 0xffffffff, uVar5, a3);
        Vec3_dtor(auStack_68, 0xffffffff, uVar5, a3);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_58, 0xffffffff, uVar5, a3);
        if (bVar1 || fVar7 <= (float)uVar9) {
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(0xbf800000, *(u32 *)(a0 + 0x2194));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x2194);
                dVar10 = 3.75058611530083e-312;
            }
            if (cVar11 == '\0') {
                in_dr0 = (double)(u64)(u32)(SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20));
            } else {
                in_dr0 = dVar10 * dVar10;
            }
            if (cVar12 == '\0') {
                *(int *)(a0 + 0x2194) = SUB84(in_dr0, 0);
            } else {
                *(u64 *)(a0 + 0x2194) = in_xd0;
            }
        }
        *(int *)(a0 + 0x21bc) = *(int *)(a0 + 0x21bc) + 1;
    } else {
        uVar4 = a1;
        uVar5 = a2;
        if (iVar2 != 1) {
            if (iVar2 == 2) {
                Vec3_distance_sq(a1, a2, a2, a3);
                if (cVar12 == '\0') {
                    in_dr0 = (double)((u64)in_dr0 >> 0x20);
                }
                if (cVar11 != '\0' || SUB84(in_dr0, 0) <= 1.0) {
                    if (cVar12 == '\0') {
                        *(u32 *)(a0 + 0x28) = 0;
                    } else {
                        *(u64 *)(a0 + 0x28) = (u64)in_dr0 & 0xffffffff;
                    }
                    *(int *)(a0 + 0x21bc) = *(int *)(a0 + 0x21bc) + 1;
                }
                CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, a2, uVar5, a3);
                return 1;
            }
            if (iVar2 != 3) {
                return 1;
            }
            iVar2 = CAnimBody_AdvanceFrame_wrapper(a0 + 0xb0, a1, a2, a3);
            if (iVar2 != 1) {
                return 1;
            }
            *(u32 *)(a0 + 0x21bc) = 0;
            return 0;
        }
    }
    fVar7 = SUB84(in_dr0, 0);
    if (cVar12 == '\0') {
        fVar7 = *(float *)(a0 + 0x2194);
    } else {
        in_xd0 = *(u64 *)(a0 + 0x2194);
    }
    if (cVar11 == '\0' && 0.0 < fVar7) {
        if (cVar12 == '\0') {
            fVar7 = *(float *)(a0 + 0x22c);
        } else {
            in_xd0 = *(u64 *)(a0 + 0x22c);
        }
        if (cVar11 == '\0') {
            fVar7 = fVar7 + 1.0;
        } else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) + (double)CONCAT44(0x3f800000, fVar7), 0);
        }
        if (cVar12 == '\0') {
            *(float *)(a0 + 0x22c) = fVar7;
            uVar9 = CONCAT44(*(u32 *)(a0 + 0x2194), *(u32 *)(a0 + 0x22c));
        } else {
            *(u64 *)(a0 + 0x22c) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x22c);
            uVar9 = *(u64 *)(a0 + 0x2194);
        }
        if (cVar11 == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20)) {
            if (cVar12 == '\0') {
                uVar9 = (u64) * (u32 *)(a0 + 0x21ac);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x21ac);
            }
            dVar10 = (double)CONCAT44(0x3f800000, (float)uVar9);
            if (cVar11 == '\0') {
                fVar7 = (float)uVar9 + 1.0;
            } else {
                fVar7 = SUB84(dVar10 + dVar10, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
            } else {
                *(u64 *)(a0 + 0x21ac) = in_xd0;
            }
        } else {
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x2194), *(u32 *)(a0 + 0x21a0));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x21a0);
                dVar10 = *(double *)(a0 + 0x2194);
            }
            if (cVar11 == '\0') {
                fVar7 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
            } else {
                fVar7 = SUB84(dVar10 + dVar10, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
            } else {
                *(u64 *)(a0 + 0x21ac) = in_xd0;
            }
            *(int *)(a0 + 0x21bc) = *(int *)(a0 + 0x21bc) + 1;
            Vec3_sub(a2, a1, uVar5, a3, auStack_a4);
            uVar4 = Vec3_length(auStack_a4, a1, uVar5, a3);
            Vec3_assign(a0 + 0x14, uVar4, uVar5, a3);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_a4, 0xffffffff, uVar5, a3);
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 0x28) = 0x3f333333;
            } else {
                *(u64 *)(a0 + 0x28) = 0x53f41fe43f333333;
            }
        }
    } else {
        if (cVar12 == '\0') {
            fVar7 = *(float *)(a0 + 0x22c);
        } else {
            in_xd0 = *(u64 *)(a0 + 0x22c);
        }
        if (cVar11 == '\0') {
            fVar7 = fVar7 - 1.0;
        } else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000, fVar7) - (double)CONCAT44(0x3f800000, fVar7), 0);
        }
        if (cVar12 == '\0') {
            *(float *)(a0 + 0x22c) = fVar7;
            uVar9 = CONCAT44(*(u32 *)(a0 + 0x2194), *(u32 *)(a0 + 0x22c));
        } else {
            *(u64 *)(a0 + 0x22c) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x22c);
            uVar9 = *(u64 *)(a0 + 0x2194);
        }
        if (cVar11 == '\0' && (float)(uVar9 >> 0x20) < (float)uVar9) {
            if (cVar12 == '\0') {
                uVar9 = (u64) * (u32 *)(a0 + 0x21ac);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x21ac);
            }
            dVar10 = (double)CONCAT44(0x3f800000, (float)uVar9);
            if (cVar11 == '\0') {
                fVar7 = (float)uVar9 - 1.0;
            } else {
                fVar7 = SUB84(dVar10 - dVar10, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
            } else {
                *(u64 *)(a0 + 0x21ac) = in_xd0;
            }
        } else {
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(*(u32 *)(a0 + 0x2194), *(u32 *)(a0 + 0x21a0));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x21a0);
                dVar10 = *(double *)(a0 + 0x2194);
            }
            if (cVar11 == '\0') {
                fVar7 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
            } else {
                fVar7 = SUB84(dVar10 + dVar10, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0x21ac) = fVar7;
            } else {
                *(u64 *)(a0 + 0x21ac) = in_xd0;
            }
            *(int *)(a0 + 0x21bc) = *(int *)(a0 + 0x21bc) + 1;
            Vec3_sub(a2, a1, uVar5, a3, auStack_b4);
            uVar4 = Vec3_length(auStack_b4, a1, uVar5, a3);
            Vec3_assign(a0 + 0x14, uVar4, uVar5, a3);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_b4, 0xffffffff, uVar5, a3);
            if (cVar12 == '\0') {
                *(u32 *)(a0 + 0x28) = 0x3f333333;
            } else {
                *(u64 *)(a0 + 0x28) = 0x53f11fe13f333333;
            }
        }
    }
    CAnimBody_AdvanceFrame_wrap(a0 + 0xb0, uVar4, uVar5, a3);
    return 1;
}

/*
 * static_init_vec3s_285840  0x8c0ab5c0
 * static initialiser: builds 4 global Vec3 constants (8c285840..8c285864) and registers their destructors, then more
 * set-up
 */
u32 static_init_vec3s_285840(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u8 *puVar3;
    u32 ar7_00;
    u8 auStack_1c[28];

    uVar1 = Vec3_ctor_xyz((&DATA_8c126238), a1, a2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c285840;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c285840, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126248), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c28584c;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c28584c, a3);
    uVar1 = Vec3_ctor_xyz((&DATA_8c126258), puVar3, uVar2, a3);
    puVar3 = (&Vec3_dtor);
    uVar2 = 0x8c285858;
    global_list_push(uVar1, (&Vec3_dtor), 0x8c285858, a3);
    uVar2 = Vec3_ctor_xyz((&DATA_8c126268), puVar3, uVar2, a3);
    global_list_push(uVar2, (&Vec3_dtor), 0x8c285864, a3);
    uVar2 = 4;
    (*(code *)(&vec_new_array))(0x8c28587c, (&clear_field_0_wrap_015b94), (&free_if_nonnull_wrap_0247b0), 4, 9);
    global_list_push(0, (&destroy_array_8c28587c), 0x8c285870, uVar2);
    ar7_00 = 4;
    (*(code *)(&vec_new_array))(0x8c2858ac, (&clear_field_0_wrap_015bc8), (&free_if_nonnull_wrap_03a3dc), 4, 9);
    puVar3 = (&destroy_array_8c2858ac);
    uVar2 = 0x8c2858a0;
    global_list_push(0, (&destroy_array_8c2858ac), 0x8c2858a0, ar7_00);
    uVar1 = set_6_floats(auStack_1c);
    uVar2 = copy_6_words(0x8c2858d0, uVar1);
    return uVar2;
}

/*
 * destroy_array_8c2858ac  0x8c0ab718
 * destroys the global array at 0x8c2858ac
 */
u32 destroy_array_8c2858ac(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c2858ac, free_if_nonnull_wrap_03a3dc, 4, 9);
    return uVar1;
}

/*
 * destroy_array_8c28587c  0x8c0ab73c
 * destroys the global array at 0x8c28587c
 */
u32 destroy_array_8c28587c(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c28587c, free_if_nonnull_wrap_0247b0, 4, 9);
    return uVar1;
}

/*
 * Class_12b0c4_ctor  0x8c0ab760
 * Class_129c70_ctor with vtable 8c12b0c4 (SpiderLine state)
 * called by: CSpiderLine_ctor
 */
u32 *Class_12b0c4_ctor(u32 *a0, u32 a1, u32 a2) {
    Class_129c70_ctor(a0, a1, a2);
    *a0 = (&DATA_8c12b0c4);
    *(u32 *)(0x9c + (int)a0) = 0;
    *(u32 *)(0xa0 + (int)a0) = 6;
    *(u32 *)(0xa4 + (int)a0) = 6;
    *(u32 *)(0xa8 + (int)a0) = 6;
    return a0;
}

/*
 * Class_12b0c4_dtor  0x8c0ab7ac
 * stores the vtable 0x8c12b0c4
 * called by: Class_12aeec_m0_0a4694
 */
u32 *Class_12b0c4_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b0c4;
        ar5_00 = 0;
        Class_129c70_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b0c4_m1_0ab7f4  0x8c0ab7f4
 */
u32 Class_12b0c4_m1_0ab7f4(int a0, int *a1, int *a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    u8 *puVar2;
    u8 *puVar3;
    u8 *puVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    int *ar6_00;
    u8 auStack_50[32];
    u8 auStack_30[20];

    Vec3_ctor_zero(auStack_30, a1, a2);
    puVar4 = auStack_50;
    puVar2 = &g_8c13b394;
    iVar5 = 0x10;
    do {
        puVar3 = puVar2 + 1;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 2;
        puVar4[1] = *puVar3;
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_8c13b388 = *(u32 *)(a0 + 0xa0);
    g_8c13b38c = *(u32 *)(a0 + 0xa4);
    g_8c13b390 = *(u32 *)(a0 + 0xa8);
    piVar7 = a1;
    ar6_00 = a2;
    Class_12b0c4_sequence_step(a0, a1, a2, a3);
    uVar1 = get_field_45_s8(a2[3]);
    if (((char)uVar1 == '\x01') && (iVar5 = get_field_24_026024(a1, piVar7, ar6_00, a3), iVar5 == 1)) {
        iVar6 = a2[3];
        iVar5 = get_field_48_0abc28(iVar6);
        if (iVar5 != 0) {
            uVar1 = rand();
            piVar7 = (int *)0x12c;
            iVar5 = libgcc_divide_helper_01031c(uVar1, 300, ar6_00);
            if (iVar5 < 1) {
                uVar1 = get_field_48_0abc28(a2[3]);
                *(u32 *)(a0 + 0x6c) = uVar1;
                if (*(int *)(a0 + 0x6c) != 0) {
                    *(u32 *)(a0 + 4) = 6;
                    *(u32 *)(a0 + 0x40) = 3;
                    *(u32 *)(a0 + 8) = 0x55;
                    *(u32 *)(a0 + 0xc) = 0;
                    uVar1 = 699;
                    list5_push(a0, 699);
                    (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x74))(*(int *)(a0 + 0x6c), uVar1, ar6_00, a3);
                    piVar7 = NULL;
                    set_field_48_0996e4(a2[3], 0);
                }
            }
        }
    }
    iVar5 = get_field_24_026024(a1, piVar7, ar6_00, a3);
    if (iVar5 == 0) {
        iVar5 = a2[6];
        uVar1 = get_field_a0_035724(iVar5, piVar7);
        if ((u8)uVar1 < 2) {
            *(u8 *)(a0 + 0x98) = 1;
        } else {
            uVar1 = rand();
            piVar7 = (int *)0x3e8;
            iVar5 = libgcc_divide_helper_01031c(uVar1, 1000, ar6_00);
            if ((iVar5 < 1) && (*(int *)(a0 + 4) != 0xb)) {
                *(u32 *)(a0 + 4) = 0xb;
                *(u32 *)(a0 + 8) = 0x5a;
                *(u32 *)(a0 + 0xc) = 0;
                *(u32 *)(a0 + 0x38) = 2;
                Class_12b0c4_vec_0ac1f0(a0, a1, ar6_00, a3);
                piVar7 = (int *)0x4a6;
                list5_push(a0, 0x4a6);
            }
        }
    }
    iVar5 = (**(code **)(*(int *)(*a2 + 8) + 0xb8))(*a2, piVar7, ar6_00, a3);
    if (iVar5 == 1) {
        if (*(int *)(a0 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), piVar7, ar6_00, a3);
            *(u32 *)(a0 + 0x6c) = 0;
        }
        iVar5 = get_field_6c_02f46c(*a2);
        if ((iVar5 == 0) && (iVar5 = get_field_70_05f490(*a2), iVar5 == 0)) {
            uVar1 = (**(code **)(*a1 + 0x148))(a1, piVar7, ar6_00, a3);
            piVar7 = NULL;
            set_g_8c438470(uVar1, 0);
            mask_74_7fffffff(*a2);
        }
    }
    get_field_124_027930(a2[2], piVar7, ar6_00, a3);
    get_field_40_05eea0(a0);
    piVar7 = a2;
    Class_129c70_uses_get_field_4_02f20c(a0, a2, ar6_00, a3);
    get_field_124_027930(a2[2], piVar7, ar6_00, a3);
    get_field_40_05eea0(a0);
    uVar1 = get_field_4_05eed8(a0);
    piVar7 = a2;
    Class_12b0c4_uses_set_field_38_0abe84(a0, a1, a2, uVar1);
    get_field_124_027930(a2[2], a1, piVar7, uVar1);
    get_field_40_05eea0(a0);
    if ((*(char *)(a0 + 0x98) == '\x01') && ((*(int *)(a0 + 0x40) != 4 || (*(int *)(a0 + 4) != 1)))) {
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 4) = 1;
        *(u32 *)(a0 + 8) = 99;
        *(u32 *)(a0 + 0x40) = 4;
        if (*(int *)(a0 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, piVar7, uVar1);
            *(u32 *)(a0 + 0x6c) = 0;
        }
    }
    Class_12b0c4_uses_get_field_8_0ac19c(a0);
    set_field_130(a2[2]);
    iVar5 = get_field_124_027930(a2[2], a1, piVar7, uVar1);
    iVar6 = get_field_40_05eea0(a0);
    if (iVar5 != iVar6) {
        ar5_00 = get_field_40_05eea0(a0);
        piVar7 = (int *)0x1;
        timer_uses_reset_fields_2c_6c_031b08(a2[2], ar5_00, 1, uVar1);
    }
    uVar1 = Vec3_dtor(auStack_30, 0xffffffff, piVar7, uVar1);
    return uVar1;
}

/*
 * set_g_8c438470  0x8c0abc1c
 * stores byte a1 in 8c438470
 * called by: Class_12b0c4_m1_0ab7f4, Class_12b0c4_uses_set_g_8c438470_0ac068
 */
u8 *set_g_8c438470(u32 unused_a0, u32 a1) {
    u8 *puVar1;

    puVar1 = 0x8c438470;
    g_8c438470 = (u8)a1;
    return puVar1;
}

/*
 * get_field_48_0abc28  0x8c0abc28
 * called by: Class_12b0c4_m1_0ab7f4
 */
u32 get_field_48_0abc28(int a0) {
    return *(u32 *)(a0 + 0x48);
}

/*
 * get_field_45_s8  0x8c0abc30
 * called by: Class_12b0c4_m1_0ab7f4
 */
int get_field_45_s8(int a0) {
    return (int)*(char *)(a0 + 0x45);
}

/*
 * Class_12b0c4_m2_0abc38  0x8c0abc38
 */
u32 Class_12b0c4_m2_0abc38(int a0, int *a1, int *a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar5_00;
    int iVar3;
    u8 *puVar4;
    u8 *puVar5;
    u8 *puVar6;
    int *piVar7;
    int *piVar8;
    u8 auStack_4c[32];
    u8 auStack_2c[20];

    piVar8 = a1;
    piVar7 = a2;
    Vec3_ctor_zero(auStack_2c, a1, a2);
    puVar6 = auStack_4c;
    iVar3 = 0x10;
    puVar5 = (&DATA_8c13b3b4);
    do {
        puVar4 = puVar5 + 1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar6[1] = *puVar4;
        puVar6 = puVar6 + 2;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(u32 *)((&DATA_8c13b2ec) + 0x9c) = *(u32 *)(0xa0 + a0);
    *(u32 *)((&DATA_8c13b2ec) + 0xa0) = *(u32 *)(0xa4 + a0);
    *(u32 *)((&DATA_8c13b2ec) + 0xa4) = *(u32 *)(0xa8 + a0);
    get_field_18_02d1a0(a2[1] + 0xa8);
    get_field_24_026024(a1, piVar8, piVar7, a3);
    (**(code **)(0x1a8 + *a1))(a1, piVar8, piVar7, a3);
    iVar3 = get_field_18_02d1a0(a2[1] + 0xa8);
    if (((0 < iVar3) && (iVar3 = get_field_24_026024(a1, piVar8, piVar7, a3), iVar3 == 1)) &&
        (iVar3 = (**(code **)(0x1a8 + *a1))(a1, piVar8, piVar7, a3), iVar3 == 0)) {
        (**(code **)(0xbc + *a1))(a1, piVar8, piVar7, a3);
        get_field_18_02d1a0(a2[1] + 0xa8);
    }
    piVar8 = a1;
    piVar7 = a2;
    Class_12b0c4_sequence_step(a0, a1, a2, a3);
    iVar3 = (**(code **)(0xb8 + *(int *)(*a2 + 8)))(*a2, piVar8, piVar7, a3);
    if (iVar3 == 1) {
        if (*(int *)(a0 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), piVar8, piVar7, a3);
            *(u32 *)(a0 + 0x6c) = 0;
        }
        iVar3 = get_field_6c_02f46c(*a2);
        if ((iVar3 == 0) && (iVar3 = get_field_70_05f490(*a2), iVar3 == 0)) {
            mask_74_7fffffff(*a2);
        }
    }
    piVar8 = a2;
    Class_129c70_uses_get_field_4_02f20c(a0, a2, piVar7, a3);
    uVar1 = get_field_4_05eed8(a0);
    piVar8 = a2;
    Class_12b0c4_uses_set_field_38_0abe84(a0, a1, a2, uVar1);
    Class_12b0c4_uses_get_field_8_0ac19c(a0);
    set_field_130(a2[2]);
    iVar3 = get_field_124_027930(a2[2], a1, piVar8, uVar1);
    iVar2 = get_field_40_05eea0(a0);
    if (iVar3 != iVar2) {
        ar5_00 = get_field_40_05eea0(a0);
        piVar8 = (int *)0x1;
        timer_uses_reset_fields_2c_6c_031b08(a2[2], ar5_00, 1, uVar1);
    }
    uVar1 = Vec3_dtor(auStack_2c, 0xffffffff, piVar8, uVar1);
    return uVar1;
}

/*
 * ret_const_0_0abe7c  0x8c0abe7c
 */
u32 ret_const_0_0abe7c(void) {
    return 0;
}

/*
 * Class_12b0c4_uses_set_field_38_0abe84  0x8c0abe84
 * area name: only called from Class_12b0c4 methods; behaviour name: its main named callee is set_field_38_02f404
 * called by: Class_12b0c4_m1_0ab7f4, Class_12b0c4_m2_0abc38
 */
u32 Class_12b0c4_uses_set_field_38_0abe84(int a0, u32 a1, int *a2, int a3) {
    int iVar1;
    int iVar2;
    u32 ar5_00;
    int *ar6_00;

    ar5_00 = a1;
    ar6_00 = a2;
    iVar2 = a3;
    if (*(int *)(a0 + 0x38) == 2) {
        *(u32 *)(a0 + 0xc) = 0;
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13b2ec + *(int *)(a0 + 0xc) * 4 + a3 * 0xc);
        Class_12b0c4_uses_set_g_8c438470_0ac068(a0, a1, a2, a3);
        ar5_00 = 1;
        set_field_38_02f404(a0, 1);
    }
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 0) {
        Class_12b0c4_vec_0ac1f0(a0, a1, ar6_00, a3);
    } else if (iVar1 == 1) {
        set_field_38_02f404(a0, 3);
    } else if (iVar1 == 3) {
        iVar2 = game_uses_get_field_6c_02f414(a0, ar5_00, ar6_00, a3);
        if ((iVar2 == 1) && (*(int *)(a0 + 0x88) == 1)) {
            iVar2 = get_field_6c_02f46c(*(u32 *)(a0 + 0x6c));
            take_from_field_6c(*(u32 *)(a0 + 0x6c), iVar2 + -1, ar6_00, a3);
            *(u32 *)(a0 + 0x88) = 0;
        }
    } else if ((iVar1 == 4) && (iVar2 = (**(code **)(*(int *)(*a2 + 8) + 0xb4))(*a2, ar5_00, ar6_00, a3), iVar2 == 1)) {
        iVar2 = *a2;
        mask_74_fffffffe(iVar2);
        game_calls_test_0c4e2c(iVar2, ar5_00, ar6_00, a3);
    }
    return 1;
}

/*
 * Class_12b0c4_sequence_step  0x8c0abfb0
 * at the end of a step advances the three-step sequence from the table at 8c13b2ec (row +4); step value 6 or the third
 * step ends it called by: Class_12b0c4_m1_0ab7f4, Class_12b0c4_m2_0abc38
 */
int Class_12b0c4_sequence_step(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar6_00;
    int in_stack_ffffffe4;

    if (*(int *)(a0 + 0x3c) == 0) {
        ar6_00 = a2;
        Class_12b0c4_uses_set_field_45_u8_0ac124(a0, a1, a2, a3);
        *(int *)(a0 + 0xc) = *(int *)(a0 + 0xc) + 1;
        in_stack_ffffffe4 = *(int *)(a0 + 0xc);
        *(u32 *)(a0 + 0x40) = *(u32 *)(&g_8c13b2ec + in_stack_ffffffe4 * 4 + *(int *)(a0 + 4) * 0xc);
        if ((*(int *)(a0 + 0x40) == 6) || (*(int *)(a0 + 0xc) == 3)) {
            *(u32 *)(a0 + 0xc) = 0;
            set_field_38_02f404(a0, 0);
            a2 = ar6_00;
        } else {
            set_field_38_02f404(a0, 3);
            Class_12b0c4_uses_set_g_8c438470_0ac068(a0, a1, a2, a3);
        }
    }
    iVar1 = *(int *)(a0 + 0x3c);
    if (iVar1 == 2) {
        iVar1 = set_field_38_02f404(a0, 2);
    }
    return iVar1;
}

/*
 * Class_12b0c4_uses_set_g_8c438470_0ac068  0x8c0ac068
 * area name: only called from Class_12b0c4 methods; behaviour name: its main named callee is set_g_8c438470
 * called by: Class_12b0c4_sequence_step, Class_12b0c4_uses_set_field_38_0abe84
 */
int Class_12b0c4_uses_set_g_8c438470_0ac068(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar4_00;
    int *a5;
    u32 ar5_00;

    a5 = a1;
    if ((*(int *)(a0 + 0x38) == 2) && (*(int *)(a0 + 0x6c) != 0)) {
        (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), a1, a2, a3);
        *(u32 *)(a0 + 0x6c) = 0;
    }
    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 0) {
        iVar1 = Class_12b0c4_vec_0ac1f0(a0, a1, a2, a3);
    } else if (iVar1 == 4) {
        ar4_00 = (**(code **)(0x148 + *a1))(a1, a5, a2, a3);
        ar5_00 = 0;
        set_g_8c438470(ar4_00, 0);
        iVar1 = game_uses_get_field_6c_02f414(a0, ar5_00, a2, a3);
        if ((iVar1 == 1) && (iVar1 = 0, *(int *)(a0 + 0x6c) != 0)) {
            (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), ar5_00, a2, a3);
            iVar1 = 0x6c;
            *(u32 *)(a0 + 0x6c) = 0;
        }
    }
    return iVar1;
}

/*
 * Class_12b0c4_uses_set_field_45_u8_0ac124  0x8c0ac124
 * area name: only called from Class_12b0c4 methods; behaviour name: its main named callee is set_field_45_u8
 * called by: Class_12b0c4_sequence_step
 */
int Class_12b0c4_uses_set_field_45_u8_0ac124(int a0, u32 unused_a1, int a2, u32 a3) {
    int iVar1;
    u32 ar5_00;

    iVar1 = *(int *)(a0 + 0x40);
    if (iVar1 == 3) {
        ar5_00 = 0;
        set_field_45_u8(*(u32 *)(a2 + 0xc), 0);
        iVar1 = game_uses_get_field_6c_02f414(a0, ar5_00, a2, a3);
        if (iVar1 == 1) {
            if (*(int *)(a0 + 0x6c) != 0) {
                (**(code **)(*(int *)(*(int *)(a0 + 0x6c) + 8) + 0x78))(*(int *)(a0 + 0x6c), ar5_00, a2, a3);
                *(u32 *)(a0 + 0x6c) = 0;
            }
            iVar1 = 0x88;
            *(u32 *)(0x88 + a0) = 0;
        }
    }
    return iVar1;
}

/*
 * Class_12b0c4_uses_get_field_8_0ac19c  0x8c0ac19c
 * area name: only called from Class_12b0c4 methods; behaviour name: its main named callee is get_field_8_066620
 * called by: Class_12b0c4_m1_0ab7f4, Class_12b0c4_m2_0abc38
 */
u32 *Class_12b0c4_uses_get_field_8_0ac19c(int a0) {
    u32 *puVar1;

    if (*(int *)(a0 + 4) == 2) {
        get_field_8_066620(a0);
        puVar1 = &g_8c0ac1e8;
    } else {
        get_field_8_066620(a0);
        puVar1 = &g_8c0ac1ec;
    }
    return puVar1;
}

/*
 * Class_12b0c4_vec_0ac1f0  0x8c0ac1f0
 * area name: only called from Class_12b0c4 methods; behaviour name: mostly calls vec functions
 * called by: Class_12b0c4_m1_0ab7f4, Class_12b0c4_uses_set_field_38_0abe84, Class_12b0c4_uses_set_g_8c438470_0ac068
 */
u32 Class_12b0c4_vec_0ac1f0(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    int *ar5_00;
    u8 *ar5_01;
    u32 uVar4;
    u32 *a6;
    u8 *ar6_00;
    u32 *a7;
    u32 *puVar5;
    float fVar6;
    double dVar7;
    float fVar8;
    u32 in_fr3;
    u32 uVar9;
    double dVar10;
    char cVar11;
    char cVar12;
    u64 uStack_c0;
    u32 uStack_b0;
    u8 auStack_ac[4];
    u8 auStack_a8[4];
    u32 uStack_a4;
    u32 uStack_a0;
    u32 uStack_9c;
    u32 auStack_98[4];
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

    cVar12 = '\0';
    cVar11 = '\0';
    ar5_00 = a1;
    Vec3_ctor_zero(&uStack_20, a1, a2);
    Vec3_ctor_xyz(auStack_30, ar5_00, a2, a3);
    Vec3_ctor_xyz(auStack_40, ar5_00, a2, a3);
    a7 = &uStack_a4;
    a6 = &uStack_a0;
    puVar5 = &uStack_9c;
    (**(code **)(*a1 + 0x120))(a1, puVar5, a6, a7);
    iVar2 = a0;
    iVar1 = get_field_4_05eed8(a0);
    if (iVar1 != 1) {
        if (iVar1 == 8) {
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(uStack_9c, in_fr3);
                dVar7 = (double)CONCAT44(0x3dcccccd, uStack_9c);
            } else {
                dVar10 = (double)CONCAT44(auStack_98[0], uStack_9c);
                dVar7 = 1.3411048210842936e-08;
            }
            if (cVar11 == '\0') {
                dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) - SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20),
                                          SUB84(dVar10, 0));
            } else {
                dVar10 = dVar10 - dVar7 * dVar7;
            }
            uStack_9c = SUB84(dVar10, 0);
            uVar3 = (u32)((u64)dVar10 >> 0x20);
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(uStack_a0, uStack_9c);
                dVar7 = (double)CONCAT44(0x3e4ccccd, uStack_a0);
                uStack_9c = uVar3;
            } else {
                dVar10 = (double)CONCAT44(uStack_9c, uStack_a0);
                dVar7 = -7.532505548438758e-251;
                auStack_98[0] = uVar3;
            }
            if (cVar11 == '\0') {
                dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) - SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20),
                                          SUB84(dVar10, 0));
            } else {
                dVar10 = dVar10 - dVar7 * dVar7;
            }
            uStack_a0 = SUB84(dVar10, 0);
            uVar3 = (u32)((u64)dVar10 >> 0x20);
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(uStack_a4, uStack_a0);
                dVar7 = (double)CONCAT44(0x3dcccccd, uStack_a4);
                uStack_a0 = uVar3;
            } else {
                dVar10 = (double)CONCAT44(uStack_a0, uStack_a4);
                dVar7 = 1.3411048210842936e-08;
                uStack_9c = uVar3;
            }
            if (cVar11 == '\0') {
                fVar8 = (float)((u64)dVar7 >> 0x20);
                fVar6 = SUB84(dVar7, 0) * fVar8;
                dVar7 = (double)CONCAT44(fVar8, fVar6);
                dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) - fVar6, SUB84(dVar10, 0));
            } else {
                dVar7 = dVar7 * dVar7;
                dVar10 = dVar10 - dVar7;
            }
            uVar3 = SUB84(dVar7, 0);
            uVar4 = (u32)((u64)dVar10 >> 0x20);
            uStack_a4 = uVar4;
            if (cVar12 != '\0') {
                uStack_a4 = SUB84(dVar10, 0);
                uStack_a0 = uVar4;
            }
            uVar4 = rand();
            uVar9 = SUB84(dVar10, 0);
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(uStack_9c, uVar3);
            } else {
                dVar10 = (double)CONCAT44(auStack_98[0], uStack_9c);
            }
            if (cVar11 == '\0') {
                iVar2 = (int)(float)((u64)dVar10 >> 0x20);
            } else {
                iVar2 = (int)dVar10;
            }
            iVar1 = libgcc_divide_helper_01031c(uVar4, iVar2, a6);
            if (cVar11 == '\0') {
                dVar10 = (double)CONCAT44((float)iVar1, SUB84(dVar10, 0));
            } else {
                dVar10 = (double)iVar1;
            }
            if (cVar12 == '\0') {
                *(int *)(a0 + 0x28) = (int)((u64)dVar10 >> 0x20);
            } else {
                *(double *)(a0 + 0x28) = dVar10;
            }
            uVar3 = rand();
            (**(code **)(*a1 + 0x180))(a1, iVar2, a6, a7);
            if (cVar12 == '\0') {
                uStack_c0 = (double)CONCAT44(uVar3, (int)((u64)dVar10 >> 0x20));
                dVar7 = (double)CONCAT44(uStack_a0, SUB84(dVar10, 0));
            } else {
                dVar7 = (double)CONCAT44(uStack_9c, uStack_a0);
                uStack_c0 = dVar10;
            }
            if (cVar11 == '\0') {
                iVar2 = (int)(float)((u64)dVar7 >> 0x20);
            } else {
                iVar2 = (int)dVar7;
            }
            uVar3 = uStack_c0._4_4_;
            iVar1 = libgcc_divide_helper_01031c(uStack_c0._4_4_, iVar2, a6);
            if (cVar11 == '\0') {
                dVar10 = (double)CONCAT44((float)iVar1, uVar9);
            } else {
                dVar10 = (double)iVar1;
            }
            if (cVar12 == '\0') {
                dVar7 = (double)CONCAT44(0x42c80000, (u32)uStack_c0);
            } else {
                dVar7 = 6.03200357491229e-312;
            }
            if (cVar11 == '\0') {
                fVar8 = (float)((u64)dVar7 >> 0x20);
                fVar6 = SUB84(dVar7, 0) / fVar8;
                dVar7 = (double)CONCAT44(fVar8, fVar6);
                dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) * fVar6, SUB84(dVar10, 0));
            } else {
                dVar7 = dVar7 / dVar7;
                dVar10 = dVar10 * dVar7;
            }
            uVar4 = SUB84(dVar7, 0);
            if (cVar12 == '\0') {
                *(int *)(a0 + 0x2c) = (int)((u64)dVar10 >> 0x20);
            } else {
                *(double *)(a0 + 0x2c) = dVar10;
            }
            uVar3 = rand();
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(uStack_a4, uVar4);
            } else {
                dVar10 = (double)CONCAT44(uStack_a0, uStack_a4);
            }
            if (cVar11 == '\0') {
                iVar2 = (int)(float)((u64)dVar10 >> 0x20);
            } else {
                iVar2 = (int)dVar10;
            }
            iVar2 = libgcc_divide_helper_01031c(uVar3, iVar2, a6);
            if (cVar11 == '\0') {
                dVar10 = (double)CONCAT44((float)iVar2, SUB84(dVar10, 0));
            } else {
                dVar10 = (double)iVar2;
            }
            if (cVar12 == '\0') {
                *(int *)(a0 + 0x30) = (int)((u64)dVar10 >> 0x20);
            } else {
                *(double *)(a0 + 0x30) = dVar10;
            }
        } else if (iVar1 == 0xb) {
            iVar2 = (**(code **)(*a1 + 0x11c))(a1, 5, a6, a7);
            if (iVar2 == 0) {
                set_field_38_02f404(a0, 2);
                if (cVar12 == '\0') {
                    *(u32 *)(a0 + 0x28) = 0x43fa0000;
                    *(u32 *)(a0 + 0x2c) = 0x43fa0000;
                    *(u32 *)(a0 + 0x30) = 0x43fa0000;
                } else {
                    *(u64 *)(a0 + 0x28) = 0x10043fa0000;
                    *(u64 *)(a0 + 0x2c) = 0x10043fa0000;
                    *(u64 *)(a0 + 0x30) = 0x10043fa0000;
                }
            } else {
                for (puVar5 = NULL; iVar2 = (**(code **)(*a1 + 0x11c))(a1, 5, a6, a7), (int)puVar5 < iVar2;
                     puVar5 = (u32 *)((int)puVar5 + 1)) {
                    uVar3 = (**(code **)(*a1 + 0x100))(a1, 5, puVar5, a7);
                    a7 = &uStack_b0;
                    ar6_00 = auStack_ac;
                    ar5_01 = auStack_a8;
                    get_vec3_field_50(uVar3, ar5_01, ar6_00, a7);
                    Vec3_set_xyz(auStack_4c, ar5_01, ar6_00, a7);
                    vec3_copy_8c02b5fc(auStack_68, auStack_4c, ar6_00);
                    Vec3_rotate_euler_deg(auStack_30, auStack_68, ar6_00, a7, auStack_78);
                    Vec3_ctor_copy(auStack_5c, auStack_78, ar6_00, a7);
                    Vec3_dtor(auStack_78, 0xffffffff, ar6_00, a7);
                    object_dtor_delete(auStack_68, 0xffffffff, ar6_00, a7);
                    uVar4 = 5;
                    a6 = puVar5;
                    uVar3 = (**(code **)(*a1 + 0x100))(a1, 5, puVar5, a7);
                    Vec3_ctor_copy_wrap_02f670(uVar3, uVar4, a6, a7, auStack_88);
                    Vec3_add(auStack_88, auStack_5c, a6, a7, auStack_98);
                    Vec3_assign(&uStack_20, auStack_98, a6, a7);
                    Vec3_dtor(auStack_98, 0xffffffff, a6, a7);
                    Vec3_dtor(auStack_88, 0xffffffff, a6, a7);
                    if (cVar12 == '\0') {
                        *(u32 *)(a0 + 0x28) = uStack_20;
                        *(u32 *)(a0 + 0x2c) = uStack_1c;
                        *(u32 *)(a0 + 0x30) = uStack_18;
                    } else {
                        *(u64 *)(a0 + 0x28) = CONCAT44(uStack_1c, uStack_20);
                        *(u64 *)(a0 + 0x2c) = CONCAT44(uStack_18, uStack_1c);
                        *(u64 *)(a0 + 0x30) = CONCAT44(uStack_14, uStack_18);
                    }
                    Vec3_dtor(auStack_5c, 0xffffffff, a6, a7);
                    object_dtor_delete(auStack_4c, 0xffffffff, a6, a7);
                }
            }
        }
    }
    Vec3_dtor(auStack_40, 0xffffffff, a6, a7);
    Vec3_dtor(auStack_30, 0xffffffff, a6, a7);
    uVar3 = Vec3_dtor(&uStack_20, 0xffffffff, a6, a7);
    return uVar3;
}

/*
 * game_update_fields_0ac598  0x8c0ac598
 * area name: game code; nothing names its area yet; behaviour name: conditionally writes members
 */
int game_update_fields_0ac598(int a0, u8 *a1) {
    int iVar1;

    iVar1 = 0x98;
    *(u8 *)(0x98 + a0) = *a1;
    return iVar1;
}

/*
 * game_calc_0ac5a8  0x8c0ac5a8
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 */
int game_calc_0ac5a8(int a0, char *a1) {
    char cVar1;

    cVar1 = *(char *)(0x98 + a0);
    *a1 = cVar1;
    return (int)cVar1;
}

/*
 * static_init_vec3s_2858f8  0x8c0ac5b8
 * static initialiser: builds 5 global Vec3 constants (8c2858f8..8c285928) and registers their destructors
 */
u32 static_init_vec3s_2858f8(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126278, a1, a2, a3);
    uVar3 = 0x8c2858f8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c2858f8, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126288, pcVar2, uVar3, a3);
    uVar3 = 0x8c285904;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285904, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126298, pcVar2, uVar3, a3);
    uVar3 = 0x8c285910;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285910, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1262a8, pcVar2, uVar3, a3);
    uVar3 = 0x8c28591c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c28591c, a3);
    if (cVar4 == '\0') {
        g_8c1262b8 = CONCAT44(g_8c1262bc, 0x800000);
    } else {
        /* WARNING: Read-only address (ram,0x8c1262bc) is written */
        g_8c1262b8 = 0xffffffff00800000;
    }
    uVar1 = Vec3_ctor_xyz(&g_8c1262bc, pcVar2, uVar3, a3);
    uVar1 = global_list_push(uVar1, Vec3_dtor, 0x8c285928, a3);
    return uVar1;
}

/*
 * CSquid_Init  0x8c0ac6a0
 * called by: CItemGLoader_create_creature_by_kind
 * strings: "SquidLine"; "sumi_blood.pvm"; "GRAPHICS\\SQUIDLINE"; "Failed to load Ink pvm.." ...
 */
int CSquid_Init(int a0, u32 a1) {
    u32 uVar1;
    u8 *ar5_00;
    u16 *ar5_01;
    u32 uVar2;
    u32 ar7_00;
    int iVar3;

    ar7_00 = 0xc;
    uVar2 = 1;
    uVar1 = 2;
    (*(code *)(&CAnimal_ctor))(a0, 2, 1, 0xc, 0, a1, 0x8c2868d8, 0x8c286a08, *(u32 *)(&DATA_8c13b4d4));
    *(u8 **)(a0 + 8) = (&DATA_8c12b110);
    Class_12b2e8_ctor(a0 + 0x490, uVar1, uVar2);
    Class_12b2ac_ctor(a0 + 0x53c, uVar1, uVar2, ar7_00);
    Class_129938_ctor(a0 + 0x894, uVar1, uVar2);
    Class_129920_ctor(a0 + 0x9bc, uVar1);
    vec_new_array(a0 + 0x9c4, (&Class_129808_copy_016410), 0, 0x44, 10);
    uVar2 = 0x44;
    uVar1 = 0;
    ar5_00 = (&Class_129808_copy_016410);
    vec_new_array(a0 + 0xc6c, (&Class_129808_copy_016410), 0, 0x44, 0x28);
    (*(code *)(&sprintf))(a0 + 0xc, ar5_00, uVar1, uVar2, "SquidLine");
    *(u32 *)(0x170c + a0) = 0;
    *(u32 *)(0x1710 + a0) = 0;
    *(u32 *)(0x1714 + a0) = 0xffffffff;
    *(int *)(0x308 + a0) = a0 + 0x490;
    *(int *)(0x30c + a0) = a0 + 0x53c;
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        *(u32 *)(0x928 + a0 + iVar3 * 4) = 0;
        *(u32 *)(0x948 + a0 + iVar3 * 4) = 0;
    }
    *(u8 *)(0x968 + a0) = 0;
    *(u32 *)(0x88c + a0) = 0;
    *(u32 *)(0x890 + a0) = 0;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x10;
    (*(code *)(&game_update_fields_0f532c))(a0, *(u32 *)(0xb4 + *(int *)(0x328 + a0)), a0 + 0x894, uVar2);
    for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
        *(u32 *)(0x970 + iVar3 * 0xc + a0) = 0;
    }
    uVar2 = 6;
    uVar1 = 0x8c4312a8;
    ptr_list_build_1c(a0 + 0x9b4, a0 + 0x96c, 0x8c4312a8, 6);
    iVar3 = a0 + 0x9b4;
    (**(code **)(*(int *)(a0 + 0x9bc) + 8))((int *)(a0 + 0x9bc), iVar3, uVar1, uVar2);
    uVar1 = get_field_4_0253e4(a0 + 0x9bc, iVar3, uVar1, uVar2);
    iVar3 = (*(code *)(&retry_until_done_020f90))(0x8c3eb334, "sumi_blood.pvm", "GRAPHICS\\SQUIDLINE", uVar1);
    if (iVar3 == -1) {
        (*(code *)(&report_error_message))("Failed to load Ink pvm..", "CSquid::Init()", 0, 2);
    }
    g_8c286868 = 0;
    0x8c286868 [1] = 0;
    0x8c286868 [2] = (short)0xff;
    0x8c286868 [3] = 0;
    0x8c286868 [4] = (short)0xff;
    0x8c286868 [5] = (short)0xff;
    0x8c286868 [6] = 0;
    0x8c286868 [7] = (short)0xff;
    g_8c286858 = 0xffffffff;
    0x8c286858 [1] = 0xffffffff;
    0x8c286858 [2] = 0xffffffff;
    0x8c286858 [3] = 0xffffffff;
    *(u8 *)((int)0x8c286858 + 3) = 0;
    *(u8 *)((int)0x8c286858 + 7) = 0;
    *(u8 *)((int)0x8c286858 + 0xb) = 0;
    *(u8 *)((int)0x8c286858 + 0xf) = 0;
    for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
        uVar2 = 4;
        Class_129808_set_params_by_mode(iVar3 * 0x44 + a0 + 0x9c4, (&DATA_8c13b474), 0x8c286858, 4);
        uVar1 = 4;
        ar5_01 = 0x8c286868;
        Class_129808_update_fields_0164c8(iVar3 * 0x44 + a0 + 0x9c4, 0x8c286868, 4);
        set_flag_14_20(iVar3 * 0x44 + a0 + 0x9c4);
        set_flags_14_60(iVar3 * 0x44 + a0 + 0x9c4);
        set_flag_14_bit31_and_20(iVar3 * 0x44 + a0 + 0x9c4);
    }
    return a0;
}

/*
 * CAnimal_m0_0aca4c  0x8c0aca4c
 */
int CAnimal_m0_0aca4c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        *(u8 **)(a0 + 8) = &g_8c12b110;
        Class_129920_dtor(a0 + 0x9bc, 0xffffffff, a2, a3);
        Class_129938_dtor(a0 + 0x894, 0xffffffff, a2, a3);
        Class_12b2ac_dtor(a0 + 0x53c, 0xffffffff, a2, a3);
        Class_12b2e8_dtor(a0 + 0x490, 0xffffffff, a2, a3);
        ar5_00 = 0;
        CAnimal_m0_025688(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * CAnimal_m2_0acaec  0x8c0acaec
 */
u32 CAnimal_m2_0acaec(int a0, int *a1, int *a2, int *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int *a4;
    int *ar5_00;
    int *ar7_00;

    ar5_00 = a1;
    ar7_00 = a3;
    CAnimal_m2_02573c(a0, a1, a2, a3);
    uVar1 = get_field_90_s8(a0 + 0x490);
    if ((((((char)uVar1 == '\x01') && (*(int *)(0x948 + a0) == 0)) && (*(int *)(0x94c + a0) == 0)) &&
         ((*(int *)(0x950 + a0) == 0 && (*(int *)(0x954 + a0) == 0)))) &&
        (((*(int *)(0x958 + a0) == 0 && ((*(int *)(0x95c + a0) == 0 && (*(int *)(0x960 + a0) == 0)))) &&
          (*(int *)(0x964 + a0) == 0)))) {
        ar5_00 = a1;
        CSquidLine_load_8(a0, a1, a2, ar7_00);
    }
    if ((((*(int *)(0x948 + a0) != 0) || (*(int *)(0x94c + a0) != 0)) || (*(int *)(0x950 + a0) != 0)) ||
        (((*(int *)(0x954 + a0) != 0 || (*(int *)(0x958 + a0) != 0)) ||
          ((*(int *)(0x95c + a0) != 0 || ((*(int *)(0x960 + a0) != 0 || (*(int *)(0x964 + a0) != 0)))))))) {
        ar5_00 = a1;
        CAnimal_poll_eight_part_loads(a0, a1);
    }
    uVar1 = get_field_90_s8(a0 + 0x490);
    if ((char)uVar1 == '\x02') {
        iVar2 = get_field_328_0acd68(a0 + 0x53c);
        if (iVar2 != -1) {
            iVar2 = get_field_328_0acd68(a0 + 0x53c);
            iVar3 = (**(code **)(**(int **)(0x308 + a0) + 0x44))(*(int **)(0x308 + a0), ar5_00, a2, ar7_00);
            if (iVar2 < iVar3) {
                if (*(char *)(0x968 + a0) == '\0') {
                    *(u8 *)(0x968 + a0) = 1;
                    *(u32 *)(&DATA_8c13bcc4) = 0;
                }
                ar5_00 = a3;
                CSquidLine_release_current_928(a0, a3, a1, ar7_00);
                a2 = a1;
            }
        }
    }
    uVar1 = get_field_90_s8(a0 + 0x490);
    if ((char)uVar1 == '\x02') {
        iVar2 = get_field_328_0acd68(a0 + 0x53c);
        a4 = *(int **)(0x308 + a0);
        iVar3 = (**(code **)(*a4 + 0x44))(a4, ar5_00, a2, ar7_00);
        if ((iVar3 + -1 <= iVar2) && (*(char *)(0x968 + a0) == '\x01')) {
            *(u32 *)(&DATA_8c13bcc4) = 1;
            *(u8 *)(0x968 + a0) = 0;
            game_calls_test_0c4e2c(a4, ar5_00, a2, ar7_00);
        }
    }
    if (*(int *)(0x77c + a0) == 1) {
        *(u32 *)(0x170c + a0) = 1;
    }
    if (*(int *)(0x75c + a0) == 1) {
        if ((*(int *)(0x88c + a0) != 0) && (*(int *)(0x890 + a0) != 0)) {
            (**(code **)(0xb8 + *a3))(a3, *(u32 *)(0x88c + a0), *(u32 *)(0x890 + a0), a0 + 0x760);
            *(u32 *)(0x88c + a0) = 0;
            *(u32 *)(0x890 + a0) = 0;
        }
        *(u32 *)(0x75c + a0) = 0;
    }
    return 1;
}

/*
 * noop_0acd64  0x8c0acd64
 */
u32 noop_0acd64(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * get_field_328_0acd68  0x8c0acd68
 * called by: CAnimal_m2_0acaec, CAnimal_m3_0acd74, CSquidLine_release_current_928
 */
u32 get_field_328_0acd68(int a0) {
    return *(u32 *)(0x328 + a0);
}

/*
 * CAnimal_m3_0acd74  0x8c0acd74
 */
u32 CAnimal_m3_0acd74(int a0, int *a1, int *a2, int *a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int *ar5_00;
    int *ar7_00;

    ar5_00 = a1;
    ar7_00 = a3;
    CAnimal_m3_026078(a0, a1, a2, a3);
    uVar1 = get_field_90_s8(a0 + 0x490);
    if ((((((char)uVar1 == '\x01') && (*(int *)(0x948 + a0) == 0)) && (*(int *)(0x94c + a0) == 0)) &&
         ((*(int *)(0x950 + a0) == 0 && (*(int *)(0x954 + a0) == 0)))) &&
        (((*(int *)(0x958 + a0) == 0 && ((*(int *)(0x95c + a0) == 0 && (*(int *)(0x960 + a0) == 0)))) &&
          (*(int *)(0x964 + a0) == 0)))) {
        ar5_00 = a1;
        CSquidLine_load_8(a0, a1, a2, ar7_00);
    }
    if ((((*(int *)(0x948 + a0) != 0) || (*(int *)(0x94c + a0) != 0)) || (*(int *)(0x950 + a0) != 0)) ||
        (((*(int *)(0x954 + a0) != 0 || (*(int *)(0x958 + a0) != 0)) ||
          ((*(int *)(0x95c + a0) != 0 || ((*(int *)(0x960 + a0) != 0 || (*(int *)(0x964 + a0) != 0)))))))) {
        ar5_00 = a1;
        CAnimal_poll_eight_part_loads(a0, a1);
    }
    uVar1 = get_field_90_s8(a0 + 0x490);
    if ((char)uVar1 == '\x02') {
        iVar2 = get_field_328_0acd68(a0 + 0x53c);
        if (iVar2 != -1) {
            iVar2 = get_field_328_0acd68(a0 + 0x53c);
            iVar3 = (**(code **)(**(int **)(0x308 + a0) + 0x44))(*(int **)(0x308 + a0), ar5_00, a2, ar7_00);
            if (iVar2 < iVar3) {
                if (*(char *)(0x968 + a0) == '\0') {
                    *(u8 *)(0x968 + a0) = 1;
                    *(u32 *)(&DATA_8c13bcc4) = 0;
                }
                ar5_00 = a3;
                CSquidLine_release_current_928(a0, a3, a1, ar7_00);
                a2 = a1;
            }
        }
    }
    uVar1 = get_field_90_s8(a0 + 0x490);
    if ((char)uVar1 == '\x02') {
        iVar2 = get_field_328_0acd68(a0 + 0x53c);
        iVar3 = (**(code **)(**(int **)(0x308 + a0) + 0x44))(*(int **)(0x308 + a0), ar5_00, a2, ar7_00);
        if ((iVar3 + -1 <= iVar2) && (*(char *)(0x968 + a0) == '\x01')) {
            *(u32 *)(&DATA_8c13bcc4) = 1;
            *(u8 *)(0x968 + a0) = 0;
        }
    }
    if (*(int *)(0x77c + a0) == 1) {
        *(u32 *)(0x170c + a0) = 1;
    }
    if (*(int *)(0x75c + a0) == 1) {
        if ((*(int *)(0x88c + a0) != 0) && (*(int *)(0x890 + a0) != 0)) {
            (**(code **)(0xb8 + *a3))(a3, *(u32 *)(0x88c + a0), *(u32 *)(0x890 + a0), a0 + 0x760);
            *(u32 *)(0x88c + a0) = 0;
            *(u32 *)(0x890 + a0) = 0;
        }
        *(u32 *)(0x75c + a0) = 0;
    }
    return 1;
}

/*
 * CAnimal_m4_0acfe4  0x8c0acfe4
 */
u32 CAnimal_m4_0acfe4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffbf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffef;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0xffffffdf;
    *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) | 0x40;
    uVar1 = (**(code **)(**(int **)(0x30c + a0) + 0x1c))(*(int **)(0x30c + a0), a1, a2, a3);
    return uVar1;
}

/*
 * CSquidLine_load_8  0x8c0ad050
 * creates eight squid lines at +0x928 and queues them in the item loader (ids at +0x948)
 * called by: CAnimal_m2_0acaec, CAnimal_m3_0acd74
 */
u32 CSquidLine_load_8(int a0, int a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
        uVar1 = CItemGLoader_create_creature_by_kind(0x8c3eb324, 3, 2, a3);
        *(u32 *)(0x928 + a0 + iVar2 * 4) = uVar1;
        uVar1 = (*(code *)(&CItemGLoader_RegistToLoad))(*(u32 *)(0x7d0 + a1), *(u32 *)(0x928 + a0 + iVar2 * 4), 0, a3);
        *(u32 *)(0x948 + a0 + iVar2 * 4) = uVar1;
    }
    return 8;
}

/*
 * CAnimal_poll_eight_part_loads  0x8c0ad0e0
 * collects each finished CD load of the eight part requests and moves the load state from 1 to 2 once none remain
 * called by: CAnimal_m2_0acaec, CAnimal_m3_0acd74
 */
int CAnimal_poll_eight_part_loads(int a0, int a1) {
    int iVar1;
    u32 uVar2;
    int ar5_00;
    int iVar3;

    ar5_00 = a1;
    for (iVar3 = 0; iVar3 < 7; iVar3 = iVar3 + 1) {
        if (*(int *)(0x948 + a0 + iVar3 * 4) != 0) {
            ar5_00 = *(int *)(0x948 + a0 + iVar3 * 4);
            iVar1 = CItemGLoader_is_done(*(u32 *)(0x7d0 + a1), ar5_00);
            if (iVar1 == 1) {
                ar5_00 = a0 + iVar3 * 4 + 0x948;
                uVar2 = CItemGLoader_list_0feeb0(*(u32 *)(0x7d0 + a1), ar5_00);
                *(u32 *)(0x928 + a0 + iVar3 * 4) = uVar2;
            }
        }
    }
    if (*(int *)(0x964 + a0) != 0) {
        ar5_00 = *(int *)(0x964 + a0);
        iVar3 = CItemGLoader_is_done(*(u32 *)(0x7d0 + a1), ar5_00);
        if (iVar3 == 1) {
            ar5_00 = a0 + 0x964;
            uVar2 = CItemGLoader_list_0feeb0(*(u32 *)(0x7d0 + a1), ar5_00);
            *(u32 *)(0x944 + a0) = uVar2;
        }
    }
    iVar3 = *(int *)(0x948 + a0);
    if (((((iVar3 == 0) && (iVar3 = *(int *)(0x94c + a0), iVar3 == 0)) && (iVar3 = *(int *)(0x950 + a0), iVar3 == 0)) &&
         ((iVar3 = *(int *)(0x954 + a0), iVar3 == 0 && (iVar3 = *(int *)(0x958 + a0), iVar3 == 0)))) &&
        ((iVar3 = *(int *)(0x95c + a0),
          iVar3 == 0 && ((iVar3 = *(int *)(0x960 + a0), iVar3 == 0 && (iVar3 = *(int *)(0x964 + a0), iVar3 == 0)))))) {
        uVar2 = get_field_90_s8(a0 + 0x490);
        iVar3 = (int)(char)uVar2;
        if (iVar3 == 1) {
            iVar3 = set_field_90_u8(a0 + 0x490, 2);
        }
    }
    return iVar3;
}

/*
 * CSquidLine_release_current_928  0x8c0ad240
 * places the current squid line (slot from +0x53c) at a2, hands it to a1, clears the slot and sets +0x170c
 * called by: CAnimal_m2_0acaec, CAnimal_m3_0acd74
 * strings: "CSquidLine"; "Ryu-Zan"
 */
int CSquidLine_release_current_928(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 a6;

    a6 = a2;
    iVar1 = get_field_328_0acd68(a0 + 0x53c);
    if (*(int *)(0x928 + a0 + iVar1 * 4) == 0) {
        iVar1 = (*(code *)(&report_error_message))("CSquidLine", "Ryu-Zan", 1, 2);
    } else {
        iVar2 = *(int *)(0x928 + a0 + iVar1 * 4);
        (**(code **)(0x10c + *(int *)(iVar2 + 8)))(iVar2, a2, a6, a3);
        set_vec3_field_30(*(u32 *)(0x928 + a0 + iVar1 * 4), a2, a6);
        iVar2 = *(int *)(0x928 + a0 + iVar1 * 4);
        (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2, a2, a6, a3);
        (**(code **)(*a1 + 0x4c))(a1, *(u32 *)(0x928 + a0 + iVar1 * 4), a6, a3);
        *(u32 *)(0x928 + a0 + iVar1 * 4) = 0;
        iVar1 = 0x170c;
        *(u32 *)(0x170c + a0) = 1;
    }
    return iVar1;
}

/*
 * CSquidLine_uses_matrix_push_0ad354  0x8c0ad354
 * area name: sits between CSquidLine functions (same compilation unit); behaviour name: its main named callee is
 * matrix_push
 */
int CSquidLine_uses_matrix_push_0ad354(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    int iVar1;
    u32 uVar2;
    int iVar3;
    u64 *puVar4;
    u32 ar4_00;
    u32 ar6_00;
    int iVar5;
    float fVar6;
    double dVar7;
    float fVar8;
    code *pcVar9;
    int ar7_00;
    int iVar10;
    char cVar11;
    char cVar12;
    int in_stack_ffffff48;
    int iStack_7c;
    u8 auStack_60[16];
    u8 auStack_50[68];

    cVar12 = '\0';
    cVar11 = '\0';
    gfx_set_color4_4aa52c(a0 + 0x438);
    matrix_push(0, r5, r6, r7, in_stack_ffffff48);
    touch_fields_30_3c(0, r5, r6, r7, in_stack_ffffff48);
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
        fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, fVar6);
    } else {
        dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
        ar7_00 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        ar7_00 = (int)(dVar7 / dVar7);
    }
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
        fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, fVar6);
    } else {
        dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
        iStack_7c = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        iStack_7c = (int)(dVar7 / dVar7);
    }
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar7 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
        fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, fVar6);
    } else {
        dVar7 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
        fVar8 = (float)((u64)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7, 0) / fVar8;
        dVar7 = (double)CONCAT44(fVar8, fVar6);
        iVar10 = (int)fVar6;
    } else {
        dVar7 = dVar7 / dVar7;
        iVar10 = (int)dVar7;
    }
    iVar5 = (int)((u64)dVar7 >> 0x20);
    njRotateXYZ(0, iVar10, iStack_7c, ar7_00, in_stack_ffffff48);
    matrix_scale(0, iVar10, iStack_7c, ar7_00, in_stack_ffffff48);
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, iVar10, iStack_7c);
    iVar1 = get_field_124_027930(a0 + 0x53c, iVar10, iStack_7c, ar7_00);
    iVar3 = iVar10;
    if (iVar1 != 8) {
        uVar2 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
        iVar3 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), iVar10, iStack_7c);
        iVar3 = deref_u32(*(int *)(*(int *)(a0 + 0x328) + 0xa0) + iVar3 * 4);
        iVar1 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), iVar10, iStack_7c);
        iVar1 = get_field_0_026d74(*(int *)(*(int *)(a0 + 0x328) + 0xa8) + iVar1 * 4);
        CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), iVar10, iStack_7c, ar7_00);
        iStack_7c = iVar5;
        if (cVar12 == '\0') {
            iStack_7c = iVar1;
        }
        gfx_draw_motion_link_alt_a(uVar2, iVar3, iStack_7c, ar7_00, in_stack_ffffff48);
    }
    matrix_pop_n(1);
    gfx_set_color4_4aa52c(&g_8c13b464);
    if ((*(int *)(a0 + 0x88c) != 0) && (*(int *)(a0 + 0x890) != 0)) {
        matrix_push(0, iVar3, iStack_7c, ar7_00, in_stack_ffffff48);
        touch_fields_30_3c(0, iVar3, iStack_7c, ar7_00, in_stack_ffffff48);
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x778));
        } else {
            dVar7 = 1.4411521878487204e+18;
        }
        if (cVar11 == '\0') {
            fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 * dVar7, 0);
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, fVar6);
        } else {
            dVar7 = -3.739346301775294e-250;
        }
        if (cVar11 == '\0') {
            ar7_00 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
        } else {
            ar7_00 = (int)(dVar7 / dVar7);
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x774));
        } else {
            dVar7 = 1.4411521878487204e+18;
        }
        if (cVar11 == '\0') {
            fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 * dVar7, 0);
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, fVar6);
        } else {
            dVar7 = -3.739346301775294e-250;
        }
        if (cVar11 == '\0') {
            iStack_7c = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
        } else {
            iStack_7c = (int)(dVar7 / dVar7);
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x770));
        } else {
            dVar7 = 1.4411521878487204e+18;
        }
        if (cVar11 == '\0') {
            fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 * dVar7, 0);
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, fVar6);
        } else {
            dVar7 = -3.739346301775294e-250;
        }
        if (cVar11 == '\0') {
            iVar3 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
        } else {
            iVar3 = (int)(dVar7 / dVar7);
        }
        njRotateXYZ(0, iVar3, iStack_7c, ar7_00, in_stack_ffffff48);
        njSetTexture(*(u32 *)(a0 + 0x890));
        gfx_object_draw_c_entry(*(u32 *)(a0 + 0x88c), iVar3, iStack_7c, ar7_00);
        matrix_pop_n(1);
    }
    iVar10 = *(int *)(a0 + 0x170c);
    if (iVar10 == 1) {
        fpu_save_fr0_fr15_wrap(auStack_50);
        Vec3_ctor_copy(auStack_60, a0 + 0x30, iStack_7c, ar7_00);
        ar6_00 = 0x1e;
        iVar10 = game_uses_rand_0ae84c(a0, auStack_60, 0x1e, ar7_00);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_60, 0xffffffff, ar6_00, ar7_00);
        if (iVar10 == 1) {
            iVar10 = 0;
        } else {
            for (iVar5 = 0; iVar10 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
                if (cVar12 == '\0') {
                    fVar6 = *(float *)(iVar5 * 0x4c + 0x8c28597c);
                    pcVar9 = (code *)0x44bb8000;
                } else {
                    fVar6 = 1500.0;
                    pcVar9 = (code *)0x44bb6000;
                }
                if (cVar11 == '\0' && (float)pcVar9 < fVar6) {
                    puVar4 = (u64 *)(iVar5 * 0x4c + 0x8c28597c);
                    if (cVar12 == '\0') {
                        pcVar9 = (code *)0x44bb6000;
                        *(u32 *)puVar4 = 0x44bb6000;
                    } else {
                        pcVar9 = matrix_push;
                        *puVar4 = 0x8c25632844bb6000;
                    }
                }
                matrix_push(0, uVar2, ar6_00, ar7_00, in_stack_ffffff48);
                ar4_00 = 0;
                touch_fields_30_3c(0, uVar2, ar6_00, ar7_00, in_stack_ffffff48);
                libm_errno_wrap_013b3c();
                if (cVar12 == '\0') {
                    dVar7 = (double)CONCAT44(0x47800000, pcVar9);
                } else {
                    dVar7 = 12831.689682006836;
                }
                if (cVar11 == '\0') {
                    fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
                } else {
                    fVar6 = SUB84(dVar7 * dVar7, 0);
                }
                if (cVar12 == '\0') {
                    dVar7 = (double)CONCAT44(0x40c90fd8, fVar6);
                } else {
                    dVar7 = 1.0382059669001045e+34;
                }
                if (cVar11 == '\0') {
                    iVar10 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
                } else {
                    iVar10 = (int)(dVar7 / dVar7);
                }
                if (cVar12 == '\0') {
                    dVar7 = (double)CONCAT44(0x46fffe00, (float)iVar10);
                } else {
                    dVar7 = -3.738952064572566e-250;
                }
                if (cVar11 == '\0') {
                    iVar10 = (int)(SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20));
                } else {
                    iVar10 = (int)(dVar7 - dVar7);
                }
                njRotateX_like(0, iVar10, ar6_00, ar7_00, in_stack_ffffff48);
                matrix_scale(0, iVar10, ar6_00, ar7_00, in_stack_ffffff48);
                obj_set_texlist(a0 + 0x9bc, iVar10, ar6_00);
                uVar2 = *(u32 *)(iVar5 * 0x4c + 0x8c2859bc);
                obj_set_texture_num(a0 + 0x9bc, uVar2);
                in_stack_ffffff48 = iVar5;
                Class_12bea8_calc_016524(iVar5 * 0x44 + a0 + 0x9c4, uVar2, ar6_00, ar7_00);
                matrix_pop_n(1);
            }
        }
    }
    return iVar10;
}

/*
 * game_draw_0ad7ec  0x8c0ad7ec
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
int game_draw_0ad7ec(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    int iVar1;
    u32 uVar2;
    int iVar3;
    u64 *puVar4;
    u32 ar6_00;
    int iVar5;
    float fVar6;
    double dVar7;
    float fVar8;
    int ar7_00;
    int iVar9;
    char cVar10;
    char cVar11;
    int in_stack_ffffff8c;
    int iStack_3c;
    u8 auStack_20[20];

    cVar11 = '\0';
    cVar10 = '\0';
    gfx_set_color4_4aa52c(a0 + 0x438);
    matrix_push(0, r5, r6, r7, in_stack_ffffff8c);
    touch_fields_30_3c(0, r5, r6, r7, in_stack_ffffff8c);
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
        fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, fVar6);
    } else {
        dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
        ar7_00 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        ar7_00 = (int)(dVar7 / dVar7);
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
        fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, fVar6);
    } else {
        dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
        iStack_3c = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        iStack_3c = (int)(dVar7 / dVar7);
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x50));
    } else {
        dVar7 = 1.4411521878487204e+18;
    }
    if (cVar10 == '\0') {
        fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, fVar6);
    } else {
        dVar7 = -3.739346301775294e-250;
    }
    if (cVar10 == '\0') {
        fVar8 = (float)((u64)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7, 0) / fVar8;
        dVar7 = (double)CONCAT44(fVar8, fVar6);
        iVar9 = (int)fVar6;
    } else {
        dVar7 = dVar7 / dVar7;
        iVar9 = (int)dVar7;
    }
    iVar5 = (int)((u64)dVar7 >> 0x20);
    njRotateXYZ(0, iVar9, iStack_3c, ar7_00, in_stack_ffffff8c);
    matrix_scale(0, iVar9, iStack_3c, ar7_00, in_stack_ffffff8c);
    obj_set_texlist(*(int *)(a0 + 0x328) + 0x78, iVar9, iStack_3c);
    iVar1 = get_field_124_027930(a0 + 0x53c, iVar9, iStack_3c, ar7_00);
    iVar3 = iVar9;
    if (iVar1 != 8) {
        uVar2 = get_field_0_015bb8(*(int *)(a0 + 0x328) + 0x70);
        iVar3 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), iVar9, iStack_3c);
        iVar3 = deref_u32(*(int *)(*(int *)(a0 + 0x328) + 0xa0) + iVar3 * 4);
        iVar1 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), iVar9, iStack_3c);
        iVar1 = get_field_0_026d74(*(int *)(*(int *)(a0 + 0x328) + 0xa8) + iVar1 * 4);
        CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), iVar9, iStack_3c, ar7_00);
        iStack_3c = iVar5;
        if (cVar11 == '\0') {
            iStack_3c = iVar1;
        }
        gfx_draw_motion_link_alt_a(uVar2, iVar3, iStack_3c, ar7_00, in_stack_ffffff8c);
    }
    matrix_pop_n(1);
    gfx_set_color4_4aa52c(&g_8c13b464);
    if ((*(int *)(a0 + 0x88c) != 0) && (*(int *)(a0 + 0x890) != 0)) {
        matrix_push(0, iVar3, iStack_3c, ar7_00, in_stack_ffffff8c);
        touch_fields_30_3c(0, iVar3, iStack_3c, ar7_00, in_stack_ffffff8c);
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x778));
        } else {
            dVar7 = 1.4411521878487204e+18;
        }
        if (cVar10 == '\0') {
            fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 * dVar7, 0);
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, fVar6);
        } else {
            dVar7 = -3.739346301775294e-250;
        }
        if (cVar10 == '\0') {
            ar7_00 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
        } else {
            ar7_00 = (int)(dVar7 / dVar7);
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x774));
        } else {
            dVar7 = 1.4411521878487204e+18;
        }
        if (cVar10 == '\0') {
            fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 * dVar7, 0);
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, fVar6);
        } else {
            dVar7 = -3.739346301775294e-250;
        }
        if (cVar10 == '\0') {
            iStack_3c = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
        } else {
            iStack_3c = (int)(dVar7 / dVar7);
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x770));
        } else {
            dVar7 = 1.4411521878487204e+18;
        }
        if (cVar10 == '\0') {
            fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 * dVar7, 0);
        }
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, fVar6);
        } else {
            dVar7 = -3.739346301775294e-250;
        }
        if (cVar10 == '\0') {
            iVar9 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
        } else {
            iVar9 = (int)(dVar7 / dVar7);
        }
        njRotateXYZ(0, iVar9, iStack_3c, ar7_00, in_stack_ffffff8c);
        njSetTexture(*(u32 *)(a0 + 0x890));
        gfxlib_draw_219a9a(*(u32 *)(a0 + 0x88c), iVar9, iStack_3c, ar7_00);
        matrix_pop_n(1);
    }
    iVar9 = *(int *)(a0 + 0x170c);
    if (iVar9 == 1) {
        Vec3_ctor_copy(auStack_20, a0 + 0x30, iStack_3c, ar7_00);
        ar6_00 = 0x1e;
        iVar9 = game_uses_rand_0ae84c(a0, auStack_20, 0x1e, ar7_00);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_20, 0xffffffff, ar6_00, ar7_00);
        if (iVar9 == 1) {
            iVar9 = 0;
        } else {
            for (iVar5 = 0; iVar9 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
                if (cVar11 == '\0') {
                    fVar6 = *(float *)(iVar5 * 0x4c + 0x8c28597c);
                    fVar8 = 1500.0;
                } else {
                    fVar6 = 1500.0;
                    fVar8 = 1499.0;
                }
                if (cVar10 == '\0' && fVar8 < fVar6) {
                    puVar4 = (u64 *)(iVar5 * 0x4c + 0x8c28597c);
                    if (cVar11 == '\0') {
                        *(u32 *)puVar4 = 0x44bb6000;
                    } else {
                        *puVar4 = 0x9bc44bb6000;
                    }
                }
                matrix_push(0, uVar2, ar6_00, ar7_00, in_stack_ffffff8c);
                touch_fields_30_3c(0, uVar2, ar6_00, ar7_00, in_stack_ffffff8c);
                matrix_scale(0, uVar2, ar6_00, ar7_00, in_stack_ffffff8c);
                obj_set_texlist(a0 + 0x9bc, uVar2, ar6_00);
                uVar2 = *(u32 *)(iVar5 * 0x4c + 0x8c2859bc);
                obj_set_texture_num(a0 + 0x9bc, uVar2);
                in_stack_ffffff8c = iVar5;
                Class_12bea8_calc_016524(iVar5 * 0x44 + a0 + 0x9c4, uVar2, ar6_00, ar7_00);
                matrix_pop_n(1);
            }
        }
    }
    return iVar9;
}

/*
 * game_uses_get_field_1c_on_field_b0_0adc0c  0x8c0adc0c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_1c_on_field_b0
 */
u32 game_uses_get_field_1c_on_field_b0_0adc0c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar5_00;
    u32 uVar3;
    int iVar4;
    u32 extraout_fr0;
    char cVar5;
    u32 uStack_20;

    cVar5 = '\0';
    iVar4 = *(int *)(a0 + 0x328);
    obj_set_texlist(iVar4 + 0x78, a1, a2);
    uVar1 = get_field_0_015bb8(iVar4 + 0x70);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2);
    ar5_00 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2);
    uVar3 = get_field_0_026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4);
    CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), a1, a2, a3);
    uStack_20 = extraout_fr0;
    if (cVar5 == '\0') {
        uStack_20 = uVar3;
    }
    gfx_draw_motion_link_alt_a(uVar1, ar5_00, uStack_20, a3, iVar2);
    uVar1 = 0;
    if ((*(int *)(a0 + 0x88c) != 0) && (uVar1 = 0, *(int *)(a0 + 0x890) != 0)) {
        njSetTexture(*(u32 *)(a0 + 0x890));
        uVar1 = gfxlib_draw_219a9a(*(u32 *)(a0 + 0x88c), ar5_00, uStack_20, a3);
    }
    return uVar1;
}

/*
 * game_draw_0add00  0x8c0add00
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_0add00(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    int iVar2;
    u32 ar5_00;
    u32 uVar3;
    int iVar4;
    float fVar5;
    double dVar6;
    float fVar7;
    int ar7_00;
    int ar6_00;
    int ar5_01;
    char cVar8;
    char cVar9;
    u32 in_stack_ffffffd4;
    u32 uStack_20;

    cVar9 = '\0';
    cVar8 = '\0';
    iVar4 = *(int *)(a0 + 0x328);
    obj_set_texlist(iVar4 + 0x78, a1, a2);
    matrix_push(0, a1, a2, r7, in_stack_ffffffd4);
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x58));
    } else {
        dVar6 = 1.4411521878487204e+18;
    }
    if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000, fVar5);
    } else {
        dVar6 = 21990236992512.0;
    }
    if (cVar8 == '\0') {
        ar7_00 = (int)(SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20));
    } else {
        ar7_00 = (int)(dVar6 / dVar6);
    }
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x54));
    } else {
        dVar6 = 1.4411521878487204e+18;
    }
    if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000, fVar5);
    } else {
        dVar6 = 21990236992512.0;
    }
    if (cVar8 == '\0') {
        ar6_00 = (int)(SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20));
    } else {
        ar6_00 = (int)(dVar6 / dVar6);
    }
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x42b40000, *(u32 *)(a0 + 0x50));
    } else {
        dVar6 = -3.739346291369057e-250;
    }
    if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 + dVar6, 0);
    }
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x47800000, fVar5);
    } else {
        dVar6 = 1.4411521878487204e+18;
    }
    if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar5 = SUB84(dVar6 * dVar6, 0);
    }
    if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x43b40000, fVar5);
    } else {
        dVar6 = 21990236992512.0;
    }
    if (cVar8 == '\0') {
        fVar7 = (float)((u64)dVar6 >> 0x20);
        fVar5 = SUB84(dVar6, 0) / fVar7;
        dVar6 = (double)CONCAT44(fVar7, fVar5);
        ar5_01 = (int)fVar5;
    } else {
        dVar6 = dVar6 / dVar6;
        ar5_01 = (int)dVar6;
    }
    uStack_20 = (u32)((u64)dVar6 >> 0x20);
    njRotateXYZ(0, ar5_01, ar6_00, ar7_00, in_stack_ffffffd4);
    uVar1 = get_field_0_015bb8(iVar4 + 0x70);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_01, ar6_00);
    ar5_00 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4);
    iVar2 = get_field_1c_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_01, ar6_00);
    uVar3 = get_field_0_026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4);
    CAnimBody_GetCurFrame_on_field_b0(*(u32 *)(a0 + 0x30c), ar5_01, ar6_00, ar7_00);
    if (cVar9 == '\0') {
        uStack_20 = uVar3;
    }
    gfx_draw_motion_link_alt_a(uVar1, ar5_00, uStack_20, ar7_00, iVar2);
    if ((*(int *)(a0 + 0x88c) != 0) && (*(int *)(a0 + 0x890) != 0)) {
        njSetTexture(*(u32 *)(a0 + 0x890));
        touch_fields_30_3c(0, ar5_00, uStack_20, ar7_00, iVar2);
        gfxlib_draw_219a9a(*(u32 *)(a0 + 0x88c), ar5_00, uStack_20, ar7_00);
    }
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * CAnimal_m7_0ade84  0x8c0ade84
 */
u32 CAnimal_m7_0ade84(int a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *ar5_00;
    u32 *a6;
    float fVar3;
    float fVar4;
    double in_dr0;
    double dVar5;
    double dVar6;
    double dVar7;
    double in_dr12;
    u32 in_fr15;
    u64 in_xd0;
    double in_xd12;
    bool bVar8;
    char cVar9;
    char cVar10;
    u32 uStack_3c;
    float fStack_38;
    float fStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;

    cVar10 = '\0';
    cVar9 = '\0';
    ar5_00 = a1;
    Vec3_ctor_zero(&uStack_2c, a1, a2);
    Vec3_ctor_zero(&uStack_3c, ar5_00, a2);
    (**(code **)(*(int *)(a0 + 8) + 0x170))(a0, ar5_00, a2, a3);
    uVar2 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar10 == '\0') {
        in_fr15 = uVar2;
        uVar2 = uStack_3c;
    }
    uStack_3c = uVar2;
    (**(code **)(*(int *)(a0 + 8) + 0x174))(a0, ar5_00, a2, a3);
    dVar7 = in_dr0;
    if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), in_fr15);
    }
    iVar1 = get_field_124_027930(a0 + 0x53c, ar5_00, a2, a3);
    if (((iVar1 == 8) || (iVar1 == 5)) || (iVar1 == 6)) {
        dVar7 = (double)((u64)dVar7 & 0xffffffff);
    }
    a6 = &uStack_3c;
    (**(code **)(*a1 + 0x124))(a1, &uStack_2c, a6, a3);
    if (cVar10 == '\0') {
        in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(a0 + 0x30));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x30);
    }
    fVar4 = SUB84(dVar7, 0);
    if (cVar9 == '\0') {
        fVar3 = SUB84(in_dr0, 0) - fVar4;
    } else {
        fVar3 = SUB84(in_dr0 - dVar7, 0);
    }
    if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(uStack_2c, fVar3);
    } else {
        dVar5 = (double)CONCAT44(uStack_28, uStack_2c);
    }
    fVar3 = (float)((u64)dVar5 >> 0x20);
    if (cVar9 == '\0' && fVar3 < SUB84(dVar5, 0)) {
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(fVar3, *(u32 *)(a0 + 0x30));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x30);
        }
        if (cVar9 == '\0') {
            fVar3 = SUB84(dVar5, 0) + fVar4;
        } else {
            fVar3 = SUB84(dVar5 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(uStack_3c, fVar3);
        } else {
            dVar5 = (double)CONCAT44(fStack_38, uStack_3c);
        }
        fVar3 = (float)((u64)dVar5 >> 0x20);
        if (cVar9 != '\0' || fVar3 <= SUB84(dVar5, 0)) {
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(fVar3, uStack_3c);
            } else {
                in_xd0 = CONCAT44(fStack_38, uStack_3c);
            }
            if (cVar9 == '\0') {
                fVar3 = SUB84(dVar5, 0) - fVar4;
            } else {
                fVar3 = SUB84(dVar5 - dVar7, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x30), fVar3);
            } else {
                dVar5 = *(double *)(a0 + 0x30);
            }
            if (cVar9 == '\0') {
                fVar3 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar3 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x3dcccccd, fVar3);
            } else {
                dVar5 = 6.28623017172232e-312;
            }
            if (cVar9 == '\0') {
                fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar3 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x30), fVar3);
            } else {
                dVar5 = *(double *)(a0 + 0x30);
            }
            if (cVar9 == '\0') {
                fVar3 = (float)((u64)dVar5 >> 0x20);
                dVar5 = (double)CONCAT44(fVar3, SUB84(dVar5, 0) + fVar3);
            } else {
                dVar5 = dVar5 + dVar5;
            }
            if (cVar10 == '\0') {
                *(int *)(a0 + 0x30) = SUB84(dVar5, 0);
            } else {
                *(u64 *)(a0 + 0x30) = in_xd0;
            }
        }
    } else {
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(fVar3, uStack_2c);
        } else {
            in_xd0 = CONCAT44(uStack_28, uStack_2c);
        }
        if (cVar9 == '\0') {
            fVar3 = SUB84(dVar5, 0) + fVar4;
        } else {
            fVar3 = SUB84(dVar5 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x30), fVar3);
        } else {
            dVar5 = *(double *)(a0 + 0x30);
        }
        if (cVar9 == '\0') {
            fVar3 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
        } else {
            fVar3 = SUB84(dVar5 - dVar5, 0);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(0x3dcccccd, fVar3);
        } else {
            dVar5 = 6.28623017172232e-312;
        }
        if (cVar9 == '\0') {
            fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
        } else {
            fVar3 = SUB84(dVar5 * dVar5, 0);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x30), fVar3);
        } else {
            dVar5 = *(double *)(a0 + 0x30);
        }
        if (cVar9 == '\0') {
            fVar3 = (float)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(fVar3, SUB84(dVar5, 0) + fVar3);
        } else {
            dVar5 = dVar5 + dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(a0 + 0x30) = SUB84(dVar5, 0);
        } else {
            *(u64 *)(a0 + 0x30) = in_xd0;
        }
    }
    if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44((int)((u64)dVar5 >> 0x20), *(u32 *)(a0 + 0x38));
    } else {
        in_xd0 = *(u64 *)(a0 + 0x38);
    }
    if (cVar9 == '\0') {
        fVar3 = SUB84(dVar5, 0) - fVar4;
    } else {
        fVar3 = SUB84(dVar5 - dVar7, 0);
    }
    if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(uStack_24, fVar3);
    } else {
        dVar5 = (double)CONCAT44(uStack_20, uStack_24);
    }
    fVar3 = (float)((u64)dVar5 >> 0x20);
    if (cVar9 == '\0' && fVar3 < SUB84(dVar5, 0)) {
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(fVar3, *(u32 *)(a0 + 0x38));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x38);
        }
        if (cVar9 == '\0') {
            fVar3 = SUB84(dVar5, 0) + fVar4;
        } else {
            fVar3 = SUB84(dVar5 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(fStack_34, fVar3);
        } else {
            dVar5 = (double)CONCAT44(uStack_30, fStack_34);
        }
        fVar3 = (float)((u64)dVar5 >> 0x20);
        if (cVar9 != '\0' || fVar3 <= SUB84(dVar5, 0)) {
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(fVar3, fStack_34);
            } else {
                in_xd0 = CONCAT44(uStack_30, fStack_34);
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar5, 0) - fVar4;
            } else {
                fVar4 = SUB84(dVar5 - dVar7, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x38), fVar4);
            } else {
                dVar5 = *(double *)(a0 + 0x38);
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 - dVar5, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x3dcccccd, fVar4);
            } else {
                dVar5 = 6.28623017172232e-312;
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 * dVar5, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x38), fVar4);
            } else {
                dVar5 = *(double *)(a0 + 0x38);
            }
            if (cVar9 == '\0') {
                fVar4 = (float)((u64)dVar5 >> 0x20);
                dVar5 = (double)CONCAT44(fVar4, SUB84(dVar5, 0) + fVar4);
            } else {
                dVar5 = dVar5 + dVar5;
            }
            if (cVar10 == '\0') {
                *(int *)(a0 + 0x38) = SUB84(dVar5, 0);
            } else {
                *(u64 *)(a0 + 0x38) = in_xd0;
            }
        }
    } else {
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(fVar3, uStack_24);
        } else {
            in_xd0 = CONCAT44(uStack_20, uStack_24);
        }
        if (cVar9 == '\0') {
            fVar4 = SUB84(dVar5, 0) + fVar4;
        } else {
            fVar4 = SUB84(dVar5 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x38), fVar4);
        } else {
            dVar5 = *(double *)(a0 + 0x38);
        }
        if (cVar9 == '\0') {
            fVar4 = SUB84(dVar5, 0) - (float)((u64)dVar5 >> 0x20);
        } else {
            fVar4 = SUB84(dVar5 - dVar5, 0);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(0x3dcccccd, fVar4);
        } else {
            dVar5 = 6.28623017172232e-312;
        }
        if (cVar9 == '\0') {
            fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
        } else {
            fVar4 = SUB84(dVar5 * dVar5, 0);
        }
        if (cVar10 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x38), fVar4);
        } else {
            dVar5 = *(double *)(a0 + 0x38);
        }
        if (cVar9 == '\0') {
            fVar4 = (float)((u64)dVar5 >> 0x20);
            dVar5 = (double)CONCAT44(fVar4, SUB84(dVar5, 0) + fVar4);
        } else {
            dVar5 = dVar5 + dVar5;
        }
        if (cVar10 == '\0') {
            *(int *)(a0 + 0x38) = SUB84(dVar5, 0);
        } else {
            *(u64 *)(a0 + 0x38) = in_xd0;
        }
    }
    (**(code **)(*a1 + 0x128))(a1, a0 + 0x30, a6, a3);
    if (cVar10 == '\0') {
        in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), (int)((u64)dVar5 >> 0x20));
        dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar5, 0));
        dVar5 = in_xd12;
    } else {
        dVar6 = *(double *)(a0 + 0x34);
    }
    fVar4 = (float)((u64)dVar7 >> 0x20);
    if (cVar9 == '\0') {
        fVar3 = (float)((u64)dVar6 >> 0x20) - fVar4;
        dVar6 = (double)CONCAT44(fVar3, SUB84(dVar6, 0));
        bVar8 = SUB84(in_dr12, 0) < fVar3;
    } else {
        dVar6 = dVar6 - dVar7;
        bVar8 = in_dr12 < dVar6;
    }
    if (bVar8) {
        if (cVar10 == '\0') {
            fVar4 = *(float *)(a0 + 0x34);
            fVar3 = fStack_38;
        } else {
            in_xd0 = *(u64 *)(a0 + 0x34);
            fVar4 = fStack_38;
            fVar3 = fStack_34;
        }
        if (cVar9 != '\0' || fVar3 <= fVar4) {
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x34), fStack_38);
            } else {
                in_xd0 = CONCAT44(fStack_34, fStack_38);
                dVar7 = *(double *)(a0 + 0x34);
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
            } else {
                fVar4 = SUB84(dVar7 - dVar7, 0);
            }
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(0x3dcccccd, fVar4);
            } else {
                dVar7 = 6.28623017172232e-312;
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
            } else {
                fVar4 = SUB84(dVar7 * dVar7, 0);
            }
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x34), fVar4);
            } else {
                dVar7 = *(double *)(a0 + 0x34);
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
            } else {
                fVar4 = SUB84(dVar7 + dVar7, 0);
            }
            if (cVar10 == '\0') {
                *(float *)(a0 + 0x34) = fVar4;
            } else {
                *(u64 *)(a0 + 0x34) = in_xd0;
            }
        }
    } else {
        if (cVar9 == '\0') {
            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr12, 0) + fVar4);
        } else {
            in_dr12 = in_dr12 + dVar7;
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar6, 0));
        } else {
            dVar7 = *(double *)(a0 + 0x34);
        }
        if (cVar9 == '\0') {
            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr12, 0) - (float)((u64)dVar7 >> 0x20));
        } else {
            in_dr12 = in_dr12 - dVar7;
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x3dcccccd, SUB84(dVar7, 0));
        } else {
            dVar7 = 6.28623017172232e-312;
        }
        if (cVar9 == '\0') {
            in_dr12 = (double)CONCAT44((int)((u64)in_dr12 >> 0x20), SUB84(in_dr12, 0) * (float)((u64)dVar7 >> 0x20));
        } else {
            in_dr12 = in_dr12 * dVar7;
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar7, 0));
        } else {
            dVar7 = *(double *)(a0 + 0x34);
        }
        if (cVar9 == '\0') {
            fVar4 = SUB84(in_dr12, 0) + (float)((u64)dVar7 >> 0x20);
        } else {
            fVar4 = SUB84(in_dr12 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            *(float *)(a0 + 0x34) = fVar4;
        } else {
            *(double *)(a0 + 0x34) = dVar5;
        }
    }
    Vec3_dtor(&uStack_3c, 0xffffffff, a6, a3);
    uVar2 = Vec3_dtor(&uStack_2c, 0xffffffff, a6, a3);
    return uVar2;
}

/*
 * tint_ramp_30s_0ae0b0  0x8c0ae0b0
 * scales the four colour constants at 8c13b4f4 by frame/1800 (30 seconds) into +0x438..+0x444; at the end resets the
 * frame count and clears bit 31 of +0x74
 */
u32 tint_ramp_30s_0ae0b0(int a0) {
    int iVar1;
    u32 uVar2;
    float fVar3;

    fVar3 = (float)*(int *)(a0 + 0x458) / 1800.0;
    *(float *)(a0 + 0x438) = g_8c13b4f4 * fVar3;
    *(float *)(a0 + 0x43c) = g_8c13b4f8 * fVar3;
    *(float *)(a0 + 0x440) = g_8c13b4fc * fVar3;
    *(float *)(a0 + 0x444) = g_8c13b500 * fVar3;
    iVar1 = *(int *)(a0 + 0x458);
    *(int *)(a0 + 0x458) = iVar1 + 1;
    uVar2 = 0x708;
    if (0x708 < iVar1 + 1) {
        *(u32 *)(a0 + 0x458) = 0;
        uVar2 = 0x74;
        *(u32 *)(a0 + 0x74) = *(u32 *)(a0 + 0x74) & 0x7fffffff;
    }
    return uVar2;
}

/*
 * game_load_0ae160  0x8c0ae160
 * area name: game code; nothing names its area yet; behaviour name: mostly calls load functions
 */
int game_load_0ae160(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    CAnimal_LoadGRWait(a0, a1, a2, a3);
    iVar1 = *(int *)(0x460 + a0);
    if (iVar1 == 1) {
        iVar1 = (*(code *)(&nautilus_load_shell))(a1, 0x2ee0, a0 + 0x88c, a0 + 0x890);
    }
    return iVar1;
}

/*
 * Squid_FreeGraphicResource  0x8c0ae1bc
 * strings: "Ink Texlist NULL.."; "Squid::FreeGraphicResource()"
 */
u32 Squid_FreeGraphicResource(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    uVar2 = a1;
    CAnimal_release_part_requests(a0, a1, a2);
    if ((*(int *)(0x88c + a0) != 0) && (*(int *)(0x890 + a0) != 0)) {
        a2 = *(u32 *)(0x890 + a0);
        uVar2 = 0x2ee0;
        game_release_0ae640(a1, 0x2ee0, a2);
    }
    iVar1 = get_field_4_0253e4(a0 + 0x9bc, uVar2, a2, a3);
    if (iVar1 == 0) {
        uVar2 = (*(code *)(&report_error_message))("Ink Texlist NULL..", "Squid::FreeGraphicResource()", 1, 2);
    } else {
        uVar2 = CTexture_ReleaseFromVRAM(a0 + 0x9bc, uVar2, a2, a3);
    }
    return uVar2;
}

/*
 * game_uses_get_field_314_0ae270  0x8c0ae270
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_314_0b58d0
 */
u32 game_uses_get_field_314_0ae270(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = get_field_314_0b58d0(a0 + 0x53c);
    if (iVar1 != 0) {
        *(u32 *)(0x460 + a0) = 0;
    }
    uVar2 = CAnimal_state_save(a0, a1, a2, a3);
    return uVar2;
}

/*
 * game_load_0ae2b8  0x8c0ae2b8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls load functions
 */
int game_load_0ae2b8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    CAnimal_state_load(a0, a1, a2, a3);
    iVar1 = *(int *)(0x460 + a0);
    if (iVar1 == 0) {
        iVar1 = set_field_314(a0 + 0x53c, 3);
    }
    return iVar1;
}

/*
 * Squid_asset_table_init  0x8c0ae2fc
 * fills the squid asset table (Sq_Bone_Home, Sq_KeyMotionPack, SQUID_BODY)
 * called by: game_init_sound_and_messages
 */
u32 Squid_asset_table_init(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    u32 uVar2;
    float fVar3;
    double dVar4;
    u64 in_xd0;
    char cVar5;
    char cVar6;
    u8 auStack_28[12];
    u8 auStack_1c[12];
    u8 auStack_10[16];

    cVar6 = '\0';
    cVar5 = '\0';
    g_8c2868dc = &PTR_s_Sq_Bone_Idle1_njm_8c13b504;
    g_8c2868e0 = &PTR_DAT_8c13b568;
    g_8c2868e4 = PTR_s_Sq_Bone_Home_njd_8c13b4dc;
    g_8c2868e8 = 0;
    g_8c2868ec = PTR_s_SQUID_BODY_8c13b4e8;
    g_8c2868f0 = PTR_s_Sq_KeyMotionPack_npd_8c13b4e0;
    g_8c2868f4 = PTR_s_hand_nt_njm_8c13b4f0;
    g_8c2868f8 = PTR_s_sq_mapset_1_pvm_8c13b4ec;
    g_8c2868fc = 7;
    g_8c286908 = 0x8c286878;
    g_8c28698c = 0x8c286cf4;
    g_8c286994 = 0x3f800000;
    g_8c2869a0 = CONCAT44(0x3ca3d70a, g_8c2869a0);
    g_8c2869a8 = 0x3f4ccccd;
    g_8c2869ac = 0x43b40000;
    g_8c2869c0 = 0x42100000;
    g_8c286978 = 0x8c286a24;
    g_8c28697c = 0x19;
    g_8c286980 = 0x8c286a94;
    g_8c286984 = 0x19;
    Vec3_set_xyz(auStack_10, a1, a2, a3);
    vec3_copy_8c023d8c(0x8c2869d0, auStack_10, a2, a3);
    uVar2 = 0xffffffff;
    object_dtor_delete(auStack_10, 0xffffffff, a2, a3);
    Vec3_set_xyz(auStack_1c, uVar2, a2, a3);
    vec3_copy_8c023d8c(0x8c2869dc, auStack_1c, a2, a3);
    uVar2 = 0xffffffff;
    object_dtor_delete(auStack_1c, 0xffffffff, a2, a3);
    Vec3_set_xyz(auStack_28, uVar2, a2, a3);
    vec3_copy_8c023d8c(0x8c2869e8, auStack_28, a2, a3);
    object_dtor_delete(auStack_28, 0xffffffff, a2, a3);
    if (cVar6 == '\0') {
        g_8c2869f8 = CONCAT44(DAT_8c2869f8_4, 0x43af0000);
        g_8c2869c4 = CONCAT44(DAT_8c2869c4_4, 0x42c80000);
        dVar4 = (double)CONCAT44(0x3f99999a, g_8c2869a0);
    } else {
        g_8c2869f8 = 0xec43af0000;
        g_8c2869c4 = 0xc842c80000;
        dVar4 = -4.2624166816346474e-250;
        in_xd0 = g_8c2869a0;
    }
    if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar4 * dVar4, 0);
    }
    uVar1 = in_xd0;
    if (cVar6 == '\0') {
        g_8c2869a0 = CONCAT44(g_8c2869a4, fVar3);
        uVar1 = g_8c2869a0;
    }
    g_8c2869a0 = uVar1;
    g_8c286a08 = 0xffff;
    g_8c286a0c = 1;
    g_8c286a10 = 0;
    g_8c286a14 = 0;
    return 0;
}

/*
 * nautilus_load_shell  0x8c0ae544
 * loads the Nt_Shell model, texture list and the NT_BODY texture
 * strings: "Failed to load Nt_Shell Model.."; "Failed to load Nt_Shell Texlist.."; "NT_BODY"; "Failed to load Nt_Shell
 * textuerr.."
 */
int nautilus_load_shell(u32 a0, u32 unused_a1, u32 a2, u32 *a3) {
    int iVar1;

    iVar1 = (*(code *)(&retry_until_done_0209b0))(a0, *(u32 *)(&DATA_8c13b5d8), *(u32 *)(&DATA_8c13b4d4), a2);
    if (iVar1 == 0) {
        (*(code *)(&report_error_message))("Failed to load Nt_Shell Model..", (&DATA_8c13b5ec) + 0x297, 1, 2);
    }
    iVar1 = (*(code *)(&retry_until_done_020aa8))(a0, *(u32 *)(&DATA_8c13b5d8), *(u32 *)(&DATA_8c13b4d4), a3);
    if (iVar1 == 0) {
        (*(code *)(&report_error_message))("Failed to load Nt_Shell Texlist..", (&DATA_8c13b5ec) + 0x297, 1, 2);
    }
    iVar1 = (*(code *)(&retry_until_done_020e80))(a0, "NT_BODY", *(u32 *)(&DATA_8c13b4d4), *a3);
    if (iVar1 == 0) {
        iVar1 =
            (*(code *)(&report_error_message))("Failed to load Nt_Shell textuerr..", (&DATA_8c13b5ec) + 0x297, 1, 2);
    }
    return iVar1;
}

/*
 * game_release_0ae640  0x8c0ae640
 * name hint from a string it uses: GRAPHICS SQUIDLINE; area name: game code; nothing names its area yet; behaviour
 * name: mostly calls release functions called by: Squid_FreeGraphicResource, game_scene_reset
 */
u32 game_release_0ae640(u32 a0, u32 a1, int a2) {
    u32 uVar1;
    u32 ar5_00;
    u32 ar6_00;

    (*(code *)(&CDCGD_release_type0))(a0, *(u32 *)(&DATA_8c13b5d8), *(u32 *)(&DATA_8c13b4d4), a1);
    ar6_00 = *(u32 *)(&DATA_8c13b4d4);
    ar5_00 = *(u32 *)(&DATA_8c13b5d8);
    uVar1 = CDCGD_release_type2(a0, ar5_00, ar6_00, a1);
    if (a2 != 0) {
        uVar1 = ninja_scan_loop_256670(a2);
    }
    return uVar1;
}

/*
 * nautilus_desc_init  0x8c0ae6a0
 * fills the "Nautilus" object description (size, offsets, flags)
 * called by: nautilus_group_reset
 * strings: "Nautilus"; "Nautilus"
 */
u32 nautilus_desc_init(int a0, u32 unused_a1, u32 a2, u32 a3) {
    char *ar5_00;
    int iVar1;
    char cVar2;

    cVar2 = '\0';
    ar5_00 = "Nautilus";
    strcpy(a0, "Nautilus");
    *(u32 *)(a0 + 0x14) = 0;
    *(u32 *)(a0 + 0x18) = 2;
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x1c) = 0x44a28000;
        *(u32 *)(a0 + 0x20) = 0x43480000;
        *(u32 *)(a0 + 0x24) = 0x44048000;
    } else {
        *(u64 *)(a0 + 0x1c) = 0x4348000044a28000;
        *(u64 *)(a0 + 0x20) = 0x4404800043480000;
        *(u64 *)(a0 + 0x24) = 0x8c02a1fc44048000;
    }
    clear_3_words(a0 + 0x2c, ar5_00, a2, a3);
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x2c) = 0xc1f00000;
        *(u32 *)(a0 + 0x30) = 0xc2b40000;
    } else {
        *(u64 *)(a0 + 0x2c) = 0xc2b40000c1f00000;
        *(u64 *)(a0 + 0x30) = 0x8c08a9b8c2b40000;
    }
    Vec3_set_one_08a9b8(a0 + 0x38);
    *(u32 *)(a0 + 0x44) = 10;
    *(u32 *)(a0 + 0x48) = *(u32 *)(a0 + 0x48) | 0x80000001;
    game_fill_loop_0ae7a4(a0 + 0x4c);
    for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
        *(u8 *)(a0 + iVar1 + 0xd8) = 0;
    }
    *(u8 *)(a0 + 0xd8) = 1;
    *(u8 *)(a0 + 200) = 0;
    *(u32 *)(a0 + 0xcc) = 0;
    *(u32 *)(a0 + 0xe8) = 1;
    return 0xe8;
}

/*
 * game_fill_loop_0ae7a4  0x8c0ae7a4
 * area name: game code; nothing names its area yet; behaviour name: a loop that writes memory
 * called by: nautilus_desc_init
 */
u32 game_fill_loop_0ae7a4(int a0) {
    int iVar1;

    *(u32 *)(a0 + 4) = 6;
    *(u32 *)(a0 + 8) = 0xc;
    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x14) = 0;
    *(u8 *)(a0 + 0x18) = 0;
    *(u8 *)(a0 + 0x19) = 0;
    *(u32 *)(a0 + 0x1c) = 0;
    *(u32 *)(a0 + 0x20) = 0;
    *(u32 *)(a0 + 0x24) = 0;
    *(u16 *)(a0 + 0x28) = 0;
    *(u16 *)(a0 + 0x2a) = 0;
    *(u32 *)(a0 + 0x2c) = 0;
    *(u32 *)(a0 + 0x30) = 0;
    for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
        *(char *)(iVar1 * 0xc + a0 + 0x34) = (char)iVar1;
        *(u8 *)(iVar1 * 0xc + a0 + 0x35) = 0;
        *(u32 *)(iVar1 * 0xc + a0 + 0x38) = 0;
        *(u8 *)(iVar1 * 0xc + a0 + 0x3c) = 0;
    }
    return 6;
}

/*
 * game_uses_rand_0ae84c  0x8c0ae84c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: CSquidLine_uses_matrix_push_0ad354, game_draw_0ad7ec
 */
u32 game_uses_rand_0ae84c(int a0, u64 *a1, code *a2, int a3) {
    u64 *puVar1;
    double *pdVar2;
    float *pfVar3;
    u32 uVar4;
    u8 *ar4_00;
    int ar4_01;
    u32 uVar5;
    u64 *ar5_00;
    code *ar6_00;
    int iVar6;
    int iVar7;
    int iVar8;
    float fVar9;
    double dVar10;
    u64 in_xd0;
    char cVar11;
    char cVar12;
    u8 auStack_68[12];
    u8 auStack_5c[16];
    u8 auStack_4c[16];
    u8 auStack_3c[12];
    float fStack_30;
    float fStack_2c;
    float fStack_28;
    u32 uStack_24;

    cVar12 = '\0';
    cVar11 = '\0';
    iVar6 = 0;
    ar6_00 = a2;
    Vec3_ctor_zero(&fStack_30, a1, a2);
    uVar4 = 0;
    for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
        ar6_00 = (code *)0x4c;
        if (*(int *)(iVar8 * 0x4c + 0x8c2859b4) == 0) {
            uVar4 = rand();
            uVar5 = 0x1e;
            iVar7 = libgcc_divide_helper_01031c(uVar4, 0x1e, ar6_00);
            if (iVar7 == 0) {
                for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
                    uVar5 = 0x8c285974;
                    *(u8 *)(iVar8 * 0x4c + iVar7 * 4 + 0x8c2859a7) = 1;
                }
                *(u32 *)(iVar8 * 0x4c + 0x8c2859b8) = 10;
                *(u32 *)(iVar8 * 0x4c + 0x8c2859b4) = 1;
                set_fields_0_4_8(auStack_3c, uVar5);
                Vec3_assign_copy(iVar8 * 0x4c + 0x8c285998, auStack_3c);
                ar4_00 = auStack_3c;
                free_if_nonnull_wrap_016ac4(ar4_00, 0xffffffff, ar6_00, a3);
                puVar1 = (u64 *)(iVar8 * 0x4c + 0x8c285974);
                if (cVar12 == '\0') {
                    *(u32 *)puVar1 = *(u32 *)a1;
                } else {
                    *puVar1 = *a1;
                }
                puVar1 = (u64 *)(iVar8 * 0x4c + 0x8c285978);
                if (cVar12 == '\0') {
                    *(u32 *)puVar1 = *(u32 *)((int)a1 + 4);
                } else {
                    *puVar1 = *(u64 *)((int)a1 + 4);
                }
                puVar1 = (u64 *)(iVar8 * 0x4c + 0x8c28597c);
                ar5_00 = a1 + 1;
                if (cVar12 == '\0') {
                    *(u32 *)puVar1 = *(u32 *)ar5_00;
                } else {
                    *puVar1 = *ar5_00;
                }
                uVar4 = rand();
                iVar7 = libgcc_divide_helper_01031c(uVar4, 0x14, ar6_00);
                if (cVar12 == '\0') {
                    dVar10 = (double)CONCAT44(0x42c80000, (float)iVar7);
                } else {
                    dVar10 = 7.64472037604589e-312;
                }
                if (cVar11 == '\0') {
                    fStack_30 = SUB84(dVar10, 0) / (float)((u64)dVar10 >> 0x20);
                } else {
                    fStack_30 = SUB84(dVar10 / dVar10, 0);
                }
                if (cVar12 != '\0') {
                    fStack_30 = (float)in_xd0;
                    fStack_2c = (float)((u64)in_xd0 >> 0x20);
                }
                uVar4 = rand();
                uVar5 = 2;
                iVar7 = libgcc_divide_helper_01031c(uVar4, 2, ar6_00);
                if (iVar7 == 0) {
                    if (cVar12 == '\0') {
                        dVar10 = (double)CONCAT44(0xbf800000, fStack_30);
                    } else {
                        in_xd0 = CONCAT44(fStack_2c, fStack_30);
                        dVar10 = 6.04234156954332e-312;
                    }
                    if (cVar11 == '\0') {
                        fStack_30 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
                    } else {
                        fStack_30 = SUB84(dVar10 * dVar10, 0);
                    }
                    if (cVar12 != '\0') {
                        fStack_30 = (float)in_xd0;
                        fStack_2c = (float)((u64)in_xd0 >> 0x20);
                    }
                }
                uVar4 = rand();
                uVar5 = 0x14;
                iVar7 = libgcc_divide_helper_01031c(uVar4, 0x14, ar6_00);
                if (cVar12 == '\0') {
                    dVar10 = (double)CONCAT44(0x42c80000, (float)iVar7);
                } else {
                    dVar10 = 7.64472037604589e-312;
                }
                if (cVar11 == '\0') {
                    fStack_2c = SUB84(dVar10, 0) / (float)((u64)dVar10 >> 0x20);
                } else {
                    fStack_2c = SUB84(dVar10 / dVar10, 0);
                }
                if (cVar12 != '\0') {
                    fStack_2c = (float)in_xd0;
                    fStack_28 = (float)((u64)in_xd0 >> 0x20);
                }
                uVar4 = rand();
                uVar5 = 2;
                iVar7 = libgcc_divide_helper_01031c(uVar4, 2, ar6_00);
                if (iVar7 == 0) {
                    if (cVar12 == '\0') {
                        dVar10 = (double)CONCAT44(0xbf800000, fStack_2c);
                    } else {
                        in_xd0 = CONCAT44(fStack_28, fStack_2c);
                        dVar10 = 6.04234156954332e-312;
                    }
                    if (cVar11 == '\0') {
                        fStack_2c = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
                    } else {
                        fStack_2c = SUB84(dVar10 * dVar10, 0);
                    }
                    if (cVar12 != '\0') {
                        fStack_2c = (float)in_xd0;
                        fStack_28 = (float)((u64)in_xd0 >> 0x20);
                    }
                }
                uVar4 = rand();
                uVar5 = 100;
                iVar7 = libgcc_divide_helper_01031c(uVar4, 100, ar6_00);
                if (cVar12 == '\0') {
                    dVar10 = (double)CONCAT44(0x42c80000, (float)iVar7);
                } else {
                    dVar10 = 7.64472037604589e-312;
                }
                if (cVar11 == '\0') {
                    fVar9 = SUB84(dVar10, 0) / (float)((u64)dVar10 >> 0x20);
                } else {
                    fVar9 = SUB84(dVar10 / dVar10, 0);
                }
                fStack_28 = fVar9;
                if (cVar12 != '\0') {
                    fStack_28 = (float)in_xd0;
                    uStack_24 = (u32)((u64)in_xd0 >> 0x20);
                }
                uVar4 = rand();
                uVar5 = 2;
                iVar7 = libgcc_divide_helper_01031c(uVar4, 2, ar6_00);
                if (iVar7 == 0) {
                    if (cVar12 == '\0') {
                        dVar10 = (double)CONCAT44(0xbf800000, fStack_28);
                    } else {
                        in_xd0 = CONCAT44(uStack_24, fStack_28);
                        dVar10 = 6.04234156954332e-312;
                    }
                    if (cVar11 == '\0') {
                        fVar9 = SUB84(dVar10, 0) * (float)((u64)dVar10 >> 0x20);
                    } else {
                        fVar9 = SUB84(dVar10 * dVar10, 0);
                    }
                    fStack_28 = fVar9;
                    if (cVar12 != '\0') {
                        fStack_28 = (float)in_xd0;
                        uStack_24 = (u32)((u64)in_xd0 >> 0x20);
                    }
                }
                Vec3_ctor_copy_wrap_02ace4(a0 + 0x53c, uVar5, ar6_00, a3, auStack_4c);
                Vec3_assign(iVar8 * 0x4c + 0x8c285984, auStack_4c, ar6_00, a3);
                Vec3_dtor(auStack_4c, 0xffffffff, ar6_00, a3);
                pfVar3 = &fStack_30;
                Vec3_add_assign(iVar8 * 0x4c + 0x8c285984, pfVar3);
                iVar7 = iVar8 * 0x4c + 0x8c285984;
                Vec3_length(iVar7, pfVar3, ar6_00, a3);
                uVar4 = rand();
                uVar5 = 10;
                iVar7 = libgcc_divide_helper_01031c(uVar4, 10, ar6_00);
                pdVar2 = (double *)(iVar8 * 0x4c + 0x8c285994);
                if (cVar11 == '\0') {
                    dVar10 = (double)CONCAT44((float)iVar7, fVar9);
                } else {
                    dVar10 = (double)iVar7;
                }
                if (cVar12 == '\0') {
                    *(int *)pdVar2 = (int)((u64)dVar10 >> 0x20);
                } else {
                    *pdVar2 = dVar10;
                }
                ar4_01 = a0 + 0x53c;
                iVar7 = get_field_314_0b58d0(ar4_01);
                if (iVar7 < 1) {
                    ar6_00 = rand;
                    uVar4 = rand();
                    uVar4 = libgcc_divide_helper_01031c(uVar4, 3, ar6_00);
                    *(u32 *)(iVar8 * 0x4c + 0x8c2859bc) = uVar4;
                } else {
                    uVar4 = rand();
                    ar6_00 = (code *)libgcc_divide_helper_01031c(uVar4, 6, ar6_00);
                    *(code **)(iVar8 * 0x4c + 0x8c2859bc) = ar6_00;
                    iVar7 = get_field_124_027930(a0 + 0x53c, 0x53c, ar6_00, a3);
                    if ((iVar7 == 2) && (*(int *)(iVar8 * 0x4c + 0x8c2859bc) < 3)) {
                        iVar7 = iVar8 * 0x4c;
                        a3 = iVar7 + 0x8c285974;
                        ar6_00 = (code *)(*(int *)(iVar7 + 0x8c2859bc) + 3);
                        *(code **)(iVar7 + 0x8c2859bc) = ar6_00;
                    }
                }
            }
        }
        uVar4 = 0x4c;
        if (*(int *)(iVar8 * 0x4c + 0x8c2859b4) == 1)
            break;
    }
    for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
        if (0 < *(int *)(iVar8 * 0x4c + 0x8c2859b4)) {
            if (*(int *)(a0 + 0x1710) < (int)a2) {
                *(int *)(iVar8 * 0x4c + 0x8c2859b4) =
                    *(int *)(iVar8 * 0x4c + 0x8c2859b4) + *(int *)(iVar8 * 0x4c + 0x8c2859b8);
            } else if (1 < *(int *)(iVar8 * 0x4c + 0x8c2859b4)) {
                ar6_00 = (code *)0x40;
                *(int *)(iVar8 * 0x4c + 0x8c2859b4) =
                    *(int *)(iVar8 * 0x4c + 0x8c2859b4) + *(int *)(iVar8 * 0x4c + 0x8c2859b8);
            }
            pfVar3 = (float *)(iVar8 * 0x4c + 0x8c285998);
            puVar1 = (u64 *)(iVar8 * 0x4c + 0x8c285998);
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(0x3dcccccd, *(u32 *)puVar1);
            } else {
                in_xd0 = *puVar1;
                dVar10 = 6.71062932991538e-312;
            }
            if (cVar11 == '\0') {
                fVar9 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
            } else {
                fVar9 = SUB84(dVar10 + dVar10, 0);
            }
            if (cVar12 == '\0') {
                *pfVar3 = fVar9;
            } else {
                *(u64 *)pfVar3 = in_xd0;
            }
            pfVar3 = (float *)(iVar8 * 0x4c + 0x8c28599c);
            puVar1 = (u64 *)(iVar8 * 0x4c + 0x8c28599c);
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(0x3dcccccd, *(u32 *)puVar1);
            } else {
                in_xd0 = *puVar1;
                dVar10 = 6.71062932991538e-312;
            }
            if (cVar11 == '\0') {
                fVar9 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
            } else {
                fVar9 = SUB84(dVar10 + dVar10, 0);
            }
            if (cVar12 == '\0') {
                *pfVar3 = fVar9;
            } else {
                *(u64 *)pfVar3 = in_xd0;
            }
            pfVar3 = (float *)(iVar8 * 0x4c + 0x8c2859a0);
            puVar1 = (u64 *)(iVar8 * 0x4c + 0x8c2859a0);
            if (cVar12 == '\0') {
                dVar10 = (double)CONCAT44(0x3dcccccd, *(u32 *)puVar1);
            } else {
                in_xd0 = *puVar1;
                dVar10 = 6.71062932991538e-312;
            }
            if (cVar11 == '\0') {
                fVar9 = SUB84(dVar10, 0) + (float)((u64)dVar10 >> 0x20);
            } else {
                fVar9 = SUB84(dVar10 + dVar10, 0);
            }
            if (cVar12 == '\0') {
                *pfVar3 = fVar9;
            } else {
                *(u64 *)pfVar3 = in_xd0;
            }
            Vec3_scale(iVar8 * 0x4c + 0x8c285984, iVar8 * 0x4c + 0x8c285994, ar6_00, a3, auStack_5c);
            Vec3_add_assign(iVar8 * 0x4c + 0x8c285974, auStack_5c);
            Vec3_dtor(auStack_5c, 0xffffffff, ar6_00, a3);
            if (0xfe < *(int *)(iVar8 * 0x4c + 0x8c2859b4)) {
                *(u32 *)(iVar8 * 0x4c + 0x8c2859b4) = 0xff;
                *(u32 *)(iVar8 * 0x4c + 0x8c2859b8) = 0xfffffff6;
            }
            if (*(int *)(iVar8 * 0x4c + 0x8c2859b4) < 1) {
                *(u32 *)(iVar8 * 0x4c + 0x8c2859b4) = 0;
                *(u32 *)(iVar8 * 0x4c + 0x8c2859b8) = 10;
                set_fields_0_4_8(auStack_68, 0x4c);
                Vec3_assign_copy(iVar8 * 0x4c + 0x8c285998, auStack_68);
                free_if_nonnull_wrap_016ac4(auStack_68, 0xffffffff, ar6_00, a3);
            }
            for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
                *(char *)(iVar8 * 0x4c + iVar7 * 4 + 0x8c2859a7) = (char)*(u32 *)(iVar8 * 0x4c + 0x8c2859b4);
            }
        }
    }
    for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
        if (*(int *)(a0 + 0x1710) < (int)a2) {
            a3 = 4;
            ar6_00 = (code *)(iVar8 * 0x4c + 0x8c2859a4);
            Class_129808_set_params_by_mode(iVar8 * 0x44 + a0 + 0x9c4, &g_8c13b474, ar6_00, 4);
        } else if (*(int *)(iVar8 * 0x4c + 0x8c2859b4) < 2) {
            iVar6 = iVar6 + 1;
            *(u32 *)(iVar8 * 0x4c + 0x8c2859b4) = 0;
        } else {
            a3 = 4;
            ar6_00 = (code *)(iVar8 * 0x4c + 0x8c2859a4);
            Class_129808_set_params_by_mode(iVar8 * 0x44 + a0 + 0x9c4, &g_8c13b474, ar6_00, 4);
        }
    }
    *(int *)(a0 + 0x1710) = *(int *)(a0 + 0x1710) + 1;
    if (iVar6 == 10) {
        *(u32 *)(a0 + 0x170c) = 0;
        *(u32 *)(a0 + 0x1710) = 0;
    }
    Vec3_dtor(&fStack_30, 0xffffffff, ar6_00, a3);
    return (u32)(iVar6 == 10);
}

/*
 * game_vec_0af2b8  0x8c0af2b8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
int game_vec_0af2b8(int a0, u32 a1, u32 a2, u32 a3) {
    u8 auStack_14[16];

    Vec3_ctor_zero(a0, a1, a2);
    Vec3_ctor_zero(a0 + 0x10, a1, a2);
    Vec3_set_one(a0 + 0x24);
    *(u32 *)(a0 + 0x40) = 0;
    *(u32 *)(a0 + 0x44) = 0x14;
    *(u32 *)(a0 + 0x48) = 0;
    set_fields_0_4_8(auStack_14, a1);
    Vec3_assign_copy(a0 + 0x24, auStack_14);
    free_if_nonnull_wrap_016ac4(auStack_14, 0xffffffff, a2, a3);
    *(u32 *)(a0 + 0x30) = 0xff2f2f2f;
    *(u32 *)(a0 + 0x34) = 0xff2f2f2f;
    *(u32 *)(a0 + 0x38) = 0xff2f2f2f;
    *(u32 *)(a0 + 0x3c) = 0xff2f2f2f;
    *(u8 *)(a0 + 0x33) = 0;
    *(u8 *)(a0 + 0x37) = 0;
    *(u8 *)(a0 + 0x3b) = 0;
    *(u8 *)(a0 + 0x3f) = 0;
    return a0;
}

/*
 * game_release_0af368  0x8c0af368
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 */
int game_release_0af368(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_016ac4(a0 + 0x24, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x10, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * static_init_vec3s_285938  0x8c0af3c4
 * static initialiser: builds 20 global Vec3 constants (8c285938..8c286ccc) and registers their destructors
 */
u32 static_init_vec3s_285938(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    u32 uVar4;
    char cVar5;

    cVar5 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c1262d0, a1, a2, a3);
    uVar3 = 0x8c285938;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285938, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1262e0, pcVar2, uVar3, a3);
    uVar3 = 0x8c285944;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285944, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1262f0, pcVar2, uVar3, a3);
    uVar3 = 0x8c285950;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c285950, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126300, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c28595c, a3);
    if (cVar5 == '\0') {
        g_8c126310 = CONCAT44(_UNK_8c126314, 0x800000);
        /* WARNING: Read-only address (ram,0x8c126314) is written */
    } else {
        g_8c126310 = 0xffffffff00800000;
    }
    uVar1 = 0x4c;
    vec_new_array(0x8c285974, game_vec_0af2b8, game_release_0af368, 0x4c, 10);
    global_list_push(0, destroy_array_8c285974, 0x8c285968, uVar1);
    uVar4 = 0x4c;
    vec_new_array(0x8c285c78, game_vec_0af2b8, game_release_0af368, 0x4c, 0x28);
    uVar1 = 0x8c285c6c;
    pcVar2 = destroy_array_8c285c78;
    global_list_push(0, destroy_array_8c285c78, 0x8c285c6c, uVar4);
    uVar1 = game_struct_02452c_ctor(0x8c2868d8, pcVar2);
    uVar3 = 0x8c2868cc;
    pcVar2 = game_release_03a4ac;
    global_list_push(uVar1, game_release_03a4ac, 0x8c2868cc, uVar4);
    uVar1 = game_uses_set_fields_0_4_8_024824(&g_8c286a08);
    global_list_push(uVar1, free_if_nonnull_wrap_03a454, 0x8c2869fc, uVar4);
    uVar1 = 4;
    vec_new_array(0x8c286a24, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 0x19);
    global_list_push(0, destroy_array_8c286a24, 0x8c286a18, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c286a94, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 0x19);
    global_list_push(0, destroy_array_8c286a94, 0x8c286a88, uVar1);
    uVar1 = 4;
    vec_new_array(0x8c286b04, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 3);
    global_list_push(0, destroy_array_8c286b04, 0x8c286af8, uVar1);
    uVar4 = 4;
    vec_new_array(0x8c286b1c, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 3);
    uVar1 = 0x8c286b10;
    pcVar2 = destroy_array_8c286b1c;
    global_list_push(0, destroy_array_8c286b1c, 0x8c286b10, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286b34, pcVar2, uVar1, uVar4);
    uVar3 = 0x8c286b28;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286b28, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286b50, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286b44;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286b44, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286b6c, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286b60;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286b60, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286b88, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286b7c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286b7c, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286ba4, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286b98;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286b98, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286bc0, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286bb4;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286bb4, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286bdc, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286bd0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286bd0, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286bf8, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286bec;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286bec, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286c14, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286c08;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286c08, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286c30, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286c24;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286c24, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286c4c, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286c40;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286c40, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286c68, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286c5c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286c5c, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286c84, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286c78;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286c78, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286ca0, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286c94;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286c94, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286cbc, pcVar2, uVar3, uVar4);
    uVar3 = 0x8c286cb0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286cb0, uVar4);
    uVar1 = Vec3_ctor_xyz(0x8c286cd8, pcVar2, uVar3, uVar4);
    global_list_push(uVar1, Vec3_dtor, 0x8c286ccc, uVar4);
    uVar3 = 0x8c286b6c;
    uVar1 = Class_129938_ctor_init(0x8c286cf4, 0x8c286b34, 0x8c286b50, 0x8c286b6c, 0x8c286b88, 0x8c286ba4, 0x8c286bc0,
                                   0x8c286bdc, 0x8c286bf8);
    uVar1 = global_list_push(uVar1, Class_129938_dtor, 0x8c286ce8, uVar3);
    return uVar1;
}

/*
 * destroy_array_8c286b1c  0x8c0af978
 * destroys the global array at 0x8c286b1c
 */
u32 destroy_array_8c286b1c(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c286b1c, free_if_nonnull_wrap_03a3dc, 4, 3);
    return uVar1;
}

/*
 * destroy_array_8c286b04  0x8c0af99c
 * destroys the global array at 0x8c286b04
 */
u32 destroy_array_8c286b04(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c286b04, free_if_nonnull_wrap_0247b0, 4, 3);
    return uVar1;
}

/*
 * destroy_array_8c286a94  0x8c0af9c0
 * destroys the global array at 0x8c286a94
 */
u32 destroy_array_8c286a94(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c286a94, free_if_nonnull_wrap_03a3dc, 4, 0x19);
    return uVar1;
}

/*
 * destroy_array_8c286a24  0x8c0af9e4
 * destroys the global array at 0x8c286a24
 */
u32 destroy_array_8c286a24(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c286a24, free_if_nonnull_wrap_0247b0, 4, 0x19);
    return uVar1;
}

/*
 * destroy_array_8c285c78  0x8c0afa08
 * destroys the global array at 0x8c285c78
 */
u32 destroy_array_8c285c78(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c285c78, game_release_0af368, 0x4c, 0x28);
    return uVar1;
}

/*
 * destroy_array_8c285974  0x8c0afa2c
 * destroys the global array at 0x8c285974
 */
u32 destroy_array_8c285974(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c285974, game_release_0af368, 0x4c, 10);
    return uVar1;
}

/*
 * Class_12b2ac_ctor  0x8c0afa50
 * Class_129cbc base constructor, Class_12b2ac vtable, its vectors and sub-object (+0x248), then the state reset
 * called by: CSquid_Init
 */
u32 *Class_12b2ac_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    Class_129cbc_ctor(a0, a1, a2, a3);
    *a0 = (&DATA_8c12b2ac);
    Vec3_ctor_zero((int)a0 + 0x224, a1, a2);
    Vec3_set_zero((int)a0 + 0x234);
    Class_129cf8_ctor((int)a0 + 0x248);
    Vec3_ctor_zero((int)a0 + 0x2bc, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x2d4, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x2e4, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x2f4, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x304, a1, a2);
    Vec3_ctor_zero((int)a0 + 0x338, a1, a2);
    Class_12b2ac_reset(a0, a1, a2, a3);
    return a0;
}

/*
 * Class_12b2ac_reset  0x8c0afb1c
 * stops the timer, clears the motion state and sets the action table (9 entries at 8c13ba24)
 * called by: Class_12b2ac_ctor
 */
u32 Class_12b2ac_reset(int a0, u32 a1, u32 a2, u32 a3) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    *(u32 *)(a0 + 0x31c) = 0;
    *(u32 *)(a0 + 0x314) = 0;
    *(u32 *)(a0 + 0x324) = 0;
    timer_stop_94(a0, a1, a2, a3);
    *(u32 *)(a0 + 0x328) = 0xffffffff;
    *(u32 *)(a0 + 0x32c) = 0;
    *(u32 *)(a0 + 0x220) = 0;
    *(u32 *)(a0 + 0x240) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x334) = 0;
    } else {
        *(u64 *)(a0 + 0x334) = (u64)extraout_fr1;
    }
    vec3_clear(a0 + 0x338, a1, a2, a3);
    *(u32 *)(a0 + 0x348) = 0;
    g_8c286dec = 0;
    *(u8 ***)(a0 + 0x1c8) = &PTR_DAT_8c13ba24;
    *(u32 *)(a0 + 0x1cc) = 9;
    return 0x1cc;
}

/*
 * Class_12b2ac_dtor  0x8c0afbcc
 * stores the vtable 0x8c12b2ac
 * called by: CAnimal_m0_0aca4c
 */
u32 *Class_12b2ac_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b2ac;
        Vec3_dtor(a0 + 0xce, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xc1, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xbd, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xb9, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xb5, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0xaf, 0xffffffff, a2, a3);
        Class_129cf8_dtor(a0 + 0x92, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x8d, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x89, 0xffffffff, a2, a3);
        ar5_00 = 0;
        Class_129cbc_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b2ac_m6_0afcc0  0x8c0afcc0
 */
u32 Class_12b2ac_m6_0afcc0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int *piVar2;
    u32 uVar3;
    u8 *puVar4;
    u32 uVar5;

    copy6_to_fields(a0, 0x8c286dbc, a2, a3);
    *(u32 *)(0x128 + a0) = a1;
    if (1 < *(int *)(0x314 + a0)) {
        a3 = 0;
        a2 = 0xffffffff;
        (*(code *)(&CAnimBody_SetAnimation))(a0 + 0xb0, 0xe, 0xffffffff, 0);
    }
    uVar3 = 0x12;
    uVar1 = array_at_field_14(a0 + 0xb0, 0x12, a2, a3);
    piVar2 = (int *)deref_u32(uVar1);
    uVar1 = 0;
    if (*(int *)(*piVar2 + 0x18) != 0) {
        uVar3 = 0x12;
        uVar1 = array_at_field_14(a0 + 0xb0, 0x12, a2, a3);
        uVar1 = deref_u32(uVar1);
        uVar5 = 1;
        puVar4 = (&DATA_8c13ba4c);
        record18_take(a0 + 0xb0, uVar1, (&DATA_8c13ba4c), 1);
        uVar3 = 0x13;
        uVar1 = array_at_field_14(a0 + 0xb0, 0x13, puVar4, uVar5);
        uVar1 = deref_u32(uVar1);
        uVar5 = 1;
        puVar4 = (&DATA_8c13ba4c) + 0x18;
        record18_take(a0 + 0xb0, uVar1, puVar4, 1);
        uVar3 = 0x14;
        uVar1 = array_at_field_14(a0 + 0xb0, 0x14, puVar4, uVar5);
        uVar1 = deref_u32(uVar1);
        uVar1 = record18_take(a0 + 0xb0, uVar1, (&DATA_8c13ba4c) + 0x30, 1);
    }
    return uVar1;
}

/*
 * Class_12b2ac_m5_0afddc  0x8c0afddc
 */
int Class_12b2ac_m5_0afddc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int ar5_00;
    u32 uVar2;
    u32 uVar3;
    u64 in_dr0;
    char cVar4;
    u64 uStack_1c;
    u64 uStack_10;

    cVar4 = '\0';
    if (*(int *)(a0 + 300) == 0) {
        iVar1 = get_field_10_031590(a0 + 0xb0);
        uVar3 = 0;
        uVar2 = 0xffffffff;
        ar5_00 = iVar1 + -1;
        CAnimBody_SetAnimation(a0 + 0xb0, ar5_00, 0xffffffff, 0);
        CAnimBody_SetFrame(a0 + 0xb0, ar5_00, uVar2, uVar3);
        *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
        rand_float(a0, ar5_00, uVar2);
        uStack_10 = in_dr0;
        if (cVar4 == '\0') {
            uStack_10 = CONCAT44(iVar1, (int)((u64)in_dr0 >> 0x20));
        }
        iVar1 = 0x1c;
        if (cVar4 == '\0') {
            *(int *)(a0 + 0x34c) = (int)uStack_10;
        } else {
            *(u64 *)(a0 + 0x34c) = uStack_10;
        }
    } else if (*(int *)(a0 + 300) == 1) {
        iVar1 = CAnimBody_AdvanceFrame_033d88(a0 + 0xb0, a1, a2, a3);
        if (iVar1 == 7) {
            uVar3 = 100;
            uVar2 = 0;
            iVar1 = rand_range(a0, 0, 100);
            if (iVar1 < 0x1f) {
                iVar1 = 300;
                *(int *)(a0 + 300) = *(int *)(a0 + 300) + 1;
            } else {
                rand_float(a0, uVar2, uVar3);
                uStack_1c = in_dr0;
                if (cVar4 == '\0') {
                    uStack_1c = CONCAT44(iVar1, (int)((u64)in_dr0 >> 0x20));
                }
                iVar1 = 0x10;
                if (cVar4 == '\0') {
                    *(int *)(a0 + 0x34c) = (int)uStack_1c;
                } else {
                    *(u64 *)(a0 + 0x34c) = uStack_1c;
                }
            }
        }
    } else {
        iVar1 = CAnimBody_AdvanceFrame_033b98(a0 + 0xb0, a1, a2, a3);
        if (iVar1 == 1) {
            iVar1 = 300;
            *(int *)(a0 + 300) = *(int *)(a0 + 300) + -1;
        }
    }
    return iVar1;
}

/*
 * Class_12b2ac_m1_0aff3c  0x8c0aff3c
 */
u32 Class_12b2ac_m1_0aff3c(int a0, u32 *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 *puVar3;
    code *ar5_00;
    int iVar4;
    double in_dr0;
    double dVar5;
    double dVar6;
    float fVar8;
    double in_dr2;
    double in_dr14;
    u64 in_xd0;
    double in_xd14;
    bool bVar9;
    char cVar10;
    char cVar11;
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
    u8 auStack_58[12];
    u8 auStack_4c[16];
    u8 auStack_3c[12];
    u8 auStack_30[16];
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    float fVar7;

    cVar11 = '\0';
    cVar10 = '\0';
    *(u32 *)(a0 + 0x240) = 0;
    puVar3 = a1;
    if (*(int *)(a0 + 0x124) == 5) {
        game_vec_03207c(a0, a1);
    } else {
        game_vec_03207c(a0, a1);
    }
    if (*(int *)(a0 + 0x124) == 8) {
        Vec3_ctor_xyz(auStack_30, puVar3, a2, a3);
        iVar4 = Vec3_equal(a0 + 0x14, auStack_30);
        Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
        ar5_00 = NULL;
        if (iVar4 != 0) {
            vec3_copy_8c02b5fc(auStack_3c, a0 + 0x14c, a2);
            Vec3_rotate_euler_deg(a0 + 0x14, auStack_3c, a2, a3, auStack_4c);
            Vec3_assign(a0 + 0x14, auStack_4c, a2, a3);
            Vec3_dtor(auStack_4c, 0xffffffff, a2, a3);
            object_dtor_delete(auStack_3c, 0xffffffff, a2, a3);
            vec3_copy_8c02b5fc(auStack_58, a0 + 0x14c, a2);
            Vec3_rotate_euler_deg(a0 + 0x80, auStack_58, a2, a3, auStack_68);
            Vec3_assign(a0 + 0x80, auStack_68, a2, a3);
            Vec3_dtor(auStack_68, 0xffffffff, a2, a3);
            object_dtor_delete(auStack_58, 0xffffffff, a2, a3);
            ar5_00 = clear_3_words;
            clear_3_words(a0 + 0x14c, clear_3_words, a2, a3);
        }
        vec3_clear(a0 + 0x13c, ar5_00, a2, a3);
        Class_12b2ac_vec_031700(a0, ar5_00, a2, a3);
    } else {
        Class_129cbc_m1_031598(a0, a1, a2, a3);
    }
    if ((a1[4] == 3) || (*(int *)(a0 + 0x68) != 0)) {
        Class_12b2ac_uses_timer_stop_94_0b5344(a0, a1[4], a2, a3);
        uVar1 = 1;
        set_field_3c_02f2c0(*a1, 1);
        if (*(int *)(a0 + 0x124) != 2) {
            uVar1 = *(u32 *)(a1[1] + 4);
            timer_vec_031ab4(a0, uVar1, a2, a3);
        }
        game_float_calc_0324ac(a0);
        Vec3_scale(a0 + 0x14, a0 + 0x28, a2, a3, auStack_78);
        Vec3_add(auStack_78, a0 + 0x90, a2, a3, auStack_88);
        Vec3_add(auStack_88, a0 + 0x6c, a2, a3, auStack_98);
        Vec3_add(auStack_98, a0 + 0x13c, a2, a3, auStack_a8);
        Vec3_add(auStack_a8, a0 + 0x338, a2, a3, auStack_b8);
        Vec3_assign(a0 + 4, auStack_b8, a2, a3);
        Vec3_dtor(auStack_b8, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_a8, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_98, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_88, 0xffffffff, a2, a3);
        iVar4 = -1;
        Vec3_dtor(auStack_78, 0xffffffff, a2, a3);
    } else {
        a3 = a1[6];
        a2 = a1[3];
        uVar1 = Class_12b2ac_vec_0b0784(a0, *a1, a2, a3);
        set_field_3c_02f2c0(*a1, uVar1);
        uVar1 = *(u32 *)(a1[1] + 4);
        timer_vec_031ab4(a0, uVar1, a2, a3);
        game_float_calc_0324ac(a0);
        Vec3_scale(a0 + 0x14, a0 + 0x28, a2, a3, auStack_c8);
        Vec3_add(auStack_c8, a0 + 0x90, a2, a3, auStack_d8);
        Vec3_add(auStack_d8, a0 + 0x6c, a2, a3, auStack_e8);
        Vec3_add(auStack_e8, a0 + 0x13c, a2, a3, auStack_f8);
        Vec3_add(auStack_f8, a0 + 0x338, a2, a3, auStack_108);
        Vec3_assign(a0 + 4, auStack_108, a2, a3);
        Vec3_dtor(auStack_108, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_f8, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_e8, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_d8, 0xffffffff, a2, a3);
        uVar1 = 0xffffffff;
        Vec3_dtor(auStack_c8, 0xffffffff, a2, a3);
        vec3_clear(a0 + 0x338, uVar1, a2, a3);
        Vec3_ctor_zero(&uStack_20, uVar1, a2);
        Vec3_add(*(u32 *)a1[1], a0 + 4, a2, a3, auStack_118);
        Vec3_assign(&uStack_20, auStack_118, a2, a3);
        Vec3_dtor(auStack_118, 0xffffffff, a2, a3);
        (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], *(u32 *)a1[1], a2, a3);
        if (cVar11 == '\0') {
            in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), (int)((u64)in_dr0 >> 0x20));
            in_dr0 = in_xd14;
        }
        if (((*(int *)(a0 + 0x124) != 8) && (*(int *)(a0 + 0x124) != 5)) && (*(int *)(a0 + 0x124) != 6)) {
            if (cVar11 == '\0') {
                in_dr2 = (double)CONCAT44(uStack_1c, SUB84(in_dr2, 0));
                dVar5 = (double)CONCAT44(SUB84(in_dr14, 0), 0x42100000);
            } else {
                in_dr2 = (double)CONCAT44(uStack_18, uStack_1c);
                in_xd0 = 0x4000000042100000;
                dVar5 = in_dr0;
            }
            if (cVar10 == '\0') {
                fVar7 = (float)((u64)dVar5 >> 0x20) + SUB84(dVar5, 0);
                dVar5 = (double)CONCAT44(fVar7, SUB84(dVar5, 0));
                bVar9 = (float)((u64)in_dr2 >> 0x20) < fVar7;
            } else {
                dVar5 = dVar5 + dVar5;
                bVar9 = in_dr2 < dVar5;
            }
            if (bVar9) {
                if (cVar11 == '\0') {
                    dVar5 = (double)CONCAT44(0x42100000, SUB84(dVar5, 0));
                } else {
                    dVar5 = 2.0000004922039807;
                }
                if (cVar10 == '\0') {
                    in_dr14 =
                        (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) + (float)((u64)dVar5 >> 0x20));
                } else {
                    in_dr14 = in_dr14 + dVar5;
                }
                if (cVar11 == '\0') {
                    dVar5 = (double)CONCAT44(uStack_1c, SUB84(dVar5, 0));
                } else {
                    dVar5 = (double)CONCAT44(uStack_18, uStack_1c);
                }
                if (cVar10 == '\0') {
                    in_dr14 =
                        (double)CONCAT44((int)((u64)in_dr14 >> 0x20), SUB84(in_dr14, 0) - (float)((u64)dVar5 >> 0x20));
                } else {
                    in_dr14 = in_dr14 - dVar5;
                }
                if (cVar11 == '\0') {
                    dVar5 = (double)CONCAT44(*(u32 *)(a0 + 8), SUB84(dVar5, 0));
                } else {
                    dVar5 = *(double *)(a0 + 8);
                }
                if (cVar10 == '\0') {
                    fVar7 = SUB84(in_dr14, 0) + (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar7 = SUB84(in_dr14 + dVar5, 0);
                }
                if (cVar11 == '\0') {
                    *(float *)(a0 + 8) = fVar7;
                } else {
                    *(double *)(a0 + 8) = in_dr0;
                }
            }
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(uStack_20, SUB84(in_dr2, 0));
            dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
        } else {
            dVar5 = (double)CONCAT44(uStack_1c, uStack_20);
            in_xd0 = *(u64 *)(a0 + 0x48);
            dVar6 = 6.96545118384351e-312;
        }
        if (cVar10 == '\0') {
            bVar9 = (float)((u64)dVar5 >> 0x20) < SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            bVar9 = dVar5 < dVar6 * dVar6;
        }
        if (bVar9) {
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x48);
                dVar6 = 6.96545118384351e-312;
            }
            if (cVar10 == '\0') {
                fVar7 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
            } else {
                fVar7 = SUB84(dVar6 * dVar6, 0);
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(uStack_20, fVar7);
            } else {
                dVar6 = (double)CONCAT44(uStack_1c, uStack_20);
            }
            if (cVar10 == '\0') {
                fVar7 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
            } else {
                fVar7 = SUB84(dVar6 - dVar6, 0);
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(*(u32 *)(a0 + 4), fVar7);
            } else {
                dVar6 = *(double *)(a0 + 4);
            }
            if (cVar10 == '\0') {
                fVar7 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
            } else {
                fVar7 = SUB84(dVar6 + dVar6, 0);
            }
            if (cVar11 == '\0') {
                *(float *)(a0 + 4) = fVar7;
            } else {
                *(u64 *)(a0 + 4) = in_xd0;
            }
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)a1[3], SUB84(dVar5, 0));
            dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
        } else {
            dVar5 = *(double *)a1[3];
            in_xd0 = *(u64 *)(a0 + 0x48);
            dVar6 = 6.96545118384351e-312;
        }
        if (cVar10 == '\0') {
            fVar7 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) - fVar7, SUB84(dVar5, 0));
        } else {
            fVar7 = SUB84(dVar6 * dVar6, 0);
            dVar5 = dVar5 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(uStack_20, fVar7);
        } else {
            dVar6 = (double)CONCAT44(uStack_1c, uStack_20);
        }
        if (cVar10 == '\0') {
            bVar9 = (float)((u64)dVar5 >> 0x20) < (float)((u64)dVar6 >> 0x20);
        } else {
            bVar9 = dVar5 < dVar6;
        }
        if (bVar9) {
            if (cVar11 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)a1[3], SUB84(dVar5, 0));
                dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
            } else {
                dVar5 = *(double *)a1[3];
                in_xd0 = *(u64 *)(a0 + 0x48);
                dVar6 = 6.96545118384351e-312;
            }
            if (cVar10 == '\0') {
                fVar8 = (float)((u64)dVar6 >> 0x20);
                fVar7 = SUB84(dVar6, 0) * fVar8;
                dVar6 = (double)CONCAT44(fVar8, fVar7);
                dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) - fVar7, SUB84(dVar5, 0));
            } else {
                dVar6 = dVar6 * dVar6;
                dVar5 = dVar5 - dVar6;
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), uStack_20);
            } else {
                in_xd0 = CONCAT44(uStack_1c, uStack_20);
            }
            if (cVar10 == '\0') {
                fVar7 = SUB84(dVar6, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar7 = SUB84(dVar6 - dVar5, 0);
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(*(u32 *)(a0 + 4), fVar7);
            } else {
                dVar6 = *(double *)(a0 + 4);
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - SUB84(dVar6, 0), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 - dVar6;
            }
            if (cVar11 == '\0') {
                *(int *)(a0 + 4) = (int)((u64)dVar6 >> 0x20);
            } else {
                *(double *)(a0 + 4) = dVar6;
            }
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a1[3] + 4), SUB84(dVar5, 0));
            dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
        } else {
            dVar5 = *(double *)(a1[3] + 4);
            in_xd0 = *(u64 *)(a0 + 0x48);
            dVar6 = 6.96545118384351e-312;
        }
        if (cVar10 == '\0') {
            fVar7 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) - fVar7, SUB84(dVar5, 0));
        } else {
            fVar7 = SUB84(dVar6 * dVar6, 0);
            dVar5 = dVar5 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(uStack_1c, fVar7);
        } else {
            dVar6 = (double)CONCAT44(uStack_18, uStack_1c);
        }
        if (cVar10 == '\0') {
            bVar9 = (float)((u64)dVar5 >> 0x20) < (float)((u64)dVar6 >> 0x20);
        } else {
            bVar9 = dVar5 < dVar6;
        }
        if (bVar9) {
            if (cVar11 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)(a1[3] + 4), SUB84(dVar5, 0));
                dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
            } else {
                dVar5 = *(double *)(a1[3] + 4);
                in_xd0 = *(u64 *)(a0 + 0x48);
                dVar6 = 6.96545118384351e-312;
            }
            if (cVar10 == '\0') {
                fVar8 = (float)((u64)dVar6 >> 0x20);
                fVar7 = SUB84(dVar6, 0) * fVar8;
                dVar6 = (double)CONCAT44(fVar8, fVar7);
                dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) - fVar7, SUB84(dVar5, 0));
            } else {
                dVar6 = dVar6 * dVar6;
                dVar5 = dVar5 - dVar6;
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), uStack_1c);
            } else {
                in_xd0 = CONCAT44(uStack_18, uStack_1c);
            }
            if (cVar10 == '\0') {
                fVar7 = SUB84(dVar6, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar7 = SUB84(dVar6 - dVar5, 0);
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(*(u32 *)(a0 + 8), fVar7);
            } else {
                dVar6 = *(double *)(a0 + 8);
            }
            if (cVar10 == '\0') {
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - SUB84(dVar6, 0), SUB84(dVar6, 0));
            } else {
                dVar6 = dVar6 - dVar6;
            }
            if (cVar11 == '\0') {
                *(int *)(a0 + 8) = (int)((u64)dVar6 >> 0x20);
            } else {
                *(double *)(a0 + 8) = dVar6;
            }
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(uStack_18, SUB84(dVar5, 0));
            dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
        } else {
            dVar5 = (double)CONCAT44(uStack_14, uStack_18);
            in_xd0 = *(u64 *)(a0 + 0x48);
            dVar6 = 6.96545118384351e-312;
        }
        if (cVar10 == '\0') {
            bVar9 = (float)((u64)dVar5 >> 0x20) < SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            bVar9 = dVar5 < dVar6 * dVar6;
        }
        if (bVar9) {
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x48);
                dVar6 = 6.96545118384351e-312;
            }
            if (cVar10 == '\0') {
                fVar7 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
            } else {
                fVar7 = SUB84(dVar6 * dVar6, 0);
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(uStack_18, fVar7);
            } else {
                dVar6 = (double)CONCAT44(uStack_14, uStack_18);
            }
            if (cVar10 == '\0') {
                fVar7 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
            } else {
                fVar7 = SUB84(dVar6 - dVar6, 0);
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44(*(u32 *)(a0 + 0xc), fVar7);
            } else {
                dVar6 = *(double *)(a0 + 0xc);
            }
            if (cVar10 == '\0') {
                fVar7 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
            } else {
                fVar7 = SUB84(dVar6 + dVar6, 0);
            }
            if (cVar11 == '\0') {
                *(float *)(a0 + 0xc) = fVar7;
            } else {
                *(u64 *)(a0 + 0xc) = in_xd0;
            }
        }
        if (cVar11 == '\0') {
            dVar5 = (double)CONCAT44(*(u32 *)(a1[3] + 8), SUB84(dVar5, 0));
            dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
        } else {
            dVar5 = *(double *)(a1[3] + 8);
            dVar6 = 6.96545118384351e-312;
        }
        if (cVar10 == '\0') {
            fVar7 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
            dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) - fVar7, SUB84(dVar5, 0));
        } else {
            fVar7 = SUB84(dVar6 * dVar6, 0);
            dVar5 = dVar5 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
            in_dr0 = (double)CONCAT44(uStack_18, fVar7);
        } else {
            in_dr0 = (double)CONCAT44(uStack_14, uStack_18);
        }
        if (cVar10 == '\0') {
            bVar9 = (float)((u64)dVar5 >> 0x20) < (float)((u64)in_dr0 >> 0x20);
        } else {
            bVar9 = dVar5 < in_dr0;
        }
        if (bVar9) {
            if (cVar11 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)(a1[3] + 8), SUB84(dVar5, 0));
                dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0x48));
            } else {
                dVar5 = *(double *)(a1[3] + 8);
                dVar6 = 6.96545118384351e-312;
            }
            if (cVar10 == '\0') {
                fVar8 = (float)((u64)dVar6 >> 0x20);
                fVar7 = SUB84(dVar6, 0) * fVar8;
                dVar6 = (double)CONCAT44(fVar8, fVar7);
                dVar5 = (double)CONCAT44((float)((u64)dVar5 >> 0x20) - fVar7, SUB84(dVar5, 0));
            } else {
                dVar6 = dVar6 * dVar6;
                dVar5 = dVar5 - dVar6;
            }
            if (cVar11 == '\0') {
                dVar6 = (double)CONCAT44((int)((u64)dVar6 >> 0x20), uStack_18);
            }
            if (cVar10 == '\0') {
                fVar7 = SUB84(dVar6, 0) - (float)((u64)dVar5 >> 0x20);
            } else {
                fVar7 = SUB84(dVar6 - dVar5, 0);
            }
            if (cVar11 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)(a0 + 0xc), fVar7);
            } else {
                in_dr0 = *(double *)(a0 + 0xc);
            }
            if (cVar10 == '\0') {
                in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) - SUB84(in_dr0, 0), SUB84(in_dr0, 0));
            } else {
                in_dr0 = in_dr0 - in_dr0;
            }
            if (cVar11 == '\0') {
                *(int *)(a0 + 0xc) = (int)((u64)in_dr0 >> 0x20);
            } else {
                *(double *)(a0 + 0xc) = in_dr0;
            }
        }
        iVar4 = -1;
        Vec3_dtor(&uStack_20, 0xffffffff, a2, a3);
    }
    iVar2 = *(int *)(a0 + 0x314);
    if ((iVar2 < 5) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            Vec3_add(*(u32 *)a1[1], a0 + 4, a2, a3, auStack_128);
            Vec3_assign(a0 + 0x224, auStack_128, a2, a3);
            Vec3_dtor(auStack_128, 0xffffffff, a2, a3);
            iVar4 = *(int *)(a1[1] + 4);
            vec3_copy_8c023d8c(a0 + 0x234, iVar4, a2, a3);
            break;
        case 2:
            Vec3_add_assign(a0 + 0x224, a0 + 0x304);
            Vec3_scale_assign(a0 + 0x304, &g_8c13ba94);
            (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], a0 + 0x224, a2, a3);
            if (cVar11 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), *(u32 *)(a0 + 0x228));
            }
            iVar4 = a0 + 0x228;
            if (cVar10 != '\0' || SUB84(in_dr0, 0) <= (float)((u64)in_dr0 >> 0x20)) {
                (**(code **)(*(int *)a1[6] + 0x128))((int *)a1[6], a0 + 0x224, a2, a3);
                if (cVar11 == '\0') {
                    *(int *)(a0 + 0x228) = (int)((u64)in_dr0 >> 0x20);
                } else {
                    *(double *)(a0 + 0x228) = in_dr0;
                }
                *(int *)(a0 + 0x314) = *(int *)(a0 + 0x314) + 1;
                iVar4 = a0;
            }
            break;
        case 3:
            *(u32 *)(a0 + 0x220) = 1;
            *(int *)(a0 + 0x314) = *(int *)(a0 + 0x314) + 1;
            iVar4 = a0;
        }
    }
    vec3_clear(a0 + 0x13c, iVar4, a2, a3);
    *(u32 *)(a0 + 0x1d4) = 0;
    return 0x1d4;
}
