/* Seaman (USA) region 0x8c0d0000-0x8c0e0000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * tank_device_sound_update  0x8c0d0178
 * state machine for a tank device: start sound 9, loop 10, stop when switched off (+0x14)
 * called by: Class_12b930_m1_0de1dc, Class_12b930_m3_0de4b0
 */
u32 tank_device_sound_update(int a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 auStack_c[2];

    if (g_8c4374ac == '\0') {
        g_8c4374a8 = 5;
        g_8c4374ac = '\x01';
    }
    iVar1 = *(int *)(a0 + 0x28);
    if (iVar1 == 0) {
        if (*(int *)(a0 + 0x14) == 1) {
            auStack_c[0] = se_open_bank1(0x8c2b59d0);
            a2 = 9;
            se_play(0x8c2b59d0, auStack_c[0], 9);
            a1 = auStack_c;
            se_close_port_handle(0x8c2b59d0, a1);
            *(u16 *)(a0 + 0x2c) = 0;
            *(u32 *)(a0 + 0x28) = 1;
        }
    } else if (iVar1 == 1) {
        *(short *)(a0 + 0x2c) = *(short *)(a0 + 0x2c) + 1;
        if (g_8c4374a8 <= (int)*(short *)(a0 + 0x2c)) {
            *(u16 *)(a0 + 0x2c) = 0;
            *(u32 *)(a0 + 0x28) = 2;
        }
        if (*(int *)(a0 + 0x14) == 0) {
            *(u32 *)(a0 + 0x28) = 0;
        }
    } else if (iVar1 == 2) {
        if (*(int *)(a0 + 0x34) == -1) {
            uVar2 = se_open_bank1(0x8c2b59d0);
            *(u32 *)(a0 + 0x34) = uVar2;
            a2 = 10;
            a1 = *(u32 **)(a0 + 0x34);
            se_play(0x8c2b59d0, a1, 10);
        }
        if ((*(int *)(a0 + 0x14) == 0) && (*(int *)(a0 + 0x34) != -1)) {
            se_status(0x8c2b59d0, *(u32 *)(a0 + 0x34), a2, a3);
            a1 = (u32 *)(a0 + 0x34);
            se_close_port_handle(0x8c2b59d0, a1);
            *(u32 *)(a0 + 0x34) = 0xffffffff;
            *(u32 *)(a0 + 0x28) = 3;
        }
    } else if (iVar1 == 3) {
        auStack_c[0] = se_open_bank1(0x8c2b59d0);
        a2 = 0xb;
        se_play(0x8c2b59d0, auStack_c[0], 0xb);
        a1 = auStack_c;
        se_close_port_handle(0x8c2b59d0, a1);
        *(u32 *)(a0 + 0x28) = 0;
    }
    uVar2 = Class_12b930_uses_libgcc_divide_helper_0d02c8(a0, a1, a2);
    return uVar2;
}

/*
 * Class_12b930_uses_libgcc_divide_helper_0d02c8  0x8c0d02c8
 * area name: only called from Class_12b930 methods; behaviour name: its main named callee is
 * libgcc_divide_helper_01031c called by: Class_12b930_m2_0de3d4, tank_device_sound_update
 */
int Class_12b930_uses_libgcc_divide_helper_0d02c8(int a0, u32 unused_a1, u32 a2) {
    int iVar1;
    double *pdVar2;
    float fVar3;
    double dVar4;
    float fVar6;
    u64 uVar5;
    double in_xd0;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    if (g_8c4374b4 == '\0') {
        g_8c4374b0 = 3.0525032e-05;
        g_8c4374b4 = '\x01';
    }
    if (g_8c4374bc == '\0') {
        g_8c4374b8 = 0.015873017;
        g_8c4374bc = '\x01';
    }
    if (*(int *)(a0 + 0x14) == 1) {
        *(float *)(a0 + 0x10) = *(float *)(a0 + 0x10) + g_8c4374b0;
        if (g_8c4374b8 < *(float *)(a0 + 0x10)) {
            *(float *)(a0 + 0x10) = g_8c4374b8;
        }
        fVar3 = *(float *)(a0 + 0xc) + *(float *)(a0 + 0x10);
        uVar5 = (u64)(u32)fVar3;
        *(float *)(a0 + 0xc) = fVar3;
        iVar1 = libgcc_divide_helper_01031c((int)*(short *)(a0 + 0x18), 3, a2);
        if (iVar1 == 0) {
            *(char *)(a0 + 0x1b) = *(char *)(a0 + 0x1b) + -1;
            *(char *)(a0 + 0x1a) = *(char *)(a0 + 0x1a) + -1;
            if (*(u8 *)(a0 + 0x1b) < 0x82) {
                *(u8 *)(a0 + 0x1a) = 0x82;
                *(u8 *)(a0 + 0x1b) = 0x82;
            }
        }
        iVar1 = libgcc_divide_helper_01031c((int)*(short *)(a0 + 0x18), 2, a2);
        if (iVar1 == 0) {
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x24) = 0x3f800000;
            } else {
                *(u64 *)(a0 + 0x24) = CONCAT44(0x3f800000, (int)uVar5);
            }
        } else if (cVar8 == '\0') {
            *(u32 *)(a0 + 0x24) = 0;
        } else {
            *(u64 *)(a0 + 0x24) = uVar5 & 0xffffffff;
        }
    } else {
        if (*(float *)(a0 + 0x10) <= 0.0) {
            iVar1 = libgcc_divide_helper_01031c((int)*(short *)(a0 + 0x18), 2, a2);
            if (iVar1 == 0) {
                if (cVar8 == '\0') {
                    *(u32 *)(a0 + 0x10) = 0xb8aec33e;
                } else {
                    *(u64 *)(a0 + 0x10) = 0xffb8aec33e;
                }
            }
        } else {
            *(float *)(a0 + 0x10) = *(float *)(a0 + 0x10) - 8.333333e-05;
        }
        pdVar2 = (double *)(a0 + 0xc);
        if (cVar8 != '\0') {
            in_xd0 = *pdVar2;
            pdVar2 = (double *)(a0 + 0x10);
        }
        dVar4 = *pdVar2;
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 + dVar4, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0xc) = fVar3;
        } else {
            *(double *)(a0 + 0xc) = in_xd0;
        }
        iVar1 = libgcc_divide_helper_01031c((int)*(short *)(a0 + 0x18), 3, a2);
        if ((iVar1 == 0) && (*(char *)(a0 + 0x1b) != -1)) {
            *(char *)(a0 + 0x1b) = *(char *)(a0 + 0x1b) + '\x01';
            *(char *)(a0 + 0x1a) = *(char *)(a0 + 0x1a) + '\x01';
        }
    }
    if (cVar8 == '\0') {
        fVar3 = *(float *)(a0 + 0xc);
        fVar6 = 35.0;
    } else {
        fVar3 = 35.0;
        fVar6 = 1.1546207e-19;
    }
    if (cVar7 != '\0' || fVar3 <= fVar6) {
        if (cVar8 == '\0') {
            fVar3 = *(float *)(a0 + 0xc);
        }
        if (cVar7 == '\0' && fVar3 < 0.0) {
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x10) = 0;
            } else {
                *(u64 *)(a0 + 0x10) = (u64)(u32)fVar3;
            }
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0xc) = 0;
            } else {
                *(u64 *)(a0 + 0xc) = (u64)(u32)fVar3;
            }
        }
    } else {
        if (cVar8 == '\0') {
            uVar5 = CONCAT44(0x420c0000, fVar3);
            *(u32 *)(a0 + 0xc) = 0x420c0000;
        } else {
            uVar5 = 0x20085045420c0000;
            *(u64 *)(a0 + 0xc) = 0x20085045420c0000;
        }
        if (cVar8 == '\0') {
            *(u32 *)(a0 + 0x10) = 0;
        } else {
            *(u64 *)(a0 + 0x10) = uVar5 & 0xffffffff;
        }
    }
    **(u32 **)(a0 + 0x20) = (u32) * (u8 *)(a0 + 0x1d) << 0x18 | (u32) * (u8 *)(a0 + 0x1c) << 0x10 |
                            (u32) * (u8 *)(a0 + 0x1b) << 8 | (u32) * (u8 *)(a0 + 0x1a);
    iVar1 = *(short *)(a0 + 0x18) + 1;
    *(short *)(a0 + 0x18) = (short)iVar1;
    return iVar1;
}

/*
 * edge_detect_update  0x8c0d0538
 * stores input a1 at +0x14; +0x48 = 1 on a 0->1 change, 2 on 1->0
 * called by: game_uses_CSprinkler_LoadTexture_0e016c, game_uses_edge_detect_update_0e021c,
 * input_uses_call_all_list_64_0e004c, input_uses_edge_detect_update_0e2a14, input_uses_edge_detect_update_0e3210
 */
int edge_detect_update(int a0, int a1) {
    int iVar1;

    if ((*(int *)(a0 + 0x14) == 0) && (a1 == 1)) {
        iVar1 = 0x48;
        *(u32 *)(a0 + 0x48) = 1;
    } else {
        iVar1 = *(int *)(a0 + 0x14);
        if ((iVar1 == 1) && (a1 == 0)) {
            iVar1 = 0x48;
            *(u32 *)(a0 + 0x48) = 2;
        }
    }
    *(int *)(a0 + 0x14) = a1;
    return iVar1;
}

/*
 * game_draw_0d0564  0x8c0d0564
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_noop_0de6d0
 */
u32 game_draw_0d0564(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    uVar1 = 0;
    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c_wrap();
    obj_set_texlist(a0, a1, a2);
    Class_12c058_draw_015adc(a0 + 8, a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * game_draw_0d05d0  0x8c0d05d0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0df668, game_uses_color_set_white_a0_0df250, game_uses_noop_0deb60, game_uses_noop_0def78
 */
u32 game_draw_0d05d0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    uVar1 = 0;
    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c_wrap();
    obj_set_texlist(a0, a1, a2);
    Class_12c058_draw_015adc(a0 + 8, a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * set_fields_28_48  0x8c0d063c
 * stores +0x28, +0x48
 * called by: input_uses_set_fields_28_48_0dff1c
 */
u32 set_fields_28_48(int a0) {
    *(u32 *)(a0 + 0x28) = 0;
    *(u32 *)(a0 + 0x48) = 0;
    return 0x48;
}

/*
 * se_close_port_34  0x8c0d064c
 * stops and closes the SE port handle at +0x34 and clears +0x48
 * called by: input_uses_call_all_list_64_0e004c
 */
u32 se_close_port_34(int a0, u32 unused_a1, u32 a2, u32 a3) {
    if (*(int *)(a0 + 0x34) != -1) {
        se_status(0x8c2b59d0, *(u32 *)(a0 + 0x34), a2, a3);
        se_close_port_handle(0x8c2b59d0, a0 + 0x34);
        *(u32 *)(a0 + 0x34) = 0xffffffff;
    }
    *(u32 *)(a0 + 0x48) = 0;
    return 0x48;
}

/*
 * CTexture_LoadFromCache_wrap  0x8c0d068c
 * only calls CTexture_LoadFromCache
 * called by: env_load_textures_0e0320
 */
u32 CTexture_LoadFromCache_wrap(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_LoadFromCache(a0, a1, a2, a3);
    return uVar1;
}

/*
 * CTexture_ReleaseFromVRAM_wrap  0x8c0d06a8
 * only calls CTexture_ReleaseFromVRAM
 * called by: env_release_textures_0e03d4
 */
u32 CTexture_ReleaseFromVRAM_wrap(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_ReleaseFromVRAM(a0, a1, a2, a3);
    return uVar1;
}

/*
 * se_status_34  0x8c0d06c4
 * se_status of the SE port handle at +0x34
 * called by: game_sound_0e0488
 */
int se_status_34(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0x34);
    if (iVar1 != -1) {
        iVar1 = se_status(0x8c2b59d0, *(u32 *)(a0 + 0x34), a2, a3);
    }
    return iVar1;
}

/*
 * se_play_34  0x8c0d06ec
 * plays sound 10 on the SE port handle at +0x34
 * called by: game_sound_0e0508
 */
int se_play_34(int a0) {
    int iVar1;

    iVar1 = *(int *)(a0 + 0x34);
    if (iVar1 != -1) {
        iVar1 = se_play(0x8c2b59d0, *(u32 *)(a0 + 0x34), 10);
    }
    return iVar1;
}

/*
 * clear_field_48  0x8c0d0714
 * called by: Class_12b930_m1_0de1dc, game_uses_CSprinkler_LoadTexture_0e016c, game_uses_edge_detect_update_0e021c
 */
u32 clear_field_48(int a0) {
    *(u32 *)(a0 + 0x48) = 0;
    return 0x48;
}

/*
 * game_init_fields_0d0720  0x8c0d0720
 * area name: game code; nothing names its area yet; behaviour name: writes 11 members
 * called by: Class_12b930_uses_Class_129920_ctor_0cff78, game_uses_get_field_38_0dfbdc
 */
u32 game_init_fields_0d0720(int a0) {
    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x14) = 0;
    *(u16 *)(a0 + 0x18) = 0;
    *(u32 *)(a0 + 0x28) = 0;
    *(u16 *)(a0 + 0x2c) = 0;
    *(u8 *)(a0 + 0x1d) = 0xff;
    *(u8 *)(a0 + 0x1c) = 0xff;
    *(u8 *)(a0 + 0x1b) = 0xff;
    *(u8 *)(a0 + 0x1a) = 0xff;
    *(u32 *)(a0 + 0x48) = 0;
    return 0x48;
}

/*
 * CHeater_ReleaseModel  0x8c0d0768
 * releases suisou_Heater.nj
 * called by: CWaterTank_ReleaseModels
 * strings: "suisou_Heater.nj"; "GRAPHICS\\ENV"; "suisou_Heater.nj"; "GRAPHICS\\ENV"
 */
u32 CHeater_ReleaseModel(u32 a0, u32 a1) {
    u32 uVar1;

    (*(code *)(&CDCGD_release_type0))(a1, "suisou_Heater.nj", "GRAPHICS\\ENV", a0);
    uVar1 = (*(code *)(&CDCGD_release_type2))(a1, "suisou_Heater.nj", "GRAPHICS\\ENV", a0);
    return uVar1;
}

/*
 * Class_12b930_uses_Class_129920_ctor_0d07b4  0x8c0d07b4
 * area name: only called from Class_12b930 methods; behaviour name: its main named callee is Class_129920_ctor
 * called by: Class_12b930_ctor
 */
int Class_12b930_uses_Class_129920_ctor_0d07b4(int a0, u32 a1) {
    Class_129920_ctor(a0, a1);
    clear_field_0_wrap_015ab8(a0 + 8);
    game_uses_set_field_18_to_1_0d0a84(a0);
    return a0;
}

/*
 * CO2Supply_LoadTexture  0x8c0d07ec
 * loads the O2SUPPLY texture list from GRAPHICS\ENV
 * called by: CWaterTank_CreateStage
 * strings: "O2SUPPLY"; "GRAPHICS\\ENV"; "Failed to load o2 supply textuer.."
 */
int CO2Supply_LoadTexture(int *a0, u32 a1, u32 a2, u32 a3) {
    int *ar7_00;
    int iVar1;
    u8 **ar5_00;
    u32 uVar2;

    set_field_0_015ad4(a0 + 2, &g_8c13d9d8, a2);
    ar5_00 = &PTR_PTR_8c13d570;
    (**(code **)(*a0 + 8))(a0, &PTR_PTR_8c13d570, a2, a3);
    ar7_00 = (int *)get_field_4_0253e4(a0, ar5_00, a2, a3);
    for (uVar2 = 0; uVar2 < (u32)ar7_00[1]; uVar2 = uVar2 + 1) {
        iVar1 = uVar2 * 0xc + *ar7_00;
        *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x80000000;
    }
    iVar1 = retry_until_done_020e80(a1, "O2SUPPLY", "GRAPHICS\\ENV", ar7_00);
    if (iVar1 == -1) {
        iVar1 = report_error_message("Failed to load o2 supply textuer..", &g_8c13d4fb, 1, 2);
    }
    return iVar1;
}

/*
 * ramp_float_to_100  0x8c0d08c0
 * raises the float at +0xc by 0.05 (mode +0x14 == 1) or 5e-05 while +0x18 is set, clamped at 100.0
 * called by: CWaterTank_uses_get_field_300_0e0f48, ramp_float_to_100_wrap
 */
u8 *ramp_float_to_100(int a0) {
    u8 *puVar1;
    float fVar2;

    fVar2 = 5e-05;
    puVar1 = NULL;
    if (*(int *)(a0 + 0x18) != 0) {
        if (*(int *)(a0 + 0x14) == 1) {
            fVar2 = 0.05;
        }
        *(float *)(a0 + 0xc) = *(float *)(a0 + 0xc) + fVar2;
        puVar1 = &g_8c0d090c;
        if (100.0 < *(float *)(a0 + 0xc)) {
            puVar1 = &g_8c0d090c;
            *(u32 *)(a0 + 0xc) = 0x42c80000;
        }
    }
    return puVar1;
}

/*
 * ramp_float_to_100_wrap  0x8c0d0910
 * only calls ramp_float_to_100
 * called by: CWaterTank_uses_get_field_38_wrap_0e132c
 */
u32 ramp_float_to_100_wrap(u32 a0) {
    u32 uVar1;

    uVar1 = ramp_float_to_100(a0);
    return uVar1;
}

/*
 * game_draw_0d092c  0x8c0d092c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_noop_0de6d0
 */
u32 game_draw_0d092c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    uVar1 = 0;
    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c_wrap();
    obj_set_texlist(a0, a1, a2);
    Class_129938_draw_015af8(a0 + 8, a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * game_draw_0d0990  0x8c0d0990
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_noop_0deb60, game_uses_noop_0def78
 */
u32 game_draw_0d0990(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    uVar1 = 0;
    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c_wrap();
    obj_set_texlist(a0, a1, a2);
    Class_129938_draw_015af8(a0 + 8, a1, a2, a3);
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * noop_0d09f4  0x8c0d09f4
 * called by: noop_0dffe8
 */
u32 noop_0d09f4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0d09f8  0x8c0d09f8
 * called by: input_uses_noop_0e00ec
 */
u32 noop_0d09f8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * CTexture_LoadFromCache_wrap_0d09fc  0x8c0d09fc
 * only calls CTexture_LoadFromCache
 * called by: env_load_textures_0e0320
 */
u32 CTexture_LoadFromCache_wrap_0d09fc(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_LoadFromCache(a0, a1, a2, a3);
    return uVar1;
}

/*
 * CTexture_ReleaseFromVRAM_wrap_0d0a18  0x8c0d0a18
 * only calls CTexture_ReleaseFromVRAM
 * called by: env_release_textures_0e03d4
 */
u32 CTexture_ReleaseFromVRAM_wrap_0d0a18(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_ReleaseFromVRAM(a0, a1, a2, a3);
    return uVar1;
}

/*
 * noop_0d0a34  0x8c0d0a34
 * called by: game_sound_0e0488
 */
u32 noop_0d0a34(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0d0a38  0x8c0d0a38
 * called by: game_sound_0e0508
 */
u32 noop_0d0a38(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_field_14_0d0a3c  0x8c0d0a3c
 * called by: game_uses_set_field_14_0dfdcc, game_uses_set_field_14_0dfdfc
 */
u32 set_field_14_0d0a3c(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x14) = a1;
    return in_r0;
}

/*
 * decay_float_c  0x8c0d0a44
 * subtracts fr5 (at most 1/6000) from the float at +0xc, stopping at 0
 * called by: CWaterTank_uses_get_field_300_0e0f48, CWaterTank_uses_get_field_38_wrap_0e132c
 */
int decay_float_c(int a0) {
    u64 in_dr4;
    float fVar1;

    fVar1 = (float)((u64)in_dr4 >> 0x20);
    if (0.00016666666 < fVar1) {
        fVar1 = 0.00016666666;
    }
    *(float *)(a0 + 0xc) = *(float *)(a0 + 0xc) - fVar1;
    if (*(float *)(a0 + 0xc) <= 0.0) {
        *(u32 *)(a0 + 0xc) = 0;
    }
    return a0 + 0xc;
}

/*
 * game_uses_set_field_18_to_1_0d0a84  0x8c0d0a84
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_field_18_to_1
 * called by: Class_12b930_uses_Class_129920_ctor_0d07b4, game_uses_get_field_38_0dfbdc
 */
u32 game_uses_set_field_18_to_1_0d0a84(int a0) {
    u32 uVar1;

    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x14) = 0;
    uVar1 = set_field_18_to_1(a0);
    return uVar1;
}

/*
 * set_field_18_to_1  0x8c0d0aac
 * called by: CWaterTank_uses_get_field_300_0e0f48, game_uses_set_field_18_to_1_0d0a84
 */
u32 set_field_18_to_1(int a0) {
    *(u32 *)(a0 + 0x18) = 1;
    return 1;
}

/*
 * set_field_70  0x8c0d0ab4
 * called by: CSprinkler_LoadTexture
 */
u32 set_field_70(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x70) = in_fr4;
    return ain0;
}

/*
 * Class_1297f4_dtor  0x8c0d0abc
 * stores the vtable 0x8c1297f4
 */
u32 *Class_1297f4_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = 0x8c1297f4;
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0 + 0x15, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_vec_0d0b04  0x8c0d0b04
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0d0b04(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    particle_step(a0);
    if (0x3aaaaaa < *(u32 *)(a0 + 0x40)) {
        uVar1 = 0x40;
        *(int *)(a0 + 0x40) = *(int *)(a0 + 0x40) - 0x1000000;
    } else {
        uVar1 = Class_1297f4_vec_014d90(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * Class_12b930_uses_Class_129920_ctor_0d0b58  0x8c0d0b58
 * area name: only called from Class_12b930 methods; behaviour name: its main named callee is Class_129920_ctor
 * called by: Class_12b930_ctor
 */
int Class_12b930_uses_Class_129920_ctor_0d0b58(int a0, u32 a1) {
    u8 *ar5_00;
    u8 *ar6_00;
    u32 ar7_00;

    Class_129920_ctor(a0, a1);
    clear_field_0_wrap_015ab8(a0 + 8);
    ar5_00 = (&Class_1297f4_ctor);
    ar6_00 = (&Class_1297f4_dtor);
    ar7_00 = 0xac;
    vec_new_array(a0 + 0xc, (&Class_1297f4_ctor), (&Class_1297f4_dtor), 0xac, 0x15e);
    game_init_fields_02145c(a0 + 0xeb48);
    se_init_fields_0d1564(a0);
    return a0;
}

/*
 * CSprinkler_LoadTexture  0x8c0d0bcc
 * loads the SPRINKLER texture list from GRAPHICS\ENV
 * called by: CWaterTank_create_all, game_uses_CSprinkler_LoadTexture_0e016c
 * strings: "GRAPHICS\\ENV"; "SPRINKLER"; "SPRINKLER"; "GRAPHICS\\ENV" ...
 */
u32 CSprinkler_LoadTexture(int *a0, u32 a1, u32 a2, u32 a3) {
    int *ar7_00;
    int iVar1;
    u8 **ar5_00;
    char *ar5_01;
    char *ar6_00;
    u32 uVar2;

    set_field_0_015ad4(a0 + 2, &g_8c13d9d8, a2);
    ar5_00 = &PTR_PTR_8c13d570;
    (**(code **)(*a0 + 8))(a0, &PTR_PTR_8c13d570, a2, a3);
    ar7_00 = (int *)get_field_4_0253e4(a0, ar5_00, a2, a3);
    for (uVar2 = 0; uVar2 < (u32)ar7_00[1]; uVar2 = uVar2 + 1) {
        iVar1 = uVar2 * 0xc + *ar7_00;
        *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x80000000;
    }
    ar6_00 = "GRAPHICS\\ENV";
    ar5_01 = "SPRINKLER";
    iVar1 = retry_until_done_020e80(a1, "SPRINKLER", "GRAPHICS\\ENV", ar7_00);
    if (iVar1 == -1) {
        ar7_00 = (int *)0x2;
        ar6_00 = (char *)0x1;
        ar5_01 = &g_8c13d4fb;
        report_error_message("Failed to load sprinkler textuer..", &g_8c13d4fb, 1, 2);
    }
    for (uVar2 = 0; uVar2 < 0x15e; uVar2 = uVar2 + 1) {
        CSprinkler_vec_014cd4(a0 + uVar2 * 0x2b + 3, ar5_01, ar6_00, ar7_00);
        ar5_01 = (char *)0x1;
        set_fields_68_78(a0 + uVar2 * 0x2b + 3, 1);
        set_field_70(a0 + uVar2 * 0x2b + 3, ar5_01, ar6_00, ar7_00, a1);
    }
    return 0x15e;
}

/*
 * set_fields_68_78  0x8c0d0d0c
 * stores +0x68, +0x78
 * called by: CSprinkler_LoadTexture
 */
u32 set_fields_68_78(int a0, u32 a1) {
    *(u32 *)(a0 + 0x68) = 1;
    *(u8 *)(a0 + 0x78) = (u8)a1;
    return 0x78;
}

/*
 * Class_12b930_uses_rand_0d0d1c  0x8c0d0d1c
 * area name: only called from Class_12b930 methods; behaviour name: its main named callee is rand
 * called by: CWaterTank_uses_Vec3_distance_sq_to_xyz_0e1398, Class_12b930_m3_0de4b0
 */
u32 Class_12b930_uses_rand_0d0d1c(int a0, code *a1, u32 a2, u32 a3) {
    u64 uVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u8 *puVar6;
    int iVar7;
    float fVar8;
    double dVar9;
    float fVar10;
    u64 in_xd0;
    char cVar11;
    char cVar12;
    u64 uStack_54;
    u64 uStack_38;
    u8 auStack_30[16];
    u8 auStack_20[20];
    u32 uStack_c;

    cVar12 = '\0';
    cVar11 = '\0';
    uStack_c = 0;
    if (g_8c4374c4 == '\0') {
        g_8c4374c0 = 10;
        g_8c4374c4 = '\x01';
    }
    if (g_8c4374d4 == '\0') {
        uVar2 = Vec3_ctor_xyz(0x8c4374d8, a1, a2, a3);
        a2 = 0x8c4374c8;
        a1 = Vec3_dtor;
        global_list_push(uVar2, Vec3_dtor, 0x8c4374c8, a3);
        g_8c4374d4 = '\x01';
    }
    Vec3_ctor_zero(auStack_20, a1, a2);
    uStack_38 = (u64)(u32)uStack_38;
    iVar3 = *(int *)(a0 + 0xeb60);
    if (iVar3 == 0) {
        if (*(int *)(a0 + 0xeb44) == 1) {
            *(u16 *)(a0 + 0xeb64) = 0;
            *(u32 *)(a0 + 0xeb60) = 2;
        }
    } else if (iVar3 == 2) {
        if (*(int *)(a0 + 0xeb4c) == -1) {
            uVar2 = se_open_bank1(0x8c2b59d0);
            *(u32 *)(a0 + 0xeb4c) = uVar2;
            a2 = 5;
            a1 = *(code **)(a0 + 0xeb4c);
            se_play(0x8c2b59d0, a1, 5);
        }
        if ((*(int *)(a0 + 0xeb44) == 0) && (*(int *)(a0 + 0xeb4c) != -1)) {
            se_status(0x8c2b59d0, *(u32 *)(a0 + 0xeb4c), a2, a3);
            a1 = (code *)(a0 + 0xeb4c);
            se_close_port_handle(0x8c2b59d0, a1);
            *(u32 *)(a0 + 0xeb4c) = 0xffffffff;
            *(u32 *)(a0 + 0xeb60) = 3;
        }
    } else if (iVar3 == 3) {
        *(u32 *)(a0 + 0xeb60) = 0;
    }
    if (*(int *)(a0 + 0xeb44) == 1) {
        if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x41800000, *(u32 *)(a0 + 0xeb38));
        } else {
            in_xd0 = *(u64 *)(a0 + 0xeb38);
            dVar9 = 1.4411521620789166e+18;
        }
        if (cVar11 == '\0') {
            fVar8 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 + dVar9, 0);
        }
        uStack_54 = in_xd0;
        if (cVar12 == '\0') {
            uStack_54 = CONCAT44(a0, fVar8);
        }
        if (cVar12 == '\0') {
            *(float *)(uStack_54._4_4_ + 0xeb38) = (float)uStack_54;
            fVar10 = 360.0;
            fVar8 = (float)uStack_54;
        } else {
            *(u64 *)(uStack_54._4_4_ + 0xeb38) = uStack_54;
            fVar8 = 360.0;
            fVar10 = 2.41023e-43;
            in_xd0 = uStack_54;
        }
        if (cVar11 == '\0' && fVar10 < fVar8) {
            if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44(0x43b40000, *(u32 *)(a0 + 0xeb38));
            } else {
                in_xd0 = *(u64 *)(a0 + 0xeb38);
                dVar9 = 3.65544470367453e-312;
            }
            if (cVar11 == '\0') {
                fVar8 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);
            } else {
                fVar8 = SUB84(dVar9 - dVar9, 0);
            }
            if (cVar12 == '\0') {
                *(float *)(a0 + 0xeb38) = fVar8;
            } else {
                *(u64 *)(a0 + 0xeb38) = in_xd0;
            }
        }
    }
    if (*(int *)(a0 + 0xeb44) == 1) {
        iVar3 = 0;
        for (iVar7 = 0; iVar7 < 0x15e; iVar7 = iVar7 + 1) {
            iVar4 = get_field_100_0d1058(a0 + iVar7 * 0xac + 0xc);
            iVar5 = iVar3;
            if (iVar4 != 1) {
                Class_1297f4_uses_rand_014be4(a0 + iVar7 * 0xac + 0xc, 0x2f999999, a2);
                uVar2 = 0x8c4374d8;
                puVar6 = auStack_20;
                Vec3_assign(puVar6, 0x8c4374d8, a2, a3);
                rand();
                Vec3_vec_023668(auStack_20, uVar2, a2, a3, auStack_30);
                uVar2 = 0xffffffff;
                puVar6 = auStack_30;
                Vec3_dtor(puVar6, 0xffffffff, a2, a3);
                iVar5 = rand();
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(0x47000000, (float)iVar5);
                } else {
                    dVar9 = 134217763.5;
                }
                if (cVar11 == '\0') {
                    fVar8 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar8 = SUB84(dVar9 / dVar9, 0);
                }
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(0x41300000, fVar8);
                } else {
                    dVar9 = 67108880.296875;
                }
                if (cVar11 == '\0') {
                    fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar8 = SUB84(dVar9 * dVar9, 0);
                }
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(0x41900000, fVar8);
                } else {
                    dVar9 = -7.9586651841963e-251;
                }
                if (cVar11 == '\0') {
                    fVar8 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);
                } else {
                    fVar8 = SUB84(dVar9 + dVar9, 0);
                }
                uVar1 = in_xd0;
                if (cVar12 == '\0') {
                    uStack_38 = CONCAT44(uStack_38._4_4_, fVar8);
                    uVar1 = uStack_38;
                }
                uStack_38 = uVar1;
                a1 = (code *)&uStack_38;
                Vec3_scale_assign(auStack_20, a1);
                Vec3_add_fr_54_dirty(a0 + iVar7 * 0xac + 0xc);
                iVar5 = iVar3 + 1;
                if (7 < iVar3 + 1)
                    break;
            }
            iVar3 = iVar5;
        }
    }
    game_uses_get_field_100_0d1060(a0, a1, a2, a3);
    uVar2 = Vec3_dtor(auStack_20, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * get_field_100_0d1058  0x8c0d1058
 * called by: Class_12b930_uses_rand_0d0d1c, game_uses_get_field_100_0d1060, game_uses_obj_set_texlist_0d1168
 */
u32 get_field_100_0d1058(int a0) {
    return *(u32 *)(a0 + 100);
}

/*
 * game_uses_get_field_100_0d1060  0x8c0d1060
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_100_0d1058
 * called by: Class_12b930_uses_rand_0d0d1c, game_uses_get_field_100_0e14d8
 */
u32 game_uses_get_field_100_0d1060(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int *a4;
    int iVar2;

    if (*(int *)(a0 + 0xeb44) == 1) {
        *(float *)(a0 + 0xeb40) = *(float *)(a0 + 0xeb40) + 0.05;
        if (100.0 < *(float *)(a0 + 0xeb40)) {
            *(u32 *)(a0 + 0xeb40) = 0x42c80000;
        }
    } else {
        *(float *)(a0 + 0xeb40) = *(float *)(a0 + 0xeb40) - 0.00027777778;
        if (*(float *)(a0 + 0xeb40) < 0.0) {
            *(u32 *)(a0 + 0xeb40) = 0;
        }
    }
    for (iVar2 = 0; iVar2 < 0x15e; iVar2 = iVar2 + 1) {
        iVar1 = get_field_100_0d1058(a0 + iVar2 * 0xac + 0xc);
        if (iVar1 == 1) {
            a4 = (int *)(a0 + iVar2 * 0xac + 0xc);
            (**(code **)(*a4 + 8))(a4, a1, a2, a3);
        }
    }
    *(short *)(a0 + 0xeb64) = *(short *)(a0 + 0xeb64) + 1;
    return 0xeb64;
}

/*
 * game_uses_obj_set_texlist_0d1168  0x8c0d1168
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is obj_set_texlist
 * called by: game_draw_0df668, game_uses_color_set_white_a0_0df250
 */
u32 game_uses_obj_set_texlist_0d1168(int a0, u32 a1, u32 a2) {
    u64 uVar1;
    int iVar2;
    u32 uVar3;
    int *a4;
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    int iVar4;
    float fVar5;
    float fVar7;
    double dVar6;
    u64 in_xd0;
    char cVar8;
    char cVar9;
    u32 in_stack_ffffff30;
    u8 auStack_c0[16];
    u8 auStack_b0[68];
    u16 uStack_6c;
    u16 uStack_6a;
    u16 uStack_68;
    u16 uStack_66;
    u16 uStack_64;
    u16 uStack_62;
    u16 uStack_60;
    u16 uStack_5e;
    u32 uStack_5c;
    u64 uStack_4c;
    float fStack_44;
    float fStack_40;
    u32 uStack_3c;
    float fStack_38;
    float fStack_34;
    u32 uStack_30;
    float fStack_2c;
    float fStack_28;
    u32 uStack_24;
    float fStack_20;
    float fStack_1c;
    float fStack_18;
    float fStack_14;
    u32 uStack_10;

    cVar9 = '\0';
    cVar8 = '\0';
    Vec3_ctor_zero(&fStack_1c, a1, a2);
    uStack_4c = CONCAT44(g_8c13d420, g_8c13d41c);
    fStack_44 = g_8c13d424;
    fStack_40 = g_8c13d428;
    uStack_3c = g_8c13d42c;
    fStack_38 = g_8c13d430;
    fStack_34 = g_8c13d434;
    uStack_30 = g_8c13d438;
    fStack_2c = g_8c13d43c;
    fStack_28 = g_8c13d440;
    uStack_24 = g_8c13d444;
    fStack_20 = g_8c13d448;
    uStack_5c = g_8c13d44c;
    ar7_00 = 4;
    Class_129808_copy_01642c(auStack_b0, &uStack_4c, &uStack_5c, 4);
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_68 = 0;
    uStack_66 = 0x7f;
    uStack_64 = 0x7f;
    uStack_62 = 0x7f;
    uStack_60 = 0x7f;
    uStack_5e = 0;
    ar6_00 = 4;
    CSquid_update_fields_0164c8(auStack_b0, &uStack_6c, 4);
    ar5_00 = 0x80000060;
    set_field_14_0d1450(auStack_b0, 0x80000060);
    uVar3 = 0;
    matrix_push(0, ar5_00, ar6_00, ar7_00, in_stack_ffffff30);
    touch_fields_30_3c_wrap();
    obj_set_texlist(a0, ar5_00, ar6_00);
    Class_129938_draw_015af8(a0 + 8, ar5_00, ar6_00, ar7_00);
    matrix_pop_n(1);
    for (iVar4 = 0; iVar4 < 0x15e; iVar4 = iVar4 + 1) {
        iVar2 = get_field_100_0d1058(a0 + iVar4 * 0xac + 0xc);
        if (iVar2 == 1) {
            a4 = (int *)(a0 + iVar4 * 0xac + 0xc);
            (**(code **)(*a4 + 0x10))(a4, ar5_00, ar6_00, ar7_00);
            Vec3_vec_014eac(a0 + iVar4 * 0xac + 0xc, ar5_00, ar6_00, ar7_00, auStack_c0);
            Vec3_assign(&fStack_1c, auStack_c0, ar6_00, ar7_00);
            ar5_00 = 0xffffffff;
            Vec3_dtor(auStack_c0, 0xffffffff, ar6_00, ar7_00);
            if (cVar9 == '\0') {
                fVar7 = 200.0;
                fVar5 = fStack_18;
            } else {
                in_xd0 = CONCAT44(fStack_14, fStack_18);
                fVar5 = 200.0;
                fVar7 = 1500.0;
            }
            if (cVar8 != '\0' || fVar5 <= fVar7) {
                if (cVar9 == '\0') {
                    fVar7 = 1500.0;
                    fVar5 = fStack_1c;
                } else {
                    in_xd0 = CONCAT44(fStack_18, fStack_1c);
                    fVar5 = 1500.0;
                    fVar7 = 2.63444e-43;
                }
                if (cVar8 == '\0' && fVar7 < fVar5) {
                    if (cVar9 == '\0') {
                        fVar7 = 800.0;
                        fVar5 = fStack_14;
                    } else {
                        in_xd0 = CONCAT44(uStack_10, fStack_14);
                        fVar5 = 800.0;
                        fVar7 = 12.0;
                    }
                    if (cVar8 == '\0' && fVar7 < fVar5) {
                        if (cVar9 == '\0') {
                            dVar6 = (double)CONCAT44(0x41400000, fStack_1c);
                        } else {
                            in_xd0 = CONCAT44(fStack_18, fStack_1c);
                            dVar6 = 2.97620270990453e-312;
                        }
                        if (cVar8 == '\0') {
                            fVar5 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
                        } else {
                            fVar5 = SUB84(dVar6 - dVar6, 0);
                        }
                        if (cVar9 == '\0') {
                            uStack_4c = CONCAT44(uStack_4c._4_4_, fVar5);
                            dVar6 = (double)CONCAT44(0x41400000, fStack_14);
                            uVar1 = in_xd0;
                        } else {
                            uVar1 = CONCAT44(uStack_10, fStack_14);
                            dVar6 = 2.97620270990453e-312;
                            uStack_4c = in_xd0;
                        }
                        if (cVar8 == '\0') {
                            fStack_44 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
                        } else {
                            fStack_44 = SUB84(dVar6 - dVar6, 0);
                        }
                        if (cVar9 == '\0') {
                            dVar6 = (double)CONCAT44(0x41400000, fStack_1c);
                        } else {
                            fStack_44 = (float)uVar1;
                            uVar1 = CONCAT44(fStack_18, fStack_1c);
                            dVar6 = 2.97620270990453e-312;
                        }
                        if (cVar8 == '\0') {
                            fStack_40 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
                        } else {
                            fStack_40 = SUB84(dVar6 - dVar6, 0);
                        }
                        if (cVar9 == '\0') {
                            dVar6 = (double)CONCAT44(0x41400000, fStack_14);
                        } else {
                            fStack_40 = (float)uVar1;
                            uStack_3c = (u32)((u64)uVar1 >> 0x20);
                            uVar1 = CONCAT44(uStack_10, fStack_14);
                            dVar6 = 2.97620270990453e-312;
                        }
                        if (cVar8 == '\0') {
                            fStack_38 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
                        } else {
                            fStack_38 = SUB84(dVar6 + dVar6, 0);
                        }
                        if (cVar9 == '\0') {
                            dVar6 = (double)CONCAT44(0x41400000, fStack_1c);
                        } else {
                            fStack_38 = (float)uVar1;
                            uVar1 = CONCAT44(fStack_18, fStack_1c);
                            dVar6 = 2.97620270990453e-312;
                        }
                        if (cVar8 == '\0') {
                            fStack_34 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
                        } else {
                            fStack_34 = SUB84(dVar6 + dVar6, 0);
                        }
                        if (cVar9 == '\0') {
                            dVar6 = (double)CONCAT44(0x41400000, fStack_14);
                        } else {
                            fStack_34 = (float)uVar1;
                            uStack_30 = (u32)((u64)uVar1 >> 0x20);
                            uVar1 = CONCAT44(uStack_10, fStack_14);
                            dVar6 = 2.97620270990453e-312;
                        }
                        if (cVar8 == '\0') {
                            fStack_2c = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
                        } else {
                            fStack_2c = SUB84(dVar6 + dVar6, 0);
                        }
                        if (cVar9 == '\0') {
                            dVar6 = (double)CONCAT44(0x41400000, fStack_1c);
                        } else {
                            fStack_2c = (float)uVar1;
                            uVar1 = CONCAT44(fStack_18, fStack_1c);
                            dVar6 = 2.97620270990453e-312;
                        }
                        if (cVar8 == '\0') {
                            fStack_28 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
                        } else {
                            fStack_28 = SUB84(dVar6 + dVar6, 0);
                        }
                        if (cVar9 == '\0') {
                            dVar6 = (double)CONCAT44(0x41400000, fStack_14);
                            in_xd0 = uVar1;
                        } else {
                            fStack_28 = (float)uVar1;
                            uStack_24 = (u32)((u64)uVar1 >> 0x20);
                            in_xd0 = CONCAT44(uStack_10, fStack_14);
                            dVar6 = 2.97620270990453e-312;
                        }
                        if (cVar8 == '\0') {
                            fStack_20 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
                        } else {
                            fStack_20 = SUB84(dVar6 - dVar6, 0);
                        }
                        if (cVar9 != '\0') {
                            fStack_20 = (float)in_xd0;
                            fStack_1c = (float)((u64)in_xd0 >> 0x20);
                        }
                        obj_set_texlist(a0, ar5_00, ar6_00);
                        ar5_00 = 1;
                        obj_set_texture_num(a0, 1);
                        Class_129808_calc_016524(auStack_b0, ar5_00, ar6_00, ar7_00);
                    }
                }
            }
        }
    }
    uVar3 = Vec3_dtor(&fStack_1c, 0xffffffff, ar6_00, ar7_00);
    return uVar3;
}

/*
 * set_field_14_0d1450  0x8c0d1450
 * called by: Class_12bea8_uses_Class_129808_m2_0d7900, game_uses_obj_set_texlist_0d1168
 */
u32 set_field_14_0d1450(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x14) = a1;
    return in_r0;
}

/*
 * clear_field_eb60  0x8c0d1458
 * called by: input_copy_0e000c
 */
int clear_field_eb60(int a0) {
    int iVar1;

    iVar1 = 0xeb60;
    *(u32 *)(0xeb60 + a0) = 0;
    return iVar1;
}

/*
 * se_close_port_eb4c  0x8c0d1468
 * stops and closes the SE port handle at +0xeb4c
 * called by: sprinkler_close_sound
 */
int se_close_port_eb4c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = *(int *)(0xeb4c + a0);
    if (iVar1 != -1) {
        se_status(0x8c2b59d0, *(u32 *)(0xeb4c + a0), a2, a3);
        se_close_port_handle(0x8c2b59d0, a0 + 0xeb4c);
        iVar1 = 0xeb4c;
        *(u32 *)(0xeb4c + a0) = 0xffffffff;
    }
    return iVar1;
}

/*
 * CTexture_LoadFromCache_wrap_0d14b0  0x8c0d14b0
 * only calls CTexture_LoadFromCache
 * called by: env_load_textures_0e0320, game_uses_CSprinkler_LoadTexture_0e016c
 */
u32 CTexture_LoadFromCache_wrap_0d14b0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_LoadFromCache(a0, a1, a2, a3);
    return uVar1;
}

/*
 * CTexture_ReleaseFromVRAM_wrap_0d14cc  0x8c0d14cc
 * only calls CTexture_ReleaseFromVRAM
 * called by: env_release_textures_0e03d4
 */
u32 CTexture_ReleaseFromVRAM_wrap_0d14cc(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_ReleaseFromVRAM(a0, a1, a2, a3);
    return uVar1;
}

/*
 * se_status_eb4c  0x8c0d14e8
 * se_status of the SE port handle at +0xeb4c
 * called by: game_sound_0e0488
 */
int se_status_eb4c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = *(int *)(0xeb4c + a0);
    if (iVar1 != -1) {
        iVar1 = se_status(0x8c2b59d0, *(u32 *)(0xeb4c + a0), a2, a3);
    }
    return iVar1;
}

/*
 * se_play_eb4c  0x8c0d1518
 * plays sound 5 on the SE port handle at +0xeb4c
 * called by: game_sound_0e0508
 */
int se_play_eb4c(int a0) {
    int iVar1;

    iVar1 = *(int *)(0xeb4c + a0);
    if (iVar1 != -1) {
        iVar1 = se_play(0x8c2b59d0, *(u32 *)(0xeb4c + a0), 5);
    }
    return iVar1;
}

/*
 * se_calls_init_fields_0d1548  0x8c0d1548
 * area name: sits between se functions (same compilation unit); behaviour name: its callees mostly do: init_fields
 * called by: game_uses_get_field_38_0dfbdc
 */
u32 se_calls_init_fields_0d1548(u32 a0) {
    u32 uVar1;

    uVar1 = se_init_fields_0d1564(a0);
    return uVar1;
}

/*
 * se_init_fields_0d1564  0x8c0d1564
 * area name: sits between se functions (same compilation unit); behaviour name: writes 7 members
 * called by: Class_12b930_uses_Class_129920_ctor_0d0b58, se_calls_init_fields_0d1548
 */
u32 se_init_fields_0d1564(int a0) {
    *(u32 *)(a0 + 0xeb40) = 0;
    *(u32 *)(a0 + 0xeb44) = 0;
    *(u32 *)(a0 + 0xeb34) = 0x40a00000;
    *(u32 *)(a0 + 0xeb38) = 0;
    *(u32 *)(a0 + 0xeb3c) = 0;
    *(u32 *)(a0 + 0xeb60) = 0;
    *(u16 *)(a0 + 0xeb64) = 0;
    return 0xeb64;
}

/*
 * se_vec_0d15c4  0x8c0d15c4
 * area name: sits between se functions (same compilation unit); behaviour name: mostly calls vec functions
 */
u32 se_vec_0d15c4(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c126430, a1, a2, a3);
    uVar3 = 0x8c437478;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c437478, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126440, pcVar2, uVar3, a3);
    uVar3 = 0x8c437484;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c437484, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126450, pcVar2, uVar3, a3);
    uVar3 = 0x8c437490;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c437490, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126460, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c43749c, a3);
    if (cVar4 == '\0') {
        g_8c126470 = CONCAT44(_UNK_8c126474, 0x800000);
        /* WARNING: Read-only address (ram,0x8c126474) is written */
    } else {
        g_8c126470 = 0xffffffff00800000;
    }
    return 0x8c125864;
}

/*
 * se_uses_njGetMatrix_wrap_0d167c  0x8c0d167c
 * area name: sits between se functions (same compilation unit); behaviour name: its main named callee is
 * njGetMatrix_wrap called by: COutside_Create, CSoilTank_Create, CWaterTank_CreateStage
 */
u32 se_uses_njGetMatrix_wrap_0d167c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 *ar5_00;
    u8 auStack_88[64];
    u8 auStack_48[68];

    uVar1 = a1;
    identity_023e44(auStack_48);
    identity_023e44(auStack_88);
    njGetMatrix_wrap(auStack_48);
    njGetMatrix_wrap(auStack_88);
    njRotateY_wrap(auStack_48);
    matrix_rotate_deg_m(auStack_88);
    ar5_00 = auStack_88;
    game_calls_update_fields_023e98(auStack_48, ar5_00, a2, a3);
    njGetMatrix_wrap(auStack_88);
    njRotateZ_wrap(auStack_88);
    game_calls_update_fields_023e98(auStack_48, auStack_88, a2, a3);
    calc_vector_copy(auStack_48, a1, a0);
    free_if_nonnull_wrap_023e4c(auStack_88, 0xffffffff, a0, a3);
    uVar1 = free_if_nonnull_wrap_023e4c(auStack_48, 0xffffffff, a0, a3);
    return uVar1;
}

/*
 * game_calls_float_calc_0d1754  0x8c0d1754
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: float_calc
 * called by: CEnv_vec_0dac50
 */
u32 game_calls_float_calc_0d1754(float *a0, int a1) {
    u32 uVar1;
    int iVar2;
    float fVar3;
    float fVar4;
    float in_PR;
    char cVar5;
    char cVar6;
    float fStack_28;
    float fStack_24;
    float fStack_20;
    float fStack_1c;
    float fStack_18;
    float fStack_14;
    float fStack_10;

    cVar6 = '\0';
    cVar5 = '\0';
    fStack_10 = in_PR;
    matrix_float_calc_256294(0, a1, &fStack_20);
    matrix_float_calc_256294(0, a1, &fStack_18);
    for (iVar2 = 1; iVar2 < 8; iVar2 = iVar2 + 1) {
        matrix_float_calc_256294(0, iVar2 * 0xc + a1, &fStack_28);
        fVar3 = fStack_20;
        fVar4 = fStack_1c;
        if (cVar6 == '\0') {
            fVar3 = fStack_28;
            fVar4 = fStack_20;
        }
        if (cVar5 != '\0' || fVar4 <= fVar3) {
            fVar3 = fStack_18;
            fVar4 = fStack_14;
            if (cVar6 == '\0') {
                fVar3 = fStack_28;
                fVar4 = fStack_18;
            }
            if (cVar5 == '\0' && fVar4 < fVar3) {
                if (cVar6 == '\0') {
                    fStack_18 = fStack_28;
                } else {
                    fStack_18 = fStack_28;
                    fStack_14 = fStack_24;
                }
            }
        } else {
            if (cVar6 != '\0') {
                fStack_1c = fStack_24;
            }
            fStack_20 = fStack_28;
        }
        fVar3 = fStack_1c;
        fVar4 = fStack_18;
        if (cVar6 == '\0') {
            fVar3 = fStack_24;
            fVar4 = fStack_1c;
        }
        if (cVar5 != '\0' || fVar4 <= fVar3) {
            fVar3 = fStack_14;
            fVar4 = fStack_10;
            if (cVar6 == '\0') {
                fVar3 = fStack_24;
                fVar4 = fStack_14;
            }
            if (cVar5 == '\0' && fVar4 < fVar3) {
                if (cVar6 == '\0') {
                    fStack_14 = fStack_24;
                } else {
                    fStack_14 = fStack_24;
                    fStack_10 = fStack_20;
                }
            }
        } else {
            if (cVar6 != '\0') {
                fStack_18 = fStack_20;
            }
            fStack_1c = fStack_24;
        }
    }
    fVar3 = fStack_20;
    fVar4 = fStack_1c;
    if (cVar6 == '\0') {
        fVar3 = *a0;
        fVar4 = fStack_20;
    }
    if (cVar5 != '\0' || fVar4 <= fVar3) {
        fVar3 = fStack_18;
        fVar4 = fStack_14;
        if (cVar6 == '\0') {
            fVar3 = *a0;
            fVar4 = fStack_18;
        }
        if (cVar5 != '\0' || fVar3 <= fVar4) {
            fVar3 = fStack_1c;
            if (cVar6 == '\0') {
                fVar3 = a0[1];
                fStack_18 = fStack_1c;
            }
            if (cVar5 != '\0' || fStack_18 <= fVar3) {
                fVar3 = fStack_14;
                if (cVar6 == '\0') {
                    fVar3 = a0[1];
                    fStack_10 = fStack_14;
                }
                if (cVar5 != '\0' || fVar3 <= fStack_10) {
                    uVar1 = 1;
                } else {
                    uVar1 = 0;
                }
            } else {
                uVar1 = 0;
            }
        } else {
            uVar1 = 0;
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * game_uses_sprintf_0d1858  0x8c0d1858
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is sprintf
 * called by: Class_12b758_draw_0e4dd0, game_uses_color_set_white_a0_0df250, game_uses_noop_0de6d0,
 * game_uses_noop_0deb60, game_uses_noop_0def78 strings: "GRAPHICS\\COMMON"; "%08.4lf"
 */
u32 game_uses_sprintf_0d1858(double *a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;
    u32 unaff_r14;
    u8 *puVar2;
    u32 *puVar3;
    u32 in_fr1;
    double dVar4;
    u64 in_dr4;
    float in_fr15;
    float fVar5;
    u64 in_xd14;
    bool bVar6;
    u32 in_PR;
    u32 auStack_3c[3];
    u8 auStack_2f[39];
    u8 auStack_8[4];
    u8 auStack_4[4];

    puVar2 = auStack_4;

    *(u32 *)(puVar2 + -4) = unaff_r14;
    *(u32 *)(puVar2 + -8) = in_PR;

    in_fr15 = (float)((u64)in_dr4 >> 0x20);
    dVar4 = (double)CONCAT44(*(u32 *)a0, in_fr1);
    in_dr4 = in_xd14;

    bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

    if (!bVar6) {

        dVar4 = (double)CONCAT44(*(u32 *)((int)a0 + 4), SUB84(dVar4, 0));

        bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

        if (bVar6) {
            *(u32 *)(puVar2 + -0x2c) = 0xffcccccc;
            r5 = 0xffcccccc;
            r6 = 0xffec1111;
            r7 = 0xffec1111;
            (*(code *)(&set_4_colors_154))(0x8c2b5628, 0xffcccccc, 0xffec1111, 0xffec1111, *(u32 *)(puVar2 + -0x2c));
            goto LAB_8c0d1936;
        }
    }

    dVar4 = (double)CONCAT44(*(u32 *)(a0 + 1), SUB84(dVar4, 0));

    bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

    if (!bVar6) {

        dVar4 = (double)CONCAT44(*(u32 *)((int)a0 + 0xc), SUB84(dVar4, 0));

        bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

        if (bVar6) {
            *(u32 *)(puVar2 + -0x2c) = 0xffcccccc;
            r5 = 0xffcccccc;
            r6 = 0xffc8c800;
            r7 = 0xffc8c800;
            (*(code *)(&set_4_colors_154))(0x8c2b5628, 0xffcccccc, 0xffc8c800, 0xffc8c800, *(u32 *)(puVar2 + -0x2c));
            goto LAB_8c0d1936;
        }
    }

    dVar4 = (double)CONCAT44(*(u32 *)(a0 + 2), SUB84(dVar4, 0));

    bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

    if (!bVar6) {

        dVar4 = (double)CONCAT44(*(u32 *)((int)a0 + 0x14), SUB84(dVar4, 0));

        bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

        if (bVar6) {
            *(u32 *)(puVar2 + -0x2c) = 0xffcccccc;
            r5 = 0xffcccccc;
            r6 = 0xff00c1de;
            r7 = 0xff00c1de;
            (*(code *)(&set_4_colors_154))(0x8c2b5628, 0xffcccccc, 0xff00c1de, 0xff00c1de, *(u32 *)(puVar2 + -0x2c));
            goto LAB_8c0d1936;
        }
    }

    dVar4 = (double)CONCAT44(*(u32 *)(a0 + 3), SUB84(dVar4, 0));

    bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

    if (!bVar6) {

        dVar4 = (double)CONCAT44(*(u32 *)((int)a0 + 0x1c), SUB84(dVar4, 0));

        bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

        if (bVar6) {
            *(u32 *)(puVar2 + -0x2c) = 0xffcccccc;
            r5 = 0xffcccccc;
            r6 = 0xffc8c800;
            r7 = 0xffc8c800;
            (*(code *)(&set_4_colors_154))(0x8c2b5628, 0xffcccccc, 0xffc8c800, 0xffc8c800, *(u32 *)(puVar2 + -0x2c));
            goto LAB_8c0d1936;
        }
    }

    dVar4 = (double)CONCAT44(*(u32 *)(a0 + 4), SUB84(dVar4, 0));

    bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

    if (!bVar6) {

        dVar4 = (double)CONCAT44(*(u32 *)((int)a0 + 0x24), SUB84(dVar4, 0));

        bVar6 = (float)((u64)dVar4 >> 0x20) < in_fr15;

        if (!bVar6) {
            *(u32 *)(puVar2 + -0x2c) = 0xffcccccc;
            r5 = 0xffcccccc;
            r6 = 0xffec1111;
            r7 = 0xffec1111;
            (*(code *)(&set_4_colors_154))(0x8c2b5628, 0xffcccccc, 0xffec1111, 0xffec1111, *(u32 *)(puVar2 + -0x2c));
        }
    }
LAB_8c0d1936:

    dVar4 = (double)CONCAT44(g_8c0d19b8, SUB84(dVar4, 0));

    bVar6 = in_fr15 < (float)((u64)dVar4 >> 0x20);

    fVar5 = in_fr15;
    if ((!bVar6) && (fVar5 = g_8c0d19bc, 0)) {
        in_dr4 = CONCAT44("GRAPHICS\\COMMON", g_8c0d19bc);
        fVar5 = in_fr15;
    }

    puVar3 = (u32 *)(puVar2 + -0x2c);
    *(float *)(puVar2 + -0x2c) = fVar5;

    puVar3[-1] = "%08.4lf";
    sprintf(puVar3 + 1, r5, r6, r7, puVar3[-1]);
    *(u8 *)((int)puVar3 + 9) = 0;
    *puVar3 = 0x1c;
    game_uses_obj_set_texlist_0c4370(0x8c2b5628, puVar3 + 1, 0, 0xe);
    *puVar3 = 0xffffffff;
    uVar1 = set_4_colors_154(0x8c2b5628, 0xffffffff, 0xffffffff, 0xffffffff, *puVar3);
    return uVar1;
}

/*
 * game_state_switch_0d19dc  0x8c0d19dc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls state_switch functions
 * called by: Class_12a0c4_state_switch_068e64
 */
int game_state_switch_0d19dc(int a0, int a1, u32 unused_a2, u32 a3) {
    int a4;
    int a5;
    int a6;

    a5 = a0;
    a6 = a1;
    a4 = CItemGLoader_state_switch_0fef94(0x8c3eb324, a0, a1, a3);
    if (a4 != 0) {
        if ((a0 < 0x10) && (-1 < a0)) {
            switch (a0) {
            default:
                a6 = 0;
                a5 = 0x8c3eb334;
                (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4, 0x8c3eb334, 0, a3);
                break;
            case 3:
                break;
            }
        }
        if ((a0 == 3) && (a1 == 2)) {
            a6 = 0;
            a5 = 0x8c3eb334;
            (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4, 0x8c3eb334, 0, a3);
        } else if ((a0 == 3) && (a1 == 3)) {
            a6 = 3;
            a5 = 0x8c3eb334;
            (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4, 0x8c3eb334, 3, a3);
        } else if ((a0 == 3) && (a1 == 4)) {
            a6 = 6;
            a5 = 0x8c3eb334;
            (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4, 0x8c3eb334, 6, a3);
        } else if ((a0 == 5) && (a1 == 6)) {
            a6 = 0;
            a5 = 0x8c3eb334;
            (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4, 0x8c3eb334, 0, a3);
        } else if ((a0 == 5) && (a1 == 7)) {
            a6 = 3;
            a5 = 0x8c3eb334;
            (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4, 0x8c3eb334, 3, a3);
        } else if ((a0 == 10) && (a1 == 0x11)) {
            a6 = 0;
            a5 = 0x8c3eb334;
            (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4, 0x8c3eb334, 0, a3);
        } else if ((a0 == 10) && (a1 == 0x13)) {
            a6 = 3;
            a5 = 0x8c3eb334;
            (**(code **)(*(int *)(a4 + 8) + 0xe0))(a4, 0x8c3eb334, 3, a3);
        }
        (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4, a5, a6, a3);
    }
    return a4;
}

/*
 * game_uses_get_field_24_0d1b90  0x8c0d1b90
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_24_05c284
 * called by: Class_12b388_uses_Class_129808_draw_0c5cb4, Class_12bb08_uses_get_field_24_0dbbe8,
 * game_uses_get_field_24_0e8900, game_uses_get_field_300_0db8d4
 */
u32 game_uses_get_field_24_0d1b90(int *a0, int a1, int a2, u32 a3) {
    u32 uVar1;
    int a5;

    uVar1 = 0;
    if (*a0 != 0) {
        a5 = a1;
        get_field_24_05c284(*a0, a1);
        if (a1 == 1) {
            uVar1 = (**(code **)(0x148 + *(int *)(*a0 + 8)))(*a0, a5, a2, a3);
            a2 = (int)(short)uVar1;
            (**(code **)(0xec + *(int *)(*a0 + 8)))(*a0, 0x8c3eb334, a2, a3);
        }
        (**(code **)(*(int *)(*a0 + 8) + 0x58))(*a0, 0x8c3eb324, a2, a3);
        uVar1 = game_uses_get_field_24_0ff500(0x8c3eb324, a0, a2, a3);
    }
    return uVar1;
}

/*
 * set_g_8c437864  0x8c0d1c14
 * stores byte a0 in 8c437864
 * called by: game_uses_get_field_d0_0c6e74, save_check_presence_and_date
 */
u8 *set_g_8c437864(u32 a0, u32 a1) {
    u8 *puVar1;

    puVar1 = 0x8c437864;
    g_8c437864 = (u8)a0;
    return puVar1;
}

/*
 * game_calc_0d1c20  0x8c0d1c20
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 * called by: bugbox_4_screen
 */
u8 *game_calc_0d1c20(u32 a0, u32 a1, u32 a2) {
    u8 *puVar1;

    g_8c43785c = a0;
    g_8c437860 = a1;
    puVar1 = 0x8c437864;
    g_8c437864 = (u8)a2;
    return puVar1;
}

/*
 * game_draw_0d1c3c  0x8c0d1c3c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_0d1c3c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    g_8c431a50 = 1;
    if ((g_8c437864 == '\0') || (g_8c437864 == '\x01')) {
        Vec3_draw_0d5e2c(unused_a0, a1, a2, a3);
    }
    uVar1 = thunk_FUN_8c20a1d0(0x8c43786c);
    return uVar1;
}

/*
 * game_draw_0d1c84  0x8c0d1c84
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_get_field_d0_0c6e74
 */
int game_draw_0d1c84(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int *a4;
    u32 a5;

    if (g_8c437c5c == '\0') {
        g_8c437c58 = 0;
        g_8c437c5c = '\x01';
    }
    iVar1 = 0;
    if ((g_8c43785c != 0) && (iVar1 = 0, g_8c437860 != 0)) {
        Class_129808_draw(0x8c431294, a1, a2, a3);
        do {
        } while (g_8c431a50 != 1);
        if (g_8c437c58 < 1) {
            iVar1 = g_8c437c58 + 1;
            g_8c437c58 = iVar1;
        } else {
            a5 = (u32) * 0x8c437864;
            a4 = (int *)*0x8c43785c;
            (**(code **)(0x9c + *a4))(a4, a5, a2, a3);
            game_draw_0f7ea0(a4, a5, a2, a3);
            (**(code **)(0x98 + *(int *)*0x8c437860))((int *)*0x8c437860, (u32) * 0x8c437864, a2, a3);
            g_8c43785c = 0;
            g_8c437860 = 0;
            iVar1 = 0;
            g_8c437c58 = 0;
        }
    }
    return iVar1;
}

/*
 * game_copy_0d1d54  0x8c0d1d54
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: game_copy_0c67f4
 */
u32 game_copy_0d1d54(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    *(u32 *)(a0 + 0x1a0) = 0;
    *(u32 *)(a0 + 0x1b0) = 0;
    *(u32 *)(a0 + 0x1a4) = 0;
    *(u8 *)(a0 + 0x1b4) = 1;
    *(u32 *)(a0 + 0x1b8) = 0;
    *(u32 *)(a0 + 0x1a8) = 0;
    *(u32 *)(a0 + 0x1ac) = 0;
    *(u32 *)(a0 + 0x1bc) = 0x446a56b8;
    *(u32 *)(a0 + 0x1c0) = 0x43340000;
    *(u32 *)(a0 + 0x1c4) = 0x43557405;
    *(u32 *)(a0 + 0x1cc) = 0x4475f20c;
    *(u32 *)(a0 + 0x1d0) = 0x43340000;
    *(u32 *)(a0 + 0x1d4) = 0x44390b33;
    *(u32 *)(a0 + 0x1dc) = 0x440a7a8f;
    *(u32 *)(a0 + 0x1e0) = 0x43340000;
    *(u32 *)(a0 + 0x1e4) = 0x44406fa8;
    for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
        a2 = 0xf0;
        unused_a1 = 0x8c437b48;
        memmove_bytes(iVar2 * 0xf0 + a0 + 0x1ec, 0x8c437b48, 0xf0);
    }
    uVar1 = nautilus_desc_init(a0 + 0x1ec, unused_a1, a2, a3);
    return uVar1;
}

/*
 * game_copy_0d1eb8  0x8c0d1eb8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: game_copy_0c67f4
 */
u32 game_copy_0d1eb8(int a0) {
    int iVar1;

    *(u32 *)(a0 + 0x14bc) = 0;
    *(u8 *)(a0 + 0x14c0) = 0;
    *(u32 *)(a0 + 0x14b4) = 1;
    *(u32 *)(a0 + 0x14b8) = 1;
    for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
        memmove_bytes(iVar1 * 0xf0 + a0 + 0x14c4, 0x8c437b48, 0xf0);
    }
    return 0x14;
}

/*
 * game_copy_0d1f38  0x8c0d1f38
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: game_copy_0c67f4
 */
u32 game_copy_0d1f38(int a0) {
    int iVar1;

    *(u8 *)(0x2790 + a0) = 0;
    *(u32 *)(0x278c + a0) = 0;
    for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
        memmove_bytes(iVar1 * 0xf0 + a0 + 0x2794, 0x8c437b48, 0xf0);
    }
    return 10;
}

/*
 * CEnv_LoadDevicePanelTexture  0x8c0d1fa0
 * called by: game_init_sound_and_messages
 * strings: "DEVICE_PANEL"; "GRAPHICS\\ENV"; "Failed to load device panel textuer.."; "CEnv::LoadDevicePanelTexture()"
 */
int CEnv_LoadDevicePanelTexture(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar7_00;
    int iVar1;
    u8 **ar5_00;

    ar5_00 = &PTR_PTR_8c13f33c;
    Class_129920_m0_015248(0x8c4377f4, &PTR_PTR_8c13f33c, a2, a3);
    ar7_00 = get_field_4_0253e4(0x8c4377f4, ar5_00, a2, a3);
    iVar1 = retry_until_done_020e80(a0, "DEVICE_PANEL", "GRAPHICS\\ENV", ar7_00);
    if (iVar1 == 0) {
        iVar1 = report_error_message("Failed to load device panel textuer..", "CEnv::LoadDevicePanelTexture()", 0, 2);
    }
    return iVar1;
}

/*
 * CEnv_set_texlist  0x8c0d2028
 * selects the environment texture list (0x8c4377f4) and its first texture
 * called by: Class_12b758_draw_0e4dd0, game_draw_0df668, game_uses_color_set_white_a0_0df250, game_uses_noop_0de6d0,
 * game_uses_noop_0deb60, game_uses_noop_0def78
 */
u32 CEnv_set_texlist(u32 unused_a0, u32 a1, u32 a2) {
    u32 uVar1;

    obj_set_texlist(0x8c4377f4, a1, a2);
    uVar1 = obj_set_texture_num(0x8c4377f4, 0);
    return uVar1;
}

/*
 * CEnv_vec_0d2050  0x8c0d2050
 * area name: sits between CEnv functions (same compilation unit); behaviour name: mostly calls vec functions
 */
int CEnv_vec_0d2050(int a0, u32 a1, u32 a2) {
    int iVar1;

    Vec3_ctor_zero(a0, a1, a2);
    Vec3_set_one(a0 + 0x10);
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
        *(u32 *)(a0 + iVar1 * 4 + 0x2c) = 0xffffffff;
    }
    *(u32 *)(a0 + 0x3c) = 3;
    CEnv_update_fields_0d25a0(a0);
    CEnv_vec_0d20bc(a0);
    return a0;
}

/*
 * CEnv_vec_0d20bc  0x8c0d20bc
 * area name: sits between CEnv functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: CEnv_vec_0d2050, CEnv_vec_0d21a0
 */
u32 CEnv_vec_0d20bc(int a0) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    Vec3_set_one_08a9b8(a0 + 0x10);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x1c) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x1c) = CONCAT44(0x3f800000, extraout_fr1);
    }
    *(u16 *)(a0 + 0x24) = 0;
    *(u32 *)(a0 + 0x28) = 0;
    *(u32 *)(a0 + 0x40) = 0;
    return 0x40;
}

/*
 * CEnv_set_scale_and_type  0x8c0d20f0
 * sets a uniform scale from fr4 (times 1.5 for type 4), stores a1 at +0x28 and the type a2 at +0x3c
 * called by: game_sound_0d4c74
 */
u32 CEnv_set_scale_and_type(int a0, u32 a1, int a2) {
    u32 in_fr4;

    *(u32 *)(a0 + 0x18) = in_fr4;
    *(u32 *)(a0 + 0x14) = in_fr4;
    *(u32 *)(a0 + 0x10) = in_fr4;
    if (a2 == 4) {
        *(float *)(a0 + 0x10) = *(float *)(a0 + 0x10) * 1.5;
        *(float *)(a0 + 0x14) = *(float *)(a0 + 0x14) * 1.5;
        *(float *)(a0 + 0x18) = *(float *)(a0 + 0x18) * 1.5;
    }
    CEnv_update_fields_0d25a0(a0);
    *(u16 *)(a0 + 0x24) = 0;
    *(u32 *)(a0 + 0x28) = a1;
    *(int *)(a0 + 0x3c) = a2;
    return a1;
}

/*
 * CEnv_vec_0d21a0  0x8c0d21a0
 * area name: sits between CEnv functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: Class_12b930_vec_0d3c08
 */
u64 *CEnv_vec_0d21a0(int a0, u32 a1) {
    u64 *puVar1;
    double *pdVar2;
    float fVar3;
    double dVar4;
    float fVar5;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u64 uStack_18;

    cVar7 = '\0';
    cVar6 = '\0';
    if ((a1 & 1) == 0) {
        *(short *)(a0 + 0x24) = *(short *)(a0 + 0x24) + 1;
    }
    if (*(short *)(a0 + 0x24) == 0x14) {
        CEnv_vec_0d20bc(a0);
    }
    if (((*(int *)(a0 + 0x3c) == 3) || (puVar1 = *(u64 **)(a0 + 0x3c), puVar1 == (u64 *)0x4)) &&
        (puVar1 = (u64 *)0x8, 7 < *(short *)(a0 + 0x24))) {
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(0x3c03126f, *(u32 *)(a0 + 0x20));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x20);
            dVar4 = 5.238690687974987e-11;
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 + dVar4, 0);
        }
        pdVar2 = (double *)(a0 + 0x20);
        if (cVar7 == '\0') {
            *(float *)(a0 + 0x20) = fVar3;
            pdVar2 = (double *)(a0 + 0x1c);
        } else {
            *(u64 *)(a0 + 0x20) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x1c);
        }
        dVar4 = *pdVar2;
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 - dVar4, 0);
        }
        uStack_18 = in_xd0;
        if (cVar7 == '\0') {
            uStack_18 = CONCAT44(a0, fVar3);
        }
        if (cVar7 == '\0') {
            *(float *)(uStack_18._4_4_ + 0x1c) = (float)uStack_18;
            fVar5 = 0.1;
            fVar3 = (float)uStack_18;
        } else {
            *(u64 *)(uStack_18._4_4_ + 0x1c) = uStack_18;
            fVar3 = 0.1;
            fVar5 = 3.8960407e-10;
            in_xd0 = uStack_18;
        }
        if (cVar6 == '\0' && fVar3 < fVar5) {
            if (cVar7 == '\0') {
                *(u32 *)(a0 + 0x1c) = 0x3dcccccd;
            } else {
                *(u64 *)(a0 + 0x1c) = 0x2fd62fe63dcccccd;
            }
        }
        puVar1 = (u64 *)(a0 + 0x14);
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(*(u32 *)(a0 + 0x1c), *(u32 *)puVar1);
        } else {
            in_xd0 = *puVar1;
            dVar4 = *(double *)(a0 + 0x1c);
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar7 == '\0') {
            *(float *)(a0 + 0x14) = fVar3;
        } else {
            *(u64 *)(a0 + 0x14) = in_xd0;
        }
    }
    return puVar1;
}

/*
 * CEnv_draw_0d2264  0x8c0d2264
 * area name: sits between CEnv functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_draw_0d4a90
 */
u32 CEnv_draw_0d2264(int a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    u32 ar4_00;
    int ar4_01;
    u32 uVar3;

    uVar2 = a2;
    uVar3 = a1;
    piVar1 = (int *)get_field_4_0253e4(a1, a1, a2, a3);
    ar4_00 = 0;
    matrix_push(0, a1, uVar2, a3, uVar3);
    touch_fields_30_3c_wrap();
    uVar3 = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = *(u32 *)(*(short *)(a0 + 0x24) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 0x24) * 0xc + *piVar1 + 8) = uVar3;
    uVar3 = *(u32 *)(*piVar1 + 0xf8);
    *(u32 *)(*piVar1 + 0xf8) = *(u32 *)((*(short *)(a0 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
    *(u32 *)((*(short *)(a0 + 0x24) + 0x14) * 0xc + *piVar1 + 8) = uVar3;
    uVar3 = *(u32 *)(*piVar1 + 0x1e8);
    ar4_01 = *piVar1;
    *(u32 *)(ar4_01 + 0x1e8) = *(u32 *)((*(short *)(a0 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
    *(u32 *)((*(short *)(a0 + 0x24) + 0x28) * 0xc + *piVar1 + 8) = uVar3;
    matrix_scale_wrap(ar4_01, a1);
    Class_12c058_draw_015adc(a2, a1, uVar2, a3);
    uVar3 = *(u32 *)(*(short *)(a0 + 0x24) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 0x24) * 0xc + *piVar1 + 8) = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = uVar3;
    uVar3 = *(u32 *)((*(short *)(a0 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
    *(u32 *)((*(short *)(a0 + 0x24) + 0x14) * 0xc + *piVar1 + 8) = *(u32 *)(*piVar1 + 0xf8);
    *(u32 *)(*piVar1 + 0xf8) = uVar3;
    uVar3 = *(u32 *)((*(short *)(a0 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
    *(u32 *)((*(short *)(a0 + 0x24) + 0x28) * 0xc + *piVar1 + 8) = *(u32 *)(*piVar1 + 0x1e8);
    *(u32 *)(*piVar1 + 0x1e8) = uVar3;
    uVar2 = matrix_pop_n(1);
    return uVar2;
}

/*
 * game_draw_0d2478  0x8c0d2478
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0d4a90
 */
u32 game_draw_0d2478(int a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    u32 uVar3;
    int ar6_00;
    u32 uVar4;
    u32 uVar5;

    uVar3 = a1;
    uVar4 = a3;
    uVar5 = a2;
    piVar1 = (int *)get_field_4_0253e4(a1, a1, a2, a3);
    uVar2 = 0;
    matrix_push(0, uVar3, a2, uVar4, uVar5);
    touch_fields_30_3c_wrap();
    uVar4 = 4;
    ar6_00 = a0 + 0x2c;
    uVar3 = a3;
    Class_129808_update_fields_016464(a3, uVar5, ar6_00, 4);
    uVar2 = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = *(u32 *)(*(short *)(a0 + 0x24) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 0x24) * 0xc + *piVar1 + 8) = uVar2;
    matrix_scale_wrap(uVar3, uVar5);
    uVar3 = 0;
    obj_set_texture_num(a1, 0);
    Class_129808_calc_016524(a3, uVar3, ar6_00, uVar4);
    uVar5 = *(u32 *)(*(short *)(a0 + 0x24) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 0x24) * 0xc + *piVar1 + 8) = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = uVar5;
    uVar3 = matrix_pop_n(1);
    return uVar3;
}

/*
 * CEnv_update_fields_0d25a0  0x8c0d25a0
 * area name: only called from CEnv methods; behaviour name: conditionally writes members
 * called by: CEnv_set_scale_and_type, CEnv_vec_0d2050
 */
u32 *CEnv_update_fields_0d25a0(int a0) {
    *(u32 *)(a0 + 0x1c) = 0x3f800000;
    *(u32 *)(a0 + 0x20) = 0;
    return (u32 *)(a0 + 0x1c);
}

/*
 * game_vec_0d25b4  0x8c0d25b4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
int game_vec_0d25b4(int a0, u32 a1, u32 a2, u32 a3) {
    Vec3_ctor_zero(a0, a1, a2);
    Vec3_ctor_zero(a0 + 0x18, a1, a2);
    Vec3_ctor_zero(a0 + 0x28, a1, a2);
    Class_12984c_ctor(a0 + 0x48);
    game_vec_0d2f14(a0, a1, a2, a3);
    set_flag_28_20(a0 + 0x48);
    set_flag_10_28(a0 + 0x48);
    return a0;
}

/*
 * game_uses_get_field_4_0d261c  0x8c0d261c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_4_0253e4
 * called by: Class_12b930_uses_vec_new_array_0d2fd8
 */
u32 game_uses_get_field_4_0d261c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 uVar1;
    u32 ar4_00;

    uVar1 = a2;
    ar4_00 = a1;
    game_vec_0d2f14(a0, a1, a2, a3);
    ar5_00 = get_field_4_0253e4(ar4_00, a1, uVar1, a3);
    set_field_1c(a0 + 0x48, ar5_00);
    set_field_20(a0 + 0x48, a2);
    uVar1 = set_flag_2_28(a0 + 0x48);
    return uVar1;
}

/*
 * set_flag_2_28  0x8c0d267c
 * ORs 2 into the flags at +0x28
 * called by: game_uses_get_field_4_0d261c
 */
u32 set_flag_2_28(int a0) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 0x28) | 2;
    *(u32 *)(a0 + 0x28) = uVar1;
    return uVar1;
}

/*
 * game_vec_0d2690  0x8c0d2690
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: WATER_ELEMENT_CreateStage0
 */
u32 game_vec_0d2690(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = game_vec_0d2f14(a0, a1, a2, a3);
    return uVar1;
}

/*
 * game_uses_rand_0d26ac  0x8c0d26ac
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: uses_rand
 * called by: game_vec_0d59a4
 */
u32 game_uses_rand_0d26ac(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    game_uses_rand_0d26f0(a0, a1, a2);
    uVar1 = game_uses_rand_0d276c(a0, a1, a2, a3);
    return uVar1;
}

/*
 * game_uses_rand_0d26f0  0x8c0d26f0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: game_uses_rand_0d26ac, game_vec_0d59a4
 */
u8 *game_uses_rand_0d26f0(float *a0, u32 a1, u32 a2) {
    int iVar1;
    float fVar2;
    double dVar3;
    u64 in_xd0;
    char cVar4;
    char cVar5;

    cVar5 = '\0';
    cVar4 = '\0';
    iVar1 = rand();
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar3 = 4294968432.0;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 / dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x41f00000, fVar2);
    } else {
        dVar3 = 1.1916598991585905e+22;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x44843000, fVar2);
    } else {
        dVar3 = 6473925613858816.0;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 + dVar3, 0);
    }
    if (cVar5 == '\0') {
        *a0 = fVar2;
        a0[1] = 183.0;
    } else {
        *(u64 *)a0 = in_xd0;
        a0[1] = 183.0;
        a0[2] = 711.0;
    }
    iVar1 = rand();
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar3 = 4294968432.0;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 / dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x41f00000, fVar2);
    } else {
        dVar3 = 1.1916598991585905e+22;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar5 == '\0') {
        dVar3 = (double)CONCAT44(0x4431c000, fVar2);
    } else {
        dVar3 = -1.5729774353164037e+308;
    }
    if (cVar4 == '\0') {
        fVar2 = SUB84(dVar3, 0) + (float)((u64)dVar3 >> 0x20);
    } else {
        fVar2 = SUB84(dVar3 + dVar3, 0);
    }
    if (cVar5 == '\0') {
        a0[2] = fVar2;
    } else {
        *(u64 *)(a0 + 2) = in_xd0;
    }
    return &g_8c0d2768;
}

/*
 * game_uses_rand_0d276c  0x8c0d276c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: game_uses_rand_0d26ac, game_vec_0d59a4
 */
u32 game_uses_rand_0d276c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 in_fr1;
    float fVar3;
    double dVar4;
    float fVar6;
    u8 *puVar7;
    double dVar5;
    u32 in_fr3;
    u32 uVar8;
    u64 in_dr4;
    u64 in_dr6;
    u32 in_fr13;
    double dVar9;
    u32 uVar11;
    double dVar10;
    double in_xd0;
    double dVar12;
    double in_xd12;
    double in_xd14;
    bool bVar13;
    char cVar14;
    char cVar15;
    float fStack_2c;

    cVar15 = '\0';
    cVar14 = '\0';
    uVar11 = (u32)((u64)in_dr4 >> 0x20);
    uVar8 = (u32)in_dr4;
    dVar9 = (double)CONCAT44((int)((u64)in_dr6 >> 0x20), in_fr13);
    iVar2 = a0;
    iVar1 = rand();
    if (cVar15 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000, in_fr1);
    } else {
        dVar4 = 0.1250000330619514;
    }
    if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(uVar11, (float)iVar1 / (float)((u64)dVar4 >> 0x20));
    } else {
        dVar10 = (double)CONCAT44(uVar11, (float)iVar1) / dVar4;
    }
    if (cVar15 == '\0') {
        dVar4 = (double)CONCAT44(0x3fc00000, SUB84(dVar4, 0));
    } else {
        dVar4 = 1.3411048264966308e-08;
    }
    if (cVar14 == '\0') {
        bVar13 = (float)((u64)dVar10 >> 0x20) < (float)((u64)dVar4 >> 0x20);
    } else {
        bVar13 = dVar10 < dVar4;
    }
    fVar3 = SUB84(dVar10, 0);
    if (bVar13) {
        if (cVar15 == '\0') {
            *(u32 *)(a0 + 0x84) = 0x3f800000;
            dVar4 = (double)CONCAT44(0x41033333, fVar3);
        } else {
            *(u64 *)(a0 + 0x84) = CONCAT44(0x3f800000, SUB84(dVar4, 0));
            dVar4 = 512.000124001503;
            in_xd0 = in_xd14;
        }
        if (cVar14 == '\0') {
            fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar15 == '\0') {
            dVar4 = (double)CONCAT44(0x40800000, fVar3);
        } else {
            dVar4 = 2.80638087878186e-312;
        }
        if (cVar14 == '\0') {
            fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 + dVar4, 0);
        }
        if (cVar15 == '\0') {
            *(float *)(a0 + 0x10) = fVar3;
        } else {
            *(double *)(a0 + 0x10) = in_xd0;
        }
    } else {
        if (cVar15 == '\0') {
            dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), fVar3);
            fVar6 = 0.2;
        } else {
            fVar3 = 0.2;
            fVar6 = 0.3;
            in_xd0 = in_xd14;
            in_xd12 = in_xd14;
        }
        if (cVar14 == '\0' && fVar3 < fVar6) {
            if (cVar15 == '\0') {
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), 0x3e99999a);
            } else {
                in_xd12 = 157286.40556640626;
            }
        }
        if (cVar15 == '\0') {
            dVar4 = (double)CONCAT44(0x41033333, fVar3);
        } else {
            dVar4 = 512.000124001503;
        }
        if (cVar14 == '\0') {
            dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), SUB84(dVar9, 0) * (float)((u64)dVar4 >> 0x20));
        } else {
            dVar9 = dVar9 * dVar4;
        }
        if (cVar15 == '\0') {
            dVar4 = (double)CONCAT44(0x40800000, SUB84(dVar4, 0));
        } else {
            dVar4 = 2.80638087878186e-312;
        }
        if (cVar14 == '\0') {
            dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), SUB84(dVar9, 0) + (float)((u64)dVar4 >> 0x20));
        } else {
            dVar9 = dVar9 + dVar4;
        }
        if (cVar15 == '\0') {
            *(int *)(a0 + 0x10) = SUB84(dVar9, 0);
            *(u32 *)(a0 + 0x84) = 0x40400000;
        } else {
            *(double *)(a0 + 0x10) = in_xd12;
            *(u64 *)(a0 + 0x84) = 0x40b47ae140400000;
        }
    }
    if (cVar15 == '\0') {
        fVar3 = *(float *)(a0 + 0x10);
        puVar7 = (u8 *)0x40b47ae1;
    } else {
        in_xd0 = *(double *)(a0 + 0x10);
        fVar3 = 5.64;
        puVar7 = &g_8c437c60;
    }
    if (cVar14 != '\0' || (float)puVar7 <= fVar3) {
        *(u32 *)(a0 + 0x14) = 1;
    } else {
        *(u32 *)(a0 + 0x14) = 0;
    }
    iVar1 = rand();
    if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44((float)iVar1, in_fr3);
    } else {
        dVar4 = (double)iVar1;
    }
    if (cVar15 == '\0') {
        dVar5 = (double)CONCAT44(0x47000000, fVar3);
    } else {
        dVar5 = 0.1250000330619514;
    }
    fVar3 = (float)((u64)dVar5 >> 0x20);
    if (cVar14 == '\0') {
        dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) / fVar3, SUB84(dVar4, 0));
    } else {
        dVar4 = dVar4 / dVar5;
    }
    dVar12 = dVar9;
    if (cVar15 == '\0') {
        dVar5 = (double)CONCAT44(fVar3, (int)((u64)dVar9 >> 0x20));
        dVar12 = in_xd0;
    }
    if (cVar14 == '\0') {
        fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar4 >> 0x20);
    } else {
        fVar3 = SUB84(dVar5 * dVar4, 0);
    }
    if (cVar15 == '\0') {
        dVar4 = (double)CONCAT44(uVar8, fVar3);
    } else {
        dVar4 = (double)CONCAT44(fStack_2c, uVar8);
    }
    if (cVar14 == '\0') {
        g_8c437c60 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
    } else {
        g_8c437c60 = SUB84(dVar4 + dVar4, 0);
    }
    if (cVar15 != '\0') {
        g_8c437c60 = SUB84(dVar12, 0);
        g_8c437c64 = (u32)((u64)dVar12 >> 0x20);
    }
    iVar2 = rand();
    if (cVar15 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
    } else {
        dVar4 = 0.1250000330619514;
    }
    if (cVar14 == '\0') {
        fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) * fVar3, SUB84(dVar9, 0));
    } else {
        fVar3 = SUB84(dVar4 / dVar4, 0);
        dVar9 = dVar9 * (dVar4 / dVar4);
    }
    if (cVar15 == '\0') {
        dVar4 = (double)CONCAT44(uVar8, fVar3);
    } else {
        dVar4 = (double)CONCAT44(fStack_2c, uVar8);
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) + (float)((u64)dVar4 >> 0x20), SUB84(dVar9, 0));
    } else {
        dVar9 = dVar9 + dVar4;
    }
    uVar11 = (u32)((u64)dVar9 >> 0x20);
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x3e4ccccd, SUB84(dVar4, 0));
        g_8c437c64 = uVar11;
    } else {
        g_8c437c64 = SUB84(dVar9, 0);
        dVar9 = 3.8146987284548574e-07;
        g_8c437c68 = uVar11;
    }
    if (cVar14 == '\0') {
        bVar13 = SUB84(dVar10, 0) < (float)((u64)dVar9 >> 0x20);
    } else {
        bVar13 = dVar10 < dVar9;
    }
    if (bVar13) {
        if (cVar15 == '\0') {
            g_8c437c64 = 0;
            g_8c437c60 = 0.0;
        } else {
            fStack_2c = SUB84(dVar9, 0);
            g_8c437c68 = 0;
            g_8c437c60 = fStack_2c;
            g_8c437c64 = 0;
        }
    }
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x41f00000, g_8c437c60);
    } else {
        dVar12 = (double)CONCAT44(g_8c437c64, g_8c437c60);
        dVar9 = -7.933197385572896e-251;
    }
    if (cVar14 == '\0') {
        fVar3 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
    } else {
        fVar3 = SUB84(dVar9 / dVar9, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x28) = -fVar3;
    } else {
        *(double *)(a0 + 0x28) = dVar12;
    }
    if (cVar15 == '\0') {
        *(u32 *)(a0 + 0x2c) = 0;
        dVar9 = (double)CONCAT44(0x41f00000, g_8c437c64);
    } else {
        *(u64 *)(a0 + 0x2c) = (u64)(u32)-fVar3;
        dVar12 = (double)CONCAT44(g_8c437c68, g_8c437c64);
        dVar9 = -7.933197385572896e-251;
    }
    if (cVar14 == '\0') {
        fVar3 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
    } else {
        fVar3 = SUB84(dVar9 / dVar9, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x30) = -fVar3;
    } else {
        *(double *)(a0 + 0x30) = dVar12;
    }
    Vec3_assign_f(a0 + 0x18, a1, a2, a3);
    if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x3ee66666, *(u32 *)(a0 + 0x10));
    } else {
        dVar12 = *(double *)(a0 + 0x10);
        dVar9 = 1.1709360719622307e+17;
    }
    if (cVar14 == '\0') {
        fVar3 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar3 = SUB84(dVar9 * dVar9, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x38) = fVar3;
        dVar9 = (double)CONCAT44(0x437a0000, fVar3);
    } else {
        *(double *)(a0 + 0x38) = dVar12;
        dVar9 = 985162559995904.0;
    }
    if (cVar14 == '\0') {
        fVar3 = SUB84(dVar10, 0) * (float)((u64)dVar9 >> 0x20);
    } else {
        fVar3 = SUB84(dVar10 * dVar9, 0);
    }
    if (cVar15 == '\0') {
        *(float *)(a0 + 0x3c) = fVar3;
        dVar9 = (double)CONCAT44(0x430c0000, *(u32 *)(a0 + 0x10));
    } else {
        *(double *)(a0 + 0x3c) = in_xd14;
        dVar9 = 6.207226637267681e-78;
    }
    if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) / SUB84(dVar9, 0), SUB84(dVar9, 0));
    } else {
        dVar9 = dVar9 / dVar9;
    }
    if (cVar15 == '\0') {
        *(int *)(a0 + 0x40) = (int)((u64)dVar9 >> 0x20);
    } else {
        *(double *)(a0 + 0x40) = dVar9;
    }
    *(u32 *)(a0 + 0x7c) = 0;
    return 0x7c;
}

/*
 * game_vec_0d294c  0x8c0d294c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: update_active_entries_62c
 */
u32 game_vec_0d294c(u8 *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u8 *ar5_00;
    u8 *puVar3;
    float fVar4;
    double in_dr0;
    code *pcVar6;
    double dVar5;
    u64 in_dr4;
    float fVar7;
    u32 in_fr14;
    u64 in_xd14;
    bool bVar8;
    char cVar9;
    char cVar10;
    u8 auStack_4c[16];
    u8 auStack_3c[16];
    u8 auStack_2c[16];
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    cVar10 = '\0';
    cVar9 = '\0';
    fVar7 = (float)((u64)in_dr4 >> 0x20);
    Vec3_ctor_zero(&uStack_1c, a1, a2);
    ar5_00 = a0 + 0x18;
    puVar3 = a0;
    Vec3_add_assign(a0, ar5_00);
    fVar4 = SUB84(in_dr0, 0);
    iVar1 = *(int *)(a0 + 0x74);
    if (iVar1 == 0) {
        puVar3 = a0 + 0x28;
        Vec3_add_assign(a0 + 0x18, puVar3);
        if (cVar10 == '\0') {
            fVar4 = *(float *)(a0 + 0x28);
        }
        if (cVar9 != '\0' || 0.0 <= fVar4) {
            if (cVar10 == '\0') {
                fVar4 = *(float *)(a0 + 0x28);
            }
            if (cVar9 == '\0' && 0.0 < fVar4) {
                if (cVar10 == '\0') {
                    fVar4 = *(float *)(a0 + 0x18);
                }
                if (cVar9 == '\0' && 0.0 < fVar4) {
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x18) = 0;
                    } else {
                        *(u64 *)(a0 + 0x18) = (u64)(u32)fVar4;
                    }
                }
            }
        } else {
            if (cVar10 == '\0') {
                fVar4 = *(float *)(a0 + 0x18);
            }
            if (cVar9 == '\0' && fVar4 < 0.0) {
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x18) = 0;
                } else {
                    *(u64 *)(a0 + 0x18) = (u64)(u32)fVar4;
                }
            }
        }
        if (cVar10 == '\0') {
            fVar4 = *(float *)(a0 + 0x30);
        }
        if (cVar9 != '\0' || 0.0 <= fVar4) {
            if (cVar10 == '\0') {
                fVar4 = *(float *)(a0 + 0x30);
            }
            if (cVar9 == '\0' && 0.0 < fVar4) {
                if (cVar10 == '\0') {
                    fVar4 = *(float *)(a0 + 0x20);
                }
                if (cVar9 == '\0' && 0.0 < fVar4) {
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x20) = 0;
                    } else {
                        *(u64 *)(a0 + 0x20) = (u64)(u32)fVar4;
                    }
                }
            }
        } else {
            if (cVar10 == '\0') {
                fVar4 = *(float *)(a0 + 0x20);
            }
            if (cVar9 == '\0' && fVar4 < 0.0) {
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 0x20) = 0;
                } else {
                    *(u64 *)(a0 + 0x20) = (u64)(u32)fVar4;
                }
            }
        }
        if (cVar10 == '\0') {
            fVar4 = *(float *)(a0 + 0x18);
        }
        in_dr0 = (double)(u64)(u32)fVar4;
        if (fVar4 == 0.0) {
            if (cVar10 == '\0') {
                fVar4 = *(float *)(a0 + 0x20);
            }
            in_dr0 = (double)(u64)(u32)fVar4;
            if (fVar4 == 0.0) {
                if (cVar10 == '\0') {
                    in_dr0 = (double)CONCAT44(0x41126666, *(u32 *)(a0 + 0x10));
                } else {
                    in_dr0 = -7.947556305225132e-251;
                }
                if (cVar9 == '\0' && SUB84(in_dr0, 0) < (float)((u64)in_dr0 >> 0x20)) {
                    if (cVar10 == '\0') {
                        *(u32 *)(a0 + 0x18) = *(u32 *)(a0 + 0x38);
                        in_dr0 = (double)((u64)in_dr0 & 0xffffffff);
                    } else {
                        *(u64 *)(a0 + 0x18) = *(u64 *)(a0 + 0x38);
                        in_dr0 = *(double *)(a0 + 0x40);
                    }
                    Vec3_vec_023570(a0 + 0x18, puVar3, a2, a3, auStack_2c);
                    Vec3_assign(a0 + 0x18, auStack_2c, a2, a3);
                    Vec3_dtor(auStack_2c, 0xffffffff, a2, a3);
                }
                *(u32 *)(a0 + 0x74) = 1;
            }
        }
    } else if (iVar1 == 1) {
        if (cVar10 == '\0') {
            fVar4 = *(float *)(a0 + 0x10);
            pcVar6 = (code *)0x41126666;
        } else {
            fVar4 = 9.15;
            pcVar6 = Vec3_vec_023570;
        }
        if (cVar9 == '\0' && fVar4 < (float)pcVar6) {
            Vec3_vec_023570(a0 + 0x18, ar5_00, a2, a3, auStack_3c);
            Vec3_assign(a0 + 0x18, auStack_3c, a2, a3);
            ar5_00 = (u8 *)0xffffffff;
            puVar3 = auStack_3c;
            Vec3_dtor(puVar3, 0xffffffff, a2, a3);
        }
        if (cVar10 == '\0') {
            in_dr0 = (double)CONCAT44(*(u32 *)(a0 + 4), fVar4);
        } else {
            in_dr0 = *(double *)(a0 + 4);
        }
        if (cVar9 == '\0') {
            bVar8 = (float)((u64)in_dr0 >> 0x20) < fVar7;
        } else {
            bVar8 = in_dr0 < (double)CONCAT44(in_fr14, fVar7);
        }
        if (!bVar8) {
            *(u32 *)(a0 + 0x7c) = 0;
            iVar1 = rand();
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x47000000, (float)iVar1);
            } else {
                dVar5 = 1099511918592.0;
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20);
            } else {
                fVar4 = SUB84(dVar5 / dVar5, 0);
            }
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(0x42700000, fVar4);
            } else {
                dVar5 = 3.966050706335591e+20;
            }
            if (cVar9 == '\0') {
                fVar4 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
                iVar1 = (int)fVar4;
            } else {
                fVar4 = SUB84(dVar5 * dVar5, 0);
                iVar1 = (int)(dVar5 * dVar5);
            }
            *(int *)(a0 + 0x78) = iVar1 + 0xf;
            if (cVar10 != '\0') {
                fVar4 = 1072.5;
            }
            Vec3_assign_f(&uStack_1c, ar5_00, a2, a3);
            uVar2 = Vec3_length(&uStack_1c, ar5_00, a2, a3);
            Vec3_scale(uVar2, &g_8c13f478, a2, a3, auStack_4c);
            Vec3_assign(&uStack_1c, auStack_4c, a2, a3);
            Vec3_dtor(auStack_4c, 0xffffffff, a2, a3);
            if (cVar10 == '\0') {
                *(u32 *)(a0 + 0x18) = uStack_1c;
                in_dr0 = (double)CONCAT44(uStack_14, fVar4);
                *(u32 *)(a0 + 0x20) = uStack_14;
            } else {
                *(u64 *)(a0 + 0x18) = CONCAT44(uStack_18, uStack_1c);
                in_dr0 = (double)CONCAT44(uStack_10, uStack_14);
                *(double *)(a0 + 0x20) = in_dr0;
            }
            *(u32 *)(a0 + 0x74) = 2;
        }
    } else if ((iVar1 == 2) && (*(int *)(a0 + 0x78) < *(int *)(a0 + 0x7c))) {
        game_vec_0d2f14(a0, ar5_00, a2, a3);
    }
    uVar2 = SUB84(in_dr0, 0);
    *(int *)(a0 + 0x7c) = *(int *)(a0 + 0x7c) + 1;
    iVar1 = libgcc_divide_helper_01031c(*(u32 *)(a0 + 0x7c), 3, a2);
    if ((iVar1 == 0) && (iVar1 = *(int *)(a0 + 0x80), *(int *)(a0 + 0x80) = iVar1 + 1, 3 < iVar1 + 1)) {
        *(u32 *)(a0 + 0x80) = 0;
    }
    if (cVar10 == '\0') {
        dVar5 = (double)CONCAT44(*(u32 *)(a0 + 4), uVar2);
    } else {
        dVar5 = *(double *)(a0 + 4);
    }
    if (cVar9 == '\0') {
        bVar8 = (float)((u64)dVar5 >> 0x20) < fVar7;
    } else {
        bVar8 = dVar5 < (double)CONCAT44(in_fr14, fVar7);
    }
    if (!bVar8) {
        if (cVar10 == '\0') {
            *(float *)(a0 + 4) = fVar7;
        } else {
            *(u64 *)(a0 + 4) = in_xd14;
        }
    }
    uVar2 = Vec3_dtor(&uStack_1c, 0xffffffff, a2, a3);
    return uVar2;
}

/*
 * game_draw_0d2c84  0x8c0d2c84
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: Vec3_draw_0d5d28
 */
u32 game_draw_0d2c84(float *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    float fVar2;
    float *pfStack_8c;
    u16 *puStack_84;
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
    float *pfStack_3c;
    float fStack_1c;
    float fStack_18;
    float fStack_14;

    fStack_1c = *a0;
    fStack_18 = a0[1];
    fStack_14 = a0[2];
    pfStack_3c = &fStack_1c;
    fStack_6c = g_8c13f4a8;
    fStack_64 = (float)g_8c13f4b0;
    fStack_60 = (float)g_8c13f4b4;
    fStack_58 = (float)g_8c13f4bc;
    fStack_54 = (float)g_8c13f4c0;
    fStack_4c = (float)g_8c13f4c8;
    fStack_48 = (float)g_8c13f4cc;
    fStack_40 = (float)g_8c13f4d4;
    fStack_68 = a0[1] - 1.0;
    fStack_5c = a0[1] - 1.0;
    fStack_50 = a0[1] - 1.0;
    fStack_44 = a0[1] - 1.0;
    pfStack_8c = &fStack_6c;
    puStack_84 = &uStack_7c;
    if (a0[5] == 0.0) {
        uVar1 = gfxlib_draw_234fd0(&pfStack_3c, 1, 0, a3);
    } else {
        fVar2 = (a0[4] / 12.2) * a0[0x21];
        if (a0[0x1d] == 2.8026e-45) {
            fStack_6c = *a0 - fVar2 * 5.0;
            fStack_64 = a0[2] + fVar2 * 5.0;
            fStack_60 = *a0 - fVar2 * 5.0;
            fStack_58 = a0[2] - fVar2 * 5.0;
            fStack_54 = *a0 + fVar2 * 5.0;
            fStack_4c = a0[2] - fVar2 * 5.0;
            fStack_48 = *a0 + fVar2 * 5.0;
            fStack_40 = a0[2] + fVar2 * 5.0;
            uStack_7c = 0;
            uStack_7a = 0;
            uStack_78 = 0;
            uStack_76 = 0x7f;
            uStack_74 = 0x7f;
            uStack_72 = 0x7f;
            uStack_70 = 0x7f;
            uStack_6e = 0;
            obj_set_texlist(a1, a1, a2);
            obj_set_texture_num(a1, 0);
            uVar1 = gfxlib_draw_235bfc(&pfStack_8c, 4, 0x80000060, a3);
        } else {
            set_pair_10_fr4_5(a0 + 0x12);
            uVar1 = (**(code **)((int)a0[0x12] + 0x1c))(a0 + 0x12, a0[0x20], a2, a3);
        }
    }
    return uVar1;
}

/*
 * set_pair_10_fr4_5  0x8c0d2f04
 * stores fr4 and fr5 at +0x10 and +0x14
 * called by: game_draw_0d2c84
 */
u32 *set_pair_10_fr4_5(int a0) {
    u32 in_fr5;
    u32 in_fr4;

    *(u32 *)(a0 + 0x10) = in_fr4;
    *(u32 *)(a0 + 0x14) = in_fr5;
    return (u32 *)(a0 + 0x10);
}

/*
 * game_vec_0d2f14  0x8c0d2f14
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_uses_get_field_4_0d261c, game_vec_0d25b4, game_vec_0d2690, game_vec_0d294c
 */
u32 game_vec_0d2f14(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_fr1;
    u32 uVar1;
    u64 uVar2;
    char cVar3;

    cVar3 = '\0';
    Vec3_assign_f(a0, a1, a2, a3);
    vec3_clear(a0 + 0x18, a1, a2, a3);
    uVar2 = CONCAT44(0x3f800000, in_fr1);
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x1c) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x1c) = uVar2;
    }
    vec3_clear(a0 + 0x28, a1, a2, a3);
    if (cVar3 == '\0') {
        uVar1 = (u32)uVar2;
        *(u32 *)(a0 + 0x10) = 0x40800000;
    } else {
        uVar1 = 0x40800000;
        *(u64 *)(a0 + 0x10) = 0x430c000040800000;
    }
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x3c) = 0;
        *(u32 *)(a0 + 0x40) = 0x430c0000;
        *(u32 *)(a0 + 0x38) = 0x3ee66666;
    } else {
        *(u64 *)(a0 + 0x3c) = (u64)uVar1;
        *(u64 *)(a0 + 0x40) = 0x3ee66666430c0000;
        uVar1 = 0x3ee66666;
        *(u64 *)(a0 + 0x38) = 0x803ee66666;
    }
    *(u32 *)(a0 + 0x14) = 1;
    *(u32 *)(a0 + 0x44) = 0;
    *(u32 *)(a0 + 0x74) = 0;
    *(u32 *)(a0 + 0x80) = 0;
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x84) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x84) = CONCAT44(0x3f800000, uVar1);
    }
    return 0x84;
}

/*
 * fill_colors_8c43784c  0x8c0d2fc0
 * stores colour a0 in the four words at 8c43784c
 * called by: game_uses_fill_colors_8c43784c_0d4f3c, game_uses_fill_colors_8c43784c_0d4f70
 */
u32 *fill_colors_8c43784c(u32 a0) {
    u32 *puVar1;

    g_8c43784c = a0;
    0x8c43784c [1] = a0;
    0x8c43784c [2] = a0;
    puVar1 = 0x8c43784c;
    0x8c43784c [3] = a0;
    return puVar1;
}

/*
 * Class_12b930_uses_vec_new_array_0d2fd8  0x8c0d2fd8
 * area name: only called from Class_12b930 methods; behaviour name: its main named callee is vec_new_array
 * called by: Class_12b930_ctor
 */
int Class_12b930_uses_vec_new_array_0d2fd8(int a0, u32 a1) {
    code *pcVar1;
    int iVar2;
    code *pcVar3;
    u32 uVar4;
    u32 ar7_00;
    u32 in_fr1;
    u64 uVar5;
    char cVar6;

    cVar6 = '\0';
    Class_129920_ctor(a0 + 8, a1);
    clear_field_0_wrap_015ab8(a0 + 0x10);
    clear_field_0_wrap_015ab8(a0 + 0x1c);
    uVar4 = 4;
    pcVar3 = free_if_nonnull_wrap_016bfc;
    pcVar1 = clear_field_0_wrap_015ab8;
    vec_new_array(a0 + 0x20, clear_field_0_wrap_015ab8, free_if_nonnull_wrap_016bfc, 4, 3);
    named_list_ctor_58_wrap(a0 + 0x34, pcVar1, pcVar3);
    Class_129920_ctor(a0 + 0x108, pcVar1);
    Class_12b3b8_copy_016410(a0 + 0x110);
    clear_field_0_wrap_015ab8(a0 + 0x154);
    vec_new_array(a0 + 0x470, CEnv_vec_0d2050, game_release_0d336c, 0x44, 5);
    vec_new_array(a0 + 0x5fc, game_init_fields_02145c, free_if_nonnull_wrap_0cffc8, 0x18, 2);
    uVar4 = 0x88;
    pcVar3 = game_release_0d3304;
    pcVar1 = game_vec_0d25b4;
    vec_new_array(a0 + 0x62c, game_vec_0d25b4, game_release_0d3304, 0x88, 0x226);
    Class_129908_ctor(a0 + 0x12a5c, pcVar1);
    *(u32 *)(a0 + 0x2c) = 0;
    *(u32 *)(a0 + 0x14) = 0;
    if (cVar6 == '\0') {
        *(u32 *)(a0 + 0x18) = 0x3ec8c155;
    } else {
        in_fr1 = 0x3ec8c155;
        *(u64 *)(a0 + 0x18) = 0x8c13e7803ec8c155;
    }
    set_field_0_015ad4(a0 + 0x20, &g_8c13e780, pcVar3);
    set_field_0_015ad4(a0 + 0x24, &g_8c13ea48, pcVar3);
    set_field_0_015ad4(a0 + 0x28, &g_8c13ed20, pcVar3);
    if (cVar6 == '\0') {
        *(u32 *)(a0 + 0x430) = 0xc3960000;
    } else {
        in_fr1 = 0xc3960000;
        *(u64 *)(a0 + 0x430) = 0x434c3960000;
    }
    if (cVar6 == '\0') {
        *(u32 *)(a0 + 0x434) = 0;
        *(u32 *)(a0 + 0x438) = 0xc3960000;
        *(u32 *)(a0 + 0x43c) = 0xc3960000;
    } else {
        *(u64 *)(a0 + 0x434) = (u64)in_fr1;
        *(u64 *)(a0 + 0x438) = 0x434c3960000;
        in_fr1 = 0xc3960000;
        *(u64 *)(a0 + 0x43c) = 0x434c3960000;
    }
    if (cVar6 == '\0') {
        *(u32 *)(a0 + 0x440) = 0;
        *(u32 *)(a0 + 0x444) = 0x43960000;
        *(u32 *)(a0 + 0x448) = 0x43960000;
    } else {
        *(u64 *)(a0 + 0x440) = (u64)in_fr1;
        *(u64 *)(a0 + 0x444) = 0x44843960000;
        in_fr1 = 0x43960000;
        *(u64 *)(a0 + 0x448) = 0x44843960000;
    }
    if (cVar6 == '\0') {
        *(u32 *)(a0 + 0x44c) = 0;
        *(u32 *)(a0 + 0x450) = 0x43960000;
        uVar5 = CONCAT44(0x43960000, in_fr1);
        *(u32 *)(a0 + 0x454) = 0x43960000;
    } else {
        *(u64 *)(a0 + 0x44c) = (u64)in_fr1;
        *(u64 *)(a0 + 0x450) = 0x44843960000;
        uVar5 = 0x44843960000;
        *(u64 *)(a0 + 0x454) = 0x44843960000;
    }
    if (cVar6 == '\0') {
        *(u32 *)(a0 + 0x458) = 0;
        *(u32 *)(a0 + 0x45c) = 0xc3960000;
    } else {
        *(u64 *)(a0 + 0x458) = uVar5 & 0xffffffff;
        *(u64 *)(a0 + 0x45c) = 0x434c3960000;
    }
    *(u16 *)(a0 + 0x460) = 0;
    *(u16 *)(a0 + 0x462) = 0xff;
    *(u16 *)(a0 + 0x464) = 0;
    *(u16 *)(a0 + 0x466) = 0;
    *(u16 *)(a0 + 0x468) = 0xff;
    *(u16 *)(a0 + 0x46a) = 0;
    *(u16 *)(a0 + 0x46c) = 0xff;
    *(u16 *)(a0 + 0x46e) = 0xff;
    ar7_00 = 4;
    Class_129808_update_fields_016464(a0 + 0x110, a0 + 0x430, 0, 4);
    uVar4 = 4;
    iVar2 = a0 + 0x460;
    CSquid_update_fields_0164c8(a0 + 0x110, iVar2, 4);
    set_flag_14_20(a0 + 0x110);
    set_flags_14_60(a0 + 0x110);
    set_flag_14_bit31_and_20(a0 + 0x110);
    Class_12b580_sound_0d56dc(a0, iVar2, uVar4, ar7_00);
    for (iVar2 = 0; iVar2 < 0x226; iVar2 = iVar2 + 1) {
        game_uses_get_field_4_0d261c(iVar2 * 0x88 + a0 + 0x62c, a0 + 0x12a5c, &g_8c13f344, ar7_00);
    }
    return a0;
}

/*
 * game_release_0d3304  0x8c0d3304
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 */
int game_release_0d3304(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Class_12984c_dtor(a0 + 0x48, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x28, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x18, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_release_0d336c  0x8c0d336c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 */
int game_release_0d336c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_016ac4(a0 + 0x10, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * named_list_ctor_58_wrap  0x8c0d33bc
 * only calls named_list_ctor_58
 * called by: Class_12b930_uses_vec_new_array_0d2fd8
 */
u32 named_list_ctor_58_wrap(u32 a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    uVar1 = named_list_ctor_58(a0, (&DATA_8c13f7c0) + 0x15d, a2);
    return uVar1;
}

/*
 * WATER_ELEMENT_CreateStage0  0x8c0d33e8
 * loads suisou_WaterFace.nj from GRAPHICS\ENV (from its error string)
 * called by: game_uses_CWaterTank_CreateStage_0de07c
 * strings: "suisou_WaterFace.nj"; "GRAPHICS\\ENV"; "suisou_WaterFace.nj"; "Failed NJCM:WATER_ELEMENT::CreateStage0()"
 * ...
 */
u32 WATER_ELEMENT_CreateStage0(double *a0, u32 a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    char *ar5_00;
    int iVar3;
    char *pcVar4;
    u32 uVar5;
    char *ar6_00;
    u32 *puVar6;
    u32 uVar7;
    float fVar8;
    double dVar9;
    double in_dr2;
    u64 in_xd0;
    char cVar10;
    char cVar11;
    u32 uStack_24;
    u32 auStack_20[2];

    cVar11 = '\0';
    cVar10 = '\0';
    auStack_20[0] = 0;
    uStack_24 = 0;
    *(u32 *)a0 = 0x44610000;
    iVar1 = retry_until_done_0209b0(a1, "suisou_WaterFace.nj", "GRAPHICS\\ENV", auStack_20);
    if (iVar1 == 0) {
        report_error_message("suisou_WaterFace.nj", "Failed NJCM:WATER_ELEMENT::CreateStage0()", 0, 2);
    }
    puVar6 = &uStack_24;
    pcVar4 = "GRAPHICS\\ENV";
    iVar1 = retry_until_done_020aa8(a1, "suisou_WaterFace.nj", "GRAPHICS\\ENV", puVar6);
    if (iVar1 == 0) {
        puVar6 = (u32 *)0x2;
        pcVar4 = NULL;
        report_error_message("suisou_WaterFace.nj", "Failed NJTL:WATER_ELEMENT::CreateStage0()", 0, 2);
    }
    set_field_0_015ad4(a0 + 2, auStack_20[0], pcVar4);
    iVar1 = retry_until_done_0209b0(a1, "suisou_Effect.nj", "GRAPHICS\\ENV", auStack_20);
    if (iVar1 == 0) {
        report_error_message("suisou_Effect.nj", "Failed NJCM:WATER_ELEMENT::CreateStage0()", 0, 2);
    }
    puVar6 = &uStack_24;
    pcVar4 = "GRAPHICS\\ENV";
    iVar1 = retry_until_done_020aa8(a1, "suisou_Effect.nj", "GRAPHICS\\ENV", puVar6);
    if (iVar1 == 0) {
        puVar6 = (u32 *)0x2;
        pcVar4 = NULL;
        report_error_message("suisou_Effect.nj", "Failed NJTL:WATER_ELEMENT::CreateStage0()", 0, 2);
    }
    uVar2 = auStack_20[0];
    set_field_0_015ad4((u32 *)((int)a0 + 0x1c), auStack_20[0], pcVar4);
    for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
        *(u32 *)((int)a0 + iVar1 * 0xc + 0x12a70) = 0;
    }
    uVar2 = get_field_4_0253e4((u32 *)((int)a0 + 0x12a5c), uVar2, pcVar4, puVar6);
    uVar7 = 1;
    uVar5 = 0x8c4312a8;
    puVar6 = (u32 *)((int)a0 + 0x12a6c);
    ptr_list_build_1c(uVar2, puVar6, 0x8c4312a8, 1);
    uVar2 = get_field_4_0253e4((u32 *)((int)a0 + 0x12a5c), puVar6, uVar5, uVar7);
    ar6_00 = "GRAPHICS\\ENV";
    pcVar4 = "WBubble.pvm";
    iVar1 = retry_until_done_020f90(a1, "WBubble.pvm", "GRAPHICS\\ENV", uVar2);
    if (iVar1 == 0) {
        uVar2 = 2;
        ar6_00 = NULL;
        pcVar4 = "WE::CreateStage0()";
        report_error_message("Failed to load new bubble tex..", "WE::CreateStage0()", 0, 2);
    }
    iVar1 = 0;
    do {
        uVar5 = SUB84(in_dr2, 0);
        if (0x59 < iVar1) {
        LAB_8c0d3658:
            for (iVar1 = 0; iVar1 < 0x226; iVar1 = iVar1 + 1) {
                game_vec_0d2690((int)a0 + iVar1 * 0x88 + 0x62c, pcVar4, ar6_00, uVar2);
            }
            for (iVar1 = 0; iVar1 < 0x3c; iVar1 = iVar1 + 1) {
                uVar7 = 1;
                uVar5 = a2;
                game_vec_0d59a4(a0, 1, a2, uVar2);
                update_active_entries_62c(a0, uVar7, uVar5, uVar2);
            }
            WE_CreateStageC(a0, a1, "wave.pvm");
            return 1;
        }
        uVar7 = 0x8c3e7d30;
        ar5_00 = (char *)pool_5c_alloc(0x8c3e7d30);
        if (ar5_00 == NULL) {
            uVar2 = 2;
            ar6_00 = (char *)0x1;
            pcVar4 = "WATER_ELEMETNT::CreateStage0()";
            report_error_message("Lack of mem..", "WATER_ELEMETNT::CreateStage0()", 1, 2);
            goto LAB_8c0d3658;
        }
        iVar3 = rand();
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x47000000, (float)iVar3);
        } else {
            dVar9 = 7.971355902106255e+24;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 / dVar9, 0);
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x451a6000, fVar8);
        } else {
            dVar9 = 1.2986509772968826e+23;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            *(float *)(ar5_00 + 8) = fVar8;
        } else {
            *(u64 *)(ar5_00 + 8) = in_xd0;
        }
        iVar3 = rand();
        if (cVar11 == '\0') {
            in_dr2 = (double)CONCAT44(*(u32 *)a0, uVar5);
        } else {
            in_dr2 = *a0;
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x47000000, (float)iVar3);
        } else {
            dVar9 = 7.971355902106255e+24;
        }
        if (cVar10 == '\0') {
            in_dr2 = (double)CONCAT44((float)((u64)in_dr2 >> 0x20) * (SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20)),
                                      SUB84(in_dr2, 0));
        } else {
            in_dr2 = in_dr2 * (dVar9 / dVar9);
        }
        if (cVar11 == '\0') {
            *(int *)(ar5_00 + 0xc) = (int)((u64)in_dr2 >> 0x20);
        } else {
            *(double *)(ar5_00 + 0xc) = in_dr2;
        }
        iVar3 = rand();
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x47000000, (float)iVar3);
        } else {
            dVar9 = 7.971355902106255e+24;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 / dVar9, 0);
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x44bb8000, fVar8);
        } else {
            dVar9 = -1.3922581301884715e-250;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            *(float *)(ar5_00 + 0x10) = fVar8;
        } else {
            *(u64 *)(ar5_00 + 0x10) = in_xd0;
        }
        list_append_58((u32 *)((int)a0 + 0x34), ar5_00);
        iVar1 = iVar1 + 1;
        pcVar4 = ar5_00;
    } while (true);
}

/*
 * WATER_ELEMETNT_Create  0x8c0d3770
 * called by: CWaterTank_create_all
 * strings: "suisou_WaterFace_small.nj"; "GRAPHICS\\ENV"; "suisou_WaterFace_small.nj"; "Failed
 * NJCM:WATER_ELEMENT::CreateStage2()" ...
 */
u32 WATER_ELEMETNT_Create(double *a0, u32 a1) {
    int iVar1;
    int ar5_00;
    int iVar2;
    u32 ar4_00;
    char *pcVar3;
    u32 *puVar4;
    int iVar5;
    float fVar6;
    double dVar7;
    u32 uVar8;
    double in_dr2;
    u64 in_xd0;
    char cVar9;
    char cVar10;
    u32 uStack_20;
    int aiStack_1c[2];

    cVar10 = '\0';
    cVar9 = '\0';
    aiStack_1c[0] = 0;
    uStack_20 = 0;
    *(u32 *)a0 = 0x43200000;
    iVar1 = retry_until_done_0209b0(a1, "suisou_WaterFace_small.nj", "GRAPHICS\\ENV", aiStack_1c);
    if (iVar1 == 0) {
        report_error_message("suisou_WaterFace_small.nj", "Failed NJCM:WATER_ELEMENT::CreateStage2()", 0, 2);
    }
    puVar4 = &uStack_20;
    pcVar3 = "GRAPHICS\\ENV";
    iVar1 = retry_until_done_020aa8(a1, "suisou_WaterFace_small.nj", "GRAPHICS\\ENV", puVar4);
    if (iVar1 == 0) {
        puVar4 = (u32 *)0x2;
        pcVar3 = NULL;
        report_error_message("suisou_WaterFace_small.nj", "Failed NJTL:WATER_ELEMENT::CreateStage2()", 0, 2);
    }
    set_field_0_015ad4(a0 + 2, aiStack_1c[0], pcVar3);
    iVar1 = retry_until_done_0209b0(a1, "suisou_Effect_small.nj", "GRAPHICS\\ENV", aiStack_1c);
    if (iVar1 == 0) {
        report_error_message("suisou_Effect_small.nj", "Failed NJCM:WATER_ELEMENT::CreateStage2()", 0, 2);
    }
    puVar4 = &uStack_20;
    pcVar3 = "GRAPHICS\\ENV";
    iVar1 = retry_until_done_020aa8(a1, "suisou_Effect_small.nj", "GRAPHICS\\ENV", puVar4);
    if (iVar1 == 0) {
        puVar4 = (u32 *)0x2;
        pcVar3 = NULL;
        report_error_message("suisou_Effect_small.nj", "Failed NJTL:WATER_ELEMENT::CreateStage2()", 0, 2);
    }
    iVar1 = aiStack_1c[0];
    set_field_0_015ad4((u32 *)((int)a0 + 0x1c), aiStack_1c[0], pcVar3);
    iVar5 = 0;
    do {
        uVar8 = SUB84(in_dr2, 0);
        if (0x31 < iVar5) {
        LAB_8c0d395e:
            WE_CreateStageC(a0, a1, "wave_small.pvm");
            return 1;
        }
        ar4_00 = 0x8c3e7d30;
        ar5_00 = pool_5c_alloc(0x8c3e7d30);
        if (ar5_00 == 0) {
            puVar4 = (u32 *)0x2;
            report_error_message("Lack of mem..", "WATER_ELEMETNT::Create()", 1, 2);
            goto LAB_8c0d395e;
        }
        iVar2 = rand();
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x47000000, (float)iVar2);
        } else {
            dVar7 = 1.1215622395287742e+23;
        }
        if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 / dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x44b7c000, fVar6);
        } else {
            dVar7 = 7.673846743559028e+21;
        }
        if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 * dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x447a0000, fVar6);
        } else {
            dVar7 = 2.8924499526186286e+22;
        }
        if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            *(float *)(ar5_00 + 8) = fVar6;
        } else {
            *(u64 *)(ar5_00 + 8) = in_xd0;
        }
        iVar2 = rand();
        if (cVar10 == '\0') {
            in_dr2 = (double)CONCAT44(*(u32 *)a0, uVar8);
        } else {
            in_dr2 = *a0;
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x47000000, (float)iVar2);
        } else {
            dVar7 = 1.1215622395287742e+23;
        }
        if (cVar9 == '\0') {
            in_dr2 = (double)CONCAT44((float)((u64)in_dr2 >> 0x20) * (SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20)),
                                      SUB84(in_dr2, 0));
        } else {
            in_dr2 = in_dr2 * (dVar7 / dVar7);
        }
        if (cVar10 == '\0') {
            *(int *)(ar5_00 + 0xc) = (int)((u64)in_dr2 >> 0x20);
        } else {
            *(double *)(ar5_00 + 0xc) = in_dr2;
        }
        iVar1 = rand();
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x47000000, (float)iVar1);
        } else {
            dVar7 = 1.1215622395287742e+23;
        }
        if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 / dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x44988000, fVar6);
        } else {
            dVar7 = 2.5220161595978547e+17;
        }
        if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 * dVar7, 0);
        }
        if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(0x438c0000, fVar6);
        } else {
            dVar7 = -1.392258127104201e-250;
        }
        if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 + dVar7, 0);
        }
        if (cVar10 == '\0') {
            *(float *)(ar5_00 + 0x10) = fVar6;
        } else {
            *(u64 *)(ar5_00 + 0x10) = in_xd0;
        }
        list_append_58((u32 *)((int)a0 + 0x34), ar5_00);
        iVar5 = iVar5 + 1;
        iVar1 = ar5_00;
    } while (true);
}

/*
 * WE_CreateStageC  0x8c0d39e4
 * called by: WATER_ELEMENT_CreateStage0, WATER_ELEMETNT_Create
 * strings: "GRAPHICS\\ENV"; "Failed to load water face textuer.."; "WE::CreateStageC()"; "GRAPHICS\\ENV" ...
 */
u32 WE_CreateStageC(int a0, u32 a1, u32 a2) {
    u32 r7;
    u32 uVar1;
    u8 *ar5_00;
    u32 uVar2;
    char *ar6_00;
    u32 a7;
    int iVar3;
    u32 uStack_1c;

    uStack_1c = g_8c13f4e8;
    njCalcVector_like(0, &uStack_1c, a0 + 0x5d8, r7, a2);
    for (iVar3 = 0; iVar3 < 0x19; iVar3 = iVar3 + 1) {
        *(u32 *)(iVar3 * 0xc + 0x8c4376b0) = *(u32 *)(iVar3 * 0xc + 0x8c4376b0) | 0x80000000;
    }
    a7 = 0x19;
    uVar2 = 0x8c4312a8;
    ptr_list_build_1c(0x8c4376a4, 0x8c4376ac, 0x8c4312a8, 0x19);
    uVar1 = 0x8c4376a4;
    (**(code **)(*(int *)(a0 + 8) + 8))((int *)(a0 + 8), 0x8c4376a4, uVar2, a7);
    uVar1 = get_field_4_0253e4(a0 + 8, uVar1, uVar2, a7);
    iVar3 = retry_until_done_020f90(a1, a2, "GRAPHICS\\ENV", uVar1);
    if (iVar3 == 0) {
        report_error_message("Failed to load water face textuer..", "WE::CreateStageC()", 0, 2);
    }
    for (iVar3 = 0; iVar3 < 0x3c; iVar3 = iVar3 + 1) {
        *(u32 *)(iVar3 * 0xc + a0 + 0x164) = *(u32 *)(iVar3 * 0xc + a0 + 0x164) | 0x80000000;
    }
    uVar2 = 0x3c;
    uVar1 = 0x8c4312a8;
    ptr_list_build_1c(a0 + 0x158, a0 + 0x160, 0x8c4312a8, 0x3c);
    iVar3 = a0 + 0x158;
    (**(code **)(*(int *)(a0 + 0x108) + 8))((int *)(a0 + 0x108), iVar3, uVar1, uVar2);
    uVar1 = get_field_4_0253e4(a0 + 0x108, iVar3, uVar1, uVar2);
    ar6_00 = "GRAPHICS\\ENV";
    iVar3 = retry_until_done_020f90(a1, "hamon.pvm", "GRAPHICS\\ENV", uVar1);
    if (iVar3 == 0) {
        uVar1 = 2;
        ar6_00 = NULL;
        report_error_message("Failed to load hamon textuer..", "WE::CreateStageC()", 0, 2);
    }
    ar5_00 = &g_8c13f164;
    set_field_0_015ad4(a0 + 0x154, &g_8c13f164, ar6_00);
    iVar3 = get_field_0_015bb8(a0 + 0x1c);
    uVar2 = game_calls_one_0151fc(*(u32 *)(*(int *)(iVar3 + 4) + 4));
    *(u32 *)(a0 + 0x2c) = uVar2;
    Vec3_uses_get_field_0_0d5de0(a0, ar5_00, ar6_00, uVar1);
    return 1;
}

/*
 * Class_12b930_vec_0d3c08  0x8c0d3c08
 * area name: only called from Class_12b930 methods; behaviour name: mostly calls vec functions
 * called by: Class_12b930_m2_0de3d4, Class_12b930_sound_0d3d6c
 */
u32 Class_12b930_vec_0d3c08(int a0, u32 a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    int iVar3;

    ar5_00 = 1;
    uVar2 = a1;
    for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
        iVar1 = get_field_40_0d3d64(iVar3 * 0x44 + a0 + 0x470);
        if (iVar1 != 0) {
            uVar2 = *(u32 *)(a0 + 0x5e8);
            CEnv_vec_0d21a0(iVar3 * 0x44 + a0 + 0x470, uVar2);
        }
    }
    if (*(int *)(a0 + 0x30) == 1) {
        if ((*(int *)(a0 + 0x61c) < 2) && (*(int *)(a0 + 0x61c) = *(int *)(a0 + 0x61c) + 2, 2 < *(int *)(a0 + 0x61c))) {
            *(u32 *)(a0 + 0x61c) = 2;
        }
        ar5_00 = 9;
    } else if ((-0x1e < *(int *)(a0 + 0x61c)) &&
               (*(int *)(a0 + 0x61c) = *(int *)(a0 + 0x61c) + -2, *(int *)(a0 + 0x61c) < -0x1e)) {
        *(u32 *)(a0 + 0x61c) = 0xffffffe2;
    }
    game_vec_0d59a4(a0, ar5_00, a1, a3);
    uVar2 = update_active_entries_62c(a0, ar5_00, a1, a3);
    *(int *)(a0 + 0x5e8) = *(int *)(a0 + 0x5e8) + 1;
    return uVar2;
}

/*
 * get_field_40_0d3d64  0x8c0d3d64
 * called by: Class_12b930_vec_0d3c08, game_draw_0d4a90, game_sound_0d4c74
 */
u32 get_field_40_0d3d64(int a0) {
    return *(u32 *)(a0 + 0x40);
}

/*
 * Class_12b930_sound_0d3d6c  0x8c0d3d6c
 * area name: only called from Class_12b930 methods; behaviour name: mostly calls sound functions
 * called by: CWaterTank_uses_Vec3_distance_sq_to_xyz_0e1398, CWaterTank_uses_get_field_300_0e0f48,
 * Class_12b930_m3_0de4b0
 */
u32 Class_12b930_sound_0d3d6c(u64 *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int ar4_00;
    u32 uVar2;
    u32 uVar3;
    int iVar4;
    float fVar5;
    double dVar6;
    float fVar9;
    double dVar7;
    u64 uVar8;
    code *pcVar10;
    double in_xd0;
    int ar4_01;
    char cVar11;
    char cVar12;

    cVar12 = '\0';
    cVar11 = '\0';
    if (((a0[0xbd] & 1) == 0) &&
        (*(short *)((int)a0 + 4) = *(short *)((int)a0 + 4) + 1, *(short *)((int)a0 + 4) == 0x19)) {
        *(u16 *)((int)a0 + 4) = 0;
    }
    uVar3 = a1;
    iVar1 = get_field_d0_0d3f70((int)a0 + 0x34);
    ar4_00 = list_node_next_wrap((int)a0 + 0x34);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
        if (cVar12 == '\0') {
            dVar6 = (double)CONCAT44(0x47800000, g_8c437c68);
        } else {
            dVar6 = 1.4411521878487204e+18;
            in_xd0 = g_8c437c68;
        }
        if (cVar11 == '\0') {
            fVar5 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            fVar5 = SUB84(dVar6 * dVar6, 0);
        }
        if (cVar12 == '\0') {
            dVar6 = (double)CONCAT44(0x43b40000, fVar5);
        } else {
            dVar6 = -3.745782517784109e-250;
        }
        if (cVar11 == '\0') {
            fVar9 = (float)((u64)dVar6 >> 0x20);
            fVar5 = SUB84(dVar6, 0) / fVar9;
            dVar6 = (double)CONCAT44(fVar9, fVar5);
            ar4_01 = (int)fVar5;
        } else {
            dVar6 = dVar6 / dVar6;
            ar4_01 = (int)dVar6;
        }
        njSinCos(ar4_01, a1, a2, a3, uVar3);
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0x3f000000, (int)((u64)dVar6 >> 0x20));
            dVar6 = in_xd0;
        } else {
            dVar7 = 3.5242919858872394e-14;
        }
        if (cVar11 == '\0') {
            fVar5 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
        } else {
            fVar5 = SUB84(dVar7 * dVar7, 0);
        }
        if (cVar12 == '\0') {
            *(float *)(ar4_00 + 0x1c) = fVar5;
            dVar7 = (double)CONCAT44(*(u32 *)(ar4_00 + 0x1c), *(u32 *)(ar4_00 + 0xc));
        } else {
            *(double *)(ar4_00 + 0x1c) = dVar6;
            dVar6 = *(double *)(ar4_00 + 0xc);
            dVar7 = *(double *)(ar4_00 + 0x1c);
        }
        if (cVar11 == '\0') {
            fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
        } else {
            fVar5 = SUB84(dVar7 + dVar7, 0);
        }
        if (cVar12 == '\0') {
            *(float *)(ar4_00 + 0xc) = fVar5;
            uVar8 = CONCAT44((int)*a0, *(u32 *)(ar4_00 + 0xc));
        } else {
            *(double *)(ar4_00 + 0xc) = dVar6;
            dVar6 = *(double *)(ar4_00 + 0xc);
            uVar8 = *a0;
        }
        if (cVar11 != '\0' || (float)uVar8 <= (float)(uVar8 >> 0x20)) {
            if (cVar12 == '\0') {
                uVar8 = (u64) * (u32 *)(ar4_00 + 0xc);
            } else {
                dVar6 = *(double *)(ar4_00 + 0xc);
            }
            if (cVar11 == '\0' && (float)uVar8 < 0.0) {
                if (cVar12 == '\0') {
                    *(u32 *)(ar4_00 + 0xc) = 0;
                } else {
                    *(u64 *)(ar4_00 + 0xc) = uVar8 & 0xffffffff;
                }
            }
        } else if (cVar12 == '\0') {
            *(int *)(ar4_00 + 0xc) = (int)*a0;
        } else {
            *(u64 *)(ar4_00 + 0xc) = *a0;
        }
        if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44(0x3d23d70a, g_8c437c68);
            in_xd0 = dVar6;
        } else {
            dVar7 = -1.276550078099057e-250;
            in_xd0 = g_8c437c68;
        }
        if (cVar11 == '\0') {
            fVar5 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
        } else {
            fVar5 = SUB84(dVar7 + dVar7, 0);
        }
        if (cVar12 == '\0') {
            g_8c437c68 = (double)CONCAT44(g_8c437c6c, fVar5);
            pcVar10 = (code *)0x43b40000;
        } else {
            fVar5 = 360.0;
            pcVar10 = njSinCos;
            g_8c437c68 = in_xd0;
        }
        dVar6 = g_8c437c68;
        if (cVar11 == '\0' && (float)pcVar10 < fVar5) {
            if (cVar12 == '\0') {
                dVar6 = (double)CONCAT44(0x43b40000, SUB84(g_8c437c68, 0));
            } else {
                dVar6 = -3.745782517784109e-250;
                in_xd0 = g_8c437c68;
            }
            if (cVar11 == '\0') {
                fVar5 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 - dVar6, 0);
            }
            dVar6 = in_xd0;
            if (cVar12 == '\0') {
                g_8c437c68 = (double)CONCAT44(g_8c437c6c, fVar5);
                dVar6 = g_8c437c68;
            }
        }
        g_8c437c68 = dVar6;
        ar4_00 = list_node_next(ar4_00);
    }
    if (((int)a0[6] == 1) && ((int)a0[0xc3] == -1)) {
        uVar2 = se_open_bank1(0x8c2b59d0);
        *(u32 *)(a0 + 0xc3) = uVar2;
        a2 = 1;
        se_play(0x8c2b59d0, (int)a0[0xc3], 1);
    }
    if ((int)a0[0xc3] != -1) {
        a2 = *(u32 *)((int)a0 + 0x61c);
        se_sound_021a0c(0x8c2b59d0, (int)a0[0xc3], a2);
    }
    if (((int)a0[6] == 0) && ((int)a0[0xc3] != -1)) {
        se_status(0x8c2b59d0, (int)a0[0xc3], a2, a3);
        se_close_port_handle(0x8c2b59d0, a0 + 0xc3);
        *(u32 *)(a0 + 0xc3) = 0xffffffff;
    }
    uVar3 = Class_12b930_vec_0d3c08(a0, uVar3, a2, a3);
    return uVar3;
}

/*
 * list_node_next  0x8c0d3f48
 * called by: CAnimal_uses_list_node_next_0f4258, CItemGLoadRequestList_GetPtr, CItemGLoadRequestList_TakeOu,
 * CItemGLoader_list_0fedf4, CItemList_DeleteItem, CItemList_TakeOutItem, CNodePtrList_DeleteItem,
 * CNodePtrList_TakeOutItem (+37 more)
 */
u32 list_node_next(u32 *a0) {
    return *a0;
}

/*
 * list_node_next_wrap  0x8c0d3f50
 * only calls list_node_next
 * called by: Class_12b930_sound_0d3d6c, game_list_0d49cc
 */
u32 list_node_next_wrap(u32 a0) {
    u32 uVar1;

    uVar1 = list_node_next(a0);
    return uVar1;
}

/*
 * get_field_d0_0d3f70  0x8c0d3f70
 * called by: CWaterTank_uses_CDCGD_release_type0_0d57e8, Class_12b930_sound_0d3d6c, WATER_ELEMENT_release,
 * game_list_0d49cc
 */
u32 get_field_d0_0d3f70(int a0) {
    return *(u32 *)(0xd0 + a0);
}

/*
 * game_draw_0d3f7c  0x8c0d3f7c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_noop_0de6d0, game_uses_noop_0deb60, game_uses_noop_0def78
 */
u32 game_draw_0d3f7c(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = *(int *)(*(int *)(a1 + 0xc) + 100);
    if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 6)) {
        if (*(float *)(*(int *)(a1 + 0xc) + 4) <= 900.0) {
            g_8c13f4f7 = 0xff;
        } else {
            g_8c13f4f7 = 0x78;
        }
    } else {
        g_8c13f4f7 = 0xff;
    }
    **(u32 **)(a0 + 0x14) = (u32)g_8c13f4f7 << 0x18 | 0xffffff;
    uVar2 = game_draw_0d4038(a0, a1, a2, a3);
    return uVar2;
}

/*
 * game_draw_0d400c  0x8c0d400c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0df668, game_uses_color_set_white_a0_0df250
 */
u32 game_draw_0d400c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    **(u32 **)(a0 + 0x14) = 0x80ffffff;
    uVar1 = game_draw_0d4038(a0, a1, a2, a3);
    return uVar1;
}

/*
 * game_draw_0d4038  0x8c0d4038
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0d3f7c, game_draw_0d400c
 */
int game_draw_0d4038(int a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;

    uVar4 = a1;
    game_uses_njCalcVector_like_0d4bdc(a0, a1);
    piVar1 = (int *)get_field_4_0253e4(a0 + 8, a1, a2, a3);
    uVar3 = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8) = uVar3;
    obj_set_texlist(a0 + 8, a1, a2);
    uVar3 = 0;
    matrix_push(0, a1, a2, a3, uVar4);
    touch_fields_30_3c_wrap();
    Class_12c058_draw_015adc(a0 + 0x10, a1, a2, a3);
    matrix_pop_n(1);
    uVar4 = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8) = *(u32 *)(*piVar1 + 8);
    iVar2 = *piVar1;
    *(u32 *)(iVar2 + 8) = uVar4;
    return iVar2;
}

/*
 * game_draw_0d4124  0x8c0d4124
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_noop_0de6d0
 */
u32 *game_draw_0d4124(int a0, int a1, u32 a2, u32 a3) {
    u64 uVar1;
    int *piVar2;
    float *pfVar3;
    int ar5_00;
    u32 uVar4;
    int iVar5;
    float fVar6;
    float fVar8;
    code *pcVar9;
    double dVar7;
    u64 in_xd0;
    u32 in_PR;
    int ar4_00;
    char cVar10;
    char cVar11;
    u32 in_stack_ffffff9c;
    float fStack_24;
    float fStack_20;
    u32 uStack_1c;

    cVar11 = '\0';
    cVar10 = '\0';
    ar5_00 = a1;
    uStack_1c = in_PR;
    piVar2 = (int *)get_field_4_0253e4(a0 + 8, a1, a2, a3);
    uVar4 = *(u32 *)(*piVar2 + 8);
    *(u32 *)(*piVar2 + 8) = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar2 + 8);
    *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar2 + 8) = uVar4;
    obj_set_texlist(a0 + 8, ar5_00, a2);
    Class_129938_draw_015af8(a0 + 0x1c, ar5_00, a2, a3);
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
        game_calls_float_calc_0d43cc(&fStack_24);
        if (cVar11 == '\0') {
            fVar8 = -150.0;
            fVar6 = fStack_24;
        } else {
            in_xd0 = CONCAT44(fStack_20, fStack_24);
            fVar6 = -150.0;
            fVar8 = 800.0;
        }
        if (cVar10 != '\0' || fVar8 <= fVar6) {
            if (cVar11 == '\0') {
                fVar8 = 800.0;
                fVar6 = fStack_24;
            } else {
                in_xd0 = CONCAT44(fStack_20, fStack_24);
                fVar6 = 800.0;
                fVar8 = -100.0;
            }
            if (cVar10 != '\0' || fVar6 <= fVar8) {
                if (cVar11 == '\0') {
                    fVar8 = -100.0;
                    fVar6 = fStack_20;
                } else {
                    in_xd0 = CONCAT44(uStack_1c, fStack_20);
                    fVar6 = -100.0;
                    fVar8 = 600.0;
                }
                if (cVar10 != '\0' || fVar8 <= fVar6) {
                    if (cVar11 == '\0') {
                        fVar8 = 600.0;
                        fVar6 = fStack_20;
                    } else {
                        in_xd0 = CONCAT44(uStack_1c, fStack_20);
                        fVar6 = 600.0;
                        fVar8 = 4.87652e-43;
                    }
                    if (cVar10 != '\0' || fVar6 <= fVar8) {
                        pfVar3 = (float *)(a1 + iVar5 * 0x16c + 0x15c);
                        if (cVar11 == '\0') {
                            fVar6 = *pfVar3;
                            pcVar9 = (code *)0xbf6b851f;
                        } else {
                            in_xd0 = *(u64 *)pfVar3;
                            fVar6 = -0.92;
                            pcVar9 = matrix_push;
                        }
                        if (cVar10 != '\0' || (float)pcVar9 <= fVar6) {
                            uVar4 = 0;
                            matrix_push(0, ar5_00, a2, a3, in_stack_ffffff9c);
                            touch_fields_30_3c_wrap();
                            rotate_degrees();
                            game_draw_015b30(a0 + iVar5 * 4 + 0x20, ar5_00, a2, a3);
                            matrix_pop_n(1);
                        }
                    }
                }
            }
        }
    }
    uVar4 = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar2 + 8);
    iVar5 = (int)*(short *)(a0 + 4);
    *(u32 *)(iVar5 * 0xc + *piVar2 + 8) = *(u32 *)(*piVar2 + 8);
    *(u32 *)(*piVar2 + 8) = uVar4;
    game_list_0d49cc(a0, ar5_00, a2, a3);
    game_draw_0d4a90(a0, ar5_00, a2, a3);
    Vec3_draw_0d5d28(a0, ar5_00, a2, a3);
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, g_8c437c6c);
    } else {
        dVar7 = 1.4411521878487204e+18;
        in_xd0 = g_8c437c6c;
    }
    if (cVar10 == '\0') {
        fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, fVar6);
    } else {
        dVar7 = -3.745782517784109e-250;
    }
    if (cVar10 == '\0') {
        ar4_00 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        ar4_00 = (int)(dVar7 / dVar7);
    }
    njSinCos(ar4_00, ar5_00, a2, a3, iVar5);
    float_check_errno(ar4_00, ar5_00, a2, a3, iVar5);
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000, (int)g_8c437c6c);
    } else {
        dVar7 = 1.1409237244491948e+308;
        in_xd0 = g_8c437c6c;
    }
    if (cVar10 == '\0') {
        fVar6 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 + dVar7, 0);
    }
    if (cVar11 == '\0') {
        g_8c437c6c = CONCAT44(g_8c437c70, fVar6);
        pcVar9 = (code *)0x43b40000;
    } else {
        fVar6 = 360.0;
        pcVar9 = njSinCos;
        g_8c437c6c = in_xd0;
    }
    uVar1 = g_8c437c6c;
    if (cVar10 != '\0' || (float)pcVar9 <= fVar6) {
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, (int)g_8c437c6c);
        } else {
            dVar7 = -3.745782517784109e-250;
            in_xd0 = g_8c437c6c;
        }
        if (cVar10 == '\0') {
            fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 - dVar7, 0);
        }
        uVar1 = in_xd0;
        if (cVar11 == '\0') {
            g_8c437c6c = CONCAT44(g_8c437c70, fVar6);
            uVar1 = g_8c437c6c;
        }
    }
    g_8c437c6c = uVar1;
    return &g_8c0d43bc;
}

/*
 * game_calls_float_calc_0d43cc  0x8c0d43cc
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: float_calc
 * called by: game_draw_0d4124, game_draw_0d4428, game_draw_0d46cc, game_uses_color_set_white_a0_0df250,
 * game_uses_noop_0de6d0, game_uses_noop_0deb60
 */
u32 game_calls_float_calc_0d43cc(u32 a0) {
    u32 uVar1;
    u8 auStack_10[16];

    uVar1 = matrix_float_calc_256294(0, auStack_10, a0);
    return uVar1;
}

/*
 * game_draw_0d4428  0x8c0d4428
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_noop_0deb60
 */
u32 *game_draw_0d4428(int a0, int a1, u32 a2, u32 a3) {
    u64 uVar1;
    int *piVar2;
    float *pfVar3;
    int ar5_00;
    u32 uVar4;
    int iVar5;
    float fVar6;
    float fVar8;
    code *pcVar9;
    double dVar7;
    u64 in_xd0;
    u32 in_PR;
    int ar4_00;
    char cVar10;
    char cVar11;
    u32 in_stack_ffffff9c;
    float fStack_24;
    float fStack_20;
    u32 uStack_1c;

    cVar11 = '\0';
    cVar10 = '\0';
    ar5_00 = a1;
    uStack_1c = in_PR;
    piVar2 = (int *)get_field_4_0253e4(a0 + 8, a1, a2, a3);
    uVar4 = *(u32 *)(*piVar2 + 8);
    *(u32 *)(*piVar2 + 8) = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar2 + 8);
    *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar2 + 8) = uVar4;
    obj_set_texlist(a0 + 8, ar5_00, a2);
    Class_129938_draw_015af8(a0 + 0x1c, ar5_00, a2, a3);
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
        game_calls_float_calc_0d43cc(&fStack_24);
        if (cVar11 == '\0') {
            fVar8 = -150.0;
            fVar6 = fStack_24;
        } else {
            in_xd0 = CONCAT44(fStack_20, fStack_24);
            fVar6 = -150.0;
            fVar8 = 800.0;
        }
        if (cVar10 != '\0' || fVar8 <= fVar6) {
            if (cVar11 == '\0') {
                fVar8 = 800.0;
                fVar6 = fStack_24;
            } else {
                in_xd0 = CONCAT44(fStack_20, fStack_24);
                fVar6 = 800.0;
                fVar8 = -100.0;
            }
            if (cVar10 != '\0' || fVar6 <= fVar8) {
                if (cVar11 == '\0') {
                    fVar8 = -100.0;
                    fVar6 = fStack_20;
                } else {
                    in_xd0 = CONCAT44(uStack_1c, fStack_20);
                    fVar6 = -100.0;
                    fVar8 = 600.0;
                }
                if (cVar10 != '\0' || fVar8 <= fVar6) {
                    if (cVar11 == '\0') {
                        fVar8 = 600.0;
                        fVar6 = fStack_20;
                    } else {
                        in_xd0 = CONCAT44(uStack_1c, fStack_20);
                        fVar6 = 600.0;
                        fVar8 = 4.87652e-43;
                    }
                    if (cVar10 != '\0' || fVar6 <= fVar8) {
                        pfVar3 = (float *)(a1 + iVar5 * 0x16c + 0x15c);
                        if (cVar11 == '\0') {
                            fVar6 = *pfVar3;
                            pcVar9 = (code *)0xbf6b851f;
                        } else {
                            in_xd0 = *(u64 *)pfVar3;
                            fVar6 = -0.92;
                            pcVar9 = matrix_push;
                        }
                        if (cVar10 != '\0' || (float)pcVar9 <= fVar6) {
                            uVar4 = 0;
                            matrix_push(0, ar5_00, a2, a3, in_stack_ffffff9c);
                            touch_fields_30_3c_wrap();
                            rotate_degrees();
                            Class_129938_draw_015af8(a0 + iVar5 * 4 + 0x20, ar5_00, a2, a3);
                            matrix_pop_n(1);
                        }
                    }
                }
            }
        }
    }
    uVar4 = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar2 + 8);
    iVar5 = (int)*(short *)(a0 + 4);
    *(u32 *)(iVar5 * 0xc + *piVar2 + 8) = *(u32 *)(*piVar2 + 8);
    *(u32 *)(*piVar2 + 8) = uVar4;
    game_list_0d49cc(a0, ar5_00, a2, a3);
    game_draw_0d4a90(a0, ar5_00, a2, a3);
    Vec3_draw_0d5d28(a0, ar5_00, a2, a3);
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x47800000, g_8c437c70);
    } else {
        dVar7 = 1.4411521878487204e+18;
        in_xd0 = g_8c437c70;
    }
    if (cVar10 == '\0') {
        fVar6 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 * dVar7, 0);
    }
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x43b40000, fVar6);
    } else {
        dVar7 = -3.745782517784109e-250;
    }
    if (cVar10 == '\0') {
        ar4_00 = (int)(SUB84(dVar7, 0) / (float)((u64)dVar7 >> 0x20));
    } else {
        ar4_00 = (int)(dVar7 / dVar7);
    }
    njSinCos(ar4_00, ar5_00, a2, a3, iVar5);
    float_check_errno(ar4_00, ar5_00, a2, a3, iVar5);
    if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000, (int)g_8c437c70);
    } else {
        dVar7 = 6.207226606352174e-78;
        in_xd0 = g_8c437c70;
    }
    if (cVar10 == '\0') {
        fVar6 = SUB84(dVar7, 0) + (float)((u64)dVar7 >> 0x20);
    } else {
        fVar6 = SUB84(dVar7 + dVar7, 0);
    }
    if (cVar11 == '\0') {
        g_8c437c70 = CONCAT44(g_8c437c74, fVar6);
        pcVar9 = (code *)0x43b40000;
    } else {
        fVar6 = 360.0;
        pcVar9 = njSinCos;
        g_8c437c70 = in_xd0;
    }
    uVar1 = g_8c437c70;
    if (cVar10 != '\0' || (float)pcVar9 <= fVar6) {
        if (cVar11 == '\0') {
            dVar7 = (double)CONCAT44(0x43b40000, (int)g_8c437c70);
        } else {
            dVar7 = -3.745782517784109e-250;
            in_xd0 = g_8c437c70;
        }
        if (cVar10 == '\0') {
            fVar6 = SUB84(dVar7, 0) - (float)((u64)dVar7 >> 0x20);
        } else {
            fVar6 = SUB84(dVar7 - dVar7, 0);
        }
        uVar1 = in_xd0;
        if (cVar11 == '\0') {
            g_8c437c70 = CONCAT44(g_8c437c74, fVar6);
            uVar1 = g_8c437c70;
        }
    }
    g_8c437c70 = uVar1;
    return &g_8c0d46bc;
}

/*
 * game_draw_0d46cc  0x8c0d46cc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_noop_0def78
 */
u32 game_draw_0d46cc(int a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    code *pcVar6;
    char cVar7;
    char cVar8;
    u32 in_stack_ffffffa8;
    float fStack_24;
    float fStack_20;

    cVar8 = '\0';
    cVar7 = '\0';
    piVar1 = (int *)get_field_4_0253e4(a0 + 8, a1, a2, a3);
    uVar2 = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8) = uVar2;
    obj_set_texlist(a0 + 8, a1, a2);
    gfx_set_color4_4aa52c(a0 + 0x5ec);
    Class_129938_draw_015af8(a0 + 0x1c, a1, a2, a3);
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
        game_calls_float_calc_0d43cc(&fStack_24);
        if (cVar8 == '\0') {
            fVar5 = -150.0;
            fVar4 = fStack_24;
        } else {
            fVar4 = -150.0;
            fVar5 = 800.0;
        }
        if (cVar7 != '\0' || fVar5 <= fVar4) {
            if (cVar8 == '\0') {
                fVar5 = 800.0;
                fVar4 = fStack_24;
            } else {
                fVar4 = 800.0;
                fVar5 = -100.0;
            }
            if (cVar7 != '\0' || fVar4 <= fVar5) {
                if (cVar8 == '\0') {
                    fVar5 = -100.0;
                    fVar4 = fStack_20;
                } else {
                    fVar4 = -100.0;
                    fVar5 = 600.0;
                }
                if (cVar7 != '\0' || fVar5 <= fVar4) {
                    if (cVar8 == '\0') {
                        pcVar6 = (code *)0x44160000;
                        fVar4 = fStack_20;
                    } else {
                        fVar4 = 600.0;
                        pcVar6 = matrix_push;
                    }
                    if (cVar7 != '\0' || fVar4 <= (float)pcVar6) {
                        uVar2 = 0;
                        matrix_push(0, a1, a2, a3, in_stack_ffffffa8);
                        touch_fields_30_3c_wrap();
                        rotate_degrees();
                        Class_129938_draw_015af8(a0 + iVar3 * 4 + 0x20, a1, a2, a3);
                        matrix_pop_n(1);
                    }
                }
            }
        }
    }
    uVar2 = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8) = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = uVar2;
    gfx_set_color4_4aa52c(&g_8c13f320);
    game_list_0d49cc(a0, a1, a2, a3);
    game_draw_0d4a90(a0, a1, a2, a3);
    uVar2 = Vec3_draw_0d5d28(a0, a1, a2, a3);
    return uVar2;
}

/*
 * game_draw_0d4900  0x8c0d4900
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0df668, game_uses_color_set_white_a0_0df250
 */
u32 game_draw_0d4900(int a0, u32 a1, u32 a2, u32 a3) {
    int *piVar1;
    u32 uVar2;

    piVar1 = (int *)get_field_4_0253e4(a0 + 8, a1, a2, a3);
    uVar2 = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8) = uVar2;
    obj_set_texlist(a0 + 8, a1, a2);
    Class_129938_draw_015af8(a0 + 0x1c, a1, a2, a3);
    uVar2 = *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8);
    *(u32 *)(*(short *)(a0 + 4) * 0xc + *piVar1 + 8) = *(u32 *)(*piVar1 + 8);
    *(u32 *)(*piVar1 + 8) = uVar2;
    game_list_0d49cc(a0, a1, a2, a3);
    uVar2 = game_draw_0d4a90(a0, a1, a2, a3);
    return uVar2;
}

/*
 * game_list_0d49cc  0x8c0d49cc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls list functions
 * called by: game_draw_0d4124, game_draw_0d4428, game_draw_0d46cc, game_draw_0d4900
 */
int game_list_0d49cc(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int ar4_00;
    u32 ar5_00;
    u32 ar6_00;
    int iVar2;
    u32 in_PR;
    char cVar3;
    u32 uStack_34;
    u32 *puStack_30;
    u32 *puStack_2c;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;

    cVar3 = '\0';
    uStack_34 = g_8c13f4f8;
    puStack_30 = &uStack_20;
    puStack_2c = &uStack_34;
    uStack_14 = in_PR;
    iVar1 = get_field_d0_0d3f70(a0 + 0x34);
    ar4_00 = list_node_next_wrap(a0 + 0x34);
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
        if (cVar3 == '\0') {
            uStack_20 = *(u32 *)(ar4_00 + 8);
            uStack_1c = *(u32 *)(ar4_00 + 0xc);
            uStack_18 = *(u32 *)(ar4_00 + 0x10);
        } else {
            uStack_20 = (u32) * (u64 *)(ar4_00 + 8);
            uStack_1c = (u32) * (u64 *)(ar4_00 + 0xc);
            uStack_18 = (u32) * (u64 *)(ar4_00 + 0x10);
            uStack_14 = (u32)((u64) * (u64 *)(ar4_00 + 0x10) >> 0x20);
        }
        ar6_00 = 0x40;
        ar5_00 = 1;
        gfxlib_draw_234fd0(&puStack_30, 1, 0x40, a3);
        ar4_00 = list_node_next(ar4_00);
    }
    return ar4_00;
}

/*
 * game_draw_0d4a90  0x8c0d4a90
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0d4124, game_draw_0d4428, game_draw_0d46cc, game_draw_0d4900
 */
u32 game_draw_0d4a90(int a0, int a1, int a2, int a3) {
    int iVar1;
    int iVar2;
    float fVar3;
    code *pcVar4;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    obj_set_texlist(a0 + 0x108, a1, a2);
    iVar2 = 0;
    do {
        if (4 < iVar2) {
            return 5;
        }
        iVar1 = get_field_40_0d3d64(iVar2 * 0x44 + a0 + 0x470);
        if (iVar1 != 0) {
            iVar1 = get_field_40_0d3d64(iVar2 * 0x44 + a0 + 0x470);
            if (iVar1 == 1) {
                if (cVar6 == '\0') {
                    fVar3 = *(float *)(iVar2 * 0x44 + a0 + 0x478);
                    pcVar4 = (code *)0x44960000;
                } else {
                    fVar3 = 1200.0;
                    pcVar4 = get_field_3c_0d4bd4;
                }
                if (cVar5 == '\0' && (float)pcVar4 < fVar3)
                    goto LAB_8c0d4b8e;
            }
            iVar1 = get_field_3c_0d4bd4(iVar2 * 0x44 + a0 + 0x470);
            if ((iVar1 == 3) || (iVar1 == 4)) {
                a2 = a0 + 0x154;
                a1 = a0 + 0x108;
                CEnv_draw_0d2264(iVar2 * 0x44 + a0 + 0x470, a1, a2, a3);
            } else {
                a3 = a0 + 0x110;
                a2 = a0 + 0x430;
                a1 = a0 + 0x108;
                game_draw_0d2478(iVar2 * 0x44 + a0 + 0x470, a1, a2, a3);
            }
        }
    LAB_8c0d4b8e:
        iVar2 = iVar2 + 1;
    } while (true);
}

/*
 * get_field_3c_0d4bd4  0x8c0d4bd4
 * called by: game_draw_0d4a90
 */
u32 get_field_3c_0d4bd4(int a0) {
    return *(u32 *)(a0 + 0x3c);
}

/*
 * game_uses_njCalcVector_like_0d4bdc  0x8c0d4bdc
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is njCalcVector_like
 * called by: game_draw_0d4038
 */
u32 game_uses_njCalcVector_like_0d4bdc(float *a0, int a1) {
    u32 r7;
    u32 uVar1;
    u32 *ar5_00;
    u8 *ar6_00;
    u8 auStack_20[12];
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    if (*(float *)(*(int *)(a1 + 0xc) + 4) <= *a0) {
        uStack_10 = 0x3f34fdf4;
    } else {
        uStack_10 = 0xbf34fdf4;
    }
    uStack_c = 0xbf34fdf4;
    uStack_14 = 0;
    ar6_00 = auStack_20;
    ar5_00 = &uStack_14;
    uVar1 = 0;
    njCalcVector_like(0, ar5_00, ar6_00, r7, a0);
    gfxlib_float_calc_219038();
    uVar1 = gfxlib_calc_219070();
    return uVar1;
}

/*
 * game_sound_0d4c74  0x8c0d4c74
 * area name: game code; nothing names its area yet; behaviour name: mostly calls sound functions
 * called by: Class_12b930_vec_0e3994
 */
u32 game_sound_0d4c74(float *a0, u32 *a1, int a2, float a3) {
    int iVar1;
    u32 uVar2;
    u32 *ar5_00;
    int ar6_00;
    float ar7_00;
    int iVar3;
    float fVar4;
    u64 in_dr0;
    u64 in_xd0;
    char cVar5;
    char cVar6;
    u32 auStack_20[2];

    cVar6 = '\0';
    cVar5 = '\0';
    iVar3 = 0;
    ar5_00 = a1;
    ar6_00 = a2;
    ar7_00 = a3;
    while (true) {
        if (4 < iVar3) {
            if (a2 == 3) {
                auStack_20[0] = se_open_bank1(0x8c2b59d0);
                ar6_00 = 8;
                se_play(0x8c2b59d0, auStack_20[0], 8);
                ar5_00 = auStack_20;
                se_close_port_handle(0x8c2b59d0, ar5_00);
            } else if (a2 == 1) {
                auStack_20[0] = se_open_bank1(0x8c2b59d0);
                ar6_00 = 0x11;
                se_play(0x8c2b59d0, auStack_20[0], 0x11);
                ar5_00 = auStack_20;
                se_close_port_handle(0x8c2b59d0, ar5_00);
            } else if (a2 == 2) {
                auStack_20[0] = se_open_bank1(0x8c2b59d0);
                ar6_00 = 7;
                se_play(0x8c2b59d0, auStack_20[0], 7);
                ar5_00 = auStack_20;
                se_close_port_handle(0x8c2b59d0, ar5_00);
            } else if (a2 == 4) {
                auStack_20[0] = se_open_bank1(0x8c2b59d0);
                ar6_00 = 0x13;
                se_play(0x8c2b59d0, auStack_20[0], 0x13);
                ar5_00 = auStack_20;
                se_close_port_handle(0x8c2b59d0, ar5_00);
            }
            iVar3 = 0;
            while (true) {
                if (4 < iVar3) {
                    return 5;
                }
                iVar1 = get_field_40_0d3d64(a0 + iVar3 * 0x11 + 0x11c);
                fVar4 = (float)in_dr0;
                if (iVar1 == 0)
                    break;
                iVar3 = iVar3 + 1;
            }
            Vec3_assign(a0 + iVar3 * 0x11 + 0x11c, a1, ar6_00, ar7_00);
            if (cVar6 == '\0') {
                fVar4 = *a0;
            } else {
                in_xd0 = *(u64 *)a0;
            }
            if (cVar5 == '\0') {
                fVar4 = fVar4 - 1.0;
            } else {
                fVar4 = SUB84((double)CONCAT44(0x3f800000, fVar4) - (double)CONCAT44(0x3f800000, fVar4), 0);
            }
            if (cVar6 == '\0') {
                a0[iVar3 * 0x11 + 0x11d] = fVar4;
            } else {
                *(u64 *)(a0 + iVar3 * 0x11 + 0x11d) = in_xd0;
            }
            CEnv_set_scale_and_type(a0 + iVar3 * 0x11 + 0x11c, a3, a2);
            uVar2 = set_field_40_to_1(a0 + iVar3 * 0x11 + 0x11c);
            return uVar2;
        }
        iVar1 = get_field_40_0d3d64(a0 + iVar3 * 0x11 + 0x11c);
        if ((iVar1 == 1) && (a0[iVar3 * 0x11 + 0x126] == a3))
            break;
        iVar3 = iVar3 + 1;
    }
    return a0[iVar3 * 0x11 + 0x126];
}

/*
 * set_field_40_to_1  0x8c0d4e7c
 * called by: game_sound_0d4c74
 */
u32 set_field_40_to_1(int a0) {
    *(u32 *)(a0 + 0x40) = 1;
    return 0x40;
}

/*
 * game_uses_Class_12c394_m0_0d4e88  0x8c0d4e88
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Class_12c394_m0_102b04
 * called by: game_uses_CWaterTank_CreateStage_0de07c, game_uses_noop_0de6d0, game_uses_noop_0deb60,
 * game_uses_noop_0def78
 */
u8 *game_uses_Class_12c394_m0_0d4e88(u32 unused_a0, int a1) {
    float fVar1;
    u64 in_dr0;
    u32 uVar3;
    u8 *puVar4;
    double dVar2;
    float fVar5;
    u32 in_fr3;
    double dVar6;
    double in_xd0;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    Class_12c394_m0_102b04(0x8c437a78);
    uVar3 = (u32)((u64)in_dr0 >> 0x20);
    if (cVar8 == '\0') {
        fVar1 = *(float *)(a1 + 8);
        puVar4 = (u8 *)0x44bb8000;
        g_8c437c78 = uVar3;
    } else {
        g_8c437c78 = (u32)in_dr0;
        in_xd0 = *(double *)(a1 + 8);
        fVar1 = 1500.0;
        puVar4 = &g_8c437844;
        g_8c437c7c = uVar3;
    }
    if (cVar7 != '\0' || fVar1 <= (float)puVar4) {
        if (cVar8 == '\0') {
            dVar2 = (double)CONCAT44(0x44bb8000, g_8c437c78);
        } else {
            in_xd0 = (double)CONCAT44(g_8c437c7c, g_8c437c78);
            dVar2 = -1.3596743611313892e-249;
        }
        if (cVar7 == '\0') {
            fVar1 = (float)((u64)dVar2 >> 0x20);
            dVar2 = (double)CONCAT44(fVar1, SUB84(dVar2, 0) * fVar1);
        } else {
            dVar2 = dVar2 * dVar2;
        }
        if (cVar8 == '\0') {
            g_8c437844 = SUB84(dVar2, 0);
        } else {
            g_8c437844 = SUB84(in_xd0, 0);
            g_8c437848 = (float)((u64)in_xd0 >> 0x20);
        }
    } else {
        if (cVar8 == '\0') {
            dVar6 = (double)CONCAT44(*(u32 *)(a1 + 8), in_fr3);
            dVar2 = (double)CONCAT44(0x44bb8000, fVar1);
        } else {
            dVar6 = *(double *)(a1 + 8);
            dVar2 = -1.3596743611313892e-249;
        }
        if (cVar7 == '\0') {
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) - (float)((u64)dVar2 >> 0x20), SUB84(dVar6, 0));
        } else {
            dVar6 = dVar6 - dVar2;
        }
        if (cVar8 == '\0') {
            dVar2 = (double)CONCAT44(0x44bb8000, g_8c437c78);
        } else {
            in_xd0 = (double)CONCAT44(g_8c437c7c, g_8c437c78);
            dVar2 = -1.3596743611313892e-249;
        }
        if (cVar7 == '\0') {
            fVar5 = (float)((u64)dVar2 >> 0x20);
            fVar1 = SUB84(dVar2, 0) * fVar5;
            dVar2 = (double)CONCAT44(fVar5, fVar1);
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + fVar1, SUB84(dVar6, 0));
        } else {
            dVar2 = dVar2 * dVar2;
            dVar6 = dVar6 + dVar2;
        }
        fVar1 = (float)((u64)dVar6 >> 0x20);
        g_8c437844 = fVar1;
        if (cVar8 != '\0') {
            g_8c437844 = SUB84(dVar6, 0);
            g_8c437848 = fVar1;
        }
    }
    Class_12c394_m0_102b04(0x8c437aa4);
    if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x44bb8000, (int)((u64)dVar2 >> 0x20));
        dVar2 = in_xd0;
    } else {
        dVar6 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
        fVar1 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
    } else {
        fVar1 = SUB84(dVar6 * dVar6, 0);
    }
    fVar5 = g_8c437844;
    g_8c437c74 = fVar1;
    if (cVar8 != '\0') {
        g_8c437c74 = SUB84(dVar2, 0);
        g_8c437c78 = (u32)((u64)dVar2 >> 0x20);
        dVar2 = (double)CONCAT44(g_8c437848, g_8c437844);
        fVar5 = fVar1;
    }
    if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(g_8c437c74, fVar5);
    } else {
        dVar6 = (double)CONCAT44(g_8c437c78, g_8c437c74);
    }
    if (cVar7 == '\0') {
        g_8c437848 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
    } else {
        g_8c437848 = SUB84(dVar6 + dVar6, 0);
    }
    if (cVar8 != '\0') {
        g_8c437848 = SUB84(dVar2, 0);
        g_8c43784c = (u32)((u64)dVar2 >> 0x20);
    }
    return &g_8c437c74;
}

/*
 * game_uses_fill_colors_8c43784c_0d4f3c  0x8c0d4f3c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is fill_colors_8c43784c
 * called by: game_uses_CWaterTank_CreateStage_0de07c, input_uses_edge_detect_update_0e2a14
 */
u32 game_uses_fill_colors_8c43784c_0d4f3c(void) {
    u32 uVar1;

    0x8c437840 [2] = 0x32;
    0x8c437840 [1] = 0x32;
    g_8c437840 = 0x1f;
    g_8c43783c = 1;
    uVar1 = fill_colors_8c43784c(0xffffffff);
    return uVar1;
}

/*
 * game_uses_fill_colors_8c43784c_0d4f70  0x8c0d4f70
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is fill_colors_8c43784c
 * called by: game_uses_CWaterTank_CreateStage_0de07c, input_uses_edge_detect_update_0e2a14
 */
u32 game_uses_fill_colors_8c43784c_0d4f70(void) {
    u32 uVar1;

    0x8c437840 [2] = 10;
    0x8c437840 [1] = 10;
    g_8c437840 = 10;
    g_8c43783c = 1;
    uVar1 = fill_colors_8c43784c(0xff0f0f0f);
    return uVar1;
}

/*
 * se_play_bubble_or_ike  0x8c0d4fa8
 * se_play_bubble_mono for a1 < 2, else se_play_ike1
 * called by: input_uses_set_fields_28_48_0dff1c
 */
u32 se_play_bubble_or_ike(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if ((u8)a1 < 2) {
        uVar1 = se_play_bubble_mono(a0, a1, a2, a3);
    } else {
        uVar1 = se_play_ike1(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * se_play_bubble_mono  0x8c0d4fe8
 * plays the 40_BUBBLE_MONO pack sound
 * called by: se_play_bubble_or_ike
 * strings: "40_BUBBLE_MONO"
 */
u32 se_play_bubble_mono(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    pvr_draw_235f14();
    uVar1 = (*(code *)(&pack_find_by_name_buffered))(0x8c2b59d0, "40_BUBBLE_MONO", a2, a3);
    *(u32 *)(0x5e4 + a0) = uVar1;
    uVar1 = Class_12b580_set_request(0x8c2b59d0, *(u32 *)(0x5e4 + a0));
    return uVar1;
}

/*
 * se_play_ike1  0x8c0d5040
 * plays the 75_IKE1 pack sound
 * called by: WATER_ELEMENT_release, se_play_bubble_or_ike
 * strings: "75_IKE1"
 */
u32 se_play_ike1(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&pack_find_by_name_buffered))(0x8c2b59d0, "75_IKE1", a2, a3);
    *(u32 *)(0x5e4 + a0) = uVar1;
    Class_12b580_set_request(0x8c2b59d0, *(u32 *)(0x5e4 + a0));
    uVar1 = Class_12b580_sound_022128(0x8c2b59d0, 0x1f4, a2, a3);
    return uVar1;
}

/*
 * se_draw_0d50a0  0x8c0d50a0
 * area name: sits between se functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_uses_CSprinkler_LoadTexture_0e016c
 */
u32 se_draw_0d50a0(void) {
    u32 uVar1;

    uVar1 = pvr_draw_235ee4();
    return uVar1;
}

/*
 * se_sound_0d50b4  0x8c0d50b4
 * area name: sits between se functions (same compilation unit); behaviour name: mostly calls sound functions
 * called by: game_uses_edge_detect_update_0e021c
 */
u32 se_sound_0d50b4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    Class_12b580_sound_022104(0x8c2b59d0, *(u32 *)(0x5e4 + a0), a2, a3);
    uVar1 = Class_12b580_clear_request(0x8c2b59d0, *(u32 *)(0x5e4 + a0), a2, a3);
    return uVar1;
}

/*
 * se_sound_0d50ec  0x8c0d50ec
 * area name: sits between se functions (same compilation unit); behaviour name: mostly calls sound functions
 * called by: input_uses_call_all_list_64_0e004c
 */
u32 se_sound_0d50ec(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if ((u8)a1 < 2) {
        uVar1 = se_close_two_ports(a0, a1, a2, a3);
    } else {
        uVar1 = se_sound_0d51ec(a0, a1, a2, a3);
    }
    return uVar1;
}

/*
 * se_close_two_ports  0x8c0d512c
 * stops sound request +0x5e4 and closes the two SE port handles at +0x600
 * called by: se_sound_0d50ec, se_sound_0d51ec
 */
u32 se_close_two_ports(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    Class_12b580_sound_022104(0x8c2b59d0, *(u32 *)(0x5e4 + a0), a2, a3);
    Class_12b580_clear_request(0x8c2b59d0, *(u32 *)(0x5e4 + a0), a2, a3);
    for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
        if (*(int *)(0x600 + iVar1 * 0x18 + a0) != -1) {
            (*(code *)(&se_status))(0x8c2b59d0, *(u32 *)(0x600 + iVar1 * 0x18 + a0), a2, a3);
            se_close_port_handle(0x8c2b59d0, iVar1 * 0x18 + a0 + 0x600);
            *(u32 *)(0x600 + iVar1 * 0x18 + a0) = 0xffffffff;
        }
    }
    return 2;
}

/*
 * se_sound_0d51ec  0x8c0d51ec
 * area name: sits between se functions (same compilation unit); behaviour name: mostly calls sound functions
 * called by: se_sound_0d50ec
 */
u32 se_sound_0d51ec(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = 0;
    Class_12b580_sound_022128(0x8c2b59d0, 0, a2, a3);
    uVar1 = se_close_two_ports(a0, uVar1, a2, a3);
    return uVar1;
}

/*
 * WATER_ELEMENT_release  0x8c0d5218
 * releases the water-face and effect models (suisou_WaterFace.nj, suisou_Effect.nj)
 * called by: game_release_0e02b0
 * strings: "suisou_WaterFace.nj"; "GRAPHICS\\ENV"; "GRAPHICS\\ENV"; "suisou_WaterFace.nj" ...
 */
u32 WATER_ELEMENT_release(double *a0, u32 a1) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 ar4_00;
    u32 ***ar5_00;
    char *pcVar4;
    u32 *puVar6;
    float fVar7;
    u32 **ppuVar8;
    double dVar9;
    double in_dr2;
    u64 in_xd0;
    char cVar10;
    char cVar11;
    u32 uStack_20;
    u32 **ppuStack_1c;
    u32 **appuStack_18[2];

    cVar11 = '\0';
    cVar10 = '\0';
    appuStack_18[0] = NULL;
    ppuStack_1c = NULL;
    uStack_20 = 0;
    pvr_draw_235ee4();
    CDCGD_release_type0(a1, "suisou_WaterFace.nj", "GRAPHICS\\ENV", a0);
    pcVar4 = "GRAPHICS\\ENV";
    CDCGD_release_type2(a1, "suisou_WaterFace.nj", "GRAPHICS\\ENV", a0);
    set_field_0_015ad4(a0 + 2, 0, pcVar4);
    CDCGD_release_type0(a1, "suisou_Effect.nj", "GRAPHICS\\ENV", a0);
    pcVar4 = "GRAPHICS\\ENV";
    CDCGD_release_type2(a1, "suisou_Effect.nj", "GRAPHICS\\ENV", a0);
    set_field_0_015ad4((int)a0 + 0x1c, 0, pcVar4);
    iVar1 = retry_until_done_0209b0(a1, "suisou_WaterFace_small.nj", "GRAPHICS\\ENV", &ppuStack_1c);
    if (iVar1 == 0) {
        report_error_message("suisou_WaterFace_small.nj", "Failed NJCM:WATER_ELEMENT::PrepareForExitStage1Event()", 0,
                             2);
    }
    puVar6 = &uStack_20;
    pcVar4 = "GRAPHICS\\ENV";
    iVar1 = retry_until_done_020aa8(a1, "suisou_WaterFace_small.nj", "GRAPHICS\\ENV", puVar6);
    if (iVar1 == 0) {
        puVar6 = (u32 *)0x2;
        pcVar4 = NULL;
        report_error_message("suisou_WaterFace_small.nj", "Failed NJTL:WATER_ELEMENT::PrepareForExitStage1Event()", 0,
                             2);
    }
    set_field_0_015ad4(a0 + 2, ppuStack_1c, pcVar4);
    iVar1 = retry_until_done_0209b0(a1, "suisou_Effect_small.nj", "GRAPHICS\\ENV", &ppuStack_1c);
    if (iVar1 == 0) {
        report_error_message("suisou_Effect_small.nj", "Failed NJCM:WATER_ELEMENT::PrepareForExitStage1Event()", 0, 2);
    }
    puVar6 = &uStack_20;
    pcVar4 = "GRAPHICS\\ENV";
    iVar1 = retry_until_done_020aa8(a1, "suisou_Effect_small.nj", "GRAPHICS\\ENV", puVar6);
    if (iVar1 == 0) {
        puVar6 = (u32 *)0x2;
        pcVar4 = NULL;
        report_error_message("suisou_Effect_small.nj", "Failed NJTL:WATER_ELEMENT::PrepareForExitStage1Event()", 0, 2);
    }
    ar5_00 = (u32 ***)ppuStack_1c;
    set_field_0_015ad4((int)a0 + 0x1c, ppuStack_1c, pcVar4);
    iVar1 = get_field_0_015bb8((int)a0 + 0x1c);
    uVar2 = game_calls_one_0151fc(*(u32 *)(*(int *)(iVar1 + 4) + 4));
    *(u32 *)((int)a0 + 0x2c) = uVar2;
    Vec3_uses_get_field_0_0d5de0(a0, ar5_00, pcVar4, puVar6);
    while (iVar1 = get_field_d0_0d3f70((int)a0 + 0x34), iVar1 != 0) {
        iVar1 = get_field_d0_0d3f70((int)a0 + 0x34);
        appuStack_18[0] = (u32 **)CWaterSnowList_GetWaterSnowO((int)a0 + 0x34, iVar1 + -1);
        CWaterSnowList_TakeOut((int)a0 + 0x34, appuStack_18[0]);
        ar5_00 = appuStack_18;
        clear_link_58(0x8c3e7d30, ar5_00);
    }
    game_uses_set_field_0_0fe7f4((int)a0 + 0x34);
    for (iVar1 = 0; uVar2 = SUB84(in_dr2, 0), iVar1 < 0x32; iVar1 = iVar1 + 1) {
        ar4_00 = 0x8c3e7d30;
        appuStack_18[0] = (u32 **)pool_5c_alloc(0x8c3e7d30);
        if ((u32 ***)appuStack_18[0] == NULL)
            break;
        iVar3 = rand();
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x47000000, (float)iVar3);
        } else {
            dVar9 = 1.1215622395287742e+23;
        }
        if (cVar10 == '\0') {
            fVar7 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
        } else {
            fVar7 = SUB84(dVar9 / dVar9, 0);
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x44b7c000, fVar7);
        } else {
            dVar9 = 7.673846743559028e+21;
        }
        if (cVar10 == '\0') {
            fVar7 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar7 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x447a0000, fVar7);
        } else {
            dVar9 = 2.8924499526186286e+22;
        }
        if (cVar10 == '\0') {
            ppuVar8 = (u32 **)(SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20));
        } else {
            ppuVar8 = SUB84(dVar9 + dVar9, 0);
        }
        if (cVar11 == '\0') {
            appuStack_18[0][2] = ppuVar8;
        } else {
            *(u64 *)(appuStack_18[0] + 2) = in_xd0;
        }
        iVar3 = rand();
        if (cVar11 == '\0') {
            in_dr2 = (double)CONCAT44(*(u32 *)a0, uVar2);
        } else {
            in_dr2 = *a0;
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x47000000, (float)iVar3);
        } else {
            dVar9 = 1.1215622395287742e+23;
        }
        if (cVar10 == '\0') {
            in_dr2 = (double)CONCAT44((float)((u64)in_dr2 >> 0x20) * (SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20)),
                                      SUB84(in_dr2, 0));
        } else {
            in_dr2 = in_dr2 * (dVar9 / dVar9);
        }
        if (cVar11 == '\0') {
            appuStack_18[0][3] = (u32 **)((u64)in_dr2 >> 0x20);
        } else {
            *(double *)(appuStack_18[0] + 3) = in_dr2;
        }
        iVar3 = rand();
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x47000000, (float)iVar3);
        } else {
            dVar9 = 1.1215622395287742e+23;
        }
        if (cVar10 == '\0') {
            fVar7 = SUB84(dVar9, 0) / (float)((u64)dVar9 >> 0x20);
        } else {
            fVar7 = SUB84(dVar9 / dVar9, 0);
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x44988000, fVar7);
        } else {
            dVar9 = 2.5220161595978547e+17;
        }
        if (cVar10 == '\0') {
            fVar7 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar7 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x438c0000, fVar7);
        } else {
            dVar9 = -1.392258127104201e-250;
        }
        if (cVar10 == '\0') {
            ppuVar8 = (u32 **)(SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20));
        } else {
            ppuVar8 = SUB84(dVar9 + dVar9, 0);
        }
        if (cVar11 == '\0') {
            appuStack_18[0][4] = ppuVar8;
        } else {
            *(u64 *)(appuStack_18[0] + 4) = in_xd0;
        }
        ar5_00 = (u32 ***)appuStack_18[0];
        list_append_58((int)a0 + 0x34, appuStack_18[0]);
    }
    uVar2 = se_play_ike1(a0, ar5_00, pcVar4, puVar6);
    return uVar2;
}

/*
 * textures_load_2  0x8c0d5578
 * CTexture_LoadFromCache on the textures at +8 and +0x108
 * called by: env_load_textures_0e0320
 */
u32 textures_load_2(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CTexture_LoadFromCache(a0 + 8, a1, a2, a3);
    uVar1 = CTexture_LoadFromCache(a0 + 0x108, a1, a2, a3);
    return uVar1;
}

/*
 * textures_release_2  0x8c0d55a4
 * CTexture_ReleaseFromVRAM on the textures at +8 and +0x108
 * called by: env_release_textures_0e03d4
 */
u32 textures_release_2(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CTexture_ReleaseFromVRAM(a0 + 8, a1, a2, a3);
    uVar1 = CTexture_ReleaseFromVRAM(a0 + 0x108, a1, a2, a3);
    return uVar1;
}

/*
 * game_sound_0d55d0  0x8c0d55d0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls sound functions
 * called by: game_sound_0e0508
 */
int game_sound_0d55d0(int a0) {
    int iVar1;

    Class_12b580_set_request(0x8c2b59d0, *(u32 *)(0x5e4 + a0));
    iVar1 = *(int *)(0x618 + a0);
    if (iVar1 != -1) {
        iVar1 = se_play(0x8c2b59d0, *(u32 *)(0x618 + a0), 1);
    }
    return iVar1;
}

/*
 * game_sound_0d5614  0x8c0d5614
 * area name: game code; nothing names its area yet; behaviour name: mostly calls sound functions
 * called by: game_sound_0e0488
 */
u32 game_sound_0d5614(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    Class_12b580_sound_022104(0x8c2b59d0, *(u32 *)(0x5e4 + a0), a2, a3);
    for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
        if (*(int *)(0x600 + iVar1 * 0x18 + a0) != -1) {
            (*(code *)(&se_status))(0x8c2b59d0, *(u32 *)(0x600 + iVar1 * 0x18 + a0), a2, a3);
        }
    }
    return 2;
}

/*
 * Class_12b580_set_request_wrap  0x8c0d568c
 * only calls Class_12b580_set_request
 * called by: CWaterTank_uses_get_field_300_0e0f48
 */
u32 Class_12b580_set_request_wrap(int a0) {
    u32 uVar1;

    uVar1 = Class_12b580_set_request(0x8c2b59d0, *(u32 *)(0x5e4 + a0));
    return uVar1;
}

/*
 * Class_12b580_sound_0d56b4  0x8c0d56b4
 * area name: sits between Class_12b580 functions (same compilation unit); behaviour name: mostly calls sound functions
 * called by: CWaterTank_uses_get_field_300_0e0f48
 */
u32 Class_12b580_sound_0d56b4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = Class_12b580_sound_022104(0x8c2b59d0, *(u32 *)(0x5e4 + a0), a2, a3);
    return uVar1;
}

/*
 * Class_12b580_sound_0d56dc  0x8c0d56dc
 * area name: sits between Class_12b580 functions (same compilation unit); behaviour name: mostly calls sound functions
 * called by: Class_12b930_uses_vec_new_array_0d2fd8
 */
u32 Class_12b580_sound_0d56dc(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    *(u32 *)(a0 + 0x5c4) = 0x3f4ccccd;
    *(u32 *)(a0 + 0x5c8) = 0x3f4ccccd;
    *(u32 *)(a0 + 0x5cc) = 0x3f4ccccd;
    *(u16 *)(a0 + 4) = 0;
    *(u32 *)(a0 + 0x5e8) = 0;
    *(u32 *)(a0 + 0x30) = 0;
    for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
        if (*(int *)(iVar1 * 0x18 + a0 + 0x600) != -1) {
            se_status(0x8c2b59d0, *(u32 *)(iVar1 * 0x18 + a0 + 0x600), a2, a3);
            se_close_port_handle(0x8c2b59d0, iVar1 * 0x18 + a0 + 0x600);
            *(u32 *)(iVar1 * 0x18 + a0 + 0x600) = 0xffffffff;
        }
    }
    *(u32 *)(a0 + 0x61c) = 0xffffffe2;
    g_8c437843 = 0xff;
    g_8c437842 = 0x32;
    g_8c437841 = 0x32;
    g_8c437840 = 0x1f;
    return 0x1f;
}

/*
 * CWaterTank_uses_CDCGD_release_type0_0d57e8  0x8c0d57e8
 * name hint from a string it uses: GRAPHICS ENV; area name: only called from CWaterTank methods; behaviour name: its
 * main named callee is CDCGD_release_type0 called by: CWaterTank_ReleaseModels strings: "suisou_WaterFace_small.nj";
 * "GRAPHICS\\ENV"; "GRAPHICS\\ENV"; "suisou_WaterFace_small.nj" ...
 */
u32 CWaterTank_uses_CDCGD_release_type0_0d57e8(int a0, u32 *a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 *ar5_00;
    u32 ar5_01;
    char *pcVar3;
    u32 in_stack_ffffffdc;
    u32 auStack_14[2];

    uVar2 = CONCAT31((s32)((u32)in_stack_ffffffdc >> 8), (char)a2);
    auStack_14[0] = 0;
    ar5_00 = a1;
    while (true) {
        iVar1 = get_field_d0_0d3f70(a0 + 0x34);
        if (iVar1 == 0)
            break;
        iVar1 = get_field_d0_0d3f70(a0 + 0x34);
        auStack_14[0] = CWaterSnowList_GetWaterSnowO(a0 + 0x34, iVar1 + -1);
        CWaterSnowList_TakeOut(a0 + 0x34, auStack_14[0]);
        ar5_00 = auStack_14;
        clear_link_58(0x8c3e7d30, ar5_00);
    }
    game_uses_set_field_0_0fe7f4(a0 + 0x34);
    if ((char)uVar2 == '\x02') {
        CDCGD_release_type0(a1, "suisou_WaterFace_small.nj", "GRAPHICS\\ENV", a0);
        pcVar3 = "GRAPHICS\\ENV";
        iVar1 = a0;
        CDCGD_release_type2(a1, "suisou_WaterFace_small.nj", "GRAPHICS\\ENV", a0);
        set_field_0_015ad4(a0 + 0x10, 0, pcVar3);
        CDCGD_release_type0(a1, "suisou_Effect_small.nj", "GRAPHICS\\ENV", a0);
        pcVar3 = "GRAPHICS\\ENV";
        iVar1 = a0;
        CDCGD_release_type2(a1, "suisou_Effect_small.nj", "GRAPHICS\\ENV", a0);
        uVar2 = set_field_0_015ad4(a0 + 0x1c, 0, pcVar3);
    } else {
        CDCGD_release_type0(a1, "suisou_WaterFace.nj", "GRAPHICS\\ENV", a0);
        pcVar3 = "GRAPHICS\\ENV";
        iVar1 = a0;
        CDCGD_release_type2(a1, "suisou_WaterFace.nj", "GRAPHICS\\ENV", a0);
        set_field_0_015ad4(a0 + 0x10, 0, pcVar3);
        CDCGD_release_type0(a1, "suisou_Effect.nj", "GRAPHICS\\ENV", a0);
        pcVar3 = "GRAPHICS\\ENV";
        iVar1 = a0;
        CDCGD_release_type2(a1, "suisou_Effect.nj", "GRAPHICS\\ENV", a0);
        ar5_01 = 0;
        set_field_0_015ad4(a0 + 0x1c, 0, pcVar3);
        uVar2 = CTexture_ReleaseFromVRAM(a0 + 0x12a5c, ar5_01, pcVar3, iVar1);
    }
    return uVar2;
}

/*
 * game_vec_0d59a4  0x8c0d59a4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b930_vec_0d3c08, WATER_ELEMENT_CreateStage0
 */
u32 game_vec_0d59a4(int a0, int a1, int a2, u32 a3) {
    bool bVar1;
    u64 uVar2;
    int iVar3;
    u32 uVar4;
    u8 *ar4_00;
    int ar5_00;
    int ar6_00;
    int iVar5;
    int iVar6;
    float fVar7;
    u64 in_dr0;
    double dVar8;
    float fVar9;
    char cVar10;
    char cVar11;
    u8 auStack_54[16];
    u8 auStack_44[16];
    u8 auStack_34[20];

    cVar11 = '\0';
    cVar10 = '\0';
    iVar5 = 0;
    ar5_00 = a1;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_34, a1, a2);
    iVar6 = 0;
    while ((iVar6 < 0x226 && (iVar5 < a1))) {
        iVar3 = get_field_44_0d5ca0(iVar6 * 0x88 + a0 + 0x62c);
        uVar4 = (u32)((u64)in_dr0 >> 0x20);
        if (iVar3 == 0) {
            iVar3 = get_field_164_0d5c94(a2);
            if (iVar3 == 2) {
                game_uses_rand_0d26ac(iVar6 * 0x88 + a0 + 0x62c, ar5_00, ar6_00, a3);
                set_field_44_to_1(iVar6 * 0x88 + a0 + 0x62c);
                Vec3_ctor_copy_wrap_0d5c68(iVar6 * 0x88 + a0 + 0x62c, ar5_00, ar6_00, a3, auStack_44);
                Vec3_assign(auStack_34, auStack_44, ar6_00, a3);
                ar5_00 = -1;
                ar4_00 = auStack_44;
                Vec3_dtor(ar4_00, 0xffffffff, ar6_00, a3);
                iVar3 = rand();
                if (cVar11 == '\0') {
                    dVar8 = (double)CONCAT44(0x47000000, (float)iVar3);
                } else {
                    dVar8 = 3.051758619676548e-05;
                }
                if (cVar10 == '\0') {
                    fVar7 = SUB84(dVar8, 0) / (float)((u64)dVar8 >> 0x20);
                } else {
                    fVar7 = SUB84(dVar8 / dVar8, 0);
                }
                if (cVar11 == '\0') {
                    fVar9 = 0.5;
                } else {
                    fVar7 = 0.5;
                    fVar9 = 183.0;
                }
                if (cVar10 != '\0' || fVar9 <= fVar7) {
                    if (cVar11 == '\0') {
                        in_dr0 = CONCAT44(*(u32 *)(a2 + 0x158), fVar7);
                    } else {
                        in_dr0 = *(u64 *)(a2 + 0x158);
                    }
                    Vec3_set_fr4_6_b(iVar6 * 0x88 + a0 + 0x62c);
                } else {
                    if (cVar11 == '\0') {
                        in_dr0 = CONCAT44(*(u32 *)(a2 + 0x158), fVar7);
                    } else {
                        in_dr0 = *(u64 *)(a2 + 0x158);
                    }
                    Vec3_set_fr4_6_b(iVar6 * 0x88 + a0 + 0x62c);
                }
                iVar5 = iVar5 + 1;
            } else {
                game_uses_rand_0d26f0(iVar6 * 0x88 + a0 + 0x62c, ar5_00, ar6_00);
                Vec3_ctor_copy_wrap_0d5c68(iVar6 * 0x88 + a0 + 0x62c, ar5_00, ar6_00, a3, auStack_54);
                Vec3_distance_sq(auStack_54, a2 + 4, ar6_00, a3);
                if (cVar11 == '\0') {
                    in_dr0 = CONCAT44(*(u32 *)(a2 + 0x158), uVar4);
                } else {
                    in_dr0 = *(u64 *)(a2 + 0x158);
                }
                bVar1 = cVar10 != '\0';
                fVar7 = (float)in_dr0;
                uVar2 = (u64)in_dr0 >> 0x20;
                ar5_00 = -1;
                Vec3_dtor(auStack_54, 0xffffffff, ar6_00, a3);
                if (bVar1 || (float)uVar2 <= fVar7) {
                    game_uses_rand_0d276c(iVar6 * 0x88 + a0 + 0x62c, ar5_00, ar6_00, a3);
                    set_field_44_to_1(iVar6 * 0x88 + a0 + 0x62c);
                    iVar5 = iVar5 + 1;
                }
            }
        }
        iVar6 = iVar6 + 1;
    }
    uVar4 = Vec3_dtor(auStack_34, 0xffffffff, ar6_00, a3);
    return uVar4;
}

/*
 * Vec3_set_fr4_6_b  0x8c0d5c58
 * a0 = (fr4, fr5, fr6)
 * called by: game_vec_0d59a4
 */
u32 *Vec3_set_fr4_6_b(u32 *a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    return a0 + 1;
}

/*
 * Vec3_ctor_copy_wrap_0d5c68  0x8c0d5c68
 * only calls Vec3_ctor_copy
 * called by: game_vec_0d59a4
 */
u32 Vec3_ctor_copy_wrap_0d5c68(u32 a0, u32 unused_a1, u32 a2, u32 a3, u32 s0) {
    u32 uVar1;

    uVar1 = Vec3_ctor_copy(s0, a0, a2, a3);
    return uVar1;
}

/*
 * set_field_44_to_1  0x8c0d5c88
 * called by: game_vec_0d59a4
 */
u32 set_field_44_to_1(int a0) {
    *(u32 *)(a0 + 0x44) = 1;
    return 0x44;
}

/*
 * get_field_164_0d5c94  0x8c0d5c94
 * called by: game_vec_0d59a4, get_field_164_on_field_22d48
 */
u32 get_field_164_0d5c94(int a0) {
    return *(u32 *)(0x164 + a0);
}

/*
 * get_field_44_0d5ca0  0x8c0d5ca0
 * called by: game_vec_0d59a4
 */
u32 get_field_44_0d5ca0(int a0) {
    return *(u32 *)(a0 + 0x44);
}

/*
 * update_active_entries_62c  0x8c0d5ca8
 * updates every active one of the 0x226 0x88-byte entries at +0x62c; returns how many
 * called by: Class_12b930_vec_0d3c08, WATER_ELEMENT_CreateStage0
 */
int update_active_entries_62c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = 0;
    for (iVar3 = 0; iVar3 < 0x226; iVar3 = iVar3 + 1) {
        iVar1 = (*(code *)(&get_field_44_0d5ca0))(iVar3 * 0x88 + a0 + 0x62c, a1, a2, a3);
        if (iVar1 == 1) {
            game_vec_0d294c(iVar3 * 0x88 + a0 + 0x62c, a1, a2, a3);
            iVar2 = iVar2 + 1;
        }
    }
    return iVar2;
}

/*
 * Vec3_draw_0d5d28  0x8c0d5d28
 * area name: sits between Vec3 functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_draw_0d4124, game_draw_0d4428, game_draw_0d46cc
 */
u32 Vec3_draw_0d5d28(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;

    if (*(char *)(0x8c437840 + 2) == '2') {
        gfx_set_color4_4aa52c((&DATA_8c13f51c));
    } else {
        gfx_set_color4_4aa52c((&DATA_8c13f50c));
    }
    for (iVar3 = 0; iVar3 < 0x226; iVar3 = iVar3 + 1) {
        iVar1 = (*(code *)(&get_field_44_0d5ca0))(iVar3 * 0x88 + a0 + 0x62c, a1, a2, a3);
        if (iVar1 == 1) {
            a1 = a0 + 0x12a5c;
            game_draw_0d2c84(iVar3 * 0x88 + a0 + 0x62c, a1, a2, a3);
        }
    }
    uVar2 = gfx_set_color4_4aa52c((&DATA_8c13f320));
    return uVar2;
}

/*
 * Vec3_uses_get_field_0_0d5de0  0x8c0d5de0
 * area name: sits between Vec3 functions (same compilation unit); behaviour name: its main named callee is
 * get_field_0_015bb8 called by: WATER_ELEMENT_release, WE_CreateStageC
 */
int Vec3_uses_get_field_0_0d5de0(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = get_field_0_015bb8(a0 + 0x10);
    iVar1 = (*(code *)(&thunk_FUN_8c0151e8))(*(u32 *)(*(int *)(iVar1 + 4) + 4), 0x17, a2, a3);
    *(int *)(a0 + 0x14) = iVar1 + 4;
    return iVar1;
}

/*
 * Vec3_draw_0d5e2c  0x8c0d5e2c
 * area name: sits between Vec3 functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: game_draw_0d1c3c, game_uses_CWaterTank_CreateStage_0de07c
 */
u32 Vec3_draw_0d5e2c(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (g_8c43783c == 1) {
        (*(code *)(&ninja_draw_257120))(
            (u32)0x8c437840 [2] << 0x10 | 0xff000000 | (u32)0x8c437840 [1] << 8 | (u32) * 0x8c437840, a1, a2, a3);
        g_8c43783c = 0;
    }
    uVar1 = pvr_draw_235f84(0x8c43786c);
    return uVar1;
}

/*
 * Class_12b758_uses_Class_129920_ctor_0d5e9c  0x8c0d5e9c
 * area name: only called from Class_12b758 methods; behaviour name: its main named callee is Class_129920_ctor
 * called by: Class_12b758_ctor
 */
int Class_12b758_uses_Class_129920_ctor_0d5e9c(int a0, u32 a1, u32 a2) {
    Class_129920_ctor(a0, a1);
    clear_field_0_wrap_015ab8(a0 + 8);
    Vec3_ctor_zero(a0 + 0x10, a1, a2);
    set_fields_c_20(a0);
    return a0;
}

/*
 * SoilTank_Createt  0x8c0d5ee0
 * called by: CSoilTank_Create
 * strings: "kumonosu.nj"; "GRAPHICS\\ENV"; "kumonosu.nj"; "Read NJCM Failed..:SPIDER_WEB::Create()" ...
 */
int SoilTank_Createt(int *a0, u32 a1) {
    u32 uVar1;
    int iVar2;
    u32 ar7_00;
    int *ar5_00;
    char *ar6_00;
    int **ar7_01;
    u32 uVar3;
    int *piStack_18;
    u32 auStack_14[2];

    auStack_14[0] = 0;
    piStack_18 = NULL;
    iVar2 = retry_until_done_0209b0(a1, "kumonosu.nj", "GRAPHICS\\ENV", auStack_14);
    if (iVar2 == 0) {
        report_error_message("kumonosu.nj", "Read NJCM Failed..:SPIDER_WEB::Create()", 0, 2);
    }
    ar7_01 = &piStack_18;
    ar6_00 = "GRAPHICS\\ENV";
    iVar2 = retry_until_done_020aa8(a1, "kumonosu.nj", "GRAPHICS\\ENV", ar7_01);
    if (iVar2 == 0) {
        ar7_01 = (int **)0x2;
        ar6_00 = NULL;
        report_error_message("kumonosu.nj", "Read NJTL Failed..:SPIDER_WEB::Create()", 0, 2);
    }
    uVar1 = 0;
    while (uVar3 = uVar1, uVar3 < (u32)piStack_18[1]) {
        *(u32 *)(uVar3 * 0xc + *piStack_18 + 4) = *(u32 *)(uVar3 * 0xc + *piStack_18 + 4) | 0x80000000;
        uVar1 = uVar3 + 1;
    }
    set_field_0_015ad4(a0 + 2, auStack_14[0], ar6_00);
    ar5_00 = piStack_18;
    (**(code **)(*a0 + 8))(a0, piStack_18, ar6_00, ar7_01);
    ar7_00 = get_field_4_0253e4(a0, ar5_00, ar6_00, ar7_01);
    iVar2 = retry_until_done_020e80(a1, "SPIDER WEB", "GRAPHICS\\ENV", ar7_00);
    if (iVar2 == 0) {
        iVar2 = report_error_message("Failed to load web tex", "SoilTank::Createt()", 0, 2);
    }
    return iVar2;
}

/*
 * CTexture_LoadFromCache_wrap_0d6058  0x8c0d6058
 * only calls CTexture_LoadFromCache
 * called by: textures_load_3
 */
u32 CTexture_LoadFromCache_wrap_0d6058(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_LoadFromCache(a0, a1, a2, a3);
    return uVar1;
}

/*
 * CTexture_ReleaseFromVRAM_wrap_0d6074  0x8c0d6074
 * only calls CTexture_ReleaseFromVRAM
 * called by: textures_release_3
 */
u32 CTexture_ReleaseFromVRAM_wrap_0d6074(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_ReleaseFromVRAM(a0, a1, a2, a3);
    return uVar1;
}

/*
 * CTexture_draw_0d6090  0x8c0d6090
 * area name: sits between CTexture functions (same compilation unit); behaviour name: mostly calls draw functions
 * called by: Class_12b758_draw_0e4dd0
 */
u32 CTexture_draw_0d6090(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_set_texlist(a0, a1, a2);
    uVar1 = Class_12c058_draw_015adc(a0 + 8, a1, a2, a3);
    return uVar1;
}

/*
 * set_fields_c_20  0x8c0d60b8
 * stores +0xc, +0x20
 * called by: Class_12b758_uses_Class_129920_ctor_0d5e9c
 */
u32 set_fields_c_20(int a0) {
    *(u32 *)(a0 + 0xc) = 0;
    *(u32 *)(a0 + 0x20) = 0x3f800000;
    return 0;
}

/*
 * kumonosu_release_model  0x8c0d60c8
 * releases kumonosu.nj (the spider web)
 * called by: musikago_release_model
 * strings: "kumonosu.nj"; "GRAPHICS\\ENV"; "kumonosu.nj"; "GRAPHICS\\ENV"
 */
u32 kumonosu_release_model(u32 a0, u32 a1) {
    u32 uVar1;

    (*(code *)(&CDCGD_release_type0))(a1, "kumonosu.nj", "GRAPHICS\\ENV", a0);
    uVar1 = (*(code *)(&CDCGD_release_type2))(a1, "kumonosu.nj", "GRAPHICS\\ENV", a0);
    return uVar1;
}

/*
 * CTexture_vec_0d611c  0x8c0d611c
 * area name: sits between CTexture functions (same compilation unit); behaviour name: mostly calls vec functions
 */
int CTexture_vec_0d611c(int a0, u32 a1, u32 a2) {
    char cVar1;

    cVar1 = '\0';
    Vec3_ctor_zero(a0, a1, a2);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x10) = 0x3dcccccd;
    } else {
        *(u64 *)(a0 + 0x10) = 0xffffff3dcccccd;
    }
    *(u32 *)(a0 + 0x1c) = 0xffffff;
    *(u32 *)(a0 + 0x20) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x14) = 0xbf000000;
    } else {
        *(u64 *)(a0 + 0x14) = 0x4f222fe6bf000000;
    }
    *(u32 *)(a0 + 0x18) = 0;
    return a0;
}

/*
 * CTexture_uses_libgcc_divide_helper_0d6164  0x8c0d6164
 * area name: sits between CTexture functions (same compilation unit); behaviour name: its main named callee is
 * libgcc_divide_helper_0103d0 called by: update_3_active_1070
 */
float *CTexture_uses_libgcc_divide_helper_0d6164(int a0, u32 a1) {
    float *pfVar1;

    *(float *)(a0 + 0x14) = *(float *)(a0 + 0x14) + -0.1;
    *(float *)(a0 + 4) = *(float *)(a0 + 4) + *(float *)(a0 + 0x14);
    *(float *)(a0 + 8) = *(float *)(a0 + 8) + -4.0;
    *(float *)(a0 + 0x10) = *(float *)(a0 + 0x10) + 0.015;
    pfVar1 = *(float **)(a0 + 0x18);
    if (pfVar1 == NULL) {
        if (*(u32 *)(a0 + 0x1c) < 0xe6ffffff) {
            *(int *)(a0 + 0x1c) = *(int *)(a0 + 0x1c) + 0x19000000;
        }
        pfVar1 = (float *)(a0 + 0x10);
        if (1.0 <= *pfVar1) {
            *(u32 *)(a0 + 0x1c) = 0xffffffff;
            pfVar1 = (float *)0x1;
            *(u32 *)(a0 + 0x18) = 1;
        }
    } else if (pfVar1 == (float *)0x1) {
        pfVar1 = (float *)libgcc_divide_helper_0103d0(a1, 0x2d);
        if (pfVar1 == NULL) {
            pfVar1 = (float *)0x2;
            *(u32 *)(a0 + 0x18) = 2;
        }
    } else if (pfVar1 == (float *)0x2) {
        if (*(u32 *)(a0 + 0x1c) < 0x7000000) {
            pfVar1 = NULL;
            *(u32 *)(a0 + 0x20) = 0;
        } else {
            pfVar1 = (float *)0x6000000;
            *(int *)(a0 + 0x1c) = *(int *)(a0 + 0x1c) + -0x6000000;
        }
    }
    return pfVar1;
}

/*
 * Class_12bb08_vec_0d6264  0x8c0d6264
 * area name: only called from Class_12bb08 methods; behaviour name: mostly calls vec functions
 * called by: Class_12bb08_ctor
 */
int Class_12bb08_vec_0d6264(int a0, u32 a1, u32 a2) {
    code *ar5_00;
    code *ar6_00;
    u32 ar7_00;
    u32 in_fr1;
    u64 uVar1;
    char cVar2;

    cVar2 = '\0';
    Vec3_ctor_zero(a0, a1, a2);
    Vec3_ctor_zero(a0 + 0x10, a1, a2);
    Vec3_ctor_zero(a0 + 0x20, a1, a2);
    Vec3_ctor_zero(a0 + 0x30, a1, a2);
    Vec3_ctor_zero(a0 + 0x40, a1, a2);
    ar7_00 = 0x20;
    ar6_00 = Class_12c394_dtor;
    ar5_00 = Class_12c394_ctor_b_wrap;
    vec_new_array(a0 + 0x68, Class_12c394_ctor_b_wrap, Class_12c394_dtor, 0x20, 4);
    Class_12c394_ctor_b_wrap(a0 + 0xe8);
    Class_12c394_uses_linear_map_set_range_0d63f8(a0 + 0x108);
    Class_12c394_ctor_b_wrap(a0 + 0x11c);
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x54) = 0x459c4000;
        uVar1 = CONCAT44(0x44bb8000, in_fr1);
        *(u32 *)(a0 + 0x58) = 0x44bb8000;
    } else {
        *(u64 *)(a0 + 0x54) = 0x44bb8000459c4000;
        uVar1 = 0x13c44bb8000;
        *(u64 *)(a0 + 0x58) = 0x13c44bb8000;
    }
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x5c) = 0;
        *(u32 *)(a0 + 0x13c) = 0x42340000;
    } else {
        *(u64 *)(a0 + 0x5c) = uVar1 & 0xffffffff;
        *(u64 *)(a0 + 0x13c) = 0x4316000042340000;
    }
    linear_map_set(a0 + 0x11c);
    linear_map_set(a0 + 0xe8);
    game_vec_0d6c9c(a0, ar5_00, ar6_00, ar7_00);
    return a0;
}

/*
 * Class_12c3a4_dtor  0x8c0d63c0
 * stores the vtable 0x8c12c3a4
 * called by: Class_12bb08_release_0da028, Class_12bea8_release_0d80dc, Class_12c394_dtor
 */
u32 *Class_12c3a4_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != NULL) && (*a0 = &g_8c12c3a4, 0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_12c394_uses_linear_map_set_range_0d63f8  0x8c0d63f8
 * area name: only called from Class_12c394 methods; behaviour name: its callees mostly do: uses_linear_map_set_range
 * called by: Class_12bb08_vec_0d6264, Class_12bea8_uses_set_fields_c_10_0d7af8, Class_12c394_ctor_b
 */
u32 Class_12c394_uses_linear_map_set_range_0d63f8(u32 a0) {
    u32 uVar1;

    uVar1 = game_uses_linear_map_set_range_10291c(a0);
    return uVar1;
}

/*
 * Class_12c394_dtor  0x8c0d6424
 * stores the vtable 0x8c12c394
 * called by: Class_12bb08_release_0da028
 */
u32 *Class_12c394_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12c394;
        ar5_00 = 0;
        Class_12c3a4_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12c394_ctor_b_wrap  0x8c0d646c
 * only calls Class_12c394_ctor_b
 * called by: Class_12bb08_vec_0d6264
 */
u32 Class_12c394_ctor_b_wrap(u32 a0) {
    u32 uVar1;

    uVar1 = Class_12c394_ctor_b(a0);
    return uVar1;
}

/*
 * Class_12c394_vec_0d64a0  0x8c0d64a0
 * area name: sits between Class_12c394 functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: Class_12b580_m1_0e634c, Class_12b758_m1_0e4b5c, Class_12b930_m1_0de1dc
 */
u32 Class_12c394_vec_0d64a0(u64 *a0, u32 a1, u64 *a2, u64 *a3) {
    u32 uVar1;
    int iVar2;
    u64 *a5;
    double in_dr0;
    u64 uVar3;
    float fVar6;
    double dVar4;
    double dVar5;
    u64 in_dr14;
    u32 uVar8;
    double dVar7;
    u64 in_xd0;
    double in_xd14;
    char cVar9;
    char cVar10;
    u32 auStack_3c[4];
    u32 uStack_2c;
    u32 uStack_28;
    float fStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    uVar8 = (u32)((u64)in_dr14 >> 0x20);
    cVar10 = '\0';
    cVar9 = '\0';
    Vec3_ctor_zero(&uStack_1c, a1, a2);
    Vec3_ctor_zero(&uStack_2c, a1, a2);
    dVar7 = (double)((u64)uVar8 << 0x20);
    iVar2 = *(int *)((int)a0 + 100);
    if ((iVar2 < 7) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            if (cVar10 == '\0') {
                uVar3 = CONCAT44(*(u32 *)(a0 + 0xb), *(u32 *)(a0 + 1));
            } else {
                uVar3 = a0[0xb];
            }
            if (cVar9 == '\0' && (float)uVar3 < (float)((u64)uVar3 >> 0x20)) {
                if (cVar10 == '\0') {
                    *(u32 *)(a0 + 1) = *(u32 *)(a0 + 0xb);
                } else {
                    a0[1] = a0[0xb];
                }
            }
            break;
        case 2:
            if (*(int *)(a0 + 0xc) != 0) {
                (**(code **)(*(int *)(*(int *)(a0 + 0xc) + 8) + 0x80))(*(int *)(a0 + 0xc), a1, a2, a3);
                a3 = a0 + 7;
                a2 = (u64 *)((int)a0 + 0x34);
                a5 = a0 + 6;
                (**(code **)(*(int *)(*(int *)(a0 + 0xc) + 8) + 0x134))(*(int *)(a0 + 0xc), a5, a2, a3);
                (**(code **)(*(int *)(*(int *)(a0 + 0xc) + 8) + 0x130))(*(int *)(a0 + 0xc), a5, a2, a3);
                uVar1 = (u32)((u64)in_dr0 >> 0x20);
                if (cVar10 == '\0') {
                    in_dr0 = (double)CONCAT44(uVar1, *(u32 *)(a0 + 7));
                } else {
                    in_xd0 = a0[7];
                    auStack_3c[0] = uVar1;
                }
                if (cVar9 == '\0') {
                    fVar6 = (float)((u64)in_dr0 >> 0x20);
                    in_dr0 = (double)CONCAT44(fVar6, SUB84(in_dr0, 0) + fVar6);
                } else {
                    in_dr0 = in_dr0 + in_dr0;
                }
                if (cVar10 == '\0') {
                    *(int *)(a0 + 7) = SUB84(in_dr0, 0);
                } else {
                    a0[7] = in_xd0;
                }
            }
            Vec3_sub(a0 + 6, a0, a2, a3, auStack_3c);
            Vec3_assign(&uStack_1c, auStack_3c, a2, a3);
            uVar1 = 0xffffffff;
            Vec3_dtor(auStack_3c, 0xffffffff, a2, a3);
            Vec3_length_sq(&uStack_1c, uVar1, a2, a3);
            (**(code **)(*(int *)((int)a0 + 0x11c) + 8))((int *)((int)a0 + 0x11c), uVar1, a2, a3);
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), (int)((u64)in_dr0 >> 0x20));
                in_dr0 = in_xd14;
            }
            Vec3_length(&uStack_1c, uVar1, a2, a3);
            fStack_24 = SUB84(dVar7, 0);
            dVar4 = in_dr0;
            if (cVar10 == '\0') {
                dVar4 = (double)CONCAT44(fStack_24, uStack_1c);
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * SUB84(dVar4, 0), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 * dVar4;
            }
            if (cVar10 == '\0') {
                uStack_2c = (u32)((u64)dVar4 >> 0x20);
                dVar4 = (double)CONCAT44(fStack_24, uStack_18);
            } else {
                uStack_2c = SUB84(dVar4, 0);
                dVar4 = in_dr0;
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) * SUB84(dVar4, 0), SUB84(dVar4, 0));
            } else {
                dVar4 = dVar4 * dVar4;
            }
            uStack_28 = SUB84(dVar4, 0);
            if (cVar10 == '\0') {
                dVar5 = (double)CONCAT44(uStack_14, uStack_28);
                uStack_28 = (int)((u64)dVar4 >> 0x20);
            } else {
                dVar5 = (double)CONCAT44(uStack_10, uStack_14);
            }
            if (cVar9 == '\0') {
                fStack_24 = fStack_24 * (float)((u64)dVar5 >> 0x20);
            } else {
                fStack_24 = SUB84(dVar7 * dVar5, 0);
            }
            if (cVar10 != '\0') {
                fStack_24 = SUB84(in_dr0, 0);
                uStack_20 = (u32)((u64)in_dr0 >> 0x20);
            }
            Vec3_add_assign(a0, &uStack_2c);
            break;
        case 4:
            a2 = a0 + 6;
            iVar2 = game_vec_0d6d58(a0, a0, a2, a3);
            if (iVar2 == 4) {
                *(u32 *)((int)a0 + 100) = 3;
            }
            if (cVar10 == '\0') {
                *(u32 *)(a0 + 4) = *(u32 *)a0;
            } else {
                a0[4] = *a0;
            }
            break;
        case 5:
            a2 = a0 + 6;
            iVar2 = game_vec_0d6d58(a0, a0, a2, a3);
            if (iVar2 == 4) {
                *(u32 *)((int)a0 + 100) = 0;
            }
            break;
        case 6:
            a2 = a0 + 6;
            iVar2 = game_vec_0d6d58(a0, a0, a2, a3);
            if (iVar2 == 4) {
                *(u32 *)((int)a0 + 100) = 0;
            }
            if (cVar10 == '\0') {
                *(u32 *)(a0 + 4) = *(u32 *)a0;
            } else {
                a0[4] = *a0;
            }
        }
    }
    Vec3_dtor(&uStack_2c, 0xffffffff, a2, a3);
    uVar1 = Vec3_dtor(&uStack_1c, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * game_vec_0d66d8  0x8c0d66d8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_uses_set_vec3_field_44_0db188, game_vec_0d6aac
 */
u32 game_vec_0d66d8(double *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    float fVar2;
    float fVar6;
    double dVar3;
    double dVar4;
    double dVar5;
    float in_fr15;
    u32 in_fr14;
    double in_xd0;
    double in_xd14;
    bool bVar7;
    char cVar8;
    char cVar9;
    float afStack_1c[5];

    cVar9 = '\0';
    cVar8 = '\0';
    fVar2 = *(float *)(a0 + 1);
    fVar6 = *(float *)((int)a0 + 0x54);
    if (fVar6 < fVar2) {
        fVar6 = *(float *)((int)a0 + 0x54);
        *(float *)(a0 + 1) = fVar6;
    }
    if (*(float *)((int)a0 + 100) == 4.2039e-45) {
        if (360.0 <= *(float *)a0) {
            if (2140.0 < *(float *)a0) {
                *(float *)a0 = 2140.0;
            }
        } else {
            *(float *)a0 = 360.0;
        }
        fVar2 = *(float *)(a0 + 1);
        if (240.0 <= fVar2) {
            fVar2 = *(float *)(a0 + 1);
            fVar6 = 1300.0;
            if (1300.0 < fVar2) {
                fVar6 = 1300.0;
                *(float *)(a0 + 1) = 1300.0;
            }
        } else {
            fVar6 = 240.0;
            *(float *)(a0 + 1) = 240.0;
        }
    }
    (**(code **)((int)*(float *)(a0 + 0x15) + 0xc))(a0 + 0x15, a1, a2, a3);
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(*(float *)a0, fVar2);
        in_fr15 = fVar6;
    } else {
        in_xd14 = (double)CONCAT44(fVar6, fVar2);
        dVar3 = *a0;
        afStack_1c[0] = fVar6;
    }
    if (cVar8 == '\0') {
        bVar7 = in_fr15 < (float)((u64)dVar3 >> 0x20);
    } else {
        bVar7 = (double)CONCAT44(in_fr14, in_fr15) < dVar3;
    }
    if (bVar7) {
        if (cVar9 == '\0') {
            *(float *)a0 = in_fr15;
        } else {
            *a0 = in_xd14;
        }
    }
    (**(code **)((int)*(float *)(a0 + 0x19) + 0xc))(a0 + 0x19, a1, a2, a3);
    if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(*(float *)a0, SUB84(dVar3, 0));
        in_fr15 = (float)((u64)dVar3 >> 0x20);
        dVar3 = in_xd14;
    } else {
        dVar4 = *a0;
    }
    if (cVar8 == '\0') {
        bVar7 = (float)((u64)dVar4 >> 0x20) < in_fr15;
    } else {
        bVar7 = dVar4 < (double)CONCAT44(in_fr14, in_fr15);
    }
    if (bVar7) {
        if (cVar9 == '\0') {
            *(float *)a0 = in_fr15;
        } else {
            *a0 = dVar3;
        }
    }
    if (((*(float *)((int)a0 + 100) == 0.0) || (*(float *)((int)a0 + 100) == 1.4013e-45)) ||
        (dVar5 = dVar4, *(float *)((int)a0 + 100) == 2.8026e-45)) {
        (**(code **)((int)*(float *)(a0 + 0xd) + 0xc))(a0 + 0xd, a1, a2, a3);
        if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44(*(float *)((int)a0 + 4), SUB84(dVar4, 0));
            in_fr15 = (float)((u64)dVar4 >> 0x20);
        } else {
            dVar5 = *(double *)((int)a0 + 4);
            dVar3 = dVar4;
        }
        if (cVar8 == '\0') {
            bVar7 = in_fr15 < (float)((u64)dVar5 >> 0x20);
        } else {
            bVar7 = (double)CONCAT44(in_fr14, in_fr15) < dVar5;
        }
        if (bVar7) {
            if (cVar9 == '\0') {
                *(float *)((int)a0 + 4) = in_fr15;
            } else {
                *(double *)((int)a0 + 4) = dVar3;
            }
        }
    }
    (**(code **)((int)*(float *)(a0 + 0x11) + 0xc))(a0 + 0x11, a1, a2, a3);
    if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(*(float *)((int)a0 + 4), SUB84(dVar5, 0));
        in_fr15 = (float)((u64)dVar5 >> 0x20);
        dVar5 = dVar3;
    } else {
        dVar4 = *(double *)((int)a0 + 4);
    }
    if (cVar8 == '\0') {
        bVar7 = (float)((u64)dVar4 >> 0x20) < in_fr15;
    } else {
        bVar7 = dVar4 < (double)CONCAT44(in_fr14, in_fr15);
    }
    if (bVar7) {
        if (cVar9 == '\0') {
            *(float *)((int)a0 + 4) = in_fr15;
        } else {
            *(double *)((int)a0 + 4) = dVar5;
        }
    }
    (**(code **)((int)*(float *)(a0 + 0x1d) + 8))(a0 + 0x1d, a1, a2, a3);
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(*(float *)((int)a0 + 4), SUB84(dVar4, 0));
        in_fr15 = (float)((u64)dVar4 >> 0x20);
        dVar4 = dVar5;
    } else {
        dVar3 = *(double *)((int)a0 + 4);
    }
    if (cVar8 == '\0') {
        bVar7 = (float)((u64)dVar3 >> 0x20) < in_fr15;
    } else {
        bVar7 = dVar3 < (double)CONCAT44(in_fr14, in_fr15);
    }
    if (bVar7) {
        if (cVar9 == '\0') {
            *(float *)((int)a0 + 4) = in_fr15;
        } else {
            *(double *)((int)a0 + 4) = dVar4;
        }
    }
    fVar2 = *(float *)((int)a0 + 100);
    if (fVar2 == 0.0) {
        Vec3_assign(a0 + 4, a0, a2, a3);
        fVar2 = SUB84(dVar3, 0);
        if (cVar9 == '\0') {
            fVar2 = *(float *)(a0 + 5);
        } else {
            in_xd0 = a0[5];
        }
        if (cVar8 == '\0') {
            fVar2 = fVar2 - 1.0;
        } else {
            fVar2 = SUB84((double)CONCAT44(0x3f800000, fVar2) - (double)CONCAT44(0x3f800000, fVar2), 0);
        }
        if (cVar9 == '\0') {
            *(float *)(a0 + 5) = fVar2;
        } else {
            a0[5] = in_xd0;
        }
        goto LAB_8c0d68ba;
    }
    if (fVar2 != 2.8026e-45) {
        if (fVar2 == 4.2039e-45) {
            if (cVar9 == '\0') {
                *(float *)(a0 + 4) = *(float *)a0;
                dVar3 = (double)(u64)(u32) * (float *)(a0 + 1);
            } else {
                dVar3 = *a0;
                a0[4] = dVar3;
                in_xd0 = a0[1];
            }
            dVar4 = (double)CONCAT44(0x3f800000, SUB84(dVar3, 0));
            if (cVar8 == '\0') {
                fVar2 = SUB84(dVar3, 0) - 1.0;
            } else {
                fVar2 = SUB84(dVar4 - dVar4, 0);
            }
            if (cVar9 == '\0') {
                *(float *)(a0 + 5) = fVar2;
            } else {
                a0[5] = in_xd0;
            }
            goto LAB_8c0d68ba;
        }
        if (fVar2 != 7.00649e-45)
            goto LAB_8c0d68ba;
    }
    Vec3_assign(a0 + 4, a0, a2, a3);
    fVar2 = SUB84(dVar3, 0);
    if (cVar9 == '\0') {
        fVar2 = *(float *)(a0 + 5);
    } else {
        in_xd0 = a0[5];
    }
    if (cVar8 == '\0') {
        fVar2 = fVar2 - 1.0;
    } else {
        fVar2 = SUB84((double)CONCAT44(0x3f800000, fVar2) - (double)CONCAT44(0x3f800000, fVar2), 0);
    }
    if (cVar9 == '\0') {
        *(float *)(a0 + 5) = fVar2;
    } else {
        a0[5] = in_xd0;
    }
LAB_8c0d68ba:
    Vec3_sub(a0 + 4, a0, a2, a3, afStack_1c);
    Vec3_assign(a0 + 2, afStack_1c, a2, a3);
    uVar1 = Vec3_dtor(afStack_1c, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * game_vec_0d6920  0x8c0d6920
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_uses_Class_12b580_clear_request_0e6dc4, game_uses_get_field_300_0e51ac, game_uses_get_field_38_0dfbdc
 */
u32 game_vec_0d6920(u32 a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = game_vec_0d6c9c(a0, unused_a1, a2, a3);
    return uVar1;
}

/*
 * game_vec_0d6954  0x8c0d6954
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_uses_rotate_degrees_7c_on_field_9_0e68f4, input_uses_rotate_degrees_7c_on_field_9_0e5a08,
 * input_uses_set_fields_28_48_0dff1c
 */
u32 game_vec_0d6954(int a0, u32 unused_a1, u32 a2, u32 a3) {
    Vec3_assign(a0 + 0x30, a0, a2, a3);
    *(u32 *)(a0 + 0x60) = 0;
    *(u32 *)(a0 + 100) = 0;
    return 100;
}

/*
 * game_init_fields_0d6980  0x8c0d6980
 * area name: game code; nothing names its area yet; behaviour name: writes 5 members
 * called by: game_uses_CSprinkler_LoadTexture_0e016c, game_uses_edge_detect_update_0e021c
 */
u32 game_init_fields_0d6980(int a0) {
    *(u32 *)(a0 + 100) = 0;
    *(u32 *)(a0 + 0x30) = 0;
    *(u32 *)(a0 + 0x34) = 0;
    *(u32 *)(a0 + 0x38) = 0;
    *(u32 *)(a0 + 0x60) = 0;
    return 0x60;
}

/*
 * game_uses_linear_map_set_0d69a8  0x8c0d69a8
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is linear_map_set
 * called by: game_uses_ret_const_140_0dbf90, input_uses_input_y_pressed_wrap_0dc28c
 */
u32 game_uses_linear_map_set_0d69a8(int a0, u32 a1, u32 a2, u32 a3) {
    int a5;
    u32 extraout_fr1;
    u32 extraout_fr0;
    char cVar1;
    u64 uStack_14;

    cVar1 = '\0';
    *(u32 *)(a0 + 0x60) = a1;
    a5 = (int)&uStack_14 + 4;
    (**(code **)(*(int *)(*(int *)(a0 + 0x60) + 8) + 0x160))(*(int *)(a0 + 0x60), a5, a2, a3);
    if (cVar1 == '\0') {
        uStack_14 = CONCAT44(uStack_14._4_4_, extraout_fr0);
    } else {
        uStack_14 = CONCAT44(extraout_fr0, extraout_fr1);
    }
    linear_map_set(a0 + 0x11c);
    *(u32 *)(a0 + 100) = 2;
    return 100;
}

/*
 * game_float_calc_0d6a20  0x8c0d6a20
 * area name: game code; nothing names its area yet; behaviour name: floating-point arithmetic
 * called by: game_uses_set_timeout_120_mode6_0e4348
 */
u32 game_float_calc_0d6a20(u32 *a0) {
    a0[0xc] = *a0;
    a0[0xd] = 0x44ed8000;
    a0[0xe] = 0x4445c000;
    if (360.0 <= (float)a0[0xc]) {
        if (2140.0 < (float)a0[0xc]) {
            a0[0xc] = 0x4505c000;
        }
    } else {
        a0[0xc] = 0x43b40000;
    }
    a0[8] = *a0;
    a0[9] = a0[1];
    a0[10] = 0x44458000;
    a0[0x19] = 4;
    return 100;
}

/*
 * game_vec_0d6aac  0x8c0d6aac
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_vec_0d6c18, game_vec_0dca2c
 */
u32 game_vec_0d6aac(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_fr1;
    double dVar1;
    double dVar2;
    double dVar3;
    u64 in_dr4;
    float in_fr6;
    float in_fr15;
    u32 in_fr14;
    double in_xd14;
    bool bVar4;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    *(int *)(a0 + 0x30) = (int)((u64)in_dr4 >> 0x20);
    *(int *)(a0 + 0x34) = (int)in_dr4;
    *(float *)(a0 + 0x38) = in_fr6;
    (**(code **)(*(int *)(a0 + 0xa8) + 0xc))((int *)(a0 + 0xa8), a1, a2, a3);
    if (cVar6 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)(a0 + 0x30), in_fr1);
        in_fr15 = in_fr6;
    } else {
        in_xd14 = (double)CONCAT44(in_fr6, in_fr1);
        dVar1 = *(double *)(a0 + 0x30);
    }
    if (cVar5 == '\0') {
        bVar4 = in_fr15 < (float)((u64)dVar1 >> 0x20);
    } else {
        bVar4 = (double)CONCAT44(in_fr14, in_fr15) < dVar1;
    }
    if (bVar4) {
        if (cVar6 == '\0') {
            *(float *)(a0 + 0x30) = in_fr15;
        } else {
            *(double *)(a0 + 0x30) = in_xd14;
        }
    }
    (**(code **)(*(int *)(a0 + 200) + 0xc))((int *)(a0 + 200), a1, a2, a3);
    if (cVar6 == '\0') {
        dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x30), SUB84(dVar1, 0));
        in_fr15 = (float)((u64)dVar1 >> 0x20);
        dVar1 = in_xd14;
    } else {
        dVar2 = *(double *)(a0 + 0x30);
    }
    if (cVar5 == '\0') {
        bVar4 = (float)((u64)dVar2 >> 0x20) < in_fr15;
    } else {
        bVar4 = dVar2 < (double)CONCAT44(in_fr14, in_fr15);
    }
    if (bVar4) {
        if (cVar6 == '\0') {
            *(float *)(a0 + 0x30) = in_fr15;
        } else {
            *(double *)(a0 + 0x30) = dVar1;
        }
    }
    (**(code **)(*(int *)(a0 + 0x68) + 0xc))((int *)(a0 + 0x68), a1, a2, a3);
    if (cVar6 == '\0') {
        dVar3 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar2, 0));
        in_fr15 = (float)((u64)dVar2 >> 0x20);
        dVar2 = dVar1;
    } else {
        dVar3 = *(double *)(a0 + 0x34);
    }
    if (cVar5 == '\0') {
        bVar4 = in_fr15 < (float)((u64)dVar3 >> 0x20);
    } else {
        bVar4 = (double)CONCAT44(in_fr14, in_fr15) < dVar3;
    }
    if (bVar4) {
        if (cVar6 == '\0') {
            *(float *)(a0 + 0x34) = in_fr15;
        } else {
            *(double *)(a0 + 0x34) = dVar2;
        }
    }
    (**(code **)(*(int *)(a0 + 0x88) + 0xc))((int *)(a0 + 0x88), a1, a2, a3);
    if (cVar6 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar3, 0));
        in_fr15 = (float)((u64)dVar3 >> 0x20);
        dVar3 = dVar2;
    } else {
        dVar1 = *(double *)(a0 + 0x34);
    }
    if (cVar5 == '\0') {
        bVar4 = (float)((u64)dVar1 >> 0x20) < in_fr15;
    } else {
        bVar4 = dVar1 < (double)CONCAT44(in_fr14, in_fr15);
    }
    if (bVar4) {
        if (cVar6 == '\0') {
            *(float *)(a0 + 0x34) = in_fr15;
        } else {
            *(double *)(a0 + 0x34) = dVar3;
        }
    }
    (**(code **)(*(int *)(a0 + 0xe8) + 8))((int *)(a0 + 0xe8), a1, a2, a3);
    if (cVar6 == '\0') {
        dVar2 = (double)CONCAT44(*(u32 *)(a0 + 0x34), SUB84(dVar1, 0));
        in_fr15 = (float)((u64)dVar1 >> 0x20);
        dVar1 = dVar3;
    } else {
        dVar2 = *(double *)(a0 + 0x34);
    }
    if (cVar5 == '\0') {
        bVar4 = (float)((u64)dVar2 >> 0x20) < in_fr15;
    } else {
        bVar4 = dVar2 < (double)CONCAT44(in_fr14, in_fr15);
    }
    if (bVar4) {
        if (cVar6 == '\0') {
            *(float *)(a0 + 0x34) = in_fr15;
            *(float *)(a0 + 0x24) = in_fr15;
        } else {
            *(double *)(a0 + 0x34) = dVar1;
            *(double *)(a0 + 0x24) = dVar1;
        }
    }
    game_vec_0d66d8(a0, a1, a2, a3);
    if (cVar6 == '\0') {
        *(u32 *)(a0 + 0x24) = *(u32 *)(a0 + 0x34);
    } else {
        *(u64 *)(a0 + 0x24) = *(u64 *)(a0 + 0x34);
    }
    *(u32 *)(a0 + 0x60) = 0;
    *(u32 *)(a0 + 100) = 5;
    return 100;
}

/*
 * game_vec_0d6c18  0x8c0d6c18
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: input_uses_input_not_l_and_r_0dc558
 */
u32 game_vec_0d6c18(int a0, u32 a1, u32 a2, u32 a3) {
    u64 in_dr0;
    double dVar1;
    float in_fr15;
    u32 in_fr14;
    u64 in_xd14;
    bool bVar2;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    game_vec_0d6aac(a0, a1, a2, a3);
    (**(code **)(*(int *)(a0 + 0xe8) + 8))((int *)(a0 + 0xe8), a1, a2, a3);
    if (cVar4 == '\0') {
        dVar1 = (double)CONCAT44(*(u32 *)(a0 + 0x34), (int)in_dr0);
        in_fr15 = (float)((u64)in_dr0 >> 0x20);
        in_dr0 = in_xd14;
    } else {
        dVar1 = *(double *)(a0 + 0x34);
    }
    if (cVar3 == '\0') {
        bVar2 = (float)((u64)dVar1 >> 0x20) < in_fr15;
    } else {
        bVar2 = dVar1 < (double)CONCAT44(in_fr14, in_fr15);
    }
    if (bVar2) {
        if (cVar4 == '\0') {
            *(float *)(a0 + 0x34) = in_fr15;
            *(float *)(a0 + 0x24) = in_fr15;
        } else {
            *(u64 *)(a0 + 0x34) = in_dr0;
            *(u64 *)(a0 + 0x24) = in_dr0;
        }
    }
    *(u32 *)(a0 + 100) = 6;
    return 100;
}

/*
 * game_vec_0d6c9c  0x8c0d6c9c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12bb08_vec_0d6264, game_vec_0d6920
 */
u32 game_vec_0d6c9c(u32 *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar5_00;
    float in_fr1;
    u64 in_dr4;
    u64 in_dr6;
    u64 in_xd0;
    char cVar1;
    char cVar2;

    cVar2 = '\0';
    cVar1 = '\0';
    *a0 = (int)((u64)in_dr4 >> 0x20);
    a0[1] = (int)in_dr4;
    a0[2] = (int)((u64)in_dr6 >> 0x20);
    ar5_00 = Vec3_assign(a0 + 0xc, a0, a2, a3);
    Vec3_assign(a0 + 8, ar5_00, a2, a3);
    if (cVar2 == '\0') {
        in_fr1 = (float)a0[10];
    } else {
        in_xd0 = *(u64 *)(a0 + 10);
    }
    if (cVar1 == '\0') {
        in_fr1 = in_fr1 - 1.0;
    } else {
        in_fr1 = SUB84((double)CONCAT44(0x3f800000, in_fr1) - (double)CONCAT44(0x3f800000, in_fr1), 0);
    }
    if (cVar2 == '\0') {
        a0[10] = in_fr1;
    } else {
        *(u64 *)(a0 + 10) = in_xd0;
    }
    Vec3_assign_f(a0 + 4, ar5_00, a2, a3);
    Vec3_assign_f(a0 + 0x10, ar5_00, a2, a3);
    a0[0x18] = 0;
    if (cVar2 == '\0') {
        a0[0x14] = 0;
    } else {
        *(u64 *)(a0 + 0x14) = (u64)(u32)in_fr1;
    }
    a0[0x19] = 0;
    return 100;
}

/*
 * game_vec_0d6d58  0x8c0d6d58
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12c394_vec_0d64a0
 */
u32 game_vec_0d6d58(int a0, u32 a1, u32 a2, u32 a3) {
    u64 uVar1;
    u32 uVar2;
    u32 ar6_00;
    float fVar3;
    u64 in_dr0;
    code *pcVar5;
    double dVar4;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u8 auStack_3c[16];
    float fStack_2c;
    float fStack_28;
    float fStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    u32 uStack_10;

    cVar7 = '\0';
    cVar6 = '\0';
    uVar2 = a1;
    ar6_00 = a2;
    Vec3_ctor_zero(&uStack_1c, a1, a2);
    Vec3_ctor_zero(&fStack_2c, uVar2, ar6_00);
    if (g_8c437c80 == '\0') {
        in_dr0 = in_dr0 & 0xffffffff;
        uVar1 = in_dr0;
        if (cVar7 == '\0') {
            g_8c437c7c = g_8c437c7c & 0xffffffff00000000;
            uVar1 = g_8c437c7c;
        }
        g_8c437c7c = uVar1;
        g_8c437c7c = CONCAT14(1, g_8c437c7c);
    }
    if (g_8c437c88 == '\0') {
        in_dr0 = in_dr0 & 0xffffffff;
        uVar1 = in_dr0;
        if (cVar7 == '\0') {
            g_8c437c84 = g_8c437c84 & 0xffffffff00000000;
            uVar1 = g_8c437c84;
        }
        g_8c437c84 = uVar1;
        g_8c437c84 = CONCAT14(1, g_8c437c84);
    }
    Vec3_sub(a2, a1, ar6_00, a3, auStack_3c);
    Vec3_assign(&uStack_1c, auStack_3c, ar6_00, a3);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_3c, 0xffffffff, ar6_00, a3);
    Vec3_length_sq(&uStack_1c, uVar2, ar6_00, a3);
    uVar1 = in_dr0;
    if (cVar7 == '\0') {
        g_8c437c7c = CONCAT44(g_8c437c80, (int)(in_dr0 >> 0x20));
        uVar1 = g_8c437c7c;
    }
    g_8c437c7c = uVar1;
    (**(code **)(*(int *)(a0 + 0x11c) + 8))((int *)(a0 + 0x11c), uVar2, ar6_00, a3);
    fVar3 = (float)(in_dr0 >> 0x20);
    if (cVar7 == '\0') {
        g_8c437c84 = CONCAT44(g_8c437c88, fVar3);
        pcVar5 = (code *)0x3f000000;
        in_dr0 = in_xd0;
    } else {
        fVar3 = 0.5;
        pcVar5 = Vec3_length;
        g_8c437c84 = in_dr0;
    }
    if (cVar6 == '\0' && (float)pcVar5 < fVar3) {
        Vec3_length(&uStack_1c, uVar2, ar6_00, a3);
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(uStack_1c, g_8c437c84);
        } else {
            dVar4 = (double)CONCAT44(uStack_18, uStack_1c);
            in_dr0 = g_8c437c84;
        }
        if (cVar6 == '\0') {
            fStack_2c = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fStack_2c = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(uStack_18, g_8c437c84);
        } else {
            fStack_2c = (float)in_dr0;
            dVar4 = (double)CONCAT44(uStack_14, uStack_18);
            in_dr0 = g_8c437c84;
        }
        if (cVar6 == '\0') {
            fStack_28 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fStack_28 = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(uStack_14, g_8c437c84);
        } else {
            fStack_28 = (float)in_dr0;
            dVar4 = (double)CONCAT44(uStack_10, uStack_14);
            in_dr0 = g_8c437c84;
        }
        if (cVar6 == '\0') {
            fStack_24 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fStack_24 = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar7 != '\0') {
            fStack_24 = (float)in_dr0;
            uStack_20 = (u32)(in_dr0 >> 0x20);
        }
        Vec3_add_assign(a1, &fStack_2c);
        Vec3_dtor(&fStack_2c, 0xffffffff, ar6_00, a3);
        Vec3_dtor(&uStack_1c, 0xffffffff, ar6_00, a3);
        uVar2 = 2;
    } else {
        Vec3_assign(a1, a2, ar6_00, a3);
        Vec3_dtor(&fStack_2c, 0xffffffff, ar6_00, a3);
        Vec3_dtor(&uStack_1c, 0xffffffff, ar6_00, a3);
        uVar2 = 4;
    }
    return uVar2;
}

/*
 * set_fields_0_4_8_0d6ee0  0x8c0d6ee0
 * stores +0x0, +0x4, +0x8
 */
u32 *set_fields_0_4_8_0d6ee0(u32 *a0) {
    *a0 = 0x43160000;
    a0[1] = 0;
    a0[2] = 0;
    return a0;
}

/*
 * free_if_nonnull_wrap_0d6ef8  0x8c0d6ef8
 */
int free_if_nonnull_wrap_0d6ef8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * game_vec_0d6f28  0x8c0d6f28
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 *game_vec_0d6f28(u32 *a0, u32 a1, u32 a2, u32 a3) {
    Vec3_ctor_zero(a0 + 1, a1, a2);
    Vec3_set_zero(a0 + 5);
    *a0 = 0;
    clear_3_words(a0 + 5, a1, a2, a3);
    return a0;
}

/*
 * game_release_0d6f68  0x8c0d6f68
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 */
int game_release_0d6f68(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        object_dtor_delete(a0 + 0x14, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0 + 4, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_uses_rand_0d6fb8  0x8c0d6fb8
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: CTexture_uses_set_field_2c_wrap_0e810c
 */
u32 *game_uses_rand_0d6fb8(int *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *puVar2;
    int ar4_00;
    float fVar3;
    double dVar4;
    u64 in_xd0;
    char cVar5;
    char cVar6;

    cVar6 = '\0';
    cVar5 = '\0';
    puVar2 = NULL;
    if (*a0 != 0) {
        ar4_00 = *a0;
        iVar1 = get_field_24_05c284(ar4_00, a1);
        if ((iVar1 == 0) || (iVar1 == 0xf)) {
            puVar2 = (u32 *)clear_3_words(a0 + 5, a1, a2, a3);
        } else {
            iVar1 = rand();
            if (cVar6 == '\0') {
                dVar4 = (double)CONCAT44(0x47000000, (float)iVar1);
            } else {
                dVar4 = 1.4411521857012367e+18;
            }
            if (cVar5 == '\0') {
                fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 / dVar4, 0);
            }
            if (cVar6 == '\0') {
                dVar4 = (double)CONCAT44(0x43b40000, fVar3);
            } else {
                dVar4 = -5629500670083072.0;
            }
            if (cVar5 == '\0') {
                fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 * dVar4, 0);
            }
            if (cVar6 == '\0') {
                dVar4 = (double)CONCAT44(0xc3340000, fVar3);
            } else {
                dVar4 = -8.132627540887082e-251;
            }
            if (cVar5 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            if (cVar6 == '\0') {
                a0[6] = (int)fVar3;
            } else {
                *(u64 *)(a0 + 6) = in_xd0;
            }
            iVar1 = rand();
            if (cVar6 == '\0') {
                dVar4 = (double)CONCAT44(0x47000000, (float)iVar1);
            } else {
                dVar4 = 1.4411521857012367e+18;
            }
            if (cVar5 == '\0') {
                fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 / dVar4, 0);
            }
            if (cVar6 == '\0') {
                dVar4 = (double)CONCAT44(0x43b40000, fVar3);
            } else {
                dVar4 = -5629500670083072.0;
            }
            if (cVar5 == '\0') {
                fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 * dVar4, 0);
            }
            puVar2 = &g_8c0d7058;
            if (cVar6 == '\0') {
                dVar4 = (double)CONCAT44(0xc3340000, fVar3);
            } else {
                dVar4 = -8.132627540887082e-251;
            }
            if (cVar5 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            if (cVar6 == '\0') {
                a0[7] = (int)fVar3;
            } else {
                *(u64 *)(a0 + 7) = in_xd0;
            }
        }
    }
    return puVar2;
}

/*
 * game_uses_Vec3_ctor_zero_0d7060  0x8c0d7060
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Vec3_ctor_zero
 */
int game_uses_Vec3_ctor_zero_0d7060(int a0, u32 a1, u32 a2, u32 a3) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    clear_field_0_wrap_015ab8(a0);
    Vec3_ctor_zero(a0 + 4, a1, a2);
    Vec3_ctor_zero(a0 + 0x14, a1, a2);
    Vec3_set_zero(a0 + 0x24);
    Class_129938_ctor(a0 + 0x30, a1, a2);
    Class_129938_ctor(a0 + 0xc4, a1, a2);
    *(u32 *)(a0 + 0x164) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x158) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x158) = CONCAT44(0x3f800000, extraout_fr1);
    }
    game_copy_0d7314(a0, a1, a2, a3);
    return a0;
}

/*
 * CWaterTank_copy_0d70e4  0x8c0d70e4
 * area name: only called from CWaterTank methods; behaviour name: mostly calls copy functions
 * called by: CWaterTank_CreateStage
 */
u32 CWaterTank_copy_0d70e4(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = game_copy_0d7314(a0, a1, a2, a3);
    return uVar1;
}

/*
 * Class_12b930_uses_Vec3_set_zero_0d7100  0x8c0d7100
 * area name: only called from Class_12b930 methods; behaviour name: its main named callee is Vec3_set_zero
 * called by: Class_12b930_m1_0de1dc
 */
u32 Class_12b930_uses_Vec3_set_zero_0d7100(int a0) {
    u32 uVar1;
    int a5;
    u8 *ar6_00;
    int a7;
    u8 auStack_14[16];

    ar6_00 = auStack_14;
    Vec3_set_zero(auStack_14);
    a7 = a0 + 0x30;
    a5 = a0 + 4;
    (**(code **)(*(int *)(a0 + 0xc4) + 0xc))((int *)(a0 + 0xc4), a5, auStack_14, a7);
    Class_12b930_float_calc_0d7154(a0);
    uVar1 = object_dtor_delete(auStack_14, 0xffffffff, ar6_00, a7);
    return uVar1;
}

/*
 * Class_12b930_float_calc_0d7154  0x8c0d7154
 * area name: only called from Class_12b930 methods; behaviour name: floating-point arithmetic
 * called by: Class_12b930_m2_0de3d4, Class_12b930_uses_Vec3_set_zero_0d7100
 */
u8 *Class_12b930_float_calc_0d7154(int a0) {
    u8 *puVar1;
    float fVar2;

    if ((*(int *)(a0 + 0x164) == 2) &&
        (fVar2 = *(float *)(a0 + 0x2c) - 1.5, *(float *)(a0 + 0x2c) = fVar2, fVar2 < 0.0)) {
        *(u32 *)(a0 + 0x2c) = 0;
        *(u32 *)(a0 + 0x164) = 0;
    }
    puVar1 = *(u8 **)(a0 + 0x160);
    if (puVar1 == NULL) {
        fVar2 = *(float *)(a0 + 0x15c) + 0.05;
        *(float *)(a0 + 0x15c) = fVar2;
        puVar1 = NULL;
        if (0.0 < fVar2) {
            *(u32 *)(a0 + 0x15c) = 0;
            puVar1 = (u8 *)0x160;
            *(u32 *)(a0 + 0x160) = 2;
        }
    } else if (puVar1 == (u8 *)0x1) {
        fVar2 = *(float *)(a0 + 0x15c) - 0.05;
        *(float *)(a0 + 0x15c) = fVar2;
        puVar1 = &g_8c0d7238;
        if (fVar2 < -1.0) {
            *(u32 *)(a0 + 0x15c) = 0xbf800000;
            puVar1 = (u8 *)0x160;
            *(u32 *)(a0 + 0x160) = 3;
        }
    }
    return puVar1;
}

/*
 * game_uses_set_field_164_0d723c  0x8c0d723c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_field_164
 * called by: game_uses_stick_x_right_half_0e1f90
 */
int game_uses_set_field_164_0d723c(int a0) {
    int iVar1;
    u32 in_fr1;
    u32 extraout_fr1;
    char cVar2;

    cVar2 = '\0';
    iVar1 = *(int *)(a0 + 0x168);
    if (0 < iVar1) {
        iVar1 = *(int *)(a0 + 0x168) + -1;
        *(int *)(a0 + 0x168) = iVar1;
        if (iVar1 == 0) {
            iVar1 = set_field_164(a0, 0);
            in_fr1 = extraout_fr1;
        }
    }
    if (cVar2 == '\0') {
        *(u32 *)(a0 + 0x2c) = 0;
    } else {
        *(u64 *)(a0 + 0x2c) = (u64)in_fr1;
    }
    return iVar1;
}

/*
 * set_field_164  0x8c0d7288
 * called by: game_uses_set_field_164_0d723c, game_uses_set_field_164_0d74cc
 */
int set_field_164(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x164;
    *(u32 *)(0x164 + a0) = a1;
    return iVar1;
}

/*
 * Class_12b930_calls_test_0d7294  0x8c0d7294
 * area name: only called from Class_12b930 methods; behaviour name: its callees mostly do: test
 * called by: Class_12b930_m1_0de1dc
 */
int Class_12b930_calls_test_0d7294(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar1 = *(int *)(0x160 + a0);
    if (iVar1 == 0) {
    LAB_8c0d72c0:
        iVar2 = game_test_0d75a0(a0, a1, a2, a3);
        iVar1 = 0x160;
        if (iVar2 == 1) {
            *(u32 *)(0x160 + a0) = 1;
            iVar2 = iVar1;
        }
    } else {
        if (iVar1 != 1) {
            if (iVar1 == 2)
                goto LAB_8c0d72c0;
            if (iVar1 != 3) {
                return iVar1;
            }
        }
        iVar2 = game_test_0d75a0(a0, a1, a2, a3);
        iVar1 = 0x160;
        if (iVar2 == 0) {
            *(u32 *)(0x160 + a0) = 0;
            iVar2 = iVar1;
        }
    }
    return iVar2;
}

/*
 * game_copy_0d7314  0x8c0d7314
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: CWaterTank_copy_0d70e4, game_uses_Vec3_ctor_zero_0d7060, game_uses_get_field_38_0dfbdc
 */
u32 game_copy_0d7314(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    clear_3_words(a0 + 0x24, a1, unused_a2, a3);
    *(u32 *)(a0 + 0x168) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x15c) = 0;
    } else {
        *(u64 *)(a0 + 0x15c) = (u64)extraout_fr1;
    }
    *(u32 *)(a0 + 0x160) = 2;
    return 0x160;
}

/*
 * game_draw_0d7354  0x8c0d7354
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_noop_0de6d0
 */
u32 game_draw_0d7354(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar4_00;
    u32 uStack_18;
    uStack_18 = *(u32 *)(a0 + 0x15c);
    uVar1 = g_8c13f53c;
    gfx_set_color4_4aa52c(&uStack_18);
    ar4_00 = 0;
    matrix_push(0, a1, a2, a3, uVar1);
    touch_fields_30_3c_wrap();
    rotate_degrees();
    game_draw_015b30(a0, a1, a2, a3);
    matrix_pop_n(1);
    uVar1 = gfx_set_color4_4aa52c(&stack0xffffffd8);
    return uVar1;
}

/*
 * game_draw_0d7410  0x8c0d7410
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0df668, game_uses_color_set_white_a0_0df250, game_uses_noop_0deb60, game_uses_noop_0def78
 */
u32 game_draw_0d7410(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar4_00;
    u32 uStack_18;
    uStack_18 = *(u32 *)(a0 + 0x15c);
    uVar1 = g_8c13f55c;
    gfx_set_color4_4aa52c(&uStack_18);
    ar4_00 = 0;
    matrix_push(0, a1, a2, a3, uVar1);
    touch_fields_30_3c_wrap();
    rotate_degrees();
    Class_129938_draw_015af8(a0, a1, a2, a3);
    matrix_pop_n(1);
    uVar1 = gfx_set_color4_4aa52c(&stack0xffffffd8);
    return uVar1;
}

/*
 * game_uses_set_field_164_0d74cc  0x8c0d74cc
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_field_164
 * called by: game_uses_stick_x_right_half_0e1f90
 */
u32 game_uses_set_field_164_0d74cc(int a0) {
    u32 in_fr4;
    u32 in_PR;
    char cVar1;

    cVar1 = '\0';
    set_field_164(a0, 1);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x2c) = in_fr4;
    } else {
        *(u64 *)(a0 + 0x2c) = CONCAT44(in_PR, in_fr4);
    }
    *(u32 *)(a0 + 0x168) = 0x1e;
    return 0x168;
}

/*
 * game_sound_0d7508  0x8c0d7508
 * area name: game code; nothing names its area yet; behaviour name: mostly calls sound functions
 * called by: input_uses_edge_detect_update_0e2a14, input_uses_edge_detect_update_0e3210
 */
u32 *game_sound_0d7508(int a0, u32 a1, u32 a2) {
    u32 *puVar1;
    int iVar2;
    u32 ar6_00;
    float fVar3;
    double dVar4;
    float fVar5;
    char cVar6;
    char cVar7;
    u32 auStack_c[2];

    cVar7 = '\0';
    cVar6 = '\0';
    auStack_c[0] = 0xffffffff;
    puVar1 = *(u32 **)(a0 + 0x164);
    if (puVar1 == NULL) {
        iVar2 = rand();
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
        } else {
            dVar4 = 5.2386908071071214e-11;
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 / dVar4, 0);
        }
        puVar1 = &g_8c0d7588;
        if (cVar7 == '\0') {
            fVar5 = 0.1;
        } else {
            fVar3 = 0.1;
            fVar5 = -1.3200388e-31;
        }
        if (cVar6 != '\0' || fVar3 <= fVar5) {
            auStack_c[0] = se_open_bank1(0x8c2b59d0);
            ar6_00 = 0x12;
            se_play(0x8c2b59d0, auStack_c[0], 0x12);
            se_close_port_handle(0x8c2b59d0, auStack_c);
            *(u32 *)(a0 + 0x164) = 2;
            puVar1 = &g_8c0d759c;
            if (cVar7 == '\0') {
                *(u32 *)(a0 + 0x2c) = 0x40400000;
            } else {
                *(u64 *)(a0 + 0x2c) = 0x4f222fe640400000;
            }
        }
    }
    return puVar1;
}

/*
 * game_test_0d75a0  0x8c0d75a0
 * area name: game code; nothing names its area yet; behaviour name: returns the result of a comparison
 * called by: Class_12b930_calls_test_0d7294
 */
u32 game_test_0d75a0(int a0, float *a1, int a2, u32 a3) {
    float fVar1;
    float fVar2;
    char cVar3;
    char cVar4;
    float fStack_68;
    float fStack_64;
    float fStack_60;
    float fStack_44;
    float fStack_40;
    float fStack_34;
    float fStack_30;
    float fStack_24;
    float fStack_20;

    cVar4 = '\0';
    cVar3 = '\0';
    (**(code **)(*(int *)(a0 + 0xc4) + 0x38))((int *)(a0 + 0xc4), &fStack_68, a2, a3);
    fVar1 = fStack_24;
    if (cVar4 == '\0') {
        fVar1 = *(float *)(a2 + 8);
        fStack_20 = fStack_24;
    }
    if (cVar3 != '\0' || fVar1 <= fStack_20) {
        fVar1 = fStack_68;
        fVar2 = fStack_64;
        if (cVar4 == '\0') {
            fVar1 = *a1;
            fVar2 = fStack_68;
        }
        if (cVar3 != '\0' || fVar2 <= fVar1) {
            fVar1 = fStack_44;
            if (cVar4 == '\0') {
                fVar1 = *a1;
                fStack_40 = fStack_44;
            }
            if (cVar3 != '\0' || fVar1 <= fStack_40) {
                fVar1 = fStack_34;
                if (cVar4 == '\0') {
                    fVar1 = a1[1];
                    fStack_30 = fStack_34;
                }
                if (cVar3 != '\0' || fStack_30 <= fVar1) {
                    fVar1 = fStack_64;
                    if (cVar4 == '\0') {
                        fVar1 = a1[1];
                        fStack_60 = fStack_64;
                    }
                    if (cVar3 != '\0' || fVar1 <= fStack_60) {
                        return 1;
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}

/*
 * game_init_fields_0d761c  0x8c0d761c
 * area name: game code; nothing names its area yet; behaviour name: writes 4 members
 * called by: game_calls_init_fields_0d7688, game_uses_rand_0d8bf0
 */
u32 *game_init_fields_0d761c(u32 *a0) {
    a0[2] = 0x3f800000;
    a0[1] = 0x3f800000;
    *a0 = 0x3f800000;
    a0[3] = 0x3f800000;
    a0[4] = 0x3e6b851f;
    return a0;
}

/*
 * set_5_floats  0x8c0d7668
 * stores fr4..fr8 into five consecutive floats
 * called by: CGame_uses_global_list_push_0e99e4
 */
u32 *set_5_floats(u32 *a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr7;
    u32 in_fr6;
    u32 in_fr8;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    a0[2] = in_fr6;
    a0[3] = in_fr7;
    a0[4] = in_fr8;
    return a0;
}

/*
 * game_calls_init_fields_0d7688  0x8c0d7688
 * area name: game code; nothing names its area yet; behaviour name: its callees mostly do: init_fields
 * called by: Class_12b580_uses_Vec3_ctor_zero_0d7f18
 */
u32 *game_calls_init_fields_0d7688(u32 *a0) {
    game_init_fields_0d761c(a0 + 3);
    *a0 = 0;
    a0[1] = 0;
    a0[9] = 0;
    a0[2] = 0;
    return a0;
}

/*
 * free_if_nonnull_wrap_0d76b8  0x8c0d76b8
 * called by: CGame_uses_global_list_push_0e99e4, Class_12bea8_release_0d8128
 */
int free_if_nonnull_wrap_0d76b8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_12b580_init_fields_0d76e8  0x8c0d76e8
 * area name: only called from Class_12b580 methods; behaviour name: writes 31 members
 * called by: Class_12b580_ctor
 */
u32 Class_12b580_init_fields_0d76e8(void) {
    g_8c4377fc = 0;
    0x8c4377fc [1] = 0;
    0x8c4377fc [2] = 0;
    0x8c4377fc [3] = 0x7f;
    0x8c4377fc [4] = 0x7f;
    0x8c4377fc [5] = 0x7f;
    0x8c4377fc [6] = 0x7f;
    0x8c4377fc [7] = 0;
    0x8c4377fc [8] = (short)0x80;
    0x8c4377fc [9] = 0;
    0x8c4377fc [10] = (short)0x80;
    0x8c4377fc [0xb] = 0x7f;
    0x8c4377fc [0xc] = (short)0xff;
    0x8c4377fc [0xd] = 0x7f;
    0x8c4377fc [0xe] = (short)0xff;
    0x8c4377fc [0xf] = 0;
    0x8c4377fc [0x10] = 0;
    0x8c4377fc [0x11] = (short)0x80;
    0x8c4377fc [0x12] = 0;
    0x8c4377fc [0x13] = (short)0xff;
    0x8c4377fc [0x14] = 0x7f;
    0x8c4377fc [0x15] = (short)0xff;
    0x8c4377fc [0x16] = 0x7f;
    0x8c4377fc [0x17] = (short)0x80;
    0x8c4377fc [0x18] = (short)0x80;
    0x8c4377fc [0x19] = (short)0x80;
    0x8c4377fc [0x1a] = (short)0x80;
    0x8c4377fc [0x1b] = (short)0xff;
    0x8c4377fc [0x1c] = (short)0xff;
    0x8c4377fc [0x1d] = (short)0xff;
    0x8c4377fc [0x1e] = (short)0xff;
    0x8c4377fc [0x1f] = (short)0x80;
    return 0x3e;
}

/*
 * game_vec_0d77d8  0x8c0d77d8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
int *game_vec_0d77d8(int *a0, u32 a1, u32 a2, u32 a3) {
    game_vec_0146f8(a0, a1, a2, a3);
    *a0 = (int)(&DATA_8c12bea8);
    (**(code **)(*a0 + 0x14))(a0, a1, a2, a3);
    return a0;
}

/*
 * Class_129808_dtor  0x8c0d780c
 * stores the vtable 0x8c129808
 * called by: Class_12bea8_dtor
 */
u32 *Class_129808_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c129808;
        Vec3_dtor(a0 + 5, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0 + 1, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12bea8_m1_0d7860  0x8c0d7860
 */
double *Class_12bea8_m1_0d7860(int *a0, u32 a1, u32 a2, u32 a3) {
    double *pdVar1;
    int iVar2;
    int *ar4_00;
    int *ar5_00;
    u32 in_fr1;
    double dVar3;
    double dVar4;
    u32 in_fr4;
    float fVar5;
    u64 in_dr14;
    u64 in_xd14;
    bool bVar6;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    dVar4 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), in_fr4);
    pdVar1 = (double *)a0[0xc];
    if (pdVar1 == NULL) {
        ar5_00 = a0 + 5;
        ar4_00 = a0 + 1;
        Vec3_add_assign(ar4_00, ar5_00);
        pdVar1 = (double *)(a0 + 2);
        if (cVar8 == '\0') {
            dVar3 = (double)CONCAT44(*(int *)pdVar1, in_fr1);
        } else {
            dVar3 = *pdVar1;
        }
        if (cVar7 == '\0') {
            bVar6 = (float)((u64)dVar3 >> 0x20) < SUB84(dVar4, 0);
        } else {
            bVar6 = dVar3 < dVar4;
        }
        if (bVar6) {
            if (cVar8 == '\0') {
                dVar3 = (double)CONCAT44(0x3f000000, SUB84(dVar3, 0));
            } else {
                dVar3 = -7.532505566649672e-251;
            }
            if (cVar7 == '\0') {
                fVar5 = SUB84(dVar4, 0) + (float)((u64)dVar3 >> 0x20);
            } else {
                fVar5 = SUB84(dVar4 + dVar3, 0);
            }
            if (cVar8 == '\0') {
                a0[2] = (int)fVar5;
            } else {
                *(u64 *)(a0 + 2) = in_xd14;
            }
            iVar2 = rand();
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
            } else {
                dVar4 = 409.60016536712646;
            }
            if (cVar7 == '\0') {
                fVar5 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
            } else {
                fVar5 = SUB84(dVar4 / dVar4, 0);
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(0x4079999a, fVar5);
            } else {
                dVar4 = 2.99393119985475e-78;
            }
            if (cVar7 == '\0') {
                iVar2 = (int)(SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20));
            } else {
                iVar2 = (int)(dVar4 * dVar4);
            }
            a0[0xd] = iVar2;
            pdVar1 = (double *)0x1;
            a0[0xc] = 1;
        }
    } else if (pdVar1 == (double *)0x1) {
        pdVar1 = (double *)0x2;
        a0[0xc] = 2;
    } else if (pdVar1 == (double *)0x2) {
        pdVar1 = (double *)(**(code **)(*a0 + 0x14))(a0, a1, a2, a3);
    }
    return pdVar1;
}

/*
 * Class_12bea8_uses_Class_129808_m2_0d7900  0x8c0d7900
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: its main named callee is
 * Class_129808_m2_0148d8 called by: game_uses_get_field_10_0d89d8
 */
int Class_12bea8_uses_Class_129808_m2_0d7900(int a0, u32 a1, u32 a2) {
    int iVar1;
    float *ar5_00;
    u32 ar5_01;
    u32 *ar6_00;
    u32 ar6_01;
    u32 ar7_00;
    u8 auStack_90[68];
    u32 uStack_4c;
    float fStack_3c;
    u32 uStack_38;
    float fStack_34;
    float fStack_30;
    u32 uStack_2c;
    float fStack_28;
    float fStack_24;
    u32 uStack_20;
    float fStack_1c;
    float fStack_18;
    u32 uStack_14;
    float fStack_10;

    fStack_3c = *(float *)(a0 + 4) - 12.0;
    uStack_38 = *(u32 *)(a0 + 8);
    fStack_34 = *(float *)(a0 + 0xc) - 12.0;
    fStack_30 = *(float *)(a0 + 4) - 12.0;
    uStack_2c = *(u32 *)(a0 + 8);
    fStack_28 = *(float *)(a0 + 0xc) + 12.0;
    fStack_24 = *(float *)(a0 + 4) + 12.0;
    uStack_20 = *(u32 *)(a0 + 8);
    fStack_1c = *(float *)(a0 + 0xc) + 12.0;
    fStack_18 = *(float *)(a0 + 4) + 12.0;
    uStack_14 = *(u32 *)(a0 + 8);
    fStack_10 = *(float *)(a0 + 0xc) - 12.0;
    uStack_4c = g_8c13f59c;
    ar7_00 = 4;
    ar6_00 = &uStack_4c;
    ar5_00 = &fStack_3c;
    Class_129808_copy_01642c(auStack_90, ar5_00, ar6_00, 4);
    iVar1 = *(int *)(a0 + 0x30);
    if (iVar1 == 0) {
        iVar1 = Class_129808_m2_0148d8(a0);
    } else if (iVar1 == 1) {
        obj_set_texlist(a1, ar5_00, ar6_00);
        obj_set_texture_num(a1, a2);
        ar6_01 = 4;
        CSquid_update_fields_0164c8(auStack_90, &g_8c4377fc + *(int *)(a0 + 0x34) * 0x10, 4);
        ar5_01 = 0x80000060;
        set_field_14_0d1450(auStack_90, 0x80000060);
        iVar1 = Class_129808_calc_016524(auStack_90, ar5_01, ar6_01, ar7_00);
    }
    return iVar1;
}

/*
 * Class_12bea8_m3_0d7ac0  0x8c0d7ac0
 */
u32 Class_12bea8_m3_0d7ac0(int a0) {
    u32 uVar1;

    *(u32 *)(a0 + 0x34) = 0;
    *(u32 *)(a0 + 0x30) = 0;
    uVar1 = Class_129808_m3_014978(a0);
    return uVar1;
}

/*
 * Class_12bea8_uses_set_fields_c_10_0d7af8  0x8c0d7af8
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: its main named callee is
 * set_fields_c_10 called by: Class_12b580_uses_Vec3_ctor_zero_0d7f18
 */
int Class_12bea8_uses_set_fields_c_10_0d7af8(int a0, u32 a1, u32 a2) {
    u32 ar5_00;
    ar5_00 = a1;
    Class_12c394_uses_linear_map_set_range_0d63f8(a0 + 0x1c);
    Class_12c394_uses_linear_map_set_range_0d63f8(a0 + 0x30);
    set_fields_c_10(a0, ar5_00, a2);
    Class_12bea8_copy_0d7dcc(a0);
    return a0;
}

/*
 * Class_12bea8_copy_0d7b44  0x8c0d7b44
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: WEATHRE_UNIT_CreateGraphics
 */
u32 Class_12bea8_copy_0d7b44(u32 a0) {
    u32 uVar1;

    uVar1 = Class_12bea8_copy_0d7dcc(a0);
    return uVar1;
}

/*
 * Class_12bea8_uses_libgcc_divide_helper_0d7b60  0x8c0d7b60
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: its main named callee is
 * libgcc_divide_helper_0103d0 called by: Class_12b580_uses_rand_0d8710
 */
u32 Class_12bea8_uses_libgcc_divide_helper_0d7b60(int *a0, u32 a1, u32 a2, u32 a3) {
    float fVar1;
    u32 uVar2;
    u32 uVar3;
    int *a4;
    int iVar4;
    u32 uVar5;
    u32 *puVar6;
    u32 *puVar7;
    double in_dr0;
    float fVar8;
    u64 in_dr4;
    u64 in_dr6;
    u64 in_dr8;
    u64 uVar9;
    u64 in_xd14;
    float in_PR;
    int iVar10;
    int ar5_00;
    char cVar11;
    char cVar12;
    u32 in_stack_00000000;
    u32 auStack_5c[4];
    u32 uStack_4c;
    u32 uStack_48;
    u32 auStack_40[4];
    float fStack_30;
    float fStack_2c;
    float fStack_28;

    cVar12 = '\0';
    cVar11 = '\0';
    puVar7 = auStack_5c + 1;
    auStack_5c[1] = (u32)((u64)in_dr4 >> 0x20);
    auStack_5c[2] = (u32)in_dr4;
    auStack_5c[3] = (u32)((u64)in_dr6 >> 0x20);
    uStack_4c = (u32)in_dr6;
    uStack_48 = (u32)((u64)in_dr8 >> 0x20);
    uVar9 = (u64)in_stack_00000000;
    iVar4 = 0;
    uVar2 = 0;
    if (*a0 != 0) {
        fStack_28 = in_PR;
        (**(code **)(a0[7] + 8))(a0 + 7, a1, a2, a3);
        fStack_2c = SUB84(in_dr0, 0);
        fVar8 = (float)((u64)in_dr0 >> 0x20);
        fVar1 = fVar8;
        if (cVar12 == '\0') {
            fStack_2c = fVar8;
            fVar1 = fStack_28;
        }
        fStack_28 = fVar1;
        if (cVar11 == '\0') {
            iVar10 = (int)fVar8;
        } else {
            iVar10 = (int)in_dr0;
        }
        (**(code **)(a0[0xc] + 8))(a0 + 0xc, a1, a2, a3);
        fStack_30 = SUB84(in_dr0, 0);
        fVar8 = (float)((u64)in_dr0 >> 0x20);
        fVar1 = fVar8;
        if (cVar12 == '\0') {
            fStack_30 = fVar8;
            fVar1 = fStack_2c;
        }
        fStack_2c = fVar1;
        if (cVar11 == '\0') {
            ar5_00 = (int)fVar8;
        } else {
            ar5_00 = (int)in_dr0;
        }
        uVar2 = libgcc_divide_helper_0103d0(a0[1], ar5_00);
        if (uVar2 == 0) {
            uVar5 = 0;
            auStack_40[2] = 0;
            while ((uVar2 = a0[4], uVar5 < uVar2 && (iVar4 <= iVar10))) {
                puVar7[7] = uVar5;
                uVar3 = get_field_2c_0d7ca8((puVar7[7] * 8 - puVar7[7]) * 8 + a0[3]);
                puVar7[9] = uVar3;
                if (puVar7[9] == 0) {
                    puVar7[6] = uVar5;
                    if (cVar12 == '\0') {
                        puVar6 = puVar7 + 0xffffffff;
                        puVar7[0xffffffff] = (int)uVar9;
                    } else {
                        puVar6 = puVar7 + 0xfffffffe;
                        *(u64 *)(puVar7 + 0xfffffffe) = in_xd14;
                    }
                    a4 = (int *)((*(int *)((int)puVar6 + 0x1c) * 8 - *(int *)((int)puVar6 + 0x1c)) * 8 + a0[3]);
                    (**(code **)(*a4 + 8))(a4, ar5_00, a2, a3);
                    puVar7 = (u32 *)((int)puVar6 + 4);
                    *(u32 *)((int)puVar6 + 0x18) = uVar5;
                    set_field_2c_to_1((*(int *)((int)puVar6 + 0x18) * 8 - *(int *)((int)puVar6 + 0x18)) * 8 + a0[3]);
                    iVar4 = iVar4 + 1;
                }
                uVar5 = uVar5 + 1;
            }
        }
    }
    return uVar2;
}

/*
 * set_field_2c_to_1  0x8c0d7ca0
 * called by: Class_12bea8_uses_libgcc_divide_helper_0d7b60
 */
u32 set_field_2c_to_1(int a0) {
    *(u32 *)(a0 + 0x2c) = 1;
    return 1;
}

/*
 * get_field_2c_0d7ca8  0x8c0d7ca8
 * called by: Class_12bea8_uses_get_field_2c_0d7cb0, Class_12bea8_uses_libgcc_divide_helper_0d7b60,
 * game_uses_get_field_10_0d89d8
 */
u32 get_field_2c_0d7ca8(int a0) {
    return *(u32 *)(a0 + 0x2c);
}

/*
 * Class_12bea8_uses_get_field_2c_0d7cb0  0x8c0d7cb0
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: its main named callee is
 * get_field_2c_0d7ca8 called by: Class_12b580_uses_rand_0d8710
 */
int *Class_12bea8_uses_get_field_2c_0d7cb0(int *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int *piVar2;
    u32 uVar3;
    float fVar4;
    u64 in_dr0;
    u64 uVar5;
    u64 in_xd0;
    char cVar6;
    char cVar7;
    u64 uStack_30;
    u64 uStack_28;

    cVar7 = '\0';
    cVar6 = '\0';
    piVar2 = NULL;
    if (*a0 != 0) {
        for (uVar3 = 0; fVar4 = (float)in_dr0, uVar3 < (u32)a0[4]; uVar3 = uVar3 + 1) {
            iVar1 = get_field_2c_0d7ca8(uVar3 * 0x38 + a0[3]);
            if (iVar1 == 1) {
                piVar2 = (int *)(uVar3 * 0x38 + a0[3]);
                (**(code **)(*piVar2 + 0xc))(piVar2, a1, a2, a3);
            }
        }
        a0[1] = a0[1] + 1;
        piVar2 = (int *)*a0;
        if (piVar2 == (int *)0x1) {
            if (cVar7 == '\0') {
                fVar4 = (float)a0[5];
            } else {
                in_xd0 = *(u64 *)(a0 + 5);
            }
            if (cVar6 == '\0') {
                fVar4 = fVar4 + 1.0;
            } else {
                fVar4 = SUB84((double)CONCAT44(0x3f800000, fVar4) + (double)CONCAT44(0x3f800000, fVar4), 0);
            }
            uStack_28 = in_xd0;
            if (cVar7 == '\0') {
                uStack_28 = CONCAT44(a0, fVar4);
            }
            if (cVar7 == '\0') {
                *(u32 *)(uStack_28._4_4_ + 0x14) = (u32)uStack_28;
                uVar5 = CONCAT44(a0[6], (u32)uStack_28);
            } else {
                *(u64 *)(uStack_28._4_4_ + 0x14) = uStack_28;
                uVar5 = *(u64 *)(a0 + 6);
            }
            piVar2 = a0 + 6;
            if (cVar6 == '\0' && (float)((u64)uVar5 >> 0x20) < (float)uVar5) {
                g_8c437c8c = a0[1];
                if (cVar7 == '\0') {
                    a0[5] = a0[6];
                } else {
                    *(u64 *)(a0 + 5) = *(u64 *)(a0 + 6);
                }
                piVar2 = (int *)0x2;
                *a0 = 2;
            }
        } else if (piVar2 == (int *)0x2) {
            piVar2 = (int *)a0[2];
            if (piVar2 < (int *)a0[1]) {
                piVar2 = (int *)0x3;
                *a0 = 3;
            }
        } else if (piVar2 == (int *)0x3) {
            if (cVar7 == '\0') {
                fVar4 = (float)a0[5];
            } else {
                in_xd0 = *(u64 *)(a0 + 5);
            }
            if (cVar6 == '\0') {
                fVar4 = fVar4 - 1.0;
            } else {
                fVar4 = SUB84((double)CONCAT44(0x3f800000, fVar4) - (double)CONCAT44(0x3f800000, fVar4), 0);
            }
            uStack_30 = in_xd0;
            if (cVar7 == '\0') {
                uStack_30 = CONCAT44(a0, fVar4);
            }
            if (cVar7 == '\0') {
                *(float *)(uStack_30._4_4_ + 0x14) = (float)uStack_30;
                uVar5 = CONCAT44((float)uStack_30, fVar4);
            } else {
                *(u64 *)(uStack_30._4_4_ + 0x14) = uStack_30;
                uVar5 = uStack_30;
            }
            fVar4 = (float)uVar5;
            piVar2 = NULL;
            if (cVar7 == '\0') {
                fVar4 = (float)uStack_30;
            }
            if (cVar6 == '\0' && fVar4 < 0.0) {
                if (cVar7 == '\0') {
                    a0[5] = 0;
                } else {
                    *(u64 *)(a0 + 5) = (u64)(u32)fVar4;
                }
                piVar2 = NULL;
                *a0 = 0;
            }
        }
    }
    return piVar2;
}

/*
 * Class_12bea8_copy_0d7dcc  0x8c0d7dcc
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: mostly calls copy functions
 * called by: Class_12bea8_copy_0d7b44, Class_12bea8_uses_set_fields_c_10_0d7af8, game_copy_0d92b0
 */
u32 Class_12bea8_copy_0d7dcc(u32 *a0) {
    u32 uVar1;
    u32 in_fr1;
    u32 extraout_fr1;
    char cVar2;

    cVar2 = '\0';
    for (uVar1 = 0; uVar1 < (u32)a0[4]; uVar1 = uVar1 + 1) {
        clear_field_2c(uVar1 * 0x38 + a0[3]);
        in_fr1 = extraout_fr1;
    }
    a0[2] = 4100000000;
    *a0 = 0;
    a0[1] = 0;
    if (cVar2 == '\0') {
        a0[5] = 0;
    } else {
        *(u64 *)(a0 + 5) = (u64)in_fr1;
    }
    return 0;
}

/*
 * Class_12bea8_uses_set_flags_14_60_0d7e24  0x8c0d7e24
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: its callees mostly do:
 * uses_set_flags_14_60 called by: WEATHRE_UNIT_CreateGraphics
 */
u32 Class_12bea8_uses_set_flags_14_60_0d7e24(int a0, u32 a1, u32 a2) {
    u32 uVar1;

    for (uVar1 = 0; uVar1 < *(u32 *)(a0 + 0x10); uVar1 = uVar1 + 1) {
        game_uses_set_flags_14_60_0149dc(uVar1 * 0x38 + *(int *)(a0 + 0xc), a1, a2);
    }
    return *(u32 *)(a0 + 0x10);
}

/*
 * set_fields_c_10  0x8c0d7e78
 * stores +0xc, +0x10
 * called by: Class_12bea8_uses_set_fields_c_10_0d7af8
 */
u32 set_fields_c_10(int a0, u32 a1, u32 a2) {
    u32 in_r0;

    *(u32 *)(a0 + 0xc) = a1;
    *(u32 *)(a0 + 0x10) = a2;
    return in_r0;
}

/*
 * Class_12bea8_uses_linear_map_set_range_0d7e80  0x8c0d7e80
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: its main named callee is
 * linear_map_set_range called by: WEATHRE_UNIT_CreateGraphics
 */
u32 Class_12bea8_uses_linear_map_set_range_0d7e80(int a0, u32 a1, u32 a2, u32 a3, int s0, int s4) {
    u32 uVar1;
    u32 in_fr1;
    double dVar2;
    char cVar3;
    char cVar4;

    cVar4 = '\0';
    cVar3 = '\0';
    linear_map_set_range(a0 + 0x1c);
    uVar1 = linear_map_set_range(a0 + 0x30);
    if (cVar3 == '\0') {
        dVar2 = (double)CONCAT44((float)s4, in_fr1);
    } else {
        dVar2 = (double)s4;
    }
    if (cVar4 == '\0') {
        *(int *)(a0 + 0x18) = (int)((u64)dVar2 >> 0x20);
    } else {
        *(double *)(a0 + 0x18) = dVar2;
    }
    return uVar1;
}

/*
 * Class_12bea8_init_fields_0d7f04  0x8c0d7f04
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: writes 3 members
 * called by: game_uses_rand_0d8bf0
 */
u32 Class_12bea8_init_fields_0d7f04(u32 *a0, u32 a1) {
    *a0 = 1;
    a0[2] = a1;
    a0[1] = 0;
    a0[5] = 0;
    return 0;
}

/*
 * Class_12b580_uses_Vec3_ctor_zero_0d7f18  0x8c0d7f18
 * name hint from a string it uses: 66 JUNGLE RAIN 5; area name: only called from Class_12b580 methods; behaviour name:
 * its main named callee is Vec3_ctor_zero called by: Class_12b580_ctor
 */
u32 *Class_12b580_uses_Vec3_ctor_zero_0d7f18(u32 *a0, u32 a1, u32 a2) {
    code *ar5_00;
    code *ar6_00;
    u32 uVar1;
    u32 in_fr1;
    u64 uVar2;
    char cVar3;

    cVar3 = '\0';
    Vec3_ctor_zero(a0 + 2, a1, a2);
    Vec3_ctor_zero(a0 + 6, a1, a2);
    Vec3_set_zero(a0 + 10);
    color_set_white(a0 + 0xd);
    game_calls_init_fields_0d7688(a0 + 0x14);
    Class_12bea8_uses_set_fields_c_10_0d7af8(a0 + 0x1e, a0 + 0x2f, 500);
    vec_new_array(a0 + 0x2f, game_vec_0d77d8, Class_12bea8_dtor, 0x38, 500);
    uVar1 = 0x18;
    ar6_00 = free_if_nonnull_wrap_0cffc8;
    ar5_00 = game_init_fields_02145c;
    vec_new_array(a0 + 0x1b88, game_init_fields_02145c, free_if_nonnull_wrap_0cffc8, 0x18, 2);
    Class_129908_ctor(a0 + 0x1b94, ar5_00);
    game_copy_0d92b0(a0);
    if (cVar3 == '\0') {
        a0[6] = 0x3f800000;
    } else {
        *(u64 *)(a0 + 6) = CONCAT44(0x3f800000, in_fr1);
    }
    if (cVar3 == '\0') {
        a0[7] = 0;
    } else {
        *(u64 *)(a0 + 7) = (u64)in_fr1;
    }
    uVar2 = (u64)in_fr1;
    if (cVar3 == '\0') {
        a0[8] = 0;
    } else {
        *(u64 *)(a0 + 8) = uVar2;
    }
    Vec3_assign(a0 + 2, a0 + 6, ar6_00, uVar1);
    if (cVar3 == '\0') {
        uVar1 = (u32)uVar2;
        a0[0xb] = 0x41700000;
    } else {
        uVar1 = 0x41700000;
        *(u64 *)(a0 + 0xb) = 0x3e4ccccd41700000;
    }
    if (cVar3 == '\0') {
        a0[0xe] = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0xe) = CONCAT44(0x3f800000, uVar1);
    }
    if (cVar3 == '\0') {
        a0[0xf] = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0xf) = CONCAT44(0x3f800000, uVar1);
    }
    if (cVar3 == '\0') {
        a0[0x10] = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x10) = CONCAT44(0x3f800000, uVar1);
    }
    if (cVar3 == '\0') {
        a0[0x11] = 0x3f800000;
        a0[0x12] = 0x3e4ccccd;
    } else {
        *(u64 *)(a0 + 0x11) = CONCAT44(0x3f800000, uVar1);
        *(u64 *)(a0 + 0x12) = 0x8c13f3083e4ccccd;
    }
    *a0 = 0;
    a0[0x1b88] = PTR_s_66_JUNGLE_RAIN_5_8c13f308;
    a0[0x1b8e] = PTR_s_68_JUNGLE_THUNDER_8c13f30c;
    a0[0x1b91] = 0;
    if (cVar3 == '\0') {
        a0[0x1b87] = 0x41000000;
    } else {
        *(u64 *)(a0 + 0x1b87) = 0x4f222fe641000000;
    }
    return a0;
}

/*
 * Class_12bea8_dtor  0x8c0d8094
 * stores the vtable 0x8c12bea8
 */
u32 *Class_12bea8_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12bea8;
        ar5_00 = 0;
        Class_129808_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12bea8_release_0d80dc  0x8c0d80dc
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: mostly calls release
 * functions called by: Class_12b580_release_0e6114
 */
int Class_12bea8_release_0d80dc(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Class_12c3a4_dtor(a0 + 0x30, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Class_12c3a4_dtor(a0 + 0x1c, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12bea8_release_0d8128  0x8c0d8128
 * area name: sits between Class_12bea8 functions (same compilation unit); behaviour name: mostly calls release
 * functions called by: Class_12b580_release_0e6114
 */
int Class_12bea8_release_0d8128(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_0d76b8(a0 + 0xc, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * free_if_nonnull_wrap_0d8168  0x8c0d8168
 * called by: Class_12b580_release_0e6114, Class_12c1f0_m0_0f4108
 */
int free_if_nonnull_wrap_0d8168(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * WEATHRE_UNIT_CreateGraphics  0x8c0d8198
 * called by: Class_12b580_uses_WEATHRE_UNIT_CreateGraphics_0e62cc, game_uses_Vec3_dtor_0cb29c
 * strings: "GRAPHICS\\ENV"; "WeatherUnit.pvm"; "WEATHRE_UNIT::CreateGraphics()"; "Failed to load tex.."
 */
u32 WEATHRE_UNIT_CreateGraphics(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar4_00;
    u32 uVar1;
    u8 *ar5_00;
    u8 *ar6_00;
    u32 ar7_00;
    int iVar2;

    uVar1 = 0;
    game_draw_0d82f0(a0, 0);
    thunk_FUN_8c20a1d0(0x8c43786c);
    ninja_draw_257120(0xfffafafa);
    for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
        *(u32 *)(0x6e64 + iVar2 * 0xc + a0) = 0;
    }
    ar4_00 = get_field_4_0253e4(a0 + 0x6e50, uVar1, a2, a3);
    ar7_00 = 1;
    iVar2 = a0 + 0x6e60;
    uVar1 = 0x8c4312a8;
    ptr_list_build_1c(ar4_00, iVar2, 0x8c4312a8, 1);
    uVar1 = get_field_4_0253e4(a0 + 0x6e50, iVar2, uVar1, ar7_00);
    ar6_00 = "GRAPHICS\\ENV";
    ar5_00 = "WeatherUnit.pvm";
    iVar2 = retry_until_done_020f90(a1, ar5_00, ar6_00, uVar1);
    if (iVar2 == 0) {
        uVar1 = 2;
        ar6_00 = NULL;
        ar5_00 = "WEATHRE_UNIT::CreateGraphics()";
        (*(code *)(&report_error_message))("Failed to load tex..", ar5_00, 0, 2);
    }
    Class_12bea8_copy_0d7b44(a0 + 0x78);
    uVar1 = 0x5a;
    Class_12bea8_uses_linear_map_set_range_0d7e80(a0 + 0x78, 1, 0xf, 0x5a, 1, 0xb4);
    uVar1 = Class_12bea8_uses_set_flags_14_60_0d7e24(a0 + 0x78, 0xf666666, 0x6333333);
    return uVar1;
}

/*
 * game_draw_0d82f0  0x8c0d82f0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: Class_12b580_uses_pack_acquire_entry_handle_0d84e8, WEATHRE_UNIT_CreateGraphics, game_draw_0d8400
 */
u32 game_draw_0d82f0(u32 unused_a0, u32 a1) {
    u32 uVar1;
    u32 in_fr1;
    u64 uVar2;
    double dVar3;
    u64 in_dr4;
    float fVar4;
    float fVar5;
    double dVar6;
    u64 in_xd0;
    bool bVar7;
    char cVar8;
    char cVar9;

    cVar9 = '\0';
    cVar8 = '\0';
    fVar4 = (float)((u64)in_dr4 >> 0x20);
    if (g_8c437c98 == '\0') {
        g_8c437c94 = fVar4 + 7980.0;
        in_fr1 = 0x45f96000;
        g_8c437c98 = CONCAT31(DAT_8c437c98_1, 1);
    }
    if (a1 < 36000) {
        fVar5 = (float)(int)a1;
        if (fVar5 < 0.0) {
            fVar5 = fVar5 + 4.2949673e+09;
        }
    } else {
        fVar5 = (float)(int)(72000 - a1);
        if (fVar5 < 0.0) {
            fVar5 = fVar5 + 4.2949673e+09;
        }
    }
    dVar6 = (double)CONCAT44(fVar4, fVar5 / 4500.0);
    uVar2 = CONCAT44(0x3f800000, in_fr1);
    if (1.0 < fVar5 / 4500.0) {
        dVar6 = (double)CONCAT44(fVar4, 0x3f800000);
    }
    Class_12c3a4_m0_1029d0(0x8c437b28);
    if (cVar9 == '\0') {
        g_8c437c9c = CONCAT44(g_8c437ca0, (int)((u64)uVar2 >> 0x20));
        dVar3 = (double)CONCAT44(0x45034000, (int)uVar2);
    } else {
        dVar3 = -1.3608465208426776e-249;
        g_8c437c9c = uVar2;
    }
    fVar4 = (float)((u64)dVar6 >> 0x20);
    if (cVar8 == '\0') {
        bVar7 = (float)((u64)dVar3 >> 0x20) < fVar4;
    } else {
        bVar7 = dVar3 < dVar6;
    }
    if (bVar7) {
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(0x45034000, SUB84(dVar3, 0));
        } else {
            dVar3 = -1.3608465208426776e-249;
        }
        if (cVar8 == '\0') {
            dVar6 = (double)CONCAT44(fVar4 - (float)((u64)dVar3 >> 0x20), SUB84(dVar6, 0));
        } else {
            dVar6 = dVar6 - dVar3;
        }
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(0x45034000, (int)g_8c437c9c);
        } else {
            dVar3 = -1.3608465208426776e-249;
        }
        if (cVar8 == '\0') {
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20),
                                     SUB84(dVar6, 0));
        } else {
            dVar6 = dVar6 + dVar3 * dVar3;
        }
        fVar4 = (float)((u64)dVar6 >> 0x20);
        g_8c437c90 = fVar4;
        if (cVar9 != '\0') {
            g_8c437c90 = SUB84(dVar6, 0);
            g_8c437c94 = fVar4;
        }
    } else {
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(0x45034000, (int)g_8c437c9c);
        } else {
            dVar6 = -1.3608465208426776e-249;
            in_xd0 = g_8c437c9c;
        }
        if (cVar8 == '\0') {
            g_8c437c90 = SUB84(dVar6, 0) * (float)((u64)dVar6 >> 0x20);
        } else {
            g_8c437c90 = SUB84(dVar6 * dVar6, 0);
        }
        if (cVar9 != '\0') {
            g_8c437c90 = (float)in_xd0;
            g_8c437c94 = (float)((u64)in_xd0 >> 0x20);
        }
    }
    uVar1 = pvr_draw_235f84(0x8c43786c);
    return uVar1;
}

/*
 * game_draw_0d8400  0x8c0d8400
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_uses_rotate_degrees_7c_on_field_9_0e68f4
 */
u32 game_draw_0d8400(void) {
    u32 r4;
    u32 uVar1;

    uVar1 = 0;
    game_draw_0d82f0(r4, 0);
    thunk_FUN_8c20a1d0(0x8c43786c);
    uVar1 = ninja_draw_257120(0xfffafafa);
    return uVar1;
}

/*
 * game_draw_0d8444  0x8c0d8444
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0e6988
 */
u32 game_draw_0d8444(void) {
    u32 uVar1;

    uVar1 = pvr_draw_235ee4();
    return uVar1;
}

/*
 * noop_0d8458  0x8c0d8458
 * called by: game_uses_Vec3_dtor_0cb29c, scene_load_textures_like
 */
u32 noop_0d8458(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0d845c  0x8c0d845c
 * called by: scene_release_textures_like
 */
u32 noop_0d845c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * pack_release_entries_6e24  0x8c0d8460
 * releases the pack entry handles at +0x6e24 and +0x6e3c when set
 * called by: game_uses_call_all_list_a8_0e6d24
 */
int pack_release_entries_6e24(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    if (*(int *)(0x6e24 + a0) != -1) {
        (*(code *)(&pack_release_entry_handle))(0x8c2b59d0, *(u32 *)(0x6e24 + a0), a2, a3);
    }
    iVar1 = *(int *)(0x6e3c + a0);
    if (iVar1 != -1) {
        iVar1 = (*(code *)(&pack_release_entry_handle))(0x8c2b59d0, *(u32 *)(0x6e3c + a0), a2, a3);
    }
    return iVar1;
}

/*
 * pack_update_fields_0d84a8  0x8c0d84a8
 * area name: sits between pack functions (same compilation unit); behaviour name: conditionally writes members
 * called by: game_sound_0e6d80
 */
int pack_update_fields_0d84a8(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = *(int *)(0x6e24 + a0);
    if (iVar1 != -1) {
        uVar2 = (*(code *)(&pack_acquire_entry_handle))(0x8c2b59d0, *(u32 *)(0x6e20 + a0), a2, a3);
        iVar1 = 0x6e24;
        *(u32 *)(0x6e24 + a0) = uVar2;
    }
    return iVar1;
}

/*
 * Class_12b580_uses_pack_acquire_entry_handle_0d84e8  0x8c0d84e8
 * area name: only called from Class_12b580 methods; behaviour name: its main named callee is pack_acquire_entry_handle
 * called by: Class_12b580_m1_0e634c
 */
u32 Class_12b580_uses_pack_acquire_entry_handle_0d84e8(u32 *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u64 *puVar2;
    u32 uVar3;
    u64 in_dr0;
    float fVar4;
    u32 in_fr14;
    bool bVar5;
    char cVar6;
    char cVar7;

    cVar7 = '\0';
    cVar6 = '\0';
    if (g_8c437ca4 == '\0') {
        in_dr0 = CONCAT44(0x3e8f5c29, (int)in_dr0);
        g_8c437ca0 = 0x3e8f5c29;
        g_8c437ca4 = CONCAT31(DAT_8c437ca4_1, 1);
    }
    fVar4 = 0.0;
    Class_12b580_uses_rand_0d8710(a0, a1, a2, a3);
    if (a0[1] == 0) {
        iVar1 = game_vec_0d8aa0(a0, *a0);
        puVar2 = (u64 *)(iVar1 * 0x14 + 0x8c43957c);
        if (cVar7 == '\0') {
            a0[0xe] = *(u32 *)puVar2;
        } else {
            *(u64 *)(a0 + 0xe) = *puVar2;
        }
        puVar2 = (u64 *)(iVar1 * 0x14 + 0x8c439580);
        if (cVar7 == '\0') {
            a0[0xf] = *(u32 *)puVar2;
        } else {
            *(u64 *)(a0 + 0xf) = *puVar2;
        }
        puVar2 = (u64 *)(iVar1 * 0x14 + 0x8c439584);
        if (cVar7 == '\0') {
            a0[0x10] = *(u32 *)puVar2;
        } else {
            *(u64 *)(a0 + 0x10) = *puVar2;
        }
        puVar2 = (u64 *)(iVar1 * 0x14 + 0x8c439588);
        if (cVar7 == '\0') {
            a0[0x11] = *(u32 *)puVar2;
        } else {
            *(u64 *)(a0 + 0x11) = *puVar2;
        }
        puVar2 = (u64 *)(iVar1 * 0x14 + 0x8c43958c);
        if (cVar7 == '\0') {
            a0[0x12] = *(u32 *)puVar2;
            in_dr0 = CONCAT44(g_8c437ca0, a0[0x12]);
        } else {
            *(u64 *)(a0 + 0x12) = *puVar2;
            in_dr0 = CONCAT44(g_8c437ca4, g_8c437ca0);
        }
        if (cVar6 == '\0' && (float)((u64)in_dr0 >> 0x20) < (float)in_dr0) {
            if (cVar7 == '\0') {
                in_dr0 = CONCAT44(g_8c437ca0, (float)in_dr0);
                a0[0x12] = g_8c437ca0;
            } else {
                in_dr0 = CONCAT44(g_8c437ca4, g_8c437ca0);
                *(u64 *)(a0 + 0x12) = in_dr0;
            }
        }
    } else if (a0[1] == 1) {
        if (cVar7 == '\0') {
            a0[0xe] = a0[0x17];
            a0[0xf] = a0[0x18];
            a0[0x10] = a0[0x19];
            a0[0x11] = a0[0x1a];
            in_dr0 = CONCAT44(a0[0x1b], (int)in_dr0);
            a0[0x12] = a0[0x1b];
        } else {
            *(u64 *)(a0 + 0xe) = *(u64 *)(a0 + 0x17);
            *(u64 *)(a0 + 0xf) = *(u64 *)(a0 + 0x18);
            *(u64 *)(a0 + 0x10) = *(u64 *)(a0 + 0x19);
            *(u64 *)(a0 + 0x11) = *(u64 *)(a0 + 0x1a);
            in_dr0 = *(u64 *)(a0 + 0x1b);
            *(u64 *)(a0 + 0x12) = in_dr0;
        }
        if (((a0[0x1c] == 1) && (a0[0x1d] == 0)) && (a0[0x1b8f] == -1)) {
            uVar3 = pack_acquire_entry_handle(0x8c2b59d0, a0[0x1b8e], a2, a3);
            a0[0x1b8f] = uVar3;
        }
        if (((a0[0x1c] == 0) && (a0[0x1b8f] != -1)) && (a0[0x1b91] == 0)) {
            pack_release_entry_handle(0x8c2b59d0, a0[0x1b8f], a2, a3);
            a0[0x1b8f] = 0xffffffff;
        }
        if (a0[0x1b89] != -1) {
            a3 = a0[0x1b8a];
            a2 = 0;
            pack_sound_021d90(0x8c2b59d0, a0[0x1b89], 0, a3);
        }
    }
    uVar3 = *a0;
    game_draw_0d82f0(a0, uVar3);
    if (cVar7 == '\0') {
        fVar4 = (float)((u64)in_dr0 >> 0x20);
    }
    if (cVar6 == '\0') {
        bVar5 = fVar4 < 1.0;
    } else {
        bVar5 = (double)CONCAT44(in_fr14, fVar4) < (double)CONCAT44(0x3f800000, (int)in_dr0);
    }
    if (bVar5) {
        uVar3 = pvr_draw_235f14();
    } else {
        uVar3 = pvr_draw_235ee4();
    }
    return uVar3;
}

/*
 * Class_12b580_uses_rand_0d8710  0x8c0d8710
 * area name: only called from Class_12b580 methods; behaviour name: its callees mostly do: uses_rand
 * called by: Class_12b580_m2_0e6548, Class_12b580_uses_pack_acquire_entry_handle_0d84e8
 */
u32 Class_12b580_uses_rand_0d8710(u32 *a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar5_00;
    u64 *puVar3;
    char cVar4;
    u64 uStack_24;

    cVar4 = '\0';
    if (*a0 == 0) {
        game_uses_rand_0d8890(a0, a1, a2, a3);
    }
    ar5_00 = *a0;
    iVar1 = game_uses_rand_0d8bf0(a0, ar5_00, a2, a3);
    if (cVar4 == '\0') {
        puVar3 = (u64 *)((int)&uStack_24 + 4);
        uStack_24 = CONCAT44(a0[0x1b87], (u32)uStack_24);
    } else {
        uStack_24 = *(u64 *)(a0 + 0x1b87);
        puVar3 = &uStack_24;
    }
    Class_12bea8_uses_libgcc_divide_helper_0d7b60(a0 + 0x1e, ar5_00, a2, a3);
    Class_12bea8_uses_get_field_2c_0d7cb0(a0 + 0x1e, ar5_00, a2, a3);
    if ((iVar1 == 0) || (iVar1 == 1)) {
        a0[1] = 0;
    } else {
        a0[1] = 1;
    }
    if (a0[1] == 0) {
        *(u32 **)((int)puVar3 + 8) = a0;
        **(int **)((int)puVar3 + 8) = **(int **)((int)puVar3 + 8) + 1;
    }
    uVar2 = 72000;
    if (71999 < *a0) {
        uVar2 = 0;
        *a0 = 0;
    }
    return uVar2;
}

/*
 * game_uses_njCalcVector_like_0d8808  0x8c0d8808
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is njCalcVector_like
 * called by: Class_12b580_draw_0e660c
 */
u32 game_uses_njCalcVector_like_0d8808(int a0) {
    u32 r7;
    u32 uVar1;
    u32 *ar5_00;
    u8 *ar6_00;
    u32 in_stack_ffffffe0;
    u32 uStack_14;
    u32 uStack_10;
    u32 uStack_c;

    ar6_00 = &stack0xffffffe0;
    uStack_14 = *(u32 *)(a0 + 0x18);
    uStack_10 = *(u32 *)(a0 + 0x1c);
    uStack_c = *(u32 *)(a0 + 0x20);
    ar5_00 = &uStack_14;
    uVar1 = 0;
    njCalcVector_like(0, ar5_00, &stack0xffffffe0, r7, in_stack_ffffffe0);
    gfxlib_float_calc_219038();
    set_vec3_g_278744();
    uVar1 = gfxlib_calc_219070();
    return uVar1;
}

/*
 * game_uses_rand_0d8890  0x8c0d8890
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: Class_12b580_uses_rand_0d8710
 */
u32 game_uses_rand_0d8890(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *ar5_00;
    u32 ar5_01;
    double dVar4;
    float fVar5;
    u32 in_fr14;
    bool bVar6;
    char cVar7;
    char cVar8;
    u8 auStack_18[2];
    u8 uStack_16;

    cVar8 = '\0';
    cVar7 = '\0';
    fVar5 = 0.2;
    ar5_00 = auStack_18;
    rtc_get_date_wrap(a1, ar5_00, a2, a3);
    switch (uStack_16) {
    case 1:
    case 2:
    case 0xb:
    case 0xc:
        if (cVar8 == '\0') {
            fVar5 = 0.1;
        }
        break;
    default:
        if (cVar8 == '\0') {
            fVar5 = 0.2;
        }
        break;
    case 6:
    case 7:
        if (cVar8 == '\0') {
            fVar5 = 0.5;
        }
    }
    iVar1 = rand();
    if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000, (float)iVar1);
    } else {
        dVar4 = 3.05573279121701e-310;
    }
    if (cVar7 == '\0') {
        bVar6 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20) < fVar5;
    } else {
        bVar6 = dVar4 / dVar4 < (double)CONCAT44(in_fr14, fVar5);
    }
    if (bVar6) {
        *(u32 *)(a0 + 0x58) = 1;
        uVar2 = rand();
        ar5_01 = 0x3840;
        uVar3 = libgcc_divide_helper_0103d0(uVar2, 0x3840);
        *(u32 *)(a0 + 0x50) = uVar3;
        if (*(u32 *)(a0 + 0x50) < 0x1c20) {
            *(u32 *)(a0 + 0x50) = 0x1c20;
        }
        iVar1 = rand();
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x47000000, (float)iVar1);
        } else {
            dVar4 = 3.05573279121701e-310;
        }
        if (cVar7 == '\0') {
            fVar5 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        } else {
            fVar5 = SUB84(dVar4 / dVar4, 0);
        }
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x44610000, fVar5);
        } else {
            dVar4 = 3.5336950296991835e+72;
        }
        if (cVar7 == '\0') {
            fVar5 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
        } else {
            fVar5 = SUB84(dVar4 * dVar4, 0);
        }
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x44610000, fVar5);
        } else {
            dVar4 = 3.5336950296991835e+72;
        }
        if (cVar7 == '\0') {
            fVar5 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar5 = SUB84(dVar4 + dVar4, 0);
        }
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x4f000000, fVar5);
        } else {
            dVar4 = -9.046259633960061e+74;
        }
        if (cVar7 == '\0' && (float)((u64)dVar4 >> 0x20) < SUB84(dVar4, 0)) {
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(0xcf800000, SUB84(dVar4, 0));
            } else {
                dVar4 = 2.9939323502132253e-78;
            }
            if (cVar7 == '\0') {
                fVar5 = (float)((u64)dVar4 >> 0x20);
                dVar4 = (double)CONCAT44(fVar5, SUB84(dVar4, 0) + fVar5);
            } else {
                dVar4 = dVar4 + dVar4;
            }
        }
        if (cVar7 == '\0') {
            iVar1 = (int)SUB84(dVar4, 0);
        } else {
            iVar1 = (int)dVar4;
        }
        uVar2 = 0x54;
        *(int *)(a0 + 0x54) = iVar1;
    } else {
        uVar2 = 0x58;
        *(u32 *)(a0 + 0x58) = 0;
    }
    return uVar2;
}

/*
 * game_uses_get_field_10_0d89d8  0x8c0d89d8
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_10_0d8a98
 * called by: Class_12b580_draw_0e660c
 */
int game_uses_get_field_10_0d89d8(int a0, int a1) {
    u32 r6;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar1 = get_field_10_0d8a98(a0 + 0x78);
    iVar2 = get_field_c_0d8a90(a0 + 0x78);
    iVar3 = get_field_0_0d8a88(a0 + 0x78);
    if (iVar3 != 0) {
        for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
            iVar3 = get_field_2c_0d7ca8(iVar4 * 0x38 + iVar2);
            if (iVar3 == 1) {
                r6 = 0;
                a1 = a0 + 0x6e50;
                iVar3 = Class_12bea8_uses_Class_129808_m2_0d7900(iVar4 * 0x38 + iVar2, a1, 0);
            }
        }
    }
    return iVar3;
}

/*
 * get_field_0_0d8a88  0x8c0d8a88
 * called by: game_uses_get_field_10_0d89d8
 */
u32 get_field_0_0d8a88(u32 *a0) {
    return *a0;
}

/*
 * get_field_c_0d8a90  0x8c0d8a90
 * called by: game_uses_get_field_10_0d89d8
 */
u32 get_field_c_0d8a90(int a0) {
    return *(u32 *)(a0 + 0xc);
}

/*
 * get_field_10_0d8a98  0x8c0d8a98
 * called by: game_uses_get_field_10_0d89d8
 */
u32 get_field_10_0d8a98(int a0) {
    return *(u32 *)(a0 + 0x10);
}

/*
 * game_vec_0d8aa0  0x8c0d8aa0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: Class_12b580_uses_pack_acquire_entry_handle_0d84e8
 */
int game_vec_0d8aa0(int a0, int a1) {
    u32 r6;
    u32 r7;
    int iVar1;
    u32 in_fr1;
    u64 uVar2;
    double dVar3;
    float fVar4;
    float fVar5;
    u64 in_dr14;
    u32 uVar7;
    double dVar6;
    u64 in_xd14;
    bool bVar8;
    int ar7_00;
    int ar6_00;
    int ar5_00;
    char cVar9;
    char cVar10;
    u32 in_stack_ffffff8c;
    u32 uStack_70;
    u32 uStack_6c;
    u32 uStack_68;
    u32 uStack_64;
    u32 uStack_60;
    u32 uStack_5c;
    u32 auStack_58[17];

    uVar7 = (u32)((u64)in_dr14 >> 0x20);
    cVar10 = '\0';
    cVar9 = '\0';
    njGetMatrix(auStack_58, a1, r6, r7, in_stack_ffffff8c);
    if (cVar10 == '\0') {
        uStack_64 = *(u32 *)(a0 + 8);
        uStack_60 = *(u32 *)(a0 + 0xc);
        uStack_5c = *(u32 *)(a0 + 0x10);
        uVar2 = CONCAT44(uStack_5c, in_fr1);
    } else {
        uStack_64 = (u32) * (u64 *)(a0 + 8);
        uStack_60 = (u32) * (u64 *)(a0 + 0xc);
        uVar2 = *(u64 *)(a0 + 0x10);
        uStack_5c = (u32)uVar2;
        auStack_58[0] = (u32)(uVar2 >> 0x20);
    }
    iVar1 = libgcc_divide_helper_0103d0(a1, 36000);
    fVar5 = (float)iVar1;
    dVar6 = (double)CONCAT44(uVar7, fVar5);
    dVar3 = (double)(uVar2 & 0xffffffff);
    if (cVar9 == '\0') {
        bVar8 = fVar5 < 0.0;
    } else {
        bVar8 = dVar6 < dVar3;
    }
    if (bVar8) {
        if (cVar10 == '\0') {
            dVar3 = (double)CONCAT44(0x4f800000, (int)uVar2);
        } else {
            dVar3 = 1.8578690272452215e+34;
        }
        if (cVar9 == '\0') {
            dVar6 = (double)(u64)(u32)(fVar5 + (float)((u64)dVar3 >> 0x20));
        } else {
            dVar6 = dVar6 + dVar3;
        }
    }
    if (cVar10 == '\0') {
        uVar2 = CONCAT44(0x470ca000, SUB84(dVar3, 0));
    } else {
        uVar2 = 0x478ca000470ca000;
    }
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44((float)a1, SUB84(dVar6, 0) / (float)(uVar2 >> 0x20));
    } else {
        dVar3 = (double)a1;
    }
    dVar6 = (double)(uVar2 & 0xffffffff);
    fVar5 = (float)((u64)dVar3 >> 0x20);
    if (cVar9 == '\0') {
        bVar8 = fVar5 < 0.0;
    } else {
        bVar8 = dVar3 < dVar6;
    }
    if (bVar8) {
        if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44(0x4f800000, (int)uVar2);
        } else {
            dVar6 = 1.8578690272452215e+34;
        }
        if (cVar9 == '\0') {
            dVar3 = (double)CONCAT44(fVar5 + (float)((u64)dVar6 >> 0x20), SUB84(dVar3, 0));
        } else {
            dVar3 = dVar3 + dVar6;
        }
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x478ca000, SUB84(dVar6, 0));
    } else {
        dVar6 = 5629500734611456.0;
    }
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44((float)((u64)dVar3 >> 0x20) / (float)((u64)dVar6 >> 0x20), SUB84(dVar3, 0));
    } else {
        dVar3 = dVar3 / dVar6;
    }
    if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x43340000, SUB84(dVar6, 0));
    } else {
        dVar6 = 2.6584566571173454e+36;
    }
    if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), SUB84(dVar3, 0) * (float)((u64)dVar6 >> 0x20));
    } else {
        dVar3 = dVar3 * dVar6;
    }
    dVar6 = (double)CONCAT44((int)((u64)dVar3 >> 0x20), -SUB84(dVar3, 0));
    if (cVar10 == '\0') {
        *(float *)(a0 + 0x30) = -SUB84(dVar3, 0);
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x30));
    } else {
        *(u64 *)(a0 + 0x30) = in_xd14;
        dVar3 = 1.4411521878487204e+18;
    }
    if (cVar9 == '\0') {
        fVar5 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar5 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44(0x43b40000, fVar5);
    } else {
        dVar3 = -3.739346301775294e-250;
    }
    if (cVar9 == '\0') {
        ar7_00 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        ar7_00 = (int)(dVar3 / dVar3);
    }
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x2c));
    } else {
        dVar3 = 1.4411521878487204e+18;
    }
    if (cVar9 == '\0') {
        fVar5 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar5 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44(0x43b40000, fVar5);
    } else {
        dVar3 = -3.739346301775294e-250;
    }
    if (cVar9 == '\0') {
        ar6_00 = (int)(SUB84(dVar3, 0) / (float)((u64)dVar3 >> 0x20));
    } else {
        ar6_00 = (int)(dVar3 / dVar3);
    }
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x28));
    } else {
        dVar3 = 1.4411521878487204e+18;
    }
    if (cVar9 == '\0') {
        fVar5 = SUB84(dVar3, 0) * (float)((u64)dVar3 >> 0x20);
    } else {
        fVar5 = SUB84(dVar3 * dVar3, 0);
    }
    if (cVar10 == '\0') {
        dVar3 = (double)CONCAT44(0x43b40000, fVar5);
    } else {
        dVar3 = -3.739346301775294e-250;
    }
    if (cVar9 == '\0') {
        fVar4 = (float)((u64)dVar3 >> 0x20);
        fVar5 = SUB84(dVar3, 0) / fVar4;
        dVar3 = (double)CONCAT44(fVar4, fVar5);
        ar5_00 = (int)fVar5;
    } else {
        dVar3 = dVar3 / dVar3;
        ar5_00 = (int)dVar3;
    }
    uVar7 = SUB84(dVar3, 0);
    njRotateXYZ(auStack_58, ar5_00, ar6_00, ar7_00, iVar1);
    njCalcVector_like(auStack_58, &uStack_64, &uStack_70, ar7_00, iVar1);
    if (cVar10 == '\0') {
        *(u32 *)(a0 + 0x18) = uStack_70;
        *(u32 *)(a0 + 0x1c) = uStack_6c;
        *(u32 *)(a0 + 0x20) = uStack_68;
        dVar3 = (double)CONCAT44(0x43b38000, uVar7);
    } else {
        *(u64 *)(a0 + 0x18) = CONCAT44(uStack_6c, uStack_70);
        *(u64 *)(a0 + 0x1c) = CONCAT44(uStack_68, uStack_6c);
        *(u64 *)(a0 + 0x20) = CONCAT44(uStack_64, uStack_68);
        dVar3 = 1.606691858090454e+73;
    }
    if (cVar9 == '\0') {
        iVar1 = (int)((float)((u64)dVar6 >> 0x20) * (float)((u64)dVar3 >> 0x20));
    } else {
        iVar1 = (int)(dVar6 * dVar3);
    }
    return iVar1;
}

/*
 * game_uses_rand_0d8bf0  0x8c0d8bf0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is rand
 * called by: Class_12b580_uses_rand_0d8710
 */
u32 game_uses_rand_0d8bf0(int a0, code *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    code *ar5_00;
    float fVar3;
    float fVar5;
    double dVar4;
    u8 *puVar6;
    u64 in_xd0;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    ar5_00 = a1;
    if (g_8c437cb4 == '\0') {
        uVar1 = game_init_fields_0d761c(&g_8c437cb8);
        a2 = 0x8c437ca8;
        ar5_00 = free_if_nonnull_wrap_0d76b8;
        global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c437ca8, a3);
        g_8c437cb4 = '\x01';
    }
    if (g_8c437cd8 == '\0') {
        uVar1 = game_init_fields_0d761c(&g_8c437cdc);
        a2 = 0x8c437ccc;
        ar5_00 = free_if_nonnull_wrap_0d76b8;
        global_list_push(uVar1, free_if_nonnull_wrap_0d76b8, 0x8c437ccc, a3);
        g_8c437cd8 = '\x01';
    }
    if (g_8c437cfc == '\0') {
        g_8c437cf8 = 0;
        g_8c437cfc = '\x01';
    }
    switch (*(u32 *)(a0 + 0x58)) {
    case 1:
        if (a1 == *(code **)(a0 + 0x50)) {
            *(u32 *)(a0 + 0x58) = 2;
            *(u32 *)(a0 + 0x74) = 0;
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x5c) = *(u32 *)(a0 + 0x38);
                *(u32 *)(a0 + 0x60) = *(u32 *)(a0 + 0x3c);
                *(u32 *)(a0 + 100) = *(u32 *)(a0 + 0x40);
                *(u32 *)(a0 + 0x68) = *(u32 *)(a0 + 0x44);
                *(u32 *)(a0 + 0x6c) = *(u32 *)(a0 + 0x48);
                dVar4 = (double)CONCAT44(0x3e4ccccd, *(u32 *)(a0 + 0x68));
            } else {
                *(u64 *)(a0 + 0x5c) = *(u64 *)(a0 + 0x38);
                *(u64 *)(a0 + 0x60) = *(u64 *)(a0 + 0x3c);
                *(u64 *)(a0 + 100) = *(u64 *)(a0 + 0x40);
                *(u64 *)(a0 + 0x68) = *(u64 *)(a0 + 0x44);
                *(u64 *)(a0 + 0x6c) = *(u64 *)(a0 + 0x48);
                in_xd0 = *(u64 *)(a0 + 0x68);
                dVar4 = 1548112633213747.2;
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 - dVar4, 0);
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(0x43160000, fVar3);
            } else {
                dVar4 = -1.3609530726902538e-249;
            }
            if (cVar7 == '\0') {
                g_8c437cf0 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
            } else {
                g_8c437cf0 = SUB84(dVar4 / dVar4, 0);
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(0x3e19999a, *(u32 *)(a0 + 0x6c));
            } else {
                g_8c437cf0 = (float)in_xd0;
                in_xd0 = *(u64 *)(a0 + 0x6c);
                dVar4 = -1.3608891160156975e-249;
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 - dVar4, 0);
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(0x43160000, fVar3);
            } else {
                dVar4 = -1.3609530726902538e-249;
            }
            if (cVar7 == '\0') {
                g_8c437cf4 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
            } else {
                g_8c437cf4 = SUB84(dVar4 / dVar4, 0);
            }
            if (cVar8 != '\0') {
                g_8c437cf4 = (float)in_xd0;
                g_8c437cf8 = (int)((u64)in_xd0 >> 0x20);
            }
            g_8c437cb8 = *(u32 *)(a0 + 0x5c);
            g_8c437cbc = *(u32 *)(a0 + 0x60);
            g_8c437cc0 = *(u32 *)(a0 + 100);
            g_8c437cc4 = *(float *)(a0 + 0x68);
            g_8c437cc8 = *(float *)(a0 + 0x6c);
            iVar2 = rand();
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
            } else {
                dVar4 = 206158466560.0;
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 / dVar4, 0);
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(0x42480000, fVar3);
            } else {
                dVar4 = 4.604612304241727e-232;
            }
            if (cVar7 == '\0') {
                g_8c437cf8 = (int)(SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20));
            } else {
                g_8c437cf8 = (int)(dVar4 * dVar4);
            }
        }
        break;
    case 2:
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(g_8c437cf0, *(u32 *)(a0 + 0x68));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x68);
            dVar4 = (double)CONCAT44(g_8c437cf4, g_8c437cf0);
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 - dVar4, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x68) = fVar3;
            dVar4 = (double)CONCAT44(g_8c437cf4, *(u32 *)(a0 + 0x6c));
        } else {
            *(u64 *)(a0 + 0x68) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x6c);
            dVar4 = (double)CONCAT44(g_8c437cf8, g_8c437cf4);
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 - dVar4, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x6c) = fVar3;
            fVar3 = *(float *)(a0 + 0x68);
            fVar5 = 0.2;
        } else {
            *(u64 *)(a0 + 0x6c) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x68);
            fVar3 = 0.2;
            fVar5 = 0.15;
        }
        if (cVar7 != '\0' || fVar3 <= fVar5) {
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x68) = 0x3e4ccccd;
            } else {
                *(u64 *)(a0 + 0x68) = 0x3e19999a3e4ccccd;
            }
        }
        if (cVar8 == '\0') {
            fVar3 = *(float *)(a0 + 0x6c);
            fVar5 = 0.15;
        } else {
            in_xd0 = *(u64 *)(a0 + 0x6c);
            fVar3 = 0.15;
            fVar5 = -7.131649e+31;
        }
        if (cVar7 != '\0' || fVar3 <= fVar5) {
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x6c) = 0x3e19999a;
            } else {
                *(u64 *)(a0 + 0x6c) = 0xf46109003e19999a;
            }
        }
        if (cVar8 == '\0') {
            fVar3 = *(float *)(a0 + 0x68);
            fVar5 = 0.2;
        } else {
            in_xd0 = *(u64 *)(a0 + 0x68);
            fVar3 = 0.2;
            fVar5 = 0.15;
        }
        if (fVar3 == fVar5) {
            if (cVar8 == '\0') {
                fVar3 = *(float *)(a0 + 0x6c);
                fVar5 = 0.15;
            } else {
                in_xd0 = *(u64 *)(a0 + 0x6c);
                fVar3 = 0.15;
                fVar5 = -7.131649e+31;
            }
            if (fVar3 == fVar5) {
                *(u32 *)(a0 + 0x58) = 3;
                uVar1 = 4100000000;
                iVar2 = a0 + 0x78;
                Class_12bea8_init_fields_0d7f04(iVar2, 4100000000);
                iVar2 = rand();
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(0x47000000, (float)iVar2);
                } else {
                    dVar4 = 33554440.875;
                }
                if (cVar7 == '\0') {
                    fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 / dVar4, 0);
                }
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(0x41800000, fVar3);
                } else {
                    dVar4 = -131072.03198242188;
                }
                if (cVar7 == '\0') {
                    fVar3 = SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 * dVar4, 0);
                }
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(0xc1000000, fVar3);
                } else {
                    dVar4 = 5.98249051247822e-310;
                }
                if (cVar7 == '\0') {
                    fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar4 + dVar4, 0);
                }
                if (cVar8 == '\0') {
                    *(float *)(a0 + 0x6e1c) = fVar3;
                } else {
                    *(u64 *)(a0 + 0x6e1c) = in_xd0;
                }
                uVar1 = pack_acquire_entry_handle(0x8c2b59d0, *(u32 *)(a0 + 0x6e20), a2, a3);
                *(u32 *)(a0 + 0x6e24) = uVar1;
                *(u32 *)(a0 + 0x6e28) = 0xbae;
            }
        }
        break;
    case 3:
        *(u32 *)(a0 + 0x58) = 4;
        break;
    case 4:
        if ((500 < *(int *)(a0 + 0x6e28)) &&
            (iVar2 = *(int *)(a0 + 0x6e28) + -10, *(int *)(a0 + 0x6e28) = iVar2, iVar2 < 500)) {
            *(u32 *)(a0 + 0x6e28) = 500;
        }
        if (*(int *)(a0 + 0x70) == 0) {
            iVar2 = a0 + 0x78;
            uVar1 = get_field_4_0d92a8(iVar2);
            if ((u32)(int)(short)uVar1 < *(u32 *)(a0 + 0x54)) {
                uVar1 = rand();
                ar5_00 = (code *)0x64;
                iVar2 = libgcc_divide_helper_01031c(uVar1, 100, a2);
                if ((iVar2 < 0x14) && (*(int *)(a0 + 0x6e44) == 0)) {
                    if (cVar8 == '\0') {
                        dVar4 = (double)CONCAT44(0x40400000, g_8c437cc4);
                    } else {
                        in_xd0 = CONCAT44(g_8c437cc8, g_8c437cc4);
                        dVar4 = 206158463104.0;
                    }
                    if (cVar7 == '\0') {
                        fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
                    } else {
                        fVar3 = SUB84(dVar4 - dVar4, 0);
                    }
                    if (cVar8 == '\0') {
                        dVar4 = (double)CONCAT44(0x42480000, fVar3);
                    } else {
                        dVar4 = 9.765628835367579e-05;
                    }
                    if (cVar7 == '\0') {
                        g_8c437ce8 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
                    } else {
                        g_8c437ce8 = SUB84(dVar4 / dVar4, 0);
                    }
                    if (cVar8 == '\0') {
                        dVar4 = (double)CONCAT44(0x3f19999a, g_8c437cb8);
                    } else {
                        g_8c437ce8 = (float)in_xd0;
                        uRam8c437cec = (u32)((u64)in_xd0 >> 0x20);
                        in_xd0 = CONCAT44(g_8c437cbc, g_8c437cb8);
                        dVar4 = 3.051758529863946e-05;
                    }
                    if (cVar7 == '\0') {
                        fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
                    } else {
                        fVar3 = SUB84(dVar4 - dVar4, 0);
                    }
                    if (cVar8 == '\0') {
                        dVar4 = (double)CONCAT44(0x42480000, fVar3);
                    } else {
                        dVar4 = 9.765628835367579e-05;
                    }
                    if (cVar7 == '\0') {
                        g_8c437cdc = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
                    } else {
                        g_8c437cdc = SUB84(dVar4 / dVar4, 0);
                    }
                    if (cVar8 == '\0') {
                        dVar4 = (double)CONCAT44(0x3f19999a, g_8c437cbc);
                    } else {
                        g_8c437cdc = (float)in_xd0;
                        in_xd0 = CONCAT44(g_8c437cc0, g_8c437cbc);
                        dVar4 = 3.051758529863946e-05;
                    }
                    if (cVar7 == '\0') {
                        fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
                    } else {
                        fVar3 = SUB84(dVar4 - dVar4, 0);
                    }
                    if (cVar8 == '\0') {
                        dVar4 = (double)CONCAT44(0x42480000, fVar3);
                    } else {
                        dVar4 = 9.765628835367579e-05;
                    }
                    if (cVar7 == '\0') {
                        g_8c437ce0 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
                    } else {
                        g_8c437ce0 = SUB84(dVar4 / dVar4, 0);
                    }
                    if (cVar8 == '\0') {
                        dVar4 = (double)CONCAT44(0x3f000000, g_8c437cc0);
                    } else {
                        g_8c437ce0 = (float)in_xd0;
                        in_xd0 = CONCAT44(g_8c437cc4, g_8c437cc0);
                        dVar4 = 6.58340905100917e-312;
                    }
                    if (cVar7 == '\0') {
                        fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
                    } else {
                        fVar3 = SUB84(dVar4 - dVar4, 0);
                    }
                    if (cVar8 == '\0') {
                        dVar4 = (double)CONCAT44(0x42480000, fVar3);
                    } else {
                        dVar4 = 9.765628835367579e-05;
                    }
                    if (cVar7 == '\0') {
                        g_8c437ce4 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
                    } else {
                        g_8c437ce4 = SUB84(dVar4 / dVar4, 0);
                    }
                    if (cVar8 == '\0') {
                        *(u32 *)(a0 + 0x68) = 0x40400000;
                        *(u32 *)(a0 + 0x5c) = 0x3f19999a;
                        *(u32 *)(a0 + 0x60) = 0x3f19999a;
                        *(u32 *)(a0 + 100) = 0x3f000000;
                    } else {
                        g_8c437ce4 = (float)in_xd0;
                        g_8c437ce8 = (float)((u64)in_xd0 >> 0x20);
                        *(u64 *)(a0 + 0x68) = 0x4248000040400000;
                        *(u64 *)(a0 + 0x5c) = 0x3f0000003f19999a;
                        *(u64 *)(a0 + 0x60) = 0x3f0000003f19999a;
                        *(u64 *)(a0 + 100) = 0x1363f000000;
                    }
                    *(u32 *)(a0 + 0x70) = 1;
                    *(u32 *)(a0 + 0x6e44) = 0x136;
                    *(int *)(a0 + 0x74) = g_8c437cf8;
                }
            }
        }
        uVar1 = get_field_4_0d92a8(a0 + 0x78);
        if (((*(u32 *)(a0 + 0x54) <= (u32)(int)(short)uVar1) && (*(int *)(a0 + 0x70) == 0)) &&
            (*(int *)(a0 + 0x6e44) == 0)) {
            *(u32 *)(a0 + 0x58) = 5;
        }
        break;
    case 5:
        iVar2 = *(int *)(a0 + 0x6e28);
        *(int *)(a0 + 0x6e28) = iVar2 + 10;
        if (0xbae < iVar2 + 10) {
            *(u32 *)(a0 + 0x6e28) = 0xbae;
            uVar1 = *(u32 *)(a0 + 0x6e24);
            pack_release_entry_handle(0x8c2b59d0, uVar1, a2, a3);
            *(u32 *)(a0 + 0x6e24) = 0xffffffff;
            set_field_0_to_3(a0 + 0x78);
            *(u32 *)(a0 + 0x58) = 6;
        }
        break;
    case 6:
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(g_8c437cf0, *(u32 *)(a0 + 0x68));
        } else {
            in_xd0 = *(u64 *)(a0 + 0x68);
            dVar4 = (double)CONCAT44(g_8c437cf4, g_8c437cf0);
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 + dVar4, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x68) = fVar3;
            dVar4 = (double)CONCAT44(g_8c437cf4, *(u32 *)(a0 + 0x6c));
        } else {
            *(u64 *)(a0 + 0x68) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x6c);
            dVar4 = (double)CONCAT44(g_8c437cf8, g_8c437cf4);
        }
        if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 + dVar4, 0);
        }
        if (cVar8 == '\0') {
            *(float *)(a0 + 0x6c) = fVar3;
            fVar3 = *(float *)(a0 + 0x68);
            fVar5 = g_8c437cc4;
        } else {
            *(u64 *)(a0 + 0x6c) = in_xd0;
            in_xd0 = *(u64 *)(a0 + 0x68);
            fVar3 = g_8c437cc4;
            fVar5 = g_8c437cc8;
        }
        if (cVar7 != '\0' || fVar5 <= fVar3) {
            if (cVar8 == '\0') {
                *(float *)(a0 + 0x68) = g_8c437cc4;
            } else {
                *(u64 *)(a0 + 0x68) = CONCAT44(g_8c437cc8, g_8c437cc4);
            }
        }
        if (cVar8 == '\0') {
            fVar3 = *(float *)(a0 + 0x6c);
            fVar5 = g_8c437cc8;
        } else {
            in_xd0 = *(u64 *)(a0 + 0x6c);
            fVar3 = g_8c437cc8;
            fVar5 = fRam8c437ccc;
        }
        if (cVar7 != '\0' || fVar5 <= fVar3) {
            if (cVar8 == '\0') {
                *(float *)(a0 + 0x6c) = g_8c437cc8;
            } else {
                *(u64 *)(a0 + 0x6c) = CONCAT44(fRam8c437ccc, g_8c437cc8);
            }
        }
        if (cVar8 == '\0') {
            fVar3 = *(float *)(a0 + 0x68);
            fVar5 = g_8c437cc4;
        } else {
            in_xd0 = *(u64 *)(a0 + 0x68);
            fVar3 = g_8c437cc4;
            fVar5 = g_8c437cc8;
        }
        if (fVar3 == fVar5) {
            if (cVar8 == '\0') {
                fVar3 = *(float *)(a0 + 0x6c);
                fVar5 = g_8c437cc8;
            } else {
                in_xd0 = *(u64 *)(a0 + 0x6c);
                fVar3 = g_8c437cc8;
                fVar5 = fRam8c437ccc;
            }
            if (fVar3 == fVar5) {
                *(u32 *)(a0 + 0x58) = 0;
            }
        }
    }
    if (*(int *)(a0 + 0x70) == 1) {
        if (cVar8 == '\0') {
            fVar3 = *(float *)(a0 + 0x68);
            puVar6 = (u8 *)0x3e4ccccd;
        } else {
            in_xd0 = *(u64 *)(a0 + 0x68);
            fVar3 = 0.2;
            puVar6 = &g_8c437cdc;
        }
        if (cVar7 == '\0' && (float)puVar6 < fVar3) {
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(g_8c437ce8, *(u32 *)(a0 + 0x68));
            } else {
                in_xd0 = *(u64 *)(a0 + 0x68);
                dVar4 = (double)CONCAT44(uRam8c437cec, g_8c437ce8);
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            if (cVar8 == '\0') {
                *(float *)(a0 + 0x68) = fVar3;
                dVar4 = (double)CONCAT44(g_8c437cdc, *(u32 *)(a0 + 0x5c));
            } else {
                *(u64 *)(a0 + 0x68) = in_xd0;
                in_xd0 = *(u64 *)(a0 + 0x5c);
                dVar4 = (double)CONCAT44(g_8c437ce0, g_8c437cdc);
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            if (cVar8 == '\0') {
                *(float *)(a0 + 0x5c) = fVar3;
                dVar4 = (double)CONCAT44(g_8c437ce0, *(u32 *)(a0 + 0x60));
            } else {
                *(u64 *)(a0 + 0x5c) = in_xd0;
                in_xd0 = *(u64 *)(a0 + 0x60);
                dVar4 = (double)CONCAT44(g_8c437ce4, g_8c437ce0);
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            if (cVar8 == '\0') {
                *(float *)(a0 + 0x60) = fVar3;
                dVar4 = (double)CONCAT44(g_8c437ce4, *(u32 *)(a0 + 100));
            } else {
                *(u64 *)(a0 + 0x60) = in_xd0;
                in_xd0 = *(u64 *)(a0 + 100);
                dVar4 = (double)CONCAT44(g_8c437ce8, g_8c437ce4);
            }
            if (cVar7 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            if (cVar8 == '\0') {
                *(float *)(a0 + 100) = fVar3;
                fVar3 = *(float *)(a0 + 0x68);
                puVar6 = (u8 *)0x3e4ccccd;
            } else {
                *(u64 *)(a0 + 100) = in_xd0;
                fVar3 = 0.2;
                puVar6 = &g_8c437cdc;
            }
            if (cVar7 == '\0' && fVar3 < (float)puVar6) {
                if (cVar8 == '\0') {
                    *(u32 *)(a0 + 0x68) = 0x3e4ccccd;
                    *(u32 *)(a0 + 0x5c) = g_8c437cb8;
                    *(u32 *)(a0 + 0x60) = g_8c437cbc;
                    *(u32 *)(a0 + 100) = g_8c437cc0;
                } else {
                    *(u64 *)(a0 + 0x68) = 0x8c437cdc3e4ccccd;
                    *(u64 *)(a0 + 0x5c) = CONCAT44(g_8c437cbc, g_8c437cb8);
                    *(u64 *)(a0 + 0x60) = CONCAT44(g_8c437cc0, g_8c437cbc);
                    *(u64 *)(a0 + 100) = CONCAT44(g_8c437cc4, g_8c437cc0);
                }
                *(u32 *)(a0 + 0x70) = 0;
            }
        }
    }
    if ((*(int *)(a0 + 0x6e44) != 0) &&
        (*(int *)(a0 + 0x6e44) = *(int *)(a0 + 0x6e44) + -1, *(int *)(a0 + 0x6e44) < 0)) {
        *(u32 *)(a0 + 0x6e44) = 0;
    }
    if (0 < *(int *)(a0 + 0x74)) {
        *(int *)(a0 + 0x74) = *(int *)(a0 + 0x74) + -1;
    }
    return *(u32 *)(a0 + 0x58);
}

/*
 * set_field_0_to_3  0x8c0d92a0
 * called by: game_uses_rand_0d8bf0
 */
u32 set_field_0_to_3(u32 *a0) {
    *a0 = 3;
    return 3;
}

/*
 * get_field_4_0d92a8  0x8c0d92a8
 * called by: game_uses_rand_0d8bf0
 */
u32 get_field_4_0d92a8(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * game_copy_0d92b0  0x8c0d92b0
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: Class_12b580_uses_Vec3_ctor_zero_0d7f18, game_uses_Class_12b580_clear_request_0e6dc4
 */
u32 game_copy_0d92b0(int a0) {
    int iVar1;

    *(u32 *)(a0 + 4) = 0;
    Class_12bea8_copy_0d7dcc(a0 + 0x78);
    *(u32 *)(a0 + 0x58) = 0;
    *(u32 *)(a0 + 0x54) = 0;
    *(u32 *)(a0 + 0x50) = 0;
    *(u32 *)(a0 + 0x70) = 0;
    for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
        *(u32 *)(0x6e24 + iVar1 * 0x18 + a0) = 0xffffffff;
    }
    return 2;
}

/*
 * Class_12b930_uses_Vec3_ctor_zero_0d931c  0x8c0d931c
 * area name: only called from Class_12b930 methods; behaviour name: its main named callee is Vec3_ctor_zero
 * called by: Class_12b930_ctor
 */
u64 *Class_12b930_uses_Vec3_ctor_zero_0d931c(u64 *a0, u32 a1, u32 a2) {
    u32 ar7_00;
    char cVar1;

    cVar1 = '\0';
    Vec3_ctor_zero(a0, a1, a2);
    Class_129920_ctor(a0 + 4, a1);
    clear_field_0_wrap_015ab8(a0 + 5);
    ar7_00 = 4;
    vec_new_array((u32 *)((int)a0 + 0x2c), clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 7);
    if (cVar1 == '\0') {
        *(u32 *)a0 = 0x43a6299a;
        *(u32 *)((int)a0 + 4) = 0x44a05ccd;
        *(u32 *)(a0 + 1) = 0x43557405;
    } else {
        *a0 = 0x44a05ccd43a6299a;
        *(u64 *)((int)a0 + 4) = 0x4355740544a05ccd;
        a0[1] = 0x8c0d98f843557405;
    }
    set_fields_18_10_14(a0);
    return a0;
}

/*
 * RING_UNIT_CreateModel  0x8c0d93a8
 * loads Ring_Home.nj, its textures and RingMotion.npd
 * called by: CWaterTank_CreateStage
 * strings: "GRAPHICS\\ENV"; "Ring_Home.nj"; "GRAPHICS\\ENV"; "Ring_Home.nj" ...
 */
u32 RING_UNIT_CreateModel(int a0, u32 a1, u32 a2) {
    int iVar1;
    u32 ar7_00;
    char *ar5_00;
    char *pcVar2;
    u32 *puVar3;
    int **ar7_01;
    u32 uVar4;
    u32 uStack_20;
    int *piStack_1c;
    u32 auStack_18[2];

    auStack_18[0] = 0;
    piStack_1c = NULL;
    uStack_20 = 0;
    puVar3 = auStack_18;
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = retry_until_done_0209b0(a1, "Ring_Home.nj", "GRAPHICS\\ENV", puVar3);
    if (iVar1 == 0) {
        report_error_message("Ring_Home.nj", "Read NJCM Failed..RING_UNIT::CreateModel()", 0, 2);
    } else {
        set_field_0_015ad4(a0 + 0x28, auStack_18[0], pcVar2);
    }
    ar7_01 = &piStack_1c;
    pcVar2 = "GRAPHICS\\ENV";
    iVar1 = retry_until_done_020aa8(a1, "Ring_Home.nj", "GRAPHICS\\ENV", ar7_01);
    if (iVar1 == 0) {
        ar7_01 = (int **)0x2;
        pcVar2 = NULL;
        ar5_00 = "Read NJTL Failed..RING_UNIT::CreateModel()";
        report_error_message("Ring_Home.nj", "Read NJTL Failed..RING_UNIT::CreateModel()", 0, 2);
    } else {
        ar5_00 = (char *)piStack_1c;
        (**(code **)(*(int *)(a0 + 0x20) + 8))((int *)(a0 + 0x20), piStack_1c, pcVar2, ar7_01);
    }
    piStack_1c = (int *)get_field_4_0253e4(a0 + 0x20, ar5_00, pcVar2, ar7_01);
    for (uVar4 = 0; uVar4 < (u32)piStack_1c[1]; uVar4 = uVar4 + 1) {
        iVar1 = uVar4 * 0xc + *piStack_1c;
        *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x80000000;
    }
    ar7_00 = get_field_4_0253e4(a0 + 0x20, ar5_00, pcVar2, ar7_01);
    iVar1 = retry_until_done_020e80(a1, &g_8c13fcd7, "GRAPHICS\\ENV", ar7_00);
    if (iVar1 == 0) {
        report_error_message("Failed to load ring textuer..", "RING_UNIT::CreateModel", 0, 2);
    }
    iVar1 = retry_until_done_020d90(a1, "RingMotion.npd", "GRAPHICS\\ENV", a0);
    if (iVar1 == 0) {
        report_error_message("RingMotion.npd", "Failed to Load MotionPack :RING_UNIT::CreateModel()", 0, 2);
    }
    for (uVar4 = 0; uVar4 < 7; uVar4 = uVar4 + 1) {
        puVar3 = &uStack_20;
        pcVar2 = "GRAPHICS\\ENV";
        iVar1 = retry_until_done_020ba0(a1, (&PTR_s_Ring_Idle1_njm_8c13f394)[uVar4], "GRAPHICS\\ENV", puVar3);
        if (iVar1 == 0) {
            report_error_message((&PTR_s_Ring_Idle1_njm_8c13f394)[uVar4], "Read NMDM Failed..", 0, 2);
        } else {
            set_field_0_015bb0(a0 + uVar4 * 4 + 0x2c, uStack_20);
        }
    }
    return 7;
}

/*
 * Class_12b930_state_switch_0d9600  0x8c0d9600
 * area name: only called from Class_12b930 methods; behaviour name: dispatches on a state or mode value (switch)
 * called by: Class_12b930_m1_0de1dc, Class_12b930_m3_0de4b0
 */
u32 *Class_12b930_state_switch_0d9600(int a0, u32 a1, u32 a2) {
    u32 *puVar1;
    int iVar2;
    float fVar3;
    double dVar4;
    u32 in_fr3;
    double dVar5;
    bool bVar6;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    fVar3 = *(float *)(a0 + 0x14) + 1.0;
    *(float *)(a0 + 0x14) = fVar3;
    iVar2 = *(int *)(a0 + 0x10);
    puVar1 = (u32 *)0x8;
    if ((iVar2 < 9) && (-1 < iVar2)) {
        puVar1 = (u32 *)(&switchD_8c0d962e::switchdataD_8c0d9634)[iVar2];
        switch (iVar2) {
        default:
            puVar1 = (u32 *)get_field_4_of_field_0(a0 + *(int *)(a0 + 0x10) * 4 + 0x2c);
            if (cVar8 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x14), in_fr3);
            } else {
                dVar5 = *(double *)(a0 + 0x14);
            }
            fVar3 = (float)(int)puVar1;
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar7 == '\0' && fVar3 < 0.0) {
                puVar1 = &g_8c0d9718;
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = -1.2916629790996152e-250;
                }
                if (cVar7 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            if (cVar7 == '\0') {
                bVar6 = (float)((u64)dVar5 >> 0x20) < SUB84(dVar4, 0);
            } else {
                bVar6 = dVar5 < dVar4;
            }
            if (!bVar6) {
                if (cVar8 == '\0') {
                    *(u32 *)(a0 + 0x14) = 0;
                } else {
                    *(u64 *)(a0 + 0x14) = (u64)dVar4 & 0xffffffff;
                }
                *(char *)(a0 + 0x18) = *(char *)(a0 + 0x18) + -1;
                puVar1 = (u32 *)(u32) * (u8 *)(a0 + 0x18);
                if (puVar1 == NULL) {
                    puVar1 = (u32 *)0x8;
                    *(u32 *)(a0 + 0x10) = 8;
                }
            }
            break;
        case 6:
            puVar1 = (u32 *)get_field_4_of_field_0(a0 + *(int *)(a0 + 0x10) * 4 + 0x2c);
            if (cVar8 == '\0') {
                dVar5 = (double)CONCAT44(*(u32 *)(a0 + 0x14), in_fr3);
            } else {
                dVar5 = *(double *)(a0 + 0x14);
            }
            fVar3 = (float)(int)puVar1;
            dVar4 = (double)(u64)(u32)fVar3;
            if (cVar7 == '\0' && fVar3 < 0.0) {
                puVar1 = &g_8c0d9718;
                if (cVar8 == '\0') {
                    dVar4 = (double)CONCAT44(0x4f800000, fVar3);
                } else {
                    dVar4 = -1.2916629790996152e-250;
                }
                if (cVar7 == '\0') {
                    fVar3 = (float)((u64)dVar4 >> 0x20);
                    dVar4 = (double)CONCAT44(fVar3, SUB84(dVar4, 0) + fVar3);
                } else {
                    dVar4 = dVar4 + dVar4;
                }
            }
            if (cVar7 == '\0') {
                bVar6 = (float)((u64)dVar5 >> 0x20) < SUB84(dVar4, 0);
            } else {
                bVar6 = dVar5 < dVar4;
            }
            if (!bVar6) {
                puVar1 = (u32 *)0x8;
                *(u32 *)(a0 + 0x10) = 8;
                if (cVar8 == '\0') {
                    *(u32 *)(a0 + 0x14) = 0;
                } else {
                    *(u64 *)(a0 + 0x14) = (u64)dVar4 & 0xffffffff;
                }
            }
            break;
        case 7:
            break;
        case 8:
            puVar1 = (u32 *)CTexture_uses_rand_0d97ec(a0, a1, a2);
            if (cVar8 == '\0') {
                *(u32 *)(a0 + 0x14) = 0;
            } else {
                *(u64 *)(a0 + 0x14) = (u64)(u32)fVar3;
            }
        }
    }
    return puVar1;
}

/*
 * game_draw_0d9720  0x8c0d9720
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0df668, game_uses_color_set_white_a0_0df250, game_uses_noop_0de6d0, game_uses_noop_0deb60,
 * game_uses_noop_0def78
 */
u32 game_draw_0d9720(int a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_stack_fffffff4;

    obj_set_texlist(a0 + 0x20, a1, a2);
    uVar1 = 0;
    matrix_push(0, a1, a2, a3, in_stack_fffffff4);
    touch_fields_30_3c_wrap();
    if (*(int *)(a0 + 0x10) == 8) {
        Class_12c058_draw_015adc(a0 + 0x28, a1, a2, a3);
    } else {
        a1 = a0 + *(int *)(a0 + 0x10) * 4 + 0x2c;
        game_draw_015b54(a0 + 0x28, a1);
    }
    uVar1 = matrix_pop_n(1);
    return uVar1;
}

/*
 * CTexture_LoadFromCache_on_field_20  0x8c0d97b4
 * calls CTexture_LoadFromCache on the member at +0x20
 * called by: env_load_textures_0e0320
 */
u32 CTexture_LoadFromCache_on_field_20(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_LoadFromCache(a0 + 0x20, a1, a2, a3);
    return uVar1;
}

/*
 * CTexture_ReleaseFromVRAM_on_field_20  0x8c0d97d0
 * calls CTexture_ReleaseFromVRAM on the member at +0x20
 * called by: env_release_textures_0e03d4
 */
u32 CTexture_ReleaseFromVRAM_on_field_20(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_ReleaseFromVRAM(a0 + 0x20, a1, a2, a3);
    return uVar1;
}

/*
 * CTexture_uses_rand_0d97ec  0x8c0d97ec
 * area name: sits between CTexture functions (same compilation unit); behaviour name: its main named callee is rand
 * called by: Class_12b930_state_switch_0d9600
 */
int CTexture_uses_rand_0d97ec(int a0, u32 *a1, u32 a2) {
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 ar5_00;
    u32 extraout_fr1;
    char cVar4;

    cVar4 = '\0';
    uVar3 = *(u32 *)(a0 + 0x1c);
    iVar1 = libgcc_divide_helper_0103d0(*a1, uVar3);
    if (iVar1 == 0) {
        uVar2 = get_field_a0_035724(a1, uVar3);
        if ((char)uVar2 == '\x02') {
            *(u32 *)(a0 + 0x10) = 0;
        } else {
            *(u32 *)(a0 + 0x10) = 1;
        }
        if (cVar4 == '\0') {
            *(u32 *)(a0 + 0x14) = 0;
        } else {
            *(u64 *)(a0 + 0x14) = (u64)extraout_fr1;
        }
        uVar3 = rand();
        ar5_00 = 3;
        uVar2 = libgcc_divide_helper_01031c(uVar3, 3, a2);
        *(char *)(a0 + 0x18) = (char)uVar2;
        *(char *)(a0 + 0x18) = *(char *)(a0 + 0x18) + '\x01';
        uVar3 = rand();
        iVar1 = libgcc_divide_helper_01031c(uVar3, 500, a2);
        *(int *)(a0 + 0x1c) = iVar1;
    }
    return iVar1;
}

/*
 * CTexture_float_calc_0d9898  0x8c0d9898
 * area name: sits between CTexture functions (same compilation unit); behaviour name: floating-point arithmetic
 * called by: game_uses_copy6_to_fields_080e80
 */
int CTexture_float_calc_0d9898(int a0) {
    int iVar1;
    float in_fr4;

    if (((*(int *)(a0 + 0x10) == 8) || (*(int *)(a0 + 0x10) == 0)) || (iVar1 = *(int *)(a0 + 0x10), iVar1 == 1)) {
        if (in_fr4 <= 5.0) {
            *(u32 *)(a0 + 0x10) = 4;
        } else {
            *(u32 *)(a0 + 0x10) = 3;
        }
        *(u32 *)(a0 + 0x14) = 0;
        iVar1 = 0x18;
        *(u8 *)(a0 + 0x18) = 1;
    }
    return iVar1;
}

/*
 * set_fields_10_14_0d98d4  0x8c0d98d4
 * stores +0x10, +0x14
 * called by: game_vec_0593cc, set_fields_10_14_on_field_22704
 */
u32 set_fields_10_14_0d98d4(int a0) {
    *(u32 *)(a0 + 0x10) = 6;
    *(u32 *)(a0 + 0x14) = 0;
    return 6;
}

/*
 * set_fields_10_14_0d98e4  0x8c0d98e4
 * stores +0x10, +0x14
 * called by: input_uses_set_fields_28_48_0dff1c
 */
u32 set_fields_10_14_0d98e4(int a0) {
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x14) = 0;
    return 0;
}

/*
 * noop_0d98f4  0x8c0d98f4
 * called by: input_uses_call_all_list_64_0e004c
 */
u32 noop_0d98f4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_fields_18_10_14  0x8c0d98f8
 * stores +0x18, +0x10, +0x14
 * called by: Class_12b930_uses_Vec3_ctor_zero_0d931c, game_uses_get_field_38_0dfbdc
 */
u32 set_fields_18_10_14(int a0) {
    *(u8 *)(a0 + 0x18) = 0;
    *(u32 *)(a0 + 0x10) = 8;
    *(u32 *)(a0 + 0x14) = 0;
    return 8;
}

/*
 * RING_UNIT_ReleaseModel  0x8c0d990c
 * releases Ring_Home.nj, RingMotion.npd and the seven ring textures
 * called by: CWaterTank_ReleaseModels
 * strings: "Ring_Home.nj"; "GRAPHICS\\ENV"; "Ring_Home.nj"; "GRAPHICS\\ENV" ...
 */
u32 RING_UNIT_ReleaseModel(u32 a0, u32 a1) {
    u32 uVar1;

    (*(code *)(&CDCGD_release_type0))(a1, "Ring_Home.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&CDCGD_release_type2))(a1, "Ring_Home.nj", "GRAPHICS\\ENV", a0);
    (*(code *)(&CDCGD_release_request_wrap_020e48))(a1, "RingMotion.npd", "GRAPHICS\\ENV", a0);
    for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1) {
        (*(code *)(&CDCGD_release_request_wrap))(a1, *(u32 *)((&DATA_8c13f394) + uVar1 * 4), "GRAPHICS\\ENV", a0);
    }
    return 7;
}

/*
 * color_set_white_a0  0x8c0d99b8
 * r, g, b = 1.0 and the fourth word 0
 * called by: game_draw_0df668, game_uses_color_set_white_a0_0df250, game_uses_noop_0de6d0, game_uses_noop_0deb60,
 * game_uses_noop_0def78
 */
u32 *color_set_white_a0(u32 *a0) {
    *a0 = 0x3f800000;
    a0[2] = 0x3f800000;
    a0[1] = 0x3f800000;
    a0[3] = 0;
    return a0;
}

/*
 * game_copy_0d99e8  0x8c0d99e8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls copy functions
 * called by: Class_12b3b8_ctor, Class_12bb08_ctor
 */
u32 *game_copy_0d99e8(u32 *a0, u32 a1, u32 a2) {
    u32 r7;
    u32 ar6_00;

    *a0 = (&DATA_8c12bce0);
    ar6_00 = a2;
    Class_129920_ctor(a0 + 1, a1);
    clear_field_0_wrap_015ab8(a0 + 3);
    Class_129920_ctor(a0 + 10, a1);
    clear_field_0_wrap_015ab8(a0 + 0xc);
    Class_12b3b8_copy_016410(a0 + 0xd);
    clear_3_words_102748((int)a0 + 0x80);
    clear_2_words((int)a0 + 0x8c);
    sprintf(a0 + 4, a1, ar6_00, r7, "%s");
    a0[9] = a2;
    return a0;
}

/*
 * Class_12bce0_dtor  0x8c0d9a98
 * stores the vtable 0x8c12bce0
 * called by: Class_12b3b8_dtor, Class_12bb08_dtor
 */
u32 *Class_12bce0_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12bce0;
        free_if_nonnull_wrap_10270c(a0 + 0x23, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_102790(a0 + 0x20, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016bfc(a0 + 0xc, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 10, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016bfc(a0 + 3, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Class_129920_dtor(a0 + 1, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_draw_0d9b34  0x8c0d9b34
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: Class_12b580_draw_0e66fc
 */
u32 game_draw_0d9b34(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_set_texlist(a0 + 0x28, a1, a2);
    uVar1 = Class_12c058_draw_015adc(a0 + 0x30, a1, a2, a3);
    return uVar1;
}

/*
 * obj_load_texlist_28  0x8c0d9b60
 * loads the texture list at +0x28 through the cache and attaches it
 * called by: env_load_textures_0e0320, scene_load_textures_like, textures_load_3
 */
u32 obj_load_texlist_28(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CTexture_LoadFromCache(a0 + 0x28, a1, a2, a3);
    uVar1 = obj_set_texlist(a0 + 0x28, a1, a2);
    return uVar1;
}

/*
 * CTexture_ReleaseFromVRAM_on_field_28  0x8c0d9b8c
 * calls CTexture_ReleaseFromVRAM on the member at +0x28
 * called by: env_release_textures_0e03d4, scene_release_textures_like, textures_release_3
 */
u32 CTexture_ReleaseFromVRAM_on_field_28(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = CTexture_ReleaseFromVRAM(a0 + 0x28, a1, a2, a3);
    return uVar1;
}

/*
 * ret_const_0_0d9ba8  0x8c0d9ba8
 */
u32 ret_const_0_0d9ba8(void) {
    return 0;
}

/*
 * ret_const_0_0d9bb0  0x8c0d9bb0
 */
u32 ret_const_0_0d9bb0(void) {
    return 0;
}

/*
 * ret_const_0_0d9bb8  0x8c0d9bb8
 */
u32 ret_const_0_0d9bb8(void) {
    return 0;
}

/*
 * ret_const_0_0d9bc0  0x8c0d9bc0
 */
u32 ret_const_0_0d9bc0(void) {
    return 0;
}

/*
 * ret_const_0_0d9bc8  0x8c0d9bc8
 */
u32 ret_const_0_0d9bc8(void) {
    return 0;
}

/*
 * noop_0d9bd0  0x8c0d9bd0
 */
u32 noop_0d9bd0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0d9bd4  0x8c0d9bd4
 */
u32 noop_0d9bd4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0d9bd8  0x8c0d9bd8
 */
u32 noop_0d9bd8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_8c125864  0x8c0d9bdc
 */
u32 ret_const_8c125864(void) {
    return 0x8c125864;
}

/*
 * ret_const_8c125864_0d9be8  0x8c0d9be8
 */
u32 ret_const_8c125864_0d9be8(void) {
    return 0x8c125864;
}

/*
 * ret_const_8c125864_0d9bf4  0x8c0d9bf4
 */
u32 ret_const_8c125864_0d9bf4(void) {
    return 0x8c125864;
}

/*
 * ret_const_8c125864_0d9c00  0x8c0d9c00
 */
u32 ret_const_8c125864_0d9c00(void) {
    return 0x8c125864;
}

/*
 * ret_const_8c125864_0d9c0c  0x8c0d9c0c
 */
u32 ret_const_8c125864_0d9c0c(void) {
    return 0x8c125864;
}

/*
 * game_calc_0d9c18  0x8c0d9c18
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 */
u32 game_calc_0d9c18(u32 unused_a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 *s0) {
    u32 uStack_4;

    uStack_4 = uStack_4 & 0xfffffffc;
    *s0 = uStack_4;
    return uStack_4;
}

/*
 * game_calc_0d9c48  0x8c0d9c48
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 */
u32 game_calc_0d9c48(u32 unused_a0, u32 *a1, u32 *a2, u32 *a3, u32 ain0) {
    *a1 = 0;
    *a2 = 0;
    *a3 = 0;
    return ain0;
}

/*
 * ret_const_1_0d9c58  0x8c0d9c58
 */
u32 ret_const_1_0d9c58(void) {
    return 1;
}

/*
 * game_draw_0d9c60  0x8c0d9c60
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 * called by: game_draw_0dbd64
 */
u32 game_draw_0d9c60(int a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    Class_129808_draw_016544(a0 + 0x34, 0, unused_a2, a3);
    return 1;
}

/*
 * Class_12bb08_ctor  0x8c0d9c80
 * stores the vtable 0x8c12bb08
 * called by: Class_12b580_ctor, Class_12b758_ctor, Class_12b930_ctor
 */
u32 *Class_12bb08_ctor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    code *pcVar1;
    code *pcVar2;
    u8 *ar6_00;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar3 = a3;
    game_copy_0d99e8(a0, a1, a2);
    *a0 = &g_8c12bb08;
    named_list_ctor_170_wrap(a0 + 0x29, a1, a2);
    uVar3 = 0x3c;
    pcVar2 = game_release_0fe250;
    pcVar1 = named_list_ctor_0c_wrap;
    vec_new_array(a0 + 0xea, named_list_ctor_0c_wrap, game_release_0fe250, 0x3c, 0x11);
    vec_new_array_wrap_0feb0c(a0 + 0x1e9);
    Class_12bb08_calc_015520(a0 + 0x277, pcVar1, pcVar2, uVar3);
    Class_12bb08_draw_019208(a0 + 0x27a);
    Class_12bb08_vec_0d6264(a0 + 0x29a, pcVar1, pcVar2);
    Vec3_assign_f_10277c(a0 + 0x2ea);
    a0[0x2ed] = a3;
    uVar3 = 0x68;
    pcVar2 = game_release_0f68c0;
    pcVar1 = game_vec_0f6870;
    vec_new_array(a0 + 0x303, game_vec_0f6870, game_release_0f68c0, 0x68, 8);
    Class_12bb08_calls_fill_loop_0e91b8(a0 + 0x3d3);
    clear_5_words(a0 + 0x40a, pcVar1, pcVar2, uVar3);
    a0[0x275] = 0;
    a0[0x276] = 0;
    a0[0x2b3] = 0;
    uVar3 = g_8c13f5b0;
    a0[0x2ee] = g_8c13f5ac;
    a0[0x2ef] = uVar3;
    a0[0x2f0] = PTR_FUN_8c13f5b4;
    uVar3 = g_8c13f5bc;
    a0[0x2f1] = g_8c13f5b8;
    a0[0x2f2] = uVar3;
    a0[0x2f3] = PTR_FUN_8c13f5c0;
    uVar3 = g_8c13f5c8;
    a0[0x2f4] = g_8c13f5c4;
    a0[0x2f5] = uVar3;
    a0[0x2f6] = PTR_FUN_8c13f5cc;
    uVar3 = g_8c13f5d4;
    a0[0x2f7] = g_8c13f5d0;
    a0[0x2f8] = uVar3;
    a0[0x2f9] = PTR_LAB_8c13f5d8;
    uVar3 = g_8c13f5e0;
    a0[0x2fd] = g_8c13f5dc;
    a0[0x2fe] = uVar3;
    a0[0x2ff] = PTR_ret_const_1_0dc548_8c13f5e4;
    uVar3 = g_8c13f5ec;
    a0[0x300] = g_8c13f5e8;
    a0[0x301] = uVar3;
    a0[0x302] = PTR_ret_const_1_0dc548_8c13f5f0;
    uVar3 = g_8c13f5f8;
    a0[0x2fa] = g_8c13f5f4;
    a0[0x2fb] = uVar3;
    a0[0x2fc] = PTR_FUN_8c13f5fc;
    if (cVar4 == '\0') {
        a0[0x40f] = 0x43480000;
        a0[0x410] = 0x43de8000;
        a0[0x411] = 0x43480000;
        a0[0x412] = 0x43df8000;
        a0[0x413] = 0x43dc0000;
        a0[0x414] = 0x43df8000;
        a0[0x415] = 0x43dc0000;
        a0[0x416] = 0x43de8000;
    } else {
        *(u64 *)(a0 + 0x40f) = 0x104043480000;
        *(u64 *)(a0 + 0x410) = 0x104443de8000;
        *(u64 *)(a0 + 0x411) = 0x104043480000;
        *(u64 *)(a0 + 0x412) = 0x104c43df8000;
        *(u64 *)(a0 + 0x413) = 0x105043dc0000;
        *(u64 *)(a0 + 0x414) = 0x104c43df8000;
        *(u64 *)(a0 + 0x415) = 0x105043dc0000;
        *(u64 *)(a0 + 0x416) = 0x104443de8000;
    }
    *(u16 *)(a0 + 0x417) = 0;
    *(u16 *)((int)a0 + 0x105e) = 0x20;
    *(u16 *)(a0 + 0x418) = 0;
    *(u16 *)((int)a0 + 0x1062) = 0;
    *(u16 *)(a0 + 0x419) = 0x80;
    *(u16 *)((int)a0 + 0x1066) = 0;
    *(u16 *)(a0 + 0x41a) = 0x80;
    *(u16 *)((int)a0 + 0x106a) = 0x20;
    g_8c4377d8 = 0xffffffff;
    g_8c4377dc = 0xffffffff;
    g_8c4377e0 = 0xffffffff;
    g_8c4377e4 = 0xffffffff;
    uVar3 = 4;
    ar6_00 = &g_8c4377d8;
    set_fields_0_4_c(a0 + 0x40a, a0 + 0x40f, &g_8c4377d8, 4);
    Class_129808_set_model(a0 + 0x40a, a0 + 0x417, ar6_00);
    set_field_10(a0 + 0x40a, 0x80000060);
    a0[0x409] = 0;
    return a0;
}

/*
 * Class_12bb08_release_0da028  0x8c0da028
 * area name: only called from Class_12bb08 methods; behaviour name: mostly calls release functions
 * called by: Class_12bb08_dtor
 */
int Class_12bb08_release_0da028(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Class_12c394_dtor(a0 + 0x11c, 0xffffffff, a2, a3);
        Class_12c3a4_dtor(a0 + 0x108, 0xffffffff, a2, a3);
        Class_12c394_dtor(a0 + 0xe8, 0xffffffff, a2, a3);
        ar7_00 = 4;
        ar6_00 = 0x20;
        vec_delete_array(a0 + 0x68, Class_12c394_dtor, 0x20, 4);
        Vec3_dtor(a0 + 0x40, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(a0 + 0x30, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(a0 + 0x20, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(a0 + 0x10, 0xffffffff, ar6_00, ar7_00);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0, 0xffffffff, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12bb08_release_0da0e8  0x8c0da0e8
 * area name: only called from Class_12bb08 methods; behaviour name: mostly calls release functions
 * called by: Class_12bb08_dtor
 */
int Class_12bb08_release_0da0e8(int a0, u32 a1) {
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar7_00 = 0x23;
        ar6_00 = 0x10;
        vec_delete_array(a0, Class_12bb08_release_0da130, 0x10, 0x23);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12bb08_release_0da130  0x8c0da130
 * area name: sits between Class_12bb08 functions (same compilation unit); behaviour name: mostly calls release
 * functions
 */
int Class_12bb08_release_0da130(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        Class_12bb08_release_0da170(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12bb08_release_0da170  0x8c0da170
 * area name: sits between Class_12bb08 functions (same compilation unit); behaviour name: mostly calls release
 * functions called by: Class_12bb08_release_0da130, game_release_0fe250
 */
int Class_12bb08_release_0da170(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0;
        free_if_nonnull_wrap_0c0264(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * named_list_ctor_0c_wrap  0x8c0da1b0
 * only calls named_list_ctor_0c
 */
u32 named_list_ctor_0c_wrap(u32 a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    uVar1 = named_list_ctor_0c(a0, (&DATA_8c13f7c0) + 0x15d, a2);
    return uVar1;
}

/*
 * named_list_ctor_170_wrap  0x8c0da1dc
 * only calls named_list_ctor_170
 * called by: Class_12bb08_ctor
 */
u32 named_list_ctor_170_wrap(u32 a0, u32 unused_a1, u32 a2) {
    u32 uVar1;

    uVar1 = named_list_ctor_170(a0, (&DATA_8c13f7c0) + 0x15d, a2);
    return uVar1;
}

/*
 * Class_12bb08_dtor  0x8c0da208
 * stores the vtable 0x8c12bb08
 * called by: Class_12b580_dtor, Class_12b758_dtor, Class_12b930_dtor
 */
u32 *Class_12bb08_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12bb08;
        free_if_nonnull_wrap_0151a0(a0 + 0x40a, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_0e91f0(a0 + 0x3d3, 0xffffffff, a2, a3);
        uVar2 = 8;
        uVar1 = 0x68;
        vec_delete_array(a0 + 0x303, game_release_0f68c0, 0x68, 8);
        free_if_nonnull_wrap_102790(a0 + 0x2ea, 0xffffffff, uVar1, uVar2);
        Class_12bb08_release_0da028(a0 + 0x29a, 0xffffffff, uVar1, uVar2);
        Class_129a50_dtor(a0 + 0x27a, 0xffffffff, uVar1, uVar2);
        Class_1298b8_dtor(a0 + 0x277, 0xffffffff, uVar1, uVar2);
        Class_12bb08_release_0da0e8(a0 + 0x1e9, 0xffffffff);
        ar7_00 = 0x11;
        uVar2 = 0x3c;
        vec_delete_array(a0 + 0xea, game_release_0fe250, 0x3c, 0x11);
        Class_12bb08_uses_Class_12c1f0_m0_0fdf18(a0 + 0x29, 0xffffffff, uVar2, ar7_00);
        uVar1 = 0;
        Class_12bce0_dtor(a0, 0, uVar2, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12bb08_m1_0da338  0x8c0da338
 * called by: Class_12b580_m1_0e634c, Class_12b758_m1_0e4b5c, Class_12b930_m1_0de1dc
 */
u32 Class_12bb08_m1_0da338(int a0, int a1, u32 a2) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 ar6_00;
    int ar7_00;
    int iVar4;
    int iVar5;

    iVar1 = list_node_next_wrap_0da588(a0 + 0xa4);
    iVar3 = a1;
    ar6_00 = a2;
    ar7_00 = a0;
    Class_12bb08_uses_get_field_a4_s16_0e9220(a0 + 0xf4c, a1, a2, a0);
    iVar2 = get_field_300_0bf154(a0 + 0xa4);
    g_8c437550 = iVar2;
    if (iVar2 != 0) {
        iVar5 = iVar1;
        for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
            iVar3 = a1;
            ar6_00 = a2;
            ar7_00 = a0;
            (**(code **)(*(int *)(iVar5 + 8) + 0x10))(iVar5, a1, a2, a0);
            iVar5 = list_node_next(iVar5);
        }
        iVar5 = iVar1;
        for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
            CAnimal_uses_list_node_next_0f4258(iVar5, a0, ar6_00, ar7_00);
            iVar3 = a0;
            Class_12bb08_vec_0f43bc(iVar5, a0, ar6_00, ar7_00);
            iVar5 = list_node_next(iVar5);
        }
        iVar5 = iVar1;
        for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
            iVar3 = Class_12bb08_test_0da4f8(iVar5);
            if (iVar3 == 1) {
                CAnimal_vec_0f4974(iVar5, a0, ar6_00, ar7_00);
            }
            iVar3 = a0;
            (**(code **)(*(int *)(iVar5 + 8) + 0x24))(iVar5, a0, ar6_00, ar7_00);
            iVar5 = list_node_next(iVar5);
        }
        for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
            iVar3 = a0;
            (**(code **)(*(int *)(iVar1 + 8) + 0x28))(iVar1, a0, ar6_00, ar7_00);
            iVar1 = list_node_next(iVar1);
        }
        for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
            iVar2 = has_field_2c(a0 + iVar1 * 0x68 + 0xc0c);
            if (iVar2 == 1) {
                iVar3 = a0;
                Class_12bb08_vec_0f7258(a0 + iVar1 * 0x68 + 0xc0c, a0, ar6_00, ar7_00);
            }
        }
        Class_12bb08_uses_get_field_24_0dbbe8(a0, iVar3, ar6_00, ar7_00);
    }
    return 1;
}

/*
 * Class_12bb08_test_0da4f8  0x8c0da4f8
 * area name: sits between Class_12bb08 functions (same compilation unit); behaviour name: returns the result of a
 * comparison called by: Class_12b930_m3_0de4b0, Class_12bb08_m1_0da338, Class_12bb08_m2_0da5a8
 */
u32 Class_12bb08_test_0da4f8(int a0) {
    if ((*(int *)(a0 + 0x104) != 0) || (*(int *)(a0 + 0x108) != 0)) {
        return 1;
    }
    if ((*(int *)(a0 + 0x124) == 0) && (*(int *)(a0 + 0x128) == 0)) {
        if ((*(float *)(a0 + 300) == 0.0) && ((*(float *)(a0 + 0x130) == 0.0 && (*(float *)(a0 + 0x134) == 0.0)))) {
            if (*(int *)(a0 + 0x13c) == -1) {
                return 0;
            }
            return 1;
        }
        return 1;
    }
    return 1;
}

/*
 * list_node_next_wrap_0da588  0x8c0da588
 * only calls list_node_next
 * called by: CEnv_item_cursor_next, CWaterTank_uses_get_field_300_0e0f48, Class_129974_vec_0db3bc,
 * Class_12b930_m3_0de4b0, Class_12b930_vec_0e3994, Class_12bb08_m1_0da338, Class_12bb08_m2_0da5a8,
 * Class_12bb08_uses_get_field_24_0dbbe8 (+15 more)
 */
u32 list_node_next_wrap_0da588(u32 a0) {
    u32 uVar1;

    uVar1 = list_node_next(a0);
    return uVar1;
}

/*
 * Class_12bb08_m2_0da5a8  0x8c0da5a8
 * called by: Class_12b580_m2_0e6548, Class_12b758_m2_0e4ce4, Class_12b930_m2_0de3d4
 */
u32 Class_12bb08_m2_0da5a8(int a0, int a1, u32 a2) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 ar6_00;
    int ar7_00;
    int iVar4;
    int iVar5;

    iVar1 = list_node_next_wrap_0da588(a0 + 0xa4);
    iVar3 = a1;
    ar6_00 = a2;
    ar7_00 = a0;
    Class_12bb08_uses_get_field_a4_s16_0e9220(a0 + 0xf4c, a1, a2, a0);
    iVar2 = get_field_300_0bf154(a0 + 0xa4);
    if (iVar2 != 0) {
        iVar5 = iVar1;
        for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
            iVar3 = a1;
            ar6_00 = a2;
            ar7_00 = a0;
            (**(code **)(*(int *)(iVar5 + 8) + 0x14))(iVar5, a1, a2, a0);
            iVar5 = list_node_next(iVar5);
        }
        iVar5 = iVar1;
        for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
            iVar3 = a0;
            CAnimal_uses_list_node_next_0f4258(iVar5, a0, ar6_00, ar7_00);
            iVar5 = list_node_next(iVar5);
        }
        iVar5 = iVar1;
        for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
            iVar3 = Class_12bb08_test_0da4f8(iVar5);
            if (iVar3 == 1) {
                CAnimal_vec_0f4974(iVar5, a0, ar6_00, ar7_00);
            }
            iVar3 = a0;
            (**(code **)(*(int *)(iVar5 + 8) + 0x24))(iVar5, a0, ar6_00, ar7_00);
            iVar5 = list_node_next(iVar5);
        }
        for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
            iVar3 = a0;
            (**(code **)(*(int *)(iVar1 + 8) + 0x28))(iVar1, a0, ar6_00, ar7_00);
            iVar1 = list_node_next(iVar1);
        }
        Class_12bb08_uses_get_field_24_0dbbe8(a0, iVar3, ar6_00, ar7_00);
        for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
            iVar2 = has_field_2c(a0 + iVar1 * 0x68 + 0xc0c);
            if (iVar2 == 1) {
                iVar3 = a0;
                Class_12b580_vec_0f7204(a0 + iVar1 * 0x68 + 0xc0c, a0, ar6_00, ar7_00);
            }
        }
    }
    return 1;
}

/*
 * game_uses_list_node_next_wrap_0da754  0x8c0da754
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is list_node_next_wrap_0da588
 * called by: Class_12b580_draw_0e660c, Class_12b758_draw_0e4dd0, game_draw_0df668, game_draw_0e505c,
 * game_uses_color_set_white_a0_0df250, game_uses_noop_0de6d0, game_uses_noop_0deb60, game_uses_noop_0def78
 */
u32 game_uses_list_node_next_wrap_0da754(int a0) {
    int ar4_00;
    int iVar1;
    int iVar2;
    u8 *ar5_00;
    float *ar6_00;
    u8 *ar7_00;
    int iVar3;
    float fVar4;
    float fVar5;
    char cVar6;
    char cVar7;
    float fStack_28;
    float fStack_24;
    u8 auStack_20[4];
    u8 auStack_1c[4];
    u8 auStack_18[8];

    cVar7 = '\0';
    cVar6 = '\0';
    ar4_00 = list_node_next_wrap_0da588(a0 + 0xa4);
    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    if (iVar1 != 0) {
        if (g_8c437550 < iVar1) {
            iVar1 = g_8c437550;
        }
        for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
            ar7_00 = auStack_18;
            get_vec3_field_30(ar4_00, auStack_20, auStack_1c, ar7_00);
            ar6_00 = &fStack_28;
            ar5_00 = auStack_20;
            matrix_float_calc_256294(0, ar5_00, ar6_00);
            if (cVar7 == '\0') {
                fVar5 = -150.0;
                fVar4 = fStack_28;
            } else {
                fVar4 = -150.0;
                fVar5 = 800.0;
            }
            if (cVar6 == '\0' && fVar4 < fVar5) {
            LAB_8c0da802:
                iVar2 = get_field_24_05c284(ar4_00, ar5_00);
                if (iVar2 == 0xe)
                    goto LAB_8c0da812;
            } else {
                if (cVar7 == '\0') {
                    fVar5 = 800.0;
                    fVar4 = fStack_28;
                } else {
                    fVar4 = 800.0;
                    fVar5 = -100.0;
                }
                if (cVar6 == '\0' && fVar5 < fVar4)
                    goto LAB_8c0da802;
                if (cVar7 == '\0') {
                    fVar5 = -100.0;
                    fVar4 = fStack_24;
                } else {
                    fVar4 = -100.0;
                    fVar5 = 600.0;
                }
                if (cVar6 == '\0' && fVar4 < fVar5)
                    goto LAB_8c0da802;
                if (cVar7 == '\0') {
                    fVar5 = 600.0;
                    fVar4 = fStack_24;
                } else {
                    fVar4 = 600.0;
                    fVar5 = 3.52567e-42;
                }
                if ((cVar6 == '\0' && fVar5 < fVar4) || (ar4_00 == *(int *)(a0 + 0x9d4)))
                    goto LAB_8c0da802;
            LAB_8c0da812:
                game_calls_calc_0f4b44(ar4_00);
                (**(code **)(*(int *)(ar4_00 + 8) + 0x34))(ar4_00, ar5_00, ar6_00, ar7_00);
            }
            ar4_00 = list_node_next(ar4_00);
        }
    }
    return 1;
}

/*
 * game_uses_light_set_vec_0da88c  0x8c0da88c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is light_set_vec_4c0ef4
 * called by: game_uses_light_set_vec_0df8d0
 */
u32 game_uses_light_set_vec_0da88c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    bool bVar2;
    u32 in_PR;

    bVar2 = *(int *)(a0 + 0x9d4) != 0;
    if (bVar2) {
        uVar1 = 1;
        light_set_vec_4c0ef4(1, a1, a2, a3, in_PR);
        gfxlib_calc_219070();
        game_calls_calc_0f4b44(*(u32 *)(a0 + 0x9d4));
        (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x34))(*(int *)(a0 + 0x9d4), a1, a2, a3);
        uVar1 = 1;
        light_set_vec_4c0ef4(1, a1, a2, a3, in_PR);
        gfxlib_calc_219070();
    }
    return (u32)bVar2;
}

/*
 * CEnv_AddItem  0x8c0da934
 * called by: Class_12b580_uses_get_field_300_0e6718, env_add_item_if_room, game_uses_get_field_300_0e50a0
 * strings: "Lack of memory"; "CEnv::AddItem()"
 */
u32 CEnv_AddItem(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;

    iVar1 = CEnv_take_free_slot(a0 + 0x7a4);
    if (iVar1 == 0) {
        a3 = 2;
        a2 = 1;
        (*(code *)(&report_error_message))("Lack of memory", "CEnv::AddItem()", 1, 2);
    }
    iVar2 = a1;
    set_field_2c_wrap(a0, a1);
    *(int *)(iVar1 + 8) = a1;
    iVar2 = get_field_24_05c284(a1, iVar2);
    list_append_at_0c(iVar2 * 0x3c + a0 + 0x3a8, iVar1);
    set_field_160(a1, iVar1);
    (**(code **)(*(int *)(a1 + 8) + 0x60))(a1, iVar1, a2, a3);
    iVar1 = a1;
    list_append_at_170(a0 + 0xa4, a1);
    Vec3_assign_wrap_0f4da4(a1, iVar1, a2, a3);
    return 0;
}

/*
 * set_field_160  0x8c0daa28
 * called by: CEnv_AddItem
 */
int set_field_160(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x160;
    *(u32 *)(0x160 + a0) = a1;
    return iVar1;
}

/*
 * CEnv_uses_mask_74_7fffffff_0daa34  0x8c0daa34
 * area name: sits between CEnv functions (same compilation unit); behaviour name: its main named callee is
 * mask_74_7fffffff
 */
u32 CEnv_uses_mask_74_7fffffff_0daa34(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    if ((*(int *)(0x9d4 + a0) != 0) &&
        (iVar1 = (*(code *)(&get_field_70_05f490))(*(u32 *)(0x9d4 + a0), a1, a2, a3), iVar1 == 0)) {
        mask_74_7fffffff(*(u32 *)(0x9d4 + a0));
        *(u32 *)(0x9d4 + a0) = 0;
        return 1;
    }
    return 0;
}

/*
 * CEnv_update_fields_0daa88  0x8c0daa88
 * area name: sits between CEnv functions (same compilation unit); behaviour name: conditionally writes members
 */
u32 CEnv_update_fields_0daa88(int *a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 uVar1;

    if (*(int *)(0x9d4 + (int)a0) == 0) {
        uVar1 = 0;
    } else {
        uVar1 = (**(code **)(*a0 + 0x5c))(a0, *(u32 *)(0x9d4 + (int)a0), a2, a3);
        *(u32 *)(0x9d4 + (int)a0) = 0;
    }
    return uVar1;
}

/*
 * CEnv_take_out_item  0x8c0daad0
 * removes item a1 from its per-kind node list (+0x3a8) and the item list (+0xa4), frees its slot and calls its method
 * 100
 */
int CEnv_take_out_item(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    int iVar2;
    u32 auStack_14[2];

    auStack_14[0] = 0;
    iVar2 = a1;
    iVar1 = get_field_24_05c284(a1, a1);
    ar5_00 = get_field_160_0dab80(a1);
    (*(code *)(&CNodePtrList_TakeOutItem))(iVar1 * 0x3c + a0 + 0x3a8, ar5_00, a2, a3);
    auStack_14[0] = get_field_160_0dab80(a1);
    CEnv_update_fields_0feb88(a0 + 0x7a4, auStack_14);
    iVar2 = a1;
    CItemList_TakeOutItem(a0 + 0xa4, a1);
    (**(code **)(*(int *)(a1 + 8) + 100))(a1, iVar2, a2, a3);
    return a1;
}

/*
 * get_field_160_0dab80  0x8c0dab80
 * called by: CEnv_take_out_item, Class_12bb08_uses_get_field_24_0dbbe8
 */
u32 get_field_160_0dab80(int a0) {
    return *(u32 *)(0x160 + a0);
}

/*
 * CEnv_item_cursor_next  0x8c0dab8c
 * advances the item cursor (+0x9d4) to the next item of the list at +0xa4, wrapping at the end; 0 when the list is
 * empty
 */
u32 CEnv_item_cursor_next(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    if (iVar1 != 0) {
        if ((*(int *)(0x9d4 + a0) == 0) ||
            (iVar1 = get_field_4_on_field_170(a0 + 0xa4), *(int *)(0x9d4 + a0) == iVar1)) {
            uVar2 = list_node_next_wrap_0da588(a0 + 0xa4);
            *(u32 *)(0x9d4 + a0) = uVar2;
        } else {
            uVar2 = (*(code *)(&list_node_next))(*(u32 *)(0x9d4 + a0), a1, a2, a3);
            *(u32 *)(0x9d4 + a0) = uVar2;
        }
        return *(u32 *)(0x9d4 + a0);
    }
    return 0;
}

/*
 * get_field_4_on_field_170  0x8c0dac20
 * calls get_field_4_0dac48 on the member at +0x170
 * called by: CEnv_item_cursor_next
 */
u32 get_field_4_on_field_170(int a0) {
    u32 uVar1;

    uVar1 = get_field_4_0dac48(a0 + 0x170);
    return uVar1;
}

/*
 * get_field_4_0dac48  0x8c0dac48
 * called by: CItemGLoadRequestList_TakeOu, CItemList_TakeOutItem, CNodePtrList_TakeOutItem, CWaterSnowList_TakeOut,
 * get_field_4_on_field_170, list_append_58, list_append_at_0c, list_append_at_14 (+1 more)
 */
u32 get_field_4_0dac48(int a0) {
    return *(u32 *)(a0 + 4);
}

/*
 * CEnv_vec_0dac50  0x8c0dac50
 * area name: sits between CEnv functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: game_vec_0dfa84
 */
int CEnv_vec_0dac50(int a0, float *a1, u32 a2, u32 a3) {
    int ar4_00;
    int iVar1;
    u32 uVar2;
    int *a4;
    float *ar5_00;
    u32 ar5_01;
    float *ar6_00;
    float fVar3;
    float fVar4;
    code *pcVar5;
    char cVar6;
    char cVar7;
    float fStack_a4;
    float fStack_a0;
    int iStack_9c;
    float fStack_98;
    u8 auStack_94[16];
    u8 auStack_84[8];
    float fStack_7c;
    float fStack_78;
    u8 auStack_74[100];

    cVar7 = '\0';
    cVar6 = '\0';
    fStack_98 = 3.4028235e+38;
    Vec3_ctor_zero(auStack_84, a1, a2);
    fVar3 = g_8c1264b8;
    fVar4 = _UNK_8c1264bc;
    if (cVar7 == '\0') {
        fVar3 = *a1;
        fVar4 = g_8c1264b8;
    }
    if (fVar3 == fVar4) {
        *(u32 *)(a0 + 0x9d4) = 0;
        Vec3_dtor(auStack_84, 0xffffffff, a2, a3);
        ar4_00 = 0;
    } else {
        ar6_00 = &fStack_98;
        ar5_00 = a1;
        ar4_00 = game_uses_Vec3_dtor_0dbe24(a0, a1, ar6_00, a3);
        if (ar4_00 == 0) {
            *(u32 *)(a0 + 0x9d4) = 0;
            Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
        } else {
            Vec3_ctor_copy_wrap_02f670(ar4_00, ar5_00, ar6_00, a3, auStack_94);
            Vec3_assign(auStack_84, auStack_94, ar6_00, a3);
            ar5_01 = 0xffffffff;
            Vec3_dtor(auStack_94, 0xffffffff, ar6_00, a3);
            fVar3 = fStack_7c;
            if (cVar7 == '\0') {
                fVar3 = *(float *)(a0 + 0xa70);
                fStack_78 = fStack_7c;
            }
            if (cVar6 != '\0' || fStack_78 <= fVar3) {
                iVar1 = get_field_24_05c284(ar4_00, ar5_01);
                if (iVar1 == 0x10) {
                    *(u32 *)(a0 + 0x9d4) = 0;
                    Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
                    ar4_00 = 0;
                } else {
                    if (iVar1 == 0xe) {
                        uVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 0x148))(ar4_00, ar5_01, ar6_00, a3);
                        iStack_9c = (int)(short)uVar2;
                        if (iStack_9c == 1) {
                            *(u32 *)(a0 + 0x9d4) = 0;
                            Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
                            return 0;
                        }
                    }
                    if (cVar7 == '\0') {
                        pcVar5 = (code *)0x42700000;
                        fVar3 = fStack_98;
                    } else {
                        fVar3 = 60.0;
                        pcVar5 = get_field_a4_032154;
                    }
                    if (cVar6 != '\0' || (float)pcVar5 <= fVar3) {
                        if (cVar7 == '\0') {
                            fStack_a4 = *a1;
                            fStack_a0 = a1[1];
                        } else {
                            fStack_a4 = (float)*(u64 *)a1;
                            fStack_a0 = (float)*(u64 *)(a1 + 1);
                            iStack_9c = (int)((u64) * (u64 *)(a1 + 1) >> 0x20);
                        }
                        a4 = (int *)get_field_a4_032154(ar4_00);
                        (**(code **)(*a4 + 0x38))(a4, auStack_74, ar6_00, a3);
                        iVar1 = game_calls_float_calc_0d1754(&fStack_a4, auStack_74);
                        if (iVar1 == 0) {
                            ar4_00 = 0;
                        }
                        *(int *)(a0 + 0x9d4) = ar4_00;
                        Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
                    } else {
                        *(int *)(a0 + 0x9d4) = ar4_00;
                        Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
                    }
                }
            } else {
                *(u32 *)(a0 + 0x9d4) = 0;
                Vec3_dtor(auStack_84, 0xffffffff, ar6_00, a3);
                ar4_00 = 0;
            }
        }
    }
    /* WARNING: Read-only address (ram,0x8c1264bc) is written */
    return ar4_00;
}

/*
 * game_list_0daea8  0x8c0daea8
 * area name: game code; nothing names its area yet; behaviour name: mostly calls list functions
 */
int game_list_0daea8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int a4;
    int iVar2;
    int iVar4;
    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    a4 = list_node_next_wrap_0da588(a0 + 0xa4);
    iVar2 = game_sound_021720(0x8c2b59d0, 0, a2, a3);
    if (iVar1 != 0) {
        for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
            (**(code **)(*(int *)(a4 + 8) + 0x7c))(a4, a1, a2, a3);
            iVar2 = list_node_next(a4);
            a4 = iVar2;
        }
    }
    return iVar2;
}

/*
 * pure_virtual_stub_wrap_0daf3c  0x8c0daf3c
 * only calls pure_virtual_stub
 * called by: game_uses_get_field_24_0e5238, game_uses_get_field_cc_0e6804, game_uses_pure_virtual_stub_0dfe2c
 */
u32 pure_virtual_stub_wrap_0daf3c(void) {
    pure_virtual_stub();
    return 1;
}

/*
 * game_list_0daf80  0x8c0daf80
 * area name: game code; nothing names its area yet; behaviour name: mostly calls list functions
 * called by: game_uses_rotate_degrees_7c_on_field_9_0e68f4, input_uses_rotate_degrees_7c_on_field_9_0e5a08,
 * input_uses_set_fields_28_48_0dff1c
 */
int game_list_0daf80(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int a4;
    int iVar2;
    int iVar3;

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    a4 = list_node_next_wrap_0da588(a0 + 0xa4);
    iVar2 = 0x1024;
    *(u32 *)(0x1024 + a0) = 0;
    if (iVar1 != 0) {
        for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
            (**(code **)(*(int *)(a4 + 8) + 0x60))(a4, a1, a2, a3);
            iVar2 = list_node_next(a4);
            a4 = iVar2;
        }
    }
    return iVar2;
}

/*
 * noop_0db004  0x8c0db004
 */
u32 noop_0db004(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * call_all_list_64  0x8c0db008
 * calls vtable slot 0x64 on each node of the list at +0xa4
 * called by: input_uses_call_all_list_64_0e004c
 */
u32 call_all_list_64(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int a4;
    int iVar2;

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    a4 = list_node_next_wrap_0da588(a0 + 0xa4);
    if (iVar1 != 0) {
        for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
            (**(code **)(*(int *)(a4 + 8) + 100))(a4, a1, a2, a3);
            a4 = list_node_next(a4);
        }
    }
    return 0;
}

/*
 * ret_const_0_0db088  0x8c0db088
 */
u32 ret_const_0_0db088(void) {
    return 0;
}

/*
 * call_all_list_a8  0x8c0db090
 * calls vtable slot 0xa8 on each node of the list at +0xa4
 * called by: game_sound_0e0488, game_uses_call_all_list_a8_0e6d24
 */
int call_all_list_a8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int a4;
    int iVar2;

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    a4 = list_node_next_wrap_0da588(a0 + 0xa4);
    if (iVar1 != 0) {
        for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
            (**(code **)(0xa8 + *(int *)(a4 + 8)))(a4, a1, a2, a3);
            a4 = list_node_next(a4);
        }
    }
    return a4;
}

/*
 * list_call_method_68_each  0x8c0db10c
 * calls method 0x68 on every node of the list at +0xa4
 */
int list_call_method_68_each(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int a4;
    int iVar2;

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    a4 = list_node_next_wrap_0da588(a0 + 0xa4);
    if (iVar1 != 0) {
        for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
            (**(code **)(*(int *)(a4 + 8) + 0x68))(a4, a1, a2, a3);
            a4 = list_node_next(a4);
        }
    }
    return a4;
}

/*
 * noop_0db184  0x8c0db184
 */
u32 noop_0db184(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_uses_set_vec3_field_44_0db188  0x8c0db188
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_vec3_field_44
 */
u32 game_uses_set_vec3_field_44_0db188(int a0, u32 a1, u32 a2, u32 a3) {
    game_vec_0d66d8(a0 + 0xa68, a1, a2, a3);
    set_vec3_field_44(a0 + 0x9e8);
    set_vec_50_fr4_6(a0 + 0x9e8);
    (**(code **)(*(int *)(a0 + 0x9e8) + 0xc))((int *)(a0 + 0x9e8), a1, a2, a3);
    return 1;
}

/*
 * game_uses_Class_129974_dtor_0db224  0x8c0db224
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Class_129974_dtor
 * called by: game_uses_Class_129974_dtor_0e0614
 */
u32 game_uses_Class_129974_dtor_0db224(int a0, u8 *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar4_00;
    int *a4;
    int iVar2;
    u8 *ar5_00;
    int iVar3;
    u8 auStack_58[72];

    ar5_00 = a1;
    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    ar4_00 = list_node_next_wrap_0da588(a0 + 0xa4);
    Class_129974_ctor_wrap(auStack_58, ar5_00, a2);
    set_vec3_and_w_30(auStack_58, a1);
    iVar3 = 0;
    while (true) {
        if (iVar1 <= iVar3) {
            Class_129974_dtor(auStack_58, 0xffffffff, a2, a3);
            return 0;
        }
        a4 = (int *)get_field_a4_032154(ar4_00);
        a1 = auStack_58;
        iVar2 = (**(code **)(*a4 + 0x14))(a4, a1, a2, a3);
        if (iVar2 == 1)
            break;
        ar4_00 = list_node_next(ar4_00);
        iVar3 = iVar3 + 1;
    }
    Class_129974_dtor(auStack_58, 0xffffffff, a2, a3);
    return 1;
}

/*
 * Class_129974_ctor_wrap  0x8c0db304
 * only calls Class_129974_ctor
 * called by: game_uses_Class_129974_dtor_0db224, game_uses_Class_129974_dtor_0e0614, game_vec_0f78d8
 */
u32 Class_129974_ctor_wrap(u32 a0, u32 a1, u32 a2) {
    u32 uVar1;

    uVar1 = Class_129974_ctor(a0, a1, a2);
    return uVar1;
}

/*
 * Class_129974_sound_0db32c  0x8c0db32c
 * area name: sits between Class_129974 functions (same compilation unit); behaviour name: mostly calls sound functions
 */
u32 Class_129974_sound_0db32c(u32 unused_a0, u32 unused_a1, u32 unused_a2, int a3) {
    u32 uVar1;
    u32 auStack_10[2];

    if (a3 == 0xe) {
        uVar1 = se_play_3d(0x8c2b59d0, 0x26, unused_a2, 0xe);
    } else {
        auStack_10[0] = se_open_bank1(0x8c2b59d0);
        uVar1 = 0xd;
        se_play(0x8c2b59d0, auStack_10[0], 0xd);
        uVar1 = se_close_port_handle(0x8c2b59d0, auStack_10);
    }
    return uVar1;
}

/*
 * Class_129974_vec_0db3bc  0x8c0db3bc
 * area name: sits between Class_129974 functions (same compilation unit); behaviour name: mostly calls vec functions
 * called by: input_uses_get_field_300_0dc61c
 */
int Class_129974_vec_0db3bc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int ar4_00;
    u8 *ar6_00;
    u8 *ar7_00;
    int iVar3;
    int iVar4;
    int a4;
    int iVar5;
    u32 extraout_fr1;
    u32 extraout_fr1_00;
    u32 extraout_fr0;
    u32 in_fr15;
    float fVar6;
    u64 uVar7;
    u64 in_xd14;
    char cVar8;
    char cVar9;
    u64 uStack_4c;
    u8 auStack_44[4];
    u8 auStack_40[8];
    u8 auStack_38[4];
    u8 auStack_34[4];
    u8 auStack_30[12];

    cVar9 = '\0';
    cVar8 = '\0';
    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    iVar3 = 0;
    Vec3_ctor_zero(auStack_38, a1, a2);
    Vec3_ctor_zero((int)&uStack_4c + 4, a1, a2);
    if (cVar9 == '\0') {
        uStack_4c = (u64)uStack_4c._4_4_ << 0x20;
        uVar7 = CONCAT44(0x47435000, in_fr15);
    } else {
        uStack_4c = (u64)extraout_fr1;
        uVar7 = 0x8c022cb047435000;
    }
    if (iVar1 == 0) {
        Vec3_dtor((int)&uStack_4c + 4, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_38, 0xffffffff, a2, a3);
        iVar3 = 0;
    } else {
        list_node_next_wrap_0da588(a0 + 0xa4);
        ar7_00 = auStack_40;
        ar6_00 = auStack_44;
        iVar1 = (int)&uStack_4c + 4;
        get_vec3_field_50_0db5a8(a0 + 0x9e8, iVar1, ar6_00, ar7_00);
        for (iVar4 = 3; iVar4 < 8; iVar4 = iVar4 + 1) {
            iVar2 = get_field_38_0db5a0(iVar4 * 0x3c + a0 + 0x3a8);
            if (iVar2 != 0) {
                ar4_00 = list_node_next_wrap_0db580(iVar4 * 0x3c + a0 + 0x3a8);
                a4 = *(int *)(ar4_00 + 8);
                for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
                    ar7_00 = auStack_30;
                    ar6_00 = auStack_34;
                    (**(code **)(*(int *)(a4 + 8) + 0x134))(a4, auStack_38, ar6_00, ar7_00);
                    iVar1 = a0 + 0xa68;
                    Vec3_sub_assign(auStack_38, iVar1);
                    Vec3_length_sq(auStack_38, iVar1, ar6_00, ar7_00);
                    if (cVar9 == '\0') {
                        uVar7 = CONCAT44((int)((u64)uVar7 >> 0x20), extraout_fr0);
                    } else {
                        in_xd14 = CONCAT44(extraout_fr0, extraout_fr1_00);
                    }
                    fVar6 = (float)uVar7;
                    if ((cVar8 == '\0' && fVar6 < (float)((u64)uVar7 >> 0x20)) &&
                        (iVar3 = a4, uVar7 = in_xd14, cVar9 == '\0')) {
                        uVar7 = CONCAT44(fVar6, fVar6);
                    }
                    ar4_00 = list_node_next(ar4_00);
                    a4 = *(int *)(ar4_00 + 8);
                }
            }
        }
        Vec3_dtor((int)&uStack_4c + 4, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(auStack_38, 0xffffffff, ar6_00, ar7_00);
    }
    return iVar3;
}

/*
 * list_node_next_wrap_0db580  0x8c0db580
 * only calls list_node_next
 * called by: CWaterTank_uses_Vec3_distance_sq_to_xyz_0e1398, Class_129974_vec_0db3bc, Class_12b580_m1_0e634c,
 * game_list_0dc8fc, game_uses_get_field_38_0dfbdc
 */
u32 list_node_next_wrap_0db580(u32 a0) {
    u32 uVar1;

    uVar1 = list_node_next(a0);
    return uVar1;
}

/*
 * get_field_38_0db5a0  0x8c0db5a0
 * called by: CWaterTank_uses_Vec3_distance_sq_to_xyz_0e1398, Class_129974_vec_0db3bc, Class_12b580_m1_0e634c,
 * game_list_0dc8fc, game_uses_get_field_38_0dfbdc, get_field_38_wrap
 */
u32 get_field_38_0db5a0(int a0) {
    return *(u32 *)(a0 + 0x38);
}

/*
 * get_vec3_field_50_0db5a8  0x8c0db5a8
 * copies the three words at +0x50 to the pointers in a1..a3
 * called by: Class_129974_vec_0db3bc, Class_12b930_m1_0de1dc, game_vec_0db5c4
 */
u32 *get_vec3_field_50_0db5a8(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0x50);
    *a2 = *(u32 *)(a0 + 0x54);
    *a3 = *(u32 *)(a0 + 0x58);
    return (u32 *)(a0 + 0x54);
}

/*
 * game_vec_0db5c4  0x8c0db5c4
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0db5c4(int a0, double *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar4_00;
    double *ar5_00;
    u8 *puVar2;
    int ar5_01;
    u8 *ar6_00;
    u8 *ar7_00;
    u32 uVar3;
    int iVar4;
    float fVar5;
    double in_dr0;
    double dVar6;
    float fVar7;
    float fVar8;
    u32 in_fr12;
    u32 in_fr15;
    double dVar9;
    double in_xd14;
    bool bVar10;
    char cVar11;
    char cVar12;
    u8 auStack_44[4];
    u8 auStack_40[4];
    u8 auStack_3c[8];
    u8 auStack_34[4];
    u8 auStack_30[4];
    u8 auStack_2c[12];

    cVar12 = '\0';
    cVar11 = '\0';
    ar5_00 = a1;
    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    uVar3 = 0;
    Vec3_ctor_zero(auStack_34, ar5_00, a2);
    Vec3_ctor_zero(auStack_44, ar5_00, a2);
    fVar8 = 0.0;
    if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(0x47435000, in_fr15);
    } else {
        dVar9 = -7.932638084811958e-251;
    }
    if (iVar1 == 0) {
        Vec3_dtor(auStack_44, 0xffffffff, a2, a3);
        Vec3_dtor(auStack_34, 0xffffffff, a2, a3);
        uVar3 = 0;
    } else {
        ar7_00 = auStack_3c;
        ar6_00 = auStack_40;
        puVar2 = auStack_44;
        get_vec3_field_50_0db5a8(a0 + 0x9e8, puVar2, ar6_00, ar7_00);
        ar4_00 = list_node_next_wrap_0da588(a0 + 0xa4);
        for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
            ar7_00 = auStack_2c;
            ar6_00 = auStack_30;
            get_vec3_field_30(ar4_00, auStack_34, ar6_00, ar7_00);
            ar5_01 = a0 + 0xa68;
            Vec3_sub_assign(auStack_34, ar5_01);
            Vec3_length_sq(auStack_34, ar5_01, ar6_00, ar7_00);
            dVar6 = in_dr0;
            if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44((int)((u64)dVar9 >> 0x20), (int)((u64)in_dr0 >> 0x20));
                dVar6 = in_xd14;
            }
            in_xd14 = dVar6;
            Vec3_length(auStack_34, ar5_01, ar6_00, ar7_00);
            fVar5 = (float)((u64)in_dr0 >> 0x20);
            puVar2 = auStack_34;
            Vec3_cos_angle(auStack_44, puVar2, ar6_00, ar7_00);
            if (cVar12 == '\0') {
                dVar6 = (double)CONCAT44(0x40000000, *(u32 *)(a0 + 0xba4));
                fVar8 = fVar5;
            } else {
                dVar6 = -1.2765500855395165e-250;
            }
            if (cVar11 == '\0') {
                fVar5 = SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20);
            } else {
                fVar5 = SUB84(dVar6 / dVar6, 0);
            }
            if (cVar12 == '\0') {
                in_dr0 = (double)CONCAT44(0x40000000, fVar5);
            } else {
                in_dr0 = -1.2765500855395165e-250;
            }
            if (cVar11 == '\0') {
                fVar7 = (float)((u64)in_dr0 >> 0x20);
                fVar5 = SUB84(in_dr0, 0) + fVar7;
                in_dr0 = (double)CONCAT44(fVar7, fVar5);
                bVar10 = fVar8 < fVar5;
            } else {
                in_dr0 = in_dr0 + in_dr0;
                bVar10 = (double)CONCAT44(in_fr12, fVar8) < in_dr0;
            }
            if (((bVar10) && (fVar5 = SUB84(dVar9, 0), cVar11 == '\0' && fVar5 < (float)((u64)dVar9 >> 0x20))) &&
                (uVar3 = ar4_00, dVar9 = in_xd14, cVar12 == '\0')) {
                dVar9 = (double)CONCAT44(fVar5, fVar5);
            }
            ar4_00 = list_node_next(ar4_00);
        }
        if (cVar12 == '\0') {
            *(int *)a1 = (int)((u64)dVar9 >> 0x20);
        } else {
            *a1 = dVar9;
        }
        Vec3_dtor(auStack_44, 0xffffffff, ar6_00, ar7_00);
        Vec3_dtor(auStack_34, 0xffffffff, ar6_00, ar7_00);
    }
    return uVar3;
}

/*
 * game_calc_0db764  0x8c0db764
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 */
u32 game_calc_0db764(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (*(code *)(&CItemList_DeleteItem))(a0 + 0xa4, a1, a2, a3);
    return uVar1;
}

/*
 * game_calc_0db790  0x8c0db790
 * area name: game code; nothing names its area yet; behaviour name: integer arithmetic on its arguments
 * called by: game_uses_get_field_24_0e5238
 */
u32 game_calc_0db790(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = (*(code *)(&CNodePtrList_DeleteItem))(a1 * 0x3c + a0 + 0x3a8, a2, a2, a3);
    return *(u32 *)(iVar1 + 8);
}

/*
 * get_field_38_wrap  0x8c0db7d4
 * only calls get_field_38_0db5a0
 * called by: CWaterTank_uses_get_field_300_0e0f48, CWaterTank_uses_get_field_38_wrap_0e132c,
 * game_uses_get_field_24_0e5238
 */
u32 get_field_38_wrap(int a0, int a1) {
    u32 uVar1;

    uVar1 = get_field_38_0db5a0(a1 * 0x3c + a0 + 0x3a8);
    return uVar1;
}

/*
 * list_a4_position  0x8c0db810
 * 1-based position of node a1 in the list at +0xa4
 * called by: list_a4_count_after
 */
int list_a4_position(int a0, int a1) {
    int ar4_00;
    int iVar1;
    ar4_00 = list_node_next_wrap_0da588(a0 + 0xa4);
    iVar1 = 1;
    while (ar4_00 != a1) {
        ar4_00 = list_node_next(ar4_00);
        iVar1 = iVar1 + 1;
    }
    return iVar1;
}

/*
 * list_a4_count_after  0x8c0db864
 * number of nodes after a1 in the list at +0xa4
 * called by: CAnimal_uses_list_node_next_0f4258
 */
int list_a4_count_after(int a0, u32 a1) {
    int iVar1;
    int iVar2;

    iVar1 = list_a4_position(a0, a1);
    iVar2 = get_field_300_0bf154(a0 + 0xa4);
    return iVar2 - iVar1;
}

/*
 * get_vec3_field_a68  0x8c0db8a8
 * copies the three words at +0xa68 to the pointers in a1..a3
 */
u32 get_vec3_field_a68(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0xa68);
    *a2 = *(u32 *)(a0 + 0xa6c);
    *a3 = *(u32 *)(a0 + 0xa70);
    return 0xa70;
}

/*
 * game_uses_get_field_300_0db8d4  0x8c0db8d4
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_300_0bf154
 * called by: game_uses_Class_12b580_clear_request_0e6dc4, game_uses_get_field_300_0e51ac, game_uses_get_field_38_0dfbdc
 */
u32 game_uses_get_field_300_0db8d4(int a0, u32 *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 *ar5_00;
    int iVar2;
    u32 uStack_18;
    u32 auStack_14[2];
    u32 uStack_c;

    uStack_c = 0;
    uStack_18 = 0;
    ar5_00 = a1;
    for (iVar2 = 0; iVar2 < 0x11; iVar2 = iVar2 + 1) {
        while (iVar1 = (*(code *)(&get_field_38_0db5a0))(iVar2 * 0x3c + a0 + 0x3a8, ar5_00, a2, a3), iVar1 != 0) {
            iVar1 = (*(code *)(&get_field_38_0db5a0))(iVar2 * 0x3c + a0 + 0x3a8, ar5_00, a2, a3);
            auStack_14[0] = (*(code *)(&CNodePtrList_DeleteItem))(iVar2 * 0x3c + a0 + 0x3a8, iVar1 + -1, a2, a3);
            (*(code *)(&CNodePtrList_TakeOutItem))(iVar2 * 0x3c + a0 + 0x3a8, auStack_14[0], a2, a3);
            ar5_00 = auStack_14;
            CEnv_update_fields_0feb88(a0 + 0x7a4, ar5_00);
        }
        game_uses_set_field_0_0fe4c4(iVar2 * 0x3c + a0 + 0x3a8);
    }
    while (iVar2 = get_field_300_0bf154(a0 + 0xa4), iVar2 != 0) {
        iVar2 = get_field_300_0bf154(a0 + 0xa4);
        uStack_18 = (*(code *)(&CItemList_DeleteItem))(a0 + 0xa4, iVar2 + -1, a2, a3);
        (*(code *)(&CItemList_TakeOutItem))(a0 + 0xa4, uStack_18, a2, a3);
        ar5_00 = a1;
        game_uses_get_field_24_0d1b90(&uStack_18, a1, a2, a3);
    }
    *(u32 *)(0x9d4 + a0) = 0;
    *(u32 *)(0x1020 + a0) = 0;
    *(u32 *)(0x1024 + a0) = 0;
    return 1;
}

/*
 * start_free_entry_0c0c  0x8c0dba50
 * starts the first free of eight 0x68-byte entries at +0xc0c from points a1 and a2; 0 when all are busy
 * called by: game_vec_03c94c, game_vec_082c50
 */
u32 start_free_entry_0c0c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar6_00;
    u8 *ar6_01;
    int iVar2;
    u8 auStack_38[16];
    u8 auStack_28[20];

    iVar2 = 0;
    ar6_00 = a2;
    while (true) {
        if (7 < iVar2) {
            return 0;
        }
        iVar1 = has_field_2c(a0 + iVar2 * 0x68 + 0xc0c);
        if (iVar1 == 0)
            break;
        iVar2 = iVar2 + 1;
    }
    Vec3_ctor_copy(auStack_28, a1, ar6_00, a3);
    Vec3_ctor_copy(auStack_38, a2, ar6_00, a3);
    ar6_01 = auStack_38;
    game_vec_0f69ec(a0 + iVar2 * 0x68 + 0xc0c, auStack_28, ar6_01, a3);
    Vec3_dtor(auStack_38, 0xffffffff, ar6_01, a3);
    Vec3_dtor(auStack_28, 0xffffffff, ar6_01, a3);
    return 1;
}

/*
 * common_texlist_load  0x8c0dbb14
 * loads a texture list from GRAPHICS\COMMON
 * called by: COutside_Create, CWaterTank_CreateStage
 * strings: "GRAPHICS\\COMMON"; "Failed to load textuer.. SHIT!"
 */
int common_texlist_load(int a0, u32 a1, u32 a2, u32 a3) {
    int *ar7_00;
    int iVar1;
    u8 **ar5_00;
    u32 uVar2;

    set_field_0_015ad4(a0 + 0xc, &g_8c162770, a2);
    ar5_00 = &PTR_PTR_8c1622e4;
    (**(code **)(*(int *)(a0 + 4) + 8))((int *)(a0 + 4), &PTR_PTR_8c1622e4, a2, a3);
    ar7_00 = (int *)get_field_4_0253e4(a0 + 4, ar5_00, a2, a3);
    for (uVar2 = 0; uVar2 < (u32)ar7_00[1]; uVar2 = uVar2 + 1) {
        iVar1 = uVar2 * 0xc + *ar7_00;
        *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x80000000;
    }
    iVar1 = retry_until_done_020e80(a1, &g_8c13fd91, "GRAPHICS\\COMMON", ar7_00);
    if (iVar1 == -1) {
        iVar1 = report_error_message("Failed to load textuer.. SHIT!", &g_8c13f91d, 0, 2);
    }
    return iVar1;
}

/*
 * Class_12bb08_uses_get_field_24_0dbbe8  0x8c0dbbe8
 * area name: most of its named callers are Class_12bb08; behaviour name: its main named callee is get_field_24_05c284
 * called by: Class_12b930_m3_0de4b0, Class_12bb08_m1_0da338, Class_12bb08_m2_0da5a8
 */
int Class_12bb08_uses_get_field_24_0dbbe8(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int iVar3;
    u32 ar5_00;
    int iVar4;
    u32 uStack_20;
    int aiStack_1c[2];

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    iVar2 = list_node_next_wrap_0da588(a0 + 0xa4);
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
        aiStack_1c[0] = iVar2;
        iVar3 = flag_74_bit31(iVar2);
        if (iVar3 == 0) {
            iVar2 = get_field_24_05c284(aiStack_1c[0], a1);
            if (iVar2 == 0xd) {
                g_8c431a54 = 0;
            }
            if (aiStack_1c[0] == *(int *)(0xac8 + a0)) {
                *(u32 *)(0xac8 + a0) = 0;
            }
            if (aiStack_1c[0] == *(int *)(0x9d4 + a0)) {
                *(u32 *)(0x9d4 + a0) = 0;
            }
            iVar2 = aiStack_1c[0];
            iVar3 = get_field_24_05c284(aiStack_1c[0], a1);
            if (iVar3 != 0xf) {
                CAnimal_calls_test_0c4e2c(iVar2, a1, a2, a3);
            }
            iVar2 = list_node_next(aiStack_1c[0]);
            iVar3 = get_field_24_05c284(aiStack_1c[0], a1);
            ar5_00 = get_field_160_0dab80(aiStack_1c[0]);
            (*(code *)(&CNodePtrList_TakeOutItem))(iVar3 * 0x3c + a0 + 0x3a8, ar5_00, a2, a3);
            uStack_20 = get_field_160_0dab80(aiStack_1c[0]);
            CEnv_update_fields_0feb88(a0 + 0x7a4, &uStack_20);
            (*(code *)(&CItemList_TakeOutItem))(a0 + 0xa4, aiStack_1c[0], a2, a3);
            a1 = 1;
            iVar3 = game_uses_get_field_24_0d1b90(aiStack_1c, 1, a2, a3);
        } else {
            iVar3 = list_node_next(iVar2);
            iVar2 = iVar3;
        }
    }
    return iVar3;
}

/*
 * game_draw_0dbd64  0x8c0dbd64
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_0dbd64(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    game_draw_0d9c60(a0, unused_a1, unused_a2, a3);
    return 1;
}

/*
 * game_list_0dbd80  0x8c0dbd80
 * area name: game code; nothing names its area yet; behaviour name: mostly calls list functions
 * called by: Class_12b580_m1_0e634c, Class_12b580_m2_0e6548, Class_12b758_m1_0e4b5c, Class_12b758_m2_0e4ce4,
 * Class_12b930_m1_0de1dc, Class_12b930_m2_0de3d4, Class_12b930_m3_0de4b0
 */
u32 game_list_0dbd80(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar4_00;
    int iVar2;

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    ar4_00 = list_node_next_wrap_0da588(a0 + 0xa4);
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
        Vec3_assign_wrap_0f4da4(ar4_00, unused_a1, a2, a3);
        ar4_00 = list_node_next(ar4_00);
    }
    return ar4_00;
}

/*
 * rotate_degrees_7c_on_field_9e8  0x8c0dbdf4
 * calls rotate_degrees_7c on the member at +0x9e8
 * called by: Class_12b580_draw_0e660c, Class_12b758_draw_0e4dd0, game_draw_0df668, game_draw_0e505c,
 * game_uses_color_set_white_a0_0df250, game_uses_noop_0de6d0, game_uses_noop_0deb60, game_uses_noop_0def78 (+3 more)
 */
u32 rotate_degrees_7c_on_field_9e8(int a0) {
    u32 uVar1;

    uVar1 = rotate_degrees_7c(a0 + 0x9e8);
    return uVar1;
}

/*
 * game_uses_Vec3_dtor_0dbe24  0x8c0dbe24
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is Vec3_dtor
 * called by: CEnv_vec_0dac50
 */
u32 game_uses_Vec3_dtor_0dbe24(int a0, u32 a1, u64 *a2, int a3) {
    u64 uVar1;
    int iVar2;
    u32 ar4_00;
    u32 uVar3;
    u64 *ar6_00;
    u32 uVar4;
    int iVar5;
    u64 in_dr0;
    u32 uVar6;
    u64 in_xd14;
    char cVar7;
    char cVar8;
    u8 auStack_c4[16];
    u8 auStack_b4[128];
    u64 uStack_34;

    cVar8 = '\0';
    cVar7 = '\0';
    uVar3 = a1;
    ar6_00 = a2;
    iVar2 = get_field_300_0bf154(a0 + 0xa4);
    uVar4 = 0;
    Vec3_ctor_zero(&uStack_34, uVar3, ar6_00);
    uVar6 = 0;
    Class_129a50_ctor(auStack_b4);
    if (iVar2 == 0) {
        Class_129a50_dtor(auStack_b4, 0xffffffff, ar6_00, a3);
        Vec3_dtor(&uStack_34, 0xffffffff, ar6_00, a3);
        uVar4 = 0;
    } else {
        ar4_00 = list_node_next_wrap_0da588(a0 + 0xa4);
        for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
            uVar3 = field_ptr_30(ar4_00);
            Vec3_ctor_copy(auStack_c4, uVar3, ar6_00, a3);
            a3 = (int)&uStack_34 + 4;
            ar6_00 = &uStack_34;
            game_calls_float_calc_019508(auStack_b4, auStack_c4, ar6_00, a3);
            Vec3_dtor(auStack_c4, 0xffffffff, ar6_00, a3);
            uVar3 = a1;
            Vec3_distance_sq(&uStack_34, a1, ar6_00, a3);
            uVar1 = in_dr0;
            if (cVar8 == '\0') {
                uVar6 = (u32)((u64)in_dr0 >> 0x20);
                in_dr0 = CONCAT44(uVar6, *(u32 *)a2);
                uVar1 = in_xd14;
            }
            in_xd14 = uVar1;
            if (cVar7 == '\0' && (float)((u64)in_dr0 >> 0x20) < (float)in_dr0) {
                uVar4 = ar4_00;
                if (cVar8 == '\0') {
                    *(u32 *)a2 = uVar6;
                } else {
                    *a2 = in_xd14;
                }
            }
            ar4_00 = list_node_next(ar4_00);
        }
        Class_129a50_dtor(auStack_b4, 0xffffffff, ar6_00, a3);
        Vec3_dtor(&uStack_34, 0xffffffff, ar6_00, a3);
    }
    return uVar4;
}

/*
 * field_ptr_30  0x8c0dbf88
 * returns the address of the member at +0x30
 * called by: game_uses_Vec3_dtor_0dbe24
 */
int field_ptr_30(int a0) {
    return a0 + 0x30;
}

/*
 * game_uses_ret_const_140_0dbf90  0x8c0dbf90
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is ret_const_140
 */
u32 game_uses_ret_const_140_0dbf90(int *a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    int *piVar2;
    float fVar3;
    double in_dr0;
    double dVar4;
    float fVar5;
    u32 in_fr3;
    double dVar6;
    u64 in_dr14;
    double dVar7;
    double in_xd0;
    double in_xd14;
    char cVar8;
    char cVar9;

    cVar9 = '\0';
    cVar8 = '\0';
    dVar7 = (double)(in_dr14 & 0xffffffff00000000);
    piVar2 = a1;
    iVar1 = stick_up_with_b_x_up(a1);
    if (iVar1 == 1) {
        piVar2 = NULL;
        set_timeout_120(a1, 0);
        ret_const_140();
        if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(a0[0x29c], in_fr3);
            dVar4 = (double)CONCAT44(0x41200000, (int)((u64)in_dr0 >> 0x20));
        } else {
            dVar6 = *(double *)(a0 + 0x29c);
            dVar4 = -1.4003621681683483e-250;
            in_xd0 = in_dr0;
        }
        if (cVar8 == '\0') {
            fVar5 = (float)((u64)dVar4 >> 0x20);
            fVar3 = SUB84(dVar4, 0) * fVar5;
            in_dr0 = (double)CONCAT44(fVar5, fVar3);
            dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + fVar3, SUB84(dVar6, 0));
        } else {
            in_dr0 = dVar4 * dVar4;
            dVar6 = dVar6 + in_dr0;
        }
        if (cVar9 == '\0') {
            a0[0x29c] = (int)((u64)dVar6 >> 0x20);
        } else {
            *(double *)(a0 + 0x29c) = dVar6;
        }
    } else {
        iVar1 = stick_down_with_b_x_up(a1);
        if (iVar1 == 1) {
            piVar2 = NULL;
            set_timeout_120(a1, 0);
            ret_const_140();
            if (cVar9 == '\0') {
                dVar6 = (double)CONCAT44(a0[0x29c], in_fr3);
                dVar4 = (double)CONCAT44(0x41200000, (int)((u64)in_dr0 >> 0x20));
            } else {
                dVar6 = *(double *)(a0 + 0x29c);
                dVar4 = -1.4003621681683483e-250;
                in_xd0 = in_dr0;
            }
            if (cVar8 == '\0') {
                fVar5 = (float)((u64)dVar4 >> 0x20);
                fVar3 = SUB84(dVar4, 0) * fVar5;
                in_dr0 = (double)CONCAT44(fVar5, fVar3);
                dVar6 = (double)CONCAT44((float)((u64)dVar6 >> 0x20) + fVar3, SUB84(dVar6, 0));
            } else {
                in_dr0 = dVar4 * dVar4;
                dVar6 = dVar6 + in_dr0;
            }
            if (cVar9 == '\0') {
                a0[0x29c] = (int)((u64)dVar6 >> 0x20);
            } else {
                *(double *)(a0 + 0x29c) = dVar6;
            }
        }
    }
    (**(code **)(a0[0x2dc] + 8))(a0 + 0x2dc, piVar2, a2, a3);
    dVar6 = in_dr0;
    if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), (int)((u64)in_dr0 >> 0x20));
        dVar6 = in_xd14;
    }
    iVar1 = input_input_helper_100b20(a1);
    if (iVar1 == 1) {
        ret_const_140();
        if (cVar8 == '\0') {
            in_dr0 = (double)CONCAT44(-(float)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0));
        } else {
            in_dr0 = -in_dr0;
        }
        dVar4 = dVar6;
        if (cVar9 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(dVar7, 0));
            dVar4 = in_xd0;
        }
        if (cVar8 == '\0') {
            fVar3 = SUB84(in_dr0, 0) * (float)((u64)in_dr0 >> 0x20);
        } else {
            fVar3 = SUB84(in_dr0 * in_dr0, 0);
        }
        if (cVar9 == '\0') {
            in_dr0 = (double)CONCAT44(a0[0x29b], fVar3);
        } else {
            in_dr0 = *(double *)(a0 + 0x29b);
        }
        if (cVar8 == '\0') {
            fVar3 = (float)((u64)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar3, SUB84(in_dr0, 0) + fVar3);
        } else {
            in_dr0 = in_dr0 + in_dr0;
        }
        if (cVar9 == '\0') {
            a0[0x29b] = SUB84(in_dr0, 0);
        } else {
            *(double *)(a0 + 0x29b) = dVar4;
        }
        input_uses_set_timeout_120_1004b4(a1);
    } else {
        iVar1 = input_input_helper_100b84(a1);
        if (iVar1 == 1) {
            ret_const_140();
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(-(float)((u64)in_dr0 >> 0x20), SUB84(in_dr0, 0));
            } else {
                in_dr0 = -in_dr0;
            }
            dVar4 = dVar6;
            if (cVar9 == '\0') {
                in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), SUB84(dVar7, 0));
                dVar4 = in_xd0;
            }
            if (cVar8 == '\0') {
                fVar3 = SUB84(in_dr0, 0) * (float)((u64)in_dr0 >> 0x20);
            } else {
                fVar3 = SUB84(in_dr0 * in_dr0, 0);
            }
            if (cVar9 == '\0') {
                in_dr0 = (double)CONCAT44(a0[0x29b], fVar3);
            } else {
                in_dr0 = *(double *)(a0 + 0x29b);
            }
            if (cVar8 == '\0') {
                fVar3 = (float)((u64)in_dr0 >> 0x20);
                in_dr0 = (double)CONCAT44(fVar3, SUB84(in_dr0, 0) + fVar3);
            } else {
                in_dr0 = in_dr0 + in_dr0;
            }
            if (cVar9 == '\0') {
                a0[0x29b] = SUB84(in_dr0, 0);
            } else {
                *(double *)(a0 + 0x29b) = dVar4;
            }
            input_uses_set_timeout_120_10052c(a1);
        }
    }
    iVar1 = input_input_helper_100be8(a1);
    if (iVar1 == 1) {
        ret_const_13c();
        if (cVar8 == '\0') {
            dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * (float)((u64)in_dr0 >> 0x20));
        } else {
            dVar7 = dVar7 * in_dr0;
        }
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44(a0[0x29a], SUB84(in_dr0, 0));
        } else {
            dVar4 = *(double *)(a0 + 0x29a);
        }
        if (cVar8 == '\0') {
            fVar3 = SUB84(dVar7, 0) + (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar7 + dVar4, 0);
        }
        if (cVar9 == '\0') {
            a0[0x29a] = (int)fVar3;
        } else {
            *(double *)(a0 + 0x29a) = dVar6;
        }
        input_uses_set_timeout_120_1005a4(a1);
    } else {
        iVar1 = input_input_helper_100c34(a1);
        if (iVar1 == 1) {
            ret_const_13c();
            if (cVar8 == '\0') {
                dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * (float)((u64)in_dr0 >> 0x20));
            } else {
                dVar7 = dVar7 * in_dr0;
            }
            if (cVar9 == '\0') {
                dVar4 = (double)CONCAT44(a0[0x29a], SUB84(in_dr0, 0));
            } else {
                dVar4 = *(double *)(a0 + 0x29a);
            }
            if (cVar8 == '\0') {
                fVar3 = SUB84(dVar7, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar7 + dVar4, 0);
            }
            if (cVar9 == '\0') {
                a0[0x29a] = (int)fVar3;
            } else {
                *(double *)(a0 + 0x29a) = dVar6;
            }
            input_uses_set_timeout_120_10061c(a1);
        }
    }
    piVar2 = a1;
    game_input_0dc990(a0, a1);
    if (((a0[9] != 2) && (a0[0x275] != 0)) && (iVar1 = input_y_pressed_wrap(a1), iVar1 == 1)) {
        piVar2 = (int *)a0[0x275];
        game_uses_linear_map_set_0d69a8(a0 + 0x29a, piVar2, a2, a3);
        a0[0x275] = 0;
        set_timeout_120_mode6(a1);
    }
    iVar1 = input_r_only_start_timeout(a1, piVar2, a2, a3);
    if (iVar1 == 1) {
        piVar2 = a0 + 0x29a;
        (**(code **)(*a0 + 0x68))(a0, piVar2, a2, a3);
    }
    input_input_helper_1002a8(a1);
    return 1;
}

/*
 * input_y_pressed_wrap  0x8c0dc244
 * only calls input_y_pressed
 * called by: game_uses_ret_const_140_0dbf90
 */
u32 input_y_pressed_wrap(int a0) {
    u32 uVar1;

    uVar1 = input_y_pressed(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * ret_const_13c  0x8c0dc26c
 * called by: game_uses_ret_const_140_0dbf90, input_uses_ret_const_140_0e28a0
 */
u32 ret_const_13c(void) {
    return 0x13c;
}

/*
 * ret_const_140  0x8c0dc27c
 * called by: game_uses_ret_const_140_0dbf90, input_uses_ret_const_140_0e28a0
 */
u32 ret_const_140(void) {
    return 0x140;
}

/*
 * input_uses_input_y_pressed_wrap_0dc28c  0x8c0dc28c
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * input_y_pressed_wrap_0dc520
 */
u32 input_uses_input_y_pressed_wrap_0dc28c(int *a0, int *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int *piVar3;
    float fVar4;
    u64 uVar5;
    double dVar6;
    u64 in_xd0;
    char cVar7;
    char cVar8;

    cVar8 = '\0';
    cVar7 = '\0';
    piVar3 = a1;
    iVar1 = input_y_pressed_wrap_0dc520(a1);
    if ((((iVar1 == 1) && (a0[0x275] == a0[0x2b2])) ||
         ((iVar1 = input_y_pressed_wrap_0dc520(a1), iVar1 == 1 && (a0[0x275] == 0)))) ||
        (a0[0x2b2] == 0)) {
        if (cVar8 == '\0') {
            uVar5 = CONCAT44(a0[0x2b0], a0[0x29c]);
        } else {
            in_xd0 = *(u64 *)(a0 + 0x29c);
            uVar5 = *(u64 *)(a0 + 0x2b0);
        }
        if (cVar7 != '\0' || (float)((u64)uVar5 >> 0x20) <= (float)uVar5) {
            if (cVar8 == '\0') {
                dVar6 = (double)CONCAT44(0x43160000, a0[0x29c]);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x29c);
                dVar6 = 5.66204084872116e-311;
            }
            if (cVar7 == '\0') {
                fVar4 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
            } else {
                fVar4 = SUB84(dVar6 + dVar6, 0);
            }
            if (cVar8 == '\0') {
                a0[0x2a8] = (int)fVar4;
            } else {
                *(u64 *)(a0 + 0x2a8) = in_xd0;
            }
        } else if (cVar8 == '\0') {
            a0[0x2a8] = a0[0x2b0];
        } else {
            *(u64 *)(a0 + 0x2a8) = *(u64 *)(a0 + 0x2b0);
        }
        game_vec_0dca2c(a0, a1, a2, a3);
    } else {
        iVar1 = input_y_pressed_wrap_0dc520(a1);
        if ((iVar1 == 1) && (a0[0x275] != a0[0x2b2])) {
            piVar3 = (int *)a0[0x275];
            game_uses_linear_map_set_0d69a8(a0 + 0x29a, piVar3, a2, a3);
            a0[0x275] = 0;
            set_timeout_120_mode6(a1);
        }
        iVar1 = get_field_24_05c284(a0[0x2b2], piVar3);
        if ((iVar1 == 0xe) &&
            (uVar2 = (**(code **)(*(int *)(a0[0x2b2] + 8) + 0x148))(a0[0x2b2], piVar3, a2, a3), (short)uVar2 == 1)) {
            if (cVar8 == '\0') {
                uVar5 = CONCAT44(a0[0x2b0], a0[0x29c]);
            } else {
                in_xd0 = *(u64 *)(a0 + 0x29c);
                uVar5 = *(u64 *)(a0 + 0x2b0);
            }
            if (cVar7 != '\0' || (float)((u64)uVar5 >> 0x20) <= (float)uVar5) {
                if (cVar8 == '\0') {
                    dVar6 = (double)CONCAT44(0x42480000, a0[0x29c]);
                } else {
                    in_xd0 = *(u64 *)(a0 + 0x29c);
                    dVar6 = -1.4004953740190736e-250;
                }
                if (cVar7 == '\0') {
                    fVar4 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
                } else {
                    fVar4 = SUB84(dVar6 + dVar6, 0);
                }
                if (cVar8 == '\0') {
                    a0[0x2a8] = (int)fVar4;
                } else {
                    *(u64 *)(a0 + 0x2a8) = in_xd0;
                }
            } else if (cVar8 == '\0') {
                a0[0x2a8] = a0[0x2b0];
            } else {
                *(u64 *)(a0 + 0x2a8) = *(u64 *)(a0 + 0x2b0);
            }
            game_vec_0dca2c(a0, a1, a2, a3);
        } else {
            iVar1 = input_input_helper_100b20(a1);
            if (iVar1 == 1) {
                input_uses_set_timeout_120_1004b4(a1);
            } else {
                iVar1 = input_input_helper_100b84(a1);
                if (iVar1 == 1) {
                    input_uses_set_timeout_120_10052c(a1);
                }
            }
            iVar1 = input_input_helper_100be8(a1);
            if (iVar1 == 1) {
                input_uses_set_timeout_120_1005a4(a1);
            } else {
                iVar1 = input_input_helper_100c34(a1);
                if (iVar1 == 1) {
                    input_uses_set_timeout_120_10061c(a1);
                }
            }
            piVar3 = a1;
            game_input_0dc990(a0, a1);
            iVar1 = input_r_only_start_timeout(a1, piVar3, a2, a3);
            if (iVar1 == 1) {
                piVar3 = a0 + 0x29a;
                (**(code **)(*a0 + 0x68))(a0, piVar3, a2, a3);
            }
            input_input_helper_1002a8(a1);
        }
    }
    return 1;
}

/*
 * input_y_pressed_wrap_0dc520  0x8c0dc520
 * only calls input_y_pressed
 * called by: input_uses_input_y_pressed_wrap_0dc28c
 */
u32 input_y_pressed_wrap_0dc520(int a0) {
    u32 uVar1;

    uVar1 = input_y_pressed(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * ret_const_1_0dc548  0x8c0dc548
 * called by: game_uses_ret_const_1_0e2844, ret_const_1_wrap
 */
u32 ret_const_1_0dc548(void) {
    return 1;
}

/*
 * input_uses_input_not_l_and_r_0dc558  0x8c0dc558
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * input_not_l_and_r called by: input_uses_ret_const_140_0e28a0
 */
u32 input_uses_input_not_l_and_r_0dc558(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;

    ar5_00 = a1;
    iVar1 = input_not_l_and_r(a1, a1, a2, a3);
    if (iVar1 == 1) {
        game_vec_0d6c18(a0 + 0xa68, ar5_00, a2, a3);
        set_timeout_120_mode6(a1);
    }
    return 1;
}

/*
 * input_not_l_and_r  0x8c0dc5d0
 * 0 when L and R are both held on the pad at +0xcc, else 1
 * called by: input_uses_input_not_l_and_r_0dc558
 */
u32 input_not_l_and_r(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = (*(code *)(&input_l_held))(*(u32 *)(0xcc + a0), a1, a2, a3);
    if ((iVar1 != 0) && (iVar1 = (*(code *)(&input_r_held))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 != 0)) {
        return 0;
    }
    return 1;
}

/*
 * input_uses_get_field_300_0dc61c  0x8c0dc61c
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * get_field_300_0bf154 called by: game_calls_input_helper_0e7190, game_uses_stick_x_right_half_0e1f90
 */
int input_uses_get_field_300_0dc61c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    u32 uVar3;
    int iVar4;

    uVar3 = a1;
    if (*(int *)(0x9d4 + a0) == 0) {
        iVar1 = Class_129974_vec_0db3bc(a0, a1, a2, a3);
        if (iVar1 != 0) {
            uVar3 = 0;
            (**(code **)(0x84 + *(int *)(iVar1 + 8)))(iVar1, 0, a2, a3);
        }
    } else {
        iVar1 = (*(code *)(&get_field_24_05c284))(*(u32 *)(0x9d4 + a0), a1, a2, a3);
        if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
            uVar3 = 0;
            (**(code **)(0x84 + *(int *)(*(int *)(0x9d4 + a0) + 8)))(*(int *)(0x9d4 + a0), 0, a2, a3);
        }
    }
    iVar1 = input_asr_flag_b_set(a1);
    if (iVar1 == 1) {
        iVar1 = get_field_300_0bf154(a0 + 0xa4);
        iVar2 = list_node_next_wrap_0da588(a0 + 0xa4);
        for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
            uVar3 = 1;
            (**(code **)(0x84 + *(int *)(iVar2 + 8)))(iVar2, 1, a2, a3);
            iVar2 = list_node_next(iVar2);
        }
    }
    iVar1 = input_input_helper_100cb4(a1);
    if (iVar1 == 1) {
        iVar1 = get_field_300_0bf154(a0 + 0xa4);
        iVar2 = list_node_next_wrap_0da588(a0 + 0xa4);
        for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
            uVar3 = 2;
            (**(code **)(0x84 + *(int *)(iVar2 + 8)))(iVar2, 2, a2, a3);
            iVar2 = list_node_next(iVar2);
        }
    }
    iVar1 = 0;
    if (*(int *)(0x9d4 + a0) != 0) {
        iVar1 = input_a_held_wrap(a1);
        if (iVar1 == 1) {
            iVar1 = set_field_18c_u16_to_78(a1);
        }
    }
    return iVar1;
}

/*
 * set_field_18c_u16_to_78  0x8c0dc7b0
 * called by: input_uses_get_field_300_0dc61c
 */
u32 set_field_18c_u16_to_78(int a0) {
    *(u16 *)(0x18c + a0) = 0x78;
    return 1;
}

/*
 * input_a_held_wrap  0x8c0dc7c0
 * only calls input_a_held
 * called by: input_uses_get_field_300_0dc61c
 */
u32 input_a_held_wrap(int a0) {
    u32 uVar1;

    uVar1 = input_a_held(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * input_uses_get_field_24_0dc7e8  0x8c0dc7e8
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * get_field_24_05c284 called by: game_calls_input_helper_0e7190, game_uses_get_field_24_0e727c,
 * game_uses_stick_x_right_half_0e1f90, input_uses_get_field_24_0e25c0
 */
int input_uses_get_field_24_0dc7e8(int a0, u32 *a1, u32 *a2, u32 a3) {
    int iVar1;
    int ar4_00;
    int iVar2;
    u32 *ar5_00;
    int iVar3;
    u32 uStack_20;
    u32 auStack_1c[2];

    auStack_1c[0] = 0;
    uStack_20 = 0;
    ar5_00 = a1;
    iVar1 = input_calls_test_100d5c(a1);
    if ((iVar1 == 1) && (iVar1 = *(int *)(a0 + 0x9d8), iVar1 == 0)) {
        ar4_00 = list_node_next_wrap_0da588(a0 + 0xa4);
        iVar2 = get_field_300_0bf154(a0 + 0xa4);
        iVar1 = iVar2;
        for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
            iVar1 = get_field_24_05c284(ar4_00, ar5_00);
            if ((iVar1 == 3) || (iVar1 = get_field_24_05c284(ar4_00, ar5_00), iVar1 == 5)) {
                a2 = &uStack_20;
                ar5_00 = auStack_1c;
                Class_12acc8_calc_101210(a1, ar5_00, a2);
                (**(code **)(*(int *)(ar4_00 + 8) + 0x8c))(ar4_00, ar5_00, a2, a3);
            }
            iVar1 = list_node_next(ar4_00);
            ar4_00 = iVar1;
        }
    }
    return iVar1;
}

/*
 * game_list_0dc8fc  0x8c0dc8fc
 * area name: game code; nothing names its area yet; behaviour name: mostly calls list functions
 * called by: game_calls_input_helper_0e7190, game_uses_get_field_24_0e727c, game_uses_stick_x_right_half_0e1f90,
 * input_uses_get_field_24_0e25c0
 */
int game_list_0dc8fc(int a0, u32 a1, u32 a2, u32 a3) {
    int ar4_00;
    int iVar1;
    u32 ar5_00;
    int iVar2;
    int iVar3;

    ar5_00 = a1;
    ar4_00 = list_node_next_wrap_0db580(a0 + 0x4d4);
    iVar1 = get_field_38_0db5a0(a0 + 0x4d4);
    iVar2 = iVar1;
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        ar5_00 = get_field_b0_10113c(a1);
        (**(code **)(0x90 + *(int *)(*(int *)(ar4_00 + 8) + 8)))(*(int *)(ar4_00 + 8), ar5_00, a2, a3);
        iVar2 = list_node_next(ar4_00);
        ar4_00 = iVar2;
    }
    return iVar2;
}

/*
 * game_input_0dc990  0x8c0dc990
 * area name: game code; nothing names its area yet; behaviour name: mostly calls input functions
 * called by: game_uses_ret_const_140_0dbf90, input_uses_input_y_pressed_wrap_0dc28c
 */
int game_input_0dc990(u32 unused_a0, u32 a1) {
    int iVar1;
    iVar1 = stick_up_with_x(a1);
    if (iVar1 == 1) {
        input_uses_set_timeout_120_1004b4(a1);
    } else {
        iVar1 = stick_down_with_x(a1);
        if (iVar1 == 1) {
            input_uses_set_timeout_120_10052c(a1);
        }
    }
    iVar1 = stick_right_with_x(a1);
    if (iVar1 == 1) {
        iVar1 = input_uses_set_timeout_120_1005a4(a1);
    } else {
        iVar1 = stick_left_with_x(a1);
        if (iVar1 == 1) {
            iVar1 = input_uses_set_timeout_120_10061c(a1);
        }
    }
    return iVar1;
}

/*
 * game_vec_0dca2c  0x8c0dca2c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 * called by: game_uses_get_field_24_0e5238, input_uses_input_y_pressed_wrap_0dc28c
 */
u32 game_vec_0dca2c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = a1;
    game_vec_0d6aac(a0 + 0xa68, a1, a2, a3);
    uVar1 = set_timeout_120_mode6(a1);
    return uVar1;
}

/*
 * set_fields_a68_a6c_a70  0x8c0dca74
 * stores +0xa68, +0xa6c, +0xa70
 */
u32 set_fields_a68_a6c_a70(int a0) {
    u32 in_fr5;
    u32 in_fr4;
    u32 in_fr6;

    *(u32 *)(a0 + 0xa68) = in_fr4;
    *(u32 *)(a0 + 0xa6c) = in_fr5;
    *(u32 *)(a0 + 0xa70) = in_fr6;
    return 0xa70;
}

/*
 * Class_12b930_ctor  0x8c0dca9c
 * stores the vtable 0x8c12b930
 * called by: game_uses_Class_12b36c_ctor_0c5340
 * strings: "WaterTank"
 */
u32 *Class_12b930_ctor(u32 *a0) {
    float *pfVar1;
    u8 *ar5_00;
    u32 uVar2;
    u32 ar6_00;
    code *pcVar3;
    code *pcVar4;
    u64 *ar6_01;
    u32 *ar4_00;
    u32 ar7_00;
    float *pfVar5;
    int iVar6;
    int iVar7;
    u32 in_fr1;
    float fVar8;
    double dVar9;
    u64 in_xd0;
    char cVar10;
    char cVar11;
    float fStack_90;
    u8 auStack_8c[4];
    u64 uStack_88;
    u32 uStack_80;
    u32 uStack_7c;
    u32 uStack_78;
    u32 uStack_74;
    u32 uStack_70;
    u32 uStack_6c;
    u32 uStack_68;
    u32 uStack_64;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    u32 uStack_48;
    u32 uStack_44;
    u32 uStack_40;
    u32 uStack_3c;
    u32 uStack_38;
    u32 uStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;

    cVar11 = '\0';
    cVar10 = '\0';
    ar7_00 = 3;
    ar6_00 = 0;
    Class_12bb08_ctor(a0, "WaterTank", 0, 3);
    ar5_00 = &g_8c12b930;
    *a0 = &g_8c12b930;
    Class_129920_ctor(a0 + 0x41b, &g_8c12b930);
    clear_field_0_wrap_015ab8(a0 + 0x41d);
    clear_field_0_wrap_015ab8(a0 + 0x41e);
    clear_field_0_wrap_015ab8(a0 + 0x41f);
    Class_12b930_uses_vec_new_array_0d2fd8(a0 + 0x42b, ar5_00);
    uVar2 = 0x13b24;
    Class_12b930_uses_Class_129920_ctor_0cff78(a0 + 0x4ec9, 0x13b24);
    Class_12b930_uses_Class_129920_ctor_0d07b4(a0 + 0x4edc, uVar2);
    Class_12b930_uses_Class_129920_ctor_0d0b58(a0 + 0x4ee3, uVar2);
    clear_field_0_wrap_015ab8(a0 + 0x89be);
    Class_129920_ctor(a0 + 0x89bf, uVar2);
    Class_12b930_uses_Vec3_ctor_zero_0d931c(a0 + 0x89c1, uVar2, ar6_00);
    Class_12b930_copy_017830(a0 + 0x89d3);
    Vec3_ctor_zero(a0 + 0x89f4, uVar2, ar6_00);
    Vec3_ctor_zero(a0 + 0x89f8, uVar2, ar6_00);
    Vec3_ctor_zero(a0 + 0x89fc, uVar2, ar6_00);
    Vec3_ctor_zero(a0 + 0x8a00, uVar2, ar6_00);
    uVar2 = 0xc;
    pcVar3 = free_if_nonnull_wrap_0d6ef8;
    vec_new_array(a0 + 0x8a06, set_fields_0_4_8_0d6ee0, free_if_nonnull_wrap_0d6ef8, 0xc, 0x6e);
    Class_129920_ctor(a0 + 0x8b50, Class_129920_ctor);
    vec_new_array(a0 + 0x8b52, game_uses_Vec3_ctor_zero_0d7060, game_release_0ddb3c, 0x16c, 3);
    uVar2 = 0x18;
    pcVar4 = free_if_nonnull_wrap_0cffc8;
    pcVar3 = game_init_fields_02145c;
    vec_new_array(a0 + 0x8c96, game_init_fields_02145c, free_if_nonnull_wrap_0cffc8, 0x18, 2);
    Vec3_ctor_zero(&fStack_90, pcVar3, pcVar4);
    pcVar3 = Vec3_ctor_zero;
    Vec3_ctor_zero(&uStack_80, Vec3_ctor_zero, pcVar4);
    Vec3_ctor_zero(&uStack_70, pcVar3, pcVar4);
    Vec3_ctor_zero(&uStack_60, pcVar3, pcVar4);
    Vec3_ctor_zero(&uStack_50, pcVar3, pcVar4);
    Vec3_ctor_zero(&uStack_40, pcVar3, pcVar4);
    Vec3_ctor_zero(&uStack_30, pcVar3, pcVar4);
    Vec3_ctor_zero(&uStack_20, pcVar3, pcVar4);
    g_8c437c38 = 0;
    g_8c437c3a = 0xff;
    g_8c437c3c = 0;
    g_8c437c3e = 0;
    g_8c437c40 = 0xff;
    g_8c437c42 = 0;
    g_8c437c44 = 0xff;
    g_8c437c46 = 0xff;
    for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
        *(u32 *)(iVar6 * 4 + 0x8c437c48) = 0xffffffff;
    }
    Class_12b930_uses_linear_map_set_0e0da4(a0, pcVar3, pcVar4, uVar2);
    a0[0x89bd] = 0;
    if (cVar11 == '\0') {
        a0[0x2e9] = 0x425dae14;
        a0[0x2af] = 0x4573bfff;
        a0[0x2b0] = 0x44c80199;
        a0[0x2b1] = 0x44fd2000;
    } else {
        *(u64 *)(a0 + 0x2e9) = 0xabc425dae14;
        *(u64 *)(a0 + 0x2af) = 0xac04573bfff;
        *(u64 *)(a0 + 0x2b0) = 0xac444c80199;
        in_fr1 = 0x44fd2000;
        *(u64 *)(a0 + 0x2b1) = 0xa03cee0044fd2000;
    }
    for (iVar6 = 0; iVar6 < 0xb; iVar6 = iVar6 + 1) {
        for (iVar7 = 0; iVar7 < 10; iVar7 = iVar7 + 1) {
            if (cVar11 == '\0') {
                a0[iVar6 * 0x1e + iVar7 * 3 + 0x8a06] = 0x43340000;
            } else {
                in_fr1 = 0x43340000;
                *(u64 *)(a0 + iVar6 * 0x1e + iVar7 * 3 + 0x8a06) = 0x2281c43340000;
            }
            a0[iVar6 * 0x1e + iVar7 * 3 + 0x8a07] = 0;
        }
    }
    for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
        for (iVar7 = 3; iVar7 < 10; iVar7 = iVar7 + 1) {
            if (cVar11 == '\0') {
                a0[iVar6 * 0x1e + iVar7 * 3 + 0x8a06] = 0x40000000;
            } else {
                in_fr1 = 0x40000000;
                *(u64 *)(a0 + iVar6 * 0x1e + iVar7 * 3 + 0x8a06) = 0x2281c40000000;
            }
            a0[iVar6 * 0x1e + iVar7 * 3 + 0x8a07] = 1;
        }
    }
    for (iVar6 = 5; iVar6 < 10; iVar6 = iVar6 + 1) {
        a0[iVar6 * 3 + 0x8a9d] = 2;
        if (cVar11 == '\0') {
            a0[iVar6 * 3 + 0x8a9c] = 0x40000000;
        } else {
            in_fr1 = 0x40000000;
            *(u64 *)(a0 + iVar6 * 3 + 0x8a9c) = 0xfd6e05c40000000;
        }
    }
    for (iVar6 = 5; iVar6 < 10; iVar6 = iVar6 + 1) {
        a0[iVar6 * 3 + 0x8abb] = 2;
    }
    for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
        a0[iVar6 * 0x1e + 0x8a13] = 2;
    }
    for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
        a0[iVar6 * 0x1e + 0x8a10] = 2;
        if (cVar11 == '\0') {
            a0[iVar6 * 0x1e + 0x8a0f] = 0x40000000;
        } else {
            in_fr1 = 0x40000000;
            *(u64 *)(a0 + iVar6 * 0x1e + 0x8a0f) = 0x22ba040000000;
        }
    }
    a0[0x8ae8] = 2;
    a0[0x8ac7] = 2;
    a0[0x8ac4] = 0;
    if (cVar11 == '\0') {
        a0[0x8ac3] = 0x43340000;
    } else {
        in_fr1 = 0x43340000;
        *(u64 *)(a0 + 0x8ac3) = 0xa024ee0043340000;
    }
    for (iVar6 = 2; iVar6 < 5; iVar6 = iVar6 + 1) {
        for (iVar7 = 0; iVar7 < 6; iVar7 = iVar7 + 1) {
            a0[iVar6 * 0x1e + iVar7 * 3 + 0x8a08] = 1;
        }
    }
    a0[0x8a4d] = 0;
    a0[0x8a6b] = 0;
    a0[0x8a89] = 0;
    if (cVar11 == '\0') {
        a0[0x20] = 0x430c0000;
        a0[0x21] = 0x42c80000;
        a0[0x23] = 0x43a00000;
        a0[0x24] = 0x42e00000;
        a0[0x25] = 0x41000000;
    } else {
        *(u64 *)(a0 + 0x20) = 0x84430c0000;
        *(u64 *)(a0 + 0x21) = 0x8c42c80000;
        *(u64 *)(a0 + 0x23) = 0x9043a00000;
        *(u64 *)(a0 + 0x24) = 0x9442e00000;
        in_fr1 = 0x41000000;
        *(u64 *)(a0 + 0x25) = 0x9841000000;
    }
    if (cVar11 == '\0') {
        a0[0x26] = 0x3f800000;
        a0[0x27] = 0x41300000;
        a0[0x28] = 0x40400000;
    } else {
        *(u64 *)(a0 + 0x26) = CONCAT44(0x3f800000, in_fr1);
        *(u64 *)(a0 + 0x27) = 0xa041300000;
        in_fr1 = 0x40400000;
        *(u64 *)(a0 + 0x28) = 0x2318c40400000;
    }
    uVar2 = g_8c13f604;
    a0[0x8c63] = g_8c13f600;
    a0[0x8c64] = uVar2;
    a0[0x8c65] = PTR_FUN_8c13f608;
    uVar2 = g_8c13f610;
    a0[0x8c66] = g_8c13f60c;
    a0[0x8c67] = uVar2;
    a0[0x8c68] = PTR_FUN_8c13f614;
    uVar2 = g_8c13f61c;
    pfVar5 = (float *)(a0 + 0x8c69);
    ar6_01 = (u64 *)&g_8c13f618;
    *pfVar5 = g_8c13f618;
    a0[0x8c6a] = uVar2;
    a0[0x8c6b] = PTR_FUN_8c13f620;
    uVar2 = g_8c13f628;
    a0[0x8c6c] = g_8c13f624;
    a0[0x8c6d] = uVar2;
    a0[0x8c6e] = PTR_FUN_8c13f62c;
    uVar2 = g_8c13f634;
    a0[0x8c72] = g_8c13f630;
    a0[0x8c73] = uVar2;
    a0[0x8c74] = PTR_FUN_8c13f638;
    uVar2 = g_8c13f640;
    a0[0x8c75] = g_8c13f63c;
    a0[0x8c76] = uVar2;
    a0[0x8c77] = PTR_FUN_8c13f644;
    uVar2 = g_8c13f64c;
    a0[0x8c6f] = g_8c13f648;
    a0[0x8c70] = uVar2;
    a0[0x8c71] = PTR_FUN_8c13f650;
    uVar2 = g_8c13f658;
    a0[0x8c78] = g_8c13f654;
    a0[0x8c79] = uVar2;
    a0[0x8c7a] = PTR_FUN_8c13f65c;
    uVar2 = g_8c13f664;
    a0[0x8c7b] = g_8c13f660;
    a0[0x8c7c] = uVar2;
    a0[0x8c7d] = PTR_FUN_8c13f668;
    uVar2 = g_8c13f670;
    a0[0x8c7e] = g_8c13f66c;
    a0[0x8c7f] = uVar2;
    a0[0x8c80] = PTR_FUN_8c13f674;
    uVar2 = g_8c13f67c;
    a0[0x8c81] = g_8c13f678;
    a0[0x8c82] = uVar2;
    a0[0x8c83] = PTR_FUN_8c13f680;
    uVar2 = g_8c13f688;
    a0[0x8c84] = g_8c13f684;
    a0[0x8c85] = uVar2;
    a0[0x8c86] = PTR_FUN_8c13f68c;
    uVar2 = g_8c13f694;
    a0[0x8c87] = g_8c13f690;
    a0[0x8c88] = uVar2;
    a0[0x8c89] = PTR_FUN_8c13f698;
    uVar2 = g_8c13f6a0;
    a0[0x8c8a] = g_8c13f69c;
    a0[0x8c8b] = uVar2;
    a0[0x8c8c] = PTR_FUN_8c13f6a4;
    uVar2 = g_8c13f6ac;
    a0[0x8c8d] = g_8c13f6a8;
    a0[0x8c8e] = uVar2;
    a0[0x8c8f] = PTR_FUN_8c13f6b0;
    uVar2 = g_8c13f6b8;
    a0[0x8c90] = g_8c13f6b4;
    a0[0x8c91] = uVar2;
    a0[0x8c92] = PTR_FUN_8c13f6bc;
    (**(code **)(a0[0x8b50] + 8))(a0 + 0x8b50, &PTR_PTR_8c13da18, &g_8c13f618, pfVar5);
    set_field_0_015ad4(a0 + 0x8b52, &g_8c13dde0, ar6_01);
    if (cVar11 == '\0') {
        a0[0x8b53] = 0x446a56b8;
        a0[0x8b54] = 0x43340000;
        a0[0x8b55] = 0x43557405;
    } else {
        *(u64 *)(a0 + 0x8b53) = 0x22d50446a56b8;
        *(u64 *)(a0 + 0x8b54) = 0x22d5443340000;
        in_fr1 = 0x43557405;
        *(u64 *)(a0 + 0x8b55) = 0x22d5c43557405;
    }
    Vec3_assign(a0 + 0x8b57, a0 + 0x8b53, ar6_01, pfVar5);
    if (cVar11 == '\0') {
        a0[0x8ba8] = 0x43160000;
    } else {
        *(u64 *)(a0 + 0x8ba8) = 0xc307b33343160000;
        uStack_88._4_4_ = 0xc3024ccd;
        uStack_74 = 0xa4;
        uStack_64 = 0xa4;
        uStack_54 = 0xc3024ccd;
        in_fr1 = 0xc307b333;
    }
    uStack_50 = 0xc307b333;
    uStack_58 = 0x430acccd;
    uStack_5c = 0x4384e666;
    uStack_60 = 0x430eb333;
    uStack_68 = 0xc3024ccd;
    uStack_6c = 0x4384e666;
    uStack_70 = 0x430eb333;
    uStack_78 = 0xc3024ccd;
    uStack_7c = 0x4384e666;
    uStack_80 = 0xc307b333;
    uStack_88._0_4_ = 0x430acccd;
    auStack_8c = (u8[4])0x4384e666;
    fStack_90 = -135.7;
    if (cVar11 == '\0') {
        uStack_4c = 0;
    } else {
        uStack_44 = 0xc3024ccd;
        in_fr1 = 0xc307b333;
        uStack_4c = in_fr1;
    }
    uStack_40 = 0xc307b333;
    uStack_48 = 0x430acccd;
    if (cVar11 == '\0') {
        uStack_3c = 0;
    } else {
        uStack_34 = 0xa4;
        in_fr1 = 0x430eb333;
        uStack_3c = in_fr1;
    }
    uStack_30 = 0x430eb333;
    uStack_38 = 0xc3024ccd;
    if (cVar11 == '\0') {
        uStack_2c = 0;
    } else {
        uStack_24 = 0xa4;
        in_fr1 = 0x430eb333;
        uStack_2c = in_fr1;
    }
    uStack_20 = 0x430eb333;
    uStack_28 = 0xc3024ccd;
    if (cVar11 == '\0') {
        uStack_1c = 0;
        dVar9 = (double)CONCAT44(0x430acccd, in_fr1);
    } else {
        dVar9 = -643874257197465.6;
        uStack_14 = 0xc3024ccd;
        uStack_1c = in_fr1;
    }
    uStack_18 = 0x430acccd;
    for (iVar6 = 0; uVar2 = SUB84(dVar9, 0), iVar6 < 8; iVar6 = iVar6 + 1) {
        pfVar1 = &fStack_90 + iVar6 * 4;
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *pfVar1);
        } else {
            in_xd0 = *(u64 *)pfVar1;
            dVar9 = 3.02834788845756e-309;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            *pfVar1 = fVar8;
        } else {
            *(u64 *)pfVar1 = in_xd0;
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(auStack_8c + iVar6 * 0x10));
        } else {
            in_xd0 = *(u64 *)(auStack_8c + iVar6 * 0x10);
            dVar9 = 3.02834788845756e-309;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            *(float *)(auStack_8c + iVar6 * 0x10) = fVar8;
        } else {
            *(u64 *)(auStack_8c + iVar6 * 0x10) = in_xd0;
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(&uStack_88 + iVar6 * 2));
        } else {
            in_xd0 = (&uStack_88)[iVar6 * 2];
            dVar9 = 3.02834788845756e-309;
        }
        if (cVar10 == '\0') {
            dVar9 = (double)(u64)(u32)(SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20));
        } else {
            dVar9 = dVar9 * dVar9;
        }
        if (cVar11 == '\0') {
            *(int *)(&uStack_88 + iVar6 * 2) = SUB84(dVar9, 0);
        } else {
            (&uStack_88)[iVar6 * 2] = in_xd0;
        }
    }
    (**(code **)(a0[0x8b5e] + 0x30))(a0 + 0x8b5e, &fStack_90, ar6_01, pfVar5);
    set_field_0_015ad4(a0 + 0x8bad, &g_8c13e0c4, ar6_01);
    if (cVar11 == '\0') {
        a0[0x8bae] = 0x4475f20c;
        a0[0x8baf] = 0x43340000;
        a0[0x8bb0] = 0x44390b33;
    } else {
        *(u64 *)(a0 + 0x8bae) = 0x22ebc4475f20c;
        *(u64 *)(a0 + 0x8baf) = 0x22ec043340000;
        uVar2 = 0x44390b33;
        *(u64 *)(a0 + 0x8bb0) = 0x22ec844390b33;
    }
    Vec3_assign(a0 + 0x8bb2, a0 + 0x8bae, ar6_01, pfVar5);
    if (cVar11 == '\0') {
        a0[0x8c03] = 0x428c0000;
    } else {
        *(u64 *)(a0 + 0x8c03) = 0xc2780000428c0000;
        uStack_88._4_4_ = 0x94;
        uStack_74 = 0xa4;
        uStack_64 = 0xa4;
        uStack_54 = 0x94;
        uVar2 = 0xc2780000;
    }
    uStack_50 = 0xc2780000;
    uStack_58 = 0x428b0000;
    uStack_5c = 0x429c3333;
    uStack_60 = 0x42816666;
    uStack_68 = 0xc289999a;
    uStack_6c = 0x429c3333;
    uStack_70 = 0x42816666;
    uStack_78 = 0xc289999a;
    uStack_7c = 0x429c3333;
    uStack_80 = 0xc2780000;
    uStack_88._0_4_ = 0x428b0000;
    auStack_8c = (u8[4])0x429c3333;
    fStack_90 = -62.0;
    if (cVar11 == '\0') {
        uStack_4c = 0;
    } else {
        uStack_44 = 0x94;
        uVar2 = 0xc2780000;
        uStack_4c = uVar2;
    }
    uStack_40 = 0xc2780000;
    uStack_48 = 0x428b0000;
    if (cVar11 == '\0') {
        uStack_3c = 0;
    } else {
        uStack_34 = 0xa4;
        uVar2 = 0x42816666;
        uStack_3c = uVar2;
    }
    uStack_30 = 0x42816666;
    uStack_38 = 0xc289999a;
    if (cVar11 != '\0') {
        uStack_24 = 0xa4;
        uVar2 = 0x42816666;
        uStack_1c = 0xac;
    }
    uStack_20 = 0x42816666;
    uStack_28 = 0xc289999a;
    if (cVar11 == '\0') {
        uStack_2c = 0;
        dVar9 = (double)CONCAT44(0x428b0000, uVar2);
    } else {
        uStack_28 = 0;
        dVar9 = 3.14606954795696e-312;
        uStack_14 = 0x94;
        uStack_2c = uVar2;
    }
    uStack_18 = 0x428b0000;
    for (iVar6 = 0; uVar2 = SUB84(dVar9, 0), iVar6 < 8; iVar6 = iVar6 + 1) {
        pfVar5 = &fStack_90 + iVar6 * 4;
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *pfVar5);
        } else {
            in_xd0 = *(u64 *)pfVar5;
            dVar9 = 3.03607195313667e-309;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            *pfVar5 = fVar8;
        } else {
            *(u64 *)pfVar5 = in_xd0;
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(auStack_8c + iVar6 * 0x10));
        } else {
            in_xd0 = *(u64 *)(auStack_8c + iVar6 * 0x10);
            dVar9 = 3.03607195313667e-309;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            *(float *)(auStack_8c + iVar6 * 0x10) = fVar8;
        } else {
            *(u64 *)(auStack_8c + iVar6 * 0x10) = in_xd0;
        }
        pfVar5 = &fStack_90 + iVar6 * 4;
        ar6_01 = &uStack_88 + iVar6 * 2;
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(&uStack_88 + iVar6 * 2));
        } else {
            in_xd0 = (&uStack_88)[iVar6 * 2];
            dVar9 = 3.03607195313667e-309;
        }
        if (cVar10 == '\0') {
            dVar9 = (double)(u64)(u32)(SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20));
        } else {
            dVar9 = dVar9 * dVar9;
        }
        if (cVar11 == '\0') {
            *(int *)ar6_01 = SUB84(dVar9, 0);
        } else {
            *ar6_01 = in_xd0;
        }
    }
    (**(code **)(a0[0x8bb9] + 0x30))(a0 + 0x8bb9, &fStack_90, ar6_01, pfVar5);
    set_field_0_015ad4(a0 + 0x8c08, &g_8c13e3c4, ar6_01);
    if (cVar11 == '\0') {
        a0[0x8c09] = 0x440a7a8f;
        a0[0x8c0a] = 0x43340000;
        a0[0x8c0b] = 0x44406fa8;
    } else {
        *(u64 *)(a0 + 0x8c09) = 0x23028440a7a8f;
        *(u64 *)(a0 + 0x8c0a) = 0x2302c43340000;
        uVar2 = 0x44406fa8;
        *(u64 *)(a0 + 0x8c0b) = 0x2303444406fa8;
    }
    Vec3_assign(a0 + 0x8c0d, a0 + 0x8c09, ar6_01, pfVar5);
    if (cVar11 == '\0') {
        a0[0x8c5e] = 0x42480000;
    } else {
        *(u64 *)(a0 + 0x8c5e) = 0xc240000042480000;
        uStack_88._4_4_ = 0x94;
        uStack_74 = 0xa4;
        uStack_64 = 0xa4;
        uStack_54 = 0x94;
        uVar2 = 0xc2400000;
    }
    uStack_50 = 0xc2400000;
    uStack_58 = 0x42286666;
    uStack_5c = 0x42ef0000;
    uStack_60 = 0x42400000;
    uStack_68 = 0xc22ccccd;
    uStack_6c = 0x42ef0000;
    uStack_70 = 0x42400000;
    uStack_78 = 0xc22ccccd;
    uStack_7c = 0x42ef0000;
    uStack_80 = 0xc2400000;
    uStack_88._0_4_ = 0x42286666;
    auStack_8c = (u8[4])0x42ef0000;
    fStack_90 = -48.0;
    if (cVar11 == '\0') {
        uStack_4c = 0;
    } else {
        uStack_44 = 0x94;
        uVar2 = 0xc2400000;
        uStack_4c = uVar2;
    }
    uStack_40 = 0xc2400000;
    uStack_48 = 0x42286666;
    if (cVar11 == '\0') {
        uStack_3c = 0;
    } else {
        uStack_34 = 0xa4;
        uVar2 = 0x42400000;
        uStack_3c = uVar2;
    }
    uStack_30 = 0x42400000;
    uStack_38 = 0xc22ccccd;
    if (cVar11 == '\0') {
        uStack_2c = 0;
        uStack_1c = uVar2;
    } else {
        uStack_24 = 0xa4;
        uStack_1c = 0x42400000;
        uStack_2c = uVar2;
    }
    uStack_20 = 0x42400000;
    uStack_28 = 0xc22ccccd;
    if (cVar11 == '\0') {
        uStack_1c = 0;
    } else {
        uStack_14 = 0x94;
    }
    uStack_18 = 0x42286666;
    for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
        pfVar5 = &fStack_90 + iVar6 * 4;
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *pfVar5);
        } else {
            in_xd0 = *(u64 *)pfVar5;
            dVar9 = 3.043796017815786e-309;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            *pfVar5 = fVar8;
        } else {
            *(u64 *)pfVar5 = in_xd0;
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(auStack_8c + iVar6 * 0x10));
        } else {
            in_xd0 = *(u64 *)(auStack_8c + iVar6 * 0x10);
            dVar9 = 3.043796017815786e-309;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            *(float *)(auStack_8c + iVar6 * 0x10) = fVar8;
        } else {
            *(u64 *)(auStack_8c + iVar6 * 0x10) = in_xd0;
        }
        if (cVar11 == '\0') {
            dVar9 = (double)CONCAT44(0x3f666666, *(u32 *)(&uStack_88 + iVar6 * 2));
        } else {
            in_xd0 = (&uStack_88)[iVar6 * 2];
            dVar9 = 3.043796017815786e-309;
        }
        if (cVar10 == '\0') {
            fVar8 = SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20);
        } else {
            fVar8 = SUB84(dVar9 * dVar9, 0);
        }
        if (cVar11 == '\0') {
            *(float *)(&uStack_88 + iVar6 * 2) = fVar8;
        } else {
            (&uStack_88)[iVar6 * 2] = in_xd0;
        }
    }
    iVar6 = a0[0x8c14];
    pcVar3 = *(code **)(iVar6 + 0x30);
    (*pcVar3)(a0 + 0x8c14, &fStack_90, pcVar3, iVar6);
    a0[0x8c96] = PTR_s_71_OPEN_WALL_NEW_8c13f2f8;
    Vec3_dtor(&uStack_20, 0xffffffff, pcVar3, iVar6);
    pcVar4 = Vec3_dtor;
    Vec3_dtor(&uStack_30, 0xffffffff, pcVar3, Vec3_dtor);
    uVar2 = 0xffffffff;
    Vec3_dtor(&uStack_40, 0xffffffff, 0xffffffff, pcVar4);
    Vec3_dtor(&uStack_50, 0xffffffff, uVar2, pcVar4);
    uVar2 = 0xffffffff;
    ar4_00 = &uStack_60;
    Vec3_dtor(ar4_00, 0xffffffff, ar4_00, 0xffffffff);
    Vec3_dtor(&uStack_70, 0xffffffff, ar4_00, uVar2);
    Vec3_dtor(&uStack_80, 0xffffffff, ar4_00, uVar2);
    Vec3_dtor(&fStack_90, 0xffffffff, ar4_00, uVar2);
    return a0;
}

/*
 * game_release_0ddb3c  0x8c0ddb3c
 * area name: game code; nothing names its area yet; behaviour name: mostly calls release functions
 */
int game_release_0ddb3c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Class_129938_dtor(a0 + 0xc4, 0xffffffff, a2, a3);
        Class_129938_dtor(a0 + 0x30, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0x24, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x14, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 4, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_016bfc(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b930_release_0ddbc8  0x8c0ddbc8
 * area name: only called from Class_12b930 methods; behaviour name: mostly calls release functions
 * called by: Class_12b930_dtor
 */
int Class_12b930_release_0ddbc8(int a0, u32 a1) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar7_00 = 7;
        ar6_00 = 4;
        vec_delete_array(a0 + 0x2c, free_if_nonnull_wrap_0247b0, 4, 7);
        free_if_nonnull_wrap_016bfc(a0 + 0x28, 0xffffffff, ar6_00, ar7_00);
        Class_129920_dtor(a0 + 0x20, 0xffffffff, ar6_00, ar7_00);
        ar5_00 = 0xffffffff;
        Vec3_dtor(a0, 0xffffffff, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b930_release_0ddc40  0x8c0ddc40
 * area name: only called from Class_12b930 methods; behaviour name: mostly calls release functions
 * called by: Class_12b930_dtor
 */
int Class_12b930_release_0ddc40(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_0cffc8(a0 + 0xeb48, 0xffffffff, a2, a3);
        ar7_00 = 0x15e;
        ar6_00 = 0xac;
        vec_delete_array(a0 + 0xc, Class_1297f4_dtor, 0xac, 0x15e);
        free_if_nonnull_wrap_016bfc(a0 + 8, 0xffffffff, ar6_00, ar7_00);
        ar5_00 = 0xffffffff;
        Class_129920_dtor(a0, 0xffffffff, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b930_release_0ddcc4  0x8c0ddcc4
 * area name: only called from Class_12b930 methods; behaviour name: mostly calls release functions
 * called by: Class_12b930_dtor
 */
int Class_12b930_release_0ddcc4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_016bfc(a0 + 8, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Class_129920_dtor(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b930_release_0ddd14  0x8c0ddd14
 * area name: only called from Class_12b930 methods; behaviour name: mostly calls release functions
 * called by: Class_12b930_dtor
 */
int Class_12b930_release_0ddd14(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_0cffc8(a0 + 0x30, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_016bfc(a0 + 8, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Class_129920_dtor(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b930_release_0ddd74  0x8c0ddd74
 * area name: only called from Class_12b930 methods; behaviour name: mostly calls release functions
 * called by: Class_12b930_dtor
 */
int Class_12b930_release_0ddd74(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Class_129908_dtor(a0 + 0x12a5c, 0xffffffff, a2, a3);
        vec_delete_array(a0 + 0x62c, game_release_0d3304, 0x88, 0x226);
        vec_delete_array(a0 + 0x5fc, free_if_nonnull_wrap_0cffc8, 0x18, 2);
        uVar2 = 5;
        uVar1 = 0x44;
        vec_delete_array(a0 + 0x470, game_release_0d336c, 0x44, 5);
        free_if_nonnull_wrap_016bfc(a0 + 0x154, 0xffffffff, uVar1, uVar2);
        Class_129920_dtor(a0 + 0x108, 0xffffffff, uVar1, uVar2);
        game_release_0fe59c(a0 + 0x34, 0xffffffff, uVar1, uVar2);
        ar7_00 = 3;
        uVar2 = 4;
        vec_delete_array(a0 + 0x20, free_if_nonnull_wrap_016bfc, 4, 3);
        free_if_nonnull_wrap_016bfc(a0 + 0x1c, 0xffffffff, uVar2, ar7_00);
        free_if_nonnull_wrap_016bfc(a0 + 0x10, 0xffffffff, uVar2, ar7_00);
        uVar1 = 0xffffffff;
        Class_129920_dtor(a0 + 8, 0xffffffff, uVar2, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b930_dtor  0x8c0dde84
 * stores the vtable 0x8c12b930
 * called by: Class_12b388_dtor
 */
u32 *Class_12b930_dtor(u32 *a0, u32 a1) {
    u32 uVar1;
    u32 uVar2;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b930;
        vec_delete_array(a0 + 0x8c96, free_if_nonnull_wrap_0cffc8, 0x18, 2);
        uVar2 = 3;
        uVar1 = 0x16c;
        vec_delete_array(a0 + 0x8b52, game_release_0ddb3c, 0x16c, 3);
        Class_129920_dtor(a0 + 0x8b50, 0xffffffff, uVar1, uVar2);
        ar7_00 = 0x6e;
        uVar2 = 0xc;
        vec_delete_array(a0 + 0x8a06, free_if_nonnull_wrap_0d6ef8, 0xc, 0x6e);
        Vec3_dtor(a0 + 0x8a00, 0xffffffff, uVar2, ar7_00);
        Vec3_dtor(a0 + 0x89fc, 0xffffffff, uVar2, ar7_00);
        Vec3_dtor(a0 + 0x89f8, 0xffffffff, uVar2, ar7_00);
        Vec3_dtor(a0 + 0x89f4, 0xffffffff, uVar2, ar7_00);
        free_if_nonnull_wrap_0cfe48(a0 + 0x89d3, 0xffffffff, uVar2, ar7_00);
        Class_12b930_release_0ddbc8(a0 + 0x89c1, 0xffffffff);
        Class_129920_dtor(a0 + 0x89bf, 0xffffffff, uVar2, ar7_00);
        free_if_nonnull_wrap_016bfc(a0 + 0x89be, 0xffffffff, uVar2, ar7_00);
        Class_12b930_release_0ddc40(a0 + 0x4ee3, 0xffffffff, uVar2, ar7_00);
        Class_12b930_release_0ddcc4(a0 + 0x4edc, 0xffffffff, uVar2, ar7_00);
        Class_12b930_release_0ddd14(a0 + 0x4ec9, 0xffffffff, uVar2, ar7_00);
        Class_12b930_release_0ddd74(a0 + 0x42b, 0xffffffff, uVar2, ar7_00);
        free_if_nonnull_wrap_016bfc(a0 + 0x41f, 0xffffffff, uVar2, ar7_00);
        free_if_nonnull_wrap_016bfc(a0 + 0x41e, 0xffffffff, uVar2, ar7_00);
        free_if_nonnull_wrap_016bfc(a0 + 0x41d, 0xffffffff, uVar2, ar7_00);
        Class_129920_dtor(a0 + 0x41b, 0xffffffff, uVar2, ar7_00);
        uVar1 = 0;
        Class_12bb08_dtor(a0, 0, uVar2, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_uses_CWaterTank_CreateStage_0de07c  0x8c0de07c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is CWaterTank_CreateStage
 */
u32 game_uses_CWaterTank_CreateStage_0de07c(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;
    int ar6_00;
    u32 extraout_fr1;
    u32 extraout_fr0;
    char cVar2;
    u64 uStack_20;
    u8 auStack_1c[20];

    cVar2 = '\0';
    CWaterTank_CreateStage(a0, a1, a2);
    ar6_00 = a0 + 0x22eb4;
    WATER_ELEMENT_CreateStage0(a0 + 0x10ac, a1, ar6_00);
    iVar1 = a0 + 0xa68;
    Vec3_ctor_copy((u8 *)((int)register0x0000003c + -0x1c), iVar1, ar6_00, a3);
    noop_0bf11c(a0 + 0x13b70, iVar1, ar6_00, a3, (u32)uStack_20);
    if (cVar2 == '\0') {
        uStack_20._0_4_ = extraout_fr0;
    } else {
        uStack_20 = CONCAT44(extraout_fr0, extraout_fr1);
    }
    game_uses_Class_12c394_m0_0d4e88(a0 + 0x10ac, (u8 *)((int)register0x0000003c + -0x1c));
    ar5_00 = 0xffffffff;
    Vec3_dtor((u8 *)((int)register0x0000003c + -0x1c), 0xffffffff, ar6_00, a3);
    if ((*(int *)(a0 + 0x22810) == 1) || (*(int *)(a0 + 0x22814) == 1)) {
        iVar1 = a0 + 0x10ac;
        game_uses_fill_colors_8c43784c_0d4f3c();
    } else {
        iVar1 = a0 + 0x10ac;
        game_uses_fill_colors_8c43784c_0d4f70();
    }
    Vec3_draw_0d5e2c(iVar1, ar5_00, ar6_00, a3);
    uStack_20._0_4_ = thunk_FUN_8c20a1d0(0x8c43786c);
    return (u32)uStack_20;
}

/*
 * vcall_slot7  0x8c0de170
 * calls virtual slot 7 of the object passed in
 */
u32 vcall_slot7(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*a0 + 0x1c))(a0, a1, a2, a3);
    return uVar1;
}

/*
 * CWaterTank_create_all  0x8c0de18c
 * CWaterTank_CreateStage, WATER_ELEMETNT_Create on +0x10ac and CSprinkler_LoadTexture on +0x13b8c
 */
u32 CWaterTank_create_all(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    CWaterTank_CreateStage(a0, a1, a2);
    WATER_ELEMETNT_Create(a0 + 0x10ac, a1);
    uVar1 = CSprinkler_LoadTexture(a0 + 0x13b8c, a1, a2, a3);
    return uVar1;
}

/*
 * Class_12b930_m1_0de1dc  0x8c0de1dc
 */
u32 Class_12b930_m1_0de1dc(int a0, int a1, u8 *a2, u8 *a3) {
    u64 uVar1;
    int iVar2;
    u8 *ar6_00;
    int iVar3;
    float fVar4;
    double in_dr0;
    u64 in_xd0;
    char cVar5;
    char cVar6;
    u8 auStack_30[8];
    u64 uStack_28;
    u8 auStack_20[4];
    u8 auStack_1c[4];
    u8 auStack_18[12];

    cVar6 = '\0';
    cVar5 = '\0';
    iVar2 = a1;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_20, a1, a2);
    Vec3_ctor_zero(auStack_30, iVar2, ar6_00);
    if (*(int *)(a0 + 0xacc) == 2) {
        a3 = auStack_18;
        ar6_00 = auStack_1c;
        get_vec3_field_50_0db5a8(a0 + 0x9e8, auStack_20, ar6_00, a3);
        iVar2 = a0 + 0xa98;
        Vec3_assign(auStack_30, iVar2, ar6_00, a3);
        (**(code **)(*(int *)(*(int *)(a0 + 0xac8) + 8) + 0x130))(*(int *)(a0 + 0xac8), iVar2, ar6_00, a3);
        uVar1 = uStack_28;
        if (cVar6 == '\0') {
            in_dr0 = (double)CONCAT44((int)((u64)in_dr0 >> 0x20), (int)uStack_28);
            uVar1 = in_xd0;
        }
        if (cVar5 == '\0') {
            fVar4 = SUB84(in_dr0, 0) - (float)((u64)in_dr0 >> 0x20);
        } else {
            fVar4 = SUB84(in_dr0 - in_dr0, 0);
        }
        if (cVar6 == '\0') {
            uStack_28 = CONCAT44(uStack_28._4_4_, fVar4);
            uVar1 = uStack_28;
        }
        uStack_28 = uVar1;
        for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
            a3 = auStack_20;
            ar6_00 = auStack_30;
            iVar2 = a0 + 0xa68;
            Class_12b930_calls_test_0d7294(a0 + iVar3 * 0x16c + 0x22d48, iVar2, ar6_00, a3);
        }
    }
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
        Class_12b930_uses_Vec3_set_zero_0d7100(a0 + iVar3 * 0x16c + 0x22d48);
    }
    Class_12b930_float_calc_0e389c(a0);
    tank_device_sound_update(a0 + 0x13b24, iVar2, ar6_00, a3);
    iVar2 = a1;
    Class_12b930_state_switch_0d9600(a0 + 0x22704, a1, ar6_00);
    get_field_a0_035724(a1, iVar2);
    pure_virtual_stub();
    Class_12bb08_m1_0da338(a0, a1, a2);
    iVar2 = a0 + 0x10ac;
    Class_12b930_vec_0e3994(a0, iVar2, a2, a3);
    Class_12c394_vec_0d64a0(a0 + 0xa68, iVar2, a2, a3);
    game_list_0dbd80(a0, iVar2, a2, a3);
    clear_field_48(a0 + 0x13b24);
    Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_20, 0xffffffff, a2, a3);
    return 1;
}

/*
 * Class_12b930_m2_0de3d4  0x8c0de3d4
 */
u32 Class_12b930_m2_0de3d4(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 ar6_00;
    int iVar1;

    ar5_00 = a1;
    ar6_00 = a2;
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
        Class_12b930_float_calc_0d7154(a0 + iVar1 * 0x16c + 0x22d48);
    }
    Class_12b930_uses_libgcc_divide_helper_0d02c8(a0 + 0x13b24, ar5_00, ar6_00);
    iVar1 = a0 + 0x22eb4;
    Class_12b930_vec_0d3c08(a0 + 0x10ac, iVar1, ar6_00, a3);
    get_field_a0_035724(a1, iVar1);
    pure_virtual_stub();
    Class_12bb08_m2_0da5a8(a0, a1, a2);
    game_list_0dbd80(a0, a1, a2, a3);
    return 1;
}

/*
 * Class_12b930_m3_0de4b0  0x8c0de4b0
 */
u32 Class_12b930_m3_0de4b0(int a0, int a1, u32 a2, int a3) {
    int iVar1;
    int a4;
    int iVar2;
    u32 uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    u32 in_stack_ffffffb8;
    u8 auStack_2c[16];

    iVar4 = a1;
    uVar3 = a2;
    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    Vec3_set_zero(auStack_2c);
    a4 = list_node_next_wrap_0da588(a0 + 0xa4);
    Class_12b930_float_calc_0e389c(a0);
    tank_device_sound_update(a0 + 0x13b24, iVar4, uVar3, a3);
    Class_12b930_uses_rand_0d0d1c(a0 + 0x13b8c, iVar4, uVar3, a3);
    iVar4 = a1;
    Class_12b930_state_switch_0d9600(a0 + 0x22704, a1, uVar3);
    set_float_c_nonneg(a0 + 0x13b24, iVar4, uVar3, a3, in_stack_ffffffb8);
    set_field_c_nonneg(a0 + 0x13b70, iVar4, uVar3, a3, in_stack_ffffffb8);
    iVar6 = a4;
    g_8c437550 = iVar1;
    for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
        iVar4 = a1;
        uVar3 = a2;
        a3 = a0;
        (**(code **)(*(int *)(iVar6 + 8) + 0x10))(iVar6, a1, a2, a0);
        iVar6 = list_node_next(iVar6);
    }
    iVar6 = a4;
    for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
        iVar4 = a0;
        CAnimal_uses_list_node_next_0f4258(iVar6, a0, uVar3, a3);
        iVar6 = list_node_next(iVar6);
    }
    iVar6 = a4;
    for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
        iVar2 = Class_12bb08_test_0da4f8(iVar6);
        if (iVar2 == 1) {
            iVar4 = a0;
            CAnimal_vec_0f4974(iVar6, a0, uVar3, a3);
        }
        iVar6 = list_node_next(iVar6);
    }
    for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
        iVar4 = a0;
        (**(code **)(*(int *)(a4 + 8) + 0x28))(a4, a0, uVar3, a3);
        a4 = list_node_next(a4);
    }
    Class_12bb08_uses_get_field_24_0dbbe8(a0, iVar4, uVar3, a3);
    Class_12b930_vec_0e3994(a0, a0 + 0x10ac, uVar3, a3);
    iVar4 = a0 + 0x22eb4;
    Class_12b930_sound_0d3d6c(a0 + 0x10ac, iVar4, uVar3, a3);
    game_list_0dbd80(a0, iVar4, uVar3, a3);
    uVar3 = object_dtor_delete(auStack_2c, 0xffffffff, uVar3, a3);
    return uVar3;
}

/*
 * set_field_c_nonneg  0x8c0de6b0
 * +0xc = fr4, clamped at 0
 * called by: Class_12b930_m3_0de4b0, input_copy_0e000c, set_field_c_nonneg_on_field_13b70
 */
u32 set_field_c_nonneg(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float in_fr4;

    if (in_fr4 < 0.0) {
        in_fr4 = 0.0;
    }
    *(float *)(a0 + 0xc) = in_fr4;
    return ain0;
}

/*
 * set_float_c_nonneg  0x8c0de6c0
 * stores fr4 (negative values as 0) at +0xc
 * called by: Class_12b930_m3_0de4b0, set_float_c_nonneg_on_field_13b24
 */
u32 set_float_c_nonneg(int a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    float in_fr4;

    if (in_fr4 < 0.0) {
        in_fr4 = 0.0;
    }
    *(float *)(a0 + 0xc) = in_fr4;
    return ain0;
}

/*
 * game_uses_noop_0de6d0  0x8c0de6d0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is noop_0bf11c
 */
u32 game_uses_noop_0de6d0(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 *puVar5;
    float fVar6;
    u64 in_dr0;
    u64 uVar7;
    float fVar8;
    char cVar9;
    char cVar10;
    u32 in_stack_ffffff98;
    float fStack_38;
    float fStack_34;
    u8 auStack_30[16];
    u32 uStack_20;
    u32 uStack_1c;
    int iStack_18;
    int iStack_14;

    cVar10 = '\0';
    cVar9 = '\0';
    if (g_8c437e18 == '\0') {
        in_dr0 = CONCAT44(0x438d0000, (int)in_dr0);
        g_8c437e10 = CONCAT44(0x438d0000, g_8c437e10);
        g_8c437e18 = '\x01';
    }
    if (g_8c437e20 == '\0') {
        in_dr0 = CONCAT44(0x43cf8000, (int)in_dr0);
        g_8c437e1c = 0x43cf8000;
        g_8c437e20 = '\x01';
    }
    puVar5 = &uStack_20;
    color_set_white_a0(puVar5);
    if (*(int *)(a0 + 0x1024) != 0) {
        CEnv_set_texlist(puVar5, a1, a2);
        Class_129808_draw(a0 + 0x1028, a1, a2, a3);
    }
    if (*(int *)(a0 + 0x1024) == 2) {
        if (*(int *)(a0 + 0x1020) == 0) {
            noop_0bf0e8(a0 + 0x13b24, a1, a2, a3, in_stack_ffffff98);
            fVar6 = (float)((u64)in_dr0 >> 0x20);
            if (cVar10 == '\0') {
                fVar6 = fStack_38;
            }
            fStack_38 = fVar6;
            game_uses_sprintf_0d1858(&g_8c13f3b0);
        } else if (*(int *)(a0 + 0x1020) == 1) {
            noop_0bf11c(a0 + 0x13b70, a1, a2, a3, in_stack_ffffff98);
            game_uses_sprintf_0d1858(&g_8c13f400);
        }
    }
    uVar2 = (u32)in_dr0;
    rotate_degrees_7c_on_field_9e8(a0);
    iVar3 = a0 + 0xa68;
    Vec3_ctor_copy(auStack_30, iVar3, a2, a3);
    noop_0bf11c(a0 + 0x13b70, iVar3, a2, a3, in_stack_ffffff98);
    game_uses_Class_12c394_m0_0d4e88(a0 + 0x10ac, auStack_30);
    Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
    iVar4 = a0 + 0x7c;
    iVar3 = a0 + 0x78;
    Vec3_calc_0e3ebc(a0, iVar3, iVar4);
    if (cVar10 == '\0') {
        uStack_20 = *(u32 *)(a0 + 0x78);
        uStack_1c = *(u32 *)(a0 + 0x7c);
        uVar7 = CONCAT44(uStack_1c, uVar2);
    } else {
        uStack_20 = (u32) * (u64 *)(a0 + 0x78);
        uVar7 = *(u64 *)(a0 + 0x7c);
        uStack_1c = (u32)uVar7;
        iStack_18 = (int)((u64)uVar7 >> 0x20);
    }
    iStack_14 = a0 + 0xa68;
    noop_0bf11c(a0 + 0x13b70, iVar3, iVar4, a3, in_stack_ffffff98);
    iStack_18 = (int)uVar7;
    iVar3 = (int)((u64)uVar7 >> 0x20);
    if (cVar10 == '\0') {
        iStack_18 = iVar3;
        iVar3 = iStack_14;
    }
    iStack_14 = iVar3;
    puVar5 = &uStack_20;
    game_draw_0d3f7c(a0 + 0x10ac, puVar5, iVar4, a3);
    Vec3_uses_set_vec_0e3f24(a0);
    puVar5 = &uStack_20;
    iVar3 = a0 + 0x22d48;
    game_draw_0d4124(a0 + 0x10ac, iVar3, puVar5, a3);
    if (cVar10 == '\0') {
        g_8c437e10 = CONCAT44(g_8c437e14, (int)((u64)uVar7 >> 0x20));
        uVar7 = g_8c437e10;
    }
    g_8c437e10 = uVar7;
    obj_set_texlist(a0 + 0x22d40, iVar3, puVar5);
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        game_calls_float_calc_0d43cc(&fStack_38);
        if (cVar10 == '\0') {
            fVar8 = -150.0;
            fVar6 = fStack_38;
        } else {
            fVar6 = -150.0;
            fVar8 = 800.0;
        }
        if (cVar9 != '\0' || fVar8 <= fVar6) {
            if (cVar10 == '\0') {
                fVar8 = 800.0;
                fVar6 = fStack_38;
            } else {
                fVar6 = 800.0;
                fVar8 = -100.0;
            }
            if (cVar9 != '\0' || fVar6 <= fVar8) {
                if (cVar10 == '\0') {
                    fVar8 = -100.0;
                    fVar6 = fStack_34;
                } else {
                    fVar6 = -100.0;
                    fVar8 = 600.0;
                }
                if (cVar9 != '\0' || fVar8 <= fVar6) {
                    if (cVar10 == '\0') {
                        fVar8 = 600.0;
                        fVar6 = fStack_34;
                    } else {
                        fVar6 = 600.0;
                        fVar8 = 1.99915e-40;
                    }
                    if (cVar9 != '\0' || fVar6 <= fVar8) {
                        game_draw_0d7354(a0 + iVar4 * 0x16c + 0x22d48, iVar3, puVar5, a3);
                    }
                }
            }
        }
    }
    game_draw_0e14fc(a0, iVar3, puVar5, a3);
    game_calls_float_calc_0d43cc(&fStack_38);
    if (cVar10 == '\0') {
        fVar8 = -150.0;
        fVar6 = fStack_38;
    } else {
        fVar6 = -150.0;
        fVar8 = 800.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar6) {
        if (cVar10 == '\0') {
            fVar8 = 800.0;
            fVar6 = fStack_38;
        } else {
            fVar6 = 800.0;
            fVar8 = -100.0;
        }
        if (cVar9 != '\0' || fVar6 <= fVar8) {
            if (cVar10 == '\0') {
                fVar8 = -100.0;
                fVar6 = fStack_34;
            } else {
                fVar6 = -100.0;
                fVar8 = 600.0;
            }
            if (cVar9 != '\0' || fVar8 <= fVar6) {
                if (cVar10 == '\0') {
                    fVar6 = 600.0;
                } else {
                    fStack_34 = 600.0;
                    fVar6 = 1.99915e-40;
                }
                if (cVar9 != '\0' || fStack_34 <= fVar6) {
                    game_draw_0d0564(a0 + 0x13b24, iVar3, puVar5, a3);
                }
            }
        }
    }
    game_calls_float_calc_0d43cc(&fStack_38);
    if (cVar10 == '\0') {
        fVar8 = 650.0;
        fVar6 = fStack_38;
    } else {
        fVar6 = 650.0;
        fVar8 = 1.9765e-40;
    }
    if (cVar9 != '\0' || fVar6 <= fVar8) {
        iVar3 = a0 + 0x226f8;
        game_draw_0e4198(a0, iVar3, puVar5, a3);
    }
    game_draw_0d9720(a0 + 0x22704, iVar3, puVar5, a3);
    game_draw_0d092c(a0 + 0x13b70, iVar3, puVar5, a3);
    for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
        iVar1 = has_field_2c(a0 + iVar4 * 0x68 + 0xc0c);
        if (iVar1 == 1) {
            puVar5 = (u32 *)(a0 + 4);
            iVar3 = a0 + 0xc;
            game_draw_0f7118(a0 + iVar4 * 0x68 + 0xc0c, iVar3, puVar5);
        }
    }
    game_uses_list_node_next_wrap_0da754(a0);
    uVar2 = free_if_nonnull_wrap_0deb30(&uStack_20, 0xffffffff, puVar5, a3);
    return uVar2;
}

/*
 * free_if_nonnull_wrap_0deb30  0x8c0deb30
 * called by: game_draw_0df668, game_uses_color_set_white_a0_0df250, game_uses_noop_0de6d0, game_uses_noop_0deb60,
 * game_uses_noop_0def78
 */
int free_if_nonnull_wrap_0deb30(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * game_uses_noop_0deb60  0x8c0deb60
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is noop_0bf11c
 */
u32 game_uses_noop_0deb60(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    u32 *puVar5;
    float fVar6;
    u64 in_dr0;
    u64 uVar7;
    float fVar8;
    char cVar9;
    char cVar10;
    u32 in_stack_ffffff98;
    float fStack_38;
    float fStack_34;
    u8 auStack_30[16];
    u32 uStack_20;
    u32 uStack_1c;
    int iStack_18;
    int iStack_14;

    cVar10 = '\0';
    cVar9 = '\0';
    puVar5 = &uStack_20;
    color_set_white_a0(puVar5);
    if (*(int *)(a0 + 0x1024) != 0) {
        CEnv_set_texlist(puVar5, a1, a2);
        Class_129808_draw(a0 + 0x1028, a1, a2, a3);
    }
    if (*(int *)(a0 + 0x1024) == 2) {
        if (*(int *)(a0 + 0x1020) == 0) {
            noop_0bf0e8(a0 + 0x13b24, a1, a2, a3, in_stack_ffffff98);
            fVar6 = (float)((u64)in_dr0 >> 0x20);
            if (cVar10 == '\0') {
                fVar6 = fStack_38;
            }
            fStack_38 = fVar6;
            game_uses_sprintf_0d1858(&g_8c13f3b0);
        } else if (*(int *)(a0 + 0x1020) == 1) {
            noop_0bf11c(a0 + 0x13b70, a1, a2, a3, in_stack_ffffff98);
            game_uses_sprintf_0d1858(&g_8c13f400);
        }
    }
    uVar2 = (u32)in_dr0;
    rotate_degrees_7c_on_field_9e8(a0);
    iVar3 = a0 + 0xa68;
    Vec3_ctor_copy(auStack_30, iVar3, a2, a3);
    noop_0bf11c(a0 + 0x13b70, iVar3, a2, a3, in_stack_ffffff98);
    game_uses_Class_12c394_m0_0d4e88(a0 + 0x10ac, auStack_30);
    Vec3_dtor(auStack_30, 0xffffffff, a2, a3);
    iVar4 = a0 + 0x7c;
    iVar3 = a0 + 0x78;
    Vec3_calc_0e3ebc(a0, iVar3, iVar4);
    if (cVar10 == '\0') {
        uStack_20 = *(u32 *)(a0 + 0x78);
        uStack_1c = *(u32 *)(a0 + 0x7c);
        uVar7 = CONCAT44(uStack_1c, uVar2);
    } else {
        uStack_20 = (u32) * (u64 *)(a0 + 0x78);
        uVar7 = *(u64 *)(a0 + 0x7c);
        uStack_1c = (u32)uVar7;
        iStack_18 = (int)((u64)uVar7 >> 0x20);
    }
    iStack_14 = a0 + 0xa68;
    noop_0bf11c(a0 + 0x13b70, iVar3, iVar4, a3, in_stack_ffffff98);
    iStack_18 = (int)uVar7;
    iVar3 = (int)((u64)uVar7 >> 0x20);
    if (cVar10 == '\0') {
        iStack_18 = iVar3;
        iVar3 = iStack_14;
    }
    iStack_14 = iVar3;
    puVar5 = &uStack_20;
    game_draw_0d3f7c(a0 + 0x10ac, puVar5, iVar4, a3);
    Vec3_uses_set_vec_0e3f24(a0);
    puVar5 = &uStack_20;
    iVar3 = a0 + 0x22d48;
    game_draw_0d4428(a0 + 0x10ac, iVar3, puVar5, a3);
    if (cVar10 == '\0') {
        g_8c437f34 = CONCAT44(DAT_8c437f34_4, (int)((u64)uVar7 >> 0x20));
        uVar7 = g_8c437f34;
    }
    g_8c437f34 = uVar7;
    game_draw_0e157c(a0, iVar3, puVar5, a3);
    obj_set_texlist(a0 + 0x22d40, iVar3, puVar5);
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        game_calls_float_calc_0d43cc(&fStack_38);
        if (cVar10 == '\0') {
            fVar8 = -150.0;
            fVar6 = fStack_38;
        } else {
            fVar6 = -150.0;
            fVar8 = 800.0;
        }
        if (cVar9 != '\0' || fVar8 <= fVar6) {
            if (cVar10 == '\0') {
                fVar8 = 800.0;
                fVar6 = fStack_38;
            } else {
                fVar6 = 800.0;
                fVar8 = -100.0;
            }
            if (cVar9 != '\0' || fVar6 <= fVar8) {
                if (cVar10 == '\0') {
                    fVar8 = -100.0;
                    fVar6 = fStack_34;
                } else {
                    fVar6 = -100.0;
                    fVar8 = 600.0;
                }
                if (cVar9 != '\0' || fVar8 <= fVar6) {
                    if (cVar10 == '\0') {
                        fVar8 = 600.0;
                        fVar6 = fStack_34;
                    } else {
                        fVar6 = 600.0;
                        fVar8 = 1.99915e-40;
                    }
                    if (cVar9 != '\0' || fVar6 <= fVar8) {
                        game_draw_0d7410(a0 + iVar4 * 0x16c + 0x22d48, iVar3, puVar5, a3);
                    }
                }
            }
        }
    }
    game_calls_float_calc_0d43cc(&fStack_38);
    if (cVar10 == '\0') {
        fVar8 = -150.0;
        fVar6 = fStack_38;
    } else {
        fVar6 = -150.0;
        fVar8 = 800.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar6) {
        if (cVar10 == '\0') {
            fVar8 = 800.0;
            fVar6 = fStack_38;
        } else {
            fVar6 = 800.0;
            fVar8 = -100.0;
        }
        if (cVar9 != '\0' || fVar6 <= fVar8) {
            if (cVar10 == '\0') {
                fVar8 = -100.0;
                fVar6 = fStack_34;
            } else {
                fVar6 = -100.0;
                fVar8 = 600.0;
            }
            if (cVar9 != '\0' || fVar8 <= fVar6) {
                if (cVar10 == '\0') {
                    fVar6 = 600.0;
                } else {
                    fStack_34 = 600.0;
                    fVar6 = 1.99915e-40;
                }
                if (cVar9 != '\0' || fStack_34 <= fVar6) {
                    game_draw_0d05d0(a0 + 0x13b24, iVar3, puVar5, a3);
                }
            }
        }
    }
    game_calls_float_calc_0d43cc(&fStack_38);
    if (cVar10 == '\0') {
        fVar8 = 650.0;
        fVar6 = fStack_38;
    } else {
        fVar6 = 650.0;
        fVar8 = 1.9765e-40;
    }
    if (cVar9 != '\0' || fVar6 <= fVar8) {
        iVar3 = a0 + 0x226f8;
        game_draw_0e4198(a0, iVar3, puVar5, a3);
    }
    game_draw_0d9720(a0 + 0x22704, iVar3, puVar5, a3);
    game_draw_0d0990(a0 + 0x13b70, iVar3, puVar5, a3);
    for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
        iVar1 = has_field_2c(a0 + iVar4 * 0x68 + 0xc0c);
        if (iVar1 == 1) {
            puVar5 = (u32 *)(a0 + 4);
            iVar3 = a0 + 0xc;
            game_draw_0f7118(a0 + iVar4 * 0x68 + 0xc0c, iVar3, puVar5);
        }
    }
    game_uses_list_node_next_wrap_0da754(a0);
    uVar2 = free_if_nonnull_wrap_0deb30(&uStack_20, 0xffffffff, puVar5, a3);
    return uVar2;
}

/*
 * game_uses_noop_0def78  0x8c0def78
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is noop_0bf11c
 */
u32 game_uses_noop_0def78(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    u32 *puVar4;
    int iVar5;
    u64 in_dr0;
    code *pcVar6;
    char cVar7;
    u32 in_stack_ffffffb8;
    u32 auStack_2c[4];
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    int iStack_10;

    cVar7 = '\0';
    puVar4 = &uStack_1c;
    color_set_white_a0(puVar4);
    if (*(int *)(a0 + 0x1024) != 0) {
        CEnv_set_texlist(puVar4, a1, a2);
        Class_129808_draw(a0 + 0x1028, a1, a2, a3);
    }
    if (*(int *)(a0 + 0x1024) == 2) {
        if (*(int *)(a0 + 0x1020) == 0) {
            noop_0bf0e8(a0 + 0x13b24, a1, a2, a3, in_stack_ffffffb8);
            uVar2 = (int)((u64)in_dr0 >> 0x20);
            if (cVar7 == '\0') {
                uVar2 = auStack_2c[0];
            }
            auStack_2c[0] = uVar2;
            game_uses_sprintf_0d1858(&g_8c13f3b0);
        } else if (*(int *)(a0 + 0x1020) == 1) {
            noop_0bf11c(a0 + 0x13b70, a1, a2, a3, in_stack_ffffffb8);
            game_uses_sprintf_0d1858(&g_8c13f400);
        }
    }
    uVar2 = (u32)in_dr0;
    rotate_degrees_7c_on_field_9e8(a0);
    iVar3 = a0 + 0xa68;
    Vec3_ctor_copy(auStack_2c, iVar3, a2, a3);
    noop_0bf11c(a0 + 0x13b70, iVar3, a2, a3, in_stack_ffffffb8);
    game_uses_Class_12c394_m0_0d4e88(a0 + 0x10ac, auStack_2c);
    Vec3_dtor(auStack_2c, 0xffffffff, a2, a3);
    iVar3 = a0 + 0x7c;
    Vec3_calc_0e3ebc(a0, a0 + 0x78, iVar3);
    if (cVar7 == '\0') {
        uStack_1c = *(u32 *)(a0 + 0x78);
        uStack_18 = *(u32 *)(a0 + 0x7c);
        pcVar6 = (code *)0x42c80000;
    } else {
        uStack_1c = (u32) * (u64 *)(a0 + 0x78);
        uStack_18 = (u32) * (u64 *)(a0 + 0x7c);
        uVar2 = 0x42c80000;
        pcVar6 = game_draw_0d3f7c;
    }
    uStack_14 = 0x42c80000;
    iStack_10 = a0 + 0xa68;
    puVar4 = &uStack_1c;
    game_draw_0d3f7c(a0 + 0x10ac, puVar4, iVar3, a3);
    Vec3_uses_set_vec_0e3f24(a0);
    puVar4 = &uStack_1c;
    iVar3 = a0 + 0x22d48;
    game_draw_0d46cc(a0 + 0x10ac, iVar3, puVar4, a3);
    if (cVar7 == '\0') {
        g_8c438048 = CONCAT44(DAT_8c438048_4, pcVar6);
    } else {
        g_8c438048 = CONCAT44(pcVar6, uVar2);
    }
    game_draw_0e157c(a0, iVar3, puVar4, a3);
    obj_set_texlist(a0 + 0x22d40, iVar3, puVar4);
    game_draw_0d7410(a0 + 0x22d48, iVar3, puVar4, a3);
    game_draw_0d7410(a0 + 0x22eb4, iVar3, puVar4, a3);
    game_draw_0d7410(a0 + 0x23020, iVar3, puVar4, a3);
    game_draw_0d0990(a0 + 0x13b70, iVar3, puVar4, a3);
    game_draw_0d05d0(a0 + 0x13b24, iVar3, puVar4, a3);
    iVar3 = a0 + 0x226f8;
    game_draw_0e4198(a0, iVar3, puVar4, a3);
    game_draw_0d9720(a0 + 0x22704, iVar3, puVar4, a3);
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
        iVar1 = has_field_2c(a0 + iVar5 * 0x68 + 0xc0c);
        if (iVar1 == 1) {
            puVar4 = (u32 *)(a0 + 4);
            iVar3 = a0 + 0xc;
            game_draw_0f7118(a0 + iVar5 * 0x68 + 0xc0c, iVar3, puVar4);
        }
    }
    game_uses_list_node_next_wrap_0da754(a0);
    uVar2 = free_if_nonnull_wrap_0deb30(&uStack_1c, 0xffffffff, puVar4, a3);
    return uVar2;
}

/*
 * game_uses_color_set_white_a0_0df250  0x8c0df250
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is color_set_white_a0
 */
u32 game_uses_color_set_white_a0_0df250(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    int iVar4;
    int iVar5;
    u32 in_fr1;
    float fVar6;
    u64 uVar7;
    u32 uVar8;
    float fVar9;
    char cVar10;
    char cVar11;
    u32 in_stack_ffffffa0;
    float fStack_38;
    float fStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    int iStack_14;

    cVar11 = '\0';
    cVar10 = '\0';
    color_set_white_a0(&uStack_20);
    Vec3_ctor_zero(&uStack_30, a1, a2);
    if (cVar11 == '\0') {
        uStack_30 = *(u32 *)(a0 + 0x22d4c);
        uStack_2c = *(u32 *)(a0 + 0x22d50);
        uStack_28 = *(u32 *)(a0 + 0x22d54);
        uVar7 = CONCAT44(uStack_28, in_fr1);
    } else {
        uStack_30 = (u32) * (u64 *)(a0 + 0x22d4c);
        uStack_2c = (u32) * (u64 *)(a0 + 0x22d50);
        uVar7 = *(u64 *)(a0 + 0x22d54);
        uStack_28 = (u32)uVar7;
        uStack_24 = (u32)((u64)uVar7 >> 0x20);
    }
    iVar4 = a0;
    rotate_degrees_7c_on_field_9e8(a0);
    if (*(int *)(a0 + 0x1024) != 0) {
        CEnv_set_texlist(iVar4, a1, a2);
        Class_129808_draw(a0 + 0x1028, a1, a2, a3);
    }
    if (*(int *)(a0 + 0x1024) == 2) {
        if (*(int *)(a0 + 0x1020) == 0) {
            noop_0bf0e8(a0 + 0x13b24, a1, a2, a3, in_stack_ffffffa0);
            fVar6 = (float)((u64)uVar7 >> 0x20);
            if (cVar11 == '\0') {
                fVar6 = fStack_38;
            }
            fStack_38 = fVar6;
            game_uses_sprintf_0d1858(&g_8c13f3d8);
        } else if (*(int *)(a0 + 0x1020) == 4) {
            ret_const_eb40(a0 + 0x13b8c, a1, a2, a3);
            game_uses_sprintf_0d1858(&g_8c13f428);
        }
    }
    uVar2 = (u32)uVar7;
    iVar4 = a0 + 0x7c;
    Vec3_calc_0e3ebc(a0, a0 + 0x78, iVar4);
    if (cVar11 == '\0') {
        uStack_20 = *(u32 *)(a0 + 0x78);
        uStack_1c = *(u32 *)(a0 + 0x7c);
        uVar8 = 0x42c80000;
    } else {
        uStack_20 = (u32) * (u64 *)(a0 + 0x78);
        uStack_1c = (u32) * (u64 *)(a0 + 0x7c);
        uVar2 = 0x42c80000;
        uVar8 = 0xa68;
    }
    uStack_18 = 0x42c80000;
    iStack_14 = a0 + 0xa68;
    puVar3 = &uStack_20;
    game_draw_0d400c(a0 + 0x10ac, puVar3, iVar4, a3);
    Vec3_uses_set_vec_0e3f24(a0);
    puVar3 = &uStack_20;
    game_draw_0d4900(a0 + 0x10ac, puVar3, iVar4, a3);
    if (cVar11 == '\0') {
        g_8c43814c = CONCAT44(DAT_8c43814c_4, uVar8);
    } else {
        g_8c43814c = CONCAT44(uVar8, uVar2);
    }
    game_draw_0e15fc(a0, puVar3, iVar4, a3);
    obj_set_texlist(a0 + 0x22d40, puVar3, iVar4);
    game_draw_0d7410(a0 + 0x22d48, puVar3, iVar4, a3);
    for (iVar5 = 1; iVar5 < 3; iVar5 = iVar5 + 1) {
        game_calls_float_calc_0d43cc(&fStack_38);
        if (cVar11 == '\0') {
            fVar9 = -150.0;
            fVar6 = fStack_38;
        } else {
            fVar6 = -150.0;
            fVar9 = 800.0;
        }
        if (cVar10 != '\0' || fVar9 <= fVar6) {
            if (cVar11 == '\0') {
                fVar9 = 800.0;
                fVar6 = fStack_38;
            } else {
                fVar6 = 800.0;
                fVar9 = -100.0;
            }
            if (cVar10 != '\0' || fVar6 <= fVar9) {
                if (cVar11 == '\0') {
                    fVar9 = -100.0;
                    fVar6 = fStack_34;
                } else {
                    fVar6 = -100.0;
                    fVar9 = 600.0;
                }
                if (cVar10 != '\0' || fVar9 <= fVar6) {
                    if (cVar11 == '\0') {
                        fVar9 = 600.0;
                        fVar6 = fStack_34;
                    } else {
                        fVar6 = 600.0;
                        fVar9 = 1.99915e-40;
                    }
                    if (cVar10 != '\0' || fVar6 <= fVar9) {
                        game_draw_0d7410(a0 + iVar5 * 0x16c + 0x22d48, puVar3, iVar4, a3);
                    }
                }
            }
        }
    }
    game_calls_float_calc_0d43cc(&fStack_38);
    if (cVar11 == '\0') {
        fVar9 = -150.0;
        fVar6 = fStack_38;
    } else {
        fVar6 = -150.0;
        fVar9 = 800.0;
    }
    if (cVar10 != '\0' || fVar9 <= fVar6) {
        if (cVar11 == '\0') {
            fVar9 = 800.0;
            fVar6 = fStack_38;
        } else {
            fVar6 = 800.0;
            fVar9 = -100.0;
        }
        if (cVar10 != '\0' || fVar6 <= fVar9) {
            if (cVar11 == '\0') {
                fVar9 = -100.0;
                fVar6 = fStack_34;
            } else {
                fVar6 = -100.0;
                fVar9 = 600.0;
            }
            if (cVar10 != '\0' || fVar9 <= fVar6) {
                if (cVar11 == '\0') {
                    fVar6 = 600.0;
                } else {
                    fStack_34 = 600.0;
                    fVar6 = 1.99915e-40;
                }
                if (cVar10 != '\0' || fStack_34 <= fVar6) {
                    game_draw_0d05d0(a0 + 0x13b24, puVar3, iVar4, a3);
                }
            }
        }
    }
    game_calls_float_calc_0d43cc(&fStack_38);
    if (cVar11 == '\0') {
        fVar9 = 650.0;
        fVar6 = fStack_38;
    } else {
        fVar6 = 650.0;
        fVar9 = 1.9765e-40;
    }
    if (cVar10 != '\0' || fVar6 <= fVar9) {
        puVar3 = (u32 *)(a0 + 0x226f8);
        game_draw_0e4198(a0, puVar3, iVar4, a3);
    }
    game_draw_0d9720(a0 + 0x22704, puVar3, iVar4, a3);
    game_uses_obj_set_texlist_0d1168(a0 + 0x13b8c, puVar3, iVar4);
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
        iVar1 = has_field_2c(a0 + iVar5 * 0x68 + 0xc0c);
        if (iVar1 == 1) {
            iVar4 = a0 + 4;
            puVar3 = (u32 *)(a0 + 0xc);
            game_draw_0f7118(a0 + iVar5 * 0x68 + 0xc0c, puVar3, iVar4);
        }
    }
    game_uses_list_node_next_wrap_0da754(a0);
    Vec3_dtor(&uStack_30, 0xffffffff, iVar4, a3);
    uVar2 = free_if_nonnull_wrap_0deb30(&uStack_20, 0xffffffff, iVar4, a3);
    return uVar2;
}

/*
 * game_draw_0df668  0x8c0df668
 * area name: game code; nothing names its area yet; behaviour name: mostly calls draw functions
 */
u32 game_draw_0df668(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 *puVar3;
    int ar5_00;
    int iVar4;
    int iVar5;
    u32 in_fr1;
    u64 uVar6;
    u32 uVar7;
    char cVar8;
    u32 uStack_2c;
    u32 uStack_28;
    u32 uStack_24;
    u32 uStack_20;
    u32 uStack_1c;
    u32 uStack_18;
    u32 uStack_14;
    int iStack_10;

    cVar8 = '\0';
    color_set_white_a0(&uStack_1c);
    Vec3_ctor_zero(&uStack_2c, a1, a2);
    if (cVar8 == '\0') {
        uStack_2c = *(u32 *)(a0 + 0x22d4c);
        uStack_28 = *(u32 *)(a0 + 0x22d50);
        uStack_24 = *(u32 *)(a0 + 0x22d54);
        uVar6 = CONCAT44(uStack_24, in_fr1);
    } else {
        uStack_2c = (u32) * (u64 *)(a0 + 0x22d4c);
        uStack_28 = (u32) * (u64 *)(a0 + 0x22d50);
        uVar6 = *(u64 *)(a0 + 0x22d54);
        uStack_24 = (u32)uVar6;
        uStack_20 = (u32)((u64)uVar6 >> 0x20);
    }
    uVar2 = (u32)uVar6;
    iVar4 = a0;
    rotate_degrees_7c_on_field_9e8(a0);
    if (*(int *)(a0 + 0x1024) != 0) {
        CEnv_set_texlist(iVar4, a1, a2);
        Class_129808_draw(a0 + 0x1028, a1, a2, a3);
    }
    iVar4 = a0 + 0x7c;
    Vec3_calc_0e3ebc(a0, a0 + 0x78, iVar4);
    if (cVar8 == '\0') {
        uStack_1c = *(u32 *)(a0 + 0x78);
        uStack_18 = *(u32 *)(a0 + 0x7c);
        uVar7 = 0x42c80000;
    } else {
        uStack_1c = (u32) * (u64 *)(a0 + 0x78);
        uStack_18 = (u32) * (u64 *)(a0 + 0x7c);
        uVar2 = 0x42c80000;
        uVar7 = 0xa68;
    }
    uStack_14 = 0x42c80000;
    iStack_10 = a0 + 0xa68;
    puVar3 = &uStack_1c;
    game_draw_0d400c(a0 + 0x10ac, puVar3, iVar4, a3);
    Vec3_uses_set_vec_0e3f24(a0);
    puVar3 = &uStack_1c;
    game_draw_0d4900(a0 + 0x10ac, puVar3, iVar4, a3);
    if (cVar8 == '\0') {
        g_8c438250 = CONCAT44(g_8c438254, uVar7);
    } else {
        g_8c438250 = CONCAT44(uVar7, uVar2);
        uStack_2c = uVar7;
    }
    game_draw_0e15fc(a0, puVar3, iVar4, a3);
    obj_set_texlist(a0 + 0x22d40, puVar3, iVar4);
    game_draw_0d7410(a0 + 0x22d48, puVar3, iVar4, a3);
    game_draw_0d7410(a0 + 0x22eb4, puVar3, iVar4, a3);
    game_draw_0d7410(a0 + 0x23020, puVar3, iVar4, a3);
    game_uses_obj_set_texlist_0d1168(a0 + 0x13b8c, puVar3, iVar4);
    game_draw_0d05d0(a0 + 0x13b24, puVar3, iVar4, a3);
    ar5_00 = a0 + 0x226f8;
    game_draw_0e4198(a0, ar5_00, iVar4, a3);
    game_draw_0d9720(a0 + 0x22704, ar5_00, iVar4, a3);
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
        iVar1 = has_field_2c(a0 + iVar5 * 0x68 + 0xc0c);
        if (iVar1 == 1) {
            iVar4 = a0 + 4;
            ar5_00 = a0 + 0xc;
            game_draw_0f7118(a0 + iVar5 * 0x68 + 0xc0c, ar5_00, iVar4);
        }
    }
    game_uses_list_node_next_wrap_0da754(a0);
    Vec3_dtor(&uStack_2c, 0xffffffff, iVar4, a3);
    uVar2 = free_if_nonnull_wrap_0deb30(&uStack_1c, 0xffffffff, iVar4, a3);
    return uVar2;
}

/*
 * game_uses_light_set_vec_0df8d0  0x8c0df8d0
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is light_set_vec_4c0ef4
 */
u32 game_uses_light_set_vec_0df8d0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 in_PR;

    if (*(int *)(a0 + 0x9d4) == 0) {
        uVar1 = 0;
    } else {
        if ((*(int *)(a0 + 0x22810) == 0) && (*(int *)(a0 + 0x22814) == 0)) {
            uVar1 = 1;
            light_set_vec_4c0ef4(1, a1, a2, a3, in_PR);
            gfxlib_calc_219070();
            game_calls_calc_0f4b44(*(u32 *)(a0 + 0x9d4));
            (**(code **)(*(int *)(*(int *)(a0 + 0x9d4) + 8) + 0x34))(*(int *)(a0 + 0x9d4), a1, a2, a3);
            uVar1 = 1;
            light_set_vec_4c0ef4(1, a1, a2, a3, in_PR);
            gfxlib_calc_219070();
        } else {
            game_uses_light_set_vec_0da88c(a0, a1, a2, a3);
        }
        uVar1 = 1;
    }
    return uVar1;
}

/*
 * env_add_item_if_room  0x8c0df998
 * CEnv_AddItem unless the list at +0xa4 already holds 25 items
 * called by: game_uses_set_vec3_field_30_0e057c
 */
u32 env_add_item_if_room(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = get_field_300_0bf154(a0 + 0xa4);
    if (iVar1 != 0x19) {
        a1 = CEnv_AddItem(a0, a1, a2, a3);
    }
    return a1;
}

/*
 * game_vec_0df9ec  0x8c0df9ec
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0df9ec(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u8 auStack_28[16];
    u8 auStack_18[20];

    uVar1 = a1;
    Vec3_ctor_zero(auStack_18, a1, a2);
    Vec3_ctor_copy_wrap_02f670(a1, uVar1, a2, a3, auStack_28);
    Vec3_assign(auStack_18, auStack_28, a2, a3);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    set_vec3_field_30(a1, uVar1, a2);
    uVar1 = (**(code **)(*a0 + 0x4c))(a0, a1, a2, a3);
    Vec3_dtor(auStack_18, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * game_vec_0dfa84  0x8c0dfa84
 * area name: game code; nothing names its area yet; behaviour name: mostly calls vec functions
 */
u32 game_vec_0dfa84(int a0, u32 *a1, u8 *a2, u8 *a3) {
    u32 uVar1;
    u32 *ar5_00;
    int iVar2;
    int iVar3;
    float fVar5;
    double dVar4;
    double in_dr14;
    bool bVar6;
    char cVar7;
    char cVar8;
    u8 auStack_b0[4];
    u8 auStack_ac[12];
    u8 auStack_a0[132];

    cVar8 = '\0';
    cVar7 = '\0';
    ar5_00 = a1;
    Class_129a50_ctor(auStack_a0);
    Vec3_ctor_zero(auStack_b0, ar5_00, a2);
    if (cVar8 == '\0') {
        in_dr14 = (double)CONCAT44((int)((u64)in_dr14 >> 0x20), 0x7f7fffff);
    }
    iVar3 = 0;
    iVar2 = 0;
    if (*(int *)(a0 + 0x9d8) == 0) {
        iVar2 = CEnv_vec_0dac50(a0, a1, a2, a3);
    }
    if (iVar2 == 0) {
        if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(g_8c1264b8, *a1);
        } else {
            dVar4 = (double)CONCAT44(_UNK_8c1264bc, g_8c1264b8);
        }
        if (SUB84(dVar4, 0) == (float)((u64)dVar4 >> 0x20)) {
            *(u32 *)(a0 + 0x9d8) = 0;
        } else {
            for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
                a3 = auStack_ac;
                a2 = auStack_b0;
                game_calls_float_calc_019508(auStack_a0, a0 + iVar2 * 0x16c + 0x22d4c, a2, a3);
                uVar1 = SUB84(in_dr14, 0);
                Vec3_distance_sq(auStack_b0, a1, a2, a3);
                fVar5 = (float)((u64)dVar4 >> 0x20);
                in_dr14 = dVar4;
                if (cVar8 == '\0') {
                    in_dr14 = (double)CONCAT44(fVar5, uVar1);
                }
                if (cVar7 == '\0') {
                    bVar6 = fVar5 < SUB84(in_dr14, 0);
                } else {
                    bVar6 = dVar4 < in_dr14;
                }
                if (bVar6) {
                    if (cVar8 == '\0') {
                        uVar1 = (u32)((u64)in_dr14 >> 0x20);
                        in_dr14 = (double)CONCAT44(uVar1, uVar1);
                    }
                    iVar3 = a0 + iVar2 * 0x16c + 0x22d48;
                }
            }
            if (cVar8 == '\0') {
                dVar4 = (double)CONCAT44(0x428c0000, SUB84(dVar4, 0));
            } else {
                dVar4 = 5.33949302018055e-311;
            }
            if (cVar7 == '\0') {
                bVar6 = SUB84(in_dr14, 0) < (float)((u64)dVar4 >> 0x20);
            } else {
                bVar6 = in_dr14 < dVar4;
            }
            if (bVar6) {
                *(int *)(a0 + 0x9d8) = iVar3;
            } else {
                *(u32 *)(a0 + 0x9d8) = 0;
            }
        }
    }
    uVar1 = *(u32 *)(a0 + 0x9d4);
    Vec3_dtor(auStack_b0, 0xffffffff, a2, a3);
    Class_129a50_dtor(auStack_a0, 0xffffffff, a2, a3);
    return uVar1;
}

/*
 * game_uses_get_field_38_0dfbdc  0x8c0dfbdc
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is get_field_38_0db5a0
 */
u32 game_uses_get_field_38_0dfbdc(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar4_00;
    u32 ar5_00;
    int a4;
    u32 extraout_fr1;
    u32 extraout_fr1_00;
    u32 uVar2;
    char cVar3;

    cVar3 = '\0';
    ar5_00 = a1;
    iVar1 = get_field_38_0db5a0(a0 + 0x768);
    if (iVar1 != 0) {
        iVar1 = list_node_next_wrap_0db580(a0 + 0x768);
        a4 = *(int *)(iVar1 + 8);
        iVar1 = (**(code **)(*(int *)(a4 + 8) + 0xcc))(a4, ar5_00, a2, a3);
        if ((iVar1 == 1) && (iVar1 = (**(code **)(*(int *)(a4 + 8) + 0xd0))(a4, ar5_00, a2, a3), iVar1 == 1)) {
            ar4_00 = (**(code **)(*(int *)(a4 + 8) + 0x178))(a4, ar5_00, a2, a3);
            a2 = get_field_4_0253e4(ar4_00, ar5_00, a2, a3);
            game_release_0ae640(0x8c3eb334, 12000, a2);
        }
    }
    game_uses_get_field_300_0db8d4(a0, a1, a2, a3);
    game_fill_loop_0e96b8(a0 + 0xf4c);
    game_vec_0d6920(a0 + 0xa68, a1, a2, a3);
    (**(code **)(*(int *)(a0 + 0x9e8) + 0x10))((int *)(a0 + 0x9e8), a1, a2, a3);
    game_init_fields_0d0720(a0 + 0x13b24);
    game_uses_set_field_18_to_1_0d0a84(a0 + 0x13b70);
    se_calls_init_fields_0d1548(a0 + 0x13b8c);
    set_fields_18_10_14(a0 + 0x22704);
    uVar2 = extraout_fr1;
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
        game_copy_0d7314(a0 + iVar1 * 0x16c + 0x22d48, a1, a2, a3);
        uVar2 = extraout_fr1_00;
    }
    *(u32 *)(a0 + 0x22810) = 1;
    *(u32 *)(a0 + 0x22814) = 1;
    if (cVar3 == '\0') {
        *(u32 *)(a0 + 0x2324c) = 0;
    } else {
        *(u64 *)(a0 + 0x2324c) = (u64)uVar2;
    }
    *(u32 *)(a0 + 0x23250) = 0;
    *(u32 *)(a0 + 0x23254) = 0;
    return 1;
}

/*
 * noop_0dfdc4  0x8c0dfdc4
 */
u32 noop_0dfdc4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0dfdc8  0x8c0dfdc8
 */
u32 noop_0dfdc8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_uses_set_field_14_0dfdcc  0x8c0dfdcc
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_field_14_0d0a3c
 */
u32 game_uses_set_field_14_0dfdcc(int a0) {

    set_field_14_0d0a3c(a0 + 0x13b70, 1);
    *(u32 *)(a0 + 0x10dc) = 1;
    return 0x10dc;
}

/*
 * game_uses_set_field_14_0dfdfc  0x8c0dfdfc
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is set_field_14_0d0a3c
 */
u32 game_uses_set_field_14_0dfdfc(int a0) {

    set_field_14_0d0a3c(a0 + 0x13b70, 0);
    *(u32 *)(a0 + 0x10dc) = 0;
    return 0x10dc;
}

/*
 * game_uses_pure_virtual_stub_0dfe2c  0x8c0dfe2c
 * area name: game code; nothing names its area yet; behaviour name: its main named callee is pure_virtual_stub
 */
u32 game_uses_pure_virtual_stub_0dfe2c(u32 unused_a0, u32 a1) {
    int iVar1;
    u32 uVar2;

    pure_virtual_stub_wrap_0daf3c();
    pure_virtual_stub();
    iVar1 = input_a_released_wrap(a1);
    if (iVar1 == 1) {
        uVar2 = get_field_cc_0dfee8(a1);
        uVar2 = field_ptr_384c(uVar2);
        speech_talk_01da60();
    }
    pure_virtual_stub();
    return 1;
}

/*
 * get_field_cc_0dfee8  0x8c0dfee8
 * called by: game_uses_get_field_cc_0e6804, game_uses_pure_virtual_stub_0dfe2c, game_uses_stick_x_right_half_0e1f90,
 * input_uses_get_field_24_0e25c0
 */
u32 get_field_cc_0dfee8(int a0) {
    return *(u32 *)(0xcc + a0);
}

/*
 * input_a_released_wrap  0x8c0dfef4
 * only calls input_a_released
 * called by: game_uses_get_field_cc_0e6804, game_uses_pure_virtual_stub_0dfe2c
 */
u32 input_a_released_wrap(int a0) {
    u32 uVar1;

    uVar1 = input_a_released(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * input_uses_set_fields_28_48_0dff1c  0x8c0dff1c
 * area name: sits between input functions (same compilation unit); behaviour name: its main named callee is
 * set_fields_28_48
 */
u32 input_uses_set_fields_28_48_0dff1c(int *a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;

    uVar2 = a1;
    game_list_0daf80(a0, a1, a2, a3);
    set_fields_28_48((int)a0 + 0x13b24);
    set_fields_10_14_0d98e4((int)a0 + 0x22704);
    game_vec_0d6954((int)a0 + 0xa68, uVar2, a2, a3);
    rotate_degrees_7c_on_field_9e8(a0);
    *(u32 *)(0x1020 + (int)a0) = 0;
    Vec3_uses_set_vec_0e3f24(a0);
    uVar2 = a1;
    se_play_bubble_or_ike((int)a0 + 0x10ac, a1, a2, a3);
    if ((a1 & 0xff) < 2) {
        uVar1 = (**(code **)(0x1c0 + *a0))(a0, uVar2, a2, a3);
    } else {
        uVar1 = (**(code **)(*a0 + 0x74))(a0, uVar2, a2, a3);
    }
    return uVar1;
}

/*
 * noop_0dffe8  0x8c0dffe8
 * only calls noop_0d09f4, which does nothing
 */
u32 noop_0dffe8(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    u32 uVar1;

    uVar1 = noop_0d09f4(a0 + 0x13b70, r5, r6, r7, a0);
    return uVar1;
}
