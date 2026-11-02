/* Seaman (USA) region 0x8c0c0000-0x8c0d0000 (Ghidra decompiler, cleaned up by tools/readable.py) */

#include "seaman.h"
#include "globals.h"

/*
 * game_sub_0c0148  0x8c0c0148
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c0368
 */
int game_sub_0c0148(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        free_if_nonnull_wrap_10270c(a0 + 0x28, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c0188  0x8c0c0188
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c0368
 */
int game_sub_0c0188(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        game_sub_0c02a0(a0 + 0x4c, 0xffffffff);
        ar5_00 = 0xffffffff;
        game_sub_0c01d8(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c01d8  0x8c0c01d8
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c0188
 */
int game_sub_0c01d8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        game_sub_0c0224(a0 + 0x14, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        game_sub_0c0224(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c0224  0x8c0c0224
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c01d8, game_sub_0c02e8
 */
int game_sub_0c0224(int a0, u32 a1, u32 a2, u32 a3) {
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
 * free_if_nonnull_wrap_0c0264  0x8c0c0264
 * called by: Class_12bb08_sub_0da170, Class_12c1f0_m0_0f4108, game_sub_0c0224, game_sub_0c4ad0
 */
u32 *free_if_nonnull_wrap_0c0264(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff0;

    if (a0 != NULL) {
        a0[1] = 0;
        *a0 = 0;
        if (0 < (short)a1) {
            free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff0 >> 0x10), (short)a1));
        }
    }
    return a0;
}

/*
 * game_sub_0c02a0  0x8c0c02a0
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c0188
 */
int game_sub_0c02a0(int a0, u32 a1) {
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar7_00 = 0x19;
        ar6_00 = 0x18;
        vec_delete_array(a0, game_sub_0c02e8, 0x18, 0x19);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c02e8  0x8c0c02e8
 * area name: game code; nothing names its area yet
 */
int game_sub_0c02e8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        game_sub_0c0224(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c0328  0x8c0c0328
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c0368
 */
int game_sub_0c0328(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        dtor_delete_with_ac(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c0368  0x8c0c0368
 * area name: game code; nothing names its area yet
 */
int game_sub_0c0368(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        game_sub_0c0148(a0 + 0x2e710, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x2e64c, 0xffffffff, a2, a3);
        game_sub_0c0188(a0 + 0x2e3a8, 0xffffffff, a2, a3);
        game_sub_0ffc1c(a0 + 0x2de08, 0xffffffff, a2, a3);
        game_sub_0c0328(a0 + 0x2d59c, 0xffffffff, a2, a3);
        Class_12b334_dtor(a0 + 0x2d578, 0xffffffff, a2, a3);
        Class_12b388_dtor(a0 + 0x17c, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Class_12b350_dtor(a0 + 0xc, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c0444  0x8c0c0444
 * name hint from a string it uses: Tmcpack idx; area name: game code; nothing names its area yet
 * called by: game_init
 * strings: "Tmcpack.dat"; "adxpack.afs"; "SeamanSound.mlt"; "SeamanSound.mlt" ...
 */
u32 game_sub_0c0444(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    char *ar5_00;
    u32 uVar2;
    char *ar6_00;
    u8 *ar6_01;
    char *ar7_00;
    u32 ar7_01;
    int iVar3;
    u32 in_fr1;
    u32 uVar4;
    char cVar5;

    cVar5 = '\0';
    ninja_sub_258fd8(game_sub_0b6bf4);
    *(u32 *)(a0 + 0x2d59c) = 0;
    game_sub_0b7ad0(a0 + 0x2d59c, a1, a2, a3);
    input_sub_01f608(0x8c3eb334, a1, a2, a3);
    ar7_00 = "Tmcpack.dat";
    ar6_00 = "adxpack.afs";
    ar5_00 = "SeamanSound.mlt";
    pack_open(0x8c2b59d0, "SeamanSound.mlt", "adxpack.afs", "Tmcpack.dat", "Tmcpack.idx");
    game_sub_0f7ff0(0x8c35468c, ar5_00, ar6_00, ar7_00);
    game_sub_01e5b4(0x8c3dd7dc, 0, ar6_00, ar7_00);
    CSysMessage_LoadMessage(&g_8c2b5628, 0x8c3eb334);
    game_sub_0ffd7c(*(u32 *)(a0 + 0x2dd68), 0x8c3dd7dc);
    uVar2 = 0x8c3eb334;
    game_sub_0ffcb4(*(u32 *)(a0 + 0x2dd68), 0x8c3eb334);
    uVar1 = 0x8c3eb334;
    game_sub_024968(0x8c3eb334);
    game_sub_0ae2fc(uVar1, uVar2, ar6_00, ar7_00);
    Class_12a990_sub_09d47c();
    game_sub_09e5c0(uVar1, uVar2, ar6_00, ar7_00);
    CHigyoEgg_sub_08869c();
    game_sub_085f4c();
    CFrogManEgg_sub_038ecc();
    game_sub_0372a0();
    CMothEgg_sub_09b008();
    game_sub_08bf2c();
    Vec3_sub_0a4af0();
    game_sub_06cb08();
    CSpiderEgg_sub_0a58f4();
    if (cVar5 == '\0') {
        g_8c43656c = 0;
        uVar1 = in_fr1;
    } else {
        uVar1 = 0x43f00000;
        g_8c43656c = in_fr1;
    }
    g_8c436570 = 0x43f00000;
    if (cVar5 == '\0') {
        g_8c436578 = 0;
        uVar2 = uVar1;
    } else {
        uVar2 = 0x44200000;
        g_8c436578 = uVar1;
    }
    g_8c43657c = 0x44200000;
    if (cVar5 == '\0') {
        g_8c436580 = 0;
        uVar1 = uVar2;
    } else {
        uVar1 = 0x43f00000;
        g_8c436580 = uVar2;
    }
    g_8c436588 = 0x43f00000;
    g_8c436584 = 0x44200000;
    g_8c436590 = 0xff000000;
    g_8c43658c = 0xff000000;
    g_8c436598 = 0xff000000;
    g_8c436594 = 0xff000000;
    ar7_01 = 4;
    ar6_01 = &g_8c43658c;
    g_8c436574 = g_8c436578;
    set_fields_0_4_c(0x8c431294, &g_8c43656c, &g_8c43658c, 4);
    uVar2 = 0x20;
    set_field_10(0x8c431294, 0x20);
    if (cVar5 == '\0') {
        g_8c43659c = 0;
        uVar4 = uVar1;
    } else {
        uVar4 = 0x43f00000;
        g_8c43659c = uVar1;
    }
    g_8c4365a0 = 0x43f00000;
    if (cVar5 == '\0') {
        g_8c4365a8 = 0;
        g_8c4365b0 = uVar4;
    } else {
        g_8c4365b0 = 0x44200000;
        g_8c4365a8 = uVar4;
    }
    g_8c4365ac = 0x44200000;
    if (cVar5 == '\0') {
        g_8c4365b0 = 0;
    }
    g_8c4365b8 = 0x43f00000;
    g_8c4365b4 = 0x44200000;
    g_8c4365c8 = 0x90000000;
    g_8c4365c4 = 0x90000000;
    g_8c4365c0 = 0x90000000;
    g_8c4365bc = 0x90000000;
    g_8c4365a4 = g_8c4365a8;
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        *(u32 *)(iVar3 * 4 + 0x8c43654c) = 0xffffffff;
    }
    g_8c43655c = 0;
    g_8c43655e = 0xff;
    g_8c436560 = 0;
    g_8c436562 = 0;
    g_8c436564 = 0xff;
    g_8c436566 = 0;
    g_8c436568 = 0xff;
    g_8c43656a = 0xff;
    CEnv_LoadDevicePanelTexture(0x8c3eb334, uVar2, ar6_01, ar7_01);
    g_8c4365cc = 0xffffffff;
    g_8c4365d0 = 0xffffffff;
    g_8c4365d4 = 0xffffffff;
    g_8c4365d8 = 0xffffffff;
    g_8c4365dc = 0;
    g_8c4365de = 0;
    g_8c4365e0 = 0xff;
    g_8c4365e2 = 0;
    g_8c4365e4 = 0xff;
    g_8c4365e6 = 0xff;
    g_8c4365e8 = 0;
    g_8c4365ea = 0xff;
    ta_sub_2218f4(4);
    flags_4c0ed0_set(1, 1);
    flags_4c0ed0_set(2, 0);
    flags_4c0ed0_set(3, 0);
    uVar1 = 0;
    flags_4c0ed0_set(4, 0);
    ta_sub_2140a4(4);
    flags_4c0db0_set(1, 1);
    flags_4c0db0_set(2, 0);
    flags_4c0db0_set(3, 0);
    flags_4c0db0_set(4, 0);
    strcpy(0x8c436280, "NARRATION");
    g_8c4362e0 = 0;
    g_8c4362e8 = 1;
    g_8c436330 = 0;
    g_8c43633c = 0;
    for (iVar3 = 0; iVar3 < 0xf; iVar3 = iVar3 + 1) {
        *(u32 *)(iVar3 * 0xc + a0 + 0x2e658) = 0;
    }
    uVar2 = 0xf;
    uVar1 = 0x8c4312a8;
    ptr_list_build_1c(a0 + 0x2e708, a0 + 0x2e654, 0x8c4312a8, 0xf);
    (**(code **)(*(int *)(a0 + 0x2e64c) + 8))((int *)(a0 + 0x2e64c), a0 + 0x2e708, uVar1, uVar2);
    uVar1 = CGame_Init(a0 + 0x17c, 0x8c3eb334);
    return uVar1;
}

/*
 * game_poll_exit  0x8c0c08ac
 * called by: main
 */
u32 game_poll_exit(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;

    uVar1 = input_poll_device_state(0x8c3dd7dc, a1, a2, a3);
    *(u32 *)(0x2d620 + a0) = uVar1;
    iVar2 = game_sub_01f794(0x8c3eb334, a1, a2, a3);
    pack_close_and_flush(0x8c2b59d0, a1, a2, a3);
    game_sub_0f816c(0x8c35468c, a1, a2, a3);
    game_sub_0c2c0c(0x8c2b5628, a1, a2, a3);
    pure_virtual_stub(a0, a0 + 0x2d59c, a2, a3);
    *(int *)(0x2d59c + a0) = *(int *)(0x2d59c + a0) + 1;
    *(u32 *)(0x2d624 + a0) = *(u32 *)(0x2d620 + a0);
    g_8c431a50 = 0;
    if ((iVar2 == 1) || (*(int *)(0x2dd78 + a0) == 4)) {
        uVar1 = 0xffffffff;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

/*
 * game_sub_0c09a4  0x8c0c09a4
 * area name: game code; nothing names its area yet
 * called by: game_shutdown_a, game_sub_0b6c10
 */
u32 game_sub_0c09a4(u32 a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    u32 ar4_00;

    ar4_00 = identity(0x8c3dd7dc, unused_a1, unused_a2, a3);
    game_sub_01ab2c(ar4_00, unused_a1, unused_a2, a3);
    return 1;
}

/*
 * CSeamanDomain_Init  0x8c0c09d0
 * strings: "BeforeStartMessage.pvm"; "GRAPHICS\\MESSAGE"; "Failed to load sys message pvm.."; "CSeamanDomain::Init" ...
 */
u32 CSeamanDomain_Init(int a0, int *a1, u32 unused_a2, code *a3) {
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;
    code *pcVar7;
    u8 *puVar8;
    u32 ar6_00;
    u8 *ar6_02;
    char cVar9;
    u8 auStack_28[16];

    cVar9 = '\0';
    pcVar7 = (code *)(int)g_8c4367c0;
    if (g_8c4367c0 == '\0') {
        g_8c4367bc = 0;
        g_8c4367c0 = '\x01';
    }
    if (g_8c4367c8 == '\0') {
        g_8c4367c4 = 0;
        g_8c4367c8 = '\x01';
    }
    iVar6 = a1[0x21];
    uVar1 = identity(0x8c3dd7dc, pcVar7, unused_a2, a3);
    if (g_8c4367e0 == '\0') {
        uVar2 = clear_5_words(0x8c4367e4, clear_5_words, unused_a2, a3);
        unused_a2 = 0x8c4367d4;
        pcVar7 = free_if_nonnull_wrap_0151a0;
        global_list_push(uVar2, free_if_nonnull_wrap_0151a0, 0x8c4367d4, a3);
        g_8c4367e0 = '\x01';
    }
    if (g_8c436824 == '\0') {
        if (cVar9 == '\0') {
            g_8c436820 = CONCAT44(g_8c436824, 0x42dc0000);
        } else {
            g_8c436820 = 0xa842dc0000;
        }
        g_8c436820 = CONCAT14(1, g_8c436820);
    }
    if (g_8c436834 == '\0') {
        uVar2 = CSeamanDomain_sub_0c1d1c(&g_8c436838);
        global_list_push(uVar2, free_if_nonnull_wrap_0c1cec, 0x8c436828, a3);
        g_8c436834 = '\x01';
    }
    puVar8 = &g_8c2b5628;
    g_8c2b5628 = a1[0x22];
    iVar3 = game_sub_0ffff4(a1[499], g_8c2b5628, &g_8c2b5628, a3);
    if (iVar3 == 1) {
        a1[0x1f7] = 4;
        g_8c4367bc = 0x11;
    }
    if ((g_8c4367bc < 0x1d) && (-1 < g_8c4367bc)) {
        iVar3 = g_8c4367bc * 4;
        switch (g_8c4367bc) {
        case 0:
            uVar1 = get_field_4_0253e4(a0 + 0x2e64c, 0x2e64c, puVar8, a3);
            iVar6 = retry_until_done_020f90(0x8c3eb334, "BeforeStartMessage.pvm", "GRAPHICS\\MESSAGE", uVar1);
            if (iVar6 == 0) {
                report_error_message("Failed to load sys message pvm..", "CSeamanDomain::Init", 1, 2);
            }
            uVar2 = 4;
            uVar1 = 0x8c43654c;
            set_fields_0_4_c(0x8c4367e4, &g_8c13bf24, 0x8c43654c, 4);
            Class_129808_set_model(0x8c4367e4, &g_8c43655c, uVar1);
            set_field_10(0x8c4367e4, 0x80000060);
            a3 = NULL;
            CSeamanDomain_sub_0c1d98(a0, a1, 0x8c3dd7dc, 0, 0x8c4367f8);
            g_8c4367bc = 1;
            break;
        case 1:
            iVar6 = CSeamanDomain_sub_0c2068(a0, 0xe, a1, a3);
            if (iVar6 == 4) {
                set_2_words(&g_8c436838, 0, 0);
                g_8c4367bc = 2;
            }
            break;
        case 2:
            iVar6 = CSeamanDomain_sub_0c2068(a0, 0xd, a1, a3);
            if (iVar6 == 4) {
                g_8c4367c4 = g_8c4367bc;
                g_8c4367bc = 0x12;
            }
            break;
        case 4:
            ar6_00 = 0;
            uVar2 = 1;
            puVar8 = &g_8c436838;
            set_2_words(&g_8c436838, 1, 0);
            uVar4 = game_sub_0b76d8(puVar8, uVar2, ar6_00, a3);
            if (((uVar4 & 8) == 8) || ((uVar4 & 0x10) == 0x10)) {
                g_8c4367bc = 5;
            } else if ((uVar4 & 4) == 4) {
                CSeamanDomain_sub_01bc2c(uVar1, "SM2000US._VM", 0x8c43680c, a3);
                g_8c4367bc = 0x1a;
            } else {
                if (uVar4 == 0) {
                    iVar6 = save_files_check("SM2000US.USR", 0x8c431a68, 0x4208);
                    if (iVar6 != 0) {
                        g_8c4367bc = 0xd;
                        break;
                    }
                    g_8c4367bc = 6;
                }
                if (((uVar4 & 1) == 1) || ((uVar4 & 2) == 2)) {
                    g_8c4367c4 = g_8c4367bc;
                    g_8c4367bc = 0x13;
                }
            }
            break;
        case 5:
            set_field_0_to_1(a0 + 0x2e710);
            set_field_8_0c1ce4(a0 + 0x2e710, 10, puVar8);
            set_field_c_0c1cdc(a0 + 0x2e710, 0);
            *(u32 *)(a0 + 0x2e75c) = 1;
            strcpy(0x8c4367f8, "SEAMANDC._VM");
            uVar1 = 0;
            set_2_words(&g_8c436838, 1, 0);
            iVar6 = CSeamanDomain_sub_0bf588(a0 + 0x2e710, a1[499], uVar1, a3);
            if (iVar6 == 0) {
                g_8c4367c4 = g_8c4367bc;
                g_8c4367bc = 0x12;
            } else if (iVar6 == 1) {
                a1[0x1f7] = 4;
                g_8c4367bc = 0x11;
            }
            break;
        case 6:
            iVar6 = CSeamanDomain_sub_0c1cb4(a1[499]);
            if (iVar6 == 1) {
                set_field_0_to_1(a0 + 0x2e710);
                uVar1 = 0x2e710;
                set_field_8_0c1ce4(a0 + 0x2e710, 3, 0x2e710);
                set_field_c_0c1cdc(a0 + 0x2e710, 0);
                *(u32 *)(a0 + 0x2e75c) = 1;
                g_8c4367bc = 7;
            } else {
                g_8c4367bc = 0xd;
            }
            break;
        case 7:
            strcpy(a0 + 0x2e740, "MAKEDATA");
            strcpy(0x8c4367f8, "SM2000US._VM");
            uVar1 = 1;
            set_2_words(&g_8c436838, 0, 1);
            a3 = (code *)CSeamanDomain_sub_0bf588(a0 + 0x2e710, a1[499], uVar1, a3);
            if (a3 == NULL) {
                g_8c4367c4 = g_8c4367bc;
                g_8c4367bc = 0x12;
            } else if (a3 == (code *)0x1) {
                g_8c4367bc = 0xd;
            }
            break;
        case 8:
            set_field_0_to_1(a0 + 0x2e710);
            pcVar7 = set_field_8_0c1ce4;
            set_field_8_0c1ce4(a0 + 0x2e710, 2, set_field_8_0c1ce4);
            set_field_c_0c1cdc(a0 + 0x2e710, 0);
            *(u32 *)(a0 + 0x2e75c) = 1;
            g_8c4367bc = 9;
            break;
        case 9:
            a3 = (code *)0xa5e;
            strcpy(a0 + 0x2e740, "NEWDATA");
            strcpy(0x8c4367f8, "SM2000US._VM");
            uVar1 = 1;
            set_2_words(&g_8c436838, 1, 1);
            iVar6 = CSeamanDomain_sub_0bf588(a0 + 0x2e710, a1[499], uVar1, a3);
            if (iVar6 == 0) {
                g_8c4367c4 = g_8c4367bc;
                g_8c4367bc = 0x12;
            } else if (iVar6 == 1) {
                a1[0x1f7] = 4;
                g_8c4367bc = 0x11;
            }
            break;
        case 10:
            iVar6 = CSeamanDomain_sub_0c2324(a0, a1, puVar8, a3);
            if (iVar6 == 4) {
                g_8c4367bc = 0xb;
            }
            break;
        case 0xb:
            set_field_8_0c1ce4(a0 + 0x2e710, 4, 0x2e710);
            *(u32 *)(a0 + 0x2e75c) = 1;
            uVar1 = 1;
            set_2_words(&g_8c436838, 1, 0);
            pcVar7 = speech_is_playing;
            iVar6 = speech_is_playing(0x8c35468c, uVar1);
            if (iVar6 == 1) {
                speech_stop(0x8c35468c, 1, pcVar7, a3);
            }
            a3 = (code *)0x2;
            iVar6 = CSeamanDomain_sub_0c1d98(a0, a1, 0x8c3dd7dc, 2, 0x8c4367f8);
            if (iVar6 == 0) {
                set_field_8_0c1ce4(a0 + 0x2e710, 5, 0x2e710);
                set_field_c_0c1cdc(a0 + 0x2e710, 1);
                *(u32 *)(a0 + 0x2e75c) = 1;
                g_8c4367bc = 0xc;
            } else if (iVar6 == 1) {
                g_8c4367c4 = g_8c4367bc;
                g_8c4367bc = 0x12;
            }
            break;
        case 0xc:
            iVar6 = CSeamanDomain_sub_0bf780(a1[499], iVar3, puVar8, a3);
            if (iVar6 == 1) {
                a3 = set_2_words;
                set_2_words(&g_8c436838, 0, 0);
                g_8c4367c4 = g_8c4367bc;
                g_8c4367bc = 0x12;
            }
            break;
        case 0xd:
            iVar6 = save_files_check("SM2000US.USR", 0x8c431a68, 0x4208);
            if ((iVar6 == 0) && (iVar6 = save_files_check("SM2000US.INC", 0x8c435c7c, 0x600), iVar6 == 0)) {
                g_8c4367bc = 0xf;
            } else {
                g_8c4367bc = 0xe;
            }
            break;
        case 0xe:
            uVar2 = 0;
            uVar1 = 1;
            set_2_words(&g_8c436838, 1, 0);
            if ((iVar6 == 0) || (iVar6 == 4)) {
                set_field_0_to_1(a0 + 0x2e710);
                set_field_8_0c1ce4(a0 + 0x2e710, 7, uVar2);
                set_field_c_0c1cdc(a0 + 0x2e710, 0);
                *(u32 *)(a0 + 0x2e75c) = 1;
                g_8c4367bc = 0x18;
            } else {
                g_8c4367c4 = g_8c4367bc;
                g_8c4367bc = 0x12;
            }
            break;
        case 0xf:
            rtc_get_date_wrap(a1, auStack_28, puVar8, a3);
            iVar6 = CSeamanDomain_sub_1028c0(auStack_28, &g_8c431a7c, puVar8);
            if (iVar6 == 2) {
                g_8c4367bc = 0x1c;
            } else {
                g_8c4367bc = 0x11;
            }
            break;
        case 0x10:
            iVar6 = get_field_0_0c1cac(a0 + 0x2e710);
            if (iVar6 == 0) {
                g_8c4367bc = 0x11;
            }
            break;
        case 0x11:
            iVar6 = speech_is_playing(0x8c35468c, 0x8c35468c);
            if (iVar6 == 1) {
                speech_stop(0x8c35468c, 0x8c35468c, 1, a3);
            }
            g_8c4367bc = 0;
            iVar3 = a0 + 0x2e64c;
            CTexture_ReleaseFromVRAM(iVar3, iVar3, iVar6, a3);
            Class_129808_draw(0x8c431294, iVar3, iVar6, a3);
            g_8c4367bc = 4;
            *(u32 *)(a0 + 0x2dd84) = 1;
            break;
        case 0x12:
            iVar5 = get_field_0_0c1cac(a0 + 0x2e710);
            if (iVar5 == 1) {
                if (cVar9 == '\0') {
                    g_8c436820 = CONCAT44(g_8c436824, 0x42200000);
                } else {
                    g_8c436820 = 0xc716d11542200000;
                }
            } else if (cVar9 == '\0') {
                g_8c436820 = CONCAT44(g_8c436824, 0x42dc0000);
            } else {
                g_8c436820 = 0x8c35468c42dc0000;
            }
            if (((iVar6 != 0) && (iVar6 != 2)) && (iVar5 = speech_is_playing(0x8c35468c, iVar3), iVar5 == 1)) {
                speech_stop(0x8c35468c, iVar3, puVar8, a3);
            }
            if (iVar6 != 2) {
                g_8c4367d0 = iVar6;
            }
            if (g_8c4367d0 == 1) {
                CSeamanDomain_sub_0c38d4(&g_8c2b5628, 1, CSeamanDomain_sub_0c38d4, a3);
                g_8c4367bc = 0x15;
            } else if ((g_8c4367d0 == 3) || (g_8c4367d0 == 5)) {
                CSeamanDomain_sub_0c38d4(&g_8c2b5628, 6, puVar8, a3);
                g_8c4367bc = 0x16;
            } else if (g_8c4367d0 == 4) {
                CSeamanDomain_sub_0c38d4(&g_8c2b5628, 4, puVar8, a3);
                g_8c4367bc = 0x17;
            } else if ((g_8c4367d0 == 0) && (iVar6 == 0)) {
                g_8c4367bc = 0x14;
            }
            break;
        case 0x13:
            if ((g_8c436838 == 1) &&
                (iVar6 = CSeamanDomain_sub_01b9e4(uVar1, &g_8c436838, puVar8, a3), iVar6 < 0x8000)) {
                g_8c4367bc = 0x1b;
            } else {
                g_8c4367bc = CSeamanDomain_sub_0c236c(a0, g_8c4367c4);
                a3 = (code *)&g_8c4367bc;
            }
            break;
        case 0x14:
            if ((g_8c43683c == 1) &&
                (iVar6 = CSeamanDomain_sub_01bc2c(uVar1, "SM2000US._VM", 0x8c43680c, a3), iVar6 == 5)) {
                g_8c4367bc = 0x1a;
            } else {
                g_8c4367bc = 0x13;
            }
            break;
        case 0x15:
            a3 = (code *)&g_8c13c025;
            CSeamanDomain_sub_0c3530(&g_8c2b5628, 1, 0, &g_8c13c025);
            *(u32 *)(a0 + 0x2e75c) = 1;
            if ((iVar6 != 1) && (iVar6 != 2)) {
                a3 = (code *)0x12;
                g_8c4367bc = 0x12;
            }
            break;
        case 0x16:
            uVar1 = get_field_a524_01f514(0x8c3dd7dc, iVar3, 0x8c3dd7dc);
            a3 = (code *)&g_8c13c025;
            CSeamanDomain_sub_0c3530(&g_8c2b5628, 6, uVar1, &g_8c13c025);
            *(u32 *)(a0 + 0x2e75c) = 1;
            if (((iVar6 != 3) && (iVar6 != 5)) && (iVar6 != 2)) {
                g_8c4367bc = 0x12;
            }
            break;
        case 0x17:
            uVar1 = get_field_a524_01f514(0x8c3dd7dc, iVar3, puVar8);
            a3 = (code *)&g_8c13c025;
            CSeamanDomain_sub_0c3530(&g_8c2b5628, 4, uVar1, &g_8c13c025);
            *(u32 *)(a0 + 0x2e75c) = 1;
            if ((iVar6 != 4) && (iVar6 != 2)) {
                g_8c4367bc = 0x12;
            }
            break;
        case 0x18:
            strcpy(a0 + 0x2e740, "DESTRUCTION");
            set_2_words(&g_8c436838, 1, 0);
            iVar6 = CSeamanDomain_sub_0bf588(a0 + 0x2e710, a1[499], a1[499], a3);
            if (iVar6 == 0) {
                g_8c4367c4 = g_8c4367bc;
                g_8c4367bc = 0x12;
            } else if (iVar6 == 1) {
                a1[0x1f7] = 4;
                g_8c4367bc = 0x11;
            }
            break;
        case 0x19:
            if (3 < (u32)(*a1 - g_8c4367cc)) {
                g_8c4367bc = 0x12;
            }
            break;
        case 0x1a:
            a3 = (code *)0x8c43680c;
            uVar2 = 0x8c43680c;
            pcVar7 = strcpy;
            strcpy(0x8c4367f8, 0x8c43680c);
            set_field_0_to_1(a0 + 0x2e710);
            set_field_8_0c1ce4(a0 + 0x2e710, 9, pcVar7);
            pcVar7 = set_field_c_0c1cdc;
            set_field_c_0c1cdc(a0 + 0x2e710, 0);
            uVar2 = 0x8c43680c;
            CSeamanDomain_sub_0bf7d0(a0 + 0x2e710, 0x8c43680c, pcVar7, a3);
            *(u32 *)(a0 + 0x2e75c) = 1;
            if ((iVar6 == 0) || (iVar6 == 4)) {
                iVar6 = CSeamanDomain_sub_01b9e4(uVar1, uVar2, pcVar7, a3);
                iVar3 = CSeamanDomain_sub_01b920(uVar1, 0x8c4367f8, pcVar7, a3);
                if (iVar6 + iVar3 < 0x8000) {
                    g_8c4367bc = 0x1b;
                    break;
                }
            }
            iVar6 = CSeamanDomain_sub_0bf588(a0 + 0x2e710, a1[499], pcVar7, a3);
            if (iVar6 == 0) {
                set_2_words(&g_8c436838, 0, 0);
                g_8c4367c4 = g_8c4367bc;
                g_8c4367bc = 0x12;
            } else if (iVar6 == 1) {
                a1[0x1f7] = 4;
                g_8c4367bc = 0x11;
            }
            break;
        case 0x1b:
            a3 = (code *)0x6;
            g_8c4367bc = CSeamanDomain_sub_0c23fc(a0, a1, g_8c4367bc, 6, 1, "NOSPACE");
            if (g_8c4367bc == 0x11) {
                a1[0x1f7] = 4;
            }
            break;
        case 0x1c:
            a3 = (code *)0x8;
            g_8c4367bc = CSeamanDomain_sub_0c23fc(a0, a1, g_8c4367bc, 8, 1, "MADTIME");
            if (g_8c4367bc == 0x11) {
                a1[0x1f7] = 4;
            }
        }
    }
    iVar3 = a0 + 0x2e740;
    ar6_02 = &g_8c13bf44;
    iVar6 = strcmp_0b6e04(&g_8c13bf44, iVar3);
    if (iVar6 != 0) {
        iVar6 = speech_is_playing(0x8c35468c, iVar3);
        if (iVar6 == 1) {
            speech_stop(0x8c35468c, speech_stop, ar6_02, a3);
        }
        strcpy(&g_8c13bf44, a0 + 0x2e740);
        strcpy(0x8c4362a0, "WARNING");
        strcpy(0x8c4362c0, a0 + 0x2e740);
        ar6_02 = (u8 *)0x8c436280;
        iVar3 = 6;
        g_8c43627c = speech_request(0x8c35468c, 6, 0x8c436280, a3);
    }
    CSeamanDomain_sub_0bf4a4(a0 + 0x2e710);
    CSeamanDomain_sub_0bf550(a0 + 0x2e710, a0 + 0x2e64c, ar6_02, a3);
    if (*(int *)(a0 + 0x2e75c) == 1) {
        obj_set_texlist(a0 + 0x2e64c, a0 + 0x2e64c, ar6_02);
        uVar1 = 0;
        obj_set_texture_num(a0 + 0x2e64c, 0);
        Class_129808_draw(0x8c4367e4, uVar1, ar6_02, a3);
    }
    return 1;
}

/*
 * get_field_0_0c1cac  0x8c0c1cac
 * called by: CSeamanDomain_Init
 */
u32 get_field_0_0c1cac(u32 *a0) {
    return *a0;
}

/*
 * CSeamanDomain_sub_0c1cb4  0x8c0c1cb4
 * area name: only called from CSeamanDomain methods
 * called by: CSeamanDomain_Init
 */
u32 CSeamanDomain_sub_0c1cb4(int a0) {
    u32 uVar1;

    uVar1 = input_sub_01ee54(*(u32 *)(0xcc + a0));
    return uVar1;
}

/*
 * set_field_c_0c1cdc  0x8c0c1cdc
 * called by: CSeamanDomain_Init, CSeamanDomain_sub_0c23fc
 */
u32 set_field_c_0c1cdc(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0xc) = a1;
    return in_r0;
}

/*
 * set_field_8_0c1ce4  0x8c0c1ce4
 * called by: CSeamanDomain_Init, CSeamanDomain_sub_0c23fc
 */
u32 set_field_8_0c1ce4(int a0, u32 a1, u32 a2) {
    u32 in_r0;

    *(u32 *)(a0 + 8) = a1;
    return in_r0;
}

/*
 * free_if_nonnull_wrap_0c1cec  0x8c0c1cec
 */
int free_if_nonnull_wrap_0c1cec(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * CSeamanDomain_sub_0c1d1c  0x8c0c1d1c
 * area name: only called from CSeamanDomain methods
 * called by: CSeamanDomain_Init
 */
u32 CSeamanDomain_sub_0c1d1c(u32 a0) {
    u32 uVar1;

    uVar1 = set_2_words_wrap(a0, 0, 0);
    return uVar1;
}

/*
 * game_sub_0c1d40  0x8c0c1d40
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c1d40(u32 unused_a0, int a1) {
    pure_virtual_stub();
    g_8c2b5628 = *(u32 *)(0x88 + a1);
    return 1;
}

/*
 * CSeamanDomain_sub_0c1d98  0x8c0c1d98
 * name hint from a string it uses: SEAMAN; area name: only called from CSeamanDomain methods
 * called by: CSeamanDomain_Init
 * strings: "SM2000US.USR"; "SM2000US.USR"; "Seaman User Data"; "SEAMAN" ...
 */
u32 CSeamanDomain_sub_0c1d98(int a0, int a1, u32 a2, int a3, u32 s0) {
    int iVar1;
    u32 ar4_00;
    int iVar2;
    u32 uVar3;

    uVar3 = 2;
    if (g_8c436844 == '\0') {
        g_8c436840 = 0;
        g_8c436844 = '\x01';
    }
    if (a3 == 0) {
        g_8c436840 = 0;
        g_8c436846 = 0;
        uVar3 = 0;
    } else if (a3 == 1) {
        iVar2 = a1;
        iVar1 = game_sub_0bf708(*(u32 *)(0x7cc + a1), a1, a2, 1);
        if ((iVar1 == 1) && (g_8c436840 == 1)) {
            g_8c436840 = 0;
        } else {
            iVar1 = game_sub_0bf690(*(u32 *)(0x7cc + a1), iVar2, a2, a3);
            if ((iVar1 == 1) && (g_8c436840 == 0)) {
                g_8c436840 = 1;
            }
        }
        iVar1 = game_sub_0bf618(*(u32 *)(0x7cc + a1), iVar2, a2, a3);
        if (iVar1 == 1) {
            if (g_8c436840 == 0) {
                uVar3 = 1;
                Class_129808_draw(0x8c431294, iVar2, a2, a3);
            } else {
                uVar3 = 0;
            }
        }
    } else if (a3 == 2) {
        g_8c436846 = g_8c436846 + 1;
        if (g_8c436846 == 10) {
            ar4_00 = identity(0x8c3dd7dc, a1, a2, 2);
            game_sub_01bb00(ar4_00, "SM2000US.USR", a2, a3);
            game_sub_01bb00(ar4_00, s0, a2, a3);
        } else if (0x14 < g_8c436846) {
            uVar3 = 0x8c431a68;
            game_sub_0c67f4(a0 + 0x17c, a1, 0x8c431a68, 2);
            game_sub_0c6a4c(a0 + 0x17c, 0x8c435c7c, uVar3, a3);
            iVar2 = (*(code *)(&game_sub_0b726c))("SM2000US.USR", 0x8c431a68, 0x4208, "Seaman User Data", "SEAMAN", 0);
            if (((iVar2 == 0) &&
                 (iVar2 = (*(code *)(&game_sub_0b726c))("SM2000US._VM", 0, 0, "Seaman Storage Matrix", "SEAMAN SM", 0),
                  iVar2 == 0)) &&
                (iVar2 = (*(code *)(&game_sub_0b726c))("SM2000US.INC", 0x8c435c7c, 0x600, "Seaman Storage Matrix",
                                                       "SEAMAN SM", 0),
                 iVar2 == 0)) {
                uVar3 = 0;
                g_8c436846 = 0;
            } else {
                uVar3 = 1;
                g_8c436846 = 0;
            }
        }
    } else if (a3 == 3) {
        iVar2 = CSeamanDomain_sub_0bf780(*(u32 *)(0x7cc + a1), a1, a2, 3);
        if (iVar2 == 1) {
            uVar3 = 0;
        }
    } else {
        uVar3 = 2;
    }
    return uVar3;
}

/*
 * vcall_field_c_slot3  0x8c0c2000
 * calls virtual slot 3 of the object at +0xc
 */
u32 vcall_field_c_slot3(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 0xc) + 0xc))((int *)(a0 + 0xc), a1, a2, a3);
    return uVar1;
}

/*
 * game_sub_0c2020  0x8c0c2020
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c2020(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 0x17c) + 0xc))((int *)(a0 + 0x17c), a1, a2, a3);
    return uVar1;
}

/*
 * game_sub_0c2044  0x8c0c2044
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c2044(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    uVar1 = (**(code **)(*(int *)(a0 + 0x2d578) + 0xc))((int *)(a0 + 0x2d578), a1, a2, a3);
    return uVar1;
}

/*
 * CSeamanDomain_sub_0c2068  0x8c0c2068
 * area name: only called from CSeamanDomain methods
 * called by: CSeamanDomain_Init
 */
u32 CSeamanDomain_sub_0c2068(int a0, int a1, int *a2, u32 a3) {
    int ar5_00;
    u32 ar5_01;
    int *ar6_00;
    u32 *ar6_01;
    u32 ar7_00;
    u32 uVar1;
    int iVar2;
    int iVar3;
    u8 auStack_6c[20];
    u32 uStack_58;
    u32 uStack_38;

    if (g_8c436854 == '\0') {
        g_8c436850 = 0;
        g_8c436854 = '\x01';
    }
    if (g_8c43685c == '\0') {
        g_8c436858 = 0;
        g_8c43685c = '\x01';
    }
    uVar1 = 2;
    uStack_38 = g_8c13bf70;
    uStack_58 = g_8c13bf90;
    ar5_00 = a1;
    ar6_00 = a2;
    clear_5_words(auStack_6c, a1, a2, a3);
    if ((g_8c436850 < 5) && (-1 < g_8c436850)) {
        switch (g_8c436850) {
        case 0:
            g_8c436860 = 0;
            g_8c436862 = 0xff;
            g_8c436864 = 0;
            g_8c436866 = 0;
            g_8c436868 = 0xff;
            g_8c43686a = 0;
            g_8c43686c = 0xff;
            g_8c43686e = 0xff;
            for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                (&g_8c13bf60)[iVar2] = 0xff000000;
            }
            g_8c436850 = 1;
            break;
        case 1:
            for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                (&g_8c13bf60)[iVar2] = (&g_8c13bf60)[iVar2] + 0x111111;
            }
            if (g_8c13bf60 == -1) {
                g_8c436858 = *a2;
                g_8c436850 = 2;
            }
            break;
        case 2:
            if (0x3c < (u32)(*a2 - g_8c436858)) {
                g_8c436850 = 3;
            }
            break;
        case 3:
            iVar2 = 0;
            while (iVar3 = iVar2, iVar3 < 4) {
                (&g_8c13bf60)[iVar3] = (&g_8c13bf60)[iVar3] + -0x111111;
                iVar2 = iVar3 + 1;
            }
            if (g_8c13bf60 == -0x1000000) {
                g_8c436858 = *a2;
                g_8c436850 = 4;
            }
            break;
        case 4:
            if (10 < (u32)(*a2 - g_8c436858)) {
                g_8c436858 = 0;
                g_8c436850 = 0;
                uVar1 = 4;
            }
        }
    }
    obj_set_texlist(a0 + 0x2e64c, ar5_00, ar6_00);
    obj_set_texture_num(a0 + 0x2e64c, a1);
    if (a1 == 0xe) {
        ar7_00 = 4;
        ar6_01 = &g_8c13bf60;
        set_fields_0_4_c(auStack_6c, &uStack_38, &g_8c13bf60, 4);
    } else {
        ar7_00 = 4;
        ar6_01 = &g_8c13bf60;
        set_fields_0_4_c(auStack_6c, &uStack_58, &g_8c13bf60, 4);
    }
    Class_129808_set_model(auStack_6c, &g_8c436860, ar6_01);
    ar5_01 = 0x80000020;
    set_field_10(auStack_6c, 0x80000020);
    Class_129808_draw(auStack_6c, ar5_01, ar6_01, ar7_00);
    free_if_nonnull_wrap_0151a0(auStack_6c, 0xffffffff, ar6_01, ar7_00);
    return uVar1;
}

/*
 * CSeamanDomain_sub_0c2324  0x8c0c2324
 * name hint from a string it uses: SEAMANDC USR; area name: only called from CSeamanDomain methods
 * called by: CSeamanDomain_Init
 * strings: "SEAMANDC.USR"; "SEAMANDC._VM"
 */
u32 CSeamanDomain_sub_0c2324(u32 unused_a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar4_00;

    ar4_00 = identity(0x8c3dd7dc, unused_a1, a2, a3);
    game_sub_01bb00(ar4_00, "SEAMANDC.USR", a2, a3);
    game_sub_01bb00(ar4_00, "SEAMANDC._VM", a2, a3);
    return 4;
}

/*
 * CSeamanDomain_sub_0c236c  0x8c0c236c
 * area name: only called from CSeamanDomain methods
 * called by: CSeamanDomain_Init
 */
u32 CSeamanDomain_sub_0c236c(u32 unused_a0, int a1) {
    if (a1 < 0x19) {
        if (a1 < 0x18) {
            if (0xe < a1) {
                return a1;
            }
            if (1 < a1) {
                switch (a1) {
                case 2:
                    return 4;
                default:
                    return a1;
                case 4:
                    return 8;
                case 5:
                    return 10;
                case 7:
                case 9:
                case 0xb:
                    goto switchD_8c0c2396_caseD_3;
                case 0xc:
                    return 0xd;
                }
            }
            return a1;
        }
    } else if (a1 != 0x1a) {
        return a1;
    }
switchD_8c0c2396_caseD_3:
    return 0xb;
}

/*
 * CSeamanDomain_sub_0c23fc  0x8c0c23fc
 * area name: only called from CSeamanDomain methods
 * called by: CSeamanDomain_Init
 */
u32 CSeamanDomain_sub_0c23fc(int a0, int a1, u32 a2, u32 a3, u32 s0, u32 s4) {
    int iVar1;
    u32 ar6_00;
    u32 ar7_00;

    ar6_00 = a2;
    ar7_00 = a3;
    set_field_0_to_1(a0 + 0x2e710);
    set_field_8_0c1ce4(a0 + 0x2e710, a3, ar6_00);
    set_field_c_0c1cdc(a0 + 0x2e710, 1);
    *(u32 *)(a0 + 0x2e75c) = 1;
    strcpy(a0 + 0x2e740, s4);
    iVar1 = CSeamanDomain_sub_0bf780(*(u32 *)(a1 + 0x7cc), s4, ar6_00, ar7_00);
    if (iVar1 == 1) {
        a2 = 0x11;
    }
    return a2;
}

/*
 * game_sub_0c2490  0x8c0c2490
 * name hint from a string it uses: Mess ICON00 pvr; area name: game code; nothing names its area yet
 * called by: game_sub_0c4644
 * strings: "Mess_ICON00.pvr"; "Mess_ICON01.pvr"; "Mess_ICON02.pvr"
 */
int game_sub_0c2490(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u64 *puVar1;
    int iVar2;
    u64 *puVar3;
    double *pdVar4;
    u32 uVar5;
    int iVar6;
    u32 a7;
    int iVar7;
    u32 in_fr1;
    u32 uVar8;
    u32 uVar9;
    u64 uVar10;
    double dVar11;
    u64 uVar12;
    char cVar13;
    char cVar14;

    cVar14 = '\0';
    cVar13 = '\0';
    Class_129920_ctor(a0 + 4, a1);
    clear_5_words(a0 + 0xc, a1, unused_a2, a3);
    clear_5_words(a0 + 0x20, a1, unused_a2, a3);
    uVar5 = 0x194;
    Class_129920_ctor(a0 + 0x194, 0x194);
    Class_129920_ctor(a0 + 0x19c, uVar5);
    Class_129920_ctor(a0 + 0x1a4, uVar5);
    clear_5_words(a0 + 0x1ac, uVar5, unused_a2, a3);
    Class_129920_ctor(a0 + 700, uVar5);
    *(u32 *)(a0 + 0x164) = 0xffffffff;
    *(u32 *)(a0 + 0x168) = 0xffffffff;
    *(u32 *)(a0 + 0x16c) = 0xffffffff;
    *(u32 *)(a0 + 0x170) = 0xffffffff;
    *(u16 *)(a0 + 0x174) = 0;
    *(u16 *)(a0 + 0x176) = 0xff;
    *(u16 *)(a0 + 0x178) = 0;
    *(u16 *)(a0 + 0x17a) = 0;
    *(u16 *)(a0 + 0x17c) = 0xff;
    *(u16 *)(a0 + 0x17e) = 0;
    *(u16 *)(a0 + 0x180) = 0xff;
    *(u16 *)(a0 + 0x182) = 0xff;
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x34) = 0;
        *(u32 *)(a0 + 0x38) = 0x438b8000;
    } else {
        *(u64 *)(a0 + 0x34) = (u64)in_fr1;
        in_fr1 = 0x438b8000;
        *(u64 *)(a0 + 0x38) = 0x43a98000438b8000;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x3c) = 0;
    } else {
        *(u64 *)(a0 + 0x3c) = (u64)in_fr1;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x40) = 0;
        *(u32 *)(a0 + 0x44) = 0x43a98000;
    } else {
        *(u64 *)(a0 + 0x40) = (u64)in_fr1;
        in_fr1 = 0x43a98000;
        *(u64 *)(a0 + 0x44) = 0x8c01631843a98000;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x48) = 0;
        *(u32 *)(a0 + 0x4c) = 0x43a98000;
        *(u32 *)(a0 + 0x50) = 0x438b8000;
    } else {
        *(u64 *)(a0 + 0x48) = (u64)in_fr1;
        *(u64 *)(a0 + 0x4c) = 0x8c01631843a98000;
        in_fr1 = 0x438b8000;
        *(u64 *)(a0 + 0x50) = 0x43a98000438b8000;
    }
    uVar5 = 4;
    iVar6 = a0 + 0x164;
    set_fields_0_4_c(a0 + 0xc, 0, iVar6, 4);
    Class_129808_set_model(a0 + 0xc, a0 + 0x174, iVar6);
    set_field_10(a0 + 0xc, 0x80000060);
    for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
        *(u32 *)(a0 + iVar6 * 4 + 0x370) = 0xffffffff;
        *(u32 *)(a0 + iVar6 * 4 + 0x29c) = 0xffffffff;
    }
    *(u16 *)(a0 + 0x2ac) = 0;
    *(u16 *)(a0 + 0x2ae) = 0xff;
    *(u16 *)(a0 + 0x2b0) = 0;
    *(u16 *)(a0 + 0x2b2) = 0;
    *(u16 *)(a0 + 0x2b4) = 0xff;
    *(u16 *)(a0 + 0x2b6) = 0;
    *(u16 *)(a0 + 0x2b8) = 0xff;
    *(u16 *)(a0 + 0x2ba) = 0xff;
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x27c) = 0;
        *(u32 *)(a0 + 0x280) = 0x42800000;
    } else {
        *(u64 *)(a0 + 0x27c) = (u64)in_fr1;
        in_fr1 = 0x42800000;
        *(u64 *)(a0 + 0x280) = 0x28442800000;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x284) = 0;
    } else {
        *(u64 *)(a0 + 0x284) = (u64)in_fr1;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x288) = 0;
        *(u32 *)(a0 + 0x28c) = 0x42800000;
    } else {
        *(u64 *)(a0 + 0x288) = (u64)in_fr1;
        in_fr1 = 0x42800000;
        *(u64 *)(a0 + 0x28c) = 0x28442800000;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x290) = 0;
        *(u32 *)(a0 + 0x294) = 0x42800000;
        uVar10 = CONCAT44(0x42800000, in_fr1);
        *(u32 *)(a0 + 0x298) = 0x42800000;
    } else {
        *(u64 *)(a0 + 0x290) = (u64)in_fr1;
        *(u64 *)(a0 + 0x294) = 0x28442800000;
        uVar10 = 0x28442800000;
        *(u64 *)(a0 + 0x298) = 0x28442800000;
    }
    uVar5 = 4;
    iVar6 = a0 + 0x29c;
    set_fields_0_4_c(a0 + 0x1ac, a0 + 0x27c, iVar6, 4);
    Class_129808_set_model(a0 + 0x1ac, a0 + 0x2ac, iVar6);
    set_field_10(a0 + 0x1ac, 0x80000060);
    set_fields_0_4_8_257196(a0 + 0x240, "Mess_ICON00.pvr", 0, 0);
    *(int *)(a0 + 0x24c) = a0 + 0x240;
    *(u32 *)(a0 + 0x250) = 1;
    set_fields_0_4_8_257196(a0 + 0x254, "Mess_ICON01.pvr", 0, 0);
    *(int *)(a0 + 0x260) = a0 + 0x254;
    *(u32 *)(a0 + 0x264) = 1;
    a7 = 0;
    uVar5 = 0;
    set_fields_0_4_8_257196(a0 + 0x268, "Mess_ICON02.pvr", 0, 0);
    *(int *)(a0 + 0x274) = a0 + 0x268;
    *(u32 *)(a0 + 0x278) = 1;
    (**(code **)(*(int *)(a0 + 0x194) + 8))((int *)(a0 + 0x194), a0 + 0x24c, uVar5, a7);
    (**(code **)(*(int *)(a0 + 0x19c) + 8))((int *)(a0 + 0x19c), a0 + 0x260, uVar5, a7);
    (**(code **)(*(int *)(a0 + 0x1a4) + 8))((int *)(a0 + 0x1a4), a0 + 0x274, uVar5, a7);
    for (iVar6 = 0; uVar9 = (u32)uVar10, iVar6 < 8; iVar6 = iVar6 + 1) {
        if (iVar6 < 4) {
            if (iVar6 < 2) {
                iVar7 = 0;
            } else {
                iVar7 = 0x39;
            }
        } else {
            iVar7 = 100;
        }
        pdVar4 = (double *)(a0 + iVar6 * 0x20 + 0x54);
        iVar2 = iVar6 * 0x11 + iVar7;
        if (cVar13 == '\0') {
            dVar11 = (double)CONCAT44((float)iVar2, uVar9);
        } else {
            dVar11 = (double)iVar2;
        }
        if (cVar14 == '\0') {
            *(int *)pdVar4 = (int)((u64)dVar11 >> 0x20);
        } else {
            *pdVar4 = dVar11;
        }
        puVar3 = (u64 *)(a0 + iVar6 * 0x20 + 0x58);
        if (cVar14 == '\0') {
            uVar8 = SUB84(dVar11, 0);
            *(u32 *)puVar3 = 0x41a00000;
        } else {
            uVar8 = 0x41a00000;
            *puVar3 = 0x8000006041a00000;
        }
        pdVar4 = (double *)(a0 + iVar6 * 0x20 + 0x5c);
        iVar2 = iVar6 * 0x11 + iVar7;
        if (cVar13 == '\0') {
            dVar11 = (double)CONCAT44((float)iVar2, uVar8);
        } else {
            dVar11 = (double)iVar2;
        }
        if (cVar14 == '\0') {
            *(int *)pdVar4 = (int)((u64)dVar11 >> 0x20);
        } else {
            *pdVar4 = dVar11;
        }
        puVar1 = (u64 *)(a0 + iVar6 * 0x20 + 0x60);
        if (cVar14 == '\0') {
            *(u32 *)puVar1 = 0;
        } else {
            *puVar1 = (u64)dVar11 & 0xffffffff;
        }
        pdVar4 = (double *)(a0 + iVar6 * 0x20 + 100);
        iVar2 = iVar6 * 0x11 + 0x10 + iVar7;
        if (cVar13 == '\0') {
            dVar11 = (double)CONCAT44((float)iVar2, SUB84(dVar11, 0));
        } else {
            dVar11 = (double)iVar2;
        }
        if (cVar14 == '\0') {
            *(int *)pdVar4 = (int)((u64)dVar11 >> 0x20);
        } else {
            *pdVar4 = dVar11;
        }
        puVar1 = (u64 *)(a0 + iVar6 * 0x20 + 0x68);
        if (cVar14 == '\0') {
            *(u32 *)puVar1 = 0;
        } else {
            *puVar1 = (u64)dVar11 & 0xffffffff;
        }
        pdVar4 = (double *)(a0 + iVar6 * 0x20 + 0x6c);
        iVar7 = iVar6 * 0x11 + 0x10 + iVar7;
        if (cVar13 == '\0') {
            dVar11 = (double)CONCAT44((float)iVar7, SUB84(dVar11, 0));
        } else {
            dVar11 = (double)iVar7;
        }
        if (cVar14 == '\0') {
            *(int *)pdVar4 = (int)((u64)dVar11 >> 0x20);
        } else {
            *pdVar4 = dVar11;
        }
        puVar3 = (u64 *)(a0 + iVar6 * 0x20 + 0x70);
        if (cVar14 == '\0') {
            uVar10 = CONCAT44(0x41a00000, SUB84(dVar11, 0));
            *(u32 *)puVar3 = 0x41a00000;
        } else {
            uVar10 = 0x8000006041a00000;
            *puVar3 = 0x8000006041a00000;
        }
    }
    set_field_10(a0 + 0x20, 0x80000060);
    for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
        *(u32 *)(a0 + iVar6 * 4 + 0x154) = 0xffffffff;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x2c4) = 0;
        *(u32 *)(a0 + 0x2c8) = 0x43f00000;
    } else {
        *(u64 *)(a0 + 0x2c4) = (u64)uVar9;
        uVar9 = 0x43f00000;
        *(u64 *)(a0 + 0x2c8) = 0x2cc43f00000;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x2cc) = 0;
    } else {
        *(u64 *)(a0 + 0x2cc) = (u64)uVar9;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x2d0) = 0;
        *(u32 *)(a0 + 0x2d4) = 0x44200000;
    } else {
        *(u64 *)(a0 + 0x2d0) = (u64)uVar9;
        uVar9 = 0x44200000;
        *(u64 *)(a0 + 0x2d4) = 0x2d844200000;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x2d8) = 0;
        *(u32 *)(a0 + 0x2dc) = 0x44200000;
        *(u32 *)(a0 + 0x2e0) = 0x43f00000;
        *(u32 *)(a0 + 0x2e4) = 0x43200000;
        *(u32 *)(a0 + 0x2e8) = 0x43d90000;
        *(u32 *)(a0 + 0x2ec) = 0x43200000;
        *(u32 *)(a0 + 0x2f0) = 0x439d8000;
        *(u32 *)(a0 + 0x2f4) = 0x43f00000;
        *(u32 *)(a0 + 0x2f8) = 0x439d8000;
        *(u32 *)(a0 + 0x2fc) = 0x43f00000;
        *(u32 *)(a0 + 0x300) = 0x43d90000;
        *(u32 *)(a0 + 0x330) = 0x43c80000;
        *(u32 *)(a0 + 0x334) = 0x43de8000;
        *(u32 *)(a0 + 0x338) = 0x43c80000;
        *(u32 *)(a0 + 0x33c) = 0x43c58000;
        *(u32 *)(a0 + 0x340) = 0x441a0000;
        *(u32 *)(a0 + 0x344) = 0x43c58000;
        *(u32 *)(a0 + 0x348) = 0x441a0000;
        *(u32 *)(a0 + 0x34c) = 0x43de8000;
    } else {
        *(u64 *)(a0 + 0x2d8) = (u64)uVar9;
        *(u64 *)(a0 + 0x2dc) = 0x2d844200000;
        *(u64 *)(a0 + 0x2e0) = 0x2cc43f00000;
        *(u64 *)(a0 + 0x2e4) = 0x2e843200000;
        *(u64 *)(a0 + 0x2e8) = 0x2ec43d90000;
        *(u64 *)(a0 + 0x2ec) = 0x2e843200000;
        *(u64 *)(a0 + 0x2f0) = 0x2f4439d8000;
        *(u64 *)(a0 + 0x2f4) = 0x2cc43f00000;
        *(u64 *)(a0 + 0x2f8) = 0x2f4439d8000;
        *(u64 *)(a0 + 0x2fc) = 0x2cc43f00000;
        *(u64 *)(a0 + 0x300) = 0x2ec43d90000;
        *(u64 *)(a0 + 0x330) = 0x33443c80000;
        *(u64 *)(a0 + 0x334) = 0x33843de8000;
        *(u64 *)(a0 + 0x338) = 0x33443c80000;
        *(u64 *)(a0 + 0x33c) = 0x34043c58000;
        *(u64 *)(a0 + 0x340) = 0x344441a0000;
        *(u64 *)(a0 + 0x344) = 0x34043c58000;
        *(u64 *)(a0 + 0x348) = 0x344441a0000;
        uVar9 = 0x43de8000;
        *(u64 *)(a0 + 0x34c) = 0x33843de8000;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x350) = 0;
        *(u32 *)(a0 + 0x354) = 0x43000000;
    } else {
        *(u64 *)(a0 + 0x350) = (u64)uVar9;
        uVar9 = 0x43000000;
        *(u64 *)(a0 + 0x354) = 0x35843000000;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x358) = 0;
    } else {
        *(u64 *)(a0 + 0x358) = (u64)uVar9;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x35c) = 0;
        uVar12 = CONCAT44(0x437f0000, uVar9);
        *(u32 *)(a0 + 0x360) = 0x437f0000;
    } else {
        *(u64 *)(a0 + 0x35c) = (u64)uVar9;
        uVar12 = 0x364437f0000;
        *(u64 *)(a0 + 0x360) = 0x364437f0000;
    }
    if (cVar14 == '\0') {
        *(u32 *)(a0 + 0x364) = 0;
        *(u32 *)(a0 + 0x368) = 0x437f0000;
        *(u32 *)(a0 + 0x36c) = 0x43000000;
    } else {
        *(u64 *)(a0 + 0x364) = uVar12 & 0xffffffff;
        *(u64 *)(a0 + 0x368) = 0x364437f0000;
        *(u64 *)(a0 + 0x36c) = 0x35843000000;
    }
    *(u16 *)(a0 + 0x380) = 0;
    game_sub_0c2c54(a0, 0x34c, 0x33c, 0x338);
    return a0;
}

/*
 * game_sub_0c2c0c  0x8c0c2c0c
 * area name: game code; nothing names its area yet
 * called by: game_poll_exit
 */
int game_sub_0c2c0c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar5_00;

    iVar1 = *(int *)(0x384 + a0);
    if (iVar1 != -1) {
        ar5_00 = *(u32 *)(0x384 + a0);
        iVar1 = pack_sub_021f18(0x8c2b59d0, ar5_00, a2);
        if (iVar1 == 1) {
            iVar1 = game_sub_0c3a14(a0, ar5_00, a2, a3);
        }
    }
    return iVar1;
}

/*
 * game_sub_0c2c54  0x8c0c2c54
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c2490
 */
int game_sub_0c2c54(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    *(u32 *)(0x384 + a0) = 0xffffffff;
    iVar1 = 0x388;
    *(u8 *)(0x388 + a0) = 0x30;
    return iVar1;
}

/*
 * CSysMessage_LoadMessage  0x8c0c2c6c
 * called by: game_sub_0c0444
 * strings: "GRAPHICS\\MESSAGE"; "SysMessage.pvm"; "CSysMessage::LoadMessage()"; "Failed to load sys message pvm.." ...
 */
u32 CSysMessage_LoadMessage(int a0, u32 a1) {
    u32 uVar1;
    u8 *puVar2;
    u8 *puVar3;
    u32 uVar4;
    int iVar5;

    for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
        *(u32 *)(0x1cc + iVar5 * 0xc + a0) = 0;
    }
    uVar4 = 10;
    uVar1 = 0x8c4312a8;
    ptr_list_build_1c(a0 + 0x1c0, a0 + 0x1c8, 0x8c4312a8, 10);
    iVar5 = a0 + 0x1c0;
    (**(code **)(*(int *)(a0 + 4) + 8))((int *)(a0 + 4), iVar5, uVar1, uVar4);
    uVar1 = get_field_4_0253e4(a0 + 4, iVar5, uVar1, uVar4);
    puVar3 = "GRAPHICS\\MESSAGE";
    puVar2 = "SysMessage.pvm";
    iVar5 = retry_until_done_020f90(a1, puVar2, puVar3, uVar1);
    if (iVar5 == -1) {
        uVar1 = 2;
        puVar3 = (u8 *)0x1;
        puVar2 = "CSysMessage::LoadMessage()";
        (*(code *)(&report_error_message))("Failed to load sys message pvm..", puVar2, 1, 2);
    }
    uVar1 = get_field_4_0253e4(a0 + 0x194, puVar2, puVar3, uVar1);
    puVar3 = "GRAPHICS\\MESSAGE";
    puVar2 = "VMS_ICON";
    iVar5 = retry_until_done_020e80(a1, puVar2, puVar3, uVar1);
    if (iVar5 == 0) {
        uVar1 = 2;
        puVar3 = (u8 *)0x1;
        puVar2 = "CSysMessage::LoadMessage()";
        (*(code *)(&report_error_message))("Failed to load vms icon textuer..", puVar2, 1, 2);
    }
    uVar1 = get_field_4_0253e4(a0 + 0x19c, puVar2, puVar3, uVar1);
    puVar3 = "GRAPHICS\\MESSAGE";
    puVar2 = "PAD_ICON";
    iVar5 = retry_until_done_020e80(a1, puVar2, puVar3, uVar1);
    if (iVar5 == 0) {
        uVar1 = 2;
        puVar3 = (u8 *)0x1;
        puVar2 = "CSysMessage::LoadMessage()";
        (*(code *)(&report_error_message))("Failed to load pad icon textuer..", puVar2, 1, 2);
    }
    uVar1 = get_field_4_0253e4(a0 + 0x1a4, puVar2, puVar3, uVar1);
    iVar5 = (*(code *)(&retry_until_done_020e80))(a1, "MIC_ICON", "GRAPHICS\\MESSAGE", uVar1);
    if (iVar5 == 0) {
        (*(code *)(&report_error_message))("Failed to load mic icon textuer..", "CSysMessage::LoadMessage()", 1, 2);
    }
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
        *(u32 *)(0x308 + iVar5 * 0xc + a0) = 0;
    }
    uVar4 = 3;
    uVar1 = 0x8c4312a8;
    ptr_list_build_1c(a0 + 0x328, a0 + 0x304, 0x8c4312a8, 3);
    iVar5 = a0 + 0x328;
    (**(code **)(*(int *)(a0 + 0x2bc) + 8))((int *)(a0 + 0x2bc), iVar5, uVar1, uVar4);
    uVar1 = get_field_4_0253e4(a0 + 0x2bc, iVar5, uVar1, uVar4);
    iVar5 = (*(code *)(&retry_until_done_020f90))(a1, "Loading.pvm", "GRAPHICS\\MESSAGE", uVar1);
    if (iVar5 == -1) {
        (*(code *)(&report_error_message))("Failed to load 'Loading' message pvm..", "CSysMessage::LoadMessage()", 1,
                                           2);
    }
    return 0;
}

/*
 * game_sub_0c2efc  0x8c0c2efc
 * name hint from a string it uses: WARNING NOPAD; area name: game code; nothing names its area yet
 * called by: CGame_sub_0b787c, CGame_sub_0b7920, game_sub_0b6c3c, game_sub_0b6e6c, game_sub_0bad68, game_sub_0c6e74,
 * game_sub_0c7438, save_files_check strings: "WARNING_NOPAD"; "WARNING_NOPAD"; "WARNING_NOVMS"; "WARNING_NOVMS" ...
 */
u32 game_sub_0c2efc(int a0, char *a1, u32 a2, u32 a3) {
    short sVar1;
    u32 uVar2;
    float *pfVar3;
    int iVar4;
    u8 *puVar5;
    u8 *puVar6;
    u8 *puVar7;
    char *ar5_00;
    u32 uVar8;
    int ar6_00;
    float fVar9;
    double in_dr0;
    u64 in_dr4;
    u64 in_xd0;
    char cVar10;
    char cVar11;
    float fStack_50;
    u64 auStack_4c[3];
    u8 auStack_30[24];

    cVar11 = '\0';
    cVar10 = '\0';
    puVar7 = auStack_30;
    puVar5 = &g_8c13bfb0;
    iVar4 = 10;
    do {
        puVar6 = puVar5 + 1;
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 2;
        puVar7[1] = *puVar6;
        puVar7 = puVar7 + 2;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (g_8c436874 == '\0') {
        g_8c436870 = 0;
        g_8c436874 = '\x01';
    }
    if (g_8c43687c == '\0') {
        g_8c436878 = 0;
        g_8c43687c = '\x01';
    }
    if (g_8c436884 == '\0') {
        g_8c436880 = (char *)0xb;
        g_8c436884 = '\x01';
    }
    if (g_8c43688c == '\0') {
        g_8c436888 = 0x1f;
        g_8c43688c = '\x01';
    }
    if (g_8c436894 == '\0') {
        g_8c436890 = 0xffffffff;
        g_8c436894 = '\x01';
    }
    if (a1 == (char *)0xb) {
        iVar4 = pack_sub_021f18(0x8c2b59d0, g_8c436890, a2);
        if (iVar4 != 2) {
            pack_release_entry_handle(0x8c2b59d0, g_8c436890, a2, a3);
            g_8c436890 = 0xffffffff;
        }
        uVar2 = 0;
        g_8c4365ec = 0;
        g_8c436880 = a1;
    } else {
        uVar2 = 4;
        ar6_00 = a0 + 0x164;
        set_fields_0_4_c(a0 + 0xc, a0 + 0x34, ar6_00, 4);
        iVar4 = a0 + 0x174;
        Class_129808_set_model(a0 + 0xc, iVar4, ar6_00);
        obj_set_texlist(a0 + 4, iVar4, ar6_00);
        ar5_00 = a1;
        obj_set_texture_num(a0 + 4, a1);
        Class_129808_draw_offset(a0 + 0xc, ar5_00, ar6_00, uVar2);
        uVar8 = SUB84(in_dr0, 0);
        switch (a1) {
        case (char *)0x1:
            g_8c436870 = 0x113;
            g_8c436878 = 0x91;
            if (cVar11 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar8);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3aac(a0, ar5_00, ar6_00, uVar2);
            ar5_00 = "WARNING_NOPAD";
            strcpy(auStack_30, "WARNING_NOPAD");
            break;
        case (char *)0x2:
            g_8c436870 = 0x114;
            g_8c436878 = 0xeb;
            if (cVar11 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar8);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3a48(a0, ar5_00, ar6_00, uVar2);
            ar5_00 = "WARNING_NOVMS";
            strcpy(auStack_30, "WARNING_NOVMS");
            break;
        case (char *)0x3:
            g_8c436870 = 0xd5;
            g_8c436878 = 0xe2;
            if (cVar11 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar8);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3a48(a0, ar5_00, ar6_00, uVar2);
            ar5_00 = "WARNING_NOTFOUND";
            strcpy(auStack_30, "WARNING_NOTFOUND");
            break;
        case (char *)0x4:
            g_8c436870 = 0xda;
            g_8c436878 = 0xec;
            if (cVar11 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar8);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3b10(a0, ar5_00, ar6_00, uVar2);
            ar5_00 = "WARNING_NOMIC";
            strcpy(auStack_30, "WARNING_NOMIC");
            break;
        case (char *)0x5:
            if (cVar11 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar8);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3a48(a0, ar5_00, ar6_00, uVar2);
            ar5_00 = "WARNING_NOTFOUND";
            strcpy(auStack_30, "WARNING_NOTFOUND");
            break;
        case (char *)0x6:
            g_8c436870 = 0xa7;
            g_8c436878 = 0xc6;
            if (cVar11 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar8);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3a48(a0, ar5_00, ar6_00, uVar2);
            ar5_00 = "WARNING_NOVMS";
            strcpy(auStack_30, "WARNING_NOVMS");
        }
        if ((((a1 == (char *)0x1) || (a1 == (char *)0x4)) || (a1 == (char *)0x2)) ||
            ((a1 == (char *)0x6 || (a1 == (char *)0x3)))) {
            uVar2 = libgcc_divide_helper_010284(a2, 6, ar6_00);
            sVar1 = (short)uVar2 + 1;
            *(short *)(a0 + 0x184) = sVar1 * 0x10;
            *(short *)(a0 + 0x188) = sVar1 * 0x10;
            *(short *)(a0 + 0x18c) = sVar1 * 0x10 + 0xf;
            *(short *)(a0 + 400) = sVar1 * 0x10 + 0xf;
            *(u16 *)(a0 + 0x186) = 0x5f;
            *(u16 *)(a0 + 0x18a) = 0x40;
            *(u16 *)(a0 + 0x18e) = 0x40;
            *(u16 *)(a0 + 0x192) = 0x5f;
            for (iVar4 = 0; fVar9 = SUB84(in_dr0, 0), iVar4 < 4; iVar4 = iVar4 + 1) {
                pfVar3 = (float *)(a0 + iVar4 * 8 + 0x54);
                if (cVar11 == '\0') {
                    fVar9 = *pfVar3;
                } else {
                    in_xd0 = *(u64 *)pfVar3;
                }
                if (cVar10 == '\0') {
                    fVar9 = fVar9 + (float)((u64)in_dr4 >> 0x20) + (float)g_8c436870;
                } else {
                    fVar9 = SUB84((double)g_8c436870 + (double)g_8c436870, 0);
                }
                if (cVar11 == '\0') {
                    (&fStack_50)[iVar4 * 2] = fVar9;
                } else {
                    *(u64 *)(&fStack_50 + iVar4 * 2) = in_xd0;
                }
                pfVar3 = (float *)(a0 + iVar4 * 8 + 0x58);
                if (cVar11 == '\0') {
                    fVar9 = *pfVar3;
                } else {
                    in_xd0 = *(u64 *)pfVar3;
                }
                if (cVar10 == '\0') {
                    in_dr0 = (double)CONCAT44((float)g_8c436878, fVar9 + (float)in_dr4 + (float)g_8c436878);
                } else {
                    in_dr0 = (double)g_8c436878 + (double)g_8c436878;
                }
                if (cVar11 == '\0') {
                    *(int *)(auStack_4c + iVar4) = SUB84(in_dr0, 0);
                } else {
                    auStack_4c[iVar4] = in_xd0;
                }
            }
            uVar2 = 4;
            ar6_00 = a0 + 0x164;
            set_fields_0_4_c(a0 + 0x20, &fStack_50, ar6_00, 4);
            iVar4 = a0 + 0x184;
            Class_129808_set_model(a0 + 0x20, iVar4, ar6_00);
            obj_set_texlist(a0 + 4, iVar4, ar6_00);
            ar5_00 = NULL;
            obj_set_texture_num(a0 + 4, 0);
            Class_129808_draw(a0 + 0x20, ar5_00, ar6_00, uVar2);
        }
        game_sub_0c453c(a0, ar5_00, ar6_00, uVar2);
        if (g_8c436880 == a1) {
            uVar2 = pack_sub_021d90(0x8c2b59d0, g_8c436890, 0, 0);
        } else {
            iVar4 = speech_is_playing(0x8c35468c, ar5_00);
            if (iVar4 == 1) {
                speech_stop(0x8c35468c, ar5_00, ar6_00, uVar2);
            }
            uVar8 = g_8c436890;
            iVar4 = pack_sub_021f18(0x8c2b59d0, g_8c436890, ar6_00);
            if (iVar4 != 2) {
                uVar8 = g_8c436890;
                pack_release_entry_handle(0x8c2b59d0, g_8c436890, ar6_00, uVar2);
                g_8c436890 = 0xffffffff;
            }
            pack_sub_021d4c(0x8c2b59d0, uVar8, ar6_00, uVar2);
            g_8c436880 = a1;
            g_8c436890 = pack_acquire_entry_handle(0x8c2b59d0, auStack_30, ar6_00, uVar2);
            uVar2 = pack_sub_021d90(0x8c2b59d0, g_8c436890, 0, 0);
        }
    }
    return uVar2;
}

/*
 * CSeamanDomain_sub_0c3530  0x8c0c3530
 * area name: only called from CSeamanDomain methods
 * called by: CSeamanDomain_Init
 */
u32 CSeamanDomain_sub_0c3530(int a0, int a1, u32 a2, u32 a3) {
    short sVar1;
    float *pfVar2;
    int iVar3;
    int ar6_00;
    u32 uVar4;
    u32 uVar5;
    float fVar6;
    double in_dr0;
    u64 in_dr4;
    u64 in_xd0;
    char cVar7;
    char cVar8;
    float fStack_3c;
    u64 auStack_38[4];

    cVar8 = '\0';
    cVar7 = '\0';
    if (g_8c43689c == '\0') {
        g_8c436898 = 99;
        g_8c43689c = '\x01';
    }
    if (g_8c4368a4 == '\0') {
        g_8c4368a0 = 0;
        g_8c4368a4 = '\x01';
    }
    if (g_8c4368ac == '\0') {
        g_8c4368a8 = 0;
        g_8c4368ac = '\x01';
    }
    uVar4 = 4;
    ar6_00 = a0 + 0x164;
    set_fields_0_4_c(a0 + 0xc, a0 + 0x34, ar6_00, 4);
    iVar3 = a0 + 0x174;
    Class_129808_set_model(a0 + 0xc, iVar3, ar6_00);
    obj_set_texlist(a0 + 4, iVar3, ar6_00);
    iVar3 = a1;
    obj_set_texture_num(a0 + 4, a1);
    Class_129808_draw_offset(a0 + 0xc, iVar3, ar6_00, uVar4);
    if (a1 < 7) {
        uVar5 = SUB84(in_dr0, 0);
        switch (a1) {
        case 1:
            g_8c4368a0 = 0x113;
            g_8c4368a8 = 0x91;
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar5);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3aac(a0, iVar3, ar6_00, uVar4);
            break;
        case 2:
            g_8c4368a0 = 0x114;
            g_8c4368a8 = 0xeb;
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar5);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3a48(a0, iVar3, ar6_00, uVar4);
            break;
        case 3:
            g_8c4368a0 = 0xd5;
            g_8c4368a8 = 0xe2;
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar5);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3a48(a0, iVar3, ar6_00, uVar4);
            break;
        case 4:
            g_8c4368a0 = 0xda;
            g_8c4368a8 = 0xec;
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar5);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3b10(a0, iVar3, ar6_00, uVar4);
            break;
        case 5:
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar5);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3a48(a0, iVar3, ar6_00, uVar4);
            break;
        case 6:
            g_8c4368a0 = 0xa7;
            g_8c4368a8 = 0xc6;
            if (cVar8 == '\0') {
                in_dr0 = (double)CONCAT44(0x41c80000, uVar5);
            } else {
                in_dr0 = 2.882304467837911e+17;
            }
            game_sub_0c3a48(a0, iVar3, ar6_00, uVar4);
        }
    }
    if ((((a1 == 1) || (a1 == 4)) || (a1 == 2)) || ((a1 == 6 || (a1 == 3)))) {
        uVar4 = libgcc_divide_helper_010284(a2, 6, ar6_00);
        sVar1 = (short)uVar4 + 1;
        *(short *)(a0 + 0x184) = sVar1 * 0x10;
        *(short *)(a0 + 0x188) = sVar1 * 0x10;
        *(short *)(a0 + 0x18c) = sVar1 * 0x10 + 0xf;
        *(short *)(a0 + 400) = sVar1 * 0x10 + 0xf;
        *(u16 *)(a0 + 0x186) = 0x5f;
        *(u16 *)(a0 + 0x18a) = 0x40;
        *(u16 *)(a0 + 0x18e) = 0x40;
        *(u16 *)(a0 + 0x192) = 0x5f;
        for (iVar3 = 0; fVar6 = SUB84(in_dr0, 0), iVar3 < 4; iVar3 = iVar3 + 1) {
            pfVar2 = (float *)(a0 + iVar3 * 8 + 0x54);
            if (cVar8 == '\0') {
                fVar6 = *pfVar2;
            } else {
                in_xd0 = *(u64 *)pfVar2;
            }
            if (cVar7 == '\0') {
                fVar6 = fVar6 + (float)((u64)in_dr4 >> 0x20) + (float)g_8c4368a0;
            } else {
                fVar6 = SUB84((double)g_8c4368a0 + (double)g_8c4368a0, 0);
            }
            if (cVar8 == '\0') {
                (&fStack_3c)[iVar3 * 2] = fVar6;
            } else {
                *(u64 *)(&fStack_3c + iVar3 * 2) = in_xd0;
            }
            pfVar2 = (float *)(a0 + iVar3 * 8 + 0x58);
            if (cVar8 == '\0') {
                fVar6 = *pfVar2;
            } else {
                in_xd0 = *(u64 *)pfVar2;
            }
            if (cVar7 == '\0') {
                in_dr0 = (double)CONCAT44((float)g_8c4368a8, fVar6 + (float)in_dr4 + (float)g_8c4368a8);
            } else {
                in_dr0 = (double)g_8c4368a8 + (double)g_8c4368a8;
            }
            if (cVar8 == '\0') {
                *(int *)(auStack_38 + iVar3) = SUB84(in_dr0, 0);
            } else {
                auStack_38[iVar3] = in_xd0;
            }
        }
        uVar4 = 4;
        ar6_00 = a0 + 0x164;
        set_fields_0_4_c(a0 + 0x20, &fStack_3c, ar6_00, 4);
        iVar3 = a0 + 0x184;
        Class_129808_set_model(a0 + 0x20, iVar3, ar6_00);
        obj_set_texlist(a0 + 4, iVar3, ar6_00);
        iVar3 = 0;
        obj_set_texture_num(a0 + 4, 0);
        Class_129808_draw(a0 + 0x20, iVar3, ar6_00, uVar4);
    }
    uVar4 = game_sub_0c453c(a0, iVar3, ar6_00, uVar4);
    return uVar4;
}

/*
 * CSeamanDomain_sub_0c38d4  0x8c0c38d4
 * name hint from a string it uses: WARNING NOPAD; area name: only called from CSeamanDomain methods
 * called by: CSeamanDomain_Init
 * strings: "WARNING_NOPAD"; "WARNING_NOPAD"; "WARNING_NOVMS"; "WARNING_NOVMS" ...
 */
int CSeamanDomain_sub_0c38d4(int a0, char *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    char *ar5_00;

    ar5_00 = a1;
    if (((int)a1 < 7) && (0 < (int)a1)) {
        switch (a1) {
        case (char *)0x1:
            ar5_00 = "WARNING_NOPAD";
            strcpy(a0 + 0x388, "WARNING_NOPAD");
            break;
        case (char *)0x2:
            ar5_00 = "WARNING_NOVMS";
            strcpy(a0 + 0x388, "WARNING_NOVMS");
            break;
        case (char *)0x3:
            ar5_00 = "WARNING_NOTFOUND";
            strcpy(a0 + 0x388, "WARNING_NOTFOUND");
            break;
        case (char *)0x4:
            ar5_00 = "WARNING_NOMIC";
            strcpy(a0 + 0x388, "WARNING_NOMIC");
            break;
        case (char *)0x5:
            ar5_00 = "WARNING_NOTFOUND";
            strcpy(a0 + 0x388, "WARNING_NOTFOUND");
            break;
        case (char *)0x6:
            ar5_00 = "WARNING_NOVMS";
            strcpy(a0 + 0x388, "WARNING_NOVMS");
        }
    }
    if (*(int *)(a0 + 900) != -1) {
        game_sub_0c3a14(a0, ar5_00, a2, a3);
    }
    iVar1 = *(int *)(a0 + 900);
    if ((iVar1 == -1) && (iVar1 = (int)*(char *)(a0 + 0x388), iVar1 != 0x30)) {
        uVar2 = pack_acquire_entry_handle(0x8c2b59d0, a0 + 0x388, a2, a3);
        *(u32 *)(a0 + 900) = uVar2;
        iVar1 = pack_sub_021d90(0x8c2b59d0, *(u32 *)(a0 + 900), 0, 0);
    }
    return iVar1;
}

/*
 * game_sub_0c3a14  0x8c0c3a14
 * area name: game code; nothing names its area yet
 * called by: CSeamanDomain_sub_0c38d4, game_sub_0c2c0c
 */
int game_sub_0c3a14(int a0, u32 unused_a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = *(int *)(0x384 + a0);
    if (iVar1 != -1) {
        (*(code *)(&pack_release_entry_handle))(0x8c2b59d0, *(u32 *)(0x384 + a0), a2, a3);
        iVar1 = 0x384;
        *(u32 *)(0x384 + a0) = 0xffffffff;
    }
    return iVar1;
}

/*
 * game_sub_0c3a48  0x8c0c3a48
 * area name: game code; nothing names its area yet
 * called by: CSeamanDomain_sub_0c3530, game_sub_0c2efc
 */
u32 game_sub_0c3a48(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_set_texlist(a0 + 0x194, a1, a2);
    uVar1 = 0;
    obj_set_texture_num(a0 + 0x194, 0);
    uVar1 = Class_129808_draw_offset(a0 + 0x1ac, uVar1, a2, a3);
    return uVar1;
}

/*
 * game_sub_0c3aac  0x8c0c3aac
 * area name: game code; nothing names its area yet
 * called by: CSeamanDomain_sub_0c3530, game_sub_0c2efc
 */
u32 game_sub_0c3aac(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_set_texlist(a0 + 0x19c, a1, a2);
    uVar1 = 0;
    obj_set_texture_num(a0 + 0x19c, 0);
    uVar1 = Class_129808_draw_offset(a0 + 0x1ac, uVar1, a2, a3);
    return uVar1;
}

/*
 * game_sub_0c3b10  0x8c0c3b10
 * area name: game code; nothing names its area yet
 * called by: CSeamanDomain_sub_0c3530, game_sub_0c2efc
 */
u32 game_sub_0c3b10(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    obj_set_texlist(a0 + 0x1a4, a1, a2);
    uVar1 = 0;
    obj_set_texture_num(a0 + 0x1a4, 0);
    uVar1 = Class_129808_draw_offset(a0 + 0x1ac, uVar1, a2, a3);
    return uVar1;
}

/*
 * game_sub_0c3b74  0x8c0c3b74
 * area name: game code; nothing names its area yet
 * called by: game_sub_0bf804
 */
u32 game_sub_0c3b74(int a0, u32 unused_a1, u32 a2) {
    u32 uVar1;
    int iVar2;
    int ar6_00;
    u32 ar7_00;
    int iVar3;
    u64 in_dr4;
    u16 in_stack_00000000;
    u8 in_stack_00000002;
    u8 in_stack_00000003;
    u8 uVar4;
    u16 uVar5;
    u32 uVar6;
    u32 ain0;
    float afStack_118[65];

    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
            afStack_118[iVar3 * 8 + iVar2 * 2] =
                *(float *)(a0 + iVar3 * 0x20 + iVar2 * 8 + 0x54) + (float)((u64)in_dr4 >> 0x20);
            afStack_118[iVar3 * 8 + iVar2 * 2 + 1] = *(float *)(a0 + iVar3 * 0x20 + iVar2 * 8 + 0x58) + (float)in_dr4;
        }
    }
    uVar1 = libgcc_divide_helper_0101e4((u32)in_stack_00000002, 10);
    uVar4 = (u8)uVar1;
    uVar1 = libgcc_divide_helper_01031c((u32)in_stack_00000002, 10, a2);
    uVar5 = CONCAT11((char)uVar1, uVar4);
    uVar1 = libgcc_divide_helper_0101e4((u32)in_stack_00000003, 10);
    uVar6 = (u32)CONCAT12((char)uVar1, uVar5);
    uVar1 = libgcc_divide_helper_01031c((u32)in_stack_00000003, 10, a2);
    ain0 = CONCAT13((char)uVar1, (s32)uVar6);
    libgcc_divide_helper_0101e4((u32)in_stack_00000000, 1000);
    uVar1 = libgcc_divide_helper_01031c((u32)in_stack_00000000, 1000, a2);
    libgcc_divide_helper_0101e4(uVar1, 100);
    uVar1 = libgcc_divide_helper_01031c((u32)in_stack_00000000, 100, a2);
    libgcc_divide_helper_0101e4(uVar1, 10);
    libgcc_divide_helper_01031c((u32)in_stack_00000000, 10, a2);
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        if (((iVar3 != 0) || ((char)ain0 != '\0')) && ((iVar3 != 2 || ((char)((u32)ain0 >> 0x10) != '\0')))) {
            *(u16 *)(a0 + 0x184) = (u16)(u8)(&stack0xfffffe84)[iVar3] << 4;
            *(u16 *)(a0 + 0x186) = 0x3f;
            *(u16 *)(a0 + 0x188) = (u16)(u8)(&stack0xfffffe84)[iVar3] << 4;
            *(u16 *)(a0 + 0x18a) = 0x20;
            *(u16 *)(a0 + 0x18c) = (u16)(u8)(&stack0xfffffe84)[iVar3] * 0x10 + 0xf;
            *(u16 *)(a0 + 0x18e) = 0x20;
            *(u16 *)(a0 + 400) = (u16)(u8)(&stack0xfffffe84)[iVar3] * 0x10 + 0xf;
            *(u16 *)(a0 + 0x192) = 0x3f;
            ar7_00 = 4;
            ar6_00 = a0 + 0x164;
            set_fields_0_4_c(a0 + 0x20, afStack_118 + iVar3 * 8, ar6_00, 4);
            iVar2 = a0 + 0x184;
            Class_129808_set_model(a0 + 0x20, iVar2, ar6_00);
            obj_set_texlist(a0 + 4, iVar2, ar6_00);
            uVar1 = 0;
            obj_set_texture_num(a0 + 4, 0);
            Class_129808_draw(a0 + 0x20, uVar1, ar6_00, ar7_00);
        }
    }
    return 8;
}

/*
 * CGame_sub_0c3e78  0x8c0c3e78
 * area name: only called from CGame methods
 * called by: CGame_Initial, game_sub_0bb1e4, game_sub_0bf22c
 */
int CGame_sub_0c3e78(int a0, u32 a1, int a2) {
    short sVar1;
    double *pdVar2;
    u32 uVar3;
    u32 *puVar4;
    u32 uVar5;
    int iVar6;
    double in_dr0;
    double dVar7;
    double dVar8;
    char cVar9;
    char cVar10;
    u8 auStack_4c[32];
    u32 auStack_2c[5];

    cVar10 = '\0';
    cVar9 = '\0';
    for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
        auStack_2c[iVar6] = a1;
    }
    uVar5 = 4;
    puVar4 = auStack_2c;
    set_fields_0_4_c(a0 + 0xc, a0 + 0x2c4, puVar4, 4);
    iVar6 = a0 + 0x174;
    Class_129808_set_model(a0 + 0xc, iVar6, puVar4);
    obj_set_texlist(a0 + 700, iVar6, puVar4);
    uVar3 = 0;
    obj_set_texture_num(a0 + 700, 0);
    Class_129808_draw(a0 + 0xc, uVar3, puVar4, uVar5);
    if (a2 == 0) {
        uVar5 = 4;
        puVar4 = auStack_2c;
        set_fields_0_4_c(a0 + 0xc, a0 + 0x2e4, puVar4, 4);
        iVar6 = a0 + 0x174;
        Class_129808_set_model(a0 + 0xc, iVar6, puVar4);
        obj_set_texlist(a0 + 700, iVar6, puVar4);
        uVar3 = 1;
        obj_set_texture_num(a0 + 700, 1);
        Class_129808_draw(a0 + 0xc, uVar3, puVar4, uVar5);
        uVar3 = get_field_a524_01f514(0x8c3dd7dc, uVar3, puVar4);
        uVar3 = libgcc_divide_helper_010284(uVar3, 6, puVar4);
        sVar1 = (short)uVar3 + 1;
        *(short *)(a0 + 0x184) = sVar1 * 0x10;
        *(short *)(a0 + 0x188) = sVar1 * 0x10;
        *(short *)(a0 + 0x18c) = sVar1 * 0x10 + 0xf;
        *(short *)(a0 + 400) = sVar1 * 0x10 + 0xf;
        *(u16 *)(a0 + 0x186) = 0x5f;
        *(u16 *)(a0 + 0x18a) = 0x40;
        *(u16 *)(a0 + 0x18e) = 0x40;
        *(u16 *)(a0 + 0x192) = 0x5f;
        if (cVar10 == '\0') {
            dVar8 = 2.161728111744385e+18;
        } else {
            dVar8 = -524288.13230896;
        }
        for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
            pdVar2 = (double *)(a0 + iVar6 * 8 + 0x54);
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(in_dr0, 0));
            } else {
                dVar7 = *pdVar2;
            }
            if (cVar9 == '\0') {
                dVar7 = (double)CONCAT44((float)((u64)dVar7 >> 0x20) + SUB84(dVar8, 0), SUB84(dVar7, 0));
            } else {
                dVar7 = dVar7 + dVar8;
            }
            if (cVar10 == '\0') {
                *(int *)(auStack_4c + iVar6 * 8) = (int)((u64)dVar7 >> 0x20);
            } else {
                *(double *)(auStack_4c + iVar6 * 8) = dVar7;
            }
            pdVar2 = (double *)(a0 + iVar6 * 8 + 0x58);
            if (cVar10 == '\0') {
                in_dr0 = (double)CONCAT44(*(u32 *)pdVar2, SUB84(dVar7, 0));
            } else {
                in_dr0 = *pdVar2;
            }
            if (cVar9 == '\0') {
                in_dr0 = (double)CONCAT44((float)((u64)in_dr0 >> 0x20) + (float)((u64)dVar8 >> 0x20), SUB84(in_dr0, 0));
            } else {
                in_dr0 = in_dr0 + dVar8;
            }
            if (cVar10 == '\0') {
                *(int *)(auStack_4c + iVar6 * 8 + 4) = (int)((u64)in_dr0 >> 0x20);
            } else {
                *(double *)(auStack_4c + iVar6 * 8 + 4) = in_dr0;
            }
        }
        uVar5 = 4;
        puVar4 = auStack_2c;
        set_fields_0_4_c(a0 + 0xc, auStack_4c, puVar4, 4);
        iVar6 = a0 + 0x184;
        Class_129808_set_model(a0 + 0xc, iVar6, puVar4);
        obj_set_texlist(a0 + 4, iVar6, puVar4);
        uVar3 = 0;
        obj_set_texture_num(a0 + 4, 0);
        a2 = Class_129808_draw(a0 + 0xc, uVar3, puVar4, uVar5);
    } else if (a2 == 1) {
        uVar5 = 4;
        puVar4 = auStack_2c;
        set_fields_0_4_c(a0 + 0xc, a0 + 0x2e4, puVar4, 4);
        iVar6 = a0 + 0x174;
        Class_129808_set_model(a0 + 0xc, iVar6, puVar4);
        obj_set_texlist(a0 + 700, iVar6, puVar4);
        uVar3 = 2;
        obj_set_texture_num(a0 + 700, 2);
        a2 = Class_129808_draw(a0 + 0xc, uVar3, puVar4, uVar5);
    }
    return a2;
}

/*
 * game_sub_0c412c  0x8c0c412c
 * area name: game code; nothing names its area yet
 * called by: Class_12b388_sub_0c5cb4, game_sub_0b6c3c, game_sub_0c6e74
 */
u32 game_sub_0c412c(int a0, int a1, u32 a2) {
    u32 uVar1;
    u8 *ar6_00;
    int iVar2;
    int iVar3;

    if (g_8c4368b4 == '\0') {
        g_8c4368b0 = 0;
        g_8c4368b4 = '\x01';
    }
    if (g_8c4368cc == '\0') {
        g_8c4368c8 = 0;
        g_8c4368cc = '\x01';
    }
    if (a1 == 0) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
            *(u32 *)(&g_8c4368b8 + iVar2 * 4) = 0xffffff;
        }
    }
    if (a1 == 1) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
            *(u32 *)(&g_8c4368b8 + iVar2 * 4) = 0x7fffffff;
        }
    }
    if (g_8c4368b8 < 0x61000000) {
        if (0xffffff < g_8c4368b8) {
            iVar2 = 0;
            while (iVar3 = iVar2, iVar3 < 4) {
                *(int *)(&g_8c4368b8 + iVar3 * 4) = *(int *)(&g_8c4368b8 + iVar3 * 4) + -0x1000000;
                iVar2 = iVar3 + 1;
            }
        }
    } else {
        g_8c4368c8 = g_8c4368c8 + 1;
        if (3 < g_8c4368c8) {
            g_8c4368c8 = 0;
            for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                *(int *)(&g_8c4368b8 + iVar2 * 4) = *(int *)(&g_8c4368b8 + iVar2 * 4) + -0x1000000;
            }
        }
    }
    uVar1 = 0xffffff;
    if (0xffffff < g_8c4368b8) {
        obj_set_texlist(a0 + 4, a1, a2);
        obj_set_texture_num(a0 + 4, 7);
        uVar1 = 4;
        ar6_00 = &g_8c4368b8;
        iVar2 = a0 + 0x330;
        set_fields_0_4_c(a0 + 0xc, iVar2, &g_8c4368b8, 4);
        uVar1 = Class_129808_draw(a0 + 0xc, iVar2, ar6_00, uVar1);
    }
    return uVar1;
}

/*
 * game_sub_0c42b0  0x8c0c42b0
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c6e74
 */
int game_sub_0c42b0(int a0) {
    int iVar1;
    u32 ar5_00;
    int ar6_00;
    u32 ar7_00;

    iVar1 = 0;
    if (*(short *)(a0 + 0x380) != 0) {
        ar7_00 = 4;
        ar6_00 = a0 + 0x370;
        set_fields_0_4_c(a0 + 0xc, a0 + 0x350, ar6_00, 4);
        iVar1 = a0 + 0x174;
        Class_129808_set_model(a0 + 0xc, iVar1, ar6_00);
        obj_set_texlist(a0 + 4, iVar1, ar6_00);
        ar5_00 = 8;
        obj_set_texture_num(a0 + 4, 8);
        Class_129808_draw_offset(a0 + 0xc, ar5_00, ar6_00, ar7_00);
        *(short *)(a0 + 0x380) = *(short *)(a0 + 0x380) + -1;
        iVar1 = (int)*(short *)(a0 + 0x380);
        if (iVar1 < 0) {
            iVar1 = 0x380;
            *(u16 *)(a0 + 0x380) = 0;
        }
    }
    return iVar1;
}

/*
 * game_sub_0c4370  0x8c0c4370
 * area name: game code; nothing names its area yet
 * called by: game_sub_0ba6bc, game_sub_0bf804, game_sub_0d1858
 */
u32 game_sub_0c4370(int a0, int a1, int a2, int a3) {
    char cVar1;
    short sVar2;
    float fVar3;
    float fVar4;
    u32 uVar5;
    int ar5_00;
    int ar7_00;
    short sVar6;
    int iVar7;
    float fVar8;
    double dVar9;
    double in_dr2;
    double dVar10;
    u64 in_dr4;
    u32 in_fr7;
    u32 in_fr6;
    float fVar11;
    double dVar12;
    float fVar13;
    double dVar14;
    u64 in_xd0;
    char cVar15;
    char cVar16;
    int in_stack_00000000;
    float fStack_50;
    float fStack_4c;
    float fStack_48;
    float fStack_40;
    float fStack_38;
    u32 uStack_34;

    cVar16 = '\0';
    cVar15 = '\0';
    dVar12 = (double)CONCAT44(in_fr6, (int)((u64)in_dr4 >> 0x20));
    dVar14 = (double)CONCAT44((int)in_dr4, in_fr7);
    ar7_00 = a3;
    obj_set_texlist(a0 + 4, a1, a2);
    obj_set_texture_num(a0 + 4, 0);
    for (iVar7 = 0; *(char *)(iVar7 + a1) != '\0'; iVar7 = iVar7 + 1) {
        cVar1 = *(char *)(iVar7 + a1);
        fVar13 = SUB84(dVar14, 0);
        fVar11 = SUB84(dVar12, 0);
        if (cVar15 == '\0') {
            fVar8 = (float)a3 * fVar13 * (float)iVar7 + fVar11;
        } else {
            fVar8 = SUB84((double)iVar7 * (double)iVar7 + dVar12, 0);
        }
        fStack_50 = (float)in_xd0;
        fStack_48 = fStack_50;
        if (cVar16 == '\0') {
            fStack_50 = fVar8;
        }
        if (cVar15 == '\0') {
            fVar8 = (float)a3 * fVar13 * (float)iVar7 + fVar11;
        } else {
            fVar8 = SUB84((double)iVar7 * (double)iVar7 + dVar12, 0);
        }
        if (cVar16 == '\0') {
            fStack_48 = fVar8;
        }
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44((float)a3 * fVar13, SUB84(in_dr2, 0));
        } else {
            dVar10 = (double)a3 * dVar14;
        }
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) + (float)a3 * fVar13 * (float)iVar7 + fVar11,
                                      SUB84(dVar10, 0));
        } else {
            dVar10 = dVar10 + (double)iVar7 * (double)iVar7 + dVar12;
        }
        fStack_40 = SUB84(dVar10, 0);
        if (cVar16 == '\0') {
            fStack_40 = (float)((u64)dVar10 >> 0x20);
        }
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44((float)a3 * fVar13, SUB84(dVar10, 0));
        } else {
            dVar10 = (double)a3 * dVar14;
        }
        if (cVar15 == '\0') {
            fVar8 = (float)a3 * fVar13 * (float)iVar7;
            in_dr2 = (double)CONCAT44((float)((u64)dVar10 >> 0x20) + fVar8 + fVar11, SUB84(dVar10, 0));
        } else {
            dVar9 = (double)iVar7 * (double)iVar7;
            fVar8 = SUB84(dVar9, 0);
            in_dr2 = dVar10 + dVar9 + dVar12;
        }
        if (cVar16 == '\0') {
            fStack_38 = (float)((u64)in_dr2 >> 0x20);
        } else {
            fStack_38 = SUB84(in_dr2, 0);
        }
        fVar11 = (float)((u64)dVar14 >> 0x20);
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44((float)in_stack_00000000 * fVar13 + fVar11, fVar8);
        } else {
            dVar10 = (double)in_stack_00000000 * dVar14 + dVar14;
        }
        fVar8 = (float)((u64)dVar10 >> 0x20);
        fStack_4c = SUB84(dVar10, 0);
        fVar3 = fVar11;
        fVar4 = fVar11;
        if (cVar16 == '\0') {
            fStack_4c = fVar8;
            fVar8 = fStack_48;
            fVar3 = fStack_40;
            fVar4 = fStack_38;
        }
        fStack_38 = fVar4;
        fStack_40 = fVar3;
        fStack_48 = fVar8;
        if (cVar15 == '\0') {
            dVar10 = (double)CONCAT44((float)in_stack_00000000 * fVar13 + fVar11, SUB84(dVar10, 0));
        } else {
            dVar10 = (double)in_stack_00000000 * dVar14 + dVar14;
        }
        uVar5 = (u32)((u64)dVar10 >> 0x20);
        uStack_34 = uVar5;
        if (cVar16 != '\0') {
            uStack_34 = SUB84(dVar10, 0);
        }
        uVar5 = libgcc_divide_helper_01031c((int)cVar1, 0x10, a2);
        sVar6 = (short)uVar5 * 0x10;
        uVar5 = libgcc_divide_helper_0101e4((int)cVar1, 0x10);
        sVar2 = ((short)uVar5 + -2) * 0x20;
        *(short *)(a0 + 0x184) = sVar6;
        *(short *)(a0 + 0x186) = sVar2 + 0x1f;
        *(short *)(a0 + 0x188) = sVar6;
        *(short *)(a0 + 0x18a) = sVar2;
        *(short *)(a0 + 0x18c) = sVar6 + 0xf;
        *(short *)(a0 + 0x18e) = sVar2;
        *(short *)(a0 + 400) = sVar6 + 0xf;
        *(short *)(a0 + 0x192) = sVar2 + 0x1f;
        ar7_00 = 4;
        a2 = a0 + 0x154;
        set_fields_0_4_c(a0 + 0x20, &fStack_50, a2, 4);
        ar5_00 = a0 + 0x184;
        Class_129808_set_model(a0 + 0x20, ar5_00, a2);
        Class_129808_draw(a0 + 0x20, ar5_00, a2, ar7_00);
    }
    return 0;
}

/*
 * game_sub_0c453c  0x8c0c453c
 * area name: game code; nothing names its area yet
 * called by: CSeamanDomain_sub_0c3530, game_sub_0bf804, game_sub_0c2efc, game_sub_0c76d0
 */
u32 game_sub_0c453c(int a0, u32 a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    u32 ar6_00;
    u32 ar7_00;
    u64 in_dr4;
    u32 ain0;
    u8 auStack_3c[20];
    u32 uStack_28;

    ain0 = (u32)((u64)in_dr4 >> 0x20);
    uStack_28 = g_8c13bfc4;
    clear_5_words(auStack_3c, a1, unused_a2, a3);
    ar7_00 = 4;
    ar6_00 = 0x8c43654c;
    set_fields_0_4_c(auStack_3c, &uStack_28, 0x8c43654c, 4);
    Class_129808_set_model(auStack_3c, &g_8c43655c, ar6_00);
    uVar1 = 0x80000060;
    set_field_10(auStack_3c, 0x80000060);
    obj_set_texlist(a0 + 4, uVar1, ar6_00);
    uVar1 = 9;
    obj_set_texture_num(a0 + 4, 9);
    Class_129808_draw_offset(auStack_3c, uVar1, ar6_00, ar7_00);
    uVar1 = free_if_nonnull_wrap_0151a0(auStack_3c, 0xffffffff, ar6_00, ar7_00);
    return uVar1;
}

/*
 * get_field_8_0c461c  0x8c0c461c
 */
u32 get_field_8_0c461c(int a0) {
    return *(u32 *)(a0 + 8);
}

/*
 * ret_const_0_0c4624  0x8c0c4624
 */
u32 ret_const_0_0c4624(void) {
    return 0;
}

/*
 * ret_const_0_0c462c  0x8c0c462c
 */
u32 ret_const_0_0c462c(void) {
    return 0;
}

/*
 * get_field_8_0c4634  0x8c0c4634
 */
u32 get_field_8_0c4634(int a0) {
    return *(u32 *)(a0 + 8);
}

/*
 * ret_const_0_0c463c  0x8c0c463c
 */
u32 ret_const_0_0c463c(void) {
    return 0;
}

/*
 * game_sub_0c4644  0x8c0c4644
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c4644(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    u32 ar7_00;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c1263a0, a1, a2, a3);
    uVar3 = 0x8c286e20;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286e20, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1263b0, pcVar2, uVar3, a3);
    uVar3 = 0x8c286e2c;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286e2c, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1263c0, pcVar2, uVar3, a3);
    uVar3 = 0x8c286e38;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c286e38, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1263d0, pcVar2, uVar3, a3);
    global_list_push(uVar1, Vec3_dtor, 0x8c286e44, a3);
    if (cVar4 == '\0') {
        g_8c1263e0 = CONCAT44(_UNK_8c1263e4, 0x800000);
        /* WARNING: Read-only address (ram,0x8c1263e4) is written */
    } else {
        g_8c1263e0 = 0xffffffff00800000;
    }
    uVar1 = 4;
    vec_new_array(0x8c286e5c, clear_field_0_wrap_015b94, free_if_nonnull_wrap_0247b0, 4, 9);
    global_list_push(0, destroy_array_8c286e5c, 0x8c286e50, uVar1);
    ar7_00 = 4;
    vec_new_array(0x8c286e8c, clear_field_0_wrap_015bc8, free_if_nonnull_wrap_03a3dc, 4, 9);
    uVar1 = 0x8c286e80;
    pcVar2 = destroy_array_8c286e8c;
    global_list_push(0, destroy_array_8c286e8c, 0x8c286e80, ar7_00);
    uVar1 = game_sub_0bff8c(0x8c286ebc, pcVar2, uVar1, ar7_00);
    uVar3 = 0x8c286eb0;
    pcVar2 = game_sub_0c0368;
    global_list_push(uVar1, game_sub_0c0368, 0x8c286eb0, ar7_00);
    uVar1 = game_sub_0c2490(&g_8c2b5628, pcVar2, uVar3, ar7_00);
    uVar3 = 0x8c2b561c;
    pcVar2 = Class_12984c_sub_0c4b84;
    global_list_push(uVar1, Class_12984c_sub_0c4b84, 0x8c2b561c, ar7_00);
    uVar1 = pack_ctor(0x8c2b59d0);
    uVar3 = 0x8c2b59c4;
    pcVar2 = pack_sub_0214e0;
    global_list_push(uVar1, pack_sub_0214e0, 0x8c2b59c4, ar7_00);
    uVar1 = game_sub_0f7f78(0x8c35468c, pcVar2, uVar3, ar7_00);
    uVar3 = 0x8c354680;
    pcVar2 = game_sub_0f7fa8;
    global_list_push(uVar1, game_sub_0f7fa8, 0x8c354680, ar7_00);
    uVar1 = game_sub_01e504(0x8c3dd7dc);
    uVar3 = 0x8c3dd7d0;
    pcVar2 = game_sub_01e560;
    global_list_push(uVar1, game_sub_01e560, 0x8c3dd7d0, ar7_00);
    uVar1 = vec_new_array_wrap_0febbc(0x8c3e7d30);
    uVar3 = 0x8c3e7d24;
    pcVar2 = game_sub_0c4a44;
    global_list_push(uVar1, game_sub_0c4a44, 0x8c3e7d24, ar7_00);
    uVar1 = game_sub_0fef8c(0x8c3eb324);
    uVar3 = 0x8c3eb318;
    pcVar2 = free_if_nonnull_wrap_0c4a14;
    global_list_push(uVar1, free_if_nonnull_wrap_0c4a14, 0x8c3eb318, ar7_00);
    uVar1 = input_sub_01f5d0(0x8c3eb334);
    uVar3 = 0x8c3eb328;
    pcVar2 = free_if_nonnull_wrap_01f5d8;
    global_list_push(uVar1, free_if_nonnull_wrap_01f5d8, 0x8c3eb328, ar7_00);
    uVar1 = clear_5_words(0x8c431294, pcVar2, uVar3, ar7_00);
    uVar3 = 0x8c431288;
    pcVar2 = free_if_nonnull_wrap_0151a0;
    global_list_push(uVar1, free_if_nonnull_wrap_0151a0, 0x8c431288, ar7_00);
    uVar1 = game_sub_0b9fb4(0x8c431a68, pcVar2, uVar3);
    uVar3 = 0x8c431a5c;
    pcVar2 = game_sub_0c4968;
    global_list_push(uVar1, game_sub_0c4968, 0x8c431a5c, ar7_00);
    uVar1 = vec_new_array_wrap(0x8c435c7c);
    uVar3 = 0x8c435c70;
    pcVar2 = game_sub_0c491c;
    global_list_push(uVar1, game_sub_0c491c, 0x8c435c70, ar7_00);
    uVar1 = game_sub_0fdc98(0x8c436280);
    return uVar1;
}

/*
 * game_sub_0c491c  0x8c0c491c
 * area name: game code; nothing names its area yet
 */
int game_sub_0c491c(int a0, u32 a1) {
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar7_00 = 0xc;
        ar6_00 = 0x80;
        vec_delete_array(a0, game_sub_0ba1f4, 0x80, 0xc);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c4968  0x8c0c4968
 * area name: game code; nothing names its area yet
 */
int game_sub_0c4968(int a0, u32 a1) {
    u32 ar5_00;
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        vec_delete_array(a0 + 0x2794, game_sub_0ba180, 0xf0, 10);
        vec_delete_array(a0 + 0x14c4, game_sub_0ba180, 0xf0, 0x14);
        vec_delete_array(a0 + 0x1ec, game_sub_0ba180, 0xf0, 0x14);
        ar7_00 = 3;
        ar6_00 = 0x10;
        vec_delete_array(a0 + 0x1bc, Vec3_dtor, 0x10, 3);
        ar5_00 = 0xffffffff;
        game_sub_0ba180(a0 + 0xb0, 0xffffffff, ar6_00, ar7_00);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * free_if_nonnull_wrap_0c4a14  0x8c0c4a14
 */
int free_if_nonnull_wrap_0c4a14(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * game_sub_0c4a44  0x8c0c4a44
 * area name: game code; nothing names its area yet
 */
int game_sub_0c4a44(int a0, u32 a1) {
    u32 ar6_00;
    u32 ar7_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar7_00 = 0x96;
        ar6_00 = 0x5c;
        vec_delete_array(a0, game_sub_0c4a90, 0x5c, 0x96);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c4a90  0x8c0c4a90
 * area name: game code; nothing names its area yet
 */
int game_sub_0c4a90(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        ar5_00 = 0xffffffff;
        game_sub_0c4ad0(a0, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * game_sub_0c4ad0  0x8c0c4ad0
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c4a90, game_sub_0fe59c
 */
int game_sub_0c4ad0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Class_12984c_dtor(a0 + 0x2c, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 0x18, 0xffffffff, a2, a3);
        Vec3_dtor(a0 + 8, 0xffffffff, a2, a3);
        ar5_00 = 0;
        free_if_nonnull_wrap_0c0264(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12984c_dtor  0x8c0c4b3c
 * stores the vtable 0x8c12984c
 * called by: game_sub_0c4ad0, game_sub_0d3304
 */
u32 *Class_12984c_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12984c;
        ar5_00 = 0;
        Class_12988c_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12984c_sub_0c4b84  0x8c0c4b84
 * area name: sits between Class_12984c functions (same compilation unit)
 */
int Class_12984c_sub_0c4b84(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        Class_129920_dtor(a0 + 700, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_0151a0(a0 + 0x1ac, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x1a4, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x19c, 0xffffffff, a2, a3);
        Class_129920_dtor(a0 + 0x194, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_0151a0(a0 + 0x20, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_0151a0(a0 + 0xc, 0xffffffff, a2, a3);
        ar5_00 = 0xffffffff;
        Class_129920_dtor(a0 + 4, 0xffffffff, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * destroy_array_8c286e8c  0x8c0c4c3c
 * destroys the global array at 0x8c286e8c
 */
u32 destroy_array_8c286e8c(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c286e8c, free_if_nonnull_wrap_03a3dc, 4, 9);
    return uVar1;
}

/*
 * destroy_array_8c286e5c  0x8c0c4c60
 * destroys the global array at 0x8c286e5c
 */
u32 destroy_array_8c286e5c(void) {
    u32 uVar1;

    uVar1 = vec_delete_array(0x8c286e5c, free_if_nonnull_wrap_0247b0, 4, 9);
    return uVar1;
}

/*
 * CGame_sub_0c4c84  0x8c0c4c84
 * area name: only called from CGame methods
 * called by: CGame_GetUserGameInfo
 */
u32 CGame_sub_0c4c84(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = get_field_24_05c284(a0, a1);
    if (((iVar1 != 0xf) && (iVar1 != 0x10)) &&
        (iVar1 = (**(code **)(0xb4 + *(int *)(a0 + 8)))(a0, a1, a2, a3), iVar1 != 0)) {
        return 0;
    }
    return 1;
}

/*
 * Class_12984c_sub_0c4cd8  0x8c0c4cd8
 * area name: sits between Class_12984c functions (same compilation unit)
 * called by: game_sub_0cdf50
 */
u32 Class_12984c_sub_0c4cd8(int a0, int a1, int a2, u32 a3) {
    u32 uVar1;
    int *a4;
    u8 *a5;
    int ar6_00;
    u8 auStack_1c[20];

    Vec3_ctor_zero(auStack_1c, a1, a2);
    a5 = auStack_1c;
    ar6_00 = a2;
    (**(code **)(0x150 + *(int *)(a0 + 8)))(a0, a5, a2, a3);
    set_vec3_field_30(a0, a5, ar6_00);
    a4 = *(int **)(a2 * 4 + a1);
    (**(code **)(*a4 + 0x50))(a4, a0, ar6_00, a3);
    set_field_380_u16(0x8c2b5628, 0x96);
    uVar1 = Vec3_dtor(auStack_1c, 0xffffffff, ar6_00, a3);
    return uVar1;
}

/*
 * set_field_380_u16  0x8c0c4d70
 * called by: CGame_Initial, Class_12984c_sub_0c4cd8
 */
int set_field_380_u16(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0x380;
    *(u16 *)(0x380 + a0) = (u16)a1;
    return iVar1;
}

/*
 * game_sub_0c4d7c  0x8c0c4d7c
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c4d7c(u32 a0, u32 a1) {
    set_field_2c_wrap(a0, a1);
    return a1;
}

/*
 * set_field_2c_wrap  0x8c0c4da0
 * only calls set_field_2c_0c4dc8
 * called by: CEnv_AddItem, CTexture_sub_0e810c, game_sub_0c4d7c
 */
u32 set_field_2c_wrap(int a0, u32 a1) {
    set_field_2c_0c4dc8(a1, *(u32 *)(a0 + 0x24));
    return a1;
}

/*
 * set_field_2c_0c4dc8  0x8c0c4dc8
 * called by: set_field_2c_wrap
 */
u32 set_field_2c_0c4dc8(int a0, u32 a1) {
    u32 in_r0;

    *(u32 *)(a0 + 0x2c) = a1;
    return in_r0;
}

/*
 * game_sub_0c4dd0  0x8c0c4dd0
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cdf50
 */
int game_sub_0c4dd0(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    uVar1 = (**(code **)(0x148 + *(int *)(a0 + 8)))(a0, a1, a2, a3);
    iVar2 = (int)(short)uVar1;
    if ((iVar2 == 0) || (iVar2 == 1)) {
        iVar2 = game_sub_035bc8(a1);
    } else if (iVar2 == 3) {
        iVar2 = game_sub_0996c4(a1);
    }
    return iVar2;
}

/*
 * CAnimal_sub_0c4e2c  0x8c0c4e2c
 * area name: only called from CAnimal methods
 * called by: CAnimal_m2_0acaec, Class_12a078_sub_05d860, Class_12a078_sub_05f660, Class_12a7a8_sub_099714,
 * Class_12acc8_sub_09ff1c, Class_12b0c4_sub_0abe84, Class_12bb08_sub_0dbbe8, Class_12c3c4_sub_104854 (+13 more)
 */
u32 CAnimal_sub_0c4e2c(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;

    g_8c436924 = 1;
    uVar1 = game_sub_0c4e48();
    return uVar1;
}

/*
 * game_sub_0c4e48  0x8c0c4e48
 * area name: game code; nothing names its area yet
 * called by: CAnimal_sub_0c4e2c, game_sub_0c8fc4, game_sub_0ca0e0, game_sub_0cb29c, game_sub_0cdf50
 */
u32 game_sub_0c4e48(void) {
    g_8c436928 = 1;
    return 1;
}

/*
 * game_sub_0c4e58  0x8c0c4e58
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cbbcc, game_sub_0cbc3c, game_sub_0cbca4, game_sub_0cbd0c
 */
u32 game_sub_0c4e58(u32 a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int a4;
    int iVar3;
    u32 ar6_00;
    u32 uVar4;
    int *piVar5;
    u32 uVar6;
    u8 *a5;
    u8 auStack_2c[20];

    iVar2 = a1;
    ar6_00 = a2;
    iVar1 = get_field_d0_0c51fc(a0, a1, a2);
    Vec3_ctor_zero(auStack_2c, iVar2, ar6_00);
    piVar5 = *(int **)(iVar1 * 4 + a1);
    uVar6 = a2;
    (**(code **)(*piVar5 + 0x78))(piVar5, a2, ar6_00, a3);
    set_timeout_120_mode6(a0);
    clear_field_59c_wrap(a0);
    if (iVar1 == 0) {
        set_field_20_on_field_15c(a0);
        iVar2 = get_field_4_on_field_d8(a0, uVar6, ar6_00);
        if (iVar2 == 0) {
            uVar6 = 3;
            set_field_d0_0c51b8(a0, 3);
            iVar2 = get_field_4_on_field_d8(a0, uVar6, ar6_00);
            if (iVar2 == 0) {
                uVar6 = 0;
                set_timeout_120(a0, 0);
            }
        } else {
            iVar2 = get_field_24_05c284(iVar2, uVar6);
            if (iVar2 == 0xd) {
                uVar6 = 1;
                set_field_d0_0c51b8(a0, 1);
            } else {
                uVar6 = 3;
                set_field_d0_0c51b8(a0, 3);
                iVar2 = get_field_4_on_field_d8(a0, uVar6, ar6_00);
                if (iVar2 == 0) {
                    uVar6 = 0;
                    set_timeout_120(a0, 0);
                }
            }
        }
    } else if (iVar1 == 3) {
        if ((a2 & 0xff) == 0) {
            uVar6 = 0;
            set_field_d0_0c51b8(a0, 0);
        } else {
            uVar6 = 1;
            set_field_d0_0c51b8(a0, 1);
        }
    } else if (iVar1 == 1) {
        if (((a2 & 0xff) == 1) || ((a2 & 0xff) == 2)) {
            uVar6 = 0;
            set_field_d0_0c51b8(a0, 0);
        } else if ((a2 & 0xff) == 3) {
            uVar6 = 2;
            set_field_d0_0c51b8(a0, 2);
        }
    } else if (iVar1 == 2) {
        set_field_20_on_field_15c(a0);
        iVar2 = get_field_4_on_field_d8(a0, uVar6, ar6_00);
        if (iVar2 == 0) {
            uVar6 = 3;
            set_field_d0_0c51b8(a0, 3);
            iVar2 = get_field_4_on_field_d8(a0, uVar6, ar6_00);
            if (iVar2 == 0) {
                uVar6 = 0;
                set_timeout_120(a0, 0);
            }
        } else {
            iVar2 = get_field_24_05c284(iVar2, uVar6);
            if (iVar2 == 0xd) {
                uVar6 = 1;
                set_field_d0_0c51b8(a0, 1);
            } else {
                uVar6 = 3;
                set_field_d0_0c51b8(a0, 3);
                iVar2 = get_field_4_on_field_d8(a0, uVar6, ar6_00);
                if (iVar2 == 0) {
                    uVar6 = 0;
                    set_timeout_120(a0, 0);
                }
            }
        }
    }
    iVar2 = get_field_d0_0c51fc(a0, uVar6, ar6_00);
    piVar5 = *(int **)(iVar2 * 4 + a1);
    uVar6 = a2;
    (**(code **)(*piVar5 + 0x70))(piVar5, a2, ar6_00, a3);
    a4 = get_field_4_on_field_d8(a0, uVar6, ar6_00);
    if ((a4 != 0) && (iVar3 = get_field_d0_0c51fc(a0, uVar6, ar6_00), iVar3 != 3)) {
        ar6_00 = get_field_d0_0c51fc(a0, uVar6, ar6_00);
        a5 = auStack_2c;
        (**(code **)(0x150 + *(int *)(a4 + 8)))(a4, a5, ar6_00, a3);
        piVar5 = *(int **)(iVar2 * 4 + a1);
        (**(code **)(0xa0 + *piVar5))(piVar5, a5, ar6_00, a3);
    }
    game_sub_021720(0x8c2b59d0, 1, ar6_00, a3);
    (*(code *)(&game_sub_0d1c20))(*(u32 *)(iVar1 * 4 + a1), *(u32 *)(iVar2 * 4 + a1), a2, a3);
    uVar4 = Vec3_dtor(auStack_2c, 0xffffffff, a2, a3);
    return uVar4;
}

/*
 * noop_0c5198  0x8c0c5198
 */
u32 noop_0c5198(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0c519c  0x8c0c519c
 */
u32 noop_0c519c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * set_timeout_120  0x8c0c51a0
 * +0x188 = a1 and a 120-frame countdown at +0x18c
 * called by: game_sub_0c4e58, game_sub_0c8fc4, game_sub_0ca0e0, game_sub_0dbf90, game_sub_10022c, game_sub_1002a8,
 * game_sub_10031c, game_sub_1003b0 (+5 more)
 */
int set_timeout_120(int a0, u32 a1) {
    int iVar1;

    *(u16 *)(0x18c + a0) = 0x78;
    iVar1 = 0x188;
    *(u32 *)(0x188 + a0) = a1;
    return iVar1;
}

/*
 * set_field_d0_0c51b8  0x8c0c51b8
 * called by: game_sub_0c4e58, game_sub_0c8758, game_sub_0c8c28, game_sub_0c97bc, game_sub_0caac0, game_sub_0cb29c,
 * game_sub_0cb5c8
 */
int set_field_d0_0c51b8(int a0, u32 a1) {
    int iVar1;

    iVar1 = 0xd0;
    *(u32 *)(0xd0 + a0) = a1;
    return iVar1;
}

/*
 * set_timeout_120_mode6  0x8c0c51c4
 * clears +0x59c and starts a 120-frame countdown with value 6
 * called by: game_sub_0c4e58, game_sub_0c8758, game_sub_0c97bc, game_sub_0caac0, game_sub_0cb29c, game_sub_0cb5c8,
 * game_sub_0dbf90, game_sub_0dc28c (+4 more)
 */
int set_timeout_120_mode6(int a0) {
    int iVar1;

    clear_field_59c(a0);
    *(u16 *)(0x18c + a0) = 0x78;
    iVar1 = 0x188;
    *(u32 *)(0x188 + a0) = 6;
    return iVar1;
}

/*
 * ret_const_0_0c51f4  0x8c0c51f4
 */
u32 ret_const_0_0c51f4(void) {
    return 0;
}

/*
 * get_field_d0_0c51fc  0x8c0c51fc
 * called by: CGame_GetUserGameInfo, game_sub_0c4e58, game_sub_0c6e74, game_sub_0c8134, game_sub_0c8c28,
 * game_sub_0c91f4, game_sub_0ca4e8, game_sub_0cb668 (+6 more)
 */
u32 get_field_d0_0c51fc(int a0, u32 unused_a1, u32 a2) {
    return *(u32 *)(0xd0 + a0);
}

/*
 * game_sub_0c5208  0x8c0c5208
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cfbcc
 */
int game_sub_0c5208(int a0, u32 a1) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    Class_129920_ctor(a0, a1);
    clear_field_0_wrap_015ab8(a0 + 8);
    Vec3_set_zero(a0 + 0xc);
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x18) = 0x3f800000;
    } else {
        *(u64 *)(a0 + 0x18) = CONCAT44(0x3f800000, extraout_fr1);
    }
    *(u32 *)(a0 + 0x1c) = 0;
    return a0;
}

/*
 * game_sub_0c524c  0x8c0c524c
 * area name: game code; nothing names its area yet
 */
int game_sub_0c524c(int a0, u32 a1, u32 a2) {
    Vec3_ctor_zero(a0, a1, a2);
    *(u16 *)(a0 + 0x10) = 0x78;
    return a0;
}

/*
 * game_sub_0c526c  0x8c0c526c
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c526c(u32 a0, u32 a1, u32 a2) {
    Vec3_ctor_zero(a0, a1, a2);
    set_fields_10_14(a0);
    return a0;
}

/*
 * game_sub_0c5294  0x8c0c5294
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cf39c
 */
u8 *game_sub_0c5294(int a0) {
    u8 *puVar1;

    *(float *)(a0 + 0x10) = *(float *)(a0 + 0x10) + 0.3;
    *(float *)(a0 + 4) = *(float *)(a0 + 4) + *(float *)(a0 + 0x10);
    puVar1 = &g_8c0c52f4;
    if (670.0 < *(float *)(a0 + 4)) {
        *(u32 *)(a0 + 4) = 0x44278000;
        puVar1 = (u8 *)clear_field_14_0c52fc(a0);
    }
    return puVar1;
}

/*
 * clear_field_14_0c52fc  0x8c0c52fc
 * called by: game_sub_0c5294
 */
u32 clear_field_14_0c52fc(int a0) {
    *(u32 *)(a0 + 0x14) = 0;
    return 0;
}

/*
 * set_fields_10_14  0x8c0c5304
 * stores +0x10, +0x14
 * called by: game_sub_0c526c, game_sub_0cf39c
 */
u32 set_fields_10_14(int a0) {
    *(u32 *)(a0 + 0x10) = 0;
    *(u32 *)(a0 + 0x14) = 0;
    return 0;
}

/*
 * set_fields_0_4_8_wrap  0x8c0c5314
 * only calls set_fields_0_4_8_0c5330
 * called by: game_sub_0c5340
 */
u32 set_fields_0_4_8_wrap(u32 a0) {
    set_fields_0_4_8_0c5330(a0);
    return a0;
}

/*
 * set_fields_0_4_8_0c5330  0x8c0c5330
 * stores +0x0, +0x4, +0x8
 * called by: game_sub_0ca0e0, game_sub_0ce920, set_fields_0_4_8_wrap
 */
u32 set_fields_0_4_8_0c5330(u32 *a0) {
    *a0 = 0;
    a0[1] = 3;
    a0[2] = 0xffffffff;
    return 0xffffffff;
}

/*
 * game_sub_0c5340  0x8c0c5340
 * area name: game code; nothing names its area yet
 * called by: game_sub_0bff8c
 */
u32 *game_sub_0c5340(u32 *a0, u32 a1) {
    u8 *puVar1;
    u32 uVar2;
    u32 *puVar3;

    Class_12b350_sub_0ba898(a0);
    *a0 = (&DATA_8c12b388);
    Class_12b930_ctor(a0 + 6);
    Class_12b758_ctor((int)a0 + 0x232a0);
    Class_12b580_ctor((int)a0 + 0x24898);
    Class_12b3b8_ctor((int)a0 + 0x2ccac);
    set_fields_0_4_8_wrap((int)a0 + 0x2d1b0);
    Vec3_set_zero((int)a0 + 0x2d3b0);
    Class_129920_ctor((int)a0 + 0x2d3f4, a1);
    game_sub_0ce920(a0);
    puVar1 = (&DATA_8c13cbfc);
    puVar3 = (u32 *)((int)a0 + 0x2d170);
    uVar2 = *(u32 *)((&DATA_8c13cbfc) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cbfc);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc08);
    puVar3 = (u32 *)((int)a0 + 0x2d17c);
    uVar2 = *(u32 *)((&DATA_8c13cc08) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc08);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc14);
    puVar3 = (u32 *)((int)a0 + 0x2d188);
    uVar2 = *(u32 *)((&DATA_8c13cc14) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc14);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc20);
    puVar3 = (u32 *)((int)a0 + 0x2d194);
    uVar2 = *(u32 *)((&DATA_8c13cc20) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc20);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc2c);
    puVar3 = (u32 *)((int)a0 + 0x2d1a0);
    uVar2 = *(u32 *)((&DATA_8c13cc2c) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc2c);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc38);
    puVar3 = (u32 *)((int)a0 + 0x2d1bc);
    uVar2 = *(u32 *)((&DATA_8c13cc38) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc38);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc44);
    puVar3 = (u32 *)((int)a0 + 0x2d1ec);
    uVar2 = *(u32 *)((&DATA_8c13cc44) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc44);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc50);
    puVar3 = (u32 *)((int)a0 + 0x2d21c);
    uVar2 = *(u32 *)((&DATA_8c13cc50) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc50);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc5c);
    puVar3 = (u32 *)((int)a0 + 0x2d24c);
    uVar2 = *(u32 *)((&DATA_8c13cc5c) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc5c);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc68);
    puVar3 = (u32 *)((int)a0 + 0x2d27c);
    uVar2 = *(u32 *)((&DATA_8c13cc68) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc68);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc74);
    puVar3 = (u32 *)((int)a0 + 0x2d2ac);
    uVar2 = *(u32 *)((&DATA_8c13cc74) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc74);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc80);
    puVar3 = (u32 *)((int)a0 + 0x2d2dc);
    uVar2 = *(u32 *)((&DATA_8c13cc80) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc80);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc8c);
    puVar3 = (u32 *)((int)a0 + 0x2d30c);
    uVar2 = *(u32 *)((&DATA_8c13cc8c) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc8c);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cc98);
    puVar3 = (u32 *)((int)a0 + 0x2d33c);
    uVar2 = *(u32 *)((&DATA_8c13cc98) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cc98);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cca4);
    puVar3 = (u32 *)((int)a0 + 0x2d36c);
    uVar2 = *(u32 *)((&DATA_8c13cca4) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cca4);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13ccb0);
    puVar3 = (u32 *)((int)a0 + 0x2d1c8);
    uVar2 = *(u32 *)((&DATA_8c13ccb0) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13ccb0);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13ccbc);
    puVar3 = (u32 *)((int)a0 + 0x2d1f8);
    uVar2 = *(u32 *)((&DATA_8c13ccbc) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13ccbc);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13ccc8);
    puVar3 = (u32 *)((int)a0 + 0x2d228);
    uVar2 = *(u32 *)((&DATA_8c13ccc8) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13ccc8);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13ccd4);
    puVar3 = (u32 *)((int)a0 + 0x2d258);
    uVar2 = *(u32 *)((&DATA_8c13ccd4) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13ccd4);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cce0);
    puVar3 = (u32 *)((int)a0 + 0x2d288);
    uVar2 = *(u32 *)((&DATA_8c13cce0) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cce0);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13ccec);
    puVar3 = (u32 *)((int)a0 + 0x2d2b8);
    uVar2 = *(u32 *)((&DATA_8c13ccec) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13ccec);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13ccf8);
    puVar3 = (u32 *)((int)a0 + 0x2d2e8);
    uVar2 = *(u32 *)((&DATA_8c13ccf8) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13ccf8);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd04);
    puVar3 = (u32 *)((int)a0 + 0x2d318);
    uVar2 = *(u32 *)((&DATA_8c13cd04) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd04);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd10);
    puVar3 = (u32 *)((int)a0 + 0x2d348);
    uVar2 = *(u32 *)((&DATA_8c13cd10) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd10);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd1c);
    puVar3 = (u32 *)((int)a0 + 0x2d378);
    uVar2 = *(u32 *)((&DATA_8c13cd1c) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd1c);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd28);
    puVar3 = (u32 *)((int)a0 + 0x2d1d4);
    uVar2 = *(u32 *)((&DATA_8c13cd28) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd28);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd34);
    puVar3 = (u32 *)((int)a0 + 0x2d204);
    uVar2 = *(u32 *)((&DATA_8c13cd34) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd34);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd40);
    puVar3 = (u32 *)((int)a0 + 0x2d234);
    uVar2 = *(u32 *)((&DATA_8c13cd40) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd40);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd4c);
    puVar3 = (u32 *)((int)a0 + 0x2d264);
    uVar2 = *(u32 *)((&DATA_8c13cd4c) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd4c);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd58);
    puVar3 = (u32 *)((int)a0 + 0x2d294);
    uVar2 = *(u32 *)((&DATA_8c13cd58) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd58);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd64);
    puVar3 = (u32 *)((int)a0 + 0x2d2c4);
    uVar2 = *(u32 *)((&DATA_8c13cd64) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd64);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd70);
    puVar3 = (u32 *)((int)a0 + 0x2d2f4);
    uVar2 = *(u32 *)((&DATA_8c13cd70) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd70);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd7c);
    puVar3 = (u32 *)((int)a0 + 0x2d324);
    uVar2 = *(u32 *)((&DATA_8c13cd7c) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd7c);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd88);
    puVar3 = (u32 *)((int)a0 + 0x2d354);
    uVar2 = *(u32 *)((&DATA_8c13cd88) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd88);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cd94);
    puVar3 = (u32 *)((int)a0 + 0x2d384);
    uVar2 = *(u32 *)((&DATA_8c13cd94) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cd94);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cda0);
    puVar3 = (u32 *)((int)a0 + 0x2d1e0);
    uVar2 = *(u32 *)((&DATA_8c13cda0) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cda0);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c125408);
    puVar3 = (u32 *)((int)a0 + 0x2d210);
    uVar2 = *(u32 *)((&DATA_8c125408) + 4);
    *puVar3 = *(u32 *)(&DATA_8c125408);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cdac);
    puVar3 = (u32 *)((int)a0 + 0x2d240);
    uVar2 = *(u32 *)((&DATA_8c13cdac) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cdac);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c125408);
    puVar3 = (u32 *)((int)a0 + 0x2d270);
    uVar2 = *(u32 *)((&DATA_8c125408) + 4);
    *puVar3 = *(u32 *)(&DATA_8c125408);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cdb8);
    puVar3 = (u32 *)((int)a0 + 0x2d2a0);
    uVar2 = *(u32 *)((&DATA_8c13cdb8) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cdb8);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c125408);
    puVar3 = (u32 *)((int)a0 + 0x2d2d0);
    uVar2 = *(u32 *)((&DATA_8c125408) + 4);
    *puVar3 = *(u32 *)(&DATA_8c125408);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c125408);
    puVar3 = (u32 *)((int)a0 + 0x2d300);
    uVar2 = *(u32 *)((&DATA_8c125408) + 4);
    *puVar3 = *(u32 *)(&DATA_8c125408);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c125408);
    puVar3 = (u32 *)((int)a0 + 0x2d330);
    uVar2 = *(u32 *)((&DATA_8c125408) + 4);
    *puVar3 = *(u32 *)(&DATA_8c125408);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c13cdc4);
    puVar3 = (u32 *)((int)a0 + 0x2d360);
    uVar2 = *(u32 *)((&DATA_8c13cdc4) + 4);
    *puVar3 = *(u32 *)(&DATA_8c13cdc4);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    puVar1 = (&DATA_8c125408);
    puVar3 = (u32 *)((int)a0 + 0x2d390);
    uVar2 = *(u32 *)((&DATA_8c125408) + 4);
    *puVar3 = *(u32 *)(&DATA_8c125408);
    puVar3[1] = uVar2;
    puVar3[2] = *(u32 *)(puVar1 + 8);
    a0[2] = a0 + 6;
    a0[3] = (int)a0 + 0x232a0;
    a0[4] = (int)a0 + 0x24898;
    a0[5] = (int)a0 + 0x2ccac;
    return a0;
}

/*
 * free_if_nonnull_wrap_0c58f8  0x8c0c58f8
 * called by: Class_12b388_dtor
 */
int free_if_nonnull_wrap_0c58f8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * Class_12b388_dtor  0x8c0c5928
 * stores the vtable 0x8c12b388
 * called by: game_sub_0c0368
 */
u32 *Class_12b388_dtor(u32 *a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != NULL) {
        *a0 = &g_8c12b388;
        Class_129920_dtor(a0 + 0xb4fd, 0xffffffff, a2, a3);
        object_dtor_delete(a0 + 0xb4ec, 0xffffffff, a2, a3);
        free_if_nonnull_wrap_0c58f8(a0 + 0xb46c, 0xffffffff, a2, a3);
        Class_12b3b8_dtor(a0 + 0xb32b, 0xffffffff, a2, a3);
        Class_12b580_dtor(a0 + 0x9226, 0xffffffff);
        Class_12b758_dtor(a0 + 0x8ca8, 0xffffffff);
        Class_12b930_dtor(a0 + 6, 0xffffffff);
        ar5_00 = 0;
        Class_12b36c_dtor(a0, 0, a2, a3);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * CGame_Init  0x8c0c5a04
 * called by: game_sub_0c0444
 * strings: "exit.pvm"; "GRAPHICS\\MESSAGE"; "Failed to load ExitMenu message pvm.."; "CGame::Init()"
 */
int CGame_Init(int a0, u32 a1) {
    u8 *ar6_00;
    u32 uVar1;
    u32 a7;
    int iVar2;
    u32 in_fr1;
    char cVar3;

    cVar3 = '\0';
    g_8c4369d8 = 0xff000000;
    g_8c4369d4 = 0xff000000;
    g_8c4369d0 = 0xff000000;
    g_8c4369cc = 0xff000000;
    g_8c4369e8 = 0xff000000;
    g_8c4369e4 = 0xff000000;
    g_8c4369e0 = 0xff000000;
    g_8c4369dc = 0xff000000;
    set_fields_0_4_c(0x8c436938, 0x8c43698c, &g_8c4369cc, 4);
    set_fields_0_4_c(0x8c436958, 0x8c4369ac, &g_8c4369dc, 4);
    if (cVar3 == '\0') {
        g_8c4369ec = 0;
        uVar1 = in_fr1;
    } else {
        uVar1 = 0x43f00000;
        g_8c4369ec = in_fr1;
    }
    g_8c4369f0 = 0x43f00000;
    if (cVar3 == '\0') {
        g_8c4369f8 = 0;
        g_8c436a00 = uVar1;
    } else {
        g_8c436a00 = 0x44200000;
        g_8c4369f8 = uVar1;
    }
    g_8c4369fc = 0x44200000;
    if (cVar3 == '\0') {
        g_8c436a00 = 0;
    }
    g_8c436a08 = 0x43f00000;
    g_8c436a04 = 0x44200000;
    g_8c436a18 = 0xffffff;
    g_8c436a14 = 0xffffff;
    g_8c436a10 = 0xffffff;
    g_8c436a0c = 0xffffff;
    uVar1 = 4;
    ar6_00 = &g_8c436a0c;
    g_8c4369f4 = g_8c4369f8;
    set_fields_0_4_c(0x8c436978, &g_8c4369ec, &g_8c436a0c, 4);
    set_field_10(0x8c436938, 0x20);
    set_field_10(0x8c436958, 0x20);
    set_field_10(0x8c436978, 0x60);
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(u32 *)(iVar2 * 0xc + a0 + 0x2d3c0) = 0;
    }
    a7 = 4;
    uVar1 = 0x8c4312a8;
    ptr_list_build_1c(a0 + 0x2d3ec, a0 + 0x2d3bc, 0x8c4312a8, 4);
    iVar2 = a0 + 0x2d3ec;
    (**(code **)(*(int *)(a0 + 0x2d3f4) + 8))((int *)(a0 + 0x2d3f4), iVar2, uVar1, a7);
    uVar1 = get_field_4_0253e4(a0 + 0x2d3f4, iVar2, uVar1, a7);
    iVar2 = retry_until_done_020f90(a1, "exit.pvm", "GRAPHICS\\MESSAGE", uVar1);
    if (iVar2 == -1) {
        iVar2 = report_error_message("Failed to load ExitMenu message pvm..", "CGame::Init()", 0, 2);
    }
    return iVar2;
}

/*
 * Class_12b388_m1_0c5c08  0x8c0c5c08
 */
u32 Class_12b388_m1_0c5c08(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int ar5_00;

    ar5_00 = a1;
    iVar1 = pure_virtual_stub();
    uVar2 = identity(0x8c3dd7dc, ar5_00, a2, a3);
    iVar3 = Class_12b388_sub_01ad88(uVar2);
    iVar4 = 1;
    if ((((iVar3 == 1) || (iVar4 = game_sub_0ffff4(*(u32 *)(0x7cc + a1), ar5_00, a2, a3), iVar4 != 1)) ||
         (iVar4 = *(int *)(0x2d164 + a0), iVar4 != 0)) &&
        (iVar1 != 0)) {
        return iVar4;
    }
    uVar2 = Class_12b388_sub_0c5cb4(a0, a1, a2, a3);
    return uVar2;
}

/*
 * Class_12b388_sub_0c5cb4  0x8c0c5cb4
 * area name: only called from Class_12b388 methods
 * called by: Class_12b388_m1_0c5c08
 */
u32 Class_12b388_sub_0c5cb4(u32 a0, int a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 ar5_00;
    int ar5_01;
    u32 in_stack_ffffffe8;
    int aiStack_10[2];

    aiStack_10[0] = 0;
    ar5_00 = 0;
    game_sub_0c412c(&g_8c2b5628, 0, a2);
    Class_129808_draw(0x8c431294, ar5_00, a2, a3);
    uVar1 = 0x8c35468c;
    game_sub_0f8134(0x8c35468c, ar5_00, a2, a3);
    ninja_sub_2565c4(uVar1, ar5_00, a2, a3, in_stack_ffffffe8);
    set_g_8c277ae8(0, ar5_00, a2, a3, in_stack_ffffffe8);
    CItemGLoader_sub_0fef10(*(u32 *)(a1 + 2000), ar5_00, a2, a3);
    aiStack_10[0] = game_sub_0c5db0(*(u32 *)(a1 + 0x7cc));
    if (aiStack_10[0] != 0) {
        ar5_00 = 1;
        game_sub_0d1b90(aiStack_10, 1, a2, a3);
    }
    sh4_sub_0b936c(a1);
    uVar1 = a0;
    ar5_01 = a1;
    game_sub_0c75f4(a0, a1, a2, a3);
    game_sub_0f7ea0(uVar1, ar5_01, a2, a3);
    game_sub_0ce920(a0);
    *(int *)(a1 + 0x7e0) = *(int *)(a1 + 0x7e0) + 1;
    *(u32 *)(a1 + 0x7dc) = 0;
    return 0x7dc;
}

/*
 * game_sub_0c5db0  0x8c0c5db0
 * area name: game code; nothing names its area yet
 * called by: Class_12b388_sub_0c5cb4, game_sub_0cdf50
 */
u32 game_sub_0c5db0(int a0) {
    u32 uVar1;

    uVar1 = game_sub_0c5dd8(a0 + 0xd8);
    return uVar1;
}

/*
 * game_sub_0c5dd8  0x8c0c5dd8
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c5db0
 */
u32 game_sub_0c5dd8(int a0) {
    u32 uVar1;

    uVar1 = *(u32 *)(a0 + 4);
    *(u32 *)(a0 + 4) = 0;
    return uVar1;
}

/*
 * CGame_GetUserGameInfo  0x8c0c5de8
 * called by: game_sub_0c6e74, game_sub_0c76d0
 * strings: "wtNumberOfItems is over..CGame::GetUserGameInfo"; "stNumberOfItems is over..CGame::GetUserGameInfo"
 */
u32 CGame_GetUserGameInfo(int a0, int a1, int a2, u8 *a3) {
    u8 bVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    u8 *puVar6;
    u8 *puVar7;
    code *ar7_00;
    int iVar8;
    int iVar9;
    u8 *puVar10;
    u64 in_dr0;
    u64 uVar11;
    char cVar12;
    u32 uStack_44;
    u32 uStack_40;
    u8 bStack_28;

    cVar12 = '\0';
    puVar6 = a3 + 0x14;
    iVar9 = a2;
    puVar7 = a3;
    rtc_get_date_wrap(a1, puVar6, a2, a3);
    *(u16 *)(a3 + 0x1e) = *(u16 *)(a1 + 0x96);
    *(u16 *)(a3 + 0x20) = *(u16 *)(a1 + 0x98);
    *(u16 *)(a3 + 0x22) = *(u16 *)(a1 + 0x9a);
    *(u16 *)(a3 + 0x24) = *(u16 *)(a1 + 0x9c);
    *(u16 *)(a3 + 0x26) = *(u16 *)(a1 + 0x9e);
    uVar2 = get_field_a2_s16(a1, puVar6);
    *(short *)(a3 + 0x28) = (short)uVar2;
    for (iVar8 = 0; iVar8 < 8; iVar8 = iVar8 + 1) {
        a3[iVar8 + 0x2a] = *(u8 *)(a1 + iVar8 + 4);
    }
    for (iVar8 = 0; iVar8 < 3; iVar8 = iVar8 + 1) {
        iVar9 = iVar8 * 10 + a1;
        *(u16 *)(a3 + iVar8 * 10 + 0x32) = *(u16 *)(iVar9 + 0xc);
        *(u16 *)(a3 + iVar8 * 10 + 0x34) = *(u16 *)(iVar9 + 0xe);
        *(u16 *)(a3 + iVar8 * 10 + 0x36) = *(u16 *)(iVar9 + 0x10);
        *(u16 *)(a3 + iVar8 * 10 + 0x38) = *(u16 *)(iVar9 + 0x12);
        *(u16 *)(a3 + iVar8 * 10 + 0x3a) = *(u16 *)(iVar9 + 0x14);
        iVar9 = a1;
    }
    ar7_00 = game_sub_0b9f5c;
    game_sub_0b9f5c(a3 + 0x50, a1 + 0x2c);
    puVar6 = (u8 *)0xa8;
    puVar7 = (u8 *)(u32) * (u8 *)(a1 + 0xa0);
    a3[0xa8] = *(u8 *)(a1 + 0xa0);
    uVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), puVar7, 0xa8);
    *(u32 *)(a3 + 0xac) = uVar2;
    if (a2 == 0) {
        *(u32 *)(a3 + 200) = 0xffffffff;
    } else {
        puVar7 = a3 + 0xb0;
        (**(code **)(*(int *)(a2 + 8) + 0x158))(a2, puVar7, puVar6, ar7_00);
    }
    for (iVar9 = 0; iVar9 < 0x14; iVar9 = iVar9 + 1) {
        *(u32 *)(a3 + iVar9 * 0xf0 + 0x204) = 0xffffffff;
    }
    for (iVar9 = 0; iVar9 < 0x14; iVar9 = iVar9 + 1) {
        puVar6 = (u8 *)0xffffffff;
        *(u32 *)(a3 + iVar9 * 0xf0 + 0x14dc) = 0xffffffff;
    }
    for (iVar9 = 0; iVar9 < 10; iVar9 = iVar9 + 1) {
        *(u32 *)(a3 + iVar9 * 0xf0 + 0x27ac) = 0xffffffff;
    }
    if ((u8)a3[0xa8] < 3) {
        uVar2 = (**(code **)(**(int **)(a0 + 8) + 0x118))(*(int **)(a0 + 8), puVar7, puVar6, ar7_00);
        a3[0x1b4] = (char)uVar2;
        (**(code **)(**(int **)(a0 + 8) + 0x178))(*(int **)(a0 + 8), puVar7, puVar6, ar7_00);
        if (cVar12 == '\0') {
            *(int *)(a3 + 0x1a0) = (int)((u64)in_dr0 >> 0x20);
        } else {
            *(u64 *)(a3 + 0x1a0) = in_dr0;
        }
        (**(code **)(**(int **)(a0 + 8) + 0x17c))(*(int **)(a0 + 8), puVar7, puVar6, ar7_00);
        uStack_40 = (u32)in_dr0;
        uVar2 = (u32)((u64)in_dr0 >> 0x20);
        if (cVar12 == '\0') {
            *(u32 *)(a3 + 0x1b0) = uVar2;
            uStack_40 = uVar2;
        } else {
            *(u64 *)(a3 + 0x1b0) = in_dr0;
        }
        (**(code **)(**(int **)(a0 + 8) + 0x188))(*(int **)(a0 + 8), puVar7, puVar6, ar7_00);
        uVar2 = (u32)((u64)in_dr0 >> 0x20);
        uStack_44 = (int)in_dr0;
        if (cVar12 == '\0') {
            uStack_44 = uVar2;
            uVar2 = uStack_40;
        }
        uStack_40 = uVar2;
        puVar7 = (u8 *)0x1a4;
        if (cVar12 == '\0') {
            in_dr0 = CONCAT44(uStack_44, (int)in_dr0);
            *(u32 *)(a3 + 0x1a4) = uStack_44;
        } else {
            in_dr0 = CONCAT44(uStack_40, uStack_44);
            *(u64 *)(a3 + 0x1a4) = in_dr0;
        }
        uVar2 = (**(code **)(**(int **)(a0 + 8) + 0x18c))(*(int **)(a0 + 8), 0x1a4, puVar6, ar7_00);
        *(u32 *)(a3 + 0x1b8) = uVar2;
        ar7_00 = NULL;
        for (puVar10 = NULL; (int)puVar10 < 3; puVar10 = puVar10 + 1) {
            puVar7 = puVar10;
            iVar9 = (**(code **)(**(int **)(a0 + 8) + 0x104))(*(int **)(a0 + 8), puVar10, puVar6, ar7_00);
            if (puVar10 == NULL) {
                if (cVar12 == '\0') {
                    *(u32 *)(a3 + 0x1bc) = 0x446a56b8;
                    *(u32 *)(a3 + 0x1c0) = 0x43340000;
                    in_dr0 = CONCAT44(0x43557405, (int)in_dr0);
                    *(u32 *)(a3 + 0x1c4) = 0x43557405;
                } else {
                    *(u64 *)(a3 + 0x1bc) = 0x1c0446a56b8;
                    *(u64 *)(a3 + 0x1c0) = 0x1c443340000;
                    in_dr0 = 0x54fb1feb43557405;
                    *(u64 *)(a3 + 0x1c4) = 0x54fb1feb43557405;
                }
            } else {
                if (cVar12 == '\0') {
                    uVar2 = *(u32 *)(iVar9 + 4);
                    uVar11 = CONCAT44(uVar2, (int)in_dr0);
                    *(u32 *)(a3 + (int)puVar10 * 0x10 + 0x1bc) = uVar2;
                } else {
                    uVar11 = *(u64 *)(iVar9 + 4);
                    *(u64 *)(a3 + (int)puVar10 * 0x10 + 0x1bc) = uVar11;
                }
                if (cVar12 == '\0') {
                    uVar2 = *(u32 *)(iVar9 + 8);
                    uVar11 = CONCAT44(uVar2, (int)uVar11);
                    *(u32 *)(a3 + (int)puVar10 * 0x10 + 0x1c0) = uVar2;
                } else {
                    uVar11 = *(u64 *)(iVar9 + 8);
                    *(u64 *)(a3 + (int)puVar10 * 0x10 + 0x1c0) = uVar11;
                }
                if (cVar12 == '\0') {
                    uVar2 = *(u32 *)(iVar9 + 0xc);
                    in_dr0 = CONCAT44(uVar2, (int)uVar11);
                    *(u32 *)(a3 + (int)puVar10 * 0x10 + 0x1c4) = uVar2;
                } else {
                    in_dr0 = *(u64 *)(iVar9 + 0xc);
                    *(u64 *)(a3 + (int)puVar10 * 0x10 + 0x1c4) = in_dr0;
                }
            }
        }
        if (0x19 < (u8)a3[0x1b4]) {
            ar7_00 = (code *)0x2;
            puVar6 = (u8 *)0x1;
            puVar7 = &g_8c13d092;
            report_error_message("wtNumberOfItems is over..CGame::GetUserGameInfo", &g_8c13d092, 1, 2);
        }
        (**(code **)(**(int **)(a0 + 8) + 0x198))(*(int **)(a0 + 8), puVar7, puVar6, ar7_00);
        if ((int)((u32)bStack_28 << 0x1f) < 0) {
            *(u32 *)(a3 + 0x1a8) = 1;
        } else {
            *(u32 *)(a3 + 0x1a8) = 0;
        }
        if ((int)((u32)bStack_28 << 0x1e) < 0) {
            *(u32 *)(a3 + 0x1ac) = 1;
        } else {
            *(u32 *)(a3 + 0x1ac) = 0;
        }
        bVar1 = a3[0x1b4];
        iVar9 = 0;
        for (puVar10 = NULL; (int)puVar10 < (int)(u32)bVar1; puVar10 = puVar10 + 1) {
            puVar7 = puVar10;
            iVar8 = (**(code **)(**(int **)(a0 + 8) + 0xfc))(*(int **)(a0 + 8), puVar10, puVar6, ar7_00);
            iVar5 = get_field_24_05c284(iVar8, puVar7);
            iVar4 = CGame_sub_0c4c84(iVar8, puVar7, puVar6, ar7_00);
            if (((iVar4 == 1) || (iVar5 == 10)) || (iVar5 == 0xd)) {
                a3[0x1b4] = a3[0x1b4] + -1;
            } else {
                puVar7 = a3 + iVar9 * 0xf0 + 0x1ec;
                (**(code **)(*(int *)(iVar8 + 8) + 0x158))(iVar8, puVar7, puVar6, ar7_00);
                iVar9 = iVar9 + 1;
            }
        }
        uVar2 = (**(code **)(**(int **)(a0 + 8) + 0x148))(*(int **)(a0 + 8), puVar7, puVar6, ar7_00);
        puVar7 = a3 + 0x14ac;
        CGame_sub_0e9898(uVar2, puVar7);
    } else {
        uVar2 = (**(code **)(**(int **)(a0 + 0x10) + 0x118))(*(int **)(a0 + 0x10), puVar7, puVar6, ar7_00);
        a3[0x2790] = (char)uVar2;
        uVar2 = (**(code **)(**(int **)(a0 + 0x10) + 0x140))(*(int **)(a0 + 0x10), puVar7, puVar6, ar7_00);
        *(u32 *)(a3 + 0x278c) = uVar2;
        bVar1 = a3[0x2790];
        iVar9 = 0;
        for (iVar8 = 0; iVar8 < (int)(u32)bVar1; iVar8 = iVar8 + 1) {
            iVar5 = iVar8;
            iVar4 = (**(code **)(**(int **)(a0 + 0x10) + 0xfc))(*(int **)(a0 + 0x10), iVar8, puVar6, ar7_00);
            iVar3 = get_field_24_05c284(iVar4, iVar5);
            iVar5 = CGame_sub_0c4c84(iVar4, iVar5, puVar6, ar7_00);
            if (((iVar5 == 1) || (iVar3 == 10)) || (iVar3 == 0xd)) {
                a3[0x2790] = a3[0x2790] + -1;
                puVar7 = NULL;
                puVar6 = a3;
            } else {
                puVar7 = a3 + iVar9 * 0xf0 + 0x2794;
                (**(code **)(*(int *)(iVar4 + 8) + 0x158))(iVar4, puVar7, puVar6, ar7_00);
                iVar9 = iVar9 + 1;
            }
        }
    }
    uVar2 = (**(code **)(**(int **)(a0 + 0xc) + 0x118))(*(int **)(a0 + 0xc), puVar7, puVar6, ar7_00);
    a3[0x14c0] = (char)uVar2;
    (**(code **)(**(int **)(a0 + 0xc) + 0x188))(*(int **)(a0 + 0xc), puVar7, puVar6, ar7_00);
    if (cVar12 == '\0') {
        *(int *)(a3 + 0x14bc) = (int)((u64)in_dr0 >> 0x20);
    } else {
        *(u64 *)(a3 + 0x14bc) = in_dr0;
    }
    if (0x19 < (u8)a3[0x14c0]) {
        ar7_00 = (code *)0x2;
        puVar6 = (u8 *)0x1;
        puVar7 = &g_8c13d092;
        report_error_message("stNumberOfItems is over..CGame::GetUserGameInfo", &g_8c13d092, 1, 2);
    }
    (**(code **)(**(int **)(a0 + 0xc) + 0x198))(*(int **)(a0 + 0xc), puVar7, puVar6, ar7_00);
    if ((int)((u32)bStack_28 << 0x1e) < 0) {
        *(u32 *)(a3 + 0x14b4) = 1;
    }
    if ((int)((u32)bStack_28 << 0x1f) < 0) {
        *(u32 *)(a3 + 0x14b8) = 1;
    }
    bVar1 = a3[0x14c0];
    iVar8 = 0;
    for (iVar9 = 0; iVar9 < (int)(u32)bVar1; iVar9 = iVar9 + 1) {
        iVar5 = iVar9;
        iVar4 = (**(code **)(**(int **)(a0 + 0xc) + 0xfc))(*(int **)(a0 + 0xc), iVar9, puVar6, ar7_00);
        iVar5 = CGame_sub_0c4c84(iVar4, iVar5, puVar6, ar7_00);
        if (iVar5 == 1) {
            a3[0x14c0] = a3[0x14c0] + -1;
            puVar7 = a3;
        } else {
            puVar7 = a3 + iVar8 * 0xf0 + 0x14c4;
            (**(code **)(*(int *)(iVar4 + 8) + 0x158))(iVar4, puVar7, puVar6, ar7_00);
            iVar8 = iVar8 + 1;
        }
    }
    uVar2 = (**(code **)(**(int **)(a0 + 0xc) + 0x148))(*(int **)(a0 + 0xc), puVar7, puVar6, ar7_00);
    CGame_sub_0e9898(uVar2, a3 + 0x2784);
    puVar7 = a3 + 0x30f4;
    memmove_wrap_0fa310(0x8c35468c, puVar7);
    uVar2 = field_ptr_384c(0x8c3dd7dc);
    uVar2 = CGame_sub_01e04c(uVar2, a3 + 0x4104);
    return uVar2;
}

/*
 * ret_const_0_0c67dc  0x8c0c67dc
 */
u32 ret_const_0_0c67dc(void) {
    return 0;
}

/*
 * ret_const_0_0c67e4  0x8c0c67e4
 */
u32 ret_const_0_0c67e4(void) {
    return 0;
}

/*
 * ret_const_0_0c67ec  0x8c0c67ec
 */
u32 ret_const_0_0c67ec(void) {
    return 0;
}

/*
 * game_sub_0c67f4  0x8c0c67f4
 * area name: game code; nothing names its area yet
 * called by: CSeamanDomain_sub_0c1d98
 */
u32 game_sub_0c67f4(u32 unused_a0, u32 unused_a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int ar6_00;
    int iVar3;

    ar6_00 = a2;
    rtc_get_date_wrap(unused_a1, a2 + 0x14, a2, a3);
    iVar2 = a2 + 0x1e;
    rtc_get_date_wrap(unused_a1, iVar2, ar6_00, a3);
    *(u16 *)(a2 + 0x28) = 0;
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        *(u8 *)(a2 + iVar3 + 0x2a) = 0;
    }
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
        *(u16 *)(iVar3 * 10 + a2 + 0x32) = 0;
        *(u8 *)(iVar3 * 10 + a2 + 0x34) = 0;
        *(u8 *)(iVar3 * 10 + a2 + 0x35) = 0;
        *(u8 *)(iVar3 * 10 + a2 + 0x36) = 0;
        *(u8 *)(iVar3 * 10 + a2 + 0x37) = 0;
        *(u8 *)(iVar3 * 10 + a2 + 0x38) = 0;
    }
    *(u8 *)(a2 + 0x50) = 0;
    for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
        *(u32 *)(a2 + iVar3 * 4 + 0x54) = 0;
    }
    for (iVar3 = 0; iVar3 < 0x3e; iVar3 = iVar3 + 1) {
        *(u8 *)(a2 + iVar3 + 0x68) = 0;
    }
    *(u8 *)(0xa8 + a2) = g_8c436548;
    *(u32 *)(0xac + a2) = 0;
    *(u32 *)(0xc8 + a2) = 0xffffffff;
    for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {
        *(u32 *)(0x204 + iVar3 * 0xf0 + a2) = 0xffffffff;
    }
    for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {
        *(u32 *)(0x14dc + iVar3 * 0xf0 + a2) = 0xffffffff;
    }
    for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
        *(u32 *)(0x27ac + iVar3 * 0xf0 + a2) = 0xffffffff;
    }
    game_sub_0d1d54(a2, iVar2, ar6_00, a3);
    game_sub_0e98f8(a2 + 0x14ac);
    game_sub_0d1eb8(a2);
    game_sub_0e98f8(a2 + 0x2784);
    game_sub_0d1f38(a2);
    iVar2 = a2 + 0x30f4;
    speech_sub_0fa2f0(0x8c35468c, iVar2);
    uVar1 = field_ptr_384c(0x8c3dd7dc);
    uVar1 = game_sub_01e028(uVar1, a2 + 0x4104);
    return uVar1;
}

/*
 * ret_const_1_0c6a44  0x8c0c6a44
 */
u32 ret_const_1_0c6a44(void) {
    return 1;
}

/*
 * game_sub_0c6a4c  0x8c0c6a4c
 * area name: game code; nothing names its area yet
 * called by: CSeamanDomain_sub_0c1d98
 */
u32 game_sub_0c6a4c(u32 unused_a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int ar4_00;
    int iVar2;
    float fVar3;
    double dVar4;
    u8 uVar5;
    char cVar6;
    char cVar7;

    cVar7 = '\0';
    cVar6 = '\0';
    ar4_00 = a1;
    Class_12a990_sub_09d644(a1, a1, a2, a3);
    for (iVar2 = 1; iVar2 < 0xc; iVar2 = iVar2 + 1) {
        *(u32 *)(iVar2 * 0x80 + a1) = 0xf;
        iVar1 = rand();
        ar4_00 = a1 + iVar2 * 0x80;
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(0x47000000, (float)iVar1);
        } else {
            dVar4 = 512.0001354217529;
        }
        if (cVar6 == '\0') {
            fVar3 = SUB84(dVar4, 0) / (float)((u64)dVar4 >> 0x20);
        } else {
            fVar3 = SUB84(dVar4 / dVar4, 0);
        }
        if (cVar7 == '\0') {
            dVar4 = (double)CONCAT44(0x40800000, fVar3);
        } else {
            dVar4 = 2.9939312000558264e-78;
        }
        if (cVar6 == '\0') {
            uVar5 = (u8)(int)(SUB84(dVar4, 0) * (float)((u64)dVar4 >> 0x20));
        } else {
            uVar5 = (u8)(int)(dVar4 * dVar4);
        }
        *(u8 *)(ar4_00 + 0x6c) = uVar5;
    }
    return 0xc;
}

/*
 * CGame_Initial  0x8c0c6ac8
 * strings: "GRAPHICS\\COMMON"; "MUNZU_HAND"; "GRAPHICS\\COMMON"; "Failed to load munzu hand" ...
 */
u32 CGame_Initial(int a0, int *a1, u32 unused_a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    u8 *ar4_00;
    u32 uVar4;
    u8 **ar5_00;
    u32 uVar5;
    char *ar6_00;
    u32 in_stack_ffffffcc;

    uVar5 = 1;
    uVar4 = 0xffffffff;
    CGame_sub_0c3e78(&g_8c2b5628, 0xffffffff, 1);
    iVar3 = *(int *)(a0 + 0x2d3a0);
    if ((iVar3 < 5) && (-1 < iVar3)) {
        switch (iVar3) {
        case 0:
            iVar3 = a1[499];
            CGame_sub_1011e0(iVar3, uVar4, uVar5, a3);
            CGame_sub_0242e8();
            g_8c431a54 = 0;
            g_8c13bcc4 = 1;
            g_8c436924 = 0;
            g_8c436928 = 0;
            set_field_0_015ad4(0x8c43690c, &g_8c1622a4, uVar5);
            ar5_00 = &PTR_PTR_8c146440;
            Class_129920_m0_015248(0x8c43691c, &PTR_PTR_8c146440, uVar5, a3);
            uVar4 = get_field_4_0253e4(0x8c43691c, ar5_00, uVar5, a3);
            ar6_00 = "GRAPHICS\\COMMON";
            iVar3 = retry_until_done_020e80(0x8c3eb334, "MUNZU_HAND", "GRAPHICS\\COMMON", uVar4);
            if (iVar3 == 0) {
                uVar4 = 2;
                ar6_00 = NULL;
                report_error_message("Failed to load munzu hand", "CGame::Initial()", 0, 2);
            }
            uVar5 = 0;
            ar4_00 = &g_8c2b5628;
            set_field_380_u16(&g_8c2b5628, 0);
            CGame_sub_06a524();
            *(u32 *)(a0 + 0x2d3a0) = 1;
            break;
        case 1:
            uVar1 = get_field_a510_01f538(0x8c3dd7dc);
            iVar3 = CGame_sub_0b7920(uVar1, uVar4, uVar5);
            if (iVar3 == 1) {
                uVar1 = game_sub_0b76d8(uVar1, uVar4, uVar5, a3);
                iVar3 = CGame_sub_0b787c(uVar1);
                if (iVar3 == 1) {
                    g_8c43711c = *a1;
                    *(u32 *)(a0 + 0x2d3a0) = 2;
                }
            }
            break;
        case 2:
            if (3 < (u32)(*a1 - g_8c43711c)) {
                *(u32 *)(a0 + 0x2d3a0) = 3;
            }
            break;
        case 3:
            iVar3 = save_files_check("SM2000US.USR", 0x8c431a68, 0x4208);
            iVar2 = save_files_check("SM2000US.INC", 0x8c435c7c, 0x600);
            if ((iVar3 == 0) && (iVar2 == 0)) {
                uVar4 = 0x8c431a68;
                CGame_sub_0cc784(a0, a1, 0x8c431a68, a3);
                (**(code **)(**(int **)(a0 + 0x14) + 0xc0))(*(int **)(a0 + 0x14), 0x8c435c7c, uVar4, a3);
                *(u32 *)(a0 + 0x2d3a0) = 4;
            } else {
                *(u32 *)(a0 + 0x2d3a0) = 1;
            }
            break;
        case 4:
            set_g_8c277ae8(game_sub_0d1c3c, uVar4, uVar5, a3, in_stack_ffffffcc);
            sh4_tmu_wrap();
            *(u32 *)(a0 + 0x2d15c) = 1;
            *(u32 *)(a0 + 0x2d3a0) = 0;
        }
    }
    return 1;
}

/*
 * ret_const_1_0c6d68  0x8c0c6d68
 */
u32 ret_const_1_0c6d68(void) {
    return 1;
}

/*
 * game_sub_0c6d70  0x8c0c6d70
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c6d70(int a0, int a1, u32 unused_a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int ar4_00;
    int ar5_00;

    ar4_00 = a0;
    ar5_00 = a1;
    iVar1 = pure_virtual_stub();
    if (iVar1 == 0) {
        uVar2 = game_sub_0b76d8(ar4_00, ar5_00, unused_a2, a3);
        *(u32 *)(0x2d16c + a0) = uVar2;
        if (*(int *)(0x2d16c + a0) == 0) {
            uVar2 = game_sub_0b77a0(a1 + 0x96, ar5_00, unused_a2, a3);
            *(u32 *)(0x2d168 + a0) = uVar2;
        }
        game_sub_0d1c14((u32) * (u8 *)(0xa0 + a1), ar5_00);
        pure_virtual_stub();
        *(u32 *)(0x2d15c + a0) = 2;
    }
    return 1;
}

/*
 * game_sub_0c6e74  0x8c0c6e74
 * name hint from a string it uses: SEAMAN; area name: game code; nothing names its area yet
 * strings: "Seaman User Data"; "SM2000US.USR"; "Seaman User Data"
 */
u32 game_sub_0c6e74(int a0, int a1, u32 a2, char *a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    u32 uVar4;
    u32 ar5_00;
    u32 uVar5;
    u32 extraout_fr1;
    char cVar6;
    u8 auStack_38[16];
    u8 auStack_28[20];

    cVar6 = '\0';
    iVar2 = a1;
    Vec3_ctor_zero(auStack_28, a1, a2);
    Vec3_ctor_zero(auStack_38, iVar2, a2);
    uVar5 = 1;
    if (g_8c437124 == '\0') {
        if (cVar6 == '\0') {
            g_8c437120 = g_8c437120 & 0xffffffff00000000;
        } else {
            g_8c437120 = (u64)extraout_fr1;
        }
        g_8c437120 = CONCAT14(1, g_8c437120);
    }
    if (g_8c43712c == '\0') {
        if (cVar6 == '\0') {
            g_8c437128 = g_8c437128 & 0xffffffff00000000;
        } else {
            g_8c437128 = (u64)extraout_fr1;
        }
        g_8c437128 = CONCAT14(1, g_8c437128);
    }
    ar5_00 = 0x7d4;
    *(u32 *)(a1 + 0x7d4) = *(u32 *)(a0 + 0x2d160);
    piVar3 = (int *)(u32) * (u8 *)(a1 + 0xa0);
    game_sub_0d1c14(piVar3, 0x7d4);
    if (*(int *)(a0 + 0x2d160) != 0) {
        if (*(int *)(a0 + 0x2d160) == 1) {
            pure_virtual_stub();
        }
        goto LAB_8c0c7340;
    }
    if (*(int *)(a1 + 0x84) == 0) {
        if ((*(int *)(a1 + 0x88) != 0) && (*(int *)(a1 + 0x88) != 1)) {
            piVar3 = *(int **)(a1 + 0x84);
            CGame_sub_0b7920(piVar3, ar5_00, a2);
            uVar4 = game_sub_0b76d8(piVar3, ar5_00, a2, a3);
            *(u32 *)(a0 + 0x2d16c) = uVar4;
            if (*(int *)(a0 + 0x2d16c) == 0) {
                piVar3 = (int *)(a1 + 0x96);
                uVar4 = game_sub_0b77a0(piVar3, ar5_00, a2, a3);
                *(u32 *)(a0 + 0x2d168) = uVar4;
            }
        }
        if (*(int *)(a1 + 0x88) != 0) {
            iVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
            ar5_00 = (u32) * (u8 *)(a1 + 0xa0);
            piVar3 = *(int **)(a0 + iVar2 * 4 + 8);
            (**(code **)(*piVar3 + 0xa8))(piVar3, ar5_00, a2, a3);
        }
        if (*(int *)(a0 + 0x2d168) == 0) {
            game_sub_0b79f0(piVar3, ar5_00, a2, a3);
            a3 = &g_8c13d092;
            a2 = 0;
            game_sub_0c2efc(&g_8c2b5628, 5, 0, &g_8c13d092);
            goto LAB_8c0c7340;
        }
        if (*(int *)(a0 + 0x2d16c) != 0) {
            game_sub_0b79f0(piVar3, ar5_00, a2, a3);
            CGame_sub_0b787c(*(u32 *)(a0 + 0x2d16c));
            goto LAB_8c0c7340;
        }
        iVar2 = game_sub_1000c8(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
        if ((((iVar2 == 1) && (*(int *)(a0 + 0x2d164) == 0)) && (g_8c13bcc4 == 1)) && (*(int *)(a0 + 0x2d39c) == 0)) {
            iVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
            piVar3 = *(int **)(a0 + iVar2 * 4 + 8);
            (**(code **)(*piVar3 + 0xa4))(piVar3, (u32) * (u8 *)(a1 + 0xa0), a2, a3);
            *(u32 *)(a0 + 0x2d164) = 1;
        }
        if (*(int *)(a0 + 0x2d164) == 1) {
            iVar2 = a1;
            iVar1 = game_sub_0c76d0(a0, a1);
            if (iVar1 == 1) {
                iVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), iVar2, a2);
                piVar3 = *(int **)(a0 + iVar2 * 4 + 8);
                (**(code **)(*piVar3 + 0xa8))(piVar3, (u32) * (u8 *)(a1 + 0xa0), a2, a3);
                *(u32 *)(a0 + 0x2d164) = 0;
            } else if (iVar1 == 0) {
                uVar5 = 0;
            }
        } else {
            iVar2 = a1;
            pure_virtual_stub();
            if ((g_8c436924 == 1) && (g_8c13bcc4 == 1)) {
                iVar1 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), iVar2, a2);
                if (iVar1 == 0) {
                    iVar1 = get_field_d4_0c7424(*(u32 *)(a1 + 0x7cc), iVar2);
                }
                CGame_GetUserGameInfo(a0, a1, iVar1, 0x8c431a68);
                a3 = "Seaman User Data";
                a2 = 0x4208;
                iVar2 = game_sub_0b6c3c("SM2000US.USR", 0x8c431a68, 0x4208, "Seaman User Data");
                if (iVar2 == 0) {
                    g_8c436924 = 0;
                }
            }
        }
    } else {
        if (*(int *)(a1 + 0x88) == 0) {
            iVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
            ar5_00 = (u32) * (u8 *)(a1 + 0xa0);
            piVar3 = *(int **)(a0 + iVar2 * 4 + 8);
            (**(code **)(*piVar3 + 0xa4))(piVar3, ar5_00, a2, a3);
        }
        uVar4 = 0x8c35468c;
        speech_stop(0x8c35468c, ar5_00, a2, a3);
        game_sub_0b79f0(uVar4, ar5_00, a2, a3);
        CGame_sub_0b7920(*(u32 *)(a1 + 0x84), ar5_00, a2);
    }
    uVar4 = 2;
    game_sub_0c412c(&g_8c2b5628, 2, a2);
    game_sub_0c42b0(&g_8c2b5628);
LAB_8c0c7340:
    iVar2 = a0;
    iVar1 = a1;
    pure_virtual_stub();
    game_sub_0d1c84(iVar2, iVar1, a2, a3);
    CItemGLoader_sub_0fedf4(*(u32 *)(a1 + 2000), 0x8c3eb334, a2, a3);
    if (*(u8 *)(a1 + 0xa0) < *(u8 *)(a1 + 0xa1)) {
        *(u32 *)(a0 + 0x2d160) = 1;
        *(u32 *)(a0 + 0x2d15c) = 1;
        *(u8 *)(a1 + 0xa1) = g_8c436548;
    }
    Vec3_dtor(auStack_38, 0xffffffff, a2, a3);
    Vec3_dtor(auStack_28, 0xffffffff, a2, a3);
    return uVar5;
}

/*
 * get_field_d4_0c7424  0x8c0c7424
 * called by: game_sub_0c6e74, game_sub_0c76d0, game_sub_0c8134, game_sub_0c91f4, game_sub_0ca4e8
 */
u32 get_field_d4_0c7424(int a0, u32 a1) {
    return *(u32 *)(0xd4 + a0);
}

/*
 * noop_0c7430  0x8c0c7430
 */
u32 noop_0c7430(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0c7434  0x8c0c7434
 */
u32 noop_0c7434(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0c7438  0x8c0c7438
 * area name: game code; nothing names its area yet
 * strings: "SM2000US.USR"; "SM2000US._VM"
 */
u32 game_sub_0c7438(int a0, int a1, u8 *a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    u32 ar4_00;
    int ar4_01;
    u8 *puVar3;
    u8 auStack_24[24];

    uVar1 = identity(0x8c3dd7dc, a1, a2, a3);
    if (*(int *)(0x2d160 + a0) == 1) {
        puVar3 = "SM2000US.USR";
        ar4_00 = uVar1;
        iVar2 = game_sub_01bba0(uVar1, puVar3, a2, a3);
        if (iVar2 != 0) {
            a2 = auStack_24;
            puVar3 = "SM2000US._VM";
            iVar2 = CSeamanDomain_sub_01bc2c(uVar1, puVar3, a2, a3);
            ar4_00 = uVar1;
            if (iVar2 != 4) {
                ar4_01 = a1 + 0x96;
                iVar2 = game_sub_0b7804(ar4_01, puVar3, a2, a3);
                if (iVar2 == 0) {
                    game_sub_0b79f0(ar4_01, puVar3, a2, a3);
                    puVar3 = (&DATA_8c13d004) + 0x8e;
                    uVar1 = 0;
                    game_sub_0c2efc(0x8c2b5628, 5, 0, puVar3);
                    pure_virtual_stub();
                    return 1;
                }
                goto LAB_8c0c755a;
            }
        }
        game_sub_0b79f0(ar4_00, puVar3, a2, a3);
        puVar3 = (&DATA_8c13d004) + 0x8e;
        uVar1 = 0;
        game_sub_0c2efc(0x8c2b5628, 5, 0, puVar3);
        pure_virtual_stub();
    } else {
    LAB_8c0c755a:
        pure_virtual_stub();
    }
    return 1;
}

/*
 * game_sub_0c75f4  0x8c0c75f4
 * area name: game code; nothing names its area yet
 * called by: Class_12b388_sub_0c5cb4
 */
u32 game_sub_0c75f4(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int *piVar2;
    u32 a5;

    iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(0x7cc + a1), a1, a2, a3);
    a5 = (u32) * (u8 *)(0xa0 + a1);
    piVar2 = *(int **)(a0 + iVar1 * 4 + 8);
    (**(code **)(*piVar2 + 0x78))(piVar2, a5, a2, a3);
    if ((*(int *)(0x2d15c + a0) != 0) && (*(int *)(0x2d15c + a0) != 1)) {
        iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(0x7cc + a1), a5, a2, a3);
        piVar2 = *(int **)(a0 + iVar1 * 4 + 8);
        (**(code **)(0x9c + *piVar2))(piVar2, (u32) * (u8 *)(0xa0 + a1), a2, a3);
    }
    pure_virtual_stub();
    return 1;
}

/*
 * game_sub_0c76d0  0x8c0c76d0
 * name hint from a string it uses: WARNING EXIT; area name: game code; nothing names its area yet
 * called by: game_sub_0c6e74
 * strings: "WARNING_EXIT"; "Seaman User Data"; "SM2000US.USR"; "SEAMAN" ...
 */
u32 game_sub_0c76d0(int a0, int a1) {
    u8 *r6;
    u32 uVar1;
    int iVar2;
    code *ar5_00;
    u8 *puVar3;
    u8 *puVar4;
    code *pcVar5;
    char *ar7_00;
    u32 uVar6;
    u32 ar7_01;
    u32 uVar7;
    u32 in_fr1;
    char cVar8;
    u8 auStack_2c[24];

    cVar8 = '\0';
    uVar7 = 2;
    if (g_8c437134 == '\0') {
        r6 = &g_8c437130;
        g_8c437130 = 0;
        g_8c437134 = '\x01';
    }
    if (g_8c43713c == '\0') {
        g_8c437138 = 0;
        g_8c43713c = '\x01';
    }
    pcVar5 = (code *)(int)g_8c437180;
    if (pcVar5 == NULL) {
        uVar1 = clear_5_words(0x8c437184, clear_5_words, r6, 0);
        r6 = (u8 *)0x8c437174;
        global_list_push(uVar1, free_if_nonnull_wrap_0151a0, 0x8c437174, pcVar5);
        g_8c437180 = '\x01';
    }
    ar5_00 = (code *)&g_8c4371a4;
    if (g_8c4371a4 == '\0') {
        pcVar5 = clear_5_words;
        uVar1 = clear_5_words(0x8c4371a8, &g_8c4371a4, r6, clear_5_words);
        r6 = (u8 *)0x8c437198;
        ar5_00 = free_if_nonnull_wrap_0151a0;
        global_list_push(uVar1, free_if_nonnull_wrap_0151a0, 0x8c437198, pcVar5);
        g_8c4371a4 = '\x01';
    }
    if (g_8c4371c8 == '\0') {
        uVar1 = clear_5_words(0x8c4371cc, ar5_00, r6, pcVar5);
        r6 = (u8 *)0x8c4371bc;
        global_list_push(uVar1, free_if_nonnull_wrap_0151a0, 0x8c4371bc, pcVar5);
        ar5_00 = (code *)0x1;
        g_8c4371c8 = '\x01';
    }
    if (g_8c4371e4 == '\0') {
        g_8c4371e0 = NULL;
        g_8c4371e4 = '\x01';
    }
    clear_5_words(auStack_2c, ar5_00, r6, pcVar5);
    if (cVar8 == '\0') {
        g_8c4371e8 = 0;
        uVar1 = in_fr1;
    } else {
        uVar1 = 0x43f00000;
        g_8c4371e8 = in_fr1;
    }
    g_8c4371ec = 0x43f00000;
    if (cVar8 == '\0') {
        g_8c4371f4 = 0;
        g_8c4371fc = uVar1;
    } else {
        g_8c4371fc = 0x44200000;
        g_8c4371f4 = uVar1;
    }
    g_8c4371f8 = 0x44200000;
    if (cVar8 == '\0') {
        g_8c4371fc = 0;
    }
    g_8c437204 = 0x43f00000;
    g_8c437200 = 0x44200000;
    g_8c437214 = 0x90000000;
    g_8c437210 = 0x90000000;
    g_8c43720c = 0x90000000;
    g_8c437208 = 0x90000000;
    uVar1 = 4;
    puVar4 = &g_8c437208;
    g_8c4371f0 = g_8c4371f4;
    set_fields_0_4_c(auStack_2c, &g_8c4371e8, &g_8c437208, 4);
    set_field_10(auStack_2c, 0x60);
    pcVar5 = Class_129808_draw;
    Class_129808_draw(auStack_2c, Class_129808_draw, puVar4, uVar1);
    ar7_00 = (char *)((int)g_8c4371e0 + 1);
    puVar4 = &g_8c437138;
    g_8c4371e0 = (code *)ar7_00;
    if ((4 < g_8c437138) || (g_8c437138 < 0))
        goto LAB_8c0c7fc4;
    switch (g_8c437138) {
    case 0:
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
            *(u32 *)(iVar2 * 4 + 0x8c437144) = 0xffffffff;
            *(u32 *)(iVar2 * 4 + 0x8c437154) = 0xff00ff00;
        }
        g_8c437164 = 0;
        g_8c437166 = 0xff;
        g_8c437168 = 0;
        g_8c43716a = 0;
        g_8c43716c = 0xff;
        g_8c43716e = 0;
        g_8c437170 = 0xff;
        g_8c437172 = 0xff;
        Class_129808_set_model(0x8c437184, &g_8c437164, &g_8c437138);
        set_field_10(0x8c437184, 0x80000060);
        Class_129808_set_model(0x8c4371a8, &g_8c437164, puVar4);
        set_field_10(0x8c4371a8, 0x80000060);
        pcVar5 = Class_129808_set_model;
        Class_129808_set_model(0x8c4371cc, &g_8c437164, puVar4);
        set_field_10(0x8c4371cc, 0x80000060);
        g_8c4371e0 = NULL;
        g_8c437138 = 1;
        ar7_00 = (char *)pcVar5;
    case 1:
        iVar2 = pack_sub_021f18(0x8c2b59d0, g_8c437140, puVar4);
        if (iVar2 != 2) {
            pack_release_entry_handle(0x8c2b59d0, g_8c437140, puVar4, ar7_00);
        }
        if (5 < (int)g_8c4371e0) {
            g_8c437140 =
                (code *)pack_acquire_entry_handle(0x8c2b59d0, "WARNING_EXIT", puVar4, pack_acquire_entry_handle);
            pack_sub_021d90(0x8c2b59d0, g_8c437140, 0, 0);
            g_8c437138 = 2;
        }
    case 2:
        uVar6 = 0;
        uVar1 = 0;
        pack_sub_021d90(0x8c2b59d0, g_8c437140, 0, 0);
        obj_set_texlist(a0 + 0x2d3f4, obj_set_texlist, uVar1);
        obj_set_texture_num(a0 + 0x2d3f4, 0);
        uVar6 = 4;
        uVar1 = 0x8c437144;
        puVar3 = &g_8c13ce50;
        set_fields_0_4_c(0x8c4371cc, &g_8c13ce50, 0x8c437144, 4);
        Class_129808_draw(0x8c4371cc, puVar3, uVar1, uVar6);
        iVar2 = game_sub_0bf708(*(u32 *)(a1 + 0x7cc), puVar3, uVar1, uVar6);
        if ((iVar2 == 1) && (g_8c437130 == 1)) {
            g_8c437130 = 0;
        } else {
            iVar2 = game_sub_0bf690(*(u32 *)(a1 + 0x7cc), puVar3, uVar1, uVar6);
            if ((iVar2 == 1) && (g_8c437130 == 0)) {
                g_8c437130 = 1;
            }
        }
        if (g_8c437130 == 0) {
            obj_set_texlist(a0 + 0x2d3f4, puVar3, uVar1);
            obj_set_texture_num(a0 + 0x2d3f4, 2);
            uVar6 = 4;
            uVar1 = 0x8c437154;
            puVar3 = &g_8c13ce30;
            set_fields_0_4_c(0x8c4371a8, &g_8c13ce30, 0x8c437154, 4);
            Class_129808_draw(0x8c4371a8, puVar3, uVar1, uVar6);
            obj_set_texlist(a0 + 0x2d3f4, puVar3, uVar1);
            obj_set_texture_num(a0 + 0x2d3f4, 1);
            ar7_00 = (char *)0x4;
            puVar4 = (u8 *)0x8c437144;
            pcVar5 = (code *)&g_8c13cdd0;
            set_fields_0_4_c(0x8c437184, &g_8c13cdd0, 0x8c437144, 4);
            Class_129808_draw(0x8c437184, pcVar5, puVar4, ar7_00);
        } else {
            obj_set_texlist(a0 + 0x2d3f4, puVar3, uVar1);
            obj_set_texture_num(a0 + 0x2d3f4, 1);
            ar7_01 = 4;
            uVar6 = 0x8c437154;
            set_fields_0_4_c(0x8c437184, &g_8c13ce10, 0x8c437154, 4);
            uVar1 = 0x8c437184;
            Class_129808_draw(0x8c437184, 0x8c437184, uVar6, ar7_01);
            obj_set_texlist(a0 + 0x2d3f4, uVar1, uVar6);
            obj_set_texture_num(a0 + 0x2d3f4, 2);
            ar7_00 = (char *)0x4;
            puVar4 = (u8 *)0x8c437144;
            pcVar5 = (code *)&g_8c13cdf0;
            set_fields_0_4_c(0x8c4371a8, &g_8c13cdf0, 0x8c437144, 4);
            Class_129808_draw(0x8c4371a8, pcVar5, puVar4, ar7_00);
        }
        iVar2 = game_sub_0c8058(*(u32 *)(a1 + 0x7cc), pcVar5, puVar4, ar7_00);
        if (iVar2 == 1) {
            puVar4 = (u8 *)0x8c2b59d0;
            pcVar5 = g_8c437140;
            iVar2 = pack_sub_021f18(0x8c2b59d0, g_8c437140, 0x8c2b59d0);
            if (iVar2 != 2) {
                pcVar5 = g_8c437140;
                pack_release_entry_handle(0x8c2b59d0, g_8c437140, puVar4, ar7_00);
            }
            if (g_8c437130 == 0) {
                g_8c437138 = 1;
                uVar7 = 1;
            } else {
                g_8c437138 = 3;
            }
            g_8c4371e0 = NULL;
        }
        iVar2 = game_sub_0c8024(*(u32 *)(a1 + 0x7cc));
        if ((iVar2 == 1) || ((iVar2 = game_sub_1000c8(*(u32 *)(a1 + 0x7cc), pcVar5, puVar4, ar7_00),
                              iVar2 == 1 && (0xf < (int)g_8c4371e0)))) {
            iVar2 = pack_sub_021f18(0x8c2b59d0, g_8c437140, puVar4);
            if (iVar2 != 2) {
                pack_release_entry_handle(0x8c2b59d0, g_8c437140, puVar4, ar7_00);
            }
            uVar7 = 1;
            ar7_00 = &g_8c437130;
            puVar4 = NULL;
            g_8c437130 = 0;
            g_8c437138 = 1;
            pcVar5 = NULL;
            g_8c4371e0 = NULL;
        }
        break;
    case 3:
        obj_set_texlist(a0 + 0x2d3f4, pcVar5, &g_8c437138);
        obj_set_texture_num(a0 + 0x2d3f4, 3);
        ar7_00 = (char *)0x4;
        puVar4 = (u8 *)0x8c437144;
        pcVar5 = (code *)&g_8c13ce50;
        set_fields_0_4_c(0x8c4371cc, &g_8c13ce50, 0x8c437144, 4);
        Class_129808_draw(0x8c4371cc, pcVar5, puVar4, ar7_00);
        g_8c4371e0 = g_8c4371e0 + 1;
        if (g_8c4371e0 == (code *)0x1) {
            uVar1 = identity(0x8c3dd7dc, pcVar5, puVar4, ar7_00);
            iVar2 = Class_12b388_sub_01ad88(uVar1);
            if (iVar2 == 1) {
                uVar7 = identity(0x8c3dd7dc, pcVar5, puVar4, ar7_00);
                game_sub_01ab2c(uVar7, pcVar5, puVar4, ar7_00);
                free_if_nonnull_wrap_0151a0(auStack_2c, 0xffffffff, puVar4, ar7_00);
                return 2;
            }
        }
        if (10 < (int)g_8c4371e0) {
            g_8c437138 = 4;
            pcVar5 = (code *)&g_8c4371e0;
            g_8c4371e0 = NULL;
        }
        break;
    case 4:
        iVar2 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), *(u32 *)(a1 + 0x7cc), &g_8c437138);
        if (iVar2 == 0) {
            iVar2 = get_field_d4_0c7424(*(u32 *)(a1 + 0x7cc), 0x7cc);
        }
        CGame_GetUserGameInfo(a0, a1, iVar2, 0x8c431a68);
        (**(code **)(**(int **)(a0 + 0x14) + 0xf8))(0x8c435c7c);
        ar7_00 = "Seaman User Data";
        puVar4 = (u8 *)0x4208;
        iVar2 = (*(code *)0x8c0b6e6c)("SM2000US.USR", 0x8c431a68, "SEAMAN", 1);
        if (iVar2 == 0) {
            ar7_00 = "Seaman Storage Matrix";
            puVar4 = (u8 *)0x600;
            pcVar5 = (code *)0x8c435c7c;
            iVar2 = (*(code *)0x8c0b6e6c)("SM2000US.INC", "SEAMAN SM", 1);
            if (iVar2 != 0)
                goto LAB_8c0c7fb8;
            uVar7 = 0;
            ar7_00 = &g_8c437138;
            puVar4 = NULL;
            g_8c437138 = 0;
        } else {
        LAB_8c0c7fb8:
            pcVar5 = (code *)0x1;
            g_8c437138 = 1;
        }
        g_8c437130 = 0;
    }
LAB_8c0c7fc4:
    game_sub_0c453c(&g_8c2b5628, pcVar5, puVar4, ar7_00);
    free_if_nonnull_wrap_0151a0(auStack_2c, 0xffffffff, puVar4, ar7_00);
    return uVar7;
}

/*
 * game_sub_0c8024  0x8c0c8024
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c76d0
 */
u32 game_sub_0c8024(int a0) {
    int iVar1;

    iVar1 = input_sub_01eedc(*(u32 *)(0xcc + a0));
    return (u32)(iVar1 != 0);
}

/*
 * game_sub_0c8058  0x8c0c8058
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c76d0
 */
u32 game_sub_0c8058(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;

    iVar1 = (*(code *)(&get_field_a510_01f538))(*(u32 *)(0xcc + a0), a1, a2, a3);
    if ((iVar1 != 1) && (iVar1 = (*(code *)(&get_field_a510_01f538))(*(u32 *)(0xcc + a0), a1, a2, a3), iVar1 != 2)) {
        iVar1 = input_test_4_mode2(*(u32 *)(0xcc + a0));
        if (iVar1 != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}

/*
 * game_sub_0c80bc  0x8c0c80bc
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c80bc(int a0, int a1, u32 a2, u32 a3) {
    *(u16 *)(0x2d1ac + a0) = 0;
    (**(code **)(**(int **)(a0 + 8) + 0x1c))(*(int **)(a0 + 8), 0x8c3eb334, a2, a3);
    (**(code **)(**(int **)(a0 + 0x14) + 0x18))(*(int **)(a0 + 0x14), 0x8c3eb334, a2, a3);
    (**(code **)(0x98 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), (u32) * (u8 *)(0xa0 + a1), a2, a3);
    (**(code **)(**(int **)(a0 + 8) + 0x70))(*(int **)(a0 + 8), 0, a2, a3);
    return 0;
}

/*
 * noop_0c812c  0x8c0c812c
 */
u32 noop_0c812c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0c8130  0x8c0c8130
 */
u32 noop_0c8130(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0c8134  0x8c0c8134
 * name hint from a string it uses: SEAMAN SM; area name: game code; nothing names its area yet
 * strings: "Seaman Storage Matrix"; "SM2000US.INC"; "Seaman Storage Matrix"
 */
u32 game_sub_0c8134(int a0, code *a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    code *ar5_00;
    u32 *a6;
    u32 *puVar6;
    char *a7;
    u32 in_fr1;
    char cVar7;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    u32 uStack_48;
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar7 = '\0';
    ar5_00 = a1;
    if (g_8c437224 == '\0') {
        uVar1 = Vec3_ctor_zero(0x8c437228, a1, a2);
        a2 = 0x8c437218;
        ar5_00 = Vec3_dtor;
        global_list_push(uVar1, Vec3_dtor, 0x8c437218, a3);
        g_8c437224 = '\x01';
    }
    Vec3_ctor_zero(auStack_24, ar5_00, a2);
    Vec3_ctor_zero(auStack_34, ar5_00, a2);
    Vec3_pair_ctor(&uStack_54, ar5_00, a2);
    if (cVar7 == '\0') {
        uStack_5c = 0;
    } else {
        uStack_54 = 0;
        uStack_5c = in_fr1;
    }
    uStack_58 = 0;
    if (cVar7 == '\0') {
        uStack_60 = 0;
    } else {
        uStack_5c = 0;
        uStack_60 = in_fr1;
    }
    iVar2 = get_field_d4_0c7424(*(u32 *)(a1 + 0x7cc), ar5_00);
    if (iVar2 == 0) {
        a2 = a0 + 8;
        ar5_00 = *(code **)(a1 + 0x7cc);
        game_sub_0cbbcc(a0, ar5_00, a2, a3);
    }
    iVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
    game_sub_0ffdb0(*(u32 *)(a1 + 0x7cc));
    a7 = (char *)&uStack_60;
    a6 = &uStack_5c;
    puVar6 = &uStack_58;
    piVar5 = *(int **)(a0 + iVar2 * 4 + 8);
    (**(code **)(*piVar5 + 0x13c))(piVar5, puVar6, a6, a7);
    if (cVar7 != '\0') {
        in_fr1 = uStack_60;
    }
    if (cVar7 == '\0') {
        uStack_54 = 0;
        uStack_4c = in_fr1;
    } else {
        uStack_4c = 0x43fa0000;
        uStack_54 = in_fr1;
    }
    uStack_50 = 0x43fa0000;
    if (cVar7 == '\0') {
        uStack_4c = 0;
    } else {
        uStack_48 = 0;
    }
    iVar3 = get_field_d4_0c7424(*(u32 *)(a1 + 0x7cc), puVar6);
    if (iVar3 == 0) {
        iVar4 = a0 + 8;
        iVar3 = sh4_sub_0b9244(a1, iVar4, a6, a7);
        if (iVar3 == 1) {
            (**(code **)(**(int **)(a0 + 8) + 0xac))(*(int **)(a0 + 8), iVar4, a6, a7);
        }
        puVar6 = (u32 *)0x8c43722c;
        Class_12acc8_sub_101210(*(u32 *)(a1 + 0x7cc), 0x8c437228, 0x8c43722c);
        uVar1 = 0x8c437228;
        piVar5 = *(int **)(a0 + iVar2 * 4 + 8);
        (**(code **)(*piVar5 + 100))(piVar5, 0x8c437228, puVar6, a7);
        iVar3 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), uVar1, puVar6);
        if ((iVar3 != 0) && (iVar3 = game_sub_0fff28(*(u32 *)(a1 + 0x7cc), uVar1, puVar6, a7), iVar3 == 4)) {
            game_sub_0cdf50(a0, a1, puVar6, a7);
        }
        if (iVar2 == 0) {
            (**(code **)(**(int **)(a0 + 8) + 0xc))(*(int **)(a0 + 8), a1, &uStack_54, a7);
            puVar6 = &uStack_54;
            (**(code **)(**(int **)(a0 + 0x14) + 0x10))(*(int **)(a0 + 0x14), a1, puVar6, a7);
        } else if (iVar2 == 3) {
            (**(code **)(**(int **)(a0 + 0x14) + 0xc))(*(int **)(a0 + 0x14), a1, &uStack_54, a7);
            puVar6 = &uStack_54;
            (**(code **)(**(int **)(a0 + 8) + 0x10))(*(int **)(a0 + 8), a1, puVar6, a7);
        }
        if ((g_8c436928 == 1) && (g_8c13bcc4 == 1)) {
            (**(code **)(**(int **)(a0 + 0x14) + 0xf8))(*(int **)(a0 + 0x14), 0x8c435c7c, puVar6, a7);
            a7 = "Seaman Storage Matrix";
            puVar6 = (u32 *)0x600;
            iVar2 = game_sub_0b6c3c("SM2000US.INC", 0x8c435c7c, 0x600, "Seaman Storage Matrix");
            if (iVar2 == 0) {
                g_8c436928 = 0;
            }
        }
    } else {
        puVar6 = *(u32 **)(a1 + 0x7cc);
        a7 = (char *)a1;
        iVar4 = game_sub_0cbd74(a0, iVar3, puVar6, a1);
        if (iVar4 == 5) {
            uVar1 = game_sub_0c8464(*(u32 *)(a1 + 0x7cc));
            piVar5 = *(int **)(a0 + iVar2 * 4 + 8);
            (**(code **)(*piVar5 + 0x50))(piVar5, uVar1, puVar6, a7);
        }
    }
    Vec3_pair_dtor(&uStack_54, 0xffffffff, puVar6, a7);
    Vec3_dtor(auStack_34, 0xffffffff, puVar6, a7);
    Vec3_dtor(auStack_24, 0xffffffff, puVar6, a7);
    return 0;
}

/*
 * noop_0c8460  0x8c0c8460
 */
u32 noop_0c8460(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0c8464  0x8c0c8464
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c8134, game_sub_0c91f4, game_sub_0ca4e8
 */
u32 game_sub_0c8464(int a0) {
    u32 uVar1;

    uVar1 = *(u32 *)(0xd4 + a0);
    *(u32 *)(0xd4 + a0) = 0;
    return uVar1;
}

/*
 * noop_0c847c  0x8c0c847c
 */
u32 noop_0c847c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * Vec3_pair_dtor  0x8c0c8480
 * destroys the two Vec3 of a Vec3 pair and frees it when the delete flag is set
 * called by: game_sub_0c8134, game_sub_0c8758, game_sub_0c8c28, game_sub_0c8fc4, game_sub_0c91f4, game_sub_0c991c,
 * game_sub_0ca4e8, game_sub_0cac08 (+2 more)
 */
int Vec3_pair_dtor(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
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
 * Vec3_pair_ctor  0x8c0c84cc
 * constructs two Vec3 at +0 and +0x10
 * called by: game_sub_0c8134, game_sub_0c8758, game_sub_0c8c28, game_sub_0c8fc4, game_sub_0c91f4, game_sub_0c991c,
 * game_sub_0ca4e8, game_sub_0cac08 (+2 more)
 */
int Vec3_pair_ctor(int a0, u32 a1, u32 a2) {
    Vec3_ctor_zero(a0, a1, a2);
    Vec3_ctor_zero(a0 + 0x10, a1, a2);
    return a0;
}

/*
 * Vec3_sub_0c84f4  0x8c0c84f4
 * area name: sits between Vec3 functions (same compilation unit)
 */
u32 Vec3_sub_0c84f4(int a0, u8 *a1, u8 *a2, u8 *a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    u8 *ar5_00;
    u8 auStack_38[8];
    u8 auStack_30[16];
    u8 auStack_20[16];

    ar5_00 = a1;
    iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(a1 + 0x7cc), a1, a2, a3);
    clear_3_words_102748(auStack_20);
    clear_2_words(auStack_38);
    iVar2 = (*(code *)(&get_field_d4_0c7424))(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
    if (iVar2 == 0) {
        iVar2 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
        if (iVar2 != 0) {
            game_sub_0c86d4(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_20);
            Vec3_sub_0c86c0(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_38);
            Vec3_sub_0c8698(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_30);
            a3 = auStack_30;
            a2 = auStack_38;
            ar5_00 = auStack_20;
            game_sub_0fff54(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
        }
        piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
        (**(code **)(0xb0 + *piVar3))(piVar3, ar5_00, a2, a3);
        if (iVar1 == 0) {
            (**(code **)(**(int **)(a0 + 8) + 0x30))(*(int **)(a0 + 8), ar5_00, a2, a3);
        } else {
            (**(code **)(**(int **)(a0 + 0x14) + 0x28))(*(int **)(a0 + 0x14), ar5_00, a2, a3);
        }
        game_sub_0fff84(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
        iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
        piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
        (**(code **)(*piVar3 + 0x48))(piVar3, ar5_00, a2, a3);
    } else {
        game_sub_0cc524(a0, iVar2, a2, a3);
    }
    free_if_nonnull_wrap_10270c(auStack_38, 0xffffffff, a2, a3);
    free_if_nonnull_wrap_102790(auStack_20, 0xffffffff, a2, a3);
    return 0;
}

/*
 * noop_0c868c  0x8c0c868c
 */
u32 noop_0c868c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_1_0c8690  0x8c0c8690
 */
u32 ret_const_1_0c8690(void) {
    return 1;
}

/*
 * Vec3_sub_0c8698  0x8c0c8698
 * area name: sits between Vec3 functions (same compilation unit)
 * called by: Vec3_sub_0c84f4, game_sub_0c9588, game_sub_0c9ee0, game_sub_0ca88c, game_sub_0cb9c8
 */
u32 Vec3_sub_0c8698(int a0, u32 *a1) {
    u32 uVar1;

    uVar1 = ((u32 *)(a0 + 0x94))[1];
    *a1 = *(u32 *)(a0 + 0x94);
    a1[1] = uVar1;
    uVar1 = ((u32 *)(a0 + 0x9c))[1];
    a1[2] = *(u32 *)(a0 + 0x9c);
    a1[3] = uVar1;
    return uVar1;
}

/*
 * Vec3_sub_0c86c0  0x8c0c86c0
 * area name: sits between Vec3 functions (same compilation unit)
 * called by: Vec3_sub_0c84f4, game_sub_0c9588, game_sub_0c9ee0, game_sub_0ca88c, game_sub_0cb9c8
 */
u32 Vec3_sub_0c86c0(int a0, u32 *a1) {
    u32 uVar1;

    uVar1 = ((u32 *)(a0 + 0x8c))[1];
    *a1 = *(u32 *)(a0 + 0x8c);
    a1[1] = uVar1;
    return uVar1;
}

/*
 * game_sub_0c86d4  0x8c0c86d4
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_0c84f4, game_sub_0c9588, game_sub_0c9ee0, game_sub_0ca88c, game_sub_0cb9c8
 */
u32 game_sub_0c86d4(int a0, u32 *a1) {
    u32 uVar1;
    u32 *puVar2;

    puVar2 = (u32 *)(a0 + 0x80);
    uVar1 = puVar2[1];
    *a1 = *puVar2;
    a1[1] = uVar1;
    uVar1 = puVar2[2];
    a1[2] = uVar1;
    return uVar1;
}

/*
 * game_sub_0c86f4  0x8c0c86f4
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c90ec
 */
u32 game_sub_0c86f4(int a0, u32 unused_a1, u32 a2, u32 a3) {
    (**(code **)(0x1b0 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), 1, a2, a3);
    (**(code **)(0x1b0 + **(int **)(a0 + 0x14)))(*(int **)(a0 + 0x14), 1, a2, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), 0x8c3eb334, 0, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 0x14)))(*(int **)(a0 + 0x14), 0x8c3eb334, 0, a3);
    return 0;
}

/*
 * noop_0c8754  0x8c0c8754
 */
u32 noop_0c8754(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0c8758  0x8c0c8758
 * name hint from a string it uses: BUGBOX 3; area name: game code; nothing names its area yet
 * strings: "BUGBOX_3"
 */
u32 game_sub_0c8758(int a0, int a1, u32 a2, u32 a3) {
    short sVar1;
    int iVar2;
    int iVar3;
    u32 uVar4;
    u8 *puVar5;
    u32 uVar6;
    u8 auStack_48[16];
    u8 auStack_38[36];

    iVar2 = a1;
    Vec3_pair_ctor(auStack_38, a1, a2);
    uVar6 = 1;
    Vec3_ctor_zero(auStack_48, iVar2, a2);
    puVar5 = auStack_38;
    iVar2 = a1;
    (**(code **)(**(int **)(a0 + 8) + 0xc))(*(int **)(a0 + 8), a1, puVar5, a3);
    (**(code **)(**(int **)(a0 + 8) + 0xb0))(*(int **)(a0 + 8), iVar2, puVar5, a3);
    (**(code **)(**(int **)(a0 + 8) + 0x30))(*(int **)(a0 + 8), iVar2, puVar5, a3);
    sVar1 = *(short *)(a0 + 0x2d1ac);
    if (sVar1 == 0) {
        g_8c436a18 = 0;
        g_8c436a14 = 0;
        g_8c436a10 = 0;
        g_8c436a0c = 0;
        a3 = 4;
        puVar5 = &g_8c436a0c;
        set_fields_0_4_c(0x8c436978, &g_8c4369ec, &g_8c436a0c, 4);
        iVar2 = 0x60;
        set_field_10(0x8c436978, 0x60);
        set_timeout_120_mode6(*(u32 *)(a1 + 0x7cc));
        *(u16 *)(a0 + 0x2d1ac) = 1;
    } else if (sVar1 == 1) {
        if (g_8c436a0c < 0xfc000000) {
            for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
                *(int *)(&g_8c436a0c + iVar3 * 4) = *(int *)(&g_8c436a0c + iVar3 * 4) + 0x3000000;
            }
        } else {
            iVar2 = pack_acquire_entry_handle(0x8c2b59d0, "BUGBOX_3", puVar5, a3);
            a3 = 0;
            puVar5 = NULL;
            g_8c13cbf4 = iVar2;
            pack_sub_021d90(0x8c2b59d0, iVar2, 0, 0);
            *(u16 *)(a0 + 0x2d1ac) = 2;
        }
    } else if (sVar1 == 2) {
        (**(code **)(**(int **)(a0 + 8) + 0x78))(*(int **)(a0 + 8), 0, puVar5, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x9c))(*(int **)(a0 + 8), 0, puVar5, a3);
        (**(code **)(**(int **)(a0 + 0xc) + 0x18))(*(int **)(a0 + 0xc), 0x8c3eb334, puVar5, a3);
        iVar2 = CFrogManEgg_sub_0fef94(0x8c3eb324, 0xe, 0x1b, a3);
        (**(code **)(*(int *)(iVar2 + 8) + 0xe0))(iVar2, 0x8c3eb334, 0, a3);
        uVar6 = 1;
        puVar5 = auStack_48;
        (**(code **)(*(int *)(iVar2 + 8) + 0x150))(iVar2, puVar5, 1, a3);
        set_vec3_field_30(iVar2, puVar5, uVar6);
        (**(code **)(**(int **)(a0 + 0xc) + 0x4c))(*(int **)(a0 + 0xc), iVar2, uVar6, a3);
        iVar2 = CFrogManEgg_sub_0fef94(0x8c3eb324, 0xe, 0x1b, a3);
        (**(code **)(*(int *)(iVar2 + 8) + 0xe0))(iVar2, 0x8c3eb334, 0, a3);
        uVar6 = 1;
        puVar5 = auStack_48;
        (**(code **)(*(int *)(iVar2 + 8) + 0x150))(iVar2, puVar5, 1, a3);
        set_vec3_field_30(iVar2, puVar5, uVar6);
        (**(code **)(**(int **)(a0 + 0xc) + 0x4c))(*(int **)(a0 + 0xc), iVar2, uVar6, a3);
        iVar3 = CFrogManEgg_sub_0fef94(0x8c3eb324, 0xb, 0x1b, a3);
        uVar4 = 0;
        uVar6 = 0x8c3eb334;
        (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3, 0x8c3eb334, 0, a3);
        (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3, uVar6, uVar4, a3);
        iVar2 = a1;
        (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3, a1, uVar4, a3);
        set_vec3_field_30(iVar3, iVar2, uVar4);
        (**(code **)(**(int **)(a0 + 0xc) + 0x4c))(*(int **)(a0 + 0xc), iVar3, uVar4, a3);
        iVar3 = CFrogManEgg_sub_0fef94(0x8c3eb324, 0xb, 0x1b, a3);
        uVar4 = 0;
        uVar6 = 0x8c3eb334;
        (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3, 0x8c3eb334, 0, a3);
        (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3, uVar6, uVar4, a3);
        iVar2 = a1;
        (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3, a1, uVar4, a3);
        set_vec3_field_30(iVar3, iVar2, uVar4);
        (**(code **)(**(int **)(a0 + 0xc) + 0x4c))(*(int **)(a0 + 0xc), iVar3, uVar4, a3);
        iVar3 = CFrogManEgg_sub_0fef94(0x8c3eb324, 0xb, 0x1b, a3);
        uVar4 = 0;
        uVar6 = 0x8c3eb334;
        (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3, 0x8c3eb334, 0, a3);
        (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3, uVar6, uVar4, a3);
        iVar2 = a1;
        (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3, a1, uVar4, a3);
        set_vec3_field_30(iVar3, iVar2, uVar4);
        (**(code **)(**(int **)(a0 + 0xc) + 0x4c))(*(int **)(a0 + 0xc), iVar3, uVar4, a3);
        iVar3 = CFrogManEgg_sub_0fef94(0x8c3eb324, 0xb, 0x1b, a3);
        puVar5 = NULL;
        uVar6 = 0x8c3eb334;
        (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3, 0x8c3eb334, 0, a3);
        (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3, uVar6, puVar5, a3);
        iVar2 = a1;
        (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3, a1, puVar5, a3);
        set_vec3_field_30(iVar3, iVar2, puVar5);
        (**(code **)(**(int **)(a0 + 0xc) + 0x4c))(*(int **)(a0 + 0xc), iVar3, puVar5, a3);
        set_field_d0_0c51b8(*(u32 *)(a1 + 0x7cc), 1);
        (**(code **)(**(int **)(a0 + 0xc) + 0x98))(*(int **)(a0 + 0xc), 0, puVar5, a3);
        iVar2 = 0;
        (**(code **)(**(int **)(a0 + 0xc) + 0x70))(*(int **)(a0 + 0xc), 0, puVar5, a3);
        *(u16 *)(a0 + 0x2d1ac) = 3;
        uVar6 = 0;
    }
    if (g_8c436a0c != 0) {
        Class_129808_draw(0x8c436978, iVar2, puVar5, a3);
    }
    Vec3_dtor(auStack_48, 0xffffffff, puVar5, a3);
    Vec3_pair_dtor(auStack_38, 0xffffffff, puVar5, a3);
    return uVar6;
}

/*
 * game_sub_0c8c28  0x8c0c8c28
 * name hint from a string it uses: BUGBOX 4; area name: game code; nothing names its area yet
 * strings: "BUGBOX_4"
 */
u32 game_sub_0c8c28(int a0, int a1, u32 a2, u32 a3) {
    short sVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    u8 *a6;
    u32 uVar5;
    char cVar6;
    u8 auStack_34[36];

    cVar6 = '\0';
    if (g_8c437244 == '\0') {
        g_8c437240 = 0;
        g_8c437244 = '\x01';
    }
    uVar5 = 1;
    iVar4 = a1;
    Vec3_pair_ctor(auStack_34, a1, a2);
    sVar1 = *(short *)(a0 + 0x2d1ac);
    if (sVar1 == 3) {
        g_8c437240 = 0;
        g_8c437248 = 0;
        (**(code **)(**(int **)(a0 + 0xc) + 200))(*(int **)(a0 + 0xc), iVar4, a2, a3);
        iVar4 = g_8c13cbf4;
        iVar2 = pack_sub_021f18(0x8c2b59d0, g_8c13cbf4, a2);
        if (iVar2 == 1) {
            pack_release_entry_handle(0x8c2b59d0, g_8c13cbf4, a2, a3);
            g_8c13cbf4 = 0xffffffff;
            iVar4 = pack_acquire_entry_handle(0x8c2b59d0, "BUGBOX_4", a2, a3);
            a3 = 0;
            a2 = 0;
            g_8c13cbf4 = iVar4;
            pack_sub_021d90(0x8c2b59d0, iVar4, 0, 0);
            *(u16 *)(a0 + 0x2d1ac) = 4;
        }
    } else if (sVar1 == 4) {
        if (g_8c437240 - g_8c437248 < 0x28) {
            iVar4 = 2;
            iVar2 = libgcc_divide_helper_01031c(g_8c437240 - g_8c437248, 2, a2);
            if (iVar2 == 0) {
                if (cVar6 != '\0') {
                    g_8c437240 = 0x3dcccccd;
                }
                g_8c43723c = 0x3ecccccd;
            } else if (iVar2 == 1) {
                if (cVar6 != '\0') {
                    g_8c437240 = 0x3f000000;
                }
                g_8c43723c = 0x3dcccccd;
            }
        } else if ((g_8c437240 - g_8c437248 < 0x28) || (0x45 < g_8c437240 - g_8c437248)) {
            if (0x45 < g_8c437240 - g_8c437248) {
                if (cVar6 == '\0') {
                    g_8c43723c = 0x3f800000;
                } else {
                    g_8c437240 = 0x3f800000;
                    g_8c43723c = 0x7cc;
                }
                g_8c437238 = 0x3f19999a;
                *(u16 *)(a0 + 0x2d1ac) = 5;
                g_8c437248 = g_8c437240;
            }
        } else {
            if (cVar6 != '\0') {
                g_8c437240 = 0x3f19999a;
            }
            g_8c43723c = 0x3f000000;
        }
        (**(code **)(**(int **)(a0 + 0xc) + 200))(*(int **)(a0 + 0xc), iVar4, a2, a3);
    } else if (sVar1 == 5) {
        iVar4 = g_8c13cbf4;
        iVar2 = pack_sub_021f18(0x8c2b59d0, g_8c13cbf4, a2);
        if (iVar2 == 1) {
            pack_release_entry_handle(0x8c2b59d0, g_8c13cbf4, a2, a3);
            g_8c13cbf4 = -1;
            set_field_d0_0c51b8(*(u32 *)(a1 + 0x7cc), 0);
            a2 = 0;
            game_sub_0d1c20(*(u32 *)(a0 + 0xc), *(u32 *)(a0 + 8), 0);
            (**(code **)(**(int **)(a0 + 0xc) + 0x78))(*(int **)(a0 + 0xc), 0, a2, a3);
            iVar4 = 0;
            (**(code **)(**(int **)(a0 + 8) + 0x70))(*(int **)(a0 + 8), 0, a2, a3);
            (**(code **)(**(int **)(a0 + 8) + 0xb4))(*(int **)(a0 + 8), iVar4, a2, a3);
            g_8c437248 = g_8c437240;
            *(u16 *)(a0 + 0x2d1ac) = 6;
        }
    } else if ((sVar1 == 6) && (0x1e < g_8c437240 - g_8c437248)) {
        *(u32 *)(a0 + 0x2d15c) = 3;
        uVar5 = 0;
    }
    iVar4 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), iVar4, a2);
    a6 = auStack_34;
    piVar3 = *(int **)(a0 + iVar4 * 4 + 8);
    iVar4 = a1;
    (**(code **)(*piVar3 + 0xc))(piVar3, a1, a6, a3);
    iVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), iVar4, a6);
    piVar3 = *(int **)(a0 + iVar2 * 4 + 8);
    (**(code **)(*piVar3 + 0xb0))(piVar3, iVar4, a6, a3);
    g_8c437240 = g_8c437240 + 1;
    Vec3_pair_dtor(auStack_34, 0xffffffff, a6, a3);
    return uVar5;
}

/*
 * noop_0c8f50  0x8c0c8f50
 */
u32 noop_0c8f50(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0c8f54  0x8c0c8f54
 * area name: game code; nothing names its area yet
 */
u32 *game_sub_0c8f54(int a0) {
    u32 in_fr5;
    u32 in_fr4;

    *(u32 *)(a0 + 0x78) = in_fr4;
    *(u32 *)(a0 + 0x7c) = in_fr5;
    return (u32 *)(a0 + 0x78);
}

/*
 * game_sub_0c8f64  0x8c0c8f64
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c8f64(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int ar5_00;

    ar5_00 = a1;
    iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(0x7cc + a1), a1, a2, a3);
    if (iVar1 == 1) {
        (**(code **)(**(int **)(a0 + 0xc) + 0x28))(*(int **)(a0 + 0xc), ar5_00, a2, a3);
    } else {
        iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(0x7cc + a1), ar5_00, a2, a3);
        if (iVar1 == 0) {
            (**(code **)(**(int **)(a0 + 8) + 0x30))(*(int **)(a0 + 8), ar5_00, a2, a3);
        }
    }
    return 0;
}

/*
 * game_sub_0c8fc4  0x8c0c8fc4
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c8fc4(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    u32 ar4_00;
    u32 ar5_00;
    u8 *a6;
    u8 auStack_2c[36];

    iVar1 = a1;
    Vec3_pair_ctor(auStack_2c, a1, a2);
    iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(0x7cc + a1), iVar1, a2, a3);
    a6 = auStack_2c;
    piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
    iVar1 = a1;
    (**(code **)(*piVar3 + 0xc))(piVar3, a1, a6, a3);
    iVar2 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(0x7cc + a1), iVar1, a6, a3);
    piVar3 = *(int **)(a0 + iVar2 * 4 + 8);
    (**(code **)(0xb0 + *piVar3))(piVar3, iVar1, a6, a3);
    (**(code **)(**(int **)(a0 + 8) + 0x30))(*(int **)(a0 + 8), iVar1, a6, a3);
    ar5_00 = 0;
    set_timeout_120(*(u32 *)(0x7cc + a1), 0);
    ar4_00 = *(u32 *)(0x7cc + a1);
    set_fields_12c_130(ar4_00);
    *(u16 *)(0x2d1ac + a0) = 0;
    *(u8 *)(0xa0 + a1) = 1;
    *(u32 *)(0x2d160 + a0) = 0;
    *(u32 *)(0x2d15c + a0) = 2;
    CAnimal_sub_0c4e2c(ar4_00, ar5_00, a6, a3);
    game_sub_0c4e48();
    Vec3_pair_dtor(auStack_2c, 0xffffffff, a6, a3);
    return 0;
}

/*
 * set_fields_12c_130  0x8c0c90d0
 * stores +0x12c, +0x130
 * called by: game_sub_0c8fc4, game_sub_0ca0e0, game_sub_0e1f90, game_sub_0e8280
 */
u32 set_fields_12c_130(int a0) {
    u32 in_fr5;
    u32 in_fr4;

    *(u32 *)(a0 + 300) = in_fr4;
    *(u32 *)(a0 + 0x130) = in_fr5;
    return 0x130;
}

/*
 * game_sub_0c90ec  0x8c0c90ec
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c90ec(int a0, u32 unused_a1, u32 a2, u32 a3) {
    game_sub_0c86f4(a0, unused_a1, a2, a3);
    if (*(int *)(&DATA_8c13cbf4) != -1) {
        (*(code *)(&pack_release_entry_handle))(0x8c2b59d0, *(u32 *)(&DATA_8c13cbf4), a2, a3);
        *(u32 *)(&DATA_8c13cbf4) = 0xffffffff;
    }
    if (2 < *(short *)(0x2d1ac + a0)) {
        (**(code **)(0x1b0 + **(int **)(a0 + 0xc)))(*(int **)(a0 + 0xc), 1, a2, a3);
        (**(code **)(0x1b4 + **(int **)(a0 + 0xc)))(*(int **)(a0 + 0xc), 0x8c3eb334, 1, a3);
    }
    return 0;
}

/*
 * game_sub_0c9174  0x8c0c9174
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c9174(int a0, int a1, u32 a2, u32 a3) {
    *(u16 *)(0x2d1ac + a0) = 0;
    (**(code **)(**(int **)(a0 + 8) + 0x20))(*(int **)(a0 + 8), 0x8c3eb334, a2, a3);
    (**(code **)(**(int **)(a0 + 0xc) + 0x18))(*(int **)(a0 + 0xc), 0x8c3eb334, a2, a3);
    (**(code **)(**(int **)(a0 + 0x14) + 0x18))(*(int **)(a0 + 0x14), 0x8c3eb334, a2, a3);
    (**(code **)(0x98 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), (u32) * (u8 *)(0xa0 + a1), a2, a3);
    (**(code **)(**(int **)(a0 + 8) + 0x70))(*(int **)(a0 + 8), 1, a2, a3);
    return 0;
}

/*
 * noop_0c91f0  0x8c0c91f0
 */
u32 noop_0c91f0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0c91f4  0x8c0c91f4
 * name hint from a string it uses: SEAMAN SM; area name: game code; nothing names its area yet
 * strings: "Seaman Storage Matrix"; "SM2000US.INC"; "Seaman Storage Matrix"
 */
u32 game_sub_0c91f4(int a0, code *a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    code *ar5_00;
    u32 *a6;
    u32 *puVar6;
    char *a7;
    u32 in_fr1;
    char cVar7;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    u32 uStack_48;
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar7 = '\0';
    ar5_00 = a1;
    if (g_8c437258 == '\0') {
        uVar1 = Vec3_ctor_zero(0x8c43725c, a1, a2);
        a2 = 0x8c43724c;
        ar5_00 = Vec3_dtor;
        global_list_push(uVar1, Vec3_dtor, 0x8c43724c, a3);
        g_8c437258 = '\x01';
    }
    Vec3_ctor_zero(auStack_24, ar5_00, a2);
    Vec3_ctor_zero(auStack_34, ar5_00, a2);
    Vec3_pair_ctor(&uStack_54, ar5_00, a2);
    if (cVar7 == '\0') {
        uStack_5c = 0;
    } else {
        uStack_54 = 0;
        uStack_5c = in_fr1;
    }
    uStack_58 = 0;
    if (cVar7 == '\0') {
        uStack_60 = 0;
    } else {
        uStack_5c = 0;
        uStack_60 = in_fr1;
    }
    iVar2 = get_field_d4_0c7424(*(u32 *)(a1 + 0x7cc), ar5_00);
    if (iVar2 == 0) {
        a2 = a0 + 8;
        ar5_00 = *(code **)(a1 + 0x7cc);
        game_sub_0cbc3c(a0, ar5_00, a2, a3);
    }
    iVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
    game_sub_0ffdb0(*(u32 *)(a1 + 0x7cc));
    a7 = (char *)&uStack_60;
    a6 = &uStack_5c;
    puVar6 = &uStack_58;
    piVar5 = *(int **)(a0 + iVar2 * 4 + 8);
    (**(code **)(*piVar5 + 0x13c))(piVar5, puVar6, a6, a7);
    if (cVar7 != '\0') {
        in_fr1 = uStack_60;
    }
    if (cVar7 == '\0') {
        uStack_54 = 0;
        uStack_4c = in_fr1;
    } else {
        uStack_4c = 0x43fa0000;
        uStack_54 = in_fr1;
    }
    uStack_50 = 0x43fa0000;
    if (cVar7 == '\0') {
        uStack_4c = 0;
    } else {
        uStack_48 = 0;
    }
    iVar3 = get_field_d4_0c7424(*(u32 *)(a1 + 0x7cc), puVar6);
    if (iVar3 == 0) {
        iVar4 = a0 + 8;
        iVar3 = sh4_sub_0b9244(a1, iVar4, a6, a7);
        if (iVar3 == 1) {
            (**(code **)(**(int **)(a0 + 8) + 0xac))(*(int **)(a0 + 8), iVar4, a6, a7);
            (**(code **)(**(int **)(a0 + 0xc) + 0xac))(*(int **)(a0 + 0xc), iVar4, a6, a7);
        }
        puVar6 = (u32 *)0x8c437260;
        Class_12acc8_sub_101210(*(u32 *)(a1 + 0x7cc), 0x8c43725c, 0x8c437260);
        uVar1 = 0x8c43725c;
        piVar5 = *(int **)(a0 + iVar2 * 4 + 8);
        (**(code **)(*piVar5 + 100))(piVar5, 0x8c43725c, puVar6, a7);
        iVar3 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), uVar1, puVar6);
        if ((iVar3 != 0) && (iVar3 = game_sub_0fff28(*(u32 *)(a1 + 0x7cc), uVar1, puVar6, a7), iVar3 == 4)) {
            game_sub_0cdf50(a0, a1, puVar6, a7);
        }
        if (iVar2 == 0) {
            (**(code **)(**(int **)(a0 + 8) + 0xc))(*(int **)(a0 + 8), a1, &uStack_54, a7);
            (**(code **)(**(int **)(a0 + 0xc) + 0x10))(*(int **)(a0 + 0xc), a1, &uStack_54, a7);
            puVar6 = &uStack_54;
            (**(code **)(**(int **)(a0 + 0x14) + 0x10))(*(int **)(a0 + 0x14), a1, puVar6, a7);
        } else if (iVar2 == 1) {
            (**(code **)(**(int **)(a0 + 0xc) + 0xc))(*(int **)(a0 + 0xc), a1, &uStack_54, a7);
            (**(code **)(**(int **)(a0 + 8) + 0x10))(*(int **)(a0 + 8), a1, &uStack_54, a7);
            puVar6 = &uStack_54;
            (**(code **)(**(int **)(a0 + 0x14) + 0x10))(*(int **)(a0 + 0x14), a1, puVar6, a7);
        } else if (iVar2 == 3) {
            (**(code **)(**(int **)(a0 + 0x14) + 0xc))(*(int **)(a0 + 0x14), a1, &uStack_54, a7);
            (**(code **)(**(int **)(a0 + 8) + 0x10))(*(int **)(a0 + 8), a1, &uStack_54, a7);
            puVar6 = &uStack_54;
            (**(code **)(**(int **)(a0 + 0xc) + 0x10))(*(int **)(a0 + 0xc), a1, puVar6, a7);
        }
        if ((g_8c436928 == 1) && (g_8c13bcc4 == 1)) {
            (**(code **)(**(int **)(a0 + 0x14) + 0xf8))(*(int **)(a0 + 0x14), 0x8c435c7c, puVar6, a7);
            a7 = "Seaman Storage Matrix";
            puVar6 = (u32 *)0x600;
            iVar2 = game_sub_0b6c3c("SM2000US.INC", 0x8c435c7c, 0x600, "Seaman Storage Matrix");
            if (iVar2 == 0) {
                g_8c436928 = 0;
            }
        }
    } else {
        puVar6 = *(u32 **)(a1 + 0x7cc);
        a7 = (char *)a1;
        iVar4 = game_sub_0cbd74(a0, iVar3, puVar6, a1);
        if (iVar4 == 5) {
            uVar1 = game_sub_0c8464(*(u32 *)(a1 + 0x7cc));
            piVar5 = *(int **)(a0 + iVar2 * 4 + 8);
            (**(code **)(*piVar5 + 0x50))(piVar5, uVar1, puVar6, a7);
        }
    }
    Vec3_pair_dtor(&uStack_54, 0xffffffff, puVar6, a7);
    Vec3_dtor(auStack_34, 0xffffffff, puVar6, a7);
    Vec3_dtor(auStack_24, 0xffffffff, puVar6, a7);
    return 0;
}

/*
 * game_sub_0c9588  0x8c0c9588
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c9588(int a0, u8 *a1, u8 *a2, u8 *a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    u8 *ar5_00;
    u8 auStack_38[8];
    u8 auStack_30[16];
    u8 auStack_20[16];

    ar5_00 = a1;
    iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(a1 + 0x7cc), a1, a2, a3);
    clear_3_words_102748(auStack_20);
    clear_2_words(auStack_38);
    iVar2 = (*(code *)(&get_field_d4_0c7424))(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
    if (iVar2 == 0) {
        iVar2 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
        if (iVar2 != 0) {
            game_sub_0c86d4(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_20);
            Vec3_sub_0c86c0(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_38);
            Vec3_sub_0c8698(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_30);
            a3 = auStack_30;
            a2 = auStack_38;
            ar5_00 = auStack_20;
            game_sub_0fff54(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
        }
        piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
        (**(code **)(0xb0 + *piVar3))(piVar3, ar5_00, a2, a3);
        if (iVar1 == 0) {
            (**(code **)(**(int **)(a0 + 8) + 0x34))(*(int **)(a0 + 8), ar5_00, a2, a3);
        } else if (iVar1 == 1) {
            (**(code **)(**(int **)(a0 + 0xc) + 0x28))(*(int **)(a0 + 0xc), ar5_00, a2, a3);
        } else if (iVar1 == 3) {
            (**(code **)(**(int **)(a0 + 0x14) + 0x28))(*(int **)(a0 + 0x14), ar5_00, a2, a3);
        }
        game_sub_0fff84(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
        piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
        (**(code **)(*piVar3 + 0x48))(piVar3, ar5_00, a2, a3);
    } else {
        game_sub_0cc524(a0, iVar2, a2, a3);
    }
    free_if_nonnull_wrap_10270c(auStack_38, 0xffffffff, a2, a3);
    free_if_nonnull_wrap_102790(auStack_20, 0xffffffff, a2, a3);
    return 0;
}

/*
 * noop_0c972c  0x8c0c972c
 */
u32 noop_0c972c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0c9738  0x8c0c9738
 * area name: game code; nothing names its area yet
 * called by: game_sub_0ca22c
 */
u32 game_sub_0c9738(int a0, u32 unused_a1, u32 a2, u32 a3) {
    (**(code **)(0x1b0 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), 1, a2, a3);
    (**(code **)(0x1b0 + **(int **)(a0 + 0xc)))(*(int **)(a0 + 0xc), 1, a2, a3);
    (**(code **)(0x1b0 + **(int **)(a0 + 0x14)))(*(int **)(a0 + 0x14), 1, a2, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), 0x8c3eb334, 1, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 0xc)))(*(int **)(a0 + 0xc), 0x8c3eb334, 1, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 0x14)))(*(int **)(a0 + 0x14), 0x8c3eb334, 1, a3);
    return 0;
}

/*
 * game_sub_0c97bc  0x8c0c97bc
 * name hint from a string it uses: GRAPHICS ENV; area name: game code; nothing names its area yet
 * strings: "uzu.nj"; "GRAPHICS\\ENV"
 */
u32 game_sub_0c97bc(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    int ar5_00;
    u32 auStack_18[2];

    ar5_00 = a1;
    iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(0x7cc + a1), a1, a2, a3);
    auStack_18[0] = 0;
    set_timeout_120_mode6(*(u32 *)(0x7cc + a1));
    piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
    iVar2 = (**(code **)(0x138 + *piVar3))(piVar3, ar5_00, a2, a3);
    if (iVar2 == 2) {
        clear_field_59c_wrap(*(u32 *)(0x7cc + a1));
    }
    if (iVar1 != 0) {
        piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
        (**(code **)(*piVar3 + 0x78))(piVar3, (u32) * (u8 *)(0xa0 + a1), a2, a3);
        set_field_d0_0c51b8(*(u32 *)(0x7cc + a1), 0);
        (**(code **)(**(int **)(a0 + 8) + 0x70))(*(int **)(a0 + 8), (u32) * (u8 *)(0xa0 + a1), a2, a3);
        game_sub_021720(0x8c2b59d0, 1, a2, a3);
        a2 = (u32) * (u8 *)(0xa0 + a1);
        (*(code *)(&game_sub_0d1c20))(*(u32 *)(a0 + iVar1 * 4 + 8), *(u32 *)(a0 + 8), a2, a3);
    }
    (**(code **)(0x84 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), 0x8c3eb334, a2, a3);
    *(u32 *)(0x2d1b0 + a0) = 2;
    *(u32 *)(0x2d1b4 + a0) = 0;
    (*(code *)(&game_sub_0209b0))(0x8c3eb334, "uzu.nj", "GRAPHICS\\ENV", auStack_18);
    return 0;
}

/*
 * noop_0c990c  0x8c0c990c
 */
u32 noop_0c990c(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_ff_0c9910  0x8c0c9910
 */
u32 ret_const_ff_0c9910(void) {
    return 0xff;
}

/*
 * game_sub_0c991c  0x8c0c991c
 * name hint from a string it uses: 44 OUTWATERCAT; area name: game code; nothing names its area yet
 * strings: "44_OUTWATERCAT"; "44_OUTWATERCAT"; "Faild to get port"
 */
u32 game_sub_0c991c(int a0, int *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int *ar5_00;
    float *a6;
    float *a7;
    float in_fr1;
    float fVar3;
    double dVar4;
    float fVar7;
    double dVar5;
    u8 *puVar8;
    double dVar6;
    u32 in_fr3;
    double in_xd0;
    bool bVar9;
    char cVar10;
    char cVar11;
    float fStack_5c;
    u32 uStack_58;
    float afStack_54[7];
    u8 auStack_2c[16];
    u8 auStack_1c[20];

    cVar11 = '\0';
    cVar10 = '\0';
    if (g_8c43726e == '\0') {
        g_8c43726c = 0;
        g_8c43726e = '\x01';
    }
    if (g_8c437274 == '\0') {
        g_8c437270 = (double)CONCAT35(DAT_8c437270_4._1_3_, 0x144610000);
    }
    if (g_8c43727c == '\0') {
        g_8c437278 = 0;
        g_8c43727c = '\x01';
    }
    if (g_8c437284 == '\0') {
        g_8c437280 = 0x3c75c28f;
        g_8c437284 = CONCAT31(DAT_8c437284_1, 1);
    }
    if (g_8c43728c == '\0') {
        g_8c437288 = 0x3b03126f;
        g_8c43728c = CONCAT31(DAT_8c43728c_1, 1);
    }
    if (g_8c437294 == '\0') {
        g_8c437290 = (double)CONCAT35(DAT_8c437290_4._1_3_, 0x1c0000000);
    }
    if (g_8c43729c == '\0') {
        g_8c437298 = 0;
        g_8c43729c = '\x01';
    }
    if (g_8c4372a4 == '\0') {
        g_8c4372a0 = 0xffffffff;
        g_8c4372a4 = '\x01';
    }
    ar5_00 = a1;
    Vec3_ctor_zero(auStack_1c, a1, a2);
    Vec3_ctor_zero(auStack_2c, ar5_00, a2);
    Vec3_pair_ctor(afStack_54 + 2, ar5_00, a2);
    afStack_54[0] = in_fr1;
    if (cVar11 == '\0') {
        afStack_54[0] = 0.0;
    }
    afStack_54[1] = 0.0;
    if (cVar11 == '\0') {
        fStack_5c = 0.0;
    } else {
        afStack_54[0] = 0.0;
        fStack_5c = in_fr1;
    }
    uStack_58 = 0;
    iVar2 = (int)*(short *)(a0 + 0x2d1ac);
    if ((iVar2 < 6) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            if (cVar11 == '\0') {
                g_8c437270 = (double)CONCAT44(g_8c437274, 0x44610000);
                g_8c437018 = 0.0;
                g_8c437040 = 5.08118523482294e-315;
                g_8c437290 = (double)CONCAT44(g_8c437294, 0xc0000000);
                g_8c43700c = g_8c437018;
            } else {
                g_8c437270 = -1.3574323400435666e-249;
                g_8c43700c = 900.0;
                uRam8c43701c = 0;
                g_8c437040 = -1.3581185561256157e-249;
                in_fr1 = -2.0;
                g_8c437290 = 8.75853762720916e-312;
            }
            g_8c437010 = g_8c43700c;
            g_8c437014 = g_8c43700c;
            g_8c437018 = g_8c43700c;
            g_8c437278 = (**(code **)(**(int **)(a0 + 8) + 0x19c))(*(int **)(a0 + 8), ar5_00, a2, a3);
            (**(code **)(**(int **)(a0 + 8) + 0xb4))(*(int **)(a0 + 8), ar5_00, a2, a3);
            g_8c437298 = (**(code **)(**(int **)(a0 + 8) + 0x104))(*(int **)(a0 + 8), 0, a2, a3);
            *(u16 *)(a0 + 0x2d1ac) = 1;
            break;
        case 1:
            if (cVar11 == '\0') {
                in_fr1 = *(float *)(g_8c437298 + 4);
                fVar3 = 665.32495;
            } else {
                in_fr1 = 665.32495;
                fVar3 = 2.58887e-40;
            }
            if (cVar10 != '\0' || in_fr1 <= fVar3) {
                *(u16 *)(a0 + 0x2d1ac) = 3;
            }
            break;
        case 3:
            iVar2 = pack_acquire_entry_handle(0x8c2b59d0, "44_OUTWATERCAT", a2, a3);
            *(int *)(a0 + 0x2d1b8) = iVar2;
            if (iVar2 == -1) {
                report_error_message("44_OUTWATERCAT", "Faild to get port", 1, 2);
            }
            *(u16 *)(a0 + 0x2d1ac) = 4;
            break;
        case 4:
            if (cVar11 == '\0') {
                dVar4 = (double)CONCAT44(0x3fc00000, g_8c437270);
            } else {
                dVar4 = 4.33415568043142e-312;
                in_xd0 = g_8c437270;
            }
            if (cVar10 == '\0') {
                fVar3 = SUB84(dVar4, 0) - (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 - dVar4, 0);
            }
            dVar4 = in_xd0;
            if (cVar11 == '\0') {
                g_8c437270 = (double)CONCAT44(g_8c437274, fVar3);
                dVar4 = g_8c437270;
            }
            g_8c437270 = dVar4;
            (**(code **)(**(int **)(a0 + 8) + 0xcc))(*(int **)(a0 + 8), ar5_00, a2, a3);
            if (cVar11 == '\0') {
                dVar4 = (double)CONCAT44(0xbe19999a, g_8c437290);
            } else {
                dVar4 = -1.357462683469945e-249;
                in_xd0 = g_8c437290;
            }
            if (cVar10 == '\0') {
                fVar3 = SUB84(dVar4, 0) + (float)((u64)dVar4 >> 0x20);
            } else {
                fVar3 = SUB84(dVar4 + dVar4, 0);
            }
            dVar6 = in_xd0;
            dVar4 = g_8c437038;
            dVar5 = in_xd0;
            if (cVar11 == '\0') {
                g_8c437290 = (double)CONCAT44(g_8c437294, fVar3);
                dVar6 = (double)CONCAT44(fVar3, g_8c437038);
                dVar4 = in_xd0;
                dVar5 = g_8c437290;
            }
            g_8c437290 = dVar5;
            if (cVar10 == '\0') {
                fVar3 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
            } else {
                fVar3 = SUB84(dVar6 + dVar6, 0);
            }
            dVar6 = dVar4;
            if (cVar11 == '\0') {
                g_8c437038 = (double)CONCAT44(DAT_8c437038_4, fVar3);
                dVar6 = g_8c437038;
            }
            g_8c437038 = dVar6;
            if (g_8c437044 == 0) {
                if (cVar11 == '\0') {
                    fVar7 = 630.0;
                    fVar3 = g_8c437270;
                } else {
                    fVar3 = 630.0;
                    fVar7 = 9.114239e+09;
                    dVar4 = g_8c437270;
                }
                if (cVar10 != '\0' || fVar3 <= fVar7) {
                    g_8c437040 = (double)CONCAT44(1, g_8c437040);
                }
            } else if (g_8c437044 == 1) {
                if (cVar11 == '\0') {
                    dVar6 = (double)CONCAT44(g_8c437280, g_8c437040);
                } else {
                    dVar6 = (double)CONCAT44(g_8c437284, g_8c437280);
                    dVar4 = g_8c437040;
                }
                if (cVar10 == '\0') {
                    fVar3 = SUB84(dVar6, 0) + (float)((u64)dVar6 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar6 + dVar6, 0);
                }
                if (cVar11 == '\0') {
                    g_8c437040 = fVar3;
                    g_8c437040 = SUB84(g_8c437040, 0);
                    dVar5 = (double)CONCAT44(0x44348000, g_8c437040);
                    dVar6 = (double)CONCAT44(g_8c437270, in_fr3);
                    g_8c437040 = g_8c437040;
                } else {
                    dVar5 = 5629500678504448.0;
                    dVar6 = g_8c437270;
                    g_8c437040 = dVar4;
                }
                if (cVar10 == '\0') {
                    fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar5 * dVar5, 0);
                }
                if (cVar11 == '\0') {
                    dVar5 = (double)CONCAT44(0x43340000, fVar3);
                } else {
                    dVar5 = 3.446719454007875e+77;
                }
                if (cVar10 == '\0') {
                    bVar9 = SUB84(dVar5, 0) + (float)((u64)dVar5 >> 0x20) < (float)((u64)dVar6 >> 0x20);
                } else {
                    bVar9 = dVar5 + dVar5 < dVar6;
                }
                if (!bVar9) {
                    g_8c437040 = (double)CONCAT44(2, g_8c437040);
                }
            } else if (g_8c437044 == 2) {
                if (cVar11 == '\0') {
                    dVar6 = (double)CONCAT44(g_8c437288, g_8c437040);
                } else {
                    dVar6 = (double)CONCAT44(g_8c43728c, g_8c437288);
                    dVar4 = g_8c437040;
                }
                if (cVar10 == '\0') {
                    fVar3 = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
                } else {
                    fVar3 = SUB84(dVar6 - dVar6, 0);
                }
                if (cVar11 == '\0') {
                    g_8c437040 = fVar3;
                    g_8c437040 = SUB84(g_8c437040, 0);
                    puVar8 = (u8 *)0x3dcccccd;
                    dVar6 = g_8c437040;
                    fVar3 = g_8c437040;
                } else {
                    fVar3 = 0.1;
                    puVar8 = &g_8c437270;
                    dVar6 = dVar4;
                }
                g_8c437040 = dVar6;
                if (cVar10 != '\0' || fVar3 <= (float)puVar8) {
                    g_8c437040 = 6.87825041940734e-314;
                }
            }
            if (cVar11 == '\0') {
                puVar8 = (u8 *)0x44340000;
                fVar3 = g_8c437270;
            } else {
                fVar3 = 720.0;
                puVar8 = &g_8c43700c;
                dVar4 = g_8c437270;
            }
            if (cVar10 == '\0' && fVar3 < (float)puVar8) {
                if (cVar11 == '\0') {
                    dVar6 = (double)CONCAT44(0x3a902de0, g_8c43700c);
                } else {
                    dVar4 = (double)CONCAT44(g_8c437010, g_8c43700c);
                    dVar6 = -0.007812501704413444;
                }
                if (cVar10 == '\0') {
                    g_8c43700c = SUB84(dVar6, 0) - (float)((u64)dVar6 >> 0x20);
                } else {
                    g_8c43700c = SUB84(dVar6 - dVar6, 0);
                }
                if (cVar11 == '\0') {
                    fVar7 = -1.0;
                    fVar3 = g_8c43700c;
                } else {
                    g_8c43700c = SUB84(dVar4, 0);
                    g_8c437010 = (float)((u64)dVar4 >> 0x20);
                    fVar3 = -1.0;
                    fVar7 = 160.0;
                }
                if (cVar10 == '\0' && fVar3 < fVar7) {
                    if (cVar11 == '\0') {
                        g_8c43700c = -1.0;
                    } else {
                        g_8c43700c = -1.0;
                        g_8c437010 = 160.0;
                    }
                }
            }
            if (cVar11 == '\0') {
                puVar8 = (u8 *)0x43200000;
                in_fr1 = g_8c437270;
            } else {
                in_fr1 = 160.0;
                puVar8 = &g_8c437278;
            }
            if (cVar10 != '\0' || in_fr1 <= (float)puVar8) {
                Class_12b580_sub_022104(0x8c2b59d0, *(u32 *)(g_8c437278 + 0x5e4), a2, a3);
                Class_12b580_sub_0220bc(0x8c2b59d0, *(u32 *)(g_8c437278 + 0x5e4), a2, a3);
                if (cVar11 == '\0') {
                    g_8c437270 = (double)CONCAT44(g_8c437274, 0x43200000);
                } else {
                    in_fr1 = 160.0;
                    g_8c437270 = -1.358093006003901e-249;
                }
                g_8c43726c = (u16)*a1;
                *(u16 *)(a0 + 0x2d1ac) = 5;
            }
            break;
        case 5:
            if (0x2d < *a1 - (u32)g_8c43726c) {
                *(u32 *)(a0 + 0x2d15c) = 3;
            }
        }
    }
    a7 = &fStack_5c;
    (**(code **)(**(int **)(a0 + 8) + 0x13c))(*(int **)(a0 + 8), afStack_54, &uStack_58, a7);
    if (cVar11 != '\0') {
        in_fr1 = fStack_5c;
    }
    afStack_54[6] = afStack_54[0];
    if (cVar11 == '\0') {
        afStack_54[2] = 0.0;
        afStack_54[4] = in_fr1;
    } else {
        afStack_54[4] = 500.0;
        afStack_54[2] = in_fr1;
    }
    afStack_54[3] = 500.0;
    if (cVar11 == '\0') {
        afStack_54[4] = 0.0;
    } else {
        afStack_54[5] = 0.0;
    }
    a6 = afStack_54 + 2;
    (**(code **)(**(int **)(a0 + 8) + 0xc))(*(int **)(a0 + 8), a1, a6, a7);
    (**(code **)(**(int **)(a0 + 8) + 0xd4))(*(int **)(a0 + 8), &g_8c43700c, a6, a7);
    if (*(int *)(a0 + 0x2d1b0) != 4) {
        uVar1 = game_sub_0ca2cc(a0, a0 + 0x2d1b0, a6, a7);
        *(u32 *)(a0 + 0x2d1b0) = uVar1;
    }
    Vec3_pair_dtor(afStack_54 + 2, 0xffffffff, a6, a7);
    Vec3_dtor(auStack_2c, 0xffffffff, a6, a7);
    Vec3_dtor(auStack_1c, 0xffffffff, a6, a7);
    return 0;
}

/*
 * noop_0c9ed0  0x8c0c9ed0
 */
u32 noop_0c9ed0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0c9ed4  0x8c0c9ed4
 */
u32 noop_0c9ed4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0c9ed8  0x8c0c9ed8
 */
u32 ret_const_0_0c9ed8(void) {
    return 0;
}

/*
 * game_sub_0c9ee0  0x8c0c9ee0
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0c9ee0(int a0, u8 *a1, u8 *a2, u8 *a3) {
    int iVar1;
    u32 ar4_00;
    u32 a5;
    u8 *ar5_00;
    u64 in_dr0;
    char cVar2;
    u32 in_stack_ffffffa0;
    u64 uStack_60;
    u8 auStack_54[8];
    u8 auStack_2c[16];
    u8 auStack_1c[16];

    cVar2 = '\0';
    ar5_00 = a1;
    clear_3_words_102748(auStack_1c);
    clear_2_words(auStack_54);
    iVar1 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
    if (iVar1 != 0) {
        game_sub_0c86d4(*(u32 *)(a0 + 8), auStack_1c);
        Vec3_sub_0c86c0(*(u32 *)(a0 + 8), auStack_54);
        Vec3_sub_0c8698(*(u32 *)(a0 + 8), auStack_2c);
        a3 = auStack_2c;
        a2 = auStack_54;
        ar5_00 = auStack_1c;
        game_sub_0fff54(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
    }
    (**(code **)(**(int **)(a0 + 8) + 0xb0))(*(int **)(a0 + 8), ar5_00, a2, a3);
    if (((*(int *)(a0 + 0x2d1b0) == 4) && (g_8c437044 != 0)) && (g_8c437044 != 3)) {
        a5 = 0x900;
        gfxlib_sub_233da2(0xffffffff, 0x900);
        (**(code **)(**(int **)(a0 + 8) + 0x184))(*(int **)(a0 + 8), a5, a2, a3);
        uStack_60 = in_dr0;
        if (cVar2 == '\0') {
            uStack_60 = CONCAT44(iVar1, (int)((u64)in_dr0 >> 0x20));
        }
        obj_set_texlist(0x8c437028, a5, a2);
        ar4_00 = 0;
        matrix_push(0, a5, a2, a3, in_stack_ffffffa0);
        touch_fields_30_3c_wrap();
        game_sub_019128();
        matrix_scale_wrap(ar4_00, a5);
        game_sub_015adc(0x8c437030, a5, a2, a3);
        matrix_pop_n(1);
        ar5_00 = (u8 *)0x800;
        gfxlib_sub_233da2(0xffffffff, 0x800);
    }
    (**(code **)(**(int **)(a0 + 8) + 0x40))(*(int **)(a0 + 8), ar5_00, a2, a3);
    free_if_nonnull_wrap_10270c(auStack_54, 0xffffffff, a2, a3);
    free_if_nonnull_wrap_102790(auStack_1c, 0xffffffff, a2, a3);
    return 0;
}

/*
 * noop_0ca0dc  0x8c0ca0dc
 */
u32 noop_0ca0dc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0ca0e0  0x8c0ca0e0
 * name hint from a string it uses: GRAPHICS ENV; area name: game code; nothing names its area yet
 * strings: "uzu.nj"; "GRAPHICS\\ENV"; "GRAPHICS\\ENV"; "uzu.nj"
 */
u32 game_sub_0ca0e0(int a0, int a1, u32 a2, u32 a3) {
    u32 ar4_00;
    int iVar1;
    u8 *ar5_00;
    u32 ar5_01;
    u8 *ar6_00;

    iVar1 = a1;
    if (*(int *)(0x2d1b8 + a0) != -1) {
        iVar1 = *(int *)(0x2d1b8 + a0);
        pack_release_entry_handle(0x8c2b59d0, iVar1, a2, a3);
    }
    set_fields_0_4_8_0c5330(a0 + 0x2d1b0);
    CTexture_ReleaseFromVRAM(0x8c437028, iVar1, a2, a3);
    (*(code *)(&game_sub_020a70))(0x8c3eb334, "uzu.nj", "GRAPHICS\\ENV", a0);
    ar6_00 = "GRAPHICS\\ENV";
    ar5_00 = "uzu.nj";
    iVar1 = a0;
    game_sub_020b68(0x8c3eb334, ar5_00, ar6_00, a0);
    (**(code **)(0xb0 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), ar5_00, ar6_00, iVar1);
    (**(code **)(**(int **)(a0 + 8) + 0x40))(*(int **)(a0 + 8), ar5_00, ar6_00, iVar1);
    (**(code **)(0x90 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), 0x8c3eb334, ar6_00, iVar1);
    ar5_01 = 0;
    set_timeout_120(*(u32 *)(0x7cc + a1), 0);
    ar4_00 = *(u32 *)(0x7cc + a1);
    set_fields_12c_130(ar4_00);
    *(u16 *)(0x2d1ac + a0) = 0;
    *(u8 *)(0xa0 + a1) = 2;
    *(u32 *)(0x2d160 + a0) = 0;
    *(u32 *)(0x2d15c + a0) = 2;
    CAnimal_sub_0c4e2c(ar4_00, ar5_01, ar6_00, iVar1);
    game_sub_0c4e48();
    return 0;
}

/*
 * noop_0ca228  0x8c0ca228
 */
u32 noop_0ca228(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0ca22c  0x8c0ca22c
 * name hint from a string it uses: GRAPHICS ENV; area name: game code; nothing names its area yet
 * strings: "uzu.nj"; "GRAPHICS\\ENV"; "GRAPHICS\\ENV"; "uzu.nj"
 */
u32 game_sub_0ca22c(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u8 *ar6_00;
    int ar7_00;

    ar5_00 = a1;
    if (*(int *)(0x2d1b8 + a0) != -1) {
        ar5_00 = *(u32 *)(0x2d1b8 + a0);
        pack_release_entry_handle(0x8c2b59d0, ar5_00, a2, a3);
    }
    CTexture_ReleaseFromVRAM(0x8c437028, ar5_00, a2, a3);
    (*(code *)(&game_sub_020a70))(0x8c3eb334, "uzu.nj", "GRAPHICS\\ENV", a0);
    ar6_00 = "GRAPHICS\\ENV";
    ar7_00 = a0;
    game_sub_020b68(0x8c3eb334, "uzu.nj", ar6_00, a0);
    game_sub_0c9738(a0, a1, ar6_00, ar7_00);
    return 0;
}

/*
 * game_sub_0ca2cc  0x8c0ca2cc
 * name hint from a string it uses: GRAPHICS ENV; area name: game code; nothing names its area yet
 * called by: game_sub_0c991c
 * strings: "GRAPHICS\\ENV"; "uzu.nj"; "GRAPHICS\\ENV"; "uzu.nj" ...
 */
u32 game_sub_0ca2cc(u32 unused_a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 ar7_00;
    char *pcVar2;
    u32 *puVar3;
    u32 uVar4;
    u32 uStack_1c;
    u32 auStack_18[2];

    uVar4 = 2;
    auStack_18[0] = 0;
    uStack_1c = 0;
    iVar1 = *(int *)(a1 + 4);
    if (iVar1 == 0) {
        puVar3 = auStack_18;
        pcVar2 = "GRAPHICS\\ENV";
        iVar1 = game_sub_0209b0(0x8c3eb334, "uzu.nj", "GRAPHICS\\ENV", puVar3);
        if (iVar1 == 1) {
            set_field_0_015ad4(0x8c437030, auStack_18[0], pcVar2);
            *(u32 *)(a1 + 4) = 1;
        } else if (iVar1 == 0) {
            report_error_message("uzu.nj", "Failed NJCM:CGame::LoadForEvent1Models()", 0, 2);
        }
    } else if (iVar1 == 1) {
        puVar3 = &uStack_1c;
        pcVar2 = "GRAPHICS\\ENV";
        iVar1 = game_sub_020aa8(0x8c3eb334, "uzu.nj", "GRAPHICS\\ENV", puVar3);
        if (iVar1 == 1) {
            Class_129920_m0_015248(0x8c437028, uStack_1c, pcVar2, puVar3);
            *(u32 *)(a1 + 4) = 2;
        } else if (iVar1 == 0) {
            report_error_message("uzu.nj", "Failed NJTL:CGame::LoadForEvent1Models()", 0, 2);
        }
    } else if (iVar1 == 2) {
        ar7_00 = get_field_4_0253e4(0x8c437028, a1, a2, a3);
        iVar1 = game_sub_020e80(0x8c3eb334, "SCREW", "GRAPHICS\\ENV", ar7_00);
        if (iVar1 == 1) {
            *(u32 *)(a1 + 4) = 3;
            uVar4 = 4;
        } else if (iVar1 == 0) {
            report_error_message("SCREW", "Failed NJTL:CGame::LoadForEvent1Models()", 0, 2);
        }
    }
    return uVar4;
}

/*
 * game_sub_0ca458  0x8c0ca458
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0ca458(int a0, int a1, u32 a2, u32 a3) {
    int *a4;
    u32 a5;

    *(u16 *)(0x2d1ac + a0) = 0;
    (**(code **)(**(int **)(a0 + 8) + 0x24))(*(int **)(a0 + 8), 0x8c3eb334, a2, a3);
    (**(code **)(**(int **)(a0 + 0xc) + 0x18))(*(int **)(a0 + 0xc), 0x8c3eb334, a2, a3);
    (**(code **)(**(int **)(a0 + 0x14) + 0x18))(*(int **)(a0 + 0x14), 0x8c3eb334, a2, a3);
    a5 = (u32) * (u8 *)(0xa0 + a1);
    a4 = *(int **)(a0 + 8);
    (**(code **)(0x98 + *a4))(a4, a5, a2, a3);
    gfxlib_sub_235ee4();
    gfxlib_sub_235ee4();
    (**(code **)(**(int **)(a0 + 8) + 0x70))(*(int **)(a0 + 8), 2, a2, a3);
    return 0;
}

/*
 * noop_0ca4e4  0x8c0ca4e4
 */
u32 noop_0ca4e4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0ca4e8  0x8c0ca4e8
 * name hint from a string it uses: SEAMAN SM; area name: game code; nothing names its area yet
 * strings: "Seaman Storage Matrix"; "SM2000US.INC"; "Seaman Storage Matrix"
 */
u32 game_sub_0ca4e8(int a0, code *a1, int a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    code *ar5_00;
    u32 *a6;
    u32 *puVar6;
    char *a7;
    u32 in_fr1;
    char cVar7;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    u32 uStack_48;
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar7 = '\0';
    ar5_00 = a1;
    if (g_8c4372b4 == '\0') {
        uVar1 = Vec3_ctor_zero(0x8c4372b8, a1, a2);
        a2 = 0x8c4372a8;
        ar5_00 = Vec3_dtor;
        global_list_push(uVar1, Vec3_dtor, 0x8c4372a8, a3);
        g_8c4372b4 = '\x01';
    }
    Vec3_ctor_zero(auStack_24, ar5_00, a2);
    Vec3_ctor_zero(auStack_34, ar5_00, a2);
    Vec3_pair_ctor(&uStack_54, ar5_00, a2);
    if (cVar7 == '\0') {
        uStack_5c = 0;
    } else {
        uStack_54 = 0;
        uStack_5c = in_fr1;
    }
    uStack_58 = 0;
    if (cVar7 == '\0') {
        uStack_60 = 0;
    } else {
        uStack_5c = 0;
        uStack_60 = in_fr1;
    }
    iVar2 = get_field_d4_0c7424(*(u32 *)(a1 + 0x7cc), ar5_00);
    if (iVar2 == 0) {
        a2 = a0 + 8;
        ar5_00 = *(code **)(a1 + 0x7cc);
        game_sub_0cbca4(a0, ar5_00, a2, a3);
    }
    iVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
    game_sub_0ffdb0(*(u32 *)(a1 + 0x7cc));
    game_sub_101004(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
    a7 = (char *)&uStack_60;
    a6 = &uStack_5c;
    puVar6 = &uStack_58;
    piVar5 = *(int **)(a0 + iVar2 * 4 + 8);
    (**(code **)(*piVar5 + 0x13c))(piVar5, puVar6, a6, a7);
    if (cVar7 != '\0') {
        in_fr1 = uStack_60;
    }
    if (cVar7 == '\0') {
        uStack_54 = 0;
        uStack_4c = in_fr1;
    } else {
        uStack_4c = 0x43fa0000;
        uStack_54 = in_fr1;
    }
    uStack_50 = 0x43fa0000;
    if (cVar7 == '\0') {
        uStack_4c = 0;
    } else {
        uStack_48 = 0;
    }
    iVar3 = get_field_d4_0c7424(*(u32 *)(a1 + 0x7cc), puVar6);
    if (iVar3 == 0) {
        iVar4 = a0 + 8;
        iVar3 = sh4_sub_0b9244(a1, iVar4, a6, a7);
        if (iVar3 == 1) {
            (**(code **)(**(int **)(a0 + 8) + 0xac))(*(int **)(a0 + 8), iVar4, a6, a7);
            (**(code **)(**(int **)(a0 + 0xc) + 0xac))(*(int **)(a0 + 0xc), iVar4, a6, a7);
        }
        puVar6 = (u32 *)0x8c4372bc;
        Class_12acc8_sub_101210(*(u32 *)(a1 + 0x7cc), 0x8c4372b8, 0x8c4372bc);
        uVar1 = 0x8c4372b8;
        piVar5 = *(int **)(a0 + iVar2 * 4 + 8);
        (**(code **)(*piVar5 + 100))(piVar5, 0x8c4372b8, puVar6, a7);
        iVar3 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), uVar1, puVar6);
        if ((iVar3 != 0) && (iVar3 = game_sub_0fff28(*(u32 *)(a1 + 0x7cc), uVar1, puVar6, a7), iVar3 == 4)) {
            game_sub_0cdf50(a0, a1, puVar6, a7);
        }
        if (iVar2 == 0) {
            (**(code **)(**(int **)(a0 + 8) + 0xc))(*(int **)(a0 + 8), a1, &uStack_54, a7);
            (**(code **)(**(int **)(a0 + 0xc) + 0x10))(*(int **)(a0 + 0xc), a1, &uStack_54, a7);
            puVar6 = &uStack_54;
            (**(code **)(**(int **)(a0 + 0x14) + 0x10))(*(int **)(a0 + 0x14), a1, puVar6, a7);
        } else if (iVar2 == 1) {
            (**(code **)(**(int **)(a0 + 0xc) + 0xc))(*(int **)(a0 + 0xc), a1, &uStack_54, a7);
            (**(code **)(**(int **)(a0 + 8) + 0x10))(*(int **)(a0 + 8), a1, &uStack_54, a7);
            puVar6 = &uStack_54;
            (**(code **)(**(int **)(a0 + 0x14) + 0x10))(*(int **)(a0 + 0x14), a1, puVar6, a7);
        } else if (iVar2 == 3) {
            (**(code **)(**(int **)(a0 + 0x14) + 0xc))(*(int **)(a0 + 0x14), a1, &uStack_54, a7);
            (**(code **)(**(int **)(a0 + 8) + 0x10))(*(int **)(a0 + 8), a1, &uStack_54, a7);
            puVar6 = &uStack_54;
            (**(code **)(**(int **)(a0 + 0xc) + 0x10))(*(int **)(a0 + 0xc), a1, puVar6, a7);
        }
        if ((g_8c436928 == 1) && (g_8c13bcc4 == 1)) {
            (**(code **)(**(int **)(a0 + 0x14) + 0xf8))(*(int **)(a0 + 0x14), 0x8c435c7c, puVar6, a7);
            a7 = "Seaman Storage Matrix";
            puVar6 = (u32 *)0x600;
            iVar2 = game_sub_0b6c3c("SM2000US.INC", 0x8c435c7c, 0x600, "Seaman Storage Matrix");
            if (iVar2 == 0) {
                g_8c436928 = 0;
            }
        }
    } else {
        puVar6 = *(u32 **)(a1 + 0x7cc);
        a7 = (char *)a1;
        iVar4 = game_sub_0cbd74(a0, iVar3, puVar6, a1);
        if (iVar4 == 5) {
            uVar1 = game_sub_0c8464(*(u32 *)(a1 + 0x7cc));
            piVar5 = *(int **)(a0 + iVar2 * 4 + 8);
            (**(code **)(*piVar5 + 0x50))(piVar5, uVar1, puVar6, a7);
        }
    }
    Vec3_pair_dtor(&uStack_54, 0xffffffff, puVar6, a7);
    Vec3_dtor(auStack_34, 0xffffffff, puVar6, a7);
    Vec3_dtor(auStack_24, 0xffffffff, puVar6, a7);
    return 0;
}

/*
 * game_sub_0ca88c  0x8c0ca88c
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0ca88c(int a0, u8 *a1, u8 *a2, u8 *a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    u8 *ar5_00;
    u8 auStack_38[8];
    u8 auStack_30[16];
    u8 auStack_20[16];

    ar5_00 = a1;
    iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(a1 + 0x7cc), a1, a2, a3);
    clear_3_words_102748(auStack_20);
    clear_2_words(auStack_38);
    iVar2 = (*(code *)(&get_field_d4_0c7424))(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
    if (iVar2 == 0) {
        iVar2 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
        if (iVar2 != 0) {
            game_sub_0c86d4(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_20);
            Vec3_sub_0c86c0(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_38);
            Vec3_sub_0c8698(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_30);
            a3 = auStack_30;
            a2 = auStack_38;
            ar5_00 = auStack_20;
            game_sub_0fff54(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
        }
        piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
        (**(code **)(0xb0 + *piVar3))(piVar3, ar5_00, a2, a3);
        if (iVar1 == 0) {
            (**(code **)(**(int **)(a0 + 8) + 0x38))(*(int **)(a0 + 8), ar5_00, a2, a3);
        } else if (iVar1 == 1) {
            (**(code **)(**(int **)(a0 + 0xc) + 0x28))(*(int **)(a0 + 0xc), ar5_00, a2, a3);
        } else if (iVar1 == 3) {
            (**(code **)(**(int **)(a0 + 0x14) + 0x28))(*(int **)(a0 + 0x14), ar5_00, a2, a3);
        }
        game_sub_0fff84(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
        piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
        (**(code **)(*piVar3 + 0x48))(piVar3, ar5_00, a2, a3);
    } else {
        game_sub_0cc524(a0, iVar2, a2, a3);
    }
    free_if_nonnull_wrap_10270c(auStack_38, 0xffffffff, a2, a3);
    free_if_nonnull_wrap_102790(auStack_20, 0xffffffff, a2, a3);
    return 0;
}

/*
 * noop_0caa30  0x8c0caa30
 */
u32 noop_0caa30(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0caa3c  0x8c0caa3c
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cb560
 */
u32 game_sub_0caa3c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    (**(code **)(0x1b0 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), 1, a2, a3);
    (**(code **)(0x1b0 + **(int **)(a0 + 0xc)))(*(int **)(a0 + 0xc), 1, a2, a3);
    (**(code **)(0x1b0 + **(int **)(a0 + 0x14)))(*(int **)(a0 + 0x14), 1, a2, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), 0x8c3eb334, 2, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 0xc)))(*(int **)(a0 + 0xc), 0x8c3eb334, 2, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 0x14)))(*(int **)(a0 + 0x14), 0x8c3eb334, 2, a3);
    return 0;
}

/*
 * game_sub_0caac0  0x8c0caac0
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0caac0(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    int ar5_00;
    u32 a5;

    ar5_00 = a1;
    iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(0x7cc + a1), a1, a2, a3);
    set_timeout_120_mode6(*(u32 *)(0x7cc + a1));
    piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
    iVar2 = (**(code **)(0x138 + *piVar3))(piVar3, ar5_00, a2, a3);
    if (iVar2 == 2) {
        clear_field_59c_wrap(*(u32 *)(0x7cc + a1));
    }
    if (iVar1 != 0) {
        piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
        (**(code **)(*piVar3 + 0x78))(piVar3, (u32) * (u8 *)(0xa0 + a1), a2, a3);
        set_field_d0_0c51b8(*(u32 *)(0x7cc + a1), 0);
        (**(code **)(**(int **)(a0 + 8) + 0x70))(*(int **)(a0 + 8), (u32) * (u8 *)(0xa0 + a1), a2, a3);
        game_sub_021720(0x8c2b59d0, 1, a2, a3);
        a2 = (u32) * (u8 *)(0xa0 + a1);
        (*(code *)(&game_sub_0d1c20))(*(u32 *)(a0 + iVar1 * 4 + 8), *(u32 *)(a0 + 8), a2, a3);
    }
    (**(code **)(0x88 + **(int **)(a0 + 8)))(*(int **)(a0 + 8), 0x8c3eb334, a2, a3);
    *(u32 *)(0x2d1b0 + a0) = 2;
    (**(code **)(0x88 + **(int **)(a0 + 0x10)))(*(int **)(a0 + 0x10), 0x8c3eb334, a2, a3);
    a5 = (u32) * (u8 *)(0xa0 + a1);
    piVar3 = *(int **)(a0 + 0x10);
    (**(code **)(0x98 + *piVar3))(piVar3, a5, a2, a3);
    gfxlib_sub_235ee4();
    return 0;
}

/*
 * noop_0cac04  0x8c0cac04
 */
u32 noop_0cac04(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0cac08  0x8c0cac08
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cac08(int a0, u32 a1, u32 unused_a2, float *a3) {
    int iVar1;
    u8 *puVar2;
    u8 *puVar3;
    u32 in_fr1;
    double dVar4;
    float fVar5;
    code *pcVar6;
    char cVar7;
    char cVar8;
    u8 auStack_5c[32];
    u8 auStack_3c[4];
    u8 auStack_38[4];
    u8 auStack_34[8];
    u8 auStack_2c[4];
    u8 auStack_28[4];
    float afStack_24[2];
    u8 auStack_1c[4];
    u8 auStack_18[4];
    float afStack_14[3];

    cVar8 = '\0';
    cVar7 = '\0';
    puVar3 = &g_8c4372ca;
    if (g_8c4372ca == '\0') {
        g_8c4372c8 = 0;
        g_8c4372ca = '\x01';
    }
    if (g_8c4372ce == '\0') {
        g_8c4372cc = 0;
        g_8c4372ce = '\x01';
    }
    puVar2 = &g_8c4372d2;
    if (g_8c4372d2 == '\0') {
        g_8c4372d0 = 0;
        puVar2 = (u8 *)0x1;
        g_8c4372d2 = '\x01';
    }
    if (g_8c4372d8 == '\0') {
        g_8c4372d4 = 0;
        g_8c4372d8 = '\x01';
    }
    if (g_8c4372e0 == '\0') {
        g_8c4372dc = 0;
        g_8c4372e0 = '\x01';
    }
    Vec3_ctor_zero(auStack_1c, puVar2, &g_8c4372ca);
    Vec3_ctor_zero(auStack_2c, puVar2, puVar3);
    Vec3_ctor_zero(auStack_3c, puVar2, puVar3);
    Vec3_pair_ctor(auStack_5c, puVar2, puVar3);
    if (g_8c4372e8 == '\0') {
        g_8c4372e4 = (**(code **)(**(int **)(a0 + 0x10) + 0x144))(*(int **)(a0 + 0x10), puVar2, puVar3, a3);
        g_8c4372e8 = '\x01';
    }
    if (g_8c4372f0 == '\0') {
        g_8c4372ec = 0xaa;
        g_8c4372f0 = '\x01';
    }
    iVar1 = (int)*(short *)(a0 + 0x2d1ac);
    if ((iVar1 < 8) && (-1 < iVar1)) {
        switch (iVar1) {
        case 0:
            Class_12b3b8_sub_019384(0x8c436f4c);
            g_8c4372c8 = 0;
            g_8c4372cc = 0;
            g_8c4372d0 = 0;
            g_8c436a18 = 0xffffff;
            g_8c436a14 = 0xffffff;
            g_8c436a10 = 0xffffff;
            g_8c436a0c = 0xffffff;
            a3 = (float *)0x4;
            puVar3 = &g_8c436a0c;
            puVar2 = &g_8c4369ec;
            set_fields_0_4_c(0x8c436978, &g_8c4369ec, &g_8c436a0c, 4);
            g_8c4372dc = (**(code **)(**(int **)(a0 + 8) + 0x10c))(*(int **)(a0 + 8), puVar2, puVar3, a3);
            *(u16 *)(a0 + 0x2d1ac) = 1;
            break;
        case 1:
            if (cVar8 == '\0') {
                in_fr1 = *(u32 *)(g_8c4372dc + 0x14);
            }
            if (cVar7 == '\0') {
                dVar4 = (double)CONCAT44((float)g_8c4372ec, in_fr1);
            } else {
                dVar4 = (double)g_8c4372ec;
            }
            if (cVar7 == '\0' && (float)((u64)dVar4 >> 0x20) < SUB84(dVar4, 0)) {
                g_8c4372d4 = (**(code **)(**(int **)(a0 + 8) + 0xe4))(*(int **)(a0 + 8), puVar2, puVar3, a3);
                *(u16 *)(a0 + 0x2d1ac) = 2;
            }
            break;
        case 2:
            (**(code **)(**(int **)(a0 + 8) + 0xe0))(*(int **)(a0 + 8), puVar2, puVar3, a3);
            (**(code **)(**(int **)(a0 + 0x10) + 0xc4))(*(int **)(a0 + 0x10), g_8c4372e4 >> 2, puVar3, a3);
            g_8c4372cc = g_8c4372c8;
            *(u16 *)(a0 + 0x2d1ac) = 3;
            break;
        case 3:
            (**(code **)(**(int **)(a0 + 8) + 0xec))(*(int **)(a0 + 8), puVar2, puVar3, a3);
            if ((4 < (int)g_8c4372c8 - (int)g_8c4372cc) && ((int)g_8c4372c8 - (int)g_8c4372cc < 0x88)) {
                puVar2 = (u8 *)0x2;
                iVar1 = libgcc_divide_helper_01031c((int)g_8c4372c8 - (int)g_8c4372cc, 2, puVar3);
                if (iVar1 == 0) {
                    set_field_84(0x8c436f4c);
                } else {
                    Class_129a24_sub_019b48(0x8c436f4c);
                }
            }
            iVar1 = (**(code **)(**(int **)(a0 + 8) + 0xf0))(*(int **)(a0 + 8), puVar2, puVar3, a3);
            if (iVar1 == 1) {
                g_8c4372c8 = 0;
                get_vec3_field_44(0x8c436f4c, auStack_1c, auStack_18, afStack_14);
                (**(code **)(*(int *)(g_8c4372d4 + 8) + 0x134))(g_8c4372d4, auStack_3c, auStack_38, auStack_34);
                a3 = afStack_24;
                puVar3 = auStack_28;
                puVar2 = auStack_2c;
                get_vec3_field_30(g_8c4372d4, puVar2, puVar3, a3);
                game_sub_019560(0x8c436f4c);
                *(u16 *)(a0 + 0x2d1ac) = 4;
            }
            break;
        case 4:
            a3 = afStack_24;
            puVar3 = auStack_28;
            get_vec3_field_30(g_8c4372d4, auStack_2c, puVar3, a3);
            if (cVar8 == '\0') {
                fVar5 = 10.0;
            } else {
                afStack_24[0] = 10.0;
                fVar5 = 2.58887e-40;
            }
            if (cVar7 == '\0' && afStack_24[0] < fVar5) {
                *(u16 *)(a0 + 0x2d1ac) = 5;
            }
            break;
        case 5:
            set_field_88(0x8c436f4c);
            a3 = afStack_14;
            puVar3 = auStack_18;
            puVar2 = auStack_1c;
            get_vec3_field_44(0x8c436f4c, puVar2, puVar3, a3);
            if (cVar8 == '\0') {
                pcVar6 = (code *)0x426b3340;
            } else {
                afStack_14[0] = 58.80005;
                pcVar6 = game_sub_019560;
            }
            if (cVar7 == '\0' && afStack_14[0] < (float)pcVar6) {
                game_sub_019560(0x8c436f4c);
                *(u16 *)(a0 + 0x2d1ac) = 6;
            }
            break;
        case 6:
            iVar1 = (**(code **)(*(int *)(g_8c4372d4 + 8) + 0xfc))(g_8c4372d4, puVar2, puVar3, a3);
            if (iVar1 == 1) {
                g_8c4372cc = g_8c4372c8;
                *(u16 *)(a0 + 0x2d1ac) = 7;
            }
            break;
        case 7:
            if (0x59 < (int)g_8c4372c8 - (int)g_8c4372cc) {
                *(u16 *)(a0 + 0x2d1ac) = 0;
                g_8c4372d4 = 0;
                *(u32 *)(a0 + 0x2d15c) = 3;
            }
        }
    }
    (**(code **)(**(int **)(a0 + 0x10) + 0xc4))(*(int **)(a0 + 0x10), g_8c4372e4 >> 2, puVar3, a3);
    (**(code **)(**(int **)(a0 + 0x10) + 0xc))(*(int **)(a0 + 0x10), a1, auStack_5c, a3);
    puVar3 = auStack_5c;
    (**(code **)(**(int **)(a0 + 8) + 0x14))(*(int **)(a0 + 8), a1, puVar3, a3);
    Class_129a24_m1_019b68(0x8c436f4c, a1, puVar3, a3);
    g_8c4372c8 = g_8c4372c8 + 1;
    Vec3_pair_dtor(auStack_5c, 0xffffffff, puVar3, a3);
    Vec3_dtor(auStack_3c, 0xffffffff, puVar3, a3);
    Vec3_dtor(auStack_2c, 0xffffffff, puVar3, a3);
    Vec3_dtor(auStack_1c, 0xffffffff, puVar3, a3);
    return 0;
}

/*
 * noop_0cb1dc  0x8c0cb1dc
 */
u32 noop_0cb1dc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * get_vec3_field_44  0x8c0cb1e0
 * copies the three words at +0x44 to the pointers in a1..a3
 * called by: game_sub_0cac08, game_sub_0cb29c
 */
u32 *get_vec3_field_44(int a0, u32 *a1, u32 *a2, u32 *a3) {
    *a1 = *(u32 *)(a0 + 0x44);
    *a2 = *(u32 *)(a0 + 0x48);
    *a3 = *(u32 *)(a0 + 0x4c);
    return (u32 *)(a0 + 0x48);
}

/*
 * noop_0cb1fc  0x8c0cb1fc
 */
u32 noop_0cb1fc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0cb200  0x8c0cb200
 */
u32 noop_0cb200(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0cb204  0x8c0cb204
 */
u32 noop_0cb204(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0cb208  0x8c0cb208
 */
u32 ret_const_0_0cb208(void) {
    return 0;
}

/*
 * ret_const_0_0cb210  0x8c0cb210
 */
u32 ret_const_0_0cb210(void) {
    return 0;
}

/*
 * ret_const_0_0cb218  0x8c0cb218
 */
u32 ret_const_0_0cb218(void) {
    return 0;
}

/*
 * game_sub_0cb220  0x8c0cb220
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cb220(int a0, u32 a1, u32 a2, u32 a3) {
    int *a4;
    u32 ar4_00;
    u32 in_PR;

    a4 = *(int **)(a0 + 8);
    (**(code **)(*a4 + 0x44))(a4, a1, a2, a3);
    gfxlib_sub_219070();
    ar4_00 = 0;
    matrix_push(0, a1, a2, a3, in_PR);
    touch_fields_30_3c_wrap();
    (**(code **)(**(int **)(a0 + 0x10) + 0x28))(*(int **)(a0 + 0x10), a1, a2, a3);
    matrix_pop_n(1);
    return 0;
}

/*
 * noop_0cb298  0x8c0cb298
 */
u32 noop_0cb298(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0cb29c  0x8c0cb29c
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cb29c(int a0, int a1, int a2, u32 a3) {
    int iVar1;
    u8 *puVar2;
    u32 uVar3;
    u32 uVar4;
    u32 ar6_00;
    u8 *ar6_01;
    u8 *ar7_00;
    u8 auStack_48[16];
    u8 auStack_38[16];
    u8 auStack_28[4];
    u8 auStack_24[4];
    u8 auStack_20[12];

    iVar1 = a1;
    Vec3_ctor_zero(auStack_28, a1, a2);
    Vec3_ctor_zero(auStack_38, iVar1, a2);
    while (iVar1 = (**(code **)(**(int **)(a0 + 8) + 0x11c))(*(int **)(a0 + 8), 5, a2, a3), iVar1 != 0) {
        a2 = iVar1 + -1;
        uVar4 = (**(code **)(**(int **)(a0 + 8) + 0x100))(*(int **)(a0 + 8), 5, a2, a3);
        uVar3 = uVar4;
        (**(code **)(**(int **)(a0 + 8) + 0x5c))(*(int **)(a0 + 8), uVar4, a2, a3);
        Vec3_ctor_copy_wrap_02f670(uVar4, uVar3, a2, a3, auStack_48);
        Vec3_assign(auStack_38, auStack_48, a2, a3);
        uVar3 = 0xffffffff;
        Vec3_dtor(auStack_48, 0xffffffff, a2, a3);
        set_vec3_field_30(uVar4, uVar3, a2);
        (**(code **)(**(int **)(a0 + 0x10) + 0x4c))(*(int **)(a0 + 0x10), uVar4, a2, a3);
    }
    (**(code **)(**(int **)(a0 + 8) + 0x78))(*(int **)(a0 + 8), 2, a2, a3);
    (**(code **)(**(int **)(a0 + 8) + 0x9c))(*(int **)(a0 + 8), 2, a2, a3);
    (**(code **)(**(int **)(a0 + 8) + 0x1b0))(*(int **)(a0 + 8), 1, a2, a3);
    ar6_00 = 2;
    (**(code **)(**(int **)(a0 + 8) + 0x1b4))(*(int **)(a0 + 8), 0x8c3eb334, 2, a3);
    uVar3 = 2;
    set_field_d0_0c51b8(*(u32 *)(a1 + 0x7cc), 2);
    set_timeout_120_mode6(*(u32 *)(a1 + 0x7cc));
    uVar3 = 0x8c3eb334;
    (**(code **)(**(int **)(a0 + 0x10) + 0x94))(*(int **)(a0 + 0x10), 0x8c3eb334, ar6_00, a3);
    uVar3 = (**(code **)(**(int **)(a0 + 0x10) + 0x14c))(*(int **)(a0 + 0x10), uVar3, ar6_00, a3);
    uVar4 = 0x8c3eb334;
    WEATHRE_UNIT_CreateGraphics(uVar3, 0x8c3eb334, ar6_00, a3);
    noop_0d8458();
    (**(code **)(**(int **)(a0 + 0x10) + 0x70))(*(int **)(a0 + 0x10), 3, ar6_00, a3);
    ar7_00 = auStack_20;
    ar6_01 = auStack_24;
    puVar2 = auStack_28;
    get_vec3_field_44(0x8c436f4c, puVar2, ar6_01, ar7_00);
    game_sub_019560(0x8c436f4c);
    Class_129a24_m1_019b68(0x8c436f4c, puVar2, ar6_01, ar7_00);
    (**(code **)(**(int **)(a0 + 0x10) + 0x28))(*(int **)(a0 + 0x10), puVar2, ar6_01, ar7_00);
    (**(code **)(**(int **)(a0 + 0x10) + 0xb4))(*(int **)(a0 + 0x10), puVar2, ar6_01, ar7_00);
    uVar3 = 0x8c3eb334;
    puVar2 = &g_8c436a28;
    game_sub_0cef18(&g_8c436a28, 0x8c3eb334);
    *(u8 *)(a1 + 0xa0) = 3;
    *(u32 *)(a0 + 0x2d160) = 0;
    *(u32 *)(a0 + 0x2d15c) = 2;
    CAnimal_sub_0c4e2c(puVar2, uVar3, ar6_01, ar7_00);
    game_sub_0c4e48();
    Vec3_dtor(auStack_38, 0xffffffff, ar6_01, ar7_00);
    Vec3_dtor(auStack_28, 0xffffffff, ar6_01, ar7_00);
    return 0;
}

/*
 * ret_const_0_0cb54c  0x8c0cb54c
 */
u32 ret_const_0_0cb54c(void) {
    return 0;
}

/*
 * noop_0cb554  0x8c0cb554
 */
u32 noop_0cb554(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0cb558  0x8c0cb558
 */
u32 ret_const_0_0cb558(void) {
    return 0;
}

/*
 * game_sub_0cb560  0x8c0cb560
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cb560(int a0, u32 unused_a1, u32 a2, u32 a3) {
    game_sub_0caa3c(a0, unused_a1, a2, a3);
    (**(code **)(0x9c + **(int **)(a0 + 0x10)))(*(int **)(a0 + 0x10), 3, a2, a3);
    (**(code **)(0x1b0 + **(int **)(a0 + 0x10)))(*(int **)(a0 + 0x10), 1, a2, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 0x10)))(*(int **)(a0 + 0x10), 0x8c3eb334, 3, a3);
    return 0;
}

/*
 * game_sub_0cb5c8  0x8c0cb5c8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cb5c8(int a0, int a1, u32 a2, u32 a3) {
    u32 ar5_00;

    ar5_00 = 2;
    set_field_d0_0c51b8(*(u32 *)(0x7cc + a1), 2);
    set_timeout_120_mode6(*(u32 *)(0x7cc + a1));
    (**(code **)(**(int **)(a0 + 0x10) + 0x18))(*(int **)(a0 + 0x10), 0x8c3eb334, a2, a3);
    (**(code **)(**(int **)(a0 + 0xc) + 0x18))(*(int **)(a0 + 0xc), 0x8c3eb334, a2, a3);
    (**(code **)(**(int **)(a0 + 0x14) + 0x18))(*(int **)(a0 + 0x14), 0x8c3eb334, a2, a3);
    (**(code **)(0x98 + **(int **)(a0 + 0x10)))(*(int **)(a0 + 0x10), (u32) * (u8 *)(0xa0 + a1), a2, a3);
    (**(code **)(**(int **)(a0 + 0x10) + 0x70))(*(int **)(a0 + 0x10), 3, a2, a3);
    game_sub_0cef18(0x8c436a28, 0x8c3eb334);
    return 0;
}

/*
 * game_sub_0cb668  0x8c0cb668
 * name hint from a string it uses: SEAMAN SM; area name: game code; nothing names its area yet
 * strings: "Seaman Storage Matrix"; "SM2000US.INC"; "Seaman Storage Matrix"
 */
u32 game_sub_0cb668(int a0, code *a1, u32 a2, u32 a3) {
    u32 uVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    code *pcVar5;
    u32 ar5_00;
    int ar5_01;
    int ar6_00;
    u32 *a6;
    char *a7;
    u32 in_fr1;
    char cVar6;
    u32 uStack_64;
    u32 uStack_60;
    u32 uStack_5c;
    u32 uStack_58;
    u32 uStack_54;
    u32 uStack_50;
    u32 uStack_4c;
    u32 uStack_48;
    u8 auStack_34[16];
    u8 auStack_24[20];

    cVar6 = '\0';
    uStack_58 = 0;
    pcVar5 = a1;
    if (g_8c437300 == '\0') {
        uVar1 = Vec3_ctor_zero(0x8c437304, a1, a2);
        a2 = 0x8c4372f4;
        pcVar5 = Vec3_dtor;
        global_list_push(uVar1, Vec3_dtor, 0x8c4372f4, a3);
        g_8c437300 = '\x01';
    }
    Vec3_ctor_zero(auStack_24, pcVar5, a2);
    Vec3_ctor_zero(auStack_34, pcVar5, a2);
    Vec3_pair_ctor(&uStack_54, pcVar5, a2);
    if (cVar6 == '\0') {
        uStack_60 = 0;
    } else {
        uStack_58 = 0;
        uStack_60 = in_fr1;
    }
    uStack_5c = 0;
    if (cVar6 == '\0') {
        uStack_64 = 0;
    } else {
        uStack_60 = 0;
        uStack_64 = in_fr1;
    }
    uVar1 = 0;
    ar6_00 = a0 + 8;
    ar5_00 = *(u32 *)(a1 + 0x7cc);
    game_sub_0cbd0c(a0, ar5_00, ar6_00, a3);
    iVar2 = get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), ar5_00, ar6_00);
    ar5_01 = a0 + 8;
    iVar3 = sh4_sub_0b9244(a1, ar5_01, ar6_00, a3);
    if (iVar3 == 1) {
        (**(code **)(**(int **)(a0 + 0x10) + 0xac))(*(int **)(a0 + 0x10), ar5_01, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 0xc) + 0xac))(*(int **)(a0 + 0xc), ar5_01, ar6_00, a3);
        g_8c436a28 = 0;
    }
    game_sub_0ffdb0(*(u32 *)(a1 + 0x7cc));
    a7 = (char *)&uStack_64;
    piVar4 = *(int **)(a0 + iVar2 * 4 + 8);
    (**(code **)(*piVar4 + 0x13c))(piVar4, &uStack_5c, &uStack_60, a7);
    if (cVar6 != '\0') {
        in_fr1 = uStack_64;
    }
    if (cVar6 == '\0') {
        uStack_54 = 0;
        uStack_4c = in_fr1;
    } else {
        uStack_4c = 0x43fa0000;
        uStack_54 = in_fr1;
    }
    uStack_50 = 0x43fa0000;
    if (cVar6 == '\0') {
        uStack_4c = 0;
    } else {
        uStack_48 = 0;
    }
    a6 = (u32 *)0x8c437308;
    Class_12acc8_sub_101210(*(u32 *)(a1 + 0x7cc), 0x8c437304, 0x8c437308);
    pcVar5 = (code *)0x8c437304;
    piVar4 = *(int **)(a0 + iVar2 * 4 + 8);
    (**(code **)(*piVar4 + 100))(piVar4, 0x8c437304, a6, a7);
    iVar3 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), pcVar5, a6);
    if ((iVar3 != 0) && (iVar3 = game_sub_0fff28(*(u32 *)(a1 + 0x7cc), pcVar5, a6, a7), iVar3 == 4)) {
        pcVar5 = a1;
        game_sub_0cdf50(a0, a1, a6, a7);
    }
    if (iVar2 == 2) {
        game_sub_101004(*(u32 *)(a1 + 0x7cc), pcVar5, a6, a7);
        game_sub_101188(*(u32 *)(a1 + 0x7cc), pcVar5, a6, a7);
        uVar1 = Class_12b580_sub_101154(*(u32 *)(a1 + 0x7cc));
        (**(code **)(**(int **)(a0 + 0x10) + 0xc))(*(int **)(a0 + 0x10), a1, &uStack_54, a7);
        (**(code **)(**(int **)(a0 + 0xc) + 0x10))(*(int **)(a0 + 0xc), a1, &uStack_54, a7);
        a6 = &uStack_54;
        (**(code **)(**(int **)(a0 + 0x14) + 0x10))(*(int **)(a0 + 0x14), a1, a6, a7);
    } else if (iVar2 == 1) {
        uVar1 = 0;
        (**(code **)(**(int **)(a0 + 0xc) + 0xc))(*(int **)(a0 + 0xc), a1, &uStack_54, a7);
        (**(code **)(**(int **)(a0 + 0x10) + 0x10))(*(int **)(a0 + 0x10), a1, &uStack_54, a7);
        a6 = &uStack_54;
        (**(code **)(**(int **)(a0 + 0x14) + 0x10))(*(int **)(a0 + 0x14), a1, a6, a7);
    } else if (iVar2 == 3) {
        uVar1 = 0;
        (**(code **)(**(int **)(a0 + 0x14) + 0xc))(*(int **)(a0 + 0x14), a1, &uStack_54, a7);
        (**(code **)(**(int **)(a0 + 0x10) + 0x10))(*(int **)(a0 + 0x10), a1, &uStack_54, a7);
        a6 = &uStack_54;
        (**(code **)(**(int **)(a0 + 0xc) + 0x10))(*(int **)(a0 + 0xc), a1, a6, a7);
    }
    game_sub_0ceff8(&g_8c436a28, uVar1, a6, a7);
    if ((g_8c436928 == 1) && (g_8c13bcc4 == 1)) {
        (**(code **)(**(int **)(a0 + 0x14) + 0xf8))(*(int **)(a0 + 0x14), 0x8c435c7c, a6, a7);
        a7 = "Seaman Storage Matrix";
        a6 = (u32 *)0x600;
        iVar2 = game_sub_0b6c3c("SM2000US.INC", 0x8c435c7c, 0x600, "Seaman Storage Matrix");
        if (iVar2 == 0) {
            g_8c436928 = 0;
        }
    }
    Vec3_pair_dtor(&uStack_54, 0xffffffff, a6, a7);
    Vec3_dtor(auStack_34, 0xffffffff, a6, a7);
    Vec3_dtor(auStack_24, 0xffffffff, a6, a7);
    return 0;
}

/*
 * game_sub_0cb9c8  0x8c0cb9c8
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cb9c8(int a0, u8 *a1, u8 *a2, u8 *a3) {
    int iVar1;
    int iVar2;
    int *piVar3;
    u8 *ar5_00;
    u8 auStack_38[8];
    u8 auStack_30[16];
    u8 auStack_20[16];

    ar5_00 = a1;
    iVar1 = (*(code *)(&get_field_d0_0c51fc))(*(u32 *)(a1 + 0x7cc), a1, a2, a3);
    clear_3_words_102748(auStack_20);
    clear_2_words(auStack_38);
    iVar2 = get_field_4_on_field_d8(*(u32 *)(a1 + 0x7cc), ar5_00, a2);
    if (iVar2 != 0) {
        game_sub_0c86d4(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_20);
        Vec3_sub_0c86c0(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_38);
        Vec3_sub_0c8698(*(u32 *)(a0 + iVar1 * 4 + 8), auStack_30);
        a3 = auStack_30;
        a2 = auStack_38;
        ar5_00 = auStack_20;
        game_sub_0fff54(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
    }
    piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
    (**(code **)(0xb0 + *piVar3))(piVar3, ar5_00, a2, a3);
    piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
    (**(code **)(*piVar3 + 0x28))(piVar3, ar5_00, a2, a3);
    game_sub_0fff84(*(u32 *)(a1 + 0x7cc), ar5_00, a2, a3);
    piVar3 = *(int **)(a0 + iVar1 * 4 + 8);
    (**(code **)(*piVar3 + 0x48))(piVar3, ar5_00, a2, a3);
    game_sub_0cf63c(0x8c436a28, ar5_00, a2, a3);
    free_if_nonnull_wrap_10270c(auStack_38, 0xffffffff, a2, a3);
    free_if_nonnull_wrap_102790(auStack_20, 0xffffffff, a2, a3);
    return 0;
}

/*
 * game_sub_0cbb2c  0x8c0cbb2c
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cbb2c(int a0, u32 unused_a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 ar6_00;

    (**(code **)(0x1b0 + **(int **)(a0 + 0x10)))(*(int **)(a0 + 0x10), 1, a2, a3);
    (**(code **)(0x1b0 + **(int **)(a0 + 0xc)))(*(int **)(a0 + 0xc), 1, a2, a3);
    (**(code **)(0x1b0 + **(int **)(a0 + 0x14)))(*(int **)(a0 + 0x14), 1, a2, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 0x10)))(*(int **)(a0 + 0x10), 0x8c3eb334, 3, a3);
    (**(code **)(0x1b4 + **(int **)(a0 + 0xc)))(*(int **)(a0 + 0xc), 0x8c3eb334, 3, a3);
    ar6_00 = 3;
    ar5_00 = 0x8c3eb334;
    (**(code **)(0x1b4 + **(int **)(a0 + 0x14)))(*(int **)(a0 + 0x14), 0x8c3eb334, 3, a3);
    game_sub_0cf144(0x8c436a28, ar5_00);
    game_sub_0cf1bc(0x8c436a28, 0x8c3eb334, ar6_00, a3);
    return 0;
}

/*
 * game_sub_0cbbcc  0x8c0cbbcc
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c8134
 */
u32 game_sub_0cbbcc(u32 unused_a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *a4;
    int ar6_00;

    iVar2 = a1;
    ar6_00 = a2;
    iVar1 = game_sub_100154(a1);
    if (iVar1 == 1) {
        ar6_00 = 0;
        iVar2 = a2;
        game_sub_0c4e58(a1, a2, 0, a3);
    }
    iVar2 = get_field_d0_0c51fc(a1, iVar2, ar6_00);
    a4 = *(int **)(iVar2 * 4 + a2);
    (**(code **)(*a4 + 0x6c))(a4, a1, 0, a3);
    return 1;
}

/*
 * ret_const_1_0cbc34  0x8c0cbc34
 */
u32 ret_const_1_0cbc34(void) {
    return 1;
}

/*
 * game_sub_0cbc3c  0x8c0cbc3c
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c91f4
 */
u32 game_sub_0cbc3c(u32 unused_a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *a4;
    int ar6_00;

    iVar2 = a1;
    ar6_00 = a2;
    iVar1 = game_sub_100154(a1);
    if (iVar1 == 1) {
        ar6_00 = 1;
        iVar2 = a2;
        game_sub_0c4e58(a1, a2, 1, a3);
    }
    iVar2 = get_field_d0_0c51fc(a1, iVar2, ar6_00);
    a4 = *(int **)(iVar2 * 4 + a2);
    (**(code **)(*a4 + 0x6c))(a4, a1, 1, a3);
    return 1;
}

/*
 * game_sub_0cbca4  0x8c0cbca4
 * area name: game code; nothing names its area yet
 * called by: game_sub_0ca4e8
 */
u32 game_sub_0cbca4(u32 unused_a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *a4;
    int ar6_00;

    iVar2 = a1;
    ar6_00 = a2;
    iVar1 = game_sub_100154(a1);
    if (iVar1 == 1) {
        ar6_00 = 2;
        iVar2 = a2;
        game_sub_0c4e58(a1, a2, 2, a3);
    }
    iVar2 = get_field_d0_0c51fc(a1, iVar2, ar6_00);
    a4 = *(int **)(iVar2 * 4 + a2);
    (**(code **)(*a4 + 0x6c))(a4, a1, 2, a3);
    return 1;
}

/*
 * game_sub_0cbd0c  0x8c0cbd0c
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cb668
 */
u32 game_sub_0cbd0c(u32 unused_a0, int a1, int a2, u32 a3) {
    int iVar1;
    int iVar2;
    int *a4;
    int ar6_00;

    iVar2 = a1;
    ar6_00 = a2;
    iVar1 = game_sub_100154(a1);
    if (iVar1 == 1) {
        ar6_00 = 3;
        iVar2 = a2;
        game_sub_0c4e58(a1, a2, 3, a3);
    }
    iVar2 = get_field_d0_0c51fc(a1, iVar2, ar6_00);
    a4 = *(int **)(iVar2 * 4 + a2);
    (**(code **)(*a4 + 0x6c))(a4, a1, 3, a3);
    return 1;
}

/*
 * game_sub_0cbd74  0x8c0cbd74
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c8134, game_sub_0c91f4, game_sub_0ca4e8
 */
u32 game_sub_0cbd74(int a0, u8 *a1, int a2, int a3) {
    int iVar1;
    int *piVar2;
    u8 *puVar3;
    int iVar4;
    u8 *a6;
    u8 *a5;
    int ar7_00;
    int ar4_00;
    float fVar5;
    u32 uVar6;
    double in_dr0;
    u64 uVar7;
    u64 uVar8;
    float fVar10;
    double dVar9;
    u8 *puVar11;
    u32 in_fr3;
    double in_xd0;
    bool bVar12;
    u64 uStack_b4;
    double *pdStack_9c;
    double *pdStack_98;
    u64 uStack_94;
    int iStack_8c;
    u64 uStack_88;
    int iStack_80;
    u64 uStack_7c;
    int iStack_74;
    int iStack_70;
    int iStack_6c;
    int iStack_68;
    int iStack_64;
    int iStack_60;
    int iStack_5c;
    int iStack_54;
    int iStack_50;
    int iStack_4c;
    u32 uStack_48;
    u32 uStack_44;
    u32 uStack_40;
    u8 auStack_3c[36];

    puVar3 = a1;
    iVar4 = a2;
    ar7_00 = a3;
    if (g_8c437320 == '\0') {
        uStack_44 = Vec3_set_zero(0x8c437324);
        puVar3 = (&object_dtor_delete);
        iVar4 = 0x8c437314;
        (*(code *)(&global_list_push))(uStack_44, (&object_dtor_delete), 0x8c437314, ar7_00);
        g_8c437320 = '\x01';
    }
    if (g_8c43733c == '\0') {
        uStack_48 = Vec3_ctor_zero(0x8c437340, puVar3, iVar4);
        puVar3 = (&Vec3_dtor);
        iVar4 = 0x8c437330;
        global_list_push(uStack_48, (&Vec3_dtor), 0x8c437330, ar7_00);
        g_8c43733c = '\x01';
    }
    if (g_8c437354 == '\0') {
        g_8c437350 = 0;
        g_8c437354 = '\x01';
    }
    Vec3_pair_ctor(auStack_3c, puVar3, iVar4);
    iStack_4c = (**(code **)(0x144 + *(int *)(a1 + 8)))(a1, puVar3, iVar4, ar7_00);
    uVar6 = SUB84(in_dr0, 0);
    ar4_00 = iStack_4c + 0xb0;
    iVar1 = *(int *)(0x2d39c + a0);
    if (iVar1 == 0) {
        iStack_50 = (**(code **)(0x144 + *(int *)(a1 + 8)))(a1, puVar3, iVar4, ar7_00);
        g_8c437350 = iStack_50 + 0xf8;

        uVar7 = CONCAT44((u32)g_8c0cbf2c, uVar6);
        uStack_88 = CONCAT44(uStack_88._4_4_, (u32)g_8c0cbf2c);

        *(u32 *)(a0 + 0x2d3a4) = (u32)uStack_88;
        uVar7 = CONCAT44((u32)uStack_88, (int)uVar7);

        *(u32 *)(a0 + 0x2d3a8) = (u32)uStack_88;
        uVar7 = CONCAT44((u32)uStack_88, (int)uVar7);

        iVar1 = g_8c437350;
        vec3_copy_8c023d8c(a0 + 0x2d3b0, iVar1, iVar4, ar7_00);

        *(u32 *)0x8c437324 = 0;

        *(u32 *)((int)0x8c437324 + 4) = 0;

        uVar7 = uVar7 & 0xffffffff;

        *(u32 *)(0x8c437324 + 1) = 0;

        iStack_54 = get_field_24_05c284(a1, iVar1);
        if (iStack_54 == 1) {

            in_dr0 = (double)CONCAT44((u32)g_8c0cbfd8, (int)uVar7);
            *(u32 *)(a0 + 0x2d3ac) = (u32)g_8c0cbfd8;

        } else {
            in_dr0 = (double)(uVar7 & 0xffffffff);

            *(u32 *)(a0 + 0x2d3ac) = 0;
        }
        ar7_00 = 0x8c437340 + 8;
        iVar4 = 0x8c437340 + 4;
        iVar1 = 0x8c437340;
        get_vec3_field_30(a1, 0x8c437340, iVar4, ar7_00);
        set_vec3_field_30(a1, iVar1, iVar4);
        set_fields_50_54_58(a1);
        (**(code **)(*(int *)(a1 + 8) + 0x6c))(a1, iVar1, iVar4, ar7_00);
        *(u32 *)(0x2d39c + a0) = 1;
        iStack_8c = get_field_d0_0c51fc(a2, iVar1, iVar4);
        puVar3 = (u8 *)(u32) * (u8 *)(0xa0 + a3);
        piVar2 = *(int **)(a0 + iStack_8c * 4 + 8);
        (**(code **)(*piVar2 + 0x78))(piVar2, puVar3, iVar4, ar7_00);
        gfxlib_sub_235ee4();
    } else if (iVar1 == 1) {

        dVar9 = (double)CONCAT44(g_8c0cc070, *(u32 *)(a0 + 0x2d3a4));

        fVar5 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);

        uStack_94 = in_xd0;

        uStack_94 = (double)CONCAT44(a0, fVar5);

        *(u32 *)(uStack_94._4_4_ + 0x2d3a4) = (u32)uStack_94;
        dVar9 = (double)CONCAT44((u32)uStack_94, fVar5);

        *(u32 *)(a0 + 0x2d3a8) = (u32)uStack_94;
        in_dr0 = (double)CONCAT44((u32)uStack_94, SUB84(dVar9, 0));

        in_dr0 = (double)(u64) * (u32 *)(a0 + 0x2d3a4);

        if (0.0 <= SUB84(in_dr0, 0)) {

            *(u32 *)(a0 + 0x2d3a4) = 0;

            *(u32 *)(0x2d39c + a0) = 2;
        }
        in_dr0 = (double)((u64)in_dr0 & 0xffffffff);
        iStack_5c = game_sub_1001e0(a2);
        if (iStack_5c == 1) {
            *(u32 *)(0x2d39c + a0) = 3;
        }
    } else if (iVar1 == 2) {
        iStack_60 = game_sub_1009c8(a2);
        uVar6 = SUB84(in_dr0, 0);
        if (iStack_60 == 1) {

            uVar6 = *(u32 *)(a0 + 0x2d3b0);

            in_dr0 = (double)CONCAT44(*(u32 *)(g_8c437350 + 0x18), uVar6);

            if ((float)((u64)in_dr0 >> 0x20) < SUB84(in_dr0, 0)) {

                in_dr0 = (double)CONCAT44(g_8c0cc0c8, SUB84(in_dr0, 0));
                *(u32 *)0x8c437324 = g_8c0cc0c8;
            }
        } else {
            iStack_64 = game_sub_1009ec(a2);
            uVar6 = SUB84(in_dr0, 0);
            if (iStack_64 == 1) {

                uVar6 = *(u32 *)(a0 + 0x2d3b0);

                in_dr0 = (double)CONCAT44(*(u32 *)(g_8c437350 + 0xc), uVar6);

                if (SUB84(in_dr0, 0) < (float)((u64)in_dr0 >> 0x20)) {

                    in_dr0 = (double)CONCAT44(g_8c0cc148, SUB84(in_dr0, 0));
                    *(u32 *)0x8c437324 = g_8c0cc148;
                }
            }
        }
        uVar6 = SUB84(in_dr0, 0);
        iStack_68 = game_sub_100a10(a2);
        if (iStack_68 == 1) {

            uVar6 = *(u32 *)(a0 + 0x2d3b4);

            uVar8 = CONCAT44(*(u32 *)(g_8c437350 + 0x10), uVar6);

            if ((float)uVar8 < (float)((u64)uVar8 >> 0x20)) {

                *(u32 *)((int)0x8c437324 + 4) = g_8c0cc154;
            }
        } else {
            iStack_6c = game_sub_100a34(a2);
            if (iStack_6c == 1) {

                uVar6 = *(u32 *)(a0 + 0x2d3b4);

                uVar8 = CONCAT44(*(u32 *)(g_8c437350 + 0x1c), uVar6);

                if ((float)((u64)uVar8 >> 0x20) < (float)uVar8) {

                    *(float *)((int)0x8c437324 + 4) = g_8c0cc328;
                }
            }
        }

        fVar5 = *(float *)0x8c437324;
        fVar10 = g_8c0cc32c;

        if (fVar5 <= fVar10) {

            fVar5 = *(float *)0x8c437324;

            if (0.0 < fVar5) {

                dVar9 = (double)CONCAT44(g_8c0cc330, *(float *)0x8c437324);

                fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);

                *(float *)0x8c437324 = fVar5;
                fVar5 = *(float *)0x8c437324;

                if (fVar5 <= 0.0) {

                    *(float *)0x8c437324 = 0.0;
                }
            }
        }

        fVar5 = *(float *)0x8c437324;
        fVar10 = g_8c0cc334;

        if (fVar10 <= fVar5) {

            fVar5 = *(float *)0x8c437324;

            if (fVar5 < 0.0) {

                dVar9 = (double)CONCAT44(g_8c0cc330, *(float *)0x8c437324);

                fVar5 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);

                *(float *)0x8c437324 = fVar5;
                fVar5 = *(float *)0x8c437324;

                if (0.0 <= fVar5) {

                    *(float *)0x8c437324 = 0.0;
                }
            }
        }

        fVar5 = *(float *)((int)0x8c437324 + 4);
        fVar10 = g_8c0cc32c;

        if (fVar5 <= fVar10) {

            fVar5 = *(float *)((int)0x8c437324 + 4);

            if (0.0 < fVar5) {
                pdStack_98 = 0x8c437324;

                dVar9 = (double)CONCAT44(g_8c0cc330, *(float *)((int)0x8c437324 + 4));

                fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);

                *(float *)((int)0x8c437324 + 4) = fVar5;

                fVar5 = *(float *)((int)0x8c437324 + 4);

                if (fVar5 <= 0.0) {

                    *(float *)((int)0x8c437324 + 4) = 0.0;
                }
            }
        }

        fVar5 = *(float *)((int)0x8c437324 + 4);
        fVar10 = g_8c0cc334;

        if (fVar10 <= fVar5) {

            fVar5 = *(float *)((int)0x8c437324 + 4);

            if (fVar5 < 0.0) {
                pdStack_9c = 0x8c437324;

                dVar9 = (double)CONCAT44(g_8c0cc330, *(float *)((int)0x8c437324 + 4));

                fVar5 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);

                *(float *)((int)0x8c437324 + 4) = fVar5;

                fVar5 = *(float *)((int)0x8c437324 + 4);

                if (0.0 <= fVar5) {

                    *(float *)((int)0x8c437324 + 4) = 0.0;
                }
            }
        }

        dVar9 = (double)CONCAT44(*(float *)0x8c437324, *(u32 *)(a0 + (int)0x2d3b0));

        fVar5 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);

        *(float *)(a0 + (int)0x2d3b0) = fVar5;

        dVar9 = (double)CONCAT44(*(float *)((int)0x8c437324 + 4), *(u32 *)(a0 + 0x2d3b4));

        fVar5 = SUB84(dVar9, 0) + (float)((u64)dVar9 >> 0x20);

        *(float *)(a0 + 0x2d3b4) = fVar5;

        fVar5 = *(float *)(a0 + 0x2d3ac);

        fVar5 = fVar5 + 1.0;

        *(float *)(a0 + 0x2d3ac) = fVar5;
        iStack_70 = get_field_4_of_field_0(ar4_00);

        dVar9 = (double)CONCAT44(*(u32 *)(a0 + 0x2d3ac), in_fr3);

        fVar5 = (float)iStack_70;
        in_dr0 = (double)(u64)(u32)fVar5;
        if (fVar5 < 0.0) {

            in_dr0 = (double)CONCAT44(g_8c0cc344, fVar5);

            fVar5 = (float)((u64)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar5, SUB84(in_dr0, 0) + fVar5);
        }

        bVar12 = (float)((u64)dVar9 >> 0x20) < SUB84(in_dr0, 0);

        if (!bVar12) {
            iStack_74 = get_field_24_05c284(a1, puVar3);
            if (iStack_74 == 1) {

                in_dr0 = (double)CONCAT44(g_8c0cc378, SUB84(in_dr0, 0));
                *(u32 *)(a0 + 0x2d3ac) = g_8c0cc378;

            } else {
                in_dr0 = (double)((u64)in_dr0 & 0xffffffff);

                *(u32 *)(a0 + 0x2d3ac) = 0;
            }
        }
        iVar1 = game_sub_1001e0(a2);
        uStack_7c = CONCAT44(iVar1, (u32)uStack_7c);
        if (iVar1 == 1) {
            *(u32 *)(0x2d39c + a0) = 3;
        }
    } else if (iVar1 == 3) {

        dVar9 = (double)CONCAT44(g_8c0cc4ac, *(u32 *)(a0 + 0x2d3a4));

        fVar5 = SUB84(dVar9, 0) - (float)((u64)dVar9 >> 0x20);

        *(float *)(a0 + 0x2d3a4) = fVar5;

        in_dr0 = (double)CONCAT44(g_8c0cc4b0, *(u32 *)(a0 + 0x2d3a4));
        if (SUB84(in_dr0, 0) <= (float)((u64)in_dr0 >> 0x20)) {
            *(u32 *)(0x2d39c + a0) = 5;
        }
    }

    *(u32 *)((int)&uStack_b4 + 0x88) = 0;

    uVar7 = (u64)in_dr0 & 0xffffffff;

    *(u32 *)((int)&uStack_b4 + 0x8c) = 0;

    (**(code **)(0x120 + *(int *)(a1 + 8)))(a1, puVar3, iVar4, ar7_00);
    uVar6 = (u32)(uVar7 >> 0x20);

    uStack_7c = CONCAT44(uStack_7c._4_4_, uVar6);
    *(u32 *)((int)&uStack_b4 + 0x90) = uVar6;

    a6 = auStack_3c;
    (**(code **)(*(int *)(a1 + 8) + 0x18))(a1, a3, a6, ar7_00);
    if (*(int *)(0x2d39c + a0) == 5) {
        puVar3 = g_8c0cc4cc;
        puVar11 = (&set_vec3_field_30);

        puVar3 = *(u8 **)(0x8c437340 + 8);
        puVar11 = g_8c0cc4cc;

        if ((float)puVar11 < (float)puVar3) {

            *(u8 **)(0x8c437340 + 8) = g_8c0cc4cc;
        }
        iVar1 = 0x8c437340 + 8;
        iVar4 = 0x8c437340;
        set_vec3_field_30(a1, iVar1, 0x8c437340);
        (**(code **)(*(int *)(a1 + 8) + 0x6c))(a1, iVar1, iVar4, ar7_00);
        uStack_b4._4_4_ = get_field_d0_0c51fc(a2, iVar1, iVar4);
        a5 = (u8 *)(u32) * (u8 *)(0xa0 + a3);
        piVar2 = *(int **)(a0 + uStack_b4._4_4_ * 4 + 8);
        a6 = a5;
        iStack_80 = uStack_b4._4_4_;
        (**(code **)(*piVar2 + 0x70))(piVar2, a5, a5, ar7_00);
        uStack_b4._0_4_ = get_field_d0_0c51fc(a2, a5, a6);
        uStack_88 = CONCAT44((int)uStack_b4, (u32)uStack_88);
        piVar2 = *(int **)(a0 + (int)uStack_b4 * 4 + 8);
        (**(code **)(0xa0 + *piVar2))(piVar2, a5, a6, ar7_00);

        *(u32 *)(a0 + 0x2d3a4) = g_8c0cc4b0;

        uStack_40 = 5;
        *(u32 *)(0x2d39c + a0) = 0;
    } else {
        uStack_40 = *(u32 *)(0x2d39c + a0);
    }
    Vec3_pair_dtor(auStack_3c, 0xffffffff, a6, ar7_00);
    return uStack_40;
}

/*
 * get_ptr_8c0cc520  0x8c0cc518
 * returns the address 0x8c0cc520
 */
u32 *get_ptr_8c0cc520(void) {
    return &g_8c0cc520;
}

/*
 * game_sub_0cc524  0x8c0cc524
 * area name: game code; nothing names its area yet
 * called by: Vec3_sub_0c84f4, game_sub_0c9588, game_sub_0ca88c
 */
u32 game_sub_0cc524(int a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    u32 ar4_00;
    u32 *ar5_00;
    u32 *ar6_00;
    int ar5_01;
    u32 in_fr1;
    float fVar3;
    u64 uVar4;
    double dVar5;
    int iVar6;
    char cVar7;
    char cVar8;
    u32 in_stack_ffffff50;
    u64 uStack_b0;
    u32 auStack_a0[3];
    u32 uStack_94;
    u8 auStack_88[72];
    u64 uStack_40;

    cVar8 = '\0';
    cVar7 = '\0';
    uStack_94 = g_8c13ce90;
    iVar6 = a1;
    iVar1 = (**(code **)(*(int *)(a1 + 8) + 0x144))(a1, a1, a2, a3);
    ar5_01 = iVar1 + 0xb0;
    if (cVar8 == '\0') {
        uVar4 = CONCAT44(*(u32 *)(a0 + 0x2d3b4), in_fr1);
    } else {
        auStack_a0[0] = (u32)((u64) * (u64 *)(a0 + 0x2d3b0) >> 0x20);
        uVar4 = *(u64 *)(a0 + 0x2d3b4);
    }
    if (g_8c43735c == '\0') {
        if (cVar8 == '\0') {
            uVar4 = CONCAT44(0x3e99999a, (int)uVar4);
            g_8c437358 = CONCAT44(g_8c43735c, 0x3e99999a);
        } else {
            uVar4 = 0x8c4373643e99999a;
            g_8c437358 = 0x8c4373643e99999a;
        }
        g_8c437358 = CONCAT14(1, g_8c437358);
    }
    if (g_8c437364 == '\0') {
        if (cVar8 == '\0') {
            uVar4 = CONCAT44(0x3d4ccccd, (int)uVar4);
            g_8c437360 = CONCAT44(g_8c437364, 0x3d4ccccd);
        } else {
            uVar4 = 0x8c2363e83d4ccccd;
            g_8c437360 = 0x8c2363e83d4ccccd;
        }
        g_8c437360 = CONCAT14(1, g_8c437360);
    }
    gfxlib_sub_2363e8(auStack_88, iVar6, a2, a3, in_stack_ffffff50);
    (**(code **)(*(int *)(a1 + 8) + 0x120))(a1, iVar6, a2, a3);
    uStack_b0 = uVar4;
    if (cVar8 == '\0') {
        uVar2 = (u32)((u64)uVar4 >> 0x20);
        uStack_b0 = CONCAT44(iVar1, uVar2);
        uStack_40 = CONCAT44(uStack_40._4_4_, uVar2);
        uVar4 = uStack_40;
    }
    uStack_40 = uVar4;
    ninja_sub_2572ec(auStack_88);
    ar6_00 = auStack_a0;
    ar5_00 = &uStack_94;
    uVar2 = 0;
    kamui_sub_21279c(0, ar5_00, ar6_00, a3, in_stack_ffffff50);
    gfxlib_sub_219038();
    set_vec3_g_278744();
    gfxlib_sub_219070();
    obj_set_texlist(0x8c43691c, ar5_00, ar6_00);
    matrix_push(0, ar5_00, ar6_00, a3, in_stack_ffffff50);
    touch_fields_30_3c(0, ar5_00, ar6_00, a3, in_stack_ffffff50);
    uVar2 = 0;
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x2d3b4));
    } else {
        dVar5 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar3 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar5 = -3.739346301775294e-250;
    }
    if (cVar7 == '\0') {
        iVar6 = (int)(SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20));
    } else {
        iVar6 = (int)(dVar5 / dVar5);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x47800000, *(u32 *)(a0 + 0x2d3b0));
    } else {
        dVar5 = 1.4411521878487204e+18;
    }
    if (cVar7 == '\0') {
        fVar3 = SUB84(dVar5, 0) * (float)((u64)dVar5 >> 0x20);
    } else {
        fVar3 = SUB84(dVar5 * dVar5, 0);
    }
    if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(0x43b40000, fVar3);
    } else {
        dVar5 = -3.739346301775294e-250;
    }
    if (cVar7 == '\0') {
        iVar1 = (int)(SUB84(dVar5, 0) / (float)((u64)dVar5 >> 0x20));
    } else {
        iVar1 = (int)(dVar5 / dVar5);
    }
    matrix_sub_256b0c(0, iVar1, iVar6, 0, in_stack_ffffff50);
    game_sub_015b54(0x8c43690c, ar5_01);
    ar4_00 = 1;
    matrix_pop_n(1);
    gfxlib_sub_219070();
    game_sub_0f4b44(a1);
    matrix_push(0, ar5_01, iVar6, uVar2, in_stack_ffffff50);
    touch_fields_30_3c(0, ar5_01, iVar6, uVar2, in_stack_ffffff50);
    set_fields_50_54_58(a1);
    (**(code **)(*(int *)(a1 + 8) + 0x38))(a1, ar5_01, iVar6, uVar2);
    uVar2 = matrix_pop_n(1);
    return uVar2;
}

/*
 * CGame_sub_0cc784  0x8c0cc784
 * area name: only called from CGame methods
 * called by: CGame_Initial
 */
u32 CGame_sub_0cc784(int a0, int a1, u32 a2, u32 a3) {
    u32 a6;
    u32 uVar1;
    u32 uVar2;
    int iVar3;
    u32 uVar4;
    code *a6_00;
    int *a4;
    u32 ar6_00;
    u32 uVar5;
    int iVar6;
    u64 *puVar7;
    u8 *a5;
    int iVar8;
    u64 in_dr0;
    double dVar9;
    double in_dr2;
    u32 uVar10;
    double dVar11;
    float fVar12;
    bool bVar13;
    char cVar14;
    char cVar15;
    int iStack_4c;
    int iStack_48;
    u8 auStack_44[16];
    u16 uStack_34;
    u8 bStack_32;
    u8 bStack_31;

    cVar15 = '\0';
    cVar14 = '\0';
    uVar10 = 0;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_44, a1, a2);
    rtc_get_date_wrap(a1, &uStack_34, ar6_00, a3);
    *(u16 *)(a1 + 0x8c) = *(u16 *)(a2 + 0x14);
    *(u16 *)(a1 + 0x8e) = *(u16 *)(a2 + 0x16);
    *(u16 *)(a1 + 0x90) = *(u16 *)(a2 + 0x18);
    *(u16 *)(a1 + 0x92) = *(u16 *)(a2 + 0x1a);
    *(u16 *)(a1 + 0x94) = *(u16 *)(a2 + 0x1c);
    *(u16 *)(a1 + 0x96) = *(u16 *)(a2 + 0x1e);
    *(u16 *)(a1 + 0x98) = *(u16 *)(a2 + 0x20);
    *(u16 *)(a1 + 0x9a) = *(u16 *)(a2 + 0x22);
    *(u16 *)(a1 + 0x9c) = *(u16 *)(a2 + 0x24);
    *(u16 *)(a1 + 0x9e) = *(u16 *)(a2 + 0x26);
    *(u8 *)(a1 + 0xa0) = *(u8 *)(a2 + 0xa8);
    a6 = *(u32 *)(a2 + 0xac);
    *(u16 *)(a1 + 0xa2) = *(u16 *)(a2 + 0x28);
    date_to_rtc_seconds(&uStack_34, &iStack_48, ar6_00);
    date_to_rtc_seconds(a1 + 0x8c, &iStack_4c, ar6_00);
    uVar1 = libgcc_divide_helper_010284(iStack_48 - iStack_4c, 0xe10, ar6_00);
    *(short *)(a1 + 0xae) = (short)uVar1;
    uVar1 = libgcc_divide_helper_0103d0(iStack_48 - iStack_4c, 0xe10);
    uVar2 = libgcc_divide_helper_010284(uVar1, 0x3c, ar6_00);
    *(short *)(a1 + 0xb0) = (short)uVar2;
    uVar1 = libgcc_divide_helper_0103d0(uVar1, 0x3c);
    *(short *)(a1 + 0xb2) = (short)uVar1;
    if ((((uStack_34 == *(u16 *)(a1 + 0x8c)) && (bStack_32 == *(u8 *)(a1 + 0x8e))) &&
         (bStack_31 == *(u8 *)(a1 + 0x8f))) &&
        (7 < *(u16 *)(a1 + 0xae))) {
        *(short *)(a1 + 0xa2) = *(short *)(a1 + 0xa2) + 1;
    } else if ((*(u16 *)(a1 + 0xae) < 0x18) &&
               (((ar6_00 = (u32)bStack_31, *(u8 *)(a1 + 0x8f) < ar6_00 || (*(u8 *)(a1 + 0x8e) < bStack_32)) ||
                 (*(u16 *)(a1 + 0x8c) < uStack_34)))) {
        *(short *)(a1 + 0xa2) = *(short *)(a1 + 0xa2) + 1;
    } else if (0x17 < *(u16 *)(a1 + 0xae)) {
        uVar1 = libgcc_divide_helper_0101e4((u32) * (u16 *)(a1 + 0xae), 0x18);
        ar6_00 = 0xa2;
        *(short *)(a1 + 0xa2) = *(short *)(a1 + 0xa2) + (short)uVar1;
    }
    iVar6 = a2 + 0x30f4;
    speech_sub_0fa334(0x8c35468c, iVar6);
    uVar1 = field_ptr_384c(0x8c3dd7dc);
    iVar6 = a2 + 0x4104;
    game_sub_01e0a4(uVar1, iVar6, ar6_00, a3);
    if (*(u8 *)(a1 + 0xa0) < 3) {
        (**(code **)(**(int **)(a0 + 8) + 0x160))(*(int **)(a0 + 8), iVar6, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x164))(*(int **)(a0 + 8), iVar6, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x168))(*(int **)(a0 + 8), 0x1a4, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x16c))(*(int **)(a0 + 8), *(u32 *)(a2 + 0x1b8), ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x170))(*(int **)(a0 + 8), *(u32 *)(a2 + 0x1a8), ar6_00, a3);
        uVar1 = *(u32 *)(a2 + 0x1ac);
        (**(code **)(**(int **)(a0 + 8) + 0x174))(*(int **)(a0 + 8), uVar1, ar6_00, a3);
        uVar1 = (**(code **)(**(int **)(a0 + 8) + 0x148))(*(int **)(a0 + 8), uVar1, ar6_00, a3);
        game_sub_0e983c(uVar1, a2 + 0x14ac);
        for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
            iVar8 = (**(code **)(**(int **)(a0 + 8) + 0x104))(*(int **)(a0 + 8), iVar6, ar6_00, a3);
            puVar7 = (u64 *)(a2 + iVar6 * 0x10 + 0x1bc);
            if (cVar15 == '\0') {
                *(u32 *)(iVar8 + 4) = *(u32 *)puVar7;
            } else {
                *(u64 *)(iVar8 + 4) = *puVar7;
            }
            puVar7 = (u64 *)(a2 + iVar6 * 0x10 + 0x1c0);
            if (cVar15 == '\0') {
                *(u32 *)(iVar8 + 8) = *(u32 *)puVar7;
            } else {
                *(u64 *)(iVar8 + 8) = *puVar7;
            }
            puVar7 = (u64 *)(a2 + iVar6 * 0x10 + 0x1c4);
            if (cVar15 == '\0') {
                *(u32 *)(iVar8 + 0xc) = *(u32 *)puVar7;
            } else {
                *(u64 *)(iVar8 + 0xc) = *puVar7;
            }
            if (iVar6 == 0) {
                if (cVar15 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)(iVar8 + 4), SUB84(in_dr2, 0));
                } else {
                    in_dr2 = *(double *)(iVar8 + 4);
                }
                if (cVar15 == '\0') {
                    dVar11 = (double)CONCAT44(0xc28983d7, (float)(int)*(char *)(a2 + 0x14ac));
                } else {
                    dVar11 = 4.6046138430016596e-232;
                }
                if (cVar14 == '\0') {
                    in_dr2 =
                        (double)CONCAT44((float)((u64)in_dr2 >> 0x20) + SUB84(dVar11, 0) * (float)((u64)dVar11 >> 0x20),
                                         SUB84(in_dr2, 0));
                } else {
                    in_dr2 = in_dr2 + dVar11 * dVar11;
                }
                if (cVar15 == '\0') {
                    *(int *)(iVar8 + 4) = (int)((u64)in_dr2 >> 0x20);
                } else {
                    *(double *)(iVar8 + 4) = in_dr2;
                }
            }
        }
        for (iVar6 = 0; uVar5 = (u32) * (u8 *)(a2 + 0x1b4), iVar6 < (int)uVar5; iVar6 = iVar6 + 1) {
            if (*(int *)(iVar6 * 0xf0 + a2 + 0x204) != -1) {
                ar6_00 = a1 + 0xac;
                iVar8 = game_sub_0ce994(a0, iVar6 * 0xf0 + a2 + 0x1ec, ar6_00, a3);
                (**(code **)(*(int *)(iVar8 + 8) + 0xa0))(iVar8, iVar6 * 0xf0 + a2 + 0x218, ar6_00, a3);
                iVar3 = game_sub_0cea98(a0, iVar8, ar6_00, a3);
                if (iVar3 == 1) {
                    game_sub_0ceb04(a0, iVar8, ar6_00, a3);
                }
                (**(code **)(**(int **)(a0 + 8) + 0x4c))(*(int **)(a0 + 8), iVar8, ar6_00, a3);
            }
        }
        (**(code **)(**(int **)(a0 + 8) + 0x178))(*(int **)(a0 + 8), uVar5, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x160))(*(int **)(a0 + 8), uVar5, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x17c))(*(int **)(a0 + 8), uVar5, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x164))(*(int **)(a0 + 8), uVar5, ar6_00, a3);
        uVar5 = 0x1b8;
        if (*(int *)(a2 + 0x1b8) == 1) {
            uVar5 = **(u32 **)(a0 + 8);
            (**(code **)(uVar5 + 0x188))(*(u32 **)(a0 + 8), uVar5, ar6_00, a3);
            (**(code **)(**(int **)(a0 + 8) + 0x168))(*(int **)(a0 + 8), uVar5, ar6_00, a3);
        }
    } else {
        uVar5 = *(u32 *)(a2 + 0x278c);
        uVar4 = (**(code **)(**(int **)(a0 + 0x10) + 0x144))(*(int **)(a0 + 0x10), 0x278c, ar6_00, a3);
        iVar6 = libgcc_divide_helper_0103d0(uVar5, 7);
        if (iVar6 == 3) {
            uVar5 = uVar4 - uVar5;
            if (uVar4 < uVar5) {
                uVar5 = uVar4 - 1;
            }
        } else if (iVar6 == 4) {
            if ((bStack_32 < 6) || (9 < bStack_32)) {
                if ((bStack_32 != 0) && (bStack_32 < 6)) {
                    uVar5 = (uVar4 >> 1) + (uVar4 >> 2);
                }
            } else {
                uVar5 = uVar4 >> 2;
            }
        } else if (iVar6 == 5) {
            if (cVar14 == '\0') {
                dVar11 = (double)CONCAT44((float)(int)uVar5, uVar10);
            } else {
                dVar11 = (double)(int)uVar5;
            }
            dVar9 = (double)(in_dr0 & 0xffffffff);
            fVar12 = (float)((u64)dVar11 >> 0x20);
            if (cVar14 == '\0') {
                bVar13 = fVar12 < 0.0;
            } else {
                bVar13 = dVar11 < dVar9;
            }
            if (bVar13) {
                if (cVar15 == '\0') {
                    dVar9 = (double)CONCAT44(0x4f800000, (int)in_dr0);
                } else {
                    dVar9 = 0.000878906487741915;
                }
                if (cVar14 == '\0') {
                    dVar11 = (double)CONCAT44(fVar12 + (float)((u64)dVar9 >> 0x20), SUB84(dVar11, 0));
                } else {
                    dVar11 = dVar11 + dVar9;
                }
            }
            if (cVar15 == '\0') {
                dVar9 = (double)CONCAT44(0x3f4ccccd, SUB84(dVar9, 0));
            } else {
                dVar9 = 3.533694962840277e+72;
            }
            if (cVar14 == '\0') {
                dVar11 = (double)CONCAT44((float)((u64)dVar11 >> 0x20) * (float)((u64)dVar9 >> 0x20), SUB84(dVar11, 0));
            } else {
                dVar11 = dVar11 * dVar9;
            }
            if (cVar15 == '\0') {
                dVar9 = (double)CONCAT44(0x4f000000, SUB84(dVar9, 0));
            } else {
                dVar9 = -9.046259633960061e+74;
            }
            fVar12 = (float)((u64)dVar11 >> 0x20);
            if (cVar14 == '\0') {
                bVar13 = (float)((u64)dVar9 >> 0x20) < fVar12;
            } else {
                bVar13 = dVar9 < dVar11;
            }
            if (bVar13) {
                if (cVar15 == '\0') {
                    dVar9 = (double)CONCAT44(0xcf800000, SUB84(dVar9, 0));
                } else {
                    dVar9 = 1.1334820462917686e+193;
                }
                if (cVar14 == '\0') {
                    dVar11 = (double)CONCAT44(fVar12 + (float)((u64)dVar9 >> 0x20), SUB84(dVar11, 0));
                } else {
                    dVar11 = dVar11 + dVar9;
                }
            }
            if (cVar14 == '\0') {
                uVar5 = (u32)(float)((u64)dVar11 >> 0x20);
            } else {
                uVar5 = (u32)dVar11;
            }
        } else {
            uVar5 = 0;
        }
        (**(code **)(**(int **)(a0 + 0x10) + 0xc4))(*(int **)(a0 + 0x10), uVar5, ar6_00, a3);
        for (uVar4 = 0; (int)uVar4 < (int)(u32) * (u8 *)(a2 + 0x2790); uVar4 = uVar4 + 1) {
            uVar5 = uVar4;
            if (*(int *)(uVar4 * 0xf0 + a2 + 0x27ac) != -1) {
                uVar1 = *(u32 *)(uVar4 * 0xf0 + a2 + 0x27e8);
                uVar5 = CFrogManEgg_sub_0fef94(0x8c3eb324, *(u32 *)(uVar4 * 0xf0 + a2 + 0x27ac), uVar1, a3);
                (**(code **)(*(int *)(uVar5 + 8) + 0x104))(uVar5, uVar4 * 0xf0 + a2 + 0x2794, uVar1, a3);
                iVar6 = a1 + 0xac;
                (**(code **)(*(int *)(uVar5 + 8) + 0x98))(uVar5, iVar6, uVar1, a3);
                a6_00 = *(code **)(*(int *)(uVar5 + 8) + 0x148);
                uVar1 = (*a6_00)(uVar5, iVar6, a6_00, a3);
                ar6_00 = (u32)(short)uVar1;
                (**(code **)(*(int *)(uVar5 + 8) + 0xe0))(uVar5, 0x8c3eb334, ar6_00, a3);
                (**(code **)(*(int *)(uVar5 + 8) + 0x5c))(uVar5, *(int *)(uVar5 + 8), ar6_00, a3);
                (**(code **)(*(int *)(uVar5 + 8) + 0xa0))(uVar5, uVar4 * 0xf0 + a2 + 0x27c0, ar6_00, a3);
                (**(code **)(**(int **)(a0 + 0x10) + 0x4c))(*(int **)(a0 + 0x10), uVar5, ar6_00, a3);
            }
        }
    }
    (**(code **)(**(int **)(a0 + 0xc) + 0x168))(*(int **)(a0 + 0xc), uVar5, ar6_00, a3);
    uVar1 = (**(code **)(**(int **)(a0 + 0xc) + 0x148))(*(int **)(a0 + 0xc), uVar5, ar6_00, a3);
    iVar6 = a2 + 0x2784;
    game_sub_0e983c(uVar1, iVar6);
    for (iVar8 = 0; iVar8 < (int)(u32) * (u8 *)(a2 + 0x14c0); iVar8 = iVar8 + 1) {
        iVar6 = *(int *)(iVar8 * 0xf0 + a2 + 0x14dc);
        if (iVar6 != -1) {
            if ((*(int *)(iVar8 * 0xf0 + a2 + 0x14dc) == 0xd) || (*(int *)(iVar8 * 0xf0 + a2 + 0x14dc) == 0xc)) {
                g_8c431a54 = 1;
            }
            ar6_00 = a1 + 0xac;
            iVar6 = game_sub_0ce994(a0, iVar8 * 0xf0 + a2 + 0x14c4, ar6_00, a3);
            (**(code **)(*(int *)(iVar6 + 8) + 0xa0))(iVar6, iVar8 * 0xf0 + a2 + 0x14f0, ar6_00, a3);
            (**(code **)(**(int **)(a0 + 0xc) + 0x4c))(*(int **)(a0 + 0xc), iVar6, ar6_00, a3);
        }
    }
    (**(code **)(**(int **)(a0 + 0xc) + 0x188))(*(int **)(a0 + 0xc), iVar6, ar6_00, a3);
    (**(code **)(**(int **)(a0 + 0xc) + 0x168))(*(int **)(a0 + 0xc), iVar6, ar6_00, a3);
    if (*(int *)(a2 + 200) != -1) {
        iVar6 = game_sub_0ce994(a0, a2 + 0xb0, a1 + 0xac, a3);
        a5 = auStack_44;
        ar6_00 = a6;
        (**(code **)(*(int *)(iVar6 + 8) + 0x150))(iVar6, a5, a6, a3);
        set_vec3_field_30(iVar6, a5, ar6_00);
        a4 = *(int **)(a0 + a6 * 4 + 8);
        (**(code **)(*a4 + 0x50))(a4, iVar6, ar6_00, a3);
    }
    uVar1 = Vec3_dtor(auStack_44, 0xffffffff, ar6_00, a3);
    return uVar1;
}

/*
 * noop_0cd3b4  0x8c0cd3b4
 */
u32 noop_0cd3b4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0cd3b8  0x8c0cd3b8
 */
u32 noop_0cd3b8(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0cd3bc  0x8c0cd3bc
 */
u32 noop_0cd3bc(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0cd3c0  0x8c0cd3c0
 */
u32 noop_0cd3c0(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * noop_0cd3c4  0x8c0cd3c4
 */
u32 noop_0cd3c4(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * CProlog_sub_0cd3c8  0x8c0cd3c8
 * area name: only called from CProlog methods
 * called by: CProlog_Ready
 */
u32 CProlog_sub_0cd3c8(int a0, int a1, double *a2, u32 a3) {
    int a6;
    u32 uVar1;
    u32 uVar2;
    u32 ar4_00;
    u32 uVar3;
    int iVar4;
    int iVar5;
    int *a4;
    code *pcVar6;
    u8 *a5;
    double *ar6_00;
    u64 in_dr0;
    double dVar7;
    double in_dr2;
    u32 uVar8;
    double dVar9;
    float fVar10;
    bool bVar11;
    char cVar12;
    char cVar13;
    int iStack_4c;
    int iStack_48;
    u8 auStack_44[16];
    u16 uStack_34;
    u8 bStack_32;
    u8 bStack_31;

    cVar13 = '\0';
    cVar12 = '\0';
    uVar8 = 0;
    ar6_00 = a2;
    Vec3_ctor_zero(auStack_44, a1, a2);
    rtc_get_date_wrap(a1, &uStack_34, ar6_00, a3);
    *(u16 *)(a1 + 0x8c) = *(u16 *)((int)a2 + 0x14);
    *(u16 *)(a1 + 0x8e) = *(u16 *)((int)a2 + 0x16);
    *(u16 *)(a1 + 0x90) = *(u16 *)(a2 + 3);
    *(u16 *)(a1 + 0x92) = *(u16 *)((int)a2 + 0x1a);
    *(u16 *)(a1 + 0x94) = *(u16 *)((int)a2 + 0x1c);
    *(u16 *)(a1 + 0x96) = *(u16 *)((int)a2 + 0x1e);
    *(u16 *)(a1 + 0x98) = *(u16 *)(a2 + 4);
    *(u16 *)(a1 + 0x9a) = *(u16 *)((int)a2 + 0x22);
    *(u16 *)(a1 + 0x9c) = *(u16 *)((int)a2 + 0x24);
    *(u16 *)(a1 + 0x9e) = *(u16 *)((int)a2 + 0x26);
    *(code *)(a1 + 0xa0) = *(code *)(a2 + 0x15);
    a6 = *(int *)((int)a2 + 0xac);
    *(u16 *)(a1 + 0xa2) = *(u16 *)(a2 + 5);
    date_to_rtc_seconds(&uStack_34, &iStack_48, ar6_00);
    date_to_rtc_seconds(a1 + 0x8c, &iStack_4c, ar6_00);
    uVar1 = libgcc_divide_helper_010284(iStack_48 - iStack_4c, 0xe10, ar6_00);
    *(short *)(a1 + 0xae) = (short)uVar1;
    uVar1 = libgcc_divide_helper_0103d0(iStack_48 - iStack_4c, 0xe10);
    uVar2 = libgcc_divide_helper_010284(uVar1, 0x3c, ar6_00);
    *(short *)(a1 + 0xb0) = (short)uVar2;
    uVar1 = libgcc_divide_helper_0103d0(uVar1, 0x3c);
    *(short *)(a1 + 0xb2) = (short)uVar1;
    if ((((uStack_34 == *(u16 *)(a1 + 0x8c)) && (bStack_32 == *(u8 *)(a1 + 0x8e))) &&
         (bStack_31 == *(u8 *)(a1 + 0x8f))) &&
        (7 < *(u16 *)(a1 + 0xae))) {
        *(short *)(a1 + 0xa2) = *(short *)(a1 + 0xa2) + 1;
    } else if ((*(u16 *)(a1 + 0xae) < 0x18) && (((*(u8 *)(a1 + 0x8f) < bStack_31 || (*(u8 *)(a1 + 0x8e) < bStack_32)) ||
                                                 (*(u16 *)(a1 + 0x8c) < uStack_34)))) {
        *(short *)(a1 + 0xa2) = *(short *)(a1 + 0xa2) + 1;
    } else if (0x17 < *(u16 *)(a1 + 0xae)) {
        uVar1 = libgcc_divide_helper_0101e4((u32) * (u16 *)(a1 + 0xae), 0x18);
        ar6_00 = (double *)0xa2;
        *(short *)(a1 + 0xa2) = *(short *)(a1 + 0xa2) + (short)uVar1;
    }
    pcVar6 = (code *)((int)a2 + 0x30f4);
    speech_sub_0fa334(0x8c35468c, pcVar6);
    uVar1 = field_ptr_384c(0x8c3dd7dc);
    pcVar6 = (code *)((int)a2 + 0x4104);
    game_sub_01e0a4(uVar1, pcVar6, ar6_00, a3);
    if (*(u8 *)(a1 + 0xa0) < 3) {
        (**(code **)(**(int **)(a0 + 8) + 0x160))(*(int **)(a0 + 8), pcVar6, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x164))(*(int **)(a0 + 8), pcVar6, ar6_00, a3);
        iVar4 = **(int **)(a0 + 8);
        (**(code **)(iVar4 + 0x168))(*(int **)(a0 + 8), iVar4, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x16c))(*(int **)(a0 + 8), *(u32 *)(a2 + 0x37), ar6_00, a3);
        ar6_00 = (double *)**(u32 **)(a0 + 8);
        (**(code **)(ar6_00 + 0x2e))(*(u32 **)(a0 + 8), *(u32 *)(a2 + 0x35), ar6_00, a3);
        uVar1 = *(u32 *)((int)a2 + 0x1ac);
        (**(code **)(**(int **)(a0 + 8) + 0x174))(*(int **)(a0 + 8), uVar1, ar6_00, a3);
        uVar1 = (**(code **)(**(int **)(a0 + 8) + 0x148))(*(int **)(a0 + 8), uVar1, ar6_00, a3);
        game_sub_0e983c(uVar1, (code *)((int)a2 + 0x14ac));
        for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
            iVar5 = (**(code **)(**(int **)(a0 + 8) + 0x104))(*(int **)(a0 + 8), iVar4, ar6_00, a3);
            pcVar6 = (code *)((int)a2 + iVar4 * 0x10 + 0x1bc);
            if (cVar13 == '\0') {
                *(u32 *)(iVar5 + 4) = *(u32 *)pcVar6;
            } else {
                *(u64 *)(iVar5 + 4) = *(u64 *)pcVar6;
            }
            if (cVar13 == '\0') {
                *(u32 *)(iVar5 + 8) = *(u32 *)(a2 + iVar4 * 2 + 0x38);
            } else {
                *(double *)(iVar5 + 8) = a2[iVar4 * 2 + 0x38];
            }
            pcVar6 = (code *)((int)a2 + iVar4 * 0x10 + 0x1c4);
            if (cVar13 == '\0') {
                *(u32 *)(iVar5 + 0xc) = *(u32 *)pcVar6;
            } else {
                *(u64 *)(iVar5 + 0xc) = *(u64 *)pcVar6;
            }
            if (iVar4 == 0) {
                ar6_00 = (double *)(iVar5 + 4);
                if (cVar13 == '\0') {
                    in_dr2 = (double)CONCAT44(*(u32 *)(iVar5 + 4), SUB84(in_dr2, 0));
                } else {
                    in_dr2 = *(double *)(iVar5 + 4);
                }
                if (cVar13 == '\0') {
                    dVar9 = (double)CONCAT44(0xc28983d7, (float)(int)(char)*(code *)((int)a2 + 0x14ac));
                } else {
                    dVar9 = 4.6046138430016596e-232;
                }
                if (cVar12 == '\0') {
                    in_dr2 = (double)CONCAT44(
                        (float)((u64)in_dr2 >> 0x20) + SUB84(dVar9, 0) * (float)((u64)dVar9 >> 0x20), SUB84(in_dr2, 0));
                } else {
                    in_dr2 = in_dr2 + dVar9 * dVar9;
                }
                if (cVar13 == '\0') {
                    *(int *)ar6_00 = (int)((u64)in_dr2 >> 0x20);
                } else {
                    *ar6_00 = in_dr2;
                }
            }
        }
        for (iVar4 = 0; iVar4 < (int)(u32)(u8) * (code *)((int)a2 + 0x1b4); iVar4 = iVar4 + 1) {
            if (*(int *)((int)a2 + iVar4 * 0xf0 + 0x204) != -1) {
                ar6_00 = (double *)(a1 + 0xac);
                iVar5 = game_sub_0cea38(a0, (code *)((int)a2 + iVar4 * 0xf0 + 0x1ec), ar6_00, a3);
                (**(code **)(*(int *)(iVar5 + 8) + 0xa0))(iVar5, a2 + iVar4 * 0x1e + 0x43, ar6_00, a3);
                (**(code **)(**(int **)(a0 + 8) + 0x4c))(*(int **)(a0 + 8), iVar5, ar6_00, a3);
            }
        }
        pcVar6 = *(code **)(**(int **)(a0 + 8) + 0x178);
        (*pcVar6)(*(int **)(a0 + 8), pcVar6, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x160))(*(int **)(a0 + 8), pcVar6, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x17c))(*(int **)(a0 + 8), pcVar6, ar6_00, a3);
        (**(code **)(**(int **)(a0 + 8) + 0x164))(*(int **)(a0 + 8), pcVar6, ar6_00, a3);
        if (*(int *)(a2 + 0x37) == 1) {
            pcVar6 = *(code **)(**(int **)(a0 + 8) + 0x188);
            (*pcVar6)(*(int **)(a0 + 8), pcVar6, ar6_00, a3);
            pcVar6 = *(code **)(a0 + 8);
            (**(code **)(*(int *)pcVar6 + 0x168))(pcVar6, pcVar6, ar6_00, a3);
        }
    } else {
        ar4_00 = *(u32 *)((int)a2 + 0x278c);
        pcVar6 = *(code **)(**(int **)(a0 + 0x10) + 0x144);
        uVar3 = (*pcVar6)(*(int **)(a0 + 0x10), pcVar6, ar6_00, a3);
        iVar4 = libgcc_divide_helper_0103d0(ar4_00, 7);
        if (iVar4 == 3) {
            ar4_00 = uVar3 - ar4_00;
            if (uVar3 < ar4_00) {
                ar4_00 = uVar3 - 1;
            }
        } else if (iVar4 == 4) {
            if ((bStack_32 < 6) || (9 < bStack_32)) {
                if ((bStack_32 != 0) && (bStack_32 < 6)) {
                    ar4_00 = (uVar3 >> 1) + (uVar3 >> 2);
                }
            } else {
                ar4_00 = uVar3 >> 2;
            }
        } else if (iVar4 == 5) {
            if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44((float)(int)ar4_00, uVar8);
            } else {
                dVar9 = (double)(int)ar4_00;
            }
            dVar7 = (double)(in_dr0 & 0xffffffff);
            fVar10 = (float)((u64)dVar9 >> 0x20);
            if (cVar12 == '\0') {
                bVar11 = fVar10 < 0.0;
            } else {
                bVar11 = dVar9 < dVar7;
            }
            if (bVar11) {
                if (cVar13 == '\0') {
                    dVar7 = (double)CONCAT44(0x4f800000, (int)in_dr0);
                } else {
                    dVar7 = 0.000878906487741915;
                }
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(fVar10 + (float)((u64)dVar7 >> 0x20), SUB84(dVar9, 0));
                } else {
                    dVar9 = dVar9 + dVar7;
                }
            }
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(0x3f4ccccd, SUB84(dVar7, 0));
            } else {
                dVar7 = 3.533694962840277e+72;
            }
            if (cVar12 == '\0') {
                dVar9 = (double)CONCAT44((float)((u64)dVar9 >> 0x20) * (float)((u64)dVar7 >> 0x20), SUB84(dVar9, 0));
            } else {
                dVar9 = dVar9 * dVar7;
            }
            if (cVar13 == '\0') {
                dVar7 = (double)CONCAT44(0x4f000000, SUB84(dVar7, 0));
            } else {
                dVar7 = -9.046259633960061e+74;
            }
            fVar10 = (float)((u64)dVar9 >> 0x20);
            if (cVar12 == '\0') {
                bVar11 = (float)((u64)dVar7 >> 0x20) < fVar10;
            } else {
                bVar11 = dVar7 < dVar9;
            }
            if (bVar11) {
                if (cVar13 == '\0') {
                    dVar7 = (double)CONCAT44(0xcf800000, SUB84(dVar7, 0));
                } else {
                    dVar7 = 1.0325168201761946e+181;
                }
                if (cVar12 == '\0') {
                    dVar9 = (double)CONCAT44(fVar10 + (float)((u64)dVar7 >> 0x20), SUB84(dVar9, 0));
                } else {
                    dVar9 = dVar9 + dVar7;
                }
            }
            if (cVar12 == '\0') {
                ar4_00 = (u32)(float)((u64)dVar9 >> 0x20);
            } else {
                ar4_00 = (u32)dVar9;
            }
        } else {
            ar4_00 = 0;
        }
        (**(code **)(**(int **)(a0 + 0x10) + 0xc4))(*(int **)(a0 + 0x10), ar4_00, ar6_00, a3);
        for (iVar4 = 0; pcVar6 = (code *)(u32)(u8) * (code *)(a2 + 0x4f2), iVar4 < (int)pcVar6; iVar4 = iVar4 + 1) {
            if (*(int *)((int)a2 + iVar4 * 0xf0 + 0x27ac) != -1) {
                uVar1 = *(u32 *)(a2 + iVar4 * 0x1e + 0x4fd);
                iVar5 = CFrogManEgg_sub_0fef94(0x8c3eb324, *(u32 *)((int)a2 + iVar4 * 0xf0 + 0x27ac), uVar1, a3);
                (**(code **)(*(int *)(iVar5 + 8) + 0x104))(iVar5, (code *)((int)a2 + iVar4 * 0xf0 + 0x2794), uVar1, a3);
                ar6_00 = *(double **)(*(int *)(iVar5 + 8) + 0xa0);
                (*(code *)ar6_00)(iVar5, a2 + iVar4 * 0x1e + 0x4f8, ar6_00, a3);
                (**(code **)(**(int **)(a0 + 0x10) + 0x4c))(*(int **)(a0 + 0x10), iVar5, ar6_00, a3);
            }
        }
    }
    (**(code **)(**(int **)(a0 + 0xc) + 0x168))(*(int **)(a0 + 0xc), pcVar6, ar6_00, a3);
    pcVar6 = *(code **)(**(int **)(a0 + 0xc) + 0x148);
    uVar1 = (*pcVar6)(*(int **)(a0 + 0xc), pcVar6, ar6_00, a3);
    pcVar6 = (code *)((int)a2 + 0x2784);
    game_sub_0e983c(uVar1, pcVar6);
    for (iVar4 = 0; iVar4 < (int)(u32)(u8) * (code *)(a2 + 0x298); iVar4 = iVar4 + 1) {
        if (*(int *)((int)a2 + iVar4 * 0xf0 + 0x14dc) != -1) {
            if ((*(int *)((int)a2 + iVar4 * 0xf0 + 0x14dc) == 0xd) ||
                (*(int *)((int)a2 + iVar4 * 0xf0 + 0x14dc) == 0xc)) {
                g_8c431a54 = 1;
            }
            ar6_00 = (double *)(a1 + 0xac);
            pcVar6 = (code *)game_sub_0cea38(a0, (code *)((int)a2 + iVar4 * 0xf0 + 0x14c4), ar6_00, a3);
            (**(code **)(*(int *)(pcVar6 + 8) + 0xa0))(pcVar6, a2 + iVar4 * 0x1e + 0x29e, ar6_00, a3);
            (**(code **)(**(int **)(a0 + 0xc) + 0x4c))(*(int **)(a0 + 0xc), pcVar6, ar6_00, a3);
        }
    }
    (**(code **)(**(int **)(a0 + 0xc) + 0x188))(*(int **)(a0 + 0xc), pcVar6, ar6_00, a3);
    (**(code **)(**(int **)(a0 + 0xc) + 0x168))(*(int **)(a0 + 0xc), pcVar6, ar6_00, a3);
    if (*(int *)(a2 + 0x19) != -1) {
        iVar5 = game_sub_0cea38(a0, a2 + 0x16, a1 + 0xac, a3);
        a5 = auStack_44;
        iVar4 = a6;
        (**(code **)(*(int *)(iVar5 + 8) + 0x150))(iVar5, a5, a6, a3);
        set_vec3_field_30(iVar5, a5, iVar4);
        a4 = *(int **)(a0 + a6 * 4 + 8);
        (**(code **)(*a4 + 0x50))(a4, iVar5, iVar4, a3);
    }
    uVar1 = Vec3_dtor(auStack_44, 0xffffffff, 0xffffffff, a3);
    return uVar1;
}

/*
 * game_sub_0cdf50  0x8c0cdf50
 * area name: game code; nothing names its area yet
 * called by: game_sub_0c8134, game_sub_0c91f4, game_sub_0ca4e8, game_sub_0cb668
 */
u32 game_sub_0cdf50(int a0, int a1, u32 a2, u32 a3) {
    short sVar1;
    short sVar2;
    int *ar4_00;
    code *pcVar3;
    int iVar4;
    u32 uVar5;
    u32 uVar6;
    u32 uVar7;
    int iVar8;
    int *a5;
    int *piVar9;
    code *pcVar10;
    code *a7;
    u32 extraout_fr1;
    char cVar11;
    short sStack_116;
    short sStack_114;
    u32 uStack_50;
    u32 uStack_4c;
    u32 uStack_48;
    code *pcStack_44;
    int aiStack_40[4];
    u8 auStack_30[20];

    cVar11 = '\0';
    pcVar10 = game_sub_0c5db0;
    ar4_00 = (int *)game_sub_0c5db0(*(u32 *)(a1 + 0x7cc));
    pcVar3 = (code *)get_field_d0_0c51fc(*(u32 *)(a1 + 0x7cc), pcVar10, a2);
    pcStack_44 = (code *)get_field_128_0ce914(*(u32 *)(a1 + 0x7cc));
    iVar4 = get_field_24_05c284(ar4_00, pcVar10);
    if (cVar11 == '\0') {
        uStack_50 = 0;
    } else {
        pcStack_44 = NULL;
        uStack_50 = extraout_fr1;
    }
    uStack_48 = 0;
    uStack_4c = 0;
    Vec3_ctor_zero(auStack_30, pcVar10, a2);
    Vec3_ctor_zero(aiStack_40, pcVar10, a2);
    sStack_114 = 0;
    sStack_116 = 0;
    (**(code **)(**(int **)(a0 + 8) + 0x148))(*(int **)(a0 + 8), pcVar10, a2, a3);
    uVar5 = (**(code **)(**(int **)(a0 + 0xc) + 0x148))(*(int **)(a0 + 0xc), pcVar10, a2, a3);
    (**(code **)(**(int **)(a0 + 0x10) + 0x148))(*(int **)(a0 + 0x10), pcVar10, a2, a3);
    a7 = (code *)&uStack_50;
    piVar9 = *(int **)(a0 + (int)pcVar3 * 4 + 8);
    (**(code **)(*piVar9 + 0x13c))(piVar9, &uStack_48, &uStack_4c, a7);
    a5 = aiStack_40;
    piVar9 = ar4_00;
    pcVar10 = pcVar3;
    (**(code **)(ar4_00[2] + 0x150))(ar4_00, a5, pcVar3, a7);
    if (iVar4 != 0xe) {
        piVar9 = ar4_00;
        set_vec3_field_30(ar4_00, a5, pcVar10);
    }
    if (pcVar3 == NULL) {
        if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
            iVar4 = (**(code **)(**(int **)(a0 + 8) + 0x11c))(*(int **)(a0 + 8), iVar4, pcVar10, a7);
            pcVar10 = (code *)0x1;
            if (iVar4 < 1) {
                piVar9 = *(int **)(a0 + 8);
                (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, 1, a7);
                a5 = ar4_00;
            } else {
                a5 = (int *)(a0 + 8);
                pcVar10 = pcStack_44;
                Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
                piVar9 = ar4_00;
            }
        } else if (iVar4 == 10) {
            iVar4 = (**(code **)(**(int **)(a0 + 8) + 0x11c))(*(int **)(a0 + 8), 10, pcVar10, a7);
            if (iVar4 < 1) {
                if (pcStack_44 == (code *)0x1) {
                    pcVar10 = game_sub_0c4dd0;
                    game_sub_0c4dd0(ar4_00, uVar5, game_sub_0c4dd0, a7);
                }
                piVar9 = *(int **)(a0 + 8);
                (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                a5 = ar4_00;
            } else {
                a5 = (int *)(a0 + 8);
                pcVar10 = pcStack_44;
                Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
                piVar9 = ar4_00;
            }
        } else if (iVar4 == 0xe) {
            iVar4 = (**(code **)(**(int **)(a0 + 8) + 0x11c))(*(int **)(a0 + 8), 0xe, pcVar10, a7);
            if (iVar4 < 4) {
                piVar9 = *(int **)(a0 + 8);
                (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                a5 = ar4_00;
            } else {
                a5 = (int *)(a0 + 8);
                pcVar10 = pcStack_44;
                Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
                piVar9 = ar4_00;
            }
        } else {
            piVar9 = *(int **)(a0 + 8);
            (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
            a5 = ar4_00;
        }
    } else if (pcVar3 == (code *)0x1) {
        if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
            iVar4 = (**(code **)(**(int **)(a0 + 0xc) + 0x11c))(*(int **)(a0 + 0xc), iVar4, pcVar10, a7);
            if (iVar4 < 1) {
                piVar9 = *(int **)(a0 + 0xc);
                (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                a5 = ar4_00;
            } else {
                a5 = (int *)(a0 + 8);
                pcVar10 = pcStack_44;
                Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
                piVar9 = ar4_00;
            }
        } else if (iVar4 == 10) {
            a5 = (int *)0xa;
            uVar6 = (**(code **)(**(int **)(a0 + 0xc) + 0x11c))(*(int **)(a0 + 0xc), 10, pcVar10, a7);
            for (sVar2 = 0; sVar2 < (short)uVar6; sVar2 = sVar2 + 1) {
                pcVar10 = (code *)(int)sVar2;
                a5 = (int *)0xa;
                iVar4 = (**(code **)(**(int **)(a0 + 0xc) + 0x100))(*(int **)(a0 + 0xc), 10, pcVar10, a7);
                uVar7 = (**(code **)(*(int *)(iVar4 + 8) + 0x148))(iVar4, a5, pcVar10, a7);
                sVar1 = (short)uVar7;
                if ((sVar1 == 0) || (sVar1 == 1)) {
                    sStack_114 = sStack_114 + 1;
                } else if (sVar1 == 3) {
                    sStack_116 = sStack_116 + 1;
                }
            }
            piVar9 = ar4_00;
            uVar6 = (**(code **)(ar4_00[2] + 0x148))(ar4_00, a5, pcVar10, a7);
            sVar2 = (short)uVar6;
            if ((sVar2 == 0) || (sVar2 == 1)) {
                if (pcStack_44 == (code *)0x1) {
                    piVar9 = *(int **)(a0 + 0xc);
                    (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                    a5 = ar4_00;
                } else if ((sStack_114 < 4) && (uVar6 = get_field_4e_s8(uVar5), (char)uVar6 < '\x04')) {
                    if (pcStack_44 == (code *)0x3) {
                        inc_field_4e_s8(uVar5);
                    }
                    piVar9 = *(int **)(a0 + 0xc);
                    (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                    a5 = ar4_00;
                } else {
                    a5 = (int *)(a0 + 8);
                    pcVar10 = pcStack_44;
                    Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
                    piVar9 = ar4_00;
                }
            } else if (sVar2 == 3) {
                if (pcStack_44 == (code *)0x1) {
                    piVar9 = *(int **)(a0 + 0xc);
                    (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                    a5 = ar4_00;
                } else if ((sStack_116 < 4) && (uVar6 = get_field_50_s8(uVar5), (char)uVar6 < '\x04')) {
                    if (pcStack_44 == (code *)0x3) {
                        inc_field_50_s8(uVar5);
                    }
                    piVar9 = *(int **)(a0 + 0xc);
                    (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                    a5 = ar4_00;
                } else {
                    a5 = (int *)(a0 + 8);
                    pcVar10 = pcStack_44;
                    Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
                    piVar9 = ar4_00;
                }
            }
        } else if (iVar4 == 0xe) {
            if (pcStack_44 == (code *)0x1) {
                piVar9 = *(int **)(a0 + 0xc);
                (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                a5 = ar4_00;
            } else {
                iVar4 = (**(code **)(**(int **)(a0 + 0xc) + 0x11c))(*(int **)(a0 + 0xc), 0xe, pcVar10, a7);
                if (iVar4 < 2) {
                    piVar9 = *(int **)(a0 + 0xc);
                    (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                    a5 = ar4_00;
                } else {
                    a5 = (int *)(a0 + 8);
                    pcVar10 = pcStack_44;
                    Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
                    piVar9 = ar4_00;
                }
            }
        } else {
            piVar9 = *(int **)(a0 + 0xc);
            (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
            a5 = ar4_00;
        }
    } else if (pcVar3 == (code *)0x2) {
        if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
            iVar4 = (**(code **)(**(int **)(a0 + 0x10) + 0x11c))(*(int **)(a0 + 0x10), iVar4, pcVar10, a7);
            if (iVar4 < 1) {
                piVar9 = *(int **)(a0 + 0x10);
                (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                a5 = ar4_00;
            } else {
                a5 = (int *)(a0 + 8);
                pcVar10 = pcStack_44;
                Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
                piVar9 = ar4_00;
            }
        } else if (iVar4 == 10) {
            iVar4 = (**(code **)(**(int **)(a0 + 0x10) + 0x11c))(*(int **)(a0 + 0x10), 10, pcVar10, a7);
            if (iVar4 < 1) {
                if (pcStack_44 == (code *)0x1) {
                    game_sub_0c4dd0(ar4_00, uVar5, pcVar10, a7);
                }
                piVar9 = *(int **)(a0 + 0x10);
                (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                a5 = ar4_00;
            } else {
                a5 = (int *)(a0 + 8);
                pcVar10 = pcStack_44;
                a7 = pcStack_44;
                Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, pcStack_44);
                piVar9 = ar4_00;
            }
        } else if (iVar4 == 0xe) {
            iVar4 = (**(code **)(**(int **)(a0 + 0x10) + 0x11c))(*(int **)(a0 + 0x10), 0xe, pcVar10, a7);
            if (iVar4 < 3) {
                piVar9 = *(int **)(a0 + 0x10);
                (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
                a5 = ar4_00;
            } else {
                a5 = (int *)(a0 + 8);
                pcVar10 = pcStack_44;
                Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
                piVar9 = ar4_00;
            }
        } else {
            piVar9 = *(int **)(a0 + 0x10);
            (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
            a5 = ar4_00;
        }
    } else if (pcVar3 == (code *)0x3) {
        pcVar10 = (code *)**(u32 **)(a0 + 0x14);
        iVar8 = (**(code **)(pcVar10 + 0x118))(*(u32 **)(a0 + 0x14), *(code **)(pcVar10 + 0x118), pcVar10, a7);
        if (iVar8 < 0xc) {
            if ((iVar4 == 10) && (pcStack_44 == (code *)0x1)) {
                game_sub_0c4dd0(ar4_00, uVar5, pcVar10, a7);
            }
            piVar9 = *(int **)(a0 + 0x14);
            (**(code **)(*piVar9 + 0x50))(piVar9, ar4_00, pcVar10, a7);
            a5 = ar4_00;
        } else {
            a5 = (int *)(a0 + 8);
            pcVar10 = pcStack_44;
            Class_12984c_sub_0c4cd8(ar4_00, a5, pcStack_44, a7);
            piVar9 = ar4_00;
        }
    }
    CAnimal_sub_0c4e2c(piVar9, a5, pcVar10, a7);
    game_sub_0c4e48();
    pcVar3 = Vec3_dtor;
    Vec3_dtor(aiStack_40, 0xffffffff, Vec3_dtor, a7);
    uVar5 = Vec3_dtor(auStack_30, 0xffffffff, pcVar3, a7);
    return uVar5;
}

/*
 * get_field_128_0ce914  0x8c0ce914
 * called by: game_sub_0cdf50
 */
u32 get_field_128_0ce914(int a0) {
    return *(u32 *)(0x128 + a0);
}

/*
 * game_sub_0ce920  0x8c0ce920
 * area name: game code; nothing names its area yet
 * called by: Class_12b388_sub_0c5cb4, game_sub_0c5340
 */
u32 game_sub_0ce920(int a0) {
    u32 uVar1;

    *(u32 *)(0x2d160 + a0) = 0;
    *(u32 *)(0x2d15c + a0) = 0;
    *(u32 *)(0x2d39c + a0) = 0;
    *(u32 *)(0x2d3a0 + a0) = 0;
    *(u16 *)(0x2d1ac + a0) = 0;
    *(u32 *)(0x2d16c + a0) = 0;
    *(u32 *)(0x2d168 + a0) = 1;
    *(u32 *)(0x2d164 + a0) = 0;
    uVar1 = set_fields_0_4_8_0c5330(a0 + 0x2d1b0);
    return uVar1;
}

/*
 * game_sub_0ce994  0x8c0ce994
 * area name: game code; nothing names its area yet
 * called by: CGame_sub_0cc784
 */
int game_sub_0ce994(u32 unused_a0, int a1, u32 a2, u32 a3) {
    int a4;
    u32 uVar1;
    int a6;

    uVar1 = *(u32 *)(a1 + 0x54);
    a4 = CFrogManEgg_sub_0fef94(0x8c3eb324, *(u32 *)(a1 + 0x18), uVar1, a3);
    (**(code **)(0x104 + *(int *)(a4 + 8)))(a4, a1, uVar1, a3);
    (**(code **)(0x94 + *(int *)(a4 + 8)))(a4, a2, uVar1, a3);
    uVar1 = (**(code **)(0x148 + *(int *)(a4 + 8)))(a4, a2, uVar1, a3);
    a6 = (int)(short)uVar1;
    uVar1 = 0x8c3eb334;
    (**(code **)(0xe0 + *(int *)(a4 + 8)))(a4, 0x8c3eb334, a6, a3);
    (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4, uVar1, a6, a3);
    return a4;
}

/*
 * noop_0cea34  0x8c0cea34
 */
u32 noop_0cea34(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * game_sub_0cea38  0x8c0cea38
 * area name: game code; nothing names its area yet
 * called by: CProlog_sub_0cd3c8
 */
int game_sub_0cea38(u32 unused_a0, int a1, u32 a2, u32 a3) {
    int a4;
    u32 ar6_00;

    ar6_00 = *(u32 *)(a1 + 0x54);
    a4 = CFrogManEgg_sub_0fef94(0x8c3eb324, *(u32 *)(a1 + 0x18), ar6_00, a3);
    (**(code **)(0x104 + *(int *)(a4 + 8)))(a4, a1, ar6_00, a3);
    (**(code **)(0x94 + *(int *)(a4 + 8)))(a4, a2, ar6_00, a3);
    return a4;
}

/*
 * game_sub_0cea98  0x8c0cea98
 * area name: game code; nothing names its area yet
 * called by: CGame_sub_0cc784
 */
u32 game_sub_0cea98(u32 unused_a0, int a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    int a5;

    a5 = a1;
    iVar1 = get_field_24_05c284(a1, a1);
    uVar2 = (**(code **)(0x148 + *(int *)(a1 + 8)))(a1, a5, a2, a3);
    if ((iVar1 == 3) && ((short)uVar2 == 7)) {
        uVar2 = 1;
    } else if ((iVar1 == 5) && (2 < (short)uVar2)) {
        uVar2 = 1;
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

/*
 * game_sub_0ceb04  0x8c0ceb04
 * area name: game code; nothing names its area yet
 * called by: CGame_sub_0cc784
 */
u32 game_sub_0ceb04(int a0, u32 a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    float *a5;
    u32 in_fr1;
    float fVar3;
    double dVar4;
    float fVar5;
    float fVar6;
    u64 in_dr14;
    u32 uVar8;
    double dVar7;
    u64 in_xd0;
    char cVar9;
    char cVar10;
    u8 auStack_2c[16];
    float fStack_1c;
    float fStack_18;
    u32 uStack_14;

    uVar8 = (u32)((u64)in_dr14 >> 0x20);
    cVar10 = '\0';
    cVar9 = '\0';
    Vec3_ctor_copy_wrap_02f670(a1, a1, a2, a3, auStack_2c);
    Vec3_ctor_copy(&fStack_1c, auStack_2c, a2, a3);
    Vec3_dtor(auStack_2c, 0xffffffff, a2, a3);
    dVar7 = (double)((u64)uVar8 << 0x20);
    a5 = &fStack_1c;
    iVar1 = (**(code **)(**(int **)(a0 + 8) + 0x130))(*(int **)(a0 + 8), a5, a2, a3);
    if (iVar1 == 2) {
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(fStack_1c, in_fr1);
            dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), 0x451a6000);
        } else {
            dVar4 = (double)CONCAT44(fStack_18, fStack_1c);
        }
        if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) - (float)((u64)dVar4 >> 0x20));
        } else {
            dVar7 = dVar7 - dVar4;
        }
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(0x3f000000, SUB84(dVar4, 0));
        } else {
            dVar4 = 2251800342167552.0;
        }
        if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44((int)((u64)dVar7 >> 0x20), SUB84(dVar7, 0) * (float)((u64)dVar4 >> 0x20));
        } else {
            dVar7 = dVar7 * dVar4;
        }
        if (cVar10 == '\0') {
            dVar4 = (double)CONCAT44(fStack_1c, SUB84(dVar4, 0));
        } else {
            dVar4 = (double)CONCAT44(fStack_18, fStack_1c);
        }
        if (cVar9 == '\0') {
            dVar4 = (double)CONCAT44((float)((u64)dVar4 >> 0x20) + SUB84(dVar7, 0), SUB84(dVar4, 0));
        } else {
            dVar4 = dVar4 + dVar7;
        }
        fVar5 = (float)((u64)dVar4 >> 0x20);
        if (cVar10 == '\0') {
            fVar6 = 160.0;
            fVar3 = fStack_18;
            fStack_1c = fVar5;
        } else {
            fStack_1c = SUB84(dVar4, 0);
            in_xd0 = CONCAT44(uStack_14, fVar5);
            fVar3 = 160.0;
            fVar6 = 0.8;
            fStack_18 = fVar5;
        }
        if (cVar9 != '\0' || fVar6 <= fVar3) {
            if (cVar10 == '\0') {
                dVar7 = (double)CONCAT44(0x3f4ccccd, fStack_18);
            } else {
                in_xd0 = CONCAT44(uStack_14, fStack_18);
                dVar7 = -8.472843126934268e-251;
            }
            if (cVar9 == '\0') {
                fStack_18 = SUB84(dVar7, 0) * (float)((u64)dVar7 >> 0x20);
            } else {
                fStack_18 = SUB84(dVar7 * dVar7, 0);
            }
            if (cVar10 != '\0') {
                fStack_18 = (float)in_xd0;
                uStack_14 = (u32)((u64)in_xd0 >> 0x20);
            }
        }
        set_vec3_field_30(a1, a5, a2);
        uVar2 = Vec3_dtor(&fStack_1c, 0xffffffff, a2, a3);
    } else {
        uVar2 = Vec3_dtor(&fStack_1c, 0xffffffff, a2, a3);
    }
    return uVar2;
}

/*
 * noop_0cebec  0x8c0cebec
 */
u32 noop_0cebec(void) {
    u32 in_r0;

    return in_r0;
}

/*
 * ret_const_0_0cebf0  0x8c0cebf0
 */
u32 ret_const_0_0cebf0(void) {
    return 0;
}

/*
 * game_sub_0cebf8  0x8c0cebf8
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cfbcc
 */
u32 *game_sub_0cebf8(u32 *a0) {
    int iVar1;
    code *pcVar2;
    code *pcVar3;
    u32 *puVar4;
    u32 uVar5;
    int iVar6;
    u32 in_fr1;
    u64 uVar7;
    char cVar8;

    cVar8 = '\0';
    uVar5 = 0x14;
    pcVar3 = game_sub_0ceed8;
    pcVar2 = game_sub_0c524c;
    vec_new_array(a0 + 1, game_sub_0c524c, game_sub_0ceed8, 0x14, 0x10);
    Class_129920_ctor(a0 + 0x56, pcVar2);
    clear_5_words(a0 + 0x58, pcVar2, pcVar3, uVar5);
    uVar5 = 0x18;
    pcVar3 = game_sub_0cee98;
    pcVar2 = game_sub_0c526c;
    vec_new_array(a0 + 0x5d, game_sub_0c526c, game_sub_0cee98, 0x18, 0x19);
    clear_5_words(a0 + 0xf3, pcVar2, pcVar3, uVar5);
    game_sub_0cf144(a0, pcVar2);
    if (cVar8 == '\0') {
        a0[0x12a] = 0;
        a0[299] = 0x437f0000;
    } else {
        *(u64 *)(a0 + 0x12a) = (u64)in_fr1;
        in_fr1 = 0x437f0000;
        *(u64 *)(a0 + 299) = 0x4b0437f0000;
    }
    if (cVar8 == '\0') {
        a0[300] = 0;
    } else {
        *(u64 *)(a0 + 300) = (u64)in_fr1;
    }
    if (cVar8 == '\0') {
        a0[0x12d] = 0;
        a0[0x12e] = 0x437f0000;
    } else {
        *(u64 *)(a0 + 0x12d) = (u64)in_fr1;
        in_fr1 = 0x437f0000;
        *(u64 *)(a0 + 0x12e) = 0x4b0437f0000;
    }
    if (cVar8 == '\0') {
        a0[0x12f] = 0;
        a0[0x130] = 0x437f0000;
        a0[0x131] = 0x437f0000;
    } else {
        *(u64 *)(a0 + 0x12f) = (u64)in_fr1;
        *(u64 *)(a0 + 0x130) = 0x4b0437f0000;
        in_fr1 = 0x437f0000;
        *(u64 *)(a0 + 0x131) = 0x4b0437f0000;
    }
    iVar1 = 0;
    while (iVar6 = iVar1, iVar6 < 4) {
        a0[iVar6 + 0x132] = 0xffffff;
        iVar1 = iVar6 + 1;
    }
    *(u16 *)(a0 + 0x136) = 0;
    *(u16 *)((int)a0 + 0x4da) = 0xff;
    *(u16 *)(a0 + 0x137) = 0;
    *(u16 *)((int)a0 + 0x4de) = 0;
    *(u16 *)(a0 + 0x138) = 0xff;
    *(u16 *)((int)a0 + 0x4e2) = 0;
    *(u16 *)(a0 + 0x139) = 0xff;
    *(u16 *)((int)a0 + 0x4e6) = 0xff;
    uVar5 = 4;
    puVar4 = a0 + 0x132;
    set_fields_0_4_c(a0 + 0x58, a0 + 0x12a, puVar4, 4);
    Class_129808_set_model(a0 + 0x58, a0 + 0x136, puVar4);
    set_field_10(a0 + 0x58, 0x80000060);
    if (cVar8 == '\0') {
        a0[0x13a] = 0;
        a0[0x13b] = 0x42480000;
    } else {
        *(u64 *)(a0 + 0x13a) = (u64)in_fr1;
        in_fr1 = 0x42480000;
        *(u64 *)(a0 + 0x13b) = 0x4f042480000;
    }
    if (cVar8 == '\0') {
        a0[0x13c] = 0;
    } else {
        *(u64 *)(a0 + 0x13c) = (u64)in_fr1;
    }
    if (cVar8 == '\0') {
        a0[0x13d] = 0;
        uVar7 = CONCAT44(0x42480000, in_fr1);
        a0[0x13e] = 0x42480000;
    } else {
        *(u64 *)(a0 + 0x13d) = (u64)in_fr1;
        uVar7 = 0x4f042480000;
        *(u64 *)(a0 + 0x13e) = 0x4f042480000;
    }
    if (cVar8 == '\0') {
        a0[0x13f] = 0;
        a0[0x140] = 0x42480000;
        a0[0x141] = 0x42480000;
    } else {
        *(u64 *)(a0 + 0x13f) = uVar7 & 0xffffffff;
        *(u64 *)(a0 + 0x140) = 0x4f042480000;
        *(u64 *)(a0 + 0x141) = 0x4f042480000;
    }
    uVar5 = 4;
    puVar4 = a0 + 0x132;
    set_fields_0_4_c(a0 + 0xf3, a0 + 0x13a, puVar4, 4);
    Class_129808_set_model(a0 + 0xf3, a0 + 0x142, puVar4);
    set_field_10(a0 + 0xf3, 0x80000060);
    *a0 = 0;
    return a0;
}

/*
 * game_sub_0cee98  0x8c0cee98
 * area name: game code; nothing names its area yet
 */
int game_sub_0cee98(int a0, u32 a1, u32 a2, u32 a3) {
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
 * game_sub_0ceed8  0x8c0ceed8
 * area name: game code; nothing names its area yet
 */
int game_sub_0ceed8(int a0, u32 a1, u32 a2, u32 a3) {
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
 * game_sub_0cef18  0x8c0cef18
 * name hint from a string it uses: GRAPHICS MESSAGE; area name: game code; nothing names its area yet
 * called by: game_sub_0cb29c, game_sub_0cb5c8
 * strings: "credit.PVM"; "GRAPHICS\\MESSAGE"; "Failed to load staff pvm.."; "STAFF_CREDIT::LoadData"
 */
int game_sub_0cef18(int a0, u32 a1) {
    u32 uVar1;
    u32 a7;
    int iVar2;

    for (iVar2 = 0; iVar2 < 0x10; iVar2 = iVar2 + 1) {
        *(u32 *)(0x3ec + iVar2 * 0xc + a0) = 0;
    }
    a7 = 0x10;
    uVar1 = 0x8c4312a8;
    ptr_list_build_1c(a0 + 0x3e0, a0 + 0x3e8, 0x8c4312a8, 0x10);
    iVar2 = a0 + 0x3e0;
    (**(code **)(*(int *)(a0 + 0x158) + 8))((int *)(a0 + 0x158), iVar2, uVar1, a7);
    uVar1 = get_field_4_0253e4(a0 + 0x158, iVar2, uVar1, a7);
    iVar2 = (*(code *)(&retry_until_done_020f90))(a1, "credit.PVM", "GRAPHICS\\MESSAGE", uVar1);
    if (iVar2 == -1) {
        iVar2 = (*(code *)(&report_error_message))("Failed to load staff pvm..", "STAFF_CREDIT::LoadData", 0, 2);
    }
    return iVar2;
}

/*
 * game_sub_0ceff8  0x8c0ceff8
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cb668
 */
int game_sub_0ceff8(int *a0, int a1, u32 unused_a2, u32 a3) {
    int iVar1;
    int *ar5_00;
    int iVar2;

    if (*a0 == 1) {
        iVar1 = 1;
    } else {
        iVar1 = *(int *)(0x14c + (int)a0);
        if (iVar1 == 0) {
            if (a1 == 1) {
                *(short *)(0x144 + (int)a0) = *(short *)(0x144 + (int)a0) + 1;
            }
            if (a1 == 0) {
                iVar1 = game_sub_0cf144(a0, 0);
            } else {
                iVar1 = 0x96;
                if (0x96 < *(short *)(0x144 + (int)a0)) {
                    *(u16 *)(0x146 + (int)a0) = 0;
                    *(u16 *)(0x144 + (int)a0) = 0;
                    *(u16 *)(0x148 + (int)a0) = 0;
                    *(u32 *)(0x150 + (int)a0) = 0;
                    iVar1 = 0x14c;
                    *(u32 *)(0x14c + (int)a0) = 1;
                }
            }
        } else {
            if (iVar1 == 1) {
                iVar1 = (*(code *)(&game_sub_0cf1e4))(a0, a0 + *(short *)(0x148 + (int)a0) * 5 + 1,
                                                      (int)*(short *)(0x148 + (int)a0), a3);
                if (iVar1 == 5) {
                    *(short *)(0x148 + (int)a0) = *(short *)(0x148 + (int)a0) + 1;
                    iVar2 = 0x14c;
                    iVar1 = (int)*(short *)(0x148 + (int)a0);
                    if (*(short *)(0x148 + (int)a0) == 0x10) {
                        *(u32 *)(0x14c + (int)a0) = 2;
                        iVar1 = iVar2;
                    }
                }
                if (a1 != 0) {
                    return iVar1;
                }
                *(u32 *)(0x14c + (int)a0) = 3;
            } else {
                if (iVar1 == 2) {
                    game_sub_0cf144(a0, a1);
                    *a0 = 1;
                    return 1;
                }
                if (iVar1 != 3) {
                    return iVar1;
                }
            }
            iVar2 = (int)*(short *)(0x148 + (int)a0);
            ar5_00 = a0 + *(short *)(0x148 + (int)a0) * 5 + 1;
            iVar1 = game_sub_0cf39c(a0);
            if (iVar1 == 2) {
                iVar1 = game_sub_0cf144(a0, ar5_00);
            }
        }
    }
    return iVar1;
}

/*
 * game_sub_0cf144  0x8c0cf144
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cbb2c, game_sub_0cebf8, game_sub_0ceff8
 */
u32 game_sub_0cf144(int a0, u32 a1) {
    int iVar1;

    *(u16 *)(0x144 + a0) = 0;
    *(u16 *)(0x146 + a0) = 0;
    *(u16 *)(0x148 + a0) = 0;
    *(u32 *)(0x14c + a0) = 0;
    *(u32 *)(0x150 + a0) = 0;
    *(u32 *)(0x154 + a0) = 0;
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
        *(u32 *)(0x4c8 + a0 + iVar1 * 4) = 0xffffff;
    }
    return 4;
}

/*
 * game_sub_0cf1bc  0x8c0cf1bc
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cbb2c
 */
u32 game_sub_0cf1bc(u32 *a0, u32 a1, u32 a2, u32 a3) {
    CTexture_ReleaseFromVRAM((int)a0 + 0x158, a1, a2, a3);
    *a0 = 0;
    return 0;
}

/*
 * game_sub_0cf1e4  0x8c0cf1e4
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cf1e4(int a0, int a1) {
    int iVar1;
    int iVar2;

    iVar2 = *(int *)(a0 + 0x150);
    if ((iVar2 < 5) && (-1 < iVar2)) {
        switch (iVar2) {
        case 0:
            for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                *(u32 *)(a0 + iVar2 * 4 + 0x4c8) = 0xffffff;
            }
            *(u16 *)(a0 + 0x146) = 0;
            *(u32 *)(a0 + 0x150) = 1;
            break;
        case 1:
            if (*(u32 *)(a0 + 0x4c8) < 0xfaffffff) {
                for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                    iVar1 = a0 + iVar2 * 4;
                    *(int *)(iVar1 + 0x4c8) = *(int *)(iVar1 + 0x4c8) + 0x5000000;
                }
            } else {
                for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                    *(u32 *)(a0 + iVar2 * 4 + 0x4c8) = 0xffffffff;
                }
                *(u32 *)(a0 + 0x150) = 2;
            }
            break;
        case 2:
            *(short *)(a0 + 0x146) = *(short *)(a0 + 0x146) + 1;
            if (*(short *)(a1 + 0x10) <= *(short *)(a0 + 0x146)) {
                *(u16 *)(a0 + 0x146) = 0;
                *(u32 *)(a0 + 0x150) = 3;
            }
            break;
        case 3:
            if (*(u32 *)(a0 + 0x4c8) < 0x6000000) {
                for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                    *(u32 *)(a0 + iVar2 * 4 + 0x4c8) = 0xffffff;
                }
                *(u16 *)(a0 + 0x146) = 0;
                *(u32 *)(a0 + 0x150) = 4;
            } else {
                for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
                    iVar1 = a0 + iVar2 * 4;
                    *(int *)(iVar1 + 0x4c8) = *(int *)(iVar1 + 0x4c8) + -0x5000000;
                }
            }
            break;
        case 4:
            *(short *)(a0 + 0x146) = *(short *)(a0 + 0x146) + 1;
            if (0x59 < *(short *)(a0 + 0x146)) {
                *(u16 *)(a0 + 0x146) = 0;
                *(u32 *)(a0 + 0x150) = 0;
                return 5;
            }
        }
    }
    return *(u32 *)(a0 + 0x150);
}

/*
 * game_sub_0cf39c  0x8c0cf39c
 * area name: game code; nothing names its area yet
 * called by: game_sub_0ceff8
 */
u32 game_sub_0cf39c(int a0) {
    u32 r5;
    u32 r6;
    u32 r7;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    u32 in_stack_ffffffa0;

    iVar2 = 0;
    if (g_8c43742c == '\0') {
        g_8c437428 = 0;
        g_8c43742c = '\x01';
    }
    if (*(int *)(a0 + 0x154) == 0) {
        for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
                set_fields_0_4_0cf630(iVar2 * 0x78 + a0 + iVar3 * 0x18 + 0x174, r5, r6, r7, in_stack_ffffffa0);
                set_fields_10_14(iVar2 * 0x78 + a0 + iVar3 * 0x18 + 0x174);
            }
        }
        g_8c437428 = game_sub_0cf9b4(a0);
        set_field_14_to_1(g_8c437428);
        *(u32 *)(a0 + 0x154) = 1;
    } else if (*(int *)(a0 + 0x154) == 1) {
        if ((2.0 <= *(float *)(g_8c437428 + 0x10)) && (g_8c437428 = game_sub_0cf9b4(a0), g_8c437428 != 0)) {
            set_field_14_to_1(g_8c437428);
        }
        for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
            for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
                iVar1 = get_field_14_0cf620(iVar3 * 0x78 + a0 + iVar4 * 0x18 + 0x174);
                if (iVar1 == 1) {
                    game_sub_0c5294(iVar3 * 0x78 + a0 + iVar4 * 0x18 + 0x174);
                }
            }
        }
        for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
            for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
                iVar1 = get_field_14_0cf620(iVar3 * 0x78 + a0 + iVar4 * 0x18 + 0x174);
                if (iVar1 == 1) {
                    iVar2 = iVar2 + 1;
                }
            }
        }
        if ((g_8c437428 == 0) && (iVar2 == 0)) {
            *(u32 *)(a0 + 0x154) = 0;
            return 2;
        }
    }
    return *(u32 *)(a0 + 0x154);
}

/*
 * get_field_14_0cf620  0x8c0cf620
 * called by: game_sub_0cf39c, game_sub_0cf9b4
 */
u32 get_field_14_0cf620(int a0) {
    return *(u32 *)(a0 + 0x14);
}

/*
 * set_field_14_to_1  0x8c0cf628
 * called by: game_sub_0cf39c
 */
u32 set_field_14_to_1(int a0) {
    *(u32 *)(a0 + 0x14) = 1;
    return 1;
}

/*
 * set_fields_0_4_0cf630  0x8c0cf630
 * stores +0x0, +0x4
 * called by: game_sub_0cf39c
 */
u32 set_fields_0_4_0cf630(u32 *a0, u32 unused_a1, u32 unused_a2, u32 unused_a3, u32 ain0) {
    u32 in_fr5;
    u32 in_fr4;

    *a0 = in_fr4;
    a0[1] = in_fr5;
    return ain0;
}

/*
 * game_sub_0cf63c  0x8c0cf63c
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cb9c8
 */
int game_sub_0cf63c(int *a0, u32 unused_a1, u32 unused_a2, u32 a3) {
    int iVar1;

    iVar1 = 1;
    if (*a0 != 1) {
        if (*(int *)(0x14c + (int)a0) == 1) {
            iVar1 = (*(code *)(&game_sub_0cf6bc))(a0, a0 + *(short *)(0x148 + (int)a0) * 5 + 1,
                                                  (int)*(short *)(0x148 + (int)a0), a3);
        } else {
            iVar1 = *(int *)(0x14c + (int)a0);
            if (iVar1 == 3) {
                iVar1 = (*(code *)(&game_sub_0cf7a4))(a0, a0 + *(short *)(0x148 + (int)a0) * 5 + 1,
                                                      (int)*(short *)(0x148 + (int)a0), a3);
            }
        }
    }
    return iVar1;
}

/*
 * game_sub_0cf6bc  0x8c0cf6bc
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cf6bc(int a0, u64 *a1, u32 a2, u32 a3) {
    int iVar1;
    u32 uVar2;
    short sVar3;
    u64 in_dr0;
    char cVar4;

    cVar4 = '\0';
    if (g_8c437434 == '\0') {
        in_dr0 = CONCAT44(0x43c00000, (int)in_dr0);
        g_8c437430 = 0x43c00000;
        g_8c437434 = '\x01';
    }
    if (g_8c43743c == '\0') {
        in_dr0 = CONCAT44(0x438c0000, (int)in_dr0);
        g_8c437438 = 0x438c0000;
        g_8c43743c = '\x01';
    }
    uVar2 = 2;
    sVar3 = (short)a2;
    iVar1 = libgcc_divide_helper_01031c((int)sVar3, 2, a2);
    if (iVar1 == 0) {
        if (cVar4 == '\0') {
            *(u32 *)a1 = 0x43c00000;
            *(u32 *)((int)a1 + 4) = 0x438c0000;
        } else {
            *a1 = 0x8c43743c43c00000;
            *(u64 *)((int)a1 + 4) = 0x8c01031c438c0000;
        }
    } else if (cVar4 == '\0') {
        *(u32 *)a1 = 0;
        *(u32 *)((int)a1 + 4) = 0x438c0000;
    } else {
        *a1 = in_dr0 & 0xffffffff;
        *(u64 *)((int)a1 + 4) = 0x8c01031c438c0000;
    }
    obj_set_texlist(a0 + 0x158, uVar2, a2);
    iVar1 = (int)sVar3;
    obj_set_texture_num(a0 + 0x158, iVar1);
    uVar2 = Class_129808_draw_offset(a0 + 0x160, iVar1, a2, a3);
    return uVar2;
}

/*
 * game_sub_0cf7a4  0x8c0cf7a4
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cf7a4(int a0, int a1, int a2, u32 a3) {
    short sVar1;
    short sVar2;
    u64 *puVar3;
    double *pdVar4;
    float *pfVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    u32 uVar9;
    float fVar10;
    double in_dr0;
    double dVar11;
    u64 in_xd0;
    char cVar12;
    char cVar13;
    float fStack_38;
    u64 auStack_34[4];

    cVar13 = '\0';
    cVar12 = '\0';
    iVar8 = a2;
    for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
        for (iVar7 = 0; iVar7 < 5; iVar7 = iVar7 + 1) {
            obj_set_texlist(a0 + 0x158, a1, iVar8);
            obj_set_texture_num(a0 + 0x158, (int)(short)a2);
            sVar1 = (short)iVar7;
            *(short *)(a0 + 0x508) = sVar1 * 0x32;
            sVar2 = (short)iVar6;
            *(short *)(a0 + 0x50a) = sVar2 * 0x32 + 0x32;
            *(short *)(a0 + 0x50c) = sVar1 * 0x32;
            *(short *)(a0 + 0x50e) = sVar2 * 0x32;
            *(short *)(a0 + 0x510) = sVar1 * 0x32 + 0x32;
            *(short *)(a0 + 0x512) = sVar2 * 0x32;
            *(short *)(a0 + 0x514) = sVar1 * 0x32 + 0x32;
            *(short *)(a0 + 0x516) = sVar2 * 0x32 + 0x32;
            for (iVar8 = 0; uVar9 = SUB84(in_dr0, 0), iVar8 < 4; iVar8 = iVar8 + 1) {
                puVar3 = (u64 *)(iVar6 * 0x78 + a0 + iVar7 * 0x18 + 0x174);
                if (cVar13 == '\0') {
                    uVar9 = *(u32 *)puVar3;
                } else {
                    in_xd0 = *puVar3;
                }
                pdVar4 = (double *)(a0 + iVar8 * 8 + 0x4e8);
                if (cVar13 == '\0') {
                    dVar11 = (double)CONCAT44(*(u32 *)pdVar4, uVar9);
                } else {
                    dVar11 = *pdVar4;
                }
                if (cVar12 == '\0') {
                    fVar10 = SUB84(dVar11, 0) + (float)((u64)dVar11 >> 0x20);
                } else {
                    fVar10 = SUB84(dVar11 + dVar11, 0);
                }
                if (cVar13 == '\0') {
                    (&fStack_38)[iVar8 * 2] = fVar10;
                } else {
                    *(u64 *)(&fStack_38 + iVar8 * 2) = in_xd0;
                }
                pfVar5 = (float *)(iVar6 * 0x78 + a0 + iVar7 * 0x18 + 0x178);
                if (cVar13 == '\0') {
                    fVar10 = *pfVar5;
                } else {
                    in_xd0 = *(u64 *)pfVar5;
                }
                pdVar4 = (double *)(a0 + iVar8 * 8 + 0x4ec);
                if (cVar13 == '\0') {
                    in_dr0 = (double)CONCAT44(*(u32 *)pdVar4, fVar10);
                } else {
                    in_dr0 = *pdVar4;
                }
                if (cVar12 == '\0') {
                    in_dr0 = (double)(u64)(u32)(SUB84(in_dr0, 0) + (float)((u64)in_dr0 >> 0x20));
                } else {
                    in_dr0 = in_dr0 + in_dr0;
                }
                if (cVar13 == '\0') {
                    *(int *)(auStack_34 + iVar8) = SUB84(in_dr0, 0);
                } else {
                    auStack_34[iVar8] = in_xd0;
                }
            }
            a3 = 4;
            iVar8 = a0 + 0x4c8;
            set_fields_0_4_c(a0 + 0x3cc, &fStack_38, iVar8, 4);
            a1 = a0 + 0x508;
            Class_129808_set_model(a0 + 0x3cc, a1, iVar8);
            Class_129808_draw(a0 + 0x3cc, a1, iVar8, a3);
        }
    }
    return 5;
}

/*
 * game_sub_0cf9b4  0x8c0cf9b4
 * area name: game code; nothing names its area yet
 * called by: game_sub_0cf39c
 */
int game_sub_0cf9b4(int a0) {
    int iVar1;
    short *ar4_00;
    u32 ar7_00;
    int iVar2;
    int iVar3;
    int iVar4;
    float fVar5;
    code *pcVar7;
    double dVar6;
    u32 uVar8;
    u64 in_dr2;
    double dVar9;
    char cVar10;
    char cVar11;
    short asStack_7c[52];

    cVar11 = '\0';
    cVar10 = '\0';
    ar7_00 = 4;
    ar4_00 = asStack_7c;
    vec_new_array(ar4_00, set_fields_0_2_wrap, free_if_nonnull_wrap_016660, 4, 0x19);
    iVar2 = 0;
    for (iVar3 = 0; uVar8 = (u32)in_dr2, iVar3 < 5; iVar3 = iVar3 + 1) {
        for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
            ar4_00 = (short *)(iVar3 * 0x78 + a0 + iVar4 * 0x18 + 0x174);
            iVar1 = get_field_14_0cf620(ar4_00);
            if (iVar1 != 1) {
                if (cVar11 == '\0') {
                    fVar5 = *(float *)(iVar3 * 0x78 + a0 + iVar4 * 0x18 + 0x178);
                    pcVar7 = (code *)0x44278000;
                } else {
                    fVar5 = 670.0;
                    pcVar7 = vec_delete_array;
                }
                if (fVar5 != (float)pcVar7) {
                    asStack_7c[iVar2 * 2] = (short)iVar4;
                    asStack_7c[iVar2 * 2 + 1] = (short)iVar3;
                    iVar2 = iVar2 + 1;
                }
            }
        }
    }
    if (iVar2 == 0) {
        vec_delete_array(asStack_7c, free_if_nonnull_wrap_016660, 4, 0x19);
        iVar2 = 0;
    } else if (iVar2 == 1) {
        iVar2 = asStack_7c[1] * 0x78 + a0 + asStack_7c[0] * 0x18 + 0x174;
        vec_delete_array(asStack_7c, free_if_nonnull_wrap_016660, 4, 0x19);
    } else {
        iVar3 = rand();
        if (cVar10 == '\0') {
            dVar9 = (double)CONCAT44((float)iVar2, uVar8);
        } else {
            dVar9 = (double)iVar2;
        }
        if (cVar11 == '\0') {
            dVar6 = (double)CONCAT44(0x47000000, (float)iVar3);
        } else {
            dVar6 = 3.428006581677106e-307;
        }
        if (cVar10 == '\0') {
            iVar3 = (int)((float)((u64)dVar9 >> 0x20) * (SUB84(dVar6, 0) / (float)((u64)dVar6 >> 0x20)));
        } else {
            iVar3 = (int)(dVar9 * (dVar6 / dVar6));
        }
        if (iVar2 == iVar3) {
            iVar3 = iVar2 + -1;
        }
        iVar2 = asStack_7c[iVar3 * 2 + 1] * 0x78 + a0 + asStack_7c[iVar3 * 2] * 0x18 + 0x174;
        vec_delete_array(asStack_7c, free_if_nonnull_wrap_016660, 4, 0x19);
    }
    return iVar2;
}

/*
 * get_field_2d15c_0cfbc0  0x8c0cfbc0
 */
u32 get_field_2d15c_0cfbc0(int a0) {
    return *(u32 *)(0x2d15c + a0);
}

/*
 * game_sub_0cfbcc  0x8c0cfbcc
 * area name: game code; nothing names its area yet
 */
u32 game_sub_0cfbcc(u32 unused_a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    code *pcVar2;
    u32 uVar3;
    char cVar4;

    cVar4 = '\0';
    uVar1 = Vec3_ctor_xyz(&g_8c1263e8, a1, a2, a3);
    uVar3 = 0x8c4368d0;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4368d0, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c1263f8, pcVar2, uVar3, a3);
    uVar3 = 0x8c4368dc;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4368dc, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126408, pcVar2, uVar3, a3);
    uVar3 = 0x8c4368e8;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4368e8, a3);
    uVar1 = Vec3_ctor_xyz(&g_8c126418, pcVar2, uVar3, a3);
    uVar3 = 0x8c4368f4;
    pcVar2 = Vec3_dtor;
    global_list_push(uVar1, Vec3_dtor, 0x8c4368f4, a3);
    if (cVar4 == '\0') {
        g_8c126428 = CONCAT44(_UNK_8c12642c, 0x800000);
        /* WARNING: Read-only address (ram,0x8c12642c) is written */
    } else {
        g_8c126428 = 0xffffffff00800000;
    }
    uVar1 = clear_field_0_wrap_015ab8(0x8c43690c);
    uVar3 = 0x8c436900;
    pcVar2 = free_if_nonnull_wrap_016bfc;
    global_list_push(uVar1, free_if_nonnull_wrap_016bfc, 0x8c436900, a3);
    uVar1 = Class_129920_ctor(0x8c43691c, pcVar2);
    uVar3 = 0x8c436910;
    pcVar2 = Class_129920_dtor;
    global_list_push(uVar1, Class_129920_dtor, 0x8c436910, a3);
    uVar1 = clear_5_words(0x8c436938, pcVar2, uVar3, a3);
    uVar3 = 0x8c43692c;
    pcVar2 = free_if_nonnull_wrap_0151a0;
    global_list_push(uVar1, free_if_nonnull_wrap_0151a0, 0x8c43692c, a3);
    uVar1 = clear_5_words(0x8c436958, pcVar2, uVar3, a3);
    uVar3 = 0x8c43694c;
    pcVar2 = free_if_nonnull_wrap_0151a0;
    global_list_push(uVar1, free_if_nonnull_wrap_0151a0, 0x8c43694c, a3);
    uVar1 = clear_5_words(0x8c436978, pcVar2, uVar3, a3);
    uVar3 = 0x8c43696c;
    pcVar2 = free_if_nonnull_wrap_0151a0;
    global_list_push(uVar1, free_if_nonnull_wrap_0151a0, 0x8c43696c, a3);
    uVar1 = game_sub_0cebf8(&g_8c436a28);
    uVar3 = 0x8c436a1c;
    pcVar2 = game_sub_0cfed8;
    global_list_push(uVar1, game_sub_0cfed8, 0x8c436a1c, a3);
    uVar1 = game_sub_0199d4(0x8c436f4c, pcVar2, uVar3, a3);
    uVar3 = 0x8c436f40;
    pcVar2 = Class_129a24_dtor;
    global_list_push(uVar1, Class_129a24_dtor, 0x8c436f40, a3);
    uVar1 = game_sub_0c5208(0x8c437028, pcVar2);
    uVar3 = 0x8c43701c;
    pcVar2 = game_sub_0cfe78;
    global_list_push(uVar1, game_sub_0cfe78, 0x8c43701c, a3);
    uVar1 = Class_12b930_sub_017830(0x8c43706c);
    uVar3 = 0x8c437060;
    pcVar2 = free_if_nonnull_wrap_0cfe48;
    global_list_push(uVar1, free_if_nonnull_wrap_0cfe48, 0x8c437060, a3);
    uVar1 = clear_field_0_wrap_015ab8(0x8c4370fc);
    uVar3 = 0x8c4370f0;
    pcVar2 = free_if_nonnull_wrap_016bfc;
    global_list_push(uVar1, free_if_nonnull_wrap_016bfc, 0x8c4370f0, a3);
    uVar1 = Vec3_ctor_xyz(0x8c43710c, pcVar2, uVar3, a3);
    uVar1 = global_list_push(uVar1, Vec3_dtor, 0x8c437100, a3);
    return uVar1;
}

/*
 * free_if_nonnull_wrap_0cfe48  0x8c0cfe48
 * called by: Class_12b930_dtor
 */
int free_if_nonnull_wrap_0cfe48(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * game_sub_0cfe78  0x8c0cfe78
 * area name: game code; nothing names its area yet
 */
int game_sub_0cfe78(int a0, u32 a1, u32 a2, u32 a3) {
    u32 ar5_00;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        object_dtor_delete(a0 + 0xc, 0xffffffff, a2, a3);
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
 * game_sub_0cfed8  0x8c0cfed8
 * area name: game code; nothing names its area yet
 */
int game_sub_0cfed8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 uVar1;
    u32 uVar2;
    u32 in_stack_fffffff4;
    u32 ain0;

    ain0 = CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (u16)a1);
    if (a0 != 0) {
        free_if_nonnull_wrap_0151a0(a0 + 0x3cc, 0xffffffff, a2, a3);
        uVar2 = 0x19;
        uVar1 = 0x18;
        vec_delete_array(a0 + 0x174, game_sub_0cee98, 0x18, 0x19);
        free_if_nonnull_wrap_0151a0(a0 + 0x160, 0xffffffff, uVar1, uVar2);
        Class_129920_dtor(a0 + 0x158, 0xffffffff, uVar1, uVar2);
        uVar2 = 0x10;
        uVar1 = 0x14;
        vec_delete_array(a0 + 4, game_sub_0ceed8, 0x14, 0x10);
        if (0 < (short)ain0) {
            free_if_nonnull(a0);
        }
    }
    return a0;
}

/*
 * Class_12b930_sub_0cff78  0x8c0cff78
 * area name: only called from Class_12b930 methods
 * called by: Class_12b930_ctor
 */
int Class_12b930_sub_0cff78(int a0, u32 a1) {
    u32 extraout_fr1;
    char cVar1;

    cVar1 = '\0';
    Class_129920_ctor(a0, a1);
    clear_field_0_wrap_015ab8(a0 + 8);
    game_sub_02145c(a0 + 0x30);
    *(u32 *)(a0 + 0x20) = 0;
    if (cVar1 == '\0') {
        *(u32 *)(a0 + 0x24) = 0;
    } else {
        *(u64 *)(a0 + 0x24) = (u64)extraout_fr1;
    }
    CTexture_sub_0d0720(a0);
    return a0;
}

/*
 * free_if_nonnull_wrap_0cffc8  0x8c0cffc8
 * called by: Class_12b930_sub_0ddc40, Class_12b930_sub_0ddd14
 */
int free_if_nonnull_wrap_0cffc8(int a0, u32 a1, u32 a2, u32 a3) {
    u32 in_stack_fffffff4;

    if ((a0 != 0) && (0 < (short)a1)) {
        free_if_nonnull(a0, a1, a2, a3, CONCAT22((short)((u32)in_stack_fffffff4 >> 0x10), (short)a1));
    }
    return a0;
}

/*
 * CWaterTank_sub_0cfff8  0x8c0cfff8
 * name hint from a string it uses: GRAPHICS ENV; area name: only called from CWaterTank methods
 * called by: CWaterTank_CreateStage
 * strings: "suisou_Heater.nj"; "GRAPHICS\\ENV"; "suisou_Heater.nj"; "Failed NJCM:CHeater::CreateModel()" ...
 */
int CWaterTank_sub_0cfff8(int *a0, u32 a1) {
    int iVar1;
    int *ar7_00;
    u32 ar5_00;
    char *ar6_00;
    u32 *ar7_01;
    u32 uVar2;
    u32 uStack_28;
    u32 auStack_24[2];

    auStack_24[0] = 0;
    uStack_28 = 0;
    iVar1 = retry_until_done_0209b0(a1, "suisou_Heater.nj", "GRAPHICS\\ENV", auStack_24);
    if (iVar1 == 0) {
        report_error_message("suisou_Heater.nj", "Failed NJCM:CHeater::CreateModel()", 1, 2);
    }
    ar7_01 = &uStack_28;
    ar6_00 = "GRAPHICS\\ENV";
    iVar1 = retry_until_done_020aa8(a1, "suisou_Heater.nj", "GRAPHICS\\ENV", ar7_01);
    if (iVar1 == 0) {
        ar7_01 = (u32 *)0x2;
        ar6_00 = (char *)0x1;
        report_error_message("suisou_Heater.nj", "Failed NJTL:CHeater::CreateModel()", 1, 2);
    }
    set_field_0_015ad4(a0 + 2, auStack_24[0], ar6_00);
    ar5_00 = uStack_28;
    (**(code **)(*a0 + 8))(a0, uStack_28, ar6_00, ar7_01);
    ar7_00 = (int *)get_field_4_0253e4(a0, ar5_00, ar6_00, ar7_01);
    iVar1 = get_field_0_015bb8(a0 + 2);
    iVar1 = thunk_FUN_8c0151e8(*(u32 *)(*(int *)(iVar1 + 4) + 4), 0x17);
    a0[8] = iVar1 + 4;
    for (uVar2 = 0; uVar2 < (u32)ar7_00[1]; uVar2 = uVar2 + 1) {
        iVar1 = uVar2 * 0xc + *ar7_00;
        *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x80000000;
    }
    iVar1 = retry_until_done_020e80(a1, "HEATER", "GRAPHICS\\ENV", ar7_00);
    if (iVar1 == -1) {
        iVar1 = report_error_message("Failed to load water tank textuer..", &g_8c13d4fb, 1, 2);
    }
    return iVar1;
}
